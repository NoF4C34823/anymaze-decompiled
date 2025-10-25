
void FUN_1406152a0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
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
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  
  lVar37 = (longlong)param_3;
  lVar42 = 0;
  fVar9 = *param_6;
  lVar35 = lVar37 + 4;
  if (SCARRY8(lVar37,-3) == lVar37 + -3 < 0) {
    lVar35 = lVar37 + -3;
  }
  lVar37 = (longlong)(int)lVar35 + 1;
  fVar10 = param_6[1];
  if (6 < lVar37) {
    lVar37 = lVar42;
  }
  lVar38 = (longlong)(int)lVar37 + 1;
  fVar11 = param_6[2];
  if (6 < lVar38) {
    lVar38 = lVar42;
  }
  lVar39 = (longlong)(int)lVar38 + 1;
  fVar12 = param_6[3];
  if (6 < lVar39) {
    lVar39 = lVar42;
  }
  lVar41 = (longlong)(int)lVar39 + 1;
  if (6 < lVar41) {
    lVar41 = lVar42;
  }
  lVar34 = (longlong)(int)lVar41 + 1;
  if (6 < lVar34) {
    lVar34 = lVar42;
  }
  lVar40 = (longlong)(int)lVar34 + 1;
  if (6 < lVar40) {
    lVar40 = lVar42;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar44 = param_4 & 0xf;
      if (uVar44 != 0) {
        if ((param_4 & 3) != 0) goto LAB_140615c28;
        uVar44 = 0x10 - uVar44 >> 2;
      }
      if ((longlong)(uVar44 + 4) <= (longlong)param_5) {
        lVar45 = param_2 * lVar35 + param_1;
        lVar46 = param_2 * lVar40 + param_1;
        lVar47 = param_2 * lVar37 + param_1;
        lVar48 = param_2 * lVar34 + param_1;
        lVar49 = param_2 * lVar38 + param_1;
        uVar43 = param_5 - (param_5 - uVar44 & 3);
        lVar42 = param_2 * lVar39 + param_1;
        lVar50 = param_2 * lVar41 + param_1;
        if (uVar44 != 0) {
          uVar36 = 0;
          do {
            *(float *)(param_4 + uVar36 * 4) =
                 (*(float *)(lVar45 + uVar36 * 4) + *(float *)(lVar46 + uVar36 * 4)) * fVar9 +
                 (*(float *)(lVar47 + uVar36 * 4) + *(float *)(lVar48 + uVar36 * 4)) * fVar10 +
                 (*(float *)(lVar49 + uVar36 * 4) + *(float *)(lVar50 + uVar36 * 4)) * fVar11 +
                 *(float *)(lVar42 + uVar36 * 4) * fVar12;
            uVar36 = uVar36 + 1;
          } while (uVar36 < uVar44);
        }
        if ((lVar42 + uVar44 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar45 + uVar44 * 4);
            fVar13 = pfVar1[1];
            fVar14 = pfVar1[2];
            fVar15 = pfVar1[3];
            pfVar2 = (float *)(lVar46 + uVar44 * 4);
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar3 = (float *)(lVar48 + uVar44 * 4);
            fVar19 = pfVar3[1];
            fVar20 = pfVar3[2];
            fVar21 = pfVar3[3];
            pfVar4 = (float *)(lVar47 + uVar44 * 4);
            fVar22 = pfVar4[1];
            fVar23 = pfVar4[2];
            fVar24 = pfVar4[3];
            pfVar5 = (float *)(lVar50 + uVar44 * 4);
            fVar25 = pfVar5[1];
            fVar26 = pfVar5[2];
            fVar27 = pfVar5[3];
            pfVar6 = (float *)(lVar49 + uVar44 * 4);
            fVar28 = pfVar6[1];
            fVar29 = pfVar6[2];
            fVar30 = pfVar6[3];
            pfVar7 = (float *)(lVar42 + uVar44 * 4);
            fVar31 = pfVar7[1];
            fVar32 = pfVar7[2];
            fVar33 = pfVar7[3];
            pfVar8 = (float *)(param_4 + uVar44 * 4);
            *pfVar8 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                      (*pfVar6 + *pfVar5) * fVar11 + *pfVar7 * fVar12;
            pfVar8[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                        (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
            pfVar8[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                        (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
            pfVar8[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                        (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
            uVar44 = uVar44 + 4;
          } while (uVar44 < uVar43);
        }
        else {
          do {
            pfVar1 = (float *)(lVar45 + uVar44 * 4);
            fVar13 = pfVar1[1];
            fVar14 = pfVar1[2];
            fVar15 = pfVar1[3];
            pfVar2 = (float *)(lVar46 + uVar44 * 4);
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar3 = (float *)(lVar48 + uVar44 * 4);
            fVar19 = pfVar3[1];
            fVar20 = pfVar3[2];
            fVar21 = pfVar3[3];
            pfVar4 = (float *)(lVar47 + uVar44 * 4);
            fVar22 = pfVar4[1];
            fVar23 = pfVar4[2];
            fVar24 = pfVar4[3];
            pfVar5 = (float *)(lVar50 + uVar44 * 4);
            fVar25 = pfVar5[1];
            fVar26 = pfVar5[2];
            fVar27 = pfVar5[3];
            pfVar6 = (float *)(lVar49 + uVar44 * 4);
            fVar28 = pfVar6[1];
            fVar29 = pfVar6[2];
            fVar30 = pfVar6[3];
            pfVar7 = (float *)(lVar42 + uVar44 * 4);
            fVar31 = pfVar7[1];
            fVar32 = pfVar7[2];
            fVar33 = pfVar7[3];
            pfVar8 = (float *)(param_4 + uVar44 * 4);
            *pfVar8 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                      (*pfVar6 + *pfVar5) * fVar11 + *pfVar7 * fVar12;
            pfVar8[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                        (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
            pfVar8[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                        (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
            pfVar8[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                        (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
            uVar44 = uVar44 + 4;
          } while (uVar44 < uVar43);
        }
        goto LAB_140615b47;
      }
    }
LAB_140615c28:
    uVar43 = 0;
LAB_140615b47:
    if (param_5 <= uVar43) {
      return;
    }
    do {
      *(float *)(param_4 + uVar43 * 4) =
           (*(float *)(lVar35 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(lVar40 * param_2 + param_1 + uVar43 * 4)) * fVar9 +
           (*(float *)(lVar37 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(lVar34 * param_2 + param_1 + uVar43 * 4)) * fVar10 +
           (*(float *)(lVar38 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(param_1 + param_2 * lVar41 + uVar43 * 4)) * fVar11 +
           *(float *)(lVar39 * param_2 + param_1 + uVar43 * 4) * fVar12;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (3 < (longlong)param_5) {
    uVar44 = param_4 & 0xf;
    if (uVar44 != 0) {
      if ((param_4 & 3) != 0) goto LAB_140615c20;
      uVar44 = 0x10 - uVar44 >> 2;
    }
    if ((longlong)(uVar44 + 4) <= (longlong)param_5) {
      lVar45 = param_2 * lVar35 + param_1;
      lVar46 = param_2 * lVar40 + param_1;
      lVar47 = param_2 * lVar37 + param_1;
      lVar48 = param_2 * lVar34 + param_1;
      lVar49 = param_2 * lVar38 + param_1;
      uVar43 = param_5 - (param_5 - uVar44 & 3);
      lVar42 = param_2 * lVar39 + param_1;
      lVar50 = param_2 * lVar41 + param_1;
      if (uVar44 != 0) {
        uVar36 = 0;
        do {
          *(float *)(param_4 + uVar36 * 4) =
               (*(float *)(lVar45 + uVar36 * 4) + *(float *)(lVar46 + uVar36 * 4)) * fVar9 +
               (*(float *)(lVar47 + uVar36 * 4) + *(float *)(lVar48 + uVar36 * 4)) * fVar10 +
               (*(float *)(lVar49 + uVar36 * 4) + *(float *)(lVar50 + uVar36 * 4)) * fVar11 +
               *(float *)(lVar42 + uVar36 * 4) * fVar12;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar44);
      }
      if ((lVar42 + uVar44 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar45 + uVar44 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + uVar44 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar48 + uVar44 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar47 + uVar44 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(lVar50 + uVar44 * 4);
          fVar25 = pfVar5[1];
          fVar26 = pfVar5[2];
          fVar27 = pfVar5[3];
          pfVar6 = (float *)(lVar49 + uVar44 * 4);
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar30 = pfVar6[3];
          pfVar7 = (float *)(lVar42 + uVar44 * 4);
          fVar31 = pfVar7[1];
          fVar32 = pfVar7[2];
          fVar33 = pfVar7[3];
          pfVar8 = (float *)(param_4 + uVar44 * 4);
          *pfVar8 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar7 * fVar12;
          pfVar8[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar8[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar8[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar44 = uVar44 + 4;
        } while (uVar44 < uVar43);
      }
      else {
        do {
          pfVar1 = (float *)(lVar45 + uVar44 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + uVar44 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar48 + uVar44 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar47 + uVar44 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(lVar50 + uVar44 * 4);
          fVar25 = pfVar5[1];
          fVar26 = pfVar5[2];
          fVar27 = pfVar5[3];
          pfVar6 = (float *)(lVar49 + uVar44 * 4);
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar30 = pfVar6[3];
          pfVar7 = (float *)(lVar42 + uVar44 * 4);
          fVar31 = pfVar7[1];
          fVar32 = pfVar7[2];
          fVar33 = pfVar7[3];
          pfVar8 = (float *)(param_4 + uVar44 * 4);
          *pfVar8 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar7 * fVar12;
          pfVar8[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar8[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar8[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar44 = uVar44 + 4;
        } while (uVar44 < uVar43);
      }
      goto LAB_140615707;
    }
  }
LAB_140615c20:
  uVar43 = 0;
LAB_140615707:
  if (uVar43 < param_5) {
    do {
      *(float *)(param_4 + uVar43 * 4) =
           (*(float *)(lVar35 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(lVar40 * param_2 + param_1 + uVar43 * 4)) * fVar9 +
           (*(float *)(lVar37 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(lVar34 * param_2 + param_1 + uVar43 * 4)) * fVar10 +
           (*(float *)(lVar38 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(param_1 + param_2 * lVar41 + uVar43 * 4)) * fVar11 +
           *(float *)(lVar39 * param_2 + param_1 + uVar43 * 4) * fVar12;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
  }
  return;
}

