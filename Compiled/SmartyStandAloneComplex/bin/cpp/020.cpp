
#include <php/Smarty/libs/sysplugins/smarty_internal_config.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_config.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_config_file_compiler.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_config_file_compiler.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_configfilelexer.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_configfileparser.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_write_file.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 12 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Config)
const InstanceOfInfo c_Smarty_Internal_Config::s_instanceof_table[] = {
  {0x7328AC7749125437LL,1,"Smarty_Internal_Config",&cw_Smarty_Internal_Config},
};
const int c_Smarty_Internal_Config::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Config::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Config::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Config::ifa_getcompiledfilepath, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_getconfigfilepath((void*)&c_Smarty_Internal_Config::i_getconfigfilepath, (void*)&c_Smarty_Internal_Config::ifa_getconfigfilepath, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_buildcompiledfilepath((void*)&c_Smarty_Internal_Config::i_buildcompiledfilepath, (void*)&c_Smarty_Internal_Config::ifa_buildcompiledfilepath, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci___construct((void*)&c_Smarty_Internal_Config::i___construct, (void*)&c_Smarty_Internal_Config::ifa___construct, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_mustcompile((void*)&c_Smarty_Internal_Config::i_mustcompile, (void*)&c_Smarty_Internal_Config::ifa_mustcompile, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_compileconfigsource((void*)&c_Smarty_Internal_Config::i_compileconfigsource, (void*)&c_Smarty_Internal_Config::ifa_compileconfigsource, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_getcompiledtimestamp((void*)&c_Smarty_Internal_Config::i_getcompiledtimestamp, (void*)&c_Smarty_Internal_Config::ifa_getcompiledtimestamp, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_loadconfigvars((void*)&c_Smarty_Internal_Config::i_loadconfigvars, (void*)&c_Smarty_Internal_Config::ifa_loadconfigvars, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_readconfigsource((void*)&c_Smarty_Internal_Config::i_readconfigsource, (void*)&c_Smarty_Internal_Config::ifa_readconfigsource, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_getcompiledconfig((void*)&c_Smarty_Internal_Config::i_getcompiledconfig, (void*)&c_Smarty_Internal_Config::ifa_getcompiledconfig, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_getconfigsource((void*)&c_Smarty_Internal_Config::i_getconfigsource, (void*)&c_Smarty_Internal_Config::ifa_getconfigsource, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_gettimestamp((void*)&c_Smarty_Internal_Config::i_gettimestamp, (void*)&c_Smarty_Internal_Config::ifa_gettimestamp, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_buildconfigfilepath((void*)&c_Smarty_Internal_Config::i_buildconfigfilepath, (void*)&c_Smarty_Internal_Config::ifa_buildconfigfilepath, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config::ci_parseconfigresourcename((void*)&c_Smarty_Internal_Config::i_parseconfigresourcename, (void*)&c_Smarty_Internal_Config::ifa_parseconfigresourcename, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Config::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Config::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Config::i_loadconfigvars(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_loadconfigvars, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(NAMSTR(s_ss59b4a7d2, "local")) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_loadconfigvars(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Config::i_parseconfigresourcename(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_parseconfigresourcename, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Config::parseConfigResourceName", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_parseconfigresourcename(arg0));
  }
}
Variant c_Smarty_Internal_Config::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_getcompiledfilepath());
}
Variant c_Smarty_Internal_Config::ifa_getconfigfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconfigfilepath, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_getconfigfilepath());
}
Variant c_Smarty_Internal_Config::ifa_buildcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_buildcompiledfilepath, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_buildcompiledfilepath());
}
Variant c_Smarty_Internal_Config::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Config::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  return (self->t___construct(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Config::ifa_mustcompile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_mustcompile, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_mustcompile());
}
Variant c_Smarty_Internal_Config::ifa_compileconfigsource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compileconfigsource, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_compileconfigsource(), null);
}
Variant c_Smarty_Internal_Config::ifa_getcompiledtimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledtimestamp, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_getcompiledtimestamp());
}
Variant c_Smarty_Internal_Config::ifa_loadconfigvars(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadconfigvars, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (NAMVAR(s_svs59b4a7d2, "local")) : a1);
  return (self->t_loadconfigvars(arg0, arg1), null);
}
Variant c_Smarty_Internal_Config::ifa_readconfigsource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_readconfigsource, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_readconfigsource());
}
Variant c_Smarty_Internal_Config::ifa_getcompiledconfig(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledconfig, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_getcompiledconfig());
}
Variant c_Smarty_Internal_Config::ifa_getconfigsource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getconfigsource, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_getconfigsource());
}
Variant c_Smarty_Internal_Config::ifa_gettimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettimestamp, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_gettimestamp());
}
Variant c_Smarty_Internal_Config::ifa_buildconfigfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_buildconfigfilepath, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  return (self->t_buildconfigfilepath());
}
Variant c_Smarty_Internal_Config::ifa_parseconfigresourcename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_parseconfigresourcename, coo_Smarty_Internal_Config);
  }
  c_Smarty_Internal_Config *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Config::parseConfigResourceName", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_parseconfigresourcename(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Config::s_call_info_table[] = {
  { 0x7533D7D1FB463C81LL, 1, 12, "getTimestamp", &c_Smarty_Internal_Config::ci_gettimestamp },
  { 0x42628B888FB6C162LL, 1, 17, "getCompiledConfig", &c_Smarty_Internal_Config::ci_getcompiledconfig },
  { 0x405FBEA07A8F32A3LL, 1, 19, "buildConfigFilepath", &c_Smarty_Internal_Config::ci_buildconfigfilepath },
  { 0x7E6F97A5F95F9EA9LL, 1, 16, "readConfigSource", &c_Smarty_Internal_Config::ci_readconfigsource },
  { 0x6851150C1D7FB2CALL, 1, 21, "buildCompiledFilepath", &c_Smarty_Internal_Config::ci_buildcompiledfilepath },
  { 0x57EC16184F4685CALL, 0, 20, "getCompiledTimestamp", &c_Smarty_Internal_Config::ci_getcompiledtimestamp },
  { 0x1DAF501B5224184ELL, 1, 15, "getConfigSource", &c_Smarty_Internal_Config::ci_getconfigsource },
  { 0x4707818097E33AB2LL, 1, 23, "parseConfigResourceName", &c_Smarty_Internal_Config::ci_parseconfigresourcename },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Config::ci_getcompiledfilepath },
  { 0x28D74DCCA116CA19LL, 1, 17, "getConfigFilepath", &c_Smarty_Internal_Config::ci_getconfigfilepath },
  { 0x24EB611B03892C1DLL, 1, 11, "mustCompile", &c_Smarty_Internal_Config::ci_mustcompile },
  { 0x47D8031F64F4199ELL, 1, 19, "compileConfigSource", &c_Smarty_Internal_Config::ci_compileconfigsource },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Config::ci___construct },
  { 0x68C762B454DD281FLL, 0, 14, "loadConfigVars", &c_Smarty_Internal_Config::ci_loadconfigvars },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Config::s_call_info_index[] = {
  31,
  -1,0,1,2,-1,-1,-1,-1,
  -1,3,4,-1,-1,-1,6,-1,
  -1,-1,7,-1,-1,8,-1,-1,
  -1,9,-1,-1,-1,10,11,12,

};
c_Smarty_Internal_Config *c_Smarty_Internal_Config::create(CVarRef v_config_resource, CVarRef v_smarty, CVarRef v_data //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_config_resource, v_smarty, v_data);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Config = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Config,
  c_Smarty_Internal_Config::s_call_info_table,c_Smarty_Internal_Config::s_call_info_index,
  c_Smarty_Internal_Config::s_instanceof_table,c_Smarty_Internal_Config::s_instanceof_index,
  &c_Smarty_Internal_Config::s_class_name,
  &c_Smarty_Internal_Config::os_prop_table,&c_Smarty_Internal_Config::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 15 */
void c_Smarty_Internal_Config::t___construct(Variant v_config_resource, Variant v_smarty, Variant v_data //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Config::__construct", array_createvi(3, toVPOD(v_config_resource), toVPOD(v_smarty), toVPOD(v_data)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssa9853128, "data"), v_data);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssbca18478, "config_resource"), v_config_resource);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss6641f88b, "config_resource_type"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssac939158, "config_filepath"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssacf380a3, "config_timestamp"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss907ac767, "config_source"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss47ab7340, "compiled_config"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssfcabca64, "compiled_filepath"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss5e3d17f4, "compiled_timestamp"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss614f620c, "mustCompile"), null);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss3ad590aa, "compiler_object"), null);
  {
    bool tmp0;
    {
      LINE(31,0);
      bool tmp1((t_parseconfigresourcename(v_config_resource)));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
          throw_exception(LINE(32,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss51759022, "Unable to parse config resource '"), toString(v_config_resource), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
        }
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 36 */
Variant c_Smarty_Internal_Config::t_getconfigfilepath() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::getConfigFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Config::getConfigFilepath", null_array, r);
  Variant tmp_ref;
  {
    Variant tmp0;
    if (x_is_null(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssac939158, "config_filepath"), true))) {
      LINE(39,0);
      const Variant &tmp1((t_buildconfigfilepath()));
      tmp0 = (GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssac939158, "config_filepath"), tmp1));
    } else {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssac939158, "config_filepath"), true));
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 43 */
Variant c_Smarty_Internal_Config::t_gettimestamp() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::getTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Config::getTimestamp", null_array, r);
  Variant tmp_ref;
  {
    Variant tmp0;
    if (x_is_null(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssacf380a3, "config_timestamp"), true))) {
      LINE(46,0);
      const String &tmp1((toString(t_getconfigfilepath())));
      const Variant &tmp2((x_filemtime(tmp1)));
      tmp0 = (GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssacf380a3, "config_timestamp"), tmp2));
    } else {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssacf380a3, "config_timestamp"), true));
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 50 */
bool c_Smarty_Internal_Config::t_parseconfigresourcename(CVarRef v_config_resource) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::parseConfigResourceName);
  INTERCEPT_INJECTION("Smarty_Internal_Config::parseConfigResourceName", array_createvi(1, toVPOD(v_config_resource)), r);
  Variant tmp_ref;
  if (empty(v_config_resource)) {
    return false;
  }
  {
    bool tmp0;
    {
      LINE(54,0);
      const Variant &tmp1((x_strpos(toString(v_config_resource), NAMVAR(s_svsdb381ae8, ":"))));
      tmp0 = (same(tmp1, false));
    }
    if (tmp0) {
      {
        {
          LINE(56,0);
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6cc17247, "default_config_type"), true)));
          GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss6641f88b, "config_resource_type"), tmp0);
        }
        GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), v_config_resource);
      }
    }
    else {
      {
        {
          LINE(60,0);
          CVarRef tmp0((x_explode(NAMSTR(s_ssdb381ae8, ":"), toString(v_config_resource), toInt32(2LL))));
          GET_THIS_ARROW()o_set(NAMSTR(s_ss5304ef03, "config_resource_name"), tmp0[1], s_class_name);
          GET_THIS_ARROW()o_set(NAMSTR(s_ss6641f88b, "config_resource_type"), tmp0[0], s_class_name);
          ;
        }
        {
          bool tmp0;
          {
            LINE(61,0);
            int tmp1((x_strlen(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6641f88b, "config_resource_type"), true)))));
            tmp0 = (equal(tmp1, 1LL));
          }
          if (tmp0) {
            {
              {
                LINE(63,0);
                const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6cc17247, "default_config_type"), true)));
                GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss6641f88b, "config_resource_type"), tmp0);
              }
              GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), v_config_resource);
            }
          }
          else {
            {
              {
                LINE(66,0);
                const String &tmp0((x_strtolower(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6641f88b, "config_resource_type"), true)))));
                GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss6641f88b, "config_resource_type"), tmp0);
              }
            }
          }
        }
      }
    }
  }
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 75 */
Variant c_Smarty_Internal_Config::t_buildconfigfilepath() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::buildConfigFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Config::buildConfigFilepath", null_array, r);
  Variant v__config_dir;
  String v__filepath;

  {
    LOOP_COUNTER(1);
    Variant map2;
    {
      LINE(77,0);
      const Array &tmp0((toArray(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss5bd6289d, "config_dir"), true))));
      map2 = (tmp0);
    }
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__config_dir);
      {
        {
          bool tmp0;
          {
            LINE(78,0);
            const Variant &tmp1((x_substr(toString(v__config_dir), toInt32(-1LL))));
            const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
            tmp0 = (same(tmp2, false));
          }
          if (tmp0) {
            {
              concat_assign(v__config_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
            }
          }
        }
        v__filepath = concat(toString(v__config_dir), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), true)));
        if (LINE(83,(x_file_exists(v__filepath)))) {
          return v__filepath;
        }
      }
    }
  }
  if (LINE(87,(x_file_exists(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), true)))))) {
    return GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), true);
  }
  {
    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
    throw_exception(LINE(90,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssb0f09704, "Unable to load config file \""), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), true)), NAMSTR(s_ss7e5fc106, "\"")))), tmp0))));
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 105 */
Variant c_Smarty_Internal_Config::t_getconfigsource() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Config, Smarty_Internal_Config::getConfigSource);
  INTERCEPT_INJECTION("Smarty_Internal_Config::getConfigSource", null_array, r);
  if (x_is_null(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss907ac767, "config_source"), true))) {
    {
      {
        bool tmp0;
        {
          LINE(108,0);
          MethodCallPackage mcp1;
          mcp1.methodCall((GET_THIS_VALID()), NAMSTR(s_ss056af322, "readConfigSource"), 0x7E6F97A5F95F9EA9LL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          const Variant &tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Config)))));
          tmp0 = (same(tmp2, false));
        }
        if (tmp0) {
          {
            {
              p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
              throw_exception(LINE(109,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssb0f09704, "Unable to load config file \""), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), true)), NAMSTR(s_ss7e5fc106, "\"")))), tmp0))));
            }
          }
        }
      }
    }
  }
  return GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss907ac767, "config_source"), true);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 114 */
