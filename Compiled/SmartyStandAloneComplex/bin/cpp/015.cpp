
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_insert.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_insert.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_ldelim.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_ldelim.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_nocache.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_nocache.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_block_plugin.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_block_plugin.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_function_plugin.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_private_function_plugin.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_insert.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Insert)
const InstanceOfInfo c_Smarty_Internal_Compile_Insert::s_instanceof_table[] = {
  {0x2AC97CE16BC6802CLL,0,"Smarty_Internal_Compile_Insert",&cw_Smarty_Internal_Compile_Insert},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Insert::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Insert::ci_compile((void*)&c_Smarty_Internal_Compile_Insert::i_compile, (void*)&c_Smarty_Internal_Compile_Insert::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Insert::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Insert);
  }
  c_Smarty_Internal_Compile_Insert *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Insert*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Insert::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Insert::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Insert);
  }
  c_Smarty_Internal_Compile_Insert *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Insert*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Insert::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Insert::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Insert::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Insert::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Insert = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Insert,
  c_Smarty_Internal_Compile_Insert::s_call_info_table,c_Smarty_Internal_Compile_Insert::s_call_info_index,
  c_Smarty_Internal_Compile_Insert::s_instanceof_table,c_Smarty_Internal_Compile_Insert::s_instanceof_index,
  &c_Smarty_Internal_Compile_Insert::s_class_name,
  &c_Smarty_Internal_Compile_Insert::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Insert::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa6b3e86d0;
  m_shorttag_order = s_sa6b3e86d0;
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_insert.php line 29 */
Variant c_Smarty_Internal_Compile_Insert::t_compile(Variant v_args, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Insert, Smarty_Internal_Compile_Insert::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Insert::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Variant v__attr;
  Variant v__smarty_tpl;
  Variant v__name;
  Variant v__script;
  Variant v__output;
  Variant v__assign;
  Variant v__function;
  Variant v__filepath;
  Variant v__dir;
  Variant v__script_dir;
  Variant v__paramsArray;
  Variant v__key;
  Variant v__value;
  Variant v__params;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_args; Variant &v_compiler; Variant &v__attr; Variant &v__smarty_tpl; Variant &v__name; Variant &v__script; Variant &v__output; Variant &v__assign; Variant &v__function; Variant &v__filepath; Variant &v__dir; Variant &v__script_dir; Variant &v__paramsArray; Variant &v__key; Variant &v__value; Variant &v__params;
    VariableTable(Variant &r_args, Variant &r_compiler, Variant &r__attr, Variant &r__smarty_tpl, Variant &r__name, Variant &r__script, Variant &r__output, Variant &r__assign, Variant &r__function, Variant &r__filepath, Variant &r__dir, Variant &r__script_dir, Variant &r__paramsArray, Variant &r__key, Variant &r__value, Variant &r__params) : v_args(r_args), v_compiler(r_compiler), v__attr(r__attr), v__smarty_tpl(r__smarty_tpl), v__name(r__name), v__script(r__script), v__output(r__output), v__assign(r__assign), v__function(r__function), v__filepath(r__filepath), v__dir(r__dir), v__script_dir(r__script_dir), v__paramsArray(r__paramsArray), v__key(r__key), v__value(r__value), v__params(r__params) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 31) {
        case 0:
          HASH_RETURN_NAMSTR(0x454111CB171F01A0LL, s_ss5f094764, v__params,
                             7);
          break;
        case 1:
          HASH_RETURN_NAMSTR(0x566B663D361EF541LL, s_ss57b4125f, v__filepath,
                             9);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x30C6A46FDCFD7326LL, s_ssf757c074, v__value,
                             6);
          break;
        case 7:
          HASH_RETURN_NAMSTR(0x69FAFAC002C17347LL, s_ssb06a10db, v__function,
                             9);
          HASH_RETURN_NAMSTR(0x77B5B854A546D4E7LL, s_ss58a1939e, v__dir,
                             4);
          break;
        case 9:
          HASH_RETURN_NAMSTR(0x72CB03F3A2CF7389LL, s_ssddcdc9ba, v__smarty_tpl,
                             11);
          HASH_RETURN_NAMSTR(0x6C2E2F7FE9DC8A09LL, s_ssee3a4fdd, v__name,
                             5);
          break;
        case 13:
          HASH_RETURN_NAMSTR(0x040AFD6F14CB454DLL, s_ssf7149bbe, v__script_dir,
                             11);
          break;
        case 14:
          HASH_RETURN_NAMSTR(0x7A24AFD8ADE43B8ELL, s_ssf976719e, v_args,
                             4);
          break;
        case 16:
          HASH_RETURN_NAMSTR(0x3EC9B7DAE6B6E650LL, s_ss2e02e7b4, v__attr,
                             5);
          break;
        case 17:
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 18:
          HASH_RETURN_NAMSTR(0x5ED2D3526E8DF8D2LL, s_ss0282ae4f, v_compiler,
                             8);
          HASH_RETURN_NAMSTR(0x025DEEFE813BB652LL, s_ss497380cd, v__script,
                             7);
          HASH_RETURN_NAMSTR(0x736CD58C3C224B52LL, s_ss0e0d220f, v__output,
                             7);
          break;
        case 29:
          HASH_RETURN_NAMSTR(0x05756FC30E095ADDLL, s_ss9cf49742, v__paramsArray,
                             12);
          break;
        case 30:
          HASH_RETURN_NAMSTR(0x0708B374B502DFBELL, s_ss6e40bfd4, v__assign,
                             7);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_args, v_compiler, v__attr, v__smarty_tpl, v__name, v__script, v__output, v__assign, v__function, v__filepath, v__dir, v__script_dir, v__paramsArray, v__key, v__value, v__params);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(33,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss60f44ecc, "suppressNocacheProcessing"), true);
    tmp_ref.unset();
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
    tmp_ref.unset();
  }
  {
    LINE(37,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
    v__smarty_tpl.assignVal(tmp0);
  }
  setNull(v__name);
  setNull(v__script);
  v__output = NAMSTR(s_ss271d3c8a, "<\?php ");
  {
    LINE(43,0);
    const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))));
    f_eval(concat3(NAMSTR(s_ss967677aa, "$_name = "), tmp0, NAMSTR(s_ss0286c0cc, ";")));
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true));
    }
    if (tmp0) {
      {
        {
          LINE(46,0);
          const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          v__assign.assignVal(tmp0);
        }
        {
          LINE(48,0);
          const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key))));
          const String &tmp1((x_trim(tmp0, NAMSTR(s_sse07b87c4, "'"))));
          const p_Smarty_Variable &tmp2((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create(null, true))))));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref, s_class_name).set(tmp1, (VarNR(tmp2)));
          tmp_ref.unset();
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ssc9ff0a38, "script"), true));
    }
    if (tmp0) {
      {
        v__function = concat(NAMSTR(s_ssce3ef993, "smarty_insert_"), toString(v__name));
        {
          LINE(53,0);
          const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
          v__smarty_tpl.assignVal(tmp0);
        }
        v__filepath = false;
        {
          LINE(55,0);
          const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ssc9ff0a38, "script"), AccessFlags::Error_Key))));
          f_eval(concat3(NAMSTR(s_ss1aa9d24b, "$_script = "), tmp0, NAMSTR(s_ss0286c0cc, ";")));
        }
        {
          bool tmp0;
          {
            tmp0 = ((!(LINE(56,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name)) && x_file_exists(toString(v__script))));
          }
          if (tmp0) {
            {
              v__filepath.assignVal(v__script);
            }
          }
          else {
            {
              {
                bool tmp0;
                {
                  tmp0 = (LINE(59,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name));
                }
                if (tmp0) {
                  {
                    {
                      LINE(60,0);
                      const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true).o_getPublic(NAMSTR(s_ss134c1e88, "trusted_dir"), true)));
                      v__dir.assignVal(tmp0);
                    }
                  }
                }
                else {
                  {
                    {
                      LINE(62,0);
                      const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss134c1e88, "trusted_dir"), true)));
                      v__dir.assignVal(tmp0);
                    }
                  }
                }
              }
              if (!(empty(v__dir))) {
                {
                  {
                    LOOP_COUNTER(1);
                    Variant map2 = (toArray(v__dir));
                    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                      LOOP_COUNTER_CHECK(1);
                      iter3.second(v__script_dir);
                      {
                        {
                          bool tmp0;
                          {
                            LINE(66,0);
                            const Variant &tmp1((x_substr(toString(v__script_dir), toInt32(-1LL))));
                            const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
                            tmp0 = (same(tmp2, false));
                          }
                          if (tmp0) {
                            {
                              concat_assign(v__script_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
                            }
                          }
                        }
                        if (LINE(69,(x_file_exists(concat(toString(v__script_dir), toString(v__script)))))) {
                          {
                            v__filepath = concat(toString(v__script_dir), toString(v__script));
                            break;
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
        if (equal(v__filepath, false)) {
          {
            {
              LINE(77,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
              mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              const String &tmp1((toString(v__script)));
              const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
              (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss09b9d125, "{insert} missing script file '"), tmp1, NAMSTR(s_sse07b87c4, "'"))), tmp2);
            }
          }
        }
        concat_assign(v__output, concat3(NAMSTR(s_ss48386209, "require_once '"), toString(v__filepath), NAMSTR(s_ss9eb18b2b, "' ;")));
        LINE(81,(require(toString(v__filepath), true, variables, "Smarty/libs/sysplugins/")));
        {
          bool tmp0;
          {
            LINE(82,0);
            bool tmp1((x_is_callable(v__function)));
            tmp0 = (!(tmp1));
          }
          if (tmp0) {
            {
              {
                LINE(83,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const String &tmp1((toString(v__function)));
                const String &tmp2((toString(v__script)));
                const Variant &tmp3((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat5(NAMSTR(s_ss12809bfc, " {insert} function '"), tmp1, NAMSTR(s_ss052aa923, "' is not callable in script file '"), tmp2, NAMSTR(s_sse07b87c4, "'"))), tmp3);
              }
            }
          }
        }
      }
    }
    else {
      {
        v__filepath = NAMSTR(s_ssf927ff2c, "null");
        v__function = concat(NAMSTR(s_ss83a27f08, "insert_"), toString(v__name));
        {
          bool tmp0;
          {
            LINE(89,0);
            bool tmp1((x_is_callable(v__function)));
            tmp0 = (!(tmp1));
          }
          if (tmp0) {
            {
              {
                bool tmp0;
                {
                  LINE(91,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                  mcp1.methodCall((obj1), NAMSTR(s_ssf4b91571, "getPlugin"), 0x2FF10671E4B60176LL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  Variant tmp2(((mcp1.ci->getMeth2Args())(mcp1, 2, v__name, NAMVAR(s_svs241590d7, "insert"))));
                  tmp0 = (!(toBoolean(v__function.assignVal(tmp2))));
                }
                if (tmp0) {
                  {
                    {
                      LINE(92,0);
                      MethodCallPackage mcp0;
                      CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                      mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      const String &tmp1((toString(v__name)));
                      const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                      (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss8a90db81, "{insert} no function or plugin found for '"), tmp1, NAMSTR(s_sse07b87c4, "'"))), tmp2);
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
    v__attr.weakRemove(NAMSTR(s_ssdc3cbddc, "name"), true);
    v__attr.weakRemove(NAMSTR(s_ssba4e7712, "assign"), true);
    v__attr.weakRemove(NAMSTR(s_ssc9ff0a38, "script"), true);
    v__attr.weakRemove(NAMSTR(s_ss8b74ea02, "nocache"), true);
  }
  v__paramsArray = s_sa00000000;
  {
    LOOP_COUNTER(4);
    for (ArrayIter iter6 = v__attr.begin(s_class_name, true); !iter6.end(); ++iter6) {
      LOOP_COUNTER_CHECK(4);
      iter6.second(v__value);
      v__key.assignVal(iter6.first());
      {
        v__paramsArray.append((VarNR(concat4(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ssc8b91a97, "' => "), toString(v__value)))));
      }
    }
  }
  {
    LINE(103,0);
    const String &tmp0((x_implode(NAMVAR(s_svsce9c7c70, ", "), v__paramsArray)));
    v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
  }
  if (isset(v__assign)) {
    {
      if (LINE(106,(toBoolean(v__smarty_tpl.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))))) {
        {
          concat_assign(v__output, StringBuffer().addWithTaint("echo Smarty_Internal_Nocache_Insert::compile ('", 47).addWithTaint(toString(v__function)).addWithTaint("',", 2).addWithTaint(toString(v__params)).addWithTaint(", $_smarty_tpl, '", 17).addWithTaint(toString(v__filepath)).addWithTaint("',", 2).addWithTaint(toString(v__assign)).addWithTaint(");\?>", 4).detachWithTaint());
        }
      }
      else {
        {
          concat_assign(v__output, StringBuffer().addWithTaint("$_smarty_tpl->assign(", 21).addWithTaint(toString(v__assign)).addWithTaint(" , ", 3).addWithTaint(toString(v__function)).addWithTaint(" (", 2).addWithTaint(toString(v__params)).addWithTaint(",$_smarty_tpl), true);\?>", 24).detachWithTaint());
        }
      }
    }
  }
  else {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e57636d, "has_output"), true);
        tmp_ref.unset();
      }
      if (LINE(113,(toBoolean(v__smarty_tpl.o_getPublic(NAMSTR(s_ssafeed509, "caching"), true))))) {
        {
          concat_assign(v__output, StringBuffer().addWithTaint("echo Smarty_Internal_Nocache_Insert::compile ('", 47).addWithTaint(toString(v__function)).addWithTaint("',", 2).addWithTaint(toString(v__params)).addWithTaint(", $_smarty_tpl, '", 17).addWithTaint(toString(v__filepath)).addWithTaint("');\?>", 5).detachWithTaint());
        }
      }
      else {
        {
          concat_assign(v__output, concat5(NAMSTR(s_ss2de081fe, "echo "), toString(v__function), NAMSTR(s_ss6e782e41, "("), toString(v__params), NAMSTR(s_ssd89d1e4d, ",$_smarty_tpl);\?>")));
        }
      }
    }
  }
  return v__output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Insert() {
  return NEWOBJ(c_Smarty_Internal_Compile_Insert)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_insert.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_insert_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_insert) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_ldelim.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Ldelim)
const InstanceOfInfo c_Smarty_Internal_Compile_Ldelim::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x7A3272F6FB46B5C6LL,1,"Smarty_Internal_Compile_Ldelim",&cw_Smarty_Internal_Compile_Ldelim},
};
const int c_Smarty_Internal_Compile_Ldelim::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Ldelim::ci_compile((void*)&c_Smarty_Internal_Compile_Ldelim::i_compile, (void*)&c_Smarty_Internal_Compile_Ldelim::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Ldelim::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Ldelim);
  }
  c_Smarty_Internal_Compile_Ldelim *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Ldelim*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Ldelim::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Ldelim::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Ldelim);
  }
  c_Smarty_Internal_Compile_Ldelim *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Ldelim*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Ldelim::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Ldelim::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Ldelim::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Ldelim::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Ldelim = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Ldelim,
  c_Smarty_Internal_Compile_Ldelim::s_call_info_table,c_Smarty_Internal_Compile_Ldelim::s_call_info_index,
  c_Smarty_Internal_Compile_Ldelim::s_instanceof_table,c_Smarty_Internal_Compile_Ldelim::s_instanceof_index,
  &c_Smarty_Internal_Compile_Ldelim::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_ldelim.php line 24 */
