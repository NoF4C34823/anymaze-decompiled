
void FUN_140802e86(undefined8 param_1,float param_2,longlong param_3,undefined8 param_4)

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
  float in_XMM0_Da;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  
  uVar16 = param_3 - in_R10;
  if (3 < (longlong)uVar16) {
    uVar15 = 0;
    uVar17 = uVar16 & 0xfffffffffffffffc;
    do {
      lVar1 = uVar15 + in_R10;
      pfVar4 = (float *)(in_R11 + -4 + lVar1 * 4);
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      fVar8 = pfVar4[3];
      pfVar2 = (float *)(in_R11 + lVar1 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar5 = (float *)(in_R11 + 4 + lVar1 * 4);
      fVar12 = pfVar5[1];
      fVar13 = pfVar5[2];
      fVar14 = pfVar5[3];
      pfVar3 = (float *)(in_RDX + in_R10 * 4 + uVar15 * 4);
      *pfVar3 = (float)in_XMM2_Qa * (*pfVar4 + *pfVar5) + (float)param_4 * *pfVar2;
      pfVar3[1] = (float)((ulonglong)in_XMM2_Qa >> 0x20) * (fVar6 + fVar12) +
                  (float)((ulonglong)param_4 >> 0x20) * fVar9;
      pfVar3[2] = in_XMM2_Dc * (fVar7 + fVar13) + in_XMM3_Dc * fVar10;
      pfVar3[3] = in_XMM2_Dd * (fVar8 + fVar14) + in_XMM3_Dd * fVar11;
      uVar15 = uVar15 + 4;
    } while (uVar15 < uVar17);
    if (uVar17 < uVar16) {
      lVar1 = in_R11 + in_R10 * 4;
      do {
        *(float *)(in_RDX + in_R10 * 4 + uVar17 * 4) =
             param_2 * (*(float *)(lVar1 + -4 + uVar17 * 4) + *(float *)(lVar1 + 4 + uVar17 * 4)) +
             in_XMM0_Da * *(float *)(lVar1 + uVar17 * 4);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar16);
    }
    return;
  }
  FUN_140802ef3(param_1,in_RDX,uVar16,0);
  return;
}

