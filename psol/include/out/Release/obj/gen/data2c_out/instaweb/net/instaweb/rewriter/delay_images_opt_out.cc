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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/delay_images_opt.js

namespace net_instaweb {

const char* JS_delay_images_opt =
    "(function(){function c(a,b,d){if(a.addEventListener)a.addEve"
    "ntListener(b,d,!1);else if(a.attachEvent)a.attachEvent(\"on\"+"
    "b,d);else{var e=a[\"on\"+b];a[\"on\"+b]=function(){d.call(this);"
    "e&&e.call(this)}}}var f=Date.now||function(){return+new Date"
    "};window.pagespeed=window.pagespeed||{};var g=window.pagespe"
    "ed;function h(){this.a=this.c=!1}h.prototype.b=function(a){f"
    "or(var b=0;b<a.length;++b){var d=a[b].getAttribute(\"data-pag"
    "espeed-high-res-src\");d&&a[b].setAttribute(\"src\",d)}};h.prot"
    "otype.replaceElementSrc=h.prototype.b;\nh.prototype.h=functio"
    "n(){if(this.c)this.a=!1;else{var a=document.body,b,d=0,e=thi"
    "s;\"ontouchstart\"in a?(c(a,\"touchstart\",function(){b=f()}),c("
    "a,\"touchend\",function(a){d=f();(null!=a.changedTouches&&2==a"
    ".changedTouches.length||null!=a.touches&&2==a.touches.length"
    "||500>d-b)&&k(e)})):c(window,\"click\",function(){k(e)});c(win"
    "dow,\"load\",function(){k(e)});this.c=!0}};h.prototype.registe"
    "rLazyLoadHighRes=h.prototype.h;function k(a){a.a||(a.f(),a.a"
    "=!0)}\nh.prototype.f=function(){this.b(document.getElementsBy"
    "TagName(\"img\"));this.b(document.getElementsByTagName(\"input\""
    "))};h.prototype.replaceWithHighRes=h.prototype.f;g.g=functio"
    "n(){g.delayImages=new h};g.delayImagesInit=g.g;})();\n";

}  // namespace net_instaweb
