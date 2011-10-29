
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_registered_block.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_registered_block.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_registered_function.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_registered_function.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_special_variable.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_special_variable.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_rdelim.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_rdelim.fws.h>

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
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_registered_block.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Registered_Block)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Registered_Block::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x32968FC82EC638F1LL,1,"Smarty_Internal_Compile_Private_Registered_Block",&cw_Smarty_Internal_Compile_Private_Registered_Block},
};
const int c_Smarty_Internal_Compile_Private_Registered_Block::s_instanceof_index[] = {
  3,
  0,1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Private_Registered_Block::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Registered_Block::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Registered_Block::ifa_compile, 4, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Registered_Block::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Registered_Block);
  }
  c_Smarty_Internal_Compile_Private_Registered_Block *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Registered_Block*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Compile_Private_Registered_Block::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Compile_Private_Registered_Block::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Registered_Block);
  }
  c_Smarty_Internal_Compile_Private_Registered_Block *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Registered_Block*>(mcp.obj));
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Compile_Private_Registered_Block::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  return (self->t_compile(arg0, arg1, arg2, arg3));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Registered_Block::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Registered_Block::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Registered_Block::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Registered_Block = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Registered_Block,
  c_Smarty_Internal_Compile_Private_Registered_Block::s_call_info_table,c_Smarty_Internal_Compile_Private_Registered_Block::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Registered_Block::s_instanceof_table,c_Smarty_Internal_Compile_Private_Registered_Block::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Registered_Block::s_class_name,
  &c_Smarty_Internal_Compile_Private_Registered_Block::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Private_Registered_Block::init() {
  c_Smarty_Internal_CompileBase::init();
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_registered_block.php line 28 */
String c_Smarty_Internal_Compile_Private_Registered_Block::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Registered_Block, Smarty_Internal_Compile_Private_Registered_Block::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Registered_Block::compile", array_createvi(4, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter), toVPOD(v_tag)), r);
  Array v__attr;
  Array v__paramsArray;
  Primitive v__key = 0;
  Variant v__value;
  Variant v__params;
  Variant v_function;
  String v_output;
  Variant v_base_tag;
  String v_mod_post;
  String v_mod_pre;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    bool tmp0;
    {
      LINE(31,0);
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
          LINE(34,0);
          const Array &tmp0((t__get_attributes(v_args)));
          v__attr = tmp0;
        }
        if (LINE(35,(toBoolean(v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key))))) {
          {
            {
              GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
              tmp_ref.unset();
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
                bool tmp0;
                {
                  bool tmp1 = (LINE(44,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
                  if (tmp1) {
                    Primitive tmp2((v__key));
                    String tmp3((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))));
                    const Variant &tmp4((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp3, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(2LL, AccessFlags::Error)));
                    tmp1 = (x_in_array(tmp2, tmp4));
                  }
                  tmp0 = (tmp1);
                  tmp_ref.unset();
                }
                if (tmp0) {
                  {
                    {
                      LINE(45,0);
                      const Variant &tmp0((x_str_replace(NAMVAR(s_svse07b87c4, "'"), NAMVAR(s_svsfc8f9662, "^#^"), v__value)));
                      v__value.assignVal(tmp0);
                    }
                    v__paramsArray.append((VarNR(concat5(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ssb44d0ea8, "'=>^#^.var_export("), toString(v__value), NAMSTR(s_ss5ac8ae89, ",true).^#^")))));
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
        }
        {
          LINE(51,0);
          const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__paramsArray))));
          v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
        }
        {
          Variant tmp0((v_tag));
          Variant tmp2((v__params));
          LINE(53,0);
          const Variant &tmp3((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          ArrayInit tmp1(array_createvi(2, toVPOD(tmp2), toVPOD(tmp3)));
          const Array &tmp4((Array(tmp1)));
          t__open_tag(tmp0, VarNR(tmp4));
        }
        {
          String tmp0((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))));
          LINE(55,0);
          bool tmp1((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error))));
          const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          Primitive tmp3((bitwise_or(toInt32(!(tmp1)), tmp2)));
          const Variant &tmp4((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
          Primitive tmp5((bitwise_or(tmp3, tmp4)));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp5);
          tmp_ref.unset();
        }
        {
          String tmp0((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))));
          LINE(56,0);
          const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
          v_function.assignVal(tmp1);
          tmp_ref.unset();
        }
        if (!(x_is_array(v_function))) {
          {
            v_output = StringBuffer().addWithTaint("<\?php $_smarty_tpl->smarty->_tag_stack[] = array('", 50).addWithTaint(toString(v_tag)).addWithTaint("', ", 3).addWithTaint(toString(v__params)).addWithTaint("); $_block_repeat=true; ", 24).addWithTaint(toString(v_function)).addWithTaint("(", 1).addWithTaint(toString(v__params)).addWithTaint(", null, $_smarty_tpl, $_block_repeat);while ($_block_repeat) { ob_start();\?>", 76).detachWithTaint();
          }
        }
        else {
          bool tmp0;
          {
            LINE(60,0);
            const Variant &tmp1((v_function.rvalAt(0LL, AccessFlags::Error)));
            tmp0 = (x_is_object(tmp1));
          }
          if (tmp0) {
            {
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("<\?php $_smarty_tpl->smarty->_tag_stack[] = array('", 50);
                tmp0_buf.appendWithTaint(toString(v_tag));
                tmp0_buf.appendWithTaint("', ", 3);
                tmp0_buf.appendWithTaint(toString(v__params));
                tmp0_buf.appendWithTaint("); $_block_repeat=true; $_smarty_tpl->smarty->registered_plugins['block']['", 75);
                tmp0_buf.appendWithTaint(toString(v_tag));
                tmp0_buf.appendWithTaint("'][0][0]->", 10);
                tmp0_buf.appendWithTaint(LINE(61,(toString(v_function.rvalAt(1LL, AccessFlags::Error)))));
                tmp0_buf.appendWithTaint("(", 1);
                tmp0_buf.appendWithTaint(toString(v__params));
                tmp0_buf.appendWithTaint(", null, $_smarty_tpl, $_block_repeat);while ($_block_repeat) { ob_start();\?>", 76);
                CStrRef tmp0(tmp0_buf.detachWithTaint());
                v_output = tmp0;
              }
            }
          }
          else {
            {
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("<\?php $_smarty_tpl->smarty->_tag_stack[] = array('", 50);
                tmp0_buf.appendWithTaint(toString(v_tag));
                tmp0_buf.appendWithTaint("', ", 3);
                tmp0_buf.appendWithTaint(toString(v__params));
                tmp0_buf.appendWithTaint("); $_block_repeat=true; ", 24);
                tmp0_buf.appendWithTaint(LINE(63,(toString(v_function.rvalAt(0LL, AccessFlags::Error)))));
                tmp0_buf.appendWithTaint("::", 2);
                tmp0_buf.appendWithTaint(toString(v_function.rvalAt(1LL, AccessFlags::Error)));
                tmp0_buf.appendWithTaint("(", 1);
                tmp0_buf.appendWithTaint(toString(v__params));
                tmp0_buf.appendWithTaint(", null, $_smarty_tpl, $_block_repeat);while ($_block_repeat) { ob_start();\?>", 76);
                CStrRef tmp0(tmp0_buf.detachWithTaint());
                v_output = tmp0;
              }
            }
          }
        }
      }
    }
    else {
      {
        if (LINE(67,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
          {
            {
              GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
              tmp_ref.unset();
            }
          }
        }
        {
          LINE(70,0);
          const Variant &tmp0((x_substr(toString(v_tag), toInt32(0LL), toInt32(-5LL))));
          v_base_tag.assignVal(tmp0);
        }
        {
          LINE(72,0);
          CVarRef tmp0((t__close_tag(v_base_tag)));
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
          String tmp0((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_BLOCK))));
          LINE(75,0);
          const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalRef(v_base_tag, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
          v_function.assignVal(tmp1);
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
                LINE(81,0);
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
        if (!(x_is_array(v_function))) {
          {
            v_output = StringBuffer().addWithTaint("<\?php $_block_content = ob_get_clean(); $_block_repeat=false;", 61).addWithTaint(v_mod_pre).addWithTaint(" echo ", 6).addWithTaint(toString(v_function)).addWithTaint("(", 1).addWithTaint(toString(v__params)).addWithTaint(", $_block_content, $_smarty_tpl, $_block_repeat);", 49).addWithTaint(v_mod_post).addWithTaint(" } array_pop($_smarty_tpl->smarty->_tag_stack);\?>", 49).detachWithTaint();
          }
        }
        else {
          bool tmp0;
          {
            LINE(85,0);
            const Variant &tmp1((v_function.rvalAt(0LL, AccessFlags::Error)));
            tmp0 = (x_is_object(tmp1));
          }
          if (tmp0) {
            {
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("<\?php $_block_content = ob_get_clean(); $_block_repeat=false;", 61);
                tmp0_buf.appendWithTaint(v_mod_pre);
                tmp0_buf.appendWithTaint(" echo $_smarty_tpl->smarty->registered_plugins['block']['", 57);
                tmp0_buf.appendWithTaint(toString(v_base_tag));
                tmp0_buf.appendWithTaint("'][0][0]->", 10);
                tmp0_buf.appendWithTaint(LINE(86,(toString(v_function.rvalAt(1LL, AccessFlags::Error)))));
                tmp0_buf.appendWithTaint("(", 1);
                tmp0_buf.appendWithTaint(toString(v__params));
                tmp0_buf.appendWithTaint(", $_block_content, $_smarty_tpl, $_block_repeat); ", 50);
                tmp0_buf.appendWithTaint(v_mod_post);
                tmp0_buf.appendWithTaint("} array_pop($_smarty_tpl->smarty->_tag_stack);\?>", 48);
                CStrRef tmp0(tmp0_buf.detachWithTaint());
                v_output = tmp0;
              }
            }
          }
          else {
            {
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("<\?php $_block_content = ob_get_clean(); $_block_repeat=false;", 61);
                tmp0_buf.appendWithTaint(v_mod_pre);
                tmp0_buf.appendWithTaint(" echo ", 6);
                tmp0_buf.appendWithTaint(LINE(88,(toString(v_function.rvalAt(0LL, AccessFlags::Error)))));
                tmp0_buf.appendWithTaint("::", 2);
                tmp0_buf.appendWithTaint(toString(v_function.rvalAt(1LL, AccessFlags::Error)));
                tmp0_buf.appendWithTaint("(", 1);
                tmp0_buf.appendWithTaint(toString(v__params));
                tmp0_buf.appendWithTaint(", $_block_content, $_smarty_tpl, $_block_repeat); ", 50);
                tmp0_buf.appendWithTaint(v_mod_post);
                tmp0_buf.appendWithTaint("} array_pop($_smarty_tpl->smarty->_tag_stack);\?>", 48);
                CStrRef tmp0(tmp0_buf.detachWithTaint());
                v_output = tmp0;
              }
            }
          }
        }
      }
    }
  }
  return concat(v_output, NAMSTR(s_ss66d2232c, "\n"));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Registered_Block() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Registered_Block)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_registered_block.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_block_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_registered_block) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_registered_function.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Registered_Function)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Registered_Function::s_instanceof_table[] = {
  {0x3E3FD0346320DF64LL,0,"Smarty_Internal_Compile_Private_Registered_Function",&cw_Smarty_Internal_Compile_Private_Registered_Function},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Private_Registered_Function::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Private_Registered_Function::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Registered_Function::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Registered_Function::ifa_compile, 4, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Registered_Function::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Registered_Function);
  }
  c_Smarty_Internal_Compile_Private_Registered_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Registered_Function*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Compile_Private_Registered_Function::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2, arg3));
  }
}
Variant c_Smarty_Internal_Compile_Private_Registered_Function::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Registered_Function);
  }
  c_Smarty_Internal_Compile_Private_Registered_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Registered_Function*>(mcp.obj));
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Compile_Private_Registered_Function::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  return (self->t_compile(arg0, arg1, arg2, arg3));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Registered_Function::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Registered_Function::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Registered_Function::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Registered_Function = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Registered_Function,
  c_Smarty_Internal_Compile_Private_Registered_Function::s_call_info_table,c_Smarty_Internal_Compile_Private_Registered_Function::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Registered_Function::s_instanceof_table,c_Smarty_Internal_Compile_Private_Registered_Function::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Registered_Function::s_class_name,
  &c_Smarty_Internal_Compile_Private_Registered_Function::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Private_Registered_Function::init() {
  c_Smarty_Internal_CompileBase::init();
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_registered_function.php line 28 */
String c_Smarty_Internal_Compile_Private_Registered_Function::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Registered_Function, Smarty_Internal_Compile_Private_Registered_Function::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Registered_Function::compile", array_createvi(4, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter), toVPOD(v_tag)), r);
  Array v__attr;
  Array v__paramsArray;
  Primitive v__key = 0;
  Variant v__value;
  String v__params;
  Variant v_function;
  String v_output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e57636d, "has_output"), true);
    tmp_ref.unset();
  }
  {
    LINE(34,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (LINE(35,(toBoolean(v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key))))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
    }
  }
  v__attr.weakRemove(NAMSTR(s_ss8b74ea02, "nocache"), true);
  {
    bool tmp0 = (LINE(40,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)))));
    if (!tmp0) {
      String tmp1((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_FUNCTION))));
      bool tmp2((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp1, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(1LL, AccessFlags::Error))));
      tmp0 = (!(tmp2));
    }
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp0);
    tmp_ref.unset();
  }
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
          bool tmp0;
          {
            bool tmp1 = (LINE(46,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
            if (tmp1) {
              Primitive tmp2((v__key));
              String tmp3((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_FUNCTION))));
              const Variant &tmp4((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp3, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(2LL, AccessFlags::Error)));
              tmp1 = (x_in_array(tmp2, tmp4));
            }
            tmp0 = (tmp1);
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                LINE(47,0);
                const Variant &tmp0((x_str_replace(NAMVAR(s_svse07b87c4, "'"), NAMVAR(s_svsfc8f9662, "^#^"), v__value)));
                v__value.assignVal(tmp0);
              }
              v__paramsArray.append((VarNR(concat5(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ssb44d0ea8, "'=>^#^.var_export("), toString(v__value), NAMSTR(s_ss5ac8ae89, ",true).^#^")))));
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
  }
  {
    LINE(53,0);
    const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__paramsArray))));
    v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
  }
  {
    String tmp0((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PLUGIN_FUNCTION))));
    LINE(54,0);
    const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), true).rvalRef(tmp0, tmp_ref, AccessFlags::Error).rvalRef(v_tag, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
    v_function.assignVal(tmp1);
    tmp_ref.unset();
  }
  if (!(x_is_array(v_function))) {
    {
      v_output = concat5(NAMSTR(s_ss686ceae7, "<\?php echo "), toString(v_function), NAMSTR(s_ss6e782e41, "("), v__params, NAMSTR(s_ssfc8f8205, ",$_smarty_tpl);\?>\n"));
    }
  }
  else {
    bool tmp0;
    {
      LINE(58,0);
      const Variant &tmp1((v_function.rvalAt(0LL, AccessFlags::Error)));
      tmp0 = (x_is_object(tmp1));
    }
    if (tmp0) {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint("<\?php echo $_smarty_tpl->smarty->registered_plugins[Smarty::PLUGIN_FUNCTION]['", 78);
          tmp0_buf.appendWithTaint(toString(v_tag));
          tmp0_buf.appendWithTaint("'][0][0]->", 10);
          tmp0_buf.appendWithTaint(LINE(59,(toString(v_function.rvalAt(1LL, AccessFlags::Error)))));
          tmp0_buf.appendWithTaint("(", 1);
          tmp0_buf.appendWithTaint(v__params);
          tmp0_buf.appendWithTaint(",$_smarty_tpl);\?>\n", 18);
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          v_output = tmp0;
        }
      }
    }
    else {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint("<\?php echo ", 11);
          tmp0_buf.appendWithTaint(LINE(61,(toString(v_function.rvalAt(0LL, AccessFlags::Error)))));
          tmp0_buf.appendWithTaint("::", 2);
          tmp0_buf.appendWithTaint(toString(v_function.rvalAt(1LL, AccessFlags::Error)));
          tmp0_buf.appendWithTaint("(", 1);
          tmp0_buf.appendWithTaint(v__params);
          tmp0_buf.appendWithTaint(",$_smarty_tpl);\?>\n", 18);
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          v_output = tmp0;
        }
      }
    }
  }
  return v_output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Registered_Function() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Registered_Function)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_registered_function.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_registered_function_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_registered_function) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_special_variable.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Special_Variable)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Special_Variable::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x2D2385833CCD7FAFLL,1,"Smarty_Internal_Compile_Private_Special_Variable",&cw_Smarty_Internal_Compile_Private_Special_Variable},
};
const int c_Smarty_Internal_Compile_Private_Special_Variable::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Private_Special_Variable::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Special_Variable::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Special_Variable::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Special_Variable::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Special_Variable);
  }
  c_Smarty_Internal_Compile_Private_Special_Variable *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Special_Variable*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Private_Special_Variable::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Private_Special_Variable::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Special_Variable);
  }
  c_Smarty_Internal_Compile_Private_Special_Variable *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Special_Variable*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Private_Special_Variable::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Special_Variable::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Special_Variable::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Special_Variable::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Special_Variable = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Special_Variable,
  c_Smarty_Internal_Compile_Private_Special_Variable::s_call_info_table,c_Smarty_Internal_Compile_Private_Special_Variable::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Special_Variable::s_instanceof_table,c_Smarty_Internal_Compile_Private_Special_Variable::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Special_Variable::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_special_variable.php line 23 */
