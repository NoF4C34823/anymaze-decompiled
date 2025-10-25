
/* WARNING: Removing unreachable block (ram,0x00014001219a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140011fe7(uint *param_1,undefined8 param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [14];
  unkbyte10 Var11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  undefined1 in_AL;
  undefined4 *in_RDX;
  int in_R10D;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar17;
  undefined8 in_XMM2_Qa;
  float fVar18;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  undefined1 auVar19 [16];
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  undefined1 uVar20;
  undefined1 uVar22;
  undefined2 uVar21;
  undefined1 uVar23;
  undefined4 in_XMM5_Da;
  undefined1 uVar25;
  undefined2 uVar24;
  undefined1 uVar26;
  undefined1 uVar28;
  undefined2 uVar27;
  undefined1 uVar29;
  undefined4 in_XMM5_Db;
  undefined1 uVar31;
  undefined2 uVar30;
  float fVar32;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  undefined2 uVar122;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar55 [16];
  undefined2 uVar123;
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  undefined2 uVar124;
  undefined1 auVar91 [16];
  float fVar94;
  uint uVar95;
  uint uVar96;
  undefined4 uVar97;
  float fVar99;
  uint uVar100;
  uint uVar101;
  float fVar102;
  uint uVar103;
  uint uVar104;
  float fVar105;
  uint uVar106;
  uint uVar107;
  undefined1 auVar98 [16];
  float fVar108;
  float fVar113;
  float fVar114;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar115;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar39 [16];
  undefined1 auVar56 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar63 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar82 [16];
  
  fVar18 = (float)((ulonglong)in_XMM2_Qa >> 0x20);
  fVar17 = (float)in_XMM2_Qa;
  do {
    uVar78 = *param_1;
    param_4 = param_4 + 4;
    uVar31 = (undefined1)((uint)in_XMM5_Db >> 0x18);
    auVar90._0_15_ = ZEXT415(uVar78);
    auVar90[0xf] = uVar31;
    uVar29 = (undefined1)((uint)in_XMM5_Db >> 0x10);
    auVar89._14_2_ = auVar90._14_2_;
    auVar89._0_13_ = ZEXT413(uVar78);
    auVar89[0xd] = uVar29;
    auVar88._13_3_ = auVar89._13_3_;
    auVar88._0_13_ = ZEXT413(uVar78);
    uVar28 = (undefined1)((uint)in_XMM5_Db >> 8);
    auVar87._12_4_ = auVar88._12_4_;
    auVar87._4_7_ = 0;
    auVar87._0_4_ = uVar78;
    auVar87[0xb] = uVar28;
    auVar86._11_5_ = auVar87._11_5_;
    auVar86._4_7_ = 0;
    auVar86._0_4_ = uVar78;
    uVar26 = (undefined1)in_XMM5_Db;
    auVar85._10_6_ = auVar86._10_6_;
    auVar85._4_5_ = 0;
    auVar85._0_4_ = uVar78;
    auVar85[9] = uVar26;
    auVar84._9_7_ = auVar85._9_7_;
    auVar84._4_5_ = 0;
    auVar84._0_4_ = uVar78;
    uVar25 = (undefined1)((uint)in_XMM5_Da >> 0x18);
    Var11 = CONCAT91(CONCAT81(auVar84._8_8_,uVar25),(char)(uVar78 >> 0x18));
    uVar23 = (undefined1)((uint)in_XMM5_Da >> 0x10);
    auVar83._6_10_ = Var11;
    auVar83[5] = uVar23;
    auVar83[4] = (char)(uVar78 >> 0x10);
    auVar83._0_4_ = uVar78;
    uVar22 = (undefined1)((uint)in_XMM5_Da >> 8);
    auVar10._2_12_ = auVar83._4_12_;
    auVar10[1] = uVar22;
    auVar10[0] = (char)(uVar78 >> 8);
    uVar20 = (undefined1)in_XMM5_Da;
    uVar124 = CONCAT11(uVar20,(char)uVar78);
    auVar82._2_14_ = auVar10;
    uVar78 = param_1[1];
    uVar30 = (undefined2)((uint)in_XMM5_Db >> 0x10);
    auVar93._0_12_ = auVar82._0_12_;
    auVar93._12_2_ = (short)Var11;
    auVar93._14_2_ = uVar30;
    uVar27 = (undefined2)in_XMM5_Db;
    auVar92._12_4_ = auVar93._12_4_;
    auVar92._0_10_ = auVar82._0_10_;
    auVar92._10_2_ = uVar27;
    auVar91._10_6_ = auVar92._10_6_;
    auVar91._0_8_ = auVar82._0_8_;
    auVar91._8_2_ = auVar83._4_2_;
    uVar24 = (undefined2)((uint)in_XMM5_Da >> 0x10);
    auVar12._4_8_ = auVar91._8_8_;
    auVar12._2_2_ = uVar24;
    auVar12._0_2_ = auVar10._0_2_;
    uVar21 = (undefined2)in_XMM5_Da;
    uVar79 = param_1[2];
    param_1 = param_1 + 3;
    auVar47._0_15_ = ZEXT415(uVar78);
    auVar47[0xf] = uVar31;
    auVar46._14_2_ = auVar47._14_2_;
    auVar46._0_13_ = ZEXT413(uVar78);
    auVar46[0xd] = uVar29;
    auVar45._13_3_ = auVar46._13_3_;
    auVar45._0_13_ = ZEXT413(uVar78);
    auVar44._12_4_ = auVar45._12_4_;
    auVar44._4_7_ = 0;
    auVar44._0_4_ = uVar78;
    auVar44[0xb] = uVar28;
    auVar43._11_5_ = auVar44._11_5_;
    auVar43._4_7_ = 0;
    auVar43._0_4_ = uVar78;
    auVar42._10_6_ = auVar43._10_6_;
    auVar42._4_5_ = 0;
    auVar42._0_4_ = uVar78;
    auVar42[9] = uVar26;
    auVar41._9_7_ = auVar42._9_7_;
    auVar41._4_5_ = 0;
    auVar41._0_4_ = uVar78;
    Var11 = CONCAT91(CONCAT81(auVar41._8_8_,uVar25),(char)(uVar78 >> 0x18));
    auVar40._6_10_ = Var11;
    auVar40[5] = uVar23;
    auVar40[4] = (char)(uVar78 >> 0x10);
    auVar40._0_4_ = uVar78;
    auVar13._2_12_ = auVar40._4_12_;
    auVar13[1] = uVar22;
    auVar13[0] = (char)(uVar78 >> 8);
    uVar122 = CONCAT11(uVar20,(char)uVar78);
    auVar39._2_14_ = auVar13;
    auVar50._0_12_ = auVar39._0_12_;
    auVar50._12_2_ = (short)Var11;
    auVar50._14_2_ = uVar30;
    auVar49._12_4_ = auVar50._12_4_;
    auVar49._0_10_ = auVar39._0_10_;
    auVar49._10_2_ = uVar27;
    auVar48._10_6_ = auVar49._10_6_;
    auVar48._0_8_ = auVar39._0_8_;
    auVar48._8_2_ = auVar40._4_2_;
    auVar14._4_8_ = auVar48._8_8_;
    auVar14._2_2_ = uVar24;
    auVar14._0_2_ = auVar13._0_2_;
    auVar71._0_15_ = ZEXT415(uVar79);
    auVar71[0xf] = uVar31;
    auVar70._14_2_ = auVar71._14_2_;
    auVar70._0_13_ = ZEXT413(uVar79);
    auVar70[0xd] = uVar29;
    auVar69._13_3_ = auVar70._13_3_;
    auVar69._0_13_ = ZEXT413(uVar79);
    auVar68._12_4_ = auVar69._12_4_;
    auVar68._4_7_ = 0;
    auVar68._0_4_ = uVar79;
    auVar68[0xb] = uVar28;
    auVar67._11_5_ = auVar68._11_5_;
    auVar67._4_7_ = 0;
    auVar67._0_4_ = uVar79;
    auVar66._10_6_ = auVar67._10_6_;
    auVar66._4_5_ = 0;
    auVar66._0_4_ = uVar79;
    auVar66[9] = uVar26;
    auVar65._9_7_ = auVar66._9_7_;
    auVar65._4_5_ = 0;
    auVar65._0_4_ = uVar79;
    Var11 = CONCAT91(CONCAT81(auVar65._8_8_,uVar25),(char)(uVar79 >> 0x18));
    auVar64._6_10_ = Var11;
    auVar64[5] = uVar23;
    auVar64[4] = (char)(uVar79 >> 0x10);
    auVar64._0_4_ = uVar79;
    auVar15._2_12_ = auVar64._4_12_;
    auVar15[1] = uVar22;
    auVar15[0] = (char)(uVar79 >> 8);
    uVar123 = CONCAT11(uVar20,(char)uVar79);
    auVar63._2_14_ = auVar15;
    auVar74._0_12_ = auVar63._0_12_;
    auVar74._12_2_ = (short)Var11;
    auVar74._14_2_ = uVar30;
    auVar73._12_4_ = auVar74._12_4_;
    auVar73._0_10_ = auVar63._0_10_;
    auVar73._10_2_ = uVar27;
    auVar72._10_6_ = auVar73._10_6_;
    auVar72._0_8_ = auVar63._0_8_;
    auVar72._8_2_ = auVar64._4_2_;
    auVar16._4_8_ = auVar72._8_8_;
    auVar16._2_2_ = uVar24;
    auVar16._0_2_ = auVar15._0_2_;
    auVar19._12_4_ = auVar73._12_4_;
    auVar19._8_4_ = CONCAT22(uVar21,uVar123);
    auVar19._4_4_ = auVar14._0_4_;
    auVar19._0_4_ = auVar91._8_4_;
    fVar118 = (float)auVar12._0_4_;
    fVar119 = (float)CONCAT22(uVar21,uVar122);
    fVar120 = (float)auVar49._12_4_;
    fVar121 = (float)auVar72._8_4_;
    fVar94 = (float)CONCAT22(uVar21,uVar124);
    fVar99 = (float)auVar92._12_4_;
    fVar102 = (float)auVar48._8_4_;
    fVar105 = (float)auVar16._0_4_;
    auVar109._8_4_ = fVar102;
    auVar109._0_8_ = CONCAT44(fVar99,fVar94);
    auVar109._12_4_ = fVar105;
    auVar116._0_4_ = (float)auVar91._8_4_;
    auVar116._4_4_ = (float)auVar14._0_4_;
    auVar116._8_4_ = (float)CONCAT22(uVar21,uVar123);
    auVar116._12_4_ = (float)auVar73._12_4_;
    auVar110._4_4_ = fVar119;
    auVar110._0_4_ = fVar118;
    auVar110._8_4_ = fVar120;
    auVar110._12_4_ = fVar121;
    auVar110 = maxps(auVar109,auVar110);
    auVar33._8_4_ = fVar102;
    auVar33._0_8_ = CONCAT44(fVar99,fVar94);
    auVar33._12_4_ = fVar105;
    auVar35._4_4_ = fVar119;
    auVar35._0_4_ = fVar118;
    auVar35._8_4_ = fVar120;
    auVar35._12_4_ = fVar121;
    auVar34 = minps(auVar33,auVar35);
    auVar110 = maxps(auVar110,auVar116);
    auVar35 = minps(auVar34,auVar116);
    fVar108 = auVar110._0_4_;
    fVar113 = auVar110._4_4_;
    fVar114 = auVar110._8_4_;
    fVar115 = auVar110._12_4_;
    fVar53 = fVar108 - auVar35._0_4_;
    fVar57 = fVar113 - auVar35._4_4_;
    fVar59 = fVar114 - auVar35._8_4_;
    fVar61 = fVar115 - auVar35._12_4_;
    uVar78 = -(uint)(fVar17 == fVar108 || fVar17 == fVar53);
    uVar79 = -(uint)(fVar18 == fVar113 || fVar18 == fVar57);
    uVar80 = -(uint)(in_XMM2_Dc == fVar114 || in_XMM2_Dc == fVar59);
    uVar81 = -(uint)(in_XMM2_Dd == fVar115 || in_XMM2_Dd == fVar61);
    auVar111._0_4_ = fVar108 + (float)((uint)in_XMM4_Da & uVar78);
    auVar111._4_4_ = fVar113 + (float)((uint)in_XMM4_Db & uVar79);
    auVar111._8_4_ = fVar114 + (float)((uint)in_XMM4_Dc & uVar80);
    auVar111._12_4_ = fVar115 + (float)((uint)in_XMM4_Dd & uVar81);
    fVar53 = (float)((uint)in_XMM4_Da & uVar78) + fVar53;
    fVar57 = (float)((uint)in_XMM4_Db & uVar79) + fVar57;
    fVar59 = (float)((uint)in_XMM4_Dc & uVar80) + fVar59;
    fVar61 = (float)((uint)in_XMM4_Dd & uVar81) + fVar61;
    auVar110 = rcpps(auVar19,auVar111);
    auVar34._4_4_ = fVar57;
    auVar34._0_4_ = fVar53;
    auVar34._8_4_ = fVar59;
    auVar34._12_4_ = fVar61;
    auVar34 = rcpps(auVar35,auVar34);
    fVar32 = auVar34._0_4_;
    fVar54 = (auVar111._0_4_ - fVar118) * fVar32;
    fVar36 = auVar34._4_4_;
    fVar58 = (auVar111._4_4_ - fVar119) * fVar36;
    fVar37 = auVar34._8_4_;
    fVar60 = (auVar111._8_4_ - fVar120) * fVar37;
    fVar38 = auVar34._12_4_;
    fVar62 = (auVar111._12_4_ - fVar121) * fVar38;
    auVar75._0_4_ = (int)(float)(~uVar78 & (uint)(auVar110._0_4_ * fVar53 * in_XMM4_Da));
    auVar75._4_4_ = (int)(float)(~uVar79 & (uint)(auVar110._4_4_ * fVar57 * in_XMM4_Db));
    fVar53 = (auVar111._0_4_ - fVar94) * fVar32;
    fVar57 = (auVar111._4_4_ - fVar99) * fVar36;
    fVar51 = (auVar111._8_4_ - fVar102) * fVar37;
    fVar52 = (auVar111._12_4_ - fVar105) * fVar38;
    fVar32 = fVar32 * (auVar111._0_4_ - auVar116._0_4_);
    fVar36 = fVar36 * (auVar111._4_4_ - auVar116._4_4_);
    fVar37 = fVar37 * (auVar111._8_4_ - auVar116._8_4_);
    fVar38 = fVar38 * (auVar111._12_4_ - auVar116._12_4_);
    uVar95 = ~-(uint)(fVar94 == auVar111._0_4_) & -(uint)(fVar118 == auVar111._0_4_);
    uVar100 = ~-(uint)(fVar99 == auVar111._4_4_) & -(uint)(fVar119 == auVar111._4_4_);
    uVar103 = ~-(uint)(fVar102 == auVar111._8_4_) & -(uint)(fVar120 == auVar111._8_4_);
    uVar106 = ~-(uint)(fVar105 == auVar111._12_4_) & -(uint)(fVar121 == auVar111._12_4_);
    uVar96 = ~uVar95 & -(uint)(auVar116._0_4_ == auVar111._0_4_);
    uVar101 = ~uVar100 & -(uint)(auVar116._4_4_ == auVar111._4_4_);
    uVar104 = ~uVar103 & -(uint)(auVar116._8_4_ == auVar111._8_4_);
    uVar107 = ~uVar106 & -(uint)(auVar116._12_4_ == auVar111._12_4_);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = CONCAT44((int)fVar113,(int)fVar108) << 0x20;
    fVar53 = ((float)(~uVar96 &
                     ~uVar95 & (uint)(fVar32 - fVar54) & -(uint)(fVar94 == auVar111._0_4_)) +
             (float)((uint)((fVar54 - fVar53) + _DAT_143086640) & uVar96) +
             (float)(~uVar96 & (uint)((fVar53 - fVar32) + (float)param_2) & uVar95)) *
             _DAT_143086620;
    fVar57 = ((float)(~uVar101 &
                     ~uVar100 & (uint)(fVar36 - fVar58) & -(uint)(fVar99 == auVar111._4_4_)) +
             (float)((uint)((fVar58 - fVar57) + _UNK_143086644) & uVar101) +
             (float)(~uVar101 &
                    (uint)((fVar57 - fVar36) + (float)((ulonglong)param_2 >> 0x20)) & uVar100)) *
             _UNK_143086624;
    fVar32 = ((float)(~uVar104 &
                     ~uVar103 & (uint)(fVar37 - fVar60) & -(uint)(fVar102 == auVar111._8_4_)) +
             (float)((uint)((fVar60 - fVar51) + _UNK_143086648) & uVar104) +
             (float)(~uVar104 & (uint)((fVar51 - fVar37) + in_XMM1_Dc) & uVar103)) * _UNK_143086628;
    fVar36 = ((float)(~uVar107 &
                     ~uVar106 & (uint)(fVar38 - fVar62) & -(uint)(fVar105 == auVar111._12_4_)) +
             (float)((uint)((fVar62 - fVar52) + _UNK_14308664c) & uVar107) +
             (float)(~uVar107 & (uint)((fVar52 - fVar38) + in_XMM1_Dd) & uVar106)) * _UNK_14308662c;
    auVar55._0_4_ =
         (int)(float)(~uVar78 &
                     (uint)((float)(~-(uint)(fVar53 < fVar17) & (uint)fVar53) +
                           (float)(-(uint)(fVar53 < fVar17) & (uint)(in_XMM4_Da + fVar53))));
    auVar56._4_4_ =
         (int)(float)(~uVar79 &
                     (uint)((float)(~-(uint)(fVar57 < fVar18) & (uint)fVar57) +
                           (float)(-(uint)(fVar57 < fVar18) & (uint)(in_XMM4_Db + fVar57))));
    auVar56._0_4_ = auVar55._0_4_;
    auVar56._8_4_ = auVar56._4_4_;
    auVar56._12_4_ = auVar75._4_4_;
    auVar55._8_8_ = auVar56._8_8_;
    auVar55._4_4_ = auVar75._0_4_;
    auVar76._12_4_ = (int)(float)(~uVar80 & (uint)(auVar110._8_4_ * fVar59 * in_XMM4_Dc));
    auVar76._8_4_ =
         (int)(float)(~uVar80 &
                     (uint)((float)(~-(uint)(fVar32 < in_XMM2_Dc) & (uint)fVar32) +
                           (float)(-(uint)(fVar32 < in_XMM2_Dc) & (uint)(in_XMM4_Dc + fVar32))));
    auVar75._8_4_ = auVar75._4_4_;
    auVar75._12_4_ = (int)fVar113;
    auVar34 = auVar55 & _DAT_143086650 | auVar9 << 0x40;
    auVar98._0_8_ = auVar34._0_8_;
    auVar98._8_4_ = auVar34._12_4_;
    auVar98._12_4_ = auVar34._8_4_;
    auVar76._0_8_ = auVar75._8_8_;
    auVar35 = packssdw(auVar98,auVar76);
    auVar77._4_4_ =
         (int)(float)(~uVar81 &
                     (uint)((float)(~-(uint)(fVar36 < in_XMM2_Dd) & (uint)fVar36) +
                           (float)(-(uint)(fVar36 < in_XMM2_Dd) & (uint)(in_XMM4_Dd + fVar36))));
    auVar77._0_4_ = (int)fVar114;
    auVar77._8_4_ = (int)(float)(~uVar81 & (uint)(auVar110._12_4_ * fVar61 * in_XMM4_Dd));
    auVar77._12_4_ = (int)fVar115;
    sVar1 = auVar35._0_2_;
    sVar2 = auVar35._2_2_;
    sVar3 = auVar35._4_2_;
    sVar4 = auVar35._6_2_;
    uVar97 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar35[6] - (0xff < sVar4),
                      CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar35[4] - (0xff < sVar3),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar35[2] - (0xff < sVar2),
                                        (0 < sVar1) * (sVar1 < 0x100) * auVar35[0] - (0xff < sVar1))
                              ));
    sVar5 = auVar35._8_2_;
    sVar6 = auVar35._10_2_;
    sVar7 = auVar35._12_2_;
    sVar8 = auVar35._14_2_;
    auVar34 = packssdw(auVar77,auVar77);
    *in_RDX = uVar97;
    sVar1 = auVar34._0_2_;
    sVar2 = auVar34._2_2_;
    sVar3 = auVar34._4_2_;
    sVar4 = auVar34._6_2_;
    in_RDX[1] = (int)(CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar35[0xe] - (0xff < sVar8),
                               CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar35[0xc] -
                                        (0xff < sVar7),
                                        CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar35[10] -
                                                 (0xff < sVar6),
                                                 CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar35[8]
                                                          - (0xff < sVar5),uVar97)))) >> 0x20);
    in_RDX[2] = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar34[6] - (0xff < sVar4),
                         CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar34[4] - (0xff < sVar3),
                                  CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar34[2] -
                                           (0xff < sVar2),
                                           (0 < sVar1) * (sVar1 < 0x100) * auVar34[0] -
                                           (0xff < sVar1))));
    fVar57 = _DAT_143086640;
    fVar53 = _DAT_143086620;
    in_RDX = in_RDX + 3;
  } while (param_4 < in_R10D);
  for (; param_4 < param_3; param_4 = param_4 + 1) {
    fVar32 = (float)(byte)*param_1;
    auVar112._4_4_ = fVar18;
    auVar112._0_4_ = fVar32;
    auVar112._8_4_ = in_XMM2_Dc;
    auVar112._12_4_ = in_XMM2_Dd;
    fVar61 = (float)*(byte *)((longlong)param_1 + 1);
    fVar59 = (float)*(byte *)((longlong)param_1 + 2);
    if (fVar32 <= fVar61) {
      auVar112._0_4_ = fVar61;
    }
    fVar36 = fVar32;
    if (fVar61 <= fVar32) {
      fVar36 = fVar61;
    }
    if (auVar112._0_4_ <= fVar59) {
      auVar112._0_4_ = fVar59;
    }
    if (fVar59 <= fVar36) {
      fVar36 = fVar59;
    }
    fVar37 = auVar112._0_4_;
    *(char *)((longlong)in_RDX + 2) = (char)(int)ROUND(fVar37);
    auVar117._4_12_ = auVar112._4_12_;
    auVar117._0_4_ = fVar37 - fVar36;
    if ((fVar37 == 0.0) || ((auVar117._0_4_ == 0.0 && (!NAN(auVar117._0_4_))))) {
      *(undefined1 *)((longlong)in_RDX + 1) = in_AL;
      *(undefined1 *)in_RDX = in_AL;
    }
    else {
      auVar34 = rcpss(auVar112,auVar112);
      auVar110 = rcpss(auVar117,auVar117);
      fVar38 = auVar110._0_4_;
      fVar51 = (fVar37 - fVar32) * fVar38;
      fVar52 = (fVar37 - fVar59) * fVar38;
      fVar38 = (fVar37 - fVar61) * fVar38;
      *(char *)((longlong)in_RDX + 1) =
           (char)(int)ROUND(auVar34._0_4_ * auVar117._0_4_ * in_XMM4_Da);
      fVar36 = fVar17;
      if ((fVar37 == fVar32) && (!NAN(fVar37) && !NAN(fVar32))) {
        fVar36 = fVar52 - fVar38;
      }
      if ((fVar37 == fVar61) && (!NAN(fVar37) && !NAN(fVar61))) {
        fVar36 = (fVar51 - fVar52) + (float)param_2;
      }
      if ((fVar37 == fVar59) && (!NAN(fVar37) && !NAN(fVar59))) {
        fVar36 = (fVar38 - fVar51) + fVar57;
      }
      fVar36 = fVar36 * fVar53;
      if (fVar36 < 0.0) {
        fVar36 = fVar36 + in_XMM4_Da;
      }
      *(char *)in_RDX = (char)(int)ROUND(fVar36);
    }
    param_1 = (uint *)((longlong)param_1 + 3);
    in_RDX = (undefined4 *)((longlong)in_RDX + 3);
  }
  return;
}

