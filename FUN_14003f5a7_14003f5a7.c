
void FUN_14003f5a7(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4)

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
  longlong in_R9;
  longlong in_R10;
  ulonglong in_R11;
  ulonglong uVar25;
  float in_XMM0_Da;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  
  if (in_R9 + 1U <= in_R11) {
    uVar25 = in_R11 - in_R9;
    if ((longlong)uVar25 < 4) {
      FUN_14003f657(param_1,in_RDX,0);
      return;
    }
    uVar23 = 0;
    uVar24 = uVar25 & 0xfffffffffffffffc;
    do {
      lVar1 = uVar23 + in_R9;
      pfVar4 = (float *)(in_R10 + -0xc + lVar1 * 4);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar5 = (float *)(in_R10 + -0x18 + lVar1 * 4);
      fVar11 = pfVar5[1];
      fVar12 = pfVar5[2];
      fVar13 = pfVar5[3];
      pfVar6 = (float *)(in_R10 + 0xc + lVar1 * 4);
      fVar14 = pfVar6[1];
      fVar15 = pfVar6[2];
      fVar16 = pfVar6[3];
      pfVar7 = (float *)(in_R10 + in_R9 * 4 + 0x18 + uVar23 * 4);
      fVar17 = pfVar7[1];
      fVar18 = pfVar7[2];
      fVar19 = pfVar7[3];
      pfVar2 = (float *)(in_R10 + lVar1 * 4);
      fVar20 = pfVar2[1];
      fVar21 = pfVar2[2];
      fVar22 = pfVar2[3];
      pfVar3 = (float *)(in_RDX + in_R9 * 4 + uVar23 * 4);
      *pfVar3 = (*pfVar5 + *pfVar7) * (float)param_4 + (*pfVar4 + *pfVar6) * (float)param_3 +
                *pfVar2 * in_XMM5_Da;
      pfVar3[1] = (fVar11 + fVar17) * (float)((ulonglong)param_4 >> 0x20) +
                  (fVar8 + fVar14) * (float)((ulonglong)param_3 >> 0x20) + fVar20 * in_XMM5_Db;
      pfVar3[2] = (fVar12 + fVar18) * in_XMM3_Dc + (fVar9 + fVar15) * in_XMM2_Dc +
                  fVar21 * in_XMM5_Dc;
      pfVar3[3] = (fVar13 + fVar19) * in_XMM3_Dd + (fVar10 + fVar16) * in_XMM2_Dd +
                  fVar22 * in_XMM5_Dd;
      uVar23 = uVar23 + 4;
    } while (uVar23 < uVar24);
    if (uVar24 < uVar25) {
      lVar1 = in_R10 + in_R9 * 4;
      do {
        *(float *)(in_RDX + in_R9 * 4 + uVar24 * 4) =
             (*(float *)(lVar1 + -0x18 + uVar24 * 4) + *(float *)(lVar1 + 0x18 + uVar24 * 4)) *
             param_2 + (*(float *)(lVar1 + -0xc + uVar24 * 4) + *(float *)(lVar1 + 0xc + uVar24 * 4)
                       ) * in_XMM4_Da + *(float *)(lVar1 + uVar24 * 4) * in_XMM0_Da;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar25);
    }
  }
  return;
}

