
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>

namespace hphp_impl_starter {}

using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////


// Class Invoke Tables
ObjectData *coo_Smarty_Internal_Resource_String() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_String;
ObjectData *coo_Smarty_Internal_Filter() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Filter;
ObjectData *coo_Smarty_Internal_Compile_CaptureClose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_CaptureClose;
ObjectData *coo_Smarty_Internal_Resource_Eval() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Eval;
ObjectData *coo_Smarty_Internal_Compile_Config_Load() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Config_Load;
ObjectData *coo__smarty_text() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_text;
ObjectData *coo_Smarty_Internal_CompileBase() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_CompileBase;
ObjectData *coo_Smarty_Variable() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Variable;
ObjectData *coo_Smarty_Internal_TemplateCompilerBase() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_TemplateCompilerBase;
ObjectData *coo__smarty_template_buffer() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_template_buffer;
ObjectData *coo_Smarty_Internal_Resource_PHP() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_PHP;
ObjectData *coo_Smarty_Internal_Config_File_Compiler() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Config_File_Compiler;
ObjectData *coo_Smarty_Internal_Nocache_Insert() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Nocache_Insert;
ObjectData *coo_Smarty_Internal_Template() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Template;
ObjectData *coo_Smarty_Internal_Compile_If() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_If;
ObjectData *coo_Smarty_Internal_Templateparser() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Templateparser;
ObjectData *coo_Smarty_Internal_Compile_Private_Registered_Block() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Registered_Block;
ObjectData *coo_Smarty_Internal_Compile_Elseif() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Elseif;
ObjectData *coo_Smarty_Internal_Resource_Stream() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Stream;
ObjectData *coo_Smarty_Internal_Compile_Private_Modifier() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Modifier;
ObjectData *coo_Smarty_Internal_Write_File() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Write_File;
ObjectData *coo__smarty_doublequoted() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_doublequoted;
ObjectData *coo_Smarty_Internal_Compile_Capture() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Capture;
ObjectData *coo_Smarty_Internal_Get_Include_Path() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Get_Include_Path;
ObjectData *coo_Smarty() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty;
ObjectData *coo_Smarty_Internal_Compile_Include_Php() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Include_Php;
ObjectData *coo_Smarty_Internal_Resource_File() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_File;
ObjectData *coo_Smarty_Internal_Compile_Foreachclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreachclose;
ObjectData *coo_Smarty_Internal_Compile_Eval() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Eval;
ObjectData *coo_Smarty_Internal_Data() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Data;
ObjectData *coo_Smarty_Internal_Filter_Handler() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Filter_Handler;
ObjectData *coo_TPC_yyStackEntry() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_TPC_yyStackEntry;
ObjectData *coo_Smarty_Internal_Configfileparser() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Configfileparser;
ObjectData *coo_Smarty_Internal_Compile_Break() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Break;
ObjectData *coo_Smarty_Internal_Compile_Else() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Else;
ObjectData *coo_Smarty_Internal_Register() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Register;
ObjectData *coo_Smarty_Internal_CacheResource_File() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_CacheResource_File;
ObjectData *coo_Smarty_Internal_Config() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Config;
ObjectData *coo_Smarty_Internal_Compile_Forelse() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Forelse;
ObjectData *coo_Smarty_Internal_Compile_Private_Object_Function() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Object_Function;
ObjectData *coo_Smarty_Internal_Resource_Extends() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Extends;
ObjectData *coo_Smarty_Internal_Compile_Continue() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Continue;
ObjectData *coo_Smarty_Internal_Compile_Nocache() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Nocache;
ObjectData *coo_Smarty_Internal_Compile_Ldelim() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Ldelim;
ObjectData *coo_Smarty_Internal_Compile_Sectionelse() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Sectionelse;
ObjectData *coo_Smarty_Internal_Compile_Debug() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Debug;
ObjectData *coo_Smarty_Internal_Compile_Call() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Call;
ObjectData *coo_Smarty_Internal_Compile_Append() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Append;
ObjectData *coo_Smarty_Internal_Configfilelexer() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Configfilelexer;
ObjectData *coo_Smarty_Internal_Compile_Private_Block_Plugin() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Block_Plugin;
ObjectData *coo_Smarty_Internal_Compile_Sectionclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Sectionclose;
ObjectData *coo_Smarty_Internal_Compile_Forclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Forclose;
ObjectData *coo_Smarty_Internal_Compile_Assign() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Assign;
ObjectData *coo_Smarty_Internal_Compile_Foreach() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreach;
ObjectData *coo_Smarty_Internal_Templatelexer() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Templatelexer;
ObjectData *coo_Smarty_Internal_Compile_Extends() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Extends;
ObjectData *coo__smarty_parsetree() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_parsetree;
ObjectData *coo_Smarty_Internal_Compile_Rdelim() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Rdelim;
ObjectData *coo_Smarty_Internal_Wrapper() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Wrapper;
ObjectData *coo_Smarty_Internal_Compile_Foreachelse() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Foreachelse;
ObjectData *coo_Smarty_Internal_Compile_Private_Object_Block_Function() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Object_Block_Function;
ObjectData *coo_Smarty_Internal_Compile_Nocacheclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Nocacheclose;
ObjectData *coo_Smarty_Internal_Resource_Registered() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Resource_Registered;
ObjectData *coo_Smarty_Internal_Compile_Section() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Section;
ObjectData *coo_Smarty_Internal_Compile_While() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_While;
ObjectData *coo_Smarty_Internal_Function_Call_Handler() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Function_Call_Handler;
ObjectData *coo_Smarty_Data() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Data;
ObjectData *coo_Smarty_Internal_Compile_Private_Registered_Function() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Registered_Function;
ObjectData *coo_Smarty_Internal_Compile_Private_Print_Expression() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Print_Expression;
ObjectData *coo_Smarty_Internal_Compile_Insert() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Insert;
ObjectData *coo_TP_yyStackEntry() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_TP_yyStackEntry;
ObjectData *coo_Smarty_Internal_Compile_Private_Function_Plugin() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Function_Plugin;
ObjectData *coo_Smarty_Internal_Compile_For() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_For;
ObjectData *coo__smarty_code() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_code;
ObjectData *coo_Smarty_Security() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Security;
ObjectData *coo_Smarty_Internal_Debug() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Debug;
ObjectData *coo_Smarty_Internal_Compile_Private_Special_Variable() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Private_Special_Variable;
ObjectData *coo_Smarty_Internal_Compile_Functionclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Functionclose;
ObjectData *coo_Undefined_Smarty_Variable() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Undefined_Smarty_Variable;
ObjectData *coo_Smarty_Internal_Compile_Blockclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Blockclose;
ObjectData *coo_Smarty_Internal_Compile_Block() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Block;
ObjectData *coo__smarty_linebreak() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_linebreak;
ObjectData *coo_Smarty_Internal_Compile_Include() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Include;
ObjectData *coo_Smarty_Internal_SmartyTemplateCompiler() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_SmartyTemplateCompiler;
ObjectData *coo_Smarty_Internal_Compile_Whileclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Whileclose;
ObjectData *coo_SmartyException() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_SmartyException;
ObjectData *coo__smarty_tag() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_tag;
ObjectData *coo_Smarty_Internal_Compile_Function() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Function;
ObjectData *coo_Smarty_Internal_Compile_Ifclose() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Compile_Ifclose;
ObjectData *coo_Smarty_Internal_Utility() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_Smarty_Internal_Utility;
ObjectData *coo_SmartyCompilerException() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_SmartyCompilerException;
ObjectData *coo__smarty_dq_content() NEVER_INLINE;
extern const ObjectStaticCallbacks cw__smarty_dq_content;
ObjectData *coo_TP_yyToken() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_TP_yyToken;
ObjectData *coo_TPC_yyToken() NEVER_INLINE;
extern const ObjectStaticCallbacks cw_TPC_yyToken;
struct hashNodeCTD {
  int64 hash;
  const char *name;
  int64 ptv1;
  ObjectData*(* const ptr2)();
};
#define GET_CS_OFFSET(n) ((offsetof(GlobalVariables, cw_ ## n) -  offsetof(GlobalVariables, tgv_RedeclaredObjectStaticCallbacksConstPtr))/sizeof(RedeclaredObjectStaticCallbacksConst*))
inline ALWAYS_INLINE const ObjectStaticCallbacks *getCallbacks(
  const hashNodeCTD *p, CStrRef s, GlobalVariables *g) {
  int64 off = p->ptv1;
  if (LIKELY(!(off & 1))) return ((const ObjectStaticCallbacks *)off);
  checkClassExists(s, g);
  if (LIKELY(p->ptr2!=0)) /* volatile class */ return ((const ObjectStaticCallbacks *)(off-1));
  /* redeclared class */
  return &g->tgv_RedeclaredObjectStaticCallbacksConstPtr[off>>1]->oscb;
}
static const hashNodeCTD ctdBuckets[] = {
  {0x851F3D42D4C2BE03LL,"Smarty_Internal_Compile_Include",1+(int64)&cw_Smarty_Internal_Compile_Include,&coo_Smarty_Internal_Compile_Include},
  {0xE68302F87D55EB04LL,"Smarty_Internal_Compile_Assign",1+(int64)&cw_Smarty_Internal_Compile_Assign,&coo_Smarty_Internal_Compile_Assign},
  {0x88BCEEC40A2BC405LL,"Smarty_Internal_Configfileparser",1+(int64)&cw_Smarty_Internal_Configfileparser,&coo_Smarty_Internal_Configfileparser},
  {0xF6433EF7EEF5E409LL,"Smarty_Internal_Compile_Ifclose",1+(int64)&cw_Smarty_Internal_Compile_Ifclose,&coo_Smarty_Internal_Compile_Ifclose},
  {0xB98A9B29EB11FE0ALL,"Smarty_Internal_Compile_Config_Load",1+(int64)&cw_Smarty_Internal_Compile_Config_Load,&coo_Smarty_Internal_Compile_Config_Load},
  {0x462CB2A605A9440ALL,"Smarty_Internal_Compile_Nocacheclose",1+(int64)&cw_Smarty_Internal_Compile_Nocacheclose,&coo_Smarty_Internal_Compile_Nocacheclose},
  {0xF2D401FBF4E6E40BLL,"Smarty_Internal_Compile_Function",1+(int64)&cw_Smarty_Internal_Compile_Function,&coo_Smarty_Internal_Compile_Function},
  {0xD0753D0A6F10C20CLL,"Smarty_Internal_Compile_Foreachclose",1+(int64)&cw_Smarty_Internal_Compile_Foreachclose,&coo_Smarty_Internal_Compile_Foreachclose},
  {0x795A10AFD66DDB0CLL,"Smarty_Internal_Compile_Forclose",1+(int64)&cw_Smarty_Internal_Compile_Forclose,&coo_Smarty_Internal_Compile_Forclose},
  {0xE47CA3B5DFE06210LL,"Smarty_Internal_Compile_Private_Function_Plugin",1+(int64)&cw_Smarty_Internal_Compile_Private_Function_Plugin,&coo_Smarty_Internal_Compile_Private_Function_Plugin},
  {0xF41052885B672C1ALL,"Smarty_Internal_TemplateCompilerBase",1+(int64)&cw_Smarty_Internal_TemplateCompilerBase,&coo_Smarty_Internal_TemplateCompilerBase},
  {0xBB0CA7FB3E78831FLL,"Smarty_Internal_Compile_Sectionclose",1+(int64)&cw_Smarty_Internal_Compile_Sectionclose,&coo_Smarty_Internal_Compile_Sectionclose},
  {0xCC986BA3BD561F24LL,"Smarty_Internal_Templateparser",1+(int64)&cw_Smarty_Internal_Templateparser,&coo_Smarty_Internal_Templateparser},
  {0xD12A6B699F4CEE2ALL,"Smarty_Internal_Compile_If",1+(int64)&cw_Smarty_Internal_Compile_If,&coo_Smarty_Internal_Compile_If},
  {0xB215366099F9B62CLL,"Smarty_Internal_Resource_File",1+(int64)&cw_Smarty_Internal_Resource_File,&coo_Smarty_Internal_Resource_File},
  {0x2AC97CE16BC6802CLL,"Smarty_Internal_Compile_Insert",1+(int64)&cw_Smarty_Internal_Compile_Insert,&coo_Smarty_Internal_Compile_Insert},
  {0xF9F1ACA7D66BD92FLL,"SmartyException",1+(int64)&cw_SmartyException,&coo_SmartyException},
  {0xAC59664F0BBFA332LL,"Smarty_Internal_CacheResource_File",1+(int64)&cw_Smarty_Internal_CacheResource_File,&coo_Smarty_Internal_CacheResource_File},
  {0x8086688245BCD433LL,"_smarty_linebreak",1+(int64)&cw__smarty_linebreak,&coo__smarty_linebreak},
  {0x99E5DD6A6DE4D334LL,"Smarty_Internal_CompileBase",1+(int64)&cw_Smarty_Internal_CompileBase,&coo_Smarty_Internal_CompileBase},
  {0x6D0BD872DDAFCC34LL,"Smarty_Data",1+(int64)&cw_Smarty_Data,&coo_Smarty_Data},
  {0xF328AC7749125437LL,"Smarty_Internal_Config",1+(int64)&cw_Smarty_Internal_Config,&coo_Smarty_Internal_Config},
  {0xE3C9AA6F18FB113BLL,"Smarty_Internal_Compile_Elseif",1+(int64)&cw_Smarty_Internal_Compile_Elseif,&coo_Smarty_Internal_Compile_Elseif},
  {0x515DC84B46D13D3BLL,"Smarty_Internal_Utility",1+(int64)&cw_Smarty_Internal_Utility,&coo_Smarty_Internal_Utility},
  {0xE14C6BAEBE5B573CLL,"TPC_yyToken",1+(int64)&cw_TPC_yyToken,&coo_TPC_yyToken},
  {0xC98BA6932B36BE3ELL,"Smarty_Internal_Compile_Capture",1+(int64)&cw_Smarty_Internal_Compile_Capture,&coo_Smarty_Internal_Compile_Capture},
  {0xCF910F95F3F2B33FLL,"Smarty_Internal_Register",1+(int64)&cw_Smarty_Internal_Register,&coo_Smarty_Internal_Register},
  {0xAE3E1DB01EE1AC45LL,"Smarty_Internal_Compile_Extends",1+(int64)&cw_Smarty_Internal_Compile_Extends,&coo_Smarty_Internal_Compile_Extends},
  {0xA6F445BD4C748955LL,"Smarty_Internal_Resource_Eval",1+(int64)&cw_Smarty_Internal_Resource_Eval,&coo_Smarty_Internal_Resource_Eval},
  {0xBDE67EAEED371F56LL,"Smarty_Internal_SmartyTemplateCompiler",1+(int64)&cw_Smarty_Internal_SmartyTemplateCompiler,&coo_Smarty_Internal_SmartyTemplateCompiler},
  {0xC6BB91AF0FE2CD59LL,"Smarty_Internal_Resource_Stream",1+(int64)&cw_Smarty_Internal_Resource_Stream,&coo_Smarty_Internal_Resource_Stream},
  {0x9BBECB00A0967A5ALL,"Smarty_Internal_Compile_Forelse",1+(int64)&cw_Smarty_Internal_Compile_Forelse,&coo_Smarty_Internal_Compile_Forelse},
  {0xA149B61AA8A04F5DLL,"TP_yyStackEntry",1+(int64)&cw_TP_yyStackEntry,&coo_TP_yyStackEntry},
  {0x977CEFB868A97261LL,"Smarty_Internal_Compile_For",1+(int64)&cw_Smarty_Internal_Compile_For,&coo_Smarty_Internal_Compile_For},
  {0xAA32BC064E4EB962LL,"Smarty_Internal_Resource_PHP",1+(int64)&cw_Smarty_Internal_Resource_PHP,&coo_Smarty_Internal_Resource_PHP},
  {0xD33F0E3BA7F32B63LL,"Smarty_Internal_Get_Include_Path",1+(int64)&cw_Smarty_Internal_Get_Include_Path,&coo_Smarty_Internal_Get_Include_Path},
  {0xD2757923E7684C64LL,"_smarty_text",1+(int64)&cw__smarty_text,&coo__smarty_text},
  {0x3E3FD0346320DF64LL,"Smarty_Internal_Compile_Private_Registered_Function",1+(int64)&cw_Smarty_Internal_Compile_Private_Registered_Function,&coo_Smarty_Internal_Compile_Private_Registered_Function},
  {0xACF9612517BAEE65LL,"Smarty_Internal_Compile_Foreachelse",1+(int64)&cw_Smarty_Internal_Compile_Foreachelse,&coo_Smarty_Internal_Compile_Foreachelse},
  {0xB0FE0516CBCAF56ELL,"Smarty_Internal_Compile_Private_Object_Function",1+(int64)&cw_Smarty_Internal_Compile_Private_Object_Function,&coo_Smarty_Internal_Compile_Private_Object_Function},
  {0xA3E084E03A94BE71LL,"Smarty_Internal_Template",1+(int64)&cw_Smarty_Internal_Template,&coo_Smarty_Internal_Template},
  {0xA84C877F982B1977LL,"Smarty_Internal_Compile_Private_Block_Plugin",1+(int64)&cw_Smarty_Internal_Compile_Private_Block_Plugin,&coo_Smarty_Internal_Compile_Private_Block_Plugin},
  {0xBD8C617516F3AD7ELL,"Smarty_Internal_Wrapper",1+(int64)&cw_Smarty_Internal_Wrapper,&coo_Smarty_Internal_Wrapper},
  {0x38DDE9428F1EF87ELL,"_smarty_code",1+(int64)&cw__smarty_code,&coo__smarty_code},
  {0xF7F472C15CEA877FLL,"Smarty_Internal_Compile_Break",1+(int64)&cw_Smarty_Internal_Compile_Break,&coo_Smarty_Internal_Compile_Break},
  {0xD007B7D877C1C287LL,"Smarty_Internal_Config_File_Compiler",1+(int64)&cw_Smarty_Internal_Config_File_Compiler,&coo_Smarty_Internal_Config_File_Compiler},
  {0x7CA4099072A9BC87LL,"Smarty_Internal_Resource_Extends",1+(int64)&cw_Smarty_Internal_Resource_Extends,&coo_Smarty_Internal_Resource_Extends},
  {0x835854992C8DC588LL,"Smarty_Internal_Resource_String",1+(int64)&cw_Smarty_Internal_Resource_String,&coo_Smarty_Internal_Resource_String},
  {0xE06C50635743AD8ALL,"_smarty_parsetree",1+(int64)&cw__smarty_parsetree,&coo__smarty_parsetree},
  {0xF6BA767709844C8BLL,"Smarty_Internal_Write_File",1+(int64)&cw_Smarty_Internal_Write_File,&coo_Smarty_Internal_Write_File},
  {0xECB1EC8D13F9B490LL,"Smarty_Internal_Compile_CaptureClose",1+(int64)&cw_Smarty_Internal_Compile_CaptureClose,&coo_Smarty_Internal_Compile_CaptureClose},
  {0xF87D20B781C91A96LL,"Smarty_Internal_Compile_Whileclose",1+(int64)&cw_Smarty_Internal_Compile_Whileclose,&coo_Smarty_Internal_Compile_Whileclose},
  {0xAA0F92A56B674C9ELL,"Smarty_Internal_Compile_Call",1+(int64)&cw_Smarty_Internal_Compile_Call,&coo_Smarty_Internal_Compile_Call},
  {0x84F2FAAF7C9C1D9FLL,"_smarty_tag",1+(int64)&cw__smarty_tag,&coo__smarty_tag},
  {0xD5DCF1C947AFEAA0LL,"Smarty_Variable",1+(int64)&cw_Smarty_Variable,&coo_Smarty_Variable},
  {0x73BF59C30E4A6FA0LL,"Smarty_Internal_Compile_Debug",1+(int64)&cw_Smarty_Internal_Compile_Debug,&coo_Smarty_Internal_Compile_Debug},
  {0xC804C20750ED42A3LL,"Smarty_Internal_Templatelexer",1+(int64)&cw_Smarty_Internal_Templatelexer,&coo_Smarty_Internal_Templatelexer},
  {0xEC9EC01DBB27EAA6LL,"Smarty_Internal_Compile_Private_Print_Expression",1+(int64)&cw_Smarty_Internal_Compile_Private_Print_Expression,&coo_Smarty_Internal_Compile_Private_Print_Expression},
  {0xBD266BDF2B6A8BA7LL,"Smarty_Internal_Compile_Else",1+(int64)&cw_Smarty_Internal_Compile_Else,&coo_Smarty_Internal_Compile_Else},
  {0xF9DEED715460F5A8LL,"_smarty_template_buffer",1+(int64)&cw__smarty_template_buffer,&coo__smarty_template_buffer},
  {0xCF69DB5502DA91AALL,"Smarty_Internal_Compile_Section",1+(int64)&cw_Smarty_Internal_Compile_Section,&coo_Smarty_Internal_Compile_Section},
  {0x9FCC639EC0419FABLL,"Smarty_Internal_Compile_Private_Modifier",1+(int64)&cw_Smarty_Internal_Compile_Private_Modifier,&coo_Smarty_Internal_Compile_Private_Modifier},
  {0x6625C127442824ABLL,"Smarty_Internal_Debug",1+(int64)&cw_Smarty_Internal_Debug,&coo_Smarty_Internal_Debug},
  {0xAD2385833CCD7FAFLL,"Smarty_Internal_Compile_Private_Special_Variable",1+(int64)&cw_Smarty_Internal_Compile_Private_Special_Variable,&coo_Smarty_Internal_Compile_Private_Special_Variable},
  {0xF4C8192F0EA0ADB1LL,"Smarty_Internal_Filter_Handler",1+(int64)&cw_Smarty_Internal_Filter_Handler,&coo_Smarty_Internal_Filter_Handler},
  {0xB223E6318F246CB6LL,"Smarty_Internal_Data",1+(int64)&cw_Smarty_Internal_Data,&coo_Smarty_Internal_Data},
  {0xF1BB1C6A220216BCLL,"_smarty_dq_content",1+(int64)&cw__smarty_dq_content,&coo__smarty_dq_content},
  {0xB26FFF8C5EC394BDLL,"Smarty_Internal_Compile_Eval",1+(int64)&cw_Smarty_Internal_Compile_Eval,&coo_Smarty_Internal_Compile_Eval},
  {0xB697E26397DFBDC3LL,"Smarty_Internal_Compile_While",1+(int64)&cw_Smarty_Internal_Compile_While,&coo_Smarty_Internal_Compile_While},
  {0xF1AF129EEE5C2AC5LL,"_smarty_doublequoted",1+(int64)&cw__smarty_doublequoted,&coo__smarty_doublequoted},
  {0x9A2108EF36BAC0C6LL,"Smarty_Internal_Compile_Nocache",1+(int64)&cw_Smarty_Internal_Compile_Nocache,&coo_Smarty_Internal_Compile_Nocache},
  {0x7A3272F6FB46B5C6LL,"Smarty_Internal_Compile_Ldelim",1+(int64)&cw_Smarty_Internal_Compile_Ldelim,&coo_Smarty_Internal_Compile_Ldelim},
  {0x64642C2C974E87C6LL,"Smarty_Internal_Compile_Rdelim",1+(int64)&cw_Smarty_Internal_Compile_Rdelim,&coo_Smarty_Internal_Compile_Rdelim},
  {0x8CDC655BF5DA2ACALL,"Smarty",1+(int64)&cw_Smarty,&coo_Smarty},
  {0x310FE5BC6BAF2BCALL,"Smarty_Internal_Configfilelexer",1+(int64)&cw_Smarty_Internal_Configfilelexer,&coo_Smarty_Internal_Configfilelexer},
  {0xCA2F7803E74D28CDLL,"Smarty_Internal_Function_Call_Handler",1+(int64)&cw_Smarty_Internal_Function_Call_Handler,&coo_Smarty_Internal_Function_Call_Handler},
  {0x1C4881F63ACF32CDLL,"Smarty_Internal_Compile_Blockclose",1+(int64)&cw_Smarty_Internal_Compile_Blockclose,&coo_Smarty_Internal_Compile_Blockclose},
  {0x8C0868FAA9B9E3D0LL,"Smarty_Internal_Compile_Functionclose",1+(int64)&cw_Smarty_Internal_Compile_Functionclose,&coo_Smarty_Internal_Compile_Functionclose},
  {0xB232CAF6A801CED2LL,"Smarty_Internal_Compile_Include_Php",1+(int64)&cw_Smarty_Internal_Compile_Include_Php,&coo_Smarty_Internal_Compile_Include_Php},
  {0xDF3B83A9C66AA8D4LL,"Undefined_Smarty_Variable",1+(int64)&cw_Undefined_Smarty_Variable,&coo_Undefined_Smarty_Variable},
  {0x6B8914AC7C1508D4LL,"Smarty_Internal_Compile_Block",1+(int64)&cw_Smarty_Internal_Compile_Block,&coo_Smarty_Internal_Compile_Block},
  {0x9F495757E400FFE1LL,"Smarty_Security",1+(int64)&cw_Smarty_Security,&coo_Smarty_Security},
  {0xBBED92FE6ECEF6E2LL,"Smarty_Internal_Resource_Registered",1+(int64)&cw_Smarty_Internal_Resource_Registered,&coo_Smarty_Internal_Resource_Registered},
  {0xEE86BA396FBD56E7LL,"Smarty_Internal_Filter",1+(int64)&cw_Smarty_Internal_Filter,&coo_Smarty_Internal_Filter},
  {0x9D2701EFE645FBEBLL,"TP_yyToken",1+(int64)&cw_TP_yyToken,&coo_TP_yyToken},
  {0xD85AD80256FE84ECLL,"Smarty_Internal_Compile_Private_Object_Block_Function",1+(int64)&cw_Smarty_Internal_Compile_Private_Object_Block_Function,&coo_Smarty_Internal_Compile_Private_Object_Block_Function},
  {0xB5A1F76A9ECF5FEELL,"TPC_yyStackEntry",1+(int64)&cw_TPC_yyStackEntry,&coo_TPC_yyStackEntry},
  {0xC3CB574EA5BB03F0LL,"Smarty_Internal_Compile_Append",1+(int64)&cw_Smarty_Internal_Compile_Append,&coo_Smarty_Internal_Compile_Append},
  {0xB2968FC82EC638F1LL,"Smarty_Internal_Compile_Private_Registered_Block",1+(int64)&cw_Smarty_Internal_Compile_Private_Registered_Block,&coo_Smarty_Internal_Compile_Private_Registered_Block},
  {0xA2F123D50F48AFF7LL,"SmartyCompilerException",1+(int64)&cw_SmartyCompilerException,&coo_SmartyCompilerException},
  {0xA818083376D09CF8LL,"Smarty_Internal_Compile_Continue",1+(int64)&cw_Smarty_Internal_Compile_Continue,&coo_Smarty_Internal_Compile_Continue},
  {0x066F77B50F86D3F8LL,"Smarty_Internal_Compile_Foreach",1+(int64)&cw_Smarty_Internal_Compile_Foreach,&coo_Smarty_Internal_Compile_Foreach},
  {0x970A5E5F20375BFCLL,"Smarty_Internal_Compile_Sectionelse",1+(int64)&cw_Smarty_Internal_Compile_Sectionelse,&coo_Smarty_Internal_Compile_Sectionelse},
  {0xA207CCD26D8F69FDLL,"Smarty_Internal_Nocache_Insert",1+(int64)&cw_Smarty_Internal_Nocache_Insert,&coo_Smarty_Internal_Nocache_Insert},
  { -1,0,0,0 } };
