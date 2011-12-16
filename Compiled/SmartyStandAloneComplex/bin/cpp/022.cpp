
#include <php/Smarty/libs/sysplugins/smarty_internal_parsetree.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_parsetree.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_register.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_register.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_eval.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_resource_eval.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 205 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_text)
const InstanceOfInfo c__smarty_text::s_instanceof_table[] = {
  {0x52757923E7684C64LL,1,"_smarty_text",&cw__smarty_text},
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
};
const int c__smarty_text::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c__smarty_text::ci___construct((void*)&c__smarty_text::i___construct, (void*)&c__smarty_text::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c__smarty_text::ci_to_smarty_php((void*)&c__smarty_text::i_to_smarty_php, (void*)&c__smarty_text::ifa_to_smarty_php, 0, 4, 0x0000000000000000LL);
Variant c__smarty_text::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo__smarty_text);
  }
  c__smarty_text *self ATTRIBUTE_UNUSED (static_cast<c__smarty_text*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_text::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c__smarty_text::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo__smarty_text);
  }
  c__smarty_text *self ATTRIBUTE_UNUSED (static_cast<c__smarty_text*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_text::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c__smarty_text::ifa_to_smarty_php(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_to_smarty_php, coo__smarty_text);
  }
  c__smarty_text *self ATTRIBUTE_UNUSED (static_cast<c__smarty_text*>(mcp.obj));
  return (self->c__smarty_text::t_to_smarty_php());
}
const MethodCallInfoTable c__smarty_text::s_call_info_table[] = {
  { 0x03E370BA2B1EA4F0LL, 1, 13, "to_smarty_php", &c__smarty_text::ci_to_smarty_php },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c__smarty_text::ci___construct },
  { 0, 1, 0, 0 }
};
const int c__smarty_text::s_call_info_index[] = {
  3,
  0,-1,-1,1,
};
c__smarty_text *c__smarty_text::create(CVarRef v_parser, CVarRef v_data) {
  CountableHelper h(this);
  init();
  t___construct(v_parser, v_data);
  return this;
}
const ObjectStaticCallbacks cw__smarty_text = {
  (ObjectData*(*)(ObjectData*))coo__smarty_text,
  c__smarty_text::s_call_info_table,c__smarty_text::s_call_info_index,
  c__smarty_text::s_instanceof_table,c__smarty_text::s_instanceof_index,
  &c__smarty_text::s_class_name,
  &c__smarty_text::os_prop_table,&c__smarty_text::ci___construct,0,&cw__smarty_parsetree
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 207 */
void c__smarty_text::t___construct(Variant v_parser, Variant v_data) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_text, _smarty_text::__construct);
  INTERCEPT_INJECTION("_smarty_text::__construct", array_createvi(2, toVPOD(v_parser), toVPOD(v_data)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss1d4f2d02, "parser"), v_parser);
  m_data.assignVal(v_data);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 213 */
Variant c__smarty_text::t_to_smarty_php() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(_smarty_text, _smarty_text::to_smarty_php);
  INTERCEPT_INJECTION("_smarty_text::to_smarty_php", null_array, r);
  return m_data;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 141 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_template_buffer)
const InstanceOfInfo c__smarty_template_buffer::s_instanceof_table[] = {
  {0x79DEED715460F5A8LL,1,"_smarty_template_buffer",&cw__smarty_template_buffer},
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
};
const int c__smarty_template_buffer::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c__smarty_template_buffer::ci___construct((void*)&c__smarty_template_buffer::i___construct, (void*)&c__smarty_template_buffer::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c__smarty_template_buffer::ci_append_subtree((void*)&c__smarty_template_buffer::i_append_subtree, (void*)&c__smarty_template_buffer::ifa_append_subtree, 1, 4, 0x0000000000000000LL);
CallInfo c__smarty_template_buffer::ci_to_smarty_php((void*)&c__smarty_template_buffer::i_to_smarty_php, (void*)&c__smarty_template_buffer::ifa_to_smarty_php, 0, 4, 0x0000000000000000LL);
Variant c__smarty_template_buffer::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo__smarty_template_buffer);
  }
  c__smarty_template_buffer *self ATTRIBUTE_UNUSED (static_cast<c__smarty_template_buffer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("_smarty_template_buffer::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c__smarty_template_buffer::i_append_subtree(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_append_subtree, coo__smarty_template_buffer);
  }
  c__smarty_template_buffer *self ATTRIBUTE_UNUSED (static_cast<c__smarty_template_buffer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("_smarty_template_buffer::append_subtree", "_smarty_parsetree", 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_append_subtree(arg0), null);
  }
}
Variant c__smarty_template_buffer::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo__smarty_template_buffer);
  }
  c__smarty_template_buffer *self ATTRIBUTE_UNUSED (static_cast<c__smarty_template_buffer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("_smarty_template_buffer::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c__smarty_template_buffer::ifa_append_subtree(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append_subtree, coo__smarty_template_buffer);
  }
  c__smarty_template_buffer *self ATTRIBUTE_UNUSED (static_cast<c__smarty_template_buffer*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("_smarty_template_buffer::append_subtree", "_smarty_parsetree", 1);
  CVarRef arg0(a0);
  return (self->t_append_subtree(arg0), null);
}
Variant c__smarty_template_buffer::ifa_to_smarty_php(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_to_smarty_php, coo__smarty_template_buffer);
  }
  c__smarty_template_buffer *self ATTRIBUTE_UNUSED (static_cast<c__smarty_template_buffer*>(mcp.obj));
  return (self->c__smarty_template_buffer::t_to_smarty_php());
}
const MethodCallInfoTable c__smarty_template_buffer::s_call_info_table[] = {
  { 0x03E370BA2B1EA4F0LL, 1, 13, "to_smarty_php", &c__smarty_template_buffer::ci_to_smarty_php },
  { 0x278E3AB52EABB542LL, 1, 14, "append_subtree", &c__smarty_template_buffer::ci_append_subtree },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c__smarty_template_buffer::ci___construct },
  { 0, 1, 0, 0 }
};
const int c__smarty_template_buffer::s_call_info_index[] = {
  7,
  0,-1,1,-1,-1,-1,-1,2,

};
c__smarty_template_buffer *c__smarty_template_buffer::create(CVarRef v_parser) {
  CountableHelper h(this);
  init();
  t___construct(v_parser);
  return this;
}
const ObjectStaticCallbacks cw__smarty_template_buffer = {
  (ObjectData*(*)(ObjectData*))coo__smarty_template_buffer,
  c__smarty_template_buffer::s_call_info_table,c__smarty_template_buffer::s_call_info_index,
  c__smarty_template_buffer::s_instanceof_table,c__smarty_template_buffer::s_instanceof_index,
  &c__smarty_template_buffer::s_class_name,
  &c__smarty_template_buffer::os_prop_table,&c__smarty_template_buffer::ci___construct,0,&cw__smarty_parsetree
};
void c__smarty_template_buffer::init() {
  c__smarty_parsetree::init();
  m_subtrees = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 143 */
void c__smarty_template_buffer::t___construct(Variant v_parser) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_template_buffer, _smarty_template_buffer::__construct);
  INTERCEPT_INJECTION("_smarty_template_buffer::__construct", array_createvi(1, toVPOD(v_parser)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss1d4f2d02, "parser"), v_parser);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 148 */
