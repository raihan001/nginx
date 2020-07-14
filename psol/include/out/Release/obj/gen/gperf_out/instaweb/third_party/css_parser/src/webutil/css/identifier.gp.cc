/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m' 10' --output-file=/usr/src/modpagespeed/out/Release/obj/gen/gperf_out/instaweb/third_party/css_parser/src/webutil/css/identifier.gp.cc ../../third_party/css_parser/src/webutil/css/identifier.gperf  */
/* Computed positions: -k'1-3,10,$' */

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

#line 17 "../../third_party/css_parser/src/webutil/css/identifier.gperf"

#include "webutil/css/identifier.h"

#include "base/googleinit.h"
#include "base/logging.h"
#include "webutil/css/string_util.h"

namespace Css {
#line 37 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
struct idents {
    const char *name;
    Identifier::Ident id;
};
enum
  {
    TOTAL_KEYWORDS = 144,
    MIN_WORD_LENGTH = 3,
    MAX_WORD_LENGTH = 24,
    MIN_HASH_VALUE = 5,
    MAX_HASH_VALUE = 352
  };

/* maximum key range = 348, duplicates = 0 */

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

#ifndef GPERF_CASE_STRNCMP
#define GPERF_CASE_STRNCMP 1
static int
gperf_case_strncmp (const char *s1, const char *s2, size_t n)
{
  for (; n > 0;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        {
          n--;
          continue;
        }
      return (int)c1 - (int)c2;
    }
  return 0;
}
#endif

class IdentifierMapper
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct idents *in_word_set (const char *str, size_t len);
};

inline unsigned int
IdentifierMapper::hash (const char *str, size_t len)
{
  static const unsigned short asso_values[] =
    {
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353,  86,  22, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353,  21,   4,  48,   6,   0,
       11,  73,  90,  57,  68,  47,   3,  70,  22,  28,
        1,  51,  14,   1,   0,  27,  62,  54,  91,  51,
      353, 353, 353, 353, 353, 353, 353,  21,   4,  48,
        6,   0,  11,  73,  90,  57,  68,  47,   3,  70,
       22,  28,   1,  51,  14,   1,   0,  27,  62,  54,
       91,  51, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353, 353, 353, 353,
      353, 353, 353, 353, 353, 353, 353
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[9])];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[static_cast<unsigned char>(str[1]+1)];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

