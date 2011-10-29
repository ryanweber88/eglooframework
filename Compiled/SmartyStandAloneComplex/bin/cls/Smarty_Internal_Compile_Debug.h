
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Debug_h2ef254e2__
#define __GENERATED_cls_Smarty_Internal_Compile_Debug_h2ef254e2__

#include <cls/Smarty_Internal_Compile_Debug.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_debug.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Debug);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Debug;
class c_Smarty_Internal_Compile_Debug : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Debug, Smarty_Internal_Compile_Debug, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Debug() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Debug_h2ef254e2__
