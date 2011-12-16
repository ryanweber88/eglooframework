
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_extends.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_extends.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_file.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_file.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_php.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_php.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_block.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_extends.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Resource_Extends)
const InstanceOfInfo c_Smarty_Internal_Resource_Extends::s_instanceof_table[] = {
  {0x7CA4099072A9BC87LL,1,"Smarty_Internal_Resource_Extends",&cw_Smarty_Internal_Resource_Extends},
};
const int c_Smarty_Internal_Resource_Extends::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Resource_Extends::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Resource_Extends::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Resource_Extends::ifa_getcompiledfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Extends::ci_gettemplatesource((void*)&c_Smarty_Internal_Resource_Extends::i_gettemplatesource, (void*)&c_Smarty_Internal_Resource_Extends::ifa_gettemplatesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Extends::ci___construct((void*)&c_Smarty_Internal_Resource_Extends::i___construct, (void*)&c_Smarty_Internal_Resource_Extends::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Extends::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Resource_Extends::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Resource_Extends::ifa_gettemplatetimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Extends::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Resource_Extends::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Resource_Extends::ifa_gettemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Extends::ci_isexisting((void*)&c_Smarty_Internal_Resource_Extends::i_isexisting, (void*)&c_Smarty_Internal_Resource_Extends::ifa_isexisting, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Resource_Extends::i_getcompiledfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcompiledfilepath, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getCompiledFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcompiledfilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Extends::i_gettemplatesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatesource, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getTemplateSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatesource(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Extends::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Resource_Extends::i_gettemplatetimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamp, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getTemplateTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatetimestamp(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Extends::i_gettemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatefilepath, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getTemplateFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Extends::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::isExisting", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Extends::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getCompiledFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcompiledfilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Extends::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getTemplateSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatesource(arg0));
}
Variant c_Smarty_Internal_Resource_Extends::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Resource_Extends::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getTemplateTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatetimestamp(arg0));
}
Variant c_Smarty_Internal_Resource_Extends::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::getTemplateFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Extends::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Resource_Extends);
  }
  c_Smarty_Internal_Resource_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Extends*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Extends::isExisting", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_isexisting(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Resource_Extends::s_call_info_table[] = {
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Resource_Extends::ci_gettemplatesource },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Resource_Extends::ci_getcompiledfilepath },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Resource_Extends::ci_gettemplatefilepath },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Resource_Extends::ci_isexisting },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Resource_Extends::ci_gettemplatetimestamp },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Resource_Extends::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Resource_Extends::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,1,-1,-1,
  2,3,-1,-1,4,-1,-1,5,

};
c_Smarty_Internal_Resource_Extends *c_Smarty_Internal_Resource_Extends::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Extends = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Resource_Extends,
  c_Smarty_Internal_Resource_Extends::s_call_info_table,c_Smarty_Internal_Resource_Extends::s_call_info_index,
  c_Smarty_Internal_Resource_Extends::s_instanceof_table,c_Smarty_Internal_Resource_Extends::s_instanceof_index,
  &c_Smarty_Internal_Resource_Extends::s_class_name,
  &c_Smarty_Internal_Resource_Extends::os_prop_table,&c_Smarty_Internal_Resource_Extends::ci___construct,0,0
};
void c_Smarty_Internal_Resource_Extends::init() {
  m_compiler_class = NAMSTR(s_ss4b77f454, "Smarty_Internal_SmartyTemplateCompiler");
  m_template_lexer_class = NAMSTR(s_ss86ff4809, "Smarty_Internal_Templatelexer");
  m_template_parser_class = NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser");
  m_usesCompiler = true;
  m_isEvaluated = false;
  m_allFilepaths = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_extends.php line 17 */
void c_Smarty_Internal_Resource_Extends::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Extends, Smarty_Internal_Resource_Extends::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Extends::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  {
    LINE(20,0);
    const String &tmp0((toString(v_smarty.o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss63355987, "_rdl"), tmp1);
  }
  {
    LINE(21,0);
    const String &tmp0((toString(v_smarty.o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss3025e5e3, "_ldl"), tmp1);
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_extends.php line 38 */
bool c_Smarty_Internal_Resource_Extends::t_isexisting(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Extends, Smarty_Internal_Resource_Extends::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Extends::isExisting", array_createvi(1, toVPOD(v__template)), r);
  Variant v__filepath;

  {
    LINE(40,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth0Args())(mcp0, 0);
  }
  {
    LOOP_COUNTER(1);
    Variant map2 = m_allFilepaths;
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__filepath);
      {
        if (same(v__filepath, false)) {
          {
            return false;
          }
        }
      }
    }
  }
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_extends.php line 54 */
Variant c_Smarty_Internal_Resource_Extends::t_gettemplatefilepath(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Extends, Smarty_Internal_Resource_Extends::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Extends::getTemplateFilepath", array_createvi(1, toVPOD(v__template)), r);
  String v_sha1String;
  Variant v__files;
  Variant v__file;
  Variant v__filepath;

  Variant tmp_ref;
  v_sha1String = NAMSTR(s_ss00000000, "");
  {
    LINE(57,0);
    const String &tmp0((toString(v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
    const Variant &tmp1((x_explode(NAMSTR(s_ss2ecd8ccd, "|"), tmp0)));
    v__files.assignVal(tmp1);
  }
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_sha1String(512);
      for (ArrayIter iter3 = v__files.begin(s_class_name, true); !iter3.end(); ++iter3) {
        LOOP_COUNTER_CHECK(1);
        iter3.second(v__file);
        {
          {
            LINE(59,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = v__template;
            mcp0.methodCall((obj0), NAMSTR(s_ss5cbb4d6f, "buildTemplateFilepath"), 0x4294428CC2B1A75ELL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, v__file)));
            v__filepath.assignVal(tmp1);
          }
          if (!same(v__filepath, false)) {
            {
              {
                bool tmp0;
                {
                  LINE(61,0);
                  const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true)));
                  tmp0 = (x_is_object(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      LINE(62,0);
                      MethodCallPackage mcp0;
                      CVarRef obj0 = v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
                      mcp0.methodCall((obj0), NAMSTR(s_ss7bdba2dc, "isTrustedResourceDir"), 0x51DC7D49C71538DBLL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      (mcp0.ci->getMeth1Args())(mcp0, 1, v__filepath);
                    }
                  }
                }
              }
            }
          }
          tmp_sbuf_v_sha1String.addWithTaint(toString(v__filepath));
          m_allFilepaths.set(v__file, (v__filepath));
        }
      }
      concat_assign(v_sha1String, tmp_sbuf_v_sha1String.detachWithTaint());
    }
  }
  {
    LINE(68,0);
    const String &tmp0((x_sha1(v_sha1String)));
    v__template.o_setPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), tmp0);
  }
  return v__filepath;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_extends.php line 78 */
