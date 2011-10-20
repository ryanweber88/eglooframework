
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_config.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 437 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Variable)
const InstanceOfInfo c_Smarty_Variable::s_instanceof_table[] = {
  {0x55DCF1C947AFEAA0LL,1,"Smarty_Variable",&cw_Smarty_Variable},
};
const int c_Smarty_Variable::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Variable::ci___tostring((void*)&c_Smarty_Variable::i___tostring, (void*)&c_Smarty_Variable::ifa___tostring, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Variable::ci___construct((void*)&c_Smarty_Variable::i___construct, (void*)&c_Smarty_Variable::ifa___construct, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Variable::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Variable);
  }
  c_Smarty_Variable *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Variable*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Variable::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_Smarty_Variable);
  }
  c_Smarty_Variable *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Variable*>(mcp.obj));
  return (self->t___tostring());
}
Variant c_Smarty_Variable::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Variable);
  }
  c_Smarty_Variable *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Variable*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (false_varNR) : a1);
  TypedValue def2;
  CVarRef arg2(count <= 2 ? *new (&def2) Variant(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))) : a2);
  return (self->t___construct(arg0, arg1, arg2), null);
}
const MethodCallInfoTable c_Smarty_Variable::s_call_info_table[] = {
  { 0x642C2D2994B34A13LL, 1, 10, "__toString", &c_Smarty_Variable::ci___tostring },
  { 0x0D31D0AC229C615FLL, 0, 11, "__construct", &c_Smarty_Variable::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Variable::s_call_info_index[] = {
  3,
  -1,-1,-1,0,
};
c_Smarty_Variable *c_Smarty_Variable::create(CVarRef v_value //  = null_variant
, CVarRef v_nocache //  = false_varNR
, CVarRef v_scope //  = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))
) {
  CountableHelper h(this);
  init();
  t___construct(v_value, v_nocache, v_scope);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Variable = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Variable,
  c_Smarty_Variable::s_call_info_table,c_Smarty_Variable::s_call_info_index,
  c_Smarty_Variable::s_instanceof_table,c_Smarty_Variable::s_instanceof_index,
  &c_Smarty_Variable::s_class_name,
  &c_Smarty_Variable::os_prop_table,&c_Smarty_Variable::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 449 */
void c_Smarty_Variable::t___construct(Variant v_value //  = null
, Variant v_nocache //  = false
, Variant v_scope //  = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Variable, Smarty_Variable::__construct);
  INTERCEPT_INJECTION("Smarty_Variable::__construct", array_createvi(3, toVPOD(v_value), toVPOD(v_nocache), toVPOD(v_scope)), );
  bool oldInCtor = gasInCtor(true);
  m_value.assignVal(v_value);
  m_nocache.assignVal(v_nocache);
  m_scope.assignVal(v_scope);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 456 */
String c_Smarty_Variable::t___tostring() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Variable, Smarty_Variable::__toString);
  INTERCEPT_INJECTION("Smarty_Variable::__toString", null_array, r);
  return toString(m_value);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Data)
const InstanceOfInfo c_Smarty_Internal_Data::s_instanceof_table[] = {
  {0x3223E6318F246CB6LL,1,"Smarty_Internal_Data",&cw_Smarty_Internal_Data},
};
const int c_Smarty_Internal_Data::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Data::ci_configload((void*)&c_Smarty_Internal_Data::i_configload, (void*)&c_Smarty_Internal_Data::ifa_configload, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_assign_by_ref((void*)&c_Smarty_Internal_Data::i_assign_by_ref, (void*)&c_Smarty_Internal_Data::ifa_assign_by_ref, 2, 4, 0x0000000000000002LL);
CallInfo c_Smarty_Internal_Data::ci_append((void*)&c_Smarty_Internal_Data::i_append, (void*)&c_Smarty_Internal_Data::ifa_append, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_getconfigvars((void*)&c_Smarty_Internal_Data::i_getconfigvars, (void*)&c_Smarty_Internal_Data::ifa_getconfigvars, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_clearconfig((void*)&c_Smarty_Internal_Data::i_clearconfig, (void*)&c_Smarty_Internal_Data::ifa_clearconfig, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_getvariable((void*)&c_Smarty_Internal_Data::i_getvariable, (void*)&c_Smarty_Internal_Data::ifa_getvariable, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_assign((void*)&c_Smarty_Internal_Data::i_assign, (void*)&c_Smarty_Internal_Data::ifa_assign, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_clearallassign((void*)&c_Smarty_Internal_Data::i_clearallassign, (void*)&c_Smarty_Internal_Data::ifa_clearallassign, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_clearassign((void*)&c_Smarty_Internal_Data::i_clearassign, (void*)&c_Smarty_Internal_Data::ifa_clearassign, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_assignglobal((void*)&c_Smarty_Internal_Data::i_assignglobal, (void*)&c_Smarty_Internal_Data::ifa_assignglobal, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_getconfigvariable((void*)&c_Smarty_Internal_Data::i_getconfigvariable, (void*)&c_Smarty_Internal_Data::ifa_getconfigvariable, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_assignbyref((void*)&c_Smarty_Internal_Data::i_assignbyref, (void*)&c_Smarty_Internal_Data::ifa_assignbyref, 3, 4, 0x0000000000000002LL);
CallInfo c_Smarty_Internal_Data::ci_getstreamvariable((void*)&c_Smarty_Internal_Data::i_getstreamvariable, (void*)&c_Smarty_Internal_Data::ifa_getstreamvariable, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_append_by_ref((void*)&c_Smarty_Internal_Data::i_append_by_ref, (void*)&c_Smarty_Internal_Data::ifa_append_by_ref, 3, 4, 0x0000000000000002LL);
CallInfo c_Smarty_Internal_Data::ci_gettemplatevars((void*)&c_Smarty_Internal_Data::i_gettemplatevars, (void*)&c_Smarty_Internal_Data::ifa_gettemplatevars, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Data::ci_appendbyref((void*)&c_Smarty_Internal_Data::i_appendbyref, (void*)&c_Smarty_Internal_Data::ifa_appendbyref, 3, 4, 0x0000000000000002LL);
Variant c_Smarty_Internal_Data::i_configload(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_configload, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::configLoad", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_configload(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Data::i_assign_by_ref(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_assign_by_ref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::assign_by_ref", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (self->t_assign_by_ref(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Data::i_append(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_append, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::append", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_append(arg0, arg1, arg2, arg3), null);
  }
}
Variant c_Smarty_Internal_Data::i_getconfigvars(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getconfigvars, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_getconfigvars(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Data::i_clearconfig(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_clearconfig, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_clearconfig(arg0), null);
  }
}
Variant c_Smarty_Internal_Data::i_getvariable(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getvariable, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::getVariable", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_getvariable(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Data::i_assign(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_assign, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::assign", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_assign(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Data::i_clearassign(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_clearassign, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::clearAssign", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_clearassign(arg0), null);
  }
}
Variant c_Smarty_Internal_Data::i_assignglobal(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_assignglobal, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::assignGlobal", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_assignglobal(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Data::i_getconfigvariable(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getconfigvariable, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::getConfigVariable", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getconfigvariable(arg0));
  }
}
Variant c_Smarty_Internal_Data::i_assignbyref(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_assignbyref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::assignByRef", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_assignbyref(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Data::i_getstreamvariable(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getstreamvariable, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::getStreamVariable", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getstreamvariable(arg0));
  }
}
Variant c_Smarty_Internal_Data::i_append_by_ref(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_append_by_ref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::append_by_ref", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_append_by_ref(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Data::i_gettemplatevars(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatevars, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_gettemplatevars(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Data::i_appendbyref(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_appendbyref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::appendByRef", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_appendbyref(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Data::ifa_configload(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_configload, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::configLoad", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  return (self->t_configload(arg0, arg1), null);
}
Variant c_Smarty_Internal_Data::ifa_assign_by_ref(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_assign_by_ref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::assign_by_ref", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(a1));
  return (self->t_assign_by_ref(arg0, arg1), null);
}
Variant c_Smarty_Internal_Data::ifa_append(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::append", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? (false_varNR) : a2);
  CVarRef arg3(count <= 3 ? (false_varNR) : a3);
  return (self->t_append(arg0, arg1, arg2, arg3), null);
}
Variant c_Smarty_Internal_Data::ifa_getconfigvars(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconfigvars, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (true_varNR) : a1);
  return (self->t_getconfigvars(arg0, arg1));
}
Variant c_Smarty_Internal_Data::ifa_clearconfig(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clearconfig, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_clearconfig(arg0), null);
}
Variant c_Smarty_Internal_Data::ifa_getvariable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getvariable, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::getVariable", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? (true_varNR) : a2);
  CVarRef arg3(count <= 3 ? (true_varNR) : a3);
  return (self->t_getvariable(arg0, arg1, arg2, arg3));
}
Variant c_Smarty_Internal_Data::ifa_assign(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_assign, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::assign", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? (false_varNR) : a2);
  return (self->t_assign(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Data::ifa_clearallassign(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clearallassign, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  return (self->t_clearallassign(), null);
}
Variant c_Smarty_Internal_Data::ifa_clearassign(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clearassign, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::clearAssign", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_clearassign(arg0), null);
}
Variant c_Smarty_Internal_Data::ifa_assignglobal(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_assignglobal, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::assignGlobal", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? (false_varNR) : a2);
  return (self->t_assignglobal(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Data::ifa_getconfigvariable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconfigvariable, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::getConfigVariable", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getconfigvariable(arg0));
}
Variant c_Smarty_Internal_Data::ifa_assignbyref(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_assignbyref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::assignByRef", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(a1));
  CVarRef arg2(count <= 2 ? (false_varNR) : a2);
  return (self->t_assignbyref(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Data::ifa_getstreamvariable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getstreamvariable, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Data::getStreamVariable", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getstreamvariable(arg0));
}
Variant c_Smarty_Internal_Data::ifa_append_by_ref(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append_by_ref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::append_by_ref", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(a1));
  CVarRef arg2(count <= 2 ? (false_varNR) : a2);
  return (self->t_append_by_ref(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Data::ifa_gettemplatevars(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatevars, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? (true_varNR) : a2);
  return (self->t_gettemplatevars(arg0, arg1, arg2));
}
Variant c_Smarty_Internal_Data::ifa_appendbyref(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_appendbyref, coo_Smarty_Internal_Data);
  }
  c_Smarty_Internal_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Data*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Data::appendByRef", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(a1));
  CVarRef arg2(count <= 2 ? (false_varNR) : a2);
  return (self->t_appendbyref(arg0, arg1, arg2), null);
}
const MethodCallInfoTable c_Smarty_Internal_Data::s_call_info_table[] = {
  { 0x04BAC5CC6CEEA7A0LL, 1, 10, "configLoad", &c_Smarty_Internal_Data::ci_configload },
  { 0x4DEE4A472DC69EC2LL, 1, 6, "append", &c_Smarty_Internal_Data::ci_append },
  { 0x76E6851F17AB4CE7LL, 1, 17, "getStreamVariable", &c_Smarty_Internal_Data::ci_getstreamvariable },
  { 0x0C25C28197CF1A2BLL, 1, 12, "assignGlobal", &c_Smarty_Internal_Data::ci_assignglobal },
  { 0x413175BA665057EBLL, 0, 17, "getConfigVariable", &c_Smarty_Internal_Data::ci_getconfigvariable },
  { 0x50FCA6E03417C44CLL, 1, 11, "appendByRef", &c_Smarty_Internal_Data::ci_appendbyref },
  { 0x68B1802E4A14390DLL, 1, 11, "getVariable", &c_Smarty_Internal_Data::ci_getvariable },
  { 0x223BE825704BBA4ELL, 1, 13, "getConfigVars", &c_Smarty_Internal_Data::ci_getconfigvars },
  { 0x49F77994DDF9F06ELL, 0, 11, "assignByRef", &c_Smarty_Internal_Data::ci_assignbyref },
  { 0x056FF5EC6C2C7A0FLL, 1, 15, "getTemplateVars", &c_Smarty_Internal_Data::ci_gettemplatevars },
  { 0x53B2FEAD43626754LL, 1, 6, "assign", &c_Smarty_Internal_Data::ci_assign },
  { 0x4077BF2AD80D2374LL, 0, 11, "clearAssign", &c_Smarty_Internal_Data::ci_clearassign },
  { 0x348EADEF7745AD56LL, 1, 13, "assign_by_ref", &c_Smarty_Internal_Data::ci_assign_by_ref },
  { 0x319E09DA14D5E5F9LL, 1, 14, "clearAllAssign", &c_Smarty_Internal_Data::ci_clearallassign },
  { 0x6BED68DAA9C4C77ALL, 1, 13, "append_by_ref", &c_Smarty_Internal_Data::ci_append_by_ref },
  { 0x69B22D41BE6B59BELL, 1, 11, "clearConfig", &c_Smarty_Internal_Data::ci_clearconfig },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Data::s_call_info_index[] = {
  31,
  0,-1,1,-1,-1,-1,-1,2,
  -1,-1,-1,3,5,6,7,9,
  -1,-1,-1,-1,10,-1,12,-1,
  -1,13,14,-1,-1,-1,15,-1,

};
const ObjectStaticCallbacks cw_Smarty_Internal_Data = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Data,
  c_Smarty_Internal_Data::s_call_info_table,c_Smarty_Internal_Data::s_call_info_index,
  c_Smarty_Internal_Data::s_instanceof_table,c_Smarty_Internal_Data::s_instanceof_index,
  &c_Smarty_Internal_Data::s_class_name,
  &c_Smarty_Internal_Data::os_prop_table,0,0,0
};
void c_Smarty_Internal_Data::init() {
  m_template_class = NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template");
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 28 */
void c_Smarty_Internal_Data::t_assign(CVarRef v_tpl_var, CVarRef v_value //  = null_variant
, CVarRef v_nocache //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Data, Smarty_Internal_Data::assign);
  INTERCEPT_INJECTION("Smarty_Internal_Data::assign", array_createvi(3, toVPOD(v_tpl_var), toVPOD(v_value), toVPOD(v_nocache)), );
  Primitive v__key = 0;
  Variant v__val;

  Variant tmp_ref;
  if (x_is_array(v_tpl_var)) {
    {
      {
        LOOP_COUNTER(1);
        for (ArrayIter iter3 = v_tpl_var.begin(s_class_name, true); !iter3.end(); ++iter3) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v__val);
          v__key.assignVal(iter3.first());
          {
            if (!equal(v__key, NAMSTR(s_ss00000000, ""))) {
              {
                {
                  p_Smarty_Variable tmp0 = coo_Smarty_Variable();
                  ((c_Smarty_Variable*)tmp0.get()->create(v__val, v_nocache));
                  LINE(33,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).set(v__key, (VarNR(tmp0)));
                  tmp_ref.unset();
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    {
      if (!equal(v_tpl_var, NAMSTR(s_ss00000000, ""))) {
        {
          {
            p_Smarty_Variable tmp0 = coo_Smarty_Variable();
            ((c_Smarty_Variable*)tmp0.get()->create(v_value, v_nocache));
            LINE(38,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).set(v_tpl_var, (VarNR(tmp0)));
            tmp_ref.unset();
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 49 */
void c_Smarty_Internal_Data::t_assignglobal(CVarRef v_varname, CVarRef v_value //  = null_variant
, CVarRef v_nocache //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::assignGlobal);
  INTERCEPT_INJECTION("Smarty_Internal_Data::assignGlobal", array_createvi(3, toVPOD(v_varname), toVPOD(v_value), toVPOD(v_nocache)), );
  if (!equal(v_varname, NAMSTR(s_ss00000000, ""))) {
    {
      {
        p_Smarty_Variable tmp0 = coo_Smarty_Variable();
        ((c_Smarty_Variable*)tmp0.get()->create(v_value, v_nocache));
        ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars)).set(v_varname, (VarNR(tmp0)));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 62 */
void c_Smarty_Internal_Data::t_assignbyref(CVarRef v_tpl_var, VRefParam rv_value, CVarRef v_nocache //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::assignByRef);
  INTERCEPT_INJECTION("Smarty_Internal_Data::assignByRef", (Array(ArrayInit(3).set(0, v_tpl_var).setRef(1, rv_value).set(2, v_nocache).create())), );
  Variant &v_value ATTRIBUTE_UNUSED = rv_value;
  Variant tmp_ref;
  if (!equal(v_tpl_var, NAMSTR(s_ss00000000, ""))) {
    {
      {
        p_Smarty_Variable tmp0 = coo_Smarty_Variable();
        ((c_Smarty_Variable*)tmp0.get()->create(null, v_nocache));
        LINE(65,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).set(v_tpl_var, (VarNR(tmp0)));
        tmp_ref.unset();
      }
      {
        LINE(66,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v_tpl_var, AccessFlags::CheckExist)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), ref(v_value));
        tmp_ref.unset();
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 76 */
void c_Smarty_Internal_Data::t_assign_by_ref(CVarRef v_tpl_var, VRefParam rv_value) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::assign_by_ref);
  INTERCEPT_INJECTION("Smarty_Internal_Data::assign_by_ref", (Array(ArrayInit(2).set(0, v_tpl_var).setRef(1, rv_value).create())), );
  Variant &v_value ATTRIBUTE_UNUSED = rv_value;
  {
    bool tmp0;
    {
      tmp0 = (LINE(78,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_sseb6ec972, "deprecation_notices"), true)))));
    }
    if (tmp0) {
      LINE(79,(x_trigger_error(NAMSTR(s_ss931d2ef8, "function call 'assign_by_ref' is unknown or deprecated, use 'assignByRef'"), toInt32(1024LL) /* E_USER_NOTICE */)));
    }
  }
  LINE(80,(t_assignbyref(v_tpl_var, ref(v_value))));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 90 */
void c_Smarty_Internal_Data::t_append(CVarRef v_tpl_var, CVarRef v_value //  = null_variant
, CVarRef v_merge //  = false_varNR
, CVarRef v_nocache //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::append);
  INTERCEPT_INJECTION("Smarty_Internal_Data::append", array_createvi(4, toVPOD(v_tpl_var), toVPOD(v_value), toVPOD(v_merge), toVPOD(v_nocache)), );
  Primitive v__key = 0;
  Variant v__val;
  Variant v_tpl_var_inst;
  Primitive v__mkey = 0;
  Variant v__mval;

  Variant tmp_ref;
  if (x_is_array(v_tpl_var)) {
    {
      {
        LOOP_COUNTER(1);
        for (ArrayIter iter3 = v_tpl_var.begin(s_class_name, true); !iter3.end(); ++iter3) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v__val);
          v__key.assignVal(iter3.first());
          {
            if (!equal(v__key, NAMSTR(s_ss00000000, ""))) {
              {
                {
                  bool tmp0;
                  {
                    tmp0 = (!(isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), false), v__key)));
                  }
                  if (tmp0) {
                    {
                      {
                        LINE(97,0);
                        const Variant &tmp0((t_getvariable(v__key, null, true_varNR, false_varNR)));
                        v_tpl_var_inst.assignVal(tmp0);
                      }
                      if (instanceOf(v_tpl_var_inst, NAMSTR(s_ssd94c7c1f, "Undefined_Smarty_Variable"))) {
                        {
                          {
                            p_Smarty_Variable tmp0 = coo_Smarty_Variable();
                            ((c_Smarty_Variable*)tmp0.get()->create(null, v_nocache));
                            LINE(99,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).set(v__key, (VarNR(tmp0)));
                            tmp_ref.unset();
                          }
                        }
                      }
                      else {
                        {
                          {
                            LINE(101,0);
                            Object tmp0((f_clone(v_tpl_var_inst)));
                            GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(v__key, (VarNR(tmp0)));
                            tmp_ref.unset();
                          }
                        }
                      }
                    }
                  }
                }
                {
                  bool tmp0;
                  {
                    LINE(104,0);
                    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(v__key, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                    bool tmp2 = (x_is_array(tmp1));
                    if (!tmp2) {
                      const Variant &tmp3((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(v__key, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                      tmp2 = (instanceOf(tmp3, NAMSTR(s_ss92306c9b, "ArrayAccess")));
                    }
                    tmp0 = (!(tmp2));
                    tmp_ref.unset();
                  }
                  if (tmp0) {
                    {
                      {
                        LINE(105,(x_settype(ref(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v__key, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name)), NAMSTR(s_ss8c04b960, "array"))));
                        tmp_ref.unset();
                      }
                    }
                  }
                }
                if ((toBoolean(v_merge) && x_is_array(v__val))) {
                  {
                    {
                      LOOP_COUNTER(4);
                      for (ArrayIter iter6 = v__val.begin(s_class_name, true); !iter6.end(); ++iter6) {
                        LOOP_COUNTER_CHECK(4);
                        iter6.second(v__mval);
                        v__mkey.assignVal(iter6.first());
                        {
                          {
                            Variant tmp0((v__mval));
                            LINE(109,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v__key, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name))).set(v__mkey, (tmp0));
                            tmp_ref.unset();
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  {
                    {
                      Variant tmp0((v__val));
                      LINE(112,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v__key, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name))).append((tmp0));
                      tmp_ref.unset();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    {
      if ((!equal(v_tpl_var, NAMSTR(s_ss00000000, "")) && isset(v_value))) {
        {
          {
            bool tmp0;
            {
              tmp0 = (!(isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), false), v_tpl_var)));
            }
            if (tmp0) {
              {
                {
                  LINE(119,0);
                  const Variant &tmp0((t_getvariable(v_tpl_var, null, true_varNR, false_varNR)));
                  v_tpl_var_inst.assignVal(tmp0);
                }
                if (instanceOf(v_tpl_var_inst, NAMSTR(s_ssd94c7c1f, "Undefined_Smarty_Variable"))) {
                  {
                    {
                      p_Smarty_Variable tmp0 = coo_Smarty_Variable();
                      ((c_Smarty_Variable*)tmp0.get()->create(null, v_nocache));
                      LINE(121,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).set(v_tpl_var, (VarNR(tmp0)));
                      tmp_ref.unset();
                    }
                  }
                }
                else {
                  {
                    {
                      LINE(123,0);
                      Object tmp0((f_clone(v_tpl_var_inst)));
                      GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(v_tpl_var, (VarNR(tmp0)));
                      tmp_ref.unset();
                    }
                  }
                }
              }
            }
          }
          {
            bool tmp0;
            {
              LINE(126,0);
              const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(v_tpl_var, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              bool tmp2 = (x_is_array(tmp1));
              if (!tmp2) {
                const Variant &tmp3((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(v_tpl_var, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                tmp2 = (instanceOf(tmp3, NAMSTR(s_ss92306c9b, "ArrayAccess")));
              }
              tmp0 = (!(tmp2));
              tmp_ref.unset();
            }
            if (tmp0) {
              {
                {
                  LINE(127,(x_settype(ref(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v_tpl_var, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name)), NAMSTR(s_ss8c04b960, "array"))));
                  tmp_ref.unset();
                }
              }
            }
          }
          if ((toBoolean(v_merge) && x_is_array(v_value))) {
            {
              {
                LOOP_COUNTER(7);
                for (ArrayIter iter9 = v_value.begin(s_class_name, true); !iter9.end(); ++iter9) {
                  LOOP_COUNTER_CHECK(7);
                  iter9.second(v__mval);
                  v__mkey.assignVal(iter9.first());
                  {
                    {
                      Variant tmp0((v__mval));
                      LINE(131,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v_tpl_var, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name))).set(v__mkey, (tmp0));
                      tmp_ref.unset();
                    }
                  }
                }
              }
            }
          }
          else {
            {
              {
                Variant tmp0((v_value));
                LINE(134,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v_tpl_var, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name))).append((tmp0));
                tmp_ref.unset();
              }
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 147 */
void c_Smarty_Internal_Data::t_appendbyref(CVarRef v_tpl_var, VRefParam rv_value, CVarRef v_merge //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::appendByRef);
  INTERCEPT_INJECTION("Smarty_Internal_Data::appendByRef", (Array(ArrayInit(3).set(0, v_tpl_var).setRef(1, rv_value).set(2, v_merge).create())), );
  Variant &v_value ATTRIBUTE_UNUSED = rv_value;
  Primitive v__key = 0;
  Variant v__val;

  Variant tmp_ref;
  if ((!equal(v_tpl_var, NAMSTR(s_ss00000000, "")) && isset(v_value))) {
    {
      {
        bool tmp0;
        {
          tmp0 = (!(isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), false), v_tpl_var)));
        }
        if (tmp0) {
          {
            {
              LINE(151,0);
              const p_Smarty_Variable &tmp0((p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())));
              GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(v_tpl_var, (VarNR(tmp0)));
              tmp_ref.unset();
            }
          }
        }
      }
      {
        bool tmp0;
        {
          Silencer tmp1(true);
          LINE(153,0);
          const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(v_tpl_var, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          bool tmp3((toBoolean(x_is_array(tmp2))));
          tmp1.disable();
          tmp0 = (!(tmp3));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            {
              LINE(154,(x_settype(ref(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v_tpl_var, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name)), NAMSTR(s_ss8c04b960, "array"))));
              tmp_ref.unset();
            }
          }
        }
      }
      if ((toBoolean(v_merge) && x_is_array(v_value))) {
        {
          {
            LOOP_COUNTER(1);
            for (ArrayIter iter3 = v_value.begin(s_class_name, true); !iter3.end(); ++iter3) {
              LOOP_COUNTER_CHECK(1);
              iter3.second(v__val);
              v__key.assignVal(iter3.first());
              {
                {
                  LINE(158,0);
                  const Variant &tmp0((lval(v_value.lvalAt(v__key))));
                  lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v_tpl_var, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name).set(v__key, (ref(tmp0)));
                  tmp_ref.unset();
                }
              }
            }
          }
        }
      }
      else {
        {
          {
            LINE(161,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v_tpl_var, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref, s_class_name))).append((ref(v_value)));
            tmp_ref.unset();
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 172 */
void c_Smarty_Internal_Data::t_append_by_ref(CVarRef v_tpl_var, VRefParam rv_value, CVarRef v_merge //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::append_by_ref);
  INTERCEPT_INJECTION("Smarty_Internal_Data::append_by_ref", (Array(ArrayInit(3).set(0, v_tpl_var).setRef(1, rv_value).set(2, v_merge).create())), );
  Variant &v_value ATTRIBUTE_UNUSED = rv_value;
  {
    bool tmp0;
    {
      tmp0 = (LINE(174,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_sseb6ec972, "deprecation_notices"), true)))));
    }
    if (tmp0) {
      LINE(175,(x_trigger_error(NAMSTR(s_ss0cbcf0b3, "function call 'append_by_ref' is unknown or deprecated, use 'appendByRef'"), toInt32(1024LL) /* E_USER_NOTICE */)));
    }
  }
  LINE(176,(t_appendbyref(v_tpl_var, ref(v_value), v_merge)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 184 */
Variant c_Smarty_Internal_Data::t_gettemplatevars(CVarRef v_varname //  = null_variant
, Variant v__ptr //  = null
, CVarRef v_search_parents //  = true_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::getTemplateVars);
  INTERCEPT_INJECTION("Smarty_Internal_Data::getTemplateVars", array_createvi(3, toVPOD(v_varname), toVPOD(v__ptr), toVPOD(v_search_parents)), r);
  Variant v__var;
  Array v__result;
  Primitive v_key = 0;
  Variant v_var;

  if (isset(v_varname)) {
    {
      {
        LINE(187,0);
        const Variant &tmp0((t_getvariable(v_varname, v__ptr, v_search_parents, false_varNR)));
        v__var.assignVal(tmp0);
      }
      if (x_is_object(v__var)) {
        {
          return LINE(189,(v__var.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        }
      }
      else {
        {
          return null;
        }
      }
    }
  }
  else {
    {
      v__result = s_sa00000000;
      if (x_is_null(v__ptr)) {
        {
          v__ptr = GET_THIS_TYPED(Smarty_Internal_Data);
        }
      }
      LOOP_COUNTER(1);
      {
        while (!(x_is_null(v__ptr))) {
          LOOP_COUNTER_CHECK(1);
          {
            {
              LOOP_COUNTER(2);
              Variant map3 = LINE(198,(v__ptr.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true)));
              for (ArrayIter iter4 = map3.begin(s_class_name, true); !iter4.end(); iter4.next()) {
                LOOP_COUNTER_CHECK(2);
                iter4.second(v_var);
                v_key.assignVal(iter4.first());
                {
                  {
                    bool tmp0;
                    {
                      LINE(199,0);
                      bool tmp1((x_array_key_exists(v_key, VarNR(v__result))));
                      tmp0 = (!(tmp1));
                    }
                    if (tmp0) {
                      {
                        {
                          LINE(200,0);
                          const Variant &tmp0((v_var.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                          v__result.set(v_key, (tmp0));
                        }
                      }
                    }
                  }
                }
              }
            }
            if (toBoolean(v_search_parents)) {
              {
                {
                  LINE(205,0);
                  const Variant &tmp0((v__ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
                  v__ptr.assignVal(tmp0);
                }
              }
            }
            else {
              {
                setNull(v__ptr);
              }
            }
          }
        }
      }
      if ((toBoolean(v_search_parents) && isset(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars))))) {
        {
          {
            LOOP_COUNTER(5);
            Variant map6 = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars));
            for (ArrayIter iter7 = map6.begin(s_class_name, true); !iter7.end(); iter7.next()) {
              LOOP_COUNTER_CHECK(5);
              iter7.second(v_var);
              v_key.assignVal(iter7.first());
              {
                {
                  bool tmp0;
                  {
                    LINE(212,0);
                    bool tmp1((x_array_key_exists(v_key, VarNR(v__result))));
                    tmp0 = (!(tmp1));
                  }
                  if (tmp0) {
                    {
                      {
                        LINE(213,0);
                        const Variant &tmp0((v_var.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                        v__result.set(v_key, (tmp0));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return v__result;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 226 */
void c_Smarty_Internal_Data::t_clearassign(CVarRef v_tpl_var) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Data, Smarty_Internal_Data::clearAssign);
  INTERCEPT_INJECTION("Smarty_Internal_Data::clearAssign", array_createvi(1, toVPOD(v_tpl_var)), );
  Variant v_curr_var;

  Variant tmp_ref;
  if (x_is_array(v_tpl_var)) {
    {
      {
        LOOP_COUNTER(1);
        for (ArrayIter iter3 = v_tpl_var.begin(s_class_name, true); !iter3.end(); ++iter3) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_curr_var);
          {
            {
              LINE(230,(GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).weakRemove(v_curr_var);
              tmp_ref.unset();
            }
          }
        }
      }
    }
  }
  else {
    {
      {
        LINE(233,(GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).weakRemove(v_tpl_var);
        tmp_ref.unset();
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 240 */
void c_Smarty_Internal_Data::t_clearallassign() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::clearAllAssign);
  INTERCEPT_INJECTION("Smarty_Internal_Data::clearAllAssign", null_array, );
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), s_sa00000000);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 251 */
void c_Smarty_Internal_Data::t_configload(CVarRef v_config_file, CVarRef v_sections //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Data, Smarty_Internal_Data::configLoad);
  INTERCEPT_INJECTION("Smarty_Internal_Data::configLoad", array_createvi(2, toVPOD(v_config_file), toVPOD(v_sections)), );
  p_Smarty_Internal_Config v_config;

  {
    p_Smarty_Internal_Config tmp0 = ((checkClassExistsThrow(NAMSTR(s_sse10bc7fa, "Smarty_Internal_Config"), &g->CDEC(smarty_internal_config))), (coo_Smarty_Internal_Config()));
    Variant tmp1((v_config_file));
    LINE(254,0);
    const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    ((c_Smarty_Internal_Config*)tmp0.get()->create(tmp1, tmp2, GET_THIS_TYPED(Smarty_Internal_Data)));
    v_config = tmp0;
  }
  LINE(255,(v_config->t_loadconfigvars(v_sections)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 266 */
Variant c_Smarty_Internal_Data::t_getvariable(Variant v__variable, Variant v__ptr //  = null
, Variant v_search_parents //  = true
, Variant v_error_enable //  = true
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::getVariable);
  INTERCEPT_INJECTION("Smarty_Internal_Data::getVariable", array_createvi(4, toVPOD(v__variable), toVPOD(v__ptr), toVPOD(v_search_parents), toVPOD(v_error_enable)), r);
  p_Smarty_Internal_Data v_this;
  Variant v_x;


  class VariableTable : public RVariableTable {
  public:
    p_Smarty_Internal_Data &v_this; Variant &v__variable; Variant &v__ptr; Variant &v_search_parents; Variant &v_error_enable; Variant &v_x;
    VariableTable(p_Smarty_Internal_Data &r_this, Variant &r__variable, Variant &r__ptr, Variant &r_search_parents, Variant &r_error_enable, Variant &r_x) : v_this(r_this), v__variable(r__variable), v__ptr(r__ptr), v_search_parents(r_search_parents), v_error_enable(r_error_enable), v_x(r_x) {}
    virtual Variant getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 15) {
        case 1:
          HASH_RETURN_NAMSTR(0x00F31DE90234EA81LL, s_sse59fa416, v_x,
                             1);
          break;
        case 7:
          HASH_RETURN_NAMSTR(0x6DE8FAD56722DBE7LL, s_ss84d7897c, v_search_parents,
                             14);
          break;
        case 8:
          HASH_RETURN_NAMSTR(0x17C2767E57B0C968LL, s_ss8069a583, v__ptr,
                             4);
          HASH_RETURN_NAMSTR(0x4E5FA2EE405319B8LL, s_ss48673850, v_error_enable,
                             12);
          break;
        case 11:
          HASH_RETURN_NAMSTR(0x52EF628E7181074BLL, s_ss9c35abf3, v_this,
                             4);
          break;
        case 12:
          HASH_RETURN_NAMSTR(0x01321A69C01E300CLL, s_ss0a1dacb2, v__variable,
                             9);
          break;
        default:
          break;
      }
      return rvalAt(s, AccessFlags::Key);
    }
  } variableTable(v_this, v__variable, v__ptr, v_search_parents, v_error_enable, v_x);
  RVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  v_this = this;
  if (x_is_null(v__ptr)) {
    {
      v__ptr = GET_THIS_TYPED(Smarty_Internal_Data);
    }
  }
  LOOP_COUNTER(1);
  {
    while (!(x_is_null(v__ptr))) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            tmp0 = (isset(LINE(271,(v__ptr.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), false))), v__variable));
          }
          if (tmp0) {
            {
              {
                return LINE(273,(v__ptr.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalAt(v__variable, AccessFlags::Error)));
              }
            }
          }
        }
        if (toBoolean(v_search_parents)) {
          {
            {
              LINE(277,0);
              const Variant &tmp0((v__ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
              v__ptr.assignVal(tmp0);
            }
          }
        }
        else {
          {
            setNull(v__ptr);
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      Variant tmp1((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars))));
      tmp0 = (isset(tmp1, v__variable));
    }
    if (tmp0) {
      {
        return LINE(284,(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars)).rvalAt(v__variable, AccessFlags::Error)));
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = ((LINE(286,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss58f93ebc, "error_unassigned"), true)))) && toBoolean(v_error_enable)));
    }
    if (tmp0) {
      {
        {
          p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
          throw_exception(LINE(287,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssc2479da9, "Undefined Smarty variable \""), toString(v__variable), NAMSTR(s_ss7e5fc106, "\"")))), tmp0))));
        }
      }
    }
    else {
      {
        if (toBoolean(v_error_enable)) {
          {
            v_x.assignVal(variables->get(toString(v__variable)));
          }
        }
        return LINE(293,(p_Undefined_Smarty_Variable(((c_Undefined_Smarty_Variable*)coo_Undefined_Smarty_Variable()))));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 302 */
Variant c_Smarty_Internal_Data::t_getconfigvariable(Variant v__variable) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::getConfigVariable);
  INTERCEPT_INJECTION("Smarty_Internal_Data::getConfigVariable", array_createvi(1, toVPOD(v__variable)), r);
  p_Smarty_Internal_Data v_this;
  Variant v__ptr;
  Variant v_x;


  class VariableTable : public RVariableTable {
  public:
    p_Smarty_Internal_Data &v_this; Variant &v__variable; Variant &v__ptr; Variant &v_x;
    VariableTable(p_Smarty_Internal_Data &r_this, Variant &r__variable, Variant &r__ptr, Variant &r_x) : v_this(r_this), v__variable(r__variable), v__ptr(r__ptr), v_x(r_x) {}
    virtual Variant getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 7) {
        case 0:
          HASH_RETURN_NAMSTR(0x17C2767E57B0C968LL, s_ss8069a583, v__ptr,
                             4);
          break;
        case 1:
          HASH_RETURN_NAMSTR(0x00F31DE90234EA81LL, s_sse59fa416, v_x,
                             1);
          break;
        case 3:
          HASH_RETURN_NAMSTR(0x52EF628E7181074BLL, s_ss9c35abf3, v_this,
                             4);
          break;
        case 4:
          HASH_RETURN_NAMSTR(0x01321A69C01E300CLL, s_ss0a1dacb2, v__variable,
                             9);
          break;
        default:
          break;
      }
      return rvalAt(s, AccessFlags::Key);
    }
  } variableTable(v_this, v__variable, v__ptr, v_x);
  RVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  v_this = this;
  v__ptr = GET_THIS_TYPED(Smarty_Internal_Data);
  LOOP_COUNTER(1);
  {
    while (!(x_is_null(v__ptr))) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            tmp0 = (isset(v__ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), false), v__variable));
          }
          if (tmp0) {
            {
              {
                return LINE(308,(v__ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true).rvalAt(v__variable, AccessFlags::Error)));
              }
            }
          }
        }
        {
          LINE(311,0);
          const Variant &tmp0((v__ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
          v__ptr.assignVal(tmp0);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(313,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss58f93ebc, "error_unassigned"), true)))));
    }
    if (tmp0) {
      {
        {
          p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
          throw_exception(LINE(314,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss40649778, "Undefined config variable \""), toString(v__variable), NAMSTR(s_ss7e5fc106, "\"")))), tmp0))));
        }
      }
    }
    else {
      {
        v_x.assignVal(variables->get(toString(v__variable)));
        return null;
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 328 */
Variant c_Smarty_Internal_Data::t_getstreamvariable(CVarRef v_variable) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::getStreamVariable);
  INTERCEPT_INJECTION("Smarty_Internal_Data::getStreamVariable", array_createvi(1, toVPOD(v_variable)), r);
  String v__result;
  Variant v_fp;
  Variant v_current_line;

  v__result = NAMSTR(s_ss00000000, "");
  {
    bool tmp0;
    {
      LINE(331,0);
      const Variant &tmp1((x_fopen(toString(v_variable), NAMSTR(s_ssc0096822, "r+"))));
      tmp0 = (toBoolean(v_fp.assignVal(tmp1)));
    }
    if (tmp0) {
      {
        LOOP_COUNTER(1);
        {
          {
            StringBuffer tmp_sbuf_v__result(512);
            while (true) {
              {
                LINE(332,0);
                bool tmp0((x_feof(toObject(v_fp))));
                bool tmp1 = (!(tmp0));
                if (tmp1) {
                  const Variant &tmp2((x_fgets(toObject(v_fp))));
                  tmp1 = (!same(v_current_line.assignVal(tmp2), false));
                }
                if (!(tmp1)) break;
              }
              LOOP_COUNTER_CHECK(1);
              {
                tmp_sbuf_v__result.addWithTaint(toString(v_current_line));
              }
            }
            concat_assign(v__result, tmp_sbuf_v__result.detachWithTaint());
          }
        }
        LINE(335,(x_fclose(toObject(v_fp))));
        return v__result;
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(339,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss58f93ebc, "error_unassigned"), true)))));
    }
    if (tmp0) {
      {
        {
          p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
          throw_exception(LINE(340,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssaf03c675, "Undefined stream variable \""), toString(v_variable), NAMSTR(s_ss7e5fc106, "\"")))), tmp0))));
        }
      }
    }
    else {
      {
        return null;
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 352 */
Variant c_Smarty_Internal_Data::t_getconfigvars(CVarRef v_varname //  = null_variant
, CVarRef v_search_parents //  = true_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::getConfigVars);
  INTERCEPT_INJECTION("Smarty_Internal_Data::getConfigVars", array_createvi(2, toVPOD(v_varname), toVPOD(v_search_parents)), r);
  Variant v__ptr;
  Variant v_var_array;

  v__ptr = GET_THIS_TYPED(Smarty_Internal_Data);
  v_var_array = s_sa00000000;
  LOOP_COUNTER(1);
  {
    while (!(x_is_null(v__ptr))) {
      LOOP_COUNTER_CHECK(1);
      {
        if (isset(v_varname)) {
          {
            {
              bool tmp0;
              {
                tmp0 = (isset(v__ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), false), v_varname));
              }
              if (tmp0) {
                {
                  {
                    return LINE(360,(v__ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true).rvalAt(v_varname, AccessFlags::Error)));
                  }
                }
              }
            }
          }
        }
        else {
          {
            {
              LINE(363,0);
              const Variant &tmp0((v__ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true)));
              const Variant &tmp1((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(v_var_array))))));
              v_var_array.assignVal(tmp1);
            }
          }
        }
        if (toBoolean(v_search_parents)) {
          {
            {
              LINE(367,0);
              const Variant &tmp0((v__ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
              v__ptr.assignVal(tmp0);
            }
          }
        }
        else {
          {
            setNull(v__ptr);
          }
        }
      }
    }
  }
  if (isset(v_varname)) {
    {
      return NAMSTR(s_ss00000000, "");
    }
  }
  else {
    {
      return v_var_array;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 384 */
void c_Smarty_Internal_Data::t_clearconfig(CVarRef v_varname //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Data, Smarty_Internal_Data::clearConfig);
  INTERCEPT_INJECTION("Smarty_Internal_Data::clearConfig", array_createvi(1, toVPOD(v_varname)), );
  Variant tmp_ref;
  if (isset(v_varname)) {
    {
      {
        LINE(387,(GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss4fdfffb6, "config_vars"), tmp_ref, s_class_name))).weakRemove(v_varname);
        tmp_ref.unset();
      }
      return;
    }
  }
  else {
    {
      GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), s_sa00000000);
      return;
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 404 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Data)
const InstanceOfInfo c_Smarty_Data::s_instanceof_table[] = {
  {0x6D0BD872DDAFCC34LL,1,"Smarty_Data",&cw_Smarty_Data},
  {0x3223E6318F246CB6LL,1,"Smarty_Internal_Data",&cw_Smarty_Internal_Data},
};
const int c_Smarty_Data::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Data::ci___construct((void*)&c_Smarty_Data::i___construct, (void*)&c_Smarty_Data::ifa___construct, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Data::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Data);
  }
  c_Smarty_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Data*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_Smarty_Data::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Data);
  }
  c_Smarty_Data *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Data*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
const MethodCallInfoTable c_Smarty_Data::s_call_info_table[] = {
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Data::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Data::s_call_info_index[] = {
  1,
  -1,0,
};
c_Smarty_Data *c_Smarty_Data::create(CVarRef v__parent //  = null_variant
, CVarRef v_smarty //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v__parent, v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Data = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Data,
  c_Smarty_Data::s_call_info_table,c_Smarty_Data::s_call_info_index,
  c_Smarty_Data::s_instanceof_table,c_Smarty_Data::s_instanceof_index,
  &c_Smarty_Data::s_class_name,
  &c_Smarty_Data::os_prop_table,&c_Smarty_Data::ci___construct,0,&cw_Smarty_Internal_Data
};
void c_Smarty_Data::init() {
  c_Smarty_Internal_Data::init();
  m_tpl_vars = s_sa00000000;
  m_config_vars = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 416 */
void c_Smarty_Data::t___construct(Variant v__parent //  = null
, Variant v_smarty //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Data, Smarty_Data::__construct);
  INTERCEPT_INJECTION("Smarty_Data::__construct", array_createvi(2, toVPOD(v__parent), toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Primitive v__key = 0;
  Variant v__val;

  m_smarty.assignVal(v_smarty);
  if (x_is_object(v__parent)) {
    {
      m_parent.assignVal(v__parent);
    }
  }
  else if (x_is_array(v__parent)) {
    {
      {
        LOOP_COUNTER(1);
        for (ArrayIter iter3 = v__parent.begin(s_class_name, true); !iter3.end(); ++iter3) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v__val);
          v__key.assignVal(iter3.first());
          {
            {
              p_Smarty_Variable tmp0 = coo_Smarty_Variable();
              ((c_Smarty_Variable*)tmp0.get()->create(v__val));
              m_tpl_vars.set(v__key, (VarNR(tmp0)));
            }
          }
        }
      }
    }
  }
  else if (!equal(v__parent, null)) {
    {
      throw_exception(LINE(428,(((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (p_SmartyException(((c_SmartyException*)coo_SmartyException())->create(NAMVAR(s_svs4a1d8ae7, "Wrong type for template variables"))))))));
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 467 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Undefined_Smarty_Variable)
const InstanceOfInfo c_Undefined_Smarty_Variable::s_instanceof_table[] = {
  {0x5F3B83A9C66AA8D4LL,1,"Undefined_Smarty_Variable",&cw_Undefined_Smarty_Variable},
};
const int c_Undefined_Smarty_Variable::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Undefined_Smarty_Variable::ci___get((void*)&c_Undefined_Smarty_Variable::i___get, (void*)&c_Undefined_Smarty_Variable::ifa___get, 1, 4, 0x0000000000000000LL);
Variant c_Undefined_Smarty_Variable::i___get(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___get, coo_Undefined_Smarty_Variable);
  }
  c_Undefined_Smarty_Variable *self ATTRIBUTE_UNUSED (static_cast<c_Undefined_Smarty_Variable*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Undefined_Smarty_Variable::__get", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___get(arg0));
  }
}
Variant c_Undefined_Smarty_Variable::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_Undefined_Smarty_Variable);
  }
  c_Undefined_Smarty_Variable *self ATTRIBUTE_UNUSED (static_cast<c_Undefined_Smarty_Variable*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Undefined_Smarty_Variable::__get", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___get(arg0));
}
const MethodCallInfoTable c_Undefined_Smarty_Variable::s_call_info_table[] = {
  { 0x26B6E00C74FA338FLL, 1, 5, "__get", &c_Undefined_Smarty_Variable::ci___get },
  { 0, 1, 0, 0 }
};
const int c_Undefined_Smarty_Variable::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Undefined_Smarty_Variable = {
  (ObjectData*(*)(ObjectData*))coo_Undefined_Smarty_Variable,
  c_Undefined_Smarty_Variable::s_call_info_table,c_Undefined_Smarty_Variable::s_call_info_index,
  c_Undefined_Smarty_Variable::s_instanceof_table,c_Undefined_Smarty_Variable::s_instanceof_index,
  &c_Undefined_Smarty_Variable::s_class_name,
  0,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 469 */
Variant c_Undefined_Smarty_Variable::t___get(Variant v_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Undefined_Smarty_Variable, Undefined_Smarty_Variable::__get);
  INTERCEPT_INJECTION("Undefined_Smarty_Variable::__get", array_createvi(1, toVPOD(v_name)), r);
  if (equal(v_name, NAMSTR(s_ss8b74ea02, "nocache"))) {
    {
      return false;
    }
  }
  else {
    {
      return null;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Variable() {
  return NEWOBJ(c_Smarty_Variable)();
}
ObjectData *coo_Smarty_Internal_Data() {
  return NEWOBJ(c_Smarty_Internal_Data)();
}
ObjectData *coo_Smarty_Data() {
  return NEWOBJ(c_Smarty_Data)();
}
ObjectData *coo_Undefined_Smarty_Variable() {
  return NEWOBJ(c_Undefined_Smarty_Variable)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_data_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_data.php, pm_php$Smarty$libs$sysplugins$smarty_internal_data_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_data) = true;
  g->CDEC(smarty_variable) = true;
  g->CDEC(undefined_smarty_variable) = true;
  g->CDEC(smarty_data) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva00000000,
  (int64)&null_variant,
  (int64)&NAMVAR(s_svs8c4725e0, "Smarty_Internal_Template"),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x609ABB71973D8E20LL,2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Data, m_tpl_vars),&NAMSTR(s_ss62b7404c, "tpl_vars") },
  {0x0CDC655BF5DA2ACALL,0,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Data, m_smarty),&NAMSTR(s_ss675664bf, "smarty") },
  {0x53DCFFF92D13045ELL,1,1,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Data, m_parent),&NAMSTR(s_ssfb10fd8c, "parent") },
  {0x64D8740D5654DD66LL,-2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Data, m_config_vars),&NAMSTR(s_ss4fdfffb6, "config_vars") },

  {0x339F6400B92E4A21LL,0,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Data, m_template_class),&NAMSTR(s_ssb4c1cabc, "template_class") },

  {0x40F1D355677A2D22LL,1,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Variable, m_nocache),&NAMSTR(s_ss8b74ea02, "nocache") },
  {0x483C487F970F2C96LL,0,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Variable, m_scope),&NAMSTR(s_ss4d6447e5, "scope") },
  {0x021A52B45A788597LL,-2,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Variable, m_value),&NAMSTR(s_sse0c88471, "value") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Data hash
  0,-1,1,-1,-1,-1,2,-1,
  // Smarty_Data lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Data hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Data lists
  -1,
  -1,
  -1,
  // Smarty_Variable hash
  -1,-1,0,-1,-1,-1,1,2,
  // Smarty_Variable lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Data::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_Data::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Data::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+11,0,cpt_table_entries+4,cpt_static_inits
};
const ClassPropTable c_Smarty_Variable::os_prop_table = {
  7,2,-1,-1,-1,-1,9,0,
  cpt_hash_entries+22,0,cpt_table_entries+5,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
