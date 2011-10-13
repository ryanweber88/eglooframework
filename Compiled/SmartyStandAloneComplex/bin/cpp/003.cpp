
#include <php/Smarty/libs/plugins/function.html_image.h>
#include <php/Smarty/libs/plugins/function.html_image.fws.h>
#include <php/Smarty/libs/plugins/function.html_options.h>
#include <php/Smarty/libs/plugins/function.html_options.fws.h>
#include <php/Smarty/libs/plugins/function.html_radios.h>
#include <php/Smarty/libs/plugins/function.html_radios.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/plugins/shared.escape_special_chars.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_smarty_function_html_image;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.html_image.php line 36 */
Variant f_smarty_function_html_image(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_html_image);
  INTERCEPT_INJECTION("smarty_function_html_image", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_alt;
  Variant v_file;
  Variant v_height;
  Variant v_width;
  Variant v_extra;
  Variant v_prefix;
  Variant v_suffix;
  Variant v_path_prefix;
  Variant v_server_vars;
  Variant v_basedir;
  Variant v__key;
  Variant v__val;
  Variant v__image_path;
  Variant v__image_data;
  Variant v_dpi_default;
  Variant v__resize;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_alt; Variant &v_file; Variant &v_height; Variant &v_width; Variant &v_extra; Variant &v_prefix; Variant &v_suffix; Variant &v_path_prefix; Variant &v_server_vars; Variant &v_basedir; Variant &v__key; Variant &v__val; Variant &v__image_path; Variant &v__image_data; Variant &v_dpi_default; Variant &v__resize;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_alt, Variant &r_file, Variant &r_height, Variant &r_width, Variant &r_extra, Variant &r_prefix, Variant &r_suffix, Variant &r_path_prefix, Variant &r_server_vars, Variant &r_basedir, Variant &r__key, Variant &r__val, Variant &r__image_path, Variant &r__image_data, Variant &r_dpi_default, Variant &r__resize) : v_params(r_params), v_template(r_template), v_alt(r_alt), v_file(r_file), v_height(r_height), v_width(r_width), v_extra(r_extra), v_prefix(r_prefix), v_suffix(r_suffix), v_path_prefix(r_path_prefix), v_server_vars(r_server_vars), v_basedir(r_basedir), v__key(r__key), v__val(r__val), v__image_path(r__image_path), v__image_data(r__image_data), v_dpi_default(r_dpi_default), v__resize(r__resize) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 63) {
        case 1:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          break;
        case 3:
          HASH_RETURN_NAMSTR(0x108C48DFD7240583LL, s_ss1860dc37, v__image_path,
                             11);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x4D426A8D33232AC6LL, s_ss259796ad, v_width,
                             5);
          break;
        case 12:
          HASH_RETURN_NAMSTR(0x267CD6FE82184D4CLL, s_ss080b0779, v_height,
                             6);
          break;
        case 15:
          HASH_RETURN_NAMSTR(0x7863294A8F33D14FLL, s_ss8ce7db5b, v_file,
                             4);
          break;
        case 17:
          HASH_RETURN_NAMSTR(0x2CEED4186C108F91LL, s_ss4a52816d, v_dpi_default,
                             11);
          break;
        case 18:
          HASH_RETURN_NAMSTR(0x61ED2AFB707EF852LL, s_ss2bb2f488, v_suffix,
                             6);
          break;
        case 29:
          HASH_RETURN_NAMSTR(0x67C34FD98AD6A61DLL, s_ssfc755d10, v__val,
                             4);
          break;
        case 35:
          HASH_RETURN_NAMSTR(0x7B3750BA3E056D63LL, s_sse7d45899, v_server_vars,
                             11);
          break;
        case 37:
          HASH_RETURN_NAMSTR(0x4C830C5DD8BEA4A5LL, s_ss2a608efd, v_path_prefix,
                             11);
          break;
        case 41:
          HASH_RETURN_NAMSTR(0x350D27E00E5B5E29LL, s_ss92b6f3b8, v_prefix,
                             6);
          break;
        case 42:
          HASH_RETURN_NAMSTR(0x0A61915C5C447AAALL, s_ssca35d9f4, v__resize,
                             7);
          break;
        case 43:
          HASH_RETURN_NAMSTR(0x65BD800C50B62DEBLL, s_ssf41a8f0d, v_basedir,
                             7);
          break;
        case 44:
          HASH_RETURN_NAMSTR(0x2E8390EA2ABA19ACLL, s_ss54173842, v_extra,
                             5);
          break;
        case 48:
          HASH_RETURN_NAMSTR(0x42ECBF6D90C5F130LL, s_ssf5b8471b, v_alt,
                             3);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 51:
          HASH_RETURN_NAMSTR(0x7C6129B931C7B133LL, s_ss15d164f6, v__image_data,
                             11);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_params, v_template, v_alt, v_file, v_height, v_width, v_extra, v_prefix, v_suffix, v_path_prefix, v_server_vars, v_basedir, v__key, v__val, v__image_path, v__image_data, v_dpi_default, v__resize);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(38,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss688c64e5, "shared.escape_special_chars.php")), true, variables, "Smarty/libs/plugins/")));
  v_alt = NAMSTR(s_ss00000000, "");
  v_file = NAMSTR(s_ss00000000, "");
  v_height = NAMSTR(s_ss00000000, "");
  v_width = NAMSTR(s_ss00000000, "");
  v_extra = NAMSTR(s_ss00000000, "");
  v_prefix = NAMSTR(s_ss00000000, "");
  v_suffix = NAMSTR(s_ss00000000, "");
  v_path_prefix = NAMSTR(s_ss00000000, "");
  v_server_vars.assignVal(g->GV(_SERVER));
  {
    Variant tmp0(((isset(v_server_vars, NAMSTR(s_ss9b8b390f, "DOCUMENT_ROOT"), true) ? ((Variant)(LINE(49,(v_server_vars.rvalAt(NAMSTR(s_ss9b8b390f, "DOCUMENT_ROOT"), AccessFlags::Error_Key))))) : ((Variant)(NAMSTR(s_ss00000000, ""))))));
    v_basedir.assignVal(tmp0);
  }
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_extra(512);
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
            hash = switch5.hashForStringSwitch(8674822707452563791LL, 0LL, 0LL, 8674822707452563791LL, 8674822707452563791LL, 32LL, needsOrder);
            switch (((uint64) hash) & 31UL) {
            case_5_h_s4:
            case 5UL:
              if (equal(switch5, (NAMSTR(s_ss2a608efd, "path_prefix")))) goto case_5_4;
              if (UNLIKELY(needsOrder)) goto case_5_h_s5;
            case_5_h_s7:
              if (equal(switch5, (NAMSTR(s_ss8c574e09, "link")))) goto case_5_7;
              if (UNLIKELY(needsOrder)) goto case_5_h_s8;
              goto case_5_9;
            case_5_h_s2:
            case 6UL:
              if (equal(switch5, (NAMSTR(s_ss259796ad, "width")))) goto case_5_2;
              if (UNLIKELY(needsOrder)) goto case_5_h_s3;
            case_5_h_s8:
              if (equal(switch5, (NAMSTR(s_ss3692a594, "href")))) goto case_5_8;
              goto case_5_9;
            case_5_h_s5:
            case 11UL:
              if (equal(switch5, (NAMSTR(s_ssf41a8f0d, "basedir")))) goto case_5_5;
              if (UNLIKELY(needsOrder)) goto case_5_h_s6;
              goto case_5_9;
            case_5_h_s1:
            case 12UL:
              if (equal(switch5, (NAMSTR(s_ss080b0779, "height")))) goto case_5_1;
              if (UNLIKELY(needsOrder)) goto case_5_h_s2;
              goto case_5_9;
            case 15UL:
              if (equal(switch5, (NAMSTR(s_ss8ce7db5b, "file")))) goto case_5_0;
              if (UNLIKELY(needsOrder)) goto case_5_h_s1;
              goto case_5_9;
            case_5_h_s6:
            case 16UL:
              if (equal(switch5, (NAMSTR(s_ssf5b8471b, "alt")))) goto case_5_6;
              if (UNLIKELY(needsOrder)) goto case_5_h_s7;
              goto case_5_9;
            case_5_h_s3:
            case 26UL:
              if (equal(switch5, (NAMSTR(s_ssda305d4f, "dpi")))) goto case_5_3;
              if (UNLIKELY(needsOrder)) goto case_5_h_s4;
              goto case_5_9;
            default: goto case_5_9;
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
            }
          case_5_4:
            {
            }
          case_5_5:
            {
              variables->get(toString(v__key)).assignVal(v__val);
              goto break4;
            }
          case_5_6:
            {
              if (!(x_is_array(v__val))) {
                {
                  {
                    Variant &tmp0((variables->get(toString(v__key))));
                    LINE(63,0);
                    const Variant &tmp1((f_smarty_function_escape_special_chars(v__val)));
                    tmp0.assignVal(tmp1);
                  }
                }
              }
              else {
                {
                  {
                    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                    throw_exception(LINE(65,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss3d4a8cfb, "html_image: extra attribute '"), toString(v__key), NAMSTR(s_ss3233b868, "' cannot be an array"))), NAMVAR(s_svi543f7d14, 1024LL) /* E_USER_NOTICE */), tmp0))));
                  }
                }
              }
              goto break4;
            }
          case_5_7:
            {
            }
          case_5_8:
            {
              v_prefix = concat3(NAMSTR(s_ssd49434fd, "<a href=\""), toString(v__val), NAMSTR(s_ss19e8137c, "\">"));
              v_suffix = NAMSTR(s_ss399990c5, "</a>");
              goto break4;
            }
          case_5_9:
            {
              if (!(x_is_array(v__val))) {
                {
                  {
                    const String &tmp0((toString(v__key)));
                    LINE(77,0);
                    const String &tmp1((toString(f_smarty_function_escape_special_chars(v__val))));
                    tmp_sbuf_v_extra.addWithTaint(" ", 1).addWithTaint(tmp0).addWithTaint("=\"", 2).addWithTaint(tmp1).addWithTaint("\"", 1);
                  }
                }
              }
              else {
                {
                  {
                    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                    throw_exception(LINE(79,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss3d4a8cfb, "html_image: extra attribute '"), toString(v__key), NAMSTR(s_ss3233b868, "' cannot be an array"))), NAMVAR(s_svi543f7d14, 1024LL) /* E_USER_NOTICE */), tmp0))));
                  }
                }
              }
              goto break4;
            }
          break4:;
        }
      }
      concat_assign(v_extra, tmp_sbuf_v_extra.detachWithTaint());
    }
  }
  if (empty(v_file)) {
    {
      LINE(86,(x_trigger_error(NAMSTR(s_ssad4549fd, "html_image: missing 'file' parameter"), toInt32(1024LL) /* E_USER_NOTICE */)));
      return null;
    }
  }
  {
    bool tmp0;
    {
      LINE(90,0);
      const Variant &tmp1((x_substr(toString(v_file), toInt32(0LL), toInt32(1LL))));
      tmp0 = (equal(tmp1, NAMSTR(s_ssb9e13cd6, "/")));
    }
    if (tmp0) {
      {
        v__image_path = concat(toString(v_basedir), toString(v_file));
      }
    }
    else {
      {
        v__image_path.assignVal(v_file);
      }
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (!(isset(v_params, NAMSTR(s_ss259796ad, "width"), true)));
      if (!tmp1) {
        tmp1 = (!(isset(v_params, NAMSTR(s_ss080b0779, "height"), true)));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            Silencer tmp1(true);
            Variant tmp2((LINE(97,(x_getimagesize(toString(v__image_path))))));
            tmp1.disable();
            tmp0 = (!(toBoolean(v__image_data.assignVal(tmp2))));
          }
          if (tmp0) {
            {
              {
                bool tmp0;
                {
                  LINE(98,0);
                  bool tmp1((x_file_exists(toString(v__image_path))));
                  tmp0 = (!(tmp1));
                }
                if (tmp0) {
                  {
                    LINE(99,(x_trigger_error(concat3(NAMSTR(s_ssbd445f23, "html_image: unable to find '"), toString(v__image_path), NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */)));
                    return null;
                  }
                }
                else {
                  bool tmp0;
                  {
                    LINE(101,0);
                    bool tmp1((x_is_readable(toString(v__image_path))));
                    tmp0 = (!(tmp1));
                  }
                  if (tmp0) {
                    {
                      LINE(102,(x_trigger_error(concat3(NAMSTR(s_ss23695a1b, "html_image: unable to read '"), toString(v__image_path), NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */)));
                      return null;
                    }
                  }
                  else {
                    {
                      LINE(105,(x_trigger_error(concat3(NAMSTR(s_ss90f8d329, "html_image: '"), toString(v__image_path), NAMSTR(s_ssc1ff4797, "' is not a valid image file")), toInt32(1024LL) /* E_USER_NOTICE */)));
                      return null;
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
            tmp0 = (LINE(109,(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), empty_string));
          }
          if (tmp0) {
            {
              {
                bool tmp0;
                {
                  LINE(110,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
                  mcp1.methodCall((obj1), NAMSTR(s_ss7bdba2dc, "isTrustedResourceDir"), 0x51DC7D49C71538DBLL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  tmp0 = (!(toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, v__image_path))));
                }
                if (tmp0) {
                  {
                    return null;
                  }
                }
              }
            }
          }
        }
        {
          bool tmp0;
          {
            tmp0 = (!(isset(v_params, NAMSTR(s_ss259796ad, "width"), true)));
          }
          if (tmp0) {
            {
              {
                LINE(116,0);
                const Variant &tmp0((v__image_data.rvalAt(0LL, AccessFlags::Error)));
                v_width.assignVal(tmp0);
              }
            }
          }
        }
        {
          bool tmp0;
          {
            tmp0 = (!(isset(v_params, NAMSTR(s_ss080b0779, "height"), true)));
          }
          if (tmp0) {
            {
              {
                LINE(119,0);
                const Variant &tmp0((v__image_data.rvalAt(1LL, AccessFlags::Error)));
                v_height.assignVal(tmp0);
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
      tmp0 = (isset(v_params, NAMSTR(s_ssda305d4f, "dpi"), true));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(124,0);
            const String &tmp1((toString(v_server_vars.rvalAt(NAMSTR(s_ss6471f147, "HTTP_USER_AGENT"), AccessFlags::Error_Key))));
            tmp0 = (toBoolean(x_strstr(tmp1, NAMVAR(s_svs97414a21, "Mac"))));
          }
          if (tmp0) {
            {
              v_dpi_default = 72LL;
            }
          }
          else {
            {
              v_dpi_default = 96LL;
            }
          }
        }
        {
          LINE(129,0);
          const Variant &tmp0((v_params.rvalAt(NAMSTR(s_ssda305d4f, "dpi"), AccessFlags::Error_Key)));
          const Numeric &tmp1((divide(v_dpi_default, tmp0)));
          v__resize.assignVal(tmp1);
        }
        {
          LINE(130,0);
          double tmp0((x_round((v_width * v__resize))));
          v_width = tmp0;
        }
        {
          LINE(131,0);
          double tmp0((x_round((v_height * v__resize))));
          v_height = tmp0;
        }
      }
    }
  }
  return StringBuffer().addWithTaint(toString(v_prefix)).addWithTaint("<img src=\"", 10).addWithTaint(toString(v_path_prefix)).addWithTaint(toString(v_file)).addWithTaint("\" alt=\"", 7).addWithTaint(toString(v_alt)).addWithTaint("\" width=\"", 9).addWithTaint(toString(v_width)).addWithTaint("\" height=\"", 10).addWithTaint(toString(v_height)).addWithTaint("\"", 1).addWithTaint(toString(v_extra)).addWithTaint(" />", 3).addWithTaint(toString(v_suffix)).detachWithTaint();
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_html_image(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_image", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_image(arg0, arg1));
  }
}
Variant ifa_smarty_function_html_image(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_image", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_html_image(arg0, arg1));
}
CallInfo ci_smarty_function_html_image((void*)&i_smarty_function_html_image, (void*)&ifa_smarty_function_html_image, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_html_image_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.html_image.php, pm_php$Smarty$libs$plugins$function_html_image_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss5217de1e, "smarty_function_html_image"));
  g->FVF(smarty_function_html_image) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_html_options_optoutput;
extern CallInfo ci_smarty_function_html_options_optgroup;
extern CallInfo ci_smarty_function_html_options;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.html_options.php line 104 */
String f_smarty_function_html_options_optoutput(CVarRef v_key, CVarRef v_value, CVarRef v_selected, CVarRef v_id, CVarRef v_class, VRefParam rv_idx) {
  FUNCTION_INJECTION(smarty_function_html_options_optoutput);
  INTERCEPT_INJECTION("smarty_function_html_options_optoutput", (Array(ArrayInit(6).set(0, v_key).set(1, v_value).set(2, v_selected).set(3, v_id).set(4, v_class).setRef(5, rv_idx).create())), r);
  Variant &v_idx ATTRIBUTE_UNUSED = rv_idx;
  String v__html_result;
  Variant v__html_class;
  Variant v__html_id;
  Variant v__idx;

  if (!(x_is_array(v_value))) {
    {
      {
        LINE(108,0);
        const String &tmp0((toString(f_smarty_function_escape_special_chars(v_key))));
        v__html_result = concat3(NAMSTR(s_ss03b8f7ba, "<option value=\""), tmp0, NAMSTR(s_ss7e5fc106, "\""));
      }
      if (LINE(109,(x_in_array(VarNR((toString(v_key))), v_selected)))) {
        concat_assign(v__html_result, NAMSTR(s_ss8e541b43, " selected=\"selected\""));
      }
      v__html_class.assignVal((!(empty(v_class)) ? ((Variant)(concat3(NAMSTR(s_ss023a4106, " class=\""), toString(v_class), NAMSTR(s_ssa52a1509, " option\"")))) : ((Variant)(NAMSTR(s_ss00000000, "")))));
      v__html_id.assignVal((!(empty(v_id)) ? ((Variant)(concat5(NAMSTR(s_ssd3934b3f, " id=\""), toString(v_id), NAMSTR(s_ss935fd125, "-"), toString(v_idx), NAMSTR(s_ss7e5fc106, "\"")))) : ((Variant)(NAMSTR(s_ss00000000, "")))));
      {
        const String &tmp0((toString(v__html_class)));
        const String &tmp1((toString(v__html_id)));
        LINE(113,0);
        const String &tmp2((toString(f_smarty_function_escape_special_chars(v_value))));
        concat_assign(v__html_result, concat5(tmp0, tmp1, NAMSTR(s_ss9767c666, ">"), tmp2, NAMSTR(s_sscf20ad85, "</option>\n")));
      }
      v_idx++;
    }
  }
  else {
    {
      v__idx = 0LL;
      {
        LINE(117,0);
        const String &tmp0((f_smarty_function_html_options_optgroup(v_key, v_value, v_selected, VarNR(concat3(toString(v_id), NAMSTR(s_ss935fd125, "-"), toString(v_idx))), v_class, ref(v__idx))));
        v__html_result = tmp0;
      }
      v_idx++;
    }
  }
  return v__html_result;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/plugins/function.html_options.php line 123 */
String f_smarty_function_html_options_optgroup(Variant v_key, CVarRef v_values, CVarRef v_selected, CVarRef v_id, CVarRef v_class, VRefParam rv_idx) {
  FUNCTION_INJECTION(smarty_function_html_options_optgroup);
  INTERCEPT_INJECTION("smarty_function_html_options_optgroup", (Array(ArrayInit(6).set(0, v_key).set(1, v_values).set(2, v_selected).set(3, v_id).set(4, v_class).setRef(5, rv_idx).create())), r);
  Variant &v_idx ATTRIBUTE_UNUSED = rv_idx;
  String v_optgroup_html;
  Variant v_value;

  {
    LINE(125,0);
    const String &tmp0((toString(f_smarty_function_escape_special_chars(v_key))));
    v_optgroup_html = concat3(NAMSTR(s_ssb548560e, "<optgroup label=\""), tmp0, NAMSTR(s_ssc4c4e84f, "\">\n"));
  }
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_optgroup_html(512);
      for (ArrayIter iter3 = v_values.begin(null_string, true); !iter3.end(); ++iter3) {
        LOOP_COUNTER_CHECK(1);
        iter3.second(v_value);
        v_key.assignVal(iter3.first());
        {
          {
            LINE(127,0);
            const String &tmp0((f_smarty_function_html_options_optoutput(v_key, v_value, v_selected, v_id, v_class, ref(v_idx))));
            tmp_sbuf_v_optgroup_html.addWithTaint(tmp0);
          }
        }
      }
      concat_assign(v_optgroup_html, tmp_sbuf_v_optgroup_html.detachWithTaint());
    }
  }
  concat_assign(v_optgroup_html, NAMSTR(s_ss7c3ade33, "</optgroup>\n"));
  return v_optgroup_html;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/plugins/function.html_options.php line 31 */
Variant f_smarty_function_html_options(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_html_options);
  INTERCEPT_INJECTION("smarty_function_html_options", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_name;
  Variant v_values;
  Variant v_options;
  Variant v_selected;
  Variant v_output;
  Variant v_id;
  Variant v_class;
  Variant v_extra;
  Variant v_options_extra;
  Variant v__key;
  Variant v__val;
  Variant v__html_result;
  Variant v__idx;
  Variant v__i;
  Variant v__html_class;
  Variant v__html_id;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_name; Variant &v_values; Variant &v_options; Variant &v_selected; Variant &v_output; Variant &v_id; Variant &v_class; Variant &v_extra; Variant &v_options_extra; Variant &v__key; Variant &v__val; Variant &v__html_result; Variant &v__idx; Variant &v__i; Variant &v__html_class; Variant &v__html_id;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_name, Variant &r_values, Variant &r_options, Variant &r_selected, Variant &r_output, Variant &r_id, Variant &r_class, Variant &r_extra, Variant &r_options_extra, Variant &r__key, Variant &r__val, Variant &r__html_result, Variant &r__idx, Variant &r__i, Variant &r__html_class, Variant &r__html_id) : v_params(r_params), v_template(r_template), v_name(r_name), v_values(r_values), v_options(r_options), v_selected(r_selected), v_output(r_output), v_id(r_id), v_class(r_class), v_extra(r_extra), v_options_extra(r_options_extra), v__key(r__key), v__val(r__val), v__html_result(r__html_result), v__idx(r__idx), v__i(r__i), v__html_class(r__html_class), v__html_id(r__html_id) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 63) {
        case 1:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          break;
        case 10:
          HASH_RETURN_NAMSTR(0x31225A478D38068ALL, s_ss195bbf36, v__html_result,
                             12);
          break;
        case 16:
          HASH_RETURN_NAMSTR(0x2E3A246D1F74C210LL, s_ssc82dbd12, v_class,
                             5);
          break;
        case 20:
          HASH_RETURN_NAMSTR(0x4A0229D270C5C0D4LL, s_ssc4522be2, v_id,
                             2);
          break;
        case 22:
          HASH_RETURN_NAMSTR(0x44517B452C6D3696LL, s_ss64401c95, v__idx,
                             4);
          break;
        case 23:
          HASH_RETURN_NAMSTR(0x5F3755DE25890417LL, s_ss4b84081a, v__html_class,
                             11);
          break;
        case 28:
          HASH_RETURN_NAMSTR(0x3884D19E4EC51D5CLL, s_ssb86d1574, v_values,
                             6);
          break;
        case 29:
          HASH_RETURN_NAMSTR(0x67C34FD98AD6A61DLL, s_ssfc755d10, v__val,
                             4);
          break;
        case 42:
          HASH_RETURN_NAMSTR(0x4A51F39CF3D30A6ALL, s_ssaa45abe7, v_selected,
                             8);
          HASH_RETURN_NAMSTR(0x34FDCD19341494EALL, s_ss4a18b694, v__i,
                             2);
          break;
        case 44:
          HASH_RETURN_NAMSTR(0x2E8390EA2ABA19ACLL, s_ss54173842, v_extra,
                             5);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 50:
          HASH_RETURN_NAMSTR(0x5655B4FF77E35232LL, s_ssdc3cbddc, v_name,
                             4);
          break;
        case 56:
          HASH_RETURN_NAMSTR(0x284FA7FC0128B2F8LL, s_ss60dca1ea, v_options,
                             7);
          break;
        case 58:
          HASH_RETURN_NAMSTR(0x2D7DD72CB6DC2CBALL, s_ss49073dea, v__html_id,
                             8);
          break;
        case 61:
          HASH_RETURN_NAMSTR(0x68B9C9617418637DLL, s_ss76c27120, v_options_extra,
                             13);
          break;
        case 63:
          HASH_RETURN_NAMSTR(0x07B89E83B77C677FLL, s_ss7a5dbb24, v_output,
                             6);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_params, v_template, v_name, v_values, v_options, v_selected, v_output, v_id, v_class, v_extra, v_options_extra, v__key, v__val, v__html_result, v__idx, v__i, v__html_class, v__html_id);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(33,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss688c64e5, "shared.escape_special_chars.php")), true, variables, "Smarty/libs/plugins/")));
  setNull(v_name);
  setNull(v_values);
  setNull(v_options);
  v_selected = s_sa00000000;
  setNull(v_output);
  setNull(v_id);
  setNull(v_class);
  v_extra = NAMSTR(s_ss00000000, "");
  v_options_extra = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_extra(512);
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
            hash = switch5.hashForStringSwitch(6221077469603254834LL, 0LL, 0LL, 6221077469603254834LL, 6221077469603254834LL, 16LL, needsOrder);
            switch (((uint64) hash) & 15UL) {
            case_5_h_s1:
            case 0UL:
              if (equal(switch5, (NAMSTR(s_ssc82dbd12, "class")))) goto case_5_1;
              if (UNLIKELY(needsOrder)) goto case_5_h_s2;
              goto case_5_7;
            case 2UL:
              if (equal(switch5, (NAMSTR(s_ssdc3cbddc, "name")))) goto case_5_0;
              if (UNLIKELY(needsOrder)) goto case_5_h_s1;
              goto case_5_7;
            case_5_h_s2:
            case 4UL:
              if (equal(switch5, (NAMSTR(s_ssc4522be2, "id")))) goto case_5_2;
              if (UNLIKELY(needsOrder)) goto case_5_h_s3;
              goto case_5_7;
            case_5_h_s3:
            case 8UL:
              if (equal(switch5, (NAMSTR(s_ss60dca1ea, "options")))) goto case_5_3;
              if (UNLIKELY(needsOrder)) goto case_5_h_s4;
              goto case_5_7;
            case_5_h_s6:
            case 10UL:
              if (equal(switch5, (NAMSTR(s_ssaa45abe7, "selected")))) goto case_5_6;
              goto case_5_7;
            case_5_h_s4:
            case 12UL:
              if (equal(switch5, (NAMSTR(s_ssb86d1574, "values")))) goto case_5_4;
              if (UNLIKELY(needsOrder)) goto case_5_h_s5;
              goto case_5_7;
            case_5_h_s5:
            case 15UL:
              if (equal(switch5, (NAMSTR(s_ss7a5dbb24, "output")))) goto case_5_5;
              if (UNLIKELY(needsOrder)) goto case_5_h_s6;
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
              variables->get(toString(v__key)) = (toString(v__val));
              goto break4;
            }
          case_5_3:
            {
              variables->get(toString(v__key)) = (toArray(v__val));
              goto break4;
            }
          case_5_4:
            {
            }
          case_5_5:
            {
              {
                Variant &tmp0((variables->get(toString(v__key))));
                LINE(60,0);
                const Variant &tmp1((x_array_values(VarNR((toArray(v__val))))));
                tmp0.assignVal(tmp1);
              }
              goto break4;
            }
          case_5_6:
            {
              {
                Variant &tmp0((variables->get(toString(v__key))));
                LINE(64,0);
                const Variant &tmp1((x_array_values(VarNR((toArray(v__val))))));
                const Variant &tmp2((x_array_map(2, NAMVAR(s_svs2890e8bd, "strval"), tmp1)));
                tmp0.assignVal(tmp2);
              }
              goto break4;
            }
          case_5_7:
            {
              if (!(x_is_array(v__val))) {
                {
                  {
                    const String &tmp0((toString(v__key)));
                    LINE(69,0);
                    const String &tmp1((toString(f_smarty_function_escape_special_chars(v__val))));
                    tmp_sbuf_v_extra.addWithTaint(" ", 1).addWithTaint(tmp0).addWithTaint("=\"", 2).addWithTaint(tmp1).addWithTaint("\"", 1);
                  }
                }
              }
              else {
                {
                  LINE(71,(x_trigger_error(concat3(NAMSTR(s_ss1108ead5, "html_options: extra attribute '"), toString(v__key), NAMSTR(s_ss3233b868, "' cannot be an array")), toInt32(1024LL) /* E_USER_NOTICE */)));
                }
              }
              goto break4;
            }
          break4:;
        }
      }
      concat_assign(v_extra, tmp_sbuf_v_extra.detachWithTaint());
    }
  }
  if ((!(isset(v_options)) && !(isset(v_values)))) {
    return NAMSTR(s_ss00000000, "");
  }
  v__html_result = NAMSTR(s_ss00000000, "");
  v__idx = 0LL;
  if (isset(v_options)) {
    {
      {
        LOOP_COUNTER(6);
        {
          StringBuffer tmp_sbuf_v__html_result(512);
          for (ArrayIter iter8 = v_options.begin(null_string, true); !iter8.end(); ++iter8) {
            LOOP_COUNTER_CHECK(6);
            iter8.second(v__val);
            v__key.assignVal(iter8.first());
            {
              {
                LINE(86,0);
                const String &tmp0((f_smarty_function_html_options_optoutput(v__key, v__val, v_selected, v_id, v_class, ref(v__idx))));
                tmp_sbuf_v__html_result.addWithTaint(tmp0);
              }
            }
          }
          concat_assign(v__html_result, tmp_sbuf_v__html_result.detachWithTaint());
        }
      }
    }
  }
  else {
    {
      {
        LOOP_COUNTER(9);
        {
          StringBuffer tmp_sbuf_v__html_result(512);
          for (ArrayIter iter11 = v_values.begin(null_string, true); !iter11.end(); ++iter11) {
            LOOP_COUNTER_CHECK(9);
            iter11.second(v__key);
            v__i.assignVal(iter11.first());
            {
              {
                Variant tmp0(((isset(v_output, v__i) ? ((Variant)(LINE(90,(v_output.rvalAt(v__i, AccessFlags::Error))))) : ((Variant)(NAMSTR(s_ss00000000, ""))))));
                v__val.assignVal(tmp0);
              }
              {
                LINE(91,0);
                const String &tmp0((f_smarty_function_html_options_optoutput(v__key, v__val, v_selected, v_id, v_class, ref(v__idx))));
                tmp_sbuf_v__html_result.addWithTaint(tmp0);
              }
            }
          }
          concat_assign(v__html_result, tmp_sbuf_v__html_result.detachWithTaint());
        }
      }
    }
  }
  if (!(empty(v_name))) {
    {
      v__html_class.assignVal((!(empty(v_class)) ? ((Variant)(concat3(NAMSTR(s_ss023a4106, " class=\""), toString(v_class), NAMSTR(s_ss7e5fc106, "\"")))) : ((Variant)(NAMSTR(s_ss00000000, "")))));
      v__html_id.assignVal((!(empty(v_id)) ? ((Variant)(concat3(NAMSTR(s_ssd3934b3f, " id=\""), toString(v_id), NAMSTR(s_ss7e5fc106, "\"")))) : ((Variant)(NAMSTR(s_ss00000000, "")))));
      v__html_result = StringBuffer().addWithTaint("<select name=\"", 14).addWithTaint(toString(v_name)).addWithTaint("\"", 1).addWithTaint(toString(v__html_class)).addWithTaint(toString(v__html_id)).addWithTaint(toString(v_extra)).addWithTaint(">\n", 2).addWithTaint(toString(v__html_result)).addWithTaint("</select>\n", 10).detachWithTaint();
    }
  }
  return v__html_result;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_html_options_optoutput(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 6)) throw_missing_arguments("smarty_function_html_options_optoutput", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(UNLIKELY(count <= 4) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    VRefParam arg5(UNLIKELY(count <= 5) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_options_optoutput(arg0, arg1, arg2, arg3, arg4, arg5));
  }
}
Variant ifa_smarty_function_html_options_optoutput(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 6)) throw_missing_arguments("smarty_function_html_options_optoutput", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  VRefParam arg5(UNLIKELY(count <= 5) ? (VRefParamValue()) : vref(a5));
  return (f_smarty_function_html_options_optoutput(arg0, arg1, arg2, arg3, arg4, arg5));
}
Variant i_smarty_function_html_options_optgroup(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 6)) throw_missing_arguments("smarty_function_html_options_optgroup", count+1);
  const_cast<Array&>(params).escalate(true);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(UNLIKELY(count <= 4) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    VRefParam arg5(UNLIKELY(count <= 5) ? (VRefParamValue()) : vref(ad->getValueRef(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_options_optgroup(arg0, arg1, arg2, arg3, arg4, arg5));
  }
}
Variant ifa_smarty_function_html_options_optgroup(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 6)) throw_missing_arguments("smarty_function_html_options_optgroup", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  VRefParam arg5(UNLIKELY(count <= 5) ? (VRefParamValue()) : vref(a5));
  return (f_smarty_function_html_options_optgroup(arg0, arg1, arg2, arg3, arg4, arg5));
}
Variant i_smarty_function_html_options(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_options", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_options(arg0, arg1));
  }
}
Variant ifa_smarty_function_html_options(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_options", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_html_options(arg0, arg1));
}
CallInfo ci_smarty_function_html_options_optoutput((void*)&i_smarty_function_html_options_optoutput, (void*)&ifa_smarty_function_html_options_optoutput, 6, 0, 0x0000000000000020LL);
CallInfo ci_smarty_function_html_options_optgroup((void*)&i_smarty_function_html_options_optgroup, (void*)&ifa_smarty_function_html_options_optgroup, 6, 0, 0x0000000000000020LL);
CallInfo ci_smarty_function_html_options((void*)&i_smarty_function_html_options, (void*)&ifa_smarty_function_html_options, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_html_options_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.html_options.php, pm_php$Smarty$libs$plugins$function_html_options_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss06e9d14a, "smarty_function_html_options"));
  g->FVF(smarty_function_html_options) = true;
  g->declareFunctionLit(NAMSTR(s_ssd8147f64, "smarty_function_html_options_optoutput"));
  g->FVF(smarty_function_html_options_optoutput) = true;
  g->declareFunctionLit(NAMSTR(s_ssd6052de7, "smarty_function_html_options_optgroup"));
  g->FVF(smarty_function_html_options_optgroup) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_html_radios_output;
