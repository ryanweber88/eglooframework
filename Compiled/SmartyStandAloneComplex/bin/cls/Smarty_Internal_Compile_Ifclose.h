
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Ifclose_h91677e72__
#define __GENERATED_cls_Smarty_Internal_Compile_Ifclose_h91677e72__

#include <cls/Smarty_Internal_Compile_Ifclose.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 156 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Ifclose);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Ifclose;
class c_Smarty_Internal_Compile_Ifclose : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Ifclose, Smarty_Internal_Compile_Ifclose, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Ifclose() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Ifclose_h91677e72__
