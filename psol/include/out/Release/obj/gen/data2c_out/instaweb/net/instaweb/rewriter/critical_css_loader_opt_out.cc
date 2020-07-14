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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/critical_css_loader_opt.js

namespace net_instaweb {

const char* JS_critical_css_loader_opt =
    "(function(){function b(){var a=window,c=e;if(a.addEventListe"
    "ner)a.addEventListener(\"load\",c,!1);else if(a.attachEvent)a."
    "attachEvent(\"onload\",c);else{var d=a.onload;a.onload=functio"
    "n(){c.call(this);d&&d.call(this)}}};var f=!1;function e(){if"
    "(!f){f=!0;for(var a=document.getElementsByClassName(\"psa_add"
    "_styles\"),c=0,d;d=a[c];++c)if(\"NOSCRIPT\"==d.nodeName){var k="
    "document.createElement(\"div\");k.innerHTML=d.textContent;docu"
    "ment.body.appendChild(k)}}}function g(){var a=window.request"
    "AnimationFrame||window.webkitRequestAnimationFrame||window.m"
    "ozRequestAnimationFrame||window.oRequestAnimationFrame||wind"
    "ow.msRequestAnimationFrame||null;a?a(function(){window.setTi"
    "meout(e,0)}):b()}\nvar h=[\"pagespeed\",\"CriticalCssLoader\",\"Ru"
    "n\"],l=this;h[0]in l||!l.execScript||l.execScript(\"var \"+h[0]"
    ");for(var m;h.length&&(m=h.shift());)h.length||void 0===g?l["
    "m]?l=l[m]:l=l[m]={}:l[m]=g;})();\n";

}  // namespace net_instaweb
