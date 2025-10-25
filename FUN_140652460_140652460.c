
void FUN_140652460(longlong param_1,longlong param_2,longlong param_3,float *param_4)

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
  ulonglong uVar29;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  
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
      if ((param_1 + 0x18U & 3) != 0) goto LAB_1406527cf;
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
      if ((param_2 + uVar27 * 4 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(param_1 + -0xc + uVar27 * 4);
          fVar11 = pfVar4[1];
          fVar12 = pfVar4[2];
          fVar13 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -0x18 + uVar27 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0xc + uVar27 * 4);
          fVar17 = pfVar6[1];
          fVar18 = pfVar6[2];
          fVar19 = pfVar6[3];
          pfVar7 = (float *)(param_1 + 0x18 + uVar27 * 4);
          fVar20 = pfVar7[1];
          fVar21 = pfVar7[2];
          fVar22 = pfVar7[3];
          pfVar1 = (float *)(param_1 + uVar27 * 4);
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar2 = (float *)(param_2 + uVar27 * 4);
          *pfVar2 = (*pfVar5 + *pfVar7) * fVar8 + (*pfVar4 + *pfVar6) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar14 + fVar20) * fVar8 + (fVar11 + fVar17) * fVar9 + fVar23 * fVar10;
          pfVar2[2] = (fVar15 + fVar21) * fVar8 + (fVar12 + fVar18) * fVar9 + fVar24 * fVar10;
          pfVar2[3] = (fVar16 + fVar22) * fVar8 + (fVar13 + fVar19) * fVar9 + fVar25 * fVar10;
          pfVar1 = (float *)(param_1 + 0x28 + uVar27 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0x1c + uVar27 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 4 + uVar27 * 4);
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar20 = pfVar5[1];
          fVar21 = pfVar5[2];
          fVar22 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x10 + uVar27 * 4);
          fVar23 = pfVar6[1];
          fVar24 = pfVar6[2];
          fVar25 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar27 * 4);
          *pfVar7 = (*pfVar1 + *pfVar5) * fVar8 + (*pfVar4 + *pfVar2) * fVar9 + *pfVar6 * fVar10;
          pfVar7[1] = (fVar11 + fVar20) * fVar8 + (fVar17 + fVar14) * fVar9 + fVar23 * fVar10;
          pfVar7[2] = (fVar12 + fVar21) * fVar8 + (fVar18 + fVar15) * fVar9 + fVar24 * fVar10;
          pfVar7[3] = (fVar13 + fVar22) * fVar8 + (fVar19 + fVar16) * fVar9 + fVar25 * fVar10;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar28);
      }
      else {
        do {
          pfVar4 = (float *)(param_1 + -0xc + uVar27 * 4);
          fVar11 = pfVar4[1];
          fVar12 = pfVar4[2];
          fVar13 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -0x18 + uVar27 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0xc + uVar27 * 4);
          fVar17 = pfVar6[1];
          fVar18 = pfVar6[2];
          fVar19 = pfVar6[3];
          pfVar7 = (float *)(param_1 + 0x18 + uVar27 * 4);
          fVar20 = pfVar7[1];
          fVar21 = pfVar7[2];
          fVar22 = pfVar7[3];
          pfVar1 = (float *)(param_1 + uVar27 * 4);
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar2 = (float *)(param_2 + uVar27 * 4);
          *pfVar2 = (*pfVar5 + *pfVar7) * fVar8 + (*pfVar4 + *pfVar6) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar14 + fVar20) * fVar8 + (fVar11 + fVar17) * fVar9 + fVar23 * fVar10;
          pfVar2[2] = (fVar15 + fVar21) * fVar8 + (fVar12 + fVar18) * fVar9 + fVar24 * fVar10;
          pfVar2[3] = (fVar16 + fVar22) * fVar8 + (fVar13 + fVar19) * fVar9 + fVar25 * fVar10;
          pfVar1 = (float *)(param_1 + 0x28 + uVar27 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0x1c + uVar27 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 4 + uVar27 * 4);
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -8 + uVar27 * 4);
          fVar20 = pfVar5[1];
          fVar21 = pfVar5[2];
          fVar22 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x10 + uVar27 * 4);
          fVar23 = pfVar6[1];
          fVar24 = pfVar6[2];
          fVar25 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar27 * 4);
          *pfVar7 = (*pfVar1 + *pfVar5) * fVar8 + (*pfVar4 + *pfVar2) * fVar9 + *pfVar6 * fVar10;
          pfVar7[1] = (fVar11 + fVar20) * fVar8 + (fVar17 + fVar14) * fVar9 + fVar23 * fVar10;
          pfVar7[2] = (fVar12 + fVar21) * fVar8 + (fVar18 + fVar15) * fVar9 + fVar24 * fVar10;
          pfVar7[3] = (fVar13 + fVar22) * fVar8 + (fVar19 + fVar16) * fVar9 + fVar25 * fVar10;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar28);
      }
      if (uVar29 < uVar28 + 1) {
        return;
      }
      uVar29 = uVar29 - uVar28;
      if ((longlong)uVar29 < 4) {
        FUN_140652757(fVar10,fVar8,0,uVar28,CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc),
                      CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da),CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc),
                      CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
        return;
      }
      uVar26 = 0;
      uVar27 = uVar29 & 0xfffffffffffffffc;
      do {
        lVar3 = uVar26 + uVar28;
        pfVar4 = (float *)(param_1 + -0xc + lVar3 * 4);
        fVar11 = pfVar4[1];
        fVar12 = pfVar4[2];
        fVar13 = pfVar4[3];
        pfVar5 = (float *)(param_1 + -0x18 + lVar3 * 4);
        fVar14 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar16 = pfVar5[3];
        pfVar6 = (float *)(param_1 + 0xc + lVar3 * 4);
        fVar17 = pfVar6[1];
        fVar18 = pfVar6[2];
        fVar19 = pfVar6[3];
        pfVar7 = (float *)(param_1 + uVar28 * 4 + 0x18 + uVar26 * 4);
        fVar20 = pfVar7[1];
        fVar21 = pfVar7[2];
        fVar22 = pfVar7[3];
        pfVar1 = (float *)(param_1 + lVar3 * 4);
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar25 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar28 * 4 + uVar26 * 4);
        *pfVar2 = (*pfVar5 + *pfVar7) * fVar8 + (*pfVar4 + *pfVar6) * fVar9 + *pfVar1 * fVar10;
        pfVar2[1] = (fVar14 + fVar20) * fVar8 + (fVar11 + fVar17) * fVar9 + fVar23 * fVar10;
        pfVar2[2] = (fVar15 + fVar21) * fVar8 + (fVar12 + fVar18) * fVar9 + fVar24 * fVar10;
        pfVar2[3] = (fVar16 + fVar22) * fVar8 + (fVar13 + fVar19) * fVar9 + fVar25 * fVar10;
        uVar26 = uVar26 + 4;
      } while (uVar26 < uVar27);
      goto code_r0x000140652757;
    }
  }
LAB_1406527cf:
  uVar28 = 0;
  uVar27 = 0;
  if (uVar29 == 0) {
    return;
  }
code_r0x000140652757:
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

