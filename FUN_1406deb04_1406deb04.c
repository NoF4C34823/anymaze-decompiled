
void FUN_1406deb04(ulonglong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong in_R10;
  longlong lVar24;
  ulonglong in_R11;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  do {
    pfVar3 = (float *)(in_R10 + 4 + param_1 * 4);
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    pfVar4 = (float *)(in_R10 + -4 + param_1 * 4);
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar12 = pfVar4[3];
    pfVar5 = (float *)(in_R10 + -8 + param_1 * 4);
    fVar13 = pfVar5[1];
    fVar14 = pfVar5[2];
    fVar15 = pfVar5[3];
    pfVar6 = (float *)(in_R10 + 8 + param_1 * 4);
    fVar16 = pfVar6[1];
    fVar17 = pfVar6[2];
    fVar18 = pfVar6[3];
    pfVar1 = (float *)(in_R10 + param_1 * 4);
    fVar19 = pfVar1[1];
    fVar20 = pfVar1[2];
    fVar21 = pfVar1[3];
    pfVar2 = (float *)(param_2 + param_1 * 4);
    *pfVar2 = (*pfVar5 + *pfVar6) * in_XMM5_Da + (*pfVar4 + *pfVar3) * in_XMM4_Da +
              *pfVar1 * param_4;
    pfVar2[1] = (fVar13 + fVar16) * in_XMM5_Da + (fVar10 + fVar7) * in_XMM4_Da + fVar19 * param_4;
    pfVar2[2] = (fVar14 + fVar17) * in_XMM5_Da + (fVar11 + fVar8) * in_XMM4_Da + fVar20 * param_4;
    pfVar2[3] = (fVar15 + fVar18) * in_XMM5_Da + (fVar12 + fVar9) * in_XMM4_Da + fVar21 * param_4;
    pfVar1 = (float *)(in_R10 + 0x14 + param_1 * 4);
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar9 = pfVar1[3];
    pfVar2 = (float *)(in_R10 + 0xc + param_1 * 4);
    fVar10 = pfVar2[1];
    fVar11 = pfVar2[2];
    fVar12 = pfVar2[3];
    pfVar3 = (float *)(in_R10 + 8 + param_1 * 4);
    fVar13 = pfVar3[1];
    fVar14 = pfVar3[2];
    fVar15 = pfVar3[3];
    pfVar4 = (float *)(in_R10 + 0x18 + param_1 * 4);
    fVar16 = pfVar4[1];
    fVar17 = pfVar4[2];
    fVar18 = pfVar4[3];
    pfVar5 = (float *)(in_R10 + 0x10 + param_1 * 4);
    fVar19 = pfVar5[1];
    fVar20 = pfVar5[2];
    fVar21 = pfVar5[3];
    pfVar6 = (float *)(param_2 + 0x10 + param_1 * 4);
    *pfVar6 = (*pfVar3 + *pfVar4) * in_XMM5_Da + (*pfVar2 + *pfVar1) * in_XMM4_Da +
              *pfVar5 * param_4;
    pfVar6[1] = (fVar13 + fVar16) * in_XMM5_Da + (fVar10 + fVar7) * in_XMM4_Da + fVar19 * param_4;
    pfVar6[2] = (fVar14 + fVar17) * in_XMM5_Da + (fVar11 + fVar8) * in_XMM4_Da + fVar20 * param_4;
    pfVar6[3] = (fVar15 + fVar18) * in_XMM5_Da + (fVar12 + fVar9) * in_XMM4_Da + fVar21 * param_4;
    param_1 = param_1 + 8;
  } while (param_1 < in_R11);
  if (in_R11 + 1 <= param_3) {
    param_3 = param_3 - in_R11;
    if ((longlong)param_3 < 4) {
      FUN_1406decaf();
      return;
    }
    uVar23 = param_3 & 0xfffffffffffffffc;
    uVar22 = 0;
    do {
      lVar24 = uVar22 + in_R11;
      pfVar3 = (float *)(in_R11 * 4 + in_R10 + 8 + uVar22 * 4);
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      pfVar4 = (float *)(in_R10 + 4 + lVar24 * 4);
      fVar10 = pfVar4[1];
      fVar11 = pfVar4[2];
      fVar12 = pfVar4[3];
      pfVar5 = (float *)(in_R10 + -4 + lVar24 * 4);
      fVar13 = pfVar5[1];
      fVar14 = pfVar5[2];
      fVar15 = pfVar5[3];
      pfVar6 = (float *)(in_R10 + -8 + lVar24 * 4);
      fVar16 = pfVar6[1];
      fVar17 = pfVar6[2];
      fVar18 = pfVar6[3];
      pfVar1 = (float *)(in_R10 + lVar24 * 4);
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar2 = (float *)(param_2 + in_R11 * 4 + uVar22 * 4);
      *pfVar2 = (*pfVar6 + *pfVar3) * in_XMM5_Da + (*pfVar5 + *pfVar4) * in_XMM4_Da +
                *pfVar1 * param_4;
      pfVar2[1] = (fVar16 + fVar7) * in_XMM5_Da + (fVar13 + fVar10) * in_XMM4_Da + fVar19 * param_4;
      pfVar2[2] = (fVar17 + fVar8) * in_XMM5_Da + (fVar14 + fVar11) * in_XMM4_Da + fVar20 * param_4;
      pfVar2[3] = (fVar18 + fVar9) * in_XMM5_Da + (fVar15 + fVar12) * in_XMM4_Da + fVar21 * param_4;
      uVar22 = uVar22 + 4;
    } while (uVar22 < uVar23);
    if (uVar23 < param_3) {
      lVar24 = in_R10 + in_R11 * 4;
      do {
        *(float *)(param_2 + in_R11 * 4 + uVar23 * 4) =
             (*(float *)(lVar24 + -8 + uVar23 * 4) + *(float *)(lVar24 + 8 + uVar23 * 4)) *
             in_XMM5_Da +
             (*(float *)(lVar24 + -4 + uVar23 * 4) + *(float *)(lVar24 + 4 + uVar23 * 4)) *
             in_XMM4_Da + *(float *)(lVar24 + uVar23 * 4) * param_4;
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_3);
    }
  }
  return;
}

