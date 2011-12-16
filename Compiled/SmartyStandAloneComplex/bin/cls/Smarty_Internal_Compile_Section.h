
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Section_h49765a65__
#define __GENERATED_cls_Smarty_Internal_Compile_Section_h49765a65__

#include <cls/Smarty_Internal_Compile_Section.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Section);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Section;
class c_Smarty_Internal_Compile_Section : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Section, Smarty_Internal_Compile_Section, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Section() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Section_h49765a65__
