
void FUN_1406591c0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  float *pfVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong lVar47;
  ulonglong uVar48;
  longlong lVar49;
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [16];
  undefined1 auVar87 [16];
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  undefined1 auVar96 [16];
  undefined1 auVar99 [16];
  undefined1 auVar102 [16];
  undefined1 auVar105 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined2 uVar53;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  
  lVar44 = (longlong)(param_5 >> 1);
  fVar6 = *param_4;
  lVar43 = lVar44 * -2 + param_1;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_140659ace:
      uVar40 = 0;
      if (param_3 == 0) goto LAB_1406593c6;
      uVar38 = 0;
      uVar42 = param_3;
    }
    else {
      uVar42 = param_2 & 0xf;
      if (uVar42 != 0) {
        if ((param_2 & 3) != 0) goto LAB_140659ace;
        uVar42 = 0x10 - uVar42 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar42 + 8)) goto LAB_140659ace;
      lVar36 = lVar44 * -2 + param_1;
      uVar38 = 0;
      uVar40 = param_3 - (param_3 - uVar42 & 7);
      lVar37 = param_1 + lVar44 * 2;
      if (uVar42 != 0) {
        do {
          *(float *)(param_2 + uVar38 * 4) =
               (float)((int)*(short *)(lVar36 + uVar38 * 2) + (int)*(short *)(lVar37 + uVar38 * 2))
               * fVar6;
          uVar38 = uVar38 + 1;
        } while (uVar38 < uVar42);
      }
      do {
        uVar38 = *(ulonglong *)(lVar36 + uVar42 * 2);
        uVar48 = *(ulonglong *)(lVar37 + uVar42 * 2);
        uVar53 = (undefined2)(uVar38 >> 0x30);
        auVar83._8_4_ = 0;
        auVar83._0_8_ = uVar38;
        auVar83._12_2_ = uVar53;
        auVar83._14_2_ = uVar53;
        uVar53 = (undefined2)(uVar38 >> 0x20);
        auVar82._12_4_ = auVar83._12_4_;
        auVar82._8_2_ = 0;
        auVar82._0_8_ = uVar38;
        auVar82._10_2_ = uVar53;
        auVar81._10_6_ = auVar82._10_6_;
        auVar81._8_2_ = uVar53;
        auVar81._0_8_ = uVar38;
        uVar53 = (undefined2)(uVar38 >> 0x10);
        auVar17._4_8_ = auVar81._8_8_;
        auVar17._2_2_ = uVar53;
        auVar17._0_2_ = uVar53;
        uVar53 = (undefined2)(uVar48 >> 0x30);
        auVar59._8_4_ = 0;
        auVar59._0_8_ = uVar48;
        auVar59._12_2_ = uVar53;
        auVar59._14_2_ = uVar53;
        uVar53 = (undefined2)(uVar48 >> 0x20);
        auVar58._12_4_ = auVar59._12_4_;
        auVar58._8_2_ = 0;
        auVar58._0_8_ = uVar48;
        auVar58._10_2_ = uVar53;
        auVar57._10_6_ = auVar58._10_6_;
        auVar57._8_2_ = uVar53;
        auVar57._0_8_ = uVar48;
        uVar53 = (undefined2)(uVar48 >> 0x10);
        auVar18._4_8_ = auVar57._8_8_;
        auVar18._2_2_ = uVar53;
        auVar18._0_2_ = uVar53;
        uVar46 = *(ulonglong *)(lVar37 + 8 + uVar42 * 2);
        uVar8 = *(ulonglong *)(lVar36 + 8 + uVar42 * 2);
        uVar53 = (undefined2)(uVar8 >> 0x30);
        auVar62._8_4_ = 0;
        auVar62._0_8_ = uVar8;
        auVar62._12_2_ = uVar53;
        auVar62._14_2_ = uVar53;
        uVar53 = (undefined2)(uVar8 >> 0x20);
        auVar61._12_4_ = auVar62._12_4_;
        auVar61._8_2_ = 0;
        auVar61._0_8_ = uVar8;
        auVar61._10_2_ = uVar53;
        auVar60._10_6_ = auVar61._10_6_;
        auVar60._8_2_ = uVar53;
        auVar60._0_8_ = uVar8;
        uVar53 = (undefined2)(uVar8 >> 0x10);
        auVar19._4_8_ = auVar60._8_8_;
        auVar19._2_2_ = uVar53;
        auVar19._0_2_ = uVar53;
        uVar53 = (undefined2)(uVar46 >> 0x30);
        auVar98._8_4_ = 0;
        auVar98._0_8_ = uVar46;
        auVar98._12_2_ = uVar53;
        auVar98._14_2_ = uVar53;
        uVar53 = (undefined2)(uVar46 >> 0x20);
        auVar97._12_4_ = auVar98._12_4_;
        auVar97._8_2_ = 0;
        auVar97._0_8_ = uVar46;
        auVar97._10_2_ = uVar53;
        auVar96._10_6_ = auVar97._10_6_;
        auVar96._8_2_ = uVar53;
        auVar96._0_8_ = uVar46;
        uVar53 = (undefined2)(uVar46 >> 0x10);
        auVar20._4_8_ = auVar96._8_8_;
        auVar20._2_2_ = uVar53;
        auVar20._0_2_ = uVar53;
        pfVar39 = (float *)(param_2 + uVar42 * 4);
        *pfVar39 = (float)((int)(short)uVar38 + (int)(short)uVar48) * fVar6;
        pfVar39[1] = (float)((auVar17._0_4_ >> 0x10) + (auVar18._0_4_ >> 0x10)) * fVar6;
        pfVar39[2] = (float)((auVar81._8_4_ >> 0x10) + (auVar57._8_4_ >> 0x10)) * fVar6;
        pfVar39[3] = (float)((auVar82._12_4_ >> 0x10) + (auVar58._12_4_ >> 0x10)) * fVar6;
        pfVar39 = (float *)(param_2 + 0x10 + uVar42 * 4);
        *pfVar39 = (float)((int)(short)uVar8 + (int)(short)uVar46) * fVar6;
        pfVar39[1] = (float)((auVar19._0_4_ >> 0x10) + (auVar20._0_4_ >> 0x10)) * fVar6;
        pfVar39[2] = (float)((auVar60._8_4_ >> 0x10) + (auVar96._8_4_ >> 0x10)) * fVar6;
        pfVar39[3] = (float)((auVar61._12_4_ >> 0x10) + (auVar97._12_4_ >> 0x10)) * fVar6;
        uVar42 = uVar42 + 8;
      } while (uVar42 < uVar40);
      if (param_3 < uVar40 + 1) goto LAB_1406593c6;
      uVar42 = param_3 - uVar40;
      if ((longlong)uVar42 < 4) {
        uVar38 = 0;
      }
      else {
        uVar48 = 0;
        uVar38 = uVar42 & 0xfffffffffffffffc;
        do {
          uVar46 = *(ulonglong *)(lVar36 + uVar40 * 2 + uVar48 * 2);
          uVar8 = *(ulonglong *)(lVar37 + uVar40 * 2 + uVar48 * 2);
          uVar53 = (undefined2)(uVar46 >> 0x30);
          auVar86._8_4_ = 0;
          auVar86._0_8_ = uVar46;
          auVar86._12_2_ = uVar53;
          auVar86._14_2_ = uVar53;
          uVar53 = (undefined2)(uVar46 >> 0x20);
          auVar85._12_4_ = auVar86._12_4_;
          auVar85._8_2_ = 0;
          auVar85._0_8_ = uVar46;
          auVar85._10_2_ = uVar53;
          auVar84._10_6_ = auVar85._10_6_;
          auVar84._8_2_ = uVar53;
          auVar84._0_8_ = uVar46;
          uVar53 = (undefined2)(uVar46 >> 0x10);
          auVar21._4_8_ = auVar84._8_8_;
          auVar21._2_2_ = uVar53;
          auVar21._0_2_ = uVar53;
          uVar53 = (undefined2)(uVar8 >> 0x30);
          auVar65._8_4_ = 0;
          auVar65._0_8_ = uVar8;
          auVar65._12_2_ = uVar53;
          auVar65._14_2_ = uVar53;
          uVar53 = (undefined2)(uVar8 >> 0x20);
          auVar64._12_4_ = auVar65._12_4_;
          auVar64._8_2_ = 0;
          auVar64._0_8_ = uVar8;
          auVar64._10_2_ = uVar53;
          auVar63._10_6_ = auVar64._10_6_;
          auVar63._8_2_ = uVar53;
          auVar63._0_8_ = uVar8;
          uVar53 = (undefined2)(uVar8 >> 0x10);
          auVar22._4_8_ = auVar63._8_8_;
          auVar22._2_2_ = uVar53;
          auVar22._0_2_ = uVar53;
          pfVar39 = (float *)(param_2 + uVar40 * 4 + uVar48 * 4);
          *pfVar39 = (float)((int)(short)uVar46 + (int)(short)uVar8) * fVar6;
          pfVar39[1] = (float)((auVar21._0_4_ >> 0x10) + (auVar22._0_4_ >> 0x10)) * fVar6;
          pfVar39[2] = (float)((auVar84._8_4_ >> 0x10) + (auVar63._8_4_ >> 0x10)) * fVar6;
          pfVar39[3] = (float)((auVar85._12_4_ >> 0x10) + (auVar64._12_4_ >> 0x10)) * fVar6;
          uVar48 = uVar48 + 4;
        } while (uVar48 < uVar38);
      }
    }
    if (uVar38 < uVar42) {
      do {
        *(float *)(param_2 + uVar40 * 4 + uVar38 * 4) =
             (float)((int)*(short *)(lVar44 * -2 + param_1 + uVar40 * 2 + uVar38 * 2) +
                    (int)*(short *)(param_1 + lVar44 * 2 + uVar40 * 2 + uVar38 * 2)) * fVar6;
        uVar38 = uVar38 + 1;
      } while (uVar38 < uVar42);
    }
  }
