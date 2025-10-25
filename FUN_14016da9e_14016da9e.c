
void FUN_14016da9e(ulonglong param_1,float param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  ulonglong uVar23;
  longlong in_RDX;
  ulonglong uVar24;
  ulonglong in_R11;
  longlong unaff_R12;
  float in_XMM0_Da;
  
  do {
    pfVar4 = (float *)(unaff_R12 + 4 + param_1 * 4);
    fVar8 = pfVar4[1];
    fVar9 = pfVar4[2];
    fVar10 = pfVar4[3];
    pfVar5 = (float *)(unaff_R12 + -4 + param_1 * 4);
    fVar11 = pfVar5[1];
    fVar12 = pfVar5[2];
    fVar13 = pfVar5[3];
    pfVar1 = (float *)(unaff_R12 + param_1 * 4);
    fVar14 = pfVar1[1];
    fVar15 = pfVar1[2];
    fVar16 = pfVar1[3];
    pfVar6 = (float *)(unaff_R12 + -8 + param_1 * 4);
    fVar17 = pfVar6[1];
    fVar18 = pfVar6[2];
    fVar19 = pfVar6[3];
    pfVar7 = (float *)(unaff_R12 + 8 + param_1 * 4);
    fVar20 = pfVar7[1];
    fVar21 = pfVar7[2];
    fVar22 = pfVar7[3];
    pfVar2 = (float *)(in_RDX + param_1 * 4);
    *pfVar2 = (*pfVar6 + *pfVar7) * param_2 + (*pfVar5 + *pfVar4) * param_4 + *pfVar1 * in_XMM0_Da;
    pfVar2[1] = (fVar17 + fVar20) * param_2 + (fVar11 + fVar8) * param_4 + fVar14 * in_XMM0_Da;
    pfVar2[2] = (fVar18 + fVar21) * param_2 + (fVar12 + fVar9) * param_4 + fVar15 * in_XMM0_Da;
    pfVar2[3] = (fVar19 + fVar22) * param_2 + (fVar13 + fVar10) * param_4 + fVar16 * in_XMM0_Da;
    pfVar1 = (float *)(unaff_R12 + 0x14 + param_1 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    pfVar2 = (float *)(unaff_R12 + 0xc + param_1 * 4);
    fVar11 = pfVar2[1];
    fVar12 = pfVar2[2];
    fVar13 = pfVar2[3];
    pfVar4 = (float *)(unaff_R12 + 0x10 + param_1 * 4);
    fVar14 = pfVar4[1];
    fVar15 = pfVar4[2];
    fVar16 = pfVar4[3];
    pfVar5 = (float *)(unaff_R12 + 8 + param_1 * 4);
    fVar17 = pfVar5[1];
    fVar18 = pfVar5[2];
    fVar19 = pfVar5[3];
    pfVar6 = (float *)(unaff_R12 + 0x18 + param_1 * 4);
    fVar20 = pfVar6[1];
    fVar21 = pfVar6[2];
    fVar22 = pfVar6[3];
    pfVar7 = (float *)(in_RDX + 0x10 + param_1 * 4);
    *pfVar7 = (*pfVar5 + *pfVar6) * param_2 + (*pfVar2 + *pfVar1) * param_4 + *pfVar4 * in_XMM0_Da;
    pfVar7[1] = (fVar17 + fVar20) * param_2 + (fVar11 + fVar8) * param_4 + fVar14 * in_XMM0_Da;
    pfVar7[2] = (fVar18 + fVar21) * param_2 + (fVar12 + fVar9) * param_4 + fVar15 * in_XMM0_Da;
    pfVar7[3] = (fVar19 + fVar22) * param_2 + (fVar13 + fVar10) * param_4 + fVar16 * in_XMM0_Da;
    param_1 = param_1 + 8;
  } while (param_1 < in_R11);
  if (in_R11 + 1 <= param_3) {
    param_3 = param_3 - in_R11;
    if ((longlong)param_3 < 4) {
      FUN_14016dc1a();
      return;
    }
    uVar23 = 0;
    uVar24 = param_3 & 0xfffffffffffffffc;
    do {
      lVar3 = uVar23 + in_R11;
      pfVar4 = (float *)(unaff_R12 + 4 + lVar3 * 4);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar5 = (float *)(unaff_R12 + -4 + lVar3 * 4);
      fVar11 = pfVar5[1];
      fVar12 = pfVar5[2];
      fVar13 = pfVar5[3];
      pfVar1 = (float *)(unaff_R12 + lVar3 * 4);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      pfVar6 = (float *)(unaff_R12 + -8 + lVar3 * 4);
      fVar17 = pfVar6[1];
      fVar18 = pfVar6[2];
      fVar19 = pfVar6[3];
      pfVar7 = (float *)(unaff_R12 + in_R11 * 4 + 8 + uVar23 * 4);
      fVar20 = pfVar7[1];
      fVar21 = pfVar7[2];
      fVar22 = pfVar7[3];
      pfVar2 = (float *)(in_RDX + in_R11 * 4 + uVar23 * 4);
      *pfVar2 = (*pfVar6 + *pfVar7) * param_2 + (*pfVar5 + *pfVar4) * param_4 + *pfVar1 * in_XMM0_Da
      ;
      pfVar2[1] = (fVar17 + fVar20) * param_2 + (fVar11 + fVar8) * param_4 + fVar14 * in_XMM0_Da;
      pfVar2[2] = (fVar18 + fVar21) * param_2 + (fVar12 + fVar9) * param_4 + fVar15 * in_XMM0_Da;
      pfVar2[3] = (fVar19 + fVar22) * param_2 + (fVar13 + fVar10) * param_4 + fVar16 * in_XMM0_Da;
      uVar23 = uVar23 + 4;
    } while (uVar23 < uVar24);
    if (uVar24 < param_3) {
      lVar3 = unaff_R12 + in_R11 * 4;
      do {
        *(float *)(in_RDX + in_R11 * 4 + uVar24 * 4) =
             (*(float *)(lVar3 + -8 + uVar24 * 4) + *(float *)(lVar3 + 8 + uVar24 * 4)) * param_2 +
             (*(float *)(lVar3 + -4 + uVar24 * 4) + *(float *)(lVar3 + 4 + uVar24 * 4)) * param_4 +
             *(float *)(lVar3 + uVar24 * 4) * in_XMM0_Da;
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
    }
  }
  return;
}

