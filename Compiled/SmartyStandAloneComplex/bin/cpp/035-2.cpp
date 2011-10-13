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
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2388 */
void c_Smarty_Internal_Templateparser::t_yy_r49() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r49);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r49", null_array, );
  Variant tmp_ref;
  {
    LINE(2388,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -4LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ss3c3982d5, "start")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    const Numeric &tmp9(((m_yyidx + -2LL)));
    const Variant &tmp10((m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp8(array_createvs(1, toSPOD(NAMSTR(s_ss83fb672d, "to")), toVPOD(tmp10)));
    const Array &tmp11((Array(tmp8)));
    ArrayInit tmp3(array_createvi(2, toVPOD(VarNR(tmp7)), toVPOD(VarNR(tmp11))));
    const Array &tmp12((Array(tmp3)));
    const Variant &tmp13((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(VarNR(tmp12)))))));
    Variant tmp14(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svsb157050b, "for"), tmp13, NAMVAR(s_svif01bca90, 0LL))));
    m__retvalue.assignVal(tmp14);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2391 */
void c_Smarty_Internal_Templateparser::t_yy_r50() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r50);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r50", null_array, );
  Variant tmp_ref;
  {
    LINE(2391,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -6LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ss3c3982d5, "start")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    const Numeric &tmp9(((m_yyidx + -4LL)));
    const Variant &tmp10((m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp8(array_createvs(1, toSPOD(NAMSTR(s_ss83fb672d, "to")), toVPOD(tmp10)));
    const Array &tmp11((Array(tmp8)));
    const Numeric &tmp13(((m_yyidx + -2LL)));
    const Variant &tmp14((m_yystack.rvalRef(tmp13, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp12(array_createvs(1, toSPOD(NAMSTR(s_ss0470736e, "step")), toVPOD(tmp14)));
    const Array &tmp15((Array(tmp12)));
    ArrayInit tmp3(array_createvi(3, toVPOD(VarNR(tmp7)), toVPOD(VarNR(tmp11)), toVPOD(VarNR(tmp15))));
    const Array &tmp16((Array(tmp3)));
    const Variant &tmp17((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(VarNR(tmp16)))))));
    Variant tmp18(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svsb157050b, "for"), tmp17, NAMVAR(s_svif01bca90, 0LL))));
    m__retvalue.assignVal(tmp18);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2394 */
void c_Smarty_Internal_Templateparser::t_yy_r51() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r51);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r51", null_array, );
  Variant tmp_ref;
  {
    LINE(2394,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    Variant tmp3(((mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs5e0a0be6, "foreach"), tmp2)));
    m__retvalue.assignVal(tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2397 */
void c_Smarty_Internal_Templateparser::t_yy_r52() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r52);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r52", null_array, );
  Variant tmp_ref;
  {
    LINE(2398,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -5LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ssc4843a99, "from")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    const Numeric &tmp9(((m_yyidx + -2LL)));
    const Variant &tmp10((m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp8(array_createvs(1, toSPOD(NAMSTR(s_ss1247a693, "item")), toVPOD(tmp10)));
    const Array &tmp11((Array(tmp8)));
    ArrayInit tmp3(array_createvi(2, toVPOD(VarNR(tmp7)), toVPOD(VarNR(tmp11))));
    const Array &tmp12((Array(tmp3)));
    const Variant &tmp13((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(VarNR(tmp12)))))));
    Variant tmp14(((mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs5e0a0be6, "foreach"), tmp13)));
    m__retvalue.assignVal(tmp14);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2401 */
void c_Smarty_Internal_Templateparser::t_yy_r53() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r53);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r53", null_array, );
  Variant tmp_ref;
  {
    LINE(2402,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -8LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ssc4843a99, "from")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    const Numeric &tmp9(((m_yyidx + -2LL)));
    const Variant &tmp10((m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp8(array_createvs(1, toSPOD(NAMSTR(s_ss1247a693, "item")), toVPOD(tmp10)));
    const Array &tmp11((Array(tmp8)));
    const Numeric &tmp13(((m_yyidx + -5LL)));
    const Variant &tmp14((m_yystack.rvalRef(tmp13, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp12(array_createvs(1, toSPOD(NAMSTR(s_ss12e90587, "key")), toVPOD(tmp14)));
    const Array &tmp15((Array(tmp12)));
    ArrayInit tmp3(array_createvi(3, toVPOD(VarNR(tmp7)), toVPOD(VarNR(tmp11)), toVPOD(VarNR(tmp15))));
    const Array &tmp16((Array(tmp3)));
    const Variant &tmp17((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(VarNR(tmp16)))))));
    Variant tmp18(((mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs5e0a0be6, "foreach"), tmp17)));
    m__retvalue.assignVal(tmp18);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2405 */
void c_Smarty_Internal_Templateparser::t_yy_r54() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r54);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r54", null_array, );
  Variant tmp_ref;
  {
    LINE(2406,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -5LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ssc4843a99, "from")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    const Numeric &tmp9(((m_yyidx + -2LL)));
    const Variant &tmp10((m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp8(array_createvs(1, toSPOD(NAMSTR(s_ss1247a693, "item")), toVPOD(tmp10)));
    const Array &tmp11((Array(tmp8)));
    ArrayInit tmp3(array_createvi(2, toVPOD(VarNR(tmp7)), toVPOD(VarNR(tmp11))));
    const Array &tmp12((Array(tmp3)));
    const Variant &tmp13((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(VarNR(tmp12)))))));
    Variant tmp14(((mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs5e0a0be6, "foreach"), tmp13)));
    m__retvalue.assignVal(tmp14);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2409 */
