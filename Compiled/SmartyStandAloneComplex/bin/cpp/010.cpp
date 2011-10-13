
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_block.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_block.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_break.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_break.fws.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_call.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_call.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compilebase.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_parsetree.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 154 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Blockclose)
const InstanceOfInfo c_Smarty_Internal_Compile_Blockclose::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x1C4881F63ACF32CDLL,1,"Smarty_Internal_Compile_Blockclose",&cw_Smarty_Internal_Compile_Blockclose},
};
const int c_Smarty_Internal_Compile_Blockclose::s_instanceof_index[] = {
  3,
  0,1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Blockclose::ci_compile((void*)&c_Smarty_Internal_Compile_Blockclose::i_compile, (void*)&c_Smarty_Internal_Compile_Blockclose::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Blockclose::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Blockclose);
  }
  c_Smarty_Internal_Compile_Blockclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Blockclose*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Blockclose::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Blockclose::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Blockclose);
  }
  c_Smarty_Internal_Compile_Blockclose *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Blockclose*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Blockclose::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Blockclose::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Blockclose::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Blockclose::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Blockclose = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Blockclose,
  c_Smarty_Internal_Compile_Blockclose::s_call_info_table,c_Smarty_Internal_Compile_Blockclose::s_call_info_index,
  c_Smarty_Internal_Compile_Blockclose::s_instanceof_table,c_Smarty_Internal_Compile_Blockclose::s_instanceof_index,
  &c_Smarty_Internal_Compile_Blockclose::s_class_name,
  &c_Smarty_Internal_CompileBase::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 162 */
Variant c_Smarty_Internal_Compile_Blockclose::t_compile(CVarRef v_args, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Blockclose, Smarty_Internal_Compile_Blockclose::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Blockclose::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v_saved_data;
  String v__name;
  Variant v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(165,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), true);
    tmp_ref.unset();
  }
  {
    LINE(168,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    LINE(169,0);
    const Variant &tmp0((t__close_tag(s_sva1af3711c)));
    v_saved_data.assignVal(tmp0);
  }
  {
    LINE(170,0);
    const String &tmp0((toString(v_saved_data.rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))));
    const String &tmp1((x_trim(tmp0, NAMSTR(s_ss26f61c42, "\"'"))));
    v__name = tmp1;
    tmp_ref.unset();
  }
  {
    bool tmp0;
    {
      bool tmp1 = (isset(LINE(171,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), false))), v__name));
      if (tmp1) {
        tmp1 = (!(isset(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), false).rvalRef(v__name, tmp_ref), NAMSTR(s_ss9094af88, "compiled"), true)));
      }
      tmp0 = (tmp1);
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(172,0);
          const Variant &tmp0((c_Smarty_Internal_Compile_Block::t_compilechildblock(v_compiler, v__name)));
          v__output.assignVal(tmp0);
        }
      }
    }
    else {
      {
        {
          LINE(174,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
          v__output.assignVal(tmp1);
        }
        {
          LINE(175,(unsetLval(v_compiler.o_unsetLval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_unsetLval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name), v__name))).weakRemove(NAMSTR(s_ss9094af88, "compiled"), true);
          tmp_ref.unset();
        }
      }
    }
  }
  {
    LINE(178,0);
    const Variant &tmp0((v_saved_data.rvalAt(1LL, AccessFlags::Error)));
    v_compiler.o_lval(NAMSTR(s_ss1d4f2d02, "parser"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8ce16784, "current_buffer"), tmp0);
    tmp_ref.unset();
  }
  {
    LINE(179,0);
    const Variant &tmp0((v_saved_data.rvalAt(2LL, AccessFlags::Error)));
    v_compiler.o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), tmp0);
  }
  {
    LINE(180,0);
    const Variant &tmp0((v_saved_data.rvalAt(3LL, AccessFlags::Error)));
    v_compiler.o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss594c3572, "merge_compiled_includes"), tmp0);
    tmp_ref.unset();
  }
  {
    LINE(181,0);
    const Variant &tmp0((v_saved_data.rvalAt(4LL, AccessFlags::Error)));
    v_compiler.o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss92d1fe67, "inheritance"), tmp0);
    tmp_ref.unset();
  }
  v_compiler.o_setPublic(NAMSTR(s_ss60f44ecc, "suppressNocacheProcessing"), true);
  return v__output;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Block)
const InstanceOfInfo c_Smarty_Internal_Compile_Block::s_instanceof_table[] = {
  {0x6B8914AC7C1508D4LL,0,"Smarty_Internal_Compile_Block",&cw_Smarty_Internal_Compile_Block},
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
};
const int c_Smarty_Internal_Compile_Block::s_instanceof_index[] = {
  3,
  0,-1,-1,-1,
};
CallInfo c_Smarty_Internal_Compile_Block::ci_compilechildblock((void*)&c_Smarty_Internal_Compile_Block::i_compilechildblock, (void*)&c_Smarty_Internal_Compile_Block::ifa_compilechildblock, 2, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Compile_Block::ci_compile((void*)&c_Smarty_Internal_Compile_Block::i_compile, (void*)&c_Smarty_Internal_Compile_Block::ifa_compile, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Compile_Block::ci_saveblockdata((void*)&c_Smarty_Internal_Compile_Block::i_saveblockdata, (void*)&c_Smarty_Internal_Compile_Block::ifa_saveblockdata, 4, 12, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Block::i_compilechildblock(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Compile_Block::compileChildBlock", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(count <= 1 ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Compile_Block::t_compilechildblock(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Block::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Block);
  }
  c_Smarty_Internal_Compile_Block *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Block*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Block::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Block::i_saveblockdata(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Compile_Block::saveBlockData", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg3(UNLIKELY(count <= 3) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Compile_Block::t_saveblockdata(arg0, arg1, arg2, arg3), null);
  }
}
Variant c_Smarty_Internal_Compile_Block::ifa_compilechildblock(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Compile_Block::compileChildBlock", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(count <= 1 ? null_variant : a1);
  return (c_Smarty_Internal_Compile_Block::t_compilechildblock(arg0, arg1));
}
Variant c_Smarty_Internal_Compile_Block::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Block);
  }
  c_Smarty_Internal_Compile_Block *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Block*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Block::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
