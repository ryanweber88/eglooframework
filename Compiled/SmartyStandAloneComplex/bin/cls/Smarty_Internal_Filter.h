
#ifndef __GENERATED_cls_Smarty_Internal_Filter_h554651e0__
#define __GENERATED_cls_Smarty_Internal_Filter_h554651e0__

#include <cls/Smarty_Internal_Filter.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_filter.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Filter);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Filter;
class c_Smarty_Internal_Filter : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Filter, Smarty_Internal_Filter, ObjectData)
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Filter *create(CVarRef v_smarty);
  public: void t_registerfilter(CVarRef v_type, CVarRef v_callback);
  public: void t_unregisterfilter(CVarRef v_type, CVarRef v_callback);
  public: Variant t__get_filter_name(CVarRef v_function_name);
  public: Variant t_loadfilter(CVarRef v_type, CVarRef v_name);
  DECLARE_METHOD_INVOKE_HELPERS(unregisterfilter);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(registerfilter);
  DECLARE_METHOD_INVOKE_HELPERS(loadfilter);
  DECLARE_METHOD_INVOKE_HELPERS(_get_filter_name);
};
ObjectData *coo_Smarty_Internal_Filter() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Filter_h554651e0__
