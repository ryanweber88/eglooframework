
#include <php/Smarty/libs/plugins/function.html_select_time.h>
#include <php/Smarty/libs/plugins/function.html_select_time.fws.h>
#include <php/Smarty/libs/plugins/function.html_table.h>
#include <php/Smarty/libs/plugins/function.html_table.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/plugins/function.html_options.h>
#include <php/Smarty/libs/plugins/shared.make_timestamp.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_html_select_time;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.html_select_time.php line 25 */
Variant f_smarty_function_html_select_time(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_html_select_time);
  INTERCEPT_INJECTION("smarty_function_html_select_time", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_prefix;
  Variant v_time;
  Variant v_display_hours;
  Variant v_display_minutes;
  Variant v_display_seconds;
  Variant v_display_meridian;
  Variant v_use_24_hours;
  Variant v_minute_interval;
  Variant v_second_interval;
  Variant v_field_array;
  Variant v_all_extra;
  Variant v_hour_extra;
  Variant v_minute_extra;
  Variant v_second_extra;
  Variant v_meridian_extra;
  Variant v__key;
  Variant v__value;
  Variant v_html_result;
  Variant v_hours;
  Variant v_hour_fmt;
  Variant v_i;
  Variant v_for_max;
  Variant v_all_minutes;
  Variant v_minutes;
  Variant v_selected;
  Variant v_all_seconds;
  Variant v_seconds;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_prefix; Variant &v_time; Variant &v_display_hours; Variant &v_display_minutes; Variant &v_display_seconds; Variant &v_display_meridian; Variant &v_use_24_hours; Variant &v_minute_interval; Variant &v_second_interval; Variant &v_field_array; Variant &v_all_extra; Variant &v_hour_extra; Variant &v_minute_extra; Variant &v_second_extra; Variant &v_meridian_extra; Variant &v__key; Variant &v__value; Variant &v_html_result; Variant &v_hours; Variant &v_hour_fmt; Variant &v_i; Variant &v_for_max; Variant &v_all_minutes; Variant &v_minutes; Variant &v_selected; Variant &v_all_seconds; Variant &v_seconds;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_prefix, Variant &r_time, Variant &r_display_hours, Variant &r_display_minutes, Variant &r_display_seconds, Variant &r_display_meridian, Variant &r_use_24_hours, Variant &r_minute_interval, Variant &r_second_interval, Variant &r_field_array, Variant &r_all_extra, Variant &r_hour_extra, Variant &r_minute_extra, Variant &r_second_extra, Variant &r_meridian_extra, Variant &r__key, Variant &r__value, Variant &r_html_result, Variant &r_hours, Variant &r_hour_fmt, Variant &r_i, Variant &r_for_max, Variant &r_all_minutes, Variant &r_minutes, Variant &r_selected, Variant &r_all_seconds, Variant &r_seconds) : v_params(r_params), v_template(r_template), v_prefix(r_prefix), v_time(r_time), v_display_hours(r_display_hours), v_display_minutes(r_display_minutes), v_display_seconds(r_display_seconds), v_display_meridian(r_display_meridian), v_use_24_hours(r_use_24_hours), v_minute_interval(r_minute_interval), v_second_interval(r_second_interval), v_field_array(r_field_array), v_all_extra(r_all_extra), v_hour_extra(r_hour_extra), v_minute_extra(r_minute_extra), v_second_extra(r_second_extra), v_meridian_extra(r_meridian_extra), v__key(r__key), v__value(r__value), v_html_result(r_html_result), v_hours(r_hours), v_hour_fmt(r_hour_fmt), v_i(r_i), v_for_max(r_for_max), v_all_minutes(r_all_minutes), v_minutes(r_minutes), v_selected(r_selected), v_all_seconds(r_all_seconds), v_seconds(r_seconds) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 63) {
        case 1:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x23FD16E167CEA846LL, s_ss83d81727, v_field_array,
                             11);
          break;
        case 17:
          HASH_RETURN_NAMSTR(0x62F10D458F9C55D1LL, s_ss70118225, v_hour_fmt,
                             8);
          break;
        case 18:
          HASH_RETURN_NAMSTR(0x4AFF04792BE51352LL, s_ssdc7372c9, v_minute_extra,
                             12);
          break;
        case 21:
          HASH_RETURN_NAMSTR(0x4A3443ACD3E18395LL, s_ssabe2b32b, v_hour_extra,
                             10);
          break;
        case 23:
          HASH_RETURN_NAMSTR(0x4BC0896E78D2BD97LL, s_sse26e1066, v_hours,
                             5);
          break;
        case 26:
          HASH_RETURN_NAMSTR(0x5AC47C2F2E2F2C9ALL, s_ss173c6fd1, v_all_seconds,
                             11);
          break;
        case 33:
          HASH_RETURN_NAMSTR(0x0E6DA759EEEBD621LL, s_ss1cd0d347, v_display_hours,
                             13);
          HASH_RETURN_NAMSTR(0x06DBE6D3F6080121LL, s_ssfbf6a8d8, v_meridian_extra,
                             14);
          break;
        case 35:
          HASH_RETURN_NAMSTR(0x6AF3A5180FADA823LL, s_ss3d470fd9, v_all_extra,
                             9);
          break;
        case 38:
          HASH_RETURN_NAMSTR(0x7B3D8DD5737634E6LL, s_ssf78888d1, v_display_minutes,
                             15);
          HASH_RETURN_NAMSTR(0x30C6A46FDCFD7326LL, s_ssf757c074, v__value,
                             6);
          HASH_RETURN_NAMSTR(0x7D2566268F55C366LL, s_ssb6daa7a1, v_minutes,
                             7);
          break;
        case 39:
          HASH_RETURN_NAMSTR(0x31CD2AD7D75BA9A7LL, s_ss6a2fb567, v_display_seconds,
                             15);
          break;
        case 40:
          HASH_RETURN_NAMSTR(0x3580480C3EC8A668LL, s_ss6f982eb0, v_seconds,
                             7);
          break;
        case 41:
          HASH_RETURN_NAMSTR(0x350D27E00E5B5E29LL, s_ss92b6f3b8, v_prefix,
                             6);
          break;
        case 42:
          HASH_RETURN_NAMSTR(0x4A51F39CF3D30A6ALL, s_ssaa45abe7, v_selected,
                             8);
          break;
        case 43:
          HASH_RETURN_NAMSTR(0x7788B24D975DFFABLL, s_ss5c7e6663, v_use_24_hours,
                             12);
          break;
        case 47:
          HASH_RETURN_NAMSTR(0x7AA533586BB9B1EFLL, s_ss6f82a6e5, v_all_minutes,
                             11);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 51:
          HASH_RETURN_NAMSTR(0x4DE9B1B893BEFDF3LL, s_sse1885ce9, v_display_meridian,
                             16);
          break;
        case 52:
          HASH_RETURN_NAMSTR(0x6EC5581F72EFBF74LL, s_ss9a64bb96, v_second_extra,
                             12);
          HASH_RETURN_NAMSTR(0x6AC33CD644F3B2B4LL, s_ss88f821b4, v_html_result,
                             11);
          break;
        case 54:
          HASH_RETURN_NAMSTR(0x0716C1D455129176LL, s_ss066558e1, v_minute_interval,
                             15);
          break;
        case 55:
          HASH_RETURN_NAMSTR(0x74ABB4A1E10BBBF7LL, s_ss7de7e0a0, v_time,
                             4);
          break;
        case 58:
          HASH_RETURN_NAMSTR(0x13CC6E2599CDCB7ALL, s_ssd38cd135, v_second_interval,
                             15);
          break;
        case 61:
          HASH_RETURN_NAMSTR(0x4FA77E12C8CCAE3DLL, s_ssd4057bc4, v_for_max,
                             7);
          break;
        case 62:
          HASH_RETURN_NAMSTR(0x066E259A1CC5B17ELL, s_ss95766e98, v_i,
                             1);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_params, v_template, v_prefix, v_time, v_display_hours, v_display_minutes, v_display_seconds, v_display_meridian, v_use_24_hours, v_minute_interval, v_second_interval, v_field_array, v_all_extra, v_hour_extra, v_minute_extra, v_second_extra, v_meridian_extra, v__key, v__value, v_html_result, v_hours, v_hour_fmt, v_i, v_for_max, v_all_minutes, v_minutes, v_selected, v_all_seconds, v_seconds);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(27,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ssb7d88999, "shared.make_timestamp.php")), true, variables, "Smarty/libs/plugins/")));
  LINE(28,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss5e606d67, "function.html_options.php")), true, variables, "Smarty/libs/plugins/")));
  v_prefix = NAMSTR(s_ssafddbb76, "Time_");
  {
    LINE(32,0);
    int tmp0((x_time()));
    v_time = tmp0;
  }
  v_display_hours = true;
  v_display_minutes = true;
  v_display_seconds = true;
  v_display_meridian = true;
  v_use_24_hours = true;
  v_minute_interval = 1LL;
  v_second_interval = 1LL;
  setNull(v_field_array);
  setNull(v_all_extra);
  setNull(v_hour_extra);
  setNull(v_minute_extra);
  setNull(v_second_extra);
  setNull(v_meridian_extra);
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_params.begin(null_string, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__value);
      v__key.assignVal(iter3.first());
      {
        {
          Variant switch5;
          switch5 = (v__key);
          bool needsOrder;
          int64 hash;
          hash = switch5.hashForStringSwitch(3822755501974445609LL, 0LL, 0LL, 3822755501974445609LL, 3822755501974445609LL, 32LL, needsOrder);
          switch (((uint64) hash) & 31UL) {
          case_5_h_s7:
          case 1UL:
            if (equal(switch5, (NAMSTR(s_ssfbf6a8d8, "meridian_extra")))) goto case_5_7;
            if (equal(switch5, (NAMSTR(s_ss1cd0d347, "display_hours")))) goto case_5_8;
            if (UNLIKELY(needsOrder)) goto case_5_h_s9;
            goto case_5_15;
          case_5_h_s3:
          case 3UL:
            if (equal(switch5, (NAMSTR(s_ss3d470fd9, "all_extra")))) goto case_5_3;
            if (UNLIKELY(needsOrder)) goto case_5_h_s4;
            goto case_5_15;
          case_5_h_s2:
          case 6UL:
            if (equal(switch5, (NAMSTR(s_ss83d81727, "field_array")))) goto case_5_2;
            if (UNLIKELY(needsOrder)) goto case_5_h_s3;
          case_5_h_s9:
            if (equal(switch5, (NAMSTR(s_ssf78888d1, "display_minutes")))) goto case_5_9;
            if (UNLIKELY(needsOrder)) goto case_5_h_s10;
            goto case_5_15;
          case_5_h_s10:
          case 7UL:
            if (equal(switch5, (NAMSTR(s_ss6a2fb567, "display_seconds")))) goto case_5_10;
            if (UNLIKELY(needsOrder)) goto case_5_h_s11;
            goto case_5_15;
          case 9UL:
            if (equal(switch5, (NAMSTR(s_ss92b6f3b8, "prefix")))) goto case_5_0;
            if (UNLIKELY(needsOrder)) goto case_5_h_s1;
            goto case_5_15;
          case_5_h_s12:
          case 11UL:
            if (equal(switch5, (NAMSTR(s_ss5c7e6663, "use_24_hours")))) goto case_5_12;
            if (UNLIKELY(needsOrder)) goto case_5_h_s13;
            goto case_5_15;
          case_5_h_s5:
          case 18UL:
            if (equal(switch5, (NAMSTR(s_ssdc7372c9, "minute_extra")))) goto case_5_5;
            if (UNLIKELY(needsOrder)) goto case_5_h_s6;
            goto case_5_15;
          case_5_h_s11:
          case 19UL:
            if (equal(switch5, (NAMSTR(s_sse1885ce9, "display_meridian")))) goto case_5_11;
            if (UNLIKELY(needsOrder)) goto case_5_h_s12;
            goto case_5_15;
          case_5_h_s6:
          case 20UL:
            if (equal(switch5, (NAMSTR(s_ss9a64bb96, "second_extra")))) goto case_5_6;
            if (UNLIKELY(needsOrder)) goto case_5_h_s7;
            goto case_5_15;
          case_5_h_s4:
          case 21UL:
            if (equal(switch5, (NAMSTR(s_ssabe2b32b, "hour_extra")))) goto case_5_4;
            if (UNLIKELY(needsOrder)) goto case_5_h_s5;
            goto case_5_15;
          case_5_h_s13:
          case 22UL:
            if (equal(switch5, (NAMSTR(s_ss066558e1, "minute_interval")))) goto case_5_13;
            if (UNLIKELY(needsOrder)) goto case_5_h_s14;
            goto case_5_15;
          case_5_h_s1:
          case 23UL:
            if (equal(switch5, (NAMSTR(s_ss7de7e0a0, "time")))) goto case_5_1;
            if (UNLIKELY(needsOrder)) goto case_5_h_s2;
            goto case_5_15;
          case_5_h_s14:
          case 26UL:
            if (equal(switch5, (NAMSTR(s_ssd38cd135, "second_interval")))) goto case_5_14;
            goto case_5_15;
          default: goto case_5_15;
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
          }
        case_5_6:
          {
          }
        case_5_7:
          {
            variables->get(toString(v__key)) = (toString(v__value));
            goto break4;
          }
        case_5_8:
          {
          }
        case_5_9:
          {
          }
        case_5_10:
          {
          }
        case_5_11:
          {
          }
        case_5_12:
          {
            variables->get(toString(v__key)) = (toBoolean(v__value));
            goto break4;
          }
        case_5_13:
          {
          }
        case_5_14:
          {
            variables->get(toString(v__key)) = (toInt64(v__value));
            goto break4;
          }
        case_5_15:
          {
            LINE(78,(x_trigger_error(concat(NAMSTR(s_ssc67eb5c7, "[html_select_time] unknown parameter "), toString(v__key)), toInt32(512LL) /* E_USER_WARNING */)));
          }
        break4:;
      }
    }
  }
  {
    LINE(82,0);
    const Variant &tmp0((f_smarty_make_timestamp(v_time)));
    v_time.assignVal(tmp0);
  }
  v_html_result = NAMSTR(s_ss00000000, "");
  if (toBoolean(v_display_hours)) {
    {
      v_hours = (toBoolean(v_use_24_hours) ? ((s_sadca17f32)) : ((s_sae74a988f)));
      v_hour_fmt = (toBoolean(v_use_24_hours) ? ((NAMSTR(s_ss589e370e, "%H"))) : ((NAMSTR(s_ss5da057e0, "%I"))));
      {
        LOOP_COUNTER(6);
        {
          v_i = 0LL;
          LINE(89,0);
          int tmp0((x_count(v_hours)));
          v_for_max = tmp0;
        }
        for (; (less(v_i, v_for_max)); v_i++) {
          LOOP_COUNTER_CHECK(6);
          {
            LINE(90,0);
            const Variant &tmp0((v_hours.rvalAt(v_i, AccessFlags::Error)));
            const Variant &tmp1((x_sprintf(2, NAMSTR(s_ssc45c55aa, "%02d"), Array(array_createvi(1, toVPOD(tmp0))))));
            v_hours.set(v_i, (tmp1));
          }
        }
      }
      concat_assign(v_html_result, NAMSTR(s_ss480fbcb0, "<select name="));
      if (!(x_is_null(v_field_array))) {
        {
          concat_assign(v_html_result, concat5(NAMSTR(s_ss7e5fc106, "\""), toString(v_field_array), NAMSTR(s_ssbc769ca5, "["), toString(v_prefix), NAMSTR(s_ssbd3fb3a7, "Hour]\"")));
        }
      }
      else {
        {
          concat_assign(v_html_result, concat3(NAMSTR(s_ss7e5fc106, "\""), toString(v_prefix), NAMSTR(s_ssbe3ee640, "Hour\"")));
        }
      }
      if (!(x_is_null(v_hour_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_hour_extra)));
        }
      }
      if (!(x_is_null(v_all_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
        }
      }
      concat_assign(v_html_result, NAMSTR(s_ssb2dfad06, ">\n"));
      {
        Variant tmp1((v_hours));
        Variant tmp2((v_hours));
        LINE(106,0);
        const Variant &tmp3((x_strftime(toString(v_hour_fmt), toInt64(v_time))));
        ArrayInit tmp0(array_createvs(4, toSPOD(NAMSTR(s_ss7a5dbb24, "output")), toVPOD(tmp1), toSPOD(NAMSTR(s_ssb86d1574, "values")), toVPOD(tmp2), toSPOD(NAMSTR(s_ssaa45abe7, "selected")), toVPOD(tmp3), toSPOD(NAMSTR(s_ss8e235da5, "print_result")), toVPOD(false_varNR)));
        const Array &tmp4((Array(tmp0)));
        LINE(108,0);
        const String &tmp5((toString(f_smarty_function_html_options(VarNR(tmp4), v_template))));
        concat_assign(v_html_result, tmp5);
      }
      concat_assign(v_html_result, NAMSTR(s_ss633c6fbf, "</select>\n"));
    }
  }
  if (toBoolean(v_display_minutes)) {
    {
      v_all_minutes = s_sa1c58461e;
      {
        LOOP_COUNTER(7);
        {
          v_i = 0LL;
          LINE(114,0);
          int tmp0((x_count(v_all_minutes)));
          v_for_max = tmp0;
        }
        for (; (less(v_i, v_for_max)); v_i += v_minute_interval) {
          LOOP_COUNTER_CHECK(7);
          {
            LINE(115,0);
            const Variant &tmp0((v_all_minutes.rvalAt(v_i, AccessFlags::Error)));
            const Variant &tmp1((x_sprintf(2, NAMSTR(s_ssc45c55aa, "%02d"), Array(array_createvi(1, toVPOD(tmp0))))));
            v_minutes.append((tmp1));
          }
        }
      }
      {
        LINE(116,0);
        const Variant &tmp0((x_strftime(NAMSTR(s_ss470b9bdf, "%M"), toInt64(v_time))));
        double tmp1((toDouble(divide(tmp0, v_minute_interval))));
        double tmp2((x_floor(tmp1)));
        double tmp3(((tmp2 * toDouble(v_minute_interval))));
        int64 tmp4((x_intval(tmp3)));
        v_selected = tmp4;
      }
      concat_assign(v_html_result, NAMSTR(s_ss480fbcb0, "<select name="));
      if (!(x_is_null(v_field_array))) {
        {
          concat_assign(v_html_result, concat5(NAMSTR(s_ss7e5fc106, "\""), toString(v_field_array), NAMSTR(s_ssbc769ca5, "["), toString(v_prefix), NAMSTR(s_ssd616d9fe, "Minute]\"")));
        }
      }
      else {
        {
          concat_assign(v_html_result, concat3(NAMSTR(s_ss7e5fc106, "\""), toString(v_prefix), NAMSTR(s_ss32a7c7c5, "Minute\"")));
        }
      }
      if (!(x_is_null(v_minute_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_minute_extra)));
        }
      }
      if (!(x_is_null(v_all_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
        }
      }
      concat_assign(v_html_result, NAMSTR(s_ssb2dfad06, ">\n"));
      {
        LINE(135,0);
        const String &tmp0((toString(f_smarty_function_html_options(VarNR(Array(array_createvs(4, toSPOD(NAMSTR(s_ss7a5dbb24, "output")), toVPOD(v_minutes), toSPOD(NAMSTR(s_ssb86d1574, "values")), toVPOD(v_minutes), toSPOD(NAMSTR(s_ssaa45abe7, "selected")), toVPOD(v_selected), toSPOD(NAMSTR(s_ss8e235da5, "print_result")), toVPOD(false_varNR)))), v_template))));
        concat_assign(v_html_result, tmp0);
      }
      concat_assign(v_html_result, NAMSTR(s_ss633c6fbf, "</select>\n"));
    }
  }
  if (toBoolean(v_display_seconds)) {
    {
      v_all_seconds = s_sa1c58461e;
      {
        LOOP_COUNTER(8);
        {
          v_i = 0LL;
          LINE(141,0);
          int tmp0((x_count(v_all_seconds)));
          v_for_max = tmp0;
        }
        for (; (less(v_i, v_for_max)); v_i += v_second_interval) {
          LOOP_COUNTER_CHECK(8);
          {
            LINE(142,0);
            const Variant &tmp0((v_all_seconds.rvalAt(v_i, AccessFlags::Error)));
            const Variant &tmp1((x_sprintf(2, NAMSTR(s_ssc45c55aa, "%02d"), Array(array_createvi(1, toVPOD(tmp0))))));
            v_seconds.append((tmp1));
          }
        }
      }
      {
        LINE(143,0);
        const Variant &tmp0((x_strftime(NAMSTR(s_ss1b957e84, "%S"), toInt64(v_time))));
        double tmp1((toDouble(divide(tmp0, v_second_interval))));
        double tmp2((x_floor(tmp1)));
        double tmp3(((tmp2 * toDouble(v_second_interval))));
        int64 tmp4((x_intval(tmp3)));
        v_selected = tmp4;
      }
      concat_assign(v_html_result, NAMSTR(s_ss480fbcb0, "<select name="));
      if (!(x_is_null(v_field_array))) {
        {
          concat_assign(v_html_result, concat5(NAMSTR(s_ss7e5fc106, "\""), toString(v_field_array), NAMSTR(s_ssbc769ca5, "["), toString(v_prefix), NAMSTR(s_ss8602447b, "Second]\"")));
        }
      }
      else {
        {
          concat_assign(v_html_result, concat3(NAMSTR(s_ss7e5fc106, "\""), toString(v_prefix), NAMSTR(s_ss5548a3e2, "Second\"")));
        }
      }
      if (!(x_is_null(v_second_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_second_extra)));
        }
      }
      if (!(x_is_null(v_all_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
        }
      }
      concat_assign(v_html_result, NAMSTR(s_ssb2dfad06, ">\n"));
      {
        LINE(163,0);
        const String &tmp0((toString(f_smarty_function_html_options(VarNR(Array(array_createvs(4, toSPOD(NAMSTR(s_ss7a5dbb24, "output")), toVPOD(v_seconds), toSPOD(NAMSTR(s_ssb86d1574, "values")), toVPOD(v_seconds), toSPOD(NAMSTR(s_ssaa45abe7, "selected")), toVPOD(v_selected), toSPOD(NAMSTR(s_ss8e235da5, "print_result")), toVPOD(false_varNR)))), v_template))));
        concat_assign(v_html_result, tmp0);
      }
      concat_assign(v_html_result, NAMSTR(s_ss633c6fbf, "</select>\n"));
    }
  }
  if ((toBoolean(v_display_meridian) && !(toBoolean(v_use_24_hours)))) {
    {
      concat_assign(v_html_result, NAMSTR(s_ss480fbcb0, "<select name="));
      if (!(x_is_null(v_field_array))) {
        {
          concat_assign(v_html_result, concat5(NAMSTR(s_ss7e5fc106, "\""), toString(v_field_array), NAMSTR(s_ssbc769ca5, "["), toString(v_prefix), NAMSTR(s_ss39d59ab8, "Meridian]\"")));
        }
      }
      else {
        {
          concat_assign(v_html_result, concat3(NAMSTR(s_ss7e5fc106, "\""), toString(v_prefix), NAMSTR(s_ssbb07e495, "Meridian\"")));
        }
      }
      if (!(x_is_null(v_meridian_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_meridian_extra)));
        }
      }
      if (!(x_is_null(v_all_extra))) {
        {
          concat_assign(v_html_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
        }
      }
      concat_assign(v_html_result, NAMSTR(s_ssb2dfad06, ">\n"));
      {
        LINE(185,0);
        const String &tmp1((toString(x_strftime(NAMSTR(s_sse70df391, "%p"), toInt64(v_time)))));
        const String &tmp2((x_strtolower(tmp1)));
        ArrayInit tmp0(array_createvs(4, toSPOD(NAMSTR(s_ss7a5dbb24, "output")), toVPOD(s_svab74e9a89), toSPOD(NAMSTR(s_ssb86d1574, "values")), toVPOD(s_svac8ef41c0), toSPOD(NAMSTR(s_ssaa45abe7, "selected")), toVPOD(VarNR(tmp2)), toSPOD(NAMSTR(s_ss8e235da5, "print_result")), toVPOD(false_varNR)));
        const Array &tmp3((Array(tmp0)));
        LINE(187,0);
        const String &tmp4((toString(f_smarty_function_html_options(VarNR(tmp3), v_template))));
        concat_assign(v_html_result, tmp4);
      }
      concat_assign(v_html_result, NAMSTR(s_ss633c6fbf, "</select>\n"));
    }
  }
  return v_html_result;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_html_select_time(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_select_time", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_select_time(arg0, arg1));
  }
}
Variant ifa_smarty_function_html_select_time(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_select_time", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_html_select_time(arg0, arg1));
}
CallInfo ci_smarty_function_html_select_time((void*)&i_smarty_function_html_select_time, (void*)&ifa_smarty_function_html_select_time, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_html_select_time_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.html_select_time.php, pm_php$Smarty$libs$plugins$function_html_select_time_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss0fae0abd, "smarty_function_html_select_time"));
  g->FVF(smarty_function_html_select_time) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_html_table;