Variant c_Smarty_Internal_Compile_Ldelim::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Ldelim, Smarty_Internal_Compile_Ldelim::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Ldelim::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
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
    return LINE(33,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true)));
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Ldelim() {
  return NEWOBJ(c_Smarty_Internal_Compile_Ldelim)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_ldelim.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_ldelim_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_ldelim) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_nocache.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Nocache)
const InstanceOfInfo c_Smarty_Internal_Compile_Nocache::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x1A2108EF36BAC0C6LL,1,"Smarty_Internal_Compile_Nocache",&cw_Smarty_Internal_Compile_Nocache},
};
const int c_Smarty_Internal_Compile_Nocache::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Nocache::ci_compile((void*)&c_Smarty_Internal_Compile_Nocache::i_compile, (void*)&c_Smarty_Internal_Compile_Nocache::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Nocache::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Nocache);
  }
  c_Smarty_Internal_Compile_Nocache *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Nocache*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Nocache::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Nocache::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Nocache);
  }
  c_Smarty_Internal_Compile_Nocache *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Nocache*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Nocache::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Nocache::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Nocache::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Nocache::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Nocache = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Nocache,
  c_Smarty_Internal_Compile_Nocache::s_call_info_table,c_Smarty_Internal_Compile_Nocache::s_call_info_index,
  c_Smarty_Internal_Compile_Nocache::s_instanceof_table,c_Smarty_Internal_Compile_Nocache::s_instanceof_index,
  &c_Smarty_Internal_Compile_Nocache::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_nocache.php line 24 */
