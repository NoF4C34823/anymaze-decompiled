
void FUN_14003e480(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar36 = param_2 & 0xf;
    if (uVar36 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14003e6c7;
      uVar36 = 0x10 - uVar36 >> 2;
    }
    if ((longlong)(uVar36 + 4) <= (longlong)param_3) {
      uVar35 = 0;
      uVar34 = param_3 - (param_3 - uVar36 & 3);
      if (uVar36 != 0) {
        do {
          *(float *)(param_2 + uVar35 * 4) =
               (*(float *)(param_1 + -0xc + uVar35 * 4) + *(float *)(param_1 + 0xc + uVar35 * 4)) *
               fVar9 + (*(float *)(param_1 + -8 + uVar35 * 4) + *(float *)(param_1 + 8 + uVar35 * 4)
                       ) * fVar10 +
               (*(float *)(param_1 + -4 + uVar35 * 4) + *(float *)(param_1 + 4 + uVar35 * 4)) *
               fVar11 + *(float *)(param_1 + uVar35 * 4) * fVar12;
          uVar35 = uVar35 + 1;
        } while (uVar35 < uVar36);
      }
      do {
        pfVar3 = (float *)(param_1 + -0xc + uVar36 * 4);
        fVar13 = pfVar3[1];
        fVar14 = pfVar3[2];
        fVar15 = pfVar3[3];
        pfVar4 = (float *)(param_1 + 0xc + uVar36 * 4);
        fVar16 = pfVar4[1];
        fVar17 = pfVar4[2];
        fVar18 = pfVar4[3];
        pfVar5 = (float *)(param_1 + -8 + uVar36 * 4);
        fVar19 = pfVar5[1];
        fVar20 = pfVar5[2];
        fVar21 = pfVar5[3];
        pfVar6 = (float *)(param_1 + -4 + uVar36 * 4);
        fVar22 = pfVar6[1];
        fVar23 = pfVar6[2];
        fVar24 = pfVar6[3];
        pfVar1 = (float *)(param_1 + uVar36 * 4);
        fVar25 = pfVar1[1];
        fVar26 = pfVar1[2];
        fVar27 = pfVar1[3];
        pfVar7 = (float *)(param_1 + 8 + uVar36 * 4);
        fVar28 = pfVar7[1];
        fVar29 = pfVar7[2];
        fVar30 = pfVar7[3];
        pfVar8 = (float *)(param_1 + 4 + uVar36 * 4);
        fVar31 = pfVar8[1];
        fVar32 = pfVar8[2];
        fVar33 = pfVar8[3];
        pfVar2 = (float *)(param_2 + uVar36 * 4);
        *pfVar2 = (*pfVar3 + *pfVar4) * fVar9 + (*pfVar5 + *pfVar7) * fVar10 +
                  (*pfVar6 + *pfVar8) * fVar11 + *pfVar1 * fVar12;
        pfVar2[1] = (fVar13 + fVar16) * fVar9 + (fVar19 + fVar28) * fVar10 +
                    (fVar22 + fVar31) * fVar11 + fVar25 * fVar12;
        pfVar2[2] = (fVar14 + fVar17) * fVar9 + (fVar20 + fVar29) * fVar10 +
                    (fVar23 + fVar32) * fVar11 + fVar26 * fVar12;
        pfVar2[3] = (fVar15 + fVar18) * fVar9 + (fVar21 + fVar30) * fVar10 +
                    (fVar24 + fVar33) * fVar11 + fVar27 * fVar12;
        uVar36 = uVar36 + 4;
      } while (uVar36 < uVar34);
      for (; uVar34 < param_3; uVar34 = uVar34 + 1) {
        *(float *)(param_2 + uVar34 * 4) =
             (*(float *)(param_1 + -0xc + uVar34 * 4) + *(float *)(param_1 + 0xc + uVar34 * 4)) *
             fVar9 + (*(float *)(param_1 + -8 + uVar34 * 4) + *(float *)(param_1 + 8 + uVar34 * 4))
                     * fVar10 +
             (*(float *)(param_1 + -4 + uVar34 * 4) + *(float *)(param_1 + 4 + uVar34 * 4)) * fVar11
             + *(float *)(param_1 + uVar34 * 4) * fVar12;
      }
      return;
    }
  }
LAB_14003e6c7:
  FUN_14003e63d();
  return;
}

