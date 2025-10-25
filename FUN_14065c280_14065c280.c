
void FUN_14065c280(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  longlong lVar1;
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
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  
  uVar33 = (ulonglong)param_7;
  lVar35 = (longlong)param_3;
  lVar32 = (longlong)(param_7 >> 1);
  lVar37 = (lVar35 - lVar32 >> 0x3f & uVar33) + (lVar35 - lVar32);
  if (lVar37 == 0) {
    uVar39 = 0;
    uVar31 = uVar33;
  }
  else {
    uVar39 = (ulonglong)(int)lVar37;
    uVar31 = uVar39;
  }
  lVar30 = uVar31 - 1;
  uVar31 = uVar39 + 1;
  if (uVar39 + 1 == uVar33) {
    uVar31 = 0;
  }
  fVar6 = *param_6;
  uVar39 = (longlong)(int)lVar30;
  if ((longlong)(int)lVar30 < 1) {
    uVar39 = uVar33;
  }
  lVar34 = uVar39 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14065caf6:
      uVar28 = 0;
      if (param_5 == 0) goto LAB_14065c4fe;
      uVar39 = 0;
      uVar33 = param_5;
    }
    else {
      uVar39 = param_2 * lVar37 + param_1;
      uVar33 = uVar39 & 0xf;
      if (uVar33 != 0) {
        if ((uVar39 & 3) != 0) goto LAB_14065caf6;
        uVar33 = 0x10 - uVar33 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar33 + 8)) goto LAB_14065caf6;
      lVar38 = param_2 * lVar30 + param_1;
      uVar40 = 0;
      uVar28 = param_5 - (param_5 - uVar33 & 7);
      if (uVar33 != 0) {
        do {
          *(float *)(uVar39 + uVar40 * 4) =
               (*(float *)(uVar39 + uVar40 * 4) + *(float *)(lVar38 + uVar40 * 4)) * fVar6;
          uVar40 = uVar40 + 1;
        } while (uVar40 < uVar33);
      }
      if ((lVar38 + uVar33 * 4 & 0xf) == 0) {
        do {
          pfVar2 = (float *)(uVar39 + uVar33 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar3 = (float *)(uVar39 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar4 = (float *)(lVar38 + uVar33 * 4);
          fVar14 = pfVar4[1];
          fVar15 = pfVar4[2];
          fVar16 = pfVar4[3];
          pfVar3 = (float *)(lVar38 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar3;
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar3 = (float *)(uVar39 + uVar33 * 4);
          *pfVar3 = (*pfVar2 + *pfVar4) * fVar6;
          pfVar3[1] = (fVar7 + fVar14) * fVar6;
          pfVar3[2] = (fVar8 + fVar15) * fVar6;
          pfVar3[3] = (fVar9 + fVar16) * fVar6;
          pfVar2 = (float *)(uVar39 + 0x10 + uVar33 * 4);
          *pfVar2 = (fVar10 + fVar17) * fVar6;
          pfVar2[1] = (fVar11 + fVar18) * fVar6;
          pfVar2[2] = (fVar12 + fVar19) * fVar6;
          pfVar2[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar28);
      }
      else {
        do {
          pfVar4 = (float *)(lVar38 + uVar33 * 4);
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
          pfVar2 = (float *)(lVar38 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar2 = (float *)(uVar39 + uVar33 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(uVar39 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar3;
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar3 = (float *)(uVar39 + uVar33 * 4);
          *pfVar3 = (*pfVar4 + *pfVar2) * fVar6;
          pfVar3[1] = (fVar7 + fVar14) * fVar6;
          pfVar3[2] = (fVar8 + fVar15) * fVar6;
          pfVar3[3] = (fVar9 + fVar16) * fVar6;
          pfVar2 = (float *)(uVar39 + 0x10 + uVar33 * 4);
          *pfVar2 = (fVar10 + fVar17) * fVar6;
          pfVar2[1] = (fVar11 + fVar18) * fVar6;
          pfVar2[2] = (fVar12 + fVar19) * fVar6;
          pfVar2[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar28);
      }
      if (param_5 < uVar28 + 1) goto LAB_14065c4fe;
      uVar33 = param_5 - uVar28;
      if ((longlong)uVar33 < 4) {
        uVar39 = 0;
      }
      else {
        lVar1 = uVar39 + uVar28 * 4;
        uVar39 = uVar33 & 0xfffffffffffffffc;
        uVar40 = 0;
        do {
          pfVar2 = (float *)(lVar38 + uVar28 * 4 + uVar40 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar3 = (float *)(lVar1 + uVar40 * 4);
          fVar10 = pfVar3[1];
          fVar11 = pfVar3[2];
          fVar12 = pfVar3[3];
          pfVar4 = (float *)(lVar1 + uVar40 * 4);
          *pfVar4 = (*pfVar2 + *pfVar3) * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar6;
          uVar40 = uVar40 + 4;
        } while (uVar40 < uVar39);
      }
    }
    if (uVar39 < uVar33) {
      lVar38 = param_2 * lVar37 + param_1 + uVar28 * 4;
      do {
        *(float *)(lVar38 + uVar39 * 4) =
             (*(float *)(lVar38 + uVar39 * 4) +
             *(float *)(lVar30 * param_2 + param_1 + uVar28 * 4 + uVar39 * 4)) * fVar6;
        uVar39 = uVar39 + 1;
      } while (uVar39 < uVar33);
    }
  }
LAB_14065c4fe:
  if (1 < lVar32) {
    uVar33 = param_2 * lVar37 + param_1;
    uVar28 = 0;
    uVar39 = uVar33 & 0xf;
    do {
      fVar6 = param_6[uVar28 + 1];
      uVar40 = uVar31 + 1;
      lVar30 = param_2 * uVar31 + param_1;
      uVar31 = uVar40;
      if (uVar40 == (longlong)param_7) {
        uVar31 = 0;
      }
      lVar38 = param_2 * lVar34;
      lVar34 = lVar34 + -1;
      if (lVar34 < 0) {
        lVar34 = (longlong)param_7 + -1;
      }
      lVar38 = lVar38 + param_1;
      if (0 < (longlong)param_5) {
        if (((longlong)param_5 < 8) ||
           (((uVar40 = uVar39, uVar39 != 0 && (uVar40 = 0x10 - uVar39 >> 2, (uVar33 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar40 + 8))))) {
          uVar36 = 0;
          if (param_5 != 0) {
            uVar29 = 0;
            uVar40 = param_5;
            goto LAB_14065c764;
          }
        }
        else {
          uVar29 = 0;
          uVar36 = param_5 - (param_5 - uVar40 & 7);
          if (uVar40 != 0) {
            do {
              *(float *)(uVar33 + uVar29 * 4) =
                   (*(float *)(lVar30 + uVar29 * 4) + *(float *)(lVar38 + uVar29 * 4)) * fVar6 +
                   *(float *)(uVar33 + uVar29 * 4);
              uVar29 = uVar29 + 1;
            } while (uVar29 < uVar40);
          }
          if ((lVar38 + uVar40 * 4 & 0xf) == 0) {
            do {
              pfVar5 = (float *)(lVar30 + uVar40 * 4);
              fVar7 = pfVar5[1];
              fVar8 = pfVar5[2];
              fVar9 = pfVar5[3];
              pfVar2 = (float *)(lVar30 + 0x10 + uVar40 * 4);
              fVar10 = *pfVar2;
              fVar11 = pfVar2[1];
              fVar12 = pfVar2[2];
              fVar13 = pfVar2[3];
              pfVar2 = (float *)(lVar38 + uVar40 * 4);
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar3 = (float *)(lVar38 + 0x10 + uVar40 * 4);
              fVar17 = *pfVar3;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              pfVar3 = (float *)(uVar33 + uVar40 * 4);
              fVar21 = pfVar3[1];
              fVar22 = pfVar3[2];
              fVar23 = pfVar3[3];
              pfVar4 = (float *)(uVar33 + 0x10 + uVar40 * 4);
              fVar24 = *pfVar4;
              fVar25 = pfVar4[1];
              fVar26 = pfVar4[2];
              fVar27 = pfVar4[3];
              pfVar4 = (float *)(uVar33 + uVar40 * 4);
              *pfVar4 = (*pfVar5 + *pfVar2) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar4[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar4[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar2 = (float *)(uVar33 + 0x10 + uVar40 * 4);
              *pfVar2 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar2[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar2[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar40 = uVar40 + 8;
            } while (uVar40 < uVar36);
          }
          else {
            do {
              pfVar5 = (float *)(lVar30 + uVar40 * 4);
              fVar7 = pfVar5[1];
              fVar8 = pfVar5[2];
              fVar9 = pfVar5[3];
              pfVar2 = (float *)(lVar30 + 0x10 + uVar40 * 4);
              fVar10 = *pfVar2;
              fVar11 = pfVar2[1];
              fVar12 = pfVar2[2];
              fVar13 = pfVar2[3];
              pfVar2 = (float *)(lVar38 + uVar40 * 4);
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar3 = (float *)(lVar38 + 0x10 + uVar40 * 4);
              fVar17 = *pfVar3;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              pfVar3 = (float *)(uVar33 + uVar40 * 4);
              fVar21 = pfVar3[1];
              fVar22 = pfVar3[2];
              fVar23 = pfVar3[3];
              pfVar4 = (float *)(uVar33 + 0x10 + uVar40 * 4);
              fVar24 = *pfVar4;
              fVar25 = pfVar4[1];
              fVar26 = pfVar4[2];
              fVar27 = pfVar4[3];
              pfVar4 = (float *)(uVar33 + uVar40 * 4);
              *pfVar4 = (*pfVar5 + *pfVar2) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar4[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar4[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar2 = (float *)(uVar33 + 0x10 + uVar40 * 4);
              *pfVar2 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar2[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar2[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar40 = uVar40 + 8;
            } while (uVar40 < uVar36);
          }
          if (uVar36 + 1 <= param_5) {
            uVar40 = param_5 - uVar36;
            if ((longlong)uVar40 < 4) {
              uVar29 = 0;
            }
            else {
              uVar41 = 0;
              uVar29 = uVar40 & 0xfffffffffffffffc;
              lVar1 = uVar33 + uVar36 * 4;
              do {
                pfVar5 = (float *)(lVar30 + uVar36 * 4 + uVar41 * 4);
                fVar7 = pfVar5[1];
                fVar8 = pfVar5[2];
                fVar9 = pfVar5[3];
                pfVar2 = (float *)(lVar38 + uVar36 * 4 + uVar41 * 4);
                fVar10 = pfVar2[1];
                fVar11 = pfVar2[2];
                fVar12 = pfVar2[3];
                pfVar3 = (float *)(lVar1 + uVar41 * 4);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                pfVar4 = (float *)(lVar1 + uVar41 * 4);
                *pfVar4 = (*pfVar5 + *pfVar2) * fVar6 + *pfVar3;
                pfVar4[1] = (fVar7 + fVar10) * fVar6 + fVar13;
                pfVar4[2] = (fVar8 + fVar11) * fVar6 + fVar14;
                pfVar4[3] = (fVar9 + fVar12) * fVar6 + fVar15;
                uVar41 = uVar41 + 4;
              } while (uVar41 < uVar29);
            }
LAB_14065c764:
            if (uVar29 < uVar40) {
              lVar1 = uVar33 + uVar36 * 4;
              do {
                *(float *)(lVar1 + uVar29 * 4) =
                     (*(float *)(lVar30 + uVar36 * 4 + uVar29 * 4) +
                     *(float *)(lVar38 + uVar36 * 4 + uVar29 * 4)) * fVar6 +
                     *(float *)(lVar1 + uVar29 * 4);
                uVar29 = uVar29 + 1;
              } while (uVar29 < uVar40);
            }
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < lVar32 - 1U);
  }
  fVar6 = param_6[lVar32];
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar33 = param_4 & 0xf;
      if (uVar33 != 0) {
        if ((param_4 & 3) != 0) goto LAB_14065cb14;
        uVar33 = 0x10 - uVar33 >> 2;
      }
      if ((longlong)(uVar33 + 4) <= (longlong)param_5) {
        lVar30 = param_2 * lVar35 + param_1;
        lVar32 = param_2 * lVar37 + param_1;
        uVar39 = 0;
        uVar31 = param_5 - (param_5 - uVar33 & 3);
        if (uVar33 != 0) {
          do {
            *(float *)(param_4 + uVar39 * 4) =
                 *(float *)(lVar30 + uVar39 * 4) * fVar6 + *(float *)(lVar32 + uVar39 * 4);
            uVar39 = uVar39 + 1;
          } while (uVar39 < uVar33);
        }
        if ((lVar30 + uVar33 * 4 & 0xf) == 0) {
          do {
            pfVar4 = (float *)(lVar30 + uVar33 * 4);
            fVar7 = pfVar4[1];
            fVar8 = pfVar4[2];
            fVar9 = pfVar4[3];
            pfVar2 = (float *)(lVar32 + uVar33 * 4);
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            pfVar3 = (float *)(param_4 + uVar33 * 4);
            *pfVar3 = *pfVar2 + *pfVar4 * fVar6;
            pfVar3[1] = fVar10 + fVar7 * fVar6;
            pfVar3[2] = fVar11 + fVar8 * fVar6;
            pfVar3[3] = fVar12 + fVar9 * fVar6;
            uVar33 = uVar33 + 4;
          } while (uVar33 < uVar31);
        }
        else {
          do {
            pfVar4 = (float *)(lVar30 + uVar33 * 4);
            fVar7 = pfVar4[1];
            fVar8 = pfVar4[2];
            fVar9 = pfVar4[3];
            pfVar2 = (float *)(lVar32 + uVar33 * 4);
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            pfVar3 = (float *)(param_4 + uVar33 * 4);
            *pfVar3 = *pfVar2 + *pfVar4 * fVar6;
            pfVar3[1] = fVar10 + fVar7 * fVar6;
            pfVar3[2] = fVar11 + fVar8 * fVar6;
            pfVar3[3] = fVar12 + fVar9 * fVar6;
            uVar33 = uVar33 + 4;
          } while (uVar33 < uVar31);
        }
        goto LAB_14065ca9c;
      }
    }
LAB_14065cb14:
    uVar31 = 0;
LAB_14065ca9c:
    if (param_5 <= uVar31) {
      return;
    }
    do {
      *(float *)(param_4 + uVar31 * 4) =
           *(float *)(lVar35 * param_2 + param_1 + uVar31 * 4) * fVar6 +
           *(float *)(param_1 + param_2 * lVar37 + uVar31 * 4);
      uVar31 = uVar31 + 1;
    } while (uVar31 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar33 = param_4 & 0xf;
    if (uVar33 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14065cb0d;
      uVar33 = 0x10 - uVar33 >> 2;
    }
    if ((longlong)(uVar33 + 8) <= (longlong)param_5) {
      lVar30 = param_2 * lVar35 + param_1;
      lVar32 = param_2 * lVar37 + param_1;
      uVar39 = 0;
      uVar31 = param_5 - (param_5 - uVar33 & 7);
      if (uVar33 != 0) {
        do {
          *(float *)(param_4 + uVar39 * 4) =
               *(float *)(lVar30 + uVar39 * 4) * fVar6 + *(float *)(lVar32 + uVar39 * 4);
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar33);
      }
      if ((lVar30 + uVar33 * 4 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(lVar30 + uVar33 * 4);
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
          pfVar2 = (float *)(lVar30 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar2 = (float *)(lVar32 + uVar33 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar32 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar3;
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar3 = (float *)(param_4 + uVar33 * 4);
          *pfVar3 = *pfVar2 + *pfVar4 * fVar6;
          pfVar3[1] = fVar14 + fVar7 * fVar6;
          pfVar3[2] = fVar15 + fVar8 * fVar6;
          pfVar3[3] = fVar16 + fVar9 * fVar6;
          pfVar2 = (float *)(param_4 + 0x10 + uVar33 * 4);
          *pfVar2 = fVar17 + fVar10 * fVar6;
          pfVar2[1] = fVar18 + fVar11 * fVar6;
          pfVar2[2] = fVar19 + fVar12 * fVar6;
          pfVar2[3] = fVar20 + fVar13 * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar31);
      }
      else {
        do {
          pfVar4 = (float *)(lVar30 + uVar33 * 4);
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
          pfVar2 = (float *)(lVar30 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar2 = (float *)(lVar32 + uVar33 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar32 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar3;
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar3 = (float *)(param_4 + uVar33 * 4);
          *pfVar3 = *pfVar2 + *pfVar4 * fVar6;
          pfVar3[1] = fVar14 + fVar7 * fVar6;
          pfVar3[2] = fVar15 + fVar8 * fVar6;
          pfVar3[3] = fVar16 + fVar9 * fVar6;
          pfVar2 = (float *)(param_4 + 0x10 + uVar33 * 4);
          *pfVar2 = fVar17 + fVar10 * fVar6;
          pfVar2[1] = fVar18 + fVar11 * fVar6;
          pfVar2[2] = fVar19 + fVar12 * fVar6;
          pfVar2[3] = fVar20 + fVar13 * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar31);
      }
      goto LAB_14065c911;
    }
  }
LAB_14065cb0d:
  uVar31 = 0;
LAB_14065c911:
  uVar33 = 0;
  if (uVar31 + 1 <= param_5) {
    do {
      *(float *)(param_4 + uVar31 * 4 + uVar33 * 4) =
           *(float *)(param_1 + param_2 * lVar35 + uVar31 * 4 + uVar33 * 4) * fVar6 +
           *(float *)(lVar37 * param_2 + param_1 + uVar31 * 4 + uVar33 * 4);
      uVar33 = uVar33 + 1;
    } while (uVar33 < param_5 - uVar31);
  }
  return;
}

