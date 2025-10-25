
void FUN_14016f180(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5)

{
  float *pfVar1;
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
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  
  lVar28 = (longlong)(param_5 >> 1);
  fVar6 = *param_4;
  uVar39 = param_3 * 3;
  lVar38 = lVar28 * -0xc + param_1;
  if (0 < (longlong)uVar39) {
    if ((longlong)uVar39 < 8) {
LAB_14016fc18:
      uVar29 = 0;
    }
    else {
      uVar33 = (ulonglong)param_2 & 0xf;
      if (uVar33 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_14016fc18;
        uVar33 = 0x10 - uVar33 >> 2;
      }
      if ((longlong)uVar39 < (longlong)(uVar33 + 8)) goto LAB_14016fc18;
      uVar31 = 0;
      uVar29 = uVar39 - (uVar39 - uVar33 & 7);
      lVar34 = param_1 + lVar28 * 0xc;
      lVar32 = lVar28 * -0xc + param_1;
      if (uVar33 != 0) {
        do {
          param_2[uVar31] =
               (*(float *)(lVar32 + uVar31 * 4) + *(float *)(lVar34 + uVar31 * 4)) * fVar6;
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar33);
      }
      if ((lVar34 + uVar33 * 4 & 0xf) == 0) {
        do {
          pfVar36 = (float *)(lVar32 + uVar33 * 4);
          fVar7 = pfVar36[1];
          fVar8 = pfVar36[2];
          fVar9 = pfVar36[3];
          pfVar1 = (float *)(lVar32 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar1 = (float *)(lVar34 + uVar33 * 4);
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = (float *)(lVar34 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar2 = param_2 + uVar33;
          *pfVar2 = (*pfVar36 + *pfVar1) * fVar6;
          pfVar2[1] = (fVar7 + fVar14) * fVar6;
          pfVar2[2] = (fVar8 + fVar15) * fVar6;
          pfVar2[3] = (fVar9 + fVar16) * fVar6;
          pfVar36 = param_2 + uVar33 + 4;
          *pfVar36 = (fVar10 + fVar17) * fVar6;
          pfVar36[1] = (fVar11 + fVar18) * fVar6;
          pfVar36[2] = (fVar12 + fVar19) * fVar6;
          pfVar36[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar29);
      }
      else {
        do {
          pfVar36 = (float *)(lVar32 + uVar33 * 4);
          fVar7 = pfVar36[1];
          fVar8 = pfVar36[2];
          fVar9 = pfVar36[3];
          pfVar1 = (float *)(lVar32 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar1 = (float *)(lVar34 + uVar33 * 4);
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = (float *)(lVar34 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar2 = param_2 + uVar33;
          *pfVar2 = (*pfVar36 + *pfVar1) * fVar6;
          pfVar2[1] = (fVar7 + fVar14) * fVar6;
          pfVar2[2] = (fVar8 + fVar15) * fVar6;
          pfVar2[3] = (fVar9 + fVar16) * fVar6;
          pfVar36 = param_2 + uVar33 + 4;
          *pfVar36 = (fVar10 + fVar17) * fVar6;
          pfVar36[1] = (fVar11 + fVar18) * fVar6;
          pfVar36[2] = (fVar12 + fVar19) * fVar6;
          pfVar36[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar29);
      }
    }
    uVar33 = 0;
    if (uVar29 + 1 <= uVar39) {
      do {
        param_2[uVar29 + uVar33] =
             (*(float *)(lVar28 * -0xc + param_1 + uVar29 * 4 + uVar33 * 4) +
             *(float *)(param_1 + lVar28 * 0xc + uVar29 * 4 + uVar33 * 4)) * fVar6;
        uVar33 = uVar33 + 1;
      } while (uVar33 < uVar39 - uVar29);
    }
  }
  if (1 < lVar28) {
    lVar34 = 1;
    lVar32 = 0;
    if (lVar28 - 1U >> 1 != 0) {
      uVar29 = (ulonglong)param_2 & 0xf;
      lVar34 = param_1 + lVar28 * 0xc;
      lVar30 = lVar28 * -0xc + param_1;
      uVar33 = 0;
      do {
        uVar31 = uVar33;
        lVar38 = lVar30 + 0x18;
        fVar6 = param_4[uVar31 * 2 + 1];
        fVar7 = param_4[uVar31 * 2 + 2];
        if (0 < (longlong)uVar39) {
          if (((longlong)uVar39 < 8) ||
             (((uVar33 = uVar29, uVar29 != 0 &&
               (uVar33 = 0x10 - uVar29 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)uVar39 < (longlong)(uVar33 + 8))))) {
            uVar43 = 0;
            if (uVar39 != 0) {
              uVar41 = 0;
              uVar33 = uVar39;
              goto LAB_14016f70d;
            }
          }
          else {
            uVar41 = 0;
            uVar43 = uVar39 - (uVar39 - uVar33 & 7);
            lVar35 = lVar34;
            lVar37 = lVar30;
            pfVar36 = param_2;
            if (uVar33 != 0) {
              do {
                uVar41 = uVar41 + 1;
                *pfVar36 = (*(float *)(lVar37 + 0xc) + *(float *)(lVar35 + -0xc)) * fVar6 + *pfVar36
                           + (*(float *)(lVar37 + 0x18) + *(float *)(lVar35 + -0x18)) * fVar7;
                lVar35 = lVar35 + 4;
                lVar37 = lVar37 + 4;
                pfVar36 = pfVar36 + 1;
              } while (uVar41 < uVar33);
            }
            if ((lVar34 + -0xc + uVar33 * 4 & 0xf) == 0) {
              lVar37 = uVar33 * 4;
              lVar35 = lVar32 + uVar33 * 4;
              do {
                pfVar2 = (float *)(lVar37 + -0x18 + lVar34);
                fVar8 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar10 = pfVar2[3];
                pfVar3 = (float *)(lVar37 + -0xc + lVar34);
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                uVar33 = uVar33 + 8;
                lVar42 = lVar28 * -0xc + param_1;
                pfVar4 = (float *)(lVar35 + 0x18 + lVar42);
                fVar14 = pfVar4[1];
                fVar15 = pfVar4[2];
                fVar16 = pfVar4[3];
                pfVar5 = (float *)(lVar35 + 0xc + lVar42);
                fVar17 = pfVar5[1];
                fVar18 = pfVar5[2];
                fVar19 = pfVar5[3];
                pfVar36 = (float *)(lVar37 + (longlong)param_2);
                fVar20 = pfVar36[1];
                fVar21 = pfVar36[2];
                fVar22 = pfVar36[3];
                pfVar1 = (float *)(lVar37 + (longlong)param_2);
                *pfVar1 = (*pfVar5 + *pfVar3) * fVar6 + *pfVar36 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar17 + fVar11) * fVar6 + fVar20 + (fVar14 + fVar8) * fVar7;
                pfVar1[2] = (fVar18 + fVar12) * fVar6 + fVar21 + (fVar15 + fVar9) * fVar7;
                pfVar1[3] = (fVar19 + fVar13) * fVar6 + fVar22 + (fVar16 + fVar10) * fVar7;
                pfVar36 = (float *)(lVar35 + 0x1c + lVar42);
                fVar8 = pfVar36[1];
                fVar9 = pfVar36[2];
                fVar10 = pfVar36[3];
                pfVar1 = (float *)(lVar37 + 4 + lVar34);
                fVar11 = pfVar1[1];
                fVar12 = pfVar1[2];
                fVar13 = pfVar1[3];
                pfVar2 = (float *)(lVar35 + 0x28 + lVar42);
                fVar14 = pfVar2[1];
                fVar15 = pfVar2[2];
                fVar16 = pfVar2[3];
                pfVar3 = (float *)(lVar37 + -8 + lVar34);
                fVar17 = pfVar3[1];
                fVar18 = pfVar3[2];
                fVar19 = pfVar3[3];
                pfVar4 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                fVar20 = pfVar4[1];
                fVar21 = pfVar4[2];
                fVar22 = pfVar4[3];
                lVar35 = lVar35 + 0x20;
                pfVar5 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                *pfVar5 = (*pfVar36 + *pfVar1) * fVar6 + *pfVar4 + (*pfVar2 + *pfVar3) * fVar7;
                pfVar5[1] = (fVar8 + fVar11) * fVar6 + fVar20 + (fVar14 + fVar17) * fVar7;
                pfVar5[2] = (fVar9 + fVar12) * fVar6 + fVar21 + (fVar15 + fVar18) * fVar7;
                pfVar5[3] = (fVar10 + fVar13) * fVar6 + fVar22 + (fVar16 + fVar19) * fVar7;
                lVar37 = lVar37 + 0x20;
              } while (uVar33 < uVar43);
            }
            else {
              lVar37 = uVar33 * 4;
              lVar35 = lVar32 + uVar33 * 4;
              do {
                pfVar2 = (float *)(lVar37 + -0x18 + lVar34);
                fVar8 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar10 = pfVar2[3];
                pfVar3 = (float *)(lVar37 + -0xc + lVar34);
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                uVar33 = uVar33 + 8;
                lVar42 = lVar28 * -0xc + param_1;
                pfVar4 = (float *)(lVar35 + 0x18 + lVar42);
                fVar14 = pfVar4[1];
                fVar15 = pfVar4[2];
                fVar16 = pfVar4[3];
                pfVar5 = (float *)(lVar35 + 0xc + lVar42);
                fVar17 = pfVar5[1];
                fVar18 = pfVar5[2];
                fVar19 = pfVar5[3];
                pfVar36 = (float *)(lVar37 + (longlong)param_2);
                fVar20 = pfVar36[1];
                fVar21 = pfVar36[2];
                fVar22 = pfVar36[3];
                pfVar1 = (float *)(lVar37 + (longlong)param_2);
                *pfVar1 = (*pfVar5 + *pfVar3) * fVar6 + *pfVar36 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar17 + fVar11) * fVar6 + fVar20 + (fVar14 + fVar8) * fVar7;
                pfVar1[2] = (fVar18 + fVar12) * fVar6 + fVar21 + (fVar15 + fVar9) * fVar7;
                pfVar1[3] = (fVar19 + fVar13) * fVar6 + fVar22 + (fVar16 + fVar10) * fVar7;
                pfVar36 = (float *)(lVar35 + 0x1c + lVar42);
                fVar8 = pfVar36[1];
                fVar9 = pfVar36[2];
                fVar10 = pfVar36[3];
                pfVar1 = (float *)(lVar37 + 4 + lVar34);
                fVar11 = pfVar1[1];
                fVar12 = pfVar1[2];
                fVar13 = pfVar1[3];
                pfVar2 = (float *)(lVar35 + 0x28 + lVar42);
                fVar14 = pfVar2[1];
                fVar15 = pfVar2[2];
                fVar16 = pfVar2[3];
                pfVar3 = (float *)(lVar37 + -8 + lVar34);
                fVar17 = pfVar3[1];
                fVar18 = pfVar3[2];
                fVar19 = pfVar3[3];
                pfVar4 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                fVar20 = pfVar4[1];
                fVar21 = pfVar4[2];
                fVar22 = pfVar4[3];
                lVar35 = lVar35 + 0x20;
                pfVar5 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                *pfVar5 = (*pfVar36 + *pfVar1) * fVar6 + *pfVar4 + (*pfVar2 + *pfVar3) * fVar7;
                pfVar5[1] = (fVar8 + fVar11) * fVar6 + fVar20 + (fVar14 + fVar17) * fVar7;
                pfVar5[2] = (fVar9 + fVar12) * fVar6 + fVar21 + (fVar15 + fVar18) * fVar7;
                pfVar5[3] = (fVar10 + fVar13) * fVar6 + fVar22 + (fVar16 + fVar19) * fVar7;
                lVar37 = lVar37 + 0x20;
              } while (uVar33 < uVar43);
            }
            if (uVar43 + 1 <= uVar39) {
              uVar33 = uVar39 - uVar43;
              if ((longlong)uVar33 < 4) {
                uVar41 = 0;
              }
              else {
                uVar40 = 0;
                uVar41 = uVar33 & 0xfffffffffffffffc;
                pfVar36 = param_2 + uVar43;
                lVar35 = lVar28 * -0xc + param_1 + uVar43 * 4;
                lVar37 = lVar32;
                uVar44 = uVar40;
                do {
                  pfVar1 = (float *)(lVar37 + 0xc + lVar35);
                  fVar8 = pfVar1[1];
                  fVar9 = pfVar1[2];
                  fVar10 = pfVar1[3];
                  pfVar2 = (float *)(lVar37 + 0x18 + lVar35);
                  fVar11 = pfVar2[1];
                  fVar12 = pfVar2[2];
                  fVar13 = pfVar2[3];
                  uVar40 = uVar40 + 4;
                  lVar42 = lVar34 + uVar43 * 4;
                  pfVar3 = (float *)((uVar44 - 0xc) + lVar42);
                  fVar14 = pfVar3[1];
                  fVar15 = pfVar3[2];
                  fVar16 = pfVar3[3];
                  lVar37 = lVar37 + 0x10;
                  pfVar4 = (float *)((uVar44 - 0x18) + lVar42);
                  fVar17 = pfVar4[1];
                  fVar18 = pfVar4[2];
                  fVar19 = pfVar4[3];
                  uVar44 = uVar44 + 0x10;
                  *pfVar36 = (*pfVar1 + *pfVar3) * fVar6 + *pfVar36 + (*pfVar2 + *pfVar4) * fVar7;
                  pfVar36[1] = (fVar8 + fVar14) * fVar6 + pfVar36[1] + (fVar11 + fVar17) * fVar7;
                  pfVar36[2] = (fVar9 + fVar15) * fVar6 + pfVar36[2] + (fVar12 + fVar18) * fVar7;
                  pfVar36[3] = (fVar10 + fVar16) * fVar6 + pfVar36[3] + (fVar13 + fVar19) * fVar7;
                  pfVar36 = pfVar36 + 4;
                } while (uVar40 < uVar41);
              }
LAB_14016f70d:
              if (uVar41 < uVar33) {
                lVar35 = lVar30 + uVar43 * 4;
                lVar37 = lVar34 + uVar43 * 4;
                do {
                  param_2[uVar43 + uVar41] =
                       (*(float *)(lVar35 + 0xc + uVar41 * 4) +
                       *(float *)(lVar37 + -0xc + uVar41 * 4)) * fVar6 + param_2[uVar43 + uVar41] +
                       (*(float *)(lVar35 + 0x18 + uVar41 * 4) +
                       *(float *)(lVar37 + -0x18 + uVar41 * 4)) * fVar7;
                  uVar41 = uVar41 + 1;
                } while (uVar41 < uVar33);
              }
            }
          }
        }
        uVar33 = uVar31 + 1;
        lVar30 = lVar30 + 0x18;
        lVar32 = lVar32 + 0x18;
        lVar34 = lVar34 + -0x18;
      } while (uVar33 < lVar28 - 1U >> 1);
      lVar34 = uVar31 + 2 + uVar33;
    }
    if (lVar28 != lVar34) {
      fVar6 = param_4[lVar34];
      lVar32 = lVar28 * -0xc;
      lVar38 = param_1 + lVar32 + lVar34 * 0xc;
      if (0 < (longlong)uVar39) {
        if ((longlong)uVar39 < 8) {
LAB_14016fbe4:
          uVar29 = 0;
          if (uVar39 == 0) goto LAB_14016fa03;
          uVar31 = 0;
          uVar33 = uVar39;
        }
        else {
          uVar33 = (ulonglong)param_2 & 0xf;
          if (uVar33 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_14016fbe4;
            uVar33 = 0x10 - uVar33 >> 2;
          }
          if ((longlong)uVar39 < (longlong)(uVar33 + 8)) goto LAB_14016fbe4;
          lVar30 = lVar34 * -0xc;
          uVar29 = uVar39 - (uVar39 - uVar33 & 7);
          lVar35 = param_1 + lVar28 * 0xc + lVar30;
          uVar31 = 0;
          if (uVar33 != 0) {
            do {
              param_2[uVar31] =
                   (*(float *)(lVar38 + uVar31 * 4) + *(float *)(lVar35 + uVar31 * 4)) * fVar6 +
                   param_2[uVar31];
              uVar31 = uVar31 + 1;
            } while (uVar31 < uVar33);
          }
          if ((lVar35 + uVar33 * 4 & 0xf) == 0) {
            lVar30 = lVar30 + lVar28 * 0xc + param_1;
            lVar37 = lVar32 + lVar34 * 0xc + param_1;
            do {
              pfVar36 = (float *)(lVar38 + uVar33 * 4);
              fVar7 = pfVar36[1];
              fVar8 = pfVar36[2];
              fVar9 = pfVar36[3];
              pfVar1 = (float *)(lVar37 + 0x10 + uVar33 * 4);
              fVar10 = *pfVar1;
              fVar11 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar1 = (float *)(lVar35 + uVar33 * 4);
              fVar14 = pfVar1[1];
              fVar15 = pfVar1[2];
              fVar16 = pfVar1[3];
              pfVar2 = (float *)(lVar30 + 0x10 + uVar33 * 4);
              fVar17 = *pfVar2;
              fVar18 = pfVar2[1];
              fVar19 = pfVar2[2];
              fVar20 = pfVar2[3];
              pfVar2 = param_2 + uVar33;
              fVar21 = pfVar2[1];
              fVar22 = pfVar2[2];
              fVar23 = pfVar2[3];
              pfVar3 = param_2 + uVar33 + 4;
              fVar24 = *pfVar3;
              fVar25 = pfVar3[1];
              fVar26 = pfVar3[2];
              fVar27 = pfVar3[3];
              pfVar3 = param_2 + uVar33;
              *pfVar3 = (*pfVar36 + *pfVar1) * fVar6 + *pfVar2;
              pfVar3[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar3[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar3[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar36 = param_2 + uVar33 + 4;
              *pfVar36 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar36[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar36[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar36[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar33 = uVar33 + 8;
            } while (uVar33 < uVar29);
          }
          else {
            lVar30 = lVar30 + lVar28 * 0xc + param_1;
            lVar37 = lVar32 + lVar34 * 0xc + param_1;
            do {
              pfVar36 = (float *)(lVar38 + uVar33 * 4);
              fVar7 = pfVar36[1];
              fVar8 = pfVar36[2];
              fVar9 = pfVar36[3];
              pfVar1 = (float *)(lVar35 + uVar33 * 4);
              fVar10 = pfVar1[1];
              fVar11 = pfVar1[2];
              fVar12 = pfVar1[3];
              pfVar2 = (float *)(lVar37 + 0x10 + uVar33 * 4);
              fVar13 = *pfVar2;
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar2 = (float *)(lVar30 + 0x10 + uVar33 * 4);
              fVar17 = *pfVar2;
              fVar18 = pfVar2[1];
              fVar19 = pfVar2[2];
              fVar20 = pfVar2[3];
              pfVar2 = param_2 + uVar33;
              fVar21 = pfVar2[1];
              fVar22 = pfVar2[2];
              fVar23 = pfVar2[3];
              pfVar3 = param_2 + uVar33 + 4;
              fVar24 = *pfVar3;
              fVar25 = pfVar3[1];
              fVar26 = pfVar3[2];
              fVar27 = pfVar3[3];
              pfVar3 = param_2 + uVar33;
              *pfVar3 = (*pfVar36 + *pfVar1) * fVar6 + *pfVar2;
              pfVar3[1] = (fVar7 + fVar10) * fVar6 + fVar21;
              pfVar3[2] = (fVar8 + fVar11) * fVar6 + fVar22;
              pfVar3[3] = (fVar9 + fVar12) * fVar6 + fVar23;
              pfVar36 = param_2 + uVar33 + 4;
              *pfVar36 = (fVar13 + fVar17) * fVar6 + fVar24;
              pfVar36[1] = (fVar14 + fVar18) * fVar6 + fVar25;
              pfVar36[2] = (fVar15 + fVar19) * fVar6 + fVar26;
              pfVar36[3] = (fVar16 + fVar20) * fVar6 + fVar27;
              uVar33 = uVar33 + 8;
            } while (uVar33 < uVar29);
          }
          if (uVar39 < uVar29 + 1) goto LAB_14016fa03;
          uVar33 = uVar39 - uVar29;
          if ((longlong)uVar33 < 4) {
            uVar31 = 0;
          }
          else {
            uVar43 = 0;
            uVar31 = uVar33 & 0xfffffffffffffffc;
            do {
              pfVar36 = (float *)(lVar37 + uVar29 * 4 + uVar43 * 4);
              fVar7 = pfVar36[1];
              fVar8 = pfVar36[2];
              fVar9 = pfVar36[3];
              pfVar1 = (float *)(lVar30 + uVar29 * 4 + uVar43 * 4);
              fVar10 = pfVar1[1];
              fVar11 = pfVar1[2];
              fVar12 = pfVar1[3];
              pfVar2 = param_2 + uVar29 + uVar43;
              fVar13 = pfVar2[1];
              fVar14 = pfVar2[2];
              fVar15 = pfVar2[3];
              pfVar3 = param_2 + uVar29 + uVar43;
              *pfVar3 = (*pfVar36 + *pfVar1) * fVar6 + *pfVar2;
              pfVar3[1] = (fVar7 + fVar10) * fVar6 + fVar13;
              pfVar3[2] = (fVar8 + fVar11) * fVar6 + fVar14;
              pfVar3[3] = (fVar9 + fVar12) * fVar6 + fVar15;
              uVar43 = uVar43 + 4;
            } while (uVar43 < uVar31);
          }
        }
        if (uVar31 < uVar33) {
          do {
            param_2[uVar29 + uVar31] =
                 (*(float *)(lVar32 + lVar34 * 0xc + param_1 + uVar29 * 4 + uVar31 * 4) +
                 *(float *)(param_1 + lVar34 * -0xc + lVar28 * 0xc + uVar29 * 4 + uVar31 * 4)) *
                 fVar6 + param_2[uVar29 + uVar31];
            uVar31 = uVar31 + 1;
          } while (uVar31 < uVar33);
        }
      }
    }
  }
LAB_14016fa03:
  fVar6 = param_4[lVar28];
  if ((longlong)uVar39 < 1) {
    return;
  }
  if (7 < (longlong)uVar39) {
    uVar33 = (ulonglong)param_2 & 0xf;
    if (uVar33 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_14016fbd1;
      uVar33 = 0x10 - uVar33 >> 2;
    }
    if ((longlong)(uVar33 + 8) <= (longlong)uVar39) {
      uVar31 = 0;
      uVar29 = uVar39 - (uVar39 - uVar33 & 7);
      if (uVar33 != 0) {
        do {
          param_2[uVar31] = *(float *)(lVar38 + 0xc + uVar31 * 4) * fVar6 + param_2[uVar31];
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar33);
      }
      if ((lVar38 + 0xc + uVar33 * 4 & 0xf) == 0) {
        do {
          pfVar2 = (float *)(lVar38 + 0xc + uVar33 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar36 = (float *)(lVar38 + 0x1c + uVar33 * 4);
          fVar10 = *pfVar36;
          fVar11 = pfVar36[1];
          fVar12 = pfVar36[2];
          fVar13 = pfVar36[3];
          pfVar36 = param_2 + uVar33;
          fVar14 = pfVar36[1];
          fVar15 = pfVar36[2];
          fVar16 = pfVar36[3];
          pfVar1 = param_2 + uVar33 + 4;
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = param_2 + uVar33;
          *pfVar1 = *pfVar2 * fVar6 + *pfVar36;
          pfVar1[1] = fVar7 * fVar6 + fVar14;
          pfVar1[2] = fVar8 * fVar6 + fVar15;
          pfVar1[3] = fVar9 * fVar6 + fVar16;
          pfVar36 = param_2 + uVar33 + 4;
          *pfVar36 = fVar10 * fVar6 + fVar17;
          pfVar36[1] = fVar11 * fVar6 + fVar18;
          pfVar36[2] = fVar12 * fVar6 + fVar19;
          pfVar36[3] = fVar13 * fVar6 + fVar20;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar29);
      }
      else {
        do {
          pfVar2 = (float *)(lVar38 + 0xc + uVar33 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar36 = (float *)(lVar38 + 0x1c + uVar33 * 4);
          fVar10 = *pfVar36;
          fVar11 = pfVar36[1];
          fVar12 = pfVar36[2];
          fVar13 = pfVar36[3];
          pfVar36 = param_2 + uVar33;
          fVar14 = pfVar36[1];
          fVar15 = pfVar36[2];
          fVar16 = pfVar36[3];
          pfVar1 = param_2 + uVar33 + 4;
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = param_2 + uVar33;
          *pfVar1 = *pfVar2 * fVar6 + *pfVar36;
          pfVar1[1] = fVar7 * fVar6 + fVar14;
          pfVar1[2] = fVar8 * fVar6 + fVar15;
          pfVar1[3] = fVar9 * fVar6 + fVar16;
          pfVar36 = param_2 + uVar33 + 4;
          *pfVar36 = fVar10 * fVar6 + fVar17;
          pfVar36[1] = fVar11 * fVar6 + fVar18;
          pfVar36[2] = fVar12 * fVar6 + fVar19;
          pfVar36[3] = fVar13 * fVar6 + fVar20;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar29);
      }
      if (uVar39 < uVar29 + 1) {
        return;
      }
      uVar39 = uVar39 - uVar29;
      if ((longlong)uVar39 < 4) {
        uVar33 = 0;
      }
      else {
        uVar31 = 0;
        uVar33 = uVar39 & 0xfffffffffffffffc;
        do {
          pfVar2 = (float *)(lVar38 + uVar29 * 4 + 0xc + uVar31 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar36 = param_2 + uVar29 + uVar31;
          fVar10 = pfVar36[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar36[3];
          pfVar1 = param_2 + uVar29 + uVar31;
          *pfVar1 = *pfVar2 * fVar6 + *pfVar36;
          pfVar1[1] = fVar7 * fVar6 + fVar10;
          pfVar1[2] = fVar8 * fVar6 + fVar11;
          pfVar1[3] = fVar9 * fVar6 + fVar12;
          uVar31 = uVar31 + 4;
        } while (uVar31 < uVar33);
      }
      goto LAB_14016fb79;
    }
  }
LAB_14016fbd1:
  uVar29 = 0;
  uVar33 = 0;
  if (uVar39 == 0) {
    return;
  }
LAB_14016fb79:
  if (uVar33 < uVar39) {
    do {
      param_2[uVar29 + uVar33] =
           *(float *)(lVar38 + uVar29 * 4 + 0xc + uVar33 * 4) * fVar6 + param_2[uVar29 + uVar33];
      uVar33 = uVar33 + 1;
    } while (uVar33 < uVar39);
  }
  return;
}

