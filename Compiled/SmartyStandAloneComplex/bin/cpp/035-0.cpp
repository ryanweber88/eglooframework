
#include <php/Smarty/libs/sysplugins/smarty_internal_templateparser.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templateparser.fws.h>

// Dependencies
#include <php/Smarty/libs/Smarty.class.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_compile_block.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_parsetree.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 87 */
const StaticString q_Smarty_Internal_Templateparser___Err1(LITSTR_INIT("Security error: Call to private object member not allowed"));
const StaticString q_Smarty_Internal_Templateparser___Err2(LITSTR_INIT("Security error: Call to dynamic object member not allowed"));
const int64 q_Smarty_Internal_Templateparser___TP_VERT = 1LL;
const int64 q_Smarty_Internal_Templateparser___TP_COLON = 2LL;
const int64 q_Smarty_Internal_Templateparser___TP_COMMENT = 3LL;
const int64 q_Smarty_Internal_Templateparser___TP_PHPSTARTTAG = 4LL;
const int64 q_Smarty_Internal_Templateparser___TP_PHPENDTAG = 5LL;
const int64 q_Smarty_Internal_Templateparser___TP_ASPSTARTTAG = 6LL;
const int64 q_Smarty_Internal_Templateparser___TP_ASPENDTAG = 7LL;
const int64 q_Smarty_Internal_Templateparser___TP_FAKEPHPSTARTTAG = 8LL;
const int64 q_Smarty_Internal_Templateparser___TP_XMLTAG = 9LL;
const int64 q_Smarty_Internal_Templateparser___TP_OTHER = 10LL;
const int64 q_Smarty_Internal_Templateparser___TP_LINEBREAK = 11LL;
const int64 q_Smarty_Internal_Templateparser___TP_LITERALSTART = 12LL;
const int64 q_Smarty_Internal_Templateparser___TP_LITERALEND = 13LL;
const int64 q_Smarty_Internal_Templateparser___TP_LITERAL = 14LL;
const int64 q_Smarty_Internal_Templateparser___TP_LDEL = 15LL;
const int64 q_Smarty_Internal_Templateparser___TP_RDEL = 16LL;
const int64 q_Smarty_Internal_Templateparser___TP_DOLLAR = 17LL;
const int64 q_Smarty_Internal_Templateparser___TP_ID = 18LL;
const int64 q_Smarty_Internal_Templateparser___TP_EQUAL = 19LL;
const int64 q_Smarty_Internal_Templateparser___TP_PTR = 20LL;
const int64 q_Smarty_Internal_Templateparser___TP_LDELIF = 21LL;
const int64 q_Smarty_Internal_Templateparser___TP_LDELFOR = 22LL;
const int64 q_Smarty_Internal_Templateparser___TP_SEMICOLON = 23LL;
const int64 q_Smarty_Internal_Templateparser___TP_INCDEC = 24LL;
const int64 q_Smarty_Internal_Templateparser___TP_TO = 25LL;
const int64 q_Smarty_Internal_Templateparser___TP_STEP = 26LL;
const int64 q_Smarty_Internal_Templateparser___TP_LDELFOREACH = 27LL;
const int64 q_Smarty_Internal_Templateparser___TP_SPACE = 28LL;
const int64 q_Smarty_Internal_Templateparser___TP_AS = 29LL;
const int64 q_Smarty_Internal_Templateparser___TP_APTR = 30LL;
const int64 q_Smarty_Internal_Templateparser___TP_SMARTYBLOCKCHILD = 31LL;
const int64 q_Smarty_Internal_Templateparser___TP_LDELSLASH = 32LL;
const int64 q_Smarty_Internal_Templateparser___TP_INTEGER = 33LL;
const int64 q_Smarty_Internal_Templateparser___TP_COMMA = 34LL;
const int64 q_Smarty_Internal_Templateparser___TP_OPENP = 35LL;
const int64 q_Smarty_Internal_Templateparser___TP_CLOSEP = 36LL;
const int64 q_Smarty_Internal_Templateparser___TP_MATH = 37LL;
const int64 q_Smarty_Internal_Templateparser___TP_UNIMATH = 38LL;
const int64 q_Smarty_Internal_Templateparser___TP_ANDSYM = 39LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISIN = 40LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISDIVBY = 41LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISNOTDIVBY = 42LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISEVEN = 43LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISNOTEVEN = 44LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISEVENBY = 45LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISNOTEVENBY = 46LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISODD = 47LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISNOTODD = 48LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISODDBY = 49LL;
const int64 q_Smarty_Internal_Templateparser___TP_ISNOTODDBY = 50LL;
const int64 q_Smarty_Internal_Templateparser___TP_INSTANCEOF = 51LL;
const int64 q_Smarty_Internal_Templateparser___TP_QMARK = 52LL;
const int64 q_Smarty_Internal_Templateparser___TP_NOT = 53LL;
const int64 q_Smarty_Internal_Templateparser___TP_TYPECAST = 54LL;
const int64 q_Smarty_Internal_Templateparser___TP_HEX = 55LL;
const int64 q_Smarty_Internal_Templateparser___TP_DOT = 56LL;
const int64 q_Smarty_Internal_Templateparser___TP_SINGLEQUOTESTRING = 57LL;
const int64 q_Smarty_Internal_Templateparser___TP_DOUBLECOLON = 58LL;
const int64 q_Smarty_Internal_Templateparser___TP_AT = 59LL;
const int64 q_Smarty_Internal_Templateparser___TP_HATCH = 60LL;
const int64 q_Smarty_Internal_Templateparser___TP_OPENB = 61LL;
const int64 q_Smarty_Internal_Templateparser___TP_CLOSEB = 62LL;
const int64 q_Smarty_Internal_Templateparser___TP_EQUALS = 63LL;
const int64 q_Smarty_Internal_Templateparser___TP_NOTEQUALS = 64LL;
const int64 q_Smarty_Internal_Templateparser___TP_GREATERTHAN = 65LL;
const int64 q_Smarty_Internal_Templateparser___TP_LESSTHAN = 66LL;
const int64 q_Smarty_Internal_Templateparser___TP_GREATEREQUAL = 67LL;
const int64 q_Smarty_Internal_Templateparser___TP_LESSEQUAL = 68LL;
const int64 q_Smarty_Internal_Templateparser___TP_IDENTITY = 69LL;
const int64 q_Smarty_Internal_Templateparser___TP_NONEIDENTITY = 70LL;
const int64 q_Smarty_Internal_Templateparser___TP_MOD = 71LL;
const int64 q_Smarty_Internal_Templateparser___TP_LAND = 72LL;
const int64 q_Smarty_Internal_Templateparser___TP_LOR = 73LL;
const int64 q_Smarty_Internal_Templateparser___TP_LXOR = 74LL;
const int64 q_Smarty_Internal_Templateparser___TP_QUOTE = 75LL;
const int64 q_Smarty_Internal_Templateparser___TP_BACKTICK = 76LL;
const int64 q_Smarty_Internal_Templateparser___TP_DOLLARID = 77LL;
const int64 q_Smarty_Internal_Templateparser___YY_NO_ACTION = 590LL;
const int64 q_Smarty_Internal_Templateparser___YY_ACCEPT_ACTION = 589LL;
const int64 q_Smarty_Internal_Templateparser___YY_ERROR_ACTION = 588LL;
const int64 q_Smarty_Internal_Templateparser___YY_SZ_ACTTAB = 2637LL;
const int64 q_Smarty_Internal_Templateparser___YY_SHIFT_USE_DFLT = -45LL;
const int64 q_Smarty_Internal_Templateparser___YY_SHIFT_MAX = 252LL;
const int64 q_Smarty_Internal_Templateparser___YY_REDUCE_USE_DFLT = -91LL;
const int64 q_Smarty_Internal_Templateparser___YY_REDUCE_MAX = 206LL;
const int64 q_Smarty_Internal_Templateparser___YYNOCODE = 121LL;
const int64 q_Smarty_Internal_Templateparser___YYSTACKDEPTH = 100LL;
const int64 q_Smarty_Internal_Templateparser___YYNSTATE = 387LL;
const int64 q_Smarty_Internal_Templateparser___YYNRULE = 201LL;
const int64 q_Smarty_Internal_Templateparser___YYERRORSYMBOL = 78LL;
const StaticString q_Smarty_Internal_Templateparser___YYERRSYMDT(LITSTR_INIT("yy0"));
const int64 q_Smarty_Internal_Templateparser___YYFALLBACK = 0LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Templateparser)
const InstanceOfInfo c_Smarty_Internal_Templateparser::s_instanceof_table[] = {
  {0x4C986BA3BD561F24LL,1,"Smarty_Internal_Templateparser",&cw_Smarty_Internal_Templateparser},
};
const int c_Smarty_Internal_Templateparser::s_instanceof_index[] = {
  1,
  0,-1,
};
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r64((void*)&c_Smarty_Internal_Templateparser::i_yy_r64, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r64, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r59((void*)&c_Smarty_Internal_Templateparser::i_yy_r59, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r59, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r70((void*)&c_Smarty_Internal_Templateparser::i_yy_r70, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r70, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r65((void*)&c_Smarty_Internal_Templateparser::i_yy_r65, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r65, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r72((void*)&c_Smarty_Internal_Templateparser::i_yy_r72, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r72, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r67((void*)&c_Smarty_Internal_Templateparser::i_yy_r67, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r67, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r73((void*)&c_Smarty_Internal_Templateparser::i_yy_r73, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r73, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r75((void*)&c_Smarty_Internal_Templateparser::i_yy_r75, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r75, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r82((void*)&c_Smarty_Internal_Templateparser::i_yy_r82, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r82, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r83((void*)&c_Smarty_Internal_Templateparser::i_yy_r83, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r83, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r78((void*)&c_Smarty_Internal_Templateparser::i_yy_r78, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r78, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r84((void*)&c_Smarty_Internal_Templateparser::i_yy_r84, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r84, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r79((void*)&c_Smarty_Internal_Templateparser::i_yy_r79, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r79, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_find_shift_action((void*)&c_Smarty_Internal_Templateparser::i_yy_find_shift_action, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_find_shift_action, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r90((void*)&c_Smarty_Internal_Templateparser::i_yy_r90, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r90, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r85((void*)&c_Smarty_Internal_Templateparser::i_yy_r85, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r85, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r91((void*)&c_Smarty_Internal_Templateparser::i_yy_r91, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r91, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r86((void*)&c_Smarty_Internal_Templateparser::i_yy_r86, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r86, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r92((void*)&c_Smarty_Internal_Templateparser::i_yy_r92, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r92, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r93((void*)&c_Smarty_Internal_Templateparser::i_yy_r93, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r93, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r88((void*)&c_Smarty_Internal_Templateparser::i_yy_r88, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r88, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r89((void*)&c_Smarty_Internal_Templateparser::i_yy_r89, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r89, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_tokenname((void*)&c_Smarty_Internal_Templateparser::i_tokenname, (void*)&c_Smarty_Internal_Templateparser::ifa_tokenname, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r99((void*)&c_Smarty_Internal_Templateparser::i_yy_r99, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r99, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_trace((void*)&c_Smarty_Internal_Templateparser::i_trace, (void*)&c_Smarty_Internal_Templateparser::ifa_trace, 2, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_is_expected_token((void*)&c_Smarty_Internal_Templateparser::i_yy_is_expected_token, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_is_expected_token, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_syntax_error((void*)&c_Smarty_Internal_Templateparser::i_yy_syntax_error, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_syntax_error, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci___destruct((void*)&c_Smarty_Internal_Templateparser::i___destruct, (void*)&c_Smarty_Internal_Templateparser::ifa___destruct, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_find_reduce_action((void*)&c_Smarty_Internal_Templateparser::i_yy_find_reduce_action, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_find_reduce_action, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_destructor((void*)&c_Smarty_Internal_Templateparser::i_yy_destructor, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_destructor, 2, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci___construct((void*)&c_Smarty_Internal_Templateparser::i___construct, (void*)&c_Smarty_Internal_Templateparser::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_escape_end_tag((void*)&c_Smarty_Internal_Templateparser::i_escape_end_tag, (void*)&c_Smarty_Internal_Templateparser::ifa_escape_end_tag, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_accept((void*)&c_Smarty_Internal_Templateparser::i_yy_accept, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_accept, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r100((void*)&c_Smarty_Internal_Templateparser::i_yy_r100, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r100, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_escape_start_tag((void*)&c_Smarty_Internal_Templateparser::i_escape_start_tag, (void*)&c_Smarty_Internal_Templateparser::ifa_escape_start_tag, 1, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r101((void*)&c_Smarty_Internal_Templateparser::i_yy_r101, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r101, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r104((void*)&c_Smarty_Internal_Templateparser::i_yy_r104, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r104, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r110((void*)&c_Smarty_Internal_Templateparser::i_yy_r110, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r110, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r111((void*)&c_Smarty_Internal_Templateparser::i_yy_r111, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r111, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_reduce((void*)&c_Smarty_Internal_Templateparser::i_yy_reduce, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_reduce, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r112((void*)&c_Smarty_Internal_Templateparser::i_yy_r112, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r112, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r114((void*)&c_Smarty_Internal_Templateparser::i_yy_r114, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r114, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r109((void*)&c_Smarty_Internal_Templateparser::i_yy_r109, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r109, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r121((void*)&c_Smarty_Internal_Templateparser::i_yy_r121, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r121, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r122((void*)&c_Smarty_Internal_Templateparser::i_yy_r122, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r122, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r117((void*)&c_Smarty_Internal_Templateparser::i_yy_r117, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r117, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r118((void*)&c_Smarty_Internal_Templateparser::i_yy_r118, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r118, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r124((void*)&c_Smarty_Internal_Templateparser::i_yy_r124, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r124, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r119((void*)&c_Smarty_Internal_Templateparser::i_yy_r119, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r119, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r130((void*)&c_Smarty_Internal_Templateparser::i_yy_r130, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r130, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r125((void*)&c_Smarty_Internal_Templateparser::i_yy_r125, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r125, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r131((void*)&c_Smarty_Internal_Templateparser::i_yy_r131, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r131, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r126((void*)&c_Smarty_Internal_Templateparser::i_yy_r126, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r126, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r132((void*)&c_Smarty_Internal_Templateparser::i_yy_r132, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r132, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r127((void*)&c_Smarty_Internal_Templateparser::i_yy_r127, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r127, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r133((void*)&c_Smarty_Internal_Templateparser::i_yy_r133, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r133, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r128((void*)&c_Smarty_Internal_Templateparser::i_yy_r128, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r128, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_parse_failed((void*)&c_Smarty_Internal_Templateparser::i_yy_parse_failed, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_parse_failed, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r134((void*)&c_Smarty_Internal_Templateparser::i_yy_r134, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r134, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r129((void*)&c_Smarty_Internal_Templateparser::i_yy_r129, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r129, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r140((void*)&c_Smarty_Internal_Templateparser::i_yy_r140, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r140, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r135((void*)&c_Smarty_Internal_Templateparser::i_yy_r135, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r135, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r141((void*)&c_Smarty_Internal_Templateparser::i_yy_r141, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r141, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_printtrace((void*)&c_Smarty_Internal_Templateparser::i_printtrace, (void*)&c_Smarty_Internal_Templateparser::ifa_printtrace, 0, 12, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r142((void*)&c_Smarty_Internal_Templateparser::i_yy_r142, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r142, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r137((void*)&c_Smarty_Internal_Templateparser::i_yy_r137, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r137, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r143((void*)&c_Smarty_Internal_Templateparser::i_yy_r143, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r143, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r144((void*)&c_Smarty_Internal_Templateparser::i_yy_r144, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r144, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r139((void*)&c_Smarty_Internal_Templateparser::i_yy_r139, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r139, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r200((void*)&c_Smarty_Internal_Templateparser::i_yy_r200, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r200, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r150((void*)&c_Smarty_Internal_Templateparser::i_yy_r150, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r150, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r145((void*)&c_Smarty_Internal_Templateparser::i_yy_r145, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r145, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r151((void*)&c_Smarty_Internal_Templateparser::i_yy_r151, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r151, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r146((void*)&c_Smarty_Internal_Templateparser::i_yy_r146, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r146, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r152((void*)&c_Smarty_Internal_Templateparser::i_yy_r152, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r152, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r147((void*)&c_Smarty_Internal_Templateparser::i_yy_r147, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r147, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r153((void*)&c_Smarty_Internal_Templateparser::i_yy_r153, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r153, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r148((void*)&c_Smarty_Internal_Templateparser::i_yy_r148, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r148, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r149((void*)&c_Smarty_Internal_Templateparser::i_yy_r149, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r149, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r160((void*)&c_Smarty_Internal_Templateparser::i_yy_r160, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r160, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r161((void*)&c_Smarty_Internal_Templateparser::i_yy_r161, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r161, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r156((void*)&c_Smarty_Internal_Templateparser::i_yy_r156, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r156, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r162((void*)&c_Smarty_Internal_Templateparser::i_yy_r162, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r162, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r157((void*)&c_Smarty_Internal_Templateparser::i_yy_r157, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r157, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r159((void*)&c_Smarty_Internal_Templateparser::i_yy_r159, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r159, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r170((void*)&c_Smarty_Internal_Templateparser::i_yy_r170, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r170, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r171((void*)&c_Smarty_Internal_Templateparser::i_yy_r171, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r171, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r172((void*)&c_Smarty_Internal_Templateparser::i_yy_r172, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r172, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r167((void*)&c_Smarty_Internal_Templateparser::i_yy_r167, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r167, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r173((void*)&c_Smarty_Internal_Templateparser::i_yy_r173, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r173, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r168((void*)&c_Smarty_Internal_Templateparser::i_yy_r168, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r168, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r174((void*)&c_Smarty_Internal_Templateparser::i_yy_r174, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r174, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r169((void*)&c_Smarty_Internal_Templateparser::i_yy_r169, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r169, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r180((void*)&c_Smarty_Internal_Templateparser::i_yy_r180, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r180, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r175((void*)&c_Smarty_Internal_Templateparser::i_yy_r175, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r175, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r181((void*)&c_Smarty_Internal_Templateparser::i_yy_r181, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r181, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r176((void*)&c_Smarty_Internal_Templateparser::i_yy_r176, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r176, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r177((void*)&c_Smarty_Internal_Templateparser::i_yy_r177, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r177, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r0((void*)&c_Smarty_Internal_Templateparser::i_yy_r0, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r0, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r183((void*)&c_Smarty_Internal_Templateparser::i_yy_r183, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r183, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r178((void*)&c_Smarty_Internal_Templateparser::i_yy_r178, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r178, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r1((void*)&c_Smarty_Internal_Templateparser::i_yy_r1, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r1, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r184((void*)&c_Smarty_Internal_Templateparser::i_yy_r184, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r184, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r179((void*)&c_Smarty_Internal_Templateparser::i_yy_r179, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r179, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r190((void*)&c_Smarty_Internal_Templateparser::i_yy_r190, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r190, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r185((void*)&c_Smarty_Internal_Templateparser::i_yy_r185, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r185, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_shift((void*)&c_Smarty_Internal_Templateparser::i_yy_shift, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_shift, 3, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r191((void*)&c_Smarty_Internal_Templateparser::i_yy_r191, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r191, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r186((void*)&c_Smarty_Internal_Templateparser::i_yy_r186, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r186, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r4((void*)&c_Smarty_Internal_Templateparser::i_yy_r4, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r4, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r192((void*)&c_Smarty_Internal_Templateparser::i_yy_r192, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r192, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r5((void*)&c_Smarty_Internal_Templateparser::i_yy_r5, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r5, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r188((void*)&c_Smarty_Internal_Templateparser::i_yy_r188, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r188, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r6((void*)&c_Smarty_Internal_Templateparser::i_yy_r6, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r6, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r194((void*)&c_Smarty_Internal_Templateparser::i_yy_r194, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r194, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r189((void*)&c_Smarty_Internal_Templateparser::i_yy_r189, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r189, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r7((void*)&c_Smarty_Internal_Templateparser::i_yy_r7, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r7, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r8((void*)&c_Smarty_Internal_Templateparser::i_yy_r8, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r8, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r196((void*)&c_Smarty_Internal_Templateparser::i_yy_r196, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r196, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r9((void*)&c_Smarty_Internal_Templateparser::i_yy_r9, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r9, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r197((void*)&c_Smarty_Internal_Templateparser::i_yy_r197, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r197, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r198((void*)&c_Smarty_Internal_Templateparser::i_yy_r198, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r198, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_get_expected_tokens((void*)&c_Smarty_Internal_Templateparser::i_yy_get_expected_tokens, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_get_expected_tokens, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_pop_parser_stack((void*)&c_Smarty_Internal_Templateparser::i_yy_pop_parser_stack, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_pop_parser_stack, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r10((void*)&c_Smarty_Internal_Templateparser::i_yy_r10, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r10, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r11((void*)&c_Smarty_Internal_Templateparser::i_yy_r11, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r11, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r12((void*)&c_Smarty_Internal_Templateparser::i_yy_r12, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r12, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r13((void*)&c_Smarty_Internal_Templateparser::i_yy_r13, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r13, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r14((void*)&c_Smarty_Internal_Templateparser::i_yy_r14, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r14, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r15((void*)&c_Smarty_Internal_Templateparser::i_yy_r15, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r15, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r21((void*)&c_Smarty_Internal_Templateparser::i_yy_r21, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r21, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r16((void*)&c_Smarty_Internal_Templateparser::i_yy_r16, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r16, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r17((void*)&c_Smarty_Internal_Templateparser::i_yy_r17, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r17, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r23((void*)&c_Smarty_Internal_Templateparser::i_yy_r23, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r23, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r24((void*)&c_Smarty_Internal_Templateparser::i_yy_r24, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r24, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r19((void*)&c_Smarty_Internal_Templateparser::i_yy_r19, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r19, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r25((void*)&c_Smarty_Internal_Templateparser::i_yy_r25, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r25, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r31((void*)&c_Smarty_Internal_Templateparser::i_yy_r31, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r31, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r26((void*)&c_Smarty_Internal_Templateparser::i_yy_r26, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r26, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r27((void*)&c_Smarty_Internal_Templateparser::i_yy_r27, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r27, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r33((void*)&c_Smarty_Internal_Templateparser::i_yy_r33, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r33, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r28((void*)&c_Smarty_Internal_Templateparser::i_yy_r28, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r28, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_doparse((void*)&c_Smarty_Internal_Templateparser::i_doparse, (void*)&c_Smarty_Internal_Templateparser::ifa_doparse, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r40((void*)&c_Smarty_Internal_Templateparser::i_yy_r40, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r40, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r35((void*)&c_Smarty_Internal_Templateparser::i_yy_r35, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r35, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r41((void*)&c_Smarty_Internal_Templateparser::i_yy_r41, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r41, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r36((void*)&c_Smarty_Internal_Templateparser::i_yy_r36, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r36, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r42((void*)&c_Smarty_Internal_Templateparser::i_yy_r42, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r42, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r37((void*)&c_Smarty_Internal_Templateparser::i_yy_r37, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r37, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r43((void*)&c_Smarty_Internal_Templateparser::i_yy_r43, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r43, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r38((void*)&c_Smarty_Internal_Templateparser::i_yy_r38, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r38, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r39((void*)&c_Smarty_Internal_Templateparser::i_yy_r39, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r39, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r50((void*)&c_Smarty_Internal_Templateparser::i_yy_r50, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r50, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r51((void*)&c_Smarty_Internal_Templateparser::i_yy_r51, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r51, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r46((void*)&c_Smarty_Internal_Templateparser::i_yy_r46, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r46, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r52((void*)&c_Smarty_Internal_Templateparser::i_yy_r52, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r52, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r47((void*)&c_Smarty_Internal_Templateparser::i_yy_r47, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r47, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r53((void*)&c_Smarty_Internal_Templateparser::i_yy_r53, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r53, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r48((void*)&c_Smarty_Internal_Templateparser::i_yy_r48, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r48, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r54((void*)&c_Smarty_Internal_Templateparser::i_yy_r54, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r54, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r49((void*)&c_Smarty_Internal_Templateparser::i_yy_r49, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r49, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r60((void*)&c_Smarty_Internal_Templateparser::i_yy_r60, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r60, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r55((void*)&c_Smarty_Internal_Templateparser::i_yy_r55, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r55, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r61((void*)&c_Smarty_Internal_Templateparser::i_yy_r61, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r61, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r56((void*)&c_Smarty_Internal_Templateparser::i_yy_r56, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r56, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r62((void*)&c_Smarty_Internal_Templateparser::i_yy_r62, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r62, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r57((void*)&c_Smarty_Internal_Templateparser::i_yy_r57, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r57, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r63((void*)&c_Smarty_Internal_Templateparser::i_yy_r63, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r63, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templateparser::ci_yy_r58((void*)&c_Smarty_Internal_Templateparser::i_yy_r58, (void*)&c_Smarty_Internal_Templateparser::ifa_yy_r58, 0, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Templateparser::i_yy_find_shift_action(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_find_shift_action, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_find_shift_action", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_find_shift_action(arg0));
  }
}
Variant c_Smarty_Internal_Templateparser::i_tokenname(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_tokenname, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::tokenName", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_tokenname(arg0));
  }
}
Variant c_Smarty_Internal_Templateparser::i_trace(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::Trace", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Templateparser::t_trace(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Templateparser::i_yy_is_expected_token(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_is_expected_token, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_is_expected_token", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_is_expected_token(arg0));
  }
}
Variant c_Smarty_Internal_Templateparser::i_yy_syntax_error(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_syntax_error, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_syntax_error", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_yy_syntax_error(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Templateparser::i_yy_find_reduce_action(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_find_reduce_action, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_find_reduce_action", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_yy_find_reduce_action(arg0, arg1));
  }
}
Variant c_Smarty_Internal_Templateparser::i_yy_destructor(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_destructor", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (c_Smarty_Internal_Templateparser::t_yy_destructor(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Templateparser::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Templateparser::i_escape_end_tag(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::escape_end_tag", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Templateparser::t_escape_end_tag(arg0));
  }
}
Variant c_Smarty_Internal_Templateparser::i_escape_start_tag(MethodCallPackage &mcp, CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::escape_start_tag", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (c_Smarty_Internal_Templateparser::t_escape_start_tag(arg0));
  }
}
Variant c_Smarty_Internal_Templateparser::i_yy_reduce(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_reduce, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_reduce", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_reduce(arg0), null);
  }
}
Variant c_Smarty_Internal_Templateparser::i_yy_shift(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_shift, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_shift", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    CVarRef arg2(UNLIKELY(count <= 2) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_yy_shift(arg0, arg1, arg2), null);
  }
}
Variant c_Smarty_Internal_Templateparser::i_yy_get_expected_tokens(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_get_expected_tokens, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_get_expected_tokens", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_get_expected_tokens(arg0));
  }
}
Variant c_Smarty_Internal_Templateparser::i_doparse(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_doparse, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::doParse", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t_doparse(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r64(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r64, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r64(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r59(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r59, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r59(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r70(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r70, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r70(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r65(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r65, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r65(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r72(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r72, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r72(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r67(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r67, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r67(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r73(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r73, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r73(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r75(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r75, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r75(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r82(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r82, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r82(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r83(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r83, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r83(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r78(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r78, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r78(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r84(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r84, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r84(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r79(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r79, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r79(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_find_shift_action(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_find_shift_action, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_find_shift_action", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_find_shift_action(arg0));
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r90(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r90, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r90(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r85(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r85, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r85(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r91(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r91, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r91(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r86(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r86, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r86(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r92(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r92, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r92(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r93(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r93, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r93(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r88(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r88, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r88(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r89(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r89, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r89(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_tokenname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_tokenname, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::tokenName", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_tokenname(arg0));
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r99(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r99, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r99(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_trace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::Trace", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (c_Smarty_Internal_Templateparser::t_trace(arg0, arg1), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_is_expected_token(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_is_expected_token, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_is_expected_token", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_is_expected_token(arg0));
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_syntax_error(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_syntax_error, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_syntax_error", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_yy_syntax_error(arg0, arg1), null);
}
Variant c_Smarty_Internal_Templateparser::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t___destruct());
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_find_reduce_action(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_find_reduce_action, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_find_reduce_action", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_yy_find_reduce_action(arg0, arg1));
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_destructor(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_destructor", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (c_Smarty_Internal_Templateparser::t_yy_destructor(arg0, arg1), null);
}
Variant c_Smarty_Internal_Templateparser::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_escape_end_tag(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::escape_end_tag", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Templateparser::t_escape_end_tag(arg0));
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_accept(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_accept, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_accept(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r100(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r100, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r100(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_escape_start_tag(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::escape_start_tag", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (c_Smarty_Internal_Templateparser::t_escape_start_tag(arg0));
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r101(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r101, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r101(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r104(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r104, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r104(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r110(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r110, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r110(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r111(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r111, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r111(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_reduce(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_reduce, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_reduce", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_reduce(arg0), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r112(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r112, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r112(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r114(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r114, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r114(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r109(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r109, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r109(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r121(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r121, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r121(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r122(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r122, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r122(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r117(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r117, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r117(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r118(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r118, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r118(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r124(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r124, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r124(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r119(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r119, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r119(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r130(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r130, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r130(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r125(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r125, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r125(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r131(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r131, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r131(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r126(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r126, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r126(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r132(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r132, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r132(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r127(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r127, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r127(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r133(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r133, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r133(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r128(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r128, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r128(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_parse_failed(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_parse_failed, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_parse_failed(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r134(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r134, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r134(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r129(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r129, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r129(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r140(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r140, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r140(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r135(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r135, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r135(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r141(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r141, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r141(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_printtrace(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  return (c_Smarty_Internal_Templateparser::t_printtrace(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r142(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r142, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r142(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r137(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r137, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r137(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r143(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r143, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r143(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r144(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r144, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r144(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r139(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r139, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r139(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r200(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r200, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r200(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r150(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r150, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r150(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r145(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r145, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r145(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r151(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r151, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r151(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r146(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r146, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r146(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r152(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r152, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r152(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r147(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r147, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r147(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r153(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r153, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r153(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r148(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r148, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r148(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r149(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r149, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r149(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r160(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r160, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r160(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r161(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r161, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r161(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r156(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r156, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r156(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r162(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r162, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r162(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r157(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r157, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r157(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r159(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r159, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r159(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r170(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r170, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r170(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r171(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r171, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r171(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r172(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r172, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r172(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r167(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r167, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r167(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r173(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r173, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r173(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r168(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r168, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r168(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r174(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r174, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r174(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r169(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r169, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r169(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r180(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r180, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r180(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r175(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r175, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r175(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r181(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r181, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r181(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r176(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r176, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r176(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r177(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r177, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r177(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r0(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r0, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r0(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r183(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r183, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r183(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r178(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r178, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r178(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r1(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r184(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r184, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r184(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r179(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r179, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r179(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r190(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r190, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r190(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r185(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r185, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r185(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_shift(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_shift, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 3)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_shift", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  CVarRef arg2(UNLIKELY(count <= 2) ? null_variant : a2);
  return (self->t_yy_shift(arg0, arg1, arg2), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r191(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r191, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r191(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r186(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r186, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r186(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r4(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r192(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r192, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r192(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r5, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r5(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r188(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r188, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r188(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r6, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r6(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r194(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r194, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r194(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r189(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r189, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r189(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r7(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r7, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r7(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r8, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r8(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r196(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r196, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r196(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r9(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r9, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r9(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r197(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r197, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r197(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r198(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r198, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r198(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_get_expected_tokens(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_get_expected_tokens, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templateparser::yy_get_expected_tokens", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_get_expected_tokens(arg0));
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_pop_parser_stack(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_pop_parser_stack, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_pop_parser_stack());
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r10(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r10, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r10(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r11(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r11, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r11(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r12(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r12, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r12(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r13(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r13, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r13(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r14(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r14, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r14(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r15(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r15, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r15(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r21(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r21, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r21(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r16(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r16, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r16(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r17(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r17, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r17(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r23(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r23, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r23(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r24(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r24, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r24(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r19(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r19, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r19(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r25(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r25, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r25(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r31(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r31, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r31(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r26(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r26, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r26(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r27(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r27, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r27(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r33(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r33, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r33(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r28(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r28, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r28(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_doparse(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_doparse, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templateparser::doParse", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t_doparse(arg0, arg1), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r40(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r40, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r40(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r35(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r35, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r35(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r41(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r41, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r41(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r36(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r36, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r36(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r42(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r42, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r42(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r37(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r37, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r37(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r43(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r43, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r43(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r38(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r38, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r38(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r39(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r39, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r39(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r50(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r50, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r50(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r51(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r51, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r51(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r46(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r46, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r46(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r52(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r52, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r52(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r47(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r47, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r47(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r53(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r53, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r53(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r48(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r48, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r48(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r54(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r54, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r54(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r49(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r49, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r49(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r60(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r60, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r60(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r55(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r55, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r55(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r61(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r61, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r61(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r56(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r56, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r56(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r62(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r62, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r62(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r57(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r57, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r57(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r63(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r63, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r63(), null);
}
Variant c_Smarty_Internal_Templateparser::ifa_yy_r58(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r58, coo_Smarty_Internal_Templateparser);
  }
  c_Smarty_Internal_Templateparser *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templateparser*>(mcp.obj));
  return (self->t_yy_r58(), null);
}
const MethodCallInfoTable c_Smarty_Internal_Templateparser::s_call_info_table[] = {
  { 0x2C94651ACF5BEC01LL, 1, 7, "yy_r131", &c_Smarty_Internal_Templateparser::ci_yy_r131 },
  { 0x024DC3AD5486C801LL, 0, 6, "yy_r36", &c_Smarty_Internal_Templateparser::ci_yy_r36 },
  { 0x39BF132B768EDA04LL, 1, 6, "yy_r85", &c_Smarty_Internal_Templateparser::ci_yy_r85 },
  { 0x43A2F984A0A74C05LL, 1, 7, "yy_r104", &c_Smarty_Internal_Templateparser::ci_yy_r104 },
  { 0x11C184EEB99C8005LL, 0, 6, "yy_r46", &c_Smarty_Internal_Templateparser::ci_yy_r46 },
  { 0x7FBAF50EDDFC8A08LL, 1, 13, "yy_destructor", &c_Smarty_Internal_Templateparser::ci_yy_destructor },
  { 0x37428AC02D2FC408LL, 0, 6, "yy_r50", &c_Smarty_Internal_Templateparser::ci_yy_r50 },
  { 0x24258A7A20173A0BLL, 1, 5, "yy_r8", &c_Smarty_Internal_Templateparser::ci_yy_r8 },
  { 0x44D719159744840CLL, 1, 16, "escape_start_tag", &c_Smarty_Internal_Templateparser::ci_escape_start_tag },
  { 0x353B95A1374A2410LL, 1, 19, "yy_pop_parser_stack", &c_Smarty_Internal_Templateparser::ci_yy_pop_parser_stack },
  { 0x78856C4188A5F011LL, 1, 9, "tokenName", &c_Smarty_Internal_Templateparser::ci_tokenname },
  { 0x2B73E047C05E0611LL, 0, 7, "yy_r174", &c_Smarty_Internal_Templateparser::ci_yy_r174 },
  { 0x1DA8FE74C09C4E14LL, 1, 6, "yy_r75", &c_Smarty_Internal_Templateparser::ci_yy_r75 },
  { 0x5D2F663A3D60F617LL, 1, 7, "yy_r168", &c_Smarty_Internal_Templateparser::ci_yy_r168 },
  { 0x580860889EA9C618LL, 1, 7, "yy_r179", &c_Smarty_Internal_Templateparser::ci_yy_r179 },
  { 0x68914F61C00B221ALL, 1, 6, "yy_r73", &c_Smarty_Internal_Templateparser::ci_yy_r73 },
  { 0x5CCA81DC5333821ALL, 0, 7, "yy_r130", &c_Smarty_Internal_Templateparser::ci_yy_r130 },
  { 0x31E34BD1B6F2AA1ELL, 1, 7, "yy_r121", &c_Smarty_Internal_Templateparser::ci_yy_r121 },
  { 0x13E3E548B5A0EA22LL, 1, 6, "yy_r26", &c_Smarty_Internal_Templateparser::ci_yy_r26 },
  { 0x4351A33C01C4D424LL, 1, 6, "yy_r82", &c_Smarty_Internal_Templateparser::ci_yy_r82 },
  { 0x21685AF8C8AE1A25LL, 1, 6, "yy_r89", &c_Smarty_Internal_Templateparser::ci_yy_r89 },
  { 0x08704E89E3B2702FLL, 1, 6, "yy_r62", &c_Smarty_Internal_Templateparser::ci_yy_r62 },
  { 0x54A66B2BAD924430LL, 1, 6, "yy_r59", &c_Smarty_Internal_Templateparser::ci_yy_r59 },
  { 0x238A2FA59A7CE430LL, 0, 6, "yy_r88", &c_Smarty_Internal_Templateparser::ci_yy_r88 },
  { 0x107DFE4053A85230LL, 0, 5, "yy_r1", &c_Smarty_Internal_Templateparser::ci_yy_r1 },
  { 0x276D5F6930A29032LL, 1, 7, "yy_r142", &c_Smarty_Internal_Templateparser::ci_yy_r142 },
  { 0x398C8A0FF6C8D83ELL, 1, 6, "yy_r33", &c_Smarty_Internal_Templateparser::ci_yy_r33 },
  { 0x1435C274F4E1C242LL, 1, 6, "yy_r79", &c_Smarty_Internal_Templateparser::ci_yy_r79 },
  { 0x7990BB5F75C48C49LL, 1, 7, "yy_r150", &c_Smarty_Internal_Templateparser::ci_yy_r150 },
  { 0x639603025DBAB64ALL, 1, 7, "yy_r153", &c_Smarty_Internal_Templateparser::ci_yy_r153 },
  { 0x0E6833647BCE2E53LL, 1, 7, "yy_r186", &c_Smarty_Internal_Templateparser::ci_yy_r186 },
  { 0x791BEED96AB97256LL, 1, 7, "yy_r185", &c_Smarty_Internal_Templateparser::ci_yy_r185 },
  { 0x23ED675FCA37E056LL, 0, 6, "yy_r14", &c_Smarty_Internal_Templateparser::ci_yy_r14 },
  { 0x2FDC04591E1E4E5FLL, 1, 14, "escape_end_tag", &c_Smarty_Internal_Templateparser::ci_escape_end_tag },
  { 0x29520B9AEE905463LL, 1, 7, "yy_r184", &c_Smarty_Internal_Templateparser::ci_yy_r184 },
  { 0x705C0BEE49C05A64LL, 1, 5, "yy_r5", &c_Smarty_Internal_Templateparser::ci_yy_r5 },
  { 0x6ADB4EB189A42664LL, 0, 6, "yy_r56", &c_Smarty_Internal_Templateparser::ci_yy_r56 },
  { 0x311FFFE39E047467LL, 1, 6, "yy_r24", &c_Smarty_Internal_Templateparser::ci_yy_r24 },
  { 0x5EA6E32903021669LL, 1, 7, "yy_r152", &c_Smarty_Internal_Templateparser::ci_yy_r152 },
  { 0x0EC2EE7C9740386FLL, 1, 7, "yy_r101", &c_Smarty_Internal_Templateparser::ci_yy_r101 },
  { 0x05ED15696E211876LL, 1, 5, "yy_r9", &c_Smarty_Internal_Templateparser::ci_yy_r9 },
  { 0x17E658BD51D7147BLL, 1, 10, "PrintTrace", &c_Smarty_Internal_Templateparser::ci_printtrace },
  { 0x3702CDDFA0958081LL, 1, 8, "yy_shift", &c_Smarty_Internal_Templateparser::ci_yy_shift },
  { 0x46F68BC2D91AA886LL, 1, 7, "yy_r119", &c_Smarty_Internal_Templateparser::ci_yy_r119 },
  { 0x7DAD9887B9BAF48DLL, 1, 7, "yy_r124", &c_Smarty_Internal_Templateparser::ci_yy_r124 },
  { 0x46BF2293CA97948DLL, 0, 6, "yy_r43", &c_Smarty_Internal_Templateparser::ci_yy_r43 },
  { 0x75915ECA14128893LL, 1, 6, "yy_r31", &c_Smarty_Internal_Templateparser::ci_yy_r31 },
  { 0x2B145B79AEC63C94LL, 1, 7, "yy_r156", &c_Smarty_Internal_Templateparser::ci_yy_r156 },
  { 0x64D099435C4E2898LL, 1, 7, "yy_r160", &c_Smarty_Internal_Templateparser::ci_yy_r160 },
  { 0x3D63FBB24DE40699LL, 1, 7, "yy_r149", &c_Smarty_Internal_Templateparser::ci_yy_r149 },
  { 0x3AB00A17F5FE0499LL, 0, 6, "yy_r11", &c_Smarty_Internal_Templateparser::ci_yy_r11 },
  { 0x48995E310AE71C9CLL, 1, 7, "doParse", &c_Smarty_Internal_Templateparser::ci_doparse },
  { 0x397E70DAEE9772A0LL, 1, 6, "yy_r54", &c_Smarty_Internal_Templateparser::ci_yy_r54 },
  { 0x2C54AEE9531A72A3LL, 1, 6, "yy_r27", &c_Smarty_Internal_Templateparser::ci_yy_r27 },
  { 0x5DF3F488ABBB28A6LL, 1, 7, "yy_r135", &c_Smarty_Internal_Templateparser::ci_yy_r135 },
  { 0x617BFF17AB89C4A7LL, 1, 6, "yy_r93", &c_Smarty_Internal_Templateparser::ci_yy_r93 },
  { 0x11A77380CA05B4A8LL, 1, 6, "yy_r41", &c_Smarty_Internal_Templateparser::ci_yy_r41 },
  { 0x7E307211EC9C0AB3LL, 1, 6, "yy_r92", &c_Smarty_Internal_Templateparser::ci_yy_r92 },
  { 0x2410F47B603E6CC7LL, 1, 7, "yy_r145", &c_Smarty_Internal_Templateparser::ci_yy_r145 },
  { 0x52A6106CA761AECELL, 1, 6, "yy_r91", &c_Smarty_Internal_Templateparser::ci_yy_r91 },
  { 0x7B9ABA9DE5BFB0CELL, 0, 6, "yy_r28", &c_Smarty_Internal_Templateparser::ci_yy_r28 },
  { 0x451F40295C6C96D0LL, 1, 7, "yy_r191", &c_Smarty_Internal_Templateparser::ci_yy_r191 },
  { 0x68B97A04B7D678D1LL, 1, 6, "yy_r57", &c_Smarty_Internal_Templateparser::ci_yy_r57 },
  { 0x61E71CE48995C4DDLL, 1, 6, "yy_r48", &c_Smarty_Internal_Templateparser::ci_yy_r48 },
  { 0x0A53DB145DA466E3LL, 1, 6, "yy_r39", &c_Smarty_Internal_Templateparser::ci_yy_r39 },
  { 0x6053EB4FC9C536EBLL, 1, 7, "yy_r177", &c_Smarty_Internal_Templateparser::ci_yy_r177 },
  { 0x09271C44ED7C42ECLL, 1, 7, "yy_r147", &c_Smarty_Internal_Templateparser::ci_yy_r147 },
  { 0x7F974836AACC1EF3LL, 1, 10, "__destruct", &c_Smarty_Internal_Templateparser::ci___destruct },
  { 0x4532A9EA487F9CF5LL, 1, 6, "yy_r49", &c_Smarty_Internal_Templateparser::ci_yy_r49 },
  { 0x14AB014D8C5854FALL, 1, 7, "yy_r140", &c_Smarty_Internal_Templateparser::ci_yy_r140 },
  { 0x5CAA6188E340B8FDLL, 1, 6, "yy_r25", &c_Smarty_Internal_Templateparser::ci_yy_r25 },
  { 0x661D9D88AEFC40FELL, 1, 6, "yy_r21", &c_Smarty_Internal_Templateparser::ci_yy_r21 },
  { 0x14C123EE690E20FFLL, 1, 22, "yy_get_expected_tokens", &c_Smarty_Internal_Templateparser::ci_yy_get_expected_tokens },
  { 0x16759C115AACB500LL, 1, 7, "yy_r132", &c_Smarty_Internal_Templateparser::ci_yy_r132 },
  { 0x4B99C5A39C818101LL, 1, 9, "yy_accept", &c_Smarty_Internal_Templateparser::ci_yy_accept },
  { 0x019DF169B56EBD04LL, 1, 6, "yy_r53", &c_Smarty_Internal_Templateparser::ci_yy_r53 },
  { 0x76A2E0439571E507LL, 1, 7, "yy_r197", &c_Smarty_Internal_Templateparser::ci_yy_r197 },
  { 0x11C49E524C30CF0CLL, 1, 7, "yy_r183", &c_Smarty_Internal_Templateparser::ci_yy_r183 },
  { 0x7B1F8E3727FB0510LL, 1, 7, "yy_r180", &c_Smarty_Internal_Templateparser::ci_yy_r180 },
  { 0x70B652A450031511LL, 1, 7, "yy_r137", &c_Smarty_Internal_Templateparser::ci_yy_r137 },
  { 0x408286494BD2FB1BLL, 1, 6, "yy_r12", &c_Smarty_Internal_Templateparser::ci_yy_r12 },
  { 0x7AC7358C79928B21LL, 1, 7, "yy_r167", &c_Smarty_Internal_Templateparser::ci_yy_r167 },
  { 0x240778CDB9CEFB22LL, 1, 6, "yy_r19", &c_Smarty_Internal_Templateparser::ci_yy_r19 },
  { 0x75A02FDADADB432ELL, 1, 7, "yy_r178", &c_Smarty_Internal_Templateparser::ci_yy_r178 },
  { 0x386D73480866BD2ELL, 0, 5, "yy_r7", &c_Smarty_Internal_Templateparser::ci_yy_r7 },
  { 0x3E60B19C7A04532ELL, 0, 6, "yy_r13", &c_Smarty_Internal_Templateparser::ci_yy_r13 },
  { 0x0545C25C0120E930LL, 1, 6, "yy_r72", &c_Smarty_Internal_Templateparser::ci_yy_r72 },
  { 0x2A1B5684FA13693CLL, 1, 7, "yy_r143", &c_Smarty_Internal_Templateparser::ci_yy_r143 },
  { 0x1F5FF6BC51C2493FLL, 1, 7, "yy_r196", &c_Smarty_Internal_Templateparser::ci_yy_r196 },
  { 0x5F9D1D94BFFAB943LL, 1, 6, "yy_r65", &c_Smarty_Internal_Templateparser::ci_yy_r65 },
  { 0x45052EBB6CD59B44LL, 1, 7, "yy_r141", &c_Smarty_Internal_Templateparser::ci_yy_r141 },
  { 0x3CCB986B2CF0A747LL, 1, 5, "Trace", &c_Smarty_Internal_Templateparser::ci_trace },
  { 0x49A89EF29D506748LL, 1, 7, "yy_r110", &c_Smarty_Internal_Templateparser::ci_yy_r110 },
  { 0x2937FA2CFEF6A948LL, 0, 7, "yy_r134", &c_Smarty_Internal_Templateparser::ci_yy_r134 },
  { 0x43483E6C85355149LL, 1, 7, "yy_r189", &c_Smarty_Internal_Templateparser::ci_yy_r189 },
  { 0x458D8956C32D234DLL, 1, 6, "yy_r86", &c_Smarty_Internal_Templateparser::ci_yy_r86 },
  { 0x4D17C5707C7FD14ELL, 1, 15, "yy_parse_failed", &c_Smarty_Internal_Templateparser::ci_yy_parse_failed },
  { 0x24BE4EBED5212B51LL, 1, 6, "yy_r55", &c_Smarty_Internal_Templateparser::ci_yy_r55 },
  { 0x7199AEFC4B1ED553LL, 1, 7, "yy_r146", &c_Smarty_Internal_Templateparser::ci_yy_r146 },
  { 0x4B8A738E15819155LL, 1, 6, "yy_r40", &c_Smarty_Internal_Templateparser::ci_yy_r40 },
  { 0x7D0162D2A028FF55LL, 0, 6, "yy_r47", &c_Smarty_Internal_Templateparser::ci_yy_r47 },
  { 0x03FCF90ACB4AA756LL, 1, 5, "yy_r4", &c_Smarty_Internal_Templateparser::ci_yy_r4 },
  { 0x14E92367D894BF5ALL, 1, 7, "yy_r192", &c_Smarty_Internal_Templateparser::ci_yy_r192 },
  { 0x2B3ADAC4349A095DLL, 1, 5, "yy_r6", &c_Smarty_Internal_Templateparser::ci_yy_r6 },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Templateparser::ci___construct },
  { 0x430C41705257DD65LL, 1, 9, "yy_reduce", &c_Smarty_Internal_Templateparser::ci_yy_reduce },
  { 0x3BC8702AB8307766LL, 1, 6, "yy_r37", &c_Smarty_Internal_Templateparser::ci_yy_r37 },
  { 0x2FD2FB9E4B563569LL, 1, 7, "yy_r190", &c_Smarty_Internal_Templateparser::ci_yy_r190 },
  { 0x2EE64532D3C5A771LL, 1, 20, "yy_find_shift_action", &c_Smarty_Internal_Templateparser::ci_yy_find_shift_action },
  { 0x4DD472DDDF1A9D73LL, 1, 6, "yy_r23", &c_Smarty_Internal_Templateparser::ci_yy_r23 },
  { 0x4E97BECBF8082774LL, 1, 7, "yy_r111", &c_Smarty_Internal_Templateparser::ci_yy_r111 },
  { 0x1B2BBEAE49EB8F77LL, 1, 6, "yy_r58", &c_Smarty_Internal_Templateparser::ci_yy_r58 },
  { 0x13E672FF1E011178LL, 1, 7, "yy_r173", &c_Smarty_Internal_Templateparser::ci_yy_r173 },
  { 0x452BF0FF0AC6837BLL, 1, 7, "yy_r127", &c_Smarty_Internal_Templateparser::ci_yy_r127 },
  { 0x44027E52B23F397ELL, 1, 7, "yy_r122", &c_Smarty_Internal_Templateparser::ci_yy_r122 },
  { 0x5C6AFD0E419BED80LL, 1, 7, "yy_r112", &c_Smarty_Internal_Templateparser::ci_yy_r112 },
  { 0x75C3E7E593D88983LL, 1, 6, "yy_r83", &c_Smarty_Internal_Templateparser::ci_yy_r83 },
  { 0x5B26EB1F9C97C585LL, 1, 6, "yy_r15", &c_Smarty_Internal_Templateparser::ci_yy_r15 },
  { 0x78FC9AC8AB3E9389LL, 1, 7, "yy_r175", &c_Smarty_Internal_Templateparser::ci_yy_r175 },
  { 0x2DB2808BD5331589LL, 0, 6, "yy_r63", &c_Smarty_Internal_Templateparser::ci_yy_r63 },
  { 0x39A69B7DE661C58ALL, 1, 6, "yy_r38", &c_Smarty_Internal_Templateparser::ci_yy_r38 },
  { 0x3CD1DEC4C7CCC58BLL, 1, 6, "yy_r10", &c_Smarty_Internal_Templateparser::ci_yy_r10 },
  { 0x68AB60CFAFA42F8ELL, 1, 6, "yy_r78", &c_Smarty_Internal_Templateparser::ci_yy_r78 },
  { 0x2CAE7688BEF29995LL, 1, 7, "yy_r181", &c_Smarty_Internal_Templateparser::ci_yy_r181 },
  { 0x0D4B718DD19FDD99LL, 1, 7, "yy_r117", &c_Smarty_Internal_Templateparser::ci_yy_r117 },
  { 0x1B6C8CACD501099FLL, 1, 6, "yy_r90", &c_Smarty_Internal_Templateparser::ci_yy_r90 },
  { 0x749D7F722044A1A0LL, 1, 7, "yy_r159", &c_Smarty_Internal_Templateparser::ci_yy_r159 },
  { 0x55CC7A6DDD428BA1LL, 1, 7, "yy_r139", &c_Smarty_Internal_Templateparser::ci_yy_r139 },
  { 0x0C838732BDE113A3LL, 1, 7, "yy_r144", &c_Smarty_Internal_Templateparser::ci_yy_r144 },
  { 0x108A08114D9C5DA6LL, 1, 7, "yy_r176", &c_Smarty_Internal_Templateparser::ci_yy_r176 },
  { 0x5FA99391BD98B5ABLL, 1, 7, "yy_r171", &c_Smarty_Internal_Templateparser::ci_yy_r171 },
  { 0x1979E1CC2924E7ADLL, 1, 15, "yy_syntax_error", &c_Smarty_Internal_Templateparser::ci_yy_syntax_error },
  { 0x6E48CE09527767AFLL, 1, 6, "yy_r17", &c_Smarty_Internal_Templateparser::ci_yy_r17 },
  { 0x11AA8CE45C99C3B0LL, 1, 7, "yy_r133", &c_Smarty_Internal_Templateparser::ci_yy_r133 },
  { 0x4475234400FC91B3LL, 1, 6, "yy_r60", &c_Smarty_Internal_Templateparser::ci_yy_r60 },
  { 0x57EE4F1AAF10C5B4LL, 1, 7, "yy_r129", &c_Smarty_Internal_Templateparser::ci_yy_r129 },
  { 0x62578AAD8706ADB5LL, 1, 7, "yy_r172", &c_Smarty_Internal_Templateparser::ci_yy_r172 },
  { 0x75EC12888BA5F3B7LL, 1, 6, "yy_r67", &c_Smarty_Internal_Templateparser::ci_yy_r67 },
  { 0x79FF4B3165D331BALL, 1, 7, "yy_r194", &c_Smarty_Internal_Templateparser::ci_yy_r194 },
  { 0x75861E6CEB4077C2LL, 1, 7, "yy_r128", &c_Smarty_Internal_Templateparser::ci_yy_r128 },
  { 0x06A9427559F8EFC6LL, 1, 7, "yy_r200", &c_Smarty_Internal_Templateparser::ci_yy_r200 },
  { 0x7C5E068BFEAD03C7LL, 1, 7, "yy_r161", &c_Smarty_Internal_Templateparser::ci_yy_r161 },
  { 0x653CCEE71C4079C8LL, 1, 7, "yy_r114", &c_Smarty_Internal_Templateparser::ci_yy_r114 },
  { 0x214E498AD9170FC9LL, 1, 6, "yy_r84", &c_Smarty_Internal_Templateparser::ci_yy_r84 },
  { 0x590B10F1593E67CALL, 1, 7, "yy_r198", &c_Smarty_Internal_Templateparser::ci_yy_r198 },
  { 0x010A3CFEEE9299CBLL, 1, 5, "yy_r0", &c_Smarty_Internal_Templateparser::ci_yy_r0 },
  { 0x69DCFA0CB70EA3CCLL, 1, 6, "yy_r35", &c_Smarty_Internal_Templateparser::ci_yy_r35 },
  { 0x106FF6A35E0351CDLL, 1, 7, "yy_r126", &c_Smarty_Internal_Templateparser::ci_yy_r126 },
  { 0x6FB3A23B956E4BCELL, 1, 7, "yy_r118", &c_Smarty_Internal_Templateparser::ci_yy_r118 },
  { 0x282BCE169DF279CELL, 0, 6, "yy_r16", &c_Smarty_Internal_Templateparser::ci_yy_r16 },
  { 0x4F17172712F545CFLL, 1, 6, "yy_r99", &c_Smarty_Internal_Templateparser::ci_yy_r99 },
  { 0x0F8757A8930703D0LL, 1, 7, "yy_r157", &c_Smarty_Internal_Templateparser::ci_yy_r157 },
  { 0x0B80D6CA034BBDD1LL, 1, 7, "yy_r125", &c_Smarty_Internal_Templateparser::ci_yy_r125 },
  { 0x4FB35460CAA999D4LL, 1, 6, "yy_r51", &c_Smarty_Internal_Templateparser::ci_yy_r51 },
  { 0x61BEF24191C893D5LL, 1, 6, "yy_r64", &c_Smarty_Internal_Templateparser::ci_yy_r64 },
  { 0x0A922336B580BFDALL, 1, 6, "yy_r61", &c_Smarty_Internal_Templateparser::ci_yy_r61 },
  { 0x705497EBBA07A7DCLL, 1, 20, "yy_is_expected_token", &c_Smarty_Internal_Templateparser::ci_yy_is_expected_token },
  { 0x4BCA739F6F21A9DCLL, 0, 7, "yy_r100", &c_Smarty_Internal_Templateparser::ci_yy_r100 },
  { 0x7D4162E3F9C8C7DCLL, 0, 7, "yy_r170", &c_Smarty_Internal_Templateparser::ci_yy_r170 },
  { 0x58F0FF8369A57BDDLL, 1, 7, "yy_r148", &c_Smarty_Internal_Templateparser::ci_yy_r148 },
  { 0x48E0F7409C65F5E3LL, 1, 6, "yy_r42", &c_Smarty_Internal_Templateparser::ci_yy_r42 },
  { 0x43A3F7209C3941E5LL, 1, 21, "yy_find_reduce_action", &c_Smarty_Internal_Templateparser::ci_yy_find_reduce_action },
  { 0x212A91802016D1EALL, 1, 7, "yy_r188", &c_Smarty_Internal_Templateparser::ci_yy_r188 },
  { 0x74BCD382DFBF8FF2LL, 1, 7, "yy_r169", &c_Smarty_Internal_Templateparser::ci_yy_r169 },
  { 0x1CB83757CC0385F3LL, 1, 6, "yy_r52", &c_Smarty_Internal_Templateparser::ci_yy_r52 },
  { 0x7C3EB27B3F3225F7LL, 1, 7, "yy_r151", &c_Smarty_Internal_Templateparser::ci_yy_r151 },
  { 0x74836E0430ADD5FCLL, 1, 7, "yy_r109", &c_Smarty_Internal_Templateparser::ci_yy_r109 },
  { 0x302D3A7618AADDFFLL, 1, 6, "yy_r70", &c_Smarty_Internal_Templateparser::ci_yy_r70 },
  { 0x5C850E7C3134D9FFLL, 0, 7, "yy_r162", &c_Smarty_Internal_Templateparser::ci_yy_r162 },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Templateparser::s_call_info_index[] = {
  511,
  -1,0,-1,-1,2,3,-1,-1,
  5,-1,-1,7,8,-1,-1,-1,
  9,10,-1,-1,12,-1,-1,13,
  14,-1,15,-1,-1,-1,17,-1,
  -1,-1,18,-1,19,20,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,21,
  22,-1,25,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,26,-1,
  -1,-1,27,-1,-1,-1,-1,-1,
  -1,28,29,-1,-1,-1,-1,-1,
  -1,-1,-1,30,-1,-1,31,-1,
  -1,-1,-1,-1,-1,-1,-1,33,
  -1,-1,-1,34,35,-1,-1,37,
  -1,38,-1,-1,-1,-1,-1,39,
  -1,-1,-1,-1,-1,-1,40,-1,
  -1,-1,-1,41,-1,-1,-1,-1,
  -1,42,-1,-1,-1,-1,43,-1,
  -1,-1,-1,-1,-1,44,-1,-1,
  -1,-1,-1,46,47,-1,-1,-1,
  48,49,-1,-1,51,-1,-1,-1,
  52,-1,-1,53,-1,-1,54,55,
  56,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,57,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,-1,58,
  -1,-1,-1,-1,-1,-1,59,-1,
  61,62,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,63,-1,-1,
  -1,-1,-1,64,-1,-1,-1,-1,
  -1,-1,-1,65,66,-1,-1,-1,
  -1,-1,-1,67,-1,68,-1,-1,
  -1,-1,69,-1,-1,70,71,72,
  73,74,-1,-1,75,-1,-1,76,
  -1,-1,-1,-1,77,-1,-1,-1,
  78,79,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,80,-1,-1,-1,-1,
  -1,81,82,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,-1,-1,83,-1,
  86,-1,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,87,-1,-1,88,
  -1,-1,-1,89,90,-1,-1,91,
  92,94,-1,-1,-1,95,96,-1,
  -1,97,-1,98,-1,99,101,-1,
  -1,-1,102,-1,-1,103,-1,104,
  -1,-1,-1,-1,-1,105,106,-1,
  -1,107,-1,-1,-1,-1,-1,-1,
  -1,108,-1,109,110,-1,-1,111,
  112,-1,-1,113,-1,-1,114,-1,
  115,-1,-1,116,-1,117,-1,-1,
  -1,118,120,121,-1,-1,122,-1,
  -1,-1,-1,-1,-1,123,-1,-1,
  -1,124,-1,-1,-1,-1,-1,125,
  126,127,-1,128,-1,-1,129,-1,
  -1,-1,-1,130,-1,131,-1,132,
  133,-1,-1,134,135,136,-1,137,
  -1,-1,138,-1,-1,-1,-1,-1,
  -1,-1,139,-1,-1,-1,140,141,
  142,143,144,145,146,147,148,150,
  151,152,-1,-1,153,154,-1,-1,
  -1,-1,155,-1,156,159,-1,-1,
  -1,-1,-1,160,-1,161,-1,-1,
  -1,-1,162,-1,-1,-1,-1,-1,
  -1,-1,163,164,-1,-1,-1,165,
  -1,-1,-1,-1,166,-1,-1,167,

};
c_Smarty_Internal_Templateparser *c_Smarty_Internal_Templateparser::create(CVarRef v_lex, CVarRef v_compiler) {
  CountableHelper h(this);
  init();
  t___construct(v_lex, v_compiler);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Templateparser = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Templateparser,
  c_Smarty_Internal_Templateparser::s_call_info_table,c_Smarty_Internal_Templateparser::s_call_info_index,
  c_Smarty_Internal_Templateparser::s_instanceof_table,c_Smarty_Internal_Templateparser::s_instanceof_index,
  &c_Smarty_Internal_Templateparser::s_class_name,
  &c_Smarty_Internal_Templateparser::os_prop_table,&c_Smarty_Internal_Templateparser::ci___construct,0,0
};
void c_Smarty_Internal_Templateparser::init() {
  m_successful = true;
  m_retvalue = 0LL;
  m_internalError = false;
  m_yystack = s_sa00000000;
  m_yyTokenName = s_sa57350f73;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templateparser.php line 99 */
void c_Smarty_Internal_Templateparser::t___construct(Variant v_lex, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templateparser, Smarty_Internal_Templateparser::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Templateparser::__construct", array_createvi(2, toVPOD(v_lex), toVPOD(v_compiler)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  m_lex.assignVal(v_lex);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(102,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  {
    LINE(103,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss0282ae4f, "compiler"), true).o_getPublic(NAMSTR(s_ss86160f07, "template"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss86160f07, "template"), tmp0);
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ss6e5769be, "has_variable_string"), false);
    tmp_ref.unset();
  }
  {
    GET_THIS_ARROW()o_lval(NAMSTR(s_ss0282ae4f, "compiler"), tmp_ref, s_class_name).o_setPublic(NAMSTR(s_ssc5d15748, "prefix_code"), s_sa00000000);
    tmp_ref.unset();
  }
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss93c949f7, "prefix_number"), 0LL);
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss8d453f55, "block_nesting_level"), 0LL);
  {
    bool tmp0;
    {
      bool tmp1((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), false).o_isset(NAMSTR(s_ss9f0b8e15, "security_policy"), s_class_name)));
      tmp0 = (GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssb65e90d3, "security"), tmp1).toBooleanVal());
    }
    if (tmp0) {
      {
        {
          LINE(109,0);
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss9f0b8e15, "security_policy"), true).o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true)));
          GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss721043c6, "php_handling"), tmp0);
        }
      }
    }
    else {
      {
        {
          LINE(111,0);
          const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ss721043c6, "php_handling"), true)));
          GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss721043c6, "php_handling"), tmp0);
        }
      }
    }
  }
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss646ca1c0, "is_xml"), false);
  {
    LINE(114,0);
    const String &tmp0((x_ini_get(NAMSTR(s_ssedc3afde, "asp_tags"))));
    bool tmp1((!equal(tmp0, NAMSTR(s_ss40fdaad5, "0"))));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssedc3afde, "asp_tags"), tmp1);
  }
  {
    p__smarty_template_buffer tmp0 = ((checkClassExistsThrow(NAMSTR(s_ss172b5002, "_smarty_template_buffer"), &g->CDEC(_smarty_template_buffer))), (coo__smarty_template_buffer()));
    ((c__smarty_template_buffer*)tmp0.get()->create(GET_THIS_TYPED(Smarty_Internal_Templateparser)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss82049faf, "root_buffer"), tmp0);
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss8ce16784, "current_buffer"), tmp0);
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
}
