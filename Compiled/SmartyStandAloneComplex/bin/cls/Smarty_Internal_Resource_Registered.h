
#ifndef __GENERATED_cls_Smarty_Internal_Resource_Registered_hcdf220a3__
#define __GENERATED_cls_Smarty_Internal_Resource_Registered_hcdf220a3__

#include <cls/Smarty_Internal_Resource_Registered.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Resource_Registered);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Registered;
class c_Smarty_Internal_Resource_Registered : public ObjectData {
  public:

  // Properties
  Variant m_compiler_class;
  Variant m_template_lexer_class;
  Variant m_template_parser_class;
  Variant m_usesCompiler;
  Variant m_isEvaluated;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_template, Variant v_resource_type = null);
  public: c_Smarty_Internal_Resource_Registered *create(CVarRef v_template, CVarRef v_resource_type = null_variant);
  public: Variant t_isexisting(CVarRef v__template);
  public: String t_gettemplatefilepath(Variant v__template);
  public: Variant t_gettemplatetimestamp(CVarRef v__template);
  public: Variant t_gettemplatetimestamptypename(CVarRef v__resource_type, CVarRef v__resource_name);
  public: Variant t_gettemplatesource(Variant v__template);
  public: String t_getcompiledfilepath(CVarRef v__template);
  DECLARE_METHOD_INVOKE_HELPERS(getcompiledfilepath);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatesource);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatetimestamp);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatefilepath);
  DECLARE_METHOD_INVOKE_HELPERS(isexisting);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatetimestamptypename);
};
ObjectData *coo_Smarty_Internal_Resource_Registered() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Resource_Registered_hcdf220a3__
