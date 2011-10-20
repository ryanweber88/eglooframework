
#include <runtime/base/hphp.h>
#include <runtime/base/fiber_reference_map.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

static hphp_const_char_map<int> s_gsmap;
class GlobalSymbolMapInitializer {
  public: GlobalSymbolMapInitializer() {
    static const char *names[] = {
      "gv_HTTP_RAW_POST_DATA",
      "gv__COOKIE",
      "gv__ENV",
      "gv__FILES",
      "gv__GET",
      "gv__POST",
      "gv__REQUEST",
      "gv__SERVER",
      "gv__SESSION",
      "gv__from",
      "gv__smarty_tpl",
      "gv__template",
      "gv__tpl_stack",
      "gv_argc",
      "gv_argv",
      "gv_content",
      "gv_http_response_header",
      "gv_parameters",
      "gv_registeredAutoLoadFunctions",
      "gv_smarty",
      "gv_tmp",
      "sv_Smarty_Internal_Configfilelexer___instance___instance",
      "sv_Smarty_Internal_Configfileparser___instance___instance",
      "sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array",
      "sv_Smarty_Internal_Template_____call___camel_func",
      "sv_Smarty_____call___camel_func",
      "sv_smarty_function_counter___counters",
      "sv_smarty_function_cycle___cycle_vars",
      "s_Smarty_Internal_Config___config_objects",
      "s_Smarty_Internal_Configfileparser___escapes_single",
      "s_Smarty_Internal_Configfileparser___yyExpectedTokens",
      "s_Smarty_Internal_Configfileparser___yyFallback",
      "s_Smarty_Internal_Configfileparser___yyReduceMap",
      "s_Smarty_Internal_Configfileparser___yyRuleInfo",
      "s_Smarty_Internal_Configfileparser___yyRuleName",
      "s_Smarty_Internal_Configfileparser___yyTraceFILE",
      "s_Smarty_Internal_Configfileparser___yyTracePrompt",
      "s_Smarty_Internal_Configfileparser___yy_action",
      "s_Smarty_Internal_Configfileparser___yy_default",
      "s_Smarty_Internal_Configfileparser___yy_lookahead",
      "s_Smarty_Internal_Configfileparser___yy_reduce_ofst",
      "s_Smarty_Internal_Configfileparser___yy_shift_ofst",
      "s_Smarty_Internal_Debug___template_data",
      "s_Smarty_Internal_TemplateCompilerBase____tag_objects",
      "s_Smarty_Internal_Templateparser___yyExpectedTokens",
      "s_Smarty_Internal_Templateparser___yyFallback",
      "s_Smarty_Internal_Templateparser___yyReduceMap",
      "s_Smarty_Internal_Templateparser___yyRuleInfo",
      "s_Smarty_Internal_Templateparser___yyRuleName",
      "s_Smarty_Internal_Templateparser___yyTraceFILE",
      "s_Smarty_Internal_Templateparser___yyTracePrompt",
      "s_Smarty_Internal_Templateparser___yy_action",
      "s_Smarty_Internal_Templateparser___yy_default",
      "s_Smarty_Internal_Templateparser___yy_lookahead",
      "s_Smarty_Internal_Templateparser___yy_reduce_ofst",
      "s_Smarty_Internal_Templateparser___yy_shift_ofst",
      "s_Smarty____smarty_vars",
      "s_Smarty___global_tpl_vars",
      "k_DS",
      "k_SID",
      "k_SMARTY_DIR",
      "k_SMARTY_PLUGINS_DIR",
      "k_SMARTY_RESOURCE_CHAR_SET",
      "k_SMARTY_RESOURCE_DATE_FORMAT",
      "k_SMARTY_SPL_AUTOLOAD",
      "k_SMARTY_SYSPLUGINS_DIR",
      "run_pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php",
      "run_pm_php$Smarty$libs$Smarty_class_php",
      "run_pm_php$Smarty$libs$Smarty_class_php_df_lambda",
      "run_pm_php$Smarty$libs$plugins$block_php_php",
      "run_pm_php$Smarty$libs$plugins$block_textformat_php",
      "run_pm_php$Smarty$libs$plugins$function_counter_php",
      "run_pm_php$Smarty$libs$plugins$function_cycle_php",
      "run_pm_php$Smarty$libs$plugins$function_fetch_php",
      "run_pm_php$Smarty$libs$plugins$function_html_checkboxes_php",
      "run_pm_php$Smarty$libs$plugins$function_html_image_php",
      "run_pm_php$Smarty$libs$plugins$function_html_options_php",
      "run_pm_php$Smarty$libs$plugins$function_html_radios_php",
      "run_pm_php$Smarty$libs$plugins$function_html_select_date_php",
      "run_pm_php$Smarty$libs$plugins$function_html_select_time_php",
      "run_pm_php$Smarty$libs$plugins$function_html_table_php",
      "run_pm_php$Smarty$libs$plugins$function_mailto_php",
      "run_pm_php$Smarty$libs$plugins$function_math_php",
      "run_pm_php$Smarty$libs$plugins$modifier_capitalize_php",
      "run_pm_php$Smarty$libs$plugins$modifier_date_format_php",
      "run_pm_php$Smarty$libs$plugins$modifier_debug_print_var_php",
      "run_pm_php$Smarty$libs$plugins$modifier_escape_php",
      "run_pm_php$Smarty$libs$plugins$modifier_regex_replace_php",
      "run_pm_php$Smarty$libs$plugins$modifier_replace_php",
      "run_pm_php$Smarty$libs$plugins$modifier_spacify_php",
      "run_pm_php$Smarty$libs$plugins$modifier_truncate_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_cat_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_default_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_indent_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_lower_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_upper_php",
      "run_pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php",
      "run_pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php",
      "run_pm_php$Smarty$libs$plugins$shared_escape_special_chars_php",
      "run_pm_php$Smarty$libs$plugins$shared_make_timestamp_php",
      "run_pm_php$Smarty$libs$plugins$shared_mb_str_replace_php",
      "run_pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_data_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_register_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php",
      "run_pm_php$Smarty$libs$sysplugins$smarty_security_php",
      "run_pm_php$index_php",
      "run_pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php",
      "run_pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php",
      "cim_smarty_modifier_escape",
      "fvf_1_df_lambda_1",
      "fvf_1_df_lambda_2",
      "fvf__smarty_regex_replace_check",
      "fvf_mb_str_replace",
      "fvf_smarty_block_php",
      "fvf_smarty_block_textformat",
      "fvf_smarty_function_counter",
      "fvf_smarty_function_cycle",
      "fvf_smarty_function_escape_special_chars",
      "fvf_smarty_function_fetch",
      "fvf_smarty_function_html_checkboxes",
      "fvf_smarty_function_html_checkboxes_output",
      "fvf_smarty_function_html_image",
      "fvf_smarty_function_html_options",
      "fvf_smarty_function_html_options_optgroup",
      "fvf_smarty_function_html_options_optoutput",
      "fvf_smarty_function_html_radios",
      "fvf_smarty_function_html_radios_output",
      "fvf_smarty_function_html_select_date",
      "fvf_smarty_function_html_select_time",
      "fvf_smarty_function_html_table",
      "fvf_smarty_function_html_table_cycle",
      "fvf_smarty_function_mailto",
      "fvf_smarty_function_math",
      "fvf_smarty_make_timestamp",
      "fvf_smarty_mb_str_replace",
      "fvf_smarty_modifier_capitalize",
      "fvf_smarty_modifier_date_format",
      "fvf_smarty_modifier_debug_print_var",
      "fvf_smarty_modifier_escape",
      "fvf_smarty_modifier_regex_replace",
      "fvf_smarty_modifier_replace",
      "fvf_smarty_modifier_spacify",
      "fvf_smarty_modifier_truncate",
      "fvf_smarty_modifiercompiler_cat",
      "fvf_smarty_modifiercompiler_count_characters",
      "fvf_smarty_modifiercompiler_count_paragraphs",
      "fvf_smarty_modifiercompiler_count_sentences",
      "fvf_smarty_modifiercompiler_count_words",
      "fvf_smarty_modifiercompiler_default",
      "fvf_smarty_modifiercompiler_indent",
      "fvf_smarty_modifiercompiler_lower",
      "fvf_smarty_modifiercompiler_noprint",
      "fvf_smarty_modifiercompiler_string_format",
      "fvf_smarty_modifiercompiler_strip",
      "fvf_smarty_modifiercompiler_strip_tags",
      "fvf_smarty_modifiercompiler_upper",
      "fvf_smarty_modifiercompiler_wordwrap",
      "fvf_smarty_outputfilter_trimwhitespace",
      "fvf_smarty_outputfilter_trimwhitespace_replace",
      "fvf_smarty_variablefilter_htmlspecialchars",
      "fvf_smartyautoload",
      "CDEC(_smarty_code)",
      "CDEC(_smarty_doublequoted)",
      "CDEC(_smarty_dq_content)",
      "CDEC(_smarty_linebreak)",
      "CDEC(_smarty_parsetree)",
      "CDEC(_smarty_tag)",
      "CDEC(_smarty_template_buffer)",
      "CDEC(_smarty_text)",
      "CDEC(smarty)",
      "CDEC(smarty_data)",
      "CDEC(smarty_internal_cacheresource_file)",
      "CDEC(smarty_internal_compile_append)",
      "CDEC(smarty_internal_compile_assign)",
      "CDEC(smarty_internal_compile_block)",
      "CDEC(smarty_internal_compile_blockclose)",
      "CDEC(smarty_internal_compile_break)",
      "CDEC(smarty_internal_compile_call)",
      "CDEC(smarty_internal_compile_capture)",
      "CDEC(smarty_internal_compile_captureclose)",
      "CDEC(smarty_internal_compile_config_load)",
      "CDEC(smarty_internal_compile_continue)",
      "CDEC(smarty_internal_compile_debug)",
      "CDEC(smarty_internal_compile_else)",
      "CDEC(smarty_internal_compile_elseif)",
      "CDEC(smarty_internal_compile_eval)",
      "CDEC(smarty_internal_compile_extends)",
      "CDEC(smarty_internal_compile_for)",
      "CDEC(smarty_internal_compile_forclose)",
      "CDEC(smarty_internal_compile_foreach)",
      "CDEC(smarty_internal_compile_foreachclose)",
      "CDEC(smarty_internal_compile_foreachelse)",
      "CDEC(smarty_internal_compile_forelse)",
      "CDEC(smarty_internal_compile_function)",
      "CDEC(smarty_internal_compile_functionclose)",
      "CDEC(smarty_internal_compile_if)",
      "CDEC(smarty_internal_compile_ifclose)",
      "CDEC(smarty_internal_compile_include)",
      "CDEC(smarty_internal_compile_include_php)",
      "CDEC(smarty_internal_compile_insert)",
      "CDEC(smarty_internal_compile_ldelim)",
      "CDEC(smarty_internal_compile_nocache)",
      "CDEC(smarty_internal_compile_nocacheclose)",
      "CDEC(smarty_internal_compile_private_block_plugin)",
      "CDEC(smarty_internal_compile_private_function_plugin)",
      "CDEC(smarty_internal_compile_private_modifier)",
      "CDEC(smarty_internal_compile_private_object_block_function)",
      "CDEC(smarty_internal_compile_private_object_function)",
      "CDEC(smarty_internal_compile_private_print_expression)",
      "CDEC(smarty_internal_compile_private_registered_block)",
      "CDEC(smarty_internal_compile_private_registered_function)",
      "CDEC(smarty_internal_compile_private_special_variable)",
      "CDEC(smarty_internal_compile_rdelim)",
      "CDEC(smarty_internal_compile_section)",
      "CDEC(smarty_internal_compile_sectionclose)",
      "CDEC(smarty_internal_compile_sectionelse)",
      "CDEC(smarty_internal_compile_while)",
      "CDEC(smarty_internal_compile_whileclose)",
      "CDEC(smarty_internal_compilebase)",
      "CDEC(smarty_internal_config)",
      "CDEC(smarty_internal_config_file_compiler)",
      "CDEC(smarty_internal_configfilelexer)",
      "CDEC(smarty_internal_configfileparser)",
      "CDEC(smarty_internal_data)",
      "CDEC(smarty_internal_debug)",
      "CDEC(smarty_internal_filter)",
      "CDEC(smarty_internal_filter_handler)",
      "CDEC(smarty_internal_function_call_handler)",
      "CDEC(smarty_internal_get_include_path)",
      "CDEC(smarty_internal_nocache_insert)",
      "CDEC(smarty_internal_register)",
      "CDEC(smarty_internal_resource_eval)",
      "CDEC(smarty_internal_resource_extends)",
      "CDEC(smarty_internal_resource_file)",
      "CDEC(smarty_internal_resource_php)",
      "CDEC(smarty_internal_resource_registered)",
      "CDEC(smarty_internal_resource_stream)",
      "CDEC(smarty_internal_resource_string)",
      "CDEC(smarty_internal_smartytemplatecompiler)",
      "CDEC(smarty_internal_template)",
      "CDEC(smarty_internal_templatecompilerbase)",
      "CDEC(smarty_internal_templatelexer)",
      "CDEC(smarty_internal_templateparser)",
      "CDEC(smarty_internal_utility)",
      "CDEC(smarty_internal_wrapper)",
      "CDEC(smarty_internal_write_file)",
      "CDEC(smarty_security)",
      "CDEC(smarty_variable)",
      "CDEC(smartycompilerexception)",
      "CDEC(smartyexception)",
      "CDEC(tp_yystackentry)",
      "CDEC(tp_yytoken)",
      "CDEC(tpc_yystackentry)",
      "CDEC(tpc_yytoken)",
      "CDEC(undefined_smarty_variable)",
      0
    };
    int index = 0;
    for (const char **p = names; *p; p++) {
      s_gsmap[*p] = index++;
    }
  }
};
static GlobalSymbolMapInitializer s_gsmap_initializer;

