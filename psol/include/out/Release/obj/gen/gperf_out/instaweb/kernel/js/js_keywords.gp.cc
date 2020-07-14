/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m' 10' --output-file=/usr/src/modpagespeed/out/Release/obj/gen/gperf_out/instaweb/kernel/js/js_keywords.gp.cc ../pagespeed/kernel/js/js_keywords.gperf  */
/* Computed positions: -k'1-2' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "../pagespeed/kernel/js/js_keywords.gperf"

// js_keywords.cc is automatically generated from js_keywords.gperf.
// Author: jmarantz@google.com

#include "base/logging.h"
#include "pagespeed/kernel/js/js_keywords.h"
#include "pagespeed/kernel/base/string_util.h"

namespace pagespeed {
#line 21 "../pagespeed/kernel/js/js_keywords.gperf"
struct JsKeywordMap {
  const char* name;
  pagespeed::JsKeywords::Type keyword;
  pagespeed::JsKeywords::Flag flag;
};
#include <string.h>

#define TOTAL_KEYWORDS 45
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 10
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 48
/* maximum key range = 47, duplicates = 0 */

class JsKeywordMapper
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct JsKeywordMap *Lookup (const char *str, size_t len);
};

inline unsigned int
JsKeywordMapper::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49,  8,  9,  6,
       0,  0,  9, 49, 26,  0, 49, 49, 23, 38,
       0,  3,  6, 49, 17, 22,  8,  8, 36,  9,
      35, 19, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49
    };
  return len + asso_values[static_cast<unsigned char>(str[1])] + asso_values[static_cast<unsigned char>(str[0])];
}

static const struct JsKeywordMap kJsKeywordsTable[] =
  {
    {""}, {""},
#line 35 "../pagespeed/kernel/js/js_keywords.gperf"
    {"in",           JsKeywords::kIn,              JsKeywords::kCanPrecedeRegEx},
#line 37 "../pagespeed/kernel/js/js_keywords.gperf"
    {"new",          JsKeywords::kNew,             JsKeywords::kCanPrecedeRegEx},
#line 62 "../pagespeed/kernel/js/js_keywords.gperf"
    {"enum",         JsKeywords::kEnum,            JsKeywords::kIsReservedNonStrict},
#line 34 "../pagespeed/kernel/js/js_keywords.gperf"
    {"do",           JsKeywords::kDo,              JsKeywords::kCanPrecedeRegEx},
#line 33 "../pagespeed/kernel/js/js_keywords.gperf"
    {"delete",       JsKeywords::kDelete,          JsKeywords::kCanPrecedeRegEx},
#line 48 "../pagespeed/kernel/js/js_keywords.gperf"
    {"default",      JsKeywords::kDefault,         JsKeywords::kNone},
#line 47 "../pagespeed/kernel/js/js_keywords.gperf"
    {"debugger",     JsKeywords::kDebugger,        JsKeywords::kNone},
#line 69 "../pagespeed/kernel/js/js_keywords.gperf"
    {"interface",    JsKeywords::kInterface,       JsKeywords::kIsReservedStrict},
#line 36 "../pagespeed/kernel/js/js_keywords.gperf"
    {"instanceof",   JsKeywords::kInstanceof,      JsKeywords::kCanPrecedeRegEx},
#line 53 "../pagespeed/kernel/js/js_keywords.gperf"
    {"if",           JsKeywords::kIf,              JsKeywords::kNone},
#line 29 "../pagespeed/kernel/js/js_keywords.gperf"
    {"null",         JsKeywords::kNull,            JsKeywords::kIsValue},
#line 58 "../pagespeed/kernel/js/js_keywords.gperf"
    {"with",         JsKeywords::kWith,            JsKeywords::kNone},
#line 45 "../pagespeed/kernel/js/js_keywords.gperf"
    {"const",        JsKeywords::kConst,           JsKeywords::kNone},
#line 51 "../pagespeed/kernel/js/js_keywords.gperf"
    {"for",          JsKeywords::kFor,             JsKeywords::kNone},
#line 50 "../pagespeed/kernel/js/js_keywords.gperf"
    {"finally",      JsKeywords::kFinally,         JsKeywords::kNone},
#line 46 "../pagespeed/kernel/js/js_keywords.gperf"
    {"continue",     JsKeywords::kContinue,        JsKeywords::kNone},
#line 32 "../pagespeed/kernel/js/js_keywords.gperf"
    {"case",         JsKeywords::kCase,            JsKeywords::kCanPrecedeRegEx},
#line 44 "../pagespeed/kernel/js/js_keywords.gperf"
    {"catch",        JsKeywords::kCatch,           JsKeywords::kNone},
#line 74 "../pagespeed/kernel/js/js_keywords.gperf"
    {"public",       JsKeywords::kPublic,          JsKeywords::kIsReservedStrict},
#line 71 "../pagespeed/kernel/js/js_keywords.gperf"
    {"package",      JsKeywords::kPackage,         JsKeywords::kIsReservedStrict},
#line 28 "../pagespeed/kernel/js/js_keywords.gperf"
    {"false",        JsKeywords::kFalse,           JsKeywords::kIsValue},
#line 38 "../pagespeed/kernel/js/js_keywords.gperf"
    {"return",       JsKeywords::kReturn,          JsKeywords::kCanPrecedeRegEx},
#line 76 "../pagespeed/kernel/js/js_keywords.gperf"
    {"yield",        JsKeywords::kYield,           JsKeywords::kIsReservedStrict},
#line 52 "../pagespeed/kernel/js/js_keywords.gperf"
    {"function",     JsKeywords::kFunction,        JsKeywords::kNone},
#line 70 "../pagespeed/kernel/js/js_keywords.gperf"
    {"let",          JsKeywords::kLet,             JsKeywords::kIsReservedStrict},
#line 49 "../pagespeed/kernel/js/js_keywords.gperf"
    {"else",         JsKeywords::kElse,            JsKeywords::kNone},
#line 56 "../pagespeed/kernel/js/js_keywords.gperf"
    {"try",          JsKeywords::kTry,             JsKeywords::kNone},
#line 30 "../pagespeed/kernel/js/js_keywords.gperf"
    {"true",         JsKeywords::kTrue,            JsKeywords::kIsValue},
#line 72 "../pagespeed/kernel/js/js_keywords.gperf"
    {"private",      JsKeywords::kPrivate,         JsKeywords::kIsReservedStrict},
#line 43 "../pagespeed/kernel/js/js_keywords.gperf"
    {"break",        JsKeywords::kBreak,           JsKeywords::kNone},
#line 73 "../pagespeed/kernel/js/js_keywords.gperf"
    {"protected",    JsKeywords::kProtected,       JsKeywords::kIsReservedStrict},
#line 40 "../pagespeed/kernel/js/js_keywords.gperf"
    {"typeof",       JsKeywords::kTypeof,          JsKeywords::kCanPrecedeRegEx},
#line 61 "../pagespeed/kernel/js/js_keywords.gperf"
    {"class",        JsKeywords::kClass,           JsKeywords::kIsReservedNonStrict},
#line 66 "../pagespeed/kernel/js/js_keywords.gperf"
    {"super",        JsKeywords::kSuper,           JsKeywords::kIsReservedNonStrict},
#line 75 "../pagespeed/kernel/js/js_keywords.gperf"
    {"static",       JsKeywords::kStatic,          JsKeywords::kIsReservedStrict},
#line 54 "../pagespeed/kernel/js/js_keywords.gperf"
    {"switch",       JsKeywords::kSwitch,          JsKeywords::kNone},
#line 55 "../pagespeed/kernel/js/js_keywords.gperf"
    {"this",         JsKeywords::kThis,            JsKeywords::kNone},
#line 39 "../pagespeed/kernel/js/js_keywords.gperf"
    {"throw",        JsKeywords::kThrow,           JsKeywords::kCanPrecedeRegEx},
#line 57 "../pagespeed/kernel/js/js_keywords.gperf"
    {"while",        JsKeywords::kWhile,           JsKeywords::kNone},
#line 63 "../pagespeed/kernel/js/js_keywords.gperf"
    {"export",       JsKeywords::kExport,          JsKeywords::kIsReservedNonStrict},
#line 64 "../pagespeed/kernel/js/js_keywords.gperf"
    {"extends",      JsKeywords::kExtends,         JsKeywords::kIsReservedNonStrict},
#line 41 "../pagespeed/kernel/js/js_keywords.gperf"
    {"void",         JsKeywords::kVoid,            JsKeywords::kCanPrecedeRegEx},
#line 65 "../pagespeed/kernel/js/js_keywords.gperf"
    {"import",       JsKeywords::kImport,          JsKeywords::kIsReservedNonStrict},
    {""}, {""},
#line 59 "../pagespeed/kernel/js/js_keywords.gperf"
    {"var",          JsKeywords::kVar,             JsKeywords::kNone},
#line 68 "../pagespeed/kernel/js/js_keywords.gperf"
    {"implements",   JsKeywords::kImplements,      JsKeywords::kIsReservedStrict}
  };

