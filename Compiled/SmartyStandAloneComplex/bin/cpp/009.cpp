
#include <php/Smarty/libs/sysplugins/smarty_internal_cacheresource_file.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_cacheresource_file.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_append.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_append.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_assign.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_assign.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_write_file.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 17 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_CacheResource_File)
const InstanceOfInfo c_Smarty_Internal_CacheResource_File::s_instanceof_table[] = {
  {0x2C59664F0BBFA332LL,1,"Smarty_Internal_CacheResource_File",&cw_Smarty_Internal_CacheResource_File},
};
const int c_Smarty_Internal_CacheResource_File::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_CacheResource_File::ci_getcachedtimestamp((void*)&c_Smarty_Internal_CacheResource_File::i_getcachedtimestamp, (void*)&c_Smarty_Internal_CacheResource_File::ifa_getcachedtimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CacheResource_File::ci_clearall((void*)&c_Smarty_Internal_CacheResource_File::i_clearall, (void*)&c_Smarty_Internal_CacheResource_File::ifa_clearall, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CacheResource_File::ci___construct((void*)&c_Smarty_Internal_CacheResource_File::i___construct, (void*)&c_Smarty_Internal_CacheResource_File::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CacheResource_File::ci_getcachedcontents((void*)&c_Smarty_Internal_CacheResource_File::i_getcachedcontents, (void*)&c_Smarty_Internal_CacheResource_File::ifa_getcachedcontents, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CacheResource_File::ci_getcachedfilepath((void*)&c_Smarty_Internal_CacheResource_File::i_getcachedfilepath, (void*)&c_Smarty_Internal_CacheResource_File::ifa_getcachedfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CacheResource_File::ci_writecachedcontent((void*)&c_Smarty_Internal_CacheResource_File::i_writecachedcontent, (void*)&c_Smarty_Internal_CacheResource_File::ifa_writecachedcontent, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CacheResource_File::ci_clear((void*)&c_Smarty_Internal_CacheResource_File::i_clear, (void*)&c_Smarty_Internal_CacheResource_File::ifa_clear, 4, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_CacheResource_File::i_getcachedtimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcachedtimestamp, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::getCachedTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcachedtimestamp(arg0));
  }
}
Variant c_Smarty_Internal_CacheResource_File::i_clearall(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_clearall, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(count <= 0 ? null : (ad->getValue(pos)));
    return (self->t_clearall(arg0));
  }
}
Variant c_Smarty_Internal_CacheResource_File::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_CacheResource_File::i_getcachedcontents(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcachedcontents, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::getCachedContents", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_getcachedcontents(arg0, arg1));
  }
}
Variant c_Smarty_Internal_CacheResource_File::i_getcachedfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcachedfilepath, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::getCachedFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcachedfilepath(arg0));
  }
}
Variant c_Smarty_Internal_CacheResource_File::i_writecachedcontent(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_writecachedcontent, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_CacheResource_File::writeCachedContent", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_writecachedcontent(arg0, arg1));
  }
}
Variant c_Smarty_Internal_CacheResource_File::i_clear(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_clear, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_CacheResource_File::clear", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_clear(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_CacheResource_File::ifa_getcachedtimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcachedtimestamp, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::getCachedTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcachedtimestamp(arg0));
}
Variant c_Smarty_Internal_CacheResource_File::ifa_clearall(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clearall, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  CVarRef arg0(count <= 0 ? null_variant : a0);
  return (self->t_clearall(arg0));
}
Variant c_Smarty_Internal_CacheResource_File::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_CacheResource_File::ifa_getcachedcontents(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcachedcontents, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::getCachedContents", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (false_varNR) : a1);
  return (self->t_getcachedcontents(arg0, arg1));
}
Variant c_Smarty_Internal_CacheResource_File::ifa_getcachedfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcachedfilepath, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CacheResource_File::getCachedFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcachedfilepath(arg0));
}
Variant c_Smarty_Internal_CacheResource_File::ifa_writecachedcontent(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_writecachedcontent, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_CacheResource_File::writeCachedContent", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_writecachedcontent(arg0, arg1));
}
Variant c_Smarty_Internal_CacheResource_File::ifa_clear(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_clear, coo_Smarty_Internal_CacheResource_File);
  }
  c_Smarty_Internal_CacheResource_File *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CacheResource_File*>(mcp.obj));
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_CacheResource_File::clear", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  return (self->t_clear(arg0, arg1, arg2, arg3));
}
const MethodCallInfoTable c_Smarty_Internal_CacheResource_File::s_call_info_table[] = {
  { 0x66FE9E86B0B444C5LL, 1, 18, "writeCachedContent", &c_Smarty_Internal_CacheResource_File::ci_writecachedcontent },
  { 0x31DA235C5A226667LL, 1, 5, "clear", &c_Smarty_Internal_CacheResource_File::ci_clear },
  { 0x1FCE3013C4ADDB99LL, 1, 18, "getCachedTimestamp", &c_Smarty_Internal_CacheResource_File::ci_getcachedtimestamp },
  { 0x7F20D301A42CD5EBLL, 1, 17, "getCachedFilepath", &c_Smarty_Internal_CacheResource_File::ci_getcachedfilepath },
  { 0x54693D7C21C8B05CLL, 1, 8, "clearAll", &c_Smarty_Internal_CacheResource_File::ci_clearall },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_CacheResource_File::ci___construct },
  { 0x7A62A64834D3EACFLL, 0, 17, "getCachedContents", &c_Smarty_Internal_CacheResource_File::ci_getcachedcontents },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_CacheResource_File::s_call_info_index[] = {
  15,
  -1,-1,-1,-1,-1,0,-1,1,
  -1,2,-1,3,4,-1,-1,5,

};
c_Smarty_Internal_CacheResource_File *c_Smarty_Internal_CacheResource_File::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_CacheResource_File = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_CacheResource_File,
  c_Smarty_Internal_CacheResource_File::s_call_info_table,c_Smarty_Internal_CacheResource_File::s_call_info_index,
  c_Smarty_Internal_CacheResource_File::s_instanceof_table,c_Smarty_Internal_CacheResource_File::s_instanceof_index,
  &c_Smarty_Internal_CacheResource_File::s_class_name,
  0,&c_Smarty_Internal_CacheResource_File::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 18 */
