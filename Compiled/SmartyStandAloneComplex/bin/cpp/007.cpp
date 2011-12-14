
#include <php/Smarty/libs/plugins/modifier.escape.h>
#include <php/Smarty/libs/plugins/modifier.escape.fws.h>
#include <php/Smarty/libs/plugins/modifier.regex_replace.h>
#include <php/Smarty/libs/plugins/modifier.regex_replace.fws.h>
#include <php/Smarty/libs/plugins/modifier.replace.h>
#include <php/Smarty/libs/plugins/modifier.replace.fws.h>
#include <php/Smarty/libs/plugins/modifier.spacify.h>
#include <php/Smarty/libs/plugins/modifier.spacify.fws.h>
#include <php/Smarty/libs/plugins/modifier.truncate.h>
#include <php/Smarty/libs/plugins/modifier.truncate.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.cat.h>
#include <php/Smarty/libs/plugins/modifiercompiler.cat.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_characters.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_characters.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_paragraphs.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_paragraphs.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_sentences.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_sentences.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_words.h>
#include <php/Smarty/libs/plugins/modifiercompiler.count_words.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.default.h>
#include <php/Smarty/libs/plugins/modifiercompiler.default.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.indent.h>
#include <php/Smarty/libs/plugins/modifiercompiler.indent.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.lower.h>
#include <php/Smarty/libs/plugins/modifiercompiler.lower.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.noprint.h>
#include <php/Smarty/libs/plugins/modifiercompiler.noprint.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/plugins/shared.mb_str_replace.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifier_escape___1;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.escape.php line 23 */
Variant f_smarty_modifier_escape___1(Variant v_string, Variant v_esc_type //  = NAMSTR(s_ss2230855d, "html")
, Variant v_char_set //  = getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))
) {
  FUNCTION_INJECTION(smarty_modifier_escape___1);
  INTERCEPT_INJECTION("smarty_modifier_escape", array_createvi(3, toVPOD(v_string), toVPOD(v_esc_type), toVPOD(v_char_set)), r);
  Variant v_return;
  Variant v_x;
  Variant v__res;
  Variant v__i;
  Variant v__len;
  Variant v__ord;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_string; Variant &v_esc_type; Variant &v_char_set; Variant &v_return; Variant &v_x; Variant &v__res; Variant &v__i; Variant &v__len; Variant &v__ord;
    VariableTable(Variant &r_string, Variant &r_esc_type, Variant &r_char_set, Variant &r_return, Variant &r_x, Variant &r__res, Variant &r__i, Variant &r__len, Variant &r__ord) : v_string(r_string), v_esc_type(r_esc_type), v_char_set(r_char_set), v_return(r_return), v_x(r_x), v__res(r__res), v__i(r__i), v__len(r__len), v__ord(r__ord) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 31) {
        case 1:
          HASH_RETURN_NAMSTR(0x00F31DE90234EA81LL, s_sse59fa416, v_x,
                             1);
          break;
        case 3:
          HASH_RETURN_NAMSTR(0x122E6CD15BE94423LL, s_ssf53166c8, v__res,
                             4);
          break;
        case 4:
          HASH_RETURN_NAMSTR(0x6790720E96A86724LL, s_ss30df4872, v_return,
                             6);
          break;
        case 9:
          HASH_RETURN_NAMSTR(0x15B369BE0D0C8149LL, s_ss69ad4382, v_string,
                             6);
          HASH_RETURN_NAMSTR(0x3702BA7AD72EF089LL, s_ssbecc1c4f, v__len,
                             4);
          HASH_RETURN_NAMSTR(0x3EFEA9D7BFCF8029LL, s_ssa9af3477, v__ord,
                             4);
          break;
        case 10:
          HASH_RETURN_NAMSTR(0x34FDCD19341494EALL, s_ss4a18b694, v__i,
                             2);
          break;
        case 21:
          HASH_RETURN_NAMSTR(0x7082996BAF992C75LL, s_ss716285ab, v_esc_type,
                             8);
          HASH_RETURN_NAMSTR(0x0F6114F45D84B235LL, s_ssc26c4893, v_char_set,
                             8);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_string, v_esc_type, v_char_set, v_return, v_x, v__res, v__i, v__len, v__ord);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  {
    Variant switch2;
    switch2 = (v_esc_type);
    bool needsOrder;
    int64 hash;
    hash = switch2.hashForStringSwitch(647616357429688497LL, 0LL, 0LL, 647616357429688497LL, 647616357429688497LL, 32LL, needsOrder);
    switch (((uint64) hash) & 31UL) {
    case_2_h_s3:
    case 1UL:
      if (equal(switch2, (NAMSTR(s_ss7107e454, "urlpathinfo")))) goto case_2_3;
      if (UNLIKELY(needsOrder)) goto case_2_h_s4;
      goto case_2_11;
    case_2_h_s10:
    case 4UL:
      if (equal(switch2, (NAMSTR(s_sscf4ee9ad, "nonstd")))) goto case_2_10;
      goto case_2_11;
    case_2_h_s4:
    case 12UL:
      if (equal(switch2, (NAMSTR(s_ss926f59ec, "quotes")))) goto case_2_4;
      if (UNLIKELY(needsOrder)) goto case_2_h_s5;
      goto case_2_11;
    case_2_h_s8:
    case 15UL:
      if (equal(switch2, (NAMSTR(s_ssaaafa8d7, "javascript")))) goto case_2_8;
      if (UNLIKELY(needsOrder)) goto case_2_h_s9;
      goto case_2_11;
    case_2_h_s9:
    case 16UL:
      if (equal(switch2, (NAMSTR(s_ss05542de9, "mail")))) goto case_2_9;
      if (UNLIKELY(needsOrder)) goto case_2_h_s10;
      goto case_2_11;
    case 17UL:
      if (equal(switch2, (NAMSTR(s_ss2230855d, "html")))) goto case_2_0;
      if (UNLIKELY(needsOrder)) goto case_2_h_s1;
    case_2_h_s6:
      if (equal(switch2, (NAMSTR(s_ssbe4e8d3d, "hexentity")))) goto case_2_6;
      if (UNLIKELY(needsOrder)) goto case_2_h_s7;
      goto case_2_11;
    case_2_h_s7:
    case 30UL:
      if (equal(switch2, (NAMSTR(s_ssd79b9954, "decentity")))) goto case_2_7;
      if (UNLIKELY(needsOrder)) goto case_2_h_s8;
      goto case_2_11;
    case_2_h_s1:
    case 31UL:
      if (equal(switch2, (NAMSTR(s_ss7b618cf9, "htmlall")))) goto case_2_1;
      if (equal(switch2, (NAMSTR(s_ssc9a88c75, "url")))) goto case_2_2;
      if (UNLIKELY(needsOrder)) goto case_2_h_s3;
    case_2_h_s5:
      if (equal(switch2, (NAMSTR(s_ss4f09e41b, "hex")))) goto case_2_5;
      if (UNLIKELY(needsOrder)) goto case_2_h_s6;
      goto case_2_11;
    default: goto case_2_11;
    }
  }
  case_2_0:
    {
      return LINE(27,(x_htmlspecialchars(toString(v_string), toInt32(3LL) /* ENT_QUOTES */, toString(v_char_set))));
    }
  case_2_1:
    {
      return LINE(30,(x_htmlentities(toString(v_string), toInt32(3LL) /* ENT_QUOTES */, toString(v_char_set))));
    }
  case_2_2:
    {
      return LINE(33,(x_rawurlencode(toString(v_string))));
    }
  case_2_3:
    {
      {
        LINE(36,0);
        const String &tmp0((x_rawurlencode(toString(v_string))));
        return x_str_replace(NAMVAR(s_svse5f3372b, "%2F"), NAMVAR(s_svsb9e13cd6, "/"), VarNR(tmp0));
      }
    }
  case_2_4:
    {
      return LINE(40,(x_preg_replace(NAMVAR(s_svsd5d10bcb, "%(\?<!\\\\)'%"), NAMVAR(s_svs0e28ee88, "\\'"), v_string)));
    }
  case_2_5:
    {
      v_return = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(3);
        v_x = 0LL;
        {
          StringBuffer tmp_sbuf_v_return(512);
          for (; ; v_x++) {
            {
              LINE(45,0);
              int tmp0((x_strlen(toString(v_string))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(3);
            {
              {
                LINE(46,0);
                const String &tmp0((toString(v_string.rvalAt(v_x, AccessFlags::Error))));
                const String &tmp1((x_bin2hex(tmp0)));
                tmp_sbuf_v_return.addWithTaint("%", 1).addWithTaint(tmp1);
              }
            }
          }
          concat_assign(v_return, tmp_sbuf_v_return.detachWithTaint());
        }
      }
      return v_return;
    }
  case_2_6:
    {
      v_return = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(4);
        v_x = 0LL;
        {
          StringBuffer tmp_sbuf_v_return(512);
          for (; ; v_x++) {
            {
              LINE(52,0);
              int tmp0((x_strlen(toString(v_string))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(4);
            {
              {
                LINE(53,0);
                const String &tmp0((toString(v_string.rvalAt(v_x, AccessFlags::Error))));
                const String &tmp1((x_bin2hex(tmp0)));
                tmp_sbuf_v_return.addWithTaint("&#x", 3).addWithTaint(tmp1).addWithTaint(";", 1);
              }
            }
          }
          concat_assign(v_return, tmp_sbuf_v_return.detachWithTaint());
        }
      }
      return v_return;
    }
  case_2_7:
    {
      v_return = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(5);
        v_x = 0LL;
        {
          StringBuffer tmp_sbuf_v_return(512);
          for (; ; v_x++) {
            {
              LINE(59,0);
              int tmp0((x_strlen(toString(v_string))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(5);
            {
              {
                LINE(60,0);
                const String &tmp0((toString(v_string.rvalAt(v_x, AccessFlags::Error))));
                const String &tmp1((toString(x_ord(tmp0))));
                tmp_sbuf_v_return.addWithTaint("&#", 2).addWithTaint(tmp1).addWithTaint(";", 1);
              }
            }
          }
          concat_assign(v_return, tmp_sbuf_v_return.detachWithTaint());
        }
      }
      return v_return;
    }
  case_2_8:
    {
      return LINE(66,(x_strtr(toString(v_string), s_sva5ae1f8d9)));
    }
  case_2_9:
    {
      LINE(69,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss113fe2e7, "shared.mb_str_replace.php")), true, variables, "Smarty/libs/plugins/")));
      return LINE(70,(f_smarty_mb_str_replace(s_sa37001a4c, s_sa3c4a36a1, v_string)));
    }
  case_2_10:
    {
      v__res = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(6);
        {
          v__i = 0LL;
          LINE(75,0);
          int tmp0((x_strlen(toString(v_string))));
          v__len = tmp0;
        }
        {
          StringBuffer tmp_sbuf_v__res(512);
          for (; (less(v__i, v__len)); v__i++) {
            LOOP_COUNTER_CHECK(6);
            {
              {
                LINE(76,0);
                const String &tmp0((toString(x_substr(toString(v_string), toInt32(v__i), toInt32(1LL)))));
                int64 tmp1((x_ord(tmp0)));
                v__ord = tmp1;
              }
              if (not_less(v__ord, 126LL)) {
                {
                  tmp_sbuf_v__res.addWithTaint("&#", 2).addWithTaint(toString(v__ord)).addWithTaint(";", 1);
                }
              }
              else {
                {
                  {
                    LINE(81,0);
                    const String &tmp0((toString(x_substr(toString(v_string), toInt32(v__i), toInt32(1LL)))));
                    tmp_sbuf_v__res.addWithTaint(tmp0);
                  }
                }
              }
            }
          }
          concat_assign(v__res, tmp_sbuf_v__res.detachWithTaint());
        }
      }
      return v__res;
    }
  case_2_11:
    {
      return v_string;
    }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifier_escape___1(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_escape", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(NAMSTR(s_ss2230855d, "html")) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? (getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_escape___1(arg0, arg1, arg2));
  }
}
Variant ifa_smarty_modifier_escape___1(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_escape", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (NAMVAR(s_svs2230855d, "html")) : a1);
  TypedValue def2;
  CVarRef arg2(count <= 2 ? *new (&def2) Variant(getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))) : a2);
  return (f_smarty_modifier_escape___1(arg0, arg1, arg2));
}
CallInfo ci_smarty_modifier_escape___1((void*)&i_smarty_modifier_escape___1, (void*)&ifa_smarty_modifier_escape___1, 3, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_escape_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.escape.php, pm_php$Smarty$libs$plugins$modifier_escape_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->GCI(smarty_modifier_escape) = &ci_smarty_modifier_escape___1;
  g->declareFunctionLit(NAMSTR(s_ss8aa02790, "smarty_modifier_escape"));
  g->FVF(smarty_modifier_escape) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci__smarty_regex_replace_check;
extern CallInfo ci_smarty_modifier_regex_replace;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.regex_replace.php line 35 */
Variant f__smarty_regex_replace_check(Variant v_search) {
  FUNCTION_INJECTION(_smarty_regex_replace_check);
  INTERCEPT_INJECTION("_smarty_regex_replace_check", array_createvi(1, toVPOD(v_search)), r);
  Variant v_pos;
  Variant v_match;

  {
    bool tmp0;
    {
      LINE(37,0);
      const Variant &tmp1((x_strpos(toString(v_search), NAMVAR(s_svs00000000_1, "\000"))));
      tmp0 = (!same(v_pos.assignVal(tmp1), false));
    }
    if (tmp0) {
      {
        LINE(38,0);
        const Variant &tmp0((x_substr(toString(v_search), toInt32(0LL), toInt32(v_pos))));
        v_search.assignVal(tmp0);
      }
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(39,(toBoolean(x_preg_match(NAMSTR(s_ss2a1ca850, "!([a-zA-Z\\s]+)$!s"), toString(v_search), ref(v_match))))));
      if (tmp1) {
        const String &tmp2((toString(v_match.rvalAt(1LL, AccessFlags::Error))));
        const Variant &tmp3((x_strpos(tmp2, NAMVAR(s_svs6b7ea7eb, "e"))));
        tmp1 = (!same(tmp3, false));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          const String &tmp0((toString(v_search)));
          LINE(41,0);
          const String &tmp1((toString(v_match.rvalAt(1LL, AccessFlags::Error))));
          int tmp2((x_strlen(tmp1)));
          const String &tmp3((toString(x_substr(tmp0, toInt32(0LL), toInt32(negate(tmp2))))));
          const Variant &tmp4((v_match.rvalAt(1LL, AccessFlags::Error)));
          const String &tmp5((toString(x_preg_replace(NAMVAR(s_svsbc0a0cc5, "![e\\s]+!"), NAMVAR(s_svs00000000, ""), tmp4))));
          v_search = concat(tmp3, tmp5);
        }
      }
    }
  }
  return v_search;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/plugins/modifier.regex_replace.php line 23 */
