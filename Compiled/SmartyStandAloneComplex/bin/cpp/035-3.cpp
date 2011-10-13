#include <php/Smarty/libs/sysplugins/smarty_internal_templateparser.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templateparser.fws.h>
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_block.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_parsetree.h>
#include <runtime/ext/ext.h>
namespace HPHP {
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2635 */
void c_Smarty_Internal_Templateparser::t_yy_r143() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r143);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r143", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2635,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2638 */
void c_Smarty_Internal_Templateparser::t_yy_r144() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r144);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r144", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2638,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(tmp1, tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2641 */
void c_Smarty_Internal_Templateparser::t_yy_r145() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r145);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r145", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      bool tmp1 = (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true)));
      if (tmp1) {
        const Numeric &tmp2(((m_yyidx + -1LL)));
        LINE(2641,0);
        const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
        const Variant &tmp4((x_substr(tmp3, toInt32(0LL), toInt32(1LL))));
        tmp1 = (equal(tmp4, NAMSTR(s_ss7f06ffcd, "_")));
      }
      tmp0 = (tmp1);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(2642,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs1901b50f, "Security error: Call to private object member not allowed") /* self::Err1 */);
        }
      }
    }
  }
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2644,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss767e7d6c, "->"), tmp1, tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2648 */
void c_Smarty_Internal_Templateparser::t_yy_r146() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r146);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r146", null_array, );
  Variant tmp_ref;
  if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true))) {
    {
      {
        LINE(2649,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs450736a0, "Security error: Call to dynamic object member not allowed") /* self::Err2 */);
      }
    }
  }
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2651,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ss37fd34e3, "->{$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss774bb0d5, ")->value"), tmp3, NAMSTR(s_ss236e0754, "}"));
    tmp_ref.unset();
  }
  {
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    MethodCallPackage mcp1;
    CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const String &tmp4((x_trim(tmp3, NAMSTR(s_sse07b87c4, "'"))));
    Variant tmp5(((mcp1.ci->getMeth4Args())(mcp1, 4, VarNR(tmp4), null_varNR, true_varNR, false_varNR)));
    const Variant &tmp6((tmp5.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    Primitive tmp7((bitwise_or(tmp0, tmp6)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp7);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2655 */
void c_Smarty_Internal_Templateparser::t_yy_r147() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r147);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r147", null_array, );
  Variant tmp_ref;
  if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true))) {
    {
      {
        LINE(2656,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs450736a0, "Security error: Call to dynamic object member not allowed") /* self::Err2 */);
      }
    }
  }
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2658,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat4(NAMSTR(s_ssbece7c5e, "->{"), tmp1, tmp3, NAMSTR(s_ss236e0754, "}"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2662 */
void c_Smarty_Internal_Templateparser::t_yy_r148() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r148);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r148", null_array, );
  Variant tmp_ref;
  if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true))) {
    {
      {
        LINE(2663,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs450736a0, "Security error: Call to dynamic object member not allowed") /* self::Err2 */);
      }
    }
  }
  {
    const Numeric &tmp0(((m_yyidx + -4LL)));
    LINE(2665,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -2LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + 0LL)));
    const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat6(NAMSTR(s_ss8b95ab34, "->{'"), tmp1, NAMSTR(s_ssbdbd4b1a, "'."), tmp3, tmp5, NAMSTR(s_ss236e0754, "}"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2669 */
void c_Smarty_Internal_Templateparser::t_yy_r149() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r149);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r149", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2669,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(NAMSTR(s_ss767e7d6c, "->"), tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2672 */
void c_Smarty_Internal_Templateparser::t_yy_r150() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r150);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r150", null_array, );
  String v_func_name;
  Variant v_isset_par;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      bool tmp1 = (!(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true))));
      if (!tmp1) {
        LINE(2672,0);
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ssb1ff1705, "isTrustedPhpFunction"), 0x50FEAC4EAA613861LL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        const Numeric &tmp3(((m_yyidx + -3LL)));
        const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        tmp1 = (toBoolean((mcp2.ci->getMeth2Args())(mcp2, 2, tmp4, GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true))));
      }
      tmp0 = (tmp1);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            const Numeric &tmp1(((m_yyidx + -3LL)));
            LINE(2673,0);
            const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
            int tmp3((x_strcasecmp(tmp2, NAMSTR(s_sse62d5e87, "isset"))));
            bool tmp4 = (same(tmp3, 0LL));
            if (!tmp4) {
              const Numeric &tmp5(((m_yyidx + -3LL)));
              const String &tmp6((toString(m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
              int tmp7((x_strcasecmp(tmp6, NAMSTR(s_ss24e616f9, "empty"))));
              tmp4 = (same(tmp7, 0LL));
            }
            bool tmp8 = (tmp4);
            if (!tmp8) {
              const Numeric &tmp9(((m_yyidx + -3LL)));
              const String &tmp10((toString(m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
              int tmp11((x_strcasecmp(tmp10, NAMSTR(s_ss8c04b960, "array"))));
              tmp8 = (same(tmp11, 0LL));
            }
            bool tmp12 = (tmp8);
            if (!tmp12) {
              const Numeric &tmp13(((m_yyidx + -3LL)));
              const Variant &tmp14((m_yystack.rvalRef(tmp13, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
              tmp12 = (x_is_callable(tmp14));
            }
            tmp0 = (tmp12);
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                const Numeric &tmp0(((m_yyidx + -3LL)));
                LINE(2674,0);
                const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
                const String &tmp2((x_strtolower(tmp1)));
                v_func_name = tmp2;
                tmp_ref.unset();
              }
              if (equal(v_func_name, NAMSTR(s_sse62d5e87, "isset"))) {
                {
                  {
                    bool tmp0;
                    {
                      const Numeric &tmp1(((m_yyidx + -1LL)));
                      LINE(2676,0);
                      const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
                      int tmp3((x_count(tmp2)));
                      tmp0 = (equal(tmp3, 0LL));
                      tmp_ref.unset();
                    }
                    if (tmp0) {
                      {
                        {
                          LINE(2677,0);
                          MethodCallPackage mcp0;
                          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                          (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs22dd35d5, "Illegal number of paramer in \"isset()\""));
                        }
                      }
                    }
                  }
                  {
                    const Numeric &tmp0(((m_yyidx + -1LL)));
                    LINE(2679,0);
                    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
                    const String &tmp2((x_implode(NAMVAR(s_svsd332baa7, ","), tmp1)));
                    const Variant &tmp3((x_str_replace(NAMVAR(s_svsaee3d255, "')->value"), NAMVAR(s_svsef047897, "',null,true,false)->value"), VarNR(tmp2))));
                    v_isset_par.assignVal(tmp3);
                    tmp_ref.unset();
                  }
                  {
                    const Numeric &tmp0(((m_yyidx + -3LL)));
                    LINE(2680,0);
                    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
                    const String &tmp2((toString(v_isset_par)));
                    m__retvalue = concat4(tmp1, NAMSTR(s_ss6e782e41, "("), tmp2, NAMSTR(s_ss44beffb9, ")"));
                    tmp_ref.unset();
                  }
                }
              }
              else if (LINE(2681,(x_in_array(VarNR(v_func_name), s_sva717a0f79)))) {
                {
                  {
                    bool tmp0;
                    {
                      const Numeric &tmp1(((m_yyidx + -1LL)));
                      LINE(2682,0);
                      const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
                      int tmp3((x_count(tmp2)));
                      tmp0 = (!equal(tmp3, 1LL));
                      tmp_ref.unset();
                    }
                    if (tmp0) {
                      {
                        {
                          LINE(2683,0);
                          MethodCallPackage mcp0;
                          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                          (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsa7ee37eb, "Illegal number of paramer in \"empty()\""));
                        }
                      }
                    }
                  }
                  if (equal(v_func_name, NAMSTR(s_ss24e616f9, "empty"))) {
                    {
                      {
                        String tmp0((v_func_name));
                        const Numeric &tmp1(((m_yyidx + -1LL)));
                        LINE(2686,0);
                        const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(0LL, AccessFlags::Error)));
                        const String &tmp3((toString(x_str_replace(NAMVAR(s_svsaee3d255, "')->value"), NAMVAR(s_svsef047897, "',null,true,false)->value"), tmp2))));
                        m__retvalue = concat4(tmp0, NAMSTR(s_ss6e782e41, "("), tmp3, NAMSTR(s_ss44beffb9, ")"));
                        tmp_ref.unset();
                      }
                    }
                  }
                  else {
                    {
                      {
                        String tmp0((v_func_name));
                        const Numeric &tmp1(((m_yyidx + -1LL)));
                        LINE(2688,0);
                        const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(0LL, AccessFlags::Error))));
                        m__retvalue = concat4(tmp0, NAMSTR(s_ss6e782e41, "("), tmp2, NAMSTR(s_ss44beffb9, ")"));
                        tmp_ref.unset();
                      }
                    }
                  }
                }
              }
              else {
                {
                  {
                    const Numeric &tmp0(((m_yyidx + -3LL)));
                    LINE(2691,0);
                    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
                    const Numeric &tmp2(((m_yyidx + -1LL)));
                    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
                    const String &tmp4((x_implode(NAMVAR(s_svsd332baa7, ","), tmp3)));
                    m__retvalue = concat4(tmp1, NAMSTR(s_ss6e782e41, "("), tmp4, NAMSTR(s_ss44beffb9, ")"));
                    tmp_ref.unset();
                  }
                }
              }
            }
          }
          else {
            {
              {
                LINE(2694,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const Numeric &tmp1(((m_yyidx + -3LL)));
                const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
                (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(concat3(NAMSTR(s_ssade2485d, "unknown function \""), tmp2, NAMSTR(s_ss7e5fc106, "\""))));
                tmp_ref.unset();
              }
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2700 */
void c_Smarty_Internal_Templateparser::t_yy_r151() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r151);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r151", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      bool tmp1 = (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true)));
      if (tmp1) {
        const Numeric &tmp2(((m_yyidx + -3LL)));
        LINE(2700,0);
        const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
        const Variant &tmp4((x_substr(tmp3, toInt32(0LL), toInt32(1LL))));
        tmp1 = (equal(tmp4, NAMSTR(s_ss7f06ffcd, "_")));
      }
      tmp0 = (tmp1);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(2701,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs1901b50f, "Security error: Call to private object member not allowed") /* self::Err1 */);
        }
      }
    }
  }
  {
    const Numeric &tmp0(((m_yyidx + -3LL)));
    LINE(2703,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const String &tmp4((x_implode(NAMVAR(s_svsd332baa7, ","), tmp3)));
    m__retvalue = concat4(tmp1, NAMSTR(s_ss6e782e41, "("), tmp4, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2707 */
void c_Smarty_Internal_Templateparser::t_yy_r152() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r152);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r152", null_array, );
  Variant tmp_ref;
  if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true))) {
    {
      {
        LINE(2708,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs450736a0, "Security error: Call to dynamic object member not allowed") /* self::Err2 */);
      }
    }
  }
  GET_THIS_ARROW()o_assign_op<void,297>(NAMSTR(s_ss93c949f7, "prefix_number"), null_variant, s_class_name);
  {
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss93c949f7, "prefix_number"), true))));
    const Numeric &tmp1(((m_yyidx + -3LL)));
    LINE(2710,0);
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssc5d15748, "prefix_code"), tmp_ref, s_class_name).append((VarNR(concat5(NAMSTR(s_ss4a9a496f, "<\?php $_tmp"), tmp0, NAMSTR(s_ss8f9f343b, "=$_smarty_tpl->getVariable('"), tmp2, NAMSTR(s_ss488aed98, "')->value;\?>")))));
    tmp_ref.unset();
  }
  {
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss93c949f7, "prefix_number"), true))));
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const String &tmp3((x_implode(NAMVAR(s_svsd332baa7, ","), tmp2)));
    m__retvalue = concat5(NAMSTR(s_ssec036966, "$_tmp"), tmp0, NAMSTR(s_ss6e782e41, "("), tmp3, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2714 */
void c_Smarty_Internal_Templateparser::t_yy_r153() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r153);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r153", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2714,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp2(array_createvi(1, toVPOD(tmp4)));
    const Array &tmp5((Array(tmp2)));
    const Variant &tmp6((x_array_merge(2, tmp1, Array(array_createvi(1, toVPOD(VarNR(tmp5)))))));
    m__retvalue.assignVal(tmp6);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2717 */
