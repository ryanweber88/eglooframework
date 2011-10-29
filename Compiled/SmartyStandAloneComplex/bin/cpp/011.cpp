
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_capture.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_capture.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_config_load.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_config_load.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_continue.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_continue.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_debug.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_debug.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_eval.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_eval.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_extends.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_extends.fws.h>

// Dependencies
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_block.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_capture.php line 49 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_CaptureClose)
const InstanceOfInfo c_Smarty_Internal_Compile_CaptureClose::s_instanceof_table[] = {
  {0x6CB1EC8D13F9B490LL,0,"Smarty_Internal_Compile_CaptureClose",&cw_Smarty_Internal_Compile_CaptureClose},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_CaptureClose::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_CaptureClose::ci_compile((void*)&c_Smarty_Internal_Compile_CaptureClose::i_compile, (void*)&c_Smarty_Internal_Compile_CaptureClose::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_CaptureClose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_CaptureClose);
  }
  c_Smarty_Internal_Compile_CaptureClose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_CaptureClose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_CaptureClose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_CaptureClose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_CaptureClose);
  }
  c_Smarty_Internal_Compile_CaptureClose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_CaptureClose*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_CaptureClose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_CaptureClose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_CaptureClose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_CaptureClose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_CaptureClose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_CaptureClose,
  c_Smarty_Internal_Compile_CaptureClose::s_call_info_table,c_Smarty_Internal_Compile_CaptureClose::s_call_info_index,
  c_Smarty_Internal_Compile_CaptureClose::s_instanceof_table,c_Smarty_Internal_Compile_CaptureClose::s_instanceof_index,
  &c_Smarty_Internal_Compile_CaptureClose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_capture.php line 57 */
String c_Smarty_Internal_Compile_CaptureClose::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_CaptureClose, Smarty_Internal_Compile_CaptureClose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_CaptureClose::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v_buffer;
  Variant v_assign;
  Variant v_append;
  String v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(61,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (LINE(63,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
    }
  }
  {
    LINE(67,0);
    CVarRef tmp0((x_array_pop(ref(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssfda52c82, "_capture_stack"), tmp_ref, s_class_name)))));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_set(NAMSTR(s_ss8b74ea02, "nocache"), tmp0[3], s_class_name);
    v_append = tmp0[2];
    v_assign = tmp0[1];
    v_buffer = tmp0[0];
    ;
    tmp_ref.unset();
  }
  v__output = NAMSTR(s_ss271d3c8a, "<\?php ");
  if (isset(v_assign)) {
    {
      concat_assign(v__output, concat3(NAMSTR(s_ssf2b146f1, " $_smarty_tpl->assign("), toString(v_assign), NAMSTR(s_ssc470fcb5, ", ob_get_contents());")));
    }
  }
  if (isset(v_append)) {
    {
      concat_assign(v__output, concat3(NAMSTR(s_ss0ac44254, " $_smarty_tpl->append("), toString(v_append), NAMSTR(s_ssc470fcb5, ", ob_get_contents());")));
    }
  }
  concat_assign(v__output, concat3(NAMSTR(s_ssf3592b66, " Smarty::$_smarty_vars['capture']["), toString(v_buffer), NAMSTR(s_ssc51abdfe, "]=ob_get_clean();\?>")));
  return v__output;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_capture.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Capture)