void fiber_marshal_global_state(GlobalVariables *g1, GlobalVariables *g2,
 FiberReferenceMap &refMap) {
  g1->fiberMarshal(g2, refMap);
  if (g2->run_pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php) g1->run_pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php = true;
  if (g2->run_pm_php$Smarty$libs$Smarty_class_php) g1->run_pm_php$Smarty$libs$Smarty_class_php = true;
  if (g2->run_pm_php$Smarty$libs$Smarty_class_php_df_lambda) g1->run_pm_php$Smarty$libs$Smarty_class_php_df_lambda = true;
  if (g2->run_pm_php$Smarty$libs$plugins$block_php_php) g1->run_pm_php$Smarty$libs$plugins$block_php_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$block_textformat_php) g1->run_pm_php$Smarty$libs$plugins$block_textformat_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_counter_php) g1->run_pm_php$Smarty$libs$plugins$function_counter_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_cycle_php) g1->run_pm_php$Smarty$libs$plugins$function_cycle_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_fetch_php) g1->run_pm_php$Smarty$libs$plugins$function_fetch_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_checkboxes_php) g1->run_pm_php$Smarty$libs$plugins$function_html_checkboxes_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_image_php) g1->run_pm_php$Smarty$libs$plugins$function_html_image_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_options_php) g1->run_pm_php$Smarty$libs$plugins$function_html_options_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_radios_php) g1->run_pm_php$Smarty$libs$plugins$function_html_radios_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_select_date_php) g1->run_pm_php$Smarty$libs$plugins$function_html_select_date_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_select_time_php) g1->run_pm_php$Smarty$libs$plugins$function_html_select_time_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_table_php) g1->run_pm_php$Smarty$libs$plugins$function_html_table_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_mailto_php) g1->run_pm_php$Smarty$libs$plugins$function_mailto_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_math_php) g1->run_pm_php$Smarty$libs$plugins$function_math_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_capitalize_php) g1->run_pm_php$Smarty$libs$plugins$modifier_capitalize_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_date_format_php) g1->run_pm_php$Smarty$libs$plugins$modifier_date_format_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_debug_print_var_php) g1->run_pm_php$Smarty$libs$plugins$modifier_debug_print_var_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_escape_php) g1->run_pm_php$Smarty$libs$plugins$modifier_escape_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_regex_replace_php) g1->run_pm_php$Smarty$libs$plugins$modifier_regex_replace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_replace_php) g1->run_pm_php$Smarty$libs$plugins$modifier_replace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_spacify_php) g1->run_pm_php$Smarty$libs$plugins$modifier_spacify_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_truncate_php) g1->run_pm_php$Smarty$libs$plugins$modifier_truncate_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_cat_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_cat_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_default_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_default_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_indent_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_indent_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_lower_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_lower_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_upper_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_upper_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php) g1->run_pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$shared_escape_special_chars_php) g1->run_pm_php$Smarty$libs$plugins$shared_escape_special_chars_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$shared_make_timestamp_php) g1->run_pm_php$Smarty$libs$plugins$shared_make_timestamp_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$shared_mb_str_replace_php) g1->run_pm_php$Smarty$libs$plugins$shared_mb_str_replace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php) g1->run_pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_data_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_data_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_register_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_register_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_security_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_security_php = true;
  if (g2->run_pm_php$index_php) g1->run_pm_php$index_php = true;
  if (g2->run_pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php) g1->run_pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php = true;
  if (g2->run_pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php) g1->run_pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php = true;
  if (g2->cim_smarty_modifier_escape) g1->cim_smarty_modifier_escape = g2->cim_smarty_modifier_escape;
  if (g2->fvf_1_df_lambda_1) g1->fvf_1_df_lambda_1 = g2->fvf_1_df_lambda_1;
  if (g2->fvf_1_df_lambda_2) g1->fvf_1_df_lambda_2 = g2->fvf_1_df_lambda_2;
  if (g2->fvf__smarty_regex_replace_check) g1->fvf__smarty_regex_replace_check = g2->fvf__smarty_regex_replace_check;
  if (g2->fvf_mb_str_replace) g1->fvf_mb_str_replace = g2->fvf_mb_str_replace;
  if (g2->fvf_smarty_block_php) g1->fvf_smarty_block_php = g2->fvf_smarty_block_php;
  if (g2->fvf_smarty_block_textformat) g1->fvf_smarty_block_textformat = g2->fvf_smarty_block_textformat;
  if (g2->fvf_smarty_function_counter) g1->fvf_smarty_function_counter = g2->fvf_smarty_function_counter;
  if (g2->fvf_smarty_function_cycle) g1->fvf_smarty_function_cycle = g2->fvf_smarty_function_cycle;
  if (g2->fvf_smarty_function_escape_special_chars) g1->fvf_smarty_function_escape_special_chars = g2->fvf_smarty_function_escape_special_chars;
  if (g2->fvf_smarty_function_fetch) g1->fvf_smarty_function_fetch = g2->fvf_smarty_function_fetch;
  if (g2->fvf_smarty_function_html_checkboxes) g1->fvf_smarty_function_html_checkboxes = g2->fvf_smarty_function_html_checkboxes;
  if (g2->fvf_smarty_function_html_checkboxes_output) g1->fvf_smarty_function_html_checkboxes_output = g2->fvf_smarty_function_html_checkboxes_output;
  if (g2->fvf_smarty_function_html_image) g1->fvf_smarty_function_html_image = g2->fvf_smarty_function_html_image;
  if (g2->fvf_smarty_function_html_options) g1->fvf_smarty_function_html_options = g2->fvf_smarty_function_html_options;
  if (g2->fvf_smarty_function_html_options_optgroup) g1->fvf_smarty_function_html_options_optgroup = g2->fvf_smarty_function_html_options_optgroup;
  if (g2->fvf_smarty_function_html_options_optoutput) g1->fvf_smarty_function_html_options_optoutput = g2->fvf_smarty_function_html_options_optoutput;
  if (g2->fvf_smarty_function_html_radios) g1->fvf_smarty_function_html_radios = g2->fvf_smarty_function_html_radios;
  if (g2->fvf_smarty_function_html_radios_output) g1->fvf_smarty_function_html_radios_output = g2->fvf_smarty_function_html_radios_output;
  if (g2->fvf_smarty_function_html_select_date) g1->fvf_smarty_function_html_select_date = g2->fvf_smarty_function_html_select_date;
  if (g2->fvf_smarty_function_html_select_time) g1->fvf_smarty_function_html_select_time = g2->fvf_smarty_function_html_select_time;
  if (g2->fvf_smarty_function_html_table) g1->fvf_smarty_function_html_table = g2->fvf_smarty_function_html_table;
  if (g2->fvf_smarty_function_html_table_cycle) g1->fvf_smarty_function_html_table_cycle = g2->fvf_smarty_function_html_table_cycle;
  if (g2->fvf_smarty_function_mailto) g1->fvf_smarty_function_mailto = g2->fvf_smarty_function_mailto;
  if (g2->fvf_smarty_function_math) g1->fvf_smarty_function_math = g2->fvf_smarty_function_math;
  if (g2->fvf_smarty_make_timestamp) g1->fvf_smarty_make_timestamp = g2->fvf_smarty_make_timestamp;
  if (g2->fvf_smarty_mb_str_replace) g1->fvf_smarty_mb_str_replace = g2->fvf_smarty_mb_str_replace;
  if (g2->fvf_smarty_modifier_capitalize) g1->fvf_smarty_modifier_capitalize = g2->fvf_smarty_modifier_capitalize;
  if (g2->fvf_smarty_modifier_date_format) g1->fvf_smarty_modifier_date_format = g2->fvf_smarty_modifier_date_format;
  if (g2->fvf_smarty_modifier_debug_print_var) g1->fvf_smarty_modifier_debug_print_var = g2->fvf_smarty_modifier_debug_print_var;
  if (g2->fvf_smarty_modifier_escape) g1->fvf_smarty_modifier_escape = g2->fvf_smarty_modifier_escape;
  if (g2->fvf_smarty_modifier_regex_replace) g1->fvf_smarty_modifier_regex_replace = g2->fvf_smarty_modifier_regex_replace;
  if (g2->fvf_smarty_modifier_replace) g1->fvf_smarty_modifier_replace = g2->fvf_smarty_modifier_replace;
  if (g2->fvf_smarty_modifier_spacify) g1->fvf_smarty_modifier_spacify = g2->fvf_smarty_modifier_spacify;
  if (g2->fvf_smarty_modifier_truncate) g1->fvf_smarty_modifier_truncate = g2->fvf_smarty_modifier_truncate;
  if (g2->fvf_smarty_modifiercompiler_cat) g1->fvf_smarty_modifiercompiler_cat = g2->fvf_smarty_modifiercompiler_cat;
  if (g2->fvf_smarty_modifiercompiler_count_characters) g1->fvf_smarty_modifiercompiler_count_characters = g2->fvf_smarty_modifiercompiler_count_characters;
  if (g2->fvf_smarty_modifiercompiler_count_paragraphs) g1->fvf_smarty_modifiercompiler_count_paragraphs = g2->fvf_smarty_modifiercompiler_count_paragraphs;
  if (g2->fvf_smarty_modifiercompiler_count_sentences) g1->fvf_smarty_modifiercompiler_count_sentences = g2->fvf_smarty_modifiercompiler_count_sentences;
  if (g2->fvf_smarty_modifiercompiler_count_words) g1->fvf_smarty_modifiercompiler_count_words = g2->fvf_smarty_modifiercompiler_count_words;
  if (g2->fvf_smarty_modifiercompiler_default) g1->fvf_smarty_modifiercompiler_default = g2->fvf_smarty_modifiercompiler_default;
  if (g2->fvf_smarty_modifiercompiler_indent) g1->fvf_smarty_modifiercompiler_indent = g2->fvf_smarty_modifiercompiler_indent;
  if (g2->fvf_smarty_modifiercompiler_lower) g1->fvf_smarty_modifiercompiler_lower = g2->fvf_smarty_modifiercompiler_lower;
  if (g2->fvf_smarty_modifiercompiler_noprint) g1->fvf_smarty_modifiercompiler_noprint = g2->fvf_smarty_modifiercompiler_noprint;
  if (g2->fvf_smarty_modifiercompiler_string_format) g1->fvf_smarty_modifiercompiler_string_format = g2->fvf_smarty_modifiercompiler_string_format;
  if (g2->fvf_smarty_modifiercompiler_strip) g1->fvf_smarty_modifiercompiler_strip = g2->fvf_smarty_modifiercompiler_strip;
  if (g2->fvf_smarty_modifiercompiler_strip_tags) g1->fvf_smarty_modifiercompiler_strip_tags = g2->fvf_smarty_modifiercompiler_strip_tags;
  if (g2->fvf_smarty_modifiercompiler_upper) g1->fvf_smarty_modifiercompiler_upper = g2->fvf_smarty_modifiercompiler_upper;
  if (g2->fvf_smarty_modifiercompiler_wordwrap) g1->fvf_smarty_modifiercompiler_wordwrap = g2->fvf_smarty_modifiercompiler_wordwrap;
  if (g2->fvf_smarty_outputfilter_trimwhitespace) g1->fvf_smarty_outputfilter_trimwhitespace = g2->fvf_smarty_outputfilter_trimwhitespace;
  if (g2->fvf_smarty_outputfilter_trimwhitespace_replace) g1->fvf_smarty_outputfilter_trimwhitespace_replace = g2->fvf_smarty_outputfilter_trimwhitespace_replace;
  if (g2->fvf_smarty_variablefilter_htmlspecialchars) g1->fvf_smarty_variablefilter_htmlspecialchars = g2->fvf_smarty_variablefilter_htmlspecialchars;
  if (g2->fvf_smartyautoload) g1->fvf_smartyautoload = g2->fvf_smartyautoload;
  if (g2->CDEC(_smarty_code)) g1->CDEC(_smarty_code) = true;
  if (g2->CDEC(_smarty_doublequoted)) g1->CDEC(_smarty_doublequoted) = true;
  if (g2->CDEC(_smarty_dq_content)) g1->CDEC(_smarty_dq_content) = true;
  if (g2->CDEC(_smarty_linebreak)) g1->CDEC(_smarty_linebreak) = true;
  if (g2->CDEC(_smarty_parsetree)) g1->CDEC(_smarty_parsetree) = true;
  if (g2->CDEC(_smarty_tag)) g1->CDEC(_smarty_tag) = true;
  if (g2->CDEC(_smarty_template_buffer)) g1->CDEC(_smarty_template_buffer) = true;
  if (g2->CDEC(_smarty_text)) g1->CDEC(_smarty_text) = true;
  if (g2->CDEC(smarty)) g1->CDEC(smarty) = true;
  if (g2->CDEC(smarty_data)) g1->CDEC(smarty_data) = true;
  if (g2->CDEC(smarty_internal_cacheresource_file)) g1->CDEC(smarty_internal_cacheresource_file) = true;
  if (g2->CDEC(smarty_internal_compile_append)) g1->CDEC(smarty_internal_compile_append) = true;
  if (g2->CDEC(smarty_internal_compile_assign)) g1->CDEC(smarty_internal_compile_assign) = true;
  if (g2->CDEC(smarty_internal_compile_block)) g1->CDEC(smarty_internal_compile_block) = true;
  if (g2->CDEC(smarty_internal_compile_blockclose)) g1->CDEC(smarty_internal_compile_blockclose) = true;
  if (g2->CDEC(smarty_internal_compile_break)) g1->CDEC(smarty_internal_compile_break) = true;
  if (g2->CDEC(smarty_internal_compile_call)) g1->CDEC(smarty_internal_compile_call) = true;
  if (g2->CDEC(smarty_internal_compile_capture)) g1->CDEC(smarty_internal_compile_capture) = true;
  if (g2->CDEC(smarty_internal_compile_captureclose)) g1->CDEC(smarty_internal_compile_captureclose) = true;
  if (g2->CDEC(smarty_internal_compile_config_load)) g1->CDEC(smarty_internal_compile_config_load) = true;
  if (g2->CDEC(smarty_internal_compile_continue)) g1->CDEC(smarty_internal_compile_continue) = true;
  if (g2->CDEC(smarty_internal_compile_debug)) g1->CDEC(smarty_internal_compile_debug) = true;
  if (g2->CDEC(smarty_internal_compile_else)) g1->CDEC(smarty_internal_compile_else) = true;
  if (g2->CDEC(smarty_internal_compile_elseif)) g1->CDEC(smarty_internal_compile_elseif) = true;
  if (g2->CDEC(smarty_internal_compile_eval)) g1->CDEC(smarty_internal_compile_eval) = true;
  if (g2->CDEC(smarty_internal_compile_extends)) g1->CDEC(smarty_internal_compile_extends) = true;
  if (g2->CDEC(smarty_internal_compile_for)) g1->CDEC(smarty_internal_compile_for) = true;
  if (g2->CDEC(smarty_internal_compile_forclose)) g1->CDEC(smarty_internal_compile_forclose) = true;
  if (g2->CDEC(smarty_internal_compile_foreach)) g1->CDEC(smarty_internal_compile_foreach) = true;
  if (g2->CDEC(smarty_internal_compile_foreachclose)) g1->CDEC(smarty_internal_compile_foreachclose) = true;
  if (g2->CDEC(smarty_internal_compile_foreachelse)) g1->CDEC(smarty_internal_compile_foreachelse) = true;
  if (g2->CDEC(smarty_internal_compile_forelse)) g1->CDEC(smarty_internal_compile_forelse) = true;
  if (g2->CDEC(smarty_internal_compile_function)) g1->CDEC(smarty_internal_compile_function) = true;
  if (g2->CDEC(smarty_internal_compile_functionclose)) g1->CDEC(smarty_internal_compile_functionclose) = true;
  if (g2->CDEC(smarty_internal_compile_if)) g1->CDEC(smarty_internal_compile_if) = true;
  if (g2->CDEC(smarty_internal_compile_ifclose)) g1->CDEC(smarty_internal_compile_ifclose) = true;
  if (g2->CDEC(smarty_internal_compile_include)) g1->CDEC(smarty_internal_compile_include) = true;
  if (g2->CDEC(smarty_internal_compile_include_php)) g1->CDEC(smarty_internal_compile_include_php) = true;
  if (g2->CDEC(smarty_internal_compile_insert)) g1->CDEC(smarty_internal_compile_insert) = true;
  if (g2->CDEC(smarty_internal_compile_ldelim)) g1->CDEC(smarty_internal_compile_ldelim) = true;
  if (g2->CDEC(smarty_internal_compile_nocache)) g1->CDEC(smarty_internal_compile_nocache) = true;
  if (g2->CDEC(smarty_internal_compile_nocacheclose)) g1->CDEC(smarty_internal_compile_nocacheclose) = true;
  if (g2->CDEC(smarty_internal_compile_private_block_plugin)) g1->CDEC(smarty_internal_compile_private_block_plugin) = true;
  if (g2->CDEC(smarty_internal_compile_private_function_plugin)) g1->CDEC(smarty_internal_compile_private_function_plugin) = true;
  if (g2->CDEC(smarty_internal_compile_private_modifier)) g1->CDEC(smarty_internal_compile_private_modifier) = true;
  if (g2->CDEC(smarty_internal_compile_private_object_block_function)) g1->CDEC(smarty_internal_compile_private_object_block_function) = true;
  if (g2->CDEC(smarty_internal_compile_private_object_function)) g1->CDEC(smarty_internal_compile_private_object_function) = true;
  if (g2->CDEC(smarty_internal_compile_private_print_expression)) g1->CDEC(smarty_internal_compile_private_print_expression) = true;
  if (g2->CDEC(smarty_internal_compile_private_registered_block)) g1->CDEC(smarty_internal_compile_private_registered_block) = true;
  if (g2->CDEC(smarty_internal_compile_private_registered_function)) g1->CDEC(smarty_internal_compile_private_registered_function) = true;
  if (g2->CDEC(smarty_internal_compile_private_special_variable)) g1->CDEC(smarty_internal_compile_private_special_variable) = true;
  if (g2->CDEC(smarty_internal_compile_rdelim)) g1->CDEC(smarty_internal_compile_rdelim) = true;
  if (g2->CDEC(smarty_internal_compile_section)) g1->CDEC(smarty_internal_compile_section) = true;
  if (g2->CDEC(smarty_internal_compile_sectionclose)) g1->CDEC(smarty_internal_compile_sectionclose) = true;
  if (g2->CDEC(smarty_internal_compile_sectionelse)) g1->CDEC(smarty_internal_compile_sectionelse) = true;
  if (g2->CDEC(smarty_internal_compile_while)) g1->CDEC(smarty_internal_compile_while) = true;
  if (g2->CDEC(smarty_internal_compile_whileclose)) g1->CDEC(smarty_internal_compile_whileclose) = true;
  if (g2->CDEC(smarty_internal_compilebase)) g1->CDEC(smarty_internal_compilebase) = true;
  if (g2->CDEC(smarty_internal_config)) g1->CDEC(smarty_internal_config) = true;
  if (g2->CDEC(smarty_internal_config_file_compiler)) g1->CDEC(smarty_internal_config_file_compiler) = true;
  if (g2->CDEC(smarty_internal_configfilelexer)) g1->CDEC(smarty_internal_configfilelexer) = true;
  if (g2->CDEC(smarty_internal_configfileparser)) g1->CDEC(smarty_internal_configfileparser) = true;
  if (g2->CDEC(smarty_internal_data)) g1->CDEC(smarty_internal_data) = true;
  if (g2->CDEC(smarty_internal_debug)) g1->CDEC(smarty_internal_debug) = true;
  if (g2->CDEC(smarty_internal_filter)) g1->CDEC(smarty_internal_filter) = true;
  if (g2->CDEC(smarty_internal_filter_handler)) g1->CDEC(smarty_internal_filter_handler) = true;
  if (g2->CDEC(smarty_internal_function_call_handler)) g1->CDEC(smarty_internal_function_call_handler) = true;
  if (g2->CDEC(smarty_internal_get_include_path)) g1->CDEC(smarty_internal_get_include_path) = true;
  if (g2->CDEC(smarty_internal_nocache_insert)) g1->CDEC(smarty_internal_nocache_insert) = true;
  if (g2->CDEC(smarty_internal_register)) g1->CDEC(smarty_internal_register) = true;
  if (g2->CDEC(smarty_internal_resource_eval)) g1->CDEC(smarty_internal_resource_eval) = true;
  if (g2->CDEC(smarty_internal_resource_extends)) g1->CDEC(smarty_internal_resource_extends) = true;
  if (g2->CDEC(smarty_internal_resource_file)) g1->CDEC(smarty_internal_resource_file) = true;
  if (g2->CDEC(smarty_internal_resource_php)) g1->CDEC(smarty_internal_resource_php) = true;
  if (g2->CDEC(smarty_internal_resource_registered)) g1->CDEC(smarty_internal_resource_registered) = true;
  if (g2->CDEC(smarty_internal_resource_stream)) g1->CDEC(smarty_internal_resource_stream) = true;
  if (g2->CDEC(smarty_internal_resource_string)) g1->CDEC(smarty_internal_resource_string) = true;
  if (g2->CDEC(smarty_internal_smartytemplatecompiler)) g1->CDEC(smarty_internal_smartytemplatecompiler) = true;
  if (g2->CDEC(smarty_internal_template)) g1->CDEC(smarty_internal_template) = true;
  if (g2->CDEC(smarty_internal_templatecompilerbase)) g1->CDEC(smarty_internal_templatecompilerbase) = true;
  if (g2->CDEC(smarty_internal_templatelexer)) g1->CDEC(smarty_internal_templatelexer) = true;
  if (g2->CDEC(smarty_internal_templateparser)) g1->CDEC(smarty_internal_templateparser) = true;
  if (g2->CDEC(smarty_internal_utility)) g1->CDEC(smarty_internal_utility) = true;
  if (g2->CDEC(smarty_internal_wrapper)) g1->CDEC(smarty_internal_wrapper) = true;
  if (g2->CDEC(smarty_internal_write_file)) g1->CDEC(smarty_internal_write_file) = true;
  if (g2->CDEC(smarty_security)) g1->CDEC(smarty_security) = true;
  if (g2->CDEC(smarty_variable)) g1->CDEC(smarty_variable) = true;
  if (g2->CDEC(smartycompilerexception)) g1->CDEC(smartycompilerexception) = true;
  if (g2->CDEC(smartyexception)) g1->CDEC(smartyexception) = true;
  if (g2->CDEC(tp_yystackentry)) g1->CDEC(tp_yystackentry) = true;
  if (g2->CDEC(tp_yytoken)) g1->CDEC(tp_yytoken) = true;
  if (g2->CDEC(tpc_yystackentry)) g1->CDEC(tpc_yystackentry) = true;
  if (g2->CDEC(tpc_yytoken)) g1->CDEC(tpc_yytoken) = true;
  if (g2->CDEC(undefined_smarty_variable)) g1->CDEC(undefined_smarty_variable) = true;
  refMap.marshal(g1->GV(HTTP_RAW_POST_DATA), g2->GV(HTTP_RAW_POST_DATA));
  refMap.marshal(g1->GV(_COOKIE), g2->GV(_COOKIE));
  refMap.marshal(g1->GV(_ENV), g2->GV(_ENV));
  refMap.marshal(g1->GV(_FILES), g2->GV(_FILES));
  refMap.marshal(g1->GV(_GET), g2->GV(_GET));
  refMap.marshal(g1->GV(_POST), g2->GV(_POST));
  refMap.marshal(g1->GV(_REQUEST), g2->GV(_REQUEST));
  refMap.marshal(g1->GV(_SERVER), g2->GV(_SERVER));
  refMap.marshal(g1->GV(_SESSION), g2->GV(_SESSION));
  refMap.marshal(g1->GV(_from), g2->GV(_from));
  refMap.marshal(g1->GV(_smarty_tpl), g2->GV(_smarty_tpl));
  refMap.marshal(g1->GV(_template), g2->GV(_template));
  refMap.marshal(g1->GV(_tpl_stack), g2->GV(_tpl_stack));
  refMap.marshal(g1->GV(argc), g2->GV(argc));
  refMap.marshal(g1->GV(argv), g2->GV(argv));
  refMap.marshal(g1->GV(content), g2->GV(content));
  refMap.marshal(g1->GV(http_response_header), g2->GV(http_response_header));
  refMap.marshal(g1->GV(parameters), g2->GV(parameters));
  refMap.marshal(g1->GV(registeredAutoLoadFunctions), g2->GV(registeredAutoLoadFunctions));
  refMap.marshal(g1->GV(smarty), g2->GV(smarty));
  refMap.marshal(g1->GV(tmp), g2->GV(tmp));
  if (toBoolean(g2->inited_sv_Smarty_Internal_Configfilelexer___instance___instance)) {refMap.marshal(g1->inited_sv_Smarty_Internal_Configfilelexer___instance___instance, g2->inited_sv_Smarty_Internal_Configfilelexer___instance___instance);
    refMap.marshal(g1->sv_Smarty_Internal_Configfilelexer___instance___instance, g2->sv_Smarty_Internal_Configfilelexer___instance___instance);
  }
  if (toBoolean(g2->inited_sv_Smarty_Internal_Configfileparser___instance___instance)) {refMap.marshal(g1->inited_sv_Smarty_Internal_Configfileparser___instance___instance, g2->inited_sv_Smarty_Internal_Configfileparser___instance___instance);
    refMap.marshal(g1->sv_Smarty_Internal_Configfileparser___instance___instance, g2->sv_Smarty_Internal_Configfileparser___instance___instance);
  }
  if (toBoolean(g2->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array)) {refMap.marshal(g1->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array, g2->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array);
    refMap.marshal(g1->sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array, g2->sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array);
  }
  if (toBoolean(g2->inited_sv_Smarty_Internal_Template_____call___camel_func)) {refMap.marshal(g1->inited_sv_Smarty_Internal_Template_____call___camel_func, g2->inited_sv_Smarty_Internal_Template_____call___camel_func);
    refMap.marshal(g1->sv_Smarty_Internal_Template_____call___camel_func, g2->sv_Smarty_Internal_Template_____call___camel_func);
  }
  if (toBoolean(g2->inited_sv_Smarty_____call___camel_func)) {refMap.marshal(g1->inited_sv_Smarty_____call___camel_func, g2->inited_sv_Smarty_____call___camel_func);
    refMap.marshal(g1->sv_Smarty_____call___camel_func, g2->sv_Smarty_____call___camel_func);
  }
  if (toBoolean(g2->inited_sv_smarty_function_counter___counters)) {refMap.marshal(g1->inited_sv_smarty_function_counter___counters, g2->inited_sv_smarty_function_counter___counters);
    refMap.marshal(g1->sv_smarty_function_counter___counters, g2->sv_smarty_function_counter___counters);
  }
  if (toBoolean(g2->inited_sv_smarty_function_cycle___cycle_vars)) {refMap.marshal(g1->inited_sv_smarty_function_cycle___cycle_vars, g2->inited_sv_smarty_function_cycle___cycle_vars);
    refMap.marshal(g1->sv_smarty_function_cycle___cycle_vars, g2->sv_smarty_function_cycle___cycle_vars);
  }
  refMap.marshal(g1->s_Smarty_Internal_Config___config_objects, g2->s_Smarty_Internal_Config___config_objects);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___escapes_single, g2->s_Smarty_Internal_Configfileparser___escapes_single);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yyExpectedTokens, g2->s_Smarty_Internal_Configfileparser___yyExpectedTokens);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yyFallback, g2->s_Smarty_Internal_Configfileparser___yyFallback);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yyReduceMap, g2->s_Smarty_Internal_Configfileparser___yyReduceMap);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yyRuleInfo, g2->s_Smarty_Internal_Configfileparser___yyRuleInfo);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yyRuleName, g2->s_Smarty_Internal_Configfileparser___yyRuleName);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yyTraceFILE, g2->s_Smarty_Internal_Configfileparser___yyTraceFILE);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yyTracePrompt, g2->s_Smarty_Internal_Configfileparser___yyTracePrompt);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yy_action, g2->s_Smarty_Internal_Configfileparser___yy_action);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yy_default, g2->s_Smarty_Internal_Configfileparser___yy_default);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yy_lookahead, g2->s_Smarty_Internal_Configfileparser___yy_lookahead);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yy_reduce_ofst, g2->s_Smarty_Internal_Configfileparser___yy_reduce_ofst);
  refMap.marshal(g1->s_Smarty_Internal_Configfileparser___yy_shift_ofst, g2->s_Smarty_Internal_Configfileparser___yy_shift_ofst);
  refMap.marshal(g1->s_Smarty_Internal_Debug___template_data, g2->s_Smarty_Internal_Debug___template_data);
  refMap.marshal(g1->s_Smarty_Internal_TemplateCompilerBase____tag_objects, g2->s_Smarty_Internal_TemplateCompilerBase____tag_objects);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yyExpectedTokens, g2->s_Smarty_Internal_Templateparser___yyExpectedTokens);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yyFallback, g2->s_Smarty_Internal_Templateparser___yyFallback);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yyReduceMap, g2->s_Smarty_Internal_Templateparser___yyReduceMap);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yyRuleInfo, g2->s_Smarty_Internal_Templateparser___yyRuleInfo);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yyRuleName, g2->s_Smarty_Internal_Templateparser___yyRuleName);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yyTraceFILE, g2->s_Smarty_Internal_Templateparser___yyTraceFILE);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yyTracePrompt, g2->s_Smarty_Internal_Templateparser___yyTracePrompt);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yy_action, g2->s_Smarty_Internal_Templateparser___yy_action);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yy_default, g2->s_Smarty_Internal_Templateparser___yy_default);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yy_lookahead, g2->s_Smarty_Internal_Templateparser___yy_lookahead);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yy_reduce_ofst, g2->s_Smarty_Internal_Templateparser___yy_reduce_ofst);
  refMap.marshal(g1->s_Smarty_Internal_Templateparser___yy_shift_ofst, g2->s_Smarty_Internal_Templateparser___yy_shift_ofst);
  refMap.marshal(g1->s_Smarty____smarty_vars, g2->s_Smarty____smarty_vars);
  refMap.marshal(g1->s_Smarty___global_tpl_vars, g2->s_Smarty___global_tpl_vars);
  refMap.marshal(g1->k_DS, g2->k_DS);
  refMap.marshal(g1->k_SID, g2->k_SID);
  refMap.marshal(g1->k_SMARTY_DIR, g2->k_SMARTY_DIR);
  refMap.marshal(g1->k_SMARTY_PLUGINS_DIR, g2->k_SMARTY_PLUGINS_DIR);
  refMap.marshal(g1->k_SMARTY_RESOURCE_CHAR_SET, g2->k_SMARTY_RESOURCE_CHAR_SET);
  refMap.marshal(g1->k_SMARTY_RESOURCE_DATE_FORMAT, g2->k_SMARTY_RESOURCE_DATE_FORMAT);
  refMap.marshal(g1->k_SMARTY_SPL_AUTOLOAD, g2->k_SMARTY_SPL_AUTOLOAD);
  refMap.marshal(g1->k_SMARTY_SYSPLUGINS_DIR, g2->k_SMARTY_SYSPLUGINS_DIR);
  refMap.marshal((Array&)(*g1), (Array&)(*g2));
}
void fiber_unmarshal_global_state(GlobalVariables *g1, GlobalVariables *g2,
 FiberReferenceMap &refMap, char default_strategy,
 const vector<pair<string, char> > &resolver) {
  g1->fiberUnmarshal(g2, refMap);
  hphp_string_map<char> strategies;
  char r[324]; memset(r, default_strategy, sizeof(r));
  for (unsigned int i = 0; i < resolver.size(); i++) {
    hphp_const_char_map<int>::const_iterator it =
      s_gsmap.find(resolver[i].first.c_str());
    if (it != s_gsmap.end()) r[it->second] = resolver[i].second;
    else strategies[resolver[i].first] = resolver[i].second;
  }

  if (g2->run_pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php) g1->run_pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php = true;
  if (g2->run_pm_php$Smarty$libs$Smarty_class_php) g1->run_pm_php$Smarty$libs$Smarty_class_php = true;
  if (g2->run_pm_php$Smarty$libs$Smarty_class_php_df_lambda) g1->run_pm_php$Smarty$libs$Smarty_class_php_df_lambda = true;
  if (g2->run_pm_php$Smarty$libs$plugins$block_php_php) g1->run_pm_php$Smarty$libs$plugins$block_php_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$block_textformat_php) g1->run_pm_php$Smarty$libs$plugins$block_textformat_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_counter_php) g1->run_pm_php$Smarty$libs$plugins$function_counter_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_cycle_php) g1->run_pm_php$Smarty$libs$plugins$function_cycle_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_fetch_php) g1->run_pm_php$Smarty$libs$plugins$function_fetch_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_checkboxes_php) g1->run_pm_php$Smarty$libs$plugins$function_html_checkboxes_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_image_php) g1->run_pm_php$Smarty$libs$plugins$function_html_image_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_options_php) g1->run_pm_php$Smarty$libs$plugins$function_html_options_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_radios_php) g1->run_pm_php$Smarty$libs$plugins$function_html_radios_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_select_date_php) g1->run_pm_php$Smarty$libs$plugins$function_html_select_date_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_select_time_php) g1->run_pm_php$Smarty$libs$plugins$function_html_select_time_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_html_table_php) g1->run_pm_php$Smarty$libs$plugins$function_html_table_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_mailto_php) g1->run_pm_php$Smarty$libs$plugins$function_mailto_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$function_math_php) g1->run_pm_php$Smarty$libs$plugins$function_math_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_capitalize_php) g1->run_pm_php$Smarty$libs$plugins$modifier_capitalize_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_date_format_php) g1->run_pm_php$Smarty$libs$plugins$modifier_date_format_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_debug_print_var_php) g1->run_pm_php$Smarty$libs$plugins$modifier_debug_print_var_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_escape_php) g1->run_pm_php$Smarty$libs$plugins$modifier_escape_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_regex_replace_php) g1->run_pm_php$Smarty$libs$plugins$modifier_regex_replace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_replace_php) g1->run_pm_php$Smarty$libs$plugins$modifier_replace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_spacify_php) g1->run_pm_php$Smarty$libs$plugins$modifier_spacify_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifier_truncate_php) g1->run_pm_php$Smarty$libs$plugins$modifier_truncate_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_cat_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_cat_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_default_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_default_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_indent_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_indent_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_lower_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_lower_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_upper_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_upper_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php) g1->run_pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php) g1->run_pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$shared_escape_special_chars_php) g1->run_pm_php$Smarty$libs$plugins$shared_escape_special_chars_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$shared_make_timestamp_php) g1->run_pm_php$Smarty$libs$plugins$shared_make_timestamp_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$shared_mb_str_replace_php) g1->run_pm_php$Smarty$libs$plugins$shared_mb_str_replace_php = true;
  if (g2->run_pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php) g1->run_pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_data_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_data_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_register_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_register_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php = true;
  if (g2->run_pm_php$Smarty$libs$sysplugins$smarty_security_php) g1->run_pm_php$Smarty$libs$sysplugins$smarty_security_php = true;
  if (g2->run_pm_php$index_php) g1->run_pm_php$index_php = true;
  if (g2->run_pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php) g1->run_pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php = true;
  if (g2->run_pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php) g1->run_pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php = true;
  if (g2->cim_smarty_modifier_escape) g1->cim_smarty_modifier_escape = g2->cim_smarty_modifier_escape;
  if (g2->fvf_1_df_lambda_1) g1->fvf_1_df_lambda_1 = g2->fvf_1_df_lambda_1;
  if (g2->fvf_1_df_lambda_2) g1->fvf_1_df_lambda_2 = g2->fvf_1_df_lambda_2;
  if (g2->fvf__smarty_regex_replace_check) g1->fvf__smarty_regex_replace_check = g2->fvf__smarty_regex_replace_check;
  if (g2->fvf_mb_str_replace) g1->fvf_mb_str_replace = g2->fvf_mb_str_replace;
  if (g2->fvf_smarty_block_php) g1->fvf_smarty_block_php = g2->fvf_smarty_block_php;
  if (g2->fvf_smarty_block_textformat) g1->fvf_smarty_block_textformat = g2->fvf_smarty_block_textformat;
  if (g2->fvf_smarty_function_counter) g1->fvf_smarty_function_counter = g2->fvf_smarty_function_counter;
  if (g2->fvf_smarty_function_cycle) g1->fvf_smarty_function_cycle = g2->fvf_smarty_function_cycle;
  if (g2->fvf_smarty_function_escape_special_chars) g1->fvf_smarty_function_escape_special_chars = g2->fvf_smarty_function_escape_special_chars;
  if (g2->fvf_smarty_function_fetch) g1->fvf_smarty_function_fetch = g2->fvf_smarty_function_fetch;
  if (g2->fvf_smarty_function_html_checkboxes) g1->fvf_smarty_function_html_checkboxes = g2->fvf_smarty_function_html_checkboxes;
  if (g2->fvf_smarty_function_html_checkboxes_output) g1->fvf_smarty_function_html_checkboxes_output = g2->fvf_smarty_function_html_checkboxes_output;
  if (g2->fvf_smarty_function_html_image) g1->fvf_smarty_function_html_image = g2->fvf_smarty_function_html_image;
  if (g2->fvf_smarty_function_html_options) g1->fvf_smarty_function_html_options = g2->fvf_smarty_function_html_options;
  if (g2->fvf_smarty_function_html_options_optgroup) g1->fvf_smarty_function_html_options_optgroup = g2->fvf_smarty_function_html_options_optgroup;
  if (g2->fvf_smarty_function_html_options_optoutput) g1->fvf_smarty_function_html_options_optoutput = g2->fvf_smarty_function_html_options_optoutput;
  if (g2->fvf_smarty_function_html_radios) g1->fvf_smarty_function_html_radios = g2->fvf_smarty_function_html_radios;
  if (g2->fvf_smarty_function_html_radios_output) g1->fvf_smarty_function_html_radios_output = g2->fvf_smarty_function_html_radios_output;
  if (g2->fvf_smarty_function_html_select_date) g1->fvf_smarty_function_html_select_date = g2->fvf_smarty_function_html_select_date;
  if (g2->fvf_smarty_function_html_select_time) g1->fvf_smarty_function_html_select_time = g2->fvf_smarty_function_html_select_time;
  if (g2->fvf_smarty_function_html_table) g1->fvf_smarty_function_html_table = g2->fvf_smarty_function_html_table;
  if (g2->fvf_smarty_function_html_table_cycle) g1->fvf_smarty_function_html_table_cycle = g2->fvf_smarty_function_html_table_cycle;
  if (g2->fvf_smarty_function_mailto) g1->fvf_smarty_function_mailto = g2->fvf_smarty_function_mailto;
  if (g2->fvf_smarty_function_math) g1->fvf_smarty_function_math = g2->fvf_smarty_function_math;
  if (g2->fvf_smarty_make_timestamp) g1->fvf_smarty_make_timestamp = g2->fvf_smarty_make_timestamp;
  if (g2->fvf_smarty_mb_str_replace) g1->fvf_smarty_mb_str_replace = g2->fvf_smarty_mb_str_replace;
  if (g2->fvf_smarty_modifier_capitalize) g1->fvf_smarty_modifier_capitalize = g2->fvf_smarty_modifier_capitalize;
  if (g2->fvf_smarty_modifier_date_format) g1->fvf_smarty_modifier_date_format = g2->fvf_smarty_modifier_date_format;
  if (g2->fvf_smarty_modifier_debug_print_var) g1->fvf_smarty_modifier_debug_print_var = g2->fvf_smarty_modifier_debug_print_var;
  if (g2->fvf_smarty_modifier_escape) g1->fvf_smarty_modifier_escape = g2->fvf_smarty_modifier_escape;
  if (g2->fvf_smarty_modifier_regex_replace) g1->fvf_smarty_modifier_regex_replace = g2->fvf_smarty_modifier_regex_replace;
  if (g2->fvf_smarty_modifier_replace) g1->fvf_smarty_modifier_replace = g2->fvf_smarty_modifier_replace;
  if (g2->fvf_smarty_modifier_spacify) g1->fvf_smarty_modifier_spacify = g2->fvf_smarty_modifier_spacify;
  if (g2->fvf_smarty_modifier_truncate) g1->fvf_smarty_modifier_truncate = g2->fvf_smarty_modifier_truncate;
  if (g2->fvf_smarty_modifiercompiler_cat) g1->fvf_smarty_modifiercompiler_cat = g2->fvf_smarty_modifiercompiler_cat;
  if (g2->fvf_smarty_modifiercompiler_count_characters) g1->fvf_smarty_modifiercompiler_count_characters = g2->fvf_smarty_modifiercompiler_count_characters;
  if (g2->fvf_smarty_modifiercompiler_count_paragraphs) g1->fvf_smarty_modifiercompiler_count_paragraphs = g2->fvf_smarty_modifiercompiler_count_paragraphs;
  if (g2->fvf_smarty_modifiercompiler_count_sentences) g1->fvf_smarty_modifiercompiler_count_sentences = g2->fvf_smarty_modifiercompiler_count_sentences;
  if (g2->fvf_smarty_modifiercompiler_count_words) g1->fvf_smarty_modifiercompiler_count_words = g2->fvf_smarty_modifiercompiler_count_words;
  if (g2->fvf_smarty_modifiercompiler_default) g1->fvf_smarty_modifiercompiler_default = g2->fvf_smarty_modifiercompiler_default;
  if (g2->fvf_smarty_modifiercompiler_indent) g1->fvf_smarty_modifiercompiler_indent = g2->fvf_smarty_modifiercompiler_indent;
  if (g2->fvf_smarty_modifiercompiler_lower) g1->fvf_smarty_modifiercompiler_lower = g2->fvf_smarty_modifiercompiler_lower;
  if (g2->fvf_smarty_modifiercompiler_noprint) g1->fvf_smarty_modifiercompiler_noprint = g2->fvf_smarty_modifiercompiler_noprint;
  if (g2->fvf_smarty_modifiercompiler_string_format) g1->fvf_smarty_modifiercompiler_string_format = g2->fvf_smarty_modifiercompiler_string_format;
  if (g2->fvf_smarty_modifiercompiler_strip) g1->fvf_smarty_modifiercompiler_strip = g2->fvf_smarty_modifiercompiler_strip;
  if (g2->fvf_smarty_modifiercompiler_strip_tags) g1->fvf_smarty_modifiercompiler_strip_tags = g2->fvf_smarty_modifiercompiler_strip_tags;
  if (g2->fvf_smarty_modifiercompiler_upper) g1->fvf_smarty_modifiercompiler_upper = g2->fvf_smarty_modifiercompiler_upper;
  if (g2->fvf_smarty_modifiercompiler_wordwrap) g1->fvf_smarty_modifiercompiler_wordwrap = g2->fvf_smarty_modifiercompiler_wordwrap;
  if (g2->fvf_smarty_outputfilter_trimwhitespace) g1->fvf_smarty_outputfilter_trimwhitespace = g2->fvf_smarty_outputfilter_trimwhitespace;
  if (g2->fvf_smarty_outputfilter_trimwhitespace_replace) g1->fvf_smarty_outputfilter_trimwhitespace_replace = g2->fvf_smarty_outputfilter_trimwhitespace_replace;
  if (g2->fvf_smarty_variablefilter_htmlspecialchars) g1->fvf_smarty_variablefilter_htmlspecialchars = g2->fvf_smarty_variablefilter_htmlspecialchars;
  if (g2->fvf_smartyautoload) g1->fvf_smartyautoload = g2->fvf_smartyautoload;
  if (g2->CDEC(_smarty_code)) g1->CDEC(_smarty_code) = true;
  if (g2->CDEC(_smarty_doublequoted)) g1->CDEC(_smarty_doublequoted) = true;
  if (g2->CDEC(_smarty_dq_content)) g1->CDEC(_smarty_dq_content) = true;
  if (g2->CDEC(_smarty_linebreak)) g1->CDEC(_smarty_linebreak) = true;
  if (g2->CDEC(_smarty_parsetree)) g1->CDEC(_smarty_parsetree) = true;
  if (g2->CDEC(_smarty_tag)) g1->CDEC(_smarty_tag) = true;
  if (g2->CDEC(_smarty_template_buffer)) g1->CDEC(_smarty_template_buffer) = true;
  if (g2->CDEC(_smarty_text)) g1->CDEC(_smarty_text) = true;
  if (g2->CDEC(smarty)) g1->CDEC(smarty) = true;
  if (g2->CDEC(smarty_data)) g1->CDEC(smarty_data) = true;
  if (g2->CDEC(smarty_internal_cacheresource_file)) g1->CDEC(smarty_internal_cacheresource_file) = true;
  if (g2->CDEC(smarty_internal_compile_append)) g1->CDEC(smarty_internal_compile_append) = true;
  if (g2->CDEC(smarty_internal_compile_assign)) g1->CDEC(smarty_internal_compile_assign) = true;
  if (g2->CDEC(smarty_internal_compile_block)) g1->CDEC(smarty_internal_compile_block) = true;
  if (g2->CDEC(smarty_internal_compile_blockclose)) g1->CDEC(smarty_internal_compile_blockclose) = true;
  if (g2->CDEC(smarty_internal_compile_break)) g1->CDEC(smarty_internal_compile_break) = true;
  if (g2->CDEC(smarty_internal_compile_call)) g1->CDEC(smarty_internal_compile_call) = true;
  if (g2->CDEC(smarty_internal_compile_capture)) g1->CDEC(smarty_internal_compile_capture) = true;
  if (g2->CDEC(smarty_internal_compile_captureclose)) g1->CDEC(smarty_internal_compile_captureclose) = true;
  if (g2->CDEC(smarty_internal_compile_config_load)) g1->CDEC(smarty_internal_compile_config_load) = true;
  if (g2->CDEC(smarty_internal_compile_continue)) g1->CDEC(smarty_internal_compile_continue) = true;
  if (g2->CDEC(smarty_internal_compile_debug)) g1->CDEC(smarty_internal_compile_debug) = true;
  if (g2->CDEC(smarty_internal_compile_else)) g1->CDEC(smarty_internal_compile_else) = true;
  if (g2->CDEC(smarty_internal_compile_elseif)) g1->CDEC(smarty_internal_compile_elseif) = true;
  if (g2->CDEC(smarty_internal_compile_eval)) g1->CDEC(smarty_internal_compile_eval) = true;
  if (g2->CDEC(smarty_internal_compile_extends)) g1->CDEC(smarty_internal_compile_extends) = true;
  if (g2->CDEC(smarty_internal_compile_for)) g1->CDEC(smarty_internal_compile_for) = true;
  if (g2->CDEC(smarty_internal_compile_forclose)) g1->CDEC(smarty_internal_compile_forclose) = true;
  if (g2->CDEC(smarty_internal_compile_foreach)) g1->CDEC(smarty_internal_compile_foreach) = true;
  if (g2->CDEC(smarty_internal_compile_foreachclose)) g1->CDEC(smarty_internal_compile_foreachclose) = true;
  if (g2->CDEC(smarty_internal_compile_foreachelse)) g1->CDEC(smarty_internal_compile_foreachelse) = true;
  if (g2->CDEC(smarty_internal_compile_forelse)) g1->CDEC(smarty_internal_compile_forelse) = true;
  if (g2->CDEC(smarty_internal_compile_function)) g1->CDEC(smarty_internal_compile_function) = true;
  if (g2->CDEC(smarty_internal_compile_functionclose)) g1->CDEC(smarty_internal_compile_functionclose) = true;
  if (g2->CDEC(smarty_internal_compile_if)) g1->CDEC(smarty_internal_compile_if) = true;
  if (g2->CDEC(smarty_internal_compile_ifclose)) g1->CDEC(smarty_internal_compile_ifclose) = true;
  if (g2->CDEC(smarty_internal_compile_include)) g1->CDEC(smarty_internal_compile_include) = true;
  if (g2->CDEC(smarty_internal_compile_include_php)) g1->CDEC(smarty_internal_compile_include_php) = true;
  if (g2->CDEC(smarty_internal_compile_insert)) g1->CDEC(smarty_internal_compile_insert) = true;
  if (g2->CDEC(smarty_internal_compile_ldelim)) g1->CDEC(smarty_internal_compile_ldelim) = true;
  if (g2->CDEC(smarty_internal_compile_nocache)) g1->CDEC(smarty_internal_compile_nocache) = true;
  if (g2->CDEC(smarty_internal_compile_nocacheclose)) g1->CDEC(smarty_internal_compile_nocacheclose) = true;
  if (g2->CDEC(smarty_internal_compile_private_block_plugin)) g1->CDEC(smarty_internal_compile_private_block_plugin) = true;
  if (g2->CDEC(smarty_internal_compile_private_function_plugin)) g1->CDEC(smarty_internal_compile_private_function_plugin) = true;
  if (g2->CDEC(smarty_internal_compile_private_modifier)) g1->CDEC(smarty_internal_compile_private_modifier) = true;
  if (g2->CDEC(smarty_internal_compile_private_object_block_function)) g1->CDEC(smarty_internal_compile_private_object_block_function) = true;
  if (g2->CDEC(smarty_internal_compile_private_object_function)) g1->CDEC(smarty_internal_compile_private_object_function) = true;
  if (g2->CDEC(smarty_internal_compile_private_print_expression)) g1->CDEC(smarty_internal_compile_private_print_expression) = true;
  if (g2->CDEC(smarty_internal_compile_private_registered_block)) g1->CDEC(smarty_internal_compile_private_registered_block) = true;
  if (g2->CDEC(smarty_internal_compile_private_registered_function)) g1->CDEC(smarty_internal_compile_private_registered_function) = true;
  if (g2->CDEC(smarty_internal_compile_private_special_variable)) g1->CDEC(smarty_internal_compile_private_special_variable) = true;
  if (g2->CDEC(smarty_internal_compile_rdelim)) g1->CDEC(smarty_internal_compile_rdelim) = true;
  if (g2->CDEC(smarty_internal_compile_section)) g1->CDEC(smarty_internal_compile_section) = true;
  if (g2->CDEC(smarty_internal_compile_sectionclose)) g1->CDEC(smarty_internal_compile_sectionclose) = true;
  if (g2->CDEC(smarty_internal_compile_sectionelse)) g1->CDEC(smarty_internal_compile_sectionelse) = true;
  if (g2->CDEC(smarty_internal_compile_while)) g1->CDEC(smarty_internal_compile_while) = true;
  if (g2->CDEC(smarty_internal_compile_whileclose)) g1->CDEC(smarty_internal_compile_whileclose) = true;
  if (g2->CDEC(smarty_internal_compilebase)) g1->CDEC(smarty_internal_compilebase) = true;
  if (g2->CDEC(smarty_internal_config)) g1->CDEC(smarty_internal_config) = true;
  if (g2->CDEC(smarty_internal_config_file_compiler)) g1->CDEC(smarty_internal_config_file_compiler) = true;
  if (g2->CDEC(smarty_internal_configfilelexer)) g1->CDEC(smarty_internal_configfilelexer) = true;
  if (g2->CDEC(smarty_internal_configfileparser)) g1->CDEC(smarty_internal_configfileparser) = true;
  if (g2->CDEC(smarty_internal_data)) g1->CDEC(smarty_internal_data) = true;
  if (g2->CDEC(smarty_internal_debug)) g1->CDEC(smarty_internal_debug) = true;
  if (g2->CDEC(smarty_internal_filter)) g1->CDEC(smarty_internal_filter) = true;
  if (g2->CDEC(smarty_internal_filter_handler)) g1->CDEC(smarty_internal_filter_handler) = true;
  if (g2->CDEC(smarty_internal_function_call_handler)) g1->CDEC(smarty_internal_function_call_handler) = true;
  if (g2->CDEC(smarty_internal_get_include_path)) g1->CDEC(smarty_internal_get_include_path) = true;
  if (g2->CDEC(smarty_internal_nocache_insert)) g1->CDEC(smarty_internal_nocache_insert) = true;
  if (g2->CDEC(smarty_internal_register)) g1->CDEC(smarty_internal_register) = true;
  if (g2->CDEC(smarty_internal_resource_eval)) g1->CDEC(smarty_internal_resource_eval) = true;
  if (g2->CDEC(smarty_internal_resource_extends)) g1->CDEC(smarty_internal_resource_extends) = true;
  if (g2->CDEC(smarty_internal_resource_file)) g1->CDEC(smarty_internal_resource_file) = true;
  if (g2->CDEC(smarty_internal_resource_php)) g1->CDEC(smarty_internal_resource_php) = true;
  if (g2->CDEC(smarty_internal_resource_registered)) g1->CDEC(smarty_internal_resource_registered) = true;
  if (g2->CDEC(smarty_internal_resource_stream)) g1->CDEC(smarty_internal_resource_stream) = true;
  if (g2->CDEC(smarty_internal_resource_string)) g1->CDEC(smarty_internal_resource_string) = true;
  if (g2->CDEC(smarty_internal_smartytemplatecompiler)) g1->CDEC(smarty_internal_smartytemplatecompiler) = true;
  if (g2->CDEC(smarty_internal_template)) g1->CDEC(smarty_internal_template) = true;
  if (g2->CDEC(smarty_internal_templatecompilerbase)) g1->CDEC(smarty_internal_templatecompilerbase) = true;
  if (g2->CDEC(smarty_internal_templatelexer)) g1->CDEC(smarty_internal_templatelexer) = true;
  if (g2->CDEC(smarty_internal_templateparser)) g1->CDEC(smarty_internal_templateparser) = true;
  if (g2->CDEC(smarty_internal_utility)) g1->CDEC(smarty_internal_utility) = true;
  if (g2->CDEC(smarty_internal_wrapper)) g1->CDEC(smarty_internal_wrapper) = true;
  if (g2->CDEC(smarty_internal_write_file)) g1->CDEC(smarty_internal_write_file) = true;
  if (g2->CDEC(smarty_security)) g1->CDEC(smarty_security) = true;
  if (g2->CDEC(smarty_variable)) g1->CDEC(smarty_variable) = true;
  if (g2->CDEC(smartycompilerexception)) g1->CDEC(smartycompilerexception) = true;
  if (g2->CDEC(smartyexception)) g1->CDEC(smartyexception) = true;
  if (g2->CDEC(tp_yystackentry)) g1->CDEC(tp_yystackentry) = true;
  if (g2->CDEC(tp_yytoken)) g1->CDEC(tp_yytoken) = true;
  if (g2->CDEC(tpc_yystackentry)) g1->CDEC(tpc_yystackentry) = true;
  if (g2->CDEC(tpc_yytoken)) g1->CDEC(tpc_yytoken) = true;
  if (g2->CDEC(undefined_smarty_variable)) g1->CDEC(undefined_smarty_variable) = true;
  refMap.unmarshal(g1->GV(HTTP_RAW_POST_DATA), g2->GV(HTTP_RAW_POST_DATA), r[0]);
  refMap.unmarshal(g1->GV(_COOKIE), g2->GV(_COOKIE), r[1]);
  refMap.unmarshal(g1->GV(_ENV), g2->GV(_ENV), r[2]);
  refMap.unmarshal(g1->GV(_FILES), g2->GV(_FILES), r[3]);
  refMap.unmarshal(g1->GV(_GET), g2->GV(_GET), r[4]);
  refMap.unmarshal(g1->GV(_POST), g2->GV(_POST), r[5]);
  refMap.unmarshal(g1->GV(_REQUEST), g2->GV(_REQUEST), r[6]);
  refMap.unmarshal(g1->GV(_SERVER), g2->GV(_SERVER), r[7]);
  refMap.unmarshal(g1->GV(_SESSION), g2->GV(_SESSION), r[8]);
  refMap.unmarshal(g1->GV(_from), g2->GV(_from), r[9]);
  refMap.unmarshal(g1->GV(_smarty_tpl), g2->GV(_smarty_tpl), r[10]);
  refMap.unmarshal(g1->GV(_template), g2->GV(_template), r[11]);
  refMap.unmarshal(g1->GV(_tpl_stack), g2->GV(_tpl_stack), r[12]);
  refMap.unmarshal(g1->GV(argc), g2->GV(argc), r[13]);
  refMap.unmarshal(g1->GV(argv), g2->GV(argv), r[14]);
  refMap.unmarshal(g1->GV(content), g2->GV(content), r[15]);
  refMap.unmarshal(g1->GV(http_response_header), g2->GV(http_response_header), r[16]);
  refMap.unmarshal(g1->GV(parameters), g2->GV(parameters), r[17]);
  refMap.unmarshal(g1->GV(registeredAutoLoadFunctions), g2->GV(registeredAutoLoadFunctions), r[18]);
  refMap.unmarshal(g1->GV(smarty), g2->GV(smarty), r[19]);
  refMap.unmarshal(g1->GV(tmp), g2->GV(tmp), r[20]);
  if (toBoolean(g2->inited_sv_Smarty_Internal_Configfilelexer___instance___instance)) {refMap.unmarshal(g1->sv_Smarty_Internal_Configfilelexer___instance___instance, g2->sv_Smarty_Internal_Configfilelexer___instance___instance, r[21]);
    refMap.unmarshal(g1->inited_sv_Smarty_Internal_Configfilelexer___instance___instance, g2->inited_sv_Smarty_Internal_Configfilelexer___instance___instance, r[21]);
  }
  if (toBoolean(g2->inited_sv_Smarty_Internal_Configfileparser___instance___instance)) {refMap.unmarshal(g1->sv_Smarty_Internal_Configfileparser___instance___instance, g2->sv_Smarty_Internal_Configfileparser___instance___instance, r[22]);
    refMap.unmarshal(g1->inited_sv_Smarty_Internal_Configfileparser___instance___instance, g2->inited_sv_Smarty_Internal_Configfileparser___instance___instance, r[22]);
  }
  if (toBoolean(g2->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array)) {refMap.unmarshal(g1->sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array, g2->sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array, r[23]);
    refMap.unmarshal(g1->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array, g2->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array, r[23]);
  }
  if (toBoolean(g2->inited_sv_Smarty_Internal_Template_____call___camel_func)) {refMap.unmarshal(g1->sv_Smarty_Internal_Template_____call___camel_func, g2->sv_Smarty_Internal_Template_____call___camel_func, r[24]);
    refMap.unmarshal(g1->inited_sv_Smarty_Internal_Template_____call___camel_func, g2->inited_sv_Smarty_Internal_Template_____call___camel_func, r[24]);
  }
  if (toBoolean(g2->inited_sv_Smarty_____call___camel_func)) {refMap.unmarshal(g1->sv_Smarty_____call___camel_func, g2->sv_Smarty_____call___camel_func, r[25]);
    refMap.unmarshal(g1->inited_sv_Smarty_____call___camel_func, g2->inited_sv_Smarty_____call___camel_func, r[25]);
  }
  if (toBoolean(g2->inited_sv_smarty_function_counter___counters)) {refMap.unmarshal(g1->sv_smarty_function_counter___counters, g2->sv_smarty_function_counter___counters, r[26]);
    refMap.unmarshal(g1->inited_sv_smarty_function_counter___counters, g2->inited_sv_smarty_function_counter___counters, r[26]);
  }
  if (toBoolean(g2->inited_sv_smarty_function_cycle___cycle_vars)) {refMap.unmarshal(g1->sv_smarty_function_cycle___cycle_vars, g2->sv_smarty_function_cycle___cycle_vars, r[27]);
    refMap.unmarshal(g1->inited_sv_smarty_function_cycle___cycle_vars, g2->inited_sv_smarty_function_cycle___cycle_vars, r[27]);
  }
  refMap.unmarshal(g1->s_Smarty_Internal_Config___config_objects, g2->s_Smarty_Internal_Config___config_objects, r[28]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___escapes_single, g2->s_Smarty_Internal_Configfileparser___escapes_single, r[29]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yyExpectedTokens, g2->s_Smarty_Internal_Configfileparser___yyExpectedTokens, r[30]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yyFallback, g2->s_Smarty_Internal_Configfileparser___yyFallback, r[31]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yyReduceMap, g2->s_Smarty_Internal_Configfileparser___yyReduceMap, r[32]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yyRuleInfo, g2->s_Smarty_Internal_Configfileparser___yyRuleInfo, r[33]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yyRuleName, g2->s_Smarty_Internal_Configfileparser___yyRuleName, r[34]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yyTraceFILE, g2->s_Smarty_Internal_Configfileparser___yyTraceFILE, r[35]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yyTracePrompt, g2->s_Smarty_Internal_Configfileparser___yyTracePrompt, r[36]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yy_action, g2->s_Smarty_Internal_Configfileparser___yy_action, r[37]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yy_default, g2->s_Smarty_Internal_Configfileparser___yy_default, r[38]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yy_lookahead, g2->s_Smarty_Internal_Configfileparser___yy_lookahead, r[39]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yy_reduce_ofst, g2->s_Smarty_Internal_Configfileparser___yy_reduce_ofst, r[40]);
  refMap.unmarshal(g1->s_Smarty_Internal_Configfileparser___yy_shift_ofst, g2->s_Smarty_Internal_Configfileparser___yy_shift_ofst, r[41]);
  refMap.unmarshal(g1->s_Smarty_Internal_Debug___template_data, g2->s_Smarty_Internal_Debug___template_data, r[42]);
  refMap.unmarshal(g1->s_Smarty_Internal_TemplateCompilerBase____tag_objects, g2->s_Smarty_Internal_TemplateCompilerBase____tag_objects, r[43]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yyExpectedTokens, g2->s_Smarty_Internal_Templateparser___yyExpectedTokens, r[44]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yyFallback, g2->s_Smarty_Internal_Templateparser___yyFallback, r[45]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yyReduceMap, g2->s_Smarty_Internal_Templateparser___yyReduceMap, r[46]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yyRuleInfo, g2->s_Smarty_Internal_Templateparser___yyRuleInfo, r[47]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yyRuleName, g2->s_Smarty_Internal_Templateparser___yyRuleName, r[48]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yyTraceFILE, g2->s_Smarty_Internal_Templateparser___yyTraceFILE, r[49]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yyTracePrompt, g2->s_Smarty_Internal_Templateparser___yyTracePrompt, r[50]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yy_action, g2->s_Smarty_Internal_Templateparser___yy_action, r[51]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yy_default, g2->s_Smarty_Internal_Templateparser___yy_default, r[52]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yy_lookahead, g2->s_Smarty_Internal_Templateparser___yy_lookahead, r[53]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yy_reduce_ofst, g2->s_Smarty_Internal_Templateparser___yy_reduce_ofst, r[54]);
  refMap.unmarshal(g1->s_Smarty_Internal_Templateparser___yy_shift_ofst, g2->s_Smarty_Internal_Templateparser___yy_shift_ofst, r[55]);
  refMap.unmarshal(g1->s_Smarty____smarty_vars, g2->s_Smarty____smarty_vars, r[56]);
  refMap.unmarshal(g1->s_Smarty___global_tpl_vars, g2->s_Smarty___global_tpl_vars, r[57]);
  refMap.unmarshal(g1->k_DS, g2->k_DS, r[58]);
  refMap.unmarshal(g1->k_SID, g2->k_SID, r[59]);
  refMap.unmarshal(g1->k_SMARTY_DIR, g2->k_SMARTY_DIR, r[60]);
  refMap.unmarshal(g1->k_SMARTY_PLUGINS_DIR, g2->k_SMARTY_PLUGINS_DIR, r[61]);
  refMap.unmarshal(g1->k_SMARTY_RESOURCE_CHAR_SET, g2->k_SMARTY_RESOURCE_CHAR_SET, r[62]);
  refMap.unmarshal(g1->k_SMARTY_RESOURCE_DATE_FORMAT, g2->k_SMARTY_RESOURCE_DATE_FORMAT, r[63]);
  refMap.unmarshal(g1->k_SMARTY_SPL_AUTOLOAD, g2->k_SMARTY_SPL_AUTOLOAD, r[64]);
  refMap.unmarshal(g1->k_SMARTY_SYSPLUGINS_DIR, g2->k_SMARTY_SYSPLUGINS_DIR, r[65]);
  refMap.unmarshalDynamicGlobals((Array&)(*g1), (Array&)(*g2), default_strategy, strategies);
}

///////////////////////////////////////////////////////////////////////////////
}
