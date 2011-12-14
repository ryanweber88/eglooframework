
#ifndef __GENERATED_cls_Smarty_Internal_Filter_Handler_h866fcdc6__
#define __GENERATED_cls_Smarty_Internal_Filter_Handler_h866fcdc6__

#include <cls/Smarty_Internal_Filter_Handler.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_filter_handler.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Filter_Handler);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Filter_Handler;
class c_Smarty_Internal_Filter_Handler : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Filter_Handler, Smarty_Internal_Filter_Handler, ObjectData)
  public: static Variant t_runfilter(CVarRef v_type, CVarRef v_content, Variant v_template, CVarRef v_flag = null_variant);
  DECLARE_METHOD_INVOKE_HELPERS(runfilter);
};
ObjectData *coo_Smarty_Internal_Filter_Handler() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Filter_Handler_h866fcdc6__
