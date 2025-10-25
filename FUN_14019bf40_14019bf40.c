
void FUN_14019bf40(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  
  lVar41 = (longlong)param_3;
  uVar43 = 0;
  lVar42 = lVar41 + -3;
  if (SCARRY8(lVar41,-3) != lVar41 + -3 < 0) {
    lVar42 = lVar41 + 4;
  }
  uVar35 = (longlong)(int)lVar42 + 1;
  fVar9 = *param_6;
  if (6 < (longlong)uVar35) {
    uVar35 = uVar43;
  }
  uVar37 = (longlong)(int)uVar35 + 1;
  fVar10 = param_6[1];
  if (6 < (longlong)uVar37) {
    uVar37 = uVar43;
  }
  uVar38 = (longlong)(int)uVar37 + 1;
  fVar11 = param_6[2];
  if (6 < (longlong)uVar38) {
    uVar38 = uVar43;
  }
  uVar40 = (longlong)(int)uVar38 + 1;
  fVar12 = param_6[3];
  if (6 < (longlong)uVar40) {
    uVar40 = uVar43;
  }
  uVar34 = (longlong)(int)uVar40 + 1;
  if (6 < (longlong)uVar34) {
    uVar34 = uVar43;
  }
  uVar36 = (longlong)(int)uVar34 + 1;
  if (6 < (longlong)uVar36) {
    uVar36 = uVar43;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar45 = param_4 & 0xf;
      if (uVar45 != 0) {
        if ((param_4 & 3) != 0) goto LAB_14019c800;
        uVar45 = 0x10 - uVar45 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar45 + 4)) {
        uVar43 = 0;
      }
      else {
        lVar47 = param_2 * uVar36 + param_1;
        lVar41 = param_2 * lVar42 + param_1;
        lVar48 = param_2 * uVar34 + param_1;
        lVar49 = param_2 * uVar37 + param_1;
        lVar46 = param_2 * uVar38 + param_1;
        lVar44 = param_2 * uVar35 + param_1;
        lVar50 = param_2 * uVar40 + param_1;
        uVar43 = param_5 - (param_5 - uVar45 & 3);
        if (uVar45 != 0) {
          uVar39 = 0;
          do {
            *(float *)(param_4 + uVar39 * 4) =
                 (*(float *)(lVar41 + uVar39 * 4) + *(float *)(lVar47 + uVar39 * 4)) * fVar9 +
                 (*(float *)(lVar44 + uVar39 * 4) + *(float *)(lVar48 + uVar39 * 4)) * fVar10 +
                 (*(float *)(lVar49 + uVar39 * 4) + *(float *)(lVar50 + uVar39 * 4)) * fVar11 +
                 *(float *)(lVar46 + uVar39 * 4) * fVar12;
            uVar39 = uVar39 + 1;
          } while (uVar39 < uVar45);
        }
        if ((uVar45 * 4 + lVar46 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar41 + uVar45 * 4);
            fVar13 = pfVar1[1];
            fVar14 = pfVar1[2];
            fVar15 = pfVar1[3];
            pfVar2 = (float *)(lVar47 + uVar45 * 4);
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar3 = (float *)(lVar48 + uVar45 * 4);
            fVar19 = pfVar3[1];
            fVar20 = pfVar3[2];
            fVar21 = pfVar3[3];
            pfVar4 = (float *)(lVar44 + uVar45 * 4);
            fVar22 = pfVar4[1];
            fVar23 = pfVar4[2];
            fVar24 = pfVar4[3];
            pfVar5 = (float *)(lVar50 + uVar45 * 4);
            fVar25 = pfVar5[1];
            fVar26 = pfVar5[2];
            fVar27 = pfVar5[3];
            pfVar6 = (float *)(lVar49 + uVar45 * 4);
            fVar28 = pfVar6[1];
            fVar29 = pfVar6[2];
            fVar30 = pfVar6[3];
            pfVar8 = (float *)(lVar46 + uVar45 * 4);
            fVar31 = pfVar8[1];
            fVar32 = pfVar8[2];
            fVar33 = pfVar8[3];
            pfVar7 = (float *)(param_4 + uVar45 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                      (*pfVar6 + *pfVar5) * fVar11 + *pfVar8 * fVar12;
            pfVar7[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                        (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
            pfVar7[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                        (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
            pfVar7[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                        (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
            uVar45 = uVar45 + 4;
          } while (uVar45 < uVar43);
        }
        else {
          do {
            pfVar1 = (float *)(lVar41 + uVar45 * 4);
            fVar13 = pfVar1[1];
            fVar14 = pfVar1[2];
            fVar15 = pfVar1[3];
            pfVar2 = (float *)(lVar47 + uVar45 * 4);
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar3 = (float *)(lVar48 + uVar45 * 4);
            fVar19 = pfVar3[1];
            fVar20 = pfVar3[2];
            fVar21 = pfVar3[3];
            pfVar4 = (float *)(lVar44 + uVar45 * 4);
            fVar22 = pfVar4[1];
            fVar23 = pfVar4[2];
            fVar24 = pfVar4[3];
            pfVar5 = (float *)(lVar50 + uVar45 * 4);
            fVar25 = pfVar5[1];
            fVar26 = pfVar5[2];
            fVar27 = pfVar5[3];
            pfVar6 = (float *)(lVar49 + uVar45 * 4);
            fVar28 = pfVar6[1];
            fVar29 = pfVar6[2];
            fVar30 = pfVar6[3];
            pfVar8 = (float *)(lVar46 + uVar45 * 4);
            fVar31 = pfVar8[1];
            fVar32 = pfVar8[2];
            fVar33 = pfVar8[3];
            pfVar7 = (float *)(param_4 + uVar45 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                      (*pfVar6 + *pfVar5) * fVar11 + *pfVar8 * fVar12;
            pfVar7[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                        (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
            pfVar7[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                        (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
            pfVar7[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                        (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
            uVar45 = uVar45 + 4;
          } while (uVar45 < uVar43);
        }
      }
    }
LAB_14019c800:
    if (param_5 <= uVar43) {
      return;
    }
    do {
      *(float *)(param_4 + uVar43 * 4) =
           (*(float *)(lVar42 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(uVar36 * param_2 + param_1 + uVar43 * 4)) * fVar9 +
           (*(float *)(uVar35 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(uVar34 * param_2 + param_1 + uVar43 * 4)) * fVar10 +
           (*(float *)(uVar37 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(param_1 + param_2 * uVar40 + uVar43 * 4)) * fVar11 +
           *(float *)(uVar38 * param_2 + param_1 + uVar43 * 4) * fVar12;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (3 < (longlong)param_5) {
    uVar45 = param_4 & 0xf;
    if (uVar45 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14019c3a0;
      uVar45 = 0x10 - uVar45 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar45 + 4)) {
      uVar43 = 0;
    }
    else {
      lVar46 = param_2 * uVar36 + param_1;
      lVar47 = param_2 * uVar35 + param_1;
      lVar44 = param_2 * uVar38 + param_1;
      lVar48 = param_2 * uVar34 + param_1;
      lVar41 = param_2 * lVar42 + param_1;
      lVar49 = param_2 * uVar37 + param_1;
      lVar50 = param_2 * uVar40 + param_1;
      uVar43 = param_5 - (param_5 - uVar45 & 3);
      if (uVar45 != 0) {
        uVar39 = 0;
        do {
          *(float *)(param_4 + uVar39 * 4) =
               (*(float *)(lVar41 + uVar39 * 4) + *(float *)(lVar46 + uVar39 * 4)) * fVar9 +
               (*(float *)(lVar47 + uVar39 * 4) + *(float *)(lVar48 + uVar39 * 4)) * fVar10 +
               (*(float *)(lVar49 + uVar39 * 4) + *(float *)(lVar50 + uVar39 * 4)) * fVar11 +
               *(float *)(lVar44 + uVar39 * 4) * fVar12;
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar45);
      }
      if ((uVar45 * 4 + lVar44 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar41 + uVar45 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + uVar45 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar48 + uVar45 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar47 + uVar45 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(lVar50 + uVar45 * 4);
          fVar25 = pfVar5[1];
          fVar26 = pfVar5[2];
          fVar27 = pfVar5[3];
          pfVar6 = (float *)(lVar49 + uVar45 * 4);
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar30 = pfVar6[3];
          pfVar8 = (float *)(lVar44 + uVar45 * 4);
          fVar31 = pfVar8[1];
          fVar32 = pfVar8[2];
          fVar33 = pfVar8[3];
          pfVar7 = (float *)(param_4 + uVar45 * 4);
          *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar8 * fVar12;
          pfVar7[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar7[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar7[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar45 = uVar45 + 4;
        } while (uVar45 < uVar43);
      }
      else {
        do {
          pfVar1 = (float *)(lVar41 + uVar45 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + uVar45 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar48 + uVar45 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar47 + uVar45 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(lVar50 + uVar45 * 4);
          fVar25 = pfVar5[1];
          fVar26 = pfVar5[2];
          fVar27 = pfVar5[3];
          pfVar6 = (float *)(lVar49 + uVar45 * 4);
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar30 = pfVar6[3];
          pfVar8 = (float *)(lVar44 + uVar45 * 4);
          fVar31 = pfVar8[1];
          fVar32 = pfVar8[2];
          fVar33 = pfVar8[3];
          pfVar7 = (float *)(param_4 + uVar45 * 4);
          *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar8 * fVar12;
          pfVar7[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar7[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar7[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar45 = uVar45 + 4;
        } while (uVar45 < uVar43);
      }
    }
  }
LAB_14019c3a0:
  if (uVar43 < param_5) {
    do {
      *(float *)(param_4 + uVar43 * 4) =
           (*(float *)(lVar42 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(uVar36 * param_2 + param_1 + uVar43 * 4)) * fVar9 +
           (*(float *)(uVar35 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(uVar34 * param_2 + param_1 + uVar43 * 4)) * fVar10 +
           (*(float *)(uVar37 * param_2 + param_1 + uVar43 * 4) +
           *(float *)(param_1 + param_2 * uVar40 + uVar43 * 4)) * fVar11 +
           *(float *)(uVar38 * param_2 + param_1 + uVar43 * 4) * fVar12;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
  }
  return;
}