void c_Smarty_Internal_CacheResource_File::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_CacheResource_File::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 28 */
String c_Smarty_Internal_CacheResource_File::t_getcachedfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File::getCachedFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_CacheResource_File::getCachedFilepath", array_createvi(1, toVPOD(v__template)), r);
  Variant v__source_file_path;
  Variant v__cache_id;
  Variant v__compile_id;
  Variant v__filepath;
  Variant v__compile_dir_sep;
  Variant v__cache_dir;

  {
    LINE(30,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Variant &tmp1((x_str_replace(NAMVAR(s_svsdb381ae8, ":"), NAMVAR(s_svs013a8f64, "."), (mcp0.ci->getMeth0Args())(mcp0, 0))));
    v__source_file_path.assignVal(tmp1);
  }
  {
    Variant tmp0;
    if (v__template.o_isset(NAMSTR(s_ssb26f3d0e, "cache_id"), s_class_name)) {
      LINE(31,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
      tmp0 = (x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), tmp1));
    } else {
      tmp0 = (null);
    }
    v__cache_id.assignVal(tmp0);
  }
  {
    Variant tmp0;
    if (v__template.o_isset(NAMSTR(s_ss962fc398, "compile_id"), s_class_name)) {
      LINE(32,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
      tmp0 = (x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), tmp1));
    } else {
      tmp0 = (null);
    }
    v__compile_id.assignVal(tmp0);
  }
  {
    LINE(33,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
    v__filepath.assignVal(tmp0);
  }
  if (LINE(35,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true))))) {
    {
      {
        StringBuffer tmp0_buf;
        tmp0_buf.appendWithTaint(LINE(36,(toString(x_substr(toString(v__filepath), toInt32(0LL), toInt32(2LL))))));
        tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
        tmp0_buf.appendWithTaint(LINE(37,(toString(x_substr(toString(v__filepath), toInt32(2LL), toInt32(2LL))))));
        tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
        tmp0_buf.appendWithTaint(LINE(38,(toString(x_substr(toString(v__filepath), toInt32(4LL), toInt32(2LL))))));
        tmp0_buf.appendWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
        tmp0_buf.appendWithTaint(toString(v__filepath));
        CStrRef tmp0(tmp0_buf.detachWithTaint());
        v__filepath = tmp0;
      }
    }
  }
  {
    Variant tmp0(((LINE(41,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((Variant)(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))) : ((Variant)(NAMSTR(s_sscf94e648, "^"))))));
    v__compile_dir_sep.assignVal(tmp0);
  }
  if (isset(v__cache_id)) {
    {
      {
        LINE(43,0);
        const String &tmp0((toString(x_str_replace(NAMVAR(s_svs2ecd8ccd, "|"), v__compile_dir_sep, v__cache_id))));
        const String &tmp1((toString(v__compile_dir_sep)));
        v__cache_id = concat(tmp0, tmp1);
      }
    }
  }
  else {
    {
      v__cache_id = NAMSTR(s_ss00000000, "");
    }
  }
  if (isset(v__compile_id)) {
    {
      v__compile_id = concat(toString(v__compile_id), toString(v__compile_dir_sep));
    }
  }
  else {
    {
      v__compile_id = NAMSTR(s_ss00000000, "");
    }
  }
  {
    LINE(52,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true)));
    v__cache_dir.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(53,0);
      const Variant &tmp1((x_substr(toString(v__cache_dir), toInt32(-1LL))));
      const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
      tmp0 = (same(tmp2, false));
    }
    if (tmp0) {
      {
        concat_assign(v__cache_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
      }
    }
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint(toString(v__cache_dir));
    tmp0_buf.appendWithTaint(toString(v__cache_id));
    tmp0_buf.appendWithTaint(toString(v__compile_id));
    tmp0_buf.appendWithTaint(toString(v__filepath));
    tmp0_buf.appendWithTaint(".", 1);
    tmp0_buf.appendWithTaint(LINE(56,(x_basename(toString(v__source_file_path)))));
    tmp0_buf.appendWithTaint(".php", 4);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 65 */
Variant c_Smarty_Internal_CacheResource_File::t_getcachedtimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File::getCachedTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_CacheResource_File::getCachedTimestamp", array_createvi(1, toVPOD(v__template)), r);
  {
    LINE(68,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    bool tmp1 = (toBoolean((mcp0.ci->getMeth0Args())(mcp0, 0)));
    if (tmp1) {
      MethodCallPackage mcp2;
      CVarRef obj2 = v__template;
      mcp2.methodCall((obj2), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
      const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
      tmp1 = (x_file_exists(toString((mcp2.ci->getMeth0Args())(mcp2, 0))));
    }
    Variant tmp3;
    if (tmp1) {
      MethodCallPackage mcp4;
      CVarRef obj4 = v__template;
      mcp4.methodCall((obj4), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
      const CallInfo *cit4 ATTRIBUTE_UNUSED = mcp4.ci;
      tmp3 = (x_filemtime(toString((mcp4.ci->getMeth0Args())(mcp4, 0))));
    } else {
      tmp3 = (false);
    }
    return tmp3;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 77 */
Variant c_Smarty_Internal_CacheResource_File::t_getcachedcontents(Variant v__template, Variant v_no_render //  = false
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File::getCachedContents);
  INTERCEPT_INJECTION("Smarty_Internal_CacheResource_File::getCachedContents", array_createvi(2, toVPOD(v__template), toVPOD(v_no_render)), r);
  Variant v__smarty_tpl;


  class VariableTable : public LVariableTable {
  public:
    Variant &v__template; Variant &v_no_render; Variant &v__smarty_tpl;
    VariableTable(Variant &r__template, Variant &r_no_render, Variant &r__smarty_tpl) : v__template(r__template), v_no_render(r_no_render), v__smarty_tpl(r__smarty_tpl) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 7) {
        case 0:
          HASH_RETURN_NAMSTR(0x7E3E915AB2BF9B78LL, s_sscfea6f7c, v__template,
                             9);
          break;
        case 1:
          HASH_RETURN_NAMSTR(0x72CB03F3A2CF7389LL, s_ssddcdc9ba, v__smarty_tpl,
                             11);
          break;
        case 3:
          HASH_RETURN_NAMSTR(0x4F7E4249BB5F7A5BLL, s_ss8449eb50, v_no_render,
                             9);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v__template, v_no_render, v__smarty_tpl);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  if (!(toBoolean(v_no_render))) {
    {
      LINE(80,(x_ob_start()));
    }
  }
  v__smarty_tpl.assignVal(v__template);
  {
    LINE(83,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    include(toString((mcp0.ci->getMeth0Args())(mcp0, 0)), false, variables, "Smarty/libs/sysplugins/");
  }
  if (toBoolean(v_no_render)) {
    {
      return null;
    }
  }
  else {
    {
      return LINE(87,(x_ob_get_clean()));
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 97 */
bool c_Smarty_Internal_CacheResource_File::t_writecachedcontent(Variant v__template, CVarRef v_content) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File::writeCachedContent);
  INTERCEPT_INJECTION("Smarty_Internal_CacheResource_File::writeCachedContent", array_createvi(2, toVPOD(v__template), toVPOD(v_content)), r);
  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(99,0);
      bool tmp1((toBoolean(v__template.o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssee449446, "isEvaluated"), true))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(100,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__template;
            mcp1.methodCall((obj1), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth0Args())(mcp1, 0)));
            bool tmp3((((checkClassExistsThrow(NAMSTR(s_ss1ff6c55c, "Smarty_Internal_Write_File"), &g->CDEC(smarty_internal_write_file))), (c_Smarty_Internal_Write_File::t_writefile(tmp2, v_content, GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true))))));
            tmp0 = (same(tmp3, true));
          }
          if (tmp0) {
            {
              {
                LINE(101,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__template;
                mcp0.methodCall((obj0), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const Variant &tmp1((x_filemtime(toString((mcp0.ci->getMeth0Args())(mcp0, 0)))));
                v__template.o_setPublic(NAMSTR(s_ssd8b4fc59, "cached_timestamp"), tmp1);
              }
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 114 */
int64 c_Smarty_Internal_CacheResource_File::t_clearall(CVarRef v_exp_time //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File::clearAll);
  INTERCEPT_INJECTION("Smarty_Internal_CacheResource_File::clearAll", array_createvi(1, toVPOD(v_exp_time)), r);
  return LINE(116,(t_clear(null, null_varNR, null_varNR, v_exp_time)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 127 */
int64 c_Smarty_Internal_CacheResource_File::t_clear(Variant v_resource_name, CVarRef v_cache_id, CVarRef v_compile_id, CVarRef v_exp_time) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File::clear);
  INTERCEPT_INJECTION("Smarty_Internal_CacheResource_File::clear", array_createvi(4, toVPOD(v_resource_name), toVPOD(v_cache_id), toVPOD(v_compile_id), toVPOD(v_exp_time)), r);
  Variant v__cache_id;
  Variant v__compile_id;
  String v__dir_sep;
  int64 v__compile_id_offset = 0;
  String v__dir;
  int v__dir_length = 0;
  Variant v__cache_id_parts;
  int v__cache_id_parts_count = 0;
  Variant v_id_part;
  Variant v__save_stat;
  Object v_tpl;
  String v__resourcename_parts;
  int64 v__count = 0;
  p_RecursiveDirectoryIterator v__cacheDirs;
  p_RecursiveIteratorIterator v__cache;
  Variant v__file;
  Variant v__parts;
  int64 v__parts_count = 0;
  int64 v_i = 0;

  Variant tmp_ref;
  {
    Variant tmp0(((isset(v_cache_id) ? ((Variant)(LINE(129,(x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), v_cache_id))))) : ((Variant)(null)))));
    v__cache_id.assignVal(tmp0);
  }
  {
    Variant tmp0(((isset(v_compile_id) ? ((Variant)(LINE(130,(x_preg_replace(NAMVAR(s_svs7cbcb98e, "![^\\w\\|]+!"), NAMVAR(s_svs7f06ffcd, "_"), v_compile_id))))) : ((Variant)(null)))));
    v__compile_id.assignVal(tmp0);
  }
  {
    String tmp0(((LINE(131,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((NAMSTR(s_ssb9e13cd6, "/"))) : ((NAMSTR(s_sscf94e648, "^"))))));
    v__dir_sep = tmp0;
  }
  {
    int64 tmp0(((LINE(132,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true)))) ? ((3LL)) : ((0LL)))));
    v__compile_id_offset = tmp0;
  }
  {
    LINE(133,0);
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss98092263, "cache_dir"), true))));
    const String &tmp1((x_rtrim(tmp0, NAMSTR(s_ss8ed589f3, "/\\"))));
    const String &tmp2((toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))));
    v__dir = concat(tmp1, tmp2);
  }
  {
    LINE(134,0);
    int tmp0((x_strlen(v__dir)));
    v__dir_length = tmp0;
  }
  if (isset(v__cache_id)) {
    {
      {
        LINE(136,0);
        const Variant &tmp0((x_explode(NAMSTR(s_ss2ecd8ccd, "|"), toString(v__cache_id))));
        v__cache_id_parts.assignVal(tmp0);
      }
      {
        LINE(137,0);
        int tmp0((x_count(v__cache_id_parts)));
        v__cache_id_parts_count = tmp0;
      }
      if (LINE(138,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss618338b8, "use_sub_dirs"), true))))) {
        {
          {
            LOOP_COUNTER(1);
            {
              StringBuffer tmp_sbuf_v__dir(512);
              for (ArrayIter iter3 = v__cache_id_parts.begin(s_class_name, true); !iter3.end(); ++iter3) {
                LOOP_COUNTER_CHECK(1);
                iter3.second(v_id_part);
                {
                  tmp_sbuf_v__dir.addWithTaint(toString(v_id_part)).addWithTaint(toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
                }
              }
              concat_assign(v__dir, tmp_sbuf_v__dir.detachWithTaint());
            }
          }
        }
      }
    }
  }
  if (isset(v_resource_name)) {
    {
      {
        LINE(145,0);
        const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)));
        v__save_stat.assignVal(tmp0);
      }
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ssafeed509, "caching"), true);
        tmp_ref.unset();
      }
      {
        Object obj1(create_object_only((LINE(147,(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssb4c1cabc, "template_class"), true)))))));
        MethodCallPackage mcp0;
        mcp0.construct(obj1);
        const CallInfo *cit0 = mcp0.ci;
        const Variant &tmp2((v_resource_name));
        const Variant tmp3 = v_resource_name;
        const Variant &tmp4 = cit0->isRef(0) ? tmp2 : tmp3;
        const Variant &tmp5((GET_THIS_ARROW()o_argval(cit0->isRef(1), NAMSTR(s_ss675664bf, "smarty"), true, s_class_name)));
        (cit0->getMeth2Args())(mcp0, 2, tmp4, tmp5);
        const Object &tmp6((id(obj1)));
        v_tpl = tmp6;
      }
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ssafeed509, "caching"), v__save_stat);
        tmp_ref.unset();
      }
      {
        bool tmp0;
        {
          LINE(149,0);
          MethodCallPackage mcp1;
          CObjRef obj1 = v_tpl;
          mcp1.methodCall((obj1), NAMSTR(s_ss21a0ded9, "isExisting"), 0x415CFCA4A487DB29LL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          tmp0 = (toBoolean((mcp1.ci->getMeth0Args())(mcp1, 0)));
        }
        if (tmp0) {
          {
            {
              LINE(150,0);
              MethodCallPackage mcp0;
              CObjRef obj0 = v_tpl;
              mcp0.methodCall((obj0), NAMSTR(s_ss0e63bfcc, "getCachedFilepath"), 0x7F20D301A42CD5EBLL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              const String &tmp1((toString(x_str_replace(NAMVAR(s_svscf94e648, "^"), NAMVAR(s_svsb9e13cd6, "/"), (mcp0.ci->getMeth0Args())(mcp0, 0)))));
              const String &tmp2((x_basename(tmp1)));
              v__resourcename_parts = tmp2;
            }
            {
              LINE(152,0);
              const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss11a5bbab, "template_resource"), true))));
              const String &tmp1((toString(v_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true))));
              const String &tmp2((toString(v_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true))));
              const String &tmp3((x_sha1(concat3(tmp0, tmp1, tmp2))));
              GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ss8d72b238, "template_objects"), tmp_ref, s_class_name).weakRemove(tmp3);
              tmp_ref.unset();
            }
          }
        }
        else {
          {
            {
              LINE(155,0);
              const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss11a5bbab, "template_resource"), true))));
              const String &tmp1((toString(v_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true))));
              const String &tmp2((toString(v_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true))));
              const String &tmp3((x_sha1(concat3(tmp0, tmp1, tmp2))));
              GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ss8d72b238, "template_objects"), tmp_ref, s_class_name).weakRemove(tmp3);
              tmp_ref.unset();
            }
            return 0LL;
          }
        }
      }
    }
  }
  v__count = 0LL;
  if (LINE(160,(x_file_exists(v__dir)))) {
    {
      {
        p_RecursiveDirectoryIterator tmp0 = coo_RecursiveDirectoryIterator();
        ((c_RecursiveDirectoryIterator*)tmp0.get()->create(VarNR(v__dir)));
        v__cacheDirs = tmp0;
      }
      {
        p_RecursiveIteratorIterator tmp0 = coo_RecursiveIteratorIterator();
        ((c_RecursiveIteratorIterator*)tmp0.get()->create(VarNR(v__cacheDirs), NAMVAR(s_svi90d5f98c, 2LL) /* RecursiveIteratorIterator::CHILD_FIRST */));
        v__cache = tmp0;
      }
      {
        LOOP_COUNTER(4);
        for (ArrayIter iter6 = v__cache.begin(s_class_name, true); !iter6.end(); ++iter6) {
          LOOP_COUNTER_CHECK(4);
          iter6.second(v__file);
          {
            {
              bool tmp0;
              {
                LINE(164,0);
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
                LINE(166,0);
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
                      LINE(167,0);
                      MethodCallPackage mcp1;
                      CObjRef obj1 = v__cache;
                      mcp1.methodCall((obj1), NAMSTR(s_ss5baf0fe3, "isDot"), 0x08D1EA51B78DA5F4LL);
                      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                      tmp0 = (!(toBoolean((mcp1.ci->getMeth0Args())(mcp1, 0))));
                    }
                    if (tmp0) {
                      {
                        {
                          Silencer tmp0(true);
                          LINE(169,0);
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
                    String tmp0((v__dir_sep));
                    LINE(172,0);
                    const Variant &tmp1((x_substr((toString(v__file)), v__dir_length)));
                    const String &tmp2((toString(x_str_replace(NAMVAR(s_svsd59e789f, "\\"), NAMVAR(s_svsb9e13cd6, "/"), tmp1))));
                    const Variant &tmp3((x_explode(tmp0, tmp2)));
                    v__parts.assignVal(tmp3);
                  }
                  {
                    LINE(173,0);
                    int tmp0((x_count(v__parts)));
                    v__parts_count = tmp0;
                  }
                  if (isset(v_resource_name)) {
                    {
                      {
                        bool tmp0;
                        {
                          int64 tmp1(((v__parts_count - 1LL)));
                          LINE(176,0);
                          const Variant &tmp2((v__parts.rvalAt(tmp1, AccessFlags::Error)));
                          tmp0 = (!equal(tmp2, v__resourcename_parts));
                        }
                        if (tmp0) {
                          {
                            continue;
                          }
                        }
                      }
                    }
                  }
                  {
                    bool tmp0;
                    {
                      bool tmp1 = (isset(v__compile_id));
                      if (tmp1) {
                        int64 tmp2((((v__parts_count - 2LL) - v__compile_id_offset)));
                        bool tmp3 = (!(isset(v__parts, tmp2)));
                        if (!tmp3) {
                          int64 tmp4((((v__parts_count - 2LL) - v__compile_id_offset)));
                          LINE(181,0);
                          const Variant &tmp5((v__parts.rvalAt(tmp4, AccessFlags::Error)));
                          tmp3 = (!equal(tmp5, v__compile_id));
                        }
                        tmp1 = (tmp3);
                      }
                      tmp0 = (tmp1);
                    }
                    if (tmp0) {
                      {
                        continue;
                      }
                    }
                  }
                  if (isset(v__cache_id)) {
                    {
                      v__parts_count = (isset(v__compile_id) ? ((((v__parts_count - 2LL) - v__compile_id_offset))) : ((((v__parts_count - 1LL) - v__compile_id_offset))));
                      if (less(v__parts_count, v__cache_id_parts_count)) {
                        {
                          continue;
                        }
                      }
                      {
                        LOOP_COUNTER(7);
                        for (v_i = 0LL; (less(v_i, v__cache_id_parts_count)); v_i++) {
                          LOOP_COUNTER_CHECK(7);
                          {
                            {
                              bool tmp0;
                              {
                                LINE(192,0);
                                const Variant &tmp1((v__parts.rvalAt(v_i, AccessFlags::Error)));
                                const Variant &tmp2((v__cache_id_parts.rvalAt(v_i, AccessFlags::Error)));
                                tmp0 = (!equal(tmp1, tmp2));
                              }
                              if (tmp0) {
                                goto continue4;
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
                      bool tmp1 = (isset(v_exp_time));
                      if (tmp1) {
                        LINE(196,0);
                        int tmp2((x_time()));
                        Silencer tmp3(true);
                        Variant tmp4((x_filemtime(toString(v__file))));
                        tmp3.disable();
                        const Numeric &tmp5(((tmp2 - tmp4)));
                        tmp1 = (less(tmp5, v_exp_time));
                      }
                      tmp0 = (tmp1);
                    }
                    if (tmp0) {
                      {
                        continue;
                      }
                    }
                  }
                  {
                    Silencer tmp0(true);
                    bool tmp1((toBoolean(LINE(199,(x_unlink((toString(v__file))))))));
                    tmp0.disable();
                    int64 tmp2(((tmp1 ? ((1LL)) : ((0LL)))));
                    v__count += tmp2;
                  }
                }
              }
            }
          }
          continue4:;
        }
      }
    }
  }
  return v__count;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_CacheResource_File() {
  return NEWOBJ(c_Smarty_Internal_CacheResource_File)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php, pm_php$Smarty$libs$sysplugins$smarty_internal_cacheresource_file_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_cacheresource_file) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_append.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Append)
const InstanceOfInfo c_Smarty_Internal_Compile_Append::s_instanceof_table[] = {
  {0x43CB574EA5BB03F0LL,1,"Smarty_Internal_Compile_Append",&cw_Smarty_Internal_Compile_Append},
  {0x19E5DD6A6DE4D334LL,0,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x668302F87D55EB04LL,1,"Smarty_Internal_Compile_Assign",&cw_Smarty_Internal_Compile_Assign},
};
const int c_Smarty_Internal_Compile_Append::s_instanceof_index[] = {
  7,
  0,-1,-1,-1,1,-1,-1,-1,

};
CallInfo c_Smarty_Internal_Compile_Append::ci_compile((void*)&c_Smarty_Internal_Compile_Append::i_compile, (void*)&c_Smarty_Internal_Compile_Append::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Append::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Append);
  }
  c_Smarty_Internal_Compile_Append *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Append*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Append::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->c_Smarty_Internal_Compile_Append::t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Append::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Append);
  }
  c_Smarty_Internal_Compile_Append *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Append*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Append::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->c_Smarty_Internal_Compile_Append::t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Append::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Append::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Append::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Append = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Append,
  c_Smarty_Internal_Compile_Append::s_call_info_table,c_Smarty_Internal_Compile_Append::s_call_info_index,
  c_Smarty_Internal_Compile_Append::s_instanceof_table,c_Smarty_Internal_Compile_Append::s_instanceof_index,
  &c_Smarty_Internal_Compile_Append::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_Compile_Assign
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_append.php line 25 */
Variant c_Smarty_Internal_Compile_Append::t_compile(Variant v_args, Variant v_compiler, Variant v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Append, Smarty_Internal_Compile_Append::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Append::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v__params;
  Array v__new_attr;
  Primitive v_key = 0;
  Variant v_value;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  m_required_attributes = s_saa8189a4a;
  m_shorttag_order = s_saa8189a4a;
  m_optional_attributes = s_sa0fa55e96;
  {
    LINE(33,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (isset(v__attr, NAMSTR(s_ssc0ff3081, "index"), true)) {
    {
      {
        LINE(36,0);
        const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ssc0ff3081, "index"), AccessFlags::Error_Key))));
        v__params.set(NAMSTR(s_ss306b195e, "smarty_internal_index"), (VarNR(concat3(NAMSTR(s_ssbc769ca5, "["), tmp0, NAMSTR(s_ssb2e1543c, "]")))), true);
      }
      v__attr.weakRemove(NAMSTR(s_ssc0ff3081, "index"), true);
    }
  }
  else {
    {
      v__params.set(NAMSTR(s_ss306b195e, "smarty_internal_index"), (NAMVAR(s_svs1c360a3d, "[]")), true);
    }
  }
  v__new_attr = s_sa00000000;
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v__attr.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_value);
      v_key.assignVal(iter3.first());
      {
        v__new_attr.append((VarNR(Array(ArrayInit(1).set(v_key, v_value).create()))));
      }
    }
  }
  return LINE(46,(c_Smarty_Internal_Compile_Assign::t_compile(v__new_attr, v_compiler, v__params)));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Append() {
  return NEWOBJ(c_Smarty_Internal_Compile_Append)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_append.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_append_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_append) = true;
  checkClassExistsThrow(NAMSTR(s_ss2cc44ceb, "Smarty_Internal_Compile_Assign"), &g->CDEC(smarty_internal_compile_assign));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_assign.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Assign)
