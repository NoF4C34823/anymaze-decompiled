
/* WARNING: Removing unreachable block (ram,0x00014001185f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140011646(uint *param_1,undefined4 *param_2,int param_3,undefined8 param_4)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [14];
  unkbyte10 Var12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  int in_EAX;
  undefined1 in_R9B;
  int in_R10D;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar21;
  float fVar22;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  undefined1 uVar23;
  undefined1 uVar25;
  undefined2 uVar24;
  undefined1 uVar26;
  undefined4 in_XMM5_Da;
  undefined1 uVar28;
  undefined2 uVar27;
  undefined1 uVar29;
  undefined1 uVar31;
  undefined2 uVar30;
  undefined1 uVar32;
  undefined4 in_XMM5_Db;
  undefined1 uVar34;
  undefined2 uVar33;
  undefined2 uVar128;
  float fVar35;
  float fVar36;
  float fVar49;
  float fVar50;
  undefined1 auVar46 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  uint uVar60;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined2 uVar129;
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined2 uVar130;
  undefined4 uVar82;
  undefined1 auVar92 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  uint uVar105;
  float fVar106;
  uint uVar107;
  float fVar108;
  uint uVar109;
  float fVar110;
  uint uVar111;
  float fVar112;
  uint uVar113;
  float fVar114;
  uint uVar115;
  float fVar116;
  uint uVar117;
  float fVar118;
  uint uVar119;
  float fVar120;
  float fVar125;
  float fVar126;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar127;
  undefined1 auVar124 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar37 [16];
  undefined1 auVar62 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar67 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar83 [16];
  
  fVar22 = (float)((ulonglong)param_4 >> 0x20);
  fVar21 = (float)param_4;
  fVar36 = (float)((ulonglong)in_XMM2_Qa >> 0x20);
  fVar20 = (float)in_XMM2_Qa;
  do {
    uVar60 = *param_1;
    in_R10D = in_R10D + 4;
    uVar34 = (undefined1)((uint)in_XMM5_Db >> 0x18);
    auVar75._0_15_ = ZEXT415(uVar60);
    auVar75[0xf] = uVar34;
    uVar32 = (undefined1)((uint)in_XMM5_Db >> 0x10);
    auVar74._14_2_ = auVar75._14_2_;
    auVar74._0_13_ = ZEXT413(uVar60);
    auVar74[0xd] = uVar32;
    auVar73._13_3_ = auVar74._13_3_;
    auVar73._0_13_ = ZEXT413(uVar60);
    uVar31 = (undefined1)((uint)in_XMM5_Db >> 8);
    auVar72._12_4_ = auVar73._12_4_;
    auVar72._4_7_ = 0;
    auVar72._0_4_ = uVar60;
    auVar72[0xb] = uVar31;
    auVar71._11_5_ = auVar72._11_5_;
    auVar71._4_7_ = 0;
    auVar71._0_4_ = uVar60;
    uVar29 = (undefined1)in_XMM5_Db;
    auVar70._10_6_ = auVar71._10_6_;
    auVar70._4_5_ = 0;
    auVar70._0_4_ = uVar60;
    auVar70[9] = uVar29;
    auVar69._9_7_ = auVar70._9_7_;
    auVar69._4_5_ = 0;
    auVar69._0_4_ = uVar60;
    uVar28 = (undefined1)((uint)in_XMM5_Da >> 0x18);
    Var12 = CONCAT91(CONCAT81(auVar69._8_8_,uVar28),(char)(uVar60 >> 0x18));
    uVar26 = (undefined1)((uint)in_XMM5_Da >> 0x10);
    auVar68._6_10_ = Var12;
    auVar68[5] = uVar26;
    auVar68[4] = (char)(uVar60 >> 0x10);
    auVar68._0_4_ = uVar60;
    uVar25 = (undefined1)((uint)in_XMM5_Da >> 8);
    auVar11._2_12_ = auVar68._4_12_;
    auVar11[1] = uVar25;
    auVar11[0] = (char)(uVar60 >> 8);
    uVar23 = (undefined1)in_XMM5_Da;
    uVar129 = CONCAT11(uVar23,(char)uVar60);
    auVar67._2_14_ = auVar11;
    uVar60 = param_1[1];
    uVar33 = (undefined2)((uint)in_XMM5_Db >> 0x10);
    auVar78._0_12_ = auVar67._0_12_;
    auVar78._12_2_ = (short)Var12;
    auVar78._14_2_ = uVar33;
    uVar30 = (undefined2)in_XMM5_Db;
    auVar77._12_4_ = auVar78._12_4_;
    auVar77._0_10_ = auVar67._0_10_;
    auVar77._10_2_ = uVar30;
    auVar76._10_6_ = auVar77._10_6_;
    auVar76._0_8_ = auVar67._0_8_;
    auVar76._8_2_ = auVar68._4_2_;
    uVar27 = (undefined2)((uint)in_XMM5_Da >> 0x10);
    auVar13._4_8_ = auVar76._8_8_;
    auVar13._2_2_ = uVar27;
    auVar13._0_2_ = auVar11._0_2_;
    uVar24 = (undefined2)in_XMM5_Da;
    uVar64 = param_1[2];
    param_1 = param_1 + 3;
    auVar18._4_4_ = auVar76._8_4_;
    auVar18._0_4_ = auVar13._0_4_;
    auVar18._8_4_ = CONCAT22(uVar24,uVar129);
    auVar18._12_4_ = auVar77._12_4_;
    auVar45._0_15_ = ZEXT415(uVar60);
    auVar45[0xf] = uVar34;
    auVar44._14_2_ = auVar45._14_2_;
    auVar44._0_13_ = ZEXT413(uVar60);
    auVar44[0xd] = uVar32;
    auVar43._13_3_ = auVar44._13_3_;
    auVar43._0_13_ = ZEXT413(uVar60);
    auVar42._12_4_ = auVar43._12_4_;
    auVar42._4_7_ = 0;
    auVar42._0_4_ = uVar60;
    auVar42[0xb] = uVar31;
    auVar41._11_5_ = auVar42._11_5_;
    auVar41._4_7_ = 0;
    auVar41._0_4_ = uVar60;
    auVar40._10_6_ = auVar41._10_6_;
    auVar40._4_5_ = 0;
    auVar40._0_4_ = uVar60;
    auVar40[9] = uVar29;
    auVar39._9_7_ = auVar40._9_7_;
    auVar39._4_5_ = 0;
    auVar39._0_4_ = uVar60;
    Var12 = CONCAT91(CONCAT81(auVar39._8_8_,uVar28),(char)(uVar60 >> 0x18));
    auVar38._6_10_ = Var12;
    auVar38[5] = uVar26;
    auVar38[4] = (char)(uVar60 >> 0x10);
    auVar38._0_4_ = uVar60;
    auVar14._2_12_ = auVar38._4_12_;
    auVar14[1] = uVar25;
    auVar14[0] = (char)(uVar60 >> 8);
    uVar128 = CONCAT11(uVar23,(char)uVar60);
    auVar37._2_14_ = auVar14;
    auVar48._0_12_ = auVar37._0_12_;
    auVar48._12_2_ = (short)Var12;
    auVar48._14_2_ = uVar33;
    auVar47._12_4_ = auVar48._12_4_;
    auVar47._0_10_ = auVar37._0_10_;
    auVar47._10_2_ = uVar30;
    auVar46._10_6_ = auVar47._10_6_;
    auVar46._0_8_ = auVar37._0_8_;
    auVar46._8_2_ = auVar38._4_2_;
    auVar15._4_8_ = auVar46._8_8_;
    auVar15._2_2_ = uVar27;
    auVar15._0_2_ = auVar14._0_2_;
    auVar91._0_15_ = ZEXT415(uVar64);
    auVar91[0xf] = uVar34;
    auVar90._14_2_ = auVar91._14_2_;
    auVar90._0_13_ = ZEXT413(uVar64);
    auVar90[0xd] = uVar32;
    auVar89._13_3_ = auVar90._13_3_;
    auVar89._0_13_ = ZEXT413(uVar64);
    auVar88._12_4_ = auVar89._12_4_;
    auVar88._4_7_ = 0;
    auVar88._0_4_ = uVar64;
    auVar88[0xb] = uVar31;
    auVar87._11_5_ = auVar88._11_5_;
    auVar87._4_7_ = 0;
    auVar87._0_4_ = uVar64;
    auVar86._10_6_ = auVar87._10_6_;
    auVar86._4_5_ = 0;
    auVar86._0_4_ = uVar64;
    auVar86[9] = uVar29;
    auVar85._9_7_ = auVar86._9_7_;
    auVar85._4_5_ = 0;
    auVar85._0_4_ = uVar64;
    Var12 = CONCAT91(CONCAT81(auVar85._8_8_,uVar28),(char)(uVar64 >> 0x18));
    auVar84._6_10_ = Var12;
    auVar84[5] = uVar26;
    auVar84[4] = (char)(uVar64 >> 0x10);
    auVar84._0_4_ = uVar64;
    auVar16._2_12_ = auVar84._4_12_;
    auVar16[1] = uVar25;
    auVar16[0] = (char)(uVar64 >> 8);
    uVar130 = CONCAT11(uVar23,(char)uVar64);
    auVar83._2_14_ = auVar16;
    auVar94._0_12_ = auVar83._0_12_;
    auVar94._12_2_ = (short)Var12;
    auVar94._14_2_ = uVar33;
    auVar93._12_4_ = auVar94._12_4_;
    auVar93._0_10_ = auVar83._0_10_;
    auVar93._10_2_ = uVar30;
    auVar92._10_6_ = auVar93._10_6_;
    auVar92._0_8_ = auVar83._0_8_;
    auVar92._8_2_ = auVar84._4_2_;
    auVar17._4_8_ = auVar92._8_8_;
    auVar17._2_2_ = uVar27;
    auVar17._0_2_ = auVar16._0_2_;
    fVar52 = (float)auVar76._8_4_;
    fVar53 = (float)auVar15._0_4_;
    fVar54 = (float)CONCAT22(uVar24,uVar130);
    fVar55 = (float)auVar93._12_4_;
    fVar100 = (float)CONCAT22(uVar24,uVar129);
    fVar101 = (float)auVar77._12_4_;
    fVar102 = (float)auVar46._8_4_;
    fVar103 = (float)auVar17._0_4_;
    fVar112 = (float)auVar13._0_4_;
    fVar114 = (float)CONCAT22(uVar24,uVar128);
    fVar116 = (float)auVar47._12_4_;
    fVar118 = (float)auVar92._8_4_;
    auVar121._8_4_ = fVar102;
    auVar121._0_8_ = CONCAT44(fVar101,fVar100);
    auVar121._12_4_ = fVar103;
    auVar95._8_4_ = fVar102;
    auVar95._0_8_ = CONCAT44(fVar101,fVar100);
    auVar95._12_4_ = fVar103;
    auVar123._4_4_ = fVar114;
    auVar123._0_4_ = fVar112;
    auVar123._8_4_ = fVar116;
    auVar123._12_4_ = fVar118;
    auVar122 = maxps(auVar121,auVar123);
    auVar9._4_4_ = fVar114;
    auVar9._0_4_ = fVar112;
    auVar9._8_4_ = fVar116;
    auVar9._12_4_ = fVar118;
    auVar96 = minps(auVar95,auVar9);
    auVar97._4_4_ = fVar53;
    auVar97._0_4_ = fVar52;
    auVar97._8_4_ = fVar54;
    auVar97._12_4_ = fVar55;
    auVar123 = maxps(auVar122,auVar97);
    auVar122._4_4_ = fVar53;
    auVar122._0_4_ = fVar52;
    auVar122._8_4_ = fVar54;
    auVar122._12_4_ = fVar55;
    auVar97 = minps(auVar96,auVar122);
    fVar120 = auVar123._0_4_;
    fVar125 = auVar123._4_4_;
    fVar126 = auVar123._8_4_;
    fVar127 = auVar123._12_4_;
    fVar104 = fVar120 - auVar97._0_4_;
    fVar106 = fVar125 - auVar97._4_4_;
    fVar108 = fVar126 - auVar97._8_4_;
    fVar110 = fVar127 - auVar97._12_4_;
    uVar60 = -(uint)(fVar21 == fVar120 || fVar21 == fVar104);
    uVar64 = -(uint)(fVar22 == fVar125 || fVar22 == fVar106);
    uVar65 = -(uint)(in_XMM3_Dc == fVar126 || in_XMM3_Dc == fVar108);
    uVar66 = -(uint)(in_XMM3_Dd == fVar127 || in_XMM3_Dd == fVar110);
    auVar124._0_4_ = fVar120 + (float)((uint)fVar20 & uVar60);
    auVar124._4_4_ = fVar125 + (float)((uint)fVar36 & uVar64);
    auVar124._8_4_ = fVar126 + (float)((uint)in_XMM2_Dc & uVar65);
    auVar124._12_4_ = fVar127 + (float)((uint)in_XMM2_Dd & uVar66);
    fVar104 = (float)((uint)fVar20 & uVar60) + fVar104;
    fVar106 = (float)((uint)fVar36 & uVar64) + fVar106;
    fVar108 = (float)((uint)in_XMM2_Dc & uVar65) + fVar108;
    fVar110 = (float)((uint)in_XMM2_Dd & uVar66) + fVar110;
    auVar97 = rcpps(auVar18,auVar124);
    auVar19._0_4_ = auVar97._0_4_ * fVar104 * fVar20;
    auVar19._4_4_ = auVar97._4_4_ * fVar106 * fVar36;
    auVar19._8_4_ = auVar97._8_4_ * fVar108 * in_XMM2_Dc;
    auVar19._12_4_ = auVar97._12_4_ * fVar110 * in_XMM2_Dd;
    auVar96._4_4_ = fVar106;
    auVar96._0_4_ = fVar104;
    auVar96._8_4_ = fVar108;
    auVar96._12_4_ = fVar110;
    auVar97 = rcpps(auVar19,auVar96);
    auVar79._0_4_ = (int)(float)(~uVar60 & (uint)auVar19._0_4_);
    auVar79._4_4_ = (int)(float)(~uVar64 & (uint)auVar19._4_4_);
    fVar104 = auVar97._0_4_;
    fVar35 = (auVar124._0_4_ - fVar100) * fVar104;
    fVar106 = auVar97._4_4_;
    fVar49 = (auVar124._4_4_ - fVar101) * fVar106;
    fVar108 = auVar97._8_4_;
    fVar50 = (auVar124._8_4_ - fVar102) * fVar108;
    fVar110 = auVar97._12_4_;
    fVar51 = (auVar124._12_4_ - fVar103) * fVar110;
    fVar56 = (auVar124._0_4_ - fVar112) * fVar104;
    fVar57 = (auVar124._4_4_ - fVar114) * fVar106;
    fVar58 = (auVar124._8_4_ - fVar116) * fVar108;
    fVar59 = (auVar124._12_4_ - fVar118) * fVar110;
    uVar105 = ~-(uint)(fVar100 == auVar124._0_4_) & -(uint)(fVar112 == auVar124._0_4_);
    uVar107 = ~-(uint)(fVar101 == auVar124._4_4_) & -(uint)(fVar114 == auVar124._4_4_);
    uVar109 = ~-(uint)(fVar102 == auVar124._8_4_) & -(uint)(fVar116 == auVar124._8_4_);
    uVar111 = ~-(uint)(fVar103 == auVar124._12_4_) & -(uint)(fVar118 == auVar124._12_4_);
    fVar104 = fVar104 * (auVar124._0_4_ - fVar52);
    fVar106 = fVar106 * (auVar124._4_4_ - fVar53);
    fVar108 = fVar108 * (auVar124._8_4_ - fVar54);
    fVar110 = fVar110 * (auVar124._12_4_ - fVar55);
    uVar113 = ~uVar105 & -(uint)(fVar52 == auVar124._0_4_);
    uVar115 = ~uVar107 & -(uint)(fVar53 == auVar124._4_4_);
    uVar117 = ~uVar109 & -(uint)(fVar54 == auVar124._8_4_);
    uVar119 = ~uVar111 & -(uint)(fVar55 == auVar124._12_4_);
    fVar104 = ((float)(~uVar113 &
                      ~uVar105 & -(uint)(fVar100 == auVar124._0_4_) & (uint)(fVar104 - fVar56)) +
              (float)((uint)((fVar56 - fVar35) + in_XMM4_Da) & uVar113) +
              (float)(~uVar113 & (uint)((fVar35 - fVar104) + _DAT_1430865e0) & uVar105)) *
              (float)in_XMM0_Qa;
    fVar106 = ((float)(~uVar115 &
                      ~uVar107 & -(uint)(fVar101 == auVar124._4_4_) & (uint)(fVar106 - fVar57)) +
              (float)((uint)((fVar57 - fVar49) + in_XMM4_Db) & uVar115) +
              (float)(~uVar115 & (uint)((fVar49 - fVar106) + _UNK_1430865e4) & uVar107)) *
              (float)((ulonglong)in_XMM0_Qa >> 0x20);
    fVar108 = ((float)(~uVar117 &
                      ~uVar109 & -(uint)(fVar102 == auVar124._8_4_) & (uint)(fVar108 - fVar58)) +
              (float)((uint)((fVar58 - fVar50) + in_XMM4_Dc) & uVar117) +
              (float)(~uVar117 & (uint)((fVar50 - fVar108) + _UNK_1430865e8) & uVar109)) *
              in_XMM0_Dc;
    fVar110 = ((float)(~uVar119 &
                      ~uVar111 & -(uint)(fVar103 == auVar124._12_4_) & (uint)(fVar110 - fVar59)) +
              (float)((uint)((fVar59 - fVar51) + in_XMM4_Dd) & uVar119) +
              (float)(~uVar119 & (uint)((fVar51 - fVar110) + _UNK_1430865ec) & uVar111)) *
              in_XMM0_Dd;
    auVar61._0_4_ =
         (int)(float)(~uVar60 &
                     (uint)((float)(~-(uint)(fVar104 < fVar21) & (uint)fVar104) +
                           (float)(-(uint)(fVar104 < fVar21) & (uint)(fVar20 + fVar104))));
    auVar62._4_4_ =
         (int)(float)(~uVar64 &
                     (uint)((float)(~-(uint)(fVar106 < fVar22) & (uint)fVar106) +
                           (float)(-(uint)(fVar106 < fVar22) & (uint)(fVar36 + fVar106))));
    auVar62._0_4_ = auVar61._0_4_;
    auVar80._12_4_ = (int)(float)(~uVar65 & (uint)auVar19._8_4_);
    auVar80._8_4_ =
         (int)(float)(~uVar65 &
                     (uint)((float)(~-(uint)(fVar108 < in_XMM3_Dc) & (uint)fVar108) +
                           (float)(-(uint)(fVar108 < in_XMM3_Dc) & (uint)(in_XMM2_Dc + fVar108))));
    auVar62._8_4_ = auVar62._4_4_;
    auVar62._12_4_ = auVar79._4_4_;
    auVar61._8_8_ = auVar62._8_8_;
    auVar61._4_4_ = auVar79._0_4_;
    auVar79._8_4_ = auVar79._4_4_;
    auVar79._12_4_ = (int)fVar125;
    auVar80._0_8_ = auVar79._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = CONCAT44((int)fVar125,(int)fVar120) << 0x20;
    auVar97 = auVar61 & _DAT_143086600 | auVar10 << 0x40;
    auVar98._0_8_ = auVar97._0_8_;
    auVar98._8_4_ = auVar97._12_4_;
    auVar98._12_4_ = auVar97._8_4_;
    auVar122 = packssdw(auVar98,auVar80);
    auVar81._4_4_ =
         (int)(float)(~uVar66 &
                     (uint)((float)(~-(uint)(fVar110 < in_XMM3_Dd) & (uint)fVar110) +
                           (float)(-(uint)(fVar110 < in_XMM3_Dd) & (uint)(in_XMM2_Dd + fVar110))));
    auVar81._0_4_ = (int)fVar126;
    auVar81._8_4_ = (int)(float)(~uVar66 & (uint)auVar19._12_4_);
    auVar81._12_4_ = (int)fVar127;
    sVar1 = auVar122._0_2_;
    sVar2 = auVar122._2_2_;
    sVar3 = auVar122._4_2_;
    sVar4 = auVar122._6_2_;
    uVar82 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar122[6] - (0xff < sVar4),
                      CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar122[4] - (0xff < sVar3),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar122[2] - (0xff < sVar2)
                                        ,(0 < sVar1) * (sVar1 < 0x100) * auVar122[0] -
                                         (0xff < sVar1))));
    sVar5 = auVar122._8_2_;
    sVar6 = auVar122._10_2_;
    sVar7 = auVar122._12_2_;
    sVar8 = auVar122._14_2_;
    auVar97 = packssdw(auVar81,auVar81);
    sVar1 = auVar97._0_2_;
    sVar2 = auVar97._2_2_;
    sVar3 = auVar97._4_2_;
    sVar4 = auVar97._6_2_;
    *param_2 = uVar82;
    param_2[2] = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar97[6] - (0xff < sVar4),
                          CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar97[4] - (0xff < sVar3),
                                   CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar97[2] -
                                            (0xff < sVar2),
                                            (0 < sVar1) * (sVar1 < 0x100) * auVar97[0] -
                                            (0xff < sVar1))));
    param_2[1] = (int)(CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar122[0xe] - (0xff < sVar8),
                                CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar122[0xc] -
                                         (0xff < sVar7),
                                         CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar122[10] -
                                                  (0xff < sVar6),
                                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                                           auVar122[8] - (0xff < sVar5),uVar82))))
                      >> 0x20);
    fVar104 = _DAT_1430865e0;
    param_2 = param_2 + 3;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    fVar108 = (float)(byte)*param_1;
    auVar63._4_4_ = fVar22;
    auVar63._0_4_ = fVar108;
    auVar63._8_4_ = in_XMM3_Dc;
    auVar63._12_4_ = in_XMM3_Dd;
    fVar36 = (float)*(byte *)((longlong)param_1 + 1);
    fVar106 = (float)*(byte *)((longlong)param_1 + 2);
    if (fVar108 <= fVar36) {
      auVar63._0_4_ = fVar36;
    }
    fVar110 = fVar108;
    if (fVar36 <= fVar108) {
      fVar110 = fVar36;
    }
    if (auVar63._0_4_ <= fVar106) {
      auVar63._0_4_ = fVar106;
    }
    if (fVar106 <= fVar110) {
      fVar110 = fVar106;
    }
    fVar35 = auVar63._0_4_;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar35);
    auVar99._4_12_ = auVar63._4_12_;
    auVar99._0_4_ = fVar35 - fVar110;
    if ((fVar35 == 0.0) || ((auVar99._0_4_ == 0.0 && (!NAN(auVar99._0_4_))))) {
      *(undefined1 *)((longlong)param_2 + 1) = in_R9B;
      *(undefined1 *)param_2 = in_R9B;
    }
    else {
      auVar122 = rcpss(auVar63,auVar63);
      auVar97 = rcpss(auVar99,auVar99);
      *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar122._0_4_ * auVar99._0_4_ * fVar20);
      fVar50 = auVar97._0_4_;
      fVar51 = (fVar35 - fVar108) * fVar50;
      fVar49 = (fVar35 - fVar106) * fVar50;
      fVar50 = (fVar35 - fVar36) * fVar50;
      fVar110 = fVar21;
      if ((fVar35 == fVar108) && (!NAN(fVar35) && !NAN(fVar108))) {
        fVar110 = fVar49 - fVar50;
      }
      if ((fVar35 == fVar36) && (!NAN(fVar35) && !NAN(fVar36))) {
        fVar110 = (fVar51 - fVar49) + fVar104;
      }
      if ((fVar35 == fVar106) && (!NAN(fVar35) && !NAN(fVar106))) {
        fVar110 = (fVar50 - fVar51) + in_XMM4_Da;
      }
      fVar110 = fVar110 * (float)in_XMM0_Qa;
      if (fVar110 < 0.0) {
        fVar110 = fVar110 + fVar20;
      }
      *(char *)param_2 = (char)(int)ROUND(fVar110);
    }
    param_1 = (uint *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
  }
  return;
}

