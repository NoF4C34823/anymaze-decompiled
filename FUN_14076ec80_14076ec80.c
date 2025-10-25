
void FUN_14076ec80(longlong param_1,float *param_2,ulonglong param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  float fVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  float *pfVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  
  fVar7 = *param_4;
  lVar39 = (longlong)(param_5 >> 1);
  lVar41 = param_1 + lVar39 * -4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_14076f721:
      uVar33 = 0;
      uVar32 = 0;
      uVar35 = param_3;
      if (param_3 == 0) goto LAB_14076ee9c;
    }
    else {
      uVar35 = (ulonglong)param_2 & 0xf;
      if (uVar35 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_14076f721;
        uVar35 = 0x10 - uVar35 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar35 + 8)) goto LAB_14076f721;
      uVar32 = 0;
      lVar37 = param_1 + lVar39 * 4;
      lVar36 = lVar39 * -4 + param_1;
      uVar33 = param_3 - (param_3 - uVar35 & 7);
      if (uVar35 != 0) {
        do {
          param_2[uVar32] =
               (*(float *)(lVar36 + uVar32 * 4) + *(float *)(lVar37 + uVar32 * 4)) * fVar7;
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar35);
      }
      if ((lVar37 + uVar35 * 4 & 0xf) == 0) {
        do {
          pfVar44 = (float *)(lVar36 + uVar35 * 4);
          fVar8 = pfVar44[1];
          fVar12 = pfVar44[2];
          fVar13 = pfVar44[3];
          pfVar2 = (float *)(lVar36 + 0x10 + uVar35 * 4);
          fVar14 = *pfVar2;
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar2 = (float *)(lVar37 + uVar35 * 4);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar3 = (float *)(lVar37 + 0x10 + uVar35 * 4);
          fVar21 = *pfVar3;
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar3 = param_2 + uVar35;
          *pfVar3 = (*pfVar44 + *pfVar2) * fVar7;
          pfVar3[1] = (fVar8 + fVar18) * fVar7;
          pfVar3[2] = (fVar12 + fVar19) * fVar7;
          pfVar3[3] = (fVar13 + fVar20) * fVar7;
          pfVar44 = param_2 + uVar35 + 4;
          *pfVar44 = (fVar14 + fVar21) * fVar7;
          pfVar44[1] = (fVar15 + fVar22) * fVar7;
          pfVar44[2] = (fVar16 + fVar23) * fVar7;
          pfVar44[3] = (fVar17 + fVar24) * fVar7;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar33);
      }
      else {
        do {
          pfVar44 = (float *)(lVar36 + uVar35 * 4);
          fVar8 = pfVar44[1];
          fVar12 = pfVar44[2];
          fVar13 = pfVar44[3];
          pfVar2 = (float *)(lVar36 + 0x10 + uVar35 * 4);
          fVar14 = *pfVar2;
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar2 = (float *)(lVar37 + uVar35 * 4);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar3 = (float *)(lVar37 + 0x10 + uVar35 * 4);
          fVar21 = *pfVar3;
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar3 = param_2 + uVar35;
          *pfVar3 = (*pfVar44 + *pfVar2) * fVar7;
          pfVar3[1] = (fVar8 + fVar18) * fVar7;
          pfVar3[2] = (fVar12 + fVar19) * fVar7;
          pfVar3[3] = (fVar13 + fVar20) * fVar7;
          pfVar44 = param_2 + uVar35 + 4;
          *pfVar44 = (fVar14 + fVar21) * fVar7;
          pfVar44[1] = (fVar15 + fVar22) * fVar7;
          pfVar44[2] = (fVar16 + fVar23) * fVar7;
          pfVar44[3] = (fVar17 + fVar24) * fVar7;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar33);
      }
      if (param_3 < uVar33 + 1) goto LAB_14076ee9c;
      uVar35 = param_3 - uVar33;
      if ((longlong)uVar35 < 4) {
        uVar32 = 0;
      }
      else {
        uVar42 = 0;
        uVar32 = uVar35 & 0xfffffffffffffffc;
        do {
          pfVar44 = (float *)(lVar36 + uVar33 * 4 + uVar42 * 4);
          fVar8 = pfVar44[1];
          fVar12 = pfVar44[2];
          fVar13 = pfVar44[3];
          pfVar2 = (float *)(lVar37 + uVar33 * 4 + uVar42 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = param_2 + uVar33 + uVar42;
          *pfVar3 = (*pfVar44 + *pfVar2) * fVar7;
          pfVar3[1] = (fVar8 + fVar14) * fVar7;
          pfVar3[2] = (fVar12 + fVar15) * fVar7;
          pfVar3[3] = (fVar13 + fVar16) * fVar7;
          uVar42 = uVar42 + 4;
        } while (uVar42 < uVar32);
      }
    }
    if (uVar32 < uVar35) {
      do {
        param_2[uVar33 + uVar32] =
             (*(float *)(lVar39 * -4 + param_1 + uVar33 * 4 + uVar32 * 4) +
             *(float *)(param_1 + lVar39 * 4 + uVar33 * 4 + uVar32 * 4)) * fVar7;
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar35);
    }
  }
