
#ifndef __GENERATED_cls_Smarty_Internal_Configfileparser_hc43776d2__
#define __GENERATED_cls_Smarty_Internal_Configfileparser_hc43776d2__

#include <cls/Smarty_Internal_Configfileparser.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 87 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Configfileparser);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Configfileparser;
class c_Smarty_Internal_Configfileparser : public ObjectData {
  public:

  // Properties
  Variant m_successful;
  Variant m_retvalue;
  Variant m_lex;
  bool m_internalError;
  Variant m_yyidx;
  Variant m_yyerrcnt;
  Variant m_yystack;
  Variant m_yyTokenName;
  Variant m__retvalue;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Smarty_Internal_Configfileparser() : m_lex(Variant::nullInit), m_yyidx(Variant::nullInit), m_yyerrcnt(Variant::nullInit), m__retvalue(Variant::nullInit) {}
  void init();
  public: void t___construct(Variant v_lex, Variant v_compiler);
  public: c_Smarty_Internal_Configfileparser *create(CVarRef v_lex, CVarRef v_compiler);
  public: static Variant t_instance(CVarRef v_new_instance = null_variant);
  public: bool t_parse_bool(CVarRef v_str);
  public: static String t_parse_single_quoted_string(CVarRef v_qstr);
  public: static String t_parse_double_quoted_string(CVarRef v_qstr);
  public: static String t_parse_tripple_double_quoted_string(CVarRef v_qstr);
  public: void tt_set_var(CArrRef v_var, VRefParam rv_target_array);
  public: void t_set_var(CVarRef v_var, VRefParam v_target_array);
  public: void tt_add_global_vars(CArrRef v_vars);
  public: void t_add_global_vars(CVarRef v_vars);
  public: void tt_add_section_vars(CVarRef v_section_name, CArrRef v_vars);
  public: void t_add_section_vars(CVarRef v_section_name, CVarRef v_vars);
  public: static void t_trace(Variant v_TraceFILE, Variant v_zTracePrompt);
  public: static void t_printtrace();
  public: Variant t_tokenname(CVarRef v_tokenType);
  public: static void t_yy_destructor(CVarRef v_yymajor, CVarRef v_yypminor);
  public: Variant t_yy_pop_parser_stack();
  public: Variant t___destruct();
  public: Variant t_yy_get_expected_tokens(CVarRef v_token);
  public: bool t_yy_is_expected_token(CVarRef v_token);
  public: Variant t_yy_find_shift_action(CVarRef v_iLookAhead);
  public: Variant t_yy_find_reduce_action(CVarRef v_stateno, CVarRef v_iLookAhead);
  public: void t_yy_shift(CVarRef v_yyNewState, CVarRef v_yyMajor, CVarRef v_yypMinor);
  public: void t_yy_r0();
  public: void t_yy_r1();
  public: void t_yy_r4();
  public: void t_yy_r5();
  public: void t_yy_r6();
  public: void t_yy_r7();
  public: void t_yy_r8();
  public: void t_yy_r9();
  public: void t_yy_r10();
  public: void t_yy_r11();
  public: void t_yy_r12();
  public: void t_yy_r13();
  public: void t_yy_r14();
  public: void t_yy_r15();
  public: void t_yy_r16();
  public: void t_yy_reduce(CVarRef v_yyruleno);
  public: void t_yy_parse_failed();
  public: void t_yy_syntax_error(CVarRef v_yymajor, CVarRef v_TOKEN);
  public: void t_yy_accept();
  public: void t_doparse(Variant v_yymajor, CVarRef v_yytokenvalue);
  DECLARE_METHOD_INVOKE_HELPERS(parse_double_quoted_string);
  DECLARE_METHOD_INVOKE_HELPERS(yy_find_shift_action);
  DECLARE_METHOD_INVOKE_HELPERS(parse_bool);
  DECLARE_METHOD_INVOKE_HELPERS(tokenname);
  DECLARE_METHOD_INVOKE_HELPERS(trace);
  DECLARE_METHOD_INVOKE_HELPERS(yy_is_expected_token);
  DECLARE_METHOD_INVOKE_HELPERS(set_var);
  DECLARE_METHOD_INVOKE_HELPERS(parse_tripple_double_quoted_string);
  DECLARE_METHOD_INVOKE_HELPERS(yy_syntax_error);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(__destruct);
  DECLARE_METHOD_INVOKE_HELPERS(yy_find_reduce_action);
  DECLARE_METHOD_INVOKE_HELPERS(yy_destructor);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(parse_single_quoted_string);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_accept);
  DECLARE_METHOD_INVOKE_HELPERS(yy_reduce);
  DECLARE_METHOD_INVOKE_HELPERS(instance);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_parse_failed);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(printtrace);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r0);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r1);
  DECLARE_METHOD_INVOKE_HELPERS(yy_shift);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r4);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r5);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r6);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r7);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r8);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r9);
  DECLARE_METHOD_INVOKE_HELPERS(yy_get_expected_tokens);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_pop_parser_stack);
  DECLARE_METHOD_INVOKE_HELPERS(add_section_vars);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r10);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r11);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r12);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r13);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r14);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r15);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(yy_r16);
  DECLARE_METHOD_INVOKE_HELPERS(doparse);
  DECLARE_METHOD_INVOKE_HELPERS(add_global_vars);
};
ObjectData *coo_Smarty_Internal_Configfileparser() NEVER_INLINE;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_OPENB;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_SECTION;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_CLOSEB;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_DOT;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_ID;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_EQUAL;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_FLOAT;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_INT;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_BOOL;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_SINGLE_QUOTED_STRING;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_DOUBLE_QUOTED_STRING;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_TRIPPLE_DOUBLE_QUOTED_STRING;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_NAKED_STRING;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_NEWLINE;
extern const int64 q_Smarty_Internal_Configfileparser___TPC_COMMENTSTART;
extern const int64 q_Smarty_Internal_Configfileparser___YY_NO_ACTION;
extern const int64 q_Smarty_Internal_Configfileparser___YY_ACCEPT_ACTION;
extern const int64 q_Smarty_Internal_Configfileparser___YY_ERROR_ACTION;
extern const int64 q_Smarty_Internal_Configfileparser___YY_SZ_ACTTAB;
extern const int64 q_Smarty_Internal_Configfileparser___YY_SHIFT_USE_DFLT;
extern const int64 q_Smarty_Internal_Configfileparser___YY_SHIFT_MAX;
extern const int64 q_Smarty_Internal_Configfileparser___YY_REDUCE_USE_DFLT;
extern const int64 q_Smarty_Internal_Configfileparser___YY_REDUCE_MAX;
extern const int64 q_Smarty_Internal_Configfileparser___YYNOCODE;
extern const int64 q_Smarty_Internal_Configfileparser___YYSTACKDEPTH;
extern const int64 q_Smarty_Internal_Configfileparser___YYNSTATE;
extern const int64 q_Smarty_Internal_Configfileparser___YYNRULE;
extern const int64 q_Smarty_Internal_Configfileparser___YYERRORSYMBOL;
extern const StaticString q_Smarty_Internal_Configfileparser___YYERRSYMDT;
extern const int64 q_Smarty_Internal_Configfileparser___YYFALLBACK;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Configfileparser_hc43776d2__
