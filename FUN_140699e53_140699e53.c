
void FUN_140699e53(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

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
  longlong in_RDX;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong in_R10;
  longlong lVar24;
  longlong in_R11;
  ulonglong unaff_R12;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  uVar23 = unaff_R12 & 0xfffffffffffffffc;
  uVar22 = 0;
  do {
    lVar24 = uVar22 + in_R11;
    pfVar3 = (float *)(in_R10 + -0xc + lVar24 * 4);
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    pfVar4 = (float *)(in_R10 + -0x18 + lVar24 * 4);
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar12 = pfVar4[3];
    pfVar5 = (float *)(in_R10 + 0xc + lVar24 * 4);
    fVar13 = pfVar5[1];
    fVar14 = pfVar5[2];
    fVar15 = pfVar5[3];
    pfVar1 = (float *)(in_R10 + lVar24 * 4);
    fVar16 = pfVar1[1];
    fVar17 = pfVar1[2];
    fVar18 = pfVar1[3];
    pfVar6 = (float *)(in_R11 * 4 + in_R10 + 0x18 + uVar22 * 4);
    fVar19 = pfVar6[1];
    fVar20 = pfVar6[2];
    fVar21 = pfVar6[3];
    pfVar2 = (float *)(in_R11 * 4 + in_RDX + uVar22 * 4);
    *pfVar2 = (*pfVar4 + *pfVar6) * (float)param_3 + (*pfVar3 + *pfVar5) * (float)param_2 +
              *pfVar1 * (float)param_1;
    pfVar2[1] = (fVar10 + fVar19) * (float)((ulonglong)param_3 >> 0x20) +
                (fVar7 + fVar13) * (float)((ulonglong)param_2 >> 0x20) +
                fVar16 * (float)((ulonglong)param_1 >> 0x20);
    pfVar2[2] = (fVar11 + fVar20) * in_XMM2_Dc + (fVar8 + fVar14) * in_XMM1_Dc + fVar17 * in_XMM0_Dc
    ;
    pfVar2[3] = (fVar12 + fVar21) * in_XMM2_Dd + (fVar9 + fVar15) * in_XMM1_Dd + fVar18 * in_XMM0_Dd
    ;
    uVar22 = uVar22 + 4;
  } while (uVar22 < uVar23);
  if (uVar23 < unaff_R12) {
    lVar24 = in_R10 + in_R11 * 4;
    do {
      *(float *)(in_RDX + in_R11 * 4 + uVar23 * 4) =
           (*(float *)(lVar24 + -0x18 + uVar23 * 4) + *(float *)(lVar24 + 0x18 + uVar23 * 4)) *
           in_XMM5_Da +
           (*(float *)(lVar24 + -0xc + uVar23 * 4) + *(float *)(lVar24 + 0xc + uVar23 * 4)) *
           in_XMM4_Da + *(float *)(lVar24 + uVar23 * 4) * param_4;
      uVar23 = uVar23 + 1;
    } while (uVar23 < unaff_R12);
  }
  return;
}

