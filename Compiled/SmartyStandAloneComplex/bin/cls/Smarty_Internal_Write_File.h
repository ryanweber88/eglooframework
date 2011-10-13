
#ifndef __GENERATED_cls_Smarty_Internal_Write_File_h0eeae6e3__
#define __GENERATED_cls_Smarty_Internal_Write_File_h0eeae6e3__

#include <cls/Smarty_Internal_Write_File.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_write_file.php line 14 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Write_File);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Write_File;
class c_Smarty_Internal_Write_File : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Write_File, Smarty_Internal_Write_File, ObjectData)
  public: static bool t_writefile(CVarRef v__filepath, CVarRef v__contents, CVarRef v_smarty);
  DECLARE_METHOD_INVOKE_HELPERS(writefile);
};
ObjectData *coo_Smarty_Internal_Write_File() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Write_File_h0eeae6e3__