void c_Smarty_Internal_Templateparser::t_yy_r55() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r55);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r55", null_array, );
  Variant tmp_ref;
  {
    LINE(2410,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -8LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ssc4843a99, "from")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    const Numeric &tmp9(((m_yyidx + -2LL)));
    const Variant &tmp10((m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp8(array_createvs(1, toSPOD(NAMSTR(s_ss1247a693, "item")), toVPOD(tmp10)));
    const Array &tmp11((Array(tmp8)));
    const Numeric &tmp13(((m_yyidx + -5LL)));
    const Variant &tmp14((m_yystack.rvalRef(tmp13, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp12(array_createvs(1, toSPOD(NAMSTR(s_ss12e90587, "key")), toVPOD(tmp14)));
    const Array &tmp15((Array(tmp12)));
    ArrayInit tmp3(array_createvi(3, toVPOD(VarNR(tmp7)), toVPOD(VarNR(tmp11)), toVPOD(VarNR(tmp15))));
    const Array &tmp16((Array(tmp3)));
    const Variant &tmp17((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(VarNR(tmp16)))))));
    Variant tmp18(((mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs5e0a0be6, "foreach"), tmp17)));
    m__retvalue.assignVal(tmp18);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2413 */
void c_Smarty_Internal_Templateparser::t_yy_r56() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r56);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r56", null_array, );
  {
    LINE(2413,0);
    const Variant &tmp0((((checkClassExistsThrow(NAMSTR(s_ss7c1508d4, "SMARTY_INTERNAL_COMPILE_BLOCK"), &g->CDEC(smarty_internal_compile_block))), (c_Smarty_Internal_Compile_Block::t_compilechildblock(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true))))));
    m__retvalue.assignVal(tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2416 */
void c_Smarty_Internal_Templateparser::t_yy_r57() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r57);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r57", null_array, );
  Variant tmp_ref;
  {
    LINE(2416,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    Variant tmp3(((mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat(tmp2, NAMSTR(s_ssf052ec6b, "close"))), s_sva00000000)));
    m__retvalue.assignVal(tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2419 */
void c_Smarty_Internal_Templateparser::t_yy_r58() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r58);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r58", null_array, );
  Variant tmp_ref;
  {
    LINE(2419,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -2LL)));
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + -1LL)));
    const Variant &tmp5((m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp3(array_createvs(1, toSPOD(NAMSTR(s_ss56586178, "modifier_list")), toVPOD(tmp5)));
    const Array &tmp6((Array(tmp3)));
    Variant tmp7(((mcp0.ci->getMeth3Args())(mcp0, 3, VarNR(concat(tmp2, NAMSTR(s_ssf052ec6b, "close"))), s_sva00000000, VarNR(tmp6))));
    m__retvalue.assignVal(tmp7);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2423 */
void c_Smarty_Internal_Templateparser::t_yy_r59() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r59);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r59", null_array, );
  Variant tmp_ref;
  {
    LINE(2423,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -3LL)));
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + -1LL)));
    const Variant &tmp5((m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp3(array_createvs(1, toSPOD(NAMSTR(s_ss34c768cb, "object_methode")), toVPOD(tmp5)));
    const Array &tmp6((Array(tmp3)));
    Variant tmp7(((mcp0.ci->getMeth3Args())(mcp0, 3, VarNR(concat(tmp2, NAMSTR(s_ssf052ec6b, "close"))), s_sva00000000, VarNR(tmp6))));
    m__retvalue.assignVal(tmp7);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2426 */
void c_Smarty_Internal_Templateparser::t_yy_r60() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r60);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r60", null_array, );
  Variant tmp_ref;
  {
    LINE(2426,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -4LL)));
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + -2LL)));
    const Variant &tmp5((m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp6(((m_yyidx + -1LL)));
    const Variant &tmp7((m_yystack.rvalRef(tmp6, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp3(array_createvs(2, toSPOD(NAMSTR(s_ss34c768cb, "object_methode")), toVPOD(tmp5), toSPOD(NAMSTR(s_ss56586178, "modifier_list")), toVPOD(tmp7)));
    const Array &tmp8((Array(tmp3)));
    Variant tmp9(((mcp0.ci->getMeth3Args())(mcp0, 3, VarNR(concat(tmp2, NAMSTR(s_ssf052ec6b, "close"))), s_sva00000000, VarNR(tmp8))));
    m__retvalue.assignVal(tmp9);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2429 */
void c_Smarty_Internal_Templateparser::t_yy_r61() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r61);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r61", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2429,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.append((tmp1));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2432 */
void c_Smarty_Internal_Templateparser::t_yy_r62() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r62);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r62", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp1(((m_yyidx + 0LL)));
    LINE(2432,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp0(array_createvi(1, toVPOD(tmp2)));
    const Array &tmp3((Array(tmp0)));
    m__retvalue = tmp3;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2435 */
void c_Smarty_Internal_Templateparser::t_yy_r63() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r63);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r63", null_array, );
  m__retvalue = s_sa00000000;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2438 */
void c_Smarty_Internal_Templateparser::t_yy_r64() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r64);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r64", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      const Numeric &tmp1(((m_yyidx + 0LL)));
      LINE(2438,0);
      const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
      tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss623b8c8b, "~^true$~i"), tmp2)));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          ArrayInit tmp0(1);
          const Numeric &tmp1(((m_yyidx + -2LL)));
          LINE(2439,0);
          const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
          tmp0.set(tmp2, NAMSTR(s_ss102bfbc4, "true"));
          const Array &tmp3((Array(tmp0)));
          m__retvalue = tmp3;
          tmp_ref.unset();
        }
      }
    }
    else {
      bool tmp0;
      {
        const Numeric &tmp1(((m_yyidx + 0LL)));
        LINE(2440,0);
        const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
        tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss19aad87a, "~^false$~i"), tmp2)));
        tmp_ref.unset();
      }
      if (tmp0) {
        {
          {
            ArrayInit tmp0(1);
            const Numeric &tmp1(((m_yyidx + -2LL)));
            LINE(2441,0);
            const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
            tmp0.set(tmp2, NAMSTR(s_ss8c98c156, "false"));
            const Array &tmp3((Array(tmp0)));
            m__retvalue = tmp3;
            tmp_ref.unset();
          }
        }
      }
      else {
        bool tmp0;
        {
          const Numeric &tmp1(((m_yyidx + 0LL)));
          LINE(2442,0);
          const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss05e2e3d8, "~^null$~i"), tmp2)));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            {
              ArrayInit tmp0(1);
              const Numeric &tmp1(((m_yyidx + -2LL)));
              LINE(2443,0);
              const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
              tmp0.set(tmp2, NAMSTR(s_ssf927ff2c, "null"));
              const Array &tmp3((Array(tmp0)));
              m__retvalue = tmp3;
              tmp_ref.unset();
            }
          }
        }
        else {
          {
            ArrayInit tmp0(1);
            const Numeric &tmp1(((m_yyidx + -2LL)));
            LINE(2445,0);
            const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
            const Numeric &tmp3(((m_yyidx + 0LL)));
            const String &tmp4((toString(m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
            tmp0.set(tmp2, concat3(NAMSTR(s_sse07b87c4, "'"), tmp4, NAMSTR(s_sse07b87c4, "'")));
            const Array &tmp5((Array(tmp0)));
            m__retvalue = tmp5;
            tmp_ref.unset();
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2448 */
void c_Smarty_Internal_Templateparser::t_yy_r65() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r65);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r65", null_array, );
  Variant tmp_ref;
  {
    ArrayInit tmp0(1);
    const Numeric &tmp1(((m_yyidx + -2LL)));
    LINE(2448,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    tmp0.set(tmp2, tmp4);
    const Array &tmp5((Array(tmp0)));
    m__retvalue = tmp5;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2451 */
void c_Smarty_Internal_Templateparser::t_yy_r67() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r67);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r67", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2451,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_sse07b87c4, "'"), tmp1, NAMSTR(s_sse07b87c4, "'"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2454 */
void c_Smarty_Internal_Templateparser::t_yy_r70() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r70);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r70", null_array, );
  Variant tmp_ref;
  {
    ArrayInit tmp0(1);
    const Numeric &tmp1(((m_yyidx + -2LL)));
    LINE(2454,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    tmp0.set(tmp2, tmp4);
    const Array &tmp5((Array(tmp0)));
    m__retvalue = tmp5;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2457 */
void c_Smarty_Internal_Templateparser::t_yy_r72() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r72);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r72", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    const Numeric &tmp1(((m_yyidx + 0LL)));
    LINE(2457,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    lval(m_yystack.lvalAt(tmp0, AccessFlags::CheckExist)).o_lval(NAMSTR(s_ss80e0352e, "minor"), tmp_ref, s_class_name).append((tmp2));
    tmp_ref.unset();
  }
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2460 */
void c_Smarty_Internal_Templateparser::t_yy_r73() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r73);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r73", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp1(((m_yyidx + -2LL)));
    LINE(2460,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp0(array_createvs(2, toSPOD(NAMSTR(s_ssc9042120, "var")), toVPOD(tmp2), toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp0)));
    m__retvalue = tmp5;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2463 */
void c_Smarty_Internal_Templateparser::t_yy_r75() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r75);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r75", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2463,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2466 */
void c_Smarty_Internal_Templateparser::t_yy_r78() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r78);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r78", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2466,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_sse4c920fd, "$_smarty_tpl->getStreamVariable('"), tmp1, NAMSTR(s_ss740e57ec, "://"), tmp3, NAMSTR(s_ss307c26f5, "')"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2469 */
void c_Smarty_Internal_Templateparser::t_yy_r79() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r79);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r79", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2469,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const String &tmp4((x_trim(tmp3)));
    const Numeric &tmp5(((m_yyidx + 0LL)));
    const String &tmp6((toString(m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(tmp1, tmp4, tmp6);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2472 */
void c_Smarty_Internal_Templateparser::t_yy_r82() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r82);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r82", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2472,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2475 */
void c_Smarty_Internal_Templateparser::t_yy_r83() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r83);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r83", null_array, );
  Variant tmp_ref;
  {
    LINE(2475,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp4(((m_yyidx + 0LL)));
    const Variant &tmp5((m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp1(array_createvs(2, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp3), toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(tmp5)));
    const Array &tmp6((Array(tmp1)));
    Variant tmp7(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs5f7a1e78, "private_modifier"), s_sva00000000, VarNR(tmp6))));
    m__retvalue.assignVal(tmp7);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2478 */
void c_Smarty_Internal_Templateparser::t_yy_r84() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r84);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r84", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2478,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + 0LL)));
    const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(tmp1, tmp3, tmp5);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2481 */
void c_Smarty_Internal_Templateparser::t_yy_r85() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r85);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r85", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2481,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ssc49790d1, "in_array("), tmp1, NAMSTR(s_ssd332baa7, ","), tmp3, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2484 */
void c_Smarty_Internal_Templateparser::t_yy_r86() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r86);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r86", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2484,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ssc49790d1, "in_array("), tmp1, NAMSTR(s_ss8a2a52dc, ",(array)"), tmp3, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2487 */
void c_Smarty_Internal_Templateparser::t_yy_r88() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r88);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r88", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2487,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ss8b8f2cd6, "!("), tmp1, NAMSTR(s_ss9b967610, " % "), tmp3, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2490 */
void c_Smarty_Internal_Templateparser::t_yy_r89() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r89);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r89", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2490,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ss6e782e41, "("), tmp1, NAMSTR(s_ss9b967610, " % "), tmp3, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2493 */
void c_Smarty_Internal_Templateparser::t_yy_r90() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r90);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r90", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2493,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss5f07fc55, "!(1 & "), tmp1, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2496 */
void c_Smarty_Internal_Templateparser::t_yy_r91() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r91);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r91", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2496,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ssf89923ec, "(1 & "), tmp1, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2499 */
void c_Smarty_Internal_Templateparser::t_yy_r92() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r92);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r92", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2499,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ss5f07fc55, "!(1 & "), tmp1, NAMSTR(s_ss7c88aa76, " / "), tmp3, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2502 */
void c_Smarty_Internal_Templateparser::t_yy_r93() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r93);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r93", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2502,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ssf89923ec, "(1 & "), tmp1, NAMSTR(s_ss7c88aa76, " / "), tmp3, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2505 */
void c_Smarty_Internal_Templateparser::t_yy_r99() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r99);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r99", null_array, );
  Variant tmp_ref;
  GET_THIS_ARROW()o_assign_op<void,297>(NAMSTR(s_ss93c949f7, "prefix_number"), null_variant, s_class_name);
  {
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss93c949f7, "prefix_number"), true))));
    const Numeric &tmp1(((m_yyidx + 0LL)));
    LINE(2505,0);
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssc5d15748, "prefix_code"), tmp_ref, s_class_name).append((VarNR(concat5(NAMSTR(s_ss4a9a496f, "<\?php $_tmp"), tmp0, NAMSTR(s_ss7adc04d2, "="), tmp2, NAMSTR(s_ss1434b9af, ";\?>")))));
    tmp_ref.unset();
  }
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const String &tmp4((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss93c949f7, "prefix_number"), true))));
    m__retvalue = concat4(tmp1, tmp3, NAMSTR(s_ssec036966, "$_tmp"), tmp4);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2508 */
