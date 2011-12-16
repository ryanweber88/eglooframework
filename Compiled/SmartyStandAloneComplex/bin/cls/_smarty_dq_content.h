
#ifndef __GENERATED_cls__smarty_dq_content_h83f8f911__
#define __GENERATED_cls__smarty_dq_content_h83f8f911__

#include <cls/_smarty_dq_content.fw.h>
#include <cls/_smarty_parsetree.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 124 */
FORWARD_DECLARE_CLASS(_smarty_dq_content);
extern const ObjectStaticCallbacks cw__smarty_dq_content;
class c__smarty_dq_content : public c__smarty_parsetree {
  public:

  // Properties
  Variant m_data;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(_smarty_dq_content, _smarty_dq_content, _smarty_parsetree)
  static const ClassPropTable os_prop_table;
  c__smarty_dq_content() : m_data(Variant::nullInit) {}
  public: void t___construct(Variant v_parser, Variant v_data);
  public: c__smarty_dq_content *create(CVarRef v_parser, CVarRef v_data);
  public: virtual Variant t_to_smarty_php();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_dq_content() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_dq_content_h83f8f911__
