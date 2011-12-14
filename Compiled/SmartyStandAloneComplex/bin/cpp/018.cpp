
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_section.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_section.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_while.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_while.fws.h>

// Dependencies
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 121 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Sectionelse)
const InstanceOfInfo c_Smarty_Internal_Compile_Sectionelse::s_instanceof_table[] = {
  {0x170A5E5F20375BFCLL,0,"Smarty_Internal_Compile_Sectionelse",&cw_Smarty_Internal_Compile_Sectionelse},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Sectionelse::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Sectionelse::ci_compile((void*)&c_Smarty_Internal_Compile_Sectionelse::i_compile, (void*)&c_Smarty_Internal_Compile_Sectionelse::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Sectionelse::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Sectionelse);
  }
  c_Smarty_Internal_Compile_Sectionelse *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Sectionelse*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Sectionelse::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Sectionelse::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Sectionelse);
  }
  c_Smarty_Internal_Compile_Sectionelse *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Sectionelse*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Sectionelse::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Sectionelse::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Sectionelse::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Sectionelse::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Sectionelse = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Sectionelse,
  c_Smarty_Internal_Compile_Sectionelse::s_call_info_table,c_Smarty_Internal_Compile_Sectionelse::s_call_info_index,
  c_Smarty_Internal_Compile_Sectionelse::s_instanceof_table,c_Smarty_Internal_Compile_Sectionelse::s_instanceof_index,
  &c_Smarty_Internal_Compile_Sectionelse::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 129 */
String c_Smarty_Internal_Compile_Sectionelse::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Sectionelse, Smarty_Internal_Compile_Sectionelse::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Sectionelse::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v__open_tag;
  Variant v_nocache;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(133,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(135,0);
    CVarRef tmp0((t__close_tag(s_svaee07847e)));
    v_nocache = tmp0[1];
    v__open_tag = tmp0[0];
    ;
  }
  LINE(136,(t__open_tag(NAMVAR(s_svs2a1630a9, "sectionelse"), VarNR(Array(array_createvi(2, toVPOD(NAMVAR(s_svs2a1630a9, "sectionelse")), toVPOD(v_nocache)))))));
  return NAMSTR(s_ss9ac647da, "<\?php endfor; else: \?>");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 145 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Sectionclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Sectionclose::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x3B0CA7FB3E78831FLL,1,"Smarty_Internal_Compile_Sectionclose",&cw_Smarty_Internal_Compile_Sectionclose},
};
const int c_Smarty_Internal_Compile_Sectionclose::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Sectionclose::ci_compile((void*)&c_Smarty_Internal_Compile_Sectionclose::i_compile, (void*)&c_Smarty_Internal_Compile_Sectionclose::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Sectionclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Sectionclose);
  }
  c_Smarty_Internal_Compile_Sectionclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Sectionclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Sectionclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Sectionclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Sectionclose);
  }
  c_Smarty_Internal_Compile_Sectionclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Sectionclose*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Sectionclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Sectionclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Sectionclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Sectionclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Sectionclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Sectionclose,
  c_Smarty_Internal_Compile_Sectionclose::s_call_info_table,c_Smarty_Internal_Compile_Sectionclose::s_call_info_index,
  c_Smarty_Internal_Compile_Sectionclose::s_instanceof_table,c_Smarty_Internal_Compile_Sectionclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Sectionclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 153 */
