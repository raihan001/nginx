/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m' 10' --output-file=/usr/src/modpagespeed/out/Release/obj/gen/gperf_out/instaweb/kernel/html/html_name.gp.cc ../pagespeed/kernel/html/html_name.gperf  */
/* Computed positions: -k'1,3,16,$' */

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

#line 1 "../pagespeed/kernel/html/html_name.gperf"

// html_name.cc is automatically generated from html_name.gperf.
// Author: jmarantz@google.com

#include <string.h>

#include "base/logging.h"
#include "pagespeed/kernel/base/string_util.h"
#include "pagespeed/kernel/html/html_name.h"

namespace net_instaweb {
#line 24 "../pagespeed/kernel/html/html_name.gperf"
struct KeywordMap {const char* name; net_instaweb::HtmlName::Keyword keyword;};

#define TOTAL_KEYWORDS 212
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 30
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 498
/* maximum key range = 493, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_MEMCMP
#define GPERF_CASE_MEMCMP 1
static int
gperf_case_memcmp (const char *s1, const char *s2, size_t n)
{
  for (; n > 0;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 == c2)
        {
          n--;
          continue;
        }
      return (int)c1 - (int)c2;
    }
  return 0;
}
#endif

class KeywordMapper
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct KeywordMap *Lookup (const char *str, size_t len);
};

inline unsigned int
KeywordMapper::hash (const char *str, size_t len)
{
  static const unsigned short asso_values[] =
    {
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499,  22,
       20,  19,  15,  12,   4, 499, 499, 499, 499, 499,
      499, 499, 499, 499,   2,  85,  19,  63,  14,   2,
      118,  97, 142,  78, 169, 151, 110,  69,  43,  37,
       75, 133,  87,  29,   2,   7, 184, 209, 195, 146,
       85, 499, 499, 499, 499, 499, 499,  85,  19,  63,
       14,   2, 118,  97, 142,  78, 169, 151, 110,  69,
       43,  37,  75, 133,  87,  29,   2,   7, 184, 209,
      195, 146,  85, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499, 499, 499, 499,
      499, 499, 499, 499, 499, 499, 499
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[15])];
      /*FALLTHROUGH*/
      case 15:
      case 14:
      case 13:
      case 12:
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2]+1)];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0]+1)];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

static const unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,
     0,  4,  0,  0,  2,  8,  0,  5,  4,  2,  6,  7,  8,  4,
     5, 16,  0,  3,  1,  2,  0,  7,  0,  0,  0,  6, 12,  0,
     7,  0,  0,  7,  0,  0,  0,  8,  2,  0,  0,  0,  0,  0,
     4,  7,  8, 19,  7,  0,  0,  5,  9,  0,  7,  5,  4,  5,
     6,  4, 24,  0,  0,  6,  8,  5,  7,  6,  8,  7,  3,  1,
     2,  3,  4,  3,  8,  5,  8,  4,  2,  8,  5,  2,  2,  6,
     4,  2,  2, 10,  2,  0,  4,  1,  2,  0,  0,  0,  0, 25,
     0,  0,  2,  4,  8,  0,  0,  6,  0,  3,  8,  5,  4,  0,
    18, 14, 15,  3,  0,  6, 23,  7,  6,  5,  5,  9,  8,  4,
     4,  7, 14,  0,  5,  0,  4, 26, 27,  2, 10,  2,  2,  7,
     0, 26,  0,  7,  0,  4,  0,  0, 23,  0,  6,  8,  8,  2,
     0,  0, 17,  8,  5,  4,  0, 25,  7,  8,  3, 10,  8, 23,
     5, 30,  3,  2, 13,  2,  6,  2,  6,  5,  1,  0,  6,  5,
     3,  7,  0,  4,  5, 30,  8,  3,  7, 23,  6,  4, 26,  1,
     0,  3,  0,  0, 11,  4,  3,  7,  0,  0,  0,  1,  0,  4,
     0,  8,  4,  4,  6,  0,  3,  6,  0,  5,  6,  4,  5,  0,
     0,  6,  4, 27,  4,  5,  6,  5,  8,  7,  1,  3,  0, 22,
     0,  5,  3,  6,  3,  0, 10,  4,  8,  4,  0,  0,  0,  6,
    25,  0,  0,  0,  0,  0,  0,  0,  7,  0,  0,  0,  0, 10,
     0,  0,  0,  0, 23,  5,  0,  7, 19,  9, 25,  4,  5,  4,
     0, 16,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  5,  0,  0,  0,  3,  3,  0,  0,  0,  4,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  5,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  8,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0, 22,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0, 18
  };

