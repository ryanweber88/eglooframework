
#ifndef __GENERATED_cls_Smarty_Internal_Config_hc8f1d8a0__
#define __GENERATED_cls_Smarty_Internal_Config_hc8f1d8a0__

#include <cls/Smarty_Internal_Config.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_config.php line 12 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Config);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Config;
class c_Smarty_Internal_Config : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Config, Smarty_Internal_Config, ObjectData)
  static const ClassPropTable os_prop_table;
  public: void t___construct(Variant v_config_resource, Variant v_smarty, Variant v_data = null);
  public: c_Smarty_Internal_Config *create(CVarRef v_config_resource, CVarRef v_smarty, CVarRef v_data = null_variant);
  public: Variant t_getconfigfilepath();
  public: Variant t_gettimestamp();
  public: bool t_parseconfigresourcename(CVarRef v_config_resource);
  public: Variant t_buildconfigfilepath();
  public: Variant t_getconfigsource();
  public: Variant t_readconfigsource();
  public: Variant t_getcompiledfilepath();
  public: String t_buildcompiledfilepath();
  public: Variant t_getcompiledtimestamp();
  public: Variant t_mustcompile();
  public: Variant t_getcompiledconfig();
  public: void t_compileconfigsource();
  public: void t_loadconfigvars(Variant v_sections = null, Variant v_scope = NAMSTR(s_ss59b4a7d2, "local"));
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcompiledfilepath);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getconfigfilepath);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(buildcompiledfilepath);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(mustcompile);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(compileconfigsource);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcompiledtimestamp);
  DECLARE_METHOD_INVOKE_HELPERS(loadconfigvars);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(readconfigsource);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcompiledconfig);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getconfigsource);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(gettimestamp);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(buildconfigfilepath);
  DECLARE_METHOD_INVOKE_HELPERS(parseconfigresourcename);
};
ObjectData *coo_Smarty_Internal_Config() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Config_hc8f1d8a0__