Variant c_Smarty_Internal_Compile_Sectionclose::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Sectionclose, Smarty_Internal_Compile_Sectionclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Sectionclose::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v__open_tag;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(157,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (LINE(160,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
    }
  }
  {
    LINE(164,0);
    CVarRef tmp0((t__close_tag(s_sva516cecec)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_set(NAMSTR(s_ss8b74ea02, "nocache"), tmp0[1], s_class_name);
    v__open_tag = tmp0[0];
    ;
    tmp_ref.unset();
  }
  if (equal(v__open_tag, NAMSTR(s_ss2a1630a9, "sectionelse"))) {
    return NAMSTR(s_ssbe28e3b3, "<\?php endif; \?>");
  }
  else {
    return NAMSTR(s_sse393e90b, "<\?php endfor; endif; \?>");
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Section)
const InstanceOfInfo c_Smarty_Internal_Compile_Section::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x4F69DB5502DA91AALL,1,"Smarty_Internal_Compile_Section",&cw_Smarty_Internal_Compile_Section},
};
const int c_Smarty_Internal_Compile_Section::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Section::ci_compile((void*)&c_Smarty_Internal_Compile_Section::i_compile, (void*)&c_Smarty_Internal_Compile_Section::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Section::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Section);
  }
  c_Smarty_Internal_Compile_Section *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Section*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Section::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Section::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Section);
  }
  c_Smarty_Internal_Compile_Section *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Section*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Section::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Section::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Section::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Section::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Section = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Section,
  c_Smarty_Internal_Compile_Section::s_call_info_table,c_Smarty_Internal_Compile_Section::s_call_info_index,
  c_Smarty_Internal_Compile_Section::s_instanceof_table,c_Smarty_Internal_Compile_Section::s_instanceof_index,
  &c_Smarty_Internal_Compile_Section::s_class_name,
  &c_Smarty_Internal_Compile_Section::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Section::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa19a7ef20;
  m_shorttag_order = s_sa19a7ef20;
  m_optional_attributes = s_sa96c73067;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_section.php line 28 */
