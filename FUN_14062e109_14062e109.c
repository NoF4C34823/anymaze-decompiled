
void FUN_14062e109(float param_1,float param_2,ulonglong param_3,float param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
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
  longlong in_R11;
  longlong unaff_R12;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  
  if (in_R11 + 1U <= param_3) {
    param_3 = param_3 - in_R11;
    if ((longlong)param_3 < 4) {
      FUN_14062e1ba();
      return;
    }
    uVar23 = 0;
    uVar24 = param_3 & 0xfffffffffffffffc;
    do {
      lVar1 = uVar23 + in_R11;
      pfVar4 = (float *)(unaff_R12 + 4 + lVar1 * 4);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar5 = (float *)(unaff_R12 + -4 + lVar1 * 4);
      fVar11 = pfVar5[1];
      fVar12 = pfVar5[2];
      fVar13 = pfVar5[3];
      pfVar2 = (float *)(unaff_R12 + lVar1 * 4);
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar6 = (float *)(unaff_R12 + -8 + lVar1 * 4);
      fVar17 = pfVar6[1];
      fVar18 = pfVar6[2];
      fVar19 = pfVar6[3];
      pfVar7 = (float *)(unaff_R12 + in_R11 * 4 + 8 + uVar23 * 4);
      fVar20 = pfVar7[1];
      fVar21 = pfVar7[2];
      fVar22 = pfVar7[3];
      pfVar3 = (float *)(in_RDX + in_R11 * 4 + uVar23 * 4);
      *pfVar3 = (*pfVar6 + *pfVar7) * (float)in_XMM2_Qa + (*pfVar5 + *pfVar4) * in_XMM4_Da +
                *pfVar2 * in_XMM5_Da;
      pfVar3[1] = (fVar17 + fVar20) * (float)((ulonglong)in_XMM2_Qa >> 0x20) +
                  (fVar11 + fVar8) * in_XMM4_Db + fVar14 * in_XMM5_Db;
      pfVar3[2] = (fVar18 + fVar21) * in_XMM2_Dc + (fVar12 + fVar9) * in_XMM4_Dc +
                  fVar15 * in_XMM5_Dc;
      pfVar3[3] = (fVar19 + fVar22) * in_XMM2_Dd + (fVar13 + fVar10) * in_XMM4_Dd +
                  fVar16 * in_XMM5_Dd;
      uVar23 = uVar23 + 4;
    } while (uVar23 < uVar24);
    if (uVar24 < param_3) {
      lVar1 = unaff_R12 + in_R11 * 4;
      do {
        *(float *)(in_RDX + in_R11 * 4 + uVar24 * 4) =
             (*(float *)(lVar1 + -8 + uVar24 * 4) + *(float *)(lVar1 + 8 + uVar24 * 4)) * param_2 +
             (*(float *)(lVar1 + -4 + uVar24 * 4) + *(float *)(lVar1 + 4 + uVar24 * 4)) * param_4 +
             *(float *)(lVar1 + uVar24 * 4) * param_1;
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
    }
  }
  return;
}

