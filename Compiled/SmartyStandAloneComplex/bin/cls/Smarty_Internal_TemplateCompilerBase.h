
#ifndef __GENERATED_cls_Smarty_Internal_TemplateCompilerBase_hcdb69f8c__
#define __GENERATED_cls_Smarty_Internal_TemplateCompilerBase_hcdb69f8c__

#include <cls/Smarty_Internal_TemplateCompilerBase.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_TemplateCompilerBase);
extern const ObjectStaticCallbacks cw_Smarty_Internal_TemplateCompilerBase;
class c_Smarty_Internal_TemplateCompilerBase : public ObjectData {
  public:

  // Properties
  Variant m_nocache_hash;
  Variant m_suppressNocacheProcessing;
  Variant m__tag_stack;
  Variant m_template;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Smarty_Internal_TemplateCompilerBase() : m_nocache_hash(Variant::nullInit), m_template(Variant::nullInit) {}
  void init();
  public: void t___construct();
  public: c_Smarty_Internal_TemplateCompilerBase *create();
  public: Variant t_compiletemplate(Variant v_template);
  public: Variant t_compiletag(CVarRef v_tag, Variant v_args, CVarRef v_parameter = s_sva00000000);
  public: Variant t_calltagcompiler(CVarRef v_tag, CVarRef v_args, CVarRef v_param1 = null_variant, CVarRef v_param2 = null_variant, CVarRef v_param3 = null_variant);
  public: Variant t_getplugin(CVarRef v_plugin_name, CVarRef v_type);
  public: Variant t_processnocachecode(CVarRef v_content, CVarRef v_is_code);
  public: void t_trigger_template_error(CVarRef v_args = null_variant, Variant v_line = null);
  DECLARE_METHOD_INVOKE_HELPERS(processnocachecode);
  DECLARE_METHOD_INVOKE_HELPERS(compiletemplate);
  DECLARE_METHOD_INVOKE_HELPERS(getplugin);
  DECLARE_METHOD_INVOKE_HELPERS(compiletag);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(trigger_template_error);
  DECLARE_METHOD_INVOKE_HELPERS(calltagcompiler);
};
ObjectData *coo_Smarty_Internal_TemplateCompilerBase() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_TemplateCompilerBase_hcdb69f8c__
