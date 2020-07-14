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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/dedup_inlined_images_opt.js

namespace net_instaweb {

const char* JS_dedup_inlined_images_opt =
    "(function(){window.pagespeed=window.pagespeed||{};var a=wind"
    "ow.pagespeed;function b(){}b.prototype.a=function(d,e,c){if("
    "d=document.getElementById(d))if(e=document.getElementById(e)"
    ")if(c=document.getElementById(c))e.src=d.getAttribute(\"src\")"
    ",c.parentNode.removeChild(c)};b.prototype.inlineImg=b.protot"
    "ype.a;a.b=function(){a.dedupInlinedImages=new b};a.dedupInli"
    "nedImagesInit=a.b;})();\n";

}  // namespace net_instaweb
