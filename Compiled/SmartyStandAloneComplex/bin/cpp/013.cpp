
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_function.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_function.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_if.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_if.fws.h>

// Dependencies
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_parsetree.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_function.php line 74 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Functionclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Functionclose::s_instanceof_table[] = {
  {0x0C0868FAA9B9E3D0LL,0,"Smarty_Internal_Compile_Functionclose",&cw_Smarty_Internal_Compile_Functionclose},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Functionclose::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Functionclose::ci_compile((void*)&c_Smarty_Internal_Compile_Functionclose::i_compile, (void*)&c_Smarty_Internal_Compile_Functionclose::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Functionclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Functionclose);
  }
  c_Smarty_Internal_Compile_Functionclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Functionclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Functionclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Functionclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Functionclose);
  }
  c_Smarty_Internal_Compile_Functionclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Functionclose*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Functionclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Functionclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Functionclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Functionclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Functionclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Functionclose,
  c_Smarty_Internal_Compile_Functionclose::s_call_info_table,c_Smarty_Internal_Compile_Functionclose::s_call_info_index,
  c_Smarty_Internal_Compile_Functionclose::s_instanceof_table,c_Smarty_Internal_Compile_Functionclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Functionclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_function.php line 83 */
Variant c_Smarty_Internal_Compile_Functionclose::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Functionclose, Smarty_Internal_Compile_Functionclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Functionclose::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v_saved_data;
  String v__name;
  String v_plugins_string;
  Variant v_tmp;
  Variant v_data;
  int64 v_last = 0;
  Variant v_output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(86,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(87,0);
    const Variant &tmp0((t__close_tag(s_svaf506982f)));
    v_saved_data.assignVal(tmp0);
  }
  {
    LINE(88,0);
    const String &tmp0((toString(v_saved_data.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))));
    const String &tmp1((x_trim(tmp0, NAMSTR(s_ss643ce2bc, "'\""))));
    v__name = tmp1;
    tmp_ref.unset();
  }
  v_plugins_string = NAMSTR(s_ss00000000, "");
  {
    bool tmp0;
    {
      tmp0 = (!(empty(LINE(91,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), false))), NAMSTR(s_ss9094af88, "compiled"), true)));
    }
    if (tmp0) {
      {
        v_plugins_string = NAMSTR(s_ss271d3c8a, "<\?php ");
        {
          LOOP_COUNTER(1);
          Variant map2;
          {
            map2 = LINE(93,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalAt(NAMSTR(s_ss9094af88, "compiled"), AccessFlags::Error_Key)));
          }
          {
            StringBuffer tmp_sbuf_v_plugins_string(512);
            for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
              LOOP_COUNTER_CHECK(1);
              iter3.second(v_tmp);
              {
                {
                  LOOP_COUNTER(4);
                  for (ArrayIter iter6 = v_tmp.begin(s_class_name, true); !iter6.end(); ++iter6) {
                    LOOP_COUNTER_CHECK(4);
                    iter6.second(v_data);
                    {
                      {
                        LINE(95,0);
                        const String &tmp0((toString(v_data.rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key))));
                        const String &tmp1((toString(v_data.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                        tmp_sbuf_v_plugins_string.addWithTaint("if (!is_callable('", 18).addWithTaint(tmp0).addWithTaint("')) include '", 13).addWithTaint(tmp1).addWithTaint("';\n", 3);
                      }
                    }
                  }
                }
              }
            }
            concat_assign(v_plugins_string, tmp_sbuf_v_plugins_string.detachWithTaint());
          }
        }
        concat_assign(v_plugins_string, NAMSTR(s_ssf7e13165, "\?>"));
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (!(empty(LINE(100,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), false))), NAMSTR(s_ss8b74ea02, "nocache"), true)));
    }
    if (tmp0) {
      {
        {
          LINE(101,0);
          const String &tmp0((toString(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
          concat_assign(v_plugins_string, concat3(NAMSTR(s_ss72c8c61c, "<\?php echo '/*%%SmartyNocache:"), tmp0, NAMSTR(s_ss7b05e9d5, "%%*/<\?php ")));
        }
        {
          LOOP_COUNTER(7);
          Variant map8;
          {
            map8 = LINE(102,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true).rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
          }
          {
            StringBuffer tmp_sbuf_v_plugins_string(512);
            for (ArrayIter iter9 = map8.begin(s_class_name, true); !iter9.end(); iter9.next()) {
              LOOP_COUNTER_CHECK(7);
              iter9.second(v_tmp);
              {
                {
                  LOOP_COUNTER(10);
                  for (ArrayIter iter12 = v_tmp.begin(s_class_name, true); !iter12.end(); ++iter12) {
                    LOOP_COUNTER_CHECK(10);
                    iter12.second(v_data);
                    {
                      {
                        LINE(104,0);
                        const String &tmp0((toString(v_data.rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key))));
                        const String &tmp1((toString(v_data.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                        tmp_sbuf_v_plugins_string.addWithTaint("if (!is_callable(\\'", 19).addWithTaint(tmp0).addWithTaint("\\')) include \\'", 15).addWithTaint(tmp1).addWithTaint("\\';\n", 4);
                      }
                    }
                  }
                }
              }
            }
            concat_assign(v_plugins_string, tmp_sbuf_v_plugins_string.detachWithTaint());
          }
        }
        {
          LINE(107,0);
          const String &tmp0((toString(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
          concat_assign(v_plugins_string, concat3(NAMSTR(s_ss9dd89083, "\?>/*/%%SmartyNocache:"), tmp0, NAMSTR(s_sscfc28681, "%%*/';\?>\n")));
        }
      }
    }
  }
  {
    LINE(110,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true).o_getPublic(NAMSTR(s_ss8ac00204, "subtrees"), true)));
    int tmp1((x_count(tmp0)));
    int64 tmp2(((tmp1 - 1LL)));
    v_last = tmp2;
  }
  {
    bool tmp0;
    {
      LINE(111,0);
      const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true).o_getPublic(NAMSTR(s_ss8ac00204, "subtrees"), true).rvalAt(v_last, AccessFlags::Error)));
      tmp0 = (instanceOf(tmp1, NAMSTR(s_ss5b9943c5, "_smarty_linebreak")));
    }
    if (tmp0) {
      {
        {
          LINE(112,(v_compiler.o_unsetLval(NAMSTR(s_ss1d4f2d02, "parser"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ss8ce16784, "current_buffer"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ss8ac00204, "subtrees"), tmp_ref, s_class_name))).weakRemove(v_last);
          tmp_ref.unset();
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(115,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
    }
    if (tmp0) {
      {
        {
          LINE(117,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
          String tmp2((v_plugins_string));
          LINE(116,(lval(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::CheckExist_Key)).lvalAt(v__name, AccessFlags::CheckExist)))).setOpEqual(273, NAMSTR(s_ss9094af88, "compiled"), (concat(tmp2, tmp1)), true);
          tmp_ref.unset();
        }
        {
          LINE(118,0);
          const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
          lval(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::CheckExist_Key)).lvalAt(v__name, AccessFlags::CheckExist)).set(NAMSTR(s_ss73233481, "nocache_hash"), (tmp0), true);
          tmp_ref.unset();
        }
        {
          LINE(119,0);
          const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true)));
          lval(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::CheckExist_Key)).lvalAt(v__name, AccessFlags::CheckExist)).set(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), (tmp0), true);
          tmp_ref.unset();
        }
        {
          LINE(120,0);
          const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalRef(NAMSTR(s_ss52403931, "function"), tmp_ref, AccessFlags::Error_Key).rvalAt(v__name, AccessFlags::Error)));
          v_compiler.o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss57c82ef4, "template_functions"), tmp_ref, s_class_name).set(v__name, (tmp0));
          tmp_ref.unset();
        }
        v_compiler.o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), false);
        v_output = true;
      }
    }
    else {
      {
        {
          LINE(124,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
          String tmp2((v_plugins_string));
          v_output = concat3(tmp2, tmp1, NAMSTR(s_ss6551d65a, "<\?php $_smarty_tpl->tpl_vars = $saved_tpl_vars;}}\?>\n"));
        }
      }
    }
  }
  {
    LINE(127,0);
    const Variant &tmp0((v_saved_data.rvalAt(1LL, AccessFlags::Error)));
    v_compiler.o_lval(NAMSTR(s_ss1d4f2d02, "parser"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8ce16784, "current_buffer"), tmp0);
    tmp_ref.unset();
  }
  {
    LINE(128,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true)));
    const Variant &tmp1((v_saved_data.rvalAt(2LL, AccessFlags::Error)));
    Primitive tmp2((bitwise_or(tmp0, tmp1)));
    v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), tmp2);
    tmp_ref.unset();
  }
  {
    LINE(129,0);
    const Variant &tmp0((v_saved_data.rvalAt(3LL, AccessFlags::Error)));
    v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_sscfae774a, "required_plugins"), tmp0);
    tmp_ref.unset();
  }
  return v_output;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_function.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Function)
