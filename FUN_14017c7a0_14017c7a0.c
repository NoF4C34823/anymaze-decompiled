
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017c7a0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,int param_7,int param_8)

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
  uint uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  float *pfVar37;
  int iVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined2 uVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [16];
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  uVar40 = (ulonglong)param_7;
  iVar38 = param_7 >> 1;
  lVar31 = (longlong)param_3;
  lVar32 = lVar31 - iVar38;
  lVar32 = (lVar32 >> 0x3f & uVar40) + lVar32;
  if (lVar32 == 0) {
    uVar33 = 0;
    uVar43 = uVar40;
  }
  else {
    uVar33 = (ulonglong)(int)lVar32;
    uVar43 = uVar33;
  }
  lVar36 = uVar43 - 1;
  uVar43 = uVar33 + 1;
  if (uVar33 + 1 == uVar40) {
    uVar43 = 0;
  }
  fVar6 = *param_6;
  uVar33 = (longlong)(int)lVar36;
  if ((longlong)(int)lVar36 < 1) {
    uVar33 = uVar40;
  }
  lVar42 = uVar33 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14017d1ce:
      uVar35 = 0;
      if (param_5 == 0) goto LAB_14017c9fe;
      uVar44 = 0;
      uVar33 = param_5;
    }
    else {
      uVar44 = param_2 * lVar32 + param_1;
      uVar33 = uVar44 & 0xf;
      if (uVar33 != 0) {
        if ((uVar44 & 3) != 0) goto LAB_14017d1ce;
        uVar33 = 0x10 - uVar33 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar33 + 8)) goto LAB_14017d1ce;
      lVar45 = param_2 * lVar36 + param_1;
      uVar46 = 0;
      uVar35 = param_5 - (param_5 - uVar33 & 7);
      if (uVar33 != 0) {
        do {
          *(float *)(uVar44 + uVar46 * 4) =
               (*(float *)(uVar44 + uVar46 * 4) + *(float *)(lVar45 + uVar46 * 4)) * fVar6;
          uVar46 = uVar46 + 1;
        } while (uVar46 < uVar33);
      }
      if ((lVar45 + uVar33 * 4 & 0xf) == 0) {
        do {
          pfVar37 = (float *)(uVar44 + uVar33 * 4);
          fVar7 = pfVar37[1];
          fVar8 = pfVar37[2];
          fVar9 = pfVar37[3];
          pfVar2 = (float *)(uVar44 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar5 = (float *)(lVar45 + uVar33 * 4);
          fVar14 = pfVar5[1];
          fVar15 = pfVar5[2];
          fVar16 = pfVar5[3];
          pfVar2 = (float *)(lVar45 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar2 = (float *)(uVar44 + uVar33 * 4);
          *pfVar2 = (*pfVar37 + *pfVar5) * fVar6;
          pfVar2[1] = (fVar7 + fVar14) * fVar6;
          pfVar2[2] = (fVar8 + fVar15) * fVar6;
          pfVar2[3] = (fVar9 + fVar16) * fVar6;
          pfVar37 = (float *)(uVar44 + 0x10 + uVar33 * 4);
          *pfVar37 = (fVar10 + fVar17) * fVar6;
          pfVar37[1] = (fVar11 + fVar18) * fVar6;
          pfVar37[2] = (fVar12 + fVar19) * fVar6;
          pfVar37[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar35);
      }
      else {
        do {
          pfVar5 = (float *)(lVar45 + uVar33 * 4);
          fVar7 = pfVar5[1];
          fVar8 = pfVar5[2];
          fVar9 = pfVar5[3];
          pfVar37 = (float *)(lVar45 + 0x10 + uVar33 * 4);
          fVar10 = *pfVar37;
          fVar11 = pfVar37[1];
          fVar12 = pfVar37[2];
          fVar13 = pfVar37[3];
          pfVar37 = (float *)(uVar44 + uVar33 * 4);
          fVar14 = pfVar37[1];
          fVar15 = pfVar37[2];
          fVar16 = pfVar37[3];
          pfVar2 = (float *)(uVar44 + 0x10 + uVar33 * 4);
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar2 = (float *)(uVar44 + uVar33 * 4);
          *pfVar2 = (*pfVar5 + *pfVar37) * fVar6;
          pfVar2[1] = (fVar7 + fVar14) * fVar6;
          pfVar2[2] = (fVar8 + fVar15) * fVar6;
          pfVar2[3] = (fVar9 + fVar16) * fVar6;
          pfVar37 = (float *)(uVar44 + 0x10 + uVar33 * 4);
          *pfVar37 = (fVar10 + fVar17) * fVar6;
          pfVar37[1] = (fVar11 + fVar18) * fVar6;
          pfVar37[2] = (fVar12 + fVar19) * fVar6;
          pfVar37[3] = (fVar13 + fVar20) * fVar6;
          uVar33 = uVar33 + 8;
        } while (uVar33 < uVar35);
      }
      if (param_5 < uVar35 + 1) goto LAB_14017c9fe;
      uVar33 = param_5 - uVar35;
      if ((longlong)uVar33 < 4) {
        uVar44 = 0;
      }
      else {
        uVar46 = 0;
        lVar1 = uVar44 + uVar35 * 4;
        uVar44 = uVar33 & 0xfffffffffffffffc;
        do {
          pfVar37 = (float *)(lVar45 + uVar35 * 4 + uVar46 * 4);
          fVar7 = pfVar37[1];
          fVar8 = pfVar37[2];
          fVar9 = pfVar37[3];
          pfVar2 = (float *)(lVar1 + uVar46 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar5 = (float *)(lVar1 + uVar46 * 4);
          *pfVar5 = (*pfVar37 + *pfVar2) * fVar6;
          pfVar5[1] = (fVar7 + fVar10) * fVar6;
          pfVar5[2] = (fVar8 + fVar11) * fVar6;
          pfVar5[3] = (fVar9 + fVar12) * fVar6;
          uVar46 = uVar46 + 4;
        } while (uVar46 < uVar44);
      }
    }
    if (uVar44 < uVar33) {
      lVar45 = param_2 * lVar32 + param_1 + uVar35 * 4;
      do {
        *(float *)(lVar45 + uVar44 * 4) =
             (*(float *)(lVar45 + uVar44 * 4) +
             *(float *)(lVar36 * param_2 + param_1 + uVar35 * 4 + uVar44 * 4)) * fVar6;
        uVar44 = uVar44 + 1;
      } while (uVar44 < uVar33);
    }
  }
LAB_14017c9fe:
  if (1 < iVar38) {
    uVar33 = param_2 * lVar32 + param_1;
    uVar34 = 0;
    uVar44 = uVar33 & 0xf;
    pfVar37 = param_6;
    do {
      while( true ) {
        lVar36 = param_2 * uVar43;
        lVar45 = param_2 * lVar42;
        uVar43 = uVar43 + 1;
        if (uVar43 == (longlong)param_7) {
          uVar43 = 0;
        }
        lVar42 = lVar42 + -1;
        fVar6 = pfVar37[1];
        if (lVar42 < 0) {
          lVar42 = uVar40 - 1;
        }
        lVar36 = lVar36 + param_1;
        lVar45 = lVar45 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar35 = uVar44, uVar44 != 0 && (uVar35 = 0x10 - uVar44 >> 2, (uVar33 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar35 + 8))))) {
          uVar46 = 0;
          if (param_5 != 0) {
            uVar39 = 0;
            uVar35 = param_5;
            goto LAB_14017cc64;
          }
        }
        else {
          uVar39 = 0;
          uVar46 = param_5 - (param_5 - uVar35 & 7);
          if (uVar35 != 0) {
            do {
              *(float *)(uVar33 + uVar39 * 4) =
                   (*(float *)(lVar36 + uVar39 * 4) + *(float *)(lVar45 + uVar39 * 4)) * fVar6 +
                   *(float *)(uVar33 + uVar39 * 4);
              uVar39 = uVar39 + 1;
            } while (uVar39 < uVar35);
          }
          if ((lVar45 + uVar35 * 4 & 0xf) == 0) {
            do {
              pfVar2 = (float *)(lVar36 + uVar35 * 4);
              fVar7 = pfVar2[1];
              fVar8 = pfVar2[2];
              fVar9 = pfVar2[3];
              pfVar5 = (float *)(lVar36 + 0x10 + uVar35 * 4);
              fVar10 = *pfVar5;
              fVar11 = pfVar5[1];
              fVar12 = pfVar5[2];
              fVar13 = pfVar5[3];
              pfVar5 = (float *)(lVar45 + uVar35 * 4);
              fVar14 = pfVar5[1];
              fVar15 = pfVar5[2];
              fVar16 = pfVar5[3];
              pfVar3 = (float *)(lVar45 + 0x10 + uVar35 * 4);
              fVar17 = *pfVar3;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              pfVar3 = (float *)(uVar33 + uVar35 * 4);
              fVar21 = pfVar3[1];
              fVar22 = pfVar3[2];
              fVar23 = pfVar3[3];
              pfVar4 = (float *)(uVar33 + 0x10 + uVar35 * 4);
              fVar24 = *pfVar4;
              fVar25 = pfVar4[1];
              fVar26 = pfVar4[2];
              fVar27 = pfVar4[3];
              pfVar4 = (float *)(uVar33 + uVar35 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar4[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar4[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar2 = (float *)(uVar33 + 0x10 + uVar35 * 4);
              *pfVar2 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar2[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar2[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar46);
          }
          else {
            do {
              pfVar2 = (float *)(lVar36 + uVar35 * 4);
              fVar7 = pfVar2[1];
              fVar8 = pfVar2[2];
              fVar9 = pfVar2[3];
              pfVar5 = (float *)(lVar36 + 0x10 + uVar35 * 4);
              fVar10 = *pfVar5;
              fVar11 = pfVar5[1];
              fVar12 = pfVar5[2];
              fVar13 = pfVar5[3];
              pfVar5 = (float *)(lVar45 + uVar35 * 4);
              fVar14 = pfVar5[1];
              fVar15 = pfVar5[2];
              fVar16 = pfVar5[3];
              pfVar3 = (float *)(lVar45 + 0x10 + uVar35 * 4);
              fVar17 = *pfVar3;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              pfVar3 = (float *)(uVar33 + uVar35 * 4);
              fVar21 = pfVar3[1];
              fVar22 = pfVar3[2];
              fVar23 = pfVar3[3];
              pfVar4 = (float *)(uVar33 + 0x10 + uVar35 * 4);
              fVar24 = *pfVar4;
              fVar25 = pfVar4[1];
              fVar26 = pfVar4[2];
              fVar27 = pfVar4[3];
              pfVar4 = (float *)(uVar33 + uVar35 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar4[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar4[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar2 = (float *)(uVar33 + 0x10 + uVar35 * 4);
              *pfVar2 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar2[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar2[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar35 = uVar35 + 8;
            } while (uVar35 < uVar46);
          }
          if (uVar46 + 1 <= param_5) {
            uVar35 = param_5 - uVar46;
            if ((longlong)uVar35 < 4) {
              uVar39 = 0;
            }
            else {
              uVar47 = 0;
              uVar39 = uVar35 & 0xfffffffffffffffc;
              lVar1 = uVar33 + uVar46 * 4;
              do {
                pfVar4 = (float *)(lVar36 + uVar46 * 4 + uVar47 * 4);
                fVar10 = pfVar4[1];
                fVar11 = pfVar4[2];
                fVar12 = pfVar4[3];
                pfVar2 = (float *)(lVar45 + uVar46 * 4 + uVar47 * 4);
                fVar7 = pfVar2[1];
                fVar8 = pfVar2[2];
                fVar9 = pfVar2[3];
                pfVar5 = (float *)(lVar1 + uVar47 * 4);
                fVar13 = pfVar5[1];
                fVar14 = pfVar5[2];
                fVar15 = pfVar5[3];
                pfVar3 = (float *)(lVar1 + uVar47 * 4);
                *pfVar3 = (*pfVar4 + *pfVar2) * fVar6 + *pfVar5;
                pfVar3[1] = (fVar10 + fVar7) * fVar6 + fVar13;
                pfVar3[2] = (fVar11 + fVar8) * fVar6 + fVar14;
                pfVar3[3] = (fVar12 + fVar9) * fVar6 + fVar15;
                uVar47 = uVar47 + 4;
              } while (uVar47 < uVar39);
            }
LAB_14017cc64:
            if (uVar39 < uVar35) {
              lVar1 = uVar33 + uVar46 * 4;
              do {
                *(float *)(lVar1 + uVar39 * 4) =
                     (*(float *)(lVar36 + uVar46 * 4 + uVar39 * 4) +
                     *(float *)(lVar45 + uVar46 * 4 + uVar39 * 4)) * fVar6 +
                     *(float *)(lVar1 + uVar39 * 4);
                uVar39 = uVar39 + 1;
              } while (uVar39 < uVar35);
            }
          }
        }
        uVar34 = uVar34 + 1;
        pfVar37 = pfVar37 + 1;
        if (iVar38 - 1U <= uVar34) goto LAB_14017ccdb;
      }
      uVar34 = uVar34 + 1;
      pfVar37 = pfVar37 + 1;
    } while (uVar34 < iVar38 - 1U);
  }
LAB_14017ccdb:
  lVar36 = (longlong)param_7;
  fVar6 = param_6[iVar38];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14017d1b4:
      uVar33 = 0;
    }
    else {
      uVar43 = lVar36 * param_2 + param_1;
      uVar40 = uVar43 & 0xf;
      if (uVar40 != 0) {
        if ((uVar43 & 3) != 0) goto LAB_14017d1b4;
        uVar40 = 0x10 - uVar40 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar40 + 8)) goto LAB_14017d1b4;
      lVar45 = param_2 * lVar31 + param_1;
      lVar42 = param_2 * lVar32 + param_1;
      uVar44 = 0;
      uVar33 = param_5 - (param_5 - uVar40 & 7);
      if (uVar40 != 0) {
        do {
          *(float *)(uVar43 + uVar44 * 4) =
               *(float *)(lVar45 + uVar44 * 4) * fVar6 + *(float *)(lVar42 + uVar44 * 4);
          uVar44 = uVar44 + 1;
        } while (uVar44 < uVar40);
      }
      if ((lVar45 + uVar40 * 4 & 0xf) == 0) {
        do {
          pfVar37 = (float *)(lVar45 + uVar40 * 4);
          fVar7 = pfVar37[1];
          fVar8 = pfVar37[2];
          fVar9 = pfVar37[3];
          pfVar2 = (float *)(lVar45 + 0x10 + uVar40 * 4);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar2 = (float *)(lVar42 + uVar40 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar5 = (float *)(lVar42 + 0x10 + uVar40 * 4);
          fVar17 = *pfVar5;
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar5 = (float *)(uVar43 + uVar40 * 4);
          *pfVar5 = *pfVar2 + *pfVar37 * fVar6;
          pfVar5[1] = fVar14 + fVar7 * fVar6;
          pfVar5[2] = fVar15 + fVar8 * fVar6;
          pfVar5[3] = fVar16 + fVar9 * fVar6;
          pfVar37 = (float *)(uVar43 + 0x10 + uVar40 * 4);
          *pfVar37 = fVar17 + fVar10 * fVar6;
          pfVar37[1] = fVar18 + fVar11 * fVar6;
          pfVar37[2] = fVar19 + fVar12 * fVar6;
          pfVar37[3] = fVar20 + fVar13 * fVar6;
          uVar40 = uVar40 + 8;
        } while (uVar40 < uVar33);
      }
      else {
        do {
          pfVar37 = (float *)(lVar45 + uVar40 * 4);
          fVar7 = pfVar37[1];
          fVar8 = pfVar37[2];
          fVar9 = pfVar37[3];
          pfVar2 = (float *)(lVar45 + 0x10 + uVar40 * 4);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar2 = (float *)(lVar42 + uVar40 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar5 = (float *)(lVar42 + 0x10 + uVar40 * 4);
          fVar17 = *pfVar5;
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar5 = (float *)(uVar43 + uVar40 * 4);
          *pfVar5 = *pfVar2 + *pfVar37 * fVar6;
          pfVar5[1] = fVar14 + fVar7 * fVar6;
          pfVar5[2] = fVar15 + fVar8 * fVar6;
          pfVar5[3] = fVar16 + fVar9 * fVar6;
          pfVar37 = (float *)(uVar43 + 0x10 + uVar40 * 4);
          *pfVar37 = fVar17 + fVar10 * fVar6;
          pfVar37[1] = fVar18 + fVar11 * fVar6;
          pfVar37[2] = fVar19 + fVar12 * fVar6;
          pfVar37[3] = fVar20 + fVar13 * fVar6;
          uVar40 = uVar40 + 8;
        } while (uVar40 < uVar33);
      }
    }
    uVar40 = 0;
    if (uVar33 + 1 <= param_5) {
      do {
        *(float *)(lVar36 * param_2 + param_1 + uVar33 * 4 + uVar40 * 4) =
             *(float *)(lVar31 * param_2 + param_1 + uVar33 * 4 + uVar40 * 4) * fVar6 +
             *(float *)(lVar32 * param_2 + param_1 + uVar33 * 4 + uVar40 * 4);
        uVar40 = uVar40 + 1;
      } while (uVar40 < param_5 - uVar33);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar43 = lVar36 * param_2 + param_1;
      uVar40 = uVar43 & 0xf;
      if (uVar40 != 0) {
        if ((uVar43 & 3) != 0) goto LAB_14017d1c2;
        uVar40 = 0x10 - uVar40 >> 2;
      }
      if ((longlong)(uVar40 + 4) <= (longlong)param_5) {
        uVar44 = 0;
        uVar33 = param_5 - (param_5 - uVar40 & 3);
        uVar34 = _UNK_143087d8c;
        uVar28 = _UNK_143087d88;
        uVar29 = _UNK_143087d84;
        uVar30 = _DAT_143087d80;
        if (uVar40 != 0) {
          do {
            iVar38 = (int)ROUND(*(float *)(uVar43 + uVar44 * 4));
            if (0xfffe < iVar38) {
              iVar38 = 0xffff;
            }
            uVar41 = (undefined2)iVar38;
            if (iVar38 < 1) {
              uVar41 = 0;
            }
            *(undefined2 *)(param_4 + uVar44 * 2) = uVar41;
            uVar44 = uVar44 + 1;
            uVar34 = _UNK_143087d8c;
            uVar28 = _UNK_143087d88;
            uVar29 = _UNK_143087d84;
            uVar30 = _DAT_143087d80;
          } while (uVar44 < uVar40);
        }
        do {
          pfVar37 = (float *)(uVar43 + uVar40 * 4);
          uVar49 = (uint)*pfVar37;
          uVar50 = (uint)pfVar37[1];
          uVar51 = (uint)pfVar37[2];
          uVar52 = (uint)pfVar37[3];
          uVar49 = -(uint)((int)uVar30 < (int)uVar49) & (uVar30 ^ uVar49) ^ uVar49;
          uVar50 = -(uint)((int)uVar29 < (int)uVar50) & (uVar29 ^ uVar50) ^ uVar50;
          uVar51 = -(uint)((int)uVar28 < (int)uVar51) & (uVar28 ^ uVar51) ^ uVar51;
          uVar52 = -(uint)((int)uVar34 < (int)uVar52) & (uVar34 ^ uVar52) ^ uVar52;
          auVar54._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar49) & (ushort)uVar49);
          auVar54._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar50) & (ushort)uVar50);
          auVar54._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar51) & (ushort)uVar51);
          auVar54._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar52) & (ushort)uVar52);
          auVar54 = packssdw(auVar54,(undefined1  [16])0x0);
          *(longlong *)(param_4 + uVar40 * 2) = auVar54._0_8_;
          uVar40 = uVar40 + 4;
        } while (uVar40 < uVar33);
        goto LAB_14017d14e;
      }
    }
LAB_14017d1c2:
    uVar33 = 0;
LAB_14017d14e:
    if (param_5 <= uVar33) {
      return;
    }
    do {
      iVar38 = (int)ROUND(*(float *)(param_1 + param_2 * lVar36 + uVar33 * 4));
      if (0xfffe < iVar38) {
        iVar38 = 0xffff;
      }
      uVar41 = (undefined2)iVar38;
      if (iVar38 < 1) {
        uVar41 = 0;
      }
      *(undefined2 *)(param_4 + uVar33 * 2) = uVar41;
      uVar33 = uVar33 + 1;
    } while (uVar33 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar43 = lVar36 * param_2 + param_1;
    uVar40 = uVar43 & 0xf;
    if (uVar40 != 0) {
      if ((uVar43 & 3) != 0) goto LAB_14017d1bb;
      uVar40 = 0x10 - uVar40 >> 2;
    }
    if ((longlong)(uVar40 + 8) <= (longlong)param_5) {
      uVar44 = 0;
      uVar33 = param_5 - (param_5 - uVar40 & 7);
      uVar34 = _UNK_143087d8c;
      uVar28 = _UNK_143087d88;
      uVar29 = _UNK_143087d84;
      uVar30 = _DAT_143087d80;
      if (uVar40 != 0) {
        do {
          iVar38 = (int)ROUND(*(float *)(uVar43 + uVar44 * 4));
          if (0xfffe < iVar38) {
            iVar38 = 0xffff;
          }
          uVar41 = (undefined2)iVar38;
          if (iVar38 < 1) {
            uVar41 = 0;
          }
          *(undefined2 *)(param_4 + uVar44 * 2) = uVar41;
          uVar44 = uVar44 + 1;
          uVar34 = _UNK_143087d8c;
          uVar28 = _UNK_143087d88;
          uVar29 = _UNK_143087d84;
          uVar30 = _DAT_143087d80;
        } while (uVar44 < uVar40);
      }
      do {
        pfVar37 = (float *)(uVar43 + uVar40 * 4);
        uVar49 = (uint)*pfVar37;
        uVar50 = (uint)pfVar37[1];
        uVar51 = (uint)pfVar37[2];
        uVar52 = (uint)pfVar37[3];
        uVar49 = -(uint)((int)uVar30 < (int)uVar49) & (uVar30 ^ uVar49) ^ uVar49;
        uVar50 = -(uint)((int)uVar29 < (int)uVar50) & (uVar29 ^ uVar50) ^ uVar50;
        uVar51 = -(uint)((int)uVar28 < (int)uVar51) & (uVar28 ^ uVar51) ^ uVar51;
        uVar52 = -(uint)((int)uVar34 < (int)uVar52) & (uVar34 ^ uVar52) ^ uVar52;
        auVar53._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar49) & (ushort)uVar49);
        auVar53._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar50) & (ushort)uVar50);
        auVar53._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar51) & (ushort)uVar51);
        auVar53._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar52) & (ushort)uVar52);
        auVar54 = packssdw(auVar53,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar40 * 2) = auVar54._0_8_;
        pfVar37 = (float *)(uVar43 + 0x10 + uVar40 * 4);
        uVar49 = (uint)*pfVar37;
        uVar50 = (uint)pfVar37[1];
        uVar51 = (uint)pfVar37[2];
        uVar52 = (uint)pfVar37[3];
        uVar49 = -(uint)((int)uVar30 < (int)uVar49) & (uVar30 ^ uVar49) ^ uVar49;
        uVar50 = -(uint)((int)uVar29 < (int)uVar50) & (uVar29 ^ uVar50) ^ uVar50;
        uVar51 = -(uint)((int)uVar28 < (int)uVar51) & (uVar28 ^ uVar51) ^ uVar51;
        uVar52 = -(uint)((int)uVar34 < (int)uVar52) & (uVar34 ^ uVar52) ^ uVar52;
        auVar48._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar49) & (ushort)uVar49);
        auVar48._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar50) & (ushort)uVar50);
        auVar48._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar51) & (ushort)uVar51);
        auVar48._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar52) & (ushort)uVar52);
        auVar54 = packssdw(auVar48,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar40 * 2) = auVar54._0_8_;
        uVar40 = uVar40 + 8;
      } while (uVar40 < uVar33);
      goto LAB_14017cff8;
    }
  }
LAB_14017d1bb:
  uVar33 = 0;
LAB_14017cff8:
  uVar40 = 0;
  if (uVar33 + 1 <= param_5) {
    do {
      iVar38 = (int)ROUND(*(float *)(param_1 + param_2 * lVar36 + uVar33 * 4 + uVar40 * 4));
      if (0xfffe < iVar38) {
        iVar38 = 0xffff;
      }
      uVar41 = (undefined2)iVar38;
      if (iVar38 < 1) {
        uVar41 = 0;
      }
      *(undefined2 *)(param_4 + uVar33 * 2 + uVar40 * 2) = uVar41;
      uVar40 = uVar40 + 1;
    } while (uVar40 < param_5 - uVar33);
  }
  return;
}

