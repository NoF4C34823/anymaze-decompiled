
void FUN_14062dca0(ulonglong param_1,float param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
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
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong in_RDX;
  ulonglong uVar19;
  
  fVar6 = *param_4;
  fVar7 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  uVar18 = param_1;
  if (7 < (longlong)param_3) {
    uVar18 = in_RDX & 0xf;
    if (uVar18 != 0) {
      if ((in_RDX & 3) != 0) goto LAB_14062de93;
      uVar18 = 0x10 - uVar18 >> 2;
    }
    if ((longlong)(uVar18 + 8) <= (longlong)param_3) {
      uVar17 = 0;
      uVar19 = param_3 - (param_3 - uVar18 & 7);
      if (uVar18 != 0) {
        do {
          *(float *)(in_RDX + uVar17 * 4) =
               (*(float *)((param_1 - 4) + uVar17 * 4) + *(float *)(param_1 + 4 + uVar17 * 4)) *
               fVar6 + *(float *)(param_1 + uVar17 * 4) * fVar7;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar18);
      }
      do {
        pfVar4 = (float *)(param_1 + 4 + uVar18 * 4);
        fVar8 = pfVar4[1];
        fVar9 = pfVar4[2];
        fVar10 = pfVar4[3];
        pfVar5 = (float *)((param_1 - 4) + uVar18 * 4);
        fVar11 = pfVar5[1];
        fVar12 = pfVar5[2];
        fVar13 = pfVar5[3];
        pfVar1 = (float *)(param_1 + uVar18 * 4);
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = pfVar1[3];
        pfVar2 = (float *)(in_RDX + uVar18 * 4);
        *pfVar2 = (*pfVar5 + *pfVar4) * fVar6 + *pfVar1 * fVar7;
        pfVar2[1] = (fVar11 + fVar8) * fVar6 + fVar14 * fVar7;
        pfVar2[2] = (fVar12 + fVar9) * fVar6 + fVar15 * fVar7;
        pfVar2[3] = (fVar13 + fVar10) * fVar6 + fVar16 * fVar7;
        pfVar1 = (float *)(param_1 + 0x14 + uVar18 * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar2 = (float *)(param_1 + 0xc + uVar18 * 4);
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        pfVar4 = (float *)(param_1 + 0x10 + uVar18 * 4);
        fVar14 = pfVar4[1];
        fVar15 = pfVar4[2];
        fVar16 = pfVar4[3];
        pfVar5 = (float *)(in_RDX + 0x10 + uVar18 * 4);
        *pfVar5 = (*pfVar2 + *pfVar1) * fVar6 + *pfVar4 * fVar7;
        pfVar5[1] = (fVar11 + fVar8) * fVar6 + fVar14 * fVar7;
        pfVar5[2] = (fVar12 + fVar9) * fVar6 + fVar15 * fVar7;
        pfVar5[3] = (fVar13 + fVar10) * fVar6 + fVar16 * fVar7;
        uVar18 = uVar18 + 8;
      } while (uVar18 < uVar19);
      if (param_3 < uVar19 + 1) {
        return;
      }
      param_3 = param_3 - uVar19;
      param_2 = fVar6;
      if (3 < (longlong)param_3) {
        uVar18 = 0;
        uVar17 = param_3 & 0xfffffffffffffffc;
        do {
          lVar3 = uVar18 + uVar19;
          pfVar4 = (float *)(param_1 + 4 + lVar3 * 4);
          fVar8 = pfVar4[1];
          fVar9 = pfVar4[2];
          fVar10 = pfVar4[3];
          pfVar5 = (float *)((param_1 - 4) + lVar3 * 4);
          fVar11 = pfVar5[1];
          fVar12 = pfVar5[2];
          fVar13 = pfVar5[3];
          pfVar1 = (float *)(param_1 + lVar3 * 4);
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = (float *)(in_RDX + uVar19 * 4 + uVar18 * 4);
          *pfVar2 = (*pfVar5 + *pfVar4) * fVar6 + *pfVar1 * fVar7;
          pfVar2[1] = (fVar11 + fVar8) * fVar6 + fVar14 * fVar7;
          pfVar2[2] = (fVar12 + fVar9) * fVar6 + fVar15 * fVar7;
          pfVar2[3] = (fVar13 + fVar10) * fVar6 + fVar16 * fVar7;
          uVar18 = uVar18 + 4;
        } while (uVar18 < uVar17);
        if (param_3 <= uVar17) {
          return;
        }
        lVar3 = param_1 + uVar19 * 4;
        do {
          *(float *)(in_RDX + uVar19 * 4 + uVar17 * 4) =
               (*(float *)(lVar3 + -4 + uVar17 * 4) + *(float *)(lVar3 + 4 + uVar17 * 4)) * fVar6 +
               *(float *)(lVar3 + uVar17 * 4) * fVar7;
          uVar17 = uVar17 + 1;
        } while (uVar17 < param_3);
        return;
      }
      goto LAB_14062de9c;
    }
  }
LAB_14062de93:
  if (param_3 == 0) {
    return;
  }
LAB_14062de9c:
  FUN_14062de38(uVar18,param_2,fVar7,0);
  return;
}

