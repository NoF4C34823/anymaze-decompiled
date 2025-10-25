
void FUN_140192b60(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar18 = param_2 & 0xf;
    if (uVar18 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140192cd2;
      uVar18 = 0x10 - uVar18 >> 2;
    }
    if ((longlong)(uVar18 + 8) <= (longlong)param_3) {
      uVar16 = 0;
      uVar17 = param_3 - (param_3 - uVar18 & 7);
      if (uVar18 != 0) {
        do {
          *(float *)(param_2 + uVar16 * 4) =
               (*(float *)(param_1 + -4 + uVar16 * 4) + *(float *)(param_1 + 4 + uVar16 * 4)) *
               fVar5 + *(float *)(param_1 + uVar16 * 4) * fVar6;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar18);
      }
      do {
        pfVar3 = (float *)(param_1 + 4 + uVar18 * 4);
        fVar7 = pfVar3[1];
        fVar8 = pfVar3[2];
        fVar9 = pfVar3[3];
        pfVar4 = (float *)(param_1 + -4 + uVar18 * 4);
        fVar10 = pfVar4[1];
        fVar11 = pfVar4[2];
        fVar12 = pfVar4[3];
        pfVar1 = (float *)(param_1 + uVar18 * 4);
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar18 * 4);
        *pfVar2 = (*pfVar4 + *pfVar3) * fVar5 + *pfVar1 * fVar6;
        pfVar2[1] = (fVar10 + fVar7) * fVar5 + fVar13 * fVar6;
        pfVar2[2] = (fVar11 + fVar8) * fVar5 + fVar14 * fVar6;
        pfVar2[3] = (fVar12 + fVar9) * fVar5 + fVar15 * fVar6;
        pfVar1 = (float *)(param_1 + 0x14 + uVar18 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = (float *)(param_1 + 0xc + uVar18 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(param_1 + 0x10 + uVar18 * 4);
        fVar13 = pfVar3[1];
        fVar14 = pfVar3[2];
        fVar15 = pfVar3[3];
        pfVar4 = (float *)(param_2 + 0x10 + uVar18 * 4);
        *pfVar4 = (*pfVar2 + *pfVar1) * fVar5 + *pfVar3 * fVar6;
        pfVar4[1] = (fVar10 + fVar7) * fVar5 + fVar13 * fVar6;
        pfVar4[2] = (fVar11 + fVar8) * fVar5 + fVar14 * fVar6;
        pfVar4[3] = (fVar12 + fVar9) * fVar5 + fVar15 * fVar6;
        uVar18 = uVar18 + 8;
      } while (uVar18 < uVar17);
      uVar18 = 0;
      if (param_3 < uVar17 + 1) {
        return;
      }
      param_1 = param_1 + uVar17 * 4;
      do {
        *(float *)(param_2 + uVar17 * 4 + uVar18 * 4) =
             (*(float *)(param_1 + -4 + uVar18 * 4) + *(float *)(param_1 + 4 + uVar18 * 4)) * fVar5
             + *(float *)(param_1 + uVar18 * 4) * fVar6;
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3 - uVar17);
      return;
    }
  }
LAB_140192cd2:
  FUN_140192c74(param_1,0);
  return;
}

