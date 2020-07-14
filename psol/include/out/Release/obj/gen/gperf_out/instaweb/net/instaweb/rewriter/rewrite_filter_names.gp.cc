/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m' 10' --output-file=/usr/src/modpagespeed/out/Release/obj/gen/gperf_out/instaweb/net/instaweb/rewriter/rewrite_filter_names.gp.cc ../../net/instaweb/rewriter/rewrite_filter_names.gperf  */
/* Computed positions: -k'3,5,$' */

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

#line 1 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"

// rewrite_filter_names.cc is automatically generated from
// rewrite_filter_names.gperf.
// Author: jmarantz@google.com

#include "base/basictypes.h"
#include "net/instaweb/rewriter/public/rewrite_options.h"
#include "pagespeed/kernel/base/string_util.h"

namespace net_instaweb {
#line 23 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
struct FilterMap {
  const char* name;
  net_instaweb::RewriteOptions::Filter filter;
};
#include <string.h>

#define TOTAL_KEYWORDS 90
#define MIN_WORD_LENGTH 5
#define MAX_WORD_LENGTH 33
#define MIN_HASH_VALUE 10
#define MAX_HASH_VALUE 147
/* maximum key range = 138, duplicates = 0 */

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

class FilterMapper
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct FilterMap *Lookup (const char *str, size_t len);
};

inline unsigned int
FilterMapper::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
        5, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148,  68,  40,  16,   8,  25,
       64,  10,  62,   3, 148,  55,   0,  41,   0,  49,
        7, 148,  12,   6,   0,  31,  12,  13,   7, 148,
       62, 148, 148, 148, 148,  49, 148,  68,  40,  16,
        8,  25,  64,  10,  62,   3, 148,  55,   0,  41,
        0,  49,   7, 148,  12,   6,   0,  31,  12,  13,
        7, 148,  62, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148
    };
  return len + asso_values[static_cast<unsigned char>(str[4])] + asso_values[static_cast<unsigned char>(str[2])] + asso_values[static_cast<unsigned char>(str[len - 1])];
}

static const struct FilterMap kHtmlNameTable[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 113 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"split_html",                        RewriteOptions::kSplitHtml},
    {""}, {""}, {""}, {""}, {""},
#line 72 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"inline_css",                        RewriteOptions::kInlineCss},
#line 76 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"inline_javascript",                 RewriteOptions::kInlineJavascript},
    {""},
#line 74 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"inline_images",                     RewriteOptions::kInlineImages},
#line 93 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"outline_css",                       RewriteOptions::kOutlineCss},
#line 94 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"outline_javascript",                RewriteOptions::kOutlineJavascript},
#line 61 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"extend_cache_css",                  RewriteOptions::kExtendCacheCss},
#line 63 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"extend_cache_pdfs",                 RewriteOptions::kExtendCachePdfs},
#line 32 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"add_ids",                           RewriteOptions::kAddIds},
#line 62 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"extend_cache_images",               RewriteOptions::kExtendCacheImages},
#line 64 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"extend_cache_scripts",              RewriteOptions::kExtendCacheScripts},
#line 77 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"inline_preview_images",             RewriteOptions::kDelayImages},
#line 73 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"inline_google_font_css",            RewriteOptions::kInlineGoogleFontCss},
#line 114 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"split_html_helper",                 RewriteOptions::kSplitHtmlHelper},
#line 33 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"add_instrumentation",               RewriteOptions::kAddInstrumentation},
#line 115 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"sprite_images",                     RewriteOptions::kSpriteImages},
#line 95 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"pedantic",                          RewriteOptions::kPedantic},
#line 107 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"rewrite_css",                       RewriteOptions::kRewriteCss},
#line 54 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"deterministic_js",                  RewriteOptions::kDeterministicJs},
#line 60 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"explicit_close_tags",               RewriteOptions::kExplicitCloseTags},
#line 66 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"fix_reflows",                       RewriteOptions::kFixReflows},
#line 108 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"rewrite_domains",                   RewriteOptions::kRewriteDomains},
#line 118 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"strip_scripts",                     RewriteOptions::kStripScripts},
#line 35 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"canonicalize_javascript_libraries", RewriteOptions::kCanonicalizeJavascriptLibraries},
#line 59 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"experiment_http2",                  RewriteOptions::kExperimentHttp2},
#line 51 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"dedup_inlined_images",              RewriteOptions::kDedupInlinedImages},
    {""},
#line 109 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"rewrite_javascript_external",       RewriteOptions::kRewriteJavascriptExternal},
#line 96 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"prioritize_critical_css",           RewriteOptions::kPrioritizeCriticalCss},
#line 81 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"insert_img_dimensions",             RewriteOptions::kInsertImageDimensions},
#line 111 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"rewrite_style_attributes",          RewriteOptions::kRewriteStyleAttributes},
#line 82 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"insert_image_dimensions",           RewriteOptions::kInsertImageDimensions},
#line 45 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"convert_meta_tags",                 RewriteOptions::kConvertMetaTags},
#line 112 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"rewrite_style_attributes_with_url", RewriteOptions::kRewriteStyleAttributesWithUrl},
#line 57 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"elide_attributes",                  RewriteOptions::kElideAttributes},
#line 50 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"decode_rewritten_urls",             RewriteOptions::kDecodeRewrittenUrls},
#line 44 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"convert_jpeg_to_webp",              RewriteOptions::kConvertJpegToWebp},
#line 42 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"convert_gif_to_png",                RewriteOptions::kConvertGifToPng},
#line 46 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"convert_png_to_jpeg",               RewriteOptions::kConvertPngToJpeg},
#line 48 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"convert_to_webp_lossless",          RewriteOptions::kConvertToWebpLossless},
#line 56 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"div_structure",                     RewriteOptions::kDivStructure},
#line 47 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"convert_to_webp_animated",          RewriteOptions::kConvertToWebpAnimated},
    {""},
