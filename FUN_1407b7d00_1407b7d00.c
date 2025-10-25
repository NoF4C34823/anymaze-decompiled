
void FUN_1407b7d00(longlong param_1,longlong param_2,longlong param_3,float *param_4)

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
  ulonglong uVar33;
  longlong lVar34;
  
  uVar31 = param_3 * 3;
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  if ((longlong)uVar31 < 1) {
    return;
  }
  if (7 < (longlong)uVar31) {
    uVar33 = param_1 + 0x18U & 0xf;
    if (uVar33 != 0) {
      if ((param_1 + 0x18U & 3) != 0) goto LAB_1407b806a;
      uVar33 = 0x10 - uVar33 >> 2;
    }
    if ((longlong)(uVar33 + 8) <= (longlong)uVar31) {
      uVar30 = 0;
      uVar32 = uVar31 - (uVar31 - uVar33 & 7);
      if (uVar33 != 0) {
        do {
          *(float *)(param_2 + uVar30 * 4) =
               (*(float *)(param_1 + -0x18 + uVar30 * 4) + *(float *)(param_1 + 0x18 + uVar30 * 4))
               * fVar8 + (*(float *)(param_1 + -0xc + uVar30 * 4) +
                         *(float *)(param_1 + 0xc + uVar30 * 4)) * fVar9 +
               *(float *)(param_1 + uVar30 * 4) * fVar10;
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar33);
      }
      if ((param_2 + uVar33 * 4 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(param_1 + -0xc + uVar33 * 4);
          fVar15 = pfVar4[1];
          fVar16 = pfVar4[2];
          fVar17 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -0x18 + uVar33 * 4);
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0xc + uVar33 * 4);
          fVar21 = pfVar6[1];
          fVar22 = pfVar6[2];
          fVar23 = pfVar6[3];
          pfVar7 = (float *)(param_1 + 0x18 + uVar33 * 4);
          fVar24 = pfVar7[1];
          fVar25 = pfVar7[2];
          fVar26 = pfVar7[3];
          pfVar1 = (float *)(param_1 + uVar33 * 4);
          fVar27 = pfVar1[1];
          fVar28 = pfVar1[2];
          fVar29 = pfVar1[3];
          pfVar2 = (float *)(param_2 + uVar33 * 4);
          *pfVar2 = (*pfVar5 + *pfVar7) * fVar8 + (*pfVar4 + *pfVar6) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar18 + fVar24) * fVar8 + (fVar15 + fVar21) * fVar9 + fVar27 * fVar10;
          pfVar2[2] = (fVar19 + fVar25) * fVar8 + (fVar16 + fVar22) * fVar9 + fVar28 * fVar10;
          pfVar2[3] = (fVar20 + fVar26) * fVar8 + (fVar17 + fVar23) * fVar9 + fVar29 * fVar10;
          pfVar1 = (float *)(param_1 + 0x28 + uVar33 * 4);
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0x1c + uVar33 * 4);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 4 + uVar33 * 4);
          fVar21 = pfVar4[1];
          fVar22 = pfVar4[2];
          fVar23 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -8 + uVar33 * 4);
          fVar24 = pfVar5[1];
          fVar25 = pfVar5[2];
          fVar26 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x10 + uVar33 * 4);
          fVar27 = pfVar6[1];
          fVar28 = pfVar6[2];
          fVar29 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar33 * 4);
          *pfVar7 = (*pfVar1 + *pfVar5) * fVar8 + (*pfVar4 + *pfVar2) * fVar9 + *pfVar6 * fVar10;
          pfVar7[1] = (fVar15 + fVar24) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar27 * fVar10;
          pfVar7[2] = (fVar16 + fVar25) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar28 * fVar10;
          pfVar7[3] = (fVar17 + fVar26) * fVar8 + (fVar23 + fVar20) * fVar9 + fVar29 * fVar10;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar32);
      }
      else {
        do {
          pfVar4 = (float *)(param_1 + -0xc + uVar33 * 4);
          fVar15 = pfVar4[1];
          fVar16 = pfVar4[2];
          fVar17 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -0x18 + uVar33 * 4);
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0xc + uVar33 * 4);
          fVar21 = pfVar6[1];
          fVar22 = pfVar6[2];
          fVar23 = pfVar6[3];
          pfVar7 = (float *)(param_1 + 0x18 + uVar33 * 4);
          fVar24 = pfVar7[1];
          fVar25 = pfVar7[2];
          fVar26 = pfVar7[3];
          pfVar1 = (float *)(param_1 + uVar33 * 4);
          fVar27 = pfVar1[1];
          fVar28 = pfVar1[2];
          fVar29 = pfVar1[3];
          pfVar2 = (float *)(param_2 + uVar33 * 4);
          *pfVar2 = (*pfVar5 + *pfVar7) * fVar8 + (*pfVar4 + *pfVar6) * fVar9 + *pfVar1 * fVar10;
          pfVar2[1] = (fVar18 + fVar24) * fVar8 + (fVar15 + fVar21) * fVar9 + fVar27 * fVar10;
          pfVar2[2] = (fVar19 + fVar25) * fVar8 + (fVar16 + fVar22) * fVar9 + fVar28 * fVar10;
          pfVar2[3] = (fVar20 + fVar26) * fVar8 + (fVar17 + fVar23) * fVar9 + fVar29 * fVar10;
          pfVar1 = (float *)(param_1 + 0x28 + uVar33 * 4);
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar2 = (float *)(param_1 + 0x1c + uVar33 * 4);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar4 = (float *)(param_1 + 4 + uVar33 * 4);
          fVar21 = pfVar4[1];
          fVar22 = pfVar4[2];
          fVar23 = pfVar4[3];
          pfVar5 = (float *)(param_1 + -8 + uVar33 * 4);
          fVar24 = pfVar5[1];
          fVar25 = pfVar5[2];
          fVar26 = pfVar5[3];
          pfVar6 = (float *)(param_1 + 0x10 + uVar33 * 4);
          fVar27 = pfVar6[1];
          fVar28 = pfVar6[2];
          fVar29 = pfVar6[3];
          pfVar7 = (float *)(param_2 + 0x10 + uVar33 * 4);
          *pfVar7 = (*pfVar1 + *pfVar5) * fVar8 + (*pfVar4 + *pfVar2) * fVar9 + *pfVar6 * fVar10;
          pfVar7[1] = (fVar15 + fVar24) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar27 * fVar10;
          pfVar7[2] = (fVar16 + fVar25) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar28 * fVar10;
          pfVar7[3] = (fVar17 + fVar26) * fVar8 + (fVar23 + fVar20) * fVar9 + fVar29 * fVar10;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar32);
      }
      if (uVar31 < uVar32 + 1) {
        return;
      }
      uVar31 = uVar31 - uVar32;
      if ((longlong)uVar31 < 2) {
        FUN_1407b7ffd();
        return;
      }
      uVar30 = 0;
      uVar33 = uVar31 & 0xfffffffffffffffe;
      lVar3 = param_1 + uVar32 * 4;
      lVar34 = 0;
      do {
        uVar11 = *(undefined8 *)(lVar34 + -0x18 + lVar3);
        uVar30 = uVar30 + 2;
        uVar12 = *(undefined8 *)(lVar34 + 0x18 + lVar3);
        uVar13 = *(undefined8 *)(lVar34 + 0xc + lVar3);
        uVar14 = *(undefined8 *)(lVar34 + -0xc + lVar3);
        *(ulonglong *)(lVar34 + param_2 + uVar32 * 4) =
             CONCAT44(((float)((ulonglong)uVar11 >> 0x20) + (float)((ulonglong)uVar12 >> 0x20)) *
                      fVar8 + ((float)((ulonglong)uVar14 >> 0x20) +
                              (float)((ulonglong)uVar13 >> 0x20)) * fVar9 +
                      (float)((ulonglong)*(undefined8 *)(lVar34 + lVar3) >> 0x20) * fVar10,
                      ((float)uVar11 + (float)uVar12) * fVar8 +
                      ((float)uVar14 + (float)uVar13) * fVar9 +
                      (float)*(undefined8 *)(lVar34 + lVar3) * fVar10);
        lVar34 = lVar34 + 8;
      } while (uVar30 < uVar33);
      goto code_r0x0001407b7ffd;
    }
  }
LAB_1407b806a:
  uVar32 = 0;
  uVar33 = 0;
  if (uVar31 == 0) {
    return;
  }
code_r0x0001407b7ffd:
  if (uVar33 < uVar31) {
    param_1 = param_1 + uVar32 * 4;
    do {
      *(float *)(param_2 + uVar32 * 4 + uVar33 * 4) =
           (*(float *)(param_1 + -0x18 + uVar33 * 4) + *(float *)(param_1 + 0x18 + uVar33 * 4)) *
           fVar8 + (*(float *)(param_1 + -0xc + uVar33 * 4) + *(float *)(param_1 + 0xc + uVar33 * 4)
                   ) * fVar9 + *(float *)(param_1 + uVar33 * 4) * fVar10;
      uVar33 = uVar33 + 1;
    } while (uVar33 < uVar31);
  }
  return;
}

