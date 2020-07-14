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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/critical_css_beacon_dbg.js

namespace net_instaweb {

const char* JS_critical_css_beacon =
    "(function(){var pagespeedutils = {MAX_POST_SIZE:131072, send"
    "Beacon:function(a, b, c) {\n  var d;\n  if (window.XMLHttpRequ"
    "est) {\n    d = new XMLHttpRequest;\n  } else {\n    if (window"
    ".ActiveXObject) {\n      try {\n        d = new ActiveXObject("
    "\"Msxml2.XMLHTTP\");\n      } catch (f) {\n        try {\n       "
    "   d = new ActiveXObject(\"Microsoft.XMLHTTP\");\n        } cat"
    "ch (g) {\n        }\n      }\n    }\n  }\n  if (!d) {\n    return "
    "!1;\n  }\n  var e = -1 == a.indexOf(\"?\") ? \"?\" : \"&\";\n  a = a "
    "+ e + \"url=\" + encodeURIComponent(b);\n  d.open(\"POST\", a);\n "
    " d.setRequestHeader(\"Content-Type\", \"application/x-www-form-"
    "urlencoded\");\n  d.send(c);\n  return !0;\n}, addHandler:functi"
    "on(a, b, c) {\n  if (a.addEventListener) {\n    a.addEventList"
    "ener(b, c, !1);\n  } else {\n    if (a.attachEvent) {\n      a."
    "attachEvent(\"on\" + b, c);\n    } else {\n      var d = a[\"on\" "
    "+ b];\n      a[\"on\" + b] = function() {\n        c.call(this);"
    "\n        d && d.call(this);\n      };\n    }\n  }\n}, getPositio"
    "n:function(a) {\n  for (var b = a.offsetTop, c = a.offsetLeft"
    ";a.offsetParent;) {\n    a = a.offsetParent, b += a.offsetTop"
    ", c += a.offsetLeft;\n  }\n  return {top:b, left:c};\n}, getWin"
    "dowSize:function() {\n  return {height:window.innerHeight || "
    "document.documentElement.clientHeight || document.body.clien"
    "tHeight, width:window.innerWidth || document.documentElement"
    ".clientWidth || document.body.clientWidth};\n}, inViewport:fu"
    "nction(a, b) {\n  var c = pagespeedutils.getPosition(a);\n  re"
    "turn pagespeedutils.positionInViewport(c, b);\n}, positionInV"
    "iewport:function(a, b) {\n  return a.top < b.height && a.left"
    " < b.width;\n}, getRequestAnimationFrame:function() {\n  retur"
    "n window.requestAnimationFrame || window.webkitRequestAnimat"
    "ionFrame || window.mozRequestAnimationFrame || window.oReque"
    "stAnimationFrame || window.msRequestAnimationFrame || null;\n"
    "}};\npagespeedutils.now = Date.now || function() {\n  return +"
    "new Date;\n};\nwindow.pagespeed = window.pagespeed || {};\nvar "
    "pagespeed = window.pagespeed;\npagespeed.CriticalCssBeacon = "
    "function(a, b, c, d, e) {\n  this.MAXITERS_ = 250;\n  this.bea"
    "conUrl_ = a;\n  this.htmlUrl_ = b;\n  this.optionsHash_ = c;\n "
    " this.nonce_ = d;\n  this.selectors_ = e;\n  this.criticalSele"
    "ctors_ = [];\n  this.idx_ = 0;\n};\npagespeed.CriticalCssBeacon"
    ".prototype.sendBeacon_ = function() {\n  for (var a = \"oh=\" +"
    " this.optionsHash_ + \"&n=\" + this.nonce_, a = a + \"&cs=\", b "
    "= 0;b < this.criticalSelectors_.length;++b) {\n    var c = 0 "
    "< b ? \",\" : \"\", c = c + encodeURIComponent(this.criticalSele"
    "ctors_[b]);\n    if (a.length + c.length > pagespeedutils.MAX"
    "_POST_SIZE) {\n      break;\n    }\n    a += c;\n  }\n  pagespeed"
    ".criticalCssBeaconData = a;\n  pagespeedutils.sendBeacon(this"
    ".beaconUrl_, this.htmlUrl_, a);\n};\npagespeed.CriticalCssBeac"
    "on.prototype.checkCssSelectors_ = function(a) {\n  for (var b"
    " = 0;b < this.MAXITERS_ && this.idx_ < this.selectors_.lengt"
    "h;++b, ++this.idx_) {\n    try {\n      null != document.query"
    "Selector(this.selectors_[this.idx_]) && this.criticalSelecto"
    "rs_.push(this.selectors_[this.idx_]);\n    } catch (c) {\n    "
    "}\n  }\n  this.idx_ < this.selectors_.length ? window.setTimeo"
    "ut(this.checkCssSelectors_.bind(this), 0, a) : a();\n};\npages"
    "peed.criticalCssBeaconInit = function(a, b, c, d, e) {\n  if "
    "(document.querySelector && Function.prototype.bind) {\n    va"
    "r f = new pagespeed.CriticalCssBeacon(a, b, c, d, e);\n    pa"
    "gespeedutils.addHandler(window, \"load\", function() {\n      w"
    "indow.setTimeout(function() {\n        f.checkCssSelectors_(f"
    "unction() {\n          f.sendBeacon_();\n        });\n      }, "
    "0);\n    });\n  }\n};\npagespeed.criticalCssBeaconInit = pagespe"
    "ed.criticalCssBeaconInit;\n})();\n";

}  // namespace net_instaweb