String c_Smarty_Internal_Compile_Private_Special_Variable::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Special_Variable, Smarty_Internal_Compile_Private_Special_Variable::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Special_Variable::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Variant v__index;
  String v_compiled_ref;
  String v_variable;
  String v__version;
  Variant v__ldelim;
  Variant v__rdelim;
  Variant v__ind;

  {
    const String &tmp0((toString(v_parameter)));
    LINE(25,0);
    int tmp1((x_strlen(toString(v_parameter))));
    int tmp2((toInt32((tmp1 - 2LL))));
    const Variant &tmp3((x_substr(tmp0, toInt32(1LL), tmp2)));
    const Variant &tmp4((x_preg_split(NAMVAR(s_svsc89d2063, "/\\]\\[/"), tmp3)));
    v__index.assignVal(tmp4);
  }
  v_compiled_ref = NAMSTR(s_ssfcae4ca0, " ");
  {
    LINE(27,0);
    const String &tmp0((toString(v__index.rvalAt(0LL, AccessFlags::Error))));
    const String &tmp1((x_trim(tmp0, NAMSTR(s_sse07b87c4, "'"))));
    v_variable = tmp1;
  }
  {
    String switch2;
    switch2 = (v_variable);
    bool needsOrder;
    int64 hash;
    hash = switch2.hashForStringSwitch(6785130650423246602LL, 0LL, 0LL, 6785130650423246602LL, 6785130650423246602LL, 64LL, needsOrder);
    switch (((uint64) hash) & 63UL) {
    case_2_h_s6:
    case 2UL:
      if (equal(switch2, (NAMSTR(s_ssccae2184, "post")))) goto case_2_6;
      if (UNLIKELY(needsOrder)) goto case_2_h_s7;
      goto case_2_18;
    case_2_h_s2:
    case 7UL:
      if (equal(switch2, (NAMSTR(s_ssa5071687, "capture")))) goto case_2_2;
      if (UNLIKELY(needsOrder)) goto case_2_h_s3;
      goto case_2_18;
    case 10UL:
      if (equal(switch2, (NAMSTR(s_ss5e0a0be6, "foreach")))) goto case_2_0;
      if (UNLIKELY(needsOrder)) goto case_2_h_s1;
      goto case_2_18;
    case_2_h_s12:
    case 16UL:
      if (equal(switch2, (NAMSTR(s_ss9fc9ae7c, "current_dir")))) goto case_2_12;
      if (UNLIKELY(needsOrder)) goto case_2_h_s13;
      goto case_2_18;
    case_2_h_s10:
    case 19UL:
      if (equal(switch2, (NAMSTR(s_ss967ae2f9, "request")))) goto case_2_10;
      if (UNLIKELY(needsOrder)) goto case_2_h_s11;
      goto case_2_18;
    case_2_h_s17:
    case 30UL:
      if (equal(switch2, (NAMSTR(s_ss58bc1a4d, "rdelim")))) goto case_2_17;
      goto case_2_18;
    case_2_h_s1:
    case 31UL:
      if (equal(switch2, (NAMSTR(s_ss28c31d78, "section")))) goto case_2_1;
      if (UNLIKELY(needsOrder)) goto case_2_h_s2;
      goto case_2_18;
    case_2_h_s7:
    case 34UL:
      if (equal(switch2, (NAMSTR(s_ssd4259e78, "env")))) goto case_2_7;
      if (UNLIKELY(needsOrder)) goto case_2_h_s8;
      goto case_2_18;
    case_2_h_s3:
    case 39UL:
      if (equal(switch2, (NAMSTR(s_ssdce2be06, "now")))) goto case_2_3;
      if (UNLIKELY(needsOrder)) goto case_2_h_s4;
    case_2_h_s9:
      if (equal(switch2, (NAMSTR(s_ss928bfbda, "session")))) goto case_2_9;
      if (UNLIKELY(needsOrder)) goto case_2_h_s10;
      goto case_2_18;
    case_2_h_s5:
    case 40UL:
      if (equal(switch2, (NAMSTR(s_sseac4979f, "get")))) goto case_2_5;
      if (UNLIKELY(needsOrder)) goto case_2_h_s6;
      goto case_2_18;
    case_2_h_s13:
    case 42UL:
      if (equal(switch2, (NAMSTR(s_ss7cd91db4, "version")))) goto case_2_13;
      if (UNLIKELY(needsOrder)) goto case_2_h_s14;
      goto case_2_18;
    case_2_h_s4:
    case 45UL:
      if (equal(switch2, (NAMSTR(s_ssd22aca40, "cookies")))) goto case_2_4;
      if (UNLIKELY(needsOrder)) goto case_2_h_s5;
      goto case_2_18;
    case_2_h_s8:
    case 46UL:
      if (equal(switch2, (NAMSTR(s_ss3907b71b, "server")))) goto case_2_8;
      if (UNLIKELY(needsOrder)) goto case_2_h_s9;
      goto case_2_18;
    case_2_h_s11:
    case 49UL:
      if (equal(switch2, (NAMSTR(s_ss86160f07, "template")))) goto case_2_11;
      if (UNLIKELY(needsOrder)) goto case_2_h_s12;
      goto case_2_18;
    case_2_h_s16:
    case 54UL:
      if (equal(switch2, (NAMSTR(s_ssa6b18b7c, "ldelim")))) goto case_2_16;
      if (UNLIKELY(needsOrder)) goto case_2_h_s17;
      goto case_2_18;
    case_2_h_s14:
    case 57UL:
      if (equal(switch2, (NAMSTR(s_ss0ec552da, "const")))) goto case_2_14;
      if (UNLIKELY(needsOrder)) goto case_2_h_s15;
      goto case_2_18;
    case_2_h_s15:
    case 60UL:
      if (equal(switch2, (NAMSTR(s_ss80368269, "config")))) goto case_2_15;
      if (UNLIKELY(needsOrder)) goto case_2_h_s16;
      goto case_2_18;
    default: goto case_2_18;
    }
  }
  case_2_0:
    {
      return concat(NAMSTR(s_sse28b5cf0, "$_smarty_tpl->getVariable('smarty')->value"), toString(v_parameter));
    }
  case_2_1:
    {
      return concat(NAMSTR(s_sse28b5cf0, "$_smarty_tpl->getVariable('smarty')->value"), toString(v_parameter));
    }
  case_2_2:
    {
      return concat(NAMSTR(s_ssfcd225c6, "Smarty::$_smarty_vars"), toString(v_parameter));
    }
  case_2_3:
    {
      return NAMSTR(s_ssb7c8fa39, "time()");
    }
  case_2_4:
    {
      {
        bool tmp0;
        {
          bool tmp1 = (LINE(38,(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name));
          if (tmp1) {
            bool tmp2((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true).o_getPublic(NAMSTR(s_ss9633978a, "allow_super_globals"), true))));
            tmp1 = (!(tmp2));
          }
          tmp0 = (tmp1);
        }
        if (tmp0) {
          {
            {
              LINE(39,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = v_compiler;
              mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs66d90978, "(secure mode) super globals not permitted"));
            }
            goto break1;
          }
        }
      }
      v_compiled_ref = NAMSTR(s_ss1689826d, "$_COOKIE");
      goto break1;
    }
  case_2_5:
    {
    }
  case_2_6:
    {
    }
  case_2_7:
    {
    }
  case_2_8:
    {
    }
  case_2_9:
    {
    }
  case_2_10:
    {
      {
        bool tmp0;
        {
          bool tmp1 = (LINE(51,(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name));
          if (tmp1) {
            bool tmp2((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true).o_getPublic(NAMSTR(s_ss9633978a, "allow_super_globals"), true))));
            tmp1 = (!(tmp2));
          }
          tmp0 = (tmp1);
        }
        if (tmp0) {
          {
            {
              LINE(52,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = v_compiler;
              mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs66d90978, "(secure mode) super globals not permitted"));
            }
            goto break1;
          }
        }
      }
      {
        LINE(55,0);
        const String &tmp0((x_strtoupper(v_variable)));
        v_compiled_ref = concat(NAMSTR(s_ss79315724, "$_"), tmp0);
      }
      goto break1;
    }
  case_2_11:
    {
      return NAMSTR(s_ssa2686393, "basename($_smarty_tpl->getTemplateFilepath())");
    }
  case_2_12:
    {
      return NAMSTR(s_ss3f5b748c, "dirname($_smarty_tpl->getTemplateFilepath())");
    }
  case_2_13:
    {
      v__version = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SMARTY_VERSION));
      return concat3(NAMSTR(s_sse07b87c4, "'"), v__version, NAMSTR(s_sse07b87c4, "'"));
    }
  case_2_14:
    {
      {
        bool tmp0;
        {
          bool tmp1 = (LINE(69,(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name));
          if (tmp1) {
            bool tmp2((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true).o_getPublic(NAMSTR(s_ssaa08781b, "allow_constants"), true))));
            tmp1 = (!(tmp2));
          }
          tmp0 = (tmp1);
        }
        if (tmp0) {
          {
            {
              LINE(70,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = v_compiler;
              mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsd4acca2a, "(secure mode) constants not permitted"));
            }
            goto break1;
          }
        }
      }
      {
        LINE(73,0);
        const String &tmp0((toString(v__index.rvalAt(1LL, AccessFlags::Error))));
        const String &tmp1((x_trim(tmp0, NAMSTR(s_sse07b87c4, "'"))));
        return concat(NAMSTR(s_ss285b78dd, "@"), tmp1);
      }
    }
  case_2_15:
    {
      {
        LINE(76,0);
        const String &tmp0((toString(v__index.rvalAt(1LL, AccessFlags::Error))));
        return concat3(NAMSTR(s_ss5bfe8d3a, "$_smarty_tpl->getConfigVariable("), tmp0, NAMSTR(s_ss44beffb9, ")"));
      }
    }
  case_2_16:
    {
      {
        LINE(78,0);
        const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true)));
        v__ldelim.assignVal(tmp0);
      }
      return concat3(NAMSTR(s_sse07b87c4, "'"), toString(v__ldelim), NAMSTR(s_sse07b87c4, "'"));
    }
  case_2_17:
    {
      {
        LINE(82,0);
        const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true)));
        v__rdelim.assignVal(tmp0);
      }
      return concat3(NAMSTR(s_sse07b87c4, "'"), toString(v__rdelim), NAMSTR(s_sse07b87c4, "'"));
    }
  case_2_18:
    {
      {
        LINE(86,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_compiler;
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        const String &tmp1((toString(v__index.rvalAt(0LL, AccessFlags::Error))));
        const String &tmp2((x_trim(tmp1, NAMSTR(s_sse07b87c4, "'"))));
        (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(concat3(NAMSTR(s_ss468d0190, "$smarty."), tmp2, NAMSTR(s_ssdb15cc02, " is invalid"))));
      }
      goto break1;
    }
  break1:;
  {
    bool tmp0;
    {
      tmp0 = (isset(v__index, 1LL));
    }
    if (tmp0) {
      {
        LINE(90,(x_array_shift(ref(v__index))));
        {
          LOOP_COUNTER(3);
          for (ArrayIter iter5 = v__index.begin(s_class_name, true); !iter5.end(); ++iter5) {
            LOOP_COUNTER_CHECK(3);
            iter5.second(v__ind);
            {
              v_compiled_ref = concat4(v_compiled_ref, NAMSTR(s_ssbc769ca5, "["), toString(v__ind), NAMSTR(s_ssb2e1543c, "]"));
            }
          }
        }
      }
    }
  }
  return v_compiled_ref;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Special_Variable() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Special_Variable)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_special_variable.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_special_variable_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_special_variable) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_rdelim.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Rdelim)