static const int ctdMapTable[] = {
  -1,-1,-1,0,1,2,-1,-1,
  -1,3,4,6,7,-1,-1,-1,
  9,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,10,-1,-1,-1,-1,11,
  -1,-1,-1,-1,12,-1,-1,-1,
  -1,-1,13,-1,14,-1,-1,16,
  -1,-1,17,18,19,-1,-1,21,
  -1,-1,-1,22,24,-1,25,26,
  -1,-1,-1,-1,-1,27,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,28,29,-1,
  -1,30,31,-1,-1,32,-1,-1,
  -1,33,34,35,36,38,-1,-1,
  -1,-1,-1,-1,-1,-1,39,-1,
  -1,40,-1,-1,-1,-1,-1,41,
  -1,-1,-1,-1,-1,-1,42,44,
  -1,-1,-1,-1,-1,-1,-1,45,
  47,-1,48,49,-1,-1,-1,-1,
  50,-1,-1,-1,-1,-1,51,-1,
  -1,-1,-1,-1,-1,-1,52,53,
  54,-1,-1,56,-1,-1,57,58,
  59,-1,60,61,-1,-1,-1,63,
  -1,64,-1,-1,-1,-1,65,-1,
  -1,-1,-1,-1,66,67,-1,-1,
  -1,-1,-1,68,-1,69,70,-1,
  -1,-1,73,-1,-1,75,-1,-1,
  77,-1,78,-1,79,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,81,82,-1,-1,-1,-1,83,
  -1,-1,-1,84,85,-1,86,-1,
  87,88,-1,-1,-1,-1,-1,89,
  90,-1,-1,-1,92,93,-1,-1,

};

