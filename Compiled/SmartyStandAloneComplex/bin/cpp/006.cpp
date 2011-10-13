
#include <php/Smarty/libs/plugins/function.mailto.h>
#include <php/Smarty/libs/plugins/function.mailto.fws.h>
#include <php/Smarty/libs/plugins/function.math.h>
#include <php/Smarty/libs/plugins/function.math.fws.h>
#include <php/Smarty/libs/plugins/modifier.capitalize.h>
#include <php/Smarty/libs/plugins/modifier.capitalize.fws.h>
#include <php/Smarty/libs/plugins/modifier.date_format.h>
#include <php/Smarty/libs/plugins/modifier.date_format.fws.h>
#include <php/Smarty/libs/plugins/modifier.debug_print_var.h>
#include <php/Smarty/libs/plugins/modifier.debug_print_var.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/plugins/shared.make_timestamp.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_mailto;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.mailto.php line 51 */
Variant f_smarty_function_mailto(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_mailto);
  INTERCEPT_INJECTION("smarty_function_mailto", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_extra;
  Variant v_address;
  Variant v_text;
  Variant v_search;
  Variant v_replace;
  Variant v_mail_parms;
  Variant v_var;
  Variant v_value;
  Variant v_mail_parm_vals;
  Variant v_i;
  Variant v_encode;
  Variant v_string;
  Variant v_js_encode;
  Variant v_x;
  Variant v_y;
  Variant v_ord;
  Variant v__ret;
  Variant v_match;
  Variant v_address_encode;
  Variant v_text_encode;
  Variant v_mailto;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_extra; Variant &v_address; Variant &v_text; Variant &v_search; Variant &v_replace; Variant &v_mail_parms; Variant &v_var; Variant &v_value; Variant &v_mail_parm_vals; Variant &v_i; Variant &v_encode; Variant &v_string; Variant &v_js_encode; Variant &v_x; Variant &v_y; Variant &v_ord; Variant &v__ret; Variant &v_match; Variant &v_address_encode; Variant &v_text_encode; Variant &v_mailto;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_extra, Variant &r_address, Variant &r_text, Variant &r_search, Variant &r_replace, Variant &r_mail_parms, Variant &r_var, Variant &r_value, Variant &r_mail_parm_vals, Variant &r_i, Variant &r_encode, Variant &r_string, Variant &r_js_encode, Variant &r_x, Variant &r_y, Variant &r_ord, Variant &r__ret, Variant &r_match, Variant &r_address_encode, Variant &r_text_encode, Variant &r_mailto) : v_params(r_params), v_template(r_template), v_extra(r_extra), v_address(r_address), v_text(r_text), v_search(r_search), v_replace(r_replace), v_mail_parms(r_mail_parms), v_var(r_var), v_value(r_value), v_mail_parm_vals(r_mail_parm_vals), v_i(r_i), v_encode(r_encode), v_string(r_string), v_js_encode(r_js_encode), v_x(r_x), v_y(r_y), v_ord(r_ord), v__ret(r__ret), v_match(r_match), v_address_encode(r_address_encode), v_text_encode(r_text_encode), v_mailto(r_mailto) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 63) {
        case 1:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          HASH_RETURN_NAMSTR(0x00F31DE90234EA81LL, s_sse59fa416, v_x,
                             1);
          break;
        case 5:
          HASH_RETURN_NAMSTR(0x48AE0F24E9B83785LL, s_ssf5972a27, v_encode,
                             6);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x42FAC655280A6146LL, s_sscfd63bc6, v_replace,
                             7);
          break;
        case 9:
          HASH_RETURN_NAMSTR(0x15B369BE0D0C8149LL, s_ss69ad4382, v_string,
                             6);
          break;
        case 10:
          HASH_RETURN_NAMSTR(0x4C2672AC07B9CF8ALL, s_ssc9042120, v_var,
                             3);
          break;
        case 12:
          HASH_RETURN_NAMSTR(0x7F64BC1ECEF60CCCLL, s_ssa4dfc78a, v_y,
                             1);
          break;
        case 14:
          HASH_RETURN_NAMSTR(0x28F45A5656FD0C8ELL, s_ss55f9de2b, v_mailto,
                             6);
          break;
        case 18:
          HASH_RETURN_NAMSTR(0x0B23D60D548474D2LL, s_sse30f31bc, v_mail_parms,
                             10);
          break;
        case 19:
          HASH_RETURN_NAMSTR(0x2B8782BF7206E093LL, s_ssf0078f40, v_match,
                             5);
          break;
        case 23:
          HASH_RETURN_NAMSTR(0x021A52B45A788597LL, s_sse0c88471, v_value,
                             5);
          break;
        case 29:
          HASH_RETURN_NAMSTR(0x4D26D167066BB11DLL, s_ss4dd3a743, v_text,
                             4);
          break;
        case 31:
          HASH_RETURN_NAMSTR(0x2BCCB7779D6AED5FLL, s_ss2e6fb179, v_address,
                             7);
          break;
        case 44:
          HASH_RETURN_NAMSTR(0x2E8390EA2ABA19ACLL, s_ss54173842, v_extra,
                             5);
          HASH_RETURN_NAMSTR(0x28FF22828CC2C4ECLL, s_ssd9cf6243, v_search,
                             6);
          break;
        case 46:
          HASH_RETURN_NAMSTR(0x07971CAAD51B0D2ELL, s_ssb004e82e, v_text_encode,
                             11);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          break;
        case 54:
          HASH_RETURN_NAMSTR(0x616DDB67073A0776LL, s_ss7e4a345f, v_ord,
                             3);
          break;
        case 56:
          HASH_RETURN_NAMSTR(0x3B533DBB60E99DB8LL, s_ssdcd5e8b2, v_mail_parm_vals,
                             14);
          break;
        case 58:
          HASH_RETURN_NAMSTR(0x3AA4A3EEB5C426BALL, s_ss120b3f93, v_js_encode,
                             9);
          break;
        case 60:
          HASH_RETURN_NAMSTR(0x76AD930F9E66AD3CLL, s_ssa1b9326a, v__ret,
                             4);
          break;
        case 62:
          HASH_RETURN_NAMSTR(0x066E259A1CC5B17ELL, s_ss95766e98, v_i,
                             1);
          HASH_RETURN_NAMSTR(0x7DDA49293E91623ELL, s_ssb378005e, v_address_encode,
                             14);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_params, v_template, v_extra, v_address, v_text, v_search, v_replace, v_mail_parms, v_var, v_value, v_mail_parm_vals, v_i, v_encode, v_string, v_js_encode, v_x, v_y, v_ord, v__ret, v_match, v_address_encode, v_text_encode, v_mailto);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  v_extra = NAMSTR(s_ss00000000, "");
  {
    bool tmp0;
    {
      tmp0 = (empty(v_params, NAMSTR(s_ss2e6fb179, "address"), true));
    }
    if (tmp0) {
      {
        LINE(56,(x_trigger_error(NAMSTR(s_ss1095c428, "mailto: missing 'address' parameter"), toInt32(512LL) /* E_USER_WARNING */)));
        return null;
      }
    }
    else {
      {
        {
          LINE(59,0);
          const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ss2e6fb179, "address"), AccessFlags::Error_Key)));
          v_address.assignVal(tmp0);
        }
      }
    }
  }
  v_text.assignVal(v_address);
  v_search = s_sabc30dea3;
  v_replace = s_sa109b3f8f;
  v_mail_parms = s_sa00000000;
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_params.begin(null_string, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_value);
      v_var.assignVal(iter3.first());
      {
        {
          Variant switch5;
          switch5 = (v_var);
          bool needsOrder;
          int64 hash;
          hash = switch5.hashForStringSwitch(2946734185616792900LL, 0LL, 0LL, 2946734185616792900LL, 2946734185616792900LL, 16LL, needsOrder);
          switch (((uint64) hash) & 15UL) {
          case 4UL:
            if (equal(switch5, (NAMSTR(s_sse0ae69fc, "cc")))) goto case_5_0;
            if (UNLIKELY(needsOrder)) goto case_5_h_s1;
            goto case_5_7;
          case_5_h_s3:
          case 5UL:
            if (equal(switch5, (NAMSTR(s_ss9525c3b2, "subject")))) goto case_5_3;
            if (UNLIKELY(needsOrder)) goto case_5_h_s4;
            goto case_5_7;
          case_5_h_s1:
          case 8UL:
            if (equal(switch5, (NAMSTR(s_ss89ce7c7e, "bcc")))) goto case_5_1;
            if (UNLIKELY(needsOrder)) goto case_5_h_s2;
          case_5_h_s4:
            if (equal(switch5, (NAMSTR(s_ssf30cf4d9, "newsgroups")))) goto case_5_4;
            if (UNLIKELY(needsOrder)) goto case_5_h_s5;
            goto case_5_7;
          case_5_h_s2:
          case 10UL:
            if (equal(switch5, (NAMSTR(s_ss9a606776, "followupto")))) goto case_5_2;
            if (UNLIKELY(needsOrder)) goto case_5_h_s3;
            goto case_5_7;
          case_5_h_s5:
          case 12UL:
            if (equal(switch5, (NAMSTR(s_ss54173842, "extra")))) goto case_5_5;
            if (UNLIKELY(needsOrder)) goto case_5_h_s6;
            goto case_5_7;
          case_5_h_s6:
          case 13UL:
            if (equal(switch5, (NAMSTR(s_ss4dd3a743, "text")))) goto case_5_6;
            goto case_5_7;
          default: goto case_5_7;
          }
        }
        case_5_0:
          {
          }
        case_5_1:
          {
          }
        case_5_2:
          {
            if (!(empty(v_value))) {
              {
                const String &tmp0((toString(v_var)));
                Variant tmp1((v_search));
                Variant tmp2((v_replace));
                LINE(74,0);
                const String &tmp3((x_rawurlencode(toString(v_value))));
                const String &tmp4((toString(x_str_replace(tmp1, tmp2, VarNR(tmp3)))));
                v_mail_parms.append((VarNR(concat3(tmp0, NAMSTR(s_ss7adc04d2, "="), tmp4))));
              }
            }
            goto break4;
          }
        case_5_3:
          {
          }
        case_5_4:
          {
            {
              const String &tmp0((toString(v_var)));
              LINE(79,0);
              const String &tmp1((x_rawurlencode(toString(v_value))));
              v_mail_parms.append((VarNR(concat3(tmp0, NAMSTR(s_ss7adc04d2, "="), tmp1))));
            }
            goto break4;
          }
        case_5_5:
          {
          }
        case_5_6:
          {
            variables->get(toString(v_var)).assignVal(v_value);
          }
        case_5_7:
          {
          }
        break4:;
      }
    }
  }
  v_mail_parm_vals = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(6);
    v_i = 0LL;
    {
      StringBuffer tmp_sbuf_v_mail_parm_vals(512);
      for (; ; v_i++) {
        {
          LINE(91,0);
          int tmp0((x_count(v_mail_parms)));
          if (!((less(v_i, tmp0)))) break;
        }
        LOOP_COUNTER_CHECK(6);
        {
          tmp_sbuf_v_mail_parm_vals.addWithTaint((equal(0LL, v_i) ? ((NAMSTR(s_ss35bd1fc0, "\?"))) : ((NAMSTR(s_ss8b0567e4, "&")))));
          {
            LINE(93,0);
            const String &tmp0((toString(v_mail_parms.rvalAt(v_i, AccessFlags::Error))));
            tmp_sbuf_v_mail_parm_vals.addWithTaint(tmp0);
          }
        }
      }
      concat_assign(v_mail_parm_vals, tmp_sbuf_v_mail_parm_vals.detachWithTaint());
    }
  }
  concat_assign(v_address, toString(v_mail_parm_vals));
  {
    Variant tmp0(((empty(v_params, NAMSTR(s_ssf5972a27, "encode"), true) ? ((Variant)(NAMSTR(s_ssb60e6020, "none"))) : ((Variant)(LINE(97,(v_params.rvalAt(NAMSTR(s_ssf5972a27, "encode"), AccessFlags::Error_Key))))))));
    v_encode.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(98,0);
      bool tmp1((x_in_array(v_encode, s_svae6cbb5f5)));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        LINE(99,(x_trigger_error(NAMSTR(s_ssc25207d2, "mailto: 'encode' parameter must be none, javascript or hex"), toInt32(512LL) /* E_USER_WARNING */)));
        return null;
      }
    }
  }
  if (equal(v_encode, NAMSTR(s_ssaaafa8d7, "javascript"))) {
    {
      v_string = StringBuffer().addWithTaint("document.write('<a href=\"mailto:", 32).addWithTaint(toString(v_address)).addWithTaint("\" ", 2).addWithTaint(toString(v_extra)).addWithTaint(">", 1).addWithTaint(toString(v_text)).addWithTaint("</a>');", 7).detachWithTaint();
      v_js_encode = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(7);
        v_x = 0LL;
        {
          StringBuffer tmp_sbuf_v_js_encode(512);
          for (; ; v_x++) {
            {
              LINE(107,0);
              int tmp0((x_strlen(toString(v_string))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(7);
            {
              {
                LINE(108,0);
                const String &tmp0((toString(v_string.rvalAt(v_x, AccessFlags::Error))));
                const String &tmp1((x_bin2hex(tmp0)));
                tmp_sbuf_v_js_encode.addWithTaint("%", 1).addWithTaint(tmp1);
              }
            }
          }
          concat_assign(v_js_encode, tmp_sbuf_v_js_encode.detachWithTaint());
        }
      }
      return concat3(NAMSTR(s_ss96d74d29, "<script type=\"text/javascript\">eval(unescape('"), toString(v_js_encode), NAMSTR(s_ss864823b1, "'))</script>"));
    }
  }
  else if (equal(v_encode, NAMSTR(s_ss12d5490c, "javascript_charcode"))) {
    {
      v_string = StringBuffer().addWithTaint("<a href=\"mailto:", 16).addWithTaint(toString(v_address)).addWithTaint("\" ", 2).addWithTaint(toString(v_extra)).addWithTaint(">", 1).addWithTaint(toString(v_text)).addWithTaint("</a>", 4).detachWithTaint();
      {
        LOOP_COUNTER(8);
        {
          v_x = 0LL;
          LINE(115,0);
          int tmp0((x_strlen(toString(v_string))));
          v_y = tmp0;
        }
        for (; (less(v_x, v_y)); v_x++) {
          LOOP_COUNTER_CHECK(8);
          {
            {
              LINE(116,0);
              const String &tmp0((toString(v_string.rvalAt(v_x, AccessFlags::Error))));
              int64 tmp1((x_ord(tmp0)));
              v_ord.append((VarNR(tmp1)));
            }
          }
        }
      }
      v__ret = NAMSTR(s_ss20b4a1dc, "<script type=\"text/javascript\" language=\"javascript\">\n<!--\n{document.write(String.fromCharCode(");
      {
        LINE(122,0);
        const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), v_ord)));
        concat_assign(v__ret, tmp0);
      }
      concat_assign(v__ret, NAMSTR(s_ss793097f7, "))}\n//-->\n</script>\n"));
      return v__ret;
    }
  }
  else if (equal(v_encode, NAMSTR(s_ss4f09e41b, "hex"))) {
    {
      LINE(130,(x_preg_match(NAMSTR(s_ssb5cb4a2a, "!^(.*)(\\\?.*)$!"), toString(v_address), ref(v_match))));
      {
        bool tmp0;
        {
          tmp0 = (!(empty(v_match, 2LL)));
        }
        if (tmp0) {
          {
            LINE(132,(x_trigger_error(NAMSTR(s_ssc09da053, "mailto: hex encoding does not work with extra attributes. Try javascript."), toInt32(512LL) /* E_USER_WARNING */)));
            return null;
          }
        }
      }
      v_address_encode = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(9);
        v_x = 0LL;
        {
          StringBuffer tmp_sbuf_v_address_encode(512);
          for (; ; v_x++) {
            {
              LINE(136,0);
              int tmp0((x_strlen(toString(v_address))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(9);
            {
              {
                bool tmp0;
                {
                  LINE(137,0);
                  const String &tmp1((toString(v_address.rvalAt(v_x, AccessFlags::Error))));
                  tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss3961c5a6, "!\\w!"), tmp1)));
                }
                if (tmp0) {
                  {
                    {
                      LINE(138,0);
                      const String &tmp0((toString(v_address.rvalAt(v_x, AccessFlags::Error))));
                      const String &tmp1((x_bin2hex(tmp0)));
                      tmp_sbuf_v_address_encode.addWithTaint("%", 1).addWithTaint(tmp1);
                    }
                  }
                }
                else {
                  {
                    {
                      LINE(140,0);
                      const String &tmp0((toString(v_address.rvalAt(v_x, AccessFlags::Error))));
                      tmp_sbuf_v_address_encode.addWithTaint(tmp0);
                    }
                  }
                }
              }
            }
          }
          concat_assign(v_address_encode, tmp_sbuf_v_address_encode.detachWithTaint());
        }
      }
      v_text_encode = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(10);
        v_x = 0LL;
        {
          StringBuffer tmp_sbuf_v_text_encode(512);
          for (; ; v_x++) {
            {
              LINE(144,0);
              int tmp0((x_strlen(toString(v_text))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(10);
            {
              {
                LINE(145,0);
                const String &tmp0((toString(v_text.rvalAt(v_x, AccessFlags::Error))));
                const String &tmp1((x_bin2hex(tmp0)));
                tmp_sbuf_v_text_encode.addWithTaint("&#x", 3).addWithTaint(tmp1).addWithTaint(";", 1);
              }
            }
          }
          concat_assign(v_text_encode, tmp_sbuf_v_text_encode.detachWithTaint());
        }
      }
      v_mailto = NAMSTR(s_ss8dd558bd, "&#109;&#97;&#105;&#108;&#116;&#111;&#58;");
      return StringBuffer().addWithTaint("<a href=\"", 9).addWithTaint(toString(v_mailto)).addWithTaint(toString(v_address_encode)).addWithTaint("\" ", 2).addWithTaint(toString(v_extra)).addWithTaint(">", 1).addWithTaint(toString(v_text_encode)).addWithTaint("</a>", 4).detachWithTaint();
    }
  }
  else {
    {
      return StringBuffer().addWithTaint("<a href=\"mailto:", 16).addWithTaint(toString(v_address)).addWithTaint("\" ", 2).addWithTaint(toString(v_extra)).addWithTaint(">", 1).addWithTaint(toString(v_text)).addWithTaint("</a>", 4).detachWithTaint();
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_mailto(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_mailto", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_mailto(arg0, arg1));
  }
}
Variant ifa_smarty_function_mailto(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_mailto", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_mailto(arg0, arg1));
}
CallInfo ci_smarty_function_mailto((void*)&i_smarty_function_mailto, (void*)&ifa_smarty_function_mailto, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_mailto_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.mailto.php, pm_php$Smarty$libs$plugins$function_mailto_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss5a1e71f9, "smarty_function_mailto"));
  g->FVF(smarty_function_mailto) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_math;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.math.php line 23 */