void c_Smarty_Internal_Templateparser::t_yy_r156() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r156);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r156", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2717,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + 0LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Variant &tmp7((x_array_merge(2, tmp4, Array(array_createvi(1, toVPOD(tmp6))))));
    ArrayInit tmp2(array_createvi(1, toVPOD(tmp7)));
    const Array &tmp8((Array(tmp2)));
    const Variant &tmp9((x_array_merge(2, tmp1, Array(array_createvi(1, toVPOD(VarNR(tmp8)))))));
    m__retvalue.assignVal(tmp9);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2720 */
void c_Smarty_Internal_Templateparser::t_yy_r157() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r157);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r157", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp1(((m_yyidx + -1LL)));
    LINE(2720,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Variant &tmp5((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(tmp4))))));
    ArrayInit tmp0(array_createvi(1, toVPOD(tmp5)));
    const Array &tmp6((Array(tmp0)));
    m__retvalue = tmp6;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2723 */
void c_Smarty_Internal_Templateparser::t_yy_r159() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r159);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r159", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp1(((m_yyidx + 0LL)));
    LINE(2723,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp0(array_createvi(1, toVPOD(tmp2)));
    const Array &tmp3((Array(tmp0)));
    m__retvalue = tmp3;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2726 */
void c_Smarty_Internal_Templateparser::t_yy_r160() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r160);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r160", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2726,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Variant &tmp4((x_array_merge(2, tmp1, Array(array_createvi(1, toVPOD(tmp3))))));
    m__retvalue.assignVal(tmp4);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2729 */
void c_Smarty_Internal_Templateparser::t_yy_r161() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r161);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r161", null_array, );
  m__retvalue = s_sa00000000;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2732 */
void c_Smarty_Internal_Templateparser::t_yy_r162() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r162);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r162", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp1(((m_yyidx + 0LL)));
    LINE(2732,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp0(array_createvi(1, toVPOD(tmp2)));
    const Array &tmp3((Array(tmp0)));
    m__retvalue = tmp3;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2735 */
void c_Smarty_Internal_Templateparser::t_yy_r167() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r167);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r167", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2735,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ssf539d341, "$"), tmp1, tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2738 */
void c_Smarty_Internal_Templateparser::t_yy_r168() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r168);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r168", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2738,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + 0LL)));
    const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat4(NAMSTR(s_ssf539d341, "$"), tmp1, tmp3, tmp5);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2741 */
void c_Smarty_Internal_Templateparser::t_yy_r169() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r169);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r169", null_array, );
  m__retvalue = NAMSTR(s_ssa3cc6940, "==");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2744 */
void c_Smarty_Internal_Templateparser::t_yy_r170() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r170);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r170", null_array, );
  m__retvalue = NAMSTR(s_ss85800ed5, "!=");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2747 */
void c_Smarty_Internal_Templateparser::t_yy_r171() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r171);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r171", null_array, );
  m__retvalue = NAMSTR(s_ss9767c666, ">");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2750 */
void c_Smarty_Internal_Templateparser::t_yy_r172() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r172);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r172", null_array, );
  m__retvalue = NAMSTR(s_ss2e7b6cab, "<");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2753 */
void c_Smarty_Internal_Templateparser::t_yy_r173() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r173);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r173", null_array, );
  m__retvalue = NAMSTR(s_ssb86ffbca, ">=");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2756 */
void c_Smarty_Internal_Templateparser::t_yy_r174() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r174);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r174", null_array, );
  m__retvalue = NAMSTR(s_ss89963722, "<=");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2759 */
void c_Smarty_Internal_Templateparser::t_yy_r175() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r175);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r175", null_array, );
  m__retvalue = NAMSTR(s_ss37c9f8d5, "===");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2762 */
void c_Smarty_Internal_Templateparser::t_yy_r176() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r176);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r176", null_array, );
  m__retvalue = NAMSTR(s_ss8b518c44, "!==");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2765 */
void c_Smarty_Internal_Templateparser::t_yy_r177() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r177);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r177", null_array, );
  m__retvalue = NAMSTR(s_ss36c6b0f7, "%");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2768 */
void c_Smarty_Internal_Templateparser::t_yy_r178() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r178);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r178", null_array, );
  m__retvalue = NAMSTR(s_ssf62fbd8b, "&&");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2771 */
void c_Smarty_Internal_Templateparser::t_yy_r179() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r179);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r179", null_array, );
  m__retvalue = NAMSTR(s_sscada5010, "||");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2774 */
void c_Smarty_Internal_Templateparser::t_yy_r180() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r180);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r180", null_array, );
  m__retvalue = NAMSTR(s_ss89774cd2, " XOR ");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2777 */
void c_Smarty_Internal_Templateparser::t_yy_r181() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r181);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r181", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2777,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp1, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2780 */
void c_Smarty_Internal_Templateparser::t_yy_r183() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r183);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r183", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2780,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(tmp1, NAMSTR(s_ssd332baa7, ","), tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2783 */
void c_Smarty_Internal_Templateparser::t_yy_r184() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r184);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r184", null_array, );
  return;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2786 */
void c_Smarty_Internal_Templateparser::t_yy_r185() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r185);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r185", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2786,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(tmp1, NAMSTR(s_ss398622d5, "=>"), tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2789 */
void c_Smarty_Internal_Templateparser::t_yy_r186() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r186);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r186", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2789,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat4(NAMSTR(s_sse07b87c4, "'"), tmp1, NAMSTR(s_ss0dfe9f10, "'=>"), tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2792 */
void c_Smarty_Internal_Templateparser::t_yy_r188() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r188);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r188", null_array, );
  m__retvalue = NAMSTR(s_ssd229c51d, "''");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2795 */
