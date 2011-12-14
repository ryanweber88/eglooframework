
#include <php/Smarty/libs/plugins/function.fetch.h>
#include <php/Smarty/libs/plugins/function.fetch.fws.h>
#include <php/Smarty/libs/plugins/function.html_checkboxes.h>
#include <php/Smarty/libs/plugins/function.html_checkboxes.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/plugins/shared.escape_special_chars.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_smarty_function_fetch;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.fetch.php line 23 */
Variant f_smarty_function_fetch(CVarRef v_params, CVarRef v_template) {
  FUNCTION_INJECTION(smarty_function_fetch);
  INTERCEPT_INJECTION("smarty_function_fetch", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_content;
  Variant v_fp;
  Variant v_uri_parts;
  Variant v_server_name;
  Variant v_host;
  int64 v_timeout = 0;
  Variant v_accept;
  Variant v_agent;
  Variant v_referer;
  Variant v_uri;
  bool v__is_proxy = false;
  Variant v_port;
  Variant v_user;
  Variant v_pass;
  Primitive v_param_key = 0;
  Variant v_param_value;
  Variant v_extra_headers;
  Variant v_proxy_host;
  int64 v_proxy_port = 0;
  Variant v_errno;
  Variant v_errstr;
  Variant v_curr_header;
  Variant v_csplit;

  {
    bool tmp0;
    {
      tmp0 = (empty(v_params, NAMSTR(s_ss8ce7db5b, "file"), true));
    }
    if (tmp0) {
      {
        LINE(26,(x_trigger_error(NAMSTR(s_ssc65c6bee, "[plugin] fetch parameter 'file' cannot be empty"), toInt32(1024LL) /* E_USER_NOTICE */)));
        return null;
      }
    }
  }
  v_content = NAMSTR(s_ss00000000, "");
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(31,(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), empty_string));
      if (tmp1) {
        const String &tmp2((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
        bool tmp3((toBoolean(x_preg_match(NAMSTR(s_ss1aa49eaa, "!^(http|ftp)://!i"), tmp2))));
        tmp1 = (!(tmp3));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(32,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
            mcp1.methodCall((obj1), NAMSTR(s_ss7bdba2dc, "isTrustedResourceDir"), 0x51DC7D49C71538DBLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            const Variant &tmp2((v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key)));
            tmp0 = (!(toBoolean((mcp1.ci->getMeth1Args())(mcp1, 1, tmp2))));
          }
          if (tmp0) {
            {
              return null;
            }
          }
        }
        {
          bool tmp0;
          {
            Silencer tmp1(true);
            LINE(37,0);
            const String &tmp2((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
            Variant tmp3((x_fopen(tmp2, NAMSTR(s_ss0d42ecf6, "r"))));
            tmp1.disable();
            tmp0 = (toBoolean(v_fp.assignVal(tmp3)));
          }
          if (tmp0) {
            {
              LOOP_COUNTER(1);
              {
                {
                  StringBuffer tmp_sbuf_v_content(512);
                  while (true) {
                    {
                      LINE(38,0);
                      bool tmp0((x_feof(toObject(v_fp))));
                      if (!(!(tmp0))) break;
                    }
                    LOOP_COUNTER_CHECK(1);
                    {
                      {
                        LINE(39,0);
                        const String &tmp0((toString(x_fgets(toObject(v_fp), 4096LL))));
                        tmp_sbuf_v_content.addWithTaint(tmp0);
                      }
                    }
                  }
                  concat_assign(v_content, tmp_sbuf_v_content.detachWithTaint());
                }
              }
              LINE(41,(x_fclose(toObject(v_fp))));
            }
          }
          else {
            {
              {
                LINE(43,0);
                const String &tmp0((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                x_trigger_error(concat3(NAMSTR(s_ssdd516d2a, "[plugin] fetch cannot read file '"), tmp0, NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */);
              }
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
            LINE(48,0);
            const String &tmp1((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
            tmp0 = (toBoolean(x_preg_match(NAMSTR(s_ss1a50cdb4, "!^http://!i"), tmp1)));
          }
          if (tmp0) {
            {
              {
                bool tmp0;
                {
                  LINE(50,0);
                  const String &tmp1((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                  const Variant &tmp2((x_parse_url(tmp1)));
                  tmp0 = (toBoolean(v_uri_parts.assignVal(tmp2)));
                }
                if (tmp0) {
                  {
                    {
                      LINE(52,0);
                      const Variant &tmp0((v_uri_parts.rvalAt(NAMSTR(s_ss2b227e19, "host"), AccessFlags::Error_Key)));
                      v_server_name.assignVal(tmp0);
                      v_host.assignVal(tmp0);
                    }
                    v_timeout = 30LL;
                    v_accept = NAMSTR(s_ss971ad762, "image/gif, image/x-xbitmap, image/jpeg, image/pjpeg, */*");
                    {
                      LINE(55,0);
                      const String &tmp0((toString(v_template.o_getPublic(NAMSTR(s_ss47222603, "_version"), true))));
                      v_agent = concat(NAMSTR(s_ssd5093dfc, "Smarty Template Engine "), tmp0);
                    }
                    v_referer = NAMSTR(s_ss00000000, "");
                    {
                      Variant tmp0(((!(empty(v_uri_parts, NAMSTR(s_ssf362b3c4, "path"), true)) ? ((Variant)(LINE(57,(v_uri_parts.rvalAt(NAMSTR(s_ssf362b3c4, "path"), AccessFlags::Error_Key))))) : ((Variant)(NAMSTR(s_ssb9e13cd6, "/"))))));
                      v_uri.assignVal(tmp0);
                    }
                    {
                      Variant tmp0;
                      if (!(empty(v_uri_parts, NAMSTR(s_sse3f54806, "query"), true))) {
                        LINE(58,0);
                        const String &tmp1((toString(v_uri_parts.rvalAt(NAMSTR(s_sse3f54806, "query"), AccessFlags::Error_Key))));
                        tmp0 = (concat(NAMSTR(s_ss35bd1fc0, "\?"), tmp1));
                      } else {
                        tmp0 = (NAMSTR(s_ss00000000, ""));
                      }
                      concat_assign(v_uri, toString(tmp0));
                    }
                    v__is_proxy = false;
                    {
                      bool tmp0;
                      {
                        tmp0 = (empty(v_uri_parts, NAMSTR(s_ss7796f185, "port"), true));
                      }
                      if (tmp0) {
                        {
                          v_port = 80LL;
                        }
                      }
                      else {
                        {
                          {
                            LINE(63,0);
                            const Variant &tmp0((v_uri_parts.rvalAt(NAMSTR(s_ss7796f185, "port"), AccessFlags::Error_Key)));
                            v_port.assignVal(tmp0);
                          }
                        }
                      }
                    }
                    {
                      bool tmp0;
                      {
                        tmp0 = (!(empty(v_uri_parts, NAMSTR(s_ss3152aae3, "user"), true)));
                      }
                      if (tmp0) {
                        {
                          {
                            LINE(66,0);
                            const Variant &tmp0((v_uri_parts.rvalAt(NAMSTR(s_ss3152aae3, "user"), AccessFlags::Error_Key)));
                            v_user.assignVal(tmp0);
                          }
                        }
                      }
                    }
                    {
                      bool tmp0;
                      {
                        tmp0 = (!(empty(v_uri_parts, NAMSTR(s_ss3d1ba673, "pass"), true)));
                      }
                      if (tmp0) {
                        {
                          {
                            LINE(69,0);
                            const Variant &tmp0((v_uri_parts.rvalAt(NAMSTR(s_ss3d1ba673, "pass"), AccessFlags::Error_Key)));
                            v_pass.assignVal(tmp0);
                          }
                        }
                      }
                    }
                    {
                      LOOP_COUNTER(2);
                      for (ArrayIter iter4 = v_params.begin(null_string, true); !iter4.end(); ++iter4) {
                        LOOP_COUNTER_CHECK(2);
                        iter4.second(v_param_value);
                        v_param_key.assignVal(iter4.first());
                        {
                          {
                            Primitive switch6;
                            switch6 = (v_param_key);
                            bool needsOrder;
                            int64 hash;
                            hash = switch6.hashForStringSwitch(8674822707452563791LL, 0LL, 0LL, 8674822707452563791LL, 8674822707452563791LL, 32LL, needsOrder);
                            switch (((uint64) hash) & 31UL) {
                            case_6_h_s5:
                            case 8UL:
                              if (equal(switch6, (NAMSTR(s_ss6352645d, "accept")))) goto case_6_5;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s6;
                            case_6_h_s9:
                              if (equal(switch6, (NAMSTR(s_ss5aa69ec2, "agent")))) goto case_6_9;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s10;
                              goto case_6_12;
                            case_6_h_s2:
                            case 12UL:
                              if (equal(switch6, (NAMSTR(s_ss64ead07d, "assign_headers")))) goto case_6_2;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s3;
                              goto case_6_12;
                            case_6_h_s6:
                            case 13UL:
                              if (equal(switch6, (NAMSTR(s_ss472c4c7d, "header")))) goto case_6_6;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s7;
                              goto case_6_12;
                            case 15UL:
                              if (equal(switch6, (NAMSTR(s_ss8ce7db5b, "file")))) goto case_6_0;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s1;
                              goto case_6_12;
                            case_6_h_s3:
                            case 16UL:
                              if (equal(switch6, (NAMSTR(s_ss3152aae3, "user")))) goto case_6_3;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s4;
                              goto case_6_12;
                            case_6_h_s11:
                            case 19UL:
                              if (equal(switch6, (NAMSTR(s_ss7fc496f2, "timeout")))) goto case_6_11;
                              goto case_6_12;
                            case_6_h_s1:
                            case 20UL:
                              if (equal(switch6, (NAMSTR(s_ssba4e7712, "assign")))) goto case_6_1;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s2;
                              goto case_6_12;
                            case_6_h_s8:
                            case 28UL:
                              if (equal(switch6, (NAMSTR(s_ssb5301cfc, "proxy_port")))) goto case_6_8;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s9;
                              goto case_6_12;
                            case_6_h_s7:
                            case 29UL:
                              if (equal(switch6, (NAMSTR(s_ssfcefcbb4, "proxy_host")))) goto case_6_7;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s8;
                              goto case_6_12;
                            case_6_h_s10:
                            case 30UL:
                              if (equal(switch6, (NAMSTR(s_ssfa193916, "referer")))) goto case_6_10;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s11;
                              goto case_6_12;
                            case_6_h_s4:
                            case 31UL:
                              if (equal(switch6, (NAMSTR(s_ss3d1ba673, "pass")))) goto case_6_4;
                              if (UNLIKELY(needsOrder)) goto case_6_h_s5;
                              goto case_6_12;
                            default: goto case_6_12;
                            }
                          }
                          case_6_0:
                            {
                            }
                          case_6_1:
                            {
                            }
                          case_6_2:
                            {
                              goto break5;
                            }
                          case_6_3:
                            {
                              if (!(empty(v_param_value))) {
                                {
                                  v_user.assignVal(v_param_value);
                                }
                              }
                              goto break5;
                            }
                          case_6_4:
                            {
                              if (!(empty(v_param_value))) {
                                {
                                  v_pass.assignVal(v_param_value);
                                }
                              }
                              goto break5;
                            }
                          case_6_5:
                            {
                              if (!(empty(v_param_value))) {
                                {
                                  v_accept.assignVal(v_param_value);
                                }
                              }
                              goto break5;
                            }
                          case_6_6:
                            {
                              if (!(empty(v_param_value))) {
                                {
                                  {
                                    bool tmp0;
                                    {
                                      LINE(95,0);
                                      bool tmp1((toBoolean(x_preg_match(NAMSTR(s_ss53f890cc, "![\\w\\d-]+: .+!"), toString(v_param_value)))));
                                      tmp0 = (!(tmp1));
                                    }
                                    if (tmp0) {
                                      {
                                        LINE(96,(x_trigger_error(concat3(NAMSTR(s_ss2b1660c5, "[plugin] invalid header format '"), toString(v_param_value), NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */)));
                                        return null;
                                      }
                                    }
                                    else {
                                      {
                                        v_extra_headers.append((v_param_value));
                                      }
                                    }
                                  }
                                }
                              }
                              goto break5;
                            }
                          case_6_7:
                            {
                              if (!(empty(v_param_value))) {
                                {
                                  v_proxy_host.assignVal(v_param_value);
                                }
                              }
                              goto break5;
                            }
                          case_6_8:
                            {
                              {
                                bool tmp0;
                                {
                                  LINE(109,0);
                                  bool tmp1((toBoolean(x_preg_match(NAMSTR(s_ss5008357b, "!\\D!"), toString(v_param_value)))));
                                  tmp0 = (!(tmp1));
                                }
                                if (tmp0) {
                                  {
                                    v_proxy_port = (toInt64(v_param_value));
                                  }
                                }
                                else {
                                  {
                                    LINE(112,(x_trigger_error(concat3(NAMSTR(s_ss0d49bea4, "[plugin] invalid value for attribute '"), toString(v_param_key), NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */)));
                                    return null;
                                  }
                                }
                              }
                              goto break5;
                            }
                          case_6_9:
                            {
                              if (!(empty(v_param_value))) {
                                {
                                  v_agent.assignVal(v_param_value);
                                }
                              }
                              goto break5;
                            }
                          case_6_10:
                            {
                              if (!(empty(v_param_value))) {
                                {
                                  v_referer.assignVal(v_param_value);
                                }
                              }
                              goto break5;
                            }
                          case_6_11:
                            {
                              {
                                bool tmp0;
                                {
                                  LINE(127,0);
                                  bool tmp1((toBoolean(x_preg_match(NAMSTR(s_ss5008357b, "!\\D!"), toString(v_param_value)))));
                                  tmp0 = (!(tmp1));
                                }
                                if (tmp0) {
                                  {
                                    v_timeout = (toInt64(v_param_value));
                                  }
                                }
                                else {
                                  {
                                    LINE(130,(x_trigger_error(concat3(NAMSTR(s_ss0d49bea4, "[plugin] invalid value for attribute '"), toString(v_param_key), NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */)));
                                    return null;
                                  }
                                }
                              }
                              goto break5;
                            }
                          case_6_12:
                            {
                              LINE(135,(x_trigger_error(concat3(NAMSTR(s_ss68276288, "[plugin] unrecognized attribute '"), toString(v_param_key), NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */)));
                              return null;
                            }
                          break5:;
                        }
                      }
                    }
                    if ((!(empty(v_proxy_host)) && !(empty(v_proxy_port)))) {
                      {
                        v__is_proxy = true;
                        {
                          LINE(141,0);
                          const Variant &tmp0((x_fsockopen(toString(v_proxy_host), toInt32(v_proxy_port), ref(v_errno), ref(v_errstr), toDouble(v_timeout))));
                          v_fp.assignVal(tmp0);
                        }
                      }
                    }
                    else {
                      {
                        {
                          LINE(143,0);
                          const Variant &tmp0((x_fsockopen(toString(v_server_name), toInt32(v_port), ref(v_errno), ref(v_errstr), toDouble(v_timeout))));
                          v_fp.assignVal(tmp0);
                        }
                      }
                    }
                    if (!(toBoolean(v_fp))) {
                      {
                        LINE(147,(x_trigger_error(concat5(NAMSTR(s_ssebecc845, "[plugin] unable to fetch: "), toString(v_errstr), NAMSTR(s_ssa2f7f57f, " ("), toString(v_errno), NAMSTR(s_ss44beffb9, ")")), toInt32(1024LL) /* E_USER_NOTICE */)));
                        return null;
                      }
                    }
                    else {
                      {
                        if (v__is_proxy) {
                          {
                            {
                              const Object &tmp0((toObject(v_fp)));
                              LINE(151,0);
                              const String &tmp1((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                              x_fputs(tmp0, concat3(NAMSTR(s_ss6eb04bc0, "GET "), tmp1, NAMSTR(s_ss96eeabfd, " HTTP/1.0\r\n")));
                            }
                          }
                        }
                        else {
                          {
                            LINE(153,(x_fputs(toObject(v_fp), concat3(NAMSTR(s_ss6eb04bc0, "GET "), toString(v_uri), NAMSTR(s_ss96eeabfd, " HTTP/1.0\r\n")))));
                          }
                        }
                        if (!(empty(v_host))) {
                          {
                            LINE(156,(x_fputs(toObject(v_fp), concat3(NAMSTR(s_ss313763f8, "Host: "), toString(v_host), NAMSTR(s_ssb1a958ab, "\r\n")))));
                          }
                        }
                        if (!(empty(v_accept))) {
                          {
                            LINE(159,(x_fputs(toObject(v_fp), concat3(NAMSTR(s_ssc5eb0bf2, "Accept: "), toString(v_accept), NAMSTR(s_ssb1a958ab, "\r\n")))));
                          }
                        }
                        if (!(empty(v_agent))) {
                          {
                            LINE(162,(x_fputs(toObject(v_fp), concat3(NAMSTR(s_ssacdd3dda, "User-Agent: "), toString(v_agent), NAMSTR(s_ssb1a958ab, "\r\n")))));
                          }
                        }
                        if (!(empty(v_referer))) {
                          {
                            LINE(165,(x_fputs(toObject(v_fp), concat3(NAMSTR(s_sseb0b3ee3, "Referer: "), toString(v_referer), NAMSTR(s_ssb1a958ab, "\r\n")))));
                          }
                        }
                        if ((isset(v_extra_headers) && x_is_array(v_extra_headers))) {
                          {
                            {
                              LOOP_COUNTER(7);
                              for (ArrayIter iter9 = v_extra_headers.begin(null_string, true); !iter9.end(); ++iter9) {
                                LOOP_COUNTER_CHECK(7);
                                iter9.second(v_curr_header);
                                {
                                  LINE(169,(x_fputs(toObject(v_fp), concat(toString(v_curr_header), NAMSTR(s_ssb1a958ab, "\r\n")))));
                                }
                              }
                            }
                          }
                        }
                        if ((!(empty(v_user)) && !(empty(v_pass)))) {
                          {
                            {
                              const Object &tmp0((toObject(v_fp)));
                              LINE(173,0);
                              const String &tmp1((x_base64_encode(concat3(toString(v_user), NAMSTR(s_ssdb381ae8, ":"), toString(v_pass)))));
                              x_fputs(tmp0, concat3(NAMSTR(s_ss68eb8ce7, "Authorization: BASIC "), tmp1, NAMSTR(s_ssb1a958ab, "\r\n")));
                            }
                          }
                        }
                        LINE(176,(x_fputs(toObject(v_fp), NAMSTR(s_ssb1a958ab, "\r\n"))));
                        LOOP_COUNTER(10);
                        {
                          {
                            StringBuffer tmp_sbuf_v_content(512);
                            while (true) {
                              {
                                LINE(177,0);
                                bool tmp0((x_feof(toObject(v_fp))));
                                if (!(!(tmp0))) break;
                              }
                              LOOP_COUNTER_CHECK(10);
                              {
                                {
                                  LINE(178,0);
                                  const String &tmp0((toString(x_fgets(toObject(v_fp), 4096LL))));
                                  tmp_sbuf_v_content.addWithTaint(tmp0);
                                }
                              }
                            }
                            concat_assign(v_content, tmp_sbuf_v_content.detachWithTaint());
                          }
                        }
                        LINE(180,(x_fclose(toObject(v_fp))));
                        {
                          LINE(181,0);
                          const Variant &tmp0((x_preg_split(NAMVAR(s_svs237b3958, "!\r\n\r\n!"), v_content, toInt32(2LL))));
                          v_csplit.assignVal(tmp0);
                        }
                        {
                          LINE(183,0);
                          const Variant &tmp0((v_csplit.rvalAt(1LL, AccessFlags::Error)));
                          v_content.assignVal(tmp0);
                        }
                        {
                          bool tmp0;
                          {
                            tmp0 = (!(empty(v_params, NAMSTR(s_ss64ead07d, "assign_headers"), true)));
                          }
                          if (tmp0) {
                            {
                              {
                                LINE(186,0);
                                MethodCallPackage mcp0;
                                CVarRef obj0 = v_template;
                                mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
                                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                                const Variant &tmp1((v_params.rvalAt(NAMSTR(s_ss64ead07d, "assign_headers"), AccessFlags::Error_Key)));
                                const Variant &tmp2((v_csplit.rvalAt(0LL, AccessFlags::Error)));
                                const Variant &tmp3((x_preg_split(NAMVAR(s_svs4956900f, "!\r\n!"), tmp2)));
                                (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, tmp3);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  {
                    LINE(190,(x_trigger_error(NAMSTR(s_ss1672008f, "[plugin fetch] unable to parse URL, check syntax"), toInt32(1024LL) /* E_USER_NOTICE */)));
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
                  Silencer tmp1(true);
                  LINE(195,0);
                  const String &tmp2((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                  Variant tmp3((x_fopen(tmp2, NAMSTR(s_ss0d42ecf6, "r"))));
                  tmp1.disable();
                  tmp0 = (toBoolean(v_fp.assignVal(tmp3)));
                }
                if (tmp0) {
                  {
                    LOOP_COUNTER(11);
                    {
                      {
                        StringBuffer tmp_sbuf_v_content(512);
                        while (true) {
                          {
                            LINE(196,0);
                            bool tmp0((x_feof(toObject(v_fp))));
                            if (!(!(tmp0))) break;
                          }
                          LOOP_COUNTER_CHECK(11);
                          {
                            {
                              LINE(197,0);
                              const String &tmp0((toString(x_fgets(toObject(v_fp), 4096LL))));
                              tmp_sbuf_v_content.addWithTaint(tmp0);
                            }
                          }
                        }
                        concat_assign(v_content, tmp_sbuf_v_content.detachWithTaint());
                      }
                    }
                    LINE(199,(x_fclose(toObject(v_fp))));
                  }
                }
                else {
                  {
                    {
                      LINE(201,0);
                      const String &tmp0((toString(v_params.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
                      x_trigger_error(concat3(NAMSTR(s_ssdd516d2a, "[plugin] fetch cannot read file '"), tmp0, NAMSTR(s_sse07b87c4, "'")), toInt32(1024LL) /* E_USER_NOTICE */);
                    }
                    return null;
                  }
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
      tmp0 = (!(empty(v_params, NAMSTR(s_ssba4e7712, "assign"), true)));
    }
    if (tmp0) {
      {
        {
          LINE(210,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_template;
          mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((v_params.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, tmp1, v_content);
        }
      }
    }
    else {
      {
        return v_content;
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_fetch(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_fetch", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_fetch(arg0, arg1));
  }
}
Variant ifa_smarty_function_fetch(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_fetch", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_fetch(arg0, arg1));
}
CallInfo ci_smarty_function_fetch((void*)&i_smarty_function_fetch, (void*)&ifa_smarty_function_fetch, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_fetch_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.fetch.php, pm_php$Smarty$libs$plugins$function_fetch_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_sse072f652, "smarty_function_fetch"));
  g->FVF(smarty_function_fetch) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_smarty_function_html_checkboxes_output;
extern CallInfo ci_smarty_function_html_checkboxes;
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/plugins/function.html_checkboxes.php line 126 */
String f_smarty_function_html_checkboxes_output(CVarRef v_name, CVarRef v_value, CVarRef v_output, CVarRef v_selected, CVarRef v_extra, CVarRef v_separator, CVarRef v_labels) {
  FUNCTION_INJECTION(smarty_function_html_checkboxes_output);
  INTERCEPT_INJECTION("smarty_function_html_checkboxes_output", array_createvi(7, toVPOD(v_name), toVPOD(v_value), toVPOD(v_output), toVPOD(v_selected), toVPOD(v_extra), toVPOD(v_separator), toVPOD(v_labels)), r);
  String v__output;

  v__output = NAMSTR(s_ss00000000, "");
  if (toBoolean(v_labels)) {
    concat_assign(v__output, NAMSTR(s_ss5eac0253, "<label>"));
  }
  {
    LINE(130,0);
    const String &tmp0((toString(f_smarty_function_escape_special_chars(v_name))));
    LINE(131,0);
    const String &tmp1((toString(f_smarty_function_escape_special_chars(v_value))));
    concat_assign(v__output, concat5(NAMSTR(s_ssab9d3e92, "<input type=\"checkbox\" name=\""), tmp0, NAMSTR(s_ss3167b714, "[]\" value=\""), tmp1, NAMSTR(s_ss7e5fc106, "\"")));
  }
  if (LINE(133,(x_in_array(VarNR((toString(v_value))), v_selected)))) {
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
/* SRC: Smarty/libs/plugins/function.html_checkboxes.php line 41 */
Variant f_smarty_function_html_checkboxes(Variant v_params, Variant v_template) {
  FUNCTION_INJECTION(smarty_function_html_checkboxes);
  INTERCEPT_INJECTION("smarty_function_html_checkboxes", array_createvi(2, toVPOD(v_params), toVPOD(v_template)), r);
  Variant v_name;
  Variant v_values;
  Variant v_options;
  Variant v_selected;
  Variant v_separator;
  Variant v_labels;
  Variant v_output;
  Variant v_extra;
  Variant v__key;
  Variant v__val;
  Variant v__html_result;
  Variant v__i;


  class VariableTable : public LVariableTable {
  public:
    Variant &v_params; Variant &v_template; Variant &v_name; Variant &v_values; Variant &v_options; Variant &v_selected; Variant &v_separator; Variant &v_labels; Variant &v_output; Variant &v_extra; Variant &v__key; Variant &v__val; Variant &v__html_result; Variant &v__i;
    VariableTable(Variant &r_params, Variant &r_template, Variant &r_name, Variant &r_values, Variant &r_options, Variant &r_selected, Variant &r_separator, Variant &r_labels, Variant &r_output, Variant &r_extra, Variant &r__key, Variant &r__val, Variant &r__html_result, Variant &r__i) : v_params(r_params), v_template(r_template), v_name(r_name), v_values(r_values), v_options(r_options), v_selected(r_selected), v_separator(r_separator), v_labels(r_labels), v_output(r_output), v_extra(r_extra), v__key(r__key), v__val(r__val), v__html_result(r__html_result), v__i(r__i) {}
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
  } variableTable(v_params, v_template, v_name, v_values, v_options, v_selected, v_separator, v_labels, v_output, v_extra, v__key, v__val, v__html_result, v__i);
  LVariableTable* ATTRIBUTE_UNUSED variables = &variableTable;
  LINE(43,(require(concat(toString(getDynamicConstant(g->k_SMARTY_PLUGINS_DIR, NAMSTR(s_ss103febef, "SMARTY_PLUGINS_DIR"))), NAMSTR(s_ss688c64e5, "shared.escape_special_chars.php")), true, variables, "Smarty/libs/plugins/")));
  v_name = NAMSTR(s_ss25ee924e, "checkbox");
  setNull(v_values);
  setNull(v_options);
  setNull(v_selected);
  v_separator = NAMSTR(s_ss00000000, "");
  v_labels = true;
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
            case_5_h_s2:
            case 2UL:
              if (equal(switch5, (NAMSTR(s_ssf40f832e, "labels")))) goto case_5_2;
              if (UNLIKELY(needsOrder)) goto case_5_h_s3;
              goto case_5_10;
            case_5_h_s6:
            case 7UL:
              if (equal(switch5, (NAMSTR(s_ss7bdea2f6, "checked")))) goto case_5_6;
              if (UNLIKELY(needsOrder)) goto case_5_h_s7;
              goto case_5_10;
            case_5_h_s7:
            case 10UL:
              if (equal(switch5, (NAMSTR(s_ssaa45abe7, "selected")))) goto case_5_7;
              if (UNLIKELY(needsOrder)) goto case_5_h_s8;
              goto case_5_10;
            case 18UL:
              if (equal(switch5, (NAMSTR(s_ssdc3cbddc, "name")))) goto case_5_0;
              if (UNLIKELY(needsOrder)) goto case_5_h_s1;
              goto case_5_10;
            case_5_h_s1:
            case 20UL:
              if (equal(switch5, (NAMSTR(s_ss09a18578, "separator")))) goto case_5_1;
              if (UNLIKELY(needsOrder)) goto case_5_h_s2;
            case_5_h_s9:
              if (equal(switch5, (NAMSTR(s_ssba4e7712, "assign")))) goto case_5_9;
              goto case_5_10;
            case_5_h_s3:
            case 24UL:
              if (equal(switch5, (NAMSTR(s_ss60dca1ea, "options")))) goto case_5_3;
              if (UNLIKELY(needsOrder)) goto case_5_h_s4;
              goto case_5_10;
            case_5_h_s4:
            case 28UL:
              if (equal(switch5, (NAMSTR(s_ssb86d1574, "values")))) goto case_5_4;
              if (UNLIKELY(needsOrder)) goto case_5_h_s5;
              goto case_5_10;
            case_5_h_s5:
            case 31UL:
              if (equal(switch5, (NAMSTR(s_ss7a5dbb24, "output")))) goto case_5_5;
              if (UNLIKELY(needsOrder)) goto case_5_h_s6;
            case_5_h_s8:
              if (equal(switch5, (NAMSTR(s_ss3adc677d, "checkboxes")))) goto case_5_8;
              if (UNLIKELY(needsOrder)) goto case_5_h_s9;
              goto case_5_10;
            default: goto case_5_10;
            }
          }
          case_5_0:
            {
            }
          case_5_1:
            {
              variables->get(toString(v__key)).assignVal(v__val);
              goto break4;
            }
          case_5_2:
            {
              variables->get(toString(v__key)) = (toBoolean(v__val));
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
                LINE(72,0);
                const Variant &tmp1((x_array_values(VarNR((toArray(v__val))))));
                tmp0.assignVal(tmp1);
              }
              goto break4;
            }
          case_5_6:
            {
            }
          case_5_7:
            {
              {
                LINE(77,0);
                const Variant &tmp0((x_array_values(VarNR((toArray(v__val))))));
                const Variant &tmp1((x_array_map(2, NAMVAR(s_svs2890e8bd, "strval"), tmp0)));
                v_selected.assignVal(tmp1);
              }
              goto break4;
            }
          case_5_8:
            {
              LINE(81,(x_trigger_error(NAMSTR(s_ss30d67701, "html_checkboxes: the use of the \"checkboxes\" attribute is deprecated, use \"options\" instead"), toInt32(512LL) /* E_USER_WARNING */)));
              v_options = (toArray(v__val));
              goto break4;
            }
          case_5_9:
            {
              goto break4;
            }
          case_5_10:
            {
              if (!(x_is_array(v__val))) {
                {
                  {
                    const String &tmp0((toString(v__key)));
                    LINE(90,0);
                    const String &tmp1((toString(f_smarty_function_escape_special_chars(v__val))));
                    tmp_sbuf_v_extra.addWithTaint(" ", 1).addWithTaint(tmp0).addWithTaint("=\"", 2).addWithTaint(tmp1).addWithTaint("\"", 1);
                  }
                }
              }
              else {
                {
                  LINE(92,(x_trigger_error(concat3(NAMSTR(s_sse8d1e8fe, "html_checkboxes: extra attribute '"), toString(v__key), NAMSTR(s_ss3233b868, "' cannot be an array")), toInt32(1024LL) /* E_USER_NOTICE */)));
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
  LINE(101,(x_settype(ref(v_selected), NAMSTR(s_ss8c04b960, "array"))));
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
            LINE(107,0);
            const String &tmp0((f_smarty_function_html_checkboxes_output(v_name, v__key, v__val, v_selected, v_extra, v_separator, v_labels)));
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
              Variant tmp0(((isset(v_output, v__i) ? ((Variant)(LINE(112,(v_output.rvalAt(v__i, AccessFlags::Error))))) : ((Variant)(NAMSTR(s_ss00000000, ""))))));
              v__val.assignVal(tmp0);
            }
            {
              LINE(113,0);
              const String &tmp0((f_smarty_function_html_checkboxes_output(v_name, v__key, v__val, v_selected, v_extra, v_separator, v_labels)));
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
          LINE(119,0);
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
        return LINE(121,(x_implode(NAMVAR(s_svs66d2232c, "\n"), v__html_result)));
      }
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
Variant i_smarty_function_html_checkboxes_output(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 7)) throw_missing_arguments("smarty_function_html_checkboxes_output", count+1);
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
    return (f_smarty_function_html_checkboxes_output(arg0, arg1, arg2, arg3, arg4, arg5, arg6));
  }
}
Variant ifa_smarty_function_html_checkboxes_output(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
   throw_missing_arguments("smarty_function_html_checkboxes_output", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  CVarRef arg4(UNLIKELY(count <= 4) ? null_variant : a4);
  CVarRef arg5(UNLIKELY(count <= 5) ? null_variant : a5);
  CVarRef arg6(null);
  return (f_smarty_function_html_checkboxes_output(arg0, arg1, arg2, arg3, arg4, arg5, arg6));
}
Variant i_smarty_function_html_checkboxes(void *extra, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_checkboxes", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (f_smarty_function_html_checkboxes(arg0, arg1));
  }
}
Variant ifa_smarty_function_html_checkboxes(void *extra, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("smarty_function_html_checkboxes", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (f_smarty_function_html_checkboxes(arg0, arg1));
}
CallInfo ci_smarty_function_html_checkboxes_output((void*)&i_smarty_function_html_checkboxes_output, (void*)&ifa_smarty_function_html_checkboxes_output, 7, 0, 0x0000000000000000LL);
CallInfo ci_smarty_function_html_checkboxes((void*)&i_smarty_function_html_checkboxes, (void*)&ifa_smarty_function_html_checkboxes, 2, 0, 0x0000000000000000LL);
Variant pm_php$Smarty$libs$plugins$function_html_checkboxes_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/plugins/function.html_checkboxes.php, pm_php$Smarty$libs$plugins$function_html_checkboxes_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->declareFunctionLit(NAMSTR(s_ss9b03a98c, "smarty_function_html_checkboxes"));
  g->FVF(smarty_function_html_checkboxes) = true;
  g->declareFunctionLit(NAMSTR(s_ssd2053662, "smarty_function_html_checkboxes_output"));
  g->FVF(smarty_function_html_checkboxes_output) = true;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
