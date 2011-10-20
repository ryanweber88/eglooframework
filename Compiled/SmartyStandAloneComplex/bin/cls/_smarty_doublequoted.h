
#ifndef __GENERATED_cls__smarty_doublequoted_h0d575f3f__
#define __GENERATED_cls__smarty_doublequoted_h0d575f3f__

#include <cls/_smarty_doublequoted.fw.h>
#include <cls/_smarty_parsetree.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 67 */
FORWARD_DECLARE_CLASS(_smarty_doublequoted);
extern const ObjectStaticCallbacks cw__smarty_doublequoted;
class c__smarty_doublequoted : public c__smarty_parsetree {
  public:

  // Properties
  Variant m_parser;
  Variant m_subtrees;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(_smarty_doublequoted, _smarty_doublequoted, _smarty_parsetree)
  static const ClassPropTable os_prop_table;
  c__smarty_doublequoted() : m_parser(Variant::nullInit) {}
  void init();
  public: void tt___construct(Variant v_parser, p__smarty_parsetree v_subtree);
  public: c__smarty_doublequoted *create(CVarRef v_parser, CVarRef v_subtree);
  public: void t___construct(CVarRef v_parser, CVarRef v_subtree);
  public: void tt_append_subtree(p__smarty_parsetree v_subtree);
  public: void t_append_subtree(CVarRef v_subtree);
  public: virtual Variant t_to_smarty_php();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(append_subtree);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_doublequoted() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_doublequoted_h0d575f3f__
