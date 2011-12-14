#include <php/Smarty/libs/sysplugins/smarty_internal_templatelexer.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templatelexer.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templateparser.h>
#include <runtime/ext/ext.h>
namespace HPHP {
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 943 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_1);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_1", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LITERALSTART));
  LINE(947,(t_yypushstate(NAMVAR(s_svia6bfbbdd, 3LL) /* self::LITERAL */)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 949 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_2);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LITERALEND));
  LINE(953,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 955 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_3(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_3);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_3", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LITERAL));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 960 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_4(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_4);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_4", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(963,(x_in_array(m_value, s_sva8052c48f)))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_PHPSTARTTAG));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_FAKEPHPSTARTTAG));
      {
        LINE(967,0);
        const Variant &tmp0((x_substr(toString(m_value), toInt32(0LL), toInt32(2LL))));
        m_value.assignVal(tmp0);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 970 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_5(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_5);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_5", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_PHPENDTAG));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 975 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_6(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_6);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_6", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ASPSTARTTAG));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 980 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_7(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_7);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_7", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_ASPENDTAG));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 985 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_8(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_8);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_8", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LITERAL));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 990 */
void c_Smarty_Internal_Templatelexer::t_yy_r3_11(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r3_11);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r3_11", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    LINE(993,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsff60bf33, "missing or misspelled literal closing tag"));
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 997 */
Variant c_Smarty_Internal_Templatelexer::t_yylex4() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yylex4);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yylex4", null_array, r);
  Array v_tokenMap;
  String v_yy_global_pattern;
  Variant v_yymatches;
  Variant v_yysubmatches;
  Variant v_r;

  v_tokenMap = s_sa7438b42f;
  {
    bool tmp0;
    {
      Variant tmp1((m_counter));
      LINE(1015,0);
      int tmp2((x_strlen(toString(m_data))));
      tmp0 = (not_less(tmp1, tmp2));
    }
    if (tmp0) {
      {
        return false;
      }
    }
  }
  v_yy_global_pattern = StringBuffer().addWithTaint("/^(", 3).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,}\\/)|^(", 12).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*(if|elseif|else if|while)\\s+)|^(", 35).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*for\\s+)|^(", 13).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s*foreach(\?![^\\s]))|^(", 23).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\s{1,})|^(", 10).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("\\/)|^(", 6).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint(")|^(\")|^(`\\$)|^(\\$[0-9]*[a-zA-Z_]\\w*)|^(\\$)|^(([^\"\\\\]*\?)((\?:\\\\.[^\"\\\\]*\?)*\?)(\?=(", 79).addWithTaint(toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssce6974dd, "ldel"), true))).addWithTaint("|\\$|`\\$|\")))|^([\\S\\s]+)|^(.)/iS", 31).detachWithTaint();
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            String tmp1((v_yy_global_pattern));
            LINE(1021,0);
            const String &tmp2((toString(x_substr(toString(m_data), toInt32(m_counter)))));
            tmp0 = (toBoolean(x_preg_match(tmp1, tmp2, ref(v_yymatches))));
          }
          if (tmp0) {
            {
              v_yysubmatches.assignVal(v_yymatches);
              {
                LINE(1023,0);
                const Variant &tmp0((x_array_filter(v_yymatches, NAMVAR(s_svsf4b1f7f6, "strlen"))));
                v_yymatches.assignVal(tmp0);
              }
              {
                bool tmp0;
                {
                  LINE(1024,0);
                  bool tmp1((toBoolean(x_count(v_yymatches))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    {
                      p_Exception tmp0 = coo_Exception();
                      LINE(1027,0);
                      const String &tmp1((toString(x_substr(toString(m_data), toInt32(m_counter), toInt32(5LL)))));
                      throw_exception(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss7924974f, "Error: lexing failed because a rule matchedan empty string.  Input \""), tmp1, NAMSTR(s_ssb352364e, "... state DOUBLEQUOTEDSTRING")))), tmp0));
                    }
                  }
                }
              }
              LINE(1029,(x_next(ref(v_yymatches))));
              {
                LINE(1030,0);
                const Variant &tmp0((x_key(ref(v_yymatches))));
                m_token.assignVal(tmp0);
              }
              if (LINE(1031,(toBoolean(v_tokenMap.rvalAt(m_token, AccessFlags::Error))))) {
                {
                  {
                    Variant tmp0((v_yysubmatches));
                    int tmp1((toInt32((m_token + 1LL))));
                    Variant tmp2((m_token));
                    LINE(1034,0);
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
                LINE(1038,0);
                const Variant &tmp0((x_current(ref(v_yymatches))));
                m_value.assignVal(tmp0);
              }
              {
                LINE(1039,0);
                MethodCallPackage mcp0;
                CStrRef mth0 = concat(NAMSTR(s_ss1565b57e, "yy_r4_"), toString(m_token));
                mcp0.methodCall((GET_THIS_VALID()), mth0, -1);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.bindClass(fi)->getMeth1Args())(mcp0, 1, v_yysubmatches)));
                v_r.assignVal(tmp1);
              }
              if (x_is_null(v_r)) {
                {
                  {
                    LINE(1041,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(1042,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  return true;
                }
              }
              else if (same(v_r, true)) {
                {
                  return LINE(1048,(t_yylex()));
                }
              }
              else if (same(v_r, false)) {
                {
                  {
                    LINE(1050,0);
                    int tmp0((x_strlen(toString(m_value))));
                    m_counter += tmp0;
                  }
                  {
                    LINE(1051,0);
                    const Variant &tmp0((x_substr_count(toString(m_value), NAMSTR(s_ss66d2232c, "\n"))));
                    m_line += tmp0;
                  }
                  {
                    bool tmp0;
                    {
                      Variant tmp1((m_counter));
                      LINE(1052,0);
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
                LINE(1059,0);
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
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1068 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_1(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_1);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_1", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(1071,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELSLASH));
      LINE(1075,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
      m_taglineno.assignVal(m_line);
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1079 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_2(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_2);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_2", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(1082,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
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
        LINE(1086,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1090 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_4(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_4);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_4", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(1093,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
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
        LINE(1097,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1101 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_5(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_5);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_5", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(1104,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true)))));
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
        LINE(1108,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
        m_taglineno.assignVal(m_line);
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1112 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_6(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_6);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_6", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  if (LINE(1115,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss4bf7c8b7, "auto_literal"), true))))) {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
    }
  }
  else {
    {
      m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDEL));
      LINE(1119,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
      m_taglineno.assignVal(m_line);
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1123 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_7(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_7);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_7", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDELSLASH));
  LINE(1127,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
  m_taglineno.assignVal(m_line);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1130 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_8(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_8);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_8", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_LDEL));
  LINE(1134,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
  m_taglineno.assignVal(m_line);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1137 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_9(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_9);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_9", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_QUOTE));
  LINE(1141,(t_yypopstate()));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1143 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_10(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_10);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_10", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_BACKTICK));
  {
    LINE(1147,0);
    const Variant &tmp0((x_substr(toString(m_value), toInt32(0LL), toInt32(-1LL))));
    m_value.assignVal(tmp0);
  }
  LINE(1148,(t_yypushstate(NAMVAR(s_svi90d5f98c, 2LL) /* self::SMARTY */)));
  m_taglineno.assignVal(m_line);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1151 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_11(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_11);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_11", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_DOLLARID));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1156 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_12(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_12);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_12", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1161 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_13(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_13);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_13", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1166 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_17(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_17);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_17", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 1171 */
void c_Smarty_Internal_Templatelexer::t_yy_r4_18(CVarRef v_yy_subpatterns) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::yy_r4_18);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::yy_r4_18", array_createvi(1, toVPOD(v_yy_subpatterns)), );
  m_token = ((checkClassExistsThrow(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser"), &g->CDEC(smarty_internal_templateparser))), (q_Smarty_Internal_Templateparser___TP_OTHER));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Templatelexer() {
  return NEWOBJ(c_Smarty_Internal_Templatelexer)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_templatelexer.php, pm_php$Smarty$libs$sysplugins$smarty_internal_templatelexer_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_templatelexer) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svi5e544a31, 4LL),
  (int64)&NAMVAR(s_svi90d5f98c, 2LL),
  (int64)&NAMVAR(s_svia6bfbbdd, 3LL),
  (int64)&NAMVAR(s_svib794f8ce, 1LL),
  (int64)&null_variant,
  (int64)&s_sva00000000,
  (int64)&false_varNR,
  (int64)&s_sva6be1d2eb,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x7F1F3F7A12779BE9LL,0,0,0,100,4,0,&NAMSTR(s_ss12779be9, "DOUBLEQUOTEDSTRING") },
  {0x0CDC655BF5DA2ACALL,1,1,0,36,4,0,&NAMSTR(s_ssf5da2aca, "SMARTY") },
  {0x12F32F0CE7402512LL,-2,2,0,100,4,0,&NAMSTR(s_sse7402512, "LITERAL") },
  {0x4D26D167066BB11DLL,-2,3,0,100,4,0,&NAMSTR(s_ss066bb11d, "TEXT") },

  {0x3ABE29210F711D20LL,8,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_node),&NAMSTR(s_ss22783ac1, "node") },
  {0x6EDDAC6117D49A41LL,8,5,31,65,8,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_heredoc_id_stack),&NAMSTR(s_ssa11ab9ae, "\000Smarty_Internal_Templatelexer\000heredoc_id_stack") },
  {0x4F736A19AE0F7C06LL,10,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_taglineno),&NAMSTR(s_ssc1db0379, "taglineno") },
  {0x55C5A9635252EE27LL,-2,6,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_strip),&NAMSTR(s_ss385f4def, "strip") },
  {0x34CB33D09D0FB647LL,6,3,31,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m__yy_state),&NAMSTR(s_ss2e4e8b32, "\000Smarty_Internal_Templatelexer\000_yy_state") },
  {0x5B455C27187FC30ELL,6,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_counter),&NAMSTR(s_ssac6f5998, "counter") },
  {0x0D35EC793C95F331LL,-1,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_data),&NAMSTR(s_ssa9853128, "data") },
  {0x021A52B45A788597LL,-7,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_value),&NAMSTR(s_sse0c88471, "value") },
  {0x04AB35CACF8C8C9ALL,-6,4,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_line),&NAMSTR(s_ssddf8728c, "line") },
  {0x1D6723825B7147DALL,-5,7,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_smarty_token_names),&NAMSTR(s_ssa8d8e9bb, "smarty_token_names") },
  {0x612798D762CC23DELL,0,5,31,65,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m__yy_stack),&NAMSTR(s_ss80f9716a, "\000Smarty_Internal_Templatelexer\000_yy_stack") },
  {0x6513AE01C317AF9FLL,-4,4,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_token),&NAMSTR(s_ss111a03e7, "token") },
  {0x703DF16E6CB95FBFLL,-9,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Templatelexer, m_state),&NAMSTR(s_ss72ba5e22, "state") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Templatelexer hash
  -1,-1,3,-1,-1,1,0,-1,
  4,5,-1,-1,-1,-1,6,7,-1,-1,-1,-1,-1,-1,9,-1,-1,10,-1,-1,-1,-1,-1,11,-1,-1,12,-1,-1,-1,14,15,
  // Smarty_Internal_Templatelexer lists
  5,8,14,-1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Templatelexer::os_prop_table = {
  31,10,-1,-1,7,3,36,0,
  cpt_hash_entries+8,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
