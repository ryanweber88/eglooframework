
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>

namespace hphp_impl_starter {}

using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////


// Function Invoke Table
extern CallInfo ci_smarty_variablefilter_htmlspecialchars;
extern CallInfo ci_smarty_modifier_spacify;
extern CallInfo ci_smarty_modifiercompiler_count_sentences;
extern CallInfo ci_smarty_modifiercompiler_cat;
extern CallInfo ci_smarty_modifiercompiler_upper;
extern CallInfo ci_smarty_function_escape_special_chars;
extern CallInfo ci_smarty_modifier_replace;
extern CallInfo ci_smarty_modifiercompiler_strip_tags;
extern CallInfo ci_smarty_modifiercompiler_noprint;
extern CallInfo ci_smarty_function_html_checkboxes_output;
extern CallInfo ci_smarty_modifiercompiler_lower;
extern CallInfo ci_smarty_modifier_truncate;
extern CallInfo ci_smarty_function_html_image;
extern CallInfo ci_smarty_modifiercompiler_wordwrap;
extern CallInfo ci_smarty_function_fetch;
extern CallInfo ci_mb_str_replace;
extern CallInfo ci_smartyAutoload;
extern CallInfo ci_smarty_function_html_select_date;
extern CallInfo ci_smarty_function_html_options_optoutput;
extern CallInfo ci_smarty_modifiercompiler_count_words;
extern CallInfo ci_smarty_function_html_table;
extern CallInfo ci_smarty_modifiercompiler_count_paragraphs;
extern CallInfo ci__smarty_regex_replace_check;
extern CallInfo ci_smarty_function_html_options_optgroup;
extern CallInfo ci_smarty_function_html_options;
extern CallInfo ci_smarty_function_html_checkboxes;
extern CallInfo ci_smarty_block_php;
extern CallInfo ci_smarty_mb_str_replace;
extern CallInfo ci_smarty_outputfilter_trimwhitespace;
extern CallInfo ci_smarty_modifiercompiler_string_format;
extern CallInfo ci_smarty_outputfilter_trimwhitespace_replace;
extern CallInfo ci_smarty_function_cycle;
extern CallInfo ci_smarty_make_timestamp;
extern CallInfo ci_smarty_modifiercompiler_strip;
extern CallInfo ci_smarty_function_html_select_time;
extern CallInfo ci_smarty_function_html_table_cycle;
extern CallInfo ci_smarty_modifiercompiler_indent;
extern CallInfo ci_smarty_modifier_debug_print_var;
extern CallInfo ci_smarty_modifier_date_format;
extern CallInfo ci_smarty_modifiercompiler_count_characters;
extern CallInfo ci_smarty_modifier_regex_replace;
extern CallInfo ci_smarty_function_html_radios_output;
extern CallInfo ci_smarty_modifiercompiler_default;
extern CallInfo ci_smarty_function_html_radios;
extern CallInfo ci_smarty_function_counter;
extern CallInfo ci_smarty_modifier_capitalize;
extern CallInfo ci_1_df_lambda_1;
extern CallInfo ci_1_df_lambda_2;
extern CallInfo ci_smarty_function_mailto;
extern CallInfo ci_smarty_block_textformat;
extern CallInfo ci_smarty_function_math;

