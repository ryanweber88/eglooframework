
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Forelse_h7b133dce__
#define __GENERATED_cls_Smarty_Internal_Compile_Forelse_h7b133dce__

#include <cls/Smarty_Internal_Compile_Forelse.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 92 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Forelse);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Forelse;
class c_Smarty_Internal_Compile_Forelse : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Forelse, Smarty_Internal_Compile_Forelse, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Forelse() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Forelse_h7b133dce__
