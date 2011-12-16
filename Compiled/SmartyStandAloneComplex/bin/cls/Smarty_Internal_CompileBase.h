
#ifndef __GENERATED_cls_Smarty_Internal_CompileBase_h94188b70__
#define __GENERATED_cls_Smarty_Internal_CompileBase_h94188b70__

#include <cls/Smarty_Internal_CompileBase.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compilebase.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_CompileBase);
extern const ObjectStaticCallbacks cw_Smarty_Internal_CompileBase;
class c_Smarty_Internal_CompileBase : public ObjectData {
  public:

  // Properties
  Variant m_required_attributes;
  Variant m_optional_attributes;
  Variant m_shorttag_order;
  Variant m_option_flags;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_CompileBase, Smarty_Internal_CompileBase, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: Array t__get_attributes(CVarRef v_attributes);
  public: void t__open_tag(CVarRef v_open_tag, CVarRef v_data = null_variant);
  public: Variant t__close_tag(CVarRef v_expected_tag);
  DECLARE_METHOD_INVOKE_HELPERS(_open_tag);
  DECLARE_METHOD_INVOKE_HELPERS(_get_attributes);
  DECLARE_METHOD_INVOKE_HELPERS(_close_tag);
};
ObjectData *coo_Smarty_Internal_CompileBase() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_CompileBase_h94188b70__
