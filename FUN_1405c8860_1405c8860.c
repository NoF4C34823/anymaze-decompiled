
void FUN_1405c8860(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

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
  ulonglong uVar12;
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
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
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
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
  unkuint9 Var78;
  undefined1 auVar79 [11];
  undefined1 auVar80 [13];
  undefined1 auVar81 [15];
  unkuint9 Var82;
  undefined1 auVar83 [11];
  undefined1 auVar84 [15];
  unkuint9 Var85;
  undefined1 auVar86 [11];
  undefined1 auVar87 [13];
  undefined1 auVar88 [15];
  unkuint9 Var89;
  undefined1 auVar90 [11];
  undefined1 auVar91 [14];
  undefined1 auVar92 [14];
  undefined1 auVar93 [14];
  undefined1 auVar94 [14];
  undefined1 auVar95 [15];
  undefined1 auVar96 [11];
  undefined1 auVar97 [15];
  undefined1 auVar98 [11];
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
  undefined1 auVar115 [12];
  undefined8 uVar116;
  undefined1 auVar117 [12];
  undefined8 uVar118;
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  undefined1 auVar123 [12];
  undefined8 uVar124;
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  uint6 uVar127;
  uint5 uVar128;
  ulonglong uVar129;
  ulonglong uVar130;
  ulonglong uVar131;
  uint uVar132;
  short sVar133;
  undefined1 uVar134;
  short sVar135;
  short sVar136;
  short sVar137;
  uint uVar138;
  short sVar139;
  short sVar140;
  short sVar141;
  short sVar142;
  uint uVar143;
  
  uVar12 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  if ((longlong)uVar12 < 1) {
    return;
  }
  if (7 < (longlong)uVar12) {
    uVar131 = param_2 & 0xf;
    if (uVar131 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1405c8bd6;
      uVar131 = 0x10 - uVar131 >> 2;
    }
    if ((longlong)(uVar131 + 8) <= (longlong)uVar12) {
      uVar129 = 0;
      uVar130 = uVar12 - (uVar12 - uVar131 & 7);
      if (uVar131 != 0) {
        do {
          *(float *)(param_2 + uVar129 * 4) =
               (float)((uint)*(byte *)((uVar129 - 9) + param_1) +
                      (uint)*(byte *)(uVar129 + 9 + param_1)) * fVar2 +
               (float)((uint)*(byte *)((uVar129 - 6) + param_1) +
                      (uint)*(byte *)(uVar129 + 6 + param_1)) * fVar3 +
               (float)((uint)*(byte *)((uVar129 - 3) + param_1) +
                      (uint)*(byte *)(uVar129 + 3 + param_1)) * fVar4 +
               (float)*(byte *)(uVar129 + param_1) * fVar5;
          uVar129 = uVar129 + 1;
        } while (uVar129 < uVar131);
      }
      do {
        uVar129 = *(ulonglong *)((uVar131 - 6) + param_1);
        uVar6 = *(ulonglong *)((uVar131 - 9) + param_1);
        uVar7 = *(ulonglong *)(uVar131 + 6 + param_1);
        uVar8 = *(ulonglong *)(param_1 + 9 + uVar131);
        auVar25._8_6_ = 0;
        auVar25._0_8_ = uVar129;
        auVar25[0xe] = (char)(uVar129 >> 0x38);
        auVar36._8_4_ = 0;
        auVar36._0_8_ = uVar129;
        auVar36[0xc] = (char)(uVar129 >> 0x30);
        auVar36._13_2_ = auVar25._13_2_;
        auVar43._8_4_ = 0;
        auVar43._0_8_ = uVar129;
        auVar43._12_3_ = auVar36._12_3_;
        auVar54._8_2_ = 0;
        auVar54._0_8_ = uVar129;
        auVar54[10] = (char)(uVar129 >> 0x28);
        auVar54._11_4_ = auVar43._11_4_;
        auVar61._8_2_ = 0;
        auVar61._0_8_ = uVar129;
        auVar61._10_5_ = auVar54._10_5_;
        auVar68[8] = (char)(uVar129 >> 0x20);
        auVar68._0_8_ = uVar129;
        auVar68._9_6_ = auVar61._9_6_;
        auVar77._7_8_ = 0;
        auVar77._0_7_ = auVar68._8_7_;
        Var78 = CONCAT81(SUB158(auVar77 << 0x40,7),(char)(uVar129 >> 0x18));
        auVar105._9_6_ = 0;
        auVar105._0_9_ = Var78;
        auVar79._1_10_ = SUB1510(auVar105 << 0x30,5);
        auVar79[0] = (char)(uVar129 >> 0x10);
        auVar106._11_4_ = 0;
        auVar106._0_11_ = auVar79;
        auVar80._1_12_ = SUB1512(auVar106 << 0x20,3);
        auVar80[0] = (char)(uVar129 >> 8);
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar6;
        auVar13[0xe] = (char)(uVar6 >> 0x38);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar6;
        auVar26[0xc] = (char)(uVar6 >> 0x30);
        auVar26._13_2_ = auVar13._13_2_;
        auVar37._8_4_ = 0;
        auVar37._0_8_ = uVar6;
        auVar37._12_3_ = auVar26._12_3_;
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
        auVar14._0_8_ = uVar8;
        auVar14[0xe] = (char)(uVar8 >> 0x38);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar8;
        auVar27[0xc] = (char)(uVar8 >> 0x30);
        auVar27._13_2_ = auVar14._13_2_;
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar8;
        auVar38._12_3_ = auVar27._12_3_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar8;
        auVar45[10] = (char)(uVar8 >> 0x28);
        auVar45._11_4_ = auVar38._11_4_;
        auVar56._8_2_ = 0;
        auVar56._0_8_ = uVar8;
        auVar56._10_5_ = auVar45._10_5_;
        auVar63[8] = (char)(uVar8 >> 0x20);
        auVar63._0_8_ = uVar8;
        auVar63._9_6_ = auVar56._9_6_;
        auVar84._7_8_ = 0;
        auVar84._0_7_ = auVar63._8_7_;
        Var85 = CONCAT81(SUB158(auVar84 << 0x40,7),(char)(uVar8 >> 0x18));
        auVar109._9_6_ = 0;
        auVar109._0_9_ = Var85;
        auVar86._1_10_ = SUB1510(auVar109 << 0x30,5);
        auVar86[0] = (char)(uVar8 >> 0x10);
        auVar110._11_4_ = 0;
        auVar110._0_11_ = auVar86;
        auVar87._1_12_ = SUB1512(auVar110 << 0x20,3);
        auVar87[0] = (char)(uVar8 >> 8);
        auVar15._8_6_ = 0;
        auVar15._0_8_ = uVar7;
        auVar15[0xe] = (char)(uVar7 >> 0x38);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar7;
        auVar28[0xc] = (char)(uVar7 >> 0x30);
        auVar28._13_2_ = auVar15._13_2_;
        auVar39._8_4_ = 0;
        auVar39._0_8_ = uVar7;
        auVar39._12_3_ = auVar28._12_3_;
        auVar46._8_2_ = 0;
        auVar46._0_8_ = uVar7;
        auVar46[10] = (char)(uVar7 >> 0x28);
        auVar46._11_4_ = auVar39._11_4_;
        auVar57._8_2_ = 0;
        auVar57._0_8_ = uVar7;
        auVar57._10_5_ = auVar46._10_5_;
        auVar64[8] = (char)(uVar7 >> 0x20);
        auVar64._0_8_ = uVar7;
        auVar64._9_6_ = auVar57._9_6_;
        auVar88._7_8_ = 0;
        auVar88._0_7_ = auVar64._8_7_;
        Var89 = CONCAT81(SUB158(auVar88 << 0x40,7),(char)(uVar7 >> 0x18));
        auVar111._9_6_ = 0;
        auVar111._0_9_ = Var89;
        auVar90._1_10_ = SUB1510(auVar111 << 0x30,5);
        auVar90[0] = (char)(uVar7 >> 0x10);
        auVar112._11_4_ = 0;
        auVar112._0_11_ = auVar90;
        auVar72[2] = (char)(uVar7 >> 8);
        auVar72._0_2_ = (ushort)uVar7;
        auVar72._3_12_ = SUB1512(auVar112 << 0x20,3);
        sVar133 = (short)Var82 + (short)Var85;
        uVar143 = CONCAT22(auVar62._8_2_ + auVar63._8_2_,sVar133);
        sVar135 = auVar44._10_2_ + auVar45._10_2_;
        uVar113 = CONCAT24(sVar135,uVar143);
        sVar136 = auVar26._12_2_ + auVar27._12_2_;
        sVar137 = (auVar13._13_2_ >> 8) + (auVar14._13_2_ >> 8);
        sVar139 = (short)Var78 + (short)Var89;
        uVar132 = CONCAT22(auVar68._8_2_ + auVar64._8_2_,sVar139);
        sVar140 = auVar54._10_2_ + auVar46._10_2_;
        uVar114 = CONCAT24(sVar140,uVar132);
        sVar141 = auVar36._12_2_ + auVar28._12_2_;
        sVar142 = (auVar25._13_2_ >> 8) + (auVar15._13_2_ >> 8);
        auVar115._4_8_ = 0;
        auVar115._0_4_ = uVar143;
        auVar29._12_2_ = sVar133;
        auVar29._0_12_ = auVar115 << 0x30;
        uVar116 = CONCAT44(auVar29._10_4_,CONCAT22(auVar83._0_2_ + auVar86._0_2_,sVar133));
        auVar91._6_8_ = 0;
        auVar91._0_6_ = (uint6)((ulonglong)uVar116 >> 0x10);
        auVar117._4_8_ = 0;
        auVar117._0_4_ = uVar132;
        auVar16._12_2_ = sVar139;
        auVar16._0_12_ = auVar117 << 0x30;
        uVar118 = CONCAT44(auVar16._10_4_,CONCAT22(auVar79._0_2_ + auVar90._0_2_,sVar139));
        auVar92._6_8_ = 0;
        auVar92._0_6_ = (uint6)((ulonglong)uVar118 >> 0x10);
        uVar9 = (ulonglong)(CONCAT28(sVar137,CONCAT26(sVar136,uVar113)) >> 0x10);
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar9;
        auVar17._12_2_ = sVar137;
        auVar30._8_2_ = sVar136;
        auVar30._0_8_ = uVar9;
        auVar30._10_4_ = auVar17._10_4_;
        auVar93._6_8_ = 0;
        auVar93._0_6_ = auVar30._8_6_;
        uVar132 = (uint)((uint6)uVar113 >> 0x10);
        auVar47._4_2_ = sVar135;
        auVar47._0_4_ = uVar132;
        auVar47._6_8_ = SUB148(auVar93 << 0x40,6);
        uVar9 = (ulonglong)(CONCAT28(sVar142,CONCAT26(sVar141,uVar114)) >> 0x10);
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar9;
        auVar18._12_2_ = sVar142;
        auVar31._8_2_ = sVar141;
        auVar31._0_8_ = uVar9;
        auVar31._10_4_ = auVar18._10_4_;
        auVar94._6_8_ = 0;
        auVar94._0_6_ = auVar31._8_6_;
        uVar138 = (uint)((uint6)uVar114 >> 0x10);
        auVar48._4_2_ = sVar140;
        auVar48._0_4_ = uVar138;
        auVar48._6_8_ = SUB148(auVar94 << 0x40,6);
        uVar9 = *(ulonglong *)((uVar131 - 3) + param_1);
        uVar10 = *(ulonglong *)(uVar131 + 3 + param_1);
        auVar19._8_6_ = 0;
        auVar19._0_8_ = uVar9;
        auVar19[0xe] = (char)(uVar9 >> 0x38);
        auVar32._8_4_ = 0;
        auVar32._0_8_ = uVar9;
        auVar32[0xc] = (char)(uVar9 >> 0x30);
        auVar32._13_2_ = auVar19._13_2_;
        auVar40._8_4_ = 0;
        auVar40._0_8_ = uVar9;
        auVar40._12_3_ = auVar32._12_3_;
        auVar49._8_2_ = 0;
        auVar49._0_8_ = uVar9;
        auVar49[10] = (char)(uVar9 >> 0x28);
        auVar49._11_4_ = auVar40._11_4_;
        auVar58._8_2_ = 0;
        auVar58._0_8_ = uVar9;
        auVar58._10_5_ = auVar49._10_5_;
        auVar65[8] = (char)(uVar9 >> 0x20);
        auVar65._0_8_ = uVar9;
        auVar65._9_6_ = auVar58._9_6_;
        auVar95._7_8_ = 0;
        auVar95._0_7_ = auVar65._8_7_;
        Var78 = CONCAT81(SUB158(auVar95 << 0x40,7),(char)(uVar9 >> 0x18));
        auVar119._9_6_ = 0;
        auVar119._0_9_ = Var78;
        auVar96._1_10_ = SUB1510(auVar119 << 0x30,5);
        auVar96[0] = (char)(uVar9 >> 0x10);
        auVar120._11_4_ = 0;
        auVar120._0_11_ = auVar96;
        auVar73[2] = (char)(uVar9 >> 8);
        auVar73._0_2_ = (ushort)uVar9;
        auVar73._3_12_ = SUB1512(auVar120 << 0x20,3);
        auVar20._8_6_ = 0;
        auVar20._0_8_ = uVar10;
        auVar20[0xe] = (char)(uVar10 >> 0x38);
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar10;
        auVar33[0xc] = (char)(uVar10 >> 0x30);
        auVar33._13_2_ = auVar20._13_2_;
        auVar41._8_4_ = 0;
        auVar41._0_8_ = uVar10;
        auVar41._12_3_ = auVar33._12_3_;
        auVar50._8_2_ = 0;
        auVar50._0_8_ = uVar10;
        auVar50[10] = (char)(uVar10 >> 0x28);
        auVar50._11_4_ = auVar41._11_4_;
        auVar59._8_2_ = 0;
        auVar59._0_8_ = uVar10;
        auVar59._10_5_ = auVar50._10_5_;
        auVar66[8] = (char)(uVar10 >> 0x20);
        auVar66._0_8_ = uVar10;
        auVar66._9_6_ = auVar59._9_6_;
        auVar97._7_8_ = 0;
        auVar97._0_7_ = auVar66._8_7_;
        Var82 = CONCAT81(SUB158(auVar97 << 0x40,7),(char)(uVar10 >> 0x18));
        auVar121._9_6_ = 0;
        auVar121._0_9_ = Var82;
        auVar98._1_10_ = SUB1510(auVar121 << 0x30,5);
        auVar98[0] = (char)(uVar10 >> 0x10);
        auVar122._11_4_ = 0;
        auVar122._0_11_ = auVar98;
        auVar74[2] = (char)(uVar10 >> 8);
        auVar74._0_2_ = (ushort)uVar10;
        auVar74._3_12_ = SUB1512(auVar122 << 0x20,3);
        sVar133 = (short)Var78 + (short)Var82;
        uVar143 = CONCAT22(auVar65._8_2_ + auVar66._8_2_,sVar133);
        sVar135 = auVar49._10_2_ + auVar50._10_2_;
        uVar113 = CONCAT24(sVar135,uVar143);
        sVar136 = auVar32._12_2_ + auVar33._12_2_;
        sVar137 = (auVar19._13_2_ >> 8) + (auVar20._13_2_ >> 8);
        auVar123._4_8_ = 0;
        auVar123._0_4_ = uVar143;
        auVar21._12_2_ = sVar133;
        auVar21._0_12_ = auVar123 << 0x30;
        uVar124 = CONCAT44(auVar21._10_4_,CONCAT22(auVar96._0_2_ + auVar98._0_2_,sVar133));
        auVar99._6_8_ = 0;
        auVar99._0_6_ = (uint6)((ulonglong)uVar124 >> 0x10);
        uVar11 = (ulonglong)(CONCAT28(sVar137,CONCAT26(sVar136,uVar113)) >> 0x10);
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar11;
        auVar22._12_2_ = sVar137;
        auVar34._8_2_ = sVar136;
        auVar34._0_8_ = uVar11;
        auVar34._10_4_ = auVar22._10_4_;
        auVar100._6_8_ = 0;
        auVar100._0_6_ = auVar34._8_6_;
        uVar143 = (uint)((uint6)uVar113 >> 0x10);
        auVar51._4_2_ = sVar135;
        auVar51._0_4_ = uVar143;
        auVar51._6_8_ = SUB148(auVar100 << 0x40,6);
        uVar11 = *(ulonglong *)(uVar131 + param_1);
        uVar134 = (undefined1)(uVar11 >> 0x38);
        auVar23._8_6_ = 0;
        auVar23._0_8_ = uVar11;
        auVar23[0xe] = uVar134;
        auVar35._8_4_ = 0;
        auVar35._0_8_ = uVar11;
        auVar35[0xc] = (char)(uVar11 >> 0x30);
        auVar35._13_2_ = auVar23._13_2_;
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
        Var78 = CONCAT81(SUB158(auVar101 << 0x40,7),(char)(uVar11 >> 0x18));
        auVar125._9_6_ = 0;
        auVar125._0_9_ = Var78;
        auVar102._1_10_ = SUB1510(auVar125 << 0x30,5);
        auVar102[0] = (char)(uVar11 >> 0x10);
        auVar126._11_4_ = 0;
        auVar126._0_11_ = auVar102;
        auVar75[2] = (char)(uVar11 >> 8);
        auVar75._0_2_ = (ushort)uVar11;
        auVar75._3_12_ = SUB1512(auVar126 << 0x20,3);
        auVar76._2_13_ = auVar75._2_13_;
        auVar76._0_2_ = (ushort)uVar11 & 0xff;
        auVar24._10_2_ = 0;
        auVar24._0_10_ = auVar76._0_10_;
        auVar24._12_2_ = (short)Var78;
        uVar127 = CONCAT42(auVar24._10_4_,auVar102._0_2_);
        auVar103._6_8_ = 0;
        auVar103._0_6_ = uVar127;
        auVar53._4_2_ = auVar75._2_2_;
        auVar53._0_4_ = auVar76._0_4_;
        auVar53._6_8_ = SUB148(auVar103 << 0x40,6);
        auVar69[0xc] = uVar134;
        auVar69._0_12_ = ZEXT812(0);
        uVar128 = CONCAT32(auVar69._10_3_,auVar35._12_2_);
        auVar104._5_8_ = 0;
        auVar104._0_5_ = uVar128;
        auVar70._4_2_ = auVar52._10_2_;
        auVar70._0_4_ = auVar67._8_4_;
        auVar70._6_7_ = SUB137(auVar104 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar131 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar6 & 0xff) + (ushort)(byte)uVar8) * fVar2 +
                  (float)(ushort)((ushort)(byte)uVar129 + ((ushort)uVar7 & 0xff)) * fVar3 +
                  (float)(ushort)(((ushort)uVar9 & 0xff) + ((ushort)uVar10 & 0xff)) * fVar4 +
                  (float)(auVar76._0_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar91 << 0x40,6),auVar71._2_2_ + auVar87._0_2_) *
                    fVar2 + (float)(int)CONCAT82(SUB148(auVar92 << 0x40,6),
                                                 auVar80._0_2_ + auVar72._2_2_) * fVar3 +
                    (float)(int)CONCAT82(SUB148(auVar99 << 0x40,6),auVar73._2_2_ + auVar74._2_2_) *
                    fVar4 + (float)auVar53._4_4_ * fVar5;
        pfVar1[2] = (float)(int)((ulonglong)uVar116 >> 0x10) * fVar2 +
                    (float)(int)((ulonglong)uVar118 >> 0x10) * fVar3 +
                    (float)(int)((ulonglong)uVar124 >> 0x10) * fVar4 + (float)(int)uVar127 * fVar5;
        pfVar1[3] = (float)(auVar29._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar16._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar21._10_4_ >> 0x10) * fVar4 +
                    (float)(auVar24._10_4_ >> 0x10) * fVar5;
        pfVar1 = (float *)(param_2 + 0x10 + uVar131 * 4);
        *pfVar1 = (float)(uVar132 & 0xffff) * fVar2 + (float)(uVar138 & 0xffff) * fVar3 +
                  (float)(uVar143 & 0xffff) * fVar4 + (float)(auVar67._8_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)auVar47._4_4_ * fVar2 + (float)auVar48._4_4_ * fVar3 +
                    (float)auVar51._4_4_ * fVar4 + (float)auVar70._4_4_ * fVar5;
        pfVar1[2] = (float)auVar30._8_4_ * fVar2 + (float)auVar31._8_4_ * fVar3 +
                    (float)auVar34._8_4_ * fVar4 + (float)(int)uVar128 * fVar5;
        pfVar1[3] = (float)(auVar17._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar18._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar22._10_4_ >> 0x10) * fVar4 +
                    (float)(uint3)(auVar69._10_3_ >> 0x10) * fVar5;
        uVar131 = uVar131 + 8;
      } while (uVar131 < uVar130);
      for (; uVar130 < uVar12; uVar130 = uVar130 + 1) {
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
LAB_1405c8bd6:
  FUN_1405c8b30(0);
  return;
}

