
#ifndef __GENERATED_cls_Smarty_Internal_Resource_PHP_h47d35d64__
#define __GENERATED_cls_Smarty_Internal_Resource_PHP_h47d35d64__

#include <cls/Smarty_Internal_Resource_PHP.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_php.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Resource_PHP);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_PHP;
class c_Smarty_Internal_Resource_PHP : public ObjectData {
  public:

  // Properties
  Variant m_usesCompiler;
  Variant m_isEvaluated;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Resource_PHP, Smarty_Internal_Resource_PHP, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Resource_PHP *create(CVarRef v_smarty);
  public: Variant t_isexisting(CVarRef v_template);
  public: Variant t_gettemplatefilepath(Variant v__template);
  public: Variant t_gettemplatetimestamp(CVarRef v__template);
  public: Variant t_gettemplatesource(Variant v__template);
  public: bool t_getcompiledfilepath(CVarRef v__template);
  public: void t_renderuncompiled(Variant v__smarty_template);
  DECLARE_METHOD_INVOKE_HELPERS(getcompiledfilepath);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatesource);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatetimestamp);
  DECLARE_METHOD_INVOKE_HELPERS(renderuncompiled);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatefilepath);
  DECLARE_METHOD_INVOKE_HELPERS(isexisting);
};
ObjectData *coo_Smarty_Internal_Resource_PHP() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Resource_PHP_h47d35d64__
