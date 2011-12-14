
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace global_state {
void get_pseudomain_variables(Array &res) {
  DECLARE_GLOBAL_VARIABLES(g);
  Array pseudomain_variables;
  pseudomain_variables.set("run_pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php", g->run_pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$Smarty_class_php", g->run_pm_php$Smarty$libs$Smarty_class_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$Smarty_class_php_df_lambda", g->run_pm_php$Smarty$libs$Smarty_class_php_df_lambda);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$block_php_php", g->run_pm_php$Smarty$libs$plugins$block_php_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$block_textformat_php", g->run_pm_php$Smarty$libs$plugins$block_textformat_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_counter_php", g->run_pm_php$Smarty$libs$plugins$function_counter_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_cycle_php", g->run_pm_php$Smarty$libs$plugins$function_cycle_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_fetch_php", g->run_pm_php$Smarty$libs$plugins$function_fetch_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_html_checkboxes_php", g->run_pm_php$Smarty$libs$plugins$function_html_checkboxes_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_html_image_php", g->run_pm_php$Smarty$libs$plugins$function_html_image_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_html_options_php", g->run_pm_php$Smarty$libs$plugins$function_html_options_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_html_radios_php", g->run_pm_php$Smarty$libs$plugins$function_html_radios_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_html_select_date_php", g->run_pm_php$Smarty$libs$plugins$function_html_select_date_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_html_select_time_php", g->run_pm_php$Smarty$libs$plugins$function_html_select_time_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_html_table_php", g->run_pm_php$Smarty$libs$plugins$function_html_table_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_mailto_php", g->run_pm_php$Smarty$libs$plugins$function_mailto_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$function_math_php", g->run_pm_php$Smarty$libs$plugins$function_math_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_capitalize_php", g->run_pm_php$Smarty$libs$plugins$modifier_capitalize_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_date_format_php", g->run_pm_php$Smarty$libs$plugins$modifier_date_format_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_debug_print_var_php", g->run_pm_php$Smarty$libs$plugins$modifier_debug_print_var_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_escape_php", g->run_pm_php$Smarty$libs$plugins$modifier_escape_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_regex_replace_php", g->run_pm_php$Smarty$libs$plugins$modifier_regex_replace_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_replace_php", g->run_pm_php$Smarty$libs$plugins$modifier_replace_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_spacify_php", g->run_pm_php$Smarty$libs$plugins$modifier_spacify_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifier_truncate_php", g->run_pm_php$Smarty$libs$plugins$modifier_truncate_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_cat_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_cat_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_default_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_default_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_indent_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_indent_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_lower_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_lower_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_upper_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_upper_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php", g->run_pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php", g->run_pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$shared_escape_special_chars_php", g->run_pm_php$Smarty$libs$plugins$shared_escape_special_chars_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$shared_make_timestamp_php", g->run_pm_php$Smarty$libs$plugins$shared_make_timestamp_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$shared_mb_str_replace_php", g->run_pm_php$Smarty$libs$plugins$shared_mb_str_replace_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php", g->run_pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_config_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_data_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_data_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_register_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_register_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php);
  pseudomain_variables.set("run_pm_php$Smarty$libs$sysplugins$smarty_security_php", g->run_pm_php$Smarty$libs$sysplugins$smarty_security_php);
  pseudomain_variables.set("run_pm_php$index_php", g->run_pm_php$index_php);
  pseudomain_variables.set("run_pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php", g->run_pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php);
  pseudomain_variables.set("run_pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php", g->run_pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php);
  res.set("pseudomain_variables", pseudomain_variables);
}

}

///////////////////////////////////////////////////////////////////////////////
}
