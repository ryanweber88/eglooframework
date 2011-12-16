
#include <php/Smarty/libs/sysplugins/smarty_internal_wrapper.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_wrapper.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_write_file.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_write_file.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_security.h>
#include <php/Smarty/libs/sysplugins/smarty_security.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_wrapper.php line 39 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Wrapper)
const InstanceOfInfo c_Smarty_Internal_Wrapper::s_instanceof_table[] = {
  {0x3D8C617516F3AD7ELL,1,"Smarty_Internal_Wrapper",&cw_Smarty_Internal_Wrapper},
};
const int c_Smarty_Internal_Wrapper::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Wrapper::ci___construct((void*)&c_Smarty_Internal_Wrapper::i___construct, (void*)&c_Smarty_Internal_Wrapper::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Wrapper::ci_convert((void*)&c_Smarty_Internal_Wrapper::i_convert, (void*)&c_Smarty_Internal_Wrapper::ifa_convert, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Wrapper::ci_trigger_error((void*)&c_Smarty_Internal_Wrapper::i_trigger_error, (void*)&c_Smarty_Internal_Wrapper::ifa_trigger_error, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Wrapper::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Wrapper);
  }
  c_Smarty_Internal_Wrapper *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Wrapper*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Wrapper::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Internal_Wrapper::i_convert(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_convert, coo_Smarty_Internal_Wrapper);
  }
  c_Smarty_Internal_Wrapper *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Wrapper*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Wrapper::convert", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_convert(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Wrapper::i_trigger_error(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_trigger_error, coo_Smarty_Internal_Wrapper);
  }
  c_Smarty_Internal_Wrapper *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Wrapper*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Wrapper::trigger_error", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? Variant(512LL /* E_USER_WARNING */) : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_trigger_error(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Wrapper::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Wrapper);
  }
  c_Smarty_Internal_Wrapper *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Wrapper*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Wrapper::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Internal_Wrapper::ifa_convert(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_convert, coo_Smarty_Internal_Wrapper);
  }
  c_Smarty_Internal_Wrapper *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Wrapper*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Wrapper::convert", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_convert(arg0, arg1));
}
Variant c_Smarty_Internal_Wrapper::ifa_trigger_error(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_trigger_error, coo_Smarty_Internal_Wrapper);
  }
  c_Smarty_Internal_Wrapper *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Wrapper*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Wrapper::trigger_error", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? (NAMVAR(s_svid5e04164, 512LL) /* E_USER_WARNING */) : a1);
  return (self->t_trigger_error(arg0, arg1), null);
}
const MethodCallInfoTable c_Smarty_Internal_Wrapper::s_call_info_table[] = {
  { 0x3F869126D0336442LL, 1, 13, "trigger_error", &c_Smarty_Internal_Wrapper::ci_trigger_error },
  { 0x2380F10632B403BBLL, 1, 7, "convert", &c_Smarty_Internal_Wrapper::ci_convert },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Wrapper::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Wrapper::s_call_info_index[] = {
  7,
  -1,-1,0,1,-1,-1,-1,2,

};
c_Smarty_Internal_Wrapper *c_Smarty_Internal_Wrapper::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Wrapper = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Wrapper,
  c_Smarty_Internal_Wrapper::s_call_info_table,c_Smarty_Internal_Wrapper::s_call_info_index,
  c_Smarty_Internal_Wrapper::s_instanceof_table,c_Smarty_Internal_Wrapper::s_instanceof_index,
  &c_Smarty_Internal_Wrapper::s_class_name,
  &c_Smarty_Internal_Wrapper::os_prop_table,&c_Smarty_Internal_Wrapper::ci___construct,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_wrapper.php line 43 */
void c_Smarty_Internal_Wrapper::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Wrapper, Smarty_Internal_Wrapper::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Wrapper::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  m_smarty.assignVal(v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_wrapper.php line 54 */
Variant c_Smarty_Internal_Wrapper::t_convert(CVarRef v_name, CVarRef v_args) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Wrapper, Smarty_Internal_Wrapper::convert);
  INTERCEPT_INJECTION("Smarty_Internal_Wrapper::convert", array_createvi(2, toVPOD(v_name), toVPOD(v_args)), r);
  Variant v_name_parts;
  Variant v_myobj;

  if (LINE(56,(toBoolean(m_smarty.o_getPublic(NAMSTR(s_sseb6ec972, "deprecation_notices"), true))))) {
    LINE(57,(x_trigger_error(concat3(NAMSTR(s_ss4bdca91e, "function call '"), toString(v_name), NAMSTR(s_ss1bcddfa8, "' is unknown or deprecated.")), toInt32(1024LL) /* E_USER_NOTICE */)));
  }
  {
    LINE(59,0);
    const Variant &tmp0((x_explode(NAMSTR(s_ss7f06ffcd, "_"), toString(v_name), toInt32(2LL))));
    v_name_parts.assignVal(tmp0);
  }
  {
    Variant switch2;
    switch2 = (LINE(60,(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
    bool needsOrder;
    int64 hash;
    hash = switch2.hashForStringSwitch(3912760507579028883LL, 0LL, 0LL, 3912760507579028883LL, 3912760507579028883LL, 16LL, needsOrder);
    switch (((uint64) hash) & 15UL) {
    case 3UL:
      if (equal(switch2, (NAMSTR(s_ss89d3f41f, "register")))) goto case_2_0;
      if (UNLIKELY(needsOrder)) goto case_2_h_s1;
      goto break1;
    case_2_h_s1:
    case 6UL:
      if (equal(switch2, (NAMSTR(s_ss2b307443, "unregister")))) goto case_2_1;
      if (UNLIKELY(needsOrder)) goto case_2_h_s2;
      goto break1;
    case_2_h_s3:
    case 7UL:
      if (equal(switch2, (NAMSTR(s_ss82b3b83c, "clear")))) goto case_2_3;
      if (UNLIKELY(needsOrder)) goto case_2_h_s4;
      goto break1;
    case_2_h_s2:
    case 8UL:
      if (equal(switch2, (NAMSTR(s_sseac4979f, "get")))) goto case_2_2;
      if (UNLIKELY(needsOrder)) goto case_2_h_s3;
      goto break1;
    case_2_h_s4:
    case 12UL:
      if (equal(switch2, (NAMSTR(s_ss80368269, "config")))) goto case_2_4;
      if (UNLIKELY(needsOrder)) goto case_2_h_s5;
      goto break1;
    case_2_h_s5:
    case 14UL:
      if (equal(switch2, (NAMSTR(s_ss34b83043, "trigger")))) goto case_2_5;
      if (UNLIKELY(needsOrder)) goto case_2_h_s6;
      goto break1;
    case_2_h_s6:
    case 15UL:
      if (equal(switch2, (NAMSTR(s_ss5853bc97, "load")))) goto case_2_6;
      goto break1;
    default: goto break1;
    }
  }
  case_2_0:
    {
    }
  case_2_1:
    {
      {
        Variant switch4;
        switch4 = (LINE(63,(v_name_parts.rvalAt(1LL, AccessFlags::Error))));
        bool needsOrder;
        int64 hash;
        hash = switch4.hashForStringSwitch(3390166990820399674LL, 0LL, 0LL, 3390166990820399674LL, 3390166990820399674LL, 16LL, needsOrder);
        switch (((uint64) hash) & 15UL) {
        case_4_h_s2:
        case 0UL:
          if (equal(switch4, (NAMSTR(s_ss8e3c9f19, "prefilter")))) goto case_4_2;
          if (UNLIKELY(needsOrder)) goto case_4_h_s3;
          goto case_4_6;
        case_4_h_s5:
        case 2UL:
          if (equal(switch4, (NAMSTR(s_ssa514122c, "resource")))) goto case_4_5;
          goto case_4_6;
        case_4_h_s1:
        case 4UL:
          if (equal(switch4, (NAMSTR(s_ss407d5ce1, "compiler_function")))) goto case_4_1;
          if (UNLIKELY(needsOrder)) goto case_4_h_s2;
          goto case_4_6;
        case_4_h_s3:
        case 5UL:
          if (equal(switch4, (NAMSTR(s_ss83517ee3, "postfilter")))) goto case_4_3;
          if (UNLIKELY(needsOrder)) goto case_4_h_s4;
          goto case_4_6;
        case 10UL:
          if (equal(switch4, (NAMSTR(s_ss222b1861, "object")))) goto case_4_0;
          if (UNLIKELY(needsOrder)) goto case_4_h_s1;
          goto case_4_6;
        case_4_h_s4:
        case 11UL:
          if (equal(switch4, (NAMSTR(s_ssab33e931, "outputfilter")))) goto case_4_4;
          if (UNLIKELY(needsOrder)) goto case_4_h_s5;
          goto case_4_6;
        default: goto case_4_6;
        }
      }
      case_4_0:
        {
          {
            Variant tmp1((m_smarty));
            LINE(65,0);
            const String &tmp2((toString(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(VarNR(concat(tmp2, NAMSTR(s_ss488a3c81, "Object"))))));
            const Array &tmp3((Array(tmp0)));
            return x_call_user_func_array(VarNR(tmp3), toArray(v_args));
          }
        }
      case_4_1:
        {
          {
            Variant tmp1((m_smarty));
            LINE(67,0);
            const String &tmp2((toString(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(VarNR(concat(tmp2, NAMSTR(s_ss40b9f01e, "Plugin"))))));
            const Array &tmp3((Array(tmp0)));
            const Array &tmp4((toArray(x_array_merge(2, s_sva571a3f15, Array(array_createvi(1, toVPOD(v_args)))))));
            return x_call_user_func_array(VarNR(tmp3), tmp4);
          }
        }
      case_4_2:
        {
          {
            Variant tmp1((m_smarty));
            LINE(69,0);
            const String &tmp2((toString(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(VarNR(concat(tmp2, NAMSTR(s_ssce5c9e6d, "Filter"))))));
            const Array &tmp3((Array(tmp0)));
            const Array &tmp4((toArray(x_array_merge(2, s_svaea4f99da, Array(array_createvi(1, toVPOD(v_args)))))));
            return x_call_user_func_array(VarNR(tmp3), tmp4);
          }
        }
      case_4_3:
        {
          {
            Variant tmp1((m_smarty));
            LINE(71,0);
            const String &tmp2((toString(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(VarNR(concat(tmp2, NAMSTR(s_ssce5c9e6d, "Filter"))))));
            const Array &tmp3((Array(tmp0)));
            const Array &tmp4((toArray(x_array_merge(2, s_sva29163228, Array(array_createvi(1, toVPOD(v_args)))))));
            return x_call_user_func_array(VarNR(tmp3), tmp4);
          }
        }
      case_4_4:
        {
          {
            Variant tmp1((m_smarty));
            LINE(73,0);
            const String &tmp2((toString(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(VarNR(concat(tmp2, NAMSTR(s_ssce5c9e6d, "Filter"))))));
            const Array &tmp3((Array(tmp0)));
            const Array &tmp4((toArray(x_array_merge(2, s_svabaea3a0a, Array(array_createvi(1, toVPOD(v_args)))))));
            return x_call_user_func_array(VarNR(tmp3), tmp4);
          }
        }
      case_4_5:
        {
          {
            Variant tmp1((m_smarty));
            LINE(75,0);
            const String &tmp2((toString(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(VarNR(concat(tmp2, NAMSTR(s_ss11ff83e6, "Resource"))))));
            const Array &tmp3((Array(tmp0)));
            return x_call_user_func_array(VarNR(tmp3), toArray(v_args));
          }
        }
      case_4_6:
        {
          {
            Variant tmp1((m_smarty));
            LINE(77,0);
            const String &tmp2((toString(v_name_parts.rvalAt(0LL, AccessFlags::Error))));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(VarNR(concat(tmp2, NAMSTR(s_ss40b9f01e, "Plugin"))))));
            const Array &tmp3((Array(tmp0)));
            const Variant &tmp5((v_name_parts.rvalAt(1LL, AccessFlags::Error)));
            ArrayInit tmp4(array_createvi(1, toVPOD(tmp5)));
            const Array &tmp6((Array(tmp4)));
            const Array &tmp7((toArray(x_array_merge(2, VarNR(tmp6), Array(array_createvi(1, toVPOD(v_args)))))));
            return x_call_user_func_array(VarNR(tmp3), tmp7);
          }
        }
    }
  case_2_2:
    {
      {
        Variant switch6;
        switch6 = (LINE(80,(v_name_parts.rvalAt(1LL, AccessFlags::Error))));
        bool needsOrder;
        int64 hash;
        hash = switch6.hashForStringSwitch(5721992526611139728LL, 0LL, 0LL, 5721992526611139728LL, 5721992526611139728LL, 4LL, needsOrder);
        switch (((uint64) hash) & 3UL) {
        case 0UL:
          if (equal(switch6, (NAMSTR(s_ss3b281cb3, "template_vars")))) goto case_6_0;
          if (UNLIKELY(needsOrder)) goto case_6_h_s1;
          goto case_6_2;
        case_6_h_s1:
        case 2UL:
          if (equal(switch6, (NAMSTR(s_ss4fdfffb6, "config_vars")))) goto case_6_1;
          goto case_6_2;
        default: goto case_6_2;
        }
      }
      case_6_0:
        {
          return LINE(82,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svs03cae7a3, "getTemplateVars"))))), toArray(v_args))));
        }
      case_6_1:
        {
          return LINE(84,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svs7ac0b044, "getConfigVars"))))), toArray(v_args))));
        }
      case_6_2:
        {
          {
            Variant tmp1((v_myobj));
            LINE(86,0);
            const Variant &tmp2((v_name_parts.rvalAt(1LL, AccessFlags::Error)));
            ArrayInit tmp0(array_createvi(2, toVPOD(tmp1), toVPOD(tmp2)));
            const Array &tmp3((Array(tmp0)));
            return x_call_user_func_array(VarNR(tmp3), toArray(v_args));
          }
        }
    }
  case_2_3:
    {
      {
        Variant switch8;
        switch8 = (LINE(89,(v_name_parts.rvalAt(1LL, AccessFlags::Error))));
        bool needsOrder;
        int64 hash;
        hash = switch8.hashForStringSwitch(2811053278920303883LL, 0LL, 0LL, 2811053278920303883LL, 2811053278920303883LL, 16LL, needsOrder);
        switch (((uint64) hash) & 15UL) {
        case_8_h_s1:
        case 4UL:
          if (equal(switch8, (NAMSTR(s_ssba4e7712, "assign")))) goto case_8_1;
          if (UNLIKELY(needsOrder)) goto case_8_h_s2;
          goto break7;
        case_8_h_s3:
        case 8UL:
          if (equal(switch8, (NAMSTR(s_ss326ad070, "cache")))) goto case_8_3;
          if (UNLIKELY(needsOrder)) goto case_8_h_s4;
          goto break7;
        case 11UL:
          if (equal(switch8, (NAMSTR(s_ss5d6defa3, "all_assign")))) goto case_8_0;
          if (UNLIKELY(needsOrder)) goto case_8_h_s1;
        case_8_h_s5:
          if (equal(switch8, (NAMSTR(s_ss8a1ec5e7, "compiled_template")))) goto case_8_5;
          goto break7;
        case_8_h_s4:
        case 12UL:
          if (equal(switch8, (NAMSTR(s_ss80368269, "config")))) goto case_8_4;
          if (UNLIKELY(needsOrder)) goto case_8_h_s5;
          goto break7;
        case_8_h_s2:
        case 14UL:
          if (equal(switch8, (NAMSTR(s_ss75c65336, "all_cache")))) goto case_8_2;
          if (UNLIKELY(needsOrder)) goto case_8_h_s3;
          goto break7;
        default: goto break7;
        }
      }
      case_8_0:
        {
          return LINE(91,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svsf5da28a1, "clearAllAssign"))))), toArray(v_args))));
        }
      case_8_1:
        {
          return LINE(93,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svs240d5d48, "clearAssign"))))), toArray(v_args))));
        }
      case_8_2:
        {
          return LINE(95,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svs8a842e98, "clearAllCache"))))), toArray(v_args))));
        }
      case_8_3:
        {
          return LINE(97,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svs3c13ba46, "clearCache"))))), toArray(v_args))));
        }
      case_8_4:
        {
          return LINE(99,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svsa7be101c, "clearConfig"))))), toArray(v_args))));
        }
      case_8_5:
        {
          return LINE(101,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svsc8056cd4, "clearCompiledTemplate"))))), toArray(v_args))));
        }
      break7:;
    }
  case_2_4:
    {
      {
        Variant switch10 = (LINE(104,(v_name_parts.rvalAt(1LL, AccessFlags::Error))));
        if (equal(switch10, (NAMSTR(s_ss5853bc97, "load")))) goto case_10_0;
        goto break9;
      }

      case_10_0:
        {
          return LINE(106,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svs0a12981b, "configLoad"))))), toArray(v_args))));
        }
      break9:;
    }
  case_2_5:
    {
      {
        Variant switch12 = (LINE(109,(v_name_parts.rvalAt(1LL, AccessFlags::Error))));
        if (equal(switch12, (NAMSTR(s_ss9e5158a7, "error")))) goto case_12_0;
        goto break11;
      }

      case_12_0:
        {
          {
            extern Variant i_trigger_error(void*,CArrRef);
            return LINE(111,(Variant(i_trigger_error(NULL, toArray(v_args)))));
          }
        }
      break11:;
    }
  case_2_6:
    {
      {
        Variant switch14 = (LINE(114,(v_name_parts.rvalAt(1LL, AccessFlags::Error))));
        if (equal(switch14, (NAMSTR(s_ssdf75b1c1, "filter")))) goto case_14_0;
        goto break13;
      }

      case_14_0:
        {
          return LINE(116,(x_call_user_func_array(VarNR(Array(array_createvi(2, toVPOD(m_smarty), toVPOD(NAMVAR(s_svsec37c702, "loadFilter"))))), toArray(v_args))));
        }
      break13:;
    }
  break1:;
  {
    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
    throw_exception(LINE(119,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ssea6be090, "unknown method '"), toString(v_name), NAMSTR(s_sse07b87c4, "'")))), tmp0))));
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_wrapper.php line 128 */
void c_Smarty_Internal_Wrapper::t_trigger_error(CVarRef v_error_msg, CVarRef v_error_type //  = NAMVAR(s_svid5e04164, 512LL) /* E_USER_WARNING */
) {
  INSTANCE_METHOD_INJECTION_ROOTLESS_NOMEM(Smarty_Internal_Wrapper, Smarty_Internal_Wrapper::trigger_error);
  INTERCEPT_INJECTION("Smarty_Internal_Wrapper::trigger_error", array_createvi(2, toVPOD(v_error_msg), toVPOD(v_error_type)), );
  LINE(130,(x_trigger_error(concat(NAMSTR(s_ssd461231d, "Smarty error: "), toString(v_error_msg)), toInt32(v_error_type))));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Wrapper() {
  return NEWOBJ(c_Smarty_Internal_Wrapper)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_wrapper.php, pm_php$Smarty$libs$sysplugins$smarty_internal_wrapper_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_wrapper) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_write_file.php line 14 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Write_File)