String c_Smarty_Internal_Compile_Section::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Section, Smarty_Internal_Compile_Section::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Section::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  String v_output;
  Variant v_section_name;
  String v_section_props;
  Primitive v_attr_name = 0;
  Variant v_attr_value;
  String v_show_attr_value;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(32,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(34,0);
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    ArrayInit tmp0(array_createvi(2, toVPOD(NAMVAR(s_svs28c31d78, "section")), toVPOD(tmp1)));
    const Array &tmp2((Array(tmp0)));
    t__open_tag(NAMVAR(s_svs28c31d78, "section"), VarNR(tmp2));
  }
  {
    LINE(36,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    Primitive tmp2((bitwise_or(tmp0, tmp1)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
    tmp_ref.unset();
  }
  v_output = NAMSTR(s_ss271d3c8a, "<\?php ");
  {
    LINE(40,0);
    const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key)));
    v_section_name.assignVal(tmp0);
  }
  concat_assign(v_output, concat3(NAMSTR(s_ssfa5ad56c, "unset($_smarty_tpl->tpl_vars['smarty']->value['section']["), toString(v_section_name), NAMSTR(s_ssbb1cb89b, "]);\n")));
  v_section_props = concat3(NAMSTR(s_ss09e3f8cd, "$_smarty_tpl->tpl_vars['smarty']->value['section']["), toString(v_section_name), NAMSTR(s_ssb2e1543c, "]"));
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_output(512);
      for (ArrayIter iter3 = v__attr.begin(s_class_name, true); !iter3.end(); ++iter3) {
        LOOP_COUNTER_CHECK(1);
        iter3.second(v_attr_value);
        v_attr_name.assignVal(iter3.first());
        {
          {
            Primitive switch5;
            switch5 = (v_attr_name);
            bool needsOrder;
            int64 hash;
            hash = switch5.hashForStringSwitch(1055422110600484617LL, 0LL, 0LL, 1055422110600484617LL, 1055422110600484617LL, 16LL, needsOrder);
            switch (((uint64) hash) & 15UL) {
            case_5_h_s2:
            case 2UL:
              if (equal(switch5, (NAMSTR(s_ssdc3cbddc, "name")))) goto case_5_2;
              if (UNLIKELY(needsOrder)) goto case_5_h_s3;
            case_5_h_s4:
              if (equal(switch5, (NAMSTR(s_ss3c3982d5, "start")))) goto case_5_4;
              if (UNLIKELY(needsOrder)) goto case_5_h_s5;
              goto break4;
            case_5_h_s3:
            case 4UL:
              if (equal(switch5, (NAMSTR(s_ss06bd9850, "max")))) goto case_5_3;
              if (UNLIKELY(needsOrder)) goto case_5_h_s4;
              goto break4;
            case_5_h_s1:
            case 5UL:
              if (equal(switch5, (NAMSTR(s_sscf60937f, "show")))) goto case_5_1;
              if (UNLIKELY(needsOrder)) goto case_5_h_s2;
            case_5_h_s5:
              if (equal(switch5, (NAMSTR(s_ss0470736e, "step")))) goto case_5_5;
              goto break4;
            case 9UL:
              if (equal(switch5, (NAMSTR(s_ss8b7293ee, "loop")))) goto case_5_0;
              if (UNLIKELY(needsOrder)) goto case_5_h_s1;
              goto break4;
            default: goto break4;
            }
          }
          case_5_0:
            {
              tmp_sbuf_v_output.addWithTaint(v_section_props).addWithTaint("['loop'] = is_array($_loop=", 27).addWithTaint(toString(v_attr_value)).addWithTaint(") \? count($_loop) : max(0, (int)$_loop); unset($_loop);\n", 56);
              goto break4;
            }
          case_5_1:
            {
              if (x_is_bool(v_attr_value)) {
                v_show_attr_value = (toBoolean(v_attr_value) ? ((NAMSTR(s_ss102bfbc4, "true"))) : ((NAMSTR(s_ss8c98c156, "false"))));
              }
              else {
                v_show_attr_value = concat(NAMSTR(s_ss8e5e9a81, "(bool)"), toString(v_attr_value));
              }
              tmp_sbuf_v_output.addWithTaint(v_section_props).addWithTaint("['show'] = ", 11).addWithTaint(v_show_attr_value).addWithTaint(";\n", 2);
              goto break4;
            }
          case_5_2:
            {
              tmp_sbuf_v_output.addWithTaint(v_section_props).addWithTaint("['", 2).addWithTaint(toString(v_attr_name)).addWithTaint("'] = ", 5).addWithTaint(toString(v_attr_value)).addWithTaint(";\n", 2);
              goto break4;
            }
          case_5_3:
            {
            }
          case_5_4:
            {
              tmp_sbuf_v_output.addWithTaint(v_section_props).addWithTaint("['", 2).addWithTaint(toString(v_attr_name)).addWithTaint("'] = (int)", 10).addWithTaint(toString(v_attr_value)).addWithTaint(";\n", 2);
              goto break4;
            }
          case_5_5:
            {
              tmp_sbuf_v_output.addWithTaint(v_section_props).addWithTaint("['", 2).addWithTaint(toString(v_attr_name)).addWithTaint("'] = ((int)", 11).addWithTaint(toString(v_attr_value)).addWithTaint(") == 0 \? 1 : (int)", 18).addWithTaint(toString(v_attr_value)).addWithTaint(";\n", 2);
              goto break4;
            }
          break4:;
        }
      }
      concat_assign(v_output, tmp_sbuf_v_output.detachWithTaint());
    }
  }
  if (!(isset(v__attr, NAMSTR(s_sscf60937f, "show"), true))) {
    concat_assign(v_output, concat(v_section_props, NAMSTR(s_sseef83ab4, "['show'] = true;\n")));
  }
  if (!(isset(v__attr, NAMSTR(s_ss8b7293ee, "loop"), true))) {
    concat_assign(v_output, concat(v_section_props, NAMSTR(s_ss95310c62, "['loop'] = 1;\n")));
  }
  if (!(isset(v__attr, NAMSTR(s_ss06bd9850, "max"), true))) {
    concat_assign(v_output, concat4(v_section_props, NAMSTR(s_ss90dd6128, "['max'] = "), v_section_props, NAMSTR(s_ss0c90b412, "['loop'];\n")));
  }
  else {
    concat_assign(v_output, StringBuffer().addWithTaint("if (", 4).addWithTaint(v_section_props).addWithTaint("['max'] < 0)\n", 13).addWithTaint("    ", 4).addWithTaint(v_section_props).addWithTaint("['max'] = ", 10).addWithTaint(v_section_props).addWithTaint("['loop'];\n", 10).detachWithTaint());
  }
  if (!(isset(v__attr, NAMSTR(s_ss0470736e, "step"), true))) {
    concat_assign(v_output, concat(v_section_props, NAMSTR(s_ss1bccb375, "['step'] = 1;\n")));
  }
  if (!(isset(v__attr, NAMSTR(s_ss3c3982d5, "start"), true))) {
    concat_assign(v_output, concat6(v_section_props, NAMSTR(s_ss70e7a571, "['start'] = "), v_section_props, NAMSTR(s_ss147ec716, "['step'] > 0 \? 0 : "), v_section_props, NAMSTR(s_ss32185fc4, "['loop']-1;\n")));
  }
  else {
    {
      concat_assign(v_output, StringBuffer().addWithTaint("if (", 4).addWithTaint(v_section_props).addWithTaint("['start'] < 0)\n", 15).addWithTaint("    ", 4).addWithTaint(v_section_props).addWithTaint("['start'] = max(", 16).addWithTaint(v_section_props).addWithTaint("['step'] > 0 \? 0 : -1, ", 23).addWithTaint(v_section_props).addWithTaint("['loop'] + ", 11).addWithTaint(v_section_props).addWithTaint("['start']);\nelse\n", 17).addWithTaint("    ", 4).addWithTaint(v_section_props).addWithTaint("['start'] = min(", 16).addWithTaint(v_section_props).addWithTaint("['start'], ", 11).addWithTaint(v_section_props).addWithTaint("['step'] > 0 \? ", 15).addWithTaint(v_section_props).addWithTaint("['loop'] : ", 11).addWithTaint(v_section_props).addWithTaint("['loop']-1);\n", 13).detachWithTaint());
    }
  }
  concat_assign(v_output, concat3(NAMSTR(s_ss11af26a9, "if ("), v_section_props, NAMSTR(s_ssbe7d074b, "['show']) {\n")));
  if (((!(isset(v__attr, NAMSTR(s_ss3c3982d5, "start"), true)) && !(isset(v__attr, NAMSTR(s_ss0470736e, "step"), true))) && !(isset(v__attr, NAMSTR(s_ss06bd9850, "max"), true)))) {
    {
      concat_assign(v_output, concat5(NAMSTR(s_ss4a200415, "    "), v_section_props, NAMSTR(s_ssba72ea57, "['total'] = "), v_section_props, NAMSTR(s_ss0c90b412, "['loop'];\n")));
    }
  }
  else {
    {
      concat_assign(v_output, StringBuffer().addWithTaint("    ", 4).addWithTaint(v_section_props).addWithTaint("['total'] = min(ceil((", 22).addWithTaint(v_section_props).addWithTaint("['step'] > 0 \? ", 15).addWithTaint(v_section_props).addWithTaint("['loop'] - ", 11).addWithTaint(v_section_props).addWithTaint("['start'] : ", 12).addWithTaint(v_section_props).addWithTaint("['start']+1)/abs(", 17).addWithTaint(v_section_props).addWithTaint("['step'])), ", 12).addWithTaint(v_section_props).addWithTaint("['max']);\n", 10).detachWithTaint());
    }
  }
  concat_assign(v_output, StringBuffer().addWithTaint("    if (", 8).addWithTaint(v_section_props).addWithTaint("['total'] == 0)\n", 16).addWithTaint("        ", 8).addWithTaint(v_section_props).addWithTaint("['show'] = false;\n} else\n", 25).addWithTaint("    ", 4).addWithTaint(v_section_props).addWithTaint("['total'] = 0;\n", 15).addWithTaint("if (", 4).addWithTaint(v_section_props).addWithTaint("['show']):\n", 11).addWithTaint("\n            for (", 18).addWithTaint(v_section_props).addWithTaint("['index'] = ", 12).addWithTaint(v_section_props).addWithTaint("['start'], ", 11).addWithTaint(v_section_props).addWithTaint("['iteration'] = 1;\n                 ", 36).addWithTaint(v_section_props).addWithTaint("['iteration'] <= ", 17).addWithTaint(v_section_props).addWithTaint("['total'];\n                 ", 28).addWithTaint(v_section_props).addWithTaint("['index'] += ", 13).addWithTaint(v_section_props).addWithTaint("['step'], ", 10).addWithTaint(v_section_props).addWithTaint("['iteration']++):\n", 18).addWithTaint(v_section_props).addWithTaint("['rownum'] = ", 13).addWithTaint(v_section_props).addWithTaint("['iteration'];\n", 15).addWithTaint(v_section_props).addWithTaint("['index_prev'] = ", 17).addWithTaint(v_section_props).addWithTaint("['index'] - ", 12).addWithTaint(v_section_props).addWithTaint("['step'];\n", 10).addWithTaint(v_section_props).addWithTaint("['index_next'] = ", 17).addWithTaint(v_section_props).addWithTaint("['index'] + ", 12).addWithTaint(v_section_props).addWithTaint("['step'];\n", 10).addWithTaint(v_section_props).addWithTaint("['first']      = (", 18).addWithTaint(v_section_props).addWithTaint("['iteration'] == 1);\n", 21).addWithTaint(v_section_props).addWithTaint("['last']       = (", 18).addWithTaint(v_section_props).addWithTaint("['iteration'] == ", 17).addWithTaint(v_section_props).addWithTaint("['total']);\n\?>", 14).detachWithTaint());
  return v_output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Sectionelse() {
  return NEWOBJ(c_Smarty_Internal_Compile_Sectionelse)();
}
ObjectData *coo_Smarty_Internal_Compile_Sectionclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Sectionclose)();
}
ObjectData *coo_Smarty_Internal_Compile_Section() {
  return NEWOBJ(c_Smarty_Internal_Compile_Section)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_section.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_section_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_section) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_sectionelse) = true;
  g->CDEC(smarty_internal_compile_sectionclose) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_while.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_While)
