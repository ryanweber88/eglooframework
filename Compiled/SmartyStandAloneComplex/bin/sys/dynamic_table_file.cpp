
#include <runtime/base/hphp.h>

namespace hphp_impl_starter {}

using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

typedef Variant (*pm_t)(bool incOnce, LVariableTable* variables, Globals *globals);

// File Invoke Table
Variant pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$Smarty_class_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$Smarty_class_php_df_lambda(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$block_php_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$block_textformat_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_counter_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_cycle_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_fetch_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_html_checkboxes_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_html_image_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_html_options_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_html_radios_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_html_select_date_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_html_select_time_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_html_table_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_mailto_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$function_math_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_capitalize_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_date_format_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_debug_print_var_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_escape_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_regex_replace_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_replace_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_spacify_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifier_truncate_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_cat_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_default_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_indent_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_lower_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_strip_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_upper_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$shared_escape_special_chars_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$shared_make_timestamp_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$shared_mb_str_replace_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_config_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_data_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_register_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_template_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$Smarty$libs$sysplugins$smarty_security_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$index_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php(bool incOnce, LVariableTable* variables, Globals *globals);
Variant pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php(bool incOnce, LVariableTable* variables, Globals *globals);

static Variant dummy_pm(bool oncOnce, LVariableTable* variables,   Globals *globals) { return true; }
class hashNodeFile {
public:
  hashNodeFile() {}
  hashNodeFile(int64 h, const char *n, const void *p) :
    hash(h), name(n), ptr(p), next(NULL) {}
  int64 hash;
  const char *name;
  const void *ptr;
  hashNodeFile *next;
};
static hashNodeFile *fileMapTable[256];
static hashNodeFile fileBuckets[111];

static class FileTableInitializer {
  public: FileTableInitializer() {
    const char *fileMapData[] = {
      (const char *)"/home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php", (const char *)&pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php,
      (const char *)"Smarty/libs/Smarty.class.php", (const char *)&pm_php$Smarty$libs$Smarty_class_php,
      (const char *)"Smarty/libs/Smarty.class.php.df_lambda", (const char *)&pm_php$Smarty$libs$Smarty_class_php_df_lambda,
      (const char *)"Smarty/libs/plugins/block.php.php", (const char *)&pm_php$Smarty$libs$plugins$block_php_php,
      (const char *)"Smarty/libs/plugins/block.textformat.php", (const char *)&pm_php$Smarty$libs$plugins$block_textformat_php,
      (const char *)"Smarty/libs/plugins/function.counter.php", (const char *)&pm_php$Smarty$libs$plugins$function_counter_php,
      (const char *)"Smarty/libs/plugins/function.cycle.php", (const char *)&pm_php$Smarty$libs$plugins$function_cycle_php,
      (const char *)"Smarty/libs/plugins/function.fetch.php", (const char *)&pm_php$Smarty$libs$plugins$function_fetch_php,
      (const char *)"Smarty/libs/plugins/function.html_checkboxes.php", (const char *)&pm_php$Smarty$libs$plugins$function_html_checkboxes_php,
      (const char *)"Smarty/libs/plugins/function.html_image.php", (const char *)&pm_php$Smarty$libs$plugins$function_html_image_php,
      (const char *)"Smarty/libs/plugins/function.html_options.php", (const char *)&pm_php$Smarty$libs$plugins$function_html_options_php,
      (const char *)"Smarty/libs/plugins/function.html_radios.php", (const char *)&pm_php$Smarty$libs$plugins$function_html_radios_php,
      (const char *)"Smarty/libs/plugins/function.html_select_date.php", (const char *)&pm_php$Smarty$libs$plugins$function_html_select_date_php,
      (const char *)"Smarty/libs/plugins/function.html_select_time.php", (const char *)&pm_php$Smarty$libs$plugins$function_html_select_time_php,
      (const char *)"Smarty/libs/plugins/function.html_table.php", (const char *)&pm_php$Smarty$libs$plugins$function_html_table_php,
      (const char *)"Smarty/libs/plugins/function.mailto.php", (const char *)&pm_php$Smarty$libs$plugins$function_mailto_php,
      (const char *)"Smarty/libs/plugins/function.math.php", (const char *)&pm_php$Smarty$libs$plugins$function_math_php,
      (const char *)"Smarty/libs/plugins/modifier.capitalize.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_capitalize_php,
      (const char *)"Smarty/libs/plugins/modifier.date_format.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_date_format_php,
      (const char *)"Smarty/libs/plugins/modifier.debug_print_var.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_debug_print_var_php,
      (const char *)"Smarty/libs/plugins/modifier.escape.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_escape_php,
      (const char *)"Smarty/libs/plugins/modifier.regex_replace.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_regex_replace_php,
      (const char *)"Smarty/libs/plugins/modifier.replace.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_replace_php,
      (const char *)"Smarty/libs/plugins/modifier.spacify.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_spacify_php,
      (const char *)"Smarty/libs/plugins/modifier.truncate.php", (const char *)&pm_php$Smarty$libs$plugins$modifier_truncate_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.cat.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_cat_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.count_characters.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.count_paragraphs.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.count_sentences.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.count_words.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.default.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_default_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.indent.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_indent_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.lower.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_lower_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.noprint.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.string_format.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.strip.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_strip_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.strip_tags.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.upper.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_upper_php,
      (const char *)"Smarty/libs/plugins/modifiercompiler.wordwrap.php", (const char *)&pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php,
      (const char *)"Smarty/libs/plugins/outputfilter.trimwhitespace.php", (const char *)&pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php,
      (const char *)"Smarty/libs/plugins/shared.escape_special_chars.php", (const char *)&pm_php$Smarty$libs$plugins$shared_escape_special_chars_php,
      (const char *)"Smarty/libs/plugins/shared.make_timestamp.php", (const char *)&pm_php$Smarty$libs$plugins$shared_make_timestamp_php,
      (const char *)"Smarty/libs/plugins/shared.mb_str_replace.php", (const char *)&pm_php$Smarty$libs$plugins$shared_mb_str_replace_php,
      (const char *)"Smarty/libs/plugins/variablefilter.htmlspecialchars.php", (const char *)&pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_append.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_assign.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_block.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_break.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_call.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_capture.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_config_load.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_continue.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_debug.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_eval.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_extends.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_for.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_foreach.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_function.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_if.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_include.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_include_php.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_insert.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_ldelim.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_nocache.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_block_plugin.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_function_plugin.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_modifier.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_object_block_function.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_object_function.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_print_expression.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_registered_block.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_registered_function.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_private_special_variable.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_rdelim.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_section.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compile_while.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_compilebase.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_config.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_config_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_config_file_compiler.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_configfilelexer.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_configfileparser.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_data.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_data_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_debug.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_filter.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_filter_handler.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_function_call_handler.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_get_include_path.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_nocache_insert.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_parsetree.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_register.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_register_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_resource_eval.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_resource_extends.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_resource_file.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_resource_php.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_resource_registered.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_resource_stream.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_resource_string.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_template.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_template_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_template.php.df_lambda", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_templatelexer.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_templateparser.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_utility.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_wrapper.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php,
      (const char *)"Smarty/libs/sysplugins/smarty_internal_write_file.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php,
      (const char *)"Smarty/libs/sysplugins/smarty_security.php", (const char *)&pm_php$Smarty$libs$sysplugins$smarty_security_php,
      (const char *)"index.php", (const char *)&pm_php$index_php,
      (const char *)"templates_c/aa4c1df37173fa133641e1fa9c6e008f83554f47.file.StartTest.tpl.php", (const char *)&pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php,
      (const char *)"templates_c/f83ed04b0f30683e3826b23328c96a6e07015b85.file.test.tpl.php", (const char *)&pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php,
      NULL, NULL, (const char *)&dummy_pm,
    };
    hashNodeFile *b = fileBuckets;
    for (const char **s = fileMapData; *s; s++, b++) {
      const char *name = *s++;
      const void *ptr = *s;
      int64 hash = hash_string(name, strlen(name));
      hashNodeFile *node = new(b) hashNodeFile(hash, name, ptr);
      int h = hash & 255;
      if (fileMapTable[h]) node->next = fileMapTable[h];
      fileMapTable[h] = node;
    }
  }
} file_table_initializer;

static inline pm_t findFile(const char *name, int64 hash) {
  for (const hashNodeFile *p = fileMapTable[hash & 255 ]; p; p = p->next) {
    if (p->hash == hash && !strcmp(p->name, name)) return (pm_t)p->ptr;
  }
  return NULL;
}

Variant invoke_file(CStrRef s, bool once /* = false */, LVariableTable* variables /* = NULL */,const char *currentDir /* = NULL */) {
  pm_t ptr = findFile(s.c_str(), s->hash());
  if (ptr) return ptr(once, variables, get_globals());
  return throw_missing_file(s.c_str());
}

///////////////////////////////////////////////////////////////////////////////
}
