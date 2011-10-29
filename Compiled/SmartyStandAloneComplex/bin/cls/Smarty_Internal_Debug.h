
#ifndef __GENERATED_cls_Smarty_Internal_Debug_hef2e71d0__
#define __GENERATED_cls_Smarty_Internal_Debug_hef2e71d0__

#include <cls/Smarty_Internal_Debug.fw.h>
#include <cls/Smarty_Internal_Data.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Debug);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Debug;
class c_Smarty_Internal_Debug : public c_Smarty_Internal_Data {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Debug, Smarty_Internal_Debug, Smarty_Internal_Data)
  static const ClassPropTable os_prop_table;
  public: static void t_start_compile(CVarRef v_template);
  public: static void t_end_compile(CVarRef v_template);
  public: static void t_start_render(CVarRef v_template);
  public: static void t_end_render(CVarRef v_template);
  public: static void t_start_cache(CVarRef v_template);
  public: static void t_end_cache(CVarRef v_template);
  public: static void t_display_debug(CVarRef v_obj);
  public: static Object t_get_debug_vars(CVarRef v_obj);
  public: static Variant t_get_key(CVarRef v_template);
  DECLARE_METHOD_INVOKE_HELPERS(end_cache);
  DECLARE_METHOD_INVOKE_HELPERS(start_render);
  DECLARE_METHOD_INVOKE_HELPERS(get_debug_vars);
  DECLARE_METHOD_INVOKE_HELPERS(display_debug);
  DECLARE_METHOD_INVOKE_HELPERS(start_compile);
  DECLARE_METHOD_INVOKE_HELPERS(end_render);
  DECLARE_METHOD_INVOKE_HELPERS(get_key);
  DECLARE_METHOD_INVOKE_HELPERS(start_cache);
  DECLARE_METHOD_INVOKE_HELPERS(end_compile);
};
ObjectData *coo_Smarty_Internal_Debug() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Debug_hef2e71d0__
