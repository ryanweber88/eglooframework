
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.fws.h>

// Dependencies
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compilebase.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_CompileBase)
const InstanceOfInfo c_Smarty_Internal_CompileBase::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_CompileBase::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_CompileBase::ci__open_tag((void*)&c_Smarty_Internal_CompileBase::i__open_tag, (void*)&c_Smarty_Internal_CompileBase::ifa__open_tag, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CompileBase::ci__get_attributes((void*)&c_Smarty_Internal_CompileBase::i__get_attributes, (void*)&c_Smarty_Internal_CompileBase::ifa__get_attributes, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_CompileBase::ci__close_tag((void*)&c_Smarty_Internal_CompileBase::i__close_tag, (void*)&c_Smarty_Internal_CompileBase::ifa__close_tag, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_CompileBase::i__open_tag(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i__open_tag, coo_Smarty_Internal_CompileBase);
  }
  c_Smarty_Internal_CompileBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CompileBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CompileBase::_open_tag", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t__open_tag(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_CompileBase::i__get_attributes(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i__get_attributes, coo_Smarty_Internal_CompileBase);
  }
  c_Smarty_Internal_CompileBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CompileBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CompileBase::_get_attributes", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t__get_attributes(arg0));
  }
}
Variant c_Smarty_Internal_CompileBase::i__close_tag(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i__close_tag, coo_Smarty_Internal_CompileBase);
  }
  c_Smarty_Internal_CompileBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CompileBase*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CompileBase::_close_tag", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t__close_tag(arg0));
  }
}
Variant c_Smarty_Internal_CompileBase::ifa__open_tag(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa__open_tag, coo_Smarty_Internal_CompileBase);
  }
  c_Smarty_Internal_CompileBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CompileBase*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CompileBase::_open_tag", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  return (self->t__open_tag(arg0, arg1), null);
}
Variant c_Smarty_Internal_CompileBase::ifa__get_attributes(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa__get_attributes, coo_Smarty_Internal_CompileBase);
  }
  c_Smarty_Internal_CompileBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CompileBase*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CompileBase::_get_attributes", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t__get_attributes(arg0));
}
Variant c_Smarty_Internal_CompileBase::ifa__close_tag(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa__close_tag, coo_Smarty_Internal_CompileBase);
  }
  c_Smarty_Internal_CompileBase *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_CompileBase*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_CompileBase::_close_tag", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t__close_tag(arg0));
}
const MethodCallInfoTable c_Smarty_Internal_CompileBase::s_call_info_table[] = {
  { 0x7FB0682D479A9D82LL, 1, 10, "_close_tag", &c_Smarty_Internal_CompileBase::ci__close_tag },
  { 0x74E2DEDE492908A3LL, 1, 15, "_get_attributes", &c_Smarty_Internal_CompileBase::ci__get_attributes },
  { 0x70F2961274AA975FLL, 1, 9, "_open_tag", &c_Smarty_Internal_CompileBase::ci__open_tag },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_CompileBase::s_call_info_index[] = {
  7,
  -1,-1,0,1,-1,-1,-1,2,

};
const ObjectStaticCallbacks cw_Smarty_Internal_CompileBase = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_CompileBase,
  c_Smarty_Internal_CompileBase::s_call_info_table,c_Smarty_Internal_CompileBase::s_call_info_index,
  c_Smarty_Internal_CompileBase::s_instanceof_table,c_Smarty_Internal_CompileBase::s_instanceof_index,
  &c_Smarty_Internal_CompileBase::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,0
};
void c_Smarty_Internal_CompileBase::init() {
  m_required_attributes = s_sa00000000;
  m_optional_attributes = s_sa00000000;
  m_shorttag_order = s_sa00000000;
  m_option_flags = s_sa61f561df;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compilebase.php line 33 */
Array c_Smarty_Internal_CompileBase::t__get_attributes(CVarRef v_attributes) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CompileBase, Smarty_Internal_CompileBase::_get_attributes);
  INTERCEPT_INJECTION("Smarty_Internal_CompileBase::_get_attributes", array_createvi(1, toVPOD(v_attributes)), r);
  Array v__indexed_attr;
  Primitive v_key = 0;
  Variant v_mixed;
  Variant v_kv;
  Variant v_attr;
  Variant v_tmp_array;
  Variant v_dummy;
  Variant v_flag;

  v__indexed_attr = s_sa00000000;
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v_attributes.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v_mixed);
      v_key.assignVal(iter3.first());
      {
        if (!(x_is_array(v_mixed))) {
          {
            {
              bool tmp0;
              {
                LINE(41,0);
                const String &tmp1((x_trim(toString(v_mixed), NAMSTR(s_ss643ce2bc, "'\""))));
                tmp0 = (x_in_array(VarNR(tmp1), m_option_flags));
              }
              if (tmp0) {
                {
                  {
                    LINE(42,0);
                    const String &tmp0((x_trim(toString(v_mixed), NAMSTR(s_ss643ce2bc, "'\""))));
                    v__indexed_attr.set(tmp0, (true_varNR));
                  }
                }
              }
              else {
                bool tmp0;
                {
                  tmp0 = (isset(m_shorttag_order, v_key));
                }
                if (tmp0) {
                  {
                    {
                      LINE(45,0);
                      const Variant &tmp0((m_shorttag_order.rvalAt(v_key, AccessFlags::Error)));
                      v__indexed_attr.set(tmp0, (v_mixed));
                    }
                  }
                }
                else {
                  {
                    {
                      LINE(48,0);
                      MethodCallPackage mcp0;
                      CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                      mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                      (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svseb5bac11, "too many shorthand attributes"), tmp1);
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
              LINE(52,0);
              const Variant &tmp0((x_each(ref(v_mixed))));
              v_kv.assignVal(tmp0);
            }
            {
              bool tmp0;
              {
                LINE(54,0);
                const Variant &tmp1((v_kv.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
                tmp0 = (x_in_array(tmp1, m_option_flags));
              }
              if (tmp0) {
                {
                  {
                    bool tmp0;
                    {
                      LINE(55,0);
                      const Variant &tmp1((v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
                      tmp0 = (x_is_bool(tmp1));
                    }
                    if (tmp0) {
                      {
                        {
                          LINE(56,0);
                          const Variant &tmp0((v_kv.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
                          const Variant &tmp1((v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
                          v__indexed_attr.set(tmp0, (tmp1));
                        }
                      }
                    }
                    else {
                      bool tmp0;
                      {
                        LINE(57,0);
                        const Variant &tmp1((v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
                        bool tmp2 = (x_is_string(tmp1));
                        if (tmp2) {
                          const String &tmp3((toString(v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
                          const String &tmp4((x_trim(tmp3, NAMSTR(s_ss643ce2bc, "'\""))));
                          tmp2 = (x_in_array(VarNR(tmp4), s_sva6a0360fb));
                        }
                        tmp0 = (tmp2);
                      }
                      if (tmp0) {
                        {
                          {
                            bool tmp0;
                            {
                              LINE(58,0);
                              const String &tmp1((toString(v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key))));
                              const String &tmp2((x_trim(tmp1)));
                              tmp0 = (equal(tmp2, NAMSTR(s_ss102bfbc4, "true")));
                            }
                            if (tmp0) {
                              {
                                {
                                  LINE(59,0);
                                  const Variant &tmp0((v_kv.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
                                  v__indexed_attr.set(tmp0, (true_varNR));
                                }
                              }
                            }
                            else {
                              {
                                {
                                  LINE(61,0);
                                  const Variant &tmp0((v_kv.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
                                  v__indexed_attr.set(tmp0, (false_varNR));
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        bool tmp0;
                        {
                          LINE(63,0);
                          const Variant &tmp1((v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
                          bool tmp2 = (x_is_numeric(tmp1));
                          if (tmp2) {
                            const Variant &tmp3((v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
                            tmp2 = (x_in_array(tmp3, s_sva1f911397));
                          }
                          tmp0 = (tmp2);
                        }
                        if (tmp0) {
                          {
                            {
                              bool tmp0;
                              {
                                LINE(64,0);
                                const Variant &tmp1((v_kv.rvalAt(NAMSTR(s_sse0c88471, "value"), AccessFlags::Error_Key)));
                                tmp0 = (equal(tmp1, 1LL));
                              }
                              if (tmp0) {
                                {
                                  {
                                    LINE(65,0);
                                    const Variant &tmp0((v_kv.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
                                    v__indexed_attr.set(tmp0, (true_varNR));
                                  }
                                }
                              }
                              else {
                                {
                                  {
                                    LINE(67,0);
                                    const Variant &tmp0((v_kv.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key)));
                                    v__indexed_attr.set(tmp0, (false_varNR));
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          {
                            {
                              LINE(70,0);
                              MethodCallPackage mcp0;
                              CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                              mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                              const String &tmp1((toString(v_kv.rvalAt(NAMSTR(s_ss12e90587, "key"), AccessFlags::Error_Key))));
                              const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                              (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss619e24f7, "illegal value of option flag \""), tmp1, NAMSTR(s_ss7e5fc106, "\""))), tmp2);
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
                  LINE(74,(x_reset(ref(v_mixed))));
                  {
                    LINE(75,0);
                    const Variant &tmp0((x_key(ref(v_mixed))));
                    const Variant &tmp1((x_key(ref(v_mixed))));
                    const Variant &tmp2((v_mixed.rvalAt(tmp1, AccessFlags::Error)));
                    v__indexed_attr.set(tmp0, (tmp2));
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
    LOOP_COUNTER(4);
    Variant map5 = m_required_attributes;
    for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
      LOOP_COUNTER_CHECK(4);
      iter6.second(v_attr);
      {
        {
          bool tmp0;
          {
            LINE(81,0);
            bool tmp1((x_array_key_exists(v_attr, VarNR(v__indexed_attr))));
            tmp0 = (!(tmp1));
          }
          if (tmp0) {
            {
              {
                LINE(82,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                const String &tmp1((toString(v_attr)));
                const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss8a429168, "missing \""), tmp1, NAMSTR(s_ss3b61938b, "\" attribute"))), tmp2);
              }
            }
          }
        }
      }
    }
  }
  if (!equal(m_optional_attributes, s_sad23e7614)) {
    {
      {
        LINE(87,0);
        const Variant &tmp0((x_array_merge(3, m_required_attributes, Array(array_createvi(2, toVPOD(m_optional_attributes), toVPOD(m_option_flags))))));
        v_tmp_array.assignVal(tmp0);
      }
      {
        LOOP_COUNTER(7);
        for (ArrayIter iter9 = v__indexed_attr.begin(s_class_name, true); !iter9.end(); ++iter9) {
          LOOP_COUNTER_CHECK(7);
          iter9.second(v_dummy);
          v_key.assignVal(iter9.first());
          {
            {
              bool tmp0;
              {
                LINE(89,0);
                bool tmp1((x_in_array(v_key, v_tmp_array)));
                tmp0 = ((!(tmp1) && !same(v_key, 0LL)));
              }
              if (tmp0) {
                {
                  {
                    LINE(90,0);
                    MethodCallPackage mcp0;
                    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
                    mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
                    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                    const String &tmp1((toString(v_key)));
                    const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
                    (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss81478b33, "unexpected \""), tmp1, NAMSTR(s_ss3b61938b, "\" attribute"))), tmp2);
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
    LOOP_COUNTER(10);
    Variant map11 = m_option_flags;
    for (ArrayIter iter12 = map11.begin(s_class_name, true); !iter12.end(); iter12.next()) {
      LOOP_COUNTER_CHECK(10);
      iter12.second(v_flag);
      {
        if (!(isset(v__indexed_attr, v_flag))) {
          {
            v__indexed_attr.set(v_flag, (false_varNR));
          }
        }
      }
    }
  }
  return v__indexed_attr;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compilebase.php line 112 */
void c_Smarty_Internal_CompileBase::t__open_tag(CVarRef v_open_tag, CVarRef v_data //  = null_variant
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CompileBase, Smarty_Internal_CompileBase::_open_tag);
  INTERCEPT_INJECTION("Smarty_Internal_CompileBase::_open_tag", array_createvi(2, toVPOD(v_open_tag), toVPOD(v_data)), );
  Variant tmp_ref;
  {
    LINE(114,0);
    const VRefParamValue &tmp0((ref(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss0b3d5400, "_tag_stack"), tmp_ref, s_class_name))));
    x_array_push(2, tmp0, VarNR(Array(array_createvi(2, toVPOD(v_open_tag), toVPOD(v_data)))));
    tmp_ref.unset();
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compilebase.php line 125 */
Variant c_Smarty_Internal_CompileBase::t__close_tag(CVarRef v_expected_tag) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_CompileBase, Smarty_Internal_CompileBase::_close_tag);
  INTERCEPT_INJECTION("Smarty_Internal_CompileBase::_close_tag", array_createvi(1, toVPOD(v_expected_tag)), r);
  Variant v__open_tag;
  Variant v__data;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(127,0);
      const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true)));
      int tmp2((x_count(tmp1)));
      tmp0 = (more(tmp2, 0LL));
    }
    if (tmp0) {
      {
        {
          LINE(129,0);
          CVarRef tmp0((x_array_pop(ref(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss0b3d5400, "_tag_stack"), tmp_ref, s_class_name)))));
          v__data = tmp0[1];
          v__open_tag = tmp0[0];
          ;
          tmp_ref.unset();
        }
        if (LINE(131,(x_in_array(v__open_tag, VarNR((toArray(v_expected_tag))))))) {
          {
            if (x_is_null(v__data)) {
              {
                return v__open_tag;
              }
            }
            else {
              {
                return v__data;
              }
            }
          }
        }
        {
          LINE(141,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(concat3(NAMSTR(s_ssd432d193, "unclosed {"), toString(v__open_tag), NAMSTR(s_ss6d2e603f, "} tag"))));
        }
        return null;
      }
    }
  }
  {
    LINE(145,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
    mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
    (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs5ca16b30, "unexpected closing tag"), tmp1);
  }
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_CompileBase() {
  return NEWOBJ(c_Smarty_Internal_CompileBase)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compilebase.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compilebase_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compilebase) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva61f561df,
  (int64)&s_sva00000000,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x10405E554CDFCEB9LL,0,0,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_CompileBase, m_option_flags),&NAMSTR(s_ssc9f0d92c, "option_flags") },
  {0x54E8208FE47CFF0ELL,1,1,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_CompileBase, m_required_attributes),&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x691414609BC81C26LL,1,1,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_CompileBase, m_optional_attributes),&NAMSTR(s_ss924eeed5, "optional_attributes") },
  {0x592D7A1CE6937E56LL,-3,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_CompileBase, m_shorttag_order),&NAMSTR(s_ss7a3cf10e, "shorttag_order") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_CompileBase hash
  -1,0,-1,-1,-1,-1,1,-1,
  // Smarty_Internal_CompileBase lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_CompileBase::os_prop_table = {
  7,1,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
