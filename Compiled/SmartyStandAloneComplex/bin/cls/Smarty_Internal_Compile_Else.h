
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Else_h0e1bd8b6__
#define __GENERATED_cls_Smarty_Internal_Compile_Else_h0e1bd8b6__

#include <cls/Smarty_Internal_Compile_Else.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 61 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Else);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Else;
class c_Smarty_Internal_Compile_Else : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Else, Smarty_Internal_Compile_Else, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Else() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Else_h0e1bd8b6__
