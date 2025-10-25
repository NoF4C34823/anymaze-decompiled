
void FUN_140192e94(undefined8 param_1,undefined8 param_2,longlong param_3,float param_4)

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
  ulonglong uVar24;
  longlong in_R10;
  longlong lVar25;
  longlong in_R11;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  uVar23 = param_3 - in_R11;
  if (3 < (longlong)uVar23) {
    uVar24 = uVar23 & 0xfffffffffffffffc;
    uVar22 = 0;
    do {
      lVar25 = uVar22 + in_R11;
      pfVar3 = (float *)(in_R11 * 4 + in_R10 + 8 + uVar22 * 4);
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      pfVar4 = (float *)(in_R10 + 4 + lVar25 * 4);
      fVar10 = pfVar4[1];
      fVar11 = pfVar4[2];
      fVar12 = pfVar4[3];
      pfVar5 = (float *)(in_R10 + -4 + lVar25 * 4);
      fVar13 = pfVar5[1];
      fVar14 = pfVar5[2];
      fVar15 = pfVar5[3];
      pfVar6 = (float *)(in_R10 + -8 + lVar25 * 4);
      fVar16 = pfVar6[1];
      fVar17 = pfVar6[2];
      fVar18 = pfVar6[3];
      pfVar1 = (float *)(in_R10 + lVar25 * 4);
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar2 = (float *)(in_RDX + in_R11 * 4 + uVar22 * 4);
      *pfVar2 = (*pfVar6 + *pfVar3) * (float)in_XMM0_Qa + (*pfVar5 + *pfVar4) * (float)in_XMM2_Qa +
                *pfVar1 * (float)param_2;
      pfVar2[1] = (fVar16 + fVar7) * (float)((ulonglong)in_XMM0_Qa >> 0x20) +
                  (fVar13 + fVar10) * (float)((ulonglong)in_XMM2_Qa >> 0x20) +
                  fVar19 * (float)((ulonglong)param_2 >> 0x20);
      pfVar2[2] = (fVar17 + fVar8) * in_XMM0_Dc + (fVar14 + fVar11) * in_XMM2_Dc +
                  fVar20 * in_XMM1_Dc;
      pfVar2[3] = (fVar18 + fVar9) * in_XMM0_Dd + (fVar15 + fVar12) * in_XMM2_Dd +
                  fVar21 * in_XMM1_Dd;
      uVar22 = uVar22 + 4;
    } while (uVar22 < uVar24);
    if (uVar24 < uVar23) {
      lVar25 = in_R10 + in_R11 * 4;
      do {
        *(float *)(in_RDX + in_R11 * 4 + uVar24 * 4) =
             (*(float *)(lVar25 + -8 + uVar24 * 4) + *(float *)(lVar25 + 8 + uVar24 * 4)) *
             in_XMM5_Da +
             (*(float *)(lVar25 + -4 + uVar24 * 4) + *(float *)(lVar25 + 4 + uVar24 * 4)) *
             in_XMM4_Da + *(float *)(lVar25 + uVar24 * 4) * param_4;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar23);
    }
    return;
  }
  FUN_140192f4f(param_1,in_RDX,uVar23,0);
  return;
}