Variant c_Smarty_Internal_Compile_Block::ifa_saveblockdata(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 4)) throw_missing_arguments("Smarty_Internal_Compile_Block::saveBlockData", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  CVarRef arg3(UNLIKELY(count <= 3) ? null_variant : a3);
  return (c_Smarty_Internal_Compile_Block::t_saveblockdata(arg0, arg1, arg2, arg3), null);
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Block::s_call_info_table[] = {
  { 0x38EBA36D30FBDF31LL, 1, 17, "compileChildBlock", &c_Smarty_Internal_Compile_Block::ci_compilechildblock },
  { 0x743A738E6921C9DCLL, 1, 13, "saveBlockData", &c_Smarty_Internal_Compile_Block::ci_saveblockdata },
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Block::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Block::s_call_info_index[] = {
  7,
  -1,0,-1,-1,1,-1,-1,2,

};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Block = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Block,
  c_Smarty_Internal_Compile_Block::s_call_info_table,c_Smarty_Internal_Compile_Block::s_call_info_index,
  c_Smarty_Internal_Compile_Block::s_instanceof_table,c_Smarty_Internal_Compile_Block::s_instanceof_index,
  &c_Smarty_Internal_Compile_Block::s_class_name,
  &c_Smarty_Internal_Compile_Block::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Block::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa6b3e86d0;
  m_shorttag_order = s_sa6b3e86d0;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 26 */
bool c_Smarty_Internal_Compile_Block::t_compile(CVarRef v_args, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Block, Smarty_Internal_Compile_Block::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Block::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Array v_save;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(30,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    Array tmp1((v__attr));
    LINE(31,0);
    const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true)));
    const Variant &tmp3((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)));
    const Variant &tmp4((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss594c3572, "merge_compiled_includes"), true)));
    const Variant &tmp5((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss92d1fe67, "inheritance"), true)));
    ArrayInit tmp0(array_createvi(5, toVPOD(VarNR(tmp1)), toVPOD(tmp2), toVPOD(tmp3), toVPOD(tmp4), toVPOD(tmp5)));
    const Array &tmp6((Array(tmp0)));
    v_save = tmp6;
  }
  LINE(32,(t__open_tag(NAMVAR(s_svs87556ef3, "block"), VarNR(v_save))));
  {
    bool tmp0;
    {
      LINE(33,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (equal(tmp1, true));
    }
    if (tmp0) {
      {
        v_compiler.o_setPublic(NAMSTR(s_ss8b74ea02, "nocache"), true);
      }
    }
  }
  {
    LINE(37,(v_compiler.o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss92d1fe67, "inheritance"), true);
    tmp_ref.unset();
  }
  {
    LINE(39,(GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss675664bf, "smarty"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss594c3572, "merge_compiled_includes"), true);
    tmp_ref.unset();
  }
  {
    p__smarty_template_buffer tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss172b5002, "_smarty_template_buffer"), &g->CDEC(_smarty_template_buffer))), (coo__smarty_template_buffer()));
    LINE(41,0);
    const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true)));
    ((c__smarty_template_buffer*)tmp0.get()->create(tmp1));
    v_compiler.o_lval(NAMSTR(s_ss1d4f2d02, "parser"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss8ce16784, "current_buffer"), tmp0);
    tmp_ref.unset();
  }
  v_compiler.o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), false);
  return true;
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 47 */
void c_Smarty_Internal_Compile_Block::t_saveblockdata(Variant v_block_content, CVarRef v_block_tag, Variant v_template, CVarRef v_filepath) {
  STATIC_METHOD_INJECTION_NOMEM(Smarty_Internal_Compile_Block, Smarty_Internal_Compile_Block::saveBlockData);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Block::saveBlockData", array_createvi(4, toVPOD(v_block_content), toVPOD(v_block_tag), toVPOD(v_template), toVPOD(v_filepath)), );
  String v__rdl;
  String v__ldl;
  Variant v__match;
  String v_error_text;
  String v__name;

  Variant tmp_ref;
  {
    LINE(49,0);
    const String &tmp0((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0)));
    v__rdl = tmp1;
  }
  {
    LINE(50,0);
    const String &tmp0((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0)));
    v__ldl = tmp1;
  }
  {
    bool tmp0;
    {
      LINE(52,0);
      const Variant &tmp1((x_preg_match(concat5(NAMSTR(s_ss8b8f2cd6, "!("), v__ldl, NAMSTR(s_ss35f3ad29, "block\\s+)(name=)\?(\\w+|'.*'|\".*\")(\\s*\?)\?((append|prepend|nocache)(=true)\?)\?(\\s*"), v__rdl, NAMSTR(s_ss6ce62072, ")!")), toString(v_block_tag), ref(v__match))));
      tmp0 = (equal(0LL, tmp1));
    }
    if (tmp0) {
      {
        {
          LINE(53,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_template;
          mcp0.methodCall((obj0), NAMSTR(s_ss147cf201, "getTemplateFilepath"), 0x2FEDF4242F8CBBD8LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
          const String &tmp2((x_htmlspecialchars(toString(v_block_tag))));
          v_error_text = concat5(NAMSTR(s_ss56999f30, "Syntax Error in template \""), tmp1, NAMSTR(s_ssc6d6b47d, "\"   \""), tmp2, NAMSTR(s_ss601608fb, "\" illegal options"));
        }
        {
          p_SmartyCompilerException tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss9d2ea485, "SmartyCompilerException"), &g->CDEC(smartycompilerexception))), (coo_SmartyCompilerException()));
          throw_exception(LINE(54,(((c_SmartyCompilerException*)tmp0.get()->create(VarNR(v_error_text)), tmp0))));
        }
      }
    }
    else {
      {
        {
          LINE(56,0);
          const String &tmp0((toString(v__match.rvalAt(3LL, AccessFlags::Error))));
          const String &tmp1((x_trim(tmp0, NAMSTR(s_ss643ce2bc, "'\""))));
          v__name = tmp1;
        }
        {
          bool tmp0;
          {
            const String &tmp1((toString(v_block_content)));
            LINE(58,0);
            const String &tmp2((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
            const String &tmp3((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
            const Variant &tmp4((x_strpos(tmp1, VarNR(concat3(tmp2, NAMSTR(s_ss49f3b708, "$smarty.block.child"), tmp3)))));
            tmp0 = (!same(tmp4, false));
          }
          if (tmp0) {
            {
              {
                bool tmp0;
                {
                  tmp0 = (isset(LINE(59,(v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), false))), v__name));
                }
                if (tmp0) {
                  {
                    {
                      LINE(60,0);
                      const String &tmp0((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
                      const String &tmp1((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
                      LINE(61,0);
                      const Variant &tmp2((v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9dd0babc, "source"), AccessFlags::Error_Key)));
                      const Variant &tmp3((x_str_replace(VarNR(concat3(tmp0, NAMSTR(s_ss49f3b708, "$smarty.block.child"), tmp1)), tmp2, v_block_content)));
                      v_block_content.assignVal(tmp3);
                      tmp_ref.unset();
                    }
                    {
                      LINE(62,(v_template.o_unsetLval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name))).weakRemove(v__name);
                      tmp_ref.unset();
                    }
                  }
                }
                else {
                  {
                    {
                      LINE(64,0);
                      const String &tmp0((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
                      const String &tmp1((toString(v_template.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
                      LINE(65,0);
                      const Variant &tmp2((x_str_replace(VarNR(concat3(tmp0, NAMSTR(s_ss49f3b708, "$smarty.block.child"), tmp1)), NAMVAR(s_svs00000000, ""), v_block_content)));
                      v_block_content.assignVal(tmp2);
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
            tmp0 = (isset(LINE(68,(v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), false))), v__name));
          }
          if (tmp0) {
            {
              {
                bool tmp0;
                {
                  LINE(69,0);
                  const String &tmp1((toString(v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9dd0babc, "source"), AccessFlags::Error_Key))));
                  const Variant &tmp2((x_strpos(tmp1, NAMVAR(s_svsb99c9e0d, "%%%%SMARTY_PARENT%%%%"))));
                  tmp0 = (!same(tmp2, false));
                  tmp_ref.unset();
                }
                if (tmp0) {
                  {
                    {
                      Variant tmp0((v_block_content));
                      LINE(71,0);
                      const Variant &tmp1((v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9dd0babc, "source"), AccessFlags::Error_Key)));
                      const Variant &tmp2((x_str_replace(NAMVAR(s_svsb99c9e0d, "%%%%SMARTY_PARENT%%%%"), tmp0, tmp1)));
                      LINE(70,(lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss9dd0babc, "source"), (tmp2), true);
                      tmp_ref.unset();
                    }
                  }
                }
                else {
                  bool tmp0;
                  {
                    LINE(72,0);
                    const Variant &tmp1((v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss1db00143, "mode"), AccessFlags::Error_Key)));
                    tmp0 = (equal(tmp1, NAMSTR(s_ss2da130db, "prepend")));
                    tmp_ref.unset();
                  }
                  if (tmp0) {
                    {
                      {
                        LINE(73,(lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).setOpEqual(273, NAMSTR(s_ss9dd0babc, "source"), (toString(v_block_content)), true);
                        tmp_ref.unset();
                      }
                    }
                  }
                  else {
                    bool tmp0;
                    {
                      LINE(74,0);
                      const Variant &tmp1((v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss1db00143, "mode"), AccessFlags::Error_Key)));
                      tmp0 = (equal(tmp1, NAMSTR(s_ssba65d5ee, "append")));
                      tmp_ref.unset();
                    }
                    if (tmp0) {
                      {
                        {
                          LINE(75,0);
                          const String &tmp0((toString(v_template.o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9dd0babc, "source"), AccessFlags::Error_Key))));
                          const String &tmp1((toString(v_block_content)));
                          lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)).set(NAMSTR(s_ss9dd0babc, "source"), (VarNR(concat(tmp1, tmp0))), true);
                          tmp_ref.unset();
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
              {
                Variant tmp0((v_block_content));
                LINE(78,(lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss9dd0babc, "source"), (tmp0), true);
                tmp_ref.unset();
              }
            }
          }
        }
        {
          bool tmp0;
          {
            LINE(80,0);
            const Variant &tmp1((v__match.rvalAt(6LL, AccessFlags::Error)));
            tmp0 = (equal(tmp1, NAMSTR(s_ssba65d5ee, "append")));
          }
          if (tmp0) {
            {
              {
                LINE(81,(lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss1db00143, "mode"), (NAMVAR(s_svsba65d5ee, "append")), true);
                tmp_ref.unset();
              }
            }
          }
          else {
            bool tmp0;
            {
              LINE(82,0);
              const Variant &tmp1((v__match.rvalAt(6LL, AccessFlags::Error)));
              tmp0 = (equal(tmp1, NAMSTR(s_ss2da130db, "prepend")));
            }
            if (tmp0) {
              {
                {
                  LINE(83,(lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss1db00143, "mode"), (NAMVAR(s_svs2da130db, "prepend")), true);
                  tmp_ref.unset();
                }
              }
            }
            else {
              {
                {
                  LINE(85,(lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss1db00143, "mode"), (NAMVAR(s_svscfd63bc6, "replace")), true);
                  tmp_ref.unset();
                }
              }
            }
          }
        }
        {
          Variant tmp0((v_filepath));
          LINE(87,(lval(v_template.o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss8ce7db5b, "file"), (tmp0), true);
          tmp_ref.unset();
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 91 */
Variant c_Smarty_Internal_Compile_Block::t_compilechildblock(Variant v_compiler, Variant v__name //  = null
) {
  STATIC_METHOD_INJECTION(Smarty_Internal_Compile_Block, Smarty_Internal_Compile_Block::compileChildBlock);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Block::compileChildBlock", array_createvi(2, toVPOD(v_compiler), toVPOD(v__name)), r);
  Variant v__output;
  int v_stack_count = 0;
  Variant v__tpl;
  Primitive v_code = 0;
  Variant v_tmp1;
  Primitive v_name = 0;
  Variant v_tmp;
  Primitive v_type = 0;
  Variant v_data;

  Variant tmp_ref;
  v__output = NAMSTR(s_ss00000000, "");
  if (equal(v__name, null)) {
    {
      {
        LINE(96,0);
        const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true)));
        int tmp1((x_count(tmp0)));
        v_stack_count = tmp1;
      }
      LOOP_COUNTER(1);
      {
        while (not_less(--v_stack_count, 0LL)) {
          LOOP_COUNTER_CHECK(1);
          {
            {
              bool tmp0;
              {
                LINE(98,0);
                const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true).rvalRef(v_stack_count, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
                tmp0 = (equal(tmp1, NAMSTR(s_ss87556ef3, "block")));
                tmp_ref.unset();
              }
              if (tmp0) {
                {
                  {
                    LINE(99,0);
                    const String &tmp0((toString(v_compiler.o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true).rvalRef(v_stack_count, tmp_ref, AccessFlags::Error).rvalRef(1LL, tmp_ref, AccessFlags::Error).rvalRef(0LL, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key))));
                    const String &tmp1((x_trim(tmp0, NAMSTR(s_ss643ce2bc, "'\""))));
                    v__name = tmp1;
                    tmp_ref.unset();
                  }
                  break;
                }
              }
            }
          }
        }
      }
      {
        LINE(104,(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ssf85b5e4a, "block_data"), tmp_ref, s_class_name).lvalAt(v__name, AccessFlags::CheckExist)))).set(NAMSTR(s_ss9094af88, "compiled"), (true_varNR), true);
        tmp_ref.unset();
      }
    }
  }
  if (equal(v__name, null)) {
    {
      {
        LINE(107,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = v_compiler;
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
        (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsd198f724, "{$smarty.block.child} used out of context"), tmp1);
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (!(isset(LINE(110,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), false))), v__name)));
    }
    if (tmp0) {
      {
        return NAMSTR(s_ss00000000, "");
      }
    }
  }
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ssbe100381, "Smarty_Internal_template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(113,0);
    const String &tmp1((toString(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9dd0babc, "source"), AccessFlags::Error_Key))));
    const Variant &tmp2((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    const Variant &tmp3((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
    const Variant &tmp4((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    Variant tmp5((LINE(114,(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss962fc398, "compile_id"), null)));
    const Variant &tmp6((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)));
    const Variant &tmp7((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss41eb5ea5, "cache_lifetime"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(concat(NAMSTR(s_ss472d6ea2, "eval:"), tmp1), tmp2, tmp3, tmp4, tmp5, tmp6, tmp7));
    v__tpl = tmp0;
    tmp_ref.unset();
  }
  {
    LINE(115,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
    v__tpl.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).set(NAMSTR(s_ss73233481, "nocache_hash"), (tmp0), true);
    tmp_ref.unset();
  }
  {
    LINE(116,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss8ce7db5b, "file"), AccessFlags::Error_Key)));
    v__tpl.o_setPublic(NAMSTR(s_ss1994ea1c, "template_filepath"), tmp0);
    tmp_ref.unset();
  }
  if (LINE(117,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true))))) {
    {
      v__tpl.o_setPublic(NAMSTR(s_ssd326038d, "forceNocache"), 2LL);
    }
  }
  else {
    {
      v__tpl.o_setPublic(NAMSTR(s_ssd326038d, "forceNocache"), 1LL);
    }
  }
  v__tpl.o_setPublic(NAMSTR(s_ss0838733b, "suppressHeader"), true);
  v__tpl.o_setPublic(NAMSTR(s_ss3600cf36, "suppressFileDependency"), true);
  {
    bool tmp0;
    {
      LINE(124,0);
      const String &tmp1((toString(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss9dd0babc, "source"), AccessFlags::Error_Key))));
      const Variant &tmp2((x_strpos(tmp1, NAMVAR(s_svsb99c9e0d, "%%%%SMARTY_PARENT%%%%"))));
      tmp0 = (!same(tmp2, false));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LINE(125,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
          MethodCallPackage mcp2;
          CVarRef obj2 = v__tpl;
          mcp2.methodCall((obj2), NAMSTR(s_ss1225174d, "getCompiledTemplate"), 0x68BCD7B317388BF6LL);
          const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
          Variant tmp3(((mcp2.ci->getMeth0Args())(mcp2, 0)));
          const Variant &tmp4((x_str_replace(NAMVAR(s_svsb99c9e0d, "%%%%SMARTY_PARENT%%%%"), tmp1, tmp3)));
          v__output.assignVal(tmp4);
        }
      }
    }
    else {
      bool tmp0;
      {
        LINE(126,0);
        const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss1db00143, "mode"), AccessFlags::Error_Key)));
        tmp0 = (equal(tmp1, NAMSTR(s_ss2da130db, "prepend")));
        tmp_ref.unset();
      }
      if (tmp0) {
        {
          {
            LINE(127,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = v__tpl;
            mcp0.methodCall((obj0), NAMSTR(s_ss1225174d, "getCompiledTemplate"), 0x68BCD7B317388BF6LL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
            MethodCallPackage mcp2;
            CVarRef obj2 = v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
            mcp2.methodCall((obj2), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
            const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
            const String &tmp3((toString((mcp2.ci->getMeth0Args())(mcp2, 0))));
            v__output = concat(tmp1, tmp3);
          }
        }
      }
      else {
        bool tmp0;
        {
          LINE(128,0);
          const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ss1db00143, "mode"), AccessFlags::Error_Key)));
          tmp0 = (equal(tmp1, NAMSTR(s_ssba65d5ee, "append")));
          tmp_ref.unset();
        }
        if (tmp0) {
          {
            {
              LINE(129,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = v_compiler.o_getPublic(NAMSTR(s_ss1d4f2d02, "parser"), true).o_getPublic(NAMSTR(s_ss8ce16784, "current_buffer"), true);
              mcp0.methodCall((obj0), NAMSTR(s_ss6e54c1b4, "to_smarty_php"), 0x03E370BA2B1EA4F0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              const String &tmp1((toString((mcp0.ci->getMeth0Args())(mcp0, 0))));
              MethodCallPackage mcp2;
              CVarRef obj2 = v__tpl;
              mcp2.methodCall((obj2), NAMSTR(s_ss1225174d, "getCompiledTemplate"), 0x68BCD7B317388BF6LL);
              const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
              const String &tmp3((toString((mcp2.ci->getMeth0Args())(mcp2, 0))));
              v__output = concat(tmp1, tmp3);
            }
          }
        }
        else {
          bool tmp0;
          {
            tmp0 = (!(empty(LINE(130,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_ssf85b5e4a, "block_data"), false))), v__name)));
          }
          if (tmp0) {
            {
              {
                LINE(131,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss1225174d, "getCompiledTemplate"), 0x68BCD7B317388BF6LL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth0Args())(mcp0, 0)));
                v__output.assignVal(tmp1);
              }
            }
          }
        }
      }
    }
  }
  {
    LINE(133,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
    const Variant &tmp1((v__tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss3d122809, "file_dependency"), AccessFlags::Error_Key)));
    const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
    v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).set(NAMSTR(s_ss3d122809, "file_dependency"), (tmp2), true);
    tmp_ref.unset();
  }
  {
    LINE(134,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
    const Variant &tmp1((v__tpl.o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss52403931, "function"), AccessFlags::Error_Key)));
    const Variant &tmp2((x_array_merge(2, tmp0, Array(array_createvi(1, toVPOD(tmp1))))));
    v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref, s_class_name).set(NAMSTR(s_ss52403931, "function"), (tmp2), true);
    tmp_ref.unset();
  }
  if (LINE(135,(toBoolean(v__tpl.o_getPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true))))) {
    {
      {
        LINE(136,(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name))).o_setPublic(NAMSTR(s_ss35a5e0ad, "has_nocache_code"), true);
        tmp_ref.unset();
      }
    }
  }
  {
    LOOP_COUNTER(2);
    Variant map3 = LINE(138,(v__tpl.o_getPublic(NAMSTR(s_sscfae774a, "required_plugins"), true)));
    for (ArrayIter iter4 = map3.begin(s_class_name, true); !iter4.end(); iter4.next()) {
      LOOP_COUNTER_CHECK(2);
      iter4.second(v_tmp1);
      v_code.assignVal(iter4.first());
      {
        {
          LOOP_COUNTER(5);
          for (ArrayIter iter7 = v_tmp1.begin(s_class_name, true); !iter7.end(); ++iter7) {
            LOOP_COUNTER_CHECK(5);
            iter7.second(v_tmp);
            v_name.assignVal(iter7.first());
            {
              {
                LOOP_COUNTER(8);
                for (ArrayIter iter10 = v_tmp.begin(s_class_name, true); !iter10.end(); ++iter10) {
                  LOOP_COUNTER_CHECK(8);
                  iter10.second(v_data);
                  v_type.assignVal(iter10.first());
                  {
                    {
                      Variant tmp0((v_data));
                      LINE(141,(lval(lval(v_compiler.o_lval(NAMSTR(s_ss86160f07, "template"), tmp_ref, s_class_name).o_lval(NAMSTR(s_sscfae774a, "required_plugins"), tmp_ref, s_class_name).lvalAt(v_code, AccessFlags::CheckExist)).lvalAt(v_name, AccessFlags::CheckExist)))).set(v_type, (tmp0));
                      tmp_ref.unset();
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
  unset(v__tpl);
  return v__output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Blockclose() {
  return NEWOBJ(c_Smarty_Internal_Compile_Blockclose)();
}
ObjectData *coo_Smarty_Internal_Compile_Block() {
  return NEWOBJ(c_Smarty_Internal_Compile_Block)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_block.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_block_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_block) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  g->CDEC(smarty_internal_compile_blockclose) = true;
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_break.php line 15 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Break)
const InstanceOfInfo c_Smarty_Internal_Compile_Break::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x77F472C15CEA877FLL,1,"Smarty_Internal_Compile_Break",&cw_Smarty_Internal_Compile_Break},
};
const int c_Smarty_Internal_Compile_Break::s_instanceof_index[] = {
  3,
  0,-1,-1,1,
};
CallInfo c_Smarty_Internal_Compile_Break::ci_compile((void*)&c_Smarty_Internal_Compile_Break::i_compile, (void*)&c_Smarty_Internal_Compile_Break::ifa_compile, 3, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Break::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Break);
  }
  c_Smarty_Internal_Compile_Break *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Break*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Break::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1, arg2));
  }
}
Variant c_Smarty_Internal_Compile_Break::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Break);
  }
  c_Smarty_Internal_Compile_Break *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Break*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Compile_Break::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_compile(arg0, arg1, arg2));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Break::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Break::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Break::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Break = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Break,
  c_Smarty_Internal_Compile_Break::s_call_info_table,c_Smarty_Internal_Compile_Break::s_call_info_index,
  c_Smarty_Internal_Compile_Break::s_instanceof_table,c_Smarty_Internal_Compile_Break::s_instanceof_index,
  &c_Smarty_Internal_Compile_Break::s_class_name,
  &c_Smarty_Internal_Compile_Break::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Break::init() {
  c_Smarty_Internal_CompileBase::init();
  m_optional_attributes = s_sa4a6a1da3;
  m_shorttag_order = s_sa4a6a1da3;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_break.php line 29 */
String c_Smarty_Internal_Compile_Break::t_compile(CVarRef v_args, CVarRef v_compiler, CVarRef v_parameter) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Break, Smarty_Internal_Compile_Break::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Break::compile", array_createvi(3, toVPOD(v_args), toVPOD(v_compiler), toVPOD(v_parameter)), r);
  Array v__attr;
  Variant v__levels;
  Variant v_level_count;
  int64 v_stack_count = 0;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(32,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  {
    LINE(34,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  {
    bool tmp0;
    {
      LINE(36,0);
      const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss8b74ea02, "nocache"), AccessFlags::Error_Key)));
      tmp0 = (same(tmp1, true));
    }
    if (tmp0) {
      {
        {
          LINE(37,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
          mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
          (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsb128b262, "nocache option not allowed"), tmp1);
        }
      }
    }
  }
  if (isset(v__attr, NAMSTR(s_ss54babeee, "levels"), true)) {
    {
      {
        bool tmp0;
        {
          LINE(41,0);
          const Variant &tmp1((v__attr.rvalAt(NAMSTR(s_ss54babeee, "levels"), AccessFlags::Error_Key)));
          bool tmp2((x_is_numeric(tmp1)));
          tmp0 = (!(tmp2));
        }
        if (tmp0) {
          {
            {
              LINE(42,0);
              MethodCallPackage mcp0;
              CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
              mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
              const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
              const Variant &tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
              (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svsbe94ef36, "level attribute must be a numeric constant"), tmp1);
            }
          }
        }
      }
      {
        LINE(44,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ss54babeee, "levels"), AccessFlags::Error_Key)));
        v__levels.assignVal(tmp0);
      }
    }
  }
  else {
    {
      v__levels = 1LL;
    }
  }
  v_level_count.assignVal(v__levels);
  {
    LINE(49,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true)));
    int tmp1((x_count(tmp0)));
    int64 tmp2(((tmp1 - 1LL)));
    v_stack_count = tmp2;
  }
  LOOP_COUNTER(1);
  {
    while ((more(v_level_count, 0LL) && not_less(v_stack_count, 0LL))) {
      LOOP_COUNTER_CHECK(1);
      {
        {
          bool tmp0;
          {
            LINE(51,0);
            const Variant &tmp1((v_compiler.o_getPublic(NAMSTR(s_ss0b3d5400, "_tag_stack"), true).rvalRef(v_stack_count, tmp_ref, AccessFlags::Error).rvalAt(0LL, AccessFlags::Error)));
            tmp0 = (x_in_array(tmp1, s_svafb31e1f0));
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              v_level_count--;
            }
          }
        }
        v_stack_count--;
      }
    }
  }
  if (!equal(v_level_count, 0LL)) {
    {
      {
        LINE(57,0);
        MethodCallPackage mcp0;
        CVarRef obj0 = GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true);
        mcp0.methodCall((obj0), NAMSTR(s_ss9cc74d66, "trigger_template_error"), 0x1F6DFB1F30795BE0LL);
        const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
        const String &tmp1((toString(v__levels)));
        const Variant &tmp2((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss685ba94d, "lex"), true).o_getPublic(NAMSTR(s_ssc1db0379, "taglineno"), true)));
        (mcp0.ci->getMeth2Args())(mcp0, 2, VarNR(concat3(NAMSTR(s_ss75b3d9ac, "cannot break "), tmp1, NAMSTR(s_ssf2d60ada, " level(s)"))), tmp2);
      }
    }
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss11e77b3f, "has_code"), true);
    tmp_ref.unset();
  }
  return concat3(NAMSTR(s_ssaa7f4bed, "<\?php break "), toString(v__levels), NAMSTR(s_ssf7e13165, "\?>"));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Break() {
  return NEWOBJ(c_Smarty_Internal_Compile_Break)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_break.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_break_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_break) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_call.php line 16 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Compile_Call)