extern CallInfo ci_smarty_function_html_table_cycle;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.html_table.php line 50 */
Variant f_smarty_function_html_table(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_html_table);
  INTERCEPT_INJECTION("smarty_function_html_table", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_table_attr;
  Variant v_tr_attr;
  Variant v_th_attr;
  Variant v_td_attr;
  Variant v_cols_count;
  Variant v_cols;
  Variant v_rows;
  Variant v_trailpad;
  Variant v_vdir;
  Variant v_hdir;
  Variant v_inner;
  Variant v_caption;
  Variant v_loop;
  Variant v__key;
  Variant v__value;
  Variant v_loop_count;
  Variant v_output;
  Variant v_r;
  Variant v_rx;
  Variant v_c;
  Variant v_x;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_table_attr; Variant &v_tr_attr; Variant &v_th_attr; Variant &v_td_attr; Variant &v_cols_count; Variant &v_cols; Variant &v_rows; Variant &v_trailpad; Variant &v_vdir; Variant &v_hdir; Variant &v_inner; Variant &v_caption; Variant &v_loop; Variant &v__key; Variant &v__value; Variant &v_loop_count; Variant &v_output; Variant &v_r; Variant &v_rx; Variant &v_c; Variant &v_x;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_table_attr, Variant &r_tr_attr, Variant &r_th_attr, Variant &r_td_attr, Variant &r_cols_count, Variant &r_cols, Variant &r_rows, Variant &r_trailpad, Variant &r_vdir, Variant &r_hdir, Variant &r_inner, Variant &r_caption, Variant &r_loop, Variant &r__key, Variant &r__value, Variant &r_loop_count, Variant &r_output, Variant &r_r, Variant &r_rx, Variant &r_c, Variant &r_x) : v_params(r_params), v_template(r_template), v_table_attr(r_table_attr), v_tr_attr(r_tr_attr), v_th_attr(r_th_attr), v_td_attr(r_td_attr), v_cols_count(r_cols_count), v_cols(r_cols), v_rows(r_rows), v_trailpad(r_trailpad), v_vdir(r_vdir), v_hdir(r_hdir), v_inner(r_inner), v_caption(r_caption), v_loop(r_loop), v__key(r__key), v__value(r__value), v_loop_count(r_loop_count), v_output(r_output), v_r(r_r), v_rx(r_rx), v_c(r_c), v_x(r_x) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 63) {
        case 1:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          HASH_RETURN_NAMSTR(0x00F31DE90234EA81LL, s_sse59fa416, v_x,
                             1);
          break;
        case 6:
          HASH_RETURN_NAMSTR(0x18E3545101D44846LL, s_ssb8805775, v_table_attr,
                             10);
          break;
        case 8:
          HASH_RETURN_NAMSTR(0x1E0CC2FA13376708LL, s_ss49c10982, v_vdir,
                             4);
          break;
        case 9:
          HASH_RETURN_NAMSTR(0x0EA59CD1566F5709LL, s_ss8b7293ee, v_loop,
                             4);
          HASH_RETURN_NAMSTR(0x044DFCE79169E849LL, s_ss9860a2a3, v_rx,
                             2);
          break;
        case 11:
          HASH_RETURN_NAMSTR(0x71E4015C4BAB2C4BLL, s_ssb803c1fe, v_inner,
                             5);
          break;
        case 13:
          HASH_RETURN_NAMSTR(0x2BB3822CE8F6B94DLL, s_ss70f8f67b, v_tr_attr,
                             7);
          break;
        case 18:
          HASH_RETURN_NAMSTR(0x3FBE70CDB08AF2D2LL, s_ssc13a8cbc, v_td_attr,
                             7);
          break;
        case 36:
          HASH_RETURN_NAMSTR(0x5C7A29AC25A4F8E4LL, s_ss5c5509b0, v_c,
                             1);
          break;
        case 38:
          HASH_RETURN_NAMSTR(0x30C6A46FDCFD7326LL, s_ssf757c074, v__value,
                             6);
          break;
        case 42:
          HASH_RETURN_NAMSTR(0x49C542071EF1392ALL, s_ss03c446c8, v_rows,
                             4);
          break;
        case 43:
          HASH_RETURN_NAMSTR(0x394CEC24A5C7F8EBLL, s_sse10912b6, v_th_attr,
                             7);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 50:
          HASH_RETURN_NAMSTR(0x42778E86B84991F2LL, s_ss4dda92da, v_hdir,
                             4);
          HASH_RETURN_NAMSTR(0x79B4A7F73982EBB2LL, s_ssb41aadfd, v_caption,
                             7);
          break;
        case 51:
          HASH_RETURN_NAMSTR(0x04E8CDEAC85669B3LL, s_ss1725e692, v_cols,
                             4);
          break;
        case 54:
          HASH_RETURN_NAMSTR(0x674317C8DF24EE36LL, s_ss258613d3, v_trailpad,
                             8);
          break;
        case 59:
          HASH_RETURN_NAMSTR(0x77D76D40122506FBLL, s_ss0d42ecf6, v_r,
                             1);
          break;
        case 60:
          HASH_RETURN_NAMSTR(0x442A87246B18D5FCLL, s_ss912ffada, v_loop_count,
                             10);
          break;
        case 62:
          HASH_RETURN_NAMSTR(0x63F6327B125BB6FELL, s_ss427559e6, v_cols_count,
                             10);
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
  } variableTable(v_params, v_template, v_table_attr, v_tr_attr, v_th_attr, v_td_attr, v_cols_count, v_cols, v_rows, v_trailpad, v_vdir, v_hdir, v_inner, v_caption, v_loop, v__key, v__value, v_loop_count, v_output, v_r, v_rx, v_c, v_x);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  v_table_attr = NAMSTR(s_ss7c88eb3f, "border=\"1\"");
  v_tr_attr = NAMSTR(s_ss00000000, "");
  v_th_attr = NAMSTR(s_ss00000000, "");
  v_td_attr = NAMSTR(s_ss00000000, "");
  v_cols_count = 3LL, v_cols = 3LL;
  v_rows = 3LL;
  v_trailpad = NAMSTR(s_ss8f6c417f, "&nbsp;");
  v_vdir = NAMSTR(s_ss2e545e6e, "down");
  v_hdir = NAMSTR(s_ssb32fbb63, "right");
  v_inner = NAMSTR(s_ss1725e692, "cols");
  v_caption = NAMSTR(s_ss00000000, "");
  setNull(v_loop);
  {
    bool tmp0;
    {
      tmp0 = (!(isset(v_params, NAMSTR(s_ss8b7293ee, "loop"), true)));
    }
    if (tmp0) {
      {
        LINE(66,(x_trigger_error(NAMSTR(s_ss03e2deb3, "html_table: missing 'loop' parameter"), toInt32(512LL) /* E_USER_WARNING */)));
        return null;
      }
    }
  }
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_params.begin(null_string, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__value);
      v__key.assignVal(iter3.first());
      {
        {
          Variant switch5;
          switch5 = (v__key);
          bool needsOrder;
          int64 hash;
          hash = switch5.hashForStringSwitch(1055422110600484617LL, 0LL, 0LL, 1055422110600484617LL, 1055422110600484617LL, 32LL, needsOrder);
          switch (((uint64) hash) & 31UL) {
          case_5_h_s3:
          case 6UL:
            if (equal(switch5, (NAMSTR(s_ssb8805775, "table_attr")))) goto case_5_3;
            if (UNLIKELY(needsOrder)) goto case_5_h_s4;
            goto break4;
          case_5_h_s6:
          case 8UL:
            if (equal(switch5, (NAMSTR(s_ss49c10982, "vdir")))) goto case_5_6;
            if (UNLIKELY(needsOrder)) goto case_5_h_s7;
            goto break4;
          case 9UL:
            if (equal(switch5, (NAMSTR(s_ss8b7293ee, "loop")))) goto case_5_0;
            if (UNLIKELY(needsOrder)) goto case_5_h_s1;
            goto break4;
          case_5_h_s2:
          case 10UL:
            if (equal(switch5, (NAMSTR(s_ss03c446c8, "rows")))) goto case_5_2;
            if (UNLIKELY(needsOrder)) goto case_5_h_s3;
            goto break4;
          case_5_h_s7:
          case 11UL:
            if (equal(switch5, (NAMSTR(s_ssb803c1fe, "inner")))) goto case_5_7;
            if (UNLIKELY(needsOrder)) goto case_5_h_s8;
          case_5_h_s11:
            if (equal(switch5, (NAMSTR(s_sse10912b6, "th_attr")))) goto case_5_11;
            goto break4;
          case_5_h_s9:
          case 13UL:
            if (equal(switch5, (NAMSTR(s_ss70f8f67b, "tr_attr")))) goto case_5_9;
            if (UNLIKELY(needsOrder)) goto case_5_h_s10;
            goto break4;
          case_5_h_s5:
          case 18UL:
            if (equal(switch5, (NAMSTR(s_ss4dda92da, "hdir")))) goto case_5_5;
            if (UNLIKELY(needsOrder)) goto case_5_h_s6;
          case_5_h_s8:
            if (equal(switch5, (NAMSTR(s_ssb41aadfd, "caption")))) goto case_5_8;
            if (UNLIKELY(needsOrder)) goto case_5_h_s9;
          case_5_h_s10:
            if (equal(switch5, (NAMSTR(s_ssc13a8cbc, "td_attr")))) goto case_5_10;
            if (UNLIKELY(needsOrder)) goto case_5_h_s11;
            goto break4;
          case_5_h_s1:
          case 19UL:
            if (equal(switch5, (NAMSTR(s_ss1725e692, "cols")))) goto case_5_1;
            if (UNLIKELY(needsOrder)) goto case_5_h_s2;
            goto break4;
          case_5_h_s4:
          case 22UL:
            if (equal(switch5, (NAMSTR(s_ss258613d3, "trailpad")))) goto case_5_4;
            if (UNLIKELY(needsOrder)) goto case_5_h_s5;
            goto break4;
          default: goto break4;
          }
        }
        case_5_0:
          {
            variables->get(toString(v__key)) = (toArray(v__value));
            goto break4;
          }
        case_5_1:
          {
            if ((x_is_array(v__value) && !(empty(v__value)))) {
              {
                v_cols.assignVal(v__value);
                {
                  LINE(79,0);
                  int tmp0((x_count(v__value)));
                  v_cols_count = tmp0;
                }
              }
            }
            else if (((!(x_is_numeric(v__value)) && x_is_string(v__value)) && !(empty(v__value)))) {
              {
                {
                  LINE(81,0);
                  const Variant &tmp0((x_explode(NAMSTR(s_ssd332baa7, ","), toString(v__value))));
                  v_cols.assignVal(tmp0);
                }
                {
                  LINE(82,0);
                  int tmp0((x_count(v_cols)));
                  v_cols_count = tmp0;
                }
              }
            }
            else if (!(empty(v__value))) {
              {
                v_cols_count = (toInt64(v__value));
              }
            }
            else {
              {
                v_cols_count.assignVal(v_cols);
              }
            }
            goto break4;
          }
        case_5_2:
          {
            variables->get(toString(v__key)) = (toInt64(v__value));
            goto break4;
          }
        case_5_3:
          {
          }
        case_5_4:
          {
          }
        case_5_5:
          {
          }
        case_5_6:
          {
          }
        case_5_7:
          {
          }
        case_5_8:
          {
            variables->get(toString(v__key)) = (toString(v__value));
            goto break4;
          }
        case_5_9:
          {
          }
        case_5_10:
          {
          }
        case_5_11:
          {
            variables->get(toString(v__key)).assignVal(v__value);
            goto break4;
          }
        break4:;
      }
    }
  }
  {
    LINE(111,0);
    int tmp0((x_count(v_loop)));
    v_loop_count = tmp0;
  }
  {
    bool tmp0;
    {
      tmp0 = (empty(v_params, NAMSTR(s_ss03c446c8, "rows"), true));
    }
    if (tmp0) {
      {
        {
          LINE(114,0);
          double tmp0((toDouble(divide(v_loop_count, v_cols_count))));
          double tmp1((x_ceil(tmp0)));
          v_rows = tmp1;
        }
      }
    }
    else {
      bool tmp0;
      {
        tmp0 = (empty(v_params, NAMSTR(s_ss1725e692, "cols"), true));
      }
      if (tmp0) {
        {
          {
            bool tmp0;
            {
              tmp0 = (!(empty(v_params, NAMSTR(s_ss03c446c8, "rows"), true)));
            }
            if (tmp0) {
              {
                {
                  LINE(118,0);
                  double tmp0((toDouble(divide(v_loop_count, v_rows))));
                  double tmp1((x_ceil(tmp0)));
                  v_cols_count = tmp1;
                }
              }
            }
          }
        }
      }
    }
  }
  v_output = concat3(NAMSTR(s_ss825cae28, "<table "), toString(v_table_attr), NAMSTR(s_ssb2dfad06, ">\n"));
  if (!(empty(v_caption))) {
    {
      concat_assign(v_output, concat3(NAMSTR(s_ss4021ec89, "<caption>"), toString(v_caption), NAMSTR(s_ssb61f1a23, "</caption>\n")));
    }
  }
  if (x_is_array(v_cols)) {
    {
      {
        Variant tmp0(((equal(v_hdir, NAMSTR(s_ssb32fbb63, "right")) ? ((Variant)(v_cols)) : ((Variant)(LINE(129,(x_array_reverse(v_cols))))))));
        v_cols.assignVal(tmp0);
      }
      concat_assign(v_output, NAMSTR(s_ssb23b6142, "<thead><tr>\n"));
      {
        LOOP_COUNTER(6);
        v_r = 0LL;
        {
          StringBuffer tmp_sbuf_v_output(512);
          for (; (less(v_r, v_cols_count)); v_r++) {
            LOOP_COUNTER_CHECK(6);
            {
              {
                LINE(133,0);
                const String &tmp0((toString(f_smarty_function_html_table_cycle(NAMVAR(s_svs8a889f9a, "th"), v_th_attr, v_r))));
                tmp_sbuf_v_output.addWithTaint("<th", 3).addWithTaint(tmp0).addWithTaint(">", 1);
              }
              {
                LINE(134,0);
                const String &tmp0((toString(v_cols.rvalAt(v_r, AccessFlags::Error))));
                tmp_sbuf_v_output.addWithTaint(tmp0);
              }
              tmp_sbuf_v_output.addWithTaint("</th>\n", 6);
            }
          }
          concat_assign(v_output, tmp_sbuf_v_output.detachWithTaint());
        }
      }
      concat_assign(v_output, NAMSTR(s_ss28d42007, "</tr></thead>\n"));
    }
  }
  concat_assign(v_output, NAMSTR(s_ss957dd90c, "<tbody>\n"));
  {
    LOOP_COUNTER(7);
    v_r = 0LL;
    {
      StringBuffer tmp_sbuf_v_output(512);
      for (; (less(v_r, v_rows)); v_r++) {
        LOOP_COUNTER_CHECK(7);
        {
          {
            LINE(142,0);
            const String &tmp0((toString(f_smarty_function_html_table_cycle(NAMVAR(s_svs7f77adb6, "tr"), v_tr_attr, v_r))));
            tmp_sbuf_v_output.addWithTaint("<tr", 3).addWithTaint(tmp0).addWithTaint(">\n", 2);
          }
          v_rx.assignVal((equal(v_vdir, NAMSTR(s_ss2e545e6e, "down")) ? (((v_r * v_cols_count))) : (((((v_rows - 1LL) - v_r) * v_cols_count)))));
          {
            LOOP_COUNTER(8);
            for (v_c = 0LL; (less(v_c, v_cols_count)); v_c++) {
              LOOP_COUNTER_CHECK(8);
              {
                v_x.assignVal((equal(v_hdir, NAMSTR(s_ssb32fbb63, "right")) ? ((Variant)((v_rx + v_c))) : ((Variant)((((v_rx + v_cols_count) - 1LL) - v_c)))));
                if (!equal(v_inner, NAMSTR(s_ss1725e692, "cols"))) {
                  {
                    {
                      LINE(149,0);
                      double tmp0((toDouble(divide(v_x, v_cols_count))));
                      double tmp1((x_floor(tmp0)));
                      Numeric tmp2((modulo(toInt64(v_x), toInt64(v_cols_count))));
                      const Numeric &tmp3(((tmp2 * v_rows)));
                      double tmp4(((tmp1 + toDouble(tmp3))));
                      v_x = tmp4;
                    }
                  }
                }
                if (less(v_x, v_loop_count)) {
                  {
                    {
                      LINE(153,0);
                      const String &tmp0((toString(f_smarty_function_html_table_cycle(NAMVAR(s_svsc56231c7, "td"), v_td_attr, v_c))));
                      const String &tmp1((toString(v_loop.rvalAt(v_x, AccessFlags::Error))));
                      tmp_sbuf_v_output.addWithTaint("<td", 3).addWithTaint(tmp0).addWithTaint(">", 1).addWithTaint(tmp1).addWithTaint("</td>\n", 6);
                    }
                  }
                }
                else {
                  {
                    {
                      LINE(155,0);
                      const String &tmp0((toString(f_smarty_function_html_table_cycle(NAMVAR(s_svsc56231c7, "td"), v_td_attr, v_c))));
                      const String &tmp1((toString(v_trailpad)));
                      tmp_sbuf_v_output.addWithTaint("<td", 3).addWithTaint(tmp0).addWithTaint(">", 1).addWithTaint(tmp1).addWithTaint("</td>\n", 6);
                    }
                  }
                }
              }
            }
          }
          tmp_sbuf_v_output.addWithTaint("</tr>\n", 6);
        }
      }
      concat_assign(v_output, tmp_sbuf_v_output.detachWithTaint());
    }
  }
  concat_assign(v_output, NAMSTR(s_ss6c57c6f3, "</tbody>\n</table>\n"));
  return v_output;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/plugins/function.html_table.php line 166 */
