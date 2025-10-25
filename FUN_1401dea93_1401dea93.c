
void FUN_1401dea93(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

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
  longlong in_RDX;
  ulonglong uVar16;
  longlong in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  
  uVar15 = 0;
  uVar16 = in_R11 & 0xfffffffffffffffc;
  do {
    pfVar4 = (float *)(unaff_R12 + -0xc + (uVar15 + in_R10) * 4);
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar8 = pfVar4[3];
    pfVar1 = (float *)(unaff_R12 + (uVar15 + in_R10) * 4);
    fVar9 = pfVar1[1];
    fVar10 = pfVar1[2];
    fVar11 = pfVar1[3];
    pfVar5 = (float *)(unaff_R12 + in_R10 * 4 + 0xc + uVar15 * 4);
    fVar12 = pfVar5[1];
    fVar13 = pfVar5[2];
    fVar14 = pfVar5[3];
    pfVar2 = (float *)(in_RDX + in_R10 * 4 + uVar15 * 4);
    *pfVar2 = (float)param_3 * (*pfVar4 + *pfVar5) + (float)param_4 * *pfVar1;
    pfVar2[1] = (float)((ulonglong)param_3 >> 0x20) * (fVar6 + fVar12) +
                (float)((ulonglong)param_4 >> 0x20) * fVar9;
    pfVar2[2] = in_XMM2_Dc * (fVar7 + fVar13) + in_XMM3_Dc * fVar10;
    pfVar2[3] = in_XMM2_Dd * (fVar8 + fVar14) + in_XMM3_Dd * fVar11;
    uVar15 = uVar15 + 4;
  } while (uVar15 < uVar16);
  if (uVar16 < in_R11) {
    lVar3 = unaff_R12 + in_R10 * 4;
    do {
      *(float *)(in_RDX + in_R10 * 4 + uVar16 * 4) =
           param_2 * (*(float *)(lVar3 + -0xc + uVar16 * 4) + *(float *)(lVar3 + 0xc + uVar16 * 4))
           + param_1 * *(float *)(lVar3 + uVar16 * 4);
      uVar16 = uVar16 + 1;
    } while (uVar16 < in_R11);
  }
  return;
}

