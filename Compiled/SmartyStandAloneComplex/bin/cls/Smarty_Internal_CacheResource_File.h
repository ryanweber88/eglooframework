
#ifndef __GENERATED_cls_Smarty_Internal_CacheResource_File_h30a68e5b__
#define __GENERATED_cls_Smarty_Internal_CacheResource_File_h30a68e5b__

#include <cls/Smarty_Internal_CacheResource_File.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_cacheresource_file.php line 17 */
FORWARD_DECLARE_CLASS(Smarty_Internal_CacheResource_File);
extern const ObjectStaticCallbacks cw_Smarty_Internal_CacheResource_File;
class c_Smarty_Internal_CacheResource_File : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_CacheResource_File, Smarty_Internal_CacheResource_File, ObjectData)
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_CacheResource_File *create(CVarRef v_smarty);
  public: String t_getcachedfilepath(CVarRef v__template);
  public: Variant t_getcachedtimestamp(CVarRef v__template);
  public: Variant t_getcachedcontents(Variant v__template, Variant v_no_render = false);
  public: bool t_writecachedcontent(Variant v__template, CVarRef v_content);
  public: int64 t_clearall(CVarRef v_exp_time = null_variant);
  public: int64 t_clear(Variant v_resource_name, CVarRef v_cache_id, CVarRef v_compile_id, CVarRef v_exp_time);
  DECLARE_METHOD_INVOKE_HELPERS(getcachedtimestamp);
  DECLARE_METHOD_INVOKE_HELPERS(clearall);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getcachedcontents);
  DECLARE_METHOD_INVOKE_HELPERS(getcachedfilepath);
  DECLARE_METHOD_INVOKE_HELPERS(writecachedcontent);
  DECLARE_METHOD_INVOKE_HELPERS(clear);
};
ObjectData *coo_Smarty_Internal_CacheResource_File() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_CacheResource_File_h30a68e5b__
