
#include <php/index.h>
#include <php/index.fws.h>
#include <php/templates_c/f83ed04b0f30683e3826b23328c96a6e07015b85.file.test.tpl.h>
#include <php/templates_c/f83ed04b0f30683e3826b23328c96a6e07015b85.file.test.tpl.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

const StaticString k_VARIABLE_PAYLOAD(LITSTR_INIT("payload"));

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
Variant pm_php$index_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::index.php, pm_php$index_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  Variant &v_smarty ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ss675664bf, "smarty")) : g->GV(smarty);
  Variant &v_parameters ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ssf51536b8, "parameters")) : g->GV(parameters);
  Variant &v_content ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ss024ed895, "content")) : g->GV(content);

  Variant tmp_ref;
  LINE(16,(x_set_include_path(NAMSTR(s_ssbd3697f2, ".:./Smarty/libs"))));
  LINE(20,(require(NAMSTR(s_ss6a9b93ab, "Smarty.class.php"), true, variables, "")));
  {
    LINE(24,0);
    const p_Smarty &tmp0((((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &g->CDEC(smarty))), (p_Smarty(((c_Smarty*)coo_Smarty())->create())))));
    v_smarty = tmp0;
  }
  v_smarty.o_setPublic(NAMSTR(s_ssafeed509, "caching"), false);
  v_smarty.o_setPublic(NAMSTR(s_ssed156107, "left_delimiter"), NAMSTR(s_ss3939fa19, "{"));
  v_smarty.o_setPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), NAMSTR(s_ss236e0754, "}"));
  v_smarty.o_setPublic(NAMSTR(s_ss594c3572, "merge_compiled_includes"), true);
  {
    bool tmp0;
    {
      tmp0 = (isset(g->GV(_POST), NAMSTR(s_ss473b6f69, "payload") /* VARIABLE_PAYLOAD */, true));
    }
    if (tmp0) {
      {
        {
          LINE(42,0);
          const String &tmp0((toString(g->GV(_POST).rvalAt(NAMSTR(s_ss473b6f69, "payload") /* VARIABLE_PAYLOAD */, AccessFlags::Error_Key))));
          const Variant &tmp1((x_json_decode(tmp0, true)));
          v_parameters.assignVal(tmp1);
        }
        {
          LINE(43,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_smarty;
          mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, v_parameters);
        }
        {
          LINE(46,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v_smarty;
          mcp0.methodCall((obj0), NAMSTR(s_ssf46d6580, "fetch"), 0x5E82B850BB90B0FBLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          const Variant &tmp1((v_parameters.rvalAt(NAMSTR(s_ssf362b3c4, "path"), AccessFlags::Error_Key)));
          Variant tmp2(((mcp0.ci->getMeth1Args())(mcp0, 1, tmp1)));
          v_content.assignVal(tmp2);
        }
        echo(toString(v_content));
      }
    }
    else {
      {
        LINE(61,(x_header(NAMSTR(s_ss246fbe64, "Status: 500"))));
      }
    }
  }
  return true;
}
namespace hphp_impl_splitter {}
/* preface starts */
extern CallInfo ci_;
/* preface finishes */
Variant pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::templates_c/f83ed04b0f30683e3826b23328c96a6e07015b85.file.test.tpl.php, pm_php$templates_c$f83ed04b0f30683e3826b23328c96a6e07015b85_file_test_tpl_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  Variant &v__smarty_tpl ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ssddcdc9ba, "_smarty_tpl")) : g->GV(_smarty_tpl);
  Variant &v__template ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_sscfea6f7c, "_template")) : g->GV(_template);
  Variant &v__tpl_stack ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ss351719e4, "_tpl_stack")) : g->GV(_tpl_stack);

  Variant tmp_ref;
  {
    bool tmp0;
    {
      LINE(3,0);
      bool tmp1((x_defined(NAMSTR(s_sse621a75f, "SMARTY_DIR"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      f_exit(NAMSTR(s_ssc83f72c1, "no direct access allowed"));
    }
  }
  {
    LINE(25,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ssb204999e, "decodeProperties"), 0x75BBAB11B1ED4BBFLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, s_sva21477961);
  }
  echo(NAMSTR(s_ss1cc3f31c, "<!---->     \n\n<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \n    \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">\n<html xmlns=\"http://www.w3.org/1999/xhtml\">\n\t<head>\n\t    <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n\t    <title>eGloo | Skeleton Application</title>\n\t</head>\n    <body>\n\t\t<h1>"));
  {
    LINE(36,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsdc3cbddc, "name"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssa22591ab, "</h1>\n\t\t<h1>eGloo Skeleton Application!</h1>\n\n\t\t<!--"));
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(40,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ssfa84af14, "/tmp/test2.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(41,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svs9f282ea3, "14839286154e8353388eb394-29493254")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  echo(NAMSTR(s_ss4f4f94d4, "\nincluded template "));
  {
    LINE(46,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsdc3cbddc, "name"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss8347c02c, "\n\n"));
  {
    LINE(49,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(51,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  echo(NAMSTR(s_ssd17a31bd, "-->\n    </body>\n</html>\n"));
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
