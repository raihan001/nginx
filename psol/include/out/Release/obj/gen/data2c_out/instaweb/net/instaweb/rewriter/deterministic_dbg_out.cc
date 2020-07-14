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

// Automatically generated from /usr/src/modpagespeed/out/Release/obj/gen/closure_out/instaweb/rewriter/deterministic_dbg.js

namespace net_instaweb {

const char* JS_deterministic =
    "(function(){var orig_date = Date, random_count = 0, date_cou"
    "nt = 0, random_seed = .462, time_seed = 1204251968254, rando"
    "m_count_threshold = 25, date_count_threshold = 25;\nMath.rand"
    "om = function() {\n  random_count++;\n  random_count > random_"
    "count_threshold && (random_seed += .1, random_count = 1);\n  "
    "return random_seed % 1;\n};\nDate = function() {\n  if (this in"
    "stanceof Date) {\n    switch(date_count++, date_count > date_"
    "count_threshold && (time_seed += 50, date_count = 1), argume"
    "nts.length) {\n      case 0:\n        return new orig_date(tim"
    "e_seed);\n      case 1:\n        return new orig_date(argument"
    "s[0]);\n      default:\n        return new orig_date(arguments"
    "[0], arguments[1], 3 <= arguments.length ? arguments[2] : 1,"
    " 4 <= arguments.length ? arguments[3] : 0, 5 <= arguments.le"
    "ngth ? arguments[4] : 0, 6 <= arguments.length ? arguments[5"
    "] : 0, 7 <= arguments.length ? arguments[6] : 0);\n    }\n  }\n"
    "  return (new Date).toString();\n};\nDate.__proto__ = orig_dat"
    "e;\nDate.prototype.constructor = Date;\norig_date.now = functi"
    "on() {\n  return (new Date).getTime();\n};\n})();\n";

}  // namespace net_instaweb