void c__smarty_template_buffer::tt_append_subtree(p__smarty_parsetree v_subtree) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(_smarty_template_buffer, _smarty_template_buffer::append_subtree);
  INTERCEPT_INJECTION("_smarty_template_buffer::append_subtree", array_createvi(1, toVPOD(v_subtree)), );
  m_subtrees.append((VarNR(v_subtree)));
}
void c__smarty_template_buffer::t_append_subtree(CVarRef v_subtree) {
  if(!v_subtree.instanceof(NAMSTR(s_ss9cc930d0, "_smarty_parsetree"))) {
    throw_unexpected_argument_type(1,"_smarty_template_buffer::append_subtree()","_smarty_parsetree",v_subtree);
    return;
  }
  tt_append_subtree((const p__smarty_parsetree&)v_subtree.toCObjRef());
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 153 */
Variant c__smarty_template_buffer::t_to_smarty_php() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_template_buffer, _smarty_template_buffer::to_smarty_php);
  INTERCEPT_INJECTION("_smarty_template_buffer::to_smarty_php", null_array, r);
  String v_code;
  int64 v_key = 0;
  int v_cnt = 0;
  Variant v_subtree;

  Variant tmp_ref;
  v_code = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(1);
    {
      v_key = 0LL;
      LINE(156,0);
      int tmp0((x_count(m_subtrees)));
      v_cnt = tmp0;
    }
    for (; (less(v_key, v_cnt)); v_key++) {
      LOOP_COUNTER_CHECK(1);
      {
        if (less((v_key + 2LL), v_cnt)) {
          {
            {
              bool tmp0;
              {
                LINE(158,0);
                const Variant &tmp1((m_subtrees.rvalAt(v_key, AccessFlags::Error)));
                bool tmp2 = (instanceOf(tmp1, NAMSTR(s_ss5b9943c5, "_smarty_linebreak")));
                if (tmp2) {
                  int64 tmp3(((v_key + 1LL)));
                  const Variant &tmp4((m_subtrees.rvalAt(tmp3, AccessFlags::Error)));
                  tmp2 = (instanceOf(tmp4, NAMSTR(s_sse95d3705, "_smarty_tag")));
                }
                bool tmp5 = (tmp2);
                if (tmp5) {
                  int64 tmp6(((v_key + 1LL)));
                  const Variant &tmp7((m_subtrees.rvalRef(tmp6, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssa9853128, "data"), true)));
                  tmp5 = (equal(tmp7, NAMSTR(s_ss00000000, "")));
                }
                bool tmp8 = (tmp5);
                if (tmp8) {
                  int64 tmp9(((v_key + 2LL)));
                  const Variant &tmp10((m_subtrees.rvalAt(tmp9, AccessFlags::Error)));
                  tmp8 = (instanceOf(tmp10, NAMSTR(s_ss5b9943c5, "_smarty_linebreak")));
                }
                tmp0 = (tmp8);
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  v_key = (v_key + 1LL);
                  continue;
                }
              }
            }
            {
              bool tmp0;
              {
                LINE(162,0);
                const String &tmp1((toString(m_subtrees.rvalRef(v_key, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssa9853128, "data"), true))));
                const Variant &tmp2((x_substr(tmp1, toInt32(-1LL))));
                bool tmp3 = (equal(tmp2, NAMSTR(s_ss2e7b6cab, "<")));
                if (tmp3) {
                  int64 tmp4(((v_key + 1LL)));
                  const Variant &tmp5((m_subtrees.rvalRef(tmp4, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssa9853128, "data"), true)));
                  tmp3 = (equal(tmp5, NAMSTR(s_ss00000000, "")));
                }
                bool tmp6 = (tmp3);
                if (tmp6) {
                  int64 tmp7(((v_key + 2LL)));
                  const String &tmp8((toString(m_subtrees.rvalRef(tmp7, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_ssa9853128, "data"), true))));
                  const Variant &tmp9((x_substr(tmp8, toInt32(-1LL))));
                  tmp6 = (equal(tmp9, NAMSTR(s_ss35bd1fc0, "\?")));
                }
                tmp0 = (tmp6);
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  v_key = (v_key + 2LL);
                  continue;
                }
              }
            }
          }
        }
        {
          bool tmp0;
          {
            LINE(167,0);
            const Variant &tmp1((x_substr(v_code, toInt32(-1LL))));
            tmp0 = (equal(tmp1, NAMSTR(s_ss2e7b6cab, "<")));
          }
          if (tmp0) {
            {
              {
                LINE(168,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = m_subtrees.rvalAt(v_key, AccessFlags::Error);
                mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
                v_subtree.assignVal(tmp1);
              }
              {
                bool tmp0;
                {
                  LINE(169,0);
                  const Variant &tmp1((x_substr(toString(v_subtree), toInt32(0LL), toInt32(1LL))));
                  tmp0 = (equal(tmp1, NAMSTR(s_ss35bd1fc0, "\?")));
                }
                if (tmp0) {
                  {
                    {
                      String tmp0((v_code));
                      LINE(170,0);
                      int tmp1((x_strlen(v_code)));
                      int tmp2((toInt32((tmp1 - 1LL))));
                      const String &tmp3((toString(x_substr(tmp0, toInt32(0LL), tmp2))));
                      const String &tmp4((toString(x_substr(toString(v_subtree), toInt32(1LL)))));
                      v_code = concat3(tmp3, NAMSTR(s_ssc50a2e1a, "<<\?php \?>\?"), tmp4);
                    }
                  }
                }
                else {
                  bool tmp0;
                  {
                    bool tmp1 = (LINE(171,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ssedc3afde, "asp_tags"), true)))));
                    if (tmp1) {
                      const Variant &tmp2((x_substr(toString(v_subtree), toInt32(0LL), toInt32(1LL))));
                      tmp1 = (equal(tmp2, NAMSTR(s_ss36c6b0f7, "%")));
                    }
                    tmp0 = (tmp1);
                  }
                  if (tmp0) {
                    {
                      {
                        String tmp0((v_code));
                        LINE(172,0);
                        int tmp1((x_strlen(v_code)));
                        int tmp2((toInt32((tmp1 - 1LL))));
                        const String &tmp3((toString(x_substr(tmp0, toInt32(0LL), tmp2))));
                        const String &tmp4((toString(x_substr(toString(v_subtree), toInt32(1LL)))));
                        v_code = concat3(tmp3, NAMSTR(s_ss4067425c, "<<\?php \?>%"), tmp4);
                      }
                    }
                  }
                  else {
                    {
                      concat_assign(v_code, toString(v_subtree));
                    }
                  }
                }
              }
              continue;
            }
          }
        }
        {
          bool tmp0;
          {
            bool tmp1 = (LINE(178,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ssedc3afde, "asp_tags"), true)))));
            if (tmp1) {
              const Variant &tmp2((x_substr(v_code, toInt32(-1LL))));
              tmp1 = (equal(tmp2, NAMSTR(s_ss36c6b0f7, "%")));
            }
            tmp0 = (tmp1);
          }
          if (tmp0) {
            {
              {
                LINE(179,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = m_subtrees.rvalAt(v_key, AccessFlags::Error);
                mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
                v_subtree.assignVal(tmp1);
              }
              {
                bool tmp0;
                {
                  LINE(180,0);
                  const Variant &tmp1((x_substr(toString(v_subtree), toInt32(0LL), toInt32(1LL))));
                  tmp0 = (equal(tmp1, NAMSTR(s_ss9767c666, ">")));
                }
                if (tmp0) {
                  {
                    {
                      String tmp0((v_code));
                      LINE(181,0);
                      int tmp1((x_strlen(v_code)));
                      int tmp2((toInt32((tmp1 - 1LL))));
                      const String &tmp3((toString(x_substr(tmp0, toInt32(0LL), tmp2))));
                      const String &tmp4((toString(x_substr(toString(v_subtree), toInt32(1LL)))));
                      v_code = concat3(tmp3, NAMSTR(s_ss7fcf9f47, "%<\?php \?>>"), tmp4);
                    }
                  }
                }
                else {
                  {
                    concat_assign(v_code, toString(v_subtree));
                  }
                }
              }
              continue;
            }
          }
        }
        {
          bool tmp0;
          {
            LINE(187,0);
            const Variant &tmp1((x_substr(v_code, toInt32(-1LL))));
            tmp0 = (equal(tmp1, NAMSTR(s_ss35bd1fc0, "\?")));
          }
          if (tmp0) {
            {
              {
                LINE(188,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = m_subtrees.rvalAt(v_key, AccessFlags::Error);
                mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
                v_subtree.assignVal(tmp1);
              }
              {
                bool tmp0;
                {
                  LINE(189,0);
                  const Variant &tmp1((x_substr(toString(v_subtree), toInt32(0LL), toInt32(1LL))));
                  tmp0 = (equal(tmp1, NAMSTR(s_ss9767c666, ">")));
                }
                if (tmp0) {
                  {
                    {
                      String tmp0((v_code));
                      LINE(190,0);
                      int tmp1((x_strlen(v_code)));
                      int tmp2((toInt32((tmp1 - 1LL))));
                      const String &tmp3((toString(x_substr(tmp0, toInt32(0LL), tmp2))));
                      const String &tmp4((toString(x_substr(toString(v_subtree), toInt32(1LL)))));
                      v_code = concat3(tmp3, NAMSTR(s_ss62b842b2, "\?<\?php \?>>"), tmp4);
                    }
                  }
                }
                else {
                  {
                    concat_assign(v_code, toString(v_subtree));
                  }
                }
              }
              continue;
            }
          }
        }
        {
          LINE(196,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = m_subtrees.rvalAt(v_key, AccessFlags::Error);
          mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
          concat_assign(v_code, tmp1);
        }
      }
    }
  }
  return v_code;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 67 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_doublequoted)
