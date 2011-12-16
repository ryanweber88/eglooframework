
#include <php/Smarty/libs/sysplugins/smarty_internal_template.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_debug.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_filter_handler.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_get_include_path.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_registered.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_stream.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_wrapper.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_write_file.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Template)
const InstanceOfInfo c_Smarty_Internal_Template::s_instanceof_table[] = {
  {0x23E084E03A94BE71LL,1,"Smarty_Internal_Template",&cw_Smarty_Internal_Template},
  {0x3223E6318F246CB6LL,1,"Smarty_Internal_Data",&cw_Smarty_Internal_Data},
};
const int c_Smarty_Internal_Template::s_instanceof_index[] = {
  3,
  -1,0,1,-1,
};
Variant c_Smarty_Internal_Template::doCall(Variant v_name, Variant v_arguments, bool fatal) {
  return t___call(v_name, !v_arguments.isNull() ? v_arguments : Variant(Array::Create()));
}
CallInfo c_Smarty_Internal_Template::ci_createpropertyheader((void*)&c_Smarty_Internal_Template::i_createpropertyheader, (void*)&c_Smarty_Internal_Template::ifa_createpropertyheader, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_display((void*)&c_Smarty_Internal_Template::i_display, (void*)&c_Smarty_Internal_Template::ifa_display, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_rendertemplate((void*)&c_Smarty_Internal_Template::i_rendertemplate, (void*)&c_Smarty_Internal_Template::ifa_rendertemplate, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Template::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Template::ifa_getcompiledfilepath, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_getcachedcontent((void*)&c_Smarty_Internal_Template::i_getcachedcontent, (void*)&c_Smarty_Internal_Template::ifa_getcachedcontent, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_getcachedtimestamp((void*)&c_Smarty_Internal_Template::i_getcachedtimestamp, (void*)&c_Smarty_Internal_Template::ifa_getcachedtimestamp, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_gettemplatesource((void*)&c_Smarty_Internal_Template::i_gettemplatesource, (void*)&c_Smarty_Internal_Template::ifa_gettemplatesource, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci___set((void*)&c_Smarty_Internal_Template::i___set, (void*)&c_Smarty_Internal_Template::ifa___set, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_iscached((void*)&c_Smarty_Internal_Template::i_iscached, (void*)&c_Smarty_Internal_Template::ifa_iscached, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci__count((void*)&c_Smarty_Internal_Template::i__count, (void*)&c_Smarty_Internal_Template::ifa__count, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci___construct((void*)&c_Smarty_Internal_Template::i___construct, (void*)&c_Smarty_Internal_Template::ifa___construct, 7, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_parseresourcename((void*)&c_Smarty_Internal_Template::i_parseresourcename, (void*)&c_Smarty_Internal_Template::ifa_parseresourcename, 4, 4, 0x000000000000000ELL);
CallInfo c_Smarty_Internal_Template::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Template::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Template::ifa_gettemplatetimestamp, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_mustcompile((void*)&c_Smarty_Internal_Template::i_mustcompile, (void*)&c_Smarty_Internal_Template::ifa_mustcompile, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_createlocalarrayvariable((void*)&c_Smarty_Internal_Template::i_createlocalarrayvariable, (void*)&c_Smarty_Internal_Template::ifa_createlocalarrayvariable, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_compiletemplatesource((void*)&c_Smarty_Internal_Template::i_compiletemplatesource, (void*)&c_Smarty_Internal_Template::ifa_compiletemplatesource, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_getcompiledtimestamp((void*)&c_Smarty_Internal_Template::i_getcompiledtimestamp, (void*)&c_Smarty_Internal_Template::ifa_getcompiledtimestamp, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_getcachedfilepath((void*)&c_Smarty_Internal_Template::i_getcachedfilepath, (void*)&c_Smarty_Internal_Template::ifa_getcachedfilepath, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Template::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Template::ifa_gettemplatefilepath, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_isexisting((void*)&c_Smarty_Internal_Template::i_isexisting, (void*)&c_Smarty_Internal_Template::ifa_isexisting, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_writecachedcontent((void*)&c_Smarty_Internal_Template::i_writecachedcontent, (void*)&c_Smarty_Internal_Template::ifa_writecachedcontent, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_getcompiledtemplate((void*)&c_Smarty_Internal_Template::i_getcompiledtemplate, (void*)&c_Smarty_Internal_Template::ifa_getcompiledtemplate, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_buildtemplatefilepath((void*)&c_Smarty_Internal_Template::i_buildtemplatefilepath, (void*)&c_Smarty_Internal_Template::ifa_buildtemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_loadtemplateresourcehandler((void*)&c_Smarty_Internal_Template::i_loadtemplateresourcehandler, (void*)&c_Smarty_Internal_Template::ifa_loadtemplateresourcehandler, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci___get((void*)&c_Smarty_Internal_Template::i___get, (void*)&c_Smarty_Internal_Template::ifa___get, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_decodeproperties((void*)&c_Smarty_Internal_Template::i_decodeproperties, (void*)&c_Smarty_Internal_Template::ifa_decodeproperties, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_getresourcetypename((void*)&c_Smarty_Internal_Template::i_getresourcetypename, (void*)&c_Smarty_Internal_Template::ifa_getresourcetypename, 3, 4, 0x0000000000000006LL);
CallInfo c_Smarty_Internal_Template::ci_getrenderedtemplate((void*)&c_Smarty_Internal_Template::i_getrenderedtemplate, (void*)&c_Smarty_Internal_Template::ifa_getrenderedtemplate, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_fetch((void*)&c_Smarty_Internal_Template::i_fetch, (void*)&c_Smarty_Internal_Template::ifa_fetch, 5, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci___call((void*)&c_Smarty_Internal_Template::i___call, (void*)&c_Smarty_Internal_Template::ifa___call, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Template::ci_updateparentvariables((void*)&c_Smarty_Internal_Template::i_updateparentvariables, (void*)&c_Smarty_Internal_Template::ifa_updateparentvariables, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Template::i_createpropertyheader(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_createpropertyheader, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? Variant(false) : (ad->getValue(pos)));
    return (self->t_createpropertyheader(arg0));
  }
}
Variant c_Smarty_Internal_Template::i_display(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_display, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_display(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Template::i___set(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___set, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Template::__set", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___set(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Template::i_iscached(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_iscached, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_iscached(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Template::i__count(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i__count, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::_count", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t__count(arg0));
  }
}
Variant c_Smarty_Internal_Template::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Template::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg5(count <= 5 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg6(count <= 6 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5, arg6), null);
  }
}
Variant c_Smarty_Internal_Template::i_parseresourcename(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_parseresourcename, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Template::parseResourceName", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    VRefParam arg2(UNLIKELY(count <= 2) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    VRefParam arg3(UNLIKELY(count <= 3) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (self->t_parseresourcename(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Template::i_createlocalarrayvariable(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_createlocalarrayvariable, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::createLocalArrayVariable", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_createlocalarrayvariable(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Template::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? Variant(false) : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Template::i_writecachedcontent(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_writecachedcontent, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::writeCachedContent", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_writecachedcontent(arg0));
  }
}
Variant c_Smarty_Internal_Template::i_buildtemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_buildtemplatefilepath, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_buildtemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Template::i_loadtemplateresourcehandler(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_loadtemplateresourcehandler, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::loadTemplateResourceHandler", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_loadtemplateresourcehandler(arg0));
  }
}
Variant c_Smarty_Internal_Template::i___get(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___get, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::__get", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___get(arg0));
  }
}
Variant c_Smarty_Internal_Template::i_decodeproperties(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_decodeproperties, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::decodeProperties", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_decodeproperties(arg0), null);
  }
}
Variant c_Smarty_Internal_Template::i_getresourcetypename(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getresourcetypename, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Template::getResourceTypeName", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    VRefParam arg2(UNLIKELY(count <= 2) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (self->t_getresourcetypename(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Template::i_fetch(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_fetch, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_fetch(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty_Internal_Template::i___call(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___call, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Template::__call", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___call(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Template::i_updateparentvariables(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_updateparentvariables, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? Variant(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))) : (ad->getValue(pos)));
    return (self->t_updateparentvariables(arg0), null);
  }
}
Variant c_Smarty_Internal_Template::ifa_createpropertyheader(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createpropertyheader, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  CVarRef arg0(count <= 0 ? (false_varNR) : a0);
  return (self->t_createpropertyheader(arg0));
}
Variant c_Smarty_Internal_Template::ifa_display(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_display, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  return (self->t_display(arg0, arg1, arg2, arg3));
}
Variant c_Smarty_Internal_Template::ifa_rendertemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rendertemplate, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_rendertemplate(), null);
}
Variant c_Smarty_Internal_Template::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_getcompiledfilepath());
}
Variant c_Smarty_Internal_Template::ifa_getcachedcontent(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcachedcontent, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_getcachedcontent());
}
Variant c_Smarty_Internal_Template::ifa_getcachedtimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcachedtimestamp, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_getcachedtimestamp());
}
Variant c_Smarty_Internal_Template::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_gettemplatesource());
}
Variant c_Smarty_Internal_Template::ifa___set(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___set, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Template::__set", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___set(arg0, arg1));
}
Variant c_Smarty_Internal_Template::ifa_iscached(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_iscached, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  return (self->t_iscached(arg0, arg1, arg2, arg3));
}
Variant c_Smarty_Internal_Template::ifa__count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa__count, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::_count", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t__count(arg0));
}
Variant c_Smarty_Internal_Template::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Template::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  CVarRef arg4(count <= 4 ? null_variant : a4);
  CVarRef arg5(count <= 5 ? null_variant : a5);
  return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5), null);
}
Variant c_Smarty_Internal_Template::ifa_parseresourcename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_parseresourcename, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Template::parseResourceName", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(a1));
  VRefParam arg2(UNLIKELY(count <= 2) ? (VRefParamValue()) : vref(a2));
  VRefParam arg3(UNLIKELY(count <= 3) ? (VRefParamValue()) : vref(a3));
  return (self->t_parseresourcename(arg0, arg1, arg2, arg3));
}
Variant c_Smarty_Internal_Template::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_gettemplatetimestamp());
}
Variant c_Smarty_Internal_Template::ifa_mustcompile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_mustcompile, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_mustcompile());
}
Variant c_Smarty_Internal_Template::ifa_createlocalarrayvariable(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createlocalarrayvariable, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::createLocalArrayVariable", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (false_varNR) : a1);
  TypedValue def2;
  CVarRef arg2(count <= 2 ? *new (&def2) Variant(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))) : a2);
  return (self->t_createlocalarrayvariable(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Template::ifa_compiletemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compiletemplatesource, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_compiletemplatesource(), null);
}
Variant c_Smarty_Internal_Template::ifa_getcompiledtimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledtimestamp, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_getcompiledtimestamp());
}
Variant c_Smarty_Internal_Template::ifa_getcachedfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcachedfilepath, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_getcachedfilepath());
}
Variant c_Smarty_Internal_Template::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_gettemplatefilepath());
}
Variant c_Smarty_Internal_Template::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  CVarRef arg0(count <= 0 ? (false_varNR) : a0);
  return (self->t_isexisting(arg0));
}
Variant c_Smarty_Internal_Template::ifa_writecachedcontent(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writecachedcontent, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::writeCachedContent", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_writecachedcontent(arg0));
}
Variant c_Smarty_Internal_Template::ifa_getcompiledtemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledtemplate, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_getcompiledtemplate());
}
Variant c_Smarty_Internal_Template::ifa_buildtemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_buildtemplatefilepath, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_buildtemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Template::ifa_loadtemplateresourcehandler(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadtemplateresourcehandler, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::loadTemplateResourceHandler", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_loadtemplateresourcehandler(arg0));
}
Variant c_Smarty_Internal_Template::ifa___get(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___get, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::__get", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___get(arg0));
}
Variant c_Smarty_Internal_Template::ifa_decodeproperties(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_decodeproperties, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Template::decodeProperties", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_decodeproperties(arg0), null);
}
Variant c_Smarty_Internal_Template::ifa_getresourcetypename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getresourcetypename, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Template::getResourceTypeName", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  VRefParam arg1(UNLIKELY(count <= 1) ? (VRefParamValue()) : vref(a1));
  VRefParam arg2(UNLIKELY(count <= 2) ? (VRefParamValue()) : vref(a2));
  return (self->t_getresourcetypename(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Template::ifa_getrenderedtemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getrenderedtemplate, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  return (self->t_getrenderedtemplate());
}
Variant c_Smarty_Internal_Template::ifa_fetch(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetch, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  CVarRef arg4(count <= 4 ? (false_varNR) : a4);
  return (self->t_fetch(arg0, arg1, arg2, arg3, arg4));
}
Variant c_Smarty_Internal_Template::ifa___call(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___call, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Template::__call", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___call(arg0, arg1));
}
Variant c_Smarty_Internal_Template::ifa_updateparentvariables(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_updateparentvariables, coo_Smarty_Internal_Template);
  }
  c_Smarty_Internal_Template *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Template*>(mcp.obj));
  TypedValue def0;
  CVarRef arg0(count <= 0 ? *new (&def0) Variant(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))) : a0);
  return (self->t_updateparentvariables(arg0), null);
}
const MethodCallInfoTable c_Smarty_Internal_Template::s_call_info_table[] = {
  { 0x66FE9E86B0B444C5LL, 1, 18, "writeCachedContent", &c_Smarty_Internal_Template::ci_writecachedcontent },
  { 0x77E6F2896CC3A2C6LL, 1, 21, "compileTemplateSource", &c_Smarty_Internal_Template::ci_compiletemplatesource },
  { 0x56A4538073E97E08LL, 1, 6, "_count", &c_Smarty_Internal_Template::ci__count },
  { 0x57EC16184F4685CALL, 1, 20, "getCompiledTimestamp", &c_Smarty_Internal_Template::ci_getcompiledtimestamp },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Template::ci_gettemplatetimestamp },
  { 0x26B6E00C74FA338FLL, 1, 5, "__get", &c_Smarty_Internal_Template::ci___get },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Template::ci_getcompiledfilepath },
  { 0x52F3DAD783340395LL, 0, 5, "__set", &c_Smarty_Internal_Template::ci___set },
  { 0x2484F07065CD0316LL, 1, 20, "createPropertyHeader", &c_Smarty_Internal_Template::ci_createpropertyheader },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Template::ci_gettemplatefilepath },
  { 0x1FCE3013C4ADDB99LL, 1, 18, "getCachedTimestamp", &c_Smarty_Internal_Template::ci_getcachedtimestamp },
  { 0x71C031BE90BD0419LL, 0, 27, "loadTemplateResourceHandler", &c_Smarty_Internal_Template::ci_loadtemplateresourcehandler },
  { 0x1DECFC5A7CD5F11DLL, 1, 14, "renderTemplate", &c_Smarty_Internal_Template::ci_rendertemplate },
  { 0x24EB611B03892C1DLL, 0, 11, "mustCompile", &c_Smarty_Internal_Template::ci_mustcompile },
  { 0x797A6FC6339ADA9ELL, 1, 7, "display", &c_Smarty_Internal_Template::ci_display },
  { 0x4294428CC2B1A75ELL, 0, 21, "buildTemplateFilepath", &c_Smarty_Internal_Template::ci_buildtemplatefilepath },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Template::ci___construct },
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Template::ci_gettemplatesource },
  { 0x4ECE00586BE63F21LL, 1, 19, "getRenderedTemplate", &c_Smarty_Internal_Template::ci_getrenderedtemplate },
  { 0x15AB8788D252F127LL, 1, 16, "getCachedContent", &c_Smarty_Internal_Template::ci_getcachedcontent },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Template::ci_isexisting },
  { 0x7F20D301A42CD5EBLL, 1, 17, "getCachedFilepath", &c_Smarty_Internal_Template::ci_getcachedfilepath },
  { 0x5D73364F53CEEB6CLL, 1, 6, "__call", &c_Smarty_Internal_Template::ci___call },
  { 0x7F9A88AC33812FF2LL, 1, 17, "parseResourceName", &c_Smarty_Internal_Template::ci_parseresourcename },
  { 0x279B2A848BB281F3LL, 1, 8, "isCached", &c_Smarty_Internal_Template::ci_iscached },
  { 0x68BCD7B317388BF6LL, 1, 19, "getCompiledTemplate", &c_Smarty_Internal_Template::ci_getcompiledtemplate },
  { 0x320B7EE8B254DF36LL, 0, 19, "getResourceTypeName", &c_Smarty_Internal_Template::ci_getresourcetypename },
  { 0x064FDB8C63DDDFB8LL, 1, 24, "createLocalArrayVariable", &c_Smarty_Internal_Template::ci_createlocalarrayvariable },
  { 0x5E82B850BB90B0FBLL, 1, 5, "fetch", &c_Smarty_Internal_Template::ci_fetch },
  { 0x010EDFCFBD294B7BLL, 0, 21, "updateParentVariables", &c_Smarty_Internal_Template::ci_updateparentvariables },
  { 0x75BBAB11B1ED4BBFLL, 1, 16, "decodeProperties", &c_Smarty_Internal_Template::ci_decodeproperties },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Template::s_call_info_index[] = {
  63,
  -1,-1,-1,-1,-1,0,1,-1,
  2,-1,3,-1,4,-1,-1,5,
  -1,-1,-1,-1,-1,6,8,-1,
  9,10,-1,-1,-1,12,14,16,
  17,18,-1,-1,-1,-1,-1,19,
  -1,20,-1,21,22,-1,-1,-1,
  -1,-1,23,24,-1,-1,25,-1,
  27,-1,-1,28,-1,-1,-1,30,

};
c_Smarty_Internal_Template *c_Smarty_Internal_Template::create(CVarRef v_template_resource, CVarRef v_smarty, CVarRef v__parent //  = null_variant
, CVarRef v__cache_id //  = null_variant
, CVarRef v__compile_id //  = null_variant
, CVarRef v__caching //  = null_variant
, CVarRef v__cache_lifetime //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_template_resource, v_smarty, v__parent, v__cache_id, v__compile_id, v__caching, v__cache_lifetime);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Template = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Template,
  c_Smarty_Internal_Template::s_call_info_table,c_Smarty_Internal_Template::s_call_info_index,
  c_Smarty_Internal_Template::s_instanceof_table,c_Smarty_Internal_Template::s_instanceof_index,
  &c_Smarty_Internal_Template::s_class_name,
  &c_Smarty_Internal_Template::os_prop_table,&c_Smarty_Internal_Template::ci___construct,0,&cw_Smarty_Internal_Data
};
void c_Smarty_Internal_Template::init() {
  c_Smarty_Internal_Data::init();
  m_forceNocache = false;
  m_templateUid = NAMSTR(s_ss00000000, "");
  m_suppressHeader = false;
  m_suppressFileDependency = false;
  m_has_nocache_code = false;
  m_write_compiled_code = true;
  m_cacheFileChecked = false;
  m_tpl_vars = s_sa00000000;
  m_config_vars = s_sa00000000;
  m_plugin_data = s_sa00000000;
  m_properties = s_sa804b3241;
  m_required_plugins = s_sa6e013c4d;
  m_block_data = s_sa00000000;
  m_used_tags = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 86 */
void c_Smarty_Internal_Template::t___construct(Variant v_template_resource, Variant v_smarty, Variant v__parent //  = null
, Variant v__cache_id //  = null
, Variant v__compile_id //  = null
, Variant v__caching //  = null
, Variant v__cache_lifetime //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Template::__construct", array_createvi(7, toVPOD(v_template_resource), toVPOD(v_smarty), toVPOD(v__parent), toVPOD(v__cache_id), toVPOD(v__compile_id), toVPOD(v__caching), toVPOD(v__cache_lifetime)), );
  bool oldInCtor = gasInCtor(true);
  m_smarty.assignRef(v_smarty);
  {
    Variant tmp0(((x_is_null(v__cache_id) ? ((Variant)(LINE(90,(m_smarty.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true))))) : ((Variant)(v__cache_id)))));
    m_cache_id.assignVal(tmp0);
  }
  {
    Variant tmp0(((x_is_null(v__compile_id) ? ((Variant)(LINE(91,(m_smarty.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true))))) : ((Variant)(v__compile_id)))));
    m_compile_id.assignVal(tmp0);
  }
  {
    Variant tmp0(((x_is_null(v__caching) ? ((Variant)(LINE(92,(m_smarty.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))))) : ((Variant)(v__caching)))));
    m_caching.assignVal(tmp0);
  }
  if (same(m_caching, true)) {
    m_caching = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT));
  }
  {
    Variant tmp0(((x_is_null(v__cache_lifetime) ? ((Variant)(LINE(94,(m_smarty.o_getPublic(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), true))))) : ((Variant)(v__cache_lifetime)))));
    m_cache_lifetime.assignVal(tmp0);
  }
  m_parent.assignVal(v__parent);
  {
    LINE(97,0);
    const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
    m_tpl_vars.set(NAMSTR(s_ss675664bf, "smarty"), (VarNR(tmp0)), true);
  }
  m_template_resource.assignVal(v_template_resource);
  if (instanceOf(m_parent, NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"))) {
    {
      {
        LINE(102,0);
        const Variant &tmp0((m_parent.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true)));
        m_block_data.assignVal(tmp0);
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 114 */
Variant c_Smarty_Internal_Template::t_gettemplatefilepath() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getTemplateFilepath", null_array, r);
  {
    Variant tmp0;
    if (x_is_null(m_template_filepath)) {
      LINE(117,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true);
      mcp1.methodCall((obj1), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))));
      tmp0 = (m_template_filepath.assignVal(tmp2));
    } else {
      tmp0 = (m_template_filepath);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 128 */
Variant c_Smarty_Internal_Template::t_gettemplatetimestamp() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getTemplateTimestamp", null_array, r);
  {
    Variant tmp0;
    if (x_is_null(m_template_timestamp)) {
      LINE(131,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true);
      mcp1.methodCall((obj1), NAMSTR(s_ss253f375d, "getTemplateTimestamp"), 0x7D66A266AA69AA4CLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))));
      tmp0 = (m_template_timestamp.assignVal(tmp2));
    } else {
      tmp0 = (m_template_timestamp);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 142 */
Variant c_Smarty_Internal_Template::t_gettemplatesource() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Template, Smarty_Internal_Template::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getTemplateSource", null_array, r);
  if (x_is_null(m_template_source)) {
    {
      {
        bool tmp0;
        {
          LINE(145,0);
          MethodCallPackage mcp1;
          CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true);
          mcp1.methodCall((obj1), NAMSTR(s_ss2f523486, "getTemplateSource"), 0x2119F0DDD5901F20LL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          tmp0 = (!(toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template))))));
        }
        if (tmp0) {
          {
            {
              p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
              throw_exception(LINE(146,(((c_SmartyException*)tmp0.get()->create(VarNR(concat5(NAMSTR(s_ss806910b5, "Unable to read template "), toString(m_resource_type), NAMSTR(s_ssbc27583a, " '"), toString(m_resource_name), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
            }
          }
        }
      }
    }
  }
  return m_template_source;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 159 */
Variant c_Smarty_Internal_Template::t_isexisting(CVarRef v_error //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Template::isExisting", array_createvi(1, toVPOD(v_error)), r);
  if (x_is_null(m_isExisting)) {
    {
      {
        LINE(162,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss21a0ded9, "isExisting"), 0x415CFCA4A487DB29LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))));
        m_isExisting.assignVal(tmp1);
      }
    }
  }
  if ((!(toBoolean(m_isExisting)) && toBoolean(v_error))) {
    {
      {
        p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
        throw_exception(LINE(165,(((c_SmartyException*)tmp0.get()->create(VarNR(concat5(NAMSTR(s_ssd01be0d2, "Unable to load template "), toString(m_resource_type), NAMSTR(s_ssbc27583a, " '"), toString(m_resource_name), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
      }
    }
  }
  return m_isExisting;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 177 */
Variant c_Smarty_Internal_Template::t_mustcompile() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::mustCompile);
  INTERCEPT_INJECTION("Smarty_Internal_Template::mustCompile", null_array, r);
  LINE(179,(t_isexisting(true_varNR)));
  if (x_is_null(m_mustCompile)) {
    {
      {
        bool tmp0 = (LINE(181,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssa0f13ad5, "usesCompiler"), true)))));
        if (tmp0) {
          bool tmp1 = (toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss672ddadf, "force_compile"), true)));
          if (!tmp1) {
            tmp1 = (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)));
          }
          bool tmp2 = (tmp1);
          if (!tmp2) {
            const Variant &tmp3((t_getcompiledtimestamp()));
            tmp2 = (same(tmp3, false));
          }
          bool tmp4 = (tmp2);
          if (!tmp4) {
            bool tmp5 = (LINE(183,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ssfe447bcc, "compile_check"), true)))));
            if (tmp5) {
              const Variant &tmp6((t_getcompiledtimestamp()));
              const Variant &tmp7((t_gettemplatetimestamp()));
              tmp5 = (less(tmp6, tmp7));
            }
            tmp4 = (tmp5);
          }
          tmp0 = (tmp4);
        }
        m_mustCompile = tmp0;
      }
    }
  }
  return m_mustCompile;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 193 */