struct hashNodeFunc {
  int64 hash;
  bool offset;
  bool end;
  const char *name;
  const void *data;
};
static const hashNodeFunc funcBuckets[] = {
 {0x2AD9B06B862E5483LL,0,1,"smarty_modifier_capitalize",&ci_smarty_modifier_capitalize},
 {0x7C108F365C81ED06LL,0,1,"smarty_function_math",&ci_smarty_function_math},
 {0x77E3CF411C515D08LL,0,1,"smarty_function_html_checkboxes",&ci_smarty_function_html_checkboxes},
 {0x078F229938048B09LL,0,1,"smarty_modifiercompiler_count_sentences",&ci_smarty_modifiercompiler_count_sentences},
 {0x0BC1685DAF935E8ALL,0,1,"smartyautoload",&ci_smartyAutoload},
 {0x6CAD66FB5B56DD0CLL,0,0,"smarty_function_html_checkboxes_output",&ci_smarty_function_html_checkboxes_output},
 {0x1175E229DDE9548CLL,0,0,"smarty_modifier_debug_print_var",&ci_smarty_modifier_debug_print_var},
 {0x31AB1DFFBC8FA20CLL,0,1,"smarty_function_counter",&ci_smarty_function_counter},
 {0x6F6C0DD689FD4911LL,0,1,"smarty_function_html_options_optgroup",&ci_smarty_function_html_options_optgroup},
 {0x21ED9994C5948B16LL,0,0,"smarty_variablefilter_htmlspecialchars",&ci_smarty_variablefilter_htmlspecialchars},
 {0x396691C4E36F9C96LL,0,1,"smarty_modifiercompiler_upper",&ci_smarty_modifiercompiler_upper},
 {0x68CC43EFC7CB5D97LL,0,1,"smarty_function_mailto",&ci_smarty_function_mailto},
 {0x4FBEDEAC1D1A289DLL,0,1,"smarty_modifiercompiler_count_paragraphs",&ci_smarty_modifiercompiler_count_paragraphs},
 {0x039889DA9A26D71FLL,0,1,"smarty_outputfilter_trimwhitespace_replace",&ci_smarty_outputfilter_trimwhitespace_replace},
 {0x15F66F8D29ECF5A5LL,0,1,"smarty_block_php",&ci_smarty_block_php},
 {0x0305D7C542EF6826LL,0,0,"smarty_modifiercompiler_wordwrap",&ci_smarty_modifiercompiler_wordwrap},
 {0x0EF1A632568061A6LL,0,1,"smarty_modifiercompiler_string_format",&ci_smarty_modifiercompiler_string_format},
 {0x4A9960C7E5BF6BA7LL,0,1,"smarty_modifier_replace",&ci_smarty_modifier_replace},
 {0x59E5B5CBC85AA8A9LL,0,1,"smarty_modifier_truncate",&ci_smarty_modifier_truncate},
 {0x6DD6465A2980E22CLL,0,1,"1_df_lambda_1",&ci_1_df_lambda_1},
 {0x38D8EC5209746730LL,0,1,"smarty_function_html_options",&ci_smarty_function_html_options},
 {0x1C461BE9AD6074B3LL,0,1,"smarty_modifiercompiler_default",&ci_smarty_modifiercompiler_default},
 {0x66A6DCF9DBD5F9B4LL,0,1,"smarty_function_html_table",&ci_smarty_function_html_table},
 {0x49F4771D4DFDC9B8LL,0,1,"smarty_function_html_radios",&ci_smarty_function_html_radios},
 {0x2A61F889A79E6B39LL,0,1,"smarty_make_timestamp",&ci_smarty_make_timestamp},
 {0x2DEEAB7362B9513BLL,0,1,"smarty_modifiercompiler_cat",&ci_smarty_modifiercompiler_cat},
 {0x318A01710D7B3DBDLL,0,0,"smarty_modifiercompiler_strip_tags",&ci_smarty_modifiercompiler_strip_tags},
 {0x05AEE0892C1E74BDLL,0,1,"smarty_function_html_select_date",&ci_smarty_function_html_select_date},
 {0x1714573C7067F1BELL,0,1,"smarty_modifier_spacify",&ci_smarty_modifier_spacify},
 {0x0C09FA7B786E4B44LL,0,1,"smarty_modifiercompiler_count_words",&ci_smarty_modifiercompiler_count_words},
 {0x6D427AE4554FFF45LL,0,1,"smarty_function_html_radios_output",&ci_smarty_function_html_radios_output},
 {0x44DB6EA9D82E2FC7LL,0,1,"smarty_modifiercompiler_lower",&ci_smarty_modifiercompiler_lower},
 {0x4100E60FEC0CD848LL,0,1,"mb_str_replace",&ci_mb_str_replace},
 {0x1DCD429DE17D02CELL,0,1,"smarty_block_textformat",&ci_smarty_block_textformat},
 {0x7BAE72C000E025CFLL,1,1,"smarty_modifier_escape",(const void *)(offsetof(GlobalVariables, GCI(smarty_modifier_escape)))},
 {0x3B6637F245F11053LL,0,1,"1_df_lambda_2",&ci_1_df_lambda_2},
 {0x4A49465DD37F6055LL,0,0,"smarty_function_escape_special_chars",&ci_smarty_function_escape_special_chars},
 {0x193B96A010B5D3D5LL,0,0,"smarty_function_html_image",&ci_smarty_function_html_image},
 {0x432A56FA01D0C655LL,0,1,"smarty_function_cycle",&ci_smarty_function_cycle},
 {0x02A25C007A2F22DBLL,0,0,"smarty_modifiercompiler_noprint",&ci_smarty_modifiercompiler_noprint},
 {0x2487435E0D34B95BLL,0,1,"_smarty_regex_replace_check",&ci__smarty_regex_replace_check},
 {0x2CA4DA4F934E1EDFLL,0,1,"smarty_modifiercompiler_count_characters",&ci_smarty_modifiercompiler_count_characters},
 {0x2CC9069C6D1E3962LL,0,1,"smarty_modifiercompiler_indent",&ci_smarty_modifiercompiler_indent},
 {0x7650C1D0F40B8FE3LL,0,1,"smarty_function_fetch",&ci_smarty_function_fetch},
 {0x5463507F66A95E68LL,0,1,"smarty_mb_str_replace",&ci_smarty_mb_str_replace},
 {0x2DDE8738634F7B71LL,0,0,"smarty_outputfilter_trimwhitespace",&ci_smarty_outputfilter_trimwhitespace},
 {0x0655EA0ECFA911F1LL,0,1,"smarty_modifier_date_format",&ci_smarty_modifier_date_format},
 {0x0B593721A395CE73LL,0,1,"smarty_modifiercompiler_strip",&ci_smarty_modifiercompiler_strip},
 {0x41C85829638FDE76LL,0,1,"smarty_modifier_regex_replace",&ci_smarty_modifier_regex_replace},
 {0x686E40517B22BEFCLL,0,1,"smarty_function_html_options_optoutput",&ci_smarty_function_html_options_optoutput},
 {0x51DFBF89DA03E1FDLL,0,1,"smarty_function_html_select_time",&ci_smarty_function_html_select_time},
 {0x15A665873B75E57ELL,0,1,"smarty_function_html_table_cycle",&ci_smarty_function_html_table_cycle},
};
static const hashNodeFunc *funcMapTable[] = {
  0,0,0,funcBuckets+0,0,0,funcBuckets+1,0,
  funcBuckets+2,funcBuckets+3,funcBuckets+4,0,funcBuckets+5,0,0,0,
  0,funcBuckets+8,0,0,0,0,funcBuckets+9,funcBuckets+11,
  0,0,0,0,0,funcBuckets+12,0,funcBuckets+13,
  0,0,0,0,0,funcBuckets+14,funcBuckets+15,funcBuckets+17,
  0,funcBuckets+18,0,0,funcBuckets+19,0,0,0,
  funcBuckets+20,0,0,funcBuckets+21,funcBuckets+22,0,0,0,
  funcBuckets+23,funcBuckets+24,0,funcBuckets+25,0,funcBuckets+26,funcBuckets+28,0,
  0,0,0,0,funcBuckets+29,funcBuckets+30,0,funcBuckets+31,
  funcBuckets+32,0,0,0,0,0,funcBuckets+33,funcBuckets+34,
  0,0,0,funcBuckets+35,0,funcBuckets+36,0,0,
  0,0,0,funcBuckets+39,0,0,0,funcBuckets+41,
  0,0,funcBuckets+42,funcBuckets+43,0,0,0,0,
  funcBuckets+44,0,0,0,0,0,0,0,
  0,funcBuckets+45,0,funcBuckets+47,0,0,funcBuckets+48,0,
  0,0,0,0,funcBuckets+49,funcBuckets+50,funcBuckets+51,0,

};
static inline const hashNodeFunc *findFunc(const char *name, int64 hash) {
  const hashNodeFunc *p = funcMapTable[hash & 127];
  if (UNLIKELY(!p)) return NULL;
  do {
    if (LIKELY(p->hash == hash) && (LIKELY(p->name==name)||LIKELY(!strcasecmp(p->name, name)))) return p;
  } while (!p++->end);
  return NULL;
}

