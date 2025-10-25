
void FUN_1406bf33d(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

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
  undefined1 auVar11 [14];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [14];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [14];
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
  undefined1 auVar42 [14];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [14];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [14];
  undefined1 auVar49 [15];
  undefined1 auVar50 [14];
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
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  unkuint9 Var76;
  undefined1 auVar77 [11];
  undefined1 auVar78 [15];
  unkuint9 Var79;
  undefined1 auVar80 [11];
  uint uVar81;
  undefined1 auVar82 [14];
  undefined1 auVar83 [14];
  undefined1 auVar84 [15];
  undefined1 auVar85 [11];
  undefined1 auVar86 [15];
  undefined1 auVar87 [11];
  undefined1 auVar88 [14];
  undefined1 auVar89 [14];
  undefined1 auVar90 [15];
  undefined1 auVar91 [11];
  undefined1 auVar92 [15];
  undefined1 auVar93 [11];
  undefined1 auVar94 [14];
  undefined1 auVar95 [14];
  undefined1 auVar96 [15];
  undefined1 auVar97 [11];
  undefined1 auVar98 [14];
  undefined1 auVar99 [13];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined6 uVar104;
  undefined1 auVar105 [12];
  undefined8 uVar106;
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [12];
  undefined8 uVar112;
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [12];
  undefined8 uVar118;
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  uint6 uVar121;
  uint5 uVar122;
  ulonglong in_RAX;
  ulonglong *puVar123;
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  uint uVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  short sVar128;
  uint uVar129;
  uint uVar130;
  undefined1 uVar131;
  float unaff_XMM13_Da;
  
  do {
    *(float *)(in_R10 + in_RAX * 4) =
         (float)((uint)*(byte *)((in_RAX - 9) + param_4) + (uint)*(byte *)(in_RAX + 9 + param_4)) *
         param_2 + (float)((uint)*(byte *)((in_RAX - 6) + param_4) +
                          (uint)*(byte *)(in_RAX + 6 + param_4)) * in_XMM2_Da +
         (float)((uint)*(byte *)((in_RAX - 3) + param_4) + (uint)*(byte *)(in_RAX + 3 + param_4)) *
         unaff_XMM13_Da + (float)*(byte *)(in_RAX + param_4) * in_XMM0_Da;
    in_RAX = in_RAX + 1;
  } while (in_RAX < param_1);
  puVar123 = (ulonglong *)(param_4 + param_1);
  do {
    uVar2 = *(ulonglong *)((longlong)puVar123 + -9);
    uVar3 = *(ulonglong *)((longlong)puVar123 + 9);
    auVar9._8_6_ = 0;
    auVar9._0_8_ = uVar2;
    auVar9[0xe] = (char)(uVar2 >> 0x38);
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar2;
    auVar22[0xc] = (char)(uVar2 >> 0x30);
    auVar22._13_2_ = auVar9._13_2_;
    auVar33._8_4_ = 0;
    auVar33._0_8_ = uVar2;
    auVar33._12_3_ = auVar22._12_3_;
    auVar40._8_2_ = 0;
    auVar40._0_8_ = uVar2;
    auVar40[10] = (char)(uVar2 >> 0x28);
    auVar40._11_4_ = auVar33._11_4_;
    auVar51._8_2_ = 0;
    auVar51._0_8_ = uVar2;
    auVar51._10_5_ = auVar40._10_5_;
    auVar58[8] = (char)(uVar2 >> 0x20);
    auVar58._0_8_ = uVar2;
    auVar58._9_6_ = auVar51._9_6_;
    auVar75._7_8_ = 0;
    auVar75._0_7_ = auVar58._8_7_;
    Var76 = CONCAT81(SUB158(auVar75 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar100._9_6_ = 0;
    auVar100._0_9_ = Var76;
    auVar77._1_10_ = SUB1510(auVar100 << 0x30,5);
    auVar77[0] = (char)(uVar2 >> 0x10);
    auVar101._11_4_ = 0;
    auVar101._0_11_ = auVar77;
    auVar67[2] = (char)(uVar2 >> 8);
    auVar67._0_2_ = (ushort)uVar2;
    auVar67._3_12_ = SUB1512(auVar101 << 0x20,3);
    auVar10._8_6_ = 0;
    auVar10._0_8_ = uVar3;
    auVar10[0xe] = (char)(uVar3 >> 0x38);
    auVar23._8_4_ = 0;
    auVar23._0_8_ = uVar3;
    auVar23[0xc] = (char)(uVar3 >> 0x30);
    auVar23._13_2_ = auVar10._13_2_;
    auVar34._8_4_ = 0;
    auVar34._0_8_ = uVar3;
    auVar34._12_3_ = auVar23._12_3_;
    auVar41._8_2_ = 0;
    auVar41._0_8_ = uVar3;
    auVar41[10] = (char)(uVar3 >> 0x28);
    auVar41._11_4_ = auVar34._11_4_;
    auVar52._8_2_ = 0;
    auVar52._0_8_ = uVar3;
    auVar52._10_5_ = auVar41._10_5_;
    auVar59[8] = (char)(uVar3 >> 0x20);
    auVar59._0_8_ = uVar3;
    auVar59._9_6_ = auVar52._9_6_;
    auVar78._7_8_ = 0;
    auVar78._0_7_ = auVar59._8_7_;
    Var79 = CONCAT81(SUB158(auVar78 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar102._9_6_ = 0;
    auVar102._0_9_ = Var79;
    auVar80._1_10_ = SUB1510(auVar102 << 0x30,5);
    auVar80[0] = (char)(uVar3 >> 0x10);
    auVar103._11_4_ = 0;
    auVar103._0_11_ = auVar80;
    auVar68[2] = (char)(uVar3 >> 8);
    auVar68._0_2_ = (ushort)uVar3;
    auVar68._3_12_ = SUB1512(auVar103 << 0x20,3);
    sVar125 = (short)Var76 + (short)Var79;
    uVar81 = CONCAT22(auVar58._8_2_ + auVar59._8_2_,sVar125);
    sVar126 = auVar40._10_2_ + auVar41._10_2_;
    uVar104 = CONCAT24(sVar126,uVar81);
    sVar127 = auVar22._12_2_ + auVar23._12_2_;
    sVar128 = (auVar9._13_2_ >> 8) + (auVar10._13_2_ >> 8);
    auVar105._4_8_ = 0;
    auVar105._0_4_ = uVar81;
    auVar24._12_2_ = sVar125;
    auVar24._0_12_ = auVar105 << 0x30;
    uVar106 = CONCAT44(auVar24._10_4_,CONCAT22(auVar77._0_2_ + auVar80._0_2_,sVar125));
    auVar82._6_8_ = 0;
    auVar82._0_6_ = (uint6)((ulonglong)uVar106 >> 0x10);
    uVar4 = (ulonglong)(CONCAT28(sVar128,CONCAT26(sVar127,uVar104)) >> 0x10);
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar4;
    auVar11._12_2_ = sVar128;
    auVar25._8_2_ = sVar127;
    auVar25._0_8_ = uVar4;
    auVar25._10_4_ = auVar11._10_4_;
    auVar83._6_8_ = 0;
    auVar83._0_6_ = auVar25._8_6_;
    uVar124 = (uint)((uint6)uVar104 >> 0x10);
    auVar42._4_2_ = sVar126;
    auVar42._0_4_ = uVar124;
    auVar42._6_8_ = SUB148(auVar83 << 0x40,6);
    uVar4 = *(ulonglong *)((longlong)puVar123 + -6);
    uVar5 = *(ulonglong *)((longlong)puVar123 + 6);
    auVar12._8_6_ = 0;
    auVar12._0_8_ = uVar4;
    auVar12[0xe] = (char)(uVar4 >> 0x38);
    auVar26._8_4_ = 0;
    auVar26._0_8_ = uVar4;
    auVar26[0xc] = (char)(uVar4 >> 0x30);
    auVar26._13_2_ = auVar12._13_2_;
    auVar35._8_4_ = 0;
    auVar35._0_8_ = uVar4;
    auVar35._12_3_ = auVar26._12_3_;
    auVar43._8_2_ = 0;
    auVar43._0_8_ = uVar4;
    auVar43[10] = (char)(uVar4 >> 0x28);
    auVar43._11_4_ = auVar35._11_4_;
    auVar53._8_2_ = 0;
    auVar53._0_8_ = uVar4;
    auVar53._10_5_ = auVar43._10_5_;
    auVar60[8] = (char)(uVar4 >> 0x20);
    auVar60._0_8_ = uVar4;
    auVar60._9_6_ = auVar53._9_6_;
    auVar84._7_8_ = 0;
    auVar84._0_7_ = auVar60._8_7_;
    Var76 = CONCAT81(SUB158(auVar84 << 0x40,7),(char)(uVar4 >> 0x18));
    auVar107._9_6_ = 0;
    auVar107._0_9_ = Var76;
    auVar85._1_10_ = SUB1510(auVar107 << 0x30,5);
    auVar85[0] = (char)(uVar4 >> 0x10);
    auVar108._11_4_ = 0;
    auVar108._0_11_ = auVar85;
    auVar69[2] = (char)(uVar4 >> 8);
    auVar69._0_2_ = (ushort)uVar4;
    auVar69._3_12_ = SUB1512(auVar108 << 0x20,3);
    auVar13._8_6_ = 0;
    auVar13._0_8_ = uVar5;
    auVar13[0xe] = (char)(uVar5 >> 0x38);
    auVar27._8_4_ = 0;
    auVar27._0_8_ = uVar5;
    auVar27[0xc] = (char)(uVar5 >> 0x30);
    auVar27._13_2_ = auVar13._13_2_;
    auVar36._8_4_ = 0;
    auVar36._0_8_ = uVar5;
    auVar36._12_3_ = auVar27._12_3_;
    auVar44._8_2_ = 0;
    auVar44._0_8_ = uVar5;
    auVar44[10] = (char)(uVar5 >> 0x28);
    auVar44._11_4_ = auVar36._11_4_;
    auVar54._8_2_ = 0;
    auVar54._0_8_ = uVar5;
    auVar54._10_5_ = auVar44._10_5_;
    auVar61[8] = (char)(uVar5 >> 0x20);
    auVar61._0_8_ = uVar5;
    auVar61._9_6_ = auVar54._9_6_;
    auVar86._7_8_ = 0;
    auVar86._0_7_ = auVar61._8_7_;
    Var79 = CONCAT81(SUB158(auVar86 << 0x40,7),(char)(uVar5 >> 0x18));
    auVar109._9_6_ = 0;
    auVar109._0_9_ = Var79;
    auVar87._1_10_ = SUB1510(auVar109 << 0x30,5);
    auVar87[0] = (char)(uVar5 >> 0x10);
    auVar110._11_4_ = 0;
    auVar110._0_11_ = auVar87;
    auVar70[2] = (char)(uVar5 >> 8);
    auVar70._0_2_ = (ushort)uVar5;
    auVar70._3_12_ = SUB1512(auVar110 << 0x20,3);
    sVar125 = (short)Var76 + (short)Var79;
    uVar81 = CONCAT22(auVar60._8_2_ + auVar61._8_2_,sVar125);
    sVar126 = auVar43._10_2_ + auVar44._10_2_;
    uVar104 = CONCAT24(sVar126,uVar81);
    sVar127 = auVar26._12_2_ + auVar27._12_2_;
    sVar128 = (auVar12._13_2_ >> 8) + (auVar13._13_2_ >> 8);
    auVar111._4_8_ = 0;
    auVar111._0_4_ = uVar81;
    auVar14._12_2_ = sVar125;
    auVar14._0_12_ = auVar111 << 0x30;
    uVar112 = CONCAT44(auVar14._10_4_,CONCAT22(auVar85._0_2_ + auVar87._0_2_,sVar125));
    auVar88._6_8_ = 0;
    auVar88._0_6_ = (uint6)((ulonglong)uVar112 >> 0x10);
    uVar6 = (ulonglong)(CONCAT28(sVar128,CONCAT26(sVar127,uVar104)) >> 0x10);
    auVar15._8_4_ = 0;
    auVar15._0_8_ = uVar6;
    auVar15._12_2_ = sVar128;
    auVar28._8_2_ = sVar127;
    auVar28._0_8_ = uVar6;
    auVar28._10_4_ = auVar15._10_4_;
    auVar89._6_8_ = 0;
    auVar89._0_6_ = auVar28._8_6_;
    uVar129 = (uint)((uint6)uVar104 >> 0x10);
    auVar45._4_2_ = sVar126;
    auVar45._0_4_ = uVar129;
    auVar45._6_8_ = SUB148(auVar89 << 0x40,6);
    uVar6 = *(ulonglong *)((longlong)puVar123 + -3);
    uVar7 = *(ulonglong *)((longlong)puVar123 + 3);
    auVar16._8_6_ = 0;
    auVar16._0_8_ = uVar6;
    auVar16[0xe] = (char)(uVar6 >> 0x38);
    auVar29._8_4_ = 0;
    auVar29._0_8_ = uVar6;
    auVar29[0xc] = (char)(uVar6 >> 0x30);
    auVar29._13_2_ = auVar16._13_2_;
    auVar37._8_4_ = 0;
    auVar37._0_8_ = uVar6;
    auVar37._12_3_ = auVar29._12_3_;
    auVar46._8_2_ = 0;
    auVar46._0_8_ = uVar6;
    auVar46[10] = (char)(uVar6 >> 0x28);
    auVar46._11_4_ = auVar37._11_4_;
    auVar55._8_2_ = 0;
    auVar55._0_8_ = uVar6;
    auVar55._10_5_ = auVar46._10_5_;
    auVar62[8] = (char)(uVar6 >> 0x20);
    auVar62._0_8_ = uVar6;
    auVar62._9_6_ = auVar55._9_6_;
    auVar90._7_8_ = 0;
    auVar90._0_7_ = auVar62._8_7_;
    Var76 = CONCAT81(SUB158(auVar90 << 0x40,7),(char)(uVar6 >> 0x18));
    auVar113._9_6_ = 0;
    auVar113._0_9_ = Var76;
    auVar91._1_10_ = SUB1510(auVar113 << 0x30,5);
    auVar91[0] = (char)(uVar6 >> 0x10);
    auVar114._11_4_ = 0;
    auVar114._0_11_ = auVar91;
    auVar71[2] = (char)(uVar6 >> 8);
    auVar71._0_2_ = (ushort)uVar6;
    auVar71._3_12_ = SUB1512(auVar114 << 0x20,3);
    auVar17._8_6_ = 0;
    auVar17._0_8_ = uVar7;
    auVar17[0xe] = (char)(uVar7 >> 0x38);
    auVar30._8_4_ = 0;
    auVar30._0_8_ = uVar7;
    auVar30[0xc] = (char)(uVar7 >> 0x30);
    auVar30._13_2_ = auVar17._13_2_;
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar7;
    auVar38._12_3_ = auVar30._12_3_;
    auVar47._8_2_ = 0;
    auVar47._0_8_ = uVar7;
    auVar47[10] = (char)(uVar7 >> 0x28);
    auVar47._11_4_ = auVar38._11_4_;
    auVar56._8_2_ = 0;
    auVar56._0_8_ = uVar7;
    auVar56._10_5_ = auVar47._10_5_;
    auVar63[8] = (char)(uVar7 >> 0x20);
    auVar63._0_8_ = uVar7;
    auVar63._9_6_ = auVar56._9_6_;
    auVar92._7_8_ = 0;
    auVar92._0_7_ = auVar63._8_7_;
    Var79 = CONCAT81(SUB158(auVar92 << 0x40,7),(char)(uVar7 >> 0x18));
    auVar115._9_6_ = 0;
    auVar115._0_9_ = Var79;
    auVar93._1_10_ = SUB1510(auVar115 << 0x30,5);
    auVar93[0] = (char)(uVar7 >> 0x10);
    auVar116._11_4_ = 0;
    auVar116._0_11_ = auVar93;
    auVar72[2] = (char)(uVar7 >> 8);
    auVar72._0_2_ = (ushort)uVar7;
    auVar72._3_12_ = SUB1512(auVar116 << 0x20,3);
    sVar125 = (short)Var76 + (short)Var79;
    uVar81 = CONCAT22(auVar62._8_2_ + auVar63._8_2_,sVar125);
    sVar126 = auVar46._10_2_ + auVar47._10_2_;
    uVar104 = CONCAT24(sVar126,uVar81);
    sVar127 = auVar29._12_2_ + auVar30._12_2_;
    sVar128 = (auVar16._13_2_ >> 8) + (auVar17._13_2_ >> 8);
    uVar8 = (ulonglong)(CONCAT28(sVar128,CONCAT26(sVar127,uVar104)) >> 0x10);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar8;
    auVar18._12_2_ = sVar128;
    auVar31._8_2_ = sVar127;
    auVar31._0_8_ = uVar8;
    auVar31._10_4_ = auVar18._10_4_;
    auVar94._6_8_ = 0;
    auVar94._0_6_ = auVar31._8_6_;
    uVar130 = (uint)((uint6)uVar104 >> 0x10);
    auVar48._4_2_ = sVar126;
    auVar48._0_4_ = uVar130;
    auVar48._6_8_ = SUB148(auVar94 << 0x40,6);
    auVar117._4_8_ = 0;
    auVar117._0_4_ = uVar81;
    auVar19._12_2_ = sVar125;
    auVar19._0_12_ = auVar117 << 0x30;
    uVar118 = CONCAT44(auVar19._10_4_,CONCAT22(auVar91._0_2_ + auVar93._0_2_,sVar125));
    auVar95._6_8_ = 0;
    auVar95._0_6_ = (uint6)((ulonglong)uVar118 >> 0x10);
    uVar8 = *puVar123;
    puVar123 = puVar123 + 1;
    uVar131 = (undefined1)(uVar8 >> 0x38);
    auVar20._8_6_ = 0;
    auVar20._0_8_ = uVar8;
    auVar20[0xe] = uVar131;
    auVar32._8_4_ = 0;
    auVar32._0_8_ = uVar8;
    auVar32[0xc] = (char)(uVar8 >> 0x30);
    auVar32._13_2_ = auVar20._13_2_;
    auVar39._8_4_ = 0;
    auVar39._0_8_ = uVar8;
    auVar39._12_3_ = auVar32._12_3_;
    auVar49._8_2_ = 0;
    auVar49._0_8_ = uVar8;
    auVar49[10] = (char)(uVar8 >> 0x28);
    auVar49._11_4_ = auVar39._11_4_;
    auVar57._8_2_ = 0;
    auVar57._0_8_ = uVar8;
    auVar57._10_5_ = auVar49._10_5_;
    auVar64[8] = (char)(uVar8 >> 0x20);
    auVar64._0_8_ = uVar8;
    auVar64._9_6_ = auVar57._9_6_;
    auVar96._7_8_ = 0;
    auVar96._0_7_ = auVar64._8_7_;
    Var76 = CONCAT81(SUB158(auVar96 << 0x40,7),(char)(uVar8 >> 0x18));
    auVar119._9_6_ = 0;
    auVar119._0_9_ = Var76;
    auVar97._1_10_ = SUB1510(auVar119 << 0x30,5);
    auVar97[0] = (char)(uVar8 >> 0x10);
    auVar120._11_4_ = 0;
    auVar120._0_11_ = auVar97;
    auVar73[2] = (char)(uVar8 >> 8);
    auVar73._0_2_ = (ushort)uVar8;
    auVar73._3_12_ = SUB1512(auVar120 << 0x20,3);
    auVar74._2_13_ = auVar73._2_13_;
    auVar74._0_2_ = (ushort)uVar8 & 0xff;
    auVar21._10_2_ = 0;
    auVar21._0_10_ = auVar74._0_10_;
    auVar21._12_2_ = (short)Var76;
    uVar121 = CONCAT42(auVar21._10_4_,auVar97._0_2_);
    auVar98._6_8_ = 0;
    auVar98._0_6_ = uVar121;
    auVar50._4_2_ = auVar73._2_2_;
    auVar50._0_4_ = auVar74._0_4_;
    auVar50._6_8_ = SUB148(auVar98 << 0x40,6);
    auVar65[0xc] = uVar131;
    auVar65._0_12_ = ZEXT812(0);
    uVar122 = CONCAT32(auVar65._10_3_,auVar32._12_2_);
    auVar99._5_8_ = 0;
    auVar99._0_5_ = uVar122;
    auVar66._4_2_ = auVar49._10_2_;
    auVar66._0_4_ = auVar64._8_4_;
    auVar66._6_7_ = SUB137(auVar99 << 0x40,6);
    pfVar1 = (float *)(in_R10 + param_1 * 4);
    *pfVar1 = (float)(ushort)(((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff)) * param_2 +
              (float)(ushort)(((ushort)uVar4 & 0xff) + ((ushort)uVar5 & 0xff)) * in_XMM2_Da +
              (float)(ushort)(((ushort)uVar6 & 0xff) + ((ushort)uVar7 & 0xff)) * unaff_XMM13_Da +
              (float)(auVar74._0_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar82 << 0x40,6),auVar67._2_2_ + auVar68._2_2_) *
                param_2 + (float)(int)CONCAT82(SUB148(auVar88 << 0x40,6),
                                               auVar69._2_2_ + auVar70._2_2_) * in_XMM2_Da +
                (float)(int)CONCAT82(SUB148(auVar95 << 0x40,6),auVar71._2_2_ + auVar72._2_2_) *
                unaff_XMM13_Da + (float)auVar50._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)(int)((ulonglong)uVar106 >> 0x10) * param_2 +
                (float)(int)((ulonglong)uVar112 >> 0x10) * in_XMM2_Da +
                (float)(int)((ulonglong)uVar118 >> 0x10) * unaff_XMM13_Da +
                (float)(int)uVar121 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar24._10_4_ >> 0x10) * param_2 +
                (float)(auVar14._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(auVar19._10_4_ >> 0x10) * unaff_XMM13_Da +
                (float)(auVar21._10_4_ >> 0x10) * in_XMM0_Da;
    pfVar1 = (float *)(in_R10 + 0x10 + param_1 * 4);
    *pfVar1 = (float)(uVar124 & 0xffff) * param_2 + (float)(uVar129 & 0xffff) * in_XMM2_Da +
              (float)(uVar130 & 0xffff) * unaff_XMM13_Da +
              (float)(auVar64._8_4_ & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)auVar42._4_4_ * param_2 + (float)auVar45._4_4_ * in_XMM2_Da +
                (float)auVar48._4_4_ * unaff_XMM13_Da + (float)auVar66._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)auVar25._8_4_ * param_2 + (float)auVar28._8_4_ * in_XMM2_Da +
                (float)auVar31._8_4_ * unaff_XMM13_Da + (float)(int)uVar122 * in_XMM0_Da;
    pfVar1[3] = (float)(auVar11._10_4_ >> 0x10) * param_2 +
                (float)(auVar15._10_4_ >> 0x10) * in_XMM2_Da +
                (float)(auVar18._10_4_ >> 0x10) * unaff_XMM13_Da +
                (float)(uint3)(auVar65._10_3_ >> 0x10) * in_XMM0_Da;
    param_1 = param_1 + 8;
  } while (param_1 < in_RDX);
  if (in_RDX < param_3) {
    do {
      *(float *)(in_R10 + in_RDX * 4) =
           (float)((uint)*(byte *)((in_RDX - 9) + param_4) + (uint)*(byte *)(in_RDX + 9 + param_4))
           * param_2 +
           (float)((uint)*(byte *)((in_RDX - 6) + param_4) + (uint)*(byte *)(in_RDX + 6 + param_4))
           * in_XMM2_Da +
           (float)((uint)*(byte *)((in_RDX - 3) + param_4) + (uint)*(byte *)(in_RDX + 3 + param_4))
           * unaff_XMM13_Da + (float)*(byte *)(in_RDX + param_4) * in_XMM0_Da;
      in_RDX = in_RDX + 1;
    } while (in_RDX < param_3);
  }
  return;
}

