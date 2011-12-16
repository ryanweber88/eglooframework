
#include <php/Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_filter_handler.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_TemplateCompilerBase)
const InstanceOfInfo c_Smarty_Internal_TemplateCompilerBase::s_instanceof_table[] = {
  {0x741052885B672C1ALL,1,"Smarty_Internal_TemplateCompilerBase",&cw_Smarty_Internal_TemplateCompilerBase},
};
const int c_Smarty_Internal_TemplateCompilerBase::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_TemplateCompilerBase::ci_processnocachecode((void*)&c_Smarty_Internal_TemplateCompilerBase::i_processnocachecode, (void*)&c_Smarty_Internal_TemplateCompilerBase::ifa_processnocachecode, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_TemplateCompilerBase::ci_compiletemplate((void*)&c_Smarty_Internal_TemplateCompilerBase::i_compiletemplate, (void*)&c_Smarty_Internal_TemplateCompilerBase::ifa_compiletemplate, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_TemplateCompilerBase::ci_getplugin((void*)&c_Smarty_Internal_TemplateCompilerBase::i_getplugin, (void*)&c_Smarty_Internal_TemplateCompilerBase::ifa_getplugin, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_TemplateCompilerBase::ci_compiletag((void*)&c_Smarty_Internal_TemplateCompilerBase::i_compiletag, (void*)&c_Smarty_Internal_TemplateCompilerBase::ifa_compiletag, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_TemplateCompilerBase::ci___construct((void*)&c_Smarty_Internal_TemplateCompilerBase::i___construct, (void*)&c_Smarty_Internal_TemplateCompilerBase::ifa___construct, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_TemplateCompilerBase::ci_trigger_template_error((void*)&c_Smarty_Internal_TemplateCompilerBase::i_trigger_template_error, (void*)&c_Smarty_Internal_TemplateCompilerBase::ifa_trigger_template_error, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_TemplateCompilerBase::ci_calltagcompiler((void*)&c_Smarty_Internal_TemplateCompilerBase::i_calltagcompiler, (void*)&c_Smarty_Internal_TemplateCompilerBase::ifa_calltagcompiler, 5, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_TemplateCompilerBase::i_processnocachecode(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_processnocachecode, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::processNocacheCode", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_processnocachecode(arg0, arg1));
  }
}
Variant c_Smarty_Internal_TemplateCompilerBase::i_compiletemplate(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compiletemplate, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::compileTemplate", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_compiletemplate(arg0));
  }
}
Variant c_Smarty_Internal_TemplateCompilerBase::i_getplugin(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getplugin, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::getPlugin", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_getplugin(arg0, arg1));
  }
}
Variant c_Smarty_Internal_TemplateCompilerBase::i_compiletag(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compiletag, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::compileTag", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(s_sa00000000) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compiletag(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_TemplateCompilerBase::i_trigger_template_error(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_trigger_template_error, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_trigger_template_error(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_TemplateCompilerBase::i_calltagcompiler(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_calltagcompiler, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::callTagCompiler", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_calltagcompiler(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty_Internal_TemplateCompilerBase::ifa_processnocachecode(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_processnocachecode, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::processNocacheCode", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_processnocachecode(arg0, arg1));
}
Variant c_Smarty_Internal_TemplateCompilerBase::ifa_compiletemplate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compiletemplate, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::compileTemplate", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_compiletemplate(arg0));
}
Variant c_Smarty_Internal_TemplateCompilerBase::ifa_getplugin(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getplugin, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::getPlugin", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_getplugin(arg0, arg1));
}
Variant c_Smarty_Internal_TemplateCompilerBase::ifa_compiletag(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compiletag, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::compileTag", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(count <= 2 ? (s_sva00000000) : a2);
  return (self->t_compiletag(arg0, arg1, arg2));
}
Variant c_Smarty_Internal_TemplateCompilerBase::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  return (self->t___construct(), null);
}
Variant c_Smarty_Internal_TemplateCompilerBase::ifa_trigger_template_error(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_trigger_template_error, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  return (self->t_trigger_template_error(arg0, arg1), null);
}
Variant c_Smarty_Internal_TemplateCompilerBase::ifa_calltagcompiler(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_calltagcompiler, coo_Smarty_Internal_TemplateCompilerBase);
  }
  c_Smarty_Internal_TemplateCompilerBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_TemplateCompilerBase*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_TemplateCompilerBase::callTagCompiler", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(count <= 2 ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  CVarRef arg4(count <= 4 ? null_variant : a4);
  return (self->t_calltagcompiler(arg0, arg1, arg2, arg3, arg4));
}
const MethodCallInfoTable c_Smarty_Internal_TemplateCompilerBase::s_call_info_table[] = {
  { 0x1F6DFB1F30795BE0LL, 1, 22, "trigger_template_error", &c_Smarty_Internal_TemplateCompilerBase::ci_trigger_template_error },
  { 0x17347BFA280B3B86LL, 1, 15, "compileTemplate", &c_Smarty_Internal_TemplateCompilerBase::ci_compiletemplate },
  { 0x2FF10671E4B60176LL, 0, 9, "getPlugin", &c_Smarty_Internal_TemplateCompilerBase::ci_getplugin },
  { 0x2BC7E0F6CD148C09LL, 1, 10, "compileTag", &c_Smarty_Internal_TemplateCompilerBase::ci_compiletag },
  { 0x7C2CEE2FCB91CADCLL, 1, 15, "callTagCompiler", &c_Smarty_Internal_TemplateCompilerBase::ci_calltagcompiler },
  { 0x2417111975FF20FELL, 1, 18, "processNocacheCode", &c_Smarty_Internal_TemplateCompilerBase::ci_processnocachecode },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_TemplateCompilerBase::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_TemplateCompilerBase::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,-1,1,-1,
  -1,3,-1,-1,4,-1,5,6,

};
c_Smarty_Internal_TemplateCompilerBase *c_Smarty_Internal_TemplateCompilerBase::create() {
  CountableHelper h(this);
  init();
  t___construct();
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_TemplateCompilerBase = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_TemplateCompilerBase,
  c_Smarty_Internal_TemplateCompilerBase::s_call_info_table,c_Smarty_Internal_TemplateCompilerBase::s_call_info_index,
  c_Smarty_Internal_TemplateCompilerBase::s_instanceof_table,c_Smarty_Internal_TemplateCompilerBase::s_instanceof_index,
  &c_Smarty_Internal_TemplateCompilerBase::s_class_name,
  &c_Smarty_Internal_TemplateCompilerBase::os_prop_table,&c_Smarty_Internal_TemplateCompilerBase::ci___construct,0,0
};
void c_Smarty_Internal_TemplateCompilerBase::init() {
  m_suppressNocacheProcessing = false;
  m__tag_stack = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 30 */
void c_Smarty_Internal_TemplateCompilerBase::t___construct() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_TemplateCompilerBase::__construct", null_array, );
  bool oldInCtor = gasInCtor(true);
  {
    LINE(32,0);
    const String &tmp0((toString(x_rand())));
    const String &tmp1((x_uniqid(tmp0, true)));
    const Variant &tmp2((x_str_replace(NAMVAR(s_svs013a8f64, "."), NAMVAR(s_svs935fd125, "-"), VarNR(tmp1))));
    m_nocache_hash.assignVal(tmp2);
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 41 */
Variant c_Smarty_Internal_TemplateCompilerBase::t_compiletemplate(Variant v_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase::compileTemplate);
  INTERCEPT_INJECTION("Smarty_Internal_TemplateCompilerBase::compileTemplate", array_createvi(1, toVPOD(v_template)), r);
  Variant v_saved_filepath;
  String v_template_header;
  Variant v__content;
  Variant v__compiled_code;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (empty(LINE(43,(v_template.o_getPublic(NAMSTR(s_ss90269404, "properties"), false))), NAMSTR(s_ss73233481, "nocache_hash"), true));
    }
    if (tmp0) {
      {
        {
          Variant tmp0((m_nocache_hash));
          LINE(44,(v_template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name))).set(NAMSTR(s_ss73233481, "nocache_hash"), (tmp0), true);
          tmp_ref.unset();
        }
      }
    }
    else {
      {
        {
          LINE(46,0);
          const Variant &tmp0((v_template.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
          m_nocache_hash.assignVal(tmp0);
        }
      }
    }
  }
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), false);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), false);
  m_template.assignVal(v_template);
  {
    LINE(53,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = m_template;
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    v_saved_filepath.assignVal(tmp1);
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ssb2ab272e, "_current_file"), tmp1);
    tmp_ref.unset();
  }
  v_template_header = NAMSTR(s_ss00000000, "");
  {
    bool tmp0;
    {
      LINE(56,0);
      bool tmp1((toBoolean(v_template.o_getPublic(NAMSTR(s_ss0838733b, "suppressHeader"), true))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          String tmp0((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SMARTY_VERSION))));
          LINE(57,0);
          const String &tmp1((toString(x_strftime(NAMSTR(s_ss4f2c1730, "%Y-%m-%d %H:%M:%S")))));
          concat_assign(v_template_header, concat5(NAMSTR(s_ssd2bfe0b7, "<\?php /* Smarty version "), tmp0, NAMSTR(s_ss30e45288, ", created on "), tmp1, NAMSTR(s_ss66d2232c, "\n")));
        }
        {
          LINE(58,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = m_template;
          mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
          concat_assign(v_template_header, concat3(NAMSTR(s_ssb36f270a, "         compiled from \""), tmp1, NAMSTR(s_ss79531228, "\" */ \?>\n")));
        }
      }
    }
  }
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssf7849b08, "abort_and_recompile"), false);
        {
          LINE(65,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_template;
          mcp0.methodCall((obj0), NAMSTR(s_ss2f523486, "getTemplateSource"), 0x2119F0DDD5901F20LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
          v__content.assignVal(tmp1);
        }
        {
          bool tmp0;
          {
            bool tmp1 = (isset(LINE(67,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ssb05f1099, "autoload_filters"), false))), NAMSTR(s_ssd179fbac, "pre"), true));
            if (!tmp1) {
              tmp1 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), false), NAMSTR(s_ssd179fbac, "pre"), true));
            }
            tmp0 = (tmp1);
          }
          if (tmp0) {
            {
              {
                fi.setStaticClassName(c_Smarty_Internal_Filter_Handler::s_class_name);
                LINE(68,0);
                const Variant &tmp0((((checkClassExistsThrow(NAMSTR(s_ss1b85235e, "Smarty_Internal_Filter_Handler"), &g->CDEC(smarty_internal_filter_handler))), (c_Smarty_Internal_Filter_Handler::t_runfilter(NAMVAR(s_svsd179fbac, "pre"), v__content, v_template)))));
                fi.resetStaticClassName();
                v__content.assignVal(tmp0);
                v_template.o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), tmp0);
              }
            }
          }
        }
        if (equal(v__content, NAMSTR(s_ss00000000, ""))) {
          {
            if (LINE(72,(toBoolean(v_template.o_getPublic(NAMSTR(s_ss3600cf36, "suppressFileDependency"), true))))) {
              {
                v_template.o_setPublic(NAMSTR(s_ss8a1ec5e7, "compiled_template"), NAMSTR(s_ss00000000, ""));
              }
            }
            else {
              {
                {
                  LINE(75,0);
                  MethodCallPackage mcp0;
                  CVarRef obj0 = v_template;
                  mcp0.methodCall((obj0), NAMSTR(s_ss939eb7a9, "createPropertyHeader"), 0x2484F07065CD0316LL);
                  const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                  const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
                  String tmp2((v_template_header));
                  v_template.o_setPublic(NAMSTR(s_ss8a1ec5e7, "compiled_template"), concat(tmp2, tmp1));
                }
              }
            }
            return true;
          }
        }
        {
          LINE(80,0);
          MethodCallPackage mcp0;
          mcp0.methodCall((GET_THIS_VALID()), NAMSTR(s_ss54322030, "doCompile"), 0x57E37E95FD9331AFLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, v__content)));
          v__compiled_code.assignVal(tmp1);
        }
      }
    } while (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssf7849b08, "abort_and_recompile"), true)));
  }
  {
    m_template.o_setPublic(NAMSTR(s_ss1994ea1c, "template_filepath"), v_saved_filepath);
  }
  if (LINE(85,(toBoolean(v_template.o_getPublic(NAMSTR(s_ss3600cf36, "suppressFileDependency"), true))))) {
    {
      {
        v_template.o_setPublic(NAMSTR(s_ss8a1ec5e7, "compiled_template"), v__compiled_code);
      }
    }
  }
  else {
    {
      {
        LINE(88,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_template;
        mcp0.methodCall((obj0), NAMSTR(s_ss939eb7a9, "createPropertyHeader"), 0x2484F07065CD0316LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
        String tmp2((v_template_header));
        const String &tmp3((toString(v__compiled_code)));
        v_template.o_setPublic(NAMSTR(s_ss8a1ec5e7, "compiled_template"), concat3(tmp2, tmp1, tmp3));
      }
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (isset(LINE(91,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ssb05f1099, "autoload_filters"), false))), NAMSTR(s_ssccae2184, "post"), true));
      if (!tmp1) {
        tmp1 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), false), NAMSTR(s_ssccae2184, "post"), true));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          LINE(92,0);
          const Variant &tmp0((v_template.o_getPublic(NAMSTR(s_ss8a1ec5e7, "compiled_template"), true)));
          fi.setStaticClassName(c_Smarty_Internal_Filter_Handler::s_class_name);
          const Variant &tmp1((((checkClassExistsThrow(NAMSTR(s_ss1b85235e, "Smarty_Internal_Filter_Handler"), &g->CDEC(smarty_internal_filter_handler))), (c_Smarty_Internal_Filter_Handler::t_runfilter(NAMVAR(s_svsccae2184, "post"), tmp0, v_template)))));
          fi.resetStaticClassName();
          v_template.o_setPublic(NAMSTR(s_ss8a1ec5e7, "compiled_template"), tmp1);
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 107 */
Variant c_Smarty_Internal_TemplateCompilerBase::t_compiletag(CVarRef v_tag, Variant v_args, CVarRef v_parameter //  = s_sva00000000
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase::compileTag);
  INTERCEPT_INJECTION("Smarty_Internal_TemplateCompilerBase::compileTag", array_createvi(3, toVPOD(v_tag), toVPOD(v_args), toVPOD(v_parameter)), r);
  Variant v__output;
  Primitive v_key = 0;
  Variant v_attribute;
  Variant v_methode;
  Variant v_type;
  Variant v_new_args;
  Variant v_mixed;
  Variant v_function;
  Variant v_plugin_type;
  String v_plugin;
  Object v_plugin_object;
  Variant v_base_tag;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), true);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss6e57636d, "has_output"), false);
  {
    bool tmp0;
    {
      tmp0 = ((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_isset(NAMSTR(s_ss3a2b51e0, "get_used_tags"), s_class_name) && LINE(114,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss3a2b51e0, "get_used_tags"), true))))));
    }
    if (tmp0) {
      {
        {
          LINE(115,(m_template.o_lval(NAMSTR(s_ss61b147e5, "used_tags"), tmp_ref, s_class_name))).append((VarNR(Array(array_createvi(2, toVPOD(v_tag), toVPOD(v_args))))));
          tmp_ref.unset();
        }
      }
    }
  }
  if ((((LINE(118,(x_in_array(NAMVAR(s_svs61f561df, "'nocache'"), v_args))) || x_in_array(s_sva42c6e33f, v_args)) || LINE(119,(x_in_array(s_sva10d5b27a, v_args)))) || x_in_array(s_sva22d7630c, v_args))) {
    {
      GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
    }
  }
  {
    bool tmp0;
    {
      LINE(123,0);
      const Variant &tmp1((t_calltagcompiler(v_tag, v_args, v_parameter)));
      tmp0 = (same(v__output.assignVal(tmp1), false));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            tmp0 = (isset(LINE(124,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), false))), v_tag));
          }
          if (tmp0) {
            {
              {
                LINE(126,(lval(v_args.lvalAt(NAMSTR(s_ss2e02e7b4, "_attr"), AccessFlags::CheckExist_Key)))).set(NAMSTR(s_ssdc3cbddc, "name"), (VarNR(concat3(NAMSTR(s_sse07b87c4, "'"), toString(v_tag), NAMSTR(s_sse07b87c4, "'")))), true);
              }
              {
                LINE(127,0);
                const Variant &tmp0((t_calltagcompiler(NAMVAR(s_svs50149f8c, "call"), v_args, v_parameter)));
                v__output.assignVal(tmp0);
              }
            }
          }
        }
      }
    }
  }
  if (!same(v__output, false)) {
    {
      if (!same(v__output, true)) {
        {
          if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss11e77b3f, "has_code"), true))) {
            {
              if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss6e57636d, "has_output"), true))) {
                {
                  concat_assign(v__output, NAMSTR(s_ss66d2232c, "\n"));
                }
              }
              return v__output;
            }
          }
        }
      }
      return NAMSTR(s_ss00000000, "");
    }
  }
  else {
    {
      {
        bool tmp0;
        {
          tmp0 = (isset(v_args, NAMSTR(s_ss2e02e7b4, "_attr"), true));
        }
        if (tmp0) {
          {
            {
              LOOP_COUNTER(1);
              Variant map2 = LINE(147,(v_args.rvalAt(NAMSTR(s_ss2e02e7b4, "_attr"), AccessFlags::Error_Key)));
              for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                LOOP_COUNTER_CHECK(1);
                iter3.second(v_attribute);
                v_key.assignVal(iter3.first());
                {
                  if (x_is_array(v_attribute)) {
                    {
                      {
                        LINE(149,0);
                        const Variant &tmp0((x_array_merge(2, v_args, Array(array_createvi(1, toVPOD(v_attribute))))));
                        v_args.assignVal(tmp0);
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
        bool tmp0;
        {
          LINE(154,0);
          int tmp1((x_strlen(toString(v_tag))));
          bool tmp2 = (less(tmp1, 6LL));
          if (!tmp2) {
            const Variant &tmp3((x_substr(toString(v_tag), toInt32(-5LL))));
            tmp2 = (!equal(tmp3, NAMSTR(s_ssf052ec6b, "close")));
          }
          tmp0 = (tmp2);
        }
        if (tmp0) {
          {
            {
              bool tmp0;
              {
                bool tmp1 = (isset(LINE(156,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), false))), v_tag));
                if (tmp1) {
                  tmp1 = (isset(v_parameter, NAMSTR(s_ss34c768cb, "object_methode"), true));
                }
                tmp0 = (tmp1);
              }
              if (tmp0) {
                {
                  {
                    LINE(157,0);
                    const Variant &tmp0((v_parameter.rvalAt(NAMSTR(s_ss34c768cb, "object_methode"), AccessFlags::Error_Key)));
                    v_methode.assignVal(tmp0);
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((v_methode));
                      LINE(158,0);
                      const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), true).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(3LL, AccessFlags::Error)));
                      bool tmp3((x_in_array(tmp1, tmp2)));
                      bool tmp4 = (!(tmp3));
                      if (tmp4) {
                        bool tmp5 = (empty(LINE(159,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), false).rvalRef(v_tag, tmp_ref))), 1LL));
                        if (!tmp5) {
                          Variant tmp6((v_methode));
                          const Variant &tmp7((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), true).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error)));
                          tmp5 = (x_in_array(tmp6, tmp7));
                        }
                        tmp4 = (tmp5);
                      }
                      tmp0 = (tmp4);
                      tmp_ref.unset();
                    }
                    if (tmp0) {
                      {
                        return LINE(160,(t_calltagcompiler(NAMVAR(s_svs048036c1, "private_object_function"), v_args, v_parameter, v_tag, v_methode)));
                      }
                    }
                    else {
                      bool tmp0;
                      {
                        Variant tmp1((v_methode));
                        LINE(161,0);
                        const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), true).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(3LL, AccessFlags::Error)));
                        tmp0 = (x_in_array(tmp1, tmp2));
                        tmp_ref.unset();
                      }
                      if (tmp0) {
                        {
                          return LINE(162,(t_calltagcompiler(NAMVAR(s_svs55cc3ebb, "private_object_block_function"), v_args, v_parameter, v_tag, v_methode)));
                        }
                      }
                      else {
                        {
                          {
                            const String &tmp0((toString(v_methode)));
                            const String &tmp1((toString(v_tag)));
                            LINE(164,0);
                            const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                            return (t_trigger_template_error(VarNR(concat5(NAMSTR(s_ss21f60198, "unallowed methode \""), tmp0, NAMSTR(s_ss54637257, "\" in registered object \""), tmp1, NAMSTR(s_ss7e5fc106, "\""))), tmp2), null);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            {
              LOOP_COUNTER(4);
              Variant map5 = Array(array_createvi(3, toVPOD(VarNR(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_COMPILER)))), toVPOD(VarNR(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_FUNCTION)))), toVPOD(VarNR(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))))));
              for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
                LOOP_COUNTER_CHECK(4);
                iter6.second(v_type);
                {
                  {
                    bool tmp0;
                    {
                      tmp0 = (isset(LINE(169,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), false).rvalRef(v_type, tmp_ref))), v_tag));
                      tmp_ref.unset();
                    }
                    if (tmp0) {
                      {
                        if (equal(v_type, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_COMPILER)))) {
                          {
                            v_new_args = s_sa00000000;
                            {
                              LOOP_COUNTER(7);
                              for (ArrayIter iter9 = v_args.begin(s_class_name, true); !iter9.end(); ++iter9) {
                                LOOP_COUNTER_CHECK(7);
                                iter9.second(v_mixed);
                                v_key.assignVal(iter9.first());
                                {
                                  if (x_is_array(v_mixed)) {
                                    {
                                      {
                                        LINE(175,0);
                                        const Variant &tmp0((x_array_merge(2, v_new_args, Array(array_createvi(1, toVPOD(v_mixed))))));
                                        v_new_args.assignVal(tmp0);
                                      }
                                    }
                                  }
                                  else {
                                    {
                                      v_new_args.set(v_key, (v_mixed));
                                    }
                                  }
                                }
                              }
                            }
                            {
                              bool tmp0;
                              {
                                LINE(180,0);
                                bool tmp1((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error))));
                                tmp0 = (!(tmp1));
                                tmp_ref.unset();
                              }
                              if (tmp0) {
                                {
                                  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
                                }
                              }
                            }
                            {
                              LINE(183,0);
                              const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
                              v_function.assignVal(tmp0);
                              tmp_ref.unset();
                            }
                            if (!(x_is_array(v_function))) {
                              {
                                {
                                  const CallInfo *cit0;
                                  void *vt0;
                                  get_call_info_or_fail(cit0, vt0, v_function);
                                  return wrap_variant(LINE(185,((cit0->getFunc2Args())(vt0, 2, v_new_args, GET_THIS_TYPED(Smarty_Internal_TemplateCompilerBase)))));
                                }
                              }
                            }
                            else {
                              bool tmp0;
                              {
                                LINE(186,0);
                                const Variant &tmp1((v_function.rvalAt(0LL, AccessFlags::Error)));
                                tmp0 = (x_is_object(tmp1));
                              }
                              if (tmp0) {
                                {
                                  {
                                    LINE(187,0);
                                    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
                                    MethodCallPackage mcp0;
                                    CVarRef obj0 = tmp1;
                                    CStrRef mth0 = toString(v_function.rvalAt(1LL, AccessFlags::Error));
                                    mcp0.methodCall((obj0), mth0, -1);
                                    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                                    return wrap_variant((mcp0.bindClass(fi)->getMeth2Args())(mcp0, 2, v_new_args, GET_THIS_TYPED(Smarty_Internal_TemplateCompilerBase)));
                                  }
                                }
                              }
                              else {
                                {
                                  {
                                    LINE(189,0);
                                    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
                                    return x_call_user_func_array(tmp0, Array(array_createvi(2, toVPOD(v_new_args), toVPOD(VarNR(GET_THIS_TYPED(Smarty_Internal_TemplateCompilerBase))))));
                                  }
                                }
                              }
                            }
                          }
                        }
                        if ((equal(v_type, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_FUNCTION))) || equal(v_type, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))))) {
                          {
                            return LINE(194,(t_calltagcompiler(VarNR(concat(NAMSTR(s_ss988ba925, "private_registered_"), toString(v_type))), v_args, v_parameter, v_tag)));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            {
              LOOP_COUNTER(10);
              Variant map11 = LINE(199,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss123fda8a, "plugin_search_order"), true)));
              for (ArrayIter iter12 = map11.begin(s_class_name, true); !iter12.end(); iter12.next()) {
                LOOP_COUNTER_CHECK(10);
                iter12.second(v_plugin_type);
                {
                  {
                    bool tmp0;
                    {
                      bool tmp1 = (equal(v_plugin_type, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))));
                      if (tmp1) {
                        LINE(200,0);
                        MethodCallPackage mcp2;
                        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
                        mcp2.methodCall((obj2), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
                        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
                        tmp1 = (toBoolean((mcp2.ci->getMeth1Args())(mcp2, 1, VarNR(concat(NAMSTR(s_ssca886f96, "smarty_compiler_"), toString(v_tag))))));
                      }
                      tmp0 = (tmp1);
                    }
                    if (tmp0) {
                      {
                        v_plugin = concat(NAMSTR(s_ssca886f96, "smarty_compiler_"), toString(v_tag));
                        if (LINE(202,(x_is_callable(v_plugin)))) {
                          {
                            v_new_args = s_sa00000000;
                            {
                              LOOP_COUNTER(13);
                              for (ArrayIter iter15 = v_args.begin(s_class_name, true); !iter15.end(); ++iter15) {
                                LOOP_COUNTER_CHECK(13);
                                iter15.second(v_mixed);
                                v_key.assignVal(iter15.first());
                                {
                                  if (x_is_array(v_mixed)) {
                                    {
                                      {
                                        LINE(207,0);
                                        const Variant &tmp0((x_array_merge(2, v_new_args, Array(array_createvi(1, toVPOD(v_mixed))))));
                                        v_new_args.assignVal(tmp0);
                                      }
                                    }
                                  }
                                  else {
                                    {
                                      v_new_args.set(v_key, (v_mixed));
                                    }
                                  }
                                }
                              }
                            }
                            {
                              const CallInfo *cit0;
                              void *vt0;
                              get_call_info_or_fail(cit0, vt0, v_plugin);
                              const Variant &tmp1((v_new_args));
                              const Variant tmp2 = v_new_args;
                              const Variant &tmp3 = cit0->isRef(0) ? tmp1 : tmp2;
                              const Variant &tmp4((GET_THIS_ARROW()o_argval(cit0->isRef(1), NAMSTR(s_ss675664bf, "smarty"), true, s_class_name)));
                              return wrap_variant(LINE(212,((cit0->getFunc2Args())(vt0, 2, tmp3, tmp4))));
                            }
                          }
                        }
                        if (LINE(214,(x_class_exists(v_plugin, false)))) {
                          {
                            {
                              Object obj1(create_object_only(v_plugin));
                              MethodCallPackage mcp0;
                              mcp0.construct(obj1);
                              const CallInfo *cit0 = mcp0.ci;
                              (cit0->getMeth0Args())(mcp0, 0);
                              LINE(215,0);
                              const Object &tmp2((id(obj1)));
                              v_plugin_object = tmp2;
                            }
                            if (LINE(216,(x_method_exists(VarNR(v_plugin_object), NAMSTR(s_ss01a914a3, "compile"))))) {
                              {
                                {
                                  LINE(217,0);
                                  MethodCallPackage mcp0;
                                  CObjRef obj0 = v_plugin_object;
                                  mcp0.methodCall((obj0), NAMSTR(s_ss01a914a3, "compile"), 0x7EC12489E158EB37LL);
                                  const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                                  return wrap_variant((mcp0.bindClass(fi)->getMeth2Args())(mcp0, 2, v_args, VarNR(GET_THIS_TYPED(Smarty_Internal_TemplateCompilerBase))));
                                }
                              }
                            }
                          }
                        }
                        {
                          p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                          throw_exception(LINE(220,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssd006c0d6, "Plugin \""), toString(v_tag), NAMSTR(s_ssd8aa6734, "\" not callable")))), tmp0))));
                        }
                      }
                    }
                    else {
                      {
                        {
                          bool tmp0;
                          {
                            LINE(222,0);
                            const Variant &tmp1((t_getplugin(v_tag, v_plugin_type)));
                            tmp0 = (toBoolean(v_function.assignVal(tmp1)));
                          }
                          if (tmp0) {
                            {
                              return LINE(223,(t_calltagcompiler(VarNR(concat3(NAMSTR(s_ss65004ce1, "private_"), toString(v_plugin_type), NAMSTR(s_ssb025d9ca, "_plugin"))), v_args, v_parameter, v_tag, v_function)));
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
              LINE(229,0);
              const Variant &tmp0((x_substr(toString(v_tag), toInt32(0LL), toInt32(-5LL))));
              v_base_tag.assignVal(tmp0);
            }
            {
              bool tmp0;
              {
                bool tmp1 = (isset(LINE(231,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), false))), v_base_tag));
                if (tmp1) {
                  tmp1 = (isset(v_parameter, NAMSTR(s_ss34c768cb, "object_methode"), true));
                }
                tmp0 = (tmp1);
              }
              if (tmp0) {
                {
                  {
                    LINE(232,0);
                    const Variant &tmp0((v_parameter.rvalAt(NAMSTR(s_ss34c768cb, "object_methode"), AccessFlags::Error_Key)));
                    v_methode.assignVal(tmp0);
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((v_methode));
                      LINE(233,0);
                      const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), true).rvalRef(v_base_tag, tmp_ref, AccessFlags::Error).rvalAt(3LL, AccessFlags::Error)));
                      tmp0 = (x_in_array(tmp1, tmp2));
                      tmp_ref.unset();
                    }
                    if (tmp0) {
                      {
                        return LINE(234,(t_calltagcompiler(NAMVAR(s_svs55cc3ebb, "private_object_block_function"), v_args, v_parameter, v_tag, v_methode)));
                      }
                    }
                    else {
                      {
                        {
                          const String &tmp0((toString(v_methode)));
                          const String &tmp1((toString(v_base_tag)));
                          LINE(236,0);
                          const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                          return (t_trigger_template_error(VarNR(concat5(NAMSTR(s_ss114f0a7a, "unallowed closing tag methode \""), tmp0, NAMSTR(s_ss54637257, "\" in registered object \""), tmp1, NAMSTR(s_ss7e5fc106, "\""))), tmp2), null);
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
                String tmp1((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))));
                tmp0 = (isset(LINE(240,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), false).rvalRef(tmp1, tmp_ref))), v_base_tag));
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  return LINE(241,(t_calltagcompiler(NAMVAR(s_svsc912e84d, "private_registered_block"), v_args, v_parameter, v_tag)));
                }
              }
            }
            {
              bool tmp0;
              {
                LINE(244,0);
                const Variant &tmp1((t_getplugin(v_base_tag, VarNR(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))))));
                tmp0 = (toBoolean(v_function.assignVal(tmp1)));
              }
              if (tmp0) {
                {
                  return LINE(245,(t_calltagcompiler(NAMVAR(s_svs9f5140b6, "private_block_plugin"), v_args, v_parameter, v_tag, v_function)));
                }
              }
            }
            {
              bool tmp0;
              {
                LINE(247,0);
                MethodCallPackage mcp1;
                CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
                mcp1.methodCall((obj1), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
                const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                tmp0 = (toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(concat(NAMSTR(s_ssca886f96, "smarty_compiler_"), toString(v_tag))))));
              }
              if (tmp0) {
                {
                  v_plugin = concat(NAMSTR(s_ssca886f96, "smarty_compiler_"), toString(v_tag));
                  if (LINE(249,(x_is_callable(v_plugin)))) {
                    {
                      {
                        const CallInfo *cit0;
                        void *vt0;
                        get_call_info_or_fail(cit0, vt0, v_plugin);
                        const Variant &tmp1((v_args));
                        const Variant tmp2 = v_args;
                        const Variant &tmp3 = cit0->isRef(0) ? tmp1 : tmp2;
                        const Variant &tmp4((GET_THIS_ARROW()o_argval(cit0->isRef(1), NAMSTR(s_ss675664bf, "smarty"), true, s_class_name)));
                        return wrap_variant(LINE(250,((cit0->getFunc2Args())(vt0, 2, tmp3, tmp4))));
                      }
                    }
                  }
                  if (LINE(252,(x_class_exists(v_plugin, false)))) {
                    {
                      {
                        Object obj1(create_object_only(v_plugin));
                        MethodCallPackage mcp0;
                        mcp0.construct(obj1);
                        const CallInfo *cit0 = mcp0.ci;
                        (cit0->getMeth0Args())(mcp0, 0);
                        LINE(253,0);
                        const Object &tmp2((id(obj1)));
                        v_plugin_object = tmp2;
                      }
                      if (LINE(254,(x_method_exists(VarNR(v_plugin_object), NAMSTR(s_ss01a914a3, "compile"))))) {
                        {
                          {
                            LINE(255,0);
                            MethodCallPackage mcp0;
                            CObjRef obj0 = v_plugin_object;
                            mcp0.methodCall((obj0), NAMSTR(s_ss01a914a3, "compile"), 0x7EC12489E158EB37LL);
                            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                            return wrap_variant((mcp0.bindClass(fi)->getMeth2Args())(mcp0, 2, v_args, VarNR(GET_THIS_TYPED(Smarty_Internal_TemplateCompilerBase))));
                          }
                        }
                      }
                    }
                  }
                  {
                    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                    throw_exception(LINE(258,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssd006c0d6, "Plugin \""), toString(v_tag), NAMSTR(s_ssd8aa6734, "\" not callable")))), tmp0))));
                  }
                }
              }
            }
          }
        }
      }
      {
        const String &tmp0((toString(v_tag)));
        LINE(261,0);
        const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
        t_trigger_template_error(VarNR(concat3(NAMSTR(s_ss082fb085, "unknown tag \""), tmp0, NAMSTR(s_ss7e5fc106, "\""))), tmp1);
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 279 */
Variant c_Smarty_Internal_TemplateCompilerBase::t_calltagcompiler(CVarRef v_tag, CVarRef v_args, CVarRef v_param1 //  = null_variant
, CVarRef v_param2 //  = null_variant
, CVarRef v_param3 //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase::callTagCompiler);
  INTERCEPT_INJECTION("Smarty_Internal_TemplateCompilerBase::callTagCompiler", array_createvi(5, toVPOD(v_tag), toVPOD(v_args), toVPOD(v_param1), toVPOD(v_param2), toVPOD(v_param3)), r);
  String v_class_name;

  if (isset(g->s_Smarty_Internal_TemplateCompilerBase____tag_objects, v_tag)) {
    {
      {
        LINE(284,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = g->s_Smarty_Internal_TemplateCompilerBase____tag_objects.rvalAt(v_tag, AccessFlags::Error);
        mcp0.methodCall((obj0), NAMSTR(s_ss01a914a3, "compile"), 0x7EC12489E158EB37LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        return wrap_variant((mcp0.bindClass(fi)->getMeth5Args())(mcp0, 5, v_args, VarNR(GET_THIS_TYPED(Smarty_Internal_TemplateCompilerBase)), v_param1, v_param2, v_param3));
      }
    }
  }
  v_class_name = concat(NAMSTR(s_ss6e846ca8, "Smarty_Internal_Compile_"), toString(v_tag));
  {
    bool tmp0;
    {
      LINE(288,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
      mcp1.methodCall((obj1), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(v_class_name))));
    }
    if (tmp0) {
      {
        {
          Object obj1(create_object_only(v_class_name));
          MethodCallPackage mcp0;
          mcp0.construct(obj1);
          const CallInfo *cit0 = mcp0.ci;
          (cit0->getMeth0Args())(mcp0, 0);
          LINE(290,0);
          const Object &tmp2((id(obj1)));
          g->s_Smarty_Internal_TemplateCompilerBase____tag_objects.set(v_tag, (VarNR(tmp2)));
        }
        {
          LINE(292,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = g->s_Smarty_Internal_TemplateCompilerBase____tag_objects.rvalAt(v_tag, AccessFlags::Error);
          mcp0.methodCall((obj0), NAMSTR(s_ss01a914a3, "compile"), 0x7EC12489E158EB37LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          return wrap_variant((mcp0.bindClass(fi)->getMeth5Args())(mcp0, 5, v_args, VarNR(GET_THIS_TYPED(Smarty_Internal_TemplateCompilerBase)), v_param1, v_param2, v_param3));
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 305 */
Variant c_Smarty_Internal_TemplateCompilerBase::t_getplugin(CVarRef v_plugin_name, CVarRef v_type) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase::getPlugin);
  INTERCEPT_INJECTION("Smarty_Internal_TemplateCompilerBase::getPlugin", array_createvi(2, toVPOD(v_plugin_name), toVPOD(v_type)), r);
  Variant v_function;
  bool v_found = false;
  Variant v__plugin_dir;
  String v_file;

  Variant tmp_ref;
  setNull(v_function);
  if ((LINE(308,(toBoolean(m_template.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))) && (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)) || toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true))))) {
    {
      {
        bool tmp0;
        {
          tmp0 = (isset(LINE(309,(m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), false).rvalRef(NAMSTR(s_ss8b74ea02, "nocache"), tmp_ref, AccessFlags::Key).rvalRef(v_plugin_name, tmp_ref))), v_type));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            {
              LINE(310,0);
              const Variant &tmp0((m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalRef(NAMSTR(s_ss8b74ea02, "nocache"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_plugin_name, tmp_ref, AccessFlags::Error).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
              v_function.assignVal(tmp0);
              tmp_ref.unset();
            }
          }
        }
        else {
          bool tmp0;
          {
            tmp0 = (isset(LINE(311,(m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), false).rvalRef(NAMSTR(s_ss9094af88, "compiled"), tmp_ref, AccessFlags::Key).rvalRef(v_plugin_name, tmp_ref))), v_type));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                LINE(312,0);
                const Variant &tmp0((m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalRef(NAMSTR(s_ss9094af88, "compiled"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_plugin_name, tmp_ref, AccessFlags::Error).rvalAt(v_type, AccessFlags::Error)));
                lval(lval(m_template.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::CheckExist_Key)).lvalAt(v_plugin_name, AccessFlags::CheckExist)).set(v_type, (tmp0));
                tmp_ref.unset();
              }
              {
                LINE(313,0);
                const Variant &tmp0((m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalRef(NAMSTR(s_ss8b74ea02, "nocache"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_plugin_name, tmp_ref, AccessFlags::Error).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
                v_function.assignVal(tmp0);
                tmp_ref.unset();
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
          tmp0 = (isset(LINE(316,(m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), false).rvalRef(NAMSTR(s_ss9094af88, "compiled"), tmp_ref, AccessFlags::Key).rvalRef(v_plugin_name, tmp_ref))), v_type));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            {
              LINE(317,0);
              const Variant &tmp0((m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalRef(NAMSTR(s_ss9094af88, "compiled"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_plugin_name, tmp_ref, AccessFlags::Error).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
              v_function.assignVal(tmp0);
              tmp_ref.unset();
            }
          }
        }
        else {
          bool tmp0;
          {
            tmp0 = (isset(LINE(318,(m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), false).rvalRef(NAMSTR(s_ss8b74ea02, "nocache"), tmp_ref, AccessFlags::Key).rvalRef(v_plugin_name, tmp_ref))), v_type));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                LINE(319,0);
                const Variant &tmp0((m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalRef(NAMSTR(s_ss8b74ea02, "nocache"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_plugin_name, tmp_ref, AccessFlags::Error).rvalAt(v_type, AccessFlags::Error)));
                lval(lval(m_template.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss9094af88, "compiled"), AccessFlags::CheckExist_Key)).lvalAt(v_plugin_name, AccessFlags::CheckExist)).set(v_type, (tmp0));
                tmp_ref.unset();
              }
              {
                LINE(320,0);
                const Variant &tmp0((m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalRef(NAMSTR(s_ss9094af88, "compiled"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_plugin_name, tmp_ref, AccessFlags::Error).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
                v_function.assignVal(tmp0);
                tmp_ref.unset();
              }
            }
          }
        }
      }
    }
  }
  if (isset(v_function)) {
    {
      if (equal(v_type, NAMSTR(s_ssa24a50b0, "modifier"))) {
        {
          {
            LINE(325,(m_template.o_lval(NAMSTR(s_ss8e649995, "saved_modifier"), tmp_ref, s_class_name))).set(v_plugin_name, (true_varNR));
            tmp_ref.unset();
          }
        }
      }
      return v_function;
    }
  }
  v_function = concat4(NAMSTR(s_ssbb3667f8, "smarty_"), toString(v_type), NAMSTR(s_ss7f06ffcd, "_"), toString(v_plugin_name));
  v_found = false;
  {
    LOOP_COUNTER(1);
    Variant map2;
    {
      LINE(332,0);
      const Array &tmp0((toArray(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_sscaae0020, "plugins_dir"), true))));
      map2 = (tmp0);
    }
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__plugin_dir);
      {
        {
          LINE(333,0);
          const String &tmp0((x_rtrim(toString(v__plugin_dir), NAMSTR(s_ss8ed589f3, "/\\"))));
          const String &tmp1((toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))));
          const String &tmp2((toString(v_type)));
          const String &tmp3((toString(v_plugin_name)));
          v_file = concat6(tmp0, tmp1, tmp2, NAMSTR(s_ss013a8f64, "."), tmp3, NAMSTR(s_ss0fd031f1, ".php"));
        }
        if (LINE(334,(x_file_exists(v_file)))) {
          {
            v_found = true;
            break;
          }
        }
      }
    }
  }
  if (v_found) {
    {
      if ((LINE(341,(toBoolean(m_template.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))) && (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)) || toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true))))) {
        {
          {
            LINE(342,(lval(lval(lval(m_template.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::CheckExist_Key)).lvalAt(v_plugin_name, AccessFlags::CheckExist)).lvalAt(v_type, AccessFlags::CheckExist)))).set(NAMSTR(s_ss8ce7db5b, "file"), (VarNR(v_file)), true);
            tmp_ref.unset();
          }
          {
            Variant tmp0((v_function));
            LINE(343,(lval(lval(lval(m_template.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::CheckExist_Key)).lvalAt(v_plugin_name, AccessFlags::CheckExist)).lvalAt(v_type, AccessFlags::CheckExist)))).set(NAMSTR(s_ss52403931, "function"), (tmp0), true);
            tmp_ref.unset();
          }
        }
      }
      else {
        {
          {
            LINE(345,(lval(lval(lval(m_template.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss9094af88, "compiled"), AccessFlags::CheckExist_Key)).lvalAt(v_plugin_name, AccessFlags::CheckExist)).lvalAt(v_type, AccessFlags::CheckExist)))).set(NAMSTR(s_ss8ce7db5b, "file"), (VarNR(v_file)), true);
            tmp_ref.unset();
          }
          {
            Variant tmp0((v_function));
            LINE(346,(lval(lval(lval(m_template.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss9094af88, "compiled"), AccessFlags::CheckExist_Key)).lvalAt(v_plugin_name, AccessFlags::CheckExist)).lvalAt(v_type, AccessFlags::CheckExist)))).set(NAMSTR(s_ss52403931, "function"), (tmp0), true);
            tmp_ref.unset();
          }
        }
      }
      if (equal(v_type, NAMSTR(s_ssa24a50b0, "modifier"))) {
        {
          {
            LINE(349,(m_template.o_lval(NAMSTR(s_ss8e649995, "saved_modifier"), tmp_ref, s_class_name))).set(v_plugin_name, (true_varNR));
            tmp_ref.unset();
          }
        }
      }
      return v_function;
    }
  }
  if (LINE(353,(x_is_callable(v_function)))) {
    {
      return v_function;
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 371 */
Variant c_Smarty_Internal_TemplateCompilerBase::t_processnocachecode(CVarRef v_content, CVarRef v_is_code) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase::processNocacheCode);
  INTERCEPT_INJECTION("Smarty_Internal_TemplateCompilerBase::processNocacheCode", array_createvi(2, toVPOD(v_content), toVPOD(v_is_code)), r);
  Variant v__output;
  Primitive v_plugin_name = 0;
  Variant v_dummy;

  Variant tmp_ref;
  if ((toBoolean(v_is_code) && !(empty(v_content)))) {
    {
      {
        bool tmp0;
        {
          LINE(376,0);
          bool tmp1((toBoolean(m_template.o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
          bool tmp2 = ((((!(tmp1) || toBoolean(m_template.o_getPublic(NAMSTR(s_ssd326038d, "forceNocache"), true))) && toBoolean(m_template.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))) && !(toBoolean(m_suppressNocacheProcessing))));
          if (tmp2) {
            bool tmp3 = ((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)) || toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true))));
            if (!tmp3) {
              LINE(377,0);
              const Variant &tmp4((m_template.o_getPublic(NAMSTR(s_ssd326038d, "forceNocache"), true)));
              tmp3 = (equal(tmp4, 2LL));
            }
            tmp2 = (tmp3);
          }
          tmp0 = (tmp2);
        }
        if (tmp0) {
          {
            m_template.o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true);
            {
              LINE(379,0);
              const Variant &tmp0((x_str_replace(NAMVAR(s_svse07b87c4, "'"), NAMVAR(s_svs0e28ee88, "\\'"), v_content)));
              v__output.assignVal(tmp0);
            }
            {
              LINE(380,0);
              const Variant &tmp0((x_str_replace(NAMVAR(s_svsfc8f9662, "^#^"), NAMVAR(s_svse07b87c4, "'"), v__output)));
              v__output.assignVal(tmp0);
            }
            v__output = StringBuffer().addWithTaint("<\?php echo '/*%%SmartyNocache:", 30).addWithTaint(toString(m_nocache_hash)).addWithTaint("%%*/", 4).addWithTaint(toString(v__output)).addWithTaint("/*/%%SmartyNocache:", 19).addWithTaint(toString(m_nocache_hash)).addWithTaint("%%*/';\?>\n", 9).detachWithTaint();
            {
              bool tmp0;
              {
                tmp0 = (m_template.o_isset(NAMSTR(s_ss8e649995, "saved_modifier"), s_class_name));
              }
              if (tmp0) {
                {
                  {
                    LOOP_COUNTER(1);
                    Variant map2 = LINE(384,(m_template.o_getPublic(NAMSTR(s_ss8e649995, "saved_modifier"), true)));
                    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                      LOOP_COUNTER_CHECK(1);
                      iter3.second(v_dummy);
                      v_plugin_name.assignVal(iter3.first());
                      {
                        {
                          bool tmp0;
                          {
                            tmp0 = (isset(LINE(385,(m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), false).rvalRef(NAMSTR(s_ss9094af88, "compiled"), tmp_ref, AccessFlags::Key).rvalRef(v_plugin_name, tmp_ref))), NAMSTR(s_ssa24a50b0, "modifier"), true));
                            tmp_ref.unset();
                          }
                          if (tmp0) {
                            {
                              {
                                LINE(386,0);
                                const Variant &tmp0((m_template.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalRef(NAMSTR(s_ss9094af88, "compiled"), tmp_ref, AccessFlags::Error_Key).rvalRef(v_plugin_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssa24a50b0, "modifier"), AccessFlags::Error_Key)));
                                lval(lval(m_template.o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::CheckExist_Key)).lvalAt(v_plugin_name, AccessFlags::CheckExist)).set(NAMSTR(s_ssa24a50b0, "modifier"), (tmp0), true);
                                tmp_ref.unset();
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  m_template.o_setPublic(NAMSTR(s_ss8e649995, "saved_modifier"), null);
                }
              }
            }
          }
        }
        else {
          {
            v__output.assignVal(v_content);
          }
        }
      }
    }
  }
  else {
    {
      v__output.assignVal(v_content);
    }
  }
  m_suppressNocacheProcessing = false;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), false);
  return v__output;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php line 411 */