const InstanceOfInfo c_Smarty_Internal_Compile_Function::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x72D401FBF4E6E40BLL,1,"Smarty_Internal_Compile_Function",&cw_Smarty_Internal_Compile_Function},
};
const int c_Smarty_Internal_Compile_Function::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Function::ci_compile((void*)&c_Smarty_Internal_Compile_Function::i_compile, (void*)&c_Smarty_Internal_Compile_Function::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Function::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Function);
  }
  c_Smarty_Internal_Compile_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Function*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Function::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Function::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Function);
  }
  c_Smarty_Internal_Compile_Function *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Function*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Function::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Function::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Function::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Function::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Function = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Function,
  c_Smarty_Internal_Compile_Function::s_call_info_table,c_Smarty_Internal_Compile_Function::s_call_info_index,
  c_Smarty_Internal_Compile_Function::s_instanceof_table,c_Smarty_Internal_Compile_Function::s_instanceof_index,
  &c_Smarty_Internal_Compile_Function::s_class_name,
  &c_Smarty_Internal_Compile_Function::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Function::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa6b3e86d0;
  m_shorttag_order = s_sa6b3e86d0;
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_function.php line 29 */
bool c_Smarty_Internal_Compile_Function::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Function, Smarty_Internal_Compile_Function::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Function::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Variant v__attr;
  Variant v_save;
  Variant v__name;
  Variant v__smarty_tpl;
  Variant v__key;
  Variant v__data;
  Variant v_tmp;
  Variant v_output;

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
  v__attr.weakRemove(NAMSTR(s_ss8b74ea02, "nocache"), true);
  {
    Variant tmp1((v__attr));
    LINE(39,0);
    const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true)));
    LINE(40,0);
    const Variant &tmp3((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true)));
    const Variant &tmp4((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true)));
    ArrayInit tmp0(array_createvi(4, toVPOD(tmp1), toVPOD(tmp2), toVPOD(tmp3), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp0)));
    v_save = tmp5;
  }
  LINE(41,(t__open_tag(NAMVAR(s_svs52403931, "function"), v_save)));
  {
    LINE(42,0);
    const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))));
    const String &tmp1((x_trim(tmp0, NAMSTR(s_ss643ce2bc, "'\""))));
    v__name = tmp1;
  }
  v__attr.weakRemove(NAMSTR(s_ssdc3cbddc, "name"), true);
  {
    LINE(44,(lval(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::CheckExist_Key)).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ssf56bac6b, "parameter"), (s_sva00000000), true);
    tmp_ref.unset();
  }
  {
    LINE(45,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
    v__smarty_tpl.assignVal(tmp0);
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v__attr.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__data);
      v__key.assignVal(iter3.first());
      {
        LINE(47,(f_eval(concat3(NAMSTR(s_ss8ef7202e, "$tmp="), toString(v__data), NAMSTR(s_ss0286c0cc, ";")))));
        {
          Variant tmp0((v_tmp));
          LINE(48,(lval(lval(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::CheckExist_Key)).lvalAt(v__name, AccessFlags::CheckExist)).lvalAt(NAMSTR(s_ssf56bac6b, "parameter"), AccessFlags::CheckExist_Key)))).set(v__key, (tmp0));
          tmp_ref.unset();
        }
      }
    }
  }
  {
    LINE(50,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalRef(NAMSTR(s_ss52403931, "function"), tmp_ref, AccessFlags::Error_Key).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssf56bac6b, "parameter"), AccessFlags::Error_Key)));
    lval(v_compiler.o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss57c82ef4, "template_functions"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)).set(NAMSTR(s_ssf56bac6b, "parameter"), (tmp0), true);
    tmp_ref.unset();
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(51,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
    }
    if (tmp0) {
      {
        v_output = NAMSTR(s_ss00000000, "");
      }
    }
    else {
      {
        v_output = StringBuffer().addWithTaint("<\?php if (!function_exists('smarty_template_function_", 53).addWithTaint(toString(v__name)).addWithTaint("')) {\n    function smarty_template_function_", 44).addWithTaint(toString(v__name)).addWithTaint("($_smarty_tpl,$params) {\n    $saved_tpl_vars = $_smarty_tpl->tpl_vars;\n    foreach ($_smarty_tpl->template_functions['", 118).addWithTaint(toString(v__name)).addWithTaint("']['parameter'] as $key => $value) {$_smarty_tpl->tpl_vars[$key] = new Smarty_variable($value);};\n    foreach ($params as $key => $value) {$_smarty_tpl->tpl_vars[$key] = new Smarty_variable($value);}\?>", 201).detachWithTaint();
      }
    }
  }
  {
    LINE(61,(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_sscfae774a, "required_plugins"), s_sa6e013c4d);
    tmp_ref.unset();
  }
  {
    p__smarty_template_buffer tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss172b5002, "_smarty_template_buffer"), &g->CDEC(_smarty_template_buffer))), (coo__smarty_template_buffer()));
    LINE(62,0);
    const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true)));
    ((c__smarty_template_buffer*)tmp0.get()->create(tmp1));
    v_compiler.o_lval(NAMSTR(s_ss1d4f2d02, "parser"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8ce16784, "current_buffer"), tmp0);
    tmp_ref.unset();
  }
  {
    LINE(63,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ssca2ba055, "append_subtree"), 0x278E3AB52EABB542LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    p__smarty_tag tmp1 = ((checkClassExistsThrow(NAMSTR(s_sse95d3705, "_smarty_tag"), &g->CDEC(_smarty_tag))), (coo__smarty_tag()));
    const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true)));
    ((c__smarty_tag*)tmp1.get()->create(tmp2, v_output));
    (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(tmp1));
  }
  {
    LINE(64,(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), false);
    tmp_ref.unset();
  }
  v_compiler.o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), false);
  {
    LINE(66,(lval(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).lvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::CheckExist_Key)).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss9094af88, "compiled"), (NAMVAR(s_svs00000000, "")), true);
    tmp_ref.unset();
  }
  return true;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Functionclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Functionclose)();
}
ObjectData *coo_Smarty_Internal_Compile_Function() {
  return NEWOBJ(c_Smarty_Internal_Compile_Function)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_function.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_function_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_function) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_functionclose) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_If)
