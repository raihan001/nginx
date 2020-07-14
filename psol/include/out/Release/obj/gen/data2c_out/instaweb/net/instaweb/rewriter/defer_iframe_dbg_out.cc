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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/defer_iframe_dbg.js

namespace net_instaweb {

const char* JS_defer_iframe =
    "(function(){window.pagespeed = window.pagespeed || {};\nvar p"
    "agespeed = window.pagespeed;\npagespeed.DeferIframe = functio"
    "n() {\n};\npagespeed.DeferIframe.prototype.convertToIframe = f"
    "unction() {\n  var a = document.getElementsByTagName(\"pagespe"
    "ed_iframe\");\n  if (0 < a.length) {\n    for (var a = a[0], d "
    "= document.createElement(\"iframe\"), b = 0, c = a.attributes,"
    " e = c.length;b < e;++b) {\n      d.setAttribute(c[b].name, c"
    "[b].value);\n    }\n    a.parentNode.replaceChild(d, a);\n  }\n}"
    ";\npagespeed.DeferIframe.prototype.convertToIframe = pagespee"
    "d.DeferIframe.prototype.convertToIframe;\npagespeed.deferIfra"
    "meInit = function() {\n  var a = new pagespeed.DeferIframe;\n "
    " pagespeed.deferIframe = a;\n};\npagespeed.deferIframeInit = p"
    "agespeed.deferIframeInit;\n})();\n";

}  // namespace net_instaweb
