
#ifndef __GENERATED_cls_Smarty_Internal_Resource_String_hebd7270c__
#define __GENERATED_cls_Smarty_Internal_Resource_String_hebd7270c__

#include <cls/Smarty_Internal_Resource_String.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Resource_String);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_String;
class c_Smarty_Internal_Resource_String : public ObjectData {
  public:

  // Properties
  Variant m_compiler_class;
  Variant m_template_lexer_class;
  Variant m_template_parser_class;
  Variant m_usesCompiler;
  Variant m_isEvaluated;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Resource_String *create(CVarRef v_smarty);
  public: bool t_isexisting(CVarRef v_template);
  public: String t_gettemplatefilepath(Variant v__template);
  public: Variant t_gettemplatetimestamp(CVarRef v__template);
  public: int64 t_gettemplatetimestamptypename(CVarRef v__resource_type, CVarRef v__resource_name);
  public: bool t_gettemplatesource(Variant v__template);
  public: String t_getcompiledfilepath(CVarRef v__template);
  DECLARE_METHOD_INVOKE_HELPERS(getcompiledfilepath);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatesource);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatetimestamp);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatefilepath);
  DECLARE_METHOD_INVOKE_HELPERS(isexisting);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatetimestamptypename);
};
ObjectData *coo_Smarty_Internal_Resource_String() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Resource_String_hebd7270c__
