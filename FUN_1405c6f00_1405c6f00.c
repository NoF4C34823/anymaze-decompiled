
void FUN_1405c6f00(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [15];
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
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [15];
  undefined1 auVar53 [14];
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
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [13];
  undefined1 auVar69 [13];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  unkuint9 Var79;
  undefined1 auVar80 [11];
  undefined1 auVar81 [15];
  unkuint9 Var82;
  undefined1 auVar83 [11];
  undefined1 auVar84 [15];
  unkuint9 Var85;
  undefined1 auVar86 [11];
  undefined1 auVar87 [15];
  unkuint9 Var88;
  undefined1 auVar89 [11];
  undefined1 auVar90 [15];
  undefined1 auVar91 [11];
  undefined1 auVar92 [15];
  undefined1 auVar93 [11];
  uint uVar94;
  undefined1 auVar95 [14];
  undefined1 auVar96 [14];
  undefined1 auVar97 [14];
  undefined1 auVar98 [14];
  undefined1 auVar99 [14];
  undefined1 auVar100 [14];
  undefined1 auVar101 [15];
  undefined1 auVar102 [11];
  undefined1 auVar103 [14];
  undefined1 auVar104 [13];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined6 uVar113;
  undefined6 uVar114;
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined6 uVar119;
  undefined1 auVar120 [12];
  undefined8 uVar121;
  undefined1 auVar122 [12];
  undefined8 uVar123;
  undefined1 auVar124 [12];
  undefined8 uVar125;
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  uint6 uVar128;
  uint5 uVar129;
  ulonglong uVar130;
  ulonglong uVar131;
  ulonglong uVar132;
  uint uVar133;
  short sVar134;
  short sVar135;
  short sVar136;
  short sVar137;
  uint uVar138;
  short sVar139;
  short sVar140;
  short sVar141;
  short sVar142;
  undefined1 uVar143;
  uint uVar144;
  short sVar145;
  short sVar146;
  short sVar147;
  short sVar148;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar132 = param_2 & 0xf;
    if (uVar132 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1405c7271;
      uVar132 = 0x10 - uVar132 >> 2;
    }
    if ((longlong)(uVar132 + 8) <= (longlong)param_3) {
      uVar130 = 0;
      uVar131 = param_3 - (param_3 - uVar132 & 7);
      if (uVar132 != 0) {
        do {
          *(float *)(param_2 + uVar130 * 4) =
               (float)((uint)*(byte *)((uVar130 - 3) + param_1) +
                      (uint)*(byte *)(uVar130 + 3 + param_1)) * fVar2 +
               (float)((uint)*(byte *)((uVar130 - 2) + param_1) +
                      (uint)*(byte *)(uVar130 + 2 + param_1)) * fVar3 +
               (float)((uint)*(byte *)((uVar130 - 1) + param_1) +
                      (uint)*(byte *)(uVar130 + 1 + param_1)) * fVar4 +
               (float)*(byte *)(uVar130 + param_1) * fVar5;
          uVar130 = uVar130 + 1;
        } while (uVar130 < uVar132);
      }
      do {
        uVar130 = *(ulonglong *)(uVar132 + 3 + param_1);
        uVar6 = *(ulonglong *)(uVar132 + 1 + param_1);
        uVar7 = *(ulonglong *)((uVar132 - 1) + param_1);
        uVar8 = *(ulonglong *)((uVar132 - 3) + param_1);
        auVar12._8_6_ = 0;
        auVar12._0_8_ = uVar130;
        auVar12[0xe] = (char)(uVar130 >> 0x38);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar130;
        auVar26[0xc] = (char)(uVar130 >> 0x30);
        auVar26._13_2_ = auVar12._13_2_;
        auVar36._8_4_ = 0;
        auVar36._0_8_ = uVar130;
        auVar36._12_3_ = auVar26._12_3_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar130;
        auVar43[10] = (char)(uVar130 >> 0x28);
        auVar43._11_4_ = auVar36._11_4_;
        auVar54._8_2_ = 0;
        auVar54._0_8_ = uVar130;
        auVar54._10_5_ = auVar43._10_5_;
        auVar61[8] = (char)(uVar130 >> 0x20);
        auVar61._0_8_ = uVar130;
        auVar61._9_6_ = auVar54._9_6_;
        auVar78._7_8_ = 0;
        auVar78._0_7_ = auVar61._8_7_;
        Var79 = CONCAT81(SUB158(auVar78 << 0x40,7),(char)(uVar130 >> 0x18));
        auVar105._9_6_ = 0;
        auVar105._0_9_ = Var79;
        auVar80._1_10_ = SUB1510(auVar105 << 0x30,5);
        auVar80[0] = (char)(uVar130 >> 0x10);
        auVar106._11_4_ = 0;
        auVar106._0_11_ = auVar80;
        auVar70[2] = (char)(uVar130 >> 8);
        auVar70._0_2_ = (ushort)uVar130;
        auVar70._3_12_ = SUB1512(auVar106 << 0x20,3);
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar6;
        auVar13[0xe] = (char)(uVar6 >> 0x38);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar6;
        auVar27[0xc] = (char)(uVar6 >> 0x30);
        auVar27._13_2_ = auVar13._13_2_;
        auVar37._8_4_ = 0;
        auVar37._0_8_ = uVar6;
        auVar37._12_3_ = auVar27._12_3_;
        auVar44._8_2_ = 0;
        auVar44._0_8_ = uVar6;
        auVar44[10] = (char)(uVar6 >> 0x28);
        auVar44._11_4_ = auVar37._11_4_;
        auVar55._8_2_ = 0;
        auVar55._0_8_ = uVar6;
        auVar55._10_5_ = auVar44._10_5_;
        auVar62[8] = (char)(uVar6 >> 0x20);
        auVar62._0_8_ = uVar6;
        auVar62._9_6_ = auVar55._9_6_;
        auVar81._7_8_ = 0;
        auVar81._0_7_ = auVar62._8_7_;
        Var82 = CONCAT81(SUB158(auVar81 << 0x40,7),(char)(uVar6 >> 0x18));
        auVar107._9_6_ = 0;
        auVar107._0_9_ = Var82;
        auVar83._1_10_ = SUB1510(auVar107 << 0x30,5);
        auVar83[0] = (char)(uVar6 >> 0x10);
        auVar108._11_4_ = 0;
        auVar108._0_11_ = auVar83;
        auVar71[2] = (char)(uVar6 >> 8);
        auVar71._0_2_ = (ushort)uVar6;
        auVar71._3_12_ = SUB1512(auVar108 << 0x20,3);
        auVar14._8_6_ = 0;
        auVar14._0_8_ = uVar7;
        auVar14[0xe] = (char)(uVar7 >> 0x38);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar7;
        auVar28[0xc] = (char)(uVar7 >> 0x30);
        auVar28._13_2_ = auVar14._13_2_;
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar7;
        auVar38._12_3_ = auVar28._12_3_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar7;
        auVar45[10] = (char)(uVar7 >> 0x28);
        auVar45._11_4_ = auVar38._11_4_;
        auVar56._8_2_ = 0;
        auVar56._0_8_ = uVar7;
        auVar56._10_5_ = auVar45._10_5_;
        auVar63[8] = (char)(uVar7 >> 0x20);
        auVar63._0_8_ = uVar7;
        auVar63._9_6_ = auVar56._9_6_;
        auVar84._7_8_ = 0;
        auVar84._0_7_ = auVar63._8_7_;
        Var85 = CONCAT81(SUB158(auVar84 << 0x40,7),(char)(uVar7 >> 0x18));
        auVar109._9_6_ = 0;
        auVar109._0_9_ = Var85;
        auVar86._1_10_ = SUB1510(auVar109 << 0x30,5);
        auVar86[0] = (char)(uVar7 >> 0x10);
        auVar110._11_4_ = 0;
        auVar110._0_11_ = auVar86;
        auVar72[2] = (char)(uVar7 >> 8);
        auVar72._0_2_ = (ushort)uVar7;
        auVar72._3_12_ = SUB1512(auVar110 << 0x20,3);
        auVar15._8_6_ = 0;
        auVar15._0_8_ = uVar8;
        auVar15[0xe] = (char)(uVar8 >> 0x38);
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar8;
        auVar29[0xc] = (char)(uVar8 >> 0x30);
        auVar29._13_2_ = auVar15._13_2_;
        auVar39._8_4_ = 0;
        auVar39._0_8_ = uVar8;
        auVar39._12_3_ = auVar29._12_3_;
        auVar46._8_2_ = 0;
        auVar46._0_8_ = uVar8;
        auVar46[10] = (char)(uVar8 >> 0x28);
        auVar46._11_4_ = auVar39._11_4_;
        auVar57._8_2_ = 0;
        auVar57._0_8_ = uVar8;
        auVar57._10_5_ = auVar46._10_5_;
        auVar64[8] = (char)(uVar8 >> 0x20);
        auVar64._0_8_ = uVar8;
        auVar64._9_6_ = auVar57._9_6_;
        auVar87._7_8_ = 0;
        auVar87._0_7_ = auVar64._8_7_;
        Var88 = CONCAT81(SUB158(auVar87 << 0x40,7),(char)(uVar8 >> 0x18));
        auVar111._9_6_ = 0;
        auVar111._0_9_ = Var88;
        auVar89._1_10_ = SUB1510(auVar111 << 0x30,5);
        auVar89[0] = (char)(uVar8 >> 0x10);
        auVar112._11_4_ = 0;
        auVar112._0_11_ = auVar89;
        auVar73[2] = (char)(uVar8 >> 8);
        auVar73._0_2_ = (ushort)uVar8;
        auVar73._3_12_ = SUB1512(auVar112 << 0x20,3);
        sVar139 = (short)Var85 + (short)Var82;
        uVar138 = CONCAT22(auVar63._8_2_ + auVar62._8_2_,sVar139);
        sVar140 = auVar45._10_2_ + auVar44._10_2_;
        uVar113 = CONCAT24(sVar140,uVar138);
        sVar141 = auVar28._12_2_ + auVar27._12_2_;
        sVar142 = (auVar14._13_2_ >> 8) + (auVar13._13_2_ >> 8);
        uVar9 = *(ulonglong *)(uVar132 + 2 + param_1);
        sVar145 = (short)Var88 + (short)Var79;
        uVar133 = CONCAT22(auVar64._8_2_ + auVar61._8_2_,sVar145);
        sVar146 = auVar46._10_2_ + auVar43._10_2_;
        uVar114 = CONCAT24(sVar146,uVar133);
        sVar147 = auVar29._12_2_ + auVar26._12_2_;
        sVar148 = (auVar15._13_2_ >> 8) + (auVar12._13_2_ >> 8);
        uVar10 = *(ulonglong *)((uVar132 - 2) + param_1);
        auVar16._8_6_ = 0;
        auVar16._0_8_ = uVar9;
        auVar16[0xe] = (char)(uVar9 >> 0x38);
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar9;
        auVar30[0xc] = (char)(uVar9 >> 0x30);
        auVar30._13_2_ = auVar16._13_2_;
        auVar40._8_4_ = 0;
        auVar40._0_8_ = uVar9;
        auVar40._12_3_ = auVar30._12_3_;
        auVar47._8_2_ = 0;
        auVar47._0_8_ = uVar9;
        auVar47[10] = (char)(uVar9 >> 0x28);
        auVar47._11_4_ = auVar40._11_4_;
        auVar58._8_2_ = 0;
        auVar58._0_8_ = uVar9;
        auVar58._10_5_ = auVar47._10_5_;
        auVar65[8] = (char)(uVar9 >> 0x20);
        auVar65._0_8_ = uVar9;
        auVar65._9_6_ = auVar58._9_6_;
        auVar90._7_8_ = 0;
        auVar90._0_7_ = auVar65._8_7_;
        Var79 = CONCAT81(SUB158(auVar90 << 0x40,7),(char)(uVar9 >> 0x18));
        auVar115._9_6_ = 0;
        auVar115._0_9_ = Var79;
        auVar91._1_10_ = SUB1510(auVar115 << 0x30,5);
        auVar91[0] = (char)(uVar9 >> 0x10);
        auVar116._11_4_ = 0;
        auVar116._0_11_ = auVar91;
        auVar74[2] = (char)(uVar9 >> 8);
        auVar74._0_2_ = (ushort)uVar9;
        auVar74._3_12_ = SUB1512(auVar116 << 0x20,3);
        auVar17._8_6_ = 0;
        auVar17._0_8_ = uVar10;
        auVar17[0xe] = (char)(uVar10 >> 0x38);
        auVar31._8_4_ = 0;
        auVar31._0_8_ = uVar10;
        auVar31[0xc] = (char)(uVar10 >> 0x30);
        auVar31._13_2_ = auVar17._13_2_;
        auVar41._8_4_ = 0;
        auVar41._0_8_ = uVar10;
        auVar41._12_3_ = auVar31._12_3_;
        auVar48._8_2_ = 0;
        auVar48._0_8_ = uVar10;
        auVar48[10] = (char)(uVar10 >> 0x28);
        auVar48._11_4_ = auVar41._11_4_;
        auVar59._8_2_ = 0;
        auVar59._0_8_ = uVar10;
        auVar59._10_5_ = auVar48._10_5_;
        auVar66[8] = (char)(uVar10 >> 0x20);
        auVar66._0_8_ = uVar10;
        auVar66._9_6_ = auVar59._9_6_;
        auVar92._7_8_ = 0;
        auVar92._0_7_ = auVar66._8_7_;
        Var82 = CONCAT81(SUB158(auVar92 << 0x40,7),(char)(uVar10 >> 0x18));
        auVar117._9_6_ = 0;
        auVar117._0_9_ = Var82;
        auVar93._1_10_ = SUB1510(auVar117 << 0x30,5);
        auVar93[0] = (char)(uVar10 >> 0x10);
        auVar118._11_4_ = 0;
        auVar118._0_11_ = auVar93;
        auVar75[2] = (char)(uVar10 >> 8);
        auVar75._0_2_ = (ushort)uVar10;
        auVar75._3_12_ = SUB1512(auVar118 << 0x20,3);
        sVar134 = (short)Var82 + (short)Var79;
        uVar94 = CONCAT22(auVar66._8_2_ + auVar65._8_2_,sVar134);
        sVar135 = auVar48._10_2_ + auVar47._10_2_;
        uVar119 = CONCAT24(sVar135,uVar94);
        sVar136 = auVar31._12_2_ + auVar30._12_2_;
        sVar137 = (auVar17._13_2_ >> 8) + (auVar16._13_2_ >> 8);
        uVar11 = (ulonglong)(CONCAT28(sVar148,CONCAT26(sVar147,uVar114)) >> 0x10);
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar11;
        auVar18._12_2_ = sVar148;
        auVar32._8_2_ = sVar147;
        auVar32._0_8_ = uVar11;
        auVar32._10_4_ = auVar18._10_4_;
        auVar95._6_8_ = 0;
        auVar95._0_6_ = auVar32._8_6_;
        uVar144 = (uint)((uint6)uVar114 >> 0x10);
        auVar49._4_2_ = sVar146;
        auVar49._0_4_ = uVar144;
        auVar49._6_8_ = SUB148(auVar95 << 0x40,6);
        auVar120._4_8_ = 0;
        auVar120._0_4_ = uVar133;
        auVar19._12_2_ = sVar145;
        auVar19._0_12_ = auVar120 << 0x30;
        uVar121 = CONCAT44(auVar19._10_4_,CONCAT22(auVar89._0_2_ + auVar80._0_2_,sVar145));
        auVar96._6_8_ = 0;
        auVar96._0_6_ = (uint6)((ulonglong)uVar121 >> 0x10);
        auVar122._4_8_ = 0;
        auVar122._0_4_ = uVar94;
        auVar20._12_2_ = sVar134;
        auVar20._0_12_ = auVar122 << 0x30;
        uVar123 = CONCAT44(auVar20._10_4_,CONCAT22(auVar93._0_2_ + auVar91._0_2_,sVar134));
        auVar97._6_8_ = 0;
        auVar97._0_6_ = (uint6)((ulonglong)uVar123 >> 0x10);
        uVar11 = (ulonglong)(CONCAT28(sVar137,CONCAT26(sVar136,uVar119)) >> 0x10);
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar11;
        auVar21._12_2_ = sVar137;
        auVar33._8_2_ = sVar136;
        auVar33._0_8_ = uVar11;
        auVar33._10_4_ = auVar21._10_4_;
        auVar98._6_8_ = 0;
        auVar98._0_6_ = auVar33._8_6_;
        uVar133 = (uint)((uint6)uVar119 >> 0x10);
        auVar50._4_2_ = sVar135;
        auVar50._0_4_ = uVar133;
        auVar50._6_8_ = SUB148(auVar98 << 0x40,6);
        auVar124._4_8_ = 0;
        auVar124._0_4_ = uVar138;
        auVar22._12_2_ = sVar139;
        auVar22._0_12_ = auVar124 << 0x30;
        uVar125 = CONCAT44(auVar22._10_4_,CONCAT22(auVar86._0_2_ + auVar83._0_2_,sVar139));
        auVar99._6_8_ = 0;
        auVar99._0_6_ = (uint6)((ulonglong)uVar125 >> 0x10);
        uVar11 = (ulonglong)(CONCAT28(sVar142,CONCAT26(sVar141,uVar113)) >> 0x10);
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar11;
        auVar23._12_2_ = sVar142;
        auVar34._8_2_ = sVar141;
        auVar34._0_8_ = uVar11;
        auVar34._10_4_ = auVar23._10_4_;
        auVar100._6_8_ = 0;
        auVar100._0_6_ = auVar34._8_6_;
        uVar138 = (uint)((uint6)uVar113 >> 0x10);
        auVar51._4_2_ = sVar140;
        auVar51._0_4_ = uVar138;
        auVar51._6_8_ = SUB148(auVar100 << 0x40,6);
        uVar11 = *(ulonglong *)(uVar132 + param_1);
        uVar143 = (undefined1)(uVar11 >> 0x38);
        auVar24._8_6_ = 0;
        auVar24._0_8_ = uVar11;
        auVar24[0xe] = uVar143;
        auVar35._8_4_ = 0;
        auVar35._0_8_ = uVar11;
        auVar35[0xc] = (char)(uVar11 >> 0x30);
        auVar35._13_2_ = auVar24._13_2_;
        auVar42._8_4_ = 0;
        auVar42._0_8_ = uVar11;
        auVar42._12_3_ = auVar35._12_3_;
        auVar52._8_2_ = 0;
        auVar52._0_8_ = uVar11;
        auVar52[10] = (char)(uVar11 >> 0x28);
        auVar52._11_4_ = auVar42._11_4_;
        auVar60._8_2_ = 0;
        auVar60._0_8_ = uVar11;
        auVar60._10_5_ = auVar52._10_5_;
        auVar67[8] = (char)(uVar11 >> 0x20);
        auVar67._0_8_ = uVar11;
        auVar67._9_6_ = auVar60._9_6_;
        auVar101._7_8_ = 0;
        auVar101._0_7_ = auVar67._8_7_;
        Var79 = CONCAT81(SUB158(auVar101 << 0x40,7),(char)(uVar11 >> 0x18));
        auVar126._9_6_ = 0;
        auVar126._0_9_ = Var79;
        auVar102._1_10_ = SUB1510(auVar126 << 0x30,5);
        auVar102[0] = (char)(uVar11 >> 0x10);
        auVar127._11_4_ = 0;
        auVar127._0_11_ = auVar102;
        auVar76[2] = (char)(uVar11 >> 8);
        auVar76._0_2_ = (ushort)uVar11;
        auVar76._3_12_ = SUB1512(auVar127 << 0x20,3);
        auVar77._2_13_ = auVar76._2_13_;
        auVar77._0_2_ = (ushort)uVar11 & 0xff;
        auVar25._10_2_ = 0;
        auVar25._0_10_ = auVar77._0_10_;
        auVar25._12_2_ = (short)Var79;
        uVar128 = CONCAT42(auVar25._10_4_,auVar102._0_2_);
        auVar103._6_8_ = 0;
        auVar103._0_6_ = uVar128;
        auVar53._4_2_ = auVar76._2_2_;
        auVar53._0_4_ = auVar77._0_4_;
        auVar53._6_8_ = SUB148(auVar103 << 0x40,6);
        auVar68[0xc] = uVar143;
        auVar68._0_12_ = ZEXT812(0);
        uVar129 = CONCAT32(auVar68._10_3_,auVar35._12_2_);
        auVar104._5_8_ = 0;
        auVar104._0_5_ = uVar129;
        auVar69._4_2_ = auVar52._10_2_;
        auVar69._0_4_ = auVar67._8_4_;
        auVar69._6_7_ = SUB137(auVar104 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar132 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar8 & 0xff) + ((ushort)uVar130 & 0xff)) * fVar2 +
                  (float)(ushort)(((ushort)uVar10 & 0xff) + ((ushort)uVar9 & 0xff)) * fVar3 +
                  (float)(ushort)(((ushort)uVar7 & 0xff) + ((ushort)uVar6 & 0xff)) * fVar4 +
                  (float)(auVar77._0_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar96 << 0x40,6),auVar73._2_2_ + auVar70._2_2_) *
                    fVar2 + (float)(int)CONCAT82(SUB148(auVar97 << 0x40,6),
                                                 auVar75._2_2_ + auVar74._2_2_) * fVar3 +
                    (float)(int)CONCAT82(SUB148(auVar99 << 0x40,6),auVar72._2_2_ + auVar71._2_2_) *
                    fVar4 + (float)auVar53._4_4_ * fVar5;
        pfVar1[2] = (float)(int)((ulonglong)uVar121 >> 0x10) * fVar2 +
                    (float)(int)((ulonglong)uVar123 >> 0x10) * fVar3 +
                    (float)(int)((ulonglong)uVar125 >> 0x10) * fVar4 + (float)(int)uVar128 * fVar5;
        pfVar1[3] = (float)(auVar19._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar20._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar22._10_4_ >> 0x10) * fVar4 +
                    (float)(auVar25._10_4_ >> 0x10) * fVar5;
        pfVar1 = (float *)(param_2 + 0x10 + uVar132 * 4);
        *pfVar1 = (float)(uVar144 & 0xffff) * fVar2 + (float)(uVar133 & 0xffff) * fVar3 +
                  (float)(uVar138 & 0xffff) * fVar4 + (float)(auVar67._8_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)auVar49._4_4_ * fVar2 + (float)auVar50._4_4_ * fVar3 +
                    (float)auVar51._4_4_ * fVar4 + (float)auVar69._4_4_ * fVar5;
        pfVar1[2] = (float)auVar32._8_4_ * fVar2 + (float)auVar33._8_4_ * fVar3 +
                    (float)auVar34._8_4_ * fVar4 + (float)(int)uVar129 * fVar5;
        pfVar1[3] = (float)(auVar18._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar21._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar23._10_4_ >> 0x10) * fVar4 +
                    (float)(uint3)(auVar68._10_3_ >> 0x10) * fVar5;
        uVar132 = uVar132 + 8;
      } while (uVar132 < uVar131);
      for (; uVar131 < param_3; uVar131 = uVar131 + 1) {
        *(float *)(param_2 + uVar131 * 4) =
             (float)((uint)*(byte *)((uVar131 - 3) + param_1) +
                    (uint)*(byte *)(uVar131 + 3 + param_1)) * fVar2 +
             (float)((uint)*(byte *)((uVar131 - 2) + param_1) +
                    (uint)*(byte *)(uVar131 + 2 + param_1)) * fVar3 +
             (float)((uint)*(byte *)((uVar131 - 1) + param_1) +
                    (uint)*(byte *)(uVar131 + 1 + param_1)) * fVar4 +
             (float)*(byte *)(uVar131 + param_1) * fVar5;
      }
      return;
    }
  }
LAB_1405c7271:
  FUN_1405c71d2(0);
  return;
}

