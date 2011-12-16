
#ifndef __GENERATED_cls_TP_yyToken_h91a4f041__
#define __GENERATED_cls_TP_yyToken_h91a4f041__

#include <cls/TP_yyToken.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 12 */
FORWARD_DECLARE_CLASS(TP_yyToken);
extern const ObjectStaticCallbacks cw_TP_yyToken;
class c_TP_yyToken : public ObjectData {
  public:

  // Properties
  Variant m_string;
  Variant m_metadata;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(TP_yyToken, TP_yyToken, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_s, Variant v_m = s_sa00000000);
  public: c_TP_yyToken *create(CVarRef v_s, CVarRef v_m = s_sva00000000);
  public: String t___tostring();
  public: bool t_offsetexists(CVarRef v_offset);
  public: Variant t_offsetget(Variant v_offset);
  public: virtual Variant &___offsetget_lval(Variant v_offset);
  public: Variant t_offsetset(Variant v_offset, CVarRef v_value);
  public: Variant t_offsetunset(CVarRef v_offset);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(offsetexists);
  DECLARE_METHOD_INVOKE_HELPERS(offsetget);
  DECLARE_METHOD_INVOKE_HELPERS(offsetunset);
  DECLARE_METHOD_INVOKE_HELPERS(offsetset);
};
ObjectData *coo_TP_yyToken() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_TP_yyToken_h91a4f041__