const InstanceOfInfo c__smarty_doublequoted::s_instanceof_table[] = {
  {0x71AF129EEE5C2AC5LL,1,"_smarty_doublequoted",&cw__smarty_doublequoted},
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
};
const int c__smarty_doublequoted::s_instanceof_index[] = {
  3,
  -1,0,1,-1,
};
CallInfo c__smarty_doublequoted::ci___construct((void*)&c__smarty_doublequoted::i___construct, (void*)&c__smarty_doublequoted::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c__smarty_doublequoted::ci_append_subtree((void*)&c__smarty_doublequoted::i_append_subtree, (void*)&c__smarty_doublequoted::ifa_append_subtree, 1, 4, 0x0000000000000000LL);
CallInfo c__smarty_doublequoted::ci_to_smarty_php((void*)&c__smarty_doublequoted::i_to_smarty_php, (void*)&c__smarty_doublequoted::ifa_to_smarty_php, 0, 4, 0x0000000000000000LL);
Variant c__smarty_doublequoted::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo__smarty_doublequoted);
  }
  c__smarty_doublequoted *self ATTRIBUTE_UNUSED (static_cast<c__smarty_doublequoted*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) return throw_missing_typed_argument("_smarty_doublequoted::__construct", "_smarty_parsetree", 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    CVarRef arg1((ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c__smarty_doublequoted::i_append_subtree(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_append_subtree, coo__smarty_doublequoted);
  }
  c__smarty_doublequoted *self ATTRIBUTE_UNUSED (static_cast<c__smarty_doublequoted*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("_smarty_doublequoted::append_subtree", "_smarty_parsetree", 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_append_subtree(arg0), null);
  }
}
Variant c__smarty_doublequoted::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo__smarty_doublequoted);
  }
  c__smarty_doublequoted *self ATTRIBUTE_UNUSED (static_cast<c__smarty_doublequoted*>(mcp.obj));
  if (UNLIKELY(count < 2)) return throw_missing_typed_argument("_smarty_doublequoted::__construct", "_smarty_parsetree", 2);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c__smarty_doublequoted::ifa_append_subtree(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_append_subtree, coo__smarty_doublequoted);
  }
  c__smarty_doublequoted *self ATTRIBUTE_UNUSED (static_cast<c__smarty_doublequoted*>(mcp.obj));
  if (UNLIKELY(count < 1)) return throw_missing_typed_argument("_smarty_doublequoted::append_subtree", "_smarty_parsetree", 1);
  CVarRef arg0(a0);
  return (self->t_append_subtree(arg0), null);
}
Variant c__smarty_doublequoted::ifa_to_smarty_php(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_to_smarty_php, coo__smarty_doublequoted);
  }
  c__smarty_doublequoted *self ATTRIBUTE_UNUSED (static_cast<c__smarty_doublequoted*>(mcp.obj));
  return (self->c__smarty_doublequoted::t_to_smarty_php());
}
const MethodCallInfoTable c__smarty_doublequoted::s_call_info_table[] = {
  { 0x03E370BA2B1EA4F0LL, 1, 13, "to_smarty_php", &c__smarty_doublequoted::ci_to_smarty_php },
  { 0x278E3AB52EABB542LL, 1, 14, "append_subtree", &c__smarty_doublequoted::ci_append_subtree },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c__smarty_doublequoted::ci___construct },
  { 0, 1, 0, 0 }
};
const int c__smarty_doublequoted::s_call_info_index[] = {
  7,
  0,-1,1,-1,-1,-1,-1,2,

};
c__smarty_doublequoted *c__smarty_doublequoted::create(CVarRef v_parser, CVarRef v_subtree) {
  CountableHelper h(this);
  init();
  t___construct(v_parser, v_subtree);
  return this;
}
const ObjectStaticCallbacks cw__smarty_doublequoted = {
  (ObjectData*(*)(ObjectData*))coo__smarty_doublequoted,
  c__smarty_doublequoted::s_call_info_table,c__smarty_doublequoted::s_call_info_index,
  c__smarty_doublequoted::s_instanceof_table,c__smarty_doublequoted::s_instanceof_index,
  &c__smarty_doublequoted::s_class_name,
  &c__smarty_doublequoted::os_prop_table,&c__smarty_doublequoted::ci___construct,0,&cw__smarty_parsetree
};
void c__smarty_doublequoted::init() {
  c__smarty_parsetree::init();
  m_subtrees = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 70 */
void c__smarty_doublequoted::tt___construct(Variant v_parser, p__smarty_parsetree v_subtree) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_doublequoted, _smarty_doublequoted::__construct);
  INTERCEPT_INJECTION("_smarty_doublequoted::__construct", array_createvi(2, toVPOD(v_parser), toVPOD(v_subtree)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  m_parser.assignVal(v_parser);
  m_subtrees.append((VarNR(v_subtree)));
  if (instanceOf(v_subtree, NAMSTR(s_sse95d3705, "_smarty_tag"))) {
    {
      {
        LINE(75,0);
        const Variant &tmp0((m_parser.o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true)));
        int tmp1((x_count(tmp0)));
        m_parser.o_setPublic(NAMSTR(s_ss8d453f55, "block_nesting_level"), tmp1);
      }
    }
  }
  gasInCtor(oldInCtor);
}
void c__smarty_doublequoted::t___construct(CVarRef v_parser, CVarRef v_subtree) {
  if(!v_subtree.instanceof(NAMSTR(s_ss9cc930d0, "_smarty_parsetree"))) {
    throw_unexpected_argument_type(2,"_smarty_doublequoted::__construct()","_smarty_parsetree",v_subtree);
    return;
  }
  tt___construct(v_parser, (const p__smarty_parsetree&)v_subtree.toCObjRef());
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 79 */
void c__smarty_doublequoted::tt_append_subtree(p__smarty_parsetree v_subtree) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_doublequoted, _smarty_doublequoted::append_subtree);
  INTERCEPT_INJECTION("_smarty_doublequoted::append_subtree", array_createvi(1, toVPOD(v_subtree)), );
  int64 v_last_subtree = 0;

  Variant tmp_ref;
  {
    LINE(81,0);
    int tmp0((x_count(m_subtrees)));
    int64 tmp1(((tmp0 - 1LL)));
    v_last_subtree = tmp1;
  }
  {
    bool tmp0;
    {
      bool tmp1 = (not_less(v_last_subtree, 0LL));
      if (tmp1) {
        LINE(82,0);
        const Variant &tmp2((m_subtrees.rvalAt(v_last_subtree, AccessFlags::Error)));
        tmp1 = (instanceOf(tmp2, NAMSTR(s_sse95d3705, "_smarty_tag")));
      }
      bool tmp3 = (tmp1);
      if (tmp3) {
        const Variant &tmp4((m_subtrees.rvalRef(v_last_subtree, tmp_ref, AccessFlags::Error).o_getPublic(NAMSTR(s_sse4b46ab6, "saved_block_nesting"), true)));
        const Variant &tmp5((m_parser.o_getPublic(NAMSTR(s_ss8d453f55, "block_nesting_level"), true)));
        tmp3 = (less(tmp4, tmp5));
      }
      tmp0 = (tmp3);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        if (instanceOf(v_subtree, NAMSTR(s_ss795535ad, "_smarty_code"))) {
          {
            {
              LINE(84,(lval(m_subtrees.lvalAt(v_last_subtree, AccessFlags::CheckExist)))).o_assign_op<void,273>(NAMSTR(s_ssa9853128, "data"), concat3(NAMSTR(s_ss686ceae7, "<\?php echo "), toString(v_subtree.o_getPublic(NAMSTR(s_ssa9853128, "data"), true)), NAMSTR(s_ss1434b9af, ";\?>")), s_class_name);
            }
          }
        }
        else if (instanceOf(v_subtree, NAMSTR(s_ss43ce1529, "_smarty_dq_content"))) {
          {
            {
              LINE(86,(lval(m_subtrees.lvalAt(v_last_subtree, AccessFlags::CheckExist)))).o_assign_op<void,273>(NAMSTR(s_ssa9853128, "data"), concat3(NAMSTR(s_ss9ea66ee4, "<\?php echo \""), toString(v_subtree.o_getPublic(NAMSTR(s_ssa9853128, "data"), true)), NAMSTR(s_sse31ae3d0, "\";\?>")), s_class_name);
            }
          }
        }
        else {
          {
            {
              LINE(88,(lval(m_subtrees.lvalAt(v_last_subtree, AccessFlags::CheckExist)))).o_assign_op<void,273>(NAMSTR(s_ssa9853128, "data"), toString(v_subtree.o_getPublic(NAMSTR(s_ssa9853128, "data"), true)), s_class_name);
            }
          }
        }
      }
    }
    else {
      {
        m_subtrees.append((VarNR(v_subtree)));
      }
    }
  }
  if (instanceOf(v_subtree, NAMSTR(s_sse95d3705, "_smarty_tag"))) {
    {
      {
        LINE(94,0);
        const Variant &tmp0((m_parser.o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true)));
        int tmp1((x_count(tmp0)));
        m_parser.o_setPublic(NAMSTR(s_ss8d453f55, "block_nesting_level"), tmp1);
      }
    }
  }
}
void c__smarty_doublequoted::t_append_subtree(CVarRef v_subtree) {
  if(!v_subtree.instanceof(NAMSTR(s_ss9cc930d0, "_smarty_parsetree"))) {
    throw_unexpected_argument_type(1,"_smarty_doublequoted::append_subtree()","_smarty_parsetree",v_subtree);
    return;
  }
  tt_append_subtree((const p__smarty_parsetree&)v_subtree.toCObjRef());
}
namespace hphp_impl_splitter {}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 98 */
Variant c__smarty_doublequoted::t_to_smarty_php() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_doublequoted, _smarty_doublequoted::to_smarty_php);
  INTERCEPT_INJECTION("_smarty_doublequoted::to_smarty_php", null_array, r);
  String v_code;
  Variant v_subtree;
  Variant v_more_php;

  Variant tmp_ref;
  v_code = NAMSTR(s_ss00000000, "");
  {
    LOOP_COUNTER(1);
    Variant map2 = m_subtrees;
    for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_subtree);
      {
        if (!same(v_code, NAMSTR(s_ss00000000, ""))) {
          {
            concat_assign(v_code, NAMSTR(s_ss013a8f64, "."));
          }
        }
        if (instanceOf(v_subtree, NAMSTR(s_sse95d3705, "_smarty_tag"))) {
          {
            {
              LINE(106,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = v_subtree;
              mcp0.methodCall((obj0), NAMSTR(s_ss6b878a88, "assign_to_var"), 0x1DCDB900BC9243CELL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
              v_more_php.assignVal(tmp1);
            }
          }
        }
        else {
          {
            {
              LINE(108,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = v_subtree;
              mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
              v_more_php.assignVal(tmp1);
            }
          }
        }
        concat_assign(v_code, toString(v_more_php));
        if (!(instanceOf(v_subtree, NAMSTR(s_ss43ce1529, "_smarty_dq_content")))) {
          {
            {
              LINE(114,(m_parser.o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss6e5769be, "has_variable_string"), true);
              tmp_ref.unset();
            }
          }
        }
      }
    }
  }
  return v_code;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 13 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_parsetree)
