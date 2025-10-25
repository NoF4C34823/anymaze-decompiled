
void FUN_140703160(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
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
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  float *pfVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lStack_58;
  
  lVar40 = (longlong)(param_5 >> 1);
  lStack_58 = lVar40 * -0xc + param_1;
  uVar8 = param_3 * 3;
  fVar6 = *param_4;
  if (0 < (longlong)uVar8) {
    if ((longlong)uVar8 < 8) {
LAB_140703cb4:
      uVar29 = 0;
    }
    else {
      uVar35 = (ulonglong)param_2 & 0xf;
      if (uVar35 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_140703cb4;
        uVar35 = 0x10 - uVar35 >> 2;
      }
      if ((longlong)uVar8 < (longlong)(uVar35 + 8)) goto LAB_140703cb4;
      uVar29 = uVar8 - (uVar8 - uVar35 & 7);
      lVar33 = lVar40 * -0xc + param_1;
      lVar32 = lVar40 * 0xc + param_1;
      uVar36 = 0;
      if (uVar35 != 0) {
        do {
          param_2[uVar36] =
               (*(float *)(lVar33 + uVar36 * 4) + *(float *)(lVar32 + uVar36 * 4)) * fVar6;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar35);
      }
      if ((uVar35 * 4 + lVar32 & 0xf) == 0) {
        do {
          pfVar39 = (float *)(lVar33 + uVar35 * 4);
          fVar7 = pfVar39[1];
          fVar9 = pfVar39[2];
          fVar10 = pfVar39[3];
          pfVar1 = (float *)(lVar33 + 0x10 + uVar35 * 4);
          fVar11 = *pfVar1;
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar5 = (float *)(lVar32 + uVar35 * 4);
          fVar15 = pfVar5[1];
          fVar16 = pfVar5[2];
          fVar17 = pfVar5[3];
          pfVar1 = (float *)(lVar32 + 0x10 + uVar35 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = (*pfVar39 + *pfVar5) * fVar6;
          pfVar1[1] = (fVar7 + fVar15) * fVar6;
          pfVar1[2] = (fVar9 + fVar16) * fVar6;
          pfVar1[3] = (fVar10 + fVar17) * fVar6;
          pfVar39 = param_2 + uVar35 + 4;
          *pfVar39 = (fVar11 + fVar18) * fVar6;
          pfVar39[1] = (fVar12 + fVar19) * fVar6;
          pfVar39[2] = (fVar13 + fVar20) * fVar6;
          pfVar39[3] = (fVar14 + fVar21) * fVar6;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar29);
      }
      else {
        do {
          pfVar39 = (float *)(lVar33 + uVar35 * 4);
          fVar7 = pfVar39[1];
          fVar9 = pfVar39[2];
          fVar10 = pfVar39[3];
          pfVar1 = (float *)(lVar33 + 0x10 + uVar35 * 4);
          fVar11 = *pfVar1;
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar5 = (float *)(lVar32 + uVar35 * 4);
          fVar15 = pfVar5[1];
          fVar16 = pfVar5[2];
          fVar17 = pfVar5[3];
          pfVar1 = (float *)(lVar32 + 0x10 + uVar35 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = (*pfVar39 + *pfVar5) * fVar6;
          pfVar1[1] = (fVar7 + fVar15) * fVar6;
          pfVar1[2] = (fVar9 + fVar16) * fVar6;
          pfVar1[3] = (fVar10 + fVar17) * fVar6;
          pfVar39 = param_2 + uVar35 + 4;
          *pfVar39 = (fVar11 + fVar18) * fVar6;
          pfVar39[1] = (fVar12 + fVar19) * fVar6;
          pfVar39[2] = (fVar13 + fVar20) * fVar6;
          pfVar39[3] = (fVar14 + fVar21) * fVar6;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar29);
      }
    }
    if (uVar29 < uVar8) {
      do {
        param_2[uVar29] =
             (*(float *)(lVar40 * -0xc + param_1 + uVar29 * 4) +
             *(float *)(lVar40 * 0xc + param_1 + uVar29 * 4)) * fVar6;
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar8);
    }
  }
  if (1 < lVar40) {
    uVar35 = 0;
    lVar33 = 1;
    lVar32 = 0;
    if (lVar40 - 1U >> 1 != 0) {
      uVar29 = (ulonglong)param_2 & 0xf;
      lVar34 = lVar40 * -0xc + param_1;
      lVar33 = lVar40 * 0xc + param_1;
      do {
        lStack_58 = lVar34 + 0x18;
        fVar6 = param_4[uVar35 * 2 + 1];
        fVar7 = param_4[uVar35 * 2 + 2];
        if (0 < (longlong)uVar8) {
          if (((longlong)uVar8 < 8) ||
             (((uVar36 = uVar29, uVar29 != 0 &&
               (uVar36 = 0x10 - uVar29 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)uVar8 < (longlong)(uVar36 + 8))))) {
            uVar30 = 0;
            if (uVar8 != 0) {
              uVar36 = 0;
              uVar42 = uVar8;
              goto LAB_140703753;
            }
          }
          else {
            uVar42 = 0;
            uVar30 = uVar8 - (uVar8 - uVar36 & 7);
            lVar37 = lVar33;
            lVar38 = lVar34;
            pfVar39 = param_2;
            if (uVar36 != 0) {
              do {
                uVar42 = uVar42 + 1;
                *pfVar39 = (*(float *)(lVar38 + 0xc) + *(float *)(lVar37 + -0xc)) * fVar6 + *pfVar39
                           + (*(float *)(lVar38 + 0x18) + *(float *)(lVar37 + -0x18)) * fVar7;
                lVar37 = lVar37 + 4;
                lVar38 = lVar38 + 4;
                pfVar39 = pfVar39 + 1;
              } while (uVar42 < uVar36);
            }
            if (((uVar36 * 4 + lVar33) - 0xc & 0xf) == 0) {
              lVar37 = uVar36 * 4;
              lVar38 = lVar32 + lVar37;
              do {
                pfVar5 = (float *)(lVar37 + -0xc + lVar33);
                fVar9 = pfVar5[1];
                fVar10 = pfVar5[2];
                fVar11 = pfVar5[3];
                pfVar2 = (float *)(lVar37 + -0x18 + lVar33);
                fVar12 = pfVar2[1];
                fVar13 = pfVar2[2];
                fVar14 = pfVar2[3];
                uVar36 = uVar36 + 8;
                lVar43 = lVar40 * -0xc + param_1;
                pfVar3 = (float *)(lVar38 + 0xc + lVar43);
                fVar15 = pfVar3[1];
                fVar16 = pfVar3[2];
                fVar17 = pfVar3[3];
                pfVar4 = (float *)(lVar38 + 0x18 + lVar43);
                fVar18 = pfVar4[1];
                fVar19 = pfVar4[2];
                fVar20 = pfVar4[3];
                pfVar39 = (float *)(lVar37 + (longlong)param_2);
                fVar21 = pfVar39[1];
                fVar22 = pfVar39[2];
                fVar23 = pfVar39[3];
                pfVar1 = (float *)(lVar37 + (longlong)param_2);
                *pfVar1 = (*pfVar3 + *pfVar5) * fVar6 + *pfVar39 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar15 + fVar9) * fVar6 + fVar21 + (fVar18 + fVar12) * fVar7;
                pfVar1[2] = (fVar16 + fVar10) * fVar6 + fVar22 + (fVar19 + fVar13) * fVar7;
                pfVar1[3] = (fVar17 + fVar11) * fVar6 + fVar23 + (fVar20 + fVar14) * fVar7;
                pfVar39 = (float *)(lVar38 + 0x1c + lVar43);
                fVar9 = pfVar39[1];
                fVar10 = pfVar39[2];
                fVar11 = pfVar39[3];
                pfVar1 = (float *)(lVar37 + 4 + lVar33);
                fVar12 = pfVar1[1];
                fVar13 = pfVar1[2];
                fVar14 = pfVar1[3];
                pfVar5 = (float *)(lVar37 + -8 + lVar33);
                fVar15 = pfVar5[1];
                fVar16 = pfVar5[2];
                fVar17 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + 0x28 + lVar43);
                fVar18 = pfVar2[1];
                fVar19 = pfVar2[2];
                fVar20 = pfVar2[3];
                pfVar3 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                fVar21 = pfVar3[1];
                fVar22 = pfVar3[2];
                fVar23 = pfVar3[3];
                lVar38 = lVar38 + 0x20;
                pfVar4 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                *pfVar4 = (*pfVar39 + *pfVar1) * fVar6 + *pfVar3 + (*pfVar2 + *pfVar5) * fVar7;
                pfVar4[1] = (fVar9 + fVar12) * fVar6 + fVar21 + (fVar18 + fVar15) * fVar7;
                pfVar4[2] = (fVar10 + fVar13) * fVar6 + fVar22 + (fVar19 + fVar16) * fVar7;
                pfVar4[3] = (fVar11 + fVar14) * fVar6 + fVar23 + (fVar20 + fVar17) * fVar7;
                lVar37 = lVar37 + 0x20;
              } while (uVar36 < uVar30);
            }
            else {
              lVar37 = uVar36 * 4;
              lVar38 = lVar32 + lVar37;
              do {
                pfVar5 = (float *)(lVar37 + -0xc + lVar33);
                fVar9 = pfVar5[1];
                fVar10 = pfVar5[2];
                fVar11 = pfVar5[3];
                pfVar2 = (float *)(lVar37 + -0x18 + lVar33);
                fVar12 = pfVar2[1];
                fVar13 = pfVar2[2];
                fVar14 = pfVar2[3];
                uVar36 = uVar36 + 8;
                lVar43 = lVar40 * -0xc + param_1;
                pfVar3 = (float *)(lVar38 + 0xc + lVar43);
                fVar15 = pfVar3[1];
                fVar16 = pfVar3[2];
                fVar17 = pfVar3[3];
                pfVar4 = (float *)(lVar38 + 0x18 + lVar43);
                fVar18 = pfVar4[1];
                fVar19 = pfVar4[2];
                fVar20 = pfVar4[3];
                pfVar39 = (float *)(lVar37 + (longlong)param_2);
                fVar21 = pfVar39[1];
                fVar22 = pfVar39[2];
                fVar23 = pfVar39[3];
                pfVar1 = (float *)(lVar37 + (longlong)param_2);
                *pfVar1 = (*pfVar3 + *pfVar5) * fVar6 + *pfVar39 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar15 + fVar9) * fVar6 + fVar21 + (fVar18 + fVar12) * fVar7;
                pfVar1[2] = (fVar16 + fVar10) * fVar6 + fVar22 + (fVar19 + fVar13) * fVar7;
                pfVar1[3] = (fVar17 + fVar11) * fVar6 + fVar23 + (fVar20 + fVar14) * fVar7;
                pfVar39 = (float *)(lVar38 + 0x1c + lVar43);
                fVar9 = pfVar39[1];
                fVar10 = pfVar39[2];
                fVar11 = pfVar39[3];
                pfVar1 = (float *)(lVar37 + 4 + lVar33);
                fVar12 = pfVar1[1];
                fVar13 = pfVar1[2];
                fVar14 = pfVar1[3];
                pfVar5 = (float *)(lVar37 + -8 + lVar33);
                fVar15 = pfVar5[1];
                fVar16 = pfVar5[2];
                fVar17 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + 0x28 + lVar43);
                fVar18 = pfVar2[1];
                fVar19 = pfVar2[2];
                fVar20 = pfVar2[3];
                pfVar3 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                fVar21 = pfVar3[1];
                fVar22 = pfVar3[2];
                fVar23 = pfVar3[3];
                lVar38 = lVar38 + 0x20;
                pfVar4 = (float *)(lVar37 + 0x10 + (longlong)param_2);
                *pfVar4 = (*pfVar39 + *pfVar1) * fVar6 + *pfVar3 + (*pfVar2 + *pfVar5) * fVar7;
                pfVar4[1] = (fVar9 + fVar12) * fVar6 + fVar21 + (fVar18 + fVar15) * fVar7;
                pfVar4[2] = (fVar10 + fVar13) * fVar6 + fVar22 + (fVar19 + fVar16) * fVar7;
                pfVar4[3] = (fVar11 + fVar14) * fVar6 + fVar23 + (fVar20 + fVar17) * fVar7;
                lVar37 = lVar37 + 0x20;
              } while (uVar36 < uVar30);
            }
            if (uVar30 + 1 <= uVar8) {
              uVar42 = uVar8 - uVar30;
              if ((longlong)uVar42 < 4) {
                uVar36 = 0;
              }
              else {
                pfVar39 = param_2 + uVar30;
                uVar41 = 0;
                uVar36 = uVar42 & 0xfffffffffffffffc;
                lVar43 = 0;
                lVar38 = lVar40 * -0xc + param_1 + uVar30 * 4;
                lVar37 = lVar32;
                do {
                  pfVar1 = (float *)(lVar37 + 0xc + lVar38);
                  fVar9 = pfVar1[1];
                  fVar10 = pfVar1[2];
                  fVar11 = pfVar1[3];
                  pfVar5 = (float *)(lVar37 + 0x18 + lVar38);
                  fVar12 = pfVar5[1];
                  fVar13 = pfVar5[2];
                  fVar14 = pfVar5[3];
                  uVar41 = uVar41 + 4;
                  lVar44 = lVar33 + uVar30 * 4;
                  pfVar2 = (float *)(lVar43 + -0xc + lVar44);
                  fVar15 = pfVar2[1];
                  fVar16 = pfVar2[2];
                  fVar17 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + -0x18 + lVar44);
                  fVar18 = pfVar3[1];
                  fVar19 = pfVar3[2];
                  fVar20 = pfVar3[3];
                  lVar37 = lVar37 + 0x10;
                  lVar43 = lVar43 + 0x10;
                  *pfVar39 = (*pfVar1 + *pfVar2) * fVar6 + *pfVar39 + (*pfVar5 + *pfVar3) * fVar7;
                  pfVar39[1] = (fVar9 + fVar15) * fVar6 + pfVar39[1] + (fVar12 + fVar18) * fVar7;
                  pfVar39[2] = (fVar10 + fVar16) * fVar6 + pfVar39[2] + (fVar13 + fVar19) * fVar7;
                  pfVar39[3] = (fVar11 + fVar17) * fVar6 + pfVar39[3] + (fVar14 + fVar20) * fVar7;
                  pfVar39 = pfVar39 + 4;
                } while (uVar41 < uVar36);
              }
LAB_140703753:
              if (uVar36 < uVar42) {
                lVar38 = uVar30 * 4 + lVar33;
                lVar37 = lVar34 + uVar30 * 4;
                do {
                  param_2[uVar30 + uVar36] =
                       (*(float *)(lVar37 + 0xc + uVar36 * 4) +
                       *(float *)(lVar38 + -0xc + uVar36 * 4)) * fVar6 + param_2[uVar30 + uVar36] +
                       (*(float *)(lVar37 + 0x18 + uVar36 * 4) +
                       *(float *)(lVar38 + -0x18 + uVar36 * 4)) * fVar7;
                  uVar36 = uVar36 + 1;
                } while (uVar36 < uVar42);
              }
            }
          }
        }
        uVar35 = uVar35 + 1;
        lVar34 = lVar34 + 0x18;
        lVar32 = lVar32 + 0x18;
        lVar33 = lVar33 + -0x18;
      } while (uVar35 < lVar40 - 1U >> 1);
      lVar33 = uVar35 * 2 + 1;
    }
    if (lVar40 != lVar33) {
      lVar32 = lVar33 * 0xc;
      lVar34 = lVar40 * -0xc;
      lStack_58 = lVar32 + param_1 + lVar34;
      fVar6 = param_4[lVar33];
      if (0 < (longlong)uVar8) {
        if ((longlong)uVar8 < 8) {
LAB_140703c7e:
          uVar29 = 0;
          if (uVar8 == 0) goto LAB_140703aca;
          uVar35 = 0;
          uVar36 = uVar8;
        }
        else {
          uVar35 = (ulonglong)param_2 & 0xf;
          if (uVar35 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_140703c7e;
            uVar35 = 0x10 - uVar35 >> 2;
          }
          if ((longlong)uVar8 < (longlong)(uVar35 + 8)) goto LAB_140703c7e;
          lVar37 = lVar40 * 0xc;
          lVar38 = lVar33 * -0xc;
          uVar29 = uVar8 - (uVar8 - uVar35 & 7);
          lVar44 = param_1 + lVar34 + lVar32;
          lVar43 = param_1 + lVar37 + lVar38;
          uVar36 = 0;
          if (uVar35 != 0) {
            do {
              param_2[uVar36] =
                   (*(float *)(lVar44 + uVar36 * 4) + *(float *)(lVar43 + uVar36 * 4)) * fVar6 +
                   param_2[uVar36];
              uVar36 = uVar36 + 1;
            } while (uVar36 < uVar35);
          }
          if ((uVar35 * 4 + lVar43 & 0xf) == 0) {
            lVar31 = lVar34 + lVar32 + param_1;
            lVar37 = lVar37 + lVar38 + param_1;
            do {
              pfVar39 = (float *)(lVar44 + uVar35 * 4);
              fVar7 = pfVar39[1];
              fVar9 = pfVar39[2];
              fVar10 = pfVar39[3];
              pfVar1 = (float *)(lVar31 + 0x10 + uVar35 * 4);
              fVar11 = *pfVar1;
              fVar12 = pfVar1[1];
              fVar13 = pfVar1[2];
              fVar14 = pfVar1[3];
              pfVar1 = (float *)(lVar43 + uVar35 * 4);
              fVar15 = pfVar1[1];
              fVar16 = pfVar1[2];
              fVar17 = pfVar1[3];
              pfVar5 = (float *)(lVar37 + 0x10 + uVar35 * 4);
              fVar18 = *pfVar5;
              fVar19 = pfVar5[1];
              fVar20 = pfVar5[2];
              fVar21 = pfVar5[3];
              pfVar5 = param_2 + uVar35;
              fVar22 = pfVar5[1];
              fVar23 = pfVar5[2];
              fVar24 = pfVar5[3];
              pfVar2 = param_2 + uVar35 + 4;
              fVar25 = *pfVar2;
              fVar26 = pfVar2[1];
              fVar27 = pfVar2[2];
              fVar28 = pfVar2[3];
              pfVar2 = param_2 + uVar35;
              *pfVar2 = (*pfVar39 + *pfVar1) * fVar6 + *pfVar5;
              pfVar2[1] = (fVar7 + fVar15) * fVar6 + fVar22;
              pfVar2[2] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar2[3] = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar39 = param_2 + uVar35 + 4;
              *pfVar39 = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar39[1] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar39[2] = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar39[3] = (fVar14 + fVar21) * fVar6 + fVar28;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar29);
          }
          else {
            lVar31 = lVar34 + lVar32 + param_1;
            lVar37 = lVar37 + lVar38 + param_1;
            do {
              pfVar39 = (float *)(lVar44 + uVar35 * 4);
              fVar7 = pfVar39[1];
              fVar9 = pfVar39[2];
              fVar10 = pfVar39[3];
              pfVar1 = (float *)(lVar43 + uVar35 * 4);
              fVar11 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar5 = (float *)(lVar31 + 0x10 + uVar35 * 4);
              fVar14 = *pfVar5;
              fVar15 = pfVar5[1];
              fVar16 = pfVar5[2];
              fVar17 = pfVar5[3];
              pfVar5 = (float *)(lVar37 + 0x10 + uVar35 * 4);
              fVar18 = *pfVar5;
              fVar19 = pfVar5[1];
              fVar20 = pfVar5[2];
              fVar21 = pfVar5[3];
              pfVar5 = param_2 + uVar35;
              fVar22 = pfVar5[1];
              fVar23 = pfVar5[2];
              fVar24 = pfVar5[3];
              pfVar2 = param_2 + uVar35 + 4;
              fVar25 = *pfVar2;
              fVar26 = pfVar2[1];
              fVar27 = pfVar2[2];
              fVar28 = pfVar2[3];
              pfVar2 = param_2 + uVar35;
              *pfVar2 = (*pfVar39 + *pfVar1) * fVar6 + *pfVar5;
              pfVar2[1] = (fVar7 + fVar11) * fVar6 + fVar22;
              pfVar2[2] = (fVar9 + fVar12) * fVar6 + fVar23;
              pfVar2[3] = (fVar10 + fVar13) * fVar6 + fVar24;
              pfVar39 = param_2 + uVar35 + 4;
              *pfVar39 = (fVar14 + fVar18) * fVar6 + fVar25;
              pfVar39[1] = (fVar15 + fVar19) * fVar6 + fVar26;
              pfVar39[2] = (fVar16 + fVar20) * fVar6 + fVar27;
              pfVar39[3] = (fVar17 + fVar21) * fVar6 + fVar28;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar29);
          }
          if (uVar8 < uVar29 + 1) goto LAB_140703aca;
          uVar36 = uVar8 - uVar29;
          if ((longlong)uVar36 < 4) {
            uVar35 = 0;
          }
          else {
            uVar35 = uVar36 & 0xfffffffffffffffc;
            uVar30 = 0;
            do {
              pfVar39 = (float *)(lVar31 + uVar29 * 4 + uVar30 * 4);
              fVar7 = pfVar39[1];
              fVar9 = pfVar39[2];
              fVar10 = pfVar39[3];
              pfVar1 = (float *)(lVar37 + uVar29 * 4 + uVar30 * 4);
              fVar11 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar5 = param_2 + uVar29 + uVar30;
              fVar14 = pfVar5[1];
              fVar15 = pfVar5[2];
              fVar16 = pfVar5[3];
              pfVar2 = param_2 + uVar29 + uVar30;
              *pfVar2 = (*pfVar39 + *pfVar1) * fVar6 + *pfVar5;
              pfVar2[1] = (fVar7 + fVar11) * fVar6 + fVar14;
              pfVar2[2] = (fVar9 + fVar12) * fVar6 + fVar15;
              pfVar2[3] = (fVar10 + fVar13) * fVar6 + fVar16;
              uVar30 = uVar30 + 4;
            } while (uVar30 < uVar35);
          }
        }
        if (uVar35 < uVar36) {
          do {
            param_2[uVar29 + uVar35] =
                 (*(float *)(lVar34 + lVar32 + param_1 + uVar29 * 4 + uVar35 * 4) +
                 *(float *)(param_1 + lVar40 * 0xc + lVar33 * -0xc + uVar29 * 4 + uVar35 * 4)) *
                 fVar6 + param_2[uVar29 + uVar35];
            uVar35 = uVar35 + 1;
          } while (uVar35 < uVar36);
        }
      }
    }
  }
