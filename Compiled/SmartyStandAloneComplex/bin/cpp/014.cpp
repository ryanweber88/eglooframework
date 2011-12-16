
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_include.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_include.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_include_php.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_include_php.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_include.php line 16 */
const int64 q_Smarty_Internal_Compile_Include___CACHING_NOCACHE_CODE = 9999LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Include)
const InstanceOfInfo c_Smarty_Internal_Compile_Include::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x051F3D42D4C2BE03LL,1,"Smarty_Internal_Compile_Include",&cw_Smarty_Internal_Compile_Include},
};
const int c_Smarty_Internal_Compile_Include::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Include::ci_compile((void*)&c_Smarty_Internal_Compile_Include::i_compile, (void*)&c_Smarty_Internal_Compile_Include::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Include::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Include);
  }
  c_Smarty_Internal_Compile_Include *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Include*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Include::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Include::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Include);
  }
  c_Smarty_Internal_Compile_Include *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Include*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Include::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Include::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Include::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Include::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Include = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Include,
  c_Smarty_Internal_Compile_Include::s_call_info_table,c_Smarty_Internal_Compile_Include::s_call_info_index,
  c_Smarty_Internal_Compile_Include::s_instanceof_table,c_Smarty_Internal_Compile_Include::s_instanceof_index,
  &c_Smarty_Internal_Compile_Include::s_class_name,
  &c_Smarty_Internal_Compile_Include::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Include::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sac09f8e73;
  m_shorttag_order = s_sac09f8e73;
  m_option_flags = s_sa1b8fdfeb;
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_include.php line 32 */
Variant c_Smarty_Internal_Compile_Include::t_compile(CVarRef v_args, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Include, Smarty_Internal_Compile_Include::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Include::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Variant v__attr;
  Variant v_include_file;
  Variant v_has_compiled_template;
  Variant v__assign;
  Variant v__parent_scope;
  Variant v__caching;
  Variant v__cache_lifetime;
  Variant v__cache_id;
  Variant v__compile_id;
  Variant v_tmp;
  Variant v_tpl;
  Variant v_compiled_tpl;
  Variant v_result;
  Variant v_saved_has_nocache_code;
  Variant v_saved_nocache_hash;
  Variant v__smarty_tpl;
  Variant v__output;
  Variant v__key;
  Variant v__value;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(36,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(38,0);
    const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key)));
    v_include_file.assignVal(tmp0);
  }
  v_has_compiled_template = false;
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true));
    }
    if (tmp0) {
      {
        {
          LINE(43,0);
          const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          v__assign.assignVal(tmp0);
        }
      }
    }
  }
  v__parent_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL));
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ss4d6447e5, "scope"), true));
    }
    if (tmp0) {
      {
        {
          LINE(48,0);
          const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key))));
          const String &tmp1((x_trim(tmp0, NAMSTR(s_ss643ce2bc, "'\""))));
          v__attr.set(NAMSTR(s_ss4d6447e5, "scope"), (VarNR(tmp1)), true);
        }
        {
          bool tmp0;
          {
            LINE(49,0);
            const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
            tmp0 = (equal(tmp1, NAMSTR(s_ssfb10fd8c, "parent")));
          }
          if (tmp0) {
            {
              v__parent_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_PARENT));
            }
          }
          else {
            bool tmp0;
            {
              LINE(51,0);
              const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
              tmp0 = (equal(tmp1, NAMSTR(s_ss1e45a0db, "root")));
            }
            if (tmp0) {
              {
                v__parent_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_ROOT));
              }
            }
            else {
              bool tmp0;
              {
                LINE(53,0);
                const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss4d6447e5, "scope"), AccessFlags::Error_Key)));
                tmp0 = (equal(tmp1, NAMSTR(s_ssb61b5296, "global")));
              }
              if (tmp0) {
                {
                  v__parent_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_GLOBAL));
                }
              }
            }
          }
        }
      }
    }
  }
  v__caching = NAMSTR(s_ssf927ff2c, "null");
  if ((LINE(58,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)))) || toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)))) {
    {
      v__caching = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_OFF));
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(62,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
      if (tmp1) {
        bool tmp2((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))));
        tmp1 = (!(tmp2));
      }
      bool tmp3 = (tmp1);
      if (tmp3) {
        bool tmp4((toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true))));
        tmp3 = (!(tmp4));
      }
      tmp0 = (tmp3);
    }
    if (tmp0) {
      {
        v__caching = 9999LL /* self::CACHING_NOCACHE_CODE */;
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ss41eb5ea5, "cache_lifetime"), true));
    }
    if (tmp0) {
      {
        {
          LINE(71,0);
          const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), AccessFlags::Error_Key)));
          v__cache_lifetime.assignVal(tmp0);
        }
        {
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
          tmp_ref.unset();
        }
        v__caching = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT));
      }
    }
    else {
      {
        v__cache_lifetime = NAMSTR(s_ssf927ff2c, "null");
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ssb26f3d0e, "cache_id"), true));
    }
    if (tmp0) {
      {
        {
          LINE(78,0);
          const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssb26f3d0e, "cache_id"), AccessFlags::Error_Key)));
          v__cache_id.assignVal(tmp0);
        }
        {
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
          tmp_ref.unset();
        }
        v__caching = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT));
      }
    }
    else {
      {
        v__cache_id = NAMSTR(s_ss436dc195, "$_smarty_tpl->cache_id");
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ss962fc398, "compile_id"), true));
    }
    if (tmp0) {
      {
        {
          LINE(85,0);
          const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss962fc398, "compile_id"), AccessFlags::Error_Key)));
          v__compile_id.assignVal(tmp0);
        }
      }
    }
    else {
      {
        v__compile_id = NAMSTR(s_ss9e9a667b, "$_smarty_tpl->compile_id");
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(89,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ssafeed509, "caching"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        v__caching = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(92,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true);
          tmp_ref.unset();
        }
        v__caching = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_OFF));
      }
    }
  }
  {
    bool tmp0;
    {
      bool tmp1 = (LINE(98,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss594c3572, "merge_compiled_includes"), true)))));
      if (!tmp1) {
        const Variant &tmp2((v__attr.rvalAt(NAMSTR(s_sse3779709, "inline"), AccessFlags::Error_Key)));
        tmp1 = (same(tmp2, true));
      }
      bool tmp3 = (tmp1);
      if (tmp3) {
        bool tmp4(((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)) && (toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)) || toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))));
        tmp3 = (!(tmp4));
      }
      tmp0 = ((tmp3 && !equal(v__caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_LIFETIME_CURRENT)))));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(100,0);
            bool tmp1((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss6e5769be, "has_variable_string"), true))));
            bool tmp2 = (!(tmp1));
            if (tmp2) {
              const Variant &tmp3((x_substr_count(toString(v_include_file), NAMSTR(s_ss7e5fc106, "\""))));
              bool tmp4 = (equal(tmp3, 2LL));
              if (!tmp4) {
                const Variant &tmp5((x_substr_count(toString(v_include_file), NAMSTR(s_sse07b87c4, "'"))));
                tmp4 = (equal(tmp5, 2LL));
              }
              tmp2 = (tmp4);
            }
            bool tmp6 = (tmp2);
            if (tmp6) {
              const Variant &tmp7((x_substr_count(toString(v_include_file), NAMSTR(s_ss6e782e41, "("))));
              tmp6 = (equal(tmp7, 0LL));
            }
            tmp0 = (tmp6);
          }
          if (tmp0) {
            {
              setNull(v_tmp);
              LINE(102,(f_eval(concat3(NAMSTR(s_ss55b63522, "$tmp = "), toString(v_include_file), NAMSTR(s_ss0286c0cc, ";")))));
              {
                bool tmp0;
                {
                  LINE(103,0);
                  const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss11a5bbab, "template_resource"), true)));
                  tmp0 = (!equal(tmp1, v_tmp));
                }
                if (tmp0) {
                  {
                    {
                      Object obj1(create_object_only((LINE(104,(toString(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssb4c1cabc, "template_class"), true)))))));
                      MethodCallPackage mcp0;
                      mcp0.construct(obj1);
                      const CallInfo *cit0 = mcp0.ci;
                      const Variant &tmp2((v_tmp));
                      const Variant tmp3 = v_tmp;
                      const Variant &tmp4 = cit0->isRef(0) ? tmp2 : tmp3;
                      const Variant &tmp5((v_compiler.o_argval(cit0->isRef(1), NAMSTR(s_ss675664bf, "smarty"), true, s_class_name)));
                      const Variant &tmp6((v_compiler.o_argval(cit0->isRef(2), NAMSTR(s_ss86160f07, "template"), true, s_class_name)));
                      const Variant &tmp7((v_compiler.o_argval(cit0->isRef(3), NAMSTR(s_ss86160f07, "template"), true, s_class_name).o_argval(cit0->isRef(3), NAMSTR(s_ssb26f3d0e, "cache_id"), true, s_class_name)));
                      const Variant &tmp8((v_compiler.o_argval(cit0->isRef(4), NAMSTR(s_ss86160f07, "template"), true, s_class_name).o_argval(cit0->isRef(4), NAMSTR(s_ss962fc398, "compile_id"), true, s_class_name)));
                      (cit0->getMeth5Args())(mcp0, 5, tmp4, tmp5, tmp6, tmp7, tmp8);
                      const Object &tmp9((id(obj1)));
                      v_tpl = tmp9;
                    }
                    v_tpl.o_setPublic(NAMSTR(s_ss8f8ee1e8, "write_compiled_code"), false);
                    {
                      bool tmp0;
                      {
                        tmp0 = (LINE(107,(toBoolean(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
                      }
                      if (tmp0) {
                        {
                          v_tpl.o_setPublic(NAMSTR(s_ssafeed509, "caching"), 9999LL /* self::CACHING_NOCACHE_CODE */);
                        }
                      }
                    }
                    v_tpl.o_setPublic(NAMSTR(s_ss614f620c, "mustCompile"), true);
                    {
                      bool tmp0;
                      {
                        bool tmp1 = (LINE(115,(toBoolean(v_tpl.o_getPublic(NAMSTR(s_ss6144ba4b, "resource_object"), true).o_getPublic(NAMSTR(s_ssa0f13ad5, "usesCompiler"), true)))));
                        if (tmp1) {
                          MethodCallPackage mcp2;
                          CVarRef obj2 = v_tpl;
                          mcp2.methodCall((obj2), NAMSTR(s_ss21a0ded9, "isExisting"), 0x415CFCA4A487DB29LL);
                          const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
                          tmp1 = (toBoolean((mcp2.ci->getMeth0Args())(mcp2, 0)));
                        }
                        tmp0 = (tmp1);
                      }
                      if (tmp0) {
                        {
                          {
                            LINE(117,0);
                            MethodCallPackage mcp0;
                            CVarRef obj0 = v_tpl;
                            mcp0.methodCall((obj0), NAMSTR(s_ss1225174d, "getCompiledTemplate"), 0x68BCD7B317388BF6LL);
                            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                            Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
                            v_compiled_tpl.assignVal(tmp1);
                          }
                          {
                            LINE(119,0);
                            const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
                            const Variant &tmp1((v_tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
                            const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
                            v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).set(NAMSTR(s_ss52403931, "function"), (tmp2), true);
                            tmp_ref.unset();
                          }
                          {
                            LINE(121,0);
                            const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
                            x_preg_match_all(concat3(NAMSTR(s_ssfb2c0f92, "/(<\\\?php \\/\\*%%SmartyHeaderCode:"), tmp0, NAMSTR(s_ss1a24d3a3, "%%\\*\\/(.+\?)\\/\\*\\/%%SmartyHeaderCode%%\\*\\/\\\?>\n)/s")), toString(v_compiled_tpl), ref(v_result));
                          }
                          {
                            LINE(122,0);
                            const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true)));
                            v_saved_has_nocache_code.assignVal(tmp0);
                          }
                          {
                            LINE(123,0);
                            const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
                            v_saved_nocache_hash.assignVal(tmp0);
                          }
                          {
                            LINE(124,0);
                            const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
                            v__smarty_tpl.assignVal(tmp0);
                          }
                          {
                            LINE(125,0);
                            const String &tmp0((toString(v_result.rvalRef(2LL, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error))));
                            f_eval(tmp0);
                            tmp_ref.unset();
                          }
                          {
                            Variant tmp0((v_saved_nocache_hash));
                            LINE(126,(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name))).set(NAMSTR(s_ss73233481, "nocache_hash"), (tmp0), true);
                            tmp_ref.unset();
                          }
                          {
                            LINE(127,(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), v_saved_has_nocache_code);
                            tmp_ref.unset();
                          }
                          {
                            LINE(129,0);
                            const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
                            const Variant &tmp1((x_preg_replace(VarNR(concat3(NAMSTR(s_ssfb2c0f92, "/(<\\\?php \\/\\*%%SmartyHeaderCode:"), tmp0, NAMSTR(s_ss1a24d3a3, "%%\\*\\/(.+\?)\\/\\*\\/%%SmartyHeaderCode%%\\*\\/\\\?>\n)/s"))), NAMVAR(s_svs00000000, ""), v_compiled_tpl)));
                            v_compiled_tpl.assignVal(tmp1);
                          }
                          if (LINE(130,(toBoolean(v_tpl.o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true))))) {
                            {
                              {
                                LINE(132,0);
                                const String &tmp0((toString(v_tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
                                const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
                                const Variant &tmp2((x_preg_replace(VarNR(concat3(NAMSTR(s_ssb9e13cd6, "/"), tmp0, NAMSTR(s_ssb9e13cd6, "/"))), tmp1, v_compiled_tpl)));
                                v_compiled_tpl.assignVal(tmp2);
                              }
                              {
                                LINE(133,(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true);
                                tmp_ref.unset();
                              }
                            }
                          }
                          v_has_compiled_template = true;
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
  v__output = NAMSTR(s_ss271d3c8a, "<\?php ");
  if ((!equal(v__caching, NAMSTR(s_ssf927ff2c, "null")) && !equal(v__caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_OFF))))) {
    {
      concat_assign(v__output, StringBuffer().addWithTaint("$sha = sha1(", 12).addWithTaint(toString(v_include_file)).addWithTaint(" . ", 3).addWithTaint(toString(v__cache_id)).addWithTaint(" . ", 3).addWithTaint(toString(v__compile_id)).addWithTaint(");\nif (isset($_smarty_tpl->smarty->template_objects[$sha])) {\n", 62).addWithTaint("$_template = $_smarty_tpl->smarty->template_objects[$sha]; $_template->parent = $_smarty_tpl; $_template->caching = ", 116).addWithTaint(toString(v__caching)).addWithTaint("; $_template->cache_lifetime =  ", 32).addWithTaint(toString(v__cache_lifetime)).addWithTaint(";\n} else {\n", 11).detachWithTaint());
    }
  }
  {
    StringBuffer tmp0_buf;
    tmp0_buf.appendWithTaint("$_template = new ", 17);
    tmp0_buf.appendWithTaint(LINE(149,(toString(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssb4c1cabc, "template_class"), true)))));
    tmp0_buf.appendWithTaint("(", 1);
    tmp0_buf.appendWithTaint(toString(v_include_file));
    tmp0_buf.appendWithTaint(", $_smarty_tpl->smarty, $_smarty_tpl, ", 38);
    tmp0_buf.appendWithTaint(toString(v__cache_id));
    tmp0_buf.appendWithTaint(", ", 2);
    tmp0_buf.appendWithTaint(toString(v__compile_id));
    tmp0_buf.appendWithTaint(", ", 2);
    tmp0_buf.appendWithTaint(toString(v__caching));
    tmp0_buf.appendWithTaint(", ", 2);
    tmp0_buf.appendWithTaint(toString(v__cache_lifetime));
    tmp0_buf.appendWithTaint(");\n", 3);
    CStrRef tmp0(tmp0_buf.detachWithTaint());
    concat_assign(v__output, tmp0);
  }
  if ((!equal(v__caching, NAMSTR(s_ssf927ff2c, "null")) && !equal(v__caching, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___CACHING_OFF))))) {
    {
      concat_assign(v__output, NAMSTR(s_ssef5141ed, "}\n"));
    }
  }
  {
    v__attr.weakRemove(NAMSTR(s_ss8ce7db5b, "file"), true);
    v__attr.weakRemove(NAMSTR(s_ssba4e7712, "assign"), true);
    v__attr.weakRemove(NAMSTR(s_ssb26f3d0e, "cache_id"), true);
    v__attr.weakRemove(NAMSTR(s_ss962fc398, "compile_id"), true);
    v__attr.weakRemove(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), true);
    v__attr.weakRemove(NAMSTR(s_ss8b74ea02, "nocache"), true);
    v__attr.weakRemove(NAMSTR(s_ssafeed509, "caching"), true);
    v__attr.weakRemove(NAMSTR(s_ss4d6447e5, "scope"), true);
    v__attr.weakRemove(NAMSTR(s_sse3779709, "inline"), true);
  }
  if (!(empty(v__attr))) {
    {
      if (equal(v__parent_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)))) {
        {
          {
            LOOP_COUNTER(1);
            {
              StringBuffer tmp_sbuf_v__output(512);
              for (ArrayIter iter3 = v__attr.begin(s_class_name, true); !iter3.end(); ++iter3) {
                LOOP_COUNTER_CHECK(1);
                iter3.second(v__value);
                v__key.assignVal(iter3.first());
                {
                  tmp_sbuf_v__output.addWithTaint("$_template->assign('", 20).addWithTaint(toString(v__key)).addWithTaint("',", 2).addWithTaint(toString(v__value)).addWithTaint(");", 2);
                }
              }
              concat_assign(v__output, tmp_sbuf_v__output.detachWithTaint());
            }
          }
        }
      }
      else {
        {
          {
            LINE(163,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
            mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
            (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs4b23e438, "variable passing not allowed in parent/global scope"), tmp1);
          }
        }
      }
    }
  }
  if (isset(v__assign)) {
    {
      concat_assign(v__output, concat3(NAMSTR(s_ss15392b4e, "$_smarty_tpl->assign("), toString(v__assign), NAMSTR(s_ss8bf020e3, ",$_template->getRenderedTemplate());\?>")));
    }
  }
  else {
    {
      if (toBoolean(v_has_compiled_template)) {
        {
          {
            LINE(171,0);
            const String &tmp0((toString(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key))));
            concat_assign(v__output, concat3(NAMSTR(s_ss2ca07839, "$_template->properties['nocache_hash']  = '"), tmp0, NAMSTR(s_ss036247df, "';\n")));
          }
          concat_assign(v__output, concat5(NAMSTR(s_ss112e9e59, "$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;\?>\n"), toString(v_compiled_tpl), NAMSTR(s_ss47cd3598, "<\?php $_smarty_tpl->updateParentVariables("), toString(v__parent_scope), NAMSTR(s_ss13b21925, ");\?>\n")));
          {
            LINE(175,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = v_tpl;
            mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
            concat_assign(v__output, concat3(NAMSTR(s_ssde17b18b, "<\?php /*  End of included template \""), tmp1, NAMSTR(s_ss79531228, "\" */ \?>\n")));
          }
          concat_assign(v__output, NAMSTR(s_ss960c422b, "<\?php $_smarty_tpl = array_pop($_tpl_stack);\?>"));
        }
      }
      else {
        {
          concat_assign(v__output, NAMSTR(s_ss3870e338, " echo $_template->getRenderedTemplate(); $_template->rendered_content = null;\?>"));
          if (!equal(v__parent_scope, ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)))) {
            {
              concat_assign(v__output, concat3(NAMSTR(s_ss4f2c8e23, "<\?php $_template->updateParentVariables("), toString(v__parent_scope), NAMSTR(s_ss2c931015, ");\?>")));
            }
          }
        }
      }
    }
  }
  concat_assign(v__output, NAMSTR(s_ss627cf519, "<\?php unset($_template);\?>"));
  return v__output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Include() {
  return NEWOBJ(c_Smarty_Internal_Compile_Include)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_include.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_include) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_include_php.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Include_Php)
