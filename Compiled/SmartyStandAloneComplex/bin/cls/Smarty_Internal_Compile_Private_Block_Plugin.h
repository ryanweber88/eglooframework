
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Private_Block_Plugin_h70fea10a__
#define __GENERATED_cls_Smarty_Internal_Compile_Private_Block_Plugin_h70fea10a__

#include <cls/Smarty_Internal_Compile_Private_Block_Plugin.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_block_plugin.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Private_Block_Plugin);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Block_Plugin;
class c_Smarty_Internal_Compile_Private_Block_Plugin : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Private_Block_Plugin, Smarty_Internal_Compile_Private_Block_Plugin, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag, CVarRef v_function);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Private_Block_Plugin() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Private_Block_Plugin_h70fea10a__