LAB_14076ee9c:
  if (1 < lVar39) {
    lVar37 = 1;
    lVar36 = 0;
    if (lVar39 - 1U >> 1 != 0) {
      uVar32 = (ulonglong)param_2 & 0xf;
      lVar37 = param_1 + lVar39 * 4;
      lVar34 = lVar39 * -4 + param_1;
      uVar35 = 0;
      do {
        uVar33 = uVar35;
        lVar41 = lVar34 + 8;
        fVar7 = *(float *)(lVar36 + 4 + (longlong)param_4);
        fVar8 = *(float *)(lVar36 + 8 + (longlong)param_4);
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 8) ||
             (((uVar35 = uVar32, uVar32 != 0 &&
               (uVar35 = 0x10 - uVar32 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)param_3 < (longlong)(uVar35 + 8))))) {
            uVar42 = 0;
            if (param_3 != 0) {
              uVar45 = 0;
              uVar35 = param_3;
              goto LAB_14076f20f;
            }
          }
          else {
            uVar45 = 0;
            uVar42 = param_3 - (param_3 - uVar35 & 7);
            lVar38 = lVar37;
            lVar40 = lVar34;
            pfVar44 = param_2;
            if (uVar35 != 0) {
              do {
                uVar45 = uVar45 + 1;
                *pfVar44 = (*(float *)(lVar40 + 4) + *(float *)(lVar38 + -4)) * fVar7 + *pfVar44 +
                           (*(float *)(lVar40 + 8) + *(float *)(lVar38 + -8)) * fVar8;
                lVar38 = lVar38 + 4;
                lVar40 = lVar40 + 4;
                pfVar44 = pfVar44 + 1;
              } while (uVar45 < uVar35);
            }
            if ((lVar37 + -4 + uVar35 * 4 & 0xf) == 0) {
              lVar40 = uVar35 * 4;
              lVar38 = lVar36 + uVar35 * 4;
              do {
                uVar35 = uVar35 + 8;
                pfVar3 = (float *)(lVar40 + -8 + lVar37);
                fVar12 = pfVar3[1];
                fVar13 = pfVar3[2];
                fVar14 = pfVar3[3];
                lVar43 = lVar39 * -4 + param_1;
                pfVar4 = (float *)(lVar40 + -4 + lVar37);
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar5 = (float *)(lVar38 + 8 + lVar43);
                fVar18 = pfVar5[1];
                fVar19 = pfVar5[2];
                fVar20 = pfVar5[3];
                pfVar6 = (float *)(lVar38 + 4 + lVar43);
                fVar21 = pfVar6[1];
                fVar22 = pfVar6[2];
                fVar23 = pfVar6[3];
                pfVar44 = (float *)(lVar40 + (longlong)param_2);
                fVar24 = pfVar44[1];
                fVar25 = pfVar44[2];
                fVar26 = pfVar44[3];
                pfVar2 = (float *)(lVar40 + (longlong)param_2);
                *pfVar2 = (*pfVar6 + *pfVar4) * fVar7 + *pfVar44 + (*pfVar5 + *pfVar3) * fVar8;
                pfVar2[1] = (fVar21 + fVar15) * fVar7 + fVar24 + (fVar18 + fVar12) * fVar8;
                pfVar2[2] = (fVar22 + fVar16) * fVar7 + fVar25 + (fVar19 + fVar13) * fVar8;
                pfVar2[3] = (fVar23 + fVar17) * fVar7 + fVar26 + (fVar20 + fVar14) * fVar8;
                pfVar44 = (float *)(lVar38 + 0x14 + lVar43);
                fVar12 = pfVar44[1];
                fVar13 = pfVar44[2];
                fVar14 = pfVar44[3];
                pfVar2 = (float *)(lVar40 + 0xc + lVar37);
                fVar15 = pfVar2[1];
                fVar16 = pfVar2[2];
                fVar17 = pfVar2[3];
                pfVar3 = (float *)(lVar40 + 8 + lVar37);
                fVar18 = pfVar3[1];
                fVar19 = pfVar3[2];
                fVar20 = pfVar3[3];
                pfVar4 = (float *)(lVar38 + 0x18 + lVar43);
                fVar21 = pfVar4[1];
                fVar22 = pfVar4[2];
                fVar23 = pfVar4[3];
                lVar38 = lVar38 + 0x20;
                pfVar5 = (float *)(lVar40 + 0x10 + (longlong)param_2);
                fVar24 = pfVar5[1];
                fVar25 = pfVar5[2];
                fVar26 = pfVar5[3];
                pfVar6 = (float *)(lVar40 + 0x10 + (longlong)param_2);
                *pfVar6 = (*pfVar44 + *pfVar2) * fVar7 + *pfVar5 + (*pfVar4 + *pfVar3) * fVar8;
                pfVar6[1] = (fVar12 + fVar15) * fVar7 + fVar24 + (fVar21 + fVar18) * fVar8;
                pfVar6[2] = (fVar13 + fVar16) * fVar7 + fVar25 + (fVar22 + fVar19) * fVar8;
                pfVar6[3] = (fVar14 + fVar17) * fVar7 + fVar26 + (fVar23 + fVar20) * fVar8;
                lVar40 = lVar40 + 0x20;
              } while (uVar35 < uVar42);
            }
            else {
              lVar40 = uVar35 * 4;
              lVar38 = lVar36 + uVar35 * 4;
              do {
                uVar35 = uVar35 + 8;
                pfVar3 = (float *)(lVar40 + -8 + lVar37);
                fVar12 = pfVar3[1];
                fVar13 = pfVar3[2];
                fVar14 = pfVar3[3];
                lVar43 = lVar39 * -4 + param_1;
                pfVar4 = (float *)(lVar40 + -4 + lVar37);
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar5 = (float *)(lVar38 + 8 + lVar43);
                fVar18 = pfVar5[1];
                fVar19 = pfVar5[2];
                fVar20 = pfVar5[3];
                pfVar6 = (float *)(lVar38 + 4 + lVar43);
                fVar21 = pfVar6[1];
                fVar22 = pfVar6[2];
                fVar23 = pfVar6[3];
                pfVar44 = (float *)(lVar40 + (longlong)param_2);
                fVar24 = pfVar44[1];
                fVar25 = pfVar44[2];
                fVar26 = pfVar44[3];
                pfVar2 = (float *)(lVar40 + (longlong)param_2);
                *pfVar2 = (*pfVar6 + *pfVar4) * fVar7 + *pfVar44 + (*pfVar5 + *pfVar3) * fVar8;
                pfVar2[1] = (fVar21 + fVar15) * fVar7 + fVar24 + (fVar18 + fVar12) * fVar8;
                pfVar2[2] = (fVar22 + fVar16) * fVar7 + fVar25 + (fVar19 + fVar13) * fVar8;
                pfVar2[3] = (fVar23 + fVar17) * fVar7 + fVar26 + (fVar20 + fVar14) * fVar8;
                pfVar44 = (float *)(lVar38 + 0x14 + lVar43);
                fVar12 = pfVar44[1];
                fVar13 = pfVar44[2];
                fVar14 = pfVar44[3];
                pfVar2 = (float *)(lVar40 + 0xc + lVar37);
                fVar15 = pfVar2[1];
                fVar16 = pfVar2[2];
                fVar17 = pfVar2[3];
                pfVar3 = (float *)(lVar40 + 8 + lVar37);
                fVar18 = pfVar3[1];
                fVar19 = pfVar3[2];
                fVar20 = pfVar3[3];
                pfVar4 = (float *)(lVar38 + 0x18 + lVar43);
                fVar21 = pfVar4[1];
                fVar22 = pfVar4[2];
                fVar23 = pfVar4[3];
                lVar38 = lVar38 + 0x20;
                pfVar5 = (float *)(lVar40 + 0x10 + (longlong)param_2);
                fVar24 = pfVar5[1];
                fVar25 = pfVar5[2];
                fVar26 = pfVar5[3];
                pfVar6 = (float *)(lVar40 + 0x10 + (longlong)param_2);
                *pfVar6 = (*pfVar44 + *pfVar2) * fVar7 + *pfVar5 + (*pfVar4 + *pfVar3) * fVar8;
                pfVar6[1] = (fVar12 + fVar15) * fVar7 + fVar24 + (fVar21 + fVar18) * fVar8;
                pfVar6[2] = (fVar13 + fVar16) * fVar7 + fVar25 + (fVar22 + fVar19) * fVar8;
                pfVar6[3] = (fVar14 + fVar17) * fVar7 + fVar26 + (fVar23 + fVar20) * fVar8;
                lVar40 = lVar40 + 0x20;
              } while (uVar35 < uVar42);
            }
            if (uVar42 + 1 <= param_3) {
              uVar35 = param_3 - uVar42;
              if ((longlong)uVar35 < 4) {
                uVar45 = 0;
              }
              else {
                uVar46 = 0;
                uVar45 = uVar35 & 0xfffffffffffffffc;
                pfVar44 = param_2 + uVar42;
                lVar43 = 0;
                lVar38 = lVar39 * -4 + param_1 + uVar42 * 4;
                lVar40 = lVar36;
                do {
                  lVar1 = lVar37 + uVar42 * 4;
                  uVar46 = uVar46 + 4;
                  pfVar2 = (float *)(lVar40 + 4 + lVar38);
                  fVar12 = pfVar2[1];
                  fVar13 = pfVar2[2];
                  fVar14 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + -4 + lVar1);
                  fVar15 = pfVar3[1];
                  fVar16 = pfVar3[2];
                  fVar17 = pfVar3[3];
                  pfVar4 = (float *)(lVar43 + -8 + lVar1);
                  fVar18 = pfVar4[1];
                  fVar19 = pfVar4[2];
                  fVar20 = pfVar4[3];
                  lVar43 = lVar43 + 0x10;
                  pfVar5 = (float *)(lVar40 + 8 + lVar38);
                  fVar21 = pfVar5[1];
                  fVar22 = pfVar5[2];
                  fVar23 = pfVar5[3];
                  lVar40 = lVar40 + 0x10;
                  *pfVar44 = (*pfVar2 + *pfVar3) * fVar7 + *pfVar44 + (*pfVar5 + *pfVar4) * fVar8;
                  pfVar44[1] = (fVar12 + fVar15) * fVar7 + pfVar44[1] + (fVar21 + fVar18) * fVar8;
                  pfVar44[2] = (fVar13 + fVar16) * fVar7 + pfVar44[2] + (fVar22 + fVar19) * fVar8;
                  pfVar44[3] = (fVar14 + fVar17) * fVar7 + pfVar44[3] + (fVar23 + fVar20) * fVar8;
                  pfVar44 = pfVar44 + 4;
                } while (uVar46 < uVar45);
              }
LAB_14076f20f:
              if (uVar45 < uVar35) {
                lVar38 = lVar34 + uVar42 * 4;
                lVar40 = lVar37 + uVar42 * 4;
                do {
                  param_2[uVar42 + uVar45] =
                       (*(float *)(lVar38 + 4 + uVar45 * 4) + *(float *)(lVar40 + -4 + uVar45 * 4))
                       * fVar7 + param_2[uVar42 + uVar45] +
                       (*(float *)(lVar38 + 8 + uVar45 * 4) + *(float *)(lVar40 + -8 + uVar45 * 4))
                       * fVar8;
                  uVar45 = uVar45 + 1;
                } while (uVar45 < uVar35);
              }
            }
          }
        }
        uVar35 = uVar33 + 1;
        lVar34 = lVar34 + 8;
        lVar36 = lVar36 + 8;
        lVar37 = lVar37 + -8;
      } while (uVar35 < lVar39 - 1U >> 1);
      lVar37 = uVar33 + 2 + uVar35;
    }
    if (lVar39 != lVar37) {
      lVar36 = lVar39 * -4;
      fVar7 = param_4[lVar37];
      lVar41 = param_1 + lVar36 + lVar37 * 4;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_14076f6e5:
          uVar32 = 0;
          if (param_3 == 0) goto LAB_14076f504;
          uVar33 = 0;
          uVar35 = param_3;
        }
        else {
          uVar35 = (ulonglong)param_2 & 0xf;
          if (uVar35 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_14076f6e5;
            uVar35 = 0x10 - uVar35 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar35 + 8)) goto LAB_14076f6e5;
          lVar34 = param_1 + lVar36 + lVar37 * 4;
          uVar33 = 0;
          lVar38 = lVar37 * -4;
          lVar40 = param_1 + lVar39 * 4 + lVar38;
          uVar32 = param_3 - (param_3 - uVar35 & 7);
          if (uVar35 != 0) {
            do {
              param_2[uVar33] =
                   (*(float *)(lVar34 + uVar33 * 4) + *(float *)(lVar40 + uVar33 * 4)) * fVar7 +
                   param_2[uVar33];
              uVar33 = uVar33 + 1;
            } while (uVar33 < uVar35);
          }
          if ((lVar40 + uVar35 * 4 & 0xf) == 0) {
            lVar38 = lVar38 + lVar39 * 4 + param_1;
            lVar43 = lVar36 + lVar37 * 4 + param_1;
            do {
              pfVar44 = (float *)(lVar34 + uVar35 * 4);
              fVar8 = pfVar44[1];
              fVar12 = pfVar44[2];
              fVar13 = pfVar44[3];
              pfVar2 = (float *)(lVar43 + 0x10 + uVar35 * 4);
              fVar14 = *pfVar2;
              fVar15 = pfVar2[1];
              fVar16 = pfVar2[2];
              fVar17 = pfVar2[3];
              pfVar2 = (float *)(lVar40 + uVar35 * 4);
              fVar18 = pfVar2[1];
              fVar19 = pfVar2[2];
              fVar20 = pfVar2[3];
              pfVar3 = (float *)(lVar38 + 0x10 + uVar35 * 4);
              fVar21 = *pfVar3;
              fVar22 = pfVar3[1];
              fVar23 = pfVar3[2];
              fVar24 = pfVar3[3];
              pfVar3 = param_2 + uVar35;
              fVar25 = pfVar3[1];
              fVar26 = pfVar3[2];
              fVar27 = pfVar3[3];
              pfVar4 = param_2 + uVar35 + 4;
              fVar28 = *pfVar4;
              fVar29 = pfVar4[1];
              fVar30 = pfVar4[2];
              fVar31 = pfVar4[3];
              pfVar4 = param_2 + uVar35;
              *pfVar4 = (*pfVar44 + *pfVar2) * fVar7 + *pfVar3;
              pfVar4[1] = (fVar8 + fVar18) * fVar7 + fVar25;
              pfVar4[2] = (fVar12 + fVar19) * fVar7 + fVar26;
              pfVar4[3] = (fVar13 + fVar20) * fVar7 + fVar27;
              pfVar44 = param_2 + uVar35 + 4;
              *pfVar44 = (fVar14 + fVar21) * fVar7 + fVar28;
              pfVar44[1] = (fVar15 + fVar22) * fVar7 + fVar29;
              pfVar44[2] = (fVar16 + fVar23) * fVar7 + fVar30;
              pfVar44[3] = (fVar17 + fVar24) * fVar7 + fVar31;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar32);
          }
          else {
            lVar38 = lVar38 + lVar39 * 4 + param_1;
            lVar43 = lVar36 + lVar37 * 4 + param_1;
            do {
              pfVar44 = (float *)(lVar34 + uVar35 * 4);
              fVar8 = pfVar44[1];
              fVar12 = pfVar44[2];
              fVar13 = pfVar44[3];
              pfVar2 = (float *)(lVar40 + uVar35 * 4);
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar3 = (float *)(lVar43 + 0x10 + uVar35 * 4);
              fVar17 = *pfVar3;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              pfVar3 = (float *)(lVar38 + 0x10 + uVar35 * 4);
              fVar21 = *pfVar3;
              fVar22 = pfVar3[1];
              fVar23 = pfVar3[2];
              fVar24 = pfVar3[3];
              pfVar3 = param_2 + uVar35;
              fVar25 = pfVar3[1];
              fVar26 = pfVar3[2];
              fVar27 = pfVar3[3];
              pfVar4 = param_2 + uVar35 + 4;
              fVar28 = *pfVar4;
              fVar29 = pfVar4[1];
              fVar30 = pfVar4[2];
              fVar31 = pfVar4[3];
              pfVar4 = param_2 + uVar35;
              *pfVar4 = (*pfVar44 + *pfVar2) * fVar7 + *pfVar3;
              pfVar4[1] = (fVar8 + fVar14) * fVar7 + fVar25;
              pfVar4[2] = (fVar12 + fVar15) * fVar7 + fVar26;
              pfVar4[3] = (fVar13 + fVar16) * fVar7 + fVar27;
              pfVar44 = param_2 + uVar35 + 4;
              *pfVar44 = (fVar17 + fVar21) * fVar7 + fVar28;
              pfVar44[1] = (fVar18 + fVar22) * fVar7 + fVar29;
              pfVar44[2] = (fVar19 + fVar23) * fVar7 + fVar30;
              pfVar44[3] = (fVar20 + fVar24) * fVar7 + fVar31;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar32);
          }
          if (param_3 < uVar32 + 1) goto LAB_14076f504;
          uVar35 = param_3 - uVar32;
          if ((longlong)uVar35 < 2) {
            uVar33 = 0;
          }
          else {
            uVar42 = 0;
            uVar33 = uVar35 & 0xfffffffffffffffe;
            lVar34 = 0;
            do {
              uVar9 = *(undefined8 *)(lVar34 + lVar43 + uVar32 * 4);
              uVar42 = uVar42 + 2;
              uVar10 = *(undefined8 *)(lVar34 + lVar38 + uVar32 * 4);
              uVar11 = *(undefined8 *)((longlong)param_2 + lVar34 + uVar32 * 4);
              *(ulonglong *)((longlong)param_2 + lVar34 + uVar32 * 4) =
                   CONCAT44((float)((ulonglong)uVar11 >> 0x20) +
                            ((float)((ulonglong)uVar9 >> 0x20) + (float)((ulonglong)uVar10 >> 0x20))
                            * fVar7,(float)uVar11 + ((float)uVar9 + (float)uVar10) * fVar7);
              lVar34 = lVar34 + 8;
            } while (uVar42 < uVar33);
          }
        }
        if (uVar33 < uVar35) {
          do {
            param_2[uVar32 + uVar33] =
                 (*(float *)(lVar36 + lVar37 * 4 + param_1 + uVar32 * 4 + uVar33 * 4) +
                 *(float *)(param_1 + lVar37 * -4 + lVar39 * 4 + uVar32 * 4 + uVar33 * 4)) * fVar7 +
                 param_2[uVar32 + uVar33];
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar35);
        }
      }
    }
  }
