
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Include_Php_hb0cd6735__
#define __GENERATED_cls_Smarty_Internal_Compile_Include_Php_hb0cd6735__

#include <cls/Smarty_Internal_Compile_Include_Php.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_include_php.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Include_Php);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Include_Php;
class c_Smarty_Internal_Compile_Include_Php : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Include_Php, Smarty_Internal_Compile_Include_Php, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: Variant t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Include_Php() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Include_Php_hb0cd6735__
