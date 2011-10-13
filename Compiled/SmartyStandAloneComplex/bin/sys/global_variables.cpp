
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>
#include <sys/cpputil.h>
#include <sys/literal_strings.h>

namespace hphp_impl_starter {}
using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool has_eval_support = false;
GlobalVariables::~GlobalVariables() {}
#ifndef OMIT_JUMP_TABLE_GLOBAL_GETIMPL
class hashNodeGV {
public:
  hashNodeGV() {}
  hashNodeGV(int64 h, const char *n, int64 l, int64 o, int64 i) :
    hash(h), name(n), len(l), off(o), index(i), next(NULL) {}
  int64 hash;
  const char *name;
  int64 len;
  int64 off;
  int64 index;
  hashNodeGV *next;
};
static hashNodeGV *gvMapTable[64];
static hashNodeGV gvBuckets[21];

#define GET_GV_OFFSET(n) (offsetof(GlobalVariables, n))
const char *gvMapData[] = {
  (const char *)"HTTP_RAW_POST_DATA",
  (const char *)18,
  (const char *)GET_GV_OFFSET(gvm_HTTP_RAW_POST_DATA),
  (const char *)0,
  (const char *)"_COOKIE",
  (const char *)7,
  (const char *)GET_GV_OFFSET(gvm__COOKIE),
  (const char *)1,
  (const char *)"_ENV",
  (const char *)4,
  (const char *)GET_GV_OFFSET(gvm__ENV),
  (const char *)2,
  (const char *)"_FILES",
  (const char *)6,
  (const char *)GET_GV_OFFSET(gvm__FILES),
  (const char *)3,
  (const char *)"_GET",
  (const char *)4,
  (const char *)GET_GV_OFFSET(gvm__GET),
  (const char *)4,
  (const char *)"_POST",
  (const char *)5,
  (const char *)GET_GV_OFFSET(gvm__POST),
  (const char *)5,
  (const char *)"_REQUEST",
  (const char *)8,
  (const char *)GET_GV_OFFSET(gvm__REQUEST),
  (const char *)6,
  (const char *)"_SERVER",
  (const char *)7,
  (const char *)GET_GV_OFFSET(gvm__SERVER),
  (const char *)7,
  (const char *)"_SESSION",
  (const char *)8,
  (const char *)GET_GV_OFFSET(gvm__SESSION),
  (const char *)8,
  (const char *)"argc",
  (const char *)4,
  (const char *)GET_GV_OFFSET(gvm_argc),
  (const char *)9,
  (const char *)"argv",
  (const char *)4,
  (const char *)GET_GV_OFFSET(gvm_argv),
  (const char *)10,
  (const char *)"http_response_header",
  (const char *)20,
  (const char *)GET_GV_OFFSET(gvm_http_response_header),
  (const char *)11,
  (const char *)"_from",
  (const char *)5,
  (const char *)GET_GV_OFFSET(gvm__from),
  (const char *)12,
  (const char *)"_smarty_tpl",
  (const char *)11,
  (const char *)GET_GV_OFFSET(gvm__smarty_tpl),
  (const char *)13,
  (const char *)"_template",
  (const char *)9,
  (const char *)GET_GV_OFFSET(gvm__template),
  (const char *)14,
  (const char *)"_tpl_stack",
  (const char *)10,
  (const char *)GET_GV_OFFSET(gvm__tpl_stack),
  (const char *)15,
  (const char *)"content",
  (const char *)7,
  (const char *)GET_GV_OFFSET(gvm_content),
  (const char *)16,
  (const char *)"parameters",
  (const char *)10,
  (const char *)GET_GV_OFFSET(gvm_parameters),
  (const char *)17,
  (const char *)"registeredAutoLoadFunctions",
  (const char *)27,
  (const char *)GET_GV_OFFSET(gvm_registeredAutoLoadFunctions),
  (const char *)18,
  (const char *)"smarty",
  (const char *)6,
  (const char *)GET_GV_OFFSET(gvm_smarty),
  (const char *)19,
  (const char *)"tmp",
  (const char *)3,
  (const char *)GET_GV_OFFSET(gvm_tmp),
  (const char *)20,
  NULL, NULL, NULL, NULL,
};