#line 34 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"cache_partial_html",                RewriteOptions::kCachePartialHtmlDeprecated},
#line 85 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"local_storage_cache",               RewriteOptions::kLocalStorageCache},
#line 37 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"combine_css",                       RewriteOptions::kCombineCss},
#line 38 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"combine_javascript",                RewriteOptions::kCombineJavascript},
#line 39 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"combine_heads",                     RewriteOptions::kCombineHeads},
#line 55 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"disable_javascript",                RewriteOptions::kDisableJavascript},
#line 49 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"debug",                             RewriteOptions::kDebug},
#line 110 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"rewrite_javascript_inline",         RewriteOptions::kRewriteJavascriptInline},
#line 119 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"trim_urls",                         RewriteOptions::kLeftTrimUrls},
    {""},
#line 116 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"strip_image_color_profile",         RewriteOptions::kStripImageColorProfile},
#line 30 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"add_base_tag",                      RewriteOptions::kAddBaseTag},
#line 65 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"fallback_rewrite_css_urls",         RewriteOptions::kFallbackRewriteCssUrls},
#line 101 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"remove_quotes",                     RewriteOptions::kRemoveQuotes},
#line 89 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"mobilize",                          RewriteOptions::kMobilize},
#line 100 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"remove_comments",                   RewriteOptions::kRemoveComments},
#line 71 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"include_js_source_maps",            RewriteOptions::kIncludeJsSourceMaps},
#line 75 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"inline_import_to_link",             RewriteOptions::kInlineImportToLink},
#line 43 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"convert_jpeg_to_progressive",       RewriteOptions::kConvertJpegToProgressive},
#line 105 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"responsive_images",                 RewriteOptions::kResponsiveImages},
#line 99 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"recompress_webp",                   RewriteOptions::kRecompressWebp},
#line 69 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"hint_preload_subresources",         RewriteOptions::kHintPreloadSubresources},
#line 98 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"recompress_png",                    RewriteOptions::kRecompressPng},
#line 97 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"recompress_jpeg",                   RewriteOptions::kRecompressJpeg},
#line 84 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"lazyload_images",                   RewriteOptions::kLazyloadImages},
#line 90 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"mobilize_precompute",               RewriteOptions::kMobilizePrecompute},
#line 92 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"move_css_to_head",                  RewriteOptions::kMoveCssToHead},
#line 31 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"add_head",                          RewriteOptions::kAddHead},
#line 102 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"resize_images",                     RewriteOptions::kResizeImages},
#line 78 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"insert_amp_link",                   RewriteOptions::kInsertAmpLink},
#line 91 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"move_css_above_scripts",            RewriteOptions::kMoveCssAboveScripts},
#line 70 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"in_place_optimize_for_browser",     RewriteOptions::kInPlaceOptimizeForBrowser},
    {""},
#line 53 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"defer_javascript",                  RewriteOptions::kDeferJavascript},
#line 67 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"flatten_css_imports",               RewriteOptions::kFlattenCssImports},
#line 103 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"resize_mobile_images",              RewriteOptions::kResizeMobileImages},
#line 80 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"insert_ga",                         RewriteOptions::kInsertGA},
#line 40 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"compute_statistics",                RewriteOptions::kComputeStatistics},
    {""},
#line 41 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"compute_critical_css",              RewriteOptions::kComputeCriticalCss},
#line 79 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"insert_dns_prefetch",               RewriteOptions::kInsertDnsPrefetch},
#line 83 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"jpeg_subsampling",                  RewriteOptions::kJpegSubsampling},
#line 58 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"experiment_collect_mob_image_info", RewriteOptions::kExperimentCollectMobImageInfo},
    {""}, {""}, {""}, {""},
#line 104 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"resize_rendered_image_dimensions",  RewriteOptions::kResizeToRenderedImageDimensions},
    {""},
#line 117 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"strip_image_meta_data",             RewriteOptions::kStripImageMetaData},
    {""}, {""}, {""},
#line 36 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"collapse_whitespace",               RewriteOptions::kCollapseWhitespace},
#line 52 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"defer_iframe",                      RewriteOptions::kDeferIframe},
    {""}, {""}, {""},
#line 68 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"flush_subresources",                RewriteOptions::kFlushSubresources},
#line 106 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"responsive_images_zoom",            RewriteOptions::kResponsiveImagesZoom},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 86 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"left_trim_urls",                    RewriteOptions::kLeftTrimUrls},
    {""}, {""}, {""}, {""}, {""},
#line 88 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"make_show_ads_async",               RewriteOptions::kMakeShowAdsAsync},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 87 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"
    {"make_google_analytics_async",       RewriteOptions::kMakeGoogleAnalyticsAsync}
  };

const struct FilterMap *
FilterMapper::Lookup (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = kHtmlNameTable[key].name;

          if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
            return &kHtmlNameTable[key];
        }
    }
  return 0;
}
#line 120 "../../net/instaweb/rewriter/rewrite_filter_names.gperf"


RewriteOptions::Filter RewriteOptions::LookupFilter(
    const StringPiece& filter_name) {
  const FilterMap* entry = FilterMapper::Lookup(
      filter_name.data(), filter_name.size());
  if (entry != NULL) {
    return entry->filter;
  }
  return RewriteOptions::kEndOfFilters;
}

}  // namespace net_instaweb