const InstanceOfInfo c_Smarty_Internal_Compile_Capture::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x498BA6932B36BE3ELL,1,"Smarty_Internal_Compile_Capture",&cw_Smarty_Internal_Compile_Capture},
};
const int c_Smarty_Internal_Compile_Capture::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Capture::ci_compile((void*)&c_Smarty_Internal_Compile_Capture::i_compile, (void*)&c_Smarty_Internal_Compile_Capture::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Capture::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Capture);
  }
  c_Smarty_Internal_Compile_Capture *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Capture*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Capture::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Capture::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Capture);
  }
  c_Smarty_Internal_Compile_Capture *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Capture*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Capture::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Capture::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Capture::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Capture::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Capture = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Capture,
  c_Smarty_Internal_Compile_Capture::s_call_info_table,c_Smarty_Internal_Compile_Capture::s_call_info_index,
  c_Smarty_Internal_Compile_Capture::s_instanceof_table,c_Smarty_Internal_Compile_Capture::s_instanceof_index,
  &c_Smarty_Internal_Compile_Capture::s_class_name,
  &c_Smarty_Internal_Compile_Capture::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Capture::init() {
  c_Smarty_Internal_CompileBase::init();
  m_shorttag_order = s_sa6b3e86d0;
  m_optional_attributes = s_sae7f9b392;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_capture.php line 27 */
String c_Smarty_Internal_Compile_Capture::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Capture, Smarty_Internal_Compile_Capture::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Capture::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v_buffer;
  Variant v_assign;
  Variant v_append;
  String v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(31,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    Variant tmp0(((isset(v__attr, NAMSTR(s_ssdc3cbddc, "name"), true) ? ((Variant)(LINE(33,(v__attr.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))))) : ((Variant)(NAMSTR(s_ss57cf14e7, "'default'"))))));
    v_buffer.assignVal(tmp0);
  }
  {
    Variant tmp0(((isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true) ? ((Variant)(LINE(34,(v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key))))) : ((Variant)(null)))));
    v_assign.assignVal(tmp0);
  }
  {
    Variant tmp0(((isset(v__attr, NAMSTR(s_ssba65d5ee, "append"), true) ? ((Variant)(LINE(35,(v__attr.rvalAt(NAMSTR(s_ssba65d5ee, "append"), AccessFlags::Error_Key))))) : ((Variant)(null)))));
    v_append.assignVal(tmp0);
  }
  {
    Variant tmp1((v_buffer));
    Variant tmp2((v_assign));
    Variant tmp3((v_append));
    LINE(37,0);
    const Variant &tmp4((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    ArrayInit tmp0(array_createvi(4, toVPOD(tmp1), toVPOD(tmp2), toVPOD(tmp3), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp0)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssfda52c82, "_capture_stack"), tmp_ref, s_class_name).append((VarNR(tmp5)));
    tmp_ref.unset();
  }
  {
    LINE(39,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    Primitive tmp2((bitwise_or(tmp0, tmp1)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
    tmp_ref.unset();
  }
  v__output = NAMSTR(s_ss74f64f24, "<\?php ob_start(); \?>");
  return v__output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_CaptureClose() {
  return NEWOBJ(c_Smarty_Internal_Compile_CaptureClose)();
}
ObjectData *coo_Smarty_Internal_Compile_Capture() {
  return NEWOBJ(c_Smarty_Internal_Compile_Capture)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_capture.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_capture_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_capture) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_captureclose) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_config_load.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Config_Load)
const InstanceOfInfo c_Smarty_Internal_Compile_Config_Load::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x398A9B29EB11FE0ALL,1,"Smarty_Internal_Compile_Config_Load",&cw_Smarty_Internal_Compile_Config_Load},
};
const int c_Smarty_Internal_Compile_Config_Load::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Config_Load::ci_compile((void*)&c_Smarty_Internal_Compile_Config_Load::i_compile, (void*)&c_Smarty_Internal_Compile_Config_Load::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Config_Load::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Config_Load);
  }
  c_Smarty_Internal_Compile_Config_Load *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Config_Load*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Config_Load::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Config_Load::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Config_Load);
  }
  c_Smarty_Internal_Compile_Config_Load *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Config_Load*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Config_Load::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Config_Load::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Config_Load::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Config_Load::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Config_Load = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Config_Load,
  c_Smarty_Internal_Compile_Config_Load::s_call_info_table,c_Smarty_Internal_Compile_Config_Load::s_call_info_index,
  c_Smarty_Internal_Compile_Config_Load::s_instanceof_table,c_Smarty_Internal_Compile_Config_Load::s_instanceof_index,
  &c_Smarty_Internal_Compile_Config_Load::s_class_name,
  &c_Smarty_Internal_Compile_Config_Load::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Config_Load::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sac09f8e73;
  m_shorttag_order = s_sa612815d6;
  m_optional_attributes = s_sa0ea8e431;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_config_load.php line 29 */