static class GVTableInitializer {
  public: GVTableInitializer() {
    hashNodeGV *b = gvBuckets;
    for (const char **s = gvMapData; *s; s++, b++) {
      const char *name = *s++;
      int64 len = (int64)(*s++);
      int64 off = (int64)(*s++);
      int64 index = (int64)(*s);
      int64 hash = hash_string(name, len);
      hashNodeGV *node = new(b) hashNodeGV
        (hash, name, len, off, index);
      int h = hash & 63;
      if (gvMapTable[h]) node->next = gvMapTable[h];
      gvMapTable[h] = node;
    }
  }
} gv_table_initializer;

static inline const hashNodeGV *
findGV(const char *name, int64 hash) {
  for (const hashNodeGV *p = gvMapTable[hash & 63];
       p; p = p->next) {
    if (p->hash == hash && strcmp(p->name, name) == 0) return p;
  }
  return NULL;
}
static inline const hashNodeGV *
findGV(const char *name, int64 len, int64 hash) {
  for (const hashNodeGV *p = gvMapTable[hash & 63];
       p; p = p->next) {
    if (p->hash == hash && p->len == len &&
        memcmp(p->name, name, len) == 0) {
      return p;
    }
  }
  return NULL;
}

Variant &GlobalVariables::getImpl(CStrRef s) {
  const hashNodeGV *p = findGV(s.data(), s.size(), s->hash());
  if (p) return *(Variant *)((char *)this + p->off);
  return LVariableTable::getImpl(s);
}
#endif // OMIT_JUMP_TABLE_GLOBAL_GETIMPL
class hashNodeClassExists {
public:
  hashNodeClassExists() {}
  hashNodeClassExists(int64 h, const char *n, const void *s, int64 o) :
    hash(h), name(n), str(s), off(o), next(NULL) {}
  int64 hash;
  const char *name;
  const void *str;
  int64 off;
  hashNodeClassExists *next;
};
static hashNodeClassExists *classExistsMapTable[256];
static hashNodeClassExists classExistsBuckets[94];

