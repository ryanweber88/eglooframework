
#ifndef __GENERATED_cls__smarty_tag_h94dfc39b__
#define __GENERATED_cls__smarty_tag_h94dfc39b__

#include <cls/_smarty_tag.fw.h>
#include <cls/_smarty_parsetree.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 20 */
FORWARD_DECLARE_CLASS(_smarty_tag);
extern const ObjectStaticCallbacks cw__smarty_tag;
class c__smarty_tag : public c__smarty_parsetree {
  public:

  // Properties
  Variant m_parser;
  Variant m_data;
  Variant m_saved_block_nesting;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(_smarty_tag, _smarty_tag, _smarty_parsetree)
  static const ClassPropTable os_prop_table;
  c__smarty_tag() : m_parser(Variant::nullInit), m_data(Variant::nullInit), m_saved_block_nesting(Variant::nullInit) {}
  public: void t___construct(Variant v_parser, Variant v_data);
  public: c__smarty_tag *create(CVarRef v_parser, CVarRef v_data);
  public: virtual Variant t_to_smarty_php();
  public: Variant t_assign_to_var();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(assign_to_var);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_tag() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_tag_h94dfc39b__
