
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Private_Modifier_h4067fd45__
#define __GENERATED_cls_Smarty_Internal_Compile_Private_Modifier_h4067fd45__

#include <cls/Smarty_Internal_Compile_Private_Modifier.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_modifier.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Private_Modifier);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Modifier;
class c_Smarty_Internal_Compile_Private_Modifier : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Private_Modifier, Smarty_Internal_Compile_Private_Modifier, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Private_Modifier() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Private_Modifier_h4067fd45__
