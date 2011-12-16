
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_for.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_for.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_foreach.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_foreach.fws.h>

// Dependencies
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 92 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Forelse)
const InstanceOfInfo c_Smarty_Internal_Compile_Forelse::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x1BBECB00A0967A5ALL,1,"Smarty_Internal_Compile_Forelse",&cw_Smarty_Internal_Compile_Forelse},
};
const int c_Smarty_Internal_Compile_Forelse::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Forelse::ci_compile((void*)&c_Smarty_Internal_Compile_Forelse::i_compile, (void*)&c_Smarty_Internal_Compile_Forelse::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Forelse::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Forelse);
  }
  c_Smarty_Internal_Compile_Forelse *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Forelse*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Forelse::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Forelse::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Forelse);
  }
  c_Smarty_Internal_Compile_Forelse *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Forelse*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Forelse::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Forelse::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Forelse::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Forelse::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Forelse = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Forelse,
  c_Smarty_Internal_Compile_Forelse::s_call_info_table,c_Smarty_Internal_Compile_Forelse::s_call_info_index,
  c_Smarty_Internal_Compile_Forelse::s_instanceof_table,c_Smarty_Internal_Compile_Forelse::s_instanceof_index,
  &c_Smarty_Internal_Compile_Forelse::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 101 */
String c_Smarty_Internal_Compile_Forelse::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Forelse, Smarty_Internal_Compile_Forelse::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Forelse::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v__open_tag;
  Variant v_nocache;
  Variant v_local_vars;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(105,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(107,0);
    CVarRef tmp0((t__close_tag(s_svaab02f1ea)));
    v_local_vars = tmp0[2];
    v_nocache = tmp0[1];
    v__open_tag = tmp0[0];
    ;
  }
  LINE(108,(t__open_tag(NAMVAR(s_svsd2c9303d, "forelse"), VarNR(Array(array_createvi(3, toVPOD(NAMVAR(s_svsd2c9303d, "forelse")), toVPOD(v_nocache), toVPOD(v_local_vars)))))));
  return NAMSTR(s_ss4770a67d, "<\?php }} else { \?>");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 116 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Forclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Forclose::s_instanceof_table[] = {
  {0x795A10AFD66DDB0CLL,0,"Smarty_Internal_Compile_Forclose",&cw_Smarty_Internal_Compile_Forclose},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Forclose::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Forclose::ci_compile((void*)&c_Smarty_Internal_Compile_Forclose::i_compile, (void*)&c_Smarty_Internal_Compile_Forclose::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Forclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Forclose);
  }
  c_Smarty_Internal_Compile_Forclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Forclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Forclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Forclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Forclose);
  }
  c_Smarty_Internal_Compile_Forclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Forclose*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Forclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Forclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Forclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Forclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Forclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Forclose,
  c_Smarty_Internal_Compile_Forclose::s_call_info_table,c_Smarty_Internal_Compile_Forclose::s_call_info_index,
  c_Smarty_Internal_Compile_Forclose::s_instanceof_table,c_Smarty_Internal_Compile_Forclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Forclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 125 */
Variant c_Smarty_Internal_Compile_Forclose::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Forclose, Smarty_Internal_Compile_Forclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Forclose::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v__open_tag;
  Variant v_local_vars;
  Variant v_var;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(129,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (LINE(131,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
    }
  }
  {
    LINE(135,0);
    CVarRef tmp0((t__close_tag(s_sva7c0b7933)));
    v_local_vars = tmp0[2];
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_set(NAMSTR(s_ss8b74ea02, "nocache"), tmp0[1], s_class_name);
    v__open_tag = tmp0[0];
    ;
    tmp_ref.unset();
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_local_vars.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_var);
      {
        {
          LINE(138,(v_compiler.o_unsetLval(NAMSTR(s_ssc587de67, "local_var"), tmp_ref, s_class_name))).weakRemove(v_var);
          tmp_ref.unset();
        }
      }
    }
  }
  if (equal(v__open_tag, NAMSTR(s_ssd2c9303d, "forelse"))) {
    return NAMSTR(s_ss05f73b09, "<\?php }  \?>");
  }
  else {
    return NAMSTR(s_ss5e511438, "<\?php }} \?>");
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_For)
const InstanceOfInfo c_Smarty_Internal_Compile_For::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x177CEFB868A97261LL,1,"Smarty_Internal_Compile_For",&cw_Smarty_Internal_Compile_For},
};
const int c_Smarty_Internal_Compile_For::s_instanceof_index[] = {
  3,
  0,1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_For::ci_compile((void*)&c_Smarty_Internal_Compile_For::i_compile, (void*)&c_Smarty_Internal_Compile_For::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_For::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_For);
  }
  c_Smarty_Internal_Compile_For *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_For*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_For::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_For::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_For);
  }
  c_Smarty_Internal_Compile_For *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_For*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_For::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_For::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_For::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_For::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_For = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_For,
  c_Smarty_Internal_Compile_For::s_call_info_table,c_Smarty_Internal_Compile_For::s_call_info_index,
  c_Smarty_Internal_Compile_For::s_instanceof_table,c_Smarty_Internal_Compile_For::s_instanceof_index,
  &c_Smarty_Internal_Compile_For::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_for.php line 35 */