Variant f_smarty_function_html_table_cycle(CVarRef v_name, CVarRef v_var, CVarRef v_no) {
  FUNCTION_INJECTION(smarty_function_html_table_cycle);
  INTERCEPT_INJECTION("smarty_function_html_table_cycle", array_createvi(3, toVPOD(v_name), toVPOD(v_var), toVPOD(v_no)), r);
  Variant v_ret;

  if (!(x_is_array(v_var))) {
    {
      v_ret.assignVal(v_var);
    }
  }
  else {
    {
      {
        LINE(171,0);
        int64 tmp0((toInt64(x_count(v_var))));
        Numeric tmp1((modulo(toInt64(v_no), tmp0)));
        const Variant &tmp2((v_var.rvalAt(tmp1, AccessFlags::Error)));
        v_ret.assignVal(tmp2);
      }
    }
  }
  return (toBoolean(v_ret) ? ((Variant)(concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_ret)))) : ((Variant)(NAMSTR(s_ss00000000, ""))));
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_html_table(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_table", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_table(arg0, arg1));
  }
}
Variant ifa_smarty_function_html_table(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_table", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_html_table(arg0, arg1));
}
Variant i_smarty_function_html_table_cycle(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_function_html_table_cycle", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_table_cycle(arg0, arg1, arg2));
  }
}
Variant ifa_smarty_function_html_table_cycle(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("smarty_function_html_table_cycle", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (f_smarty_function_html_table_cycle(arg0, arg1, arg2));
}
CallInfo ci_smarty_function_html_table((void*)&i_smarty_function_html_table, (void*)&ifa_smarty_function_html_table, 2, 0, 0x0000000000000000LL);
CallInfo ci_smarty_function_html_table_cycle((void*)&i_smarty_function_html_table_cycle, (void*)&ifa_smarty_function_html_table_cycle, 3, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_html_table_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.html_table.php, pm_php$Smarty$libs$plugins$function_html_table_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ssdf22fa3c, "smarty_function_html_table"));
  g->FVF(smarty_function_html_table) = true;
  g->declareFunctionLit(NAMSTR(s_ss3a600d3b, "smarty_function_html_table_cycle"));
  g->FVF(smarty_function_html_table_cycle) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
