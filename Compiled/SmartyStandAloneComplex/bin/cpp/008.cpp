
#include <php/Smarty/libs/plugins/modifiercompiler.string_format.h>
#include <php/Smarty/libs/plugins/modifiercompiler.string_format.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.strip.h>
#include <php/Smarty/libs/plugins/modifiercompiler.strip.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.strip_tags.h>
#include <php/Smarty/libs/plugins/modifiercompiler.strip_tags.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.upper.h>
#include <php/Smarty/libs/plugins/modifiercompiler.upper.fws.h>
#include <php/Smarty/libs/plugins/modifiercompiler.wordwrap.h>
#include <php/Smarty/libs/plugins/modifiercompiler.wordwrap.fws.h>
#include <php/Smarty/libs/plugins/outputfilter.trimwhitespace.h>
#include <php/Smarty/libs/plugins/outputfilter.trimwhitespace.fws.h>
#include <php/Smarty/libs/plugins/shared.escape_special_chars.h>
#include <php/Smarty/libs/plugins/shared.escape_special_chars.fws.h>
#include <php/Smarty/libs/plugins/shared.make_timestamp.h>
#include <php/Smarty/libs/plugins/shared.make_timestamp.fws.h>
#include <php/Smarty/libs/plugins/shared.mb_str_replace.h>
#include <php/Smarty/libs/plugins/shared.mb_str_replace.fws.h>
#include <php/Smarty/libs/plugins/variablefilter.htmlspecialchars.h>
#include <php/Smarty/libs/plugins/variablefilter.htmlspecialchars.fws.h>