const InstanceOfInfo c__smarty_parsetree::s_instanceof_table[] = {
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
};
const int c__smarty_parsetree::s_instanceof_index[] = {
  1,
  0,-1,
};
const ObjectStaticCallbacks cw__smarty_parsetree = {
  (ObjectData*(*)(ObjectData*))coo__smarty_parsetree,
  c__smarty_parsetree::s_call_info_table,c__smarty_parsetree::s_call_info_index,
  c__smarty_parsetree::s_instanceof_table,c__smarty_parsetree::s_instanceof_index,
  &c__smarty_parsetree::s_class_name,
  0,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 14 */
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 49 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_code)
const InstanceOfInfo c__smarty_code::s_instanceof_table[] = {
  {0x38DDE9428F1EF87ELL,0,"_smarty_code",&cw__smarty_code},
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
};
const int c__smarty_code::s_instanceof_index[] = {
  3,
  -1,-1,0,-1,
};
CallInfo c__smarty_code::ci___construct((void*)&c__smarty_code::i___construct, (void*)&c__smarty_code::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c__smarty_code::ci_to_smarty_php((void*)&c__smarty_code::i_to_smarty_php, (void*)&c__smarty_code::ifa_to_smarty_php, 0, 4, 0x0000000000000000LL);
Variant c__smarty_code::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo__smarty_code);
  }
  c__smarty_code *self ATTRIBUTE_UNUSED (static_cast<c__smarty_code*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_code::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c__smarty_code::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo__smarty_code);
  }
  c__smarty_code *self ATTRIBUTE_UNUSED (static_cast<c__smarty_code*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_code::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c__smarty_code::ifa_to_smarty_php(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_to_smarty_php, coo__smarty_code);
  }
  c__smarty_code *self ATTRIBUTE_UNUSED (static_cast<c__smarty_code*>(mcp.obj));
  return (self->c__smarty_code::t_to_smarty_php());
}
const MethodCallInfoTable c__smarty_code::s_call_info_table[] = {
  { 0x03E370BA2B1EA4F0LL, 1, 13, "to_smarty_php", &c__smarty_code::ci_to_smarty_php },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c__smarty_code::ci___construct },
  { 0, 1, 0, 0 }
};
const int c__smarty_code::s_call_info_index[] = {
  3,
  0,-1,-1,1,
};
c__smarty_code *c__smarty_code::create(CVarRef v_parser, CVarRef v_data) {
  CountableHelper h(this);
  init();
  t___construct(v_parser, v_data);
  return this;
}
const ObjectStaticCallbacks cw__smarty_code = {
  (ObjectData*(*)(ObjectData*))coo__smarty_code,
  c__smarty_code::s_call_info_table,c__smarty_code::s_call_info_index,
  c__smarty_code::s_instanceof_table,c__smarty_code::s_instanceof_index,
  &c__smarty_code::s_class_name,
  &c__smarty_code::os_prop_table,&c__smarty_code::ci___construct,0,&cw__smarty_parsetree
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 52 */
void c__smarty_code::t___construct(Variant v_parser, Variant v_data) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_code, _smarty_code::__construct);
  INTERCEPT_INJECTION("_smarty_code::__construct", array_createvi(2, toVPOD(v_parser), toVPOD(v_data)), );
  bool oldInCtor = gasInCtor(true);
  m_parser.assignVal(v_parser);
  m_data.assignVal(v_data);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 58 */
Variant c__smarty_code::t_to_smarty_php() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(_smarty_code, _smarty_code::to_smarty_php);
  INTERCEPT_INJECTION("_smarty_code::to_smarty_php", null_array, r);
  return LINE(60,(x_sprintf(2, NAMSTR(s_ss5f10880c, "(%s)"), Array(array_createvi(1, toVPOD(m_data))))));
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 222 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_linebreak)
const InstanceOfInfo c__smarty_linebreak::s_instanceof_table[] = {
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
  {0x0086688245BCD433LL,1,"_smarty_linebreak",&cw__smarty_linebreak},
};
const int c__smarty_linebreak::s_instanceof_index[] = {
  3,
  -1,-1,0,1,
};
CallInfo c__smarty_linebreak::ci___construct((void*)&c__smarty_linebreak::i___construct, (void*)&c__smarty_linebreak::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c__smarty_linebreak::ci_to_smarty_php((void*)&c__smarty_linebreak::i_to_smarty_php, (void*)&c__smarty_linebreak::ifa_to_smarty_php, 0, 4, 0x0000000000000000LL);
Variant c__smarty_linebreak::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo__smarty_linebreak);
  }
  c__smarty_linebreak *self ATTRIBUTE_UNUSED (static_cast<c__smarty_linebreak*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_linebreak::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c__smarty_linebreak::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo__smarty_linebreak);
  }
  c__smarty_linebreak *self ATTRIBUTE_UNUSED (static_cast<c__smarty_linebreak*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_linebreak::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c__smarty_linebreak::ifa_to_smarty_php(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_to_smarty_php, coo__smarty_linebreak);
  }
  c__smarty_linebreak *self ATTRIBUTE_UNUSED (static_cast<c__smarty_linebreak*>(mcp.obj));
  return (self->c__smarty_linebreak::t_to_smarty_php());
}
const MethodCallInfoTable c__smarty_linebreak::s_call_info_table[] = {
  { 0x03E370BA2B1EA4F0LL, 1, 13, "to_smarty_php", &c__smarty_linebreak::ci_to_smarty_php },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c__smarty_linebreak::ci___construct },
  { 0, 1, 0, 0 }
};
const int c__smarty_linebreak::s_call_info_index[] = {
  3,
  0,-1,-1,1,
};
c__smarty_linebreak *c__smarty_linebreak::create(CVarRef v_parser, CVarRef v_data) {
  CountableHelper h(this);
  init();
  t___construct(v_parser, v_data);
  return this;
}
const ObjectStaticCallbacks cw__smarty_linebreak = {
  (ObjectData*(*)(ObjectData*))coo__smarty_linebreak,
  c__smarty_linebreak::s_call_info_table,c__smarty_linebreak::s_call_info_index,
  c__smarty_linebreak::s_instanceof_table,c__smarty_linebreak::s_instanceof_index,
  &c__smarty_linebreak::s_class_name,
  &c__smarty_linebreak::os_prop_table,&c__smarty_linebreak::ci___construct,0,&cw__smarty_parsetree
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 224 */
void c__smarty_linebreak::t___construct(Variant v_parser, Variant v_data) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_linebreak, _smarty_linebreak::__construct);
  INTERCEPT_INJECTION("_smarty_linebreak::__construct", array_createvi(2, toVPOD(v_parser), toVPOD(v_data)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss1d4f2d02, "parser"), v_parser);
  m_data.assignVal(v_data);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 230 */
Variant c__smarty_linebreak::t_to_smarty_php() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(_smarty_linebreak, _smarty_linebreak::to_smarty_php);
  INTERCEPT_INJECTION("_smarty_linebreak::to_smarty_php", null_array, r);
  return m_data;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 20 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_tag)
