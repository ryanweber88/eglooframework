
#ifndef __GENERATED_cls_Smarty_Internal_SmartyTemplateCompiler_h404d3771__
#define __GENERATED_cls_Smarty_Internal_SmartyTemplateCompiler_h404d3771__

#include <cls/Smarty_Internal_SmartyTemplateCompiler.fw.h>
#include <cls/Smarty_Internal_TemplateCompilerBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.php line 18 */
FORWARD_DECLARE_CLASS(Smarty_Internal_SmartyTemplateCompiler);
extern const ObjectStaticCallbacks cw_Smarty_Internal_SmartyTemplateCompiler;
class c_Smarty_Internal_SmartyTemplateCompiler : public c_Smarty_Internal_TemplateCompilerBase {
  public:

  // Properties
  Variant m_local_var;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_SmartyTemplateCompiler, Smarty_Internal_SmartyTemplateCompiler, Smarty_Internal_TemplateCompilerBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_lexer_class, Variant v_parser_class, Variant v_smarty);
  public: c_Smarty_Internal_SmartyTemplateCompiler *create(CVarRef v_lexer_class, CVarRef v_parser_class, CVarRef v_smarty);
  public: Variant t_docompile(Variant v__content);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(docompile);
};
ObjectData *coo_Smarty_Internal_SmartyTemplateCompiler() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_SmartyTemplateCompiler_h404d3771__