static const struct KeywordMap kHtmlNameTable[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""},
#line 105 "../pagespeed/kernel/html/html_name.gperf"
    {"dt",                                 HtmlName::kDt},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 221 "../pagespeed/kernel/html/html_name.gperf"
    {"test",                               HtmlName::kTest},
    {""}, {""},
#line 92 "../pagespeed/kernel/html/html_name.gperf"
    {"dd",                                 HtmlName::kDd},
#line 67 "../pagespeed/kernel/html/html_name.gperf"
    {"datalist",                           HtmlName::kDatalist},
    {""},
#line 227 "../pagespeed/kernel/html/html_name.gperf"
    {"title",                              HtmlName::kTitle},
#line 59 "../pagespeed/kernel/html/html_name.gperf"
    {"code",                               HtmlName::kCode},
#line 220 "../pagespeed/kernel/html/html_name.gperf"
    {"td",                                 HtmlName::kTd},
#line 213 "../pagespeed/kernel/html/html_name.gperf"
    {"srcset",                             HtmlName::kSrcset},
#line 93 "../pagespeed/kernel/html/html_name.gperf"
    {"declare",                            HtmlName::kDeclare},
#line 101 "../pagespeed/kernel/html/html_name.gperf"
    {"disabled",                           HtmlName::kDisabled},
#line 57 "../pagespeed/kernel/html/html_name.gperf"
    {"cite",                               HtmlName::kCite},
#line 208 "../pagespeed/kernel/html/html_name.gperf"
    {"shape",                              HtmlName::kShape},
#line 70 "../pagespeed/kernel/html/html_name.gperf"
    {"data-mobile-role",                   HtmlName::kDataMobileRole},
    {""},
#line 34 "../pagespeed/kernel/html/html_name.gperf"
    {"alt",                                HtmlName::kAlt},
#line 199 "../pagespeed/kernel/html/html_name.gperf"
    {"s",                                  HtmlName::kS},
#line 197 "../pagespeed/kernel/html/html_name.gperf"
    {"rt",                                 HtmlName::kRt},
    {""},
#line 37 "../pagespeed/kernel/html/html_name.gperf"
    {"article",                            HtmlName::kArticle},
    {""}, {""}, {""},
#line 202 "../pagespeed/kernel/html/html_name.gperf"
    {"script",                             HtmlName::kScript},
#line 42 "../pagespeed/kernel/html/html_name.gperf"
    {"autocomplete",                       HtmlName::kAutocomplete},
    {""},
#line 55 "../pagespeed/kernel/html/html_name.gperf"
    {"charset",                            HtmlName::kCharset},
    {""}, {""},
#line 98 "../pagespeed/kernel/html/html_name.gperf"
    {"details",                            HtmlName::kDetails},
    {""}, {""}, {""},
#line 170 "../pagespeed/kernel/html/html_name.gperf"
    {"noscript",                           HtmlName::kNoscript},
#line 38 "../pagespeed/kernel/html/html_name.gperf"
    {"as",                                 HtmlName::kAs},
    {""}, {""}, {""}, {""}, {""},
#line 226 "../pagespeed/kernel/html/html_name.gperf"
    {"time",                               HtmlName::kTime},
#line 33 "../pagespeed/kernel/html/html_name.gperf"
    {"address",                            HtmlName::kAddress},
#line 204 "../pagespeed/kernel/html/html_name.gperf"
    {"seamless",                           HtmlName::kSeamless},