const InstanceOfInfo c__smarty_tag::s_instanceof_table[] = {
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
  {0x04F2FAAF7C9C1D9FLL,1,"_smarty_tag",&cw__smarty_tag},
};
const int c__smarty_tag::s_instanceof_index[] = {
  3,
  -1,-1,0,1,
};
CallInfo c__smarty_tag::ci___construct((void*)&c__smarty_tag::i___construct, (void*)&c__smarty_tag::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c__smarty_tag::ci_assign_to_var((void*)&c__smarty_tag::i_assign_to_var, (void*)&c__smarty_tag::ifa_assign_to_var, 0, 4, 0x0000000000000000LL);
CallInfo c__smarty_tag::ci_to_smarty_php((void*)&c__smarty_tag::i_to_smarty_php, (void*)&c__smarty_tag::ifa_to_smarty_php, 0, 4, 0x0000000000000000LL);
Variant c__smarty_tag::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo__smarty_tag);
  }
  c__smarty_tag *self ATTRIBUTE_UNUSED (static_cast<c__smarty_tag*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_tag::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c__smarty_tag::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo__smarty_tag);
  }
  c__smarty_tag *self ATTRIBUTE_UNUSED (static_cast<c__smarty_tag*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_tag::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c__smarty_tag::ifa_assign_to_var(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_assign_to_var, coo__smarty_tag);
  }
  c__smarty_tag *self ATTRIBUTE_UNUSED (static_cast<c__smarty_tag*>(mcp.obj));
  return (self->t_assign_to_var());
}
Variant c__smarty_tag::ifa_to_smarty_php(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_to_smarty_php, coo__smarty_tag);
  }
  c__smarty_tag *self ATTRIBUTE_UNUSED (static_cast<c__smarty_tag*>(mcp.obj));
  return (self->c__smarty_tag::t_to_smarty_php());
}
const MethodCallInfoTable c__smarty_tag::s_call_info_table[] = {
  { 0x03E370BA2B1EA4F0LL, 1, 13, "to_smarty_php", &c__smarty_tag::ci_to_smarty_php },
  { 0x1DCDB900BC9243CELL, 1, 13, "assign_to_var", &c__smarty_tag::ci_assign_to_var },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c__smarty_tag::ci___construct },
  { 0, 1, 0, 0 }
};
const int c__smarty_tag::s_call_info_index[] = {
  7,
  0,-1,-1,-1,-1,-1,1,2,

};
c__smarty_tag *c__smarty_tag::create(CVarRef v_parser, CVarRef v_data) {
  CountableHelper h(this);
  init();
  t___construct(v_parser, v_data);
  return this;
}
const ObjectStaticCallbacks cw__smarty_tag = {
  (ObjectData*(*)(ObjectData*))coo__smarty_tag,
  c__smarty_tag::s_call_info_table,c__smarty_tag::s_call_info_index,
  c__smarty_tag::s_instanceof_table,c__smarty_tag::s_instanceof_index,
  &c__smarty_tag::s_class_name,
  &c__smarty_tag::os_prop_table,&c__smarty_tag::ci___construct,0,&cw__smarty_parsetree
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 25 */
void c__smarty_tag::t___construct(Variant v_parser, Variant v_data) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_tag, _smarty_tag::__construct);
  INTERCEPT_INJECTION("_smarty_tag::__construct", array_createvi(2, toVPOD(v_parser), toVPOD(v_data)), );
  bool oldInCtor = gasInCtor(true);
  m_parser.assignVal(v_parser);
  m_data.assignVal(v_data);
  {
    LINE(29,0);
    const Variant &tmp0((v_parser.o_getPublic(NAMSTR(s_ss8d453f55, "block_nesting_level"), true)));
    m_saved_block_nesting.assignVal(tmp0);
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 32 */
Variant c__smarty_tag::t_to_smarty_php() {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(_smarty_tag, _smarty_tag::to_smarty_php);
  INTERCEPT_INJECTION("_smarty_tag::to_smarty_php", null_array, r);
  return m_data;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 37 */
Variant c__smarty_tag::t_assign_to_var() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_tag, _smarty_tag::assign_to_var);
  INTERCEPT_INJECTION("_smarty_tag::assign_to_var", null_array, r);
  Variant v_var;

  Variant tmp_ref;
  {
    LINE(39,0);
    const Variant &tmp0((x_sprintf(2, NAMSTR(s_ss0c16bba9, "$_tmp%d"), Array(array_createvi(1, toVPOD(m_parser.o_assign_op<Variant,297>(NAMSTR(s_ss93c949f7, "prefix_number"), null_variant, s_class_name)))))));
    v_var.assignVal(tmp0);
  }
  {
    LINE(41,0);
    const Variant &tmp0((x_sprintf(3, NAMSTR(s_ss391a063d, "<\?php ob_start();\?>%s<\?php %s=ob_get_clean();\?>"), Array(array_createvi(2, toVPOD(m_data), toVPOD(v_var))))));
    LINE(40,(m_parser.o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssc5d15748, "prefix_code"), tmp_ref, s_class_name))).append((tmp0));
    tmp_ref.unset();
  }
  return v_var;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 124 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(_smarty_dq_content)
const InstanceOfInfo c__smarty_dq_content::s_instanceof_table[] = {
  {0x71BB1C6A220216BCLL,1,"_smarty_dq_content",&cw__smarty_dq_content},
  {0x606C50635743AD8ALL,1,"_smarty_parsetree",&cw__smarty_parsetree},
};
const int c__smarty_dq_content::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c__smarty_dq_content::ci___construct((void*)&c__smarty_dq_content::i___construct, (void*)&c__smarty_dq_content::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c__smarty_dq_content::ci_to_smarty_php((void*)&c__smarty_dq_content::i_to_smarty_php, (void*)&c__smarty_dq_content::ifa_to_smarty_php, 0, 4, 0x0000000000000000LL);
Variant c__smarty_dq_content::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo__smarty_dq_content);
  }
  c__smarty_dq_content *self ATTRIBUTE_UNUSED (static_cast<c__smarty_dq_content*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_dq_content::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c__smarty_dq_content::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo__smarty_dq_content);
  }
  c__smarty_dq_content *self ATTRIBUTE_UNUSED (static_cast<c__smarty_dq_content*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("_smarty_dq_content::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c__smarty_dq_content::ifa_to_smarty_php(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_to_smarty_php, coo__smarty_dq_content);
  }
  c__smarty_dq_content *self ATTRIBUTE_UNUSED (static_cast<c__smarty_dq_content*>(mcp.obj));
  return (self->c__smarty_dq_content::t_to_smarty_php());
}
const MethodCallInfoTable c__smarty_dq_content::s_call_info_table[] = {
  { 0x03E370BA2B1EA4F0LL, 1, 13, "to_smarty_php", &c__smarty_dq_content::ci_to_smarty_php },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c__smarty_dq_content::ci___construct },
  { 0, 1, 0, 0 }
};
const int c__smarty_dq_content::s_call_info_index[] = {
  3,
  0,-1,-1,1,
};
c__smarty_dq_content *c__smarty_dq_content::create(CVarRef v_parser, CVarRef v_data) {
  CountableHelper h(this);
  init();
  t___construct(v_parser, v_data);
  return this;
}
const ObjectStaticCallbacks cw__smarty_dq_content = {
  (ObjectData*(*)(ObjectData*))coo__smarty_dq_content,
  c__smarty_dq_content::s_call_info_table,c__smarty_dq_content::s_call_info_index,
  c__smarty_dq_content::s_instanceof_table,c__smarty_dq_content::s_instanceof_index,
  &c__smarty_dq_content::s_class_name,
  &c__smarty_dq_content::os_prop_table,&c__smarty_dq_content::ci___construct,0,&cw__smarty_parsetree
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 126 */
void c__smarty_dq_content::t___construct(Variant v_parser, Variant v_data) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_dq_content, _smarty_dq_content::__construct);
  INTERCEPT_INJECTION("_smarty_dq_content::__construct", array_createvi(2, toVPOD(v_parser), toVPOD(v_data)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss1d4f2d02, "parser"), v_parser);
  m_data.assignVal(v_data);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 132 */
Variant c__smarty_dq_content::t_to_smarty_php() {
  INSTANCE_METHOD_INJECTION_ROOTLESS(_smarty_dq_content, _smarty_dq_content::to_smarty_php);
  INTERCEPT_INJECTION("_smarty_dq_content::to_smarty_php", null_array, r);
  return concat3(NAMSTR(s_ss7e5fc106, "\""), toString(m_data), NAMSTR(s_ss7e5fc106, "\""));
}
namespace hphp_impl_splitter {}
ObjectData *coo__smarty_text() {
  return NEWOBJ(c__smarty_text)();
}
ObjectData *coo__smarty_template_buffer() {
  return NEWOBJ(c__smarty_template_buffer)();
}
ObjectData *coo__smarty_doublequoted() {
  return NEWOBJ(c__smarty_doublequoted)();
}
ObjectData *coo__smarty_parsetree() {
  return NEWOBJ(c__smarty_parsetree)();
}
ObjectData *coo__smarty_code() {
  return NEWOBJ(c__smarty_code)();
}
ObjectData *coo__smarty_linebreak() {
  return NEWOBJ(c__smarty_linebreak)();
}
ObjectData *coo__smarty_tag() {
  return NEWOBJ(c__smarty_tag)();
}
ObjectData *coo__smarty_dq_content() {
  return NEWOBJ(c__smarty_dq_content)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_parsetree.php, pm_php$Smarty$libs$sysplugins$smarty_internal_parsetree_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(_smarty_parsetree) = true;
  g->CDEC(_smarty_tag) = true;
  g->CDEC(_smarty_code) = true;
  g->CDEC(_smarty_doublequoted) = true;
  g->CDEC(_smarty_dq_content) = true;
  g->CDEC(_smarty_template_buffer) = true;
  g->CDEC(_smarty_text) = true;
  g->CDEC(_smarty_linebreak) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Register)
