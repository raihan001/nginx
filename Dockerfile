ARG ALPINE_VERSION=3.8

########################
# Build pagespeed psol #
########################
FROM alpine:$ALPINE_VERSION as pagespeed

# Check https://github.com/apache/incubator-pagespeed-mod/tags
ARG MOD_PAGESPEED_TAG=v1.14.36.1

RUN apk add --no-cache \
    apache2-dev \
    apr-dev \
    apr-util-dev \
    build-base \
    curl \
    gettext-dev \
    git \
    gperf \
    icu-dev \
    libjpeg-turbo-dev \
    libpng-dev \
    libressl-dev \
    pcre-dev \
    py-setuptools \
    patch \
    libpng-dev \
    libpng \
    zlib-dev;
WORKDIR /usr/src
RUN git clone -b ${MOD_PAGESPEED_TAG} \
    --recurse-submodules \
    --depth=100 \
    -c advice.detachedHead=false \
    -j2 \
    https://github.com/apache/incubator-pagespeed-mod.git \
    modpagespeed;

WORKDIR /usr/src/modpagespeed
COPY patches/modpagespeed/*.patch ./

RUN for i in *.patch; do printf "\r\nApplying patch ${i%%.*}\r\n"; patch -p1 < $i || exit 1; done

WORKDIR /usr/src/modpagespeed/tools/gyp
RUN ./setup.py install
WORKDIR /usr/src/modpagespeed

RUN build/gyp_chromium --depth=. \
    -D use_system_libs=1; \
    cd /usr/src/modpagespeed/pagespeed/automatic;\
    make psol BUILDTYPE=Release \
    CFLAGS+="-I/usr/include/apr-1" \
    CXXFLAGS+="-I/usr/include/apr-1 -DUCHAR_TYPE=uint16_t" \
    -j2;

RUN mkdir -p /usr/src/ngxpagespeed/psol/lib/Release/linux/x64; \
    mkdir -p /usr/src/ngxpagespeed/psol/include/out/Release; \
    cp -R out/Release/obj /usr/src/ngxpagespeed/psol/include/out/Release/; \
    cp -R pagespeed/automatic/pagespeed_automatic.a /usr/src/ngxpagespeed/psol/lib/Release/linux/x64/; \
    cp -R net \
    pagespeed \
    testing \
    third_party \
    url \
    /usr/src/ngxpagespeed/psol/include/;

########################
# Build modsecurity    #
########################
FROM alpine:$ALPINE_VERSION as modsecurity
ARG ngx_modsecurity_ver="1.0.0" 
ARG modsecurity_ver="3.0.3" 
ARG owasp_crs_ver="3.1.0" 

RUN apk add --no-cache \
    autoconf \
    automake \
    bison \
    curl \
    flex \
    g++ \
    git \
    wget \
    libmaxminddb-dev \
    libstdc++ \
    libtool \
    libxml2-dev \
    pcre-dev \
    rsync \
    sed \
    yajl \
    yajl-dev \
    apr-dev \
    apr-util-dev \
    build-base \
    gd-dev \
    git \
    gnupg \
    gperf \
    icu-dev \
    libjpeg-turbo-dev \
    libpng-dev \
    libressl-dev \
    libtool \
    libxslt-dev \
    linux-headers \
    pcre-dev \
    make \
    zlib-dev; 

# ModSecurity 
WORKDIR /usr/src
RUN git clone --depth 1 -b "v${modsecurity_ver}" --single-branch https://github.com/SpiderLabs/ModSecurity; \
    cd ModSecurity; \
    git submodule init;  \
    git submodule update; \
    ./build.sh; \
    ./configure --disable-doxygen-doc --disable-doxygen-html; \
    make -j2; \
    make install;  \
    mkdir -p /etc/nginx/modsecurity/; \
    mv modsecurity.conf-recommended /etc/nginx/modsecurity/recommended.conf;  \
    sed -i 's/SecRuleEngine DetectionOnly/SecRuleEngine On/' /etc/nginx/modsecurity/recommended.conf; \
    cp unicode.mapping /etc/nginx/modsecurity/; \
    rsync -a --links /usr/local/modsecurity/lib/libmodsecurity.so* /usr/local/lib/; 

# Get ngx modsecurity module.
WORKDIR /usr/src
RUN mkdir -p ngx_http_modsecurity_module; \
    ver="${ngx_modsecurity_ver}"; \
    url="https://github.com/SpiderLabs/ModSecurity-nginx/releases/download/v${ver}/modsecurity-nginx-v${ver}.tar.gz"; \
    wget -qO- "${url}" | tar xz --strip-components=1 -C $PWD/ngx_http_modsecurity_module;

# OWASP
WORKDIR /usr/src
RUN wget -qO- "https://github.com/SpiderLabs/owasp-modsecurity-crs/archive/v${owasp_crs_ver}.tar.gz" | tar xz -C $PWD; \ 
    cd owasp-modsecurity-crs-*; \    
    sed -i "s#SecRule REQUEST_COOKIES|#SecRule REQUEST_URI|REQUEST_COOKIES|#" rules/REQUEST-941-APPLICATION-ATTACK-XSS.conf; \
    mkdir -p /etc/nginx/modsecurity/crs/; \
    mv crs-setup.conf.example /etc/nginx/modsecurity/crs/setup.conf; \
    mv rules /etc/nginx/modsecurity/crs; 


########################################################
# Build Nginx with support for PageSpeed & Modsecurity #
########################################################
FROM alpine:$ALPINE_VERSION AS nginx
RUN apk add --no-cache \
    git \
    tar \
    wget;

# Get ngx uploadprogress & brotli module
RUN cd /tmp; \
    git clone https://github.com/google/ngx_brotli.git /tmp/ngx_brotli; \
    cd /tmp/ngx_brotli && git submodule update --init ; \
    cd /tmp/; \
    mkdir -p /tmp/ngx_http_uploadprogress_module; \
    url="https://github.com/masterzen/nginx-upload-progress-module/archive/v0.9.1.tar.gz"; \
    wget -qO- "${url}" | tar xz --strip-components=1 -C /tmp/ngx_http_uploadprogress_module; 

# Check https://github.com/apache/incubator-pagespeed-ngx/tags
ARG NGX_PAGESPEED_TAG=v1.13.35.2-stable

# Check http://nginx.org/en/download.html for the latest version.
ARG NGINX_VERSION=1.18.0
ARG NGINX_PGPKEY=520A9993A1C052F8
ARG NGINX_BUILD_CONFIG=" \
    --prefix=/etc/nginx \
    --sbin-path=/usr/sbin/nginx \
    --modules-path=/usr/lib/nginx/modules \
    --conf-path=/etc/nginx/nginx.conf \
    --error-log-path=/var/log/nginx/error.log \
    --http-log-path=/var/log/nginx/access.log \
    --pid-path=/var/run/nginx.pid \
    --lock-path=/var/run/nginx.lock \
    --http-client-body-temp-path=/var/cache/nginx/client_temp \
    --http-proxy-temp-path=/var/cache/nginx/proxy_temp \
    --http-fastcgi-temp-path=/var/cache/nginx/fastcgi_temp \
    --http-uwsgi-temp-path=/var/cache/nginx/uwsgi_temp \
    --http-scgi-temp-path=/var/cache/nginx/scgi_temp \
    --user=nginx \
    --group=nginx \
    --with-http_ssl_module \
    --with-http_realip_module \
    --with-http_addition_module \
    --with-http_sub_module \
    --with-http_dav_module \
    --with-http_flv_module \
    --with-http_mp4_module \
    --with-http_gunzip_module \
    --with-http_gzip_static_module \
    --with-http_random_index_module \
    --with-http_secure_link_module \
    --with-http_stub_status_module \
    --with-http_auth_request_module \
    --with-http_xslt_module=dynamic \
    --with-http_image_filter_module=dynamic \
    --with-http_geoip_module=dynamic \
    --with-threads \
    --with-stream \
    --with-stream_ssl_module \
    --with-stream_ssl_preread_module \
    --with-stream_realip_module \
    --with-stream_geoip_module=dynamic \
    --with-http_slice_module \
    --with-mail \
    --with-mail_ssl_module \
    --with-compat \
    --with-file-aio \
    --with-http_v2_module \
    --with-pcre-jit \
    --add-module=/tmp/ngx_brotli \
    --add-module=/tmp/ngx_http_uploadprogress_module \
    --add-dynamic-module=/tmp/ngx_http_modsecurity_module"

RUN apk add --no-cache \
    apr-dev \
    apr-util-dev \
    build-base \
    ca-certificates \
    gd-dev \
    geoip-dev \
    git \
    wget \
    gnupg \
    icu-dev \
    libjpeg-turbo-dev \
    libpng-dev \
    libxslt-dev \
    linux-headers \
    libressl-dev \
    pcre-dev \
    tar \
    zlib-dev;

WORKDIR /usr/src
RUN git clone -b ${NGX_PAGESPEED_TAG} \
    --recurse-submodules \
    --shallow-submodules \
    --depth=1 -j2 \
    -c advice.detachedHead=false \
    https://github.com/apache/incubator-pagespeed-ngx.git \
    ngxpagespeed;

RUN wget https://nginx.org/download/nginx-${NGINX_VERSION}.tar.gz \
    https://nginx.org/download/nginx-${NGINX_VERSION}.tar.gz.asc; \
    (gpg --keyserver ha.pool.sks-keyservers.net --keyserver-options timeout=10 --recv-keys ${NGINX_PGPKEY} || \
    gpg --keyserver hkp://keyserver.ubuntu.com:80 --keyserver-options timeout=10 --recv-keys ${NGINX_PGPKEY} || \
    gpg --keyserver hkp://p80.pool.sks-keyservers.net:80 --keyserver-options timeout=10 --recv-keys $NGINX_PGPKEY} ); \
    gpg --trusted-key ${NGINX_PGPKEY} --verify nginx-${NGINX_VERSION}.tar.gz.asc

COPY --from=pagespeed /usr/src/ngxpagespeed /usr/src/ngxpagespeed
COPY --from=modsecurity /usr/src/ngx_http_modsecurity_module /tmp/ngx_http_modsecurity_module
COPY --from=modsecurity /usr/local/modsecurity /usr/local/modsecurity
COPY --from=modsecurity /etc/nginx/modsecurity /etc/nginx/modsecurity

WORKDIR /usr/src/nginx

RUN tar zxf ../nginx-${NGINX_VERSION}.tar.gz --strip-components=1 -C .; \
    ./configure \
    ${NGINX_BUILD_CONFIG} \
    --add-module=/usr/src/ngxpagespeed \
    --with-ld-opt="-Wl,-z,relro,--start-group -lapr-1 -laprutil-1 -licudata -licuuc -lpng -lturbojpeg -ljpeg"; \
    make install -j2

RUN rm -rf /etc/nginx/html/; \
    mkdir /etc/nginx/conf.d/; \
    mkdir -p /usr/share/nginx/html/; \
    install -m644 html/index.html /usr/share/nginx/html/; \
    install -m644 html/50x.html /usr/share/nginx/html/; \
    ln -s ../../usr/lib/nginx/modules /etc/nginx/modules; \
    strip /usr/sbin/nginx* \
    /usr/lib/nginx/modules/*.so;

COPY conf/nginx/nginx.conf /etc/nginx/nginx.conf
COPY conf/nginx/nginx.conf /etc/nginx/nginx.conf
COPY conf/nginx/conf.d /etc/nginx/conf.d
COPY conf/nginx/sites-enabled /etc/nginx/sites-enabled
COPY conf/nginx/modules/modules.conf /etc/nginx/modules/modules.conf
COPY errors /usr/share/nginx/html/errors
COPY pagespeed.png /usr/share/nginx/html/pagespeed.png


##########################################
# Combine everything with minimal layers #
##########################################
FROM alpine:$ALPINE_VERSION
LABEL maintainer="Andy Cungkrinx <andy.silva270114@gmail.com>" \
    version.mod-pagespeed="v1.14.36.1" \
    version.nginx="1.18.0" \
    version.ngx-pagespeed="v1.13.35.2"
RUN apk add --no-cache \
    rsync \
    pcre-dev \
    yajl \
    libmaxminddb;

COPY --from=pagespeed /usr/bin/envsubst /usr/local/bin
COPY --from=nginx /usr/sbin/nginx /usr/sbin/nginx
COPY --from=nginx /usr/lib/nginx/modules/ /usr/lib/nginx/modules/
COPY --from=nginx /etc/nginx /etc/nginx
COPY --from=nginx /usr/share/nginx/html/ /usr/share/nginx/html/
COPY --from=nginx /usr/local/modsecurity /usr/local/modsecurity
RUN rsync -a --links /usr/local/modsecurity/lib/libmodsecurity.so* /usr/local/lib/; \
    mkdir /var/www /var/www/html;
COPY conf/nginx/index.html /var/www/html/index.html
RUN apk --no-cache upgrade; \
    scanelf --needed --nobanner --format '%n#p' /usr/sbin/nginx /usr/lib/nginx/modules/*.so /usr/local/bin/envsubst \
    | tr ',' '\n' \
    | awk 'system("[ -e /usr/local/lib/" $1 " ]") == 0 { next } { print "so:" $1 }' \
    | xargs apk add --no-cache; \
    apk add --no-cache tzdata; \
    addgroup -S nginx; \
    adduser -D -S -h /var/cache/nginx -s /sbin/nologin -G nginx nginx; \
    install -g nginx -o nginx -d /var/cache/ngx_pagespeed; \
    mkdir -p /var/log/nginx; \
    ln -sf /dev/stdout /var/log/nginx/access.log; \
    ln -sf /dev/stderr /var/log/nginx/error.log; \
    chown nginx:nginx /usr/share/nginx/html/ -R;

EXPOSE 80

STOPSIGNAL SIGTERM

CMD ["/usr/sbin/nginx", "-g", "daemon off;"]