Variant c_Smarty_Internal_Template::t_getcompiledfilepath() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getCompiledFilepath", null_array, r);
  {
    Variant tmp0;
    if (x_is_null(m_compiled_filepath)) {
      LINE(196,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
      Variant tmp2;
      if (!(tmp1)) {
        MethodCallPackage mcp3;
        CVarRef obj3 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true);
        mcp3.methodCall((obj3), NAMSTR(s_sscf738333, "getCompiledFilepath"), 0x5124CB1E6C88ABD5LL);
        const CallInfo *cit3 ATTRIBUTE_UNUSED = mcp3.ci;
        tmp2 = ((mcp3.ci->getMeth1Args())(mcp3, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template))));
      } else {
        tmp2 = (false);
      }
      tmp0 = (m_compiled_filepath.assignVal(tmp2));
    } else {
      tmp0 = (m_compiled_filepath);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 205 */
Variant c_Smarty_Internal_Template::t_getcompiledtimestamp() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getCompiledTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getCompiledTimestamp", null_array, r);
  {
    Variant tmp0;
    if (x_is_null(m_compiled_timestamp)) {
      LINE(208,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
      bool tmp2 = (!(tmp1));
      if (tmp2) {
        const String &tmp3((toString(t_getcompiledfilepath())));
        tmp2 = (x_file_exists(tmp3));
      }
      Variant tmp4;
      if (tmp2) {
        const String &tmp5((toString(t_getcompiledfilepath())));
        tmp4 = (x_filemtime(tmp5));
      } else {
        tmp4 = (false);
      }
      tmp0 = (m_compiled_timestamp.assignVal(tmp4));
    } else {
      tmp0 = (m_compiled_timestamp);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 219 */
Variant c_Smarty_Internal_Template::t_getcompiledtemplate() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getCompiledTemplate);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getCompiledTemplate", null_array, r);
  if (x_is_null(m_compiled_template)) {
    {
      if (LINE(223,(toBoolean(t_mustcompile())))) {
        {
          LINE(224,(t_compiletemplatesource()));
        }
      }
      else {
        {
          if (x_is_null(m_compiled_template)) {
            {
              {
                LINE(227,0);
                bool tmp0((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
                bool tmp1 = (!(tmp0));
                if (tmp1) {
                  tmp1 = (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssa0f13ad5, "usesCompiler"), true)));
                }
                Variant tmp2;
                if (tmp1) {
                  const String &tmp3((toString(t_getcompiledfilepath())));
                  tmp2 = (x_file_get_contents(tmp3));
                } else {
                  tmp2 = (false);
                }
                m_compiled_template.assignVal(tmp2);
              }
            }
          }
        }
      }
    }
  }
  return m_compiled_template;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 239 */
void c_Smarty_Internal_Template::t_compiletemplatesource() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::compileTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Template::compileTemplateSource", null_array, );
  Variant v_saved_timestamp;
  Object v_e;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(241,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        m_properties.set(NAMSTR(s_ss3d122809, "file_dependency"), (s_sva00000000), true);
        {
          Variant tmp0((m_templateUid));
          LINE(243,0);
          const Variant &tmp2((t_gettemplatefilepath()));
          const Variant &tmp3((t_gettemplatetimestamp()));
          ArrayInit tmp1(array_createvi(3, toVPOD(tmp2), toVPOD(tmp3), toVPOD(m_resource_type)));
          const Array &tmp4((Array(tmp1)));
          lval(m_properties.lvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::CheckExist_Key)).set(tmp0, (VarNR(tmp4)));
        }
      }
    }
  }
  if (LINE(245,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
    {
      LINE(246,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_start_compile(VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))))));
    }
  }
  if (!(x_is_object(m_compiler_object))) {
    {
      {
        LINE(251,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = m_smarty;
        mcp0.methodCall((obj0), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ss664736fa, "compiler_class"), true)));
        (mcp0.ci->getMeth1Args())(mcp0, 1, tmp1);
      }
      {
        Object obj1(create_object_only((LINE(252,(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ss664736fa, "compiler_class"), true)))))));
        MethodCallPackage mcp0;
        mcp0.construct(obj1);
        const CallInfo *cit0 = mcp0.ci;
        const Variant &tmp2((GET_THIS_ARROW()o_argval(cit0->isRef(0), NAMSTR(s_ss6144ba4b, "resource_object"), true, s_class_name).o_argval(cit0->isRef(0), NAMSTR(s_ss69c65032, "template_lexer_class"), true, s_class_name)));
        const Variant &tmp3((GET_THIS_ARROW()o_argval(cit0->isRef(1), NAMSTR(s_ss6144ba4b, "resource_object"), true, s_class_name).o_argval(cit0->isRef(1), NAMSTR(s_ss2ae19e62, "template_parser_class"), true, s_class_name)));
        (cit0->getMeth3Args())(mcp0, 3, tmp2, tmp3, m_smarty);
        const Object &tmp4((id(obj1)));
        m_compiler_object = tmp4;
      }
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(255,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss65d5a06d, "compile_locking"), true)))));
      if (tmp1) {
        bool tmp2((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
        tmp1 = (!(tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(256,0);
            const Variant &tmp1((t_getcompiledtimestamp()));
            tmp0 = (toBoolean(v_saved_timestamp.assignVal(tmp1)));
          }
          if (tmp0) {
            {
              {
                LINE(257,0);
                const String &tmp0((toString(t_getcompiledfilepath())));
                x_touch(tmp0);
              }
            }
          }
        }
      }
    }
  }
  try {
    {
      LINE(262,0);
      MethodCallPackage mcp0;
      CVarRef obj0 = m_compiler_object;
      mcp0.methodCall((obj0), NAMSTR(s_sseded8495, "compileTemplate"), 0x17347BFA280B3B86LL);
      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
      (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template)));
    }
  } catch (Object e) {
    if (e.instanceof(NAMSTR(s_ssae8717ad, "exception"))) {
      v_e = e;
      {
        bool tmp0;
        {
          bool tmp1 = (LINE(266,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss65d5a06d, "compile_locking"), true)))));
          if (tmp1) {
            bool tmp2((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
            tmp1 = (!(tmp2));
          }
          tmp0 = ((tmp1 && toBoolean(v_saved_timestamp)));
        }
        if (tmp0) {
          {
            {
              LINE(267,0);
              const String &tmp0((toString(t_getcompiledfilepath())));
              x_touch(tmp0, toInt64(v_saved_timestamp));
            }
          }
        }
      }
      throw_exception(v_e);
    } else {
      throw;
    }
  }
  {
    bool tmp0;
    {
      LINE(272,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
      tmp0 = ((!(tmp1) && toBoolean(m_write_compiled_code)));
    }
    if (tmp0) {
      {
        {
          LINE(274,0);
          const Variant &tmp0((t_getcompiledfilepath()));
          ((checkClassExistsThrow(NAMSTR(s_ss1ff6c55c, "Smarty_Internal_Write_File"), &g->CDEC(smarty_internal_write_file))), (c_Smarty_Internal_Write_File::t_writefile(tmp0, m_compiled_template, m_smarty)));
        }
      }
    }
  }
  if (LINE(276,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
    {
      LINE(277,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_end_compile(VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))))));
    }
  }
  ((checkClassExistsThrow(NAMSTR(s_ssc4f26d76, "Smarty_Internal_TemplateCompilerBase"), &g->CDEC(smarty_internal_templatecompilerbase))), (g->s_Smarty_Internal_TemplateCompilerBase____tag_objects)) = s_sa00000000;
  {
    {
      LINE(281,(m_compiler_object.o_unsetLval(NAMSTR(s_ss1d4f2d02, "parser"), tmp_ref, s_class_name))).o_unset(NAMSTR(s_ss82049faf, "root_buffer"), s_class_name);
      tmp_ref.unset();
    }
    {
      LINE(282,(m_compiler_object.o_unsetLval(NAMSTR(s_ss1d4f2d02, "parser"), tmp_ref, s_class_name))).o_unset(NAMSTR(s_ss8ce16784, "current_buffer"), s_class_name);
      tmp_ref.unset();
    }
    m_compiler_object.o_unset(NAMSTR(s_ss1d4f2d02, "parser"), s_class_name);
    m_compiler_object.o_unset(NAMSTR(s_ss685ba94d, "lex"), s_class_name);
    m_compiler_object.o_unset(NAMSTR(s_ss86160f07, "template"), s_class_name);
  }
  m_compiler_object.assignVal(null);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 297 */