const InstanceOfInfo c_Smarty_Internal_Register::s_instanceof_table[] = {
  {0x4F910F95F3F2B33FLL,1,"Smarty_Internal_Register",&cw_Smarty_Internal_Register},
};
const int c_Smarty_Internal_Register::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Register::ci_unregisterresource((void*)&c_Smarty_Internal_Register::i_unregisterresource, (void*)&c_Smarty_Internal_Register::ifa_unregisterresource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci_registerobject((void*)&c_Smarty_Internal_Register::i_registerobject, (void*)&c_Smarty_Internal_Register::ifa_registerobject, 5, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci_registerplugin((void*)&c_Smarty_Internal_Register::i_registerplugin, (void*)&c_Smarty_Internal_Register::ifa_registerplugin, 5, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci___construct((void*)&c_Smarty_Internal_Register::i___construct, (void*)&c_Smarty_Internal_Register::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci_registerclass((void*)&c_Smarty_Internal_Register::i_registerclass, (void*)&c_Smarty_Internal_Register::ifa_registerclass, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci_registerresource((void*)&c_Smarty_Internal_Register::i_registerresource, (void*)&c_Smarty_Internal_Register::ifa_registerresource, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci_registerdefaultpluginhandler((void*)&c_Smarty_Internal_Register::i_registerdefaultpluginhandler, (void*)&c_Smarty_Internal_Register::ifa_registerdefaultpluginhandler, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci_registerdefaulttemplatehandler((void*)&c_Smarty_Internal_Register::i_registerdefaulttemplatehandler, (void*)&c_Smarty_Internal_Register::ifa_registerdefaulttemplatehandler, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Register::ci_unregisterplugin((void*)&c_Smarty_Internal_Register::i_unregisterplugin, (void*)&c_Smarty_Internal_Register::ifa_unregisterplugin, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Register::i_unregisterresource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_unregisterresource, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::unregisterResource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_unregisterresource(arg0), null);
  }
}
Variant c_Smarty_Internal_Register::i_registerobject(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_registerobject, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::registerObject", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(count <= 2 ? Variant(s_sa00000000) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? Variant(s_sa00000000) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_registerobject(arg0, arg1, arg2, arg3, arg4), null);
  }
}
Variant c_Smarty_Internal_Register::i_registerplugin(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_registerplugin, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Register::registerPlugin", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(count <= 3 ? Variant(true) : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg4(count <= 4 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_registerplugin(arg0, arg1, arg2, arg3, arg4), null);
  }
}
Variant c_Smarty_Internal_Register::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Register::i_registerclass(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_registerclass, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::registerClass", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_registerclass(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Register::i_registerresource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_registerresource, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::registerResource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_registerresource(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Register::i_registerdefaultpluginhandler(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_registerdefaultpluginhandler, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::registerDefaultPluginHandler", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_registerdefaultpluginhandler(arg0), null);
  }
}
Variant c_Smarty_Internal_Register::i_registerdefaulttemplatehandler(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_registerdefaulttemplatehandler, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::registerDefaultTemplateHandler", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_registerdefaulttemplatehandler(arg0), null);
  }
}
Variant c_Smarty_Internal_Register::i_unregisterplugin(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_unregisterplugin, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::unregisterPlugin", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_unregisterplugin(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Register::ifa_unregisterresource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_unregisterresource, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::unregisterResource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_unregisterresource(arg0), null);
}
Variant c_Smarty_Internal_Register::ifa_registerobject(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerobject, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::registerObject", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(count <= 2 ? (s_sva00000000) : a2);
  CVarRef arg3(count <= 3 ? (true_varNR) : a3);
  CVarRef arg4(count <= 4 ? (s_sva00000000) : a4);
  return (self->t_registerobject(arg0, arg1, arg2, arg3, arg4), null);
}
Variant c_Smarty_Internal_Register::ifa_registerplugin(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerplugin, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Register::registerPlugin", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(count <= 3 ? (true_varNR) : a3);
  CVarRef arg4(count <= 4 ? null_variant : a4);
  return (self->t_registerplugin(arg0, arg1, arg2, arg3, arg4), null);
}
Variant c_Smarty_Internal_Register::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Register::ifa_registerclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerclass, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::registerClass", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_registerclass(arg0, arg1), null);
}
Variant c_Smarty_Internal_Register::ifa_registerresource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerresource, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::registerResource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_registerresource(arg0, arg1), null);
}
Variant c_Smarty_Internal_Register::ifa_registerdefaultpluginhandler(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerdefaultpluginhandler, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::registerDefaultPluginHandler", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_registerdefaultpluginhandler(arg0), null);
}
Variant c_Smarty_Internal_Register::ifa_registerdefaulttemplatehandler(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_registerdefaulttemplatehandler, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Register::registerDefaultTemplateHandler", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_registerdefaulttemplatehandler(arg0), null);
}
Variant c_Smarty_Internal_Register::ifa_unregisterplugin(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_unregisterplugin, coo_Smarty_Internal_Register);
  }
  c_Smarty_Internal_Register *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Register*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Register::unregisterPlugin", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_unregisterplugin(arg0, arg1), null);
}
const MethodCallInfoTable c_Smarty_Internal_Register::s_call_info_table[] = {
  { 0x118248E3C616BB47LL, 1, 30, "registerDefaultTemplateHandler", &c_Smarty_Internal_Register::ci_registerdefaulttemplatehandler },
  { 0x076D7644181F604BLL, 1, 18, "unregisterResource", &c_Smarty_Internal_Register::ci_unregisterresource },
  { 0x6A0B95D658BD666CLL, 1, 16, "unregisterPlugin", &c_Smarty_Internal_Register::ci_unregisterplugin },
  { 0x2EE72941FC01F8CDLL, 1, 14, "registerPlugin", &c_Smarty_Internal_Register::ci_registerplugin },
  { 0x2DBDD788B131DAD0LL, 1, 16, "registerResource", &c_Smarty_Internal_Register::ci_registerresource },
  { 0x7A0E59DFA89E8311LL, 1, 13, "registerClass", &c_Smarty_Internal_Register::ci_registerclass },
  { 0x05C3F0A153A92293LL, 1, 28, "registerDefaultPluginHandler", &c_Smarty_Internal_Register::ci_registerdefaultpluginhandler },
  { 0x698E18511ED1B13ELL, 1, 14, "registerObject", &c_Smarty_Internal_Register::ci_registerobject },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Register::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Register::s_call_info_index[] = {
  31,
  -1,-1,-1,-1,-1,-1,-1,0,
  -1,-1,-1,1,2,3,-1,-1,
  4,5,-1,6,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,7,8,

};
c_Smarty_Internal_Register *c_Smarty_Internal_Register::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Register = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Register,
  c_Smarty_Internal_Register::s_call_info_table,c_Smarty_Internal_Register::s_call_info_index,
  c_Smarty_Internal_Register::s_instanceof_table,c_Smarty_Internal_Register::s_instanceof_index,
  &c_Smarty_Internal_Register::s_class_name,
  0,&c_Smarty_Internal_Register::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 17 */
void c_Smarty_Internal_Register::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Register, Smarty_Internal_Register::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Register::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 31 */
void c_Smarty_Internal_Register::t_registerplugin(CVarRef v_type, CVarRef v_tag, CVarRef v_callback, CVarRef v_cacheable //  = true_varNR
, CVarRef v_cache_attr //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Register, Smarty_Internal_Register::registerPlugin);
  INTERCEPT_INJECTION("Smarty_Internal_Register::registerPlugin", array_createvi(5, toVPOD(v_type), toVPOD(v_tag), toVPOD(v_callback), toVPOD(v_cacheable), toVPOD(v_cache_attr)), );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (isset(LINE(33,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), false).rvalRef(v_type, tmp_ref))), v_tag));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          p_Exception tmp0 = coo_Exception();
          throw_exception(LINE(34,(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssb4cd74c9, "Plugin tag \""), toString(v_tag), NAMSTR(s_ss666c59ab, "\" already registered")))), tmp0))));
        }
      }
    }
    else {
      bool tmp0;
      {
        LINE(35,0);
        bool tmp1((x_is_callable(v_callback)));
        tmp0 = (!(tmp1));
      }
      if (tmp0) {
        {
          {
            p_Exception tmp0 = coo_Exception();
            throw_exception(LINE(36,(((c_Exception*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssd006c0d6, "Plugin \""), toString(v_tag), NAMSTR(s_ssd8aa6734, "\" not callable")))), tmp0))));
          }
        }
      }
      else {
        {
          {
            LINE(38,(lval(GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss6966aa38, "registered_plugins"), tmp_ref, s_class_name).lvalAt(v_type, AccessFlags::CheckExist)))).set(v_tag, (VarNR(Array(array_createvi(3, toVPOD(v_callback), toVPOD(VarNR((toBoolean(v_cacheable)))), toVPOD(VarNR((toArray(v_cache_attr)))))))));
            tmp_ref.unset();
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 48 */
void c_Smarty_Internal_Register::t_unregisterplugin(CVarRef v_type, CVarRef v_tag) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Register, Smarty_Internal_Register::unregisterPlugin);
  INTERCEPT_INJECTION("Smarty_Internal_Register::unregisterPlugin", array_createvi(2, toVPOD(v_type), toVPOD(v_tag)), );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (isset(LINE(50,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss6966aa38, "registered_plugins"), false).rvalRef(v_type, tmp_ref))), v_tag));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(51,(unsetLval(GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ss6966aa38, "registered_plugins"), tmp_ref, s_class_name), v_type))).weakRemove(v_tag);
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 61 */
void c_Smarty_Internal_Register::t_registerresource(CVarRef v_type, CVarRef v_callback) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Register, Smarty_Internal_Register::registerResource);
  INTERCEPT_INJECTION("Smarty_Internal_Register::registerResource", array_createvi(2, toVPOD(v_type), toVPOD(v_callback)), );
  Variant tmp_ref;
  {
    LINE(63,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssaa1d58ac, "registered_resources"), tmp_ref, s_class_name))).set(v_type, (VarNR(Array(array_createvi(2, toVPOD(v_callback), toVPOD(false_varNR))))));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 71 */
