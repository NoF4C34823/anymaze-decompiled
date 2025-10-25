
void FUN_140736ec0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  undefined2 uVar49;
  int iVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  
  lVar51 = (longlong)param_3;
  uVar39 = 0;
  lVar48 = lVar51 + -3;
  if (SCARRY8(lVar51,-3) != lVar51 + -3 < 0) {
    lVar48 = lVar51 + 4;
  }
  lVar51 = (longlong)(int)lVar48 + 1;
  fVar9 = *param_6;
  auVar58 = ZEXT416((uint)fVar9);
  fVar10 = param_6[1];
  uVar16 = *(undefined8 *)param_6;
  uVar15 = *(undefined8 *)param_6;
  uVar14 = *(undefined8 *)param_6;
  auVar61 = ZEXT416((uint)fVar10);
  if (6 < lVar51) {
    lVar51 = 0;
  }
  fVar11 = param_6[2];
  fVar12 = param_6[3];
  uVar13 = *(undefined8 *)(param_6 + 2);
  lVar53 = (longlong)(int)lVar51 + 1;
  if (6 < lVar53) {
    lVar53 = 0;
  }
  lVar40 = (longlong)(int)lVar53 + 1;
  if (6 < lVar40) {
    lVar40 = 0;
  }
  lVar52 = (longlong)(int)lVar40 + 1;
  if (6 < lVar52) {
    lVar52 = 0;
  }
  lVar54 = (longlong)(int)lVar52 + 1;
  if (6 < lVar54) {
    lVar54 = 0;
  }
  lVar47 = (longlong)(int)lVar54 + 1;
  if (6 < lVar47) {
    lVar47 = 0;
  }
  if (0 < (longlong)param_5) {
    if (3 < (longlong)param_5) {
      uVar45 = param_2 * 7 + param_1;
      uVar46 = uVar45 & 0xf;
      if (uVar46 != 0) {
        if ((uVar45 & 3) != 0) goto LAB_140737385;
        uVar46 = 0x10 - uVar46 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar46 + 4)) {
        uVar39 = 0;
      }
      else {
        lVar42 = param_2 * lVar48 + param_1;
        lVar55 = param_2 * lVar47 + param_1;
        lVar43 = param_2 * lVar51 + param_1;
        lVar56 = param_2 * lVar53 + param_1;
        uVar39 = param_5 - (param_5 - uVar46 & 3);
        lVar41 = param_2 * lVar40 + param_1;
        lVar44 = param_2 * lVar54 + param_1;
        lVar57 = param_2 * lVar52 + param_1;
        if (uVar46 != 0) {
          uVar38 = 0;
          do {
            auVar65._8_4_ = fVar11;
            auVar65._0_8_ = uVar14;
            auVar65._12_4_ = fVar12;
            auVar64._0_4_ = *(float *)(lVar42 + uVar38 * 4) + *(float *)(lVar55 + uVar38 * 4);
            auVar64._4_4_ = *(float *)(lVar43 + uVar38 * 4) + *(float *)(lVar44 + uVar38 * 4);
            auVar58 = insertps(ZEXT416((uint)(*(float *)(lVar56 + uVar38 * 4) +
                                             *(float *)(lVar57 + uVar38 * 4))),
                               *(undefined4 *)(lVar41 + uVar38 * 4),0x10);
            auVar64._8_8_ = auVar58._0_8_;
            auVar58 = dpps(auVar65,auVar64,0xf1);
            *(int *)(uVar45 + uVar38 * 4) = auVar58._0_4_;
            uVar38 = uVar38 + 1;
          } while (uVar38 < uVar46);
        }
        if ((lVar41 + uVar46 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar42 + uVar46 * 4);
            fVar17 = pfVar1[1];
            fVar18 = pfVar1[2];
            fVar19 = pfVar1[3];
            pfVar2 = (float *)(lVar55 + uVar46 * 4);
            fVar20 = pfVar2[1];
            fVar21 = pfVar2[2];
            fVar22 = pfVar2[3];
            pfVar8 = (float *)(lVar43 + uVar46 * 4);
            fVar23 = pfVar8[1];
            fVar24 = pfVar8[2];
            fVar25 = pfVar8[3];
            pfVar3 = (float *)(lVar44 + uVar46 * 4);
            fVar26 = pfVar3[1];
            fVar27 = pfVar3[2];
            fVar28 = pfVar3[3];
            pfVar4 = (float *)(lVar57 + uVar46 * 4);
            fVar29 = pfVar4[1];
            fVar30 = pfVar4[2];
            fVar31 = pfVar4[3];
            pfVar5 = (float *)(lVar56 + uVar46 * 4);
            fVar32 = pfVar5[1];
            fVar33 = pfVar5[2];
            fVar34 = pfVar5[3];
            pfVar6 = (float *)(lVar41 + uVar46 * 4);
            fVar35 = pfVar6[1];
            fVar36 = pfVar6[2];
            fVar37 = pfVar6[3];
            pfVar7 = (float *)(uVar45 + uVar46 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar8 + *pfVar3) * fVar10 +
                      (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
            pfVar7[1] = (fVar17 + fVar20) * fVar9 + (fVar23 + fVar26) * fVar10 +
                        (fVar32 + fVar29) * fVar11 + fVar35 * fVar12;
            pfVar7[2] = (fVar18 + fVar21) * fVar9 + (fVar24 + fVar27) * fVar10 +
                        (fVar33 + fVar30) * fVar11 + fVar36 * fVar12;
            pfVar7[3] = (fVar19 + fVar22) * fVar9 + (fVar25 + fVar28) * fVar10 +
                        (fVar34 + fVar31) * fVar11 + fVar37 * fVar12;
            uVar46 = uVar46 + 4;
          } while (uVar46 < uVar39);
        }
        else {
          do {
            pfVar1 = (float *)(lVar42 + uVar46 * 4);
            fVar17 = pfVar1[1];
            fVar18 = pfVar1[2];
            fVar19 = pfVar1[3];
            pfVar2 = (float *)(lVar55 + uVar46 * 4);
            fVar20 = pfVar2[1];
            fVar21 = pfVar2[2];
            fVar22 = pfVar2[3];
            pfVar8 = (float *)(lVar43 + uVar46 * 4);
            fVar23 = pfVar8[1];
            fVar24 = pfVar8[2];
            fVar25 = pfVar8[3];
            pfVar3 = (float *)(lVar44 + uVar46 * 4);
            fVar26 = pfVar3[1];
            fVar27 = pfVar3[2];
            fVar28 = pfVar3[3];
            pfVar4 = (float *)(lVar57 + uVar46 * 4);
            fVar29 = pfVar4[1];
            fVar30 = pfVar4[2];
            fVar31 = pfVar4[3];
            pfVar5 = (float *)(lVar56 + uVar46 * 4);
            fVar32 = pfVar5[1];
            fVar33 = pfVar5[2];
            fVar34 = pfVar5[3];
            pfVar6 = (float *)(lVar41 + uVar46 * 4);
            fVar35 = pfVar6[1];
            fVar36 = pfVar6[2];
            fVar37 = pfVar6[3];
            pfVar7 = (float *)(uVar45 + uVar46 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar8 + *pfVar3) * fVar10 +
                      (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
            pfVar7[1] = (fVar17 + fVar20) * fVar9 + (fVar23 + fVar26) * fVar10 +
                        (fVar32 + fVar29) * fVar11 + fVar35 * fVar12;
            pfVar7[2] = (fVar18 + fVar21) * fVar9 + (fVar24 + fVar27) * fVar10 +
                        (fVar33 + fVar30) * fVar11 + fVar36 * fVar12;
            pfVar7[3] = (fVar19 + fVar22) * fVar9 + (fVar25 + fVar28) * fVar10 +
                        (fVar34 + fVar31) * fVar11 + fVar37 * fVar12;
            uVar46 = uVar46 + 4;
          } while (uVar46 < uVar39);
        }
      }
    }
LAB_140737385:
    auVar61 = ZEXT416((uint)fVar10);
    auVar58 = ZEXT416((uint)fVar9);
    if (uVar39 < param_5) {
      auVar58._8_8_ = uVar13;
      auVar58._0_8_ = uVar15;
      do {
        auVar68._8_4_ = (int)uVar13;
        auVar68._0_8_ = uVar16;
        auVar68._12_4_ = (int)((ulonglong)uVar13 >> 0x20);
        auVar61._0_4_ =
             *(float *)(lVar48 * param_2 + param_1 + uVar39 * 4) +
             *(float *)(lVar47 * param_2 + param_1 + uVar39 * 4);
        auVar61._4_4_ =
             *(float *)(lVar51 * param_2 + param_1 + uVar39 * 4) +
             *(float *)(lVar54 * param_2 + param_1 + uVar39 * 4);
        auVar65 = insertps(ZEXT416((uint)(*(float *)(lVar53 * param_2 + param_1 + uVar39 * 4) +
                                         *(float *)(lVar52 * param_2 + param_1 + uVar39 * 4))),
                           *(undefined4 *)(lVar40 * param_2 + param_1 + uVar39 * 4),0x10);
        auVar61._8_8_ = auVar65._0_8_;
        auVar65 = dpps(auVar68,auVar61,0xf1);
        *(int *)(param_2 * 7 + param_1 + uVar39 * 4) = auVar65._0_4_;
        uVar39 = uVar39 + 1;
      } while (uVar39 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar39 = param_4 & 0xf;
      if (uVar39 != 0) {
        if ((param_4 & 1) != 0) goto LAB_14073779c;
        uVar39 = 0x10 - uVar39 >> 1;
      }
      if ((longlong)(uVar39 + 8) <= (longlong)param_5) {
        uVar46 = 0;
        lVar48 = param_2 * 7 + param_1;
        uVar45 = param_5 - (param_5 - uVar39 & 7);
        if (uVar39 != 0) {
          do {
            iVar50 = (int)ROUND(*(float *)(lVar48 + uVar46 * 4));
            if (0x7ffe < iVar50) {
              iVar50 = 0x7fff;
            }
            uVar49 = (undefined2)iVar50;
            if (iVar50 < -0x7fff) {
              uVar49 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar46 * 2) = uVar49;
            uVar46 = uVar46 + 1;
          } while (uVar46 < uVar39);
        }
        if ((lVar48 + uVar39 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar48 + uVar39 * 4);
            auVar63._0_4_ = (int)*pfVar1;
            auVar63._4_4_ = (int)pfVar1[1];
            auVar63._8_4_ = (int)pfVar1[2];
            auVar63._12_4_ = (int)pfVar1[3];
            pfVar1 = (float *)(lVar48 + 0x10 + uVar39 * 4);
            auVar60._0_4_ = (int)*pfVar1;
            auVar60._4_4_ = (int)pfVar1[1];
            auVar60._8_4_ = (int)pfVar1[2];
            auVar60._12_4_ = (int)pfVar1[3];
            auVar58 = packssdw(auVar63,auVar60);
            *(undefined1 (*) [16])(param_4 + uVar39 * 2) = auVar58;
            uVar39 = uVar39 + 8;
          } while (uVar39 < uVar45);
        }
        else {
          do {
            auVar58 = lddqu(auVar58,*(undefined1 (*) [16])(lVar48 + uVar39 * 4));
            auVar61 = lddqu(auVar61,*(undefined1 (*) [16])(lVar48 + 0x10 + uVar39 * 4));
            auVar70._0_4_ = (int)auVar58._0_4_;
            auVar70._4_4_ = (int)auVar58._4_4_;
            auVar70._8_4_ = (int)auVar58._8_4_;
            auVar70._12_4_ = (int)auVar58._12_4_;
            auVar67._0_4_ = (int)auVar61._0_4_;
            auVar67._4_4_ = (int)auVar61._4_4_;
            auVar67._8_4_ = (int)auVar61._8_4_;
            auVar67._12_4_ = (int)auVar61._12_4_;
            auVar65 = packssdw(auVar70,auVar67);
            *(undefined1 (*) [16])(param_4 + uVar39 * 2) = auVar65;
            uVar39 = uVar39 + 8;
          } while (uVar39 < uVar45);
        }
        goto LAB_1407376ff;
      }
    }
LAB_14073779c:
    uVar45 = 0;
LAB_1407376ff:
    if (param_5 <= uVar45) {
      return;
    }
    do {
      iVar50 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar45 * 4));
      if (0x7ffe < iVar50) {
        iVar50 = 0x7fff;
      }
      uVar49 = (undefined2)iVar50;
      if (iVar50 < -0x7fff) {
        uVar49 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar45 * 2) = uVar49;
      uVar45 = uVar45 + 1;
    } while (uVar45 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar39 = param_4 & 0xf;
    if (uVar39 != 0) {
      if ((param_4 & 1) != 0) goto LAB_140737795;
      uVar39 = 0x10 - uVar39 >> 1;
    }
    if ((longlong)(uVar39 + 8) <= (longlong)param_5) {
      uVar46 = 0;
      lVar48 = param_2 * 7 + param_1;
      uVar45 = param_5 - (param_5 - uVar39 & 7);
      if (uVar39 != 0) {
        do {
          iVar50 = (int)ROUND(*(float *)(lVar48 + uVar46 * 4));
          if (0x7ffe < iVar50) {
            iVar50 = 0x7fff;
          }
          uVar49 = (undefined2)iVar50;
          if (iVar50 < -0x7fff) {
            uVar49 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar46 * 2) = uVar49;
          uVar46 = uVar46 + 1;
        } while (uVar46 < uVar39);
      }
      if ((lVar48 + uVar39 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar48 + uVar39 * 4);
          auVar62._0_4_ = (int)*pfVar1;
          auVar62._4_4_ = (int)pfVar1[1];
          auVar62._8_4_ = (int)pfVar1[2];
          auVar62._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(lVar48 + 0x10 + uVar39 * 4);
          auVar59._0_4_ = (int)*pfVar1;
          auVar59._4_4_ = (int)pfVar1[1];
          auVar59._8_4_ = (int)pfVar1[2];
          auVar59._12_4_ = (int)pfVar1[3];
          auVar58 = packssdw(auVar62,auVar59);
          *(undefined1 (*) [16])(param_4 + uVar39 * 2) = auVar58;
          uVar39 = uVar39 + 8;
        } while (uVar39 < uVar45);
      }
      else {
        do {
          auVar58 = lddqu(auVar58,*(undefined1 (*) [16])(lVar48 + uVar39 * 4));
          auVar61 = lddqu(auVar61,*(undefined1 (*) [16])(lVar48 + 0x10 + uVar39 * 4));
          auVar69._0_4_ = (int)auVar58._0_4_;
          auVar69._4_4_ = (int)auVar58._4_4_;
          auVar69._8_4_ = (int)auVar58._8_4_;
          auVar69._12_4_ = (int)auVar58._12_4_;
          auVar66._0_4_ = (int)auVar61._0_4_;
          auVar66._4_4_ = (int)auVar61._4_4_;
          auVar66._8_4_ = (int)auVar61._8_4_;
          auVar66._12_4_ = (int)auVar61._12_4_;
          auVar65 = packssdw(auVar69,auVar66);
          *(undefined1 (*) [16])(param_4 + uVar39 * 2) = auVar65;
          uVar39 = uVar39 + 8;
        } while (uVar39 < uVar45);
      }
      goto LAB_14073755f;
    }
  }
LAB_140737795:
  uVar45 = 0;
LAB_14073755f:
  if (uVar45 < param_5) {
    do {
      iVar50 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar45 * 4));
      if (0x7ffe < iVar50) {
        iVar50 = 0x7fff;
      }
      uVar49 = (undefined2)iVar50;
      if (iVar50 < -0x7fff) {
        uVar49 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar45 * 2) = uVar49;
      uVar45 = uVar45 + 1;
    } while (uVar45 < param_5);
  }
  return;
}

