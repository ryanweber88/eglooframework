
#ifndef __GENERATED_cls__smarty_linebreak_h7e2efee7__
#define __GENERATED_cls__smarty_linebreak_h7e2efee7__

#include <cls/_smarty_linebreak.fw.h>
#include <cls/_smarty_parsetree.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 222 */
FORWARD_DECLARE_CLASS(_smarty_linebreak);
extern const ObjectStaticCallbacks cw__smarty_linebreak;
class c__smarty_linebreak : public c__smarty_parsetree {
  public:

  // Properties
  Variant m_data;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(_smarty_linebreak, _smarty_linebreak, _smarty_parsetree)
  static const ClassPropTable os_prop_table;
  c__smarty_linebreak() : m_data(Variant::nullInit) {}
  public: void t___construct(Variant v_parser, Variant v_data);
  public: c__smarty_linebreak *create(CVarRef v_parser, CVarRef v_data);
  public: virtual Variant t_to_smarty_php();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_linebreak() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_linebreak_h7e2efee7__
