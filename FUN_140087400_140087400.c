
void FUN_140087400(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  float fVar29;
  float fVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  float *pfVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  
  fVar6 = *param_4;
  uVar33 = param_3 * 3;
  lVar31 = (longlong)(param_5 >> 1);
  lVar32 = lVar31 * -0xc + param_1;
  if (0 < (longlong)uVar33) {
    if ((longlong)uVar33 < 8) {
LAB_140087f67:
      uVar39 = 0;
      uVar36 = 0;
      uVar38 = uVar33;
      if (uVar33 == 0) goto LAB_14008763f;
    }
    else {
      uVar38 = (ulonglong)param_2 & 0xf;
      if (uVar38 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_140087f67;
        uVar38 = 0x10 - uVar38 >> 2;
      }
      if ((longlong)uVar33 < (longlong)(uVar38 + 8)) goto LAB_140087f67;
      uVar36 = 0;
      lVar46 = param_1 + lVar31 * 0xc;
      uVar39 = uVar33 - (uVar33 - uVar38 & 7);
      lVar40 = lVar31 * -0xc + param_1;
      if (uVar38 != 0) {
        do {
          param_2[uVar36] =
               (*(float *)(lVar40 + uVar36 * 4) + *(float *)(lVar46 + uVar36 * 4)) * fVar6;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar38);
      }
      if ((lVar46 + uVar38 * 4 & 0xf) == 0) {
        do {
          pfVar42 = (float *)(lVar40 + uVar38 * 4);
          fVar7 = pfVar42[1];
          fVar11 = pfVar42[2];
          fVar12 = pfVar42[3];
          pfVar1 = (float *)(lVar40 + 0x10 + uVar38 * 4);
          fVar13 = *pfVar1;
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar1 = (float *)(lVar46 + uVar38 * 4);
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + 0x10 + uVar38 * 4);
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = param_2 + uVar38;
          *pfVar2 = (*pfVar42 + *pfVar1) * fVar6;
          pfVar2[1] = (fVar7 + fVar17) * fVar6;
          pfVar2[2] = (fVar11 + fVar18) * fVar6;
          pfVar2[3] = (fVar12 + fVar19) * fVar6;
          pfVar42 = param_2 + uVar38 + 4;
          *pfVar42 = (fVar13 + fVar20) * fVar6;
          pfVar42[1] = (fVar14 + fVar21) * fVar6;
          pfVar42[2] = (fVar15 + fVar22) * fVar6;
          pfVar42[3] = (fVar16 + fVar23) * fVar6;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar39);
      }
      else {
        do {
          pfVar42 = (float *)(lVar40 + uVar38 * 4);
          fVar7 = pfVar42[1];
          fVar11 = pfVar42[2];
          fVar12 = pfVar42[3];
          pfVar1 = (float *)(lVar40 + 0x10 + uVar38 * 4);
          fVar13 = *pfVar1;
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar1 = (float *)(lVar46 + uVar38 * 4);
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + 0x10 + uVar38 * 4);
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = param_2 + uVar38;
          *pfVar2 = (*pfVar42 + *pfVar1) * fVar6;
          pfVar2[1] = (fVar7 + fVar17) * fVar6;
          pfVar2[2] = (fVar11 + fVar18) * fVar6;
          pfVar2[3] = (fVar12 + fVar19) * fVar6;
          pfVar42 = param_2 + uVar38 + 4;
          *pfVar42 = (fVar13 + fVar20) * fVar6;
          pfVar42[1] = (fVar14 + fVar21) * fVar6;
          pfVar42[2] = (fVar15 + fVar22) * fVar6;
          pfVar42[3] = (fVar16 + fVar23) * fVar6;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar39);
      }
      if (uVar33 < uVar39 + 1) goto LAB_14008763f;
      uVar38 = uVar33 - uVar39;
      if ((longlong)uVar38 < 4) {
        uVar36 = 0;
      }
      else {
        uVar43 = 0;
        uVar36 = uVar38 & 0xfffffffffffffffc;
        do {
          pfVar42 = (float *)(lVar40 + uVar39 * 4 + uVar43 * 4);
          fVar7 = pfVar42[1];
          fVar11 = pfVar42[2];
          fVar12 = pfVar42[3];
          pfVar1 = (float *)(lVar46 + uVar39 * 4 + uVar43 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = param_2 + uVar39 + uVar43;
          *pfVar2 = (*pfVar42 + *pfVar1) * fVar6;
          pfVar2[1] = (fVar7 + fVar13) * fVar6;
          pfVar2[2] = (fVar11 + fVar14) * fVar6;
          pfVar2[3] = (fVar12 + fVar15) * fVar6;
          uVar43 = uVar43 + 4;
        } while (uVar43 < uVar36);
      }
    }
    if (uVar36 < uVar38) {
      do {
        param_2[uVar39 + uVar36] =
             (*(float *)(lVar31 * -0xc + param_1 + uVar39 * 4 + uVar36 * 4) +
             *(float *)(param_1 + lVar31 * 0xc + uVar39 * 4 + uVar36 * 4)) * fVar6;
        uVar36 = uVar36 + 1;
      } while (uVar36 < uVar38);
    }
  }