bool c_Smarty_Internal_Compile_Nocache::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Nocache, Smarty_Internal_Compile_Nocache::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Nocache::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
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
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), true);
    tmp_ref.unset();
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), false);
    tmp_ref.unset();
  }
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_nocache.php line 42 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Nocacheclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Nocacheclose::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x462CB2A605A9440ALL,1,"Smarty_Internal_Compile_Nocacheclose",&cw_Smarty_Internal_Compile_Nocacheclose},
};
const int c_Smarty_Internal_Compile_Nocacheclose::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Nocacheclose::ci_compile((void*)&c_Smarty_Internal_Compile_Nocacheclose::i_compile, (void*)&c_Smarty_Internal_Compile_Nocacheclose::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Nocacheclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Nocacheclose);
  }
  c_Smarty_Internal_Compile_Nocacheclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Nocacheclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Nocacheclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Nocacheclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Nocacheclose);
  }
  c_Smarty_Internal_Compile_Nocacheclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Nocacheclose*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Nocacheclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Nocacheclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Nocacheclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Nocacheclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Nocacheclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Nocacheclose,
  c_Smarty_Internal_Compile_Nocacheclose::s_call_info_table,c_Smarty_Internal_Compile_Nocacheclose::s_call_info_index,
  c_Smarty_Internal_Compile_Nocacheclose::s_instanceof_table,c_Smarty_Internal_Compile_Nocacheclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Nocacheclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_nocache.php line 51 */
