
void FUN_1405e7c20(longlong param_1,float *param_2,ulonglong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
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
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  float *pfVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  
  lVar39 = (longlong)(param_5 >> 1);
  fVar7 = *param_4;
  lVar29 = param_1 + lVar39 * -4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_1405e8679:
      uVar30 = 0;
    }
    else {
      uVar35 = (ulonglong)param_2 & 0xf;
      if (uVar35 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_1405e8679;
        uVar35 = 0x10 - uVar35 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar35 + 8)) goto LAB_1405e8679;
      lVar34 = lVar39 * -4 + param_1;
      uVar32 = 0;
      uVar30 = param_3 - (param_3 - uVar35 & 7);
      lVar36 = param_1 + lVar39 * 4;
      if (uVar35 != 0) {
        do {
          param_2[uVar32] =
               (*(float *)(lVar34 + uVar32 * 4) + *(float *)(lVar36 + uVar32 * 4)) * fVar7;
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar35);
      }
      if ((lVar36 + uVar35 * 4 & 0xf) == 0) {
        do {
          pfVar5 = (float *)(lVar34 + uVar35 * 4);
          fVar8 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar41 = (float *)(lVar34 + 0x10 + uVar35 * 4);
          fVar11 = *pfVar41;
          fVar12 = pfVar41[1];
          fVar13 = pfVar41[2];
          fVar14 = pfVar41[3];
          pfVar41 = (float *)(lVar36 + uVar35 * 4);
          fVar15 = pfVar41[1];
          fVar16 = pfVar41[2];
          fVar17 = pfVar41[3];
          pfVar1 = (float *)(lVar36 + 0x10 + uVar35 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = (*pfVar5 + *pfVar41) * fVar7;
          pfVar1[1] = (fVar8 + fVar15) * fVar7;
          pfVar1[2] = (fVar9 + fVar16) * fVar7;
          pfVar1[3] = (fVar10 + fVar17) * fVar7;
          pfVar41 = param_2 + uVar35 + 4;
          *pfVar41 = (fVar11 + fVar18) * fVar7;
          pfVar41[1] = (fVar12 + fVar19) * fVar7;
          pfVar41[2] = (fVar13 + fVar20) * fVar7;
          pfVar41[3] = (fVar14 + fVar21) * fVar7;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar30);
      }
      else {
        do {
          pfVar5 = (float *)(lVar34 + uVar35 * 4);
          fVar8 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar41 = (float *)(lVar34 + 0x10 + uVar35 * 4);
          fVar11 = *pfVar41;
          fVar12 = pfVar41[1];
          fVar13 = pfVar41[2];
          fVar14 = pfVar41[3];
          pfVar41 = (float *)(lVar36 + uVar35 * 4);
          fVar15 = pfVar41[1];
          fVar16 = pfVar41[2];
          fVar17 = pfVar41[3];
          pfVar1 = (float *)(lVar36 + 0x10 + uVar35 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = (*pfVar5 + *pfVar41) * fVar7;
          pfVar1[1] = (fVar8 + fVar15) * fVar7;
          pfVar1[2] = (fVar9 + fVar16) * fVar7;
          pfVar1[3] = (fVar10 + fVar17) * fVar7;
          pfVar41 = param_2 + uVar35 + 4;
          *pfVar41 = (fVar11 + fVar18) * fVar7;
          pfVar41[1] = (fVar12 + fVar19) * fVar7;
          pfVar41[2] = (fVar13 + fVar20) * fVar7;
          pfVar41[3] = (fVar14 + fVar21) * fVar7;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar30);
      }
    }
    uVar35 = 0;
    if (uVar30 + 1 <= param_3) {
      do {
        param_2[uVar30 + uVar35] =
             (*(float *)(lVar39 * -4 + param_1 + uVar30 * 4 + uVar35 * 4) +
             *(float *)(param_1 + lVar39 * 4 + uVar30 * 4 + uVar35 * 4)) * fVar7;
        uVar35 = uVar35 + 1;
      } while (uVar35 < param_3 - uVar30);
    }
  }
  if (1 < lVar39) {
    lVar36 = 1;
    lVar34 = 0;
    if (lVar39 - 1U >> 1 != 0) {
      uVar30 = (ulonglong)param_2 & 0xf;
      lVar36 = param_1 + lVar39 * 4;
      lVar33 = lVar39 * -4 + param_1;
      uVar35 = 0;
      do {
        uVar32 = uVar35;
        fVar7 = *(float *)(lVar34 + 4 + (longlong)param_4);
        fVar8 = *(float *)(lVar34 + 8 + (longlong)param_4);
        lVar29 = lVar33 + 8;
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 8) ||
             (((uVar35 = uVar30, uVar30 != 0 &&
               (uVar35 = 0x10 - uVar30 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)param_3 < (longlong)(uVar35 + 8))))) {
            uVar31 = 0;
            if (param_3 != 0) {
              uVar42 = 0;
              uVar35 = param_3;
              goto LAB_1405e8150;
            }
          }
          else {
            uVar42 = 0;
            uVar31 = param_3 - (param_3 - uVar35 & 7);
            lVar37 = lVar36;
            lVar38 = lVar33;
            pfVar41 = param_2;
            if (uVar35 != 0) {
              do {
                uVar42 = uVar42 + 1;
                *pfVar41 = (*(float *)(lVar38 + 4) + *(float *)(lVar37 + -4)) * fVar7 + *pfVar41 +
                           (*(float *)(lVar38 + 8) + *(float *)(lVar37 + -8)) * fVar8;
                lVar37 = lVar37 + 4;
                lVar38 = lVar38 + 4;
                pfVar41 = pfVar41 + 1;
              } while (uVar42 < uVar35);
            }
            if ((lVar36 + -4 + uVar35 * 4 & 0xf) == 0) {
              lVar38 = uVar35 * 4;
              lVar37 = lVar34 + uVar35 * 4;
              do {
                pfVar5 = (float *)(lVar38 + -8 + lVar36);
                fVar9 = pfVar5[1];
                fVar10 = pfVar5[2];
                fVar11 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + -4 + lVar36);
                fVar12 = pfVar2[1];
                fVar13 = pfVar2[2];
                fVar14 = pfVar2[3];
                uVar35 = uVar35 + 8;
                lVar40 = lVar39 * -4 + param_1;
                pfVar3 = (float *)(lVar37 + 8 + lVar40);
                fVar15 = pfVar3[1];
                fVar16 = pfVar3[2];
                fVar17 = pfVar3[3];
                pfVar4 = (float *)(lVar37 + 4 + lVar40);
                fVar18 = pfVar4[1];
                fVar19 = pfVar4[2];
                fVar20 = pfVar4[3];
                pfVar41 = (float *)(lVar38 + (longlong)param_2);
                fVar21 = pfVar41[1];
                fVar22 = pfVar41[2];
                fVar23 = pfVar41[3];
                pfVar1 = (float *)(lVar38 + (longlong)param_2);
                *pfVar1 = (*pfVar4 + *pfVar2) * fVar7 + *pfVar41 + (*pfVar3 + *pfVar5) * fVar8;
                pfVar1[1] = (fVar18 + fVar12) * fVar7 + fVar21 + (fVar15 + fVar9) * fVar8;
                pfVar1[2] = (fVar19 + fVar13) * fVar7 + fVar22 + (fVar16 + fVar10) * fVar8;
                pfVar1[3] = (fVar20 + fVar14) * fVar7 + fVar23 + (fVar17 + fVar11) * fVar8;
                pfVar41 = (float *)(lVar37 + 0x14 + lVar40);
                fVar9 = pfVar41[1];
                fVar10 = pfVar41[2];
                fVar11 = pfVar41[3];
                pfVar1 = (float *)(lVar38 + 0xc + lVar36);
                fVar12 = pfVar1[1];
                fVar13 = pfVar1[2];
                fVar14 = pfVar1[3];
                pfVar5 = (float *)(lVar37 + 0x18 + lVar40);
                fVar15 = pfVar5[1];
                fVar16 = pfVar5[2];
                fVar17 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + 8 + lVar36);
                fVar18 = pfVar2[1];
                fVar19 = pfVar2[2];
                fVar20 = pfVar2[3];
                pfVar3 = (float *)(lVar38 + 0x10 + (longlong)param_2);
                fVar21 = pfVar3[1];
                fVar22 = pfVar3[2];
                fVar23 = pfVar3[3];
                lVar37 = lVar37 + 0x20;
                pfVar4 = (float *)(lVar38 + 0x10 + (longlong)param_2);
                *pfVar4 = (*pfVar41 + *pfVar1) * fVar7 + *pfVar3 + (*pfVar5 + *pfVar2) * fVar8;
                pfVar4[1] = (fVar9 + fVar12) * fVar7 + fVar21 + (fVar15 + fVar18) * fVar8;
                pfVar4[2] = (fVar10 + fVar13) * fVar7 + fVar22 + (fVar16 + fVar19) * fVar8;
                pfVar4[3] = (fVar11 + fVar14) * fVar7 + fVar23 + (fVar17 + fVar20) * fVar8;
                lVar38 = lVar38 + 0x20;
              } while (uVar35 < uVar31);
            }
            else {
              lVar38 = uVar35 * 4;
              lVar37 = lVar34 + uVar35 * 4;
              do {
                pfVar5 = (float *)(lVar38 + -8 + lVar36);
                fVar9 = pfVar5[1];
                fVar10 = pfVar5[2];
                fVar11 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + -4 + lVar36);
                fVar12 = pfVar2[1];
                fVar13 = pfVar2[2];
                fVar14 = pfVar2[3];
                uVar35 = uVar35 + 8;
                lVar40 = lVar39 * -4 + param_1;
                pfVar3 = (float *)(lVar37 + 8 + lVar40);
                fVar15 = pfVar3[1];
                fVar16 = pfVar3[2];
                fVar17 = pfVar3[3];
                pfVar4 = (float *)(lVar37 + 4 + lVar40);
                fVar18 = pfVar4[1];
                fVar19 = pfVar4[2];
                fVar20 = pfVar4[3];
                pfVar41 = (float *)(lVar38 + (longlong)param_2);
                fVar21 = pfVar41[1];
                fVar22 = pfVar41[2];
                fVar23 = pfVar41[3];
                pfVar1 = (float *)(lVar38 + (longlong)param_2);
                *pfVar1 = (*pfVar4 + *pfVar2) * fVar7 + *pfVar41 + (*pfVar3 + *pfVar5) * fVar8;
                pfVar1[1] = (fVar18 + fVar12) * fVar7 + fVar21 + (fVar15 + fVar9) * fVar8;
                pfVar1[2] = (fVar19 + fVar13) * fVar7 + fVar22 + (fVar16 + fVar10) * fVar8;
                pfVar1[3] = (fVar20 + fVar14) * fVar7 + fVar23 + (fVar17 + fVar11) * fVar8;
                pfVar41 = (float *)(lVar37 + 0x14 + lVar40);
                fVar9 = pfVar41[1];
                fVar10 = pfVar41[2];
                fVar11 = pfVar41[3];
                pfVar1 = (float *)(lVar38 + 0xc + lVar36);
                fVar12 = pfVar1[1];
                fVar13 = pfVar1[2];
                fVar14 = pfVar1[3];
                pfVar5 = (float *)(lVar37 + 0x18 + lVar40);
                fVar15 = pfVar5[1];
                fVar16 = pfVar5[2];
                fVar17 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + 8 + lVar36);
                fVar18 = pfVar2[1];
                fVar19 = pfVar2[2];
                fVar20 = pfVar2[3];
                pfVar3 = (float *)(lVar38 + 0x10 + (longlong)param_2);
                fVar21 = pfVar3[1];
                fVar22 = pfVar3[2];
                fVar23 = pfVar3[3];
                lVar37 = lVar37 + 0x20;
                pfVar4 = (float *)(lVar38 + 0x10 + (longlong)param_2);
                *pfVar4 = (*pfVar41 + *pfVar1) * fVar7 + *pfVar3 + (*pfVar5 + *pfVar2) * fVar8;
                pfVar4[1] = (fVar9 + fVar12) * fVar7 + fVar21 + (fVar15 + fVar18) * fVar8;
                pfVar4[2] = (fVar10 + fVar13) * fVar7 + fVar22 + (fVar16 + fVar19) * fVar8;
                pfVar4[3] = (fVar11 + fVar14) * fVar7 + fVar23 + (fVar17 + fVar20) * fVar8;
                lVar38 = lVar38 + 0x20;
              } while (uVar35 < uVar31);
            }
            if (uVar31 + 1 <= param_3) {
              uVar35 = param_3 - uVar31;
              if ((longlong)uVar35 < 4) {
                uVar42 = 0;
              }
              else {
                uVar43 = 0;
                uVar42 = uVar35 & 0xfffffffffffffffc;
                pfVar41 = param_2 + uVar31;
                lVar40 = 0;
                lVar37 = lVar39 * -4 + param_1 + uVar31 * 4;
                lVar38 = lVar34;
                do {
                  pfVar1 = (float *)(lVar38 + 4 + lVar37);
                  fVar9 = pfVar1[1];
                  fVar10 = pfVar1[2];
                  fVar11 = pfVar1[3];
                  pfVar5 = (float *)(lVar38 + 8 + lVar37);
                  fVar12 = pfVar5[1];
                  fVar13 = pfVar5[2];
                  fVar14 = pfVar5[3];
                  uVar43 = uVar43 + 4;
                  lVar6 = lVar36 + uVar31 * 4;
                  pfVar2 = (float *)(lVar40 + -4 + lVar6);
                  fVar15 = pfVar2[1];
                  fVar16 = pfVar2[2];
                  fVar17 = pfVar2[3];
                  lVar38 = lVar38 + 0x10;
                  pfVar3 = (float *)(lVar40 + -8 + lVar6);
                  fVar18 = pfVar3[1];
                  fVar19 = pfVar3[2];
                  fVar20 = pfVar3[3];
                  lVar40 = lVar40 + 0x10;
                  *pfVar41 = (*pfVar1 + *pfVar2) * fVar7 + *pfVar41 + (*pfVar5 + *pfVar3) * fVar8;
                  pfVar41[1] = (fVar9 + fVar15) * fVar7 + pfVar41[1] + (fVar12 + fVar18) * fVar8;
                  pfVar41[2] = (fVar10 + fVar16) * fVar7 + pfVar41[2] + (fVar13 + fVar19) * fVar8;
                  pfVar41[3] = (fVar11 + fVar17) * fVar7 + pfVar41[3] + (fVar14 + fVar20) * fVar8;
                  pfVar41 = pfVar41 + 4;
                } while (uVar43 < uVar42);
              }
LAB_1405e8150:
              if (uVar42 < uVar35) {
                lVar37 = lVar33 + uVar31 * 4;
                lVar38 = lVar36 + uVar31 * 4;
                do {
                  param_2[uVar31 + uVar42] =
                       (*(float *)(lVar37 + 4 + uVar42 * 4) + *(float *)(lVar38 + -4 + uVar42 * 4))
                       * fVar7 + param_2[uVar31 + uVar42] +
                       (*(float *)(lVar37 + 8 + uVar42 * 4) + *(float *)(lVar38 + -8 + uVar42 * 4))
                       * fVar8;
                  uVar42 = uVar42 + 1;
                } while (uVar42 < uVar35);
              }
            }
          }
        }
        uVar35 = uVar32 + 1;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + 8;
        lVar36 = lVar36 + -8;
      } while (uVar35 < lVar39 - 1U >> 1);
      lVar36 = uVar32 + 2 + uVar35;
    }
    if (lVar39 != lVar36) {
      fVar7 = param_4[lVar36];
      lVar34 = lVar39 * -4;
      lVar29 = param_1 + lVar34 + lVar36 * 4;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_1405e8644:
          uVar30 = 0;
          if (param_3 == 0) goto LAB_1405e8464;
          uVar32 = 0;
          uVar35 = param_3;
        }
        else {
          uVar35 = (ulonglong)param_2 & 0xf;
          if (uVar35 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_1405e8644;
            uVar35 = 0x10 - uVar35 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar35 + 8)) goto LAB_1405e8644;
          lVar33 = param_1 + lVar34 + lVar36 * 4;
          lVar37 = lVar36 * -4;
          uVar30 = param_3 - (param_3 - uVar35 & 7);
          lVar38 = param_1 + lVar39 * 4 + lVar37;
          uVar32 = 0;
          if (uVar35 != 0) {
            do {
              param_2[uVar32] =
                   (*(float *)(lVar33 + uVar32 * 4) + *(float *)(lVar38 + uVar32 * 4)) * fVar7 +
                   param_2[uVar32];
              uVar32 = uVar32 + 1;
            } while (uVar32 < uVar35);
          }
          if ((lVar38 + uVar35 * 4 & 0xf) == 0) {
            lVar40 = lVar37 + lVar39 * 4 + param_1;
            lVar37 = lVar34 + lVar36 * 4 + param_1;
            do {
              pfVar2 = (float *)(lVar33 + uVar35 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar41 = (float *)(lVar37 + 0x10 + uVar35 * 4);
              fVar11 = *pfVar41;
              fVar12 = pfVar41[1];
              fVar13 = pfVar41[2];
              fVar14 = pfVar41[3];
              pfVar41 = (float *)(lVar38 + uVar35 * 4);
              fVar15 = pfVar41[1];
              fVar16 = pfVar41[2];
              fVar17 = pfVar41[3];
              pfVar1 = (float *)(lVar40 + 0x10 + uVar35 * 4);
              fVar18 = *pfVar1;
              fVar19 = pfVar1[1];
              fVar20 = pfVar1[2];
              fVar21 = pfVar1[3];
              pfVar1 = param_2 + uVar35;
              fVar22 = pfVar1[1];
              fVar23 = pfVar1[2];
              fVar24 = pfVar1[3];
              pfVar5 = param_2 + uVar35 + 4;
              fVar25 = *pfVar5;
              fVar26 = pfVar5[1];
              fVar27 = pfVar5[2];
              fVar28 = pfVar5[3];
              pfVar5 = param_2 + uVar35;
              *pfVar5 = (*pfVar2 + *pfVar41) * fVar7 + *pfVar1;
              pfVar5[1] = (fVar8 + fVar15) * fVar7 + fVar22;
              pfVar5[2] = (fVar9 + fVar16) * fVar7 + fVar23;
              pfVar5[3] = (fVar10 + fVar17) * fVar7 + fVar24;
              pfVar41 = param_2 + uVar35 + 4;
              *pfVar41 = (fVar11 + fVar18) * fVar7 + fVar25;
              pfVar41[1] = (fVar12 + fVar19) * fVar7 + fVar26;
              pfVar41[2] = (fVar13 + fVar20) * fVar7 + fVar27;
              pfVar41[3] = (fVar14 + fVar21) * fVar7 + fVar28;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar30);
          }
          else {
            lVar40 = lVar37 + lVar39 * 4 + param_1;
            lVar37 = lVar34 + lVar36 * 4 + param_1;
            do {
              pfVar2 = (float *)(lVar33 + uVar35 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar41 = (float *)(lVar38 + uVar35 * 4);
              fVar11 = pfVar41[1];
              fVar12 = pfVar41[2];
              fVar13 = pfVar41[3];
              pfVar1 = (float *)(lVar37 + 0x10 + uVar35 * 4);
              fVar14 = *pfVar1;
              fVar15 = pfVar1[1];
              fVar16 = pfVar1[2];
              fVar17 = pfVar1[3];
              pfVar1 = (float *)(lVar40 + 0x10 + uVar35 * 4);
              fVar18 = *pfVar1;
              fVar19 = pfVar1[1];
              fVar20 = pfVar1[2];
              fVar21 = pfVar1[3];
              pfVar1 = param_2 + uVar35;
              fVar22 = pfVar1[1];
              fVar23 = pfVar1[2];
              fVar24 = pfVar1[3];
              pfVar5 = param_2 + uVar35 + 4;
              fVar25 = *pfVar5;
              fVar26 = pfVar5[1];
              fVar27 = pfVar5[2];
              fVar28 = pfVar5[3];
              pfVar5 = param_2 + uVar35;
              *pfVar5 = (*pfVar2 + *pfVar41) * fVar7 + *pfVar1;
              pfVar5[1] = (fVar8 + fVar11) * fVar7 + fVar22;
              pfVar5[2] = (fVar9 + fVar12) * fVar7 + fVar23;
              pfVar5[3] = (fVar10 + fVar13) * fVar7 + fVar24;
              pfVar41 = param_2 + uVar35 + 4;
              *pfVar41 = (fVar14 + fVar18) * fVar7 + fVar25;
              pfVar41[1] = (fVar15 + fVar19) * fVar7 + fVar26;
              pfVar41[2] = (fVar16 + fVar20) * fVar7 + fVar27;
              pfVar41[3] = (fVar17 + fVar21) * fVar7 + fVar28;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar30);
          }
          if (param_3 < uVar30 + 1) goto LAB_1405e8464;
          uVar35 = param_3 - uVar30;
          if ((longlong)uVar35 < 4) {
            uVar32 = 0;
          }
          else {
            uVar31 = 0;
            uVar32 = uVar35 & 0xfffffffffffffffc;
            do {
              pfVar41 = (float *)(lVar37 + uVar30 * 4 + uVar31 * 4);
              fVar8 = pfVar41[1];
              fVar9 = pfVar41[2];
              fVar10 = pfVar41[3];
              pfVar1 = (float *)(lVar40 + uVar30 * 4 + uVar31 * 4);
              fVar11 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar5 = param_2 + uVar30 + uVar31;
              fVar14 = pfVar5[1];
              fVar15 = pfVar5[2];
              fVar16 = pfVar5[3];
              pfVar2 = param_2 + uVar30 + uVar31;
              *pfVar2 = (*pfVar41 + *pfVar1) * fVar7 + *pfVar5;
              pfVar2[1] = (fVar8 + fVar11) * fVar7 + fVar14;
              pfVar2[2] = (fVar9 + fVar12) * fVar7 + fVar15;
              pfVar2[3] = (fVar10 + fVar13) * fVar7 + fVar16;
              uVar31 = uVar31 + 4;
            } while (uVar31 < uVar32);
          }
        }
        if (uVar32 < uVar35) {
          do {
            param_2[uVar30 + uVar32] =
                 (*(float *)(lVar34 + lVar36 * 4 + param_1 + uVar30 * 4 + uVar32 * 4) +
                 *(float *)(param_1 + lVar36 * -4 + lVar39 * 4 + uVar30 * 4 + uVar32 * 4)) * fVar7 +
                 param_2[uVar30 + uVar32];
            uVar32 = uVar32 + 1;
          } while (uVar32 < uVar35);
        }
      }
    }
  }