const InstanceOfInfo c_Smarty_Internal_Compile_Assign::s_instanceof_table[] = {
  {0x668302F87D55EB04LL,0,"Smarty_Internal_Compile_Assign",&cw_Smarty_Internal_Compile_Assign},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Assign::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Assign::ci_compile((void*)&c_Smarty_Internal_Compile_Assign::i_compile, (void*)&c_Smarty_Internal_Compile_Assign::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Assign::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Assign);
  }
  c_Smarty_Internal_Compile_Assign *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Assign*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Assign::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->c_Smarty_Internal_Compile_Assign::t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Assign::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Assign);
  }
  c_Smarty_Internal_Compile_Assign *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Assign*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Assign::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->c_Smarty_Internal_Compile_Assign::t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Assign::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Assign::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Assign::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Assign = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Assign,
  c_Smarty_Internal_Compile_Assign::s_call_info_table,c_Smarty_Internal_Compile_Assign::s_call_info_index,
  c_Smarty_Internal_Compile_Assign::s_instanceof_table,c_Smarty_Internal_Compile_Assign::s_instanceof_index,
  &c_Smarty_Internal_Compile_Assign::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_assign.php line 25 */
Variant c_Smarty_Internal_Compile_Assign::t_compile(Variant v_args, Variant v_compiler, Variant v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Assign, Smarty_Internal_Compile_Assign::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Assign::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  String v__nocache;
  Variant v__scope;
  Array v__attr;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  m_required_attributes = s_saa8189a4a;
  m_shorttag_order = s_saa8189a4a;
  m_optional_attributes = s_sa238b83f4;
  v__nocache = NAMSTR(s_ssf927ff2c, "null");
  v__scope = NAMSTR(s_ssf927ff2c, "null");
  {
    LINE(35,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if ((LINE(37,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)))) || toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)))) {
    {
      v__nocache = NAMSTR(s_ss102bfbc4, "true");
      {
        LINE(40,0);
        const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
        const String &tmp1((x_trim(tmp0, NAMSTR(s_sse07b87c4, "'"))));
        const p_Smarty_Variable &tmp2((((checkClassExistsThrow(NAMSTR(s_ss5b98208f, "Smarty_variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create(null, true))))));
        v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(tmp1, (VarNR(tmp2)));
        tmp_ref.unset();
      }
    }
  }
  if (isset(v__attr, NAMSTR(s_ss4d6447e5, "scope"), true)) {
    {
      {
        LINE(44,0);
        const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key))));
        const String &tmp1((x_trim(tmp0, NAMSTR(s_ss643ce2bc, "'\""))));
        v__attr.set(NAMSTR(s_ss4d6447e5, "scope"), (VarNR(tmp1)), true);
      }
      {
        bool tmp0;
        {
          LINE(45,0);
          const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
          tmp0 = (equal(tmp1, NAMSTR(s_ssfb10fd8c, "parent")));
        }
        if (tmp0) {
          {
            v__scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_PARENT));
          }
        }
        else {
          bool tmp0;
          {
            LINE(47,0);
            const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
            tmp0 = (equal(tmp1, NAMSTR(s_ss1e45a0db, "root")));
          }
          if (tmp0) {
            {
              v__scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_ROOT));
            }
          }
          else {
            bool tmp0;
            {
              LINE(49,0);
              const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
              tmp0 = (equal(tmp1, NAMSTR(s_ssb61b5296, "global")));
            }
            if (tmp0) {
              {
                v__scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_GLOBAL));
              }
            }
            else {
              {
                {
                  LINE(52,0);
                  MethodCallPackage mcp0;
                  CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                  mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                  const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                  const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                  (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsa4d33dc9, "illegal value for \"scope\" attribute"), tmp1);
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
      tmp0 = (isset(v_parameter, NAMSTR(s_ss306b195e, "smarty_internal_index"), true));
    }
    if (tmp0) {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint("<\?php if (!isset($_smarty_tpl->tpl_vars[", 40);
          tmp0_buf.appendWithTaint(LINE(57,(toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
          tmp0_buf.appendWithTaint("]) || !is_array($_smarty_tpl->tpl_vars[", 39);
          tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
          tmp0_buf.appendWithTaint("]->value)) $_smarty_tpl->createLocalArrayVariable(", 50);
          tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
          tmp0_buf.appendWithTaint(", ", 2);
          tmp0_buf.appendWithTaint(v__nocache);
          tmp0_buf.appendWithTaint(", ", 2);
          tmp0_buf.appendWithTaint(toString(v__scope));
          tmp0_buf.appendWithTaint(");\n$_smarty_tpl->tpl_vars[", 26);
          tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
          tmp0_buf.appendWithTaint("]->value", 8);
          tmp0_buf.appendWithTaint(toString(v_parameter.rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key)));
          tmp0_buf.appendWithTaint(" = ", 3);
          tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
          tmp0_buf.appendWithTaint(";\?>", 3);
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          return tmp0;
        }
      }
    }
    else {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint("<\?php $_smarty_tpl->tpl_vars[", 29);
          tmp0_buf.appendWithTaint(LINE(59,(toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
          tmp0_buf.appendWithTaint("] = new Smarty_variable(", 24);
          tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
          tmp0_buf.appendWithTaint(", ", 2);
          tmp0_buf.appendWithTaint(v__nocache);
          tmp0_buf.appendWithTaint(", ", 2);
          tmp0_buf.appendWithTaint(toString(v__scope));
          tmp0_buf.appendWithTaint(");\?>", 4);
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          return tmp0;
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Assign() {
  return NEWOBJ(c_Smarty_Internal_Compile_Assign)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_assign.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_assign_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_assign) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
