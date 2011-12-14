
#include <php/Smarty/libs/sysplugins/smarty_internal_templatelexer.h>
#include <php/Smarty/libs/sysplugins/smarty_internal_templatelexer.fws.h>

// Dependencies
#include <php/Smarty/libs/sysplugins/smarty_internal_templateparser.h>
#include <runtime/ext/ext.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 13 */
const int64 q_Smarty_Internal_Templatelexer___TEXT = 1LL;
const int64 q_Smarty_Internal_Templatelexer___SMARTY = 2LL;
const int64 q_Smarty_Internal_Templatelexer___LITERAL = 3LL;
const int64 q_Smarty_Internal_Templatelexer___DOUBLEQUOTEDSTRING = 4LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Smarty_Internal_Templatelexer)
const InstanceOfInfo c_Smarty_Internal_Templatelexer::s_instanceof_table[] = {
  {0x4804C20750ED42A3LL,1,"Smarty_Internal_Templatelexer",&cw_Smarty_Internal_Templatelexer},
};
const int c_Smarty_Internal_Templatelexer::s_instanceof_index[] = {
  1,
  -1,0,
};
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_5((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_5, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_5, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_6((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_6, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_6, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_7((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_7, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_7, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_8((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_8, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_8, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_1((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_1, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_2((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_2, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_4((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_4, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_4, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_5((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_5, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_5, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_6((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_6, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_6, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_7((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_7, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_7, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_8((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_8, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_8, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_9((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_9, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_9, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_11((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_11, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_11, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci___construct((void*)&c_Smarty_Internal_Templatelexer::i___construct, (void*)&c_Smarty_Internal_Templatelexer::ifa___construct, 2, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yylex1((void*)&c_Smarty_Internal_Templatelexer::i_yylex1, (void*)&c_Smarty_Internal_Templatelexer::ifa_yylex1, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yylex2((void*)&c_Smarty_Internal_Templatelexer::i_yylex2, (void*)&c_Smarty_Internal_Templatelexer::ifa_yylex2, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yylex((void*)&c_Smarty_Internal_Templatelexer::i_yylex, (void*)&c_Smarty_Internal_Templatelexer::ifa_yylex, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yylex3((void*)&c_Smarty_Internal_Templatelexer::i_yylex3, (void*)&c_Smarty_Internal_Templatelexer::ifa_yylex3, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yylex4((void*)&c_Smarty_Internal_Templatelexer::i_yylex4, (void*)&c_Smarty_Internal_Templatelexer::ifa_yylex4, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_10((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_10, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_10, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_11((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_11, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_11, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_12((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_12, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_12, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_13((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_13, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_13, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_14((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_14, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_14, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_20((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_20, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_20, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_15((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_15, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_15, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_16((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_16, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_16, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_22((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_22, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_22, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_17((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_17, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_17, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_18((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_18, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_18, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_24((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_24, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_24, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_19((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_19, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_19, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_30((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_30, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_30, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_31((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_31, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_31, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_26((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_26, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_26, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_32((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_32, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_32, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_27((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_27, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_27, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_33((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_33, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_33, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_28((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_28, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_28, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_34((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_34, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_34, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_29((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_29, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_29, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_40((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_40, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_40, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_35((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_35, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_35, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_41((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_41, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_41, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_36((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_36, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_36, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_42((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_42, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_42, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_37((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_37, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_37, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yybegin((void*)&c_Smarty_Internal_Templatelexer::i_yybegin, (void*)&c_Smarty_Internal_Templatelexer::ifa_yybegin, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_43((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_43, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_43, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_38((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_38, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_38, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_39((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_39, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_39, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_50((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_50, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_50, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_51((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_51, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_51, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_52((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_52, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_52, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_47((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_47, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_47, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_53((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_53, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_53, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_48((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_48, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_48, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_54((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_54, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_54, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_49((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_49, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_49, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_60((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_60, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_60, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_55((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_55, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_55, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_61((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_61, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_61, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_62((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_62, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_62, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_57((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_57, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_57, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_63((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_63, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_63, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_64((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_64, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_64, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_59((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_59, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_59, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_70((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_70, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_70, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_65((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_65, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_65, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_71((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_71, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_71, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_66((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_66, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_66, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_72((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_72, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_72, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_67((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_67, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_67, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_73((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_73, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_73, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_68((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_68, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_68, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_74((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_74, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_74, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_69((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_69, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_69, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_75((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_75, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_75, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_76((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_76, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_76, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_1((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_1, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_2((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_2, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_3((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_3, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_3, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_5((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_5, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_5, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_6((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_6, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_6, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_7((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_7, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_7, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_8((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_8, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_8, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_9((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_9, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_9, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_10((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_10, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_10, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_11((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_11, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_11, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_12((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_12, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_12, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_13((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_13, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_13, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_17((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_17, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_17, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r4_18((void*)&c_Smarty_Internal_Templatelexer::i_yy_r4_18, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r4_18, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yypushstate((void*)&c_Smarty_Internal_Templatelexer::i_yypushstate, (void*)&c_Smarty_Internal_Templatelexer::ifa_yypushstate, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_1((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_1, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_10((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_10, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_10, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_2((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_2, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_11((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_11, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_11, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_3((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_3, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_3, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_12((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_12, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_12, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_5((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_5, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_5, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_14((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_14, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_14, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_6((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_6, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_6, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_20((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_20, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_20, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_15((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_15, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_15, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_7((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_7, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_7, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_21((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_21, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_21, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_16((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_16, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_16, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_8((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_8, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_8, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_22((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_22, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_22, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_17((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_17, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_17, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r2_9((void*)&c_Smarty_Internal_Templatelexer::i_yy_r2_9, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r2_9, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_23((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_23, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_23, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_18((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_18, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_18, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_19((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_19, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_19, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_26((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_26, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_26, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r1_27((void*)&c_Smarty_Internal_Templatelexer::i_yy_r1_27, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r1_27, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yypopstate((void*)&c_Smarty_Internal_Templatelexer::i_yypopstate, (void*)&c_Smarty_Internal_Templatelexer::ifa_yypopstate, 0, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_1((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_1, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_1, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_2((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_2, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_2, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_3((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_3, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_3, 1, 4, 0x0000000000000000LL);
CallInfo c_Smarty_Internal_Templatelexer::ci_yy_r3_4((void*)&c_Smarty_Internal_Templatelexer::i_yy_r3_4, (void*)&c_Smarty_Internal_Templatelexer::ifa_yy_r3_4, 1, 4, 0x0000000000000000LL);
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_5(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_5", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_5(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_6(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_6", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_6(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_7(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_7", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_7(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_8(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_8", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_8(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_1(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_4(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_4, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_4", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_4(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_5(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_5", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_5(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_6(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_6", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_6(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_7(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_7", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_7(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_8(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_8", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_8(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_9(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_9, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_9", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_9(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_11(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_11", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_11(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templatelexer::__construct", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    CVarRef arg1(UNLIKELY(count <= 1) ? null : (ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_10(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_10, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_10", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_10(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_11(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_11", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_11(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_12(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_12, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_12", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_12(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_13(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_13, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_13", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_13(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_14(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_14, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_14", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_14(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_20(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_20, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_20", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_20(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_15(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_15, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_15", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_15(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_16(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_16, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_16", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_16(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_22(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_22, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_22", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_22(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_17(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_17, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_17", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_17(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_18(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_18, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_18", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_18(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_24(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_24, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_24", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_24(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_19(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_19, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_19", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_19(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_30(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_30, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_30", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_30(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_31(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_31, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_31", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_31(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_26(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_26, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_26", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_26(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_32(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_32, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_32", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_32(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_27(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_27, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_27", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_27(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_33(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_33, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_33", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_33(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_28(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_28, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_28", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_28(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_34(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_34, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_34", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_34(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_29(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_29, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_29", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_29(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_40(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_40, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_40", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_40(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_35(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_35, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_35", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_35(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_41(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_41, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_41", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_41(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_36(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_36, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_36", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_36(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_42(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_42, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_42", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_42(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_37(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_37, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_37", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_37(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yybegin(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yybegin, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yybegin", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yybegin(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_43(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_43, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_43", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_43(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_38(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_38, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_38", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_38(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_39(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_39, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_39", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_39(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_50(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_50, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_50", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_50(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_51(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_51, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_51", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_51(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_52(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_52, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_52", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_52(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_47(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_47, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_47", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_47(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_53(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_53, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_53", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_53(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_48(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_48, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_48", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_48(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_54(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_54, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_54", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_54(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_49(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_49, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_49", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_49(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_60(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_60, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_60", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_60(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_55(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_55, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_55", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_55(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_61(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_61, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_61", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_61(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_62(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_62, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_62", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_62(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_57(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_57, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_57", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_57(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_63(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_63, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_63", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_63(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_64(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_64, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_64", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_64(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_59(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_59, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_59", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_59(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_70(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_70, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_70", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_70(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_65(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_65, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_65", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_65(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_71(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_71, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_71", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_71(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_66(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_66, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_66", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_66(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_72(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_72, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_72", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_72(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_67(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_67, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_67", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_67(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_73(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_73, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_73", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_73(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_68(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_68, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_68", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_68(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_74(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_74, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_74", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_74(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_69(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_69, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_69", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_69(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_75(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_75, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_75", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_75(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_76(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_76, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_76", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_76(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_1(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_3(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_3, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_3", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_3(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_5(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_5", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_5(arg0));
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_6(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_6", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_6(arg0));
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_7(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_7", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_7(arg0));
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_8(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_8", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_8(arg0));
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_9(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_9, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_9", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_9(arg0));
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_10(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_10, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_10", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_10(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_11(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_11", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_11(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_12(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_12, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_12", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_12(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_13(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_13, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_13", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_13(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_17(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_17, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_17", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_17(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r4_18(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r4_18, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_18", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r4_18(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yypushstate(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yypushstate, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yypushstate", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yypushstate(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_1(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_10(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_10, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_10", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_10(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_11(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_11", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_11(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_3(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_3, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_3", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_3(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_12(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_12, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_12", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_12(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_5(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_5", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_5(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_14(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_14, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_14", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_14(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_6(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_6", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_6(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_20(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_20, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_20", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_20(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_15(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_15, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_15", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_15(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_7(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_7", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_7(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_21(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_21, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_21", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_21(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_16(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_16, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_16", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_16(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_8(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_8", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_8(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_22(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_22, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_22", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_22(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_17(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_17, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_17", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_17(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r2_9(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r2_9, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_9", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r2_9(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_23(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_23, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_23", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_23(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_18(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_18, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_18", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_18(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_19(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_19, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_19", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_19(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_26(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_26, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_26", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_26(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r1_27(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r1_27, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_27", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r1_27(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_1(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_1", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_1(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_2(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_2", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_2(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_3(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_3, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_3", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_3(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::i_yy_r3_4(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_yy_r3_4, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_4", count+1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0(UNLIKELY(count <= 0) ? null : (ad->getValue(pos)));
    return (self->t_yy_r3_4(arg0), null);
  }
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_5", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_5(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_6", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_6(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_7(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_7", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_7(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_8", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_8(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_1(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_2(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_4, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_4", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_4(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_5", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_5(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_6", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_6(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_7(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_7", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_7(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_8", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_8(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_9(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_9, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_9", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_9(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_11(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_11", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_11(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 2)) throw_missing_arguments("Smarty_Internal_Templatelexer::__construct", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  CVarRef arg1(UNLIKELY(count <= 1) ? null_variant : a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yylex1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  return (self->t_yylex1());
}
Variant c_Smarty_Internal_Templatelexer::ifa_yylex2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  return (self->t_yylex2());
}
Variant c_Smarty_Internal_Templatelexer::ifa_yylex(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  return (self->t_yylex());
}
Variant c_Smarty_Internal_Templatelexer::ifa_yylex3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex3, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  return (self->t_yylex3());
}
Variant c_Smarty_Internal_Templatelexer::ifa_yylex4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yylex4, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  return (self->t_yylex4());
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_10(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_10, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_10", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_10(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_11(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_11", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_11(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_12(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_12, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_12", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_12(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_13(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_13, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_13", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_13(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_14(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_14, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_14", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_14(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_20(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_20, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_20", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_20(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_15(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_15, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_15", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_15(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_16(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_16, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_16", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_16(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_22(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_22, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_22", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_22(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_17(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_17, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_17", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_17(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_18(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_18, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_18", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_18(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_24(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_24, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_24", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_24(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_19(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_19, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_19", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_19(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_30(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_30, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_30", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_30(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_31(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_31, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_31", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_31(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_26(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_26, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_26", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_26(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_32(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_32, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_32", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_32(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_27(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_27, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_27", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_27(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_33(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_33, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_33", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_33(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_28(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_28, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_28", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_28(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_34(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_34, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_34", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_34(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_29(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_29, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_29", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_29(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_40(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_40, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_40", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_40(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_35(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_35, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_35", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_35(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_41(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_41, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_41", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_41(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_36(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_36, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_36", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_36(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_42(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_42, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_42", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_42(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_37(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_37, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_37", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_37(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yybegin(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yybegin, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yybegin", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yybegin(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_43(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_43, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_43", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_43(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_38(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_38, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_38", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_38(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_39(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_39, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_39", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_39(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_50(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_50, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_50", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_50(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_51(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_51, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_51", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_51(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_52(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_52, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_52", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_52(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_47(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_47, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_47", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_47(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_53(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_53, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_53", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_53(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_48(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_48, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_48", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_48(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_54(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_54, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_54", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_54(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_49(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_49, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_49", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_49(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_60(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_60, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_60", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_60(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_55(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_55, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_55", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_55(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_61(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_61, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_61", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_61(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_62(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_62, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_62", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_62(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_57(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_57, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_57", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_57(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_63(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_63, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_63", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_63(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_64(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_64, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_64", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_64(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_59(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_59, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_59", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_59(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_70(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_70, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_70", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_70(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_65(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_65, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_65", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_65(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_71(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_71, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_71", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_71(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_66(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_66, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_66", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_66(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_72(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_72, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_72", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_72(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_67(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_67, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_67", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_67(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_73(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_73, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_73", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_73(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_68(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_68, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_68", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_68(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_74(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_74, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_74", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_74(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_69(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_69, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_69", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_69(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_75(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_75, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_75", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_75(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_76(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_76, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_76", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_76(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_1(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_2(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_3, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_3", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_3(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_5", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_5(arg0));
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_6", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_6(arg0));
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_7(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_7", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_7(arg0));
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_8", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_8(arg0));
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_9(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_9, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_9", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_9(arg0));
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_10(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_10, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_10", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_10(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_11(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_11", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_11(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_12(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_12, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_12", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_12(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_13(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_13, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_13", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_13(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_17(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_17, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_17", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_17(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r4_18(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r4_18, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r4_18", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r4_18(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yypushstate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yypushstate, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yypushstate", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yypushstate(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_1(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_10(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_10, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_10", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_10(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_2(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_11(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_11, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_11", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_11(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_3, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_3", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_3(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_12(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_12, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_12", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_12(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_5(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_5, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_5", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_5(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_14(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_14, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_14", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_14(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_6(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_6, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_6", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_6(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_20(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_20, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_20", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_20(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_15(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_15, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_15", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_15(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_7(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_7, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_7", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_7(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_21(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_21, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_21", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_21(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_16(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_16, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_16", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_16(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_8(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_8, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_8", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_8(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_22(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_22, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_22", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_22(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_17(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_17, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_17", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_17(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r2_9(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r2_9, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r2_9", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r2_9(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_23(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_23, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_23", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_23(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_18(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_18, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_18", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_18(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_19(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_19, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_19", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_19(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_26(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_26, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_26", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_26(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r1_27(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r1_27, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r1_27", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r1_27(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yypopstate(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yypopstate, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  return (self->t_yypopstate(), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_1(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_1, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_1", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_1(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_2(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_2, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_2", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_2(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_3(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_3, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_3", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_3(arg0), null);
}
Variant c_Smarty_Internal_Templatelexer::ifa_yy_r3_4(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_yy_r3_4, coo_Smarty_Internal_Templatelexer);
  }
  c_Smarty_Internal_Templatelexer *self ATTRIBUTE_UNUSED (static_cast<c_Smarty_Internal_Templatelexer*>(mcp.obj));
  if (UNLIKELY(count < 1)) throw_missing_arguments("Smarty_Internal_Templatelexer::yy_r3_4", count+1);
  CVarRef arg0(UNLIKELY(count <= 0) ? null_variant : a0);
  return (self->t_yy_r3_4(arg0), null);
}
const MethodCallInfoTable c_Smarty_Internal_Templatelexer::s_call_info_table[] = {
  { 0x7DB585B20C7EEF05LL, 1, 6, "yylex3", &c_Smarty_Internal_Templatelexer::ci_yylex3 },
  { 0x2D6043084774AA08LL, 1, 8, "yy_r2_55", &c_Smarty_Internal_Templatelexer::ci_yy_r2_55 },
  { 0x575790513017540BLL, 1, 7, "yy_r2_7", &c_Smarty_Internal_Templatelexer::ci_yy_r2_7 },
  { 0x2B059D8B6407670FLL, 1, 8, "yy_r2_24", &c_Smarty_Internal_Templatelexer::ci_yy_r2_24 },
  { 0x2AC3101051CC8014LL, 1, 7, "yy_r2_2", &c_Smarty_Internal_Templatelexer::ci_yy_r2_2 },
  { 0x04C33CECE964D11ALL, 1, 8, "yy_r1_22", &c_Smarty_Internal_Templatelexer::ci_yy_r1_22 },
  { 0x1EBEC59BB589681CLL, 1, 8, "yy_r2_53", &c_Smarty_Internal_Templatelexer::ci_yy_r2_53 },
  { 0x2EAAD4ECC57B071FLL, 1, 8, "yy_r2_15", &c_Smarty_Internal_Templatelexer::ci_yy_r2_15 },
  { 0x7D79E020D305E422LL, 1, 8, "yy_r1_21", &c_Smarty_Internal_Templatelexer::ci_yy_r1_21 },
  { 0x583A60FC00FEEC23LL, 1, 7, "yy_r4_6", &c_Smarty_Internal_Templatelexer::ci_yy_r4_6 },
  { 0x5AFDE4F092D95A23LL, 0, 8, "yy_r4_12", &c_Smarty_Internal_Templatelexer::ci_yy_r4_12 },
  { 0x6E592A0575ABAB27LL, 1, 7, "yy_r4_5", &c_Smarty_Internal_Templatelexer::ci_yy_r4_5 },
  { 0x7315D1B564C4C427LL, 0, 8, "yy_r3_11", &c_Smarty_Internal_Templatelexer::ci_yy_r3_11 },
  { 0x42A26B3FB17DA62DLL, 1, 8, "yy_r2_62", &c_Smarty_Internal_Templatelexer::ci_yy_r2_62 },
  { 0x2759EC7C70F8A42ELL, 1, 7, "yy_r4_1", &c_Smarty_Internal_Templatelexer::ci_yy_r4_1 },
  { 0x7DB77F7CB085372ELL, 0, 7, "yy_r1_3", &c_Smarty_Internal_Templatelexer::ci_yy_r1_3 },
  { 0x2C33CE4F86651130LL, 1, 8, "yy_r2_76", &c_Smarty_Internal_Templatelexer::ci_yy_r2_76 },
  { 0x6743EB077DB83536LL, 1, 8, "yy_r1_27", &c_Smarty_Internal_Templatelexer::ci_yy_r1_27 },
  { 0x1335A2C7AF6F9D3BLL, 1, 7, "yy_r2_1", &c_Smarty_Internal_Templatelexer::ci_yy_r2_1 },
  { 0x08BBDEB86626A03DLL, 1, 8, "yy_r2_57", &c_Smarty_Internal_Templatelexer::ci_yy_r2_57 },
  { 0x4981CC32B34C813DLL, 0, 7, "yy_r1_6", &c_Smarty_Internal_Templatelexer::ci_yy_r1_6 },
  { 0x46388B46C0D3033ELL, 1, 8, "yy_r1_15", &c_Smarty_Internal_Templatelexer::ci_yy_r1_15 },
  { 0x7A50A2B8D5A20F3FLL, 1, 8, "yy_r1_11", &c_Smarty_Internal_Templatelexer::ci_yy_r1_11 },
  { 0x369CCC46A0D00A40LL, 1, 8, "yy_r2_48", &c_Smarty_Internal_Templatelexer::ci_yy_r2_48 },
  { 0x1251DFC0611CBB45LL, 1, 8, "yy_r2_41", &c_Smarty_Internal_Templatelexer::ci_yy_r2_41 },
  { 0x2D6F6493AD5CFD45LL, 0, 8, "yy_r4_10", &c_Smarty_Internal_Templatelexer::ci_yy_r4_10 },
  { 0x4E643365FD943B45LL, 0, 7, "yy_r3_3", &c_Smarty_Internal_Templatelexer::ci_yy_r3_3 },
  { 0x6991628905E23748LL, 1, 8, "yy_r2_27", &c_Smarty_Internal_Templatelexer::ci_yy_r2_27 },
  { 0x0B946FBE90813148LL, 0, 7, "yy_r2_9", &c_Smarty_Internal_Templatelexer::ci_yy_r2_9 },
  { 0x753E1CD3AFE2B649LL, 1, 8, "yy_r2_42", &c_Smarty_Internal_Templatelexer::ci_yy_r2_42 },
  { 0x19BB19B7A5C7D54BLL, 1, 8, "yy_r2_33", &c_Smarty_Internal_Templatelexer::ci_yy_r2_33 },
  { 0x0CA040F6B496494BLL, 0, 8, "yy_r2_65", &c_Smarty_Internal_Templatelexer::ci_yy_r2_65 },
  { 0x694E0B9C7056A94DLL, 1, 7, "yy_r3_1", &c_Smarty_Internal_Templatelexer::ci_yy_r3_1 },
  { 0x63DBE77093F7F44FLL, 1, 8, "yy_r2_12", &c_Smarty_Internal_Templatelexer::ci_yy_r2_12 },
  { 0x255C1235D9971350LL, 1, 8, "yy_r1_19", &c_Smarty_Internal_Templatelexer::ci_yy_r1_19 },
  { 0x55FBCD6D1AABF552LL, 1, 8, "yy_r2_73", &c_Smarty_Internal_Templatelexer::ci_yy_r2_73 },
  { 0x5F7F0A6BFE91D352LL, 0, 7, "yy_r2_3", &c_Smarty_Internal_Templatelexer::ci_yy_r2_3 },
  { 0x3762C0E20F30C854LL, 1, 8, "yy_r2_16", &c_Smarty_Internal_Templatelexer::ci_yy_r2_16 },
  { 0x7E61D73ABCB34B57LL, 1, 7, "yy_r1_9", &c_Smarty_Internal_Templatelexer::ci_yy_r1_9 },
  { 0x2B2ED0685FB60558LL, 1, 7, "yy_r3_7", &c_Smarty_Internal_Templatelexer::ci_yy_r3_7 },
  { 0x73D1907F920AEB5CLL, 1, 8, "yy_r1_23", &c_Smarty_Internal_Templatelexer::ci_yy_r1_23 },
  { 0x7A59B4B5BDB13C5DLL, 1, 8, "yy_r2_32", &c_Smarty_Internal_Templatelexer::ci_yy_r2_32 },
  { 0x7DA161FE777C1F5ELL, 1, 8, "yy_r2_17", &c_Smarty_Internal_Templatelexer::ci_yy_r2_17 },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_Smarty_Internal_Templatelexer::ci___construct },
  { 0x525AF52F53BD925FLL, 0, 8, "yy_r2_22", &c_Smarty_Internal_Templatelexer::ci_yy_r2_22 },
  { 0x23FD818EA0967760LL, 1, 7, "yy_r4_4", &c_Smarty_Internal_Templatelexer::ci_yy_r4_4 },
  { 0x0BD5172D110E5F60LL, 0, 8, "yy_r2_10", &c_Smarty_Internal_Templatelexer::ci_yy_r2_10 },
  { 0x4531DF80EAD30462LL, 1, 8, "yy_r2_59", &c_Smarty_Internal_Templatelexer::ci_yy_r2_59 },
  { 0x15C02B0E93357363LL, 1, 8, "yy_r2_36", &c_Smarty_Internal_Templatelexer::ci_yy_r2_36 },
  { 0x0D6C1A01D2961A65LL, 1, 8, "yy_r2_38", &c_Smarty_Internal_Templatelexer::ci_yy_r2_38 },
  { 0x6B9F791F18698166LL, 1, 7, "yy_r1_7", &c_Smarty_Internal_Templatelexer::ci_yy_r1_7 },
  { 0x06833643C6381468LL, 1, 8, "yy_r2_37", &c_Smarty_Internal_Templatelexer::ci_yy_r2_37 },
  { 0x1861B214E11B9C69LL, 1, 8, "yy_r2_19", &c_Smarty_Internal_Templatelexer::ci_yy_r2_19 },
  { 0x6AFCBF17A546686ALL, 1, 7, "yy_r4_8", &c_Smarty_Internal_Templatelexer::ci_yy_r4_8 },
  { 0x72416887A2D92A6ALL, 0, 7, "yy_r2_5", &c_Smarty_Internal_Templatelexer::ci_yy_r2_5 },
  { 0x4F057AABC510ED6CLL, 1, 8, "yy_r2_72", &c_Smarty_Internal_Templatelexer::ci_yy_r2_72 },
  { 0x03C2F55EA7812F6CLL, 0, 8, "yy_r2_67", &c_Smarty_Internal_Templatelexer::ci_yy_r2_67 },
  { 0x0F9B14CEA1ED6C70LL, 1, 8, "yy_r2_47", &c_Smarty_Internal_Templatelexer::ci_yy_r2_47 },
  { 0x5E4D18419BB43C76LL, 1, 8, "yy_r2_35", &c_Smarty_Internal_Templatelexer::ci_yy_r2_35 },
  { 0x4618A89ED278AB78LL, 1, 7, "yy_r3_5", &c_Smarty_Internal_Templatelexer::ci_yy_r3_5 },
  { 0x422DFB51ECFB7278LL, 0, 8, "yy_r2_20", &c_Smarty_Internal_Templatelexer::ci_yy_r2_20 },
  { 0x66A3A1705955F778LL, 0, 8, "yy_r2_30", &c_Smarty_Internal_Templatelexer::ci_yy_r2_30 },
  { 0x79464A7FF36DDE7ALL, 1, 8, "yy_r2_60", &c_Smarty_Internal_Templatelexer::ci_yy_r2_60 },
  { 0x301DF041BA6E797CLL, 1, 7, "yy_r3_8", &c_Smarty_Internal_Templatelexer::ci_yy_r3_8 },
  { 0x7CAEB518385F5F80LL, 1, 8, "yy_r2_39", &c_Smarty_Internal_Templatelexer::ci_yy_r2_39 },
  { 0x4B07C8782D317B84LL, 1, 7, "yy_r3_6", &c_Smarty_Internal_Templatelexer::ci_yy_r3_6 },
  { 0x1E8320E028320C85LL, 1, 8, "yy_r2_13", &c_Smarty_Internal_Templatelexer::ci_yy_r2_13 },
  { 0x55657587A113B887LL, 1, 8, "yy_r2_28", &c_Smarty_Internal_Templatelexer::ci_yy_r2_28 },
  { 0x24FCE6205F9C518ELL, 1, 8, "yy_r2_75", &c_Smarty_Internal_Templatelexer::ci_yy_r2_75 },
  { 0x6FE4413A66F5EE8ELL, 0, 7, "yy_r1_2", &c_Smarty_Internal_Templatelexer::ci_yy_r1_2 },
  { 0x068951558B2A278ELL, 0, 7, "yy_r1_5", &c_Smarty_Internal_Templatelexer::ci_yy_r1_5 },
  { 0x4CAFFA1064AC0790LL, 1, 8, "yy_r1_10", &c_Smarty_Internal_Templatelexer::ci_yy_r1_10 },
  { 0x448AE31F42419B91LL, 1, 8, "yy_r2_29", &c_Smarty_Internal_Templatelexer::ci_yy_r2_29 },
  { 0x6A526759991A069BLL, 1, 7, "yy_r4_2", &c_Smarty_Internal_Templatelexer::ci_yy_r4_2 },
  { 0x0537030BFD94A49ELL, 1, 8, "yy_r2_69", &c_Smarty_Internal_Templatelexer::ci_yy_r2_69 },
  { 0x0D764DBEAAB550A4LL, 1, 8, "yy_r2_50", &c_Smarty_Internal_Templatelexer::ci_yy_r2_50 },
  { 0x13B78274A21065A6LL, 1, 8, "yy_r2_61", &c_Smarty_Internal_Templatelexer::ci_yy_r2_61 },
  { 0x4D3CEBA9161667A9LL, 1, 8, "yy_r2_68", &c_Smarty_Internal_Templatelexer::ci_yy_r2_68 },
  { 0x697061515AE8F6A9LL, 0, 8, "yy_r4_13", &c_Smarty_Internal_Templatelexer::ci_yy_r4_13 },
  { 0x6F5A977598E2E6AALL, 1, 8, "yy_r2_26", &c_Smarty_Internal_Templatelexer::ci_yy_r2_26 },
  { 0x5D15A3FB2D581DAALL, 0, 8, "yy_r2_54", &c_Smarty_Internal_Templatelexer::ci_yy_r2_54 },
  { 0x41563BB777E2B5AFLL, 1, 8, "yy_r2_18", &c_Smarty_Internal_Templatelexer::ci_yy_r2_18 },
  { 0x0AFF810E9CF91BAFLL, 0, 8, "yy_r2_63", &c_Smarty_Internal_Templatelexer::ci_yy_r2_63 },
  { 0x3223E4C7C137ADB0LL, 1, 8, "yy_r2_40", &c_Smarty_Internal_Templatelexer::ci_yy_r2_40 },
  { 0x5B238E40B586B7B0LL, 0, 8, "yy_r2_70", &c_Smarty_Internal_Templatelexer::ci_yy_r2_70 },
  { 0x1DFC9C83858B6EB1LL, 1, 8, "yy_r1_18", &c_Smarty_Internal_Templatelexer::ci_yy_r1_18 },
  { 0x2825B22D1E4001B3LL, 1, 8, "yy_r4_11", &c_Smarty_Internal_Templatelexer::ci_yy_r4_11 },
  { 0x3AA291A9C4CC5CB4LL, 1, 7, "yy_r4_7", &c_Smarty_Internal_Templatelexer::ci_yy_r4_7 },
  { 0x676690BE40D5CCB5LL, 1, 6, "yylex1", &c_Smarty_Internal_Templatelexer::ci_yylex1 },
  { 0x373CC36756A574B5LL, 0, 8, "yy_r2_34", &c_Smarty_Internal_Templatelexer::ci_yy_r2_34 },
  { 0x01A38B47D6A12AB7LL, 1, 8, "yy_r2_74", &c_Smarty_Internal_Templatelexer::ci_yy_r2_74 },
  { 0x62668B1D12A071BDLL, 1, 8, "yy_r2_64", &c_Smarty_Internal_Templatelexer::ci_yy_r2_64 },
  { 0x6544BC116F0472C0LL, 1, 6, "yylex2", &c_Smarty_Internal_Templatelexer::ci_yylex2 },
  { 0x293FE75751BAADC0LL, 0, 6, "yylex4", &c_Smarty_Internal_Templatelexer::ci_yylex4 },
  { 0x7E9A5027816CD0C7LL, 1, 7, "yy_r3_2", &c_Smarty_Internal_Templatelexer::ci_yy_r3_2 },
  { 0x200F9292475450C8LL, 1, 8, "yy_r2_71", &c_Smarty_Internal_Templatelexer::ci_yy_r2_71 },
  { 0x5F81126DC4B4F6CCLL, 1, 8, "yy_r1_26", &c_Smarty_Internal_Templatelexer::ci_yy_r1_26 },
  { 0x63B077F10EAA9ECFLL, 1, 7, "yy_r3_4", &c_Smarty_Internal_Templatelexer::ci_yy_r3_4 },
  { 0x7B3DDFEA6BE7D2D1LL, 1, 5, "yylex", &c_Smarty_Internal_Templatelexer::ci_yylex },
  { 0x4C6002B70384F5D1LL, 0, 8, "yy_r2_11", &c_Smarty_Internal_Templatelexer::ci_yy_r2_11 },
  { 0x1EF854D6DC12FED2LL, 1, 11, "yypushstate", &c_Smarty_Internal_Templatelexer::ci_yypushstate },
  { 0x74EF5FA36C48C4D4LL, 1, 7, "yy_r2_6", &c_Smarty_Internal_Templatelexer::ci_yy_r2_6 },
  { 0x2E97F3FC408A60D5LL, 1, 7, "yy_r1_8", &c_Smarty_Internal_Templatelexer::ci_yy_r1_8 },
  { 0x569CCFF87645D1D6LL, 1, 10, "yypopstate", &c_Smarty_Internal_Templatelexer::ci_yypopstate },
  { 0x38BF3B8606849FD7LL, 1, 8, "yy_r1_12", &c_Smarty_Internal_Templatelexer::ci_yy_r1_12 },
  { 0x43895CF3C42995DBLL, 1, 8, "yy_r4_18", &c_Smarty_Internal_Templatelexer::ci_yy_r4_18 },
  { 0x1FB8B973520A6ADCLL, 1, 7, "yy_r4_9", &c_Smarty_Internal_Templatelexer::ci_yy_r4_9 },
  { 0x150ADE6E3958BCDFLL, 1, 8, "yy_r2_52", &c_Smarty_Internal_Templatelexer::ci_yy_r2_52 },
  { 0x40C5EC79BAA288E3LL, 1, 8, "yy_r1_14", &c_Smarty_Internal_Templatelexer::ci_yy_r1_14 },
  { 0x5A5E07131E5702E4LL, 1, 8, "yy_r4_17", &c_Smarty_Internal_Templatelexer::ci_yy_r4_17 },
  { 0x44E61A2BAA51BAE5LL, 1, 8, "yy_r1_17", &c_Smarty_Internal_Templatelexer::ci_yy_r1_17 },
  { 0x6C6CEAEB2F6002E6LL, 1, 8, "yy_r2_51", &c_Smarty_Internal_Templatelexer::ci_yy_r2_51 },
  { 0x553D8BBFA561A3EDLL, 1, 8, "yy_r2_66", &c_Smarty_Internal_Templatelexer::ci_yy_r2_66 },
  { 0x69E2184D977AD4EELL, 1, 8, "yy_r2_14", &c_Smarty_Internal_Templatelexer::ci_yy_r2_14 },
  { 0x6AF521610C3DBEEELL, 0, 7, "yy_r1_1", &c_Smarty_Internal_Templatelexer::ci_yy_r1_1 },
  { 0x3E0BB53DA5A068F1LL, 1, 7, "yy_r2_8", &c_Smarty_Internal_Templatelexer::ci_yy_r2_8 },
  { 0x079E325FB10DC7F2LL, 1, 8, "yy_r2_31", &c_Smarty_Internal_Templatelexer::ci_yy_r2_31 },
  { 0x38D55B719572FBF5LL, 1, 7, "yybegin", &c_Smarty_Internal_Templatelexer::ci_yybegin },
  { 0x31C8A8DB301C98F5LL, 0, 8, "yy_r2_43", &c_Smarty_Internal_Templatelexer::ci_yy_r2_43 },
  { 0x49F45CFAB7643FF6LL, 1, 8, "yy_r1_16", &c_Smarty_Internal_Templatelexer::ci_yy_r1_16 },
  { 0x464BBAACCAC972F9LL, 1, 8, "yy_r1_20", &c_Smarty_Internal_Templatelexer::ci_yy_r1_20 },
  { 0x1A1F726F33BA1AFALL, 1, 8, "yy_r2_49", &c_Smarty_Internal_Templatelexer::ci_yy_r2_49 },
  { 0, 1, 0, 0 }
};
const int c_Smarty_Internal_Templatelexer::s_call_info_index[] = {
  255,
  -1,-1,-1,-1,-1,0,-1,-1,
  1,-1,-1,2,-1,-1,-1,3,
  -1,-1,-1,-1,4,-1,-1,-1,
  -1,-1,5,-1,6,-1,-1,7,
  -1,-1,8,9,-1,-1,-1,11,
  -1,-1,-1,-1,-1,13,14,-1,
  16,-1,-1,-1,-1,-1,17,-1,
  -1,-1,-1,18,-1,19,21,22,
  23,-1,-1,-1,-1,24,-1,-1,
  27,29,-1,30,-1,32,-1,33,
  34,-1,35,-1,37,-1,-1,38,
  39,-1,-1,-1,40,41,42,43,
  45,-1,47,48,-1,49,50,-1,
  51,52,53,-1,55,-1,-1,-1,
  57,-1,-1,-1,-1,-1,58,-1,
  59,-1,62,-1,63,-1,-1,-1,
  64,-1,-1,-1,65,66,-1,67,
  -1,-1,-1,-1,-1,-1,68,-1,
  71,72,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,73,-1,-1,74,-1,
  -1,-1,-1,-1,75,-1,76,-1,
  -1,77,79,-1,-1,-1,-1,81,
  83,85,-1,86,87,88,-1,90,
  -1,-1,-1,-1,-1,91,-1,-1,
  92,-1,-1,-1,-1,-1,-1,94,
  95,-1,-1,-1,96,-1,-1,97,
  -1,98,100,-1,101,102,103,104,
  -1,-1,-1,105,106,-1,-1,107,
  -1,-1,-1,108,109,110,111,-1,
  -1,-1,-1,-1,-1,112,113,-1,
  -1,115,116,-1,-1,117,119,-1,
  -1,120,121,-1,-1,-1,-1,-1,

};
c_Smarty_Internal_Templatelexer *c_Smarty_Internal_Templatelexer::create(CVarRef v_data, CVarRef v_compiler) {
  CountableHelper h(this);
  init();
  t___construct(v_data, v_compiler);
  return this;
}
const ObjectStaticCallbacks cw_Smarty_Internal_Templatelexer = {
  (ObjectData*(*)(ObjectData*))coo_Smarty_Internal_Templatelexer,
  c_Smarty_Internal_Templatelexer::s_call_info_table,c_Smarty_Internal_Templatelexer::s_call_info_index,
  c_Smarty_Internal_Templatelexer::s_instanceof_table,c_Smarty_Internal_Templatelexer::s_instanceof_index,
  &c_Smarty_Internal_Templatelexer::s_class_name,
  &c_Smarty_Internal_Templatelexer::os_prop_table,&c_Smarty_Internal_Templatelexer::ci___construct,0,0
};
void c_Smarty_Internal_Templatelexer::init() {
  m_state = 1LL;
  m_strip = false;
  m_heredoc_id_stack = s_sa00000000;
  m_smarty_token_names = s_sa6be1d2eb;
  m__yy_state = 1LL;
  m__yy_stack = s_sa00000000;
}
/* SRC: Smarty/libs/sysplugins/smarty_internal_templatelexer.php line 80 */
void c_Smarty_Internal_Templatelexer::t___construct(Variant v_data, Variant v_compiler) {
  INSTANCE_METHOD_INJECTION_ROOTLESS(Smarty_Internal_Templatelexer, Smarty_Internal_Templatelexer::__construct);
  INTERCEPT_INJECTION("Smarty_Internal_Templatelexer::__construct", array_createvi(2, toVPOD(v_data), toVPOD(v_compiler)), );
  bool oldInCtor = gasInCtor(true);
  Variant tmp_ref;
  m_data.assignVal(v_data);
  m_counter = 0LL;
  m_line = 1LL;
  {
    LINE(86,0);
    const Variant &tmp0((v_compiler.o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss675664bf, "smarty"), tmp0);
  }
  GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss0282ae4f, "compiler"), v_compiler);
  {
    LINE(88,0);
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0, NAMSTR(s_ssb9e13cd6, "/"))));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ssce6974dd, "ldel"), tmp1);
  }
  {
    LINE(89,0);
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true))));
    int tmp1((x_strlen(tmp0)));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss83c05e30, "ldel_length"), tmp1);
  }
  {
    LINE(90,0);
    const String &tmp0((toString(GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true))));
    const String &tmp1((x_preg_quote(tmp0, NAMSTR(s_ssb9e13cd6, "/"))));
    GET_THIS_ARROW()o_setPublic(NAMSTR(s_ss710f5868, "rdel"), tmp1);
  }
  {
    LINE(91,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssed156107, "left_delimiter"), true)));
    m_smarty_token_names.set(NAMSTR(s_ssc037bde3, "LDEL"), (tmp0), true);
  }
  {
    LINE(92,0);
    const Variant &tmp0((GET_THIS_ARROW()o_getPublic(NAMSTR(s_ss675664bf, "smarty"), true).o_getPublic(NAMSTR(s_ssd0a2438e, "right_delimiter"), true)));
    m_smarty_token_names.set(NAMSTR(s_ss96ecdcb2, "RDEL"), (tmp0), true);
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
}