String c_Smarty_Internal_Compile_Config_Load::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Config_Load, Smarty_Internal_Compile_Config_Load::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Config_Load::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v_conf_file;
  Variant v_section;
  Variant v_scope;
  String v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(33,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(35,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          LINE(36,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsb128b262, "nocache option not allowed"), tmp1);
        }
      }
    }
  }
  {
    LINE(41,0);
    const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key)));
    v_conf_file.assignVal(tmp0);
  }
  if (isset(v__attr, NAMSTR(s_ss28c31d78, "section"), true)) {
    {
      {
        LINE(43,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss28c31d78, "section"), AccessFlags::Error_Key)));
        v_section.assignVal(tmp0);
      }
    }
  }
  else {
    {
      v_section = NAMSTR(s_ssf927ff2c, "null");
    }
  }
  v_scope = NAMSTR(s_ss59b4a7d2, "local");
  if (isset(v__attr, NAMSTR(s_ss4d6447e5, "scope"), true)) {
    {
      {
        LINE(50,0);
        const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key))));
        const String &tmp1((x_trim(tmp0, NAMSTR(s_ss643ce2bc, "'\""))));
        v__attr.set(NAMSTR(s_ss4d6447e5, "scope"), (VarNR(tmp1)), true);
      }
      {
        bool tmp0;
        {
          LINE(51,0);
          const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
          tmp0 = (x_in_array(tmp1, s_svab0364816));
        }
        if (tmp0) {
          {
            {
              LINE(52,0);
              const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
              v_scope.assignVal(tmp0);
            }
          }
        }
        else {
          {
            {
              LINE(54,0);
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
  v__output = StringBuffer().addWithTaint("<\?php  $_config = new Smarty_Internal_Config(", 45).addWithTaint(toString(v_conf_file)).addWithTaint(", $_smarty_tpl->smarty, $_smarty_tpl);", 38).addWithTaint("$_config->loadConfigVars(", 25).addWithTaint(toString(v_section)).addWithTaint(", '", 3).addWithTaint(toString(v_scope)).addWithTaint("'); \?>", 6).detachWithTaint();
  return v__output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Config_Load() {
  return NEWOBJ(c_Smarty_Internal_Compile_Config_Load)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_config_load.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_config_load_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_config_load) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_continue.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Continue)
const InstanceOfInfo c_Smarty_Internal_Compile_Continue::s_instanceof_table[] = {
  {0x2818083376D09CF8LL,0,"Smarty_Internal_Compile_Continue",&cw_Smarty_Internal_Compile_Continue},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Continue::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Continue::ci_compile((void*)&c_Smarty_Internal_Compile_Continue::i_compile, (void*)&c_Smarty_Internal_Compile_Continue::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Continue::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Continue);
  }
  c_Smarty_Internal_Compile_Continue *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Continue*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Continue::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Continue::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Continue);
  }
  c_Smarty_Internal_Compile_Continue *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Continue*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Continue::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Continue::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Continue::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Continue::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Continue = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Continue,
  c_Smarty_Internal_Compile_Continue::s_call_info_table,c_Smarty_Internal_Compile_Continue::s_call_info_index,
  c_Smarty_Internal_Compile_Continue::s_instanceof_table,c_Smarty_Internal_Compile_Continue::s_instanceof_index,
  &c_Smarty_Internal_Compile_Continue::s_class_name,
  &c_Smarty_Internal_Compile_Continue::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Continue::init() {
  c_Smarty_Internal_CompileBase::init();
  m_optional_attributes = s_sa4a6a1da3;
  m_shorttag_order = s_sa4a6a1da3;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_continue.php line 28 */
String c_Smarty_Internal_Compile_Continue::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Continue, Smarty_Internal_Compile_Continue::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Continue::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v__levels;
  Variant v_level_count;
  int64 v_stack_count = 0;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(31,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  {
    LINE(33,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(35,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          LINE(36,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsb128b262, "nocache option not allowed"), tmp1);
        }
      }
    }
  }
  if (isset(v__attr, NAMSTR(s_ss54babeee, "levels"), true)) {
    {
      {
        bool tmp0;
        {
          LINE(40,0);
          const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss54babeee, "levels"), AccessFlags::Error_Key)));
          bool tmp2((x_is_numeric(tmp1)));
          tmp0 = (!(tmp2));
        }
        if (tmp0) {
          {
            {
              LINE(41,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
              mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
              (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsbe94ef36, "level attribute must be a numeric constant"), tmp1);
            }
          }
        }
      }
      {
        LINE(43,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss54babeee, "levels"), AccessFlags::Error_Key)));
        v__levels.assignVal(tmp0);
      }
    }
  }
  else {
    {
      v__levels = 1LL;
    }
  }
  v_level_count.assignVal(v__levels);
  {
    LINE(48,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true)));
    int tmp1((x_count(tmp0)));
    int64 tmp2(((tmp1 - 1LL)));
    v_stack_count = tmp2;
  }
  LOOP_COUNTER(1);
  {
    while ((more(v_level_count, 0LL) && not_less(v_stack_count, 0LL))) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            LINE(50,0);
            const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true).rvalRef(v_stack_count, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
            tmp0 = (x_in_array(tmp1, s_svafb31e1f0));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              v_level_count--;
            }
          }
        }
        v_stack_count--;
      }
    }
  }
  if (!equal(v_level_count, 0LL)) {
    {
      {
        LINE(56,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        const String &tmp1((toString(v__levels)));
        const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
        (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss1d3f141f, "cannot continue "), tmp1, NAMSTR(s_ssf2d60ada, " level(s)"))), tmp2);
      }
    }
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), true);
    tmp_ref.unset();
  }
  return concat3(NAMSTR(s_ss906b94d9, "<\?php continue "), toString(v__levels), NAMSTR(s_ssf7e13165, "\?>"));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Continue() {
  return NEWOBJ(c_Smarty_Internal_Compile_Continue)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_continue.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_continue_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_continue) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_debug.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Debug)
