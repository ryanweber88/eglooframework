
#include <runtime/base/hphp.h>
#include <sys/global_variables.h>

namespace hphp_impl_starter {}

using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const StaticString k_VARIABLE_PAYLOAD;


// Get Constant Table
class hashNodeCon {
public:
  hashNodeCon() {}
  hashNodeCon(int64 h, const char *n, int64 o, int64 t,
              int64 *p) :
    hash(h), name(n), off(o), type(t), next(NULL) {
    if (off > 0) return;
    switch (t) {
    case 2: case 32: case 64: case 128: case 256: case 512: case 65535:
      value = p;
      break;
    default: assert(false);
    }
  }
  int64 hash;
  const char *name;
  int64 off;
  int64 type;
  int64 *value;
  hashNodeCon *next;
};
static hashNodeCon *conMapTable[16];
static hashNodeCon conBuckets[8];

void init_constant_table() {
  init_builtin_constant_table();
  const char *conMapData[] = {
      (const char *)"DS", (const char *)((offsetof(GlobalVariables, k_DS) -  offsetof(GlobalVariables, tgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"SMARTY_DIR", (const char *)((offsetof(GlobalVariables, k_SMARTY_DIR) -  offsetof(GlobalVariables, tgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"SMARTY_PLUGINS_DIR", (const char *)((offsetof(GlobalVariables, k_SMARTY_PLUGINS_DIR) -  offsetof(GlobalVariables, tgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"SMARTY_RESOURCE_CHAR_SET", (const char *)((offsetof(GlobalVariables, k_SMARTY_RESOURCE_CHAR_SET) -  offsetof(GlobalVariables, tgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"SMARTY_RESOURCE_DATE_FORMAT", (const char *)((offsetof(GlobalVariables, k_SMARTY_RESOURCE_DATE_FORMAT) -  offsetof(GlobalVariables, tgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"SMARTY_SPL_AUTOLOAD", (const char *)((offsetof(GlobalVariables, k_SMARTY_SPL_AUTOLOAD) -  offsetof(GlobalVariables, tgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"SMARTY_SYSPLUGINS_DIR", (const char *)((offsetof(GlobalVariables, k_SMARTY_SYSPLUGINS_DIR) -  offsetof(GlobalVariables, tgv_Variant)) / sizeof(Variant) + 1), (const char *)NULL, (const char *)NULL,
      (const char *)"VARIABLE_PAYLOAD", (const char *)-1, (const char *)128, (const char *)&k_VARIABLE_PAYLOAD,
    NULL, NULL, NULL, NULL
  };
  hashNodeCon *b = conBuckets;
  for (const char **s = conMapData; *s; s++, b++) {
    const char *name = *s++;
    int64 off = (int64)(*s++);
    int64 type = (int64)(*s++);
    int64 *p = (int64*)(*s);
    int64 hash = hash_string(name, strlen(name));
    hashNodeCon *node =
      new(b) hashNodeCon(hash, name, off, type, p);
    int h = hash & 15;
    if (conMapTable[h]) node->next = conMapTable[h];
    conMapTable[h] = node;
  }
}

static const hashNodeCon *
findCon(const char *name, int64 hash) {
  for (const hashNodeCon *p = conMapTable[hash & 15]; p; p = p->next) {
    if (p->hash == hash && !strcmp(p->name, name)) return p;
  }
  return NULL;
}
Variant get_constant(CStrRef name, bool error) {
  DECLARE_GLOBAL_VARIABLES(g);
  const hashNodeCon *p = findCon(name.data(), name->hash());
  if (!p) return get_builtin_constant(name, error);
  if (p->off < 0) {
    switch (p->type) {
    case 2: return *(bool*)(p->value);
    case 32: return *(int64*)(p->value);
    case 64: return *(double*)(p->value);
    case 128: return *(StaticString*)(p->value);
    case 256: return *(StaticArray*)(p->value);
    case 512: { CVarRef (*f)()=(CVarRef(*)())(p->value); return (*f)(); }
    case 65535: return *(Variant*)(p->value);
    default: assert(false);
    }
  }
  return getDynamicConstant(g->tgv_Variant[p->off-1], name);
}

///////////////////////////////////////////////////////////////////////////////
}
