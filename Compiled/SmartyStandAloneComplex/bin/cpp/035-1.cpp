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
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 118 */
Variant c_Smarty_Internal_Templateparser::t_escape_start_tag(CVarRef v_tag_text) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::escape_start_tag);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::escape_start_tag", array_createvi(1, toVPOD(v_tag_text)), r);
  Variant v_count;
  Variant v_tag;

  {
    LINE(119,0);
    const Variant &tmp0((x_preg_replace(NAMVAR(s_svsca4556be, "/\\A<\\\?(.*)\\z/"), NAMVAR(s_svsd7c753ff, "<<\?php \?>\?\\1"), v_tag_text, toInt32(-1LL), ref(v_count))));
    v_tag.assignVal(tmp0);
  }
  return v_tag;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 123 */
String c_Smarty_Internal_Templateparser::t_escape_end_tag(CVarRef v_tag_text) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::escape_end_tag);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::escape_end_tag", array_createvi(1, toVPOD(v_tag_text)), r);
  return NAMSTR(s_ss62b842b2, "\?<\?php \?>>");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1238 */
void c_Smarty_Internal_Templateparser::t_trace(Variant v_TraceFILE, Variant v_zTracePrompt) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::Trace);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::Trace", array_createvi(2, toVPOD(v_TraceFILE), toVPOD(v_zTracePrompt)), );
  if (!(toBoolean(v_TraceFILE))) {
    {
      v_zTracePrompt = 0LL;
    }
  }
  else if (!(toBoolean(v_zTracePrompt))) {
    {
      v_TraceFILE = 0LL;
    }
  }
  g->s_Smarty_Internal_Templateparser___yyTraceFILE.assignVal(v_TraceFILE);
  g->s_Smarty_Internal_Templateparser___yyTracePrompt.assignVal(v_zTracePrompt);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1249 */