LAB_140703aca:
  fVar6 = param_4[lVar40];
  if ((longlong)uVar8 < 1) {
    return;
  }
  if (7 < (longlong)uVar8) {
    uVar35 = (ulonglong)param_2 & 0xf;
    if (uVar35 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_140703c72;
      uVar35 = 0x10 - uVar35 >> 2;
    }
    if ((longlong)(uVar35 + 8) <= (longlong)uVar8) {
      uVar36 = 0;
      uVar29 = uVar8 - (uVar8 - uVar35 & 7);
      if (uVar35 != 0) {
        do {
          param_2[uVar36] = *(float *)(lStack_58 + 0xc + uVar36 * 4) * fVar6 + param_2[uVar36];
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar35);
      }
      if ((uVar35 * 4 + lStack_58 + 0xc & 0xf) == 0) {
        do {
          pfVar5 = (float *)(lStack_58 + 0xc + uVar35 * 4);
          fVar7 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar39 = (float *)(lStack_58 + 0x1c + uVar35 * 4);
          fVar11 = *pfVar39;
          fVar12 = pfVar39[1];
          fVar13 = pfVar39[2];
          fVar14 = pfVar39[3];
          pfVar39 = param_2 + uVar35;
          fVar15 = pfVar39[1];
          fVar16 = pfVar39[2];
          fVar17 = pfVar39[3];
          pfVar1 = param_2 + uVar35 + 4;
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = *pfVar5 * fVar6 + *pfVar39;
          pfVar1[1] = fVar7 * fVar6 + fVar15;
          pfVar1[2] = fVar9 * fVar6 + fVar16;
          pfVar1[3] = fVar10 * fVar6 + fVar17;
          pfVar39 = param_2 + uVar35 + 4;
          *pfVar39 = fVar11 * fVar6 + fVar18;
          pfVar39[1] = fVar12 * fVar6 + fVar19;
          pfVar39[2] = fVar13 * fVar6 + fVar20;
          pfVar39[3] = fVar14 * fVar6 + fVar21;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar29);
      }
      else {
        do {
          pfVar5 = (float *)(lStack_58 + 0xc + uVar35 * 4);
          fVar7 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar39 = (float *)(lStack_58 + 0x1c + uVar35 * 4);
          fVar11 = *pfVar39;
          fVar12 = pfVar39[1];
          fVar13 = pfVar39[2];
          fVar14 = pfVar39[3];
          pfVar39 = param_2 + uVar35;
          fVar15 = pfVar39[1];
          fVar16 = pfVar39[2];
          fVar17 = pfVar39[3];
          pfVar1 = param_2 + uVar35 + 4;
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = param_2 + uVar35;
          *pfVar1 = *pfVar5 * fVar6 + *pfVar39;
          pfVar1[1] = fVar7 * fVar6 + fVar15;
          pfVar1[2] = fVar9 * fVar6 + fVar16;
          pfVar1[3] = fVar10 * fVar6 + fVar17;
          pfVar39 = param_2 + uVar35 + 4;
          *pfVar39 = fVar11 * fVar6 + fVar18;
          pfVar39[1] = fVar12 * fVar6 + fVar19;
          pfVar39[2] = fVar13 * fVar6 + fVar20;
          pfVar39[3] = fVar14 * fVar6 + fVar21;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar29);
      }
      goto LAB_140703c0b;
    }
  }
LAB_140703c72:
  uVar29 = 0;
LAB_140703c0b:
  uVar35 = 0;
  if (uVar29 + 1 <= uVar8) {
    do {
      param_2[uVar29 + uVar35] =
           *(float *)(lStack_58 + uVar29 * 4 + 0xc + uVar35 * 4) * fVar6 + param_2[uVar29 + uVar35];
      uVar35 = uVar35 + 1;
    } while (uVar35 < uVar8 - uVar29);
  }
  return;
}