extern CallInfo ci_smarty_function_html_radios;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.html_radios.php line 127 */
String f_smarty_function_html_radios_output(CVarRef v_name, CVarRef v_value, CVarRef v_output, CVarRef v_selected, CVarRef v_extra, CVarRef v_separator, CVarRef v_labels, CVarRef v_label_ids) {
  FUNCTION_INJECTION(smarty_function_html_radios_output);
  INTERCEPT_INJECTION("smarty_function_html_radios_output", array_createvi(8, toVPOD(v_name), toVPOD(v_value), toVPOD(v_output), toVPOD(v_selected), toVPOD(v_extra), toVPOD(v_separator), toVPOD(v_labels), toVPOD(v_label_ids)), r);
  String v__output;
  Variant v__id;

  v__output = NAMSTR(s_ss00000000, "");
  if (toBoolean(v_labels)) {
    {
      if (toBoolean(v_label_ids)) {
        {
          {
            LINE(132,0);
            const Variant &tmp0((x_preg_replace(NAMVAR(s_svsdeda4795, "![^\\w\\-\\.]!"), NAMVAR(s_svs7f06ffcd, "_"), VarNR(concat3(toString(v_name), NAMSTR(s_ss7f06ffcd, "_"), toString(v_value))))));
            const Variant &tmp1((f_smarty_function_escape_special_chars(tmp0)));
            v__id.assignVal(tmp1);
          }
          concat_assign(v__output, concat3(NAMSTR(s_ssf0aea90f, "<label for=\""), toString(v__id), NAMSTR(s_ss19e8137c, "\">")));
        }
      }
      else {
        {
          concat_assign(v__output, NAMSTR(s_ss5eac0253, "<label>"));
        }
      }
    }
  }
  {
    LINE(139,0);
    const String &tmp0((toString(f_smarty_function_escape_special_chars(v_name))));
    LINE(140,0);
    const String &tmp1((toString(f_smarty_function_escape_special_chars(v_value))));
    concat_assign(v__output, concat5(NAMSTR(s_ss622d25e4, "<input type=\"radio\" name=\""), tmp0, NAMSTR(s_ss140e4c45, "\" value=\""), tmp1, NAMSTR(s_ss7e5fc106, "\"")));
  }
  if ((toBoolean(v_labels) && toBoolean(v_label_ids))) {
    concat_assign(v__output, concat3(NAMSTR(s_ssd3934b3f, " id=\""), toString(v__id), NAMSTR(s_ss7e5fc106, "\"")));
  }
  if (equal((toString(v_value)), v_selected)) {
    {
      concat_assign(v__output, NAMSTR(s_ss8f045511, " checked=\"checked\""));
    }
  }
  concat_assign(v__output, concat3(toString(v_extra), NAMSTR(s_ssc4cb6ecb, " />"), toString(v_output)));
  if (toBoolean(v_labels)) {
    concat_assign(v__output, NAMSTR(s_ss462714a8, "</label>"));
  }
  concat_assign(v__output, toString(v_separator));
  return v__output;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/plugins/function.html_radios.php line 42 */
Variant f_smarty_function_html_radios(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_html_radios);
  INTERCEPT_INJECTION("smarty_function_html_radios", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_name;
  Variant v_values;
  Variant v_options;
  Variant v_selected;
  Variant v_separator;
  Variant v_labels;
  Variant v_label_ids;
  Variant v_output;
  Variant v_extra;
  Variant v__key;
  Variant v__val;
  Variant v__html_result;
  Variant v__i;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_name; Variant &v_values; Variant &v_options; Variant &v_selected; Variant &v_separator; Variant &v_labels; Variant &v_label_ids; Variant &v_output; Variant &v_extra; Variant &v__key; Variant &v__val; Variant &v__html_result; Variant &v__i;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_name, Variant &r_values, Variant &r_options, Variant &r_selected, Variant &r_separator, Variant &r_labels, Variant &r_label_ids, Variant &r_output, Variant &r_extra, Variant &r__key, Variant &r__val, Variant &r__html_result, Variant &r__i) : v_params(r_params), v_template(r_template), v_name(r_name), v_values(r_values), v_options(r_options), v_selected(r_selected), v_separator(r_separator), v_labels(r_labels), v_label_ids(r_label_ids), v_output(r_output), v_extra(r_extra), v__key(r__key), v__val(r__val), v__html_result(r__html_result), v__i(r__i) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 31) {
        case 1:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          break;
        case 2:
          HASH_RETURN_NAMSTR(0x0B1F16E968E4F702LL, s_ssf40f832e, v_labels,
                             6);
          break;
        case 10:
          HASH_RETURN_NAMSTR(0x4A51F39CF3D30A6ALL, s_ssaa45abe7, v_selected,
                             8);
          HASH_RETURN_NAMSTR(0x31225A478D38068ALL, s_ss195bbf36, v__html_result,
                             12);
          HASH_RETURN_NAMSTR(0x34FDCD19341494EALL, s_ss4a18b694, v__i,
                             2);
          break;
        case 12:
          HASH_RETURN_NAMSTR(0x2E8390EA2ABA19ACLL, s_ss54173842, v_extra,
                             5);
          break;
        case 17:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 18:
          HASH_RETURN_NAMSTR(0x5655B4FF77E35232LL, s_ssdc3cbddc, v_name,
                             4);
          break;
        case 19:
          HASH_RETURN_NAMSTR(0x5956FE61A1A893F3LL, s_ss794d335c, v_label_ids,
                             9);
          break;
        case 20:
          HASH_RETURN_NAMSTR(0x664CF5EEBD30F014LL, s_ss09a18578, v_separator,
                             9);
          break;
        case 24:
          HASH_RETURN_NAMSTR(0x284FA7FC0128B2F8LL, s_ss60dca1ea, v_options,
                             7);
          break;
        case 28:
          HASH_RETURN_NAMSTR(0x3884D19E4EC51D5CLL, s_ssb86d1574, v_values,
                             6);
          break;
        case 29:
          HASH_RETURN_NAMSTR(0x67C34FD98AD6A61DLL, s_ssfc755d10, v__val,
                             4);
          break;
        case 31:
          HASH_RETURN_NAMSTR(0x07B89E83B77C677FLL, s_ss7a5dbb24, v_output,
                             6);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_params, v_template, v_name, v_values, v_options, v_selected, v_separator, v_labels, v_label_ids, v_output, v_extra, v__key, v__val, v__html_result, v__i);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(44,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss688c64e5, "shared.escape_special_chars.php")), true, variables, "Smarty/libs/plugins/")));
  v_name = NAMSTR(s_ss4cf8191f, "radio");
  setNull(v_values);
  setNull(v_options);
  setNull(v_selected);
  v_separator = NAMSTR(s_ss00000000, "");
  v_labels = true;
  v_label_ids = false;
  setNull(v_output);
  v_extra = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_extra(512);
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
            hash = switch5.hashForStringSwitch(6221077469603254834LL, 0LL, 0LL, 6221077469603254834LL, 6221077469603254834LL, 32LL, needsOrder);
            switch (((uint64) hash) & 31UL) {
            case_5_h_s4:
            case 2UL:
              if (equal(switch5, (NAMSTR(s_ssf40f832e, "labels")))) goto case_5_4;
              if (UNLIKELY(needsOrder)) goto case_5_h_s5;
              goto case_5_11;
            case_5_h_s2:
            case 7UL:
              if (equal(switch5, (NAMSTR(s_ss7bdea2f6, "checked")))) goto case_5_2;
              if (UNLIKELY(needsOrder)) goto case_5_h_s3;
              goto case_5_11;
            case_5_h_s3:
            case 10UL:
              if (equal(switch5, (NAMSTR(s_ssaa45abe7, "selected")))) goto case_5_3;
              if (UNLIKELY(needsOrder)) goto case_5_h_s4;
              goto case_5_11;
            case 18UL:
              if (equal(switch5, (NAMSTR(s_ssdc3cbddc, "name")))) goto case_5_0;
              if (UNLIKELY(needsOrder)) goto case_5_h_s1;
              goto case_5_11;
            case_5_h_s5:
            case 19UL:
              if (equal(switch5, (NAMSTR(s_ss794d335c, "label_ids")))) goto case_5_5;
              if (UNLIKELY(needsOrder)) goto case_5_h_s6;
              goto case_5_11;
            case_5_h_s1:
            case 20UL:
              if (equal(switch5, (NAMSTR(s_ss09a18578, "separator")))) goto case_5_1;
              if (UNLIKELY(needsOrder)) goto case_5_h_s2;
            case_5_h_s10:
              if (equal(switch5, (NAMSTR(s_ssba4e7712, "assign")))) goto case_5_10;
              goto case_5_11;
            case_5_h_s6:
            case 24UL:
              if (equal(switch5, (NAMSTR(s_ss60dca1ea, "options")))) goto case_5_6;
              if (UNLIKELY(needsOrder)) goto case_5_h_s7;
              goto case_5_11;
            case_5_h_s9:
            case 27UL:
              if (equal(switch5, (NAMSTR(s_ss1d91673a, "radios")))) goto case_5_9;
              if (UNLIKELY(needsOrder)) goto case_5_h_s10;
              goto case_5_11;
            case_5_h_s7:
            case 28UL:
              if (equal(switch5, (NAMSTR(s_ssb86d1574, "values")))) goto case_5_7;
              if (UNLIKELY(needsOrder)) goto case_5_h_s8;
              goto case_5_11;
            case_5_h_s8:
            case 31UL:
              if (equal(switch5, (NAMSTR(s_ss7a5dbb24, "output")))) goto case_5_8;
              if (UNLIKELY(needsOrder)) goto case_5_h_s9;
              goto case_5_11;
            default: goto case_5_11;
            }
          }
          case_5_0:
            {
            }
          case_5_1:
            {
              variables->get(toString(v__key)) = (toString(v__val));
              goto break4;
            }
          case_5_2:
            {
            }
          case_5_3:
            {
              if (x_is_array(v__val)) {
                {
                  LINE(66,(x_trigger_error(concat3(NAMSTR(s_ssd998265c, "html_radios: the \""), toString(v__key), NAMSTR(s_ss0ef625c5, "\" attribute cannot be an array")), toInt32(512LL) /* E_USER_WARNING */)));
                }
              }
              else {
                {
                  v_selected = (toString(v__val));
                }
              }
              goto break4;
            }
          case_5_4:
            {
            }
          case_5_5:
            {
              variables->get(toString(v__key)) = (toBoolean(v__val));
              goto break4;
            }
          case_5_6:
            {
              variables->get(toString(v__key)) = (toArray(v__val));
              goto break4;
            }
          case_5_7:
            {
            }
          case_5_8:
            {
              {
                Variant &tmp0((variables->get(toString(v__key))));
                LINE(83,0);
                const Variant &tmp1((x_array_values(VarNR((toArray(v__val))))));
                tmp0.assignVal(tmp1);
              }
              goto break4;
            }
          case_5_9:
            {
              LINE(87,(x_trigger_error(NAMSTR(s_ss4087e487, "html_radios: the use of the \"radios\" attribute is deprecated, use \"options\" instead"), toInt32(512LL) /* E_USER_WARNING */)));
              v_options = (toArray(v__val));
              goto break4;
            }
          case_5_10:
            {
              goto break4;
            }
          case_5_11:
            {
              if (!(x_is_array(v__val))) {
                {
                  {
                    const String &tmp0((toString(v__key)));
                    LINE(96,0);
                    const String &tmp1((toString(f_smarty_function_escape_special_chars(v__val))));
                    tmp_sbuf_v_extra.addWithTaint(" ", 1).addWithTaint(tmp0).addWithTaint("=\"", 2).addWithTaint(tmp1).addWithTaint("\"", 1);
                  }
                }
              }
              else {
                {
                  LINE(98,(x_trigger_error(concat3(NAMSTR(s_ss87ecf4ba, "html_radios: extra attribute '"), toString(v__key), NAMSTR(s_ss3233b868, "' cannot be an array")), toInt32(1024LL) /* E_USER_NOTICE */)));
                }
              }
              goto break4;
            }
          break4:;
        }
      }
      concat_assign(v_extra, tmp_sbuf_v_extra.detachWithTaint());
    }
  }
  if ((!(isset(v_options)) && !(isset(v_values)))) {
    return NAMSTR(s_ss00000000, "");
  }
  v__html_result = s_sa00000000;
  if (isset(v_options)) {
    {
      {
        LOOP_COUNTER(6);
        for (ArrayIter iter8 = v_options.begin(null_string, true); !iter8.end(); ++iter8) {
          LOOP_COUNTER_CHECK(6);
          iter8.second(v__val);
          v__key.assignVal(iter8.first());
          {
            LINE(112,0);
            const String &tmp0((f_smarty_function_html_radios_output(v_name, v__key, v__val, v_selected, v_extra, v_separator, v_labels, v_label_ids)));
            v__html_result.append((VarNR(tmp0)));
          }
        }
      }
    }
  }
  else {
    {
      {
        LOOP_COUNTER(9);
        for (ArrayIter iter11 = v_values.begin(null_string, true); !iter11.end(); ++iter11) {
          LOOP_COUNTER_CHECK(9);
          iter11.second(v__key);
          v__i.assignVal(iter11.first());
          {
            {
              Variant tmp0(((isset(v_output, v__i) ? ((Variant)(LINE(115,(v_output.rvalAt(v__i, AccessFlags::Error))))) : ((Variant)(NAMSTR(s_ss00000000, ""))))));
              v__val.assignVal(tmp0);
            }
            {
              LINE(116,0);
              const String &tmp0((f_smarty_function_html_radios_output(v_name, v__key, v__val, v_selected, v_extra, v_separator, v_labels, v_label_ids)));
              v__html_result.append((VarNR(tmp0)));
            }
          }
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
          LINE(121,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_template;
          mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((v_params.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, v__html_result);
        }
      }
    }
    else {
      {
        return LINE(123,(x_implode(NAMVAR(s_svs66d2232c, "\n"), v__html_result)));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_html_radios_output(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 8)) throw_missing_arguments("smarty_function_html_radios_output", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(UNLIKELY(count <= 4) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg5(UNLIKELY(count <= 5) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg6(UNLIKELY(count <= 6) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg7(UNLIKELY(count <= 7) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_radios_output(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7));
  }
}
Variant ifa_smarty_function_html_radios_output(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
   throw_missing_arguments("smarty_function_html_radios_output", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  CVarRef arg5(UNLIKELY(count <= 5) ? null_variant : a5);
  CVarRef arg6(null);
  CVarRef arg7(null);
  return (f_smarty_function_html_radios_output(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7));
}
Variant i_smarty_function_html_radios(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_radios", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_radios(arg0, arg1));
  }
}
Variant ifa_smarty_function_html_radios(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_radios", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_html_radios(arg0, arg1));
}
CallInfo ci_smarty_function_html_radios_output((void*)&i_smarty_function_html_radios_output, (void*)&ifa_smarty_function_html_radios_output, 8, 0, 0x0000000000000000LL);
CallInfo ci_smarty_function_html_radios((void*)&i_smarty_function_html_radios, (void*)&ifa_smarty_function_html_radios, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_html_radios_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.html_radios.php, pm_php$Smarty$libs$plugins$function_html_radios_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssc845ce71, "smarty_function_html_radios"));
  g->FVF(smarty_function_html_radios) = true;
  g->declareFunctionLit(NAMSTR(s_sscab3f9d4, "smarty_function_html_radios_output"));
  g->FVF(smarty_function_html_radios_output) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
