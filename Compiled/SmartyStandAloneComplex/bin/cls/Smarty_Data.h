
#ifndef __GENERATED_cls_Smarty_Data_he007e0eb__
#define __GENERATED_cls_Smarty_Data_he007e0eb__

#include <cls/Smarty_Data.fw.h>
#include <cls/Smarty_Internal_Data.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 404 */
FORWARD_DECLARE_CLASS(Smarty_Data);
extern const ObjectStaticCallbacks cw_Smarty_Data;
class c_Smarty_Data : public c_Smarty_Internal_Data {
  public:

  // Properties
  Variant m_tpl_vars;
  Variant m_parent;
  Variant m_config_vars;
  Variant m_smarty;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Data, Smarty_Data, Smarty_Internal_Data)
  static const ClassPropTable os_prop_table;
  c_Smarty_Data() : m_parent(Variant::nullInit), m_smarty(Variant::nullInit) {}
  void init();
  public: void t___construct(Variant v__parent = null, Variant v_smarty = null);
  public: c_Smarty_Data *create(CVarRef v__parent = null_variant, CVarRef v_smarty = null_variant);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
};
ObjectData *coo_Smarty_Data() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Data_he007e0eb__
