
void FUN_14060b03a(longlong param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong in_RAX;
  longlong in_RDX;
  ulonglong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM5_Da;
  
  do {
    pfVar3 = (float *)(param_1 + -0xc + in_R10 * 4);
    fVar9 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar11 = pfVar3[3];
    pfVar4 = (float *)(param_1 + 0xc + in_R10 * 4);
    fVar12 = pfVar4[1];
    fVar13 = pfVar4[2];
    fVar14 = pfVar4[3];
    pfVar5 = (float *)(param_1 + -8 + in_R10 * 4);
    fVar15 = pfVar5[1];
    fVar16 = pfVar5[2];
    fVar17 = pfVar5[3];
    pfVar6 = (float *)(param_1 + -4 + in_R10 * 4);
    fVar18 = pfVar6[1];
    fVar19 = pfVar6[2];
    fVar20 = pfVar6[3];
    pfVar1 = (float *)(param_1 + in_R10 * 4);
    fVar21 = pfVar1[1];
    fVar22 = pfVar1[2];
    fVar23 = pfVar1[3];
    pfVar7 = (float *)(param_1 + 8 + in_R10 * 4);
    fVar24 = pfVar7[1];
    fVar25 = pfVar7[2];
    fVar26 = pfVar7[3];
    pfVar8 = (float *)(param_1 + 4 + in_R10 * 4);
    fVar27 = pfVar8[1];
    fVar28 = pfVar8[2];
    fVar29 = pfVar8[3];
    pfVar2 = (float *)(in_RDX + in_R10 * 4);
    *pfVar2 = (*pfVar3 + *pfVar4) * param_2 + (*pfVar5 + *pfVar7) * in_XMM2_Da +
              (*pfVar6 + *pfVar8) * in_XMM5_Da + *pfVar1 * in_XMM0_Da;
    pfVar2[1] = (fVar9 + fVar12) * param_2 + (fVar15 + fVar24) * in_XMM2_Da +
                (fVar18 + fVar27) * in_XMM5_Da + fVar21 * in_XMM0_Da;
    pfVar2[2] = (fVar10 + fVar13) * param_2 + (fVar16 + fVar25) * in_XMM2_Da +
                (fVar19 + fVar28) * in_XMM5_Da + fVar22 * in_XMM0_Da;
    pfVar2[3] = (fVar11 + fVar14) * param_2 + (fVar17 + fVar26) * in_XMM2_Da +
                (fVar20 + fVar29) * in_XMM5_Da + fVar23 * in_XMM0_Da;
    in_R10 = in_R10 + 4;
  } while (in_R10 < in_RAX);
  if (in_RAX < param_3) {
    do {
      *(float *)(in_RDX + in_RAX * 4) =
           (*(float *)(param_1 + -0xc + in_RAX * 4) + *(float *)(param_1 + 0xc + in_RAX * 4)) *
           param_2 + (*(float *)(param_1 + -8 + in_RAX * 4) + *(float *)(param_1 + 8 + in_RAX * 4))
                     * in_XMM2_Da +
           (*(float *)(param_1 + -4 + in_RAX * 4) + *(float *)(param_1 + 4 + in_RAX * 4)) *
           in_XMM5_Da + *(float *)(param_1 + in_RAX * 4) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