#line 89 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-size",                HtmlName::kDataPagespeedSize},
#line 64 "../pagespeed/kernel/html/html_name.gperf"
    {"content",                            HtmlName::kContent},
    {""}, {""},
#line 41 "../pagespeed/kernel/html/html_name.gperf"
    {"audio",                              HtmlName::kAudio},
#line 43 "../pagespeed/kernel/html/html_name.gperf"
    {"autofocus",                          HtmlName::kAutofocus},
    {""},
#line 205 "../pagespeed/kernel/html/html_name.gperf"
    {"section",                            HtmlName::kSection},
#line 58 "../pagespeed/kernel/html/html_name.gperf"
    {"class",                              HtmlName::kClass},
#line 211 "../pagespeed/kernel/html/html_name.gperf"
    {"span",                               HtmlName::kSpan},
#line 163 "../pagespeed/kernel/html/html_name.gperf"
    {"muted",                              HtmlName::kMuted},
#line 161 "../pagespeed/kernel/html/html_name.gperf"
    {"method",                             HtmlName::kMethod},
#line 47 "../pagespeed/kernel/html/html_name.gperf"
    {"base",                               HtmlName::kBase},
#line 86 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-orig-type",           HtmlName::kDataPagespeedOrigType},
    {""}, {""},
#line 32 "../pagespeed/kernel/html/html_name.gperf"
    {"action",                             HtmlName::kAction},
#line 169 "../pagespeed/kernel/html/html_name.gperf"
    {"noresize",                           HtmlName::kNoresize},
#line 217 "../pagespeed/kernel/html/html_name.gperf"
    {"table",                              HtmlName::kTable},
#line 63 "../pagespeed/kernel/html/html_name.gperf"
    {"command",                            HtmlName::kCommand},
#line 206 "../pagespeed/kernel/html/html_name.gperf"
    {"select",                             HtmlName::kSelect},
#line 91 "../pagespeed/kernel/html/html_name.gperf"
    {"data-src",                           HtmlName::kDataSrc},
#line 157 "../pagespeed/kernel/html/html_name.gperf"
    {"marquee",                            HtmlName::kMarquee},
#line 212 "../pagespeed/kernel/html/html_name.gperf"
    {"src",                                HtmlName::kSrc},
#line 45 "../pagespeed/kernel/html/html_name.gperf"
    {"b",                                  HtmlName::kB},
#line 124 "../pagespeed/kernel/html/html_name.gperf"
    {"h6",                                 HtmlName::kH6},
#line 99 "../pagespeed/kernel/html/html_name.gperf"
    {"dfn",                                HtmlName::kDfn},
#line 164 "../pagespeed/kernel/html/html_name.gperf"
    {"name",                               HtmlName::kName},
#line 216 "../pagespeed/kernel/html/html_name.gperf"
    {"sub",                                HtmlName::kSub},
#line 65 "../pagespeed/kernel/html/html_name.gperf"
    {"controls",                           HtmlName::kControls},
#line 223 "../pagespeed/kernel/html/html_name.gperf"
    {"tfoot",                              HtmlName::kTfoot},
#line 154 "../pagespeed/kernel/html/html_name.gperf"
    {"manifest",                           HtmlName::kManifest},
#line 159 "../pagespeed/kernel/html/html_name.gperf"
    {"menu",                               HtmlName::kMenu},
#line 123 "../pagespeed/kernel/html/html_name.gperf"
    {"h5",                                 HtmlName::kH5},
#line 207 "../pagespeed/kernel/html/html_name.gperf"
    {"selected",                           HtmlName::kSelected},
#line 215 "../pagespeed/kernel/html/html_name.gperf"
    {"style",                              HtmlName::kStyle},
#line 122 "../pagespeed/kernel/html/html_name.gperf"
    {"h4",                                 HtmlName::kH4},
#line 228 "../pagespeed/kernel/html/html_name.gperf"
    {"tr",                                 HtmlName::kTr},
#line 201 "../pagespeed/kernel/html/html_name.gperf"
    {"scoped",                             HtmlName::kScoped},
