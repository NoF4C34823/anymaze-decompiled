
void FUN_14006a4c0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  
  lVar18 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar18 = 2;
  }
  lVar17 = (longlong)(int)lVar18 + 1;
  fVar5 = *param_6;
  fVar6 = param_6[1];
  if (2 < lVar17) {
    lVar17 = 0;
  }
  lVar16 = (longlong)(int)lVar17 + 1;
  if (2 < lVar16) {
    lVar16 = 0;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar22 = param_4 & 0xf;
      if (uVar22 != 0) {
        if ((param_4 & 3) != 0) goto LAB_14006a926;
        uVar22 = 0x10 - uVar22 >> 2;
      }
      if ((longlong)(uVar22 + 4) <= (longlong)param_5) {
        lVar20 = param_2 * lVar17 + param_1;
        lVar19 = param_2 * lVar18 + param_1;
        lVar21 = param_2 * lVar16 + param_1;
        uVar23 = param_5 - (param_5 - uVar22 & 3);
        uVar24 = 0;
        if (uVar22 != 0) {
          do {
            *(float *)(param_4 + uVar24 * 4) =
                 (*(float *)(lVar19 + uVar24 * 4) + *(float *)(lVar21 + uVar24 * 4)) * fVar5 +
                 *(float *)(lVar20 + uVar24 * 4) * fVar6;
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar22);
        }
        if ((uVar22 * 4 + lVar20 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar19 + uVar22 * 4);
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar2 = (float *)(lVar21 + uVar22 * 4);
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            pfVar3 = (float *)(lVar20 + uVar22 * 4);
            fVar13 = pfVar3[1];
            fVar14 = pfVar3[2];
            fVar15 = pfVar3[3];
            pfVar4 = (float *)(param_4 + uVar22 * 4);
            *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
            pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
            pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
            pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
            uVar22 = uVar22 + 4;
          } while (uVar22 < uVar23);
        }
        else {
          do {
            pfVar1 = (float *)(lVar19 + uVar22 * 4);
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar2 = (float *)(lVar21 + uVar22 * 4);
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            pfVar3 = (float *)(lVar20 + uVar22 * 4);
            fVar13 = pfVar3[1];
            fVar14 = pfVar3[2];
            fVar15 = pfVar3[3];
            pfVar4 = (float *)(param_4 + uVar22 * 4);
            *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
            pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
            pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
            pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
            uVar22 = uVar22 + 4;
          } while (uVar22 < uVar23);
        }
        goto LAB_14006a8a9;
      }
    }
LAB_14006a926:
    uVar23 = 0;
LAB_14006a8a9:
    if (param_5 <= uVar23) {
      return;
    }
    do {
      *(float *)(param_4 + uVar23 * 4) =
           (*(float *)(lVar18 * param_2 + param_1 + uVar23 * 4) +
           *(float *)(param_1 + param_2 * lVar16 + uVar23 * 4)) * fVar5 +
           *(float *)(lVar17 * param_2 + param_1 + uVar23 * 4) * fVar6;
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar22 = param_4 & 0xf;
    if (uVar22 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14006a91e;
      uVar22 = 0x10 - uVar22 >> 2;
    }
    if ((longlong)(uVar22 + 8) <= (longlong)param_5) {
      lVar19 = param_2 * lVar17 + param_1;
      lVar21 = param_2 * lVar18 + param_1;
      lVar20 = param_2 * lVar16 + param_1;
      uVar23 = param_5 - (param_5 - uVar22 & 7);
      uVar24 = 0;
      if (uVar22 != 0) {
        do {
          *(float *)(param_4 + uVar24 * 4) =
               (*(float *)(lVar21 + uVar24 * 4) + *(float *)(lVar20 + uVar24 * 4)) * fVar5 +
               *(float *)(lVar19 + uVar24 * 4) * fVar6;
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar22);
      }
      if ((uVar22 * 4 + lVar19 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar21 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar19 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(param_4 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar1 = (float *)(lVar21 + 0x10 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + 0x10 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar19 + 0x10 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(param_4 + 0x10 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          uVar22 = uVar22 + 8;
        } while (uVar22 < uVar23);
      }
      else {
        do {
          pfVar1 = (float *)(lVar21 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar19 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(param_4 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar1 = (float *)(lVar21 + 0x10 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + 0x10 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar19 + 0x10 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(param_4 + 0x10 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          uVar22 = uVar22 + 8;
        } while (uVar22 < uVar23);
      }
      goto LAB_14006a6cd;
    }
  }
LAB_14006a91e:
  uVar23 = 0;
LAB_14006a6cd:
  uVar22 = 0;
  if (uVar23 + 1 <= param_5) {
    lVar19 = uVar23 * 4;
    do {
      *(float *)(param_4 + lVar19 + uVar22 * 4) =
           (*(float *)(lVar18 * param_2 + param_1 + lVar19 + uVar22 * 4) +
           *(float *)(lVar16 * param_2 + param_1 + lVar19 + uVar22 * 4)) * fVar5 +
           *(float *)(param_1 + param_2 * lVar17 + lVar19 + uVar22 * 4) * fVar6;
      uVar22 = uVar22 + 1;
    } while (uVar22 < param_5 - uVar23);
  }
  return;
}