Variant c_Smarty_Internal_Config::t_readconfigsource() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::readConfigSource);
  INTERCEPT_INJECTION("Smarty_Internal_Config::readConfigSource", null_array, r);
  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(117,0);
      const String &tmp1((toString(t_getconfigfilepath())));
      tmp0 = (x_file_exists(tmp1));
    }
    if (tmp0) {
      {
        {
          LINE(118,0);
          const String &tmp0((toString(t_getconfigfilepath())));
          const Variant &tmp1((x_file_get_contents(tmp0)));
          GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss907ac767, "config_source"), tmp1);
        }
        return true;
      }
    }
    else {
      {
        return false;
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 130 */
Variant c_Smarty_Internal_Config::t_getcompiledfilepath() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Config::getCompiledFilepath", null_array, r);
  Variant tmp_ref;
  {
    Variant tmp0;
    if (x_is_null(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssfcabca64, "compiled_filepath"), true))) {
      LINE(133,0);
      const String &tmp1((t_buildcompiledfilepath()));
      tmp0 = (GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssfcabca64, "compiled_filepath"), tmp1));
    } else {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssfcabca64, "compiled_filepath"), true));
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 136 */
String c_Smarty_Internal_Config::t_buildcompiledfilepath() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::buildCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Config::buildCompiledFilepath", null_array, r);
  Variant v__compile_id;
  int64 v__flag = 0;
  String v__filepath;
  Variant v__compile_dir_sep;
  Variant v__compile_dir;

  {
    Variant tmp0;
    if (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_isset(NAMSTR(s_ss962fc398, "compile_id"), s_class_name)) {
      LINE(138,0);
      const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
      tmp0 = (x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), tmp1));
    } else {
      tmp0 = (null);
    }
    v__compile_id.assignVal(tmp0);
  }
  {
    LINE(139,0);
    int64 tmp0((toInt64(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssbff744ce, "config_read_hidden"), true))));
    int64 tmp1((toInt64(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss19726b3d, "config_booleanize"), true))));
    int64 tmp2((((tmp1) * 2LL)));
    int64 tmp3((((tmp0) + tmp2)));
    LINE(140,0);
    int64 tmp4((toInt64(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss485ef447, "config_overwrite"), true))));
    int64 tmp5((((tmp4) * 4LL)));
    int64 tmp6(((tmp3 + tmp5)));
    v__flag = tmp6;
  }
  {
    LINE(141,0);
    const String &tmp0((x_sha1(concat(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), true)), toString(v__flag)))));
    v__filepath = tmp0;
  }
  if (LINE(143,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true))))) {
    {
      {
        StringBuffer tmp0_buf;
        tmp0_buf.appendWithTaint(LINE(144,(toString(x_substr(v__filepath, toInt32(0LL), toInt32(2LL))))));
        tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
        tmp0_buf.appendWithTaint(LINE(145,(toString(x_substr(v__filepath, toInt32(2LL), toInt32(2LL))))));
        tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
        tmp0_buf.appendWithTaint(LINE(146,(toString(x_substr(v__filepath, toInt32(4LL), toInt32(2LL))))));
        tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
        tmp0_buf.appendWithTaint(v__filepath);
        CStrRef tmp0(tmp0_buf.detachWithTaint());
        v__filepath = tmp0;
      }
    }
  }
  {
    Variant tmp0(((LINE(149,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((Variant)(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))) : ((Variant)(NAMSTR(s_sscf94e648, "^"))))));
    v__compile_dir_sep.assignVal(tmp0);
  }
  if (isset(v__compile_id)) {
    {
      v__filepath = concat3(toString(v__compile_id), toString(v__compile_dir_sep), v__filepath);
    }
  }
  {
    LINE(153,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true)));
    v__compile_dir.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(154,0);
      const Variant &tmp1((x_substr(toString(v__compile_dir), toInt32(-1LL))));
      tmp0 = (!equal(tmp1, getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
    }
    if (tmp0) {
      {
        concat_assign(v__compile_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
      }
    }
  }
  {
    const String &tmp0((toString(v__compile_dir)));
    String tmp1((v__filepath));
    LINE(157,0);
    const String &tmp2((x_basename(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5304ef03, "config_resource_name"), true)))));
    return concat5(tmp0, tmp1, NAMSTR(s_ss013a8f64, "."), tmp2, NAMSTR(s_ssa3dc150d, ".config.php"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 164 */
Variant c_Smarty_Internal_Config::t_getcompiledtimestamp() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::getCompiledTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Config::getCompiledTimestamp", null_array, r);
  Variant tmp_ref;
  {
    Variant tmp0;
    if (x_is_null(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5e3d17f4, "compiled_timestamp"), true))) {
      LINE(167,0);
      const String &tmp1((toString(t_getcompiledfilepath())));
      Variant tmp2;
      if (x_file_exists(tmp1)) {
        const String &tmp3((toString(t_getcompiledfilepath())));
        tmp2 = (x_filemtime(tmp3));
      } else {
        tmp2 = (false);
      }
      tmp0 = (GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss5e3d17f4, "compiled_timestamp"), tmp2));
    } else {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5e3d17f4, "compiled_timestamp"), true));
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 177 */
Variant c_Smarty_Internal_Config::t_mustcompile() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::mustCompile);
  INTERCEPT_INJECTION("Smarty_Internal_Config::mustCompile", null_array, r);
  Variant tmp_ref;
  {
    Variant tmp0;
    if (x_is_null(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss614f620c, "mustCompile"), true))) {
      bool tmp1 = (LINE(180,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss672ddadf, "force_compile"), true)))));
      if (!tmp1) {
        const Variant &tmp2((t_getcompiledtimestamp()));
        tmp1 = (same(tmp2, false));
      }
      bool tmp3 = (tmp1);
      if (!tmp3) {
        bool tmp4 = (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssfe447bcc, "compile_check"), true)));
        if (tmp4) {
          const Variant &tmp5((t_getcompiledtimestamp()));
          const Variant &tmp6((t_gettimestamp()));
          tmp4 = (less(tmp5, tmp6));
        }
        tmp3 = (tmp4);
      }
      tmp0 = (GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss614f620c, "mustCompile"), tmp3));
    } else {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss614f620c, "mustCompile"), true));
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 190 */
Variant c_Smarty_Internal_Config::t_getcompiledconfig() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::getCompiledConfig);
  INTERCEPT_INJECTION("Smarty_Internal_Config::getCompiledConfig", null_array, r);
  Variant tmp_ref;
  if (x_is_null(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss47ab7340, "compiled_config"), true))) {
    {
      if (LINE(194,(toBoolean(t_mustcompile())))) {
        {
          LINE(195,(t_compileconfigsource()));
        }
      }
      else {
        {
          {
            LINE(197,0);
            const String &tmp0((toString(t_getcompiledfilepath())));
            const Variant &tmp1((x_file_get_contents(tmp0)));
            GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss47ab7340, "compiled_config"), tmp1);
          }
        }
      }
    }
  }
  return GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss47ab7340, "compiled_config"), true);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 206 */
