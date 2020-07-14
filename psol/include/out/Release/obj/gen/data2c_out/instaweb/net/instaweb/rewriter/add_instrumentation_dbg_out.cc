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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/add_instrumentation_dbg.js

namespace net_instaweb {

const char* JS_add_instrumentation =
    "(function(){window.pagespeed = window.pagespeed || {};\nvar p"
    "agespeed = window.pagespeed;\npagespeed.AddInstrumentation = "
    "function(a, c, b, d) {\n  this.beaconUrlPrefix_ = a;\n  this.e"
    "vent_ = c;\n  this.extraParams_ = b;\n  this.htmlUrl_ = d;\n};\n"
    "pagespeed.beaconUrl = \"\";\npagespeed.AddInstrumentation.proto"
    "type.sendBeacon = function() {\n  var a = this.beaconUrlPrefi"
    "x_, c = window.mod_pagespeed_start, b = Number(new Date) - c"
    ", a = a + (-1 == a.indexOf(\"?\") ? \"?\" : \"&\"), a = a + \"ets=\""
    " + (\"load\" == this.event_ ? \"load:\" : \"unload:\");\n  if (\"bef"
    "oreunload\" != this.event_ || !window.mod_pagespeed_loaded) {"
    "\n    a = a + b + (\"&r\" + this.event_ + \"=\");\n    if (window."
    "performance) {\n      var b = window.performance.timing, d = "
    "b.navigationStart, e = b.requestStart, a = a + (b[this.event"
    "_ + \"EventStart\"] - d), a = a + (\"&nav=\" + (b.fetchStart - d"
    ")), a = a + (\"&dns=\" + (b.domainLookupEnd - b.domainLookupSt"
    "art)), a = a + (\"&connect=\" + (b.connectEnd - b.connectStart"
    ")), a = a + (\"&req_start=\" + (e - d)) + (\"&ttfb=\" + (b.respo"
    "nseStart - e)), a = a + (\"&dwld=\" + (b.responseEnd - b.respo"
    "nseStart)), a = a + (\"&dom_c=\" + (b.domContentLoadedEventSta"
    "rt - d));\n      window.performance.navigation && (a += \"&nt="
    "\" + window.performance.navigation.type);\n      d = -1;\n     "
    " b.msFirstPaint ? d = b.msFirstPaint : window.chrome && wind"
    "ow.chrome.loadTimes && (d = Math.floor(1E3 * window.chrome.l"
    "oadTimes().firstPaintTime));\n      d -= e;\n      0 <= d && ("
    "a += \"&fp=\" + d);\n    } else {\n      a += b;\n    }\n    pages"
    "peed.getResourceTimingData && window.parent == window && (a "
    "+= pagespeed.getResourceTimingData());\n    a += window.paren"
    "t != window ? \"&ifr=1\" : \"&ifr=0\";\n    \"load\" == this.event_"
    " && (window.mod_pagespeed_loaded = !0, (b = window.mod_pages"
    "peed_num_resources_prefetched) && (a += \"&nrp=\" + b), (b = w"
    "indow.mod_pagespeed_prefetch_start) && (a += \"&htmlAt=\" + (c"
    " - b)));\n    pagespeed.criticalCss && (c = pagespeed.critica"
    "lCss, a += \"&ccis=\" + c.total_critical_inlined_size + \"&cces"
    "=\" + c.total_original_external_size + \"&ccos=\" + c.total_ove"
    "rhead_size + \"&ccrl=\" + c.num_replaced_links + \"&ccul=\" + c."
    "num_unreplaced_links);\n    a += \"&dpr=\" + window.devicePixel"
    "Ratio;\n    \"\" != this.extraParams_ && (a += this.extraParams"
    "_);\n    document.referrer && (a += \"&ref=\" + encodeURICompon"
    "ent(document.referrer));\n    a += \"&url=\" + encodeURICompone"
    "nt(this.htmlUrl_);\n    pagespeed.beaconUrl = a;\n    (new Ima"
    "ge).src = a;\n  }\n};\npagespeed.addInstrumentationInit = funct"
    "ion(a, c, b, d) {\n  var e = new pagespeed.AddInstrumentation"
    "(a, c, b, d);\n  window.addEventListener ? window.addEventLis"
    "tener(c, function() {\n    e.sendBeacon();\n  }, !1) : window."
    "attachEvent(\"on\" + c, function() {\n    e.sendBeacon();\n  });"
    "\n};\npagespeed.addInstrumentationInit = pagespeed.addInstrume"
    "ntationInit;\n})();\n";

}  // namespace net_instaweb