void c_Smarty_Internal_Templateparser::t_yy_r189() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r189);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r189", null_array, );
  Variant tmp_ref;
  {
    LINE(2795,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = m_yystack.rvalRef((m_yyidx + -1LL), tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2798 */
void c_Smarty_Internal_Templateparser::t_yy_r190() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r190);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r190", null_array, );
  Variant tmp_ref;
  {
    LINE(2798,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = m_yystack.rvalRef((m_yyidx + -1LL), tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ssca2ba055, "append_subtree"), 0x278E3AB52EABB542LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + 0LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    (mcp0.ci->getMeth1Args())(mcp0, 1, tmp2);
    tmp_ref.unset();
  }
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2801 */
void c_Smarty_Internal_Templateparser::t_yy_r191() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r191);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r191", null_array, );
  Variant tmp_ref;
  {
    p__smarty_doublequoted tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss9331670d, "_smarty_doublequoted"), &g->CDEC(_smarty_doublequoted))), (coo__smarty_doublequoted()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    LINE(2801,0);
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ((c__smarty_doublequoted*)tmp0.get()->create(tmp1, tmp3));
    m__retvalue = tmp0;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2804 */
void c_Smarty_Internal_Templateparser::t_yy_r192() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r192);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r192", null_array, );
  Variant tmp_ref;
  {
    p__smarty_code tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss795535ad, "_smarty_code"), &g->CDEC(_smarty_code))), (coo__smarty_code()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    LINE(2804,0);
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ((c__smarty_code*)tmp0.get()->create(tmp1, tmp3));
    m__retvalue = tmp0;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2807 */
void c_Smarty_Internal_Templateparser::t_yy_r194() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r194);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r194", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      const Numeric &tmp1(((m_yyidx + 0LL)));
      LINE(2807,0);
      const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
      const String &tmp3((toString(x_substr(tmp2, toInt32(1LL)))));
      tmp0 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ssc587de67, "local_var"), false), concat3(NAMSTR(s_sse07b87c4, "'"), tmp3, NAMSTR(s_sse07b87c4, "'"))));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          p__smarty_code tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss795535ad, "_smarty_code"), &g->CDEC(_smarty_code))), (coo__smarty_code()));
          p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
          const Numeric &tmp2(((m_yyidx + 0LL)));
          LINE(2808,0);
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          const String &tmp4((toString(x_substr(tmp3, toInt32(1LL)))));
          ((c__smarty_code*)tmp0.get()->create(tmp1, concat3(NAMSTR(s_ss4381ee91, "$_smarty_tpl->tpl_vars['"), tmp4, NAMSTR(s_ssebb78db4, "']->value"))));
          m__retvalue = tmp0;
          tmp_ref.unset();
        }
      }
    }
    else {
      {
        {
          p__smarty_code tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss795535ad, "_smarty_code"), &g->CDEC(_smarty_code))), (coo__smarty_code()));
          p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
          const Numeric &tmp2(((m_yyidx + 0LL)));
          LINE(2810,0);
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          const String &tmp4((toString(x_substr(tmp3, toInt32(1LL)))));
          ((c__smarty_code*)tmp0.get()->create(tmp1, concat3(NAMSTR(s_ssc7245403, "$_smarty_tpl->getVariable('"), tmp4, NAMSTR(s_ssaee3d255, "')->value"))));
          m__retvalue = tmp0;
          tmp_ref.unset();
        }
      }
    }
  }
  {
    LINE(2812,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    MethodCallPackage mcp1;
    CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const String &tmp4((x_trim(tmp3, NAMSTR(s_sse07b87c4, "'"))));
    Variant tmp5(((mcp1.ci->getMeth4Args())(mcp1, 4, VarNR(tmp4), null_varNR, true_varNR, false_varNR)));
    const Variant &tmp6((tmp5.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    Primitive tmp7((bitwise_or(tmp0, tmp6)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp7);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2816 */
void c_Smarty_Internal_Templateparser::t_yy_r196() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r196);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r196", null_array, );
  Variant tmp_ref;
  {
    p__smarty_code tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss795535ad, "_smarty_code"), &g->CDEC(_smarty_code))), (coo__smarty_code()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    LINE(2816,0);
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    ((c__smarty_code*)tmp0.get()->create(tmp1, concat3(NAMSTR(s_ss6e782e41, "("), tmp3, NAMSTR(s_ss44beffb9, ")"))));
    m__retvalue = tmp0;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2819 */
void c_Smarty_Internal_Templateparser::t_yy_r197() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r197);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r197", null_array, );
  Variant tmp_ref;
  {
    p__smarty_tag tmp0 = ((checkClassExistsThrow(NAMSTR(s_sse95d3705, "_smarty_tag"), &g->CDEC(_smarty_tag))), (coo__smarty_tag()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    LINE(2820,0);
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ((c__smarty_tag*)tmp0.get()->create(tmp1, tmp3));
    m__retvalue = tmp0;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2824 */
void c_Smarty_Internal_Templateparser::t_yy_r198() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r198);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r198", null_array, );
  Variant tmp_ref;
  {
    p__smarty_dq_content tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss43ce1529, "_smarty_dq_content"), &g->CDEC(_smarty_dq_content))), (coo__smarty_dq_content()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    LINE(2824,0);
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ((c__smarty_dq_content*)tmp0.get()->create(tmp1, tmp3));
    m__retvalue = tmp0;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2827 */
void c_Smarty_Internal_Templateparser::t_yy_r200() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r200);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r200", null_array, );
  m__retvalue = NAMSTR(s_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2832 */
void c_Smarty_Internal_Templateparser::t_yy_reduce(CVarRef v_yyruleno) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_reduce);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_reduce", array_createvi(1, toVPOD(v_yyruleno)), );
  Variant v_yymsp;
  Variant v_yy_lefthand_side;
  Variant v_yygoto;
  Variant v_yysize;
  Variant v_i;
  Variant v_yyact;
  p_TP_yyStackEntry v_x;

  Variant tmp_ref;
  {
    Variant tmp0((m_yyidx));
    LINE(2834,0);
    const Variant &tmp1((m_yystack.rvalAt(tmp0, AccessFlags::Error)));
    v_yymsp.assignVal(tmp1);
  }
  {
    bool tmp0;
    {
      bool tmp1 = ((toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE) && not_less(v_yyruleno, 0LL)));
      if (tmp1) {
        LINE(2836,0);
        int tmp2((x_count(s_sva062775d9)));
        tmp1 = (less(v_yyruleno, tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          const Object &tmp0((toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE)));
          Variant tmp1((g->s_Smarty_Internal_Templateparser___yyTracePrompt));
          Variant tmp2((v_yyruleno));
          LINE(2839,0);
          const Variant &tmp3((s_sa062775d9.rvalAt(v_yyruleno, AccessFlags::Error)));
          x_fprintf(5, tmp0, NAMSTR(s_ss942be926, "%sReduce (%d) [%s].\n"), Array(array_createvi(3, toVPOD(tmp1), toVPOD(tmp2), toVPOD(tmp3))));
        }
      }
    }
  }
  setNull(v_yy_lefthand_side), m__retvalue.assignVal(null);
  if (LINE(2843,(x_array_key_exists(v_yyruleno, s_svaa51ff62a)))) {
    {
      m__retvalue.assignVal(null);
      {
        LINE(2846,0);
        const String &tmp1((toString(s_saa51ff62a.rvalAt(v_yyruleno, AccessFlags::Error))));
        MethodCallPackage mcp0;
        CStrRef mth0 = concat(NAMSTR(s_ss7e7b1b44, "yy_r"), tmp1);
        mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
      }
      v_yy_lefthand_side.assignVal(m__retvalue);
    }
  }
  {
    LINE(2849,0);
    const Variant &tmp0((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
    v_yygoto.assignVal(tmp0);
  }
  {
    LINE(2850,0);
    const Variant &tmp0((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssc9040cd3, "rhs"), AccessFlags::Error_Key)));
    v_yysize.assignVal(tmp0);
  }
  m_yyidx -= v_yysize;
  {
    LOOP_COUNTER(1);
    for (v_i.assignVal(v_yysize); toBoolean((v_i)); v_i--) {
      LOOP_COUNTER_CHECK(1);
      {
        LINE(2854,(x_array_pop(ref(m_yystack))));
      }
    }
  }
  {
    Variant tmp0((m_yyidx));
    LINE(2856,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    const Variant &tmp2((t_yy_find_reduce_action(tmp1, v_yygoto)));
    v_yyact.assignVal(tmp2);
    tmp_ref.unset();
  }
  if (less(v_yyact, 387LL /* self::YYNSTATE */)) {
    {
      if ((!(toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) && toBoolean(v_yysize))) {
        {
          m_yyidx++;
          {
            LINE(2860,0);
            const p_TP_yyStackEntry &tmp0((p_TP_yyStackEntry(((c_TP_yyStackEntry*)coo_TP_yyStackEntry()))));
            v_x = tmp0;
          }
          v_x->m_stateno.assignVal(v_yyact);
          v_x->m_major.assignVal(v_yygoto);
          v_x->m_minor.assignVal(v_yy_lefthand_side);
          m_yystack.set(m_yyidx, (VarNR(v_x)));
        }
      }
      else {
        {
          LINE(2866,(t_yy_shift(v_yyact, v_yygoto, v_yy_lefthand_side)));
        }
      }
    }
  }
  else if (equal(v_yyact, 589LL)) {
    {
      LINE(2869,(t_yy_accept()));
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2873 */
void c_Smarty_Internal_Templateparser::t_yy_parse_failed() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_parse_failed);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_parse_failed", null_array, );
  if (toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
    {
      LINE(2876,(x_fprintf(3, toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE), NAMSTR(s_ss727b756b, "%sFail!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Templateparser___yyTracePrompt))))));
    }
  }
  LOOP_COUNTER(1);
  {
    while (not_less(m_yyidx, 0LL)) {
      LOOP_COUNTER_CHECK(1);
      {
        LINE(2879,(t_yy_pop_parser_stack()));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2883 */
void c_Smarty_Internal_Templateparser::t_yy_syntax_error(CVarRef v_yymajor, CVarRef v_TOKEN) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_syntax_error);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_syntax_error", array_createvi(2, toVPOD(v_yymajor), toVPOD(v_TOKEN)), );
  Variant tmp_ref;
  m_internalError = true;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssacc538af, "yymajor"), v_yymajor);
  {
    LINE(2889,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth0Args())(mcp0, 0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2893 */
void c_Smarty_Internal_Templateparser::t_yy_accept() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_accept);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_accept", null_array, );
  Variant v_stack;

  if (toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
    {
      LINE(2896,(x_fprintf(3, toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE), NAMSTR(s_ssf6d11545, "%sAccept!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Templateparser___yyTracePrompt))))));
    }
  }
  LOOP_COUNTER(1);
  {
    while (not_less(m_yyidx, 0LL)) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(2899,0);
          const Variant &tmp0((t_yy_pop_parser_stack()));
          v_stack.assignVal(tmp0);
        }
      }
    }
  }
  m_successful = !(m_internalError);
  m_internalError = false;
  m_retvalue.assignVal(m__retvalue);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2910 */
void c_Smarty_Internal_Templateparser::t_doparse(Variant v_yymajor, CVarRef v_yytokenvalue) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::doParse);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::doParse", array_createvi(2, toVPOD(v_yymajor), toVPOD(v_yytokenvalue)), );
  int64 v_yyerrorhit = 0;
  p_TP_yyStackEntry v_x;
  bool v_yyendofinput = false;
  Variant v_yyact;
  Variant v_yymx;
  int64 v_u2 = 0;

  Variant tmp_ref;
  v_yyerrorhit = 0LL;
  if ((x_is_null(m_yyidx) || less(m_yyidx, 0LL))) {
    {
      m_yyidx = 0LL;
      m_yyerrcnt = -1LL;
      {
        LINE(2917,0);
        const p_TP_yyStackEntry &tmp0((p_TP_yyStackEntry(((c_TP_yyStackEntry*)coo_TP_yyStackEntry()))));
        v_x = tmp0;
      }
      v_x->m_stateno = 0LL;
      v_x->m_major = 0LL;
      m_yystack = s_sa00000000;
      LINE(2921,(x_array_push(2, ref(m_yystack), VarNR(v_x))));
    }
  }
  v_yyendofinput = equal(v_yymajor, 0LL);
  if (toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
    {
      {
        const Object &tmp0((toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE)));
        Variant tmp1((g->s_Smarty_Internal_Templateparser___yyTracePrompt));
        LINE(2927,0);
        const Variant &tmp2((m_yyTokenName.rvalAt(v_yymajor, AccessFlags::Error)));
        x_fprintf(4, tmp0, NAMSTR(s_ssa32b8e8f, "%sInput %s\n"), Array(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2))));
      }
    }
  }
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(2931,0);
          const Variant &tmp0((t_yy_find_shift_action(v_yymajor)));
          v_yyact.assignVal(tmp0);
        }
        {
          bool tmp0;
          {
            bool tmp1 = (less(v_yymajor, 78LL /* self::YYERRORSYMBOL */));
            if (tmp1) {
              LINE(2933,0);
              bool tmp2((t_yy_is_expected_token(v_yymajor)));
              tmp1 = (!(tmp2));
            }
            tmp0 = (tmp1);
          }
          if (tmp0) {
            {
              v_yyact = 588LL /* self::YY_ERROR_ACTION */;
            }
          }
        }
        if (less(v_yyact, 387LL /* self::YYNSTATE */)) {
          {
            LINE(2938,(t_yy_shift(v_yyact, v_yymajor, v_yytokenvalue)));
            m_yyerrcnt--;
            if ((v_yyendofinput && not_less(m_yyidx, 0LL))) {
              {
                v_yymajor = 0LL;
              }
            }
            else {
              {
                v_yymajor = 121LL /* self::YYNOCODE */;
              }
            }
          }
        }
        else if (less(v_yyact, 588LL)) {
          {
            LINE(2946,(t_yy_reduce((v_yyact - 387LL /* self::YYNSTATE */))));
          }
        }
        else if (equal(v_yyact, 588LL /* self::YY_ERROR_ACTION */)) {
          {
            if (toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
              {
                LINE(2950,(x_fprintf(3, toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE), NAMSTR(s_ssb904caaf, "%sSyntax Error!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Templateparser___yyTracePrompt))))));
              }
            }
            if (less(m_yyerrcnt, 0LL)) {
              {
                LINE(2954,(t_yy_syntax_error(v_yymajor, v_yytokenvalue)));
              }
            }
            {
              Variant tmp0((m_yyidx));
              LINE(2956,0);
              const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
              v_yymx.assignVal(tmp1);
              tmp_ref.unset();
            }
            if ((equal(v_yymx, 78LL /* self::YYERRORSYMBOL */) || toBoolean(v_yyerrorhit))) {
              {
                if (toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
                  {
                    {
                      const Object &tmp0((toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE)));
                      Variant tmp1((g->s_Smarty_Internal_Templateparser___yyTracePrompt));
                      LINE(2960,0);
                      const Variant &tmp2((m_yyTokenName.rvalAt(v_yymajor, AccessFlags::Error)));
                      x_fprintf(4, tmp0, NAMSTR(s_ss7053629d, "%sDiscard input token %s\n"), Array(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2))));
                    }
                  }
                }
                LINE(2962,( BIND_CLASS_ARROW(Smarty_Internal_Templateparser) t_yy_destructor(v_yymajor, v_yytokenvalue)));
                v_yymajor = 121LL /* self::YYNOCODE */;
              }
            }
            else {
              {
                LOOP_COUNTER(2);
                {
                  while (true) {
                    {
                      bool tmp0 = ((not_less(m_yyidx, 0LL) && !equal(v_yymx, 78LL /* self::YYERRORSYMBOL */)));
                      if (tmp0) {
                        LINE(2967,0);
                        const Variant &tmp1((t_yy_find_shift_action(NAMVAR(s_svi1089a340, 78LL) /* self::YYERRORSYMBOL */)));
                        tmp0 = (not_less(v_yyact.assignVal(tmp1), 387LL /* self::YYNSTATE */));
                      }
                      if (!(tmp0)) break;
                    }
                    LOOP_COUNTER_CHECK(2);
                    {
                      LINE(2969,(t_yy_pop_parser_stack()));
                    }
                  }
                }
                if ((less(m_yyidx, 0LL) || equal(v_yymajor, 0LL))) {
                  {
                    LINE(2972,( BIND_CLASS_ARROW(Smarty_Internal_Templateparser) t_yy_destructor(v_yymajor, v_yytokenvalue)));
                    LINE(2973,(t_yy_parse_failed()));
                    v_yymajor = 121LL /* self::YYNOCODE */;
                  }
                }
                else if (!equal(v_yymx, 78LL /* self::YYERRORSYMBOL */)) {
                  {
                    v_u2 = 0LL;
                    LINE(2977,(t_yy_shift(v_yyact, NAMVAR(s_svi1089a340, 78LL) /* self::YYERRORSYMBOL */, VarNR(v_u2))));
                  }
                }
              }
            }
            m_yyerrcnt = 3LL;
            v_yyerrorhit = 1LL;
          }
        }
        else {
          {
            LINE(2994,(t_yy_accept()));
            v_yymajor = 121LL /* self::YYNOCODE */;
          }
        }
      }
    } while ((!equal(v_yymajor, 121LL /* self::YYNOCODE */) && not_less(m_yyidx, 0LL)));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 76 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(TP_yyStackEntry)
