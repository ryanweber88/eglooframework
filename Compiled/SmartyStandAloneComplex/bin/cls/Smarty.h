
#ifndef __GENERATED_cls_Smarty_hce0e6c8b__
#define __GENERATED_cls_Smarty_hce0e6c8b__

#include <cls/Smarty.fw.h>
#include <cls/Smarty_Internal_Data.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/Smarty.class.php line 85 */
FORWARD_DECLARE_CLASS(Smarty);
extern const ObjectStaticCallbacks cw_Smarty;
class c_Smarty : public c_Smarty_Internal_Data {
  public:

  // Properties
  Variant m_auto_literal;
  Variant m_error_unassigned;
  Variant m_template_dir;
  Variant m_default_template_handler_func;
  Variant m_compile_dir;
  Variant m_plugins_dir;
  Variant m_cache_dir;
  Variant m_config_dir;
  Variant m_force_compile;
  Variant m_compile_check;
  Variant m_compile_locking;
  Variant m_use_sub_dirs;
  Variant m_compile_error;
  Variant m_caching;
  Variant m_merge_compiled_includes;
  Variant m_cache_lifetime;
  Variant m_force_cache;
  Variant m_cache_id;
  Variant m_compile_id;
  Variant m_left_delimiter;
  Variant m_right_delimiter;
  Variant m_security_class;
  Variant m_security_policy;
  Variant m_php_handling;
  Variant m_allow_php_tag;
  Variant m_allow_php_templates;
  Variant m_direct_access_security;
  Variant m_trusted_dir;
  Variant m_debugging;
  Variant m_debugging_ctrl;
  Variant m_smarty_debug_id;
  Variant m_debug_tpl;
  Variant m_error_reporting;
  Variant m_config_overwrite;
  Variant m_config_booleanize;
  Variant m_config_read_hidden;
  Variant m_config_vars;
  Variant m_tpl_vars;
  Variant m_parent;
  Variant m_template_functions;
  Variant m_default_resource_type;
  Variant m_caching_type;
  Variant m_cache_resource_types;
  Variant m_properties;
  Variant m_default_config_type;
  Variant m_template_objects;
  Variant m_cache_modified_check;
  Variant m_registered_plugins;
  Variant m_plugin_search_order;
  Variant m_registered_objects;
  Variant m_registered_classes;
  Variant m_registered_filters;
  Variant m_registered_resources;
  Variant m_autoload_filters;
  Variant m_variable_filter;
  Variant m_default_modifiers;
  Variant m_start_time;
  Variant m__file_perms;
  Variant m__dir_perms;
  Variant m__tag_stack;
  Variant m_inheritance;
  Variant m_deprecation_notices;
  Variant m_get_used_tags;
  Variant m__version;
  Variant m_smarty;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty, Smarty, Smarty_Internal_Data)
  static const ClassPropTable os_prop_table;
  c_Smarty(ObjectData* r = NULL) : m_template_dir(Variant::nullInit), m_default_template_handler_func(Variant::nullInit), m_compile_dir(Variant::nullInit), m_plugins_dir(Variant::nullInit), m_cache_dir(Variant::nullInit), m_config_dir(Variant::nullInit), m_cache_id(Variant::nullInit), m_compile_id(Variant::nullInit), m_security_policy(Variant::nullInit), m_debug_tpl(Variant::nullInit), m_error_reporting(Variant::nullInit), m_parent(Variant::nullInit), m_template_objects(Variant::nullInit), m_smarty(Variant::nullInit) {
    setAttribute(HasCall);
  }
  void init();
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct();
  public: c_Smarty *create();
  public: Variant t___destruct();
  public: Variant t_fetch(CVarRef v_template, Variant v_cache_id = null, CVarRef v_compile_id = null_variant, Variant v_parent = null, CVarRef v_display = false_varNR);
  public: void t_display(CVarRef v_template, CVarRef v_cache_id = null_variant, CVarRef v_compile_id = null_variant, CVarRef v_parent = null_variant);
  public: Variant t_iscached(Variant v_template, CVarRef v_cache_id = null_variant, CVarRef v_compile_id = null_variant, Variant v_parent = null);
  public: p_Smarty_Data t_createdata(CVarRef v_parent = null_variant);
  public: Variant t_createtemplate(Variant v_template, Variant v_cache_id = null, Variant v_compile_id = null, Variant v_parent = null, CVarRef v_do_clone = true_varNR);
  public: Variant t_templateexists(Variant v_resource_name);
  public: Variant t_getglobal(CVarRef v_varname = null_variant);
  public: Variant t_clearallcache(CVarRef v_exp_time = null_variant, CVarRef v_type = null_variant);
  public: Variant t_clearcache(CVarRef v_template_name, CVarRef v_cache_id = null_variant, CVarRef v_compile_id = null_variant, CVarRef v_exp_time = null_variant, CVarRef v_type = null_variant);
  public: void t_enablesecurity(Variant v_security_class = null);
  public: void t_disablesecurity();
  public: Variant t_loadcacheresource(Variant v_type = null);
  public: void t_settemplatedir(CVarRef v_template_dir);
  public: void t_addtemplatedir(CVarRef v_template_dir);
  public: void t_addpluginsdir(CVarRef v_plugins_dir);
  public: Variant t_getregisteredobject(CVarRef v_name);
  public: Variant t_getdebugtemplate();
  public: Variant t_setdebugtemplate(CVarRef v_tpl_name);
  public: Variant t_loadplugin(Variant v_plugin_name, Variant v_check = true);
  public: Variant tt_gettags(p_Smarty_Internal_Template v_template);
  public: Variant t_gettags(CVarRef v_template);
  public: Variant t___clone();
  public: Variant t___call(Variant v_name, Variant v_args);
  DECLARE_METHOD_INVOKE_HELPERS(settemplatedir);
  DECLARE_METHOD_INVOKE_HELPERS(display);
  DECLARE_METHOD_INVOKE_HELPERS(createdata);
  DECLARE_METHOD_INVOKE_HELPERS(getregisteredobject);
  DECLARE_METHOD_INVOKE_HELPERS(templateexists);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(__destruct);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(disablesecurity);
  DECLARE_METHOD_INVOKE_HELPERS(iscached);
  DECLARE_METHOD_INVOKE_HELPERS(setdebugtemplate);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(addtemplatedir);
  DECLARE_METHOD_INVOKE_HELPERS(addpluginsdir);
  DECLARE_METHOD_INVOKE_HELPERS(clearallcache);
  DECLARE_METHOD_INVOKE_HELPERS(clearcache);
  DECLARE_METHOD_INVOKE_HELPERS(loadcacheresource);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(__clone);
  DECLARE_METHOD_INVOKE_HELPERS(getglobal);
  DECLARE_METHOD_INVOKE_HELPERS(gettags);
  DECLARE_METHOD_INVOKE_HELPERS(loadplugin);
  DECLARE_METHOD_INVOKE_HELPERS(createtemplate);
  DECLARE_METHOD_INVOKE_HELPERS(fetch);
  DECLARE_METHOD_INVOKE_HELPERS(__call);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getdebugtemplate);
  DECLARE_METHOD_INVOKE_HELPERS(enablesecurity);
};
ObjectData *coo_Smarty() NEVER_INLINE;
extern const StaticString q_Smarty___SMARTY_VERSION;
extern const int64 q_Smarty___SCOPE_LOCAL;
extern const int64 q_Smarty___SCOPE_PARENT;
extern const int64 q_Smarty___SCOPE_ROOT;
extern const int64 q_Smarty___SCOPE_GLOBAL;
extern const int64 q_Smarty___CACHING_OFF;
extern const int64 q_Smarty___CACHING_LIFETIME_CURRENT;
extern const int64 q_Smarty___CACHING_LIFETIME_SAVED;
extern const int64 q_Smarty___PHP_PASSTHRU;
extern const int64 q_Smarty___PHP_QUOTE;
extern const int64 q_Smarty___PHP_REMOVE;
extern const int64 q_Smarty___PHP_ALLOW;
extern const StaticString q_Smarty___FILTER_POST;
extern const StaticString q_Smarty___FILTER_PRE;
extern const StaticString q_Smarty___FILTER_OUTPUT;
extern const StaticString q_Smarty___FILTER_VARIABLE;
extern const StaticString q_Smarty___PLUGIN_FUNCTION;
extern const StaticString q_Smarty___PLUGIN_BLOCK;
extern const StaticString q_Smarty___PLUGIN_COMPILER;
extern const StaticString q_Smarty___PLUGIN_MODIFIER;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_hce0e6c8b__
