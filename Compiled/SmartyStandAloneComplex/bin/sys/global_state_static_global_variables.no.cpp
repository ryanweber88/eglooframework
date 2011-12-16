
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace global_state {
void get_static_global_variables(Array &res) {
  DECLARE_GLOBAL_VARIABLES(g);
  Array static_global_variables;
  static_global_variables.set("gv_HTTP_RAW_POST_DATA", g->GV(HTTP_RAW_POST_DATA));
  static_global_variables.set("gv__COOKIE", g->GV(_COOKIE));
  static_global_variables.set("gv__ENV", g->GV(_ENV));
  static_global_variables.set("gv__FILES", g->GV(_FILES));
  static_global_variables.set("gv__GET", g->GV(_GET));
  static_global_variables.set("gv__POST", g->GV(_POST));
  static_global_variables.set("gv__REQUEST", g->GV(_REQUEST));
  static_global_variables.set("gv__SERVER", g->GV(_SERVER));
  static_global_variables.set("gv__SESSION", g->GV(_SESSION));
  static_global_variables.set("gv__from", g->GV(_from));
  static_global_variables.set("gv__smarty_tpl", g->GV(_smarty_tpl));
  static_global_variables.set("gv__template", g->GV(_template));
  static_global_variables.set("gv__tpl_stack", g->GV(_tpl_stack));
  static_global_variables.set("gv_argc", g->GV(argc));
  static_global_variables.set("gv_argv", g->GV(argv));
  static_global_variables.set("gv_content", g->GV(content));
  static_global_variables.set("gv_http_response_header", g->GV(http_response_header));
  static_global_variables.set("gv_parameters", g->GV(parameters));
  static_global_variables.set("gv_registeredAutoLoadFunctions", g->GV(registeredAutoLoadFunctions));
  static_global_variables.set("gv_smarty", g->GV(smarty));
  static_global_variables.set("gv_tmp", g->GV(tmp));
  res.set("static_global_variables", static_global_variables);
}

}

///////////////////////////////////////////////////////////////////////////////
}
