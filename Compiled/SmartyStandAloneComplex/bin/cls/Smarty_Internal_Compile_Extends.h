
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Extends_heb71316a__
#define __GENERATED_cls_Smarty_Internal_Compile_Extends_heb71316a__

#include <cls/Smarty_Internal_Compile_Extends.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_extends.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Extends);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Extends;
class c_Smarty_Internal_Compile_Extends : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Extends, Smarty_Internal_Compile_Extends, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, Variant v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Extends() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Extends_heb71316a__
