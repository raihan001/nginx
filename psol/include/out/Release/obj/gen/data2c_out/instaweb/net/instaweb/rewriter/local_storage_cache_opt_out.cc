// Copyright 2011 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/local_storage_cache_opt.js

namespace net_instaweb {

const char* JS_local_storage_cache_opt =
    "(function(){function d(b){var a=window;if(a.addEventListener"
    ")a.addEventListener(\"load\",b,!1);else if(a.attachEvent)a.att"
    "achEvent(\"onload\",b);else{var c=a.onload;a.onload=function()"
    "{b.call(this);c&&c.call(this)}}}var p=Date.now||function(){r"
    "eturn+new Date};window.pagespeed=window.pagespeed||{};var q="
    "window.pagespeed;function r(){this.a=!0}r.prototype.c=functi"
    "on(b){b=parseInt(b.substring(0,b.indexOf(\" \")),10);return!is"
    "NaN(b)&&b<=p()};r.prototype.hasExpired=r.prototype.c;r.proto"
    "type.b=function(b){return b.substring(b.indexOf(\" \",b.indexO"
    "f(\" \")+1)+1)};r.prototype.getData=r.prototype.b;r.prototype."
    "f=function(b){var a=document.getElementsByTagName(\"script\"),"
    "a=a[a.length-1];a.parentNode.replaceChild(b,a)};r.prototype."
    "replaceLastScript=r.prototype.f;\nr.prototype.g=function(b){v"
    "ar a=window.localStorage.getItem(\"pagespeed_lsc_url:\"+b),c=d"
    "ocument.createElement(a?\"style\":\"link\");a&&!this.c(a)?(c.typ"
    "e=\"text/css\",c.appendChild(document.createTextNode(this.b(a)"
    "))):(c.rel=\"stylesheet\",c.href=b,this.a=!0);this.f(c)};r.pro"
    "totype.inlineCss=r.prototype.g;\nr.prototype.h=function(b,a){"
    "var c=window.localStorage.getItem(\"pagespeed_lsc_url:\"+b+\" p"
    "agespeed_lsc_hash:\"+a),f=document.createElement(\"img\");c&&!t"
    "his.c(c)?f.src=this.b(c):(f.src=b,this.a=!0);for(var c=2,k=a"
    "rguments.length;c<k;++c){var g=arguments[c].indexOf(\"=\");f.s"
    "etAttribute(arguments[c].substring(0,g),arguments[c].substri"
    "ng(g+1))}this.f(f)};r.prototype.inlineImg=r.prototype.h;\nfun"
    "ction t(b,a,c,f){a=document.getElementsByTagName(a);for(var "
    "k=0,g=a.length;k<g;++k){var e=a[k],m=e.getAttribute(\"data-pa"
    "gespeed-lsc-hash\"),h=e.getAttribute(\"data-pagespeed-lsc-url\""
    ");if(m&&h){h=\"pagespeed_lsc_url:\"+h;c&&(h+=\" pagespeed_lsc_h"
    "ash:\"+m);var l=e.getAttribute(\"data-pagespeed-lsc-expiry\"),l"
    "=l?(new Date(l)).getTime():\"\",e=f(e);if(!e){var n=window.loc"
    "alStorage.getItem(h);n&&(e=b.b(n))}e&&(window.localStorage.s"
    "etItem(h,l+\" \"+m+\" \"+e),b.a=!0)}}}\nfunction u(b){t(b,\"img\",!"
    "0,function(a){return a.src});t(b,\"style\",!1,function(a){retu"
    "rn a.firstChild?a.firstChild.nodeValue:null})}\nq.i=function("
    "){if(window.localStorage){var b=new r;q.localStorageCache=b;"
    "d(function(){u(b)});d(function(){if(b.a){for(var a=[],c=[],f"
    "=0,k=p(),g=0,e=window.localStorage.length;g<e;++g){var m=win"
    "dow.localStorage.key(g);if(!m.indexOf(\"pagespeed_lsc_url:\"))"
    "{var h=window.localStorage.getItem(m),l=h.indexOf(\" \"),n=par"
    "seInt(h.substring(0,l),10);if(!isNaN(n))if(n<=k){a.push(m);c"
    "ontinue}else if(n<f||!f)f=n;c.push(h.substring(l+1,h.indexOf"
    "(\" \",l+1)))}}k=\"\";f&&(k=\"; expires=\"+(new Date(f)).toUTCStri"
    "ng());document.cookie=\n\"_GPSLSC=\"+c.join(\"!\")+k;g=0;for(e=a."
    "length;g<e;++g)window.localStorage.removeItem(a[g]);b.a=!1}}"
    ")}};q.localStorageCacheInit=q.i;})();\n";

}  // namespace net_instaweb
