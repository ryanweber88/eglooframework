
#ifndef __GENERATED_cls__smarty_code_h0d1ddb56__
#define __GENERATED_cls__smarty_code_h0d1ddb56__

#include <cls/_smarty_code.fw.h>
#include <cls/_smarty_parsetree.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 49 */
FORWARD_DECLARE_CLASS(_smarty_code);
extern const ObjectStaticCallbacks cw__smarty_code;
class c__smarty_code : public c__smarty_parsetree {
  public:

  // Properties
  Variant m_parser;
  Variant m_data;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(_smarty_code, _smarty_code, _smarty_parsetree)
  static const ClassPropTable os_prop_table;
  c__smarty_code() : m_parser(Variant::nullInit), m_data(Variant::nullInit) {}
  public: void t___construct(Variant v_parser, Variant v_data);
  public: c__smarty_code *create(CVarRef v_parser, CVarRef v_data);
  public: virtual Variant t_to_smarty_php();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_code() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_code_h0d1ddb56__
