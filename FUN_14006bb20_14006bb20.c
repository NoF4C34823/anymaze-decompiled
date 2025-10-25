
void FUN_14006bb20(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  float *pfVar1;
  longlong lVar2;
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
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  
  uVar30 = (ulonglong)param_7;
  lVar37 = (longlong)param_3;
  lVar28 = (longlong)(param_7 >> 1);
  lVar32 = (lVar37 - lVar28 >> 0x3f & uVar30) + (lVar37 - lVar28);
  if (lVar32 == 0) {
    uVar38 = 0;
    uVar35 = uVar30;
  }
  else {
    uVar38 = (ulonglong)(int)lVar32;
    uVar35 = uVar38;
  }
  lVar40 = uVar35 - 1;
  uVar35 = uVar38 + 1;
  if (uVar38 + 1 == uVar30) {
    uVar35 = 0;
  }
  fVar6 = *param_6;
  uVar38 = (longlong)(int)lVar40;
  if ((longlong)(int)lVar40 < 1) {
    uVar38 = uVar30;
  }
  lVar34 = uVar38 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14006c34f:
      uVar41 = 0;
    }
    else {
      uVar39 = param_2 * lVar32 + param_1;
      uVar38 = uVar39 & 0xf;
      if (uVar38 != 0) {
        if ((uVar39 & 3) != 0) goto LAB_14006c34f;
        uVar38 = 0x10 - uVar38 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar38 + 8)) goto LAB_14006c34f;
      lVar36 = param_2 * lVar40 + param_1;
      uVar29 = 0;
      uVar41 = param_5 - (param_5 - uVar38 & 7);
      if (uVar38 != 0) {
        do {
          *(float *)(uVar39 + uVar29 * 4) =
               (*(float *)(uVar39 + uVar29 * 4) + *(float *)(lVar36 + uVar29 * 4)) * fVar6;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar38);
      }
      if ((uVar38 * 4 + lVar36 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(uVar39 + uVar38 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar3 = (float *)(uVar39 + 0x10 + uVar38 * 4);
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar3 = (float *)(lVar36 + uVar38 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(lVar36 + 0x10 + uVar38 * 4);
          fVar17 = *pfVar4;
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          pfVar4 = (float *)(uVar39 + uVar38 * 4);
          *pfVar4 = (*pfVar1 + *pfVar3) * fVar6;
          pfVar4[1] = (fVar7 + fVar14) * fVar6;
          pfVar4[2] = (fVar8 + fVar15) * fVar6;
          pfVar4[3] = (fVar9 + fVar16) * fVar6;
          pfVar1 = (float *)(uVar39 + 0x10 + uVar38 * 4);
          *pfVar1 = (fVar10 + fVar17) * fVar6;
          pfVar1[1] = (fVar11 + fVar18) * fVar6;
          pfVar1[2] = (fVar12 + fVar19) * fVar6;
          pfVar1[3] = (fVar13 + fVar20) * fVar6;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar41);
      }
      else {
        do {
          pfVar1 = (float *)(lVar36 + uVar38 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar3 = (float *)(lVar36 + 0x10 + uVar38 * 4);
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar3 = (float *)(uVar39 + uVar38 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar39 + 0x10 + uVar38 * 4);
          fVar17 = *pfVar4;
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          pfVar4 = (float *)(uVar39 + uVar38 * 4);
          *pfVar4 = (*pfVar1 + *pfVar3) * fVar6;
          pfVar4[1] = (fVar7 + fVar14) * fVar6;
          pfVar4[2] = (fVar8 + fVar15) * fVar6;
          pfVar4[3] = (fVar9 + fVar16) * fVar6;
          pfVar1 = (float *)(uVar39 + 0x10 + uVar38 * 4);
          *pfVar1 = (fVar10 + fVar17) * fVar6;
          pfVar1[1] = (fVar11 + fVar18) * fVar6;
          pfVar1[2] = (fVar12 + fVar19) * fVar6;
          pfVar1[3] = (fVar13 + fVar20) * fVar6;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar41);
      }
    }
    uVar38 = 0;
    if (uVar41 + 1 <= param_5) {
      lVar36 = param_2 * lVar32 + param_1 + uVar41 * 4;
      do {
        *(float *)(lVar36 + uVar38 * 4) =
             (*(float *)(lVar36 + uVar38 * 4) +
             *(float *)(lVar40 * param_2 + param_1 + uVar41 * 4 + uVar38 * 4)) * fVar6;
        uVar38 = uVar38 + 1;
      } while (uVar38 < param_5 - uVar41);
    }
  }
  if (1 < lVar28) {
    uVar38 = param_2 * lVar32 + param_1;
    uVar39 = 0;
    uVar41 = uVar38 & 0xf;
    do {
      lVar40 = param_2 * uVar35;
      lVar36 = param_2 * lVar34;
      uVar35 = uVar35 + 1;
      if (uVar35 == (longlong)param_7) {
        uVar35 = 0;
      }
      lVar34 = lVar34 + -1;
      if (lVar34 < 0) {
        lVar34 = uVar30 - 1;
      }
      lVar40 = lVar40 + param_1;
      lVar36 = lVar36 + param_1;
      fVar6 = param_6[uVar39 + 1];
      if (0 < (longlong)param_5) {
        if (((longlong)param_5 < 8) ||
           (((uVar29 = uVar41, uVar41 != 0 && (uVar29 = 0x10 - uVar41 >> 2, (uVar38 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar29 + 8))))) {
          uVar33 = 0;
          if (param_5 != 0) {
            uVar29 = 0;
            uVar31 = param_5;
            goto LAB_14006bfa4;
          }
        }
        else {
          uVar31 = 0;
          uVar33 = param_5 - (param_5 - uVar29 & 7);
          if (uVar29 != 0) {
            do {
              *(float *)(uVar38 + uVar31 * 4) =
                   (*(float *)(lVar40 + uVar31 * 4) + *(float *)(lVar36 + uVar31 * 4)) * fVar6 +
                   *(float *)(uVar38 + uVar31 * 4);
              uVar31 = uVar31 + 1;
            } while (uVar31 < uVar29);
          }
          if ((uVar29 * 4 + lVar36 & 0xf) == 0) {
            do {
              pfVar1 = (float *)(lVar40 + uVar29 * 4);
              fVar7 = pfVar1[1];
              fVar8 = pfVar1[2];
              fVar9 = pfVar1[3];
              pfVar3 = (float *)(lVar40 + 0x10 + uVar29 * 4);
              fVar10 = *pfVar3;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar3 = (float *)(lVar36 + uVar29 * 4);
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar4 = (float *)(lVar36 + 0x10 + uVar29 * 4);
              fVar17 = *pfVar4;
              fVar18 = pfVar4[1];
              fVar19 = pfVar4[2];
              fVar20 = pfVar4[3];
              pfVar4 = (float *)(uVar38 + uVar29 * 4);
              fVar21 = pfVar4[1];
              fVar22 = pfVar4[2];
              fVar23 = pfVar4[3];
              pfVar5 = (float *)(uVar38 + 0x10 + uVar29 * 4);
              fVar24 = *pfVar5;
              fVar25 = pfVar5[1];
              fVar26 = pfVar5[2];
              fVar27 = pfVar5[3];
              pfVar5 = (float *)(uVar38 + uVar29 * 4);
              *pfVar5 = (*pfVar1 + *pfVar3) * fVar6 + *pfVar4;
              pfVar5[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar5[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar5[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar1 = (float *)(uVar38 + 0x10 + uVar29 * 4);
              *pfVar1 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar1[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar1[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar1[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar29 = uVar29 + 8;
            } while (uVar29 < uVar33);
          }
          else {
            do {
              pfVar1 = (float *)(lVar40 + uVar29 * 4);
              fVar7 = pfVar1[1];
              fVar8 = pfVar1[2];
              fVar9 = pfVar1[3];
              pfVar3 = (float *)(lVar40 + 0x10 + uVar29 * 4);
              fVar10 = *pfVar3;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar3 = (float *)(lVar36 + uVar29 * 4);
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar4 = (float *)(lVar36 + 0x10 + uVar29 * 4);
              fVar17 = *pfVar4;
              fVar18 = pfVar4[1];
              fVar19 = pfVar4[2];
              fVar20 = pfVar4[3];
              pfVar4 = (float *)(uVar38 + uVar29 * 4);
              fVar21 = pfVar4[1];
              fVar22 = pfVar4[2];
              fVar23 = pfVar4[3];
              pfVar5 = (float *)(uVar38 + 0x10 + uVar29 * 4);
              fVar24 = *pfVar5;
              fVar25 = pfVar5[1];
              fVar26 = pfVar5[2];
              fVar27 = pfVar5[3];
              pfVar5 = (float *)(uVar38 + uVar29 * 4);
              *pfVar5 = (*pfVar1 + *pfVar3) * fVar6 + *pfVar4;
              pfVar5[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar5[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar5[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar1 = (float *)(uVar38 + 0x10 + uVar29 * 4);
              *pfVar1 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar1[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar1[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar1[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar29 = uVar29 + 8;
            } while (uVar29 < uVar33);
          }
          if (uVar33 + 1 <= param_5) {
            uVar31 = param_5 - uVar33;
            if ((longlong)uVar31 < 4) {
              uVar29 = 0;
            }
            else {
              uVar29 = uVar31 & 0xfffffffffffffffc;
              uVar42 = 0;
              lVar2 = uVar38 + uVar33 * 4;
              do {
                pfVar5 = (float *)(lVar40 + uVar33 * 4 + uVar42 * 4);
                fVar7 = pfVar5[1];
                fVar8 = pfVar5[2];
                fVar9 = pfVar5[3];
                pfVar1 = (float *)(uVar33 * 4 + lVar36 + uVar42 * 4);
                fVar10 = pfVar1[1];
                fVar11 = pfVar1[2];
                fVar12 = pfVar1[3];
                pfVar3 = (float *)(lVar2 + uVar42 * 4);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                pfVar4 = (float *)(lVar2 + uVar42 * 4);
                *pfVar4 = (*pfVar5 + *pfVar1) * fVar6 + *pfVar3;
                pfVar4[1] = (fVar7 + fVar10) * fVar6 + fVar13;
                pfVar4[2] = (fVar8 + fVar11) * fVar6 + fVar14;
                pfVar4[3] = (fVar9 + fVar12) * fVar6 + fVar15;
                uVar42 = uVar42 + 4;
              } while (uVar42 < uVar29);
            }
LAB_14006bfa4:
            if (uVar29 < uVar31) {
              lVar2 = uVar38 + uVar33 * 4;
              do {
                *(float *)(lVar2 + uVar29 * 4) =
                     (*(float *)(lVar40 + uVar33 * 4 + uVar29 * 4) +
                     *(float *)(lVar36 + uVar33 * 4 + uVar29 * 4)) * fVar6 +
                     *(float *)(lVar2 + uVar29 * 4);
                uVar29 = uVar29 + 1;
              } while (uVar29 < uVar31);
            }
          }
        }
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 < lVar28 - 1U);
  }
  fVar6 = param_6[lVar28];
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar30 = param_4 & 0xf;
      if (uVar30 != 0) {
        if ((param_4 & 3) != 0) goto LAB_14006c35e;
        uVar30 = 0x10 - uVar30 >> 2;
      }
      if ((longlong)(uVar30 + 4) <= (longlong)param_5) {
        lVar40 = param_2 * lVar37 + param_1;
        lVar28 = param_2 * lVar32 + param_1;
        uVar38 = 0;
        uVar35 = param_5 - (param_5 - uVar30 & 3);
        if (uVar30 != 0) {
          do {
            *(float *)(param_4 + uVar38 * 4) =
                 *(float *)(lVar40 + uVar38 * 4) * fVar6 + *(float *)(lVar28 + uVar38 * 4);
            uVar38 = uVar38 + 1;
          } while (uVar38 < uVar30);
        }
        if ((uVar30 * 4 + lVar40 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar40 + uVar30 * 4);
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar3 = (float *)(lVar28 + uVar30 * 4);
            fVar10 = pfVar3[1];
            fVar11 = pfVar3[2];
            fVar12 = pfVar3[3];
            pfVar4 = (float *)(param_4 + uVar30 * 4);
            *pfVar4 = *pfVar3 + *pfVar1 * fVar6;
            pfVar4[1] = fVar10 + fVar7 * fVar6;
            pfVar4[2] = fVar11 + fVar8 * fVar6;
            pfVar4[3] = fVar12 + fVar9 * fVar6;
            uVar30 = uVar30 + 4;
          } while (uVar30 < uVar35);
        }
        else {
          do {
            pfVar1 = (float *)(lVar40 + uVar30 * 4);
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar3 = (float *)(lVar28 + uVar30 * 4);
            fVar10 = pfVar3[1];
            fVar11 = pfVar3[2];
            fVar12 = pfVar3[3];
            pfVar4 = (float *)(param_4 + uVar30 * 4);
            *pfVar4 = *pfVar3 + *pfVar1 * fVar6;
            pfVar4[1] = fVar10 + fVar7 * fVar6;
            pfVar4[2] = fVar11 + fVar8 * fVar6;
            pfVar4[3] = fVar12 + fVar9 * fVar6;
            uVar30 = uVar30 + 4;
          } while (uVar30 < uVar35);
        }
        goto LAB_14006c2fc;
      }
    }
LAB_14006c35e:
    uVar35 = 0;
LAB_14006c2fc:
    if (param_5 <= uVar35) {
      return;
    }
    do {
      *(float *)(param_4 + uVar35 * 4) =
           *(float *)(lVar37 * param_2 + param_1 + uVar35 * 4) * fVar6 +
           *(float *)(param_1 + param_2 * lVar32 + uVar35 * 4);
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar30 = param_4 & 0xf;
    if (uVar30 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14006c357;
      uVar30 = 0x10 - uVar30 >> 2;
    }
    if ((longlong)(uVar30 + 8) <= (longlong)param_5) {
      lVar40 = param_2 * lVar37 + param_1;
      lVar28 = param_2 * lVar32 + param_1;
      uVar38 = 0;
      uVar35 = param_5 - (param_5 - uVar30 & 7);
      if (uVar30 != 0) {
        do {
          *(float *)(param_4 + uVar38 * 4) =
               *(float *)(lVar40 + uVar38 * 4) * fVar6 + *(float *)(lVar28 + uVar38 * 4);
          uVar38 = uVar38 + 1;
        } while (uVar38 < uVar30);
      }
      if ((uVar30 * 4 + lVar40 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar40 + uVar30 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar3 = (float *)(lVar40 + 0x10 + uVar30 * 4);
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar3 = (float *)(lVar28 + uVar30 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(lVar28 + 0x10 + uVar30 * 4);
          fVar17 = *pfVar4;
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          pfVar4 = (float *)(param_4 + uVar30 * 4);
          *pfVar4 = *pfVar3 + *pfVar1 * fVar6;
          pfVar4[1] = fVar14 + fVar7 * fVar6;
          pfVar4[2] = fVar15 + fVar8 * fVar6;
          pfVar4[3] = fVar16 + fVar9 * fVar6;
          pfVar1 = (float *)(param_4 + 0x10 + uVar30 * 4);
          *pfVar1 = fVar17 + fVar10 * fVar6;
          pfVar1[1] = fVar18 + fVar11 * fVar6;
          pfVar1[2] = fVar19 + fVar12 * fVar6;
          pfVar1[3] = fVar20 + fVar13 * fVar6;
          uVar30 = uVar30 + 8;
        } while (uVar30 < uVar35);
      }
      else {
        do {
          pfVar1 = (float *)(lVar40 + uVar30 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar3 = (float *)(lVar40 + 0x10 + uVar30 * 4);
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar3 = (float *)(lVar28 + uVar30 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(lVar28 + 0x10 + uVar30 * 4);
          fVar17 = *pfVar4;
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          pfVar4 = (float *)(param_4 + uVar30 * 4);
          *pfVar4 = *pfVar3 + *pfVar1 * fVar6;
          pfVar4[1] = fVar14 + fVar7 * fVar6;
          pfVar4[2] = fVar15 + fVar8 * fVar6;
          pfVar4[3] = fVar16 + fVar9 * fVar6;
          pfVar1 = (float *)(param_4 + 0x10 + uVar30 * 4);
          *pfVar1 = fVar17 + fVar10 * fVar6;
          pfVar1[1] = fVar18 + fVar11 * fVar6;
          pfVar1[2] = fVar19 + fVar12 * fVar6;
          pfVar1[3] = fVar20 + fVar13 * fVar6;
          uVar30 = uVar30 + 8;
        } while (uVar30 < uVar35);
      }
      goto LAB_14006c171;
    }
  }
LAB_14006c357:
  uVar35 = 0;
LAB_14006c171:
  if (uVar35 < param_5) {
    do {
      *(float *)(param_4 + uVar35 * 4) =
           *(float *)(lVar37 * param_2 + param_1 + uVar35 * 4) * fVar6 +
           *(float *)(param_1 + param_2 * lVar32 + uVar35 * 4);
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_5);
  }
  return;
}

