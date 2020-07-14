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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/delay_images_inline_opt.js

namespace net_instaweb {

const char* JS_delay_images_inline_opt =
    "(function(){window.pagespeed=window.pagespeed||{};var a=wind"
    "ow.pagespeed;function d(){this.b={}}d.prototype.c=function(c"
    ",b){this.b[c]=b};d.prototype.addLowResImages=d.prototype.c;d"
    ".prototype.a=function(c){for(var b=0;b<c.length;++b){var e=c"
    "[b].getAttribute(\"data-pagespeed-high-res-src\"),f=c[b].getAt"
    "tribute(\"src\");e&&!f&&(e=this.b[e])&&c[b].setAttribute(\"src\""
    ",e)}};d.prototype.replaceElementSrc=d.prototype.a;d.prototyp"
    "e.g=function(){this.a(document.getElementsByTagName(\"img\"));"
    "this.a(document.getElementsByTagName(\"input\"))};\nd.prototype"
    ".replaceWithLowRes=d.prototype.g;a.f=function(){a.delayImage"
    "sInline=new d};a.delayImagesInlineInit=a.f;})();\n";

}  // namespace net_instaweb