const InstanceOfInfo c_Smarty_Internal_Write_File::s_instanceof_table[] = {
  {0x76BA767709844C8BLL,1,"Smarty_Internal_Write_File",&cw_Smarty_Internal_Write_File},
};
const int c_Smarty_Internal_Write_File::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Write_File::ci_writefile((void*)&c_Smarty_Internal_Write_File::i_writefile, (void*)&c_Smarty_Internal_Write_File::ifa_writefile, 3, 12, 0x0000000000000000LL);
Variant c_Smarty_Internal_Write_File::i_writefile(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Write_File::writeFile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Write_File::t_writefile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Write_File::ifa_writefile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Write_File::writeFile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (c_Smarty_Internal_Write_File::t_writefile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Write_File::s_call_info_table[] = {
  { 0x6658A5257B93C024LL, 1, 9, "writeFile", &c_Smarty_Internal_Write_File::ci_writefile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Write_File::s_call_info_index[] = {
  1,
  0,-1,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Write_File = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Write_File,
  c_Smarty_Internal_Write_File::s_call_info_table,c_Smarty_Internal_Write_File::s_call_info_index,
  c_Smarty_Internal_Write_File::s_instanceof_table,c_Smarty_Internal_Write_File::s_instanceof_index,
  &c_Smarty_Internal_Write_File::s_class_name,
  0,0,0,0
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_write_file.php line 22 */
bool c_Smarty_Internal_Write_File::t_writefile(CVarRef v__filepath, CVarRef v__contents, CVarRef v_smarty) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Write_File, Smarty_Internal_Write_File::writeFile);
  INTERCEPT_INJECTION("Smarty_Internal_Write_File::writeFile", array_createvi(3, toVPOD(v__filepath), toVPOD(v__contents), toVPOD(v_smarty)), r);
  int v_old_umask = 0;
  String v__dirpath;
  Variant v__tmp_file;
  Variant v_fd;

  {
    LINE(24,0);
    int tmp0((x_umask(NAMVAR(s_svif01bca90, 0LL))));
    v_old_umask = tmp0;
  }
  {
    LINE(25,0);
    const String &tmp0((x_dirname(toString(v__filepath))));
    v__dirpath = tmp0;
  }
  {
    bool tmp0;
    {
      bool tmp1 = (!same(v__dirpath, NAMSTR(s_ss013a8f64, ".")));
      if (tmp1) {
        LINE(27,0);
        bool tmp2((x_file_exists(v__dirpath)));
        tmp1 = (!(tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          String tmp0((v__dirpath));
          LINE(28,0);
          int64 tmp1((toInt64(v_smarty.o_getPublic(NAMSTR(s_ss59de3f3d, "_dir_perms"), true))));
          x_mkdir(tmp0, tmp1, true);
        }
      }
    }
  }
  {
    LINE(31,0);
    const Variant &tmp0((x_tempnam(v__dirpath, NAMSTR(s_ss49f6ab84, "wrt"))));
    v__tmp_file.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      Silencer tmp1(true);
      Variant tmp2((LINE(33,(x_fopen(toString(v__tmp_file), NAMSTR(s_ss3f799d77, "wb"))))));
      tmp1.disable();
      tmp0 = (!(toBoolean(v_fd.assignVal(tmp2))));
    }
    if (tmp0) {
      {
        {
          String tmp0((v__dirpath));
          const String &tmp1((toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS")))));
          LINE(34,0);
          const String &tmp2((x_uniqid(NAMSTR(s_ss49f6ab84, "wrt"))));
          v__tmp_file = concat3(tmp0, tmp1, tmp2);
        }
        {
          bool tmp0;
          {
            Silencer tmp1(true);
            Variant tmp2((LINE(35,(x_fopen(toString(v__tmp_file), NAMSTR(s_ss3f799d77, "wb"))))));
            tmp1.disable();
            tmp0 = (!(toBoolean(v_fd.assignVal(tmp2))));
          }
          if (tmp0) {
            {
              {
                p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
                throw_exception(LINE(36,(((c_SmartyException*)tmp0.get()->create(VarNR(concat(NAMSTR(s_ssc615d094, "unable to write file "), toString(v__tmp_file)))), tmp0))));
              }
              return false;
            }
          }
        }
      }
    }
  }
  LINE(41,(x_fwrite(toObject(v_fd), toString(v__contents))));
  LINE(42,(x_fclose(toObject(v_fd))));
  if (LINE(45,(x_file_exists(toString(v__filepath))))) {
    {
      Silencer tmp0(true);
      LINE(46,(x_unlink(toString(v__filepath))));
      tmp0.disable();
      ;
    }
  }
  LINE(48,(x_rename(toString(v__tmp_file), toString(v__filepath))));
  {
    const String &tmp0((toString(v__filepath)));
    LINE(50,0);
    int64 tmp1((toInt64(v_smarty.o_getPublic(NAMSTR(s_ssc4e72b72, "_file_perms"), true))));
    x_chmod(tmp0, tmp1);
  }
  LINE(51,(x_umask(VarNR(v_old_umask))));
  return true;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Write_File() {
  return NEWOBJ(c_Smarty_Internal_Write_File)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_write_file.php, pm_php$Smarty$libs$sysplugins$smarty_internal_write_file_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_write_file) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 13 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Security)
const InstanceOfInfo c_Smarty_Security::s_instanceof_table[] = {
  {0x1F495757E400FFE1LL,1,"Smarty_Security",&cw_Smarty_Security},
};
const int c_Smarty_Security::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Security::ci_istrustedstream((void*)&c_Smarty_Security::i_istrustedstream, (void*)&c_Smarty_Security::ifa_istrustedstream, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Security::ci___construct((void*)&c_Smarty_Security::i___construct, (void*)&c_Smarty_Security::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Security::ci_istrustedphpfunction((void*)&c_Smarty_Security::i_istrustedphpfunction, (void*)&c_Smarty_Security::ifa_istrustedphpfunction, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Security::ci_istrustedmodifier((void*)&c_Smarty_Security::i_istrustedmodifier, (void*)&c_Smarty_Security::ifa_istrustedmodifier, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Security::ci_istrustedresourcedir((void*)&c_Smarty_Security::i_istrustedresourcedir, (void*)&c_Smarty_Security::ifa_istrustedresourcedir, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Security::ci_istrustedstaticclass((void*)&c_Smarty_Security::i_istrustedstaticclass, (void*)&c_Smarty_Security::ifa_istrustedstaticclass, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Security::ci_istrustedphpdir((void*)&c_Smarty_Security::i_istrustedphpdir, (void*)&c_Smarty_Security::ifa_istrustedphpdir, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Security::i_istrustedstream(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_istrustedstream, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::isTrustedStream", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_istrustedstream(arg0));
  }
}
Variant c_Smarty_Security::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_Smarty_Security::i_istrustedphpfunction(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_istrustedphpfunction, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Security::isTrustedPhpFunction", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_istrustedphpfunction(arg0, arg1));
  }
}
Variant c_Smarty_Security::i_istrustedmodifier(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_istrustedmodifier, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Security::isTrustedModifier", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_istrustedmodifier(arg0, arg1));
  }
}
Variant c_Smarty_Security::i_istrustedresourcedir(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_istrustedresourcedir, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::isTrustedResourceDir", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_istrustedresourcedir(arg0));
  }
}
Variant c_Smarty_Security::i_istrustedstaticclass(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_istrustedstaticclass, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Security::isTrustedStaticClass", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_istrustedstaticclass(arg0, arg1));
  }
}
Variant c_Smarty_Security::i_istrustedphpdir(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_istrustedphpdir, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::isTrustedPHPDir", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_istrustedphpdir(arg0));
  }
}
Variant c_Smarty_Security::ifa_istrustedstream(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_istrustedstream, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::isTrustedStream", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_istrustedstream(arg0));
}
Variant c_Smarty_Security::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t___construct(arg0), null);
}
Variant c_Smarty_Security::ifa_istrustedphpfunction(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_istrustedphpfunction, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Security::isTrustedPhpFunction", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_istrustedphpfunction(arg0, arg1));
}
Variant c_Smarty_Security::ifa_istrustedmodifier(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_istrustedmodifier, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Security::isTrustedModifier", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_istrustedmodifier(arg0, arg1));
}
Variant c_Smarty_Security::ifa_istrustedresourcedir(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_istrustedresourcedir, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::isTrustedResourceDir", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_istrustedresourcedir(arg0));
}
Variant c_Smarty_Security::ifa_istrustedstaticclass(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_istrustedstaticclass, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Security::isTrustedStaticClass", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_istrustedstaticclass(arg0, arg1));
}
Variant c_Smarty_Security::ifa_istrustedphpdir(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_istrustedphpdir, coo_Smarty_Security);
  }
  c_Smarty_Security *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Security*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Security::isTrustedPHPDir", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_istrustedphpdir(arg0));
}
const MethodCallInfoTable c_Smarty_Security::s_call_info_table[] = {
  { 0x50FEAC4EAA613861LL, 1, 20, "isTrustedPhpFunction", &c_Smarty_Security::ci_istrustedphpfunction },
  { 0x78515A6B5473B7B3LL, 1, 15, "isTrustedStream", &c_Smarty_Security::ci_istrustedstream },
  { 0x6886CCB7ECDA73E5LL, 1, 17, "isTrustedModifier", &c_Smarty_Security::ci_istrustedmodifier },
  { 0x51DC7D49C71538DBLL, 1, 20, "isTrustedResourceDir", &c_Smarty_Security::ci_istrustedresourcedir },
  { 0x4C50559F55AD23FDLL, 1, 20, "isTrustedStaticClass", &c_Smarty_Security::ci_istrustedstaticclass },
  { 0x219B369F1B21639DLL, 0, 15, "isTrustedPHPDir", &c_Smarty_Security::ci_istrustedphpdir },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Security::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Security::s_call_info_index[] = {
  15,
  -1,0,-1,1,-1,2,-1,-1,
  -1,-1,-1,3,-1,4,-1,6,

};
c_Smarty_Security *c_Smarty_Security::create(CVarRef v_smarty) {
  CountableHelper h(this);
  init();
  t___construct(v_smarty);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Security = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Security,
  c_Smarty_Security::s_call_info_table,c_Smarty_Security::s_call_info_index,
  c_Smarty_Security::s_instanceof_table,c_Smarty_Security::s_instanceof_index,
  &c_Smarty_Security::s_class_name,
  &c_Smarty_Security::os_prop_table,&c_Smarty_Security::ci___construct,0,0
};
void c_Smarty_Security::init() {
  DECLARE_GLOBAL_VARIABLES(g);
  m_php_handling = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___PHP_PASSTHRU));
  m_secure_dir = s_sa00000000;
  m_trusted_dir = s_sa00000000;
  m_static_classes = s_sa00000000;
  m_php_functions = s_sae11102f1;
  m_php_modifiers = s_sac4e01951;
  m_streams = s_sac09f8e73;
  m_allow_constants = true;
  m_allow_super_globals = true;
  m_allow_php_tag = false;
}
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 95 */
void c_Smarty_Security::t___construct(Variant v_smarty) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Security, Smarty_Security::__construct);
  INTERCEPT_INJECTION("Smarty_Security::__construct", array_createvi(1, toVPOD(v_smarty)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), v_smarty);
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 106 */
Variant c_Smarty_Security::t_istrustedphpfunction(CVarRef v_function_name, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Security, Smarty_Security::isTrustedPhpFunction);
  INTERCEPT_INJECTION("Smarty_Security::isTrustedPhpFunction", array_createvi(2, toVPOD(v_function_name), toVPOD(v_compiler)), r);
  if ((isset(m_php_functions) && (empty(m_php_functions) || LINE(108,(x_in_array(v_function_name, m_php_functions)))))) {
    {
      return true;
    }
  }
  else {
    {
      {
        LINE(111,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_compiler;
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(concat3(NAMSTR(s_ss9af86b69, "PHP function '"), toString(v_function_name), NAMSTR(s_ssa8295421, "' not allowed by security setting"))));
      }
      return false;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 123 */
Variant c_Smarty_Security::t_istrustedstaticclass(CVarRef v_class_name, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Security, Smarty_Security::isTrustedStaticClass);
  INTERCEPT_INJECTION("Smarty_Security::isTrustedStaticClass", array_createvi(2, toVPOD(v_class_name), toVPOD(v_compiler)), r);
  if ((isset(m_static_classes) && (empty(m_static_classes) || LINE(125,(x_in_array(v_class_name, m_static_classes)))))) {
    {
      return true;
    }
  }
  else {
    {
      {
        LINE(128,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_compiler;
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(concat3(NAMSTR(s_ssd571b18c, "access to static class '"), toString(v_class_name), NAMSTR(s_ssa8295421, "' not allowed by security setting"))));
      }
      return false;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 139 */
Variant c_Smarty_Security::t_istrustedmodifier(CVarRef v_modifier_name, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Security, Smarty_Security::isTrustedModifier);
  INTERCEPT_INJECTION("Smarty_Security::isTrustedModifier", array_createvi(2, toVPOD(v_modifier_name), toVPOD(v_compiler)), r);
  if ((isset(m_php_modifiers) && (empty(m_php_modifiers) || LINE(141,(x_in_array(v_modifier_name, m_php_modifiers)))))) {
    {
      return true;
    }
  }
  else {
    {
      {
        LINE(144,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_compiler;
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        (mcp0.ci->getMeth1Args())(mcp0, 1, VarNR(concat3(NAMSTR(s_ssf0958a2f, "modifier '"), toString(v_modifier_name), NAMSTR(s_ssa8295421, "' not allowed by security setting"))));
      }
      return false;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 155 */
Variant c_Smarty_Security::t_istrustedstream(CVarRef v_stream_name) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Security, Smarty_Security::isTrustedStream);
  INTERCEPT_INJECTION("Smarty_Security::isTrustedStream", array_createvi(1, toVPOD(v_stream_name)), r);
  if ((isset(m_streams) && (empty(m_streams) || LINE(157,(x_in_array(v_stream_name, m_streams)))))) {
    {
      return true;
    }
  }
  else {
    {
      {
        p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
        throw_exception(LINE(160,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss1267fb93, "stream '"), toString(v_stream_name), NAMSTR(s_ssa8295421, "' not allowed by security setting")))), tmp0))));
      }
      return false;
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 172 */
bool c_Smarty_Security::t_istrustedresourcedir(CVarRef v_filepath) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Security, Smarty_Security::isTrustedResourceDir);
  INTERCEPT_INJECTION("Smarty_Security::isTrustedResourceDir", array_createvi(1, toVPOD(v_filepath)), r);
  Variant v__rp;
  Variant v_curr_dir;
  Variant v__cd;

  {
    LINE(174,0);
    const Variant &tmp0((x_realpath(toString(v_filepath))));
    v__rp.assignVal(tmp0);
  }
  {
    bool tmp0;
    {
      tmp0 = (GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_isset(NAMSTR(s_ssfc1024fb, "template_dir"), s_class_name));
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(1);
          Variant map2;
          {
            LINE(176,0);
            const Array &tmp0((toArray(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssfc1024fb, "template_dir"), true))));
            map2 = (tmp0);
          }
          for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
            LOOP_COUNTER_CHECK(1);
            iter3.second(v_curr_dir);
            {
              {
                bool tmp0;
                {
                  LINE(177,0);
                  const Variant &tmp1((x_realpath(toString(v_curr_dir))));
                  bool tmp2 = (!same(v__cd.assignVal(tmp1), false));
                  if (tmp2) {
                    const String &tmp3((toString(v__rp)));
                    const String &tmp4((toString(v__cd)));
                    LINE(178,0);
                    int tmp5((x_strlen(toString(v__cd))));
                    int tmp6((x_strncmp(tmp3, tmp4, tmp5)));
                    tmp2 = (equal(tmp6, 0LL));
                  }
                  bool tmp7 = (tmp2);
                  if (tmp7) {
                    LINE(179,0);
                    int tmp8((x_strlen(toString(v__rp))));
                    int tmp9((x_strlen(toString(v__cd))));
                    bool tmp10 = (equal(tmp8, tmp9));
                    if (!tmp10) {
                      const String &tmp11((toString(v__rp)));
                      int tmp12((x_strlen(toString(v__cd))));
                      const Variant &tmp13((x_substr(tmp11, tmp12, toInt32(1LL))));
                      tmp10 = (equal(tmp13, getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
                    }
                    tmp7 = (tmp10);
                  }
                  tmp0 = (tmp7);
                }
                if (tmp0) {
                  {
                    return true;
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
      tmp0 = (!(LINE(184,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), false))).o_empty(NAMSTR(s_ssb63dd20c, "secure_dir"), s_class_name)));
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(4);
          Variant map5;
          {
            LINE(185,0);
            const Array &tmp0((toArray(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true).o_getPublic(NAMSTR(s_ssb63dd20c, "secure_dir"), true))));
            map5 = (tmp0);
          }
          for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
            LOOP_COUNTER_CHECK(4);
            iter6.second(v_curr_dir);
            {
              {
                bool tmp0;
                {
                  LINE(186,0);
                  const Variant &tmp1((x_realpath(toString(v_curr_dir))));
                  tmp0 = (!same(v__cd.assignVal(tmp1), false));
                }
                if (tmp0) {
                  {
                    if (equal(v__cd, v__rp)) {
                      {
                        return true;
                      }
                    }
                    else {
                      bool tmp0;
                      {
                        const String &tmp1((toString(v__rp)));
                        const String &tmp2((toString(v__cd)));
                        LINE(189,0);
                        int tmp3((x_strlen(toString(v__cd))));
                        int tmp4((x_strncmp(tmp1, tmp2, tmp3)));
                        bool tmp5 = (equal(tmp4, 0LL));
                        if (tmp5) {
                          LINE(190,0);
                          int tmp6((x_strlen(toString(v__rp))));
                          int tmp7((x_strlen(toString(v__cd))));
                          bool tmp8 = (equal(tmp6, tmp7));
                          if (!tmp8) {
                            const String &tmp9((toString(v__rp)));
                            int tmp10((x_strlen(toString(v__cd))));
                            const Variant &tmp11((x_substr(tmp9, tmp10, toInt32(1LL))));
                            tmp8 = (equal(tmp11, getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
                          }
                          tmp5 = (tmp8);
                        }
                        tmp0 = (tmp5);
                      }
                      if (tmp0) {
                        {
                          return true;
                        }
                      }
                    }
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
    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
    throw_exception(LINE(197,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss034aa236, "directory '"), toString(v__rp), NAMSTR(s_ssa8295421, "' not allowed by security setting")))), tmp0))));
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_security.php line 208 */
bool c_Smarty_Security::t_istrustedphpdir(CVarRef v_filepath) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Security, Smarty_Security::isTrustedPHPDir);
  INTERCEPT_INJECTION("Smarty_Security::isTrustedPHPDir", array_createvi(1, toVPOD(v_filepath)), r);
  Variant v__rp;
  Variant v_curr_dir;
  Variant v__cd;

  {
    LINE(210,0);
    const Variant &tmp0((x_realpath(toString(v_filepath))));
    v__rp.assignVal(tmp0);
  }
  if (!(empty(m_trusted_dir))) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = (toArray(m_trusted_dir));
        for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_curr_dir);
          {
            {
              bool tmp0;
              {
                LINE(213,0);
                const Variant &tmp1((x_realpath(toString(v_curr_dir))));
                tmp0 = (!same(v__cd.assignVal(tmp1), false));
              }
              if (tmp0) {
                {
                  if (equal(v__cd, v__rp)) {
                    {
                      return true;
                    }
                  }
                  else {
                    bool tmp0;
                    {
                      const String &tmp1((toString(v__rp)));
                      const String &tmp2((toString(v__cd)));
                      LINE(216,0);
                      int tmp3((x_strlen(toString(v__cd))));
                      int tmp4((x_strncmp(tmp1, tmp2, tmp3)));
                      bool tmp5 = (equal(tmp4, 0LL));
                      if (tmp5) {
                        const String &tmp6((toString(v__rp)));
                        LINE(217,0);
                        int tmp7((x_strlen(toString(v__cd))));
                        const Variant &tmp8((x_substr(tmp6, tmp7, toInt32(1LL))));
                        tmp5 = (equal(tmp8, getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
                      }
                      tmp0 = (tmp5);
                    }
                    if (tmp0) {
                      {
                        return true;
                      }
                    }
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
    p_SmartyException tmp0 = ((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (coo_SmartyException()));
    throw_exception(LINE(224,(((c_SmartyException*)tmp0.get()->create(VarNR(concat3(NAMSTR(s_ss034aa236, "directory '"), toString(v__rp), NAMSTR(s_ssa8295421, "' not allowed by security setting")))), tmp0))));
  }
  return false;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Security() {
  return NEWOBJ(c_Smarty_Security)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_security_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_security.php, pm_php$Smarty$libs$sysplugins$smarty_security_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_security) = true;
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
  (int64)&s_sva00000000,
  (int64)&s_svae11102f1,
  (int64)&true_varNR,
  (int64)&false_varNR,
  (int64)&s_svac4e01951,
  (int64)&q_Smarty___PHP_PASSTHRU,
  0x0000000600000047,
  (int64)&s_svac09f8e73,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x0CDC655BF5DA2ACALL,0,0,0,66,10,GET_PROPERTY_OFFSET(c_Smarty_Internal_Wrapper, m_smarty),&NAMSTR(s_ss675664bf, "smarty") },

  {0x058AC77E3C5D9764LL,5,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_secure_dir),&NAMSTR(s_ssb63dd20c, "secure_dir") },
  {0x78460912D7B41286LL,1,1,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_static_classes),&NAMSTR(s_ss372e85d3, "static_classes") },
  {0x44FF69CCEEC8B1C6LL,5,2,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_php_functions),&NAMSTR(s_ssabd1fc9d, "php_functions") },
  {0x2DA173615DCAED2ALL,1,3,0,4,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_allow_super_globals),&NAMSTR(s_ss9633978a, "allow_super_globals") },
  {0x2E6B5A905E5FB9EALL,0,4,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_allow_php_tag),&NAMSTR(s_ssaa7ea232, "allow_php_tag") },
  {0x2E97568CE6551D8FLL,-4,1,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_trusted_dir),&NAMSTR(s_ss134c1e88, "trusted_dir") },
  {0x515197EF70B124D2LL,-3,3,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_allow_constants),&NAMSTR(s_ssaa08781b, "allow_constants") },
  {0x3904D155B8011BD3LL,2,5,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_php_modifiers),&NAMSTR(s_ss6b2b87c8, "php_modifiers") },
  {0x6818D5A9AC3D06B6LL,-8,7,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_php_handling),&NAMSTR(s_ss721043c6, "php_handling") },
  {0x10519AD821A083D9LL,-3,8,0,68,10,GET_PROPERTY_OFFSET(c_Smarty_Security, m_streams),&NAMSTR(s_ss9f1ebee4, "streams") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Wrapper hash
  -1,-1,0,-1,-1,-1,-1,-1,
  // Smarty_Internal_Wrapper lists
  -1,
  -1,
  -1,
  // Smarty_Security hash
  -1,-1,-1,-1,0,-1,1,-1,-1,-1,3,-1,-1,-1,-1,5,-1,-1,6,7,-1,-1,8,-1,-1,9,-1,-1,-1,-1,-1,-1,
  // Smarty_Security lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Wrapper::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Security::os_prop_table = {
  31,8,-1,-1,-1,-1,33,0,
  cpt_hash_entries+11,0,cpt_table_entries+1,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
