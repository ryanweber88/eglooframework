
#include <php/Smarty/libs/sysplugins/smarty_internal_utility.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_utility.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_config.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 35 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Utility)
const InstanceOfInfo c_Smarty_Internal_Utility::s_instanceof_table[] = {
  {0x515DC84B46D13D3BLL,1,"Smarty_Internal_Utility",&cw_Smarty_Internal_Utility},
};
const int c_Smarty_Internal_Utility::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Utility::ci_compileallconfig((void*)&c_Smarty_Internal_Utility::i_compileallconfig, (void*)&c_Smarty_Internal_Utility::ifa_compileallconfig, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Utility::ci___construct((void*)&c_Smarty_Internal_Utility::i___construct, (void*)&c_Smarty_Internal_Utility::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Utility::ci_testinstall((void*)&c_Smarty_Internal_Utility::i_testinstall, (void*)&c_Smarty_Internal_Utility::ifa_testinstall, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Utility::ci_gettags((void*)&c_Smarty_Internal_Utility::i_gettags, (void*)&c_Smarty_Internal_Utility::ifa_gettags, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Utility::ci_compilealltemplates((void*)&c_Smarty_Internal_Utility::i_compilealltemplates, (void*)&c_Smarty_Internal_Utility::ifa_compilealltemplates, 4, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Utility::ci_clearcompiledtemplate((void*)&c_Smarty_Internal_Utility::i_clearcompiledtemplate, (void*)&c_Smarty_Internal_Utility::ifa_clearcompiledtemplate, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Utility::i_compileallconfig(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compileallconfig, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? Variant(NAMSTR(s_ss9ef80ccd, ".conf")) : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(0LL) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compileallconfig(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Utility::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Utility::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Utility::i_gettags(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty_Internal_Utility::getTags", "smarty_internal_template", 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (c_Smarty_Internal_Utility::t_gettags(arg0));
  }
}
Variant c_Smarty_Internal_Utility::i_compilealltemplates(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compilealltemplates, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? Variant(NAMSTR(s_ss8f3e0c0c, ".tpl")) : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(0LL) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compilealltemplates(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Utility::i_clearcompiledtemplate(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_clearcompiledtemplate, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_clearcompiledtemplate(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Utility::ifa_compileallconfig(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compileallconfig, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  CVarRef arg0(count <= 0 ? (NAMVAR(s_svs9ef80ccd, ".conf")) : a0);
  CVarRef arg1(count <= 1 ? (false_varNR) : a1);
  CVarRef arg2(count <= 2 ? (NAMVAR(s_svif01bca90, 0LL)) : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  return (self->t_compileallconfig(arg0, arg1, arg2, arg3));
}
Variant c_Smarty_Internal_Utility::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Utility::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Utility::ifa_testinstall(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_testinstall, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  return (self->t_testinstall());
}
Variant c_Smarty_Internal_Utility::ifa_gettags(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("Smarty_Internal_Utility::getTags", "smarty_internal_template", 1);
  CVarRef arg0(a0);
  return (c_Smarty_Internal_Utility::t_gettags(arg0));
}
Variant c_Smarty_Internal_Utility::ifa_compilealltemplates(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compilealltemplates, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  CVarRef arg0(count <= 0 ? (NAMVAR(s_svs8f3e0c0c, ".tpl")) : a0);
  CVarRef arg1(count <= 1 ? (false_varNR) : a1);
  CVarRef arg2(count <= 2 ? (NAMVAR(s_svif01bca90, 0LL)) : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  return (self->t_compilealltemplates(arg0, arg1, arg2, arg3));
}
Variant c_Smarty_Internal_Utility::ifa_clearcompiledtemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clearcompiledtemplate, coo_Smarty_Internal_Utility);
  }
  c_Smarty_Internal_Utility *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Utility*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  return (self->t_clearcompiledtemplate(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Utility::s_call_info_table[] = {
  { 0x747BD67939633EB3LL, 1, 7, "getTags", &c_Smarty_Internal_Utility::ci_gettags },
  { 0x18E5EEA7FC629CF3LL, 0, 19, "compileAllTemplates", &c_Smarty_Internal_Utility::ci_compilealltemplates },
  { 0x2649AF3C788087E5LL, 1, 11, "testInstall", &c_Smarty_Internal_Utility::ci_testinstall },
  { 0x32A733ED61D299C6LL, 1, 16, "compileAllConfig", &c_Smarty_Internal_Utility::ci_compileallconfig },
  { 0x31C2AAB2C725B65ELL, 1, 21, "clearCompiledTemplate", &c_Smarty_Internal_Utility::ci_clearcompiledtemplate },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Utility::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Utility::s_call_info_index[] = {
  15,
  -1,-1,-1,0,-1,2,3,-1,
  -1,-1,-1,-1,-1,-1,4,5,

};
c_Smarty_Internal_Utility *c_Smarty_Internal_Utility::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Utility = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Utility,
  c_Smarty_Internal_Utility::s_call_info_table,c_Smarty_Internal_Utility::s_call_info_index,
  c_Smarty_Internal_Utility::s_instanceof_table,c_Smarty_Internal_Utility::s_instanceof_index,
  &c_Smarty_Internal_Utility::s_class_name,
  &c_Smarty_Internal_Utility::os_prop_table,&c_Smarty_Internal_Utility::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 38 */
void c_Smarty_Internal_Utility::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Utility, Smarty_Internal_Utility::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Utility::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  m_smarty.assignVal(v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 52 */
int64 c_Smarty_Internal_Utility::t_compilealltemplates(CVarRef v_extention //  = NAMVAR(s_svs8f3e0c0c, ".tpl")
, CVarRef v_force_compile //  = false_varNR
, CVarRef v_time_limit //  = NAMVAR(s_svif01bca90, 0LL)
, CVarRef v_max_errors //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Utility, Smarty_Internal_Utility::compileAllTemplates);
  INTERCEPT_INJECTION("Smarty_Internal_Utility::compileAllTemplates", array_createvi(4, toVPOD(v_extention), toVPOD(v_force_compile), toVPOD(v_time_limit), toVPOD(v_max_errors)), r);
  int64 v__count = 0;
  int64 v__error_count = 0;
  Variant v__dir;
  p_RecursiveDirectoryIterator v__compileDirs;
  p_RecursiveIteratorIterator v__compile;
  Variant v__fileinfo;
  Variant v__file;
  Variant v__template_file;
  Variant v__start_time;
  Variant v__tpl;
  Object v_e;

  Variant tmp_ref;
  {
    Silencer tmp0(true);
    LINE(56,(x_set_time_limit(toInt32(v_time_limit))));
    tmp0.disable();
    ;
  }
  {
    m_smarty.o_setPublic(NAMSTR(s_ss672ddadf, "force_compile"), v_force_compile);
  }
  v__count = 0LL;
  v__error_count = 0LL;
  {
    LOOP_COUNTER(1);
    Variant map2;
    {
      LINE(62,0);
      const Array &tmp0((toArray(m_smarty.o_getPublic(NAMSTR(s_ssfc1024fb, "template_dir"), true))));
      map2 = (tmp0);
    }
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__dir);
      {
        {
          bool tmp0;
          {
            LINE(63,0);
            const Variant &tmp1((x_substr(toString(v__dir), toInt32(-1LL))));
            const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
            tmp0 = (same(tmp2, false));
          }
          if (tmp0) {
            {
              concat_assign(v__dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
            }
          }
        }
        {
          p_RecursiveDirectoryIterator tmp0 = coo_RecursiveDirectoryIterator();
          ((c_RecursiveDirectoryIterator*)tmp0.get()->create(v__dir));
          v__compileDirs = tmp0;
        }
        {
          p_RecursiveIteratorIterator tmp0 = coo_RecursiveIteratorIterator();
          ((c_RecursiveIteratorIterator*)tmp0.get()->create(VarNR(v__compileDirs)));
          v__compile = tmp0;
        }
        {
          LOOP_COUNTER(4);
          for (ArrayIter iter6 = v__compile.begin(s_class_name, true); !iter6.end(); ++iter6) {
            LOOP_COUNTER_CHECK(4);
            iter6.second(v__fileinfo);
            {
              {
                bool tmp0;
                {
                  LINE(69,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__fileinfo;
                  mcp1.methodCall((obj1), NAMSTR(s_ss7d1afda2, "getBasename"), 0x572E108C6731E29CLL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  const Variant &tmp2((x_substr(toString((mcp1.ci->getMeth0Args())(mcp1, 0)), toInt32(0LL), toInt32(1LL))));
                  tmp0 = (equal(tmp2, NAMSTR(s_ss013a8f64, ".")));
                }
                if (tmp0) {
                  continue;
                }
              }
              {
                LINE(70,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__fileinfo;
                mcp0.methodCall((obj0), NAMSTR(s_ss077ab997, "getFilename"), 0x1930CE336D39474DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
                v__file.assignVal(tmp1);
              }
              {
                bool tmp0;
                {
                  const String &tmp1((toString(v__file)));
                  const String &tmp2((toString(v_extention)));
                  LINE(71,0);
                  int tmp3((x_strlen(toString(v_extention))));
                  bool tmp4((toBoolean(x_substr_compare(tmp1, tmp2, toInt32(negate(tmp3))))));
                  tmp0 = (equal(!(tmp4), 0LL));
                }
                if (tmp0) {
                  continue;
                }
              }
              {
                bool tmp0;
                {
                  LINE(72,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__fileinfo;
                  mcp1.methodCall((obj1), NAMSTR(s_ss0c3a6c4a, "getPath"), 0x04C642C6C162243FLL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  Variant tmp2(((mcp1.ci->getMeth0Args())(mcp1, 0)));
                  const Variant &tmp3((x_substr(toString(v__dir), toInt32(0LL), toInt32(-1LL))));
                  tmp0 = (equal(tmp2, tmp3));
                }
                if (tmp0) {
                  {
                    v__template_file.assignVal(v__file);
                  }
                }
                else {
                  {
                    {
                      LINE(75,0);
                      MethodCallPackage mcp0;
                      CVarRef obj0 = v__fileinfo;
                      mcp0.methodCall((obj0), NAMSTR(s_ss0c3a6c4a, "getPath"), 0x04C642C6C162243FLL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
                      int tmp2((x_strlen(toString(v__dir))));
                      const String &tmp3((toString(x_substr(tmp1, tmp2))));
                      const String &tmp4((toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))));
                      const String &tmp5((toString(v__file)));
                      v__template_file = concat3(tmp3, tmp4, tmp5);
                    }
                  }
                }
              }
              {
                echo(NAMSTR(s_ssb0c6613c, "<br>"));
                echo(toString(v__dir));
                echo(NAMSTR(s_ssde8a04a4, "---"));
                echo(toString(v__template_file));
              }
              LINE(78,(x_flush()));
              {
                LINE(79,0);
                const Variant &tmp0((x_microtime(true)));
                v__start_time.assignVal(tmp0);
              }
              try {
                {
                  LINE(81,0);
                  MethodCallPackage mcp0;
                  CVarRef obj0 = m_smarty;
                  mcp0.methodCall((obj0), NAMSTR(s_ss1013be39, "createTemplate"), 0x05C1C3E93C06D26FLL);
                  const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                  Variant tmp1(((mcp0.ci->getMeth5Args())(mcp0, 5, v__template_file, null_varNR, null_varNR, null_varNR, false_varNR)));
                  v__tpl.assignVal(tmp1);
                }
                {
                  bool tmp0;
                  {
                    LINE(82,0);
                    MethodCallPackage mcp1;
                    CVarRef obj1 = v__tpl;
                    mcp1.methodCall((obj1), NAMSTR(s_ss614f620c, "mustCompile"), 0x24EB611B03892C1DLL);
                    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                    tmp0 = (toBoolean((mcp1.ci->getMeth0Args())(mcp1, 0)));
                  }
                  if (tmp0) {
                    {
                      {
                        LINE(83,0);
                        MethodCallPackage mcp0;
                        CVarRef obj0 = v__tpl;
                        mcp0.methodCall((obj0), NAMSTR(s_ss8e8894bb, "compileTemplateSource"), 0x77E6F2896CC3A2C6LL);
                        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                        (mcp0.ci->getMeth0Args())(mcp0, 0);
                      }
                      {
                        echo(NAMSTR(s_ss5e877aca, " compiled in  "));
                        {
                          LINE(84,0);
                          const Variant &tmp0((x_microtime(true)));
                          echo(toString((tmp0 - v__start_time)));
                        }
                        echo(NAMSTR(s_ss381a543b, " seconds"));
                      }
                      LINE(85,(x_flush()));
                    }
                  }
                  else {
                    {
                      echo(NAMSTR(s_ss88a2358b, " is up to date"));
                      LINE(88,(x_flush()));
                    }
                  }
                }
              } catch (Object e) {
                if (e.instanceof(NAMSTR(s_ssae8717ad, "exception"))) {
                  v_e = e;
                  {
                    echo(NAMSTR(s_ss67e09493, "Error: "));
                    {
                      LINE(92,0);
                      MethodCallPackage mcp0;
                      CObjRef obj0 = v_e;
                      mcp0.methodCall((obj0), NAMSTR(s_ss4f2f48c7, "getMessage"), 0x71859D7313E682D2LL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      echo(toString((mcp0.ci->getMeth0Args())(mcp0, 0)));
                    }
                    echo(NAMSTR(s_ss76b3859f, "<br><br>"));
                  }
                  v__error_count++;
                } else {
                  throw;
                }
              }
              m_smarty.o_setPublic(NAMSTR(s_ss8d72b238, "template_objects"), s_sa00000000);
              {
                LINE(97,(v__tpl.o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss8d72b238, "template_objects"), s_sa00000000);
                tmp_ref.unset();
              }
              setNull(v__tpl);
              if ((!(x_is_null(v_max_errors)) && equal(v__error_count, v_max_errors))) {
                {
                  echo(NAMSTR(s_ss6ff2939f, "<br><br>too many errors"));
                  LINE(101,(f_exit()));
                }
              }
            }
          }
        }
      }
    }
  }
  return v__count;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 117 */
int64 c_Smarty_Internal_Utility::t_compileallconfig(CVarRef v_extention //  = NAMVAR(s_svs9ef80ccd, ".conf")
, CVarRef v_force_compile //  = false_varNR
, CVarRef v_time_limit //  = NAMVAR(s_svif01bca90, 0LL)
, CVarRef v_max_errors //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Utility, Smarty_Internal_Utility::compileAllConfig);
  INTERCEPT_INJECTION("Smarty_Internal_Utility::compileAllConfig", array_createvi(4, toVPOD(v_extention), toVPOD(v_force_compile), toVPOD(v_time_limit), toVPOD(v_max_errors)), r);
  int64 v__count = 0;
  int64 v__error_count = 0;
  Variant v__dir;
  p_RecursiveDirectoryIterator v__compileDirs;
  p_RecursiveIteratorIterator v__compile;
  Variant v__fileinfo;
  Variant v__file;
  Variant v__config_file;
  Variant v__start_time;
  p_Smarty_Internal_Config v__config;
  Object v_e;

  Variant tmp_ref;
  {
    Silencer tmp0(true);
    LINE(121,(x_set_time_limit(toInt32(v_time_limit))));
    tmp0.disable();
    ;
  }
  {
    m_smarty.o_setPublic(NAMSTR(s_ss672ddadf, "force_compile"), v_force_compile);
  }
  v__count = 0LL;
  v__error_count = 0LL;
  {
    LOOP_COUNTER(1);
    Variant map2;
    {
      LINE(127,0);
      const Array &tmp0((toArray(m_smarty.o_getPublic(NAMSTR(s_ss5bd6289d, "config_dir"), true))));
      map2 = (tmp0);
    }
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__dir);
      {
        {
          bool tmp0;
          {
            LINE(128,0);
            const Variant &tmp1((x_substr(toString(v__dir), toInt32(-1LL))));
            const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
            tmp0 = (same(tmp2, false));
          }
          if (tmp0) {
            {
              concat_assign(v__dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
            }
          }
        }
        {
          p_RecursiveDirectoryIterator tmp0 = coo_RecursiveDirectoryIterator();
          ((c_RecursiveDirectoryIterator*)tmp0.get()->create(v__dir));
          v__compileDirs = tmp0;
        }
        {
          p_RecursiveIteratorIterator tmp0 = coo_RecursiveIteratorIterator();
          ((c_RecursiveIteratorIterator*)tmp0.get()->create(VarNR(v__compileDirs)));
          v__compile = tmp0;
        }
        {
          LOOP_COUNTER(4);
          for (ArrayIter iter6 = v__compile.begin(s_class_name, true); !iter6.end(); ++iter6) {
            LOOP_COUNTER_CHECK(4);
            iter6.second(v__fileinfo);
            {
              {
                bool tmp0;
                {
                  LINE(134,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__fileinfo;
                  mcp1.methodCall((obj1), NAMSTR(s_ss7d1afda2, "getBasename"), 0x572E108C6731E29CLL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  const Variant &tmp2((x_substr(toString((mcp1.ci->getMeth0Args())(mcp1, 0)), toInt32(0LL), toInt32(1LL))));
                  tmp0 = (equal(tmp2, NAMSTR(s_ss013a8f64, ".")));
                }
                if (tmp0) {
                  continue;
                }
              }
              {
                LINE(135,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__fileinfo;
                mcp0.methodCall((obj0), NAMSTR(s_ss077ab997, "getFilename"), 0x1930CE336D39474DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
                v__file.assignVal(tmp1);
              }
              {
                bool tmp0;
                {
                  const String &tmp1((toString(v__file)));
                  const String &tmp2((toString(v_extention)));
                  LINE(136,0);
                  int tmp3((x_strlen(toString(v_extention))));
                  bool tmp4((toBoolean(x_substr_compare(tmp1, tmp2, toInt32(negate(tmp3))))));
                  tmp0 = (equal(!(tmp4), 0LL));
                }
                if (tmp0) {
                  continue;
                }
              }
              {
                bool tmp0;
                {
                  LINE(137,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__fileinfo;
                  mcp1.methodCall((obj1), NAMSTR(s_ss0c3a6c4a, "getPath"), 0x04C642C6C162243FLL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  Variant tmp2(((mcp1.ci->getMeth0Args())(mcp1, 0)));
                  const Variant &tmp3((x_substr(toString(v__dir), toInt32(0LL), toInt32(-1LL))));
                  tmp0 = (equal(tmp2, tmp3));
                }
                if (tmp0) {
                  {
                    v__config_file.assignVal(v__file);
                  }
                }
                else {
                  {
                    {
                      LINE(140,0);
                      MethodCallPackage mcp0;
                      CVarRef obj0 = v__fileinfo;
                      mcp0.methodCall((obj0), NAMSTR(s_ss0c3a6c4a, "getPath"), 0x04C642C6C162243FLL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
                      int tmp2((x_strlen(toString(v__dir))));
                      const String &tmp3((toString(x_substr(tmp1, tmp2))));
                      const String &tmp4((toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))));
                      const String &tmp5((toString(v__file)));
                      v__config_file = concat3(tmp3, tmp4, tmp5);
                    }
                  }
                }
              }
              {
                echo(NAMSTR(s_ssb0c6613c, "<br>"));
                echo(toString(v__dir));
                echo(NAMSTR(s_ssde8a04a4, "---"));
                echo(toString(v__config_file));
              }
              LINE(143,(x_flush()));
              {
                LINE(144,0);
                const Variant &tmp0((x_microtime(true)));
                v__start_time.assignVal(tmp0);
              }
              try {
                {
                  p_Smarty_Internal_Config tmp0 = ((checkClassExistsThrow(NAMSTR(s_sse10bc7fa, "Smarty_Internal_Config"), &g->CDEC(smarty_internal_config))), (coo_Smarty_Internal_Config()));
                  ((c_Smarty_Internal_Config*)tmp0.get()->create(v__config_file, m_smarty));
                  v__config = tmp0;
                }
                if (LINE(147,(toBoolean(v__config->t_mustcompile())))) {
                  {
                    LINE(148,(v__config->t_compileconfigsource()));
                    {
                      echo(NAMSTR(s_ss5e877aca, " compiled in  "));
                      {
                        LINE(149,0);
                        const Variant &tmp0((x_microtime(true)));
                        echo(toString((tmp0 - v__start_time)));
                      }
                      echo(NAMSTR(s_ss381a543b, " seconds"));
                    }
                    LINE(150,(x_flush()));
                  }
                }
                else {
                  {
                    echo(NAMSTR(s_ss88a2358b, " is up to date"));
                    LINE(153,(x_flush()));
                  }
                }
              } catch (Object e) {
                if (e.instanceof(NAMSTR(s_ssae8717ad, "exception"))) {
                  v_e = e;
                  {
                    echo(NAMSTR(s_ss67e09493, "Error: "));
                    {
                      LINE(157,0);
                      MethodCallPackage mcp0;
                      CObjRef obj0 = v_e;
                      mcp0.methodCall((obj0), NAMSTR(s_ss4f2f48c7, "getMessage"), 0x71859D7313E682D2LL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      echo(toString((mcp0.ci->getMeth0Args())(mcp0, 0)));
                    }
                    echo(NAMSTR(s_ss76b3859f, "<br><br>"));
                  }
                  v__error_count++;
                } else {
                  throw;
                }
              }
              if ((!(x_is_null(v_max_errors)) && equal(v__error_count, v_max_errors))) {
                {
                  echo(NAMSTR(s_ss6ff2939f, "<br><br>too many errors"));
                  LINE(162,(f_exit()));
                }
              }
            }
          }
        }
      }
    }
  }
  return v__count;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 177 */
int64 c_Smarty_Internal_Utility::t_clearcompiledtemplate(CVarRef v_resource_name //  = null_variant
, CVarRef v_compile_id //  = null_variant
, CVarRef v_exp_time //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Utility, Smarty_Internal_Utility::clearCompiledTemplate);
  INTERCEPT_INJECTION("Smarty_Internal_Utility::clearCompiledTemplate", array_createvi(3, toVPOD(v_resource_name), toVPOD(v_compile_id), toVPOD(v_exp_time)), r);
  Variant v__compile_id;
  Variant v__dir_sep;
  String v__resource_part_1;
  String v__resource_part_2;
  Variant v__dir;
  String v__compile_id_part;
  int64 v__count = 0;
  p_RecursiveDirectoryIterator v__compileDirs;
  p_RecursiveIteratorIterator v__compile;
  Variant v__file;

  {
    Variant tmp0(((isset(v_compile_id) ? ((Variant)(LINE(179,(x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), v_compile_id))))) : ((Variant)(null)))));
    v__compile_id.assignVal(tmp0);
  }
  {
    Variant tmp0(((LINE(180,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((Variant)(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))) : ((Variant)(NAMSTR(s_sscf94e648, "^"))))));
    v__dir_sep.assignVal(tmp0);
  }
  if (isset(v_resource_name)) {
    {
      v__resource_part_1 = concat(toString(v_resource_name), NAMSTR(s_ss0fd031f1, ".php"));
      v__resource_part_2 = concat(toString(v_resource_name), NAMSTR(s_ss8b0b1277, ".cache.php"));
    }
  }
  {
    LINE(187,0);
    const Variant &tmp0((m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true)));
    v__dir.assignVal(tmp0);
  }
  if ((LINE(188,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) && isset(v__compile_id))) {
    {
      concat_assign(v__dir, concat(toString(v__compile_id), toString(v__dir_sep)));
    }
  }
  if (isset(v__compile_id)) {
    {
      {
        LINE(192,0);
        const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
        const String &tmp1((toString(v__compile_id)));
        const String &tmp2((toString(v__dir_sep)));
        v__compile_id_part = concat3(tmp0, tmp1, tmp2);
      }
    }
  }
  v__count = 0LL;
  {
    p_RecursiveDirectoryIterator tmp0 = coo_RecursiveDirectoryIterator();
    ((c_RecursiveDirectoryIterator*)tmp0.get()->create(v__dir));
    v__compileDirs = tmp0;
  }
  {
    p_RecursiveIteratorIterator tmp0 = coo_RecursiveIteratorIterator();
    ((c_RecursiveIteratorIterator*)tmp0.get()->create(VarNR(v__compileDirs), NAMVAR(s_svi90d5f98c, 2LL) /* RecursiveIteratorIterator::CHILD_FIRST */));
    v__compile = tmp0;
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v__compile.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__file);
      {
        {
          bool tmp0;
          {
            LINE(198,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__file;
            mcp1.methodCall((obj1), NAMSTR(s_ss7d1afda2, "getBasename"), 0x572E108C6731E29CLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            const Variant &tmp2((x_substr(toString((mcp1.ci->getMeth0Args())(mcp1, 0)), toInt32(0LL), toInt32(1LL))));
            tmp0 = (equal(tmp2, NAMSTR(s_ss013a8f64, ".")));
          }
          if (tmp0) {
            continue;
          }
        }
        {
          bool tmp0;
          {
            LINE(199,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__file;
            mcp1.methodCall((obj1), NAMSTR(s_ss95821704, "isDir"), 0x1ADA46FCC8EFEC08LL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (toBoolean((mcp1.ci->getMeth0Args())(mcp1, 0)));
          }
          if (tmp0) {
            {
              {
                bool tmp0;
                {
                  LINE(200,0);
                  MethodCallPackage mcp1;
                  CObjRef obj1 = v__compile;
                  mcp1.methodCall((obj1), NAMSTR(s_ss5baf0fe3, "isDot"), 0x08D1EA51B78DA5F4LL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  tmp0 = (!(toBoolean((mcp1.ci->getMeth0Args())(mcp1, 0))));
                }
                if (tmp0) {
                  {
                    {
                      Silencer tmp0(true);
                      LINE(202,0);
                      MethodCallPackage mcp1;
                      CVarRef obj1 = v__file;
                      mcp1.methodCall((obj1), NAMSTR(s_ss164363b4, "getPathname"), 0x25070641C3D924F8LL);
                      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                      x_rmdir(toString((mcp1.ci->getMeth0Args())(mcp1, 0)));
                      tmp0.disable();
                      ;
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
                  bool tmp1 = (!(isset(v__compile_id)));
                  if (!tmp1) {
                    LINE(205,0);
                    int tmp2((x_strlen((toString(v__file)))));
                    int tmp3((x_strlen(v__compile_id_part)));
                    bool tmp4 = (more(tmp2, tmp3));
                    if (tmp4) {
                      const String &tmp5((toString(v__file)));
                      String tmp6((v__compile_id_part));
                      int tmp7((x_strlen(v__compile_id_part)));
                      const Variant &tmp8((x_substr_compare((tmp5), tmp6, toInt32(0LL), tmp7)));
                      tmp4 = (equal(tmp8, 0LL));
                    }
                    tmp1 = (tmp4);
                  }
                  bool tmp9 = (tmp1);
                  if (tmp9) {
                    bool tmp10 = (!(isset(v_resource_name)));
                    if (!tmp10) {
                      LINE(206,0);
                      int tmp11((x_strlen((toString(v__file)))));
                      int tmp12((x_strlen(v__resource_part_1)));
                      bool tmp13 = (more(tmp11, tmp12));
                      if (tmp13) {
                        const String &tmp14((toString(v__file)));
                        String tmp15((v__resource_part_1));
                        int tmp16((x_strlen(v__resource_part_1)));
                        int tmp17((x_strlen(v__resource_part_1)));
                        const Variant &tmp18((x_substr_compare((tmp14), tmp15, toInt32(negate(tmp16)), tmp17)));
                        tmp13 = (equal(tmp18, 0LL));
                      }
                      tmp10 = (tmp13);
                    }
                    bool tmp19 = (tmp10);
                    if (!tmp19) {
                      LINE(207,0);
                      int tmp20((x_strlen((toString(v__file)))));
                      int tmp21((x_strlen(v__resource_part_2)));
                      bool tmp22 = (more(tmp20, tmp21));
                      if (tmp22) {
                        const String &tmp23((toString(v__file)));
                        String tmp24((v__resource_part_2));
                        int tmp25((x_strlen(v__resource_part_2)));
                        int tmp26((x_strlen(v__resource_part_2)));
                        const Variant &tmp27((x_substr_compare((tmp23), tmp24, toInt32(negate(tmp25)), tmp26)));
                        tmp22 = (equal(tmp27, 0LL));
                      }
                      tmp19 = (tmp22);
                    }
                    tmp9 = (tmp19);
                  }
                  tmp0 = (tmp9);
                }
                if (tmp0) {
                  {
                    if (isset(v_exp_time)) {
                      {
                        {
                          bool tmp0;
                          {
                            LINE(209,0);
                            int tmp1((x_time()));
                            Silencer tmp2(true);
                            Variant tmp3((x_filemtime(toString(v__file))));
                            tmp2.disable();
                            const Numeric &tmp4(((tmp1 - tmp3)));
                            tmp0 = (not_less(tmp4, v_exp_time));
                          }
                          if (tmp0) {
                            {
                              {
                                Silencer tmp0(true);
                                bool tmp1((toBoolean(LINE(210,(x_unlink((toString(v__file))))))));
                                tmp0.disable();
                                int64 tmp2(((tmp1 ? ((1LL)) : ((0LL)))));
                                v__count += tmp2;
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      {
                        {
                          Silencer tmp0(true);
                          bool tmp1((toBoolean(LINE(213,(x_unlink((toString(v__file))))))));
                          tmp0.disable();
                          int64 tmp2(((tmp1 ? ((1LL)) : ((0LL)))));
                          v__count += tmp2;
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
  return v__count;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 227 */
Variant c_Smarty_Internal_Utility::tt_gettags(p_Smarty_Internal_Template v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Utility, Smarty_Internal_Utility::getTags);
  INTERCEPT_INJECTION("Smarty_Internal_Utility::getTags", array_createvi(1, toVPOD(v_template)), r);
  Variant tmp_ref;
  v_template->m_smarty.o_setPublic(NAMSTR(s_ss3a2b51e0, "get_used_tags"), true);
  LINE(230,(v_template->t_compiletemplatesource()));
  return v_template->m_used_tags;
}
Variant c_Smarty_Internal_Utility::t_gettags(CVarRef v_template) {
  if(!v_template.instanceof(NAMSTR(s_ss4052589f, "smarty_internal_template"))) {
    throw_unexpected_argument_type(1,"Smarty_Internal_Utility::getTags()","smarty_internal_template",v_template);
    return null;
  }
  return tt_gettags((const p_Smarty_Internal_Template&)v_template.toCObjRef());
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_utility.php line 234 */
bool c_Smarty_Internal_Utility::t_testinstall() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Utility, Smarty_Internal_Utility::testInstall);
  INTERCEPT_INJECTION("Smarty_Internal_Utility::testInstall", null_array, r);
  Variant v_template_dir;
  Variant v_plugin_dir;

  echo(NAMSTR(s_ss05e9763d, "<PRE>\n"));
  echo(NAMSTR(s_ssffcc7f28, "Smarty Installation test...\n"));
  echo(NAMSTR(s_ss86e63b66, "Testing template directory...\n"));
  {
    LOOP_COUNTER(1);
    Variant map2;
    {
      LINE(242,0);
      const Array &tmp0((toArray(m_smarty.o_getPublic(NAMSTR(s_ssfc1024fb, "template_dir"), true))));
      map2 = (tmp0);
    }
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_template_dir);
      {
        {
          bool tmp0;
          {
            LINE(243,0);
            bool tmp1((x_is_dir(toString(v_template_dir))));
            tmp0 = (!(tmp1));
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ssba9d83b4, "FAILED: "));
              echo(toString(v_template_dir));
              echo(NAMSTR(s_ssd5b522dd, " is not a directory.\n"));
            }
          }
          else {
            bool tmp0;
            {
              LINE(245,0);
              bool tmp1((x_is_readable(toString(v_template_dir))));
              tmp0 = (!(tmp1));
            }
            if (tmp0) {
              {
                echo(NAMSTR(s_ssba9d83b4, "FAILED: "));
                echo(toString(v_template_dir));
                echo(NAMSTR(s_ssf5f8228b, " is not readable.\n"));
              }
            }
            else {
              {
                echo(toString(v_template_dir));
                echo(NAMSTR(s_ss5438f18a, " is OK.\n"));
              }
            }
          }
        }
      }
    }
  }
  echo(NAMSTR(s_ss9585eada, "Testing compile directory...\n"));
  {
    bool tmp0;
    {
      LINE(253,0);
      const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
      bool tmp2((x_is_dir(tmp1)));
      tmp0 = (!(tmp2));
    }
    if (tmp0) {
      {
        LINE(254,0);
        const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
        echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssd5b522dd, " is not a directory.\n")));
      }
    }
    else {
      bool tmp0;
      {
        LINE(255,0);
        const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
        bool tmp2((x_is_readable(tmp1)));
        tmp0 = (!(tmp2));
      }
      if (tmp0) {
        {
          LINE(256,0);
          const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
          echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssf5f8228b, " is not readable.\n")));
        }
      }
      else {
        bool tmp0;
        {
          LINE(257,0);
          const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
          bool tmp2((x_is_writable(tmp1)));
          tmp0 = (!(tmp2));
        }
        if (tmp0) {
          {
            LINE(258,0);
            const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
            echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssc05e67e2, " is not writable.\n")));
          }
        }
        else {
          {
            LINE(260,0);
            const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss9727a022, "compile_dir"), true))));
            echo(concat(tmp0, NAMSTR(s_ss5438f18a, " is OK.\n")));
          }
        }
      }
    }
  }
  echo(NAMSTR(s_ssfb5b318d, "Testing plugins directory...\n"));
  {
    LOOP_COUNTER(4);
    Variant map5;
    {
      LINE(264,0);
      const Array &tmp0((toArray(m_smarty.o_getPublic(NAMSTR(s_sscaae0020, "plugins_dir"), true))));
      map5 = (tmp0);
    }
    for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
      LOOP_COUNTER_CHECK(4);
      iter6.second(v_plugin_dir);
      {
        {
          bool tmp0;
          {
            LINE(265,0);
            bool tmp1((x_is_dir(toString(v_plugin_dir))));
            tmp0 = (!(tmp1));
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ssba9d83b4, "FAILED: "));
              echo(toString(v_plugin_dir));
              echo(NAMSTR(s_ssd5b522dd, " is not a directory.\n"));
            }
          }
          else {
            bool tmp0;
            {
              LINE(267,0);
              bool tmp1((x_is_readable(toString(v_plugin_dir))));
              tmp0 = (!(tmp1));
            }
            if (tmp0) {
              {
                echo(NAMSTR(s_ssba9d83b4, "FAILED: "));
                echo(toString(v_plugin_dir));
                echo(NAMSTR(s_ssf5f8228b, " is not readable.\n"));
              }
            }
            else {
              {
                echo(toString(v_plugin_dir));
                echo(NAMSTR(s_ss5438f18a, " is OK.\n"));
              }
            }
          }
        }
      }
    }
  }
  echo(NAMSTR(s_ss8a705fc2, "Testing cache directory...\n"));
  {
    bool tmp0;
    {
      LINE(275,0);
      const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
      bool tmp2((x_is_dir(tmp1)));
      tmp0 = (!(tmp2));
    }
    if (tmp0) {
      {
        LINE(276,0);
        const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
        echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssd5b522dd, " is not a directory.\n")));
      }
    }
    else {
      bool tmp0;
      {
        LINE(277,0);
        const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
        bool tmp2((x_is_readable(tmp1)));
        tmp0 = (!(tmp2));
      }
      if (tmp0) {
        {
          LINE(278,0);
          const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
          echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssf5f8228b, " is not readable.\n")));
        }
      }
      else {
        bool tmp0;
        {
          LINE(279,0);
          const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
          bool tmp2((x_is_writable(tmp1)));
          tmp0 = (!(tmp2));
        }
        if (tmp0) {
          {
            LINE(280,0);
            const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
            echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssc05e67e2, " is not writable.\n")));
          }
        }
        else {
          {
            LINE(282,0);
            const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
            echo(concat(tmp0, NAMSTR(s_ss5438f18a, " is OK.\n")));
          }
        }
      }
    }
  }
  echo(NAMSTR(s_ss100a51e8, "Testing configs directory...\n"));
  {
    bool tmp0;
    {
      LINE(286,0);
      const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss5bd6289d, "config_dir"), true))));
      bool tmp2((x_is_dir(tmp1)));
      tmp0 = (!(tmp2));
    }
    if (tmp0) {
      {
        LINE(287,0);
        const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss5bd6289d, "config_dir"), true))));
        echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssd5b522dd, " is not a directory.\n")));
      }
    }
    else {
      bool tmp0;
      {
        LINE(288,0);
        const String &tmp1((toString(m_smarty.o_getPublic(NAMSTR(s_ss5bd6289d, "config_dir"), true))));
        bool tmp2((x_is_readable(tmp1)));
        tmp0 = (!(tmp2));
      }
      if (tmp0) {
        {
          LINE(289,0);
          const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss5bd6289d, "config_dir"), true))));
          echo(concat3(NAMSTR(s_ssba9d83b4, "FAILED: "), tmp0, NAMSTR(s_ssf5f8228b, " is not readable.\n")));
        }
      }
      else {
        {
          LINE(291,0);
          const String &tmp0((toString(m_smarty.o_getPublic(NAMSTR(s_ss5bd6289d, "config_dir"), true))));
          echo(concat(tmp0, NAMSTR(s_ss5438f18a, " is OK.\n")));
        }
      }
    }
  }
  echo(NAMSTR(s_ss4d951d4e, "Tests complete.\n"));
  echo(NAMSTR(s_ss7c72c61a, "</PRE>\n"));
  return true;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Utility() {
  return NEWOBJ(c_Smarty_Internal_Utility)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_utility.php, pm_php$Smarty$libs$sysplugins$smarty_internal_utility_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_utility) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x0CDC655BF5DA2ACALL,0,0,0,66,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Utility, m_smarty),&NAMSTR(s_ss675664bf, "smarty") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Utility hash
  -1,-1,0,-1,-1,-1,-1,-1,
  // Smarty_Internal_Utility lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Utility::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