Variant f_smarty_function_math(CVarRef v_params, CVarRef v_template) {
  FUNCTION_INJECTION(smarty_function_math);
  INTERCEPT_INJECTION("smarty_function_math", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_equation;
  Variant v_match;
  Variant v_allowed_funcs;
  Variant v_curr_var;
  Variant v_key;
  Variant v_val;
  Variant v_smarty_math_result;

  {
    bool tmp0;
    {
      tmp0 = (empty(v_params, NAMSTR(s_ssd71edce3, "equation"), true));
    }
    if (tmp0) {
      {
        LINE(27,(x_trigger_error(NAMSTR(s_ssf2480205, "math: missing equation parameter"), toInt32(512LL) /* E_USER_WARNING */)));
        return null;
      }
    }
  }
  {
    LINE(31,0);
    const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ssd71edce3, "equation"), AccessFlags::Error_Key)));
    v_equation.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      LINE(34,0);
      const Variant &tmp1((x_substr_count(toString(v_equation), NAMSTR(s_ss6e782e41, "("))));
      const Variant &tmp2((x_substr_count(toString(v_equation), NAMSTR(s_ss44beffb9, ")"))));
      tmp0 = (!equal(tmp1, tmp2));
    }
    if (tmp0) {
      {
        LINE(35,(x_trigger_error(NAMSTR(s_ssf13076ac, "math: unbalanced parenthesis"), toInt32(512LL) /* E_USER_WARNING */)));
        return null;
      }
    }
  }
  LINE(40,(x_preg_match_all(NAMSTR(s_ssaca0a96d, "!(\?:0x[a-fA-F0-9]+)|([a-zA-Z][a-zA-Z0-9_]*)!"), toString(v_equation), ref(v_match))));
  v_allowed_funcs = s_saaf9a6a72;
  {
    LOOP_COUNTER(1);
    Variant map2 = LINE(44,(v_match.rvalAt(1LL, AccessFlags::Error)));
    for (ArrayIter iter3 = map2.begin(null_string, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_curr_var);
      {
        {
          bool tmp0;
          {
            bool tmp1 = (toBoolean(v_curr_var));
            if (tmp1) {
              Variant tmp2((v_curr_var));
              LINE(45,0);
              const Variant &tmp3((x_array_keys(v_params)));
              bool tmp4((x_in_array(tmp2, tmp3)));
              tmp1 = (!(tmp4));
            }
            bool tmp5 = (tmp1);
            if (tmp5) {
              bool tmp6((x_in_array(v_curr_var, v_allowed_funcs)));
              tmp5 = (!(tmp6));
            }
            tmp0 = (tmp5);
          }
          if (tmp0) {
            {
              LINE(46,(x_trigger_error(concat3(NAMSTR(s_ss21387c84, "math: function call "), toString(v_curr_var), NAMSTR(s_ss1e03a435, " not allowed")), toInt32(512LL) /* E_USER_WARNING */)));
              return null;
            }
          }
        }
      }
    }
  }
  {
    LOOP_COUNTER(4);
    for (ArrayIter iter6 = v_params.begin(null_string, true); !iter6.end(); ++iter6) {
      LOOP_COUNTER_CHECK(4);
      iter6.second(v_val);
      v_key.assignVal(iter6.first());
      {
        if (((!equal(v_key, NAMSTR(s_ssd71edce3, "equation")) && !equal(v_key, NAMSTR(s_ss19281e76, "format"))) && !equal(v_key, NAMSTR(s_ssba4e7712, "assign")))) {
          {
            {
              bool tmp0;
              {
                LINE(54,0);
                int tmp1((x_strlen(toString(v_val))));
                tmp0 = (equal(tmp1, 0LL));
              }
              if (tmp0) {
                {
                  LINE(55,(x_trigger_error(concat3(NAMSTR(s_ssbbe91e17, "math: parameter "), toString(v_key), NAMSTR(s_ss6cc09533, " is empty")), toInt32(512LL) /* E_USER_WARNING */)));
                  return null;
                }
              }
            }
            if (!(x_is_numeric(v_val))) {
              {
                LINE(59,(x_trigger_error(concat3(NAMSTR(s_ssbbe91e17, "math: parameter "), toString(v_key), NAMSTR(s_ssd422e084, ": is not numeric")), toInt32(512LL) /* E_USER_WARNING */)));
                return null;
              }
            }
            {
              LINE(62,0);
              const Variant &tmp0((x_preg_replace(VarNR(concat3(NAMSTR(s_ss3e2991e5, "/\\b"), toString(v_key), NAMSTR(s_ss6ab66e3c, "\\b/"))), VarNR(concat3(NAMSTR(s_ss3ae20424, " $params['"), toString(v_key), NAMSTR(s_ss35a5f92e, "'] "))), v_equation)));
              v_equation.assignVal(tmp0);
            }
          }
        }
      }
    }
  }
  setNull(v_smarty_math_result);
  LINE(66,(f_eval(concat3(NAMSTR(s_ssbcf80917, "$smarty_math_result = "), toString(v_equation), NAMSTR(s_ss0286c0cc, ";")))));
  {
    bool tmp0;
    {
      tmp0 = (empty(v_params, NAMSTR(s_ss19281e76, "format"), true));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            tmp0 = (empty(v_params, NAMSTR(s_ssba4e7712, "assign"), true));
          }
          if (tmp0) {
            {
              return v_smarty_math_result;
            }
          }
          else {
            {
              {
                LINE(72,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v_template;
                mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const Variant &tmp1((v_params.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
                (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, v_smarty_math_result);
              }
            }
          }
        }
      }
    }
    else {
      {
        {
          bool tmp0;
          {
            tmp0 = (empty(v_params, NAMSTR(s_ssba4e7712, "assign"), true));
          }
          if (tmp0) {
            {
              {
                LINE(76,0);
                const String &tmp0((toString(v_params.rvalAt(NAMSTR(s_ss19281e76, "format"), AccessFlags::Error_Key))));
                x_printf(2, tmp0, Array(array_createvi(1, toVPOD(v_smarty_math_result))));
              }
            }
          }
          else {
            {
              {
                LINE(78,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v_template;
                mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const Variant &tmp1((v_params.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
                const String &tmp2((toString(v_params.rvalAt(NAMSTR(s_ss19281e76, "format"), AccessFlags::Error_Key))));
                const Variant &tmp3((x_sprintf(2, tmp2, Array(array_createvi(1, toVPOD(v_smarty_math_result))))));
                (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, tmp3);
              }
            }
          }
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_math(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_math", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_math(arg0, arg1));
  }
}
Variant ifa_smarty_function_math(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_math", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_math(arg0, arg1));
}
CallInfo ci_smarty_function_math((void*)&i_smarty_function_math, (void*)&ifa_smarty_function_math, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_math_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.math.php, pm_php$Smarty$libs$plugins$function_math_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssd13363ec, "smarty_function_math"));
  g->FVF(smarty_function_math) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifier_capitalize;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.capitalize.php line 21 */
Variant f_smarty_modifier_capitalize(CVarRef v_string, CVarRef v_uc_digits //  = false_varNR
) {
  FUNCTION_INJECTION(smarty_modifier_capitalize);
  INTERCEPT_INJECTION("smarty_modifier_capitalize", array_createvi(2, toVPOD(v_string), toVPOD(v_uc_digits)), r);
  Variant v_upper_string;
  Variant v_matches;
  Variant v_match;

  {
    LINE(24,0);
    const String &tmp0((x_ucwords(toString(v_string))));
    v_upper_string = tmp0;
  }
  {
    LINE(26,0);
    const Variant &tmp0((x_preg_replace(NAMVAR(s_svs588c02c4, "!(^|[^\\p{L}'])([\\p{Ll}])!ue"), NAMVAR(s_svsc5d7699e, "'\\1'.ucfirst('\\2')"), v_upper_string)));
    v_upper_string.assignVal(tmp0);
  }
  if (!(toBoolean(v_uc_digits))) {
    {
      if (LINE(29,(toBoolean(x_preg_match_all(NAMSTR(s_ssfa4b360f, "!\\b([\\p{L}]*[\\p{N}]+[\\p{L}]*)\\b!u"), toString(v_string), ref(v_matches), toInt32(256LL) /* PREG_OFFSET_CAPTURE */))))) {
        {
          {
            LOOP_COUNTER(1);
            Variant map2 = LINE(30,(v_matches.rvalAt(1LL, AccessFlags::Error)));
            for (ArrayIter iter3 = map2.begin(null_string, true); !iter3.end(); iter3.next()) {
              LOOP_COUNTER_CHECK(1);
              iter3.second(v_match);
              {
                Variant tmp0((v_upper_string));
                LINE(31,0);
                const Variant &tmp1((v_match.rvalAt(0LL, AccessFlags::Error)));
                const Variant &tmp2((v_match.rvalAt(1LL, AccessFlags::Error)));
                const String &tmp3((toString(v_match.rvalAt(0LL, AccessFlags::Error))));
                int tmp4((x_strlen(tmp3)));
                const Variant &tmp5((x_substr_replace(tmp0, tmp1, tmp2, VarNR(tmp4))));
                v_upper_string.assignVal(tmp5);
              }
            }
          }
        }
      }
    }
  }
  return v_upper_string;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifier_capitalize(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_capitalize", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_capitalize(arg0, arg1));
  }
}
Variant ifa_smarty_modifier_capitalize(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_capitalize", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (false_varNR) : a1);
  return (f_smarty_modifier_capitalize(arg0, arg1));
}
CallInfo ci_smarty_modifier_capitalize((void*)&i_smarty_modifier_capitalize, (void*)&ifa_smarty_modifier_capitalize, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_capitalize_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.capitalize.php, pm_php$Smarty$libs$plugins$modifier_capitalize_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss38be6eca, "smarty_modifier_capitalize"));
  g->FVF(smarty_modifier_capitalize) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifier_date_format;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.date_format.php line 28 */
Variant f_smarty_modifier_date_format(Variant v_string, Variant v_format //  = getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_DATE_FORMAT, NAMSTR(s_ss97b0bc25, "SMARTY_RESOURCE_DATE_FORMAT"))
, Variant v_default_date //  = NAMSTR(s_ss00000000, "")
, Variant v_formatter //  = NAMSTR(s_ss34de8802, "auto")
) {
  FUNCTION_INJECTION(smarty_modifier_date_format);
  INTERCEPT_INJECTION("smarty_modifier_date_format", array_createvi(4, toVPOD(v_string), toVPOD(v_format), toVPOD(v_default_date), toVPOD(v_formatter)), r);
  Variant v_timestamp;
  Variant v__win_from;
  Variant v__win_to;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_string; Variant &v_format; Variant &v_default_date; Variant &v_formatter; Variant &v_timestamp; Variant &v__win_from; Variant &v__win_to;
    VariableTable(Variant &r_string, Variant &r_format, Variant &r_default_date, Variant &r_formatter, Variant &r_timestamp, Variant &r__win_from, Variant &r__win_to) : v_string(r_string), v_format(r_format), v_default_date(r_default_date), v_formatter(r_formatter), v_timestamp(r_timestamp), v__win_from(r__win_from), v__win_to(r__win_to) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 15) {
        case 3:
          HASH_RETURN_NAMSTR(0x444EE8C89FCD7523LL, s_ss2bde7f62, v_default_date,
                             12);
          break;
        case 5:
          HASH_RETURN_NAMSTR(0x2F210D1C22DC3A45LL, s_ss7a188324, v__win_from,
                             9);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x04F76359D187BC06LL, s_ss8104bcca, v_timestamp,
                             9);
          break;
        case 9:
          HASH_RETURN_NAMSTR(0x15B369BE0D0C8149LL, s_ss69ad4382, v_string,
                             6);
          break;
        case 11:
          HASH_RETURN_NAMSTR(0x1B6DDAF6AAF8CA9BLL, s_ss19281e76, v_format,
                             6);
          HASH_RETURN_NAMSTR(0x68F4D7784C6A36CBLL, s_ss8138d16b, v_formatter,
                             9);
          HASH_RETURN_NAMSTR(0x6AE180F1D438E74BLL, s_ss36f0d0fc, v__win_to,
                             7);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_string, v_format, v_default_date, v_formatter, v_timestamp, v__win_from, v__win_to);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(33,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ssb7d88999, "shared.make_timestamp.php")), true, variables, "Smarty/libs/plugins/")));
  if (!equal(v_string, NAMSTR(s_ss00000000, ""))) {
    {
      {
        LINE(35,0);
        const Variant &tmp0((f_smarty_make_timestamp(v_string)));
        v_timestamp.assignVal(tmp0);
      }
    }
  }
  else if (!equal(v_default_date, NAMSTR(s_ss00000000, ""))) {
    {
      {
        LINE(37,0);
        const Variant &tmp0((f_smarty_make_timestamp(v_default_date)));
        v_timestamp.assignVal(tmp0);
      }
    }
  }
  else {
    {
      return null;
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (equal(v_formatter, NAMSTR(s_ss16402958, "strftime")));
      if (!tmp1) {
        bool tmp2 = (equal(v_formatter, NAMSTR(s_ss34de8802, "auto")));
        if (tmp2) {
          LINE(41,0);
          const Variant &tmp3((x_strpos(toString(v_format), NAMVAR(s_svs36c6b0f7, "%"))));
          tmp2 = (!same(tmp3, false));
        }
        tmp1 = (tmp2);
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        if (equal(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")), NAMSTR(s_ssd59e789f, "\\"))) {
          {
            v__win_from = s_sa8738ab9d;
            v__win_to = s_saed2c6ad9;
            {
              bool tmp0;
              {
                LINE(45,0);
                const Variant &tmp1((x_strpos(toString(v_format), NAMVAR(s_svsb7447feb, "%e"))));
                tmp0 = (!same(tmp1, false));
              }
              if (tmp0) {
                {
                  v__win_from.append((NAMVAR(s_svsb7447feb, "%e")));
                  {
                    LINE(47,0);
                    const Variant &tmp0((x_date(NAMSTR(s_ss259d2446, "j"), toInt64(v_timestamp))));
                    const Variant &tmp1((x_sprintf(2, NAMSTR(s_ssdbe919c1, "%' 2d"), Array(array_createvi(1, toVPOD(tmp0))))));
                    v__win_to.append((tmp1));
                  }
                }
              }
            }
            {
              bool tmp0;
              {
                LINE(49,0);
                const Variant &tmp1((x_strpos(toString(v_format), NAMVAR(s_svs6c8d0189, "%l"))));
                tmp0 = (!same(tmp1, false));
              }
              if (tmp0) {
                {
                  v__win_from.append((NAMVAR(s_svs6c8d0189, "%l")));
                  {
                    LINE(51,0);
                    const Variant &tmp0((x_date(NAMSTR(s_ss5480a8f0, "h"), toInt64(v_timestamp))));
                    const Variant &tmp1((x_sprintf(2, NAMSTR(s_ssdbe919c1, "%' 2d"), Array(array_createvi(1, toVPOD(tmp0))))));
                    v__win_to.append((tmp1));
                  }
                }
              }
            }
            {
              LINE(53,0);
              const Variant &tmp0((x_str_replace(v__win_from, v__win_to, v_format)));
              v_format.assignVal(tmp0);
            }
          }
        }
        return LINE(55,(x_strftime(toString(v_format), toInt64(v_timestamp))));
      }
    }
    else {
      {
        return LINE(57,(x_date(toString(v_format), toInt64(v_timestamp))));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifier_date_format(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_date_format", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? (getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_DATE_FORMAT, NAMSTR(s_ss97b0bc25, "SMARTY_RESOURCE_DATE_FORMAT"))) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(NAMSTR(s_ss00000000, "")) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? Variant(NAMSTR(s_ss34de8802, "auto")) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_date_format(arg0, arg1, arg2, arg3));
  }
}
Variant ifa_smarty_modifier_date_format(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_date_format", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  TypedValue def1;
  CVarRef arg1(count <= 1 ? *new (&def1) Variant(getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_DATE_FORMAT, NAMSTR(s_ss97b0bc25, "SMARTY_RESOURCE_DATE_FORMAT"))) : a1);
  CVarRef arg2(count <= 2 ? (NAMVAR(s_svs00000000, "")) : a2);
  CVarRef arg3(count <= 3 ? (NAMVAR(s_svs34de8802, "auto")) : a3);
  return (f_smarty_modifier_date_format(arg0, arg1, arg2, arg3));
}
CallInfo ci_smarty_modifier_date_format((void*)&i_smarty_modifier_date_format, (void*)&ifa_smarty_modifier_date_format, 4, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_date_format_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.date_format.php, pm_php$Smarty$libs$plugins$modifier_date_format_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss0786fa32, "smarty_modifier_date_format"));
  g->FVF(smarty_modifier_date_format) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifier_debug_print_var;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.debug_print_var.php line 23 */
Variant f_smarty_modifier_debug_print_var(CVarRef v_var, Variant v_depth //  = 0LL
, CVarRef v_length //  = NAMVAR(s_sviaf4f10ee, 40LL)
) {
  FUNCTION_INJECTION(smarty_modifier_debug_print_var);
  INTERCEPT_INJECTION("smarty_modifier_debug_print_var", array_createvi(3, toVPOD(v_var), toVPOD(v_depth), toVPOD(v_length)), r);
  Array v__replace;
  Variant v_results;
  Primitive v_curr_key = 0;
  Variant v_curr_val;
  Variant v_object_vars;

  v__replace = s_sac87c6071;
  {
    String switch2;
    switch2 = (LINE(30,(x_gettype(v_var))));
    bool needsOrder;
    int64 hash;
    hash = switch2.hashForStringSwitch(1435156014049455819LL, 0LL, 0LL, 1435156014049455819LL, 1435156014049455819LL, 32LL, needsOrder);
    switch (((uint64) hash) & 31UL) {
    case_2_h_s2:
    case 1UL:
      if (equal(switch2, (NAMSTR(s_ssb36538f4, "boolean")))) goto case_2_2;
      if (UNLIKELY(needsOrder)) goto case_2_h_s3;
    case_2_h_s8:
      if (equal(switch2, (NAMSTR(s_ss8a16be73, "unknown type")))) goto case_2_8;
      goto case_2_9;
    case_2_h_s4:
    case 2UL:
      if (equal(switch2, (NAMSTR(s_ssa514122c, "resource")))) goto case_2_4;
      if (UNLIKELY(needsOrder)) goto case_2_h_s5;
      goto case_2_9;
    case_2_h_s5:
    case 8UL:
      if (equal(switch2, (NAMSTR(s_ssb62ff05d, "integer")))) goto case_2_5;
      if (UNLIKELY(needsOrder)) goto case_2_h_s6;
      goto case_2_9;
    case_2_h_s7:
    case 9UL:
      if (equal(switch2, (NAMSTR(s_ss69ad4382, "string")))) goto case_2_7;
      if (UNLIKELY(needsOrder)) goto case_2_h_s8;
      goto case_2_9;
    case 11UL:
      if (equal(switch2, (NAMSTR(s_ss8c04b960, "array")))) goto case_2_0;
      if (UNLIKELY(needsOrder)) goto case_2_h_s1;
      goto case_2_9;
    case_2_h_s3:
    case 19UL:
      if (equal(switch2, (NAMSTR(s_ss8583e4f3, "NULL")))) goto case_2_3;
      if (UNLIKELY(needsOrder)) goto case_2_h_s4;
      goto case_2_9;
    case_2_h_s1:
    case 26UL:
      if (equal(switch2, (NAMSTR(s_ss222b1861, "object")))) goto case_2_1;
      if (UNLIKELY(needsOrder)) goto case_2_h_s2;
      goto case_2_9;
    case_2_h_s6:
    case 30UL:
      if (equal(switch2, (NAMSTR(s_ss919bffe4, "float")))) goto case_2_6;
      if (UNLIKELY(needsOrder)) goto case_2_h_s7;
      goto case_2_9;
    default: goto case_2_9;
    }
  }
  case_2_0:
    {
      {
        LINE(32,0);
        const String &tmp0((toString(x_count(v_var))));
        v_results = concat3(NAMSTR(s_ss330fefe2, "<b>Array ("), tmp0, NAMSTR(s_ssee0475c2, ")</b>"));
      }
      {
        LOOP_COUNTER(3);
        {
          StringBuffer tmp_sbuf_v_results(512);
          for (ArrayIter iter5 = v_var.begin(null_string, true); !iter5.end(); ++iter5) {
            LOOP_COUNTER_CHECK(3);
            iter5.second(v_curr_val);
            v_curr_key.assignVal(iter5.first());
            {
              {
                LINE(34,0);
                const String &tmp0((x_str_repeat(NAMSTR(s_ss8f6c417f, "&nbsp;"), toInt32((v_depth * 2LL)))));
                LINE(35,0);
                const String &tmp1((toString(x_strtr(toString(v_curr_key), VarNR(v__replace)))));
                Variant tmp2((v_curr_val));
                Primitive tmp3((++v_depth));
                LINE(36,0);
                const String &tmp4((toString(f_smarty_modifier_debug_print_var(tmp2, tmp3, v_length))));
                tmp_sbuf_v_results.addWithTaint("<br>", 4).addWithTaint(tmp0).addWithTaint("<b>", 3).addWithTaint(tmp1).addWithTaint("</b> =&gt; ", 11).addWithTaint(tmp4);
              }
              v_depth--;
            }
          }
          concat_assign(v_results, tmp_sbuf_v_results.detachWithTaint());
        }
      }
      goto break1;
    }
  case_2_1:
    {
      {
        LINE(41,0);
        const Variant &tmp0((x_get_object_vars(v_var)));
        v_object_vars.assignVal(tmp0);
      }
      {
        LINE(42,0);
        const String &tmp0((toString(x_get_class(v_var))));
        const String &tmp1((toString(x_count(v_object_vars))));
        v_results = concat5(NAMSTR(s_ss7aaa8b6f, "<b>"), tmp0, NAMSTR(s_ss5d6e6bd9, " Object ("), tmp1, NAMSTR(s_ssee0475c2, ")</b>"));
      }
      {
        LOOP_COUNTER(6);
        {
          StringBuffer tmp_sbuf_v_results(512);
          for (ArrayIter iter8 = v_object_vars.begin(null_string, true); !iter8.end(); ++iter8) {
            LOOP_COUNTER_CHECK(6);
            iter8.second(v_curr_val);
            v_curr_key.assignVal(iter8.first());
            {
              {
                LINE(44,0);
                const String &tmp0((x_str_repeat(NAMSTR(s_ss8f6c417f, "&nbsp;"), toInt32((v_depth * 2LL)))));
                LINE(45,0);
                const String &tmp1((toString(x_strtr(toString(v_curr_key), VarNR(v__replace)))));
                Variant tmp2((v_curr_val));
                Primitive tmp3((++v_depth));
                LINE(46,0);
                const String &tmp4((toString(f_smarty_modifier_debug_print_var(tmp2, tmp3, v_length))));
                tmp_sbuf_v_results.addWithTaint("<br>", 4).addWithTaint(tmp0).addWithTaint("<b> -&gt;", 9).addWithTaint(tmp1).addWithTaint("</b> = ", 7).addWithTaint(tmp4);
              }
              v_depth--;
            }
          }
          concat_assign(v_results, tmp_sbuf_v_results.detachWithTaint());
        }
      }
      goto break1;
    }
  case_2_2:
    {
    }
  case_2_3:
    {
    }
  case_2_4:
    {
      if (same(true, v_var)) {
        {
          v_results = NAMSTR(s_ss102bfbc4, "true");
        }
      }
      else if (same(false, v_var)) {
        {
          v_results = NAMSTR(s_ss8c98c156, "false");
        }
      }
      else if (x_is_null(v_var)) {
        {
          v_results = NAMSTR(s_ssf927ff2c, "null");
        }
      }
      else {
        {
          {
            LINE(60,0);
            const String &tmp0((x_htmlspecialchars((toString(v_var)))));
            v_results = tmp0;
          }
        }
      }
      v_results = concat3(NAMSTR(s_ss45242442, "<i>"), toString(v_results), NAMSTR(s_ss187bb9eb, "</i>"));
      goto break1;
    }
  case_2_5:
    {
    }
  case_2_6:
    {
      {
        LINE(66,0);
        const String &tmp0((x_htmlspecialchars((toString(v_var)))));
        v_results = tmp0;
      }
      goto break1;
    }
  case_2_7:
    {
      {
        LINE(69,0);
        const Variant &tmp0((x_strtr(toString(v_var), VarNR(v__replace))));
        v_results.assignVal(tmp0);
      }
      {
        bool tmp0;
        {
          LINE(70,0);
          int tmp1((x_strlen(toString(v_var))));
          tmp0 = (more(tmp1, v_length));
        }
        if (tmp0) {
          {
            {
              LINE(71,0);
              const String &tmp0((toString(x_substr(toString(v_var), toInt32(0LL), toInt32((v_length - 3LL))))));
              v_results = concat(tmp0, NAMSTR(s_ss5042ef13, "..."));
            }
          }
        }
      }
      {
        LINE(73,0);
        const String &tmp0((x_htmlspecialchars(concat3(NAMSTR(s_ss7e5fc106, "\""), toString(v_results), NAMSTR(s_ss7e5fc106, "\"")))));
        v_results = tmp0;
      }
      goto break1;
    }
  case_2_8:
    {
    }
  case_2_9:
    {
      {
        LINE(77,0);
        const Variant &tmp0((x_strtr((toString(v_var)), VarNR(v__replace))));
        v_results.assignVal(tmp0);
      }
      {
        bool tmp0;
        {
          LINE(78,0);
          int tmp1((x_strlen(toString(v_results))));
          tmp0 = (more(tmp1, v_length));
        }
        if (tmp0) {
          {
            {
              LINE(79,0);
              const String &tmp0((toString(x_substr(toString(v_results), toInt32(0LL), toInt32((v_length - 3LL))))));
              v_results = concat(tmp0, NAMSTR(s_ss5042ef13, "..."));
            }
          }
        }
      }
      {
        LINE(81,0);
        const String &tmp0((x_htmlspecialchars(toString(v_results))));
        v_results = tmp0;
      }
    }
  break1:;
  return v_results;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifier_debug_print_var(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_debug_print_var", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(0LL) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(40LL) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_debug_print_var(arg0, arg1, arg2));
  }
}
Variant ifa_smarty_modifier_debug_print_var(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_debug_print_var", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (NAMVAR(s_svif01bca90, 0LL)) : a1);
  CVarRef arg2(count <= 2 ? (NAMVAR(s_sviaf4f10ee, 40LL)) : a2);
  return (f_smarty_modifier_debug_print_var(arg0, arg1, arg2));
}
CallInfo ci_smarty_modifier_debug_print_var((void*)&i_smarty_modifier_debug_print_var, (void*)&ifa_smarty_modifier_debug_print_var, 3, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_debug_print_var_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.debug_print_var.php, pm_php$Smarty$libs$plugins$modifier_debug_print_var_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssffc29fa2, "smarty_modifier_debug_print_var"));
  g->FVF(smarty_modifier_debug_print_var) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