const InstanceOfInfo c_Smarty_Internal_Compile_Debug::s_instanceof_table[] = {
  {0x73BF59C30E4A6FA0LL,0,"Smarty_Internal_Compile_Debug",&cw_Smarty_Internal_Compile_Debug},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Debug::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Debug::ci_compile((void*)&c_Smarty_Internal_Compile_Debug::i_compile, (void*)&c_Smarty_Internal_Compile_Debug::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Debug::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Debug);
  }
  c_Smarty_Internal_Compile_Debug *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Debug*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Debug::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Debug::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Debug);
  }
  c_Smarty_Internal_Compile_Debug *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Debug*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Debug::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Debug::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Debug::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Debug::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Debug = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Debug,
  c_Smarty_Internal_Compile_Debug::s_call_info_table,c_Smarty_Internal_Compile_Debug::s_call_info_index,
  c_Smarty_Internal_Compile_Debug::s_instanceof_table,c_Smarty_Internal_Compile_Debug::s_instanceof_index,
  &c_Smarty_Internal_Compile_Debug::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_debug.php line 23 */
String c_Smarty_Internal_Compile_Debug::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Debug, Smarty_Internal_Compile_Debug::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Debug::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  String v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(27,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
    tmp_ref.unset();
  }
  v__output = NAMSTR(s_ss79253c9a, "<\?php $_smarty_tpl->smarty->loadPlugin('Smarty_Internal_Debug'); Smarty_Internal_Debug::display_debug($_smarty_tpl); \?>");
  return v__output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Debug() {
  return NEWOBJ(c_Smarty_Internal_Compile_Debug)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_debug.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_debug_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_debug) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_eval.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Eval)
const InstanceOfInfo c_Smarty_Internal_Compile_Eval::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x326FFF8C5EC394BDLL,1,"Smarty_Internal_Compile_Eval",&cw_Smarty_Internal_Compile_Eval},
};
const int c_Smarty_Internal_Compile_Eval::s_instanceof_index[] = {
  3,
  0,1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Eval::ci_compile((void*)&c_Smarty_Internal_Compile_Eval::i_compile, (void*)&c_Smarty_Internal_Compile_Eval::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Eval::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Eval);
  }
  c_Smarty_Internal_Compile_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Eval*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Eval::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Eval::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Eval);
  }
  c_Smarty_Internal_Compile_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Eval*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Eval::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Eval::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Eval::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Eval::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Eval = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Eval,
  c_Smarty_Internal_Compile_Eval::s_call_info_table,c_Smarty_Internal_Compile_Eval::s_call_info_index,
  c_Smarty_Internal_Compile_Eval::s_instanceof_table,c_Smarty_Internal_Compile_Eval::s_instanceof_index,
  &c_Smarty_Internal_Compile_Eval::s_class_name,
  &c_Smarty_Internal_Compile_Eval::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Eval::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_saadda15c2;
  m_optional_attributes = s_sadb4078a3;
  m_shorttag_order = s_sa94e7f5d5;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_eval.php line 27 */
