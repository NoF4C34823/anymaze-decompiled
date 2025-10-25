
void FUN_1401773c0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  
  lVar19 = 2;
  if (0 < (longlong)param_3) {
    lVar19 = (longlong)param_3 + -1;
  }
  lVar20 = (longlong)(int)lVar19 + 1;
  fVar5 = *param_6;
  fVar6 = param_6[1];
  if (2 < lVar20) {
    lVar20 = 0;
  }
  lVar21 = (longlong)(int)lVar20 + 1;
  if (2 < lVar21) {
    lVar21 = 0;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar18 = param_4 & 0xf;
      if (uVar18 != 0) {
        if ((param_4 & 3) != 0) goto LAB_140177845;
        uVar18 = 0x10 - uVar18 >> 2;
      }
      if ((longlong)(uVar18 + 4) <= (longlong)param_5) {
        lVar24 = param_2 * lVar20 + param_1;
        lVar22 = param_2 * lVar19 + param_1;
        lVar16 = param_2 * lVar21 + param_1;
        uVar17 = param_5 - (param_5 - uVar18 & 3);
        uVar23 = 0;
        if (uVar18 != 0) {
          do {
            *(float *)(param_4 + uVar23 * 4) =
                 (*(float *)(lVar22 + uVar23 * 4) + *(float *)(lVar16 + uVar23 * 4)) * fVar5 +
                 *(float *)(lVar24 + uVar23 * 4) * fVar6;
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar18);
        }
        if ((lVar24 + uVar18 * 4 & 0xf) == 0) {
          do {
            pfVar4 = (float *)(lVar22 + uVar18 * 4);
            fVar7 = pfVar4[1];
            fVar8 = pfVar4[2];
            fVar9 = pfVar4[3];
            pfVar1 = (float *)(lVar16 + uVar18 * 4);
            fVar10 = pfVar1[1];
            fVar11 = pfVar1[2];
            fVar12 = pfVar1[3];
            pfVar2 = (float *)(lVar24 + uVar18 * 4);
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            pfVar3 = (float *)(param_4 + uVar18 * 4);
            *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
            pfVar3[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
            pfVar3[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
            pfVar3[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
            uVar18 = uVar18 + 4;
          } while (uVar18 < uVar17);
        }
        else {
          do {
            pfVar4 = (float *)(lVar22 + uVar18 * 4);
            fVar7 = pfVar4[1];
            fVar8 = pfVar4[2];
            fVar9 = pfVar4[3];
            pfVar1 = (float *)(lVar16 + uVar18 * 4);
            fVar10 = pfVar1[1];
            fVar11 = pfVar1[2];
            fVar12 = pfVar1[3];
            pfVar2 = (float *)(lVar24 + uVar18 * 4);
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            pfVar3 = (float *)(param_4 + uVar18 * 4);
            *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
            pfVar3[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
            pfVar3[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
            pfVar3[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
            uVar18 = uVar18 + 4;
          } while (uVar18 < uVar17);
        }
        goto LAB_1401777ca;
      }
    }
LAB_140177845:
    uVar17 = 0;
LAB_1401777ca:
    if (param_5 <= uVar17) {
      return;
    }
    do {
      *(float *)(param_4 + uVar17 * 4) =
           (*(float *)(lVar19 * param_2 + param_1 + uVar17 * 4) +
           *(float *)(param_1 + param_2 * lVar21 + uVar17 * 4)) * fVar5 +
           *(float *)(lVar20 * param_2 + param_1 + uVar17 * 4) * fVar6;
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 8) {
LAB_140177836:
    uVar17 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar18 = param_4 & 0xf;
    if (uVar18 != 0) {
      if ((param_4 & 3) != 0) goto LAB_140177836;
      uVar18 = 0x10 - uVar18 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar18 + 8)) goto LAB_140177836;
    lVar16 = param_2 * lVar20 + param_1;
    lVar22 = param_2 * lVar19 + param_1;
    lVar24 = param_2 * lVar21 + param_1;
    uVar17 = param_5 - (param_5 - uVar18 & 7);
    uVar23 = 0;
    if (uVar18 != 0) {
      do {
        *(float *)(param_4 + uVar23 * 4) =
             (*(float *)(lVar22 + uVar23 * 4) + *(float *)(lVar24 + uVar23 * 4)) * fVar5 +
             *(float *)(lVar16 + uVar23 * 4) * fVar6;
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar18);
    }
    if ((lVar16 + uVar18 * 4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)(lVar22 + uVar18 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = (float *)(lVar24 + uVar18 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(lVar16 + uVar18 * 4);
        fVar13 = pfVar3[1];
        fVar14 = pfVar3[2];
        fVar15 = pfVar3[3];
        pfVar4 = (float *)(param_4 + uVar18 * 4);
        *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
        pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
        pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
        pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
        pfVar1 = (float *)(lVar22 + 0x10 + uVar18 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = (float *)(lVar24 + 0x10 + uVar18 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(lVar16 + 0x10 + uVar18 * 4);
        fVar13 = pfVar3[1];
        fVar14 = pfVar3[2];
        fVar15 = pfVar3[3];
        pfVar4 = (float *)(param_4 + 0x10 + uVar18 * 4);
        *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
        pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
        pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
        pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
        uVar18 = uVar18 + 8;
      } while (uVar18 < uVar17);
    }
    else {
      do {
        pfVar1 = (float *)(lVar22 + uVar18 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = (float *)(lVar24 + uVar18 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(lVar16 + uVar18 * 4);
        fVar13 = pfVar3[1];
        fVar14 = pfVar3[2];
        fVar15 = pfVar3[3];
        pfVar4 = (float *)(param_4 + uVar18 * 4);
        *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
        pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
        pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
        pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
        pfVar1 = (float *)(lVar22 + 0x10 + uVar18 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = (float *)(lVar24 + 0x10 + uVar18 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(lVar16 + 0x10 + uVar18 * 4);
        fVar13 = pfVar3[1];
        fVar14 = pfVar3[2];
        fVar15 = pfVar3[3];
        pfVar4 = (float *)(param_4 + 0x10 + uVar18 * 4);
        *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
        pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
        pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
        pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
        uVar18 = uVar18 + 8;
      } while (uVar18 < uVar17);
    }
    if (param_5 < uVar17 + 1) {
      return;
    }
    param_5 = param_5 - uVar17;
    if (3 < (longlong)param_5) {
      uVar23 = 0;
      uVar18 = param_5 & 0xfffffffffffffffc;
      do {
        pfVar4 = (float *)(lVar22 + uVar17 * 4 + uVar23 * 4);
        fVar7 = pfVar4[1];
        fVar8 = pfVar4[2];
        fVar9 = pfVar4[3];
        pfVar1 = (float *)(lVar24 + uVar17 * 4 + uVar23 * 4);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar2 = (float *)(lVar16 + uVar17 * 4 + uVar23 * 4);
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        pfVar3 = (float *)(param_4 + uVar17 * 4 + uVar23 * 4);
        *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
        pfVar3[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
        pfVar3[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
        pfVar3[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
        uVar23 = uVar23 + 4;
      } while (uVar23 < uVar18);
      goto LAB_14017760a;
    }
  }
  uVar18 = 0;
LAB_14017760a:
  if (uVar18 < param_5) {
    do {
      *(float *)(param_4 + uVar17 * 4 + uVar18 * 4) =
           (*(float *)(lVar19 * param_2 + param_1 + uVar17 * 4 + uVar18 * 4) +
           *(float *)(lVar21 * param_2 + param_1 + uVar17 * 4 + uVar18 * 4)) * fVar5 +
           *(float *)(param_1 + param_2 * lVar20 + uVar17 * 4 + uVar18 * 4) * fVar6;
      uVar18 = uVar18 + 1;
    } while (uVar18 < param_5);
  }
  return;
}

