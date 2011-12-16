
#include <runtime/base/hphp.h>
#include <sys/scalar_integers_remap.h>
#include <sys/global_variables.h>


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

static const int64 ivalues[] = {
  0x000000000000004cLL, 0x0000000400000000LL, // 76
  0x0000000000000035LL, 0x0000000400000000LL, // 53
  0xfffffffffffffff8LL, 0x0000000400000000LL, // -8
  0x0000000000000010LL, 0x0000000400000000LL, // 16
  0x000000000000000eLL, 0x0000000400000000LL, // 14
  0x0000000000000037LL, 0x0000000400000000LL, // 55
  0x0000000000000002LL, 0x0000000400000000LL, // 2
  0x0000000000000043LL, 0x0000000400000000LL, // 67
  0x0000000000000033LL, 0x0000000400000000LL, // 51
  0x0000000000000029LL, 0x0000000400000000LL, // 41
  0x000000000000000cLL, 0x0000000400000000LL, // 12
  0x0000000000000041LL, 0x0000000400000000LL, // 65
  0x0000000000000032LL, 0x0000000400000000LL, // 50
  0x0000000000000003LL, 0x0000000400000000LL, // 3
  0x0000000000000038LL, 0x0000000400000000LL, // 56
  0x0000000000000042LL, 0x0000000400000000LL, // 66
  0x0000000000000024LL, 0x0000000400000000LL, // 36
  0x0000000000000028LL, 0x0000000400000000LL, // 40
  0x000000000000004bLL, 0x0000000400000000LL, // 75
  0x0000000000000034LL, 0x0000000400000000LL, // 52
  0x0000000000000001LL, 0x0000000400000000LL, // 1
  0x00000000000001a4LL, 0x0000000400000000LL, // 420
  0x000000000000001fLL, 0x0000000400000000LL, // 31
  0x0000000000000026LL, 0x0000000400000000LL, // 38
  0x0000000000000a4dLL, 0x0000000400000000LL, // 2637
  0x000000000000003dLL, 0x0000000400000000LL, // 61
  0x000000000000000fLL, 0x0000000400000000LL, // 15
  0x000000000000004dLL, 0x0000000400000000LL, // 77
  0x0000000000000008LL, 0x0000000400000000LL, // 8
  0x000000000000002fLL, 0x0000000400000000LL, // 47
  0x00000000000000fcLL, 0x0000000400000000LL, // 252
  0x000000000000001dLL, 0x0000000400000000LL, // 29
  0xffffffffffffffd3LL, 0x0000000400000000LL, // -45
  0x00000000000001f9LL, 0x0000000400000000LL, // 505
  0x000000000000024cLL, 0x0000000400000000LL, // 588
  0x0000000000000021LL, 0x0000000400000000LL, // 33
  0x0000000000000200LL, 0x0000000400000000LL, // 512
  0x0000000000000014LL, 0x0000000400000000LL, // 20
  0x0000000000000048LL, 0x0000000400000000LL, // 72
  0x0000000000000013LL, 0x0000000400000000LL, // 19
  0x0000000000000183LL, 0x0000000400000000LL, // 387
  0x000000000000024eLL, 0x0000000400000000LL, // 590
  0x0000000000000023LL, 0x0000000400000000LL, // 35
  0x000000000000003aLL, 0x0000000400000000LL, // 58
  0x0000000000000012LL, 0x0000000400000000LL, // 18
  0x0000000000000030LL, 0x0000000400000000LL, // 48
  0x0000000000000047LL, 0x0000000400000000LL, // 71
  0x0000000000000000LL, 0x0000000400000000LL, // 0
  0x000000000000002cLL, 0x0000000400000000LL, // 44
  0x0000000000000020LL, 0x0000000400000000LL, // 32
  0x0000000000000009LL, 0x0000000400000000LL, // 9
  0x000000000000001eLL, 0x0000000400000000LL, // 30
  0x000000000000002eLL, 0x0000000400000000LL, // 46
  0x0000000000000027LL, 0x0000000400000000LL, // 39
  0x0000000000000025LL, 0x0000000400000000LL, // 37
  0x000000000000004eLL, 0x0000000400000000LL, // 78
  0x000000000000024dLL, 0x0000000400000000LL, // 589
  0x0000000000000019LL, 0x0000000400000000LL, // 25
  0x000000000000001cLL, 0x0000000400000000LL, // 28
  0x0000000000000040LL, 0x0000000400000000LL, // 64
  0x0000000000000e10LL, 0x0000000400000000LL, // 3600
  0x000000000000000bLL, 0x0000000400000000LL, // 11
  0x000000000000002aLL, 0x0000000400000000LL, // 42
  0x0000000000000050LL, 0x0000000400000000LL, // 80
  0x000000000000001bLL, 0x0000000400000000LL, // 27
  0x000000000000001aLL, 0x0000000400000000LL, // 26
  0xffffffffffffffa5LL, 0x0000000400000000LL, // -91
  0x000000000000000dLL, 0x0000000400000000LL, // 13
  0x0000000000000011LL, 0x0000000400000000LL, // 17
  0x0000000000000046LL, 0x0000000400000000LL, // 70
  0x00000000000000c9LL, 0x0000000400000000LL, // 201
  0x0000000000000016LL, 0x0000000400000000LL, // 22
  0x0000000000000036LL, 0x0000000400000000LL, // 54
  0x00000000000000ceLL, 0x0000000400000000LL, // 206
  0x0000000000000044LL, 0x0000000400000000LL, // 68
  0x000000000000002dLL, 0x0000000400000000LL, // 45
  0x0000000000000064LL, 0x0000000400000000LL, // 100
  0x0000000000000018LL, 0x0000000400000000LL, // 24
  0x0000000000000079LL, 0x0000000400000000LL, // 121
  0x000000000000003fLL, 0x0000000400000000LL, // 63
  0x0000000000000006LL, 0x0000000400000000LL, // 6
  0x000000000000003bLL, 0x0000000400000000LL, // 59
  0x000000000000000aLL, 0x0000000400000000LL, // 10
  0x0000000000000400LL, 0x0000000400000000LL, // 1024
  0x000000000000002bLL, 0x0000000400000000LL, // 43
  0x0000000000000031LL, 0x0000000400000000LL, // 49
  0x0000000000000004LL, 0x0000000400000000LL, // 4
  0x0000000000000049LL, 0x0000000400000000LL, // 73
  0x0000000000000039LL, 0x0000000400000000LL, // 57
  0x000000000000270fLL, 0x0000000400000000LL, // 9999
  0x0000000000000022LL, 0x0000000400000000LL, // 34
  0xfffffffffffffff6LL, 0x0000000400000000LL, // -10
  0x0000000000000005LL, 0x0000000400000000LL, // 5
  0x000000000000004aLL, 0x0000000400000000LL, // 74
  0x0000000000000015LL, 0x0000000400000000LL, // 21
  0x000000000000003eLL, 0x0000000400000000LL, // 62
  0x000000000000003cLL, 0x0000000400000000LL, // 60
  0x0000000000000007LL, 0x0000000400000000LL, // 7
  0x0000000000000017LL, 0x0000000400000000LL, // 23
  0x0000000000000045LL, 0x0000000400000000LL, // 69
};
const VarNR &s_svi804a9f6c = *(const VarNR*)(ivalues + 0);
const VarNR &s_svi81e173cf = *(const VarNR*)(ivalues + 2);
const VarNR &s_svi84b3a0e4 = *(const VarNR*)(ivalues + 4);
const VarNR &s_svi86af027e = *(const VarNR*)(ivalues + 6);
const VarNR &s_svi8a2932db = *(const VarNR*)(ivalues + 8);
const VarNR &s_svi8ef1aafe = *(const VarNR*)(ivalues + 10);
const VarNR &s_svi90d5f98c = *(const VarNR*)(ivalues + 12);
const VarNR &s_svi91434413 = *(const VarNR*)(ivalues + 14);
const VarNR &s_svi92b731e0 = *(const VarNR*)(ivalues + 16);
const VarNR &s_svi991ae7ae = *(const VarNR*)(ivalues + 18);
const VarNR &s_svi9afd1c48 = *(const VarNR*)(ivalues + 20);
const VarNR &s_svia217eff2 = *(const VarNR*)(ivalues + 22);
const VarNR &s_svia4de988f = *(const VarNR*)(ivalues + 24);
const VarNR &s_svia6bfbbdd = *(const VarNR*)(ivalues + 26);
const VarNR &s_svia8a4a401 = *(const VarNR*)(ivalues + 28);
const VarNR &s_sviab925b96 = *(const VarNR*)(ivalues + 30);
const VarNR &s_sviaf04d6ab = *(const VarNR*)(ivalues + 32);
const VarNR &s_sviaf4f10ee = *(const VarNR*)(ivalues + 34);
const VarNR &s_svib20a2bb5 = *(const VarNR*)(ivalues + 36);
const VarNR &s_svib5b42dba = *(const VarNR*)(ivalues + 38);
const VarNR &s_svib794f8ce = *(const VarNR*)(ivalues + 40);
const VarNR &s_sviba4cafde = *(const VarNR*)(ivalues + 42);
const VarNR &s_svibb0e3997 = *(const VarNR*)(ivalues + 44);
const VarNR &s_svibfdab04a = *(const VarNR*)(ivalues + 46);
const VarNR &s_svic1381bba = *(const VarNR*)(ivalues + 48);
const VarNR &s_svic1796e5f = *(const VarNR*)(ivalues + 50);
const VarNR &s_svic1bc2df2 = *(const VarNR*)(ivalues + 52);
const VarNR &s_svic2dfef9e = *(const VarNR*)(ivalues + 54);
const VarNR &s_svic3578135 = *(const VarNR*)(ivalues + 56);
const VarNR &s_svicba2782f = *(const VarNR*)(ivalues + 58);
const VarNR &s_svicbcb7ccc = *(const VarNR*)(ivalues + 60);
const VarNR &s_svicbe229a2 = *(const VarNR*)(ivalues + 62);
const VarNR &s_svicd2ec71e = *(const VarNR*)(ivalues + 64);
const VarNR &s_svicf3d5329 = *(const VarNR*)(ivalues + 66);
const VarNR &s_svid5a00325 = *(const VarNR*)(ivalues + 68);
const VarNR &s_svid5c9371d = *(const VarNR*)(ivalues + 70);
const VarNR &s_svid5e04164 = *(const VarNR*)(ivalues + 72);
const VarNR &s_svid7a79683 = *(const VarNR*)(ivalues + 74);
const VarNR &s_svide090339 = *(const VarNR*)(ivalues + 76);
const VarNR &s_svidfed6671 = *(const VarNR*)(ivalues + 78);
const VarNR &s_svie4a8e823 = *(const VarNR*)(ivalues + 80);
const VarNR &s_svie674c6b6 = *(const VarNR*)(ivalues + 82);
const VarNR &s_svie69e43fe = *(const VarNR*)(ivalues + 84);
const VarNR &s_svie83bacbb = *(const VarNR*)(ivalues + 86);
const VarNR &s_svie87da176 = *(const VarNR*)(ivalues + 88);
const VarNR &s_sviebf595ef = *(const VarNR*)(ivalues + 90);
const VarNR &s_svief988c68 = *(const VarNR*)(ivalues + 92);
const VarNR &s_svif01bca90 = *(const VarNR*)(ivalues + 94);
const VarNR &s_svif261966b = *(const VarNR*)(ivalues + 96);
const VarNR &s_svif2a1fb10 = *(const VarNR*)(ivalues + 98);
const VarNR &s_svif43ec697 = *(const VarNR*)(ivalues + 100);
const VarNR &s_svifc87a5f7 = *(const VarNR*)(ivalues + 102);
const VarNR &s_svifcca50a8 = *(const VarNR*)(ivalues + 104);
const VarNR &s_svi0844d1a0 = *(const VarNR*)(ivalues + 106);
const VarNR &s_svi089096cd = *(const VarNR*)(ivalues + 108);
const VarNR &s_svi1089a340 = *(const VarNR*)(ivalues + 110);
const VarNR &s_svi1135437d = *(const VarNR*)(ivalues + 112);
const VarNR &s_svi126f569c = *(const VarNR*)(ivalues + 114);
const VarNR &s_svi1452654a = *(const VarNR*)(ivalues + 116);
const VarNR &s_svi1abc09e0 = *(const VarNR*)(ivalues + 118);
const VarNR &s_svi1bdbd9c9 = *(const VarNR*)(ivalues + 120);
const VarNR &s_svi1c9845ac = *(const VarNR*)(ivalues + 122);
const VarNR &s_svi1e7b6f7a = *(const VarNR*)(ivalues + 124);
const VarNR &s_svi2161de23 = *(const VarNR*)(ivalues + 126);
const VarNR &s_svi2343698b = *(const VarNR*)(ivalues + 128);
const VarNR &s_svi2525fc77 = *(const VarNR*)(ivalues + 130);
const VarNR &s_svi28dae53e = *(const VarNR*)(ivalues + 132);
const VarNR &s_svi2d6d01cf = *(const VarNR*)(ivalues + 134);
const VarNR &s_svi30e635cc = *(const VarNR*)(ivalues + 136);
const VarNR &s_svi32c33fb0 = *(const VarNR*)(ivalues + 138);
const VarNR &s_svi33c6ced4 = *(const VarNR*)(ivalues + 140);
const VarNR &s_svi3930cb30 = *(const VarNR*)(ivalues + 142);
const VarNR &s_svi39793333 = *(const VarNR*)(ivalues + 144);
const VarNR &s_svi3b777f28 = *(const VarNR*)(ivalues + 146);
const VarNR &s_svi4396a855 = *(const VarNR*)(ivalues + 148);
const VarNR &s_svi45351914 = *(const VarNR*)(ivalues + 150);
const VarNR &s_svi49bd2782 = *(const VarNR*)(ivalues + 152);
const VarNR &s_svi4a053537 = *(const VarNR*)(ivalues + 154);
const VarNR &s_svi4ab816d7 = *(const VarNR*)(ivalues + 156);
const VarNR &s_svi4d0d20cd = *(const VarNR*)(ivalues + 158);
const VarNR &s_svi4d7e8e12 = *(const VarNR*)(ivalues + 160);
const VarNR &s_svi4f5b0070 = *(const VarNR*)(ivalues + 162);
const VarNR &s_svi542bad8b = *(const VarNR*)(ivalues + 164);
const VarNR &s_svi543f7d14 = *(const VarNR*)(ivalues + 166);
const VarNR &s_svi5608ae53 = *(const VarNR*)(ivalues + 168);
const VarNR &s_svi5c755c6f = *(const VarNR*)(ivalues + 170);
const VarNR &s_svi5e544a31 = *(const VarNR*)(ivalues + 172);
const VarNR &s_svi5ecb9818 = *(const VarNR*)(ivalues + 174);
const VarNR &s_svi602f2cad = *(const VarNR*)(ivalues + 176);
const VarNR &s_svi606599b5 = *(const VarNR*)(ivalues + 178);
const VarNR &s_svi61cc8770 = *(const VarNR*)(ivalues + 180);
const VarNR &s_svi6437df8a = *(const VarNR*)(ivalues + 182);
const VarNR &s_svi6a15d700 = *(const VarNR*)(ivalues + 184);
const VarNR &s_svi6eded265 = *(const VarNR*)(ivalues + 186);
const VarNR &s_svi70c2484d = *(const VarNR*)(ivalues + 188);
const VarNR &s_svi761c733a = *(const VarNR*)(ivalues + 190);
const VarNR &s_svi790f4bf9 = *(const VarNR*)(ivalues + 192);
const VarNR &s_svi7aeb669d = *(const VarNR*)(ivalues + 194);
const VarNR &s_svi7e65284e = *(const VarNR*)(ivalues + 196);
const VarNR &s_svi7f91e5ac = *(const VarNR*)(ivalues + 198);


///////////////////////////////////////////////////////////////////////////////
}
