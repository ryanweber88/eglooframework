
#ifndef __GENERATED_cls_Smarty_Internal_Register_hedc2a2fe__
#define __GENERATED_cls_Smarty_Internal_Register_hedc2a2fe__

#include <cls/Smarty_Internal_Register.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Register);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Register;
class c_Smarty_Internal_Register : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Register, Smarty_Internal_Register, ObjectData)
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Register *create(CVarRef v_smarty);
  public: void t_registerplugin(CVarRef v_type, CVarRef v_tag, CVarRef v_callback, CVarRef v_cacheable = true_varNR, CVarRef v_cache_attr = null_variant);
  public: void t_unregisterplugin(CVarRef v_type, CVarRef v_tag);
  public: void t_registerresource(CVarRef v_type, CVarRef v_callback);
  public: void t_unregisterresource(CVarRef v_type);
  public: void t_registerobject(CVarRef v_object_name, CVarRef v_object_impl, CVarRef v_allowed = s_sva00000000, CVarRef v_smarty_args = true_varNR, CVarRef v_block_methods = s_sva00000000);
  public: void t_registerclass(CVarRef v_class_name, CVarRef v_class_impl);
  public: void t_registerdefaultpluginhandler(CVarRef v_callback);
  public: void t_registerdefaulttemplatehandler(CVarRef v_callback);
  DECLARE_METHOD_INVOKE_HELPERS(unregisterresource);
  DECLARE_METHOD_INVOKE_HELPERS(registerobject);
  DECLARE_METHOD_INVOKE_HELPERS(registerplugin);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(registerclass);
  DECLARE_METHOD_INVOKE_HELPERS(registerresource);
  DECLARE_METHOD_INVOKE_HELPERS(registerdefaultpluginhandler);
  DECLARE_METHOD_INVOKE_HELPERS(registerdefaulttemplatehandler);
  DECLARE_METHOD_INVOKE_HELPERS(unregisterplugin);
};
ObjectData *coo_Smarty_Internal_Register() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Register_hedc2a2fe__
