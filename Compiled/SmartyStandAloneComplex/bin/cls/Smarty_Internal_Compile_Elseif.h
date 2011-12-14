
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Elseif_hf19be516__
#define __GENERATED_cls_Smarty_Internal_Compile_Elseif_hf19be516__

#include <cls/Smarty_Internal_Compile_Elseif.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 83 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Elseif);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Elseif;
class c_Smarty_Internal_Compile_Elseif : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Elseif, Smarty_Internal_Compile_Elseif, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Elseif() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Elseif_hf19be516__
