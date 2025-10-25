
void FUN_14062dec0(longlong param_1,longlong param_2,ulonglong param_3,float *param_4)

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
    uVar27 = param_1 + 8U & 0xf;
    if (uVar27 != 0) {
      if ((param_1 + 8U & 3) != 0) goto LAB_14062e230;
      uVar27 = 0x10 - uVar27 >> 2;
    }
    if ((longlong)(uVar27 + 8) <= (longlong)param_3) {
      uVar26 = 0;
      uVar28 = param_3 - (param_3 - uVar27 & 7);
      if (uVar27 != 0) {
        do {
          *(float *)(param_2 + uVar26 * 4) =
               (*(float *)(param_1 + -8 + uVar26 * 4) + *(float *)(param_1 + 8 + uVar26 * 4)) *
               fVar8 + (*(float *)(param_1 + -4 + uVar26 * 4) + *(float *)(param_1 + 4 + uVar26 * 4)
                       ) * fVar9 + *(float *)(param_1 + uVar26 * 4) * fVar10;
          uVar26 = uVar26 + 1;
        } while (uVar26 < uVar27);
      }
      if ((param_2 + uVar27 * 4 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(param_1 + 4 + uVar27 * 4);
          fVar11 = pfVar4[1];
          fVar12 = pfVar4[2];
          fVar13 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -4 + uVar27 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar1 = (float *)(param_1 + uVar27 * 4);
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar6 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar20 = pfVar6[1];
          fVar21 = pfVar6[2];
          fVar22 = pfVar6[3];
          pfVar7 = (float *)(param_1 + 8 + uVar27 * 4);
          fVar23 = pfVar7[1];
          fVar24 = pfVar7[2];
          fVar25 = pfVar7[3];
          pfVar2 = (float *)(param_2 + uVar27 * 4);
          *pfVar2 = (*pfVar6 + *pfVar7) * fVar8 + (*pfVar5 + *pfVar4) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar20 + fVar23) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar17 * fVar10;
          pfVar2[2] = (fVar21 + fVar24) * fVar8 + (fVar15 + fVar12) * fVar9 + fVar18 * fVar10;
          pfVar2[3] = (fVar22 + fVar25) * fVar8 + (fVar16 + fVar13) * fVar9 + fVar19 * fVar10;
          pfVar1 = (float *)(param_1 + 0x14 + uVar27 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0xc + uVar27 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 0x10 + uVar27 * 4);
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar5 = (float *)(param_1 + 8 + uVar27 * 4);
          fVar20 = pfVar5[1];
          fVar21 = pfVar5[2];
          fVar22 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x18 + uVar27 * 4);
          fVar23 = pfVar6[1];
          fVar24 = pfVar6[2];
          fVar25 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar27 * 4);
          *pfVar7 = (*pfVar5 + *pfVar6) * fVar8 + (*pfVar2 + *pfVar1) * fVar9 + *pfVar4 * fVar10;
          pfVar7[1] = (fVar20 + fVar23) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar17 * fVar10;
          pfVar7[2] = (fVar21 + fVar24) * fVar8 + (fVar15 + fVar12) * fVar9 + fVar18 * fVar10;
          pfVar7[3] = (fVar22 + fVar25) * fVar8 + (fVar16 + fVar13) * fVar9 + fVar19 * fVar10;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar28);
      }
      else {
        do {
          pfVar4 = (float *)(param_1 + 4 + uVar27 * 4);
          fVar11 = pfVar4[1];
          fVar12 = pfVar4[2];
          fVar13 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -4 + uVar27 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar1 = (float *)(param_1 + uVar27 * 4);
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar6 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar20 = pfVar6[1];
          fVar21 = pfVar6[2];
          fVar22 = pfVar6[3];
          pfVar7 = (float *)(param_1 + 8 + uVar27 * 4);
          fVar23 = pfVar7[1];
          fVar24 = pfVar7[2];
          fVar25 = pfVar7[3];
          pfVar2 = (float *)(param_2 + uVar27 * 4);
          *pfVar2 = (*pfVar6 + *pfVar7) * fVar8 + (*pfVar5 + *pfVar4) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar20 + fVar23) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar17 * fVar10;
          pfVar2[2] = (fVar21 + fVar24) * fVar8 + (fVar15 + fVar12) * fVar9 + fVar18 * fVar10;
          pfVar2[3] = (fVar22 + fVar25) * fVar8 + (fVar16 + fVar13) * fVar9 + fVar19 * fVar10;
          pfVar1 = (float *)(param_1 + 0x14 + uVar27 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0xc + uVar27 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 0x10 + uVar27 * 4);
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar5 = (float *)(param_1 + 8 + uVar27 * 4);
          fVar20 = pfVar5[1];
          fVar21 = pfVar5[2];
          fVar22 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x18 + uVar27 * 4);
          fVar23 = pfVar6[1];
          fVar24 = pfVar6[2];
          fVar25 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar27 * 4);
          *pfVar7 = (*pfVar5 + *pfVar6) * fVar8 + (*pfVar2 + *pfVar1) * fVar9 + *pfVar4 * fVar10;
          pfVar7[1] = (fVar20 + fVar23) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar17 * fVar10;
          pfVar7[2] = (fVar21 + fVar24) * fVar8 + (fVar15 + fVar12) * fVar9 + fVar18 * fVar10;
          pfVar7[3] = (fVar22 + fVar25) * fVar8 + (fVar16 + fVar13) * fVar9 + fVar19 * fVar10;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar28);
      }
      if (param_3 < uVar28 + 1) {
        return;
      }
      param_3 = param_3 - uVar28;
      if ((longlong)param_3 < 4) {
        FUN_14062e1ba();
        return;
      }
      uVar26 = 0;
      uVar27 = param_3 & 0xfffffffffffffffc;
      do {
        lVar3 = uVar26 + uVar28;
        pfVar4 = (float *)(param_1 + 4 + lVar3 * 4);
        fVar11 = pfVar4[1];
        fVar12 = pfVar4[2];
        fVar13 = pfVar4[3];
        pfVar5 = (float *)(param_1 + -4 + lVar3 * 4);
        fVar14 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar16 = pfVar5[3];
        pfVar1 = (float *)(param_1 + lVar3 * 4);
        fVar17 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar19 = pfVar1[3];
        pfVar6 = (float *)(param_1 + -8 + lVar3 * 4);
        fVar20 = pfVar6[1];
        fVar21 = pfVar6[2];
        fVar22 = pfVar6[3];
        pfVar7 = (float *)(param_1 + uVar28 * 4 + 8 + uVar26 * 4);
        fVar23 = pfVar7[1];
        fVar24 = pfVar7[2];
        fVar25 = pfVar7[3];
        pfVar2 = (float *)(param_2 + uVar28 * 4 + uVar26 * 4);
        *pfVar2 = (*pfVar6 + *pfVar7) * fVar8 + (*pfVar5 + *pfVar4) * fVar9 + *pfVar1 * fVar10;
        pfVar2[1] = (fVar20 + fVar23) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar17 * fVar10;
        pfVar2[2] = (fVar21 + fVar24) * fVar8 + (fVar15 + fVar12) * fVar9 + fVar18 * fVar10;
        pfVar2[3] = (fVar22 + fVar25) * fVar8 + (fVar16 + fVar13) * fVar9 + fVar19 * fVar10;
        uVar26 = uVar26 + 4;
      } while (uVar26 < uVar27);
      goto code_r0x00014062e1ba;
    }
  }
LAB_14062e230:
  uVar28 = 0;
  uVar27 = 0;
  if (param_3 == 0) {
    return;
  }
code_r0x00014062e1ba:
  if (uVar27 < param_3) {
    param_1 = param_1 + uVar28 * 4;
    do {
      *(float *)(param_2 + uVar28 * 4 + uVar27 * 4) =
           (*(float *)(param_1 + -8 + uVar27 * 4) + *(float *)(param_1 + 8 + uVar27 * 4)) * fVar8 +
           (*(float *)(param_1 + -4 + uVar27 * 4) + *(float *)(param_1 + 4 + uVar27 * 4)) * fVar9 +
           *(float *)(param_1 + uVar27 * 4) * fVar10;
      uVar27 = uVar27 + 1;
    } while (uVar27 < param_3);
  }
  return;
}

