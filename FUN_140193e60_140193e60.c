
void FUN_140193e60(longlong param_1,longlong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
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
  ulonglong uVar29;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  
  uVar29 = param_3 * 3;
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  if ((longlong)uVar29 < 1) {
    return;
  }
  if (7 < (longlong)uVar29) {
    uVar27 = param_1 + 0x18U & 0xf;
    if (uVar27 != 0) {
      if ((param_1 + 0x18U & 3) != 0) goto LAB_140194252;
      uVar27 = 0x10 - uVar27 >> 2;
    }
    if ((longlong)(uVar27 + 8) <= (longlong)uVar29) {
      uVar26 = 0;
      uVar28 = uVar29 - (uVar29 - uVar27 & 7);
      if (uVar27 != 0) {
        do {
          *(float *)(param_2 + uVar26 * 4) =
               (*(float *)(param_1 + -0x18 + uVar26 * 4) + *(float *)(param_1 + 0x18 + uVar26 * 4))
               * fVar8 + (*(float *)(param_1 + -0xc + uVar26 * 4) +
                         *(float *)(param_1 + 0xc + uVar26 * 4)) * fVar9 +
               *(float *)(param_1 + uVar26 * 4) * fVar10;
          uVar26 = uVar26 + 1;
        } while (uVar26 < uVar27);
      }
      if ((uVar27 * 4 + param_2 & 0xf) == 0) {
        do {
          fVar11 = *(float *)(param_1 + 0x18 + uVar27 * 4);
          pfVar2 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar12 = *pfVar2;
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          pfVar3 = (float *)(param_1 + -0x18 + uVar27 * 4);
          fVar15 = pfVar3[1];
          fVar16 = pfVar3[2];
          fVar17 = pfVar3[3];
          lVar4 = param_1 + 8 + uVar27 * 4;
          fVar18 = *(float *)(lVar4 + 8);
          fVar19 = *(float *)(lVar4 + 0xc);
          pfVar2 = (float *)(param_1 + uVar27 * 4);
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar5 = (float *)(param_1 + 0x18 + uVar27 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar1 = (float *)(param_2 + uVar27 * 4);
          *pfVar1 = (*pfVar3 + *pfVar5) * fVar8 +
                    (*(float *)(param_1 + uVar27 * 4 + -0xc) + *(float *)(lVar4 + 4)) * fVar9 +
                    *pfVar2 * fVar10;
          pfVar1[1] = (fVar15 + fVar23) * fVar8 + (fVar12 + fVar18) * fVar9 + fVar20 * fVar10;
          pfVar1[2] = (fVar16 + fVar24) * fVar8 + (fVar13 + fVar19) * fVar9 + fVar21 * fVar10;
          pfVar1[3] = (fVar17 + fVar25) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar22 * fVar10;
          pfVar2 = (float *)(param_1 + 8 + uVar27 * 4);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          pfVar2 = (float *)(param_1 + 0x10 + uVar27 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          fVar17 = *(float *)(param_1 + 0x28 + uVar27 * 4);
          pfVar1 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          lVar4 = param_1 + 0x18 + uVar27 * 4;
          fVar21 = *(float *)(lVar4 + 8);
          fVar22 = *(float *)(lVar4 + 0xc);
          pfVar3 = (float *)(param_1 + 0x28 + uVar27 * 4);
          fVar23 = pfVar3[1];
          fVar24 = pfVar3[2];
          fVar25 = pfVar3[3];
          pfVar5 = (float *)(param_2 + 0x10 + uVar27 * 4);
          *pfVar5 = (*pfVar1 + *pfVar3) * fVar8 +
                    (*(float *)(param_1 + uVar27 * 4 + 4) + *(float *)(lVar4 + 4)) * fVar9 +
                    *pfVar2 * fVar10;
          pfVar5[1] = (fVar18 + fVar23) * fVar8 + (fVar11 + fVar21) * fVar9 + fVar14 * fVar10;
          pfVar5[2] = (fVar19 + fVar24) * fVar8 + (fVar12 + fVar22) * fVar9 + fVar15 * fVar10;
          pfVar5[3] = (fVar20 + fVar25) * fVar8 + (fVar13 + fVar17) * fVar9 + fVar16 * fVar10;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar28);
      }
      else {
        do {
          fVar11 = *(float *)(param_1 + 0x18 + uVar27 * 4);
          pfVar2 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar12 = *pfVar2;
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          pfVar3 = (float *)(param_1 + -0x18 + uVar27 * 4);
          fVar15 = pfVar3[1];
          fVar16 = pfVar3[2];
          fVar17 = pfVar3[3];
          lVar4 = param_1 + 8 + uVar27 * 4;
          fVar18 = *(float *)(lVar4 + 8);
          fVar19 = *(float *)(lVar4 + 0xc);
          pfVar2 = (float *)(param_1 + uVar27 * 4);
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar5 = (float *)(param_1 + 0x18 + uVar27 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar1 = (float *)(param_2 + uVar27 * 4);
          *pfVar1 = (*pfVar3 + *pfVar5) * fVar8 +
                    (*(float *)(param_1 + uVar27 * 4 + -0xc) + *(float *)(lVar4 + 4)) * fVar9 +
                    *pfVar2 * fVar10;
          pfVar1[1] = (fVar15 + fVar23) * fVar8 + (fVar12 + fVar18) * fVar9 + fVar20 * fVar10;
          pfVar1[2] = (fVar16 + fVar24) * fVar8 + (fVar13 + fVar19) * fVar9 + fVar21 * fVar10;
          pfVar1[3] = (fVar17 + fVar25) * fVar8 + (fVar14 + fVar11) * fVar9 + fVar22 * fVar10;
          pfVar2 = (float *)(param_1 + 8 + uVar27 * 4);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          pfVar2 = (float *)(param_1 + 0x10 + uVar27 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          fVar17 = *(float *)(param_1 + 0x28 + uVar27 * 4);
          pfVar1 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          lVar4 = param_1 + 0x18 + uVar27 * 4;
          fVar21 = *(float *)(lVar4 + 8);
          fVar22 = *(float *)(lVar4 + 0xc);
          pfVar3 = (float *)(param_1 + 0x28 + uVar27 * 4);
          fVar23 = pfVar3[1];
          fVar24 = pfVar3[2];
          fVar25 = pfVar3[3];
          pfVar5 = (float *)(param_2 + 0x10 + uVar27 * 4);
          *pfVar5 = (*pfVar1 + *pfVar3) * fVar8 +
                    (*(float *)(param_1 + uVar27 * 4 + 4) + *(float *)(lVar4 + 4)) * fVar9 +
                    *pfVar2 * fVar10;
          pfVar5[1] = (fVar18 + fVar23) * fVar8 + (fVar11 + fVar21) * fVar9 + fVar14 * fVar10;
          pfVar5[2] = (fVar19 + fVar24) * fVar8 + (fVar12 + fVar22) * fVar9 + fVar15 * fVar10;
          pfVar5[3] = (fVar20 + fVar25) * fVar8 + (fVar13 + fVar17) * fVar9 + fVar16 * fVar10;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar28);
      }
      if (uVar29 < uVar28 + 1) {
        return;
      }
      uVar29 = uVar29 - uVar28;
      if ((longlong)uVar29 < 4) {
        FUN_1401941e3(uVar27,fVar9,fVar8,0,CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc),
                      CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da),CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc));
        return;
      }
      uVar27 = uVar29 & 0xfffffffffffffffc;
      uVar26 = 0;
      do {
        lVar4 = uVar26 + uVar28;
        pfVar3 = (float *)(param_1 + -0xc + lVar4 * 4);
        fVar11 = pfVar3[1];
        fVar12 = pfVar3[2];
        fVar13 = pfVar3[3];
        pfVar5 = (float *)(param_1 + -0x18 + lVar4 * 4);
        fVar14 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar16 = pfVar5[3];
        pfVar6 = (float *)(param_1 + 0xc + lVar4 * 4);
        fVar17 = pfVar6[1];
        fVar18 = pfVar6[2];
        fVar19 = pfVar6[3];
        pfVar2 = (float *)(param_1 + lVar4 * 4);
        fVar20 = pfVar2[1];
        fVar21 = pfVar2[2];
        fVar22 = pfVar2[3];
        pfVar7 = (float *)(uVar28 * 4 + param_1 + 0x18 + uVar26 * 4);
        fVar23 = pfVar7[1];
        fVar24 = pfVar7[2];
        fVar25 = pfVar7[3];
        pfVar1 = (float *)(uVar28 * 4 + param_2 + uVar26 * 4);
        *pfVar1 = (*pfVar5 + *pfVar7) * fVar8 + (*pfVar3 + *pfVar6) * fVar9 + *pfVar2 * fVar10;
        pfVar1[1] = (fVar14 + fVar23) * fVar8 + (fVar11 + fVar17) * fVar9 + fVar20 * fVar10;
        pfVar1[2] = (fVar15 + fVar24) * fVar8 + (fVar12 + fVar18) * fVar9 + fVar21 * fVar10;
        pfVar1[3] = (fVar16 + fVar25) * fVar8 + (fVar13 + fVar19) * fVar9 + fVar22 * fVar10;
        uVar26 = uVar26 + 4;
      } while (uVar26 < uVar27);
      goto code_r0x0001401941e3;
    }
  }
LAB_140194252:
  uVar28 = 0;
  uVar27 = 0;
  if (uVar29 == 0) {
    return;
  }
code_r0x0001401941e3:
  if (uVar27 < uVar29) {
    param_1 = param_1 + uVar28 * 4;
    do {
      *(float *)(param_2 + uVar28 * 4 + uVar27 * 4) =
           (*(float *)(param_1 + -0x18 + uVar27 * 4) + *(float *)(param_1 + 0x18 + uVar27 * 4)) *
           fVar8 + (*(float *)(param_1 + -0xc + uVar27 * 4) + *(float *)(param_1 + 0xc + uVar27 * 4)
                   ) * fVar9 + *(float *)(param_1 + uVar27 * 4) * fVar10;
      uVar27 = uVar27 + 1;
    } while (uVar27 < uVar29);
  }
  return;
}

