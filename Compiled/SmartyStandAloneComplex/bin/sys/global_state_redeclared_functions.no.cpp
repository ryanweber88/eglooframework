
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace global_state {
void get_redeclared_functions(Array &res) {
  DECLARE_GLOBAL_VARIABLES(g);
  Array redeclared_functions;
  redeclared_functions.set("cim_smarty_modifier_escape", (int64)g->cim_smarty_modifier_escape);
  redeclared_functions.set("fvf_1_df_lambda_1", (int64)g->fvf_1_df_lambda_1);
  redeclared_functions.set("fvf_1_df_lambda_2", (int64)g->fvf_1_df_lambda_2);
  redeclared_functions.set("fvf__smarty_regex_replace_check", (int64)g->fvf__smarty_regex_replace_check);
  redeclared_functions.set("fvf_mb_str_replace", (int64)g->fvf_mb_str_replace);
  redeclared_functions.set("fvf_smarty_block_php", (int64)g->fvf_smarty_block_php);
  redeclared_functions.set("fvf_smarty_block_textformat", (int64)g->fvf_smarty_block_textformat);
  redeclared_functions.set("fvf_smarty_function_counter", (int64)g->fvf_smarty_function_counter);
  redeclared_functions.set("fvf_smarty_function_cycle", (int64)g->fvf_smarty_function_cycle);
  redeclared_functions.set("fvf_smarty_function_escape_special_chars", (int64)g->fvf_smarty_function_escape_special_chars);
  redeclared_functions.set("fvf_smarty_function_fetch", (int64)g->fvf_smarty_function_fetch);
  redeclared_functions.set("fvf_smarty_function_html_checkboxes", (int64)g->fvf_smarty_function_html_checkboxes);
  redeclared_functions.set("fvf_smarty_function_html_checkboxes_output", (int64)g->fvf_smarty_function_html_checkboxes_output);
  redeclared_functions.set("fvf_smarty_function_html_image", (int64)g->fvf_smarty_function_html_image);
  redeclared_functions.set("fvf_smarty_function_html_options", (int64)g->fvf_smarty_function_html_options);
  redeclared_functions.set("fvf_smarty_function_html_options_optgroup", (int64)g->fvf_smarty_function_html_options_optgroup);
  redeclared_functions.set("fvf_smarty_function_html_options_optoutput", (int64)g->fvf_smarty_function_html_options_optoutput);
  redeclared_functions.set("fvf_smarty_function_html_radios", (int64)g->fvf_smarty_function_html_radios);
  redeclared_functions.set("fvf_smarty_function_html_radios_output", (int64)g->fvf_smarty_function_html_radios_output);
  redeclared_functions.set("fvf_smarty_function_html_select_date", (int64)g->fvf_smarty_function_html_select_date);
  redeclared_functions.set("fvf_smarty_function_html_select_time", (int64)g->fvf_smarty_function_html_select_time);
  redeclared_functions.set("fvf_smarty_function_html_table", (int64)g->fvf_smarty_function_html_table);
  redeclared_functions.set("fvf_smarty_function_html_table_cycle", (int64)g->fvf_smarty_function_html_table_cycle);
  redeclared_functions.set("fvf_smarty_function_mailto", (int64)g->fvf_smarty_function_mailto);
  redeclared_functions.set("fvf_smarty_function_math", (int64)g->fvf_smarty_function_math);
  redeclared_functions.set("fvf_smarty_make_timestamp", (int64)g->fvf_smarty_make_timestamp);
  redeclared_functions.set("fvf_smarty_mb_str_replace", (int64)g->fvf_smarty_mb_str_replace);
  redeclared_functions.set("fvf_smarty_modifier_capitalize", (int64)g->fvf_smarty_modifier_capitalize);
  redeclared_functions.set("fvf_smarty_modifier_date_format", (int64)g->fvf_smarty_modifier_date_format);
  redeclared_functions.set("fvf_smarty_modifier_debug_print_var", (int64)g->fvf_smarty_modifier_debug_print_var);
  redeclared_functions.set("fvf_smarty_modifier_escape", (int64)g->fvf_smarty_modifier_escape);
  redeclared_functions.set("fvf_smarty_modifier_regex_replace", (int64)g->fvf_smarty_modifier_regex_replace);
  redeclared_functions.set("fvf_smarty_modifier_replace", (int64)g->fvf_smarty_modifier_replace);
  redeclared_functions.set("fvf_smarty_modifier_spacify", (int64)g->fvf_smarty_modifier_spacify);
  redeclared_functions.set("fvf_smarty_modifier_truncate", (int64)g->fvf_smarty_modifier_truncate);
  redeclared_functions.set("fvf_smarty_modifiercompiler_cat", (int64)g->fvf_smarty_modifiercompiler_cat);
  redeclared_functions.set("fvf_smarty_modifiercompiler_count_characters", (int64)g->fvf_smarty_modifiercompiler_count_characters);
  redeclared_functions.set("fvf_smarty_modifiercompiler_count_paragraphs", (int64)g->fvf_smarty_modifiercompiler_count_paragraphs);
  redeclared_functions.set("fvf_smarty_modifiercompiler_count_sentences", (int64)g->fvf_smarty_modifiercompiler_count_sentences);
  redeclared_functions.set("fvf_smarty_modifiercompiler_count_words", (int64)g->fvf_smarty_modifiercompiler_count_words);
  redeclared_functions.set("fvf_smarty_modifiercompiler_default", (int64)g->fvf_smarty_modifiercompiler_default);
  redeclared_functions.set("fvf_smarty_modifiercompiler_indent", (int64)g->fvf_smarty_modifiercompiler_indent);
  redeclared_functions.set("fvf_smarty_modifiercompiler_lower", (int64)g->fvf_smarty_modifiercompiler_lower);
  redeclared_functions.set("fvf_smarty_modifiercompiler_noprint", (int64)g->fvf_smarty_modifiercompiler_noprint);
  redeclared_functions.set("fvf_smarty_modifiercompiler_string_format", (int64)g->fvf_smarty_modifiercompiler_string_format);
  redeclared_functions.set("fvf_smarty_modifiercompiler_strip", (int64)g->fvf_smarty_modifiercompiler_strip);
  redeclared_functions.set("fvf_smarty_modifiercompiler_strip_tags", (int64)g->fvf_smarty_modifiercompiler_strip_tags);
  redeclared_functions.set("fvf_smarty_modifiercompiler_upper", (int64)g->fvf_smarty_modifiercompiler_upper);
  redeclared_functions.set("fvf_smarty_modifiercompiler_wordwrap", (int64)g->fvf_smarty_modifiercompiler_wordwrap);
  redeclared_functions.set("fvf_smarty_outputfilter_trimwhitespace", (int64)g->fvf_smarty_outputfilter_trimwhitespace);
  redeclared_functions.set("fvf_smarty_outputfilter_trimwhitespace_replace", (int64)g->fvf_smarty_outputfilter_trimwhitespace_replace);
  redeclared_functions.set("fvf_smarty_variablefilter_htmlspecialchars", (int64)g->fvf_smarty_variablefilter_htmlspecialchars);
  redeclared_functions.set("fvf_smartyautoload", (int64)g->fvf_smartyautoload);
  res.set("redeclared_functions", redeclared_functions);
}

}

///////////////////////////////////////////////////////////////////////////////
}