static const hashNodeCTD *
findCTD(CStrRef name) {
  int64 hash = name->hash();
  int o = ctdMapTable[hash & 255];
  if (UNLIKELY(o < 0)) return NULL;
  const hashNodeCTD *p = &ctdBuckets[o];
  int64 h = p->hash & (uint64(-1)>>1);
  do {
    if (h == hash && (LIKELY(p->name==name.data())||LIKELY(!strcasecmp(p->name, name.data())))) return p;
    h = (++p)->hash;
  } while (h >= 0);
  return NULL;
}
Variant get_class_var_init(CStrRef s, const char *var) {
  DECLARE_GLOBAL_VARIABLES(g);
  const hashNodeCTD *p = findCTD(s);
  if (!p) return get_builtin_class_var_init(s, var);
  return getCallbacks(p,s,g)->os_getInit(var);
}
ObjectData *create_object_only_no_init(CStrRef s, ObjectData* root /* = NULL*/) {
  DECLARE_GLOBAL_VARIABLES(g);
  const hashNodeCTD *p = findCTD(s);
  if (!p) return create_builtin_object_only_no_init(s, root);
  return getCallbacks(p,s,g)->createOnlyNoInit(root);
}
Object create_object_only(CStrRef s, ObjectData* root /* = NULL*/) {
  Object r(create_object_only_no_init(s, root));
  r->init();
  return r;
}
bool get_call_info_static_method(MethodCallPackage &mcp) {
  StringData *s ATTRIBUTE_UNUSED (mcp.rootCls);
  DECLARE_GLOBAL_VARIABLES(g);
  const hashNodeCTD *p = findCTD(StrNR(s));
  if (!p) return get_call_info_static_method_builtin(mcp);
  return getCallbacks(p,s,g)->os_get_call_info(mcp, -1);
}
const ObjectStaticCallbacks * get_object_static_callbacks(CStrRef s) {
  DECLARE_GLOBAL_VARIABLES(g);
  const hashNodeCTD *p = findCTD(s);
  if (!p) return get_builtin_object_static_callbacks(s);
  return getCallbacks(p,s,g);
}
Variant get_static_property(CStrRef s, const char *prop) {
  {
    const ObjectStaticCallbacks * cwo = get_object_static_callbacks(s);
    if (cwo) return cwo->os_get(prop);
  }
  return get_builtin_static_property(s, prop);
}
Variant *get_static_property_lv(CStrRef s, const char *prop) {
  {
    const ObjectStaticCallbacks * cwo = get_object_static_callbacks(s);
    if (cwo) return &cwo->os_lval(prop);
  }
  return get_builtin_static_property_lv(s, prop);
}
Variant get_class_constant(CStrRef s, const char *constant, bool fatal /* = true */) {
  {
    const ObjectStaticCallbacks * cwo = get_object_static_callbacks(s);
    if (cwo) return cwo->os_constant(constant);
  }
  return get_builtin_class_constant(s, constant, fatal);
}

///////////////////////////////////////////////////////////////////////////////
}
