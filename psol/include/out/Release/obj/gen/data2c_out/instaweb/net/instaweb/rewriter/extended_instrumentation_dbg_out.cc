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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/extended_instrumentation_dbg.js

namespace net_instaweb {

const char* JS_extended_instrumentation =
    "(function(){window.pagespeed = window.pagespeed || {};\nvar p"
    "agespeed = window.pagespeed;\npagespeed.getResourceTimingData"
    " = function() {\n  if (window.performance && (window.performa"
    "nce.getEntries || window.performance.webkitGetEntries)) {\n  "
    "  for (var m = 0, l = 0, e = 0, n = 0, f = 0, p = 0, g = 0, "
    "q = 0, h = 0, r = 0, k = 0, c = {}, d = window.performance.g"
    "etEntries ? window.performance.getEntries() : window.perform"
    "ance.webkitGetEntries(), b = 0;b < d.length;b++) {\n      var"
    " a = d[b].duration;\n      0 < a && (m += a, ++e, l = Math.ma"
    "x(l, a));\n      a = d[b].connectEnd - d[b].connectStart;\n   "
    "   0 < a && (p += a, ++g);\n      a = d[b].domainLookupEnd - "
    "d[b].domainLookupStart;\n      0 < a && (n += a, ++f);\n      "
    "a = d[b].initiatorType;\n      c[a] ? ++c[a] : c[a] = 1;\n    "
    "  a = d[b].requestStart - d[b].fetchStart;\n      0 < a && (r"
    " += a, ++k);\n      a = d[b].responseStart - d[b].requestStar"
    "t;\n      0 < a && (q += a, ++h);\n    }\n    return \"&afd=\" + "
    "(e ? Math.round(m / e) : 0) + \"&nfd=\" + e + \"&mfd=\" + Math.r"
    "ound(l) + \"&act=\" + (g ? Math.round(p / g) : 0) + \"&nct=\" + "
    "g + \"&adt=\" + (f ? Math.round(n / f) : 0) + \"&ndt=\" + f + \"&"
    "abt=\" + (k ? Math.round(r / k) : 0) + \"&nbt=\" + k + \"&attfb="
    "\" + (h ? Math.round(q / h) : 0) + \"&nttfb=\" + h + (c.css ? \""
    "&rit_css=\" + c.css : \"\") + (c.link ? \"&rit_link=\" + c.link :"
    " \"\") + (c.script ? \"&rit_script=\" + c.script : \"\") + (c.img "
    "? \"&rit_img=\" + c.img : \"\");\n  }\n  return \"\";\n};\npagespeed.g"
    "etResourceTimingData = pagespeed.getResourceTimingData;\n})()"
    ";\n";

}  // namespace net_instaweb
