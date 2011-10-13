
#ifndef __GENERATED_cls_Smarty_Variable_hdbe02344__
#define __GENERATED_cls_Smarty_Variable_hdbe02344__

#include <cls/Smarty_Variable.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 437 */
FORWARD_DECLARE_CLASS(Smarty_Variable);
extern const ObjectStaticCallbacks cw_Smarty_Variable;
class c_Smarty_Variable : public ObjectData {
  public:

  // Properties
  Variant m_value;
  Variant m_nocache;
  Variant m_scope;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Variable, Smarty_Variable, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Smarty_Variable() : m_value(Variant::nullInit), m_nocache(Variant::nullInit), m_scope(Variant::nullInit) {}
  public: void t___construct(Variant v_value = null, Variant v_nocache = false, Variant v_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)));
  public: c_Smarty_Variable *create(CVarRef v_value = null_variant, CVarRef v_nocache = false_varNR, CVarRef v_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)));
  public: String t___tostring();
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
};
ObjectData *coo_Smarty_Variable() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Variable_hdbe02344__
