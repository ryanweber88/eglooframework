
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Private_Print_Expression_h5e2139a4__
#define __GENERATED_cls_Smarty_Internal_Compile_Private_Print_Expression_h5e2139a4__

#include <cls/Smarty_Internal_Compile_Private_Print_Expression.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_print_expression.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Private_Print_Expression);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Print_Expression;
class c_Smarty_Internal_Compile_Private_Print_Expression : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Private_Print_Expression, Smarty_Internal_Compile_Private_Print_Expression, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: Variant t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Private_Print_Expression() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Private_Print_Expression_h5e2139a4__
