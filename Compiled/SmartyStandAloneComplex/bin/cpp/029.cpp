
#include <php/Smarty/libs/sysplugins/smarty_internal_configfilelexer.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_configfilelexer.fws.h>

// Dependencies
#include <php/Smarty/libs/sysplugins/smarty_internal_configfileparser.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 13 */
const int64 q_Smarty_Internal_Configfilelexer___START = 1LL;
const int64 q_Smarty_Internal_Configfilelexer___VALUE = 2LL;
const int64 q_Smarty_Internal_Configfilelexer___NAKED_STRING_VALUE = 3LL;
const int64 q_Smarty_Internal_Configfilelexer___COMMENT = 4LL;
const int64 q_Smarty_Internal_Configfilelexer___SECTION = 5LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Configfilelexer)
const InstanceOfInfo c_Smarty_Internal_Configfilelexer::s_instanceof_table[] = {
  {0x310FE5BC6BAF2BCALL,1,"Smarty_Internal_Configfilelexer",&cw_Smarty_Internal_Configfilelexer},
};
const int c_Smarty_Internal_Configfilelexer::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r4_1((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r4_1, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r4_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r4_2((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r4_2, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r4_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r4_3((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r4_3, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r4_3, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r5_1((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r5_1, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r5_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r5_2((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r5_2, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r5_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci___construct((void*)&c_Smarty_Internal_Configfilelexer::i___construct, (void*)&c_Smarty_Internal_Configfilelexer::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yylex1((void*)&c_Smarty_Internal_Configfilelexer::i_yylex1, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yylex1, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yylex2((void*)&c_Smarty_Internal_Configfilelexer::i_yylex2, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yylex2, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yylex((void*)&c_Smarty_Internal_Configfilelexer::i_yylex, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yylex, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yylex3((void*)&c_Smarty_Internal_Configfilelexer::i_yylex3, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yylex3, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yylex4((void*)&c_Smarty_Internal_Configfilelexer::i_yylex4, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yylex4, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yylex5((void*)&c_Smarty_Internal_Configfilelexer::i_yylex5, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yylex5, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_10((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_10, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_10, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_instance((void*)&c_Smarty_Internal_Configfilelexer::i_instance, (void*)&c_Smarty_Internal_Configfilelexer::ifa_instance, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yybegin((void*)&c_Smarty_Internal_Configfilelexer::i_yybegin, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yybegin, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r1_1((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r1_1, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r1_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r1_2((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r1_2, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r1_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r1_3((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r1_3, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r1_3, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r1_4((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r1_4, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r1_4, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r1_5((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r1_5, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r1_5, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r1_6((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r1_6, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r1_6, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r1_7((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r1_7, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r1_7, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yypushstate((void*)&c_Smarty_Internal_Configfilelexer::i_yypushstate, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yypushstate, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_1((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_1, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_2((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_2, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_3((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_3, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_3, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_4((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_4, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_4, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_5((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_5, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_5, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_6((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_6, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_6, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_8((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_8, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_8, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r2_9((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r2_9, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r2_9, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yypopstate((void*)&c_Smarty_Internal_Configfilelexer::i_yypopstate, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yypopstate, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Configfilelexer::ci_yy_r3_1((void*)&c_Smarty_Internal_Configfilelexer::i_yy_r3_1, (void*)&c_Smarty_Internal_Configfilelexer::ifa_yy_r3_1, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Configfilelexer::i_yy_r4_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r4_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_1(arg0));
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r4_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r4_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r4_3(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_3, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r4_3", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_3(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r5_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r5_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r5_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r5_1(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r5_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r5_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r5_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r5_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfilelexer::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_10(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_10, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_10", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_10(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_instance(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return strongBind(c_Smarty_Internal_Configfilelexer::t_instance(arg0));
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yybegin(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yybegin, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yybegin", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yybegin(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r1_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_1(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r1_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r1_3(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_3, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_3", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_3(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r1_4(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_4, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_4", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_4(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r1_5(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_5, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_5", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_5(arg0));
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r1_6(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_6, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_6", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_6(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r1_7(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_7, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_7", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_7(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yypushstate(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yypushstate, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yypushstate", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yypushstate(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_1(arg0));
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_3(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_3, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_3", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_3(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_4(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_4, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_4", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_4(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_5(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_5, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_5", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_5(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_6(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_6, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_6", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_6(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_8(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_8, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_8", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_8(arg0));
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r2_9(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_9, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_9", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_9(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::i_yy_r3_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r3_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_1(arg0), null);
  }
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r4_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r4_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_1(arg0));
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r4_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r4_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_2(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r4_3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_3, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r4_3", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_3(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r5_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r5_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r5_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r5_1(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r5_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r5_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r5_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r5_2(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Configfilelexer::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yylex1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  return (self->t_yylex1());
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yylex2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  return (self->t_yylex2());
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yylex(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  return (self->t_yylex());
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yylex3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex3, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  return (self->t_yylex3());
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yylex4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex4, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  return (self->t_yylex4());
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yylex5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex5, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  return (self->t_yylex5());
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_10(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_10, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_10", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_10(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_instance(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return strongBind(c_Smarty_Internal_Configfilelexer::t_instance(arg0));
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yybegin(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yybegin, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yybegin", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yybegin(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r1_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_1(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r1_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_2(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r1_3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_3, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_3", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_3(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r1_4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_4, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_4", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_4(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r1_5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_5, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_5", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_5(arg0));
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r1_6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_6, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_6", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_6(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r1_7(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_7, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r1_7", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_7(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yypushstate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yypushstate, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yypushstate", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yypushstate(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_1(arg0));
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_2, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_2(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_3, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_3", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_3(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_4, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_4", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_4(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_5, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_5", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_5(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_6, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_6", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_6(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_8, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_8", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_8(arg0));
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r2_9(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_9, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r2_9", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_9(arg0), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yypopstate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yypopstate, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  return (self->t_yypopstate(), null);
}
Variant c_Smarty_Internal_Configfilelexer::ifa_yy_r3_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_1, coo_Smarty_Internal_Configfilelexer);
  }
  c_Smarty_Internal_Configfilelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Configfilelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Configfilelexer::yy_r3_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_1(arg0), null);
}
const MethodCallInfoTable c_Smarty_Internal_Configfilelexer::s_call_info_table[] = {
  { 0x7DB585B20C7EEF05LL, 1, 6, "yylex3", &c_Smarty_Internal_Configfilelexer::ci_yylex3 },
  { 0x6FE4413A66F5EE8ELL, 1, 7, "yy_r1_2", &c_Smarty_Internal_Configfilelexer::ci_yy_r1_2 },
  { 0x068951558B2A278ELL, 0, 7, "yy_r1_5", &c_Smarty_Internal_Configfilelexer::ci_yy_r1_5 },
  { 0x2AC3101051CC8014LL, 1, 7, "yy_r2_2", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_2 },
  { 0x6238BB525BD34A98LL, 1, 7, "yy_r5_1", &c_Smarty_Internal_Configfilelexer::ci_yy_r5_1 },
  { 0x6A526759991A069BLL, 1, 7, "yy_r4_2", &c_Smarty_Internal_Configfilelexer::ci_yy_r4_2 },
  { 0x612066C88AE3839CLL, 1, 6, "yylex5", &c_Smarty_Internal_Configfilelexer::ci_yylex5 },
  { 0x2759EC7C70F8A42ELL, 1, 7, "yy_r4_1", &c_Smarty_Internal_Configfilelexer::ci_yy_r4_1 },
  { 0x7DB77F7CB085372ELL, 0, 7, "yy_r1_3", &c_Smarty_Internal_Configfilelexer::ci_yy_r1_3 },
  { 0x676690BE40D5CCB5LL, 1, 6, "yylex1", &c_Smarty_Internal_Configfilelexer::ci_yylex1 },
  { 0x0C701445FE390EB9LL, 1, 7, "yy_r4_3", &c_Smarty_Internal_Configfilelexer::ci_yy_r4_3 },
  { 0x1335A2C7AF6F9D3BLL, 1, 7, "yy_r2_1", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_1 },
  { 0x4981CC32B34C813DLL, 1, 7, "yy_r1_6", &c_Smarty_Internal_Configfilelexer::ci_yy_r1_6 },
  { 0x6544BC116F0472C0LL, 1, 6, "yylex2", &c_Smarty_Internal_Configfilelexer::ci_yylex2 },
  { 0x293FE75751BAADC0LL, 0, 6, "yylex4", &c_Smarty_Internal_Configfilelexer::ci_yylex4 },
  { 0x242120A7C75C1540LL, 0, 7, "yy_r1_4", &c_Smarty_Internal_Configfilelexer::ci_yy_r1_4 },
  { 0x0B946FBE90813148LL, 1, 7, "yy_r2_9", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_9 },
  { 0x694E0B9C7056A94DLL, 1, 7, "yy_r3_1", &c_Smarty_Internal_Configfilelexer::ci_yy_r3_1 },
  { 0x7B3DDFEA6BE7D2D1LL, 1, 5, "yylex", &c_Smarty_Internal_Configfilelexer::ci_yylex },
  { 0x1EF854D6DC12FED2LL, 1, 11, "yypushstate", &c_Smarty_Internal_Configfilelexer::ci_yypushstate },
  { 0x5F7F0A6BFE91D352LL, 0, 7, "yy_r2_3", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_3 },
  { 0x74EF5FA36C48C4D4LL, 1, 7, "yy_r2_6", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_6 },
  { 0x569CCFF87645D1D6LL, 1, 10, "yypopstate", &c_Smarty_Internal_Configfilelexer::ci_yypopstate },
  { 0x397BA4D99F7F6D5CLL, 1, 7, "yy_r5_2", &c_Smarty_Internal_Configfilelexer::ci_yy_r5_2 },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Configfilelexer::ci___construct },
  { 0x0BD5172D110E5F60LL, 1, 8, "yy_r2_10", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_10 },
  { 0x6B9F791F18698166LL, 1, 7, "yy_r1_7", &c_Smarty_Internal_Configfilelexer::ci_yy_r1_7 },
  { 0x72416887A2D92A6ALL, 1, 7, "yy_r2_5", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_5 },
  { 0x6AF521610C3DBEEELL, 1, 7, "yy_r1_1", &c_Smarty_Internal_Configfilelexer::ci_yy_r1_1 },
  { 0x7832E0AAFADCABEFLL, 1, 8, "instance", &c_Smarty_Internal_Configfilelexer::ci_instance },
  { 0x3E0BB53DA5A068F1LL, 1, 7, "yy_r2_8", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_8 },
  { 0x38D55B719572FBF5LL, 1, 7, "yybegin", &c_Smarty_Internal_Configfilelexer::ci_yybegin },
  { 0x0FD937D9DF0B1EFCLL, 1, 7, "yy_r2_4", &c_Smarty_Internal_Configfilelexer::ci_yy_r2_4 },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Configfilelexer::s_call_info_index[] = {
  127,
  -1,-1,-1,-1,-1,0,-1,-1,
  -1,-1,-1,-1,-1,-1,1,-1,
  -1,-1,-1,-1,3,-1,-1,-1,
  4,-1,-1,5,6,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,7,-1,
  -1,-1,-1,-1,-1,9,-1,-1,
  -1,10,-1,11,-1,12,-1,-1,
  13,-1,-1,-1,-1,-1,-1,-1,
  16,-1,-1,-1,-1,17,-1,-1,
  -1,18,19,-1,21,-1,22,-1,
  -1,-1,-1,-1,23,-1,-1,24,
  25,-1,-1,-1,-1,-1,26,-1,
  -1,-1,27,-1,-1,-1,28,29,
  -1,30,-1,-1,-1,31,-1,-1,
  -1,-1,-1,-1,32,-1,-1,-1,

};
c_Smarty_Internal_Configfilelexer *c_Smarty_Internal_Configfilelexer::create(CVarRef v_data, CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_data, v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Configfilelexer = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Configfilelexer,
  c_Smarty_Internal_Configfilelexer::s_call_info_table,c_Smarty_Internal_Configfilelexer::s_call_info_index,
  c_Smarty_Internal_Configfilelexer::s_instanceof_table,c_Smarty_Internal_Configfilelexer::s_instanceof_index,
  &c_Smarty_Internal_Configfilelexer::s_class_name,
  &c_Smarty_Internal_Configfilelexer::os_prop_table,&c_Smarty_Internal_Configfilelexer::ci___construct,0,0
};
void c_Smarty_Internal_Configfilelexer::init() {
  m_smarty_token_names = s_sa00000000;
  m__yy_state = 1LL;
  m__yy_stack = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 27 */
void c_Smarty_Internal_Configfilelexer::t___construct(Variant v_data, Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::__construct", array_createvi(2, toVPOD(v_data), toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  LINE(30,(c_Smarty_Internal_Configfilelexer::t_instance(VarNR(GET_THIS_TYPED(Smarty_Internal_Configfilelexer)))));
  m_data = concat(toString(v_data), NAMSTR(s_ss66d2232c, "\n"));
  m_counter = 0LL;
  m_line = 1LL;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 36 */
Variant c_Smarty_Internal_Configfilelexer::t_instance(CVarRef v_new_instance //  = null_variant
) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::instance);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::instance", array_createvi(1, toVPOD(v_new_instance)), strongBind(r));
  Variant &sv_instance ATTRIBUTE_UNUSED = g->sv_Smarty_Internal_Configfilelexer___instance___instance;
  bool &inited_sv_instance ATTRIBUTE_UNUSED = g->inited_sv_Smarty_Internal_Configfilelexer___instance___instance;
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 49 */
Variant c_Smarty_Internal_Configfilelexer::t_yylex() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yylex);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yylex", null_array, r);
  {
    LINE(51,0);
    MethodCallPackage mcp0;
    CStrRef mth0 = concat(NAMSTR(s_ss8eb2c1e2, "yylex"), toString(m__yy_state));
    mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 54 */
void c_Smarty_Internal_Configfilelexer::t_yypushstate(CVarRef v_state) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yypushstate);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yypushstate", array_createvi(1, toVPOD(v_state)), );
  LINE(56,(x_array_push(2, ref(m__yy_stack), m__yy_state)));
  m__yy_state.assignVal(v_state);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 60 */
void c_Smarty_Internal_Configfilelexer::t_yypopstate() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yypopstate);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yypopstate", null_array, );
  {
    LINE(62,0);
    const Variant &tmp0((x_array_pop(ref(m__yy_stack))));
    m__yy_state.assignVal(tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 65 */
void c_Smarty_Internal_Configfilelexer::t_yybegin(CVarRef v_state) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yybegin);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yybegin", array_createvi(1, toVPOD(v_state)), );
  m__yy_state.assignVal(v_state);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 73 */
Variant c_Smarty_Internal_Configfilelexer::t_yylex1() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yylex1);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yylex1", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_sa29d6be18;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(84,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = NAMSTR(s_ssa4e2fb4a, "/^(#)|^(\\[)|^(\\])|^(=)|^([ \t\r]+)|^(\n)|^([0-9]*[a-zA-Z_]\\w*)/iS");
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(90,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(92,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(93,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(96,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ss4504091f, "... state START")))), tmp0));
                    }
                  }
                }
              }
              LINE(98,(x_next(ref(v_yymatches))));
              {
                LINE(99,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(100,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(103,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(107,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(108,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ssc94cdc88, "yy_r1_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(110,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(111,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(117,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(119,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(120,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(121,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(128,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 137 */
void c_Smarty_Internal_Configfilelexer::t_yy_r1_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r1_1);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r1_1", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_COMMENTSTART));
  LINE(141,(t_yypushstate(NAMVAR(s_svi5e544a31, 4LL) /* self::COMMENT */)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 143 */
void c_Smarty_Internal_Configfilelexer::t_yy_r1_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r1_2);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r1_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_OPENB));
  LINE(147,(t_yypushstate(NAMVAR(s_svi6a15d700, 5LL) /* self::SECTION */)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 149 */
void c_Smarty_Internal_Configfilelexer::t_yy_r1_3(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r1_3);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r1_3", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_CLOSEB));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 154 */
void c_Smarty_Internal_Configfilelexer::t_yy_r1_4(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r1_4);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r1_4", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_EQUAL));
  LINE(158,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::VALUE */)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 160 */
bool c_Smarty_Internal_Configfilelexer::t_yy_r1_5(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r1_5);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r1_5", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 165 */
void c_Smarty_Internal_Configfilelexer::t_yy_r1_6(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r1_6);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r1_6", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_NEWLINE));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 170 */
void c_Smarty_Internal_Configfilelexer::t_yy_r1_7(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r1_7);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r1_7", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_ID));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 178 */
Variant c_Smarty_Internal_Configfilelexer::t_yylex2() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yylex2);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yylex2", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_sabfd53aae;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(191,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = NAMSTR(s_ss3c5a888c, "/^([ \t\r]+)|^(\\d+\\.\\d+(\?=[ \t\r]*[\n#]))|^(\\d+(\?=[ \t\r]*[\n#]))|^('[^'\\\\]*(\?:\\\\.[^'\\\\]*)*'(\?=[ \t\r]*[\n#]))|^(\"[^\"\\\\]*(\?:\\\\.[^\"\\\\]*)*\"(\?=[ \t\r]*[\n#]))|^(\"\"\"([^\"]|\\\\\"|\"{1,2}[^\"])*\"\"\"(\?=[ \t\r]*[\n#]))|^([a-zA-Z]+(\?=[ \t\r]*[\n#]))|^([^\n]+\?(\?=[ \t\r]*\n))|^(\n)/iS");
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(197,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(199,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(200,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(203,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ss1754ab77, "... state VALUE")))), tmp0));
                    }
                  }
                }
              }
              LINE(205,(x_next(ref(v_yymatches))));
              {
                LINE(206,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(207,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(210,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(214,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(215,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ss17a9812d, "yy_r2_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(217,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(218,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(224,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(226,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(227,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(228,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(235,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 244 */
bool c_Smarty_Internal_Configfilelexer::t_yy_r2_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_1);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_1", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 249 */
void c_Smarty_Internal_Configfilelexer::t_yy_r2_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_2);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_FLOAT));
  LINE(253,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 255 */
void c_Smarty_Internal_Configfilelexer::t_yy_r2_3(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_3);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_3", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_INT));
  LINE(259,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 261 */
void c_Smarty_Internal_Configfilelexer::t_yy_r2_4(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_4);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_4", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_SINGLE_QUOTED_STRING));
  LINE(265,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 267 */
void c_Smarty_Internal_Configfilelexer::t_yy_r2_5(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_5);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_5", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_DOUBLE_QUOTED_STRING));
  LINE(271,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 273 */
void c_Smarty_Internal_Configfilelexer::t_yy_r2_6(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_6);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_6", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_TRIPPLE_DOUBLE_QUOTED_STRING));
  LINE(277,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 279 */
Variant c_Smarty_Internal_Configfilelexer::t_yy_r2_8(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_8);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_8", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  {
    bool tmp0;
    {
      LINE(282,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss19726b3d, "config_booleanize"), true))));
      bool tmp2 = (!(tmp1));
      if (!tmp2) {
        const String &tmp3((x_strtolower(toString(m_value))));
        bool tmp4((x_in_array(VarNR(tmp3), s_sva90a1d2fb)));
        tmp2 = (!(tmp4));
      }
      tmp0 = (tmp2);
    }
    if (tmp0) {
      {
        LINE(283,(t_yypopstate()));
        LINE(284,(t_yypushstate(NAMVAR(s_svia6bfbbdd, 3LL) /* self::NAKED_STRING_VALUE */)));
        return true;
      }
    }
    else {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_BOOL));
        LINE(288,(t_yypopstate()));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 291 */
void c_Smarty_Internal_Configfilelexer::t_yy_r2_9(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_9);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_9", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_NAKED_STRING));
  LINE(295,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 297 */
void c_Smarty_Internal_Configfilelexer::t_yy_r2_10(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r2_10);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r2_10", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_NAKED_STRING));
  m_value = NAMSTR(s_ss00000000, "");
  LINE(302,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 307 */
Variant c_Smarty_Internal_Configfilelexer::t_yylex3() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yylex3);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yylex3", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_sab5c0f3a0;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(312,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = NAMSTR(s_ssa8669b41, "/^([^\n]+\?(\?=[ \t\r]*\n))/iS");
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(318,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(320,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(321,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(324,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ss500772dd, "... state NAKED_STRING_VALUE")))), tmp0));
                    }
                  }
                }
              }
              LINE(326,(x_next(ref(v_yymatches))));
              {
                LINE(327,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(328,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(331,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(335,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(336,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ss83e5a794, "yy_r3_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(338,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(339,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(345,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(347,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(348,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(349,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(356,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 365 */
void c_Smarty_Internal_Configfilelexer::t_yy_r3_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r3_1);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r3_1", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_NAKED_STRING));
  LINE(369,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 374 */
Variant c_Smarty_Internal_Configfilelexer::t_yylex4() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yylex4);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yylex4", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_saf493d606;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(381,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = NAMSTR(s_ss97c79738, "/^([ \t\r]+)|^([^\n]+\?(\?=[ \t\r]*\n))|^(\n)/iS");
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(387,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(389,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(390,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(393,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ss62b01095, "... state COMMENT")))), tmp0));
                    }
                  }
                }
              }
              LINE(395,(x_next(ref(v_yymatches))));
              {
                LINE(396,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(397,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(400,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(404,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(405,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ss1565b57e, "yy_r4_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(407,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(408,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(414,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(416,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(417,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(418,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(425,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 434 */
bool c_Smarty_Internal_Configfilelexer::t_yy_r4_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r4_1);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r4_1", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 439 */
void c_Smarty_Internal_Configfilelexer::t_yy_r4_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r4_2);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r4_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_NAKED_STRING));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 444 */
void c_Smarty_Internal_Configfilelexer::t_yy_r4_3(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r4_3);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r4_3", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_NEWLINE));
  LINE(448,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 453 */
Variant c_Smarty_Internal_Configfilelexer::t_yylex5() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yylex5);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yylex5", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_sa3ac025ca;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(459,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = NAMSTR(s_sse7808c71, "/^(\\.)|^(.*\?(\?=[\\.=[\\]\r\n]))/iS");
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(465,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(467,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(468,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(471,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ss350c3ac8, "... state SECTION")))), tmp0));
                    }
                  }
                }
              }
              LINE(473,(x_next(ref(v_yymatches))));
              {
                LINE(474,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(475,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(478,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(482,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(483,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ss073c87ae, "yy_r5_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(485,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(486,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(492,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(494,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(495,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(496,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(503,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 512 */
void c_Smarty_Internal_Configfilelexer::t_yy_r5_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r5_1);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r5_1", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_DOT));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_configfilelexer.php line 517 */
void c_Smarty_Internal_Configfilelexer::t_yy_r5_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Configfilelexer, Smarty_Internal_Configfilelexer::yy_r5_2);
  INTERCEPT_INJECTION("Smarty_Internal_Configfilelexer::yy_r5_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (q_Smarty_Internal_Configfileparser___TPC_SECTION));
  LINE(521,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Configfilelexer() {
  return NEWOBJ(c_Smarty_Internal_Configfilelexer)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_configfilelexer.php, pm_php$Smarty$libs$sysplugins$smarty_internal_configfilelexer_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_configfilelexer) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svib794f8ce, 1LL),
  (int64)&NAMVAR(s_svi90d5f98c, 2LL),
  (int64)&NAMVAR(s_svi5e544a31, 4LL),
  (int64)&NAMVAR(s_svia6bfbbdd, 3LL),
  (int64)&NAMVAR(s_svi6a15d700, 5LL),
  (int64)&null_variant,
  (int64)&s_sva00000000,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x3970634433FD3E52LL,1,0,0,100,4,0,&NAMSTR(s_ss33fd3e52, "START") },
  {0x021A52B45A788597LL,2,1,0,100,4,0,&NAMSTR(s_ss5a788597, "VALUE") },
  {0x16AD79F9AF3ECC0DLL,2,2,0,100,4,0,&NAMSTR(s_ssaf3ecc0d, "COMMENT") },
  {0x776A40D085461F8FLL,-1,3,0,36,4,0,&NAMSTR(s_ss85461f8f, "NAKED_STRING_VALUE") },
  {0x6F15B9E68EFA6B1FLL,0,4,0,100,4,0,&NAMSTR(s_ss8efa6b1f, "SECTION") },

  {0x3ABE29210F711D20LL,5,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_node),&NAMSTR(s_ss22783ac1, "node") },
  {0x34CB33D09D0FB647LL,6,0,33,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m__yy_state),&NAMSTR(s_sseae73682, "\000Smarty_Internal_Configfilelexer\000_yy_state") },
  {0x5B455C27187FC30ELL,6,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_counter),&NAMSTR(s_ssac6f5998, "counter") },
  {0x0D35EC793C95F331LL,-1,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_data),&NAMSTR(s_ssa9853128, "data") },
  {0x021A52B45A788597LL,-4,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_value),&NAMSTR(s_sse0c88471, "value") },
  {0x04AB35CACF8C8C9ALL,4,5,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_line),&NAMSTR(s_ssddf8728c, "line") },
  {0x1D6723825B7147DALL,-5,6,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_smarty_token_names),&NAMSTR(s_ssa8d8e9bb, "smarty_token_names") },
  {0x612798D762CC23DELL,0,6,33,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m__yy_stack),&NAMSTR(s_ss95533bf5, "\000Smarty_Internal_Configfilelexer\000_yy_stack") },
  {0x6513AE01C317AF9FLL,-4,5,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_token),&NAMSTR(s_ss111a03e7, "token") },
  {0x703DF16E6CB95FBFLL,-3,0,33,65,4,GET_PROPERTY_OFFSET(c_Smarty_Internal_Configfilelexer, m_state),&NAMSTR(s_ss7f5e8e11, "\000Smarty_Internal_Configfilelexer\000state") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Configfilelexer hash
  3,-1,2,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,0,-1,-1,
  5,-1,-1,-1,-1,-1,-1,6,-1,-1,-1,-1,-1,-1,7,-1,-1,8,-1,-1,-1,-1,-1,9,-1,-1,10,-1,-1,-1,12,13,
  // Smarty_Internal_Configfilelexer lists
  14,6,12,-1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Configfilelexer::os_prop_table = {
  31,8,-1,-1,15,0,36,0,
  cpt_hash_entries+16,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
