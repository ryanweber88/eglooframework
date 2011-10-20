
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Capture_h779bf6b6__
#define __GENERATED_cls_Smarty_Internal_Compile_Capture_h779bf6b6__

#include <cls/Smarty_Internal_Compile_Capture.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_capture.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Capture);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Capture;
class c_Smarty_Internal_Compile_Capture : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Capture, Smarty_Internal_Compile_Capture, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: String t_compile(CVarRef v_args, CVarRef v_compiler);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
};
ObjectData *coo_Smarty_Internal_Compile_Capture() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Capture_h779bf6b6__
