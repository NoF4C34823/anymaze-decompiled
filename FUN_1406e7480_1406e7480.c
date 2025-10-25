
void FUN_1406e7480(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
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
  float fVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  
  lVar34 = (longlong)param_3;
  lVar27 = 0;
  lVar35 = lVar34 + -2;
  if (SCARRY8(lVar34,-2) != lVar34 + -2 < 0) {
    lVar35 = lVar34 + 3;
  }
  lVar34 = (longlong)(int)lVar35 + 1;
  fVar8 = *param_6;
  if (4 < lVar34) {
    lVar34 = lVar27;
  }
  fVar9 = param_6[1];
  fVar10 = param_6[2];
  lVar36 = (longlong)(int)lVar34 + 1;
  if (4 < lVar36) {
    lVar36 = lVar27;
  }
  lVar37 = (longlong)(int)lVar36 + 1;
  if (4 < lVar37) {
    lVar37 = lVar27;
  }
  lVar32 = (longlong)(int)lVar37 + 1;
  if (4 < lVar32) {
    lVar32 = lVar27;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar38 = param_4 & 0xf;
      if (uVar38 != 0) {
        if ((param_4 & 3) != 0) goto LAB_1406e7c89;
        uVar38 = 0x10 - uVar38 >> 2;
      }
      if ((longlong)(uVar38 + 4) <= (longlong)param_5) {
        lVar30 = param_2 * lVar34 + param_1;
        lVar29 = param_2 * lVar36 + param_1;
        lVar27 = param_2 * lVar35 + param_1;
        lVar28 = param_2 * lVar32 + param_1;
        uVar26 = param_5 - (param_5 - uVar38 & 3);
        lVar31 = param_2 * lVar37 + param_1;
        if (uVar38 != 0) {
          uVar33 = 0;
          do {
            *(float *)(param_4 + uVar33 * 4) =
                 (*(float *)(lVar27 + uVar33 * 4) + *(float *)(lVar28 + uVar33 * 4)) * fVar8 +
                 (*(float *)(lVar30 + uVar33 * 4) + *(float *)(lVar31 + uVar33 * 4)) * fVar9 +
                 *(float *)(lVar29 + uVar33 * 4) * fVar10;
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar38);
        }
        if ((uVar38 * 4 + lVar29 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar27 + uVar38 * 4);
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar2 = (float *)(lVar28 + uVar38 * 4);
            fVar14 = pfVar2[1];
            fVar15 = pfVar2[2];
            fVar16 = pfVar2[3];
            pfVar7 = (float *)(lVar31 + uVar38 * 4);
            fVar17 = pfVar7[1];
            fVar18 = pfVar7[2];
            fVar19 = pfVar7[3];
            pfVar3 = (float *)(lVar30 + uVar38 * 4);
            fVar20 = pfVar3[1];
            fVar21 = pfVar3[2];
            fVar22 = pfVar3[3];
            pfVar4 = (float *)(lVar29 + uVar38 * 4);
            fVar23 = pfVar4[1];
            fVar24 = pfVar4[2];
            fVar25 = pfVar4[3];
            pfVar5 = (float *)(param_4 + uVar38 * 4);
            *pfVar5 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar7) * fVar9 + *pfVar4 * fVar10;
            pfVar5[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
            pfVar5[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
            pfVar5[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
            uVar38 = uVar38 + 4;
          } while (uVar38 < uVar26);
        }
        else {
          do {
            pfVar1 = (float *)(lVar27 + uVar38 * 4);
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar2 = (float *)(lVar28 + uVar38 * 4);
            fVar14 = pfVar2[1];
            fVar15 = pfVar2[2];
            fVar16 = pfVar2[3];
            pfVar7 = (float *)(lVar31 + uVar38 * 4);
            fVar17 = pfVar7[1];
            fVar18 = pfVar7[2];
            fVar19 = pfVar7[3];
            pfVar3 = (float *)(lVar30 + uVar38 * 4);
            fVar20 = pfVar3[1];
            fVar21 = pfVar3[2];
            fVar22 = pfVar3[3];
            pfVar4 = (float *)(lVar29 + uVar38 * 4);
            fVar23 = pfVar4[1];
            fVar24 = pfVar4[2];
            fVar25 = pfVar4[3];
            pfVar5 = (float *)(param_4 + uVar38 * 4);
            *pfVar5 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar7) * fVar9 + *pfVar4 * fVar10;
            pfVar5[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
            pfVar5[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
            pfVar5[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
            uVar38 = uVar38 + 4;
          } while (uVar38 < uVar26);
        }
        goto LAB_1406e7bd5;
      }
    }
LAB_1406e7c89:
    uVar26 = 0;
LAB_1406e7bd5:
    if (param_5 <= uVar26) {
      return;
    }
    do {
      *(float *)(param_4 + uVar26 * 4) =
           (*(float *)(lVar35 * param_2 + param_1 + uVar26 * 4) +
           *(float *)(lVar32 * param_2 + param_1 + uVar26 * 4)) * fVar8 +
           (*(float *)(lVar34 * param_2 + param_1 + uVar26 * 4) +
           *(float *)(param_1 + param_2 * lVar37 + uVar26 * 4)) * fVar9 +
           *(float *)(lVar36 * param_2 + param_1 + uVar26 * 4) * fVar10;
      uVar26 = uVar26 + 1;
    } while (uVar26 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 8) {
LAB_1406e7c74:
    uVar26 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar38 = param_4 & 0xf;
    if (uVar38 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1406e7c74;
      uVar38 = 0x10 - uVar38 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar38 + 8)) goto LAB_1406e7c74;
    lVar29 = param_2 * lVar35 + param_1;
    lVar27 = param_2 * lVar32 + param_1;
    lVar31 = param_2 * lVar36 + param_1;
    lVar28 = param_2 * lVar34 + param_1;
    lVar30 = param_2 * lVar37 + param_1;
    uVar26 = param_5 - (param_5 - uVar38 & 7);
    uVar33 = 0;
    if (uVar38 != 0) {
      do {
        *(float *)(param_4 + uVar33 * 4) =
             (*(float *)(lVar29 + uVar33 * 4) + *(float *)(lVar27 + uVar33 * 4)) * fVar8 +
             (*(float *)(lVar28 + uVar33 * 4) + *(float *)(lVar30 + uVar33 * 4)) * fVar9 +
             *(float *)(lVar31 + uVar33 * 4) * fVar10;
        uVar33 = uVar33 + 1;
      } while (uVar33 < uVar38);
    }
    if ((uVar38 * 4 + lVar31 & 0xf) == 0) {
      do {
        pfVar1 = (float *)(lVar29 + uVar38 * 4);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar7 = (float *)(lVar27 + uVar38 * 4);
        fVar14 = pfVar7[1];
        fVar15 = pfVar7[2];
        fVar16 = pfVar7[3];
        pfVar2 = (float *)(lVar30 + uVar38 * 4);
        fVar17 = pfVar2[1];
        fVar18 = pfVar2[2];
        fVar19 = pfVar2[3];
        pfVar3 = (float *)(lVar28 + uVar38 * 4);
        fVar20 = pfVar3[1];
        fVar21 = pfVar3[2];
        fVar22 = pfVar3[3];
        pfVar4 = (float *)(lVar31 + uVar38 * 4);
        fVar23 = pfVar4[1];
        fVar24 = pfVar4[2];
        fVar25 = pfVar4[3];
        pfVar5 = (float *)(param_4 + uVar38 * 4);
        *pfVar5 = (*pfVar1 + *pfVar7) * fVar8 + (*pfVar3 + *pfVar2) * fVar9 + *pfVar4 * fVar10;
        pfVar5[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
        pfVar5[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
        pfVar5[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
        pfVar1 = (float *)(lVar29 + 0x10 + uVar38 * 4);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)(lVar27 + 0x10 + uVar38 * 4);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar3 = (float *)(lVar28 + 0x10 + uVar38 * 4);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar4 = (float *)(lVar30 + 0x10 + uVar38 * 4);
        fVar20 = pfVar4[1];
        fVar21 = pfVar4[2];
        fVar22 = pfVar4[3];
        pfVar5 = (float *)(lVar31 + 0x10 + uVar38 * 4);
        fVar23 = pfVar5[1];
        fVar24 = pfVar5[2];
        fVar25 = pfVar5[3];
        pfVar7 = (float *)(param_4 + 0x10 + uVar38 * 4);
        *pfVar7 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar4) * fVar9 + *pfVar5 * fVar10;
        pfVar7[1] = (fVar11 + fVar14) * fVar8 + (fVar17 + fVar20) * fVar9 + fVar23 * fVar10;
        pfVar7[2] = (fVar12 + fVar15) * fVar8 + (fVar18 + fVar21) * fVar9 + fVar24 * fVar10;
        pfVar7[3] = (fVar13 + fVar16) * fVar8 + (fVar19 + fVar22) * fVar9 + fVar25 * fVar10;
        uVar38 = uVar38 + 8;
      } while (uVar38 < uVar26);
    }
    else {
      do {
        pfVar1 = (float *)(lVar29 + uVar38 * 4);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar7 = (float *)(lVar27 + uVar38 * 4);
        fVar14 = pfVar7[1];
        fVar15 = pfVar7[2];
        fVar16 = pfVar7[3];
        pfVar2 = (float *)(lVar30 + uVar38 * 4);
        fVar17 = pfVar2[1];
        fVar18 = pfVar2[2];
        fVar19 = pfVar2[3];
        pfVar3 = (float *)(lVar28 + uVar38 * 4);
        fVar20 = pfVar3[1];
        fVar21 = pfVar3[2];
        fVar22 = pfVar3[3];
        pfVar4 = (float *)(lVar31 + uVar38 * 4);
        fVar23 = pfVar4[1];
        fVar24 = pfVar4[2];
        fVar25 = pfVar4[3];
        pfVar5 = (float *)(param_4 + uVar38 * 4);
        *pfVar5 = (*pfVar1 + *pfVar7) * fVar8 + (*pfVar3 + *pfVar2) * fVar9 + *pfVar4 * fVar10;
        pfVar5[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
        pfVar5[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
        pfVar5[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
        pfVar1 = (float *)(lVar29 + 0x10 + uVar38 * 4);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)(lVar27 + 0x10 + uVar38 * 4);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar3 = (float *)(lVar28 + 0x10 + uVar38 * 4);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar4 = (float *)(lVar30 + 0x10 + uVar38 * 4);
        fVar20 = pfVar4[1];
        fVar21 = pfVar4[2];
        fVar22 = pfVar4[3];
        pfVar5 = (float *)(lVar31 + 0x10 + uVar38 * 4);
        fVar23 = pfVar5[1];
        fVar24 = pfVar5[2];
        fVar25 = pfVar5[3];
        pfVar7 = (float *)(param_4 + 0x10 + uVar38 * 4);
        *pfVar7 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar4) * fVar9 + *pfVar5 * fVar10;
        pfVar7[1] = (fVar11 + fVar14) * fVar8 + (fVar17 + fVar20) * fVar9 + fVar23 * fVar10;
        pfVar7[2] = (fVar12 + fVar15) * fVar8 + (fVar18 + fVar21) * fVar9 + fVar24 * fVar10;
        pfVar7[3] = (fVar13 + fVar16) * fVar8 + (fVar19 + fVar22) * fVar9 + fVar25 * fVar10;
        uVar38 = uVar38 + 8;
      } while (uVar38 < uVar26);
    }
    if (param_5 < uVar26 + 1) {
      return;
    }
    param_5 = param_5 - uVar26;
    if (3 < (longlong)param_5) {
      lVar6 = uVar26 * 4;
      uVar38 = param_5 & 0xfffffffffffffffc;
      uVar33 = 0;
      do {
        pfVar1 = (float *)(lVar29 + uVar26 * 4 + uVar33 * 4);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)(lVar27 + uVar26 * 4 + uVar33 * 4);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar3 = (float *)(lVar30 + lVar6 + uVar33 * 4);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar4 = (float *)(lVar28 + lVar6 + uVar33 * 4);
        fVar20 = pfVar4[1];
        fVar21 = pfVar4[2];
        fVar22 = pfVar4[3];
        pfVar5 = (float *)(lVar31 + lVar6 + uVar33 * 4);
        fVar23 = pfVar5[1];
        fVar24 = pfVar5[2];
        fVar25 = pfVar5[3];
        pfVar7 = (float *)(param_4 + lVar6 + uVar33 * 4);
        *pfVar7 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar4 + *pfVar3) * fVar9 + *pfVar5 * fVar10;
        pfVar7[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
        pfVar7[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
        pfVar7[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
        uVar33 = uVar33 + 4;
      } while (uVar33 < uVar38);
      goto LAB_1406e78df;
    }
  }
  uVar38 = 0;
LAB_1406e78df:
  if (uVar38 < param_5) {
    lVar27 = uVar26 * 4;
    do {
      *(float *)(param_4 + lVar27 + uVar38 * 4) =
           (*(float *)(lVar35 * param_2 + param_1 + lVar27 + uVar38 * 4) +
           *(float *)(lVar32 * param_2 + param_1 + lVar27 + uVar38 * 4)) * fVar8 +
           (*(float *)(lVar34 * param_2 + param_1 + lVar27 + uVar38 * 4) +
           *(float *)(lVar37 * param_2 + param_1 + lVar27 + uVar38 * 4)) * fVar9 +
           *(float *)(param_1 + param_2 * lVar36 + lVar27 + uVar38 * 4) * fVar10;
      uVar38 = uVar38 + 1;
    } while (uVar38 < param_5);
  }
  return;
}