#line 66 "../pagespeed/kernel/html/html_name.gperf"
    {"data",                               HtmlName::kData},
#line 121 "../pagespeed/kernel/html/html_name.gperf"
    {"h3",                                 HtmlName::kH3},
#line 120 "../pagespeed/kernel/html/html_name.gperf"
    {"h2",                                 HtmlName::kH2},
#line 46 "../pagespeed/kernel/html/html_name.gperf"
    {"background",                         HtmlName::kBackground},
#line 119 "../pagespeed/kernel/html/html_name.gperf"
    {"h1",                                 HtmlName::kH1},
    {""},
#line 194 "../pagespeed/kernel/html/html_name.gperf"
    {"role",                               HtmlName::kRole},
#line 30 "../pagespeed/kernel/html/html_name.gperf"
    {"a",                                  HtmlName::kA},
#line 196 "../pagespeed/kernel/html/html_name.gperf"
    {"rp",                                 HtmlName::kRp},
    {""}, {""}, {""}, {""},
#line 87 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-prioritize",          HtmlName::kDataPagespeedPrioritize},
    {""}, {""},
#line 104 "../pagespeed/kernel/html/html_name.gperf"
    {"dl",                                 HtmlName::kDl},
#line 125 "../pagespeed/kernel/html/html_name.gperf"
    {"head",                               HtmlName::kHead},
#line 147 "../pagespeed/kernel/html/html_name.gperf"
    {"language",                           HtmlName::kLanguage},
    {""}, {""},
#line 53 "../pagespeed/kernel/html/html_name.gperf"
    {"button",                             HtmlName::kButton},
    {""},
#line 100 "../pagespeed/kernel/html/html_name.gperf"
    {"dir",                                HtmlName::kDir},
#line 162 "../pagespeed/kernel/html/html_name.gperf"
    {"multiple",                           HtmlName::kMultiple},
#line 117 "../pagespeed/kernel/html/html_name.gperf"
    {"frame",                              HtmlName::kFrame},
#line 200 "../pagespeed/kernel/html/html_name.gperf"
    {"samp",                               HtmlName::kSamp},
    {""},
#line 68 "../pagespeed/kernel/html/html_name.gperf"
    {"data-actual-height",                 HtmlName::kDataActualHeight},
#line 94 "../pagespeed/kernel/html/html_name.gperf"
    {"defaultchecked",                     HtmlName::kDefaultchecked},
#line 95 "../pagespeed/kernel/html/html_name.gperf"
    {"defaultselected",                    HtmlName::kDefaultselected},
#line 143 "../pagespeed/kernel/html/html_name.gperf"
    {"kbd",                                HtmlName::kKbd},
    {""},
#line 179 "../pagespeed/kernel/html/html_name.gperf"
    {"option",                             HtmlName::kOption},
#line 84 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-orig-src",            HtmlName::kDataPagespeedOrigSrc},
#line 62 "../pagespeed/kernel/html/html_name.gperf"
    {"colspan",                            HtmlName::kColspan},
#line 214 "../pagespeed/kernel/html/html_name.gperf"
    {"strong",                             HtmlName::kStrong},
#line 158 "../pagespeed/kernel/html/html_name.gperf"
    {"media",                              HtmlName::kMedia},
#line 209 "../pagespeed/kernel/html/html_name.gperf"
    {"small",                              HtmlName::kSmall},
#line 203 "../pagespeed/kernel/html/html_name.gperf"
    {"scrolling",                          HtmlName::kScrolling},
#line 192 "../pagespeed/kernel/html/html_name.gperf"
    {"required",                           HtmlName::kRequired},
#line 160 "../pagespeed/kernel/html/html_name.gperf"
    {"meta",                               HtmlName::kMeta},
#line 111 "../pagespeed/kernel/html/html_name.gperf"
    {"font",                               HtmlName::kFont},
#line 108 "../pagespeed/kernel/html/html_name.gperf"
    {"enctype",                            HtmlName::kEnctype},