const InstanceOfInfo c_TP_yyStackEntry::s_instanceof_table[] = {
  {0x2149B61AA8A04F5DLL,1,"TP_yyStackEntry",&cw_TP_yyStackEntry},
};
const int c_TP_yyStackEntry::s_instanceof_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_TP_yyStackEntry = {
  (ObjectData*(*)(ObjectData*))coo_TP_yyStackEntry,
  c_TP_yyStackEntry::s_call_info_table,c_TP_yyStackEntry::s_call_info_index,
  c_TP_yyStackEntry::s_instanceof_table,c_TP_yyStackEntry::s_instanceof_index,
  &c_TP_yyStackEntry::s_class_name,
  &c_TP_yyStackEntry::os_prop_table,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 12 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(TP_yyToken)
const InstanceOfInfo c_TP_yyToken::s_instanceof_table[] = {
  {0x1D2701EFE645FBEBLL,0,"TP_yyToken",&cw_TP_yyToken},
  {0x3BDD11EABFCD6F0BLL,1,"ArrayAccess",(const ObjectStaticCallbacks*)2},
};
const int c_TP_yyToken::s_instanceof_index[] = {
  3,
  -1,-1,-1,0,
};
CallInfo c_TP_yyToken::ci___tostring((void*)&c_TP_yyToken::i___tostring, (void*)&c_TP_yyToken::ifa___tostring, 0, 4, 0x0000000000000000LL);
CallInfo c_TP_yyToken::ci___construct((void*)&c_TP_yyToken::i___construct, (void*)&c_TP_yyToken::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c_TP_yyToken::ci_offsetexists((void*)&c_TP_yyToken::i_offsetexists, (void*)&c_TP_yyToken::ifa_offsetexists, 1, 4, 0x0000000000000000LL);
CallInfo c_TP_yyToken::ci_offsetget((void*)&c_TP_yyToken::i_offsetget, (void*)&c_TP_yyToken::ifa_offsetget, 1, 4, 0x0000000000000000LL);
CallInfo c_TP_yyToken::ci_offsetunset((void*)&c_TP_yyToken::i_offsetunset, (void*)&c_TP_yyToken::ifa_offsetunset, 1, 4, 0x0000000000000000LL);
CallInfo c_TP_yyToken::ci_offsetset((void*)&c_TP_yyToken::i_offsetset, (void*)&c_TP_yyToken::ifa_offsetset, 2, 4, 0x0000000000000000LL);
Variant c_TP_yyToken::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(s_sa00000000) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_TP_yyToken::i_offsetexists(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetexists, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::offsetExists", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_offsetexists(arg0));
  }
}
Variant c_TP_yyToken::i_offsetget(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetget, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::offsetGet", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_offsetget(arg0));
  }
}
Variant c_TP_yyToken::i_offsetunset(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetunset, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::offsetUnset", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_offsetunset(arg0));
  }
}
Variant c_TP_yyToken::i_offsetset(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_offsetset, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("TP_yyToken::offsetSet", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_offsetset(arg0, arg1));
  }
}
Variant c_TP_yyToken::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  return (self->t___tostring());
}
Variant c_TP_yyToken::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (s_sva00000000) : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_TP_yyToken::ifa_offsetexists(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetexists, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::offsetExists", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_offsetexists(arg0));
}
Variant c_TP_yyToken::ifa_offsetget(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetget, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::offsetGet", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_offsetget(arg0));
}
Variant c_TP_yyToken::ifa_offsetunset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetunset, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("TP_yyToken::offsetUnset", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_offsetunset(arg0));
}
Variant c_TP_yyToken::ifa_offsetset(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_offsetset, coo_TP_yyToken);
  }
  c_TP_yyToken *self ATTRIBUTE_UNUSED (static_cast<c_TP_yyToken*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("TP_yyToken::offsetSet", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_offsetset(arg0, arg1));
}
const MethodCallInfoTable c_TP_yyToken::s_call_info_table[] = {
  { 0x3E6BCFB9742FC700LL, 1, 12, "offsetExists", &c_TP_yyToken::ci_offsetexists },
  { 0x642C2D2994B34A13LL, 1, 10, "__toString", &c_TP_yyToken::ci___tostring },
  { 0x61D11ECEF4404498LL, 1, 9, "offsetGet", &c_TP_yyToken::ci_offsetget },
  { 0x0957F693A48AF738LL, 0, 9, "offsetSet", &c_TP_yyToken::ci_offsetset },
  { 0x08329980E6369ABALL, 1, 11, "offsetUnset", &c_TP_yyToken::ci_offsetunset },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_TP_yyToken::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_TP_yyToken::s_call_info_index[] = {
  15,
  0,-1,-1,1,-1,-1,-1,-1,
  2,-1,4,-1,-1,-1,-1,5,

};
c_TP_yyToken *c_TP_yyToken::create(CVarRef v_s, CVarRef v_m //  = s_sva00000000
) {
  CountableHelper h(this);
  init();
  t___construct(v_s, v_m);
  return this;
}
const ObjectStaticCallbacks cw_TP_yyToken = {
  (ObjectData*(*)(ObjectData*))coo_TP_yyToken,
  c_TP_yyToken::s_call_info_table,c_TP_yyToken::s_call_info_index,
  c_TP_yyToken::s_instanceof_table,c_TP_yyToken::s_instanceof_index,
  &c_TP_yyToken::s_class_name,
  &c_TP_yyToken::os_prop_table,&c_TP_yyToken::ci___construct,0,0
};
void c_TP_yyToken::init() {
  m_string = NAMSTR(s_ss00000000, "");
  m_metadata = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 17 */
void c_TP_yyToken::t___construct(Variant v_s, Variant v_m //  = s_sa00000000
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(TP_yyToken, TP_yyToken::__construct);
  INTERCEPT_INJECTION("TP_yyToken::__construct", array_createvi(2, toVPOD(v_s), toVPOD(v_m)), );
  bool oldInCtor = gasInCtor(true);
  if (instanceOf(v_s, NAMSTR(s_ssc90988f1, "TP_yyToken"))) {
    {
      {
        LINE(20,0);
        const Variant &tmp0((v_s.o_getPublic(NAMSTR(s_ss69ad4382, "string"), true)));
        m_string.assignVal(tmp0);
      }
      {
        LINE(21,0);
        const Variant &tmp0((v_s.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true)));
        m_metadata.assignVal(tmp0);
      }
    }
  }
  else {
    {
      m_string = (toString(v_s));
      if (instanceOf(v_m, NAMSTR(s_ssc90988f1, "TP_yyToken"))) {
        {
          {
            LINE(25,0);
            const Variant &tmp0((v_m.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true)));
            m_metadata.assignVal(tmp0);
          }
        }
      }
      else if (x_is_array(v_m)) {
        {
          m_metadata.assignVal(v_m);
        }
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 32 */
String c_TP_yyToken::t___tostring() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TP_yyToken, TP_yyToken::__toString);
  INTERCEPT_INJECTION("TP_yyToken::__toString", null_array, r);
  return toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss5a17e1d9, "_string"), true));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 37 */