bool get_call_info(const CallInfo *&ci, void *&extra, const char *s, int64 hash) {
  DECLARE_GLOBAL_VARIABLES(g);
  extra = NULL;
  if (hash < 0) hash = hash_string(s);
  const hashNodeFunc *p = findFunc(s, hash);
  if (LIKELY(p!=0)) {
    if (UNLIKELY(p->offset)) {
      const char *addr = (const char *)g + (int64)p->data;
      ci = *(const CallInfo **)addr;
      return ci != 0;
    } else {
      ci = (const CallInfo *)p->data;
      return true;
    }
  }
  return get_call_info_builtin(ci, extra, s, hash);
}
bool get_call_info_no_eval(const CallInfo *&ci, void *&extra, const char *s, int64 hash) {
  DECLARE_GLOBAL_VARIABLES(g);
  extra = NULL;
  if (hash < 0) hash = hash_string(s);
  const hashNodeFunc *p = findFunc(s, hash);
  if (LIKELY(p!=0)) {
    if (UNLIKELY(p->offset)) {
      const char *addr = (const char *)g + (int64)p->data;
      ci = *(const CallInfo **)addr;
      return ci != 0;
    } else {
      ci = (const CallInfo *)p->data;
      return true;
    }
  }
  return get_call_info_builtin(ci, extra, s, hash);
}

///////////////////////////////////////////////////////////////////////////////
}