void c_Smarty_Internal_Config::t_compileconfigsource() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config, Smarty_Internal_Config::compileConfigSource);
  INTERCEPT_INJECTION("Smarty_Internal_Config::compileConfigSource", null_array, );
  Variant v_saved_timestamp;
  Object v_e;

  Variant tmp_ref;
  if (!(x_is_object(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3ad590aa, "compiler_object"), true)))) {
    {
      {
        p_Smarty_Internal_Config_File_Compiler tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss3498b9e6, "Smarty_Internal_Config_File_Compiler"), &g->CDEC(smarty_internal_config_file_compiler))), (coo_Smarty_Internal_Config_File_Compiler()));
        ((c_Smarty_Internal_Config_File_Compiler*)tmp0.get()->create(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
        GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss3ad590aa, "compiler_object"), tmp0);
      }
    }
  }
  if (LINE(214,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss65d5a06d, "compile_locking"), true))))) {
    {
      {
        bool tmp0;
        {
          LINE(215,0);
          const Variant &tmp1((t_getcompiledtimestamp()));
          tmp0 = (toBoolean(v_saved_timestamp.assignVal(tmp1)));
        }
        if (tmp0) {
          {
            {
              LINE(216,0);
              const String &tmp0((toString(t_getcompiledfilepath())));
              x_touch(tmp0);
            }
          }
        }
      }
    }
  }
  try {
    {
      LINE(221,0);
      MethodCallPackage mcp0;
      CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3ad590aa, "compiler_object"), true);
      mcp0.methodCall((obj0), NAMSTR(s_ss2e0cd1c7, "compileSource"), 0x644CA5CB10F248A8LL);
      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
      (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(GET_THIS_TYPED(Smarty_Internal_Config)));
    }
  } catch (Object e) {
    if (e.instanceof(NAMSTR(s_ssae8717ad, "exception"))) {
      v_e = e;
      if ((LINE(225,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss65d5a06d, "compile_locking"), true)))) && toBoolean(v_saved_timestamp))) {
        {
          {
            LINE(226,0);
            const String &tmp0((toString(t_getcompiledfilepath())));
            x_touch(tmp0, toInt64(v_saved_timestamp));
          }
        }
      }
      throw_exception(v_e);
    } else {
      throw;
    }
  }
  {
    LINE(232,0);
    const Variant &tmp0((t_getcompiledfilepath()));
    const Variant &tmp1((t_getcompiledconfig()));
    ((checkClassExistsThrow(NAMSTR(s_ss1ff6c55c, "Smarty_Internal_Write_File"), &g->CDEC(smarty_internal_write_file))), (c_Smarty_Internal_Write_File::t_writefile(tmp0, tmp1, GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true))));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 241 */