const InstanceOfInfo c_Smarty_Internal_Compile_While::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x3697E26397DFBDC3LL,1,"Smarty_Internal_Compile_While",&cw_Smarty_Internal_Compile_While},
};
const int c_Smarty_Internal_Compile_While::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_While::ci_compile((void*)&c_Smarty_Internal_Compile_While::i_compile, (void*)&c_Smarty_Internal_Compile_While::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_While::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_While);
  }
  c_Smarty_Internal_Compile_While *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_While*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_While::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_While::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_While);
  }
  c_Smarty_Internal_Compile_While *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_While*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_While::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_While::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_While::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_While::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_While = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_While,
  c_Smarty_Internal_Compile_While::s_call_info_table,c_Smarty_Internal_Compile_While::s_call_info_index,
  c_Smarty_Internal_Compile_While::s_instanceof_table,c_Smarty_Internal_Compile_While::s_instanceof_index,
  &c_Smarty_Internal_Compile_While::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_while.php line 24 */
Variant c_Smarty_Internal_Compile_While::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_While, Smarty_Internal_Compile_While::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_While::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  String v__nocache;
  String v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(28,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(29,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    t__open_tag(NAMVAR(s_svs2fc7ebb9, "while"), tmp0);
  }
  {
    LINE(32,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    Primitive tmp2((bitwise_or(tmp0, tmp1)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
    tmp_ref.unset();
  }
  {
    bool tmp0;
    {
      LINE(33,0);
      const Variant &tmp1((v_parameter.rvalAt(NAMSTR(s_ss2bd51974, "if condition"), AccessFlags::Error_Key)));
      tmp0 = (x_is_array(tmp1));
    }
    if (tmp0) {
      {
        if (LINE(34,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
          {
            v__nocache = NAMSTR(s_ssf0dada3b, ",true");
            {
              bool tmp0;
              {
                LINE(37,0);
                const Variant &tmp1((v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0 = (x_is_array(tmp1));
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  {
                    LINE(38,0);
                    const String &tmp0((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                    const String &tmp1((x_trim(tmp0, NAMSTR(s_sse07b87c4, "'"))));
                    const p_Smarty_Variable &tmp2((((checkClassExistsThrow(NAMSTR(s_ss5b98208f, "Smarty_variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create(null, true))))));
                    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(tmp1, (VarNR(tmp2)));
                    tmp_ref.unset();
                  }
                }
              }
              else {
                {
                  {
                    LINE(40,0);
                    const String &tmp0((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                    const String &tmp1((x_trim(tmp0, NAMSTR(s_sse07b87c4, "'"))));
                    const p_Smarty_Variable &tmp2((((checkClassExistsThrow(NAMSTR(s_ss5b98208f, "Smarty_variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create(null, true))))));
                    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(tmp1, (VarNR(tmp2)));
                    tmp_ref.unset();
                  }
                }
              }
            }
          }
        }
        else {
          {
            v__nocache = NAMSTR(s_ss00000000, "");
          }
        }
        {
          bool tmp0;
          {
            LINE(45,0);
            const Variant &tmp1((v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
            tmp0 = (x_is_array(tmp1));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("<\?php if (!isset($_smarty_tpl->tpl_vars[", 40);
                tmp0_buf.appendWithTaint(LINE(46,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
                tmp0_buf.appendWithTaint("]) || !is_array($_smarty_tpl->tpl_vars[", 39);
                tmp0_buf.appendWithTaint(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0_buf.appendWithTaint("]->value)) $_smarty_tpl->createLocalArrayVariable(", 50);
                tmp0_buf.appendWithTaint(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0_buf.appendWithTaint(v__nocache);
                tmp0_buf.appendWithTaint(");\n", 3);
                CStrRef tmp0(tmp0_buf.detachWithTaint());
                v__output = tmp0;
                tmp_ref.unset();
              }
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("while ($_smarty_tpl->tpl_vars[", 30);
                tmp0_buf.appendWithTaint(LINE(47,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
                tmp0_buf.appendWithTaint("]->value", 8);
                tmp0_buf.appendWithTaint(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key)));
                tmp0_buf.appendWithTaint(" = ", 3);
                tmp0_buf.appendWithTaint(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
                tmp0_buf.appendWithTaint("){\?>", 4);
                CStrRef tmp0(tmp0_buf.detachWithTaint());
                concat_assign(v__output, tmp0);
                tmp_ref.unset();
              }
            }
          }
          else {
            {
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("<\?php $_smarty_tpl->tpl_vars[", 29);
                tmp0_buf.appendWithTaint(LINE(49,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
                tmp0_buf.appendWithTaint("] = new Smarty_Variable($_smarty_tpl->getVariable(", 50);
                tmp0_buf.appendWithTaint(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0_buf.appendWithTaint(",null,true,false)->value", 24);
                tmp0_buf.appendWithTaint(v__nocache);
                tmp0_buf.appendWithTaint(");", 2);
                CStrRef tmp0(tmp0_buf.detachWithTaint());
                v__output = tmp0;
                tmp_ref.unset();
              }
              {
                LINE(50,0);
                const String &tmp0((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                const String &tmp1((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
                concat_assign(v__output, concat5(NAMSTR(s_ss4e113b40, "while ($_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ss0d3dfdc8, "]->value = "), tmp1, NAMSTR(s_ss013c5282, "){\?>")));
                tmp_ref.unset();
              }
            }
          }
        }
        return v__output;
      }
    }
    else {
      {
        {
          LINE(54,0);
          const String &tmp0((toString(v_parameter.rvalAt(NAMSTR(s_ss2bd51974, "if condition"), AccessFlags::Error_Key))));
          return concat3(NAMSTR(s_ssd42cb6a4, "<\?php while ("), tmp0, NAMSTR(s_ss013c5282, "){\?>"));
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_while.php line 62 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Whileclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Whileclose::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x787D20B781C91A96LL,1,"Smarty_Internal_Compile_Whileclose",&cw_Smarty_Internal_Compile_Whileclose},
};
const int c_Smarty_Internal_Compile_Whileclose::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Whileclose::ci_compile((void*)&c_Smarty_Internal_Compile_Whileclose::i_compile, (void*)&c_Smarty_Internal_Compile_Whileclose::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Whileclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Whileclose);
  }
  c_Smarty_Internal_Compile_Whileclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Whileclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Whileclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Whileclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Whileclose);
  }
  c_Smarty_Internal_Compile_Whileclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Whileclose*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Whileclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Whileclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Whileclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Whileclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Whileclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Whileclose,
  c_Smarty_Internal_Compile_Whileclose::s_call_info_table,c_Smarty_Internal_Compile_Whileclose::s_call_info_index,
  c_Smarty_Internal_Compile_Whileclose::s_instanceof_table,c_Smarty_Internal_Compile_Whileclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Whileclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_while.php line 70 */
String c_Smarty_Internal_Compile_Whileclose::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Whileclose, Smarty_Internal_Compile_Whileclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Whileclose::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  if (LINE(74,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
    }
  }
  {
    LINE(77,0);
    const Variant &tmp0((t__close_tag(s_svad0273bd8)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp0);
    tmp_ref.unset();
  }
  return NAMSTR(s_ss7f585e58, "<\?php }\?>");
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_While() {
  return NEWOBJ(c_Smarty_Internal_Compile_While)();
}
ObjectData *coo_Smarty_Internal_Compile_Whileclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Whileclose)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_while.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_while_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_while) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_whileclose) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva19a7ef20,
  (int64)&s_sva96c73067,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,1,0,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Section hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Section lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Section::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
