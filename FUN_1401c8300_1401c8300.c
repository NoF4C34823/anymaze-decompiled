
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c8300(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar16 = (longlong)param_3;
  lVar17 = lVar16 + -2;
  if (SCARRY8(lVar16,-2) != lVar16 + -2 < 0) {
    lVar17 = lVar16 + 3;
  }
  fVar6 = *param_6;
  uVar13 = (longlong)(int)lVar17 + 1;
  fVar7 = param_6[1];
  fVar8 = param_6[2];
  uVar22 = 0;
  if (4 < (longlong)uVar13) {
    uVar13 = uVar22;
  }
  uVar14 = (longlong)(int)uVar13 + 1;
  if (4 < (longlong)uVar14) {
    uVar14 = uVar22;
  }
  uVar18 = (longlong)(int)uVar14 + 1;
  if (4 < (longlong)uVar18) {
    uVar18 = uVar22;
  }
  uVar15 = (longlong)(int)uVar18 + 1;
  if (4 < (longlong)uVar15) {
    uVar15 = uVar22;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar23 = param_2 * uVar14 + param_1;
      uVar10 = uVar23 & 0xf;
      if (uVar10 != 0) {
        if ((uVar23 & 3) != 0) goto LAB_1401c8bac;
        uVar10 = 0x10 - uVar10 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar10 + 4)) {
        uVar22 = 0;
      }
      else {
        lVar20 = param_2 * uVar18 + param_1;
        lVar19 = param_2 * lVar17 + param_1;
        uVar22 = param_5 - (param_5 - uVar10 & 3);
        lVar16 = param_2 * uVar15 + param_1;
        lVar21 = param_2 * uVar13 + param_1;
        if (uVar10 != 0) {
          uVar11 = 0;
          do {
            *(short *)(param_4 + uVar11 * 2) =
                 (short)(int)ROUND((*(float *)(lVar19 + uVar11 * 4) +
                                   *(float *)(lVar16 + uVar11 * 4)) * fVar6 +
                                   (*(float *)(lVar21 + uVar11 * 4) +
                                   *(float *)(lVar20 + uVar11 * 4)) * fVar7 +
                                   *(float *)(uVar23 + uVar11 * 4) * fVar8);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
        }
        auVar9 = _DAT_143088100;
        if ((lVar20 + uVar10 * 4 & 0xf) == 0) {
          lVar24 = uVar10 * 2;
          do {
            pfVar1 = (float *)(lVar19 + uVar10 * 4);
            pfVar2 = (float *)(lVar16 + uVar10 * 4);
            pfVar4 = (float *)(lVar21 + uVar10 * 4);
            pfVar5 = (float *)(lVar20 + uVar10 * 4);
            pfVar3 = (float *)(uVar23 + uVar10 * 4);
            uVar10 = uVar10 + 4;
            auVar28._0_4_ =
                 (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar4 + *pfVar5) * fVar7 + *pfVar3 * fVar8);
            auVar28._4_4_ =
                 (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar4[1] + pfVar5[1]) * fVar7 +
                      pfVar3[1] * fVar8);
            auVar28._8_4_ =
                 (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar4[2] + pfVar5[2]) * fVar7 +
                      pfVar3[2] * fVar8);
            auVar28._12_4_ =
                 (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar4[3] + pfVar5[3]) * fVar7 +
                      pfVar3[3] * fVar8);
            auVar28 = packusdw(auVar28 & auVar9,(undefined1  [16])0x0);
            *(longlong *)(lVar24 + param_4) = auVar28._0_8_;
            lVar24 = lVar24 + 8;
          } while (uVar10 < uVar22);
        }
        else {
          lVar24 = uVar10 * 2;
          do {
            pfVar1 = (float *)(lVar19 + uVar10 * 4);
            pfVar2 = (float *)(lVar16 + uVar10 * 4);
            pfVar4 = (float *)(lVar21 + uVar10 * 4);
            pfVar5 = (float *)(lVar20 + uVar10 * 4);
            pfVar3 = (float *)(uVar23 + uVar10 * 4);
            uVar10 = uVar10 + 4;
            auVar26._0_4_ =
                 (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar4 + *pfVar5) * fVar7 + *pfVar3 * fVar8);
            auVar26._4_4_ =
                 (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar4[1] + pfVar5[1]) * fVar7 +
                      pfVar3[1] * fVar8);
            auVar26._8_4_ =
                 (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar4[2] + pfVar5[2]) * fVar7 +
                      pfVar3[2] * fVar8);
            auVar26._12_4_ =
                 (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar4[3] + pfVar5[3]) * fVar7 +
                      pfVar3[3] * fVar8);
            auVar28 = packusdw(auVar26 & auVar9,(undefined1  [16])0x0);
            *(longlong *)(lVar24 + param_4) = auVar28._0_8_;
            lVar24 = lVar24 + 8;
          } while (uVar10 < uVar22);
        }
      }
    }
