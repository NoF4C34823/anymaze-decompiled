
void FUN_14060c2be(longlong param_1,float param_2,float param_3,ulonglong param_4)

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
  float unaff_XMM6_Da;
  
  do {
    pfVar3 = (float *)(param_1 + -0x18 + param_4 * 4);
    fVar9 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar11 = pfVar3[3];
    pfVar4 = (float *)(param_1 + -0x24 + param_4 * 4);
    fVar12 = pfVar4[1];
    fVar13 = pfVar4[2];
    fVar14 = pfVar4[3];
    pfVar5 = (float *)(param_1 + 0x18 + param_4 * 4);
    fVar15 = pfVar5[1];
    fVar16 = pfVar5[2];
    fVar17 = pfVar5[3];
    pfVar6 = (float *)(param_1 + 0x24 + param_4 * 4);
    fVar18 = pfVar6[1];
    fVar19 = pfVar6[2];
    fVar20 = pfVar6[3];
    pfVar7 = (float *)(param_1 + 0xc + param_4 * 4);
    fVar21 = pfVar7[1];
    fVar22 = pfVar7[2];
    fVar23 = pfVar7[3];
    pfVar8 = (float *)(param_1 + -0xc + param_4 * 4);
    fVar24 = pfVar8[1];
    fVar25 = pfVar8[2];
    fVar26 = pfVar8[3];
    pfVar1 = (float *)(param_1 + param_4 * 4);
    fVar27 = pfVar1[1];
    fVar28 = pfVar1[2];
    fVar29 = pfVar1[3];
    pfVar2 = (float *)(in_RDX + param_4 * 4);
    *pfVar2 = (*pfVar4 + *pfVar6) * param_2 + (*pfVar3 + *pfVar5) * param_3 +
              (*pfVar8 + *pfVar7) * unaff_XMM6_Da + *pfVar1 * in_XMM0_Da;
    pfVar2[1] = (fVar12 + fVar18) * param_2 + (fVar9 + fVar15) * param_3 +
                (fVar24 + fVar21) * unaff_XMM6_Da + fVar27 * in_XMM0_Da;
    pfVar2[2] = (fVar13 + fVar19) * param_2 + (fVar10 + fVar16) * param_3 +
                (fVar25 + fVar22) * unaff_XMM6_Da + fVar28 * in_XMM0_Da;
    pfVar2[3] = (fVar14 + fVar20) * param_2 + (fVar11 + fVar17) * param_3 +
                (fVar26 + fVar23) * unaff_XMM6_Da + fVar29 * in_XMM0_Da;
    param_4 = param_4 + 4;
  } while (param_4 < in_RAX);
  if (in_RAX < in_R10) {
    do {
      *(float *)(in_RDX + in_RAX * 4) =
           (*(float *)(param_1 + -0x24 + in_RAX * 4) + *(float *)(param_1 + 0x24 + in_RAX * 4)) *
           param_2 + (*(float *)(param_1 + -0x18 + in_RAX * 4) +
                     *(float *)(param_1 + 0x18 + in_RAX * 4)) * param_3 +
           (*(float *)(param_1 + -0xc + in_RAX * 4) + *(float *)(param_1 + 0xc + in_RAX * 4)) *
           unaff_XMM6_Da + *(float *)(param_1 + in_RAX * 4) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < in_R10);
  }
  return;
}

