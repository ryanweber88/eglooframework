
#ifndef __GENERATED_cls_Smarty_Internal_Get_Include_Path_h569377dc__
#define __GENERATED_cls_Smarty_Internal_Get_Include_Path_h569377dc__

#include <cls/Smarty_Internal_Get_Include_Path.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_get_include_path.php line 14 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Get_Include_Path);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Get_Include_Path;
class c_Smarty_Internal_Get_Include_Path : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Get_Include_Path, Smarty_Internal_Get_Include_Path, ObjectData)
  public: static Variant t_getincludepath(CVarRef v_filepath);
  DECLARE_METHOD_INVOKE_HELPERS(getincludepath);
};
ObjectData *coo_Smarty_Internal_Get_Include_Path() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Get_Include_Path_h569377dc__