const InstanceOfInfo c_Smarty_Internal_Compile_Include_Php::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x3232CAF6A801CED2LL,1,"Smarty_Internal_Compile_Include_Php",&cw_Smarty_Internal_Compile_Include_Php},
};
const int c_Smarty_Internal_Compile_Include_Php::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Include_Php::ci_compile((void*)&c_Smarty_Internal_Compile_Include_Php::i_compile, (void*)&c_Smarty_Internal_Compile_Include_Php::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Include_Php::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Include_Php);
  }
  c_Smarty_Internal_Compile_Include_Php *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Include_Php*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Include_Php::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Include_Php::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Include_Php);
  }
  c_Smarty_Internal_Compile_Include_Php *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Include_Php*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Include_Php::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Include_Php::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Include_Php::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Include_Php::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Include_Php = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Include_Php,
  c_Smarty_Internal_Compile_Include_Php::s_call_info_table,c_Smarty_Internal_Compile_Include_Php::s_call_info_index,
  c_Smarty_Internal_Compile_Include_Php::s_instanceof_table,c_Smarty_Internal_Compile_Include_Php::s_instanceof_index,
  &c_Smarty_Internal_Compile_Include_Php::s_class_name,
  &c_Smarty_Internal_Compile_Include_Php::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Include_Php::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sac09f8e73;
  m_shorttag_order = s_sac09f8e73;
  m_optional_attributes = s_sa0bbc6a35;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_include_php.php line 29 */