LAB_1406593c6:
  if (1 < lVar44) {
    lVar37 = 1;
    lVar36 = 0;
    if (lVar44 - 1U >> 1 != 0) {
      uVar40 = param_2 & 0xf;
      lVar37 = param_1 + lVar44 * 2;
      lVar41 = lVar44 * -2 + param_1;
      uVar42 = 0;
      do {
        uVar38 = uVar42;
        fVar6 = param_4[uVar38 * 2 + 1];
        lVar43 = lVar41 + 4;
        fVar7 = param_4[uVar38 * 2 + 2];
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 4) ||
             (((uVar42 = uVar40, uVar40 != 0 && (uVar42 = 0x10 - uVar40 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar42 + 4))))) {
            uVar48 = 0;
          }
          else {
            uVar46 = 0;
            uVar48 = param_3 - (param_3 - uVar42 & 3);
            lVar47 = lVar37;
            lVar49 = lVar41;
            if (uVar42 != 0) {
              do {
                *(float *)(param_2 + uVar46 * 4) =
                     (float)((int)*(short *)(lVar49 + 2) + (int)*(short *)(lVar47 + -2)) * fVar6 +
                     *(float *)(param_2 + uVar46 * 4) +
                     (float)((int)*(short *)(lVar49 + 4) + (int)*(short *)(lVar47 + -4)) * fVar7;
                uVar46 = uVar46 + 1;
                lVar47 = lVar47 + 2;
                lVar49 = lVar49 + 2;
              } while (uVar46 < uVar42);
            }
            lVar49 = uVar42 * 2;
            lVar47 = lVar36 + uVar42 * 2;
            lVar45 = lVar44 * -2 + param_1;
            do {
              uVar46 = *(ulonglong *)(lVar47 + 2 + lVar45);
              uVar8 = *(ulonglong *)(lVar49 + -2 + lVar37);
              uVar53 = (undefined2)(uVar46 >> 0x30);
              auVar52._8_4_ = 0;
              auVar52._0_8_ = uVar46;
              auVar52._12_2_ = uVar53;
              auVar52._14_2_ = uVar53;
              uVar53 = (undefined2)(uVar46 >> 0x20);
              auVar51._12_4_ = auVar52._12_4_;
              auVar51._8_2_ = 0;
              auVar51._0_8_ = uVar46;
              auVar51._10_2_ = uVar53;
              auVar50._10_6_ = auVar51._10_6_;
              auVar50._8_2_ = uVar53;
              auVar50._0_8_ = uVar46;
              uVar53 = (undefined2)(uVar46 >> 0x10);
              auVar23._4_8_ = auVar50._8_8_;
              auVar23._2_2_ = uVar53;
              auVar23._0_2_ = uVar53;
              uVar53 = (undefined2)(uVar8 >> 0x30);
              auVar104._8_4_ = 0;
              auVar104._0_8_ = uVar8;
              auVar104._12_2_ = uVar53;
              auVar104._14_2_ = uVar53;
              uVar53 = (undefined2)(uVar8 >> 0x20);
              auVar103._12_4_ = auVar104._12_4_;
              auVar103._8_2_ = 0;
              auVar103._0_8_ = uVar8;
              auVar103._10_2_ = uVar53;
              auVar102._10_6_ = auVar103._10_6_;
              auVar102._8_2_ = uVar53;
              auVar102._0_8_ = uVar8;
              uVar53 = (undefined2)(uVar8 >> 0x10);
              auVar24._4_8_ = auVar102._8_8_;
              auVar24._2_2_ = uVar53;
              auVar24._0_2_ = uVar53;
              uVar9 = *(ulonglong *)(lVar49 + -4 + lVar37);
              lVar49 = lVar49 + 8;
              uVar10 = *(ulonglong *)(lVar47 + 4 + lVar45);
              lVar47 = lVar47 + 8;
              uVar53 = (undefined2)(uVar10 >> 0x30);
              auVar56._8_4_ = 0;
              auVar56._0_8_ = uVar10;
              auVar56._12_2_ = uVar53;
              auVar56._14_2_ = uVar53;
              uVar53 = (undefined2)(uVar10 >> 0x20);
              auVar55._12_4_ = auVar56._12_4_;
              auVar55._8_2_ = 0;
              auVar55._0_8_ = uVar10;
              auVar55._10_2_ = uVar53;
              auVar54._10_6_ = auVar55._10_6_;
              auVar54._8_2_ = uVar53;
              auVar54._0_8_ = uVar10;
              uVar53 = (undefined2)(uVar10 >> 0x10);
              auVar25._4_8_ = auVar54._8_8_;
              auVar25._2_2_ = uVar53;
              auVar25._0_2_ = uVar53;
              uVar53 = (undefined2)(uVar9 >> 0x30);
              auVar107._8_4_ = 0;
              auVar107._0_8_ = uVar9;
              auVar107._12_2_ = uVar53;
              auVar107._14_2_ = uVar53;
              uVar53 = (undefined2)(uVar9 >> 0x20);
              auVar106._12_4_ = auVar107._12_4_;
              auVar106._8_2_ = 0;
              auVar106._0_8_ = uVar9;
              auVar106._10_2_ = uVar53;
              auVar105._10_6_ = auVar106._10_6_;
              auVar105._8_2_ = uVar53;
              auVar105._0_8_ = uVar9;
              uVar53 = (undefined2)(uVar9 >> 0x10);
              auVar26._4_8_ = auVar105._8_8_;
              auVar26._2_2_ = uVar53;
              auVar26._0_2_ = uVar53;
              pfVar39 = (float *)(param_2 + uVar42 * 4);
              fVar11 = pfVar39[1];
              fVar12 = pfVar39[2];
              fVar13 = pfVar39[3];
              pfVar5 = (float *)(param_2 + uVar42 * 4);
              *pfVar5 = (float)((int)(short)uVar46 + (int)(short)uVar8) * fVar6 + *pfVar39 +
                        (float)((int)(short)uVar10 + (int)(short)uVar9) * fVar7;
              pfVar5[1] = (float)((auVar23._0_4_ >> 0x10) + (auVar24._0_4_ >> 0x10)) * fVar6 +
                          fVar11 + (float)((auVar25._0_4_ >> 0x10) + (auVar26._0_4_ >> 0x10)) *
                                   fVar7;
              pfVar5[2] = (float)((auVar50._8_4_ >> 0x10) + (auVar102._8_4_ >> 0x10)) * fVar6 +
                          fVar12 + (float)((auVar54._8_4_ >> 0x10) + (auVar105._8_4_ >> 0x10)) *
                                   fVar7;
              pfVar5[3] = (float)((auVar51._12_4_ >> 0x10) + (auVar103._12_4_ >> 0x10)) * fVar6 +
                          fVar13 + (float)((auVar55._12_4_ >> 0x10) + (auVar106._12_4_ >> 0x10)) *
                                   fVar7;
              uVar42 = uVar42 + 4;
            } while (uVar42 < uVar48);
          }
          lVar47 = lVar41 + uVar48 * 2;
          if (uVar48 < param_3) {
            lVar49 = lVar37 + uVar48 * 2;
            do {
              psVar1 = (short *)(lVar47 + 2);
              psVar2 = (short *)(lVar49 + -2);
              psVar3 = (short *)(lVar49 + -4);
              psVar4 = (short *)(lVar47 + 4);
              lVar47 = lVar47 + 2;
              lVar49 = lVar49 + 2;
              *(float *)(param_2 + uVar48 * 4) =
                   (float)((int)*psVar1 + (int)*psVar2) * fVar6 + *(float *)(param_2 + uVar48 * 4) +
                   (float)((int)*psVar4 + (int)*psVar3) * fVar7;
              uVar48 = uVar48 + 1;
            } while (uVar48 < param_3);
          }
        }
        uVar42 = uVar38 + 1;
        lVar41 = lVar41 + 4;
        lVar36 = lVar36 + 4;
        lVar37 = lVar37 + -4;
      } while (uVar42 < lVar44 - 1U >> 1);
      lVar37 = uVar38 + 2 + uVar42;
    }
    if (lVar44 != lVar37) {
      fVar6 = param_4[lVar37];
      lVar36 = lVar44 * -2;
      lVar43 = param_1 + lVar36 + lVar37 * 2;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_140659aa8:
          uVar40 = 0;
          if (param_3 == 0) goto LAB_1406598f1;
          uVar38 = 0;
          uVar42 = param_3;
        }
        else {
          uVar42 = param_2 & 0xf;
          if (uVar42 != 0) {
            if ((param_2 & 3) != 0) goto LAB_140659aa8;
            uVar42 = 0x10 - uVar42 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar42 + 8)) goto LAB_140659aa8;
          lVar41 = param_1 + lVar36 + lVar37 * 2;
          uVar40 = param_3 - (param_3 - uVar42 & 7);
          lVar47 = param_1 + lVar44 * 2 + lVar37 * -2;
          uVar38 = 0;
          if (uVar42 != 0) {
            do {
              *(float *)(param_2 + uVar38 * 4) =
                   (float)((int)*(short *)(lVar41 + uVar38 * 2) +
                          (int)*(short *)(lVar47 + uVar38 * 2)) * fVar6 +
                   *(float *)(param_2 + uVar38 * 4);
              uVar38 = uVar38 + 1;
            } while (uVar38 < uVar42);
          }
          lVar45 = lVar37 * -2 + lVar44 * 2 + param_1;
          lVar49 = lVar36 + lVar37 * 2 + param_1;
          do {
            uVar38 = *(ulonglong *)(lVar41 + uVar42 * 2);
            uVar48 = *(ulonglong *)(lVar47 + uVar42 * 2);
            uVar53 = (undefined2)(uVar38 >> 0x30);
            auVar89._8_4_ = 0;
            auVar89._0_8_ = uVar38;
            auVar89._12_2_ = uVar53;
            auVar89._14_2_ = uVar53;
            uVar53 = (undefined2)(uVar38 >> 0x20);
            auVar88._12_4_ = auVar89._12_4_;
            auVar88._8_2_ = 0;
            auVar88._0_8_ = uVar38;
            auVar88._10_2_ = uVar53;
            auVar87._10_6_ = auVar88._10_6_;
            auVar87._8_2_ = uVar53;
            auVar87._0_8_ = uVar38;
            uVar53 = (undefined2)(uVar38 >> 0x10);
            auVar27._4_8_ = auVar87._8_8_;
            auVar27._2_2_ = uVar53;
            auVar27._0_2_ = uVar53;
            uVar53 = (undefined2)(uVar48 >> 0x30);
            auVar68._8_4_ = 0;
            auVar68._0_8_ = uVar48;
            auVar68._12_2_ = uVar53;
            auVar68._14_2_ = uVar53;
            uVar53 = (undefined2)(uVar48 >> 0x20);
            auVar67._12_4_ = auVar68._12_4_;
            auVar67._8_2_ = 0;
            auVar67._0_8_ = uVar48;
            auVar67._10_2_ = uVar53;
            auVar66._10_6_ = auVar67._10_6_;
            auVar66._8_2_ = uVar53;
            auVar66._0_8_ = uVar48;
            uVar53 = (undefined2)(uVar48 >> 0x10);
            auVar28._4_8_ = auVar66._8_8_;
            auVar28._2_2_ = uVar53;
            auVar28._0_2_ = uVar53;
            uVar46 = *(ulonglong *)(lVar45 + 8 + uVar42 * 2);
            uVar8 = *(ulonglong *)(lVar49 + 8 + uVar42 * 2);
            uVar53 = (undefined2)(uVar8 >> 0x30);
            auVar71._8_4_ = 0;
            auVar71._0_8_ = uVar8;
            auVar71._12_2_ = uVar53;
            auVar71._14_2_ = uVar53;
            uVar53 = (undefined2)(uVar8 >> 0x20);
            auVar70._12_4_ = auVar71._12_4_;
            auVar70._8_2_ = 0;
            auVar70._0_8_ = uVar8;
            auVar70._10_2_ = uVar53;
            auVar69._10_6_ = auVar70._10_6_;
            auVar69._8_2_ = uVar53;
            auVar69._0_8_ = uVar8;
            uVar53 = (undefined2)(uVar8 >> 0x10);
            auVar29._4_8_ = auVar69._8_8_;
            auVar29._2_2_ = uVar53;
            auVar29._0_2_ = uVar53;
            uVar53 = (undefined2)(uVar46 >> 0x30);
            auVar101._8_4_ = 0;
            auVar101._0_8_ = uVar46;
            auVar101._12_2_ = uVar53;
            auVar101._14_2_ = uVar53;
            uVar53 = (undefined2)(uVar46 >> 0x20);
            auVar100._12_4_ = auVar101._12_4_;
            auVar100._8_2_ = 0;
            auVar100._0_8_ = uVar46;
            auVar100._10_2_ = uVar53;
            auVar99._10_6_ = auVar100._10_6_;
            auVar99._8_2_ = uVar53;
            auVar99._0_8_ = uVar46;
            uVar53 = (undefined2)(uVar46 >> 0x10);
            auVar30._4_8_ = auVar99._8_8_;
            auVar30._2_2_ = uVar53;
            auVar30._0_2_ = uVar53;
            pfVar39 = (float *)(param_2 + uVar42 * 4);
            fVar7 = pfVar39[1];
            fVar11 = pfVar39[2];
            fVar12 = pfVar39[3];
            pfVar5 = (float *)(param_2 + 0x10 + uVar42 * 4);
            fVar13 = *pfVar5;
            fVar14 = pfVar5[1];
            fVar15 = pfVar5[2];
            fVar16 = pfVar5[3];
            pfVar5 = (float *)(param_2 + uVar42 * 4);
            *pfVar5 = (float)((int)(short)uVar38 + (int)(short)uVar48) * fVar6 + *pfVar39;
            pfVar5[1] = (float)((auVar27._0_4_ >> 0x10) + (auVar28._0_4_ >> 0x10)) * fVar6 + fVar7;
            pfVar5[2] = (float)((auVar87._8_4_ >> 0x10) + (auVar66._8_4_ >> 0x10)) * fVar6 + fVar11;
            pfVar5[3] = (float)((auVar88._12_4_ >> 0x10) + (auVar67._12_4_ >> 0x10)) * fVar6 +
                        fVar12;
            pfVar39 = (float *)(param_2 + 0x10 + uVar42 * 4);
            *pfVar39 = (float)((int)(short)uVar8 + (int)(short)uVar46) * fVar6 + fVar13;
            pfVar39[1] = (float)((auVar29._0_4_ >> 0x10) + (auVar30._0_4_ >> 0x10)) * fVar6 + fVar14
            ;
            pfVar39[2] = (float)((auVar69._8_4_ >> 0x10) + (auVar99._8_4_ >> 0x10)) * fVar6 + fVar15
            ;
            pfVar39[3] = (float)((auVar70._12_4_ >> 0x10) + (auVar100._12_4_ >> 0x10)) * fVar6 +
                         fVar16;
            uVar42 = uVar42 + 8;
          } while (uVar42 < uVar40);
          if (param_3 < uVar40 + 1) goto LAB_1406598f1;
          uVar42 = param_3 - uVar40;
          if ((longlong)uVar42 < 4) {
            uVar38 = 0;
          }
          else {
            uVar48 = 0;
            uVar38 = uVar42 & 0xfffffffffffffffc;
            pfVar39 = (float *)(param_2 + uVar40 * 4);
            do {
              uVar46 = *(ulonglong *)(lVar49 + uVar40 * 2 + uVar48 * 2);
              uVar8 = *(ulonglong *)(lVar45 + uVar40 * 2 + uVar48 * 2);
              uVar48 = uVar48 + 4;
              uVar53 = (undefined2)(uVar46 >> 0x30);
              auVar92._8_4_ = 0;
              auVar92._0_8_ = uVar46;
              auVar92._12_2_ = uVar53;
              auVar92._14_2_ = uVar53;
              uVar53 = (undefined2)(uVar46 >> 0x20);
              auVar91._12_4_ = auVar92._12_4_;
              auVar91._8_2_ = 0;
              auVar91._0_8_ = uVar46;
              auVar91._10_2_ = uVar53;
              auVar90._10_6_ = auVar91._10_6_;
              auVar90._8_2_ = uVar53;
              auVar90._0_8_ = uVar46;
              uVar53 = (undefined2)(uVar46 >> 0x10);
              auVar31._4_8_ = auVar90._8_8_;
              auVar31._2_2_ = uVar53;
              auVar31._0_2_ = uVar53;
              uVar53 = (undefined2)(uVar8 >> 0x30);
              auVar74._8_4_ = 0;
              auVar74._0_8_ = uVar8;
              auVar74._12_2_ = uVar53;
              auVar74._14_2_ = uVar53;
              uVar53 = (undefined2)(uVar8 >> 0x20);
              auVar73._12_4_ = auVar74._12_4_;
              auVar73._8_2_ = 0;
              auVar73._0_8_ = uVar8;
              auVar73._10_2_ = uVar53;
              auVar72._10_6_ = auVar73._10_6_;
              auVar72._8_2_ = uVar53;
              auVar72._0_8_ = uVar8;
              uVar53 = (undefined2)(uVar8 >> 0x10);
              auVar32._4_8_ = auVar72._8_8_;
              auVar32._2_2_ = uVar53;
              auVar32._0_2_ = uVar53;
              *pfVar39 = (float)((int)(short)uVar46 + (int)(short)uVar8) * fVar6 + *pfVar39;
              pfVar39[1] = (float)((auVar31._0_4_ >> 0x10) + (auVar32._0_4_ >> 0x10)) * fVar6 +
                           pfVar39[1];
              pfVar39[2] = (float)((auVar90._8_4_ >> 0x10) + (auVar72._8_4_ >> 0x10)) * fVar6 +
                           pfVar39[2];
              pfVar39[3] = (float)((auVar91._12_4_ >> 0x10) + (auVar73._12_4_ >> 0x10)) * fVar6 +
                           pfVar39[3];
              pfVar39 = pfVar39 + 4;
            } while (uVar48 < uVar38);
          }
        }
        if (uVar38 < uVar42) {
          pfVar39 = (float *)(param_2 + uVar40 * 4 + uVar38 * 4);
          do {
            lVar41 = uVar38 * 2;
            lVar47 = uVar38 * 2;
            uVar38 = uVar38 + 1;
            *pfVar39 = (float)((int)*(short *)(lVar36 + lVar37 * 2 + param_1 + uVar40 * 2 + lVar41)
                              + (int)*(short *)(param_1 + lVar37 * -2 + lVar44 * 2 + uVar40 * 2 +
                                               lVar47)) * fVar6 + *pfVar39;
            pfVar39 = pfVar39 + 1;
          } while (uVar38 < uVar42);
        }
      }
    }
  }