Variant f_smarty_modifier_regex_replace(CVarRef v_string, Variant v_search, CVarRef v_replace) {
  FUNCTION_INJECTION_NOMEM(smarty_modifier_regex_replace);
  INTERCEPT_INJECTION("smarty_modifier_regex_replace", array_createvi(3, toVPOD(v_string), toVPOD(v_search), toVPOD(v_replace)), r);
  Primitive v_idx = 0;
  Variant v_s;

  if (x_is_array(v_search)) {
    {
      {
        LOOP_COUNTER(1);
        for (ArrayIter iter3 = v_search.begin(null_string, true); !iter3.end(); ++iter3) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_s);
          v_idx.assignVal(iter3.first());
          {
            LINE(27,0);
            const Variant &tmp0((f__smarty_regex_replace_check(v_s)));
            v_search.set(v_idx, (tmp0));
          }
        }
      }
    }
  }
  else {
    {
      {
        LINE(29,0);
        const Variant &tmp0((f__smarty_regex_replace_check(v_search)));
        v_search.assignVal(tmp0);
      }
    }
  }
  return LINE(32,(x_preg_replace(v_search, v_replace, v_string)));
}
namespace hphp_impl_splitter {}
Variant i__smarty_regex_replace_check(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("_smarty_regex_replace_check", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (f__smarty_regex_replace_check(arg0));
  }
}
Variant ifa__smarty_regex_replace_check(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("_smarty_regex_replace_check", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (f__smarty_regex_replace_check(arg0));
}
Variant i_smarty_modifier_regex_replace(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_modifier_regex_replace", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_regex_replace(arg0, arg1, arg2));
  }
}
Variant ifa_smarty_modifier_regex_replace(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_modifier_regex_replace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (f_smarty_modifier_regex_replace(arg0, arg1, arg2));
}
CallInfo ci__smarty_regex_replace_check((void*)&i__smarty_regex_replace_check, (void*)&ifa__smarty_regex_replace_check, 1, 0, 0x0000000000000000LL);
CallInfo ci_smarty_modifier_regex_replace((void*)&i_smarty_modifier_regex_replace, (void*)&ifa_smarty_modifier_regex_replace, 3, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_regex_replace_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.regex_replace.php, pm_php$Smarty$libs$plugins$modifier_regex_replace_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss53e2335e, "smarty_modifier_regex_replace"));
  g->FVF(smarty_modifier_regex_replace) = true;
  g->declareFunctionLit(NAMSTR(s_ss6fb693a7, "_smarty_regex_replace_check"));
  g->FVF(_smarty_regex_replace_check) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifier_replace;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.replace.php line 23 */