Variant c_Smarty_Internal_Template::t_getcachedfilepath() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getCachedFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getCachedFilepath", null_array, r);
  {
    Variant tmp0;
    if (x_is_null(m_cached_filepath)) {
      Variant tmp1;
      if ((LINE(300,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)))) || !((equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT))) || equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED))))))) {
        tmp1 = (false);
      } else {
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        tmp1 = ((mcp2.ci->getMeth1Args())(mcp2, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template))));
      }
      tmp0 = (m_cached_filepath.assignVal(tmp1));
    } else {
      tmp0 = (m_cached_filepath);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 311 */
Variant c_Smarty_Internal_Template::t_getcachedtimestamp() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getCachedTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getCachedTimestamp", null_array, r);
  {
    Variant tmp0;
    if (x_is_null(m_cached_timestamp)) {
      Variant tmp1;
      if ((LINE(314,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)))) || !((equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT))) || equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED))))))) {
        tmp1 = (false);
      } else {
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ss0ed4db4e, "getCachedTimestamp"), 0x1FCE3013C4ADDB99LL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        tmp1 = ((mcp2.ci->getMeth1Args())(mcp2, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template))));
      }
      tmp0 = (m_cached_timestamp.assignVal(tmp1));
    } else {
      tmp0 = (m_cached_timestamp);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 323 */
Variant c_Smarty_Internal_Template::t_getcachedcontent() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getCachedContent);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getCachedContent", null_array, r);
  {
    Variant tmp0;
    if (x_is_null(m_rendered_content)) {
      Variant tmp1;
      if ((LINE(326,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)))) || !((equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT))) || equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED))))))) {
        tmp1 = (false);
      } else {
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ss2c95cc60, "getCachedContents"), 0x7A62A64834D3EACFLL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        tmp1 = ((mcp2.ci->getMeth1Args())(mcp2, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template))));
      }
      tmp0 = (m_rendered_content.assignVal(tmp1));
    } else {
      tmp0 = (m_rendered_content);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 333 */
Variant c_Smarty_Internal_Template::t_writecachedcontent(CVarRef v_content) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Template, Smarty_Internal_Template::writeCachedContent);
  INTERCEPT_INJECTION("Smarty_Internal_Template::writeCachedContent", array_createvi(1, toVPOD(v_content)), r);
  {
    bool tmp0;
    {
      tmp0 = ((LINE(335,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)))) || !((equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT))) || equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED)))))));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  m_properties.set(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), (m_cache_lifetime), true);
  {
    LINE(340,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss95e80cdc, "writeCachedContent"), 0x66FE9E86B0B444C5LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    p_Smarty_Internal_Template tmp1((GET_THIS_TYPED(Smarty_Internal_Template)));
    const String &tmp2((t_createpropertyheader(true_varNR)));
    const String &tmp3((toString(v_content)));
    return wrap_variant((mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(tmp1), VarNR(concat(tmp2, tmp3))));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 350 */
Variant c_Smarty_Internal_Template::t_iscached(CVarRef v_template //  = null_variant
, CVarRef v_cache_id //  = null_variant
, CVarRef v_compile_id //  = null_variant
, Variant v_parent //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::isCached);
  INTERCEPT_INJECTION("Smarty_Internal_Template::isCached", array_createvi(4, toVPOD(v_template), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_parent)), r);
  bool v_no_render = false;
  Variant v_cachedTimestamp;
  Variant v_resource_type;
  Variant v_resource_name;
  Variant v__file_to_check;
  Variant v_mtime;
  Variant v_resource_handler;

  if (x_is_null(v_template)) {
    {
      v_no_render = true;
    }
  }
  else if (same(v_template, false)) {
    {
      v_no_render = false;
    }
  }
  else {
    {
      if (x_is_null(v_parent)) {
        {
          v_parent = GET_THIS_TYPED(Smarty_Internal_Template);
        }
      }
      {
        LINE(360,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = m_smarty;
        mcp0.methodCall((obj0), NAMSTR(s_ss77e7383f, "isCached"), 0x279B2A848BB281F3LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth4Args())(mcp0, 4, v_template, v_cache_id, v_compile_id, v_parent);
      }
    }
  }
  if (x_is_null(m_isCached)) {
    {
      m_isCached = false;
      {
        bool tmp0;
        {
          bool tmp1 = ((equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT))) || equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED)))));
          if (tmp1) {
            LINE(364,0);
            bool tmp2((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
            tmp1 = (!(tmp2));
          }
          tmp0 = (tmp1);
        }
        if (tmp0) {
          {
            {
              LINE(365,0);
              const Variant &tmp0((t_getcachedtimestamp()));
              v_cachedTimestamp.assignVal(tmp0);
            }
            if (((same(v_cachedTimestamp, false) || LINE(366,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss672ddadf, "force_compile"), true))))) || toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss850bc618, "force_cache"), true)))) {
              {
                return m_isCached;
              }
            }
            {
              bool tmp0;
              {
                bool tmp1 = (same(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED))));
                if (!tmp1) {
                  bool tmp2 = (equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT))));
                  if (tmp2) {
                    LINE(369,0);
                    int tmp3((x_time()));
                    tmp2 = ((not_more(tmp3, (v_cachedTimestamp + m_cache_lifetime)) || less(m_cache_lifetime, 0LL)));
                  }
                  tmp1 = (tmp2);
                }
                tmp0 = (tmp1);
              }
              if (tmp0) {
                {
                  if (LINE(370,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
                    {
                      LINE(371,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_start_cache(VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))))));
                    }
                  }
                  {
                    LINE(373,0);
                    MethodCallPackage mcp0;
                    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), true);
                    mcp0.methodCall((obj0), NAMSTR(s_ss2c95cc60, "getCachedContents"), 0x7A62A64834D3EACFLL);
                    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                    Variant tmp1(((mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(GET_THIS_TYPED(Smarty_Internal_Template)), VarNR(v_no_render))));
                    m_rendered_content.assignVal(tmp1);
                  }
                  if (LINE(374,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
                    {
                      LINE(375,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_end_cache(VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))))));
                    }
                  }
                  if (toBoolean(m_cacheFileChecked)) {
                    {
                      m_isCached = true;
                      return m_isCached;
                    }
                  }
                  m_cacheFileChecked = true;
                  {
                    bool tmp0;
                    {
                      bool tmp1 = (same(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED))));
                      if (tmp1) {
                        LINE(382,0);
                        const Variant &tmp2((m_properties.rvalAt(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), AccessFlags::Error_Key)));
                        tmp1 = (not_less(tmp2, 0LL));
                      }
                      bool tmp3 = (tmp1);
                      if (tmp3) {
                        int tmp4((x_time()));
                        const Variant &tmp5((t_getcachedtimestamp()));
                        const Variant &tmp6((m_properties.rvalAt(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), AccessFlags::Error_Key)));
                        const PlusOperand &tmp7(((tmp5 + tmp6)));
                        tmp3 = (more(tmp4, tmp7));
                      }
                      tmp0 = (tmp3);
                    }
                    if (tmp0) {
                      {
                        m_tpl_vars = s_sa00000000;
                        {
                          LINE(384,0);
                          const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                          m_tpl_vars.set(NAMSTR(s_ss675664bf, "smarty"), (VarNR(tmp0)), true);
                        }
                        m_rendered_content.assignVal(null);
                        return m_isCached;
                      }
                    }
                  }
                  {
                    bool tmp0;
                    {
                      tmp0 = ((!(empty(m_properties, NAMSTR(s_ss3d122809, "file_dependency"), true)) && LINE(388,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ssfe447bcc, "compile_check"), true))))));
                    }
                    if (tmp0) {
                      {
                        setNull(v_resource_type);
                        setNull(v_resource_name);
                        {
                          LOOP_COUNTER(1);
                          Variant map2 = LINE(391,(m_properties.rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
                          for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                            LOOP_COUNTER_CHECK(1);
                            iter3.second(v__file_to_check);
                            {
                              {
                                bool tmp0;
                                {
                                  LINE(392,0);
                                  const Variant &tmp1((v__file_to_check.rvalAt(2LL, AccessFlags::Error)));
                                  bool tmp2 = (equal(tmp1, NAMSTR(s_ss8ce7db5b, "file")));
                                  if (!tmp2) {
                                    const Variant &tmp3((v__file_to_check.rvalAt(2LL, AccessFlags::Error)));
                                    tmp2 = (equal(tmp3, NAMSTR(s_ss36a5b738, "extends")));
                                  }
                                  bool tmp4 = (tmp2);
                                  if (!tmp4) {
                                    const Variant &tmp5((v__file_to_check.rvalAt(2LL, AccessFlags::Error)));
                                    tmp4 = (equal(tmp5, NAMSTR(s_ssa94e9c41, "php")));
                                  }
                                  tmp0 = (tmp4);
                                }
                                if (tmp0) {
                                  {
                                    {
                                      LINE(393,0);
                                      const String &tmp0((toString(v__file_to_check.rvalAt(0LL, AccessFlags::Error))));
                                      const Variant &tmp1((x_filemtime(tmp0)));
                                      v_mtime.assignVal(tmp1);
                                    }
                                  }
                                }
                                else {
                                  {
                                    {
                                      LINE(395,0);
                                      const Variant &tmp0((v__file_to_check.rvalAt(0LL, AccessFlags::Error)));
                                      t_getresourcetypename(tmp0, ref(v_resource_type), ref(v_resource_name));
                                    }
                                    {
                                      LINE(396,0);
                                      const Variant &tmp0((t_loadtemplateresourcehandler(v_resource_type)));
                                      v_resource_handler.assignVal(tmp0);
                                    }
                                    {
                                      LINE(397,0);
                                      MethodCallPackage mcp0;
                                      CVarRef obj0 = v_resource_handler;
                                      mcp0.methodCall((obj0), NAMSTR(s_ss54af5fd0, "getTemplateTimestampTypeName"), 0x341F6186B060A8CELL);
                                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                                      Variant tmp1(((mcp0.ci->getMeth2Args())(mcp0, 2, v_resource_type, v_resource_name)));
                                      v_mtime.assignVal(tmp1);
                                    }
                                  }
                                }
                              }
                              {
                                bool tmp0;
                                {
                                  LINE(400,0);
                                  const Variant &tmp1((v__file_to_check.rvalAt(1LL, AccessFlags::Error)));
                                  tmp0 = (more(v_mtime, tmp1));
                                }
                                if (tmp0) {
                                  {
                                    m_tpl_vars = s_sa00000000;
                                    {
                                      LINE(402,0);
                                      const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                                      m_tpl_vars.set(NAMSTR(s_ss675664bf, "smarty"), (VarNR(tmp0)), true);
                                    }
                                    m_rendered_content.assignVal(null);
                                    return m_isCached;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  m_isCached = true;
                }
              }
            }
          }
        }
      }
    }
  }
  return m_isCached;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 422 */
void c_Smarty_Internal_Template::t_rendertemplate() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::renderTemplate);
  INTERCEPT_INJECTION("Smarty_Internal_Template::renderTemplate", null_array, );
  Variant v_this;
  Variant v__smarty_tpl;
  Variant v_resource_type;
  Variant v_resource_name;
  Variant v__file_to_check;
  Variant v_mtime;
  Variant v_resource_handler;
  Variant v_code;
  Variant v_tmp1;
  Variant v_name;
  Variant v_tmp;
  Variant v_type;
  Variant v_data;
  Variant v_cache_split;
  Variant v_cache_parts;
  Variant v_output;
  Variant v_curr_idx;
  Variant v_curr_split;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_this; Variant &v__smarty_tpl; Variant &v_resource_type; Variant &v_resource_name; Variant &v__file_to_check; Variant &v_mtime; Variant &v_resource_handler; Variant &v_code; Variant &v_tmp1; Variant &v_name; Variant &v_tmp; Variant &v_type; Variant &v_data; Variant &v_cache_split; Variant &v_cache_parts; Variant &v_output; Variant &v_curr_idx; Variant &v_curr_split;
    VariableTable(Variant &r_this, Variant &r__smarty_tpl, Variant &r_resource_type, Variant &r_resource_name, Variant &r__file_to_check, Variant &r_mtime, Variant &r_resource_handler, Variant &r_code, Variant &r_tmp1, Variant &r_name, Variant &r_tmp, Variant &r_type, Variant &r_data, Variant &r_cache_split, Variant &r_cache_parts, Variant &r_output, Variant &r_curr_idx, Variant &r_curr_split) : v_this(r_this), v__smarty_tpl(r__smarty_tpl), v_resource_type(r_resource_type), v_resource_name(r_resource_name), v__file_to_check(r__file_to_check), v_mtime(r_mtime), v_resource_handler(r_resource_handler), v_code(r_code), v_tmp1(r_tmp1), v_name(r_name), v_tmp(r_tmp), v_type(r_type), v_data(r_data), v_cache_split(r_cache_split), v_cache_parts(r_cache_parts), v_output(r_output), v_curr_idx(r_curr_idx), v_curr_split(r_curr_split) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 63) {
        case 9:
          HASH_RETURN_NAMSTR(0x72CB03F3A2CF7389LL, s_ssddcdc9ba, v__smarty_tpl,
                             11);
          break;
        case 11:
          HASH_RETURN_NAMSTR(0x52EF628E7181074BLL, s_ss9c35abf3, v_this,
                             4);
          break;
        case 15:
          HASH_RETURN_NAMSTR(0x06B1FEC3246DF6CFLL, s_ss3eedad16, v__file_to_check,
                             14);
          break;
        case 19:
          HASH_RETURN_NAMSTR(0x7B5ABDA0E01EF853LL, s_ss724a760a, v_type,
                             4);
          break;
        case 21:
          HASH_RETURN_NAMSTR(0x5D7044DD1A7A6095LL, s_sse942854d, v_resource_name,
                             13);
          HASH_RETURN_NAMSTR(0x4937ABFBB3440315LL, s_ss0cd91350, v_tmp,
                             3);
          break;
        case 32:
          HASH_RETURN_NAMSTR(0x015523EB2139C5A0LL, s_ss6a609ebd, v_resource_handler,
                             16);
          break;
        case 35:
          HASH_RETURN_NAMSTR(0x28B299A3716A35E3LL, s_ss239629e2, v_curr_split,
                             10);
          break;
        case 36:
          HASH_RETURN_NAMSTR(0x1ECAB96410D12FA4LL, s_ss89a9c899, v_resource_type,
                             13);
          break;
        case 40:
          HASH_RETURN_NAMSTR(0x7EBE97F858D8D928LL, s_ss1d535906, v_curr_idx,
                             8);
          break;
        case 43:
          HASH_RETURN_NAMSTR(0x164A03D40A16FAEBLL, s_ss7c24a986, v_tmp1,
                             4);
          break;
        case 46:
          HASH_RETURN_NAMSTR(0x454EF365479ECB6ELL, s_ss72d7af02, v_cache_parts,
                             11);
          break;
        case 47:
          HASH_RETURN_NAMSTR(0x4093426AA3F16A2FLL, s_ssd8bca8fd, v_mtime,
                             5);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x0D35EC793C95F331LL, s_ssa9853128, v_data,
                             4);
          break;
        case 50:
          HASH_RETURN_NAMSTR(0x5655B4FF77E35232LL, s_ssdc3cbddc, v_name,
                             4);
          break;
        case 54:
          HASH_RETURN_NAMSTR(0x2687A9732D49D676LL, s_ss0c510b0b, v_cache_split,
                             11);
          break;
        case 57:
          HASH_RETURN_NAMSTR(0x58C72230857ACDB9LL, s_ssab7a1dec, v_code,
                             4);
          break;
        case 63:
          HASH_RETURN_NAMSTR(0x07B89E83B77C677FLL, s_ss7a5dbb24, v_output,
                             6);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_this, v__smarty_tpl, v_resource_type, v_resource_name, v__file_to_check, v_mtime, v_resource_handler, v_code, v_tmp1, v_name, v_tmp, v_type, v_data, v_cache_split, v_cache_parts, v_output, v_curr_idx, v_curr_split);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  Variant tmp_ref;
  v_this = this;
  {
    bool tmp0;
    {
      tmp0 = (LINE(424,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssa0f13ad5, "usesCompiler"), true)))));
    }
    if (tmp0) {
      {
        if ((LINE(425,(toBoolean(t_mustcompile()))) && x_is_null(m_compiled_template))) {
          {
            LINE(426,(t_compiletemplatesource()));
          }
        }
        if (LINE(428,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
          {
            LINE(429,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_start_render(v_this)))));
          }
        }
        v__smarty_tpl.assignVal(v_this);
        LINE(432,(x_ob_start()));
        {
          bool tmp0;
          {
            tmp0 = (LINE(433,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)))));
          }
          if (tmp0) {
            {
              LINE(434,(f_eval(concat(NAMSTR(s_ssf7e13165, "\?>"), toString(m_compiled_template)))));
            }
          }
          else {
            {
              {
                LINE(436,0);
                const String &tmp0((toString(t_getcompiledfilepath())));
                include(tmp0, false, variables, "Smarty/libs/sysplugins/");
              }
              if (LINE(438,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ssfe447bcc, "compile_check"), true))))) {
                {
                  {
                    bool tmp0;
                    {
                      tmp0 = (!(empty(m_properties, NAMSTR(s_ss3d122809, "file_dependency"), true)));
                    }
                    if (tmp0) {
                      {
                        m_mustCompile = false;
                        setNull(v_resource_type);
                        setNull(v_resource_name);
                        {
                          LOOP_COUNTER(1);
                          Variant map2 = LINE(443,(m_properties.rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
                          for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                            LOOP_COUNTER_CHECK(1);
                            iter3.second(v__file_to_check);
                            {
                              {
                                bool tmp0;
                                {
                                  LINE(444,0);
                                  const Variant &tmp1((v__file_to_check.rvalAt(2LL, AccessFlags::Error)));
                                  bool tmp2 = (equal(tmp1, NAMSTR(s_ss8ce7db5b, "file")));
                                  if (!tmp2) {
                                    const Variant &tmp3((v__file_to_check.rvalAt(2LL, AccessFlags::Error)));
                                    tmp2 = (equal(tmp3, NAMSTR(s_ss36a5b738, "extends")));
                                  }
                                  bool tmp4 = (tmp2);
                                  if (!tmp4) {
                                    const Variant &tmp5((v__file_to_check.rvalAt(2LL, AccessFlags::Error)));
                                    tmp4 = (equal(tmp5, NAMSTR(s_ssa94e9c41, "php")));
                                  }
                                  tmp0 = (tmp4);
                                }
                                if (tmp0) {
                                  {
                                    {
                                      LINE(445,0);
                                      const String &tmp0((toString(v__file_to_check.rvalAt(0LL, AccessFlags::Error))));
                                      const Variant &tmp1((x_filemtime(tmp0)));
                                      v_mtime.assignVal(tmp1);
                                    }
                                  }
                                }
                                else {
                                  {
                                    {
                                      LINE(447,0);
                                      const Variant &tmp0((v__file_to_check.rvalAt(0LL, AccessFlags::Error)));
                                      t_getresourcetypename(tmp0, ref(v_resource_type), ref(v_resource_name));
                                    }
                                    {
                                      LINE(448,0);
                                      const Variant &tmp0((t_loadtemplateresourcehandler(v_resource_type)));
                                      v_resource_handler.assignVal(tmp0);
                                    }
                                    {
                                      LINE(449,0);
                                      MethodCallPackage mcp0;
                                      CVarRef obj0 = v_resource_handler;
                                      mcp0.methodCall((obj0), NAMSTR(s_ss54af5fd0, "getTemplateTimestampTypeName"), 0x341F6186B060A8CELL);
                                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                                      Variant tmp1(((mcp0.ci->getMeth2Args())(mcp0, 2, v_resource_type, v_resource_name)));
                                      v_mtime.assignVal(tmp1);
                                    }
                                  }
                                }
                              }
                              {
                                bool tmp0;
                                {
                                  LINE(452,0);
                                  const Variant &tmp1((v__file_to_check.rvalAt(1LL, AccessFlags::Error)));
                                  tmp0 = (more(v_mtime, tmp1));
                                }
                                if (tmp0) {
                                  {
                                    m_mustCompile = true;
                                    break;
                                  }
                                }
                              }
                            }
                          }
                        }
                        if (toBoolean(m_mustCompile)) {
                          {
                            LINE(459,(x_ob_get_clean()));
                            LINE(460,(t_compiletemplatesource()));
                            LINE(461,(x_ob_start()));
                            {
                              LINE(462,0);
                              const String &tmp0((toString(t_getcompiledfilepath())));
                              include(tmp0, false, variables, "Smarty/libs/sysplugins/");
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
        }
      }
    }
    else {
      {
        {
          bool tmp0;
          {
            LINE(468,0);
            const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true)));
            ArrayInit tmp1(array_createvi(2, toVPOD(tmp2), toVPOD(NAMVAR(s_svsfd95188f, "renderUncompiled"))));
            const Array &tmp3((Array(tmp1)));
            tmp0 = (x_is_callable(tmp3));
          }
          if (tmp0) {
            {
              if (LINE(469,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
                {
                  LINE(470,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_start_render(v_this)))));
                }
              }
              LINE(472,(x_ob_start()));
              {
                LINE(473,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true);
                mcp0.methodCall((obj0), NAMSTR(s_ssfd95188f, "renderUncompiled"), 0x7BD92D77836CCBACLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                (mcp0.ci->getMeth1Args())(mcp0, 1, v_this);
              }
            }
          }
          else {
            {
              {
                p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                throw_exception(LINE(475,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss52a712bd, "Resource '"), toString(m_resource_type), NAMSTR(s_ssb701a8c2, "' must have 'renderUncompiled' methode")))), tmp0))));
              }
            }
          }
        }
      }
    }
  }
  {
    LINE(478,0);
    const String &tmp0((x_ob_get_clean()));
    m_rendered_content = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(479,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
      bool tmp2 = (!(tmp1));
      if (tmp2) {
        Variant tmp3((m_templateUid));
        tmp2 = (empty(m_properties.rvalRef(NAMSTR(s_ss3d122809, "file_dependency"), tmp_ref, AccessFlags::Key), tmp3));
      }
      tmp0 = (tmp2);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          Variant tmp0((m_templateUid));
          LINE(480,0);
          const Variant &tmp2((t_gettemplatefilepath()));
          const Variant &tmp3((t_gettemplatetimestamp()));
          ArrayInit tmp1(array_createvi(3, toVPOD(tmp2), toVPOD(tmp3), toVPOD(m_resource_type)));
          const Array &tmp4((Array(tmp1)));
          lval(m_properties.lvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::CheckExist_Key)).set(tmp0, (VarNR(tmp4)));
        }
      }
    }
  }
  if (instanceOf(m_parent, NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"))) {
    {
      {
        LINE(483,0);
        const Variant &tmp0((m_parent.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
        const Variant &tmp1((m_properties.rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
        const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
        m_parent.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).set(NAMSTR(s_ss3d122809, "file_dependency"), (tmp2), true);
        tmp_ref.unset();
      }
      {
        LOOP_COUNTER(4);
        Variant map5 = m_required_plugins;
        for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
          LOOP_COUNTER_CHECK(4);
          iter6.second(v_tmp1);
          v_code.assignVal(iter6.first());
          {
            {
              LOOP_COUNTER(7);
              for (ArrayIter iter9 = v_tmp1.begin(s_class_name, true); !iter9.end(); ++iter9) {
                LOOP_COUNTER_CHECK(7);
                iter9.second(v_tmp);
                v_name.assignVal(iter9.first());
                {
                  {
                    LOOP_COUNTER(10);
                    for (ArrayIter iter12 = v_tmp.begin(s_class_name, true); !iter12.end(); ++iter12) {
                      LOOP_COUNTER_CHECK(10);
                      iter12.second(v_data);
                      v_type.assignVal(iter12.first());
                      {
                        {
                          Variant tmp0((v_data));
                          LINE(487,(lval(lval(m_parent.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(v_code, AccessFlags::CheckExist)).lvalAt(v_name, AccessFlags::CheckExist)))).set(v_type, (tmp0));
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
    }
  }
  if (LINE(492,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
    {
      LINE(493,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_end_render(v_this)))));
    }
  }
  {
    bool tmp0;
    {
      LINE(496,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
      tmp0 = ((!(tmp1) && (equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_SAVED))) || equal(m_caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT))))));
    }
    if (tmp0) {
      {
        if (LINE(497,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
          {
            LINE(498,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_start_cache(v_this)))));
          }
        }
        m_properties.set(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), (false_varNR), true);
        {
          LINE(502,0);
          const String &tmp0((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
          const String &tmp1((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
          const Variant &tmp2((x_preg_split(VarNR(concat5(NAMSTR(s_ss625a570a, "!/\\*%%SmartyNocache:"), tmp0, NAMSTR(s_ssfd66d46c, "%%\\*\\/(.+\?)/\\*/%%SmartyNocache:"), tmp1, NAMSTR(s_ss53d12b9b, "%%\\*/!s"))), m_rendered_content)));
          v_cache_split.assignVal(tmp2);
        }
        {
          LINE(504,0);
          const String &tmp0((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
          const String &tmp1((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
          x_preg_match_all(concat5(NAMSTR(s_ss625a570a, "!/\\*%%SmartyNocache:"), tmp0, NAMSTR(s_ssfd66d46c, "%%\\*\\/(.+\?)/\\*/%%SmartyNocache:"), tmp1, NAMSTR(s_ss53d12b9b, "%%\\*/!s")), toString(m_rendered_content), ref(v_cache_parts));
        }
        v_output = NAMSTR(s_ss00000000, "");
        {
          LOOP_COUNTER(13);
          {
            StringBuffer tmp_sbuf_v_output(512);
            for (ArrayIter iter15 = v_cache_split.begin(s_class_name, true); !iter15.end(); ++iter15) {
              LOOP_COUNTER_CHECK(13);
              iter15.second(v_curr_split);
              v_curr_idx.assignVal(iter15.first());
              {
                {
                  LINE(509,0);
                  const String &tmp0((toString(x_preg_replace(NAMVAR(s_svs3f574b4c, "/(<%|%>|<\\\?php|<\\\?|\\\?>)/"), NAMVAR(s_svs3be07afe, "<\?php echo '$1'; \?>"), v_curr_split))));
                  tmp_sbuf_v_output.addWithTaint(tmp0);
                }
                {
                  bool tmp0;
                  {
                    tmp0 = (isset(LINE(510,(v_cache_parts.rvalRef(0LL, tmp_ref))), v_curr_idx));
                    tmp_ref.unset();
                  }
                  if (tmp0) {
                    {
                      m_properties.set(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), (true_varNR), true);
                      {
                        LINE(513,0);
                        const String &tmp0((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
                        const Variant &tmp1((v_cache_parts.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(v_curr_idx, AccessFlags::Error)));
                        const String &tmp2((toString(x_preg_replace(VarNR(concat3(NAMSTR(s_ssddcd39e2, "!/\\*/\?%%SmartyNocache:"), tmp0, NAMSTR(s_ssc7aa9fc8, "%%\\*/!"))), NAMVAR(s_svs00000000, ""), tmp1))));
                        tmp_sbuf_v_output.addWithTaint(tmp2);
                        tmp_ref.unset();
                      }
                    }
                  }
                }
              }
            }
            concat_assign(v_output, tmp_sbuf_v_output.detachWithTaint());
          }
        }
        {
          bool tmp0;
          {
            bool tmp1 = (isset(LINE(516,(m_smarty.o_getPublic(NAMSTR(s_ssb05f1099, "autoload_filters"), false))), NAMSTR(s_ss7a5dbb24, "output"), true));
            if (!tmp1) {
              tmp1 = (isset(m_smarty.o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), false), NAMSTR(s_ss7a5dbb24, "output"), true));
            }
            tmp0 = (tmp1);
          }
          if (tmp0) {
            {
              {
                fi.setStaticClassName(c_Smarty_Internal_Filter_Handler::s_class_name);
                LINE(517,0);
                const Variant &tmp0((((checkClassExistsThrow(NAMSTR(s_ss1b85235e, "Smarty_Internal_Filter_Handler"), &g->CDEC(smarty_internal_filter_handler))), (c_Smarty_Internal_Filter_Handler::t_runfilter(NAMVAR(s_svs7a5dbb24, "output"), v_output, v_this)))));
                fi.resetStaticClassName();
                v_output.assignVal(tmp0);
              }
            }
          }
        }
        v__smarty_tpl.assignVal(v_this);
        LINE(521,(x_ob_start()));
        LINE(522,(f_eval(concat(NAMSTR(s_ssf7e13165, "\?>"), toString(v_output)))));
        {
          LINE(523,0);
          const String &tmp0((x_ob_get_clean()));
          m_rendered_content = tmp0;
        }
        LINE(525,(t_writecachedcontent(VarNR(concat3(NAMSTR(s_ss01048ef0, "<\?php if (!$no_render) {\?>"), toString(v_output), NAMSTR(s_ssbc881512, "<\?php } \?>"))))));
        if (LINE(526,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
          {
            LINE(527,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_end_cache(v_this)))));
          }
        }
      }
    }
    else {
      {
        {
          bool tmp0;
          {
            bool tmp1 = (toBoolean(m_has_nocache_code));
            if (tmp1) {
              tmp1 = (!(empty(m_properties, NAMSTR(s_ss73233481, "nocache_hash"), true)));
            }
            bool tmp2 = (tmp1);
            if (tmp2) {
              tmp2 = (!(empty(LINE(531,(m_parent.o_getPublic(NAMSTR(s_ss90269404, "properties"), false))), NAMSTR(s_ss73233481, "nocache_hash"), true)));
            }
            tmp0 = (tmp2);
          }
          if (tmp0) {
            {
              {
                LINE(533,0);
                const String &tmp0((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
                const Variant &tmp1((m_parent.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
                const Variant &tmp2((x_preg_replace(VarNR(concat3(NAMSTR(s_ssb9e13cd6, "/"), tmp0, NAMSTR(s_ssb9e13cd6, "/"))), tmp1, m_rendered_content)));
                m_rendered_content.assignVal(tmp2);
              }
              {
                m_parent.o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), m_has_nocache_code);
              }
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 547 */
Variant c_Smarty_Internal_Template::t_getrenderedtemplate() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getRenderedTemplate);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getRenderedTemplate", null_array, r);
  {
    bool tmp0;
    {
      tmp0 = (LINE(550,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)))));
    }
    if (tmp0) {
      {
        m_caching = false;
      }
    }
  }
  LINE(554,(t_isexisting(true_varNR)));
  if (x_is_null(m_rendered_content)) {
    {
      if (toBoolean(m_isCached)) {
        {
          if (LINE(558,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
            {
              LINE(559,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_start_cache(VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))))));
            }
          }
          {
            LINE(561,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), true);
            mcp0.methodCall((obj0), NAMSTR(s_ss2c95cc60, "getCachedContents"), 0x7A62A64834D3EACFLL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            Variant tmp1(((mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(GET_THIS_TYPED(Smarty_Internal_Template)), false_varNR)));
            m_rendered_content.assignVal(tmp1);
          }
          if (LINE(562,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sse9be2c51, "debugging"), true))))) {
            {
              LINE(563,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_end_cache(VarNR(GET_THIS_TYPED(Smarty_Internal_Template)))))));
            }
          }
        }
      }
      if (x_is_null(m_isCached)) {
        {
          LINE(567,(t_iscached(false_varNR)));
        }
      }
      if (!(toBoolean(m_isCached))) {
        {
          LINE(571,(t_rendertemplate()));
        }
      }
    }
  }
  LINE(574,(t_updateparentvariables()));
  m_isCached.assignVal(null);
  return m_rendered_content;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 588 */
bool c_Smarty_Internal_Template::t_parseresourcename(CVarRef v_template_resource, VRefParam rv_resource_type, VRefParam rv_resource_name, VRefParam rv_resource_handler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::parseResourceName);
  INTERCEPT_INJECTION("Smarty_Internal_Template::parseResourceName", (Array(ArrayInit(4).set(0, v_template_resource).setRef(1, rv_resource_type).setRef(2, rv_resource_name).setRef(3, rv_resource_handler).create())), r);
  Variant &v_resource_type ATTRIBUTE_UNUSED = rv_resource_type;
  Variant &v_resource_name ATTRIBUTE_UNUSED = rv_resource_name;
  Variant &v_resource_handler ATTRIBUTE_UNUSED = rv_resource_handler;
  Variant tmp_ref;
  if (empty(v_template_resource)) {
    return false;
  }
  LINE(592,(t_getresourcetypename(v_template_resource, ref(v_resource_type), ref(v_resource_name))));
  {
    LINE(593,0);
    const Variant &tmp0((t_loadtemplateresourcehandler(v_resource_type)));
    v_resource_handler.assignVal(tmp0);
  }
  if (!equal(v_resource_type, NAMSTR(s_ss579fc862, "eval"))) {
    {
      {
        LINE(597,0);
        const String &tmp0((x_sha1(concat3(toString(m_template_resource), toString(m_cache_id), toString(m_compile_id)))));
        p_Smarty_Internal_Template tmp1((GET_THIS_TYPED(Smarty_Internal_Template)));
        m_smarty.o_lval(NAMSTR(s_ss8d72b238, "template_objects"), tmp_ref, s_class_name).set(tmp0, (VarNR(tmp1)));
        tmp_ref.unset();
      }
    }
  }
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 605 */
Variant c_Smarty_Internal_Template::t_buildtemplatefilepath(Variant v_file //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::buildTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Template::buildTemplateFilepath", array_createvi(1, toVPOD(v_file)), r);
  Variant v__template_dir;
  Variant v__filepath;
  Variant v__return;

  if (equal(v_file, null)) {
    {
      v_file.assignVal(m_resource_name);
    }
  }
  {
    bool tmp0;
    {
      LINE(611,0);
      bool tmp1((toBoolean(x_preg_match(NAMSTR(s_ss28ca1d55, "/^([\\/\\\\]|[a-zA-Z]:[\\/\\\\])/"), toString(v_file)))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(1);
          Variant map2;
          {
            LINE(612,0);
            const Array &tmp0((toArray(m_smarty.o_getPublic(NAMSTR(s_ssfc1024fb, "template_dir"), true))));
            map2 = (tmp0);
          }
          for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
            LOOP_COUNTER_CHECK(1);
            iter3.second(v__template_dir);
            {
              {
                bool tmp0;
                {
                  LINE(613,0);
                  const Variant &tmp1((x_substr(toString(v__template_dir), toInt32(-1LL))));
                  const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
                  tmp0 = (same(tmp2, false));
                }
                if (tmp0) {
                  {
                    concat_assign(v__template_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
                  }
                }
              }
              v__filepath = concat(toString(v__template_dir), toString(v_file));
              if (LINE(617,(x_file_exists(toString(v__filepath))))) {
                {
                  return v__filepath;
                }
              }
              {
                bool tmp0;
                {
                  LINE(620,0);
                  bool tmp1((toBoolean(x_preg_match(NAMSTR(s_ss28ca1d55, "/^([\\/\\\\]|[a-zA-Z]:[\\/\\\\])/"), toString(v__template_dir)))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      bool tmp0;
                      {
                        LINE(622,0);
                        const Variant &tmp1((((checkClassExistsThrow(NAMSTR(s_ss30028e0c, "Smarty_Internal_Get_Include_Path"), &g->CDEC(smarty_internal_get_include_path))), (c_Smarty_Internal_Get_Include_Path::t_getincludepath(v__filepath)))));
                        tmp0 = (!same(v__filepath.assignVal(tmp1), false));
                      }
                      if (tmp0) {
                        {
                          return v__filepath;
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
    }
  }
  if (LINE(629,(x_file_exists(toString(v_file))))) {
    return v_file;
  }
  {
    bool tmp0;
    {
      tmp0 = (!(m_smarty.o_empty(NAMSTR(s_ss2665d749, "default_template_handler_func"), s_class_name)));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(632,0);
            const Variant &tmp1((m_smarty.o_getPublic(NAMSTR(s_ss2665d749, "default_template_handler_func"), true)));
            bool tmp2((x_is_callable(tmp1)));
            tmp0 = (!(tmp2));
          }
          if (tmp0) {
            {
              throw_exception(LINE(633,(((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (p_SmartyException(((c_SmartyException*)coo_SmartyException())->create(NAMVAR(s_svsfe5c46f0, "Default template handler not callable"))))))));
            }
          }
          else {
            {
              {
                LINE(635,0);
                const Variant &tmp0((m_smarty.o_getPublic(NAMSTR(s_ss2665d749, "default_template_handler_func"), true)));
                LINE(636,0);
                const Variant &tmp1((x_call_user_func_array(tmp0, Array(ArrayInit(5).set(m_resource_type).set(m_resource_name).setRef(m_template_source).setRef(m_template_timestamp).set(GET_THIS_TYPED(Smarty_Internal_Template)).create()))));
                v__return.assignVal(tmp1);
              }
              if (x_is_string(v__return)) {
                {
                  return v__return;
                }
              }
              else if (same(v__return, true)) {
                {
                  return v_file;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 650 */
void c_Smarty_Internal_Template::t_updateparentvariables(CVarRef v_scope //  = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::updateParentVariables);
  INTERCEPT_INJECTION("Smarty_Internal_Template::updateParentVariables", array_createvi(1, toVPOD(v_scope)), );
  bool v_has_root = false;
  Primitive v__key = 0;
  Variant v__variable;
  Variant v__variable_scope;
  Variant v_root_ptr;

  Variant tmp_ref;
  v_has_root = false;
  {
    LOOP_COUNTER(1);
    Variant map2 = m_tpl_vars;
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__variable);
      v__key.assignVal(iter3.first());
      {
        {
          LINE(654,0);
          const Variant &tmp0((m_tpl_vars.rvalRef(v__key, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss4d6447e5, "scope"), true)));
          v__variable_scope.assignVal(tmp0);
          tmp_ref.unset();
        }
        if (((equal(v_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))) && equal(v__variable_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)))) || equal(v__key, NAMSTR(s_ss675664bf, "smarty")))) {
          {
            continue;
          }
        }
        if ((isset(m_parent) && (equal(v_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_PARENT))) || equal(v__variable_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_PARENT)))))) {
          {
            {
              bool tmp0;
              {
                tmp0 = (isset(LINE(659,(m_parent.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), false))), v__key));
              }
              if (tmp0) {
                {
                  {
                    LINE(661,0);
                    const Variant &tmp0((m_tpl_vars.rvalRef(v__key, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                    lval(m_parent.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v__key, AccessFlags::CheckExist)).o_setPublic(NAMSTR(s_sse0c88471, "value"), tmp0);
                    tmp_ref.unset();
                  }
                }
              }
              else {
                {
                  {
                    LINE(664,0);
                    Object tmp0((f_clone(v__variable)));
                    m_parent.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(v__key, (VarNR(tmp0)));
                    tmp_ref.unset();
                  }
                  {
                    LINE(665,(lval(m_parent.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v__key, AccessFlags::CheckExist)))).o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)));
                    tmp_ref.unset();
                  }
                }
              }
            }
          }
        }
        if ((equal(v_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_ROOT))) || equal(v__variable_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_ROOT))))) {
          {
            if (equal(m_parent, null)) {
              {
                continue;
              }
            }
            if (!(v_has_root)) {
              {
                v_root_ptr = GET_THIS_TYPED(Smarty_Internal_Template);
                LOOP_COUNTER(4);
                {
                  while (true) {
                    {
                      LINE(675,0);
                      const Variant &tmp0((v_root_ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
                      if (!(!equal(tmp0, null))) break;
                    }
                    LOOP_COUNTER_CHECK(4);
                    {
                      {
                        LINE(676,0);
                        const Variant &tmp0((v_root_ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
                        v_root_ptr.assignVal(tmp0);
                      }
                      v_has_root = true;
                    }
                  }
                }
              }
            }
            {
              bool tmp0;
              {
                tmp0 = (isset(LINE(680,(v_root_ptr.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), false))), v__key));
              }
              if (tmp0) {
                {
                  {
                    LINE(682,0);
                    const Variant &tmp0((m_tpl_vars.rvalRef(v__key, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                    lval(v_root_ptr.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v__key, AccessFlags::CheckExist)).o_setPublic(NAMSTR(s_sse0c88471, "value"), tmp0);
                    tmp_ref.unset();
                  }
                }
              }
              else {
                {
                  {
                    LINE(685,0);
                    Object tmp0((f_clone(v__variable)));
                    v_root_ptr.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(v__key, (VarNR(tmp0)));
                    tmp_ref.unset();
                  }
                  {
                    LINE(686,(lval(v_root_ptr.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).lvalAt(v__key, AccessFlags::CheckExist)))).o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)));
                    tmp_ref.unset();
                  }
                }
              }
            }
          }
        }
        if ((equal(v_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_GLOBAL))) || equal(v__variable_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_GLOBAL))))) {
          {
            {
              bool tmp0;
              {
                Variant tmp1((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars))));
                tmp0 = (isset(tmp1, v__key));
              }
              if (tmp0) {
                {
                  {
                    LINE(692,0);
                    const Variant &tmp0((m_tpl_vars.rvalRef(v__key, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                    lval(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars)).lvalAt(v__key, AccessFlags::CheckExist)).o_setPublic(NAMSTR(s_sse0c88471, "value"), tmp0);
                    tmp_ref.unset();
                  }
                }
              }
              else {
                {
                  {
                    LINE(695,0);
                    Object tmp0((f_clone(v__variable)));
                    ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars)).set(v__key, (VarNR(tmp0)));
                  }
                }
              }
            }
            {
              LINE(697,(lval(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars)).lvalAt(v__key, AccessFlags::CheckExist)))).o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)));
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 709 */
void c_Smarty_Internal_Template::t_getresourcetypename(CVarRef v_template_resource, VRefParam rv_resource_type, VRefParam rv_resource_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::getResourceTypeName);
  INTERCEPT_INJECTION("Smarty_Internal_Template::getResourceTypeName", (Array(ArrayInit(3).set(0, v_template_resource).setRef(1, rv_resource_type).setRef(2, rv_resource_name).create())), );
  Variant &v_resource_type ATTRIBUTE_UNUSED = rv_resource_type;
  Variant &v_resource_name ATTRIBUTE_UNUSED = rv_resource_name;
  {
    bool tmp0;
    {
      LINE(711,0);
      const Variant &tmp1((x_strpos(toString(v_template_resource), NAMVAR(s_svsdb381ae8, ":"))));
      tmp0 = (same(tmp1, false));
    }
    if (tmp0) {
      {
        {
          LINE(713,0);
          const Variant &tmp0((m_smarty.o_getPublic(NAMSTR(s_ssfe731b1f, "default_resource_type"), true)));
          v_resource_type.assignVal(tmp0);
        }
        v_resource_name.assignVal(v_template_resource);
      }
    }
    else {
      {
        {
          LINE(717,0);
          CVarRef tmp0((x_explode(NAMSTR(s_ssdb381ae8, ":"), toString(v_template_resource), toInt32(2LL))));
          v_resource_name = tmp0[1];
          v_resource_type = tmp0[0];
          ;
        }
        {
          bool tmp0;
          {
            LINE(718,0);
            int tmp1((x_strlen(toString(v_resource_type))));
            tmp0 = (equal(tmp1, 1LL));
          }
          if (tmp0) {
            {
              v_resource_type = NAMSTR(s_ss8ce7db5b, "file");
              v_resource_name.assignVal(v_template_resource);
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 732 */
Variant c_Smarty_Internal_Template::t_loadtemplateresourcehandler(CVarRef v_resource_type) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::loadTemplateResourceHandler);
  INTERCEPT_INJECTION("Smarty_Internal_Template::loadTemplateResourceHandler", array_createvi(1, toVPOD(v_resource_type)), r);
  String v__resource_class;
  Array v__known_stream;

  {
    bool tmp0;
    {
      tmp0 = (isset(LINE(735,(m_smarty.o_getPublic(NAMSTR(s_ssaa1d58ac, "registered_resources"), false))), v_resource_type));
    }
    if (tmp0) {
      {
        {
          p_Smarty_Internal_Resource_Registered tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssa8d14851, "Smarty_Internal_Resource_Registered"), &g->CDEC(smarty_internal_resource_registered))), (coo_Smarty_Internal_Resource_Registered()));
          return LINE(736,(((c_Smarty_Internal_Resource_Registered*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Template)), tmp0)));
        }
      }
    }
    else {
      {
        if (LINE(739,(x_in_array(v_resource_type, s_svaa16635bc)))) {
          {
            {
              LINE(740,0);
              const String &tmp0((x_ucfirst(toString(v_resource_type))));
              v__resource_class = concat(NAMSTR(s_ss4cf8722b, "Smarty_Internal_Resource_"), tmp0);
            }
            {
              Object obj1(create_object_only(v__resource_class));
              MethodCallPackage mcp0;
              mcp0.construct(obj1);
              const CallInfo *cit0 = mcp0.ci;
              (cit0->getMeth1Args())(mcp0, 1, m_smarty);
              return LINE(741,(id(obj1)));
            }
          }
        }
        else {
          {
            {
              LINE(744,0);
              const String &tmp0((x_ucfirst(toString(v_resource_type))));
              v__resource_class = concat(NAMSTR(s_sscf061346, "Smarty_Resource_"), tmp0);
            }
            {
              bool tmp0;
              {
                LINE(745,0);
                MethodCallPackage mcp1;
                CVarRef obj1 = m_smarty;
                mcp1.methodCall((obj1), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
                const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                tmp0 = (toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(v__resource_class))));
              }
              if (tmp0) {
                {
                  if (LINE(746,(x_class_exists(v__resource_class, false)))) {
                    {
                      {
                        Object obj1(create_object_only(v__resource_class));
                        MethodCallPackage mcp0;
                        mcp0.construct(obj1);
                        const CallInfo *cit0 = mcp0.ci;
                        (cit0->getMeth1Args())(mcp0, 1, m_smarty);
                        return LINE(747,(id(obj1)));
                      }
                    }
                  }
                  else {
                    {
                      {
                        p_Smarty_Internal_Resource_Registered tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssa8d14851, "Smarty_Internal_Resource_Registered"), &g->CDEC(smarty_internal_resource_registered))), (coo_Smarty_Internal_Resource_Registered()));
                        return LINE(749,(((c_Smarty_Internal_Resource_Registered*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Template), v_resource_type), tmp0)));
                      }
                    }
                  }
                }
              }
              else {
                {
                  {
                    LINE(753,0);
                    const Array &tmp0((x_stream_get_wrappers()));
                    v__known_stream = tmp0;
                  }
                  if (LINE(754,(x_in_array(v_resource_type, VarNR(v__known_stream))))) {
                    {
                      {
                        bool tmp0;
                        {
                          LINE(756,0);
                          const Variant &tmp1((m_smarty.o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true)));
                          tmp0 = (x_is_object(tmp1));
                        }
                        if (tmp0) {
                          {
                            {
                              LINE(757,0);
                              MethodCallPackage mcp0;
                              CVarRef obj0 = m_smarty.o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
                              mcp0.methodCall((obj0), NAMSTR(s_ss63633049, "isTrustedStream"), 0x78515A6B5473B7B3LL);
                              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                              (mcp0.ci->getMeth1Args())(mcp0, 1, v_resource_type);
                            }
                          }
                        }
                      }
                      {
                        p_Smarty_Internal_Resource_Stream tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss57e316fb, "Smarty_Internal_Resource_Stream"), &g->CDEC(smarty_internal_resource_stream))), (coo_Smarty_Internal_Resource_Stream()));
                        return LINE(759,(((c_Smarty_Internal_Resource_Stream*)tmp0.get()->create(m_smarty), tmp0)));
                      }
                    }
                  }
                  else {
                    {
                      {
                        p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                        throw_exception(LINE(761,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss68cc2abc, "Unkown resource type '"), toString(v_resource_type), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
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
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 771 */
String c_Smarty_Internal_Template::t_createpropertyheader(CVarRef v_cache //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::createPropertyHeader);
  INTERCEPT_INJECTION("Smarty_Internal_Template::createPropertyHeader", array_createvi(1, toVPOD(v_cache)), r);
  String v_plugins_string;
  Variant v_tmp;
  Variant v_data;
  String v_properties_string;
  Primitive v_name = 0;
  Variant v_function_data;

  Variant tmp_ref;
  v_plugins_string = NAMSTR(s_ss00000000, "");
  if (!(toBoolean(v_cache))) {
    {
      {
        bool tmp0;
        {
          tmp0 = (!(empty(m_required_plugins, NAMSTR(s_ss9094af88, "compiled"), true)));
        }
        if (tmp0) {
          {
            v_plugins_string = NAMSTR(s_ss271d3c8a, "<\?php ");
            {
              LOOP_COUNTER(1);
              Variant map2 = LINE(778,(m_required_plugins.rvalAt(NAMSTR(s_ss9094af88, "compiled"), AccessFlags::Error_Key)));
              {
                StringBuffer tmp_sbuf_v_plugins_string(512);
                for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                  LOOP_COUNTER_CHECK(1);
                  iter3.second(v_tmp);
                  {
                    {
                      LOOP_COUNTER(4);
                      for (ArrayIter iter6 = v_tmp.begin(s_class_name, true); !iter6.end(); ++iter6) {
                        LOOP_COUNTER_CHECK(4);
                        iter6.second(v_data);
                        {
                          {
                            LINE(780,0);
                            const String &tmp0((toString(v_data.rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key))));
                            const String &tmp1((toString(v_data.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                            tmp_sbuf_v_plugins_string.addWithTaint("if (!is_callable('", 18).addWithTaint(tmp0).addWithTaint("')) include '", 13).addWithTaint(tmp1).addWithTaint("';\n", 3);
                          }
                        }
                      }
                    }
                  }
                }
                concat_assign(v_plugins_string, tmp_sbuf_v_plugins_string.detachWithTaint());
              }
            }
            concat_assign(v_plugins_string, NAMSTR(s_ssf7e13165, "\?>"));
          }
        }
      }
      {
        bool tmp0;
        {
          tmp0 = (!(empty(m_required_plugins, NAMSTR(s_ss8b74ea02, "nocache"), true)));
        }
        if (tmp0) {
          {
            m_has_nocache_code = true;
            {
              LINE(787,0);
              const String &tmp0((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
              concat_assign(v_plugins_string, concat3(NAMSTR(s_ss72c8c61c, "<\?php echo '/*%%SmartyNocache:"), tmp0, NAMSTR(s_ss7b05e9d5, "%%*/<\?php ")));
            }
            {
              LOOP_COUNTER(7);
              Variant map8 = LINE(788,(m_required_plugins.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
              {
                StringBuffer tmp_sbuf_v_plugins_string(512);
                for (ArrayIter iter9 = map8.begin(s_class_name, true); !iter9.end(); iter9.next()) {
                  LOOP_COUNTER_CHECK(7);
                  iter9.second(v_tmp);
                  {
                    {
                      LOOP_COUNTER(10);
                      for (ArrayIter iter12 = v_tmp.begin(s_class_name, true); !iter12.end(); ++iter12) {
                        LOOP_COUNTER_CHECK(10);
                        iter12.second(v_data);
                        {
                          {
                            LINE(790,0);
                            const String &tmp0((toString(v_data.rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key))));
                            const String &tmp1((toString(v_data.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                            tmp_sbuf_v_plugins_string.addWithTaint("if (!is_callable(\\'", 19).addWithTaint(tmp0).addWithTaint("\\')) include \\'", 15).addWithTaint(tmp1).addWithTaint("\\';\n", 4);
                          }
                        }
                      }
                    }
                  }
                }
                concat_assign(v_plugins_string, tmp_sbuf_v_plugins_string.detachWithTaint());
              }
            }
            {
              LINE(793,0);
              const String &tmp0((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
              concat_assign(v_plugins_string, concat3(NAMSTR(s_ss9dd89083, "\?>/*/%%SmartyNocache:"), tmp0, NAMSTR(s_sscfc28681, "%%*/';\?>\n")));
            }
          }
        }
      }
    }
  }
  m_properties.set(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), (m_has_nocache_code), true);
  {
    LINE(798,0);
    const String &tmp0((toString(m_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
    v_properties_string = concat3(NAMSTR(s_ssa17a5ba3, "<\?php /*%%SmartyHeaderCode:"), tmp0, NAMSTR(s_ss60d116a4, "%%*/"));
  }
  if (LINE(799,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss201b099b, "direct_access_security"), true))))) {
    {
      concat_assign(v_properties_string, NAMSTR(s_ss3b7f68a0, "if(!defined('SMARTY_DIR')) exit('no direct access allowed');\n"));
    }
  }
  if (toBoolean(v_cache)) {
    {
      m_properties.weakRemove(NAMSTR(s_ss52403931, "function"), true);
      {
        bool tmp0;
        {
          tmp0 = (!(m_smarty.o_empty(NAMSTR(s_ss57c82ef4, "template_functions"), s_class_name)));
        }
        if (tmp0) {
          {
            {
              LOOP_COUNTER(13);
              Variant map14 = LINE(807,(m_smarty.o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true)));
              for (ArrayIter iter15 = map14.begin(s_class_name, true); !iter15.end(); iter15.next()) {
                LOOP_COUNTER_CHECK(13);
                iter15.second(v_function_data);
                v_name.assignVal(iter15.first());
                {
                  {
                    bool tmp0;
                    {
                      tmp0 = (isset(v_function_data, NAMSTR(s_ss03d41454, "called_nocache"), true));
                    }
                    if (tmp0) {
                      {
                        {
                          v_function_data.weakRemove(NAMSTR(s_ss03d41454, "called_nocache"), true);
                          {
                            LINE(809,(unsetLval(m_smarty.o_unsetLval(NAMSTR(s_ss57c82ef4, "template_functions"), tmp_ref, s_class_name), v_name))).weakRemove(NAMSTR(s_ss03d41454, "called_nocache"), true);
                            tmp_ref.unset();
                          }
                        }
                        {
                          Variant tmp0((v_function_data));
                          LINE(810,(lval(m_properties.lvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::CheckExist_Key)))).set(v_name, (tmp0));
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
    }
  }
  {
    LINE(815,0);
    const String &tmp0((toString(x_var_export(m_properties, true))));
    concat_assign(v_properties_string, concat3(NAMSTR(s_ss8dca71f3, "$_smarty_tpl->decodeProperties("), tmp0, NAMSTR(s_ss03fd3d1a, "); /*/%%SmartyHeaderCode%%*/\?>\n")));
  }
  return concat(v_properties_string, v_plugins_string);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 822 */
void c_Smarty_Internal_Template::t_decodeproperties(CVarRef v_properties) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::decodeProperties);
  INTERCEPT_INJECTION("Smarty_Internal_Template::decodeProperties", array_createvi(1, toVPOD(v_properties)), );
  Variant tmp_ref;
  {
    LINE(824,0);
    const Variant &tmp0((v_properties.rvalAt(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), AccessFlags::Error_Key)));
    m_has_nocache_code.assignVal(tmp0);
  }
  {
    LINE(825,0);
    const Variant &tmp0((v_properties.rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
    m_properties.set(NAMSTR(s_ss73233481, "nocache_hash"), (tmp0), true);
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_properties, NAMSTR(s_ss41eb5ea5, "cache_lifetime"), true));
    }
    if (tmp0) {
      {
        {
          LINE(827,0);
          const Variant &tmp0((v_properties.rvalAt(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), AccessFlags::Error_Key)));
          m_properties.set(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), (tmp0), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_properties, NAMSTR(s_ss3d122809, "file_dependency"), true));
    }
    if (tmp0) {
      {
        {
          LINE(830,0);
          const Variant &tmp0((m_properties.rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
          const Variant &tmp1((v_properties.rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
          const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
          m_properties.set(NAMSTR(s_ss3d122809, "file_dependency"), (tmp2), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (!(empty(v_properties, NAMSTR(s_ss52403931, "function"), true)));
    }
    if (tmp0) {
      {
        {
          LINE(833,0);
          const Variant &tmp0((m_properties.rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
          const Variant &tmp1((v_properties.rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
          const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
          m_properties.set(NAMSTR(s_ss52403931, "function"), (tmp2), true);
        }
        {
          LINE(834,0);
          const Variant &tmp0((m_smarty.o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true)));
          const Variant &tmp1((v_properties.rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
          const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
          m_smarty.o_setPublic(NAMSTR(s_ss57c82ef4, "template_functions"), tmp2);
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 841 */
void c_Smarty_Internal_Template::t_createlocalarrayvariable(CVarRef v_tpl_var, CVarRef v_nocache //  = false_varNR
, CVarRef v_scope //  = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL))
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::createLocalArrayVariable);
  INTERCEPT_INJECTION("Smarty_Internal_Template::createLocalArrayVariable", array_createvi(3, toVPOD(v_tpl_var), toVPOD(v_nocache), toVPOD(v_scope)), );
  Variant v_tpl_var_inst;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (!(isset(m_tpl_vars, v_tpl_var)));
    }
    if (tmp0) {
      {
        {
          LINE(844,0);
          const Variant &tmp0((t_getvariable(v_tpl_var, null, true_varNR, false_varNR)));
          v_tpl_var_inst.assignVal(tmp0);
        }
        if (instanceOf(v_tpl_var_inst, NAMSTR(s_ssd94c7c1f, "Undefined_Smarty_Variable"))) {
          {
            {
              p_Smarty_Variable tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss5b98208f, "Smarty_variable"), &g->CDEC(smarty_variable))), (coo_Smarty_Variable()));
              ((c_Smarty_Variable*)tmp0.get()->create(s_sa00000000, v_nocache, v_scope));
              m_tpl_vars.set(v_tpl_var, (VarNR(tmp0)));
            }
          }
        }
        else {
          {
            {
              LINE(848,0);
              Object tmp0((f_clone(v_tpl_var_inst)));
              m_tpl_vars.set(v_tpl_var, (VarNR(tmp0)));
            }
            if (!equal(v_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)))) {
              {
                {
                  LINE(850,(lval(m_tpl_vars.lvalAt(v_tpl_var, AccessFlags::CheckExist)))).o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), v_scope);
                }
              }
            }
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(854,0);
      const Variant &tmp1((m_tpl_vars.rvalRef(v_tpl_var, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp2 = (x_is_array(tmp1));
      if (!tmp2) {
        const Variant &tmp3((m_tpl_vars.rvalRef(v_tpl_var, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp2 = (instanceOf(tmp3, NAMSTR(s_ss92306c9b, "ArrayAccess")));
      }
      tmp0 = (!(tmp2));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        LINE(855,(x_settype(ref(lval(m_tpl_vars.lvalAt(v_tpl_var, AccessFlags::CheckExist)).o_lval(NAMSTR(s_sse0c88471, "value"), Variant(), s_class_name)), NAMSTR(s_ss8c04b960, "array"))));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 864 */
Variant c_Smarty_Internal_Template::t__count(CVarRef v_value) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Template, Smarty_Internal_Template::_count);
  INTERCEPT_INJECTION("Smarty_Internal_Template::_count", array_createvi(1, toVPOD(v_value)), r);
  if ((same(x_is_array(v_value), true) || instanceOf(v_value, NAMSTR(s_ss5b753b53, "Countable")))) {
    {
      return LINE(867,(x_count(v_value)));
    }
  }
  else if (instanceOf(v_value, NAMSTR(s_ssc64ebfff, "Iterator"))) {
    {
      {
        LINE(869,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_value;
        mcp0.methodCall((obj0), NAMSTR(s_ss941ca25f, "rewind"), 0x1670096FDE27AF6ALL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth0Args())(mcp0, 0);
      }
      {
        bool tmp0;
        {
          LINE(870,0);
          MethodCallPackage mcp1;
          CVarRef obj1 = v_value;
          mcp1.methodCall((obj1), NAMSTR(s_ss9943cbf4, "valid"), 0x6413CB5154808C44LL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          tmp0 = (toBoolean((mcp1.ci->getMeth0Args())(mcp1, 0)));
        }
        if (tmp0) {
          {
            return LINE(871,(x_iterator_count(v_value)));
          }
        }
      }
    }
  }
  else if (instanceOf(v_value, NAMSTR(s_ssa59d6e68, "PDOStatement"))) {
    {
      {
        LINE(874,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_value;
        mcp0.methodCall((obj0), NAMSTR(s_ssc54b11d4, "rowCount"), 0x0D43A7148903299ALL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        return wrap_variant((mcp0.ci->getMeth0Args())(mcp0, 0));
      }
    }
  }
  else if (instanceOf(v_value, NAMSTR(s_ss22bfe43e, "Traversable"))) {
    {
      return LINE(876,(x_iterator_count(v_value)));
    }
  }
  else if (instanceOf(v_value, NAMSTR(s_ss92306c9b, "ArrayAccess"))) {
    {
      {
        bool tmp0;
        {
          LINE(878,0);
          MethodCallPackage mcp1;
          CVarRef obj1 = v_value;
          mcp1.methodCall((obj1), NAMSTR(s_ss6cc6b367, "offsetExists"), 0x3E6BCFB9742FC700LL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          tmp0 = (toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svif01bca90, 0LL))));
        }
        if (tmp0) {
          {
            return 1LL;
          }
        }
      }
    }
  }
  else if (x_is_object(v_value)) {
    {
      return LINE(882,(x_count(v_value)));
    }
  }
  return 0LL;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 890 */
Variant c_Smarty_Internal_Template::t_fetch(CVarRef v_template //  = null_variant
, CVarRef v_cache_id //  = null_variant
, CVarRef v_compile_id //  = null_variant
, Variant v_parent //  = null
, CVarRef v_display //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::fetch);
  INTERCEPT_INJECTION("Smarty_Internal_Template::fetch", array_createvi(5, toVPOD(v_template), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_parent), toVPOD(v_display)), r);
  if (equal(v_template, null)) {
    {
      {
        LINE(893,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = m_smarty;
        mcp0.methodCall((obj0), NAMSTR(s_ssf46d6580, "fetch"), 0x5E82B850BB90B0FBLL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        return wrap_variant((mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template))));
      }
    }
  }
  else {
    {
      if (!(isset(v_parent))) {
        {
          v_parent = GET_THIS_TYPED(Smarty_Internal_Template);
        }
      }
      {
        LINE(898,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = m_smarty;
        mcp0.methodCall((obj0), NAMSTR(s_ssf46d6580, "fetch"), 0x5E82B850BB90B0FBLL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        return wrap_variant((mcp0.ci->getMeth5Args())(mcp0, 5, v_template, v_cache_id, v_compile_id, v_parent, v_display));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 906 */
Variant c_Smarty_Internal_Template::t_display(CVarRef v_template //  = null_variant
, CVarRef v_cache_id //  = null_variant
, CVarRef v_compile_id //  = null_variant
, Variant v_parent //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::display);
  INTERCEPT_INJECTION("Smarty_Internal_Template::display", array_createvi(4, toVPOD(v_template), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_parent)), r);
  if (equal(v_template, null)) {
    {
      {
        LINE(909,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = m_smarty;
        mcp0.methodCall((obj0), NAMSTR(s_ss98361de0, "display"), 0x797A6FC6339ADA9ELL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        return wrap_variant((mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Template))));
      }
    }
  }
  else {
    {
      if (!(isset(v_parent))) {
        {
          v_parent = GET_THIS_TYPED(Smarty_Internal_Template);
        }
      }
      {
        LINE(914,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = m_smarty;
        mcp0.methodCall((obj0), NAMSTR(s_ss98361de0, "display"), 0x797A6FC6339ADA9ELL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        return wrap_variant((mcp0.ci->getMeth4Args())(mcp0, 4, v_template, v_cache_id, v_compile_id, v_parent));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 924 */
Variant c_Smarty_Internal_Template::t___set(Variant v_property_name, Variant v_value) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::__set);
  INTERCEPT_INJECTION("Smarty_Internal_Template::__set", array_createvi(2, toVPOD(v_property_name), toVPOD(v_value)), r);
  Variant tmp_ref;
  if ((equal(v_property_name, NAMSTR(s_ss6144ba4b, "resource_object")) || equal(v_property_name, NAMSTR(s_ss59c4ea93, "cache_resource_object")))) {
    {
      {
        GET_THIS_ARROW()o_set(toString(v_property_name), v_value, s_class_name);
      }
    }
  }
  else if (LINE(928,(x_property_exists(m_smarty, toString(v_property_name))))) {
    {
      {
        m_smarty.o_set(toString(v_property_name), v_value, s_class_name);
      }
    }
  }
  else {
    {
      {
        p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
        throw_exception(LINE(931,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss8c13e65b, "invalid template property '"), toString(v_property_name), NAMSTR(s_ssbdbd4b1a, "'.")))), tmp0))));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 939 */
Variant c_Smarty_Internal_Template::t___get(Variant v_property_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::__get);
  INTERCEPT_INJECTION("Smarty_Internal_Template::__get", array_createvi(1, toVPOD(v_property_name)), r);
  Variant tmp_ref;
  if (equal(v_property_name, NAMSTR(s_ss6144ba4b, "resource_object"))) {
    {
      GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss6144ba4b, "resource_object"), null);
      {
        bool tmp0;
        {
          Variant tmp1((m_template_resource));
          const VRefParamValue &tmp2((ref(m_resource_type)));
          const VRefParamValue &tmp3((ref(m_resource_name)));
          LINE(945,0);
          const VRefParamValue &tmp4((ref(GET_THIS_ARROW()o_lval(NAMSTR(s_ss6144ba4b, "resource_object"), tmp_ref, s_class_name))));
          bool tmp5((t_parseresourcename(tmp1, tmp2, tmp3, tmp4)));
          tmp0 = (!(tmp5));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            {
              p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
              throw_exception(LINE(946,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss0b2c466a, "Unable to parse resource name \""), toString(m_template_resource), NAMSTR(s_ss7e5fc106, "\"")))), tmp0))));
            }
          }
        }
      }
      return LINE(948,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true)));
    }
  }
  if (equal(v_property_name, NAMSTR(s_ss59c4ea93, "cache_resource_object"))) {
    {
      {
        LINE(952,0);
        MethodCallPackage mcp0;
        mcp0.methodCall((GET_THIS_VALID()), NAMSTR(s_ssed94077a, "loadCacheResource"), 0x398B08DD691FC2CBLL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
        GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), tmp1);
      }
      return LINE(953,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss59c4ea93, "cache_resource_object"), true)));
    }
  }
  if (LINE(955,(x_property_exists(m_smarty, toString(v_property_name))))) {
    {
      return LINE(956,(m_smarty.o_get(toString(v_property_name), true, s_class_name)));
    }
  }
  else {
    {
      {
        p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
        throw_exception(LINE(958,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_sscad0b560, "template property '"), toString(v_property_name), NAMSTR(s_ss9fcf37c4, "' does not exist.")))), tmp0))));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 971 */
Variant c_Smarty_Internal_Template::t___call(Variant v_name, Variant v_args) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Template, Smarty_Internal_Template::__call);
  INTERCEPT_INJECTION("Smarty_Internal_Template::__call", array_createvi(2, toVPOD(v_name), toVPOD(v_args)), r);
  Variant &sv_camel_func ATTRIBUTE_UNUSED = g->sv_Smarty_Internal_Template_____call___camel_func.lvalAt(this->o_getClassName());
  Variant &inited_sv_camel_func ATTRIBUTE_UNUSED = g->inited_sv_Smarty_Internal_Template_____call___camel_func.lvalAt(this->o_getClassName());
  String v_first3;
  Variant v_property_name;

  Variant tmp_ref;
  if (!inited_sv_camel_func) {
    setNull(sv_camel_func);
    inited_sv_camel_func = true;
  }
  if (!(isset(sv_camel_func))) {
    {
      LINE(975,0);
      const String &tmp0(("1_df_lambda_2"));
      sv_camel_func = tmp0;
    }
  }
  {
    LINE(977,0);
    const String &tmp0((toString(x_substr(toString(v_name), toInt32(0LL), toInt32(3LL)))));
    const String &tmp1((x_strtolower(tmp0)));
    v_first3 = tmp1;
  }
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(978,(x_in_array(VarNR(v_first3), s_svaa473ec17))));
      if (tmp1) {
        const Variant &tmp2((x_substr(toString(v_name), toInt32(3LL), toInt32(1LL))));
        tmp1 = (!same(tmp2, NAMSTR(s_ss7f06ffcd, "_")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          LINE(981,0);
          const String &tmp0((toString(x_substr(toString(v_name), toInt32(3LL), toInt32(1LL)))));
          const String &tmp1((x_strtolower(tmp0)));
          const String &tmp2((toString(x_substr(toString(v_name), toInt32(4LL)))));
          v_property_name = concat(tmp1, tmp2);
        }
        {
          LINE(983,0);
          const Variant &tmp0((x_preg_replace_callback(NAMVAR(s_svs7a552cca, "/([A-Z])/"), sv_camel_func, v_property_name)));
          v_property_name.assignVal(tmp0);
        }
        if (LINE(984,(x_property_exists(VarNR(GET_THIS_TYPED(Smarty_Internal_Template)), toString(v_property_name))))) {
          {
            if (equal(v_first3, NAMSTR(s_sseac4979f, "get"))) {
              return LINE(986,(GET_THIS_ARROW()o_get(toString(v_property_name), true, s_class_name)));
            }
            else {
              {
                LINE(988,0);
                const Variant &tmp0((v_args.rvalAt(0LL, AccessFlags::Error)));
                return GET_THIS_ARROW()o_set(toString(v_property_name), tmp0, s_class_name);
              }
            }
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(992,0);
      const Variant &tmp1((x_strpos(toString(v_name), NAMVAR(s_svs7f06ffcd, "_"))));
      tmp0 = (!same(tmp1, false));
    }
    if (tmp0) {
      {
        if (!(isset(m_wrapper))) {
          {
            {
              p_Smarty_Internal_Wrapper tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss5a3c06cf, "Smarty_Internal_Wrapper"), &g->CDEC(smarty_internal_wrapper))), (coo_Smarty_Internal_Wrapper()));
              ((c_Smarty_Internal_Wrapper*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Template)));
              m_wrapper = tmp0;
            }
          }
        }
        {
          LINE(996,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = m_wrapper;
          mcp0.methodCall((obj0), NAMSTR(s_ssc8d40d4e, "convert"), 0x2380F10632B403BBLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          return wrap_variant((mcp0.ci->getMeth2Args())(mcp0, 2, v_name, v_args));
        }
      }
    }
  }
  return LINE(999,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(v_name)))), toArray(v_args))));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Template() {
  return NEWOBJ(c_Smarty_Internal_Template)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_template_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_template.php, pm_php$Smarty$libs$sysplugins$smarty_internal_template_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_template) = true;
  checkClassExistsThrow(NAMSTR(s_ssf6f068b0, "Smarty_Internal_Data"), &g->CDEC(smarty_internal_data));
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
  (int64)&false_varNR,
  (int64)&NAMVAR(s_svs00000000, ""),
  (int64)&s_sva00000000,
  (int64)&s_sva6e013c4d,
  (int64)&true_varNR,
  (int64)&s_sva804b3241,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x59405449698DB281LL,7,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_cache_lifetime),&NAMSTR(s_ss41eb5ea5, "cache_lifetime") },
  {0x05BF0D72DE03548DLL,4,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_suppressFileDependency),&NAMSTR(s_ss3600cf36, "suppressFileDependency") },
  {0x520CB5D33892BF93LL,-1,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_suppressHeader),&NAMSTR(s_ss0838733b, "suppressHeader") },
  {0x5D7044DD1A7A6095LL,12,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_resource_name),&NAMSTR(s_sse942854d, "resource_name") },
  {0x10C7B37CA986AF16LL,18,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_saved_modifier),&NAMSTR(s_ss8e649995, "saved_modifier") },
  {0x655B3E4E98394917LL,16,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_has_nocache_code),&NAMSTR(s_ss35a5e0ad, "has_nocache_code") },
  {0x310A65F50CD2B898LL,12,0,26,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_cached_filepath),&NAMSTR(s_ssa22cfef1, "\000Smarty_Internal_Template\000cached_filepath") },
  {0x78FB94B7CF28D51BLL,13,0,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_cacher_class),&NAMSTR(s_sse3d995b2, "cacher_class") },
  {0x5088298A827F611BLL,28,2,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_templateUid),&NAMSTR(s_ss5f0f8bff, "templateUid") },
  {0x46670351706CE91BLL,23,0,26,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_compiled_filepath),&NAMSTR(s_ssfeb26dd5, "\000Smarty_Internal_Template\000compiled_filepath") },
  {0x24EB611B03892C1DLL,-8,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_mustCompile),&NAMSTR(s_ss614f620c, "mustCompile") },
  {0x609ABB71973D8E20LL,16,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_tpl_vars),&NAMSTR(s_ss62b7404c, "tpl_vars") },
  {0x34FA6F2229D0E8A3LL,-12,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_caching),&NAMSTR(s_ssafeed509, "caching") },
  {0x1ECAB96410D12FA4LL,-10,0,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_resource_type),&NAMSTR(s_ss89a9c899, "resource_type") },
  {0x4D36FFEF6DD7C724LL,-10,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_required_plugins),&NAMSTR(s_sscfae774a, "required_plugins") },
  {0x415CFCA4A487DB29LL,-7,0,26,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_isExisting),&NAMSTR(s_ss970706fd, "\000Smarty_Internal_Template\000isExisting") },
  {0x402D6C43BAF9A5ADLL,0,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_used_tags),&NAMSTR(s_ss61b147e5, "used_tags") },
  {0x1D8C259A9A0F5AAFLL,-5,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_compile_id),&NAMSTR(s_ss962fc398, "compile_id") },
  {0x023BD843F96C6EB8LL,19,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_cached_timestamp),&NAMSTR(s_ssd8b4fc59, "cached_timestamp") },
  {0x38807339BBD28A3ALL,-2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_cache_id),&NAMSTR(s_ssb26f3d0e, "cache_id") },
  {0x7675274CB7942143LL,15,0,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_caching_type),&NAMSTR(s_sse440d4fa, "caching_type") },
  {0x757C677CC7767A43LL,9,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_write_compiled_code),&NAMSTR(s_ss8f8ee1e8, "write_compiled_code") },
  {0x0CDC655BF5DA2ACALL,17,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_smarty),&NAMSTR(s_ss675664bf, "smarty") },
  {0x0DE83ADD8C0EC74ELL,17,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_template_source),&NAMSTR(s_ss105c90e5, "template_source") },
  {0x6E848096D188EBCFLL,-13,1,26,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_cacheFileChecked),&NAMSTR(s_ssa8122ec9, "\000Smarty_Internal_Template\000cacheFileChecked") },
  {0x6C09887B749653DALL,-11,6,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_properties),&NAMSTR(s_ss90269404, "properties") },
  {0x1EB1092AEE82D8DBLL,-16,0,26,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_compiled_timestamp),&NAMSTR(s_ssbdf2f60e, "\000Smarty_Internal_Template\000compiled_timestamp") },
  {0x53DCFFF92D13045ELL,4,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_parent),&NAMSTR(s_ssfb10fd8c, "parent") },
  {0x5CD45AFE8D1B5B60LL,10,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_compiler_object),&NAMSTR(s_ss3ad590aa, "compiler_object") },
  {0x248C806E61A4E661LL,-4,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_plugin_data),&NAMSTR(s_ss268df45e, "plugin_data") },
  {0x117956DF3F4EF363LL,-24,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_rendered_content),&NAMSTR(s_ss076f6aa6, "rendered_content") },
  {0x64D8740D5654DD66LL,-2,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_config_vars),&NAMSTR(s_ss4fdfffb6, "config_vars") },
  {0x0009E868F729CFEBLL,-6,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_compiled_template),&NAMSTR(s_ss8a1ec5e7, "compiled_template") },
  {0x59FCA08FFD57DCF0LL,-20,0,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_template_resource),&NAMSTR(s_ss11a5bbab, "template_resource") },
  {0x7C1580B17E2F3BF0LL,-18,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_wrapper),&NAMSTR(s_ss58fe81c7, "wrapper") },
  {0x2F9BA10A3C4ECF71LL,-2,1,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_forceNocache),&NAMSTR(s_ssd326038d, "forceNocache") },
  {0x2A1D3C2BC442AB71LL,-13,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_template_filepath),&NAMSTR(s_ss1994ea1c, "template_filepath") },
  {0x279B2A848BB281F3LL,-13,0,26,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_isCached),&NAMSTR(s_ss4c4d987a, "\000Smarty_Internal_Template\000isCached") },
  {0x6ECFD792D0F39EF8LL,-19,0,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_cacher_object),&NAMSTR(s_ss3c3a1bfe, "cacher_object") },
  {0x137E3503C31918F8LL,-5,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_block_data),&NAMSTR(s_ssf85b5e4a, "block_data") },
  {0x43417CAB774D4EFELL,-31,0,26,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Template, m_template_timestamp),&NAMSTR(s_ssb7fa7c90, "\000Smarty_Internal_Template\000template_timestamp") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Template hash
  -1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,2,-1,3,4,5,6,-1,-1,7,-1,10,-1,-1,11,-1,-1,12,13,-1,-1,-1,-1,15,-1,-1,-1,16,-1,17,-1,-1,-1,-1,-1,-1,-1,-1,18,-1,19,-1,-1,-1,-1,-1,-1,-1,-1,20,-1,-1,-1,-1,-1,-1,22,-1,-1,-1,23,24,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,25,26,-1,-1,27,-1,28,29,-1,30,-1,-1,31,-1,-1,-1,-1,32,-1,-1,-1,-1,33,35,-1,37,-1,-1,-1,-1,38,-1,-1,-1,-1,-1,40,-1,
  // Smarty_Internal_Template lists
  15,40,9,26,6,37,24,-1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Template::os_prop_table = {
  127,28,-1,-1,-1,-1,136,0,
  cpt_hash_entries+0,&c_Smarty_Internal_Data::os_prop_table,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
