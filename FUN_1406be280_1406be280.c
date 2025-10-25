
void FUN_1406be280(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
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
  undefined1 auVar45 [14];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
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
  uint uVar84;
  undefined1 auVar85 [14];
  undefined1 auVar86 [14];
  undefined1 auVar87 [15];
  undefined1 auVar88 [11];
  undefined1 auVar89 [15];
  undefined1 auVar90 [11];
  undefined1 auVar91 [14];
  undefined1 auVar92 [14];
  undefined1 auVar93 [15];
  undefined1 auVar94 [11];
  undefined1 auVar95 [15];
  undefined1 auVar96 [11];
  undefined1 auVar97 [14];
  undefined1 auVar98 [14];
  undefined1 auVar99 [15];
  undefined1 auVar100 [11];
  undefined1 auVar101 [14];
  undefined1 auVar102 [13];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined6 uVar107;
  undefined1 auVar108 [12];
  undefined8 uVar109;
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [12];
  undefined8 uVar115;
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [12];
  undefined8 uVar121;
  undefined1 auVar122 [15];
  undefined1 auVar123 [15];
  uint6 uVar124;
  uint5 uVar125;
  ulonglong uVar126;
  ulonglong *puVar127;
  ulonglong uVar128;
  ulonglong uVar129;
  uint uVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  uint uVar135;
  uint uVar136;
  undefined1 uVar137;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar128 = param_2 & 0xf;
    if (uVar128 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406be5ca;
      uVar128 = 0x10 - uVar128 >> 2;
    }
    if ((longlong)(uVar128 + 8) <= (longlong)param_3) {
      uVar126 = 0;
      uVar129 = param_3 - (param_3 - uVar128 & 7);
      if (uVar128 != 0) {
        do {
          *(float *)(param_2 + uVar126 * 4) =
               (float)((uint)*(byte *)((uVar126 - 3) + param_1) +
                      (uint)*(byte *)(uVar126 + 3 + param_1)) * fVar2 +
               (float)((uint)*(byte *)((uVar126 - 2) + param_1) +
                      (uint)*(byte *)(uVar126 + 2 + param_1)) * fVar3 +
               (float)((uint)*(byte *)((uVar126 - 1) + param_1) +
                      (uint)*(byte *)(uVar126 + 1 + param_1)) * fVar4 +
               (float)*(byte *)(uVar126 + param_1) * fVar5;
          uVar126 = uVar126 + 1;
        } while (uVar126 < uVar128);
      }
      puVar127 = (ulonglong *)(param_1 + uVar128);
      do {
        uVar126 = *(ulonglong *)((longlong)puVar127 + -3);
        uVar6 = *(ulonglong *)((longlong)puVar127 + 3);
        auVar12._8_6_ = 0;
        auVar12._0_8_ = uVar126;
        auVar12[0xe] = (char)(uVar126 >> 0x38);
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar126;
        auVar25[0xc] = (char)(uVar126 >> 0x30);
        auVar25._13_2_ = auVar12._13_2_;
        auVar36._8_4_ = 0;
        auVar36._0_8_ = uVar126;
        auVar36._12_3_ = auVar25._12_3_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar126;
        auVar43[10] = (char)(uVar126 >> 0x28);
        auVar43._11_4_ = auVar36._11_4_;
        auVar54._8_2_ = 0;
        auVar54._0_8_ = uVar126;
        auVar54._10_5_ = auVar43._10_5_;
        auVar61[8] = (char)(uVar126 >> 0x20);
        auVar61._0_8_ = uVar126;
        auVar61._9_6_ = auVar54._9_6_;
        auVar78._7_8_ = 0;
        auVar78._0_7_ = auVar61._8_7_;
        Var79 = CONCAT81(SUB158(auVar78 << 0x40,7),(char)(uVar126 >> 0x18));
        auVar103._9_6_ = 0;
        auVar103._0_9_ = Var79;
        auVar80._1_10_ = SUB1510(auVar103 << 0x30,5);
        auVar80[0] = (char)(uVar126 >> 0x10);
        auVar104._11_4_ = 0;
        auVar104._0_11_ = auVar80;
        auVar70[2] = (char)(uVar126 >> 8);
        auVar70._0_2_ = (ushort)uVar126;
        auVar70._3_12_ = SUB1512(auVar104 << 0x20,3);
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
        auVar105._9_6_ = 0;
        auVar105._0_9_ = Var82;
        auVar83._1_10_ = SUB1510(auVar105 << 0x30,5);
        auVar83[0] = (char)(uVar6 >> 0x10);
        auVar106._11_4_ = 0;
        auVar106._0_11_ = auVar83;
        auVar71[2] = (char)(uVar6 >> 8);
        auVar71._0_2_ = (ushort)uVar6;
        auVar71._3_12_ = SUB1512(auVar106 << 0x20,3);
        sVar131 = (short)Var79 + (short)Var82;
        uVar84 = CONCAT22(auVar61._8_2_ + auVar62._8_2_,sVar131);
        sVar132 = auVar43._10_2_ + auVar44._10_2_;
        uVar107 = CONCAT24(sVar132,uVar84);
        sVar133 = auVar25._12_2_ + auVar26._12_2_;
        sVar134 = (auVar12._13_2_ >> 8) + (auVar13._13_2_ >> 8);
        auVar108._4_8_ = 0;
        auVar108._0_4_ = uVar84;
        auVar27._12_2_ = sVar131;
        auVar27._0_12_ = auVar108 << 0x30;
        uVar109 = CONCAT44(auVar27._10_4_,CONCAT22(auVar80._0_2_ + auVar83._0_2_,sVar131));
        auVar85._6_8_ = 0;
        auVar85._0_6_ = (uint6)((ulonglong)uVar109 >> 0x10);
        uVar7 = (ulonglong)(CONCAT28(sVar134,CONCAT26(sVar133,uVar107)) >> 0x10);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar7;
        auVar14._12_2_ = sVar134;
        auVar28._8_2_ = sVar133;
        auVar28._0_8_ = uVar7;
        auVar28._10_4_ = auVar14._10_4_;
        auVar86._6_8_ = 0;
        auVar86._0_6_ = auVar28._8_6_;
        uVar130 = (uint)((uint6)uVar107 >> 0x10);
        auVar45._4_2_ = sVar132;
        auVar45._0_4_ = uVar130;
        auVar45._6_8_ = SUB148(auVar86 << 0x40,6);
        uVar7 = *(ulonglong *)((longlong)puVar127 + -2);
        uVar8 = *(ulonglong *)((longlong)puVar127 + 2);
        auVar15._8_6_ = 0;
        auVar15._0_8_ = uVar7;
        auVar15[0xe] = (char)(uVar7 >> 0x38);
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar7;
        auVar29[0xc] = (char)(uVar7 >> 0x30);
        auVar29._13_2_ = auVar15._13_2_;
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar7;
        auVar38._12_3_ = auVar29._12_3_;
        auVar46._8_2_ = 0;
        auVar46._0_8_ = uVar7;
        auVar46[10] = (char)(uVar7 >> 0x28);
        auVar46._11_4_ = auVar38._11_4_;
        auVar56._8_2_ = 0;
        auVar56._0_8_ = uVar7;
        auVar56._10_5_ = auVar46._10_5_;
        auVar63[8] = (char)(uVar7 >> 0x20);
        auVar63._0_8_ = uVar7;
        auVar63._9_6_ = auVar56._9_6_;
        auVar87._7_8_ = 0;
        auVar87._0_7_ = auVar63._8_7_;
        Var79 = CONCAT81(SUB158(auVar87 << 0x40,7),(char)(uVar7 >> 0x18));
        auVar110._9_6_ = 0;
        auVar110._0_9_ = Var79;
        auVar88._1_10_ = SUB1510(auVar110 << 0x30,5);
        auVar88[0] = (char)(uVar7 >> 0x10);
        auVar111._11_4_ = 0;
        auVar111._0_11_ = auVar88;
        auVar72[2] = (char)(uVar7 >> 8);
        auVar72._0_2_ = (ushort)uVar7;
        auVar72._3_12_ = SUB1512(auVar111 << 0x20,3);
        auVar16._8_6_ = 0;
        auVar16._0_8_ = uVar8;
        auVar16[0xe] = (char)(uVar8 >> 0x38);
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar8;
        auVar30[0xc] = (char)(uVar8 >> 0x30);
        auVar30._13_2_ = auVar16._13_2_;
        auVar39._8_4_ = 0;
        auVar39._0_8_ = uVar8;
        auVar39._12_3_ = auVar30._12_3_;
        auVar47._8_2_ = 0;
        auVar47._0_8_ = uVar8;
        auVar47[10] = (char)(uVar8 >> 0x28);
        auVar47._11_4_ = auVar39._11_4_;
        auVar57._8_2_ = 0;
        auVar57._0_8_ = uVar8;
        auVar57._10_5_ = auVar47._10_5_;
        auVar64[8] = (char)(uVar8 >> 0x20);
        auVar64._0_8_ = uVar8;
        auVar64._9_6_ = auVar57._9_6_;
        auVar89._7_8_ = 0;
        auVar89._0_7_ = auVar64._8_7_;
        Var82 = CONCAT81(SUB158(auVar89 << 0x40,7),(char)(uVar8 >> 0x18));
        auVar112._9_6_ = 0;
        auVar112._0_9_ = Var82;
        auVar90._1_10_ = SUB1510(auVar112 << 0x30,5);
        auVar90[0] = (char)(uVar8 >> 0x10);
        auVar113._11_4_ = 0;
        auVar113._0_11_ = auVar90;
        auVar73[2] = (char)(uVar8 >> 8);
        auVar73._0_2_ = (ushort)uVar8;
        auVar73._3_12_ = SUB1512(auVar113 << 0x20,3);
        sVar131 = (short)Var79 + (short)Var82;
        uVar84 = CONCAT22(auVar63._8_2_ + auVar64._8_2_,sVar131);
        sVar132 = auVar46._10_2_ + auVar47._10_2_;
        uVar107 = CONCAT24(sVar132,uVar84);
        sVar133 = auVar29._12_2_ + auVar30._12_2_;
        sVar134 = (auVar15._13_2_ >> 8) + (auVar16._13_2_ >> 8);
        auVar114._4_8_ = 0;
        auVar114._0_4_ = uVar84;
        auVar17._12_2_ = sVar131;
        auVar17._0_12_ = auVar114 << 0x30;
        uVar115 = CONCAT44(auVar17._10_4_,CONCAT22(auVar88._0_2_ + auVar90._0_2_,sVar131));
        auVar91._6_8_ = 0;
        auVar91._0_6_ = (uint6)((ulonglong)uVar115 >> 0x10);
        uVar9 = (ulonglong)(CONCAT28(sVar134,CONCAT26(sVar133,uVar107)) >> 0x10);
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar9;
        auVar18._12_2_ = sVar134;
        auVar31._8_2_ = sVar133;
        auVar31._0_8_ = uVar9;
        auVar31._10_4_ = auVar18._10_4_;
        auVar92._6_8_ = 0;
        auVar92._0_6_ = auVar31._8_6_;
        uVar135 = (uint)((uint6)uVar107 >> 0x10);
        auVar48._4_2_ = sVar132;
        auVar48._0_4_ = uVar135;
        auVar48._6_8_ = SUB148(auVar92 << 0x40,6);
        uVar9 = *(ulonglong *)((longlong)puVar127 + -1);
        uVar10 = *(ulonglong *)((longlong)puVar127 + 1);
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
        auVar93._7_8_ = 0;
        auVar93._0_7_ = auVar65._8_7_;
        Var79 = CONCAT81(SUB158(auVar93 << 0x40,7),(char)(uVar9 >> 0x18));
        auVar116._9_6_ = 0;
        auVar116._0_9_ = Var79;
        auVar94._1_10_ = SUB1510(auVar116 << 0x30,5);
        auVar94[0] = (char)(uVar9 >> 0x10);
        auVar117._11_4_ = 0;
        auVar117._0_11_ = auVar94;
        auVar74[2] = (char)(uVar9 >> 8);
        auVar74._0_2_ = (ushort)uVar9;
        auVar74._3_12_ = SUB1512(auVar117 << 0x20,3);
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
        auVar95._7_8_ = 0;
        auVar95._0_7_ = auVar66._8_7_;
        Var82 = CONCAT81(SUB158(auVar95 << 0x40,7),(char)(uVar10 >> 0x18));
        auVar118._9_6_ = 0;
        auVar118._0_9_ = Var82;
        auVar96._1_10_ = SUB1510(auVar118 << 0x30,5);
        auVar96[0] = (char)(uVar10 >> 0x10);
        auVar119._11_4_ = 0;
        auVar119._0_11_ = auVar96;
        auVar75[2] = (char)(uVar10 >> 8);
        auVar75._0_2_ = (ushort)uVar10;
        auVar75._3_12_ = SUB1512(auVar119 << 0x20,3);
        sVar131 = (short)Var79 + (short)Var82;
        uVar84 = CONCAT22(auVar65._8_2_ + auVar66._8_2_,sVar131);
        sVar132 = auVar49._10_2_ + auVar50._10_2_;
        uVar107 = CONCAT24(sVar132,uVar84);
        sVar133 = auVar32._12_2_ + auVar33._12_2_;
        sVar134 = (auVar19._13_2_ >> 8) + (auVar20._13_2_ >> 8);
        uVar11 = (ulonglong)(CONCAT28(sVar134,CONCAT26(sVar133,uVar107)) >> 0x10);
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar11;
        auVar21._12_2_ = sVar134;
        auVar34._8_2_ = sVar133;
        auVar34._0_8_ = uVar11;
        auVar34._10_4_ = auVar21._10_4_;
        auVar97._6_8_ = 0;
        auVar97._0_6_ = auVar34._8_6_;
        uVar136 = (uint)((uint6)uVar107 >> 0x10);
        auVar51._4_2_ = sVar132;
        auVar51._0_4_ = uVar136;
        auVar51._6_8_ = SUB148(auVar97 << 0x40,6);
        auVar120._4_8_ = 0;
        auVar120._0_4_ = uVar84;
        auVar22._12_2_ = sVar131;
        auVar22._0_12_ = auVar120 << 0x30;
        uVar121 = CONCAT44(auVar22._10_4_,CONCAT22(auVar94._0_2_ + auVar96._0_2_,sVar131));
        auVar98._6_8_ = 0;
        auVar98._0_6_ = (uint6)((ulonglong)uVar121 >> 0x10);
        uVar11 = *puVar127;
        puVar127 = puVar127 + 1;
        uVar137 = (undefined1)(uVar11 >> 0x38);
        auVar23._8_6_ = 0;
        auVar23._0_8_ = uVar11;
        auVar23[0xe] = uVar137;
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
        auVar99._7_8_ = 0;
        auVar99._0_7_ = auVar67._8_7_;
        Var79 = CONCAT81(SUB158(auVar99 << 0x40,7),(char)(uVar11 >> 0x18));
        auVar122._9_6_ = 0;
        auVar122._0_9_ = Var79;
        auVar100._1_10_ = SUB1510(auVar122 << 0x30,5);
        auVar100[0] = (char)(uVar11 >> 0x10);
        auVar123._11_4_ = 0;
        auVar123._0_11_ = auVar100;
        auVar76[2] = (char)(uVar11 >> 8);
        auVar76._0_2_ = (ushort)uVar11;
        auVar76._3_12_ = SUB1512(auVar123 << 0x20,3);
        auVar77._2_13_ = auVar76._2_13_;
        auVar77._0_2_ = (ushort)uVar11 & 0xff;
        auVar24._10_2_ = 0;
        auVar24._0_10_ = auVar77._0_10_;
        auVar24._12_2_ = (short)Var79;
        uVar124 = CONCAT42(auVar24._10_4_,auVar100._0_2_);
        auVar101._6_8_ = 0;
        auVar101._0_6_ = uVar124;
        auVar53._4_2_ = auVar76._2_2_;
        auVar53._0_4_ = auVar77._0_4_;
        auVar53._6_8_ = SUB148(auVar101 << 0x40,6);
        auVar68[0xc] = uVar137;
        auVar68._0_12_ = ZEXT812(0);
        uVar125 = CONCAT32(auVar68._10_3_,auVar35._12_2_);
        auVar102._5_8_ = 0;
        auVar102._0_5_ = uVar125;
        auVar69._4_2_ = auVar52._10_2_;
        auVar69._0_4_ = auVar67._8_4_;
        auVar69._6_7_ = SUB137(auVar102 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar128 * 4);
        *pfVar1 = (float)(ushort)(((ushort)uVar126 & 0xff) + ((ushort)uVar6 & 0xff)) * fVar2 +
                  (float)(ushort)(((ushort)uVar7 & 0xff) + ((ushort)uVar8 & 0xff)) * fVar3 +
                  (float)(ushort)(((ushort)uVar9 & 0xff) + ((ushort)uVar10 & 0xff)) * fVar4 +
                  (float)(auVar77._0_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar85 << 0x40,6),auVar70._2_2_ + auVar71._2_2_) *
                    fVar2 + (float)(int)CONCAT82(SUB148(auVar91 << 0x40,6),
                                                 auVar72._2_2_ + auVar73._2_2_) * fVar3 +
                    (float)(int)CONCAT82(SUB148(auVar98 << 0x40,6),auVar74._2_2_ + auVar75._2_2_) *
                    fVar4 + (float)auVar53._4_4_ * fVar5;
        pfVar1[2] = (float)(int)((ulonglong)uVar109 >> 0x10) * fVar2 +
                    (float)(int)((ulonglong)uVar115 >> 0x10) * fVar3 +
                    (float)(int)((ulonglong)uVar121 >> 0x10) * fVar4 + (float)(int)uVar124 * fVar5;
        pfVar1[3] = (float)(auVar27._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar17._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar22._10_4_ >> 0x10) * fVar4 +
                    (float)(auVar24._10_4_ >> 0x10) * fVar5;
        pfVar1 = (float *)(param_2 + 0x10 + uVar128 * 4);
        *pfVar1 = (float)(uVar130 & 0xffff) * fVar2 + (float)(uVar135 & 0xffff) * fVar3 +
                  (float)(uVar136 & 0xffff) * fVar4 + (float)(auVar67._8_4_ & 0xffff) * fVar5;
        pfVar1[1] = (float)auVar45._4_4_ * fVar2 + (float)auVar48._4_4_ * fVar3 +
                    (float)auVar51._4_4_ * fVar4 + (float)auVar69._4_4_ * fVar5;
        pfVar1[2] = (float)auVar28._8_4_ * fVar2 + (float)auVar31._8_4_ * fVar3 +
                    (float)auVar34._8_4_ * fVar4 + (float)(int)uVar125 * fVar5;
        pfVar1[3] = (float)(auVar14._10_4_ >> 0x10) * fVar2 +
                    (float)(auVar18._10_4_ >> 0x10) * fVar3 +
                    (float)(auVar21._10_4_ >> 0x10) * fVar4 +
                    (float)(uint3)(auVar68._10_3_ >> 0x10) * fVar5;
        uVar128 = uVar128 + 8;
      } while (uVar128 < uVar129);
      for (; uVar129 < param_3; uVar129 = uVar129 + 1) {
        *(float *)(param_2 + uVar129 * 4) =
             (float)((uint)*(byte *)((uVar129 - 3) + param_1) +
                    (uint)*(byte *)(uVar129 + 3 + param_1)) * fVar2 +
             (float)((uint)*(byte *)((uVar129 - 2) + param_1) +
                    (uint)*(byte *)(uVar129 + 2 + param_1)) * fVar3 +
             (float)((uint)*(byte *)((uVar129 - 1) + param_1) +
                    (uint)*(byte *)(uVar129 + 1 + param_1)) * fVar4 +
             (float)*(byte *)(uVar129 + param_1) * fVar5;
      }
      return;
    }
  }
LAB_1406be5ca:
  FUN_1406be51d(fVar5,0);
  return;
}

