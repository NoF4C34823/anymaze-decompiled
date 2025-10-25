
void FUN_140193240(longlong param_1,float *param_2,ulonglong param_3,float *param_4,int param_5)

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
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  float *pfVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lStack_58;
  
  lVar37 = (longlong)(param_5 >> 1);
  lVar39 = lVar37 * 4;
  lStack_58 = param_1 + lVar37 * -4;
  fVar6 = *param_4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_140193cd4:
      uVar28 = 0;
    }
    else {
      uVar33 = (ulonglong)param_2 & 0xf;
      if (uVar33 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_140193cd4;
        uVar33 = 0x10 - uVar33 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar33 + 8)) goto LAB_140193cd4;
      lVar30 = lVar37 * -4 + param_1;
      uVar35 = 0;
      uVar28 = param_3 - (param_3 - uVar33 & 7);
      lVar34 = param_1 + lVar39;
      if (uVar33 != 0) {
        do {
          param_2[uVar35] =
               (*(float *)(lVar30 + uVar35 * 4) + *(float *)(lVar34 + uVar35 * 4)) * fVar6;
          uVar35 = uVar35 + 1;
        } while (uVar35 < uVar33);
      }
      if ((uVar33 * 4 + lVar34 & 0xf) == 0) {
        do {
          pfVar40 = (float *)(lVar30 + uVar33 * 4);
          fVar7 = pfVar40[1];
          fVar8 = pfVar40[2];
          fVar9 = pfVar40[3];
          pfVar1 = (float *)(lVar30 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar5 = (float *)(lVar34 + uVar33 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar1 = (float *)(lVar34 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = param_2 + uVar33;
          *pfVar1 = (*pfVar40 + *pfVar5) * fVar6;
          pfVar1[1] = (fVar7 + fVar14) * fVar6;
          pfVar1[2] = (fVar8 + fVar15) * fVar6;
          pfVar1[3] = (fVar9 + fVar16) * fVar6;
          pfVar40 = param_2 + uVar33 + 4;
          *pfVar40 = (fVar10 + fVar17) * fVar6;
          pfVar40[1] = (fVar11 + fVar18) * fVar6;
          pfVar40[2] = (fVar12 + fVar19) * fVar6;
          pfVar40[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar28);
      }
      else {
        do {
          pfVar40 = (float *)(lVar30 + uVar33 * 4);
          fVar7 = pfVar40[1];
          fVar8 = pfVar40[2];
          fVar9 = pfVar40[3];
          pfVar1 = (float *)(lVar30 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar5 = (float *)(lVar34 + uVar33 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar1 = (float *)(lVar34 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = param_2 + uVar33;
          *pfVar1 = (*pfVar40 + *pfVar5) * fVar6;
          pfVar1[1] = (fVar7 + fVar14) * fVar6;
          pfVar1[2] = (fVar8 + fVar15) * fVar6;
          pfVar1[3] = (fVar9 + fVar16) * fVar6;
          pfVar40 = param_2 + uVar33 + 4;
          *pfVar40 = (fVar10 + fVar17) * fVar6;
          pfVar40[1] = (fVar11 + fVar18) * fVar6;
          pfVar40[2] = (fVar12 + fVar19) * fVar6;
          pfVar40[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar28);
      }
    }
    if (uVar28 < param_3) {
      do {
        param_2[uVar28] =
             (*(float *)(lVar37 * -4 + param_1 + uVar28 * 4) +
             *(float *)(param_1 + lVar37 * 4 + uVar28 * 4)) * fVar6;
        uVar28 = uVar28 + 1;
      } while (uVar28 < param_3);
    }
  }
  if (1 < lVar37) {
    uVar33 = 0;
    lVar34 = 1;
    lVar30 = 0;
    if (lVar37 - 1U >> 1 != 0) {
      uVar28 = (ulonglong)param_2 & 0xf;
      lVar34 = param_1 + lVar39;
      lVar31 = lVar37 * -4 + param_1;
      do {
        lStack_58 = lVar31 + 8;
        fVar6 = *(float *)(lVar30 + 4 + (longlong)param_4);
        fVar7 = *(float *)(lVar30 + 8 + (longlong)param_4);
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 8) ||
             (((uVar35 = uVar28, uVar28 != 0 &&
               (uVar35 = 0x10 - uVar28 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)param_3 < (longlong)(uVar35 + 8))))) {
            uVar29 = 0;
            if (param_3 != 0) {
              uVar35 = 0;
              uVar42 = param_3;
              goto LAB_1401937b3;
            }
          }
          else {
            uVar42 = 0;
            uVar29 = param_3 - (param_3 - uVar35 & 7);
            lVar36 = lVar34;
            lVar38 = lVar31;
            pfVar40 = param_2;
            if (uVar35 != 0) {
              do {
                uVar42 = uVar42 + 1;
                *pfVar40 = (*(float *)(lVar38 + 4) + *(float *)(lVar36 + -4)) * fVar6 + *pfVar40 +
                           (*(float *)(lVar38 + 8) + *(float *)(lVar36 + -8)) * fVar7;
                lVar36 = lVar36 + 4;
                lVar38 = lVar38 + 4;
                pfVar40 = pfVar40 + 1;
              } while (uVar42 < uVar35);
            }
            if (((uVar35 * 4 + lVar34) - 4 & 0xf) == 0) {
              lVar36 = uVar35 * 4;
              lVar38 = lVar30 + lVar36;
              do {
                pfVar5 = (float *)(lVar36 + -4 + lVar34);
                fVar8 = pfVar5[1];
                fVar9 = pfVar5[2];
                fVar10 = pfVar5[3];
                pfVar2 = (float *)(lVar36 + -8 + lVar34);
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                uVar35 = uVar35 + 8;
                lVar41 = lVar37 * -4 + param_1;
                pfVar3 = (float *)(lVar38 + 4 + lVar41);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                pfVar4 = (float *)(lVar38 + 8 + lVar41);
                fVar17 = pfVar4[1];
                fVar18 = pfVar4[2];
                fVar19 = pfVar4[3];
                pfVar40 = (float *)(lVar36 + (longlong)param_2);
                fVar20 = pfVar40[1];
                fVar21 = pfVar40[2];
                fVar22 = pfVar40[3];
                pfVar1 = (float *)(lVar36 + (longlong)param_2);
                *pfVar1 = (*pfVar3 + *pfVar5) * fVar6 + *pfVar40 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar14 + fVar8) * fVar6 + fVar20 + (fVar17 + fVar11) * fVar7;
                pfVar1[2] = (fVar15 + fVar9) * fVar6 + fVar21 + (fVar18 + fVar12) * fVar7;
                pfVar1[3] = (fVar16 + fVar10) * fVar6 + fVar22 + (fVar19 + fVar13) * fVar7;
                pfVar40 = (float *)(lVar38 + 0x14 + lVar41);
                fVar8 = pfVar40[1];
                fVar9 = pfVar40[2];
                fVar10 = pfVar40[3];
                pfVar1 = (float *)(lVar36 + 0xc + lVar34);
                fVar11 = pfVar1[1];
                fVar12 = pfVar1[2];
                fVar13 = pfVar1[3];
                pfVar5 = (float *)(lVar36 + 8 + lVar34);
                fVar14 = pfVar5[1];
                fVar15 = pfVar5[2];
                fVar16 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + 0x18 + lVar41);
                fVar17 = pfVar2[1];
                fVar18 = pfVar2[2];
                fVar19 = pfVar2[3];
                pfVar3 = (float *)(lVar36 + 0x10 + (longlong)param_2);
                fVar20 = pfVar3[1];
                fVar21 = pfVar3[2];
                fVar22 = pfVar3[3];
                lVar38 = lVar38 + 0x20;
                pfVar4 = (float *)(lVar36 + 0x10 + (longlong)param_2);
                *pfVar4 = (*pfVar40 + *pfVar1) * fVar6 + *pfVar3 + (*pfVar2 + *pfVar5) * fVar7;
                pfVar4[1] = (fVar8 + fVar11) * fVar6 + fVar20 + (fVar17 + fVar14) * fVar7;
                pfVar4[2] = (fVar9 + fVar12) * fVar6 + fVar21 + (fVar18 + fVar15) * fVar7;
                pfVar4[3] = (fVar10 + fVar13) * fVar6 + fVar22 + (fVar19 + fVar16) * fVar7;
                lVar36 = lVar36 + 0x20;
              } while (uVar35 < uVar29);
            }
            else {
              lVar36 = uVar35 * 4;
              lVar38 = lVar30 + lVar36;
              do {
                pfVar5 = (float *)(lVar36 + -4 + lVar34);
                fVar8 = pfVar5[1];
                fVar9 = pfVar5[2];
                fVar10 = pfVar5[3];
                pfVar2 = (float *)(lVar36 + -8 + lVar34);
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                uVar35 = uVar35 + 8;
                lVar41 = lVar37 * -4 + param_1;
                pfVar3 = (float *)(lVar38 + 4 + lVar41);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                pfVar4 = (float *)(lVar38 + 8 + lVar41);
                fVar17 = pfVar4[1];
                fVar18 = pfVar4[2];
                fVar19 = pfVar4[3];
                pfVar40 = (float *)(lVar36 + (longlong)param_2);
                fVar20 = pfVar40[1];
                fVar21 = pfVar40[2];
                fVar22 = pfVar40[3];
                pfVar1 = (float *)(lVar36 + (longlong)param_2);
                *pfVar1 = (*pfVar3 + *pfVar5) * fVar6 + *pfVar40 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar14 + fVar8) * fVar6 + fVar20 + (fVar17 + fVar11) * fVar7;
                pfVar1[2] = (fVar15 + fVar9) * fVar6 + fVar21 + (fVar18 + fVar12) * fVar7;
                pfVar1[3] = (fVar16 + fVar10) * fVar6 + fVar22 + (fVar19 + fVar13) * fVar7;
                pfVar40 = (float *)(lVar38 + 0x14 + lVar41);
                fVar8 = pfVar40[1];
                fVar9 = pfVar40[2];
                fVar10 = pfVar40[3];
                pfVar1 = (float *)(lVar36 + 0xc + lVar34);
                fVar11 = pfVar1[1];
                fVar12 = pfVar1[2];
                fVar13 = pfVar1[3];
                pfVar5 = (float *)(lVar36 + 8 + lVar34);
                fVar14 = pfVar5[1];
                fVar15 = pfVar5[2];
                fVar16 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + 0x18 + lVar41);
                fVar17 = pfVar2[1];
                fVar18 = pfVar2[2];
                fVar19 = pfVar2[3];
                pfVar3 = (float *)(lVar36 + 0x10 + (longlong)param_2);
                fVar20 = pfVar3[1];
                fVar21 = pfVar3[2];
                fVar22 = pfVar3[3];
                lVar38 = lVar38 + 0x20;
                pfVar4 = (float *)(lVar36 + 0x10 + (longlong)param_2);
                *pfVar4 = (*pfVar40 + *pfVar1) * fVar6 + *pfVar3 + (*pfVar2 + *pfVar5) * fVar7;
                pfVar4[1] = (fVar8 + fVar11) * fVar6 + fVar20 + (fVar17 + fVar14) * fVar7;
                pfVar4[2] = (fVar9 + fVar12) * fVar6 + fVar21 + (fVar18 + fVar15) * fVar7;
                pfVar4[3] = (fVar10 + fVar13) * fVar6 + fVar22 + (fVar19 + fVar16) * fVar7;
                lVar36 = lVar36 + 0x20;
              } while (uVar35 < uVar29);
            }
            if (uVar29 + 1 <= param_3) {
              uVar42 = param_3 - uVar29;
              if ((longlong)uVar42 < 4) {
                uVar35 = 0;
              }
              else {
                uVar43 = 0;
                uVar35 = uVar42 & 0xfffffffffffffffc;
                pfVar40 = param_2 + uVar29;
                lVar41 = 0;
                lVar38 = lVar37 * -4 + param_1 + uVar29 * 4;
                lVar36 = lVar30;
                do {
                  pfVar1 = (float *)(lVar36 + 4 + lVar38);
                  fVar8 = pfVar1[1];
                  fVar9 = pfVar1[2];
                  fVar10 = pfVar1[3];
                  pfVar5 = (float *)(lVar36 + 8 + lVar38);
                  fVar11 = pfVar5[1];
                  fVar12 = pfVar5[2];
                  fVar13 = pfVar5[3];
                  uVar43 = uVar43 + 4;
                  lVar32 = lVar34 + uVar29 * 4;
                  pfVar2 = (float *)(lVar41 + -4 + lVar32);
                  fVar14 = pfVar2[1];
                  fVar15 = pfVar2[2];
                  fVar16 = pfVar2[3];
                  pfVar3 = (float *)(lVar41 + -8 + lVar32);
                  fVar17 = pfVar3[1];
                  fVar18 = pfVar3[2];
                  fVar19 = pfVar3[3];
                  lVar36 = lVar36 + 0x10;
                  lVar41 = lVar41 + 0x10;
                  *pfVar40 = (*pfVar1 + *pfVar2) * fVar6 + *pfVar40 + (*pfVar5 + *pfVar3) * fVar7;
                  pfVar40[1] = (fVar8 + fVar14) * fVar6 + pfVar40[1] + (fVar11 + fVar17) * fVar7;
                  pfVar40[2] = (fVar9 + fVar15) * fVar6 + pfVar40[2] + (fVar12 + fVar18) * fVar7;
                  pfVar40[3] = (fVar10 + fVar16) * fVar6 + pfVar40[3] + (fVar13 + fVar19) * fVar7;
                  pfVar40 = pfVar40 + 4;
                } while (uVar43 < uVar35);
              }
LAB_1401937b3:
              if (uVar35 < uVar42) {
                lVar38 = uVar29 * 4 + lVar34;
                lVar36 = lVar31 + uVar29 * 4;
                do {
                  param_2[uVar29 + uVar35] =
                       (*(float *)(lVar36 + 4 + uVar35 * 4) + *(float *)(lVar38 + -4 + uVar35 * 4))
                       * fVar6 + param_2[uVar29 + uVar35] +
                       (*(float *)(lVar36 + 8 + uVar35 * 4) + *(float *)(lVar38 + -8 + uVar35 * 4))
                       * fVar7;
                  uVar35 = uVar35 + 1;
                } while (uVar35 < uVar42);
              }
            }
          }
        }
        uVar33 = uVar33 + 1;
        lVar31 = lVar31 + 8;
        lVar30 = lVar30 + 8;
        lVar34 = lVar34 + -8;
      } while (uVar33 < lVar37 - 1U >> 1);
      lVar34 = uVar33 * 2 + 1;
    }
    if (lVar37 != lVar34) {
      lVar31 = lVar37 * -4;
      lVar30 = lVar34 * 4;
      lStack_58 = lVar30 + param_1 + lVar31;
      fVar6 = param_4[lVar34];
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_140193c9e:
          uVar28 = 0;
          if (param_3 == 0) goto LAB_140193ae9;
          uVar33 = 0;
          uVar35 = param_3;
        }
        else {
          uVar33 = (ulonglong)param_2 & 0xf;
          if (uVar33 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_140193c9e;
            uVar33 = 0x10 - uVar33 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar33 + 8)) goto LAB_140193c9e;
          lVar36 = lVar34 * -4;
          lVar38 = param_1 + lVar31 + lVar30;
          uVar28 = param_3 - (param_3 - uVar33 & 7);
          lVar41 = param_1 + lVar39 + lVar36;
          uVar35 = 0;
          if (uVar33 != 0) {
            do {
              param_2[uVar35] =
                   (*(float *)(lVar38 + uVar35 * 4) + *(float *)(lVar41 + uVar35 * 4)) * fVar6 +
                   param_2[uVar35];
              uVar35 = uVar35 + 1;
            } while (uVar35 < uVar33);
          }
          if ((uVar33 * 4 + lVar41 & 0xf) == 0) {
            lVar32 = lVar31 + lVar30 + param_1;
            lVar36 = lVar36 + lVar39 + param_1;
            do {
              pfVar40 = (float *)(lVar38 + uVar33 * 4);
              fVar7 = pfVar40[1];
              fVar8 = pfVar40[2];
              fVar9 = pfVar40[3];
              pfVar1 = (float *)(lVar32 + 0x10 + uVar33 * 4);
              fVar10 = *pfVar1;
              fVar11 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar2 = (float *)(lVar41 + uVar33 * 4);
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar1 = (float *)(lVar36 + 0x10 + uVar33 * 4);
              fVar17 = *pfVar1;
              fVar18 = pfVar1[1];
              fVar19 = pfVar1[2];
              fVar20 = pfVar1[3];
              pfVar1 = param_2 + uVar33;
              fVar21 = pfVar1[1];
              fVar22 = pfVar1[2];
              fVar23 = pfVar1[3];
              pfVar5 = param_2 + uVar33 + 4;
              fVar24 = *pfVar5;
              fVar25 = pfVar5[1];
              fVar26 = pfVar5[2];
              fVar27 = pfVar5[3];
              pfVar5 = param_2 + uVar33;
              *pfVar5 = (*pfVar40 + *pfVar2) * fVar6 + *pfVar1;
              pfVar5[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar5[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar5[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar40 = param_2 + uVar33 + 4;
              *pfVar40 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar40[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar40[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar40[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar33 = uVar33 + 8;
            } while (uVar33 < uVar28);
          }
          else {
            lVar32 = lVar31 + lVar30 + param_1;
            lVar36 = lVar36 + lVar39 + param_1;
            do {
              pfVar40 = (float *)(lVar38 + uVar33 * 4);
              fVar7 = pfVar40[1];
              fVar8 = pfVar40[2];
              fVar9 = pfVar40[3];
              pfVar2 = (float *)(lVar41 + uVar33 * 4);
              fVar10 = pfVar2[1];
              fVar11 = pfVar2[2];
              fVar12 = pfVar2[3];
              pfVar1 = (float *)(lVar32 + 0x10 + uVar33 * 4);
              fVar13 = *pfVar1;
              fVar14 = pfVar1[1];
              fVar15 = pfVar1[2];
              fVar16 = pfVar1[3];
              pfVar1 = (float *)(lVar36 + 0x10 + uVar33 * 4);
              fVar17 = *pfVar1;
              fVar18 = pfVar1[1];
              fVar19 = pfVar1[2];
              fVar20 = pfVar1[3];
              pfVar1 = param_2 + uVar33;
              fVar21 = pfVar1[1];
              fVar22 = pfVar1[2];
              fVar23 = pfVar1[3];
              pfVar5 = param_2 + uVar33 + 4;
              fVar24 = *pfVar5;
              fVar25 = pfVar5[1];
              fVar26 = pfVar5[2];
              fVar27 = pfVar5[3];
              pfVar5 = param_2 + uVar33;
              *pfVar5 = (*pfVar40 + *pfVar2) * fVar6 + *pfVar1;
              pfVar5[1] = (fVar7 + fVar10) * fVar6 + fVar21;
              pfVar5[2] = (fVar8 + fVar11) * fVar6 + fVar22;
              pfVar5[3] = (fVar9 + fVar12) * fVar6 + fVar23;
              pfVar40 = param_2 + uVar33 + 4;
              *pfVar40 = (fVar13 + fVar17) * fVar6 + fVar24;
              pfVar40[1] = (fVar14 + fVar18) * fVar6 + fVar25;
              pfVar40[2] = (fVar15 + fVar19) * fVar6 + fVar26;
              pfVar40[3] = (fVar16 + fVar20) * fVar6 + fVar27;
              uVar33 = uVar33 + 8;
            } while (uVar33 < uVar28);
          }
          if (param_3 < uVar28 + 1) goto LAB_140193ae9;
          uVar35 = param_3 - uVar28;
          if ((longlong)uVar35 < 4) {
            uVar33 = 0;
          }
          else {
            uVar33 = uVar35 & 0xfffffffffffffffc;
            uVar29 = 0;
            do {
              pfVar40 = (float *)(lVar32 + uVar28 * 4 + uVar29 * 4);
              fVar7 = pfVar40[1];
              fVar8 = pfVar40[2];
              fVar9 = pfVar40[3];
              pfVar1 = (float *)(lVar36 + uVar28 * 4 + uVar29 * 4);
              fVar10 = pfVar1[1];
              fVar11 = pfVar1[2];
              fVar12 = pfVar1[3];
              pfVar5 = param_2 + uVar28 + uVar29;
              fVar13 = pfVar5[1];
              fVar14 = pfVar5[2];
              fVar15 = pfVar5[3];
              pfVar2 = param_2 + uVar28 + uVar29;
              *pfVar2 = (*pfVar40 + *pfVar1) * fVar6 + *pfVar5;
              pfVar2[1] = (fVar7 + fVar10) * fVar6 + fVar13;
              pfVar2[2] = (fVar8 + fVar11) * fVar6 + fVar14;
              pfVar2[3] = (fVar9 + fVar12) * fVar6 + fVar15;
              uVar29 = uVar29 + 4;
            } while (uVar29 < uVar33);
          }
        }
        if (uVar33 < uVar35) {
          do {
            param_2[uVar28 + uVar33] =
                 (*(float *)(lVar31 + lVar30 + param_1 + uVar28 * 4 + uVar33 * 4) +
                 *(float *)(param_1 + lVar34 * -4 + lVar39 + uVar28 * 4 + uVar33 * 4)) * fVar6 +
                 param_2[uVar28 + uVar33];
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar35);
        }
      }
    }
  }
LAB_140193ae9:
  fVar6 = param_4[lVar37];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar33 = (ulonglong)param_2 & 0xf;
    if (uVar33 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_140193c92;
      uVar33 = 0x10 - uVar33 >> 2;
    }
    if ((longlong)(uVar33 + 8) <= (longlong)param_3) {
      uVar35 = 0;
      uVar28 = param_3 - (param_3 - uVar33 & 7);
      if (uVar33 != 0) {
        do {
          param_2[uVar35] = *(float *)(lStack_58 + 4 + uVar35 * 4) * fVar6 + param_2[uVar35];
          uVar35 = uVar35 + 1;
        } while (uVar35 < uVar33);
      }
      if ((uVar33 * 4 + lStack_58 + 4 & 0xf) == 0) {
        do {
          pfVar5 = (float *)(lStack_58 + 4 + uVar33 * 4);
          fVar7 = pfVar5[1];
          fVar8 = pfVar5[2];
          fVar9 = pfVar5[3];
          pfVar40 = (float *)(lStack_58 + 0x14 + uVar33 * 4);
          fVar10 = *pfVar40;
          fVar11 = pfVar40[1];
          fVar12 = pfVar40[2];
          fVar13 = pfVar40[3];
          pfVar40 = param_2 + uVar33;
          fVar14 = pfVar40[1];
          fVar15 = pfVar40[2];
          fVar16 = pfVar40[3];
          pfVar1 = param_2 + uVar33 + 4;
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = param_2 + uVar33;
          *pfVar1 = *pfVar5 * fVar6 + *pfVar40;
          pfVar1[1] = fVar7 * fVar6 + fVar14;
          pfVar1[2] = fVar8 * fVar6 + fVar15;
          pfVar1[3] = fVar9 * fVar6 + fVar16;
          pfVar40 = param_2 + uVar33 + 4;
          *pfVar40 = fVar10 * fVar6 + fVar17;
          pfVar40[1] = fVar11 * fVar6 + fVar18;
          pfVar40[2] = fVar12 * fVar6 + fVar19;
          pfVar40[3] = fVar13 * fVar6 + fVar20;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar28);
      }
      else {
        do {
          pfVar5 = (float *)(lStack_58 + 4 + uVar33 * 4);
          fVar7 = pfVar5[1];
          fVar8 = pfVar5[2];
          fVar9 = pfVar5[3];
          pfVar40 = (float *)(lStack_58 + 0x14 + uVar33 * 4);
          fVar10 = *pfVar40;
          fVar11 = pfVar40[1];
          fVar12 = pfVar40[2];
          fVar13 = pfVar40[3];
          pfVar40 = param_2 + uVar33;
          fVar14 = pfVar40[1];
          fVar15 = pfVar40[2];
          fVar16 = pfVar40[3];
          pfVar1 = param_2 + uVar33 + 4;
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = param_2 + uVar33;
          *pfVar1 = *pfVar5 * fVar6 + *pfVar40;
          pfVar1[1] = fVar7 * fVar6 + fVar14;
          pfVar1[2] = fVar8 * fVar6 + fVar15;
          pfVar1[3] = fVar9 * fVar6 + fVar16;
          pfVar40 = param_2 + uVar33 + 4;
          *pfVar40 = fVar10 * fVar6 + fVar17;
          pfVar40[1] = fVar11 * fVar6 + fVar18;
          pfVar40[2] = fVar12 * fVar6 + fVar19;
          pfVar40[3] = fVar13 * fVar6 + fVar20;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar28);
      }
      goto LAB_140193c2b;
    }
  }
LAB_140193c92:
  uVar28 = 0;
LAB_140193c2b:
  uVar33 = 0;
  if (uVar28 + 1 <= param_3) {
    do {
      param_2[uVar28 + uVar33] =
           *(float *)(lStack_58 + uVar28 * 4 + 4 + uVar33 * 4) * fVar6 + param_2[uVar28 + uVar33];
      uVar33 = uVar33 + 1;
    } while (uVar33 < param_3 - uVar28);
  }
  return;
}

