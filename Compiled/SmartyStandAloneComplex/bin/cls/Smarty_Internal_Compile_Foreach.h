
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Foreach_h2d3b27c0__
#define __GENERATED_cls_Smarty_Internal_Compile_Foreach_h2d3b27c0__

#include <cls/Smarty_Internal_Compile_Foreach.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Foreach);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreach;
class c_Smarty_Internal_Compile_Foreach : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Foreach, Smarty_Internal_Compile_Foreach, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Foreach() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Foreach_h2d3b27c0__