LAB_1401c8bac:
    if (param_5 <= uVar22) {
      return;
    }
    do {
      *(short *)(param_4 + uVar22 * 2) =
           (short)(int)ROUND((*(float *)(lVar17 * param_2 + param_1 + uVar22 * 4) +
                             *(float *)(uVar15 * param_2 + param_1 + uVar22 * 4)) * fVar6 +
                             (*(float *)(param_1 + param_2 * uVar13 + uVar22 * 4) +
                             *(float *)(uVar18 * param_2 + param_1 + uVar22 * 4)) * fVar7 +
                             *(float *)(uVar14 * param_2 + param_1 + uVar22 * 4) * fVar8);
      uVar22 = uVar22 + 1;
    } while (uVar22 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 8) {
LAB_1401c8c3f:
    uVar10 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar22 = param_2 * uVar14 + param_1;
    uVar23 = uVar22 & 0xf;
    if (uVar23 != 0) {
      if ((uVar22 & 3) != 0) goto LAB_1401c8c3f;
      uVar23 = 0x10 - uVar23 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar23 + 8)) goto LAB_1401c8c3f;
    lVar16 = param_2 * lVar17 + param_1;
    lVar20 = param_2 * uVar18 + param_1;
    uVar10 = param_5 - (param_5 - uVar23 & 7);
    lVar21 = param_2 * uVar15 + param_1;
    lVar19 = param_2 * uVar13 + param_1;
    uVar11 = 0;
    if (uVar23 != 0) {
      do {
        *(short *)(param_4 + uVar11 * 2) =
             (short)(int)ROUND((*(float *)(lVar16 + uVar11 * 4) + *(float *)(lVar21 + uVar11 * 4)) *
                               fVar6 + (*(float *)(lVar19 + uVar11 * 4) +
                                       *(float *)(lVar20 + uVar11 * 4)) * fVar7 +
                               *(float *)(uVar22 + uVar11 * 4) * fVar8);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar23);
    }
    auVar9 = _DAT_143088100;
    if ((lVar20 + uVar23 * 4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)(lVar16 + uVar23 * 4);
        pfVar2 = (float *)(lVar21 + uVar23 * 4);
        pfVar3 = (float *)(lVar19 + uVar23 * 4);
        pfVar5 = (float *)(lVar20 + uVar23 * 4);
        pfVar4 = (float *)(uVar22 + uVar23 * 4);
        auVar30._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar3 + *pfVar5) * fVar7 + *pfVar4 * fVar8);
        auVar30._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar3[1] + pfVar5[1]) * fVar7 +
                  pfVar4[1] * fVar8);
        auVar30._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar3[2] + pfVar5[2]) * fVar7 +
                  pfVar4[2] * fVar8);
        auVar30._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar3[3] + pfVar5[3]) * fVar7 +
                  pfVar4[3] * fVar8);
        auVar28 = packusdw(auVar30 & auVar9,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar23 * 2) = auVar28._0_8_;
        pfVar1 = (float *)(lVar16 + 0x10 + uVar23 * 4);
        pfVar2 = (float *)(lVar21 + 0x10 + uVar23 * 4);
        pfVar3 = (float *)(lVar19 + 0x10 + uVar23 * 4);
        pfVar4 = (float *)(lVar20 + 0x10 + uVar23 * 4);
        pfVar5 = (float *)(uVar22 + 0x10 + uVar23 * 4);
        auVar31._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar3 + *pfVar4) * fVar7 + *pfVar5 * fVar8);
        auVar31._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar3[1] + pfVar4[1]) * fVar7 +
                  pfVar5[1] * fVar8);
        auVar31._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar3[2] + pfVar4[2]) * fVar7 +
                  pfVar5[2] * fVar8);
        auVar31._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar3[3] + pfVar4[3]) * fVar7 +
                  pfVar5[3] * fVar8);
        auVar28 = packusdw(auVar31 & auVar9,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar23 * 2) = auVar28._0_8_;
        uVar23 = uVar23 + 8;
      } while (uVar23 < uVar10);
    }
    else {
      do {
        pfVar1 = (float *)(lVar16 + uVar23 * 4);
        pfVar2 = (float *)(lVar21 + uVar23 * 4);
        pfVar3 = (float *)(lVar19 + uVar23 * 4);
        pfVar5 = (float *)(lVar20 + uVar23 * 4);
        pfVar4 = (float *)(uVar22 + uVar23 * 4);
        auVar27._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar3 + *pfVar5) * fVar7 + *pfVar4 * fVar8);
        auVar27._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar3[1] + pfVar5[1]) * fVar7 +
                  pfVar4[1] * fVar8);
        auVar27._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar3[2] + pfVar5[2]) * fVar7 +
                  pfVar4[2] * fVar8);
        auVar27._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar3[3] + pfVar5[3]) * fVar7 +
                  pfVar4[3] * fVar8);
        auVar28 = packusdw(auVar27 & auVar9,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar23 * 2) = auVar28._0_8_;
        pfVar1 = (float *)(lVar16 + 0x10 + uVar23 * 4);
        pfVar2 = (float *)(lVar21 + 0x10 + uVar23 * 4);
        pfVar3 = (float *)(lVar19 + 0x10 + uVar23 * 4);
        pfVar4 = (float *)(lVar20 + 0x10 + uVar23 * 4);
        pfVar5 = (float *)(uVar22 + 0x10 + uVar23 * 4);
        auVar29._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar3 + *pfVar4) * fVar7 + *pfVar5 * fVar8);
        auVar29._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar3[1] + pfVar4[1]) * fVar7 +
                  pfVar5[1] * fVar8);
        auVar29._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar3[2] + pfVar4[2]) * fVar7 +
                  pfVar5[2] * fVar8);
        auVar29._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar3[3] + pfVar4[3]) * fVar7 +
                  pfVar5[3] * fVar8);
        auVar28 = packusdw(auVar29 & auVar9,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar23 * 2) = auVar28._0_8_;
        uVar23 = uVar23 + 8;
      } while (uVar23 < uVar10);
    }
    if (param_5 < uVar10 + 1) {
      return;
    }
    param_5 = param_5 - uVar10;
    if (3 < (longlong)param_5) {
      uVar12 = 0;
      uVar23 = param_5 & 0xfffffffffffffffc;
      uVar11 = uVar12;
      do {
        pfVar1 = (float *)(lVar16 + uVar10 * 4 + uVar11 * 4);
        pfVar5 = (float *)(lVar21 + uVar10 * 4 + uVar11 * 4);
        pfVar2 = (float *)(lVar19 + uVar10 * 4 + uVar11 * 4);
        pfVar3 = (float *)(lVar20 + uVar10 * 4 + uVar11 * 4);
        pfVar4 = (float *)(uVar22 + uVar10 * 4 + uVar11 * 4);
        uVar11 = uVar11 + 4;
        auVar25._0_4_ =
             (int)((*pfVar1 + *pfVar5) * fVar6 + (*pfVar2 + *pfVar3) * fVar7 + fVar8 * *pfVar4);
        auVar25._4_4_ =
             (int)((pfVar1[1] + pfVar5[1]) * fVar6 + (pfVar2[1] + pfVar3[1]) * fVar7 +
                  fVar8 * pfVar4[1]);
        auVar25._8_4_ =
             (int)((pfVar1[2] + pfVar5[2]) * fVar6 + (pfVar2[2] + pfVar3[2]) * fVar7 +
                  fVar8 * pfVar4[2]);
        auVar25._12_4_ =
             (int)((pfVar1[3] + pfVar5[3]) * fVar6 + (pfVar2[3] + pfVar3[3]) * fVar7 +
                  fVar8 * pfVar4[3]);
        auVar28 = packusdw(auVar25 & auVar9,(undefined1  [16])0x0);
        *(longlong *)(uVar12 + param_4 + uVar10 * 2) = auVar28._0_8_;
        uVar12 = uVar12 + 8;
      } while (uVar11 < uVar23);
      goto LAB_1401c8820;
    }
  }
  uVar23 = 0;
LAB_1401c8820:
  if (uVar23 < param_5) {
    do {
      *(short *)(param_4 + uVar10 * 2 + uVar23 * 2) =
           (short)(int)ROUND((*(float *)(lVar17 * param_2 + param_1 + uVar10 * 4 + uVar23 * 4) +
                             *(float *)(uVar15 * param_2 + param_1 + uVar10 * 4 + uVar23 * 4)) *
                             fVar6 + (*(float *)(uVar13 * param_2 + param_1 + uVar10 * 4 +
                                                uVar23 * 4) +
                                     *(float *)(uVar18 * param_2 + param_1 + uVar10 * 4 + uVar23 * 4
                                               )) * fVar7 +
                             *(float *)(param_1 + param_2 * uVar14 + uVar10 * 4 + uVar23 * 4) *
                             fVar8);
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_5);
  }
  return;
}