LAB_1405e8464:
  fVar7 = param_4[lVar39];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar35 = (ulonglong)param_2 & 0xf;
    if (uVar35 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_1405e8631;
      uVar35 = 0x10 - uVar35 >> 2;
    }
    if ((longlong)(uVar35 + 8) <= (longlong)param_3) {
      uVar32 = 0;
      uVar30 = param_3 - (param_3 - uVar35 & 7);
      if (uVar35 != 0) {
        do {
          param_2[uVar32] = *(float *)(lVar29 + 4 + uVar32 * 4) * fVar7 + param_2[uVar32];
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar35);
      }
      if ((lVar29 + 4 + uVar35 * 4 & 0xf) == 0) {
        do {
          pfVar5 = (float *)(lVar29 + 4 + uVar35 * 4);
          fVar8 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar41 = (float *)(lVar29 + 0x14 + uVar35 * 4);
          fVar11 = *pfVar41;
          fVar12 = pfVar41[1];
          fVar13 = pfVar41[2];
          fVar14 = pfVar41[3];
          pfVar41 = param_2 + uVar35;
          fVar15 = pfVar41[1];
          fVar16 = pfVar41[2];
          fVar17 = pfVar41[3];
          pfVar1 = param_2 + uVar35 + 4;
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = *pfVar5 * fVar7 + *pfVar41;
          pfVar1[1] = fVar8 * fVar7 + fVar15;
          pfVar1[2] = fVar9 * fVar7 + fVar16;
          pfVar1[3] = fVar10 * fVar7 + fVar17;
          pfVar41 = param_2 + uVar35 + 4;
          *pfVar41 = fVar11 * fVar7 + fVar18;
          pfVar41[1] = fVar12 * fVar7 + fVar19;
          pfVar41[2] = fVar13 * fVar7 + fVar20;
          pfVar41[3] = fVar14 * fVar7 + fVar21;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar30);
      }
      else {
        do {
          pfVar5 = (float *)(lVar29 + 4 + uVar35 * 4);
          fVar8 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar41 = (float *)(lVar29 + 0x14 + uVar35 * 4);
          fVar11 = *pfVar41;
          fVar12 = pfVar41[1];
          fVar13 = pfVar41[2];
          fVar14 = pfVar41[3];
          pfVar41 = param_2 + uVar35;
          fVar15 = pfVar41[1];
          fVar16 = pfVar41[2];
          fVar17 = pfVar41[3];
          pfVar1 = param_2 + uVar35 + 4;
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = *pfVar5 * fVar7 + *pfVar41;
          pfVar1[1] = fVar8 * fVar7 + fVar15;
          pfVar1[2] = fVar9 * fVar7 + fVar16;
          pfVar1[3] = fVar10 * fVar7 + fVar17;
          pfVar41 = param_2 + uVar35 + 4;
          *pfVar41 = fVar11 * fVar7 + fVar18;
          pfVar41[1] = fVar12 * fVar7 + fVar19;
          pfVar41[2] = fVar13 * fVar7 + fVar20;
          pfVar41[3] = fVar14 * fVar7 + fVar21;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar30);
      }
      if (param_3 < uVar30 + 1) {
        return;
      }
      param_3 = param_3 - uVar30;
      if ((longlong)param_3 < 4) {
        uVar35 = 0;
      }
      else {
        uVar32 = 0;
        uVar35 = param_3 & 0xfffffffffffffffc;
        do {
          pfVar5 = (float *)(lVar29 + uVar30 * 4 + 4 + uVar32 * 4);
          fVar8 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar41 = param_2 + uVar30 + uVar32;
          fVar11 = pfVar41[1];
          fVar12 = pfVar41[2];
          fVar13 = pfVar41[3];
          pfVar1 = param_2 + uVar30 + uVar32;
          *pfVar1 = *pfVar5 * fVar7 + *pfVar41;
          pfVar1[1] = fVar8 * fVar7 + fVar11;
          pfVar1[2] = fVar9 * fVar7 + fVar12;
          pfVar1[3] = fVar10 * fVar7 + fVar13;
          uVar32 = uVar32 + 4;
        } while (uVar32 < uVar35);
      }
      goto LAB_1405e85d9;
    }
  }
LAB_1405e8631:
  uVar30 = 0;
  uVar35 = 0;
  if (param_3 == 0) {
    return;
  }
LAB_1405e85d9:
  if (uVar35 < param_3) {
    do {
      param_2[uVar30 + uVar35] =
           *(float *)(lVar29 + uVar30 * 4 + 4 + uVar35 * 4) * fVar7 + param_2[uVar30 + uVar35];
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_3);
  }
  return;
}

