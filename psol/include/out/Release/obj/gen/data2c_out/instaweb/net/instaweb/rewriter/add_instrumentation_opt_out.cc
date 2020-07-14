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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/add_instrumentation_opt.js

namespace net_instaweb {

const char* JS_add_instrumentation_opt =
    "(function(){window.pagespeed=window.pagespeed||{};var f=wind"
    "ow.pagespeed;function h(c,a,e,b){this.f=c;this.a=a;this.b=e;"
    "this.g=b}f.beaconUrl=\"\";\nfunction k(c){var a=c.f,e=window.mo"
    "d_pagespeed_start,b=Number(new Date)-e,a=a+(-1==a.indexOf(\"?"
    "\")?\"?\":\"&\"),a=a+\"ets=\"+(\"load\"==c.a?\"load:\":\"unload:\");if(\"b"
    "eforeunload\"!=c.a||!window.mod_pagespeed_loaded){a=a+b+(\"&r\""
    "+c.a+\"=\");if(window.performance){var b=window.performance.ti"
    "ming,d=b.navigationStart,g=b.requestStart,a=a+(b[c.a+\"EventS"
    "tart\"]-d),a=a+(\"&nav=\"+(b.fetchStart-d)),a=a+(\"&dns=\"+(b.dom"
    "ainLookupEnd-b.domainLookupStart)),a=a+(\"&connect=\"+(b.conne"
    "ctEnd-b.connectStart)),a=a+(\"&req_start=\"+(g-d))+\n(\"&ttfb=\"+"
    "(b.responseStart-g)),a=a+(\"&dwld=\"+(b.responseEnd-b.response"
    "Start)),a=a+(\"&dom_c=\"+(b.domContentLoadedEventStart-d));win"
    "dow.performance.navigation&&(a+=\"&nt=\"+window.performance.na"
    "vigation.type);d=-1;b.msFirstPaint?d=b.msFirstPaint:window.c"
    "hrome&&window.chrome.loadTimes&&(d=Math.floor(1E3*window.chr"
    "ome.loadTimes().firstPaintTime));d-=g;0<=d&&(a+=\"&fp=\"+d)}el"
    "se a+=b;f.getResourceTimingData&&window.parent==window&&(a+="
    "f.getResourceTimingData());a+=window.parent!=window?\"&ifr=1\""
    ":\"&ifr=0\";\"load\"==\nc.a&&(window.mod_pagespeed_loaded=!0,(b=w"
    "indow.mod_pagespeed_num_resources_prefetched)&&(a+=\"&nrp=\"+b"
    "),(b=window.mod_pagespeed_prefetch_start)&&(a+=\"&htmlAt=\"+(e"
    "-b)));f.criticalCss&&(e=f.criticalCss,a+=\"&ccis=\"+e.total_cr"
    "itical_inlined_size+\"&cces=\"+e.total_original_external_size+"
    "\"&ccos=\"+e.total_overhead_size+\"&ccrl=\"+e.num_replaced_links"
    "+\"&ccul=\"+e.num_unreplaced_links);a+=\"&dpr=\"+window.devicePi"
    "xelRatio;\"\"!=c.b&&(a+=c.b);document.referrer&&(a+=\"&ref=\"+en"
    "codeURIComponent(document.referrer));a+=\n\"&url=\"+encodeURICo"
    "mponent(c.g);f.beaconUrl=a;(new Image).src=a}}f.c=function(c"
    ",a,e,b){var d=new h(c,a,e,b);window.addEventListener?window."
    "addEventListener(a,function(){k(d)},!1):window.attachEvent(\""
    "on\"+a,function(){k(d)})};f.addInstrumentationInit=f.c;})();\n";

}  // namespace net_instaweb
