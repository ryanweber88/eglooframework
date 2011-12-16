
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Foreachelse_hee7c476c__
#define __GENERATED_cls_Smarty_Internal_Compile_Foreachelse_hee7c476c__

#include <cls/Smarty_Internal_Compile_Foreachelse.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 162 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Foreachelse);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreachelse;
class c_Smarty_Internal_Compile_Foreachelse : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Foreachelse, Smarty_Internal_Compile_Foreachelse, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Foreachelse() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Foreachelse_hee7c476c__