void c_Smarty_Internal_Templateparser::t_yy_r100() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r100);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r100", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -6LL)));
    LINE(2508,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -2LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + 0LL)));
    const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(tmp1, NAMSTR(s_ss4db3b497, " \? $_smarty_tpl->getVariable('"), tmp3, NAMSTR(s_ss4a9b02a4, "')->value : "), tmp5);
    tmp_ref.unset();
  }
  {
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    MethodCallPackage mcp1;
    CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    Variant tmp2(((mcp1.ci->getMeth4Args())(mcp1, 4, NAMVAR(s_svs389d8174, "$this->yystack[$this->yyidx + -2]->minor"), null_varNR, true_varNR, false_varNR)));
    const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    Primitive tmp4((bitwise_or(tmp0, tmp3)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp4);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2511 */
void c_Smarty_Internal_Templateparser::t_yy_r101() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r101);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r101", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -5LL)));
    LINE(2511,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + -2LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp4(((m_yyidx + 0LL)));
    const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(tmp1, NAMSTR(s_sse4bf406b, " \? "), tmp3, NAMSTR(s_ss5fd47db5, " : "), tmp5);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2514 */
void c_Smarty_Internal_Templateparser::t_yy_r104() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r104);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r104", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2514,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(NAMSTR(s_ssdfdeba7c, "!"), tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2517 */
void c_Smarty_Internal_Templateparser::t_yy_r109() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r109);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r109", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2517,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(tmp1, NAMSTR(s_ss013a8f64, "."), tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2520 */
void c_Smarty_Internal_Templateparser::t_yy_r110() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r110);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r110", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2520,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(tmp1, NAMSTR(s_ss013a8f64, "."));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2523 */
void c_Smarty_Internal_Templateparser::t_yy_r111() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r111);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r111", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2523,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(NAMSTR(s_ss013a8f64, "."), tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2526 */
void c_Smarty_Internal_Templateparser::t_yy_r112() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r112);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r112", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      const Numeric &tmp1(((m_yyidx + 0LL)));
      LINE(2526,0);
      const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
      tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss623b8c8b, "~^true$~i"), tmp2)));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        m__retvalue = NAMSTR(s_ss102bfbc4, "true");
      }
    }
    else {
      bool tmp0;
      {
        const Numeric &tmp1(((m_yyidx + 0LL)));
        LINE(2528,0);
        const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
        tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss19aad87a, "~^false$~i"), tmp2)));
        tmp_ref.unset();
      }
      if (tmp0) {
        {
          m__retvalue = NAMSTR(s_ss8c98c156, "false");
        }
      }
      else {
        bool tmp0;
        {
          const Numeric &tmp1(((m_yyidx + 0LL)));
          LINE(2530,0);
          const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss05e2e3d8, "~^null$~i"), tmp2)));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            m__retvalue = NAMSTR(s_ssf927ff2c, "null");
          }
        }
        else {
          {
            const Numeric &tmp0(((m_yyidx + 0LL)));
            LINE(2533,0);
            const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
            m__retvalue = concat3(NAMSTR(s_sse07b87c4, "'"), tmp1, NAMSTR(s_sse07b87c4, "'"));
            tmp_ref.unset();
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2536 */
void c_Smarty_Internal_Templateparser::t_yy_r114() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r114);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r114", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2536,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss6e782e41, "("), tmp1, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2539 */
void c_Smarty_Internal_Templateparser::t_yy_r117() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r117);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r117", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      bool tmp1 = (!(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssb65e90d3, "security"), true))));
      if (!tmp1) {
        const Numeric &tmp2(((m_yyidx + -2LL)));
        LINE(2539,0);
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        tmp1 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss44730f62, "registered_classes"), false), tmp3));
      }
      bool tmp4 = (tmp1);
      if (!tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
        mcp5.methodCall((obj5), NAMSTR(s_ssb5bf9179, "isTrustedStaticClass"), 0x4C50559F55AD23FDLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        const Numeric &tmp6(((m_yyidx + -2LL)));
        const Variant &tmp7((m_yystack.rvalRef(tmp6, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        tmp4 = (toBoolean((mcp5.ci->getMeth2Args())(mcp5, 2, tmp7, GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true))));
      }
      tmp0 = (tmp4);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            const Numeric &tmp1(((m_yyidx + -2LL)));
            LINE(2540,0);
            const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
            tmp0 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss44730f62, "registered_classes"), false), tmp2));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                const Numeric &tmp0(((m_yyidx + -2LL)));
                LINE(2541,0);
                const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
                const String &tmp2((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss44730f62, "registered_classes"), true).rvalAt(tmp1, AccessFlags::Error))));
                const Numeric &tmp3(((m_yyidx + 0LL)));
                const String &tmp4((toString(m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
                m__retvalue = concat3(tmp2, NAMSTR(s_ss819481f3, "::"), tmp4);
                tmp_ref.unset();
              }
            }
          }
          else {
            {
              {
                const Numeric &tmp0(((m_yyidx + -2LL)));
                LINE(2543,0);
                const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
                const Numeric &tmp2(((m_yyidx + 0LL)));
                const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
                m__retvalue = concat3(tmp1, NAMSTR(s_ss819481f3, "::"), tmp3);
                tmp_ref.unset();
              }
            }
          }
        }
      }
    }
    else {
      {
        {
          LINE(2546,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Numeric &tmp1(((m_yyidx + -2LL)));
          const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(concat3(NAMSTR(s_ss28493765, "static class '"), tmp2, NAMSTR(s_ssc102bc77, "' is undefined or not allowed by security setting"))));
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2551 */
void c_Smarty_Internal_Templateparser::t_yy_r118() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r118);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r118", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      const Numeric &tmp1(((m_yyidx + -2LL)));
      LINE(2551,0);
      const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
      tmp0 = (equal(tmp2, NAMSTR(s_ssed793209, "'smarty'")));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Numeric &tmp1(((m_yyidx + -2LL)));
          const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key)));
          const String &tmp3((toString((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs99e90d64, "private_special_variable"), s_sva00000000, tmp2))));
          const Numeric &tmp4(((m_yyidx + 0LL)));
          const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          m__retvalue = concat3(tmp3, NAMSTR(s_ss819481f3, "::"), tmp5);
          tmp_ref.unset();
        }
      }
    }
    else {
      {
        {
          const Numeric &tmp0(((m_yyidx + -2LL)));
          LINE(2552,0);
          const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
          const Numeric &tmp2(((m_yyidx + -2LL)));
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key))));
          const Numeric &tmp4(((m_yyidx + 0LL)));
          const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          m__retvalue = concat6(NAMSTR(s_ssbab84462, "$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss774bb0d5, ")->value"), tmp3, NAMSTR(s_ss819481f3, "::"), tmp5);
          tmp_ref.unset();
        }
        {
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
          MethodCallPackage mcp1;
          CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
          mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          const Numeric &tmp2(((m_yyidx + -2LL)));
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
          const String &tmp4((x_trim(tmp3, NAMSTR(s_sse07b87c4, "'"))));
          Variant tmp5(((mcp1.ci->getMeth4Args())(mcp1, 4, VarNR(tmp4), null_varNR, true_varNR, false_varNR)));
          const Variant &tmp6((tmp5.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          Primitive tmp7((bitwise_or(tmp0, tmp6)));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp7);
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2555 */
void c_Smarty_Internal_Templateparser::t_yy_r119() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r119);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r119", null_array, );
  Variant tmp_ref;
  GET_THIS_ARROW()o_assign_op<void,297>(NAMSTR(s_ss93c949f7, "prefix_number"), null_variant, s_class_name);
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2555,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const String &tmp2((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss93c949f7, "prefix_number"), true))));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssc5d15748, "prefix_code"), tmp_ref, s_class_name).append((VarNR(concat5(NAMSTR(s_ss552ff114, "<\?php ob_start();\?>"), tmp1, NAMSTR(s_ss4a9a496f, "<\?php $_tmp"), tmp2, NAMSTR(s_ss2899e6db, "=ob_get_clean();\?>")))));
    tmp_ref.unset();
  }
  m__retvalue = concat(NAMSTR(s_ssec036966, "$_tmp"), toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss93c949f7, "prefix_number"), true)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2558 */