bool c_TP_yyToken::t_offsetexists(CVarRef v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TP_yyToken, TP_yyToken::offsetExists);
  INTERCEPT_INJECTION("TP_yyToken::offsetExists", array_createvi(1, toVPOD(v_offset)), r);
  {
    return isset(m_metadata, v_offset);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 42 */
Variant c_TP_yyToken::t_offsetget(Variant v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TP_yyToken, TP_yyToken::offsetGet);
  INTERCEPT_INJECTION("TP_yyToken::offsetGet", array_createvi(1, toVPOD(v_offset)), r);
  return LINE(44,(m_metadata.rvalAt(v_offset, AccessFlags::Error)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 42 */
Variant &c_TP_yyToken::___offsetget_lval(Variant v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(TP_yyToken, TP_yyToken::offsetGet);
  Variant &v = g->__lvalProxy;
  v = t_offsetget(v_offset);
  return v;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 47 */
Variant c_TP_yyToken::t_offsetset(Variant v_offset, CVarRef v_value) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(TP_yyToken, TP_yyToken::offsetSet);
  INTERCEPT_INJECTION("TP_yyToken::offsetSet", array_createvi(2, toVPOD(v_offset), toVPOD(v_value)), r);
  Variant v_x;

  if (x_is_null(v_offset)) {
    {
      {
        bool tmp0;
        {
          tmp0 = (isset(v_value, 0LL));
        }
        if (tmp0) {
          {
            {
              Variant tmp0(((instanceOf(v_value, NAMSTR(s_ssc90988f1, "TP_yyToken")) ? ((Variant)(LINE(52,(v_value.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true))))) : ((Variant)(v_value)))));
              v_x.assignVal(tmp0);
            }
            {
              LINE(53,0);
              const Variant &tmp0((x_array_merge(2, m_metadata, Array(array_createvi(1, toVPOD(v_x))))));
              m_metadata.assignVal(tmp0);
            }
            return null;
          }
        }
      }
      {
        LINE(56,0);
        int tmp0((x_count(m_metadata)));
        v_offset = tmp0;
      }
    }
  }
  if (x_is_null(v_value)) {
    {
      return null;
    }
  }
  if (instanceOf(v_value, NAMSTR(s_ssc90988f1, "TP_yyToken"))) {
    {
      if (LINE(62,(toBoolean(v_value.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true))))) {
        {
          {
            LINE(63,0);
            const Variant &tmp0((v_value.o_getPublic(NAMSTR(s_sscc5f081c, "metadata"), true)));
            m_metadata.set(v_offset, (tmp0));
          }
        }
      }
    }
  }
  else if (toBoolean(v_value)) {
    {
      m_metadata.set(v_offset, (v_value));
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 70 */
Variant c_TP_yyToken::t_offsetunset(CVarRef v_offset) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(TP_yyToken, TP_yyToken::offsetUnset);
  INTERCEPT_INJECTION("TP_yyToken::offsetUnset", array_createvi(1, toVPOD(v_offset)), r);
  m_metadata.weakRemove(v_offset);
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Templateparser() {
  return NEWOBJ(c_Smarty_Internal_Templateparser)();
}
ObjectData *coo_TP_yyStackEntry() {
  return NEWOBJ(c_TP_yyStackEntry)();
}
ObjectData *coo_TP_yyToken() {
  return NEWOBJ(c_TP_yyToken)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_templateparser.php, pm_php$Smarty$libs$sysplugins$smarty_internal_templateparser_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(tp_yystackentry) = true;
  g->CDEC(smarty_internal_templateparser) = true;
  g->CDEC(tp_yytoken) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svidfed6671, 19LL),
  (int64)&NAMVAR(s_svie674c6b6, 590LL),
  (int64)&NAMVAR(s_svif2a1fb10, 32LL),
  (int64)&NAMVAR(s_svi4396a855, 68LL),
  (int64)&NAMVAR(s_sviaf4f10ee, 40LL),
  (int64)&NAMVAR(s_svi2343698b, 27LL),
  (int64)&NAMVAR(s_svi45351914, 45LL),
  (int64)&NAMVAR(s_svib5b42dba, 52LL),
  (int64)&NAMVAR(s_svi28dae53e, -91LL),
  (int64)&NAMVAR(s_svif01bca90, 0LL),
  (int64)&NAMVAR(s_svs1901b50f, "Security error: Call to private object member not allowed"),
  (int64)&NAMVAR(s_svifcca50a8, 46LL),
  (int64)&NAMVAR(s_svi1089a340, 78LL),
  (int64)&NAMVAR(s_svs450736a0, "Security error: Call to dynamic object member not allowed"),
  (int64)&NAMVAR(s_svi1c9845ac, 11LL),
  (int64)&NAMVAR(s_svi70c2484d, 21LL),
  (int64)&NAMVAR(s_svifc87a5f7, 30LL),
  (int64)&NAMVAR(s_svi790f4bf9, 60LL),
  (int64)&NAMVAR(s_svic1bc2df2, 15LL),
  (int64)&NAMVAR(s_svi991ae7ae, 41LL),
  (int64)&NAMVAR(s_svif261966b, 44LL),
  (int64)&NAMVAR(s_svicbcb7ccc, 252LL),
  (int64)&NAMVAR(s_svi8ef1aafe, 55LL),
  (int64)&NAMVAR(s_svibfdab04a, 38LL),
  (int64)&NAMVAR(s_svi7e65284e, 23LL),
  (int64)&NAMVAR(s_svi4ab816d7, 121LL),
  (int64)&NAMVAR(s_sviaf04d6ab, 36LL),
  (int64)&NAMVAR(s_svibb0e3997, 31LL),
  (int64)&NAMVAR(s_sviebf595ef, 48LL),
  (int64)&NAMVAR(s_svi804a9f6c, 76LL),
  (int64)&NAMVAR(s_svi4a053537, 24LL),
  (int64)&NAMVAR(s_svicd2ec71e, -45LL),
  (int64)&NAMVAR(s_svi089096cd, 37LL),
  (int64)&NAMVAR(s_svi91434413, 67LL),
  (int64)&NAMVAR(s_svia6bfbbdd, 3LL),
  (int64)&NAMVAR(s_svi5e544a31, 4LL),
  (int64)&NAMVAR(s_svi1abc09e0, 64LL),
  (int64)&NAMVAR(s_svie87da176, 18LL),
  (int64)&NAMVAR(s_svi4d7e8e12, 6LL),
  (int64)&NAMVAR(s_svid5c9371d, 33LL),
  (int64)&NAMVAR(s_svide090339, 72LL),
  (int64)&NAMVAR(s_svi542bad8b, 10LL),
  (int64)&NAMVAR(s_svid7a79683, 20LL),
  (int64)&NAMVAR(s_svi602f2cad, 57LL),
  (int64)&NAMVAR(s_svi126f569c, 25LL),
  (int64)&NAMVAR(s_svi39793333, 54LL),
  (int64)&NAMVAR(s_svie83bacbb, 58LL),
  (int64)&NAMVAR(s_svi4d0d20cd, 63LL),
  (int64)&NAMVAR(s_svi86af027e, 16LL),
  (int64)&NAMVAR(s_svicbe229a2, 29LL),
  (int64)&NAMVAR(s_svi2525fc77, 26LL),
  (int64)&NAMVAR(s_svief988c68, 71LL),
  (int64)&NAMVAR(s_svi4f5b0070, 59LL),
  (int64)&NAMVAR(s_svi9afd1c48, 12LL),
  (int64)&NAMVAR(s_svi32c33fb0, 70LL),
  (int64)&NAMVAR(s_svi5ecb9818, 73LL),
  (int64)&NAMVAR(s_svif43ec697, 9LL),
  (int64)&NAMVAR(s_svi6a15d700, 5LL),
  (int64)&NAMVAR(s_svi61cc8770, 34LL),
  (int64)&NAMVAR(s_svi92b731e0, 51LL),
  (int64)&NAMVAR(s_sviab925b96, 66LL),
  (int64)&NAMVAR(s_svi3b777f28, 206LL),
  (int64)&NAMVAR(s_svi8a2932db, 14LL),
  (int64)&NAMVAR(s_svi1452654a, 28LL),
  (int64)&NAMVAR(s_svi3930cb30, 22LL),
  (int64)&NAMVAR(s_svi49bd2782, 100LL),
  (int64)&NAMVAR(s_svie4a8e823, 387LL),
  (int64)&NAMVAR(s_svib20a2bb5, 75LL),
  (int64)&NAMVAR(s_svi33c6ced4, 201LL),
  (int64)&NAMVAR(s_svib794f8ce, 1LL),
  (int64)&NAMVAR(s_svs2b9acd67, "yy0"),
  (int64)&NAMVAR(s_svi7aeb669d, 7LL),
  (int64)&NAMVAR(s_svia4de988f, 50LL),
  (int64)&NAMVAR(s_svi81e173cf, 53LL),
  (int64)&NAMVAR(s_svi90d5f98c, 2LL),
  (int64)&NAMVAR(s_svi2d6d01cf, 13LL),
  (int64)&NAMVAR(s_svi6eded265, 74LL),
  (int64)&NAMVAR(s_svicba2782f, 47LL),
  (int64)&NAMVAR(s_svi5c755c6f, 49LL),
  (int64)&NAMVAR(s_svic1381bba, 2637LL),
  (int64)&NAMVAR(s_svia217eff2, 65LL),
  (int64)&NAMVAR(s_svi0844d1a0, 39LL),
  (int64)&NAMVAR(s_svie69e43fe, 35LL),
  (int64)&NAMVAR(s_svi1e7b6f7a, 42LL),
  (int64)&NAMVAR(s_svi7f91e5ac, 69LL),
  (int64)&NAMVAR(s_svi761c733a, 62LL),
  (int64)&NAMVAR(s_svic2dfef9e, 77LL),
  (int64)&NAMVAR(s_svic1796e5f, 61LL),
  (int64)&NAMVAR(s_svi5608ae53, 43LL),
  (int64)&NAMVAR(s_svi30e635cc, 17LL),
  (int64)&NAMVAR(s_svid5a00325, 588LL),
  (int64)&NAMVAR(s_svic3578135, 8LL),
  (int64)&NAMVAR(s_svia8a4a401, 56LL),
  (int64)&NAMVAR(s_svi1135437d, 589LL),
  (int64)&s_svabce8d3f1,
  (int64)&s_sva72fd2b6e,
  (int64)&s_svaa51ff62a,
  (int64)&s_sva00000000,
  (int64)&null_variant,
  (int64)&s_svad6303cd7,
  (int64)&s_sva3a11567d,
  (int64)&s_sva062775d9,
  (int64)&s_svabf317507,
  (int64)&s_sva1165cb89,
  (int64)&s_svaedab6496,
  (int64)&false_varNR,
  (int64)&s_sva57350f73,
  (int64)&true_varNR,
  (int64)&NAMVAR(s_svs00000000, ""),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x5516FCBC60F5ED08LL,42,0,0,100,4,0,&NAMSTR(s_ss60f5ed08, "TP_EQUAL") },
  {0x68ECFBC2CA073E0ELL,92,1,0,100,4,0,&NAMSTR(s_ssca073e0e, "YY_NO_ACTION") },
  {0x10EA168BCF023D11LL,37,2,0,100,4,0,&NAMSTR(s_sscf023d11, "TP_LDELSLASH") },
  {0x0F00662CF1ADA11BLL,81,3,0,100,4,0,&NAMSTR(s_ssf1ada11b, "TP_LESSEQUAL") },
  {0x30BA328CAB29F31ELL,15,4,0,100,4,0,&NAMSTR(s_ssab29f31e, "TP_ISIN") },
  {0x399407E2FF592721LL,58,5,0,36,4,0,&NAMSTR(s_ssff592721, "TP_LDELFOREACH") },
  {0x7FB468C9B2C8C521LL,5,6,0,100,4,0,&NAMSTR(s_ssb2c8c521, "TP_ISEVENBY") },
  {0x0A74DB04E84B1123LL,66,7,0,36,4,0,&NAMSTR(s_sse84b1123, "TP_QMARK") },
  {0x7DF92B69086F1123LL,53,8,0,100,4,0,&NAMSTR(s_ss086f1123, "YY_REDUCE_USE_DFLT") },
  {0x7BD5F43DB1C7E025LL,0,9,0,100,4,0,&NAMSTR(s_ssb1c7e025, "YYFALLBACK") },
  {0x08F500C685E73426LL,3,10,0,100,7,0,&NAMSTR(s_sscacf77de, "Err1") },
  {0x7BA538AF9E71DF2ALL,66,11,0,100,4,0,&NAMSTR(s_ss9e71df2a, "TP_ISNOTEVENBY") },
  {0x47B258225027132CLL,58,12,0,100,4,0,&NAMSTR(s_ss5027132c, "YYERRORSYMBOL") },
  {0x36D3A0216BC06A33LL,56,13,0,100,7,0,&NAMSTR(s_ss73276b3e, "Err2") },
  {0x2C53055EEB68FC36LL,39,14,0,100,4,0,&NAMSTR(s_sseb68fc36, "TP_LINEBREAK") },
  {0x0E5A60B1B6B5BA39LL,49,15,0,100,4,0,&NAMSTR(s_ssb6b5ba39, "TP_LDELIF") },
  {0x1B5B4A8ADA4F433ALL,11,16,0,100,4,0,&NAMSTR(s_ssda4f433a, "TP_APTR") },
  {0x1228F1FC6482683DLL,70,17,0,100,4,0,&NAMSTR(s_ss6482683d, "TP_HATCH") },
  {0x74BEC042150E2B3ELL,30,18,0,36,4,0,&NAMSTR(s_ss150e2b3e, "TP_LDEL") },
  {0x7DC4DEF552DD9C3ELL,64,19,0,100,4,0,&NAMSTR(s_ss52dd9c3e, "TP_ISDIVBY") },
  {0x436EC1218F44CF42LL,-14,20,0,36,4,0,&NAMSTR(s_ss8f44cf42, "TP_ISNOTEVEN") },
  {0x6B9CA863BD1E5342LL,-13,21,0,100,4,0,&NAMSTR(s_ssbd1e5342, "YY_SHIFT_MAX") },
  {0x02E6968A5D0D8645LL,70,22,0,100,4,0,&NAMSTR(s_ss5d0d8645, "TP_HEX") },
  {0x0E63EB34E012DA4ALL,58,23,0,100,4,0,&NAMSTR(s_sse012da4a, "TP_UNIMATH") },
  {0x3322FF9942311A4CLL,6,24,0,100,4,0,&NAMSTR(s_ss42311a4c, "TP_SEMICOLON") },
  {0x22F247A06C1EC950LL,40,25,0,100,4,0,&NAMSTR(s_ss6c1ec950, "YYNOCODE") },
  {0x5C471C0FDD33ED5BLL,6,26,0,100,4,0,&NAMSTR(s_ssdd33ed5b, "TP_CLOSEP") },
  {0x0312A8C286D9925DLL,-25,27,0,36,4,0,&NAMSTR(s_ss86d9925d, "TP_SMARTYBLOCKCHILD") },
  {0x350750BB32DD2A5DLL,50,28,0,100,4,0,&NAMSTR(s_ss32dd2a5d, "TP_ISNOTODD") },
  {0x5AB143E8141E0E60LL,57,29,0,100,4,0,&NAMSTR(s_ss141e0e60, "TP_BACKTICK") },
  {0x652360F1BBDEED61LL,14,30,0,100,4,0,&NAMSTR(s_ssbbdeed61, "TP_INCDEC") },
  {0x62C79F039AF71A65LL,-10,31,0,100,4,0,&NAMSTR(s_ss9af71a65, "YY_SHIFT_USE_DFLT") },
  {0x475ED390ACB6AB67LL,-9,32,0,36,4,0,&NAMSTR(s_ssacb6ab67, "TP_MATH") },
  {0x6573B27D6EC26C67LL,-30,33,0,100,4,0,&NAMSTR(s_ss6ec26c67, "TP_GREATEREQUAL") },
  {0x5E5A9B290E62C069LL,1,34,0,36,4,0,&NAMSTR(s_ss0e62c069, "TP_COMMENT") },
  {0x0CE3BB2E36C91E69LL,22,35,0,100,4,0,&NAMSTR(s_ss36c91e69, "TP_PHPSTARTTAG") },
  {0x1251841A9EC8926ELL,44,36,0,100,4,0,&NAMSTR(s_ss9ec8926e, "TP_NOTEQUALS") },
  {0x467A90AE16D11E73LL,-37,37,0,100,4,0,&NAMSTR(s_ss16d11e73, "TP_ID") },
  {0x306449B15F3D4474LL,33,38,0,36,4,0,&NAMSTR(s_ss5f3d4474, "TP_ASPSTARTTAG") },
  {0x2F3B42B35171CD74LL,19,39,0,100,4,0,&NAMSTR(s_ss5171cd74, "TP_INTEGER") },
  {0x56EB27DBF53F4F76LL,15,40,0,100,4,0,&NAMSTR(s_ssf53f4f76, "TP_LAND") },
  {0x659C7D637907EE77LL,-27,41,0,100,4,0,&NAMSTR(s_ss7907ee77, "TP_OTHER") },
  {0x51EED64D2830D879LL,-27,42,0,100,4,0,&NAMSTR(s_ss2830d879, "TP_PTR") },
  {0x0C3289D6E2AD157BLL,3,43,0,100,4,0,&NAMSTR(s_sse2ad157b, "TP_SINGLEQUOTESTRING") },
  {0x7519ECD79C2A657FLL,6,44,0,100,4,0,&NAMSTR(s_ss9c2a657f, "TP_TO") },
  {0x6B2E763944C90986LL,-23,45,0,36,4,0,&NAMSTR(s_ss44c90986, "TP_TYPECAST") },
  {0x58325064AC98E986LL,6,46,0,36,4,0,&NAMSTR(s_ssac98e986, "TP_DOUBLECOLON") },
  {0x17E8A7642C38E986LL,-11,47,0,100,4,0,&NAMSTR(s_ss2c38e986, "TP_EQUALS") },
  {0x0D309CA575B59F88LL,41,48,0,100,4,0,&NAMSTR(s_ss75b59f88, "TP_RDEL") },
  {0x63D052D8D25B868ALL,-33,49,0,100,4,0,&NAMSTR(s_ssd25b868a, "TP_AS") },
  {0x7C4102FCBED74E8FLL,-45,50,0,100,4,0,&NAMSTR(s_ssbed74e8f, "TP_STEP") },
  {0x52B04442A408AA91LL,-11,51,0,100,4,0,&NAMSTR(s_ssa408aa91, "TP_MOD") },
  {0x734C3D4CB734E29ELL,-35,52,0,100,4,0,&NAMSTR(s_ssb734e29e, "TP_AT") },
  {0x29EDE70888B976A1LL,22,53,0,36,4,0,&NAMSTR(s_ss88b976a1, "TP_LITERALSTART") },
  {0x1050E63D3A921BA1LL,-3,54,0,100,4,0,&NAMSTR(s_ss3a921ba1, "TP_NONEIDENTITY") },
  {0x6530AB49DFEF10A3LL,21,55,0,100,4,0,&NAMSTR(s_ssdfef10a3, "TP_LOR") },
  {0x2D089B977A44F9A6LL,-15,56,0,100,4,0,&NAMSTR(s_ss7a44f9a6, "TP_XMLTAG") },
  {0x3F585CF37A8086A9LL,-19,57,0,36,4,0,&NAMSTR(s_ss7a8086a9, "TP_PHPENDTAG") },
  {0x7DC2AD98C79CB7A9LL,24,58,0,36,4,0,&NAMSTR(s_ssc79cb7a9, "TP_COMMA") },
  {0x57937830A48308A9LL,-52,59,0,100,4,0,&NAMSTR(s_ssa48308a9, "TP_INSTANCEOF") },
  {0x03D95407A43343AALL,-27,60,0,100,4,0,&NAMSTR(s_ssa43343aa, "TP_LESSTHAN") },
  {0x3ED7C7B0F6CE89ADLL,-36,61,0,100,4,0,&NAMSTR(s_ssf6ce89ad, "YY_REDUCE_MAX") },
  {0x60F917846B1A33AELL,-44,62,0,100,4,0,&NAMSTR(s_ss6b1a33ae, "TP_LITERAL") },
  {0x106E8D658561C4B1LL,-14,63,0,100,4,0,&NAMSTR(s_ss8561c4b1, "TP_SPACE") },
  {0x4B3C181A77169CB2LL,-40,64,0,100,4,0,&NAMSTR(s_ss77169cb2, "TP_LDELFOR") },
  {0x4EE3EFB10C800CB4LL,1,65,0,36,4,0,&NAMSTR(s_ss0c800cb4, "YYSTACKDEPTH") },
  {0x23E4FCDBC11E4EB4LL,2,66,0,100,4,0,&NAMSTR(s_ssc11e4eb4, "YYNSTATE") },
  {0x45BDA7B90D4B06B5LL,-38,67,0,100,4,0,&NAMSTR(s_ss0d4b06b5, "TP_QUOTE") },
  {0x42CF4F83D98DE9B9LL,-56,68,0,100,4,0,&NAMSTR(s_ssd98de9b9, "YYNRULE") },
  {0x07C9091816462CBALL,5,69,0,36,4,0,&NAMSTR(s_ss16462cba, "TP_VERT") },
  {0x441D3EE6590505BALL,-61,70,0,100,7,0,&NAMSTR(s_ss590505ba, "YYERRSYMDT") },
  {0x7BB0BF96F7413FBDLL,20,71,0,100,4,0,&NAMSTR(s_ssf7413fbd, "TP_ASPENDTAG") },
  {0x165FE44F4F87EFBELL,-13,72,0,100,4,0,&NAMSTR(s_ss4f87efbe, "TP_ISNOTODDBY") },
  {0x25C929071AD5EAC2LL,-28,73,0,100,4,0,&NAMSTR(s_ss1ad5eac2, "TP_NOT") },
  {0x79B8CD313F6410C8LL,-40,74,0,36,4,0,&NAMSTR(s_ss3f6410c8, "TP_COLON") },
  {0x252EBC9125C0B5C8LL,-13,75,0,36,4,0,&NAMSTR(s_ss25c0b5c8, "TP_LITERALEND") },
  {0x5111C209B78E82C8LL,-9,76,0,100,4,0,&NAMSTR(s_ssb78e82c8, "TP_LXOR") },
  {0x70D612D714564FCBLL,-49,77,0,100,4,0,&NAMSTR(s_ss14564fcb, "TP_ISODD") },
  {0x7DCC42882A3320CDLL,-6,78,0,100,4,0,&NAMSTR(s_ss2a3320cd, "TP_ISODDBY") },
  {0x42299866FF5BBECFLL,-48,79,0,100,4,0,&NAMSTR(s_ssff5bbecf, "YY_SZ_ACTTAB") },
  {0x57B93C963A862CD6LL,-20,80,0,100,4,0,&NAMSTR(s_ss3a862cd6, "TP_GREATERTHAN") },
  {0x33FBBE95EA1F7ADCLL,-77,81,0,100,4,0,&NAMSTR(s_ssea1f7adc, "TP_ANDSYM") },
  {0x6316D62F6498BEE0LL,-56,82,0,100,4,0,&NAMSTR(s_ss6498bee0, "TP_OPENP") },
  {0x73853E5E2D031FE2LL,5,83,0,100,4,0,&NAMSTR(s_ss2d031fe2, "TP_ISNOTDIVBY") },
  {0x06E1C70B13FFA9E4LL,-30,84,0,100,4,0,&NAMSTR(s_ss13ffa9e4, "TP_IDENTITY") },
  {0x4F1D93F572F3A4E5LL,-38,85,0,100,4,0,&NAMSTR(s_ss72f3a4e5, "TP_CLOSEB") },
  {0x781A188982AA11E6LL,-85,86,0,100,4,0,&NAMSTR(s_ss82aa11e6, "TP_DOLLARID") },
  {0x554E88C81B0A40E7LL,-2,87,0,100,4,0,&NAMSTR(s_ss1b0a40e7, "TP_OPENB") },
  {0x0768F5CEBEEE29E9LL,-68,88,0,100,4,0,&NAMSTR(s_ssbeee29e9, "TP_ISEVEN") },
  {0x45B3C723FE21C0EDLL,-52,89,0,100,4,0,&NAMSTR(s_ssfe21c0ed, "TP_DOLLAR") },
  {0x552589ECD7E2F0F1LL,-11,90,0,100,4,0,&NAMSTR(s_ssd7e2f0f1, "YY_ERROR_ACTION") },
  {0x4B38107DCEEF72F3LL,-35,91,0,36,4,0,&NAMSTR(s_ssceef72f3, "TP_FAKEPHPSTARTTAG") },
  {0x1C56465FEC9858F3LL,-49,92,0,100,4,0,&NAMSTR(s_ssec9858f3, "TP_DOT") },
  {0x41FD8358A8F173F6LL,-3,93,0,100,4,0,&NAMSTR(s_ssa8f173f6, "YY_ACCEPT_ACTION") },

  {0x22D31795AF57B8C2LL,1,94,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yy_shift_ofst),&NAMSTR(s_ss032f8db9, "yy_shift_ofst") },
  {0x5F45F075C40AB6A4LL,9,95,0,140,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yy_reduce_ofst),&NAMSTR(s_ss25866bc3, "yy_reduce_ofst") },
  {0x3A793A05E0E33EE4LL,0,96,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yyReduceMap),&NAMSTR(s_ss82ec5ca7, "yyReduceMap") },
  {0x7BD5F43DB1C7E025LL,1,97,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yyFallback),&NAMSTR(s_ss020733d0, "yyFallback") },
  {0x663EEFD023D69126LL,4,98,0,76,10,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yyTraceFILE),&NAMSTR(s_ssb2c93023, "yyTraceFILE") },
  {0x045A242C13909968LL,6,99,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yy_action),&NAMSTR(s_ss26ee0872, "yy_action") },
  {0x2F015F5A786AF6ECLL,-3,100,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yy_default),&NAMSTR(s_sse8f5bb26, "yy_default") },
  {0x70EA24311727B2AFLL,2,101,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yyRuleName),&NAMSTR(s_ssfde550ab, "yyRuleName") },
  {0x17BA3620408DF390LL,-1,98,0,76,10,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yyTracePrompt),&NAMSTR(s_ss8e30b4de, "yyTracePrompt") },
  {0x4C043FD47EF0F0D5LL,-7,102,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yyRuleInfo),&NAMSTR(s_ssd5151e8c, "yyRuleInfo") },
  {0x2C8D6890BF9BA5FALL,-4,103,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yyExpectedTokens),&NAMSTR(s_ss39da995b, "yyExpectedTokens") },
  {0x55DB92615A08D99FLL,-11,104,0,204,8,offsetof(GlobalVariables,s_Smarty_Internal_Templateparser___yy_lookahead),&NAMSTR(s_ss08b8ba56, "yy_lookahead") },

  {0x64E2EF4B26DA3DA1LL,0,98,32,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m__retvalue),&NAMSTR(s_ss9a242eac, "\000Smarty_Internal_Templateparser\000_retvalue") },
  {0x6CBA4110CF6FC103LL,3,105,32,65,2,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_internalError),&NAMSTR(s_ss2f52509a, "\000Smarty_Internal_Templateparser\000internalError") },
  {0x02928D355A64D726LL,3,97,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_yystack),&NAMSTR(s_ssa2fb8bc6, "yystack") },
  {0x1721E9197DB002A7LL,-2,98,32,1,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_lex),&NAMSTR(s_ssfa3f1b6d, "\000Smarty_Internal_Templateparser\000lex") },
  {0x182086EA409E3BC7LL,3,98,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_yyidx),&NAMSTR(s_sscb1a5010, "yyidx") },
  {0x7D464AB3790EA3C7LL,-5,106,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_yyTokenName),&NAMSTR(s_ss7f9b58ad, "yyTokenName") },
  {0x175C06E6A9FC236FLL,2,107,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_successful),&NAMSTR(s_sse9a86b8c, "successful") },
  {0x38DCFEC60916B077LL,-5,98,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_yyerrcnt),&NAMSTR(s_ssecf65ed2, "yyerrcnt") },
  {0x221D1C6BECC5569BLL,-5,9,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templateparser, m_retvalue),&NAMSTR(s_ss43ec3a0a, "retvalue") },

  {0x5268FA5127B409C2LL,1,98,0,68,10,GET_PROPERTY_OFFSET(c_TP_yyStackEntry, m_stateno),&NAMSTR(s_ss109bc0ae, "stateno") },
  {0x7828D0B5DB3C70A3LL,1,98,0,4,10,GET_PROPERTY_OFFSET(c_TP_yyStackEntry, m_major),&NAMSTR(s_ssec82c80c, "major") },
  {0x7DE68D3021FA7C7BLL,0,98,0,68,10,GET_PROPERTY_OFFSET(c_TP_yyStackEntry, m_minor),&NAMSTR(s_ss80e0352e, "minor") },

  {0x15B369BE0D0C8149LL,1,108,0,68,10,GET_PROPERTY_OFFSET(c_TP_yyToken, m_string),&NAMSTR(s_ss69ad4382, "string") },
  {0x614C02F610538E13LL,0,97,0,68,10,GET_PROPERTY_OFFSET(c_TP_yyToken, m_metadata),&NAMSTR(s_sscc5f081c, "metadata") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Templateparser hash
  -1,-1,-1,-1,-1,-1,-1,-1,-1,93,-1,-1,91,-1,90,-1,-1,-1,89,-1,-1,-1,88,-1,87,86,85,84,-1,83,-1,82,-1,-1,-1,81,-1,-1,-1,-1,-1,80,-1,-1,-1,-1,-1,-1,79,-1,78,-1,77,-1,-1,74,-1,-1,-1,-1,-1,73,-1,-1,-1,72,71,-1,-1,69,68,-1,-1,-1,67,65,-1,64,63,-1,-1,62,61,-1,-1,60,57,-1,-1,56,-1,-1,55,-1,53,-1,-1,52,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,51,-1,50,-1,-1,-1,-1,49,-1,48,-1,45,-1,-1,-1,-1,-1,-1,44,-1,-1,-1,43,-1,42,-1,41,40,-1,38,37,-1,-1,-1,-1,36,-1,-1,-1,-1,34,-1,32,-1,31,-1,-1,-1,30,29,-1,-1,27,-1,26,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,25,-1,-1,-1,24,-1,23,-1,-1,-1,-1,22,-1,-1,20,-1,-1,-1,18,17,-1,-1,16,15,-1,-1,14,-1,-1,13,-1,-1,-1,-1,-1,-1,12,-1,11,-1,-1,-1,10,9,-1,7,-1,5,-1,-1,4,-1,-1,3,-1,-1,-1,-1,-1,-1,-1,-1,-1,2,-1,-1,1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,
  105,-1,-1,-1,-1,104,-1,-1,-1,-1,103,-1,-1,-1,-1,102,101,-1,-1,100,-1,-1,-1,99,-1,98,97,95,-1,94,-1,-1,
  -1,106,-1,107,-1,-1,108,109,-1,-1,-1,-1,-1,-1,-1,112,-1,-1,-1,-1,-1,-1,-1,113,-1,-1,-1,114,-1,-1,-1,-1,
  // Smarty_Internal_Templateparser lists
  109,107,106,-1,
  98,102,-1,
  -1,
  // TP_yyStackEntry hash
  -1,-1,0,1,-1,-1,-1,-1,
  // TP_yyStackEntry lists
  -1,
  -1,
  -1,
  // TP_yyToken hash
  -1,0,-1,1,-1,-1,-1,-1,
  // TP_yyToken lists
  -1,
  -1,
  -1,
  10,94,95,96,97,99,100,101,103,104,105,};
const ClassPropTable c_Smarty_Internal_Templateparser::os_prop_table = {
  31,112,31,99,255,10,36,0,
  cpt_hash_entries+288,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_TP_yyStackEntry::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+328,0,cpt_table_entries+115,cpt_static_inits
};
const ClassPropTable c_TP_yyToken::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+339,0,cpt_table_entries+118,cpt_static_inits
};
const Globals::StaticInits cpt_static_initializer(&c_Smarty_Internal_Templateparser::os_prop_table, cpt_hash_entries+350);

///////////////////////////////////////////////////////////////////////////////
}