const struct JsKeywordMap *
JsKeywordMapper::Lookup (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = kJsKeywordsTable[key].name;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &kJsKeywordsTable[key];
        }
    }
  return 0;
}
#line 77 "../pagespeed/kernel/js/js_keywords.gperf"


JsKeywords::Type JsKeywords::Lookup(const StringPiece& keyword,
                                       JsKeywords::Flag* flag) {
  const JsKeywordMap* keyword_map =
      JsKeywordMapper::Lookup(keyword.data(), keyword.size());
  if (keyword_map != NULL) {
    *flag = keyword_map->flag;
    return keyword_map->keyword;
  }
  return JsKeywords::kNotAKeyword;
}

bool JsKeywords::Iterator::AtEnd() const {
  return index_ > MAX_HASH_VALUE;
}

void JsKeywords::Iterator::Next() {
  DCHECK(!AtEnd());
  ++index_;
  while (!AtEnd() && (*(kJsKeywordsTable[index_].name) == '\0')) {
    ++index_;
  }
}

const char* JsKeywords::Iterator::name() const {
  DCHECK(!AtEnd());
  return kJsKeywordsTable[index_].name;
}

JsKeywords::Type JsKeywords::Iterator::keyword() const {
  DCHECK(!AtEnd());
  return kJsKeywordsTable[index_].keyword;
}

int JsKeywords::num_keywords() {
  return TOTAL_KEYWORDS;
}

bool JsKeywords::CanKeywordPrecedeRegEx(const StringPiece& name) {
  Flag flag;
  Type type = Lookup(name, &flag);
  return (IsAKeyword(type) && flag == kCanPrecedeRegEx);
}

}  // namespace net_instaweb