String c_Smarty_Internal_Compile_For::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_For, Smarty_Internal_Compile_For::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_For::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Array v_local_vars;
  String v_output;
  Variant v__statement;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  if (equal(v_parameter, 0LL)) {
    {
      m_required_attributes = s_sac752dec1;
      m_optional_attributes = s_sad86b4c91;
    }
  }
  else {
    {
      m_required_attributes = s_sa2e62835e;
      m_optional_attributes = s_sa00000000;
    }
  }
  {
    LINE(46,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  v_local_vars = s_sa00000000;
  v_output = NAMSTR(s_ss271d3c8a, "<\?php ");
  if (equal(v_parameter, 1LL)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = LINE(52,(v__attr.rvalAt(NAMSTR(s_ss3c3982d5, "start"), AccessFlags::Error_Key)));
        {
          StringBuffer tmp_sbuf_v_output(512);
          for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
            LOOP_COUNTER_CHECK(1);
            iter3.second(v__statement);
            {
              {
                LINE(53,0);
                const String &tmp0((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                tmp_sbuf_v_output.addWithTaint(" $_smarty_tpl->tpl_vars[", 24).addWithTaint(tmp0).addWithTaint("] = new Smarty_Variable;", 24);
              }
              {
                LINE(54,0);
                const String &tmp0((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                const String &tmp1((toString(v__statement.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
                tmp_sbuf_v_output.addWithTaint(" $_smarty_tpl->tpl_vars[", 24).addWithTaint(tmp0).addWithTaint("]->value = ", 11).addWithTaint(tmp1).addWithTaint(";\n", 2);
              }
              {
                LINE(55,0);
                const Variant &tmp0((v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                v_compiler.o_lval(NAMSTR(s_ssc587de67, "local_var"), tmp_ref, s_class_name).set(tmp0, (true_varNR));
                tmp_ref.unset();
              }
              {
                LINE(56,0);
                const Variant &tmp0((v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                v_local_vars.append((tmp0));
              }
            }
          }
          concat_assign(v_output, tmp_sbuf_v_output.detachWithTaint());
        }
      }
      {
        StringBuffer tmp0_buf;
        tmp0_buf.appendWithTaint("  if (", 6);
        tmp0_buf.appendWithTaint(LINE(58,(toString(v__attr.rvalAt(NAMSTR(s_ss272e2102, "ifexp"), AccessFlags::Error_Key)))));
        tmp0_buf.appendWithTaint("){ for ($_foo=true;", 19);
        tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ss272e2102, "ifexp"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("; $_smarty_tpl->tpl_vars[", 25);
        tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->value", 8);
        tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ss0470736e, "step"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("){\n", 3);
        CStrRef tmp0(tmp0_buf.detachWithTaint());
        concat_assign(v_output, tmp0);
      }
    }
  }
  else {
    {
      {
        LINE(60,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss3c3982d5, "start"), AccessFlags::Error_Key)));
        v__statement.assignVal(tmp0);
      }
      {
        LINE(61,0);
        const String &tmp0((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
        concat_assign(v_output, concat3(NAMSTR(s_sseb1a8c7c, "$_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ss932c117d, "] = new Smarty_Variable;")));
      }
      {
        LINE(62,0);
        const Variant &tmp0((v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        v_compiler.o_lval(NAMSTR(s_ssc587de67, "local_var"), tmp_ref, s_class_name).set(tmp0, (true_varNR));
        tmp_ref.unset();
      }
      {
        LINE(63,0);
        const Variant &tmp0((v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        v_local_vars.append((tmp0));
      }
      if (isset(v__attr, NAMSTR(s_ss0470736e, "step"), true)) {
        {
          {
            LINE(65,0);
            const String &tmp0((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
            const String &tmp1((toString(v__attr.rvalAt(NAMSTR(s_ss0470736e, "step"), AccessFlags::Error_Key))));
            concat_assign(v_output, concat5(NAMSTR(s_sseb1a8c7c, "$_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_sse0996b83, "]->step = "), tmp1, NAMSTR(s_ss0286c0cc, ";")));
          }
        }
      }
      else {
        {
          {
            LINE(67,0);
            const String &tmp0((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
            concat_assign(v_output, concat3(NAMSTR(s_sseb1a8c7c, "$_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ssede80315, "]->step = 1;")));
          }
        }
      }
      if (isset(v__attr, NAMSTR(s_ss06bd9850, "max"), true)) {
        {
          {
            StringBuffer tmp0_buf;
            tmp0_buf.appendWithTaint("$_smarty_tpl->tpl_vars[", 23);
            tmp0_buf.appendWithTaint(LINE(70,(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
            tmp0_buf.appendWithTaint("]->total = (int)min(ceil(($_smarty_tpl->tpl_vars[", 49);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("]->step > 0 \? ", 14);
            tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ss83fb672d, "to"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("+1 - (", 6);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint(") : ", 4);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("-(", 2);
            tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ss83fb672d, "to"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint(")+1)/abs($_smarty_tpl->tpl_vars[", 32);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("]->step)),", 10);
            tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ss06bd9850, "max"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint(");\n", 3);
            CStrRef tmp0(tmp0_buf.detachWithTaint());
            concat_assign(v_output, tmp0);
          }
        }
      }
      else {
        {
          {
            StringBuffer tmp0_buf;
            tmp0_buf.appendWithTaint("$_smarty_tpl->tpl_vars[", 23);
            tmp0_buf.appendWithTaint(LINE(72,(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
            tmp0_buf.appendWithTaint("]->total = (int)ceil(($_smarty_tpl->tpl_vars[", 45);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("]->step > 0 \? ", 14);
            tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ss83fb672d, "to"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("+1 - (", 6);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint(") : ", 4);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("-(", 2);
            tmp0_buf.appendWithTaint(toString(v__attr.rvalAt(NAMSTR(s_ss83fb672d, "to"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint(")+1)/abs($_smarty_tpl->tpl_vars[", 32);
            tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
            tmp0_buf.appendWithTaint("]->step));\n", 11);
            CStrRef tmp0(tmp0_buf.detachWithTaint());
            concat_assign(v_output, tmp0);
          }
        }
      }
      {
        LINE(74,0);
        const String &tmp0((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
        concat_assign(v_output, concat3(NAMSTR(s_ssce8d7b94, "if ($_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ssb3073ce0, "]->total > 0){\n")));
      }
      {
        StringBuffer tmp0_buf;
        tmp0_buf.appendWithTaint("for ($_smarty_tpl->tpl_vars[", 28);
        tmp0_buf.appendWithTaint(LINE(75,(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
        tmp0_buf.appendWithTaint("]->value = ", 11);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint(", $_smarty_tpl->tpl_vars[", 25);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->iteration = 1;$_smarty_tpl->tpl_vars[", 40);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->iteration <= $_smarty_tpl->tpl_vars[", 39);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->total;$_smarty_tpl->tpl_vars[", 32);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->value += $_smarty_tpl->tpl_vars[", 35);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->step, $_smarty_tpl->tpl_vars[", 32);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->iteration++){\n", 17);
        CStrRef tmp0(tmp0_buf.detachWithTaint());
        concat_assign(v_output, tmp0);
      }
      {
        LINE(76,0);
        const String &tmp0((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
        const String &tmp1((toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
        concat_assign(v_output, concat5(NAMSTR(s_sseb1a8c7c, "$_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ssa02f69b2, "]->first = $_smarty_tpl->tpl_vars["), tmp1, NAMSTR(s_ssf577c9c2, "]->iteration == 1;")));
      }
      {
        StringBuffer tmp0_buf;
        tmp0_buf.appendWithTaint("$_smarty_tpl->tpl_vars[", 23);
        tmp0_buf.appendWithTaint(LINE(77,(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
        tmp0_buf.appendWithTaint("]->last = $_smarty_tpl->tpl_vars[", 33);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->iteration == $_smarty_tpl->tpl_vars[", 39);
        tmp0_buf.appendWithTaint(toString(v__statement.rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
        tmp0_buf.appendWithTaint("]->total;", 9);
        CStrRef tmp0(tmp0_buf.detachWithTaint());
        concat_assign(v_output, tmp0);
      }
    }
  }
  concat_assign(v_output, NAMSTR(s_ssf7e13165, "\?>"));
  {
    LINE(81,0);
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    ArrayInit tmp0(array_createvi(3, toVPOD(NAMVAR(s_svsb157050b, "for")), toVPOD(tmp1), toVPOD(VarNR(v_local_vars))));
    const Array &tmp2((Array(tmp0)));
    t__open_tag(NAMVAR(s_svsb157050b, "for"), VarNR(tmp2));
  }
  {
    LINE(83,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    Primitive tmp2((bitwise_or(tmp0, tmp1)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
    tmp_ref.unset();
  }
  return v_output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Forelse() {
  return NEWOBJ(c_Smarty_Internal_Compile_Forelse)();
}
ObjectData *coo_Smarty_Internal_Compile_Forclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Forclose)();
}
ObjectData *coo_Smarty_Internal_Compile_For() {
  return NEWOBJ(c_Smarty_Internal_Compile_For)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_for.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_for_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_for) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_forelse) = true;
  g->CDEC(smarty_internal_compile_forclose) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 187 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Foreachclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Foreachclose::s_instanceof_table[] = {
  {0x50753D0A6F10C20CLL,0,"Smarty_Internal_Compile_Foreachclose",&cw_Smarty_Internal_Compile_Foreachclose},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Foreachclose::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Foreachclose::ci_compile((void*)&c_Smarty_Internal_Compile_Foreachclose::i_compile, (void*)&c_Smarty_Internal_Compile_Foreachclose::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Foreachclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Foreachclose);
  }
  c_Smarty_Internal_Compile_Foreachclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Foreachclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Foreachclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Foreachclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Foreachclose);
  }
  c_Smarty_Internal_Compile_Foreachclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Foreachclose*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Foreachclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Foreachclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Foreachclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Foreachclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreachclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Foreachclose,
  c_Smarty_Internal_Compile_Foreachclose::s_call_info_table,c_Smarty_Internal_Compile_Foreachclose::s_call_info_index,
  c_Smarty_Internal_Compile_Foreachclose::s_instanceof_table,c_Smarty_Internal_Compile_Foreachclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Foreachclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 196 */
Variant c_Smarty_Internal_Compile_Foreachclose::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Foreachclose, Smarty_Internal_Compile_Foreachclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Foreachclose::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v__open_tag;
  Variant v_item;
  Variant v_key;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(200,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (LINE(202,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
    }
  }
  {
    LINE(206,0);
    CVarRef tmp0((t__close_tag(s_svad0872738)));
    v_key = tmp0[3];
    v_item = tmp0[2];
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_set(NAMSTR(s_ss8b74ea02, "nocache"), tmp0[1], s_class_name);
    v__open_tag = tmp0[0];
    ;
    tmp_ref.unset();
  }
  {
    LINE(207,(v_compiler.o_unsetLval(NAMSTR(s_ssc587de67, "local_var"), tmp_ref, s_class_name))).weakRemove(v_item);
    tmp_ref.unset();
  }
  if (!equal(v_key, null)) {
    {
      {
        LINE(209,(v_compiler.o_unsetLval(NAMSTR(s_ssc587de67, "local_var"), tmp_ref, s_class_name))).weakRemove(v_key);
        tmp_ref.unset();
      }
    }
  }
  if (equal(v__open_tag, NAMSTR(s_ssbb9e8614, "foreachelse"))) {
    return NAMSTR(s_ssbc881512, "<\?php } \?>");
  }
  else {
    return NAMSTR(s_ss5e511438, "<\?php }} \?>");
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Foreach)
const InstanceOfInfo c_Smarty_Internal_Compile_Foreach::s_instanceof_table[] = {
  {0x066F77B50F86D3F8LL,0,"Smarty_Internal_Compile_Foreach",&cw_Smarty_Internal_Compile_Foreach},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Foreach::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Foreach::ci_compile((void*)&c_Smarty_Internal_Compile_Foreach::i_compile, (void*)&c_Smarty_Internal_Compile_Foreach::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Foreach::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Foreach);
  }
  c_Smarty_Internal_Compile_Foreach *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Foreach*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Foreach::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Foreach::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Foreach);
  }
  c_Smarty_Internal_Compile_Foreach *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Foreach*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Foreach::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Foreach::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Foreach::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Foreach::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreach = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Foreach,
  c_Smarty_Internal_Compile_Foreach::s_call_info_table,c_Smarty_Internal_Compile_Foreach::s_call_info_index,
  c_Smarty_Internal_Compile_Foreach::s_instanceof_table,c_Smarty_Internal_Compile_Foreach::s_instanceof_index,
  &c_Smarty_Internal_Compile_Foreach::s_class_name,
  &c_Smarty_Internal_Compile_Foreach::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Foreach::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sad8f72ee3;
  m_optional_attributes = s_sad97afabf;
  m_shorttag_order = s_saf678a377;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 29 */
String c_Smarty_Internal_Compile_Foreach::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Foreach, Smarty_Internal_Compile_Foreach::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Foreach::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Variant v_tpl;
  Array v__attr;
  Variant v_from;
  Variant v_item;
  Variant v_key;
  Variant v_name;
  bool v_has_name = false;
  String v_SmartyVarName;
  String v_ItemVarName;
  bool v_usesSmartyFirst = false;
  bool v_usesSmartyLast = false;
  bool v_usesSmartyIndex = false;
  bool v_usesSmartyIteration = false;
  bool v_usesSmartyShow = false;
  bool v_usesSmartyTotal = false;
  bool v_usesPropFirst = false;
  bool v_usesPropLast = false;
  bool v_usesPropIndex = false;
  bool v_usesPropIteration = false;
  bool v_usesPropShow = false;
  bool v_usesPropTotal = false;
  String v_output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(32,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
    v_tpl.assignVal(tmp0);
  }
  {
    LINE(34,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(36,0);
    const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssc4843a99, "from"), AccessFlags::Error_Key)));
    v_from.assignVal(tmp0);
  }
  {
    LINE(37,0);
    const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss1247a693, "item"), AccessFlags::Error_Key)));
    v_item.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      const String &tmp1((toString(v_item)));
      const String &tmp2((toString(v_from)));
      LINE(39,0);
      int tmp3((x_strlen(concat3(NAMSTR(s_ssbab84462, "$_smarty_tpl->getVariable("), toString(v_item), NAMSTR(s_ss44beffb9, ")")))));
      const Variant &tmp4((x_substr_compare(concat3(NAMSTR(s_ssbab84462, "$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss44beffb9, ")")), tmp2, toInt32(0LL), tmp3)));
      tmp0 = (equal(tmp4, 0LL));
    }
    if (tmp0) {
      {
        {
          LINE(40,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((toString(v_item)));
          const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ssf721313e, "item variable "), tmp1, NAMSTR(s_ss5d6f5eac, " may not be the same variable as at 'from'"))), tmp2);
        }
      }
    }
  }
  if (isset(v__attr, NAMSTR(s_ss12e90587, "key"), true)) {
    {
      {
        LINE(44,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
        v_key.assignVal(tmp0);
      }
    }
  }
  else {
    {
      setNull(v_key);
    }
  }
  {
    LINE(49,0);
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    ArrayInit tmp0(array_createvi(4, toVPOD(NAMVAR(s_svs5e0a0be6, "foreach")), toVPOD(tmp1), toVPOD(v_item), toVPOD(v_key)));
    const Array &tmp2((Array(tmp0)));
    t__open_tag(NAMVAR(s_svs5e0a0be6, "foreach"), VarNR(tmp2));
  }
  {
    LINE(51,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    Primitive tmp2((bitwise_or(tmp0, tmp1)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
    tmp_ref.unset();
  }
  if (isset(v__attr, NAMSTR(s_ssdc3cbddc, "name"), true)) {
    {
      {
        LINE(54,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key)));
        v_name.assignVal(tmp0);
      }
      v_has_name = true;
      {
        LINE(56,0);
        const String &tmp0((x_trim(toString(v_name), NAMSTR(s_ss643ce2bc, "'\""))));
        v_SmartyVarName = concat3(NAMSTR(s_ss73e03110, "$smarty.foreach."), tmp0, NAMSTR(s_ss013a8f64, "."));
      }
    }
  }
  else {
    {
      setNull(v_name);
      v_has_name = false;
    }
  }
  {
    LINE(61,0);
    const String &tmp0((x_trim(toString(v_item), NAMSTR(s_ss643ce2bc, "'\""))));
    v_ItemVarName = concat3(NAMSTR(s_ssf539d341, "$"), tmp0, NAMSTR(s_ss285b78dd, "@"));
  }
  if (v_has_name) {
    {
      {
        LINE(64,0);
        const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
        const Variant &tmp1((x_strpos(tmp0, VarNR(concat(v_SmartyVarName, NAMSTR(s_ss470a29a7, "first"))))));
        bool tmp2((!same(tmp1, false)));
        v_usesSmartyFirst = tmp2;
      }
      {
        LINE(65,0);
        const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
        const Variant &tmp1((x_strpos(tmp0, VarNR(concat(v_SmartyVarName, NAMSTR(s_ss6d41e4dc, "last"))))));
        bool tmp2((!same(tmp1, false)));
        v_usesSmartyLast = tmp2;
      }
      {
        LINE(66,0);
        const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
        const Variant &tmp1((x_strpos(tmp0, VarNR(concat(v_SmartyVarName, NAMSTR(s_ssc0ff3081, "index"))))));
        bool tmp2((!same(tmp1, false)));
        v_usesSmartyIndex = tmp2;
      }
      {
        LINE(67,0);
        const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
        const Variant &tmp1((x_strpos(tmp0, VarNR(concat(v_SmartyVarName, NAMSTR(s_ss51f837b3, "iteration"))))));
        bool tmp2((!same(tmp1, false)));
        v_usesSmartyIteration = tmp2;
      }
      {
        LINE(68,0);
        const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
        const Variant &tmp1((x_strpos(tmp0, VarNR(concat(v_SmartyVarName, NAMSTR(s_sscf60937f, "show"))))));
        bool tmp2((!same(tmp1, false)));
        v_usesSmartyShow = tmp2;
      }
      {
        LINE(69,0);
        const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
        const Variant &tmp1((x_strpos(tmp0, VarNR(concat(v_SmartyVarName, NAMSTR(s_ss53c9c786, "total"))))));
        bool tmp2((!same(tmp1, false)));
        v_usesSmartyTotal = tmp2;
      }
    }
  }
  else {
    {
      v_usesSmartyFirst = false;
      v_usesSmartyLast = false;
      v_usesSmartyTotal = false;
      v_usesSmartyShow = false;
    }
  }
  {
    bool tmp0 = (v_usesSmartyFirst);
    if (!tmp0) {
      LINE(77,0);
      const String &tmp1((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
      const Variant &tmp2((x_strpos(tmp1, VarNR(concat(v_ItemVarName, NAMSTR(s_ss470a29a7, "first"))))));
      tmp0 = (!same(tmp2, false));
    }
    v_usesPropFirst = tmp0;
  }
  {
    bool tmp0 = (v_usesSmartyLast);
    if (!tmp0) {
      LINE(78,0);
      const String &tmp1((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
      const Variant &tmp2((x_strpos(tmp1, VarNR(concat(v_ItemVarName, NAMSTR(s_ss6d41e4dc, "last"))))));
      tmp0 = (!same(tmp2, false));
    }
    v_usesPropLast = tmp0;
  }
  {
    bool tmp0 = (v_usesPropFirst);
    if (!tmp0) {
      LINE(79,0);
      const String &tmp1((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
      const Variant &tmp2((x_strpos(tmp1, VarNR(concat(v_ItemVarName, NAMSTR(s_ssc0ff3081, "index"))))));
      tmp0 = (!same(tmp2, false));
    }
    v_usesPropIndex = tmp0;
  }
  {
    bool tmp0 = (v_usesPropLast);
    if (!tmp0) {
      LINE(80,0);
      const String &tmp1((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
      const Variant &tmp2((x_strpos(tmp1, VarNR(concat(v_ItemVarName, NAMSTR(s_ss51f837b3, "iteration"))))));
      tmp0 = (!same(tmp2, false));
    }
    v_usesPropIteration = tmp0;
  }
  {
    LINE(81,0);
    const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
    const Variant &tmp1((x_strpos(tmp0, VarNR(concat(v_ItemVarName, NAMSTR(s_sscf60937f, "show"))))));
    bool tmp2((!same(tmp1, false)));
    v_usesPropShow = tmp2;
  }
  {
    bool tmp0 = ((((v_usesSmartyTotal || v_usesSmartyShow) || v_usesPropShow) || v_usesPropLast));
    if (!tmp0) {
      LINE(82,0);
      const String &tmp1((toString(v_tpl.o_getPublic(NAMSTR(s_ss105c90e5, "template_source"), true))));
      const Variant &tmp2((x_strpos(tmp1, VarNR(concat(v_ItemVarName, NAMSTR(s_ss53c9c786, "total"))))));
      tmp0 = (!same(tmp2, false));
    }
    v_usesPropTotal = tmp0;
  }
  v_output = concat3(NAMSTR(s_ssdf9f062e, "<\?php  $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss2aa1b16d, "] = new Smarty_Variable;\n"));
  {
    LINE(86,(v_compiler.o_lval(NAMSTR(s_ssc587de67, "local_var"), tmp_ref, s_class_name))).set(v_item, (true_varNR));
    tmp_ref.unset();
  }
  if (!equal(v_key, null)) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_key), NAMSTR(s_ss2aa1b16d, "] = new Smarty_Variable;\n")));
      {
        LINE(89,(v_compiler.o_lval(NAMSTR(s_ssc587de67, "local_var"), tmp_ref, s_class_name))).set(v_key, (true_varNR));
        tmp_ref.unset();
      }
    }
  }
  concat_assign(v_output, concat3(NAMSTR(s_ss6bdd26f4, " $_from = "), toString(v_from), NAMSTR(s_ss42bb1e37, "; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}\n")));
  if (v_usesPropTotal) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ssd410a7b3, "]->total= $_smarty_tpl->_count($_from);\n")));
    }
  }
  if (v_usesPropIteration) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss58a9c554, "]->iteration=0;\n")));
    }
  }
  if (v_usesPropIndex) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ssf3a78f99, "]->index=-1;\n")));
    }
  }
  if (v_usesPropShow) {
    {
      concat_assign(v_output, concat5(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_sscbab9c8b, "]->show = ($_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss381b6fbc, "]->total > 0);\n")));
    }
  }
  if (v_has_name) {
    {
      if (v_usesSmartyTotal) {
        {
          concat_assign(v_output, concat5(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_ss0905b252, "]['total'] = $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ssf428fea3, "]->total;\n")));
        }
      }
      if (v_usesSmartyIteration) {
        {
          concat_assign(v_output, concat3(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_ss81ac4cd3, "]['iteration']=0;\n")));
        }
      }
      if (v_usesSmartyIndex) {
        {
          concat_assign(v_output, concat3(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_ss74fe1a1a, "]['index']=-1;\n")));
        }
      }
      if (v_usesSmartyShow) {
        {
          concat_assign(v_output, concat5(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_ss05b6b38f, "]['show']=($_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss381b6fbc, "]->total > 0);\n")));
        }
      }
    }
  }
  if (v_usesPropTotal) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ssce8d7b94, "if ($_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ssb3073ce0, "]->total > 0){\n")));
    }
  }
  else {
    {
      concat_assign(v_output, NAMSTR(s_ssb621eabd, "if ($_smarty_tpl->_count($_from) > 0){\n"));
    }
  }
  concat_assign(v_output, concat5(NAMSTR(s_ss334a4eb4, "    foreach ($_from as $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss679901e3, "]->key => $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss9e9f8041, "]->value){\n")));
  if (!equal(v_key, null)) {
    {
      concat_assign(v_output, concat5(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_key), NAMSTR(s_ss7c571824, "]->value = $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_sscbbc3cf7, "]->key;\n")));
    }
  }
  if (v_usesPropIteration) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss0de950c9, "]->iteration++;\n")));
    }
  }
  if (v_usesPropIndex) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ssc4f258e2, "]->index++;\n")));
    }
  }
  if (v_usesPropFirst) {
    {
      concat_assign(v_output, concat5(NAMSTR(s_ss948f0cc2, " $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ssa02f69b2, "]->first = $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_sse4155531, "]->index === 0;\n")));
    }
  }
  if (v_usesPropLast) {
    {
      concat_assign(v_output, StringBuffer().addWithTaint(" $_smarty_tpl->tpl_vars[", 24).addWithTaint(toString(v_item)).addWithTaint("]->last = $_smarty_tpl->tpl_vars[", 33).addWithTaint(toString(v_item)).addWithTaint("]->iteration === $_smarty_tpl->tpl_vars[", 40).addWithTaint(toString(v_item)).addWithTaint("]->total;\n", 10).detachWithTaint());
    }
  }
  if (v_has_name) {
    {
      if (v_usesSmartyFirst) {
        {
          concat_assign(v_output, concat5(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_ss0970b6d2, "]['first'] = $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ss11f089f2, "]->first;\n")));
        }
      }
      if (v_usesSmartyIteration) {
        {
          concat_assign(v_output, concat3(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_ss0630e30b, "]['iteration']++;\n")));
        }
      }
      if (v_usesSmartyIndex) {
        {
          concat_assign(v_output, concat3(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_ss97a317f0, "]['index']++;\n")));
        }
      }
      if (v_usesSmartyLast) {
        {
          concat_assign(v_output, concat5(NAMSTR(s_ss545f29bd, " $_smarty_tpl->tpl_vars['smarty']->value['foreach']["), toString(v_name), NAMSTR(s_sse339c605, "]['last'] = $_smarty_tpl->tpl_vars["), toString(v_item), NAMSTR(s_ssec7d2277, "]->last;\n")));
        }
      }
    }
  }
  concat_assign(v_output, NAMSTR(s_ssf7e13165, "\?>"));
  return v_output;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 162 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Foreachelse)
const InstanceOfInfo c_Smarty_Internal_Compile_Foreachelse::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x2CF9612517BAEE65LL,1,"Smarty_Internal_Compile_Foreachelse",&cw_Smarty_Internal_Compile_Foreachelse},
};
const int c_Smarty_Internal_Compile_Foreachelse::s_instanceof_index[] = {
  3,
  0,1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Foreachelse::ci_compile((void*)&c_Smarty_Internal_Compile_Foreachelse::i_compile, (void*)&c_Smarty_Internal_Compile_Foreachelse::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Foreachelse::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Foreachelse);
  }
  c_Smarty_Internal_Compile_Foreachelse *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Foreachelse*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Foreachelse::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Foreachelse::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Foreachelse);
  }
  c_Smarty_Internal_Compile_Foreachelse *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Foreachelse*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Foreachelse::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Foreachelse::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Foreachelse::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Foreachelse::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreachelse = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Foreachelse,
  c_Smarty_Internal_Compile_Foreachelse::s_call_info_table,c_Smarty_Internal_Compile_Foreachelse::s_call_info_index,
  c_Smarty_Internal_Compile_Foreachelse::s_instanceof_table,c_Smarty_Internal_Compile_Foreachelse::s_instanceof_index,
  &c_Smarty_Internal_Compile_Foreachelse::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_foreach.php line 171 */
String c_Smarty_Internal_Compile_Foreachelse::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Foreachelse, Smarty_Internal_Compile_Foreachelse::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Foreachelse::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v__open_tag;
  Variant v_nocache;
  Variant v_item;
  Variant v_key;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(175,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(177,0);
    CVarRef tmp0((t__close_tag(s_sva2ae54f91)));
    v_key = tmp0[3];
    v_item = tmp0[2];
    v_nocache = tmp0[1];
    v__open_tag = tmp0[0];
    ;
  }
  LINE(178,(t__open_tag(NAMVAR(s_svsbb9e8614, "foreachelse"), VarNR(Array(array_createvi(4, toVPOD(NAMVAR(s_svsbb9e8614, "foreachelse")), toVPOD(v_nocache), toVPOD(v_item), toVPOD(v_key)))))));
  return NAMSTR(s_ss4770a67d, "<\?php }} else { \?>");
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Foreachclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Foreachclose)();
}
ObjectData *coo_Smarty_Internal_Compile_Foreach() {
  return NEWOBJ(c_Smarty_Internal_Compile_Foreach)();
}
ObjectData *coo_Smarty_Internal_Compile_Foreachelse() {
  return NEWOBJ(c_Smarty_Internal_Compile_Foreachelse)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_foreach.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_foreach_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_foreach) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_foreachelse) = true;
  g->CDEC(smarty_internal_compile_foreachclose) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_svad8f72ee3,
  (int64)&s_svad97afabf,
  (int64)&s_svaf678a377,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x691414609BC81C26LL,1,1,0,20,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },
  {0x592D7A1CE6937E56LL,0,2,0,84,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Foreach hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Foreach lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Foreach::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
