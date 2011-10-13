
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Break_h369bb7ce__
#define __GENERATED_cls_Smarty_Internal_Compile_Break_h369bb7ce__

#include <cls/Smarty_Internal_Compile_Break.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_break.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Break);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Break;
class c_Smarty_Internal_Compile_Break : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Break, Smarty_Internal_Compile_Break, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Break() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Break_h369bb7ce__