const InstanceOfInfo c_Smarty_Internal_Compile_If::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x512A6B699F4CEE2ALL,1,"Smarty_Internal_Compile_If",&cw_Smarty_Internal_Compile_If},
};
const int c_Smarty_Internal_Compile_If::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_If::ci_compile((void*)&c_Smarty_Internal_Compile_If::i_compile, (void*)&c_Smarty_Internal_Compile_If::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_If::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_If);
  }
  c_Smarty_Internal_Compile_If *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_If*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_If::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_If::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_If);
  }
  c_Smarty_Internal_Compile_If *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_If*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_If::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_If::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_If::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_If::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_If = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_If,
  c_Smarty_Internal_Compile_If::s_call_info_table,c_Smarty_Internal_Compile_If::s_call_info_index,
  c_Smarty_Internal_Compile_If::s_instanceof_table,c_Smarty_Internal_Compile_If::s_instanceof_index,
  &c_Smarty_Internal_Compile_If::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 24 */
Variant c_Smarty_Internal_Compile_If::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_If, Smarty_Internal_Compile_If::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_If::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
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
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    ArrayInit tmp0(array_createvi(2, toVPOD(NAMVAR(s_svib794f8ce, 1LL)), toVPOD(tmp1)));
    const Array &tmp2((Array(tmp0)));
    t__open_tag(NAMVAR(s_svs41caaed6, "if"), VarNR(tmp2));
  }
  {
    LINE(31,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    Primitive tmp2((bitwise_or(tmp0, tmp1)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
    tmp_ref.unset();
  }
  {
    bool tmp0;
    {
      LINE(32,0);
      const Variant &tmp1((v_parameter.rvalAt(NAMSTR(s_ss2bd51974, "if condition"), AccessFlags::Error_Key)));
      tmp0 = (x_is_array(tmp1));
    }
    if (tmp0) {
      {
        if (LINE(33,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
          {
            v__nocache = NAMSTR(s_ssf0dada3b, ",true");
            {
              bool tmp0;
              {
                LINE(36,0);
                const Variant &tmp1((v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0 = (x_is_array(tmp1));
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  {
                    LINE(37,0);
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
                    LINE(39,0);
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
            LINE(44,0);
            const Variant &tmp1((v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
            tmp0 = (x_is_array(tmp1));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                StringBuffer tmp0_buf;
                tmp0_buf.appendWithTaint("<\?php if (!isset($_smarty_tpl->tpl_vars[", 40);
                tmp0_buf.appendWithTaint(LINE(45,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                tmp0_buf.appendWithTaint("if ($_smarty_tpl->tpl_vars[", 27);
                tmp0_buf.appendWithTaint(LINE(46,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                tmp0_buf.appendWithTaint(LINE(48,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                LINE(49,0);
                const String &tmp0((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                const String &tmp1((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
                concat_assign(v__output, concat5(NAMSTR(s_ssce8d7b94, "if ($_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ss0d3dfdc8, "]->value = "), tmp1, NAMSTR(s_ss013c5282, "){\?>")));
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
          LINE(53,0);
          const String &tmp0((toString(v_parameter.rvalAt(NAMSTR(s_ss2bd51974, "if condition"), AccessFlags::Error_Key))));
          return concat3(NAMSTR(s_ss31760838, "<\?php if ("), tmp0, NAMSTR(s_ss013c5282, "){\?>"));
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 83 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Elseif)
const InstanceOfInfo c_Smarty_Internal_Compile_Elseif::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x63C9AA6F18FB113BLL,1,"Smarty_Internal_Compile_Elseif",&cw_Smarty_Internal_Compile_Elseif},
};
const int c_Smarty_Internal_Compile_Elseif::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Elseif::ci_compile((void*)&c_Smarty_Internal_Compile_Elseif::i_compile, (void*)&c_Smarty_Internal_Compile_Elseif::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Elseif::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Elseif);
  }
  c_Smarty_Internal_Compile_Elseif *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Elseif*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Elseif::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Elseif::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Elseif);
  }
  c_Smarty_Internal_Compile_Elseif *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Elseif*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Elseif::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Elseif::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Elseif::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Elseif::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Elseif = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Elseif,
  c_Smarty_Internal_Compile_Elseif::s_call_info_table,c_Smarty_Internal_Compile_Elseif::s_call_info_index,
  c_Smarty_Internal_Compile_Elseif::s_instanceof_table,c_Smarty_Internal_Compile_Elseif::s_instanceof_index,
  &c_Smarty_Internal_Compile_Elseif::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 92 */
Variant c_Smarty_Internal_Compile_Elseif::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Elseif, Smarty_Internal_Compile_Elseif::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Elseif::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v_nesting;
  bool v_condition_by_assign = false;
  String v__nocache;
  String v__output;
  String v_tmp;
  Variant v_code;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(96,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(98,0);
    CVarRef tmp0((t__close_tag(s_svaaeced8d5)));
    v_compiler.o_set(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp0[1], s_class_name);
    v_nesting = tmp0[0];
    ;
  }
  {
    bool tmp0;
    {
      LINE(100,0);
      const Variant &tmp1((v_parameter.rvalAt(NAMSTR(s_ss2bd51974, "if condition"), AccessFlags::Error_Key)));
      tmp0 = (x_is_array(tmp1));
    }
    if (tmp0) {
      {
        v_condition_by_assign = true;
        if (LINE(102,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
          {
            v__nocache = NAMSTR(s_ssf0dada3b, ",true");
            {
              bool tmp0;
              {
                LINE(105,0);
                const Variant &tmp1((v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0 = (x_is_array(tmp1));
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  {
                    LINE(106,0);
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
                    LINE(108,0);
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
      }
    }
    else {
      {
        v_condition_by_assign = false;
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_empty(NAMSTR(s_ssc5d15748, "prefix_code"), s_class_name));
    }
    if (tmp0) {
      {
        if (v_condition_by_assign) {
          {
            {
              const Numeric &tmp1(((v_nesting + 1LL)));
              LINE(119,0);
              const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
              ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2)));
              const Array &tmp3((Array(tmp0)));
              t__open_tag(NAMVAR(s_svs234ce62e, "elseif"), VarNR(tmp3));
            }
            {
              bool tmp0;
              {
                LINE(120,0);
                const Variant &tmp1((v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0 = (x_is_array(tmp1));
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  {
                    StringBuffer tmp0_buf;
                    tmp0_buf.appendWithTaint("<\?php }else{ if (!isset($_smarty_tpl->tpl_vars[", 47);
                    tmp0_buf.appendWithTaint(LINE(121,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                    tmp0_buf.appendWithTaint("if ($_smarty_tpl->tpl_vars[", 27);
                    tmp0_buf.appendWithTaint(LINE(122,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                    tmp0_buf.appendWithTaint("<\?php }else{ $_smarty_tpl->tpl_vars[", 36);
                    tmp0_buf.appendWithTaint(LINE(124,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                    LINE(125,0);
                    const String &tmp0((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                    const String &tmp1((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
                    concat_assign(v__output, concat5(NAMSTR(s_ssce8d7b94, "if ($_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ss0d3dfdc8, "]->value = "), tmp1, NAMSTR(s_ss013c5282, "){\?>")));
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
              Variant tmp1((v_nesting));
              LINE(129,0);
              const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
              ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2)));
              const Array &tmp3((Array(tmp0)));
              t__open_tag(NAMVAR(s_svs234ce62e, "elseif"), VarNR(tmp3));
            }
            {
              LINE(130,0);
              const String &tmp0((toString(v_parameter.rvalAt(NAMSTR(s_ss2bd51974, "if condition"), AccessFlags::Error_Key))));
              return concat3(NAMSTR(s_ss904eadac, "<\?php }elseif("), tmp0, NAMSTR(s_ss013c5282, "){\?>"));
            }
          }
        }
      }
    }
    else {
      {
        v_tmp = NAMSTR(s_ss00000000, "");
        {
          LOOP_COUNTER(1);
          Variant map2 = LINE(134,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ssc5d15748, "prefix_code"), true)));
          {
            StringBuffer tmp_sbuf_v_tmp(512);
            for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
              LOOP_COUNTER_CHECK(1);
              iter3.second(v_code);
              tmp_sbuf_v_tmp.addWithTaint(toString(v_code));
            }
            concat_assign(v_tmp, tmp_sbuf_v_tmp.detachWithTaint());
          }
        }
        {
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ssc5d15748, "prefix_code"), s_sa00000000);
          tmp_ref.unset();
        }
        {
          const Numeric &tmp1(((v_nesting + 1LL)));
          LINE(136,0);
          const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
          ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2)));
          const Array &tmp3((Array(tmp0)));
          t__open_tag(NAMVAR(s_svs234ce62e, "elseif"), VarNR(tmp3));
        }
        if (v_condition_by_assign) {
          {
            {
              bool tmp0;
              {
                LINE(138,0);
                const Variant &tmp1((v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
                tmp0 = (x_is_array(tmp1));
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  {
                    StringBuffer tmp0_buf;
                    tmp0_buf.appendWithTaint("<\?php }else{\?>", 14);
                    tmp0_buf.appendWithTaint(v_tmp);
                    tmp0_buf.appendWithTaint("<\?php  if (!isset($_smarty_tpl->tpl_vars[", 41);
                    tmp0_buf.appendWithTaint(LINE(139,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                    tmp0_buf.appendWithTaint("if ($_smarty_tpl->tpl_vars[", 27);
                    tmp0_buf.appendWithTaint(LINE(140,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ssc9042120, "var"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                    tmp0_buf.appendWithTaint("<\?php }else{\?>", 14);
                    tmp0_buf.appendWithTaint(v_tmp);
                    tmp0_buf.appendWithTaint("<\?php $_smarty_tpl->tpl_vars[", 29);
                    tmp0_buf.appendWithTaint(LINE(142,(toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)))));
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
                    LINE(143,0);
                    const String &tmp0((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                    const String &tmp1((toString(v_parameter.rvalRef(NAMSTR(s_ss2bd51974, "if condition"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
                    concat_assign(v__output, concat5(NAMSTR(s_ssce8d7b94, "if ($_smarty_tpl->tpl_vars["), tmp0, NAMSTR(s_ss0d3dfdc8, "]->value = "), tmp1, NAMSTR(s_ss013c5282, "){\?>")));
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
              String tmp0((v_tmp));
              LINE(147,0);
              const String &tmp1((toString(v_parameter.rvalAt(NAMSTR(s_ss2bd51974, "if condition"), AccessFlags::Error_Key))));
              return concat5(NAMSTR(s_ssf30016b9, "<\?php }else{\?>"), tmp0, NAMSTR(s_ss31760838, "<\?php if ("), tmp1, NAMSTR(s_ss013c5282, "){\?>"));
            }
          }
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 61 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Else)
const InstanceOfInfo c_Smarty_Internal_Compile_Else::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x3D266BDF2B6A8BA7LL,1,"Smarty_Internal_Compile_Else",&cw_Smarty_Internal_Compile_Else},
};
const int c_Smarty_Internal_Compile_Else::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Else::ci_compile((void*)&c_Smarty_Internal_Compile_Else::i_compile, (void*)&c_Smarty_Internal_Compile_Else::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Else::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Else);
  }
  c_Smarty_Internal_Compile_Else *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Else*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Else::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Else::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Else);
  }
  c_Smarty_Internal_Compile_Else *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Else*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Else::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Else::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Else::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Else::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Else = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Else,
  c_Smarty_Internal_Compile_Else::s_call_info_table,c_Smarty_Internal_Compile_Else::s_call_info_index,
  c_Smarty_Internal_Compile_Else::s_instanceof_table,c_Smarty_Internal_Compile_Else::s_instanceof_index,
  &c_Smarty_Internal_Compile_Else::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 70 */
String c_Smarty_Internal_Compile_Else::t_compile(CVarRef v_args, Variant v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Else, Smarty_Internal_Compile_Else::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Else::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Variant v_nesting;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(73,0);
    CVarRef tmp0((t__close_tag(s_svaaeced8d5)));
    v_compiler.o_set(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp0[1], s_class_name);
    v_nesting = tmp0[0];
    ;
  }
  {
    Variant tmp1((v_nesting));
    LINE(74,0);
    const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2)));
    const Array &tmp3((Array(tmp0)));
    t__open_tag(NAMVAR(s_svs77ac7aa8, "else"), VarNR(tmp3));
  }
  return NAMSTR(s_ssfb24404d, "<\?php }else{ \?>");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 156 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Ifclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Ifclose::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x76433EF7EEF5E409LL,1,"Smarty_Internal_Compile_Ifclose",&cw_Smarty_Internal_Compile_Ifclose},
};
const int c_Smarty_Internal_Compile_Ifclose::s_instanceof_index[] = {
  3,
  0,1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Ifclose::ci_compile((void*)&c_Smarty_Internal_Compile_Ifclose::i_compile, (void*)&c_Smarty_Internal_Compile_Ifclose::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Ifclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Ifclose);
  }
  c_Smarty_Internal_Compile_Ifclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Ifclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Ifclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Ifclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Ifclose);
  }
  c_Smarty_Internal_Compile_Ifclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Ifclose*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Ifclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Ifclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Ifclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Ifclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Ifclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Ifclose,
  c_Smarty_Internal_Compile_Ifclose::s_call_info_table,c_Smarty_Internal_Compile_Ifclose::s_call_info_index,
  c_Smarty_Internal_Compile_Ifclose::s_instanceof_table,c_Smarty_Internal_Compile_Ifclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Ifclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_if.php line 165 */
String c_Smarty_Internal_Compile_Ifclose::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Ifclose, Smarty_Internal_Compile_Ifclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Ifclose::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Variant v_nesting;
  String v_tmp;
  int64 v_i = 0;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  if (LINE(169,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
    }
  }
  {
    LINE(172,0);
    CVarRef tmp0((t__close_tag(s_svac779a816)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_set(NAMSTR(s_ss8b74ea02, "nocache"), tmp0[1], s_class_name);
    v_nesting = tmp0[0];
    ;
    tmp_ref.unset();
  }
  v_tmp = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(1);
    v_i = 0LL;
    {
      StringBuffer tmp_sbuf_v_tmp(512);
      for (; (less(v_i, v_nesting)); v_i++) {
        LOOP_COUNTER_CHECK(1);
        tmp_sbuf_v_tmp.addWithTaint("}", 1);
      }
      concat_assign(v_tmp, tmp_sbuf_v_tmp.detachWithTaint());
    }
  }
  return concat3(NAMSTR(s_ss271d3c8a, "<\?php "), v_tmp, NAMSTR(s_ssf7e13165, "\?>"));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_If() {
  return NEWOBJ(c_Smarty_Internal_Compile_If)();
}
ObjectData *coo_Smarty_Internal_Compile_Elseif() {
  return NEWOBJ(c_Smarty_Internal_Compile_Elseif)();
}
ObjectData *coo_Smarty_Internal_Compile_Else() {
  return NEWOBJ(c_Smarty_Internal_Compile_Else)();
}
ObjectData *coo_Smarty_Internal_Compile_Ifclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Ifclose)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_if.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_if_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_if) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_else) = true;
  g->CDEC(smarty_internal_compile_elseif) = true;
  g->CDEC(smarty_internal_compile_ifclose) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva6b3e86d0,
  (int64)&s_svad23e7614,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,1,0,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Function hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Function lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Function::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
