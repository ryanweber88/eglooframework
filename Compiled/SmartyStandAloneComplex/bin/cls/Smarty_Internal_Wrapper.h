
#ifndef __GENERATED_cls_Smarty_Internal_Wrapper_hc9074196__
#define __GENERATED_cls_Smarty_Internal_Wrapper_hc9074196__

#include <cls/Smarty_Internal_Wrapper.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_wrapper.php line 39 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Wrapper);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Wrapper;
class c_Smarty_Internal_Wrapper : public ObjectData {
  public:

  // Properties
  Variant m_smarty;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Wrapper, Smarty_Internal_Wrapper, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Smarty_Internal_Wrapper() : m_smarty(Variant::nullInit) {}
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Wrapper *create(CVarRef v_smarty);
  public: Variant t_convert(CVarRef v_name, CVarRef v_args);
  public: void t_trigger_error(CVarRef v_error_msg, CVarRef v_error_type = NAMVAR(s_svid5e04164, 512LL) /* E_USER_WARNING */);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(convert);
  DECLARE_METHOD_INVOKE_HELPERS(trigger_error);
};
ObjectData *coo_Smarty_Internal_Wrapper() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Wrapper_hc9074196__
