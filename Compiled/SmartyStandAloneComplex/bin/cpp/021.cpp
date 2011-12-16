
#include <php/Smarty/libs/sysplugins/smarty_internal_debug.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_debug.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_filter.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_filter.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_filter_handler.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_filter_handler.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_function_call_handler.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_function_call_handler.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_get_include_path.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_get_include_path.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_nocache_insert.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_nocache_insert.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Debug)
const InstanceOfInfo c_Smarty_Internal_Debug::s_instanceof_table[] = {
  {0x3223E6318F246CB6LL,1,"Smarty_Internal_Data",&cw_Smarty_Internal_Data},
  {0x6625C127442824ABLL,1,"Smarty_Internal_Debug",&cw_Smarty_Internal_Debug},
};
const int c_Smarty_Internal_Debug::s_instanceof_index[] = {
  3,
  -1,-1,0,1,
};
CallInfo c_Smarty_Internal_Debug::ci_end_cache((void*)&c_Smarty_Internal_Debug::i_end_cache, (void*)&c_Smarty_Internal_Debug::ifa_end_cache, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_start_render((void*)&c_Smarty_Internal_Debug::i_start_render, (void*)&c_Smarty_Internal_Debug::ifa_start_render, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_get_debug_vars((void*)&c_Smarty_Internal_Debug::i_get_debug_vars, (void*)&c_Smarty_Internal_Debug::ifa_get_debug_vars, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_display_debug((void*)&c_Smarty_Internal_Debug::i_display_debug, (void*)&c_Smarty_Internal_Debug::ifa_display_debug, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_start_compile((void*)&c_Smarty_Internal_Debug::i_start_compile, (void*)&c_Smarty_Internal_Debug::ifa_start_compile, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_end_render((void*)&c_Smarty_Internal_Debug::i_end_render, (void*)&c_Smarty_Internal_Debug::ifa_end_render, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_get_key((void*)&c_Smarty_Internal_Debug::i_get_key, (void*)&c_Smarty_Internal_Debug::ifa_get_key, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_start_cache((void*)&c_Smarty_Internal_Debug::i_start_cache, (void*)&c_Smarty_Internal_Debug::ifa_start_cache, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Debug::ci_end_compile((void*)&c_Smarty_Internal_Debug::i_end_compile, (void*)&c_Smarty_Internal_Debug::ifa_end_compile, 1, 12, 0x0000000000000000LL);
Variant c_Smarty_Internal_Debug::i_end_cache(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::end_cache", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_end_cache(arg0), null);
  }
}
Variant c_Smarty_Internal_Debug::i_start_render(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::start_render", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_start_render(arg0), null);
  }
}
Variant c_Smarty_Internal_Debug::i_get_debug_vars(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::get_debug_vars", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_get_debug_vars(arg0));
  }
}
Variant c_Smarty_Internal_Debug::i_display_debug(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::display_debug", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_display_debug(arg0), null);
  }
}
Variant c_Smarty_Internal_Debug::i_start_compile(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::start_compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_start_compile(arg0), null);
  }
}
Variant c_Smarty_Internal_Debug::i_end_render(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::end_render", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_end_render(arg0), null);
  }
}
Variant c_Smarty_Internal_Debug::i_get_key(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::get_key", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_get_key(arg0));
  }
}
Variant c_Smarty_Internal_Debug::i_start_cache(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::start_cache", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_start_cache(arg0), null);
  }
}
Variant c_Smarty_Internal_Debug::i_end_compile(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::end_compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Debug::t_end_compile(arg0), null);
  }
}
Variant c_Smarty_Internal_Debug::ifa_end_cache(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::end_cache", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_end_cache(arg0), null);
}
Variant c_Smarty_Internal_Debug::ifa_start_render(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::start_render", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_start_render(arg0), null);
}
Variant c_Smarty_Internal_Debug::ifa_get_debug_vars(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::get_debug_vars", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_get_debug_vars(arg0));
}
Variant c_Smarty_Internal_Debug::ifa_display_debug(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::display_debug", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_display_debug(arg0), null);
}
Variant c_Smarty_Internal_Debug::ifa_start_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::start_compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_start_compile(arg0), null);
}
Variant c_Smarty_Internal_Debug::ifa_end_render(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::end_render", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_end_render(arg0), null);
}
Variant c_Smarty_Internal_Debug::ifa_get_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::get_key", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_get_key(arg0));
}
Variant c_Smarty_Internal_Debug::ifa_start_cache(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::start_cache", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_start_cache(arg0), null);
}
Variant c_Smarty_Internal_Debug::ifa_end_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Debug::end_compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Debug::t_end_compile(arg0), null);
}
const MethodCallInfoTable c_Smarty_Internal_Debug::s_call_info_table[] = {
  { 0x7E98F3D8A4B27902LL, 1, 9, "end_cache", &c_Smarty_Internal_Debug::ci_end_cache },
  { 0x096E0F2AE288A263LL, 1, 11, "start_cache", &c_Smarty_Internal_Debug::ci_start_cache },
  { 0x5A4466F73F3C066CLL, 1, 7, "get_key", &c_Smarty_Internal_Debug::ci_get_key },
  { 0x34C430DF155B9E4FLL, 1, 13, "start_compile", &c_Smarty_Internal_Debug::ci_start_compile },
  { 0x433CDCE97658A8D0LL, 1, 12, "start_render", &c_Smarty_Internal_Debug::ci_start_render },
  { 0x59F525EDA4FB8F74LL, 1, 10, "end_render", &c_Smarty_Internal_Debug::ci_end_render },
  { 0x53A22C1904567436LL, 1, 11, "end_compile", &c_Smarty_Internal_Debug::ci_end_compile },
  { 0x282C0F4976337E99LL, 1, 14, "get_debug_vars", &c_Smarty_Internal_Debug::ci_get_debug_vars },
  { 0x25F25256561DEC1ALL, 1, 13, "display_debug", &c_Smarty_Internal_Debug::ci_display_debug },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Debug::s_call_info_index[] = {
  31,
  -1,-1,0,1,-1,-1,-1,-1,
  -1,-1,-1,-1,2,-1,-1,3,
  4,-1,-1,-1,5,-1,6,-1,
  -1,7,8,-1,-1,-1,-1,-1,

};
const ObjectStaticCallbacks cw_Smarty_Internal_Debug = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Debug,
  c_Smarty_Internal_Debug::s_call_info_table,c_Smarty_Internal_Debug::s_call_info_index,
  c_Smarty_Internal_Debug::s_instanceof_table,c_Smarty_Internal_Debug::s_instanceof_index,
  &c_Smarty_Internal_Debug::s_class_name,
  &c_Smarty_Internal_Debug::os_prop_table,0,0,&cw_Smarty_Internal_Data
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 23 */
void c_Smarty_Internal_Debug::t_start_compile(CVarRef v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::start_compile);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::start_compile", array_createvi(1, toVPOD(v_template)), );
  Variant v_key;

  {
    LINE(25,0);
    const Variant &tmp0((c_Smarty_Internal_Debug::t_get_key(v_template)));
    v_key.assignVal(tmp0);
  }
  {
    LINE(26,0);
    const Variant &tmp0((x_microtime(true)));
    lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).set(NAMSTR(s_ss0019d265, "start_time"), (tmp0), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 32 */
void c_Smarty_Internal_Debug::t_end_compile(CVarRef v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::end_compile);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::end_compile", array_createvi(1, toVPOD(v_template)), );
  Variant v_key;

  {
    LINE(34,0);
    const Variant &tmp0((c_Smarty_Internal_Debug::t_get_key(v_template)));
    v_key.assignVal(tmp0);
  }
  {
    LINE(35,0);
    const Variant &tmp0((x_microtime(true)));
    Array tmp1((g->s_Smarty_Internal_Debug___template_data));
    const Variant &tmp2((tmp1.rvalAtRef(v_key, AccessFlags::Error).rvalAt(NAMSTR(s_ss0019d265, "start_time"), AccessFlags::Error_Key)));
    const Numeric &tmp3(((tmp0 - tmp2)));
    lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).setOpEqual(277, NAMSTR(s_ssed98606f, "compile_time"), (tmp3), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 41 */
void c_Smarty_Internal_Debug::t_start_render(CVarRef v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::start_render);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::start_render", array_createvi(1, toVPOD(v_template)), );
  Variant v_key;

  {
    LINE(43,0);
    const Variant &tmp0((c_Smarty_Internal_Debug::t_get_key(v_template)));
    v_key.assignVal(tmp0);
  }
  {
    LINE(44,0);
    const Variant &tmp0((x_microtime(true)));
    lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).set(NAMSTR(s_ss0019d265, "start_time"), (tmp0), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 50 */
void c_Smarty_Internal_Debug::t_end_render(CVarRef v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::end_render);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::end_render", array_createvi(1, toVPOD(v_template)), );
  Variant v_key;

  {
    LINE(52,0);
    const Variant &tmp0((c_Smarty_Internal_Debug::t_get_key(v_template)));
    v_key.assignVal(tmp0);
  }
  {
    LINE(53,0);
    const Variant &tmp0((x_microtime(true)));
    Array tmp1((g->s_Smarty_Internal_Debug___template_data));
    const Variant &tmp2((tmp1.rvalAtRef(v_key, AccessFlags::Error).rvalAt(NAMSTR(s_ss0019d265, "start_time"), AccessFlags::Error_Key)));
    const Numeric &tmp3(((tmp0 - tmp2)));
    lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).setOpEqual(277, NAMSTR(s_ss3bf6b74a, "render_time"), (tmp3), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 59 */
void c_Smarty_Internal_Debug::t_start_cache(CVarRef v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::start_cache);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::start_cache", array_createvi(1, toVPOD(v_template)), );
  Variant v_key;

  {
    LINE(61,0);
    const Variant &tmp0((c_Smarty_Internal_Debug::t_get_key(v_template)));
    v_key.assignVal(tmp0);
  }
  {
    LINE(62,0);
    const Variant &tmp0((x_microtime(true)));
    lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).set(NAMSTR(s_ss0019d265, "start_time"), (tmp0), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 68 */
void c_Smarty_Internal_Debug::t_end_cache(CVarRef v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::end_cache);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::end_cache", array_createvi(1, toVPOD(v_template)), );
  Variant v_key;

  {
    LINE(70,0);
    const Variant &tmp0((c_Smarty_Internal_Debug::t_get_key(v_template)));
    v_key.assignVal(tmp0);
  }
  {
    LINE(71,0);
    const Variant &tmp0((x_microtime(true)));
    Array tmp1((g->s_Smarty_Internal_Debug___template_data));
    const Variant &tmp2((tmp1.rvalAtRef(v_key, AccessFlags::Error).rvalAt(NAMSTR(s_ss0019d265, "start_time"), AccessFlags::Error_Key)));
    const Numeric &tmp3(((tmp0 - tmp2)));
    lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).setOpEqual(277, NAMSTR(s_ss6f0f9d08, "cache_time"), (tmp3), true);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 76 */
void c_Smarty_Internal_Debug::t_display_debug(CVarRef v_obj) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::display_debug);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::display_debug", array_createvi(1, toVPOD(v_obj)), );
  Object v_ptr;
  Object v_smarty;
  Variant v__assigned_vars;
  Variant v__config_vars;
  p_Smarty_Internal_Template v__template;

  Variant tmp_ref;
  {
    LINE(79,0);
    const Object &tmp0((c_Smarty_Internal_Debug::t_get_debug_vars(v_obj)));
    v_ptr = tmp0;
  }
  if (instanceOf(v_obj, NAMSTR(s_sscf405241, "Smarty"))) {
    {
      {
        LINE(81,0);
        Object tmp0((f_clone(v_obj)));
        v_smarty = tmp0;
      }
    }
  }
  else {
    {
      {
        LINE(83,0);
        const Variant &tmp0((v_obj.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
        Object tmp1((f_clone(tmp0)));
        v_smarty = tmp1;
      }
    }
  }
  {
    LINE(85,0);
    const Variant &tmp0((v_ptr.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true)));
    v__assigned_vars.assignVal(tmp0);
  }
  LINE(86,(x_ksort(ref(v__assigned_vars))));
  {
    LINE(87,0);
    const Variant &tmp0((v_ptr.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true)));
    v__config_vars.assignVal(tmp0);
  }
  LINE(88,(x_ksort(ref(v__config_vars))));
  v_smarty.o_setPublic(NAMSTR(s_ssed156107, "left_delimiter"), NAMSTR(s_ss3939fa19, "{"));
  v_smarty.o_setPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), NAMSTR(s_ss236e0754, "}"));
  v_smarty.o_setPublic(NAMSTR(s_ss05369a00, "registered_filters"), s_sa00000000);
  v_smarty.o_setPublic(NAMSTR(s_ssb05f1099, "autoload_filters"), s_sa00000000);
  v_smarty.o_setPublic(NAMSTR(s_ss3c2a208b, "default_modifiers"), s_sa00000000);
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(94,0);
    const Variant &tmp1((v_smarty.o_getPublic(NAMSTR(s_ssdda52e2b, "debug_tpl"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(tmp1, v_smarty));
    v__template = tmp0;
  }
  v__template->m_caching = false;
  v__template.o_setPublic(NAMSTR(s_ss672ddadf, "force_compile"), false);
  {
    LINE(97,0);
    MethodCallPackage mcp0;
    CObjRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss17dcc9ea, "disableSecurity"), 0x3F773226810DC6AFLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth0Args())(mcp0, 0);
  }
  v__template->m_cache_id.assignVal(null);
  v__template->m_compile_id.assignVal(null);
  if (instanceOf(v_obj, NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"))) {
    {
      {
        LINE(101,0);
        const String &tmp0((toString(v_obj.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true))));
        const String &tmp1((toString(v_obj.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
        v__template->t_assign(NAMVAR(s_svs836e54d1, "template_name"), VarNR(concat3(tmp0, NAMSTR(s_ssdb381ae8, ":"), tmp1)));
      }
    }
  }
  if (instanceOf(v_obj, NAMSTR(s_sscf405241, "Smarty"))) {
    {
      LINE(104,(v__template->t_assign(NAMVAR(s_svscb5f95df, "template_data"), VarNR(g->s_Smarty_Internal_Debug___template_data))));
    }
  }
  else {
    {
      LINE(106,(v__template->t_assign(NAMVAR(s_svscb5f95df, "template_data"), null_varNR)));
    }
  }
  LINE(108,(v__template->t_assign(NAMVAR(s_svs06773e25, "assigned_vars"), v__assigned_vars)));
  LINE(109,(v__template->t_assign(NAMVAR(s_svs4fdfffb6, "config_vars"), v__config_vars)));
  {
    LINE(110,0);
    const Variant &tmp0((x_microtime(true)));
    const Variant &tmp1((v_smarty.o_getPublic(NAMSTR(s_ss0019d265, "start_time"), true)));
    const Numeric &tmp2(((tmp0 - tmp1)));
    v__template->t_assign(NAMVAR(s_svs67c58001, "execution_time"), tmp2);
  }
  echo(LINE(111,(toString(v__template->t_getrenderedtemplate()))));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 116 */
Object c_Smarty_Internal_Debug::t_get_debug_vars(CVarRef v_obj) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::get_debug_vars);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::get_debug_vars", array_createvi(1, toVPOD(v_obj)), r);
  Variant v_config_vars;
  Variant v_tpl_vars;
  Primitive v_key = 0;
  Variant v_var;
  Object v_parent;
  Primitive v_name = 0;
  Object v_clone;

  Variant tmp_ref;
  {
    LINE(118,0);
    const Variant &tmp0((v_obj.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true)));
    v_config_vars.assignVal(tmp0);
  }
  v_tpl_vars = s_sa00000000;
  {
    LOOP_COUNTER(1);
    Variant map2 = LINE(120,(v_obj.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true)));
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_var);
      v_key.assignVal(iter3.first());
      {
        {
          LINE(121,0);
          Object tmp0((f_clone(v_var)));
          v_tpl_vars.set(v_key, (VarNR(tmp0)));
        }
        if (instanceOf(v_obj, NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"))) {
          {
            {
              LINE(123,0);
              const String &tmp0((toString(v_obj.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true))));
              const String &tmp1((toString(v_obj.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true))));
              lval(v_tpl_vars.lvalAt(v_key, AccessFlags::CheckExist)).o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), concat3(tmp0, NAMSTR(s_ssdb381ae8, ":"), tmp1));
            }
          }
        }
        else if (instanceOf(v_obj, NAMSTR(s_ss9f38b5fd, "Smarty_Data"))) {
          {
            LINE(125,(lval(v_tpl_vars.lvalAt(v_key, AccessFlags::CheckExist)))).o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), NAMSTR(s_ssbcbe0685, "Data object"));
          }
        }
        else {
          {
            LINE(127,(lval(v_tpl_vars.lvalAt(v_key, AccessFlags::CheckExist)))).o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), NAMSTR(s_ssceb70105, "Smarty root"));
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (v_obj.o_isset(NAMSTR(s_ssfb10fd8c, "parent"), s_class_name));
    }
    if (tmp0) {
      {
        {
          LINE(132,0);
          const Variant &tmp0((v_obj.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
          const Object &tmp1((c_Smarty_Internal_Debug::t_get_debug_vars(tmp0)));
          v_parent = tmp1;
        }
        {
          LINE(133,0);
          const Variant &tmp0((v_parent.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true)));
          const Variant &tmp1((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(v_tpl_vars))))));
          v_tpl_vars.assignVal(tmp1);
        }
        {
          LINE(134,0);
          const Variant &tmp0((v_parent.o_getPublic(NAMSTR(s_ss4fdfffb6, "config_vars"), true)));
          const Variant &tmp1((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(v_config_vars))))));
          v_config_vars.assignVal(tmp1);
        }
      }
    }
    else {
      {
        {
          LOOP_COUNTER(4);
          Variant map5 = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (g->s_Smarty___global_tpl_vars));
          for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
            LOOP_COUNTER_CHECK(4);
            iter6.second(v_var);
            v_name.assignVal(iter6.first());
            {
              {
                bool tmp0;
                {
                  LINE(137,0);
                  bool tmp1((x_array_key_exists(v_name, v_tpl_vars)));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      LINE(138,0);
                      Object tmp0((f_clone(v_var)));
                      v_clone = tmp0;
                    }
                    v_clone.o_setPublic(NAMSTR(s_ss4d6447e5, "scope"), NAMSTR(s_ss6e3ab71a, "Global"));
                    v_tpl_vars.set(v_name, (VarNR(v_clone)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (toObject(Array(array_createvs(2, toSPOD(NAMSTR(s_ss62b7404c, "tpl_vars")), toVPOD(v_tpl_vars), toSPOD(NAMSTR(s_ss4fdfffb6, "config_vars")), toVPOD(v_config_vars)))));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_debug.php line 150 */
Variant c_Smarty_Internal_Debug::t_get_key(CVarRef v_template) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Debug, Smarty_Internal_Debug::get_key);
  INTERCEPT_INJECTION("Smarty_Internal_Debug::get_key", array_createvi(1, toVPOD(v_template)), r);
  Variant v_key;

  {
    bool tmp0;
    {
      LINE(153,0);
      const Variant &tmp1((v_template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
      tmp0 = (equal(tmp1, NAMSTR(s_ss00000000, "")));
    }
    if (tmp0) {
      {
        {
          LINE(154,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_template;
          mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth0Args())(mcp0, 0);
        }
      }
    }
  }
  {
    LINE(156,0);
    const Variant &tmp0((v_template.o_getPublic(NAMSTR(s_ss5f0f8bff, "templateUid"), true)));
    v_key.assignVal(tmp0);
  }
  if (isset(g->s_Smarty_Internal_Debug___template_data, v_key)) {
    {
      return v_key;
    }
  }
  else {
    {
      {
        LINE(160,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_template;
        mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
        lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).set(NAMSTR(s_ssdc3cbddc, "name"), (tmp1), true);
      }
      lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).set(NAMSTR(s_ssed98606f, "compile_time"), (NAMVAR(s_svif01bca90, 0LL)), true);
      lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).set(NAMSTR(s_ss3bf6b74a, "render_time"), (NAMVAR(s_svif01bca90, 0LL)), true);
      lval(g->s_Smarty_Internal_Debug___template_data.lvalAt(v_key, AccessFlags::CheckExist)).set(NAMSTR(s_ss6f0f9d08, "cache_time"), (NAMVAR(s_svif01bca90, 0LL)), true);
      return v_key;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Debug() {
  return NEWOBJ(c_Smarty_Internal_Debug)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_debug.php, pm_php$Smarty$libs$sysplugins$smarty_internal_debug_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_debug) = true;
  checkClassExistsThrow(NAMSTR(s_ssf6f068b0, "Smarty_Internal_Data"), &g->CDEC(smarty_internal_data));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Filter)
const InstanceOfInfo c_Smarty_Internal_Filter::s_instanceof_table[] = {
  {0x6E86BA396FBD56E7LL,1,"Smarty_Internal_Filter",&cw_Smarty_Internal_Filter},
};
const int c_Smarty_Internal_Filter::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Filter::ci_unregisterfilter((void*)&c_Smarty_Internal_Filter::i_unregisterfilter, (void*)&c_Smarty_Internal_Filter::ifa_unregisterfilter, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Filter::ci___construct((void*)&c_Smarty_Internal_Filter::i___construct, (void*)&c_Smarty_Internal_Filter::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Filter::ci_registerfilter((void*)&c_Smarty_Internal_Filter::i_registerfilter, (void*)&c_Smarty_Internal_Filter::ifa_registerfilter, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Filter::ci_loadfilter((void*)&c_Smarty_Internal_Filter::i_loadfilter, (void*)&c_Smarty_Internal_Filter::ifa_loadfilter, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Filter::ci__get_filter_name((void*)&c_Smarty_Internal_Filter::i__get_filter_name, (void*)&c_Smarty_Internal_Filter::ifa__get_filter_name, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Filter::i_unregisterfilter(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_unregisterfilter, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Filter::unregisterFilter", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_unregisterfilter(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Filter::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Filter::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Filter::i_registerfilter(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_registerfilter, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Filter::registerFilter", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_registerfilter(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Filter::i_loadfilter(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_loadfilter, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Filter::loadFilter", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_loadfilter(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Filter::i__get_filter_name(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i__get_filter_name, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Filter::_get_filter_name", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t__get_filter_name(arg0));
  }
}
Variant c_Smarty_Internal_Filter::ifa_unregisterfilter(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_unregisterfilter, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Filter::unregisterFilter", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_unregisterfilter(arg0, arg1), null);
}
Variant c_Smarty_Internal_Filter::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Filter::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Filter::ifa_registerfilter(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerfilter, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Filter::registerFilter", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_registerfilter(arg0, arg1), null);
}
Variant c_Smarty_Internal_Filter::ifa_loadfilter(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_loadfilter, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Filter::loadFilter", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_loadfilter(arg0, arg1));
}
Variant c_Smarty_Internal_Filter::ifa__get_filter_name(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa__get_filter_name, coo_Smarty_Internal_Filter);
  }
  c_Smarty_Internal_Filter *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Filter*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Filter::_get_filter_name", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t__get_filter_name(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Filter::s_call_info_table[] = {
  { 0x4FAEC39F52D4AEA5LL, 1, 14, "registerFilter", &c_Smarty_Internal_Filter::ci_registerfilter },
  { 0x2F4ED26A694C3197LL, 1, 16, "_get_filter_name", &c_Smarty_Internal_Filter::ci__get_filter_name },
  { 0x2D5B5508DBF979AELL, 1, 16, "unregisterFilter", &c_Smarty_Internal_Filter::ci_unregisterfilter },
  { 0x298AEB8139CF375ELL, 0, 10, "loadFilter", &c_Smarty_Internal_Filter::ci_loadfilter },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Filter::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Filter::s_call_info_index[] = {
  15,
  -1,-1,-1,-1,-1,0,-1,1,
  -1,-1,-1,-1,-1,-1,2,4,

};
c_Smarty_Internal_Filter *c_Smarty_Internal_Filter::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Filter = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Filter,
  c_Smarty_Internal_Filter::s_call_info_table,c_Smarty_Internal_Filter::s_call_info_index,
  c_Smarty_Internal_Filter::s_instanceof_table,c_Smarty_Internal_Filter::s_instanceof_index,
  &c_Smarty_Internal_Filter::s_class_name,
  0,&c_Smarty_Internal_Filter::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter.php line 17 */
void c_Smarty_Internal_Filter::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Filter, Smarty_Internal_Filter::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Filter::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter.php line 27 */
void c_Smarty_Internal_Filter::t_registerfilter(CVarRef v_type, CVarRef v_callback) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Filter, Smarty_Internal_Filter::registerFilter);
  INTERCEPT_INJECTION("Smarty_Internal_Filter::registerFilter", array_createvi(2, toVPOD(v_type), toVPOD(v_callback)), );
  Variant tmp_ref;
  {
    LINE(29,0);
    const Variant &tmp0((t__get_filter_name(v_callback)));
    Variant tmp1((v_callback));
    lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss05369a00, "registered_filters"), tmp_ref, s_class_name).lvalAt(v_type, AccessFlags::CheckExist)).set(tmp0, (tmp1));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter.php line 38 */
void c_Smarty_Internal_Filter::t_unregisterfilter(CVarRef v_type, CVarRef v_callback) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Filter, Smarty_Internal_Filter::unregisterFilter);
  INTERCEPT_INJECTION("Smarty_Internal_Filter::unregisterFilter", array_createvi(2, toVPOD(v_type), toVPOD(v_callback)), );
  Variant v_name;

  Variant tmp_ref;
  {
    LINE(40,0);
    const Variant &tmp0((t__get_filter_name(v_callback)));
    v_name.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(LINE(41,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), false).rvalRef(v_type, tmp_ref))), v_name));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(42,(unsetLval(GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ss05369a00, "registered_filters"), tmp_ref, s_class_name), v_type))).weakRemove(v_name);
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter.php line 52 */
Variant c_Smarty_Internal_Filter::t__get_filter_name(CVarRef v_function_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Filter, Smarty_Internal_Filter::_get_filter_name);
  INTERCEPT_INJECTION("Smarty_Internal_Filter::_get_filter_name", array_createvi(1, toVPOD(v_function_name)), r);
  Variant v__class_name;

  if (x_is_array(v_function_name)) {
    {
      {
        LINE(55,0);
        const Variant &tmp0((v_function_name.rvalAt(0LL, AccessFlags::Error)));
        Variant tmp1;
        if (x_is_object(tmp0)) {
          LINE(56,0);
          const Variant &tmp2((v_function_name.rvalAt(0LL, AccessFlags::Error)));
          tmp1 = (x_get_class(tmp2));
        } else {
          tmp1 = (v_function_name.rvalAt(0LL, AccessFlags::Error));
        }
        v__class_name.assignVal(tmp1);
      }
      {
        const String &tmp0((toString(v__class_name)));
        LINE(57,0);
        const String &tmp1((toString(v_function_name.rvalAt(1LL, AccessFlags::Error))));
        return concat3(tmp0, NAMSTR(s_ss7f06ffcd, "_"), tmp1);
      }
    }
  }
  else {
    {
      return v_function_name;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter.php line 71 */
Variant c_Smarty_Internal_Filter::t_loadfilter(CVarRef v_type, CVarRef v_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Filter, Smarty_Internal_Filter::loadFilter);
  INTERCEPT_INJECTION("Smarty_Internal_Filter::loadFilter", array_createvi(2, toVPOD(v_type), toVPOD(v_name)), r);
  Sequence v__plugin;
  Sequence v__filter_name;

  Variant tmp_ref;
  v__plugin = concat4(NAMSTR(s_ssbb3667f8, "smarty_"), toString(v_type), NAMSTR(s_ss2cc87a09, "filter_"), toString(v_name));
  v__filter_name.assignVal(v__plugin);
  {
    bool tmp0;
    {
      LINE(75,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
      mcp1.methodCall((obj1), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, v__plugin)));
    }
    if (tmp0) {
      {
        if (LINE(76,(x_class_exists(v__plugin, false)))) {
          {
            v__plugin = Array(array_createvi(2, toVPOD(v__plugin), toVPOD(NAMVAR(s_svs5ac66c5d, "execute"))));
          }
        }
        if (LINE(79,(x_is_callable(v__plugin)))) {
          {
            {
              Sequence tmp0((v__plugin));
              return LINE(80,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss05369a00, "registered_filters"), tmp_ref, s_class_name).lvalAt(v_type, AccessFlags::CheckExist)))).set(v__filter_name, (tmp0));
            }
          }
        }
      }
    }
  }
  {
    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
    throw_exception(LINE(83,(((c_SmartyException*)tmp0.get()->create(VarNR(concat4(toString(v_type), NAMSTR(s_sse693c35b, "filter \""), toString(v_name), NAMSTR(s_ssd8aa6734, "\" not callable")))), tmp0))));
  }
  return false;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Filter() {
  return NEWOBJ(c_Smarty_Internal_Filter)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_filter.php, pm_php$Smarty$libs$sysplugins$smarty_internal_filter_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_filter) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter_handler.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Filter_Handler)
