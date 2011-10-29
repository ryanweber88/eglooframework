
#ifndef __GENERATED_cls_Smarty_Internal_Configfilelexer_h4d544d8d__
#define __GENERATED_cls_Smarty_Internal_Configfilelexer_h4d544d8d__

#include <cls/Smarty_Internal_Configfilelexer.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 13 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Configfilelexer);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Configfilelexer;
class c_Smarty_Internal_Configfilelexer : public ObjectData {
  public:

  // Properties
  Variant m_data;
  Variant m_counter;
  Variant m_token;
  Variant m_value;
  Variant m_node;
  Variant m_line;
  int64 m_state;
  Variant m_smarty_token_names;
  Variant m__yy_state;
  Variant m__yy_stack;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Smarty_Internal_Configfilelexer() : m_data(Variant::nullInit), m_counter(Variant::nullInit), m_token(Variant::nullInit), m_value(Variant::nullInit), m_node(Variant::nullInit), m_line(Variant::nullInit), m_state(1LL) {}
  void init();
  public: void t___construct(Variant v_data, Variant v_smarty);
  public: c_Smarty_Internal_Configfilelexer *create(CVarRef v_data, CVarRef v_smarty);
  public: static Variant t_instance(CVarRef v_new_instance = null_variant);
  public: Variant t_yylex();
  public: void t_yypushstate(CVarRef v_state);
  public: void t_yypopstate();
  public: void t_yybegin(CVarRef v_state);
  public: Variant t_yylex1();
  public: void t_yy_r1_1(CVarRef v_yy_subpatterns);
  public: void t_yy_r1_2(CVarRef v_yy_subpatterns);
  public: void t_yy_r1_3(CVarRef v_yy_subpatterns);
  public: void t_yy_r1_4(CVarRef v_yy_subpatterns);
  public: bool t_yy_r1_5(CVarRef v_yy_subpatterns);
  public: void t_yy_r1_6(CVarRef v_yy_subpatterns);
  public: void t_yy_r1_7(CVarRef v_yy_subpatterns);
  public: Variant t_yylex2();
  public: bool t_yy_r2_1(CVarRef v_yy_subpatterns);
  public: void t_yy_r2_2(CVarRef v_yy_subpatterns);
  public: void t_yy_r2_3(CVarRef v_yy_subpatterns);
  public: void t_yy_r2_4(CVarRef v_yy_subpatterns);
  public: void t_yy_r2_5(CVarRef v_yy_subpatterns);
  public: void t_yy_r2_6(CVarRef v_yy_subpatterns);
  public: Variant t_yy_r2_8(CVarRef v_yy_subpatterns);
  public: void t_yy_r2_9(CVarRef v_yy_subpatterns);
  public: void t_yy_r2_10(CVarRef v_yy_subpatterns);
  public: Variant t_yylex3();
  public: void t_yy_r3_1(CVarRef v_yy_subpatterns);
  public: Variant t_yylex4();
  public: bool t_yy_r4_1(CVarRef v_yy_subpatterns);
  public: void t_yy_r4_2(CVarRef v_yy_subpatterns);
  public: void t_yy_r4_3(CVarRef v_yy_subpatterns);
  public: Variant t_yylex5();
  public: void t_yy_r5_1(CVarRef v_yy_subpatterns);
  public: void t_yy_r5_2(CVarRef v_yy_subpatterns);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r4_1);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r4_2);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r4_3);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r5_1);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r5_2);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yylex1);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yylex2);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yylex);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yylex3);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yylex4);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yylex5);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_10);
  DECLARE_METHOD_INVOKE_HELPERS(instance);
  DECLARE_METHOD_INVOKE_HELPERS(yybegin);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r1_1);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r1_2);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r1_3);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r1_4);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r1_5);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r1_6);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r1_7);
  DECLARE_METHOD_INVOKE_HELPERS(yypushstate);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_1);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_2);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_3);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_4);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_5);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_6);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_8);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r2_9);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yypopstate);
  DECLARE_METHOD_INVOKE_HELPERS(yy_r3_1);
};
ObjectData *coo_Smarty_Internal_Configfilelexer() NEVER_INLINE;
extern const int64 q_Smarty_Internal_Configfilelexer___START;
extern const int64 q_Smarty_Internal_Configfilelexer___VALUE;
extern const int64 q_Smarty_Internal_Configfilelexer___NAKED_STRING_VALUE;
extern const int64 q_Smarty_Internal_Configfilelexer___COMMENT;
extern const int64 q_Smarty_Internal_Configfilelexer___SECTION;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Configfilelexer_h4d544d8d__