LAB_14008763f:
  if (1 < lVar31) {
    lVar46 = 1;
    lVar40 = 0;
    if (lVar31 - 1U >> 1 != 0) {
      lVar46 = param_1 + lVar31 * 0xc;
      uVar36 = (ulonglong)param_2 & 0xf;
      lVar37 = lVar31 * -0xc + param_1;
      uVar38 = 0;
      do {
        uVar39 = uVar38;
        fVar6 = param_4[uVar39 * 2 + 1];
        fVar7 = param_4[uVar39 * 2 + 2];
        lVar32 = lVar37 + 0x18;
        if (0 < (longlong)uVar33) {
          if (((longlong)uVar33 < 8) ||
             (((uVar38 = uVar36, uVar36 != 0 &&
               (uVar38 = 0x10 - uVar36 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)uVar33 < (longlong)(uVar38 + 8))))) {
            uVar43 = 0;
            if (uVar33 != 0) {
              uVar44 = 0;
              uVar38 = uVar33;
              goto LAB_1400879ef;
            }
          }
          else {
            uVar44 = 0;
            uVar43 = uVar33 - (uVar33 - uVar38 & 7);
            lVar34 = lVar46;
            lVar41 = lVar37;
            pfVar42 = param_2;
            if (uVar38 != 0) {
              do {
                uVar44 = uVar44 + 1;
                *pfVar42 = (*(float *)(lVar41 + 0xc) + *(float *)(lVar34 + -0xc)) * fVar6 + *pfVar42
                           + (*(float *)(lVar41 + 0x18) + *(float *)(lVar34 + -0x18)) * fVar7;
                lVar34 = lVar34 + 4;
                lVar41 = lVar41 + 4;
                pfVar42 = pfVar42 + 1;
              } while (uVar44 < uVar38);
            }
            if ((lVar46 + -0xc + uVar38 * 4 & 0xf) == 0) {
              lVar41 = uVar38 * 4;
              lVar34 = lVar40 + uVar38 * 4;
              do {
                uVar38 = uVar38 + 8;
                pfVar2 = (float *)(lVar41 + -0x18 + lVar46);
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                lVar45 = lVar31 * -0xc + param_1;
                pfVar3 = (float *)(lVar41 + -0xc + lVar46);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                pfVar4 = (float *)(lVar34 + 0x18 + lVar45);
                fVar17 = pfVar4[1];
                fVar18 = pfVar4[2];
                fVar19 = pfVar4[3];
                pfVar5 = (float *)(lVar34 + 0xc + lVar45);
                fVar20 = pfVar5[1];
                fVar21 = pfVar5[2];
                fVar22 = pfVar5[3];
                pfVar42 = (float *)(lVar41 + (longlong)param_2);
                fVar23 = pfVar42[1];
                fVar24 = pfVar42[2];
                fVar25 = pfVar42[3];
                pfVar1 = (float *)(lVar41 + (longlong)param_2);
                *pfVar1 = (*pfVar5 + *pfVar3) * fVar6 + *pfVar42 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar20 + fVar14) * fVar6 + fVar23 + (fVar17 + fVar11) * fVar7;
                pfVar1[2] = (fVar21 + fVar15) * fVar6 + fVar24 + (fVar18 + fVar12) * fVar7;
                pfVar1[3] = (fVar22 + fVar16) * fVar6 + fVar25 + (fVar19 + fVar13) * fVar7;
                pfVar42 = (float *)(lVar34 + 0x1c + lVar45);
                fVar11 = pfVar42[1];
                fVar12 = pfVar42[2];
                fVar13 = pfVar42[3];
                pfVar1 = (float *)(lVar41 + 4 + lVar46);
                fVar14 = pfVar1[1];
                fVar15 = pfVar1[2];
                fVar16 = pfVar1[3];
                pfVar2 = (float *)(lVar41 + -8 + lVar46);
                fVar17 = pfVar2[1];
                fVar18 = pfVar2[2];
                fVar19 = pfVar2[3];
                pfVar3 = (float *)(lVar34 + 0x28 + lVar45);
                fVar20 = pfVar3[1];
                fVar21 = pfVar3[2];
                fVar22 = pfVar3[3];
                lVar34 = lVar34 + 0x20;
                pfVar4 = (float *)(lVar41 + 0x10 + (longlong)param_2);
                fVar23 = pfVar4[1];
                fVar24 = pfVar4[2];
                fVar25 = pfVar4[3];
                pfVar5 = (float *)(lVar41 + 0x10 + (longlong)param_2);
                *pfVar5 = (*pfVar42 + *pfVar1) * fVar6 + *pfVar4 + (*pfVar3 + *pfVar2) * fVar7;
                pfVar5[1] = (fVar11 + fVar14) * fVar6 + fVar23 + (fVar20 + fVar17) * fVar7;
                pfVar5[2] = (fVar12 + fVar15) * fVar6 + fVar24 + (fVar21 + fVar18) * fVar7;
                pfVar5[3] = (fVar13 + fVar16) * fVar6 + fVar25 + (fVar22 + fVar19) * fVar7;
                lVar41 = lVar41 + 0x20;
              } while (uVar38 < uVar43);
            }
            else {
              lVar41 = uVar38 * 4;
              lVar34 = lVar40 + uVar38 * 4;
              do {
                uVar38 = uVar38 + 8;
                pfVar2 = (float *)(lVar41 + -0x18 + lVar46);
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                lVar45 = lVar31 * -0xc + param_1;
                pfVar3 = (float *)(lVar41 + -0xc + lVar46);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                pfVar4 = (float *)(lVar34 + 0x18 + lVar45);
                fVar17 = pfVar4[1];
                fVar18 = pfVar4[2];
                fVar19 = pfVar4[3];
                pfVar5 = (float *)(lVar34 + 0xc + lVar45);
                fVar20 = pfVar5[1];
                fVar21 = pfVar5[2];
                fVar22 = pfVar5[3];
                pfVar42 = (float *)(lVar41 + (longlong)param_2);
                fVar23 = pfVar42[1];
                fVar24 = pfVar42[2];
                fVar25 = pfVar42[3];
                pfVar1 = (float *)(lVar41 + (longlong)param_2);
                *pfVar1 = (*pfVar5 + *pfVar3) * fVar6 + *pfVar42 + (*pfVar4 + *pfVar2) * fVar7;
                pfVar1[1] = (fVar20 + fVar14) * fVar6 + fVar23 + (fVar17 + fVar11) * fVar7;
                pfVar1[2] = (fVar21 + fVar15) * fVar6 + fVar24 + (fVar18 + fVar12) * fVar7;
                pfVar1[3] = (fVar22 + fVar16) * fVar6 + fVar25 + (fVar19 + fVar13) * fVar7;
                pfVar42 = (float *)(lVar34 + 0x1c + lVar45);
                fVar11 = pfVar42[1];
                fVar12 = pfVar42[2];
                fVar13 = pfVar42[3];
                pfVar1 = (float *)(lVar41 + 4 + lVar46);
                fVar14 = pfVar1[1];
                fVar15 = pfVar1[2];
                fVar16 = pfVar1[3];
                pfVar2 = (float *)(lVar41 + -8 + lVar46);
                fVar17 = pfVar2[1];
                fVar18 = pfVar2[2];
                fVar19 = pfVar2[3];
                pfVar3 = (float *)(lVar34 + 0x28 + lVar45);
                fVar20 = pfVar3[1];
                fVar21 = pfVar3[2];
                fVar22 = pfVar3[3];
                lVar34 = lVar34 + 0x20;
                pfVar4 = (float *)(lVar41 + 0x10 + (longlong)param_2);
                fVar23 = pfVar4[1];
                fVar24 = pfVar4[2];
                fVar25 = pfVar4[3];
                pfVar5 = (float *)(lVar41 + 0x10 + (longlong)param_2);
                *pfVar5 = (*pfVar42 + *pfVar1) * fVar6 + *pfVar4 + (*pfVar3 + *pfVar2) * fVar7;
                pfVar5[1] = (fVar11 + fVar14) * fVar6 + fVar23 + (fVar20 + fVar17) * fVar7;
                pfVar5[2] = (fVar12 + fVar15) * fVar6 + fVar24 + (fVar21 + fVar18) * fVar7;
                pfVar5[3] = (fVar13 + fVar16) * fVar6 + fVar25 + (fVar22 + fVar19) * fVar7;
                lVar41 = lVar41 + 0x20;
              } while (uVar38 < uVar43);
            }
            if (uVar43 + 1 <= uVar33) {
              uVar38 = uVar33 - uVar43;
              if ((longlong)uVar38 < 4) {
                uVar44 = 0;
              }
              else {
                uVar35 = 0;
                uVar44 = uVar38 & 0xfffffffffffffffc;
                pfVar42 = param_2 + uVar43;
                lVar34 = lVar31 * -0xc + param_1 + uVar43 * 4;
                lVar41 = lVar40;
                uVar47 = uVar35;
                do {
                  lVar45 = lVar46 + uVar43 * 4;
                  uVar35 = uVar35 + 4;
                  pfVar1 = (float *)(lVar41 + 0xc + lVar34);
                  fVar11 = pfVar1[1];
                  fVar12 = pfVar1[2];
                  fVar13 = pfVar1[3];
                  pfVar2 = (float *)((uVar47 - 0xc) + lVar45);
                  fVar14 = pfVar2[1];
                  fVar15 = pfVar2[2];
                  fVar16 = pfVar2[3];
                  pfVar3 = (float *)((uVar47 - 0x18) + lVar45);
                  fVar17 = pfVar3[1];
                  fVar18 = pfVar3[2];
                  fVar19 = pfVar3[3];
                  uVar47 = uVar47 + 0x10;
                  pfVar4 = (float *)(lVar41 + 0x18 + lVar34);
                  fVar20 = pfVar4[1];
                  fVar21 = pfVar4[2];
                  fVar22 = pfVar4[3];
                  lVar41 = lVar41 + 0x10;
                  *pfVar42 = (*pfVar1 + *pfVar2) * fVar6 + *pfVar42 + (*pfVar4 + *pfVar3) * fVar7;
                  pfVar42[1] = (fVar11 + fVar14) * fVar6 + pfVar42[1] + (fVar20 + fVar17) * fVar7;
                  pfVar42[2] = (fVar12 + fVar15) * fVar6 + pfVar42[2] + (fVar21 + fVar18) * fVar7;
                  pfVar42[3] = (fVar13 + fVar16) * fVar6 + pfVar42[3] + (fVar22 + fVar19) * fVar7;
                  pfVar42 = pfVar42 + 4;
                } while (uVar35 < uVar44);
              }
LAB_1400879ef:
              if (uVar44 < uVar38) {
                lVar34 = lVar37 + uVar43 * 4;
                lVar41 = lVar46 + uVar43 * 4;
                do {
                  param_2[uVar43 + uVar44] =
                       (*(float *)(lVar34 + 0xc + uVar44 * 4) +
                       *(float *)(lVar41 + -0xc + uVar44 * 4)) * fVar6 + param_2[uVar43 + uVar44] +
                       (*(float *)(lVar34 + 0x18 + uVar44 * 4) +
                       *(float *)(lVar41 + -0x18 + uVar44 * 4)) * fVar7;
                  uVar44 = uVar44 + 1;
                } while (uVar44 < uVar38);
              }
            }
          }
        }
        uVar38 = uVar39 + 1;
        lVar37 = lVar37 + 0x18;
        lVar40 = lVar40 + 0x18;
        lVar46 = lVar46 + -0x18;
      } while (uVar38 < lVar31 - 1U >> 1);
      lVar46 = uVar39 + 2 + uVar38;
    }
    if (lVar31 != lVar46) {
      fVar6 = param_4[lVar46];
      lVar40 = lVar31 * -0xc;
      lVar32 = param_1 + lVar40 + lVar46 * 0xc;
      if (0 < (longlong)uVar33) {
        if ((longlong)uVar33 < 8) {
LAB_140087f28:
          uVar36 = 0;
          if (uVar33 == 0) goto LAB_140087d48;
          uVar39 = 0;
          uVar38 = uVar33;
        }
        else {
          uVar38 = (ulonglong)param_2 & 0xf;
          if (uVar38 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_140087f28;
            uVar38 = 0x10 - uVar38 >> 2;
          }
          if ((longlong)uVar33 < (longlong)(uVar38 + 8)) goto LAB_140087f28;
          uVar39 = 0;
          lVar34 = lVar46 * -0xc;
          lVar37 = param_1 + lVar31 * 0xc + lVar34;
          uVar36 = uVar33 - (uVar33 - uVar38 & 7);
          if (uVar38 != 0) {
            do {
              param_2[uVar39] =
                   (*(float *)(lVar32 + uVar39 * 4) + *(float *)(lVar37 + uVar39 * 4)) * fVar6 +
                   param_2[uVar39];
              uVar39 = uVar39 + 1;
            } while (uVar39 < uVar38);
          }
          if ((lVar37 + uVar38 * 4 & 0xf) == 0) {
            lVar41 = lVar34 + lVar31 * 0xc + param_1;
            lVar34 = lVar40 + lVar46 * 0xc + param_1;
            do {
              pfVar42 = (float *)(lVar32 + uVar38 * 4);
              fVar7 = pfVar42[1];
              fVar11 = pfVar42[2];
              fVar12 = pfVar42[3];
              pfVar1 = (float *)(lVar34 + 0x10 + uVar38 * 4);
              fVar13 = *pfVar1;
              fVar14 = pfVar1[1];
              fVar15 = pfVar1[2];
              fVar16 = pfVar1[3];
              pfVar1 = (float *)(lVar37 + uVar38 * 4);
              fVar17 = pfVar1[1];
              fVar18 = pfVar1[2];
              fVar19 = pfVar1[3];
              pfVar2 = (float *)(lVar41 + 0x10 + uVar38 * 4);
              fVar20 = *pfVar2;
              fVar21 = pfVar2[1];
              fVar22 = pfVar2[2];
              fVar23 = pfVar2[3];
              pfVar3 = param_2 + uVar38;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar2 = param_2 + uVar38 + 4;
              fVar27 = *pfVar2;
              fVar28 = pfVar2[1];
              fVar29 = pfVar2[2];
              fVar30 = pfVar2[3];
              pfVar2 = param_2 + uVar38;
              *pfVar2 = (*pfVar42 + *pfVar1) * fVar6 + *pfVar3;
              pfVar2[1] = (fVar7 + fVar17) * fVar6 + fVar24;
              pfVar2[2] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar2[3] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar42 = param_2 + uVar38 + 4;
              *pfVar42 = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar42[1] = (fVar14 + fVar21) * fVar6 + fVar28;
              pfVar42[2] = (fVar15 + fVar22) * fVar6 + fVar29;
              pfVar42[3] = (fVar16 + fVar23) * fVar6 + fVar30;
              uVar38 = uVar38 + 8;
            } while (uVar38 < uVar36);
          }
          else {
            lVar41 = lVar34 + lVar31 * 0xc + param_1;
            lVar34 = lVar40 + lVar46 * 0xc + param_1;
            do {
              pfVar42 = (float *)(lVar32 + uVar38 * 4);
              fVar7 = pfVar42[1];
              fVar11 = pfVar42[2];
              fVar12 = pfVar42[3];
              pfVar1 = (float *)(lVar37 + uVar38 * 4);
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar2 = (float *)(lVar34 + 0x10 + uVar38 * 4);
              fVar16 = *pfVar2;
              fVar17 = pfVar2[1];
              fVar18 = pfVar2[2];
              fVar19 = pfVar2[3];
              pfVar2 = (float *)(lVar41 + 0x10 + uVar38 * 4);
              fVar20 = *pfVar2;
              fVar21 = pfVar2[1];
              fVar22 = pfVar2[2];
              fVar23 = pfVar2[3];
              pfVar3 = param_2 + uVar38;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar2 = param_2 + uVar38 + 4;
              fVar27 = *pfVar2;
              fVar28 = pfVar2[1];
              fVar29 = pfVar2[2];
              fVar30 = pfVar2[3];
              pfVar2 = param_2 + uVar38;
              *pfVar2 = (*pfVar42 + *pfVar1) * fVar6 + *pfVar3;
              pfVar2[1] = (fVar7 + fVar13) * fVar6 + fVar24;
              pfVar2[2] = (fVar11 + fVar14) * fVar6 + fVar25;
              pfVar2[3] = (fVar12 + fVar15) * fVar6 + fVar26;
              pfVar42 = param_2 + uVar38 + 4;
              *pfVar42 = (fVar16 + fVar20) * fVar6 + fVar27;
              pfVar42[1] = (fVar17 + fVar21) * fVar6 + fVar28;
              pfVar42[2] = (fVar18 + fVar22) * fVar6 + fVar29;
              pfVar42[3] = (fVar19 + fVar23) * fVar6 + fVar30;
              uVar38 = uVar38 + 8;
            } while (uVar38 < uVar36);
          }
          if (uVar33 < uVar36 + 1) goto LAB_140087d48;
          uVar38 = uVar33 - uVar36;
          if ((longlong)uVar38 < 2) {
            uVar39 = 0;
          }
          else {
            uVar43 = 0;
            lVar37 = 0;
            uVar39 = uVar38 & 0xfffffffffffffffe;
            do {
              uVar8 = *(undefined8 *)(lVar37 + lVar34 + uVar36 * 4);
              uVar43 = uVar43 + 2;
              uVar9 = *(undefined8 *)(lVar37 + lVar41 + uVar36 * 4);
              uVar10 = *(undefined8 *)((longlong)param_2 + lVar37 + uVar36 * 4);
              *(ulonglong *)((longlong)param_2 + lVar37 + uVar36 * 4) =
                   CONCAT44((float)((ulonglong)uVar10 >> 0x20) +
                            ((float)((ulonglong)uVar8 >> 0x20) + (float)((ulonglong)uVar9 >> 0x20))
                            * fVar6,(float)uVar10 + ((float)uVar8 + (float)uVar9) * fVar6);
              lVar37 = lVar37 + 8;
            } while (uVar43 < uVar39);
          }
        }
        if (uVar39 < uVar38) {
          do {
            param_2[uVar36 + uVar39] =
                 (*(float *)(lVar40 + lVar46 * 0xc + param_1 + uVar36 * 4 + uVar39 * 4) +
                 *(float *)(param_1 + lVar46 * -0xc + lVar31 * 0xc + uVar36 * 4 + uVar39 * 4)) *
                 fVar6 + param_2[uVar36 + uVar39];
            uVar39 = uVar39 + 1;
          } while (uVar39 < uVar38);
        }
      }
    }
  }
