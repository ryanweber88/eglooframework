
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace global_state {
void get_dynamic_constants(Array &res) {
  DECLARE_GLOBAL_VARIABLES(g);
  Array dynamic_constants;
  dynamic_constants.set("k_DS", g->k_DS);
  dynamic_constants.set("k_SID", g->k_SID);
  dynamic_constants.set("k_SMARTY_DIR", g->k_SMARTY_DIR);
  dynamic_constants.set("k_SMARTY_PLUGINS_DIR", g->k_SMARTY_PLUGINS_DIR);
  dynamic_constants.set("k_SMARTY_RESOURCE_CHAR_SET", g->k_SMARTY_RESOURCE_CHAR_SET);
  dynamic_constants.set("k_SMARTY_RESOURCE_DATE_FORMAT", g->k_SMARTY_RESOURCE_DATE_FORMAT);
  dynamic_constants.set("k_SMARTY_SPL_AUTOLOAD", g->k_SMARTY_SPL_AUTOLOAD);
  dynamic_constants.set("k_SMARTY_SYSPLUGINS_DIR", g->k_SMARTY_SYSPLUGINS_DIR);
  res.set("dynamic_constants", dynamic_constants);
}

}

///////////////////////////////////////////////////////////////////////////////
}