static const struct idents wordlist[] =
  {
#line 177 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"pre", Identifier::PRE},
#line 57 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"top", Identifier::TOP},
#line 180 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"pre-line", Identifier::PRE_LINE},
#line 179 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"pre-wrap", Identifier::PRE_WRAP},
#line 104 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table", Identifier::TABLE},
#line 69 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"solid", Identifier::SOLID},
#line 171 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"baseline", Identifier::BASELINE},
#line 132 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"bold", Identifier::BOLD},
#line 67 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"dotted", Identifier::DOTTED},
#line 66 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"separate", Identifier::SEPARATE},
#line 68 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"dashed", Identifier::DASHED},
#line 112 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-cell", Identifier::TABLE_CELL},
#line 124 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"large", Identifier::LARGE},
#line 108 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-footer-group", Identifier::TABLE_FOOTER_GROUP},
#line 133 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"bolder", Identifier::BOLDER},
#line 54 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"left", Identifier::LEFT},
#line 60 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"scroll", Identifier::SCROLL},
#line 52 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"repeat", Identifier::REPEAT},
#line 107 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-header-group", Identifier::TABLE_HEADER_GROUP},
#line 82 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"default", Identifier::DEFAULT},
#line 159 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"relative", Identifier::RELATIVE},
#line 169 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"embed", Identifier::EMBED},
#line 96 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"progress", Identifier::PROGRESS},
#line 70 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"double", Identifier::DOUBLE},
#line 128 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"larger", Identifier::LARGER},
#line 116 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"serif", Identifier::SERIF},
#line 113 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-caption", Identifier::TABLE_CAPTION},
#line 85 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"e-resize", Identifier::E_RESIZE},
#line 91 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"s-resize", Identifier::S_RESIZE},
#line 46 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"normal", Identifier::NORMAL},
#line 145 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"square", Identifier::SQUARE},
#line 44 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"none", Identifier::NONE},
#line 98 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"rtl", Identifier::RTL,},
#line 123 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"small", Identifier::SMALL},
#line 110 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-column-group", Identifier::TABLE_COLUMN_GROUP},
#line 62 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"transparent", Identifier::TRANSPARENT},
#line 131 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"small-caps", Identifier::SMALL_CAPS},
#line 117 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"sans-serif", Identifier::SANS_SERIF},
#line 53 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"collapse", Identifier::COLLAPSE},
#line 97 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"ltr", Identifier::LTR,},
#line 166 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"capitalize", Identifier::CAPITALIZE},
#line 127 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"smaller", Identifier::SMALLER},
#line 88 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"n-resize", Identifier::N_RESIZE},
#line 168 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"lowercase", Identifier::LOWERCASE},
#line 111 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-column", Identifier::TABLE_COLUMN},
#line 162 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"underline", Identifier::UNDERLINE},
#line 109 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-row", Identifier::TABLE_ROW},
#line 172 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"sub", Identifier::SUB},
#line 146 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"decimal", Identifier::DECIMAL},
#line 160 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"absolute", Identifier::ABSOLUTE},
#line 139 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"small-caption", Identifier::SMALL_CAPTION},
#line 83 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"pointer", Identifier::POINTER},
#line 58 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"bottom", Identifier::BOTTOM},
#line 135 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"caption", Identifier::CAPTION},
#line 173 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"super", Identifier::SUPER},
#line 178 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"nowrap", Identifier::NOWRAP},
#line 64 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"repeat-y", Identifier::REPEAT_Y},
#line 130 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"oblique", Identifier::OBLIQUE},
#line 140 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"status-bar", Identifier::STATUS_BAR},
#line 167 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"uppercase", Identifier::UPPERCASE},
#line 77 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"open-quote", Identifier::OPEN_QUOTE},
#line 163 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"overline", Identifier::OVERLINE},
#line 73 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"inset", Identifier::INSET},
#line 141 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"inside", Identifier::INSIDE},
#line 72 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"ridge", Identifier::RIDGE},
#line 99 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"inline", Identifier::INLINE},
#line 119 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"fantasy", Identifier::FANTASY},
#line 74 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"outset", Identifier::OUTSET},
#line 142 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"outside", Identifier::OUTSIDE},
#line 92 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"w-resize", Identifier::W_RESIZE},
#line 59 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"both", Identifier::BOTH},
#line 81 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"crosshair", Identifier::CROSSHAIR},
#line 55 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"center", Identifier::CENTER},
#line 120 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"monospace", Identifier::MONOSPACE},
#line 158 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"static", Identifier::STATIC},
#line 105 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"inline-table", Identifier::INLINE_TABLE},
#line 170 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"bidi-override", Identifier::BIDI_OVERRIDE},
#line 93 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"text", Identifier::TEXT},
#line 89 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"se-resize", Identifier::SE_RESIZE},
#line 71 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"groove", Identifier::GROOVE},
#line 95 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"help", Identifier::HELP},
#line 106 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"table-row-group", Identifier::TABLE_ROW_GROUP},
#line 174 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"text-top", Identifier::TEXT_TOP},
#line 148 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"lower-roman", Identifier::LOWER_ROMAN},
#line 147 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"decimal-leading-zero", Identifier::DECIMAL_LEADING_ZERO},
#line 50 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"avoid", Identifier::AVOID},
#line 45 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"auto", Identifier::AUTO},
#line 150 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"lower-greek", Identifier::LOWER_GREEK},
#line 136 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"icon", Identifier::ICON},
#line 65 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"no-repeat", Identifier::NO_REPEAT},
#line 94 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"wait", Identifier::WAIT},
#line 153 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"armenian", Identifier::ARMENIAN},
#line 125 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"x-large", Identifier::X_LARGE},
#line 122 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"x-small", Identifier::X_SMALL},
#line 63 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"repeat-x", Identifier::REPEAT_X},
#line 102 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"run-in", Identifier::RUN_IN},
#line 143 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"disc", Identifier::DISC},
#line 86 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"ne-resize", Identifier::NE_RESIZE},
#line 118 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"cursive", Identifier::CURSIVE},
#line 149 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"upper-roman", Identifier::UPPER_ROMAN},
#line 137 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"menu", Identifier::MENU},
#line 144 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"circle", Identifier::CIRCLE},
#line 84 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"move", Identifier::MOVE},
#line 47 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"visible", Identifier::VISIBLE},
#line 75 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"thin", Identifier::THIN},
#line 154 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"georgian", Identifier::GEORGIAN},
#line 114 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"show", Identifier::SHOW},
#line 151 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"lower-latin", Identifier::LOWER_LATIN,},
#line 79 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"no-open-quote", Identifier::NO_OPEN_QUOTE},
#line 175 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"middle", Identifier::MIDDLE},
#line 101 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"list-item", Identifier::LIST_ITEM},
#line 49 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"always", Identifier::ALWAYS},
#line 157 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"invert", Identifier::INVERT},
#line 100 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"block", Identifier::BLOCK},
#line 78 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"close-quote", Identifier::CLOSE_QUOTE},
#line 129 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"italic", Identifier::ITALIC},
#line 56 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"right", Identifier::RIGHT},
#line 51 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"medium", Identifier::MEDIUM},
#line 134 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"lighter", Identifier::LIGHTER},
#line 76 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"thick", Identifier::THICK},
#line 115 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"hide", Identifier::HIDE},
#line 152 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"upper-latin", Identifier::UPPER_LATIN},
#line 80 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"no-close-quote", Identifier::NO_CLOSE_QUOTE},
#line 103 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"inline-block", Identifier::INLINE_BLOCK},
#line 155 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"lower-alpha", Identifier::LOWER_ALPHA},
#line 61 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"fixed", Identifier::FIXED},
#line 43 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"inherit", Identifier::INHERIT},
#line 165 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"blink", Identifier::BLINK},
#line 90 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"sw-resize", Identifier::SW_RESIZE},
#line 161 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"justify", Identifier::JUSTIFY},
#line 48 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"hidden", Identifier::HIDDEN},
#line 156 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"upper-alpha", Identifier::UPPER_ALPHA},
#line 87 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"nw-resize", Identifier::NW_RESIZE},
#line 176 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"text-bottom", Identifier::TEXT_BOTTOM},
#line 138 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"message-box", Identifier::MESSAGE_BOX},
#line 164 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"line-through", Identifier::LINE_THROUGH},
#line 126 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"xx-large", Identifier::XX_LARGE},
#line 121 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"xx-small", Identifier::XX_SMALL},
#line 182 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"--goog-body-color--", Identifier::GOOG_BODY_COLOR},
#line 183 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"--goog-body-link-color--", Identifier::GOOG_BODY_LINK_COLOR},
#line 185 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"--goog-small--", Identifier::GOOG_SMALL},
#line 42 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"--goog-unknown--", Identifier::GOOG_UNKNOWN},
#line 181 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"--goog-initial--", Identifier::GOOG_INITIAL},
#line 184 "../../third_party/css_parser/src/webutil/css/identifier.gperf"
    {"--goog-big--", Identifier::GOOG_BIG}
  };