void c_Smarty_Internal_Config::t_loadconfigvars(Variant v_sections //  = null
, Variant v_scope //  = NAMSTR(s_ss59b4a7d2, "local")
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Config, Smarty_Internal_Config::loadConfigVars);
  INTERCEPT_INJECTION("Smarty_Internal_Config::loadConfigVars", array_createvi(2, toVPOD(v_sections), toVPOD(v_scope)), );
  Variant v_scope_ptr;
  Variant v__config_vars;
  Variant v_variable;
  Variant v_value;
  Variant v_this_section;
  Variant v_dummy;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_sections; Variant &v_scope; Variant &v_scope_ptr; Variant &v__config_vars; Variant &v_variable; Variant &v_value; Variant &v_this_section; Variant &v_dummy;
    VariableTable(Variant &r_sections, Variant &r_scope, Variant &r_scope_ptr, Variant &r__config_vars, Variant &r_variable, Variant &r_value, Variant &r_this_section, Variant &r_dummy) : v_sections(r_sections), v_scope(r_scope), v_scope_ptr(r_scope_ptr), v__config_vars(r__config_vars), v_variable(r_variable), v_value(r_value), v_this_section(r_this_section), v_dummy(r_dummy) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 15) {
        case 0:
          HASH_RETURN_NAMSTR(0x69D4CE092CEAA230LL, s_ssa5091c1a, v__config_vars,
                             12);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x483C487F970F2C96LL, s_ss4d6447e5, v_scope,
                             5);
          break;
        case 7:
          HASH_RETURN_NAMSTR(0x021A52B45A788597LL, s_sse0c88471, v_value,
                             5);
          HASH_RETURN_NAMSTR(0x239ECFD65D9D5E17LL, s_ssde7b1d66, v_dummy,
                             5);
          break;
        case 8:
          HASH_RETURN_NAMSTR(0x11FF074B354BF718LL, s_ss54c42a48, v_sections,
                             8);
          break;
        case 14:
          HASH_RETURN_NAMSTR(0x5D601CCC8BF4286ELL, s_ss2fa6ee9c, v_scope_ptr,
                             9);
          break;
        case 15:
          HASH_RETURN_NAMSTR(0x33191D48AA4C1A6FLL, s_ss3ea207e6, v_variable,
                             8);
          HASH_RETURN_NAMSTR(0x0FCF3F4ED5E8ED5FLL, s_ss272b4fd3, v_this_section,
                             12);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_sections, v_scope, v_scope_ptr, v__config_vars, v_variable, v_value, v_this_section, v_dummy);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  Variant tmp_ref;
  if (instanceOf(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssa9853128, "data"), true), NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"))) {
    {
      {
        LINE(244,0);
        const String &tmp0((toString(t_getconfigfilepath())));
        const String &tmp1((x_sha1(tmp0)));
        const Variant &tmp3((t_getconfigfilepath()));
        const Variant &tmp4((t_gettimestamp()));
        ArrayInit tmp2(array_createvi(3, toVPOD(tmp3), toVPOD(tmp4), toVPOD(NAMVAR(s_svs8ce7db5b, "file"))));
        const Array &tmp5((Array(tmp2)));
        lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ssa9853128, "data"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::CheckExist_Key)).set(tmp1, (VarNR(tmp5)));
        tmp_ref.unset();
      }
    }
  }
  if (LINE(246,(toBoolean(t_mustcompile())))) {
    {
      LINE(247,(t_compileconfigsource()));
    }
  }
  if (equal(v_scope, NAMSTR(s_ss59b4a7d2, "local"))) {
    {
      v_scope_ptr.assignVal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssa9853128, "data"), true));
    }
  }
  else if (equal(v_scope, NAMSTR(s_ssfb10fd8c, "parent"))) {
    {
      {
        bool tmp0;
        {
          tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssa9853128, "data"), false).o_isset(NAMSTR(s_ssfb10fd8c, "parent"), s_class_name));
        }
        if (tmp0) {
          {
            {
              LINE(254,0);
              const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssa9853128, "data"), true).o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
              v_scope_ptr.assignVal(tmp0);
            }
          }
        }
        else {
          {
            v_scope_ptr.assignVal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssa9853128, "data"), true));
          }
        }
      }
    }
  }
  else if ((equal(v_scope, NAMSTR(s_ss1e45a0db, "root")) || equal(v_scope, NAMSTR(s_ssb61b5296, "global")))) {
    {
      v_scope_ptr.assignVal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssa9853128, "data"), true));
      LOOP_COUNTER(1);
      {
        while (true) {
          {
            if (!(v_scope_ptr.o_isset(NAMSTR(s_ssfb10fd8c, "parent"), s_class_name))) break;
          }
          LOOP_COUNTER_CHECK(1);
          {
            {
              LINE(261,0);
              const Variant &tmp0((v_scope_ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
              v_scope_ptr.assignVal(tmp0);
            }
          }
        }
      }
    }
  }
  v__config_vars = s_sa00000000;
  {
    LINE(265,0);
    const String &tmp0((toString(t_getcompiledfilepath())));
    include(tmp0, false, variables, "Smarty/libs/sysplugins/");
  }
  {
    LOOP_COUNTER(2);
    Variant map3 = LINE(267,(v__config_vars.rvalAt(NAMSTR(s_ss0f30800a, "vars"), AccessFlags::Error_Key)));
    for (ArrayIter iter4 = map3.begin(s_class_name, true); !iter4.end(); iter4.next()) {
      LOOP_COUNTER_CHECK(2);
      iter4.second(v_value);
      v_variable.assignVal(iter4.first());
      {
        {
          bool tmp0;
          {
            bool tmp1 = (LINE(268,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss485ef447, "config_overwrite"), true)))));
            if (!tmp1) {
              tmp1 = (!(isset(v_scope_ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), false), v_variable)));
            }
            tmp0 = (tmp1);
          }
          if (tmp0) {
            {
              {
                Variant tmp0((v_value));
                LINE(269,(v_scope_ptr.o_lval(NAMSTR(s_ss4fdfffb6, "config_vars"), tmp_ref, s_class_name))).set(v_variable, (tmp0));
                tmp_ref.unset();
              }
            }
          }
          else {
            {
              {
                LINE(271,0);
                const Array &tmp0((toArray(v_scope_ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true).rvalAt(v_variable, AccessFlags::Error))));
                const Variant &tmp1((x_array_merge(2, VarNR((tmp0)), Array(array_createvi(1, toVPOD(VarNR((toArray(v_value)))))))));
                v_scope_ptr.o_lval(NAMSTR(s_ss4fdfffb6, "config_vars"), tmp_ref, s_class_name).set(v_variable, (tmp1));
                tmp_ref.unset();
              }
            }
          }
        }
      }
    }
  }
  if (!(empty(v_sections))) {
    {
      {
        LOOP_COUNTER(5);
        Variant map6 = LINE(276,(v__config_vars.rvalAt(NAMSTR(s_ss54c42a48, "sections"), AccessFlags::Error_Key)));
        for (ArrayIter iter7 = map6.begin(s_class_name, true); !iter7.end(); iter7.next()) {
          LOOP_COUNTER_CHECK(5);
          iter7.second(v_dummy);
          v_this_section.assignVal(iter7.first());
          {
            if (LINE(277,(x_in_array(v_this_section, VarNR((toArray(v_sections))))))) {
              {
                {
                  LOOP_COUNTER(8);
                  Variant map9;
                  {
                    map9 = LINE(278,(v__config_vars.rvalRef(NAMSTR(s_ss54c42a48, "sections"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_this_section, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss0f30800a, "vars"), AccessFlags::Error_Key)));
                    tmp_ref.unset();
                  }
                  for (ArrayIter iter10 = map9.begin(s_class_name, true); !iter10.end(); iter10.next()) {
                    LOOP_COUNTER_CHECK(8);
                    iter10.second(v_value);
                    v_variable.assignVal(iter10.first());
                    {
                      {
                        bool tmp0;
                        {
                          bool tmp1 = (LINE(279,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss485ef447, "config_overwrite"), true)))));
                          if (!tmp1) {
                            tmp1 = (!(isset(v_scope_ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), false), v_variable)));
                          }
                          tmp0 = (tmp1);
                        }
                        if (tmp0) {
                          {
                            {
                              Variant tmp0((v_value));
                              LINE(280,(v_scope_ptr.o_lval(NAMSTR(s_ss4fdfffb6, "config_vars"), tmp_ref, s_class_name))).set(v_variable, (tmp0));
                              tmp_ref.unset();
                            }
                          }
                        }
                        else {
                          {
                            {
                              LINE(282,0);
                              const Array &tmp0((toArray(v_scope_ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true).rvalAt(v_variable, AccessFlags::Error))));
                              const Variant &tmp1((x_array_merge(2, VarNR((tmp0)), Array(array_createvi(1, toVPOD(VarNR((toArray(v_value)))))))));
                              v_scope_ptr.o_lval(NAMSTR(s_ss4fdfffb6, "config_vars"), tmp_ref, s_class_name).set(v_variable, (tmp1));
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
    }
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Config() {
  return NEWOBJ(c_Smarty_Internal_Config)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_config_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_config.php, pm_php$Smarty$libs$sysplugins$smarty_internal_config_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_config) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_config_file_compiler.php line 17 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Config_File_Compiler)
const InstanceOfInfo c_Smarty_Internal_Config_File_Compiler::s_instanceof_table[] = {
  {0x5007B7D877C1C287LL,1,"Smarty_Internal_Config_File_Compiler",&cw_Smarty_Internal_Config_File_Compiler},
};
const int c_Smarty_Internal_Config_File_Compiler::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Config_File_Compiler::ci_compilesource((void*)&c_Smarty_Internal_Config_File_Compiler::i_compilesource, (void*)&c_Smarty_Internal_Config_File_Compiler::ifa_compilesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config_File_Compiler::ci_trigger_config_file_error((void*)&c_Smarty_Internal_Config_File_Compiler::i_trigger_config_file_error, (void*)&c_Smarty_Internal_Config_File_Compiler::ifa_trigger_config_file_error, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Config_File_Compiler::ci___construct((void*)&c_Smarty_Internal_Config_File_Compiler::i___construct, (void*)&c_Smarty_Internal_Config_File_Compiler::ifa___construct, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Config_File_Compiler::i_compilesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compilesource, coo_Smarty_Internal_Config_File_Compiler);
  }
  c_Smarty_Internal_Config_File_Compiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config_File_Compiler*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Config_File_Compiler::compileSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_compilesource(arg0));
  }
}
Variant c_Smarty_Internal_Config_File_Compiler::i_trigger_config_file_error(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_trigger_config_file_error, coo_Smarty_Internal_Config_File_Compiler);
  }
  c_Smarty_Internal_Config_File_Compiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config_File_Compiler*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_trigger_config_file_error(arg0), null);
  }
}
Variant c_Smarty_Internal_Config_File_Compiler::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Config_File_Compiler);
  }
  c_Smarty_Internal_Config_File_Compiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config_File_Compiler*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Config_File_Compiler::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Config_File_Compiler::ifa_compilesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compilesource, coo_Smarty_Internal_Config_File_Compiler);
  }
  c_Smarty_Internal_Config_File_Compiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config_File_Compiler*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Config_File_Compiler::compileSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_compilesource(arg0));
}
Variant c_Smarty_Internal_Config_File_Compiler::ifa_trigger_config_file_error(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_trigger_config_file_error, coo_Smarty_Internal_Config_File_Compiler);
  }
  c_Smarty_Internal_Config_File_Compiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config_File_Compiler*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_trigger_config_file_error(arg0), null);
}
Variant c_Smarty_Internal_Config_File_Compiler::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Config_File_Compiler);
  }
  c_Smarty_Internal_Config_File_Compiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Config_File_Compiler*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Config_File_Compiler::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
