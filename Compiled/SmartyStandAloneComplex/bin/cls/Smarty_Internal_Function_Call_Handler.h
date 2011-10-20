
#ifndef __GENERATED_cls_Smarty_Internal_Function_Call_Handler_hc85e18b4__
#define __GENERATED_cls_Smarty_Internal_Function_Call_Handler_hc85e18b4__

#include <cls/Smarty_Internal_Function_Call_Handler.fw.h>
#include <cls/Smarty_Internal_Template.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_function_call_handler.php line 13 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Function_Call_Handler);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Function_Call_Handler;
class c_Smarty_Internal_Function_Call_Handler : public c_Smarty_Internal_Template {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Function_Call_Handler, Smarty_Internal_Function_Call_Handler, Smarty_Internal_Template)
  public: static void t_call(CVarRef v__name, Variant v__template, Variant v__params, CVarRef v__hash, CVarRef v__nocache);
  DECLARE_METHOD_INVOKE_HELPERS(call);
};
ObjectData *coo_Smarty_Internal_Function_Call_Handler() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Function_Call_Handler_hc85e18b4__
