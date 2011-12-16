
#ifndef __GENERATED_cls_Smarty_Internal_Compile_If_hcb2f34cd__
#define __GENERATED_cls_Smarty_Internal_Compile_If_hcb2f34cd__

#include <cls/Smarty_Internal_Compile_If.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_If);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_If;
class c_Smarty_Internal_Compile_If : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_If, Smarty_Internal_Compile_If, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_If() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_If_hcb2f34cd__
