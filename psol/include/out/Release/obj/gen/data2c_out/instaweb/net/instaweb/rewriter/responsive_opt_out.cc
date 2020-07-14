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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/responsive_opt.js

namespace net_instaweb {

const char* JS_responsive_js_opt =
    "(function(){for(var h=\"function\"==typeof Object.defineProper"
    "ties?Object.defineProperty:function(a,c,b){if(b.get||b.set)t"
    "hrow new TypeError(\"ES3 does not support getters and setters"
    ".\");a!=Array.prototype&&a!=Object.prototype&&(a[c]=b.value)}"
    ",k=\"undefined\"!=typeof window&&window===this?this:\"undefined"
    "\"!=typeof global&&null!=global?global:this,l=[\"String\",\"prot"
    "otype\",\"repeat\"],m=0;m<l.length-1;m++){var n=l[m];n in k||(k"
    "[n]={});k=k[n]}\nvar p=l[l.length-1],q=k[p],r=q?q:function(a)"
    "{var c;if(null==this)throw new TypeError(\"The \'this\' value f"
    "or String.prototype.repeat must not be null or undefined\");c"
    "=this+\"\";if(0>a||1342177279<a)throw new RangeError(\"Invalid "
    "count value\");a|=0;for(var b=\"\";a;)if(a&1&&(b+=c),a>>>=1)c+="
    "c;return b};r!=q&&null!=r&&h(k,p,{configurable:!0,writable:!"
    "0,value:r});function t(a,c,b){return a.call.apply(a.bind,arg"
    "uments)}\nfunction u(a,c,b){if(!a)throw Error();if(2<argument"
    "s.length){var e=Array.prototype.slice.call(arguments,2);retu"
    "rn function(){var b=Array.prototype.slice.call(arguments);Ar"
    "ray.prototype.unshift.apply(b,e);return a.apply(c,b)}}return"
    " function(){return a.apply(c,arguments)}}function v(a,c,b){v"
    "=Function.prototype.bind&&-1!=Function.prototype.bind.toStri"
    "ng().indexOf(\"native code\")?t:u;return v.apply(null,argument"
    "s)};function w(a){var c=Number(a);return!c&&/^[\\s\\xa0]*$/.te"
    "st(a)?NaN:c};function x(a){return window.matchMedia(\"(min-re"
    "solution: \"+a+\"dppx),(min--moz-device-pixel-ratio: \"+a+\"),(m"
    "in-resolution: \"+96*a+\"dpi)\").matches?a:0};function y(a,c){t"
    "his.a=a;this.b=c}function z(a){this.c=a;this.b=0;this.a=[]}f"
    "unction A(){this.a=[]}function B(a,c){var b=new Image;b.onlo"
    "ad=function(){a.src=c};b.src=c}\nA.prototype.b=function(){var"
    " a;a=document.documentElement.clientWidth/window.innerWidth;"
    "var c=window;a=(void 0!==c.devicePixelRatio?c.devicePixelRat"
    "io:c.matchMedia?x(3)||x(2)||x(1.5)||x(1)||.75:1)*a;for(var c"
    "=this.a.length,b=0;b<c;++b){var e=this.a[b],d=a;if(d>e.b)for"
    "(var g=e.a.length,f=0;f<g;++f)if(d<=e.a[f].a){e.b=e.a[f].a;B"
    "(e.c,e.a[f].b);break}}};function C(a,c){var b=a.search(c);re"
    "turn-1==b?a.length:b}var D=/[ \\t\\n\\f\\r]/,E=/[^ \\t\\n\\f\\r]/,F="
    "/[ \\t\\n\\f\\r,]/,G=/[^ \\t\\n\\f\\r,]/;\nfunction H(a,c,b){a=new z("
    "a);var e=!1,d=C(b,G);for(b=b.slice(d);0<b.length;){var d=C(b"
    ",D),g=b.slice(0,d);b=b.slice(d);if(\",\"==g[g.length-1])return"
    " null;d=C(b,E);b=b.slice(d);var d=C(b,F),f=b.slice(0,d);b=b."
    "slice(d);if(1<f.length&&\"x\"==f[f.length-1]){d=w(f.slice(0,-1"
    "));if(isNaN(d))return null;a.a.push(new y(d,g));1==d&&(e=!0)"
    "}else return null;d=C(b,E);b=b.slice(d);if(0<b.length&&\",\"!="
    "b[0])return null;b=b.slice(1);d=C(b,G);b=b.slice(d)}!e&&c&&a"
    ".a.push(new y(1,c));a.a.sort(function(a,b){return a.a-b.a});"
    "\nreturn a}(function(){for(var a=new A,c=document.getElements"
    "ByTagName(\"IMG\"),b=0,e;e=c[b];++b){var d=e.getAttribute(\"src"
    "\"),g=e.getAttribute(\"srcset\");g&&(e=H(e,d,g))&&a.a.push(e)}w"
    "indow.addEventListener(\"resize\",v(a.b,a));window.addEventLis"
    "tener(\"touchmove\",v(function(a){1<a.touches.length&&this.b()"
    "},a));a.b()})();})();\n";

}  // namespace net_instaweb
