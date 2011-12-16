
#ifndef __GENERATED_cls_Smarty_Security_h4b5d05f1__
#define __GENERATED_cls_Smarty_Security_h4b5d05f1__

#include <cls/Smarty_Security.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_security.php line 13 */
FORWARD_DECLARE_CLASS(Smarty_Security);
extern const ObjectStaticCallbacks cw_Smarty_Security;
class c_Smarty_Security : public ObjectData {
  public:

  // Properties
  Variant m_php_handling;
  Variant m_secure_dir;
  Variant m_trusted_dir;
  Variant m_static_classes;
  Variant m_php_functions;
  Variant m_php_modifiers;
  Variant m_streams;
  Variant m_allow_constants;
  Variant m_allow_super_globals;
  Variant m_allow_php_tag;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Security, Smarty_Security, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Security *create(CVarRef v_smarty);
  public: Variant t_istrustedphpfunction(CVarRef v_function_name, CVarRef v_compiler);
  public: Variant t_istrustedstaticclass(CVarRef v_class_name, CVarRef v_compiler);
  public: Variant t_istrustedmodifier(CVarRef v_modifier_name, CVarRef v_compiler);
  public: Variant t_istrustedstream(CVarRef v_stream_name);
  public: bool t_istrustedresourcedir(CVarRef v_filepath);
  public: bool t_istrustedphpdir(CVarRef v_filepath);
  DECLARE_METHOD_INVOKE_HELPERS(istrustedstream);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(istrustedphpfunction);
  DECLARE_METHOD_INVOKE_HELPERS(istrustedmodifier);
  DECLARE_METHOD_INVOKE_HELPERS(istrustedresourcedir);
  DECLARE_METHOD_INVOKE_HELPERS(istrustedstaticclass);
  DECLARE_METHOD_INVOKE_HELPERS(istrustedphpdir);
};
ObjectData *coo_Smarty_Security() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Security_h4b5d05f1__
