
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Functionclose_h60bfe527__
#define __GENERATED_cls_Smarty_Internal_Compile_Functionclose_h60bfe527__

#include <cls/Smarty_Internal_Compile_Functionclose.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_function.php line 74 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Functionclose);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Functionclose;
class c_Smarty_Internal_Compile_Functionclose : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Functionclose, Smarty_Internal_Compile_Functionclose, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Functionclose() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Functionclose_h60bfe527__
