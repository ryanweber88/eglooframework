
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Ldelim_h7b2b6449__
#define __GENERATED_cls_Smarty_Internal_Compile_Ldelim_h7b2b6449__

#include <cls/Smarty_Internal_Compile_Ldelim.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_ldelim.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Ldelim);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Ldelim;
class c_Smarty_Internal_Compile_Ldelim : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Ldelim, Smarty_Internal_Compile_Ldelim, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Ldelim() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Ldelim_h7b2b6449__