void c_Smarty_Internal_Templateparser::t_yy_r121() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r121);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r121", null_array, );
  Variant v_smarty_var;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      const Numeric &tmp1(((m_yyidx + 0LL)));
      LINE(2558,0);
      const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
      tmp0 = (equal(tmp2, NAMSTR(s_ssed793209, "'smarty'")));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(2559,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Numeric &tmp1(((m_yyidx + 0LL)));
          const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key)));
          Variant tmp3(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs99e90d64, "private_special_variable"), s_sva00000000, tmp2)));
          v_smarty_var.assignVal(tmp3);
          tmp_ref.unset();
        }
        m__retvalue.assignVal(v_smarty_var);
      }
    }
    else {
      {
        {
          const Numeric &tmp0(((m_yyidx + 0LL)));
          LINE(2563,0);
          const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
          GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss42b6cfb9, "last_variable"), tmp1);
          tmp_ref.unset();
        }
        {
          const Numeric &tmp0(((m_yyidx + 0LL)));
          LINE(2564,0);
          const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key)));
          GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssdff015ca, "last_index"), tmp1);
          tmp_ref.unset();
        }
        {
          bool tmp0;
          {
            const Numeric &tmp1(((m_yyidx + 0LL)));
            LINE(2565,0);
            const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
            tmp0 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ssc587de67, "local_var"), false), tmp2));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              {
                const Numeric &tmp0(((m_yyidx + 0LL)));
                LINE(2566,0);
                const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                const Numeric &tmp2(((m_yyidx + 0LL)));
                const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key))));
                m__retvalue = concat4(NAMSTR(s_sseb1a8c7c, "$_smarty_tpl->tpl_vars["), tmp1, NAMSTR(s_ssbced4c0f, "]->value"), tmp3);
                tmp_ref.unset();
              }
            }
          }
          else {
            {
              {
                const Numeric &tmp0(((m_yyidx + 0LL)));
                LINE(2568,0);
                const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
                const Numeric &tmp2(((m_yyidx + 0LL)));
                const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key))));
                m__retvalue = concat4(NAMSTR(s_ssbab84462, "$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss774bb0d5, ")->value"), tmp3);
                tmp_ref.unset();
              }
            }
          }
        }
        {
          LINE(2570,0);
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
          MethodCallPackage mcp1;
          CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
          mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          const Numeric &tmp2(((m_yyidx + 0LL)));
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
          const String &tmp4((x_trim(tmp3, NAMSTR(s_sse07b87c4, "'"))));
          Variant tmp5(((mcp1.ci->getMeth4Args())(mcp1, 4, VarNR(tmp4), null_varNR, true_varNR, false_varNR)));
          const Variant &tmp6((tmp5.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          Primitive tmp7((bitwise_or(tmp0, tmp6)));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp7);
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2575 */
void c_Smarty_Internal_Templateparser::t_yy_r122() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r122);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r122", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      const Numeric &tmp1(((m_yyidx + -2LL)));
      LINE(2575,0);
      const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
      tmp0 = (isset(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ssc587de67, "local_var"), false), tmp2));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          const Numeric &tmp0(((m_yyidx + -2LL)));
          LINE(2576,0);
          const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          const Numeric &tmp2(((m_yyidx + 0LL)));
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          m__retvalue = concat4(NAMSTR(s_sseb1a8c7c, "$_smarty_tpl->tpl_vars["), tmp1, NAMSTR(s_ssc7ea155b, "]->"), tmp3);
          tmp_ref.unset();
        }
      }
    }
    else {
      {
        {
          const Numeric &tmp0(((m_yyidx + -2LL)));
          LINE(2578,0);
          const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          const Numeric &tmp2(((m_yyidx + 0LL)));
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          m__retvalue = concat4(NAMSTR(s_ssbab84462, "$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss0085627a, ")->"), tmp3);
          tmp_ref.unset();
        }
      }
    }
  }
  {
    LINE(2580,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    MethodCallPackage mcp1;
    CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    const Numeric &tmp2(((m_yyidx + -2LL)));
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2583 */
void c_Smarty_Internal_Templateparser::t_yy_r124() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r124);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r124", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2583,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss285c9e51, "$_smarty_tpl->getConfigVariable('"), tmp1, NAMSTR(s_ss307c26f5, "')"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2586 */
void c_Smarty_Internal_Templateparser::t_yy_r125() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r125);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r125", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2586,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss5bfe8d3a, "$_smarty_tpl->getConfigVariable("), tmp1, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2589 */
void c_Smarty_Internal_Templateparser::t_yy_r126() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r126);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r126", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp1(((m_yyidx + -1LL)));
    LINE(2589,0);
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + 0LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp0(array_createvs(2, toSPOD(NAMSTR(s_ssc9042120, "var")), toVPOD(tmp2), toSPOD(NAMSTR(s_ss306b195e, "smarty_internal_index")), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp0)));
    m__retvalue = tmp5;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2592 */
