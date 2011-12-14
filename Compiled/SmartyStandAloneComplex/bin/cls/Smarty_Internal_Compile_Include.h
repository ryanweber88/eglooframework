
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Include_h3a3e2d38__
#define __GENERATED_cls_Smarty_Internal_Compile_Include_h3a3e2d38__

#include <cls/Smarty_Internal_Compile_Include.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_include.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Include);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Include;
class c_Smarty_Internal_Compile_Include : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Include, Smarty_Internal_Compile_Include, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: Variant t_compile(CVarRef v_args, Variant v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Include() NEVER_INLINE;
extern const int64 q_Smarty_Internal_Compile_Include___CACHING_NOCACHE_CODE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Include_h3a3e2d38__
