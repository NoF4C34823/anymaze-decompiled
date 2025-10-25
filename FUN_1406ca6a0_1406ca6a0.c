
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406ca6a0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
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
  
  lVar16 = 0;
  lVar14 = (longlong)param_3;
  lVar15 = lVar14 + -2;
  if (SCARRY8(lVar14,-2) != lVar14 + -2 < 0) {
    lVar15 = lVar14 + 3;
  }
  fVar6 = *param_6;
  fVar7 = param_6[1];
  fVar8 = param_6[2];
  lVar14 = (longlong)(int)lVar15 + 1;
  if (4 < lVar14) {
    lVar14 = lVar16;
  }
  lVar12 = (longlong)(int)lVar14 + 1;
  if (4 < lVar12) {
    lVar12 = lVar16;
  }
  lVar13 = (longlong)(int)lVar12 + 1;
  if (4 < lVar13) {
    lVar13 = lVar16;
  }
  lVar11 = (longlong)(int)lVar13 + 1;
  if (4 < lVar11) {
    lVar11 = lVar16;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar22 = param_2 * lVar12 + param_1;
      uVar21 = uVar22 & 0xf;
      if (uVar21 != 0) {
        if ((uVar22 & 3) != 0) goto LAB_1406caf78;
        uVar21 = 0x10 - uVar21 >> 2;
      }
      if ((longlong)(uVar21 + 4) <= (longlong)param_5) {
        lVar16 = param_2 * lVar11 + param_1;
        lVar20 = param_2 * lVar13 + param_1;
        lVar18 = param_2 * lVar15 + param_1;
        lVar17 = param_2 * lVar14 + param_1;
        uVar23 = 0;
        uVar19 = param_5 - (param_5 - uVar21 & 3);
        if (uVar21 != 0) {
          do {
            *(short *)(param_4 + uVar23 * 2) =
                 (short)(int)ROUND((*(float *)(lVar18 + uVar23 * 4) +
                                   *(float *)(lVar16 + uVar23 * 4)) * fVar6 +
                                   (*(float *)(lVar17 + uVar23 * 4) +
                                   *(float *)(lVar20 + uVar23 * 4)) * fVar7 +
                                   *(float *)(uVar22 + uVar23 * 4) * fVar8);
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar21);
        }
        auVar9 = _DAT_14308bc00;
        if ((uVar21 * 4 + lVar20 & 0xf) == 0) {
          lVar24 = uVar21 * 2;
          do {
            pfVar1 = (float *)(lVar18 + uVar21 * 4);
            pfVar4 = (float *)(lVar16 + uVar21 * 4);
            pfVar2 = (float *)(lVar17 + uVar21 * 4);
            pfVar5 = (float *)(lVar20 + uVar21 * 4);
            pfVar3 = (float *)(uVar22 + uVar21 * 4);
            uVar21 = uVar21 + 4;
            auVar30._0_4_ =
                 (int)((*pfVar1 + *pfVar4) * fVar6 + (*pfVar2 + *pfVar5) * fVar7 + *pfVar3 * fVar8);
            auVar30._4_4_ =
                 (int)((pfVar1[1] + pfVar4[1]) * fVar6 + (pfVar2[1] + pfVar5[1]) * fVar7 +
                      pfVar3[1] * fVar8);
            auVar30._8_4_ =
                 (int)((pfVar1[2] + pfVar4[2]) * fVar6 + (pfVar2[2] + pfVar5[2]) * fVar7 +
                      pfVar3[2] * fVar8);
            auVar30._12_4_ =
                 (int)((pfVar1[3] + pfVar4[3]) * fVar6 + (pfVar2[3] + pfVar5[3]) * fVar7 +
                      pfVar3[3] * fVar8);
            auVar30 = pshufb(auVar30,auVar9);
            *(longlong *)(lVar24 + param_4) = auVar30._0_8_;
            lVar24 = lVar24 + 8;
          } while (uVar21 < uVar19);
        }
        else {
          lVar24 = uVar21 * 2;
          do {
            pfVar1 = (float *)(lVar18 + uVar21 * 4);
            pfVar4 = (float *)(lVar16 + uVar21 * 4);
            pfVar5 = (float *)(lVar20 + uVar21 * 4);
            pfVar2 = (float *)(lVar17 + uVar21 * 4);
            pfVar3 = (float *)(uVar22 + uVar21 * 4);
            uVar21 = uVar21 + 4;
            auVar28._0_4_ =
                 (int)((*pfVar1 + *pfVar4) * fVar6 + (*pfVar2 + *pfVar5) * fVar7 + *pfVar3 * fVar8);
            auVar28._4_4_ =
                 (int)((pfVar1[1] + pfVar4[1]) * fVar6 + (pfVar2[1] + pfVar5[1]) * fVar7 +
                      pfVar3[1] * fVar8);
            auVar28._8_4_ =
                 (int)((pfVar1[2] + pfVar4[2]) * fVar6 + (pfVar2[2] + pfVar5[2]) * fVar7 +
                      pfVar3[2] * fVar8);
            auVar28._12_4_ =
                 (int)((pfVar1[3] + pfVar4[3]) * fVar6 + (pfVar2[3] + pfVar5[3]) * fVar7 +
                      pfVar3[3] * fVar8);
            auVar30 = pshufb(auVar28,auVar9);
            *(longlong *)(lVar24 + param_4) = auVar30._0_8_;
            lVar24 = lVar24 + 8;
          } while (uVar21 < uVar19);
        }
        goto LAB_1406caebe;
      }
    }