#line 116 "../pagespeed/kernel/html/html_name.gperf"
    {"formnovalidate",                     HtmlName::kFormnovalidate},
    {""},
#line 225 "../pagespeed/kernel/html/html_name.gperf"
    {"thead",                              HtmlName::kThead},
    {""},
#line 230 "../pagespeed/kernel/html/html_name.gperf"
    {"type",                               HtmlName::kType},
#line 77 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-lazy-srcset",         HtmlName::kDataPagespeedLazySrcset},
#line 83 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-no-transform",        HtmlName::kDataPagespeedNoTransform},
#line 149 "../pagespeed/kernel/html/html_name.gperf"
    {"li",                                 HtmlName::kLi},
#line 50 "../pagespeed/kernel/html/html_name.gperf"
    {"blockquote",                         HtmlName::kBlockquote},
#line 224 "../pagespeed/kernel/html/html_name.gperf"
    {"th",                                 HtmlName::kTh},
#line 52 "../pagespeed/kernel/html/html_name.gperf"
    {"br",                                 HtmlName::kBr},
#line 56 "../pagespeed/kernel/html/html_name.gperf"
    {"checked",                            HtmlName::kChecked},
    {""},
#line 71 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-flush-style",         HtmlName::kDataPagespeedFlushStyle},
    {""},
#line 102 "../pagespeed/kernel/html/html_name.gperf"
    {"display",                            HtmlName::kDisplay},
    {""},
#line 29 "../pagespeed/kernel/html/html_name.gperf"
    {"?xml",                               HtmlName::kXml},
    {""}, {""},
#line 82 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-no-defer",            HtmlName::kDataPagespeedNoDefer},
    {""},
#line 176 "../pagespeed/kernel/html/html_name.gperf"
    {"onload",                             HtmlName::kOnload},
#line 178 "../pagespeed/kernel/html/html_name.gperf"
    {"optgroup",                           HtmlName::kOptgroup},
#line 61 "../pagespeed/kernel/html/html_name.gperf"
    {"colgroup",                           HtmlName::kColgroup},
#line 129 "../pagespeed/kernel/html/html_name.gperf"
    {"hr",                                 HtmlName::kHr},
    {""}, {""},
#line 69 "../pagespeed/kernel/html/html_name.gperf"
    {"data-actual-width",                  HtmlName::kDataActualWidth},
#line 167 "../pagespeed/kernel/html/html_name.gperf"
    {"noframes",                           HtmlName::kNoframes},
#line 40 "../pagespeed/kernel/html/html_name.gperf"
    {"async",                              HtmlName::kAsync},
#line 31 "../pagespeed/kernel/html/html_name.gperf"
    {"abbr",                               HtmlName::kAbbr},
    {""},
#line 75 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-inline-src",          HtmlName::kDataPagespeedInlineSrc},
#line 166 "../pagespeed/kernel/html/html_name.gperf"
    {"noembed",                            HtmlName::kNoembed},
#line 151 "../pagespeed/kernel/html/html_name.gperf"
    {"longdesc",                           HtmlName::kLongdesc},
#line 49 "../pagespeed/kernel/html/html_name.gperf"
    {"bdo",                                HtmlName::kBdo},
#line 115 "../pagespeed/kernel/html/html_name.gperf"
    {"formaction",                         HtmlName::kFormaction},
#line 44 "../pagespeed/kernel/html/html_name.gperf"
    {"autoplay",                           HtmlName::kAutoplay},
#line 90 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-url-hash",            HtmlName::kDataPagespeedUrlHash},
#line 229 "../pagespeed/kernel/html/html_name.gperf"
    {"track",                              HtmlName::kTrack},
#line 73 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-high-res-srcset",     HtmlName::kDataPagespeedHighResSrcset},
#line 97 "../pagespeed/kernel/html/html_name.gperf"
    {"del",                                HtmlName::kDel},
#line 135 "../pagespeed/kernel/html/html_name.gperf"
    {"id",                                 HtmlName::kId},
#line 138 "../pagespeed/kernel/html/html_name.gperf"
    {"indeterminate",                      HtmlName::kIndeterminate},
