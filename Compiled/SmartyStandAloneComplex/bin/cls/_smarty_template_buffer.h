
#ifndef __GENERATED_cls__smarty_template_buffer_h695bb267__
#define __GENERATED_cls__smarty_template_buffer_h695bb267__

#include <cls/_smarty_template_buffer.fw.h>
#include <cls/_smarty_parsetree.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_parsetree.php line 141 */
FORWARD_DECLARE_CLASS(_smarty_template_buffer);
extern const ObjectStaticCallbacks cw__smarty_template_buffer;
class c__smarty_template_buffer : public c__smarty_parsetree {
  public:

  // Properties
  Variant m_subtrees;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(_smarty_template_buffer, _smarty_template_buffer, _smarty_parsetree)
  static const ClassPropTable os_prop_table;
  void init();
  public: void t___construct(Variant v_parser);
  public: c__smarty_template_buffer *create(CVarRef v_parser);
  public: void tt_append_subtree(p__smarty_parsetree v_subtree);
  public: void t_append_subtree(CVarRef v_subtree);
  public: virtual Variant t_to_smarty_php();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(append_subtree);
  DECLARE_METHOD_INVOKE_HELPERS_NOPARAM(to_smarty_php);
};
ObjectData *coo__smarty_template_buffer() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls__smarty_template_buffer_h695bb267__
