
/* WARNING: Removing unreachable block (ram,0x000140012b9f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140012986(uint *param_1,undefined4 *param_2,int param_3,undefined8 param_4)

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
  undefined2 uVar124;
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
  uint uVar56;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined2 uVar125;
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined2 uVar126;
  undefined4 uVar78;
  undefined1 auVar88 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  uint uVar101;
  float fVar102;
  uint uVar103;
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
  float fVar121;
  float fVar122;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar123;
  undefined1 auVar120 [16];
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
  undefined1 auVar58 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar79 [16];
  
  fVar22 = (float)((ulonglong)param_4 >> 0x20);
  fVar21 = (float)param_4;
  fVar36 = (float)((ulonglong)in_XMM2_Qa >> 0x20);
  fVar20 = (float)in_XMM2_Qa;
  do {
    uVar56 = *param_1;
    in_R10D = in_R10D + 4;
    uVar34 = (undefined1)((uint)in_XMM5_Db >> 0x18);
    auVar71._0_15_ = ZEXT415(uVar56);
    auVar71[0xf] = uVar34;
    uVar32 = (undefined1)((uint)in_XMM5_Db >> 0x10);
    auVar70._14_2_ = auVar71._14_2_;
    auVar70._0_13_ = ZEXT413(uVar56);
    auVar70[0xd] = uVar32;
    auVar69._13_3_ = auVar70._13_3_;
    auVar69._0_13_ = ZEXT413(uVar56);
    uVar31 = (undefined1)((uint)in_XMM5_Db >> 8);
    auVar68._12_4_ = auVar69._12_4_;
    auVar68._4_7_ = 0;
    auVar68._0_4_ = uVar56;
    auVar68[0xb] = uVar31;
    auVar67._11_5_ = auVar68._11_5_;
    auVar67._4_7_ = 0;
    auVar67._0_4_ = uVar56;
    uVar29 = (undefined1)in_XMM5_Db;
    auVar66._10_6_ = auVar67._10_6_;
    auVar66._4_5_ = 0;
    auVar66._0_4_ = uVar56;
    auVar66[9] = uVar29;
    auVar65._9_7_ = auVar66._9_7_;
    auVar65._4_5_ = 0;
    auVar65._0_4_ = uVar56;
    uVar28 = (undefined1)((uint)in_XMM5_Da >> 0x18);
    Var12 = CONCAT91(CONCAT81(auVar65._8_8_,uVar28),(char)(uVar56 >> 0x18));
    uVar26 = (undefined1)((uint)in_XMM5_Da >> 0x10);
    auVar64._6_10_ = Var12;
    auVar64[5] = uVar26;
    auVar64[4] = (char)(uVar56 >> 0x10);
    auVar64._0_4_ = uVar56;
    uVar25 = (undefined1)((uint)in_XMM5_Da >> 8);
    auVar11._2_12_ = auVar64._4_12_;
    auVar11[1] = uVar25;
    auVar11[0] = (char)(uVar56 >> 8);
    uVar23 = (undefined1)in_XMM5_Da;
    uVar125 = CONCAT11(uVar23,(char)uVar56);
    auVar63._2_14_ = auVar11;
    uVar56 = param_1[1];
    uVar33 = (undefined2)((uint)in_XMM5_Db >> 0x10);
    auVar74._0_12_ = auVar63._0_12_;
    auVar74._12_2_ = (short)Var12;
    auVar74._14_2_ = uVar33;
    uVar30 = (undefined2)in_XMM5_Db;
    auVar73._12_4_ = auVar74._12_4_;
    auVar73._0_10_ = auVar63._0_10_;
    auVar73._10_2_ = uVar30;
    auVar72._10_6_ = auVar73._10_6_;
    auVar72._0_8_ = auVar63._0_8_;
    auVar72._8_2_ = auVar64._4_2_;
    uVar27 = (undefined2)((uint)in_XMM5_Da >> 0x10);
    auVar13._4_8_ = auVar72._8_8_;
    auVar13._2_2_ = uVar27;
    auVar13._0_2_ = auVar11._0_2_;
    uVar24 = (undefined2)in_XMM5_Da;
    uVar60 = param_1[2];
    auVar45._0_15_ = ZEXT415(uVar56);
    auVar45[0xf] = uVar34;
    auVar44._14_2_ = auVar45._14_2_;
    auVar44._0_13_ = ZEXT413(uVar56);
    auVar44[0xd] = uVar32;
    auVar43._13_3_ = auVar44._13_3_;
    auVar43._0_13_ = ZEXT413(uVar56);
    auVar42._12_4_ = auVar43._12_4_;
    auVar42._4_7_ = 0;
    auVar42._0_4_ = uVar56;
    auVar42[0xb] = uVar31;
    auVar41._11_5_ = auVar42._11_5_;
    auVar41._4_7_ = 0;
    auVar41._0_4_ = uVar56;
    auVar40._10_6_ = auVar41._10_6_;
    auVar40._4_5_ = 0;
    auVar40._0_4_ = uVar56;
    auVar40[9] = uVar29;
    auVar39._9_7_ = auVar40._9_7_;
    auVar39._4_5_ = 0;
    auVar39._0_4_ = uVar56;
    Var12 = CONCAT91(CONCAT81(auVar39._8_8_,uVar28),(char)(uVar56 >> 0x18));
    auVar38._6_10_ = Var12;
    auVar38[5] = uVar26;
    auVar38[4] = (char)(uVar56 >> 0x10);
    auVar38._0_4_ = uVar56;
    auVar14._2_12_ = auVar38._4_12_;
    auVar14[1] = uVar25;
    auVar14[0] = (char)(uVar56 >> 8);
    uVar124 = CONCAT11(uVar23,(char)uVar56);
    auVar37._2_14_ = auVar14;
    auVar18._4_4_ = auVar72._8_4_;
    auVar18._0_4_ = auVar13._0_4_;
    auVar18._8_4_ = CONCAT22(uVar24,uVar125);
    auVar18._12_4_ = auVar73._12_4_;
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
    auVar87._0_15_ = ZEXT415(uVar60);
    auVar87[0xf] = uVar34;
    auVar86._14_2_ = auVar87._14_2_;
    auVar86._0_13_ = ZEXT413(uVar60);
    auVar86[0xd] = uVar32;
    auVar85._13_3_ = auVar86._13_3_;
    auVar85._0_13_ = ZEXT413(uVar60);
    auVar84._12_4_ = auVar85._12_4_;
    auVar84._4_7_ = 0;
    auVar84._0_4_ = uVar60;
    auVar84[0xb] = uVar31;
    auVar83._11_5_ = auVar84._11_5_;
    auVar83._4_7_ = 0;
    auVar83._0_4_ = uVar60;
    auVar82._10_6_ = auVar83._10_6_;
    auVar82._4_5_ = 0;
    auVar82._0_4_ = uVar60;
    auVar82[9] = uVar29;
    auVar81._9_7_ = auVar82._9_7_;
    auVar81._4_5_ = 0;
    auVar81._0_4_ = uVar60;
    Var12 = CONCAT91(CONCAT81(auVar81._8_8_,uVar28),(char)(uVar60 >> 0x18));
    auVar80._6_10_ = Var12;
    auVar80[5] = uVar26;
    auVar80[4] = (char)(uVar60 >> 0x10);
    auVar80._0_4_ = uVar60;
    auVar16._2_12_ = auVar80._4_12_;
    auVar16[1] = uVar25;
    auVar16[0] = (char)(uVar60 >> 8);
    uVar126 = CONCAT11(uVar23,(char)uVar60);
    auVar79._2_14_ = auVar16;
    auVar90._0_12_ = auVar79._0_12_;
    auVar90._12_2_ = (short)Var12;
    auVar90._14_2_ = uVar33;
    auVar89._12_4_ = auVar90._12_4_;
    auVar89._0_10_ = auVar79._0_10_;
    auVar89._10_2_ = uVar30;
    auVar88._10_6_ = auVar89._10_6_;
    auVar88._0_8_ = auVar79._0_8_;
    auVar88._8_2_ = auVar80._4_2_;
    auVar17._4_8_ = auVar88._8_8_;
    auVar17._2_2_ = uVar27;
    auVar17._0_2_ = auVar16._0_2_;
    param_1 = param_1 + 3;
    fVar108 = (float)auVar13._0_4_;
    fVar110 = (float)CONCAT22(uVar24,uVar124);
    fVar112 = (float)auVar47._12_4_;
    fVar114 = (float)auVar88._8_4_;
    fVar52 = (float)auVar72._8_4_;
    fVar53 = (float)auVar15._0_4_;
    fVar54 = (float)CONCAT22(uVar24,uVar126);
    fVar55 = (float)auVar89._12_4_;
    fVar96 = (float)CONCAT22(uVar24,uVar125);
    fVar97 = (float)auVar73._12_4_;
    fVar98 = (float)auVar46._8_4_;
    fVar99 = (float)auVar17._0_4_;
    auVar117._8_4_ = fVar98;
    auVar117._0_8_ = CONCAT44(fVar97,fVar96);
    auVar117._12_4_ = fVar99;
    auVar91._8_4_ = fVar98;
    auVar91._0_8_ = CONCAT44(fVar97,fVar96);
    auVar91._12_4_ = fVar99;
    auVar119._4_4_ = fVar110;
    auVar119._0_4_ = fVar108;
    auVar119._8_4_ = fVar112;
    auVar119._12_4_ = fVar114;
    auVar118 = maxps(auVar117,auVar119);
    auVar9._4_4_ = fVar110;
    auVar9._0_4_ = fVar108;
    auVar9._8_4_ = fVar112;
    auVar9._12_4_ = fVar114;
    auVar92 = minps(auVar91,auVar9);
    auVar93._4_4_ = fVar53;
    auVar93._0_4_ = fVar52;
    auVar93._8_4_ = fVar54;
    auVar93._12_4_ = fVar55;
    auVar119 = maxps(auVar118,auVar93);
    auVar118._4_4_ = fVar53;
    auVar118._0_4_ = fVar52;
    auVar118._8_4_ = fVar54;
    auVar118._12_4_ = fVar55;
    auVar93 = minps(auVar92,auVar118);
    fVar116 = auVar119._0_4_;
    fVar121 = auVar119._4_4_;
    fVar122 = auVar119._8_4_;
    fVar123 = auVar119._12_4_;
    fVar100 = fVar116 - auVar93._0_4_;
    fVar102 = fVar121 - auVar93._4_4_;
    fVar104 = fVar122 - auVar93._8_4_;
    fVar106 = fVar123 - auVar93._12_4_;
    uVar56 = -(uint)(fVar21 == fVar116 || fVar21 == fVar100);
    uVar60 = -(uint)(fVar22 == fVar121 || fVar22 == fVar102);
    uVar61 = -(uint)(in_XMM3_Dc == fVar122 || in_XMM3_Dc == fVar104);
    uVar62 = -(uint)(in_XMM3_Dd == fVar123 || in_XMM3_Dd == fVar106);
    auVar120._0_4_ = fVar116 + (float)((uint)fVar20 & uVar56);
    auVar120._4_4_ = fVar121 + (float)((uint)fVar36 & uVar60);
    auVar120._8_4_ = fVar122 + (float)((uint)in_XMM2_Dc & uVar61);
    auVar120._12_4_ = fVar123 + (float)((uint)in_XMM2_Dd & uVar62);
    fVar100 = (float)((uint)fVar20 & uVar56) + fVar100;
    fVar102 = (float)((uint)fVar36 & uVar60) + fVar102;
    fVar104 = (float)((uint)in_XMM2_Dc & uVar61) + fVar104;
    fVar106 = (float)((uint)in_XMM2_Dd & uVar62) + fVar106;
    auVar93 = rcpps(auVar18,auVar120);
    auVar19._0_4_ = auVar93._0_4_ * fVar100 * fVar20;
    auVar19._4_4_ = auVar93._4_4_ * fVar102 * fVar36;
    auVar19._8_4_ = auVar93._8_4_ * fVar104 * in_XMM2_Dc;
    auVar19._12_4_ = auVar93._12_4_ * fVar106 * in_XMM2_Dd;
    auVar92._4_4_ = fVar102;
    auVar92._0_4_ = fVar100;
    auVar92._8_4_ = fVar104;
    auVar92._12_4_ = fVar106;
    auVar93 = rcpps(auVar19,auVar92);
    uVar101 = ~-(uint)(fVar96 == auVar120._0_4_) & -(uint)(fVar108 == auVar120._0_4_);
    uVar103 = ~-(uint)(fVar97 == auVar120._4_4_) & -(uint)(fVar110 == auVar120._4_4_);
    uVar105 = ~-(uint)(fVar98 == auVar120._8_4_) & -(uint)(fVar112 == auVar120._8_4_);
    uVar107 = ~-(uint)(fVar99 == auVar120._12_4_) & -(uint)(fVar114 == auVar120._12_4_);
    auVar75._0_4_ = (int)(float)(~uVar56 & (uint)auVar19._0_4_);
    auVar75._4_4_ = (int)(float)(~uVar60 & (uint)auVar19._4_4_);
    fVar100 = auVar93._0_4_;
    fVar35 = (auVar120._0_4_ - fVar96) * fVar100;
    fVar102 = auVar93._4_4_;
    fVar49 = (auVar120._4_4_ - fVar97) * fVar102;
    fVar104 = auVar93._8_4_;
    fVar50 = (auVar120._8_4_ - fVar98) * fVar104;
    fVar106 = auVar93._12_4_;
    fVar51 = (auVar120._12_4_ - fVar99) * fVar106;
    fVar108 = (auVar120._0_4_ - fVar108) * fVar100;
    fVar110 = (auVar120._4_4_ - fVar110) * fVar102;
    fVar112 = (auVar120._8_4_ - fVar112) * fVar104;
    fVar114 = (auVar120._12_4_ - fVar114) * fVar106;
    fVar100 = fVar100 * (auVar120._0_4_ - fVar52);
    fVar102 = fVar102 * (auVar120._4_4_ - fVar53);
    fVar104 = fVar104 * (auVar120._8_4_ - fVar54);
    fVar106 = fVar106 * (auVar120._12_4_ - fVar55);
    uVar109 = ~uVar101 & -(uint)(fVar52 == auVar120._0_4_);
    uVar111 = ~uVar103 & -(uint)(fVar53 == auVar120._4_4_);
    uVar113 = ~uVar105 & -(uint)(fVar54 == auVar120._8_4_);
    uVar115 = ~uVar107 & -(uint)(fVar55 == auVar120._12_4_);
    fVar100 = ((float)(~uVar109 &
                      ~uVar101 & -(uint)(fVar96 == auVar120._0_4_) & (uint)(fVar100 - fVar108)) +
              (float)((uint)((fVar108 - fVar35) + in_XMM4_Da) & uVar109) +
              (float)(~uVar109 & (uint)((fVar35 - fVar100) + _DAT_143086680) & uVar101)) *
              (float)in_XMM0_Qa;
    fVar102 = ((float)(~uVar111 &
                      ~uVar103 & -(uint)(fVar97 == auVar120._4_4_) & (uint)(fVar102 - fVar110)) +
              (float)((uint)((fVar110 - fVar49) + in_XMM4_Db) & uVar111) +
              (float)(~uVar111 & (uint)((fVar49 - fVar102) + _UNK_143086684) & uVar103)) *
              (float)((ulonglong)in_XMM0_Qa >> 0x20);
    fVar104 = ((float)(~uVar113 &
                      ~uVar105 & -(uint)(fVar98 == auVar120._8_4_) & (uint)(fVar104 - fVar112)) +
              (float)((uint)((fVar112 - fVar50) + in_XMM4_Dc) & uVar113) +
              (float)(~uVar113 & (uint)((fVar50 - fVar104) + _UNK_143086688) & uVar105)) *
              in_XMM0_Dc;
    fVar106 = ((float)(~uVar115 &
                      ~uVar107 & -(uint)(fVar99 == auVar120._12_4_) & (uint)(fVar106 - fVar114)) +
              (float)((uint)((fVar114 - fVar51) + in_XMM4_Dd) & uVar115) +
              (float)(~uVar115 & (uint)((fVar51 - fVar106) + _UNK_14308668c) & uVar107)) *
              in_XMM0_Dd;
    auVar57._0_4_ =
         (int)(float)(~uVar56 &
                     (uint)((float)(~-(uint)(fVar100 < fVar21) & (uint)fVar100) +
                           (float)(-(uint)(fVar100 < fVar21) & (uint)(fVar20 + fVar100))));
    auVar58._4_4_ =
         (int)(float)(~uVar60 &
                     (uint)((float)(~-(uint)(fVar102 < fVar22) & (uint)fVar102) +
                           (float)(-(uint)(fVar102 < fVar22) & (uint)(fVar36 + fVar102))));
    auVar58._0_4_ = auVar57._0_4_;
    auVar58._8_4_ = auVar58._4_4_;
    auVar58._12_4_ = auVar75._4_4_;
    auVar57._8_8_ = auVar58._8_8_;
    auVar57._4_4_ = auVar75._0_4_;
    auVar76._12_4_ = (int)(float)(~uVar61 & (uint)auVar19._8_4_);
    auVar76._8_4_ =
         (int)(float)(~uVar61 &
                     (uint)((float)(~-(uint)(fVar104 < in_XMM3_Dc) & (uint)fVar104) +
                           (float)(-(uint)(fVar104 < in_XMM3_Dc) & (uint)(in_XMM2_Dc + fVar104))));
    auVar75._8_4_ = auVar75._4_4_;
    auVar75._12_4_ = (int)fVar121;
    auVar76._0_8_ = auVar75._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = CONCAT44((int)fVar121,(int)fVar116) << 0x20;
    auVar93 = auVar57 & _DAT_1430866a0 | auVar10 << 0x40;
    auVar94._0_8_ = auVar93._0_8_;
    auVar94._8_4_ = auVar93._12_4_;
    auVar94._12_4_ = auVar93._8_4_;
    auVar118 = packssdw(auVar94,auVar76);
    auVar77._4_4_ =
         (int)(float)(~uVar62 &
                     (uint)((float)(~-(uint)(fVar106 < in_XMM3_Dd) & (uint)fVar106) +
                           (float)(-(uint)(fVar106 < in_XMM3_Dd) & (uint)(in_XMM2_Dd + fVar106))));
    auVar77._0_4_ = (int)fVar122;
    auVar77._8_4_ = (int)(float)(~uVar62 & (uint)auVar19._12_4_);
    auVar77._12_4_ = (int)fVar123;
    sVar1 = auVar118._0_2_;
    sVar2 = auVar118._2_2_;
    sVar3 = auVar118._4_2_;
    sVar4 = auVar118._6_2_;
    uVar78 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar118[6] - (0xff < sVar4),
                      CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar118[4] - (0xff < sVar3),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar118[2] - (0xff < sVar2)
                                        ,(0 < sVar1) * (sVar1 < 0x100) * auVar118[0] -
                                         (0xff < sVar1))));
    sVar5 = auVar118._8_2_;
    sVar6 = auVar118._10_2_;
    sVar7 = auVar118._12_2_;
    sVar8 = auVar118._14_2_;
    auVar93 = packssdw(auVar77,auVar77);
    sVar1 = auVar93._0_2_;
    sVar2 = auVar93._2_2_;
    sVar3 = auVar93._4_2_;
    sVar4 = auVar93._6_2_;
    *param_2 = uVar78;
    param_2[2] = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar93[6] - (0xff < sVar4),
                          CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar93[4] - (0xff < sVar3),
                                   CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar93[2] -
                                            (0xff < sVar2),
                                            (0 < sVar1) * (sVar1 < 0x100) * auVar93[0] -
                                            (0xff < sVar1))));
    param_2[1] = (int)(CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar118[0xe] - (0xff < sVar8),
                                CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar118[0xc] -
                                         (0xff < sVar7),
                                         CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar118[10] -
                                                  (0xff < sVar6),
                                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                                           auVar118[8] - (0xff < sVar5),uVar78))))
                      >> 0x20);
    fVar100 = _DAT_143086680;
    param_2 = param_2 + 3;
  } while (in_R10D < in_EAX);
  for (; in_R10D < param_3; in_R10D = in_R10D + 1) {
    fVar104 = (float)(byte)*param_1;
    fVar36 = (float)*(byte *)((longlong)param_1 + 1);
    auVar59._4_4_ = fVar22;
    auVar59._0_4_ = fVar104;
    auVar59._8_4_ = in_XMM3_Dc;
    auVar59._12_4_ = in_XMM3_Dd;
    fVar102 = (float)*(byte *)((longlong)param_1 + 2);
    if (fVar104 <= fVar36) {
      auVar59._0_4_ = fVar36;
    }
    fVar106 = fVar104;
    if (fVar36 <= fVar104) {
      fVar106 = fVar36;
    }
    if (auVar59._0_4_ <= fVar102) {
      auVar59._0_4_ = fVar102;
    }
    if (fVar102 <= fVar106) {
      fVar106 = fVar102;
    }
    fVar35 = auVar59._0_4_;
    auVar95._4_12_ = auVar59._4_12_;
    auVar95._0_4_ = fVar35 - fVar106;
    *(char *)((longlong)param_2 + 2) = (char)(int)ROUND(fVar35);
    if ((fVar35 == 0.0) || ((auVar95._0_4_ == 0.0 && (!NAN(auVar95._0_4_))))) {
      *(undefined1 *)((longlong)param_2 + 1) = in_R9B;
      *(undefined1 *)param_2 = in_R9B;
    }
    else {
      auVar118 = rcpss(auVar59,auVar59);
      auVar93 = rcpss(auVar95,auVar95);
      *(char *)((longlong)param_2 + 1) = (char)(int)ROUND(auVar118._0_4_ * auVar95._0_4_ * fVar20);
      fVar49 = auVar93._0_4_;
      fVar50 = (fVar35 - fVar104) * fVar49;
      fVar51 = (fVar35 - fVar36) * fVar49;
      fVar49 = (fVar35 - fVar102) * fVar49;
      fVar106 = fVar21;
      if ((fVar35 == fVar104) && (!NAN(fVar35) && !NAN(fVar104))) {
        fVar106 = fVar49 - fVar51;
      }
      if ((fVar35 == fVar36) && (!NAN(fVar35) && !NAN(fVar36))) {
        fVar106 = (fVar50 - fVar49) + fVar100;
      }
      if ((fVar35 == fVar102) && (!NAN(fVar35) && !NAN(fVar102))) {
        fVar106 = (fVar51 - fVar50) + in_XMM4_Da;
      }
      fVar106 = fVar106 * (float)in_XMM0_Qa;
      if (fVar106 < 0.0) {
        fVar106 = fVar106 + fVar20;
      }
      *(char *)param_2 = (char)(int)ROUND(fVar106);
    }
    param_1 = (uint *)((longlong)param_1 + 3);
    param_2 = (undefined4 *)((longlong)param_2 + 3);
  }
  return;
}

