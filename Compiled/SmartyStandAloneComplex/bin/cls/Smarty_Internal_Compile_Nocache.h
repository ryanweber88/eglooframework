
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Nocache_hdaf23de8__
#define __GENERATED_cls_Smarty_Internal_Compile_Nocache_hdaf23de8__

#include <cls/Smarty_Internal_Compile_Nocache.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_nocache.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Nocache);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Nocache;
class c_Smarty_Internal_Compile_Nocache : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Nocache, Smarty_Internal_Compile_Nocache, Smarty_Internal_CompileBase)
  public: bool t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Nocache() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Nocache_hdaf23de8__