void c_Smarty_Internal_TemplateCompilerBase::t_trigger_template_error(CVarRef v_args //  = null_variant
, Variant v_line //  = null
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_TemplateCompilerBase, Smarty_Internal_TemplateCompilerBase::trigger_template_error);
  INTERCEPT_INJECTION("Smarty_Internal_TemplateCompilerBase::trigger_template_error", array_createvi(2, toVPOD(v_args), toVPOD(v_line)), );
  Variant v_match;
  String v_error_text;
  Variant v_token;
  Variant v_exp_token;
  Array v_expect;

  if (!(isset(v_line))) {
    {
      {
        LINE(415,0);
        const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssddf8728c, "line"), true)));
        v_line.assignVal(tmp0);
      }
    }
  }
  {
    LINE(417,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssa9853128, "data"), true)));
    const Variant &tmp1((x_preg_split(NAMVAR(s_svs7b750a0e, "/\n/"), tmp0)));
    v_match.assignVal(tmp1);
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("Syntax Error in template \"", 26);
    LINE(418,0);
    MethodCallPackage mcp1;
    CVarRef obj1 = m_template;
    mcp1.methodCall((obj1), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    tmp0_buf.appendWithTaint(toString((mcp1.ci->getMeth0Args())(mcp1, 0)));
    tmp0_buf.appendWithTaint("\"  on line ", 11);
    tmp0_buf.appendWithTaint(toString(v_line));
    tmp0_buf.appendWithTaint(" \"", 2);
    const Numeric &tmp2(((v_line - 1LL)));
    const Variant &tmp3((v_match.rvalAt(tmp2, AccessFlags::Error)));
    const String &tmp4((toString(x_preg_replace(NAMVAR(s_svs903268bd, "![\\t\\r\\n]+!"), NAMVAR(s_svsfcae4ca0, " "), tmp3))));
    const String &tmp5((x_trim(tmp4)));
    tmp0_buf.appendWithTaint(x_htmlspecialchars(tmp5));
    tmp0_buf.appendWithTaint("\" ", 2);
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
        LINE(424,0);
        const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
        concat_assign(v_error_text, concat3(NAMSTR(s_ss53babf54, " - Unexpected \""), tmp0, NAMSTR(s_ss7e5fc106, "\"")));
      }
      {
        bool tmp0;
        {
          LINE(425,0);
          MethodCallPackage mcp1;
          CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true);
          mcp1.methodCall((obj1), NAMSTR(s_ss08412d18, "yy_get_expected_tokens"), 0x14C123EE690E20FFLL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ssacc538af, "yymajor"), true)));
          int tmp3((x_count((mcp1.ci->getMeth1Args())(mcp1, 1, tmp2))));
          tmp0 = (not_more(tmp3, 4LL));
        }
        if (tmp0) {
          {
            {
              LOOP_COUNTER(1);
              Variant map2;
              {
                LINE(426,0);
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
                    LINE(427,0);
                    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss7f9b58ad, "yyTokenName"), true).rvalAt(v_token, AccessFlags::Error)));
                    v_exp_token.assignVal(tmp0);
                  }
                  {
                    bool tmp0;
                    {
                      tmp0 = (isset(LINE(428,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), false).o_getPublic(NAMSTR(s_ssa8d8e9bb, "smarty_token_names"), false))), v_exp_token));
                    }
                    if (tmp0) {
                      {
                        {
                          LINE(430,0);
                          const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssa8d8e9bb, "smarty_token_names"), true).rvalAt(v_exp_token, AccessFlags::Error))));
                          v_expect.append((VarNR(concat3(NAMSTR(s_ss7e5fc106, "\""), tmp0, NAMSTR(s_ss7e5fc106, "\"")))));
                        }
                      }
                    }
                    else {
                      {
                        {
                          LINE(433,0);
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
              LINE(436,0);
              const String &tmp0((x_implode(NAMVAR(s_svs5f22f60a, " , "), VarNR(v_expect))));
              concat_assign(v_error_text, concat(NAMSTR(s_ss1199a808, ", expected one of: "), tmp0));
            }
          }
        }
      }
    }
  }
  {
    p_SmartyCompilerException tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss9d2ea485, "SmartyCompilerException"), &g->CDEC(smartycompilerexception))), (coo_SmartyCompilerException()));
    throw_exception(LINE(439,(((c_SmartyCompilerException*)tmp0.get()->create(VarNR(v_error_text)), tmp0))));
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_TemplateCompilerBase() {
  return NEWOBJ(c_Smarty_Internal_TemplateCompilerBase)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_templatecompilerbase.php, pm_php$Smarty$libs$sysplugins$smarty_internal_templatecompilerbase_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_templatecompilerbase) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva00000000,
  (int64)&null_variant,
  (int64)&false_varNR,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x1AB0CA3651F6416DLL,0,0,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_TemplateCompilerBase____tag_objects),&NAMSTR(s_ss029b1f84, "_tag_objects") },

  {0x39E313DD2FE882B1LL,0,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_TemplateCompilerBase, m_template),&NAMSTR(s_ss86160f07, "template") },
  {0x18D586C7854D70A4LL,1,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_TemplateCompilerBase, m_suppressNocacheProcessing),&NAMSTR(s_ss60f44ecc, "suppressNocacheProcessing") },
  {0x40F0782A26856BE5LL,-2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_TemplateCompilerBase, m__tag_stack),&NAMSTR(s_ss0b3d5400, "_tag_stack") },
  {0x0A01A1C2900447E7LL,-2,1,38,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_TemplateCompilerBase, m_nocache_hash),&NAMSTR(s_ss26eb4081, "\000Smarty_Internal_TemplateCompilerBase\000nocache_hash") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_TemplateCompilerBase hash
  -1,-1,0,-1,-1,-1,-1,-1,
  -1,1,-1,-1,2,3,-1,4,
  // Smarty_Internal_TemplateCompilerBase lists
  4,-1,
  -1,
  -1,
  1,0,};
const ClassPropTable c_Smarty_Internal_TemplateCompilerBase::os_prop_table = {
  7,4,7,0,-1,-1,10,0,
  cpt_hash_entries+8,0,cpt_table_entries+0,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_Smarty_Internal_TemplateCompilerBase::os_prop_table, cpt_hash_entries+20);

///////////////////////////////////////////////////////////////////////////////
}
