
void FUN_140194260(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  
  uVar13 = param_3 * 3;
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  if ((longlong)uVar13 < 1) {
    return;
  }
  if (3 < (longlong)uVar13) {
    uVar37 = param_2 & 0xf;
    if (uVar37 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140194493;
      uVar37 = 0x10 - uVar37 >> 2;
    }
    if ((longlong)(uVar37 + 4) <= (longlong)uVar13) {
      uVar36 = 0;
      uVar35 = uVar13 - (uVar13 - uVar37 & 3);
      if (uVar37 != 0) {
        do {
          *(float *)(param_2 + uVar36 * 4) =
               (*(float *)(param_1 + -0x24 + uVar36 * 4) + *(float *)(param_1 + 0x24 + uVar36 * 4))
               * fVar9 + (*(float *)(param_1 + -0x18 + uVar36 * 4) +
                         *(float *)(param_1 + 0x18 + uVar36 * 4)) * fVar10 +
               (*(float *)(param_1 + -0xc + uVar36 * 4) + *(float *)(param_1 + 0xc + uVar36 * 4)) *
               fVar11 + *(float *)(param_1 + uVar36 * 4) * fVar12;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar37);
      }
      do {
        pfVar3 = (float *)(param_1 + -0x24 + uVar37 * 4);
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar4 = (float *)(param_1 + 0x24 + uVar37 * 4);
        fVar17 = pfVar4[1];
        fVar18 = pfVar4[2];
        fVar19 = pfVar4[3];
        pfVar5 = (float *)(param_1 + -0x18 + uVar37 * 4);
        fVar20 = pfVar5[1];
        fVar21 = pfVar5[2];
        fVar22 = pfVar5[3];
        pfVar6 = (float *)(param_1 + 0xc + uVar37 * 4);
        fVar23 = pfVar6[1];
        fVar24 = pfVar6[2];
        fVar25 = pfVar6[3];
        pfVar7 = (float *)(param_1 + 0x18 + uVar37 * 4);
        fVar26 = pfVar7[1];
        fVar27 = pfVar7[2];
        fVar28 = pfVar7[3];
        pfVar1 = (float *)(param_1 + uVar37 * 4);
        fVar29 = pfVar1[1];
        fVar30 = pfVar1[2];
        fVar31 = pfVar1[3];
        pfVar8 = (float *)(param_1 + -0xc + uVar37 * 4);
        fVar32 = pfVar8[1];
        fVar33 = pfVar8[2];
        fVar34 = pfVar8[3];
        pfVar2 = (float *)(param_2 + uVar37 * 4);
        *pfVar2 = (*pfVar3 + *pfVar4) * fVar9 + (*pfVar5 + *pfVar7) * fVar10 +
                  (*pfVar8 + *pfVar6) * fVar11 + *pfVar1 * fVar12;
        pfVar2[1] = (fVar14 + fVar17) * fVar9 + (fVar20 + fVar26) * fVar10 +
                    (fVar32 + fVar23) * fVar11 + fVar29 * fVar12;
        pfVar2[2] = (fVar15 + fVar18) * fVar9 + (fVar21 + fVar27) * fVar10 +
                    (fVar33 + fVar24) * fVar11 + fVar30 * fVar12;
        pfVar2[3] = (fVar16 + fVar19) * fVar9 + (fVar22 + fVar28) * fVar10 +
                    (fVar34 + fVar25) * fVar11 + fVar31 * fVar12;
        uVar37 = uVar37 + 4;
      } while (uVar37 < uVar35);
      for (; uVar35 < uVar13; uVar35 = uVar35 + 1) {
        *(float *)(param_2 + uVar35 * 4) =
             (*(float *)(param_1 + -0x24 + uVar35 * 4) + *(float *)(param_1 + 0x24 + uVar35 * 4)) *
             fVar9 + (*(float *)(param_1 + -0x18 + uVar35 * 4) +
                     *(float *)(param_1 + 0x18 + uVar35 * 4)) * fVar10 +
             (*(float *)(param_1 + -0xc + uVar35 * 4) + *(float *)(param_1 + 0xc + uVar35 * 4)) *
             fVar11 + *(float *)(param_1 + uVar35 * 4) * fVar12;
      }
      return;
    }
  }
LAB_140194493:
  FUN_140194416(fVar12,fVar9,0);
  return;
}