void c_Smarty_Internal_Templateparser::t_yy_r127() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r127);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r127", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2592,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(tmp1, tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2595 */
void c_Smarty_Internal_Templateparser::t_yy_r128() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r128);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r128", null_array, );
  return;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2598 */
void c_Smarty_Internal_Templateparser::t_yy_r129() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r129);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r129", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2598,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss3d141089, "[$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss092b30bb, ")->value]"));
    tmp_ref.unset();
  }
  {
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    MethodCallPackage mcp1;
    CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    Variant tmp2(((mcp1.ci->getMeth4Args())(mcp1, 4, NAMVAR(s_svs2027cd25, "$this->yystack[$this->yyidx + 0]->minor"), null_varNR, true_varNR, false_varNR)));
    const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    Primitive tmp4((bitwise_or(tmp0, tmp3)));
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp4);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2601 */
void c_Smarty_Internal_Templateparser::t_yy_r130() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r130);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r130", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2601,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat5(NAMSTR(s_ss3d141089, "[$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss0085627a, ")->"), tmp3, NAMSTR(s_ssb2e1543c, "]"));
    tmp_ref.unset();
  }
  {
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
    MethodCallPackage mcp1;
    CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    const Numeric &tmp2(((m_yyidx + -2LL)));
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2604 */
void c_Smarty_Internal_Templateparser::t_yy_r131() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r131);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r131", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2604,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss2fb7d8b0, "['"), tmp1, NAMSTR(s_ss672d8402, "']"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2607 */
void c_Smarty_Internal_Templateparser::t_yy_r132() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r132);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r132", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2607,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ssbc769ca5, "["), tmp1, NAMSTR(s_ssb2e1543c, "]"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2610 */
void c_Smarty_Internal_Templateparser::t_yy_r133() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r133);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r133", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2610,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ssbc769ca5, "["), tmp1, NAMSTR(s_ssb2e1543c, "]"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2613 */
void c_Smarty_Internal_Templateparser::t_yy_r134() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r134);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r134", null_array, );
  Variant tmp_ref;
  {
    LINE(2613,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const String &tmp3((toString((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs99e90d64, "private_special_variable"), s_sva00000000, VarNR(concat3(NAMSTR(s_ssaf47da12, "['section']['"), tmp2, NAMSTR(s_ss74361488, "']['index']")))))));
    m__retvalue = concat3(NAMSTR(s_ssbc769ca5, "["), tmp3, NAMSTR(s_ssb2e1543c, "]"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2616 */
void c_Smarty_Internal_Templateparser::t_yy_r135() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r135);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r135", null_array, );
  Variant tmp_ref;
  {
    LINE(2616,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -3LL)));
    const String &tmp2((toString(m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const String &tmp4((toString(m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const String &tmp5((toString((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs99e90d64, "private_special_variable"), s_sva00000000, VarNR(concat5(NAMSTR(s_ssaf47da12, "['section']['"), tmp2, NAMSTR(s_ss43500869, "']['"), tmp4, NAMSTR(s_ss672d8402, "']")))))));
    m__retvalue = concat3(NAMSTR(s_ssbc769ca5, "["), tmp5, NAMSTR(s_ssb2e1543c, "]"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2619 */
void c_Smarty_Internal_Templateparser::t_yy_r137() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r137);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r137", null_array, );
  m__retvalue = NAMSTR(s_ss1c360a3d, "[]");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2622 */
void c_Smarty_Internal_Templateparser::t_yy_r139() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r139);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r139", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2622,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(tmp1, NAMSTR(s_ss013a8f64, "."), tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2625 */
void c_Smarty_Internal_Templateparser::t_yy_r140() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r140);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r140", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2625,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_sse07b87c4, "'"), tmp1, NAMSTR(s_sse07b87c4, "'"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2628 */
void c_Smarty_Internal_Templateparser::t_yy_r141() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r141);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r141", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2628,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat3(NAMSTR(s_ss6e782e41, "("), tmp1, NAMSTR(s_ss44beffb9, ")"));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2631 */
void c_Smarty_Internal_Templateparser::t_yy_r142() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r142);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r142", null_array, );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      const Numeric &tmp1(((m_yyidx + -1LL)));
      LINE(2631,0);
      const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
      tmp0 = (equal(tmp2, NAMSTR(s_ssed793209, "'smarty'")));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Numeric &tmp1(((m_yyidx + -1LL)));
          const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key)));
          const String &tmp3((toString((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs99e90d64, "private_special_variable"), s_sva00000000, tmp2))));
          const Numeric &tmp4(((m_yyidx + 0LL)));
          const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          m__retvalue = concat(tmp3, tmp5);
          tmp_ref.unset();
        }
      }
    }
    else {
      {
        {
          const Numeric &tmp0(((m_yyidx + -1LL)));
          LINE(2632,0);
          const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
          const Numeric &tmp2(((m_yyidx + -1LL)));
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key))));
          const Numeric &tmp4(((m_yyidx + 0LL)));
          const String &tmp5((toString(m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
          m__retvalue = concat5(NAMSTR(s_ssbab84462, "$_smarty_tpl->getVariable("), tmp1, NAMSTR(s_ss774bb0d5, ")->value"), tmp3, tmp5);
          tmp_ref.unset();
        }
        {
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)));
          MethodCallPackage mcp1;
          CVarRef obj1 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true);
          mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          const Numeric &tmp2(((m_yyidx + -1LL)));
          const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key))));
          const String &tmp4((x_trim(tmp3, NAMSTR(s_sse07b87c4, "'"))));
          Variant tmp5(((mcp1.ci->getMeth4Args())(mcp1, 4, VarNR(tmp4), null_varNR, true_varNR, false_varNR)));
          const Variant &tmp6((tmp5.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
          Primitive tmp7((bitwise_or(tmp0, tmp6)));
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), tmp7);
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
}
