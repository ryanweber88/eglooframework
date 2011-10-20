#include <php/Smarty/libs/sysplugins/smarty_internal_templatelexer.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templatelexer.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templateparser.h>
#include <runtime/ext/ext.h>
namespace HPHP {
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 99 */
Variant c_Smarty_Internal_Templatelexer::t_yylex() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yylex);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yylex", null_array, r);
  {
    LINE(101,0);
    MethodCallPackage mcp0;
    CStrRef mth0 = concat(NAMSTR(s_ss8eb2c1e2, "yylex"), toString(m__yy_state));
    mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    return wrap_variant((mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 104 */
void c_Smarty_Internal_Templatelexer::t_yypushstate(CVarRef v_state) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yypushstate);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yypushstate", array_createvi(1, toVPOD(v_state)), );
  LINE(106,(x_array_push(2, ref(m__yy_stack), m__yy_state)));
  m__yy_state.assignVal(v_state);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 110 */
void c_Smarty_Internal_Templatelexer::t_yypopstate() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yypopstate);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yypopstate", null_array, );
  {
    LINE(112,0);
    const Variant &tmp0((x_array_pop(ref(m__yy_stack))));
    m__yy_state.assignVal(tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 115 */
void c_Smarty_Internal_Templatelexer::t_yybegin(CVarRef v_state) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yybegin);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yybegin", array_createvi(1, toVPOD(v_state)), );
  m__yy_state.assignVal(v_state);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 122 */
Variant c_Smarty_Internal_Templatelexer::t_yylex1() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yylex1);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yylex1", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_saf832e7d4;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(149,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = StringBuffer().addWithTaint("/^(", 3).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("[$]smarty\\.block\\.child", 23).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(\\{\\})|^(", 12).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\*([\\S\\s]*\?)\\*", 14).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^([\t ]*[\r\n]+[\t ]*)|^(", 23).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("strip", 5).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,}strip\\s{1,}", 17).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\/strip", 7).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,}\\/strip\\s{1,}", 19).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*literal\\s*", 13).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,}\\/)|^(", 12).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*(if|elseif|else if|while)\\s+)|^(", 35).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*for\\s+)|^(", 13).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*foreach(\?![^\\s]))|^(", 23).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,})|^(", 10).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\/)|^(", 6).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint(")|^(<\\\?(\?:php\\w+|=|[a-zA-Z]+)\?)|^(\\\?>)|^(<%)|^(%>)|^(([\\S\\s]*\?)(\?=([\t ]*[\r\n]+[\t ]*|", 83).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("|<\\\?|\\\?>|<%|%>)))|^([\\S\\s]+)|^(.)/iS", 36).detachWithTaint();
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(155,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(157,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(158,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(161,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ss09d16385, "... state TEXT")))), tmp0));
                    }
                  }
                }
              }
              LINE(163,(x_next(ref(v_yymatches))));
              {
                LINE(164,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(165,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(168,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(172,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(173,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ssc94cdc88, "yy_r1_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(175,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(176,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(182,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(184,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(185,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(186,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(193,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 202 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_1);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_1", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_SMARTYBLOCKCHILD));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 207 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_2);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 212 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_3(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_3);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_3", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_COMMENT));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 217 */
Variant c_Smarty_Internal_Templatelexer::t_yy_r1_5(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_5);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_5", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  if (toBoolean(m_strip)) {
    {
      return false;
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LINEBREAK));
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 226 */
bool c_Smarty_Internal_Templatelexer::t_yy_r1_6(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_6);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_6", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  m_strip = true;
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 232 */
Variant c_Smarty_Internal_Templatelexer::t_yy_r1_7(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_7);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_7", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  if (LINE(235,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_strip = true;
      return false;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 242 */
bool c_Smarty_Internal_Templatelexer::t_yy_r1_8(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_8);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_8", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  m_strip = false;
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 248 */
Variant c_Smarty_Internal_Templatelexer::t_yy_r1_9(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_9);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_9", array_createvi(1, toVPOD(v_yy_subpatterns)), r);
  if (LINE(251,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_strip = false;
      return false;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 258 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_10(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_10);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_10", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LITERALSTART));
  LINE(262,(t_yypushstate(NAMVAR(s_svia6bfbbdd, 3LL) /* self::LITERAL */)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 264 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_11(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_11);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_11", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(267,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELSLASH));
      LINE(271,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
      m_taglineno.assignVal(m_line);
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 275 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_12(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_12);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_12", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(278,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
      if (tmp1) {
        const String &tmp2((toString(x_substr(toString(m_value), toInt32(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true)), toInt32(1LL)))));
        const String &tmp3((x_trim(tmp2)));
        tmp1 = (equal(tmp3, NAMSTR(s_ss00000000, "")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
      }
    }
    else {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELIF));
        LINE(282,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 286 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_14(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_14);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_14", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(289,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
      if (tmp1) {
        const String &tmp2((toString(x_substr(toString(m_value), toInt32(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true)), toInt32(1LL)))));
        const String &tmp3((x_trim(tmp2)));
        tmp1 = (equal(tmp3, NAMSTR(s_ss00000000, "")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
      }
    }
    else {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELFOR));
        LINE(293,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 297 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_15(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_15);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_15", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(300,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
      if (tmp1) {
        const String &tmp2((toString(x_substr(toString(m_value), toInt32(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true)), toInt32(1LL)))));
        const String &tmp3((x_trim(tmp2)));
        tmp1 = (equal(tmp3, NAMSTR(s_ss00000000, "")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
      }
    }
    else {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELFOREACH));
        LINE(304,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 308 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_16(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_16);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_16", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(311,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDEL));
      LINE(315,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
      m_taglineno.assignVal(m_line);
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 319 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_17(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_17);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_17", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELSLASH));
  LINE(323,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
  m_taglineno.assignVal(m_line);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 326 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_18(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_18);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_18", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDEL));
  LINE(330,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
  m_taglineno.assignVal(m_line);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 333 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_19(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_19);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_19", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(336,(x_in_array(m_value, s_sva8052c48f)))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_PHPSTARTTAG));
    }
  }
  else if (equal(m_value, NAMSTR(s_ssb88d60dc, "<\?xml"))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_XMLTAG));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_FAKEPHPSTARTTAG));
      {
        LINE(342,0);
        const Variant &tmp0((x_substr(toString(m_value), toInt32(0LL), toInt32(2LL))));
        m_value.assignVal(tmp0);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 345 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_20(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_20);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_20", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_PHPENDTAG));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 350 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_21(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_21);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_21", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ASPSTARTTAG));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 355 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_22(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_22);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_22", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ASPENDTAG));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 360 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_23(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_23);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_23", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 365 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_26(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_26);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_26", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 370 */
void c_Smarty_Internal_Templatelexer::t_yy_r1_27(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r1_27);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r1_27", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 377 */
Variant c_Smarty_Internal_Templatelexer::t_yylex2() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yylex2);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yylex2", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_sa33228c45;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(448,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = StringBuffer().addWithTaint("/^('[^'\\\\]*(\?:\\\\.[^'\\\\]*)*')|^(", 31).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,}\\/)|^(", 12).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*(if|elseif|else if|while)\\s+)|^(", 35).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*for\\s+)|^(", 13).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*foreach(\?![^\\s]))|^(", 23).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,})|^(\\s{1,}", 16).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\/)|^(", 6).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(\\s+is\\s+in\\s+)|^(\\s+as\\s+)|^(\\s+to\\s+)|^(\\s+step\\s+)|^(\\s+instanceof\\s+)|^(\\s*===\\s*)|^(\\s*!==\\s*)|^(\\s*==\\s*|\\s+eq\\s+)|^(\\s*!=\\s*|\\s*<>\\s*|\\s+(ne|neq)\\s+)|^(\\s*>=\\s*|\\s+(ge|gte)\\s+)|^(\\s*<=\\s*|\\s+(le|lte)\\s+)|^(\\s*>\\s*|\\s+gt\\s+)|^(\\s*<\\s*|\\s+lt\\s+)|^(\\s+mod\\s+)|^(!\\s*|not\\s+)|^(\\s*&&\\s*|\\s*and\\s+)|^(\\s*\\|\\|\\s*|\\s*or\\s+)|^(\\s*xor\\s+)|^(\\s+is\\s+odd\\s+by\\s+)|^(\\s+is\\s+not\\s+odd\\s+by\\s+)|^(\\s+is\\s+odd)|^(\\s+is\\s+not\\s+odd)|^(\\s+is\\s+even\\s+by\\s+)|^(\\s+is\\s+not\\s+even\\s+by\\s+)|^(\\s+is\\s+even)|^(\\s+is\\s+not\\s+even)|^(\\s+is\\s+div\\s+by\\s+)|^(\\s+is\\s+not\\s+div\\s+by\\s+)|^(\\((int(eger)\?|bool(ean)\?|float|double|real|string|binary|array|object)\\)\\s*)|^(\\(\\s*)|^(\\s*\\))|^(\\[\\s*)|^(\\s*\\])|^(\\s*->\\s*)|^(\\s*=>\\s*)|^(\\s*=\\s*)|^(\\+\\+|--)|^(\\s*(\\+|-)\\s*)|^(\\s*(\\*|\\/|%)\\s*)|^(\\$)|^(\\s*;)|^(::)|^(\\s*:\\s*)|^(@)|^(#)|^(\")|^(`)|^(\\|)|^(\\.)|^(\\s*,\\s*)|^(\\s*&\\s*)|^(\\s*\\\?\\s*)|^(0[xX][0-9a-fA-F]+)|^([0-9]*[a-zA-Z_]\\w*)|^(\\d+)|^(\\s+)|^(.)/iS", 929).detachWithTaint();
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(454,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(456,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(457,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(460,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ss34ecbb59, "... state SMARTY")))), tmp0));
                    }
                  }
                }
              }
              LINE(462,(x_next(ref(v_yymatches))));
              {
                LINE(463,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(464,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(467,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(471,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(472,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ss17a9812d, "yy_r2_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(474,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(475,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(481,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(483,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(484,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(485,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(492,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 501 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_1);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_1", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_SINGLEQUOTESTRING));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 506 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_2);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(509,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELSLASH));
      LINE(513,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
      m_taglineno.assignVal(m_line);
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 517 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_3(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_3);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_3", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(520,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
      if (tmp1) {
        const String &tmp2((toString(x_substr(toString(m_value), toInt32(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true)), toInt32(1LL)))));
        const String &tmp3((x_trim(tmp2)));
        tmp1 = (equal(tmp3, NAMSTR(s_ss00000000, "")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
      }
    }
    else {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELIF));
        LINE(524,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 528 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_5(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_5);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_5", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(531,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
      if (tmp1) {
        const String &tmp2((toString(x_substr(toString(m_value), toInt32(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true)), toInt32(1LL)))));
        const String &tmp3((x_trim(tmp2)));
        tmp1 = (equal(tmp3, NAMSTR(s_ss00000000, "")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
      }
    }
    else {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELFOR));
        LINE(535,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 539 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_6(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_6);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_6", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(542,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
      if (tmp1) {
        const String &tmp2((toString(x_substr(toString(m_value), toInt32(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true)), toInt32(1LL)))));
        const String &tmp3((x_trim(tmp2)));
        tmp1 = (equal(tmp3, NAMSTR(s_ss00000000, "")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
      }
    }
    else {
      {
        m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELFOREACH));
        LINE(546,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 550 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_7(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_7);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_7", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(553,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDEL));
      LINE(557,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
      m_taglineno.assignVal(m_line);
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 561 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_8(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_8);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_8", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_RDEL));
  LINE(565,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 567 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_9(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_9);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_9", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELSLASH));
  LINE(571,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
  m_taglineno.assignVal(m_line);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 574 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_10(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_10);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_10", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDEL));
  LINE(578,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
  m_taglineno.assignVal(m_line);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 581 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_11(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_11);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_11", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_RDEL));
  LINE(585,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 587 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_12(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_12);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_12", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISIN));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 592 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_13(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_13);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_13", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_AS));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 597 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_14(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_14);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_14", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_TO));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 602 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_15(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_15);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_15", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_STEP));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 607 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_16(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_16);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_16", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_INSTANCEOF));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 612 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_17(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_17);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_17", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_IDENTITY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 617 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_18(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_18);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_18", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_NONEIDENTITY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 622 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_19(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_19);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_19", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_EQUALS));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 627 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_20(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_20);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_20", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_NOTEQUALS));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 632 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_22(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_22);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_22", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_GREATEREQUAL));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 637 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_24(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_24);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_24", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LESSEQUAL));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 642 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_26(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_26);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_26", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_GREATERTHAN));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 647 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_27(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_27);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_27", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LESSTHAN));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 652 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_28(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_28);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_28", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_MOD));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 657 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_29(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_29);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_29", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_NOT));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 662 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_30(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_30);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_30", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LAND));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 667 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_31(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_31);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_31", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LOR));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 672 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_32(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_32);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_32", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LXOR));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 677 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_33(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_33);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_33", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISODDBY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 682 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_34(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_34);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_34", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISNOTODDBY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 687 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_35(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_35);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_35", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISODD));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 692 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_36(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_36);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_36", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISNOTODD));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 697 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_37(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_37);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_37", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISEVENBY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 702 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_38(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_38);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_38", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISNOTEVENBY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 707 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_39(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_39);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_39", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISEVEN));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 712 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_40(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_40);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_40", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISNOTEVEN));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 717 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_41(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_41);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_41", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISDIVBY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 722 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_42(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_42);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_42", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ISNOTDIVBY));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 727 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_43(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_43);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_43", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_TYPECAST));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 732 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_47(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_47);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_47", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OPENP));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 737 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_48(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_48);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_48", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_CLOSEP));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 742 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_49(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_49);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_49", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OPENB));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 747 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_50(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_50);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_50", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_CLOSEB));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 752 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_51(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_51);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_51", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_PTR));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 757 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_52(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_52);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_52", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_APTR));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 762 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_53(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_53);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_53", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_EQUAL));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 767 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_54(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_54);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_54", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_INCDEC));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 772 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_55(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_55);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_55", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_UNIMATH));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 777 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_57(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_57);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_57", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_MATH));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 782 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_59(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_59);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_59", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_DOLLAR));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 787 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_60(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_60);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_60", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_SEMICOLON));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 792 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_61(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_61);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_61", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_DOUBLECOLON));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 797 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_62(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_62);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_62", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_COLON));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 802 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_63(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_63);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_63", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_AT));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 807 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_64(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_64);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_64", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_HATCH));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 812 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_65(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_65);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_65", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_QUOTE));
  LINE(816,(t_yypushstate(NAMVAR(s_svi5e544a31, 4LL) /* self::DOUBLEQUOTEDSTRING */)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 818 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_66(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_66);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_66", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_BACKTICK));
  LINE(822,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 824 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_67(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_67);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_67", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_VERT));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 829 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_68(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_68);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_68", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_DOT));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 834 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_69(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_69);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_69", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_COMMA));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 839 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_70(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_70);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_70", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ANDSYM));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 844 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_71(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_71);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_71", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_QMARK));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 849 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_72(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_72);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_72", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_HEX));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 854 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_73(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_73);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_73", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ID));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 859 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_74(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_74);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_74", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_INTEGER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 864 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_75(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_75);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_75", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_SPACE));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 869 */
