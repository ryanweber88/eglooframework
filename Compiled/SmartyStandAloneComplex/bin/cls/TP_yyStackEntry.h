
#ifndef __GENERATED_cls_TP_yyStackEntry_h904cac2a__
#define __GENERATED_cls_TP_yyStackEntry_h904cac2a__

#include <cls/TP_yyStackEntry.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 76 */
FORWARD_DECLARE_CLASS(TP_yyStackEntry);
extern const ObjectStaticCallbacks cw_TP_yyStackEntry;
class c_TP_yyStackEntry : public ObjectData {
  public:

  // Properties
  Variant m_stateno;
  Variant m_major;
  Variant m_minor;

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(TP_yyStackEntry, TP_yyStackEntry)

  // DECLARE_STATIC_PROP_OPS
  public:

  // DECLARE_COMMON_INVOKE
  static const int s_call_info_table = 0;
  static const int s_call_info_index = 0;

  public:
  static const ClassPropTable os_prop_table;
  c_TP_yyStackEntry() : m_stateno(Variant::nullInit), m_major(Variant::nullInit), m_minor(Variant::nullInit) {}
};
ObjectData *coo_TP_yyStackEntry() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_TP_yyStackEntry_h904cac2a__
