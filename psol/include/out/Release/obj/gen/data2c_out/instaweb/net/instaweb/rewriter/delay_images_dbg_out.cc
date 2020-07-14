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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/delay_images_dbg.js

namespace net_instaweb {

const char* JS_delay_images =
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
    "pagespeed = window.pagespeed;\npagespeed.DelayImages = functi"
    "on() {\n  this.highResReplaced_ = this.lazyLoadHighResHandler"
    "sRegistered_ = !1;\n};\npagespeed.DelayImages.prototype.replac"
    "eElementSrc = function(a) {\n  for (var b = 0;b < a.length;++"
    "b) {\n    var c = a[b].getAttribute(\"data-pagespeed-high-res-"
    "src\");\n    c && a[b].setAttribute(\"src\", c);\n  }\n};\npagespee"
    "d.DelayImages.prototype.replaceElementSrc = pagespeed.DelayI"
    "mages.prototype.replaceElementSrc;\npagespeed.DelayImages.pro"
    "totype.registerLazyLoadHighRes = function() {\n  if (this.laz"
    "yLoadHighResHandlersRegistered_) {\n    this.highResReplaced_"
    " = !1;\n  } else {\n    var a = document.body, b, c = 0, d = t"
    "his;\n    this.highResReplaced = !1;\n    \"ontouchstart\" in a "
    "? (pagespeedutils.addHandler(a, \"touchstart\", function(a) {\n"
    "      b = pagespeedutils.now();\n    }), pagespeedutils.addHa"
    "ndler(a, \"touchend\", function(a) {\n      c = pagespeedutils."
    "now();\n      (null != a.changedTouches && 2 == a.changedTouc"
    "hes.length || null != a.touches && 2 == a.touches.length || "
    "500 > c - b) && d.loadHighRes();\n    })) : pagespeedutils.ad"
    "dHandler(window, \"click\", function(a) {\n      d.loadHighRes("
    ");\n    });\n    pagespeedutils.addHandler(window, \"load\", fun"
    "ction(a) {\n      d.loadHighRes();\n    });\n    this.lazyLoadH"
    "ighResHandlersRegistered_ = !0;\n  }\n};\npagespeed.DelayImages"
    ".prototype.registerLazyLoadHighRes = pagespeed.DelayImages.p"
    "rototype.registerLazyLoadHighRes;\npagespeed.DelayImages.prot"
    "otype.loadHighRes = function() {\n  this.highResReplaced_ || "
    "(this.replaceWithHighRes(), this.highResReplaced_ = !0);\n};\n"
    "pagespeed.DelayImages.prototype.replaceWithHighRes = functio"
    "n() {\n  this.replaceElementSrc(document.getElementsByTagName"
    "(\"img\"));\n  this.replaceElementSrc(document.getElementsByTag"
    "Name(\"input\"));\n};\npagespeed.DelayImages.prototype.replaceWi"
    "thHighRes = pagespeed.DelayImages.prototype.replaceWithHighR"
    "es;\npagespeed.delayImagesInit = function() {\n  var a = new p"
    "agespeed.DelayImages;\n  pagespeed.delayImages = a;\n};\npagesp"
    "eed.delayImagesInit = pagespeed.delayImagesInit;\n})();\n";

}  // namespace net_instaweb