#line 173 "../pagespeed/kernel/html/html_name.gperf"
    {"ol",                                 HtmlName::kOl},
#line 128 "../pagespeed/kernel/html/html_name.gperf"
    {"hgroup",                             HtmlName::kHgroup},
#line 106 "../pagespeed/kernel/html/html_name.gperf"
    {"em",                                 HtmlName::kEm},
#line 126 "../pagespeed/kernel/html/html_name.gperf"
    {"header",                             HtmlName::kHeader},
#line 96 "../pagespeed/kernel/html/html_name.gperf"
    {"defer",                              HtmlName::kDefer},
#line 231 "../pagespeed/kernel/html/html_name.gperf"
    {"u",                                  HtmlName::kU},
    {""},
#line 210 "../pagespeed/kernel/html/html_name.gperf"
    {"source",                             HtmlName::kSource},
#line 39 "../pagespeed/kernel/html/html_name.gperf"
    {"aside",                              HtmlName::kAside},
#line 60 "../pagespeed/kernel/html/html_name.gperf"
    {"col",                                HtmlName::kCol},
#line 54 "../pagespeed/kernel/html/html_name.gperf"
    {"caption",                            HtmlName::kCaption},
    {""},
#line 114 "../pagespeed/kernel/html/html_name.gperf"
    {"form",                               HtmlName::kForm},
#line 107 "../pagespeed/kernel/html/html_name.gperf"
    {"embed",                              HtmlName::kEmbed},
#line 88 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-responsive-temp",     HtmlName::kDataPagespeedResponsiveTemp},
#line 190 "../pagespeed/kernel/html/html_name.gperf"
    {"readonly",                           HtmlName::kReadonly},
#line 139 "../pagespeed/kernel/html/html_name.gperf"
    {"ins",                                HtmlName::kIns},
#line 145 "../pagespeed/kernel/html/html_name.gperf"
    {"keytype",                            HtmlName::kKeytype},
#line 76 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-lazy-src",            HtmlName::kDataPagespeedLazySrc},
#line 136 "../pagespeed/kernel/html/html_name.gperf"
    {"iframe",                             HtmlName::kIframe},
#line 146 "../pagespeed/kernel/html/html_name.gperf"
    {"lang",                               HtmlName::kLang},
#line 78 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-low-res-src",         HtmlName::kDataPagespeedLowResSrc},
#line 181 "../pagespeed/kernel/html/html_name.gperf"
    {"p",                                  HtmlName::kP},
    {""},
#line 191 "../pagespeed/kernel/html/html_name.gperf"
    {"rel",                                HtmlName::kRel},
    {""}, {""},
#line 118 "../pagespeed/kernel/html/html_name.gperf"
    {"frameborder",                        HtmlName::kFrameborder},
#line 51 "../pagespeed/kernel/html/html_name.gperf"
    {"body",                               HtmlName::kBody},
#line 113 "../pagespeed/kernel/html/html_name.gperf"
    {"for",                                HtmlName::kFor},
#line 188 "../pagespeed/kernel/html/html_name.gperf"
    {"profile",                            HtmlName::kProfile},
    {""}, {""}, {""},
#line 189 "../pagespeed/kernel/html/html_name.gperf"
    {"q",                                  HtmlName::kQ},
    {""},
#line 152 "../pagespeed/kernel/html/html_name.gperf"
    {"loop",                               HtmlName::kLoop},
    {""},
#line 110 "../pagespeed/kernel/html/html_name.gperf"
    {"fieldset",                           HtmlName::kFieldset},
#line 36 "../pagespeed/kernel/html/html_name.gperf"
    {"area",                               HtmlName::kArea},
#line 156 "../pagespeed/kernel/html/html_name.gperf"
    {"mark",                               HtmlName::kMark},
#line 186 "../pagespeed/kernel/html/html_name.gperf"
    {"poster",                             HtmlName::kPoster},
    {""},
#line 35 "../pagespeed/kernel/html/html_name.gperf"
    {"amp",                                HtmlName::kAmp},