const struct idents *
IdentifierMapper::in_word_set (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const struct idents *resword;

          switch (key - 5)
            {
              case 0:
                resword = &wordlist[0];
                goto compare;
              case 1:
                resword = &wordlist[1];
                goto compare;
              case 5:
                resword = &wordlist[2];
                goto compare;
              case 6:
                resword = &wordlist[3];
                goto compare;
              case 8:
                resword = &wordlist[4];
                goto compare;
              case 11:
                resword = &wordlist[5];
                goto compare;
              case 12:
                resword = &wordlist[6];
                goto compare;
              case 13:
                resword = &wordlist[7];
                goto compare;
              case 14:
                resword = &wordlist[8];
                goto compare;
              case 16:
                resword = &wordlist[9];
                goto compare;
              case 18:
                resword = &wordlist[10];
                goto compare;
              case 19:
                resword = &wordlist[11];
                goto compare;
              case 21:
                resword = &wordlist[12];
                goto compare;
              case 22:
                resword = &wordlist[13];
                goto compare;
              case 23:
                resword = &wordlist[14];
                goto compare;
              case 24:
                resword = &wordlist[15];
                goto compare;
              case 25:
                resword = &wordlist[16];
                goto compare;
              case 27:
                resword = &wordlist[17];
                goto compare;
              case 28:
                resword = &wordlist[18];
                goto compare;
              case 30:
                resword = &wordlist[19];
                goto compare;
              case 31:
                resword = &wordlist[20];
                goto compare;
              case 32:
                resword = &wordlist[21];
                goto compare;
              case 34:
                resword = &wordlist[22];
                goto compare;
              case 35:
                resword = &wordlist[23];
                goto compare;
              case 36:
                resword = &wordlist[24];
                goto compare;
              case 37:
                resword = &wordlist[25];
                goto compare;
              case 38:
                resword = &wordlist[26];
                goto compare;
              case 39:
                resword = &wordlist[27];
                goto compare;
              case 40:
                resword = &wordlist[28];
                goto compare;
              case 41:
                resword = &wordlist[29];
                goto compare;
              case 43:
                resword = &wordlist[30];
                goto compare;
              case 44:
                resword = &wordlist[31];
                goto compare;
              case 45:
                resword = &wordlist[32];
                goto compare;
              case 47:
                resword = &wordlist[33];
                goto compare;
              case 49:
                resword = &wordlist[34];
                goto compare;
              case 50:
                resword = &wordlist[35];
                goto compare;
              case 51:
                resword = &wordlist[36];
                goto compare;
              case 54:
                resword = &wordlist[37];
                goto compare;
              case 55:
                resword = &wordlist[38];
                goto compare;
              case 56:
                resword = &wordlist[39];
                goto compare;
              case 58:
                resword = &wordlist[40];
                goto compare;
              case 60:
                resword = &wordlist[41];
                goto compare;
              case 61:
                resword = &wordlist[42];
                goto compare;
              case 62:
                resword = &wordlist[43];
                goto compare;
              case 64:
                resword = &wordlist[44];
                goto compare;
              case 65:
                resword = &wordlist[45];
                goto compare;
              case 66:
                resword = &wordlist[46];
                goto compare;
              case 69:
                resword = &wordlist[47];
                goto compare;
              case 70:
                resword = &wordlist[48];
                goto compare;
              case 73:
                resword = &wordlist[49];
                goto compare;
              case 74:
                resword = &wordlist[50];
                goto compare;
              case 75:
                resword = &wordlist[51];
                goto compare;
              case 76:
                resword = &wordlist[52];
                goto compare;
              case 77:
                resword = &wordlist[53];
                goto compare;
              case 78:
                resword = &wordlist[54];
                goto compare;
              case 79:
                resword = &wordlist[55];
                goto compare;
              case 80:
                resword = &wordlist[56];
                goto compare;
              case 81:
                resword = &wordlist[57];
                goto compare;
              case 82:
                resword = &wordlist[58];
                goto compare;
              case 83:
                resword = &wordlist[59];
                goto compare;
              case 84:
                resword = &wordlist[60];
                goto compare;
              case 85:
                resword = &wordlist[61];
                goto compare;
              case 86:
                resword = &wordlist[62];
                goto compare;
              case 87:
                resword = &wordlist[63];
                goto compare;
              case 88:
                resword = &wordlist[64];
                goto compare;
              case 89:
                resword = &wordlist[65];
                goto compare;
              case 90:
                resword = &wordlist[66];
                goto compare;
              case 91:
                resword = &wordlist[67];
                goto compare;
              case 92:
                resword = &wordlist[68];
                goto compare;
              case 93:
                resword = &wordlist[69];
                goto compare;
              case 94:
                resword = &wordlist[70];
                goto compare;
              case 95:
                resword = &wordlist[71];
                goto compare;
              case 96:
                resword = &wordlist[72];
                goto compare;
              case 97:
                resword = &wordlist[73];
                goto compare;
              case 98:
                resword = &wordlist[74];
                goto compare;
              case 99:
                resword = &wordlist[75];
                goto compare;
              case 100:
                resword = &wordlist[76];
                goto compare;
              case 101:
                resword = &wordlist[77];
                goto compare;
              case 102:
                resword = &wordlist[78];
                goto compare;
              case 103:
                resword = &wordlist[79];
                goto compare;
              case 104:
                resword = &wordlist[80];
                goto compare;
              case 105:
                resword = &wordlist[81];
                goto compare;
              case 106:
                resword = &wordlist[82];
                goto compare;
              case 107:
                resword = &wordlist[83];
                goto compare;
              case 108:
                resword = &wordlist[84];
                goto compare;
              case 109:
                resword = &wordlist[85];
                goto compare;
              case 110:
                resword = &wordlist[86];
                goto compare;
              case 111:
                resword = &wordlist[87];
                goto compare;
              case 112:
                resword = &wordlist[88];
                goto compare;
              case 113:
                resword = &wordlist[89];
                goto compare;
              case 114:
                resword = &wordlist[90];
                goto compare;
              case 117:
                resword = &wordlist[91];
                goto compare;
              case 118:
                resword = &wordlist[92];
                goto compare;
              case 119:
                resword = &wordlist[93];
                goto compare;
              case 120:
                resword = &wordlist[94];
                goto compare;
              case 121:
                resword = &wordlist[95];
                goto compare;
              case 122:
                resword = &wordlist[96];
                goto compare;
              case 123:
                resword = &wordlist[97];
                goto compare;
              case 126:
                resword = &wordlist[98];
                goto compare;
              case 128:
                resword = &wordlist[99];
                goto compare;
              case 129:
                resword = &wordlist[100];
                goto compare;
              case 131:
                resword = &wordlist[101];
                goto compare;
              case 132:
                resword = &wordlist[102];
                goto compare;
              case 133:
                resword = &wordlist[103];
                goto compare;
              case 135:
                resword = &wordlist[104];
                goto compare;
              case 137:
                resword = &wordlist[105];
                goto compare;
              case 139:
                resword = &wordlist[106];
                goto compare;
              case 143:
                resword = &wordlist[107];
                goto compare;
              case 144:
                resword = &wordlist[108];
                goto compare;
              case 145:
                resword = &wordlist[109];
                goto compare;
              case 146:
                resword = &wordlist[110];
                goto compare;
              case 147:
                resword = &wordlist[111];
                goto compare;
              case 148:
                resword = &wordlist[112];
                goto compare;
              case 149:
                resword = &wordlist[113];
                goto compare;
              case 152:
                resword = &wordlist[114];
                goto compare;
              case 154:
                resword = &wordlist[115];
                goto compare;
              case 155:
                resword = &wordlist[116];
                goto compare;
              case 158:
                resword = &wordlist[117];
                goto compare;
              case 160:
                resword = &wordlist[118];
                goto compare;
              case 161:
                resword = &wordlist[119];
                goto compare;
              case 163:
                resword = &wordlist[120];
                goto compare;
              case 164:
                resword = &wordlist[121];
                goto compare;
              case 169:
                resword = &wordlist[122];
                goto compare;
              case 170:
                resword = &wordlist[123];
                goto compare;
              case 175:
                resword = &wordlist[124];
                goto compare;
              case 176:
                resword = &wordlist[125];
                goto compare;
              case 177:
                resword = &wordlist[126];
                goto compare;
              case 178:
                resword = &wordlist[127];
                goto compare;
              case 182:
                resword = &wordlist[128];
                goto compare;
              case 184:
                resword = &wordlist[129];
                goto compare;
              case 187:
                resword = &wordlist[130];
                goto compare;
              case 196:
                resword = &wordlist[131];
                goto compare;
              case 203:
                resword = &wordlist[132];
                goto compare;
              case 206:
                resword = &wordlist[133];
                goto compare;
              case 207:
                resword = &wordlist[134];
                goto compare;
              case 217:
                resword = &wordlist[135];
                goto compare;
              case 231:
                resword = &wordlist[136];
                goto compare;
              case 234:
                resword = &wordlist[137];
                goto compare;
              case 287:
                resword = &wordlist[138];
                goto compare;
              case 292:
                resword = &wordlist[139];
                goto compare;
              case 297:
                resword = &wordlist[140];
                goto compare;
              case 325:
                resword = &wordlist[141];
                goto compare;
              case 335:
                resword = &wordlist[142];
                goto compare;
              case 347:
                resword = &wordlist[143];
                goto compare;
            }
          return 0;
        compare:
          {
            const char *s = resword->name;

            if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
              return resword;
          }
        }
    }
  return 0;
}
#line 186 "../../third_party/css_parser/src/webutil/css/identifier.gperf"


