
#include <php//home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.h>
#include <php//home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.fws.h>
#include <php/Smarty/libs/Smarty.class.php.df_lambda.nophp.h>
#include <php/Smarty/libs/Smarty.class.php.df_lambda.nophp.fws.h>
#include <php/Smarty/libs/plugins/block.php.h>
#include <php/Smarty/libs/plugins/block.php.fws.h>
#include <php/Smarty/libs/plugins/block.textformat.h>
#include <php/Smarty/libs/plugins/block.textformat.fws.h>
#include <php/Smarty/libs/plugins/function.counter.h>
#include <php/Smarty/libs/plugins/function.counter.fws.h>
#include <php/Smarty/libs/plugins/function.cycle.h>
#include <php/Smarty/libs/plugins/function.cycle.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_mb_str_replace;
extern CallInfo ci_;
extern CallInfo ci_smarty_modifier_escape___0;
/* preface finishes */
/* SRC: /home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php line 27 */
Variant f_mb_str_replace(CVarRef v_needles, CVarRef v_replacements, Variant v_haystack) {
  FUNCTION_INJECTION(mb_str_replace);
  INTERCEPT_INJECTION("mb_str_replace", array_createvi(3, toVPOD(v_needles), toVPOD(v_replacements), toVPOD(v_haystack)), r);
  Array v_rep;
  Primitive v_key = 0;
  Variant v_needle;
  Variant v_replacement;
  Variant v_needle_len;
  Variant v_replacement_len;
  Variant v_pos;

  v_rep = (toArray(v_replacements));
  {
    LOOP_COUNTER(1);
    Variant map2 = (toArray(v_needles));
    for (ArrayIter iter3 = map2.begin(null_string, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_needle);
      v_key.assignVal(iter3.first());
      {
        {
          LINE(31,0);
          const Variant &tmp0((v_rep.rvalAt(v_key, AccessFlags::Error)));
          v_replacement.assignVal(tmp0);
        }
        {
          LINE(32,0);
          const Variant &tmp0((x_mb_strlen(toString(v_needle))));
          v_needle_len.assignVal(tmp0);
        }
        {
          LINE(33,0);
          const Variant &tmp0((x_mb_strlen(toString(v_replacement))));
          v_replacement_len.assignVal(tmp0);
        }
        {
          LINE(34,0);
          const Variant &tmp0((x_mb_strpos(toString(v_haystack), toString(v_needle), toInt32(0LL))));
          v_pos.assignVal(tmp0);
        }
        LOOP_COUNTER(4);
        {
          while (!same(v_pos, false)) {
            LOOP_COUNTER_CHECK(4);
            {
              {
                LINE(36,0);
                const String &tmp0((toString(x_mb_substr(toString(v_haystack), toInt32(0LL), toInt32(v_pos)))));
                const String &tmp1((toString(v_replacement)));
                LINE(37,0);
                const String &tmp2((toString(x_mb_substr(toString(v_haystack), toInt32((v_pos + v_needle_len))))));
                v_haystack = concat3(tmp0, tmp1, tmp2);
              }
              {
                LINE(38,0);
                const Variant &tmp0((x_mb_strpos(toString(v_haystack), toString(v_needle), toInt32((v_pos + v_replacement_len)))));
                v_pos.assignVal(tmp0);
              }
            }
          }
        }
      }
    }
  }
  return v_haystack;
}
namespace hphp_impl_splitter {}
/* SRC: /home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php line 23 */
Variant f_smarty_modifier_escape___0(CVarRef v_string, CVarRef v_esc_type //  = NAMVAR(s_svs2230855d, "html")
, CVarRef v_char_set //  = getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))
) {
  FUNCTION_INJECTION(smarty_modifier_escape___0);
  INTERCEPT_INJECTION("smarty_modifier_escape", array_createvi(3, toVPOD(v_string), toVPOD(v_esc_type), toVPOD(v_char_set)), r);
  String v_return;
  int64 v_x = 0;
  String v__res;
  int64 v__i = 0;
  int v__len = 0;
  int64 v__ord = 0;

  {
    bool tmp0;
    {
      LINE(25,0);
      bool tmp1((g->FVF(mb_str_replace)));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        g->declareFunctionLit(NAMSTR(s_ss56595f5a, "mb_str_replace"));
        g->FVF(mb_str_replace) = true;
      }
    }
  }
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
      return LINE(46,(x_htmlspecialchars(toString(v_string), toInt32(3LL) /* ENT_QUOTES */, toString(v_char_set))));
    }
  case_2_1:
    {
      return LINE(49,(x_htmlentities(toString(v_string), toInt32(3LL) /* ENT_QUOTES */, toString(v_char_set))));
    }
  case_2_2:
    {
      return LINE(52,(x_rawurlencode(toString(v_string))));
    }
  case_2_3:
    {
      {
        LINE(55,0);
        const String &tmp0((x_rawurlencode(toString(v_string))));
        return x_str_replace(NAMVAR(s_svse5f3372b, "%2F"), NAMVAR(s_svsb9e13cd6, "/"), VarNR(tmp0));
      }
    }
  case_2_4:
    {
      return LINE(59,(x_preg_replace(NAMVAR(s_svsd5d10bcb, "%(\?<!\\\\)'%"), NAMVAR(s_svs0e28ee88, "\\'"), v_string)));
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
              LINE(64,0);
              int tmp0((x_strlen(toString(v_string))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(3);
            {
              {
                LINE(65,0);
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
              LINE(71,0);
              int tmp0((x_strlen(toString(v_string))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(4);
            {
              {
                LINE(72,0);
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
              LINE(78,0);
              int tmp0((x_strlen(toString(v_string))));
              if (!((less(v_x, tmp0)))) break;
            }
            LOOP_COUNTER_CHECK(5);
            {
              {
                LINE(79,0);
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
      return LINE(85,(x_strtr(toString(v_string), s_sva5ae1f8d9)));
    }
  case_2_9:
    {
      return LINE(90,(f_mb_str_replace(s_sva37001a4c, s_sva3c4a36a1, v_string)));
    }
  case_2_10:
    {
      v__res = NAMSTR(s_ss00000000, "");
      {
        LOOP_COUNTER(6);
        {
          v__i = 0LL;
          LINE(98,0);
          int tmp0((x_strlen(toString(v_string))));
          v__len = tmp0;
        }
        {
          StringBuffer tmp_sbuf_v__res(512);
          for (; (less(v__i, v__len)); v__i++) {
            LOOP_COUNTER_CHECK(6);
            {
              {
                LINE(99,0);
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
                    LINE(104,0);
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
Variant i_mb_str_replace(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("mb_str_replace", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_mb_str_replace(arg0, arg1, arg2));
  }
}
Variant ifa_mb_str_replace(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("mb_str_replace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (f_mb_str_replace(arg0, arg1, arg2));
}
Variant i_smarty_modifier_escape___0(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_escape", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(NAMSTR(s_ss2230855d, "html")) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? (getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifier_escape___0(arg0, arg1, arg2));
  }
}
Variant ifa_smarty_modifier_escape___0(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_modifier_escape", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (NAMVAR(s_svs2230855d, "html")) : a1);
  TypedValue def2;
  CVarRef arg2(count <= 2 ? *new (&def2) Variant(getDynamicConstant(get_global_variables()->k_SMARTY_RESOURCE_CHAR_SET, NAMSTR(s_ss2f3664c5, "SMARTY_RESOURCE_CHAR_SET"))) : a2);
  return (f_smarty_modifier_escape___0(arg0, arg1, arg2));
}
CallInfo ci_mb_str_replace((void*)&i_mb_str_replace, (void*)&ifa_mb_str_replace, 3, 0, 0x0000000000000000LL);
CallInfo ci_smarty_modifier_escape___0((void*)&i_smarty_modifier_escape___0, (void*)&ifa_smarty_modifier_escape___0, 3, 0, 0x0000000000000000LL);
Variant pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::/home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php, pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->GCI(smarty_modifier_escape) = &ci_smarty_modifier_escape___0;
  g->declareFunctionLit(NAMSTR(s_ss8aa02790, "smarty_modifier_escape"));
  g->FVF(smarty_modifier_escape) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_1_df_lambda_1;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/Smarty.class.php.df_lambda line 2 */
String f_1_df_lambda_1(CVarRef v_c) {
  FUNCTION_INJECTION(1_df_lambda_1);
  INTERCEPT_INJECTION("1_df_lambda_1", array_createvi(1, toVPOD(v_c)), r);
  {
    LINE(2,0);
    const String &tmp0((toString(v_c.rvalAt(1LL, AccessFlags::Error))));
    const String &tmp1((x_strtolower(tmp0)));
    return concat(NAMSTR(s_ss7f06ffcd, "_"), tmp1);
  }
}
namespace hphp_impl_splitter {}
Variant i_1_df_lambda_1(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("1_df_lambda_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (f_1_df_lambda_1(arg0));
  }
}
Variant ifa_1_df_lambda_1(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("1_df_lambda_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (f_1_df_lambda_1(arg0));
}
CallInfo ci_1_df_lambda_1((void*)&i_1_df_lambda_1, (void*)&ifa_1_df_lambda_1, 1, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$Smarty_class_php_df_lambda(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/Smarty.class.php.df_lambda, pm_php$Smarty$libs$Smarty_class_php_df_lambda);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss4ebcffad, "1_df_lambda_1"));
  g->FVF(1_df_lambda_1) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_block_php;
/* preface finishes */
/* SRC: Smarty/libs/plugins/block.php.php line 18 */
String f_smarty_block_php(CVarRef v_params, CVarRef v_content, CVarRef v_template, VRefParam rv_repeat) {
  FUNCTION_INJECTION(smarty_block_php);
  INTERCEPT_INJECTION("smarty_block_php", (Array(ArrayInit(4).set(0, v_params).set(1, v_content).set(2, v_template).setRef(3, rv_repeat).create())), r);
  Variant &v_repeat ATTRIBUTE_UNUSED = rv_repeat;
  {
    bool tmp0;
    {
      LINE(20,0);
      bool tmp1((toBoolean(v_template.o_getPublic(NAMSTR(s_ssaa7ea232, "allow_php_tag"), true))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        throw_exception(LINE(21,(((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (p_SmartyException(((c_SmartyException*)coo_SmartyException())->create(NAMVAR(s_svs6c2f7927, "{php} is deprecated, set allow_php_tag = true to enable"))))))));
      }
    }
  }
  LINE(23,(f_eval(toString(v_content))));
  return NAMSTR(s_ss00000000, "");
}
namespace hphp_impl_splitter {}
Variant i_smarty_block_php(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("smarty_block_php", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    VRefParam arg3(UNLIKELY(count <= 3) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (f_smarty_block_php(arg0, arg1, arg2, arg3));
  }
}
Variant ifa_smarty_block_php(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 4)) throw_missing_arguments("smarty_block_php", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  VRefParam arg3(UNLIKELY(count <= 3) ? (VRefParamValue()) : vref(a3));
  return (f_smarty_block_php(arg0, arg1, arg2, arg3));
}
CallInfo ci_smarty_block_php((void*)&i_smarty_block_php, (void*)&ifa_smarty_block_php, 4, 0, 0x0000000000000008LL);
Variant pm_php$Smarty$libs$plugins$block_php_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/block.php.php, pm_php$Smarty$libs$plugins$block_php_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssfcfed252, "smarty_block_php"));
  g->FVF(smarty_block_php) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_block_textformat;
/* preface finishes */
/* SRC: Smarty/libs/plugins/block.textformat.php line 34 */
Variant f_smarty_block_textformat(Variant v_params, Variant v_content, Variant v_template, VRefParam rv_repeat) {
  FUNCTION_INJECTION(smarty_block_textformat);
  INTERCEPT_INJECTION("smarty_block_textformat", (Array(ArrayInit(4).set(0, v_params).set(1, v_content).set(2, v_template).setRef(3, rv_repeat).create())), r);
  Variant &v_repeat ATTRIBUTE_UNUSED = rv_repeat;
  Variant v_style;
  Variant v_indent;
  Variant v_indent_first;
  Variant v_indent_char;
  Variant v_wrap;
  Variant v_wrap_char;
  Variant v_wrap_cut;
  Variant v_assign;
  Variant v__key;
  Variant v__val;
  Variant v__paragraphs;
  Variant v__output;
  Variant v__x;
  Variant v__y;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_content; Variant &v_template; Variant &v_repeat; Variant &v_style; Variant &v_indent; Variant &v_indent_first; Variant &v_indent_char; Variant &v_wrap; Variant &v_wrap_char; Variant &v_wrap_cut; Variant &v_assign; Variant &v__key; Variant &v__val; Variant &v__paragraphs; Variant &v__output; Variant &v__x; Variant &v__y;
    VariableTable(Variant &r_params, Variant &r_content, Variant &r_template, Variant &r_repeat, Variant &r_style, Variant &r_indent, Variant &r_indent_first, Variant &r_indent_char, Variant &r_wrap, Variant &r_wrap_char, Variant &r_wrap_cut, Variant &r_assign, Variant &r__key, Variant &r__val, Variant &r__paragraphs, Variant &r__output, Variant &r__x, Variant &r__y) : v_params(r_params), v_content(r_content), v_template(r_template), v_repeat(r_repeat), v_style(r_style), v_indent(r_indent), v_indent_first(r_indent_first), v_indent_char(r_indent_char), v_wrap(r_wrap), v_wrap_char(r_wrap_char), v_wrap_cut(r_wrap_cut), v_assign(r_assign), v__key(r__key), v__val(r__val), v__paragraphs(r__paragraphs), v__output(r__output), v__x(r__x), v__y(r__y) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 63) {
        case 0:
          HASH_RETURN_NAMSTR(0x74B650B1D79F5F40LL, s_ss269a0ee3, v_indent,
                             6);
          break;
        case 1:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          break;
        case 3:
          HASH_RETURN_NAMSTR(0x013BC6824AF568C3LL, s_ssc92947e2, v__paragraphs,
                             11);
          break;
        case 7:
          HASH_RETURN_NAMSTR(0x664130423A93E0C7LL, s_ss402eacfe, v_repeat,
                             6);
          break;
        case 18:
          HASH_RETURN_NAMSTR(0x736CD58C3C224B52LL, s_ss0e0d220f, v__output,
                             7);
          break;
        case 19:
          HASH_RETURN_NAMSTR(0x695F58CB6E166613LL, s_ss5fe86c02, v_indent_char,
                             11);
          break;
        case 20:
          HASH_RETURN_NAMSTR(0x53B2FEAD43626754LL, s_ssba4e7712, v_assign,
                             6);
          break;
        case 29:
          HASH_RETURN_NAMSTR(0x67C34FD98AD6A61DLL, s_ssfc755d10, v__val,
                             4);
          break;
        case 34:
          HASH_RETURN_NAMSTR(0x3C9EB2C508FB2762LL, s_ss0a4edf9b, v_indent_first,
                             12);
          break;
        case 36:
          HASH_RETURN_NAMSTR(0x06C5FF19414510E4LL, s_ss7865e8ce, v__y,
                             2);
          break;
        case 37:
          HASH_RETURN_NAMSTR(0x759A97C37FAD53E5LL, s_ss9982696a, v_style,
                             5);
          break;
        case 46:
          HASH_RETURN_NAMSTR(0x11947C75140980AELL, s_ss77491c43, v_wrap_char,
                             9);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 53:
          HASH_RETURN_NAMSTR(0x5149E39D96FE52B5LL, s_ss024ed895, v_content,
                             7);
          break;
        case 55:
          HASH_RETURN_NAMSTR(0x6C5E35754AA2B277LL, s_ssf38cf473, v_wrap,
                             4);
          break;
        case 56:
          HASH_RETURN_NAMSTR(0x6E665E54643893B8LL, s_ss5239c578, v_wrap_cut,
                             8);
          break;
        case 60:
          HASH_RETURN_NAMSTR(0x1EBB56E58C9965BCLL, s_ss3164e6b7, v__x,
                             2);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_params, v_content, v_template, v_repeat, v_style, v_indent, v_indent_first, v_indent_char, v_wrap, v_wrap_char, v_wrap_cut, v_assign, v__key, v__val, v__paragraphs, v__output, v__x, v__y);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  if (x_is_null(v_content)) {
    {
      return null;
    }
  }
  setNull(v_style);
  v_indent = 0LL;
  v_indent_first = 0LL;
  v_indent_char = NAMSTR(s_ssfcae4ca0, " ");
  v_wrap = 80LL;
  v_wrap_char = NAMSTR(s_ss66d2232c, "\n");
  v_wrap_cut = false;
  setNull(v_assign);
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_params.begin(null_string, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__val);
      v__key.assignVal(iter3.first());
      {
        {
          Variant switch5;
          switch5 = (v__key);
          bool needsOrder;
          int64 hash;
          hash = switch5.hashForStringSwitch(8474252514767492069LL, 0LL, 0LL, 8474252514767492069LL, 8474252514767492069LL, 16LL, needsOrder);
          switch (((uint64) hash) & 15UL) {
          case_5_h_s4:
          case 0UL:
            if (equal(switch5, (NAMSTR(s_ss269a0ee3, "indent")))) goto case_5_4;
            if (UNLIKELY(needsOrder)) goto case_5_h_s5;
            goto case_5_8;
          case_5_h_s5:
          case 2UL:
            if (equal(switch5, (NAMSTR(s_ss0a4edf9b, "indent_first")))) goto case_5_5;
            if (UNLIKELY(needsOrder)) goto case_5_h_s6;
            goto case_5_8;
          case_5_h_s1:
          case 3UL:
            if (equal(switch5, (NAMSTR(s_ss5fe86c02, "indent_char")))) goto case_5_1;
            if (UNLIKELY(needsOrder)) goto case_5_h_s2;
            goto case_5_8;
          case_5_h_s3:
          case 4UL:
            if (equal(switch5, (NAMSTR(s_ssba4e7712, "assign")))) goto case_5_3;
            if (UNLIKELY(needsOrder)) goto case_5_h_s4;
            goto case_5_8;
          case 5UL:
            if (equal(switch5, (NAMSTR(s_ss9982696a, "style")))) goto case_5_0;
            if (UNLIKELY(needsOrder)) goto case_5_h_s1;
            goto case_5_8;
          case_5_h_s6:
          case 7UL:
            if (equal(switch5, (NAMSTR(s_ssf38cf473, "wrap")))) goto case_5_6;
            if (UNLIKELY(needsOrder)) goto case_5_h_s7;
            goto case_5_8;
          case_5_h_s7:
          case 8UL:
            if (equal(switch5, (NAMSTR(s_ss5239c578, "wrap_cut")))) goto case_5_7;
            goto case_5_8;
          case_5_h_s2:
          case 14UL:
            if (equal(switch5, (NAMSTR(s_ss77491c43, "wrap_char")))) goto case_5_2;
            if (UNLIKELY(needsOrder)) goto case_5_h_s3;
            goto case_5_8;
          default: goto case_5_8;
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
          }
        case_5_3:
          {
            variables->get(toString(v__key)) = (toString(v__val));
            goto break4;
          }
        case_5_4:
          {
          }
        case_5_5:
          {
          }
        case_5_6:
          {
            variables->get(toString(v__key)) = (toInt64(v__val));
            goto break4;
          }
        case_5_7:
          {
            variables->get(toString(v__key)) = (toBoolean(v__val));
            goto break4;
          }
        case_5_8:
          {
            LINE(69,(x_trigger_error(concat3(NAMSTR(s_ss0e17af94, "textformat: unknown attribute '"), toString(v__key), NAMSTR(s_sse07b87c4, "'")))));
          }
        break4:;
      }
    }
  }
  if (equal(v_style, NAMSTR(s_ss62fd20a6, "email"))) {
    {
      v_wrap = 72LL;
    }
  }
  {
    LINE(77,0);
    const Variant &tmp0((x_preg_split(NAMVAR(s_svs6477aaac, "![\\r\\n][\\r\\n]!"), v_content)));
    v__paragraphs.assignVal(tmp0);
  }
  v__output = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(6);
    {
      v__x = 0LL;
      LINE(80,0);
      int tmp0((x_count(v__paragraphs)));
      v__y = tmp0;
    }
    for (; (less(v__x, v__y)); v__x++) {
      LOOP_COUNTER_CHECK(6);
      {
        {
          bool tmp0;
          {
            LINE(81,0);
            const Variant &tmp1((v__paragraphs.rvalAt(v__x, AccessFlags::Error)));
            tmp0 = (equal(tmp1, NAMSTR(s_ss00000000, "")));
          }
          if (tmp0) {
            {
              continue;
            }
          }
        }
        {
          LINE(85,0);
          const Variant &tmp0((v__paragraphs.rvalAt(v__x, AccessFlags::Error)));
          const Variant &tmp1((x_preg_replace(s_sva40db6953, s_svaba016290, tmp0)));
          v__paragraphs.set(v__x, (tmp1));
        }
        if (more(v_indent_first, 0LL)) {
          {
            {
              LINE(88,0);
              const String &tmp0((x_str_repeat(toString(v_indent_char), toInt32(v_indent_first))));
              const String &tmp1((toString(v__paragraphs.rvalAt(v__x, AccessFlags::Error))));
              v__paragraphs.set(v__x, (VarNR(concat(tmp0, tmp1))));
            }
          }
        }
        {
          LINE(91,0);
          const String &tmp0((toString(v__paragraphs.rvalAt(v__x, AccessFlags::Error))));
          const Variant &tmp1((x_wordwrap(tmp0, toInt32((v_wrap - v_indent)), toString(v_wrap_char), toBoolean(v_wrap_cut))));
          v__paragraphs.set(v__x, (tmp1));
        }
        if (more(v_indent, 0LL)) {
          {
            {
              LINE(94,0);
              const String &tmp0((x_str_repeat(toString(v_indent_char), toInt32(v_indent))));
              const Variant &tmp1((v__paragraphs.rvalAt(v__x, AccessFlags::Error)));
              const Variant &tmp2((x_preg_replace(NAMVAR(s_svs5da07c35, "!^!m"), VarNR(tmp0), tmp1)));
              v__paragraphs.set(v__x, (tmp2));
            }
          }
        }
      }
    }
  }
  {
    LINE(97,0);
    const String &tmp0((x_implode(VarNR(concat(toString(v_wrap_char), toString(v_wrap_char))), v__paragraphs)));
    v__output = tmp0;
  }
  {
    Variant tmp0;
    if (toBoolean(v_assign)) {
      LINE(99,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v_template;
      mcp1.methodCall((obj1), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = ((mcp1.ci->getMeth2Args())(mcp1, 2, v_assign, v__output));
    } else {
      tmp0 = (v__output);
    }
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_block_textformat(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("smarty_block_textformat", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    VRefParam arg3(UNLIKELY(count <= 3) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (f_smarty_block_textformat(arg0, arg1, arg2, arg3));
  }
}
Variant ifa_smarty_block_textformat(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 4)) throw_missing_arguments("smarty_block_textformat", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  VRefParam arg3(UNLIKELY(count <= 3) ? (VRefParamValue()) : vref(a3));
  return (f_smarty_block_textformat(arg0, arg1, arg2, arg3));
}
CallInfo ci_smarty_block_textformat((void*)&i_smarty_block_textformat, (void*)&ifa_smarty_block_textformat, 4, 0, 0x0000000000000008LL);
Variant pm_php$Smarty$libs$plugins$block_textformat_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/block.textformat.php, pm_php$Smarty$libs$plugins$block_textformat_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss54fed974, "smarty_block_textformat"));
  g->FVF(smarty_block_textformat) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_counter;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.counter.php line 22 */
Variant f_smarty_function_counter(CVarRef v_params, CVarRef v_template) {
  FUNCTION_INJECTION(smarty_function_counter);
  INTERCEPT_INJECTION("smarty_function_counter", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Sequence &sv_counters ATTRIBUTE_UNUSED = g->sv_smarty_function_counter___counters;
  bool &inited_sv_counters ATTRIBUTE_UNUSED = g->inited_sv_smarty_function_counter___counters;
  Variant v_name;
  Variant v_counter;
  bool v_print = false;
  Variant v_retval;

  if (!inited_sv_counters) {
    (sv_counters = s_sa00000000);
    inited_sv_counters = true;
  }
  {
    Variant tmp0(((isset(v_params, NAMSTR(s_ssdc3cbddc, "name"), true) ? ((Variant)(LINE(26,(v_params.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))))) : ((Variant)(NAMSTR(s_ss570270cc, "default"))))));
    v_name.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (!(isset(sv_counters, v_name)));
    }
    if (tmp0) {
      {
        sv_counters.set(v_name, (s_sva7b031fb6));
      }
    }
  }
  {
    LINE(35,0);
    const Variant &tmp0((lval(sv_counters.lvalAt(v_name))));
    v_counter.assignRef(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_params, NAMSTR(s_ss3c3982d5, "start"), true));
    }
    if (tmp0) {
      {
        {
          LINE(38,0);
          int64 tmp0((toInt64(v_params.rvalAt(NAMSTR(s_ss3c3982d5, "start"), AccessFlags::Error_Key))));
          int64 tmp1((v_counter.set(NAMSTR(s_ss0d54babb, "count"), (VarNR((tmp0))), true).toInt64Val()));
          v_counter.set(NAMSTR(s_ss3c3982d5, "start"), (tmp1), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (!(empty(v_params, NAMSTR(s_ssba4e7712, "assign"), true)));
    }
    if (tmp0) {
      {
        {
          LINE(42,0);
          const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          v_counter.set(NAMSTR(s_ssba4e7712, "assign"), (tmp0), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_counter, NAMSTR(s_ssba4e7712, "assign"), true));
    }
    if (tmp0) {
      {
        {
          LINE(46,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_template;
          mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((v_counter.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          const Variant &tmp2((v_counter.rvalAt(NAMSTR(s_ss0d54babb, "count"), AccessFlags::Error_Key)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, tmp2);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_params, NAMSTR(s_ssc8ce68a6, "print"), true));
    }
    if (tmp0) {
      {
        {
          LINE(50,0);
          bool tmp0((toBoolean(v_params.rvalAt(NAMSTR(s_ssc8ce68a6, "print"), AccessFlags::Error_Key))));
          v_print = (tmp0);
        }
      }
    }
    else {
      {
        {
          bool tmp0((empty(v_counter, NAMSTR(s_ssba4e7712, "assign"), true)));
          v_print = tmp0;
        }
      }
    }
  }
  if (v_print) {
    {
      {
        LINE(56,0);
        const Variant &tmp0((v_counter.rvalAt(NAMSTR(s_ss0d54babb, "count"), AccessFlags::Error_Key)));
        v_retval.assignVal(tmp0);
      }
    }
  }
  else {
    {
      setNull(v_retval);
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_params, NAMSTR(s_ss5dcf1c8a, "skip"), true));
    }
    if (tmp0) {
      {
        {
          LINE(62,0);
          const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ss5dcf1c8a, "skip"), AccessFlags::Error_Key)));
          v_counter.set(NAMSTR(s_ss5dcf1c8a, "skip"), (tmp0), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_params, NAMSTR(s_ssff258839, "direction"), true));
    }
    if (tmp0) {
      {
        {
          LINE(66,0);
          const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ssff258839, "direction"), AccessFlags::Error_Key)));
          v_counter.set(NAMSTR(s_ssff258839, "direction"), (tmp0), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(69,0);
      const Variant &tmp1((v_counter.rvalAt(NAMSTR(s_ssff258839, "direction"), AccessFlags::Error_Key)));
      tmp0 = (equal(tmp1, NAMSTR(s_ss2e545e6e, "down")));
    }
    if (tmp0) {
      {
        LINE(70,0);
        const Variant &tmp0((v_counter.rvalAt(NAMSTR(s_ss5dcf1c8a, "skip"), AccessFlags::Error_Key)));
        v_counter.setOpEqual(276, NAMSTR(s_ss0d54babb, "count"), (tmp0), true);
      }
    }
    else {
      {
        LINE(72,0);
        const Variant &tmp0((v_counter.rvalAt(NAMSTR(s_ss5dcf1c8a, "skip"), AccessFlags::Error_Key)));
        v_counter.setOpEqual(277, NAMSTR(s_ss0d54babb, "count"), (tmp0), true);
      }
    }
  }
  return v_retval;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_counter(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_counter", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_counter(arg0, arg1));
  }
}
Variant ifa_smarty_function_counter(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_counter", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_counter(arg0, arg1));
}
CallInfo ci_smarty_function_counter((void*)&i_smarty_function_counter, (void*)&ifa_smarty_function_counter, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_counter_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.counter.php, pm_php$Smarty$libs$plugins$function_counter_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssda572432, "smarty_function_counter"));
  g->FVF(smarty_function_counter) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_cycle;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.cycle.php line 46 */
Variant f_smarty_function_cycle(CVarRef v_params, CVarRef v_template) {
  FUNCTION_INJECTION(smarty_function_cycle);
  INTERCEPT_INJECTION("smarty_function_cycle", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant &sv_cycle_vars ATTRIBUTE_UNUSED = g->sv_smarty_function_cycle___cycle_vars;
  bool &inited_sv_cycle_vars ATTRIBUTE_UNUSED = g->inited_sv_smarty_function_cycle___cycle_vars;
  Variant v_name;
  bool v_print = false;
  bool v_advance = false;
  bool v_reset = false;
  Variant v_cycle_array;
  Variant v_retval;

  Variant tmp_ref;
  if (!inited_sv_cycle_vars) {
    setNull(sv_cycle_vars);
    inited_sv_cycle_vars = true;
  }
  {
    Variant tmp0(((empty(v_params, NAMSTR(s_ssdc3cbddc, "name"), true) ? ((Variant)(NAMSTR(s_ss570270cc, "default"))) : ((Variant)(LINE(50,(v_params.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))))))));
    v_name.assignVal(tmp0);
  }
  {
    bool tmp0;
    if (isset(v_params, NAMSTR(s_ssc8ce68a6, "print"), true)) {
      LINE(51,0);
      bool tmp1((toBoolean(v_params.rvalAt(NAMSTR(s_ssc8ce68a6, "print"), AccessFlags::Error_Key))));
      tmp0 = ((tmp1));
    } else {
      tmp0 = (true);
    }
    v_print = tmp0;
  }
  {
    bool tmp0;
    if (isset(v_params, NAMSTR(s_ss6ab8d35d, "advance"), true)) {
      LINE(52,0);
      bool tmp1((toBoolean(v_params.rvalAt(NAMSTR(s_ss6ab8d35d, "advance"), AccessFlags::Error_Key))));
      tmp0 = ((tmp1));
    } else {
      tmp0 = (true);
    }
    v_advance = tmp0;
  }
  {
    bool tmp0;
    if (isset(v_params, NAMSTR(s_ss5c8999e5, "reset"), true)) {
      LINE(53,0);
      bool tmp1((toBoolean(v_params.rvalAt(NAMSTR(s_ss5c8999e5, "reset"), AccessFlags::Error_Key))));
      tmp0 = ((tmp1));
    } else {
      tmp0 = (false);
    }
    v_reset = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(55,0);
      const Variant &tmp1((x_array_keys(v_params)));
      bool tmp2((x_in_array(NAMVAR(s_svsb86d1574, "values"), tmp1)));
      tmp0 = (!(tmp2));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            tmp0 = (!(isset(LINE(56,(sv_cycle_vars.rvalRef(v_name, tmp_ref))), NAMSTR(s_ssb86d1574, "values"), true)));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              LINE(57,(x_trigger_error(NAMSTR(s_ss31f43937, "cycle: missing 'values' parameter"))));
              return null;
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
            bool tmp1 = (isset(LINE(61,(sv_cycle_vars.rvalRef(v_name, tmp_ref))), NAMSTR(s_ssb86d1574, "values"), true));
            if (tmp1) {
              LINE(62,0);
              const Variant &tmp2((sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssb86d1574, "values"), AccessFlags::Error_Key)));
              const Variant &tmp3((v_params.rvalAt(NAMSTR(s_ssb86d1574, "values"), AccessFlags::Error_Key)));
              tmp1 = (!equal(tmp2, tmp3));
            }
            tmp0 = (tmp1);
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              LINE(63,(lval(sv_cycle_vars.lvalAt(v_name, AccessFlags::CheckExist)))).set(NAMSTR(s_ssc0ff3081, "index"), (NAMVAR(s_svif01bca90, 0LL)), true);
            }
          }
        }
        {
          LINE(65,0);
          const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ssb86d1574, "values"), AccessFlags::Error_Key)));
          lval(sv_cycle_vars.lvalAt(v_name, AccessFlags::CheckExist)).set(NAMSTR(s_ssb86d1574, "values"), (tmp0), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_params, NAMSTR(s_ss6cba5d0e, "delimiter"), true));
    }
    if (tmp0) {
      {
        {
          LINE(69,0);
          const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ss6cba5d0e, "delimiter"), AccessFlags::Error_Key)));
          lval(sv_cycle_vars.lvalAt(v_name, AccessFlags::CheckExist)).set(NAMSTR(s_ss6cba5d0e, "delimiter"), (tmp0), true);
        }
      }
    }
    else {
      bool tmp0;
      {
        tmp0 = (!(isset(LINE(70,(sv_cycle_vars.rvalRef(v_name, tmp_ref))), NAMSTR(s_ss6cba5d0e, "delimiter"), true)));
        tmp_ref.unset();
      }
      if (tmp0) {
        {
          LINE(71,(lval(sv_cycle_vars.lvalAt(v_name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss6cba5d0e, "delimiter"), (NAMVAR(s_svsd332baa7, ",")), true);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(74,0);
      const Variant &tmp1((sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssb86d1574, "values"), AccessFlags::Error_Key)));
      tmp0 = (x_is_array(tmp1));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(75,0);
          const Variant &tmp0((sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssb86d1574, "values"), AccessFlags::Error_Key)));
          v_cycle_array.assignVal(tmp0);
          tmp_ref.unset();
        }
      }
    }
    else {
      {
        {
          LINE(77,0);
          const String &tmp0((toString(sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss6cba5d0e, "delimiter"), AccessFlags::Error_Key))));
          const String &tmp1((toString(sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssb86d1574, "values"), AccessFlags::Error_Key))));
          const Variant &tmp2((x_explode(tmp0, tmp1)));
          v_cycle_array.assignVal(tmp2);
          tmp_ref.unset();
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = ((!(isset(LINE(80,(sv_cycle_vars.rvalRef(v_name, tmp_ref))), NAMSTR(s_ssc0ff3081, "index"), true)) || v_reset));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        LINE(81,(lval(sv_cycle_vars.lvalAt(v_name, AccessFlags::CheckExist)))).set(NAMSTR(s_ssc0ff3081, "index"), (NAMVAR(s_svif01bca90, 0LL)), true);
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v_params, NAMSTR(s_ssba4e7712, "assign"), true));
    }
    if (tmp0) {
      {
        v_print = false;
        {
          LINE(86,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_template;
          mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((v_params.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          const Variant &tmp2((sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssc0ff3081, "index"), AccessFlags::Error_Key)));
          const Variant &tmp3((v_cycle_array.rvalAt(tmp2, AccessFlags::Error)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, tmp3);
          tmp_ref.unset();
        }
      }
    }
  }
  if (v_print) {
    {
      {
        LINE(90,0);
        const Variant &tmp0((sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssc0ff3081, "index"), AccessFlags::Error_Key)));
        const Variant &tmp1((v_cycle_array.rvalAt(tmp0, AccessFlags::Error)));
        v_retval.assignVal(tmp1);
        tmp_ref.unset();
      }
    }
  }
  else {
    {
      setNull(v_retval);
    }
  }
  if (v_advance) {
    {
      {
        bool tmp0;
        {
          LINE(96,0);
          const Variant &tmp1((sv_cycle_vars.rvalRef(v_name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssc0ff3081, "index"), AccessFlags::Error_Key)));
          int tmp2((x_count(v_cycle_array)));
          int64 tmp3(((tmp2 - 1LL)));
          tmp0 = (not_less(tmp1, tmp3));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            LINE(97,(lval(sv_cycle_vars.lvalAt(v_name, AccessFlags::CheckExist)))).set(NAMSTR(s_ssc0ff3081, "index"), (NAMVAR(s_svif01bca90, 0LL)), true);
          }
        }
        else {
          {
            lval(LINE(99,(lval(sv_cycle_vars.lvalAt(v_name, AccessFlags::CheckExist)))).lvalAt(NAMSTR(s_ssc0ff3081, "index"), AccessFlags::Key))++;
          }
        }
      }
    }
  }
  return v_retval;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_cycle(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_cycle", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_cycle(arg0, arg1));
  }
}
Variant ifa_smarty_function_cycle(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_cycle", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_cycle(arg0, arg1));
}
CallInfo ci_smarty_function_cycle((void*)&i_smarty_function_cycle, (void*)&ifa_smarty_function_cycle, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_cycle_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.cycle.php, pm_php$Smarty$libs$plugins$function_cycle_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss55d384dd, "smarty_function_cycle"));
  g->FVF(smarty_function_cycle) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
