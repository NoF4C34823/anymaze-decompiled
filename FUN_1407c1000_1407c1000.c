
void FUN_1407c1000(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  
  lVar34 = (longlong)param_3;
  lVar35 = lVar34 + -2;
  if (SCARRY8(lVar34,-2) != lVar34 + -2 < 0) {
    lVar35 = lVar34 + 3;
  }
  fVar7 = *param_6;
  lVar34 = (longlong)(int)lVar35 + 1;
  fVar8 = param_6[1];
  fVar9 = param_6[2];
  lVar25 = 0;
  if (4 < lVar34) {
    lVar34 = lVar25;
  }
  lVar30 = (longlong)(int)lVar34 + 1;
  if (4 < lVar30) {
    lVar30 = lVar25;
  }
  lVar31 = (longlong)(int)lVar30 + 1;
  if (4 < lVar31) {
    lVar31 = lVar25;
  }
  lVar36 = (longlong)(int)lVar31 + 1;
  if (4 < lVar36) {
    lVar36 = lVar25;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar37 = param_4 & 0xf;
      if (uVar37 != 0) {
        if ((param_4 & 3) != 0) goto LAB_1407c17a5;
        uVar37 = 0x10 - uVar37 >> 2;
      }
      if ((longlong)(uVar37 + 4) <= (longlong)param_5) {
        lVar25 = param_2 * lVar36 + param_1;
        lVar28 = param_2 * lVar30 + param_1;
        uVar33 = param_5 - (param_5 - uVar37 & 3);
        lVar27 = param_2 * lVar35 + param_1;
        lVar26 = param_2 * lVar34 + param_1;
        lVar29 = param_2 * lVar31 + param_1;
        if (uVar37 != 0) {
          uVar32 = 0;
          do {
            *(float *)(param_4 + uVar32 * 4) =
                 (*(float *)(lVar27 + uVar32 * 4) + *(float *)(lVar25 + uVar32 * 4)) * fVar7 +
                 (*(float *)(lVar26 + uVar32 * 4) + *(float *)(lVar29 + uVar32 * 4)) * fVar8 +
                 *(float *)(lVar28 + uVar32 * 4) * fVar9;
            uVar32 = uVar32 + 1;
          } while (uVar32 < uVar37);
        }
        if ((lVar28 + uVar37 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar27 + uVar37 * 4);
            fVar10 = pfVar1[1];
            fVar11 = pfVar1[2];
            fVar12 = pfVar1[3];
            pfVar2 = (float *)(lVar25 + uVar37 * 4);
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            pfVar3 = (float *)(lVar26 + uVar37 * 4);
            fVar16 = pfVar3[1];
            fVar17 = pfVar3[2];
            fVar18 = pfVar3[3];
            pfVar4 = (float *)(lVar29 + uVar37 * 4);
            fVar19 = pfVar4[1];
            fVar20 = pfVar4[2];
            fVar21 = pfVar4[3];
            pfVar5 = (float *)(lVar28 + uVar37 * 4);
            fVar22 = pfVar5[1];
            fVar23 = pfVar5[2];
            fVar24 = pfVar5[3];
            pfVar6 = (float *)(param_4 + uVar37 * 4);
            *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
            pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
            pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
            pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
            uVar37 = uVar37 + 4;
          } while (uVar37 < uVar33);
        }
        else {
          do {
            pfVar1 = (float *)(lVar27 + uVar37 * 4);
            fVar10 = pfVar1[1];
            fVar11 = pfVar1[2];
            fVar12 = pfVar1[3];
            pfVar2 = (float *)(lVar25 + uVar37 * 4);
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            pfVar3 = (float *)(lVar26 + uVar37 * 4);
            fVar16 = pfVar3[1];
            fVar17 = pfVar3[2];
            fVar18 = pfVar3[3];
            pfVar4 = (float *)(lVar29 + uVar37 * 4);
            fVar19 = pfVar4[1];
            fVar20 = pfVar4[2];
            fVar21 = pfVar4[3];
            pfVar5 = (float *)(lVar28 + uVar37 * 4);
            fVar22 = pfVar5[1];
            fVar23 = pfVar5[2];
            fVar24 = pfVar5[3];
            pfVar6 = (float *)(param_4 + uVar37 * 4);
            *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
            pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
            pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
            pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
            uVar37 = uVar37 + 4;
          } while (uVar37 < uVar33);
        }
        goto LAB_1407c1714;
      }
    }
LAB_1407c17a5:
    uVar33 = 0;
