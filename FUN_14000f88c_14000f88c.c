
/* WARNING: Removing unreachable block (ram,0x00014000fa28) */
/* WARNING: Removing unreachable block (ram,0x00014000f943) */
/* WARNING: Removing unreachable block (ram,0x00014000f91e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000f88c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined1 auVar17 [14];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  int in_EAX;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int unaff_ESI;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 in_XMM0 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar36 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 in_XMM3 [16];
  undefined1 auVar47 [16];
  undefined1 auVar55 [16];
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar75 [16];
  undefined1 auVar93 [14];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar106 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar46 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar56 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar57 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar77 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar104 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar105 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  
  auVar44 = _DAT_1430863f0;
  do {
    puVar24 = param_2;
    puVar23 = param_1;
    uVar4 = *puVar23;
    uVar66 = in_XMM1[7];
    auVar101._0_14_ = in_XMM1._0_14_;
    auVar101[0xe] = uVar66;
    auVar101[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar100._14_2_ = auVar101._14_2_;
    auVar100._0_13_ = in_XMM1._0_13_;
    auVar100[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    uVar65 = in_XMM1[6];
    auVar99._13_3_ = auVar100._13_3_;
    auVar99._0_12_ = in_XMM1._0_12_;
    auVar99[0xc] = uVar65;
    auVar98._12_4_ = auVar99._12_4_;
    auVar98._0_11_ = in_XMM1._0_11_;
    auVar98[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    uVar111 = in_XMM1[5];
    auVar97._11_5_ = auVar98._11_5_;
    auVar97._0_10_ = in_XMM1._0_10_;
    auVar97[10] = uVar111;
    auVar96._10_6_ = auVar97._10_6_;
    auVar96._0_9_ = in_XMM1._0_9_;
    auVar96[9] = (char)((ulonglong)uVar4 >> 0x20);
    uVar110 = in_XMM1[4];
    auVar95._9_7_ = auVar96._9_7_;
    auVar95._0_8_ = in_XMM1._0_8_;
    auVar95[8] = uVar110;
    auVar94._8_8_ = auVar95._8_8_;
    auVar94[7] = (char)((ulonglong)uVar4 >> 0x18);
    uVar109 = in_XMM1[3];
    auVar94[6] = uVar109;
    auVar94[5] = (char)((ulonglong)uVar4 >> 0x10);
    uVar108 = in_XMM1[2];
    auVar94[4] = uVar108;
    auVar94[3] = (char)((ulonglong)uVar4 >> 8);
    uVar107 = in_XMM1[1];
    auVar94[2] = uVar107;
    auVar94[0] = in_XMM1[0];
    auVar94[1] = (char)uVar4;
    uVar4 = puVar23[1];
    auVar75._8_8_ = in_XMM2_Qb;
    auVar75._0_8_ = in_XMM2_Qa;
    auVar102 = pmulhuw(auVar94,auVar75);
    in_EAX = in_EAX + 8;
    auVar74[0xe] = uVar66;
    auVar74._0_14_ = auVar101._0_14_;
    auVar74[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar73._14_2_ = auVar74._14_2_;
    auVar73[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar73._0_13_ = auVar100._0_13_;
    auVar72._13_3_ = auVar73._13_3_;
    auVar72[0xc] = uVar65;
    auVar72._0_12_ = auVar99._0_12_;
    auVar71._12_4_ = auVar72._12_4_;
    auVar71[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar71._0_11_ = auVar98._0_11_;
    auVar70._11_5_ = auVar71._11_5_;
    auVar70[10] = uVar111;
    auVar70._0_10_ = auVar97._0_10_;
    auVar69._10_6_ = auVar70._10_6_;
    auVar69[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar69._0_9_ = auVar96._0_9_;
    auVar89._9_7_ = auVar69._9_7_;
    auVar89[8] = uVar110;
    auVar89._0_8_ = auVar95._0_8_;
    auVar68._8_8_ = auVar89._8_8_;
    auVar68[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar68[6] = uVar109;
    auVar68[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar68[4] = uVar108;
    auVar68[3] = (char)((ulonglong)uVar4 >> 8);
    auVar68[2] = uVar107;
    auVar68[1] = (char)uVar4;
    auVar68[0] = auVar94[0];
    auVar75 = pmulhuw(auVar68,in_XMM0);
    uVar4 = puVar23[2];
    param_1 = puVar23 + 3;
    auVar88[0xe] = uVar66;
    auVar88._0_14_ = auVar101._0_14_;
    auVar88[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar87._14_2_ = auVar88._14_2_;
    auVar87[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar87._0_13_ = auVar100._0_13_;
    auVar86._13_3_ = auVar87._13_3_;
    auVar86[0xc] = uVar65;
    auVar86._0_12_ = auVar99._0_12_;
    auVar85._12_4_ = auVar86._12_4_;
    auVar85[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar85._0_11_ = auVar98._0_11_;
    auVar84._11_5_ = auVar85._11_5_;
    auVar84[10] = uVar111;
    auVar84._0_10_ = auVar97._0_10_;
    auVar83._10_6_ = auVar84._10_6_;
    auVar83[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar83._0_9_ = auVar96._0_9_;
    auVar82._9_7_ = auVar83._9_7_;
    auVar82[8] = uVar110;
    auVar82._0_8_ = auVar95._0_8_;
    auVar81._8_8_ = auVar82._8_8_;
    auVar81[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar81[6] = uVar109;
    auVar81[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar81[4] = uVar108;
    auVar81[3] = (char)((ulonglong)uVar4 >> 8);
    auVar81[2] = uVar107;
    auVar81[1] = (char)uVar4;
    auVar81[0] = auVar94[0];
    auVar89 = pmulhuw(auVar81,in_XMM3);
    auVar60._0_12_ = auVar102._0_12_;
    auVar61._12_2_ = auVar102._6_2_;
    auVar61._0_12_ = auVar60._0_12_;
    auVar61._14_2_ = auVar102._12_2_;
    auVar60._12_4_ = auVar61._12_4_;
    auVar59._10_6_ = auVar60._10_6_;
    auVar59._0_8_ = auVar102._0_8_;
    auVar59._8_2_ = auVar102._4_2_;
    auVar18._4_8_ = auVar59._8_8_;
    auVar18._2_2_ = auVar102._8_2_;
    auVar18._0_2_ = auVar102._2_2_;
    auVar58._0_4_ = CONCAT22(auVar102._6_2_,auVar102._0_2_);
    auVar58._4_12_ = auVar18;
    auVar90._0_8_ = auVar75._0_8_ << 0x20;
    auVar90._8_8_ = auVar75._8_8_ << 0x20 | auVar75._0_8_ >> 0x20;
    auVar93 = ZEXT414(auVar102._12_4_) | auVar90._0_14_;
    auVar105._0_12_ = auVar93._0_12_;
    auVar105._12_2_ = auVar93._6_2_;
    auVar105._14_2_ = auVar75._8_2_;
    auVar104._12_4_ = auVar105._12_4_;
    auVar104._0_10_ = auVar93._0_10_;
    auVar104._10_2_ = auVar75._6_2_;
    auVar103._10_6_ = auVar104._10_6_;
    auVar103._0_8_ = auVar93._0_8_;
    auVar103._8_2_ = auVar93._4_2_;
    auVar19._4_8_ = auVar103._8_8_;
    auVar19._2_2_ = auVar75._4_2_;
    auVar19._0_2_ = auVar93._2_2_;
    auVar92._6_2_ = auVar75._2_2_;
    auVar92._4_2_ = auVar93._0_2_;
    auVar102._8_8_ = 0;
    auVar102._0_8_ = auVar89._0_8_;
    auVar75 = auVar75 >> 0x40 | auVar102 << 0x40;
    auVar78._0_12_ = auVar75._0_12_;
    auVar79._12_2_ = auVar75._6_2_;
    auVar79._0_12_ = auVar78._0_12_;
    auVar79._14_2_ = auVar75._12_2_;
    auVar78._12_4_ = auVar79._12_4_;
    auVar77._10_6_ = auVar78._10_6_;
    auVar77._0_8_ = auVar75._0_8_;
    auVar77._8_2_ = auVar75._4_2_;
    auVar20._4_8_ = auVar77._8_8_;
    auVar20._2_2_ = auVar75._8_2_;
    auVar20._0_2_ = auVar75._2_2_;
    auVar76._0_4_ = CONCAT22(auVar75._6_2_,auVar75._0_2_);
    auVar76._4_12_ = auVar20;
    auVar93._12_2_ = auVar89._10_2_;
    auVar93._0_12_ = auVar89._4_12_;
    auVar17._8_2_ = auVar89._8_2_;
    auVar17._0_8_ = auVar89._4_8_;
    auVar17._10_4_ = auVar93._10_4_;
    auVar92._14_2_ = auVar89._10_2_;
    auVar92._12_2_ = auVar89._4_2_;
    auVar91._0_8_ = auVar58._0_8_;
    auVar91._8_4_ = auVar18._0_4_;
    auVar91._12_4_ = auVar19._0_4_;
    auVar92._0_4_ = auVar58._0_4_;
    auVar62._4_4_ = auVar103._8_4_;
    auVar62._0_4_ = auVar59._8_4_;
    auVar62._12_4_ = auVar17._8_4_;
    auVar62._8_4_ = auVar77._8_4_;
    auVar106._0_8_ = auVar76._0_8_;
    auVar106._8_4_ = auVar20._0_4_;
    auVar106._12_4_ = (int)CONCAT82(CONCAT62(auVar17._8_6_,auVar89._12_2_),auVar89._6_2_);
    auVar92._8_4_ = auVar76._0_4_;
    auVar80._8_8_ = auVar106._8_8_;
    auVar80._0_8_ = auVar91._8_8_;
    auVar75 = paddusw(auVar80,auVar92);
    auVar75 = paddusw(auVar75,auVar62);
    auVar75 = paddusw(auVar75,auVar44);
    auVar75 = psraw(auVar75,7);
    sVar6 = auVar75._0_2_;
    sVar7 = auVar75._2_2_;
    sVar8 = auVar75._4_2_;
    sVar9 = auVar75._6_2_;
    sVar10 = auVar75._8_2_;
    sVar11 = auVar75._10_2_;
    sVar12 = auVar75._12_2_;
    sVar13 = auVar75._14_2_;
    *puVar24 = CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar75[0xe] - (0xff < sVar13),
                        CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar75[0xc] - (0xff < sVar12),
                                 CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar75[10] -
                                          (0xff < sVar11),
                                          CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar75[8] -
                                                   (0xff < sVar10),
                                                   CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                            auVar75[6] - (0xff < sVar9),
                                                            CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                     auVar75[4] - (0xff < sVar8),
                                                                     CONCAT11((0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              auVar75[2] -
                                                                              (0xff < sVar7),
                                                                              (0 < sVar6) *
                                                                              (sVar6 < 0x100) *
                                                                              auVar75[0] -
                                                                              (0xff < sVar6))))))));
    param_2 = puVar24 + 1;
  } while (in_EAX < unaff_ESI);
  if ((param_3 & 4) != 0) {
    uVar4 = *param_1;
    uVar5 = *(undefined4 *)(puVar23 + 4);
    param_1 = (undefined8 *)((longlong)puVar23 + 0x24);
    auVar54[0xe] = uVar66;
    auVar54._0_14_ = auVar101._0_14_;
    auVar54[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar53._14_2_ = auVar54._14_2_;
    auVar53[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar53._0_13_ = auVar100._0_13_;
    auVar52._13_3_ = auVar53._13_3_;
    auVar52[0xc] = uVar65;
    auVar52._0_12_ = auVar99._0_12_;
    auVar51._12_4_ = auVar52._12_4_;
    auVar51[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar51._0_11_ = auVar98._0_11_;
    auVar50._11_5_ = auVar51._11_5_;
    auVar50[10] = uVar111;
    auVar50._0_10_ = auVar97._0_10_;
    auVar49._10_6_ = auVar50._10_6_;
    auVar49[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar49._0_9_ = auVar96._0_9_;
    auVar48._9_7_ = auVar49._9_7_;
    auVar48[8] = uVar110;
    auVar48._0_8_ = auVar95._0_8_;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar47[6] = uVar109;
    auVar47[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar47[4] = uVar108;
    auVar47[3] = (char)((ulonglong)uVar4 >> 8);
    auVar47[2] = uVar107;
    auVar47[1] = (char)uVar4;
    auVar47[0] = auVar94[0];
    uVar67 = (undefined1)((uint)uVar5 >> 0x18);
    auVar43[0xe] = uVar66;
    auVar43._0_14_ = auVar101._0_14_;
    auVar43[0xf] = uVar67;
    auVar42._14_2_ = auVar43._14_2_;
    uVar66 = (undefined1)((uint)uVar5 >> 0x10);
    auVar42[0xd] = uVar66;
    auVar42._0_13_ = auVar100._0_13_;
    auVar41._13_3_ = auVar42._13_3_;
    auVar41[0xc] = uVar65;
    auVar41._0_12_ = auVar99._0_12_;
    auVar40._12_4_ = auVar41._12_4_;
    uVar65 = (undefined1)((uint)uVar5 >> 8);
    auVar40[0xb] = uVar65;
    auVar40._0_11_ = auVar98._0_11_;
    auVar39._11_5_ = auVar40._11_5_;
    auVar39[10] = uVar111;
    auVar39._0_10_ = auVar97._0_10_;
    auVar38._10_6_ = auVar39._10_6_;
    auVar38[9] = (char)uVar5;
    auVar38._0_9_ = auVar96._0_9_;
    auVar37._9_7_ = auVar38._9_7_;
    auVar37[8] = uVar110;
    auVar37._0_8_ = auVar95._0_8_;
    auVar36._8_8_ = auVar37._8_8_;
    auVar36[7] = uVar67;
    auVar36[6] = uVar109;
    auVar36[5] = uVar66;
    auVar36[4] = uVar108;
    auVar36[3] = uVar65;
    auVar36[2] = uVar107;
    auVar36[1] = (char)uVar5;
    auVar36[0] = auVar94[0];
    auVar44._8_8_ = in_XMM2_Qb;
    auVar44._0_8_ = in_XMM2_Qa;
    auVar75 = pmulhuw(auVar47,auVar44);
    auVar44 = pmulhuw(auVar36,in_XMM0);
    auVar63._0_8_ = auVar44._0_8_ << 0x20;
    auVar63._8_8_ = auVar44._8_8_ << 0x20 | auVar44._0_8_ >> 0x20;
    auVar33._0_12_ = auVar75._0_12_;
    auVar34._12_2_ = auVar75._6_2_;
    auVar34._0_12_ = auVar33._0_12_;
    auVar34._14_2_ = auVar75._12_2_;
    auVar33._12_4_ = auVar34._12_4_;
    auVar32._10_6_ = auVar33._10_6_;
    auVar32._0_8_ = auVar75._0_8_;
    auVar32._8_2_ = auVar75._4_2_;
    auVar21._4_8_ = auVar32._8_8_;
    auVar21._2_2_ = auVar75._8_2_;
    auVar21._0_2_ = auVar75._2_2_;
    auVar31._0_4_ = CONCAT22(auVar75._6_2_,auVar75._0_2_);
    auVar31._4_12_ = auVar21;
    auVar93 = ZEXT414(auVar75._12_4_) | auVar63._0_14_;
    auVar57._0_12_ = auVar93._0_12_;
    auVar57._12_2_ = auVar93._6_2_;
    auVar57._14_2_ = auVar44._8_2_;
    auVar56._12_4_ = auVar57._12_4_;
    auVar56._0_10_ = auVar93._0_10_;
    auVar56._10_2_ = auVar44._6_2_;
    auVar55._10_6_ = auVar56._10_6_;
    auVar55._0_8_ = auVar93._0_8_;
    auVar55._8_2_ = auVar93._4_2_;
    auVar22._4_8_ = auVar55._8_8_;
    auVar22._2_2_ = auVar44._4_2_;
    auVar22._0_2_ = auVar93._2_2_;
    auVar45._6_2_ = auVar44._2_2_;
    auVar45._4_2_ = auVar93._0_2_;
    auVar46._0_8_ = auVar31._0_8_;
    auVar46._8_4_ = auVar21._0_4_;
    auVar46._12_4_ = auVar22._0_4_;
    auVar45._8_8_ = auVar46._8_8_;
    auVar45._0_4_ = auVar31._0_4_;
    auVar64._8_8_ = auVar45._8_8_;
    auVar64._0_8_ = auVar45._8_8_;
    auVar35._4_4_ = auVar55._8_4_;
    auVar35._0_4_ = auVar32._8_4_;
    auVar35._8_4_ = auVar33._12_4_;
    auVar35._12_4_ = auVar56._12_4_;
    auVar44 = paddusw(auVar64,auVar45);
    auVar44 = paddusw(auVar44,auVar35);
    auVar44 = paddusw(auVar44,_DAT_1430863f0);
    auVar44 = psraw(auVar44,7);
    sVar6 = auVar44._0_2_;
    sVar7 = auVar44._2_2_;
    sVar8 = auVar44._4_2_;
    sVar9 = auVar44._6_2_;
    *(uint *)param_2 =
         CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar44[6] - (0xff < sVar9),
                  CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar44[4] - (0xff < sVar8),
                           CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar44[2] - (0xff < sVar7),
                                    (0 < sVar6) * (sVar6 < 0x100) * auVar44[0] - (0xff < sVar6))));
    param_2 = (undefined8 *)((longlong)puVar24 + 0xc);
  }
  uVar25 = param_3 & 3;
  bVar30 = (param_3 & 3) != 0;
  if (bVar30) {
    uVar14 = (ushort)in_XMM2_Qa;
    uVar15 = (ushort)((ulonglong)in_XMM2_Qa >> 0x10);
    uVar16 = (ushort)((ulonglong)in_XMM2_Qa >> 0x20);
    if (bVar30) {
      iVar26 = 1;
      lVar27 = 0;
      if (uVar25 >> 1 != 0) {
        uVar29 = 0;
        do {
          uVar28 = uVar29;
          *(char *)((longlong)param_2 + uVar28 * 2) =
               (char)((uint)*(byte *)(lVar27 + (longlong)param_1) * (uint)uVar14 +
                      (uint)*(byte *)(lVar27 + 1 + (longlong)param_1) * (uint)uVar15 + 0x4000 +
                      (uint)*(byte *)(lVar27 + 2 + (longlong)param_1) * (uint)uVar16 >> 0xf);
          lVar1 = lVar27 + 3;
          lVar2 = lVar27 + 4;
          lVar3 = lVar27 + 5;
          lVar27 = lVar27 + 6;
          *(char *)((longlong)param_2 + uVar28 * 2 + 1) =
               (char)((uint)*(byte *)(lVar1 + (longlong)param_1) * (uint)uVar14 +
                      (uint)*(byte *)(lVar2 + (longlong)param_1) * (uint)uVar15 + 0x4000 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * (uint)uVar16 >> 0xf);
          uVar29 = uVar28 + 1;
        } while (uVar29 < uVar25 >> 1);
        iVar26 = (int)uVar28 + 2 + (int)uVar29;
      }
      if (iVar26 - 1U < uVar25) {
        lVar27 = (longlong)iVar26 * 3;
        *(char *)((longlong)iVar26 + -1 + (longlong)param_2) =
             (char)((uint)uVar14 * (uint)*(byte *)(lVar27 + -3 + (longlong)param_1) +
                    (uint)uVar15 * (uint)*(byte *)(lVar27 + -2 + (longlong)param_1) + 0x4000 +
                    (uint)uVar16 * (uint)*(byte *)(lVar27 + -1 + (longlong)param_1) >> 0xf);
      }
    }
  }
  return;
}