bool c_Smarty_Internal_Compile_Nocacheclose::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Nocacheclose, Smarty_Internal_Compile_Nocacheclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Nocacheclose::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(54,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), false);
    tmp_ref.unset();
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), false);
    tmp_ref.unset();
  }
  return true;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Nocache() {
  return NEWOBJ(c_Smarty_Internal_Compile_Nocache)();
}
ObjectData *coo_Smarty_Internal_Compile_Nocacheclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Nocacheclose)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_nocache.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_nocache_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_nocache) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_nocacheclose) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_block_plugin.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Block_Plugin)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Block_Plugin::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x284C877F982B1977LL,1,"Smarty_Internal_Compile_Private_Block_Plugin",&cw_Smarty_Internal_Compile_Private_Block_Plugin},
};
const int c_Smarty_Internal_Compile_Private_Block_Plugin::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Private_Block_Plugin::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Block_Plugin::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Block_Plugin::ifa_compile, 5, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Block_Plugin::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Block_Plugin);
  }
  c_Smarty_Internal_Compile_Private_Block_Plugin *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Block_Plugin*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Block_Plugin::compile", count+1);
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
Variant c_Smarty_Internal_Compile_Private_Block_Plugin::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Block_Plugin);
  }
  c_Smarty_Internal_Compile_Private_Block_Plugin *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Block_Plugin*>(mcp.obj));
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Block_Plugin::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  return (self->t_compile(arg0, arg1, arg2, arg3, arg4));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Block_Plugin::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Block_Plugin::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Block_Plugin::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Block_Plugin = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Block_Plugin,
  c_Smarty_Internal_Compile_Private_Block_Plugin::s_call_info_table,c_Smarty_Internal_Compile_Private_Block_Plugin::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Block_Plugin::s_instanceof_table,c_Smarty_Internal_Compile_Private_Block_Plugin::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Block_Plugin::s_class_name,
  &c_Smarty_Internal_Compile_Private_Block_Plugin::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Private_Block_Plugin::init() {
  c_Smarty_Internal_CompileBase::init();
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_block_plugin.php line 29 */
String c_Smarty_Internal_Compile_Private_Block_Plugin::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag, CVarRef v_function) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Block_Plugin, Smarty_Internal_Compile_Private_Block_Plugin::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Block_Plugin::compile", array_createvi(5, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter), toVPOD(v_tag), toVPOD(v_function)), r);
  Array v__attr;
  Array v__paramsArray;
  Primitive v__key = 0;
  Variant v__value;
  Variant v__params;
  String v_output;
  String v_mod_post;
  String v_mod_pre;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    bool tmp0;
    {
      LINE(32,0);
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
          LINE(35,0);
          const Array &tmp0((t__get_attributes(v_args)));
          v__attr = tmp0;
        }
        {
          bool tmp0;
          {
            LINE(36,0);
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
          LINE(49,0);
          const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__paramsArray))));
          v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
        }
        {
          Variant tmp0((v_tag));
          Variant tmp2((v__params));
          LINE(51,0);
          const Variant &tmp3((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          ArrayInit tmp1(array_createvi(2, toVPOD(tmp2), toVPOD(tmp3)));
          const Array &tmp4((Array(tmp1)));
          t__open_tag(tmp0, VarNR(tmp4));
        }
        {
          LINE(53,0);
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
          Primitive tmp2((bitwise_or(tmp0, tmp1)));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp2);
          tmp_ref.unset();
        }
        v_output = StringBuffer().addWithTaint("<\?php $_smarty_tpl->smarty->_tag_stack[] = array('", 50).addWithTaint(toString(v_tag)).addWithTaint("', ", 3).addWithTaint(toString(v__params)).addWithTaint("); $_block_repeat=true; ", 24).addWithTaint(toString(v_function)).addWithTaint("(", 1).addWithTaint(toString(v__params)).addWithTaint(", null, $_smarty_tpl, $_block_repeat);while ($_block_repeat) { ob_start();\?>", 76).detachWithTaint();
      }
    }
    else {
      {
        if (LINE(58,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
          {
            {
              GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
              tmp_ref.unset();
            }
          }
        }
        {
          LINE(62,0);
          const Variant &tmp0((x_substr(toString(v_tag), toInt32(0LL), toInt32(-5LL))));
          CVarRef tmp1((t__close_tag(tmp0)));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_set(NAMSTR(s_ss8b74ea02, "nocache"), tmp1[1], s_class_name);
          v__params = tmp1[0];
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
                LINE(70,0);
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
        v_output = StringBuffer().addWithTaint("<\?php $_block_content = ob_get_clean(); $_block_repeat=false;", 61).addWithTaint(v_mod_pre).addWithTaint(" echo ", 6).addWithTaint(toString(v_function)).addWithTaint("(", 1).addWithTaint(toString(v__params)).addWithTaint(", $_block_content, $_smarty_tpl, $_block_repeat); ", 50).addWithTaint(v_mod_post).addWithTaint(" } array_pop($_smarty_tpl->smarty->_tag_stack);\?>", 49).detachWithTaint();
      }
    }
  }
  return concat(v_output, NAMSTR(s_ss66d2232c, "\n"));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Block_Plugin() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Block_Plugin)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_block_plugin.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_block_plugin_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_block_plugin) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_function_plugin.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Private_Function_Plugin)