const InstanceOfInfo c_Smarty_Internal_Filter_Handler::s_instanceof_table[] = {
  {0x74C8192F0EA0ADB1LL,1,"Smarty_Internal_Filter_Handler",&cw_Smarty_Internal_Filter_Handler},
};
const int c_Smarty_Internal_Filter_Handler::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Filter_Handler::ci_runfilter((void*)&c_Smarty_Internal_Filter_Handler::i_runfilter, (void*)&c_Smarty_Internal_Filter_Handler::ifa_runfilter, 4, 12, 0x0000000000000000LL);
Variant c_Smarty_Internal_Filter_Handler::i_runfilter(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Filter_Handler::runFilter", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Filter_Handler::t_runfilter(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Filter_Handler::ifa_runfilter(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Filter_Handler::runFilter", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(count <= 3 ? null_variant : a3);
  return (c_Smarty_Internal_Filter_Handler::t_runfilter(arg0, arg1, arg2, arg3));
}
const MethodCallInfoTable c_Smarty_Internal_Filter_Handler::s_call_info_table[] = {
  { 0x438F27AC2A46A179LL, 1, 9, "runFilter", &c_Smarty_Internal_Filter_Handler::ci_runfilter },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Filter_Handler::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Filter_Handler = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Filter_Handler,
  c_Smarty_Internal_Filter_Handler::s_call_info_table,c_Smarty_Internal_Filter_Handler::s_call_info_index,
  c_Smarty_Internal_Filter_Handler::s_instanceof_table,c_Smarty_Internal_Filter_Handler::s_instanceof_index,
  &c_Smarty_Internal_Filter_Handler::s_class_name,
  0,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_filter_handler.php line 29 */
Variant c_Smarty_Internal_Filter_Handler::t_runfilter(CVarRef v_type, CVarRef v_content, Variant v_template, CVarRef v_flag //  = null_variant
) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Filter_Handler, Smarty_Internal_Filter_Handler::runFilter);
  INTERCEPT_INJECTION("Smarty_Internal_Filter_Handler::runFilter", array_createvi(4, toVPOD(v_type), toVPOD(v_content), toVPOD(v_template), toVPOD(v_flag)), r);
  Variant v_output;
  Variant v_name;
  String v_plugin_name;
  Primitive v_key = 0;

  Variant tmp_ref;
  v_output.assignVal(v_content);
  {
    bool tmp0;
    {
      bool tmp1 = (!equal(v_type, NAMSTR(s_ss3ea207e6, "variable")));
      if (!tmp1) {
        tmp1 = ((LINE(32,(toBoolean(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9e6eeae2, "variable_filter"), true)))) && !same(v_flag, false)));
      }
      tmp0 = ((tmp1 || same(v_flag, true)));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            tmp0 = (!(empty(LINE(34,(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ssb05f1099, "autoload_filters"), false))), v_type)));
          }
          if (tmp0) {
            {
              {
                LOOP_COUNTER(1);
                Variant map2;
                {
                  LINE(35,0);
                  const Array &tmp0((toArray(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssb05f1099, "autoload_filters"), true).rvalAt(v_type, AccessFlags::Error))));
                  map2 = (tmp0);
                }
                for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                  LOOP_COUNTER_CHECK(1);
                  iter3.second(v_name);
                  {
                    v_plugin_name = concat4(NAMSTR(s_ssc76d1c1f, "Smarty_"), toString(v_type), NAMSTR(s_ss2cc87a09, "filter_"), toString(v_name));
                    {
                      bool tmp0;
                      {
                        LINE(37,0);
                        MethodCallPackage mcp1;
                        CVarRef obj1 = v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
                        mcp1.methodCall((obj1), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
                        const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                        tmp0 = (toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(v_plugin_name))));
                      }
                      if (tmp0) {
                        {
                          if (LINE(38,(x_function_exists(v_plugin_name)))) {
                            {
                              {
                                const CallInfo *cit0;
                                void *vt0;
                                get_call_info_or_fail(cit0, vt0, v_plugin_name);
                                LINE(40,0);
                                Variant tmp1(((cit0->getFunc2Args())(vt0, 2, v_output, v_template)));
                                v_output.assignVal(tmp1);
                              }
                            }
                          }
                          else if (LINE(41,(x_class_exists(v_plugin_name, false)))) {
                            {
                              {
                                LINE(43,0);
                                const Variant &tmp0((call_user_func2(VarNR(Array(array_createvi(2, toVPOD(VarNR(v_plugin_name)), toVPOD(NAMVAR(s_svs5ac66c5d, "execute"))))), v_output, v_template)));
                                v_output.assignVal(tmp0);
                              }
                            }
                          }
                        }
                      }
                      else {
                        {
                          {
                            p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                            throw_exception(LINE(47,(((c_SmartyException*)tmp0.get()->create(VarNR(concat(NAMSTR(s_ssf4e315fb, "Unable to load filter "), v_plugin_name))), tmp0))));
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
          bool tmp0;
          {
            tmp0 = (!(empty(LINE(52,(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), false))), v_type)));
          }
          if (tmp0) {
            {
              {
                LOOP_COUNTER(4);
                Variant map5;
                {
                  map5 = LINE(53,(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), true).rvalAt(v_type, AccessFlags::Error)));
                }
                for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
                  LOOP_COUNTER_CHECK(4);
                  iter6.second(v_name);
                  v_key.assignVal(iter6.first());
                  {
                    {
                      bool tmp0;
                      {
                        LINE(54,0);
                        const Variant &tmp1((v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), true).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalAt(v_key, AccessFlags::Error)));
                        tmp0 = (x_is_array(tmp1));
                        tmp_ref.unset();
                      }
                      if (tmp0) {
                        {
                          {
                            LINE(55,0);
                            const Variant &tmp0((v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), true).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalAt(v_key, AccessFlags::Error)));
                            const Variant &tmp1((call_user_func2(tmp0, v_output, v_template)));
                            v_output.assignVal(tmp1);
                            tmp_ref.unset();
                          }
                        }
                      }
                      else {
                        {
                          {
                            const CallInfo *cit0;
                            void *vt0;
                            get_call_info_or_fail(cit0, vt0, (LINE(57,(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), true).rvalRef(v_type, tmp_ref, AccessFlags::Error).rvalAt(v_key, AccessFlags::Error)))));
                            Variant tmp1(((cit0->getFunc2Args())(vt0, 2, v_output, v_template)));
                            v_output.assignVal(tmp1);
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
  return wrap_variant(v_output);
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Filter_Handler() {
  return NEWOBJ(c_Smarty_Internal_Filter_Handler)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_filter_handler.php, pm_php$Smarty$libs$sysplugins$smarty_internal_filter_handler_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_filter_handler) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_function_call_handler.php line 13 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Function_Call_Handler)
const InstanceOfInfo c_Smarty_Internal_Function_Call_Handler::s_instanceof_table[] = {
  {0x23E084E03A94BE71LL,1,"Smarty_Internal_Template",&cw_Smarty_Internal_Template},
  {0x4A2F7803E74D28CDLL,1,"Smarty_Internal_Function_Call_Handler",&cw_Smarty_Internal_Function_Call_Handler},
  {0x3223E6318F246CB6LL,1,"Smarty_Internal_Data",&cw_Smarty_Internal_Data},
};
const int c_Smarty_Internal_Function_Call_Handler::s_instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,1,2,-1,

};
CallInfo c_Smarty_Internal_Function_Call_Handler::ci_call((void*)&c_Smarty_Internal_Function_Call_Handler::i_call, (void*)&c_Smarty_Internal_Function_Call_Handler::ifa_call, 5, 12, 0x0000000000000000LL);
Variant c_Smarty_Internal_Function_Call_Handler::i_call(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Function_Call_Handler::call", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(UNLIKELY(count <= 4) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Function_Call_Handler::t_call(arg0, arg1, arg2, arg3, arg4), null);
  }
}
Variant c_Smarty_Internal_Function_Call_Handler::ifa_call(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Function_Call_Handler::call", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  return (c_Smarty_Internal_Function_Call_Handler::t_call(arg0, arg1, arg2, arg3, arg4), null);
}
const MethodCallInfoTable c_Smarty_Internal_Function_Call_Handler::s_call_info_table[] = {
  { 0x4D34052915EF41ACLL, 1, 4, "call", &c_Smarty_Internal_Function_Call_Handler::ci_call },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Function_Call_Handler::s_call_info_index[] = {
  1,
  0,-1,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Function_Call_Handler = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Function_Call_Handler,
  c_Smarty_Internal_Function_Call_Handler::s_call_info_table,c_Smarty_Internal_Function_Call_Handler::s_call_info_index,
  c_Smarty_Internal_Function_Call_Handler::s_instanceof_table,c_Smarty_Internal_Function_Call_Handler::s_instanceof_index,
  &c_Smarty_Internal_Function_Call_Handler::s_class_name,
  &c_Smarty_Internal_Template::os_prop_table,&c_Smarty_Internal_Template::ci___construct,0,&cw_Smarty_Internal_Template
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_function_call_handler.php line 14 */
void c_Smarty_Internal_Function_Call_Handler::t_call(CVarRef v__name, Variant v__template, Variant v__params, CVarRef v__hash, CVarRef v__nocache) {
  STATIC_METHOD_INJECTION_NOMEM(Smarty_Internal_Function_Call_Handler, Smarty_Internal_Function_Call_Handler::call);
  INTERCEPT_INJECTION("Smarty_Internal_Function_Call_Handler::call", array_createvi(5, toVPOD(v__name), toVPOD(v__template), toVPOD(v__params), toVPOD(v__hash), toVPOD(v__nocache)), );
  Variant v__function;
  Variant v__code;

  Variant tmp_ref;
  if (toBoolean(v__nocache)) {
    {
      v__function = concat3(NAMSTR(s_ss2267d06d, "smarty_template_function_"), toString(v__name), NAMSTR(s_ss1e2c5b9f, "_nocache"));
      {
        LINE(18,(lval(v__template.o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss57c82ef4, "template_functions"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss03d41454, "called_nocache"), (true_varNR), true);
        tmp_ref.unset();
      }
    }
  }
  else {
    {
      v__function = concat4(NAMSTR(s_ss2267d06d, "smarty_template_function_"), toString(v__hash), NAMSTR(s_ss7f06ffcd, "_"), toString(v__name));
    }
  }
  {
    bool tmp0;
    {
      LINE(22,0);
      bool tmp1((x_is_callable(v__function)));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        v__code = concat5(NAMSTR(s_ss78b9c49d, "function "), toString(v__function), NAMSTR(s_ssffcd43b0, "($_smarty_tpl,$params) {\r\n    $saved_tpl_vars = $_smarty_tpl->tpl_vars;\r\n    foreach ($_smarty_tpl->template_functions['"), toString(v__name), NAMSTR(s_ss508e6eae, "']['parameter'] as $key => $value) {$_smarty_tpl->tpl_vars[$key] = new Smarty_variable($value);};\r\n    foreach ($params as $key => $value) {$_smarty_tpl->tpl_vars[$key] = new Smarty_variable($value);}\?>"));
        if (toBoolean(v__nocache)) {
          {
            {
              LINE(28,0);
              const String &tmp1((toString(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
              const String &tmp2((toString(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
              ArrayInit tmp0(array_createvi(2, toVPOD(VarNR(concat5(NAMSTR(s_ss26d165fe, "!<\\\?php echo \\'/\\*%%SmartyNocache:"), tmp1, NAMSTR(s_ss512db297, "%%\\*/|/\\*/%%SmartyNocache:"), tmp2, NAMSTR(s_ss634d27b2, "%%\\*/\\';\\\?>!")))), toVPOD(NAMVAR(s_svsd09999d2, "!\\\\'!"))));
              const Array &tmp3((Array(tmp0)));
              LINE(29,0);
              const Variant &tmp4((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9094af88, "compiled"), AccessFlags::Error_Key)));
              const String &tmp5((toString(x_preg_replace(VarNR(tmp3), s_sva9305bbde, tmp4))));
              concat_assign(v__code, tmp5);
              tmp_ref.unset();
            }
          }
        }
        else {
          {
            {
              LINE(31,0);
              const String &tmp0((toString(v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
              const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
              const Variant &tmp2((v__template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9094af88, "compiled"), AccessFlags::Error_Key)));
              const String &tmp3((toString(x_preg_replace(VarNR(concat3(NAMSTR(s_ssb9e13cd6, "/"), tmp0, NAMSTR(s_ssb9e13cd6, "/"))), tmp1, tmp2))));
              concat_assign(v__code, tmp3);
              tmp_ref.unset();
            }
          }
        }
        concat_assign(v__code, NAMSTR(s_ss52a88b18, "<\?php $_smarty_tpl->tpl_vars = $saved_tpl_vars;}"));
        LINE(34,(f_eval(toString(v__code))));
      }
    }
  }
  {
    const CallInfo *cit0;
    void *vt0;
    get_call_info_or_fail(cit0, vt0, v__function);
    LINE(36,((cit0->getFunc2Args())(vt0, 2, v__template, v__params)));
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Function_Call_Handler() {
  return NEWOBJ(c_Smarty_Internal_Function_Call_Handler)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_function_call_handler.php, pm_php$Smarty$libs$sysplugins$smarty_internal_function_call_handler_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_function_call_handler) = true;
  checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_get_include_path.php line 14 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Get_Include_Path)
const InstanceOfInfo c_Smarty_Internal_Get_Include_Path::s_instanceof_table[] = {
  {0x533F0E3BA7F32B63LL,1,"Smarty_Internal_Get_Include_Path",&cw_Smarty_Internal_Get_Include_Path},
};
const int c_Smarty_Internal_Get_Include_Path::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Get_Include_Path::ci_getincludepath((void*)&c_Smarty_Internal_Get_Include_Path::i_getincludepath, (void*)&c_Smarty_Internal_Get_Include_Path::ifa_getincludepath, 1, 12, 0x0000000000000000LL);
Variant c_Smarty_Internal_Get_Include_Path::i_getincludepath(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Get_Include_Path::getIncludePath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Get_Include_Path::t_getincludepath(arg0));
  }
}
Variant c_Smarty_Internal_Get_Include_Path::ifa_getincludepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Get_Include_Path::getIncludePath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Get_Include_Path::t_getincludepath(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Get_Include_Path::s_call_info_table[] = {
  { 0x43C77A17C779FD54LL, 1, 14, "getIncludePath", &c_Smarty_Internal_Get_Include_Path::ci_getincludepath },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Get_Include_Path::s_call_info_index[] = {
  1,
  0,-1,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Get_Include_Path = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Get_Include_Path,
  c_Smarty_Internal_Get_Include_Path::s_call_info_table,c_Smarty_Internal_Get_Include_Path::s_call_info_index,
  c_Smarty_Internal_Get_Include_Path::s_instanceof_table,c_Smarty_Internal_Get_Include_Path::s_instanceof_index,
  &c_Smarty_Internal_Get_Include_Path::s_class_name,
  0,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_get_include_path.php line 21 */
Variant c_Smarty_Internal_Get_Include_Path::t_getincludepath(CVarRef v_filepath) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Get_Include_Path, Smarty_Internal_Get_Include_Path::getIncludePath);
  INTERCEPT_INJECTION("Smarty_Internal_Get_Include_Path::getIncludePath", array_createvi(1, toVPOD(v_filepath)), r);
  Variant &sv__path_array ATTRIBUTE_UNUSED = g->sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array;
  bool &inited_sv__path_array ATTRIBUTE_UNUSED = g->inited_sv_Smarty_Internal_Get_Include_Path___getIncludePath____path_array;
  String v__ini_include_path;
  Variant v__include_path;

  if (!inited_sv__path_array) {
    setNull(sv__path_array);
    inited_sv__path_array = true;
  }
  if (!(isset(sv__path_array))) {
    {
      {
        LINE(26,0);
        const String &tmp0((x_ini_get(NAMSTR(s_ssbe1af399, "include_path"))));
        v__ini_include_path = tmp0;
      }
      if (LINE(28,(toBoolean(x_strstr(v__ini_include_path, NAMVAR(s_svs0286c0cc, ";")))))) {
        {
          {
            LINE(30,0);
            const Variant &tmp0((x_explode(NAMSTR(s_ss0286c0cc, ";"), v__ini_include_path)));
            sv__path_array.assignVal(tmp0);
          }
        }
      }
      else {
        {
          {
            LINE(32,0);
            const Variant &tmp0((x_explode(NAMSTR(s_ssdb381ae8, ":"), v__ini_include_path)));
            sv__path_array.assignVal(tmp0);
          }
        }
      }
    }
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = sv__path_array.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__include_path);
      {
        if (LINE(36,(x_file_exists(concat3(toString(v__include_path), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))), toString(v_filepath)))))) {
          {
            return concat3(toString(v__include_path), toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))), toString(v_filepath));
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Get_Include_Path() {
  return NEWOBJ(c_Smarty_Internal_Get_Include_Path)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_get_include_path.php, pm_php$Smarty$libs$sysplugins$smarty_internal_get_include_path_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_get_include_path) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_nocache_insert.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Nocache_Insert)
const InstanceOfInfo c_Smarty_Internal_Nocache_Insert::s_instanceof_table[] = {
  {0x2207CCD26D8F69FDLL,1,"Smarty_Internal_Nocache_Insert",&cw_Smarty_Internal_Nocache_Insert},
};
const int c_Smarty_Internal_Nocache_Insert::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Nocache_Insert::ci_compile((void*)&c_Smarty_Internal_Nocache_Insert::i_compile, (void*)&c_Smarty_Internal_Nocache_Insert::ifa_compile, 5, 12, 0x0000000000000000LL);
Variant c_Smarty_Internal_Nocache_Insert::i_compile(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Nocache_Insert::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Nocache_Insert::t_compile(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty_Internal_Nocache_Insert::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Nocache_Insert::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(count <= 4 ? null_variant : a4);
  return (c_Smarty_Internal_Nocache_Insert::t_compile(arg0, arg1, arg2, arg3, arg4));
}
const MethodCallInfoTable c_Smarty_Internal_Nocache_Insert::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Nocache_Insert::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Nocache_Insert::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Nocache_Insert = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Nocache_Insert,
  c_Smarty_Internal_Nocache_Insert::s_call_info_table,c_Smarty_Internal_Nocache_Insert::s_call_info_index,
  c_Smarty_Internal_Nocache_Insert::s_instanceof_table,c_Smarty_Internal_Nocache_Insert::s_instanceof_index,
  &c_Smarty_Internal_Nocache_Insert::s_class_name,
  0,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_nocache_insert.php line 27 */
String c_Smarty_Internal_Nocache_Insert::t_compile(CVarRef v__function, CVarRef v__attr, CVarRef v__template, CVarRef v__script, CVarRef v__assign //  = null_variant
) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Nocache_Insert, Smarty_Internal_Nocache_Insert::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Nocache_Insert::compile", array_createvi(5, toVPOD(v__function), toVPOD(v__attr), toVPOD(v__template), toVPOD(v__script), toVPOD(v__assign)), r);
  String v__output;
  Variant v__tpl;

  v__output = NAMSTR(s_ss271d3c8a, "<\?php ");
  if (!equal(v__script, NAMSTR(s_ssf927ff2c, "null"))) {
    {
      concat_assign(v__output, concat3(NAMSTR(s_ss48386209, "require_once '"), toString(v__script), NAMSTR(s_ss3f3bcd86, "';")));
    }
  }
  if (isset(v__assign)) {
    {
      {
        StringBuffer tmp0_buf;
        tmp0_buf.appendWithTaint("$_smarty_tpl->assign('", 22);
        tmp0_buf.appendWithTaint(toString(v__assign));
        tmp0_buf.appendWithTaint("' , ", 4);
        tmp0_buf.appendWithTaint(toString(v__function));
        tmp0_buf.appendWithTaint(" (", 2);
        tmp0_buf.appendWithTaint(LINE(37,(toString(x_var_export(v__attr, true)))));
        tmp0_buf.appendWithTaint(",$_smarty_tpl), true);\?>", 24);
        CStrRef tmp0(tmp0_buf.detachWithTaint());
        concat_assign(v__output, tmp0);
      }
    }
  }
  else {
    {
      {
        const String &tmp0((toString(v__function)));
        LINE(39,0);
        const String &tmp1((toString(x_var_export(v__attr, true))));
        concat_assign(v__output, concat5(NAMSTR(s_ss2de081fe, "echo "), tmp0, NAMSTR(s_ss6e782e41, "("), tmp1, NAMSTR(s_ssd89d1e4d, ",$_smarty_tpl);\?>")));
      }
    }
  }
  v__tpl.assignVal(v__template);
  LOOP_COUNTER(1);
  {
    while (true) {
      {
        LINE(42,0);
        const Variant &tmp0((v__tpl.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
        if (!(instanceOf(tmp0, NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template")))) break;
      }
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(43,0);
          const Variant &tmp0((v__tpl.o_getPublic(NAMSTR(s_ssfb10fd8c, "parent"), true)));
          v__tpl.assignVal(tmp0);
        }
      }
    }
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("/*%%SmartyNocache:", 18);
    tmp0_buf.appendWithTaint(LINE(45,(toString(v__tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)))));
    tmp0_buf.appendWithTaint("%%*/", 4);
    tmp0_buf.appendWithTaint(v__output);
    tmp0_buf.appendWithTaint("/*/%%SmartyNocache:", 19);
    tmp0_buf.appendWithTaint(toString(v__tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
    tmp0_buf.appendWithTaint("%%*/", 4);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Nocache_Insert() {
  return NEWOBJ(c_Smarty_Internal_Nocache_Insert)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_nocache_insert.php, pm_php$Smarty$libs$sysplugins$smarty_internal_nocache_insert_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_nocache_insert) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva00000000,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x426ADB34E4EC897ALL,0,0,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Debug___template_data),&NAMSTR(s_sscb5f95df, "template_data") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Debug hash
  -1,-1,-1,-1,-1,0,-1,-1,
  // Smarty_Internal_Debug lists
  -1,
  -1,
  -1,
  1,0,};
const ClassPropTable c_Smarty_Internal_Debug::os_prop_table = {
  -1,-1,7,0,-1,-1,1,0,
  cpt_hash_entries+8,&c_Smarty_Internal_Data::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_Smarty_Internal_Debug::os_prop_table, cpt_hash_entries+11);

///////////////////////////////////////////////////////////////////////////////
}
