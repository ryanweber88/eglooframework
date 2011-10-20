
#ifndef __GENERATED_cls_Smarty_Internal_Utility_hf964a548__
#define __GENERATED_cls_Smarty_Internal_Utility_hf964a548__

#include <cls/Smarty_Internal_Utility.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 35 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Utility);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Utility;
class c_Smarty_Internal_Utility : public ObjectData {
  public:

  // Properties
  Variant m_smarty;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Utility, Smarty_Internal_Utility, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Smarty_Internal_Utility() : m_smarty(Variant::nullInit) {}
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Utility *create(CVarRef v_smarty);
  public: int64 t_compilealltemplates(CVarRef v_extention = NAMVAR(s_svs8f3e0c0c, ".tpl"), CVarRef v_force_compile = false_varNR, CVarRef v_time_limit = NAMVAR(s_svif01bca90, 0LL), CVarRef v_max_errors = null_variant);
  public: int64 t_compileallconfig(CVarRef v_extention = NAMVAR(s_svs9ef80ccd, ".conf"), CVarRef v_force_compile = false_varNR, CVarRef v_time_limit = NAMVAR(s_svif01bca90, 0LL), CVarRef v_max_errors = null_variant);
  public: int64 t_clearcompiledtemplate(CVarRef v_resource_name = null_variant, CVarRef v_compile_id = null_variant, CVarRef v_exp_time = null_variant);
  public: static Variant tt_gettags(p_Smarty_Internal_Template v_template);
  public: static Variant t_gettags(CVarRef v_template);
  public: bool t_testinstall();
  DECLARE_METHOD_INVOKE_HELPERS(compileallconfig);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(testinstall);
  DECLARE_METHOD_INVOKE_HELPERS(gettags);
  DECLARE_METHOD_INVOKE_HELPERS(compilealltemplates);
  DECLARE_METHOD_INVOKE_HELPERS(clearcompiledtemplate);
};
ObjectData *coo_Smarty_Internal_Utility() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Utility_hf964a548__
