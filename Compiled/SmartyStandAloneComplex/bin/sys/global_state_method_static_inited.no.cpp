
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace global_state {
void get_method_static_inited(Array &res) {
  DECLARE_GLOBAL_VARIABLES(g);
  Array method_static_inited;
  method_static_inited.set("inited_sv_Smarty_Internal_Configfilelexer___instance___instance", g->inited_sv_Smarty_Internal_Configfilelexer___instance___instance);
  method_static_inited.set("inited_sv_Smarty_Internal_Configfileparser___instance___instance", g->inited_sv_Smarty_Internal_Configfileparser___instance___instance);
  method_static_inited.set("inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array", g->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array);
  method_static_inited.set("inited_sv_Smarty_Internal_Template_____call___camel_func", g->inited_sv_Smarty_Internal_Template_____call___camel_func);
  method_static_inited.set("inited_sv_Smarty_____call___camel_func", g->inited_sv_Smarty_____call___camel_func);
  method_static_inited.set("inited_sv_smarty_function_counter___counters", g->inited_sv_smarty_function_counter___counters);
  method_static_inited.set("inited_sv_smarty_function_cycle___cycle_vars", g->inited_sv_smarty_function_cycle___cycle_vars);
  res.set("method_static_inited", method_static_inited);
}

}

///////////////////////////////////////////////////////////////////////////////
}
