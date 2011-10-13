
#ifndef __GENERATED_cls__smarty_text_h9f23b7e5__
#define __GENERATED_cls__smarty_text_h9f23b7e5__

#include <cls/_smarty_text.fw.h>
#include <cls/_smarty_parsetree.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 205 */
FORWARD_DECLARE_CLASS(_smarty_text);
extern const ObjectStaticCallbacks cw__smarty_text;
class c__smarty_text : public c__smarty_parsetree {
  public:

  // Properties
  Variant m_data;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(_smarty_text, _smarty_text, _smarty_parsetree)
  static const ClassPropTable os_prop_table;
  c__smarty_text() : m_data(Variant::nullInit) {}
  public: void t___construct(Variant v_parser, Variant v_data);
  public: c__smarty_text *create(CVarRef v_parser, CVarRef v_data);
  public: virtual Variant t_to_smarty_php();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_text() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_text_h9f23b7e5__