//
// Constructor.
//

Identifier::Identifier(const UnicodeText& s) : ident_(IdentFromText(s)) {
  if (ident_ == OTHER)
    other_ = s;
}

//
// Static methods mapping Ident's to strings
//

Identifier::Ident Identifier::IdentFromText(const UnicodeText& s) {
  const idents* a = IdentifierMapper::in_word_set(s.utf8_data(),
                                                  s.utf8_length());
  if (a)
    return a->id;
  else
    return OTHER;
}

static struct {
  const char* name;
  int len;
} gKnownIdentifiers[TOTAL_KEYWORDS];

static void InitializeIdentifierNameLookupTable() {
  for (int i = 0; i < TOTAL_KEYWORDS; ++i) {
    gKnownIdentifiers[wordlist[i].id].name = wordlist[i].name;
    gKnownIdentifiers[wordlist[i].id].len = strlen(wordlist[i].name);
  }
}

UnicodeText Identifier::TextFromIdent(Ident p) {
  if (p == OTHER) {
    return UTF8ToUnicodeText("OTHER", 5, false);
  } else {
    DCHECK_LT(p, OTHER);
    return UTF8ToUnicodeText(gKnownIdentifiers[p].name,
                             gKnownIdentifiers[p].len,
                             false);
  }
}

} // namespace

REGISTER_MODULE_INITIALIZER(identifier, {
  Css::InitializeIdentifierNameLookupTable();
});
