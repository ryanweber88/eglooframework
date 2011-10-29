
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Forclose_h6c088a4b__
#define __GENERATED_cls_Smarty_Internal_Compile_Forclose_h6c088a4b__

#include <cls/Smarty_Internal_Compile_Forclose.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 116 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Forclose);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Forclose;
class c_Smarty_Internal_Compile_Forclose : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Forclose, Smarty_Internal_Compile_Forclose, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Forclose() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Forclose_h6c088a4b__