Variant c_Smarty_Internal_Compile_Include_Php::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Include_Php, Smarty_Internal_Compile_Include_Php::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Include_Php::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Variant v__attr;
  Variant v__smarty_tpl;
  Variant v__filepath;
  Variant v__file;
  Variant v__dir;
  Variant v__script_dir;
  Variant v__assign;
  Variant v__once;

  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(31,0);
      bool tmp1((toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssaa7ea232, "allow_php_tag"), true))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        throw_exception(LINE(32,(((checkClassExistsThrow(NAMSTR(s_sscc70645f, "SmartyException"), &g->CDEC(smartyexception))), (p_SmartyException(((c_SmartyException*)coo_SmartyException())->create(NAMVAR(s_svs4fa64ecf, "{include_php} is deprecated, set allow_php_tag = true to enable"))))))));
      }
    }
  }
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(36,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(40,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
    v__smarty_tpl.assignVal(tmp0);
  }
  v__filepath = false;
  {
    LINE(42,0);
    const String &tmp0((toString(v__attr.rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key))));
    f_eval(concat3(NAMSTR(s_ss0ac8ea35, "$_file = "), tmp0, NAMSTR(s_ss0286c0cc, ";")));
  }
  {
    bool tmp0;
    {
      tmp0 = ((!(LINE(43,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name)) && x_file_exists(toString(v__file))));
    }
    if (tmp0) {
      {
        v__filepath.assignVal(v__file);
      }
    }
    else {
      {
        {
          bool tmp0;
          {
            tmp0 = (LINE(46,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name));
          }
          if (tmp0) {
            {
              {
                LINE(47,0);
                const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true).o_getPublic(NAMSTR(s_ss134c1e88, "trusted_dir"), true)));
                v__dir.assignVal(tmp0);
              }
            }
          }
          else {
            {
              {
                LINE(49,0);
                const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss134c1e88, "trusted_dir"), true)));
                v__dir.assignVal(tmp0);
              }
            }
          }
        }
        if (!(empty(v__dir))) {
          {
            {
              LOOP_COUNTER(1);
              Variant map2 = (toArray(v__dir));
              for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
                LOOP_COUNTER_CHECK(1);
                iter3.second(v__script_dir);
                {
                  {
                    bool tmp0;
                    {
                      LINE(53,0);
                      const Variant &tmp1((x_substr(toString(v__script_dir), toInt32(-1LL))));
                      const Variant &tmp2((x_strpos(NAMSTR(s_ss8ed589f3, "/\\"), tmp1)));
                      tmp0 = (same(tmp2, false));
                    }
                    if (tmp0) {
                      {
                        concat_assign(v__script_dir, toString(getDynamicConstant(g->k_DS, NAMSTR(s_ssb90e6258, "DS"))));
                      }
                    }
                  }
                  if (LINE(56,(x_file_exists(concat(toString(v__script_dir), toString(v__file)))))) {
                    {
                      v__filepath = concat(toString(v__script_dir), toString(v__file));
                      break;
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
  if (equal(v__filepath, false)) {
    {
      {
        LINE(64,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        const String &tmp1((toString(v__file)));
        const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
        (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss8143963f, "{include_php} file '"), tmp1, NAMSTR(s_ss90e388bb, "' is not readable"))), tmp2);
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (LINE(67,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), false).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false))).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name));
    }
    if (tmp0) {
      {
        {
          LINE(68,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ssd765db50, "isTrustedPHPDir"), 0x219B369F1B21639DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, v__filepath);
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true));
    }
    if (tmp0) {
      {
        {
          LINE(73,0);
          const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
          v__assign.assignVal(tmp0);
        }
      }
    }
  }
  v__once = NAMSTR(s_ss7dfc1fbe, "_once");
  {
    bool tmp0;
    {
      tmp0 = (isset(v__attr, NAMSTR(s_ss5256b40d, "once"), true));
    }
    if (tmp0) {
      {
        {
          bool tmp0;
          {
            LINE(77,0);
            const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss5256b40d, "once"), AccessFlags::Error_Key)));
            tmp0 = (equal(tmp1, NAMSTR(s_ss8c98c156, "false")));
          }
          if (tmp0) {
            {
              v__once = NAMSTR(s_ss00000000, "");
            }
          }
        }
      }
    }
  }
  if (isset(v__assign)) {
    {
      return StringBuffer().addWithTaint("<\?php ob_start(); include", 25).addWithTaint(toString(v__once)).addWithTaint(" ('", 3).addWithTaint(toString(v__filepath)).addWithTaint("'); $_smarty_tpl->assign(", 25).addWithTaint(toString(v__assign)).addWithTaint(",ob_get_contents()); ob_end_clean();\?>", 38).detachWithTaint();
    }
  }
  else {
    {
      return concat5(NAMSTR(s_ss20dff2b5, "<\?php include"), toString(v__once), NAMSTR(s_ss5f2a8d3e, " ('"), toString(v__filepath), NAMSTR(s_ssaac4cf43, "');\?>\n"));
    }
  }
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Include_Php() {
  return NEWOBJ(c_Smarty_Internal_Compile_Include_Php)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_include_php.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_include_php_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_include_php) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_svi606599b5, 9999LL),
  (int64)&s_sva1b8fdfeb,
  (int64)&s_svac09f8e73,
  (int64)&s_svad23e7614,
  (int64)&s_sva0bbc6a35,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x63D6E25680D3DAD3LL,0,0,0,100,4,0,&NAMSTR(s_ss80d3dad3, "CACHING_NOCACHE_CODE") },

  {0x10405E554CDFCEB9LL,3,1,0,84,10,0,&NAMSTR(s_ssc9f0d92c, "option_flags") },
  {0x54E8208FE47CFF0ELL,1,2,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,-2,2,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,3,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

  {0x54E8208FE47CFF0ELL,1,2,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,1,2,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,4,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Include hash
  -1,-1,-1,-1,0,-1,-1,-1,
  -1,1,-1,-1,-1,-1,2,-1,
  // Smarty_Internal_Compile_Include lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Include_Php hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Include_Php lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Include::os_prop_table = {
  7,2,-1,-1,7,0,9,0,
  cpt_hash_entries+8,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Include_Php::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+19,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+5,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
