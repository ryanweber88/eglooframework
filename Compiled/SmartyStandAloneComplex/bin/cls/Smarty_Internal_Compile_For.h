
#ifndef __GENERATED_cls_Smarty_Internal_Compile_For_h598efe9f__
#define __GENERATED_cls_Smarty_Internal_Compile_For_h598efe9f__

#include <cls/Smarty_Internal_Compile_For.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_For);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_For;
class c_Smarty_Internal_Compile_For : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_For, Smarty_Internal_Compile_For, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_For() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_For_h598efe9f__