#line 148 "../pagespeed/kernel/html/html_name.gperf"
    {"legend",                             HtmlName::kLegend},
    {""},
#line 219 "../pagespeed/kernel/html/html_name.gperf"
    {"tbody",                              HtmlName::kTbody},
#line 172 "../pagespeed/kernel/html/html_name.gperf"
    {"object",                             HtmlName::kObject},
#line 131 "../pagespeed/kernel/html/html_name.gperf"
    {"html",                               HtmlName::kHtml},
#line 185 "../pagespeed/kernel/html/html_name.gperf"
    {"param",                              HtmlName::kParam},
    {""}, {""},
#line 168 "../pagespeed/kernel/html/html_name.gperf"
    {"nohref",                             HtmlName::kNohref},
#line 177 "../pagespeed/kernel/html/html_name.gperf"
    {"open",                               HtmlName::kOpen},
#line 72 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-high-res-src",        HtmlName::kDataPagespeedHighResSrc},
#line 198 "../pagespeed/kernel/html/html_name.gperf"
    {"ruby",                               HtmlName::kRuby},
#line 109 "../pagespeed/kernel/html/html_name.gperf"
    {"event",                              HtmlName::kEvent},
#line 144 "../pagespeed/kernel/html/html_name.gperf"
    {"keygen",                             HtmlName::kKeygen},
#line 180 "../pagespeed/kernel/html/html_name.gperf"
    {"other",                              HtmlName::kOther},
#line 222 "../pagespeed/kernel/html/html_name.gperf"
    {"textarea",                           HtmlName::kTextarea},
#line 174 "../pagespeed/kernel/html/html_name.gperf"
    {"onclick",                            HtmlName::kOnclick},
#line 133 "../pagespeed/kernel/html/html_name.gperf"
    {"i",                                  HtmlName::kI},
#line 218 "../pagespeed/kernel/html/html_name.gperf"
    {"tag",                                HtmlName::kTag},
    {""},
#line 81 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-lsc-url",             HtmlName::kDataPagespeedLscUrl},
    {""},
#line 236 "../pagespeed/kernel/html/html_name.gperf"
    {"video",                              HtmlName::kVideo},
#line 155 "../pagespeed/kernel/html/html_name.gperf"
    {"map",                                HtmlName::kMap},
#line 127 "../pagespeed/kernel/html/html_name.gperf"
    {"height",                             HtmlName::kHeight},
#line 187 "../pagespeed/kernel/html/html_name.gperf"
    {"pre",                                HtmlName::kPre},
    {""},
#line 171 "../pagespeed/kernel/html/html_name.gperf"
    {"novalidate",                         HtmlName::kNovalidate},
#line 153 "../pagespeed/kernel/html/html_name.gperf"
    {"main",                               HtmlName::kMain},
#line 193 "../pagespeed/kernel/html/html_name.gperf"
    {"reversed",                           HtmlName::kReversed},
#line 150 "../pagespeed/kernel/html/html_name.gperf"
    {"link",                               HtmlName::kLink},
    {""}, {""}, {""},
#line 112 "../pagespeed/kernel/html/html_name.gperf"
    {"footer",                             HtmlName::kFooter},
#line 85 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-orig-index",          HtmlName::kDataPagespeedOrigIndex},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 195 "../pagespeed/kernel/html/html_name.gperf"
    {"rowspan",                            HtmlName::kRowspan},
    {""}, {""}, {""}, {""},
#line 132 "../pagespeed/kernel/html/html_name.gperf"
    {"http-equiv",                         HtmlName::kHttpEquiv},
    {""}, {""}, {""}, {""},
#line 80 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-lsc-hash",            HtmlName::kDataPagespeedLscHash},
#line 233 "../pagespeed/kernel/html/html_name.gperf"
    {"value",                              HtmlName::kValue},
    {""},
#line 175 "../pagespeed/kernel/html/html_name.gperf"
    {"onerror",                            HtmlName::kOnerror},
