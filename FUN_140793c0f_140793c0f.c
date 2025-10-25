
void FUN_140793c0f(ulonglong param_1,float param_2,ulonglong param_3)

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
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar28;
  ulonglong uVar29;
  float in_XMM0_Da;
  float in_XMM4_Da;
  
  do {
    pfVar4 = (float *)(unaff_RBX + -0xc + param_3 * 4);
    fVar12 = pfVar4[1];
    fVar13 = pfVar4[2];
    fVar14 = pfVar4[3];
    pfVar5 = (float *)(unaff_RBX + -0x18 + param_3 * 4);
    fVar15 = pfVar5[1];
    fVar16 = pfVar5[2];
    fVar17 = pfVar5[3];
    pfVar6 = (float *)(unaff_RBX + 0xc + param_3 * 4);
    fVar18 = pfVar6[1];
    fVar19 = pfVar6[2];
    fVar20 = pfVar6[3];
    pfVar7 = (float *)(unaff_RBX + 0x18 + param_3 * 4);
    fVar21 = pfVar7[1];
    fVar22 = pfVar7[2];
    fVar23 = pfVar7[3];
    pfVar1 = (float *)(unaff_RBX + param_3 * 4);
    fVar24 = pfVar1[1];
    fVar25 = pfVar1[2];
    fVar26 = pfVar1[3];
    pfVar2 = (float *)(unaff_RSI + param_3 * 4);
    *pfVar2 = (*pfVar5 + *pfVar7) * param_2 + (*pfVar4 + *pfVar6) * in_XMM4_Da +
              *pfVar1 * in_XMM0_Da;
    pfVar2[1] = (fVar15 + fVar21) * param_2 + (fVar12 + fVar18) * in_XMM4_Da + fVar24 * in_XMM0_Da;
    pfVar2[2] = (fVar16 + fVar22) * param_2 + (fVar13 + fVar19) * in_XMM4_Da + fVar25 * in_XMM0_Da;
    pfVar2[3] = (fVar17 + fVar23) * param_2 + (fVar14 + fVar20) * in_XMM4_Da + fVar26 * in_XMM0_Da;
    pfVar1 = (float *)(unaff_RBX + 0x28 + param_3 * 4);
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    pfVar2 = (float *)(unaff_RBX + 0x1c + param_3 * 4);
    fVar15 = pfVar2[1];
    fVar16 = pfVar2[2];
    fVar17 = pfVar2[3];
    pfVar4 = (float *)(unaff_RBX + 4 + param_3 * 4);
    fVar18 = pfVar4[1];
    fVar19 = pfVar4[2];
    fVar20 = pfVar4[3];
    pfVar5 = (float *)(unaff_RBX + -8 + param_3 * 4);
    fVar21 = pfVar5[1];
    fVar22 = pfVar5[2];
    fVar23 = pfVar5[3];
    pfVar6 = (float *)(unaff_RBX + 0x10 + param_3 * 4);
    fVar24 = pfVar6[1];
    fVar25 = pfVar6[2];
    fVar26 = pfVar6[3];
    pfVar7 = (float *)(unaff_RSI + 0x10 + param_3 * 4);
    *pfVar7 = (*pfVar1 + *pfVar5) * param_2 + (*pfVar4 + *pfVar2) * in_XMM4_Da +
              *pfVar6 * in_XMM0_Da;
    pfVar7[1] = (fVar12 + fVar21) * param_2 + (fVar18 + fVar15) * in_XMM4_Da + fVar24 * in_XMM0_Da;
    pfVar7[2] = (fVar13 + fVar22) * param_2 + (fVar19 + fVar16) * in_XMM4_Da + fVar25 * in_XMM0_Da;
    pfVar7[3] = (fVar14 + fVar23) * param_2 + (fVar20 + fVar17) * in_XMM4_Da + fVar26 * in_XMM0_Da;
    param_3 = param_3 + 8;
  } while (param_3 < in_RDX);
  if (in_RDX + 1 <= param_1) {
    param_1 = param_1 - in_RDX;
    if ((longlong)param_1 < 2) {
      FUN_140793e3d();
      return;
    }
    uVar29 = 0;
    uVar27 = param_1 & 0xfffffffffffffffe;
    lVar3 = unaff_RBX + in_RDX * 4;
    lVar28 = 0;
    do {
      uVar8 = *(undefined8 *)(lVar28 + -0x18 + lVar3);
      uVar29 = uVar29 + 2;
      uVar9 = *(undefined8 *)(lVar28 + 0x18 + lVar3);
      uVar10 = *(undefined8 *)(lVar28 + 0xc + lVar3);
      uVar11 = *(undefined8 *)(lVar28 + -0xc + lVar3);
      *(ulonglong *)(lVar28 + unaff_RSI + in_RDX * 4) =
           CONCAT44(((float)((ulonglong)uVar8 >> 0x20) + (float)((ulonglong)uVar9 >> 0x20)) *
                    param_2 + ((float)((ulonglong)uVar11 >> 0x20) +
                              (float)((ulonglong)uVar10 >> 0x20)) * in_XMM4_Da +
                    (float)((ulonglong)*(undefined8 *)(lVar28 + lVar3) >> 0x20) * in_XMM0_Da,
                    ((float)uVar8 + (float)uVar9) * param_2 +
                    ((float)uVar11 + (float)uVar10) * in_XMM4_Da +
                    (float)*(undefined8 *)(lVar28 + lVar3) * in_XMM0_Da);
      lVar28 = lVar28 + 8;
    } while (uVar29 < uVar27);
    if (uVar27 < param_1) {
      lVar3 = unaff_RBX + in_RDX * 4;
      do {
        *(float *)(unaff_RSI + in_RDX * 4 + uVar27 * 4) =
             (*(float *)(lVar3 + -0x18 + uVar27 * 4) + *(float *)(lVar3 + 0x18 + uVar27 * 4)) *
             param_2 + (*(float *)(lVar3 + -0xc + uVar27 * 4) + *(float *)(lVar3 + 0xc + uVar27 * 4)
                       ) * in_XMM4_Da + *(float *)(lVar3 + uVar27 * 4) * in_XMM0_Da;
        uVar27 = uVar27 + 1;
      } while (uVar27 < param_1);
    }
  }
  return;
}