Variant f_smarty_modifier_replace(Variant v_string, Variant v_search, Variant v_replace) {
  FUNCTION_INJECTION(smarty_modifier_replace);
  INTERCEPT_INJECTION("smarty_modifier_replace", array_createvi(3, toVPOD(v_string), toVPOD(v_search), toVPOD(v_replace)), r);

  class VariableTable : public LVariableTable {
  public:
    Variant &v_string; Variant &v_search; Variant &v_replace;
    VariableTable(Variant &r_string, Variant &r_search, Variant &r_replace) : v_string(r_string), v_search(r_search), v_replace(r_replace) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 7) {
        case 1:
          HASH_RETURN_NAMSTR(0x15B369BE0D0C8149LL, s_ss69ad4382, v_string,
                             6);
          break;
        case 4:
          HASH_RETURN_NAMSTR(0x28FF22828CC2C4ECLL, s_ssd9cf6243, v_search,
                             6);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x42FAC655280A6146LL, s_sscfd63bc6, v_replace,
                             7);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_string, v_search, v_replace);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(26,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss113fe2e7, "shared.mb_str_replace.php")), true, variables, "Smarty/libs/plugins/")));
  return LINE(27,(f_smarty_mb_str_replace(v_search, v_replace, v_string)));
  return LINE(29,(x_str_replace(v_search, v_replace, v_string)));
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifier_replace(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_modifier_replace", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_replace(arg0, arg1, arg2));
  }
}
Variant ifa_smarty_modifier_replace(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_modifier_replace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (f_smarty_modifier_replace(arg0, arg1, arg2));
}
CallInfo ci_smarty_modifier_replace((void*)&i_smarty_modifier_replace, (void*)&ifa_smarty_modifier_replace, 3, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_replace_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.replace.php, pm_php$Smarty$libs$plugins$modifier_replace_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss9be9410a, "smarty_modifier_replace"));
  g->FVF(smarty_modifier_replace) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifier_spacify;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.spacify.php line 21 */
