
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Foreachclose_hd1574513__
#define __GENERATED_cls_Smarty_Internal_Compile_Foreachclose_hd1574513__

#include <cls/Smarty_Internal_Compile_Foreachclose.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 187 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Foreachclose);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreachclose;
class c_Smarty_Internal_Compile_Foreachclose : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Foreachclose, Smarty_Internal_Compile_Foreachclose, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Foreachclose() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Foreachclose_hd1574513__