const InstanceOfInfo c_Smarty_Internal_Compile_Private_Function_Plugin::s_instanceof_table[] = {
  {0x647CA3B5DFE06210LL,0,"Smarty_Internal_Compile_Private_Function_Plugin",&cw_Smarty_Internal_Compile_Private_Function_Plugin},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Private_Function_Plugin::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Private_Function_Plugin::ci_compile((void*)&c_Smarty_Internal_Compile_Private_Function_Plugin::i_compile, (void*)&c_Smarty_Internal_Compile_Private_Function_Plugin::ifa_compile, 5, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Private_Function_Plugin::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Private_Function_Plugin);
  }
  c_Smarty_Internal_Compile_Private_Function_Plugin *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Function_Plugin*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Function_Plugin::compile", count+1);
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
Variant c_Smarty_Internal_Compile_Private_Function_Plugin::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Private_Function_Plugin);
  }
  c_Smarty_Internal_Compile_Private_Function_Plugin *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Private_Function_Plugin*>(mcp.obj));
  if (UNLIKELY(count < 5)) throw_missing_arguments("Smarty_Internal_Compile_Private_Function_Plugin::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  return (self->t_compile(arg0, arg1, arg2, arg3, arg4));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Private_Function_Plugin::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Private_Function_Plugin::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Private_Function_Plugin::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Function_Plugin = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Private_Function_Plugin,
  c_Smarty_Internal_Compile_Private_Function_Plugin::s_call_info_table,c_Smarty_Internal_Compile_Private_Function_Plugin::s_call_info_index,
  c_Smarty_Internal_Compile_Private_Function_Plugin::s_instanceof_table,c_Smarty_Internal_Compile_Private_Function_Plugin::s_instanceof_index,
  &c_Smarty_Internal_Compile_Private_Function_Plugin::s_class_name,
  &c_Smarty_Internal_Compile_Private_Function_Plugin::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Private_Function_Plugin::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa00000000;
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_private_function_plugin.php line 30 */
String c_Smarty_Internal_Compile_Private_Function_Plugin::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter, CVarRef v_tag, CVarRef v_function) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Private_Function_Plugin, Smarty_Internal_Compile_Private_Function_Plugin::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Private_Function_Plugin::compile", array_createvi(5, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter), toVPOD(v_tag), toVPOD(v_function)), r);
  Array v__attr;
  Array v__paramsArray;
  Primitive v__key = 0;
  Variant v__value;
  String v__params;
  String v_output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e57636d, "has_output"), true);
    tmp_ref.unset();
  }
  {
    LINE(37,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(38,0);
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
    LINE(51,0);
    const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__paramsArray))));
    v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
  }
  v_output = concat5(NAMSTR(s_ss686ceae7, "<\?php echo "), toString(v_function), NAMSTR(s_ss6e782e41, "("), v__params, NAMSTR(s_ssfc8f8205, ",$_smarty_tpl);\?>\n"));
  return v_output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Private_Function_Plugin() {
  return NEWOBJ(c_Smarty_Internal_Compile_Private_Function_Plugin)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_private_function_plugin.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_private_function_plugin_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_private_function_plugin) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva6b3e86d0,
  (int64)&s_svad23e7614,
  (int64)&s_sva00000000,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,1,0,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x54E8208FE47CFF0ELL,1,2,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x691414609BC81C26LL,0,1,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Insert hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Insert lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Private_Block_Plugin hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Private_Block_Plugin lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Private_Function_Plugin hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Private_Function_Plugin lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Insert::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Private_Block_Plugin::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+11,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+3,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Private_Function_Plugin::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+22,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+4,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
