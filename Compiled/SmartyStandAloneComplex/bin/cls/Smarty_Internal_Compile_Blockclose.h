
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Blockclose_h218ef0b7__
#define __GENERATED_cls_Smarty_Internal_Compile_Blockclose_h218ef0b7__

#include <cls/Smarty_Internal_Compile_Blockclose.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 154 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Blockclose);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Blockclose;
class c_Smarty_Internal_Compile_Blockclose : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Blockclose, Smarty_Internal_Compile_Blockclose, Smarty_Internal_CompileBase)
  public: Variant t_compile(CVarRef v_args, Variant v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Blockclose() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Blockclose_h218ef0b7__
