
void FUN_14065236c(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

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
  longlong unaff_R14;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  
  uVar15 = 0;
  uVar16 = in_R11 & 0xfffffffffffffffc;
  do {
    pfVar4 = (float *)(unaff_R14 + in_R10 * 4 + 0xc + uVar15 * 4);
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar8 = pfVar4[3];
    pfVar5 = (float *)(unaff_R14 + -0xc + (uVar15 + in_R10) * 4);
    fVar9 = pfVar5[1];
    fVar10 = pfVar5[2];
    fVar11 = pfVar5[3];
    pfVar1 = (float *)(unaff_R14 + (uVar15 + in_R10) * 4);
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    pfVar2 = (float *)(in_RDX + in_R10 * 4 + uVar15 * 4);
    *pfVar2 = (*pfVar5 + *pfVar4) * (float)param_2 + *pfVar1 * (float)param_1;
    pfVar2[1] = (fVar9 + fVar6) * (float)((ulonglong)param_2 >> 0x20) +
                fVar12 * (float)((ulonglong)param_1 >> 0x20);
    pfVar2[2] = (fVar10 + fVar7) * in_XMM1_Dc + fVar13 * in_XMM0_Dc;
    pfVar2[3] = (fVar11 + fVar8) * in_XMM1_Dd + fVar14 * in_XMM0_Dd;
    uVar15 = uVar15 + 4;
  } while (uVar15 < uVar16);
  if (uVar16 < in_R11) {
    lVar3 = unaff_R14 + in_R10 * 4;
    do {
      *(float *)(in_RDX + in_R10 * 4 + uVar16 * 4) =
           (*(float *)(lVar3 + -0xc + uVar16 * 4) + *(float *)(lVar3 + 0xc + uVar16 * 4)) * param_4
           + *(float *)(lVar3 + uVar16 * 4) * param_3;
      uVar16 = uVar16 + 1;
    } while (uVar16 < in_R11);
  }
  return;
}

