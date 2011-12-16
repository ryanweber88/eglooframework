
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Assign_h0c9a6590__
#define __GENERATED_cls_Smarty_Internal_Compile_Assign_h0c9a6590__

#include <cls/Smarty_Internal_Compile_Assign.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_assign.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Assign);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Assign;
class c_Smarty_Internal_Compile_Assign : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Assign, Smarty_Internal_Compile_Assign, Smarty_Internal_CompileBase)
  public: virtual Variant t_compile(Variant v_args, Variant v_compiler, Variant v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Assign() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Assign_h0c9a6590__