LAB_1407c1714:
    if (param_5 <= uVar33) {
      return;
    }
    do {
      *(float *)(param_4 + uVar33 * 4) =
           (*(float *)(lVar35 * param_2 + param_1 + uVar33 * 4) +
           *(float *)(lVar36 * param_2 + param_1 + uVar33 * 4)) * fVar7 +
           (*(float *)(lVar34 * param_2 + param_1 + uVar33 * 4) +
           *(float *)(param_1 + param_2 * lVar31 + uVar33 * 4)) * fVar8 +
           *(float *)(lVar30 * param_2 + param_1 + uVar33 * 4) * fVar9;
      uVar33 = uVar33 + 1;
    } while (uVar33 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 8) {
LAB_1407c1795:
    uVar33 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar37 = param_4 & 0xf;
    if (uVar37 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1407c1795;
      uVar37 = 0x10 - uVar37 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar37 + 8)) goto LAB_1407c1795;
    lVar25 = param_2 * lVar35 + param_1;
    lVar28 = param_2 * lVar36 + param_1;
    uVar33 = param_5 - (param_5 - uVar37 & 7);
    lVar27 = param_2 * lVar30 + param_1;
    lVar29 = param_2 * lVar34 + param_1;
    lVar26 = param_2 * lVar31 + param_1;
    uVar32 = 0;
    if (uVar37 != 0) {
      do {
        *(float *)(param_4 + uVar32 * 4) =
             (*(float *)(lVar25 + uVar32 * 4) + *(float *)(lVar28 + uVar32 * 4)) * fVar7 +
             (*(float *)(lVar29 + uVar32 * 4) + *(float *)(lVar26 + uVar32 * 4)) * fVar8 +
             *(float *)(lVar27 + uVar32 * 4) * fVar9;
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar37);
    }
    if ((lVar27 + uVar37 * 4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)(lVar25 + uVar37 * 4);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar2 = (float *)(lVar28 + uVar37 * 4);
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        pfVar3 = (float *)(lVar29 + uVar37 * 4);
        fVar16 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar18 = pfVar3[3];
        pfVar4 = (float *)(lVar26 + uVar37 * 4);
        fVar19 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar21 = pfVar4[3];
        pfVar5 = (float *)(lVar27 + uVar37 * 4);
        fVar22 = pfVar5[1];
        fVar23 = pfVar5[2];
        fVar24 = pfVar5[3];
        pfVar6 = (float *)(param_4 + uVar37 * 4);
        *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
        pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
        pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
        pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
        pfVar1 = (float *)(lVar25 + 0x10 + uVar37 * 4);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar2 = (float *)(lVar28 + 0x10 + uVar37 * 4);
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        pfVar3 = (float *)(lVar29 + 0x10 + uVar37 * 4);
        fVar16 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar18 = pfVar3[3];
        pfVar4 = (float *)(lVar26 + 0x10 + uVar37 * 4);
        fVar19 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar21 = pfVar4[3];
        pfVar5 = (float *)(lVar27 + 0x10 + uVar37 * 4);
        fVar22 = pfVar5[1];
        fVar23 = pfVar5[2];
        fVar24 = pfVar5[3];
        pfVar6 = (float *)(param_4 + 0x10 + uVar37 * 4);
        *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
        pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
        pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
        pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
        uVar37 = uVar37 + 8;
      } while (uVar37 < uVar33);
    }
    else {
      do {
        pfVar1 = (float *)(lVar25 + uVar37 * 4);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar2 = (float *)(lVar28 + uVar37 * 4);
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        pfVar3 = (float *)(lVar29 + uVar37 * 4);
        fVar16 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar18 = pfVar3[3];
        pfVar4 = (float *)(lVar26 + uVar37 * 4);
        fVar19 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar21 = pfVar4[3];
        pfVar5 = (float *)(lVar27 + uVar37 * 4);
        fVar22 = pfVar5[1];
        fVar23 = pfVar5[2];
        fVar24 = pfVar5[3];
        pfVar6 = (float *)(param_4 + uVar37 * 4);
        *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
        pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
        pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
        pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
        pfVar1 = (float *)(lVar25 + 0x10 + uVar37 * 4);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar2 = (float *)(lVar28 + 0x10 + uVar37 * 4);
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        pfVar3 = (float *)(lVar29 + 0x10 + uVar37 * 4);
        fVar16 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar18 = pfVar3[3];
        pfVar4 = (float *)(lVar26 + 0x10 + uVar37 * 4);
        fVar19 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar21 = pfVar4[3];
        pfVar5 = (float *)(lVar27 + 0x10 + uVar37 * 4);
        fVar22 = pfVar5[1];
        fVar23 = pfVar5[2];
        fVar24 = pfVar5[3];
        pfVar6 = (float *)(param_4 + 0x10 + uVar37 * 4);
        *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
        pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
        pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
        pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
        uVar37 = uVar37 + 8;
      } while (uVar37 < uVar33);
    }
    if (param_5 < uVar33 + 1) {
      return;
    }
    param_5 = param_5 - uVar33;
    if (3 < (longlong)param_5) {
      uVar37 = param_5 & 0xfffffffffffffffc;
      uVar32 = 0;
      do {
        pfVar1 = (float *)(lVar25 + uVar33 * 4 + uVar32 * 4);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar2 = (float *)(lVar28 + uVar33 * 4 + uVar32 * 4);
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        pfVar3 = (float *)(lVar29 + uVar33 * 4 + uVar32 * 4);
        fVar16 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar18 = pfVar3[3];
        pfVar4 = (float *)(lVar26 + uVar33 * 4 + uVar32 * 4);
        fVar19 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar21 = pfVar4[3];
        pfVar5 = (float *)(lVar27 + uVar33 * 4 + uVar32 * 4);
        fVar22 = pfVar5[1];
        fVar23 = pfVar5[2];
        fVar24 = pfVar5[3];
        pfVar6 = (float *)(param_4 + uVar33 * 4 + uVar32 * 4);
        *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
        pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
        pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
        pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
        uVar32 = uVar32 + 4;
      } while (uVar32 < uVar37);
      goto LAB_1407c143e;
    }
  }
  uVar37 = 0;
LAB_1407c143e:
  if (uVar37 < param_5) {
    do {
      *(float *)(param_4 + uVar33 * 4 + uVar37 * 4) =
           (*(float *)(lVar35 * param_2 + param_1 + uVar33 * 4 + uVar37 * 4) +
           *(float *)(lVar36 * param_2 + param_1 + uVar33 * 4 + uVar37 * 4)) * fVar7 +
           (*(float *)(lVar34 * param_2 + param_1 + uVar33 * 4 + uVar37 * 4) +
           *(float *)(lVar31 * param_2 + param_1 + uVar33 * 4 + uVar37 * 4)) * fVar8 +
           *(float *)(param_1 + param_2 * lVar30 + uVar33 * 4 + uVar37 * 4) * fVar9;
      uVar37 = uVar37 + 1;
    } while (uVar37 < param_5);
  }
  return;
}

