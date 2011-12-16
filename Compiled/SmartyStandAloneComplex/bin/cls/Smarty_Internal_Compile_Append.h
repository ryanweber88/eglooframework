
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Append_ha9815964__
#define __GENERATED_cls_Smarty_Internal_Compile_Append_ha9815964__

#include <cls/Smarty_Internal_Compile_Append.fw.h>
#include <cls/Smarty_Internal_Compile_Assign.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_append.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Append);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Append;
class c_Smarty_Internal_Compile_Append : public c_Smarty_Internal_Compile_Assign {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Append, Smarty_Internal_Compile_Append, Smarty_Internal_Compile_Assign)
  public: virtual Variant t_compile(Variant v_args, Variant v_compiler, Variant v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Append() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Append_ha9815964__