void c_Smarty_Internal_Register::t_unregisterresource(CVarRef v_type) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Register, Smarty_Internal_Register::unregisterResource);
  INTERCEPT_INJECTION("Smarty_Internal_Register::unregisterResource", array_createvi(1, toVPOD(v_type)), );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      tmp0 = (isset(LINE(73,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ssaa1d58ac, "registered_resources"), false))), v_type));
    }
    if (tmp0) {
      {
        {
          LINE(74,(GET_THIS_ARROW()o_unsetLval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ssaa1d58ac, "registered_resources"), tmp_ref, s_class_name))).weakRemove(v_type);
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 88 */
void c_Smarty_Internal_Register::t_registerobject(CVarRef v_object_name, CVarRef v_object_impl, CVarRef v_allowed //  = s_sva00000000
, CVarRef v_smarty_args //  = true_varNR
, CVarRef v_block_methods //  = s_sva00000000
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Register, Smarty_Internal_Register::registerObject);
  INTERCEPT_INJECTION("Smarty_Internal_Register::registerObject", array_createvi(5, toVPOD(v_object_name), toVPOD(v_object_impl), toVPOD(v_allowed), toVPOD(v_smarty_args), toVPOD(v_block_methods)), );
  Variant v_method;

  Variant tmp_ref;
  if (!(empty(v_allowed))) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = (toArray(v_allowed));
        for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_method);
          {
            {
              bool tmp0;
              {
                LINE(93,0);
                bool tmp1((x_is_callable(Array(array_createvi(2, toVPOD(v_object_impl), toVPOD(v_method))))));
                tmp0 = (!(tmp1));
              }
              if (tmp0) {
                {
                  {
                    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                    throw_exception(LINE(94,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssd8ab565c, "Undefined method '"), toString(v_method), NAMSTR(s_ss73201e37, "' in registered object")))), tmp0))));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (!(empty(v_block_methods))) {
    {
      {
        LOOP_COUNTER(4);
        Variant map5 = (toArray(v_block_methods));
        for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
          LOOP_COUNTER_CHECK(4);
          iter6.second(v_method);
          {
            {
              bool tmp0;
              {
                LINE(101,0);
                bool tmp1((x_is_callable(Array(array_createvi(2, toVPOD(v_object_impl), toVPOD(v_method))))));
                tmp0 = (!(tmp1));
              }
              if (tmp0) {
                {
                  {
                    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                    throw_exception(LINE(102,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssd8ab565c, "Undefined method '"), toString(v_method), NAMSTR(s_ss73201e37, "' in registered object")))), tmp0))));
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
    LINE(107,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss95ed8050, "registered_objects"), tmp_ref, s_class_name))).set(v_object_name, (VarNR(Array(array_createvi(4, toVPOD(v_object_impl), toVPOD(VarNR((toArray(v_allowed)))), toVPOD(VarNR((toBoolean(v_smarty_args)))), toVPOD(VarNR((toArray(v_block_methods)))))))));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 117 */
void c_Smarty_Internal_Register::t_registerclass(CVarRef v_class_name, CVarRef v_class_impl) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Register, Smarty_Internal_Register::registerClass);
  INTERCEPT_INJECTION("Smarty_Internal_Register::registerClass", array_createvi(2, toVPOD(v_class_name), toVPOD(v_class_impl)), );
  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(120,0);
      bool tmp1((x_class_exists(toString(v_class_impl))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
          throw_exception(LINE(121,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss8e399b1a, "Undefined class '"), toString(v_class_impl), NAMSTR(s_ss35ef2a48, "' in register template class")))), tmp0))));
        }
      }
    }
  }
  {
    Variant tmp0((v_class_impl));
    LINE(124,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss44730f62, "registered_classes"), tmp_ref, s_class_name))).set(v_class_name, (tmp0));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 132 */
void c_Smarty_Internal_Register::t_registerdefaultpluginhandler(CVarRef v_callback) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Register, Smarty_Internal_Register::registerDefaultPluginHandler);
  INTERCEPT_INJECTION("Smarty_Internal_Register::registerDefaultPluginHandler", array_createvi(1, toVPOD(v_callback)), );
  Variant tmp_ref;
  if (LINE(134,(x_is_callable(v_callback)))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss70ce907e, "default_plugin_handler_func"), v_callback);
        tmp_ref.unset();
      }
    }
  }
  else {
    {
      {
        p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
        throw_exception(LINE(137,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss69d3a677, "Default plugin handler '"), toString(v_callback), NAMSTR(s_ssc77d021b, "' not callable")))), tmp0))));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_register.php line 146 */
void c_Smarty_Internal_Register::t_registerdefaulttemplatehandler(CVarRef v_callback) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Register, Smarty_Internal_Register::registerDefaultTemplateHandler);
  INTERCEPT_INJECTION("Smarty_Internal_Register::registerDefaultTemplateHandler", array_createvi(1, toVPOD(v_callback)), );
  Variant tmp_ref;
  if (LINE(148,(x_is_callable(v_callback)))) {
    {
      {
        GET_THIS_ARROW()o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2665d749, "default_template_handler_func"), v_callback);
        tmp_ref.unset();
      }
    }
  }
  else {
    {
      {
        p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
        throw_exception(LINE(151,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss830d7572, "Default template handler '"), toString(v_callback), NAMSTR(s_ssc77d021b, "' not callable")))), tmp0))));
      }
    }
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Register() {
  return NEWOBJ(c_Smarty_Internal_Register)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_register_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_register.php, pm_php$Smarty$libs$sysplugins$smarty_internal_register_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_register) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_eval.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Resource_Eval)