LAB_14076f504:
  fVar7 = param_4[lVar39];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar35 = (ulonglong)param_2 & 0xf;
    if (uVar35 != 0) {
      if (((ulonglong)param_2 & 3) != 0) goto LAB_14076f6d2;
      uVar35 = 0x10 - uVar35 >> 2;
    }
    if ((longlong)(uVar35 + 8) <= (longlong)param_3) {
      uVar33 = 0;
      uVar32 = param_3 - (param_3 - uVar35 & 7);
      if (uVar35 != 0) {
        do {
          param_2[uVar33] = *(float *)(lVar41 + 4 + uVar33 * 4) * fVar7 + param_2[uVar33];
          uVar33 = uVar33 + 1;
        } while (uVar33 < uVar35);
      }
      if ((lVar41 + 4 + uVar35 * 4 & 0xf) == 0) {
        do {
          pfVar3 = (float *)(lVar41 + 4 + uVar35 * 4);
          fVar8 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar44 = (float *)(lVar41 + 0x14 + uVar35 * 4);
          fVar14 = *pfVar44;
          fVar15 = pfVar44[1];
          fVar16 = pfVar44[2];
          fVar17 = pfVar44[3];
          pfVar44 = param_2 + uVar35;
          fVar18 = pfVar44[1];
          fVar19 = pfVar44[2];
          fVar20 = pfVar44[3];
          pfVar2 = param_2 + uVar35 + 4;
          fVar21 = *pfVar2;
          fVar22 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar24 = pfVar2[3];
          pfVar2 = param_2 + uVar35;
          *pfVar2 = *pfVar3 * fVar7 + *pfVar44;
          pfVar2[1] = fVar8 * fVar7 + fVar18;
          pfVar2[2] = fVar12 * fVar7 + fVar19;
          pfVar2[3] = fVar13 * fVar7 + fVar20;
          pfVar44 = param_2 + uVar35 + 4;
          *pfVar44 = fVar14 * fVar7 + fVar21;
          pfVar44[1] = fVar15 * fVar7 + fVar22;
          pfVar44[2] = fVar16 * fVar7 + fVar23;
          pfVar44[3] = fVar17 * fVar7 + fVar24;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar32);
      }
      else {
        do {
          pfVar3 = (float *)(lVar41 + 4 + uVar35 * 4);
          fVar8 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar44 = (float *)(lVar41 + 0x14 + uVar35 * 4);
          fVar14 = *pfVar44;
          fVar15 = pfVar44[1];
          fVar16 = pfVar44[2];
          fVar17 = pfVar44[3];
          pfVar44 = param_2 + uVar35;
          fVar18 = pfVar44[1];
          fVar19 = pfVar44[2];
          fVar20 = pfVar44[3];
          pfVar2 = param_2 + uVar35 + 4;
          fVar21 = *pfVar2;
          fVar22 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar24 = pfVar2[3];
          pfVar2 = param_2 + uVar35;
          *pfVar2 = *pfVar3 * fVar7 + *pfVar44;
          pfVar2[1] = fVar8 * fVar7 + fVar18;
          pfVar2[2] = fVar12 * fVar7 + fVar19;
          pfVar2[3] = fVar13 * fVar7 + fVar20;
          pfVar44 = param_2 + uVar35 + 4;
          *pfVar44 = fVar14 * fVar7 + fVar21;
          pfVar44[1] = fVar15 * fVar7 + fVar22;
          pfVar44[2] = fVar16 * fVar7 + fVar23;
          pfVar44[3] = fVar17 * fVar7 + fVar24;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar32);
      }
      if (param_3 < uVar32 + 1) {
        return;
      }
      param_3 = param_3 - uVar32;
      if ((longlong)param_3 < 2) {
        uVar35 = 0;
      }
      else {
        uVar33 = 0;
        uVar35 = param_3 & 0xfffffffffffffffe;
        lVar39 = 0;
        do {
          uVar9 = *(undefined8 *)(lVar39 + 4 + lVar41 + uVar32 * 4);
          uVar33 = uVar33 + 2;
          uVar10 = *(undefined8 *)((longlong)param_2 + lVar39 + uVar32 * 4);
          *(ulonglong *)((longlong)param_2 + lVar39 + uVar32 * 4) =
               CONCAT44((float)((ulonglong)uVar10 >> 0x20) +
                        (float)((ulonglong)uVar9 >> 0x20) * fVar7,
                        (float)uVar10 + (float)uVar9 * fVar7);
          lVar39 = lVar39 + 8;
        } while (uVar33 < uVar35);
      }
      goto LAB_14076f683;
    }
  }
LAB_14076f6d2:
  uVar32 = 0;
  uVar35 = 0;
  if (param_3 == 0) {
    return;
  }
LAB_14076f683:
  if (uVar35 < param_3) {
    do {
      param_2[uVar32 + uVar35] =
           *(float *)(lVar41 + uVar32 * 4 + 4 + uVar35 * 4) * fVar7 + param_2[uVar32 + uVar35];
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_3);
  }
  return;
}

