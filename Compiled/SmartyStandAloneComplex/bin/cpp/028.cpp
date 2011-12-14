
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/Smarty.class.fws.h>

// Dependencies
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_debug.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_filter_handler.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_utility.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_wrapper.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smartyAutoload;
/* preface finishes */
/* SRC: Smarty/libs/Smarty.class.php line 85 */
const StaticString q_Smarty___SMARTY_VERSION(LITSTR_INIT("Smarty-3.0.9"));
const int64 q_Smarty___SCOPE_LOCAL = 0LL;
const int64 q_Smarty___SCOPE_PARENT = 1LL;
const int64 q_Smarty___SCOPE_ROOT = 2LL;
const int64 q_Smarty___SCOPE_GLOBAL = 3LL;
const int64 q_Smarty___CACHING_OFF = 0LL;
const int64 q_Smarty___CACHING_LIFETIME_CURRENT = 1LL;
const int64 q_Smarty___CACHING_LIFETIME_SAVED = 2LL;
const int64 q_Smarty___PHP_PASSTHRU = 0LL;
const int64 q_Smarty___PHP_QUOTE = 1LL;
const int64 q_Smarty___PHP_REMOVE = 2LL;
const int64 q_Smarty___PHP_ALLOW = 3LL;
const StaticString q_Smarty___FILTER_POST(LITSTR_INIT("post"));
const StaticString q_Smarty___FILTER_PRE(LITSTR_INIT("pre"));
const StaticString q_Smarty___FILTER_OUTPUT(LITSTR_INIT("output"));
const StaticString q_Smarty___FILTER_VARIABLE(LITSTR_INIT("variable"));
const StaticString q_Smarty___PLUGIN_FUNCTION(LITSTR_INIT("function"));
const StaticString q_Smarty___PLUGIN_BLOCK(LITSTR_INIT("block"));
const StaticString q_Smarty___PLUGIN_COMPILER(LITSTR_INIT("compiler"));
const StaticString q_Smarty___PLUGIN_MODIFIER(LITSTR_INIT("modifier"));
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty)
const InstanceOfInfo c_Smarty::s_instanceof_table[] = {
  {0x0CDC655BF5DA2ACALL,0,"Smarty",&cw_Smarty},
  {0x3223E6318F246CB6LL,1,"Smarty_Internal_Data",&cw_Smarty_Internal_Data},
};
const int c_Smarty::s_instanceof_index[] = {
  3,
  -1,-1,0,-1,
};
Variant c_Smarty::doCall(Variant v_name, Variant v_arguments, bool fatal) {
  return t___call(v_name, !v_arguments.isNull() ? v_arguments : Variant(Array::Create()));
}
CallInfo c_Smarty::ci_settemplatedir((void*)&c_Smarty::i_settemplatedir, (void*)&c_Smarty::ifa_settemplatedir, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_display((void*)&c_Smarty::i_display, (void*)&c_Smarty::ifa_display, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_createdata((void*)&c_Smarty::i_createdata, (void*)&c_Smarty::ifa_createdata, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_getregisteredobject((void*)&c_Smarty::i_getregisteredobject, (void*)&c_Smarty::ifa_getregisteredobject, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_templateexists((void*)&c_Smarty::i_templateexists, (void*)&c_Smarty::ifa_templateexists, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci___destruct((void*)&c_Smarty::i___destruct, (void*)&c_Smarty::ifa___destruct, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_disablesecurity((void*)&c_Smarty::i_disablesecurity, (void*)&c_Smarty::ifa_disablesecurity, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_iscached((void*)&c_Smarty::i_iscached, (void*)&c_Smarty::ifa_iscached, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_setdebugtemplate((void*)&c_Smarty::i_setdebugtemplate, (void*)&c_Smarty::ifa_setdebugtemplate, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci___construct((void*)&c_Smarty::i___construct, (void*)&c_Smarty::ifa___construct, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_addtemplatedir((void*)&c_Smarty::i_addtemplatedir, (void*)&c_Smarty::ifa_addtemplatedir, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_addpluginsdir((void*)&c_Smarty::i_addpluginsdir, (void*)&c_Smarty::ifa_addpluginsdir, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_clearallcache((void*)&c_Smarty::i_clearallcache, (void*)&c_Smarty::ifa_clearallcache, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_clearcache((void*)&c_Smarty::i_clearcache, (void*)&c_Smarty::ifa_clearcache, 5, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_loadcacheresource((void*)&c_Smarty::i_loadcacheresource, (void*)&c_Smarty::ifa_loadcacheresource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci___clone((void*)&c_Smarty::i___clone, (void*)&c_Smarty::ifa___clone, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_getglobal((void*)&c_Smarty::i_getglobal, (void*)&c_Smarty::ifa_getglobal, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_gettags((void*)&c_Smarty::i_gettags, (void*)&c_Smarty::ifa_gettags, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_loadplugin((void*)&c_Smarty::i_loadplugin, (void*)&c_Smarty::ifa_loadplugin, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_createtemplate((void*)&c_Smarty::i_createtemplate, (void*)&c_Smarty::ifa_createtemplate, 5, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_fetch((void*)&c_Smarty::i_fetch, (void*)&c_Smarty::ifa_fetch, 5, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci___call((void*)&c_Smarty::i___call, (void*)&c_Smarty::ifa___call, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_getdebugtemplate((void*)&c_Smarty::i_getdebugtemplate, (void*)&c_Smarty::ifa_getdebugtemplate, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty::ci_enablesecurity((void*)&c_Smarty::i_enablesecurity, (void*)&c_Smarty::ifa_enablesecurity, 1, 4, 0x0000000000000000LL);
Variant c_Smarty::i_settemplatedir(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_settemplatedir, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::setTemplateDir", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_settemplatedir(arg0), null);
  }
}
Variant c_Smarty::i_display(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_display, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::display", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_display(arg0, arg1, arg2, arg3), null);
  }
}
Variant c_Smarty::i_createdata(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_createdata, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_createdata(arg0));
  }
}
Variant c_Smarty::i_getregisteredobject(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getregisteredobject, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::getRegisteredObject", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getregisteredobject(arg0));
  }
}
Variant c_Smarty::i_templateexists(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_templateexists, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::templateExists", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_templateexists(arg0));
  }
}
Variant c_Smarty::i_iscached(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_iscached, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::isCached", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_iscached(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty::i_setdebugtemplate(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_setdebugtemplate, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::setDebugTemplate", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_setdebugtemplate(arg0));
  }
}
Variant c_Smarty::i_addtemplatedir(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_addtemplatedir, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::addTemplateDir", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_addtemplatedir(arg0), null);
  }
}
Variant c_Smarty::i_addpluginsdir(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_addpluginsdir, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::addPluginsDir", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_addpluginsdir(arg0), null);
  }
}
Variant c_Smarty::i_clearallcache(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_clearallcache, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_clearallcache(arg0, arg1));
  }
}
Variant c_Smarty::i_clearcache(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_clearcache, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::clearCache", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_clearcache(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty::i_loadcacheresource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_loadcacheresource, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_loadcacheresource(arg0));
  }
}
Variant c_Smarty::i_getglobal(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getglobal, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_getglobal(arg0));
  }
}
Variant c_Smarty::i_gettags(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettags, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty::getTags", "smarty_internal_template", 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_gettags(arg0));
  }
}
Variant c_Smarty::i_loadplugin(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_loadplugin, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::loadPlugin", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_loadplugin(arg0, arg1));
  }
}
Variant c_Smarty::i_createtemplate(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_createtemplate, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::createTemplate", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_createtemplate(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty::i_fetch(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_fetch, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::fetch", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_fetch(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty::i___call(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___call, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty::__call", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___call(arg0, arg1));
  }
}
Variant c_Smarty::i_enablesecurity(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_enablesecurity, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_enablesecurity(arg0), null);
  }
}
Variant c_Smarty::ifa_settemplatedir(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_settemplatedir, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::setTemplateDir", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_settemplatedir(arg0), null);
}
Variant c_Smarty::ifa_display(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_display, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::display", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  return (self->t_display(arg0, arg1, arg2, arg3), null);
}
Variant c_Smarty::ifa_createdata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createdata, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_createdata(arg0));
}
Variant c_Smarty::ifa_getregisteredobject(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getregisteredobject, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::getRegisteredObject", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getregisteredobject(arg0));
}
Variant c_Smarty::ifa_templateexists(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_templateexists, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::templateExists", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_templateexists(arg0));
}
Variant c_Smarty::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  return (self->t___destruct());
}
Variant c_Smarty::ifa_disablesecurity(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_disablesecurity, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  return (self->t_disablesecurity(), null);
}
Variant c_Smarty::ifa_iscached(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_iscached, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::isCached", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  return (self->t_iscached(arg0, arg1, arg2, arg3));
}
Variant c_Smarty::ifa_setdebugtemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_setdebugtemplate, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::setDebugTemplate", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_setdebugtemplate(arg0));
}
Variant c_Smarty::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  return (self->t___construct(), null);
}
Variant c_Smarty::ifa_addtemplatedir(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addtemplatedir, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::addTemplateDir", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_addtemplatedir(arg0), null);
}
Variant c_Smarty::ifa_addpluginsdir(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_addpluginsdir, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::addPluginsDir", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_addpluginsdir(arg0), null);
}
Variant c_Smarty::ifa_clearallcache(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clearallcache, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  return (self->t_clearallcache(arg0, arg1));
}
Variant c_Smarty::ifa_clearcache(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clearcache, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::clearCache", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  CVarRef arg4(count <= 4 ? null_variant : a4);
  return (self->t_clearcache(arg0, arg1, arg2, arg3, arg4));
}
Variant c_Smarty::ifa_loadcacheresource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadcacheresource, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_loadcacheresource(arg0));
}
Variant c_Smarty::ifa___clone(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___clone, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  return (self->t___clone());
}
Variant c_Smarty::ifa_getglobal(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getglobal, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_getglobal(arg0));
}
Variant c_Smarty::ifa_gettags(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettags, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty::getTags", "smarty_internal_template", 1);
  CVarRef arg0(a0);
  return (self->t_gettags(arg0));
}
Variant c_Smarty::ifa_loadplugin(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadplugin, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::loadPlugin", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (true_varNR) : a1);
  return (self->t_loadplugin(arg0, arg1));
}
Variant c_Smarty::ifa_createtemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_createtemplate, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::createTemplate", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  CVarRef arg4(count <= 4 ? (true_varNR) : a4);
  return (self->t_createtemplate(arg0, arg1, arg2, arg3, arg4));
}
Variant c_Smarty::ifa_fetch(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_fetch, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty::fetch", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  CVarRef arg4(count <= 4 ? (false_varNR) : a4);
  return (self->t_fetch(arg0, arg1, arg2, arg3, arg4));
}
Variant c_Smarty::ifa___call(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___call, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty::__call", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___call(arg0, arg1));
}
Variant c_Smarty::ifa_getdebugtemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getdebugtemplate, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  return (self->t_getdebugtemplate());
}
Variant c_Smarty::ifa_enablesecurity(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_enablesecurity, coo_Smarty);
  }
  c_Smarty *self ATTRIBUTE_UNUSED (static_cast<c_Smarty*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_enablesecurity(arg0), null);
}
const MethodCallInfoTable c_Smarty::s_call_info_table[] = {
  { 0x701ABDD4365AE102LL, 1, 14, "setTemplateDir", &c_Smarty::ci_settemplatedir },
  { 0x6906EF04017B7504LL, 1, 10, "loadPlugin", &c_Smarty::ci_loadplugin },
  { 0x4460FAAB1E8D6F49LL, 1, 16, "getDebugTemplate", &c_Smarty::ci_getdebugtemplate },
  { 0x79571B515AFE15CALL, 1, 14, "addTemplateDir", &c_Smarty::ci_addtemplatedir },
  { 0x509B72BDBDC94E8ALL, 0, 14, "enableSecurity", &c_Smarty::ci_enablesecurity },
  { 0x398B08DD691FC2CBLL, 1, 17, "loadCacheResource", &c_Smarty::ci_loadcacheresource },
  { 0x06E39C1520BB3791LL, 1, 19, "getRegisteredObject", &c_Smarty::ci_getregisteredobject },
  { 0x1E36BD093F667111LL, 0, 10, "clearCache", &c_Smarty::ci_clearcache },
  { 0x6036D9296C53CC94LL, 1, 13, "addPluginsDir", &c_Smarty::ci_addpluginsdir },
  { 0x6ED3170F07647456LL, 1, 14, "templateExists", &c_Smarty::ci_templateexists },
  { 0x5CFD0394D62D3617LL, 1, 10, "createData", &c_Smarty::ci_createdata },
  { 0x17857642DE5ADB17LL, 0, 9, "getGlobal", &c_Smarty::ci_getglobal },
  { 0x0F2CA10C0004BE9BLL, 1, 7, "__clone", &c_Smarty::ci___clone },
  { 0x797A6FC6339ADA9ELL, 1, 7, "display", &c_Smarty::ci_display },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty::ci___construct },
  { 0x44894FC27BC8C0E0LL, 1, 13, "clearAllCache", &c_Smarty::ci_clearallcache },
  { 0x5D73364F53CEEB6CLL, 1, 6, "__call", &c_Smarty::ci___call },
  { 0x3F773226810DC6AFLL, 1, 15, "disableSecurity", &c_Smarty::ci_disablesecurity },
  { 0x05C1C3E93C06D26FLL, 0, 14, "createTemplate", &c_Smarty::ci_createtemplate },
  { 0x41250E06C010C6F2LL, 1, 16, "setDebugTemplate", &c_Smarty::ci_setdebugtemplate },
  { 0x7F974836AACC1EF3LL, 1, 10, "__destruct", &c_Smarty::ci___destruct },
  { 0x279B2A848BB281F3LL, 0, 8, "isCached", &c_Smarty::ci_iscached },
  { 0x747BD67939633EB3LL, 0, 7, "getTags", &c_Smarty::ci_gettags },
  { 0x5E82B850BB90B0FBLL, 1, 5, "fetch", &c_Smarty::ci_fetch },
  { 0, 1, 0, 0 }
};
const int c_Smarty::s_call_info_index[] = {
  63,
  -1,-1,0,-1,1,-1,-1,-1,
  -1,2,3,5,-1,-1,-1,-1,
  -1,6,-1,-1,8,-1,9,10,
  -1,-1,-1,12,-1,-1,13,14,
  15,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,16,-1,-1,17,
  -1,-1,19,20,-1,-1,-1,-1,
  -1,-1,-1,23,-1,-1,-1,-1,

};
c_Smarty *c_Smarty::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
const ObjectStaticCallbacks cw_Smarty = {
  (ObjectData*(*)(ObjectData*))coo_Smarty,
  c_Smarty::s_call_info_table,c_Smarty::s_call_info_index,
  c_Smarty::s_instanceof_table,c_Smarty::s_instanceof_index,
  &c_Smarty::s_class_name,
  &c_Smarty::os_prop_table,&c_Smarty::ci___construct,0,&cw_Smarty_Internal_Data
};
void c_Smarty::init() {
  c_Smarty_Internal_Data::init();
  m_auto_literal = true;
  m_error_unassigned = false;
  m_force_compile = false;
  m_compile_check = true;
  m_compile_locking = true;
  m_use_sub_dirs = false;
  m_compile_error = false;
  m_caching = false;
  m_merge_compiled_includes = false;
  m_cache_lifetime = 3600LL;
  m_force_cache = false;
  m_left_delimiter = NAMSTR(s_ss3939fa19, "{");
  m_right_delimiter = NAMSTR(s_ss236e0754, "}");
  m_security_class = NAMSTR(s_ss0b9fa2bd, "Smarty_Security");
  m_php_handling = 0LL /* self::PHP_PASSTHRU */;
  m_allow_php_tag = false;
  m_allow_php_templates = false;
  m_direct_access_security = true;
  m_trusted_dir = s_sa00000000;
  m_debugging = false;
  m_debugging_ctrl = NAMSTR(s_ss22bfb273, "NONE");
  m_smarty_debug_id = NAMSTR(s_ssec4a57e6, "SMARTY_DEBUG");
  m_config_overwrite = true;
  m_config_booleanize = true;
  m_config_read_hidden = false;
  m_config_vars = s_sa00000000;
  m_tpl_vars = s_sa00000000;
  m_template_functions = s_sa00000000;
  m_default_resource_type = NAMSTR(s_ss8ce7db5b, "file");
  m_caching_type = NAMSTR(s_ss8ce7db5b, "file");
  m_cache_resource_types = s_sac09f8e73;
  m_properties = s_sa00000000;
  m_default_config_type = NAMSTR(s_ss8ce7db5b, "file");
  m_cache_modified_check = false;
  m_registered_plugins = s_sa00000000;
  m_plugin_search_order = s_sabeb0ebff;
  m_registered_objects = s_sa00000000;
  m_registered_classes = s_sa00000000;
  m_registered_filters = s_sa00000000;
  m_registered_resources = s_sa00000000;
  m_autoload_filters = s_sa00000000;
  m_variable_filter = true;
  m_default_modifiers = s_sa00000000;
  m_start_time = 0LL;
  m__file_perms = 420LL;
  m__dir_perms = 505LL;
  m__tag_stack = s_sa00000000;
  m_inheritance = false;
  m_deprecation_notices = true;
  m_get_used_tags = false;
  m__version = NAMSTR(s_ss06f1f4c4, "Smarty-3.0.9") /* self::SMARTY_VERSION */;
}
/* SRC: Smarty/libs/Smarty.class.php line 249 */
void c_Smarty::t___construct() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::__construct);
  INTERCEPT_INJECTION("Smarty::__construct", null_array, );
  bool oldInCtor = gasInCtor(true);
  m_smarty = GET_THIS_TYPED(Smarty);
  if (LINE(253,(x_is_callable(NAMSTR(s_ss83e071e9, "mb_internal_encoding"))))) {
    {
      LINE(254,(x_mb_internal_encoding(toString(getDynamicConstant(g->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))))));
    }
  }
  {
    LINE(256,0);
    const Variant &tmp0((x_microtime(true)));
    m_start_time.assignVal(tmp0);
  }
  m_template_dir = Array(array_createvi(1, toVPOD(VarNR(concat4(NAMSTR(s_ss013a8f64, "."), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))), NAMSTR(s_ss0662718d, "templates"), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))))))));
  m_compile_dir = concat4(NAMSTR(s_ss013a8f64, "."), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))), NAMSTR(s_sse4751215, "templates_c"), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
  m_plugins_dir = Array(array_createvi(1, toVPOD(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR")))));
  m_cache_dir = concat4(NAMSTR(s_ss013a8f64, "."), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))), NAMSTR(s_ss326ad070, "cache"), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
  m_config_dir = concat4(NAMSTR(s_ss013a8f64, "."), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))), NAMSTR(s_ss1fe78c5a, "configs"), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
  m_debug_tpl = concat3(NAMSTR(s_ssbea7ab9d, "file:"), toString(getDynamicConstant(g->k_SMARTY_DIR, NAMSTR(s_sse621a75f, "SMARTY_DIR"))), NAMSTR(s_ssc8774c9f, "debug.tpl"));
  {
    bool tmp0;
    {
      tmp0 = (isset(g->GV(_SERVER), NAMSTR(s_ss4e6ba43b, "SCRIPT_NAME"), true));
    }
    if (tmp0) {
      {
        {
          LINE(265,0);
          const Variant &tmp0((g->GV(_SERVER).rvalAt(NAMSTR(s_ss4e6ba43b, "SCRIPT_NAME"), AccessFlags::Error_Key)));
          t_assignglobal(NAMVAR(s_svs4e6ba43b, "SCRIPT_NAME"), tmp0);
        }
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 272 */
Variant c_Smarty::t___destruct() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::__destruct);
  INTERCEPT_INJECTION("Smarty::__destruct", null_array, r);
  setInDtor();
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 285 */
Variant c_Smarty::t_fetch(CVarRef v_template, Variant v_cache_id //  = null
, CVarRef v_compile_id //  = null_variant
, Variant v_parent //  = null
, CVarRef v_display //  = false_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::fetch);
  INTERCEPT_INJECTION("Smarty::fetch", array_createvi(5, toVPOD(v_template), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_parent), toVPOD(v_display)), r);
  Variant v__template;
  int v__smarty_old_error_level = 0;
  Variant v__query_string;
  bool v__isCached = false;
  String v__gmt_mtime;
  Variant v__output;
  Variant v__last_modified_date;

  Variant tmp_ref;
  if ((!(empty(v_cache_id)) && x_is_object(v_cache_id))) {
    {
      v_parent.assignVal(v_cache_id);
      setNull(v_cache_id);
    }
  }
  if (x_is_null(v_parent)) {
    {
      v_parent = GET_THIS_TYPED(Smarty);
    }
  }
  {
    if (instanceOf(v_template, toString(m_template_class))) {
      v__template.assignVal(v_template);

    } else {
      LINE(297,0);
      const Variant &tmp0((t_createtemplate(v_template, v_cache_id, v_compile_id, v_parent, false_varNR)));
      v__template.assignVal(tmp0);
    }
    ;
  }
  if (isset(m_error_reporting)) {
    {
      {
        LINE(299,0);
        int tmp0((x_error_reporting(m_error_reporting)));
        v__smarty_old_error_level = tmp0;
      }
    }
  }
  if ((!(toBoolean(m_debugging)) && equal(m_debugging_ctrl, NAMSTR(s_ss4c8aca1f, "URL")))) {
    {
      {
        bool tmp0;
        {
          tmp0 = (isset(g->GV(_SERVER), NAMSTR(s_ss968970f5, "QUERY_STRING"), true));
        }
        if (tmp0) {
          {
            {
              LINE(304,0);
              const Variant &tmp0((g->GV(_SERVER).rvalAt(NAMSTR(s_ss968970f5, "QUERY_STRING"), AccessFlags::Error_Key)));
              v__query_string.assignVal(tmp0);
            }
          }
        }
        else {
          {
            v__query_string = NAMSTR(s_ss00000000, "");
          }
        }
      }
      {
        bool tmp0;
        {
          LINE(308,0);
          const Variant &tmp1((x_strpos(toString(v__query_string), m_smarty_debug_id)));
          tmp0 = (!same(false, tmp1));
        }
        if (tmp0) {
          {
            {
              bool tmp0;
              {
                LINE(309,0);
                const Variant &tmp1((x_strpos(toString(v__query_string), VarNR(concat(toString(m_smarty_debug_id), NAMSTR(s_ss3100bcd0, "=on"))))));
                tmp0 = (!same(false, tmp1));
              }
              if (tmp0) {
                {
                  LINE(311,(x_setcookie(NAMSTR(s_ssec4a57e6, "SMARTY_DEBUG"), toString(true))));
                  m_debugging = true;
                }
              }
              else {
                bool tmp0;
                {
                  LINE(313,0);
                  const Variant &tmp1((x_strpos(toString(v__query_string), VarNR(concat(toString(m_smarty_debug_id), NAMSTR(s_ss0a7c12d5, "=off"))))));
                  tmp0 = (!same(false, tmp1));
                }
                if (tmp0) {
                  {
                    LINE(315,(x_setcookie(NAMSTR(s_ssec4a57e6, "SMARTY_DEBUG"), toString(false))));
                    m_debugging = false;
                  }
                }
                else {
                  {
                    m_debugging = true;
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
                tmp0 = (isset(g->GV(_COOKIE), NAMSTR(s_ssec4a57e6, "SMARTY_DEBUG"), true));
              }
              if (tmp0) {
                {
                  m_debugging = true;
                }
              }
            }
          }
        }
      }
    }
  }
  if (((toBoolean(m_cache_modified_check) && toBoolean(m_caching)) && toBoolean(v_display))) {
    {
      {
        LINE(329,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v__template;
        mcp0.methodCall((obj0), NAMSTR(s_ss77e7383f, "isCached"), 0x279B2A848BB281F3LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        bool tmp1 = (toBoolean((mcp0.ci->getMeth0Args())(mcp0, 0)));
        if (tmp1) {
          bool tmp2((toBoolean(v__template.o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true))));
          tmp1 = (!(tmp2));
        }
        v__isCached = tmp1;
      }
      if (v__isCached) {
        {
          {
            LINE(331,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = v__template;
            mcp0.methodCall((obj0), NAMSTR(s_ss0ed4db4e, "getCachedTimestamp"), 0x1FCE3013C4ADDB99LL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            const String &tmp1((toString(x_gmdate(NAMSTR(s_ss41514ed8, "D, d M Y H:i:s"), toInt64((mcp0.ci->getMeth0Args())(mcp0, 0))))));
            v__gmt_mtime = concat(tmp1, NAMSTR(s_ss7fad6467, " GMT"));
          }
        }
      }
      else {
        {
          v__gmt_mtime = NAMSTR(s_ss00000000, "");
        }
      }
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (!(toBoolean(m_caching)));
      if (!tmp1) {
        tmp1 = (LINE(337,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true)))));
      }
      bool tmp2 = (tmp1);
      if (tmp2) {
        bool tmp3 = (isset(m_autoload_filters, NAMSTR(s_ss7a5dbb24, "output"), true));
        if (!tmp3) {
          tmp3 = (isset(m_registered_filters, NAMSTR(s_ss7a5dbb24, "output"), true));
        }
        tmp2 = (tmp3);
      }
      tmp0 = (tmp2);
    }
    if (tmp0) {
      {
        {
          LINE(338,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__template;
          mcp0.methodCall((obj0), NAMSTR(s_ssa145bc34, "getRenderedTemplate"), 0x4ECE00586BE63F21LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
          fi.setStaticClassName(c_Smarty_Internal_Filter_Handler::s_class_name);
          const Variant &tmp2((((checkClassExistsThrow(NAMSTR(s_ss1b85235e, "Smarty_Internal_Filter_Handler"), &g->CDEC(smarty_internal_filter_handler))), (c_Smarty_Internal_Filter_Handler::t_runfilter(NAMVAR(s_svs7a5dbb24, "output"), tmp1, v__template)))));
          fi.resetStaticClassName();
          v__output.assignVal(tmp2);
        }
      }
    }
    else {
      {
        {
          LINE(340,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__template;
          mcp0.methodCall((obj0), NAMSTR(s_ssa145bc34, "getRenderedTemplate"), 0x4ECE00586BE63F21LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
          v__output.assignVal(tmp1);
        }
      }
    }
  }
  v__template.o_setPublic(NAMSTR(s_ss076f6aa6, "rendered_content"), null);
  if (isset(m_error_reporting)) {
    {
      LINE(344,(x_error_reporting(VarNR(v__smarty_old_error_level))));
    }
  }
  if (toBoolean(v_display)) {
    {
      if ((toBoolean(m_caching) && toBoolean(m_cache_modified_check))) {
        {
          {
            Silencer tmp0(true);
            LINE(349,0);
            const String &tmp1((toString(g->GV(_SERVER).rvalAt(NAMSTR(s_ssc4d4aaa7, "HTTP_IF_MODIFIED_SINCE"), AccessFlags::Error_Key))));
            const String &tmp2((toString(g->GV(_SERVER).rvalAt(NAMSTR(s_ssc4d4aaa7, "HTTP_IF_MODIFIED_SINCE"), AccessFlags::Error_Key))));
            const Variant &tmp3((x_strpos(tmp2, NAMVAR(s_svscfa26520, "GMT"))));
            int tmp4((toInt32((tmp3 + 3LL))));
            Variant tmp5((x_substr(tmp1, toInt32(0LL), tmp4)));
            tmp0.disable();
            v__last_modified_date.assignVal(tmp5);
          }
          if ((v__isCached && equal(v__gmt_mtime, v__last_modified_date))) {
            {
              {
                bool tmp0;
                {
                  LINE(351,0);
                  const String &tmp1((x_php_sapi_name()));
                  tmp0 = (equal(tmp1, NAMSTR(s_ssf3ee02a4, "cgi")));
                }
                if (tmp0) {
                  LINE(352,(x_header(NAMSTR(s_ss82b1c271, "Status: 304 Not Modified"))));
                }
                else {
                  LINE(354,(x_header(NAMSTR(s_ss4c06d003, "HTTP/1.1 304 Not Modified"))));
                }
              }
            }
          }
          else {
            {
              {
                LINE(356,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__template;
                mcp0.methodCall((obj0), NAMSTR(s_ss0ed4db4e, "getCachedTimestamp"), 0x1FCE3013C4ADDB99LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const String &tmp1((toString(x_gmdate(NAMSTR(s_ss41514ed8, "D, d M Y H:i:s"), toInt64((mcp0.ci->getMeth0Args())(mcp0, 0))))));
                x_header(concat3(NAMSTR(s_ss0334f283, "Last-Modified: "), tmp1, NAMSTR(s_ss7fad6467, " GMT")));
              }
              echo(toString(v__output));
            }
          }
        }
      }
      else {
        {
          echo(toString(v__output));
        }
      }
      if (toBoolean(m_debugging)) {
        {
          STATIC_CLASS_NAME_CALL(c_Smarty_Internal_Debug::s_class_name, LINE(364,(((checkClassExistsThrow(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug"), &g->CDEC(smarty_internal_debug))), (c_Smarty_Internal_Debug::t_display_debug(VarNR(GET_THIS_TYPED(Smarty))))))));
        }
      }
      return null;
    }
  }
  else {
    {
      return v__output;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 381 */
void c_Smarty::t_display(CVarRef v_template, CVarRef v_cache_id //  = null_variant
, CVarRef v_compile_id //  = null_variant
, CVarRef v_parent //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty, Smarty::display);
  INTERCEPT_INJECTION("Smarty::display", array_createvi(4, toVPOD(v_template), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_parent)), );
  LINE(384,(t_fetch(v_template, v_cache_id, v_compile_id, v_parent, true_varNR)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 396 */
Variant c_Smarty::t_iscached(Variant v_template, CVarRef v_cache_id //  = null_variant
, CVarRef v_compile_id //  = null_variant
, Variant v_parent //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty, Smarty::isCached);
  INTERCEPT_INJECTION("Smarty::isCached", array_createvi(4, toVPOD(v_template), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_parent)), r);
  if (x_is_null(v_parent)) {
    {
      v_parent = GET_THIS_TYPED(Smarty);
    }
  }
  if (!(instanceOf(v_template, toString(m_template_class)))) {
    {
      {
        LINE(402,0);
        const Variant &tmp0((t_createtemplate(v_template, v_cache_id, v_compile_id, v_parent, false_varNR)));
        v_template.assignVal(tmp0);
      }
    }
  }
  {
    LINE(405,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v_template;
    mcp0.methodCall((obj0), NAMSTR(s_ss77e7383f, "isCached"), 0x279B2A848BB281F3LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.ci->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 414 */
p_Smarty_Data c_Smarty::t_createdata(CVarRef v_parent //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::createData);
  INTERCEPT_INJECTION("Smarty::createData", array_createvi(1, toVPOD(v_parent)), r);
  {
    p_Smarty_Data tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss9f38b5fd, "Smarty_Data"), &g->CDEC(smarty_data))), (coo_Smarty_Data()));
    return LINE(416,(((c_Smarty_Data*)tmp0.get()->create(v_parent, GET_THIS_TYPED(Smarty)), tmp0)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 429 */
Variant c_Smarty::t_createtemplate(Variant v_template, Variant v_cache_id //  = null
, Variant v_compile_id //  = null
, Variant v_parent //  = null
, CVarRef v_do_clone //  = true_varNR
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::createTemplate);
  INTERCEPT_INJECTION("Smarty::createTemplate", array_createvi(5, toVPOD(v_template), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_parent), toVPOD(v_do_clone)), r);
  Variant v_data;
  String v__templateId;
  Variant v_tpl;
  Primitive v__key = 0;
  Variant v__val;

  Variant tmp_ref;
  if ((!(empty(v_cache_id)) && (x_is_object(v_cache_id) || x_is_array(v_cache_id)))) {
    {
      v_parent.assignVal(v_cache_id);
      setNull(v_cache_id);
    }
  }
  if ((!(empty(v_parent)) && x_is_array(v_parent))) {
    {
      v_data.assignVal(v_parent);
      setNull(v_parent);
    }
  }
  else {
    {
      setNull(v_data);
    }
  }
  if (!(x_is_object(v_template))) {
    {
      {
        LINE(444,0);
        const String &tmp0((x_sha1(concat3(toString(v_template), toString(v_cache_id), toString(v_compile_id)))));
        v__templateId = tmp0;
      }
      {
        bool tmp0;
        {
          tmp0 = ((isset(m_template_objects, v__templateId) && toBoolean(m_caching)));
        }
        if (tmp0) {
          {
            {
              LINE(447,0);
              const Variant &tmp0((m_template_objects.rvalAt(v__templateId, AccessFlags::Error)));
              v_tpl.assignVal(tmp0);
            }
          }
        }
        else {
          {
            if (toBoolean(v_do_clone)) {
              {
                {
                  Object obj1(create_object_only((toString(m_template_class))));
                  MethodCallPackage mcp0;
                  mcp0.construct(obj1);
                  const CallInfo *cit0 = mcp0.ci;
                  const Variant &tmp2((v_template));
                  const Variant tmp3 = v_template;
                  const Variant &tmp4 = cit0->isRef(0) ? tmp2 : tmp3;
                  LINE(451,0);
                  const Object &tmp5((f_clone(GET_THIS_TYPED(Smarty))));
                  (cit0->getMeth5Args())(mcp0, 5, tmp4, tmp5, v_parent, v_cache_id, v_compile_id);
                  const Object &tmp6((id(obj1)));
                  v_tpl = tmp6;
                }
              }
            }
            else {
              {
                {
                  Object obj1(create_object_only((toString(m_template_class))));
                  MethodCallPackage mcp0;
                  mcp0.construct(obj1);
                  const CallInfo *cit0 = mcp0.ci;
                  (cit0->getMeth5Args())(mcp0, 5, v_template, GET_THIS_TYPED(Smarty), v_parent, v_cache_id, v_compile_id);
                  LINE(453,0);
                  const Object &tmp2((id(obj1)));
                  v_tpl = tmp2;
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
      v_tpl.assignVal(v_template);
    }
  }
  if ((!(empty(v_data)) && x_is_array(v_data))) {
    {
      {
        LOOP_COUNTER(1);
        for (ArrayIter iter3 = v_data.begin(s_class_name, true); !iter3.end(); ++iter3) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v__val);
          v__key.assignVal(iter3.first());
          {
            {
              p_Smarty_Variable tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss5b98208f, "Smarty_variable"), &g->CDEC(smarty_variable))), (coo_Smarty_Variable()));
              ((c_Smarty_Variable*)tmp0.get()->create(v__val));
              LINE(464,(v_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name))).set(v__key, (VarNR(tmp0)));
              tmp_ref.unset();
            }
          }
        }
      }
    }
  }
  return v_tpl;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 478 */
Variant c_Smarty::t_templateexists(Variant v_resource_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::templateExists);
  INTERCEPT_INJECTION("Smarty::templateExists", array_createvi(1, toVPOD(v_resource_name)), r);
  Variant v_save;
  Object v_tpl;
  Variant v_result;

  v_save.assignVal(m_template_objects);
  {
    Object obj1(create_object_only((toString(m_template_class))));
    MethodCallPackage mcp0;
    mcp0.construct(obj1);
    const CallInfo *cit0 = mcp0.ci;
    (cit0->getMeth2Args())(mcp0, 2, v_resource_name, GET_THIS_TYPED(Smarty));
    LINE(482,0);
    const Object &tmp2((id(obj1)));
    v_tpl = tmp2;
  }
  {
    LINE(484,0);
    MethodCallPackage mcp0;
    CObjRef obj0 = v_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss21a0ded9, "isExisting"), 0x415CFCA4A487DB29LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    v_result.assignVal(tmp1);
  }
  m_template_objects.assignVal(v_save);
  return v_result;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 496 */
Variant c_Smarty::t_getglobal(CVarRef v_varname //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::getGlobal);
  INTERCEPT_INJECTION("Smarty::getGlobal", array_createvi(1, toVPOD(v_varname)), r);
  Array v__result;
  Primitive v_key = 0;
  Variant v_var;

  Variant tmp_ref;
  if (isset(v_varname)) {
    {
      {
        bool tmp0;
        {
          Variant tmp1((g->s_Smarty___global_tpl_vars));
          tmp0 = (isset(tmp1, v_varname));
        }
        if (tmp0) {
          {
            {
              return LINE(500,(g->s_Smarty___global_tpl_vars.rvalRef(v_varname, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
            }
          }
        }
        else {
          {
            return NAMSTR(s_ss00000000, "");
          }
        }
      }
    }
  }
  else {
    {
      v__result = s_sa00000000;
      {
        LOOP_COUNTER(1);
        Variant map2 = g->s_Smarty___global_tpl_vars;
        for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_var);
          v_key.assignVal(iter3.first());
          {
            {
              LINE(507,0);
              const Variant &tmp0((v_var.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              v__result.set(v_key, (tmp0));
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
/* SRC: Smarty/libs/Smarty.class.php line 520 */
Variant c_Smarty::t_clearallcache(CVarRef v_exp_time //  = null_variant
, CVarRef v_type //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty, Smarty::clearAllCache);
  INTERCEPT_INJECTION("Smarty::clearAllCache", array_createvi(2, toVPOD(v_exp_time), toVPOD(v_type)), r);
  {
    LINE(523,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = t_loadcacheresource(v_type);
    mcp0.methodCall((obj0), NAMSTR(s_ss4a288289, "clearAll"), 0x54693D7C21C8B05CLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.ci->getMeth1Args())(mcp0, 1, v_exp_time));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 536 */
Variant c_Smarty::t_clearcache(CVarRef v_template_name, CVarRef v_cache_id //  = null_variant
, CVarRef v_compile_id //  = null_variant
, CVarRef v_exp_time //  = null_variant
, CVarRef v_type //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty, Smarty::clearCache);
  INTERCEPT_INJECTION("Smarty::clearCache", array_createvi(5, toVPOD(v_template_name), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_exp_time), toVPOD(v_type)), r);
  {
    LINE(539,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = t_loadcacheresource(v_type);
    mcp0.methodCall((obj0), NAMSTR(s_ss82b3b83c, "clear"), 0x31DA235C5A226667LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.ci->getMeth4Args())(mcp0, 4, v_template_name, v_cache_id, v_compile_id, v_exp_time));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 545 */
void c_Smarty::t_enablesecurity(Variant v_security_class //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::enableSecurity);
  INTERCEPT_INJECTION("Smarty::enableSecurity", array_createvi(1, toVPOD(v_security_class)), );
  if (instanceOf(v_security_class, NAMSTR(s_ss0b9fa2bd, "Smarty_Security"))) {
    {
      m_security_policy.assignVal(v_security_class);
      return;
    }
  }
  if (equal(v_security_class, null)) {
    {
      v_security_class.assignVal(m_security_class);
    }
  }
  if (LINE(554,(x_class_exists(toString(v_security_class))))) {
    {
      {
        Object obj1(create_object_only(toString(v_security_class)));
        MethodCallPackage mcp0;
        mcp0.construct(obj1);
        const CallInfo *cit0 = mcp0.ci;
        (cit0->getMeth1Args())(mcp0, 1, GET_THIS_TYPED(Smarty));
        LINE(555,0);
        const Object &tmp2((id(obj1)));
        m_security_policy = tmp2;
      }
    }
  }
  else {
    {
      {
        p_SmartyException tmp0 = coo_SmartyException();
        throw_exception(LINE(557,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssa11cb62f, "Security class '"), toString(v_security_class), NAMSTR(s_ss7b9dda47, "' is not defined")))), tmp0))));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 564 */
void c_Smarty::t_disablesecurity() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::disableSecurity);
  INTERCEPT_INJECTION("Smarty::disableSecurity", null_array, );
  m_security_policy.assignVal(null);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 575 */
Variant c_Smarty::t_loadcacheresource(Variant v_type //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::loadCacheResource);
  INTERCEPT_INJECTION("Smarty::loadCacheResource", array_createvi(1, toVPOD(v_type)), r);
  String v_cache_resource_class;

  if (!(isset(v_type))) {
    {
      v_type.assignVal(m_caching_type);
    }
  }
  if (LINE(579,(x_in_array(v_type, m_cache_resource_types)))) {
    {
      {
        LINE(580,0);
        const String &tmp0((x_ucfirst(toString(v_type))));
        v_cache_resource_class = concat(NAMSTR(s_ss99130ea8, "Smarty_Internal_CacheResource_"), tmp0);
      }
      {
        Object obj1(create_object_only(v_cache_resource_class));
        MethodCallPackage mcp0;
        mcp0.construct(obj1);
        const CallInfo *cit0 = mcp0.ci;
        (cit0->getMeth1Args())(mcp0, 1, GET_THIS_TYPED(Smarty));
        return LINE(581,(id(obj1)));
      }
    }
  }
  else {
    {
      {
        LINE(585,0);
        const String &tmp0((x_ucfirst(toString(v_type))));
        v_cache_resource_class = concat(NAMSTR(s_ss88e92532, "Smarty_CacheResource_"), tmp0);
      }
      if (LINE(586,(toBoolean(t_loadplugin(VarNR(v_cache_resource_class)))))) {
        {
          {
            Object obj1(create_object_only(v_cache_resource_class));
            MethodCallPackage mcp0;
            mcp0.construct(obj1);
            const CallInfo *cit0 = mcp0.ci;
            (cit0->getMeth1Args())(mcp0, 1, GET_THIS_TYPED(Smarty));
            return LINE(587,(id(obj1)));
          }
        }
      }
      else {
        {
          {
            p_SmartyException tmp0 = coo_SmartyException();
            throw_exception(LINE(590,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss56ee3d2b, "Unable to load cache resource '"), toString(v_type), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
          }
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 601 */
void c_Smarty::t_settemplatedir(CVarRef v_template_dir) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::setTemplateDir);
  INTERCEPT_INJECTION("Smarty::setTemplateDir", array_createvi(1, toVPOD(v_template_dir)), );
  m_template_dir = (toArray(v_template_dir));
  return;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 612 */
void c_Smarty::t_addtemplatedir(CVarRef v_template_dir) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::addTemplateDir);
  INTERCEPT_INJECTION("Smarty::addTemplateDir", array_createvi(1, toVPOD(v_template_dir)), );
  {
    LINE(614,0);
    const Variant &tmp0((x_array_merge(2, VarNR((toArray(m_template_dir))), Array(array_createvi(1, toVPOD(VarNR((toArray(v_template_dir)))))))));
    const Variant &tmp1((x_array_unique(tmp0)));
    m_template_dir.assignVal(tmp1);
  }
  return;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 625 */
void c_Smarty::t_addpluginsdir(CVarRef v_plugins_dir) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::addPluginsDir);
  INTERCEPT_INJECTION("Smarty::addPluginsDir", array_createvi(1, toVPOD(v_plugins_dir)), );
  {
    LINE(627,0);
    const Variant &tmp0((x_array_merge(2, VarNR((toArray(m_plugins_dir))), Array(array_createvi(1, toVPOD(VarNR((toArray(v_plugins_dir)))))))));
    const Variant &tmp1((x_array_unique(tmp0)));
    m_plugins_dir.assignVal(tmp1);
  }
  return;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 638 */
Variant c_Smarty::t_getregisteredobject(CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty, Smarty::getRegisteredObject);
  INTERCEPT_INJECTION("Smarty::getRegisteredObject", array_createvi(1, toVPOD(v_name)), r);
  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (!(isset(m_registered_objects, v_name)));
    }
    if (tmp0) {
      {
        p_SmartyException tmp0 = coo_SmartyException();
        throw_exception(LINE(641,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_sse07b87c4, "'"), toString(v_name), NAMSTR(s_ssd1c356b5, "' is not a registered object")))), tmp0))));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(643,0);
      const Variant &tmp1((m_registered_objects.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
      bool tmp2((x_is_object(tmp1)));
      tmp0 = (!(tmp2));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        p_SmartyException tmp0 = coo_SmartyException();
        throw_exception(LINE(644,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss1e21d634, "registered '"), toString(v_name), NAMSTR(s_ssb3b7cb70, "' is not an object")))), tmp0))));
      }
    }
  }
  {
    return LINE(646,(m_registered_objects.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 655 */
Variant c_Smarty::t_getdebugtemplate() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty, Smarty::getDebugTemplate);
  INTERCEPT_INJECTION("Smarty::getDebugTemplate", null_array, r);
  return m_debug_tpl;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 666 */
Variant c_Smarty::t_setdebugtemplate(CVarRef v_tpl_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::setDebugTemplate);
  INTERCEPT_INJECTION("Smarty::setDebugTemplate", array_createvi(1, toVPOD(v_tpl_name)), r);
  return m_debug_tpl.assignVal(v_tpl_name);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 679 */
Variant c_Smarty::t_loadplugin(Variant v_plugin_name, Variant v_check //  = true
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::loadPlugin);
  INTERCEPT_INJECTION("Smarty::loadPlugin", array_createvi(2, toVPOD(v_plugin_name), toVPOD(v_check)), r);
  Variant v__plugin_name;
  Variant v__name_parts;
  Variant v_file;
  Variant v__plugin_filename;
  Variant v__plugin_dir;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_plugin_name; Variant &v_check; Variant &v__plugin_name; Variant &v__name_parts; Variant &v_file; Variant &v__plugin_filename; Variant &v__plugin_dir;
    VariableTable(Variant &r_plugin_name, Variant &r_check, Variant &r__plugin_name, Variant &r__name_parts, Variant &r_file, Variant &r__plugin_filename, Variant &r__plugin_dir) : v_plugin_name(r_plugin_name), v_check(r_check), v__plugin_name(r__plugin_name), v__name_parts(r__name_parts), v_file(r_file), v__plugin_filename(r__plugin_filename), v__plugin_dir(r__plugin_dir) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 15) {
        case 5:
          HASH_RETURN_NAMSTR(0x37DF5A8F4136C705LL, s_ss7c2c602f, v_check,
                             5);
          break;
        case 7:
          HASH_RETURN_NAMSTR(0x63009A634B5908C7LL, s_ss01952888, v__plugin_filename,
                             16);
          break;
        case 8:
          HASH_RETURN_NAMSTR(0x69CCC167549DABE8LL, s_ssb8b40c36, v_plugin_name,
                             11);
          HASH_RETURN_NAMSTR(0x3197B33C036E55A8LL, s_ssc21c9862, v__name_parts,
                             11);
          break;
        case 10:
          HASH_RETURN_NAMSTR(0x039541BF81928C5ALL, s_sse0c61151, v__plugin_name,
                             12);
          HASH_RETURN_NAMSTR(0x4C329E1F4EFAF58ALL, s_ss8a4b3c32, v__plugin_dir,
                             11);
          break;
        case 15:
          HASH_RETURN_NAMSTR(0x7863294A8F33D14FLL, s_ss8ce7db5b, v_file,
                             4);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_plugin_name, v_check, v__plugin_name, v__name_parts, v_file, v__plugin_filename, v__plugin_dir);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  if ((toBoolean(v_check) && (LINE(682,(x_is_callable(v_plugin_name))) || x_class_exists(toString(v_plugin_name), false)))) {
    return true;
  }
  {
    LINE(685,0);
    const String &tmp0((x_strtolower(toString(v_plugin_name))));
    v__plugin_name = tmp0;
  }
  {
    LINE(686,0);
    const Variant &tmp0((x_explode(NAMSTR(s_ss7f06ffcd, "_"), toString(v__plugin_name), toInt32(3LL))));
    v__name_parts.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(688,0);
      int tmp1((x_count(v__name_parts)));
      bool tmp2 = (less(tmp1, 3LL));
      if (!tmp2) {
        const Variant &tmp3((v__name_parts.rvalAt(0LL, AccessFlags::Error)));
        tmp2 = (!same(tmp3, NAMSTR(s_ss675664bf, "smarty")));
      }
      tmp0 = (tmp2);
    }
    if (tmp0) {
      {
        {
          p_SmartyException tmp0 = coo_SmartyException();
          throw_exception(LINE(689,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss622b19e1, "plugin "), toString(v_plugin_name), NAMSTR(s_ss7dc747ff, " is not a valid name format")))), tmp0))));
        }
        return false;
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(693,0);
      const Variant &tmp1((v__name_parts.rvalAt(1LL, AccessFlags::Error)));
      tmp0 = (equal(tmp1, NAMSTR(s_ss9332a8ac, "internal")));
    }
    if (tmp0) {
      {
        v_file = concat3(toString(getDynamicConstant(g->k_SMARTY_SYSPLUGINS_DIR, NAMSTR(s_ssf8ff0367, "SMARTY_SYSPLUGINS_DIR"))), toString(v__plugin_name), NAMSTR(s_ss0fd031f1, ".php"));
        if (LINE(695,(x_file_exists(toString(v_file))))) {
          {
            LINE(696,(require(toString(v_file), true, variables, "Smarty/libs/")));
            return v_file;
          }
        }
        else {
          {
            return false;
          }
        }
      }
    }
  }
  {
    LINE(703,0);
    const String &tmp0((toString(v__name_parts.rvalAt(1LL, AccessFlags::Error))));
    const String &tmp1((toString(v__name_parts.rvalAt(2LL, AccessFlags::Error))));
    v__plugin_filename = concat4(tmp0, NAMSTR(s_ss013a8f64, "."), tmp1, NAMSTR(s_ss0fd031f1, ".php"));
  }
  {
    LOOP_COUNTER(1);
    Variant map2 = (toArray(m_plugins_dir));
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__plugin_dir);
      {
        {
          bool tmp0;
          {
            LINE(706,0);
            const Variant &tmp1((x_substr(toString(v__plugin_dir), toInt32(-1LL))));
            const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
            tmp0 = (same(tmp2, false));
          }
          if (tmp0) {
            {
              concat_assign(v__plugin_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
            }
          }
        }
        v_file = concat(toString(v__plugin_dir), toString(v__plugin_filename));
        if (LINE(710,(x_file_exists(toString(v_file))))) {
          {
            LINE(711,(require(toString(v_file), true, variables, "Smarty/libs/")));
            return v_file;
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 725 */
Variant c_Smarty::tt_gettags(p_Smarty_Internal_Template v_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty, Smarty::getTags);
  INTERCEPT_INJECTION("Smarty::getTags", array_createvi(1, toVPOD(v_template)), r);
  return LINE(727,(((checkClassExistsThrow(NAMSTR(s_ss17b9a8dc, "Smarty_Internal_Utility"), &g->CDEC(smarty_internal_utility))), (c_Smarty_Internal_Utility::tt_gettags(v_template)))));
}
Variant c_Smarty::t_gettags(CVarRef v_template) {
  if(!v_template.instanceof(NAMSTR(s_ss4052589f, "smarty_internal_template"))) {
    throw_unexpected_argument_type(1,"Smarty::getTags()","smarty_internal_template",v_template);
    return null;
  }
  return tt_gettags((const p_Smarty_Internal_Template&)v_template.toCObjRef());
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 733 */
Variant c_Smarty::t___clone() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::__clone);
  INTERCEPT_INJECTION("Smarty::__clone", null_array, r);
  Variant tmp_ref;
  m_config_vars = s_sa00000000;
  m_tpl_vars = s_sa00000000;
  GET_THIS_ARROW()o_unset(NAMSTR(s_ss4c9ce810, "Register"), s_class_name);
  GET_THIS_ARROW()o_unset(NAMSTR(s_ssce5c9e6d, "Filter"), s_class_name);
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 751 */
Variant c_Smarty::t___call(Variant v_name, Variant v_args) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty, Smarty::__call);
  INTERCEPT_INJECTION("Smarty::__call", array_createvi(2, toVPOD(v_name), toVPOD(v_args)), r);
  Variant &sv_camel_func ATTRIBUTE_UNUSED = g->sv_Smarty_____call___camel_func;
  bool &inited_sv_camel_func ATTRIBUTE_UNUSED = g->inited_sv_Smarty_____call___camel_func;
  String v_first3;
  Variant v_property_name;
  Variant v_external;
  String v_class;

  Variant tmp_ref;
  if (!inited_sv_camel_func) {
    setNull(sv_camel_func);
    inited_sv_camel_func = true;
  }
  if (!(isset(sv_camel_func))) {
    {
      LINE(755,0);
      const String &tmp0(("1_df_lambda_1"));
      sv_camel_func = tmp0;
    }
  }
  {
    LINE(757,0);
    const String &tmp0((toString(x_substr(toString(v_name), toInt32(0LL), toInt32(3LL)))));
    const String &tmp1((x_strtolower(tmp0)));
    v_first3 = tmp1;
  }
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(758,(x_in_array(VarNR(v_first3), s_svaa473ec17))));
      if (tmp1) {
        const Variant &tmp2((x_substr(toString(v_name), toInt32(3LL), toInt32(1LL))));
        tmp1 = (!same(tmp2, NAMSTR(s_ss7f06ffcd, "_")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          LINE(761,0);
          const String &tmp0((toString(x_substr(toString(v_name), toInt32(3LL), toInt32(1LL)))));
          const String &tmp1((x_strtolower(tmp0)));
          const String &tmp2((toString(x_substr(toString(v_name), toInt32(4LL)))));
          v_property_name = concat(tmp1, tmp2);
        }
        {
          LINE(763,0);
          const Variant &tmp0((x_preg_replace_callback(NAMVAR(s_svs7a552cca, "/([A-Z])/"), sv_camel_func, v_property_name)));
          v_property_name.assignVal(tmp0);
        }
        {
          bool tmp0;
          {
            LINE(764,0);
            bool tmp1((x_property_exists(VarNR(GET_THIS_TYPED(Smarty)), toString(v_property_name))));
            tmp0 = (!(tmp1));
          }
          if (tmp0) {
            {
              {
                p_SmartyException tmp0 = coo_SmartyException();
                throw_exception(LINE(765,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssf483dc8d, "property '"), toString(v_property_name), NAMSTR(s_ss9fcf37c4, "' does not exist.")))), tmp0))));
              }
              return false;
            }
          }
        }
        if (equal(v_first3, NAMSTR(s_sseac4979f, "get"))) {
          return LINE(769,(GET_THIS_ARROW()o_getPublic(toString(v_property_name), true)));
        }
        else {
          {
            LINE(771,0);
            const Variant &tmp0((v_args.rvalAt(0LL, AccessFlags::Error)));
            return GET_THIS_ARROW()o_setPublic(toString(v_property_name), tmp0);
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(774,0);
      const Variant &tmp1((x_strpos(toString(v_name), NAMVAR(s_svs7f06ffcd, "_"))));
      tmp0 = (!same(tmp1, false));
    }
    if (tmp0) {
      {
        if (!(GET_THIS_ARROW()o_isset(NAMSTR(s_ss58fe81c7, "wrapper"), s_class_name))) {
          {
            {
              p_Smarty_Internal_Wrapper tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss5a3c06cf, "Smarty_Internal_Wrapper"), &g->CDEC(smarty_internal_wrapper))), (coo_Smarty_Internal_Wrapper()));
              ((c_Smarty_Internal_Wrapper*)tmp0.get()->create(GET_THIS_TYPED(Smarty)));
              GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss58fe81c7, "wrapper"), tmp0);
            }
          }
        }
        {
          LINE(778,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss58fe81c7, "wrapper"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ssc8d40d4e, "convert"), 0x2380F10632B403BBLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          return wrap_variant((mcp0.ci->getMeth2Args())(mcp0, 2, v_name, v_args));
        }
      }
    }
  }
  {
    LOOP_COUNTER(1);
    Variant map2 = s_sac761c4ff;
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_external);
      {
        if ((LINE(782,(x_class_exists(concat(NAMSTR(s_ss2b21e53e, "Smarty_Internal_"), toString(v_external))))) && x_method_exists(VarNR(concat(NAMSTR(s_ss2b21e53e, "Smarty_Internal_"), toString(v_external))), toString(v_name)))) {
          {
            {
              bool tmp0;
              {
                tmp0 = (!(GET_THIS_ARROW()o_isset(toString(v_external), s_class_name)));
              }
              if (tmp0) {
                {
                  v_class = concat(NAMSTR(s_ss2b21e53e, "Smarty_Internal_"), toString(v_external));
                  {
                    Object obj1(create_object_only(v_class));
                    MethodCallPackage mcp0;
                    mcp0.construct(obj1);
                    const CallInfo *cit0 = mcp0.ci;
                    (cit0->getMeth1Args())(mcp0, 1, GET_THIS_TYPED(Smarty));
                    LINE(785,0);
                    const Object &tmp2((id(obj1)));
                    GET_THIS_ARROW()o_setPublic(toString(v_external), tmp2);
                  }
                }
              }
            }
            {
              LINE(787,0);
              const Variant &tmp1((GET_THIS_ARROW()o_getPublic(toString(v_external), true)));
              ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(v_name)));
              const Array &tmp2((Array(tmp0)));
              return x_call_user_func_array(VarNR(tmp2), toArray(v_args));
            }
          }
        }
      }
    }
  }
  if (LINE(790,(x_in_array(v_name, s_svaf3470716)))) {
    {
      if (!(GET_THIS_ARROW()o_isset(NAMSTR(s_ssdfae5264, "utility"), s_class_name))) {
        {
          {
            p_Smarty_Internal_Utility tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss17b9a8dc, "Smarty_Internal_Utility"), &g->CDEC(smarty_internal_utility))), (coo_Smarty_Internal_Utility()));
            ((c_Smarty_Internal_Utility*)tmp0.get()->create(GET_THIS_TYPED(Smarty)));
            GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssdfae5264, "utility"), tmp0);
          }
        }
      }
      return LINE(794,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssdfae5264, "utility"), true)), toVPOD(v_name)))), toArray(v_args))));
    }
  }
  {
    bool tmp0;
    {
      LINE(797,0);
      const String &tmp1((x_strtolower(toString(v_name))));
      tmp0 = (equal(tmp1, NAMSTR(s_ss675664bf, "smarty")));
    }
    if (tmp0) {
      {
        throw_exception(LINE(798,(p_SmartyException(((c_SmartyException*)coo_SmartyException())->create(NAMVAR(s_svs6e09966e, "Please use parent::__construct() to call parent constuctor"))))));
        return false;
      }
    }
  }
  {
    p_SmartyException tmp0 = coo_SmartyException();
    throw_exception(LINE(801,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss517b78c1, "Call of unknown function '"), toString(v_name), NAMSTR(s_ssbdbd4b1a, "'.")))), tmp0))));
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/Smarty.class.php line 819 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SmartyException)
const InstanceOfInfo c_SmartyException::s_instanceof_table[] = {
  {0x47D93E6F80B66A94LL,1,"Exception",&cw_Exception},
  {0x79F1ACA7D66BD92FLL,1,"SmartyException",&cw_SmartyException},
};
const int c_SmartyException::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
const ObjectStaticCallbacks cw_SmartyException = {
  (ObjectData*(*)(ObjectData*))coo_SmartyException,
  c_SmartyException::s_call_info_table,c_SmartyException::s_call_info_index,
  c_SmartyException::s_instanceof_table,c_SmartyException::s_instanceof_index,
  &c_SmartyException::s_class_name,
  &c_Exception::os_prop_table,&c_Exception::ci___construct,0,&cw_Exception
};
/* SRC: Smarty/libs/Smarty.class.php line 825 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SmartyCompilerException)
const InstanceOfInfo c_SmartyCompilerException::s_instanceof_table[] = {
  {0x47D93E6F80B66A94LL,1,"Exception",&cw_Exception},
  {0x22F123D50F48AFF7LL,0,"SmartyCompilerException",&cw_SmartyCompilerException},
  {0x79F1ACA7D66BD92FLL,1,"SmartyException",&cw_SmartyException},
};
const int c_SmartyCompilerException::s_instanceof_index[] = {
  7,
  -1,-1,-1,-1,0,-1,-1,1,

};
const ObjectStaticCallbacks cw_SmartyCompilerException = {
  (ObjectData*(*)(ObjectData*))coo_SmartyCompilerException,
  c_SmartyCompilerException::s_call_info_table,c_SmartyCompilerException::s_call_info_index,
  c_SmartyCompilerException::s_instanceof_table,c_SmartyCompilerException::s_instanceof_index,
  &c_SmartyCompilerException::s_class_name,
  &c_Exception::os_prop_table,&c_Exception::ci___construct,0,&cw_SmartyException
};
/* SRC: Smarty/libs/Smarty.class.php line 808 */
void f_smartyAutoload(Variant v_class) {
  FUNCTION_INJECTION(smartyAutoload);
  INTERCEPT_INJECTION("smartyAutoload", array_createvi(1, toVPOD(v_class)), );
  Variant v__class;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_class; Variant &v__class;
    VariableTable(Variant &r_class, Variant &r__class) : v_class(r_class), v__class(r__class) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 3) {
        case 0:
          HASH_RETURN_NAMSTR(0x2E3A246D1F74C210LL, s_ssc82dbd12, v_class,
                             5);
          break;
        case 2:
          HASH_RETURN_NAMSTR(0x2E0BA7CA3182C0EELL, s_ss345864ff, v__class,
                             6);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_class, v__class);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  {
    LINE(810,0);
    const String &tmp0((x_strtolower(toString(v_class))));
    v__class = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(811,0);
      const Variant &tmp1((x_substr(toString(v__class), toInt32(0LL), toInt32(16LL))));
      tmp0 = ((same(tmp1, NAMSTR(s_ssd3493fa8, "smarty_internal_")) || equal(v__class, NAMSTR(s_ss7684a1e3, "smarty_security"))));
    }
    if (tmp0) {
      {
        LINE(812,(include(concat3(toString(getDynamicConstant(g->k_SMARTY_SYSPLUGINS_DIR, NAMSTR(s_ssf8ff0367, "SMARTY_SYSPLUGINS_DIR"))), toString(v__class), NAMSTR(s_ss0fd031f1, ".php")), false, variables, "Smarty/libs/")));
      }
    }
  }
}
namespace hphp_impl_splitter {}
Variant i_smartyAutoload(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smartyAutoload", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (f_smartyAutoload(arg0), null);
  }
}
Variant ifa_smartyAutoload(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smartyAutoload", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (f_smartyAutoload(arg0), null);
}
CallInfo ci_smartyAutoload((void*)&i_smartyAutoload, (void*)&ifa_smartyAutoload, 1, 0, 0x0000000000000000LL);
ObjectData *coo_Smarty() {
  return NEWOBJ(c_Smarty)();
}
ObjectData *coo_SmartyException() {
  return NEWOBJ(c_SmartyException)();
}
ObjectData *coo_SmartyCompilerException() {
  return NEWOBJ(c_SmartyCompilerException)();
}
Variant pm_php$Smarty$libs$Smarty_class_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/Smarty.class.php, pm_php$Smarty$libs$Smarty_class_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  Variant &v_registeredAutoLoadFunctions ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ss58dac409, "registeredAutoLoadFunctions")) : g->GV(registeredAutoLoadFunctions);

  g->declareFunctionLit(NAMSTR(s_ss36ac0ec3, "smartyautoload"));
  g->FVF(smartyautoload) = true;
  {
    bool tmp0;
    {
      LINE(37,0);
      bool tmp1((x_defined(NAMSTR(s_ssb90e6258, "DS"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        LINE(38,(g->declareConstant(NAMSTR(s_ssb90e6258, "DS"), g->k_DS, NAMSTR(s_ssb9e13cd6, "/") /* DIRECTORY_SEPARATOR */)));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(45,0);
      bool tmp1((x_defined(NAMSTR(s_sse621a75f, "SMARTY_DIR"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          LINE(46,0);
          const String &tmp0((x_dirname(get_source_filename("Smarty/libs/Smarty.class.php"))));
          g->declareConstant(NAMSTR(s_sse621a75f, "SMARTY_DIR"), g->k_SMARTY_DIR, concat(tmp0, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))));
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(53,0);
      bool tmp1((x_defined(NAMSTR(s_ssf8ff0367, "SMARTY_SYSPLUGINS_DIR"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        LINE(54,(g->declareConstant(NAMSTR(s_ssf8ff0367, "SMARTY_SYSPLUGINS_DIR"), g->k_SMARTY_SYSPLUGINS_DIR, concat3(toString(getDynamicConstant(g->k_SMARTY_DIR, NAMSTR(s_sse621a75f, "SMARTY_DIR"))), NAMSTR(s_ssf5f25092, "sysplugins"), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))))));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(56,0);
      bool tmp1((x_defined(NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        LINE(57,(g->declareConstant(NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"), g->k_SMARTY_PLUGINS_DIR, concat3(toString(getDynamicConstant(g->k_SMARTY_DIR, NAMSTR(s_sse621a75f, "SMARTY_DIR"))), NAMSTR(s_ssf8e1c8df, "plugins"), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))))));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(59,0);
      bool tmp1((x_defined(NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        LINE(60,(g->declareConstant(NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"), g->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss7a2a6129, "UTF-8"))));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(62,0);
      bool tmp1((x_defined(NAMSTR(s_ss97b0bc25, "SMARTY_RESOURCE_DATE_FORMAT"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        LINE(63,(g->declareConstant(NAMSTR(s_ss97b0bc25, "SMARTY_RESOURCE_DATE_FORMAT"), g->k_SMARTY_RESOURCE_DATE_FORMAT, NAMSTR(s_ss89dc0993, "%b %e, %Y"))));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(69,0);
      bool tmp1((x_defined(NAMSTR(s_ss31460e4a, "SMARTY_SPL_AUTOLOAD"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        LINE(70,(g->declareConstant(NAMSTR(s_ss31460e4a, "SMARTY_SPL_AUTOLOAD"), g->k_SMARTY_SPL_AUTOLOAD, 0LL)));
      }
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (toBoolean(getDynamicConstant(g->k_SMARTY_SPL_AUTOLOAD, NAMSTR(s_ss31460e4a, "SMARTY_SPL_AUTOLOAD"))));
      if (tmp1) {
        LINE(73,0);
        const String &tmp2((x_get_include_path()));
        const String &tmp3((x_set_include_path(concat3(tmp2, NAMSTR(s_ssdb381ae8, ":") /* PATH_SEPARATOR */, toString(getDynamicConstant(g->k_SMARTY_SYSPLUGINS_DIR, NAMSTR(s_ssf8ff0367, "SMARTY_SYSPLUGINS_DIR")))))));
        tmp1 = (!same(tmp3, false));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          LINE(74,0);
          const Variant &tmp0((x_spl_autoload_functions()));
          v_registeredAutoLoadFunctions.assignVal(tmp0);
        }
        {
          bool tmp0;
          {
            tmp0 = (!(isset(v_registeredAutoLoadFunctions, NAMSTR(s_ss37f720a1, "spl_autoload"), true)));
          }
          if (tmp0) {
            {
              LINE(76,(x_spl_autoload_register()));
            }
          }
        }
      }
    }
    else {
      {
        LINE(79,(x_spl_autoload_register(NAMVAR(s_svsdeabadb5, "smartyAutoload"))));
      }
    }
  }
  g->CDEC(smarty) = true;
  checkClassExistsThrow(NAMSTR(s_ssf6f068b0, "Smarty_Internal_Data"), &g->CDEC(smarty_internal_data));
  g->CDEC(smartyexception) = true;
  g->CDEC(smartycompilerexception) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svif01bca90, 0LL),
  (int64)&NAMVAR(s_svsa24a50b0, "modifier"),
  (int64)&NAMVAR(s_svi90d5f98c, 2LL),
  (int64)&NAMVAR(s_svsccae2184, "post"),
  (int64)&NAMVAR(s_svs06f1f4c4, "Smarty-3.0.9"),
  (int64)&NAMVAR(s_svsd179fbac, "pre"),
  (int64)&NAMVAR(s_svib794f8ce, 1LL),
  (int64)&NAMVAR(s_svs52403931, "function"),
  (int64)&NAMVAR(s_svs7a5dbb24, "output"),
  (int64)&NAMVAR(s_svia6bfbbdd, 3LL),
  (int64)&NAMVAR(s_svs87556ef3, "block"),
  (int64)&NAMVAR(s_svs0282ae4f, "compiler"),
  (int64)&NAMVAR(s_svs3ea207e6, "variable"),
  (int64)&s_sva00000000,
  (int64)&null_variant,
  (int64)&true_varNR,
  (int64)&s_svac09f8e73,
  (int64)&NAMVAR(s_svs8ce7db5b, "file"),
  (int64)&NAMVAR(s_sviba4cafde, 420LL),
  (int64)&NAMVAR(s_svs22bfb273, "NONE"),
  (int64)&NAMVAR(s_svsec4a57e6, "SMARTY_DEBUG"),
  (int64)&false_varNR,
  (int64)&s_svabeb0ebff,
  (int64)&NAMVAR(s_svi1bdbd9c9, 3600LL),
  (int64)&NAMVAR(s_svs0b9fa2bd, "Smarty_Security"),
  (int64)&NAMVAR(s_svs3939fa19, "{"),
  (int64)&NAMVAR(s_svs236e0754, "}"),
  (int64)&NAMVAR(s_svicf3d5329, 505LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x5B869CB4F435C0C2LL,15,0,0,36,4,0,&NAMSTR(s_ssf435c0c2, "CACHING_OFF") },
  {0x105ACEC2C5005382LL,0,1,0,100,7,0,&NAMSTR(s_ssc5005382, "PLUGIN_MODIFIER") },
  {0x730B5C6034218687LL,17,2,0,100,4,0,&NAMSTR(s_ss34218687, "PHP_REMOVE") },
  {0x1633903C45FF0E48LL,3,3,0,100,7,0,&NAMSTR(s_ss45ff0e48, "FILTER_POST") },
  {0x6B8796DE73D7AF50LL,4,0,0,100,4,0,&NAMSTR(s_ss73d7af50, "SCOPE_LOCAL") },
  {0x6097DD6397E75ED1LL,-1,4,0,100,7,0,&NAMSTR(s_ss97e75ed1, "SMARTY_VERSION") },
  {0x45FB64BFE62C23D2LL,7,5,0,100,7,0,&NAMSTR(s_sse62c23d2, "FILTER_PRE") },
  {0x790F80EFAFED2F16LL,2,0,0,100,4,0,&NAMSTR(s_ssafed2f16, "PHP_PASSTHRU") },
  {0x3F7003CFA8BB3BDFLL,2,6,0,100,4,0,&NAMSTR(s_ssa8bb3bdf, "SCOPE_PARENT") },
  {0x2AC5F0FFE5ED8921LL,-7,6,0,100,4,0,&NAMSTR(s_sse5ed8921, "PHP_QUOTE") },
  {0x4D2FD30564E28EA6LL,4,2,0,100,4,0,&NAMSTR(s_ss64e28ea6, "SCOPE_ROOT") },
  {0x66EF29A91D7545AALL,-4,2,0,100,4,0,&NAMSTR(s_ss1d7545aa, "CACHING_LIFETIME_SAVED") },
  {0x4ED9CE4D61E8BB6DLL,4,7,0,100,7,0,&NAMSTR(s_ss61e8bb6d, "PLUGIN_FUNCTION") },
  {0x460EE2041823B0AELL,5,8,0,100,7,0,&NAMSTR(s_ss1823b0ae, "FILTER_OUTPUT") },
  {0x66375A8CCF32F16FLL,-14,9,0,100,4,0,&NAMSTR(s_sscf32f16f, "SCOPE_GLOBAL") },
  {0x300492BE7BFBE232LL,-4,6,0,100,4,0,&NAMSTR(s_ss7bfbe232, "CACHING_LIFETIME_CURRENT") },
  {0x476E93D8EF713A35LL,1,10,0,100,7,0,&NAMSTR(s_ssef713a35, "PLUGIN_BLOCK") },
  {0x7888376BD917C1B7LL,-16,11,0,100,7,0,&NAMSTR(s_ssd917c1b7, "PLUGIN_COMPILER") },
  {0x05E4C7C6F851663BLL,-6,12,0,100,7,0,&NAMSTR(s_ssf851663b, "FILTER_VARIABLE") },
  {0x237E3E7BE7DC29FCLL,-16,9,0,100,4,0,&NAMSTR(s_sse7dc29fc, "PHP_ALLOW") },

  {0x0F8B6594840FE534LL,1,13,0,140,10,offsetof(GlobalVariables,s_Smarty___global_tpl_vars),&NAMSTR(s_ss32c19fd3, "global_tpl_vars") },
  {0x7D816820E1AA46FCLL,0,13,0,204,8,offsetof(GlobalVariables,s_Smarty____smarty_vars),&NAMSTR(s_ssf12c7af9, "_smarty_vars") },

  {0x0B3015C606D4C303LL,34,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_compile_dir),&NAMSTR(s_ss9727a022, "compile_dir") },
  {0x3C3739176E57BF17LL,4,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_registered_resources),&NAMSTR(s_ssaa1d58ac, "registered_resources") },
  {0x609ABB71973D8E20LL,12,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_tpl_vars),&NAMSTR(s_ss62b7404c, "tpl_vars") },
  {0x0CBFBECAB0099130LL,40,15,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_compile_locking),&NAMSTR(s_ss65d5a06d, "compile_locking") },
  {0x422D3AA600138430LL,19,15,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_config_booleanize),&NAMSTR(s_ss19726b3d, "config_booleanize") },
  {0x2F96388AFA38E533LL,58,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_autoload_filters),&NAMSTR(s_ssb05f1099, "autoload_filters") },
  {0x33B07093A324D537LL,43,16,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_cache_resource_types),&NAMSTR(s_ss956c4468, "cache_resource_types") },
  {0x38807339BBD28A3ALL,32,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_cache_id),&NAMSTR(s_ssb26f3d0e, "cache_id") },
  {0x47C2A79115890F40LL,38,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m__version),&NAMSTR(s_ss47222603, "_version") },
  {0x7675274CB7942143LL,-3,17,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_caching_type),&NAMSTR(s_sse440d4fa, "caching_type") },
  {0x21F1C9C91209F243LL,49,18,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m__file_perms),&NAMSTR(s_ssc4e72b72, "_file_perms") },
  {0x7AC5F01E811B404BLL,2,19,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_debugging_ctrl),&NAMSTR(s_sseb05b3e5, "debugging_ctrl") },
  {0x1CD1A2F127D0E151LL,15,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_config_dir),&NAMSTR(s_ss5bd6289d, "config_dir") },
  {0x5976F07281F4BB59LL,11,20,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_smarty_debug_id),&NAMSTR(s_ss237a7645, "smarty_debug_id") },
  {0x53DCFFF92D13045ELL,8,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_parent),&NAMSTR(s_ssfb10fd8c, "parent") },
  {0x1BC998CE25AAC660LL,6,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_merge_compiled_includes),&NAMSTR(s_ss594c3572, "merge_compiled_includes") },
  {0x64D8740D5654DD66LL,-14,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_config_vars),&NAMSTR(s_ss4fdfffb6, "config_vars") },
  {0x79947C3FA28DDF6CLL,-6,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_debugging),&NAMSTR(s_sse9be2c51, "debugging") },
  {0x63E9DD9F83BD5574LL,15,14,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_template_dir),&NAMSTR(s_ssfc1024fb, "template_dir") },
  {0x5F1E73443D966274LL,37,22,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_plugin_search_order),&NAMSTR(s_ss123fda8a, "plugin_search_order") },
  {0x5408943D00A12579LL,-13,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_force_cache),&NAMSTR(s_ss850bc618, "force_cache") },
  {0x59405449698DB281LL,-1,23,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_cache_lifetime),&NAMSTR(s_ss41eb5ea5, "cache_lifetime") },
  {0x6E62CA23004D4083LL,29,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_template_functions),&NAMSTR(s_ss57c82ef4, "template_functions") },
  {0x174B9F307C5B7084LL,-7,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_config_read_hidden),&NAMSTR(s_ssbff744ce, "config_read_hidden") },
  {0x3D7C8DC0FA704F86LL,21,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_debug_tpl),&NAMSTR(s_ssdda52e2b, "debug_tpl") },
  {0x2B716DA9C9000D89LL,-22,15,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_compile_check),&NAMSTR(s_ssfe447bcc, "compile_check") },
  {0x0F2439CF196F7C8BLL,-8,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_error_unassigned),&NAMSTR(s_ss58f93ebc, "error_unassigned") },
  {0x0A6F4727C888E18FLL,-2,21,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_force_compile),&NAMSTR(s_ss672ddadf, "force_compile") },
  {0x2E97568CE6551D8FLL,-11,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_trusted_dir),&NAMSTR(s_ss134c1e88, "trusted_dir") },
  {0x33CE52A032EFED94LL,33,24,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_security_class),&NAMSTR(s_ss53e0064f, "security_class") },
  {0x49B2F96076DB9C95LL,7,21,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_allow_php_templates),&NAMSTR(s_ss404e0c96, "allow_php_templates") },
  {0x42C1B3083A082995LL,-21,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_start_time),&NAMSTR(s_ss0019d265, "start_time") },
  {0x3D6BE86AA93DDB96LL,3,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_inheritance),&NAMSTR(s_ss92d1fe67, "inheritance") },
  {0x481D3EF4B2501C99LL,-33,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_default_template_handler_func),&NAMSTR(s_ss2665d749, "default_template_handler_func") },
  {0x291A495D0E93909ALL,26,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_plugins_dir),&NAMSTR(s_sscaae0020, "plugins_dir") },
  {0x310E40B0F051409FLL,26,15,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_deprecation_notices),&NAMSTR(s_sseb6ec972, "deprecation_notices") },
  {0x77AD561E7D10CEA0LL,-10,15,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_auto_literal),&NAMSTR(s_ss4bf7c8b7, "auto_literal") },
  {0x6648A3F75D41DAA2LL,-9,15,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_direct_access_security),&NAMSTR(s_ss201b099b, "direct_access_security") },
  {0x34FA6F2229D0E8A3LL,-23,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_caching),&NAMSTR(s_ssafeed509, "caching") },
  {0x1D8C259A9A0F5AAFLL,5,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_compile_id),&NAMSTR(s_ss962fc398, "compile_id") },
  {0x6895DBD25CB5BDB0LL,-39,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_registered_filters),&NAMSTR(s_ss05369a00, "registered_filters") },
  {0x2FFADD8904263EB4LL,-3,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_compile_error),&NAMSTR(s_ss02dd9524, "compile_error") },
  {0x6818D5A9AC3D06B6LL,12,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_php_handling),&NAMSTR(s_ss721043c6, "php_handling") },
  {0x13AEAD415DCE3DBCLL,-2,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_use_sub_dirs),&NAMSTR(s_ss618338b8, "use_sub_dirs") },
  {0x20D69D47AC6D84BDLL,4,25,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_left_delimiter),&NAMSTR(s_ssed156107, "left_delimiter") },
  {0x3101CE70BA49A3C8LL,5,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_error_reporting),&NAMSTR(s_ss2a2f77c9, "error_reporting") },
  {0x0CDC655BF5DA2ACALL,0,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_smarty),&NAMSTR(s_ss675664bf, "smarty") },
  {0x012A29B8E236B0D0LL,-7,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_registered_classes),&NAMSTR(s_ss44730f62, "registered_classes") },
  {0x51BE1B0D5DE64DD5LL,-19,26,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_right_delimiter),&NAMSTR(s_ssd0a2438e, "right_delimiter") },
  {0x6C09887B749653DALL,4,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_properties),&NAMSTR(s_ss90269404, "properties") },
  {0x12EA2BE9E8A0A7E0LL,-46,15,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_config_overwrite),&NAMSTR(s_ss485ef447, "config_overwrite") },
  {0x5513FF7A8C23BFE1LL,-42,17,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_default_resource_type),&NAMSTR(s_ssfe731b1f, "default_resource_type") },
  {0x40F0782A26856BE5LL,-20,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m__tag_stack),&NAMSTR(s_ss0b3d5400, "_tag_stack") },
  {0x1E98527E0FA373E9LL,11,17,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_default_config_type),&NAMSTR(s_ss6cc17247, "default_config_type") },
  {0x2E6B5A905E5FB9EALL,-24,21,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_allow_php_tag),&NAMSTR(s_ssaa7ea232, "allow_php_tag") },
  {0x21347EA6A45426EALL,2,21,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_cache_modified_check),&NAMSTR(s_ss2fbedaa7, "cache_modified_check") },
  {0x7D23DF4D44A125EALL,-9,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_registered_objects),&NAMSTR(s_ss95ed8050, "registered_objects") },
  {0x0D87B62584B4D2EDLL,-38,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_registered_plugins),&NAMSTR(s_ss6966aa38, "registered_plugins") },
  {0x1D3CDA9DCF83F7F0LL,-27,13,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_default_modifiers),&NAMSTR(s_ss3c2a208b, "default_modifiers") },
  {0x6F7DB5452158CEF1LL,-7,27,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m__dir_perms),&NAMSTR(s_ss59de3f3d, "_dir_perms") },
  {0x441778FFB0EC1DF7LL,-48,14,0,4,10,GET_PROPERTY_OFFSET(c_Smarty, m_cache_dir),&NAMSTR(s_ss98092263, "cache_dir") },
  {0x5E8353F9D40118F7LL,-53,21,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_get_used_tags),&NAMSTR(s_ss3a2b51e0, "get_used_tags") },
  {0x4F12E1A3DCCD5EF9LL,-20,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_security_policy),&NAMSTR(s_ss9f0b8e15, "security_policy") },
  {0x7673E95D42A874FDLL,-5,15,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_variable_filter),&NAMSTR(s_ss9e6eeae2, "variable_filter") },
  {0x676EF376971D5EFFLL,-9,14,0,68,10,GET_PROPERTY_OFFSET(c_Smarty, m_template_objects),&NAMSTR(s_ss8d72b238, "template_objects") },

};
static const int cpt_hash_entries[] = {
  // Smarty hash
  -1,-1,-1,19,18,-1,-1,-1,17,-1,16,-1,-1,15,-1,-1,14,13,12,-1,-1,11,-1,-1,-1,10,-1,-1,-1,-1,9,-1,8,-1,-1,-1,-1,-1,-1,-1,-1,7,-1,-1,-1,6,5,4,-1,-1,-1,-1,-1,-1,-1,3,2,-1,-1,-1,-1,0,-1,-1,
  -1,-1,-1,20,-1,-1,-1,-1,
  -1,-1,-1,22,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,23,-1,-1,-1,-1,-1,-1,-1,-1,24,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,25,-1,-1,27,-1,-1,-1,28,-1,-1,29,-1,-1,-1,-1,-1,30,-1,-1,31,-1,-1,-1,-1,-1,-1,-1,33,-1,-1,-1,-1,-1,34,-1,-1,-1,-1,-1,-1,-1,35,-1,-1,-1,-1,36,-1,37,-1,-1,-1,-1,-1,38,-1,-1,-1,-1,-1,39,-1,-1,-1,-1,-1,-1,-1,40,-1,-1,-1,-1,42,-1,-1,-1,-1,-1,-1,-1,43,-1,44,45,-1,46,-1,-1,47,-1,48,-1,-1,-1,49,-1,-1,-1,-1,51,52,54,-1,-1,55,56,-1,-1,-1,-1,57,58,-1,59,60,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,61,62,-1,-1,-1,63,-1,64,-1,-1,-1,-1,-1,65,66,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,67,-1,68,-1,-1,-1,-1,-1,69,-1,-1,-1,-1,70,-1,-1,-1,-1,71,-1,-1,-1,-1,-1,72,73,-1,-1,-1,74,-1,-1,-1,75,76,-1,-1,79,-1,-1,80,81,-1,-1,-1,-1,-1,82,-1,84,-1,-1,-1,85,-1,86,
  // Smarty lists
  -1,
  -1,
  -1,
  2,20,21,};
const ClassPropTable c_Smarty::os_prop_table = {
  255,58,7,20,63,5,257,0,
  cpt_hash_entries+72,&c_Smarty_Internal_Data::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_Smarty::os_prop_table, cpt_hash_entries+331);

///////////////////////////////////////////////////////////////////////////////
}
