
#include <php/templates_c/aa4c1df37173fa133641e1fa9c6e008f83554f47.file.StartTest.tpl.h>
#include <php/templates_c/aa4c1df37173fa133641e1fa9c6e008f83554f47.file.StartTest.tpl.fws.h>

// Dependencies
#include <php//home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_data.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_template.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
Variant pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php(bool incOnce, LVariableTable* variables, Globals *globals) {
  PSEUDOMAIN_INJECTION(run_init::templates_c/aa4c1df37173fa133641e1fa9c6e008f83554f47.file.StartTest.tpl.php, pm_php$templates_c$aa4c1df37173fa133641e1fa9c6e008f83554f47_file_StartTest_tpl_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  Variant &v__smarty_tpl ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ssddcdc9ba, "_smarty_tpl")) : g->GV(_smarty_tpl);
  Variant &v__template ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_sscfea6f7c, "_template")) : g->GV(_template);
  Variant &v__tpl_stack ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ss351719e4, "_tpl_stack")) : g->GV(_tpl_stack);
  Variant &v_tmp ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ss0cd91350, "tmp")) : g->GV(tmp);
  Variant &v__from ATTRIBUTE_UNUSED = (variables != gVariables) ? variables->get(NAMSTR(s_ss171fef08, "_from")) : g->GV(_from);

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
    LINE(73,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ssb204999e, "decodeProperties"), 0x75BBAB11B1ED4BBFLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, s_sva543a2c8d);
  }
  {
    bool tmp0;
    {
      LINE(74,0);
      bool tmp1((x_is_callable(NAMSTR(s_ss8aa02790, "smarty_modifier_escape"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php(false, NULL, g);
    }
  }
  echo(NAMSTR(s_ss66d2232c, "\n"));
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(77,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_sse7eea27f, "Header.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(78,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__template;
    mcp0.methodCall((obj0), NAMSTR(s_ssba4e7712, "assign"), 0x53B2FEAD43626754LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth2Args())(mcp0, 2, NAMVAR(s_svs2301e2fe, "title"), NAMVAR(s_svs1cefbf8f, "PetFlow | Get Started"));
  }
  {
    v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svsafec9b51, "15423855914e8388332d48e9-81345237")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  {
    bool tmp0;
    {
      LINE(82,0);
      bool tmp1((x_is_callable(NAMSTR(s_ss8aa02790, "smarty_modifier_escape"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php(false, NULL, g);
    }
  }
  echo(NAMSTR(s_ssbbf48247, "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">\n<html lang=\"en-US\" xml:lang=\"en-US\" xmlns=\"http://www.w3.org/1999/xhtml\">\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n"));
  {
    bool tmp0;
    {
      LINE(87,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss38ce6203, "product")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss11e37cf7, "<meta property=\"og:title\" content=\""));
        {
          LINE(88,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs38ce6203, "product"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).o_getPublic(NAMSTR(s_ss2301e2fe, "title"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss6d133250, "\" />\n<meta property=\"og:type\" content=\"product\" />\n<meta property=\"og:url\" content=\"http://www.petflow.com/"));
        {
          LINE(91,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs38ce6203, "product"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).o_getPublic(NAMSTR(s_ss9f6b3b79, "slug"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss3a328d3e, "\" />\n<meta property=\"og:image\" content=\""));
        {
          LINE(93,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs38ce6203, "product"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).o_getPublic(NAMSTR(s_ss360cc047, "img_thumb"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssd7224ec1, "\" />\n<meta property=\"og:site_name\" content=\"PetFlow\" />\n<meta property=\"og:description\" content=\""));
        {
          const CallInfo *cit0 = NULL;
          void *vt0 = NULL;
          cit0 = g->GCI(smarty_modifier_escape);
          if (!cit0) invoke_failed("smarty_modifier_escape", null_array, -1);
          LINE(96,0);
          MethodCallPackage mcp1;
          CVarRef obj1 = v__smarty_tpl;
          mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs38ce6203, "product"))));
          const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).o_getPublic(NAMSTR(s_ss37da26fe, "description"), true)));
          echo(toString((cit0->getFunc1Args())(vt0, 1, tmp3)));
        }
        echo(NAMSTR(s_ss18eaf371, "\" />\n"));
      }
    }
  }
  echo(NAMSTR(s_sscc269ede, "<title>"));
  {
    Silencer tmp0(true);
    LINE(99,0);
    MethodCallPackage mcp1;
    CVarRef obj1 = v__smarty_tpl;
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs2301e2fe, "title"))));
    const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
    Variant tmp4((tmp3));
    tmp0.disable();
    echo(toString(((x_is_null(v_tmp.assignVal(tmp4)) || same(v_tmp, NAMSTR(s_ss00000000, ""))) ? ((Variant)(NAMSTR(s_ss0f501a05, "PetFlow"))) : ((Variant)(v_tmp)))));
  }
  echo(NAMSTR(s_ssced28ca9, "</title>\n<meta name=\"title\" content=\"PetFlow Food For Life!\" />\n<link rel=\"shortcut icon\" href=\"/sites/all/themes/petflow/favicon.ico\" type=\"image/x-icon\" />\n<meta name=\"description\" content=\""));
  {
    Silencer tmp0(true);
    LINE(103,0);
    MethodCallPackage mcp1;
    CVarRef obj1 = v__smarty_tpl;
    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
    Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsffb3151e, "meta_description"))));
    const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
    Variant tmp4((tmp3));
    tmp0.disable();
    echo(toString(((x_is_null(v_tmp.assignVal(tmp4)) || same(v_tmp, NAMSTR(s_ss00000000, ""))) ? ((Variant)(NAMSTR(s_ssb395fa2d, "PetFlow is a new hassle free way to shop for pet food! We make it easy for you to set a delivery schedule, so you never have to shop for pet food again!"))) : ((Variant)(v_tmp)))));
  }
  echo(NAMSTR(s_ss18eaf371, "\" />\n"));
  {
    bool tmp0;
    {
      LINE(105,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss3c3982d5, "start")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ssf60b17fc, "<meta name=\"google-site-verification\" content=\"GXjS7Emt38wkIdyYArJYiR9O8RifIc0svJ-eicZ1YPI\" />\n"));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(108,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (equal(tmp3, NAMSTR(s_ssb02816d6, "brands")));
      if (!tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svsf73aed91, "page"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (equal(tmp7, NAMSTR(s_ss3c3982d5, "start")));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(109,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssf3d17a24, "js/brandsForm.js\" type=\"text/javascript\"></script>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss72b0599c, "<link rel=\"stylesheet\" type=\"text/css\" href=\""));
  {
    LINE(112,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssd9de8241, "css/global.css\"/>\n<link rel=\"stylesheet\" type=\"text/css\" href=\""));
  {
    LINE(114,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss47b36606, "xcss/page:"));
  {
    bool tmp0;
    {
      LINE(115,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss38ce6203, "product")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss922e0029, "products"));
      }
    }
    else {
      {
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsf73aed91, "page"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
      }
    }
  }
  echo(NAMSTR(s_ssa58ab242, "/styles.css\"/>\n<link rel=\"stylesheet\" type=\"text/css\" href=\""));
  {
    LINE(117,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss9836d6d3, "css/nav.css\"/>\n<link rel=\"stylesheet\" type=\"text/css\" href=\""));
  {
    LINE(119,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss47b36606, "xcss/page:"));
  {
    bool tmp0;
    {
      LINE(120,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss38ce6203, "product")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss922e0029, "products"));
      }
    }
    else {
      {
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsf73aed91, "page"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
      }
    }
  }
  echo(NAMSTR(s_ss375f91d5, "/sidebar.css\"/>\n<!--[if IE 7]>\n<link rel=\"stylesheet\" type=\"text/css\" href=\""));
  {
    LINE(123,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss845b41d8, "css/ie7.css\"/>\n<![endif]-->\n<!--[if IE 8]>\n<link rel=\"stylesheet\" type=\"text/css\" href=\""));
  {
    LINE(127,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssa9d13b30, "css/ie8.css\"/>\n<![endif]-->\n"));
  {
    bool tmp0;
    {
      LINE(130,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (equal(tmp3, NAMSTR(s_ss961bd8e8, "checkout")));
      if (!tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svs28c31d78, "section"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (equal(tmp7, NAMSTR(s_ss3152aae3, "user")));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss72b0599c, "<link rel=\"stylesheet\" type=\"text/css\" href=\""));
        {
          LINE(131,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssf6ce3a12, "css/jqueryUI.css\"/>\n"));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(134,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss38ce6203, "product")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss72b0599c, "<link rel=\"stylesheet\" type=\"text/css\" href=\""));
        {
          LINE(135,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss62cdf870, "css/colorbox.css\"/>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
  {
    LINE(138,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssecb38e39, "js/jquery.js\" type=\"text/javascript\"></script>\n"));
  {
    bool tmp0;
    {
      LINE(140,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (x_in_array(tmp3, s_sva2ea9cd6d));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(141,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssf18a3b9e, "js/imghover.js\" type=\"text/javascript\"></script>\n"));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(144,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs3de7d5c6, "loggedin"))));
      bool tmp3((toBoolean(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
      bool tmp4 = (!(tmp3));
      if (!tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svsf73aed91, "page"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (equal(tmp7, NAMSTR(s_ss13fc8aa0, "explorer")));
      }
      bool tmp8 = (tmp4);
      if (!tmp8) {
        MethodCallPackage mcp9;
        CVarRef obj9 = v__smarty_tpl;
        mcp9.methodCall((obj9), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit9 ATTRIBUTE_UNUSED = mcp9.ci;
        Variant tmp10(((mcp9.ci->getMeth1Args())(mcp9, 1, NAMVAR(s_svs28c31d78, "section"))));
        const Variant &tmp11((tmp10.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp8 = (equal(tmp11, NAMSTR(s_ss38ce6203, "product")));
      }
      bool tmp12 = (tmp8);
      if (!tmp12) {
        MethodCallPackage mcp13;
        CVarRef obj13 = v__smarty_tpl;
        mcp13.methodCall((obj13), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit13 ATTRIBUTE_UNUSED = mcp13.ci;
        Variant tmp14(((mcp13.ci->getMeth1Args())(mcp13, 1, NAMVAR(s_svsf73aed91, "page"))));
        const Variant &tmp15((tmp14.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp12 = (equal(tmp15, NAMSTR(s_ss3ed33f3e, "testimonials")));
      }
      tmp0 = (tmp12);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(145,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss647ce0a1, "js/typewatch.js\" type=\"text/javascript\"></script>\n"));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(148,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (equal(tmp3, NAMSTR(s_ss961bd8e8, "checkout")));
      if (!tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svs28c31d78, "section"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (equal(tmp7, NAMSTR(s_ss3152aae3, "user")));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(149,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss5af4c52c, "js/jqueryUI.js\" type=\"text/javascript\"></script>\n"));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(151,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssc5d38b8b, "js/jquery-select.js\" type=\"text/javascript\"></script>\n"));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(153,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssbc859092, "js/jquery-cycle.js\" type=\"text/javascript\"></script>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
  {
    LINE(156,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss7857b975, "js/jquery.hints.js\" type=\"text/javascript\"></script>\n"));
  {
    bool tmp0;
    {
      LINE(158,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (equal(tmp3, NAMSTR(s_ssb9b3027f, "userAmbassador")));
      if (!tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svsf73aed91, "page"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (equal(tmp7, NAMSTR(s_sscd8e4b77, "user-ambassador")));
      }
      bool tmp8 = (tmp4);
      if (!tmp8) {
        MethodCallPackage mcp9;
        CVarRef obj9 = v__smarty_tpl;
        mcp9.methodCall((obj9), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit9 ATTRIBUTE_UNUSED = mcp9.ci;
        Variant tmp10(((mcp9.ci->getMeth1Args())(mcp9, 1, NAMVAR(s_svsf73aed91, "page"))));
        const Variant &tmp11((tmp10.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp8 = (equal(tmp11, NAMSTR(s_ssc96b152f, "page-user-ambassador")));
      }
      tmp0 = (tmp8);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(159,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_sse5de5966, "js/ZeroClipboard.js\" type=\"text/javascript\"></script>\n<link type=\"text/css\" rel=\"stylesheet\" media=\"all\" href=\""));
        {
          LINE(161,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss9dc6b05c, "media/ZeroClipboard10.swf\" />\n"));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(164,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss38ce6203, "product")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(165,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss16be7786, "js/bezoom.js\" type=\"text/javascript\"></script>\n"));
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(168,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ssa18cb95b, "contact")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(169,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss66e3494b, "js/textarea.js\" type=\"text/javascript\"></script>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
  {
    LINE(172,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss32395dbe, "xjs/page:"));
  {
    bool tmp0;
    {
      LINE(173,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss38ce6203, "product")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss922e0029, "products"));
      }
    }
    else {
      {
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsf73aed91, "page"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
      }
    }
  }
  echo(NAMSTR(s_ss886bd5ef, "/pf-init.js\" type=\"text/javascript\"></script>\n"));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
  {
    LINE(175,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssb1174b10, "js/pf-global.js\" type=\"text/javascript\"></script>\n"));
  {
    bool tmp0;
    {
      LINE(177,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss961bd8e8, "checkout")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(178,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss6d66bccf, "js/checkout.js\" type=\"text/javascript\"></script>\n"));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(180,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss570e8be1, "js/pf-forms.js\" type=\"text/javascript\"></script>\n"));
      }
    }
    else {
      bool tmp0;
      {
        LINE(182,0);
        MethodCallPackage mcp1;
        CVarRef obj1 = v__smarty_tpl;
        mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
        Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
        const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp0 = (equal(tmp3, NAMSTR(s_ss3c3982d5, "start")));
      }
      if (tmp0) {
        {
          echo(NAMSTR(s_ss90452f1a, "<s"));
          echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
          {
            LINE(183,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = v__smarty_tpl;
            mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
            const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
            echo(tmp2);
          }
          echo(NAMSTR(s_ss0dd7b0b1, "js/pf-start.js\" type=\"text/javascript\"></script>\n"));
          echo(NAMSTR(s_ss90452f1a, "<s"));
          echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
          {
            LINE(185,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = v__smarty_tpl;
            mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
            const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
            echo(tmp2);
          }
          echo(NAMSTR(s_ss580c6452, "js/pf-explorer.js\" type=\"text/javascript\"></script>\n"));
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(188,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss3152aae3, "user")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(189,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssdb352a16, "js/pf-user.js\" type=\"text/javascript\"></script>\n"));
      }
    }
    else {
      bool tmp0;
      {
        LINE(191,0);
        MethodCallPackage mcp1;
        CVarRef obj1 = v__smarty_tpl;
        mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
        Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
        const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        bool tmp4 = (equal(tmp3, NAMSTR(s_ss13fc8aa0, "explorer")));
        if (!tmp4) {
          MethodCallPackage mcp5;
          CVarRef obj5 = v__smarty_tpl;
          mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
          Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svs28c31d78, "section"))));
          const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          tmp4 = (equal(tmp7, NAMSTR(s_ss38ce6203, "product")));
        }
        tmp0 = (tmp4);
      }
      if (tmp0) {
        {
          echo(NAMSTR(s_ss90452f1a, "<s"));
          echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
          {
            LINE(192,0);
            MethodCallPackage mcp0;
            CVarRef obj0 = v__smarty_tpl;
            mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
            Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
            const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
            echo(tmp2);
          }
          echo(NAMSTR(s_ss580c6452, "js/pf-explorer.js\" type=\"text/javascript\"></script>\n"));
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(195,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs28c31d78, "section"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ss38ce6203, "product")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbb6f613c, "cript src=\""));
        {
          LINE(196,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssb103ed83, "js/colorbox-min.js\" type=\"text/javascript\"></script>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss66d2232c, "\n"));
  {
    LINE(200,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(202,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  echo(NAMSTR(s_ssebb08c25, "</head>\n<body class=\""));
  {
    LINE(204,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs3a306a49, "body_classes"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss7eeb5b15, "\">\n\t"));
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(206,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ss8b48cfc8, "Nav.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(207,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svsafec9b51, "15423855914e8388332d48e9-81345237")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  echo(NAMSTR(s_ss8347c02c, "\n\n"));
  {
    bool tmp0;
    {
      LINE(213,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (x_in_array(tmp3, s_sva2ea9cd6d));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss72424127, "<div id=\"header\">\n\t"));
        {
          p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
          LINE(215,0);
          const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
          Variant tmp2((v__smarty_tpl));
          const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
          const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
          ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_sseb8bc800, "LoginPanel.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
          v__template = tmp0;
        }
        {
          LINE(216,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svs678532b5, "7390641004e8388334a0f04-23147784")), true);
          tmp_ref.unset();
        }
        v__tpl_stack.append((v__smarty_tpl));
        v__smarty_tpl.assignVal(v__template);
        echo(NAMSTR(s_ssfd6ffe21, "\t<div id=\"login-wrapper\" class=\"right\">\n\t\t<div id=\"login-tabs\">\n\t\t\t"));
        {
          bool tmp0;
          {
            LINE(222,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs3de7d5c6, "loggedin"))));
            bool tmp3((toBoolean(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
            tmp0 = (!(tmp3));
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ss4c067e76, "\t\t\t\t<a class=\"login\" id=\"login-open\" href=\""));
              {
                LINE(223,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_sse6aaf4c4, "user/login\" target=\"_self\"><img src=\""));
              {
                LINE(224,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ssd5cb60b6, "images/nav/nav_existing_member_login.png\" alt=\"Existing Members Login.\" /></a>\n\t\t\t"));
            }
          }
        }
        echo(NAMSTR(s_ss2a1d7133, "\t\t\t<a class=\"login\" href=\""));
        {
          LINE(227,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss7ba51894, "\" target=\"_self\"><img src=\""));
        {
          LINE(228,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss3233379e, "images/nav/nav_shop_petflow_now.png\" alt=\"Shop PetFlow Now!\"></a>\n\t\t</div>\n\n\t\t<div class=\"clear\"></div>\n\t</div>\n"));
        {
          LINE(234,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
        }
        {
          LINE(236,0);
          const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
          v__smarty_tpl.assignVal(tmp0);
        }
        unset(v__template);
        echo(NAMSTR(s_ssb395d35c, "\t<div class=\"logo\">\n\t\t<a href=\""));
        {
          LINE(238,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss895697aa, "\"><img alt=\"PetFlow Food For Life! - logo\" src=\""));
        {
          LINE(239,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss751288c9, "images/nav/logo.png\" /></a>\n\t</div>\n\n<div id=\"navigation-links\" class=\"navigation\"><a href=\""));
        {
          LINE(243,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss95e17f61, "site\">\n<img src=\""));
        {
          LINE(245,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss829ba216, "images/nav/nav_home"));
        {
          LINE(246,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss311461d9, "home"), tmp2) ? ((NAMSTR(s_ss13f9e6f4, "_on"))) : ((NAMSTR(s_ss00000000, "")))));
        }
        echo(NAMSTR(s_ssed717173, ".png\" width=\"74\" height=\"33\" alt=\"Home\" class=\""));
        {
          LINE(247,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss311461d9, "home"), tmp2) ? ((NAMSTR(s_ss00000000, ""))) : ((NAMSTR(s_ssf95df9d9, "navhover")))));
        }
        echo(NAMSTR(s_ss2e65efd7, "\" /></a><a href=\""));
        {
          LINE(248,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssfe15d4d4, "aboutus\"><img src=\""));
        {
          LINE(249,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssac776614, "images/nav/nav_about"));
        {
          LINE(250,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ssf63cc1ca, "about"), tmp2) ? ((NAMSTR(s_ss13f9e6f4, "_on"))) : ((NAMSTR(s_ss00000000, "")))));
        }
        echo(NAMSTR(s_ssaacdd4c9, ".png\" width=\"103\" height=\"33\"  alt=\"About Us\" class=\""));
        {
          LINE(251,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ssf63cc1ca, "about"), tmp2) ? ((NAMSTR(s_ss00000000, ""))) : ((NAMSTR(s_ssf95df9d9, "navhover")))));
        }
        echo(NAMSTR(s_ss2e65efd7, "\" /></a><a href=\""));
        {
          LINE(252,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss3104c9be, "howitworks\"><img src=\""));
        {
          LINE(253,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss49fdebf4, "images/nav/nav_howitworks"));
        {
          LINE(254,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss7b645084, "howitworks"), tmp2) ? ((NAMSTR(s_ss13f9e6f4, "_on"))) : ((NAMSTR(s_ss00000000, "")))));
        }
        echo(NAMSTR(s_sse1b950f3, ".png\" width=\"134\" height=\"33\" alt=\"How It Works\" class=\""));
        {
          LINE(255,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss7b645084, "howitworks"), tmp2) ? ((NAMSTR(s_ss00000000, ""))) : ((NAMSTR(s_ssf95df9d9, "navhover")))));
        }
        echo(NAMSTR(s_ss2e65efd7, "\" /></a><a href=\""));
        {
          LINE(256,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssa9ce7cb6, "brands\"><img src=\""));
        {
          LINE(257,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssc98dd29b, "images/nav/nav_brands"));
        {
          LINE(258,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ssb02816d6, "brands"), tmp2) ? ((NAMSTR(s_ss13f9e6f4, "_on"))) : ((NAMSTR(s_ss00000000, "")))));
        }
        echo(NAMSTR(s_ssfa42616f, ".png\" width=\"86\" height=\"33\" alt=\"Brands\" class=\""));
        {
          LINE(259,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ssb02816d6, "brands"), tmp2) ? ((NAMSTR(s_ss00000000, ""))) : ((NAMSTR(s_ssf95df9d9, "navhover")))));
        }
        echo(NAMSTR(s_ss2e65efd7, "\" /></a><a href=\""));
        {
          LINE(260,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss550706e6, "faq\"><img src=\""));
        {
          LINE(261,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss1466e043, "images/nav/nav_faq"));
        {
          LINE(262,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss44de197a, "faq"), tmp2) ? ((NAMSTR(s_ss13f9e6f4, "_on"))) : ((NAMSTR(s_ss00000000, "")))));
        }
        echo(NAMSTR(s_ss520dc1fc, ".png\" width=\"76\" height=\"33\" alt=\"FAQ\" class=\""));
        {
          LINE(263,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss44de197a, "faq"), tmp2) ? ((NAMSTR(s_ss00000000, ""))) : ((NAMSTR(s_ssf95df9d9, "navhover")))));
        }
        echo(NAMSTR(s_ss2e65efd7, "\" /></a><a href=\""));
        {
          LINE(264,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss9f0926b6, "shipping\"><img src=\""));
        {
          LINE(265,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss04d1d704, "images/nav/nav_shipping"));
        {
          LINE(266,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss32ec6ecd, "shipping"), tmp2) ? ((NAMSTR(s_ss13f9e6f4, "_on"))) : ((NAMSTR(s_ss00000000, "")))));
        }
        echo(NAMSTR(s_ss1581b79f, ".png\" width=\"136\" height=\"33\" alt=\"Shipping\" class=\""));
        {
          LINE(267,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss32ec6ecd, "shipping"), tmp2) ? ((NAMSTR(s_ss00000000, ""))) : ((NAMSTR(s_ssf95df9d9, "navhover")))));
        }
        echo(NAMSTR(s_ss2e65efd7, "\" /></a><a href=\""));
        {
          LINE(268,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_sse0a0c82d, "ambassador\"><img src=\""));
        {
          LINE(269,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssef714dac, "images/nav/nav_ambassador"));
        {
          LINE(270,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss8d9dc1b5, "ambassador"), tmp2) ? ((NAMSTR(s_ss13f9e6f4, "_on"))) : ((NAMSTR(s_ss00000000, "")))));
        }
        echo(NAMSTR(s_ss945dcb79, ".png\" width=\"130\" height=\"33\" alt=\"Ambassador\" class=\""));
        {
          LINE(271,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          echo((equal(NAMSTR(s_ss8d9dc1b5, "ambassador"), tmp2) ? ((NAMSTR(s_ss00000000, ""))) : ((NAMSTR(s_ssf95df9d9, "navhover")))));
        }
        echo(NAMSTR(s_ssab0f2520, "\" /></a></div>\n<div class=\"clear\"></div>\n</div>\n\n"));
      }
    }
    else {
      {
        echo(NAMSTR(s_ss8ce292af, "\n<div align=\"center\">\n\t"));
        {
          p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
          LINE(279,0);
          const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
          Variant tmp2((v__smarty_tpl));
          const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
          const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
          ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ssf047a49e, "LoginBar.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
          v__template = tmp0;
        }
        {
          LINE(280,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svs678532b5, "7390641004e8388334a0f04-23147784")), true);
          tmp_ref.unset();
        }
        v__tpl_stack.append((v__smarty_tpl));
        v__smarty_tpl.assignVal(v__template);
        echo(NAMSTR(s_ss1ea0be32, "<div id=\"loginBar-wrapper\">\n\t<div align=\"center\">\n\t<div id=\"loginBar\">\n\t\t<div class=\"left\">\n\t\t\t"));
        echo(NAMSTR(s_ss11485acf, "\t\t\t\tQuestions\? Click here for live chat\n or"));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssa5e6bcd0, "pan id=\"pf-phone-number\" style=\"font-size:12px;font-weight:bold;\"> call 1-888-316-7297</span>\n\t\t\t"));
        echo(NAMSTR(s_ss725c730d, "\t\t</div>\n\t\t<div class=\"right\">\n\t\t\t"));
        {
          bool tmp0;
          {
            LINE(296,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs3de7d5c6, "loggedin"))));
            bool tmp3((toBoolean(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
            tmp0 = (tmp3);
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ss6e43efd5, "\t    \t\t<a class=\"cart\" href=\""));
              {
                LINE(297,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs2cdae43a, "client_url_ssl"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ssb866c9a3, "checkout\">My Cart ("));
              {
                LINE(298,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svseef4be32, "cart"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss43b9301c, "item_count"), AccessFlags::Error_Key))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss977ad520, " item"));
              {
                bool tmp0;
                {
                  LINE(299,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__smarty_tpl;
                  mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svseef4be32, "cart"))));
                  const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss43b9301c, "item_count"), AccessFlags::Error_Key)));
                  tmp0 = (!equal(tmp3, 1LL));
                }
                if (tmp0) {
                  {
                    echo(NAMSTR(s_ssbbfc9c10, "s"));
                  }
                }
              }
              echo(NAMSTR(s_ss943b8c38, ")</a> \n\t\t\t\t&nbsp;<a href=\""));
              {
                LINE(300,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss17d6a12b, "\">Home</a>\n\t\t\t\t| <a href=\""));
              {
                LINE(302,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss3f3c1b35, "user/"));
              {
                LINE(303,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs3152aae3, "user"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).o_getPublic(NAMSTR(s_ssc4522be2, "id"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ssf7f70677, "/programs\">My Orders</a> \n\t\t\t\t| <a href=\""));
              {
                LINE(305,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss3f3c1b35, "user/"));
              {
                LINE(306,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs3152aae3, "user"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).o_getPublic(NAMSTR(s_ssc4522be2, "id"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ssd06837ed, "/edit\">Account Info</a> \n\t\t\t\t| <a href=\""));
              {
                LINE(308,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss441e2ffb, "logout\">Log out</a>\n\t\t\t"));
            }
          }
          else {
            {
              echo(NAMSTR(s_ss6e43efd5, "\t    \t\t<a class=\"cart\" href=\""));
              {
                LINE(311,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs2cdae43a, "client_url_ssl"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_sscb30f470, "checkout\">View Shopping Cart</a>\n\t\t\t\t\t| <a id=\"login-open\" href=\""));
              {
                LINE(313,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss6118627a, "user/login\">Existing Member</a>\n\t\t\t\t\t<a id=\"login-close\" href=\"#\" class=\"hide\" >X Close Login Panel</a>\n\t\t\t"));
            }
          }
        }
        echo(NAMSTR(s_ss52208515, "\t\t</div>\n\t</div>\n\t<div class=\"clear\"></div>\n\t</div>\n</div>\n\t<div id=\"page-wrapper\">\n\t<div id=\"page\">\n\n\t<div id=\"header\">\n\t\t<div id=\"login-wrapper\" class=\"right\">\n\t\t</div>\n"));
        {
          LINE(328,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
        }
        {
          LINE(330,0);
          const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
          v__smarty_tpl.assignVal(tmp0);
        }
        unset(v__template);
        echo(NAMSTR(s_ss47b6d45b, "\t<div class=\"logo\">\n\t\t<a target=\"_self\" href=\""));
        {
          LINE(332,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssc4828746, "\"><img height=\"86\" alt=\"PetFlow Food For Life! - logo\" src=\""));
        {
          LINE(333,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss2bf4362b, "images/headerLogo.jpg\" /></a>\n\t</div>\n\n\t"));
        {
          bool tmp0;
          {
            LINE(337,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
            const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
            bool tmp4 = (equal(tmp3, NAMSTR(s_ss3c3982d5, "start")));
            if (!tmp4) {
              MethodCallPackage mcp5;
              CVarRef obj5 = v__smarty_tpl;
              mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
              Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svsf73aed91, "page"))));
              const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              tmp4 = (equal(tmp7, NAMSTR(s_ss13fc8aa0, "explorer")));
            }
            bool tmp8 = (tmp4);
            if (!tmp8) {
              MethodCallPackage mcp9;
              CVarRef obj9 = v__smarty_tpl;
              mcp9.methodCall((obj9), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit9 ATTRIBUTE_UNUSED = mcp9.ci;
              Variant tmp10(((mcp9.ci->getMeth1Args())(mcp9, 1, NAMVAR(s_svs28c31d78, "section"))));
              const Variant &tmp11((tmp10.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              tmp8 = (equal(tmp11, NAMSTR(s_ss38ce6203, "product")));
            }
            tmp0 = (tmp8);
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ssc56ec666, "    \t<div class=\"navigation\" style=\"margin-top:0px;\">\n            <div id=\"font-size-switcher-header\" style=\"float:right;\">\n                <div class=\"font-size-switcher right\" style=\"padding:7px;color:white !important;\">\n                    "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ssc1763db5, "pan id=\"font-size-switcher-label\" style=\"font-size:12px;font-weight:bold;\">Font Size:</span>\n                    "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ss8ed73a33, "pan id=\"decrease-font-size\" style=\"font-size:10pt;\">A-</span>\n                    "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ssc8fee68b, "pan id=\"increase-font-size\" style=\"font-size:12pt;\">A+</span>\n                </div>\n            </div>\n        \t<div class=\"clear\"></div>\n            <div id=\"search-wrapper\" style=\"margin-top:0px;\">\n    "));
            }
          }
        }
        echo(NAMSTR(s_ss4a200415, "    "));
        {
          bool tmp0;
          {
            LINE(349,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
            const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
            bool tmp4 = (!equal(tmp3, NAMSTR(s_ss3c3982d5, "start")));
            if (tmp4) {
              MethodCallPackage mcp5;
              CVarRef obj5 = v__smarty_tpl;
              mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
              Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svsf73aed91, "page"))));
              const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              tmp4 = (!equal(tmp7, NAMSTR(s_ss13fc8aa0, "explorer")));
            }
            bool tmp8 = (tmp4);
            if (tmp8) {
              MethodCallPackage mcp9;
              CVarRef obj9 = v__smarty_tpl;
              mcp9.methodCall((obj9), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit9 ATTRIBUTE_UNUSED = mcp9.ci;
              Variant tmp10(((mcp9.ci->getMeth1Args())(mcp9, 1, NAMVAR(s_svs28c31d78, "section"))));
              const Variant &tmp11((tmp10.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              tmp8 = (!equal(tmp11, NAMSTR(s_ss38ce6203, "product")));
            }
            tmp0 = (tmp8);
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ss3bf8a886, "    \t<div class=\"navigation\">\n        \t<div id=\"search-wrapper\">\n    "));
            }
          }
        }
        echo(NAMSTR(s_ssb9b17a20, "\t\t<form id=\"search-form\" action=\""));
        {
          LINE(353,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssdfdfd5e8, "explorer\" method=\"get\">\n\t\t\t<input type=\"image\" value=\"submit\" class=\"right search-btn\" alt=\"Search and picture of a magnifying glass\" src=\""));
        {
          LINE(355,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss9ba71c1f, "images/buttons/search.gif\" />&nbsp;\n\t\t\t<input type=\"text\" class=\"input right\" id=\"search\" name=\"search\" title=\"Type here and search Food &amp; treats\" value=\""));
        {
          LINE(357,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs39df58c2, "search_string"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss7ea7d098, "\"/>\n\t\t\t<h1 class=\"white right\" id=\"search-title\">SEARCH FOOD &amp; TREATS</h1>\n\t\t</form>\n\t</div>\n\t<div class=\"clear\"></div>\n\t\n\t<div class=\"right taf\">\n\t\t"));
        {
          bool tmp0;
          {
            LINE(365,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
            const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
            bool tmp4((x_in_array(tmp3, s_svad721e751)));
            tmp0 = (!(tmp4));
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ss391e8e32, "\t\t"));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ssa38ca943, "pan class=\"smred\">New:</span> \n\t\t<a href=\""));
              {
                LINE(367,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ssdccc3caf, "tellafriend\">"));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ss6994fbf7, "pan class=\"blue-link\">Tell a friend about PetFlow!</span></a>\n\t\t"));
            }
          }
        }
        echo(NAMSTR(s_ss2fd282fa, "\t</div>\n</div>\n<div class=\"clear\"></div>\n</div><div><img src=\""));
        {
          LINE(373,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss30b3b64a, "images/headerdropshadow.jpg\" height=\"4\" alt=\"dropshadow\" border=\"0\"/></div>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss66d2232c, "\n"));
  {
    LINE(377,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(379,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  echo(NAMSTR(s_ss128fee7d, "\t<div id=\"content-wrapper\">\n\t\t<div style=\"height:580px;\" class=\"page-explorer\">\n\t\t<div style=\"height:580px;\" id=\"block-views--exp-Explorer-page_1\" class=\"block block-views region-odd odd region-count-1 count-3 with-block-editing\">\n \t\t<div style=\"height:580px;\" class=\"block-inner\">\n\t\t<div id=\"content\">\n            <form action=\""));
  {
    LINE(385,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss1ba484c2, "explorer\" accept-charset=\"UTF-8\" method=\"get\" id=\"views-exposed-form-Explorer-page-1\" style=\"margin-top:-1px;\">\n                <div>\n              \t\t"));
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(388,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ssef69ab4e, "FilterBar.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(389,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svsafec9b51, "15423855914e8388332d48e9-81345237")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  {
    bool tmp0;
    {
      LINE(393,0);
      bool tmp1((x_is_callable(NAMSTR(s_ss8aa02790, "smarty_modifier_escape"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php(false, NULL, g);
    }
  }
  echo(NAMSTR(s_ss41081af6, "<div class=\"views-exposed-form\">\n\t<div class=\"views-exposed-widgets clear-block\">\n\t\t"));
  {
    bool tmp0;
    {
      LINE(396,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs0fc37e03, "attributes"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (x_is_array(tmp3));
      if (tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth4Args())(mcp5, 4, NAMVAR(s_svs0fc37e03, "attributes"), null_varNR, true_varNR, false_varNR)));
        tmp4 = (!(tmp6.o_empty(NAMSTR(s_sse0c88471, "value"))));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ssd383ec82, "\t\t<ul class=\"topnav\">\n\t\t"));
        {
          LINE(398,0);
          const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
          v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss1491baad, "label"), (VarNR(tmp0)), true);
          tmp_ref.unset();
        }
        {
          LINE(399,0);
          const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
          v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ssdc3cbddc, "name"), (VarNR(tmp0)), true);
          tmp_ref.unset();
        }
        {
          LINE(400,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsc57d66e9, "drop_downs"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          v__from.assignVal(tmp2);
        }
        if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
          {
            x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
          }
        }
        {
          bool tmp0;
          {
            LINE(401,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
          }
          if (tmp0) {
            {
              {
                LOOP_COUNTER(1);
                for (ArrayIter iter3 = v__from.begin(null_string, true); !iter3.end(); ++iter3) {
                  LOOP_COUNTER_CHECK(1);
                  CVarRef map2_v = iter3.second();
                  CVarRef map2_n = iter3.first();
                  {
                    LINE(402,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1491baad, "label"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map2_v);
                    lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1491baad, "label"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map2_n);
                    tmp_ref.unset();
                  }
                  {
                    {
                      LINE(403,0);
                      const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss1491baad, "label"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_ss12e90587, "key"), true)));
                      lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ssdc3cbddc, "name"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_sse0c88471, "value"), tmp0);
                      tmp_ref.unset();
                    }
                    echo(NAMSTR(s_ss154f2997, "\t\t\t<li class=\"views-exposed-widget\" id=\"drop_container_"));
                    {
                      echo(LINE(405,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                      tmp_ref.unset();
                    }
                    echo(NAMSTR(s_ss2e869932, "\">\n\t\t\t\t<label>\n\t\t\t\t\t"));
                    {
                      echo(LINE(408,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss1491baad, "label"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                      tmp_ref.unset();
                    }
                    echo(NAMSTR(s_ss9d3eaee8, ": "));
                    echo(NAMSTR(s_ss90452f1a, "<s"));
                    echo(NAMSTR(s_ss4973775a, "pan>"));
                    {
                      const CallInfo *cit0 = NULL;
                      void *vt0 = NULL;
                      cit0 = g->GCI(smarty_modifier_escape);
                      if (!cit0) invoke_failed("smarty_modifier_escape", null_array, -1);
                      LINE(409,0);
                      MethodCallPackage mcp1;
                      CVarRef obj1 = v__smarty_tpl;
                      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsd6d2d392, "sel_attrs"))));
                      const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                      const Variant &tmp4((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(tmp3, AccessFlags::Error)));
                      echo(toString((cit0->getFunc2Args())(vt0, 2, tmp4, NAMVAR(s_svs2230855d, "html"))));
                      tmp_ref.unset();
                    }
                    echo(NAMSTR(s_ss773d666a, "</span>\n\t\t\t\t</label>\n\t\t\t\t<ul class=\"views-widget subnav\">\n\t\t\t\t"));
                    {
                      LINE(413,0);
                      const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                      v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss26c992d6, "nid"), (VarNR(tmp0)), true);
                      tmp_ref.unset();
                    }
                    {
                      LINE(414,0);
                      const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                      v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss2301e2fe, "title"), (VarNR(tmp0)), true);
                      tmp_ref.unset();
                    }
                    {
                      LINE(415,0);
                      MethodCallPackage mcp0;
                      CVarRef obj0 = v__smarty_tpl;
                      mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                      const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                      Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs0fc37e03, "attributes"))));
                      const Variant &tmp2((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                      const Variant &tmp3((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(tmp2, AccessFlags::Error)));
                      v__from.assignVal(tmp3);
                      tmp_ref.unset();
                    }
                    if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
                      {
                        x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
                      }
                    }
                    {
                      bool tmp0;
                      {
                        LINE(416,0);
                        MethodCallPackage mcp1;
                        CVarRef obj1 = v__smarty_tpl;
                        mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
                        const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                        tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
                      }
                      if (tmp0) {
                        {
                          {
                            LOOP_COUNTER(4);
                            for (ArrayIter iter6 = v__from.begin(null_string, true); !iter6.end(); ++iter6) {
                              LOOP_COUNTER_CHECK(4);
                              CVarRef map5_v = iter6.second();
                              CVarRef map5_n = iter6.first();
                              {
                                LINE(417,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss26c992d6, "nid"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map5_v);
                                lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss26c992d6, "nid"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map5_n);
                                tmp_ref.unset();
                              }
                              {
                                {
                                  LINE(418,0);
                                  const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss26c992d6, "nid"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_ss12e90587, "key"), true)));
                                  lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss2301e2fe, "title"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_sse0c88471, "value"), tmp0);
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ss8d5cc80b, "\t\t\t\t\t<li"));
                                {
                                  bool tmp0;
                                  {
                                    LINE(420,0);
                                    MethodCallPackage mcp1;
                                    CVarRef obj1 = v__smarty_tpl;
                                    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                                    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                                    Variant tmp2(((mcp1.ci->getMeth4Args())(mcp1, 4, NAMVAR(s_svs2230e95a, "_get"), null_varNR, true_varNR, false_varNR)));
                                    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                                    bool tmp4 = (!(empty(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), false), tmp3)));
                                    if (tmp4) {
                                      const Variant &tmp5((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss26c992d6, "nid"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                                      MethodCallPackage mcp6;
                                      CVarRef obj6 = v__smarty_tpl;
                                      mcp6.methodCall((obj6), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                                      const CallInfo *cit6 ATTRIBUTE_UNUSED = mcp6.ci;
                                      Variant tmp7(((mcp6.ci->getMeth1Args())(mcp6, 1, NAMVAR(s_svs2230e95a, "_get"))));
                                      const Variant &tmp8((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                                      const Variant &tmp9((tmp7.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(tmp8, AccessFlags::Error)));
                                      tmp4 = (x_in_array(tmp5, tmp9));
                                    }
                                    tmp0 = (tmp4);
                                    tmp_ref.unset();
                                  }
                                  if (tmp0) {
                                    {
                                      echo(NAMSTR(s_ss3af3aa73, " class=\"selected\""));
                                    }
                                  }
                                }
                                echo(NAMSTR(s_ss3062dc49, ">\n\t\t\t\t\t\t<input type=\"checkbox\" name=\""));
                                {
                                  echo(LINE(421,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ss3167b714, "[]\" value=\""));
                                {
                                  echo(LINE(422,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss26c992d6, "nid"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ss4c3e016b, "\" id=\""));
                                {
                                  echo(LINE(423,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ss935fd125, "-"));
                                {
                                  echo(LINE(424,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss26c992d6, "nid"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ss71e8cc86, "\" "));
                                {
                                  bool tmp0;
                                  {
                                    LINE(425,0);
                                    MethodCallPackage mcp1;
                                    CVarRef obj1 = v__smarty_tpl;
                                    mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                                    const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                                    Variant tmp2(((mcp1.ci->getMeth4Args())(mcp1, 4, NAMVAR(s_svs2230e95a, "_get"), null_varNR, true_varNR, false_varNR)));
                                    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                                    bool tmp4 = (!(empty(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), false), tmp3)));
                                    if (tmp4) {
                                      const Variant &tmp5((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss26c992d6, "nid"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                                      MethodCallPackage mcp6;
                                      CVarRef obj6 = v__smarty_tpl;
                                      mcp6.methodCall((obj6), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                                      const CallInfo *cit6 ATTRIBUTE_UNUSED = mcp6.ci;
                                      Variant tmp7(((mcp6.ci->getMeth1Args())(mcp6, 1, NAMVAR(s_svs2230e95a, "_get"))));
                                      const Variant &tmp8((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                                      const Variant &tmp9((tmp7.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(tmp8, AccessFlags::Error)));
                                      tmp4 = (x_in_array(tmp5, tmp9));
                                    }
                                    tmp0 = (tmp4);
                                    tmp_ref.unset();
                                  }
                                  if (tmp0) {
                                    {
                                      echo(NAMSTR(s_ss8f045511, " checked=\"checked\""));
                                    }
                                  }
                                }
                                echo(NAMSTR(s_sscec12e44, " />\n\t\t\t\t\t\t<label for=\""));
                                {
                                  echo(LINE(426,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ssdc3cbddc, "name"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ss935fd125, "-"));
                                {
                                  echo(LINE(427,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss26c992d6, "nid"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ss203d5f23, "\">\n\t\t\t\t\t\t\t"));
                                echo(NAMSTR(s_ss90452f1a, "<s"));
                                echo(NAMSTR(s_ss4c904334, "pan class=\"raquo\">&raquo;</span> "));
                                {
                                  const CallInfo *cit0 = NULL;
                                  void *vt0 = NULL;
                                  cit0 = g->GCI(smarty_modifier_escape);
                                  if (!cit0) invoke_failed("smarty_modifier_escape", null_array, -1);
                                  LINE(429,0);
                                  const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss2301e2fe, "title"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                                  echo(toString((cit0->getFunc2Args())(vt0, 2, tmp1, NAMVAR(s_svs2230855d, "html"))));
                                  tmp_ref.unset();
                                }
                                echo(NAMSTR(s_ssdd5e4ae2, "\n\t\t\t\t\t\t</label>\n\t\t\t\t\t</li>\n\t\t\t\t"));
                              }
                            }
                          }
                        }
                      }
                    }
                    echo(NAMSTR(s_ss0c7a95d6, "\t\t\t\t</ul>\n\t\t\t</li>\n\t\t"));
                  }
                }
              }
            }
          }
        }
        echo(NAMSTR(s_ssc421e22d, "\t\t\t<li class=\"apply\" style=\"width:0 !important;\"><input class=\"explorer-update\" type=\"image\" src=\""));
        {
          LINE(437,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss6a299edf, "images/explorer/update-dark.png\" name=\"update\" id=\"search_value\" value=\"Update\" /></li>\n\t\t</ul>\n\t\t<input type=\"hidden\" name=\"search\" id=\"attribute_form_search\" value=\"\" />\n\t\t"));
      }
    }
    else {
      {
        echo(NAMSTR(s_ss94535c48, "no widgets"));
      }
    }
  }
  echo(NAMSTR(s_ss8ae85d47, "\t</div>\n</div>\n\n"));
  {
    LINE(445,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(447,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  echo(NAMSTR(s_ss4e866c39, "                </div>\n                "));
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(449,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ss4b80c138, "Alerts.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(450,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svsafec9b51, "15423855914e8388332d48e9-81345237")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  {
    bool tmp0;
    {
      LINE(454,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs612e6805, "messages"))));
      bool tmp3((toBoolean(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
      tmp0 = (tmp3);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss8758fb54, "<div id=\"alerts\" class=\"messages\">\n<img class=\"left\" src=\""));
        {
          LINE(456,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss1ce1f4f3, "images/alerts/message.png\" height=\"22\" width=\"25\" alt=\"message icon\" border=\"0\"/>\n<ul id=\"alert-list\">\n"));
        {
          LINE(459,0);
          const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
          v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss1ada70d9, "alert"), (VarNR(tmp0)), true);
          tmp_ref.unset();
        }
        {
          LINE(460,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs612e6805, "messages"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          v__from.assignVal(tmp2);
        }
        if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
          {
            x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
          }
        }
        {
          bool tmp0;
          {
            LINE(461,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
          }
          if (tmp0) {
            {
              {
                LOOP_COUNTER(7);
                for (ArrayIter iter9 = v__from.begin(null_string, true); !iter9.end(); ++iter9) {
                  LOOP_COUNTER_CHECK(7);
                  CVarRef map8_v = iter9.second();
                  CVarRef map8_n = iter9.first();
                  {
                    LINE(462,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1ada70d9, "alert"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map8_v);
                    lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1ada70d9, "alert"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map8_n);
                    tmp_ref.unset();
                  }
                  {
                    echo(NAMSTR(s_ss8e072c34, "<li class=\"messages-item\">"));
                    {
                      echo(LINE(464,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss1ada70d9, "alert"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                      tmp_ref.unset();
                    }
                    echo(NAMSTR(s_ssbd1a77a2, "</li>\n"));
                  }
                }
              }
            }
          }
        }
        echo(NAMSTR(s_ss3fae7197, "</ul>\n<div class=\"clear\"></div>\n</div>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss66d2232c, "\n"));
  {
    bool tmp0;
    {
      LINE(472,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsdddffe70, "warnings"))));
      bool tmp3((toBoolean(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
      tmp0 = (tmp3);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss6f798a32, "<div id=\"alerts\" class=\"warnings\">\n<img class=\"left\" src=\""));
        {
          LINE(474,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss30f4a45e, "images/alerts/warning.png\" height=\"22\" width=\"21\" alt=\"message icon\" border=\"0\"/>\n<ul id=\"alert-list\">\n"));
        {
          LINE(477,0);
          const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
          v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss1ada70d9, "alert"), (VarNR(tmp0)), true);
          tmp_ref.unset();
        }
        {
          LINE(478,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsdddffe70, "warnings"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          v__from.assignVal(tmp2);
        }
        if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
          {
            x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
          }
        }
        {
          bool tmp0;
          {
            LINE(479,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
          }
          if (tmp0) {
            {
              {
                LOOP_COUNTER(10);
                for (ArrayIter iter12 = v__from.begin(null_string, true); !iter12.end(); ++iter12) {
                  LOOP_COUNTER_CHECK(10);
                  CVarRef map11_v = iter12.second();
                  CVarRef map11_n = iter12.first();
                  {
                    LINE(480,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1ada70d9, "alert"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map11_v);
                    lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1ada70d9, "alert"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map11_n);
                    tmp_ref.unset();
                  }
                  {
                    echo(NAMSTR(s_ss2c560e13, "<li class=\"warnings-item\">"));
                    {
                      echo(LINE(482,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss1ada70d9, "alert"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                      tmp_ref.unset();
                    }
                    echo(NAMSTR(s_ssbd1a77a2, "</li>\n"));
                  }
                }
              }
            }
          }
        }
        echo(NAMSTR(s_ss3fae7197, "</ul>\n<div class=\"clear\"></div>\n</div>\n"));
      }
    }
  }
  echo(NAMSTR(s_ss66d2232c, "\n"));
  {
    bool tmp0;
    {
      LINE(490,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs6de95122, "errors"))));
      bool tmp3((toBoolean(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
      tmp0 = (tmp3);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss1a76c0ad, "<div id=\"alerts\" class=\"errors\">\n<img class=\"left\" src=\""));
        {
          LINE(492,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss61b9cb96, "images/alerts/error.png\" height=\"20\" width=\"24\" alt=\"message icon\" border=\"0\"/>\n<ul id=\"alert-list\">\n"));
        {
          LINE(495,0);
          const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
          v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss1ada70d9, "alert"), (VarNR(tmp0)), true);
          tmp_ref.unset();
        }
        {
          LINE(496,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs6de95122, "errors"))));
          const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          v__from.assignVal(tmp2);
        }
        if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
          {
            x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
          }
        }
        {
          bool tmp0;
          {
            LINE(497,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
          }
          if (tmp0) {
            {
              {
                LOOP_COUNTER(13);
                for (ArrayIter iter15 = v__from.begin(null_string, true); !iter15.end(); ++iter15) {
                  LOOP_COUNTER_CHECK(13);
                  CVarRef map14_v = iter15.second();
                  CVarRef map14_n = iter15.first();
                  {
                    LINE(498,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1ada70d9, "alert"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map14_v);
                    lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss1ada70d9, "alert"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map14_n);
                    tmp_ref.unset();
                  }
                  {
                    echo(NAMSTR(s_ssf5ef1ba2, "<li class=\"errors-item\">"));
                    {
                      echo(LINE(500,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss1ada70d9, "alert"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                      tmp_ref.unset();
                    }
                    echo(NAMSTR(s_ssbd1a77a2, "</li>\n"));
                  }
                }
              }
            }
          }
        }
        echo(NAMSTR(s_ss3fae7197, "</ul>\n<div class=\"clear\"></div>\n</div>\n"));
      }
    }
  }
  {
    LINE(507,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(509,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  echo(NAMSTR(s_ss74abc232, "                <div id=\"welcome-wrapper\">\n                \n                    <div class=\"welcome-outer\">\n                        <div class=\"welcome-inner\">\n                            <div class=\"left\" style=\"width:570px;\">\n                                "));
  {
    bool tmp0;
    {
      LINE(515,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs24363f97, "utm_source"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (!same(tmp3, NAMSTR(s_ss00000000, "")));
      if (tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svs24363f97, "utm_source"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (x_is_array(tmp7));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss69aef047, "                                    "));
        {
          bool tmp0;
          {
            LINE(516,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth4Args())(mcp1, 4, NAMVAR(s_svs24363f97, "utm_source"), null_varNR, true_varNR, false_varNR)));
            bool tmp3 = (isset(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), false), NAMSTR(s_ssb0a970c3, "pages"), true));
            if (tmp3) {
              MethodCallPackage mcp4;
              CVarRef obj4 = v__smarty_tpl;
              mcp4.methodCall((obj4), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit4 ATTRIBUTE_UNUSED = mcp4.ci;
              Variant tmp5(((mcp4.ci->getMeth4Args())(mcp4, 4, NAMVAR(s_svs24363f97, "utm_source"), null_varNR, true_varNR, false_varNR)));
              MethodCallPackage mcp6;
              CVarRef obj6 = v__smarty_tpl;
              mcp6.methodCall((obj6), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit6 ATTRIBUTE_UNUSED = mcp6.ci;
              Variant tmp7(((mcp6.ci->getMeth4Args())(mcp6, 4, NAMVAR(s_svsd0c693be, "egCMSCurrentPage"), null_varNR, true_varNR, false_varNR)));
              const Variant &tmp8((tmp7.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              tmp3 = (isset(tmp5.o_getPublic(NAMSTR(s_sse0c88471, "value"), false).rvalRef(NAMSTR(s_ssb0a970c3, "pages"), tmp_ref, AccessFlags::Key), tmp8));
            }
            bool tmp9 = (tmp3);
            if (tmp9) {
              MethodCallPackage mcp10;
              CVarRef obj10 = v__smarty_tpl;
              mcp10.methodCall((obj10), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit10 ATTRIBUTE_UNUSED = mcp10.ci;
              Variant tmp11(((mcp10.ci->getMeth4Args())(mcp10, 4, NAMVAR(s_svs24363f97, "utm_source"), null_varNR, true_varNR, false_varNR)));
              MethodCallPackage mcp12;
              CVarRef obj12 = v__smarty_tpl;
              mcp12.methodCall((obj12), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit12 ATTRIBUTE_UNUSED = mcp12.ci;
              Variant tmp13(((mcp12.ci->getMeth4Args())(mcp12, 4, NAMVAR(s_svsd0c693be, "egCMSCurrentPage"), null_varNR, true_varNR, false_varNR)));
              const Variant &tmp14((tmp13.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
              tmp9 = (isset(tmp11.o_getPublic(NAMSTR(s_sse0c88471, "value"), false).rvalRef(NAMSTR(s_ssb0a970c3, "pages"), tmp_ref, AccessFlags::Key).rvalRef(tmp14, tmp_ref).rvalRef(NAMSTR(s_ssaea4e4f1, "content_zone_overrides"), tmp_ref, AccessFlags::Key), NAMSTR(s_ssecef6406, "welcome_inner_left"), true));
            }
            tmp0 = (tmp9);
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ss5cab1418, "                                        "));
              {
                LINE(517,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs24363f97, "utm_source"))));
                MethodCallPackage mcp2;
                CVarRef obj2 = v__smarty_tpl;
                mcp2.methodCall((obj2), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit2 ATTRIBUTE_UNUSED = mcp2.ci;
                Variant tmp3(((mcp2.ci->getMeth1Args())(mcp2, 1, NAMVAR(s_svsd0c693be, "egCMSCurrentPage"))));
                const Variant &tmp4((tmp3.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                const String &tmp5((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalRef(NAMSTR(s_ssb0a970c3, "pages"), tmp_ref, AccessFlags::Error_Key).rvalRef(tmp4, tmp_ref, AccessFlags::Error).rvalRef(NAMSTR(s_ssaea4e4f1, "content_zone_overrides"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssecef6406, "welcome_inner_left"), AccessFlags::Error_Key))));
                echo(tmp5);
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ss41297061, "\n                                    "));
            }
          }
          else {
            {
              echo(NAMSTR(s_ss5cab1418, "                                        "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ss4cab9670, "pan class=\"dog-lft\"><img src=\""));
              {
                LINE(520,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss2ba3487c, "images/start/dog2.gif\" alt=\"dog\" /></span><h1 id=\"start-title\">Welcome to PetFlow!</h1>\n                                        <div class=\"newh2\">Your trips to the store are over!</div>\n                                    "));
            }
          }
        }
        echo(NAMSTR(s_ss006ef871, "                                "));
      }
    }
    else {
      {
        echo(NAMSTR(s_ss69aef047, "                                    "));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ss4cab9670, "pan class=\"dog-lft\"><img src=\""));
        {
          LINE(525,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ssee4846e5, "images/start/dog2.gif\" alt=\"dog\" /></span><h1 id=\"start-title\">Welcome to PetFlow!</h1>\n                                    <div class=\"newh2\">Your trips to the store are over!</div>\n                                "));
      }
    }
  }
  echo(NAMSTR(s_ss9ada093e, "                                <p style=\"font-family: Verdana,Arial,Helvetica,sans-serif; color: rgb(0, 0, 0); font-size: 15px;padding-top:15px;line-height: 22px\">\n                                    <div class=\"order-from-petflow\">Order from PetFlow in 3 easy steps!</div>\n                                    "));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ss8f397bc2, "pan class=\"onetwothreestyles\"><img src=\""));
  {
    LINE(531,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssae4ec854, "images/start/1.gif\" alt=\"1\" /> Browse by brand below</span><br />\n                                    "));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ss8f397bc2, "pan class=\"onetwothreestyles\"><img src=\""));
  {
    LINE(533,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss2210d62e, "images/start/2.gif\" alt=\"2\" /> Find the items you need</span><br />\n                                    "));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ss8f397bc2, "pan class=\"onetwothreestyles\"><img src=\""));
  {
    LINE(535,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssd451bd48, "images/start/3.gif\" alt=\"3\" /> Setup a delivery schedule &amp; checkout</span>\n                                </p>\n                            </div>\n                            <div id=\"movie-placeholder\" class=\"right\"><object style=\"height: 273px; width: 330px\"><param name=\"movie\" value=\"http://www.youtube.com/v/MTXTO_XzBnE\"><param name=\"allowFullScreen\" value=\"true\"><param name=\"wmode\" value=\"transpar"));
  echo(NAMSTR(s_ss6e85abaa, "ent\"><embed src=\"http://www.youtube.com/v/MTXTO_XzBnE\" type=\"application/x-shockwave-flash\" wmode=\"transparent\" allowfullscreen=\"true\" width=\"330\" height=\"273\"></object></div>\n                            <div class=\"clear\"></div>\n                        </div>   \n                    </div> \n                    \n                    <div class=\"browse-the-brands-outer corner-8 left\">\n                       "));
  echo(NAMSTR(s_ss6aee4850, " <div class=\"browse-the-brands corner-8\">\n                            <div class=\"in-browse-the-brands txt-center\">\n                            PetFlow's recommended &amp; featured brands:\n                            </div>\n                            <div class=\"icons-in-browse-the-brands txt-center corner-8\">\n                                "));
  {
    LINE(550,0);
    const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
    v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss8a3a3b77, "brand"), (VarNR(tmp0)), true);
    tmp_ref.unset();
  }
  {
    LINE(551,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs9840d72e, "featured_brands"))));
    const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
    v__from.assignVal(tmp2);
  }
  if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
    {
      x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
    }
  }
  {
    bool tmp0;
    {
      LINE(552,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(16);
          for (ArrayIter iter18 = v__from.begin(null_string, true); !iter18.end(); ++iter18) {
            LOOP_COUNTER_CHECK(16);
            CVarRef map17_v = iter18.second();
            CVarRef map17_n = iter18.first();
            {
              LINE(553,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss8a3a3b77, "brand"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map17_v);
              lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss8a3a3b77, "brand"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map17_n);
              tmp_ref.unset();
            }
            {
              echo(NAMSTR(s_ss9b1e5a96, "                                    <div class=\"outer-image-icons-in-browse-the-brands corner-8\">\n                                        "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_sse9efd386, "pan style=\"z-index:1000;\" class=\"image-icons-in-browse-the-brands corner-8\">\n                                            <a href=\""));
              {
                LINE(557,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ssd9407e2a, "explorer/"));
              {
                LINE(558,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8a3a3b77, "brand"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss9f6b3b79, "slug"), AccessFlags::Error_Key))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss2a2f131a, "\">\n                                                <img id=\"img-brand-"));
              {
                LINE(560,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8a3a3b77, "brand"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss26c992d6, "nid"), AccessFlags::Error_Key))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss53350089, "\" alt=\""));
              {
                const CallInfo *cit0 = NULL;
                void *vt0 = NULL;
                cit0 = g->GCI(smarty_modifier_escape);
                if (!cit0) invoke_failed("smarty_modifier_escape", null_array, -1);
                LINE(561,0);
                MethodCallPackage mcp1;
                CVarRef obj1 = v__smarty_tpl;
                mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs8a3a3b77, "brand"))));
                const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss2301e2fe, "title"), AccessFlags::Error_Key)));
                echo(toString((cit0->getFunc2Args())(vt0, 2, tmp3, NAMVAR(s_svs2230855d, "html"))));
              }
              echo(NAMSTR(s_ssee952a3a, "\" width=\"75\" height=\"75\" src=\""));
              {
                LINE(562,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs8a3a3b77, "brand"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss360cc047, "img_thumb"), AccessFlags::Error_Key))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ss1560c3fe, "\" />\n                                            </a>\n                                        </span>\n                                    </div>\n                                "));
            }
          }
        }
      }
    }
  }
  echo(NAMSTR(s_sseca92984, "                            </div>\n                            <div class=\"spacer in-browse-the-brands txt-center\">\n                            <a href=\"#brand-select\" class=\"start-brand-select\"><img src=\""));
  {
    LINE(570,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss84dc0a8a, "images/start/showmorebrands_btn_noshadow2.gif\" alt=\"Show More Brands\" /></a>\n                            </div>\n                        </div>\n                    </div>\n                    \n                    "));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ss9970647b, "pan class=\"catImg\"><img src=\""));
  {
    LINE(576,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssbc58da41, "images/start/cat3.gif\" alt=\"cat\" /></span>\n                    <div class=\"clear\"></div>\n                    \n                    <div class=\"start-rght\">\n                        <div class=\"z5\">\n                            <img src=\""));
  {
    LINE(582,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss6072f056, "images/start/yellowscroll.gif\" alt=\"\" />\n                        </div>\n                        <div class=\"yell-banner txt-center\">\n                            "));
  {
    bool tmp0;
    {
      LINE(586,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs24363f97, "utm_source"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (!same(tmp3, NAMSTR(s_ss00000000, "")));
      if (tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svs24363f97, "utm_source"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (x_is_array(tmp7));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss006ef871, "                                "));
        {
          bool tmp0;
          {
            LINE(587,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth4Args())(mcp1, 4, NAMVAR(s_svs24363f97, "utm_source"), null_varNR, true_varNR, false_varNR)));
            bool tmp3 = (isset(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), false), NAMSTR(s_ss0c1aef4e, "variables"), true));
            if (tmp3) {
              MethodCallPackage mcp4;
              CVarRef obj4 = v__smarty_tpl;
              mcp4.methodCall((obj4), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit4 ATTRIBUTE_UNUSED = mcp4.ci;
              Variant tmp5(((mcp4.ci->getMeth4Args())(mcp4, 4, NAMVAR(s_svs24363f97, "utm_source"), null_varNR, true_varNR, false_varNR)));
              tmp3 = (isset(tmp5.o_getPublic(NAMSTR(s_sse0c88471, "value"), false).rvalRef(NAMSTR(s_ss0c1aef4e, "variables"), tmp_ref, AccessFlags::Key), NAMSTR(s_ssfa63123c, "coupon_code"), true));
            }
            bool tmp6 = (tmp3);
            if (tmp6) {
              MethodCallPackage mcp7;
              CVarRef obj7 = v__smarty_tpl;
              mcp7.methodCall((obj7), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
              const CallInfo *cit7 ATTRIBUTE_UNUSED = mcp7.ci;
              Variant tmp8(((mcp7.ci->getMeth4Args())(mcp7, 4, NAMVAR(s_svs24363f97, "utm_source"), null_varNR, true_varNR, false_varNR)));
              tmp6 = (isset(tmp8.o_getPublic(NAMSTR(s_sse0c88471, "value"), false).rvalRef(NAMSTR(s_ss0c1aef4e, "variables"), tmp_ref, AccessFlags::Key), NAMSTR(s_ss2401b4c3, "coupon_min_threshold"), true));
            }
            tmp0 = (tmp6);
            tmp_ref.unset();
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ss69aef047, "                                    "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ssefe241b6, "pan class=\"z10000\">\n                                        "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_sse0806145, "pan class=\"redBold\">TODAY ONLY:</span> Free Shipping on "));
              {
                LINE(589,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs24363f97, "utm_source"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalRef(NAMSTR(s_ss0c1aef4e, "variables"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ss2401b4c3, "coupon_min_threshold"), AccessFlags::Error_Key))));
                echo(tmp2);
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ss5fb42198, " \n                                            scheduled deliveries. Use code: "));
              {
                LINE(591,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs24363f97, "utm_source"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalRef(NAMSTR(s_ss0c1aef4e, "variables"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ssfa63123c, "coupon_code"), AccessFlags::Error_Key))));
                echo(tmp2);
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ss525fb030, "\n                                    </span>\n                                "));
            }
          }
          else {
            {
              echo(NAMSTR(s_ss69aef047, "                                    "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ssefe241b6, "pan class=\"z10000\">\n                                        "));
              echo(NAMSTR(s_ss90452f1a, "<s"));
              echo(NAMSTR(s_ss106be0a3, "pan class=\"redBold\">TODAY ONLY:</span> Free Shipping on $49+ scheduled deliveries. Use code: PFLW49\n                                    </span>\n                                "));
            }
          }
        }
        echo(NAMSTR(s_ss011275a8, "                            "));
      }
    }
    else {
      {
        echo(NAMSTR(s_ss006ef871, "                                "));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ssbd86b1f2, "pan class=\"z10000\">\n                                    "));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ss58fa8233, "pan class=\"redBold\">TODAY ONLY:</span> Free Shipping on $49+ scheduled deliveries. Use code: PFLW49\n                                </span>\n                            "));
      }
    }
  }
  echo(NAMSTR(s_ss1e06e824, "                        </div>\n                        \n                        <div class=\"under-yell-banner txt-center\">\n                            All other orders ship for just $4.95\n                        </div>\n                        <div class=\"new-skip\">\n                            <a href=\""));
  {
    LINE(610,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss2e299ba3, "explorer\" class=\"skip\">Skip, just show me products!</a>\n                        </div>\n                        <div class=\"clear\"></div>\n                    </div>\n                    \n                </div>\n            </form>\n            <div class=\"the-spacer\"></div>\n            <div class=\"clear\"></div>\n        </div>\n        </div>\n    \t</div>\n\t\t</div>\n        <div class=\"clear\"></div>\n        <div id=\"start-o"));
  echo(NAMSTR(s_sse16177f8, "ptions\">\n            "));
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(626,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ss6c7adcc8, "BrandSplash/Brands.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(627,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svsafec9b51, "15423855914e8388332d48e9-81345237")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  {
    bool tmp0;
    {
      LINE(631,0);
      bool tmp1((x_is_callable(NAMSTR(s_ss8aa02790, "smarty_modifier_escape"))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      pm_php$$home$petflowdeveloper$Develop$eglooframework$Library$Smarty3$libs$plugins$modifier_escape_php(false, NULL, g);
    }
  }
  echo(NAMSTR(s_ssa8702386, "<a name=\"brand-select\" href=\"\"></a>\n"));
  {
    bool tmp0;
    {
      LINE(633,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (equal(tmp3, NAMSTR(s_ssb02816d6, "brands")));
      if (!tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (equal(tmp7, NAMSTR(s_ss92318671, "newsletter")));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss22d3243d, "<div id=\"brands-wrapper\" class=\"blue corner-8 "));
        {
          bool tmp0;
          {
            LINE(634,0);
            MethodCallPackage mcp1;
            CVarRef obj1 = v__smarty_tpl;
            mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
            const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
            Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs8c76de67, "selected_nav"))));
            const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
            tmp0 = (equal(tmp3, NAMSTR(s_ss92318671, "newsletter")));
          }
          if (tmp0) {
            {
              echo(NAMSTR(s_ssb5a9207f, "shadow"));
            }
          }
        }
        echo(NAMSTR(s_ssc4c4e84f, "\">\n"));
      }
    }
    else {
      {
        echo(NAMSTR(s_ss933e24e4, "<div id=\"brands-wrapper\" class=\"hide blue corner-8 \">\n\t<div id=\"brands-title\" class=\"corner-8800 blue-light\">\n\t\t<h1 id=\"browse-brands\" class=\"text-shadow\">Browse Brands (Option 2 Selected)</h1>\n\t</div>\n"));
      }
    }
  }
  echo(NAMSTR(s_ssc21701d1, "\t<form method=\"get\" action=\""));
  {
    LINE(641,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss78a7be78, "explorer\" id=\"brand-select-form\">\n\t\t<div class=\"right\" id=\"brands-select\">\n\t\t\t<input type=\"image\" src=\""));
  {
    LINE(644,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss9a438994, "images/buttons/go.png\" class=\"right\" value=\"Go\" style=\"margin-top: 8px; margin-right: 15px;\" />\n\n\t\t\t<!-- input type=\"submit\" class=\"right quicksrch_btn\" value=\"Go\" onclick='brandsForm()' style=\"margin-top: 8px; margin-right: 15px;\" /-->\n\n\t \t\t"));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ss3c1a6925, "elect style=\"float: right; margin-top: 13px; margin-right: 10px;\" id=\"edit-brand\" class=\"form-select\" name=\"brands[]\">\n\t\t\t\t\t<option selected=\"selected\" value=\"\">-Choose Brand-</option>\n\t\t\t\t"));
  {
    LINE(651,0);
    const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
    v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_sseb3c6312, "row"), (VarNR(tmp0)), true);
    tmp_ref.unset();
  }
  {
    LINE(652,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsb02816d6, "brands"))));
    const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
    v__from.assignVal(tmp2);
  }
  if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
    {
      x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
    }
  }
  {
    bool tmp0;
    {
      LINE(653,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(19);
          for (ArrayIter iter21 = v__from.begin(null_string, true); !iter21.end(); ++iter21) {
            LOOP_COUNTER_CHECK(19);
            CVarRef map20_v = iter21.second();
            CVarRef map20_n = iter21.first();
            {
              LINE(654,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map20_v);
              lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map20_n);
              tmp_ref.unset();
            }
            {
              echo(NAMSTR(s_ss21058c13, "\t\t\t\t"));
              {
                LINE(656,0);
                const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss8a3a3b77, "brand"), (VarNR(tmp0)), true);
                tmp_ref.unset();
              }
              {
                LINE(657,0);
                const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_sseb3c6312, "row"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                v__from.assignVal(tmp0);
                tmp_ref.unset();
              }
              if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
                {
                  x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
                }
              }
              {
                bool tmp0;
                {
                  LINE(658,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__smarty_tpl;
                  mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
                }
                if (tmp0) {
                  {
                    {
                      LOOP_COUNTER(22);
                      for (ArrayIter iter24 = v__from.begin(null_string, true); !iter24.end(); ++iter24) {
                        LOOP_COUNTER_CHECK(22);
                        CVarRef map23_v = iter24.second();
                        CVarRef map23_n = iter24.first();
                        {
                          LINE(659,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss8a3a3b77, "brand"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map23_v);
                          lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss8a3a3b77, "brand"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map23_n);
                          tmp_ref.unset();
                        }
                        {
                          echo(NAMSTR(s_ss3ad9e7d3, "\t\t\t\t\t<option value=\""));
                          {
                            echo(LINE(661,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss9f6b3b79, "slug"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss66ff4b88, "\" > "));
                          {
                            echo(LINE(662,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss2301e2fe, "title"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss17e1f291, "</option>\n\t\t\t\t"));
                        }
                      }
                    }
                  }
                }
              }
              echo(NAMSTR(s_ss21058c13, "\t\t\t\t"));
            }
          }
        }
      }
    }
  }
  echo(NAMSTR(s_ss78f97b47, "\t\t\t</select><!-- end drop down for brands -->\n\t\t</div>\n\t\t<div class=\"clear-right\"></div>\n\n\t\t<table id=\"brand-select-list\">\n\t\t<tbody>\n\t\t"));
  {
    LINE(672,0);
    const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
    v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_sseb3c6312, "row"), (VarNR(tmp0)), true);
    tmp_ref.unset();
  }
  {
    LINE(673,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svsb02816d6, "brands"))));
    const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
    v__from.assignVal(tmp2);
  }
  if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
    {
      x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
    }
  }
  {
    LINE(674,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, v__from)));
    lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss53c9c786, "total"), tmp1);
    tmp_ref.unset();
  }
  {
    LINE(675,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_ss51f837b3, "iteration"), 0LL);
    tmp_ref.unset();
  }
  {
    bool tmp0;
    {
      LINE(676,0);
      const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_sseb3c6312, "row"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_ss53c9c786, "total"), true)));
      tmp0 = (more(tmp1, 0LL));
      tmp_ref.unset();
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(25);
          for (ArrayIter iter27 = v__from.begin(null_string, true); !iter27.end(); ++iter27) {
            LOOP_COUNTER_CHECK(25);
            CVarRef map26_v = iter27.second();
            CVarRef map26_n = iter27.first();
            {
              LINE(677,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map26_v);
              lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map26_n);
              tmp_ref.unset();
            }
            {
              {
                LINE(678,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)))).o_assign_op<void,297>(NAMSTR(s_ss51f837b3, "iteration"), null_variant);
                tmp_ref.unset();
              }
              {
                LINE(679,0);
                const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_sseb3c6312, "row"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_ss51f837b3, "iteration"), true)));
                const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_sseb3c6312, "row"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_ss53c9c786, "total"), true)));
                bool tmp2((same(tmp0, tmp1)));
                lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss6d41e4dc, "last"), tmp2);
                tmp_ref.unset();
              }
              {
                LINE(680,0);
                const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_sseb3c6312, "row"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_ss6d41e4dc, "last"), true)));
                lval(lval(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss675664bf, "smarty"), AccessFlags::CheckExist_Key)).o_lval(NAMSTR(s_sse0c88471, "value"), tmp_ref).lvalAt(NAMSTR(s_ss5e0a0be6, "foreach"), AccessFlags::CheckExist_Key)).lvalAt(NAMSTR(s_ss1f4d75dd, "brand_loop"), AccessFlags::CheckExist_Key)).set(NAMSTR(s_ss6d41e4dc, "last"), (tmp0), true);
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ss803bffd0, "\t\t\t<tr valign=\"top\">\n\t\t\t"));
              {
                LINE(683,0);
                const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss8a3a3b77, "brand"), (VarNR(tmp0)), true);
                tmp_ref.unset();
              }
              {
                LINE(684,0);
                const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_sseb3c6312, "row"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                v__from.assignVal(tmp0);
                tmp_ref.unset();
              }
              if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
                {
                  x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
                }
              }
              {
                bool tmp0;
                {
                  LINE(685,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__smarty_tpl;
                  mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
                }
                if (tmp0) {
                  {
                    {
                      LOOP_COUNTER(28);
                      for (ArrayIter iter30 = v__from.begin(null_string, true); !iter30.end(); ++iter30) {
                        LOOP_COUNTER_CHECK(28);
                        CVarRef map29_v = iter30.second();
                        CVarRef map29_n = iter30.first();
                        {
                          LINE(686,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss8a3a3b77, "brand"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map29_v);
                          lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss8a3a3b77, "brand"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map29_n);
                          tmp_ref.unset();
                        }
                        {
                          echo(NAMSTR(s_ssafd73bf9, "\t\t\t\t<td width=\"13%\" style=\"v-align:center;text-align:center\">\n\t\t\t\t\t<label for=\"brand-"));
                          {
                            echo(LINE(689,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss26c992d6, "nid"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_sse115b95f, "\">\n\t\t\t\t\t\t<img alt=\""));
                          {
                            const CallInfo *cit0 = NULL;
                            void *vt0 = NULL;
                            cit0 = g->GCI(smarty_modifier_escape);
                            if (!cit0) invoke_failed("smarty_modifier_escape", null_array, -1);
                            LINE(691,0);
                            const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss2301e2fe, "title"), AccessFlags::Error_Key)));
                            echo(toString((cit0->getFunc2Args())(vt0, 2, tmp1, NAMVAR(s_svs2230855d, "html"))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss1c2eb937, "\" src=\""));
                          {
                            echo(LINE(692,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss360cc047, "img_thumb"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss9f986b30, "\" width=\"70\" height=\"70\" id=\"img-brand-"));
                          {
                            echo(LINE(693,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss26c992d6, "nid"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss65669705, "\" />\n\t\t\t\t\t\t<br />\n\t\t\t\t\t\t<input type=\"checkbox\" value=\""));
                          {
                            echo(LINE(696,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss2301e2fe, "title"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss43691c06, "\" class=\"brand-check\" id=\"brand-"));
                          {
                            echo(LINE(697,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss26c992d6, "nid"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ssc2ed08fb, "\" name=\"brands[]\"/>\n\t\t\t\t\t</label>\n\t\t\t\t\t<a href=\""));
                          {
                            LINE(700,0);
                            MethodCallPackage mcp0;
                            CVarRef obj0 = v__smarty_tpl;
                            mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                            Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                            const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                            echo(tmp2);
                          }
                          echo(NAMSTR(s_ssd9407e2a, "explorer/"));
                          {
                            echo(LINE(701,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss9f6b3b79, "slug"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss19e8137c, "\">"));
                          {
                            echo(LINE(702,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss8a3a3b77, "brand"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss2301e2fe, "title"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss0b89e914, "</a>\n\t\t\t\t</td>\n\t\t\t"));
                        }
                      }
                    }
                  }
                }
              }
              echo(NAMSTR(s_ss4f083d71, "\t\t\t</tr>\n\t\t\t"));
              {
                bool tmp0;
                {
                  LINE(707,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__smarty_tpl;
                  mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs675664bf, "smarty"))));
                  bool tmp3((toBoolean(tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalRef(NAMSTR(s_ss5e0a0be6, "foreach"), tmp_ref, AccessFlags::Error_Key).rvalRef(NAMSTR(s_ss1f4d75dd, "brand_loop"), tmp_ref, AccessFlags::Error_Key).rvalAt(NAMSTR(s_ss6d41e4dc, "last"), AccessFlags::Error_Key))));
                  tmp0 = (!(tmp3));
                  tmp_ref.unset();
                }
                if (tmp0) {
                  {
                    echo(NAMSTR(s_ssfbbd6f32, "\t\t\t\t<tr><td><br /></td></tr>\n\t\t\t"));
                  }
                }
              }
              echo(NAMSTR(s_ss391e8e32, "\t\t"));
            }
          }
        }
      }
    }
  }
  echo(NAMSTR(s_sse43f65df, "\t\t</tbody>\n\t\t</table>\n\n\t\t<div class=\"right start-buttons\">\n \t\t\t<a href=\""));
  {
    LINE(715,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss24130377, "explorer\"><img alt=\"skip\" src=\""));
  {
    LINE(716,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_sscceea5a6, "images/buttons/skip.png\" /></a>\n\t \t\t<input type=\"image\" src=\""));
  {
    LINE(718,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss1e87680c, "images/buttons/show_products.png\" value=\"Show Products\" class=\"quicksrch\" />\n\t\t</div>\n\n\t\t<div class=\"clear\"></div>\n\t</form>\n\n</div>\n\n"));
  {
    LINE(727,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(729,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  echo(NAMSTR(s_ssfd7e1ac0, "            "));
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(730,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ssff3e7943, "Start/QuickSelect.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(731,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svsafec9b51, "15423855914e8388332d48e9-81345237")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  echo(NAMSTR(s_ss8ab7b480, "<a name=\"quick-select\" href=\"\"></a><a name=\"special-conditions\" href=\"\"></a>\n<div id=\"quick-wrapper\" class=\"hide yellow corner-8 \">\n\t<div id=\"quick-title\" class=\"corner-8800 yellow-dark\">\n\t\t<h1 id=\"quick-select\" class=\"text-shadow\">Quick Select (Option 1 Selected)</h1>\n\t</div>\n    <form id=\"quick-select-form\" action=\""));
  {
    LINE(740,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss22eb41bf, "explorer\" method=\"get\">\n\t    <div id=\"pet-age\" class=\"left\">\n\t    \t<h4>Pet Age:</h4>\n\n\t\t\t<div id=\"pet-age-wrapper\">\n\t\t\t"));
  {
    LINE(746,0);
    const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
    v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss9210d33f, "pet"), (VarNR(tmp0)), true);
    tmp_ref.unset();
  }
  {
    LINE(747,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs26c89eb3, "pets"))));
    const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
    v__from.assignVal(tmp2);
  }
  if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
    {
      x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
    }
  }
  {
    bool tmp0;
    {
      LINE(748,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(31);
          for (ArrayIter iter33 = v__from.begin(null_string, true); !iter33.end(); ++iter33) {
            LOOP_COUNTER_CHECK(31);
            CVarRef map32_v = iter33.second();
            CVarRef map32_n = iter33.first();
            {
              LINE(749,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss9210d33f, "pet"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map32_v);
              lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss9210d33f, "pet"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map32_n);
              tmp_ref.unset();
            }
            {
              echo(NAMSTR(s_ss5af8293a, "\t\t\t\t<div class=\""));
              {
                echo(LINE(751,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss724a760a, "type"), AccessFlags::Error_Key)))));
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ssfcae4ca0, " "));
              {
                bool tmp0;
                {
                  LINE(752,0);
                  const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss724a760a, "type"), AccessFlags::Error_Key)));
                  tmp0 = (equal(tmp1, NAMSTR(s_ss165da878, "dog")));
                  tmp_ref.unset();
                }
                if (tmp0) {
                  {
                    echo(NAMSTR(s_ssdcfd9c60, "left"));
                  }
                }
                else {
                  {
                    echo(NAMSTR(s_ssb32fbb63, "right"));
                  }
                }
              }
              echo(NAMSTR(s_ssdc71bfa4, "\">\n\t\t\t\t\t<img class=\"left\" src=\""));
              {
                LINE(753,0);
                MethodCallPackage mcp0;
                CVarRef obj0 = v__smarty_tpl;
                mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                echo(tmp2);
              }
              echo(NAMSTR(s_ssd362aa01, "images/start/quick/"));
              {
                echo(LINE(754,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss724a760a, "type"), AccessFlags::Error_Key)))));
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ss74773043, ".png\" alt=\""));
              {
                echo(LINE(755,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss724a760a, "type"), AccessFlags::Error_Key)))));
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ss937ddf8e, "\" height=\"\" width=\"\"/>\n        \t\t    <div class=\"left\">\n\t\t\t\t\t\t<input type=\"hidden\" name=\"pet[]\" id=\"pet-"));
              {
                echo(LINE(758,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss724a760a, "type"), AccessFlags::Error_Key)))));
                tmp_ref.unset();
              }
              echo(NAMSTR(s_sse4019539, "-hidden\" class=\"hidden-pet\" value=\""));
              {
                echo(LINE(759,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ssc4522be2, "id"), AccessFlags::Error_Key)))));
                tmp_ref.unset();
              }
              echo(NAMSTR(s_ss85cb3a81, "\" disabled=\"disabled\" />\n\t\t\t\t\t"));
              {
                LINE(761,0);
                const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss59f2d25c, "age_id"), (VarNR(tmp0)), true);
                tmp_ref.unset();
              }
              {
                LINE(762,0);
                const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss98361de0, "display"), (VarNR(tmp0)), true);
                tmp_ref.unset();
              }
              {
                LINE(763,0);
                const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ssb0c950a3, "ages"), AccessFlags::Error_Key)));
                v__from.assignVal(tmp0);
                tmp_ref.unset();
              }
              if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
                {
                  x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
                }
              }
              {
                bool tmp0;
                {
                  LINE(764,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__smarty_tpl;
                  mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
                }
                if (tmp0) {
                  {
                    {
                      LOOP_COUNTER(34);
                      for (ArrayIter iter36 = v__from.begin(null_string, true); !iter36.end(); ++iter36) {
                        LOOP_COUNTER_CHECK(34);
                        CVarRef map35_v = iter36.second();
                        CVarRef map35_n = iter36.first();
                        {
                          LINE(765,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss59f2d25c, "age_id"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map35_v);
                          lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss59f2d25c, "age_id"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map35_n);
                          tmp_ref.unset();
                        }
                        {
                          {
                            LINE(766,0);
                            const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss59f2d25c, "age_id"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_ss12e90587, "key"), true)));
                            lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss98361de0, "display"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_sse0c88471, "value"), tmp0);
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss4cd5453b, "\t\t\t\t\t\t<input type=\"checkbox\" name=\"age[]\" id=\"field-age-"));
                          {
                            echo(LINE(768,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss724a760a, "type"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss935fd125, "-"));
                          {
                            echo(LINE(769,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss59f2d25c, "age_id"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss140e4c45, "\" value=\""));
                          {
                            echo(LINE(770,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss59f2d25c, "age_id"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss7e5fc106, "\""));
                          {
                            bool tmp0;
                            {
                              tmp0 = (LINE(771,(toBoolean(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss7bdea2f6, "checked"), AccessFlags::Error_Key)))));
                              tmp_ref.unset();
                            }
                            if (tmp0) {
                              {
                                echo(NAMSTR(s_ss8f045511, " checked=\"checked\""));
                              }
                            }
                          }
                          echo(NAMSTR(s_ss71f74b74, " />\n\t\t\t\t\t\t<label for=\"field-age-"));
                          {
                            echo(LINE(772,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss9210d33f, "pet"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss724a760a, "type"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss935fd125, "-"));
                          {
                            echo(LINE(773,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss59f2d25c, "age_id"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss19e8137c, "\">"));
                          {
                            echo(LINE(774,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss98361de0, "display"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss57f4de26, "</label>\n\t\t\t\t\t\t<div class=\"clr\"></div>\n\t\t\t\t\t"));
                        }
                      }
                    }
                  }
                }
              }
              echo(NAMSTR(s_ss6fed6684, "\t\t\t\t\t</div>\n\t\t\t\t</div>\n\t\t\t"));
            }
          }
        }
      }
    }
  }
  echo(NAMSTR(s_ss6120a331, "\t\t\t</div>\n\t\t</div>\n\t\t<div id=\"food-form\" class=\"right\">\n\t    \t<h4>Choose:</h4>\n\t\t\t<div id=\"food-form-wrapper\">\n\t\t\t\t<table>\n\t\t\t\t\t<tbody>\n                \t   \t"));
  {
    LINE(788,0);
    const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
    v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_sseb3c6312, "row"), (VarNR(tmp0)), true);
    tmp_ref.unset();
  }
  {
    LINE(789,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs084c8187, "categories"))));
    const Variant &tmp2((tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
    v__from.assignVal(tmp2);
  }
  if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
    {
      x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
    }
  }
  {
    bool tmp0;
    {
      LINE(790,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
    }
    if (tmp0) {
      {
        {
          LOOP_COUNTER(37);
          for (ArrayIter iter39 = v__from.begin(null_string, true); !iter39.end(); ++iter39) {
            LOOP_COUNTER_CHECK(37);
            CVarRef map38_v = iter39.second();
            CVarRef map38_n = iter39.first();
            {
              LINE(791,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map38_v);
              lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_sseb3c6312, "row"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map38_n);
              tmp_ref.unset();
            }
            {
              echo(NAMSTR(s_sse040890b, "            \t\t\t<tr>\n                \t    \t"));
              {
                LINE(794,0);
                const p_Smarty_Variable &tmp0((((checkClassExistsThrow(NAMSTR(s_ssea7f06d8, "Smarty_Variable"), &g->CDEC(smarty_variable))), (p_Smarty_Variable(((c_Smarty_Variable*)coo_Smarty_Variable())->create())))));
                v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).set(NAMSTR(s_ss0328876e, "cat"), (VarNR(tmp0)), true);
                tmp_ref.unset();
              }
              {
                LINE(795,0);
                const Variant &tmp0((v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_sseb3c6312, "row"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
                v__from.assignVal(tmp0);
                tmp_ref.unset();
              }
              if ((!(x_is_array(v__from)) && !(x_is_object(v__from)))) {
                {
                  x_settype(ref(v__from), NAMSTR(s_ss8c04b960, "array"));
                }
              }
              {
                bool tmp0;
                {
                  LINE(796,0);
                  MethodCallPackage mcp1;
                  CVarRef obj1 = v__smarty_tpl;
                  mcp1.methodCall((obj1), NAMSTR(s_ssffc3916b, "_count"), 0x56A4538073E97E08LL);
                  const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
                  tmp0 = (more((mcp1.ci->getMeth1Args())(mcp1, 1, v__from), 0LL));
                }
                if (tmp0) {
                  {
                    {
                      LOOP_COUNTER(40);
                      for (ArrayIter iter42 = v__from.begin(null_string, true); !iter42.end(); ++iter42) {
                        LOOP_COUNTER_CHECK(40);
                        CVarRef map41_v = iter42.second();
                        CVarRef map41_n = iter42.first();
                        {
                          LINE(797,(lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss0328876e, "cat"), AccessFlags::CheckExist_Key)))).o_setPublic(NAMSTR(s_sse0c88471, "value"), map41_v);
                          lval(v__smarty_tpl.o_lval(NAMSTR(s_ss62b7404c, "tpl_vars"), tmp_ref).lvalAt(NAMSTR(s_ss0328876e, "cat"), AccessFlags::CheckExist_Key)).o_setPublic(NAMSTR(s_ss12e90587, "key"), map41_n);
                          tmp_ref.unset();
                        }
                        {
                          echo(NAMSTR(s_ssc0e7adee, "\t\t\t\t\t\t\t<td>\n\t\t\t\t\t\t\t\t<label for=\"wcategory_"));
                          {
                            echo(LINE(800,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ssc4522be2, "id"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss81309e14, "\"><img id=\"food-form-image-"));
                          {
                            echo(LINE(801,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ssc4522be2, "id"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss1c2eb937, "\" src=\""));
                          {
                            LINE(802,0);
                            MethodCallPackage mcp0;
                            CVarRef obj0 = v__smarty_tpl;
                            mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
                            const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                            Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
                            const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
                            echo(tmp2);
                          }
                          echo(NAMSTR(s_ssd362aa01, "images/start/quick/"));
                          {
                            echo(LINE(803,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss397dbc4b, "image"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss74773043, ".png\" alt=\""));
                          {
                            echo(LINE(804,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss98361de0, "display"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss64f2ddb0, "\" border=\"0\" /></label>\n\t\t\t\t\t\t\t</td>\n\t\t\t\t\t\t\t<td style=\"width:140px; height: 30px;font-size:11px\">\n\t\t\t\t\t\t\t\t<input type=\"checkbox\" name=\"category[]\" id=\"wcategory_"));
                          {
                            echo(LINE(808,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ssc4522be2, "id"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss140e4c45, "\" value=\""));
                          {
                            echo(LINE(809,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ssc4522be2, "id"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss8b3d9f1e, "\"/><br />\n\t\t\t\t\t\t\t\t<label for=\"wcategory_"));
                          {
                            echo(LINE(811,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ssc4522be2, "id"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss19e8137c, "\">"));
                          {
                            echo(LINE(812,(toString(v__smarty_tpl.o_getPublic(NAMSTR(s_ss62b7404c, "tpl_vars"), true).rvalRef(NAMSTR(s_ss0328876e, "cat"), tmp_ref, AccessFlags::Error_Key).o_getPublic(NAMSTR(s_sse0c88471, "value"), true).rvalAt(NAMSTR(s_ss98361de0, "display"), AccessFlags::Error_Key)))));
                            tmp_ref.unset();
                          }
                          echo(NAMSTR(s_ss183473b8, "</label>\n\t\t\t\t\t\t\t</td>\n   \t\t            \t\t"));
                        }
                      }
                    }
                  }
                }
              }
              echo(NAMSTR(s_ss7bbb3442, "   \t        \t    \t</tr>\n   \t\t            \t"));
            }
          }
        }
      }
    }
  }
  echo(NAMSTR(s_ss0f6a1a36, "\t\t\t\t\t</tbody>\n\t\t\t\t</table>\n\t\t\t</div>\n\t\t\t<div class=\"clr\"></div>\n\t\t</div>\n\t\t<div class=\"clear\"></div>\n    \t<div class=\"right start-buttons\">\n    \t\t<a href=\""));
  {
    LINE(825,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss5f2b5e0c, "explorer\"><img alt=\"skip\" height=\"\" width=\"\" src=\""));
  {
    LINE(826,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss629b5f30, "images/buttons/skip.png\" /></a>\n\t        <input type=\"image\" id=\"quick-submit\" name=\"quicksrch\" src=\""));
  {
    LINE(828,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss2db305fd, "images/buttons/show_products.png\" />\n\t\t</div>\n\t\t<div class=\"clear\"></div>\n\t</form>\n\t</div>\n</div>\n"));
  {
    LINE(835,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(837,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  echo(NAMSTR(s_ssc9bbfd7a, "        </div>\n    </div>\n\n\t"));
  {
    bool tmp0;
    {
      LINE(841,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs24363f97, "utm_source"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, NAMSTR(s_ssaaa6ef40, "gen4")));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss391e8e32, "\t\t"));
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ss8c66df1d, "cript src='http://www.adreadytractions.com/rt/294491\?p=16752'></script>\n\t"));
      }
    }
    else {
      bool tmp0;
      {
        LINE(843,0);
        MethodCallPackage mcp1;
        CVarRef obj1 = v__smarty_tpl;
        mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
        Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs24363f97, "utm_source"))));
        const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp0 = (equal(tmp3, NAMSTR(s_ssce4a0474, "gen3")));
      }
      if (tmp0) {
        {
          echo(NAMSTR(s_ss391e8e32, "\t\t"));
          echo(NAMSTR(s_ss90452f1a, "<s"));
          echo(NAMSTR(s_ss08a0fc2e, "cript src='http://www.adreadytractions.com/rt/294491\?p=16701'></script>\n\t"));
        }
      }
      else {
        bool tmp0;
        {
          LINE(845,0);
          MethodCallPackage mcp1;
          CVarRef obj1 = v__smarty_tpl;
          mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
          Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs24363f97, "utm_source"))));
          const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          tmp0 = (equal(tmp3, NAMSTR(s_sseeb866c9, "gen2")));
        }
        if (tmp0) {
          {
            echo(NAMSTR(s_ss391e8e32, "\t\t"));
            echo(NAMSTR(s_ss90452f1a, "<s"));
            echo(NAMSTR(s_ssd5895ff7, "cript src='http://www.adreadytractions.com/rt/294491\?p=16691'></script>\n\t"));
          }
        }
      }
    }
  }
  {
    p_Smarty_Internal_Template tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template"), &g->CDEC(smarty_internal_template))), (coo_Smarty_Internal_Template()));
    LINE(848,0);
    const Variant &tmp1((v__smarty_tpl.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    Variant tmp2((v__smarty_tpl));
    const Variant &tmp3((v__smarty_tpl.o_getPublic(NAMSTR(s_ssb26f3d0e, "cache_id"), true)));
    const Variant &tmp4((v__smarty_tpl.o_getPublic(NAMSTR(s_ss962fc398, "compile_id"), true)));
    ((c_Smarty_Internal_Template*)tmp0.get()->create(NAMSTR(s_ss1399f0c7, "Footer.tpl"), tmp1, tmp2, tmp3, tmp4, null, null));
    v__template = tmp0;
  }
  {
    LINE(849,(v__template.o_lval(NAMSTR(s_ss90269404, "properties"), tmp_ref))).set(NAMSTR(s_ss73233481, "nocache_hash"), (NAMVAR(s_svsafec9b51, "15423855914e8388332d48e9-81345237")), true);
    tmp_ref.unset();
  }
  v__tpl_stack.append((v__smarty_tpl));
  v__smarty_tpl.assignVal(v__template);
  echo(NAMSTR(s_ss132706a8, "\n\t\t</div><!--end 'content-wrapper'-->\n\t</div><!--end 'page'-->\n</div><!--end 'page-wrapper'-->\n<div align=\"center\">\n\t<p class=\"footer-shadow-up\"><img src=\""));
  {
    LINE(858,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss595ee85f, "images/footer/shadow.png\" alt=\"Footer Shadow\" /></p>\n\t<div id=\"footer-wrapper\">\n\t\t<div id=\"foot\">\n        \t<a href=\""));
  {
    LINE(862,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssa1e83017, "shipping\">Shipping &amp; Returns Policy</a> | <a href=\""));
  {
    LINE(863,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssb81afe2e, "privacy\">Privacy Policy</a> | <a href=\""));
  {
    LINE(864,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssc5550848, "terms-of-service\">Terms of Service</a> | <a href=\""));
  {
    LINE(865,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss8bbb80e1, "contact\">Contact Us</a> | <a href=\""));
  {
    LINE(866,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss15617231, "content/suggest-product\">Suggest a Product</a> | "));
  {
    bool tmp0;
    {
      LINE(867,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs3de7d5c6, "loggedin"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, true));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ssd49434fd, "<a href=\""));
        {
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss3f3c1b35, "user/"));
        {
          LINE(868,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs3152aae3, "user"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true).o_getPublic(NAMSTR(s_ss3d12bdca, "uid"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss1647ea86, "/ambassador\">Ambassador</a>"));
      }
    }
    else {
      {
        echo(NAMSTR(s_ssd49434fd, "<a href=\""));
        {
          LINE(869,0);
          MethodCallPackage mcp0;
          CVarRef obj0 = v__smarty_tpl;
          mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
          Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
          const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
          echo(tmp2);
        }
        echo(NAMSTR(s_ss2905ff33, "ambassador\">Ambassador</a>"));
      }
    }
  }
  echo(NAMSTR(s_ss86c98cae, " | <a href=\""));
  {
    LINE(870,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss72f7a775, "press\">Press</a> | <a href=\""));
  {
    LINE(871,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss738e2649, "testimonials\">Testimonials</a> | <a href=\"http://blog.petflow.com\">Blog</a>\n    \t    <br />\n            <br />\n            <div class=\"footer-pics-wrapper corner-8\">\n            \t<p class=\"footer-icon-text\">Follow Us!</p>\n            \t<a target=\"_blank\" href=\"http://www.facebook.com/petflow\"><img class=\"in-footer-pic\" src=\""));
  {
    LINE(877,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss1eca8769, "images/sidebar/contact/icon_facebook.png\" /></a>\n                <a target=\"_blank\" href=\"http://twitter.com/#!/petflow\"><img class=\"in-footer-pic\" src=\""));
  {
    LINE(879,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ssffa5b0e5, "images/sidebar/contact/icon_twitter.png\" /></a>\n                <a target=\"_blank\" href=\"http://blog.petflow.com/\?feed=rss2\"><img class=\"in-footer-pic\" src=\""));
  {
    LINE(881,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss76142550, "images/sidebar/contact/icon_rss.png\" /></a>\n                <a target=\"_blank\" href=\"mailto:help@petflow.com\"><img class=\"in-footer-pic\" src=\""));
  {
    LINE(883,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    Variant tmp1(((mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svs7a3a1438, "rewriteBase"))));
    const String &tmp2((toString(tmp1.o_getPublic(NAMSTR(s_sse0c88471, "value"), true))));
    echo(tmp2);
  }
  echo(NAMSTR(s_ss4f627fea, "images/sidebar/contact/icon_email2.png\" /></a>\n            </div>\n            <div class=\"clear\"></div>\n            <br />\n\t\t\t&copy; Copyright 2011 PetFlow.com, All Rights Reserved\n\t\t</div>\n\t</div>\n</div>\n\n<!-- Google Analytics -->\n"));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_sse6e9fd5d, "cript type=\"text/javascript\">\n  var _gaq = _gaq || [];\n  _gaq.push(['_setAccount', 'UA-11683782-1']);\n  _gaq.push(['_trackPageview']);\n\n  (function() {\n    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;\n    ga.src = ('https:' == document.location.protocol \? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';\n    var s = document.getElementsByTag"));
  echo(NAMSTR(s_ssa39c35c4, "Name('script')[0]; s.parentNode.insertBefore(ga, s);\n  })();\n</script>\n<!-- BEGIN LivePerson Monitor. -->\n\t"));
  echo(NAMSTR(s_ss90452f1a, "<s"));
  echo(NAMSTR(s_ss336316e8, "cript language=\"javascript\"> var lpMTagConfig = {\"lpServer\" : \"server.iad.liveperson.net\",\"lpNumber\" : \"81464111\",\"lpProtocol\" : (document.location.toString().indexOf(\"https:\")==0) \? \"https\" : \"http\"}; function lpAddMonitorTag(src){if(typeof(src)==\"undefined\"||typeof(src)==\"object\"){src=lpMTagConfig.lpMTagSrc\?lpMTagConfig.lpMTagSrc:\"/hcp/html/mTag.js\";}if(src.indexOf(\"http\")!=0){src=lpMTagConfig.l"));
  echo(NAMSTR(s_ss1c4fcfbd, "pProtocol+\"://\"+lpMTagConfig.lpServer+src+\"\?site=\"+lpMTagConfig.lpNumber;}else{if(src.indexOf(\"site=\")<0){if(src.indexOf(\"\?\")<0)src=src+\"\?\";else src=src+\"&\";src=src+\"site=\"+lpMTagConfig.lpNumber;}};var s=document.createElement(\"script\");s.setAttribute(\"type\",\"text/javascript\");s.setAttribute(\"charset\",\"iso-8859-1\");s.setAttribute(\"src\",src);document.getElementsByTagName(\"head\").item(0).appendChild(s"));
  echo(NAMSTR(s_ss3433af99, ");} if (window.attachEvent) window.attachEvent(\"onload\",lpAddMonitorTag); else window.addEventListener(\"load\",lpAddMonitorTag,false);</script>\n<!-- END LivePerson Monitor. -->\n<div id=\"hover-container\"></div>\n\n"));
  {
    bool tmp0;
    {
      LINE(910,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      bool tmp4 = (equal(tmp3, NAMSTR(s_ss3c3982d5, "start")));
      if (tmp4) {
        MethodCallPackage mcp5;
        CVarRef obj5 = v__smarty_tpl;
        mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
        Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svsc2361e90, "utm_medium"))));
        const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        tmp4 = (equal(tmp7, NAMSTR(s_ss2aa2a38b, "fbpix")));
      }
      tmp0 = (tmp4);
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss90452f1a, "<s"));
        echo(NAMSTR(s_ss255157aa, "cript src='http://www.adreadytractions.com/rt/294491\?p=16691'></script>\n"));
      }
    }
    else {
      bool tmp0;
      {
        LINE(912,0);
        MethodCallPackage mcp1;
        CVarRef obj1 = v__smarty_tpl;
        mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
        const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
        Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svsf73aed91, "page"))));
        const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
        bool tmp4 = (!equal(tmp3, NAMSTR(s_ss51052eb2, "confirmation")));
        if (tmp4) {
          MethodCallPackage mcp5;
          CVarRef obj5 = v__smarty_tpl;
          mcp5.methodCall((obj5), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
          const CallInfo *cit5 ATTRIBUTE_UNUSED = mcp5.ci;
          Variant tmp6(((mcp5.ci->getMeth1Args())(mcp5, 1, NAMVAR(s_svsf73aed91, "page"))));
          const Variant &tmp7((tmp6.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
          tmp4 = (!equal(tmp7, NAMSTR(s_ssf7c2d2a3, "confirmation_one")));
        }
        tmp0 = (tmp4);
      }
      if (tmp0) {
        {
          echo(NAMSTR(s_ss90452f1a, "<s"));
          echo(NAMSTR(s_ss39bb8c47, "cript src='https://www.adreadytractions.com/rt/294491\?p=14471'></script>\n"));
        }
      }
    }
  }
  {
    bool tmp0;
    {
      LINE(915,0);
      MethodCallPackage mcp1;
      CVarRef obj1 = v__smarty_tpl;
      mcp1.methodCall((obj1), NAMSTR(s_ss685c81b6, "getVariable"), 0x68B1802E4A14390DLL);
      const CallInfo *cit1 ATTRIBUTE_UNUSED = mcp1.ci;
      Variant tmp2(((mcp1.ci->getMeth1Args())(mcp1, 1, NAMVAR(s_svs3de7d5c6, "loggedin"))));
      const Variant &tmp3((tmp2.o_getPublic(NAMSTR(s_sse0c88471, "value"), true)));
      tmp0 = (equal(tmp3, true));
    }
    if (tmp0) {
      {
        echo(NAMSTR(s_ss226be9cc, "<img height=\"1\" width=\"1\" src=\"http://a.triggit.com/px\?u=68eccb251c29685d&rtv=petflow,pfsite,pfmember\">\n"));
      }
    }
    else {
      {
        echo(NAMSTR(s_sse991fd89, "<img height=\"1\" width=\"1\" src=\"http://a.triggit.com/px\?u=68eccb251c29685d&rtv=petflow,pfsite,pfvisitor\">\n"));
      }
    }
  }
  echo(NAMSTR(s_ss66d2232c, "\n"));
  echo(NAMSTR(s_ss715080c3, "<!-- Alertra Check -->\n</body>\n</html>\n"));
  {
    LINE(935,0);
    MethodCallPackage mcp0;
    CVarRef obj0 = v__smarty_tpl;
    mcp0.methodCall((obj0), NAMSTR(s_ss1c36e9c6, "updateParentVariables"), 0x010EDFCFBD294B7BLL);
    const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
    (mcp0.ci->getMeth1Args())(mcp0, 1, NAMVAR(s_svif01bca90, 0LL));
  }
  {
    LINE(937,0);
    const Variant &tmp0((x_array_pop(ref(v__tpl_stack))));
    v__smarty_tpl.assignVal(tmp0);
  }
  unset(v__template);
  return true;
}
namespace hphp_impl_splitter {}
}
