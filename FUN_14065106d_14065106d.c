
void FUN_14065106d(ulonglong param_1,longlong param_2,ulonglong param_3,float param_4)

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
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong in_R10;
  longlong in_R11;
  float in_XMM2_Da;
  
  do {
    pfVar4 = (float *)(in_R11 + 4 + param_1 * 4);
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar8 = pfVar4[3];
    pfVar5 = (float *)(in_R11 + -4 + param_1 * 4);
    fVar9 = pfVar5[1];
    fVar10 = pfVar5[2];
    fVar11 = pfVar5[3];
    pfVar1 = (float *)(in_R11 + param_1 * 4);
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    pfVar2 = (float *)(param_2 + param_1 * 4);
    *pfVar2 = (*pfVar5 + *pfVar4) * param_4 + *pfVar1 * in_XMM2_Da;
    pfVar2[1] = (fVar9 + fVar6) * param_4 + fVar12 * in_XMM2_Da;
    pfVar2[2] = (fVar10 + fVar7) * param_4 + fVar13 * in_XMM2_Da;
    pfVar2[3] = (fVar11 + fVar8) * param_4 + fVar14 * in_XMM2_Da;
    pfVar1 = (float *)(in_R11 + 0x14 + param_1 * 4);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar2 = (float *)(in_R11 + 0xc + param_1 * 4);
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    fVar11 = pfVar2[3];
    pfVar4 = (float *)(in_R11 + 0x10 + param_1 * 4);
    fVar12 = pfVar4[1];
    fVar13 = pfVar4[2];
    fVar14 = pfVar4[3];
    pfVar5 = (float *)(param_2 + 0x10 + param_1 * 4);
    *pfVar5 = (*pfVar2 + *pfVar1) * param_4 + *pfVar4 * in_XMM2_Da;
    pfVar5[1] = (fVar9 + fVar6) * param_4 + fVar12 * in_XMM2_Da;
    pfVar5[2] = (fVar10 + fVar7) * param_4 + fVar13 * in_XMM2_Da;
    pfVar5[3] = (fVar11 + fVar8) * param_4 + fVar14 * in_XMM2_Da;
    param_1 = param_1 + 8;
  } while (param_1 < in_R10);
  if (in_R10 + 1 <= param_3) {
    param_3 = param_3 - in_R10;
    if ((longlong)param_3 < 4) {
      FUN_140651158();
      return;
    }
    uVar15 = 0;
    uVar16 = param_3 & 0xfffffffffffffffc;
    do {
      lVar3 = uVar15 + in_R10;
      pfVar4 = (float *)(in_R11 + 4 + lVar3 * 4);
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      fVar8 = pfVar4[3];
      pfVar5 = (float *)(in_R11 + -4 + lVar3 * 4);
      fVar9 = pfVar5[1];
      fVar10 = pfVar5[2];
      fVar11 = pfVar5[3];
      pfVar1 = (float *)(in_R11 + lVar3 * 4);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(param_2 + in_R10 * 4 + uVar15 * 4);
      *pfVar2 = (*pfVar5 + *pfVar4) * param_4 + *pfVar1 * in_XMM2_Da;
      pfVar2[1] = (fVar9 + fVar6) * param_4 + fVar12 * in_XMM2_Da;
      pfVar2[2] = (fVar10 + fVar7) * param_4 + fVar13 * in_XMM2_Da;
      pfVar2[3] = (fVar11 + fVar8) * param_4 + fVar14 * in_XMM2_Da;
      uVar15 = uVar15 + 4;
    } while (uVar15 < uVar16);
    if (uVar16 < param_3) {
      lVar3 = in_R11 + in_R10 * 4;
      do {
        *(float *)(param_2 + in_R10 * 4 + uVar16 * 4) =
             (*(float *)(lVar3 + -4 + uVar16 * 4) + *(float *)(lVar3 + 4 + uVar16 * 4)) * param_4 +
             *(float *)(lVar3 + uVar16 * 4) * in_XMM2_Da;
        uVar16 = uVar16 + 1;
      } while (uVar16 < param_3);
    }
  }
  return;
}

