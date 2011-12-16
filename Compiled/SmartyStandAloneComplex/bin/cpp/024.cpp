
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_registered.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_registered.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_stream.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_stream.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_string.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_string.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.php.df_lambda.nophp.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.php.df_lambda.nophp.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_parsetree.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Resource_Registered)
const InstanceOfInfo c_Smarty_Internal_Resource_Registered::s_instanceof_table[] = {
  {0x3BED92FE6ECEF6E2LL,1,"Smarty_Internal_Resource_Registered",&cw_Smarty_Internal_Resource_Registered},
};
const int c_Smarty_Internal_Resource_Registered::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Resource_Registered::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Resource_Registered::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Resource_Registered::ifa_getcompiledfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Registered::ci_gettemplatesource((void*)&c_Smarty_Internal_Resource_Registered::i_gettemplatesource, (void*)&c_Smarty_Internal_Resource_Registered::ifa_gettemplatesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Registered::ci___construct((void*)&c_Smarty_Internal_Resource_Registered::i___construct, (void*)&c_Smarty_Internal_Resource_Registered::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Registered::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Resource_Registered::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Resource_Registered::ifa_gettemplatetimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Registered::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Resource_Registered::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Resource_Registered::ifa_gettemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Registered::ci_isexisting((void*)&c_Smarty_Internal_Resource_Registered::i_isexisting, (void*)&c_Smarty_Internal_Resource_Registered::ifa_isexisting, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Registered::ci_gettemplatetimestamptypename((void*)&c_Smarty_Internal_Resource_Registered::i_gettemplatetimestamptypename, (void*)&c_Smarty_Internal_Resource_Registered::ifa_gettemplatetimestamptypename, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Resource_Registered::i_getcompiledfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcompiledfilepath, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getCompiledFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcompiledfilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Registered::i_gettemplatesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatesource, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatesource(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Registered::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Resource_Registered::i_gettemplatetimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamp, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatetimestamp(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Registered::i_gettemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatefilepath, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Registered::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::isExisting", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Registered::i_gettemplatetimestamptypename(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamptypename, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateTimestampTypeName", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_gettemplatetimestamptypename(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Resource_Registered::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getCompiledFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcompiledfilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Registered::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatesource(arg0));
}
Variant c_Smarty_Internal_Resource_Registered::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_Smarty_Internal_Resource_Registered::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatetimestamp(arg0));
}
Variant c_Smarty_Internal_Resource_Registered::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Registered::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Registered::isExisting", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_isexisting(arg0));
}
Variant c_Smarty_Internal_Resource_Registered::ifa_gettemplatetimestamptypename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamptypename, coo_Smarty_Internal_Resource_Registered);
  }
  c_Smarty_Internal_Resource_Registered *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Registered*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Resource_Registered::getTemplateTimestampTypeName", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_gettemplatetimestamptypename(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Resource_Registered::s_call_info_table[] = {
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Resource_Registered::ci_gettemplatesource },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Resource_Registered::ci_getcompiledfilepath },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Resource_Registered::ci_gettemplatefilepath },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Resource_Registered::ci_isexisting },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Resource_Registered::ci_gettemplatetimestamp },
  { 0x341F6186B060A8CELL, 1, 28, "getTemplateTimestampTypeName", &c_Smarty_Internal_Resource_Registered::ci_gettemplatetimestamptypename },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Resource_Registered::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Resource_Registered::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,1,-1,-1,
  2,3,-1,-1,4,-1,5,6,

};
c_Smarty_Internal_Resource_Registered *c_Smarty_Internal_Resource_Registered::create(CVarRef v_template, CVarRef v_resource_type //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_template, v_resource_type);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Registered = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Resource_Registered,
  c_Smarty_Internal_Resource_Registered::s_call_info_table,c_Smarty_Internal_Resource_Registered::s_call_info_index,
  c_Smarty_Internal_Resource_Registered::s_instanceof_table,c_Smarty_Internal_Resource_Registered::s_instanceof_index,
  &c_Smarty_Internal_Resource_Registered::s_class_name,
  &c_Smarty_Internal_Resource_Registered::os_prop_table,&c_Smarty_Internal_Resource_Registered::ci___construct,0,0
};
void c_Smarty_Internal_Resource_Registered::init() {
  m_compiler_class = NAMSTR(s_ss4b77f454, "Smarty_Internal_SmartyTemplateCompiler");
  m_template_lexer_class = NAMSTR(s_ss86ff4809, "Smarty_Internal_Templatelexer");
  m_template_parser_class = NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser");
  m_usesCompiler = true;
  m_isEvaluated = false;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 17 */
void c_Smarty_Internal_Resource_Registered::t___construct(Variant v_template, Variant v_resource_type //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Registered::__construct", array_createvi(2, toVPOD(v_template), toVPOD(v_resource_type)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  {
    LINE(19,0);
    const Variant &tmp0((v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  if (isset(v_resource_type)) {
    {
      {
        LINE(25,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = LINE(21,(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
        mcp0.methodCall((obj0), NAMSTR(s_ss5816b3db, "registerResource"), 0x2DBDD788B131DAD0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        LINE(25,((mcp0.ci->getMeth2Args())(mcp0, 2, v_resource_type, VarNR(Array(array_createvi(4, toVPOD(VarNR(concat3(NAMSTR(s_ssbc736acb, "smarty_resource_"), toString(v_resource_type), NAMSTR(s_ssd3427717, "_source")))), toVPOD(VarNR(concat3(NAMSTR(s_ssbc736acb, "smarty_resource_"), toString(v_resource_type), NAMSTR(s_ss974682a1, "_timestamp")))), toVPOD(VarNR(concat3(NAMSTR(s_ssbc736acb, "smarty_resource_"), toString(v_resource_type), NAMSTR(s_ss7b022567, "_secure")))), toVPOD(VarNR(concat3(NAMSTR(s_ssbc736acb, "smarty_resource_"), toString(v_resource_type), NAMSTR(s_ss30ebd802, "_trusted"))))))))));
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 41 */
Variant c_Smarty_Internal_Resource_Registered::t_isexisting(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Registered::isExisting", array_createvi(1, toVPOD(v__template)), r);
  {
    bool tmp0;
    {
      LINE(43,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__template;
      mcp1.methodCall((obj1), NAMSTR(s_ss253f375d, "getTemplateTimestamp"), 0x7D66A266AA69AA4CLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (x_is_integer((mcp1.ci->getMeth0Args())(mcp1, 0)));
    }
    if (tmp0) {
      {
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 55 */
String c_Smarty_Internal_Resource_Registered::t_gettemplatefilepath(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Registered::getTemplateFilepath", array_createvi(1, toVPOD(v__template)), r);
  String v__filepath;

  Variant tmp_ref;
  {
    LINE(57,0);
    const String &tmp0((toString(v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true))));
    const String &tmp1((toString(v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
    v__filepath = concat3(tmp0, NAMSTR(s_ssdb381ae8, ":"), tmp1);
  }
  {
    LINE(58,0);
    const String &tmp0((x_sha1(v__filepath)));
    v__template.o_setPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), tmp0);
  }
  return v__filepath;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 68 */
Variant c_Smarty_Internal_Resource_Registered::t_gettemplatetimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Registered::getTemplateTimestamp", array_createvi(1, toVPOD(v__template)), r);
  Variant v_time_stamp;

  Variant tmp_ref;
  v_time_stamp = false;
  {
    LINE(72,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssaa1d58ac, "registered_resources"), true).rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error)));
    ArrayInit tmp2(3);
    LINE(73,0);
    const Variant &tmp3((v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true)));
    tmp2.set(tmp3);
    tmp2.setRef(v_time_stamp);
    tmp2.set(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true));
    const Array &tmp4((Array(tmp2)));
    x_call_user_func_array(tmp1, tmp4);
    tmp_ref.unset();
  }
  return (x_is_numeric(v_time_stamp) ? ((Variant)((toInt64(v_time_stamp)))) : ((Variant)(v_time_stamp)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 83 */
Variant c_Smarty_Internal_Resource_Registered::t_gettemplatetimestamptypename(CVarRef v__resource_type, CVarRef v__resource_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered::getTemplateTimestampTypeName);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Registered::getTemplateTimestampTypeName", array_createvi(2, toVPOD(v__resource_type), toVPOD(v__resource_name)), r);
  Variant v_time_stamp;

  Variant tmp_ref;
  v_time_stamp = false;
  {
    LINE(87,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssaa1d58ac, "registered_resources"), true).rvalRef(v__resource_type, tmp_ref, AccessFlags::Error).rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error)));
    LINE(88,(x_call_user_func_array(tmp0, Array(ArrayInit(3).set(v__resource_name).setRef(v_time_stamp).set(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)).create()))));
    tmp_ref.unset();
  }
  return (x_is_numeric(v_time_stamp) ? ((Variant)((toInt64(v_time_stamp)))) : ((Variant)(v_time_stamp)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 98 */
Variant c_Smarty_Internal_Resource_Registered::t_gettemplatesource(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Registered::getTemplateSource", array_createvi(1, toVPOD(v__template)), r);
  Variant tmp_ref;
  {
    LINE(101,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssaa1d58ac, "registered_resources"), true).rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
    ArrayInit tmp2(3);
    LINE(102,0);
    const Variant &tmp3((v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true)));
    tmp2.set(tmp3);
    tmp2.setRef(v__template.o_lval(NAMSTR(s_ss105c90e5, "template_source"), tmp_ref, s_class_name));
    tmp2.set(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true));
    const Array &tmp4((Array(tmp2)));
    return x_call_user_func_array(tmp1, tmp4);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_registered.php line 111 */
String c_Smarty_Internal_Resource_Registered::t_getcompiledfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Registered, Smarty_Internal_Resource_Registered::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Registered::getCompiledFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant v__compile_id;
  Variant v__filepath;
  Variant v__compile_dir_sep;
  String v__cache;
  Variant v__compile_dir;

  {
    Variant tmp0;
    if (v__template.o_isset(NAMSTR(s_ss962fc398, "compile_id"), s_class_name)) {
      LINE(113,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
      tmp0 = (x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), tmp1));
    } else {
      tmp0 = (null);
    }
    v__compile_id.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(115,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
      tmp0 = (equal(tmp1, NAMSTR(s_ss00000000, "")));
    }
    if (tmp0) {
      {
        {
          LINE(116,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__template;
          mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth0Args())(mcp0, 0);
        }
      }
    }
  }
  {
    LINE(118,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
    v__filepath.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(120,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))));
    }
    if (tmp0) {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint(LINE(121,(toString(x_substr(toString(v__filepath), toInt32(0LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(122,(toString(x_substr(toString(v__filepath), toInt32(2LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(123,(toString(x_substr(toString(v__filepath), toInt32(4LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(toString(v__filepath));
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          v__filepath = tmp0;
        }
      }
    }
  }
  {
    Variant tmp0(((LINE(126,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((Variant)(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))) : ((Variant)(NAMSTR(s_sscf94e648, "^"))))));
    v__compile_dir_sep.assignVal(tmp0);
  }
  if (isset(v__compile_id)) {
    {
      v__filepath = concat3(toString(v__compile_id), toString(v__compile_dir_sep), toString(v__filepath));
    }
  }
  if (LINE(130,(toBoolean(v__template.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))))) {
    {
      v__cache = NAMSTR(s_ss4a057f20, ".cache");
    }
  }
  else {
    {
      v__cache = NAMSTR(s_ss00000000, "");
    }
  }
  {
    LINE(135,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true)));
    v__compile_dir.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(136,0);
      const Variant &tmp1((x_substr(toString(v__compile_dir), toInt32(-1LL))));
      const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
      tmp0 = (same(tmp2, false));
    }
    if (tmp0) {
      {
        concat_assign(v__compile_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
      }
    }
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint(toString(v__compile_dir));
    tmp0_buf.appendWithTaint(toString(v__filepath));
    tmp0_buf.appendWithTaint(".", 1);
    tmp0_buf.appendWithTaint(LINE(139,(toString(v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true)))));
    tmp0_buf.appendWithTaint(".", 1);
    const String &tmp1((toString(v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
    tmp0_buf.appendWithTaint(x_basename(tmp1));
    tmp0_buf.appendWithTaint(v__cache);
    tmp0_buf.appendWithTaint(".php", 4);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Resource_Registered() {
  return NEWOBJ(c_Smarty_Internal_Resource_Registered)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_resource_registered.php, pm_php$Smarty$libs$sysplugins$smarty_internal_resource_registered_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_resource_registered) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Resource_Stream)
const InstanceOfInfo c_Smarty_Internal_Resource_Stream::s_instanceof_table[] = {
  {0x46BB91AF0FE2CD59LL,1,"Smarty_Internal_Resource_Stream",&cw_Smarty_Internal_Resource_Stream},
};
const int c_Smarty_Internal_Resource_Stream::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Resource_Stream::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Resource_Stream::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Resource_Stream::ifa_getcompiledfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Stream::ci_gettemplatesource((void*)&c_Smarty_Internal_Resource_Stream::i_gettemplatesource, (void*)&c_Smarty_Internal_Resource_Stream::ifa_gettemplatesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Stream::ci___construct((void*)&c_Smarty_Internal_Resource_Stream::i___construct, (void*)&c_Smarty_Internal_Resource_Stream::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Stream::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Resource_Stream::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Resource_Stream::ifa_gettemplatetimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Stream::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Resource_Stream::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Resource_Stream::ifa_gettemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Stream::ci_isexisting((void*)&c_Smarty_Internal_Resource_Stream::i_isexisting, (void*)&c_Smarty_Internal_Resource_Stream::ifa_isexisting, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Resource_Stream::i_getcompiledfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcompiledfilepath, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getCompiledFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcompiledfilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Stream::i_gettemplatesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatesource, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getTemplateSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatesource(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Stream::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Resource_Stream::i_gettemplatetimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamp, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getTemplateTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatetimestamp(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Stream::i_gettemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatefilepath, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getTemplateFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Stream::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::isExisting", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Stream::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getCompiledFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcompiledfilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Stream::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getTemplateSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatesource(arg0));
}
Variant c_Smarty_Internal_Resource_Stream::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Resource_Stream::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getTemplateTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatetimestamp(arg0));
}
Variant c_Smarty_Internal_Resource_Stream::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::getTemplateFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Stream::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Resource_Stream);
  }
  c_Smarty_Internal_Resource_Stream *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Stream*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Stream::isExisting", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_isexisting(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Resource_Stream::s_call_info_table[] = {
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Resource_Stream::ci_gettemplatesource },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Resource_Stream::ci_getcompiledfilepath },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Resource_Stream::ci_gettemplatefilepath },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Resource_Stream::ci_isexisting },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Resource_Stream::ci_gettemplatetimestamp },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Resource_Stream::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Resource_Stream::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,1,-1,-1,
  2,3,-1,-1,4,-1,-1,5,

};
c_Smarty_Internal_Resource_Stream *c_Smarty_Internal_Resource_Stream::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Stream = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Resource_Stream,
  c_Smarty_Internal_Resource_Stream::s_call_info_table,c_Smarty_Internal_Resource_Stream::s_call_info_index,
  c_Smarty_Internal_Resource_Stream::s_instanceof_table,c_Smarty_Internal_Resource_Stream::s_instanceof_index,
  &c_Smarty_Internal_Resource_Stream::s_class_name,
  &c_Smarty_Internal_Resource_Stream::os_prop_table,&c_Smarty_Internal_Resource_Stream::ci___construct,0,0
};
void c_Smarty_Internal_Resource_Stream::init() {
  m_compiler_class = NAMSTR(s_ss4b77f454, "Smarty_Internal_SmartyTemplateCompiler");
  m_template_lexer_class = NAMSTR(s_ss86ff4809, "Smarty_Internal_Templatelexer");
  m_template_parser_class = NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser");
  m_usesCompiler = true;
  m_isEvaluated = true;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 17 */
void c_Smarty_Internal_Resource_Stream::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Stream, Smarty_Internal_Resource_Stream::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Stream::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 34 */
Variant c_Smarty_Internal_Resource_Stream::t_isexisting(CVarRef v_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Stream, Smarty_Internal_Resource_Stream::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Stream::isExisting", array_createvi(1, toVPOD(v_template)), r);
  {
    bool tmp0;
    {
      LINE(36,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v_template;
      mcp1.methodCall((obj1), NAMSTR(s_ss2f523486, "getTemplateSource"), 0x2119F0DDD5901F20LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (equal((mcp1.ci->getMeth0Args())(mcp1, 0), NAMSTR(s_ss00000000, "")));
    }
    if (tmp0) {
      {
        return false;
      }
    }
    else {
      {
        return true;
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 48 */
Variant c_Smarty_Internal_Resource_Stream::t_gettemplatefilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Stream, Smarty_Internal_Resource_Stream::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Stream::getTemplateFilepath", array_createvi(1, toVPOD(v__template)), r);
  {
    LINE(52,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss11a5bbab, "template_resource"), true)));
    return x_str_replace(NAMVAR(s_svsdb381ae8, ":"), NAMVAR(s_svs740e57ec, "://"), tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 61 */
bool c_Smarty_Internal_Resource_Stream::t_gettemplatetimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Stream, Smarty_Internal_Resource_Stream::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Stream::getTemplateTimestamp", array_createvi(1, toVPOD(v__template)), r);
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 73 */
Variant c_Smarty_Internal_Resource_Stream::t_gettemplatesource(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Stream, Smarty_Internal_Resource_Stream::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Stream::getTemplateSource", array_createvi(1, toVPOD(v__template)), r);
  Variant v_fp;
  Variant v_current_line;

  Variant tmp_ref;
  v__template.o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), NAMSTR(s_ss00000000, ""));
  {
    bool tmp0;
    {
      LINE(77,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss11a5bbab, "template_resource"), true)));
      const String &tmp2((toString(x_str_replace(NAMVAR(s_svsdb381ae8, ":"), NAMVAR(s_svs740e57ec, "://"), tmp1))));
      const Variant &tmp3((x_fopen(tmp2, NAMSTR(s_ssc0096822, "r+"))));
      tmp0 = (toBoolean(v_fp.assignVal(tmp3)));
    }
    if (tmp0) {
      {
        LOOP_COUNTER(1);
        {
          while (true) {
            {
              LINE(78,0);
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
              {
                v__template.o_assign_op<void,273>(NAMSTR(s_ss105c90e5, "template_source"), toString(v_current_line), s_class_name);
              }
            }
          }
        }
        LINE(81,(x_fclose(toObject(v_fp))));
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 94 */
bool c_Smarty_Internal_Resource_Stream::t_getcompiledfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Stream, Smarty_Internal_Resource_Stream::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Stream::getCompiledFilepath", array_createvi(1, toVPOD(v__template)), r);
  return false;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Resource_Stream() {
  return NEWOBJ(c_Smarty_Internal_Resource_Stream)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_resource_stream.php, pm_php$Smarty$libs$sysplugins$smarty_internal_resource_stream_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_resource_stream) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Resource_String)
const InstanceOfInfo c_Smarty_Internal_Resource_String::s_instanceof_table[] = {
  {0x035854992C8DC588LL,1,"Smarty_Internal_Resource_String",&cw_Smarty_Internal_Resource_String},
};
const int c_Smarty_Internal_Resource_String::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Resource_String::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Resource_String::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Resource_String::ifa_getcompiledfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_String::ci_gettemplatesource((void*)&c_Smarty_Internal_Resource_String::i_gettemplatesource, (void*)&c_Smarty_Internal_Resource_String::ifa_gettemplatesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_String::ci___construct((void*)&c_Smarty_Internal_Resource_String::i___construct, (void*)&c_Smarty_Internal_Resource_String::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_String::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Resource_String::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Resource_String::ifa_gettemplatetimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_String::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Resource_String::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Resource_String::ifa_gettemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_String::ci_isexisting((void*)&c_Smarty_Internal_Resource_String::i_isexisting, (void*)&c_Smarty_Internal_Resource_String::ifa_isexisting, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_String::ci_gettemplatetimestamptypename((void*)&c_Smarty_Internal_Resource_String::i_gettemplatetimestamptypename, (void*)&c_Smarty_Internal_Resource_String::ifa_gettemplatetimestamptypename, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Resource_String::i_getcompiledfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcompiledfilepath, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getCompiledFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcompiledfilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_String::i_gettemplatesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatesource, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatesource(arg0));
  }
}
Variant c_Smarty_Internal_Resource_String::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Resource_String::i_gettemplatetimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamp, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatetimestamp(arg0));
  }
}
Variant c_Smarty_Internal_Resource_String::i_gettemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatefilepath, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_String::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::isExisting", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Resource_String::i_gettemplatetimestamptypename(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamptypename, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateTimestampTypeName", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_gettemplatetimestamptypename(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Resource_String::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getCompiledFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcompiledfilepath(arg0));
}
Variant c_Smarty_Internal_Resource_String::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatesource(arg0));
}
Variant c_Smarty_Internal_Resource_String::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Resource_String::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatetimestamp(arg0));
}
Variant c_Smarty_Internal_Resource_String::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Resource_String::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_String::isExisting", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_isexisting(arg0));
}
Variant c_Smarty_Internal_Resource_String::ifa_gettemplatetimestamptypename(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamptypename, coo_Smarty_Internal_Resource_String);
  }
  c_Smarty_Internal_Resource_String *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_String*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Resource_String::getTemplateTimestampTypeName", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_gettemplatetimestamptypename(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Resource_String::s_call_info_table[] = {
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Resource_String::ci_gettemplatesource },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Resource_String::ci_getcompiledfilepath },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Resource_String::ci_gettemplatefilepath },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Resource_String::ci_isexisting },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Resource_String::ci_gettemplatetimestamp },
  { 0x341F6186B060A8CELL, 1, 28, "getTemplateTimestampTypeName", &c_Smarty_Internal_Resource_String::ci_gettemplatetimestamptypename },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Resource_String::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Resource_String::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,1,-1,-1,
  2,3,-1,-1,4,-1,5,6,

};
c_Smarty_Internal_Resource_String *c_Smarty_Internal_Resource_String::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Resource_String = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Resource_String,
  c_Smarty_Internal_Resource_String::s_call_info_table,c_Smarty_Internal_Resource_String::s_call_info_index,
  c_Smarty_Internal_Resource_String::s_instanceof_table,c_Smarty_Internal_Resource_String::s_instanceof_index,
  &c_Smarty_Internal_Resource_String::s_class_name,
  &c_Smarty_Internal_Resource_String::os_prop_table,&c_Smarty_Internal_Resource_String::ci___construct,0,0
};
void c_Smarty_Internal_Resource_String::init() {
  m_compiler_class = NAMSTR(s_ss4b77f454, "Smarty_Internal_SmartyTemplateCompiler");
  m_template_lexer_class = NAMSTR(s_ss86ff4809, "Smarty_Internal_Templatelexer");
  m_template_parser_class = NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser");
  m_usesCompiler = true;
  m_isEvaluated = false;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 17 */
void c_Smarty_Internal_Resource_String::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_String::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 34 */
bool c_Smarty_Internal_Resource_String::t_isexisting(CVarRef v_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_String::isExisting", array_createvi(1, toVPOD(v_template)), r);
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 45 */
String c_Smarty_Internal_Resource_String::t_gettemplatefilepath(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_String::getTemplateFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant tmp_ref;
  {
    LINE(47,0);
    const String &tmp0((toString(v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
    const String &tmp1((x_sha1(tmp0)));
    v__template.o_setPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), tmp1);
  }
  return NAMSTR(s_sse4dd4236, "string:");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 59 */
Variant c_Smarty_Internal_Resource_String::t_gettemplatetimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_String::getTemplateTimestamp", array_createvi(1, toVPOD(v__template)), r);
  if (toBoolean(m_isEvaluated)) {
    {
      return false;
    }
  }
  else {
    {
      return 0LL;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 75 */
int64 c_Smarty_Internal_Resource_String::t_gettemplatetimestamptypename(CVarRef v__resource_type, CVarRef v__resource_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String::getTemplateTimestampTypeName);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_String::getTemplateTimestampTypeName", array_createvi(2, toVPOD(v__resource_type), toVPOD(v__resource_name)), r);
  return 0LL;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 88 */
bool c_Smarty_Internal_Resource_String::t_gettemplatesource(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_String::getTemplateSource", array_createvi(1, toVPOD(v__template)), r);
  Variant tmp_ref;
  {
    LINE(91,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true)));
    v__template.o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), tmp0);
  }
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_string.php line 101 */
String c_Smarty_Internal_Resource_String::t_getcompiledfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_String, Smarty_Internal_Resource_String::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_String::getCompiledFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant v__compile_id;
  Variant v__filepath;
  Variant v__compile_dir_sep;
  String v__cache;
  Variant v__compile_dir;

  {
    Variant tmp0;
    if (v__template.o_isset(NAMSTR(s_ss962fc398, "compile_id"), s_class_name)) {
      LINE(103,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
      tmp0 = (x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), tmp1));
    } else {
      tmp0 = (null);
    }
    v__compile_id.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(105,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
      tmp0 = (equal(tmp1, NAMSTR(s_ss00000000, "")));
    }
    if (tmp0) {
      {
        {
          LINE(106,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__template;
          mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth0Args())(mcp0, 0);
        }
      }
    }
  }
  {
    LINE(108,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
    v__filepath.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(110,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))));
    }
    if (tmp0) {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint(LINE(111,(toString(x_substr(toString(v__filepath), toInt32(0LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(112,(toString(x_substr(toString(v__filepath), toInt32(2LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(113,(toString(x_substr(toString(v__filepath), toInt32(4LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(toString(v__filepath));
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          v__filepath = tmp0;
        }
      }
    }
  }
  {
    Variant tmp0(((LINE(116,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((Variant)(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))) : ((Variant)(NAMSTR(s_sscf94e648, "^"))))));
    v__compile_dir_sep.assignVal(tmp0);
  }
  if (isset(v__compile_id)) {
    {
      v__filepath = concat3(toString(v__compile_id), toString(v__compile_dir_sep), toString(v__filepath));
    }
  }
  if (LINE(120,(toBoolean(v__template.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))))) {
    {
      v__cache = NAMSTR(s_ss4a057f20, ".cache");
    }
  }
  else {
    {
      v__cache = NAMSTR(s_ss00000000, "");
    }
  }
  {
    LINE(125,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true)));
    v__compile_dir.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(126,0);
      const Variant &tmp1((x_substr(toString(v__compile_dir), toInt32(-1LL))));
      const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
      tmp0 = (same(tmp2, false));
    }
    if (tmp0) {
      {
        concat_assign(v__compile_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
      }
    }
  }
  {
    const String &tmp0((toString(v__compile_dir)));
    const String &tmp1((toString(v__filepath)));
    LINE(129,0);
    const String &tmp2((toString(v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true))));
    String tmp3((v__cache));
    return concat6(tmp0, tmp1, NAMSTR(s_ss013a8f64, "."), tmp2, tmp3, NAMSTR(s_ss0fd031f1, ".php"));
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Resource_String() {
  return NEWOBJ(c_Smarty_Internal_Resource_String)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_resource_string.php, pm_php$Smarty$libs$sysplugins$smarty_internal_resource_string_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_resource_string) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.php line 18 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_SmartyTemplateCompiler)
const InstanceOfInfo c_Smarty_Internal_SmartyTemplateCompiler::s_instanceof_table[] = {
  {0x3DE67EAEED371F56LL,0,"Smarty_Internal_SmartyTemplateCompiler",&cw_Smarty_Internal_SmartyTemplateCompiler},
  {0x741052885B672C1ALL,1,"Smarty_Internal_TemplateCompilerBase",&cw_Smarty_Internal_TemplateCompilerBase},
};
const int c_Smarty_Internal_SmartyTemplateCompiler::s_instanceof_index[] = {
  3,
  -1,-1,0,-1,
};
CallInfo c_Smarty_Internal_SmartyTemplateCompiler::ci___construct((void*)&c_Smarty_Internal_SmartyTemplateCompiler::i___construct, (void*)&c_Smarty_Internal_SmartyTemplateCompiler::ifa___construct, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_SmartyTemplateCompiler::ci_docompile((void*)&c_Smarty_Internal_SmartyTemplateCompiler::i_docompile, (void*)&c_Smarty_Internal_SmartyTemplateCompiler::ifa_docompile, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_SmartyTemplateCompiler::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_SmartyTemplateCompiler);
  }
  c_Smarty_Internal_SmartyTemplateCompiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_SmartyTemplateCompiler*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_SmartyTemplateCompiler::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_SmartyTemplateCompiler::i_docompile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_docompile, coo_Smarty_Internal_SmartyTemplateCompiler);
  }
  c_Smarty_Internal_SmartyTemplateCompiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_SmartyTemplateCompiler*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_SmartyTemplateCompiler::doCompile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_docompile(arg0));
  }
}
Variant c_Smarty_Internal_SmartyTemplateCompiler::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_SmartyTemplateCompiler);
  }
  c_Smarty_Internal_SmartyTemplateCompiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_SmartyTemplateCompiler*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_SmartyTemplateCompiler::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t___construct(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_SmartyTemplateCompiler::ifa_docompile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_docompile, coo_Smarty_Internal_SmartyTemplateCompiler);
  }
  c_Smarty_Internal_SmartyTemplateCompiler *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_SmartyTemplateCompiler*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_SmartyTemplateCompiler::doCompile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_docompile(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_SmartyTemplateCompiler::s_call_info_table[] = {
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_SmartyTemplateCompiler::ci___construct },
  { 0x57E37E95FD9331AFLL, 0, 9, "doCompile", &c_Smarty_Internal_SmartyTemplateCompiler::ci_docompile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_SmartyTemplateCompiler::s_call_info_index[] = {
  3,
  -1,-1,-1,0,
};
c_Smarty_Internal_SmartyTemplateCompiler *c_Smarty_Internal_SmartyTemplateCompiler::create(CVarRef v_lexer_class, CVarRef v_parser_class, CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_lexer_class, v_parser_class, v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_SmartyTemplateCompiler = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_SmartyTemplateCompiler,
  c_Smarty_Internal_SmartyTemplateCompiler::s_call_info_table,c_Smarty_Internal_SmartyTemplateCompiler::s_call_info_index,
  c_Smarty_Internal_SmartyTemplateCompiler::s_instanceof_table,c_Smarty_Internal_SmartyTemplateCompiler::s_instanceof_index,
  &c_Smarty_Internal_SmartyTemplateCompiler::s_class_name,
  &c_Smarty_Internal_SmartyTemplateCompiler::os_prop_table,&c_Smarty_Internal_SmartyTemplateCompiler::ci___construct,0,&cw_Smarty_Internal_TemplateCompilerBase
};
void c_Smarty_Internal_SmartyTemplateCompiler::init() {
  c_Smarty_Internal_TemplateCompilerBase::init();
  m_local_var = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.php line 24 */
void c_Smarty_Internal_SmartyTemplateCompiler::t___construct(Variant v_lexer_class, Variant v_parser_class, Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_SmartyTemplateCompiler, Smarty_Internal_SmartyTemplateCompiler::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_SmartyTemplateCompiler::__construct", array_createvi(3, toVPOD(v_lexer_class), toVPOD(v_parser_class), toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  LINE(27,(c_Smarty_Internal_TemplateCompilerBase::t___construct()));
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_sseeabb4eb, "lexer_class"), v_lexer_class);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss8366d8d1, "parser_class"), v_parser_class);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.php line 39 */
Variant c_Smarty_Internal_SmartyTemplateCompiler::t_docompile(Variant v__content) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_SmartyTemplateCompiler, Smarty_Internal_SmartyTemplateCompiler::doCompile);
  INTERCEPT_INJECTION("Smarty_Internal_SmartyTemplateCompiler::doCompile", array_createvi(1, toVPOD(v__content)), r);
  Variant v__open_tag;
  Variant v__data;

  Variant tmp_ref;
  {
    Object obj1(create_object_only((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_sseeabb4eb, "lexer_class"), true)))));
    MethodCallPackage mcp0;
    mcp0.construct(obj1);
    const CallInfo *cit0 = mcp0.ci;
    (cit0->getMeth2Args())(mcp0, 2, v__content, GET_THIS_TYPED(Smarty_Internal_SmartyTemplateCompiler));
    LINE(45,0);
    const Object &tmp2((id(obj1)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss685ba94d, "lex"), tmp2);
  }
  {
    Object obj1(create_object_only((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss8366d8d1, "parser_class"), true)))));
    MethodCallPackage mcp0;
    mcp0.construct(obj1);
    const CallInfo *cit0 = mcp0.ci;
    const Variant &tmp2((GET_THIS_ARROW()o_argval(cit0->isRef(0), NAMSTR(s_ss685ba94d, "lex"), true, s_class_name)));
    (cit0->getMeth2Args())(mcp0, 2, tmp2, GET_THIS_TYPED(Smarty_Internal_SmartyTemplateCompiler));
    LINE(46,0);
    const Object &tmp3((id(obj1)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss1d4f2d02, "parser"), tmp3);
  }
  {
    bool tmp0;
    {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_isset(NAMSTR(s_ss6c7f1ddc, "_parserdebug"), s_class_name));
    }
    if (tmp0) {
      {
        LINE(47,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ssc72714ef, "PrintTrace"), 0x17E658BD51D7147BLL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
      }
    }
  }
  LOOP_COUNTER(1);
  {
    while (true) {
      {
        LINE(49,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss8eb2c1e2, "yylex"), 0x7B3DDFEA6BE7D2D1LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        if (!((toBoolean((mcp0.ci->getMeth0Args())(mcp0, 0)) && !(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssf7849b08, "abort_and_recompile"), true)))))) break;
      }
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
              tmp0_buf.appendWithTaint("<pre>Line ", 10);
              tmp0_buf.appendWithTaint(LINE(50,(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssddf8728c, "line"), true)))));
              tmp0_buf.appendWithTaint(" Parsing  ", 10);
              const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ss111a03e7, "token"), true)));
              tmp0_buf.appendWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss7f9b58ad, "yyTokenName"), true).rvalAt(tmp1, AccessFlags::Error)));
              tmp0_buf.appendWithTaint(" Token ", 7);
              const String &tmp2((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
              tmp0_buf.appendWithTaint(x_htmlentities(tmp2));
              tmp0_buf.appendWithTaint("</pre>", 6);
              CStrRef tmp0(tmp0_buf.detachWithTaint());
              echo(tmp0);
            }
          }
        }
        {
          LINE(51,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss08b7b25d, "doParse"), 0x48995E310AE71C9CLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ss111a03e7, "token"), true)));
          const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, tmp2);
        }
      }
    }
  }
  if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssf7849b08, "abort_and_recompile"), true))) {
    {
      return false;
    }
  }
  {
    LINE(59,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss08b7b25d, "doParse"), 0x48995E310AE71C9CLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svif01bca90, 0LL), NAMVAR(s_svif01bca90, 0LL));
  }
  {
    bool tmp0;
    {
      LINE(61,0);
      int tmp1((x_count(m__tag_stack)));
      tmp0 = (more(tmp1, 0LL));
    }
    if (tmp0) {
      {
        {
          LINE(63,0);
          CVarRef tmp0((x_array_pop(ref(m__tag_stack))));
          v__data = tmp0[1];
          v__open_tag = tmp0[0];
          ;
        }
        LINE(64,(t_trigger_template_error(VarNR(concat3(NAMSTR(s_ssd432d193, "unclosed {"), toString(v__open_tag), NAMSTR(s_ss6d2e603f, "} tag"))))));
      }
    }
  }
  return LINE(68,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss43ec3a0a, "retvalue"), true)));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_SmartyTemplateCompiler() {
  return NEWOBJ(c_Smarty_Internal_SmartyTemplateCompiler)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_smartytemplatecompiler.php, pm_php$Smarty$libs$sysplugins$smarty_internal_smartytemplatecompiler_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  LINE(13,(pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php(true, NULL, g)));
  g->CDEC(smarty_internal_smartytemplatecompiler) = true;
  checkClassExistsThrow(NAMSTR(s_ssc4f26d76, "Smarty_Internal_TemplateCompilerBase"), &g->CDEC(smarty_internal_templatecompilerbase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_1_df_lambda_2;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php.df_lambda line 2 */
String f_1_df_lambda_2(CVarRef v_c) {
  FUNCTION_INJECTION(1_df_lambda_2);
  INTERCEPT_INJECTION("1_df_lambda_2", array_createvi(1, toVPOD(v_c)), r);
  {
    LINE(2,0);
    const String &tmp0((toString(v_c.rvalAt(1LL, AccessFlags::Error))));
    const String &tmp1((x_strtolower(tmp0)));
    return concat(NAMSTR(s_ss7f06ffcd, "_"), tmp1);
  }
}
namespace hphp_impl_splitter {}
Variant i_1_df_lambda_2(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("1_df_lambda_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (f_1_df_lambda_2(arg0));
  }
}
Variant ifa_1_df_lambda_2(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("1_df_lambda_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (f_1_df_lambda_2(arg0));
}
CallInfo ci_1_df_lambda_2((void*)&i_1_df_lambda_2, (void*)&ifa_1_df_lambda_2, 1, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_template.php.df_lambda, pm_php$Smarty$libs$sysplugins$smarty_internal_template_php_df_lambda);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss5c56c384, "1_df_lambda_2"));
  g->FVF(1_df_lambda_2) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svs86ff4809, "Smarty_Internal_Templatelexer"),
  (int64)&true_varNR,
  (int64)&NAMVAR(s_svs351e8449, "Smarty_Internal_Templateparser"),
  (int64)&NAMVAR(s_svs4b77f454, "Smarty_Internal_SmartyTemplateCompiler"),
  (int64)&false_varNR,
  (int64)&s_sva00000000,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x665F37482FC22180LL,2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Registered, m_template_lexer_class),&NAMSTR(s_ss69c65032, "template_lexer_class") },
  {0x6751E4C91D40C031LL,3,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Registered, m_usesCompiler),&NAMSTR(s_ssa0f13ad5, "usesCompiler") },
  {0x74D6BE1FFE503573LL,-1,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Registered, m_template_parser_class),&NAMSTR(s_ss2ae19e62, "template_parser_class") },
  {0x06141D64A6B64346LL,-3,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Registered, m_compiler_class),&NAMSTR(s_ss664736fa, "compiler_class") },
  {0x27F0C3DCA79078E9LL,0,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Registered, m_isEvaluated),&NAMSTR(s_ssee449446, "isEvaluated") },

  {0x665F37482FC22180LL,2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Stream, m_template_lexer_class),&NAMSTR(s_ss69c65032, "template_lexer_class") },
  {0x6751E4C91D40C031LL,3,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Stream, m_usesCompiler),&NAMSTR(s_ssa0f13ad5, "usesCompiler") },
  {0x74D6BE1FFE503573LL,-1,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Stream, m_template_parser_class),&NAMSTR(s_ss2ae19e62, "template_parser_class") },
  {0x06141D64A6B64346LL,-3,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Stream, m_compiler_class),&NAMSTR(s_ss664736fa, "compiler_class") },
  {0x27F0C3DCA79078E9LL,0,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Stream, m_isEvaluated),&NAMSTR(s_ssee449446, "isEvaluated") },

  {0x665F37482FC22180LL,2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_String, m_template_lexer_class),&NAMSTR(s_ss69c65032, "template_lexer_class") },
  {0x6751E4C91D40C031LL,3,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_String, m_usesCompiler),&NAMSTR(s_ssa0f13ad5, "usesCompiler") },
  {0x74D6BE1FFE503573LL,-1,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_String, m_template_parser_class),&NAMSTR(s_ss2ae19e62, "template_parser_class") },
  {0x06141D64A6B64346LL,-3,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_String, m_compiler_class),&NAMSTR(s_ss664736fa, "compiler_class") },
  {0x27F0C3DCA79078E9LL,0,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_String, m_isEvaluated),&NAMSTR(s_ssee449446, "isEvaluated") },

  {0x23A2DAF23EC5802FLL,0,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_SmartyTemplateCompiler, m_local_var),&NAMSTR(s_ssc587de67, "local_var") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Resource_Registered hash
  0,1,-1,2,-1,-1,3,-1,-1,4,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Resource_Registered lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Resource_Stream hash
  0,1,-1,2,-1,-1,3,-1,-1,4,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Resource_Stream lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Resource_String hash
  0,1,-1,2,-1,-1,3,-1,-1,4,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Resource_String lists
  -1,
  -1,
  -1,
  // Smarty_Internal_SmartyTemplateCompiler hash
  -1,-1,-1,-1,-1,-1,-1,0,
  // Smarty_Internal_SmartyTemplateCompiler lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Resource_Registered::os_prop_table = {
  15,3,-1,-1,-1,-1,17,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Resource_Stream::os_prop_table = {
  15,3,-1,-1,-1,-1,17,0,
  cpt_hash_entries+19,0,cpt_table_entries+5,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Resource_String::os_prop_table = {
  15,3,-1,-1,-1,-1,17,0,
  cpt_hash_entries+38,0,cpt_table_entries+10,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_SmartyTemplateCompiler::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+57,&c_Smarty_Internal_TemplateCompilerBase::os_prop_table,cpt_table_entries+15,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