const MethodCallInfoTable c_Smarty_Internal_Config_File_Compiler::s_call_info_table[] = {
  { 0x644CA5CB10F248A8LL, 1, 13, "compileSource", &c_Smarty_Internal_Config_File_Compiler::ci_compilesource },
  { 0x561F5939CADCFC40LL, 0, 25, "trigger_config_file_error", &c_Smarty_Internal_Config_File_Compiler::ci_trigger_config_file_error },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Config_File_Compiler::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Config_File_Compiler::s_call_info_index[] = {
  7,
  0,-1,-1,-1,-1,-1,-1,2,

};
c_Smarty_Internal_Config_File_Compiler *c_Smarty_Internal_Config_File_Compiler::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Config_File_Compiler = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Config_File_Compiler,
  c_Smarty_Internal_Config_File_Compiler::s_call_info_table,c_Smarty_Internal_Config_File_Compiler::s_call_info_index,
  c_Smarty_Internal_Config_File_Compiler::s_instanceof_table,c_Smarty_Internal_Config_File_Compiler::s_instanceof_index,
  &c_Smarty_Internal_Config_File_Compiler::s_class_name,
  0,&c_Smarty_Internal_Config_File_Compiler::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_config_file_compiler.php line 21 */
void c_Smarty_Internal_Config_File_Compiler::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config_File_Compiler, Smarty_Internal_Config_File_Compiler::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Config_File_Compiler::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  {
    LINE(25,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsd4333d3e, "Smarty_Internal_Configfilelexer"));
  }
  {
    LINE(26,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs9c6f005b, "Smarty_Internal_Configfileparser"));
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ssacf6d578, "config_data"), tmp_ref, s_class_name).set(NAMSTR(s_ss54c42a48, "sections"), (s_sva00000000), true);
    tmp_ref.unset();
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ssacf6d578, "config_data"), tmp_ref, s_class_name).set(NAMSTR(s_ss0f30800a, "vars"), (s_sva00000000), true);
    tmp_ref.unset();
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config_file_compiler.php line 37 */
Variant c_Smarty_Internal_Config_File_Compiler::t_compilesource(Variant v_config) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config_File_Compiler, Smarty_Internal_Config_File_Compiler::compileSource);
  INTERCEPT_INJECTION("Smarty_Internal_Config_File_Compiler::compileSource", array_createvi(1, toVPOD(v_config)), r);
  String v__content;
  p_Smarty_Internal_Configfilelexer v_lex;
  p_Smarty_Internal_Configfileparser v_parser;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss80368269, "config"), v_config);
  {
    LINE(44,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v_config;
    mcp0.methodCall((obj0), NAMSTR(s_ss8c250f23, "getConfigSource"), 0x1DAF501B5224184ELL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
    v__content = concat(tmp1, NAMSTR(s_ss66d2232c, "\n"));
  }
  if (equal(v__content, NAMSTR(s_ss00000000, ""))) {
    {
      return true;
    }
  }
  {
    p_Smarty_Internal_Configfilelexer tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssd4333d3e, "Smarty_Internal_Configfilelexer"), &g->CDEC(smarty_internal_configfilelexer))), (coo_Smarty_Internal_Configfilelexer()));
    ((c_Smarty_Internal_Configfilelexer*)tmp0.get()->create(v__content, GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    v_lex = tmp0;
  }
  {
    p_Smarty_Internal_Configfileparser tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (coo_Smarty_Internal_Configfileparser()));
    ((c_Smarty_Internal_Configfileparser*)tmp0.get()->create(v_lex, GET_THIS_TYPED(Smarty_Internal_Config_File_Compiler)));
    v_parser = tmp0;
  }
  {
    bool tmp0;
    {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_isset(NAMSTR(s_ss6c7f1ddc, "_parserdebug"), s_class_name));
    }
    if (tmp0) {
      LINE(52,(v_parser-> BIND_CLASS_ARROW(Smarty_Internal_Configfileparser) t_printtrace()));
    }
  }
  LOOP_COUNTER(1);
  {
    while (LINE(54,(toBoolean(v_lex->t_yylex())))) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_isset(NAMSTR(s_ss6c7f1ddc, "_parserdebug"), s_class_name));
          }
          if (tmp0) {
            {
              StringBuffer tmp0_buf;
              tmp0_buf.appendWithTaint("<br>Parsing  ", 13);
              tmp0_buf.appendWithTaint(LINE(55,(toString(v_parser->m_yyTokenName.rvalAt(v_lex->m_token, AccessFlags::Error)))));
              tmp0_buf.appendWithTaint(" Token ", 7);
              tmp0_buf.appendWithTaint(toString(v_lex->m_value));
              tmp0_buf.appendWithTaint(" Line ", 6);
              tmp0_buf.appendWithTaint(toString(v_lex->m_line));
              tmp0_buf.appendWithTaint(" \n", 2);
              CStrRef tmp0(tmp0_buf.detachWithTaint());
              echo(tmp0);
            }
          }
        }
        LINE(56,(v_parser->t_doparse(v_lex->m_token, v_lex->m_value)));
      }
    }
  }
  LINE(59,(v_parser->t_doparse(0LL, NAMVAR(s_svif01bca90, 0LL))));
  {
    LINE(60,0);
    const String &tmp0((toString(x_var_export(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssacf6d578, "config_data"), true), true))));
    v_config.o_setPublic(NAMSTR(s_ss47ab7340, "compiled_config"), concat3(NAMSTR(s_ssbb8c52a1, "<\?php $_config_vars = "), tmp0, NAMSTR(s_ssb81ea399, "; \?>")));
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_config_file_compiler.php line 73 */
void c_Smarty_Internal_Config_File_Compiler::t_trigger_config_file_error(CVarRef v_args //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Config_File_Compiler, Smarty_Internal_Config_File_Compiler::trigger_config_file_error);
  INTERCEPT_INJECTION("Smarty_Internal_Config_File_Compiler::trigger_config_file_error", array_createvi(1, toVPOD(v_args)), );
  Variant v_line;
  Variant v_match;
  String v_error_text;
  Variant v_token;
  Variant v_exp_token;
  Array v_expect;

  Variant tmp_ref;
  {
    LINE(75,0);
    Variant tmp0((((checkClassExistsThrow(NAMSTR(s_ssd4333d3e, "Smarty_Internal_Configfilelexer"), &g->CDEC(smarty_internal_configfilelexer))), (c_Smarty_Internal_Configfilelexer::t_instance()))));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss685ba94d, "lex"), tmp0);
  }
  {
    LINE(76,0);
    Variant tmp0((((checkClassExistsThrow(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser"), &g->CDEC(smarty_internal_configfileparser))), (c_Smarty_Internal_Configfileparser::t_instance()))));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss1d4f2d02, "parser"), tmp0);
  }
  {
    LINE(78,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssddf8728c, "line"), true)));
    v_line.assignVal(tmp0);
  }
  {
    LINE(82,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssa9853128, "data"), true)));
    const Variant &tmp1((x_preg_split(NAMVAR(s_svs7b750a0e, "/\n/"), tmp0)));
    v_match.assignVal(tmp1);
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("Syntax error in config file '", 29);
    LINE(83,0);
    MethodCallPackage mcp1;
    CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss80368269, "config"), true);
    mcp1.methodCall((obj1), NAMSTR(s_ssfc7ac2bf, "getConfigFilepath"), 0x28D74DCCA116CA19LL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    tmp0_buf.appendWithTaint(toString((mcp1.ci->getMeth0Args())(mcp1, 0)));
    tmp0_buf.appendWithTaint("' on line ", 10);
    tmp0_buf.appendWithTaint(toString(v_line));
    tmp0_buf.appendWithTaint(" '", 2);
    tmp0_buf.appendWithTaint(toString(v_match.rvalAt((v_line - 1LL), AccessFlags::Error)));
    tmp0_buf.appendWithTaint("' ", 2);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    v_error_text = tmp0;
  }
  if (isset(v_args)) {
    {
      concat_assign(v_error_text, toString(v_args));
    }
  }
  else {
    {
      {
        LOOP_COUNTER(1);
        Variant map2;
        {
          LINE(89,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss08412d18, "yy_get_expected_tokens"), 0x14C123EE690E20FFLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ssacc538af, "yymajor"), true)));
          map2 = (mcp0.ci->getMeth1Args())(mcp0, 1, tmp1);
        }
        for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_token);
          {
            {
              LINE(90,0);
              const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss7f9b58ad, "yyTokenName"), true).rvalAt(v_token, AccessFlags::Error)));
              v_exp_token.assignVal(tmp0);
            }
            {
              bool tmp0;
              {
                tmp0 = (isset(LINE(91,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), false).o_getPublic(NAMSTR(s_ssa8d8e9bb, "smarty_token_names"), false))), v_exp_token));
              }
              if (tmp0) {
                {
                  {
                    LINE(93,0);
                    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssa8d8e9bb, "smarty_token_names"), true).rvalAt(v_exp_token, AccessFlags::Error))));
                    v_expect.append((VarNR(concat3(NAMSTR(s_ss7e5fc106, "\""), tmp0, NAMSTR(s_ss7e5fc106, "\"")))));
                  }
                }
              }
              else {
                {
                  {
                    LINE(96,0);
                    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss7f9b58ad, "yyTokenName"), true).rvalAt(v_token, AccessFlags::Error)));
                    v_expect.append((tmp0));
                  }
                }
              }
            }
          }
        }
      }
      {
        LINE(100,0);
        const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
        const String &tmp1((x_implode(NAMVAR(s_svs5f22f60a, " , "), VarNR(v_expect))));
        concat_assign(v_error_text, concat4(NAMSTR(s_ss53babf54, " - Unexpected \""), tmp0, NAMSTR(s_ssaa4b8dac, "\", expected one of: "), tmp1));
      }
    }
  }
  {
    p_SmartyCompilerException tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss9d2ea485, "SmartyCompilerException"), &g->CDEC(smartycompilerexception))), (coo_SmartyCompilerException()));
    throw_exception(LINE(102,(((c_SmartyCompilerException*)tmp0.get()->create(VarNR(v_error_text)), tmp0))));
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Config_File_Compiler() {
  return NEWOBJ(c_Smarty_Internal_Config_File_Compiler)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_config_file_compiler.php, pm_php$Smarty$libs$sysplugins$smarty_internal_config_file_compiler_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_config_file_compiler) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva00000000,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x20193A3489C3AD3BLL,0,0,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Config___config_objects),&NAMSTR(s_ss199bf929, "config_objects") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Config hash
  -1,-1,-1,-1,0,-1,-1,-1,
  // Smarty_Internal_Config lists
  -1,
  -1,
  -1,
  1,0,};
const ClassPropTable c_Smarty_Internal_Config::os_prop_table = {
  -1,-1,7,0,-1,-1,1,0,
  cpt_hash_entries+8,0,cpt_table_entries+0,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_Smarty_Internal_Config::os_prop_table, cpt_hash_entries+11);

///////////////////////////////////////////////////////////////////////////////
}
