
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Insert_h9cc43b3f__
#define __GENERATED_cls_Smarty_Internal_Compile_Insert_h9cc43b3f__

#include <cls/Smarty_Internal_Compile_Insert.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_insert.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Insert);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Insert;
class c_Smarty_Internal_Compile_Insert : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Insert, Smarty_Internal_Compile_Insert, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: Variant t_compile(Variant v_args, Variant v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Insert() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Insert_h9cc43b3f__