Variant f_smarty_modifier_spacify(Variant v_string, CVarRef v_spacify_char //  = NAMVAR(s_svsfcae4ca0, " ")
) {
  FUNCTION_INJECTION(smarty_modifier_spacify);
  INTERCEPT_INJECTION("smarty_modifier_spacify", array_createvi(2, toVPOD(v_string), toVPOD(v_spacify_char)), r);
  Variant v_strlen;
  Array v_array;

  {
    bool tmp0;
    {
      LINE(24,0);
      const Variant &tmp1((x_mb_detect_encoding(toString(v_string), NAMVAR(s_svs0f805dbd, "UTF-8, ISO-8859-1"))));
      tmp0 = (same(tmp1, NAMSTR(s_ss7a2a6129, "UTF-8")));
    }
    if (tmp0) {
      {
        {
          LINE(25,0);
          const Variant &tmp0((x_mb_strlen(toString(v_string))));
          v_strlen.assignVal(tmp0);
        }
        LOOP_COUNTER(1);
        {
          while (toBoolean(v_strlen)) {
            LOOP_COUNTER_CHECK(1);
            {
              {
                LINE(27,0);
                const Variant &tmp0((x_mb_substr(toString(v_string), toInt32(0LL), toInt32(1LL), NAMSTR(s_ss7a2a6129, "UTF-8"))));
                v_array.append((tmp0));
              }
              {
                LINE(28,0);
                const Variant &tmp0((x_mb_substr(toString(v_string), toInt32(1LL), toInt32(v_strlen), NAMSTR(s_ss7a2a6129, "UTF-8"))));
                v_string.assignVal(tmp0);
              }
              {
                LINE(29,0);
                const Variant &tmp0((x_mb_strlen(toString(v_string))));
                v_strlen.assignVal(tmp0);
              }
            }
          }
        }
        return LINE(31,(x_implode(v_spacify_char, VarNR(v_array))));
      }
    }
    else {
      {
        {
          Variant tmp0((v_spacify_char));
          LINE(33,0);
          const Variant &tmp1((x_preg_split(NAMVAR(s_svsefd9cb44, "//"), v_string, toInt32(-1LL))));
          return x_implode(tmp0, tmp1);
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifier_spacify(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_spacify", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(NAMSTR(s_ssfcae4ca0, " ")) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_spacify(arg0, arg1));
  }
}
Variant ifa_smarty_modifier_spacify(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_spacify", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (NAMVAR(s_svsfcae4ca0, " ")) : a1);
  return (f_smarty_modifier_spacify(arg0, arg1));
}
CallInfo ci_smarty_modifier_spacify((void*)&i_smarty_modifier_spacify, (void*)&ifa_smarty_modifier_spacify, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_spacify_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.spacify.php, pm_php$Smarty$libs$plugins$modifier_spacify_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss2956f9b9, "smarty_modifier_spacify"));
  g->FVF(smarty_modifier_spacify) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifier_truncate;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifier.truncate.php line 27 */
Variant f_smarty_modifier_truncate(Variant v_string, Variant v_length //  = 80LL
, CVarRef v_etc //  = NAMVAR(s_svs5042ef13, "...")
, CVarRef v_break_words //  = false_varNR
, CVarRef v_middle //  = false_varNR
) {
  FUNCTION_INJECTION(smarty_modifier_truncate);
  INTERCEPT_INJECTION("smarty_modifier_truncate", array_createvi(5, toVPOD(v_string), toVPOD(v_length), toVPOD(v_etc), toVPOD(v_break_words), toVPOD(v_middle)), r);
  if (equal(v_length, 0LL)) {
    return NAMSTR(s_ss00000000, "");
  }
  if (LINE(33,(x_is_callable(NAMSTR(s_ss13b1fcd9, "mb_strlen"))))) {
    {
      {
        bool tmp0;
        {
          LINE(34,0);
          const Variant &tmp1((x_mb_detect_encoding(toString(v_string), NAMVAR(s_svs0f805dbd, "UTF-8, ISO-8859-1"))));
          tmp0 = (same(tmp1, NAMSTR(s_ss7a2a6129, "UTF-8")));
        }
        if (tmp0) {
          {
            {
              bool tmp0;
              {
                LINE(36,0);
                const Variant &tmp1((x_mb_strlen(toString(v_string))));
                tmp0 = (more(tmp1, v_length));
              }
              if (tmp0) {
                {
                  {
                    Variant tmp0((v_length));
                    LINE(37,0);
                    const Variant &tmp1((x_mb_strlen(toString(v_etc))));
                    const Variant &tmp2((x_min(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
                    v_length -= tmp2;
                  }
                  if ((!(toBoolean(v_break_words)) && !(toBoolean(v_middle)))) {
                    {
                      {
                        LINE(39,0);
                        const Variant &tmp0((x_mb_substr(toString(v_string), toInt32(0LL), toInt32((v_length + 1LL)))));
                        const Variant &tmp1((x_preg_replace(NAMVAR(s_svsd2677537, "/\\s+\?(\\S+)\?$/u"), NAMVAR(s_svs00000000, ""), tmp0)));
                        v_string.assignVal(tmp1);
                      }
                    }
                  }
                  if (!(toBoolean(v_middle))) {
                    {
                      {
                        LINE(42,0);
                        const String &tmp0((toString(x_mb_substr(toString(v_string), toInt32(0LL), toInt32(v_length)))));
                        return concat(tmp0, toString(v_etc));
                      }
                    }
                  }
                  else {
                    {
                      {
                        LINE(44,0);
                        const String &tmp0((toString(x_mb_substr(toString(v_string), toInt32(0LL), toInt32(divide(v_length, 2LL))))));
                        const String &tmp1((toString(v_etc)));
                        const String &tmp2((toString(x_mb_substr(toString(v_string), toInt32(divide(negate(v_length), 2LL))))));
                        return concat3(tmp0, tmp1, tmp2);
                      }
                    }
                  }
                }
              }
              else {
                {
                  return v_string;
                }
              }
            }
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(52,0);
      int tmp1((x_strlen(toString(v_string))));
      tmp0 = (more(tmp1, v_length));
    }
    if (tmp0) {
      {
        {
          Variant tmp0((v_length));
          LINE(53,0);
          int tmp1((x_strlen(toString(v_etc))));
          const Variant &tmp2((x_min(2, tmp0, Array(array_createvi(1, toVPOD(VarNR(tmp1)))))));
          v_length -= tmp2;
        }
        if ((!(toBoolean(v_break_words)) && !(toBoolean(v_middle)))) {
          {
            {
              LINE(55,0);
              const Variant &tmp0((x_substr(toString(v_string), toInt32(0LL), toInt32((v_length + 1LL)))));
              const Variant &tmp1((x_preg_replace(NAMVAR(s_svs30b03ac0, "/\\s+\?(\\S+)\?$/"), NAMVAR(s_svs00000000, ""), tmp0)));
              v_string.assignVal(tmp1);
            }
          }
        }
        if (!(toBoolean(v_middle))) {
          {
            {
              LINE(58,0);
              const String &tmp0((toString(x_substr(toString(v_string), toInt32(0LL), toInt32(v_length)))));
              return concat(tmp0, toString(v_etc));
            }
          }
        }
        else {
          {
            {
              LINE(60,0);
              const String &tmp0((toString(x_substr(toString(v_string), toInt32(0LL), toInt32(divide(v_length, 2LL))))));
              const String &tmp1((toString(v_etc)));
              const String &tmp2((toString(x_substr(toString(v_string), toInt32(divide(negate(v_length), 2LL))))));
              return concat3(tmp0, tmp1, tmp2);
            }
          }
        }
      }
    }
    else {
      {
        return v_string;
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifier_truncate(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_truncate", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(80LL) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(NAMSTR(s_ss5042ef13, "...")) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? Variant(false) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_truncate(arg0, arg1, arg2, arg3, arg4));
  }
}
Variant ifa_smarty_modifier_truncate(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_truncate", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (NAMVAR(s_svi2161de23, 80LL)) : a1);
  CVarRef arg2(count <= 2 ? (NAMVAR(s_svs5042ef13, "...")) : a2);
  CVarRef arg3(count <= 3 ? (false_varNR) : a3);
  CVarRef arg4(count <= 4 ? (false_varNR) : a4);
  return (f_smarty_modifier_truncate(arg0, arg1, arg2, arg3, arg4));
}
CallInfo ci_smarty_modifier_truncate((void*)&i_smarty_modifier_truncate, (void*)&ifa_smarty_modifier_truncate, 5, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifier_truncate_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifier.truncate.php, pm_php$Smarty$libs$plugins$modifier_truncate_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss88564a03, "smarty_modifier_truncate"));
  g->FVF(smarty_modifier_truncate) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_cat;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.cat.php line 24 */
String f_smarty_modifiercompiler_cat(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_cat);
  INTERCEPT_INJECTION("smarty_modifiercompiler_cat", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    LINE(26,0);
    const String &tmp0((x_implode(NAMVAR(s_svs0fce1057, ").("), v_params)));
    return concat3(NAMSTR(s_ss6e782e41, "("), tmp0, NAMSTR(s_ss44beffb9, ")"));
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_cat(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_cat", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_cat(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_cat(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_cat", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_cat(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_cat((void*)&i_smarty_modifiercompiler_cat, (void*)&ifa_smarty_modifiercompiler_cat, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_cat_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.cat.php, pm_php$Smarty$libs$plugins$modifiercompiler_cat_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss8f96d0a2, "smarty_modifiercompiler_cat"));
  g->FVF(smarty_modifiercompiler_cat) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifiercompiler_count_characters;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.count_characters.php line 21 */
String f_smarty_modifiercompiler_count_characters(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_count_characters);
  INTERCEPT_INJECTION("smarty_modifiercompiler_count_characters", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    bool tmp0;
    {
      bool tmp1 = (isset(v_params, 1LL));
      if (tmp1) {
        LINE(26,0);
        const Variant &tmp2((v_params.rvalAt(1LL, AccessFlags::Error)));
        tmp1 = (equal(tmp2, NAMSTR(s_ss102bfbc4, "true")));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          StringBuffer tmp0_buf;
          tmp0_buf.appendWithTaint("((mb_detect_encoding(", 21);
          tmp0_buf.appendWithTaint(LINE(27,(toString(v_params.rvalAt(0LL, AccessFlags::Error)))));
          tmp0_buf.appendWithTaint(", 'UTF-8, ISO-8859-1') === 'UTF-8') \? mb_strlen(", 48);
          tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
          tmp0_buf.appendWithTaint(", SMARTY_RESOURCE_CHAR_SET) : strlen(", 37);
          tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
          tmp0_buf.appendWithTaint("))", 2);
          CStrRef tmp0(tmp0_buf.detachWithTaint());
          return tmp0;
        }
      }
    }
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("((mb_detect_encoding(", 21);
    tmp0_buf.appendWithTaint(LINE(29,(toString(v_params.rvalAt(0LL, AccessFlags::Error)))));
    tmp0_buf.appendWithTaint(", 'UTF-8, ISO-8859-1') === 'UTF-8') \? preg_match_all('#[^\\s\\pZ]#u', ", 68);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(", $tmp) : preg_match_all('/[^\\s]/',", 35);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(", $tmp))", 8);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_count_characters(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_characters", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_count_characters(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_count_characters(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_characters", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_count_characters(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_count_characters((void*)&i_smarty_modifiercompiler_count_characters, (void*)&ifa_smarty_modifiercompiler_count_characters, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.count_characters.php, pm_php$Smarty$libs$plugins$modifiercompiler_count_characters_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss01e617bb, "smarty_modifiercompiler_count_characters"));
  g->FVF(smarty_modifiercompiler_count_characters) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifiercompiler_count_paragraphs;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.count_paragraphs.php line 21 */
String f_smarty_modifiercompiler_count_paragraphs(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_count_paragraphs);
  INTERCEPT_INJECTION("smarty_modifiercompiler_count_paragraphs", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    LINE(24,0);
    const String &tmp0((toString(v_params.rvalAt(0LL, AccessFlags::Error))));
    return concat3(NAMSTR(s_ss7aea4946, "(preg_match_all('#[\\r\\n]+#', "), tmp0, NAMSTR(s_ss0aa64cf9, ", $tmp)+1)"));
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_count_paragraphs(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_paragraphs", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_count_paragraphs(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_count_paragraphs(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_paragraphs", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_count_paragraphs(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_count_paragraphs((void*)&i_smarty_modifiercompiler_count_paragraphs, (void*)&ifa_smarty_modifiercompiler_count_paragraphs, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.count_paragraphs.php, pm_php$Smarty$libs$plugins$modifiercompiler_count_paragraphs_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss8ea5b02c, "smarty_modifiercompiler_count_paragraphs"));
  g->FVF(smarty_modifiercompiler_count_paragraphs) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifiercompiler_count_sentences;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.count_sentences.php line 21 */
String f_smarty_modifiercompiler_count_sentences(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_count_sentences);
  INTERCEPT_INJECTION("smarty_modifiercompiler_count_sentences", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    LINE(24,0);
    const String &tmp0((toString(v_params.rvalAt(0LL, AccessFlags::Error))));
    return concat3(NAMSTR(s_ssae4b9b00, "preg_match_all('/[^\\s]\\.(\?!\\w)/', "), tmp0, NAMSTR(s_ss022b03e6, ", $tmp)"));
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_count_sentences(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_sentences", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_count_sentences(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_count_sentences(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_sentences", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_count_sentences(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_count_sentences((void*)&i_smarty_modifiercompiler_count_sentences, (void*)&ifa_smarty_modifiercompiler_count_sentences, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.count_sentences.php, pm_php$Smarty$libs$plugins$modifiercompiler_count_sentences_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss4da8aa4d, "smarty_modifiercompiler_count_sentences"));
  g->FVF(smarty_modifiercompiler_count_sentences) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_count_words;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.count_words.php line 21 */
String f_smarty_modifiercompiler_count_words(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_count_words);
  INTERCEPT_INJECTION("smarty_modifiercompiler_count_words", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("((mb_detect_encoding(", 21);
    tmp0_buf.appendWithTaint(LINE(25,(toString(v_params.rvalAt(0LL, AccessFlags::Error)))));
    tmp0_buf.appendWithTaint(", 'UTF-8, ISO-8859-1') === 'UTF-8') \? preg_match_all('#[\\w\\pL]+#u', ", 68);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(", $tmp) : preg_match_all('#\\w+#',", 33);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(", $tmp))", 8);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_count_words(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_words", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_count_words(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_count_words(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_count_words", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_count_words(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_count_words((void*)&i_smarty_modifiercompiler_count_words, (void*)&ifa_smarty_modifiercompiler_count_words, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.count_words.php, pm_php$Smarty$libs$plugins$modifiercompiler_count_words_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_sscea460ae, "smarty_modifiercompiler_count_words"));
  g->FVF(smarty_modifiercompiler_count_words) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifiercompiler_default;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.default.php line 21 */
Variant f_smarty_modifiercompiler_default(Variant v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_default);
  INTERCEPT_INJECTION("smarty_modifiercompiler_default", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  Variant v_output;
  int64 v_i = 0;
  int v_cnt = 0;

  {
    LINE(23,0);
    const Variant &tmp0((v_params.rvalAt(0LL, AccessFlags::Error)));
    v_output.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, 1LL)));
    }
    if (tmp0) {
      {
        v_params.set(1LL, (NAMVAR(s_svsd229c51d, "''")));
      }
    }
  }
  {
    LOOP_COUNTER(1);
    {
      v_i = 1LL;
      LINE(27,0);
      int tmp0((x_count(v_params)));
      v_cnt = tmp0;
    }
    for (; (less(v_i, v_cnt)); v_i++) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          const String &tmp0((toString(v_output)));
          LINE(28,0);
          const String &tmp1((toString(v_params.rvalAt(v_i, AccessFlags::Error))));
          v_output = concat5(NAMSTR(s_ss96b246c0, "(($tmp = @"), tmp0, NAMSTR(s_ss007dca33, ")===null||$tmp==='' \? "), tmp1, NAMSTR(s_ss96cccf62, " : $tmp)"));
        }
      }
    }
  }
  return v_output;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_default(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_default", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_default(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_default(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_default", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_default(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_default((void*)&i_smarty_modifiercompiler_default, (void*)&ifa_smarty_modifiercompiler_default, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_default_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.default.php, pm_php$Smarty$libs$plugins$modifiercompiler_default_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssb7b43d2f, "smarty_modifiercompiler_default"));
  g->FVF(smarty_modifiercompiler_default) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifiercompiler_indent;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.indent.php line 21 */
String f_smarty_modifiercompiler_indent(Variant v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_indent);
  INTERCEPT_INJECTION("smarty_modifiercompiler_indent", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, 1LL)));
    }
    if (tmp0) {
      {
        v_params.set(1LL, (NAMVAR(s_svi5e544a31, 4LL)));
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, 2LL)));
    }
    if (tmp0) {
      {
        v_params.set(2LL, (NAMVAR(s_svsf2981ae1, "' '")));
      }
    }
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("preg_replace('!^!m',str_repeat(", 31);
    tmp0_buf.appendWithTaint(LINE(29,(toString(v_params.rvalAt(2LL, AccessFlags::Error)))));
    tmp0_buf.appendWithTaint(",", 1);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(1LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint("),", 2);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(")", 1);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_indent(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_indent", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_indent(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_indent(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_indent", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_indent(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_indent((void*)&i_smarty_modifiercompiler_indent, (void*)&ifa_smarty_modifiercompiler_indent, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_indent_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.indent.php, pm_php$Smarty$libs$plugins$modifiercompiler_indent_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssb0eb9735, "smarty_modifiercompiler_indent"));
  g->FVF(smarty_modifiercompiler_indent) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_lower;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.lower.php line 22 */
String f_smarty_modifiercompiler_lower(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_lower);
  INTERCEPT_INJECTION("smarty_modifiercompiler_lower", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("((mb_detect_encoding(", 21);
    tmp0_buf.appendWithTaint(LINE(25,(toString(v_params.rvalAt(0LL, AccessFlags::Error)))));
    tmp0_buf.appendWithTaint(", 'UTF-8, ISO-8859-1') === 'UTF-8') \? mb_strtolower(", 52);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(",SMARTY_RESOURCE_CHAR_SET) : strtolower(", 40);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint("))", 2);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_lower(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_lower", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_lower(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_lower(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_lower", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_lower(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_lower((void*)&i_smarty_modifiercompiler_lower, (void*)&ifa_smarty_modifiercompiler_lower, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_lower_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.lower.php, pm_php$Smarty$libs$plugins$modifiercompiler_lower_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss14b1c33a, "smarty_modifiercompiler_lower"));
  g->FVF(smarty_modifiercompiler_lower) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_noprint;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.noprint.php line 19 */
String f_smarty_modifiercompiler_noprint(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_noprint);
  INTERCEPT_INJECTION("smarty_modifiercompiler_noprint", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  return NAMSTR(s_ssd229c51d, "''");
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_noprint(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_noprint", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_noprint(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_noprint(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_noprint", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_noprint(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_noprint((void*)&i_smarty_modifiercompiler_noprint, (void*)&ifa_smarty_modifiercompiler_noprint, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.noprint.php, pm_php$Smarty$libs$plugins$modifiercompiler_noprint_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss62580b81, "smarty_modifiercompiler_noprint"));
  g->FVF(smarty_modifiercompiler_noprint) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
