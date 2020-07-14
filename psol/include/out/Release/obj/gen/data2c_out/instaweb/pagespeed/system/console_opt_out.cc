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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/system/console_opt.js

namespace net_instaweb {

const char* JS_console_js_opt =
    "(function(){for(var f=\"function\"==typeof Object.defineProper"
    "ties?Object.defineProperty:function(a,b,c){if(c.get||c.set)t"
    "hrow new TypeError(\"ES3 does not support getters and setters"
    ".\");a!=Array.prototype&&a!=Object.prototype&&(a[b]=c.value)}"
    ",h=\"undefined\"!=typeof window&&window===this?this:\"undefined"
    "\"!=typeof global&&null!=global?global:this,k=[\"String\",\"prot"
    "otype\",\"repeat\"],l=0;l<k.length-1;l++){var m=k[l];m in h||(h"
    "[m]={});h=h[m]}\nvar n=k[k.length-1],p=h[n],q=p?p:function(a)"
    "{var b;if(null==this)throw new TypeError(\"The \'this\' value f"
    "or String.prototype.repeat must not be null or undefined\");b"
    "=this+\"\";if(0>a||1342177279<a)throw new RangeError(\"Invalid "
    "count value\");a|=0;for(var c=\"\";a;)if(a&1&&(c+=b),a>>>=1)b+="
    "b;return c};q!=p&&null!=q&&f(h,n,{configurable:!0,writable:!"
    "0,value:q});\nfunction r(a){var b=typeof a;if(\"object\"==b)if("
    "a){if(a instanceof Array)return\"array\";if(a instanceof Objec"
    "t)return b;var c=Object.prototype.toString.call(a);if(\"[obje"
    "ct Window]\"==c)return\"object\";if(\"[object Array]\"==c||\"numbe"
    "r\"==typeof a.length&&\"undefined\"!=typeof a.splice&&\"undefine"
    "d\"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable(\""
    "splice\"))return\"array\";if(\"[object Function]\"==c||\"undefined"
    "\"!=typeof a.call&&\"undefined\"!=typeof a.propertyIsEnumerable"
    "&&!a.propertyIsEnumerable(\"call\"))return\"function\"}else retu"
    "rn\"null\";\nelse if(\"function\"==b&&\"undefined\"==typeof a.call)"
    "return\"object\";return b}var t=\"closure_uid_\"+(1E9*Math.rando"
    "m()>>>0),u=0;function v(a){var b=[],c=0,d;for(d in a)b[c++]="
    "a[d];return b};function w(a){if(a.g&&\"function\"==typeof a.g)"
    "return a.g();if(\"string\"==typeof a)return a.split(\"\");var b="
    "r(a);if(\"array\"==b||\"object\"==b&&\"number\"==typeof a.length){"
    "for(var b=[],c=a.length,d=0;d<c;d++)b.push(a[d]);return b}re"
    "turn v(a)};function x(a,b){this.b={};this.a=[];this.h=this.c"
    "=0;var c=arguments.length;if(1<c){if(c%2)throw Error(\"Uneven"
    " number of arguments\");for(var d=0;d<c;d+=2)this.set(argumen"
    "ts[d],arguments[d+1])}else if(a){if(a instanceof x)d=y(a),c="
    "a.g();else{var c=[],e=0;for(d in a)c[e++]=d;d=c;c=v(a)}for(e"
    "=0;e<d.length;e++)this.set(d[e],c[e])}}x.prototype.g=functio"
    "n(){A(this);for(var a=[],b=0;b<this.a.length;b++)a.push(this"
    ".b[this.a[b]]);return a};function y(a){A(a);return a.a.conca"
    "t()}\nx.prototype.clear=function(){this.b={};this.h=this.c=th"
    "is.a.length=0};function A(a){if(a.c!=a.a.length){for(var b=0"
    ",c=0;b<a.a.length;){var d=a.a[b];B(a.b,d)&&(a.a[c++]=d);b++}"
    "a.a.length=c}if(a.c!=a.a.length){for(var e={},c=b=0;b<a.a.le"
    "ngth;)d=a.a[b],B(e,d)||(a.a[c++]=d,e[d]=1),b++;a.a.length=c}"
    "}x.prototype.get=function(a,b){return B(this.b,a)?this.b[a]:"
    "b};x.prototype.set=function(a,b){B(this.b,a)||(this.c++,this"
    ".a.push(a),this.h++);this.b[a]=b};\nx.prototype.forEach=funct"
    "ion(a,b){for(var c=y(this),d=0;d<c.length;d++){var e=c[d],g="
    "this.get(e);a.call(b,g,e,this)}};x.prototype.clone=function("
    "){return new x(this)};function B(a,b){return Object.prototyp"
    "e.hasOwnProperty.call(a,b)};function C(a){this.a=new x;a&&D("
    "this,a)}function E(a){var b=typeof a;return\"object\"==b&&a||\""
    "function\"==b?\"o\"+(a[t]||(a[t]=++u)):b.substr(0,1)+a}function"
    " D(a,b){for(var c=w(b),d=c.length,e=0;e<d;e++){var g=c[e];a."
    "a.set(E(g),g)}}C.prototype.removeAll=function(a){a=w(a);for("
    "var b=a.length,c=0;c<b;c++){var d=this.a,e=E(a[c]);B(d.b,e)&"
    "&(delete d.b[e],d.c--,d.h++,d.a.length>2*d.c&&A(d))}};C.prot"
    "otype.clear=function(){this.a.clear()};C.prototype.contains="
    "function(a){a=E(a);return B(this.a.b,a)};\nC.prototype.g=func"
    "tion(){return this.a.g()};C.prototype.clone=function(){retur"
    "n new C(this)};google.load(\"visualization\",\"1.0\",{packages:["
    "\"corechart\"]});function F(a){window.console&&console.error(a"
    ")}\nfunction G(){this.a=[];this.h=new C;this.b=this.c=null;th"
    "is.s={width:900,height:255,colors:[\"#4ECDC4\",\"#556270\",\"#C7F"
    "464\"],legend:{position:\"bottom\"},hAxis:{format:\"MMM d, y hh:"
    "mma\",gridlines:{color:\"#F2F2F2\"},baselineColor:\"#E5E5E5\"},vA"
    "xis:{format:\"#.###%\",minValue:0,viewWindowMode:\"explicit\",vi"
    "ewWindow:{min:0},gridlines:{color:\"#F2F2F2\"},baselineColor:\""
    "#E5E5E5\"},chartArea:{left:60,top:20,width:800},pointSize:2}}"
    "function H(a){var b={};b.f=new C([a]);b.evaluate=function(b)"
    "{return b(a)};return b}\nfunction I(a){var b={};b.f=new C;for"
    "(var c=0;c<a.length;c++)D(b.f,a[c].f);b.evaluate=function(b)"
    "{for(var c=0,d=0;d<a.length;d++)c+=a[d].evaluate(b);return c"
    "};return b}function J(a,b){var c={};c.f=new C;D(c.f,a.f);D(c"
    ".f,b.f);c.evaluate=function(c){var d=b.evaluate(c);return 0="
    "=d?0:a.evaluate(c)/d};return c}function K(a,b){return J(a,I("
    "[a,b]))}\nfunction L(){var a=new G;M(a,\"Resources not loaded "
    "because of fetch failures\",\"fetch-failure\",J(H(\"serf_fetch_f"
    "ailure_count\"),H(\"serf_fetch_request_count\")));M(a,\"Resource"
    "s not rewritten because domain wasn\'t authorized\",\"not-autho"
    "rized\",K(H(\"resource_url_domain_rejections\"),H(\"resource_url"
    "_domain_acceptances\")));M(a,\"Resources not rewritten because"
    " of restrictive Cache-Control headers\",\"cache-control\",K(H(\""
    "num_cache_control_not_rewritable_resources\"),H(\"num_cache_co"
    "ntrol_rewritable_resources\")));\nvar b=I([H(\"cache_backend_mi"
    "sses\"),H(\"cache_backend_hits\")]);M(a,\"Cache misses\",\"cache-m"
    "iss\",J(H(\"cache_backend_misses\"),b));M(a,\"Cache lookups that"
    " were expired\",\"cache-expired\",J(H(\"cache_expirations\"),b));"
    "M(a,\"CSS files not rewritten because of parse errors\",\"css-e"
    "rror\",K(H(\"css_filter_parse_failures\"),H(\"css_filter_blocks_"
    "rewritten\")));M(a,\"JavaScript minification failures\",\"js-err"
    "or\",K(H(\"javascript_minification_failures\"),H(\"javascript_bl"
    "ocks_minified\")));var b=I([H(\"image_rewrites\"),H(\"image_rewr"
    "ites_dropped_nosaving_resize\"),\nH(\"image_rewrites_dropped_no"
    "saving_noresize\")]),c=I([H(\"image_norewrites_high_resolution"
    "\"),H(\"image_rewrites_dropped_decode_failure\"),H(\"image_rewri"
    "tes_dropped_due_to_load\"),H(\"image_rewrites_dropped_mime_typ"
    "e_unknown\"),H(\"image_rewrites_dropped_server_write_fail\")]);"
    "M(a,\"Image rewrite failures\",\"image-error\",K(c,b));b=new Dat"
    "e;N(a,new Date(b-864E5),b);return a}var O=[\"pagespeed\",\"star"
    "tConsole\"],P=this;O[0]in P||!P.execScript||P.execScript(\"var"
    " \"+O[0]);\nfor(var Q;O.length&&(Q=O.shift());){var R;if(R=!O."
    "length)R=void 0!==L;R?P[Q]=L:P[Q]?P=P[Q]:P=P[Q]={}}function "
    "M(a,b,c,d){var e={};e.title=b;e.o=\"https://modpagespeed.com/"
    "doc/console#\"+c;e.value=d;e.u=a.a.length;e.i=null;e.j=null;e"
    ".l=null;e.m=null;a.a.push(e);D(a.h,d.f)}function S(a,b,c){va"
    "r d=pagespeedStatisticsUrl+\"?json\",d=d+(\"&start_time=\"+b.get"
    "Time()),d=d+(\"&end_time=\"+c.getTime()),d=d+\"&granularity=600"
    "00&var_titles=\";for(b=0;b<a.length;b++)d+=a[b]+\",\";return d}"
    "\nfunction N(a,b,c){var d=new XMLHttpRequest;b=S(a.h.g(),b,c)"
    ";d.onreadystatechange=function(){if(4==this.readyState)if(20"
    "0!=this.status||1>this.responseText.length||\"{\"!=this.respon"
    "seText[0])F(\"XHR request failed.\");else{var b=JSON.parse(thi"
    "s.responseText);T(a,b)}};d.open(\"GET\",b);d.send()}\nfunction "
    "T(a,b){a.c=b.variables;a.b=b.timestamps;U(a.b,a.c);for(var c"
    "=0;c<a.a.length;c++){for(var d=[],e=0;e<a.b.length;e++)d.pus"
    "h(a.a[c].value.evaluate(function(a){return function(b){if(b "
    "in a)return a[b][e];F(\"JSON data missing required variable.\""
    ");return 0}}(a.c)));a.a[c].i=d[d.length-1];a.a[c].j=a.a[c].i"
    ";a.a[c].l=W(a.a[c].title,a.b,d)}a.a.sort(function(a,b){retur"
    "n b.j-a.j});for(c=0;c<a.a.length;c++)X(a,a.a[c])}\nfunction U"
    "(a,b){for(var c in b)a.length!=b[c].length&&F(\"JSON response"
    " is malformed. (\"+a.length+\" != \"+b[c].length+\")\")}function "
    "W(a,b,c){var d=new google.visualization.DataTable;d.addColum"
    "n(\"datetime\",\"Time\");d.addColumn(\"number\",a);for(var e=0;e<b"
    ".length;e++)d.addRow([new Date(b[e]),c[e]]);0==d.getNumberOf"
    "Rows()&&F(\"Data failed to load for graph \"+a);return d}\nfunc"
    "tion X(a,b){var c=google.visualization.LineChart,d=b.title,e"
    "=b.i,g=b.o,V=b.u,z=document.createElement(\"div\");z.setAttrib"
    "ute(\"class\",\"pagespeed-widgets\");z.appendChild(Y(d,e,g,V));d"
    "=document.createElement(\"div\");d.setAttribute(\"class\",\"pages"
    "peed-graph\");z.appendChild(d);document.getElementById(\"pages"
    "peed-graphs-container\").appendChild(z);b.m=new c(d);b.m.draw"
    "(b.l,a.s)}\nfunction Y(a,b,c,d){var e=document.createElement("
    "\"div\");e.setAttribute(\"class\",\"pagespeed-widgets-topbar\");va"
    "r g=document.createElement(\"span\");g.setAttribute(\"class\",\"p"
    "agespeed-title\");g.setAttribute(\"id\",\"pagespeed-title\"+d);g."
    "appendChild(document.createTextNode(a+\": \"+(100*b).toFixed(2"
    ")+\"% (\"));a=document.createElement(\"a\");a.setAttribute(\"href"
    "\",c);a.appendChild(document.createTextNode(\"doc\"));g.appendC"
    "hild(a);g.appendChild(document.createTextNode(\")\"));e.append"
    "Child(g);return e};})();\n";

}  // namespace net_instaweb
