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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/lazyload_images_opt.js

namespace net_instaweb {

const char* JS_lazyload_images_opt =
    "(function(){function f(a,b,d){if(a.addEventListener)a.addEve"
    "ntListener(b,d,!1);else if(a.attachEvent)a.attachEvent(\"on\"+"
    "b,d);else{var c=a[\"on\"+b];a[\"on\"+b]=function(){d.call(this);"
    "c&&c.call(this)}}};window.pagespeed=window.pagespeed||{};var"
    " g=window.pagespeed;function k(a){this.g=[];this.f=0;this.h="
    "!1;this.j=a;this.i=null;this.l=0;this.b=!1;this.a=0}function"
    " l(a,b){var d=b.getAttribute(\"data-pagespeed-lazy-position\")"
    ";if(d)return parseInt(d,0);var d=b.offsetTop,c=b.offsetParen"
    "t;c&&(d+=l(a,c));d=Math.max(d,0);b.setAttribute(\"data-pagesp"
    "eed-lazy-position\",d);return d}\nfunction m(a,b){var d,c,e;if"
    "(!a.b&&(0==b.offsetHeight||0==b.offsetWidth))return!1;a:if(b"
    ".currentStyle)c=b.currentStyle.position;else{if(document.def"
    "aultView&&document.defaultView.getComputedStyle&&(c=document"
    ".defaultView.getComputedStyle(b,null))){c=c.getPropertyValue"
    "(\"position\");break a}c=b.style&&b.style.position?b.style.pos"
    "ition:\"\"}if(\"relative\"==c)return!0;e=0;\"number\"==typeof wind"
    "ow.pageYOffset?e=window.pageYOffset:document.body&&document."
    "body.scrollTop?e=document.body.scrollTop:document.documentEl"
    "ement&&\ndocument.documentElement.scrollTop&&(e=document.docu"
    "mentElement.scrollTop);d=window.innerHeight||document.docume"
    "ntElement.clientHeight||document.body.clientHeight;c=e;e+=d;"
    "var h=b.getBoundingClientRect();h?(e=h.top-d,c=h.bottom):(h="
    "l(a,b),d=h+b.offsetHeight,e=h-e,c=d-c);return e<=a.f&&0<=c+a"
    ".f}\nk.prototype.m=function(a){p(a);var b=this;window.setTime"
    "out(function(){var d=a.getAttribute(\"data-pagespeed-lazy-src"
    "\");if(d)if((b.h||m(b,a))&&-1!=a.src.indexOf(b.j)){var c=a.pa"
    "rentNode,e=a.nextSibling;c&&c.removeChild(a);a.c&&(a.getAttr"
    "ibute=a.c);a.removeAttribute(\"onload\");a.tagName&&\"IMG\"==a.t"
    "agName&&g.CriticalImages&&f(a,\"load\",function(){g.CriticalIm"
    "ages.checkImageForCriticality(this);b.b&&(b.a--,b.a||g.Criti"
    "calImages.checkCriticalImages())});a.removeAttribute(\"data-p"
    "agespeed-lazy-src\");a.removeAttribute(\"data-pagespeed-lazy-r"
    "eplaced-functions\");\nc&&c.insertBefore(a,e);if(c=a.getAttrib"
    "ute(\"data-pagespeed-lazy-srcset\"))a.srcset=c,a.removeAttribu"
    "te(\"data-pagespeed-lazy-srcset\");a.src=d}else b.g.push(a)},0"
    ")};k.prototype.loadIfVisibleAndMaybeBeacon=k.prototype.m;k.p"
    "rototype.s=function(){this.h=!0;q(this)};k.prototype.loadAll"
    "Images=k.prototype.s;function q(a){var b=a.g,d=b.length;a.g="
    "[];for(var c=0;c<d;++c)a.m(b[c])}function t(a,b){return a.a?"
    "null!=a.a(b):null!=a.getAttribute(b)}\nk.prototype.u=function"
    "(){for(var a=document.getElementsByTagName(\"img\"),b=0,d;d=a["
    "b];b++)t(d,\"data-pagespeed-lazy-src\")&&p(d)};k.prototype.ove"
    "rrideAttributeFunctions=k.prototype.u;function p(a){t(a,\"dat"
    "a-pagespeed-lazy-replaced-functions\")||(a.c=a.getAttribute,a"
    ".getAttribute=function(a){\"src\"==a.toLowerCase()&&t(this,\"da"
    "ta-pagespeed-lazy-src\")&&(a=\"data-pagespeed-lazy-src\");retur"
    "n this.c(a)},a.setAttribute(\"data-pagespeed-lazy-replaced-fu"
    "nctions\",\"1\"))}\ng.o=function(a,b){function d(){if(!(c.b&&a||"
    "c.i)){var b=200;200<(new Date).getTime()-c.l&&(b=0);c.i=wind"
    "ow.setTimeout(function(){c.l=(new Date).getTime();q(c);c.i=n"
    "ull},b)}}var c=new k(b);g.lazyLoadImages=c;f(window,\"load\",f"
    "unction(){c.b=!0;c.h=a;c.f=200;if(g.CriticalImages){for(var "
    "b=0,d=document.getElementsByTagName(\"img\"),r=0,n;n=d[r];r++)"
    "-1!=n.src.indexOf(c.j)&&t(n,\"data-pagespeed-lazy-src\")&&b++;"
    "c.a=b;c.a||g.CriticalImages.checkCriticalImages()}q(c)});b.i"
    "ndexOf(\"data\")&&((new Image).src=b);f(window,\n\"scroll\",d);f("
    "window,\"resize\",d)};g.lazyLoadInit=g.o;})();\n";

}  // namespace net_instaweb