void c_Smarty_Internal_Templateparser::t_printtrace() {
  STATIC_METHOD_INJECTION(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::PrintTrace);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::PrintTrace", null_array, );
  {
    LINE(1251,0);
    const Variant &tmp0((x_fopen(NAMSTR(s_ss8323b109, "php://output"), NAMSTR(s_ssd52b2aa9, "w"))));
    g->s_Smarty_Internal_Templateparser___yyTraceFILE.assignVal(tmp0);
  }
  g->s_Smarty_Internal_Templateparser___yyTracePrompt = NAMSTR(s_ssb0c6613c, "<br>");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1498 */
Variant c_Smarty_Internal_Templateparser::t_tokenname(CVarRef v_tokenType) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::tokenName);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::tokenName", array_createvi(1, toVPOD(v_tokenType)), r);
  if (same(v_tokenType, 0LL)) {
    {
      return NAMSTR(s_ssa2dec035, "End of Input");
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (more(v_tokenType, 0LL));
      if (tmp1) {
        LINE(1503,0);
        int tmp2((x_count(m_yyTokenName)));
        tmp1 = (less(v_tokenType, tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        return LINE(1504,(m_yyTokenName.rvalAt(v_tokenType, AccessFlags::Error)));
      }
    }
    else {
      {
        return NAMSTR(s_ssff24c3e6, "Unknown");
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1510 */
void c_Smarty_Internal_Templateparser::t_yy_destructor(CVarRef v_yymajor, CVarRef v_yypminor) {
  STATIC_METHOD_INJECTION_NOMEM(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_destructor);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_destructor", array_createvi(2, toVPOD(v_yymajor), toVPOD(v_yypminor)), );
  switch ((v_yymajor).hashForIntSwitch(0LL, 0LL)) {
  default:
    {
      break;
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1517 */
Variant c_Smarty_Internal_Templateparser::t_yy_pop_parser_stack() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_pop_parser_stack);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_pop_parser_stack", null_array, r);
  Variant v_yytos;
  Variant v_yymajor;

  {
    bool tmp0;
    {
      LINE(1519,0);
      bool tmp1((toBoolean(x_count(m_yystack))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        return null;
      }
    }
  }
  {
    LINE(1522,0);
    const Variant &tmp0((x_array_pop(ref(m_yystack))));
    v_yytos.assignVal(tmp0);
  }
  if ((toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE) && not_less(m_yyidx, 0LL))) {
    {
      {
        const Object &tmp0((toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE)));
        const String &tmp1((toString(g->s_Smarty_Internal_Templateparser___yyTracePrompt)));
        LINE(1525,0);
        const Variant &tmp2((v_yytos.o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
        const String &tmp3((toString(m_yyTokenName.rvalAt(tmp2, AccessFlags::Error))));
        LINE(1526,(x_fwrite(tmp0, concat4(tmp1, NAMSTR(s_ss884c7d2e, "Popping "), tmp3, NAMSTR(s_ss66d2232c, "\n")))));
      }
    }
  }
  {
    LINE(1528,0);
    const Variant &tmp0((v_yytos.o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
    v_yymajor.assignVal(tmp0);
  }
  {
    Variant tmp0((v_yymajor));
    LINE(1529,0);
    const Variant &tmp1((v_yytos.o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    c_Smarty_Internal_Templateparser::t_yy_destructor(tmp0, tmp1);
  }
  m_yyidx--;
  return v_yymajor;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1534 */
Variant c_Smarty_Internal_Templateparser::t___destruct() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::__destruct);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::__destruct", null_array, r);
  setInDtor();
  LOOP_COUNTER(1);
  {
    while (!same(m_yystack, s_sa00000000)) {
      LOOP_COUNTER_CHECK(1);
      {
        LINE(1537,(t_yy_pop_parser_stack()));
      }
    }
  }
  if (x_is_resource(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
    {
      LINE(1540,(x_fclose(toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE))));
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1544 */
Variant c_Smarty_Internal_Templateparser::t_yy_get_expected_tokens(CVarRef v_token) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_get_expected_tokens);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_get_expected_tokens", array_createvi(1, toVPOD(v_token)), r);
  Variant v_state;
  Variant v_expected;
  Variant v_stack;
  Variant v_yyidx;
  Variant v_yyact;
  int64 v_done = 0;
  Numeric v_yyruleno = 0;
  Variant v_nextstate;
  p_TP_yyStackEntry v_x;

  Variant tmp_ref;
  {
    Variant tmp0((m_yyidx));
    LINE(1546,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    v_state.assignVal(tmp1);
    tmp_ref.unset();
  }
  {
    LINE(1547,0);
    const Variant &tmp0((s_sa1165cb89.rvalAt(v_state, AccessFlags::Error)));
    v_expected.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      Variant tmp1((v_token));
      LINE(1548,0);
      const Variant &tmp2((s_sa1165cb89.rvalAt(v_state, AccessFlags::Error)));
      tmp0 = (x_in_array(tmp1, tmp2, true));
    }
    if (tmp0) {
      {
        return v_expected;
      }
    }
  }
  v_stack.assignVal(m_yystack);
  v_yyidx.assignVal(m_yyidx);
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(1554,0);
          const Variant &tmp0((t_yy_find_shift_action(v_token)));
          v_yyact.assignVal(tmp0);
        }
        if ((not_less(v_yyact, 387LL /* self::YYNSTATE */) && less(v_yyact, 588LL))) {
          {
            v_done = 0LL;
            {
              LOOP_COUNTER(2);
              do {
                LOOP_COUNTER_CHECK(2);
                {
                  if (equal(v_done++, 100LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return LINE(1564,(x_array_unique(v_expected)));
                    }
                  }
                  v_yyruleno.assignVal((v_yyact - 387LL /* self::YYNSTATE */));
                  {
                    LINE(1567,0);
                    const Variant &tmp0((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssc9040cd3, "rhs"), AccessFlags::Error_Key)));
                    m_yyidx -= tmp0;
                  }
                  {
                    Variant tmp0((m_yyidx));
                    LINE(1569,0);
                    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
                    LINE(1570,0);
                    const Variant &tmp2((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                    const Variant &tmp3((t_yy_find_reduce_action(tmp1, tmp2)));
                    v_nextstate.assignVal(tmp3);
                    tmp_ref.unset();
                  }
                  if (isset(s_sa1165cb89, v_nextstate)) {
                    {
                      {
                        Variant tmp0((v_expected));
                        LINE(1572,0);
                        const Variant &tmp1((s_sa1165cb89.rvalAt(v_nextstate, AccessFlags::Error)));
                        const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
                        v_expected.assignVal(tmp2);
                      }
                      {
                        bool tmp0;
                        {
                          Variant tmp1((v_token));
                          LINE(1574,0);
                          const Variant &tmp2((s_sa1165cb89.rvalAt(v_nextstate, AccessFlags::Error)));
                          tmp0 = (x_in_array(tmp1, tmp2, true));
                        }
                        if (tmp0) {
                          {
                            m_yyidx.assignVal(v_yyidx);
                            m_yystack.assignVal(v_stack);
                            return LINE(1577,(x_array_unique(v_expected)));
                          }
                        }
                      }
                    }
                  }
                  if (less(v_nextstate, 387LL /* self::YYNSTATE */)) {
                    {
                      m_yyidx++;
                      {
                        LINE(1583,0);
                        const p_TP_yyStackEntry &tmp0((p_TP_yyStackEntry(((c_TP_yyStackEntry*)coo_TP_yyStackEntry()))));
                        v_x = tmp0;
                      }
                      v_x->m_stateno.assignVal(v_nextstate);
                      {
                        LINE(1585,0);
                        const Variant &tmp0((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                        v_x->m_major.assignVal(tmp0);
                      }
                      m_yystack.set(m_yyidx, (VarNR(v_x)));
                      goto continue1;
                    }
                  }
                  else if (equal(v_nextstate, 589LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return LINE(1594,(x_array_unique(v_expected)));
                    }
                  }
                  else if (same(v_nextstate, 590LL /* self::YY_NO_ACTION */)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return v_expected;
                    }
                  }
                  else {
                    {
                      v_yyact.assignVal(v_nextstate);
                    }
                  }
                }
              } while (true);
            }
          }
        }
        break;
      }
      continue1:;
    } while (true);
  }
  m_yyidx.assignVal(v_yyidx);
  m_yystack.assignVal(v_stack);
  return LINE(1609,(x_array_unique(v_expected)));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1612 */
bool c_Smarty_Internal_Templateparser::t_yy_is_expected_token(CVarRef v_token) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_is_expected_token);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_is_expected_token", array_createvi(1, toVPOD(v_token)), r);
  Variant v_state;
  Variant v_stack;
  Variant v_yyidx;
  Variant v_yyact;
  int64 v_done = 0;
  Numeric v_yyruleno = 0;
  Variant v_nextstate;
  p_TP_yyStackEntry v_x;

  Variant tmp_ref;
  if (same(v_token, 0LL)) {
    {
      return true;
    }
  }
  {
    Variant tmp0((m_yyidx));
    LINE(1617,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    v_state.assignVal(tmp1);
    tmp_ref.unset();
  }
  {
    bool tmp0;
    {
      Variant tmp1((v_token));
      LINE(1618,0);
      const Variant &tmp2((s_sa1165cb89.rvalAt(v_state, AccessFlags::Error)));
      tmp0 = (x_in_array(tmp1, tmp2, true));
    }
    if (tmp0) {
      {
        return true;
      }
    }
  }
  v_stack.assignVal(m_yystack);
  v_yyidx.assignVal(m_yyidx);
  {
    LOOP_COUNTER(1);
    do {
      LOOP_COUNTER_CHECK(1);
      {
        {
          LINE(1624,0);
          const Variant &tmp0((t_yy_find_shift_action(v_token)));
          v_yyact.assignVal(tmp0);
        }
        if ((not_less(v_yyact, 387LL /* self::YYNSTATE */) && less(v_yyact, 588LL))) {
          {
            v_done = 0LL;
            {
              LOOP_COUNTER(2);
              do {
                LOOP_COUNTER_CHECK(2);
                {
                  if (equal(v_done++, 100LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return true;
                    }
                  }
                  v_yyruleno.assignVal((v_yyact - 387LL /* self::YYNSTATE */));
                  {
                    LINE(1637,0);
                    const Variant &tmp0((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssc9040cd3, "rhs"), AccessFlags::Error_Key)));
                    m_yyidx -= tmp0;
                  }
                  {
                    Variant tmp0((m_yyidx));
                    LINE(1639,0);
                    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
                    LINE(1640,0);
                    const Variant &tmp2((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                    const Variant &tmp3((t_yy_find_reduce_action(tmp1, tmp2)));
                    v_nextstate.assignVal(tmp3);
                    tmp_ref.unset();
                  }
                  {
                    bool tmp0;
                    {
                      bool tmp1 = (isset(s_sa1165cb89, v_nextstate));
                      if (tmp1) {
                        Variant tmp2((v_token));
                        LINE(1642,0);
                        const Variant &tmp3((s_sa1165cb89.rvalAt(v_nextstate, AccessFlags::Error)));
                        tmp1 = (x_in_array(tmp2, tmp3, true));
                      }
                      tmp0 = (tmp1);
                    }
                    if (tmp0) {
                      {
                        m_yyidx.assignVal(v_yyidx);
                        m_yystack.assignVal(v_stack);
                        return true;
                      }
                    }
                  }
                  if (less(v_nextstate, 387LL /* self::YYNSTATE */)) {
                    {
                      m_yyidx++;
                      {
                        LINE(1650,0);
                        const p_TP_yyStackEntry &tmp0((p_TP_yyStackEntry(((c_TP_yyStackEntry*)coo_TP_yyStackEntry()))));
                        v_x = tmp0;
                      }
                      v_x->m_stateno.assignVal(v_nextstate);
                      {
                        LINE(1652,0);
                        const Variant &tmp0((s_sabf317507.rvalAtRef(v_yyruleno, AccessFlags::Error).rvalAt(NAMSTR(s_ssea0934de, "lhs"), AccessFlags::Error_Key)));
                        v_x->m_major.assignVal(tmp0);
                      }
                      m_yystack.set(m_yyidx, (VarNR(v_x)));
                      goto continue1;
                    }
                  }
                  else if (equal(v_nextstate, 589LL)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      if (!(toBoolean(v_token))) {
                        {
                          return true;
                        }
                      }
                      return false;
                    }
                  }
                  else if (same(v_nextstate, 590LL /* self::YY_NO_ACTION */)) {
                    {
                      m_yyidx.assignVal(v_yyidx);
                      m_yystack.assignVal(v_stack);
                      return true;
                    }
                  }
                  else {
                    {
                      v_yyact.assignVal(v_nextstate);
                    }
                  }
                }
              } while (true);
            }
          }
        }
        break;
      }
      continue1:;
    } while (true);
  }
  m_yyidx.assignVal(v_yyidx);
  m_yystack.assignVal(v_stack);
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1683 */
Variant c_Smarty_Internal_Templateparser::t_yy_find_shift_action(CVarRef v_iLookAhead) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_find_shift_action);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_find_shift_action", array_createvi(1, toVPOD(v_iLookAhead)), r);
  Variant v_stateno;
  Variant v_i;
  Variant v_iFallback;

  Variant tmp_ref;
  {
    Variant tmp0((m_yyidx));
    LINE(1685,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss109bc0ae, "stateno"), true)));
    v_stateno.assignVal(tmp1);
    tmp_ref.unset();
  }
  if (!(isset(s_sabce8d3f1, v_stateno))) {
    {
      return LINE(1690,(s_sa3a11567d.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  {
    LINE(1692,0);
    const Variant &tmp0((s_sabce8d3f1.rvalAt(v_stateno, AccessFlags::Error)));
    v_i.assignVal(tmp0);
  }
  if (same(v_i, -45LL /* self::YY_SHIFT_USE_DFLT */)) {
    {
      return LINE(1694,(s_sa3a11567d.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  if (equal(v_iLookAhead, 121LL /* self::YYNOCODE */)) {
    {
      return 590LL /* self::YY_NO_ACTION */;
    }
  }
  v_i += v_iLookAhead;
  {
    bool tmp0;
    {
      bool tmp1 = ((less(v_i, 0LL) || not_less(v_i, 2637LL /* self::YY_SZ_ACTTAB */)));
      if (!tmp1) {
        LINE(1701,0);
        const Variant &tmp2((s_saedab6496.rvalAt(v_i, AccessFlags::Error)));
        tmp1 = (!equal(tmp2, v_iLookAhead));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            bool tmp1 = (LINE(1702,(toBoolean(x_count(s_sva00000000)))));
            if (tmp1) {
              int tmp2((x_count(s_sva00000000)));
              tmp1 = (less(v_iLookAhead, tmp2));
            }
            bool tmp3 = (tmp1);
            if (tmp3) {
              LINE(1703,0);
              const Variant &tmp4((s_sa00000000.rvalAt(v_iLookAhead, AccessFlags::Error)));
              tmp3 = (!equal(v_iFallback.assignVal(tmp4), 0LL));
            }
            tmp0 = (tmp3);
          }
          if (tmp0) {
            {
              if (toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
                {
                  {
                    const Object &tmp0((toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE)));
                    const String &tmp1((toString(g->s_Smarty_Internal_Templateparser___yyTracePrompt)));
                    LINE(1706,0);
                    const String &tmp2((toString(m_yyTokenName.rvalAt(v_iLookAhead, AccessFlags::Error))));
                    LINE(1707,0);
                    const String &tmp3((toString(m_yyTokenName.rvalAt(v_iFallback, AccessFlags::Error))));
                    x_fwrite(tmp0, concat6(tmp1, NAMSTR(s_ss92c8158a, "FALLBACK "), tmp2, NAMSTR(s_ss8f4bca72, " => "), tmp3, NAMSTR(s_ss66d2232c, "\n")));
                  }
                }
              }
              return LINE(1709,(t_yy_find_shift_action(v_iFallback)));
            }
          }
        }
        return LINE(1711,(s_sa3a11567d.rvalAt(v_stateno, AccessFlags::Error)));
      }
    }
    else {
      {
        return LINE(1713,(s_sad6303cd7.rvalAt(v_i, AccessFlags::Error)));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1717 */
Variant c_Smarty_Internal_Templateparser::t_yy_find_reduce_action(CVarRef v_stateno, CVarRef v_iLookAhead) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_find_reduce_action);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_find_reduce_action", array_createvi(2, toVPOD(v_stateno), toVPOD(v_iLookAhead)), r);
  Variant v_i;

  if (!(isset(s_sa72fd2b6e, v_stateno))) {
    {
      return LINE(1722,(s_sa3a11567d.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  {
    LINE(1724,0);
    const Variant &tmp0((s_sa72fd2b6e.rvalAt(v_stateno, AccessFlags::Error)));
    v_i.assignVal(tmp0);
  }
  if (equal(v_i, -91LL /* self::YY_REDUCE_USE_DFLT */)) {
    {
      return LINE(1726,(s_sa3a11567d.rvalAt(v_stateno, AccessFlags::Error)));
    }
  }
  if (equal(v_iLookAhead, 121LL /* self::YYNOCODE */)) {
    {
      return 590LL /* self::YY_NO_ACTION */;
    }
  }
  v_i += v_iLookAhead;
  {
    bool tmp0;
    {
      bool tmp1 = ((less(v_i, 0LL) || not_less(v_i, 2637LL /* self::YY_SZ_ACTTAB */)));
      if (!tmp1) {
        LINE(1733,0);
        const Variant &tmp2((s_saedab6496.rvalAt(v_i, AccessFlags::Error)));
        tmp1 = (!equal(tmp2, v_iLookAhead));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        return LINE(1734,(s_sa3a11567d.rvalAt(v_stateno, AccessFlags::Error)));
      }
    }
    else {
      {
        return LINE(1736,(s_sad6303cd7.rvalAt(v_i, AccessFlags::Error)));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 1740 */
void c_Smarty_Internal_Templateparser::t_yy_shift(CVarRef v_yyNewState, CVarRef v_yyMajor, CVarRef v_yypMinor) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_shift);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_shift", array_createvi(3, toVPOD(v_yyNewState), toVPOD(v_yyMajor), toVPOD(v_yypMinor)), );
  p_TP_yyStackEntry v_yytos;
  int64 v_i = 0;

  Variant tmp_ref;
  m_yyidx++;
  if (not_less(m_yyidx, 100LL /* self::YYSTACKDEPTH */)) {
    {
      m_yyidx--;
      if (toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE)) {
        {
          LINE(1746,(x_fprintf(3, toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE), NAMSTR(s_ss0481e40e, "%sStack Overflow!\n"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Templateparser___yyTracePrompt))))));
        }
      }
      LOOP_COUNTER(1);
      {
        while (not_less(m_yyidx, 0LL)) {
          LOOP_COUNTER_CHECK(1);
          {
            LINE(1749,(t_yy_pop_parser_stack()));
          }
        }
      }
      m_internalError = true;
      {
        LINE(1754,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs98e7c3a7, "Stack overflow in template parser"));
      }
      return;
    }
  }
  {
    LINE(1758,0);
    const p_TP_yyStackEntry &tmp0((p_TP_yyStackEntry(((c_TP_yyStackEntry*)coo_TP_yyStackEntry()))));
    v_yytos = tmp0;
  }
  v_yytos->m_stateno.assignVal(v_yyNewState);
  v_yytos->m_major.assignVal(v_yyMajor);
  v_yytos->m_minor.assignVal(v_yypMinor);
  LINE(1762,(x_array_push(2, ref(m_yystack), VarNR(v_yytos))));
  if ((toBoolean(g->s_Smarty_Internal_Templateparser___yyTraceFILE) && more(m_yyidx, 0LL))) {
    {
      LINE(1765,(x_fprintf(4, toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE), NAMSTR(s_ss92723be2, "%sShift %d\n"), Array(array_createvi(2, toVPOD(g->s_Smarty_Internal_Templateparser___yyTracePrompt), toVPOD(v_yyNewState))))));
      LINE(1766,(x_fprintf(3, toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE), NAMSTR(s_ssb30b55cb, "%sStack:"), Array(array_createvi(1, toVPOD(g->s_Smarty_Internal_Templateparser___yyTracePrompt))))));
      {
        LOOP_COUNTER(2);
        for (v_i = 1LL; (not_more(v_i, m_yyidx)); v_i++) {
          LOOP_COUNTER_CHECK(2);
          {
            {
              const Object &tmp0((toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE)));
              LINE(1769,0);
              const Variant &tmp1((m_yystack.rvalRef(v_i, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssec82c80c, "major"), true)));
              const Variant &tmp2((m_yyTokenName.rvalAt(tmp1, AccessFlags::Error)));
              x_fprintf(3, tmp0, NAMSTR(s_ss7d06f2d9, " %s"), Array(array_createvi(1, toVPOD(tmp2))));
              tmp_ref.unset();
            }
          }
        }
      }
      LINE(1771,(x_fwrite(toObject(g->s_Smarty_Internal_Templateparser___yyTraceFILE), NAMSTR(s_ss66d2232c, "\n"))));
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2182 */
void c_Smarty_Internal_Templateparser::t_yy_r0() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r0);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r0", null_array, );
  {
    LINE(2182,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss82049faf, "root_buffer"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
    m__retvalue.assignVal(tmp1);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2185 */
void c_Smarty_Internal_Templateparser::t_yy_r1() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r1);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r1", null_array, );
  Variant tmp_ref;
  {
    LINE(2185,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ssca2ba055, "append_subtree"), 0x278E3AB52EABB542LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + 0LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    (mcp0.ci->getMeth1Args())(mcp0, 1, tmp2);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2188 */
void c_Smarty_Internal_Templateparser::t_yy_r4() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r4);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r4", null_array, );
  String v_tmp;
  Variant v_code;

  Variant tmp_ref;
  if (LINE(2189,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss11e77b3f, "has_code"), true))))) {
    {
      v_tmp = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(1);
        Variant map2 = LINE(2190,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ssc5d15748, "prefix_code"), true)));
        {
          StringBuffer tmp_sbuf_v_tmp(512);
          for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
            LOOP_COUNTER_CHECK(1);
            iter3.second(v_code);
            {
              tmp_sbuf_v_tmp.addWithTaint(toString(v_code));
            }
          }
          concat_assign(v_tmp, tmp_sbuf_v_tmp.detachWithTaint());
        }
      }
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ssc5d15748, "prefix_code"), s_sa00000000);
        tmp_ref.unset();
      }
      {
        p__smarty_tag tmp0 = ((checkClassExistsThrow(NAMSTR(s_sse95d3705, "_smarty_tag"), &g->CDEC(_smarty_tag))), (coo__smarty_tag()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        LINE(2191,0);
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ssb07725ba, "processNocacheCode"), 0x2417111975FF20FELL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        const Numeric &tmp3(((m_yyidx + 0LL)));
        const String &tmp4((toString(m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
        Variant tmp5(((mcp2.ci->getMeth2Args())(mcp2, 2, VarNR(concat(v_tmp, tmp4)), true_varNR)));
        ((c__smarty_tag*)tmp0.get()->create(tmp1, tmp5));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
  else {
    {
      {
        p__smarty_tag tmp0 = ((checkClassExistsThrow(NAMSTR(s_sse95d3705, "_smarty_tag"), &g->CDEC(_smarty_tag))), (coo__smarty_tag()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2193,0);
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        ((c__smarty_tag*)tmp0.get()->create(tmp1, tmp3));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e5769be, "has_variable_string"), false);
    tmp_ref.unset();
  }
  {
    LINE(2196,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true)));
    int tmp1((x_count(tmp0)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss8d453f55, "block_nesting_level"), tmp1);
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2200 */
void c_Smarty_Internal_Templateparser::t_yy_r5() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r5);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r5", null_array, );
  {
    p__smarty_tag tmp0 = ((checkClassExistsThrow(NAMSTR(s_sse95d3705, "_smarty_tag"), &g->CDEC(_smarty_tag))), (coo__smarty_tag()));
    ((c__smarty_tag*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss00000000, "")));
    m__retvalue = tmp0;
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2203 */
void c_Smarty_Internal_Templateparser::t_yy_r6() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r6);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r6", null_array, );
  Variant tmp_ref;
  {
    p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    LINE(2203,0);
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
    m__retvalue = tmp0;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2206 */
void c_Smarty_Internal_Templateparser::t_yy_r7() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r7);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r7", null_array, );
  Variant tmp_ref;
  if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_PASSTHRU)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2208,0);
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        const Variant &tmp4((c_Smarty_Internal_Templateparser::t_escape_start_tag(tmp3)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp4));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_QUOTE)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2210,0);
        const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
        const String &tmp4((x_htmlspecialchars(tmp3, toInt32(3LL) /* ENT_QUOTES */)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp4));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_ALLOW)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        LINE(2212,0);
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ssb07725ba, "processNocacheCode"), 0x2417111975FF20FELL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        Variant tmp3(((mcp2.ci->getMeth2Args())(mcp2, 2, NAMVAR(s_svs8161bfab, "<\?php"), true_varNR)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
        m__retvalue = tmp0;
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_REMOVE)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss00000000, "")));
        m__retvalue = tmp0;
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2219 */
void c_Smarty_Internal_Templateparser::t_yy_r8() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r8);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r8", null_array, );
  Variant v_save;

  Variant tmp_ref;
  if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss646ca1c0, "is_xml"), true))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
        tmp_ref.unset();
      }
      GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss646ca1c0, "is_xml"), false);
      {
        LINE(2222,0);
        const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true)));
        v_save.assignVal(tmp0);
      }
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        LINE(2223,0);
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ssb07725ba, "processNocacheCode"), 0x2417111975FF20FELL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        Variant tmp3(((mcp2.ci->getMeth3Args())(mcp2, 3, NAMVAR(s_svs1803f381, "<\?php echo '\?>';\?>"), GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true), true_varNR)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
        m__retvalue = tmp0;
      }
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), v_save);
        tmp_ref.unset();
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_PASSTHRU)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss62b842b2, "\?<\?php \?>>")));
        m__retvalue = tmp0;
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_QUOTE)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        LINE(2228,0);
        const String &tmp2((x_htmlspecialchars(NAMSTR(s_ssf7e13165, "\?>"), toInt32(3LL) /* ENT_QUOTES */)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp2));
        m__retvalue = tmp0;
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_ALLOW)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        LINE(2230,0);
        MethodCallPackage mcp2;
        CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp2.methodCall((obj2), NAMSTR(s_ssb07725ba, "processNocacheCode"), 0x2417111975FF20FELL);
        const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
        Variant tmp3(((mcp2.ci->getMeth2Args())(mcp2, 2, NAMVAR(s_svsf7e13165, "\?>"), true_varNR)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
        m__retvalue = tmp0;
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_REMOVE)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss00000000, "")));
        m__retvalue = tmp0;
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2237 */
void c_Smarty_Internal_Templateparser::t_yy_r9() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r9);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r9", null_array, );
  Variant tmp_ref;
  if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_PASSTHRU)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss4067425c, "<<\?php \?>%")));
        m__retvalue = tmp0;
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_QUOTE)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2241,0);
        const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
        const String &tmp4((x_htmlspecialchars(tmp3, toInt32(3LL) /* ENT_QUOTES */)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp4));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_ALLOW)))) {
    {
      if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssedc3afde, "asp_tags"), true))) {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
            LINE(2244,0);
            MethodCallPackage mcp2;
            CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
            mcp2.methodCall((obj2), NAMSTR(s_ssb07725ba, "processNocacheCode"), 0x2417111975FF20FELL);
            const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
            Variant tmp3(((mcp2.ci->getMeth2Args())(mcp2, 2, NAMVAR(s_svsb0b39cf0, "<%"), true_varNR)));
            ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
            m__retvalue = tmp0;
          }
        }
      }
      else {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss4067425c, "<<\?php \?>%")));
            m__retvalue = tmp0;
          }
        }
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_REMOVE)))) {
    {
      if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssedc3afde, "asp_tags"), true))) {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss00000000, "")));
            m__retvalue = tmp0;
          }
        }
      }
      else {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss4067425c, "<<\?php \?>%")));
            m__retvalue = tmp0;
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2258 */
void c_Smarty_Internal_Templateparser::t_yy_r10() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r10);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r10", null_array, );
  if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_PASSTHRU)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss7fcf9f47, "%<\?php \?>>")));
        m__retvalue = tmp0;
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_QUOTE)))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        LINE(2262,0);
        const String &tmp2((x_htmlspecialchars(NAMSTR(s_ssecedba23, "%>"), toInt32(3LL) /* ENT_QUOTES */)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp2));
        m__retvalue = tmp0;
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_ALLOW)))) {
    {
      if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssedc3afde, "asp_tags"), true))) {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
            LINE(2265,0);
            MethodCallPackage mcp2;
            CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
            mcp2.methodCall((obj2), NAMSTR(s_ssb07725ba, "processNocacheCode"), 0x2417111975FF20FELL);
            const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
            Variant tmp3(((mcp2.ci->getMeth2Args())(mcp2, 2, NAMVAR(s_svsecedba23, "%>"), true_varNR)));
            ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
            m__retvalue = tmp0;
          }
        }
      }
      else {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss7fcf9f47, "%<\?php \?>>")));
            m__retvalue = tmp0;
          }
        }
      }
    }
  }
  else if (equal(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true), ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_REMOVE)))) {
    {
      if (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ssedc3afde, "asp_tags"), true))) {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss00000000, "")));
            m__retvalue = tmp0;
          }
        }
      }
      else {
        {
          {
            p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
            ((c__smarty_text*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser), NAMSTR(s_ss7fcf9f47, "%<\?php \?>>")));
            m__retvalue = tmp0;
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2279 */
void c_Smarty_Internal_Templateparser::t_yy_r11() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r11);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r11", null_array, );
  Variant tmp_ref;
  if (LINE(2279,(toBoolean(m_lex.o_getPublic(NAMSTR(s_ss385f4def, "strip"), true))))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2280,0);
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        const Variant &tmp4((c_Smarty_Internal_Templateparser::t_escape_start_tag(tmp3)));
        const Variant &tmp5((x_preg_replace(NAMVAR(s_svs18a23ae5, "![\\$this->yystack[$this->yyidx + 0]->minor ]*[\\r\\n]+[\\$this->yystack[$this->yyidx + 0]->minor ]*!"), NAMVAR(s_svs00000000, ""), tmp4)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp5));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
  else {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2282,0);
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        const Variant &tmp4((c_Smarty_Internal_Templateparser::t_escape_start_tag(tmp3)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp4));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2287 */
void c_Smarty_Internal_Templateparser::t_yy_r12() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r12);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r12", null_array, );
  Variant v_save;

  Variant tmp_ref;
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
    tmp_ref.unset();
  }
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss646ca1c0, "is_xml"), true);
  {
    LINE(2289,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true)));
    v_save.assignVal(tmp0);
  }
  {
    p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    LINE(2290,0);
    MethodCallPackage mcp2;
    CVarRef obj2 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp2.methodCall((obj2), NAMSTR(s_ssb07725ba, "processNocacheCode"), 0x2417111975FF20FELL);
    const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
    Variant tmp3(((mcp2.ci->getMeth3Args())(mcp2, 3, NAMVAR(s_svscbfb4096, "<\?php echo '<\?xml';\?>"), GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true), true_varNR)));
    ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
    m__retvalue = tmp0;
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), v_save);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2295 */
void c_Smarty_Internal_Templateparser::t_yy_r13() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r13);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r13", null_array, );
  Variant tmp_ref;
  if (LINE(2295,(toBoolean(m_lex.o_getPublic(NAMSTR(s_ss385f4def, "strip"), true))))) {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2296,0);
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        const Variant &tmp4((x_preg_replace(NAMVAR(s_svse91b81f7, "![\\t ]*[\\r\\n]+[\\t ]*!"), NAMVAR(s_svs00000000, ""), tmp3)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp4));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
  else {
    {
      {
        p__smarty_text tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssb74b9e0f, "_smarty_text"), &g->CDEC(_smarty_text))), (coo__smarty_text()));
        p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
        const Numeric &tmp2(((m_yyidx + 0LL)));
        LINE(2298,0);
        const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
        ((c__smarty_text*)tmp0.get()->create(tmp1, tmp3));
        m__retvalue = tmp0;
        tmp_ref.unset();
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2303 */
void c_Smarty_Internal_Templateparser::t_yy_r14() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r14);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r14", null_array, );
  Variant tmp_ref;
  {
    p__smarty_linebreak tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss5b9943c5, "_smarty_linebreak"), &g->CDEC(_smarty_linebreak))), (coo__smarty_linebreak()));
    p_Smarty_Internal_Templateparser tmp1((GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    LINE(2304,0);
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ((c__smarty_linebreak*)tmp0.get()->create(tmp1, tmp3));
    m__retvalue = tmp0;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2308 */
void c_Smarty_Internal_Templateparser::t_yy_r15() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r15);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r15", null_array, );
  m__retvalue = NAMSTR(s_ss00000000, "");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2311 */
void c_Smarty_Internal_Templateparser::t_yy_r16() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r16);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r16", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2311,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2314 */
void c_Smarty_Internal_Templateparser::t_yy_r17() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r17);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r17", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -1LL)));
    LINE(2314,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    const Numeric &tmp2(((m_yyidx + 0LL)));
    const String &tmp3((toString(m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(tmp1, tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2317 */
void c_Smarty_Internal_Templateparser::t_yy_r19() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r19);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r19", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2317,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2320 */
void c_Smarty_Internal_Templateparser::t_yy_r21() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r21);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r21", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2320,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Variant &tmp2((c_Smarty_Internal_Templateparser::t_escape_start_tag(tmp1)));
    m__retvalue.assignVal(tmp2);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2323 */
void c_Smarty_Internal_Templateparser::t_yy_r23() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r23);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r23", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2323,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const String &tmp2((c_Smarty_Internal_Templateparser::t_escape_end_tag(tmp1)));
    m__retvalue = tmp2;
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2326 */
void c_Smarty_Internal_Templateparser::t_yy_r24() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r24);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r24", null_array, );
  m__retvalue = NAMSTR(s_ss4067425c, "<<\?php \?>%");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2329 */
void c_Smarty_Internal_Templateparser::t_yy_r25() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r25);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r25", null_array, );
  m__retvalue = NAMSTR(s_ss7fcf9f47, "%<\?php \?>>");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2332 */
