
void FUN_140192ce0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  float fVar23;
  float fVar24;
  float fVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar26 = param_2 & 0xf;
    if (uVar26 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140192faf;
      uVar26 = 0x10 - uVar26 >> 2;
    }
    if ((longlong)(uVar26 + 8) <= (longlong)param_3) {
      uVar27 = 0;
      uVar28 = param_3 - (param_3 - uVar26 & 7);
      if (uVar26 != 0) {
        do {
          *(float *)(param_2 + uVar27 * 4) =
               (*(float *)(param_1 + -8 + uVar27 * 4) + *(float *)(param_1 + 8 + uVar27 * 4)) *
               fVar8 + (*(float *)(param_1 + -4 + uVar27 * 4) + *(float *)(param_1 + 4 + uVar27 * 4)
                       ) * fVar9 + *(float *)(param_1 + uVar27 * 4) * fVar10;
          uVar27 = uVar27 + 1;
        } while (uVar27 < uVar26);
      }
      do {
        pfVar4 = (float *)(param_1 + 4 + uVar26 * 4);
        fVar11 = pfVar4[1];
        fVar12 = pfVar4[2];
        fVar13 = pfVar4[3];
        pfVar5 = (float *)(param_1 + -4 + uVar26 * 4);
        fVar14 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar16 = pfVar5[3];
        pfVar6 = (float *)(param_1 + -8 + uVar26 * 4);
        fVar17 = pfVar6[1];
        fVar18 = pfVar6[2];
        fVar19 = pfVar6[3];
        pfVar7 = (float *)(param_1 + 8 + uVar26 * 4);
        fVar20 = pfVar7[1];
        fVar21 = pfVar7[2];
        fVar22 = pfVar7[3];
        pfVar1 = (float *)(param_1 + uVar26 * 4);
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar25 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar26 * 4);
        *pfVar2 = (*pfVar6 + *pfVar7) * fVar8 + (*pfVar5 + *pfVar4) * fVar9 + *pfVar1 * fVar10;
        pfVar2[1] = (fVar17 + fVar20) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar23 * fVar10;
        pfVar2[2] = (fVar18 + fVar21) * fVar8 + (fVar15 + fVar12) * fVar9 + fVar24 * fVar10;
        pfVar2[3] = (fVar19 + fVar22) * fVar8 + (fVar16 + fVar13) * fVar9 + fVar25 * fVar10;
        pfVar1 = (float *)(param_1 + 0x14 + uVar26 * 4);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)(param_1 + 0xc + uVar26 * 4);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar4 = (float *)(param_1 + 8 + uVar26 * 4);
        fVar17 = pfVar4[1];
        fVar18 = pfVar4[2];
        fVar19 = pfVar4[3];
        pfVar5 = (float *)(param_1 + 0x18 + uVar26 * 4);
        fVar20 = pfVar5[1];
        fVar21 = pfVar5[2];
        fVar22 = pfVar5[3];
        pfVar6 = (float *)(param_1 + 0x10 + uVar26 * 4);
        fVar23 = pfVar6[1];
        fVar24 = pfVar6[2];
        fVar25 = pfVar6[3];
        pfVar7 = (float *)(param_2 + 0x10 + uVar26 * 4);
        *pfVar7 = (*pfVar4 + *pfVar5) * fVar8 + (*pfVar2 + *pfVar1) * fVar9 + *pfVar6 * fVar10;
        pfVar7[1] = (fVar17 + fVar20) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar23 * fVar10;
        pfVar7[2] = (fVar18 + fVar21) * fVar8 + (fVar15 + fVar12) * fVar9 + fVar24 * fVar10;
        pfVar7[3] = (fVar19 + fVar22) * fVar8 + (fVar16 + fVar13) * fVar9 + fVar25 * fVar10;
        uVar26 = uVar26 + 8;
      } while (uVar26 < uVar28);
      if (param_3 < uVar28 + 1) {
        return;
      }
      param_3 = param_3 - uVar28;
      if (3 < (longlong)param_3) {
        uVar27 = param_3 & 0xfffffffffffffffc;
        uVar26 = 0;
        do {
          lVar3 = uVar26 + uVar28;
          pfVar4 = (float *)(uVar28 * 4 + param_1 + 8 + uVar26 * 4);
          fVar11 = pfVar4[1];
          fVar12 = pfVar4[2];
          fVar13 = pfVar4[3];
          pfVar5 = (float *)(param_1 + 4 + lVar3 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar6 = (float *)(param_1 + -4 + lVar3 * 4);
          fVar17 = pfVar6[1];
          fVar18 = pfVar6[2];
          fVar19 = pfVar6[3];
          pfVar7 = (float *)(param_1 + -8 + lVar3 * 4);
          fVar20 = pfVar7[1];
          fVar21 = pfVar7[2];
          fVar22 = pfVar7[3];
          pfVar1 = (float *)(param_1 + lVar3 * 4);
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar2 = (float *)(param_2 + uVar28 * 4 + uVar26 * 4);
          *pfVar2 = (*pfVar7 + *pfVar4) * fVar8 + (*pfVar6 + *pfVar5) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar20 + fVar11) * fVar8 + (fVar17 + fVar14) * fVar9 + fVar23 * fVar10;
          pfVar2[2] = (fVar21 + fVar12) * fVar8 + (fVar18 + fVar15) * fVar9 + fVar24 * fVar10;
          pfVar2[3] = (fVar22 + fVar13) * fVar8 + (fVar19 + fVar16) * fVar9 + fVar25 * fVar10;
          uVar26 = uVar26 + 4;
        } while (uVar26 < uVar27);
        if (param_3 <= uVar27) {
          return;
        }
        param_1 = param_1 + uVar28 * 4;
        do {
          *(float *)(param_2 + uVar28 * 4 + uVar27 * 4) =
               (*(float *)(param_1 + -8 + uVar27 * 4) + *(float *)(param_1 + 8 + uVar27 * 4)) *
               fVar8 + (*(float *)(param_1 + -4 + uVar27 * 4) + *(float *)(param_1 + 4 + uVar27 * 4)
                       ) * fVar9 + *(float *)(param_1 + uVar27 * 4) * fVar10;
          uVar27 = uVar27 + 1;
        } while (uVar27 < param_3);
        return;
      }
      goto LAB_140192fb8;
    }
  }
LAB_140192faf:
  if (param_3 == 0) {
    return;
  }
LAB_140192fb8:
  FUN_140192f4f();
  return;
}

