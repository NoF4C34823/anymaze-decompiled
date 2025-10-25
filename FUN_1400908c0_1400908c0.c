
void FUN_1400908c0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,undefined1 (*param_6) [12],undefined8 param_7,int param_8)

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
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  lVar46 = (longlong)param_3;
  lVar47 = lVar46 + -3;
  if (SCARRY8(lVar46,-3) != lVar46 + -3 < 0) {
    lVar47 = lVar46 + 4;
  }
  lVar42 = 0;
  fVar9 = *(float *)*param_6;
  lVar46 = (longlong)(int)lVar47 + 1;
  fVar10 = *(float *)(*param_6 + 4);
  fVar11 = *(float *)(*param_6 + 8);
  auVar17 = *param_6;
  auVar16 = *param_6;
  auVar15 = *param_6;
  auVar14 = *param_6;
  if (6 < lVar46) {
    lVar46 = lVar42;
  }
  fVar12 = *(float *)param_6[1];
  lVar43 = (longlong)(int)lVar46 + 1;
  if (6 < lVar43) {
    lVar43 = lVar42;
  }
  lVar41 = (longlong)(int)lVar43 + 1;
  if (6 < lVar41) {
    lVar41 = lVar42;
  }
  lVar48 = (longlong)(int)lVar41 + 1;
  if (6 < lVar48) {
    lVar48 = lVar42;
  }
  lVar44 = (longlong)(int)lVar48 + 1;
  if (6 < lVar44) {
    lVar44 = lVar42;
  }
  lVar45 = (longlong)(int)lVar44 + 1;
  if (6 < lVar45) {
    lVar45 = lVar42;
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar49 = param_4 & 0xf;
      if (uVar49 != 0) {
        if ((param_4 & 3) != 0) goto LAB_140091226;
        uVar49 = 0x10 - uVar49 >> 2;
      }
      if ((longlong)(uVar49 + 4) <= (longlong)param_5) {
        lVar50 = param_2 * lVar47 + param_1;
        uVar39 = param_5 - (param_5 - uVar49 & 3);
        lVar51 = param_2 * lVar45 + param_1;
        lVar42 = param_2 * lVar41 + param_1;
        lVar52 = param_2 * lVar46 + param_1;
        lVar53 = param_2 * lVar44 + param_1;
        lVar54 = param_2 * lVar43 + param_1;
        lVar55 = param_2 * lVar48 + param_1;
        if (uVar49 != 0) {
          uVar40 = 0;
          do {
            auVar59._0_4_ = *(float *)(lVar50 + uVar40 * 4) + *(float *)(lVar51 + uVar40 * 4);
            auVar59._4_4_ = *(float *)(lVar52 + uVar40 * 4) + *(float *)(lVar53 + uVar40 * 4);
            auVar58._12_4_ = fVar12;
            auVar58._0_12_ = auVar16;
            auVar57 = insertps(ZEXT416((uint)(*(float *)(lVar54 + uVar40 * 4) +
                                             *(float *)(lVar55 + uVar40 * 4))),
                               *(undefined4 *)(lVar42 + uVar40 * 4),0x10);
            auVar59._8_8_ = auVar57._0_8_;
            auVar58 = dpps(auVar58,auVar59,0xf1);
            *(int *)(param_4 + uVar40 * 4) = auVar58._0_4_;
            uVar40 = uVar40 + 1;
          } while (uVar40 < uVar49);
        }
        if ((lVar42 + uVar49 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar50 + uVar49 * 4);
            fVar18 = pfVar1[1];
            fVar19 = pfVar1[2];
            fVar20 = pfVar1[3];
            pfVar8 = (float *)(lVar51 + uVar49 * 4);
            fVar21 = pfVar8[1];
            fVar22 = pfVar8[2];
            fVar23 = pfVar8[3];
            pfVar2 = (float *)(lVar52 + uVar49 * 4);
            fVar24 = pfVar2[1];
            fVar25 = pfVar2[2];
            fVar26 = pfVar2[3];
            pfVar3 = (float *)(lVar53 + uVar49 * 4);
            fVar27 = pfVar3[1];
            fVar28 = pfVar3[2];
            fVar29 = pfVar3[3];
            pfVar4 = (float *)(lVar55 + uVar49 * 4);
            fVar30 = pfVar4[1];
            fVar31 = pfVar4[2];
            fVar32 = pfVar4[3];
            pfVar5 = (float *)(lVar54 + uVar49 * 4);
            fVar33 = pfVar5[1];
            fVar34 = pfVar5[2];
            fVar35 = pfVar5[3];
            pfVar6 = (float *)(lVar42 + uVar49 * 4);
            fVar36 = pfVar6[1];
            fVar37 = pfVar6[2];
            fVar38 = pfVar6[3];
            pfVar7 = (float *)(param_4 + uVar49 * 4);
            *pfVar7 = (*pfVar1 + *pfVar8) * fVar9 + (*pfVar2 + *pfVar3) * fVar10 +
                      (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
            pfVar7[1] = (fVar18 + fVar21) * fVar9 + (fVar24 + fVar27) * fVar10 +
                        (fVar33 + fVar30) * fVar11 + fVar36 * fVar12;
            pfVar7[2] = (fVar19 + fVar22) * fVar9 + (fVar25 + fVar28) * fVar10 +
                        (fVar34 + fVar31) * fVar11 + fVar37 * fVar12;
            pfVar7[3] = (fVar20 + fVar23) * fVar9 + (fVar26 + fVar29) * fVar10 +
                        (fVar35 + fVar32) * fVar11 + fVar38 * fVar12;
            uVar49 = uVar49 + 4;
          } while (uVar49 < uVar39);
        }
        else {
          do {
            pfVar1 = (float *)(lVar50 + uVar49 * 4);
            fVar18 = pfVar1[1];
            fVar19 = pfVar1[2];
            fVar20 = pfVar1[3];
            pfVar8 = (float *)(lVar51 + uVar49 * 4);
            fVar21 = pfVar8[1];
            fVar22 = pfVar8[2];
            fVar23 = pfVar8[3];
            pfVar2 = (float *)(lVar52 + uVar49 * 4);
            fVar24 = pfVar2[1];
            fVar25 = pfVar2[2];
            fVar26 = pfVar2[3];
            pfVar3 = (float *)(lVar53 + uVar49 * 4);
            fVar27 = pfVar3[1];
            fVar28 = pfVar3[2];
            fVar29 = pfVar3[3];
            pfVar4 = (float *)(lVar55 + uVar49 * 4);
            fVar30 = pfVar4[1];
            fVar31 = pfVar4[2];
            fVar32 = pfVar4[3];
            pfVar5 = (float *)(lVar54 + uVar49 * 4);
            fVar33 = pfVar5[1];
            fVar34 = pfVar5[2];
            fVar35 = pfVar5[3];
            pfVar6 = (float *)(lVar42 + uVar49 * 4);
            fVar36 = pfVar6[1];
            fVar37 = pfVar6[2];
            fVar38 = pfVar6[3];
            pfVar7 = (float *)(param_4 + uVar49 * 4);
            *pfVar7 = (*pfVar1 + *pfVar8) * fVar9 + (*pfVar2 + *pfVar3) * fVar10 +
                      (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
            pfVar7[1] = (fVar18 + fVar21) * fVar9 + (fVar24 + fVar27) * fVar10 +
                        (fVar33 + fVar30) * fVar11 + fVar36 * fVar12;
            pfVar7[2] = (fVar19 + fVar22) * fVar9 + (fVar25 + fVar28) * fVar10 +
                        (fVar34 + fVar31) * fVar11 + fVar37 * fVar12;
            pfVar7[3] = (fVar20 + fVar23) * fVar9 + (fVar26 + fVar29) * fVar10 +
                        (fVar35 + fVar32) * fVar11 + fVar38 * fVar12;
            uVar49 = uVar49 + 4;
          } while (uVar49 < uVar39);
        }
        goto LAB_140091158;
      }
    }
LAB_140091226:
    uVar39 = 0;
LAB_140091158:
    if (param_5 <= uVar39) {
      return;
    }
    do {
      auVar62._12_4_ = fVar12;
      auVar62._0_12_ = auVar17;
      auVar57._0_4_ =
           *(float *)(lVar47 * param_2 + param_1 + uVar39 * 4) +
           *(float *)(lVar45 * param_2 + param_1 + uVar39 * 4);
      auVar57._4_4_ =
           *(float *)(lVar46 * param_2 + param_1 + uVar39 * 4) +
           *(float *)(lVar44 * param_2 + param_1 + uVar39 * 4);
      auVar58 = insertps(ZEXT416((uint)(*(float *)(lVar43 * param_2 + param_1 + uVar39 * 4) +
                                       *(float *)(param_1 + param_2 * lVar48 + uVar39 * 4))),
                         *(undefined4 *)(lVar41 * param_2 + param_1 + uVar39 * 4),0x10);
      auVar57._8_8_ = auVar58._0_8_;
      auVar58 = dpps(auVar62,auVar57,0xf1);
      *(int *)(param_4 + uVar39 * 4) = auVar58._0_4_;
      uVar39 = uVar39 + 1;
    } while (uVar39 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (3 < (longlong)param_5) {
    uVar49 = param_4 & 0xf;
    if (uVar49 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14009121f;
      uVar49 = 0x10 - uVar49 >> 2;
    }
    if ((longlong)(uVar49 + 4) <= (longlong)param_5) {
      lVar50 = param_2 * lVar47 + param_1;
      uVar39 = param_5 - (param_5 - uVar49 & 3);
      lVar51 = param_2 * lVar45 + param_1;
      lVar42 = param_2 * lVar41 + param_1;
      lVar52 = param_2 * lVar46 + param_1;
      lVar53 = param_2 * lVar44 + param_1;
      lVar54 = param_2 * lVar43 + param_1;
      lVar55 = param_2 * lVar48 + param_1;
      if (uVar49 != 0) {
        uVar40 = 0;
        do {
          auVar60._12_4_ = fVar12;
          auVar60._0_12_ = auVar14;
          auVar58 = insertps(ZEXT416((uint)(*(float *)(lVar54 + uVar40 * 4) +
                                           *(float *)(lVar55 + uVar40 * 4))),
                             *(undefined4 *)(lVar42 + uVar40 * 4),0x10);
          auVar13._4_4_ = *(float *)(lVar52 + uVar40 * 4) + *(float *)(lVar53 + uVar40 * 4);
          auVar13._0_4_ = *(float *)(lVar50 + uVar40 * 4) + *(float *)(lVar51 + uVar40 * 4);
          auVar13._8_4_ = auVar58._0_4_;
          auVar13._12_4_ = auVar58._4_4_;
          auVar58 = dpps(auVar60,auVar13,0xf1);
          *(int *)(param_4 + uVar40 * 4) = auVar58._0_4_;
          uVar40 = uVar40 + 1;
        } while (uVar40 < uVar49);
      }
      if ((lVar42 + uVar49 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar50 + uVar49 * 4);
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar8 = (float *)(lVar51 + uVar49 * 4);
          fVar21 = pfVar8[1];
          fVar22 = pfVar8[2];
          fVar23 = pfVar8[3];
          pfVar2 = (float *)(lVar52 + uVar49 * 4);
          fVar24 = pfVar2[1];
          fVar25 = pfVar2[2];
          fVar26 = pfVar2[3];
          pfVar3 = (float *)(lVar53 + uVar49 * 4);
          fVar27 = pfVar3[1];
          fVar28 = pfVar3[2];
          fVar29 = pfVar3[3];
          pfVar4 = (float *)(lVar55 + uVar49 * 4);
          fVar30 = pfVar4[1];
          fVar31 = pfVar4[2];
          fVar32 = pfVar4[3];
          pfVar5 = (float *)(lVar54 + uVar49 * 4);
          fVar33 = pfVar5[1];
          fVar34 = pfVar5[2];
          fVar35 = pfVar5[3];
          pfVar6 = (float *)(lVar42 + uVar49 * 4);
          fVar36 = pfVar6[1];
          fVar37 = pfVar6[2];
          fVar38 = pfVar6[3];
          pfVar7 = (float *)(param_4 + uVar49 * 4);
          *pfVar7 = (*pfVar1 + *pfVar8) * fVar9 + (*pfVar2 + *pfVar3) * fVar10 +
                    (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
          pfVar7[1] = (fVar18 + fVar21) * fVar9 + (fVar24 + fVar27) * fVar10 +
                      (fVar33 + fVar30) * fVar11 + fVar36 * fVar12;
          pfVar7[2] = (fVar19 + fVar22) * fVar9 + (fVar25 + fVar28) * fVar10 +
                      (fVar34 + fVar31) * fVar11 + fVar37 * fVar12;
          pfVar7[3] = (fVar20 + fVar23) * fVar9 + (fVar26 + fVar29) * fVar10 +
                      (fVar35 + fVar32) * fVar11 + fVar38 * fVar12;
          uVar49 = uVar49 + 4;
        } while (uVar49 < uVar39);
      }
      else {
        do {
          pfVar1 = (float *)(lVar50 + uVar49 * 4);
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar8 = (float *)(lVar51 + uVar49 * 4);
          fVar21 = pfVar8[1];
          fVar22 = pfVar8[2];
          fVar23 = pfVar8[3];
          pfVar2 = (float *)(lVar52 + uVar49 * 4);
          fVar24 = pfVar2[1];
          fVar25 = pfVar2[2];
          fVar26 = pfVar2[3];
          pfVar3 = (float *)(lVar53 + uVar49 * 4);
          fVar27 = pfVar3[1];
          fVar28 = pfVar3[2];
          fVar29 = pfVar3[3];
          pfVar4 = (float *)(lVar55 + uVar49 * 4);
          fVar30 = pfVar4[1];
          fVar31 = pfVar4[2];
          fVar32 = pfVar4[3];
          pfVar5 = (float *)(lVar54 + uVar49 * 4);
          fVar33 = pfVar5[1];
          fVar34 = pfVar5[2];
          fVar35 = pfVar5[3];
          pfVar6 = (float *)(lVar42 + uVar49 * 4);
          fVar36 = pfVar6[1];
          fVar37 = pfVar6[2];
          fVar38 = pfVar6[3];
          pfVar7 = (float *)(param_4 + uVar49 * 4);
          *pfVar7 = (*pfVar1 + *pfVar8) * fVar9 + (*pfVar2 + *pfVar3) * fVar10 +
                    (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
          pfVar7[1] = (fVar18 + fVar21) * fVar9 + (fVar24 + fVar27) * fVar10 +
                      (fVar33 + fVar30) * fVar11 + fVar36 * fVar12;
          pfVar7[2] = (fVar19 + fVar22) * fVar9 + (fVar25 + fVar28) * fVar10 +
                      (fVar34 + fVar31) * fVar11 + fVar37 * fVar12;
          pfVar7[3] = (fVar20 + fVar23) * fVar9 + (fVar26 + fVar29) * fVar10 +
                      (fVar35 + fVar32) * fVar11 + fVar38 * fVar12;
          uVar49 = uVar49 + 4;
        } while (uVar49 < uVar39);
      }
      goto LAB_140090d39;
    }
  }
LAB_14009121f:
  uVar39 = 0;
LAB_140090d39:
  if (uVar39 < param_5) {
    do {
      auVar61._12_4_ = fVar12;
      auVar61._0_12_ = auVar15;
      auVar56._0_4_ =
           *(float *)(lVar47 * param_2 + param_1 + uVar39 * 4) +
           *(float *)(lVar45 * param_2 + param_1 + uVar39 * 4);
      auVar56._4_4_ =
           *(float *)(lVar46 * param_2 + param_1 + uVar39 * 4) +
           *(float *)(lVar44 * param_2 + param_1 + uVar39 * 4);
      auVar58 = insertps(ZEXT416((uint)(*(float *)(lVar43 * param_2 + param_1 + uVar39 * 4) +
                                       *(float *)(param_1 + param_2 * lVar48 + uVar39 * 4))),
                         *(undefined4 *)(lVar41 * param_2 + param_1 + uVar39 * 4),0x10);
      auVar56._8_8_ = auVar58._0_8_;
      auVar58 = dpps(auVar61,auVar56,0xf1);
      *(int *)(param_4 + uVar39 * 4) = auVar58._0_4_;
      uVar39 = uVar39 + 1;
    } while (uVar39 < param_5);
  }
  return;
}

