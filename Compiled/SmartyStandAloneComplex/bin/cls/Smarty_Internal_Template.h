
#ifndef __GENERATED_cls_Smarty_Internal_Template_hcfdce9c7__
#define __GENERATED_cls_Smarty_Internal_Template_hcfdce9c7__

#include <cls/Smarty_Internal_Template.fw.h>
#include <cls/Smarty_Internal_Data.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_template.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Template);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Template;
class c_Smarty_Internal_Template : public c_Smarty_Internal_Data {
  public:

  // Properties
  Variant m_compiler_object;
  Variant m_cacher_object;
  Variant m_cache_id;
  Variant m_compile_id;
  Variant m_caching;
  Variant m_cache_lifetime;
  Variant m_cacher_class;
  Variant m_caching_type;
  Variant m_forceNocache;
  Variant m_template_resource;
  Variant m_resource_type;
  Variant m_resource_name;
  Variant m_isExisting;
  Variant m_templateUid;
  Variant m_template_filepath;
  Variant m_template_source;
  Variant m_template_timestamp;
  Variant m_compiled_filepath;
  Variant m_compiled_template;
  Variant m_compiled_timestamp;
  Variant m_mustCompile;
  Variant m_suppressHeader;
  Variant m_suppressFileDependency;
  Variant m_has_nocache_code;
  Variant m_write_compiled_code;
  Variant m_rendered_content;
  Variant m_cached_filepath;
  Variant m_cached_timestamp;
  Variant m_isCached;
  Variant m_cacheFileChecked;
  Variant m_tpl_vars;
  Variant m_parent;
  Variant m_config_vars;
  Variant m_plugin_data;
  Variant m_properties;
  Variant m_required_plugins;
  Variant m_saved_modifier;
  Variant m_smarty;
  Variant m_block_data;
  Variant m_wrapper;
  Variant m_used_tags;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Template, Smarty_Internal_Template, Smarty_Internal_Data)
  static const ClassPropTable os_prop_table;
  c_Smarty_Internal_Template(ObjectData* r = NULL) : m_compiler_object(Variant::nullInit), m_cacher_object(Variant::nullInit), m_cache_id(Variant::nullInit), m_compile_id(Variant::nullInit), m_caching(Variant::nullInit), m_cache_lifetime(Variant::nullInit), m_cacher_class(Variant::nullInit), m_caching_type(Variant::nullInit), m_template_resource(Variant::nullInit), m_resource_type(Variant::nullInit), m_resource_name(Variant::nullInit), m_isExisting(Variant::nullInit), m_template_filepath(Variant::nullInit), m_template_source(Variant::nullInit), m_template_timestamp(Variant::nullInit), m_compiled_filepath(Variant::nullInit), m_compiled_template(Variant::nullInit), m_compiled_timestamp(Variant::nullInit), m_mustCompile(Variant::nullInit), m_rendered_content(Variant::nullInit), m_cached_filepath(Variant::nullInit), m_cached_timestamp(Variant::nullInit), m_isCached(Variant::nullInit), m_parent(Variant::nullInit), m_saved_modifier(Variant::nullInit), m_smarty(Variant::nullInit), m_wrapper(Variant::nullInit) {
    setAttribute(UseGet);
    setAttribute(UseSet);
    setAttribute(HasCall);
  }
  void init();
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct(Variant v_template_resource, Variant v_smarty, Variant v__parent = null, Variant v__cache_id = null, Variant v__compile_id = null, Variant v__caching = null, Variant v__cache_lifetime = null);
  public: c_Smarty_Internal_Template *create(CVarRef v_template_resource, CVarRef v_smarty, CVarRef v__parent = null_variant, CVarRef v__cache_id = null_variant, CVarRef v__compile_id = null_variant, CVarRef v__caching = null_variant, CVarRef v__cache_lifetime = null_variant);
  public: Variant t_gettemplatefilepath();
  public: Variant t_gettemplatetimestamp();
  public: Variant t_gettemplatesource();
  public: Variant t_isexisting(CVarRef v_error = false_varNR);
  public: Variant t_mustcompile();
  public: Variant t_getcompiledfilepath();
  public: Variant t_getcompiledtimestamp();
  public: Variant t_getcompiledtemplate();
  public: void t_compiletemplatesource();
  public: Variant t_getcachedfilepath();
  public: Variant t_getcachedtimestamp();
  public: Variant t_getcachedcontent();
  public: Variant t_writecachedcontent(CVarRef v_content);
  public: Variant t_iscached(CVarRef v_template = null_variant, CVarRef v_cache_id = null_variant, CVarRef v_compile_id = null_variant, Variant v_parent = null);
  public: void t_rendertemplate();
  public: Variant t_getrenderedtemplate();
  public: bool t_parseresourcename(CVarRef v_template_resource, VRefParam rv_resource_type, VRefParam rv_resource_name, VRefParam rv_resource_handler);
  public: Variant t_buildtemplatefilepath(Variant v_file = null);
  public: void t_updateparentvariables(CVarRef v_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)));
  public: void t_getresourcetypename(CVarRef v_template_resource, VRefParam rv_resource_type, VRefParam rv_resource_name);
  public: Variant t_loadtemplateresourcehandler(CVarRef v_resource_type);
  public: String t_createpropertyheader(CVarRef v_cache = false_varNR);
  public: void t_decodeproperties(CVarRef v_properties);
  public: void t_createlocalarrayvariable(CVarRef v_tpl_var, CVarRef v_nocache = false_varNR, CVarRef v_scope = ((checkClassExistsThrow(NAMSTR(s_sscf405241, "Smarty"), &get_global_variables()->CDEC(smarty))), (q_Smarty___SCOPE_LOCAL)));
  public: Variant t__count(CVarRef v_value);
  public: Variant t_fetch(CVarRef v_template = null_variant, CVarRef v_cache_id = null_variant, CVarRef v_compile_id = null_variant, Variant v_parent = null, CVarRef v_display = false_varNR);
  public: Variant t_display(CVarRef v_template = null_variant, CVarRef v_cache_id = null_variant, CVarRef v_compile_id = null_variant, Variant v_parent = null);
  public: Variant t___set(Variant v_property_name, Variant v_value);
  public: Variant t___get(Variant v_property_name);
  public: Variant t___call(Variant v_name, Variant v_args);
  DECLARE_METHOD_INVOKE_HELPERS(createpropertyheader);
  DECLARE_METHOD_INVOKE_HELPERS(display);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(rendertemplate);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcompiledfilepath);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcachedcontent);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcachedtimestamp);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(gettemplatesource);
  DECLARE_METHOD_INVOKE_HELPERS(__set);
  DECLARE_METHOD_INVOKE_HELPERS(iscached);
  DECLARE_METHOD_INVOKE_HELPERS(_count);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(parseresourcename);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(gettemplatetimestamp);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(mustcompile);
  DECLARE_METHOD_INVOKE_HELPERS(createlocalarrayvariable);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(compiletemplatesource);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcompiledtimestamp);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcachedfilepath);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(gettemplatefilepath);
  DECLARE_METHOD_INVOKE_HELPERS(isexisting);
  DECLARE_METHOD_INVOKE_HELPERS(writecachedcontent);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getcompiledtemplate);
  DECLARE_METHOD_INVOKE_HELPERS(buildtemplatefilepath);
  DECLARE_METHOD_INVOKE_HELPERS(loadtemplateresourcehandler);
  DECLARE_METHOD_INVOKE_HELPERS(__get);
  DECLARE_METHOD_INVOKE_HELPERS(decodeproperties);
  DECLARE_METHOD_INVOKE_HELPERS(getresourcetypename);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(getrenderedtemplate);
  DECLARE_METHOD_INVOKE_HELPERS(fetch);
  DECLARE_METHOD_INVOKE_HELPERS(__call);
  DECLARE_METHOD_INVOKE_HELPERS(updateparentvariables);
};
ObjectData *coo_Smarty_Internal_Template() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Template_hcfdce9c7__