static class ClassExistsTableInitializer {
  public: ClassExistsTableInitializer() {
    const char *classExistsMapData[] = {
      (const char *)"Smarty_Internal_Resource_String",
      (const char *)&(NAMSTR(s_ss389ca200, "Smarty_Internal_Resource_String")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_resource_string),
      (const char *)"Smarty_Internal_Filter",
      (const char *)&(NAMSTR(s_ss0a29deb6, "Smarty_Internal_Filter")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_filter),
      (const char *)"Smarty_Internal_Compile_CaptureClose",
      (const char *)&(NAMSTR(s_ssfa9a1d45, "Smarty_Internal_Compile_CaptureClose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_captureclose),
      (const char *)"Smarty_Internal_Resource_Eval",
      (const char *)&(NAMSTR(s_ss418e5ab8, "Smarty_Internal_Resource_Eval")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_resource_eval),
      (const char *)"Smarty_Internal_Compile_Config_Load",
      (const char *)&(NAMSTR(s_ssa7667476, "Smarty_Internal_Compile_Config_Load")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_config_load),
      (const char *)"_smarty_text",
      (const char *)&(NAMSTR(s_ssb74b9e0f, "_smarty_text")),
      (const char *)GET_GV_OFFSET(cdec__smarty_text),
      (const char *)"Smarty_Internal_CompileBase",
      (const char *)&(NAMSTR(s_sseac12080, "Smarty_Internal_CompileBase")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compilebase),
      (const char *)"Smarty_Variable",
      (const char *)&(NAMSTR(s_ssea7f06d8, "Smarty_Variable")),
      (const char *)GET_GV_OFFSET(cdec_smarty_variable),
      (const char *)"Smarty_Internal_TemplateCompilerBase",
      (const char *)&(NAMSTR(s_ssc4f26d76, "Smarty_Internal_TemplateCompilerBase")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_templatecompilerbase),
      (const char *)"_smarty_template_buffer",
      (const char *)&(NAMSTR(s_ss172b5002, "_smarty_template_buffer")),
      (const char *)GET_GV_OFFSET(cdec__smarty_template_buffer),
      (const char *)"Smarty_Internal_Resource_PHP",
      (const char *)&(NAMSTR(s_ss5a229bb0, "Smarty_Internal_Resource_PHP")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_resource_php),
      (const char *)"Smarty_Internal_Config_File_Compiler",
      (const char *)&(NAMSTR(s_ss3498b9e6, "Smarty_Internal_Config_File_Compiler")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_config_file_compiler),
      (const char *)"Smarty_Internal_Nocache_Insert",
      (const char *)&(NAMSTR(s_ss1914f316, "Smarty_Internal_Nocache_Insert")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_nocache_insert),
      (const char *)"Smarty_Internal_Template",
      (const char *)&(NAMSTR(s_ss8c4725e0, "Smarty_Internal_Template")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_template),
      (const char *)"Smarty_Internal_Compile_If",
      (const char *)&(NAMSTR(s_ss5298cc3b, "Smarty_Internal_Compile_If")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_if),
      (const char *)"Smarty_Internal_Templateparser",
      (const char *)&(NAMSTR(s_ss351e8449, "Smarty_Internal_Templateparser")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_templateparser),
      (const char *)"Smarty_Internal_Compile_Private_Registered_Block",
      (const char *)&(NAMSTR(s_sse8847798, "Smarty_Internal_Compile_Private_Registered_Block")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_registered_block),
      (const char *)"Smarty_Internal_Compile_Elseif",
      (const char *)&(NAMSTR(s_ss0af1bc44, "Smarty_Internal_Compile_Elseif")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_elseif),
      (const char *)"Smarty_Internal_Resource_Stream",
      (const char *)&(NAMSTR(s_ss57e316fb, "Smarty_Internal_Resource_Stream")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_resource_stream),
      (const char *)"Smarty_Internal_Compile_Private_Modifier",
      (const char *)&(NAMSTR(s_ss16f6bd8a, "Smarty_Internal_Compile_Private_Modifier")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_modifier),
      (const char *)"Smarty_Internal_Write_File",
      (const char *)&(NAMSTR(s_ss1ff6c55c, "Smarty_Internal_Write_File")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_write_file),
      (const char *)"_smarty_doublequoted",
      (const char *)&(NAMSTR(s_ss9331670d, "_smarty_doublequoted")),
      (const char *)GET_GV_OFFSET(cdec__smarty_doublequoted),
      (const char *)"Smarty_Internal_Compile_Capture",
      (const char *)&(NAMSTR(s_ssdf30771b, "Smarty_Internal_Compile_Capture")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_capture),
      (const char *)"Smarty_Internal_Get_Include_Path",
      (const char *)&(NAMSTR(s_ss30028e0c, "Smarty_Internal_Get_Include_Path")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_get_include_path),
      (const char *)"Smarty",
      (const char *)&(NAMSTR(s_sscf405241, "Smarty")),
      (const char *)GET_GV_OFFSET(cdec_smarty),
      (const char *)"Smarty_Internal_Compile_Include_Php",
      (const char *)&(NAMSTR(s_ssa17f7714, "Smarty_Internal_Compile_Include_Php")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_include_php),
      (const char *)"Smarty_Internal_Resource_File",
      (const char *)&(NAMSTR(s_ss0876fae5, "Smarty_Internal_Resource_File")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_resource_file),
      (const char *)"Smarty_Internal_Compile_Foreachclose",
      (const char *)&(NAMSTR(s_ssd5f62c25, "Smarty_Internal_Compile_Foreachclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_foreachclose),
      (const char *)"Smarty_Internal_Compile_Eval",
      (const char *)&(NAMSTR(s_ss258850ee, "Smarty_Internal_Compile_Eval")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_eval),
      (const char *)"Smarty_Internal_Data",
      (const char *)&(NAMSTR(s_ssf6f068b0, "Smarty_Internal_Data")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_data),
      (const char *)"Smarty_Internal_Filter_Handler",
      (const char *)&(NAMSTR(s_ss1b85235e, "Smarty_Internal_Filter_Handler")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_filter_handler),
      (const char *)"TPC_yyStackEntry",
      (const char *)&(NAMSTR(s_ss157497c3, "TPC_yyStackEntry")),
      (const char *)GET_GV_OFFSET(cdec_tpc_yystackentry),
      (const char *)"Smarty_Internal_Configfileparser",
      (const char *)&(NAMSTR(s_ss9c6f005b, "Smarty_Internal_Configfileparser")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_configfileparser),
      (const char *)"Smarty_Internal_Compile_Break",
      (const char *)&(NAMSTR(s_ss0b1ccd4d, "Smarty_Internal_Compile_Break")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_break),
      (const char *)"Smarty_Internal_Compile_Else",
      (const char *)&(NAMSTR(s_ssf8412866, "Smarty_Internal_Compile_Else")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_else),
      (const char *)"Smarty_Internal_Register",
      (const char *)&(NAMSTR(s_ss5560ac5e, "Smarty_Internal_Register")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_register),
      (const char *)"Smarty_Internal_CacheResource_File",
      (const char *)&(NAMSTR(s_ss1753f549, "Smarty_Internal_CacheResource_File")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_cacheresource_file),
      (const char *)"Smarty_Internal_Config",
      (const char *)&(NAMSTR(s_sse10bc7fa, "Smarty_Internal_Config")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_config),
      (const char *)"Smarty_Internal_Compile_Forelse",
      (const char *)&(NAMSTR(s_ssb6dc9a40, "Smarty_Internal_Compile_Forelse")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_forelse),
      (const char *)"Smarty_Internal_Compile_Private_Object_Function",
      (const char *)&(NAMSTR(s_ss4ae3b3e9, "Smarty_Internal_Compile_Private_Object_Function")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_object_function),
      (const char *)"Smarty_Internal_Resource_Extends",
      (const char *)&(NAMSTR(s_sse6e5b5b7, "Smarty_Internal_Resource_Extends")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_resource_extends),
      (const char *)"Smarty_Internal_Compile_Continue",
      (const char *)&(NAMSTR(s_ss83c441ef, "Smarty_Internal_Compile_Continue")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_continue),
      (const char *)"Smarty_Internal_Compile_Nocache",
      (const char *)&(NAMSTR(s_ssc4417f48, "Smarty_Internal_Compile_Nocache")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_nocache),
      (const char *)"Smarty_Internal_Compile_Ldelim",
      (const char *)&(NAMSTR(s_ss48a81c5a, "Smarty_Internal_Compile_Ldelim")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_ldelim),
      (const char *)"Smarty_Internal_Compile_Sectionelse",
      (const char *)&(NAMSTR(s_ss5cfb8f74, "Smarty_Internal_Compile_Sectionelse")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_sectionelse),
      (const char *)"Smarty_Internal_Compile_Debug",
      (const char *)&(NAMSTR(s_ss20fb0adf, "Smarty_Internal_Compile_Debug")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_debug),
      (const char *)"Smarty_Internal_Compile_Call",
      (const char *)&(NAMSTR(s_ss4ffb9720, "Smarty_Internal_Compile_Call")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_call),
      (const char *)"Smarty_Internal_Compile_Append",
      (const char *)&(NAMSTR(s_ss3a2c5792, "Smarty_Internal_Compile_Append")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_append),
      (const char *)"Smarty_Internal_Configfilelexer",
      (const char *)&(NAMSTR(s_ssd4333d3e, "Smarty_Internal_Configfilelexer")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_configfilelexer),
      (const char *)"Smarty_Internal_Compile_Private_Block_Plugin",
      (const char *)&(NAMSTR(s_sse5a0da11, "Smarty_Internal_Compile_Private_Block_Plugin")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_block_plugin),
      (const char *)"Smarty_Internal_Compile_Sectionclose",
      (const char *)&(NAMSTR(s_ss40486751, "Smarty_Internal_Compile_Sectionclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_sectionclose),
      (const char *)"Smarty_Internal_Compile_Forclose",
      (const char *)&(NAMSTR(s_ss7c5b6002, "Smarty_Internal_Compile_Forclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_forclose),
      (const char *)"Smarty_Internal_Compile_Assign",
      (const char *)&(NAMSTR(s_ss2cc44ceb, "Smarty_Internal_Compile_Assign")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_assign),
      (const char *)"Smarty_Internal_Compile_Foreach",
      (const char *)&(NAMSTR(s_ss6059351e, "Smarty_Internal_Compile_Foreach")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_foreach),
      (const char *)"Smarty_Internal_Templatelexer",
      (const char *)&(NAMSTR(s_ss86ff4809, "Smarty_Internal_Templatelexer")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_templatelexer),
      (const char *)"Smarty_Internal_Compile_Extends",
      (const char *)&(NAMSTR(s_ss20e284cf, "Smarty_Internal_Compile_Extends")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_extends),
      (const char *)"_smarty_parsetree",
      (const char *)&(NAMSTR(s_ss9cc930d0, "_smarty_parsetree")),
      (const char *)GET_GV_OFFSET(cdec__smarty_parsetree),
      (const char *)"Smarty_Internal_Compile_Rdelim",
      (const char *)&(NAMSTR(s_sseda5194e, "Smarty_Internal_Compile_Rdelim")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_rdelim),
      (const char *)"Smarty_Internal_Wrapper",
      (const char *)&(NAMSTR(s_ss5a3c06cf, "Smarty_Internal_Wrapper")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_wrapper),
      (const char *)"Smarty_Internal_Compile_Foreachelse",
      (const char *)&(NAMSTR(s_ssda7baf87, "Smarty_Internal_Compile_Foreachelse")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_foreachelse),
      (const char *)"Smarty_Internal_Compile_Private_Object_Block_Function",
      (const char *)&(NAMSTR(s_ssf78b8e94, "Smarty_Internal_Compile_Private_Object_Block_Function")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_object_block_function),
      (const char *)"Smarty_Internal_Compile_Nocacheclose",
      (const char *)&(NAMSTR(s_ss7fe6a4dc, "Smarty_Internal_Compile_Nocacheclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_nocacheclose),
      (const char *)"Smarty_Internal_Resource_Registered",
      (const char *)&(NAMSTR(s_ssa8d14851, "Smarty_Internal_Resource_Registered")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_resource_registered),
      (const char *)"Smarty_Internal_Compile_Section",
      (const char *)&(NAMSTR(s_ss417e27d1, "Smarty_Internal_Compile_Section")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_section),
      (const char *)"Smarty_Internal_Compile_While",
      (const char *)&(NAMSTR(s_ss40582261, "Smarty_Internal_Compile_While")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_while),
      (const char *)"Smarty_Internal_Function_Call_Handler",
      (const char *)&(NAMSTR(s_ss19c09bc8, "Smarty_Internal_Function_Call_Handler")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_function_call_handler),
      (const char *)"Smarty_Data",
      (const char *)&(NAMSTR(s_ss9f38b5fd, "Smarty_Data")),
      (const char *)GET_GV_OFFSET(cdec_smarty_data),
      (const char *)"Smarty_Internal_Compile_Private_Registered_Function",
      (const char *)&(NAMSTR(s_ssc00aa0e7, "Smarty_Internal_Compile_Private_Registered_Function")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_registered_function),
      (const char *)"Smarty_Internal_Compile_Private_Print_Expression",
      (const char *)&(NAMSTR(s_ssf875fa5c, "Smarty_Internal_Compile_Private_Print_Expression")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_print_expression),
      (const char *)"Smarty_Internal_Compile_Insert",
      (const char *)&(NAMSTR(s_sse4198a85, "Smarty_Internal_Compile_Insert")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_insert),
      (const char *)"TP_yyStackEntry",
      (const char *)&(NAMSTR(s_ss88e42ad3, "TP_yyStackEntry")),
      (const char *)GET_GV_OFFSET(cdec_tp_yystackentry),
      (const char *)"Smarty_Internal_Compile_Private_Function_Plugin",
      (const char *)&(NAMSTR(s_ss16bbdefc, "Smarty_Internal_Compile_Private_Function_Plugin")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_function_plugin),
      (const char *)"Smarty_Internal_Compile_For",
      (const char *)&(NAMSTR(s_ss5a35a0cf, "Smarty_Internal_Compile_For")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_for),
      (const char *)"_smarty_code",
      (const char *)&(NAMSTR(s_ss795535ad, "_smarty_code")),
      (const char *)GET_GV_OFFSET(cdec__smarty_code),
      (const char *)"Smarty_Security",
      (const char *)&(NAMSTR(s_ss0b9fa2bd, "Smarty_Security")),
      (const char *)GET_GV_OFFSET(cdec_smarty_security),
      (const char *)"Smarty_Internal_Debug",
      (const char *)&(NAMSTR(s_ss28e51c93, "Smarty_Internal_Debug")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_debug),
      (const char *)"Smarty_Internal_Compile_Private_Special_Variable",
      (const char *)&(NAMSTR(s_ss9ac3bffb, "Smarty_Internal_Compile_Private_Special_Variable")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_private_special_variable),
      (const char *)"Smarty_Internal_Compile_Functionclose",
      (const char *)&(NAMSTR(s_ss94699a65, "Smarty_Internal_Compile_Functionclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_functionclose),
      (const char *)"Undefined_Smarty_Variable",
      (const char *)&(NAMSTR(s_ssd94c7c1f, "Undefined_Smarty_Variable")),
      (const char *)GET_GV_OFFSET(cdec_undefined_smarty_variable),
      (const char *)"Smarty_Internal_Compile_Blockclose",
      (const char *)&(NAMSTR(s_ss7610bbf1, "Smarty_Internal_Compile_Blockclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_blockclose),
      (const char *)"Smarty_Internal_Compile_Block",
      (const char *)&(NAMSTR(s_ss7fb89ca7, "Smarty_Internal_Compile_Block")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_block),
      (const char *)"_smarty_linebreak",
      (const char *)&(NAMSTR(s_ss5b9943c5, "_smarty_linebreak")),
      (const char *)GET_GV_OFFSET(cdec__smarty_linebreak),
      (const char *)"Smarty_Internal_Compile_Include",
      (const char *)&(NAMSTR(s_ssfbbb956b, "Smarty_Internal_Compile_Include")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_include),
      (const char *)"Smarty_Internal_SmartyTemplateCompiler",
      (const char *)&(NAMSTR(s_ss4b77f454, "Smarty_Internal_SmartyTemplateCompiler")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_smartytemplatecompiler),
      (const char *)"Smarty_Internal_Compile_Whileclose",
      (const char *)&(NAMSTR(s_ss2e4a549b, "Smarty_Internal_Compile_Whileclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_whileclose),
      (const char *)"SmartyException",
      (const char *)&(NAMSTR(s_sscc70645f, "SmartyException")),
      (const char *)GET_GV_OFFSET(cdec_smartyexception),
      (const char *)"_smarty_tag",
      (const char *)&(NAMSTR(s_sse95d3705, "_smarty_tag")),
      (const char *)GET_GV_OFFSET(cdec__smarty_tag),
      (const char *)"Smarty_Internal_Compile_Function",
      (const char *)&(NAMSTR(s_sse4ad6453, "Smarty_Internal_Compile_Function")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_function),
      (const char *)"Smarty_Internal_Compile_Ifclose",
      (const char *)&(NAMSTR(s_ss049c6c10, "Smarty_Internal_Compile_Ifclose")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_compile_ifclose),
      (const char *)"Smarty_Internal_Utility",
      (const char *)&(NAMSTR(s_ss17b9a8dc, "Smarty_Internal_Utility")),
      (const char *)GET_GV_OFFSET(cdec_smarty_internal_utility),
      (const char *)"SmartyCompilerException",
      (const char *)&(NAMSTR(s_ss9d2ea485, "SmartyCompilerException")),
      (const char *)GET_GV_OFFSET(cdec_smartycompilerexception),
      (const char *)"_smarty_dq_content",
      (const char *)&(NAMSTR(s_ss43ce1529, "_smarty_dq_content")),
      (const char *)GET_GV_OFFSET(cdec__smarty_dq_content),
      (const char *)"TP_yyToken",
      (const char *)&(NAMSTR(s_ssc90988f1, "TP_yyToken")),
      (const char *)GET_GV_OFFSET(cdec_tp_yytoken),
      (const char *)"TPC_yyToken",
      (const char *)&(NAMSTR(s_ssc61aed88, "TPC_yyToken")),
      (const char *)GET_GV_OFFSET(cdec_tpc_yytoken),
      NULL, NULL, NULL,
    };
    hashNodeClassExists *b = classExistsBuckets;
    for (const char **s = classExistsMapData; *s; s++, b++) {
      const char *name = *s++;
      const void *str = (const void *)(*s++);
      int64 off = (int64)(*s);
      int64 hash = hash_string(name, strlen(name));
      hashNodeClassExists *node = new(b) hashNodeClassExists
        (hash, name, str, off);
      int h = hash & 255;
      if (classExistsMapTable[h]) node->next = classExistsMapTable[h];
      classExistsMapTable[h] = node;
    }
  }
} class_exists_table_initializer;

static inline const hashNodeClassExists *
findClassExists(const char *name, int64 hash) {
  for (const hashNodeClassExists *p = classExistsMapTable[hash & 255];
       p; p = p->next) {
    if (p->hash == hash) {
       const char *s = ((String*)(p->str))->data();
       if (s == name || strcasecmp(s, name) == 0) return p;
    }
  }
  return NULL;
}

bool GlobalVariables::class_exists(CStrRef s) {
  const hashNodeClassExists *p = findClassExists(s.data(), s->hash());
  if (p) return *(bool *)((char *)this + p->off);
  return false;
}
#ifndef OMIT_JUMP_TABLE_GLOBAL_EXISTS
bool GlobalVariables::exists(CStrRef s) const {
  const hashNodeGV *p = findGV(s.data(), s.size(), s->hash());
  if (p) return isInitialized(*(Variant *)((char *)this + p->off));
  if (!LVariableTable::exists(s)) return false;
  return isInitialized(const_cast<GlobalVariables*>(this)->get(s));
}
#endif // OMIT_JUMP_TABLE_GLOBAL_EXISTS
#ifndef OMIT_JUMP_TABLE_GLOBAL_GETINDEX
ssize_t GlobalVariables::getIndex(const char* s, int64 hash) const {
  const GlobalVariables *g ATTRIBUTE_UNUSED = this;
  if (hash < 0) hash = hash_string(s);
  const hashNodeGV *p = findGV(s, hash);
  if (p) return p->index;
  return m_px ? (m_px->getIndex(s) + 21) : -1;
}
#endif // OMIT_JUMP_TABLE_GLOBAL_GETINDEX

CVarRef GlobalVariables::getRefByIdx(ssize_t idx, Variant &k) {
  GlobalVariables *g ATTRIBUTE_UNUSED = this;
  if (idx >= 0 && idx < 21) {
    k = gvMapData[idx << 2]; // idx * 4
    if (idx < 12) {
      return g->stgv_Variant[idx];
    } else {
      return g->tgv_Variant[idx - 12];
    }
  }
  return Globals::getRefByIdx(idx, k);
}

///////////////////////////////////////////////////////////////////////////////
}