LAB_1406598f1:
  fVar6 = param_4[lVar44];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_140659a95:
    uVar40 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar42 = param_2 & 0xf;
    if (uVar42 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140659a95;
      uVar42 = 0x10 - uVar42 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar42 + 8)) goto LAB_140659a95;
    uVar38 = 0;
    uVar40 = param_3 - (param_3 - uVar42 & 7);
    if (uVar42 != 0) {
      do {
        *(float *)(param_2 + uVar38 * 4) =
             (float)(int)*(short *)(lVar43 + 2 + uVar38 * 2) * fVar6 +
             *(float *)(param_2 + uVar38 * 4);
        uVar38 = uVar38 + 1;
      } while (uVar38 < uVar42);
    }
    do {
      uVar38 = *(ulonglong *)(lVar43 + 2 + uVar42 * 2);
      uVar48 = *(ulonglong *)(lVar43 + 10 + uVar42 * 2);
      uVar53 = (undefined2)(uVar38 >> 0x30);
      auVar77._8_4_ = 0;
      auVar77._0_8_ = uVar38;
      auVar77._12_2_ = uVar53;
      auVar77._14_2_ = uVar53;
      uVar53 = (undefined2)(uVar38 >> 0x20);
      auVar76._12_4_ = auVar77._12_4_;
      auVar76._8_2_ = 0;
      auVar76._0_8_ = uVar38;
      auVar76._10_2_ = uVar53;
      auVar75._10_6_ = auVar76._10_6_;
      auVar75._8_2_ = uVar53;
      auVar75._0_8_ = uVar38;
      uVar53 = (undefined2)(uVar38 >> 0x10);
      auVar33._4_8_ = auVar75._8_8_;
      auVar33._2_2_ = uVar53;
      auVar33._0_2_ = uVar53;
      uVar53 = (undefined2)(uVar48 >> 0x30);
      auVar95._8_4_ = 0;
      auVar95._0_8_ = uVar48;
      auVar95._12_2_ = uVar53;
      auVar95._14_2_ = uVar53;
      uVar53 = (undefined2)(uVar48 >> 0x20);
      auVar94._12_4_ = auVar95._12_4_;
      auVar94._8_2_ = 0;
      auVar94._0_8_ = uVar48;
      auVar94._10_2_ = uVar53;
      auVar93._10_6_ = auVar94._10_6_;
      auVar93._8_2_ = uVar53;
      auVar93._0_8_ = uVar48;
      uVar53 = (undefined2)(uVar48 >> 0x10);
      auVar34._4_8_ = auVar93._8_8_;
      auVar34._2_2_ = uVar53;
      auVar34._0_2_ = uVar53;
      pfVar39 = (float *)(param_2 + uVar42 * 4);
      fVar7 = pfVar39[1];
      fVar11 = pfVar39[2];
      fVar12 = pfVar39[3];
      pfVar5 = (float *)(param_2 + 0x10 + uVar42 * 4);
      fVar13 = *pfVar5;
      fVar14 = pfVar5[1];
      fVar15 = pfVar5[2];
      fVar16 = pfVar5[3];
      pfVar5 = (float *)(param_2 + uVar42 * 4);
      *pfVar5 = (float)(int)(short)uVar38 * fVar6 + *pfVar39;
      pfVar5[1] = (float)(auVar33._0_4_ >> 0x10) * fVar6 + fVar7;
      pfVar5[2] = (float)(auVar75._8_4_ >> 0x10) * fVar6 + fVar11;
      pfVar5[3] = (float)(auVar76._12_4_ >> 0x10) * fVar6 + fVar12;
      pfVar39 = (float *)(param_2 + 0x10 + uVar42 * 4);
      *pfVar39 = (float)(int)(short)uVar48 * fVar6 + fVar13;
      pfVar39[1] = (float)(auVar34._0_4_ >> 0x10) * fVar6 + fVar14;
      pfVar39[2] = (float)(auVar93._8_4_ >> 0x10) * fVar6 + fVar15;
      pfVar39[3] = (float)(auVar94._12_4_ >> 0x10) * fVar6 + fVar16;
      uVar42 = uVar42 + 8;
    } while (uVar42 < uVar40);
    if (param_3 < uVar40 + 1) {
      return;
    }
    param_3 = param_3 - uVar40;
    if (3 < (longlong)param_3) {
      uVar38 = 0;
      uVar42 = param_3 & 0xfffffffffffffffc;
      pfVar39 = (float *)(param_2 + uVar40 * 4);
      do {
        uVar48 = *(ulonglong *)(lVar43 + uVar40 * 2 + 2 + uVar38 * 2);
        uVar38 = uVar38 + 4;
        uVar53 = (undefined2)(uVar48 >> 0x30);
        auVar80._8_4_ = 0;
        auVar80._0_8_ = uVar48;
        auVar80._12_2_ = uVar53;
        auVar80._14_2_ = uVar53;
        uVar53 = (undefined2)(uVar48 >> 0x20);
        auVar79._12_4_ = auVar80._12_4_;
        auVar79._8_2_ = 0;
        auVar79._0_8_ = uVar48;
        auVar79._10_2_ = uVar53;
        auVar78._10_6_ = auVar79._10_6_;
        auVar78._8_2_ = uVar53;
        auVar78._0_8_ = uVar48;
        uVar53 = (undefined2)(uVar48 >> 0x10);
        auVar35._4_8_ = auVar78._8_8_;
        auVar35._2_2_ = uVar53;
        auVar35._0_2_ = uVar53;
        *pfVar39 = (float)(int)(short)uVar48 * fVar6 + *pfVar39;
        pfVar39[1] = (float)(auVar35._0_4_ >> 0x10) * fVar6 + pfVar39[1];
        pfVar39[2] = (float)(auVar78._8_4_ >> 0x10) * fVar6 + pfVar39[2];
        pfVar39[3] = (float)(auVar79._12_4_ >> 0x10) * fVar6 + pfVar39[3];
        pfVar39 = pfVar39 + 4;
      } while (uVar38 < uVar42);
      goto LAB_140659a48;
    }
  }
  uVar42 = 0;
LAB_140659a48:
  if (uVar42 < param_3) {
    pfVar39 = (float *)(param_2 + uVar40 * 4 + uVar42 * 4);
    do {
      lVar44 = uVar42 * 2;
      uVar42 = uVar42 + 1;
      *pfVar39 = (float)(int)*(short *)(lVar43 + uVar40 * 2 + 2 + lVar44) * fVar6 + *pfVar39;
      pfVar39 = pfVar39 + 1;
    } while (uVar42 < param_3);
  }
  return;
}

