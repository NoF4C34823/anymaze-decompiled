
void FUN_1407b69e0(longlong param_1,longlong param_2,ulonglong param_3,float *param_4)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
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
  
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar32 = param_1 + 8U & 0xf;
    if (uVar32 != 0) {
      if ((param_1 + 8U & 3) != 0) goto LAB_1407b6d4b;
      uVar32 = 0x10 - uVar32 >> 2;
    }
    if ((longlong)(uVar32 + 8) <= (longlong)param_3) {
      uVar30 = 0;
      uVar31 = param_3 - (param_3 - uVar32 & 7);
      if (uVar32 != 0) {
        do {
          *(float *)(param_2 + uVar30 * 4) =
               (*(float *)(param_1 + -8 + uVar30 * 4) + *(float *)(param_1 + 8 + uVar30 * 4)) *
               fVar8 + (*(float *)(param_1 + -4 + uVar30 * 4) + *(float *)(param_1 + 4 + uVar30 * 4)
                       ) * fVar9 + *(float *)(param_1 + uVar30 * 4) * fVar10;
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar32);
      }
      if ((param_2 + uVar32 * 4 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(param_1 + 4 + uVar32 * 4);
          fVar15 = pfVar4[1];
          fVar16 = pfVar4[2];
          fVar17 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -4 + uVar32 * 4);
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar6 = (float *)(param_1 + -8 + uVar32 * 4);
          fVar21 = pfVar6[1];
          fVar22 = pfVar6[2];
          fVar23 = pfVar6[3];
          pfVar1 = (float *)(param_1 + uVar32 * 4);
          fVar24 = pfVar1[1];
          fVar25 = pfVar1[2];
          fVar26 = pfVar1[3];
          pfVar7 = (float *)(param_1 + 8 + uVar32 * 4);
          fVar27 = pfVar7[1];
          fVar28 = pfVar7[2];
          fVar29 = pfVar7[3];
          pfVar2 = (float *)(param_2 + uVar32 * 4);
          *pfVar2 = (*pfVar6 + *pfVar7) * fVar8 + (*pfVar5 + *pfVar4) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar21 + fVar27) * fVar8 + (fVar18 + fVar15) * fVar9 + fVar24 * fVar10;
          pfVar2[2] = (fVar22 + fVar28) * fVar8 + (fVar19 + fVar16) * fVar9 + fVar25 * fVar10;
          pfVar2[3] = (fVar23 + fVar29) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar26 * fVar10;
          pfVar1 = (float *)(param_1 + 0x14 + uVar32 * 4);
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0xc + uVar32 * 4);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 8 + uVar32 * 4);
          fVar21 = pfVar4[1];
          fVar22 = pfVar4[2];
          fVar23 = pfVar4[3];
          pfVar5 = (float *)(param_1 + 0x10 + uVar32 * 4);
          fVar24 = pfVar5[1];
          fVar25 = pfVar5[2];
          fVar26 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x18 + uVar32 * 4);
          fVar27 = pfVar6[1];
          fVar28 = pfVar6[2];
          fVar29 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar32 * 4);
          *pfVar7 = (*pfVar4 + *pfVar6) * fVar8 + (*pfVar2 + *pfVar1) * fVar9 + *pfVar5 * fVar10;
          pfVar7[1] = (fVar21 + fVar27) * fVar8 + (fVar18 + fVar15) * fVar9 + fVar24 * fVar10;
          pfVar7[2] = (fVar22 + fVar28) * fVar8 + (fVar19 + fVar16) * fVar9 + fVar25 * fVar10;
          pfVar7[3] = (fVar23 + fVar29) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar26 * fVar10;
          uVar32 = uVar32 + 8;
        } while (uVar32 < uVar31);
      }
      else {
        do {
          pfVar4 = (float *)(param_1 + 4 + uVar32 * 4);
          fVar15 = pfVar4[1];
          fVar16 = pfVar4[2];
          fVar17 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -4 + uVar32 * 4);
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar6 = (float *)(param_1 + -8 + uVar32 * 4);
          fVar21 = pfVar6[1];
          fVar22 = pfVar6[2];
          fVar23 = pfVar6[3];
          pfVar1 = (float *)(param_1 + uVar32 * 4);
          fVar24 = pfVar1[1];
          fVar25 = pfVar1[2];
          fVar26 = pfVar1[3];
          pfVar7 = (float *)(param_1 + 8 + uVar32 * 4);
          fVar27 = pfVar7[1];
          fVar28 = pfVar7[2];
          fVar29 = pfVar7[3];
          pfVar2 = (float *)(param_2 + uVar32 * 4);
          *pfVar2 = (*pfVar6 + *pfVar7) * fVar8 + (*pfVar5 + *pfVar4) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar21 + fVar27) * fVar8 + (fVar18 + fVar15) * fVar9 + fVar24 * fVar10;
          pfVar2[2] = (fVar22 + fVar28) * fVar8 + (fVar19 + fVar16) * fVar9 + fVar25 * fVar10;
          pfVar2[3] = (fVar23 + fVar29) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar26 * fVar10;
          pfVar1 = (float *)(param_1 + 0x14 + uVar32 * 4);
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0xc + uVar32 * 4);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 8 + uVar32 * 4);
          fVar21 = pfVar4[1];
          fVar22 = pfVar4[2];
          fVar23 = pfVar4[3];
          pfVar5 = (float *)(param_1 + 0x10 + uVar32 * 4);
          fVar24 = pfVar5[1];
          fVar25 = pfVar5[2];
          fVar26 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x18 + uVar32 * 4);
          fVar27 = pfVar6[1];
          fVar28 = pfVar6[2];
          fVar29 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar32 * 4);
          *pfVar7 = (*pfVar4 + *pfVar6) * fVar8 + (*pfVar2 + *pfVar1) * fVar9 + *pfVar5 * fVar10;
          pfVar7[1] = (fVar21 + fVar27) * fVar8 + (fVar18 + fVar15) * fVar9 + fVar24 * fVar10;
          pfVar7[2] = (fVar22 + fVar28) * fVar8 + (fVar19 + fVar16) * fVar9 + fVar25 * fVar10;
          pfVar7[3] = (fVar23 + fVar29) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar26 * fVar10;
          uVar32 = uVar32 + 8;
        } while (uVar32 < uVar31);
      }
      if (param_3 < uVar31 + 1) {
        return;
      }
      param_3 = param_3 - uVar31;
      if ((longlong)param_3 < 2) {
        FUN_1407b6cdd(fVar10,uVar31,param_3,fVar9,CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc),
                      CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da),CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc),
                      CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
        return;
      }
      uVar30 = 0;
      uVar32 = param_3 & 0xfffffffffffffffe;
      lVar3 = param_1 + uVar31 * 4;
      lVar33 = 0;
      do {
        uVar11 = *(undefined8 *)(lVar33 + -8 + lVar3);
        uVar30 = uVar30 + 2;
        uVar12 = *(undefined8 *)(lVar33 + 8 + lVar3);
        uVar13 = *(undefined8 *)(lVar33 + 4 + lVar3);
        uVar14 = *(undefined8 *)(lVar33 + -4 + lVar3);
        *(ulonglong *)(lVar33 + param_2 + uVar31 * 4) =
             CONCAT44(((float)((ulonglong)uVar11 >> 0x20) + (float)((ulonglong)uVar12 >> 0x20)) *
                      fVar8 + ((float)((ulonglong)uVar14 >> 0x20) +
                              (float)((ulonglong)uVar13 >> 0x20)) * fVar9 +
                      (float)((ulonglong)*(undefined8 *)(lVar33 + lVar3) >> 0x20) * fVar10,
                      ((float)uVar11 + (float)uVar12) * fVar8 +
                      ((float)uVar14 + (float)uVar13) * fVar9 +
                      (float)*(undefined8 *)(lVar33 + lVar3) * fVar10);
        lVar33 = lVar33 + 8;
      } while (uVar30 < uVar32);
      goto code_r0x0001407b6cdd;
    }
  }
LAB_1407b6d4b:
  uVar31 = 0;
  uVar32 = 0;
  if (param_3 == 0) {
    return;
  }
code_r0x0001407b6cdd:
  if (uVar32 < param_3) {
    param_1 = param_1 + uVar31 * 4;
    do {
      *(float *)(param_2 + uVar31 * 4 + uVar32 * 4) =
           (*(float *)(param_1 + -8 + uVar32 * 4) + *(float *)(param_1 + 8 + uVar32 * 4)) * fVar8 +
           (*(float *)(param_1 + -4 + uVar32 * 4) + *(float *)(param_1 + 4 + uVar32 * 4)) * fVar9 +
           *(float *)(param_1 + uVar32 * 4) * fVar10;
      uVar32 = uVar32 + 1;
    } while (uVar32 < param_3);
  }
  return;
}

