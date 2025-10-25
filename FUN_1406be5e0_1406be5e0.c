
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406be5e0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [14];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [14];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [14];
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
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [14];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [14];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [14];
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
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  unkuint9 Var82;
  undefined1 auVar83 [11];
  undefined1 auVar84 [15];
  unkuint9 Var85;
  undefined1 auVar86 [11];
  undefined1 auVar87 [14];
  undefined1 auVar88 [14];
  undefined1 auVar89 [15];
  undefined1 auVar90 [11];
  undefined1 auVar91 [15];
  undefined1 auVar92 [11];
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
  undefined1 auVar103 [15];
  undefined1 auVar104 [11];
  undefined1 auVar105 [14];
  undefined1 auVar106 [14];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined6 uVar111;
  undefined1 auVar112 [12];
  undefined8 uVar113;
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [12];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  undefined1 auVar123 [12];
  undefined1 auVar124 [15];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar128 [12];
  undefined1 auVar129 [16];
  ulonglong uVar130;
  longlong lVar131;
  longlong lVar132;
  longlong lVar133;
  ulonglong uVar134;
  longlong lVar135;
  ulonglong uVar136;
  ulonglong uVar137;
  float *pfVar138;
  ulonglong uVar139;
  longlong lVar140;
  longlong lVar141;
  uint uVar142;
  float fVar143;
  short sVar145;
  float fVar144;
  short sVar147;
  float fVar146;
  short sVar148;
  short sVar150;
  float fVar149;
  undefined1 auVar151 [16];
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  
  lVar140 = (longlong)(param_5 >> 1);
  lVar132 = param_1 - lVar140;
  fVar5 = *param_4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_1406bedd3:
      uVar136 = 0;
    }
    else {
      uVar130 = param_2 & 0xf;
      if (uVar130 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1406bedd3;
        uVar130 = 0x10 - uVar130 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar130 + 8)) goto LAB_1406bedd3;
      uVar137 = 0;
      uVar136 = param_3 - (param_3 - uVar130 & 7);
      if (uVar130 != 0) {
        do {
          *(float *)(param_2 + uVar137 * 4) =
               (float)((uint)*(byte *)(uVar137 + lVar132) +
                      (uint)*(byte *)(uVar137 + lVar140 + param_1)) * fVar5;
          uVar137 = uVar137 + 1;
        } while (uVar137 < uVar130);
      }
      do {
        uVar137 = *(ulonglong *)(uVar130 + lVar132);
        uVar139 = *(ulonglong *)(uVar130 + lVar140 + param_1);
        auVar9._8_6_ = 0;
        auVar9._0_8_ = uVar137;
        auVar9[0xe] = (char)(uVar137 >> 0x38);
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar137;
        auVar25[0xc] = (char)(uVar137 >> 0x30);
        auVar25._13_2_ = auVar9._13_2_;
        auVar37._8_4_ = 0;
        auVar37._0_8_ = uVar137;
        auVar37._12_3_ = auVar25._12_3_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar137;
        auVar45[10] = (char)(uVar137 >> 0x28);
        auVar45._11_4_ = auVar37._11_4_;
        auVar57._8_2_ = 0;
        auVar57._0_8_ = uVar137;
        auVar57._10_5_ = auVar45._10_5_;
        auVar65[8] = (char)(uVar137 >> 0x20);
        auVar65._0_8_ = uVar137;
        auVar65._9_6_ = auVar57._9_6_;
        auVar81._7_8_ = 0;
        auVar81._0_7_ = auVar65._8_7_;
        Var82 = CONCAT81(SUB158(auVar81 << 0x40,7),(char)(uVar137 >> 0x18));
        auVar107._9_6_ = 0;
        auVar107._0_9_ = Var82;
        auVar83._1_10_ = SUB1510(auVar107 << 0x30,5);
        auVar83[0] = (char)(uVar137 >> 0x10);
        auVar108._11_4_ = 0;
        auVar108._0_11_ = auVar83;
        auVar73[2] = (char)(uVar137 >> 8);
        auVar73._0_2_ = (ushort)uVar137;
        auVar73._3_12_ = SUB1512(auVar108 << 0x20,3);
        auVar10._8_6_ = 0;
        auVar10._0_8_ = uVar139;
        auVar10[0xe] = (char)(uVar139 >> 0x38);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar139;
        auVar26[0xc] = (char)(uVar139 >> 0x30);
        auVar26._13_2_ = auVar10._13_2_;
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar139;
        auVar38._12_3_ = auVar26._12_3_;
        auVar46._8_2_ = 0;
        auVar46._0_8_ = uVar139;
        auVar46[10] = (char)(uVar139 >> 0x28);
        auVar46._11_4_ = auVar38._11_4_;
        auVar58._8_2_ = 0;
        auVar58._0_8_ = uVar139;
        auVar58._10_5_ = auVar46._10_5_;
        auVar66[8] = (char)(uVar139 >> 0x20);
        auVar66._0_8_ = uVar139;
        auVar66._9_6_ = auVar58._9_6_;
        auVar84._7_8_ = 0;
        auVar84._0_7_ = auVar66._8_7_;
        Var85 = CONCAT81(SUB158(auVar84 << 0x40,7),(char)(uVar139 >> 0x18));
        auVar109._9_6_ = 0;
        auVar109._0_9_ = Var85;
        auVar86._1_10_ = SUB1510(auVar109 << 0x30,5);
        auVar86[0] = (char)(uVar139 >> 0x10);
        auVar110._11_4_ = 0;
        auVar110._0_11_ = auVar86;
        auVar74[2] = (char)(uVar139 >> 8);
        auVar74._0_2_ = (ushort)uVar139;
        auVar74._3_12_ = SUB1512(auVar110 << 0x20,3);
        sVar145 = (short)Var82 + (short)Var85;
        uVar142 = CONCAT22(auVar65._8_2_ + auVar66._8_2_,sVar145);
        sVar147 = auVar45._10_2_ + auVar46._10_2_;
        uVar111 = CONCAT24(sVar147,uVar142);
        sVar148 = auVar25._12_2_ + auVar26._12_2_;
        sVar150 = (auVar9._13_2_ >> 8) + (auVar10._13_2_ >> 8);
        auVar112._4_8_ = 0;
        auVar112._0_4_ = uVar142;
        auVar11._12_2_ = sVar145;
        auVar11._0_12_ = auVar112 << 0x30;
        uVar113 = CONCAT44(auVar11._10_4_,CONCAT22(auVar83._0_2_ + auVar86._0_2_,sVar145));
        auVar87._6_8_ = 0;
        auVar87._0_6_ = (uint6)((ulonglong)uVar113 >> 0x10);
        uVar134 = (ulonglong)(CONCAT28(sVar150,CONCAT26(sVar148,uVar111)) >> 0x10);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar134;
        auVar12._12_2_ = sVar150;
        auVar27._8_2_ = sVar148;
        auVar27._0_8_ = uVar134;
        auVar27._10_4_ = auVar12._10_4_;
        auVar88._6_8_ = 0;
        auVar88._0_6_ = auVar27._8_6_;
        uVar142 = (uint)((uint6)uVar111 >> 0x10);
        auVar47._4_2_ = sVar147;
        auVar47._0_4_ = uVar142;
        auVar47._6_8_ = SUB148(auVar88 << 0x40,6);
        pfVar138 = (float *)(param_2 + uVar130 * 4);
        *pfVar138 = (float)(ushort)(((ushort)uVar137 & 0xff) + ((ushort)uVar139 & 0xff)) * fVar5;
        pfVar138[1] = (float)(int)CONCAT82(SUB148(auVar87 << 0x40,6),auVar73._2_2_ + auVar74._2_2_)
                      * fVar5;
        pfVar138[2] = (float)(int)((ulonglong)uVar113 >> 0x10) * fVar5;
        pfVar138[3] = (float)(auVar11._10_4_ >> 0x10) * fVar5;
        pfVar138 = (float *)(param_2 + 0x10 + uVar130 * 4);
        *pfVar138 = (float)(uVar142 & 0xffff) * fVar5;
        pfVar138[1] = (float)auVar47._4_4_ * fVar5;
        pfVar138[2] = (float)auVar27._8_4_ * fVar5;
        pfVar138[3] = (float)(auVar12._10_4_ >> 0x10) * fVar5;
        uVar130 = uVar130 + 8;
      } while (uVar130 < uVar136);
    }
    if (uVar136 < param_3) {
      do {
        *(float *)(param_2 + uVar136 * 4) =
             (float)((uint)*(byte *)(uVar136 + lVar132) +
                    (uint)*(byte *)(uVar136 + lVar140 + param_1)) * fVar5;
        uVar136 = uVar136 + 1;
      } while (uVar136 < param_3);
    }
  }
  if (1 < lVar140) {
    lVar131 = 1;
    uVar130 = 0;
    if (lVar140 - 1U >> 1 != 0) {
      uVar136 = param_2 & 0xf;
      lVar131 = lVar140 + param_1;
      do {
        fVar5 = param_4[uVar130 * 2 + 1];
        lVar141 = uVar130 * 2 + (param_1 - lVar140);
        lVar132 = lVar141 + 2;
        fVar6 = param_4[uVar130 * 2 + 2];
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 8) ||
             (((uVar137 = uVar136, uVar136 != 0 &&
               (uVar137 = 0x10 - uVar136 >> 2, (param_2 & 3) != 0)) ||
              ((longlong)param_3 < (longlong)(uVar137 + 8))))) {
            uVar139 = 0;
          }
          else {
            uVar134 = 0;
            uVar139 = param_3 - (param_3 - uVar137 & 7);
            lVar135 = lVar131;
            if (uVar137 != 0) {
              do {
                *(float *)(param_2 + uVar134 * 4) =
                     (float)((uint)*(byte *)(uVar134 + 1 + lVar141) + (uint)*(byte *)(lVar135 + -1))
                     * fVar5 + *(float *)(param_2 + uVar134 * 4) +
                     (float)((uint)*(byte *)(uVar134 + 2 + lVar141) + (uint)*(byte *)(lVar135 + -2))
                     * fVar6;
                uVar134 = uVar134 + 1;
                lVar135 = lVar135 + 1;
              } while (uVar134 < uVar137);
            }
            lVar135 = uVar137 + lVar131;
            lVar133 = lVar141 + uVar137;
            do {
              uVar134 = *(ulonglong *)(lVar133 + 1);
              uVar7 = *(ulonglong *)(lVar135 + -1);
              auVar13._8_6_ = 0;
              auVar13._0_8_ = uVar134;
              auVar13[0xe] = (char)(uVar134 >> 0x38);
              auVar28._8_4_ = 0;
              auVar28._0_8_ = uVar134;
              auVar28[0xc] = (char)(uVar134 >> 0x30);
              auVar28._13_2_ = auVar13._13_2_;
              auVar39._8_4_ = 0;
              auVar39._0_8_ = uVar134;
              auVar39._12_3_ = auVar28._12_3_;
              auVar48._8_2_ = 0;
              auVar48._0_8_ = uVar134;
              auVar48[10] = (char)(uVar134 >> 0x28);
              auVar48._11_4_ = auVar39._11_4_;
              auVar59._8_2_ = 0;
              auVar59._0_8_ = uVar134;
              auVar59._10_5_ = auVar48._10_5_;
              auVar67[8] = (char)(uVar134 >> 0x20);
              auVar67._0_8_ = uVar134;
              auVar67._9_6_ = auVar59._9_6_;
              auVar89._7_8_ = 0;
              auVar89._0_7_ = auVar67._8_7_;
              Var82 = CONCAT81(SUB158(auVar89 << 0x40,7),(char)(uVar134 >> 0x18));
              auVar114._9_6_ = 0;
              auVar114._0_9_ = Var82;
              auVar90._1_10_ = SUB1510(auVar114 << 0x30,5);
              auVar90[0] = (char)(uVar134 >> 0x10);
              auVar115._11_4_ = 0;
              auVar115._0_11_ = auVar90;
              auVar75[2] = (char)(uVar134 >> 8);
              auVar75._0_2_ = (ushort)uVar134;
              auVar75._3_12_ = SUB1512(auVar115 << 0x20,3);
              auVar14._8_6_ = 0;
              auVar14._0_8_ = uVar7;
              auVar14[0xe] = (char)(uVar7 >> 0x38);
              auVar29._8_4_ = 0;
              auVar29._0_8_ = uVar7;
              auVar29[0xc] = (char)(uVar7 >> 0x30);
              auVar29._13_2_ = auVar14._13_2_;
              auVar40._8_4_ = 0;
              auVar40._0_8_ = uVar7;
              auVar40._12_3_ = auVar29._12_3_;
              auVar49._8_2_ = 0;
              auVar49._0_8_ = uVar7;
              auVar49[10] = (char)(uVar7 >> 0x28);
              auVar49._11_4_ = auVar40._11_4_;
              auVar60._8_2_ = 0;
              auVar60._0_8_ = uVar7;
              auVar60._10_5_ = auVar49._10_5_;
              auVar68[8] = (char)(uVar7 >> 0x20);
              auVar68._0_8_ = uVar7;
              auVar68._9_6_ = auVar60._9_6_;
              auVar91._7_8_ = 0;
              auVar91._0_7_ = auVar68._8_7_;
              Var85 = CONCAT81(SUB158(auVar91 << 0x40,7),(char)(uVar7 >> 0x18));
              auVar116._9_6_ = 0;
              auVar116._0_9_ = Var85;
              auVar92._1_10_ = SUB1510(auVar116 << 0x30,5);
              auVar92[0] = (char)(uVar7 >> 0x10);
              auVar117._11_4_ = 0;
              auVar117._0_11_ = auVar92;
              auVar76[2] = (char)(uVar7 >> 8);
              auVar76._0_2_ = (ushort)uVar7;
              auVar76._3_12_ = SUB1512(auVar117 << 0x20,3);
              sVar145 = (short)Var82 + (short)Var85;
              uVar142 = CONCAT22(auVar67._8_2_ + auVar68._8_2_,sVar145);
              sVar147 = auVar48._10_2_ + auVar49._10_2_;
              uVar111 = CONCAT24(sVar147,uVar142);
              sVar148 = auVar28._12_2_ + auVar29._12_2_;
              sVar150 = (auVar13._13_2_ >> 8) + (auVar14._13_2_ >> 8);
              auVar118._4_8_ = 0;
              auVar118._0_4_ = uVar142;
              auVar15._12_2_ = sVar145;
              auVar15._0_12_ = auVar118 << 0x30;
              uVar113 = CONCAT44(auVar15._10_4_,CONCAT22(auVar90._0_2_ + auVar92._0_2_,sVar145));
              auVar93._6_8_ = 0;
              auVar93._0_6_ = (uint6)((ulonglong)uVar113 >> 0x10);
              uVar8 = (ulonglong)(CONCAT28(sVar150,CONCAT26(sVar148,uVar111)) >> 0x10);
              auVar16._8_4_ = 0;
              auVar16._0_8_ = uVar8;
              auVar16._12_2_ = sVar150;
              auVar30._8_2_ = sVar148;
              auVar30._0_8_ = uVar8;
              auVar30._10_4_ = auVar16._10_4_;
              auVar94._6_8_ = 0;
              auVar94._0_6_ = auVar30._8_6_;
              uVar142 = (uint)((uint6)uVar111 >> 0x10);
              auVar50._4_2_ = sVar147;
              auVar50._0_4_ = uVar142;
              auVar50._6_8_ = SUB148(auVar94 << 0x40,6);
              pfVar138 = (float *)(param_2 + uVar137 * 4);
              fVar152 = (float)(ushort)(((ushort)uVar134 & 0xff) + ((ushort)uVar7 & 0xff)) * fVar5 +
                        *pfVar138;
              fVar153 = (float)(int)CONCAT82(SUB148(auVar93 << 0x40,6),auVar75._2_2_ + auVar76._2_2_
                                            ) * fVar5 + pfVar138[1];
              fVar154 = (float)(int)((ulonglong)uVar113 >> 0x10) * fVar5 + pfVar138[2];
              fVar155 = (float)(auVar15._10_4_ >> 0x10) * fVar5 + pfVar138[3];
              pfVar138 = (float *)(param_2 + 0x10 + uVar137 * 4);
              fVar143 = (float)(uVar142 & 0xffff) * fVar5 + *pfVar138;
              fVar144 = (float)auVar50._4_4_ * fVar5 + pfVar138[1];
              fVar146 = (float)auVar30._8_4_ * fVar5 + pfVar138[2];
              fVar149 = (float)(auVar16._10_4_ >> 0x10) * fVar5 + pfVar138[3];
              pfVar138 = (float *)(param_2 + uVar137 * 4);
              *pfVar138 = fVar152;
              pfVar138[1] = fVar153;
              pfVar138[2] = fVar154;
              pfVar138[3] = fVar155;
              pfVar138 = (float *)(param_2 + 0x10 + uVar137 * 4);
              *pfVar138 = fVar143;
              pfVar138[1] = fVar144;
              pfVar138[2] = fVar146;
              pfVar138[3] = fVar149;
              uVar134 = *(ulonglong *)(lVar133 + 2);
              lVar133 = lVar133 + 8;
              uVar7 = *(ulonglong *)(lVar135 + -2);
              lVar135 = lVar135 + 8;
              auVar17._8_6_ = 0;
              auVar17._0_8_ = uVar134;
              auVar17[0xe] = (char)(uVar134 >> 0x38);
              auVar31._8_4_ = 0;
              auVar31._0_8_ = uVar134;
              auVar31[0xc] = (char)(uVar134 >> 0x30);
              auVar31._13_2_ = auVar17._13_2_;
              auVar41._8_4_ = 0;
              auVar41._0_8_ = uVar134;
              auVar41._12_3_ = auVar31._12_3_;
              auVar51._8_2_ = 0;
              auVar51._0_8_ = uVar134;
              auVar51[10] = (char)(uVar134 >> 0x28);
              auVar51._11_4_ = auVar41._11_4_;
              auVar61._8_2_ = 0;
              auVar61._0_8_ = uVar134;
              auVar61._10_5_ = auVar51._10_5_;
              auVar69[8] = (char)(uVar134 >> 0x20);
              auVar69._0_8_ = uVar134;
              auVar69._9_6_ = auVar61._9_6_;
              auVar95._7_8_ = 0;
              auVar95._0_7_ = auVar69._8_7_;
              Var82 = CONCAT81(SUB158(auVar95 << 0x40,7),(char)(uVar134 >> 0x18));
              auVar119._9_6_ = 0;
              auVar119._0_9_ = Var82;
              auVar96._1_10_ = SUB1510(auVar119 << 0x30,5);
              auVar96[0] = (char)(uVar134 >> 0x10);
              auVar120._11_4_ = 0;
              auVar120._0_11_ = auVar96;
              auVar77[2] = (char)(uVar134 >> 8);
              auVar77._0_2_ = (ushort)uVar134;
              auVar77._3_12_ = SUB1512(auVar120 << 0x20,3);
              auVar18._8_6_ = 0;
              auVar18._0_8_ = uVar7;
              auVar18[0xe] = (char)(uVar7 >> 0x38);
              auVar32._8_4_ = 0;
              auVar32._0_8_ = uVar7;
              auVar32[0xc] = (char)(uVar7 >> 0x30);
              auVar32._13_2_ = auVar18._13_2_;
              auVar42._8_4_ = 0;
              auVar42._0_8_ = uVar7;
              auVar42._12_3_ = auVar32._12_3_;
              auVar52._8_2_ = 0;
              auVar52._0_8_ = uVar7;
              auVar52[10] = (char)(uVar7 >> 0x28);
              auVar52._11_4_ = auVar42._11_4_;
              auVar62._8_2_ = 0;
              auVar62._0_8_ = uVar7;
              auVar62._10_5_ = auVar52._10_5_;
              auVar70[8] = (char)(uVar7 >> 0x20);
              auVar70._0_8_ = uVar7;
              auVar70._9_6_ = auVar62._9_6_;
              auVar97._7_8_ = 0;
              auVar97._0_7_ = auVar70._8_7_;
              Var85 = CONCAT81(SUB158(auVar97 << 0x40,7),(char)(uVar7 >> 0x18));
              auVar121._9_6_ = 0;
              auVar121._0_9_ = Var85;
              auVar98._1_10_ = SUB1510(auVar121 << 0x30,5);
              auVar98[0] = (char)(uVar7 >> 0x10);
              auVar122._11_4_ = 0;
              auVar122._0_11_ = auVar98;
              auVar78[2] = (char)(uVar7 >> 8);
              auVar78._0_2_ = (ushort)uVar7;
              auVar78._3_12_ = SUB1512(auVar122 << 0x20,3);
              sVar145 = (short)Var82 + (short)Var85;
              uVar142 = CONCAT22(auVar69._8_2_ + auVar70._8_2_,sVar145);
              sVar147 = auVar51._10_2_ + auVar52._10_2_;
              uVar111 = CONCAT24(sVar147,uVar142);
              sVar148 = auVar31._12_2_ + auVar32._12_2_;
              sVar150 = (auVar17._13_2_ >> 8) + (auVar18._13_2_ >> 8);
              auVar123._4_8_ = 0;
              auVar123._0_4_ = uVar142;
              auVar19._12_2_ = sVar145;
              auVar19._0_12_ = auVar123 << 0x30;
              uVar113 = CONCAT44(auVar19._10_4_,CONCAT22(auVar96._0_2_ + auVar98._0_2_,sVar145));
              auVar99._6_8_ = 0;
              auVar99._0_6_ = (uint6)((ulonglong)uVar113 >> 0x10);
              uVar8 = (ulonglong)(CONCAT28(sVar150,CONCAT26(sVar148,uVar111)) >> 0x10);
              auVar20._8_4_ = 0;
              auVar20._0_8_ = uVar8;
              auVar20._12_2_ = sVar150;
              auVar33._8_2_ = sVar148;
              auVar33._0_8_ = uVar8;
              auVar33._10_4_ = auVar20._10_4_;
              auVar100._6_8_ = 0;
              auVar100._0_6_ = auVar33._8_6_;
              uVar142 = (uint)((uint6)uVar111 >> 0x10);
              auVar53._4_2_ = sVar147;
              auVar53._0_4_ = uVar142;
              auVar53._6_8_ = SUB148(auVar100 << 0x40,6);
              pfVar138 = (float *)(param_2 + uVar137 * 4);
              *pfVar138 = fVar152 + (float)(ushort)(((ushort)uVar134 & 0xff) +
                                                   ((ushort)uVar7 & 0xff)) * fVar6;
              pfVar138[1] = fVar153 + (float)(int)CONCAT82(SUB148(auVar99 << 0x40,6),
                                                           auVar77._2_2_ + auVar78._2_2_) * fVar6;
              pfVar138[2] = fVar154 + (float)(int)((ulonglong)uVar113 >> 0x10) * fVar6;
              pfVar138[3] = fVar155 + (float)(auVar19._10_4_ >> 0x10) * fVar6;
              pfVar138 = (float *)(param_2 + 0x10 + uVar137 * 4);
              *pfVar138 = fVar143 + (float)(uVar142 & 0xffff) * fVar6;
              pfVar138[1] = fVar144 + (float)auVar53._4_4_ * fVar6;
              pfVar138[2] = fVar146 + (float)auVar33._8_4_ * fVar6;
              pfVar138[3] = fVar149 + (float)(auVar20._10_4_ >> 0x10) * fVar6;
              uVar137 = uVar137 + 8;
            } while (uVar137 < uVar139);
          }
          if (uVar139 < param_3) {
            lVar135 = uVar139 + lVar131;
            do {
              pbVar1 = (byte *)(lVar135 + -1);
              pbVar2 = (byte *)(lVar135 + -2);
              lVar135 = lVar135 + 1;
              *(float *)(param_2 + uVar139 * 4) =
                   (float)((uint)*(byte *)(uVar139 + 1 + lVar141) + (uint)*pbVar1) * fVar5 +
                   *(float *)(param_2 + uVar139 * 4) +
                   (float)((uint)*(byte *)(uVar139 + 2 + lVar141) + (uint)*pbVar2) * fVar6;
              uVar139 = uVar139 + 1;
            } while (uVar139 < param_3);
          }
        }
        uVar130 = uVar130 + 1;
        lVar131 = lVar131 + -2;
      } while (uVar130 < lVar140 - 1U >> 1);
      lVar131 = uVar130 * 2 + 1;
    }
    if (lVar140 != lVar131) {
      lVar132 = (param_1 - lVar140) + lVar131;
      fVar5 = param_4[lVar131];
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_1406bedc3:
          uVar136 = 0;
        }
        else {
          uVar130 = param_2 & 0xf;
          if (uVar130 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1406bedc3;
            uVar130 = 0x10 - uVar130 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar130 + 8)) goto LAB_1406bedc3;
          lVar135 = (param_1 - lVar140) + lVar131;
          uVar136 = param_3 - (param_3 - uVar130 & 7);
          lVar141 = (lVar140 + param_1) - lVar131;
          uVar137 = 0;
          if (uVar130 != 0) {
            do {
              *(float *)(param_2 + uVar137 * 4) =
                   (float)((uint)*(byte *)(uVar137 + lVar135) + (uint)*(byte *)(uVar137 + lVar141))
                   * fVar5 + *(float *)(param_2 + uVar137 * 4);
              uVar137 = uVar137 + 1;
            } while (uVar137 < uVar130);
          }
          do {
            uVar137 = *(ulonglong *)(uVar130 + lVar135);
            uVar139 = *(ulonglong *)(uVar130 + lVar141);
            auVar21._8_6_ = 0;
            auVar21._0_8_ = uVar137;
            auVar21[0xe] = (char)(uVar137 >> 0x38);
            auVar34._8_4_ = 0;
            auVar34._0_8_ = uVar137;
            auVar34[0xc] = (char)(uVar137 >> 0x30);
            auVar34._13_2_ = auVar21._13_2_;
            auVar43._8_4_ = 0;
            auVar43._0_8_ = uVar137;
            auVar43._12_3_ = auVar34._12_3_;
            auVar54._8_2_ = 0;
            auVar54._0_8_ = uVar137;
            auVar54[10] = (char)(uVar137 >> 0x28);
            auVar54._11_4_ = auVar43._11_4_;
            auVar63._8_2_ = 0;
            auVar63._0_8_ = uVar137;
            auVar63._10_5_ = auVar54._10_5_;
            auVar71[8] = (char)(uVar137 >> 0x20);
            auVar71._0_8_ = uVar137;
            auVar71._9_6_ = auVar63._9_6_;
            auVar101._7_8_ = 0;
            auVar101._0_7_ = auVar71._8_7_;
            Var82 = CONCAT81(SUB158(auVar101 << 0x40,7),(char)(uVar137 >> 0x18));
            auVar124._9_6_ = 0;
            auVar124._0_9_ = Var82;
            auVar102._1_10_ = SUB1510(auVar124 << 0x30,5);
            auVar102[0] = (char)(uVar137 >> 0x10);
            auVar125._11_4_ = 0;
            auVar125._0_11_ = auVar102;
            auVar79[2] = (char)(uVar137 >> 8);
            auVar79._0_2_ = (ushort)uVar137;
            auVar79._3_12_ = SUB1512(auVar125 << 0x20,3);
            auVar22._8_6_ = 0;
            auVar22._0_8_ = uVar139;
            auVar22[0xe] = (char)(uVar139 >> 0x38);
            auVar35._8_4_ = 0;
            auVar35._0_8_ = uVar139;
            auVar35[0xc] = (char)(uVar139 >> 0x30);
            auVar35._13_2_ = auVar22._13_2_;
            auVar44._8_4_ = 0;
            auVar44._0_8_ = uVar139;
            auVar44._12_3_ = auVar35._12_3_;
            auVar55._8_2_ = 0;
            auVar55._0_8_ = uVar139;
            auVar55[10] = (char)(uVar139 >> 0x28);
            auVar55._11_4_ = auVar44._11_4_;
            auVar64._8_2_ = 0;
            auVar64._0_8_ = uVar139;
            auVar64._10_5_ = auVar55._10_5_;
            auVar72[8] = (char)(uVar139 >> 0x20);
            auVar72._0_8_ = uVar139;
            auVar72._9_6_ = auVar64._9_6_;
            auVar103._7_8_ = 0;
            auVar103._0_7_ = auVar72._8_7_;
            Var85 = CONCAT81(SUB158(auVar103 << 0x40,7),(char)(uVar139 >> 0x18));
            auVar126._9_6_ = 0;
            auVar126._0_9_ = Var85;
            auVar104._1_10_ = SUB1510(auVar126 << 0x30,5);
            auVar104[0] = (char)(uVar139 >> 0x10);
            auVar127._11_4_ = 0;
            auVar127._0_11_ = auVar104;
            auVar80[2] = (char)(uVar139 >> 8);
            auVar80._0_2_ = (ushort)uVar139;
            auVar80._3_12_ = SUB1512(auVar127 << 0x20,3);
            sVar145 = (short)Var82 + (short)Var85;
            uVar142 = CONCAT22(auVar71._8_2_ + auVar72._8_2_,sVar145);
            sVar147 = auVar54._10_2_ + auVar55._10_2_;
            uVar111 = CONCAT24(sVar147,uVar142);
            sVar148 = auVar34._12_2_ + auVar35._12_2_;
            sVar150 = (auVar21._13_2_ >> 8) + (auVar22._13_2_ >> 8);
            auVar128._4_8_ = 0;
            auVar128._0_4_ = uVar142;
            auVar23._12_2_ = sVar145;
            auVar23._0_12_ = auVar128 << 0x30;
            uVar113 = CONCAT44(auVar23._10_4_,CONCAT22(auVar102._0_2_ + auVar104._0_2_,sVar145));
            auVar105._6_8_ = 0;
            auVar105._0_6_ = (uint6)((ulonglong)uVar113 >> 0x10);
            uVar134 = (ulonglong)(CONCAT28(sVar150,CONCAT26(sVar148,uVar111)) >> 0x10);
            auVar24._8_4_ = 0;
            auVar24._0_8_ = uVar134;
            auVar24._12_2_ = sVar150;
            auVar36._8_2_ = sVar148;
            auVar36._0_8_ = uVar134;
            auVar36._10_4_ = auVar24._10_4_;
            auVar106._6_8_ = 0;
            auVar106._0_6_ = auVar36._8_6_;
            uVar142 = (uint)((uint6)uVar111 >> 0x10);
            auVar56._4_2_ = sVar147;
            auVar56._0_4_ = uVar142;
            auVar56._6_8_ = SUB148(auVar106 << 0x40,6);
            pfVar138 = (float *)(param_2 + uVar130 * 4);
            fVar6 = pfVar138[1];
            fVar143 = pfVar138[2];
            fVar144 = pfVar138[3];
            pfVar4 = (float *)(param_2 + 0x10 + uVar130 * 4);
            fVar146 = *pfVar4;
            fVar149 = pfVar4[1];
            fVar152 = pfVar4[2];
            fVar153 = pfVar4[3];
            pfVar4 = (float *)(param_2 + uVar130 * 4);
            *pfVar4 = (float)(ushort)(((ushort)uVar137 & 0xff) + ((ushort)uVar139 & 0xff)) * fVar5 +
                      *pfVar138;
            pfVar4[1] = (float)(int)CONCAT82(SUB148(auVar105 << 0x40,6),
                                             auVar79._2_2_ + auVar80._2_2_) * fVar5 + fVar6;
            pfVar4[2] = (float)(int)((ulonglong)uVar113 >> 0x10) * fVar5 + fVar143;
            pfVar4[3] = (float)(auVar23._10_4_ >> 0x10) * fVar5 + fVar144;
            pfVar138 = (float *)(param_2 + 0x10 + uVar130 * 4);
            *pfVar138 = (float)(uVar142 & 0xffff) * fVar5 + fVar146;
            pfVar138[1] = (float)auVar56._4_4_ * fVar5 + fVar149;
            pfVar138[2] = (float)auVar36._8_4_ * fVar5 + fVar152;
            pfVar138[3] = (float)(auVar24._10_4_ >> 0x10) * fVar5 + fVar153;
            uVar130 = uVar130 + 8;
          } while (uVar130 < uVar136);
        }
        if (uVar136 < param_3) {
          do {
            *(float *)(param_2 + uVar136 * 4) =
                 (float)((uint)*(byte *)(uVar136 + (param_1 - lVar140) + lVar131) +
                        (uint)*(byte *)(uVar136 + ((param_1 + lVar140) - lVar131))) * fVar5 +
                 *(float *)(param_2 + uVar136 * 4);
            uVar136 = uVar136 + 1;
          } while (uVar136 < param_3);
        }
      }
    }
  }
  fVar5 = param_4[lVar140];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_1406bedb7:
    uVar136 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar130 = param_2 & 0xf;
    if (uVar130 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406bedb7;
      uVar130 = 0x10 - uVar130 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar130 + 8)) goto LAB_1406bedb7;
    uVar137 = 0;
    uVar136 = param_3 - (param_3 - uVar130 & 7);
    if (uVar130 != 0) {
      do {
        *(float *)(param_2 + uVar137 * 4) =
             (float)*(byte *)(uVar137 + 1 + lVar132) * fVar5 + *(float *)(param_2 + uVar137 * 4);
        uVar137 = uVar137 + 1;
      } while (uVar137 < uVar130);
    }
    auVar129 = _DAT_14308bbe0;
    lVar140 = lVar132 + uVar130;
    do {
      auVar151 = pshufb(ZEXT416(*(uint *)(lVar140 + 1)),auVar129);
      pfVar138 = (float *)(param_2 + uVar130 * 4);
      fVar6 = pfVar138[1];
      fVar143 = pfVar138[2];
      fVar144 = pfVar138[3];
      pfVar4 = (float *)(param_2 + uVar130 * 4);
      *pfVar4 = (float)auVar151._0_4_ * fVar5 + *pfVar138;
      pfVar4[1] = (float)auVar151._4_4_ * fVar5 + fVar6;
      pfVar4[2] = (float)auVar151._8_4_ * fVar5 + fVar143;
      pfVar4[3] = (float)auVar151._12_4_ * fVar5 + fVar144;
      puVar3 = (uint *)(lVar140 + 5);
      lVar140 = lVar140 + 8;
      auVar151 = pshufb(ZEXT416(*puVar3),auVar129);
      pfVar138 = (float *)(param_2 + 0x10 + uVar130 * 4);
      fVar6 = pfVar138[1];
      fVar143 = pfVar138[2];
      fVar144 = pfVar138[3];
      pfVar4 = (float *)(param_2 + 0x10 + uVar130 * 4);
      *pfVar4 = (float)auVar151._0_4_ * fVar5 + *pfVar138;
      pfVar4[1] = (float)auVar151._4_4_ * fVar5 + fVar6;
      pfVar4[2] = (float)auVar151._8_4_ * fVar5 + fVar143;
      pfVar4[3] = (float)auVar151._12_4_ * fVar5 + fVar144;
      uVar130 = uVar130 + 8;
    } while (uVar130 < uVar136);
    if (param_3 < uVar136 + 1) {
      return;
    }
    param_3 = param_3 - uVar136;
    if (3 < (longlong)param_3) {
      uVar130 = param_3 & 0xfffffffffffffffc;
      uVar137 = 0;
      pfVar138 = (float *)(uVar136 * 4 + param_2);
      do {
        lVar140 = uVar137 + 1;
        uVar137 = uVar137 + 4;
        auVar151 = pshufb(ZEXT416(*(uint *)(lVar140 + lVar132 + uVar136)),auVar129);
        *pfVar138 = (float)auVar151._0_4_ * fVar5 + *pfVar138;
        pfVar138[1] = (float)auVar151._4_4_ * fVar5 + pfVar138[1];
        pfVar138[2] = (float)auVar151._8_4_ * fVar5 + pfVar138[2];
        pfVar138[3] = (float)auVar151._12_4_ * fVar5 + pfVar138[3];
        pfVar138 = pfVar138 + 4;
      } while (uVar137 < uVar130);
      goto LAB_1406bed47;
    }
  }
  uVar130 = 0;
LAB_1406bed47:
  if (uVar130 < param_3) {
    pfVar138 = (float *)(uVar130 * 4 + param_2 + uVar136 * 4);
    do {
      lVar140 = uVar130 + 1;
      uVar130 = uVar130 + 1;
      *pfVar138 = (float)*(byte *)(lVar140 + lVar132 + uVar136) * fVar5 + *pfVar138;
      pfVar138 = pfVar138 + 1;
    } while (uVar130 < param_3);
  }
  return;
}

