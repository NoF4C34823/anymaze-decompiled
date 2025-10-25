
void FUN_14069c1c0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [14];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  ulonglong uVar25;
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [14];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [14];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [14];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [14];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [14];
  undefined1 auVar53 [15];
  undefined1 auVar54 [14];
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
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [13];
  undefined1 auVar70 [13];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  unkuint9 Var80;
  undefined1 auVar81 [11];
  undefined1 auVar82 [15];
  unkuint9 Var83;
  undefined1 auVar84 [11];
  uint uVar85;
  undefined1 auVar86 [14];
  undefined1 auVar87 [14];
  undefined1 auVar88 [15];
  undefined1 auVar89 [11];
  undefined1 auVar90 [15];
  undefined1 auVar91 [11];
  undefined1 auVar92 [14];
  undefined1 auVar93 [14];
  undefined1 auVar94 [15];
  undefined1 auVar95 [11];
  undefined1 auVar96 [15];
  undefined1 auVar97 [11];
  undefined1 auVar98 [14];
  undefined1 auVar99 [14];
  undefined1 auVar100 [15];
  undefined1 auVar101 [11];
  undefined1 auVar102 [14];
  undefined1 auVar103 [13];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined6 uVar108;
  undefined1 auVar109 [12];
  undefined8 uVar110;
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [12];
  undefined8 uVar116;
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [12];
  undefined8 uVar122;
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  uint6 uVar125;
  uint5 uVar126;
  ulonglong uVar127;
  ulonglong *puVar128;
  ulonglong uVar129;
  ulonglong uVar130;
  uint uVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar135;
  uint uVar136;
  uint uVar137;
  undefined1 uVar138;
  
  uVar25 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  if ((longlong)uVar25 < 1) {
    return;
  }
  if (7 < (longlong)uVar25) {
    uVar129 = param_2 & 0xf;
    if (uVar129 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14069c52a;
      uVar129 = 0x10 - uVar129 >> 2;
    }
    if ((longlong)(uVar129 + 8) <= (longlong)uVar25) {
      uVar127 = 0;
      uVar130 = uVar25 - (uVar25 - uVar129 & 7);
      if (uVar129 != 0) {
        do {
          *(float *)(param_2 + uVar127 * 4) =
               (float)((uint)*(byte *)((uVar127 - 9) + param_1) +
                      (uint)*(byte *)(uVar127 + 9 + param_1)) * fVar2 +
               (float)((uint)*(byte *)((uVar127 - 6) + param_1) +
                      (uint)*(byte *)(uVar127 + 6 + param_1)) * fVar3 +
               (float)((uint)*(byte *)((uVar127 - 3) + param_1) +
                      (uint)*(byte *)(uVar127 + 3 + param_1)) * fVar4 +
               (float)*(byte *)(uVar127 + param_1) * fVar5;
          uVar127 = uVar127 + 1;
        } while (uVar127 < uVar129);
      }
      puVar128 = (ulonglong *)(param_1 + uVar129);
      do {
        uVar127 = *(ulonglong *)((longlong)puVar128 + -9);
        uVar6 = *(ulonglong *)((longlong)puVar128 + 9);
        auVar12._8_6_ = 0;
        auVar12._0_8_ = uVar127;
        auVar12[0xe] = (char)(uVar127 >> 0x38);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar127;
        auVar26[0xc] = (char)(uVar127 >> 0x30);
        auVar26._13_2_ = auVar12._13_2_;
        auVar37._8_4_ = 0;
        auVar37._0_8_ = uVar127;
        auVar37._12_3_ = auVar26._12_3_;
        auVar44._8_2_ = 0;
        auVar44._0_8_ = uVar127;
        auVar44[10] = (char)(uVar127 >> 0x28);
        auVar44._11_4_ = auVar37._11_4_;
        auVar55._8_2_ = 0;
        auVar55._0_8_ = uVar127;
        auVar55._10_5_ = auVar44._10_5_;
        auVar62[8] = (char)(uVar127 >> 0x20);
        auVar62._0_8_ = uVar127;
        auVar62._9_6_ = auVar55._9_6_;
        auVar79._7_8_ = 0;
        auVar79._0_7_ = auVar62._8_7_;
        Var80 = CONCAT81(SUB158(auVar79 << 0x40,7),(char)(uVar127 >> 0x18));
        auVar104._9_6_ = 0;
        auVar104._0_9_ = Var80;
        auVar81._1_10_ = SUB1510(auVar104 << 0x30,5);
        auVar81[0] = (char)(uVar127 >> 0x10);
        auVar105._11_4_ = 0;
        auVar105._0_11_ = auVar81;
        auVar71[2] = (char)(uVar127 >> 8);
        auVar71._0_2_ = (ushort)uVar127;
        auVar71._3_12_ = SUB1512(auVar105 << 0x20,3);
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar6;
        auVar13[0xe] = (char)(uVar6 >> 0x38);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar6;
        auVar27[0xc] = (char)(uVar6 >> 0x30);
        auVar27._13_2_ = auVar13._13_2_;
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar6;
        auVar38._12_3_ = auVar27._12_3_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar6;
        auVar45[10] = (char)(uVar6 >> 0x28);
        auVar45._11_4_ = auVar38._11_4_;
        auVar56._8_2_ = 0;
        auVar56._0_8_ = uVar6;
        auVar56._10_5_ = auVar45._10_5_;
        auVar63[8] = (char)(uVar6 >> 0x20);
        auVar63._0_8_ = uVar6;
        auVar63._9_6_ = auVar56._9_6_;
        auVar82._7_8_ = 0;
        auVar82._0_7_ = auVar63._8_7_;
        Var83 = CONCAT81(SUB158(auVar82 << 0x40,7),(char)(uVar6 >> 0x18));
        auVar106._9_6_ = 0;
        auVar106._0_9_ = Var83;
        auVar84._1_10_ = SUB1510(auVar106 << 0x30,5);
        auVar84[0] = (char)(uVar6 >> 0x10);
        auVar107._11_4_ = 0;
        auVar107._0_11_ = auVar84;
        auVar72[2] = (char)(uVar6 >> 8);
        auVar72._0_2_ = (ushort)uVar6;
        auVar72._3_12_ = SUB1512(auVar107 << 0x20,3);
        sVar132 = (short)Var80 + (short)Var83;
        uVar85 = CONCAT22(auVar62._8_2_ + auVar63._8_2_,sVar132);
        sVar133 = auVar44._10_2_ + auVar45._10_2_;
        uVar108 = CONCAT24(sVar133,uVar85);
        sVar134 = auVar26._12_2_ + auVar27._12_2_;
        sVar135 = (auVar12._13_2_ >> 8) + (auVar13._13_2_ >> 8);
        auVar109._4_8_ = 0;
        auVar109._0_4_ = uVar85;
        auVar28._12_2_ = sVar132;
        auVar28._0_12_ = auVar109 << 0x30;
        uVar110 = CONCAT44(auVar28._10_4_,CONCAT22(auVar81._0_2_ + auVar84._0_2_,sVar132));
        auVar86._6_8_ = 0;
        auVar86._0_6_ = (uint6)((ulonglong)uVar110 >> 0x10);
        uVar7 = (ulonglong)(CONCAT28(sVar135,CONCAT26(sVar134,uVar108)) >> 0x10);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar7;
        auVar14._12_2_ = sVar135;
        auVar29._8_2_ = sVar134;
        auVar29._0_8_ = uVar7;
        auVar29._10_4_ = auVar14._10_4_;
        auVar87._6_8_ = 0;
        auVar87._0_6_ = auVar29._8_6_;
        uVar131 = (uint)((uint6)uVar108 >> 0x10);
        auVar46._4_2_ = sVar133;
        auVar46._0_4_ = uVar131;
        auVar46._6_8_ = SUB148(auVar87 << 0x40,6);
        uVar7 = *(ulonglong *)((longlong)puVar128 + -6);
        uVar8 = *(ulonglong *)((longlong)puVar128 + 6);
        auVar15._8_6_ = 0;
        auVar15._0_8_ = uVar7;
        auVar15[0xe] = (char)(uVar7 >> 0x38);
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar7;
        auVar30[0xc] = (char)(uVar7 >> 0x30);
        auVar30._13_2_ = auVar15._13_2_;
        auVar39._8_4_ = 0;
        auVar39._0_8_ = uVar7;
        auVar39._12_3_ = auVar30._12_3_;
        auVar47._8_2_ = 0;
        auVar47._0_8_ = uVar7;
        auVar47[10] = (char)(uVar7 >> 0x28);
        auVar47._11_4_ = auVar39._11_4_;
        auVar57._8_2_ = 0;
        auVar57._0_8_ = uVar7;
        auVar57._10_5_ = auVar47._10_5_;
        auVar64[8] = (char)(uVar7 >> 0x20);
        auVar64._0_8_ = uVar7;
        auVar64._9_6_ = auVar57._9_6_;
        auVar88._7_8_ = 0;
        auVar88._0_7_ = auVar64._8_7_;
        Var80 = CONCAT81(SUB158(auVar88 << 0x40,7),(char)(uVar7 >> 0x18));
        auVar111._9_6_ = 0;
        auVar111._0_9_ = Var80;
        auVar89._1_10_ = SUB1510(auVar111 << 0x30,5);
        auVar89[0] = (char)(uVar7 >> 0x10);
        auVar112._11_4_ = 0;
        auVar112._0_11_ = auVar89;
        auVar73[2] = (char)(uVar7 >> 8);
        auVar73._0_2_ = (ushort)uVar7;
        auVar73._3_12_ = SUB1512(auVar112 << 0x20,3);
        auVar16._8_6_ = 0;
        auVar16._0_8_ = uVar8;
        auVar16[0xe] = (char)(uVar8 >> 0x38);
        auVar31._8_4_ = 0;
        auVar31._0_8_ = uVar8;
        auVar31[0xc] = (char)(uVar8 >> 0x30);
        auVar31._13_2_ = auVar16._13_2_;
        auVar40._8_4_ = 0;
        auVar40._0_8_ = uVar8;
        auVar40._12_3_ = auVar31._12_3_;
        auVar48._8_2_ = 0;
        auVar48._0_8_ = uVar8;
        auVar48[10] = (char)(uVar8 >> 0x28);
        auVar48._11_4_ = auVar40._11_4_;
        auVar58._8_2_ = 0;
        auVar58._0_8_ = uVar8;
        auVar58._10_5_ = auVar48._10_5_;
        auVar65[8] = (char)(uVar8 >> 0x20);
        auVar65._0_8_ = uVar8;
        auVar65._9_6_ = auVar58._9_6_;
        auVar90._7_8_ = 0;
        auVar90._0_7_ = auVar65._8_7_;
        Var83 = CONCAT81(SUB158(auVar90 << 0x40,7),(char)(uVar8 >> 0x18));
        auVar113._9_6_ = 0;
        auVar113._0_9_ = Var83;
        auVar91._1_10_ = SUB1510(auVar113 << 0x30,5);
        auVar91[0] = (char)(uVar8 >> 0x10);
        auVar114._11_4_ = 0;
        auVar114._0_11_ = auVar91;
        auVar74[2] = (char)(uVar8 >> 8);
        auVar74._0_2_ = (ushort)uVar8;
        auVar74._3_12_ = SUB1512(auVar114 << 0x20,3);
        sVar132 = (short)Var80 + (short)Var83;
        uVar85 = CONCAT22(auVar64._8_2_ + auVar65._8_2_,sVar132);
        sVar133 = auVar47._10_2_ + auVar48._10_2_;
        uVar108 = CONCAT24(sVar133,uVar85);
        sVar134 = auVar30._12_2_ + auVar31._12_2_;
        sVar135 = (auVar15._13_2_ >> 8) + (auVar16._13_2_ >> 8);
        auVar115._4_8_ = 0;
        auVar115._0_4_ = uVar85;
        auVar17._12_2_ = sVar132;
        auVar17._0_12_ = auVar115 << 0x30;
        uVar116 = CONCAT44(auVar17._10_4_,CONCAT22(auVar89._0_2_ + auVar91._0_2_,sVar132));
        auVar92._6_8_ = 0;
        auVar92._0_6_ = (uint6)((ulonglong)uVar116 >> 0x10);
        uVar9 = (ulonglong)(CONCAT28(sVar135,CONCAT26(sVar134,uVar108)) >> 0x10);
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar9;
        auVar18._12_2_ = sVar135;
        auVar32._8_2_ = sVar134;
        auVar32._0_8_ = uVar9;
        auVar32._10_4_ = auVar18._10_4_;
        auVar93._6_8_ = 0;
        auVar93._0_6_ = auVar32._8_6_;
        uVar136 = (uint)((uint6)uVar108 >> 0x10);
        auVar49._4_2_ = sVar133;
        auVar49._0_4_ = uVar136;
        auVar49._6_8_ = SUB148(auVar93 << 0x40,6);
        uVar9 = *(ulonglong *)((longlong)puVar128 + -3);
        uVar10 = *(ulonglong *)((longlong)puVar128 + 3);
        auVar19._8_6_ = 0;
        auVar19._0_8_ = uVar9;
        auVar19[0xe] = (char)(uVar9 >> 0x38);
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar9;
        auVar33[0xc] = (char)(uVar9 >> 0x30);
        auVar33._13_2_ = auVar19._13_2_;
        auVar41._8_4_ = 0;
        auVar41._0_8_ = uVar9;
        auVar41._12_3_ = auVar33._12_3_;
        auVar50._8_2_ = 0;
        auVar50._0_8_ = uVar9;
        auVar50[10] = (char)(uVar9 >> 0x28);
        auVar50._11_4_ = auVar41._11_4_;
        auVar59._8_2_ = 0;
        auVar59._0_8_ = uVar9;
        auVar59._10_5_ = auVar50._10_5_;
        auVar66[8] = (char)(uVar9 >> 0x20);
        auVar66._0_8_ = uVar9;
        auVar66._9_6_ = auVar59._9_6_;
        auVar94._7_8_ = 0;
        auVar94._0_7_ = auVar66._8_7_;
        Var80 = CONCAT81(SUB158(auVar94 << 0x40,7),(char)(uVar9 >> 0x18));
        auVar117._9_6_ = 0;
        auVar117._0_9_ = Var80;
        auVar95._1_10_ = SUB1510(auVar117 << 0x30,5);
        auVar95[0] = (char)(uVar9 >> 0x10);
        auVar118._11_4_ = 0;
        auVar118._0_11_ = auVar95;
        auVar75[2] = (char)(uVar9 >> 8);
        auVar75._0_2_ = (ushort)uVar9;
        auVar75._3_12_ = SUB1512(auVar118 << 0x20,3);
        auVar20._8_6_ = 0;
        auVar20._0_8_ = uVar10;
        auVar20[0xe] = (char)(uVar10 >> 0x38);
        auVar34._8_4_ = 0;
        auVar34._0_8_ = uVar10;
        auVar34[0xc] = (char)(uVar10 >> 0x30);
        auVar34._13_2_ = auVar20._13_2_;
        auVar42._8_4_ = 0;
        auVar42._0_8_ = uVar10;
        auVar42._12_3_ = auVar34._12_3_;
        auVar51._8_2_ = 0;
        auVar51._0_8_ = uVar10;
        auVar51[10] = (char)(uVar10 >> 0x28);
        auVar51._11_4_ = auVar42._11_4_;
        auVar60._8_2_ = 0;
        auVar60._0_8_ = uVar10;
        auVar60._10_5_ = auVar51._10_5_;
        auVar67[8] = (char)(uVar10 >> 0x20);
        auVar67._0_8_ = uVar10;
        auVar67._9_6_ = auVar60._9_6_;
        auVar96._7_8_ = 0;
        auVar96._0_7_ = auVar67._8_7_;
        Var83 = CONCAT81(SUB158(auVar96 << 0x40,7),(char)(uVar10 >> 0x18));
        auVar119._9_6_ = 0;
        auVar119._0_9_ = Var83;
        auVar97._1_10_ = SUB1510(auVar119 << 0x30,5);
        auVar97[0] = (char)(uVar10 >> 0x10);
        auVar120._11_4_ = 0;
        auVar120._0_11_ = auVar97;
        auVar76[2] = (char)(uVar10 >> 8);
        auVar76._0_2_ = (ushort)uVar10;
        auVar76._3_12_ = SUB1512(auVar120 << 0x20,3);
        sVar132 = (short)Var80 + (short)Var83;
        uVar85 = CONCAT22(auVar66._8_2_ + auVar67._8_2_,sVar132);
        sVar133 = auVar50._10_2_ + auVar51._10_2_;
        uVar108 = CONCAT24(sVar133,uVar85);
        sVar134 = auVar33._12_2_ + auVar34._12_2_;
        sVar135 = (auVar19._13_2_ >> 8) + (auVar20._13_2_ >> 8);
        uVar11 = (ulonglong)(CONCAT28(sVar135,CONCAT26(sVar134,uVar108)) >> 0x10);
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar11;
        auVar21._12_2_ = sVar135;
        auVar35._8_2_ = sVar134;
        auVar35._0_8_ = uVar11;
        auVar35._10_4_ = auVar21._10_4_;
        auVar98._6_8_ = 0;
        auVar98._0_6_ = auVar35._8_6_;
        uVar137 = (uint)((uint6)uVar108 >> 0x10);
        auVar52._4_2_ = sVar133;
        auVar52._0_4_ = uVar137;
        auVar52._6_8_ = SUB148(auVar98 << 0x40,6);
        auVar121._4_8_ = 0;
        auVar121._0_4_ = uVar85;
        auVar22._12_2_ = sVar132;
        auVar22._0_12_ = auVar121 << 0x30;
        uVar122 = CONCAT44(auVar22._10_4_,CONCAT22(auVar95._0_2_ + auVar97._0_2_,sVar132));
        auVar99._6_8_ = 0;
        auVar99._0_6_ = (uint6)((ulonglong)uVar122 >> 0x10);
        uVar11 = *puVar128;
        puVar128 = puVar128 + 1;
        uVar138 = (undefined1)(uVar11 >> 0x38);
        auVar23._8_6_ = 0;
        auVar23._0_8_ = uVar11;
        auVar23[0xe] = uVar138;
        auVar36._8_4_ = 0;
        auVar36._0_8_ = uVar11;
        auVar36[0xc] = (char)(uVar11 >> 0x30);
        auVar36._13_2_ = auVar23._13_2_;
        auVar43._8_4_ = 0;
        auVar43._0_8_ = uVar11;
        auVar43._12_3_ = auVar36._12_3_;
        auVar53._8_2_ = 0;
        auVar53._0_8_ = uVar11;
        auVar53[10] = (char)(uVar11 >> 0x28);
        auVar53._11_4_ = auVar43._11_4_;
        auVar61._8_2_ = 0;
        auVar61._0_8_ = uVar11;
        auVar61._10_5_ = auVar53._10_5_;
        auVar68[8] = (char)(uVar11 >> 0x20);
        auVar68._0_8_ = uVar11;
        auVar68._9_6_ = auVar61._9_6_;
        auVar100._7_8_ = 0;
        auVar100._0_7_ = auVar68._8_7_;
        Var80 = CONCAT81(SUB158(auVar100 << 0x40,7),(char)(uVar11 >> 0x18));
        auVar123._9_6_ = 0;
        auVar123._0_9_ = Var80;
        auVar101._1_10_ = SUB1510(auVar123 << 0x30,5);
        auVar101[0] = (char)(uVar11 >> 0x10);
        auVar124._11_4_ = 0;
        auVar124._0_11_ = auVar101;
        auVar77[2] = (char)(uVar11 >> 8);
        auVar77._0_2_ = (ushort)uVar11;
        auVar77._3_12_ = SUB1512(auVar124 << 0x20,3);
        auVar78._2_13_ = auVar77._2_13_;
        auVar78._0_2_ = (ushort)uVar11 & 0xff;
        auVar24._10_2_ = 0;
        auVar24._0_10_ = auVar78._0_10_;
        auVar24._12_2_ = (short)Var80;
        uVar125 = CONCAT42(auVar24._10_4_,auVar101._0_2_);
        auVar102._6_8_ = 0;
        auVar102._0_6_ = uVar125;
        auVar54._4_2_ = auVar77._2_2_;
        auVar54._0_4_ = auVar78._0_4_;
        auVar54._6_8_ = SUB148(auVar102 << 0x40,6);
        auVar69[0xc] = uVar138;
        auVar69._0_12_ = ZEXT812(0);
        uVar126 = CONCAT32(auVar69._10_3_,auVar36._12_2_);
        auVar103._5_8_ = 0;
        auVar103._0_5_ = uVar126;
        auVar70._4_2_ = auVar53._10_2_;
        auVar70._0_4_ = auVar68._8_4_;
        auVar70._6_7_ = SUB137(auVar103 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar129 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar127 & 0xff) + ((ushort)uVar6 & 0xff)) * fVar2 +
                  (float)(ushort)(((ushort)uVar7 & 0xff) + ((ushort)uVar8 & 0xff)) * fVar3 +
                  (float)(ushort)(((ushort)uVar9 & 0xff) + ((ushort)uVar10 & 0xff)) * fVar4 +
                  (float)(auVar78._0_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar86 << 0x40,6),auVar71._2_2_ + auVar72._2_2_) *
                    fVar2 + (float)(int)CONCAT82(SUB148(auVar92 << 0x40,6),
                                                 auVar73._2_2_ + auVar74._2_2_) * fVar3 +
                    (float)(int)CONCAT82(SUB148(auVar99 << 0x40,6),auVar75._2_2_ + auVar76._2_2_) *
                    fVar4 + (float)auVar54._4_4_ * fVar5;
        pfVar1[2] = (float)(int)((ulonglong)uVar110 >> 0x10) * fVar2 +
                    (float)(int)((ulonglong)uVar116 >> 0x10) * fVar3 +
                    (float)(int)((ulonglong)uVar122 >> 0x10) * fVar4 + (float)(int)uVar125 * fVar5;
        pfVar1[3] = (float)(auVar28._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar17._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar22._10_4_ >> 0x10) * fVar4 +
                    (float)(auVar24._10_4_ >> 0x10) * fVar5;
        pfVar1 = (float *)(param_2 + 0x10 + uVar129 * 4);
        *pfVar1 = (float)(uVar131 & 0xffff) * fVar2 + (float)(uVar136 & 0xffff) * fVar3 +
                  (float)(uVar137 & 0xffff) * fVar4 + (float)(auVar68._8_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)auVar46._4_4_ * fVar2 + (float)auVar49._4_4_ * fVar3 +
                    (float)auVar52._4_4_ * fVar4 + (float)auVar70._4_4_ * fVar5;
        pfVar1[2] = (float)auVar29._8_4_ * fVar2 + (float)auVar32._8_4_ * fVar3 +
                    (float)auVar35._8_4_ * fVar4 + (float)(int)uVar126 * fVar5;
        pfVar1[3] = (float)(auVar14._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar18._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar21._10_4_ >> 0x10) * fVar4 +
                    (float)(uint3)(auVar69._10_3_ >> 0x10) * fVar5;
        uVar129 = uVar129 + 8;
      } while (uVar129 < uVar130);
      for (; uVar130 < uVar25; uVar130 = uVar130 + 1) {
        *(float *)(param_2 + uVar130 * 4) =
             (float)((uint)*(byte *)((uVar130 - 9) + param_1) +
                    (uint)*(byte *)(uVar130 + 9 + param_1)) * fVar2 +
             (float)((uint)*(byte *)((uVar130 - 6) + param_1) +
                    (uint)*(byte *)(uVar130 + 6 + param_1)) * fVar3 +
             (float)((uint)*(byte *)((uVar130 - 3) + param_1) +
                    (uint)*(byte *)(uVar130 + 3 + param_1)) * fVar4 +
             (float)*(byte *)(uVar130 + param_1) * fVar5;
      }
      return;
    }
  }
LAB_14069c52a:
  FUN_14069c47d(fVar5,0);
  return;
}