void c_Smarty_Internal_Templatelexer::t_yy_r2_76(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r2_76);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r2_76", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 877 */
Variant c_Smarty_Internal_Templatelexer::t_yylex3() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yylex3);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yylex3", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_sa2c85ff1c;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(890,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = StringBuffer().addWithTaint("/^(", 3).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*literal\\s*", 13).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^(", 4).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*\\/literal\\s*", 15).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint(")|^([\t ]*[\r\n]+[\t ]*)|^(<\\\?(\?:php\\w+|=|[a-zA-Z]+)\?)|^(\\\?>)|^(<%)|^(%>)|^(([\\S\\s]*\?)(\?=([\t ]*[\r\n]+[\t ]*|", 102).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\/\?literal", 10).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss710f5868, "rdel"), true))).addWithTaint("|<\\\?|<%)))|^(.)/iS", 18).detachWithTaint();
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(896,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(898,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(899,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(902,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ssc442cebc, "... state LITERAL")))), tmp0));
                    }
                  }
                }
              }
              LINE(904,(x_next(ref(v_yymatches))));
              {
                LINE(905,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(906,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(909,0);
                    const Variant &tmp3((v_tokenMap.rvalAt(tmp2, AccessFlags::Error)));
                    const Variant &tmp4((x_array_slice(tmp0, tmp1, tmp3)));
                    v_yysubmatches.assignVal(tmp4);
                  }
                }
              }
              else {
                {
                  v_yysubmatches = s_sa00000000;
                }
              }
              {
                LINE(913,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(914,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ss83e5a794, "yy_r3_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(916,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(917,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(923,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(925,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(926,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(927,0);
                      int tmp2((x_strlen(toString(m_data))));
                      tmp0 = (not_less(tmp1, tmp2));
                    }
                    if (tmp0) {
                      {
                        return false;
                      }
                    }
                  }
                  continue;
                }
              }
            }
          }
          else {
            {
              {
                p_Exception tmp0 = coo_Exception();
                const String &tmp1((toString(m_line)));
                Variant tmp2((m_counter));
                LINE(934,0);
                const String &tmp3((toString(m_data.rvalAt(tmp2, AccessFlags::Error))));
                throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat4(NAMSTR(s_ss8471bc25, "Unexpected input at line"), tmp1, NAMSTR(s_ss9d3eaee8, ": "), tmp3))), tmp0));
              }
            }
          }
        }
        break;
      }
    } while (true);
  }
  return null;
}
namespace hphp_impl_splitter {}
}
