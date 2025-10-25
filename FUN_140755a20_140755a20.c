
void FUN_140755a20(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  float fVar29;
  float fVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  
  uVar36 = (ulonglong)param_7;
  lVar38 = (longlong)param_3;
  lVar37 = (longlong)(param_7 >> 1);
  lVar40 = (lVar38 - lVar37 >> 0x3f & uVar36) + (lVar38 - lVar37);
  if (lVar40 == 0) {
    uVar43 = 0;
    uVar34 = uVar36;
  }
  else {
    uVar43 = (ulonglong)(int)lVar40;
    uVar34 = uVar43;
  }
  lVar33 = uVar34 - 1;
  fVar6 = *param_6;
  uVar34 = uVar43 + 1;
  if (uVar43 + 1 == uVar36) {
    uVar34 = 0;
  }
  lVar35 = (longlong)(int)lVar33 + -1;
  if (SCARRY8((longlong)(int)lVar33,-1) != lVar35 < 0) {
    lVar35 = uVar36 - 1;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1407562f7:
      uVar31 = 0;
      if (param_5 == 0) goto LAB_140755c9f;
      uVar43 = 0;
      uVar36 = param_5;
    }
    else {
      uVar43 = param_2 * lVar40 + param_1;
      uVar36 = uVar43 & 0xf;
      if (uVar36 != 0) {
        if ((uVar43 & 3) != 0) goto LAB_1407562f7;
        uVar36 = 0x10 - uVar36 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar36 + 8)) goto LAB_1407562f7;
      uVar31 = param_5 - (param_5 - uVar36 & 7);
      lVar41 = param_2 * lVar33 + param_1;
      uVar44 = 0;
      if (uVar36 != 0) {
        do {
          *(float *)(uVar43 + uVar44 * 4) =
               (*(float *)(uVar43 + uVar44 * 4) + *(float *)(lVar41 + uVar44 * 4)) * fVar6;
          uVar44 = uVar44 + 1;
        } while (uVar44 < uVar36);
      }
      if ((lVar41 + uVar36 * 4 & 0xf) == 0) {
        do {
          pfVar2 = (float *)(uVar43 + uVar36 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(uVar43 + 0x10 + uVar36 * 4);
          fVar13 = *pfVar3;
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar5 = (float *)(lVar41 + uVar36 * 4);
          fVar17 = pfVar5[1];
          fVar18 = pfVar5[2];
          fVar19 = pfVar5[3];
          pfVar3 = (float *)(lVar41 + 0x10 + uVar36 * 4);
          fVar20 = *pfVar3;
          fVar21 = pfVar3[1];
          fVar22 = pfVar3[2];
          fVar23 = pfVar3[3];
          pfVar3 = (float *)(uVar43 + uVar36 * 4);
          *pfVar3 = (*pfVar2 + *pfVar5) * fVar6;
          pfVar3[1] = (fVar10 + fVar17) * fVar6;
          pfVar3[2] = (fVar11 + fVar18) * fVar6;
          pfVar3[3] = (fVar12 + fVar19) * fVar6;
          pfVar2 = (float *)(uVar43 + 0x10 + uVar36 * 4);
          *pfVar2 = (fVar13 + fVar20) * fVar6;
          pfVar2[1] = (fVar14 + fVar21) * fVar6;
          pfVar2[2] = (fVar15 + fVar22) * fVar6;
          pfVar2[3] = (fVar16 + fVar23) * fVar6;
          uVar36 = uVar36 + 8;
        } while (uVar36 < uVar31);
      }
      else {
        do {
          pfVar5 = (float *)(lVar41 + uVar36 * 4);
          fVar10 = pfVar5[1];
          fVar11 = pfVar5[2];
          fVar12 = pfVar5[3];
          pfVar2 = (float *)(lVar41 + 0x10 + uVar36 * 4);
          fVar13 = *pfVar2;
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar2 = (float *)(uVar43 + uVar36 * 4);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(uVar43 + 0x10 + uVar36 * 4);
          fVar20 = *pfVar3;
          fVar21 = pfVar3[1];
          fVar22 = pfVar3[2];
          fVar23 = pfVar3[3];
          pfVar3 = (float *)(uVar43 + uVar36 * 4);
          *pfVar3 = (*pfVar5 + *pfVar2) * fVar6;
          pfVar3[1] = (fVar10 + fVar17) * fVar6;
          pfVar3[2] = (fVar11 + fVar18) * fVar6;
          pfVar3[3] = (fVar12 + fVar19) * fVar6;
          pfVar2 = (float *)(uVar43 + 0x10 + uVar36 * 4);
          *pfVar2 = (fVar13 + fVar20) * fVar6;
          pfVar2[1] = (fVar14 + fVar21) * fVar6;
          pfVar2[2] = (fVar15 + fVar22) * fVar6;
          pfVar2[3] = (fVar16 + fVar23) * fVar6;
          uVar36 = uVar36 + 8;
        } while (uVar36 < uVar31);
      }
      if (param_5 < uVar31 + 1) goto LAB_140755c9f;
      uVar36 = param_5 - uVar31;
      if ((longlong)uVar36 < 2) {
        uVar43 = 0;
      }
      else {
        lVar1 = uVar43 + uVar31 * 4;
        uVar44 = 0;
        uVar43 = uVar36 & 0xfffffffffffffffe;
        lVar42 = 0;
        do {
          uVar7 = *(undefined8 *)(lVar42 + lVar1);
          uVar44 = uVar44 + 2;
          uVar8 = *(undefined8 *)(lVar42 + lVar41 + uVar31 * 4);
          *(ulonglong *)(lVar42 + lVar1) =
               CONCAT44(((float)((ulonglong)uVar7 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)) *
                        fVar6,((float)uVar7 + (float)uVar8) * fVar6);
          lVar42 = lVar42 + 8;
        } while (uVar44 < uVar43);
      }
    }
    if (uVar43 < uVar36) {
      lVar41 = param_2 * lVar40 + param_1 + uVar31 * 4;
      do {
        *(float *)(lVar41 + uVar43 * 4) =
             (*(float *)(lVar41 + uVar43 * 4) +
             *(float *)(lVar33 * param_2 + param_1 + uVar31 * 4 + uVar43 * 4)) * fVar6;
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar36);
    }
  }
