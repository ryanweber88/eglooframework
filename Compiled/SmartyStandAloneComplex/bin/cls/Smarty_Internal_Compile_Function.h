
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Function_h87f9fc21__
#define __GENERATED_cls_Smarty_Internal_Compile_Function_h87f9fc21__

#include <cls/Smarty_Internal_Compile_Function.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_function.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Function);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Function;
class c_Smarty_Internal_Compile_Function : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Function, Smarty_Internal_Compile_Function, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: bool t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Function() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Function_h87f9fc21__