const InstanceOfInfo c_Smarty_Internal_Compile_Call::s_instanceof_table[] = {
  {0x19E5DD6A6DE4D334LL,1,"Smarty_Internal_CompileBase",&cw_Smarty_Internal_CompileBase},
  {0x2A0F92A56B674C9ELL,1,"Smarty_Internal_Compile_Call",&cw_Smarty_Internal_Compile_Call},
};
const int c_Smarty_Internal_Compile_Call::s_instanceof_index[] = {
  3,
  0,-1,1,-1,
};
CallInfo c_Smarty_Internal_Compile_Call::ci_compile((void*)&c_Smarty_Internal_Compile_Call::i_compile, (void*)&c_Smarty_Internal_Compile_Call::ifa_compile, 2, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Compile_Call::i_compile(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_compile, coo_Smarty_Internal_Compile_Call);
  }
  c_Smarty_Internal_Compile_Call *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Call*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Call::compile", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_compile(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Compile_Call::ifa_compile(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_compile, coo_Smarty_Internal_Compile_Call);
  }
  c_Smarty_Internal_Compile_Call *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Compile_Call*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Compile_Call::compile", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_compile(arg0, arg1));
}
const MethodCallInfoTable c_Smarty_Internal_Compile_Call::s_call_info_table[] = {
  { 0x7EC12489E158EB37LL, 1, 7, "compile", &c_Smarty_Internal_Compile_Call::ci_compile },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Compile_Call::s_call_info_index[] = {
  1,
  -1,0,
};
const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Call = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Compile_Call,
  c_Smarty_Internal_Compile_Call::s_call_info_table,c_Smarty_Internal_Compile_Call::s_call_info_index,
  c_Smarty_Internal_Compile_Call::s_instanceof_table,c_Smarty_Internal_Compile_Call::s_instanceof_index,
  &c_Smarty_Internal_Compile_Call::s_class_name,
  &c_Smarty_Internal_Compile_Call::os_prop_table,0,0,&cw_Smarty_Internal_CompileBase
};
void c_Smarty_Internal_Compile_Call::init() {
  c_Smarty_Internal_CompileBase::init();
  m_required_attributes = s_sa6b3e86d0;
  m_shorttag_order = s_sa6b3e86d0;
  m_optional_attributes = s_sad23e7614;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_call.php line 30 */
String c_Smarty_Internal_Compile_Call::t_compile(CVarRef v_args, CVarRef v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Compile_Call, Smarty_Internal_Compile_Call::compile);
  INTERCEPT_INJECTION("Smarty_Internal_Compile_Call::compile", array_createvi(2, toVPOD(v_args), toVPOD(v_compiler)), r);
  Array v__attr;
  Variant v__assign;
  Variant v__name;
  String v__nocache;
  Array v__paramsArray;
  Primitive v__key = 0;
  Variant v__value;
  Variant v_call_cache;
  String v_call_function;
  String v__params;
  Variant v__hash;
  String v__output;

  Variant tmp_ref;
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(33,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  {
    LINE(35,0);
    const Array &tmp0((t__get_attributes(v_args)));
    v__attr = tmp0;
  }
  if (isset(v__attr, NAMSTR(s_ssba4e7712, "assign"), true)) {
    {
      {
        LINE(39,0);
        const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssba4e7712, "assign"), AccessFlags::Error_Key)));
        v__assign.assignVal(tmp0);
      }
    }
  }
  {
    LINE(41,0);
    const Variant &tmp0((v__attr.rvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::Error_Key)));
    v__name.assignVal(tmp0);
  }
  {
    v__attr.weakRemove(NAMSTR(s_ssdc3cbddc, "name"), true);
    v__attr.weakRemove(NAMSTR(s_ssba4e7712, "assign"), true);
    v__attr.weakRemove(NAMSTR(s_ss8b74ea02, "nocache"), true);
  }
  if ((LINE(44,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss8b74ea02, "nocache"), true)))) || toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss2c55ca29, "tag_nocache"), true)))) {
    {
      v__nocache = NAMSTR(s_ss102bfbc4, "true");
    }
  }
  else {
    {
      v__nocache = NAMSTR(s_ss8c98c156, "false");
    }
  }
  v__paramsArray = s_sa00000000;
  {
    LOOP_COUNTER(1);
    for (ArrayIter iter3 = v__attr.begin(s_class_name, true); !iter3.end(); ++iter3) {
      LOOP_COUNTER_CHECK(1);
      iter3.second(v__value);
      v__key.assignVal(iter3.first());
      {
        if (x_is_int(v__key)) {
          {
            v__paramsArray.append((VarNR(concat3(toString(v__key), NAMSTR(s_ss398622d5, "=>"), toString(v__value)))));
          }
        }
        else {
          {
            v__paramsArray.append((VarNR(concat4(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ss0dfe9f10, "'=>"), toString(v__value)))));
          }
        }
      }
    }
  }
  {
    bool tmp0;
    {
      tmp0 = (isset(LINE(57,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), false).o_getPublic(NAMSTR(s_ss90269404, "properties"), false).rvalRef(NAMSTR(s_ss52403931, "function"), tmp_ref, AccessFlags::Key).rvalRef(v__name, tmp_ref))), NAMSTR(s_ssf56bac6b, "parameter"), true));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(4);
          Variant map5;
          {
            map5 = LINE(58,(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalRef(NAMSTR(s_ss52403931, "function"), tmp_ref, AccessFlags::Error_Key).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssf56bac6b, "parameter"), AccessFlags::Error_Key)));
            tmp_ref.unset();
          }
          for (ArrayIter iter6 = map5.begin(s_class_name, true); !iter6.end(); iter6.next()) {
            LOOP_COUNTER_CHECK(4);
            iter6.second(v__value);
            v__key.assignVal(iter6.first());
            {
              if (!(isset(v__attr, v__key))) {
                {
                  if (x_is_int(v__key)) {
                    {
                      v__paramsArray.append((VarNR(concat3(toString(v__key), NAMSTR(s_ss398622d5, "=>"), toString(v__value)))));
                    }
                  }
                  else {
                    {
                      v__paramsArray.append((VarNR(concat4(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ss0dfe9f10, "'=>"), toString(v__value)))));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bool tmp0;
      {
        tmp0 = (isset(LINE(67,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), false).rvalRef(v__name, tmp_ref))), NAMSTR(s_ssf56bac6b, "parameter"), true));
        tmp_ref.unset();
      }
      if (tmp0) {
        {
          {
            LOOP_COUNTER(7);
            Variant map8;
            {
              map8 = LINE(68,(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss57c82ef4, "template_functions"), true).rvalRef(v__name, tmp_ref, AccessFlags::Error).rvalAt(NAMSTR(s_ssf56bac6b, "parameter"), AccessFlags::Error_Key)));
              tmp_ref.unset();
            }
            for (ArrayIter iter9 = map8.begin(s_class_name, true); !iter9.end(); iter9.next()) {
              LOOP_COUNTER_CHECK(7);
              iter9.second(v__value);
              v__key.assignVal(iter9.first());
              {
                if (!(isset(v__attr, v__key))) {
                  {
                    if (x_is_int(v__key)) {
                      {
                        v__paramsArray.append((VarNR(concat3(toString(v__key), NAMSTR(s_ss398622d5, "=>"), toString(v__value)))));
                      }
                    }
                    else {
                      {
                        v__paramsArray.append((VarNR(concat4(NAMSTR(s_sse07b87c4, "'"), toString(v__key), NAMSTR(s_ss0dfe9f10, "'=>"), toString(v__value)))));
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
    bool tmp0;
    {
      LINE(79,0);
      const Variant &tmp1((x_strpos(toString(v__name), NAMVAR(s_svsf539d341, "$"))));
      tmp0 = (!(same(tmp1, false)));
    }
    if (tmp0) {
      {
        v_call_cache.assignVal(v__name);
        v_call_function = concat3(NAMSTR(s_ss785134f6, "$tmp = \"smarty_template_function_\"."), toString(v__name), NAMSTR(s_ss9f56c759, "; $tmp"));
      }
    }
    else {
      {
        {
          LINE(83,0);
          const String &tmp0((x_trim(toString(v__name), NAMSTR(s_ss643ce2bc, "'\""))));
          v__name = tmp0;
        }
        v_call_cache = concat3(NAMSTR(s_sse07b87c4, "'"), toString(v__name), NAMSTR(s_sse07b87c4, "'"));
        v_call_function = concat(NAMSTR(s_ss2267d06d, "smarty_template_function_"), toString(v__name));
      }
    }
  }
  {
    LINE(88,0);
    const String &tmp0((x_implode(NAMVAR(s_svsd332baa7, ","), VarNR(v__paramsArray))));
    v__params = concat3(NAMSTR(s_ss5cd0f479, "array("), tmp0, NAMSTR(s_ss44beffb9, ")"));
  }
  {
    LINE(89,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ss90269404, "properties"), true).rvalAt(NAMSTR(s_ss73233481, "nocache_hash"), AccessFlags::Error_Key)));
    const Variant &tmp1((x_str_replace(NAMVAR(s_svs935fd125, "-"), NAMVAR(s_svs7f06ffcd, "_"), tmp0)));
    v__hash.assignVal(tmp1);
  }
  if (isset(v__assign)) {
    {
      {
        bool tmp0;
        {
          tmp0 = (LINE(92,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
        }
        if (tmp0) {
          {
            v__output = StringBuffer().addWithTaint("<\?php ob_start(); Smarty_Internal_Function_Call_Handler::call (", 63).addWithTaint(toString(v_call_cache)).addWithTaint(",$_smarty_tpl,", 14).addWithTaint(v__params).addWithTaint(",'", 2).addWithTaint(toString(v__hash)).addWithTaint("',", 2).addWithTaint(v__nocache).addWithTaint("); $_smarty_tpl->assign(", 24).addWithTaint(toString(v__assign)).addWithTaint(", ob_get_clean());\?>\n", 21).detachWithTaint();
          }
        }
        else {
          {
            v__output = StringBuffer().addWithTaint("<\?php ob_start(); ", 18).addWithTaint(v_call_function).addWithTaint("($_smarty_tpl,", 14).addWithTaint(v__params).addWithTaint("); $_smarty_tpl->assign(", 24).addWithTaint(toString(v__assign)).addWithTaint(", ob_get_clean());\?>\n", 21).detachWithTaint();
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
          tmp0 = (LINE(98,(toBoolean(v_compiler.o_getPublic(NAMSTR(s_ss86160f07, "template"), true).o_getPublic(NAMSTR(s_ssafeed509, "caching"), true)))));
        }
        if (tmp0) {
          {
            v__output = StringBuffer().addWithTaint("<\?php Smarty_Internal_Function_Call_Handler::call (", 51).addWithTaint(toString(v_call_cache)).addWithTaint(",$_smarty_tpl,", 14).addWithTaint(v__params).addWithTaint(",'", 2).addWithTaint(toString(v__hash)).addWithTaint("',", 2).addWithTaint(v__nocache).addWithTaint(");\?>\n", 5).detachWithTaint();
          }
        }
        else {
          {
            v__output = concat5(NAMSTR(s_ss271d3c8a, "<\?php "), v_call_function, NAMSTR(s_ssfe92b0a4, "($_smarty_tpl,"), v__params, NAMSTR(s_ss13b21925, ");\?>\n"));
          }
        }
      }
    }
  }
  return v__output;
}
namespace hphp_impl_splitter {}
ObjectData *coo_Smarty_Internal_Compile_Call() {
  return NEWOBJ(c_Smarty_Internal_Compile_Call)();
}
Variant pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::Smarty/libs/sysplugins/smarty_internal_compile_call.php, pm_php$Smarty$libs$sysplugins$smarty_internal_compile_call_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  g->CDEC(smarty_internal_compile_call) = true;
  checkClassExistsThrow(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase"), &g->CDEC(smarty_internal_compilebase));
  return true;
}
namespace hphp_impl_splitter {}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sva6b3e86d0,
  (int64)&s_sva4a6a1da3,
  (int64)&s_svad23e7614,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,0,0,0,84,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },

  {0x691414609BC81C26LL,1,1,0,20,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },
  {0x592D7A1CE6937E56LL,0,1,0,84,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },

  {0x54E8208FE47CFF0ELL,1,0,0,20,10,0,&NAMSTR(s_ss9768b766, "required_attributes") },
  {0x592D7A1CE6937E56LL,1,0,0,20,10,0,&NAMSTR(s_ss7a3cf10e, "shorttag_order") },
  {0x691414609BC81C26LL,0,2,0,84,10,0,&NAMSTR(s_ss924eeed5, "optional_attributes") },

};
static const int cpt_hash_entries[] = {
  // Smarty_Internal_Compile_Block hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Block lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Break hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Break lists
  -1,
  -1,
  -1,
  // Smarty_Internal_Compile_Call hash
  -1,-1,-1,-1,-1,-1,0,-1,
  // Smarty_Internal_Compile_Call lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Smarty_Internal_Compile_Block::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+0,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Break::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+11,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+2,cpt_static_inits
};
const ClassPropTable c_Smarty_Internal_Compile_Call::os_prop_table = {
  7,0,-1,-1,-1,-1,9,0,
  cpt_hash_entries+22,&c_Smarty_Internal_CompileBase::os_prop_table,cpt_table_entries+4,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
