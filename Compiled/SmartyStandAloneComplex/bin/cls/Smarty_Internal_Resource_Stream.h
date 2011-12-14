
#ifndef __GENERATED_cls_Smarty_Internal_Resource_Stream_h62adb0ad__
#define __GENERATED_cls_Smarty_Internal_Resource_Stream_h62adb0ad__

#include <cls/Smarty_Internal_Resource_Stream.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_resource_stream.php line 16 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Resource_Stream);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Stream;
class c_Smarty_Internal_Resource_Stream : public ObjectData {
  public:

  // Properties
  Variant m_compiler_class;
  Variant m_template_lexer_class;
  Variant m_template_parser_class;
  Variant m_usesCompiler;
  Variant m_isEvaluated;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Resource_Stream, Smarty_Internal_Resource_Stream, ObjectData)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_smarty);
  public: c_Smarty_Internal_Resource_Stream *create(CVarRef v_smarty);
  public: Variant t_isexisting(CVarRef v_template);
  public: Variant t_gettemplatefilepath(CVarRef v__template);
  public: bool t_gettemplatetimestamp(CVarRef v__template);
  public: Variant t_gettemplatesource(Variant v__template);
  public: bool t_getcompiledfilepath(CVarRef v__template);
  DECLARE_METHOD_INVOKE_HELPERS(getcompiledfilepath);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatesource);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatetimestamp);
  DECLARE_METHOD_INVOKE_HELPERS(gettemplatefilepath);
  DECLARE_METHOD_INVOKE_HELPERS(isexisting);
};
ObjectData *coo_Smarty_Internal_Resource_Stream() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Resource_Stream_h62adb0ad__
