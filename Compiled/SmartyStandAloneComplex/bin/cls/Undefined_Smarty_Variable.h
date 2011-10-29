
#ifndef __GENERATED_cls_Undefined_Smarty_Variable_h44889242__
#define __GENERATED_cls_Undefined_Smarty_Variable_h44889242__

#include <cls/Undefined_Smarty_Variable.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_data.php line 467 */
FORWARD_DECLARE_CLASS(Undefined_Smarty_Variable);
extern const ObjectStaticCallbacks cw_Undefined_Smarty_Variable;
class c_Undefined_Smarty_Variable : public ObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Undefined_Smarty_Variable, Undefined_Smarty_Variable, ObjectData)
  c_Undefined_Smarty_Variable(ObjectData* r = NULL) {
    setAttribute(UseGet);
  }
  public: Variant t___get(Variant v_name);
  DECLARE_METHOD_INVOKE_HELPERS(__get);
};
ObjectData *coo_Undefined_Smarty_Variable() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Undefined_Smarty_Variable_h44889242__
