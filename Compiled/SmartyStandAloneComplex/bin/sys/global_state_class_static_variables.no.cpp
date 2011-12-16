
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace global_state {
void get_class_static_variables(Array &res) {
  DECLARE_GLOBAL_VARIABLES(g);
  Array class_static_variables;
  class_static_variables.set("s_Smarty_Internal_Config___config_objects", g->s_Smarty_Internal_Config___config_objects);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___escapes_single", g->s_Smarty_Internal_Configfileparser___escapes_single);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yyExpectedTokens", g->s_Smarty_Internal_Configfileparser___yyExpectedTokens);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yyFallback", g->s_Smarty_Internal_Configfileparser___yyFallback);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yyReduceMap", g->s_Smarty_Internal_Configfileparser___yyReduceMap);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yyRuleInfo", g->s_Smarty_Internal_Configfileparser___yyRuleInfo);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yyRuleName", g->s_Smarty_Internal_Configfileparser___yyRuleName);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yyTraceFILE", g->s_Smarty_Internal_Configfileparser___yyTraceFILE);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yyTracePrompt", g->s_Smarty_Internal_Configfileparser___yyTracePrompt);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yy_action", g->s_Smarty_Internal_Configfileparser___yy_action);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yy_default", g->s_Smarty_Internal_Configfileparser___yy_default);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yy_lookahead", g->s_Smarty_Internal_Configfileparser___yy_lookahead);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yy_reduce_ofst", g->s_Smarty_Internal_Configfileparser___yy_reduce_ofst);
  class_static_variables.set("s_Smarty_Internal_Configfileparser___yy_shift_ofst", g->s_Smarty_Internal_Configfileparser___yy_shift_ofst);
  class_static_variables.set("s_Smarty_Internal_Debug___template_data", g->s_Smarty_Internal_Debug___template_data);
  class_static_variables.set("s_Smarty_Internal_TemplateCompilerBase____tag_objects", g->s_Smarty_Internal_TemplateCompilerBase____tag_objects);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yyExpectedTokens", g->s_Smarty_Internal_Templateparser___yyExpectedTokens);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yyFallback", g->s_Smarty_Internal_Templateparser___yyFallback);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yyReduceMap", g->s_Smarty_Internal_Templateparser___yyReduceMap);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yyRuleInfo", g->s_Smarty_Internal_Templateparser___yyRuleInfo);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yyRuleName", g->s_Smarty_Internal_Templateparser___yyRuleName);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yyTraceFILE", g->s_Smarty_Internal_Templateparser___yyTraceFILE);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yyTracePrompt", g->s_Smarty_Internal_Templateparser___yyTracePrompt);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yy_action", g->s_Smarty_Internal_Templateparser___yy_action);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yy_default", g->s_Smarty_Internal_Templateparser___yy_default);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yy_lookahead", g->s_Smarty_Internal_Templateparser___yy_lookahead);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yy_reduce_ofst", g->s_Smarty_Internal_Templateparser___yy_reduce_ofst);
  class_static_variables.set("s_Smarty_Internal_Templateparser___yy_shift_ofst", g->s_Smarty_Internal_Templateparser___yy_shift_ofst);
  class_static_variables.set("s_Smarty____smarty_vars", g->s_Smarty____smarty_vars);
  class_static_variables.set("s_Smarty___global_tpl_vars", g->s_Smarty___global_tpl_vars);
  res.set("class_static_variables", class_static_variables);
}

}

///////////////////////////////////////////////////////////////////////////////
}
