
#ifndef __GENERATED_cls_Smarty_Internal_Compile_Block_h1d87b907__
#define __GENERATED_cls_Smarty_Internal_Compile_Block_h1d87b907__

#include <cls/Smarty_Internal_Compile_Block.fw.h>
#include <cls/Smarty_Internal_CompileBase.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: Smarty/libs/sysplugins/smarty_internal_compile_block.php line 15 */
FORWARD_DECLARE_CLASS(Smarty_Internal_Compile_Block);
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Block;
class c_Smarty_Internal_Compile_Block : public c_Smarty_Internal_CompileBase {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(Smarty_Internal_Compile_Block, Smarty_Internal_Compile_Block, Smarty_Internal_CompileBase)
  static const ClassPropTable os_prop_table;
  void init();
  public: bool t_compile(CVarRef v_args, Variant v_compiler);
  public: static void t_saveblockdata(Variant v_block_content, CVarRef v_block_tag, Variant v_template, CVarRef v_filepath);
  public: static Variant t_compilechildblock(Variant v_compiler, Variant v__name = null);
  DECLARE_METHOD_INVOKE_HELPERS(compilechildblock);
  DECLARE_METHOD_INVOKE_HELPERS(compile);
  DECLARE_METHOD_INVOKE_HELPERS(saveblockdata);
};
ObjectData *coo_Smarty_Internal_Compile_Block() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Smarty_Internal_Compile_Block_h1d87b907__