// Dependencies
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_modifiercompiler_string_format;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.string_format.php line 21 */
String f_smarty_modifiercompiler_string_format(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_string_format);
  INTERCEPT_INJECTION("smarty_modifiercompiler_string_format", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    LINE(23,0);
    const String &tmp0((toString(v_params.rvalAt(1LL, AccessFlags::Error))));
    const String &tmp1((toString(v_params.rvalAt(0LL, AccessFlags::Error))));
    return concat5(NAMSTR(s_ss381774e8, "sprintf("), tmp0, NAMSTR(s_ssd332baa7, ","), tmp1, NAMSTR(s_ss44beffb9, ")"));
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_string_format(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_string_format", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_string_format(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_string_format(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_string_format", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_string_format(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_string_format((void*)&i_smarty_modifiercompiler_string_format, (void*)&ifa_smarty_modifiercompiler_string_format, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.string_format.php, pm_php$Smarty$libs$plugins$modifiercompiler_string_format_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssa6d31e9d, "smarty_modifiercompiler_string_format"));
  g->FVF(smarty_modifiercompiler_string_format) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_strip;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.strip.php line 25 */
String f_smarty_modifiercompiler_strip(Variant v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_strip);
  INTERCEPT_INJECTION("smarty_modifiercompiler_strip", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, 1LL)));
    }
    if (tmp0) {
      {
        v_params.set(1LL, (NAMVAR(s_svsf2981ae1, "' '")));
      }
    }
  }
  {
    LINE(30,0);
    const String &tmp0((toString(v_params.rvalAt(1LL, AccessFlags::Error))));
    const String &tmp1((toString(v_params.rvalAt(0LL, AccessFlags::Error))));
    return concat5(NAMSTR(s_sse241baee, "preg_replace('!\\s+!u', "), tmp0, NAMSTR(s_ssd332baa7, ","), tmp1, NAMSTR(s_ss44beffb9, ")"));
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_strip(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_strip", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_strip(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_strip(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_strip", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_strip(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_strip((void*)&i_smarty_modifiercompiler_strip, (void*)&ifa_smarty_modifiercompiler_strip, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_strip_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.strip.php, pm_php$Smarty$libs$plugins$modifiercompiler_strip_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss1c43eb01, "smarty_modifiercompiler_strip"));
  g->FVF(smarty_modifiercompiler_strip) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_strip_tags;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.strip_tags.php line 22 */
Variant f_smarty_modifiercompiler_strip_tags(Variant v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_strip_tags);
  INTERCEPT_INJECTION("smarty_modifiercompiler_strip_tags", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, 1LL)));
    }
    if (tmp0) {
      {
        v_params.set(1LL, (true_varNR));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(27,0);
      const Variant &tmp1((v_params.rvalAt(1LL, AccessFlags::Error)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          LINE(28,0);
          const String &tmp0((toString(v_params.rvalAt(0LL, AccessFlags::Error))));
          return concat3(NAMSTR(s_ss6ccd6282, "preg_replace('!<[^>]*\?>!', ' ', "), tmp0, NAMSTR(s_ss44beffb9, ")"));
        }
      }
    }
    else {
      {
        {
          LINE(30,0);
          const String &tmp0((toString(v_params.rvalAt(0LL, AccessFlags::Error))));
          return concat3(NAMSTR(s_sse8ac5f0b, "strip_tags("), tmp0, NAMSTR(s_ss44beffb9, ")"));
        }
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_strip_tags(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_strip_tags", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_strip_tags(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_strip_tags(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_strip_tags", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_strip_tags(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_strip_tags((void*)&i_smarty_modifiercompiler_strip_tags, (void*)&ifa_smarty_modifiercompiler_strip_tags, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.strip_tags.php, pm_php$Smarty$libs$plugins$modifiercompiler_strip_tags_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssb666d436, "smarty_modifiercompiler_strip_tags"));
  g->FVF(smarty_modifiercompiler_strip_tags) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_upper;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.upper.php line 21 */
String f_smarty_modifiercompiler_upper(CVarRef v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_upper);
  INTERCEPT_INJECTION("smarty_modifiercompiler_upper", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("((mb_detect_encoding(", 21);
    tmp0_buf.appendWithTaint(LINE(24,(toString(v_params.rvalAt(0LL, AccessFlags::Error)))));
    tmp0_buf.appendWithTaint(", 'UTF-8, ISO-8859-1') === 'UTF-8') \? mb_strtoupper(", 52);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(",SMARTY_RESOURCE_CHAR_SET) : strtoupper(", 40);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(0LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint("))", 2);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_upper(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_upper", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_upper(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_upper(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_upper", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_upper(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_upper((void*)&i_smarty_modifiercompiler_upper, (void*)&ifa_smarty_modifiercompiler_upper, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_upper_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.upper.php, pm_php$Smarty$libs$plugins$modifiercompiler_upper_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssbcbe0a19, "smarty_modifiercompiler_upper"));
  g->FVF(smarty_modifiercompiler_upper) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_modifiercompiler_wordwrap;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/modifiercompiler.wordwrap.php line 21 */
String f_smarty_modifiercompiler_wordwrap(Variant v_params, CVarRef v_compiler) {
  FUNCTION_INJECTION(smarty_modifiercompiler_wordwrap);
  INTERCEPT_INJECTION("smarty_modifiercompiler_wordwrap", array_createvi(2, toVPOD(v_params), toVPOD(v_compiler)), r);
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, 1LL)));
    }
    if (tmp0) {
      {
        v_params.set(1LL, (NAMVAR(s_svi2161de23, 80LL)));
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
        v_params.set(2LL, (NAMVAR(s_svsba6a4731, "\"\\n\"")));
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, 3LL)));
    }
    if (tmp0) {
      {
        v_params.set(3LL, (NAMVAR(s_svs8c98c156, "false")));
      }
    }
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("wordwrap(", 9);
    tmp0_buf.appendWithTaint(LINE(32,(toString(v_params.rvalAt(0LL, AccessFlags::Error)))));
    tmp0_buf.appendWithTaint(",", 1);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(1LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(",", 1);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(2LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(",", 1);
    tmp0_buf.appendWithTaint(toString(v_params.rvalAt(3LL, AccessFlags::Error)));
    tmp0_buf.appendWithTaint(")", 1);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    return tmp0;
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_modifiercompiler_wordwrap(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_wordwrap", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_modifiercompiler_wordwrap(arg0, arg1));
  }
}
Variant ifa_smarty_modifiercompiler_wordwrap(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_modifiercompiler_wordwrap", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_modifiercompiler_wordwrap(arg0, arg1));
}
CallInfo ci_smarty_modifiercompiler_wordwrap((void*)&i_smarty_modifiercompiler_wordwrap, (void*)&ifa_smarty_modifiercompiler_wordwrap, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/modifiercompiler.wordwrap.php, pm_php$Smarty$libs$plugins$modifiercompiler_wordwrap_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss5f370e55, "smarty_modifiercompiler_wordwrap"));
  g->FVF(smarty_modifiercompiler_wordwrap) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_outputfilter_trimwhitespace;
extern CallInfo ci_smarty_outputfilter_trimwhitespace_replace;
/* preface finishes */
/* SRC: Smarty/libs/plugins/outputfilter.trimwhitespace.php line 30 */
Variant f_smarty_outputfilter_trimwhitespace(Variant v_source, CVarRef v_smarty) {
  FUNCTION_INJECTION(smarty_outputfilter_trimwhitespace);
  INTERCEPT_INJECTION("smarty_outputfilter_trimwhitespace", array_createvi(2, toVPOD(v_source), toVPOD(v_smarty)), r);
  Variant v_match;
  Variant v__script_blocks;
  Variant v__pre_blocks;
  Variant v__textarea_blocks;

  LINE(33,(x_preg_match_all(NAMSTR(s_ss22c49544, "!<script[^>]*\?>.*\?</script>!is"), toString(v_source), ref(v_match))));
  {
    LINE(34,0);
    const Variant &tmp0((v_match.rvalAt(0LL, AccessFlags::Error)));
    v__script_blocks.assignVal(tmp0);
  }
  {
    LINE(36,0);
    const Variant &tmp0((x_preg_replace(NAMVAR(s_svs22c49544, "!<script[^>]*\?>.*\?</script>!is"), NAMVAR(s_svsfbfb03b6, "@@@SMARTY:TRIM:SCRIPT@@@"), v_source)));
    v_source.assignVal(tmp0);
  }
  LINE(39,(x_preg_match_all(NAMSTR(s_ssadcb22e0, "!<pre[^>]*\?>.*\?</pre>!is"), toString(v_source), ref(v_match))));
  {
    LINE(40,0);
    const Variant &tmp0((v_match.rvalAt(0LL, AccessFlags::Error)));
    v__pre_blocks.assignVal(tmp0);
  }
  {
    LINE(42,0);
    const Variant &tmp0((x_preg_replace(NAMVAR(s_svsadcb22e0, "!<pre[^>]*\?>.*\?</pre>!is"), NAMVAR(s_svs3805be8c, "@@@SMARTY:TRIM:PRE@@@"), v_source)));
    v_source.assignVal(tmp0);
  }
  LINE(45,(x_preg_match_all(NAMSTR(s_ss49c89f1d, "!<textarea[^>]*\?>.*\?</textarea>!is"), toString(v_source), ref(v_match))));
  {
    LINE(46,0);
    const Variant &tmp0((v_match.rvalAt(0LL, AccessFlags::Error)));
    v__textarea_blocks.assignVal(tmp0);
  }
  {
    LINE(48,0);
    const Variant &tmp0((x_preg_replace(NAMVAR(s_svs49c89f1d, "!<textarea[^>]*\?>.*\?</textarea>!is"), NAMVAR(s_svs9e433d9f, "@@@SMARTY:TRIM:TEXTAREA@@@"), v_source)));
    v_source.assignVal(tmp0);
  }
  {
    LINE(52,0);
    const String &tmp0((toString(x_preg_replace(NAMVAR(s_svsac29d1c2, "/((\?<!\\\?>)\\n)[\\s]+/m"), NAMVAR(s_svsb644bbeb, "\\1"), v_source))));
    const String &tmp1((x_trim(tmp0)));
    v_source = tmp1;
  }
  LINE(55,(f_smarty_outputfilter_trimwhitespace_replace(NAMVAR(s_svs9e433d9f, "@@@SMARTY:TRIM:TEXTAREA@@@"), v__textarea_blocks, ref(v_source))));
  LINE(58,(f_smarty_outputfilter_trimwhitespace_replace(NAMVAR(s_svs3805be8c, "@@@SMARTY:TRIM:PRE@@@"), v__pre_blocks, ref(v_source))));
  LINE(61,(f_smarty_outputfilter_trimwhitespace_replace(NAMVAR(s_svsfbfb03b6, "@@@SMARTY:TRIM:SCRIPT@@@"), v__script_blocks, ref(v_source))));
  return v_source;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/plugins/outputfilter.trimwhitespace.php line 66 */
void f_smarty_outputfilter_trimwhitespace_replace(CVarRef v_search_str, CVarRef v_replace, VRefParam rv_subject) {
  FUNCTION_INJECTION(smarty_outputfilter_trimwhitespace_replace);
  INTERCEPT_INJECTION("smarty_outputfilter_trimwhitespace_replace", (Array(ArrayInit(3).set(0, v_search_str).set(1, v_replace).setRef(2, rv_subject).create())), );
  Variant &v_subject ATTRIBUTE_UNUSED = rv_subject;
  int v__len = 0;
  Variant v__pos;
  int64 v__i = 0;
  int v__count = 0;

  {
    LINE(67,0);
    int tmp0((x_strlen(toString(v_search_str))));
    v__len = tmp0;
  }
  v__pos = 0LL;
  {
    LOOP_COUNTER(1);
    {
      v__i = 0LL;
      LINE(69,0);
      int tmp0((x_count(v_replace)));
      v__count = tmp0;
    }
    for (; (less(v__i, v__count)); v__i++) {
      LOOP_COUNTER_CHECK(1);
      {
        bool tmp0;
        {
          LINE(70,0);
          const Variant &tmp1((x_strpos(toString(v_subject), v_search_str, toInt32(v__pos))));
          tmp0 = (!same(v__pos.assignVal(tmp1), false));
        }
        if (tmp0) {
          {
            Variant tmp0((v_subject));
            LINE(71,0);
            const Variant &tmp1((v_replace.rvalAt(v__i, AccessFlags::Error)));
            const Variant &tmp2((x_substr_replace(tmp0, tmp1, v__pos, VarNR(v__len))));
            v_subject.assignVal(tmp2);
          }
        }
        else {
          break;
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
Variant i_smarty_outputfilter_trimwhitespace(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_outputfilter_trimwhitespace", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_outputfilter_trimwhitespace(arg0, arg1));
  }
}
Variant ifa_smarty_outputfilter_trimwhitespace(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_outputfilter_trimwhitespace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_outputfilter_trimwhitespace(arg0, arg1));
}
Variant i_smarty_outputfilter_trimwhitespace_replace(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_outputfilter_trimwhitespace_replace", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    VRefParam arg2(UNLIKELY(count <= 2) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (f_smarty_outputfilter_trimwhitespace_replace(arg0, arg1, arg2), null);
  }
}
Variant ifa_smarty_outputfilter_trimwhitespace_replace(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_outputfilter_trimwhitespace_replace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  VRefParam arg2(UNLIKELY(count <= 2) ? (VRefParamValue()) : vref(a2));
  return (f_smarty_outputfilter_trimwhitespace_replace(arg0, arg1, arg2), null);
}
CallInfo ci_smarty_outputfilter_trimwhitespace((void*)&i_smarty_outputfilter_trimwhitespace, (void*)&ifa_smarty_outputfilter_trimwhitespace, 2, 0, 0x0000000000000000LL);
CallInfo ci_smarty_outputfilter_trimwhitespace_replace((void*)&i_smarty_outputfilter_trimwhitespace_replace, (void*)&ifa_smarty_outputfilter_trimwhitespace_replace, 3, 0, 0x0000000000000004LL);
Variant pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/outputfilter.trimwhitespace.php, pm_php$Smarty$libs$plugins$outputfilter_trimwhitespace_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss519bad50, "smarty_outputfilter_trimwhitespace"));
  g->FVF(smarty_outputfilter_trimwhitespace) = true;
  g->declareFunctionLit(NAMSTR(s_ss0b7d0ef1, "smarty_outputfilter_trimwhitespace_replace"));
  g->FVF(smarty_outputfilter_trimwhitespace_replace) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_function_escape_special_chars;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/shared.escape_special_chars.php line 19 */
Variant f_smarty_function_escape_special_chars(Variant v_string) {
  FUNCTION_INJECTION(smarty_function_escape_special_chars);
  INTERCEPT_INJECTION("smarty_function_escape_special_chars", array_createvi(1, toVPOD(v_string)), r);
  if (!(x_is_array(v_string))) {
    {
      {
        LINE(22,0);
        const Variant &tmp0((x_preg_replace(NAMVAR(s_svs762cc923, "!&(#\?\\w+);!"), NAMVAR(s_svsf7f509c9, "%%%SMARTY_START%%%\\1%%%SMARTY_END%%%"), v_string)));
        v_string.assignVal(tmp0);
      }
      {
        LINE(23,0);
        const String &tmp0((x_htmlspecialchars(toString(v_string))));
        v_string = tmp0;
      }
      {
        LINE(24,0);
        const Variant &tmp0((x_str_replace(s_sva4ac2715d, s_svaace7b01b, v_string)));
        v_string.assignVal(tmp0);
      }
    }
  }
  return v_string;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_escape_special_chars(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_function_escape_special_chars", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (f_smarty_function_escape_special_chars(arg0));
  }
}
Variant ifa_smarty_function_escape_special_chars(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_function_escape_special_chars", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (f_smarty_function_escape_special_chars(arg0));
}
CallInfo ci_smarty_function_escape_special_chars((void*)&i_smarty_function_escape_special_chars, (void*)&ifa_smarty_function_escape_special_chars, 1, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$shared_escape_special_chars_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/shared.escape_special_chars.php, pm_php$Smarty$libs$plugins$shared_escape_special_chars_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssf67f4f8d, "smarty_function_escape_special_chars"));
  g->FVF(smarty_function_escape_special_chars) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_make_timestamp;
/* preface finishes */
/* SRC: Smarty/libs/plugins/shared.make_timestamp.php line 18 */
Variant f_smarty_make_timestamp(CVarRef v_string) {
  FUNCTION_INJECTION(smarty_make_timestamp);
  INTERCEPT_INJECTION("smarty_make_timestamp", array_createvi(1, toVPOD(v_string)), r);
  Variant v_time;

  if (empty(v_string)) {
    {
      return LINE(22,(x_time()));
    }
  }
  else if (instanceOf(v_string, NAMSTR(s_ssf2853f05, "DateTime"))) {
    {
      {
        LINE(24,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_string;
        mcp0.methodCall((obj0), NAMSTR(s_ss599b7f86, "getTimestamp"), 0x7533D7D1FB463C81LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        return wrap_variant((mcp0.ci->getMeth0Args())(mcp0, 0));
      }
    }
  }
  else {
    bool tmp0;
    {
      LINE(25,0);
      int tmp1((x_strlen(toString(v_string))));
      tmp0 = ((equal(tmp1, 14LL) && x_ctype_digit(v_string)));
    }
    if (tmp0) {
      {
        {
          LINE(27,0);
          int tmp0((toInt32(x_substr(toString(v_string), toInt32(8LL), toInt32(2LL)))));
          int tmp1((toInt32(x_substr(toString(v_string), toInt32(10LL), toInt32(2LL)))));
          int tmp2((toInt32(x_substr(toString(v_string), toInt32(12LL), toInt32(2LL)))));
          LINE(28,0);
          int tmp3((toInt32(x_substr(toString(v_string), toInt32(4LL), toInt32(2LL)))));
          int tmp4((toInt32(x_substr(toString(v_string), toInt32(6LL), toInt32(2LL)))));
          int tmp5((toInt32(x_substr(toString(v_string), toInt32(0LL), toInt32(4LL)))));
          return x_mktime(tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
        }
      }
    }
    else if (x_is_numeric(v_string)) {
      {
        return (toInt64(v_string));
      }
    }
    else {
      {
        {
          LINE(34,0);
          const Variant &tmp0((x_strtotime(toString(v_string))));
          v_time.assignVal(tmp0);
        }
        if ((equal(v_time, -1LL) || same(v_time, false))) {
          {
            return LINE(37,(x_time()));
          }
        }
        return v_time;
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_make_timestamp(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_make_timestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (f_smarty_make_timestamp(arg0));
  }
}
Variant ifa_smarty_make_timestamp(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("smarty_make_timestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (f_smarty_make_timestamp(arg0));
}
CallInfo ci_smarty_make_timestamp((void*)&i_smarty_make_timestamp, (void*)&ifa_smarty_make_timestamp, 1, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$shared_make_timestamp_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/shared.make_timestamp.php, pm_php$Smarty$libs$plugins$shared_make_timestamp_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss5c2c402b, "smarty_make_timestamp"));
  g->FVF(smarty_make_timestamp) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_mb_str_replace;
/* preface finishes */
/* SRC: Smarty/libs/plugins/shared.mb_str_replace.php line 4 */
Variant f_smarty_mb_str_replace(Variant v_search, Variant v_replace, Variant v_subject, VRefParam rv_count //  = 0LL
) {
  FUNCTION_INJECTION(smarty_mb_str_replace);
  INTERCEPT_INJECTION("smarty_mb_str_replace", (Array(ArrayInit(4).set(0, v_search).set(1, v_replace).set(2, v_subject).setRef(3, rv_count).create())), r);
  Variant &v_count ATTRIBUTE_UNUSED = rv_count;
  Variant v_string;
  Variant v_c;
  Variant v_n;
  Variant v_parts;

  if ((!(x_is_array(v_search)) && x_is_array(v_replace))) {
    {
      return false;
    }
  }
  if (x_is_array(v_subject)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = strongBind(v_subject);
        map2.escalate(true);
        for (MutableArrayIter iter3 = map2.begin(NULL, v_string, null_string, true); iter3.advance();) {
          LOOP_COUNTER_CHECK(1);
          {
            {
              LINE(11,0);
              const Variant &tmp0((f_smarty_mb_str_replace(v_search, v_replace, v_string, ref(v_c))));
              v_string.assignRef(tmp0);
            }
            v_count += v_c;
          }
        }
      }
    }
  }
  else if (x_is_array(v_search)) {
    {
      if (!(x_is_array(v_replace))) {
        {
          {
            LOOP_COUNTER(4);
            Variant map5 = strongBind(v_search);
            map5.escalate(true);
            for (MutableArrayIter iter6 = map5.begin(NULL, v_string, null_string, true); iter6.advance();) {
              LOOP_COUNTER_CHECK(4);
              {
                {
                  LINE(17,0);
                  const Variant &tmp0((f_smarty_mb_str_replace(v_string, v_replace, v_subject, ref(v_c))));
                  v_subject.assignVal(tmp0);
                }
                v_count += v_c;
              }
            }
          }
        }
      }
      else {
        {
          {
            LINE(21,0);
            int tmp0((x_count(v_search)));
            int tmp1((x_count(v_replace)));
            const Variant &tmp2((x_max(2, VarNR(tmp0), Array(array_createvi(1, toVPOD(VarNR(tmp1)))))));
            v_n.assignVal(tmp2);
          }
          LOOP_COUNTER(7);
          {
            while (toBoolean(v_n--)) {
              LOOP_COUNTER_CHECK(7);
              {
                {
                  LINE(23,0);
                  const Variant &tmp0((x_current(ref(v_search))));
                  const Variant &tmp1((x_current(ref(v_replace))));
                  const Variant &tmp2((f_smarty_mb_str_replace(tmp0, tmp1, v_subject, ref(v_c))));
                  v_subject.assignVal(tmp2);
                }
                v_count += v_c;
                LINE(25,(x_next(ref(v_search))));
                LINE(26,(x_next(ref(v_replace))));
              }
            }
          }
        }
      }
    }
  }
  else {
    {
      {
        LINE(30,0);
        const String &tmp0((x_preg_quote(toString(v_search))));
        const Variant &tmp1((x_mb_split(tmp0, toString(v_subject))));
        v_parts.assignVal(tmp1);
      }
      {
        LINE(31,0);
        int tmp0((x_count(v_parts)));
        int64 tmp1(((tmp0 - 1LL)));
        v_count = tmp1;
      }
      {
        LINE(32,0);
        const String &tmp0((x_implode(v_replace, v_parts)));
        v_subject = tmp0;
      }
    }
  }
  return v_subject;
}
namespace hphp_impl_splitter {}
Variant i_smarty_mb_str_replace(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_mb_str_replace", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    VRefParam arg3(count <= 3 ? VRefParamValue(0LL) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (f_smarty_mb_str_replace(arg0, arg1, arg2, arg3));
  }
}
Variant ifa_smarty_mb_str_replace(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_mb_str_replace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  VRefParam arg3(count <= 3 ? VRefParamValue(0LL) : vref(a3));
  return (f_smarty_mb_str_replace(arg0, arg1, arg2, arg3));
}
CallInfo ci_smarty_mb_str_replace((void*)&i_smarty_mb_str_replace, (void*)&ifa_smarty_mb_str_replace, 4, 0, 0x0000000000000008LL);
Variant pm_php$Smarty$libs$plugins$shared_mb_str_replace_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/shared.mb_str_replace.php, pm_php$Smarty$libs$plugins$shared_mb_str_replace_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  {
    bool tmp0;
    {
      LINE(3,0);
      bool tmp1((g->FVF(smarty_mb_str_replace)));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        g->declareFunctionLit(NAMSTR(s_ssd9f9c40a, "smarty_mb_str_replace"));
        g->FVF(smarty_mb_str_replace) = true;
      }
    }
  }
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_variablefilter_htmlspecialchars;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/variablefilter.htmlspecialchars.php line 17 */
String f_smarty_variablefilter_htmlspecialchars(CVarRef v_source, CVarRef v_smarty) {
  FUNCTION_INJECTION_NOMEM(smarty_variablefilter_htmlspecialchars);
  INTERCEPT_INJECTION("smarty_variablefilter_htmlspecialchars", array_createvi(2, toVPOD(v_source), toVPOD(v_smarty)), r);
  return LINE(19,(x_htmlspecialchars(toString(v_source), toInt32(3LL) /* ENT_QUOTES */)));
}
namespace hphp_impl_splitter {}
Variant i_smarty_variablefilter_htmlspecialchars(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_variablefilter_htmlspecialchars", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_variablefilter_htmlspecialchars(arg0, arg1));
  }
}
Variant ifa_smarty_variablefilter_htmlspecialchars(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_variablefilter_htmlspecialchars", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_variablefilter_htmlspecialchars(arg0, arg1));
}
CallInfo ci_smarty_variablefilter_htmlspecialchars((void*)&i_smarty_variablefilter_htmlspecialchars, (void*)&ifa_smarty_variablefilter_htmlspecialchars, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/variablefilter.htmlspecialchars.php, pm_php$Smarty$libs$plugins$variablefilter_htmlspecialchars_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssc88d0fc5, "smarty_variablefilter_htmlspecialchars"));
  g->FVF(smarty_variablefilter_htmlspecialchars) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
