
void FUN_1405e99ee(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [15];
  undefined1 auVar44 [14];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [13];
  undefined1 auVar58 [13];
  undefined1 auVar59 [13];
  undefined1 auVar60 [13];
  undefined1 auVar61 [13];
  undefined1 auVar62 [13];
  undefined1 auVar63 [13];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  unkuint9 Var73;
  undefined1 auVar74 [11];
  undefined1 auVar75 [15];
  unkuint9 Var76;
  undefined1 auVar77 [11];
  uint uVar78;
  undefined1 auVar79 [15];
  undefined1 auVar80 [11];
  undefined1 auVar81 [15];
  undefined1 auVar82 [11];
  undefined1 auVar83 [15];
  unkuint9 Var84;
  undefined1 auVar85 [11];
  undefined1 auVar86 [14];
  undefined1 auVar87 [14];
  undefined1 auVar88 [14];
  undefined1 auVar89 [13];
  undefined1 auVar90 [14];
  undefined1 auVar91 [15];
  undefined1 auVar92 [11];
  undefined1 auVar93 [14];
  undefined1 auVar94 [14];
  undefined1 auVar95 [13];
  undefined1 auVar96 [14];
  undefined1 auVar97 [13];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined6 uVar102;
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [12];
  undefined8 uVar110;
  undefined6 uVar111;
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [12];
  uint6 uVar115;
  uint5 uVar116;
  uint5 uVar117;
  ulonglong uVar118;
  longlong in_R10;
  undefined4 *puVar119;
  ulonglong uVar120;
  float in_XMM0_Da;
  float in_XMM2_Da;
  ushort uVar121;
  undefined1 uVar122;
  uint uVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  uint uVar128;
  short sVar129;
  short sVar130;
  short sVar131;
  
  do {
    uVar118 = *(ulonglong *)(param_2 + 1 + param_1);
    uVar120 = *(ulonglong *)((param_2 - 1) + param_1);
    auVar8._8_6_ = 0;
    auVar8._0_8_ = uVar118;
    auVar8[0xe] = (char)(uVar118 >> 0x38);
    auVar21._8_4_ = 0;
    auVar21._0_8_ = uVar118;
    auVar21[0xc] = (char)(uVar118 >> 0x30);
    auVar21._13_2_ = auVar8._13_2_;
    auVar29._8_4_ = 0;
    auVar29._0_8_ = uVar118;
    auVar29._12_3_ = auVar21._12_3_;
    auVar35._8_2_ = 0;
    auVar35._0_8_ = uVar118;
    auVar35[10] = (char)(uVar118 >> 0x28);
    auVar35._11_4_ = auVar29._11_4_;
    auVar45._8_2_ = 0;
    auVar45._0_8_ = uVar118;
    auVar45._10_5_ = auVar35._10_5_;
    auVar51[8] = (char)(uVar118 >> 0x20);
    auVar51._0_8_ = uVar118;
    auVar51._9_6_ = auVar45._9_6_;
    auVar72._7_8_ = 0;
    auVar72._0_7_ = auVar51._8_7_;
    Var73 = CONCAT81(SUB158(auVar72 << 0x40,7),(char)(uVar118 >> 0x18));
    auVar98._9_6_ = 0;
    auVar98._0_9_ = Var73;
    auVar74._1_10_ = SUB1510(auVar98 << 0x30,5);
    auVar74[0] = (char)(uVar118 >> 0x10);
    auVar99._11_4_ = 0;
    auVar99._0_11_ = auVar74;
    auVar64[2] = (char)(uVar118 >> 8);
    auVar64._0_2_ = (ushort)uVar118;
    auVar64._3_12_ = SUB1512(auVar99 << 0x20,3);
    auVar9._8_6_ = 0;
    auVar9._0_8_ = uVar120;
    auVar9[0xe] = (char)(uVar120 >> 0x38);
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar120;
    auVar22[0xc] = (char)(uVar120 >> 0x30);
    auVar22._13_2_ = auVar9._13_2_;
    auVar30._8_4_ = 0;
    auVar30._0_8_ = uVar120;
    auVar30._12_3_ = auVar22._12_3_;
    auVar36._8_2_ = 0;
    auVar36._0_8_ = uVar120;
    auVar36[10] = (char)(uVar120 >> 0x28);
    auVar36._11_4_ = auVar30._11_4_;
    auVar46._8_2_ = 0;
    auVar46._0_8_ = uVar120;
    auVar46._10_5_ = auVar36._10_5_;
    auVar52[8] = (char)(uVar120 >> 0x20);
    auVar52._0_8_ = uVar120;
    auVar52._9_6_ = auVar46._9_6_;
    auVar75._7_8_ = 0;
    auVar75._0_7_ = auVar52._8_7_;
    Var76 = CONCAT81(SUB158(auVar75 << 0x40,7),(char)(uVar120 >> 0x18));
    auVar100._9_6_ = 0;
    auVar100._0_9_ = Var76;
    auVar77._1_10_ = SUB1510(auVar100 << 0x30,5);
    auVar77[0] = (char)(uVar120 >> 0x10);
    auVar101._11_4_ = 0;
    auVar101._0_11_ = auVar77;
    auVar65[2] = (char)(uVar120 >> 8);
    auVar65._0_2_ = (ushort)uVar120;
    auVar65._3_12_ = SUB1512(auVar101 << 0x20,3);
    sVar124 = (short)Var76 + (short)Var73;
    uVar78 = CONCAT22(auVar52._8_2_ + auVar51._8_2_,sVar124);
    sVar125 = auVar36._10_2_ + auVar35._10_2_;
    uVar102 = CONCAT24(sVar125,uVar78);
    sVar126 = auVar22._12_2_ + auVar21._12_2_;
    sVar127 = (auVar9._13_2_ >> 8) + (auVar8._13_2_ >> 8);
    uVar2 = *(ulonglong *)(param_2 + param_1);
    uVar3 = *(ulonglong *)(param_2 + 7 + param_1);
    uVar4 = *(ulonglong *)(param_2 + 9 + param_1);
    uVar122 = (undefined1)(uVar2 >> 0x38);
    auVar10._8_6_ = 0;
    auVar10._0_8_ = uVar2;
    auVar10[0xe] = uVar122;
    auVar23._8_4_ = 0;
    auVar23._0_8_ = uVar2;
    auVar23[0xc] = (char)(uVar2 >> 0x30);
    auVar23._13_2_ = auVar10._13_2_;
    auVar31._8_4_ = 0;
    auVar31._0_8_ = uVar2;
    auVar31._12_3_ = auVar23._12_3_;
    auVar37._8_2_ = 0;
    auVar37._0_8_ = uVar2;
    auVar37[10] = (char)(uVar2 >> 0x28);
    auVar37._11_4_ = auVar31._11_4_;
    auVar47._8_2_ = 0;
    auVar47._0_8_ = uVar2;
    auVar47._10_5_ = auVar37._10_5_;
    auVar53[8] = (char)(uVar2 >> 0x20);
    auVar53._0_8_ = uVar2;
    auVar53._9_6_ = auVar47._9_6_;
    auVar79._7_8_ = 0;
    auVar79._0_7_ = auVar53._8_7_;
    Var73 = CONCAT81(SUB158(auVar79 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar103._9_6_ = 0;
    auVar103._0_9_ = Var73;
    auVar80._1_10_ = SUB1510(auVar103 << 0x30,5);
    auVar80[0] = (char)(uVar2 >> 0x10);
    auVar104._11_4_ = 0;
    auVar104._0_11_ = auVar80;
    auVar66[2] = (char)(uVar2 >> 8);
    auVar66._0_2_ = (ushort)uVar2;
    auVar66._3_12_ = SUB1512(auVar104 << 0x20,3);
    auVar70._2_13_ = auVar66._2_13_;
    auVar70._0_2_ = (ushort)uVar2 & 0xff;
    auVar11._8_6_ = 0;
    auVar11._0_8_ = uVar3;
    auVar11[0xe] = (char)(uVar3 >> 0x38);
    auVar24._8_4_ = 0;
    auVar24._0_8_ = uVar3;
    auVar24[0xc] = (char)(uVar3 >> 0x30);
    auVar24._13_2_ = auVar11._13_2_;
    auVar32._8_4_ = 0;
    auVar32._0_8_ = uVar3;
    auVar32._12_3_ = auVar24._12_3_;
    auVar38._8_2_ = 0;
    auVar38._0_8_ = uVar3;
    auVar38[10] = (char)(uVar3 >> 0x28);
    auVar38._11_4_ = auVar32._11_4_;
    auVar48._8_2_ = 0;
    auVar48._0_8_ = uVar3;
    auVar48._10_5_ = auVar38._10_5_;
    auVar54[8] = (char)(uVar3 >> 0x20);
    auVar54._0_8_ = uVar3;
    auVar54._9_6_ = auVar48._9_6_;
    auVar81._7_8_ = 0;
    auVar81._0_7_ = auVar54._8_7_;
    Var76 = CONCAT81(SUB158(auVar81 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar105._9_6_ = 0;
    auVar105._0_9_ = Var76;
    auVar82._1_10_ = SUB1510(auVar105 << 0x30,5);
    auVar82[0] = (char)(uVar3 >> 0x10);
    auVar106._11_4_ = 0;
    auVar106._0_11_ = auVar82;
    auVar67[2] = (char)(uVar3 >> 8);
    auVar67._0_2_ = (ushort)uVar3;
    auVar67._3_12_ = SUB1512(auVar106 << 0x20,3);
    auVar12._8_6_ = 0;
    auVar12._0_8_ = uVar4;
    auVar12[0xe] = (char)(uVar4 >> 0x38);
    auVar25._8_4_ = 0;
    auVar25._0_8_ = uVar4;
    auVar25[0xc] = (char)(uVar4 >> 0x30);
    auVar25._13_2_ = auVar12._13_2_;
    auVar33._8_4_ = 0;
    auVar33._0_8_ = uVar4;
    auVar33._12_3_ = auVar25._12_3_;
    auVar39._8_2_ = 0;
    auVar39._0_8_ = uVar4;
    auVar39[10] = (char)(uVar4 >> 0x28);
    auVar39._11_4_ = auVar33._11_4_;
    auVar49._8_2_ = 0;
    auVar49._0_8_ = uVar4;
    auVar49._10_5_ = auVar39._10_5_;
    auVar55[8] = (char)(uVar4 >> 0x20);
    auVar55._0_8_ = uVar4;
    auVar55._9_6_ = auVar49._9_6_;
    auVar83._7_8_ = 0;
    auVar83._0_7_ = auVar55._8_7_;
    Var84 = CONCAT81(SUB158(auVar83 << 0x40,7),(char)(uVar4 >> 0x18));
    auVar107._9_6_ = 0;
    auVar107._0_9_ = Var84;
    auVar85._1_10_ = SUB1510(auVar107 << 0x30,5);
    auVar85[0] = (char)(uVar4 >> 0x10);
    auVar108._11_4_ = 0;
    auVar108._0_11_ = auVar85;
    auVar68[2] = (char)(uVar4 >> 8);
    auVar68._0_2_ = (ushort)uVar4;
    auVar68._3_12_ = SUB1512(auVar108 << 0x20,3);
    auVar109._4_8_ = 0;
    auVar109._0_4_ = uVar78;
    auVar13._12_2_ = sVar124;
    auVar13._0_12_ = auVar109 << 0x30;
    uVar110 = CONCAT44(auVar13._10_4_,CONCAT22(auVar77._0_2_ + auVar74._0_2_,sVar124));
    auVar86._6_8_ = 0;
    auVar86._0_6_ = (uint6)((ulonglong)uVar110 >> 0x10);
    sVar124 = (short)Var76 + (short)Var84;
    uVar78 = CONCAT22(auVar54._8_2_ + auVar55._8_2_,sVar124);
    sVar129 = auVar38._10_2_ + auVar39._10_2_;
    uVar111 = CONCAT24(sVar129,uVar78);
    sVar130 = auVar24._12_2_ + auVar25._12_2_;
    sVar131 = (auVar11._13_2_ >> 8) + (auVar12._13_2_ >> 8);
    uVar2 = (ulonglong)(CONCAT28(sVar127,CONCAT26(sVar126,uVar102)) >> 0x10);
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar2;
    auVar14._12_2_ = sVar127;
    auVar26._8_2_ = sVar126;
    auVar26._0_8_ = uVar2;
    auVar26._10_4_ = auVar14._10_4_;
    auVar87._6_8_ = 0;
    auVar87._0_6_ = auVar26._8_6_;
    uVar123 = (uint)((uint6)uVar102 >> 0x10);
    auVar40._4_2_ = sVar125;
    auVar40._0_4_ = uVar123;
    auVar40._6_8_ = SUB148(auVar87 << 0x40,6);
    auVar15._10_2_ = 0;
    auVar15._0_10_ = auVar70._0_10_;
    auVar15._12_2_ = (short)Var73;
    uVar115 = CONCAT42(auVar15._10_4_,auVar80._0_2_);
    auVar88._6_8_ = 0;
    auVar88._0_6_ = uVar115;
    auVar41._4_2_ = auVar66._2_2_;
    auVar41._0_4_ = auVar70._0_4_;
    auVar41._6_8_ = SUB148(auVar88 << 0x40,6);
    auVar57[0xc] = uVar122;
    auVar57._0_12_ = ZEXT812(0);
    uVar116 = CONCAT32(auVar57._10_3_,auVar23._12_2_);
    auVar89._5_8_ = 0;
    auVar89._0_5_ = uVar116;
    auVar58._4_2_ = auVar37._10_2_;
    auVar58._0_4_ = auVar53._8_4_;
    auVar58._6_7_ = SUB137(auVar89 << 0x40,6);
    uVar2 = (ulonglong)(CONCAT28(sVar131,CONCAT26(sVar130,uVar111)) >> 0x10);
    auVar16._8_4_ = 0;
    auVar16._0_8_ = uVar2;
    auVar16._12_2_ = sVar131;
    auVar27._8_2_ = sVar130;
    auVar27._0_8_ = uVar2;
    auVar27._10_4_ = auVar16._10_4_;
    auVar90._6_8_ = 0;
    auVar90._0_6_ = auVar27._8_6_;
    uVar128 = (uint)((uint6)uVar111 >> 0x10);
    auVar42._4_2_ = sVar129;
    auVar42._0_4_ = uVar128;
    auVar42._6_8_ = SUB148(auVar90 << 0x40,6);
    uVar2 = *(ulonglong *)(param_2 + 8 + param_1);
    uVar122 = (undefined1)(uVar2 >> 0x38);
    auVar17._8_6_ = 0;
    auVar17._0_8_ = uVar2;
    auVar17[0xe] = uVar122;
    auVar28._8_4_ = 0;
    auVar28._0_8_ = uVar2;
    auVar28[0xc] = (char)(uVar2 >> 0x30);
    auVar28._13_2_ = auVar17._13_2_;
    auVar34._8_4_ = 0;
    auVar34._0_8_ = uVar2;
    auVar34._12_3_ = auVar28._12_3_;
    auVar43._8_2_ = 0;
    auVar43._0_8_ = uVar2;
    auVar43[10] = (char)(uVar2 >> 0x28);
    auVar43._11_4_ = auVar34._11_4_;
    auVar50._8_2_ = 0;
    auVar50._0_8_ = uVar2;
    auVar50._10_5_ = auVar43._10_5_;
    auVar56[8] = (char)(uVar2 >> 0x20);
    auVar56._0_8_ = uVar2;
    auVar56._9_6_ = auVar50._9_6_;
    auVar91._7_8_ = 0;
    auVar91._0_7_ = auVar56._8_7_;
    Var73 = CONCAT81(SUB158(auVar91 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar112._9_6_ = 0;
    auVar112._0_9_ = Var73;
    auVar92._1_10_ = SUB1510(auVar112 << 0x30,5);
    auVar92[0] = (char)(uVar2 >> 0x10);
    auVar113._11_4_ = 0;
    auVar113._0_11_ = auVar92;
    auVar69[2] = (char)(uVar2 >> 8);
    auVar69._0_2_ = (ushort)uVar2;
    auVar69._3_12_ = SUB1512(auVar113 << 0x20,3);
    auVar71._2_13_ = auVar69._2_13_;
    auVar71._0_2_ = (ushort)uVar2 & 0xff;
    pfVar1 = (float *)(in_R10 + param_2 * 4);
    *pfVar1 = (float)(ushort)(((ushort)uVar120 & 0xff) + ((ushort)uVar118 & 0xff)) * in_XMM2_Da +
              (float)(auVar70._0_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar86 << 0x40,6),auVar65._2_2_ + auVar64._2_2_) *
                in_XMM2_Da + (float)auVar41._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)(int)((ulonglong)uVar110 >> 0x10) * in_XMM2_Da +
                (float)(int)uVar115 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar13._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(auVar15._10_4_ >> 0x10) * in_XMM0_Da;
    auVar114._4_8_ = 0;
    auVar114._0_4_ = uVar78;
    auVar18._12_2_ = sVar124;
    auVar18._0_12_ = auVar114 << 0x30;
    uVar110 = CONCAT44(auVar18._10_4_,CONCAT22(auVar82._0_2_ + auVar85._0_2_,sVar124));
    auVar93._6_8_ = 0;
    auVar93._0_6_ = (uint6)((ulonglong)uVar110 >> 0x10);
    auVar19._10_2_ = 0;
    auVar19._0_10_ = auVar71._0_10_;
    auVar19._12_2_ = (short)Var73;
    uVar115 = CONCAT42(auVar19._10_4_,auVar92._0_2_);
    auVar94._6_8_ = 0;
    auVar94._0_6_ = uVar115;
    auVar44._4_2_ = auVar69._2_2_;
    auVar44._0_4_ = auVar71._0_4_;
    auVar44._6_8_ = SUB148(auVar94 << 0x40,6);
    auVar59[0xc] = uVar122;
    auVar59._0_12_ = ZEXT812(0);
    uVar117 = CONCAT32(auVar59._10_3_,auVar28._12_2_);
    auVar95._5_8_ = 0;
    auVar95._0_5_ = uVar117;
    auVar60._4_2_ = auVar43._10_2_;
    auVar60._0_4_ = auVar56._8_4_;
    auVar60._6_7_ = SUB137(auVar95 << 0x40,6);
    pfVar1 = (float *)(in_R10 + 0x10 + param_2 * 4);
    *pfVar1 = (float)(uVar123 & 0xffff) * in_XMM2_Da + (float)(auVar53._8_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)auVar40._4_4_ * in_XMM2_Da + (float)auVar58._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)auVar26._8_4_ * in_XMM2_Da + (float)(int)uVar116 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar14._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(uint3)(auVar57._10_3_ >> 0x10) * in_XMM0_Da;
    pfVar1 = (float *)(in_R10 + 0x30 + param_2 * 4);
    *pfVar1 = (float)(uVar128 & 0xffff) * in_XMM2_Da + (float)(auVar56._8_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)auVar42._4_4_ * in_XMM2_Da + (float)auVar60._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)auVar27._8_4_ * in_XMM2_Da + (float)(int)uVar117 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar16._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(uint3)(auVar59._10_3_ >> 0x10) * in_XMM0_Da;
    pfVar1 = (float *)(in_R10 + 0x20 + param_2 * 4);
    *pfVar1 = (float)(ushort)(((ushort)uVar3 & 0xff) + ((ushort)uVar4 & 0xff)) * in_XMM2_Da +
              (float)(auVar71._0_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar93 << 0x40,6),auVar67._2_2_ + auVar68._2_2_) *
                in_XMM2_Da + (float)auVar44._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)(int)((ulonglong)uVar110 >> 0x10) * in_XMM2_Da +
                (float)(int)uVar115 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar18._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(auVar19._10_4_ >> 0x10) * in_XMM0_Da;
    param_2 = param_2 + 0x10;
  } while (param_2 < param_4);
  if (param_4 + 1 <= param_3) {
    param_3 = param_3 - param_4;
    if ((longlong)param_3 < 4) {
      FUN_1405e9d4f();
      return;
    }
    uVar120 = 0;
    puVar119 = (undefined4 *)(param_1 + param_4);
    uVar118 = param_3 & 0xfffffffffffffffc;
    do {
      uVar5 = *(undefined4 *)((longlong)puVar119 + -1);
      uVar6 = *(undefined4 *)((longlong)puVar119 + 1);
      uVar121 = (ushort)(byte)((uint)uVar5 >> 0x18) + (ushort)(byte)((uint)uVar6 >> 0x18);
      uVar7 = *puVar119;
      puVar119 = puVar119 + 1;
      uVar2 = (ulonglong)(ushort)uVar7 & 0xffffffffffff00ff;
      auVar20._12_2_ = uVar121;
      auVar20._0_12_ = ZEXT212(uVar121) << 0x30;
      uVar110 = CONCAT44(auVar20._10_4_,
                         CONCAT22((ushort)(byte)((uint)uVar5 >> 0x10) +
                                  (ushort)(byte)((uint)uVar6 >> 0x10),uVar121));
      auVar96._6_8_ = 0;
      auVar96._0_6_ = (uint6)((ulonglong)uVar110 >> 0x10);
      auVar61._8_4_ = 0;
      auVar61._0_8_ = uVar2;
      auVar61[0xc] = (char)((uint)uVar7 >> 0x18);
      auVar62[8] = (char)((uint)uVar7 >> 0x10);
      auVar62._0_8_ = uVar2;
      auVar62[9] = 0;
      auVar62._10_3_ = auVar61._10_3_;
      auVar97._5_8_ = 0;
      auVar97._0_5_ = auVar62._8_5_;
      auVar63[4] = (char)((uint)uVar7 >> 8);
      auVar63._0_4_ = (int)uVar2;
      auVar63[5] = 0;
      auVar63._6_7_ = SUB137(auVar97 << 0x40,6);
      pfVar1 = (float *)(in_R10 + param_4 * 4 + uVar120 * 4);
      *pfVar1 = (float)(ushort)(((ushort)uVar5 & 0xff) + ((ushort)uVar6 & 0xff)) * in_XMM2_Da +
                (float)(int)uVar2 * in_XMM0_Da;
      pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar96 << 0x40,6),
                                       (ushort)(byte)((uint)uVar5 >> 8) +
                                       (ushort)(byte)((uint)uVar6 >> 8)) * in_XMM2_Da +
                  (float)auVar63._4_4_ * in_XMM0_Da;
      pfVar1[2] = (float)(int)((ulonglong)uVar110 >> 0x10) * in_XMM2_Da +
                  (float)auVar62._8_4_ * in_XMM0_Da;
      pfVar1[3] = (float)(auVar20._10_4_ >> 0x10) * in_XMM2_Da +
                  (float)(uint3)(auVar61._10_3_ >> 0x10) * in_XMM0_Da;
      uVar120 = uVar120 + 4;
    } while (uVar120 < uVar118);
    if (uVar118 < param_3) {
      param_1 = param_1 + param_4;
      do {
        *(float *)(in_R10 + param_4 * 4 + uVar118 * 4) =
             (float)((uint)*(byte *)((uVar118 - 1) + param_1) +
                    (uint)*(byte *)(uVar118 + 1 + param_1)) * in_XMM2_Da +
             (float)*(byte *)(uVar118 + param_1) * in_XMM0_Da;
        uVar118 = uVar118 + 1;
      } while (uVar118 < param_3);
    }
  }
  return;
}

