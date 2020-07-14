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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/client_domain_rewriter_opt.js

namespace net_instaweb {

const char* JS_client_domain_rewriter_opt =
    "(function(){window.pagespeed=window.pagespeed||{};var d=wind"
    "ow.pagespeed;function g(a){this.a=a}function h(a,b){b=b||win"
    "dow.event;if(\"keypress\"!=b.type||13==b.keyCode)for(var c=b.t"
    "arget;null!=c;c=c.parentNode)if(\"A\"==c.tagName){for(var f=a,"
    "c=c.href,k=b,e=0;e<f.a.length;e++)if(!c.indexOf(f.a[e])){win"
    "dow.location=window.location.protocol+\"//\"+window.location.h"
    "ostname+\"/\"+c.substr(f.a[e].length);k.preventDefault();break"
    "}break}}\nfunction l(a){document.body.onclick=function(b){h(a"
    ",b)};document.body.onkeypress=function(b){h(a,b)}}d.b=functi"
    "on(a){a=new g(a);d.clientDomainRewriter=a;l(a)};d.clientDoma"
    "inRewriterInit=d.b;})();\n";

}  // namespace net_instaweb
