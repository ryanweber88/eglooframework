
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Sectionelse_h49a54718__
#define __GENERATED_cls_Smarty_Internal_Compile_Sectionelse_h49a54718__

#include <cls/Smarty_Internal_Compile_Sectionelse.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 121 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Sectionelse);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Sectionelse;
class c_Smarty_Internal_Compile_Sectionelse : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Sectionelse, Smarty_Internal_Compile_Sectionelse, Smarty_Internal_CompileBase)
  public: String t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Sectionelse() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Sectionelse_h49a54718__