Variant c_Smarty_Internal_Resource_Extends::t_gettemplatetimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Extends, Smarty_Internal_Resource_Extends::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Extends::getTemplateTimestamp", array_createvi(1, toVPOD(v__template)), r);
  {
    LINE(80,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return x_filemtime(toString((mcp0.ci->getMeth0Args())(mcp0, 0)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_extends.php line 89 */
Variant c_Smarty_Internal_Resource_Extends::t_gettemplatesource(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Extends, Smarty_Internal_Resource_Extends::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Extends::getTemplateSource", array_createvi(1, toVPOD(v__template)), r);
  Variant v__files;
  Variant v__first;
  Variant v__last;
  Primitive v__file = 0;
  Variant v__filepath;
  Variant v__content;
  Variant v__open;
  Variant v__close;
  Variant v__result;
  int v__result_count = 0;
  int64 v__start = 0;
  int64 v__end = 0;
  int64 v__level = 0;
  Variant v__block_content;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss86160f07, "template"), v__template);
  {
    LINE(92,0);
    const Variant &tmp0((x_array_reverse(m_allFilepaths)));
    v__files.assignVal(tmp0);
  }
  {
    LINE(93,0);
    const Variant &tmp0((x_reset(ref(v__files))));
    v__first.assignVal(tmp0);
  }
  {
    LINE(94,0);
    const Variant &tmp0((x_end(ref(v__files))));
    v__last.assignVal(tmp0);
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v__files.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__filepath);
      v__file.assignVal(iter3.first());
      {
        if (same(v__filepath, false)) {
          {
            {
              p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
              throw_exception(LINE(97,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssbe6346c1, "Unable to load template 'file : "), toString(v__file), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
            }
          }
        }
        if (!equal(v__filepath, v__first)) {
          {
            {
              LINE(101,0);
              const String &tmp0((x_sha1(toString(v__filepath))));
              Variant tmp2((v__filepath));
              const Variant &tmp3((x_filemtime(toString(v__filepath))));
              ArrayInit tmp1(array_createvi(3, toVPOD(tmp2), toVPOD(tmp3), toVPOD(NAMVAR(s_svs8ce7db5b, "file"))));
              const Array &tmp4((Array(tmp1)));
              lval(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::CheckExist_Key)).set(tmp0, (VarNR(tmp4)));
              tmp_ref.unset();
            }
          }
        }
        {
          v__template.o_setPublic(NAMSTR(s_ss1994ea1c, "template_filepath"), v__filepath);
        }
        {
          LINE(104,0);
          const Variant &tmp0((x_file_get_contents(toString(v__filepath))));
          v__content.assignVal(tmp0);
        }
        if (!equal(v__filepath, v__last)) {
          {
            {
              bool tmp0;
              {
                LINE(106,0);
                const Variant &tmp1((x_preg_match_all(concat5(NAMSTR(s_ss8b8f2cd6, "!("), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true)), NAMSTR(s_ss95452794, "block\\s(.+\?)"), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true)), NAMSTR(s_ss6ce62072, ")!")), toString(v__content), ref(v__open))));
                LINE(107,0);
                const Variant &tmp2((x_preg_match_all(concat5(NAMSTR(s_ss8b8f2cd6, "!("), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true)), NAMSTR(s_ssd4f0e96d, "/block"), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true)), NAMSTR(s_ss6ce62072, ")!")), toString(v__content), ref(v__close))));
                tmp0 = (!equal(tmp1, tmp2));
              }
              if (tmp0) {
                {
                  {
                    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                    throw_exception(LINE(108,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssdc66de92, "unmatched {block} {/block} pairs in file '"), toString(v__filepath), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
                  }
                }
              }
            }
            LINE(110,(x_preg_match_all(StringBuffer().addWithTaint("!", 1).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true))).addWithTaint("block\\s(.+\?)", 12).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true))).addWithTaint("|", 1).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true))).addWithTaint("/block", 6).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true))).addWithTaint("!", 1).detachWithTaint(), toString(v__content), ref(v__result), toInt32(256LL) /* PREG_OFFSET_CAPTURE */)));
            {
              LINE(111,0);
              const Variant &tmp0((v__result.rvalAt(0LL, AccessFlags::Error)));
              int tmp1((x_count(tmp0)));
              v__result_count = tmp1;
            }
            v__start = 0LL;
            LOOP_COUNTER(4);
            {
              while (less(v__start, v__result_count)) {
                LOOP_COUNTER_CHECK(4);
                {
                  v__end = 0LL;
                  v__level = 1LL;
                  LOOP_COUNTER(5);
                  {
                    while (!equal(v__level, 0LL)) {
                      LOOP_COUNTER_CHECK(5);
                      {
                        v__end++;
                        {
                          bool tmp0;
                          {
                            int64 tmp1(((v__start + v__end)));
                            LINE(118,0);
                            const String &tmp2((toString(v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(tmp1, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error))));
                            bool tmp3((toBoolean(x_strpos(tmp2, NAMVAR(s_svsb9e13cd6, "/")))));
                            tmp0 = (!(tmp3));
                            tmp_ref.unset();
                          }
                          if (tmp0) {
                            {
                              v__level++;
                            }
                          }
                          else {
                            {
                              v__level--;
                            }
                          }
                        }
                      }
                    }
                  }
                  {
                    LINE(124,0);
                    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
                    const String &tmp1((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
                    const String &tmp2((toString(v__content)));
                    LINE(125,0);
                    const Variant &tmp3((v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error)));
                    const String &tmp4((toString(v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error))));
                    int tmp5((x_strlen(tmp4)));
                    int tmp6((toInt32((tmp3 + tmp5))));
                    int64 tmp7(((v__start + v__end)));
                    const Variant &tmp8((v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(tmp7, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error)));
                    const Variant &tmp9((v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error)));
                    const Numeric &tmp10(((tmp8 - tmp9)));
                    const String &tmp11((toString(v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error))));
                    int tmp12((x_strlen(tmp11)));
                    int tmp13((toInt32((tmp10 - +tmp12))));
                    const Variant &tmp14((x_substr(tmp2, tmp6, tmp13)));
                    const Variant &tmp15((x_str_replace(VarNR(concat3(tmp0, NAMSTR(s_ss78541712, "$smarty.block.parent"), tmp1)), NAMVAR(s_svsb99c9e0d, "%%%%SMARTY_PARENT%%%%"), tmp14)));
                    v__block_content.assignVal(tmp15);
                    tmp_ref.unset();
                  }
                  {
                    Variant tmp0((v__block_content));
                    LINE(126,0);
                    const Variant &tmp1((v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
                    ((checkClassExistsThrow(NAMSTR(s_ss7fb89ca7, "Smarty_Internal_Compile_Block"), &g->CDEC(smarty_internal_compile_block))), (c_Smarty_Internal_Compile_Block::t_saveblockdata(tmp0, tmp1, v__template, v__filepath)));
                    tmp_ref.unset();
                  }
                  v__start = (v__start + (v__end + 1LL));
                }
              }
            }
          }
        }
        else {
          {
            {
              v__template.o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), v__content);
            }
            return true;
          }
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_extends.php line 143 */
String c_Smarty_Internal_Resource_Extends::t_getcompiledfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Extends, Smarty_Internal_Resource_Extends::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Extends::getCompiledFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant v__compile_id;
  Variant v__files;
  Variant v__filepath;
  Variant v__compile_dir_sep;
  String v__cache;
  Variant v__compile_dir;

  {
    Variant tmp0;
    if (v__template.o_isset(NAMSTR(s_ss962fc398, "compile_id"), s_class_name)) {
      LINE(145,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
      tmp0 = (x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), tmp1));
    } else {
      tmp0 = (null);
    }
    v__compile_id.assignVal(tmp0);
  }
  {
    LINE(146,0);
    const String &tmp0((toString(v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
    const Variant &tmp1((x_explode(NAMSTR(s_ss2ecd8ccd, "|"), tmp0)));
    v__files.assignVal(tmp1);
  }
  {
    bool tmp0;
    {
      LINE(148,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
      tmp0 = (equal(tmp1, NAMSTR(s_ss00000000, "")));
    }
    if (tmp0) {
      {
        {
          LINE(149,0);
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
    LINE(151,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
    v__filepath.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(153,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))));
    }
    if (tmp0) {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint(LINE(154,(toString(x_substr(toString(v__filepath), toInt32(0LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(155,(toString(x_substr(toString(v__filepath), toInt32(2LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(156,(toString(x_substr(toString(v__filepath), toInt32(4LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(toString(v__filepath));
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          v__filepath = tmp0;
        }
      }
    }
  }
  {
    Variant tmp0(((LINE(159,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((Variant)(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))) : ((Variant)(NAMSTR(s_sscf94e648, "^"))))));
    v__compile_dir_sep.assignVal(tmp0);
  }
  if (isset(v__compile_id)) {
    {
      v__filepath = concat3(toString(v__compile_id), toString(v__compile_dir_sep), toString(v__filepath));
    }
  }
  if (LINE(163,(toBoolean(v__template.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))))) {
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
    LINE(168,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true)));
    v__compile_dir.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(169,0);
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
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint(toString(v__compile_dir));
    tmp0_buf.appendWithTaint(toString(v__filepath));
    tmp0_buf.appendWithTaint(".", 1);
    tmp0_buf.appendWithTaint(LINE(172,(toString(v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true)))));
    tmp0_buf.appendWithTaint(".", 1);
    int tmp1((x_count(v__files)));
    int64 tmp2(((tmp1 - 1LL)));
    const String &tmp3((toString(v__files.rvalAt(tmp2, AccessFlags::Error))));
    tmp0_buf.appendWithTaint(x_basename(tmp3));
    tmp0_buf.appendWithTaint(v__cache);
    tmp0_buf.appendWithTaint(".php", 4);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Resource_Extends() {
  return NEWOBJ(c_Smarty_Internal_Resource_Extends)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_resource_extends.php, pm_php$Smarty$libs$sysplugins$smarty_internal_resource_extends_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_resource_extends) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_file.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Resource_File)
const InstanceOfInfo c_Smarty_Internal_Resource_File::s_instanceof_table[] = {
  {0x3215366099F9B62CLL,1,"Smarty_Internal_Resource_File",&cw_Smarty_Internal_Resource_File},
};
const int c_Smarty_Internal_Resource_File::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Resource_File::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Resource_File::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Resource_File::ifa_getcompiledfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_File::ci_gettemplatesource((void*)&c_Smarty_Internal_Resource_File::i_gettemplatesource, (void*)&c_Smarty_Internal_Resource_File::ifa_gettemplatesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_File::ci___construct((void*)&c_Smarty_Internal_Resource_File::i___construct, (void*)&c_Smarty_Internal_Resource_File::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_File::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Resource_File::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Resource_File::ifa_gettemplatetimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_File::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Resource_File::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Resource_File::ifa_gettemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_File::ci_isexisting((void*)&c_Smarty_Internal_Resource_File::i_isexisting, (void*)&c_Smarty_Internal_Resource_File::ifa_isexisting, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Resource_File::i_getcompiledfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcompiledfilepath, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getCompiledFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcompiledfilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_File::i_gettemplatesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatesource, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getTemplateSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatesource(arg0));
  }
}
Variant c_Smarty_Internal_Resource_File::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Resource_File::i_gettemplatetimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamp, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getTemplateTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatetimestamp(arg0));
  }
}
Variant c_Smarty_Internal_Resource_File::i_gettemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatefilepath, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getTemplateFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_File::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::isExisting", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Resource_File::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getCompiledFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcompiledfilepath(arg0));
}
Variant c_Smarty_Internal_Resource_File::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getTemplateSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatesource(arg0));
}
Variant c_Smarty_Internal_Resource_File::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Resource_File::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getTemplateTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatetimestamp(arg0));
}
Variant c_Smarty_Internal_Resource_File::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::getTemplateFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Resource_File::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Resource_File);
  }
  c_Smarty_Internal_Resource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_File::isExisting", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_isexisting(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Resource_File::s_call_info_table[] = {
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Resource_File::ci_gettemplatesource },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Resource_File::ci_getcompiledfilepath },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Resource_File::ci_gettemplatefilepath },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Resource_File::ci_isexisting },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Resource_File::ci_gettemplatetimestamp },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Resource_File::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Resource_File::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,1,-1,-1,
  2,3,-1,-1,4,-1,-1,5,

};
c_Smarty_Internal_Resource_File *c_Smarty_Internal_Resource_File::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Resource_File = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Resource_File,
  c_Smarty_Internal_Resource_File::s_call_info_table,c_Smarty_Internal_Resource_File::s_call_info_index,
  c_Smarty_Internal_Resource_File::s_instanceof_table,c_Smarty_Internal_Resource_File::s_instanceof_index,
  &c_Smarty_Internal_Resource_File::s_class_name,
  &c_Smarty_Internal_Resource_File::os_prop_table,&c_Smarty_Internal_Resource_File::ci___construct,0,0
};
void c_Smarty_Internal_Resource_File::init() {
  m_compiler_class = NAMSTR(s_ss4b77f454, "Smarty_Internal_SmartyTemplateCompiler");
  m_template_lexer_class = NAMSTR(s_ss86ff4809, "Smarty_Internal_Templatelexer");
  m_template_parser_class = NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser");
  m_usesCompiler = true;
  m_isEvaluated = false;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_file.php line 17 */
void c_Smarty_Internal_Resource_File::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_File, Smarty_Internal_Resource_File::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_File::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_file.php line 34 */
Variant c_Smarty_Internal_Resource_File::t_isexisting(CVarRef v_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_File, Smarty_Internal_Resource_File::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_File::isExisting", array_createvi(1, toVPOD(v_template)), r);
  {
    bool tmp0;
    {
      LINE(36,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v_template;
      mcp1.methodCall((obj1), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (same((mcp1.ci->getMeth0Args())(mcp1, 0), false));
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_file.php line 49 */
Variant c_Smarty_Internal_Resource_File::t_gettemplatefilepath(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_File, Smarty_Internal_Resource_File::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_File::getTemplateFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant v__filepath;

  Variant tmp_ref;
  {
    LINE(51,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss5cbb4d6f, "buildTemplateFilepath"), 0x4294428CC2B1A75ELL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    v__filepath.assignVal(tmp1);
  }
  if (!same(v__filepath, false)) {
    {
      {
        bool tmp0;
        {
          LINE(54,0);
          const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true)));
          tmp0 = (x_is_object(tmp1));
        }
        if (tmp0) {
          {
            {
              LINE(55,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
              mcp0.methodCall((obj0), NAMSTR(s_ss7bdba2dc, "isTrustedResourceDir"), 0x51DC7D49C71538DBLL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              (mcp0.ci->getMeth1Args())(mcp0, 1, v__filepath);
            }
          }
        }
      }
    }
  }
  {
    LINE(58,0);
    const String &tmp0((x_sha1(toString(v__filepath))));
    v__template.o_setPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), tmp0);
  }
  return v__filepath;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_file.php line 68 */
Variant c_Smarty_Internal_Resource_File::t_gettemplatetimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_File, Smarty_Internal_Resource_File::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_File::getTemplateTimestamp", array_createvi(1, toVPOD(v__template)), r);
  {
    LINE(70,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return x_filemtime(toString((mcp0.ci->getMeth0Args())(mcp0, 0)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_file.php line 79 */
Variant c_Smarty_Internal_Resource_File::t_gettemplatesource(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_File, Smarty_Internal_Resource_File::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_File::getTemplateSource", array_createvi(1, toVPOD(v__template)), r);
  Variant v__tfp;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(82,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__template;
      mcp1.methodCall((obj1), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth0Args())(mcp1, 0)));
      tmp0 = (x_file_exists(toString(v__tfp.assignVal(tmp2))));
    }
    if (tmp0) {
      {
        {
          LINE(83,0);
          const Variant &tmp0((x_file_get_contents(toString(v__tfp))));
          v__template.o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), tmp0);
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_file.php line 96 */
String c_Smarty_Internal_Resource_File::t_getcompiledfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_File, Smarty_Internal_Resource_File::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_File::getCompiledFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant v__compile_id;
  Variant v__filepath;
  Variant v__compile_dir_sep;
  String v__cache;
  Variant v__compile_dir;

  {
    Variant tmp0;
    if (v__template.o_isset(NAMSTR(s_ss962fc398, "compile_id"), s_class_name)) {
      LINE(98,0);
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
      LINE(100,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
      tmp0 = (equal(tmp1, NAMSTR(s_ss00000000, "")));
    }
    if (tmp0) {
      {
        {
          LINE(101,0);
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
    LINE(103,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
    v__filepath.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(105,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))));
    }
    if (tmp0) {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint(LINE(106,(toString(x_substr(toString(v__filepath), toInt32(0LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(107,(toString(x_substr(toString(v__filepath), toInt32(2LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(LINE(108,(toString(x_substr(toString(v__filepath), toInt32(4LL), toInt32(2LL))))));
          tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
          tmp0_buf.appendWithTaint(toString(v__filepath));
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          v__filepath = tmp0;
        }
      }
    }
  }
  {
    Variant tmp0(((LINE(111,(toBoolean(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((Variant)(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))) : ((Variant)(NAMSTR(s_sscf94e648, "^"))))));
    v__compile_dir_sep.assignVal(tmp0);
  }
  if (isset(v__compile_id)) {
    {
      v__filepath = concat3(toString(v__compile_id), toString(v__compile_dir_sep), toString(v__filepath));
    }
  }
  if (LINE(115,(toBoolean(v__template.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))))) {
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
    LINE(120,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true)));
    v__compile_dir.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(121,0);
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
    tmp0_buf.appendWithTaint(LINE(124,(toString(v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true)))));
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
ObjectData *coo_Smarty_Internal_Resource_File() {
  return NEWOBJ(c_Smarty_Internal_Resource_File)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_resource_file.php, pm_php$Smarty$libs$sysplugins$smarty_internal_resource_file_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_resource_file) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Resource_PHP)
const InstanceOfInfo c_Smarty_Internal_Resource_PHP::s_instanceof_table[] = {
  {0x2A32BC064E4EB962LL,1,"Smarty_Internal_Resource_PHP",&cw_Smarty_Internal_Resource_PHP},
};
const int c_Smarty_Internal_Resource_PHP::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Resource_PHP::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Resource_PHP::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Resource_PHP::ifa_getcompiledfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_PHP::ci_gettemplatesource((void*)&c_Smarty_Internal_Resource_PHP::i_gettemplatesource, (void*)&c_Smarty_Internal_Resource_PHP::ifa_gettemplatesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_PHP::ci___construct((void*)&c_Smarty_Internal_Resource_PHP::i___construct, (void*)&c_Smarty_Internal_Resource_PHP::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_PHP::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Resource_PHP::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Resource_PHP::ifa_gettemplatetimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_PHP::ci_renderuncompiled((void*)&c_Smarty_Internal_Resource_PHP::i_renderuncompiled, (void*)&c_Smarty_Internal_Resource_PHP::ifa_renderuncompiled, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_PHP::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Resource_PHP::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Resource_PHP::ifa_gettemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_PHP::ci_isexisting((void*)&c_Smarty_Internal_Resource_PHP::i_isexisting, (void*)&c_Smarty_Internal_Resource_PHP::ifa_isexisting, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Resource_PHP::i_getcompiledfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcompiledfilepath, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getCompiledFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcompiledfilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_PHP::i_gettemplatesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatesource, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getTemplateSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatesource(arg0));
  }
}
Variant c_Smarty_Internal_Resource_PHP::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Resource_PHP::i_gettemplatetimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamp, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getTemplateTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatetimestamp(arg0));
  }
}
Variant c_Smarty_Internal_Resource_PHP::i_renderuncompiled(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_renderuncompiled, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::renderUncompiled", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_renderuncompiled(arg0), null);
  }
}
Variant c_Smarty_Internal_Resource_PHP::i_gettemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatefilepath, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getTemplateFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_PHP::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::isExisting", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Resource_PHP::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getCompiledFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcompiledfilepath(arg0));
}
Variant c_Smarty_Internal_Resource_PHP::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getTemplateSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatesource(arg0));
}
Variant c_Smarty_Internal_Resource_PHP::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Resource_PHP::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getTemplateTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatetimestamp(arg0));
}
Variant c_Smarty_Internal_Resource_PHP::ifa_renderuncompiled(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_renderuncompiled, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::renderUncompiled", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_renderuncompiled(arg0), null);
}
Variant c_Smarty_Internal_Resource_PHP::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::getTemplateFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Resource_PHP::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Resource_PHP);
  }
  c_Smarty_Internal_Resource_PHP *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_PHP*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_PHP::isExisting", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_isexisting(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Resource_PHP::s_call_info_table[] = {
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Resource_PHP::ci_gettemplatesource },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Resource_PHP::ci_getcompiledfilepath },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Resource_PHP::ci_gettemplatefilepath },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Resource_PHP::ci_isexisting },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Resource_PHP::ci_gettemplatetimestamp },
  { 0x7BD92D77836CCBACLL, 0, 16, "renderUncompiled", &c_Smarty_Internal_Resource_PHP::ci_renderuncompiled },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Resource_PHP::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Resource_PHP::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,1,-1,-1,
  2,3,-1,-1,4,-1,-1,6,

};
c_Smarty_Internal_Resource_PHP *c_Smarty_Internal_Resource_PHP::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Resource_PHP = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Resource_PHP,
  c_Smarty_Internal_Resource_PHP::s_call_info_table,c_Smarty_Internal_Resource_PHP::s_call_info_index,
  c_Smarty_Internal_Resource_PHP::s_instanceof_table,c_Smarty_Internal_Resource_PHP::s_instanceof_index,
  &c_Smarty_Internal_Resource_PHP::s_class_name,
  &c_Smarty_Internal_Resource_PHP::os_prop_table,&c_Smarty_Internal_Resource_PHP::ci___construct,0,0
};
void c_Smarty_Internal_Resource_PHP::init() {
  m_usesCompiler = false;
  m_isEvaluated = false;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 20 */
void c_Smarty_Internal_Resource_PHP::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_PHP::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  LINE(23,(x_ini_set(NAMSTR(s_ss3f7e1509, "short_open_tag"), NAMSTR(s_ssfc2bb5ea, "1"))));
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 34 */
Variant c_Smarty_Internal_Resource_PHP::t_isexisting(CVarRef v_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_PHP::isExisting", array_createvi(1, toVPOD(v_template)), r);
  {
    bool tmp0;
    {
      LINE(36,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v_template;
      mcp1.methodCall((obj1), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (same((mcp1.ci->getMeth0Args())(mcp1, 0), false));
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 49 */
Variant c_Smarty_Internal_Resource_PHP::t_gettemplatefilepath(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_PHP::getTemplateFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant v__filepath;

  Variant tmp_ref;
  {
    LINE(51,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss5cbb4d6f, "buildTemplateFilepath"), 0x4294428CC2B1A75ELL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    v__filepath.assignVal(tmp1);
  }
  {
    bool tmp0;
    {
      LINE(53,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true)));
      tmp0 = (x_is_object(tmp1));
    }
    if (tmp0) {
      {
        {
          LINE(54,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss7bdba2dc, "isTrustedResourceDir"), 0x51DC7D49C71538DBLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, v__filepath);
        }
      }
    }
  }
  {
    LINE(56,0);
    const String &tmp0((x_sha1(toString(v__filepath))));
    v__template.o_setPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), tmp0);
  }
  return v__filepath;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 66 */
Variant c_Smarty_Internal_Resource_PHP::t_gettemplatetimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_PHP::getTemplateTimestamp", array_createvi(1, toVPOD(v__template)), r);
  {
    LINE(68,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return x_filemtime(toString((mcp0.ci->getMeth0Args())(mcp0, 0)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 77 */
Variant c_Smarty_Internal_Resource_PHP::t_gettemplatesource(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_PHP::getTemplateSource", array_createvi(1, toVPOD(v__template)), r);
  Variant v__tfp;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(79,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__template;
      mcp1.methodCall((obj1), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth0Args())(mcp1, 0)));
      tmp0 = (x_file_exists(toString(v__tfp.assignVal(tmp2))));
    }
    if (tmp0) {
      {
        {
          LINE(80,0);
          const Variant &tmp0((x_file_get_contents(toString(v__tfp))));
          v__template.o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), tmp0);
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 93 */
bool c_Smarty_Internal_Resource_PHP::t_getcompiledfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_PHP::getCompiledFilepath", array_createvi(1, toVPOD(v__template)), r);
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 102 */
void c_Smarty_Internal_Resource_PHP::t_renderuncompiled(Variant v__smarty_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP::renderUncompiled);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_PHP::renderUncompiled", array_createvi(1, toVPOD(v__smarty_template)), );
  Variant v__smarty_ptr;
  Variant v__smarty_var;
  Variant v__smarty_var_object;


  class VariableTable : public LVariableTable {
  public:
    Variant &v__smarty_template; Variant &v__smarty_ptr; Variant &v__smarty_var; Variant &v__smarty_var_object;
    VariableTable(Variant &r__smarty_template, Variant &r__smarty_ptr, Variant &r__smarty_var, Variant &r__smarty_var_object) : v__smarty_template(r__smarty_template), v__smarty_ptr(r__smarty_ptr), v__smarty_var(r__smarty_var), v__smarty_var_object(r__smarty_var_object) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 7) {
        case 1:
          HASH_RETURN_NAMSTR(0x7CC7FF8083E11911LL, s_ssd2928f17, v__smarty_ptr,
                             11);
          break;
        case 5:
          HASH_RETURN_NAMSTR(0x2D9E5664BAB2A63DLL, s_ss41a05b0f, v__smarty_template,
                             16);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x2CA0AED24D22AD76LL, s_ssdfe3bb26, v__smarty_var_object,
                             18);
          break;
        case 7:
          HASH_RETURN_NAMSTR(0x2BF4BFA9EBD6363FLL, s_ss005b98b3, v__smarty_var,
                             11);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v__smarty_template, v__smarty_ptr, v__smarty_var, v__smarty_var_object);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  {
    bool tmp0;
    {
      LINE(104,0);
      bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss404e0c96, "allow_php_templates"), true))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        throw_exception(LINE(105,(((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (p_SmartyException(((c_SmartyException*)coo_SmartyException())->create(NAMVAR(s_svscddc4451, "PHP templates are disabled"))))))));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(107,0);
      const Variant &tmp1((t_gettemplatefilepath(v__smarty_template)));
      tmp0 = (same(tmp1, false));
    }
    if (tmp0) {
      {
        {
          p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
          LINE(108,0);
          const String &tmp1((toString(v__smarty_template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true))));
          const String &tmp2((toString(v__smarty_template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
          throw_exception(((c_SmartyException*)tmp0.get()->create(VarNR(concat5(NAMSTR(s_ssc0c03823, "Unable to load template \""), tmp1, NAMSTR(s_ss5fd47db5, " : "), tmp2, NAMSTR(s_ss7e5fc106, "\"")))), tmp0));
        }
      }
    }
  }
  v__smarty_ptr.assignVal(v__smarty_template);
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LOOP_COUNTER(2);
          Variant map3 = LINE(113,(v__smarty_ptr.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true)));
          for (ArrayIter iter4 = map3.begin(s_class_name, true); !iter4.end(); iter4.next()) {
            LOOP_COUNTER_CHECK(2);
            iter4.second(v__smarty_var_object);
            v__smarty_var.assignVal(iter4.first());
            {
              {
                bool tmp0;
                {
                  tmp0 = (v__smarty_var_object.o_isset(NAMSTR(s_sse0c88471, "value"), s_class_name));
                }
                if (tmp0) {
                  {
                    {
                      Variant &tmp0((variables->get(toString(v__smarty_var))));
                      LINE(115,0);
                      const Variant &tmp1((v__smarty_var_object.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                      tmp0.assignVal(tmp1);
                    }
                  }
                }
              }
            }
          }
        }
        {
          LINE(118,0);
          const Variant &tmp0((v__smarty_ptr.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
          v__smarty_ptr.assignVal(tmp0);
        }
      }
    } while (!equal(v__smarty_ptr, null));
  }
  {
    unset(v__smarty_var);
    unset(v__smarty_var_object);
    unset(v__smarty_ptr);
  }
  {
    LINE(122,0);
    const String &tmp0((toString(t_gettemplatefilepath(v__smarty_template))));
    include(tmp0, false, variables, "Smarty/libs/sysplugins/");
  }
  return;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Resource_PHP() {
  return NEWOBJ(c_Smarty_Internal_Resource_PHP)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_resource_php.php, pm_php$Smarty$libs$sysplugins$smarty_internal_resource_php_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_resource_php) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svs86ff4809, "Smarty_Internal_Templatelexer"),
  (int64)&true_varNR,
  (int64)&s_sva00000000,
  (int64)&NAMVAR(s_svs351e8449, "Smarty_Internal_Templateparser"),
  (int64)&NAMVAR(s_svs4b77f454, "Smarty_Internal_SmartyTemplateCompiler"),
  (int64)&false_varNR,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x665F37482FC22180LL,3,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Extends, m_template_lexer_class),&NAMSTR(s_ss69c65032, "template_lexer_class") },
  {0x6751E4C91D40C031LL,4,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Extends, m_usesCompiler),&NAMSTR(s_ssa0f13ad5, "usesCompiler") },
  {0x3A8575D87BB0E832LL,0,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Extends, m_allFilepaths),&NAMSTR(s_ss53bd1991, "allFilepaths") },
  {0x74D6BE1FFE503573LL,-2,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Extends, m_template_parser_class),&NAMSTR(s_ss2ae19e62, "template_parser_class") },
  {0x06141D64A6B64346LL,-4,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Extends, m_compiler_class),&NAMSTR(s_ss664736fa, "compiler_class") },
  {0x27F0C3DCA79078E9LL,-3,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Extends, m_isEvaluated),&NAMSTR(s_ssee449446, "isEvaluated") },

  {0x665F37482FC22180LL,2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_File, m_template_lexer_class),&NAMSTR(s_ss69c65032, "template_lexer_class") },
  {0x6751E4C91D40C031LL,3,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_File, m_usesCompiler),&NAMSTR(s_ssa0f13ad5, "usesCompiler") },
  {0x74D6BE1FFE503573LL,-1,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_File, m_template_parser_class),&NAMSTR(s_ss2ae19e62, "template_parser_class") },
  {0x06141D64A6B64346LL,-3,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_File, m_compiler_class),&NAMSTR(s_ss664736fa, "compiler_class") },
  {0x27F0C3DCA79078E9LL,0,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_File, m_isEvaluated),&NAMSTR(s_ssee449446, "isEvaluated") },

  {0x6751E4C91D40C031LL,1,5,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_PHP, m_usesCompiler),&NAMSTR(s_ssa0f13ad5, "usesCompiler") },
  {0x27F0C3DCA79078E9LL,0,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_PHP, m_isEvaluated),&NAMSTR(s_ssee449446, "isEvaluated") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Resource_Extends hash
  0,1,2,3,-1,-1,4,-1,-1,5,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Resource_Extends lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Resource_File hash
  0,1,-1,2,-1,-1,3,-1,-1,4,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Resource_File lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Resource_PHP hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Resource_PHP lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Resource_Extends::os_prop_table = {
  15,4,-1,-1,-1,-1,17,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Resource_File::os_prop_table = {
  15,3,-1,-1,-1,-1,17,0,
  cpt_hash_entries+19,0,cpt_table_entries+6,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Resource_PHP::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+38,0,cpt_table_entries+11,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
