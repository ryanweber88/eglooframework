
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace global_state {
void get_method_static_variables(Array &res) {
  DECLARE_GLOBAL_VARIABLES(g);
  Array method_static_variables;
  method_static_variables.set("sv_Smarty_Internal_Configfilelexer___instance___instance", g->sv_Smarty_Internal_Configfilelexer___instance___instance);
  method_static_variables.set("sv_Smarty_Internal_Configfileparser___instance___instance", g->sv_Smarty_Internal_Configfileparser___instance___instance);
  method_static_variables.set("sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array", g->sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array);
  method_static_variables.set("sv_Smarty_Internal_Template_____call___camel_func", g->sv_Smarty_Internal_Template_____call___camel_func);
  method_static_variables.set("sv_Smarty_____call___camel_func", g->sv_Smarty_____call___camel_func);
  method_static_variables.set("sv_smarty_function_counter___counters", g->sv_smarty_function_counter___counters);
  method_static_variables.set("sv_smarty_function_cycle___cycle_vars", g->sv_smarty_function_cycle___cycle_vars);
  res.set("method_static_variables", method_static_variables);
}

}

///////////////////////////////////////////////////////////////////////////////
}
