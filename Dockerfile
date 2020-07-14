ARG BASE_IMAGE_TAG="latest"

FROM andycungkrinxxx/base-build:${BASE_IMAGE_TAG}

ARG NGINX_VER=1.19.0

ENV NGINX_VER="${NGINX_VER}" \
    APP_ROOT="/var/www/html" \
    FILES_DIR="/mnt/files" \
    NGINX_VHOST_PRESET="html"

RUN set -ex; \
    \
    nginx_up_ver="0.9.1"; \
    ngx_pagespeed_ver="1.13.35.2"; \
    mod_pagespeed_ver="1.13.35.2"; \
    ngx_modsecurity_ver="1.0.0"; \
    modsecurity_ver="3.0.3"; \
    owasp_crs_ver="3.1.0"; \
    \
    addgroup -S nginx; \
    adduser -S -D -H -h /var/cache/nginx -s /sbin/nologin -G nginx nginx; \
    \
    apk add --update --no-cache -t .tools \
        findutils \
        make \
        nghttp2 \
        sudo; \
    \
    apk add --update --no-cache -t .nginx-build-deps \
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
        zlib-dev; \
     \
     apk add --no-cache -t .libmodsecurity-build-deps \
        autoconf \
        automake \
        bison \
        curl \
        flex \
        g++ \
        git \
        libmaxminddb-dev \
        libstdc++ \
        libtool \
        libxml2-dev \
        pcre-dev \
        rsync \
        sed \
        yajl \
        yajl-dev; \
    \
    # Get ngx pagespeed module.
    git clone -b "v${ngx_pagespeed_ver}-stable" \
          --recurse-submodules \
          --shallow-submodules \
          --depth=1 \
          -c advice.detachedHead=false \
          -j$(getconf _NPROCESSORS_ONLN) \
          https://github.com/apache/incubator-pagespeed-ngx.git \
          /tmp/ngx_pagespeed; \
    \
    # Get psol for alpine.
    url="https://github.com/wodby/nginx-alpine-psol/releases/download/${mod_pagespeed_ver}/psol.tar.gz"; \
    wget -qO- "${url}" | tar xz -C /tmp/ngx_pagespeed/; \
    
    # Download nginx.
    curl -fSL "https://nginx.org/download/nginx-${NGINX_VER}.tar.gz" -o /tmp/nginx.tar.gz; \
    curl -fSL "https://nginx.org/download/nginx-${NGINX_VER}.tar.gz.asc"  -o /tmp/nginx.tar.gz.asc; \
    GPG_KEYS=B0F4253373F8F6F510D42178520A9993A1C052F8 gpg_verify /tmp/nginx.tar.gz.asc /tmp/nginx.tar.gz; \
    tar zxf /tmp/nginx.tar.gz -C /tmp; \
    \
    ls -l /tmp/; \
    ls -l /tmp/ngx_pagespeed/psol/; \
    ls -l /tmp/ngx_pagespeed/psol/include; \
    cd "/tmp/nginx-${NGINX_VER}"; \
    ./configure \
        --prefix=/usr/share/nginx \
        --sbin-path=/usr/sbin/nginx \
        --modules-path=/usr/lib/nginx/modules \
        --conf-path=/etc/nginx/nginx.conf \
        --pid-path=/var/run/nginx/nginx.pid \
        --lock-path=/var/run/nginx/nginx.lock \
        --http-client-body-temp-path=/var/cache/nginx/client_temp \
        --http-proxy-temp-path=/var/cache/nginx/proxy_temp \
        --http-fastcgi-temp-path=/var/cache/nginx/fastcgi_temp \
        --http-uwsgi-temp-path=/var/cache/nginx/uwsgi_temp \
        --http-scgi-temp-path=/var/cache/nginx/scgi_temp \
        --user=nginx \
        --group=nginx \
        --with-compat \
        --with-file-aio \
        --with-http_addition_module \
        --with-http_auth_request_module \
        --with-http_dav_module \
        --with-http_flv_module \
        --with-http_gunzip_module \
        --with-http_gzip_static_module \
		--with-http_image_filter_module=dynamic \
        --with-http_mp4_module \
        --with-http_random_index_module \
        --with-http_realip_module \
        --with-http_secure_link_module \
		--with-http_slice_module \
        --with-http_ssl_module \
        --with-http_stub_status_module \
        --with-http_sub_module \
        --with-http_v2_module \
		--with-http_xslt_module=dynamic \
        --with-ipv6 \
        --with-ld-opt="-Wl,-z,relro,--start-group -lapr-1 -laprutil-1 -licudata -licuuc -lpng -lturbojpeg -ljpeg" \
        --with-mail \
        --with-mail_ssl_module \
        --with-pcre-jit \
        --with-stream \
        --with-stream_ssl_module \
		--with-stream_ssl_preread_module \
		--with-stream_realip_module \
        --with-threads \
        #--add-module=/tmp/ngx_http_uploadprogress_module \
        #--add-module=/tmp/ngx_brotli \
        --add-dynamic-module=/tmp/ngx_pagespeed; \
        #--add-dynamic-module=/tmp/ngx_http_modsecurity_module; \
    \
    make -j$(getconf _NPROCESSORS_ONLN); \
    make modules; \
    make install; \
    mkdir -p /usr/share/nginx/modules; \
    \
    install -g nginx -o nginx -d \
        "${APP_ROOT}" \
        "${FILES_DIR}" \
        /etc/nginx/conf.d \
        /var/cache/nginx \
        /var/lib/nginx; \
    \
    touch /etc/nginx/upstream.conf; \
    \
    install -g nginx -o nginx -d \
        /var/cache/ngx_pagespeed \
        /pagespeed_static \
        /ngx_pagespeed_beacon; \
    \
    install -m 400 -d /etc/nginx/pki; \
    strip /usr/sbin/nginx*; \
    strip /usr/lib/nginx/modules/*.so; \
    strip /usr/local/lib/libmodsecurity.so*; \
    \
    for i in /usr/lib/nginx/modules/*.so; do ln -s "${i}" /usr/share/nginx/modules/; done; \
    \
    runDeps="$( \
		scanelf --needed --nobanner --format '%n#p' /usr/sbin/nginx /usr/local/modsecurity/lib/*.so /usr/lib/nginx/modules/*.so /tmp/envsubst \
			| tr ',' '\n' \
			| sort -u \
			| awk 'system("[ -e /usr/local/lib/" $1 " ]") == 0 { next } { print "so:" $1 }' \
	)"; \
	apk add --no-cache --virtual .nginx-rundeps $runDeps; \
    \
    echo "find ${APP_ROOT} ${FILES_DIR} -maxdepth 0 -uid 0 -type d -exec chown root:root {} +" > /usr/local/bin/init_volumes; \
    chmod +x /usr/local/bin/init_volumes; \
    \
    apk del --purge .nginx-build-deps .nginx-edge-build-deps .libmodsecurity-build-deps; \
    rm -rf \
        /tmp/* \
        /usr/local/modsecurity \
        /var/cache/apk/* ; \
    \
    mkdir /etc/nginx/sites-enabled /etc/nginx/ssl; \
    cp /usr/local/nginx/conf/mime.types /etc/nginx/; 

# Move to fresh image
FROM nginx:1.18.0-alpine
LABEL maintainer="Andy Cungkrinx <andy.silva270114@gmail.com>"

COPY --from=builder /usr/sbin/nginx /usr/sbin/
COPY --from=builder /usr/lib/nginx /usr/lib/
COPY --from=builder /etc/nginx/ /etc/nginx/
COPY --from=builder /usr/local/modsecurity /etc/nginx/
COPY --from=builder /usr/local/owasp-modsecurity-crs /etc/nginx/owasp-modsecurity-crs

# Copy Pagespeed
COPY --from=builder /var/cache/ngx_pagespeed /var/cache/ngx_pagespeed
COPY --from=builder /pagespeed_static /pagespeed_static
COPY --from=builder /ngx_pagespeed_beacon /ngx_pagespeed_beacon

# Copy local config files into the image
COPY errors /usr/share/nginx/errors
COPY conf/nginx/ /etc/nginx/
COPY conf/modsec/ /etc/nginx/modsec/
COPY conf/owasp/ /usr/local/owasp-modsecurity-crs/

RUN addgroup -S nginx && \
    adduser -D -S -h /var/cache/nginx -s /sbin/nologin -G nginx nginx && \
    mkdir -p /var/log/nginx && \
    touch /var/log/nginx/access.log /var/log/nginx/error.log && \
    chown nginx: /var/log/nginx/access.log /var/log/nginx/error.log && \
    ln -sf /dev/stdout /var/log/nginx/access.log && \
    ln -sf /dev/stderr /var/log/nginx/error.log && \
    chown nginx: /etc/nginx/ -R

RUN nginx -t && nginx -v
WORKDIR /var/www/html

EXPOSE 80 443
