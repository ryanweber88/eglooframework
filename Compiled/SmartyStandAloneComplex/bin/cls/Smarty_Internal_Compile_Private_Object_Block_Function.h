
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Private_Object_Block_Function_h693fb137__
#define __GENERATED_cls_Smarty_Internal_Compile_Private_Object_Block_Function_h693fb137__

#include <cls/Smarty_Internal_Compile_Private_Object_Block_Function.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_object_block_function.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Private_Object_Block_Function);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Object_Block_Function;
class c_Smarty_Internal_Compile_Private_Object_Block_Function : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Private_Object_Block_Function, Smarty_Internal_Compile_Private_Object_Block_Function, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag, CVarRef v_methode);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Private_Object_Block_Function() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Private_Object_Block_Function_h693fb137__
