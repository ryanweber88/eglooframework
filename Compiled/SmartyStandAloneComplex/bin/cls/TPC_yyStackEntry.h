
#ifndef __GENERATED_cls_TPC_yyStackEntry_h96f45621__
#define __GENERATED_cls_TPC_yyStackEntry_h96f45621__

#include <cls/TPC_yyStackEntry.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 76 */
FORWARD_DECLARE_CLASS(TPC_yyStackEntry);
extern const ObjectStaticCallbacks cw_TPC_yyStackEntry;
class c_TPC_yyStackEntry : public ObjectData {
  public:

  // Properties
  Variant m_stateno;
  Variant m_major;
  Variant m_minor;

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(TPC_yyStackEntry, TPC_yyStackEntry)

  // DECLARE_STATIC_PROP_OPS
  public:

  // DECLARE_COMMON_INVOKE
  static const int s_call_info_table = 0;
  static const int s_call_info_index = 0;

  public:
  static const ClassPropTable os_prop_table;
  c_TPC_yyStackEntry() : m_stateno(Variant::nullInit), m_major(Variant::nullInit), m_minor(Variant::nullInit) {}
};
ObjectData *coo_TPC_yyStackEntry() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_TPC_yyStackEntry_h96f45621__
