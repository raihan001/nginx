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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/client_domain_rewriter_dbg.js

namespace net_instaweb {

const char* JS_client_domain_rewriter =
    "(function(){var ENTER_KEY_CODE = 13;\nwindow.pagespeed = wind"
    "ow.pagespeed || {};\nvar pagespeed = window.pagespeed;\npagesp"
    "eed.ClientDomainRewriter = function(a) {\n  this.mappedDomain"
    "Names_ = a;\n};\npagespeed.ClientDomainRewriter.prototype.anch"
    "orListener = function(a) {\n  a = a || window.event;\n  if (\"k"
    "eypress\" != a.type || a.keyCode == ENTER_KEY_CODE) {\n    for"
    " (var b = a.target;null != b;b = b.parentNode) {\n      if (\""
    "A\" == b.tagName) {\n        this.processEvent(b.href, a);\n   "
    "     break;\n      }\n    }\n  }\n};\npagespeed.ClientDomainRewri"
    "ter.prototype.addEventListeners = function() {\n  var a = thi"
    "s;\n  document.body.onclick = function(b) {\n    a.anchorListe"
    "ner(b);\n  };\n  document.body.onkeypress = function(b) {\n    "
    "a.anchorListener(b);\n  };\n};\npagespeed.ClientDomainRewriter."
    "prototype.processEvent = function(a, b) {\n  for (var c = 0;c"
    " < this.mappedDomainNames_.length;c++) {\n    if (0 == a.inde"
    "xOf(this.mappedDomainNames_[c])) {\n      window.location = w"
    "indow.location.protocol + \"//\" + window.location.hostname + "
    "\"/\" + a.substr(this.mappedDomainNames_[c].length);\n      b.p"
    "reventDefault();\n      break;\n    }\n  }\n};\npagespeed.clientD"
    "omainRewriterInit = function(a) {\n  a = new pagespeed.Client"
    "DomainRewriter(a);\n  pagespeed.clientDomainRewriter = a;\n  a"
    ".addEventListeners();\n};\npagespeed.clientDomainRewriterInit "
    "= pagespeed.clientDomainRewriterInit;\n})();\n";

}  // namespace net_instaweb
