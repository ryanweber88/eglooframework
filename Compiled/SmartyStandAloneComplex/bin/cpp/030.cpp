
#include <php/Smarty/libs/sysplugins/smarty_internal_configfileparser.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_configfileparser.fws.h>

// Dependencies
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 76 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(TPC_yyStackEntry)
const InstanceOfInfo c_TPC_yyStackEntry::s_instanceof_table[] = {
  {0x35A1F76A9ECF5FEELL,1,"TPC_yyStackEntry",&cw_TPC_yyStackEntry},
};
const int c_TPC_yyStackEntry::s_instanceof_index[] = {
  1,
  0,-1,
};
const ObjectStaticCallbacks cw_TPC_yyStackEntry = {
  (ObjectData*(*)(ObjectData*))coo_TPC_yyStackEntry,
  c_TPC_yyStackEntry::s_call_info_table,c_TPC_yyStackEntry::s_call_info_index,
  c_TPC_yyStackEntry::s_instanceof_table,c_TPC_yyStackEntry::s_instanceof_index,
  &c_TPC_yyStackEntry::s_class_name,
  &c_TPC_yyStackEntry::os_prop_table,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 87 */
const int64 q_Smarty_Internal_Configfileparser___TPC_OPENB = 1LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_SECTION = 2LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_CLOSEB = 3LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_DOT = 4LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_ID = 5LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_EQUAL = 6LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_FLOAT = 7LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_INT = 8LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_BOOL = 9LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_SINGLE_QUOTED_STRING = 10LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_DOUBLE_QUOTED_STRING = 11LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_TRIPPLE_DOUBLE_QUOTED_STRING = 12LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_NAKED_STRING = 13LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_NEWLINE = 14LL;
const int64 q_Smarty_Internal_Configfileparser___TPC_COMMENTSTART = 15LL;
const int64 q_Smarty_Internal_Configfileparser___YY_NO_ACTION = 54LL;
const int64 q_Smarty_Internal_Configfileparser___YY_ACCEPT_ACTION = 53LL;
const int64 q_Smarty_Internal_Configfileparser___YY_ERROR_ACTION = 52LL;
const int64 q_Smarty_Internal_Configfileparser___YY_SZ_ACTTAB = 35LL;
const int64 q_Smarty_Internal_Configfileparser___YY_SHIFT_USE_DFLT = -8LL;
const int64 q_Smarty_Internal_Configfileparser___YY_SHIFT_MAX = 17LL;
const int64 q_Smarty_Internal_Configfileparser___YY_REDUCE_USE_DFLT = -10LL;
const int64 q_Smarty_Internal_Configfileparser___YY_REDUCE_MAX = 10LL;
const int64 q_Smarty_Internal_Configfileparser___YYNOCODE = 26LL;
const int64 q_Smarty_Internal_Configfileparser___YYSTACKDEPTH = 100LL;
const int64 q_Smarty_Internal_Configfileparser___YYNSTATE = 32LL;
const int64 q_Smarty_Internal_Configfileparser___YYNRULE = 20LL;
const int64 q_Smarty_Internal_Configfileparser___YYERRORSYMBOL = 16LL;
const StaticString q_Smarty_Internal_Configfileparser___YYERRSYMDT(LITSTR_INIT("yy0"));
const int64 q_Smarty_Internal_Configfileparser___YYFALLBACK = 0LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Configfileparser)
const InstanceOfInfo c_Smarty_Internal_Configfileparser::s_instanceof_table[] = {
  {0x08BCEEC40A2BC405LL,1,"Smarty_Internal_Configfileparser",&cw_Smarty_Internal_Configfileparser},
};
const int c_Smarty_Internal_Configfileparser::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Configfileparser::ci_parse_double_quoted_string((void*)&c_Smarty_Internal_Configfileparser::i_parse_double_quoted_string, (void*)&c_Smarty_Internal_Configfileparser::ifa_parse_double_quoted_string, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_find_shift_action((void*)&c_Smarty_Internal_Configfileparser::i_yy_find_shift_action, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_find_shift_action, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_parse_bool((void*)&c_Smarty_Internal_Configfileparser::i_parse_bool, (void*)&c_Smarty_Internal_Configfileparser::ifa_parse_bool, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_tokenname((void*)&c_Smarty_Internal_Configfileparser::i_tokenname, (void*)&c_Smarty_Internal_Configfileparser::ifa_tokenname, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_trace((void*)&c_Smarty_Internal_Configfileparser::i_trace, (void*)&c_Smarty_Internal_Configfileparser::ifa_trace, 2, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_is_expected_token((void*)&c_Smarty_Internal_Configfileparser::i_yy_is_expected_token, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_is_expected_token, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_set_var((void*)&c_Smarty_Internal_Configfileparser::i_set_var, (void*)&c_Smarty_Internal_Configfileparser::ifa_set_var, 2, 4, 0x0000000000000002LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_parse_tripple_double_quoted_string((void*)&c_Smarty_Internal_Configfileparser::i_parse_tripple_double_quoted_string, (void*)&c_Smarty_Internal_Configfileparser::ifa_parse_tripple_double_quoted_string, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_syntax_error((void*)&c_Smarty_Internal_Configfileparser::i_yy_syntax_error, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_syntax_error, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci___destruct((void*)&c_Smarty_Internal_Configfileparser::i___destruct, (void*)&c_Smarty_Internal_Configfileparser::ifa___destruct, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_find_reduce_action((void*)&c_Smarty_Internal_Configfileparser::i_yy_find_reduce_action, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_find_reduce_action, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_destructor((void*)&c_Smarty_Internal_Configfileparser::i_yy_destructor, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_destructor, 2, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci___construct((void*)&c_Smarty_Internal_Configfileparser::i___construct, (void*)&c_Smarty_Internal_Configfileparser::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_parse_single_quoted_string((void*)&c_Smarty_Internal_Configfileparser::i_parse_single_quoted_string, (void*)&c_Smarty_Internal_Configfileparser::ifa_parse_single_quoted_string, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_accept((void*)&c_Smarty_Internal_Configfileparser::i_yy_accept, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_accept, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_reduce((void*)&c_Smarty_Internal_Configfileparser::i_yy_reduce, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_reduce, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_instance((void*)&c_Smarty_Internal_Configfileparser::i_instance, (void*)&c_Smarty_Internal_Configfileparser::ifa_instance, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_parse_failed((void*)&c_Smarty_Internal_Configfileparser::i_yy_parse_failed, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_parse_failed, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_printtrace((void*)&c_Smarty_Internal_Configfileparser::i_printtrace, (void*)&c_Smarty_Internal_Configfileparser::ifa_printtrace, 0, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r0((void*)&c_Smarty_Internal_Configfileparser::i_yy_r0, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r0, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r1((void*)&c_Smarty_Internal_Configfileparser::i_yy_r1, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r1, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_shift((void*)&c_Smarty_Internal_Configfileparser::i_yy_shift, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_shift, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r4((void*)&c_Smarty_Internal_Configfileparser::i_yy_r4, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r4, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r5((void*)&c_Smarty_Internal_Configfileparser::i_yy_r5, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r5, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r6((void*)&c_Smarty_Internal_Configfileparser::i_yy_r6, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r6, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r7((void*)&c_Smarty_Internal_Configfileparser::i_yy_r7, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r7, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r8((void*)&c_Smarty_Internal_Configfileparser::i_yy_r8, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r8, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r9((void*)&c_Smarty_Internal_Configfileparser::i_yy_r9, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r9, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_get_expected_tokens((void*)&c_Smarty_Internal_Configfileparser::i_yy_get_expected_tokens, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_get_expected_tokens, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_pop_parser_stack((void*)&c_Smarty_Internal_Configfileparser::i_yy_pop_parser_stack, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_pop_parser_stack, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_add_section_vars((void*)&c_Smarty_Internal_Configfileparser::i_add_section_vars, (void*)&c_Smarty_Internal_Configfileparser::ifa_add_section_vars, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r10((void*)&c_Smarty_Internal_Configfileparser::i_yy_r10, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r10, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r11((void*)&c_Smarty_Internal_Configfileparser::i_yy_r11, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r11, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r12((void*)&c_Smarty_Internal_Configfileparser::i_yy_r12, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r12, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r13((void*)&c_Smarty_Internal_Configfileparser::i_yy_r13, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r13, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r14((void*)&c_Smarty_Internal_Configfileparser::i_yy_r14, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r14, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r15((void*)&c_Smarty_Internal_Configfileparser::i_yy_r15, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r15, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_yy_r16((void*)&c_Smarty_Internal_Configfileparser::i_yy_r16, (void*)&c_Smarty_Internal_Configfileparser::ifa_yy_r16, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_doparse((void*)&c_Smarty_Internal_Configfileparser::i_doparse, (void*)&c_Smarty_Internal_Configfileparser::ifa_doparse, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfileparser::ci_add_global_vars((void*)&c_Smarty_Internal_Configfileparser::i_add_global_vars, (void*)&c_Smarty_Internal_Configfileparser::ifa_add_global_vars, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Configfileparser::i_parse_double_quoted_string(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_double_quoted_string", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Configfileparser::t_parse_double_quoted_string(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_find_shift_action(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_find_shift_action, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_find_shift_action", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_find_shift_action(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_parse_bool(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_parse_bool, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_bool", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_parse_bool(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_tokenname(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_tokenname, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::tokenName", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_tokenname(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_trace(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::Trace", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Configfileparser::t_trace(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_is_expected_token(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_is_expected_token, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_is_expected_token", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_is_expected_token(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_set_var(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_set_var, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::set_var", 0, 1);
  if (UNLIKELY(count < 2)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::set_var", 0, 2);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    VRefParam arg1(vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (self->t_set_var(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_parse_tripple_double_quoted_string(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_tripple_double_quoted_string", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Configfileparser::t_parse_tripple_double_quoted_string(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_syntax_error(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_syntax_error, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_syntax_error", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_yy_syntax_error(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_find_reduce_action(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_find_reduce_action, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_find_reduce_action", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_yy_find_reduce_action(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_destructor(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_destructor", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Configfileparser::t_yy_destructor(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_parse_single_quoted_string(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_single_quoted_string", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Configfileparser::t_parse_single_quoted_string(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_reduce(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_reduce, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_reduce", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_reduce(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_instance(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return strongBind(c_Smarty_Internal_Configfileparser::t_instance(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_shift(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_shift, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_shift", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_yy_shift(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_yy_get_expected_tokens(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_get_expected_tokens, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_get_expected_tokens", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_get_expected_tokens(arg0));
  }
}
Variant c_Smarty_Internal_Configfileparser::i_add_section_vars(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_add_section_vars, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::add_section_vars", 0, 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    CVarRef arg1((ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_add_section_vars(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_doparse(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_doparse, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::doParse", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_doparse(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::i_add_global_vars(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_add_global_vars, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::add_global_vars", 0, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_add_global_vars(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfileparser::ifa_parse_double_quoted_string(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_double_quoted_string", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Configfileparser::t_parse_double_quoted_string(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_find_shift_action(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_find_shift_action, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_find_shift_action", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_find_shift_action(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_parse_bool(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_parse_bool, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_bool", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_parse_bool(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_tokenname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_tokenname, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::tokenName", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_tokenname(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_trace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::Trace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (c_Smarty_Internal_Configfileparser::t_trace(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_is_expected_token(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_is_expected_token, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_is_expected_token", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_is_expected_token(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_set_var(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_set_var, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::set_var", 0, 1);
  if (UNLIKELY(count < 2)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::set_var", 0, 2);
  CVarRef arg0(a0);
  VRefParam arg1(vref(a1));
  return (self->t_set_var(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_parse_tripple_double_quoted_string(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_tripple_double_quoted_string", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Configfileparser::t_parse_tripple_double_quoted_string(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_syntax_error(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_syntax_error, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_syntax_error", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_yy_syntax_error(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t___destruct());
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_find_reduce_action(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_find_reduce_action, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_find_reduce_action", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_yy_find_reduce_action(arg0, arg1));
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_destructor(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_destructor", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (c_Smarty_Internal_Configfileparser::t_yy_destructor(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_parse_single_quoted_string(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::parse_single_quoted_string", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Configfileparser::t_parse_single_quoted_string(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_accept(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_accept, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_accept(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_reduce(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_reduce, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_reduce", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_reduce(arg0), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_instance(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return strongBind(c_Smarty_Internal_Configfileparser::t_instance(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_parse_failed(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_parse_failed, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_parse_failed(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_printtrace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  return (c_Smarty_Internal_Configfileparser::t_printtrace(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r0(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r0, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r0(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r1(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_shift(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_shift, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_shift", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_yy_shift(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r4(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r5, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r5(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r6, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r6(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r7(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r7, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r7(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r8, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r8(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r9(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r9, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r9(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_get_expected_tokens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_get_expected_tokens, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfileparser::yy_get_expected_tokens", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_get_expected_tokens(arg0));
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_pop_parser_stack(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_pop_parser_stack, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_pop_parser_stack());
}
Variant c_Smarty_Internal_Configfileparser::ifa_add_section_vars(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_add_section_vars, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::add_section_vars", 0, 2);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t_add_section_vars(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r10(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r10, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r10(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r11(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r11, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r11(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r12(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r12, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r12(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r13(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r13, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r13(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r14(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r14, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r14(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r15(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r15, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r15(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_yy_r16(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r16, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  return (self->t_yy_r16(), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_doparse(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_doparse, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfileparser::doParse", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_doparse(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfileparser::ifa_add_global_vars(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_add_global_vars, coo_Smarty_Internal_Configfileparser);
  }
  c_Smarty_Internal_Configfileparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfileparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty_Internal_Configfileparser::add_global_vars", 0, 1);
  CVarRef arg0(a0);
  return (self->t_add_global_vars(arg0), null);
}
const MethodCallInfoTable c_Smarty_Internal_Configfileparser::s_call_info_table[] = {
  { 0x4B99C5A39C818101LL, 1, 9, "yy_accept", &c_Smarty_Internal_Configfileparser::ci_yy_accept },
  { 0x3702CDDFA0958081LL, 0, 8, "yy_shift", &c_Smarty_Internal_Configfileparser::ci_yy_shift },
  { 0x5B26EB1F9C97C585LL, 1, 6, "yy_r15", &c_Smarty_Internal_Configfileparser::ci_yy_r15 },
  { 0x7FBAF50EDDFC8A08LL, 1, 13, "yy_destructor", &c_Smarty_Internal_Configfileparser::ci_yy_destructor },
  { 0x24258A7A20173A0BLL, 1, 5, "yy_r8", &c_Smarty_Internal_Configfileparser::ci_yy_r8 },
  { 0x3CD1DEC4C7CCC58BLL, 0, 6, "yy_r10", &c_Smarty_Internal_Configfileparser::ci_yy_r10 },
  { 0x353B95A1374A2410LL, 1, 19, "yy_pop_parser_stack", &c_Smarty_Internal_Configfileparser::ci_yy_pop_parser_stack },
  { 0x78856C4188A5F011LL, 1, 9, "tokenName", &c_Smarty_Internal_Configfileparser::ci_tokenname },
  { 0x3AB00A17F5FE0499LL, 1, 6, "yy_r11", &c_Smarty_Internal_Configfileparser::ci_yy_r11 },
  { 0x408286494BD2FB1BLL, 1, 6, "yy_r12", &c_Smarty_Internal_Configfileparser::ci_yy_r12 },
  { 0x48995E310AE71C9CLL, 1, 7, "doParse", &c_Smarty_Internal_Configfileparser::ci_doparse },
  { 0x1979E1CC2924E7ADLL, 1, 15, "yy_syntax_error", &c_Smarty_Internal_Configfileparser::ci_yy_syntax_error },
  { 0x386D73480866BD2ELL, 1, 5, "yy_r7", &c_Smarty_Internal_Configfileparser::ci_yy_r7 },
  { 0x3E60B19C7A04532ELL, 0, 6, "yy_r13", &c_Smarty_Internal_Configfileparser::ci_yy_r13 },
  { 0x107DFE4053A85230LL, 1, 5, "yy_r1", &c_Smarty_Internal_Configfileparser::ci_yy_r1 },
  { 0x0B8D2589F8FACFB1LL, 1, 34, "parse_tripple_double_quoted_string", &c_Smarty_Internal_Configfileparser::ci_parse_tripple_double_quoted_string },
  { 0x408A74782B7552C1LL, 1, 7, "set_var", &c_Smarty_Internal_Configfileparser::ci_set_var },
  { 0x5D356D75F9E6CEC3LL, 1, 16, "add_section_vars", &c_Smarty_Internal_Configfileparser::ci_add_section_vars },
  { 0x3CCB986B2CF0A747LL, 1, 5, "Trace", &c_Smarty_Internal_Configfileparser::ci_trace },
  { 0x010A3CFEEE9299CBLL, 1, 5, "yy_r0", &c_Smarty_Internal_Configfileparser::ci_yy_r0 },
  { 0x05CE6ADFE41F5FCELL, 1, 26, "parse_double_quoted_string", &c_Smarty_Internal_Configfileparser::ci_parse_double_quoted_string },
  { 0x4D17C5707C7FD14ELL, 0, 15, "yy_parse_failed", &c_Smarty_Internal_Configfileparser::ci_yy_parse_failed },
  { 0x282BCE169DF279CELL, 0, 6, "yy_r16", &c_Smarty_Internal_Configfileparser::ci_yy_r16 },
  { 0x03FCF90ACB4AA756LL, 1, 5, "yy_r4", &c_Smarty_Internal_Configfileparser::ci_yy_r4 },
  { 0x23ED675FCA37E056LL, 0, 6, "yy_r14", &c_Smarty_Internal_Configfileparser::ci_yy_r14 },
  { 0x4C582ABEAC2E365BLL, 1, 26, "parse_single_quoted_string", &c_Smarty_Internal_Configfileparser::ci_parse_single_quoted_string },
  { 0x705497EBBA07A7DCLL, 1, 20, "yy_is_expected_token", &c_Smarty_Internal_Configfileparser::ci_yy_is_expected_token },
  { 0x2B3ADAC4349A095DLL, 1, 5, "yy_r6", &c_Smarty_Internal_Configfileparser::ci_yy_r6 },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Configfileparser::ci___construct },
  { 0x705C0BEE49C05A64LL, 1, 5, "yy_r5", &c_Smarty_Internal_Configfileparser::ci_yy_r5 },
  { 0x43A3F7209C3941E5LL, 1, 21, "yy_find_reduce_action", &c_Smarty_Internal_Configfileparser::ci_yy_find_reduce_action },
  { 0x430C41705257DD65LL, 0, 9, "yy_reduce", &c_Smarty_Internal_Configfileparser::ci_yy_reduce },
  { 0x4EE6E04D50135CEFLL, 1, 10, "parse_bool", &c_Smarty_Internal_Configfileparser::ci_parse_bool },
  { 0x7832E0AAFADCABEFLL, 0, 8, "instance", &c_Smarty_Internal_Configfileparser::ci_instance },
  { 0x2EE64532D3C5A771LL, 1, 20, "yy_find_shift_action", &c_Smarty_Internal_Configfileparser::ci_yy_find_shift_action },
  { 0x7F974836AACC1EF3LL, 1, 10, "__destruct", &c_Smarty_Internal_Configfileparser::ci___destruct },
  { 0x701669670B3E58F3LL, 0, 15, "add_global_vars", &c_Smarty_Internal_Configfileparser::ci_add_global_vars },
  { 0x05ED15696E211876LL, 1, 5, "yy_r9", &c_Smarty_Internal_Configfileparser::ci_yy_r9 },
  { 0x17E658BD51D7147BLL, 1, 10, "PrintTrace", &c_Smarty_Internal_Configfileparser::ci_printtrace },
  { 0x14C123EE690E20FFLL, 1, 22, "yy_get_expected_tokens", &c_Smarty_Internal_Configfileparser::ci_yy_get_expected_tokens },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Configfileparser::s_call_info_index[] = {
  127,
  -1,0,-1,-1,-1,2,-1,-1,
  3,-1,-1,4,-1,-1,-1,-1,
  6,7,-1,-1,-1,-1,-1,-1,
  -1,8,-1,9,10,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,11,12,-1,
  14,15,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,16,-1,17,-1,-1,-1,18,
  -1,-1,-1,19,-1,-1,20,-1,
  -1,-1,-1,-1,-1,-1,23,-1,
  -1,-1,-1,25,26,27,-1,28,
  -1,-1,-1,-1,29,30,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,32,
  -1,34,-1,35,-1,-1,37,-1,
  -1,-1,-1,38,-1,-1,-1,39,

};
c_Smarty_Internal_Configfileparser *c_Smarty_Internal_Configfileparser::create(CVarRef v_lex, CVarRef v_compiler) {
  CountableHelper h(this);
  init();
  t___construct(v_lex, v_compiler);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Configfileparser = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Configfileparser,
  c_Smarty_Internal_Configfileparser::s_call_info_table,c_Smarty_Internal_Configfileparser::s_call_info_index,
  c_Smarty_Internal_Configfileparser::s_instanceof_table,c_Smarty_Internal_Configfileparser::s_instanceof_index,
  &c_Smarty_Internal_Configfileparser::s_class_name,
  &c_Smarty_Internal_Configfileparser::os_prop_table,&c_Smarty_Internal_Configfileparser::ci___construct,0,0
};
void c_Smarty_Internal_Configfileparser::init() {
  m_successful = true;
  m_retvalue = 0LL;
  m_internalError = false;
  m_yystack = s_sa00000000;
  m_yyTokenName = s_saeadf8678;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 97 */
void c_Smarty_Internal_Configfileparser::t___construct(Variant v_lex, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::__construct", array_createvi(2, toVPOD(v_lex), toVPOD(v_compiler)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  LINE(99,(c_Smarty_Internal_Configfileparser::t_instance(VarNR(GET_THIS_TYPED(Smarty_Internal_Configfileparser)))));
  m_lex.assignVal(v_lex);
  {
    LINE(101,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 104 */
Variant c_Smarty_Internal_Configfileparser::t_instance(CVarRef v_new_instance //  = null_variant
) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::instance);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::instance", array_createvi(1, toVPOD(v_new_instance)), strongBind(r));
  Variant &sv_instance ATTRIBUTE_UNUSED = g->sv_Smarty_Internal_Configfileparser___instance___instance;
  bool &inited_sv_instance ATTRIBUTE_UNUSED = g->inited_sv_Smarty_Internal_Configfileparser___instance___instance;
  if (!inited_sv_instance) {
    setNull(sv_instance);
    inited_sv_instance = true;
  }
  if ((isset(v_new_instance) && x_is_object(v_new_instance))) {
    sv_instance.assignVal(v_new_instance);
  }
  return strongBind(sv_instance);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 112 */
bool c_Smarty_Internal_Configfileparser::t_parse_bool(CVarRef v_str) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::parse_bool);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::parse_bool", array_createvi(1, toVPOD(v_str)), r);
  bool v_res = false;

  {
    bool tmp0;
    {
      LINE(113,0);
      const String &tmp1((x_strtolower(toString(v_str))));
      tmp0 = (x_in_array(VarNR(tmp1), s_sva74b550f5));
    }
    if (tmp0) {
      {
        v_res = true;
      }
    }
    else {
      {
        v_res = false;
      }
    }
  }
  return v_res;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 123 */
String c_Smarty_Internal_Configfileparser::t_parse_single_quoted_string(CVarRef v_qstr) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::parse_single_quoted_string);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::parse_single_quoted_string", array_createvi(1, toVPOD(v_qstr)), r);
  Variant v_escaped_string;
  Variant v_ss;
  String v_str;
  Variant v_s;

  {
    const String &tmp0((toString(v_qstr)));
    LINE(124,0);
    int tmp1((x_strlen(toString(v_qstr))));
    int tmp2((toInt32((tmp1 - 2LL))));
    const Variant &tmp3((x_substr(tmp0, toInt32(1LL), tmp2)));
    v_escaped_string.assignVal(tmp3);
  }
  {
    LINE(126,0);
    const Variant &tmp0((x_preg_split(NAMVAR(s_svse71d3c34, "/(\\\\.)/"), v_escaped_string, toInt32(-1LL), toInt32(2LL) /* PREG_SPLIT_DELIM_CAPTURE */)));
    v_ss.assignVal(tmp0);
  }
  v_str = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_str(512);
      for (ArrayIter iter3 = v_ss.begin(s_class_name, true); !iter3.end(); ++iter3) {
        LOOP_COUNTER_CHECK(1);
        iter3.second(v_s);
        {
          {
            bool tmp0;
            {
              LINE(130,0);
              int tmp1((x_strlen(toString(v_s))));
              bool tmp2 = (same(tmp1, 2LL));
              if (tmp2) {
                const Variant &tmp3((v_s.rvalAt(0LL, AccessFlags::Error)));
                tmp2 = (same(tmp3, NAMSTR(s_ssd59e789f, "\\")));
              }
              tmp0 = (tmp2);
            }
            if (tmp0) {
              {
                {
                  bool tmp0;
                  {
                    LINE(131,0);
                    const Variant &tmp1((v_s.rvalAt(1LL, AccessFlags::Error)));
                    tmp0 = (isset(s_sa7f899db6, tmp1));
                  }
                  if (tmp0) {
                    {
                      {
                        LINE(132,0);
                        const Variant &tmp0((v_s.rvalAt(1LL, AccessFlags::Error)));
                        const Variant &tmp1((s_sa7f899db6.rvalAt(tmp0, AccessFlags::Error)));
                        v_s.assignVal(tmp1);
                      }
                    }
                  }
                }
              }
            }
          }
          tmp_sbuf_v_str.addWithTaint(toString(v_s));
        }
      }
      concat_assign(v_str, tmp_sbuf_v_str.detachWithTaint());
    }
  }
  return v_str;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 142 */
String c_Smarty_Internal_Configfileparser::t_parse_double_quoted_string(CVarRef v_qstr) {
  STATIC_METHOD_INJECTION_NOMEM(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::parse_double_quoted_string);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::parse_double_quoted_string", array_createvi(1, toVPOD(v_qstr)), r);
  Variant v_inner_str;

  {
    const String &tmp0((toString(v_qstr)));
    LINE(143,0);
    int tmp1((x_strlen(toString(v_qstr))));
    int tmp2((toInt32((tmp1 - 2LL))));
    const Variant &tmp3((x_substr(tmp0, toInt32(1LL), tmp2)));
    v_inner_str.assignVal(tmp3);
  }
  return LINE(144,(x_stripcslashes(toString(v_inner_str))));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 147 */
String c_Smarty_Internal_Configfileparser::t_parse_tripple_double_quoted_string(CVarRef v_qstr) {
  STATIC_METHOD_INJECTION_NOMEM(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::parse_tripple_double_quoted_string);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::parse_tripple_double_quoted_string", array_createvi(1, toVPOD(v_qstr)), r);
  Variant v_inner_str;

  {
    const String &tmp0((toString(v_qstr)));
    LINE(148,0);
    int tmp1((x_strlen(toString(v_qstr))));
    int tmp2((toInt32((tmp1 - 6LL))));
    const Variant &tmp3((x_substr(tmp0, toInt32(3LL), tmp2)));
    v_inner_str.assignVal(tmp3);
  }
  return LINE(149,(x_stripcslashes(toString(v_inner_str))));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 152 */
void c_Smarty_Internal_Configfileparser::tt_set_var(CArrRef v_var, VRefParam rv_target_array) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::set_var);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::set_var", (Array(ArrayInit(2).set(0, v_var).setRef(1, rv_target_array).create())), );
  Variant &v_target_array ATTRIBUTE_UNUSED = rv_target_array;
  if(!v_target_array.isArray()) {
    throw_unexpected_argument_type(2,"Smarty_Internal_Configfileparser::set_var()","Array",v_target_array);
    return;
  }
  Variant v_key;
  Variant v_value;

  Variant tmp_ref;
  {
    LINE(153,0);
    const Variant &tmp0((v_var.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
    v_key.assignVal(tmp0);
  }
  {
    LINE(154,0);
    const Variant &tmp0((v_var.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
    v_value.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(156,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss485ef447, "config_overwrite"), true)))));
      if (!tmp1) {
        tmp1 = (!(isset(v_target_array.rvalRef(NAMSTR(s_ss0f30800a, "vars"), tmp_ref, AccessFlags::Key), v_key)));
      }
      tmp0 = (tmp1);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          Variant tmp0((v_value));
          LINE(157,(lval(v_target_array.lvalAt(NAMSTR(s_ss0f30800a, "vars"), AccessFlags::CheckExist_Key)))).set(v_key, (tmp0));
        }
      }
    }
    else {
      {
        {
          LINE(159,(x_settype(ref(lval(lval(v_target_array.lvalAt(NAMSTR(s_ss0f30800a, "vars"), AccessFlags::CheckExist_Key)).lvalAt(v_key))), NAMSTR(s_ss8c04b960, "array"))));
        }
        {
          Variant tmp0((v_value));
          LINE(160,(lval(lval(v_target_array.lvalAt(NAMSTR(s_ss0f30800a, "vars"), AccessFlags::CheckExist_Key)).lvalAt(v_key, AccessFlags::CheckExist)))).append((tmp0));
        }
      }
    }
  }
}
void c_Smarty_Internal_Configfileparser::t_set_var(CVarRef v_var, VRefParam v_target_array) {
  if(!v_var.isArray()) {
    throw_unexpected_argument_type(1,"Smarty_Internal_Configfileparser::set_var()","Array",v_var);
    return;
  }
  tt_set_var(v_var.toCArrRef(), v_target_array);
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 164 */
void c_Smarty_Internal_Configfileparser::tt_add_global_vars(CArrRef v_vars) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::add_global_vars);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::add_global_vars", array_createvi(1, toVPOD(v_vars)), );
  Variant v_var;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (!(isset(LINE(165,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ssacf6d578, "config_data"), false))), NAMSTR(s_ss0f30800a, "vars"), true)));
    }
    if (tmp0) {
      {
        {
          LINE(166,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssacf6d578, "config_data"), tmp_ref, s_class_name))).set(NAMSTR(s_ss0f30800a, "vars"), (s_sva00000000), true);
          tmp_ref.unset();
        }
      }
    }
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_vars.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_var);
      {
        {
          Variant tmp0((v_var));
          LINE(169,0);
          const VRefParamValue &tmp1((ref(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssacf6d578, "config_data"), tmp_ref, s_class_name))));
          t_set_var(tmp0, tmp1);
          tmp_ref.unset();
        }
      }
    }
  }
}
void c_Smarty_Internal_Configfileparser::t_add_global_vars(CVarRef v_vars) {
  if(!v_vars.isArray()) {
    throw_unexpected_argument_type(1,"Smarty_Internal_Configfileparser::add_global_vars()","Array",v_vars);
    return;
  }
  tt_add_global_vars(v_vars.toCArrRef());
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 173 */
void c_Smarty_Internal_Configfileparser::tt_add_section_vars(CVarRef v_section_name, CArrRef v_vars) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::add_section_vars);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::add_section_vars", array_createvi(2, toVPOD(v_section_name), toVPOD(v_vars)), );
  Variant v_var;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (!(isset(LINE(174,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ssacf6d578, "config_data"), false).rvalRef(NAMSTR(s_ss54c42a48, "sections"), tmp_ref, AccessFlags::Key).rvalRef(v_section_name, tmp_ref))), NAMSTR(s_ss0f30800a, "vars"), true)));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(175,(lval(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssacf6d578, "config_data"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss54c42a48, "sections"), AccessFlags::CheckExist_Key)).lvalAt(v_section_name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss0f30800a, "vars"), (s_sva00000000), true);
          tmp_ref.unset();
        }
      }
    }
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_vars.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_var);
      {
        {
          Variant tmp0((v_var));
          LINE(178,0);
          const VRefParamValue &tmp1((ref(lval(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssacf6d578, "config_data"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss54c42a48, "sections"), AccessFlags::CheckExist_Key)).lvalAt(v_section_name)))));
          t_set_var(tmp0, tmp1);
          tmp_ref.unset();
        }
      }
    }
  }
}
void c_Smarty_Internal_Configfileparser::t_add_section_vars(CVarRef v_section_name, CVarRef v_vars) {
  if(!v_vars.isArray()) {
    throw_unexpected_argument_type(2,"Smarty_Internal_Configfileparser::add_section_vars()","Array",v_vars);
    return;
  }
  tt_add_section_vars(v_section_name, v_vars.toCArrRef());
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 276 */
void c_Smarty_Internal_Configfileparser::t_trace(Variant v_TraceFILE, Variant v_zTracePrompt) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::Trace);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::Trace", array_createvi(2, toVPOD(v_TraceFILE), toVPOD(v_zTracePrompt)), );
  if (!(toBoolean(v_TraceFILE))) {
    {
      v_zTracePrompt = 0LL;
    }
  }
  else if (!(toBoolean(v_zTracePrompt))) {
    {
      v_TraceFILE = 0LL;
    }
  }
  g->s_Smarty_Internal_Configfileparser___yyTraceFILE.assignVal(v_TraceFILE);
  g->s_Smarty_Internal_Configfileparser___yyTracePrompt.assignVal(v_zTracePrompt);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 287 */
void c_Smarty_Internal_Configfileparser::t_printtrace() {
  STATIC_METHOD_INJECTION(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::PrintTrace);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::PrintTrace", null_array, );
  {
    LINE(289,0);
    const Variant &tmp0((x_fopen(NAMSTR(s_ss8323b109, "php://output"), NAMSTR(s_ssd52b2aa9, "w"))));
    g->s_Smarty_Internal_Configfileparser___yyTraceFILE.assignVal(tmp0);
  }
  g->s_Smarty_Internal_Configfileparser___yyTracePrompt = NAMSTR(s_ssb0c6613c, "<br>");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 332 */
Variant c_Smarty_Internal_Configfileparser::t_tokenname(CVarRef v_tokenType) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::tokenName);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::tokenName", array_createvi(1, toVPOD(v_tokenType)), r);
  if (same(v_tokenType, 0LL)) {
    {
      return NAMSTR(s_ssa2dec035, "End of Input");
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (more(v_tokenType, 0LL));
      if (tmp1) {
        LINE(337,0);
        int tmp2((x_count(m_yyTokenName)));
        tmp1 = (less(v_tokenType, tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        return LINE(338,(m_yyTokenName.rvalAt(v_tokenType, AccessFlags::Error)));
      }
    }
    else {
      {
        return NAMSTR(s_ssff24c3e6, "Unknown");
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 344 */
void c_Smarty_Internal_Configfileparser::t_yy_destructor(CVarRef v_yymajor, CVarRef v_yypminor) {
  STATIC_METHOD_INJECTION_NOMEM(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_destructor);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_destructor", array_createvi(2, toVPOD(v_yymajor), toVPOD(v_yypminor)), );
  switch ((v_yymajor).hashForIntSwitch(0LL, 0LL)) {
  default:
    {
      break;
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 351 */
Variant c_Smarty_Internal_Configfileparser::t_yy_pop_parser_stack() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_pop_parser_stack);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_pop_parser_stack", null_array, r);
  Variant v_yytos;
  Variant v_yymajor;

  {
    bool tmp0;
    {
      LINE(353,0);
      bool tmp1((toBoolean(x_count(m_yystack))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        return null;
      }
    }
  }
  {
    LINE(356,0);
    const Variant &tmp0((x_array_pop(ref(m_yystack))));
    v_yytos.assignVal(tmp0);
  }
  if ((toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE) && not_less(m_yyidx, 0LL))) {
    {
      {
        const Object &tmp0((toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)));
        const String &tmp1((toString(g->s_Smarty_Internal_Configfileparser___yyTracePrompt)));
        LINE(359,0);
        const Variant &tmp2((v_yytos.o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
        const String &tmp3((toString(m_yyTokenName.rvalAt(tmp2, AccessFlags::Error))));
        LINE(360,(x_fwrite(tmp0, concat4(tmp1, NAMSTR(s_ss884c7d2e, "Popping "), tmp3, NAMSTR(s_ss66d2232c, "\n")))));
      }
    }
  }
  {
    LINE(362,0);
    const Variant &tmp0((v_yytos.o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
    v_yymajor.assignVal(tmp0);
  }
  {
    Variant tmp0((v_yymajor));
    LINE(363,0);
    const Variant &tmp1((v_yytos.o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    c_Smarty_Internal_Configfileparser::t_yy_destructor(tmp0, tmp1);
  }
  m_yyidx--;
  return v_yymajor;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 368 */
Variant c_Smarty_Internal_Configfileparser::t___destruct() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::__destruct);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::__destruct", null_array, r);
  setInDtor();
  LOOP_COUNTER(1);
  {
    while (!same(m_yystack, s_sa00000000)) {
      LOOP_COUNTER_CHECK(1);
      {
        LINE(371,(t_yy_pop_parser_stack()));
      }
    }
  }
  if (x_is_resource(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
    {
      LINE(374,(x_fclose(toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE))));
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 378 */
Variant c_Smarty_Internal_Configfileparser::t_yy_get_expected_tokens(CVarRef v_token) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_get_expected_tokens);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_get_expected_tokens", array_createvi(1, toVPOD(v_token)), r);
  Variant v_state;
  Variant v_expected;
  Variant v_stack;
  Variant v_yyidx;
  Variant v_yyact;
  int64 v_done = 0;
  Numeric v_yyruleno = 0;
  Variant v_nextstate;
  p_TPC_yyStackEntry v_x;

  Variant tmp_ref;
  {
    Variant tmp0((m_yyidx));
    LINE(380,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    v_state.assignVal(tmp1);
    tmp_ref.unset();
  }
  {
    LINE(381,0);
    const Variant &tmp0((s_sabeca6f71.rvalAt(v_state, AccessFlags::Error)));
    v_expected.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      Variant tmp1((v_token));
      LINE(382,0);
      const Variant &tmp2((s_sabeca6f71.rvalAt(v_state, AccessFlags::Error)));
      tmp0 = (x_in_array(tmp1, tmp2, true));
    }
    if (tmp0) {
      {
        return v_expected;
      }
    }
  }
  v_stack.assignVal(m_yystack);
  v_yyidx.assignVal(m_yyidx);
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(388,0);
          const Variant &tmp0((t_yy_find_shift_action(v_token)));
          v_yyact.assignVal(tmp0);
        }
        if ((not_less(v_yyact, 32LL /* self::YYNSTATE */) && less(v_yyact, 52LL))) {
          {
            v_done = 0LL;
            {
              LOOP_COUNTER(2);
              do {
                LOOP_COUNTER_CHECK(2);
                {
                  if (equal(v_done++, 100LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return LINE(398,(x_array_unique(v_expected)));
                    }
                  }
                  v_yyruleno.assignVal((v_yyact - 32LL /* self::YYNSTATE */));
                  {
                    LINE(401,0);
                    const Variant &tmp0((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssc9040cd3, "rhs"), AccessFlags::Error_Key)));
                    m_yyidx -= tmp0;
                  }
                  {
                    Variant tmp0((m_yyidx));
                    LINE(403,0);
                    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
                    LINE(404,0);
                    const Variant &tmp2((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                    const Variant &tmp3((t_yy_find_reduce_action(tmp1, tmp2)));
                    v_nextstate.assignVal(tmp3);
                    tmp_ref.unset();
                  }
                  if (isset(s_sabeca6f71, v_nextstate)) {
                    {
                      {
                        Variant tmp0((v_expected));
                        LINE(406,0);
                        const Variant &tmp1((s_sabeca6f71.rvalAt(v_nextstate, AccessFlags::Error)));
                        const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
                        v_expected.assignVal(tmp2);
                      }
                      {
                        bool tmp0;
                        {
                          Variant tmp1((v_token));
                          LINE(408,0);
                          const Variant &tmp2((s_sabeca6f71.rvalAt(v_nextstate, AccessFlags::Error)));
                          tmp0 = (x_in_array(tmp1, tmp2, true));
                        }
                        if (tmp0) {
                          {
                            m_yyidx.assignVal(v_yyidx);
                            m_yystack.assignVal(v_stack);
                            return LINE(411,(x_array_unique(v_expected)));
                          }
                        }
                      }
                    }
                  }
                  if (less(v_nextstate, 32LL /* self::YYNSTATE */)) {
                    {
                      m_yyidx++;
                      {
                        LINE(417,0);
                        const p_TPC_yyStackEntry &tmp0((p_TPC_yyStackEntry(((c_TPC_yyStackEntry*)coo_TPC_yyStackEntry()))));
                        v_x = tmp0;
                      }
                      v_x->m_stateno.assignVal(v_nextstate);
                      {
                        LINE(419,0);
                        const Variant &tmp0((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                        v_x->m_major.assignVal(tmp0);
                      }
                      m_yystack.set(m_yyidx, (VarNR(v_x)));
                      goto continue1;
                    }
                  }
                  else if (equal(v_nextstate, 53LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return LINE(428,(x_array_unique(v_expected)));
                    }
                  }
                  else if (same(v_nextstate, 54LL /* self::YY_NO_ACTION */)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return v_expected;
                    }
                  }
                  else {
                    {
                      v_yyact.assignVal(v_nextstate);
                    }
                  }
                }
              } while (true);
            }
          }
        }
        break;
      }
      continue1:;
    } while (true);
  }
  m_yyidx.assignVal(v_yyidx);
  m_yystack.assignVal(v_stack);
  return LINE(443,(x_array_unique(v_expected)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 446 */
bool c_Smarty_Internal_Configfileparser::t_yy_is_expected_token(CVarRef v_token) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_is_expected_token);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_is_expected_token", array_createvi(1, toVPOD(v_token)), r);
  Variant v_state;
  Variant v_stack;
  Variant v_yyidx;
  Variant v_yyact;
  int64 v_done = 0;
  Numeric v_yyruleno = 0;
  Variant v_nextstate;
  p_TPC_yyStackEntry v_x;

  Variant tmp_ref;
  if (same(v_token, 0LL)) {
    {
      return true;
    }
  }
  {
    Variant tmp0((m_yyidx));
    LINE(451,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    v_state.assignVal(tmp1);
    tmp_ref.unset();
  }
  {
    bool tmp0;
    {
      Variant tmp1((v_token));
      LINE(452,0);
      const Variant &tmp2((s_sabeca6f71.rvalAt(v_state, AccessFlags::Error)));
      tmp0 = (x_in_array(tmp1, tmp2, true));
    }
    if (tmp0) {
      {
        return true;
      }
    }
  }
  v_stack.assignVal(m_yystack);
  v_yyidx.assignVal(m_yyidx);
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(458,0);
          const Variant &tmp0((t_yy_find_shift_action(v_token)));
          v_yyact.assignVal(tmp0);
        }
        if ((not_less(v_yyact, 32LL /* self::YYNSTATE */) && less(v_yyact, 52LL))) {
          {
            v_done = 0LL;
            {
              LOOP_COUNTER(2);
              do {
                LOOP_COUNTER_CHECK(2);
                {
                  if (equal(v_done++, 100LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return true;
                    }
                  }
                  v_yyruleno.assignVal((v_yyact - 32LL /* self::YYNSTATE */));
                  {
                    LINE(471,0);
                    const Variant &tmp0((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssc9040cd3, "rhs"), AccessFlags::Error_Key)));
                    m_yyidx -= tmp0;
                  }
                  {
                    Variant tmp0((m_yyidx));
                    LINE(473,0);
                    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
                    LINE(474,0);
                    const Variant &tmp2((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                    const Variant &tmp3((t_yy_find_reduce_action(tmp1, tmp2)));
                    v_nextstate.assignVal(tmp3);
                    tmp_ref.unset();
                  }
                  {
                    bool tmp0;
                    {
                      bool tmp1 = (isset(s_sabeca6f71, v_nextstate));
                      if (tmp1) {
                        Variant tmp2((v_token));
                        LINE(476,0);
                        const Variant &tmp3((s_sabeca6f71.rvalAt(v_nextstate, AccessFlags::Error)));
                        tmp1 = (x_in_array(tmp2, tmp3, true));
                      }
                      tmp0 = (tmp1);
                    }
                    if (tmp0) {
                      {
                        m_yyidx.assignVal(v_yyidx);
                        m_yystack.assignVal(v_stack);
                        return true;
                      }
                    }
                  }
                  if (less(v_nextstate, 32LL /* self::YYNSTATE */)) {
                    {
                      m_yyidx++;
                      {
                        LINE(484,0);
                        const p_TPC_yyStackEntry &tmp0((p_TPC_yyStackEntry(((c_TPC_yyStackEntry*)coo_TPC_yyStackEntry()))));
                        v_x = tmp0;
                      }
                      v_x->m_stateno.assignVal(v_nextstate);
                      {
                        LINE(486,0);
                        const Variant &tmp0((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                        v_x->m_major.assignVal(tmp0);
                      }
                      m_yystack.set(m_yyidx, (VarNR(v_x)));
                      goto continue1;
                    }
                  }
                  else if (equal(v_nextstate, 53LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      if (!(toBoolean(v_token))) {
                        {
                          return true;
                        }
                      }
                      return false;
                    }
                  }
                  else if (same(v_nextstate, 54LL /* self::YY_NO_ACTION */)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return true;
                    }
                  }
                  else {
                    {
                      v_yyact.assignVal(v_nextstate);
                    }
                  }
                }
              } while (true);
            }
          }
        }
        break;
      }
      continue1:;
    } while (true);
  }
  m_yyidx.assignVal(v_yyidx);
  m_yystack.assignVal(v_stack);
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 517 */
Variant c_Smarty_Internal_Configfileparser::t_yy_find_shift_action(CVarRef v_iLookAhead) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_find_shift_action);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_find_shift_action", array_createvi(1, toVPOD(v_iLookAhead)), r);
  Variant v_stateno;
  Variant v_i;
  Variant v_iFallback;

  Variant tmp_ref;
  {
    Variant tmp0((m_yyidx));
    LINE(519,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    v_stateno.assignVal(tmp1);
    tmp_ref.unset();
  }
  if (!(isset(s_sa7c1ceed1, v_stateno))) {
    {
      return LINE(524,(s_sa281aad8f.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  {
    LINE(526,0);
    const Variant &tmp0((s_sa7c1ceed1.rvalAt(v_stateno, AccessFlags::Error)));
    v_i.assignVal(tmp0);
  }
  if (same(v_i, -8LL /* self::YY_SHIFT_USE_DFLT */)) {
    {
      return LINE(528,(s_sa281aad8f.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  if (equal(v_iLookAhead, 26LL /* self::YYNOCODE */)) {
    {
      return 54LL /* self::YY_NO_ACTION */;
    }
  }
  v_i += v_iLookAhead;
  {
    bool tmp0;
    {
      bool tmp1 = ((less(v_i, 0LL) || not_less(v_i, 35LL /* self::YY_SZ_ACTTAB */)));
      if (!tmp1) {
        LINE(535,0);
        const Variant &tmp2((s_sac166a752.rvalAt(v_i, AccessFlags::Error)));
        tmp1 = (!equal(tmp2, v_iLookAhead));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            bool tmp1 = (LINE(536,(toBoolean(x_count(s_sva00000000)))));
            if (tmp1) {
              int tmp2((x_count(s_sva00000000)));
              tmp1 = (less(v_iLookAhead, tmp2));
            }
            bool tmp3 = (tmp1);
            if (tmp3) {
              LINE(537,0);
              const Variant &tmp4((s_sa00000000.rvalAt(v_iLookAhead, AccessFlags::Error)));
              tmp3 = (!equal(v_iFallback.assignVal(tmp4), 0LL));
            }
            tmp0 = (tmp3);
          }
          if (tmp0) {
            {
              if (toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
                {
                  {
                    const Object &tmp0((toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)));
                    const String &tmp1((toString(g->s_Smarty_Internal_Configfileparser___yyTracePrompt)));
                    LINE(540,0);
                    const String &tmp2((toString(m_yyTokenName.rvalAt(v_iLookAhead, AccessFlags::Error))));
                    LINE(541,0);
                    const String &tmp3((toString(m_yyTokenName.rvalAt(v_iFallback, AccessFlags::Error))));
                    x_fwrite(tmp0, concat6(tmp1, NAMSTR(s_ss92c8158a, "FALLBACK "), tmp2, NAMSTR(s_ss8f4bca72, " => "), tmp3, NAMSTR(s_ss66d2232c, "\n")));
                  }
                }
              }
              return LINE(543,(t_yy_find_shift_action(v_iFallback)));
            }
          }
        }
        return LINE(545,(s_sa281aad8f.rvalAt(v_stateno, AccessFlags::Error)));
      }
    }
    else {
      {
        return LINE(547,(s_sa78f1657c.rvalAt(v_i, AccessFlags::Error)));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 551 */
Variant c_Smarty_Internal_Configfileparser::t_yy_find_reduce_action(CVarRef v_stateno, CVarRef v_iLookAhead) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_find_reduce_action);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_find_reduce_action", array_createvi(2, toVPOD(v_stateno), toVPOD(v_iLookAhead)), r);
  Variant v_i;

  if (!(isset(s_sab37bbbad, v_stateno))) {
    {
      return LINE(556,(s_sa281aad8f.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  {
    LINE(558,0);
    const Variant &tmp0((s_sab37bbbad.rvalAt(v_stateno, AccessFlags::Error)));
    v_i.assignVal(tmp0);
  }
  if (equal(v_i, -10LL /* self::YY_REDUCE_USE_DFLT */)) {
    {
      return LINE(560,(s_sa281aad8f.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  if (equal(v_iLookAhead, 26LL /* self::YYNOCODE */)) {
    {
      return 54LL /* self::YY_NO_ACTION */;
    }
  }
  v_i += v_iLookAhead;
  {
    bool tmp0;
    {
      bool tmp1 = ((less(v_i, 0LL) || not_less(v_i, 35LL /* self::YY_SZ_ACTTAB */)));
      if (!tmp1) {
        LINE(567,0);
        const Variant &tmp2((s_sac166a752.rvalAt(v_i, AccessFlags::Error)));
        tmp1 = (!equal(tmp2, v_iLookAhead));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        return LINE(568,(s_sa281aad8f.rvalAt(v_stateno, AccessFlags::Error)));
      }
    }
    else {
      {
        return LINE(570,(s_sa78f1657c.rvalAt(v_i, AccessFlags::Error)));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 574 */
void c_Smarty_Internal_Configfileparser::t_yy_shift(CVarRef v_yyNewState, CVarRef v_yyMajor, CVarRef v_yypMinor) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_shift);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_shift", array_createvi(3, toVPOD(v_yyNewState), toVPOD(v_yyMajor), toVPOD(v_yypMinor)), );
  p_TPC_yyStackEntry v_yytos;
  int64 v_i = 0;

  Variant tmp_ref;
  m_yyidx++;
  if (not_less(m_yyidx, 100LL /* self::YYSTACKDEPTH */)) {
    {
      m_yyidx--;
      if (toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
        {
          LINE(580,(x_fprintf(3, toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE), NAMSTR(s_ss0481e40e, "%sStack Overflow!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Configfileparser___yyTracePrompt))))));
        }
      }
      LOOP_COUNTER(1);
      {
        while (not_less(m_yyidx, 0LL)) {
          LOOP_COUNTER_CHECK(1);
          {
            LINE(583,(t_yy_pop_parser_stack()));
          }
        }
      }
      m_internalError = true;
      {
        LINE(588,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ssa611a7f4, "trigger_config_file_error"), 0x561F5939CADCFC40LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs674cd359, "Stack overflow in configfile parser"));
      }
      return;
    }
  }
  {
    LINE(592,0);
    const p_TPC_yyStackEntry &tmp0((p_TPC_yyStackEntry(((c_TPC_yyStackEntry*)coo_TPC_yyStackEntry()))));
    v_yytos = tmp0;
  }
  v_yytos->m_stateno.assignVal(v_yyNewState);
  v_yytos->m_major.assignVal(v_yyMajor);
  v_yytos->m_minor.assignVal(v_yypMinor);
  LINE(596,(x_array_push(2, ref(m_yystack), VarNR(v_yytos))));
  if ((toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE) && more(m_yyidx, 0LL))) {
    {
      LINE(599,(x_fprintf(4, toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE), NAMSTR(s_ss92723be2, "%sShift %d\n"), Array(array_createvi(2, toVPOD(g->s_Smarty_Internal_Configfileparser___yyTracePrompt), toVPOD(v_yyNewState))))));
      LINE(600,(x_fprintf(3, toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE), NAMSTR(s_ssb30b55cb, "%sStack:"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Configfileparser___yyTracePrompt))))));
      {
        LOOP_COUNTER(2);
        for (v_i = 1LL; (not_more(v_i, m_yyidx)); v_i++) {
          LOOP_COUNTER_CHECK(2);
          {
            {
              const Object &tmp0((toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)));
              LINE(603,0);
              const Variant &tmp1((m_yystack.rvalRef(v_i, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
              const Variant &tmp2((m_yyTokenName.rvalAt(tmp1, AccessFlags::Error)));
              x_fprintf(3, tmp0, NAMSTR(s_ss7d06f2d9, " %s"), Array(array_createvi(1, toVPOD(tmp2))));
              tmp_ref.unset();
            }
          }
        }
      }
      LINE(605,(x_fwrite(toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE), NAMSTR(s_ss66d2232c, "\n"))));
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 655 */
void c_Smarty_Internal_Configfileparser::t_yy_r0() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r0);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r0", null_array, );
  m__retvalue.assignVal(null);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 658 */
void c_Smarty_Internal_Configfileparser::t_yy_r1() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r1);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r1", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(658,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    t_add_global_vars(tmp1);
    tmp_ref.unset();
  }
  m__retvalue.assignVal(null);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 661 */
void c_Smarty_Internal_Configfileparser::t_yy_r4() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r4);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r4", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -3LL)));
    LINE(661,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    t_add_section_vars(tmp1, tmp3);
    tmp_ref.unset();
  }
  m__retvalue.assignVal(null);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 664 */
void c_Smarty_Internal_Configfileparser::t_yy_r5() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r5);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r5", null_array, );
  Variant tmp_ref;
  if (LINE(664,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssbff744ce, "config_read_hidden"), true))))) {
    {
      {
        const Numeric &tmp0(((m_yyidx + -3LL)));
        const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        t_add_section_vars(tmp1, tmp3);
        tmp_ref.unset();
      }
    }
  }
  m__retvalue.assignVal(null);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 667 */
void c_Smarty_Internal_Configfileparser::t_yy_r6() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r6);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r6", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(667,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 670 */
void c_Smarty_Internal_Configfileparser::t_yy_r7() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r7);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r7", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(670,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp2(array_createvi(1, toVPOD(tmp4)));
    const Array &tmp5((Array(tmp2)));
    const Variant &tmp6((x_array_merge(2, tmp1, Array(array_createvi(1, toVPOD(VarNR(tmp5)))))));
    m__retvalue.assignVal(tmp6);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 673 */
void c_Smarty_Internal_Configfileparser::t_yy_r8() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r8);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r8", null_array, );
  m__retvalue = s_sa00000000;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 676 */
void c_Smarty_Internal_Configfileparser::t_yy_r9() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r9);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r9", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp1(((m_yyidx + -2LL)));
    LINE(676,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp0(array_createvs(2, toSPOD(NAMSTR(s_ss12e90587, "key")), toVPOD(tmp2), toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp0)));
    m__retvalue = tmp5;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 679 */
void c_Smarty_Internal_Configfileparser::t_yy_r10() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r10);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r10", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(679,0);
    double tmp1((toDouble(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = (tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 682 */
void c_Smarty_Internal_Configfileparser::t_yy_r11() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r11);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r11", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(682,0);
    int64 tmp1((toInt64(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = (tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 685 */
void c_Smarty_Internal_Configfileparser::t_yy_r12() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r12);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r12", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(685,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    bool tmp2((t_parse_bool(tmp1)));
    m__retvalue = tmp2;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 688 */
void c_Smarty_Internal_Configfileparser::t_yy_r13() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r13);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r13", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(688,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const String &tmp2((c_Smarty_Internal_Configfileparser::t_parse_single_quoted_string(tmp1)));
    m__retvalue = tmp2;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 691 */
void c_Smarty_Internal_Configfileparser::t_yy_r14() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r14);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r14", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(691,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const String &tmp2((c_Smarty_Internal_Configfileparser::t_parse_double_quoted_string(tmp1)));
    m__retvalue = tmp2;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 694 */
void c_Smarty_Internal_Configfileparser::t_yy_r15() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r15);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r15", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(694,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const String &tmp2((c_Smarty_Internal_Configfileparser::t_parse_tripple_double_quoted_string(tmp1)));
    m__retvalue = tmp2;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 697 */
void c_Smarty_Internal_Configfileparser::t_yy_r16() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_r16);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_r16", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(697,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 702 */
void c_Smarty_Internal_Configfileparser::t_yy_reduce(CVarRef v_yyruleno) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_reduce);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_reduce", array_createvi(1, toVPOD(v_yyruleno)), );
  Variant v_yymsp;
  Variant v_yy_lefthand_side;
  Variant v_yygoto;
  Variant v_yysize;
  Variant v_i;
  Variant v_yyact;
  p_TPC_yyStackEntry v_x;

  Variant tmp_ref;
  {
    Variant tmp0((m_yyidx));
    LINE(704,0);
    const Variant &tmp1((m_yystack.rvalAt(tmp0, AccessFlags::Error)));
    v_yymsp.assignVal(tmp1);
  }
  {
    bool tmp0;
    {
      bool tmp1 = ((toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE) && not_less(v_yyruleno, 0LL)));
      if (tmp1) {
        LINE(706,0);
        int tmp2((x_count(s_sva3d1e2f99)));
        tmp1 = (less(v_yyruleno, tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          const Object &tmp0((toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)));
          Variant tmp1((g->s_Smarty_Internal_Configfileparser___yyTracePrompt));
          Variant tmp2((v_yyruleno));
          LINE(709,0);
          const Variant &tmp3((s_sa3d1e2f99.rvalAt(v_yyruleno, AccessFlags::Error)));
          x_fprintf(5, tmp0, NAMSTR(s_ss942be926, "%sReduce (%d) [%s].\n"), Array(array_createvi(3, toVPOD(tmp1), toVPOD(tmp2), toVPOD(tmp3))));
        }
      }
    }
  }
  setNull(v_yy_lefthand_side), m__retvalue.assignVal(null);
  if (LINE(713,(x_array_key_exists(v_yyruleno, s_svab6397608)))) {
    {
      m__retvalue.assignVal(null);
      {
        LINE(716,0);
        const String &tmp1((toString(s_sab6397608.rvalAt(v_yyruleno, AccessFlags::Error))));
        MethodCallPackage mcp0;
        CStrRef mth0 = concat(NAMSTR(s_ss7e7b1b44, "yy_r"), tmp1);
        mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
      }
      v_yy_lefthand_side.assignVal(m__retvalue);
    }
  }
  {
    LINE(719,0);
    const Variant &tmp0((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
    v_yygoto.assignVal(tmp0);
  }
  {
    LINE(720,0);
    const Variant &tmp0((s_saf6f14b76.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssc9040cd3, "rhs"), AccessFlags::Error_Key)));
    v_yysize.assignVal(tmp0);
  }
  m_yyidx -= v_yysize;
  {
    LOOP_COUNTER(1);
    for (v_i.assignVal(v_yysize); toBoolean((v_i)); v_i--) {
      LOOP_COUNTER_CHECK(1);
      {
        LINE(724,(x_array_pop(ref(m_yystack))));
      }
    }
  }
  {
    Variant tmp0((m_yyidx));
    LINE(726,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    const Variant &tmp2((t_yy_find_reduce_action(tmp1, v_yygoto)));
    v_yyact.assignVal(tmp2);
    tmp_ref.unset();
  }
  if (less(v_yyact, 32LL /* self::YYNSTATE */)) {
    {
      if ((!(toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) && toBoolean(v_yysize))) {
        {
          m_yyidx++;
          {
            LINE(730,0);
            const p_TPC_yyStackEntry &tmp0((p_TPC_yyStackEntry(((c_TPC_yyStackEntry*)coo_TPC_yyStackEntry()))));
            v_x = tmp0;
          }
          v_x->m_stateno.assignVal(v_yyact);
          v_x->m_major.assignVal(v_yygoto);
          v_x->m_minor.assignVal(v_yy_lefthand_side);
          m_yystack.set(m_yyidx, (VarNR(v_x)));
        }
      }
      else {
        {
          LINE(736,(t_yy_shift(v_yyact, v_yygoto, v_yy_lefthand_side)));
        }
      }
    }
  }
  else if (equal(v_yyact, 53LL)) {
    {
      LINE(739,(t_yy_accept()));
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 743 */
void c_Smarty_Internal_Configfileparser::t_yy_parse_failed() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_parse_failed);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_parse_failed", null_array, );
  if (toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
    {
      LINE(746,(x_fprintf(3, toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE), NAMSTR(s_ss727b756b, "%sFail!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Configfileparser___yyTracePrompt))))));
    }
  }
  LOOP_COUNTER(1);
  {
    while (not_less(m_yyidx, 0LL)) {
      LOOP_COUNTER_CHECK(1);
      {
        LINE(749,(t_yy_pop_parser_stack()));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 753 */
void c_Smarty_Internal_Configfileparser::t_yy_syntax_error(CVarRef v_yymajor, CVarRef v_TOKEN) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_syntax_error);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_syntax_error", array_createvi(2, toVPOD(v_yymajor), toVPOD(v_TOKEN)), );
  Variant tmp_ref;
  m_internalError = true;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssacc538af, "yymajor"), v_yymajor);
  {
    LINE(759,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ssa611a7f4, "trigger_config_file_error"), 0x561F5939CADCFC40LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth0Args())(mcp0, 0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 763 */
void c_Smarty_Internal_Configfileparser::t_yy_accept() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::yy_accept);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::yy_accept", null_array, );
  Variant v_stack;

  if (toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
    {
      LINE(766,(x_fprintf(3, toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE), NAMSTR(s_ssf6d11545, "%sAccept!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Configfileparser___yyTracePrompt))))));
    }
  }
  LOOP_COUNTER(1);
  {
    while (not_less(m_yyidx, 0LL)) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(769,0);
          const Variant &tmp0((t_yy_pop_parser_stack()));
          v_stack.assignVal(tmp0);
        }
      }
    }
  }
  m_successful = !(m_internalError);
  m_internalError = false;
  m_retvalue.assignVal(m__retvalue);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 780 */
void c_Smarty_Internal_Configfileparser::t_doparse(Variant v_yymajor, CVarRef v_yytokenvalue) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfileparser, Smarty_Internal_Configfileparser::doParse);
  INTERCEPT_INJECTION("Smarty_Internal_Configfileparser::doParse", array_createvi(2, toVPOD(v_yymajor), toVPOD(v_yytokenvalue)), );
  int64 v_yyerrorhit = 0;
  p_TPC_yyStackEntry v_x;
  bool v_yyendofinput = false;
  Variant v_yyact;
  Variant v_yymx;
  int64 v_u2 = 0;

  Variant tmp_ref;
  v_yyerrorhit = 0LL;
  if ((x_is_null(m_yyidx) || less(m_yyidx, 0LL))) {
    {
      m_yyidx = 0LL;
      m_yyerrcnt = -1LL;
      {
        LINE(787,0);
        const p_TPC_yyStackEntry &tmp0((p_TPC_yyStackEntry(((c_TPC_yyStackEntry*)coo_TPC_yyStackEntry()))));
        v_x = tmp0;
      }
      v_x->m_stateno = 0LL;
      v_x->m_major = 0LL;
      m_yystack = s_sa00000000;
      LINE(791,(x_array_push(2, ref(m_yystack), VarNR(v_x))));
    }
  }
  v_yyendofinput = equal(v_yymajor, 0LL);
  if (toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
    {
      {
        const Object &tmp0((toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)));
        Variant tmp1((g->s_Smarty_Internal_Configfileparser___yyTracePrompt));
        LINE(797,0);
        const Variant &tmp2((m_yyTokenName.rvalAt(v_yymajor, AccessFlags::Error)));
        x_fprintf(4, tmp0, NAMSTR(s_ssa32b8e8f, "%sInput %s\n"), Array(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2))));
      }
    }
  }
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(801,0);
          const Variant &tmp0((t_yy_find_shift_action(v_yymajor)));
          v_yyact.assignVal(tmp0);
        }
        {
          bool tmp0;
          {
            bool tmp1 = (less(v_yymajor, 16LL /* self::YYERRORSYMBOL */));
            if (tmp1) {
              LINE(803,0);
              bool tmp2((t_yy_is_expected_token(v_yymajor)));
              tmp1 = (!(tmp2));
            }
            tmp0 = (tmp1);
          }
          if (tmp0) {
            {
              v_yyact = 52LL /* self::YY_ERROR_ACTION */;
            }
          }
        }
        if (less(v_yyact, 32LL /* self::YYNSTATE */)) {
          {
            LINE(808,(t_yy_shift(v_yyact, v_yymajor, v_yytokenvalue)));
            m_yyerrcnt--;
            if ((v_yyendofinput && not_less(m_yyidx, 0LL))) {
              {
                v_yymajor = 0LL;
              }
            }
            else {
              {
                v_yymajor = 26LL /* self::YYNOCODE */;
              }
            }
          }
        }
        else if (less(v_yyact, 52LL)) {
          {
            LINE(816,(t_yy_reduce((v_yyact - 32LL /* self::YYNSTATE */))));
          }
        }
        else if (equal(v_yyact, 52LL /* self::YY_ERROR_ACTION */)) {
          {
            if (toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
              {
                LINE(820,(x_fprintf(3, toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE), NAMSTR(s_ssb904caaf, "%sSyntax Error!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Configfileparser___yyTracePrompt))))));
              }
            }
            if (less(m_yyerrcnt, 0LL)) {
              {
                LINE(824,(t_yy_syntax_error(v_yymajor, v_yytokenvalue)));
              }
            }
            {
              Variant tmp0((m_yyidx));
              LINE(826,0);
              const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
              v_yymx.assignVal(tmp1);
              tmp_ref.unset();
            }
            if ((equal(v_yymx, 16LL /* self::YYERRORSYMBOL */) || toBoolean(v_yyerrorhit))) {
              {
                if (toBoolean(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)) {
                  {
                    {
                      const Object &tmp0((toObject(g->s_Smarty_Internal_Configfileparser___yyTraceFILE)));
                      Variant tmp1((g->s_Smarty_Internal_Configfileparser___yyTracePrompt));
                      LINE(830,0);
                      const Variant &tmp2((m_yyTokenName.rvalAt(v_yymajor, AccessFlags::Error)));
                      x_fprintf(4, tmp0, NAMSTR(s_ss7053629d, "%sDiscard input token %s\n"), Array(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2))));
                    }
                  }
                }
                LINE(832,( BIND_CLASS_ARROW(Smarty_Internal_Configfileparser) t_yy_destructor(v_yymajor, v_yytokenvalue)));
                v_yymajor = 26LL /* self::YYNOCODE */;
              }
            }
            else {
              {
                LOOP_COUNTER(2);
                {
                  while (true) {
                    {
                      bool tmp0 = ((not_less(m_yyidx, 0LL) && !equal(v_yymx, 16LL /* self::YYERRORSYMBOL */)));
                      if (tmp0) {
                        LINE(837,0);
                        const Variant &tmp1((t_yy_find_shift_action(NAMVAR(s_svi86af027e, 16LL) /* self::YYERRORSYMBOL */)));
                        tmp0 = (not_less(v_yyact.assignVal(tmp1), 32LL /* self::YYNSTATE */));
                      }
                      if (!(tmp0)) break;
                    }
                    LOOP_COUNTER_CHECK(2);
                    {
                      LINE(839,(t_yy_pop_parser_stack()));
                    }
                  }
                }
                if ((less(m_yyidx, 0LL) || equal(v_yymajor, 0LL))) {
                  {
                    LINE(842,( BIND_CLASS_ARROW(Smarty_Internal_Configfileparser) t_yy_destructor(v_yymajor, v_yytokenvalue)));
                    LINE(843,(t_yy_parse_failed()));
                    v_yymajor = 26LL /* self::YYNOCODE */;
                  }
                }
                else if (!equal(v_yymx, 16LL /* self::YYERRORSYMBOL */)) {
                  {
                    v_u2 = 0LL;
                    LINE(847,(t_yy_shift(v_yyact, NAMVAR(s_svi86af027e, 16LL) /* self::YYERRORSYMBOL */, VarNR(v_u2))));
                  }
                }
              }
            }
            m_yyerrcnt = 3LL;
            v_yyerrorhit = 1LL;
          }
        }
        else {
          {
            LINE(864,(t_yy_accept()));
            v_yymajor = 26LL /* self::YYNOCODE */;
          }
        }
      }
    } while ((!equal(v_yymajor, 26LL /* self::YYNOCODE */) && not_less(m_yyidx, 0LL)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 12 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(TPC_yyToken)
const InstanceOfInfo c_TPC_yyToken::s_instanceof_table[] = {
  {0x614C6BAEBE5B573CLL,1,"TPC_yyToken",&cw_TPC_yyToken},
  {0x3BDD11EABFCD6F0BLL,1,"ArrayAccess",(const ObjectStaticCallbacks*)2},
};
const int c_TPC_yyToken::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_TPC_yyToken::ci___tostring((void*)&c_TPC_yyToken::i___tostring, (void*)&c_TPC_yyToken::ifa___tostring, 0, 4, 0x0000000000000000LL);
CallInfo c_TPC_yyToken::ci___construct((void*)&c_TPC_yyToken::i___construct, (void*)&c_TPC_yyToken::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c_TPC_yyToken::ci_offsetexists((void*)&c_TPC_yyToken::i_offsetexists, (void*)&c_TPC_yyToken::ifa_offsetexists, 1, 4, 0x0000000000000000LL);
CallInfo c_TPC_yyToken::ci_offsetget((void*)&c_TPC_yyToken::i_offsetget, (void*)&c_TPC_yyToken::ifa_offsetget, 1, 4, 0x0000000000000000LL);
CallInfo c_TPC_yyToken::ci_offsetunset((void*)&c_TPC_yyToken::i_offsetunset, (void*)&c_TPC_yyToken::ifa_offsetunset, 1, 4, 0x0000000000000000LL);
CallInfo c_TPC_yyToken::ci_offsetset((void*)&c_TPC_yyToken::i_offsetset, (void*)&c_TPC_yyToken::ifa_offsetset, 2, 4, 0x0000000000000000LL);
Variant c_TPC_yyToken::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(s_sa00000000) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_TPC_yyToken::i_offsetexists(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetexists, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::offsetExists", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_offsetexists(arg0));
  }
}
Variant c_TPC_yyToken::i_offsetget(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetget, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::offsetGet", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_offsetget(arg0));
  }
}
Variant c_TPC_yyToken::i_offsetunset(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetunset, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::offsetUnset", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_offsetunset(arg0));
  }
}
Variant c_TPC_yyToken::i_offsetset(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetset, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("TPC_yyToken::offsetSet", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_offsetset(arg0, arg1));
  }
}
Variant c_TPC_yyToken::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  return (self->t___tostring());
}
Variant c_TPC_yyToken::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (s_sva00000000) : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_TPC_yyToken::ifa_offsetexists(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetexists, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::offsetExists", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_offsetexists(arg0));
}
Variant c_TPC_yyToken::ifa_offsetget(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetget, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::offsetGet", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_offsetget(arg0));
}
Variant c_TPC_yyToken::ifa_offsetunset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetunset, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TPC_yyToken::offsetUnset", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_offsetunset(arg0));
}
Variant c_TPC_yyToken::ifa_offsetset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetset, coo_TPC_yyToken);
  }
  c_TPC_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TPC_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("TPC_yyToken::offsetSet", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_offsetset(arg0, arg1));
}
const MethodCallInfoTable c_TPC_yyToken::s_call_info_table[] = {
  { 0x3E6BCFB9742FC700LL, 1, 12, "offsetExists", &c_TPC_yyToken::ci_offsetexists },
  { 0x642C2D2994B34A13LL, 1, 10, "__toString", &c_TPC_yyToken::ci___tostring },
  { 0x61D11ECEF4404498LL, 1, 9, "offsetGet", &c_TPC_yyToken::ci_offsetget },
  { 0x0957F693A48AF738LL, 0, 9, "offsetSet", &c_TPC_yyToken::ci_offsetset },
  { 0x08329980E6369ABALL, 1, 11, "offsetUnset", &c_TPC_yyToken::ci_offsetunset },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_TPC_yyToken::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_TPC_yyToken::s_call_info_index[] = {
  15,
  0,-1,-1,1,-1,-1,-1,-1,
  2,-1,4,-1,-1,-1,-1,5,

};
c_TPC_yyToken *c_TPC_yyToken::create(CVarRef v_s, CVarRef v_m //  = s_sva00000000
) {
  CountableHelper h(this);
  init();
  t___construct(v_s, v_m);
  return this;
}
const ObjectStaticCallbacks cw_TPC_yyToken = {
  (ObjectData*(*)(ObjectData*))coo_TPC_yyToken,
  c_TPC_yyToken::s_call_info_table,c_TPC_yyToken::s_call_info_index,
  c_TPC_yyToken::s_instanceof_table,c_TPC_yyToken::s_instanceof_index,
  &c_TPC_yyToken::s_class_name,
  &c_TPC_yyToken::os_prop_table,&c_TPC_yyToken::ci___construct,0,0
};
void c_TPC_yyToken::init() {
  m_string = NAMSTR(s_ss00000000, "");
  m_metadata = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 17 */
void c_TPC_yyToken::t___construct(Variant v_s, Variant v_m //  = s_sa00000000
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(TPC_yyToken, TPC_yyToken::__construct);
  INTERCEPT_INJECTION("TPC_yyToken::__construct", array_createvi(2, toVPOD(v_s), toVPOD(v_m)), );
  bool oldInCtor = gasInCtor(true);
  if (instanceOf(v_s, NAMSTR(s_ssc61aed88, "TPC_yyToken"))) {
    {
      {
        LINE(20,0);
        const Variant &tmp0((v_s.o_getPublic(NAMSTR(s_ss69ad4382, "string"), true)));
        m_string.assignVal(tmp0);
      }
      {
        LINE(21,0);
        const Variant &tmp0((v_s.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true)));
        m_metadata.assignVal(tmp0);
      }
    }
  }
  else {
    {
      m_string = (toString(v_s));
      if (instanceOf(v_m, NAMSTR(s_ssc61aed88, "TPC_yyToken"))) {
        {
          {
            LINE(25,0);
            const Variant &tmp0((v_m.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true)));
            m_metadata.assignVal(tmp0);
          }
        }
      }
      else if (x_is_array(v_m)) {
        {
          m_metadata.assignVal(v_m);
        }
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 32 */
String c_TPC_yyToken::t___tostring() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TPC_yyToken, TPC_yyToken::__toString);
  INTERCEPT_INJECTION("TPC_yyToken::__toString", null_array, r);
  return toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5a17e1d9, "_string"), true));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 37 */
bool c_TPC_yyToken::t_offsetexists(CVarRef v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TPC_yyToken, TPC_yyToken::offsetExists);
  INTERCEPT_INJECTION("TPC_yyToken::offsetExists", array_createvi(1, toVPOD(v_offset)), r);
  {
    return isset(m_metadata, v_offset);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 42 */
Variant c_TPC_yyToken::t_offsetget(Variant v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TPC_yyToken, TPC_yyToken::offsetGet);
  INTERCEPT_INJECTION("TPC_yyToken::offsetGet", array_createvi(1, toVPOD(v_offset)), r);
  return LINE(44,(m_metadata.rvalAt(v_offset, AccessFlags::Error)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 42 */
Variant &c_TPC_yyToken::___offsetget_lval(Variant v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TPC_yyToken, TPC_yyToken::offsetGet);
  Variant &v = g->__lvalProxy;
  v = t_offsetget(v_offset);
  return v;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 47 */
Variant c_TPC_yyToken::t_offsetset(Variant v_offset, CVarRef v_value) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(TPC_yyToken, TPC_yyToken::offsetSet);
  INTERCEPT_INJECTION("TPC_yyToken::offsetSet", array_createvi(2, toVPOD(v_offset), toVPOD(v_value)), r);
  Variant v_x;

  if (x_is_null(v_offset)) {
    {
      {
        bool tmp0;
        {
          tmp0 = (isset(v_value, 0LL));
        }
        if (tmp0) {
          {
            {
              Variant tmp0(((instanceOf(v_value, NAMSTR(s_ssc61aed88, "TPC_yyToken")) ? ((Variant)(LINE(52,(v_value.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true))))) : ((Variant)(v_value)))));
              v_x.assignVal(tmp0);
            }
            {
              LINE(53,0);
              const Variant &tmp0((x_array_merge(2, m_metadata, Array(array_createvi(1, toVPOD(v_x))))));
              m_metadata.assignVal(tmp0);
            }
            return null;
          }
        }
      }
      {
        LINE(56,0);
        int tmp0((x_count(m_metadata)));
        v_offset = tmp0;
      }
    }
  }
  if (x_is_null(v_value)) {
    {
      return null;
    }
  }
  if (instanceOf(v_value, NAMSTR(s_ssc61aed88, "TPC_yyToken"))) {
    {
      if (LINE(62,(toBoolean(v_value.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true))))) {
        {
          {
            LINE(63,0);
            const Variant &tmp0((v_value.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true)));
            m_metadata.set(v_offset, (tmp0));
          }
        }
      }
    }
  }
  else if (toBoolean(v_value)) {
    {
      m_metadata.set(v_offset, (v_value));
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfileparser.php line 70 */
Variant c_TPC_yyToken::t_offsetunset(CVarRef v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(TPC_yyToken, TPC_yyToken::offsetUnset);
  INTERCEPT_INJECTION("TPC_yyToken::offsetUnset", array_createvi(1, toVPOD(v_offset)), r);
  m_metadata.weakRemove(v_offset);
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_TPC_yyStackEntry() {
  return NEWOBJ(c_TPC_yyStackEntry)();
}
ObjectData *coo_Smarty_Internal_Configfileparser() {
  return NEWOBJ(c_Smarty_Internal_Configfileparser)();
}
ObjectData *coo_TPC_yyToken() {
  return NEWOBJ(c_TPC_yyToken)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_configfileparser.php, pm_php$Smarty$libs$sysplugins$smarty_internal_configfileparser_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(tpc_yystackentry) = true;
  g->CDEC(smarty_internal_configfileparser) = true;
  g->CDEC(tpc_yytoken) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svi30e635cc, 17LL),
  (int64)&NAMVAR(s_svif43ec697, 9LL),
  (int64)&NAMVAR(s_svi4d7e8e12, 6LL),
  (int64)&NAMVAR(s_svic1bc2df2, 15LL),
  (int64)&NAMVAR(s_svi90d5f98c, 2LL),
  (int64)&NAMVAR(s_svi5e544a31, 4LL),
  (int64)&NAMVAR(s_svi39793333, 54LL),
  (int64)&NAMVAR(s_svie69e43fe, 35LL),
  (int64)&NAMVAR(s_svi2525fc77, 26LL),
  (int64)&NAMVAR(s_svic3578135, 8LL),
  (int64)&NAMVAR(s_svi2d6d01cf, 13LL),
  (int64)&NAMVAR(s_svi542bad8b, 10LL),
  (int64)&NAMVAR(s_svia6bfbbdd, 3LL),
  (int64)&NAMVAR(s_svi6a15d700, 5LL),
  (int64)&NAMVAR(s_svi6437df8a, -10LL),
  (int64)&NAMVAR(s_svi8a2932db, 14LL),
  (int64)&NAMVAR(s_svi84b3a0e4, -8LL),
  (int64)&NAMVAR(s_svif01bca90, 0LL),
  (int64)&NAMVAR(s_svi7aeb669d, 7LL),
  (int64)&NAMVAR(s_svi86af027e, 16LL),
  (int64)&NAMVAR(s_svib5b42dba, 52LL),
  (int64)&NAMVAR(s_svi9afd1c48, 12LL),
  (int64)&NAMVAR(s_svi49bd2782, 100LL),
  (int64)&NAMVAR(s_svif2a1fb10, 32LL),
  (int64)&NAMVAR(s_svi81e173cf, 53LL),
  (int64)&NAMVAR(s_svid7a79683, 20LL),
  (int64)&NAMVAR(s_svs2b9acd67, "yy0"),
  (int64)&NAMVAR(s_svi1c9845ac, 11LL),
  (int64)&NAMVAR(s_svib794f8ce, 1LL),
  (int64)&s_sva7c1ceed1,
  (int64)&s_svab37bbbad,
  (int64)&s_svab6397608,
  (int64)&s_sva00000000,
  (int64)&null_variant,
  (int64)&s_sva78f1657c,
  (int64)&s_sva281aad8f,
  (int64)&s_sva3d1e2f99,
  (int64)&s_svaf6f14b76,
  (int64)&s_svabeca6f71,
  (int64)&s_sva7f899db6,
  (int64)&s_svac166a752,
  (int64)&false_varNR,
  (int64)&s_svaeadf8678,
  (int64)&true_varNR,
  (int64)&NAMVAR(s_svs00000000, ""),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x6B9CA863BD1E5342LL,14,0,0,100,4,0,&NAMSTR(s_ssbd1e5342, "YY_SHIFT_MAX") },
  {0x7408AC10F36B3483LL,10,1,0,100,4,0,&NAMSTR(s_ssf36b3483, "TPC_BOOL") },
  {0x55733E387B661305LL,16,2,0,100,4,0,&NAMSTR(s_ss7b661305, "TPC_EQUAL") },
  {0x6C8EF99AB6A8F70ALL,3,3,0,100,4,0,&NAMSTR(s_ssb6a8f70a, "TPC_COMMENTSTART") },
  {0x203790C3AD140ACBLL,8,4,0,100,4,0,&NAMSTR(s_ssad140acb, "TPC_SECTION") },
  {0x4E09C6203105398CLL,8,5,0,100,4,0,&NAMSTR(s_ss3105398c, "TPC_DOT") },
  {0x68ECFBC2CA073E0ELL,19,6,0,100,4,0,&NAMSTR(s_ssca073e0e, "YY_NO_ACTION") },
  {0x42299866FF5BBECFLL,9,7,0,100,4,0,&NAMSTR(s_ssff5bbecf, "YY_SZ_ACTTAB") },
  {0x22F247A06C1EC950LL,15,8,0,100,4,0,&NAMSTR(s_ss6c1ec950, "YYNOCODE") },
  {0x439765EF84B90091LL,-8,9,0,100,4,0,&NAMSTR(s_ss84b90091, "TPC_INT") },
  {0x6795DCDB95457B53LL,5,10,0,100,4,0,&NAMSTR(s_ss95457b53, "TPC_NAKED_STRING") },
  {0x3B7A0767D649E4D9LL,17,11,0,100,4,0,&NAMSTR(s_ssd649e4d9, "TPC_SINGLE_QUOTED_STRING") },
  {0x0424A604E08A67DFLL,-7,12,0,36,4,0,&NAMSTR(s_sse08a67df, "TPC_CLOSEB") },
  {0x7425BD16692C891FLL,-11,13,0,100,4,0,&NAMSTR(s_ss692c891f, "TPC_ID") },
  {0x7DF92B69086F1123LL,6,14,0,100,4,0,&NAMSTR(s_ss086f1123, "YY_REDUCE_USE_DFLT") },
  {0x474AB0053A7BE0A5LL,-12,15,0,36,4,0,&NAMSTR(s_ss3a7be0a5, "TPC_NEWLINE") },
  {0x62C79F039AF71A65LL,-16,16,0,36,4,0,&NAMSTR(s_ss9af71a65, "YY_SHIFT_USE_DFLT") },
  {0x7BD5F43DB1C7E025LL,0,17,0,100,4,0,&NAMSTR(s_ssb1c7e025, "YYFALLBACK") },
  {0x2197F200D459E06CLL,-9,18,0,36,4,0,&NAMSTR(s_ssd459e06c, "TPC_FLOAT") },
  {0x47B258225027132CLL,8,19,0,100,4,0,&NAMSTR(s_ss5027132c, "YYERRORSYMBOL") },
  {0x3ED7C7B0F6CE89ADLL,-12,11,0,100,4,0,&NAMSTR(s_ssf6ce89ad, "YY_REDUCE_MAX") },
  {0x552589ECD7E2F0F1LL,-14,20,0,100,4,0,&NAMSTR(s_ssd7e2f0f1, "YY_ERROR_ACTION") },
  {0x55765C131164E132LL,-12,21,0,100,4,0,&NAMSTR(s_ss1164e132, "TPC_TRIPPLE_DOUBLE_QUOTED_STRING") },
  {0x4EE3EFB10C800CB4LL,1,22,0,36,4,0,&NAMSTR(s_ss0c800cb4, "YYSTACKDEPTH") },
  {0x23E4FCDBC11E4EB4LL,2,23,0,100,4,0,&NAMSTR(s_ssc11e4eb4, "YYNSTATE") },
  {0x41FD8358A8F173F6LL,-4,24,0,100,4,0,&NAMSTR(s_ssa8f173f6, "YY_ACCEPT_ACTION") },
  {0x42CF4F83D98DE9B9LL,-7,25,0,100,4,0,&NAMSTR(s_ssd98de9b9, "YYNRULE") },
  {0x441D3EE6590505BALL,-10,26,0,100,7,0,&NAMSTR(s_ss590505ba, "YYERRSYMDT") },
  {0x7345D0B6BE04F7FCLL,-6,27,0,100,4,0,&NAMSTR(s_ssbe04f7fc, "TPC_DOUBLE_QUOTED_STRING") },
  {0x5BC342BF2CADD37ELL,-25,28,0,100,4,0,&NAMSTR(s_ss2cadd37e, "TPC_OPENB") },

  {0x22D31795AF57B8C2LL,1,29,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yy_shift_ofst),&NAMSTR(s_ss032f8db9, "yy_shift_ofst") },
  {0x5F45F075C40AB6A4LL,9,30,0,140,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yy_reduce_ofst),&NAMSTR(s_ss25866bc3, "yy_reduce_ofst") },
  {0x3A793A05E0E33EE4LL,0,31,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yyReduceMap),&NAMSTR(s_ss82ec5ca7, "yyReduceMap") },
  {0x7BD5F43DB1C7E025LL,1,32,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yyFallback),&NAMSTR(s_ss020733d0, "yyFallback") },
  {0x663EEFD023D69126LL,4,33,0,76,10,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yyTraceFILE),&NAMSTR(s_ssb2c93023, "yyTraceFILE") },
  {0x045A242C13909968LL,7,34,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yy_action),&NAMSTR(s_ss26ee0872, "yy_action") },
  {0x2F015F5A786AF6ECLL,-3,35,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yy_default),&NAMSTR(s_sse8f5bb26, "yy_default") },
  {0x70EA24311727B2AFLL,2,36,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yyRuleName),&NAMSTR(s_ssfde550ab, "yyRuleName") },
  {0x17BA3620408DF390LL,-1,33,0,76,10,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yyTracePrompt),&NAMSTR(s_ss8e30b4de, "yyTracePrompt") },
  {0x4C043FD47EF0F0D5LL,-7,37,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yyRuleInfo),&NAMSTR(s_ssd5151e8c, "yyRuleInfo") },
  {0x2C8D6890BF9BA5FALL,-4,38,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yyExpectedTokens),&NAMSTR(s_ss39da995b, "yyExpectedTokens") },
  {0x34FAEE3BEEF3683BLL,-6,39,0,201,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___escapes_single),&NAMSTR(s_ss183e418e, "escapes_single") },
  {0x55DB92615A08D99FLL,-12,40,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Configfileparser___yy_lookahead),&NAMSTR(s_ss08b8ba56, "yy_lookahead") },

  {0x64E2EF4B26DA3DA1LL,0,33,34,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m__retvalue),&NAMSTR(s_ss54bda8c0, "\000Smarty_Internal_Configfileparser\000_retvalue") },
  {0x6CBA4110CF6FC103LL,3,41,34,65,2,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_internalError),&NAMSTR(s_ss9177fe7c, "\000Smarty_Internal_Configfileparser\000internalError") },
  {0x02928D355A64D726LL,3,32,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_yystack),&NAMSTR(s_ssa2fb8bc6, "yystack") },
  {0x1721E9197DB002A7LL,-2,33,34,1,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_lex),&NAMSTR(s_ss69c64a86, "\000Smarty_Internal_Configfileparser\000lex") },
  {0x182086EA409E3BC7LL,3,33,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_yyidx),&NAMSTR(s_sscb1a5010, "yyidx") },
  {0x7D464AB3790EA3C7LL,-5,42,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_yyTokenName),&NAMSTR(s_ss7f9b58ad, "yyTokenName") },
  {0x175C06E6A9FC236FLL,2,43,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_successful),&NAMSTR(s_sse9a86b8c, "successful") },
  {0x38DCFEC60916B077LL,-5,33,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_yyerrcnt),&NAMSTR(s_ssecf65ed2, "yyerrcnt") },
  {0x221D1C6BECC5569BLL,-5,17,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfileparser, m_retvalue),&NAMSTR(s_ss43ec3a0a, "retvalue") },

  {0x5268FA5127B409C2LL,1,33,0,68,10,GET_PROPERTY_OFFSET(c_TPC_yyStackEntry, m_stateno),&NAMSTR(s_ss109bc0ae, "stateno") },
  {0x7828D0B5DB3C70A3LL,1,33,0,4,10,GET_PROPERTY_OFFSET(c_TPC_yyStackEntry, m_major),&NAMSTR(s_ssec82c80c, "major") },
  {0x7DE68D3021FA7C7BLL,0,33,0,68,10,GET_PROPERTY_OFFSET(c_TPC_yyStackEntry, m_minor),&NAMSTR(s_ss80e0352e, "minor") },

  {0x15B369BE0D0C8149LL,1,44,0,68,10,GET_PROPERTY_OFFSET(c_TPC_yyToken, m_string),&NAMSTR(s_ss69ad4382, "string") },
  {0x614C02F610538E13LL,0,32,0,68,10,GET_PROPERTY_OFFSET(c_TPC_yyToken, m_metadata),&NAMSTR(s_sscc5f081c, "metadata") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Configfileparser hash
  -1,29,-1,28,-1,27,26,-1,-1,25,-1,23,-1,22,21,-1,-1,-1,20,18,-1,-1,-1,-1,-1,-1,15,-1,14,-1,-1,-1,12,-1,-1,-1,-1,-1,11,-1,-1,-1,-1,-1,10,-1,9,8,7,6,-1,5,4,3,-1,-1,-1,-1,2,-1,1,0,-1,-1,
  42,-1,-1,-1,41,40,-1,-1,-1,-1,39,-1,-1,-1,-1,38,37,-1,-1,36,-1,-1,-1,35,-1,34,33,31,-1,30,-1,-1,
  -1,43,-1,44,-1,-1,45,46,-1,-1,-1,-1,-1,-1,-1,49,-1,-1,-1,-1,-1,-1,-1,50,-1,-1,-1,51,-1,-1,-1,-1,
  // Smarty_Internal_Configfileparser lists
  46,44,43,-1,
  34,38,-1,
  -1,
  // TPC_yyStackEntry hash
  -1,-1,0,1,-1,-1,-1,-1,
  // TPC_yyStackEntry lists
  -1,
  -1,
  -1,
  // TPC_yyToken hash
  -1,0,-1,1,-1,-1,-1,-1,
  // TPC_yyToken lists
  -1,
  -1,
  -1,
  11,30,31,32,33,35,36,37,39,40,41,42,};
const ClassPropTable c_Smarty_Internal_Configfileparser::os_prop_table = {
  31,49,31,41,63,29,36,0,
  cpt_hash_entries+96,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_TPC_yyStackEntry::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+136,0,cpt_table_entries+52,cpt_static_inits
};
const ClassPropTable c_TPC_yyToken::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+147,0,cpt_table_entries+55,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_Smarty_Internal_Configfileparser::os_prop_table, cpt_hash_entries+158);

///////////////////////////////////////////////////////////////////////////////
}
