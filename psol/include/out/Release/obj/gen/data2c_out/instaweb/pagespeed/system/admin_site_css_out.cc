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

// Automatically generated from /usr/src/modpagespeed/pagespeed/system/admin_site.css

namespace net_instaweb {

const char* CSS_admin_site_css =
    "/*\n * Copyright 2014 Google Inc.\n *\n * Licensed under the Ap"
    "ache License, Version 2.0 (the \"License\");\n * you may not us"
    "e this file except in compliance with the License.\n * You ma"
    "y obtain a copy of the License at\n *\n *      http://www.apac"
    "he.org/licenses/LICENSE-2.0\n *\n * Unless required by applica"
    "ble law or agreed to in writing, software\n * distributed und"
    "er the License is distributed on an \"AS IS\" BASIS,\n * WITHOU"
    "T WARRANTIES OR CONDITIONS OF ANY KIND, either express or im"
    "plied.\n * See the License for the specific language governin"
    "g permissions and\n * limitations under the License.\n */\n\n/**"
    "\n * @fileoverview Common styles that are shared by admin sit"
    "e pages including\n * Eric Meyer\'s reset. For each page in ad"
    "min site, we include this general\n * CSS first then the page"
    "-specific CSS.\n *\n * @author xqyin@google.com (XiaoQian Yin)"
    "\n */\n\n@charset \"UTF-8\";\n\n/*---------------------------------"
    "---------------------------------\n  eric meyer\'s reset.  Not"
    "e, this originally had a few items that were\n  eliminated be"
    "cause they affected the admin navigation bar\n  (html,body,di"
    "v) or were unused, based on a chrome dev tools audit\n  (bloc"
    "kquote,ol,ul,table,caption,tb,td).\n  -----------------------"
    "-------------------------------------------*/\nspan,applet,ob"
    "ject,iframe,\nh1,h2,h3,h4,h5,h6,p,\na,abbr,acronym,address,big"
    ",cite,code,\ndel,dfn,em,font,img,ins,kbd,q,s,samp,\nsmall,stri"
    "ke,strong,sub,sup,tt,var,\ndl,dt,dd,li,\nfieldset,form,label,l"
    "egend,\ntbody,tfoot,thead,tr {\n  margin: 0;\n  padding: 0;\n  b"
    "order: 0;\n  outline: 0;\n  font-weight: inherit;\n  font-style"
    ": inherit;\n  font-size: 100%;\n  font-family: inherit;\n  vert"
    "ical-align: baseline;\n}\nbody {\n  line-height: 1;\n  color: bl"
    "ack;\n  background: white;\n}\ninput::-moz-focus-inner {\n  bord"
    "er: 0;\n}\n/*-------------------------------------------------"
    "-----------------\n  This style fragment is copied from ../re"
    "writer/console.css\n  because it\'s kind of nice. However if w"
    "e import the whole\n  console.css into admin pages it looks t"
    "errible.\n\n  TODO(jmarantz): Get UX help to style the whole a"
    "dmin site better.\n------------------------------------------"
    "------------------------*/\na {\n  color:#15c;\n  cursor:pointe"
    "r;\n  text-decoration:none;\n}\na:visited {\n  color: #61c;\n}\na:"
    "hover {\n  text-decoration:underline;\n}\na:active {\n  color:#d"
    "14836;\n  text-decoration:underline;\n}\n/*--------------------"
    "----------------------------------------------\nmod rules\n---"
    "------------------------------------------------------------"
    "---*/\n.pagespeed-show-number {\n  color: green;\n  overflow: h"
    "idden;\n  padding: 5px 0 0 10px;\n}\n.pagespeed-underline-link "
    "{\n   color: darkblue;\n   text-decoration: underline;\n}\n/*---"
    "------------------------------------------------------------"
    "---\n  We have to specify the size of the container elements "
    "explicitly\n  when using AnnotatedTimeLine on graphs page. Si"
    "nce we cannot read\n  the size of elements with \'display:none"
    "\' when calling\n  google.visualization.AnnotatedTimeLine() in"
    " graphs_js.js, we place\n  the elements at -9999px to hide th"
    "em off the screen as an\n  alternative method of \'display:non"
    "e\' to switch tabs.\n  To keep consistent, we use this on othe"
    "r pages as well.\n-------------------------------------------"
    "-----------------------*/\n.pagespeed-hidden-offscreen {\n  le"
    "ft:-9999px;\n  position:absolute;\n}\n.pagespeed-admin-body {\n "
    " font-family: sans-serif;\n  font-size: 12px;\n}\n.pagespeed-ad"
    "min-tabs {\n  font-size: 16px;\n}\n.pagespeed-sub-tabs {\n  font"
    "-size: 15px;\n}\n";

}  // namespace net_instaweb
