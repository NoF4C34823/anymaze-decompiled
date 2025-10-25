
void FUN_14062efcd(ulonglong param_1,longlong param_2,float param_3,float param_4)

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
  ulonglong in_R11;
  ulonglong uVar17;
  longlong unaff_R14;
  
  do {
    pfVar4 = (float *)(unaff_R14 + -0xc + param_1 * 4);
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar8 = pfVar4[3];
    pfVar5 = (float *)(unaff_R14 + 0xc + param_1 * 4);
    fVar9 = pfVar5[1];
    fVar10 = pfVar5[2];
    fVar11 = pfVar5[3];
    pfVar1 = (float *)(unaff_R14 + param_1 * 4);
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    pfVar2 = (float *)(param_2 + param_1 * 4);
    *pfVar2 = (*pfVar4 + *pfVar5) * param_4 + *pfVar1 * param_3;
    pfVar2[1] = (fVar6 + fVar9) * param_4 + fVar12 * param_3;
    pfVar2[2] = (fVar7 + fVar10) * param_4 + fVar13 * param_3;
    pfVar2[3] = (fVar8 + fVar11) * param_4 + fVar14 * param_3;
    pfVar1 = (float *)(unaff_R14 + 4 + param_1 * 4);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar2 = (float *)(unaff_R14 + 0x1c + param_1 * 4);
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    fVar11 = pfVar2[3];
    pfVar4 = (float *)(unaff_R14 + 0x10 + param_1 * 4);
    fVar12 = pfVar4[1];
    fVar13 = pfVar4[2];
    fVar14 = pfVar4[3];
    pfVar5 = (float *)(param_2 + 0x10 + param_1 * 4);
    *pfVar5 = (*pfVar1 + *pfVar2) * param_4 + *pfVar4 * param_3;
    pfVar5[1] = (fVar6 + fVar9) * param_4 + fVar12 * param_3;
    pfVar5[2] = (fVar7 + fVar10) * param_4 + fVar13 * param_3;
    pfVar5[3] = (fVar8 + fVar11) * param_4 + fVar14 * param_3;
    param_1 = param_1 + 8;
  } while (param_1 < in_R10);
  if (in_R10 + 1 <= in_R11) {
    uVar17 = in_R11 - in_R10;
    if ((longlong)uVar17 < 4) {
      FUN_14062f0b8();
      return;
    }
    uVar15 = 0;
    uVar16 = uVar17 & 0xfffffffffffffffc;
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
      pfVar2 = (float *)(param_2 + in_R10 * 4 + uVar15 * 4);
      *pfVar2 = (*pfVar5 + *pfVar4) * param_4 + *pfVar1 * param_3;
      pfVar2[1] = (fVar9 + fVar6) * param_4 + fVar12 * param_3;
      pfVar2[2] = (fVar10 + fVar7) * param_4 + fVar13 * param_3;
      pfVar2[3] = (fVar11 + fVar8) * param_4 + fVar14 * param_3;
      uVar15 = uVar15 + 4;
    } while (uVar15 < uVar16);
    if (uVar16 < uVar17) {
      lVar3 = unaff_R14 + in_R10 * 4;
      do {
        *(float *)(param_2 + in_R10 * 4 + uVar16 * 4) =
             (*(float *)(lVar3 + -0xc + uVar16 * 4) + *(float *)(lVar3 + 0xc + uVar16 * 4)) *
             param_4 + *(float *)(lVar3 + uVar16 * 4) * param_3;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar17);
    }
  }
  return;
}

