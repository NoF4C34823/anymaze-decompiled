
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140196820(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
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
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [14];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [14];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [14];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [14];
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
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [14];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [14];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [14];
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
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  unkuint9 Var84;
  undefined1 auVar85 [11];
  undefined1 auVar86 [15];
  unkuint9 Var87;
  undefined1 auVar88 [11];
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
  undefined1 auVar99 [15];
  undefined1 auVar100 [11];
  undefined1 auVar101 [14];
  undefined1 auVar102 [14];
  undefined1 auVar103 [15];
  undefined1 auVar104 [11];
  undefined1 auVar105 [15];
  undefined1 auVar106 [11];
  undefined1 auVar107 [14];
  undefined1 auVar108 [14];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined6 uVar113;
  undefined1 auVar114 [12];
  undefined8 uVar115;
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [12];
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  undefined1 auVar125 [12];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar128 [15];
  undefined1 auVar129 [15];
  undefined1 auVar130 [12];
  undefined1 auVar131 [16];
  longlong lVar132;
  ulonglong uVar133;
  ulonglong uVar134;
  longlong lVar135;
  longlong lVar136;
  longlong lVar137;
  float *pfVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  longlong lVar141;
  longlong lVar142;
  longlong lVar143;
  ulonglong uVar144;
  ulonglong uVar145;
  uint uVar146;
  float fVar147;
  short sVar149;
  float fVar148;
  short sVar151;
  float fVar150;
  short sVar152;
  short sVar154;
  float fVar153;
  undefined1 auVar155 [16];
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  
  lVar141 = (longlong)(param_5 >> 1);
  uVar134 = param_3 * 3;
  lVar135 = lVar141 * 3;
  lVar132 = param_1 + lVar141 * -3;
  fVar7 = *param_4;
  if (0 < (longlong)uVar134) {
    if ((longlong)uVar134 < 8) {
LAB_140197033:
      uVar133 = 0;
    }
    else {
      uVar139 = param_2 & 0xf;
      if (uVar139 != 0) {
        if ((param_2 & 3) != 0) goto LAB_140197033;
        uVar139 = 0x10 - uVar139 >> 2;
      }
      if ((longlong)uVar134 < (longlong)(uVar139 + 8)) goto LAB_140197033;
      lVar136 = lVar141 * -3 + param_1;
      uVar133 = uVar134 - (uVar134 - uVar139 & 7);
      uVar140 = 0;
      if (uVar139 != 0) {
        do {
          *(float *)(param_2 + uVar140 * 4) =
               (float)((uint)*(byte *)(uVar140 + lVar136) +
                      (uint)*(byte *)(uVar140 + param_1 + lVar135)) * fVar7;
          uVar140 = uVar140 + 1;
        } while (uVar140 < uVar139);
      }
      do {
        uVar140 = *(ulonglong *)(uVar139 + lVar136);
        uVar145 = *(ulonglong *)(uVar139 + param_1 + lVar135);
        auVar11._8_6_ = 0;
        auVar11._0_8_ = uVar140;
        auVar11[0xe] = (char)(uVar140 >> 0x38);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar140;
        auVar27[0xc] = (char)(uVar140 >> 0x30);
        auVar27._13_2_ = auVar11._13_2_;
        auVar39._8_4_ = 0;
        auVar39._0_8_ = uVar140;
        auVar39._12_3_ = auVar27._12_3_;
        auVar47._8_2_ = 0;
        auVar47._0_8_ = uVar140;
        auVar47[10] = (char)(uVar140 >> 0x28);
        auVar47._11_4_ = auVar39._11_4_;
        auVar59._8_2_ = 0;
        auVar59._0_8_ = uVar140;
        auVar59._10_5_ = auVar47._10_5_;
        auVar67[8] = (char)(uVar140 >> 0x20);
        auVar67._0_8_ = uVar140;
        auVar67._9_6_ = auVar59._9_6_;
        auVar83._7_8_ = 0;
        auVar83._0_7_ = auVar67._8_7_;
        Var84 = CONCAT81(SUB158(auVar83 << 0x40,7),(char)(uVar140 >> 0x18));
        auVar109._9_6_ = 0;
        auVar109._0_9_ = Var84;
        auVar85._1_10_ = SUB1510(auVar109 << 0x30,5);
        auVar85[0] = (char)(uVar140 >> 0x10);
        auVar110._11_4_ = 0;
        auVar110._0_11_ = auVar85;
        auVar75[2] = (char)(uVar140 >> 8);
        auVar75._0_2_ = (ushort)uVar140;
        auVar75._3_12_ = SUB1512(auVar110 << 0x20,3);
        auVar12._8_6_ = 0;
        auVar12._0_8_ = uVar145;
        auVar12[0xe] = (char)(uVar145 >> 0x38);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar145;
        auVar28[0xc] = (char)(uVar145 >> 0x30);
        auVar28._13_2_ = auVar12._13_2_;
        auVar40._8_4_ = 0;
        auVar40._0_8_ = uVar145;
        auVar40._12_3_ = auVar28._12_3_;
        auVar48._8_2_ = 0;
        auVar48._0_8_ = uVar145;
        auVar48[10] = (char)(uVar145 >> 0x28);
        auVar48._11_4_ = auVar40._11_4_;
        auVar60._8_2_ = 0;
        auVar60._0_8_ = uVar145;
        auVar60._10_5_ = auVar48._10_5_;
        auVar68[8] = (char)(uVar145 >> 0x20);
        auVar68._0_8_ = uVar145;
        auVar68._9_6_ = auVar60._9_6_;
        auVar86._7_8_ = 0;
        auVar86._0_7_ = auVar68._8_7_;
        Var87 = CONCAT81(SUB158(auVar86 << 0x40,7),(char)(uVar145 >> 0x18));
        auVar111._9_6_ = 0;
        auVar111._0_9_ = Var87;
        auVar88._1_10_ = SUB1510(auVar111 << 0x30,5);
        auVar88[0] = (char)(uVar145 >> 0x10);
        auVar112._11_4_ = 0;
        auVar112._0_11_ = auVar88;
        auVar76[2] = (char)(uVar145 >> 8);
        auVar76._0_2_ = (ushort)uVar145;
        auVar76._3_12_ = SUB1512(auVar112 << 0x20,3);
        sVar149 = (short)Var84 + (short)Var87;
        uVar146 = CONCAT22(auVar67._8_2_ + auVar68._8_2_,sVar149);
        sVar151 = auVar47._10_2_ + auVar48._10_2_;
        uVar113 = CONCAT24(sVar151,uVar146);
        sVar152 = auVar27._12_2_ + auVar28._12_2_;
        sVar154 = (auVar11._13_2_ >> 8) + (auVar12._13_2_ >> 8);
        auVar114._4_8_ = 0;
        auVar114._0_4_ = uVar146;
        auVar13._12_2_ = sVar149;
        auVar13._0_12_ = auVar114 << 0x30;
        uVar115 = CONCAT44(auVar13._10_4_,CONCAT22(auVar85._0_2_ + auVar88._0_2_,sVar149));
        auVar89._6_8_ = 0;
        auVar89._0_6_ = (uint6)((ulonglong)uVar115 >> 0x10);
        uVar144 = (ulonglong)(CONCAT28(sVar154,CONCAT26(sVar152,uVar113)) >> 0x10);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar144;
        auVar14._12_2_ = sVar154;
        auVar29._8_2_ = sVar152;
        auVar29._0_8_ = uVar144;
        auVar29._10_4_ = auVar14._10_4_;
        auVar90._6_8_ = 0;
        auVar90._0_6_ = auVar29._8_6_;
        uVar146 = (uint)((uint6)uVar113 >> 0x10);
        auVar49._4_2_ = sVar151;
        auVar49._0_4_ = uVar146;
        auVar49._6_8_ = SUB148(auVar90 << 0x40,6);
        pfVar138 = (float *)(param_2 + uVar139 * 4);
        *pfVar138 = (float)(ushort)(((ushort)uVar140 & 0xff) + ((ushort)uVar145 & 0xff)) * fVar7;
        pfVar138[1] = (float)(int)CONCAT82(SUB148(auVar89 << 0x40,6),auVar75._2_2_ + auVar76._2_2_)
                      * fVar7;
        pfVar138[2] = (float)(int)((ulonglong)uVar115 >> 0x10) * fVar7;
        pfVar138[3] = (float)(auVar13._10_4_ >> 0x10) * fVar7;
        pfVar138 = (float *)(param_2 + 0x10 + uVar139 * 4);
        *pfVar138 = (float)(uVar146 & 0xffff) * fVar7;
        pfVar138[1] = (float)auVar49._4_4_ * fVar7;
        pfVar138[2] = (float)auVar29._8_4_ * fVar7;
        pfVar138[3] = (float)(auVar14._10_4_ >> 0x10) * fVar7;
        uVar139 = uVar139 + 8;
      } while (uVar139 < uVar133);
    }
    if (uVar133 < uVar134) {
      do {
        *(float *)(param_2 + uVar133 * 4) =
             (float)((uint)*(byte *)(uVar133 + lVar141 * -3 + param_1) +
                    (uint)*(byte *)(uVar133 + param_1 + lVar135)) * fVar7;
        uVar133 = uVar133 + 1;
      } while (uVar133 < uVar134);
    }
  }
  if (1 < lVar141) {
    lVar136 = 1;
    uVar139 = 0;
    if (lVar141 - 1U >> 1 != 0) {
      uVar133 = param_2 & 0xf;
      lVar137 = param_1 + lVar141 * -3;
      lVar136 = param_1 + lVar135;
      do {
        fVar7 = param_4[uVar139 * 2 + 1];
        lVar132 = lVar137 + 6;
        fVar8 = param_4[uVar139 * 2 + 2];
        if (0 < (longlong)uVar134) {
          if (((longlong)uVar134 < 8) ||
             (((uVar140 = uVar133, uVar133 != 0 &&
               (uVar140 = 0x10 - uVar133 >> 2, (param_2 & 3) != 0)) ||
              ((longlong)uVar134 < (longlong)(uVar140 + 8))))) {
            uVar145 = 0;
          }
          else {
            uVar144 = 0;
            uVar145 = uVar134 - (uVar134 - uVar140 & 7);
            lVar143 = lVar136;
            lVar142 = lVar137;
            if (uVar140 != 0) {
              do {
                *(float *)(param_2 + uVar144 * 4) =
                     (float)((uint)*(byte *)(lVar142 + 3) + (uint)*(byte *)(lVar143 + -3)) * fVar7 +
                     *(float *)(param_2 + uVar144 * 4) +
                     (float)((uint)*(byte *)(lVar142 + 6) + (uint)*(byte *)(lVar143 + -6)) * fVar8;
                uVar144 = uVar144 + 1;
                lVar143 = lVar143 + 1;
                lVar142 = lVar142 + 1;
              } while (uVar144 < uVar140);
            }
            lVar143 = uVar140 + lVar136;
            lVar142 = lVar137 + uVar140;
            do {
              uVar144 = *(ulonglong *)(lVar142 + 3);
              uVar9 = *(ulonglong *)(lVar143 + -3);
              auVar15._8_6_ = 0;
              auVar15._0_8_ = uVar144;
              auVar15[0xe] = (char)(uVar144 >> 0x38);
              auVar30._8_4_ = 0;
              auVar30._0_8_ = uVar144;
              auVar30[0xc] = (char)(uVar144 >> 0x30);
              auVar30._13_2_ = auVar15._13_2_;
              auVar41._8_4_ = 0;
              auVar41._0_8_ = uVar144;
              auVar41._12_3_ = auVar30._12_3_;
              auVar50._8_2_ = 0;
              auVar50._0_8_ = uVar144;
              auVar50[10] = (char)(uVar144 >> 0x28);
              auVar50._11_4_ = auVar41._11_4_;
              auVar61._8_2_ = 0;
              auVar61._0_8_ = uVar144;
              auVar61._10_5_ = auVar50._10_5_;
              auVar69[8] = (char)(uVar144 >> 0x20);
              auVar69._0_8_ = uVar144;
              auVar69._9_6_ = auVar61._9_6_;
              auVar91._7_8_ = 0;
              auVar91._0_7_ = auVar69._8_7_;
              Var84 = CONCAT81(SUB158(auVar91 << 0x40,7),(char)(uVar144 >> 0x18));
              auVar116._9_6_ = 0;
              auVar116._0_9_ = Var84;
              auVar92._1_10_ = SUB1510(auVar116 << 0x30,5);
              auVar92[0] = (char)(uVar144 >> 0x10);
              auVar117._11_4_ = 0;
              auVar117._0_11_ = auVar92;
              auVar77[2] = (char)(uVar144 >> 8);
              auVar77._0_2_ = (ushort)uVar144;
              auVar77._3_12_ = SUB1512(auVar117 << 0x20,3);
              auVar16._8_6_ = 0;
              auVar16._0_8_ = uVar9;
              auVar16[0xe] = (char)(uVar9 >> 0x38);
              auVar31._8_4_ = 0;
              auVar31._0_8_ = uVar9;
              auVar31[0xc] = (char)(uVar9 >> 0x30);
              auVar31._13_2_ = auVar16._13_2_;
              auVar42._8_4_ = 0;
              auVar42._0_8_ = uVar9;
              auVar42._12_3_ = auVar31._12_3_;
              auVar51._8_2_ = 0;
              auVar51._0_8_ = uVar9;
              auVar51[10] = (char)(uVar9 >> 0x28);
              auVar51._11_4_ = auVar42._11_4_;
              auVar62._8_2_ = 0;
              auVar62._0_8_ = uVar9;
              auVar62._10_5_ = auVar51._10_5_;
              auVar70[8] = (char)(uVar9 >> 0x20);
              auVar70._0_8_ = uVar9;
              auVar70._9_6_ = auVar62._9_6_;
              auVar93._7_8_ = 0;
              auVar93._0_7_ = auVar70._8_7_;
              Var87 = CONCAT81(SUB158(auVar93 << 0x40,7),(char)(uVar9 >> 0x18));
              auVar118._9_6_ = 0;
              auVar118._0_9_ = Var87;
              auVar94._1_10_ = SUB1510(auVar118 << 0x30,5);
              auVar94[0] = (char)(uVar9 >> 0x10);
              auVar119._11_4_ = 0;
              auVar119._0_11_ = auVar94;
              auVar78[2] = (char)(uVar9 >> 8);
              auVar78._0_2_ = (ushort)uVar9;
              auVar78._3_12_ = SUB1512(auVar119 << 0x20,3);
              sVar149 = (short)Var84 + (short)Var87;
              uVar146 = CONCAT22(auVar69._8_2_ + auVar70._8_2_,sVar149);
              sVar151 = auVar50._10_2_ + auVar51._10_2_;
              uVar113 = CONCAT24(sVar151,uVar146);
              sVar152 = auVar30._12_2_ + auVar31._12_2_;
              sVar154 = (auVar15._13_2_ >> 8) + (auVar16._13_2_ >> 8);
              auVar120._4_8_ = 0;
              auVar120._0_4_ = uVar146;
              auVar17._12_2_ = sVar149;
              auVar17._0_12_ = auVar120 << 0x30;
              uVar115 = CONCAT44(auVar17._10_4_,CONCAT22(auVar92._0_2_ + auVar94._0_2_,sVar149));
              auVar95._6_8_ = 0;
              auVar95._0_6_ = (uint6)((ulonglong)uVar115 >> 0x10);
              uVar10 = (ulonglong)(CONCAT28(sVar154,CONCAT26(sVar152,uVar113)) >> 0x10);
              auVar18._8_4_ = 0;
              auVar18._0_8_ = uVar10;
              auVar18._12_2_ = sVar154;
              auVar32._8_2_ = sVar152;
              auVar32._0_8_ = uVar10;
              auVar32._10_4_ = auVar18._10_4_;
              auVar96._6_8_ = 0;
              auVar96._0_6_ = auVar32._8_6_;
              uVar146 = (uint)((uint6)uVar113 >> 0x10);
              auVar52._4_2_ = sVar151;
              auVar52._0_4_ = uVar146;
              auVar52._6_8_ = SUB148(auVar96 << 0x40,6);
              pfVar138 = (float *)(param_2 + uVar140 * 4);
              fVar156 = (float)(ushort)(((ushort)uVar144 & 0xff) + ((ushort)uVar9 & 0xff)) * fVar7 +
                        *pfVar138;
              fVar157 = (float)(int)CONCAT82(SUB148(auVar95 << 0x40,6),auVar77._2_2_ + auVar78._2_2_
                                            ) * fVar7 + pfVar138[1];
              fVar158 = (float)(int)((ulonglong)uVar115 >> 0x10) * fVar7 + pfVar138[2];
              fVar159 = (float)(auVar17._10_4_ >> 0x10) * fVar7 + pfVar138[3];
              pfVar138 = (float *)(param_2 + 0x10 + uVar140 * 4);
              fVar147 = (float)(uVar146 & 0xffff) * fVar7 + *pfVar138;
              fVar148 = (float)auVar52._4_4_ * fVar7 + pfVar138[1];
              fVar150 = (float)auVar32._8_4_ * fVar7 + pfVar138[2];
              fVar153 = (float)(auVar18._10_4_ >> 0x10) * fVar7 + pfVar138[3];
              pfVar138 = (float *)(param_2 + uVar140 * 4);
              *pfVar138 = fVar156;
              pfVar138[1] = fVar157;
              pfVar138[2] = fVar158;
              pfVar138[3] = fVar159;
              pfVar138 = (float *)(param_2 + 0x10 + uVar140 * 4);
              *pfVar138 = fVar147;
              pfVar138[1] = fVar148;
              pfVar138[2] = fVar150;
              pfVar138[3] = fVar153;
              uVar144 = *(ulonglong *)(lVar142 + 6);
              lVar142 = lVar142 + 8;
              uVar9 = *(ulonglong *)(lVar143 + -6);
              lVar143 = lVar143 + 8;
              auVar19._8_6_ = 0;
              auVar19._0_8_ = uVar144;
              auVar19[0xe] = (char)(uVar144 >> 0x38);
              auVar33._8_4_ = 0;
              auVar33._0_8_ = uVar144;
              auVar33[0xc] = (char)(uVar144 >> 0x30);
              auVar33._13_2_ = auVar19._13_2_;
              auVar43._8_4_ = 0;
              auVar43._0_8_ = uVar144;
              auVar43._12_3_ = auVar33._12_3_;
              auVar53._8_2_ = 0;
              auVar53._0_8_ = uVar144;
              auVar53[10] = (char)(uVar144 >> 0x28);
              auVar53._11_4_ = auVar43._11_4_;
              auVar63._8_2_ = 0;
              auVar63._0_8_ = uVar144;
              auVar63._10_5_ = auVar53._10_5_;
              auVar71[8] = (char)(uVar144 >> 0x20);
              auVar71._0_8_ = uVar144;
              auVar71._9_6_ = auVar63._9_6_;
              auVar97._7_8_ = 0;
              auVar97._0_7_ = auVar71._8_7_;
              Var84 = CONCAT81(SUB158(auVar97 << 0x40,7),(char)(uVar144 >> 0x18));
              auVar121._9_6_ = 0;
              auVar121._0_9_ = Var84;
              auVar98._1_10_ = SUB1510(auVar121 << 0x30,5);
              auVar98[0] = (char)(uVar144 >> 0x10);
              auVar122._11_4_ = 0;
              auVar122._0_11_ = auVar98;
              auVar79[2] = (char)(uVar144 >> 8);
              auVar79._0_2_ = (ushort)uVar144;
              auVar79._3_12_ = SUB1512(auVar122 << 0x20,3);
              auVar20._8_6_ = 0;
              auVar20._0_8_ = uVar9;
              auVar20[0xe] = (char)(uVar9 >> 0x38);
              auVar34._8_4_ = 0;
              auVar34._0_8_ = uVar9;
              auVar34[0xc] = (char)(uVar9 >> 0x30);
              auVar34._13_2_ = auVar20._13_2_;
              auVar44._8_4_ = 0;
              auVar44._0_8_ = uVar9;
              auVar44._12_3_ = auVar34._12_3_;
              auVar54._8_2_ = 0;
              auVar54._0_8_ = uVar9;
              auVar54[10] = (char)(uVar9 >> 0x28);
              auVar54._11_4_ = auVar44._11_4_;
              auVar64._8_2_ = 0;
              auVar64._0_8_ = uVar9;
              auVar64._10_5_ = auVar54._10_5_;
              auVar72[8] = (char)(uVar9 >> 0x20);
              auVar72._0_8_ = uVar9;
              auVar72._9_6_ = auVar64._9_6_;
              auVar99._7_8_ = 0;
              auVar99._0_7_ = auVar72._8_7_;
              Var87 = CONCAT81(SUB158(auVar99 << 0x40,7),(char)(uVar9 >> 0x18));
              auVar123._9_6_ = 0;
              auVar123._0_9_ = Var87;
              auVar100._1_10_ = SUB1510(auVar123 << 0x30,5);
              auVar100[0] = (char)(uVar9 >> 0x10);
              auVar124._11_4_ = 0;
              auVar124._0_11_ = auVar100;
              auVar80[2] = (char)(uVar9 >> 8);
              auVar80._0_2_ = (ushort)uVar9;
              auVar80._3_12_ = SUB1512(auVar124 << 0x20,3);
              sVar149 = (short)Var84 + (short)Var87;
              uVar146 = CONCAT22(auVar71._8_2_ + auVar72._8_2_,sVar149);
              sVar151 = auVar53._10_2_ + auVar54._10_2_;
              uVar113 = CONCAT24(sVar151,uVar146);
              sVar152 = auVar33._12_2_ + auVar34._12_2_;
              sVar154 = (auVar19._13_2_ >> 8) + (auVar20._13_2_ >> 8);
              auVar125._4_8_ = 0;
              auVar125._0_4_ = uVar146;
              auVar21._12_2_ = sVar149;
              auVar21._0_12_ = auVar125 << 0x30;
              uVar115 = CONCAT44(auVar21._10_4_,CONCAT22(auVar98._0_2_ + auVar100._0_2_,sVar149));
              auVar101._6_8_ = 0;
              auVar101._0_6_ = (uint6)((ulonglong)uVar115 >> 0x10);
              uVar10 = (ulonglong)(CONCAT28(sVar154,CONCAT26(sVar152,uVar113)) >> 0x10);
              auVar22._8_4_ = 0;
              auVar22._0_8_ = uVar10;
              auVar22._12_2_ = sVar154;
              auVar35._8_2_ = sVar152;
              auVar35._0_8_ = uVar10;
              auVar35._10_4_ = auVar22._10_4_;
              auVar102._6_8_ = 0;
              auVar102._0_6_ = auVar35._8_6_;
              uVar146 = (uint)((uint6)uVar113 >> 0x10);
              auVar55._4_2_ = sVar151;
              auVar55._0_4_ = uVar146;
              auVar55._6_8_ = SUB148(auVar102 << 0x40,6);
              pfVar138 = (float *)(param_2 + uVar140 * 4);
              *pfVar138 = fVar156 + (float)(ushort)(((ushort)uVar144 & 0xff) +
                                                   ((ushort)uVar9 & 0xff)) * fVar8;
              pfVar138[1] = fVar157 + (float)(int)CONCAT82(SUB148(auVar101 << 0x40,6),
                                                           auVar79._2_2_ + auVar80._2_2_) * fVar8;
              pfVar138[2] = fVar158 + (float)(int)((ulonglong)uVar115 >> 0x10) * fVar8;
              pfVar138[3] = fVar159 + (float)(auVar21._10_4_ >> 0x10) * fVar8;
              pfVar138 = (float *)(param_2 + 0x10 + uVar140 * 4);
              *pfVar138 = fVar147 + (float)(uVar146 & 0xffff) * fVar8;
              pfVar138[1] = fVar148 + (float)auVar55._4_4_ * fVar8;
              pfVar138[2] = fVar150 + (float)auVar35._8_4_ * fVar8;
              pfVar138[3] = fVar153 + (float)(auVar22._10_4_ >> 0x10) * fVar8;
              uVar140 = uVar140 + 8;
            } while (uVar140 < uVar145);
          }
          lVar143 = lVar137 + uVar145;
          if (uVar145 < uVar134) {
            lVar142 = uVar145 + lVar136;
            do {
              pbVar4 = (byte *)(lVar143 + 3);
              pbVar1 = (byte *)(lVar142 + -3);
              pbVar2 = (byte *)(lVar142 + -6);
              lVar142 = lVar142 + 1;
              pbVar5 = (byte *)(lVar143 + 6);
              lVar143 = lVar143 + 1;
              *(float *)(param_2 + uVar145 * 4) =
                   (float)((uint)*pbVar4 + (uint)*pbVar1) * fVar7 +
                   *(float *)(param_2 + uVar145 * 4) +
                   (float)((uint)*pbVar5 + (uint)*pbVar2) * fVar8;
              uVar145 = uVar145 + 1;
            } while (uVar145 < uVar134);
          }
        }
        uVar139 = uVar139 + 1;
        lVar136 = lVar136 + -6;
        lVar137 = lVar137 + 6;
      } while (uVar139 < lVar141 - 1U >> 1);
      lVar136 = uVar139 * 2 + 1;
    }
    if (lVar141 != lVar136) {
      lVar137 = lVar136 * 3;
      lVar132 = param_1 + lVar141 * -3 + lVar137;
      fVar7 = param_4[lVar136];
      if (0 < (longlong)uVar134) {
        if ((longlong)uVar134 < 8) {
LAB_140197024:
          uVar133 = 0;
        }
        else {
          uVar139 = param_2 & 0xf;
          if (uVar139 != 0) {
            if ((param_2 & 3) != 0) goto LAB_140197024;
            uVar139 = 0x10 - uVar139 >> 2;
          }
          if ((longlong)uVar134 < (longlong)(uVar139 + 8)) goto LAB_140197024;
          uVar133 = uVar134 - (uVar134 - uVar139 & 7);
          lVar142 = param_1 + lVar141 * -3 + lVar137;
          lVar143 = param_1 + lVar135 + lVar136 * -3;
          uVar140 = 0;
          if (uVar139 != 0) {
            do {
              *(float *)(param_2 + uVar140 * 4) =
                   (float)((uint)*(byte *)(uVar140 + lVar142) + (uint)*(byte *)(uVar140 + lVar143))
                   * fVar7 + *(float *)(param_2 + uVar140 * 4);
              uVar140 = uVar140 + 1;
            } while (uVar140 < uVar139);
          }
          do {
            uVar140 = *(ulonglong *)(uVar139 + lVar142);
            uVar145 = *(ulonglong *)(uVar139 + lVar143);
            auVar23._8_6_ = 0;
            auVar23._0_8_ = uVar140;
            auVar23[0xe] = (char)(uVar140 >> 0x38);
            auVar36._8_4_ = 0;
            auVar36._0_8_ = uVar140;
            auVar36[0xc] = (char)(uVar140 >> 0x30);
            auVar36._13_2_ = auVar23._13_2_;
            auVar45._8_4_ = 0;
            auVar45._0_8_ = uVar140;
            auVar45._12_3_ = auVar36._12_3_;
            auVar56._8_2_ = 0;
            auVar56._0_8_ = uVar140;
            auVar56[10] = (char)(uVar140 >> 0x28);
            auVar56._11_4_ = auVar45._11_4_;
            auVar65._8_2_ = 0;
            auVar65._0_8_ = uVar140;
            auVar65._10_5_ = auVar56._10_5_;
            auVar73[8] = (char)(uVar140 >> 0x20);
            auVar73._0_8_ = uVar140;
            auVar73._9_6_ = auVar65._9_6_;
            auVar103._7_8_ = 0;
            auVar103._0_7_ = auVar73._8_7_;
            Var84 = CONCAT81(SUB158(auVar103 << 0x40,7),(char)(uVar140 >> 0x18));
            auVar126._9_6_ = 0;
            auVar126._0_9_ = Var84;
            auVar104._1_10_ = SUB1510(auVar126 << 0x30,5);
            auVar104[0] = (char)(uVar140 >> 0x10);
            auVar127._11_4_ = 0;
            auVar127._0_11_ = auVar104;
            auVar81[2] = (char)(uVar140 >> 8);
            auVar81._0_2_ = (ushort)uVar140;
            auVar81._3_12_ = SUB1512(auVar127 << 0x20,3);
            auVar24._8_6_ = 0;
            auVar24._0_8_ = uVar145;
            auVar24[0xe] = (char)(uVar145 >> 0x38);
            auVar37._8_4_ = 0;
            auVar37._0_8_ = uVar145;
            auVar37[0xc] = (char)(uVar145 >> 0x30);
            auVar37._13_2_ = auVar24._13_2_;
            auVar46._8_4_ = 0;
            auVar46._0_8_ = uVar145;
            auVar46._12_3_ = auVar37._12_3_;
            auVar57._8_2_ = 0;
            auVar57._0_8_ = uVar145;
            auVar57[10] = (char)(uVar145 >> 0x28);
            auVar57._11_4_ = auVar46._11_4_;
            auVar66._8_2_ = 0;
            auVar66._0_8_ = uVar145;
            auVar66._10_5_ = auVar57._10_5_;
            auVar74[8] = (char)(uVar145 >> 0x20);
            auVar74._0_8_ = uVar145;
            auVar74._9_6_ = auVar66._9_6_;
            auVar105._7_8_ = 0;
            auVar105._0_7_ = auVar74._8_7_;
            Var87 = CONCAT81(SUB158(auVar105 << 0x40,7),(char)(uVar145 >> 0x18));
            auVar128._9_6_ = 0;
            auVar128._0_9_ = Var87;
            auVar106._1_10_ = SUB1510(auVar128 << 0x30,5);
            auVar106[0] = (char)(uVar145 >> 0x10);
            auVar129._11_4_ = 0;
            auVar129._0_11_ = auVar106;
            auVar82[2] = (char)(uVar145 >> 8);
            auVar82._0_2_ = (ushort)uVar145;
            auVar82._3_12_ = SUB1512(auVar129 << 0x20,3);
            sVar149 = (short)Var84 + (short)Var87;
            uVar146 = CONCAT22(auVar73._8_2_ + auVar74._8_2_,sVar149);
            sVar151 = auVar56._10_2_ + auVar57._10_2_;
            uVar113 = CONCAT24(sVar151,uVar146);
            sVar152 = auVar36._12_2_ + auVar37._12_2_;
            sVar154 = (auVar23._13_2_ >> 8) + (auVar24._13_2_ >> 8);
            auVar130._4_8_ = 0;
            auVar130._0_4_ = uVar146;
            auVar25._12_2_ = sVar149;
            auVar25._0_12_ = auVar130 << 0x30;
            uVar115 = CONCAT44(auVar25._10_4_,CONCAT22(auVar104._0_2_ + auVar106._0_2_,sVar149));
            auVar107._6_8_ = 0;
            auVar107._0_6_ = (uint6)((ulonglong)uVar115 >> 0x10);
            uVar144 = (ulonglong)(CONCAT28(sVar154,CONCAT26(sVar152,uVar113)) >> 0x10);
            auVar26._8_4_ = 0;
            auVar26._0_8_ = uVar144;
            auVar26._12_2_ = sVar154;
            auVar38._8_2_ = sVar152;
            auVar38._0_8_ = uVar144;
            auVar38._10_4_ = auVar26._10_4_;
            auVar108._6_8_ = 0;
            auVar108._0_6_ = auVar38._8_6_;
            uVar146 = (uint)((uint6)uVar113 >> 0x10);
            auVar58._4_2_ = sVar151;
            auVar58._0_4_ = uVar146;
            auVar58._6_8_ = SUB148(auVar108 << 0x40,6);
            pfVar138 = (float *)(param_2 + uVar139 * 4);
            fVar8 = pfVar138[1];
            fVar147 = pfVar138[2];
            fVar148 = pfVar138[3];
            pfVar6 = (float *)(param_2 + 0x10 + uVar139 * 4);
            fVar150 = *pfVar6;
            fVar153 = pfVar6[1];
            fVar156 = pfVar6[2];
            fVar157 = pfVar6[3];
            pfVar6 = (float *)(param_2 + uVar139 * 4);
            *pfVar6 = (float)(ushort)(((ushort)uVar140 & 0xff) + ((ushort)uVar145 & 0xff)) * fVar7 +
                      *pfVar138;
            pfVar6[1] = (float)(int)CONCAT82(SUB148(auVar107 << 0x40,6),
                                             auVar81._2_2_ + auVar82._2_2_) * fVar7 + fVar8;
            pfVar6[2] = (float)(int)((ulonglong)uVar115 >> 0x10) * fVar7 + fVar147;
            pfVar6[3] = (float)(auVar25._10_4_ >> 0x10) * fVar7 + fVar148;
            pfVar138 = (float *)(param_2 + 0x10 + uVar139 * 4);
            *pfVar138 = (float)(uVar146 & 0xffff) * fVar7 + fVar150;
            pfVar138[1] = (float)auVar58._4_4_ * fVar7 + fVar153;
            pfVar138[2] = (float)auVar38._8_4_ * fVar7 + fVar156;
            pfVar138[3] = (float)(auVar26._10_4_ >> 0x10) * fVar7 + fVar157;
            uVar139 = uVar139 + 8;
          } while (uVar139 < uVar133);
        }
        if (uVar133 < uVar134) {
          do {
            *(float *)(param_2 + uVar133 * 4) =
                 (float)((uint)*(byte *)(uVar133 + param_1 + lVar141 * -3 + lVar137) +
                        (uint)*(byte *)(uVar133 + param_1 + lVar135 + lVar136 * -3)) * fVar7 +
                 *(float *)(param_2 + uVar133 * 4);
            uVar133 = uVar133 + 1;
          } while (uVar133 < uVar134);
        }
      }
    }
  }
  fVar7 = param_4[lVar141];
  if ((longlong)uVar134 < 1) {
    return;
  }
  if ((longlong)uVar134 < 8) {
LAB_140197018:
    uVar133 = 0;
    if (uVar134 == 0) {
      return;
    }
  }
  else {
    uVar139 = param_2 & 0xf;
    if (uVar139 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140197018;
      uVar139 = 0x10 - uVar139 >> 2;
    }
    if ((longlong)uVar134 < (longlong)(uVar139 + 8)) goto LAB_140197018;
    uVar140 = 0;
    uVar133 = uVar134 - (uVar134 - uVar139 & 7);
    if (uVar139 != 0) {
      do {
        *(float *)(param_2 + uVar140 * 4) =
             (float)*(byte *)(uVar140 + 3 + lVar132) * fVar7 + *(float *)(param_2 + uVar140 * 4);
        uVar140 = uVar140 + 1;
      } while (uVar140 < uVar139);
    }
    auVar131 = _DAT_143087f40;
    lVar135 = lVar132 + uVar139;
    do {
      auVar155 = pshufb(ZEXT416(*(uint *)(lVar135 + 3)),auVar131);
      pfVar138 = (float *)(param_2 + uVar139 * 4);
      fVar8 = pfVar138[1];
      fVar147 = pfVar138[2];
      fVar148 = pfVar138[3];
      pfVar6 = (float *)(param_2 + uVar139 * 4);
      *pfVar6 = (float)auVar155._0_4_ * fVar7 + *pfVar138;
      pfVar6[1] = (float)auVar155._4_4_ * fVar7 + fVar8;
      pfVar6[2] = (float)auVar155._8_4_ * fVar7 + fVar147;
      pfVar6[3] = (float)auVar155._12_4_ * fVar7 + fVar148;
      puVar3 = (uint *)(lVar135 + 7);
      lVar135 = lVar135 + 8;
      auVar155 = pshufb(ZEXT416(*puVar3),auVar131);
      pfVar138 = (float *)(param_2 + 0x10 + uVar139 * 4);
      fVar8 = pfVar138[1];
      fVar147 = pfVar138[2];
      fVar148 = pfVar138[3];
      pfVar6 = (float *)(param_2 + 0x10 + uVar139 * 4);
      *pfVar6 = (float)auVar155._0_4_ * fVar7 + *pfVar138;
      pfVar6[1] = (float)auVar155._4_4_ * fVar7 + fVar8;
      pfVar6[2] = (float)auVar155._8_4_ * fVar7 + fVar147;
      pfVar6[3] = (float)auVar155._12_4_ * fVar7 + fVar148;
      uVar139 = uVar139 + 8;
    } while (uVar139 < uVar133);
    if (uVar134 < uVar133 + 1) {
      return;
    }
    uVar134 = uVar134 - uVar133;
    if (3 < (longlong)uVar134) {
      uVar139 = uVar134 & 0xfffffffffffffffc;
      uVar140 = 0;
      pfVar138 = (float *)(uVar133 * 4 + param_2);
      do {
        lVar135 = uVar140 + 3;
        uVar140 = uVar140 + 4;
        auVar155 = pshufb(ZEXT416(*(uint *)(lVar135 + lVar132 + uVar133)),auVar131);
        *pfVar138 = (float)auVar155._0_4_ * fVar7 + *pfVar138;
        pfVar138[1] = (float)auVar155._4_4_ * fVar7 + pfVar138[1];
        pfVar138[2] = (float)auVar155._8_4_ * fVar7 + pfVar138[2];
        pfVar138[3] = (float)auVar155._12_4_ * fVar7 + pfVar138[3];
        pfVar138 = pfVar138 + 4;
      } while (uVar140 < uVar139);
      goto LAB_140196fa4;
    }
  }
  uVar139 = 0;
LAB_140196fa4:
  if (uVar139 < uVar134) {
    pfVar138 = (float *)(uVar139 * 4 + param_2 + uVar133 * 4);
    do {
      lVar135 = uVar139 + 3;
      uVar139 = uVar139 + 1;
      *pfVar138 = (float)*(byte *)(lVar135 + lVar132 + uVar133) * fVar7 + *pfVar138;
      pfVar138 = pfVar138 + 1;
    } while (uVar139 < uVar134);
  }
  return;
}