const InstanceOfInfo c_Smarty_Internal_Compile_Rdelim::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x64642C2C974E87C6LL,1,"Smarty_Internal_Compile_Rdelim",&cw_Smarty_Internal_Compile_Rdelim},
};
const int c_Smarty_Internal_Compile_Rdelim::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Rdelim::ci_compile((void*)&c_Smarty_Internal_Compile_Rdelim::i_compile, (void*)&c_Smarty_Internal_Compile_Rdelim::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Rdelim::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Rdelim);
  }
  c_Smarty_Internal_Compile_Rdelim *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Rdelim*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Rdelim::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Rdelim::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Rdelim);
  }
  c_Smarty_Internal_Compile_Rdelim *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Rdelim*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Rdelim::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Rdelim::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Rdelim::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Rdelim::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Rdelim = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Rdelim,
  c_Smarty_Internal_Compile_Rdelim::s_call_info_table,c_Smarty_Internal_Compile_Rdelim::s_call_info_index,
  c_Smarty_Internal_Compile_Rdelim::s_instanceof_table,c_Smarty_Internal_Compile_Rdelim::s_instanceof_index,
  &c_Smarty_Internal_Compile_Rdelim::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_rdelim.php line 24 */
Variant c_Smarty_Internal_Compile_Rdelim::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Rdelim, Smarty_Internal_Compile_Rdelim::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Rdelim::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(27,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(28,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          LINE(29,0);
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
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), true);
    tmp_ref.unset();
  }
  {
    return LINE(33,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true)));
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Rdelim() {
  return NEWOBJ(c_Smarty_Internal_Compile_Rdelim)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_rdelim.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_rdelim_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_rdelim) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_svad23e7614,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x691414609BC81C26LL,0,0,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x691414609BC81C26LL,0,0,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Private_Registered_Block hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Private_Registered_Block lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Private_Registered_Function hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Private_Registered_Function lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Private_Registered_Block::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Private_Registered_Function::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+11,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+1,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
