
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Call_h86a35b9d__
#define __GENERATED_cls_Smarty_Internal_Compile_Call_h86a35b9d__

#include <cls/Smarty_Internal_Compile_Call.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_call.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Call);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Call;
class c_Smarty_Internal_Compile_Call : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Call, Smarty_Internal_Compile_Call, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Call() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Call_h86a35b9d__