LAB_140755c9f:
  if (1 < lVar37) {
    uVar31 = 0;
    uVar36 = param_2 * lVar40 + param_1;
    uVar43 = uVar36 & 0xf;
    do {
      fVar6 = param_6[uVar31 + 1];
      lVar33 = param_2 * uVar34;
      uVar34 = uVar34 + 1;
      if (uVar34 == (longlong)param_7) {
        uVar34 = 0;
      }
      lVar33 = lVar33 + param_1;
      lVar41 = param_2 * lVar35 + param_1;
      lVar35 = lVar35 + -1;
      if (lVar35 < 0) {
        lVar35 = (longlong)param_7 + -1;
      }
      if (0 < (longlong)param_5) {
        if (((longlong)param_5 < 8) ||
           (((uVar44 = uVar43, uVar43 != 0 && (uVar44 = 0x10 - uVar43 >> 2, (uVar36 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar44 + 8))))) {
          uVar39 = 0;
          if (param_5 != 0) {
            uVar32 = 0;
            uVar44 = param_5;
            goto LAB_140755f0e;
          }
        }
        else {
          uVar32 = 0;
          uVar39 = param_5 - (param_5 - uVar44 & 7);
          if (uVar44 != 0) {
            do {
              *(float *)(uVar36 + uVar32 * 4) =
                   (*(float *)(lVar33 + uVar32 * 4) + *(float *)(lVar41 + uVar32 * 4)) * fVar6 +
                   *(float *)(uVar36 + uVar32 * 4);
              uVar32 = uVar32 + 1;
            } while (uVar32 < uVar44);
          }
          if ((lVar41 + uVar44 * 4 & 0xf) == 0) {
            do {
              pfVar2 = (float *)(lVar33 + uVar44 * 4);
              fVar10 = pfVar2[1];
              fVar11 = pfVar2[2];
              fVar12 = pfVar2[3];
              pfVar3 = (float *)(lVar33 + 0x10 + uVar44 * 4);
              fVar13 = *pfVar3;
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar3 = (float *)(lVar41 + uVar44 * 4);
              fVar17 = pfVar3[1];
              fVar18 = pfVar3[2];
              fVar19 = pfVar3[3];
              pfVar5 = (float *)(lVar41 + 0x10 + uVar44 * 4);
              fVar20 = *pfVar5;
              fVar21 = pfVar5[1];
              fVar22 = pfVar5[2];
              fVar23 = pfVar5[3];
              pfVar5 = (float *)(uVar36 + uVar44 * 4);
              fVar24 = pfVar5[1];
              fVar25 = pfVar5[2];
              fVar26 = pfVar5[3];
              pfVar4 = (float *)(uVar36 + 0x10 + uVar44 * 4);
              fVar27 = *pfVar4;
              fVar28 = pfVar4[1];
              fVar29 = pfVar4[2];
              fVar30 = pfVar4[3];
              pfVar4 = (float *)(uVar36 + uVar44 * 4);
              *pfVar4 = (*pfVar2 + *pfVar3) * fVar6 + *pfVar5;
              pfVar4[1] = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar4[2] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar4[3] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2 = (float *)(uVar36 + 0x10 + uVar44 * 4);
              *pfVar2 = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar2[1] = (fVar14 + fVar21) * fVar6 + fVar28;
              pfVar2[2] = (fVar15 + fVar22) * fVar6 + fVar29;
              pfVar2[3] = (fVar16 + fVar23) * fVar6 + fVar30;
              uVar44 = uVar44 + 8;
            } while (uVar44 < uVar39);
          }
          else {
            do {
              pfVar2 = (float *)(lVar33 + uVar44 * 4);
              fVar10 = pfVar2[1];
              fVar11 = pfVar2[2];
              fVar12 = pfVar2[3];
              pfVar3 = (float *)(lVar33 + 0x10 + uVar44 * 4);
              fVar13 = *pfVar3;
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar3 = (float *)(lVar41 + uVar44 * 4);
              fVar17 = pfVar3[1];
              fVar18 = pfVar3[2];
              fVar19 = pfVar3[3];
              pfVar5 = (float *)(lVar41 + 0x10 + uVar44 * 4);
              fVar20 = *pfVar5;
              fVar21 = pfVar5[1];
              fVar22 = pfVar5[2];
              fVar23 = pfVar5[3];
              pfVar5 = (float *)(uVar36 + uVar44 * 4);
              fVar24 = pfVar5[1];
              fVar25 = pfVar5[2];
              fVar26 = pfVar5[3];
              pfVar4 = (float *)(uVar36 + 0x10 + uVar44 * 4);
              fVar27 = *pfVar4;
              fVar28 = pfVar4[1];
              fVar29 = pfVar4[2];
              fVar30 = pfVar4[3];
              pfVar4 = (float *)(uVar36 + uVar44 * 4);
              *pfVar4 = (*pfVar2 + *pfVar3) * fVar6 + *pfVar5;
              pfVar4[1] = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar4[2] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar4[3] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2 = (float *)(uVar36 + 0x10 + uVar44 * 4);
              *pfVar2 = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar2[1] = (fVar14 + fVar21) * fVar6 + fVar28;
              pfVar2[2] = (fVar15 + fVar22) * fVar6 + fVar29;
              pfVar2[3] = (fVar16 + fVar23) * fVar6 + fVar30;
              uVar44 = uVar44 + 8;
            } while (uVar44 < uVar39);
          }
          if (uVar39 + 1 <= param_5) {
            uVar44 = param_5 - uVar39;
            if ((longlong)uVar44 < 2) {
              uVar32 = 0;
            }
            else {
              uVar45 = 0;
              lVar1 = uVar36 + uVar39 * 4;
              uVar32 = uVar44 & 0xfffffffffffffffe;
              lVar42 = 0;
              do {
                uVar7 = *(undefined8 *)(lVar42 + lVar33 + uVar39 * 4);
                uVar45 = uVar45 + 2;
                uVar8 = *(undefined8 *)(lVar42 + lVar41 + uVar39 * 4);
                uVar9 = *(undefined8 *)(lVar42 + lVar1);
                *(ulonglong *)(lVar42 + lVar1) =
                     CONCAT44((float)((ulonglong)uVar9 >> 0x20) +
                              ((float)((ulonglong)uVar7 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)
                              ) * fVar6,(float)uVar9 + ((float)uVar7 + (float)uVar8) * fVar6);
                lVar42 = lVar42 + 8;
              } while (uVar45 < uVar32);
            }
LAB_140755f0e:
            if (uVar32 < uVar44) {
              lVar1 = uVar36 + uVar39 * 4;
              do {
                *(float *)(lVar1 + uVar32 * 4) =
                     (*(float *)(lVar33 + uVar39 * 4 + uVar32 * 4) +
                     *(float *)(lVar41 + uVar39 * 4 + uVar32 * 4)) * fVar6 +
                     *(float *)(lVar1 + uVar32 * 4);
                uVar32 = uVar32 + 1;
              } while (uVar32 < uVar44);
            }
          }
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < lVar37 - 1U);
  }
  fVar6 = param_6[lVar37];
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar36 = param_4 & 0xf;
      if (uVar36 != 0) {
        if ((param_4 & 3) != 0) goto LAB_14075631d;
        uVar36 = 0x10 - uVar36 >> 2;
      }
      if ((longlong)(uVar36 + 4) <= (longlong)param_5) {
        lVar33 = param_2 * lVar38 + param_1;
        lVar37 = param_2 * lVar40 + param_1;
        uVar34 = param_5 - (param_5 - uVar36 & 3);
        uVar43 = 0;
        if (uVar36 != 0) {
          do {
            *(float *)(param_4 + uVar43 * 4) =
                 *(float *)(lVar33 + uVar43 * 4) * fVar6 + *(float *)(lVar37 + uVar43 * 4);
            uVar43 = uVar43 + 1;
          } while (uVar43 < uVar36);
        }
        if ((lVar33 + uVar36 * 4 & 0xf) == 0) {
          do {
            pfVar5 = (float *)(lVar33 + uVar36 * 4);
            fVar10 = pfVar5[1];
            fVar11 = pfVar5[2];
            fVar12 = pfVar5[3];
            pfVar2 = (float *)(lVar37 + uVar36 * 4);
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            pfVar3 = (float *)(param_4 + uVar36 * 4);
            *pfVar3 = *pfVar2 + *pfVar5 * fVar6;
            pfVar3[1] = fVar13 + fVar10 * fVar6;
            pfVar3[2] = fVar14 + fVar11 * fVar6;
            pfVar3[3] = fVar15 + fVar12 * fVar6;
            uVar36 = uVar36 + 4;
          } while (uVar36 < uVar34);
        }
        else {
          do {
            pfVar5 = (float *)(lVar33 + uVar36 * 4);
            fVar10 = pfVar5[1];
            fVar11 = pfVar5[2];
            fVar12 = pfVar5[3];
            pfVar2 = (float *)(lVar37 + uVar36 * 4);
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            pfVar3 = (float *)(param_4 + uVar36 * 4);
            *pfVar3 = *pfVar2 + *pfVar5 * fVar6;
            pfVar3[1] = fVar13 + fVar10 * fVar6;
            pfVar3[2] = fVar14 + fVar11 * fVar6;
            pfVar3[3] = fVar15 + fVar12 * fVar6;
            uVar36 = uVar36 + 4;
          } while (uVar36 < uVar34);
        }
        goto LAB_14075629c;
      }
    }
LAB_14075631d:
    uVar34 = 0;
LAB_14075629c:
    if (param_5 <= uVar34) {
      return;
    }
    do {
      *(float *)(param_4 + uVar34 * 4) =
           *(float *)(lVar38 * param_2 + param_1 + uVar34 * 4) * fVar6 +
           *(float *)(param_1 + param_2 * lVar40 + uVar34 * 4);
      uVar34 = uVar34 + 1;
    } while (uVar34 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 8) {
LAB_14075630e:
    uVar34 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar36 = param_4 & 0xf;
    if (uVar36 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14075630e;
      uVar36 = 0x10 - uVar36 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar36 + 8)) goto LAB_14075630e;
    lVar37 = param_2 * lVar38 + param_1;
    lVar33 = param_2 * lVar40 + param_1;
    uVar34 = param_5 - (param_5 - uVar36 & 7);
    uVar43 = 0;
    if (uVar36 != 0) {
      do {
        *(float *)(param_4 + uVar43 * 4) =
             *(float *)(lVar37 + uVar43 * 4) * fVar6 + *(float *)(lVar33 + uVar43 * 4);
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar36);
    }
    if ((lVar37 + uVar36 * 4 & 0xf) == 0) {
      do {
        pfVar2 = (float *)(lVar37 + uVar36 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(lVar37 + 0x10 + uVar36 * 4);
        fVar13 = *pfVar3;
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar3 = (float *)(lVar33 + uVar36 * 4);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar5 = (float *)(lVar33 + 0x10 + uVar36 * 4);
        fVar20 = *pfVar5;
        fVar21 = pfVar5[1];
        fVar22 = pfVar5[2];
        fVar23 = pfVar5[3];
        pfVar5 = (float *)(param_4 + uVar36 * 4);
        *pfVar5 = *pfVar3 + *pfVar2 * fVar6;
        pfVar5[1] = fVar17 + fVar10 * fVar6;
        pfVar5[2] = fVar18 + fVar11 * fVar6;
        pfVar5[3] = fVar19 + fVar12 * fVar6;
        pfVar2 = (float *)(param_4 + 0x10 + uVar36 * 4);
        *pfVar2 = fVar20 + fVar13 * fVar6;
        pfVar2[1] = fVar21 + fVar14 * fVar6;
        pfVar2[2] = fVar22 + fVar15 * fVar6;
        pfVar2[3] = fVar23 + fVar16 * fVar6;
        uVar36 = uVar36 + 8;
      } while (uVar36 < uVar34);
    }
    else {
      do {
        pfVar2 = (float *)(lVar37 + uVar36 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(lVar37 + 0x10 + uVar36 * 4);
        fVar13 = *pfVar3;
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar3 = (float *)(lVar33 + uVar36 * 4);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar5 = (float *)(lVar33 + 0x10 + uVar36 * 4);
        fVar20 = *pfVar5;
        fVar21 = pfVar5[1];
        fVar22 = pfVar5[2];
        fVar23 = pfVar5[3];
        pfVar5 = (float *)(param_4 + uVar36 * 4);
        *pfVar5 = *pfVar3 + *pfVar2 * fVar6;
        pfVar5[1] = fVar17 + fVar10 * fVar6;
        pfVar5[2] = fVar18 + fVar11 * fVar6;
        pfVar5[3] = fVar19 + fVar12 * fVar6;
        pfVar2 = (float *)(param_4 + 0x10 + uVar36 * 4);
        *pfVar2 = fVar20 + fVar13 * fVar6;
        pfVar2[1] = fVar21 + fVar14 * fVar6;
        pfVar2[2] = fVar22 + fVar15 * fVar6;
        pfVar2[3] = fVar23 + fVar16 * fVar6;
        uVar36 = uVar36 + 8;
      } while (uVar36 < uVar34);
    }
    if (param_5 < uVar34 + 1) {
      return;
    }
    param_5 = param_5 - uVar34;
    if (3 < (longlong)param_5) {
      uVar43 = 0;
      uVar36 = param_5 & 0xfffffffffffffffc;
      do {
        pfVar2 = (float *)(lVar37 + uVar34 * 4 + uVar43 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar5 = (float *)(lVar33 + uVar34 * 4 + uVar43 * 4);
        fVar13 = pfVar5[1];
        fVar14 = pfVar5[2];
        fVar15 = pfVar5[3];
        pfVar3 = (float *)(param_4 + uVar34 * 4 + uVar43 * 4);
        *pfVar3 = *pfVar5 + *pfVar2 * fVar6;
        pfVar3[1] = fVar13 + fVar10 * fVar6;
        pfVar3[2] = fVar14 + fVar11 * fVar6;
        pfVar3[3] = fVar15 + fVar12 * fVar6;
        uVar43 = uVar43 + 4;
      } while (uVar43 < uVar36);
      goto LAB_14075611c;
    }
  }
  uVar36 = 0;
LAB_14075611c:
  if (uVar36 < param_5) {
    do {
      *(float *)(param_4 + uVar34 * 4 + uVar36 * 4) =
           *(float *)(param_1 + param_2 * lVar38 + uVar34 * 4 + uVar36 * 4) * fVar6 +
           *(float *)(lVar40 * param_2 + param_1 + uVar34 * 4 + uVar36 * 4);
      uVar36 = uVar36 + 1;
    } while (uVar36 < param_5);
  }
  return;
}

