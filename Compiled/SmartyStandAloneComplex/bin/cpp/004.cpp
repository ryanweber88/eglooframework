
#include <php/Smarty/libs/plugins/function.html_select_date.h>
#include <php/Smarty/libs/plugins/function.html_select_date.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/plugins/function.html_options.h>
#include <php/Smarty/libs/plugins/shared.escape_special_chars.h>
#include <php/Smarty/libs/plugins/shared.make_timestamp.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
extern CallInfo ci_smarty_function_html_select_date;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.html_select_date.php line 40 */
Variant f_smarty_function_html_select_date(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_html_select_date);
  INTERCEPT_INJECTION("smarty_function_html_select_date", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_prefix;
  Variant v_start_year;
  Variant v_end_year;
  Variant v_display_days;
  Variant v_display_months;
  Variant v_display_years;
  Variant v_month_format;
  Variant v_month_value_format;
  Variant v_day_format;
  Variant v_day_value_format;
  Variant v_year_as_text;
  Variant v_reverse_years;
  Variant v_field_array;
  Variant v_day_size;
  Variant v_month_size;
  Variant v_year_size;
  Variant v_all_extra;
  Variant v_day_extra;
  Variant v_month_extra;
  Variant v_year_extra;
  Variant v_field_order;
  Variant v_field_separator;
  Variant v_time;
  Variant v_all_empty;
  Variant v_day_empty;
  Variant v_month_empty;
  Variant v_year_empty;
  Variant v_extra_attrs;
  Variant v__key;
  Variant v__value;
  Variant v_found;
  Variant v_match;
  Variant v_year_result;
  Variant v_day_result;
  Variant v_month_result;
  Variant v_html_result;
  Variant v_field_separator_count;
  Variant v_month_names;
  Variant v_month_values;
  Variant v_i;
  Variant v_days;
  Variant v_day_values;
  Variant v_year_name;
  Variant v_years;
  Variant v_yearvals;
  Variant v_c;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_prefix; Variant &v_start_year; Variant &v_end_year; Variant &v_display_days; Variant &v_display_months; Variant &v_display_years; Variant &v_month_format; Variant &v_month_value_format; Variant &v_day_format; Variant &v_day_value_format; Variant &v_year_as_text; Variant &v_reverse_years; Variant &v_field_array; Variant &v_day_size; Variant &v_month_size; Variant &v_year_size; Variant &v_all_extra; Variant &v_day_extra; Variant &v_month_extra; Variant &v_year_extra; Variant &v_field_order; Variant &v_field_separator; Variant &v_time; Variant &v_all_empty; Variant &v_day_empty; Variant &v_month_empty; Variant &v_year_empty; Variant &v_extra_attrs; Variant &v__key; Variant &v__value; Variant &v_found; Variant &v_match; Variant &v_year_result; Variant &v_day_result; Variant &v_month_result; Variant &v_html_result; Variant &v_field_separator_count; Variant &v_month_names; Variant &v_month_values; Variant &v_i; Variant &v_days; Variant &v_day_values; Variant &v_year_name; Variant &v_years; Variant &v_yearvals; Variant &v_c;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_prefix, Variant &r_start_year, Variant &r_end_year, Variant &r_display_days, Variant &r_display_months, Variant &r_display_years, Variant &r_month_format, Variant &r_month_value_format, Variant &r_day_format, Variant &r_day_value_format, Variant &r_year_as_text, Variant &r_reverse_years, Variant &r_field_array, Variant &r_day_size, Variant &r_month_size, Variant &r_year_size, Variant &r_all_extra, Variant &r_day_extra, Variant &r_month_extra, Variant &r_year_extra, Variant &r_field_order, Variant &r_field_separator, Variant &r_time, Variant &r_all_empty, Variant &r_day_empty, Variant &r_month_empty, Variant &r_year_empty, Variant &r_extra_attrs, Variant &r__key, Variant &r__value, Variant &r_found, Variant &r_match, Variant &r_year_result, Variant &r_day_result, Variant &r_month_result, Variant &r_html_result, Variant &r_field_separator_count, Variant &r_month_names, Variant &r_month_values, Variant &r_i, Variant &r_days, Variant &r_day_values, Variant &r_year_name, Variant &r_years, Variant &r_yearvals, Variant &r_c) : v_params(r_params), v_template(r_template), v_prefix(r_prefix), v_start_year(r_start_year), v_end_year(r_end_year), v_display_days(r_display_days), v_display_months(r_display_months), v_display_years(r_display_years), v_month_format(r_month_format), v_month_value_format(r_month_value_format), v_day_format(r_day_format), v_day_value_format(r_day_value_format), v_year_as_text(r_year_as_text), v_reverse_years(r_reverse_years), v_field_array(r_field_array), v_day_size(r_day_size), v_month_size(r_month_size), v_year_size(r_year_size), v_all_extra(r_all_extra), v_day_extra(r_day_extra), v_month_extra(r_month_extra), v_year_extra(r_year_extra), v_field_order(r_field_order), v_field_separator(r_field_separator), v_time(r_time), v_all_empty(r_all_empty), v_day_empty(r_day_empty), v_month_empty(r_month_empty), v_year_empty(r_year_empty), v_extra_attrs(r_extra_attrs), v__key(r__key), v__value(r__value), v_found(r_found), v_match(r_match), v_year_result(r_year_result), v_day_result(r_day_result), v_month_result(r_month_result), v_html_result(r_html_result), v_field_separator_count(r_field_separator_count), v_month_names(r_month_names), v_month_values(r_month_values), v_i(r_i), v_days(r_days), v_day_values(r_day_values), v_year_name(r_year_name), v_years(r_years), v_yearvals(r_yearvals), v_c(r_c) {}
    virtual Variant &getImpl(CStrRef s) {
      int64 hash = s->hash();
      switch (hash & 127) {
        case 1:
          HASH_RETURN_NAMSTR(0x34E2905E620DC481LL, s_ssa3cca6cb, v_field_order,
                             11);
          break;
        case 3:
          HASH_RETURN_NAMSTR(0x7CAC7D8DAB2DE303LL, s_ss65c90897, v_month_size,
                             10);
          break;
        case 4:
          HASH_RETURN_NAMSTR(0x3B88C50B364A5404LL, s_ss859594cc, v_field_separator,
                             15);
          break;
        case 7:
          HASH_RETURN_NAMSTR(0x438EF6BE8723C087LL, s_ssc23f31e5, v_all_empty,
                             9);
          break;
        case 9:
          HASH_RETURN_NAMSTR(0x13E390EB480CC609LL, s_ss4956fb5d, v_year_extra,
                             10);
          HASH_RETURN_NAMSTR(0x50C806FEC61ECB89LL, s_ss3a0270ce, v_found,
                             5);
          break;
        case 19:
          HASH_RETURN_NAMSTR(0x2B8782BF7206E093LL, s_ssf0078f40, v_match,
                             5);
          break;
        case 33:
          HASH_RETURN_NAMSTR(0x4D7083ABF61AB621LL, s_ss31dc87a2, v_month_extra,
                             11);
          break;
        case 35:
          HASH_RETURN_NAMSTR(0x6AF3A5180FADA823LL, s_ss3d470fd9, v_all_extra,
                             9);
          break;
        case 36:
          HASH_RETURN_NAMSTR(0x1F98B9C211A64B24LL, s_ssad2ff10e, v_extra_attrs,
                             11);
          break;
        case 37:
          HASH_RETURN_NAMSTR(0x55D0B6D28369CFA5LL, s_ss5bd2b341, v_month_result,
                             12);
          break;
        case 38:
          HASH_RETURN_NAMSTR(0x30C6A46FDCFD7326LL, s_ssf757c074, v__value,
                             6);
          break;
        case 41:
          HASH_RETURN_NAMSTR(0x350D27E00E5B5E29LL, s_ss92b6f3b8, v_prefix,
                             6);
          break;
        case 42:
          HASH_RETURN_NAMSTR(0x5232F04894AA7A2ALL, s_ss5bf3979b, v_end_year,
                             8);
          break;
        case 49:
          HASH_RETURN_NAMSTR(0x39E313DD2FE882B1LL, s_ss86160f07, v_template,
                             8);
          HASH_RETURN_NAMSTR(0x1B9CE0429B1D87B1LL, s_ss414a2e5c, v_display_days,
                             12);
          HASH_RETURN_NAMSTR(0x73DDFEDEFA043CB1LL, s_ss556a2455, v_field_separator_count,
                             21);
          HASH_RETURN_NAMSTR(0x3FE4195A3E319EB1LL, s_ss5d76ef47, v_yearvals,
                             8);
          break;
        case 52:
          HASH_RETURN_NAMSTR(0x6AC33CD644F3B2B4LL, s_ss88f821b4, v_html_result,
                             11);
          break;
        case 53:
          HASH_RETURN_NAMSTR(0x4DBCDB74822D0DB5LL, s_ssf2768ec8, v_month_value_format,
                             18);
          break;
        case 65:
          HASH_RETURN_NAMSTR(0x6A67A10AA9B9D7C1LL, s_ss1f20ac62, v_params,
                             6);
          HASH_RETURN_NAMSTR(0x51C66E1796A1AD41LL, s_ss9ad0be73, v_day_extra,
                             9);
          break;
        case 70:
          HASH_RETURN_NAMSTR(0x23FD16E167CEA846LL, s_ss83d81727, v_field_array,
                             11);
          break;
        case 71:
          HASH_RETURN_NAMSTR(0x51FFB710268BE947LL, s_ss052d9a2e, v_day_size,
                             8);
          break;
        case 81:
          HASH_RETURN_NAMSTR(0x24D379979941C351LL, s_ss3b1fb05a, v_years,
                             5);
          break;
        case 86:
          HASH_RETURN_NAMSTR(0x640DBD3F34F937D6LL, s_ssb0e813f0, v_start_year,
                             10);
          HASH_RETURN_NAMSTR(0x1751FA6B5FC3C0D6LL, s_ss554323d5, v_reverse_years,
                             13);
          break;
        case 87:
          HASH_RETURN_NAMSTR(0x13DDD6FF96F6B6D7LL, s_sse57fa17c, v_month_format,
                             12);
          break;
        case 90:
          HASH_RETURN_NAMSTR(0x67BFA471EAA1F45ALL, s_sse3abadc0, v_year_empty,
                             10);
          break;
        case 95:
          HASH_RETURN_NAMSTR(0x3C5E97681276F2DFLL, s_ss6e44d2a9, v_year_result,
                             11);
          HASH_RETURN_NAMSTR(0x53D88CFD13D6315FLL, s_ssdf56621f, v_month_values,
                             12);
          break;
        case 97:
          HASH_RETURN_NAMSTR(0x564099C7B3659461LL, s_ss64ae4844, v_day_result,
                             10);
          break;
        case 99:
          HASH_RETURN_NAMSTR(0x5A4CAFD60E5762E3LL, s_ss3715e674, v_display_months,
                             14);
          HASH_RETURN_NAMSTR(0x65B56988F3FF77E3LL, s_ss69bf6e2f, v_year_name,
                             9);
          break;
        case 100:
          HASH_RETURN_NAMSTR(0x5C7A29AC25A4F8E4LL, s_ss5c5509b0, v_c,
                             1);
          break;
        case 103:
          HASH_RETURN_NAMSTR(0x557FC7C525472567LL, s_ssbf5031bb, v_month_empty,
                             11);
          break;
        case 104:
          HASH_RETURN_NAMSTR(0x377E9FAFE03BA668LL, s_ss6cdeecbe, v_year_size,
                             9);
          break;
        case 106:
          HASH_RETURN_NAMSTR(0x18418901AF682D6ALL, s_ss14802b8f, v_days,
                             4);
          break;
        case 108:
          HASH_RETURN_NAMSTR(0x2D8F0E28AE5D18ECLL, s_ssd68f71e6, v_day_value_format,
                             16);
          break;
        case 110:
          HASH_RETURN_NAMSTR(0x75BD5CD3C35C47EELL, s_sse83c4b4d, v_day_empty,
                             9);
          HASH_RETURN_NAMSTR(0x2DFD356FED7E0EEELL, s_ss96b266bd, v_month_names,
                             11);
          break;
        case 111:
          HASH_RETURN_NAMSTR(0x488E8AC83FF5686FLL, s_ss00929274, v_day_values,
                             10);
          break;
        case 113:
          HASH_RETURN_NAMSTR(0x7C789A11DAC50171LL, s_ss03f312a6, v_year_as_text,
                             12);
          HASH_RETURN_NAMSTR(0x59014E5064061171LL, s_ss17617e1a, v__key,
                             4);
          break;
        case 119:
          HASH_RETURN_NAMSTR(0x78399E4D26F47FF7LL, s_ssb37d0a5c, v_display_years,
                             13);
          HASH_RETURN_NAMSTR(0x74ABB4A1E10BBBF7LL, s_ss7de7e0a0, v_time,
                             4);
          break;
        case 121:
          HASH_RETURN_NAMSTR(0x2EBDCD55122D52F9LL, s_ss10121b4c, v_day_format,
                             10);
          break;
        case 126:
          HASH_RETURN_NAMSTR(0x066E259A1CC5B17ELL, s_ss95766e98, v_i,
                             1);
          break;
        default:
          break;
      }
      return LVariableTable::getImpl(s);
    }
  } variableTable(v_params, v_template, v_prefix, v_start_year, v_end_year, v_display_days, v_display_months, v_display_years, v_month_format, v_month_value_format, v_day_format, v_day_value_format, v_year_as_text, v_reverse_years, v_field_array, v_day_size, v_month_size, v_year_size, v_all_extra, v_day_extra, v_month_extra, v_year_extra, v_field_order, v_field_separator, v_time, v_all_empty, v_day_empty, v_month_empty, v_year_empty, v_extra_attrs, v__key, v__value, v_found, v_match, v_year_result, v_day_result, v_month_result, v_html_result, v_field_separator_count, v_month_names, v_month_values, v_i, v_days, v_day_values, v_year_name, v_years, v_yearvals, v_c);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(42,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss688c64e5, "shared.escape_special_chars.php")), true, variables, "Smarty/libs/plugins/")));
  LINE(43,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ssb7d88999, "shared.make_timestamp.php")), true, variables, "Smarty/libs/plugins/")));
  LINE(44,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss5e606d67, "function.html_options.php")), true, variables, "Smarty/libs/plugins/")));
  v_prefix = NAMSTR(s_ss5b8f2ea4, "Date_");
  {
    LINE(48,0);
    const Variant &tmp0((x_strftime(NAMSTR(s_ss7b78a22b, "%Y"))));
    v_start_year.assignVal(tmp0);
  }
  v_end_year.assignVal(v_start_year);
  v_display_days = true;
  v_display_months = true;
  v_display_years = true;
  v_month_format = NAMSTR(s_ss8d883afc, "%B");
  v_month_value_format = NAMSTR(s_ssd2f39fad, "%m");
  v_day_format = NAMSTR(s_ssc45c55aa, "%02d");
  v_day_value_format = NAMSTR(s_ss8e9e01e5, "%d");
  v_year_as_text = false;
  v_reverse_years = false;
  setNull(v_field_array);
  setNull(v_day_size);
  setNull(v_month_size);
  setNull(v_year_size);
  setNull(v_all_extra);
  setNull(v_day_extra);
  setNull(v_month_extra);
  setNull(v_year_extra);
  v_field_order = NAMSTR(s_ssbeae4d65, "MDY");
  v_field_separator = NAMSTR(s_ss66d2232c, "\n");
  {
    LINE(83,0);
    int tmp0((x_time()));
    v_time = tmp0;
  }
  setNull(v_all_empty);
  setNull(v_day_empty);
  setNull(v_month_empty);
  setNull(v_year_empty);
  v_extra_attrs = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(1);
    {
      StringBuffer tmp_sbuf_v_extra_attrs(512);
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
            hash = switch5.hashForStringSwitch(3822755501974445609LL, 0LL, 0LL, 3822755501974445609LL, 3822755501974445609LL, 64LL, needsOrder);
            switch (((uint64) hash) & 63UL) {
            case_5_h_s12:
            case 1UL:
              if (equal(switch5, (NAMSTR(s_ss9ad0be73, "day_extra")))) goto case_5_12;
              if (UNLIKELY(needsOrder)) goto case_5_h_s13;
            case_5_h_s15:
              if (equal(switch5, (NAMSTR(s_ssa3cca6cb, "field_order")))) goto case_5_15;
              if (UNLIKELY(needsOrder)) goto case_5_h_s16;
              goto case_5_27;
            case_5_h_s9:
            case 3UL:
              if (equal(switch5, (NAMSTR(s_ss65c90897, "month_size")))) goto case_5_9;
              if (UNLIKELY(needsOrder)) goto case_5_h_s10;
              goto case_5_27;
            case_5_h_s16:
            case 4UL:
              if (equal(switch5, (NAMSTR(s_ss859594cc, "field_separator")))) goto case_5_16;
              if (UNLIKELY(needsOrder)) goto case_5_h_s17;
              goto case_5_27;
            case_5_h_s7:
            case 6UL:
              if (equal(switch5, (NAMSTR(s_ss83d81727, "field_array")))) goto case_5_7;
              if (UNLIKELY(needsOrder)) goto case_5_h_s8;
              goto case_5_27;
            case_5_h_s8:
            case 7UL:
              if (equal(switch5, (NAMSTR(s_ss052d9a2e, "day_size")))) goto case_5_8;
              if (UNLIKELY(needsOrder)) goto case_5_h_s9;
            case_5_h_s21:
              if (equal(switch5, (NAMSTR(s_ssc23f31e5, "all_empty")))) goto case_5_21;
              if (UNLIKELY(needsOrder)) goto case_5_h_s22;
              goto case_5_27;
            case_5_h_s14:
            case 9UL:
              if (equal(switch5, (NAMSTR(s_ss4956fb5d, "year_extra")))) goto case_5_14;
              if (UNLIKELY(needsOrder)) goto case_5_h_s15;
              goto case_5_27;
            case_5_h_s2:
            case 22UL:
              if (equal(switch5, (NAMSTR(s_ssb0e813f0, "start_year")))) goto case_5_2;
              if (UNLIKELY(needsOrder)) goto case_5_h_s3;
            case_5_h_s26:
              if (equal(switch5, (NAMSTR(s_ss554323d5, "reverse_years")))) goto case_5_26;
              goto case_5_27;
            case_5_h_s4:
            case 23UL:
              if (equal(switch5, (NAMSTR(s_sse57fa17c, "month_format")))) goto case_5_4;
              if (UNLIKELY(needsOrder)) goto case_5_h_s5;
              goto case_5_27;
            case_5_h_s20:
            case 26UL:
              if (equal(switch5, (NAMSTR(s_sse3abadc0, "year_empty")))) goto case_5_20;
              if (UNLIKELY(needsOrder)) goto case_5_h_s21;
              goto case_5_27;
            case_5_h_s13:
            case 33UL:
              if (equal(switch5, (NAMSTR(s_ss31dc87a2, "month_extra")))) goto case_5_13;
              if (UNLIKELY(needsOrder)) goto case_5_h_s14;
              goto case_5_27;
            case_5_h_s11:
            case 35UL:
              if (equal(switch5, (NAMSTR(s_ss3d470fd9, "all_extra")))) goto case_5_11;
              if (UNLIKELY(needsOrder)) goto case_5_h_s12;
            case_5_h_s23:
              if (equal(switch5, (NAMSTR(s_ss3715e674, "display_months")))) goto case_5_23;
              if (UNLIKELY(needsOrder)) goto case_5_h_s24;
              goto case_5_27;
            case_5_h_s18:
            case 39UL:
              if (equal(switch5, (NAMSTR(s_ssbf5031bb, "month_empty")))) goto case_5_18;
              if (UNLIKELY(needsOrder)) goto case_5_h_s19;
              goto case_5_27;
            case_5_h_s10:
            case 40UL:
              if (equal(switch5, (NAMSTR(s_ss6cdeecbe, "year_size")))) goto case_5_10;
              if (UNLIKELY(needsOrder)) goto case_5_h_s11;
              goto case_5_27;
            case 41UL:
              if (equal(switch5, (NAMSTR(s_ss92b6f3b8, "prefix")))) goto case_5_0;
              if (UNLIKELY(needsOrder)) goto case_5_h_s1;
              goto case_5_27;
            case_5_h_s3:
            case 42UL:
              if (equal(switch5, (NAMSTR(s_ss5bf3979b, "end_year")))) goto case_5_3;
              if (UNLIKELY(needsOrder)) goto case_5_h_s4;
              goto case_5_27;
            case_5_h_s6:
            case 44UL:
              if (equal(switch5, (NAMSTR(s_ssd68f71e6, "day_value_format")))) goto case_5_6;
              if (UNLIKELY(needsOrder)) goto case_5_h_s7;
              goto case_5_27;
            case_5_h_s19:
            case 46UL:
              if (equal(switch5, (NAMSTR(s_sse83c4b4d, "day_empty")))) goto case_5_19;
              if (UNLIKELY(needsOrder)) goto case_5_h_s20;
              goto case_5_27;
            case_5_h_s22:
            case 49UL:
              if (equal(switch5, (NAMSTR(s_ss414a2e5c, "display_days")))) goto case_5_22;
              if (UNLIKELY(needsOrder)) goto case_5_h_s23;
            case_5_h_s25:
              if (equal(switch5, (NAMSTR(s_ss03f312a6, "year_as_text")))) goto case_5_25;
              if (UNLIKELY(needsOrder)) goto case_5_h_s26;
              goto case_5_27;
            case_5_h_s17:
            case 53UL:
              if (equal(switch5, (NAMSTR(s_ssf2768ec8, "month_value_format")))) goto case_5_17;
              if (UNLIKELY(needsOrder)) goto case_5_h_s18;
              goto case_5_27;
            case_5_h_s1:
            case 55UL:
              if (equal(switch5, (NAMSTR(s_ss7de7e0a0, "time")))) goto case_5_1;
              if (UNLIKELY(needsOrder)) goto case_5_h_s2;
            case_5_h_s24:
              if (equal(switch5, (NAMSTR(s_ssb37d0a5c, "display_years")))) goto case_5_24;
              if (UNLIKELY(needsOrder)) goto case_5_h_s25;
              goto case_5_27;
            case_5_h_s5:
            case 57UL:
              if (equal(switch5, (NAMSTR(s_ss10121b4c, "day_format")))) goto case_5_5;
              if (UNLIKELY(needsOrder)) goto case_5_h_s6;
              goto case_5_27;
            default: goto case_5_27;
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
            }
          case_5_13:
            {
            }
          case_5_14:
            {
            }
          case_5_15:
            {
            }
          case_5_16:
            {
            }
          case_5_17:
            {
            }
          case_5_18:
            {
            }
          case_5_19:
            {
            }
          case_5_20:
            {
              variables->get(toString(v__key)) = (toString(v__value));
              goto break4;
            }
          case_5_21:
            {
              variables->get(toString(v__key)) = (toString(v__value));
              {
                Variant tmp0((v_year_empty.assignVal(v_all_empty)));
                v_month_empty.assignVal(tmp0);
                v_day_empty.assignVal(tmp0);
              }
              goto break4;
            }
          case_5_22:
            {
            }
          case_5_23:
            {
            }
          case_5_24:
            {
            }
          case_5_25:
            {
            }
          case_5_26:
            {
              variables->get(toString(v__key)) = (toBoolean(v__value));
              goto break4;
            }
          case_5_27:
            {
              if (!(x_is_array(v__value))) {
                {
                  {
                    const String &tmp0((toString(v__key)));
                    LINE(131,0);
                    const String &tmp1((toString(f_smarty_function_escape_special_chars(v__value))));
                    tmp_sbuf_v_extra_attrs.addWithTaint(" ", 1).addWithTaint(tmp0).addWithTaint("=\"", 2).addWithTaint(tmp1).addWithTaint("\"", 1);
                  }
                }
              }
              else {
                {
                  LINE(133,(x_trigger_error(concat3(NAMSTR(s_ss10c954e6, "html_select_date: extra attribute '"), toString(v__key), NAMSTR(s_ss3233b868, "' cannot be an array")), toInt32(1024LL) /* E_USER_NOTICE */)));
                }
              }
              goto break4;
            }
          break4:;
        }
      }
      concat_assign(v_extra_attrs, tmp_sbuf_v_extra_attrs.detachWithTaint());
    }
  }
  if (LINE(139,(toBoolean(x_preg_match(NAMSTR(s_ss209833f4, "!^-\\d+$!"), toString(v_time)))))) {
    {
      {
        LINE(141,0);
        const Variant &tmp0((x_date(NAMSTR(s_ss82e6eba3, "Y-m-d"), toInt64(v_time))));
        v_time.assignVal(tmp0);
      }
    }
  }
  if (LINE(144,(toBoolean(x_preg_match(NAMSTR(s_ss5af8462d, "/^(\\d{0,4}-\\d{0,2}-\\d{0,2})/"), toString(v_time), ref(v_found)))))) {
    {
      {
        LINE(145,0);
        const Variant &tmp0((v_found.rvalAt(1LL, AccessFlags::Error)));
        v_time.assignVal(tmp0);
      }
    }
  }
  else {
    {
      {
        LINE(149,0);
        int64 tmp0((toInt64(f_smarty_make_timestamp(v_time))));
        const Variant &tmp1((x_strftime(NAMSTR(s_ss22d45cab, "%Y-%m-%d"), tmp0)));
        v_time.assignVal(tmp1);
      }
    }
  }
  {
    LINE(152,0);
    const Variant &tmp0((x_explode(NAMSTR(s_ss935fd125, "-"), toString(v_time))));
    v_time.assignVal(tmp0);
  }
  if (LINE(154,(toBoolean(x_preg_match(NAMSTR(s_ssbeedbb1e, "!^(\\+|\\-)\\s*(\\d+)$!"), toString(v_end_year), ref(v_match)))))) {
    {
      {
        bool tmp0;
        {
          LINE(155,0);
          const Variant &tmp1((v_match.rvalAt(1LL, AccessFlags::Error)));
          tmp0 = (equal(tmp1, NAMSTR(s_ssfaed5cac, "+")));
        }
        if (tmp0) {
          {
            {
              LINE(156,0);
              const Variant &tmp0((x_strftime(NAMSTR(s_ss7b78a22b, "%Y"))));
              const Variant &tmp1((v_match.rvalAt(2LL, AccessFlags::Error)));
              const PlusOperand &tmp2(((tmp0 + tmp1)));
              v_end_year.assignVal(tmp2);
            }
          }
        }
        else {
          {
            {
              LINE(158,0);
              const Variant &tmp0((x_strftime(NAMSTR(s_ss7b78a22b, "%Y"))));
              const Variant &tmp1((v_match.rvalAt(2LL, AccessFlags::Error)));
              const Numeric &tmp2(((tmp0 - tmp1)));
              v_end_year.assignVal(tmp2);
            }
          }
        }
      }
    }
  }
  if (LINE(161,(toBoolean(x_preg_match(NAMSTR(s_ssbeedbb1e, "!^(\\+|\\-)\\s*(\\d+)$!"), toString(v_start_year), ref(v_match)))))) {
    {
      {
        bool tmp0;
        {
          LINE(162,0);
          const Variant &tmp1((v_match.rvalAt(1LL, AccessFlags::Error)));
          tmp0 = (equal(tmp1, NAMSTR(s_ssfaed5cac, "+")));
        }
        if (tmp0) {
          {
            {
              LINE(163,0);
              const Variant &tmp0((x_strftime(NAMSTR(s_ss7b78a22b, "%Y"))));
              const Variant &tmp1((v_match.rvalAt(2LL, AccessFlags::Error)));
              const PlusOperand &tmp2(((tmp0 + tmp1)));
              v_start_year.assignVal(tmp2);
            }
          }
        }
        else {
          {
            {
              LINE(165,0);
              const Variant &tmp0((x_strftime(NAMSTR(s_ss7b78a22b, "%Y"))));
              const Variant &tmp1((v_match.rvalAt(2LL, AccessFlags::Error)));
              const Numeric &tmp2(((tmp0 - tmp1)));
              v_start_year.assignVal(tmp2);
            }
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(168,0);
      const String &tmp1((toString(v_time.rvalAt(0LL, AccessFlags::Error))));
      int tmp2((x_strlen(tmp1)));
      tmp0 = (more(tmp2, 0LL));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(169,0);
            const Variant &tmp1((v_time.rvalAt(0LL, AccessFlags::Error)));
            bool tmp2 = (more(v_start_year, tmp1));
            if (tmp2) {
              tmp2 = (!(isset(v_params, NAMSTR(s_ssb0e813f0, "start_year"), true)));
            }
            tmp0 = (tmp2);
          }
          if (tmp0) {
            {
              {
                LINE(171,0);
                const Variant &tmp0((v_time.rvalAt(0LL, AccessFlags::Error)));
                v_start_year.assignVal(tmp0);
              }
            }
          }
        }
        {
          bool tmp0;
          {
            LINE(173,0);
            const Variant &tmp1((v_time.rvalAt(0LL, AccessFlags::Error)));
            bool tmp2 = (less(v_end_year, tmp1));
            if (tmp2) {
              tmp2 = (!(isset(v_params, NAMSTR(s_ss5bf3979b, "end_year"), true)));
            }
            tmp0 = (tmp2);
          }
          if (tmp0) {
            {
              {
                LINE(175,0);
                const Variant &tmp0((v_time.rvalAt(0LL, AccessFlags::Error)));
                v_end_year.assignVal(tmp0);
              }
            }
          }
        }
      }
    }
  }
  {
    LINE(179,0);
    const String &tmp0((x_strtoupper(toString(v_field_order))));
    v_field_order = tmp0;
  }
  v_year_result = NAMSTR(s_ss00000000, ""), v_day_result = NAMSTR(s_ss00000000, ""), v_month_result = NAMSTR(s_ss00000000, ""), v_html_result = NAMSTR(s_ss00000000, "");
  v_field_separator_count = -1LL;
  if (toBoolean(v_display_months)) {
    {
      v_field_separator_count++;
      v_month_names = s_sa00000000;
      v_month_values = s_sa00000000;
      if (isset(v_month_empty)) {
        {
          v_month_names.set(NAMSTR(s_ss00000000, ""), (v_month_empty), true);
          v_month_values.set(NAMSTR(s_ss00000000, ""), (NAMVAR(s_svs00000000, "")), true);
        }
      }
      {
        LOOP_COUNTER(6);
        for (v_i = 1LL; (not_more(v_i, 12LL)); v_i++) {
          LOOP_COUNTER_CHECK(6);
          {
            {
              const String &tmp0((toString(v_month_format)));
              LINE(193,0);
              int64 tmp1((toInt64(x_mktime(toInt32(0LL), toInt32(0LL), toInt32(0LL), toInt32(v_i), toInt32(1LL), toInt32(2000LL)))));
              const Variant &tmp2((x_strftime(tmp0, tmp1)));
              v_month_names.set(v_i, (tmp2));
            }
            {
              const String &tmp0((toString(v_month_value_format)));
              LINE(194,0);
              int64 tmp1((toInt64(x_mktime(toInt32(0LL), toInt32(0LL), toInt32(0LL), toInt32(v_i), toInt32(1LL), toInt32(2000LL)))));
              const Variant &tmp2((x_strftime(tmp0, tmp1)));
              v_month_values.set(v_i, (tmp2));
            }
          }
        }
      }
      concat_assign(v_month_result, NAMSTR(s_ss480fbcb0, "<select name="));
      if (!(x_is_null(v_field_array))) {
        {
          concat_assign(v_month_result, concat5(NAMSTR(s_ss7e5fc106, "\""), toString(v_field_array), NAMSTR(s_ssbc769ca5, "["), toString(v_prefix), NAMSTR(s_ssf3890ec2, "Month]\"")));
        }
      }
      else {
        {
          concat_assign(v_month_result, concat3(NAMSTR(s_ss7e5fc106, "\""), toString(v_prefix), NAMSTR(s_ss2c58def2, "Month\"")));
        }
      }
      if (!(x_is_null(v_month_size))) {
        {
          concat_assign(v_month_result, concat3(NAMSTR(s_ssb16b16c5, " size=\""), toString(v_month_size), NAMSTR(s_ss7e5fc106, "\"")));
        }
      }
      if (!(x_is_null(v_month_extra))) {
        {
          concat_assign(v_month_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_month_extra)));
        }
      }
      if (!(x_is_null(v_all_extra))) {
        {
          concat_assign(v_month_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
        }
      }
      concat_assign(v_month_result, concat(toString(v_extra_attrs), NAMSTR(s_ssb2dfad06, ">\n")));
      {
        Variant tmp1((v_month_names));
        Variant tmp2((v_month_values));
        LINE(216,0);
        int64 tmp3((toInt64(v_time.rvalAt(1LL, AccessFlags::Error))));
        Variant tmp4;
        if (toBoolean((tmp3))) {
          const String &tmp5((toString(v_month_value_format)));
          int64 tmp6((toInt64(v_time.rvalAt(1LL, AccessFlags::Error))));
          int64 tmp7((toInt64(x_mktime(toInt32(0LL), toInt32(0LL), toInt32(0LL), toInt32((tmp6)), toInt32(1LL), toInt32(2000LL)))));
          tmp4 = (x_strftime(tmp5, tmp7));
        } else {
          tmp4 = (NAMSTR(s_ss00000000, ""));
        }
        Variant tmp8((tmp4));
        ArrayInit tmp0(array_createvs(4, toSPOD(NAMSTR(s_ss7a5dbb24, "output")), toVPOD(tmp1), toSPOD(NAMSTR(s_ssb86d1574, "values")), toVPOD(tmp2), toSPOD(NAMSTR(s_ssaa45abe7, "selected")), toVPOD(tmp8), toSPOD(NAMSTR(s_ss8e235da5, "print_result")), toVPOD(false_varNR)));
        const Array &tmp9((Array(tmp0)));
        LINE(218,0);
        const String &tmp10((toString(f_smarty_function_html_options(VarNR(tmp9), v_template))));
        concat_assign(v_month_result, tmp10);
      }
      concat_assign(v_month_result, NAMSTR(s_sscfcf88e2, "</select>"));
    }
  }
  if (toBoolean(v_display_days)) {
    {
      v_field_separator_count++;
      v_days = s_sa00000000;
      if (isset(v_day_empty)) {
        {
          v_days.set(NAMSTR(s_ss00000000, ""), (v_day_empty), true);
          v_day_values.set(NAMSTR(s_ss00000000, ""), (NAMVAR(s_svs00000000, "")), true);
        }
      }
      {
        LOOP_COUNTER(7);
        for (v_i = 1LL; (not_more(v_i, 31LL)); v_i++) {
          LOOP_COUNTER_CHECK(7);
          {
            {
              LINE(230,0);
              const Variant &tmp0((x_sprintf(2, toString(v_day_format), Array(array_createvi(1, toVPOD(v_i))))));
              v_days.append((tmp0));
            }
            {
              LINE(231,0);
              const Variant &tmp0((x_sprintf(2, toString(v_day_value_format), Array(array_createvi(1, toVPOD(v_i))))));
              v_day_values.append((tmp0));
            }
          }
        }
      }
      concat_assign(v_day_result, NAMSTR(s_ss480fbcb0, "<select name="));
      if (!(x_is_null(v_field_array))) {
        {
          concat_assign(v_day_result, concat5(NAMSTR(s_ss7e5fc106, "\""), toString(v_field_array), NAMSTR(s_ssbc769ca5, "["), toString(v_prefix), NAMSTR(s_ssfa218355, "Day]\"")));
        }
      }
      else {
        {
          concat_assign(v_day_result, concat3(NAMSTR(s_ss7e5fc106, "\""), toString(v_prefix), NAMSTR(s_ss99bccd11, "Day\"")));
        }
      }
      if (!(x_is_null(v_day_size))) {
        {
          concat_assign(v_day_result, concat3(NAMSTR(s_ssb16b16c5, " size=\""), toString(v_day_size), NAMSTR(s_ss7e5fc106, "\"")));
        }
      }
      if (!(x_is_null(v_all_extra))) {
        {
          concat_assign(v_day_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
        }
      }
      if (!(x_is_null(v_day_extra))) {
        {
          concat_assign(v_day_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_day_extra)));
        }
      }
      concat_assign(v_day_result, concat(toString(v_extra_attrs), NAMSTR(s_ssb2dfad06, ">\n")));
      {
        Variant tmp1((v_days));
        Variant tmp2((v_day_values));
        LINE(252,0);
        const Variant &tmp3((v_time.rvalAt(2LL, AccessFlags::Error)));
        ArrayInit tmp0(array_createvs(4, toSPOD(NAMSTR(s_ss7a5dbb24, "output")), toVPOD(tmp1), toSPOD(NAMSTR(s_ssb86d1574, "values")), toVPOD(tmp2), toSPOD(NAMSTR(s_ssaa45abe7, "selected")), toVPOD(tmp3), toSPOD(NAMSTR(s_ss8e235da5, "print_result")), toVPOD(false_varNR)));
        const Array &tmp4((Array(tmp0)));
        LINE(254,0);
        const String &tmp5((toString(f_smarty_function_html_options(VarNR(tmp4), v_template))));
        concat_assign(v_day_result, tmp5);
      }
      concat_assign(v_day_result, NAMSTR(s_sscfcf88e2, "</select>"));
    }
  }
  if (toBoolean(v_display_years)) {
    {
      v_field_separator_count++;
      if (!(x_is_null(v_field_array))) {
        {
          v_year_name = concat4(toString(v_field_array), NAMSTR(s_ssbc769ca5, "["), toString(v_prefix), NAMSTR(s_ss95ef5a5c, "Year]"));
        }
      }
      else {
        {
          v_year_name = concat(toString(v_prefix), NAMSTR(s_ss71e0e92a, "Year"));
        }
      }
      if (toBoolean(v_year_as_text)) {
        {
          {
            const String &tmp0((toString(v_year_name)));
            LINE(266,0);
            const String &tmp1((toString(v_time.rvalAt(0LL, AccessFlags::Error))));
            concat_assign(v_year_result, concat5(NAMSTR(s_ssd39a216d, "<input type=\"text\" name=\""), tmp0, NAMSTR(s_ss140e4c45, "\" value=\""), tmp1, NAMSTR(s_ssee77c19d, "\" size=\"4\" maxlength=\"4\"")));
          }
          if (!(x_is_null(v_all_extra))) {
            {
              concat_assign(v_year_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
            }
          }
          if (!(x_is_null(v_year_extra))) {
            {
              concat_assign(v_year_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_year_extra)));
            }
          }
          concat_assign(v_year_result, NAMSTR(s_ssc4cb6ecb, " />"));
        }
      }
      else {
        {
          {
            LINE(275,0);
            const Variant &tmp0((x_range(VarNR((toInt64(v_start_year))), VarNR((toInt64(v_end_year))))));
            v_years.assignVal(tmp0);
          }
          if (toBoolean(v_reverse_years)) {
            {
              LINE(277,(x_rsort(ref(v_years), toInt32(1LL) /* SORT_NUMERIC */)));
            }
          }
          else {
            {
              LINE(279,(x_sort(ref(v_years), toInt32(1LL) /* SORT_NUMERIC */)));
            }
          }
          v_yearvals.assignVal(v_years);
          if (isset(v_year_empty)) {
            {
              LINE(283,(x_array_unshift(2, ref(v_years), v_year_empty)));
              LINE(284,(x_array_unshift(2, ref(v_yearvals), NAMVAR(s_svs00000000, ""))));
            }
          }
          concat_assign(v_year_result, concat3(NAMSTR(s_ssc7547d06, "<select name=\""), toString(v_year_name), NAMSTR(s_ss7e5fc106, "\"")));
          if (!(x_is_null(v_year_size))) {
            {
              concat_assign(v_year_result, concat3(NAMSTR(s_ssb16b16c5, " size=\""), toString(v_year_size), NAMSTR(s_ss7e5fc106, "\"")));
            }
          }
          if (!(x_is_null(v_all_extra))) {
            {
              concat_assign(v_year_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_all_extra)));
            }
          }
          if (!(x_is_null(v_year_extra))) {
            {
              concat_assign(v_year_result, concat(NAMSTR(s_ssfcae4ca0, " "), toString(v_year_extra)));
            }
          }
          concat_assign(v_year_result, concat(toString(v_extra_attrs), NAMSTR(s_ssb2dfad06, ">\n")));
          {
            Variant tmp1((v_years));
            Variant tmp2((v_yearvals));
            LINE(299,0);
            const Variant &tmp3((v_time.rvalAt(0LL, AccessFlags::Error)));
            ArrayInit tmp0(array_createvs(4, toSPOD(NAMSTR(s_ss7a5dbb24, "output")), toVPOD(tmp1), toSPOD(NAMSTR(s_ssb86d1574, "values")), toVPOD(tmp2), toSPOD(NAMSTR(s_ssaa45abe7, "selected")), toVPOD(tmp3), toSPOD(NAMSTR(s_ss8e235da5, "print_result")), toVPOD(false_varNR)));
            const Array &tmp4((Array(tmp0)));
            LINE(301,0);
            const String &tmp5((toString(f_smarty_function_html_options(VarNR(tmp4), v_template))));
            concat_assign(v_year_result, tmp5);
          }
          concat_assign(v_year_result, NAMSTR(s_sscfcf88e2, "</select>"));
        }
      }
    }
  }
  {
    LOOP_COUNTER(8);
    v_i = 0LL;
    {
      StringBuffer tmp_sbuf_v_html_result(512);
      for (; (not_more(v_i, 2LL)); v_i++) {
        LOOP_COUNTER_CHECK(8);
        {
          {
            LINE(307,0);
            const Variant &tmp0((x_substr(toString(v_field_order), toInt32(v_i), toInt32(1LL))));
            v_c.assignVal(tmp0);
          }
          {
            Variant switch10;
            switch10 = (v_c);
            bool needsOrder;
            int64 hash;
            hash = switch10.hashForStringSwitch(8092106308596030056LL, 0LL, 0LL, 8092106308596030056LL, 8092106308596030056LL, 8LL, needsOrder);
            switch (((uint64) hash) & 7UL) {
            case 0UL:
              if (equal(switch10, (NAMSTR(s_ss58905a68, "D")))) goto case_10_0;
              if (UNLIKELY(needsOrder)) goto case_10_h_s1;
              goto break9;
            case_10_h_s1:
            case 2UL:
              if (equal(switch10, (NAMSTR(s_ss169307fa, "M")))) goto case_10_1;
              if (UNLIKELY(needsOrder)) goto case_10_h_s2;
              goto break9;
            case_10_h_s2:
            case 4UL:
              if (equal(switch10, (NAMSTR(s_sscef60ccc, "Y")))) goto case_10_2;
              goto break9;
            default: goto break9;
            }
          }
          case_10_0:
            {
              tmp_sbuf_v_html_result.addWithTaint(toString(v_day_result));
              goto break9;
            }
          case_10_1:
            {
              tmp_sbuf_v_html_result.addWithTaint(toString(v_month_result));
              goto break9;
            }
          case_10_2:
            {
              tmp_sbuf_v_html_result.addWithTaint(toString(v_year_result));
              goto break9;
            }
          break9:;
          if (less(v_i, v_field_separator_count)) {
            {
              tmp_sbuf_v_html_result.addWithTaint(toString(v_field_separator));
            }
          }
        }
      }
      concat_assign(v_html_result, tmp_sbuf_v_html_result.detachWithTaint());
    }
  }
  return v_html_result;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_html_select_date(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_select_date", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_select_date(arg0, arg1));
  }
}
Variant ifa_smarty_function_html_select_date(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_select_date", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_html_select_date(arg0, arg1));
}
CallInfo ci_smarty_function_html_select_date((void*)&i_smarty_function_html_select_date, (void*)&ifa_smarty_function_html_select_date, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_html_select_date_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.html_select_date.php, pm_php$Smarty$libs$plugins$function_html_select_date_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss4c4198fb, "smarty_function_html_select_date"));
  g->FVF(smarty_function_html_select_date) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