#line 74 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-href",                HtmlName::kDataPagespeedHref},
#line 234 "../pagespeed/kernel/html/html_name.gperf"
    {"valuetype",                          HtmlName::kValuetype},
#line 79 "../pagespeed/kernel/html/html_name.gperf"
    {"data-pagespeed-lsc-expiry",          HtmlName::kDataPagespeedLscExpiry},
#line 134 "../pagespeed/kernel/html/html_name.gperf"
    {"icon",                               HtmlName::kIcon},
#line 141 "../pagespeed/kernel/html/html_name.gperf"
    {"ismap",                              HtmlName::kIsmap},
#line 239 "../pagespeed/kernel/html/html_name.gperf"
    {"wrap",                               HtmlName::kWrap},
    {""},
#line 182 "../pagespeed/kernel/html/html_name.gperf"
    {"pagespeed_iframe",                   HtmlName::kPagespeedIframe},
#line 232 "../pagespeed/kernel/html/html_name.gperf"
    {"ul",                                 HtmlName::kUl},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 140 "../pagespeed/kernel/html/html_name.gperf"
    {"input",                              HtmlName::kInput},
    {""}, {""}, {""},
#line 48 "../pagespeed/kernel/html/html_name.gperf"
    {"bdi",                                HtmlName::kBdi},
#line 237 "../pagespeed/kernel/html/html_name.gperf"
    {"wbr",                                HtmlName::kWbr},
    {""}, {""}, {""},
#line 130 "../pagespeed/kernel/html/html_name.gperf"
    {"href",                               HtmlName::kHref},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 235 "../pagespeed/kernel/html/html_name.gperf"
    {"var",                                HtmlName::kVar},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 238 "../pagespeed/kernel/html/html_name.gperf"
    {"width",                              HtmlName::kWidth},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 240 "../pagespeed/kernel/html/html_name.gperf"
    {"xmp",                                HtmlName::kXmp},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 142 "../pagespeed/kernel/html/html_name.gperf"
    {"itemprop",                           HtmlName::kItemProp},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 103 "../pagespeed/kernel/html/html_name.gperf"
    {"div",                                HtmlName::kDiv},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 137 "../pagespeed/kernel/html/html_name.gperf"
    {"img",                                HtmlName::kImg},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 165 "../pagespeed/kernel/html/html_name.gperf"
    {"nav",                                HtmlName::kNav},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 184 "../pagespeed/kernel/html/html_name.gperf"
    {"pagespeed_no_transform",             HtmlName::kPagespeedNoTransform},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 183 "../pagespeed/kernel/html/html_name.gperf"
    {"pagespeed_no_defer",                 HtmlName::kPagespeedNoDefer}
  };

const struct KeywordMap *
KeywordMapper::Lookup (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == lengthtable[key])
          {
            const char *s = kHtmlNameTable[key].name;

            if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_memcmp (str, s, len))
              return &kHtmlNameTable[key];
          }
    }
  return 0;
}
#line 241 "../pagespeed/kernel/html/html_name.gperf"


HtmlName::Keyword HtmlName::Lookup(const StringPiece& keyword) {
  const KeywordMap* keyword_map = KeywordMapper::Lookup(keyword.data(),
                                                        keyword.size());
  if (keyword_map != NULL) {
    return keyword_map->keyword;
  }
  return HtmlName::kNotAKeyword;
}

bool HtmlName::Iterator::AtEnd() const {
  return index_ > MAX_HASH_VALUE;
}

void HtmlName::Iterator::Next() {
  DCHECK(!AtEnd());
  ++index_;
  while (!AtEnd() && (*(kHtmlNameTable[index_].name) == '\0')) {
    ++index_;
  }
}

const char* HtmlName::Iterator::name() const {
  DCHECK(!AtEnd());
  return kHtmlNameTable[index_].name;
}

HtmlName::Keyword HtmlName::Iterator::keyword() const {
  DCHECK(!AtEnd());
  return kHtmlNameTable[index_].keyword;
}

int HtmlName::num_keywords() {
  return TOTAL_KEYWORDS;
}

}  // namespace net_instaweb
