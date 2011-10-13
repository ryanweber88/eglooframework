
#ifndef __GENERATED_cls__smarty_parsetree_h2fb39f2d__
#define __GENERATED_cls__smarty_parsetree_h2fb39f2d__

#include <cls/_smarty_parsetree.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 13 */
FORWARD_DECLARE_CLASS(_smarty_parsetree);
extern const ObjectStaticCallbacks cw__smarty_parsetree;
class c__smarty_parsetree : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(_smarty_parsetree, _smarty_parsetree)

  // DECLARE_STATIC_PROP_OPS
  public:

  // DECLARE_COMMON_INVOKE
  static const int s_call_info_table = 0;
  static const int s_call_info_index = 0;

  public:
  public: virtual Variant t_to_smarty_php() { return throw_fatal("pure virtual");}
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_parsetree() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_parsetree_h2fb39f2d__
