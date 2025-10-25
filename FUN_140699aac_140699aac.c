
void FUN_140699aac(longlong param_1,ulonglong param_2,ulonglong param_3,float param_4)

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
  ulonglong uVar14;
  longlong in_R9;
  ulonglong in_R10;
  float in_XMM2_Da;
  
  do {
    pfVar3 = (float *)(param_1 + -0xc + in_R10 * 4);
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    fVar7 = pfVar3[3];
    pfVar4 = (float *)(param_1 + 0xc + in_R10 * 4);
    fVar8 = pfVar4[1];
    fVar9 = pfVar4[2];
    fVar10 = pfVar4[3];
    pfVar1 = (float *)(param_1 + in_R10 * 4);
    fVar11 = pfVar1[1];
    fVar12 = pfVar1[2];
    fVar13 = pfVar1[3];
    pfVar2 = (float *)(in_R9 + in_R10 * 4);
    *pfVar2 = (*pfVar3 + *pfVar4) * param_4 + *pfVar1 * in_XMM2_Da;
    pfVar2[1] = (fVar5 + fVar8) * param_4 + fVar11 * in_XMM2_Da;
    pfVar2[2] = (fVar6 + fVar9) * param_4 + fVar12 * in_XMM2_Da;
    pfVar2[3] = (fVar7 + fVar10) * param_4 + fVar13 * in_XMM2_Da;
    pfVar1 = (float *)(param_1 + 4 + in_R10 * 4);
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar7 = pfVar1[3];
    pfVar2 = (float *)(param_1 + 0x1c + in_R10 * 4);
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    fVar10 = pfVar2[3];
    pfVar3 = (float *)(param_1 + 0x10 + in_R10 * 4);
    fVar11 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar13 = pfVar3[3];
    pfVar4 = (float *)(in_R9 + 0x10 + in_R10 * 4);
    *pfVar4 = (*pfVar1 + *pfVar2) * param_4 + *pfVar3 * in_XMM2_Da;
    pfVar4[1] = (fVar5 + fVar8) * param_4 + fVar11 * in_XMM2_Da;
    pfVar4[2] = (fVar6 + fVar9) * param_4 + fVar12 * in_XMM2_Da;
    pfVar4[3] = (fVar7 + fVar10) * param_4 + fVar13 * in_XMM2_Da;
    in_R10 = in_R10 + 8;
  } while (in_R10 < param_3);
  uVar14 = 0;
  if (param_3 + 1 <= param_2) {
    param_1 = param_1 + param_3 * 4;
    do {
      *(float *)(in_R9 + param_3 * 4 + uVar14 * 4) =
           (*(float *)(param_1 + -0xc + uVar14 * 4) + *(float *)(param_1 + 0xc + uVar14 * 4)) *
           param_4 + *(float *)(param_1 + uVar14 * 4) * in_XMM2_Da;
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_2 - param_3);
  }
  return;
}

