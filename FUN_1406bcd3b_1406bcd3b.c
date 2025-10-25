
void FUN_1406bcd3b(ulonglong param_1,longlong param_2,undefined8 param_3,float param_4)

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
  ulonglong unaff_R12;
  ulonglong uVar25;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  do {
    fVar7 = *(float *)(in_R10 + 0x18 + param_1 * 4);
    pfVar2 = (float *)(in_R10 + -8 + param_1 * 4);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    pfVar3 = (float *)(in_R10 + -0x18 + param_1 * 4);
    fVar11 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar13 = pfVar3[3];
    lVar24 = in_R10 + 8 + param_1 * 4;
    fVar14 = *(float *)(lVar24 + 8);
    fVar15 = *(float *)(lVar24 + 0xc);
    pfVar2 = (float *)(in_R10 + param_1 * 4);
    fVar16 = pfVar2[1];
    fVar17 = pfVar2[2];
    fVar18 = pfVar2[3];
    pfVar4 = (float *)(in_R10 + 0x18 + param_1 * 4);
    fVar19 = pfVar4[1];
    fVar20 = pfVar4[2];
    fVar21 = pfVar4[3];
    pfVar1 = (float *)(param_2 + param_1 * 4);
    *pfVar1 = (*pfVar3 + *pfVar4) * in_XMM5_Da +
              (*(float *)(in_R10 + param_1 * 4 + -0xc) + *(float *)(lVar24 + 4)) * in_XMM4_Da +
              *pfVar2 * param_4;
    pfVar1[1] = (fVar11 + fVar19) * in_XMM5_Da + (fVar8 + fVar14) * in_XMM4_Da + fVar16 * param_4;
    pfVar1[2] = (fVar12 + fVar20) * in_XMM5_Da + (fVar9 + fVar15) * in_XMM4_Da + fVar17 * param_4;
    pfVar1[3] = (fVar13 + fVar21) * in_XMM5_Da + (fVar10 + fVar7) * in_XMM4_Da + fVar18 * param_4;
    pfVar2 = (float *)(in_R10 + 8 + param_1 * 4);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    pfVar2 = (float *)(in_R10 + 0x10 + param_1 * 4);
    fVar10 = pfVar2[1];
    fVar11 = pfVar2[2];
    fVar12 = pfVar2[3];
    fVar13 = *(float *)(in_R10 + 0x28 + param_1 * 4);
    pfVar1 = (float *)(in_R10 + -8 + param_1 * 4);
    fVar14 = pfVar1[1];
    fVar15 = pfVar1[2];
    fVar16 = pfVar1[3];
    lVar24 = in_R10 + 0x18 + param_1 * 4;
    fVar17 = *(float *)(lVar24 + 8);
    fVar18 = *(float *)(lVar24 + 0xc);
    pfVar3 = (float *)(in_R10 + 0x28 + param_1 * 4);
    fVar19 = pfVar3[1];
    fVar20 = pfVar3[2];
    fVar21 = pfVar3[3];
    pfVar4 = (float *)(param_2 + 0x10 + param_1 * 4);
    *pfVar4 = (*pfVar1 + *pfVar3) * in_XMM5_Da +
              (*(float *)(in_R10 + param_1 * 4 + 4) + *(float *)(lVar24 + 4)) * in_XMM4_Da +
              *pfVar2 * param_4;
    pfVar4[1] = (fVar14 + fVar19) * in_XMM5_Da + (fVar7 + fVar17) * in_XMM4_Da + fVar10 * param_4;
    pfVar4[2] = (fVar15 + fVar20) * in_XMM5_Da + (fVar8 + fVar18) * in_XMM4_Da + fVar11 * param_4;
    pfVar4[3] = (fVar16 + fVar21) * in_XMM5_Da + (fVar9 + fVar13) * in_XMM4_Da + fVar12 * param_4;
    param_1 = param_1 + 8;
  } while (param_1 < in_R11);
  if (in_R11 + 1 <= unaff_R12) {
    uVar25 = unaff_R12 - in_R11;
    if ((longlong)uVar25 < 4) {
      FUN_1406bcfe3(param_1,in_XMM4_Da,in_XMM5_Da,0);
      return;
    }
    uVar23 = uVar25 & 0xfffffffffffffffc;
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
      pfVar2 = (float *)(in_R10 + lVar24 * 4);
      fVar16 = pfVar2[1];
      fVar17 = pfVar2[2];
      fVar18 = pfVar2[3];
      pfVar6 = (float *)(in_R11 * 4 + in_R10 + 0x18 + uVar22 * 4);
      fVar19 = pfVar6[1];
      fVar20 = pfVar6[2];
      fVar21 = pfVar6[3];
      pfVar1 = (float *)(in_R11 * 4 + param_2 + uVar22 * 4);
      *pfVar1 = (*pfVar4 + *pfVar6) * in_XMM5_Da + (*pfVar3 + *pfVar5) * in_XMM4_Da +
                *pfVar2 * param_4;
      pfVar1[1] = (fVar10 + fVar19) * in_XMM5_Da + (fVar7 + fVar13) * in_XMM4_Da + fVar16 * param_4;
      pfVar1[2] = (fVar11 + fVar20) * in_XMM5_Da + (fVar8 + fVar14) * in_XMM4_Da + fVar17 * param_4;
      pfVar1[3] = (fVar12 + fVar21) * in_XMM5_Da + (fVar9 + fVar15) * in_XMM4_Da + fVar18 * param_4;
      uVar22 = uVar22 + 4;
    } while (uVar22 < uVar23);
    if (uVar23 < uVar25) {
      lVar24 = in_R10 + in_R11 * 4;
      do {
        *(float *)(param_2 + in_R11 * 4 + uVar23 * 4) =
             (*(float *)(lVar24 + -0x18 + uVar23 * 4) + *(float *)(lVar24 + 0x18 + uVar23 * 4)) *
             in_XMM5_Da +
             (*(float *)(lVar24 + -0xc + uVar23 * 4) + *(float *)(lVar24 + 0xc + uVar23 * 4)) *
             in_XMM4_Da + *(float *)(lVar24 + uVar23 * 4) * param_4;
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar25);
    }
  }
  return;
}

