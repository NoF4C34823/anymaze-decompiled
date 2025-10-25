
void FUN_1405c88f4(ulonglong param_1,float param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [15];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [14];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [14];
  undefined1 auVar48 [15];
  undefined1 auVar49 [14];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [13];
  undefined1 auVar66 [13];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  unkuint9 Var74;
  undefined1 auVar75 [11];
  undefined1 auVar76 [13];
  undefined1 auVar77 [15];
  unkuint9 Var78;
  undefined1 auVar79 [11];
  undefined1 auVar80 [15];
  unkuint9 Var81;
  undefined1 auVar82 [11];
  undefined1 auVar83 [13];
  undefined1 auVar84 [15];
  unkuint9 Var85;
  undefined1 auVar86 [11];
  undefined1 auVar87 [14];
  undefined1 auVar88 [14];
  undefined1 auVar89 [14];
  undefined1 auVar90 [14];
  undefined1 auVar91 [15];
  undefined1 auVar92 [11];
  undefined1 auVar93 [15];
  undefined1 auVar94 [11];
  undefined1 auVar95 [14];
  undefined1 auVar96 [14];
  undefined1 auVar97 [15];
  undefined1 auVar98 [11];
  undefined1 auVar99 [14];
  undefined1 auVar100 [13];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined6 uVar109;
  undefined6 uVar110;
  undefined1 auVar111 [12];
  undefined8 uVar112;
  undefined1 auVar113 [12];
  undefined8 uVar114;
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [12];
  undefined8 uVar120;
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  uint6 uVar123;
  uint5 uVar124;
  ulonglong in_RAX;
  ulonglong in_RDX;
  longlong in_R9;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  uint uVar125;
  short sVar126;
  undefined1 uVar127;
  short sVar128;
  short sVar129;
  short sVar130;
  uint uVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar135;
  uint uVar136;
  
  do {
    *(float *)(in_R10 + in_RAX * 4) =
         (float)((uint)*(byte *)((in_RAX - 9) + in_R9) + (uint)*(byte *)(in_RAX + 9 + in_R9)) *
         param_2 + (float)((uint)*(byte *)((in_RAX - 6) + in_R9) +
                          (uint)*(byte *)(in_RAX + 6 + in_R9)) * in_XMM2_Da +
         (float)((uint)*(byte *)((in_RAX - 3) + in_R9) + (uint)*(byte *)(in_RAX + 3 + in_R9)) *
         param_4 + (float)*(byte *)(in_RAX + in_R9) * in_XMM0_Da;
    in_RAX = in_RAX + 1;
  } while (in_RAX < in_RDX);
  do {
    uVar2 = *(ulonglong *)((in_RDX - 6) + in_R9);
    uVar3 = *(ulonglong *)((in_RDX - 9) + in_R9);
    uVar4 = *(ulonglong *)(in_RDX + 6 + in_R9);
    uVar5 = *(ulonglong *)(in_R9 + 9 + in_RDX);
    auVar21._8_6_ = 0;
    auVar21._0_8_ = uVar2;
    auVar21[0xe] = (char)(uVar2 >> 0x38);
    auVar32._8_4_ = 0;
    auVar32._0_8_ = uVar2;
    auVar32[0xc] = (char)(uVar2 >> 0x30);
    auVar32._13_2_ = auVar21._13_2_;
    auVar39._8_4_ = 0;
    auVar39._0_8_ = uVar2;
    auVar39._12_3_ = auVar32._12_3_;
    auVar50._8_2_ = 0;
    auVar50._0_8_ = uVar2;
    auVar50[10] = (char)(uVar2 >> 0x28);
    auVar50._11_4_ = auVar39._11_4_;
    auVar57._8_2_ = 0;
    auVar57._0_8_ = uVar2;
    auVar57._10_5_ = auVar50._10_5_;
    auVar64[8] = (char)(uVar2 >> 0x20);
    auVar64._0_8_ = uVar2;
    auVar64._9_6_ = auVar57._9_6_;
    auVar73._7_8_ = 0;
    auVar73._0_7_ = auVar64._8_7_;
    Var74 = CONCAT81(SUB158(auVar73 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar101._9_6_ = 0;
    auVar101._0_9_ = Var74;
    auVar75._1_10_ = SUB1510(auVar101 << 0x30,5);
    auVar75[0] = (char)(uVar2 >> 0x10);
    auVar102._11_4_ = 0;
    auVar102._0_11_ = auVar75;
    auVar76._1_12_ = SUB1512(auVar102 << 0x20,3);
    auVar76[0] = (char)(uVar2 >> 8);
    auVar9._8_6_ = 0;
    auVar9._0_8_ = uVar3;
    auVar9[0xe] = (char)(uVar3 >> 0x38);
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar3;
    auVar22[0xc] = (char)(uVar3 >> 0x30);
    auVar22._13_2_ = auVar9._13_2_;
    auVar33._8_4_ = 0;
    auVar33._0_8_ = uVar3;
    auVar33._12_3_ = auVar22._12_3_;
    auVar40._8_2_ = 0;
    auVar40._0_8_ = uVar3;
    auVar40[10] = (char)(uVar3 >> 0x28);
    auVar40._11_4_ = auVar33._11_4_;
    auVar51._8_2_ = 0;
    auVar51._0_8_ = uVar3;
    auVar51._10_5_ = auVar40._10_5_;
    auVar58[8] = (char)(uVar3 >> 0x20);
    auVar58._0_8_ = uVar3;
    auVar58._9_6_ = auVar51._9_6_;
    auVar77._7_8_ = 0;
    auVar77._0_7_ = auVar58._8_7_;
    Var78 = CONCAT81(SUB158(auVar77 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar103._9_6_ = 0;
    auVar103._0_9_ = Var78;
    auVar79._1_10_ = SUB1510(auVar103 << 0x30,5);
    auVar79[0] = (char)(uVar3 >> 0x10);
    auVar104._11_4_ = 0;
    auVar104._0_11_ = auVar79;
    auVar67[2] = (char)(uVar3 >> 8);
    auVar67._0_2_ = (ushort)uVar3;
    auVar67._3_12_ = SUB1512(auVar104 << 0x20,3);
    auVar10._8_6_ = 0;
    auVar10._0_8_ = uVar5;
    auVar10[0xe] = (char)(uVar5 >> 0x38);
    auVar23._8_4_ = 0;
    auVar23._0_8_ = uVar5;
    auVar23[0xc] = (char)(uVar5 >> 0x30);
    auVar23._13_2_ = auVar10._13_2_;
    auVar34._8_4_ = 0;
    auVar34._0_8_ = uVar5;
    auVar34._12_3_ = auVar23._12_3_;
    auVar41._8_2_ = 0;
    auVar41._0_8_ = uVar5;
    auVar41[10] = (char)(uVar5 >> 0x28);
    auVar41._11_4_ = auVar34._11_4_;
    auVar52._8_2_ = 0;
    auVar52._0_8_ = uVar5;
    auVar52._10_5_ = auVar41._10_5_;
    auVar59[8] = (char)(uVar5 >> 0x20);
    auVar59._0_8_ = uVar5;
    auVar59._9_6_ = auVar52._9_6_;
    auVar80._7_8_ = 0;
    auVar80._0_7_ = auVar59._8_7_;
    Var81 = CONCAT81(SUB158(auVar80 << 0x40,7),(char)(uVar5 >> 0x18));
    auVar105._9_6_ = 0;
    auVar105._0_9_ = Var81;
    auVar82._1_10_ = SUB1510(auVar105 << 0x30,5);
    auVar82[0] = (char)(uVar5 >> 0x10);
    auVar106._11_4_ = 0;
    auVar106._0_11_ = auVar82;
    auVar83._1_12_ = SUB1512(auVar106 << 0x20,3);
    auVar83[0] = (char)(uVar5 >> 8);
    auVar11._8_6_ = 0;
    auVar11._0_8_ = uVar4;
    auVar11[0xe] = (char)(uVar4 >> 0x38);
    auVar24._8_4_ = 0;
    auVar24._0_8_ = uVar4;
    auVar24[0xc] = (char)(uVar4 >> 0x30);
    auVar24._13_2_ = auVar11._13_2_;
    auVar35._8_4_ = 0;
    auVar35._0_8_ = uVar4;
    auVar35._12_3_ = auVar24._12_3_;
    auVar42._8_2_ = 0;
    auVar42._0_8_ = uVar4;
    auVar42[10] = (char)(uVar4 >> 0x28);
    auVar42._11_4_ = auVar35._11_4_;
    auVar53._8_2_ = 0;
    auVar53._0_8_ = uVar4;
    auVar53._10_5_ = auVar42._10_5_;
    auVar60[8] = (char)(uVar4 >> 0x20);
    auVar60._0_8_ = uVar4;
    auVar60._9_6_ = auVar53._9_6_;
    auVar84._7_8_ = 0;
    auVar84._0_7_ = auVar60._8_7_;
    Var85 = CONCAT81(SUB158(auVar84 << 0x40,7),(char)(uVar4 >> 0x18));
    auVar107._9_6_ = 0;
    auVar107._0_9_ = Var85;
    auVar86._1_10_ = SUB1510(auVar107 << 0x30,5);
    auVar86[0] = (char)(uVar4 >> 0x10);
    auVar108._11_4_ = 0;
    auVar108._0_11_ = auVar86;
    auVar68[2] = (char)(uVar4 >> 8);
    auVar68._0_2_ = (ushort)uVar4;
    auVar68._3_12_ = SUB1512(auVar108 << 0x20,3);
    sVar126 = (short)Var78 + (short)Var81;
    uVar136 = CONCAT22(auVar58._8_2_ + auVar59._8_2_,sVar126);
    sVar128 = auVar40._10_2_ + auVar41._10_2_;
    uVar109 = CONCAT24(sVar128,uVar136);
    sVar129 = auVar22._12_2_ + auVar23._12_2_;
    sVar130 = (auVar9._13_2_ >> 8) + (auVar10._13_2_ >> 8);
    sVar132 = (short)Var74 + (short)Var85;
    uVar125 = CONCAT22(auVar64._8_2_ + auVar60._8_2_,sVar132);
    sVar133 = auVar50._10_2_ + auVar42._10_2_;
    uVar110 = CONCAT24(sVar133,uVar125);
    sVar134 = auVar32._12_2_ + auVar24._12_2_;
    sVar135 = (auVar21._13_2_ >> 8) + (auVar11._13_2_ >> 8);
    auVar111._4_8_ = 0;
    auVar111._0_4_ = uVar136;
    auVar25._12_2_ = sVar126;
    auVar25._0_12_ = auVar111 << 0x30;
    uVar112 = CONCAT44(auVar25._10_4_,CONCAT22(auVar79._0_2_ + auVar82._0_2_,sVar126));
    auVar87._6_8_ = 0;
    auVar87._0_6_ = (uint6)((ulonglong)uVar112 >> 0x10);
    auVar113._4_8_ = 0;
    auVar113._0_4_ = uVar125;
    auVar12._12_2_ = sVar132;
    auVar12._0_12_ = auVar113 << 0x30;
    uVar114 = CONCAT44(auVar12._10_4_,CONCAT22(auVar75._0_2_ + auVar86._0_2_,sVar132));
    auVar88._6_8_ = 0;
    auVar88._0_6_ = (uint6)((ulonglong)uVar114 >> 0x10);
    uVar6 = (ulonglong)(CONCAT28(sVar130,CONCAT26(sVar129,uVar109)) >> 0x10);
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar6;
    auVar13._12_2_ = sVar130;
    auVar26._8_2_ = sVar129;
    auVar26._0_8_ = uVar6;
    auVar26._10_4_ = auVar13._10_4_;
    auVar89._6_8_ = 0;
    auVar89._0_6_ = auVar26._8_6_;
    uVar125 = (uint)((uint6)uVar109 >> 0x10);
    auVar43._4_2_ = sVar128;
    auVar43._0_4_ = uVar125;
    auVar43._6_8_ = SUB148(auVar89 << 0x40,6);
    uVar6 = (ulonglong)(CONCAT28(sVar135,CONCAT26(sVar134,uVar110)) >> 0x10);
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar6;
    auVar14._12_2_ = sVar135;
    auVar27._8_2_ = sVar134;
    auVar27._0_8_ = uVar6;
    auVar27._10_4_ = auVar14._10_4_;
    auVar90._6_8_ = 0;
    auVar90._0_6_ = auVar27._8_6_;
    uVar131 = (uint)((uint6)uVar110 >> 0x10);
    auVar44._4_2_ = sVar133;
    auVar44._0_4_ = uVar131;
    auVar44._6_8_ = SUB148(auVar90 << 0x40,6);
    uVar6 = *(ulonglong *)((in_RDX - 3) + in_R9);
    uVar7 = *(ulonglong *)(in_RDX + 3 + in_R9);
    auVar15._8_6_ = 0;
    auVar15._0_8_ = uVar6;
    auVar15[0xe] = (char)(uVar6 >> 0x38);
    auVar28._8_4_ = 0;
    auVar28._0_8_ = uVar6;
    auVar28[0xc] = (char)(uVar6 >> 0x30);
    auVar28._13_2_ = auVar15._13_2_;
    auVar36._8_4_ = 0;
    auVar36._0_8_ = uVar6;
    auVar36._12_3_ = auVar28._12_3_;
    auVar45._8_2_ = 0;
    auVar45._0_8_ = uVar6;
    auVar45[10] = (char)(uVar6 >> 0x28);
    auVar45._11_4_ = auVar36._11_4_;
    auVar54._8_2_ = 0;
    auVar54._0_8_ = uVar6;
    auVar54._10_5_ = auVar45._10_5_;
    auVar61[8] = (char)(uVar6 >> 0x20);
    auVar61._0_8_ = uVar6;
    auVar61._9_6_ = auVar54._9_6_;
    auVar91._7_8_ = 0;
    auVar91._0_7_ = auVar61._8_7_;
    Var74 = CONCAT81(SUB158(auVar91 << 0x40,7),(char)(uVar6 >> 0x18));
    auVar115._9_6_ = 0;
    auVar115._0_9_ = Var74;
    auVar92._1_10_ = SUB1510(auVar115 << 0x30,5);
    auVar92[0] = (char)(uVar6 >> 0x10);
    auVar116._11_4_ = 0;
    auVar116._0_11_ = auVar92;
    auVar69[2] = (char)(uVar6 >> 8);
    auVar69._0_2_ = (ushort)uVar6;
    auVar69._3_12_ = SUB1512(auVar116 << 0x20,3);
    auVar16._8_6_ = 0;
    auVar16._0_8_ = uVar7;
    auVar16[0xe] = (char)(uVar7 >> 0x38);
    auVar29._8_4_ = 0;
    auVar29._0_8_ = uVar7;
    auVar29[0xc] = (char)(uVar7 >> 0x30);
    auVar29._13_2_ = auVar16._13_2_;
    auVar37._8_4_ = 0;
    auVar37._0_8_ = uVar7;
    auVar37._12_3_ = auVar29._12_3_;
    auVar46._8_2_ = 0;
    auVar46._0_8_ = uVar7;
    auVar46[10] = (char)(uVar7 >> 0x28);
    auVar46._11_4_ = auVar37._11_4_;
    auVar55._8_2_ = 0;
    auVar55._0_8_ = uVar7;
    auVar55._10_5_ = auVar46._10_5_;
    auVar62[8] = (char)(uVar7 >> 0x20);
    auVar62._0_8_ = uVar7;
    auVar62._9_6_ = auVar55._9_6_;
    auVar93._7_8_ = 0;
    auVar93._0_7_ = auVar62._8_7_;
    Var78 = CONCAT81(SUB158(auVar93 << 0x40,7),(char)(uVar7 >> 0x18));
    auVar117._9_6_ = 0;
    auVar117._0_9_ = Var78;
    auVar94._1_10_ = SUB1510(auVar117 << 0x30,5);
    auVar94[0] = (char)(uVar7 >> 0x10);
    auVar118._11_4_ = 0;
    auVar118._0_11_ = auVar94;
    auVar70[2] = (char)(uVar7 >> 8);
    auVar70._0_2_ = (ushort)uVar7;
    auVar70._3_12_ = SUB1512(auVar118 << 0x20,3);
    sVar126 = (short)Var74 + (short)Var78;
    uVar136 = CONCAT22(auVar61._8_2_ + auVar62._8_2_,sVar126);
    sVar128 = auVar45._10_2_ + auVar46._10_2_;
    uVar109 = CONCAT24(sVar128,uVar136);
    sVar129 = auVar28._12_2_ + auVar29._12_2_;
    sVar130 = (auVar15._13_2_ >> 8) + (auVar16._13_2_ >> 8);
    auVar119._4_8_ = 0;
    auVar119._0_4_ = uVar136;
    auVar17._12_2_ = sVar126;
    auVar17._0_12_ = auVar119 << 0x30;
    uVar120 = CONCAT44(auVar17._10_4_,CONCAT22(auVar92._0_2_ + auVar94._0_2_,sVar126));
    auVar95._6_8_ = 0;
    auVar95._0_6_ = (uint6)((ulonglong)uVar120 >> 0x10);
    uVar8 = (ulonglong)(CONCAT28(sVar130,CONCAT26(sVar129,uVar109)) >> 0x10);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar8;
    auVar18._12_2_ = sVar130;
    auVar30._8_2_ = sVar129;
    auVar30._0_8_ = uVar8;
    auVar30._10_4_ = auVar18._10_4_;
    auVar96._6_8_ = 0;
    auVar96._0_6_ = auVar30._8_6_;
    uVar136 = (uint)((uint6)uVar109 >> 0x10);
    auVar47._4_2_ = sVar128;
    auVar47._0_4_ = uVar136;
    auVar47._6_8_ = SUB148(auVar96 << 0x40,6);
    uVar8 = *(ulonglong *)(in_RDX + in_R9);
    uVar127 = (undefined1)(uVar8 >> 0x38);
    auVar19._8_6_ = 0;
    auVar19._0_8_ = uVar8;
    auVar19[0xe] = uVar127;
    auVar31._8_4_ = 0;
    auVar31._0_8_ = uVar8;
    auVar31[0xc] = (char)(uVar8 >> 0x30);
    auVar31._13_2_ = auVar19._13_2_;
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar8;
    auVar38._12_3_ = auVar31._12_3_;
    auVar48._8_2_ = 0;
    auVar48._0_8_ = uVar8;
    auVar48[10] = (char)(uVar8 >> 0x28);
    auVar48._11_4_ = auVar38._11_4_;
    auVar56._8_2_ = 0;
    auVar56._0_8_ = uVar8;
    auVar56._10_5_ = auVar48._10_5_;
    auVar63[8] = (char)(uVar8 >> 0x20);
    auVar63._0_8_ = uVar8;
    auVar63._9_6_ = auVar56._9_6_;
    auVar97._7_8_ = 0;
    auVar97._0_7_ = auVar63._8_7_;
    Var74 = CONCAT81(SUB158(auVar97 << 0x40,7),(char)(uVar8 >> 0x18));
    auVar121._9_6_ = 0;
    auVar121._0_9_ = Var74;
    auVar98._1_10_ = SUB1510(auVar121 << 0x30,5);
    auVar98[0] = (char)(uVar8 >> 0x10);
    auVar122._11_4_ = 0;
    auVar122._0_11_ = auVar98;
    auVar71[2] = (char)(uVar8 >> 8);
    auVar71._0_2_ = (ushort)uVar8;
    auVar71._3_12_ = SUB1512(auVar122 << 0x20,3);
    auVar72._2_13_ = auVar71._2_13_;
    auVar72._0_2_ = (ushort)uVar8 & 0xff;
    auVar20._10_2_ = 0;
    auVar20._0_10_ = auVar72._0_10_;
    auVar20._12_2_ = (short)Var74;
    uVar123 = CONCAT42(auVar20._10_4_,auVar98._0_2_);
    auVar99._6_8_ = 0;
    auVar99._0_6_ = uVar123;
    auVar49._4_2_ = auVar71._2_2_;
    auVar49._0_4_ = auVar72._0_4_;
    auVar49._6_8_ = SUB148(auVar99 << 0x40,6);
    auVar65[0xc] = uVar127;
    auVar65._0_12_ = ZEXT812(0);
    uVar124 = CONCAT32(auVar65._10_3_,auVar31._12_2_);
    auVar100._5_8_ = 0;
    auVar100._0_5_ = uVar124;
    auVar66._4_2_ = auVar48._10_2_;
    auVar66._0_4_ = auVar63._8_4_;
    auVar66._6_7_ = SUB137(auVar100 << 0x40,6);
    pfVar1 = (float *)(in_R10 + in_RDX * 4);
    *pfVar1 = (float)(ushort)(((ushort)uVar3 & 0xff) + (ushort)(byte)uVar5) * param_2 +
              (float)(ushort)((ushort)(byte)uVar2 + ((ushort)uVar4 & 0xff)) * in_XMM2_Da +
              (float)(ushort)(((ushort)uVar6 & 0xff) + ((ushort)uVar7 & 0xff)) * param_4 +
              (float)(auVar72._0_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar87 << 0x40,6),auVar67._2_2_ + auVar83._0_2_) *
                param_2 + (float)(int)CONCAT82(SUB148(auVar88 << 0x40,6),
                                               auVar76._0_2_ + auVar68._2_2_) * in_XMM2_Da +
                (float)(int)CONCAT82(SUB148(auVar95 << 0x40,6),auVar69._2_2_ + auVar70._2_2_) *
                param_4 + (float)auVar49._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)(int)((ulonglong)uVar112 >> 0x10) * param_2 +
                (float)(int)((ulonglong)uVar114 >> 0x10) * in_XMM2_Da +
                (float)(int)((ulonglong)uVar120 >> 0x10) * param_4 +
                (float)(int)uVar123 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar25._10_4_ >> 0x10) * param_2 +
                (float)(auVar12._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(auVar17._10_4_ >> 0x10) * param_4 +
                (float)(auVar20._10_4_ >> 0x10) * in_XMM0_Da;
    pfVar1 = (float *)(in_R10 + 0x10 + in_RDX * 4);
    *pfVar1 = (float)(uVar125 & 0xffff) * param_2 + (float)(uVar131 & 0xffff) * in_XMM2_Da +
              (float)(uVar136 & 0xffff) * param_4 + (float)(auVar63._8_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)auVar43._4_4_ * param_2 + (float)auVar44._4_4_ * in_XMM2_Da +
                (float)auVar47._4_4_ * param_4 + (float)auVar66._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)auVar26._8_4_ * param_2 + (float)auVar27._8_4_ * in_XMM2_Da +
                (float)auVar30._8_4_ * param_4 + (float)(int)uVar124 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar13._10_4_ >> 0x10) * param_2 +
                (float)(auVar14._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(auVar18._10_4_ >> 0x10) * param_4 +
                (float)(uint3)(auVar65._10_3_ >> 0x10) * in_XMM0_Da;
    in_RDX = in_RDX + 8;
  } while (in_RDX < param_1);
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((uint)*(byte *)((param_1 - 9) + in_R9) + (uint)*(byte *)(param_1 + 9 + in_R9)) *
           param_2 + (float)((uint)*(byte *)((param_1 - 6) + in_R9) +
                            (uint)*(byte *)(param_1 + 6 + in_R9)) * in_XMM2_Da +
           (float)((uint)*(byte *)((param_1 - 3) + in_R9) + (uint)*(byte *)(param_1 + 3 + in_R9)) *
           param_4 + (float)*(byte *)(param_1 + in_R9) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

