
void FUN_140676800(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar7 = param_3 * 3;
  fVar5 = *param_4;
  fVar6 = param_4[1];
  if ((longlong)uVar7 < 1) {
    return;
  }
  if (7 < (longlong)uVar7) {
    uVar19 = param_2 & 0xf;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140676972;
      uVar19 = 0x10 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 8) <= (longlong)uVar7) {
      uVar17 = 0;
      uVar18 = uVar7 - (uVar7 - uVar19 & 7);
      if (uVar19 != 0) {
        do {
          *(float *)(param_2 + uVar17 * 4) =
               (*(float *)(param_1 + -0xc + uVar17 * 4) + *(float *)(param_1 + 0xc + uVar17 * 4)) *
               fVar5 + *(float *)(param_1 + uVar17 * 4) * fVar6;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      do {
        pfVar3 = (float *)(param_1 + -0xc + uVar19 * 4);
        fVar8 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar10 = pfVar3[3];
        pfVar4 = (float *)(param_1 + 0xc + uVar19 * 4);
        fVar11 = pfVar4[1];
        fVar12 = pfVar4[2];
        fVar13 = pfVar4[3];
        pfVar1 = (float *)(param_1 + uVar19 * 4);
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar19 * 4);
        *pfVar2 = (*pfVar3 + *pfVar4) * fVar5 + *pfVar1 * fVar6;
        pfVar2[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
        pfVar2[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
        pfVar2[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
        pfVar1 = (float *)(param_1 + 4 + uVar19 * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar2 = (float *)(param_1 + 0x1c + uVar19 * 4);
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        pfVar3 = (float *)(param_1 + 0x10 + uVar19 * 4);
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar4 = (float *)(param_2 + 0x10 + uVar19 * 4);
        *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
        pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
        pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
        pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
        uVar19 = uVar19 + 8;
      } while (uVar19 < uVar18);
      uVar19 = 0;
      if (uVar7 < uVar18 + 1) {
        return;
      }
      param_1 = param_1 + uVar18 * 4;
      do {
        *(float *)(param_2 + uVar18 * 4 + uVar19 * 4) =
             (*(float *)(param_1 + -0xc + uVar19 * 4) + *(float *)(param_1 + 0xc + uVar19 * 4)) *
             fVar5 + *(float *)(param_1 + uVar19 * 4) * fVar6;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar7 - uVar18);
      return;
    }
  }
LAB_140676972:
  FUN_140676914(param_1,uVar7,0);
  return;
}