String c_Smarty_Internal_Compile_Eval::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Eval, Smarty_Internal_Compile_Eval::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Eval::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v__assign;
  String v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  m_required_attributes = s_saadda15c2;
  m_optional_attributes = s_sadb4078a3;
  {
    LINE(33,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true)) {
    {
      {
        LINE(36,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
        v__assign.assignVal(tmp0);
      }
    }
  }
  {
    LINE(40,0);
    const String &tmp0((toString(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssb4c1cabc, "template_class"), true))));
    const String &tmp1((toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
    v__output = concat5(NAMSTR(s_ss498f76d5, "$_template = new "), tmp0, NAMSTR(s_sse2ce46e0, "('eval:'."), tmp1, NAMSTR(s_ss2cfc52b2, ", $_smarty_tpl->smarty, $_smarty_tpl);"));
  }
  if (isset(v__assign)) {
    {
      concat_assign(v__output, concat3(NAMSTR(s_ss15392b4e, "$_smarty_tpl->assign("), toString(v__assign), NAMSTR(s_ssbb51fb6d, ",$_template->getRenderedTemplate());")));
    }
  }
  else {
    {
      concat_assign(v__output, NAMSTR(s_ssbfada196, "echo $_template->getRenderedTemplate();"));
    }
  }
  return concat3(NAMSTR(s_ss271d3c8a, "<\?php "), v__output, NAMSTR(s_ss19c7d895, " \?>"));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Eval() {
  return NEWOBJ(c_Smarty_Internal_Compile_Eval)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_eval.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_eval_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_eval) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_extends.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Extends)
const InstanceOfInfo c_Smarty_Internal_Compile_Extends::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x2E3E1DB01EE1AC45LL,1,"Smarty_Internal_Compile_Extends",&cw_Smarty_Internal_Compile_Extends},
};
const int c_Smarty_Internal_Compile_Extends::s_instanceof_index[] = {
  3,
  0,1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Extends::ci_compile((void*)&c_Smarty_Internal_Compile_Extends::i_compile, (void*)&c_Smarty_Internal_Compile_Extends::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Extends::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Extends);
  }
  c_Smarty_Internal_Compile_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Extends*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Extends::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Extends::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Extends);
  }
  c_Smarty_Internal_Compile_Extends *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Extends*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Extends::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Extends::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Extends::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Extends::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Extends = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Extends,
  c_Smarty_Internal_Compile_Extends::s_call_info_table,c_Smarty_Internal_Compile_Extends::s_call_info_index,
  c_Smarty_Internal_Compile_Extends::s_instanceof_table,c_Smarty_Internal_Compile_Extends::s_instanceof_index,
  &c_Smarty_Internal_Compile_Extends::s_class_name,
  &c_Smarty_Internal_Compile_Extends::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Extends::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sac09f8e73;
  m_shorttag_order = s_sac09f8e73;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_extends.php line 28 */
