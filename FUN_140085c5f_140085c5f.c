
void FUN_140085c5f(longlong param_1,float param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  ulonglong uVar27;
  ulonglong in_RDX;
  longlong unaff_RDI;
  ulonglong in_R9;
  longlong lVar28;
  ulonglong uVar29;
  float in_XMM0_Da;
  
  do {
    pfVar4 = (float *)(param_1 + 4 + in_R9 * 4);
    fVar12 = pfVar4[1];
    fVar13 = pfVar4[2];
    fVar14 = pfVar4[3];
    pfVar5 = (float *)(param_1 + -4 + in_R9 * 4);
    fVar15 = pfVar5[1];
    fVar16 = pfVar5[2];
    fVar17 = pfVar5[3];
    pfVar6 = (float *)(param_1 + -8 + in_R9 * 4);
    fVar18 = pfVar6[1];
    fVar19 = pfVar6[2];
    fVar20 = pfVar6[3];
    pfVar1 = (float *)(param_1 + in_R9 * 4);
    fVar21 = pfVar1[1];
    fVar22 = pfVar1[2];
    fVar23 = pfVar1[3];
    pfVar7 = (float *)(param_1 + 8 + in_R9 * 4);
    fVar24 = pfVar7[1];
    fVar25 = pfVar7[2];
    fVar26 = pfVar7[3];
    pfVar2 = (float *)(unaff_RDI + in_R9 * 4);
    *pfVar2 = (*pfVar6 + *pfVar7) * param_2 + (*pfVar5 + *pfVar4) * param_4 + *pfVar1 * in_XMM0_Da;
    pfVar2[1] = (fVar18 + fVar24) * param_2 + (fVar15 + fVar12) * param_4 + fVar21 * in_XMM0_Da;
    pfVar2[2] = (fVar19 + fVar25) * param_2 + (fVar16 + fVar13) * param_4 + fVar22 * in_XMM0_Da;
    pfVar2[3] = (fVar20 + fVar26) * param_2 + (fVar17 + fVar14) * param_4 + fVar23 * in_XMM0_Da;
    pfVar1 = (float *)(param_1 + 0x14 + in_R9 * 4);
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    pfVar2 = (float *)(param_1 + 0xc + in_R9 * 4);
    fVar15 = pfVar2[1];
    fVar16 = pfVar2[2];
    fVar17 = pfVar2[3];
    pfVar4 = (float *)(param_1 + 8 + in_R9 * 4);
    fVar18 = pfVar4[1];
    fVar19 = pfVar4[2];
    fVar20 = pfVar4[3];
    pfVar5 = (float *)(param_1 + 0x10 + in_R9 * 4);
    fVar21 = pfVar5[1];
    fVar22 = pfVar5[2];
    fVar23 = pfVar5[3];
    pfVar6 = (float *)(param_1 + 0x18 + in_R9 * 4);
    fVar24 = pfVar6[1];
    fVar25 = pfVar6[2];
    fVar26 = pfVar6[3];
    pfVar7 = (float *)(unaff_RDI + 0x10 + in_R9 * 4);
    *pfVar7 = (*pfVar4 + *pfVar6) * param_2 + (*pfVar2 + *pfVar1) * param_4 + *pfVar5 * in_XMM0_Da;
    pfVar7[1] = (fVar18 + fVar24) * param_2 + (fVar15 + fVar12) * param_4 + fVar21 * in_XMM0_Da;
    pfVar7[2] = (fVar19 + fVar25) * param_2 + (fVar16 + fVar13) * param_4 + fVar22 * in_XMM0_Da;
    pfVar7[3] = (fVar20 + fVar26) * param_2 + (fVar17 + fVar14) * param_4 + fVar23 * in_XMM0_Da;
    in_R9 = in_R9 + 8;
  } while (in_R9 < in_RDX);
  if (in_RDX + 1 <= param_3) {
    param_3 = param_3 - in_RDX;
    if ((longlong)param_3 < 2) {
      FUN_140085ddd();
      return;
    }
    uVar29 = 0;
    uVar27 = param_3 & 0xfffffffffffffffe;
    lVar3 = param_1 + in_RDX * 4;
    lVar28 = 0;
    do {
      uVar8 = *(undefined8 *)(lVar28 + -8 + lVar3);
      uVar29 = uVar29 + 2;
      uVar9 = *(undefined8 *)(lVar28 + 8 + lVar3);
      uVar10 = *(undefined8 *)(lVar28 + 4 + lVar3);
      uVar11 = *(undefined8 *)(lVar28 + -4 + lVar3);
      *(ulonglong *)(lVar28 + unaff_RDI + in_RDX * 4) =
           CONCAT44(((float)((ulonglong)uVar8 >> 0x20) + (float)((ulonglong)uVar9 >> 0x20)) *
                    param_2 + ((float)((ulonglong)uVar11 >> 0x20) +
                              (float)((ulonglong)uVar10 >> 0x20)) * param_4 +
                    (float)((ulonglong)*(undefined8 *)(lVar28 + lVar3) >> 0x20) * in_XMM0_Da,
                    ((float)uVar8 + (float)uVar9) * param_2 +
                    ((float)uVar11 + (float)uVar10) * param_4 +
                    (float)*(undefined8 *)(lVar28 + lVar3) * in_XMM0_Da);
      lVar28 = lVar28 + 8;
    } while (uVar29 < uVar27);
    if (uVar27 < param_3) {
      param_1 = param_1 + in_RDX * 4;
      do {
        *(float *)(unaff_RDI + in_RDX * 4 + uVar27 * 4) =
             (*(float *)(param_1 + -8 + uVar27 * 4) + *(float *)(param_1 + 8 + uVar27 * 4)) *
             param_2 + (*(float *)(param_1 + -4 + uVar27 * 4) + *(float *)(param_1 + 4 + uVar27 * 4)
                       ) * param_4 + *(float *)(param_1 + uVar27 * 4) * in_XMM0_Da;
        uVar27 = uVar27 + 1;
      } while (uVar27 < param_3);
    }
  }
  return;
}

