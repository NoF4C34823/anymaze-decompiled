
void FUN_14003dfdf(undefined8 param_1,undefined8 param_2,longlong param_3,float param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong in_RDX;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong in_R10;
  longlong in_R11;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  
  uVar16 = param_3 - in_R10;
  if (3 < (longlong)uVar16) {
    uVar15 = 0;
    uVar17 = uVar16 & 0xfffffffffffffffc;
    do {
      lVar1 = uVar15 + in_R10;
      pfVar4 = (float *)(in_R11 + 4 + lVar1 * 4);
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      fVar8 = pfVar4[3];
      pfVar5 = (float *)(in_R11 + -4 + lVar1 * 4);
      fVar9 = pfVar5[1];
      fVar10 = pfVar5[2];
      fVar11 = pfVar5[3];
      pfVar2 = (float *)(in_R11 + lVar1 * 4);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(in_RDX + in_R10 * 4 + uVar15 * 4);
      *pfVar3 = (*pfVar5 + *pfVar4) * (float)param_2 + *pfVar2 * (float)in_XMM0_Qa;
      pfVar3[1] = (fVar9 + fVar6) * (float)((ulonglong)param_2 >> 0x20) +
                  fVar12 * (float)((ulonglong)in_XMM0_Qa >> 0x20);
      pfVar3[2] = (fVar10 + fVar7) * in_XMM1_Dc + fVar13 * in_XMM0_Dc;
      pfVar3[3] = (fVar11 + fVar8) * in_XMM1_Dd + fVar14 * in_XMM0_Dd;
      uVar15 = uVar15 + 4;
    } while (uVar15 < uVar17);
    if (uVar17 < uVar16) {
      lVar1 = in_R11 + in_R10 * 4;
      do {
        *(float *)(in_RDX + in_R10 * 4 + uVar17 * 4) =
             (*(float *)(lVar1 + -4 + uVar17 * 4) + *(float *)(lVar1 + 4 + uVar17 * 4)) * param_4 +
             *(float *)(lVar1 + uVar17 * 4) * in_XMM2_Da;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar16);
    }
    return;
  }
  FUN_14003e058(param_1,in_RDX,uVar16,0);
  return;
}