String c_Smarty_Internal_Compile_Extends::t_compile(CVarRef v_args, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Extends, Smarty_Internal_Compile_Extends::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Extends::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Variant v_filepath;
  Variant v__attr;
  Variant v__smarty_tpl;
  Variant v_include_file;
  Variant v__template;
  Variant v_template_sha1;
  Variant v__content;
  Variant v_s;
  Variant v_c;
  Variant v__result;
  Variant v__result_count;
  Variant v__start;
  Variant v__end;
  Variant v__level;
  Variant v__block_content;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(31,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  {
    LINE(32,0);
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss63355987, "_rdl"), tmp1);
  }
  {
    LINE(33,0);
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss3025e5e3, "_ldl"), tmp1);
  }
  {
    LINE(34,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    v_filepath.assignVal(tmp1);
  }
  {
    LINE(36,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(37,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          LINE(38,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsb128b262, "nocache option not allowed"), tmp1);
        }
      }
    }
  }
  {
    LINE(41,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
    v__smarty_tpl.assignVal(tmp0);
  }
  setNull(v_include_file);
  {
    bool tmp0;
    {
      LINE(43,0);
      const String &tmp1((toString(v__attr.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
      const Variant &tmp2((x_strpos(tmp1, NAMVAR(s_svsec036966, "$_tmp"))));
      bool tmp3 = (!same(tmp2, false));
      if (!tmp3) {
        const String &tmp4((toString(v__attr.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
        const Variant &tmp5((x_strpos(tmp4, NAMVAR(s_svsa31447c5, "$_smarty_tpl"))));
        tmp3 = (!same(tmp5, false));
      }
      bool tmp6 = (tmp3);
      if (!tmp6) {
        const String &tmp7((toString(v__attr.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
        const Variant &tmp8((x_strpos(tmp7, NAMVAR(s_svs819481f3, "::"))));
        tmp6 = (!same(tmp8, false));
      }
      tmp0 = (tmp6);
    }
    if (tmp0) {
      {
        {
          LINE(44,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsb399538e, "a variable file attribute is illegal"), tmp1);
        }
      }
    }
  }
  {
    LINE(46,0);
    const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
    f_eval(concat3(NAMSTR(s_ss3282bbaf, "$include_file = "), tmp0, NAMSTR(s_ss0286c0cc, ";")));
  }
  {
    Object obj1(create_object_only((LINE(48,(toString(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssb4c1cabc, "template_class"), true)))))));
    MethodCallPackage mcp0;
    mcp0.construct(obj1);
    const CallInfo *cit0 = mcp0.ci;
    const Variant &tmp2((v_include_file));
    const Variant tmp3 = v_include_file;
    const Variant &tmp4 = cit0->isRef(0) ? tmp2 : tmp3;
    const Variant &tmp5((GET_THIS_ARROW()o_argval(cit0->isRef(1), NAMSTR(s_ss675664bf, "smarty"), true, s_class_name)));
    const Variant &tmp6((v_compiler.o_argval(cit0->isRef(2), NAMSTR(s_ss86160f07, "template"), true, s_class_name)));
    (cit0->getMeth3Args())(mcp0, 3, tmp4, tmp5, tmp6);
    const Object &tmp7((id(obj1)));
    v__template = tmp7;
  }
  {
    bool tmp0;
    {
      LINE(50,0);
      const Variant &tmp1((v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true)));
      tmp0 = (x_in_array(tmp1, s_sva16191ad8));
    }
    if (tmp0) {
      {
        {
          LINE(51,0);
          const String &tmp0((x_sha1(toString(v_include_file))));
          v_template_sha1 = tmp0;
        }
      }
    }
    else {
      {
        {
          LINE(53,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__template;
          mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((x_sha1(toString((mcp0.ci->getMeth0Args())(mcp0, 0)))));
          v_template_sha1 = tmp1;
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(LINE(55,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_ss90269404, "properties"), false).rvalRef(NAMSTR(s_ss3d122809, "file_dependency"), tmp_ref, AccessFlags::Key))), v_template_sha1));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(56,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((toString(v_include_file)));
          const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssddf8728c, "line"), true)));
          const Numeric &tmp3(((tmp2 - 1LL)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ssd4b42c2c, "illegal recursive call of \""), tmp1, NAMSTR(s_ss7e5fc106, "\""))), tmp3);
        }
      }
    }
  }
  {
    LINE(58,0);
    MethodCallPackage mcp1;
    CVarRef obj1 = v__template;
    mcp1.methodCall((obj1), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    Variant tmp2(((mcp1.ci->getMeth0Args())(mcp1, 0)));
    MethodCallPackage mcp3;
    CVarRef obj3 = v__template;
    mcp3.methodCall((obj3), NAMSTR(s_ss253f375d, "getTemplateTimestamp"), 0x7D66A266AA69AA4CLL);
    const CallInfo *cit3 ATTRIBUTE_UNUSED = mcp3.ci;
    Variant tmp4(((mcp3.ci->getMeth0Args())(mcp3, 0)));
    const Variant &tmp5((v__template.o_getPublic(NAMSTR(s_ss89a9c899, "resource_type"), true)));
    ArrayInit tmp0(array_createvi(3, toVPOD(tmp2), toVPOD(tmp4), toVPOD(tmp5)));
    const Array &tmp6((Array(tmp0)));
    lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::CheckExist_Key)).set(v_template_sha1, (VarNR(tmp6)));
    tmp_ref.unset();
  }
  {
    LINE(59,0);
    const String &tmp0((toString(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
    const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssac6f5998, "counter"), true)));
    int tmp2((toInt32((tmp1 - 1LL))));
    const Variant &tmp3((x_substr(tmp0, tmp2)));
    v__content.assignVal(tmp3);
  }
  {
    bool tmp0;
    {
      LINE(60,0);
      const Variant &tmp1((x_preg_match_all(concat5(NAMSTR(s_ss8b8f2cd6, "!("), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true)), NAMSTR(s_ss95452794, "block\\s(.+\?)"), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true)), NAMSTR(s_ss6ce62072, ")!")), toString(v__content), ref(v_s))));
      LINE(61,0);
      const Variant &tmp2((x_preg_match_all(concat5(NAMSTR(s_ss8b8f2cd6, "!("), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true)), NAMSTR(s_ssd4f0e96d, "/block"), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true)), NAMSTR(s_ss6ce62072, ")!")), toString(v__content), ref(v_c))));
      tmp0 = (!equal(tmp1, tmp2));
    }
    if (tmp0) {
      {
        {
          LINE(62,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs6dc25ec0, "unmatched {block} {/block} pairs"));
        }
      }
    }
  }
  LINE(64,(x_preg_match_all(StringBuffer().addWithTaint("!", 1).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true))).addWithTaint("block\\s(.+\?)", 12).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true))).addWithTaint("|", 1).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss3025e5e3, "_ldl"), true))).addWithTaint("/block", 6).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss63355987, "_rdl"), true))).addWithTaint("!", 1).detachWithTaint(), toString(v__content), ref(v__result), toInt32(256LL) /* PREG_OFFSET_CAPTURE */)));
  {
    LINE(65,0);
    const Variant &tmp0((v__result.rvalAt(0LL, AccessFlags::Error)));
    int tmp1((x_count(tmp0)));
    v__result_count = tmp1;
  }
  v__start = 0LL;
  LOOP_COUNTER(1);
  {
    while (less(v__start, v__result_count)) {
      LOOP_COUNTER_CHECK(1);
      {
        v__end = 0LL;
        v__level = 1LL;
        LOOP_COUNTER(2);
        {
          while (!equal(v__level, 0LL)) {
            LOOP_COUNTER_CHECK(2);
            {
              v__end++;
              {
                bool tmp0;
                {
                  const PlusOperand &tmp1(((v__start + v__end)));
                  LINE(72,0);
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
          LINE(78,0);
          const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
          const String &tmp1((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
          const String &tmp2((toString(v__content)));
          LINE(79,0);
          const Variant &tmp3((v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error)));
          const String &tmp4((toString(v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error))));
          int tmp5((x_strlen(tmp4)));
          int tmp6((toInt32((tmp3 + tmp5))));
          const PlusOperand &tmp7(((v__start + v__end)));
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
          LINE(80,0);
          const Variant &tmp1((v__result.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalRef(v__start, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
          const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
          ((checkClassExistsThrow(NAMSTR(s_ss7fb89ca7, "Smarty_Internal_Compile_Block"), &g->CDEC(smarty_internal_compile_block))), (c_Smarty_Internal_Compile_Block::t_saveblockdata(tmp0, tmp1, tmp2, v_filepath)));
          tmp_ref.unset();
        }
        v__start.assignVal((v__start + (v__end + 1LL)));
      }
    }
  }
  {
    LINE(83,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss2f523486, "getTemplateSource"), 0x2119F0DDD5901F20LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), tmp1);
    tmp_ref.unset();
  }
  {
    LINE(84,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss1994ea1c, "template_filepath"), tmp1);
    tmp_ref.unset();
  }
  v_compiler.o_setPublic(NAMSTR(s_ssf7849b08, "abort_and_recompile"), true);
  return NAMSTR(s_ss00000000, "");
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Extends() {
  return NEWOBJ(c_Smarty_Internal_Compile_Extends)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_extends.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_extends_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_extends) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva6b3e86d0,
  (int64)&s_svae7f9b392,
  (int64)&s_svac09f8e73,
  (int64)&s_sva612815d6,
  (int64)&s_sva0ea8e431,
  (int64)&s_sva4a6a1da3,
  (int64)&s_svaadda15c2,
  (int64)&s_svadb4078a3,
  (int64)&s_sva94e7f5d5,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x592D7A1CE6937E56LL,1,0,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x54E8208FE47CFF0ELL,1,2,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,1,3,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,4,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x691414609BC81C26LL,1,5,0,20,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },
  {0x592D7A1CE6937E56LL,0,5,0,84,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },

  {0x54E8208FE47CFF0ELL,1,6,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x691414609BC81C26LL,1,7,0,20,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },
  {0x592D7A1CE6937E56LL,0,8,0,84,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },

  {0x54E8208FE47CFF0ELL,1,2,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,0,2,0,84,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Capture hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Capture lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Config_Load hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Config_Load lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Continue hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Continue lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Eval hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Eval lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Extends hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Extends lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Capture::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Config_Load::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+11,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+2,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Continue::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+22,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+5,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Eval::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+33,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+7,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Extends::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+44,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+10,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
