
#ifndef __GENERATED_cls_Smarty_Internal_Config_File_Compiler_ha2e121f3__
#define __GENERATED_cls_Smarty_Internal_Config_File_Compiler_ha2e121f3__

#include <cls/Smarty_Internal_Config_File_Compiler.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_config_file_compiler.php line 17 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Config_File_Compiler);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Config_File_Compiler;
class c_Smarty_Internal_Config_File_Compiler : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Config_File_Compiler, Smarty_Internal_Config_File_Compiler, ObjectData)
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Config_File_Compiler *create(CVarRef v_smarty);
  public: Variant t_compilesource(Variant v_config);
  public: void t_trigger_config_file_error(CVarRef v_args = null_variant);
  DECLARE_METHOD_INVOKE_HELPERS(compilesource);
  DECLARE_METHOD_INVOKE_HELPERS(trigger_config_file_error);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
};
ObjectData *coo_Smarty_Internal_Config_File_Compiler() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Config_File_Compiler_ha2e121f3__
