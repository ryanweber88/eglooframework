
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Eval_h964755b2__
#define __GENERATED_cls_Smarty_Internal_Compile_Eval_h964755b2__

#include <cls/Smarty_Internal_Compile_Eval.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_eval.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Eval);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Eval;
class c_Smarty_Internal_Compile_Eval : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Eval, Smarty_Internal_Compile_Eval, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Eval() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Eval_h964755b2__
