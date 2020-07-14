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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/critical_css_beacon_opt.js

namespace net_instaweb {

const char* JS_critical_css_beacon_opt =
    "(function(){function f(b){var a=window;if(a.addEventListener"
    ")a.addEventListener(\"load\",b,!1);else if(a.attachEvent)a.att"
    "achEvent(\"onload\",b);else{var c=a.onload;a.onload=function()"
    "{b.call(this);c&&c.call(this)}}};window.pagespeed=window.pag"
    "espeed||{};var k=window.pagespeed;function l(b,a,c,g,h){this"
    ".h=b;this.i=a;this.l=c;this.j=g;this.b=h;this.c=[];this.a=0}"
    "l.prototype.f=function(b){for(var a=0;250>a&&this.a<this.b.l"
    "ength;++a,++this.a)try{document.querySelector(this.b[this.a]"
    ")&&this.c.push(this.b[this.a])}catch(c){}this.a<this.b.lengt"
    "h?window.setTimeout(this.f.bind(this),0,b):b()};\nk.g=functio"
    "n(b,a,c,g,h){if(document.querySelector&&Function.prototype.b"
    "ind){var d=new l(b,a,c,g,h);f(function(){window.setTimeout(f"
    "unction(){d.f(function(){for(var a=\"oh=\"+d.l+\"&n=\"+d.j,a=a+\""
    "&cs=\",b=0;b<d.c.length;++b){var c=0<b?\",\":\"\",c=c+encodeURICo"
    "mponent(d.c[b]);if(131072<a.length+c.length)break;a+=c}k.cri"
    "ticalCssBeaconData=a;var b=d.h,c=d.i,e;if(window.XMLHttpRequ"
    "est)e=new XMLHttpRequest;else if(window.ActiveXObject)try{e="
    "new ActiveXObject(\"Msxml2.XMLHTTP\")}catch(m){try{e=new Activ"
    "eXObject(\"Microsoft.XMLHTTP\")}catch(n){}}e&&\n(e.open(\"POST\","
    "b+(-1==b.indexOf(\"?\")?\"?\":\"&\")+\"url=\"+encodeURIComponent(c))"
    ",e.setRequestHeader(\"Content-Type\",\"application/x-www-form-u"
    "rlencoded\"),e.send(a))})},0)})}};k.criticalCssBeaconInit=k.g"
    ";})();\n";

}  // namespace net_instaweb