LAB_140087d48:
  fVar6 = param_4[lVar31];
  if ((longlong)uVar33 < 1) {
    return;
  }
  if (7 < (longlong)uVar33) {
    uVar38 = (ulonglong)param_2 & 0xf;
    if (uVar38 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_140087f14;
      uVar38 = 0x10 - uVar38 >> 2;
    }
    if ((longlong)(uVar38 + 8) <= (longlong)uVar33) {
      uVar39 = 0;
      uVar36 = uVar33 - (uVar33 - uVar38 & 7);
      if (uVar38 != 0) {
        do {
          param_2[uVar39] = *(float *)(lVar32 + 0xc + uVar39 * 4) * fVar6 + param_2[uVar39];
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar38);
      }
      if ((lVar32 + 0xc + uVar38 * 4 & 0xf) == 0) {
        do {
          pfVar42 = (float *)(lVar32 + 0xc + uVar38 * 4);
          fVar7 = pfVar42[1];
          fVar11 = pfVar42[2];
          fVar12 = pfVar42[3];
          pfVar1 = (float *)(lVar32 + 0x1c + uVar38 * 4);
          fVar13 = *pfVar1;
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = param_2 + uVar38;
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar1 = param_2 + uVar38 + 4;
          fVar20 = *pfVar1;
          fVar21 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          pfVar1 = param_2 + uVar38;
          *pfVar1 = *pfVar42 * fVar6 + *pfVar2;
          pfVar1[1] = fVar7 * fVar6 + fVar17;
          pfVar1[2] = fVar11 * fVar6 + fVar18;
          pfVar1[3] = fVar12 * fVar6 + fVar19;
          pfVar42 = param_2 + uVar38 + 4;
          *pfVar42 = fVar13 * fVar6 + fVar20;
          pfVar42[1] = fVar14 * fVar6 + fVar21;
          pfVar42[2] = fVar15 * fVar6 + fVar22;
          pfVar42[3] = fVar16 * fVar6 + fVar23;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar36);
      }
      else {
        do {
          pfVar42 = (float *)(lVar32 + 0xc + uVar38 * 4);
          fVar7 = pfVar42[1];
          fVar11 = pfVar42[2];
          fVar12 = pfVar42[3];
          pfVar1 = (float *)(lVar32 + 0x1c + uVar38 * 4);
          fVar13 = *pfVar1;
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = param_2 + uVar38;
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar1 = param_2 + uVar38 + 4;
          fVar20 = *pfVar1;
          fVar21 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          pfVar1 = param_2 + uVar38;
          *pfVar1 = *pfVar42 * fVar6 + *pfVar2;
          pfVar1[1] = fVar7 * fVar6 + fVar17;
          pfVar1[2] = fVar11 * fVar6 + fVar18;
          pfVar1[3] = fVar12 * fVar6 + fVar19;
          pfVar42 = param_2 + uVar38 + 4;
          *pfVar42 = fVar13 * fVar6 + fVar20;
          pfVar42[1] = fVar14 * fVar6 + fVar21;
          pfVar42[2] = fVar15 * fVar6 + fVar22;
          pfVar42[3] = fVar16 * fVar6 + fVar23;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar36);
      }
      if (uVar33 < uVar36 + 1) {
        return;
      }
      uVar33 = uVar33 - uVar36;
      if ((longlong)uVar33 < 2) {
        uVar38 = 0;
      }
      else {
        uVar39 = 0;
        uVar38 = uVar33 & 0xfffffffffffffffe;
        lVar31 = 0;
        do {
          uVar8 = *(undefined8 *)(lVar31 + 0xc + lVar32 + uVar36 * 4);
          uVar39 = uVar39 + 2;
          uVar9 = *(undefined8 *)((longlong)param_2 + lVar31 + uVar36 * 4);
          *(ulonglong *)((longlong)param_2 + lVar31 + uVar36 * 4) =
               CONCAT44((float)((ulonglong)uVar9 >> 0x20) +
                        (float)((ulonglong)uVar8 >> 0x20) * fVar6,
                        (float)uVar9 + (float)uVar8 * fVar6);
          lVar31 = lVar31 + 8;
        } while (uVar39 < uVar38);
      }
      goto LAB_140087ec5;
    }
  }
LAB_140087f14:
  uVar36 = 0;
  uVar38 = 0;
  if (uVar33 == 0) {
    return;
  }
LAB_140087ec5:
  if (uVar38 < uVar33) {
    do {
      param_2[uVar36 + uVar38] =
           *(float *)(lVar32 + uVar36 * 4 + 0xc + uVar38 * 4) * fVar6 + param_2[uVar36 + uVar38];
      uVar38 = uVar38 + 1;
    } while (uVar38 < uVar33);
  }
  return;
}

