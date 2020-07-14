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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/delay_images_inline_dbg.js

namespace net_instaweb {

const char* JS_delay_images_inline =
    "(function(){window.pagespeed = window.pagespeed || {};\nvar p"
    "agespeed = window.pagespeed;\npagespeed.DelayImagesInline = f"
    "unction() {\n  this.inlineMap_ = {};\n};\npagespeed.DelayImages"
    "Inline.prototype.addLowResImages = function(a, b) {\n  this.i"
    "nlineMap_[a] = b;\n};\npagespeed.DelayImagesInline.prototype.a"
    "ddLowResImages = pagespeed.DelayImagesInline.prototype.addLo"
    "wResImages;\npagespeed.DelayImagesInline.prototype.replaceEle"
    "mentSrc = function(a) {\n  for (var b = 0;b < a.length;++b) {"
    "\n    var c = a[b].getAttribute(\"data-pagespeed-high-res-src\""
    "), d = a[b].getAttribute(\"src\");\n    c && !d && (c = this.in"
    "lineMap_[c]) && a[b].setAttribute(\"src\", c);\n  }\n};\npagespee"
    "d.DelayImagesInline.prototype.replaceElementSrc = pagespeed."
    "DelayImagesInline.prototype.replaceElementSrc;\npagespeed.Del"
    "ayImagesInline.prototype.replaceWithLowRes = function() {\n  "
    "this.replaceElementSrc(document.getElementsByTagName(\"img\"))"
    ";\n  this.replaceElementSrc(document.getElementsByTagName(\"in"
    "put\"));\n};\npagespeed.DelayImagesInline.prototype.replaceWith"
    "LowRes = pagespeed.DelayImagesInline.prototype.replaceWithLo"
    "wRes;\npagespeed.delayImagesInlineInit = function() {\n  var a"
    " = new pagespeed.DelayImagesInline;\n  pagespeed.delayImagesI"
    "nline = a;\n};\npagespeed.delayImagesInlineInit = pagespeed.de"
    "layImagesInlineInit;\n})();\n";

}  // namespace net_instaweb
