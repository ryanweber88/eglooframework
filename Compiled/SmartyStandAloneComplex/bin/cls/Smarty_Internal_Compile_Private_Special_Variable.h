
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Private_Special_Variable_h4206f6a4__
#define __GENERATED_cls_Smarty_Internal_Compile_Private_Special_Variable_h4206f6a4__

#include <cls/Smarty_Internal_Compile_Private_Special_Variable.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_special_variable.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Private_Special_Variable);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Special_Variable;
class c_Smarty_Internal_Compile_Private_Special_Variable : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Private_Special_Variable, Smarty_Internal_Compile_Private_Special_Variable, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Private_Special_Variable() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Private_Special_Variable_h4206f6a4__