LAB_1406caf78:
    uVar19 = 0;
LAB_1406caebe:
    if (param_5 <= uVar19) {
      return;
    }
    do {
      *(short *)(param_4 + uVar19 * 2) =
           (short)(int)ROUND((*(float *)(lVar15 * param_2 + param_1 + uVar19 * 4) +
                             *(float *)(lVar11 * param_2 + param_1 + uVar19 * 4)) * fVar6 +
                             (*(float *)(param_1 + param_2 * lVar14 + uVar19 * 4) +
                             *(float *)(lVar13 * param_2 + param_1 + uVar19 * 4)) * fVar7 +
                             *(float *)(lVar12 * param_2 + param_1 + uVar19 * 4) * fVar8);
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 8) {
LAB_1406caf62:
    uVar19 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar21 = param_2 * lVar12 + param_1;
    uVar22 = uVar21 & 0xf;
    if (uVar22 != 0) {
      if ((uVar21 & 3) != 0) goto LAB_1406caf62;
      uVar22 = 0x10 - uVar22 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar22 + 8)) goto LAB_1406caf62;
    lVar17 = param_2 * lVar15 + param_1;
    lVar16 = param_2 * lVar13 + param_1;
    lVar18 = param_2 * lVar11 + param_1;
    lVar20 = param_2 * lVar14 + param_1;
    uVar23 = 0;
    uVar19 = param_5 - (param_5 - uVar22 & 7);
    if (uVar22 != 0) {
      do {
        *(short *)(param_4 + uVar23 * 2) =
             (short)(int)ROUND((*(float *)(lVar17 + uVar23 * 4) + *(float *)(lVar18 + uVar23 * 4)) *
                               fVar6 + (*(float *)(lVar20 + uVar23 * 4) +
                                       *(float *)(lVar16 + uVar23 * 4)) * fVar7 +
                               *(float *)(uVar21 + uVar23 * 4) * fVar8);
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar22);
    }
    auVar9 = _DAT_14308bc00;
    if ((uVar22 * 4 + lVar16 & 0xf) == 0) {
      do {
        pfVar1 = (float *)(lVar17 + uVar22 * 4);
        pfVar2 = (float *)(lVar18 + uVar22 * 4);
        pfVar5 = (float *)(lVar20 + uVar22 * 4);
        pfVar3 = (float *)(lVar16 + uVar22 * 4);
        pfVar4 = (float *)(uVar21 + uVar22 * 4);
        auVar31._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar5 + *pfVar3) * fVar7 + *pfVar4 * fVar8);
        auVar31._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar5[1] + pfVar3[1]) * fVar7 +
                  pfVar4[1] * fVar8);
        auVar31._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar5[2] + pfVar3[2]) * fVar7 +
                  pfVar4[2] * fVar8);
        auVar31._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar5[3] + pfVar3[3]) * fVar7 +
                  pfVar4[3] * fVar8);
        auVar30 = pshufb(auVar31,auVar9);
        *(longlong *)(param_4 + uVar22 * 2) = auVar30._0_8_;
        pfVar1 = (float *)(lVar17 + 0x10 + uVar22 * 4);
        pfVar2 = (float *)(lVar18 + 0x10 + uVar22 * 4);
        pfVar3 = (float *)(lVar20 + 0x10 + uVar22 * 4);
        pfVar4 = (float *)(lVar16 + 0x10 + uVar22 * 4);
        pfVar5 = (float *)(uVar21 + 0x10 + uVar22 * 4);
        auVar26._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar3 + *pfVar4) * fVar7 + *pfVar5 * fVar8);
        auVar26._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar3[1] + pfVar4[1]) * fVar7 +
                  pfVar5[1] * fVar8);
        auVar26._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar3[2] + pfVar4[2]) * fVar7 +
                  pfVar5[2] * fVar8);
        auVar26._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar3[3] + pfVar4[3]) * fVar7 +
                  pfVar5[3] * fVar8);
        auVar30 = pshufb(auVar26,auVar9);
        *(longlong *)(param_4 + 8 + uVar22 * 2) = auVar30._0_8_;
        uVar22 = uVar22 + 8;
      } while (uVar22 < uVar19);
    }
    else {
      do {
        pfVar1 = (float *)(lVar17 + uVar22 * 4);
        pfVar2 = (float *)(lVar18 + uVar22 * 4);
        pfVar3 = (float *)(lVar16 + uVar22 * 4);
        pfVar5 = (float *)(lVar20 + uVar22 * 4);
        pfVar4 = (float *)(uVar21 + uVar22 * 4);
        auVar29._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar5 + *pfVar3) * fVar7 + *pfVar4 * fVar8);
        auVar29._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar5[1] + pfVar3[1]) * fVar7 +
                  pfVar4[1] * fVar8);
        auVar29._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar5[2] + pfVar3[2]) * fVar7 +
                  pfVar4[2] * fVar8);
        auVar29._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar5[3] + pfVar3[3]) * fVar7 +
                  pfVar4[3] * fVar8);
        auVar30 = pshufb(auVar29,auVar9);
        *(longlong *)(param_4 + uVar22 * 2) = auVar30._0_8_;
        pfVar1 = (float *)(lVar17 + 0x10 + uVar22 * 4);
        pfVar2 = (float *)(lVar18 + 0x10 + uVar22 * 4);
        pfVar3 = (float *)(lVar16 + 0x10 + uVar22 * 4);
        pfVar4 = (float *)(lVar20 + 0x10 + uVar22 * 4);
        pfVar5 = (float *)(uVar21 + 0x10 + uVar22 * 4);
        auVar25._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar4 + *pfVar3) * fVar7 + *pfVar5 * fVar8);
        auVar25._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar4[1] + pfVar3[1]) * fVar7 +
                  pfVar5[1] * fVar8);
        auVar25._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar4[2] + pfVar3[2]) * fVar7 +
                  pfVar5[2] * fVar8);
        auVar25._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar4[3] + pfVar3[3]) * fVar7 +
                  pfVar5[3] * fVar8);
        auVar30 = pshufb(auVar25,auVar9);
        *(longlong *)(param_4 + 8 + uVar22 * 2) = auVar30._0_8_;
        uVar22 = uVar22 + 8;
      } while (uVar22 < uVar19);
    }
    if (param_5 < uVar19 + 1) {
      return;
    }
    param_5 = param_5 - uVar19;
    if (3 < (longlong)param_5) {
      lVar24 = uVar19 * 4;
      uVar22 = param_5 & 0xfffffffffffffffc;
      uVar10 = 0;
      uVar23 = uVar10;
      do {
        pfVar1 = (float *)(lVar17 + lVar24 + uVar23 * 4);
        pfVar2 = (float *)(lVar18 + lVar24 + uVar23 * 4);
        pfVar3 = (float *)(lVar16 + lVar24 + uVar23 * 4);
        pfVar5 = (float *)(lVar20 + lVar24 + uVar23 * 4);
        pfVar4 = (float *)(uVar21 + lVar24 + uVar23 * 4);
        uVar23 = uVar23 + 4;
        auVar27._0_4_ =
             (int)((*pfVar1 + *pfVar2) * fVar6 + (*pfVar5 + *pfVar3) * fVar7 + fVar8 * *pfVar4);
        auVar27._4_4_ =
             (int)((pfVar1[1] + pfVar2[1]) * fVar6 + (pfVar5[1] + pfVar3[1]) * fVar7 +
                  fVar8 * pfVar4[1]);
        auVar27._8_4_ =
             (int)((pfVar1[2] + pfVar2[2]) * fVar6 + (pfVar5[2] + pfVar3[2]) * fVar7 +
                  fVar8 * pfVar4[2]);
        auVar27._12_4_ =
             (int)((pfVar1[3] + pfVar2[3]) * fVar6 + (pfVar5[3] + pfVar3[3]) * fVar7 +
                  fVar8 * pfVar4[3]);
        auVar30 = pshufb(auVar27,auVar9);
        *(longlong *)(uVar10 + uVar19 * 2 + param_4) = auVar30._0_8_;
        uVar10 = uVar10 + 8;
      } while (uVar23 < uVar22);
      goto LAB_1406cab72;
    }
  }
  uVar22 = 0;
LAB_1406cab72:
  if (uVar22 < param_5) {
    lVar16 = uVar19 * 4;
    do {
      *(short *)(param_4 + uVar19 * 2 + uVar22 * 2) =
           (short)(int)ROUND((*(float *)(lVar15 * param_2 + param_1 + lVar16 + uVar22 * 4) +
                             *(float *)(lVar11 * param_2 + param_1 + lVar16 + uVar22 * 4)) * fVar6 +
                             (*(float *)(lVar14 * param_2 + param_1 + lVar16 + uVar22 * 4) +
                             *(float *)(lVar13 * param_2 + param_1 + lVar16 + uVar22 * 4)) * fVar7 +
                             *(float *)(param_1 + param_2 * lVar12 + lVar16 + uVar22 * 4) * fVar8);
      uVar22 = uVar22 + 1;
    } while (uVar22 < param_5);
  }
  return;
}

