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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/critical_images_beacon_opt.js

namespace net_instaweb {

const char* JS_critical_images_beacon_opt =
    "(function(){for(var g=\"function\"==typeof Object.defineProper"
    "ties?Object.defineProperty:function(b,c,a){if(a.get||a.set)t"
    "hrow new TypeError(\"ES3 does not support getters and setters"
    ".\");b!=Array.prototype&&b!=Object.prototype&&(b[c]=a.value)}"
    ",h=\"undefined\"!=typeof window&&window===this?this:\"undefined"
    "\"!=typeof global&&null!=global?global:this,k=[\"String\",\"prot"
    "otype\",\"repeat\"],l=0;l<k.length-1;l++){var m=k[l];m in h||(h"
    "[m]={});h=h[m]}\nvar n=k[k.length-1],p=h[n],q=p?p:function(b)"
    "{var c;if(null==this)throw new TypeError(\"The \'this\' value f"
    "or String.prototype.repeat must not be null or undefined\");c"
    "=this+\"\";if(0>b||1342177279<b)throw new RangeError(\"Invalid "
    "count value\");b|=0;for(var a=\"\";b;)if(b&1&&(a+=c),b>>>=1)c+="
    "c;return a};q!=p&&null!=q&&g(h,n,{configurable:!0,writable:!"
    "0,value:q});var t=this;\nfunction u(b,c){var a=b.split(\".\"),d"
    "=t;a[0]in d||!d.execScript||d.execScript(\"var \"+a[0]);for(va"
    "r e;a.length&&(e=a.shift());)a.length||void 0===c?d[e]?d=d[e"
    "]:d=d[e]={}:d[e]=c};function v(b){var c=b.length;if(0<c){for"
    "(var a=Array(c),d=0;d<c;d++)a[d]=b[d];return a}return[]};fun"
    "ction w(b){var c=window;if(c.addEventListener)c.addEventList"
    "ener(\"load\",b,!1);else if(c.attachEvent)c.attachEvent(\"onloa"
    "d\",b);else{var a=c.onload;c.onload=function(){b.call(this);a"
    "&&a.call(this)}}};var x;function y(b,c,a,d,e){this.h=b;this."
    "j=c;this.l=a;this.f=e;this.g={height:window.innerHeight||doc"
    "ument.documentElement.clientHeight||document.body.clientHeig"
    "ht,width:window.innerWidth||document.documentElement.clientW"
    "idth||document.body.clientWidth};this.i=d;this.b={};this.a=["
    "];this.c={}}\nfunction z(b,c){var a,d,e=c.getAttribute(\"data-"
    "pagespeed-url-hash\");if(a=e&&!(e in b.c))if(0>=c.offsetWidth"
    "&&0>=c.offsetHeight)a=!1;else{d=c.getBoundingClientRect();va"
    "r f=document.body;a=d.top+(\"pageYOffset\"in window?window.pag"
    "eYOffset:(document.documentElement||f.parentNode||f).scrollT"
    "op);d=d.left+(\"pageXOffset\"in window?window.pageXOffset:(doc"
    "ument.documentElement||f.parentNode||f).scrollLeft);f=a.toSt"
    "ring()+\",\"+d;b.b.hasOwnProperty(f)?a=!1:(b.b[f]=!0,a=a<=b.g."
    "height&&d<=b.g.width)}a&&(b.a.push(e),\nb.c[e]=!0)}y.prototyp"
    "e.checkImageForCriticality=function(b){b.getBoundingClientRe"
    "ct&&z(this,b)};u(\"pagespeed.CriticalImages.checkImageForCrit"
    "icality\",function(b){x.checkImageForCriticality(b)});u(\"page"
    "speed.CriticalImages.checkCriticalImages\",function(){A(x)});"
    "\nfunction A(b){b.b={};for(var c=[\"IMG\",\"INPUT\"],a=[],d=0;d<c"
    ".length;++d)a=a.concat(v(document.getElementsByTagName(c[d])"
    "));if(a.length&&a[0].getBoundingClientRect){for(d=0;c=a[d];+"
    "+d)z(b,c);a=\"oh=\"+b.l;b.f&&(a+=\"&n=\"+b.f);if(c=!!b.a.length)"
    "for(a+=\"&ci=\"+encodeURIComponent(b.a[0]),d=1;d<b.a.length;++"
    "d){var e=\",\"+encodeURIComponent(b.a[d]);131072>=a.length+e.l"
    "ength&&(a+=e)}b.i&&(e=\"&rd=\"+encodeURIComponent(JSON.stringi"
    "fy(B())),131072>=a.length+e.length&&(a+=e),c=!0);C=a;if(c){d"
    "=b.h;b=b.j;var f;if(window.XMLHttpRequest)f=\nnew XMLHttpRequ"
    "est;else if(window.ActiveXObject)try{f=new ActiveXObject(\"Ms"
    "xml2.XMLHTTP\")}catch(r){try{f=new ActiveXObject(\"Microsoft.X"
    "MLHTTP\")}catch(D){}}f&&(f.open(\"POST\",d+(-1==d.indexOf(\"?\")?"
    "\"?\":\"&\")+\"url=\"+encodeURIComponent(b)),f.setRequestHeader(\"C"
    "ontent-Type\",\"application/x-www-form-urlencoded\"),f.send(a))"
    "}}}\nfunction B(){var b={},c;c=document.getElementsByTagName("
    "\"IMG\");if(!c.length)return{};var a=c[0];if(!(\"naturalWidth\"i"
    "n a&&\"naturalHeight\"in a))return{};for(var d=0;a=c[d];++d){v"
    "ar e=a.getAttribute(\"data-pagespeed-url-hash\");e&&(!(e in b)"
    "&&0<a.width&&0<a.height&&0<a.naturalWidth&&0<a.naturalHeight"
    "||e in b&&a.width>=b[e].o&&a.height>=b[e].m)&&(b[e]={rw:a.wi"
    "dth,rh:a.height,ow:a.naturalWidth,oh:a.naturalHeight})}retur"
    "n b}var C=\"\";u(\"pagespeed.CriticalImages.getBeaconData\",func"
    "tion(){return C});\nu(\"pagespeed.CriticalImages.Run\",function"
    "(b,c,a,d,e,f){var r=new y(b,c,a,e,f);x=r;d&&w(function(){win"
    "dow.setTimeout(function(){A(r)},0)})});})();\n";

}  // namespace net_instaweb
