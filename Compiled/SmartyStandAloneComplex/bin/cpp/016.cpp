
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_modifier.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_modifier.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_object_block_function.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_object_block_function.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_object_function.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_object_function.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_print_expression.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_print_expression.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_modifier.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Modifier)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Modifier::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x1FCC639EC0419FABLL,1,"Smarty_Internal_Compile_Private_Modifier",&cw_Smarty_Internal_Compile_Private_Modifier},
};
const int c_Smarty_Internal_Compile_Private_Modifier::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Private_Modifier::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Modifier::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Modifier::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Modifier::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Modifier);
  }
  c_Smarty_Internal_Compile_Private_Modifier *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Modifier*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Private_Modifier::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Private_Modifier::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Modifier);
  }
  c_Smarty_Internal_Compile_Private_Modifier *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Modifier*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Private_Modifier::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Modifier::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Modifier::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Modifier::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Modifier = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Modifier,
  c_Smarty_Internal_Compile_Private_Modifier::s_call_info_table,c_Smarty_Internal_Compile_Private_Modifier::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Modifier::s_instanceof_table,c_Smarty_Internal_Compile_Private_Modifier::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Modifier::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_modifier.php line 24 */
Variant c_Smarty_Internal_Compile_Private_Modifier::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Modifier, Smarty_Internal_Compile_Private_Modifier::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Modifier::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v_output;
  Variant v_single_modifier;
  Variant v_modifier;
  String v_params;
  Variant v_function;
  String v_plugin;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(27,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  {
    LINE(29,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(30,0);
    const Variant &tmp0((v_parameter.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
    v_output.assignVal(tmp0);
  }
  {
    LOOP_COUNTER(1);
    Variant map2 = LINE(32,(v_parameter.rvalAt(NAMSTR(s_ss6bddc2a2, "modifierlist"), AccessFlags::Error_Key)));
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_single_modifier);
      {
        {
          LINE(33,0);
          const Variant &tmp0((v_single_modifier.rvalAt(0LL, AccessFlags::Error)));
          v_modifier.assignVal(tmp0);
        }
        v_single_modifier.set(0LL, (v_output));
        {
          LINE(35,0);
          const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), v_single_modifier)));
          v_params = tmp0;
        }
        {
          bool tmp0;
          {
            String tmp1((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_MODIFIER))));
            tmp0 = (isset(LINE(37,(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), false).rvalRef(tmp1, tmp_ref))), v_modifier));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                String tmp0((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_MODIFIER))));
                LINE(38,0);
                const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalRef(v_modifier, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
                v_function.assignVal(tmp1);
                tmp_ref.unset();
              }
              if (!(x_is_array(v_function))) {
                {
                  v_output = concat4(toString(v_function), NAMSTR(s_ss6e782e41, "("), v_params, NAMSTR(s_ss44beffb9, ")"));
                }
              }
              else {
                {
                  {
                    bool tmp0;
                    {
                      LINE(42,0);
                      const Variant &tmp1((v_function.rvalAt(0LL, AccessFlags::Error)));
                      tmp0 = (x_is_object(tmp1));
                    }
                    if (tmp0) {
                      {
                        {
                          StringBuffer tmp0_buf;
                          tmp0_buf.appendWithTaint("$_smarty_tpl->smarty->registered_plugins[Smarty::PLUGIN_MODIFIER]['", 67);
                          tmp0_buf.appendWithTaint(toString(v_modifier));
                          tmp0_buf.appendWithTaint("'][0][0]->", 10);
                          tmp0_buf.appendWithTaint(LINE(43,(toString(v_function.rvalAt(1LL, AccessFlags::Error)))));
                          tmp0_buf.appendWithTaint("(", 1);
                          tmp0_buf.appendWithTaint(v_params);
                          tmp0_buf.appendWithTaint(")", 1);
                          CStrRef tmp0(tmp0_buf.detachWithTaint());
                          v_output = tmp0;
                        }
                      }
                    }
                    else {
                      {
                        {
                          LINE(45,0);
                          const String &tmp0((toString(v_function.rvalAt(0LL, AccessFlags::Error))));
                          const String &tmp1((toString(v_function.rvalAt(1LL, AccessFlags::Error))));
                          String tmp2((v_params));
                          v_output = concat6(tmp0, NAMSTR(s_ss819481f3, "::"), tmp1, NAMSTR(s_ss6e782e41, "("), tmp2, NAMSTR(s_ss44beffb9, ")"));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            bool tmp0;
            {
              LINE(49,0);
              MethodCallPackage mcp1;
              CVarRef obj1 = v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true);
              mcp1.methodCall((obj1), NAMSTR(s_ss40712224, "loadPlugin"), 0x6906EF04017B7504LL);
              const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
              tmp0 = (toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, VarNR(concat(NAMSTR(s_ssbce1fd0f, "smarty_modifiercompiler_"), toString(v_modifier))))));
            }
            if (tmp0) {
              {
                v_plugin = concat(NAMSTR(s_ssbce1fd0f, "smarty_modifiercompiler_"), toString(v_modifier));
                {
                  const CallInfo *cit0;
                  void *vt0;
                  get_call_info_or_fail(cit0, vt0, v_plugin);
                  LINE(51,0);
                  Variant tmp1(((cit0->getFunc2Args())(vt0, 2, v_single_modifier, v_compiler)));
                  v_output.assignVal(tmp1);
                }
              }
            }
            else {
              bool tmp0;
              {
                LINE(53,0);
                MethodCallPackage mcp1;
                CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                mcp1.methodCall((obj1), NAMSTR(s_ssf4b91571, "getPlugin"), 0x2FF10671E4B60176LL);
                const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                Variant tmp2(((mcp1.ci->getMeth2Args())(mcp1, 2, v_modifier, VarNR(((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_MODIFIER))))));
                tmp0 = (toBoolean(v_function.assignVal(tmp2)));
              }
              if (tmp0) {
                {
                  v_output = concat4(toString(v_function), NAMSTR(s_ss6e782e41, "("), v_params, NAMSTR(s_ss44beffb9, ")"));
                }
              }
              else if (LINE(56,(x_is_callable(v_modifier)))) {
                {
                  {
                    bool tmp0;
                    {
                      LINE(58,0);
                      const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true)));
                      bool tmp2((x_is_object(tmp1)));
                      bool tmp3 = (!(tmp2));
                      if (!tmp3) {
                        MethodCallPackage mcp4;
                        CVarRef obj4 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
                        mcp4.methodCall((obj4), NAMSTR(s_ss625b01f5, "isTrustedModifier"), 0x6886CCB7ECDA73E5LL);
                        const CallInfo *cit4 ATTRIBUTE_UNUSED = mcp4.ci;
                        tmp3 = (toBoolean((mcp4.ci->getMeth2Args())(mcp4, 2, v_modifier, GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true))));
                      }
                      tmp0 = (tmp3);
                    }
                    if (tmp0) {
                      {
                        v_output = concat4(toString(v_modifier), NAMSTR(s_ss6e782e41, "("), v_params, NAMSTR(s_ss44beffb9, ")"));
                      }
                    }
                  }
                }
              }
              else {
                {
                  {
                    LINE(62,0);
                    MethodCallPackage mcp0;
                    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                    mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                    const String &tmp1((toString(v_modifier)));
                    const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                    (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss806dcbf5, "unknown modifier \""), tmp1, NAMSTR(s_ss7e5fc106, "\""))), tmp2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v_output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Modifier() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Modifier)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_modifier.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_modifier_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_modifier) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_object_block_function.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Object_Block_Function)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Object_Block_Function::s_instanceof_table[] = {
  {0x585AD80256FE84ECLL,0,"Smarty_Internal_Compile_Private_Object_Block_Function",&cw_Smarty_Internal_Compile_Private_Object_Block_Function},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Private_Object_Block_Function::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Private_Object_Block_Function::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Object_Block_Function::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Object_Block_Function::ifa_compile, 5, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Object_Block_Function::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Object_Block_Function);
  }
  c_Smarty_Internal_Compile_Private_Object_Block_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Object_Block_Function*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Object_Block_Function::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(UNLIKELY(count <= 4) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty_Internal_Compile_Private_Object_Block_Function::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Object_Block_Function);
  }
  c_Smarty_Internal_Compile_Private_Object_Block_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Object_Block_Function*>(mcp.obj));
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Object_Block_Function::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  return (self->t_compile(arg0, arg1, arg2, arg3, arg4));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Object_Block_Function::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Object_Block_Function::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Object_Block_Function::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Object_Block_Function = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Object_Block_Function,
  c_Smarty_Internal_Compile_Private_Object_Block_Function::s_call_info_table,c_Smarty_Internal_Compile_Private_Object_Block_Function::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Object_Block_Function::s_instanceof_table,c_Smarty_Internal_Compile_Private_Object_Block_Function::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Object_Block_Function::s_class_name,
  &c_Smarty_Internal_Compile_Private_Object_Block_Function::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Private_Object_Block_Function::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa00000000;
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_object_block_function.php line 30 */
String c_Smarty_Internal_Compile_Private_Object_Block_Function::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag, CVarRef v_methode) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Object_Block_Function, Smarty_Internal_Compile_Private_Object_Block_Function::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Object_Block_Function::compile", array_createvi(5, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter), toVPOD(v_tag), toVPOD(v_methode)), r);
  Array v__attr;
  Array v__paramsArray;
  Primitive v__key = 0;
  Variant v__value;
  Variant v__params;
  String v_output;
  Variant v_base_tag;
  String v_mod_post;
  String v_mod_pre;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    bool tmp0;
    {
      LINE(33,0);
      int tmp1((x_strlen(toString(v_tag))));
      bool tmp2 = (less(tmp1, 5LL));
      if (!tmp2) {
        const Variant &tmp3((x_substr(toString(v_tag), toInt32(-5LL))));
        tmp2 = (!equal(tmp3, NAMSTR(s_ssf052ec6b, "close")));
      }
      tmp0 = (tmp2);
    }
    if (tmp0) {
      {
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
                GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
                tmp_ref.unset();
              }
            }
          }
        }
        v__attr.weakRemove(NAMSTR(s_ss8b74ea02, "nocache"), true);
        v__paramsArray = s_sa00000000;
        {
          LOOP_COUNTER(1);
          for (ArrayIter iter3 = v__attr.begin(s_class_name, true); !iter3.end(); ++iter3) {
            LOOP_COUNTER_CHECK(1);
            iter3.second(v__value);
            v__key.assignVal(iter3.first());
            {
              if (x_is_int(v__key)) {
                {
                  v__paramsArray.append((VarNR(concat3(toString(v__key), NAMSTR(s_ss398622d5, "=>"), toString(v__value)))));
                }
              }
              else {
                {
                  v__paramsArray.append((VarNR(concat4(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ss0dfe9f10, "'=>"), toString(v__value)))));
                }
              }
            }
          }
        }
        {
          LINE(50,0);
          const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__paramsArray))));
          v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
        }
        {
          const String &tmp0((toString(v_tag)));
          const String &tmp1((toString(v_methode)));
          Variant tmp3((v__params));
          LINE(52,0);
          const Variant &tmp4((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          ArrayInit tmp2(array_createvi(2, toVPOD(tmp3), toVPOD(tmp4)));
          const Array &tmp5((Array(tmp2)));
          t__open_tag(VarNR(concat3(tmp0, NAMSTR(s_ss767e7d6c, "->"), tmp1)), VarNR(tmp5));
        }
        {
          LINE(54,0);
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
          Primitive tmp2((bitwise_or(tmp0, tmp1)));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
          tmp_ref.unset();
        }
        v_output = StringBuffer().addWithTaint("<\?php $_smarty_tpl->smarty->_tag_stack[] = array('", 50).addWithTaint(toString(v_tag)).addWithTaint("->", 2).addWithTaint(toString(v_methode)).addWithTaint("', ", 3).addWithTaint(toString(v__params)).addWithTaint("); $_block_repeat=true; $_smarty_tpl->smarty->registered_objects['", 66).addWithTaint(toString(v_tag)).addWithTaint("'][0]->", 7).addWithTaint(toString(v_methode)).addWithTaint("(", 1).addWithTaint(toString(v__params)).addWithTaint(", null, $_smarty_tpl, $_block_repeat);while ($_block_repeat) { ob_start();\?>", 76).detachWithTaint();
      }
    }
    else {
      {
        {
          LINE(58,0);
          const Variant &tmp0((x_substr(toString(v_tag), toInt32(0LL), toInt32(-5LL))));
          v_base_tag.assignVal(tmp0);
        }
        if (LINE(60,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
          {
            {
              GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
              tmp_ref.unset();
            }
          }
        }
        {
          LINE(64,0);
          CVarRef tmp0((t__close_tag(VarNR(concat3(toString(v_base_tag), NAMSTR(s_ss767e7d6c, "->"), toString(v_methode))))));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_set(NAMSTR(s_ss8b74ea02, "nocache"), tmp0[1], s_class_name);
          v__params = tmp0[0];
          ;
          tmp_ref.unset();
        }
        {
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e57636d, "has_output"), true);
          tmp_ref.unset();
        }
        {
          bool tmp0;
          {
            tmp0 = (!(isset(v_parameter, NAMSTR(s_ss56586178, "modifier_list"), true)));
          }
          if (tmp0) {
            {
              v_mod_post = NAMSTR(s_ss00000000, ""), v_mod_pre = NAMSTR(s_ss00000000, "");
            }
          }
          else {
            {
              v_mod_pre = NAMSTR(s_ss96f3e99e, " ob_start(); ");
              {
                LINE(72,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const Variant &tmp2((v_parameter.rvalAt(NAMSTR(s_ss56586178, "modifier_list"), AccessFlags::Error_Key)));
                ArrayInit tmp1(array_createvs(2, toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(tmp2), toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(NAMVAR(s_svsd9ced2b2, "ob_get_clean()"))));
                const Array &tmp3((Array(tmp1)));
                const String &tmp4((toString((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs5f7a1e78, "private_modifier"), s_sva00000000, VarNR(tmp3)))));
                v_mod_post = concat3(NAMSTR(s_ss2de081fe, "echo "), tmp4, NAMSTR(s_ss0286c0cc, ";"));
              }
            }
          }
        }
        v_output = StringBuffer().addWithTaint("<\?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;", 80).addWithTaint(v_mod_pre).addWithTaint(" echo $_smarty_tpl->smarty->registered_objects['", 48).addWithTaint(toString(v_base_tag)).addWithTaint("'][0]->", 7).addWithTaint(toString(v_methode)).addWithTaint("(", 1).addWithTaint(toString(v__params)).addWithTaint(", $_block_content, $_smarty_tpl, $_block_repeat); ", 50).addWithTaint(v_mod_post).addWithTaint("  } array_pop($_smarty_tpl->smarty->_tag_stack);\?>", 50).detachWithTaint();
      }
    }
  }
  return concat(v_output, NAMSTR(s_ss66d2232c, "\n"));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Object_Block_Function() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Object_Block_Function)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_object_block_function.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_block_function_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_object_block_function) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_object_function.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Object_Function)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Object_Function::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x30FE0516CBCAF56ELL,1,"Smarty_Internal_Compile_Private_Object_Function",&cw_Smarty_Internal_Compile_Private_Object_Function},
};
const int c_Smarty_Internal_Compile_Private_Object_Function::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Private_Object_Function::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Object_Function::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Object_Function::ifa_compile, 5, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Object_Function::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Object_Function);
  }
  c_Smarty_Internal_Compile_Private_Object_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Object_Function*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Object_Function::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(UNLIKELY(count <= 4) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant c_Smarty_Internal_Compile_Private_Object_Function::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Object_Function);
  }
  c_Smarty_Internal_Compile_Private_Object_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Object_Function*>(mcp.obj));
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Object_Function::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  return (self->t_compile(arg0, arg1, arg2, arg3, arg4));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Object_Function::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Object_Function::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Object_Function::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Object_Function = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Object_Function,
  c_Smarty_Internal_Compile_Private_Object_Function::s_call_info_table,c_Smarty_Internal_Compile_Private_Object_Function::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Object_Function::s_instanceof_table,c_Smarty_Internal_Compile_Private_Object_Function::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Object_Function::s_class_name,
  &c_Smarty_Internal_Compile_Private_Object_Function::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Private_Object_Function::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa00000000;
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_object_function.php line 30 */
String c_Smarty_Internal_Compile_Private_Object_Function::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag, CVarRef v_methode) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Object_Function, Smarty_Internal_Compile_Private_Object_Function::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Object_Function::compile", array_createvi(5, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter), toVPOD(v_tag), toVPOD(v_methode)), r);
  Array v__attr;
  Variant v__assign;
  Array v__paramsArray;
  Primitive v__key = 0;
  Variant v__value;
  String v__params;
  String v_return;
  String v_output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(34,0);
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
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
          tmp_ref.unset();
        }
      }
    }
  }
  v__attr.weakRemove(NAMSTR(s_ss8b74ea02, "nocache"), true);
  setNull(v__assign);
  if (isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true)) {
    {
      {
        LINE(41,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
        v__assign.assignVal(tmp0);
      }
      v__attr.weakRemove(NAMSTR(s_ssba4e7712, "assign"), true);
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(45,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss95ed8050, "registered_objects"), true).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(2LL, AccessFlags::Error)))));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        v__paramsArray = s_sa00000000;
        {
          LOOP_COUNTER(1);
          for (ArrayIter iter3 = v__attr.begin(s_class_name, true); !iter3.end(); ++iter3) {
            LOOP_COUNTER_CHECK(1);
            iter3.second(v__value);
            v__key.assignVal(iter3.first());
            {
              if (x_is_int(v__key)) {
                {
                  v__paramsArray.append((VarNR(concat3(toString(v__key), NAMSTR(s_ss398622d5, "=>"), toString(v__value)))));
                }
              }
              else {
                {
                  v__paramsArray.append((VarNR(concat4(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ss0dfe9f10, "'=>"), toString(v__value)))));
                }
              }
            }
          }
        }
        {
          LINE(54,0);
          const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__paramsArray))));
          v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
        }
        v_return = StringBuffer().addWithTaint("$_smarty_tpl->smarty->registered_objects['", 42).addWithTaint(toString(v_tag)).addWithTaint("'][0]->", 7).addWithTaint(toString(v_methode)).addWithTaint("(", 1).addWithTaint(v__params).addWithTaint(",$_smarty_tpl)", 14).detachWithTaint();
      }
    }
    else {
      {
        {
          LINE(57,0);
          const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__attr))));
          v__params = tmp0;
        }
        v_return = StringBuffer().addWithTaint("$_smarty_tpl->smarty->registered_objects['", 42).addWithTaint(toString(v_tag)).addWithTaint("'][0]->", 7).addWithTaint(toString(v_methode)).addWithTaint("(", 1).addWithTaint(v__params).addWithTaint(")", 1).detachWithTaint();
      }
    }
  }
  if (empty(v__assign)) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e57636d, "has_output"), true);
        tmp_ref.unset();
      }
      v_output = concat3(NAMSTR(s_ss686ceae7, "<\?php echo "), v_return, NAMSTR(s_ssa241b893, ";\?>\n"));
    }
  }
  else {
    {
      v_output = concat5(NAMSTR(s_ss6fe429e5, "<\?php $_smarty_tpl->assign("), toString(v__assign), NAMSTR(s_ssd332baa7, ","), v_return, NAMSTR(s_ss13b21925, ");\?>\n"));
    }
  }
  return v_output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Object_Function() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Object_Function)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_object_function.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_object_function_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_object_function) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_print_expression.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Print_Expression)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Print_Expression::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x6C9EC01DBB27EAA6LL,1,"Smarty_Internal_Compile_Private_Print_Expression",&cw_Smarty_Internal_Compile_Private_Print_Expression},
};
const int c_Smarty_Internal_Compile_Private_Print_Expression::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Private_Print_Expression::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Print_Expression::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Print_Expression::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Print_Expression::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Print_Expression);
  }
  c_Smarty_Internal_Compile_Private_Print_Expression *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Print_Expression*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Private_Print_Expression::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Private_Print_Expression::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Print_Expression);
  }
  c_Smarty_Internal_Compile_Private_Print_Expression *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Print_Expression*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Private_Print_Expression::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Print_Expression::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Print_Expression::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Print_Expression::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Print_Expression = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Print_Expression,
  c_Smarty_Internal_Compile_Private_Print_Expression::s_call_info_table,c_Smarty_Internal_Compile_Private_Print_Expression::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Print_Expression::s_instanceof_table,c_Smarty_Internal_Compile_Private_Print_Expression::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Print_Expression::s_class_name,
  &c_Smarty_Internal_Compile_Private_Print_Expression::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Private_Print_Expression::init() {
  c_Smarty_Internal_CompileBase::init();
  m_optional_attributes = s_sadb4078a3;
  m_option_flags = s_sa58b4a4a3;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_print_expression.php line 28 */
Variant c_Smarty_Internal_Compile_Private_Print_Expression::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Print_Expression, Smarty_Internal_Compile_Private_Print_Expression::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Print_Expression::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  String v__filter;
  Variant v_output;
  Array v_modifierlist;
  Primitive v_key = 0;
  Variant v_single_default_modifier;
  Variant v_mod_array;
  int64 v_i = 0;
  int v_count = 0;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(32,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(34,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
          tmp_ref.unset();
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(38,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ssd7fb7746, "nofilter"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        v__filter = NAMSTR(s_ss8c98c156, "false");
      }
    }
    else {
      {
        v__filter = NAMSTR(s_ss102bfbc4, "true");
      }
    }
  }
  if (isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true)) {
    {
      {
        LINE(47,0);
        const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key))));
        const String &tmp1((toString(v_parameter.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
        v_output = concat5(NAMSTR(s_ss6fe429e5, "<\?php $_smarty_tpl->assign("), tmp0, NAMSTR(s_ssd332baa7, ","), tmp1, NAMSTR(s_ss2c931015, ");\?>"));
      }
    }
  }
  else {
    {
      {
        bool tmp0;
        {
          LINE(50,0);
          bool tmp1((toBoolean(v__attr.rvalAt(NAMSTR(s_ssd7fb7746, "nofilter"), AccessFlags::Error_Key))));
          bool tmp2 = (!(tmp1));
          if (tmp2) {
            tmp2 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss05369a00, "registered_filters"), false), NAMSTR(s_ss3ea207e6, "variable"), true));
          }
          tmp0 = (tmp2);
        }
        if (tmp0) {
          {
            {
              LINE(51,0);
              const String &tmp0((toString(v_parameter.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
              String tmp1((v__filter));
              v_output = concat5(NAMSTR(s_ss18642398, "Smarty_Internal_Filter_Handler::runFilter('variable', "), tmp0, NAMSTR(s_ssfd971e2c, ", $_smarty_tpl, "), tmp1, NAMSTR(s_ss44beffb9, ")"));
            }
          }
        }
        else {
          {
            {
              LINE(53,0);
              const Variant &tmp0((v_parameter.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
              v_output.assignVal(tmp0);
            }
          }
        }
      }
      {
        bool tmp0;
        {
          LINE(55,0);
          bool tmp1((toBoolean(v__attr.rvalAt(NAMSTR(s_ssd7fb7746, "nofilter"), AccessFlags::Error_Key))));
          bool tmp2 = (!(tmp1));
          if (tmp2) {
            tmp2 = (!(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_empty(NAMSTR(s_ss3c2a208b, "default_modifiers"), s_class_name)));
          }
          tmp0 = (tmp2);
        }
        if (tmp0) {
          {
            v_modifierlist = s_sa00000000;
            {
              LOOP_COUNTER(1);
              Variant map2;
              {
                map2 = LINE(57,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss3c2a208b, "default_modifiers"), true)));
              }
              for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                LOOP_COUNTER_CHECK(1);
                iter3.second(v_single_default_modifier);
                v_key.assignVal(iter3.first());
                {
                  LINE(58,(x_preg_match_all(NAMSTR(s_ssc1f1ec6b, "/('[^'\\\\]*(\?:\\\\.[^'\\\\]*)*'|\"[^\"\\\\]*(\?:\\\\.[^\"\\\\]*)*\"|:|[^:]+)/"), toString(v_single_default_modifier), ref(v_mod_array))));
                  {
                    LOOP_COUNTER(4);
                    {
                      v_i = 0LL;
                      LINE(59,0);
                      const Variant &tmp0((v_mod_array.rvalAt(0LL, AccessFlags::Error)));
                      int tmp1((x_count(tmp0)));
                      v_count = tmp1;
                    }
                    for (; (less(v_i, v_count)); v_i++) {
                      LOOP_COUNTER_CHECK(4);
                      {
                        {
                          bool tmp0;
                          {
                            LINE(60,0);
                            const Variant &tmp1((v_mod_array.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(v_i, AccessFlags::Error)));
                            tmp0 = (!equal(tmp1, NAMSTR(s_ssdb381ae8, ":")));
                            tmp_ref.unset();
                          }
                          if (tmp0) {
                            {
                              {
                                LINE(61,0);
                                const Variant &tmp0((v_mod_array.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(v_i, AccessFlags::Error)));
                                lval(v_modifierlist.lvalAt(v_key, AccessFlags::CheckExist)).append((tmp0));
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
            {
              LINE(65,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
              mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              Variant tmp1(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs5f7a1e78, "private_modifier"), s_sva00000000, VarNR(Array(array_createvs(2, toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(VarNR(v_modifierlist)), toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(v_output)))))));
              v_output.assignVal(tmp1);
            }
          }
        }
      }
      {
        bool tmp0;
        {
          tmp0 = (!(empty(v_parameter, NAMSTR(s_ss6bddc2a2, "modifierlist"), true)));
        }
        if (tmp0) {
          {
            {
              LINE(68,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
              mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              const Variant &tmp2((v_parameter.rvalAt(NAMSTR(s_ss6bddc2a2, "modifierlist"), AccessFlags::Error_Key)));
              ArrayInit tmp1(array_createvs(2, toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(tmp2), toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(v_output)));
              const Array &tmp3((Array(tmp1)));
              Variant tmp4(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs5f7a1e78, "private_modifier"), s_sva00000000, VarNR(tmp3))));
              v_output.assignVal(tmp4);
            }
          }
        }
      }
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e57636d, "has_output"), true);
        tmp_ref.unset();
      }
      v_output = concat3(NAMSTR(s_ss686ceae7, "<\?php echo "), toString(v_output), NAMSTR(s_ss1434b9af, ";\?>"));
    }
  }
  return v_output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Print_Expression() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Print_Expression)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_print_expression.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_print_expression_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_print_expression) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva00000000,
  (int64)&s_svad23e7614,
  (int64)&s_sva58b4a4a3,
  (int64)&s_svadb4078a3,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x10405E554CDFCEB9LL,0,2,0,84,10,0,&NAMSTR(s_ssc9f0d92c, "option_flags") },
  {0x691414609BC81C26LL,-1,3,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Private_Object_Block_Function hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Private_Object_Block_Function lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Private_Object_Function hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Private_Object_Function lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Private_Print_Expression hash
  -1,0,-1,-1,-1,-1,1,-1,
  // Smarty_Internal_Compile_Private_Print_Expression lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Private_Object_Block_Function::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Private_Object_Function::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+11,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+2,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Private_Print_Expression::os_prop_table = {
  7,1,-1,-1,-1,-1,9,0,
  cpt_hash_entries+22,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+4,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