const InstanceOfInfo c_Smarty_Internal_Resource_Eval::s_instanceof_table[] = {
  {0x26F445BD4C748955LL,1,"Smarty_Internal_Resource_Eval",&cw_Smarty_Internal_Resource_Eval},
};
const int c_Smarty_Internal_Resource_Eval::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Resource_Eval::ci_getcompiledfilepath((void*)&c_Smarty_Internal_Resource_Eval::i_getcompiledfilepath, (void*)&c_Smarty_Internal_Resource_Eval::ifa_getcompiledfilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Eval::ci_gettemplatesource((void*)&c_Smarty_Internal_Resource_Eval::i_gettemplatesource, (void*)&c_Smarty_Internal_Resource_Eval::ifa_gettemplatesource, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Eval::ci___construct((void*)&c_Smarty_Internal_Resource_Eval::i___construct, (void*)&c_Smarty_Internal_Resource_Eval::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Eval::ci_gettemplatetimestamp((void*)&c_Smarty_Internal_Resource_Eval::i_gettemplatetimestamp, (void*)&c_Smarty_Internal_Resource_Eval::ifa_gettemplatetimestamp, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Eval::ci_gettemplatefilepath((void*)&c_Smarty_Internal_Resource_Eval::i_gettemplatefilepath, (void*)&c_Smarty_Internal_Resource_Eval::ifa_gettemplatefilepath, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Resource_Eval::ci_isexisting((void*)&c_Smarty_Internal_Resource_Eval::i_isexisting, (void*)&c_Smarty_Internal_Resource_Eval::ifa_isexisting, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Resource_Eval::i_getcompiledfilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_getcompiledfilepath, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getCompiledFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_getcompiledfilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Eval::i_gettemplatesource(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatesource, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getTemplateSource", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatesource(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Eval::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Resource_Eval::i_gettemplatetimestamp(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatetimestamp, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getTemplateTimestamp", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatetimestamp(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Eval::i_gettemplatefilepath(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_gettemplatefilepath, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getTemplateFilepath", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_gettemplatefilepath(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Eval::i_isexisting(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_isexisting, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::isExisting", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_isexisting(arg0));
  }
}
Variant c_Smarty_Internal_Resource_Eval::ifa_getcompiledfilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getcompiledfilepath, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getCompiledFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_getcompiledfilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Eval::ifa_gettemplatesource(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatesource, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getTemplateSource", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatesource(arg0));
}
Variant c_Smarty_Internal_Resource_Eval::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Resource_Eval::ifa_gettemplatetimestamp(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatetimestamp, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getTemplateTimestamp", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatetimestamp(arg0));
}
Variant c_Smarty_Internal_Resource_Eval::ifa_gettemplatefilepath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_gettemplatefilepath, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::getTemplateFilepath", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_gettemplatefilepath(arg0));
}
Variant c_Smarty_Internal_Resource_Eval::ifa_isexisting(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isexisting, coo_Smarty_Internal_Resource_Eval);
  }
  c_Smarty_Internal_Resource_Eval *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Resource_Eval*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Resource_Eval::isExisting", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_isexisting(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_Resource_Eval::s_call_info_table[] = {
  { 0x2119F0DDD5901F20LL, 1, 17, "getTemplateSource", &c_Smarty_Internal_Resource_Eval::ci_gettemplatesource },
  { 0x5124CB1E6C88ABD5LL, 1, 19, "getCompiledFilepath", &c_Smarty_Internal_Resource_Eval::ci_getcompiledfilepath },
  { 0x2FEDF4242F8CBBD8LL, 1, 19, "getTemplateFilepath", &c_Smarty_Internal_Resource_Eval::ci_gettemplatefilepath },
  { 0x415CFCA4A487DB29LL, 1, 10, "isExisting", &c_Smarty_Internal_Resource_Eval::ci_isexisting },
  { 0x7D66A266AA69AA4CLL, 1, 20, "getTemplateTimestamp", &c_Smarty_Internal_Resource_Eval::ci_gettemplatetimestamp },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Resource_Eval::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Resource_Eval::s_call_info_index[] = {
  15,
  0,-1,-1,-1,-1,1,-1,-1,
  2,3,-1,-1,4,-1,-1,5,

};
c_Smarty_Internal_Resource_Eval *c_Smarty_Internal_Resource_Eval::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Eval = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Resource_Eval,
  c_Smarty_Internal_Resource_Eval::s_call_info_table,c_Smarty_Internal_Resource_Eval::s_call_info_index,
  c_Smarty_Internal_Resource_Eval::s_instanceof_table,c_Smarty_Internal_Resource_Eval::s_instanceof_index,
  &c_Smarty_Internal_Resource_Eval::s_class_name,
  &c_Smarty_Internal_Resource_Eval::os_prop_table,&c_Smarty_Internal_Resource_Eval::ci___construct,0,0
};
void c_Smarty_Internal_Resource_Eval::init() {
  m_compiler_class = NAMSTR(s_ss4b77f454, "Smarty_Internal_SmartyTemplateCompiler");
  m_template_lexer_class = NAMSTR(s_ss86ff4809, "Smarty_Internal_Templatelexer");
  m_template_parser_class = NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser");
  m_usesCompiler = true;
  m_isEvaluated = true;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_eval.php line 17 */
void c_Smarty_Internal_Resource_Eval::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Eval, Smarty_Internal_Resource_Eval::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Eval::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_eval.php line 34 */
bool c_Smarty_Internal_Resource_Eval::t_isexisting(CVarRef v_template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Eval, Smarty_Internal_Resource_Eval::isExisting);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Eval::isExisting", array_createvi(1, toVPOD(v_template)), r);
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_eval.php line 45 */
String c_Smarty_Internal_Resource_Eval::t_gettemplatefilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Eval, Smarty_Internal_Resource_Eval::getTemplateFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Eval::getTemplateFilepath", array_createvi(1, toVPOD(v__template)), r);
  return NAMSTR(s_ss472d6ea2, "eval:");
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_eval.php line 58 */
bool c_Smarty_Internal_Resource_Eval::t_gettemplatetimestamp(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Eval, Smarty_Internal_Resource_Eval::getTemplateTimestamp);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Eval::getTemplateTimestamp", array_createvi(1, toVPOD(v__template)), r);
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_eval.php line 70 */
bool c_Smarty_Internal_Resource_Eval::t_gettemplatesource(Variant v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Resource_Eval, Smarty_Internal_Resource_Eval::getTemplateSource);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Eval::getTemplateSource", array_createvi(1, toVPOD(v__template)), r);
  Variant tmp_ref;
  {
    LINE(73,0);
    const Variant &tmp0((v__template.o_getPublic(NAMSTR(s_sse942854d, "resource_name"), true)));
    v__template.o_setPublic(NAMSTR(s_ss105c90e5, "template_source"), tmp0);
  }
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_eval.php line 83 */
bool c_Smarty_Internal_Resource_Eval::t_getcompiledfilepath(CVarRef v__template) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Resource_Eval, Smarty_Internal_Resource_Eval::getCompiledFilepath);
  INTERCEPT_INJECTION("Smarty_Internal_Resource_Eval::getCompiledFilepath", array_createvi(1, toVPOD(v__template)), r);
  return false;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Resource_Eval() {
  return NEWOBJ(c_Smarty_Internal_Resource_Eval)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_resource_eval.php, pm_php$Smarty$libs$sysplugins$smarty_internal_resource_eval_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_resource_eval) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svs86ff4809, "Smarty_Internal_Templatelexer"),
  (int64)&true_varNR,
  (int64)&NAMVAR(s_svs351e8449, "Smarty_Internal_Templateparser"),
  (int64)&NAMVAR(s_svs4b77f454, "Smarty_Internal_SmartyTemplateCompiler"),
  (int64)&null_variant,
  (int64)&s_sva00000000,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x665F37482FC22180LL,2,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Eval, m_template_lexer_class),&NAMSTR(s_ss69c65032, "template_lexer_class") },
  {0x6751E4C91D40C031LL,3,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Eval, m_usesCompiler),&NAMSTR(s_ssa0f13ad5, "usesCompiler") },
  {0x74D6BE1FFE503573LL,-1,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Eval, m_template_parser_class),&NAMSTR(s_ss2ae19e62, "template_parser_class") },
  {0x06141D64A6B64346LL,-3,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Eval, m_compiler_class),&NAMSTR(s_ss664736fa, "compiler_class") },
  {0x27F0C3DCA79078E9LL,0,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Resource_Eval, m_isEvaluated),&NAMSTR(s_ssee449446, "isEvaluated") },

  {0x0D35EC793C95F331LL,0,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_code, m_data),&NAMSTR(s_ssa9853128, "data") },
  {0x465F5F4F142EDE8FLL,-1,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_code, m_parser),&NAMSTR(s_ss1d4f2d02, "parser") },

  {0x465F5F4F142EDE8FLL,1,4,0,4,10,GET_PROPERTY_OFFSET(c__smarty_doublequoted, m_parser),&NAMSTR(s_ss1d4f2d02, "parser") },
  {0x7CAFB24CF8902557LL,0,5,0,68,10,GET_PROPERTY_OFFSET(c__smarty_doublequoted, m_subtrees),&NAMSTR(s_ss8ac00204, "subtrees") },

  {0x0D35EC793C95F331LL,0,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_dq_content, m_data),&NAMSTR(s_ssa9853128, "data") },

  {0x0D35EC793C95F331LL,0,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_linebreak, m_data),&NAMSTR(s_ssa9853128, "data") },

  {0x0D35EC793C95F331LL,1,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_tag, m_data),&NAMSTR(s_ssa9853128, "data") },
  {0x6EFEC38440043E2ALL,0,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_tag, m_saved_block_nesting),&NAMSTR(s_sse4b46ab6, "saved_block_nesting") },
  {0x465F5F4F142EDE8FLL,-2,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_tag, m_parser),&NAMSTR(s_ss1d4f2d02, "parser") },

  {0x7CAFB24CF8902557LL,0,5,0,68,10,GET_PROPERTY_OFFSET(c__smarty_template_buffer, m_subtrees),&NAMSTR(s_ss8ac00204, "subtrees") },

  {0x0D35EC793C95F331LL,0,4,0,68,10,GET_PROPERTY_OFFSET(c__smarty_text, m_data),&NAMSTR(s_ssa9853128, "data") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Resource_Eval hash
  0,1,-1,2,-1,-1,3,-1,-1,4,-1,-1,-1,-1,-1,-1,
  // Smarty_Internal_Resource_Eval lists
  -1,
  -1,
  -1,
  // _smarty_code hash
  -1,0,-1,-1,-1,-1,-1,1,
  // _smarty_code lists
  -1,
  -1,
  -1,
  // _smarty_doublequoted hash
  -1,-1,-1,-1,-1,-1,-1,0,
  // _smarty_doublequoted lists
  -1,
  -1,
  -1,
  // _smarty_dq_content hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // _smarty_dq_content lists
  -1,
  -1,
  -1,
  // _smarty_linebreak hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // _smarty_linebreak lists
  -1,
  -1,
  -1,
  // _smarty_tag hash
  -1,0,1,-1,-1,-1,-1,2,
  // _smarty_tag lists
  -1,
  -1,
  -1,
  // _smarty_template_buffer hash
  -1,-1,-1,-1,-1,-1,-1,0,
  // _smarty_template_buffer lists
  -1,
  -1,
  -1,
  // _smarty_text hash
  -1,0,-1,-1,-1,-1,-1,-1,
  // _smarty_text lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Resource_Eval::os_prop_table = {
  15,3,-1,-1,-1,-1,17,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c__smarty_code::os_prop_table = {
  7,1,-1,-1,-1,-1,9,0,
  cpt_hash_entries+19,0,cpt_table_entries+5,cpt_static_inits
};
const ClassPropTable c__smarty_doublequoted::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+30,0,cpt_table_entries+7,cpt_static_inits
};
const ClassPropTable c__smarty_dq_content::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+41,0,cpt_table_entries+9,cpt_static_inits
};
const ClassPropTable c__smarty_linebreak::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+52,0,cpt_table_entries+10,cpt_static_inits
};
const ClassPropTable c__smarty_tag::os_prop_table = {
  7,2,-1,-1,-1,-1,9,0,
  cpt_hash_entries+63,0,cpt_table_entries+11,cpt_static_inits
};
const ClassPropTable c__smarty_template_buffer::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+74,0,cpt_table_entries+14,cpt_static_inits
};
const ClassPropTable c__smarty_text::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+85,0,cpt_table_entries+15,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
