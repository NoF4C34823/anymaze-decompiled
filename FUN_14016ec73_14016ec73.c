
void FUN_14016ec73(ulonglong param_1,float param_2,undefined8 param_3,ulonglong param_4)

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
  longlong in_R10;
  ulonglong in_R11;
  ulonglong uVar25;
  float in_XMM0_Da;
  float in_XMM4_Da;
  
  do {
    pfVar4 = (float *)(in_R10 + -0xc + param_1 * 4);
    fVar8 = pfVar4[1];
    fVar9 = pfVar4[2];
    fVar10 = pfVar4[3];
    pfVar5 = (float *)(in_R10 + -0x18 + param_1 * 4);
    fVar11 = pfVar5[1];
    fVar12 = pfVar5[2];
    fVar13 = pfVar5[3];
    pfVar6 = (float *)(in_R10 + 0xc + param_1 * 4);
    fVar14 = pfVar6[1];
    fVar15 = pfVar6[2];
    fVar16 = pfVar6[3];
    pfVar7 = (float *)(in_R10 + 0x18 + param_1 * 4);
    fVar17 = pfVar7[1];
    fVar18 = pfVar7[2];
    fVar19 = pfVar7[3];
    pfVar1 = (float *)(in_R10 + param_1 * 4);
    fVar20 = pfVar1[1];
    fVar21 = pfVar1[2];
    fVar22 = pfVar1[3];
    pfVar2 = (float *)(in_RDX + param_1 * 4);
    *pfVar2 = (*pfVar5 + *pfVar7) * param_2 + (*pfVar4 + *pfVar6) * in_XMM4_Da +
              *pfVar1 * in_XMM0_Da;
    pfVar2[1] = (fVar11 + fVar17) * param_2 + (fVar8 + fVar14) * in_XMM4_Da + fVar20 * in_XMM0_Da;
    pfVar2[2] = (fVar12 + fVar18) * param_2 + (fVar9 + fVar15) * in_XMM4_Da + fVar21 * in_XMM0_Da;
    pfVar2[3] = (fVar13 + fVar19) * param_2 + (fVar10 + fVar16) * in_XMM4_Da + fVar22 * in_XMM0_Da;
    pfVar1 = (float *)(in_R10 + 0x28 + param_1 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    pfVar2 = (float *)(in_R10 + 0x1c + param_1 * 4);
    fVar11 = pfVar2[1];
    fVar12 = pfVar2[2];
    fVar13 = pfVar2[3];
    pfVar4 = (float *)(in_R10 + 4 + param_1 * 4);
    fVar14 = pfVar4[1];
    fVar15 = pfVar4[2];
    fVar16 = pfVar4[3];
    pfVar5 = (float *)(in_R10 + -8 + param_1 * 4);
    fVar17 = pfVar5[1];
    fVar18 = pfVar5[2];
    fVar19 = pfVar5[3];
    pfVar6 = (float *)(in_R10 + 0x10 + param_1 * 4);
    fVar20 = pfVar6[1];
    fVar21 = pfVar6[2];
    fVar22 = pfVar6[3];
    pfVar7 = (float *)(in_RDX + 0x10 + param_1 * 4);
    *pfVar7 = (*pfVar1 + *pfVar5) * param_2 + (*pfVar4 + *pfVar2) * in_XMM4_Da +
              *pfVar6 * in_XMM0_Da;
    pfVar7[1] = (fVar8 + fVar17) * param_2 + (fVar14 + fVar11) * in_XMM4_Da + fVar20 * in_XMM0_Da;
    pfVar7[2] = (fVar9 + fVar18) * param_2 + (fVar15 + fVar12) * in_XMM4_Da + fVar21 * in_XMM0_Da;
    pfVar7[3] = (fVar10 + fVar19) * param_2 + (fVar16 + fVar13) * in_XMM4_Da + fVar22 * in_XMM0_Da;
    param_1 = param_1 + 8;
  } while (param_1 < param_4);
  if (param_4 + 1 <= in_R11) {
    uVar25 = in_R11 - param_4;
    if ((longlong)uVar25 < 4) {
      FUN_14016ee97(param_1,in_RDX,0);
      return;
    }
    uVar23 = 0;
    uVar24 = uVar25 & 0xfffffffffffffffc;
    do {
      lVar3 = uVar23 + param_4;
      pfVar4 = (float *)(in_R10 + -0xc + lVar3 * 4);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar5 = (float *)(in_R10 + -0x18 + lVar3 * 4);
      fVar11 = pfVar5[1];
      fVar12 = pfVar5[2];
      fVar13 = pfVar5[3];
      pfVar6 = (float *)(in_R10 + 0xc + lVar3 * 4);
      fVar14 = pfVar6[1];
      fVar15 = pfVar6[2];
      fVar16 = pfVar6[3];
      pfVar7 = (float *)(in_R10 + param_4 * 4 + 0x18 + uVar23 * 4);
      fVar17 = pfVar7[1];
      fVar18 = pfVar7[2];
      fVar19 = pfVar7[3];
      pfVar1 = (float *)(in_R10 + lVar3 * 4);
      fVar20 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      pfVar2 = (float *)(in_RDX + param_4 * 4 + uVar23 * 4);
      *pfVar2 = (*pfVar5 + *pfVar7) * param_2 + (*pfVar4 + *pfVar6) * in_XMM4_Da +
                *pfVar1 * in_XMM0_Da;
      pfVar2[1] = (fVar11 + fVar17) * param_2 + (fVar8 + fVar14) * in_XMM4_Da + fVar20 * in_XMM0_Da;
      pfVar2[2] = (fVar12 + fVar18) * param_2 + (fVar9 + fVar15) * in_XMM4_Da + fVar21 * in_XMM0_Da;
      pfVar2[3] = (fVar13 + fVar19) * param_2 + (fVar10 + fVar16) * in_XMM4_Da + fVar22 * in_XMM0_Da
      ;
      uVar23 = uVar23 + 4;
    } while (uVar23 < uVar24);
    if (uVar24 < uVar25) {
      lVar3 = in_R10 + param_4 * 4;
      do {
        *(float *)(in_RDX + param_4 * 4 + uVar24 * 4) =
             (*(float *)(lVar3 + -0x18 + uVar24 * 4) + *(float *)(lVar3 + 0x18 + uVar24 * 4)) *
             param_2 + (*(float *)(lVar3 + -0xc + uVar24 * 4) + *(float *)(lVar3 + 0xc + uVar24 * 4)
                       ) * in_XMM4_Da + *(float *)(lVar3 + uVar24 * 4) * in_XMM0_Da;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar25);
    }
  }
  return;
}

