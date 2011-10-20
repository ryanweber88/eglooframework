
#ifndef __GENERATED_cls_Smarty_Internal_Data_h872badec__
#define __GENERATED_cls_Smarty_Internal_Data_h872badec__

#include <cls/Smarty_Internal_Data.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Data);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Data;
class c_Smarty_Internal_Data : public ObjectData {
  public:

  // Properties
  Variant m_template_class;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Data, Smarty_Internal_Data, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t_assign(CVarRef v_tpl_var, CVarRef v_value = null_variant, CVarRef v_nocache = false_varNR);
  public: void t_assignglobal(CVarRef v_varname, CVarRef v_value = null_variant, CVarRef v_nocache = false_varNR);
  public: void t_assignbyref(CVarRef v_tpl_var, VRefParam rv_value, CVarRef v_nocache = false_varNR);
  public: void t_assign_by_ref(CVarRef v_tpl_var, VRefParam rv_value);
  public: void t_append(CVarRef v_tpl_var, CVarRef v_value = null_variant, CVarRef v_merge = false_varNR, CVarRef v_nocache = false_varNR);
  public: void t_appendbyref(CVarRef v_tpl_var, VRefParam rv_value, CVarRef v_merge = false_varNR);
  public: void t_append_by_ref(CVarRef v_tpl_var, VRefParam rv_value, CVarRef v_merge = false_varNR);
  public: Variant t_gettemplatevars(CVarRef v_varname = null_variant, Variant v__ptr = null, CVarRef v_search_parents = true_varNR);
  public: void t_clearassign(CVarRef v_tpl_var);
  public: void t_clearallassign();
  public: void t_configload(CVarRef v_config_file, CVarRef v_sections = null_variant);
  public: Variant t_getvariable(Variant v__variable, Variant v__ptr = null, Variant v_search_parents = true, Variant v_error_enable = true);
  public: Variant t_getconfigvariable(Variant v__variable);
  public: Variant t_getstreamvariable(CVarRef v_variable);
  public: Variant t_getconfigvars(CVarRef v_varname = null_variant, CVarRef v_search_parents = true_varNR);
  public: void t_clearconfig(CVarRef v_varname = null_variant);
  DECLARE_METHOD_INVOKE_HELPERS(configload);
  DECLARE_METHOD_INVOKE_HELPERS(assign_by_ref);
  DECLARE_METHOD_INVOKE_HELPERS(append);
  DECLARE_METHOD_INVOKE_HELPERS(getconfigvars);
  DECLARE_METHOD_INVOKE_HELPERS(clearconfig);
  DECLARE_METHOD_INVOKE_HELPERS(getvariable);
  DECLARE_METHOD_INVOKE_HELPERS(assign);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(clearallassign);
  DECLARE_METHOD_INVOKE_HELPERS(clearassign);
  DECLARE_METHOD_INVOKE_HELPERS(assignglobal);
  DECLARE_METHOD_INVOKE_HELPERS(getconfigvariable);
  DECLARE_METHOD_INVOKE_HELPERS(assignbyref);
  DECLARE_METHOD_INVOKE_HELPERS(getstreamvariable);
  DECLARE_METHOD_INVOKE_HELPERS(append_by_ref);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatevars);
  DECLARE_METHOD_INVOKE_HELPERS(appendbyref);
};
ObjectData *coo_Smarty_Internal_Data() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Data_h872badec__
