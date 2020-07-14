/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m' 10' --output-file=/usr/src/modpagespeed/out/Release/obj/gen/gperf_out/instaweb/kernel/http/bot_checker.gp.cc ../pagespeed/kernel/http/bot_checker.gperf  */
/* Computed positions: -k'1' */

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

#line 1 "../pagespeed/kernel/http/bot_checker.gperf"

// bot_checker.cc is automatically generated from bot_checker.gperf.
// Author: fangfei@google.com

#include "pagespeed/kernel/http/bot_checker.h"

#include <string.h>

#include "pagespeed/kernel/base/string_util.h"

namespace net_instaweb {

#define TOTAL_KEYWORDS 24
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 32
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 34
/* maximum key range = 32, duplicates = 0 */

class RobotDetect
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const char *Lookup (const char *str, size_t len);
};

inline unsigned int
RobotDetect::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35,  0, 11, 35, 35, 35,
       7,  2, 14, 35, 35, 35, 18,  1, 35, 35,
       0, 35,  0, 35, 35, 35, 35,  3, 35,  5,
      35, 35, 35, 35, 35, 35, 35,  7, 35, 35,
      35,  0,  0, 35, 35, 35, 35, 35, 35, 35,
      35, 35,  1, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
      35, 35, 35, 35, 35, 35
    };
  return len + asso_values[static_cast<unsigned char>(str[0])];
}

static const char * const wordlist[] =
  {
    "", "", "",
    "PHP",
    "Ruby",
    "expo9",
    "Python",
    "Arachni",
    "Genieo",
    "proximic",
    "A6-Indexer",
    "Yahoo!",
    "WordPress",
    "Python-urllib",
    "RPT-HTTPClient",
    "AsyncHttpClient",
    "facebookplatform",
    "Apache-HttpClient",
    "BackRub",
    "facebookexternalhit",
    "about.ask.com",
    "Mediapartners-Google",
    "BingPreview",
    "Lycos",
    "HttpClient",
    "Feedfetcher-Google",
    "", "", "", "", "", "", "", "",
    "Google-StructuredDataTestingTool"
  };

const char *
RobotDetect::Lookup (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key];

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return s;
        }
    }
  return 0;
}
#line 48 "../pagespeed/kernel/http/bot_checker.gperf"


bool BotChecker::Lookup(const StringPiece& user_agent) {
  // Check if the user agent is empty, or contains bot / crawl / spider.
  if (user_agent.empty() ||
      FindIgnoreCase(user_agent, "bot") != StringPiece::npos ||
      FindIgnoreCase(user_agent, "crawl") != StringPiece::npos ||
      FindIgnoreCase(user_agent, "spider") != StringPiece::npos) {
    return true;
  }
  // check whether the whole string is in database
  if (RobotDetect::Lookup(user_agent.data(), user_agent.size()) != NULL) {
    return true;
  }
  // get the application_name/domain_name/email
  const char separator[] = " /,;+";
  StringPieceVector names;
  SplitStringPieceToVector(user_agent, separator, &names, true);
  for (int i = 0, n = names.size(); i < n; ++i) {
    if (RobotDetect::Lookup(names[i].data(),
                            names[i].size()) != NULL) {
      return true;
    }
  }
  return false;
}

}  // namespace net_instaweb
