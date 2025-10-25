
void FUN_140661080(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  lVar9 = 0;
  lVar15 = (longlong)param_3;
  fVar6 = *param_6;
  fVar7 = param_6[1];
  lVar13 = lVar15 + 3;
  if (SCARRY8(lVar15,-2) == lVar15 + -2 < 0) {
    lVar13 = lVar15 + -2;
  }
  fVar8 = param_6[2];
  lVar15 = (longlong)(int)lVar13 + 1;
  if (4 < lVar15) {
    lVar15 = lVar9;
  }
  lVar17 = (longlong)(int)lVar15 + 1;
  if (4 < lVar17) {
    lVar17 = lVar9;
  }
  lVar14 = (longlong)(int)lVar17 + 1;
  if (4 < lVar14) {
    lVar14 = lVar9;
  }
  lVar10 = (longlong)(int)lVar14 + 1;
  if (4 < lVar10) {
    lVar10 = lVar9;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar20 = param_2 * lVar17 + param_1;
      uVar21 = uVar20 & 0xf;
      if (uVar21 != 0) {
        if ((uVar20 & 3) != 0) goto LAB_140661968;
        uVar21 = 0x10 - uVar21 >> 2;
      }
      if ((longlong)(uVar21 + 4) <= (longlong)param_5) {
        lVar9 = param_2 * lVar10 + param_1;
        lVar12 = param_2 * lVar14 + param_1;
        lVar18 = param_2 * lVar13 + param_1;
        lVar11 = param_2 * lVar15 + param_1;
        uVar19 = 0;
        uVar16 = param_5 - (param_5 - uVar21 & 3);
        if (uVar21 != 0) {
          do {
            *(short *)(param_4 + uVar19 * 2) =
                 (short)(int)ROUND((*(float *)(lVar18 + uVar19 * 4) + *(float *)(lVar9 + uVar19 * 4)
                                   ) * fVar6 +
                                   (*(float *)(lVar11 + uVar19 * 4) +
                                   *(float *)(lVar12 + uVar19 * 4)) * fVar7 +
                                   *(float *)(uVar20 + uVar19 * 4) * fVar8);
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar21);
        }
        if ((lVar12 + uVar21 * 4 & 0xf) == 0) {
          do {
            pfVar5 = (float *)(lVar18 + uVar21 * 4);
            pfVar1 = (float *)(lVar9 + uVar21 * 4);
            pfVar2 = (float *)(lVar11 + uVar21 * 4);
            pfVar3 = (float *)(lVar12 + uVar21 * 4);
            pfVar4 = (float *)(uVar20 + uVar21 * 4);
            auVar27._0_4_ =
                 (int)(short)(int)((*pfVar5 + *pfVar1) * fVar6 + (*pfVar2 + *pfVar3) * fVar7 +
                                  *pfVar4 * fVar8);
            auVar27._4_4_ =
                 (int)(short)(int)((pfVar5[1] + pfVar1[1]) * fVar6 + (pfVar2[1] + pfVar3[1]) * fVar7
                                  + pfVar4[1] * fVar8);
            auVar27._8_4_ =
                 (int)(short)(int)((pfVar5[2] + pfVar1[2]) * fVar6 + (pfVar2[2] + pfVar3[2]) * fVar7
                                  + pfVar4[2] * fVar8);
            auVar27._12_4_ =
                 (int)(short)(int)((pfVar5[3] + pfVar1[3]) * fVar6 + (pfVar2[3] + pfVar3[3]) * fVar7
                                  + pfVar4[3] * fVar8);
            auVar27 = packssdw(auVar27,(undefined1  [16])0x0);
            *(longlong *)(param_4 + uVar21 * 2) = auVar27._0_8_;
            uVar21 = uVar21 + 4;
          } while (uVar21 < uVar16);
        }
        else {
          do {
            pfVar5 = (float *)(lVar18 + uVar21 * 4);
            pfVar1 = (float *)(lVar9 + uVar21 * 4);
            pfVar2 = (float *)(lVar12 + uVar21 * 4);
            pfVar3 = (float *)(lVar11 + uVar21 * 4);
            pfVar4 = (float *)(uVar20 + uVar21 * 4);
            auVar25._0_4_ =
                 (int)(short)(int)((*pfVar5 + *pfVar1) * fVar6 + (*pfVar3 + *pfVar2) * fVar7 +
                                  *pfVar4 * fVar8);
            auVar25._4_4_ =
                 (int)(short)(int)((pfVar5[1] + pfVar1[1]) * fVar6 + (pfVar3[1] + pfVar2[1]) * fVar7
                                  + pfVar4[1] * fVar8);
            auVar25._8_4_ =
                 (int)(short)(int)((pfVar5[2] + pfVar1[2]) * fVar6 + (pfVar3[2] + pfVar2[2]) * fVar7
                                  + pfVar4[2] * fVar8);
            auVar25._12_4_ =
                 (int)(short)(int)((pfVar5[3] + pfVar1[3]) * fVar6 + (pfVar3[3] + pfVar2[3]) * fVar7
                                  + pfVar4[3] * fVar8);
            auVar27 = packssdw(auVar25,(undefined1  [16])0x0);
            *(longlong *)(param_4 + uVar21 * 2) = auVar27._0_8_;
            uVar21 = uVar21 + 4;
          } while (uVar21 < uVar16);
        }
        goto LAB_1406618c7;
      }
    }
LAB_140661968:
    uVar16 = 0;
LAB_1406618c7:
    if (param_5 <= uVar16) {
      return;
    }
    do {
      *(short *)(param_4 + uVar16 * 2) =
           (short)(int)ROUND((*(float *)(lVar13 * param_2 + param_1 + uVar16 * 4) +
                             *(float *)(lVar10 * param_2 + param_1 + uVar16 * 4)) * fVar6 +
                             (*(float *)(param_1 + param_2 * lVar15 + uVar16 * 4) +
                             *(float *)(lVar14 * param_2 + param_1 + uVar16 * 4)) * fVar7 +
                             *(float *)(lVar17 * param_2 + param_1 + uVar16 * 4) * fVar8);
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 8) {
LAB_140661958:
    uVar16 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar20 = param_2 * lVar17 + param_1;
    uVar21 = uVar20 & 0xf;
    if (uVar21 != 0) {
      if ((uVar20 & 3) != 0) goto LAB_140661958;
      uVar21 = 0x10 - uVar21 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar21 + 8)) goto LAB_140661958;
    lVar11 = param_2 * lVar13 + param_1;
    lVar9 = param_2 * lVar14 + param_1;
    lVar18 = param_2 * lVar10 + param_1;
    lVar12 = param_2 * lVar15 + param_1;
    uVar19 = 0;
    uVar16 = param_5 - (param_5 - uVar21 & 7);
    if (uVar21 != 0) {
      do {
        *(short *)(param_4 + uVar19 * 2) =
             (short)(int)ROUND((*(float *)(lVar11 + uVar19 * 4) + *(float *)(lVar18 + uVar19 * 4)) *
                               fVar6 + (*(float *)(lVar12 + uVar19 * 4) +
                                       *(float *)(lVar9 + uVar19 * 4)) * fVar7 +
                               *(float *)(uVar20 + uVar19 * 4) * fVar8);
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar21);
    }
    if ((lVar9 + uVar21 * 4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)(lVar11 + uVar21 * 4);
        pfVar5 = (float *)(lVar18 + uVar21 * 4);
        pfVar2 = (float *)(lVar12 + uVar21 * 4);
        pfVar3 = (float *)(lVar9 + uVar21 * 4);
        pfVar4 = (float *)(uVar20 + uVar21 * 4);
        auVar28._0_4_ =
             (int)(short)(int)((*pfVar1 + *pfVar5) * fVar6 + (*pfVar2 + *pfVar3) * fVar7 +
                              *pfVar4 * fVar8);
        auVar28._4_4_ =
             (int)(short)(int)((pfVar1[1] + pfVar5[1]) * fVar6 + (pfVar2[1] + pfVar3[1]) * fVar7 +
                              pfVar4[1] * fVar8);
        auVar28._8_4_ =
             (int)(short)(int)((pfVar1[2] + pfVar5[2]) * fVar6 + (pfVar2[2] + pfVar3[2]) * fVar7 +
                              pfVar4[2] * fVar8);
        auVar28._12_4_ =
             (int)(short)(int)((pfVar1[3] + pfVar5[3]) * fVar6 + (pfVar2[3] + pfVar3[3]) * fVar7 +
                              pfVar4[3] * fVar8);
        auVar27 = packssdw(auVar28,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar21 * 2) = auVar27._0_8_;
        pfVar1 = (float *)(lVar11 + 0x10 + uVar21 * 4);
        pfVar2 = (float *)(lVar18 + 0x10 + uVar21 * 4);
        pfVar3 = (float *)(lVar12 + 0x10 + uVar21 * 4);
        pfVar4 = (float *)(lVar9 + 0x10 + uVar21 * 4);
        pfVar5 = (float *)(uVar20 + 0x10 + uVar21 * 4);
        auVar23._0_4_ =
             (int)(short)(int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar3 + *pfVar4) * fVar7 +
                              *pfVar5 * fVar8);
        auVar23._4_4_ =
             (int)(short)(int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar3[1] + pfVar4[1]) * fVar7 +
                              pfVar5[1] * fVar8);
        auVar23._8_4_ =
             (int)(short)(int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar3[2] + pfVar4[2]) * fVar7 +
                              pfVar5[2] * fVar8);
        auVar23._12_4_ =
             (int)(short)(int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar3[3] + pfVar4[3]) * fVar7 +
                              pfVar5[3] * fVar8);
        auVar27 = packssdw(auVar23,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar21 * 2) = auVar27._0_8_;
        uVar21 = uVar21 + 8;
      } while (uVar21 < uVar16);
    }
    else {
      do {
        pfVar1 = (float *)(lVar11 + uVar21 * 4);
        pfVar5 = (float *)(lVar18 + uVar21 * 4);
        pfVar2 = (float *)(lVar9 + uVar21 * 4);
        pfVar3 = (float *)(lVar12 + uVar21 * 4);
        pfVar4 = (float *)(uVar20 + uVar21 * 4);
        auVar26._0_4_ =
             (int)(short)(int)((*pfVar1 + *pfVar5) * fVar6 + (*pfVar3 + *pfVar2) * fVar7 +
                              *pfVar4 * fVar8);
        auVar26._4_4_ =
             (int)(short)(int)((pfVar1[1] + pfVar5[1]) * fVar6 + (pfVar3[1] + pfVar2[1]) * fVar7 +
                              pfVar4[1] * fVar8);
        auVar26._8_4_ =
             (int)(short)(int)((pfVar1[2] + pfVar5[2]) * fVar6 + (pfVar3[2] + pfVar2[2]) * fVar7 +
                              pfVar4[2] * fVar8);
        auVar26._12_4_ =
             (int)(short)(int)((pfVar1[3] + pfVar5[3]) * fVar6 + (pfVar3[3] + pfVar2[3]) * fVar7 +
                              pfVar4[3] * fVar8);
        auVar27 = packssdw(auVar26,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar21 * 2) = auVar27._0_8_;
        pfVar1 = (float *)(lVar11 + 0x10 + uVar21 * 4);
        pfVar2 = (float *)(lVar18 + 0x10 + uVar21 * 4);
        pfVar3 = (float *)(lVar9 + 0x10 + uVar21 * 4);
        pfVar4 = (float *)(lVar12 + 0x10 + uVar21 * 4);
        pfVar5 = (float *)(uVar20 + 0x10 + uVar21 * 4);
        auVar22._0_4_ =
             (int)(short)(int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar4 + *pfVar3) * fVar7 +
                              *pfVar5 * fVar8);
        auVar22._4_4_ =
             (int)(short)(int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar4[1] + pfVar3[1]) * fVar7 +
                              pfVar5[1] * fVar8);
        auVar22._8_4_ =
             (int)(short)(int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar4[2] + pfVar3[2]) * fVar7 +
                              pfVar5[2] * fVar8);
        auVar22._12_4_ =
             (int)(short)(int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar4[3] + pfVar3[3]) * fVar7 +
                              pfVar5[3] * fVar8);
        auVar27 = packssdw(auVar22,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar21 * 2) = auVar27._0_8_;
        uVar21 = uVar21 + 8;
      } while (uVar21 < uVar16);
    }
    if (param_5 < uVar16 + 1) {
      return;
    }
    param_5 = param_5 - uVar16;
    if (3 < (longlong)param_5) {
      uVar21 = param_5 & 0xfffffffffffffffc;
      uVar19 = 0;
      do {
        pfVar1 = (float *)(lVar11 + uVar16 * 4 + uVar19 * 4);
        pfVar2 = (float *)(lVar18 + uVar16 * 4 + uVar19 * 4);
        pfVar3 = (float *)(lVar9 + uVar16 * 4 + uVar19 * 4);
        pfVar4 = (float *)(lVar12 + uVar16 * 4 + uVar19 * 4);
        pfVar5 = (float *)(uVar20 + uVar16 * 4 + uVar19 * 4);
        auVar24._0_4_ =
             (int)(short)(int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar4 + *pfVar3) * fVar7 +
                              fVar8 * *pfVar5);
        auVar24._4_4_ =
             (int)(short)(int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar4[1] + pfVar3[1]) * fVar7 +
                              fVar8 * pfVar5[1]);
        auVar24._8_4_ =
             (int)(short)(int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar4[2] + pfVar3[2]) * fVar7 +
                              fVar8 * pfVar5[2]);
        auVar24._12_4_ =
             (int)(short)(int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar4[3] + pfVar3[3]) * fVar7 +
                              fVar8 * pfVar5[3]);
        auVar27 = packssdw(auVar24,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar16 * 2 + uVar19 * 2) = auVar27._0_8_;
        uVar19 = uVar19 + 4;
      } while (uVar19 < uVar21);
      goto LAB_14066159b;
    }
  }
  uVar21 = 0;
LAB_14066159b:
  if (uVar21 < param_5) {
    do {
      *(short *)(param_4 + uVar16 * 2 + uVar21 * 2) =
           (short)(int)ROUND((*(float *)(lVar13 * param_2 + param_1 + uVar16 * 4 + uVar21 * 4) +
                             *(float *)(lVar10 * param_2 + param_1 + uVar16 * 4 + uVar21 * 4)) *
                             fVar6 + (*(float *)(lVar15 * param_2 + param_1 + uVar16 * 4 +
                                                uVar21 * 4) +
                                     *(float *)(lVar14 * param_2 + param_1 + uVar16 * 4 + uVar21 * 4
                                               )) * fVar7 +
                             *(float *)(param_1 + param_2 * lVar17 + uVar16 * 4 + uVar21 * 4) *
                             fVar8);
      uVar21 = uVar21 + 1;
    } while (uVar21 < param_5);
  }
  return;
}

