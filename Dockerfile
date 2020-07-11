FROM alpine:edge AS builder
LABEL maintainer="Andy Cungkrinx <andy.silva270114@gmail.com>"

# Add builder tools
RUN apk update && apk --no-cache add --virtual .build-deps gcc libc-dev make openssl-dev pcre-dev \
    zlib-dev automake perl linux-headers curl gnupg libxslt-dev gd-dev geoip-dev perl-dev lua-dev lmdb-dev \    
    autoconf libtool go g++ clang git wget curl patch cmake g++ yajl-dev pkgconf libcurl apache2-dev apr-dev \
    apr-util-dev build-base gettext-dev gperf icu-dev libjpeg-turbo-dev libpng-dev libressl-dev py-setuptools \
    zlib-dev

#Mod security
RUN cd $HOME && \
    git clone --depth 1 -b v3/master --single-branch https://github.com/SpiderLabs/ModSecurity && \
    cd $HOME/ModSecurity && \
    git submodule update --init --recursive && \
    git submodule update && \
    ./build.sh && \
    ./configure --with-lmdb && \
    make -j2 && \
    make -j2 install && \
    make -j2 clean

# Clone Repo
RUN cd $HOME && \
    export NGINX_PATH="/etc/nginx" && export NGINX_VERSION="1.18.0" && \
    export MODSEC_BRANCH="v3.0.4" && export GEO_DB_RELEASE="2020-07" && export OWASP_BRANCH="v3.2/master" && \
    curl -O https://nginx.org/download/nginx-$NGINX_VERSION.tar.gz && \
    tar xvzf nginx-$NGINX_VERSION.tar.gz && \
    git clone --recursive https://github.com/google/ngx_brotli.git && \
    git clone -b master --depth 1 https://github.com/leev/ngx_http_geoip2_module.git && \
    git clone -b $OWASP_BRANCH --depth 1 https://github.com/SpiderLabs/owasp-modsecurity-crs && \
    mkdir -p /etc/nginx/geoip && \
    wget -O - https://download.db-ip.com/free/dbip-city-lite-$GEO_DB_RELEASE.mmdb.gz | gzip -d > /etc/nginx/geoip/dbip-city-lite.mmdb && \
    wget -O - https://download.db-ip.com/free/dbip-country-lite-$GEO_DB_RELEASE.mmdb.gz | gzip -d > /etc/nginx/geoip/dbip-country-lite.mmdb

# Build
RUN cd $HOME/nginx-$NGINX_VERSION/ && \
    curl https://sh.rustup.rs -sSf | sh -s -- -y -q && \
    export PATH="$HOME/.cargo/bin:$PATH" && \
    ./configure \
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
    --with-http_perl_module=dynamic \
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
    --add-module=$HOME/ngx_brotli && \
    --add-dynamic-module=$HOME/ModSecurity-nginx \
    --add-dynamic-module=$HOME/ngx_http_geoip2_module \
    make -j2 && make -j2 modules && \
    make install

RUN apk del .build-deps && rm -rf $HOME/*
RUN mkdir /etc/nginx/sites-enabled /etc/nginx/ssl && \
    cp /usr/local/nginx/conf/mime.types /etc/nginx/

# Move to fresh image
FROM nginx:1.18.0-alpine
LABEL maintainer="Andy Cungkrinx <andy.silva270114@gmail.com>"

COPY --from=builder /usr/sbin/nginx /usr/sbin/
COPY --from=builder /usr/lib/nginx /usr/lib/
COPY --from=builder /etc/nginx/* /etc/nginx/
COPY --from=builder /usr/local/modsecurity /etc/nginx/
COPY --from=builder /usr/local/owasp-modsecurity-crs /etc/nginx/owasp-modsecurity-crs

# Copy local config files into the image
COPY errors /usr/share/nginx/errors
COPY conf/nginx/ /etc/nginx/
COPY conf/modsec/ /etc/nginx/modsec/
COPY conf/owasp/ /usr/local/owasp-modsecurity-crs/

RUN apk add --no-cache tzdata pcre libgcc redis yajl libstdc++ libmaxminddb-dev lmdb-dev libxml2-dev curl-dev && \
    addgroup -S nginx && \
    adduser -D -S -h /var/cache/nginx -s /sbin/nologin -G nginx nginx && \
    mkdir -p /var/log/nginx && \
    touch /var/log/nginx/access.log /var/log/nginx/error.log && \
    chown nginx: /var/log/nginx/access.log /var/log/nginx/error.log && \
    ln -sf /dev/stdout /var/log/nginx/access.log && \
    ln -sf /dev/stderr /var/log/nginx/error.log && \
    chown nginx: /etc/nginx/ -R

RUN nginx -t && nginx -v
WORKDIR /usr/share/nginx/html

EXPOSE 80 443
