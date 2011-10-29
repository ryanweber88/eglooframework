
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Config_Load_hf1126093__
#define __GENERATED_cls_Smarty_Internal_Compile_Config_Load_hf1126093__

#include <cls/Smarty_Internal_Compile_Config_Load.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_config_load.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Config_Load);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Config_Load;
class c_Smarty_Internal_Compile_Config_Load : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Config_Load, Smarty_Internal_Compile_Config_Load, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Config_Load() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Config_Load_hf1126093__