void c_Smarty_Internal_Templateparser::t_yy_r26() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r26);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r26", null_array, );
  Variant tmp_ref;
  {
    LINE(2332,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp1(array_createvs(1, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp3)));
    const Array &tmp4((Array(tmp1)));
    Variant tmp5(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svseb0ac908, "private_print_expression"), s_sva00000000, VarNR(tmp4))));
    m__retvalue.assignVal(tmp5);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2335 */
void c_Smarty_Internal_Templateparser::t_yy_r27() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r27);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r27", null_array, );
  Variant tmp_ref;
  {
    LINE(2335,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp4(((m_yyidx + -3LL)));
    const Variant &tmp5((m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp6(((m_yyidx + -2LL)));
    const Variant &tmp7((m_yystack.rvalRef(tmp6, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp3(array_createvs(2, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp5), toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(tmp7)));
    const Array &tmp8((Array(tmp3)));
    Variant tmp9(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svseb0ac908, "private_print_expression"), tmp2, VarNR(tmp8))));
    m__retvalue.assignVal(tmp9);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2338 */
void c_Smarty_Internal_Templateparser::t_yy_r28() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r28);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r28", null_array, );
  Variant tmp_ref;
  {
    LINE(2338,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp4(((m_yyidx + -2LL)));
    const Variant &tmp5((m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp3(array_createvs(1, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp5)));
    const Array &tmp6((Array(tmp3)));
    Variant tmp7(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svseb0ac908, "private_print_expression"), tmp2, VarNR(tmp6))));
    m__retvalue.assignVal(tmp7);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2341 */
void c_Smarty_Internal_Templateparser::t_yy_r31() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r31);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r31", null_array, );
  Variant tmp_ref;
  {
    LINE(2341,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp4(((m_yyidx + -3LL)));
    const Variant &tmp5((m_yystack.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp6(((m_yyidx + -2LL)));
    const Variant &tmp7((m_yystack.rvalRef(tmp6, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp3(array_createvs(2, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp5), toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(tmp7)));
    const Array &tmp8((Array(tmp3)));
    Variant tmp9(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svseb0ac908, "private_print_expression"), tmp2, VarNR(tmp8))));
    m__retvalue.assignVal(tmp9);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2344 */
void c_Smarty_Internal_Templateparser::t_yy_r33() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r33);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r33", null_array, );
  Variant tmp_ref;
  {
    LINE(2344,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp2(array_createvs(1, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp2)));
    const Numeric &tmp7(((m_yyidx + -3LL)));
    const String &tmp8((toString(m_yystack.rvalRef(tmp7, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    ArrayInit tmp6(array_createvs(1, toSPOD(NAMSTR(s_ssc9042120, "var")), toVPOD(VarNR(concat3(NAMSTR(s_sse07b87c4, "'"), tmp8, NAMSTR(s_sse07b87c4, "'"))))));
    const Array &tmp9((Array(tmp6)));
    ArrayInit tmp1(array_createvi(2, toVPOD(VarNR(tmp5)), toVPOD(VarNR(tmp9))));
    const Array &tmp10((Array(tmp1)));
    Variant tmp11(((mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsba4e7712, "assign"), VarNR(tmp10))));
    m__retvalue.assignVal(tmp11);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2347 */
void c_Smarty_Internal_Templateparser::t_yy_r35() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r35);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r35", null_array, );
  Variant tmp_ref;
  {
    LINE(2347,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp3(((m_yyidx + -2LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp2(array_createvs(1, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp2)));
    const Numeric &tmp7(((m_yyidx + -4LL)));
    const String &tmp8((toString(m_yystack.rvalRef(tmp7, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    ArrayInit tmp6(array_createvs(1, toSPOD(NAMSTR(s_ssc9042120, "var")), toVPOD(VarNR(concat3(NAMSTR(s_sse07b87c4, "'"), tmp8, NAMSTR(s_sse07b87c4, "'"))))));
    const Array &tmp9((Array(tmp6)));
    ArrayInit tmp1(array_createvi(2, toVPOD(VarNR(tmp5)), toVPOD(VarNR(tmp9))));
    const Array &tmp10((Array(tmp1)));
    const Numeric &tmp11(((m_yyidx + -1LL)));
    const Variant &tmp12((m_yystack.rvalRef(tmp11, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Variant &tmp13((x_array_merge(2, VarNR(tmp10), Array(array_createvi(1, toVPOD(tmp12))))));
    Variant tmp14(((mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsba4e7712, "assign"), tmp13)));
    m__retvalue.assignVal(tmp14);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2350 */
void c_Smarty_Internal_Templateparser::t_yy_r36() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r36);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r36", null_array, );
  Variant tmp_ref;
  {
    LINE(2350,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp3(((m_yyidx + -2LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp2(array_createvs(1, toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp2)));
    const Numeric &tmp7(((m_yyidx + -4LL)));
    const Variant &tmp8((m_yystack.rvalRef(tmp7, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ssc9042120, "var"), AccessFlags::Error_Key)));
    ArrayInit tmp6(array_createvs(1, toSPOD(NAMSTR(s_ssc9042120, "var")), toVPOD(tmp8)));
    const Array &tmp9((Array(tmp6)));
    ArrayInit tmp1(array_createvi(2, toVPOD(VarNR(tmp5)), toVPOD(VarNR(tmp9))));
    const Array &tmp10((Array(tmp1)));
    const Numeric &tmp11(((m_yyidx + -1LL)));
    const Variant &tmp12((m_yystack.rvalRef(tmp11, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Variant &tmp13((x_array_merge(2, VarNR(tmp10), Array(array_createvi(1, toVPOD(tmp12))))));
    const Numeric &tmp15(((m_yyidx + -4LL)));
    const Variant &tmp16((m_yystack.rvalRef(tmp15, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true).rvalAt(NAMSTR(s_ss306b195e, "smarty_internal_index"), AccessFlags::Error_Key)));
    ArrayInit tmp14(array_createvs(1, toSPOD(NAMSTR(s_ss306b195e, "smarty_internal_index")), toVPOD(tmp16)));
    const Array &tmp17((Array(tmp14)));
    Variant tmp18(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svsba4e7712, "assign"), tmp13, VarNR(tmp17))));
    m__retvalue.assignVal(tmp18);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2353 */
void c_Smarty_Internal_Templateparser::t_yy_r37() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r37);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r37", null_array, );
  Variant tmp_ref;
  {
    LINE(2353,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -2LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    Variant tmp5(((mcp0.ci->getMeth2Args())(mcp0, 2, tmp2, tmp4)));
    m__retvalue.assignVal(tmp5);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2356 */
void c_Smarty_Internal_Templateparser::t_yy_r38() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r38);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r38", null_array, );
  Variant tmp_ref;
  {
    LINE(2356,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    Variant tmp3(((mcp0.ci->getMeth2Args())(mcp0, 2, tmp2, s_sva00000000)));
    m__retvalue.assignVal(tmp3);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2359 */
void c_Smarty_Internal_Templateparser::t_yy_r39() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r39);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r39", null_array, );
  Variant tmp_ref;
  {
    LINE(2359,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -4LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp6(((m_yyidx + -2LL)));
    const Variant &tmp7((m_yystack.rvalRef(tmp6, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp5(array_createvs(1, toSPOD(NAMSTR(s_ss34c768cb, "object_methode")), toVPOD(tmp7)));
    const Array &tmp8((Array(tmp5)));
    Variant tmp9(((mcp0.ci->getMeth3Args())(mcp0, 3, tmp2, tmp4, VarNR(tmp8))));
    m__retvalue.assignVal(tmp9);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2362 */
void c_Smarty_Internal_Templateparser::t_yy_r40() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r40);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r40", null_array, );
  Variant tmp_ref;
  {
    LINE(2362,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -3LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const String &tmp5((toString((mcp0.ci->getMeth2Args())(mcp0, 2, tmp2, tmp4))));
    m__retvalue = concat3(NAMSTR(s_ss552ff114, "<\?php ob_start();\?>"), tmp5, NAMSTR(s_ss686ceae7, "<\?php echo "));
    tmp_ref.unset();
  }
  {
    LINE(2363,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp2(((m_yyidx + -2LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp1(array_createvs(2, toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(tmp3), toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(NAMVAR(s_svsd9ced2b2, "ob_get_clean()"))));
    const Array &tmp4((Array(tmp1)));
    const String &tmp5((toString((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs5f7a1e78, "private_modifier"), s_sva00000000, VarNR(tmp4)))));
    concat_assign(m__retvalue, concat(tmp5, NAMSTR(s_ssf7e13165, "\?>")));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2367 */
void c_Smarty_Internal_Templateparser::t_yy_r41() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r41);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r41", null_array, );
  Variant tmp_ref;
  {
    LINE(2367,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -5LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp6(((m_yyidx + -3LL)));
    const Variant &tmp7((m_yystack.rvalRef(tmp6, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp5(array_createvs(1, toSPOD(NAMSTR(s_ss34c768cb, "object_methode")), toVPOD(tmp7)));
    const Array &tmp8((Array(tmp5)));
    const String &tmp9((toString((mcp0.ci->getMeth3Args())(mcp0, 3, tmp2, tmp4, VarNR(tmp8)))));
    m__retvalue = concat3(NAMSTR(s_ss552ff114, "<\?php ob_start();\?>"), tmp9, NAMSTR(s_ss686ceae7, "<\?php echo "));
    tmp_ref.unset();
  }
  {
    LINE(2368,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp2(((m_yyidx + -2LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp1(array_createvs(2, toSPOD(NAMSTR(s_ss6bddc2a2, "modifierlist")), toVPOD(tmp3), toSPOD(NAMSTR(s_sse0c88471, "value")), toVPOD(NAMVAR(s_svsd9ced2b2, "ob_get_clean()"))));
    const Array &tmp4((Array(tmp1)));
    const String &tmp5((toString((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svs5f7a1e78, "private_modifier"), s_sva00000000, VarNR(tmp4)))));
    concat_assign(m__retvalue, concat(tmp5, NAMSTR(s_ssf7e13165, "\?>")));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2372 */
void c_Smarty_Internal_Templateparser::t_yy_r42() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r42);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r42", null_array, );
  String v_tag;

  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -2LL)));
    LINE(2372,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    int tmp2((toInt32(m_lex.o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true))));
    const String &tmp3((toString(x_substr(tmp1, tmp2))));
    const String &tmp4((x_trim(tmp3)));
    v_tag = tmp4;
    tmp_ref.unset();
  }
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((equal(v_tag, NAMSTR(s_ssd34b453e, "else if")) ? ((Variant)(NAMSTR(s_ss234ce62e, "elseif"))) : ((Variant)(v_tag)))));
    const Numeric &tmp3(((m_yyidx + -1LL)));
    const Variant &tmp4((m_yystack.rvalRef(tmp3, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp2(array_createvs(1, toSPOD(NAMSTR(s_ss2bd51974, "if condition")), toVPOD(tmp4)));
    const Array &tmp5((Array(tmp2)));
    Variant tmp6(((mcp0.ci->getMeth3Args())(mcp0, 3, tmp1, s_sva00000000, VarNR(tmp5))));
    m__retvalue.assignVal(tmp6);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2375 */
void c_Smarty_Internal_Templateparser::t_yy_r43() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r43);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r43", null_array, );
  String v_tag;

  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + -3LL)));
    LINE(2375,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    int tmp2((toInt32(m_lex.o_getPublic(NAMSTR(s_ss83c05e30, "ldel_length"), true))));
    const String &tmp3((toString(x_substr(tmp1, tmp2))));
    const String &tmp4((x_trim(tmp3)));
    v_tag = tmp4;
    tmp_ref.unset();
  }
  {
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((equal(v_tag, NAMSTR(s_ssd34b453e, "else if")) ? ((Variant)(NAMSTR(s_ss234ce62e, "elseif"))) : ((Variant)(v_tag)))));
    const Numeric &tmp2(((m_yyidx + -1LL)));
    const Variant &tmp3((m_yystack.rvalRef(tmp2, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -2LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ss2bd51974, "if condition")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    Variant tmp8(((mcp0.ci->getMeth3Args())(mcp0, 3, tmp1, tmp3, VarNR(tmp7))));
    m__retvalue.assignVal(tmp8);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2378 */
void c_Smarty_Internal_Templateparser::t_yy_r46() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r46);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r46", null_array, );
  Variant tmp_ref;
  {
    LINE(2379,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss833b37c8, "compileTag"), 0x2BC7E0F6CD148C09LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Numeric &tmp1(((m_yyidx + -1LL)));
    const Variant &tmp2((m_yystack.rvalRef(tmp1, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    const Numeric &tmp5(((m_yyidx + -10LL)));
    const Variant &tmp6((m_yystack.rvalRef(tmp5, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp4(array_createvs(1, toSPOD(NAMSTR(s_ss3c3982d5, "start")), toVPOD(tmp6)));
    const Array &tmp7((Array(tmp4)));
    const Numeric &tmp9(((m_yyidx + -7LL)));
    const Variant &tmp10((m_yystack.rvalRef(tmp9, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp8(array_createvs(1, toSPOD(NAMSTR(s_ss272e2102, "ifexp")), toVPOD(tmp10)));
    const Array &tmp11((Array(tmp8)));
    const Numeric &tmp13(((m_yyidx + -3LL)));
    const Variant &tmp14((m_yystack.rvalRef(tmp13, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp12(array_createvs(1, toSPOD(NAMSTR(s_ssc9042120, "var")), toVPOD(tmp14)));
    const Array &tmp15((Array(tmp12)));
    const Numeric &tmp17(((m_yyidx + -2LL)));
    const Variant &tmp18((m_yystack.rvalRef(tmp17, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    ArrayInit tmp16(array_createvs(1, toSPOD(NAMSTR(s_ss0470736e, "step")), toVPOD(tmp18)));
    const Array &tmp19((Array(tmp16)));
    ArrayInit tmp3(array_createvi(4, toVPOD(VarNR(tmp7)), toVPOD(VarNR(tmp11)), toVPOD(VarNR(tmp15)), toVPOD(VarNR(tmp19))));
    const Array &tmp20((Array(tmp3)));
    const Variant &tmp21((x_array_merge(2, tmp2, Array(array_createvi(1, toVPOD(VarNR(tmp20)))))));
    Variant tmp22(((mcp0.ci->getMeth3Args())(mcp0, 3, NAMVAR(s_svsb157050b, "for"), tmp21, NAMVAR(s_svib794f8ce, 1LL))));
    m__retvalue.assignVal(tmp22);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2382 */
void c_Smarty_Internal_Templateparser::t_yy_r47() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r47);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r47", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2382,0);
    const String &tmp1((toString(m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true))));
    m__retvalue = concat(NAMSTR(s_ss7adc04d2, "="), tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 2385 */
void c_Smarty_Internal_Templateparser::t_yy_r48() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::yy_r48);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::yy_r48", null_array, );
  Variant tmp_ref;
  {
    const Numeric &tmp0(((m_yyidx + 0LL)));
    LINE(2385,0);
    const Variant &tmp1((m_yystack.rvalRef(tmp0, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ss80e0352e, "minor"), true)));
    m__retvalue.assignVal(tmp1);
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
}
