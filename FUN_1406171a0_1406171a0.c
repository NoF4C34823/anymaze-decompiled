
void FUN_1406171a0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

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
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 auVar21 [16];
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  undefined1 uVar51;
  int iVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  
  lVar43 = 0;
  lVar54 = (longlong)param_3;
  fVar9 = *param_6;
  fVar10 = param_6[1];
  fVar11 = param_6[2];
  fVar12 = param_6[3];
  lVar58 = lVar54 + 4;
  if (SCARRY8(lVar54,-3) == lVar54 + -3 < 0) {
    lVar58 = lVar54 + -3;
  }
  lVar54 = (longlong)(int)lVar58 + 1;
  if (6 < lVar54) {
    lVar54 = lVar43;
  }
  lVar55 = (longlong)(int)lVar54 + 1;
  if (6 < lVar55) {
    lVar55 = lVar43;
  }
  lVar50 = (longlong)(int)lVar55 + 1;
  if (6 < lVar50) {
    lVar50 = lVar43;
  }
  lVar56 = (longlong)(int)lVar50 + 1;
  if (6 < lVar56) {
    lVar56 = lVar43;
  }
  lVar57 = (longlong)(int)lVar56 + 1;
  if (6 < lVar57) {
    lVar57 = lVar43;
  }
  lVar53 = (longlong)(int)lVar57 + 1;
  if (6 < lVar53) {
    lVar53 = lVar43;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 4) {
LAB_140617963:
      uVar45 = 0;
    }
    else {
      uVar48 = param_2 * 7 + param_1;
      uVar49 = uVar48 & 0xf;
      if (uVar49 != 0) {
        if ((uVar48 & 3) != 0) goto LAB_140617963;
        uVar49 = 0x10 - uVar49 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar49 + 4)) goto LAB_140617963;
      lVar59 = param_2 * lVar53 + param_1;
      lVar43 = param_2 * lVar58 + param_1;
      lVar60 = param_2 * lVar57 + param_1;
      lVar61 = param_2 * lVar55 + param_1;
      lVar47 = param_2 * lVar50 + param_1;
      lVar44 = param_2 * lVar54 + param_1;
      lVar62 = param_2 * lVar56 + param_1;
      uVar45 = param_5 - (param_5 - uVar49 & 3);
      if (uVar49 != 0) {
        uVar46 = 0;
        do {
          *(float *)(uVar48 + uVar46 * 4) =
               (*(float *)(lVar43 + uVar46 * 4) + *(float *)(lVar59 + uVar46 * 4)) * fVar9 +
               (*(float *)(lVar44 + uVar46 * 4) + *(float *)(lVar60 + uVar46 * 4)) * fVar10 +
               (*(float *)(lVar61 + uVar46 * 4) + *(float *)(lVar62 + uVar46 * 4)) * fVar11 +
               *(float *)(lVar47 + uVar46 * 4) * fVar12;
          uVar46 = uVar46 + 1;
        } while (uVar46 < uVar49);
      }
      if ((lVar47 + uVar49 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar43 + uVar49 * 4);
          fVar22 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar24 = pfVar1[3];
          pfVar7 = (float *)(lVar59 + uVar49 * 4);
          fVar25 = pfVar7[1];
          fVar26 = pfVar7[2];
          fVar27 = pfVar7[3];
          pfVar2 = (float *)(lVar60 + uVar49 * 4);
          fVar28 = pfVar2[1];
          fVar29 = pfVar2[2];
          fVar30 = pfVar2[3];
          pfVar3 = (float *)(lVar44 + uVar49 * 4);
          fVar31 = pfVar3[1];
          fVar32 = pfVar3[2];
          fVar33 = pfVar3[3];
          pfVar8 = (float *)(lVar62 + uVar49 * 4);
          fVar34 = pfVar8[1];
          fVar35 = pfVar8[2];
          fVar36 = pfVar8[3];
          pfVar4 = (float *)(lVar61 + uVar49 * 4);
          fVar37 = pfVar4[1];
          fVar38 = pfVar4[2];
          fVar39 = pfVar4[3];
          pfVar5 = (float *)(lVar47 + uVar49 * 4);
          fVar40 = pfVar5[1];
          fVar41 = pfVar5[2];
          fVar42 = pfVar5[3];
          pfVar6 = (float *)(uVar48 + uVar49 * 4);
          *pfVar6 = (*pfVar1 + *pfVar7) * fVar9 + (*pfVar3 + *pfVar2) * fVar10 +
                    (*pfVar4 + *pfVar8) * fVar11 + *pfVar5 * fVar12;
          pfVar6[1] = (fVar22 + fVar25) * fVar9 + (fVar31 + fVar28) * fVar10 +
                      (fVar37 + fVar34) * fVar11 + fVar40 * fVar12;
          pfVar6[2] = (fVar23 + fVar26) * fVar9 + (fVar32 + fVar29) * fVar10 +
                      (fVar38 + fVar35) * fVar11 + fVar41 * fVar12;
          pfVar6[3] = (fVar24 + fVar27) * fVar9 + (fVar33 + fVar30) * fVar10 +
                      (fVar39 + fVar36) * fVar11 + fVar42 * fVar12;
          uVar49 = uVar49 + 4;
        } while (uVar49 < uVar45);
      }
      else {
        do {
          pfVar1 = (float *)(lVar43 + uVar49 * 4);
          fVar22 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar24 = pfVar1[3];
          pfVar7 = (float *)(lVar59 + uVar49 * 4);
          fVar25 = pfVar7[1];
          fVar26 = pfVar7[2];
          fVar27 = pfVar7[3];
          pfVar2 = (float *)(lVar60 + uVar49 * 4);
          fVar28 = pfVar2[1];
          fVar29 = pfVar2[2];
          fVar30 = pfVar2[3];
          pfVar3 = (float *)(lVar44 + uVar49 * 4);
          fVar31 = pfVar3[1];
          fVar32 = pfVar3[2];
          fVar33 = pfVar3[3];
          pfVar8 = (float *)(lVar62 + uVar49 * 4);
          fVar34 = pfVar8[1];
          fVar35 = pfVar8[2];
          fVar36 = pfVar8[3];
          pfVar4 = (float *)(lVar61 + uVar49 * 4);
          fVar37 = pfVar4[1];
          fVar38 = pfVar4[2];
          fVar39 = pfVar4[3];
          pfVar5 = (float *)(lVar47 + uVar49 * 4);
          fVar40 = pfVar5[1];
          fVar41 = pfVar5[2];
          fVar42 = pfVar5[3];
          pfVar6 = (float *)(uVar48 + uVar49 * 4);
          *pfVar6 = (*pfVar1 + *pfVar7) * fVar9 + (*pfVar3 + *pfVar2) * fVar10 +
                    (*pfVar4 + *pfVar8) * fVar11 + *pfVar5 * fVar12;
          pfVar6[1] = (fVar22 + fVar25) * fVar9 + (fVar31 + fVar28) * fVar10 +
                      (fVar37 + fVar34) * fVar11 + fVar40 * fVar12;
          pfVar6[2] = (fVar23 + fVar26) * fVar9 + (fVar32 + fVar29) * fVar10 +
                      (fVar38 + fVar35) * fVar11 + fVar41 * fVar12;
          pfVar6[3] = (fVar24 + fVar27) * fVar9 + (fVar33 + fVar30) * fVar10 +
                      (fVar39 + fVar36) * fVar11 + fVar42 * fVar12;
          uVar49 = uVar49 + 4;
        } while (uVar49 < uVar45);
      }
    }
    if (uVar45 < param_5) {
      do {
        *(float *)(param_2 * 7 + param_1 + uVar45 * 4) =
             (*(float *)(lVar58 * param_2 + param_1 + uVar45 * 4) +
             *(float *)(lVar53 * param_2 + param_1 + uVar45 * 4)) * fVar9 +
             (*(float *)(lVar54 * param_2 + param_1 + uVar45 * 4) +
             *(float *)(lVar57 * param_2 + param_1 + uVar45 * 4)) * fVar10 +
             (*(float *)(lVar55 * param_2 + param_1 + uVar45 * 4) +
             *(float *)(lVar56 * param_2 + param_1 + uVar45 * 4)) * fVar11 +
             *(float *)(lVar50 * param_2 + param_1 + uVar45 * 4) * fVar12;
        uVar45 = uVar45 + 1;
      } while (uVar45 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar49 = param_2 * 7 + param_1;
      uVar48 = uVar49 & 0xf;
      if (uVar48 != 0) {
        if ((uVar49 & 3) != 0) goto LAB_140617971;
        uVar48 = 0x10 - uVar48 >> 2;
      }
      if ((longlong)(uVar48 + 8) <= (longlong)param_5) {
        uVar46 = 0;
        uVar45 = param_5 - (param_5 - uVar48 & 7);
        if (uVar48 != 0) {
          do {
            iVar52 = (int)ROUND(*(float *)(uVar49 + uVar46 * 4));
            if (0xfe < iVar52) {
              iVar52 = 0xff;
            }
            uVar51 = (undefined1)iVar52;
            if (iVar52 < 1) {
              uVar51 = 0;
            }
            *(undefined1 *)(uVar46 + param_4) = uVar51;
            uVar46 = uVar46 + 1;
          } while (uVar46 < uVar48);
        }
        do {
          pfVar1 = (float *)(uVar49 + uVar48 * 4);
          auVar65._0_4_ = (int)*pfVar1;
          auVar65._4_4_ = (int)pfVar1[1];
          auVar65._8_4_ = (int)pfVar1[2];
          auVar65._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(uVar49 + 0x10 + uVar48 * 4);
          auVar64._4_4_ = (int)pfVar1[1];
          auVar64._0_4_ = (int)*pfVar1;
          auVar64._8_4_ = (int)pfVar1[2];
          auVar64._12_4_ = (int)pfVar1[3];
          auVar64 = packssdw(auVar65,auVar64);
          sVar13 = auVar64._0_2_;
          sVar14 = auVar64._2_2_;
          sVar15 = auVar64._4_2_;
          sVar16 = auVar64._6_2_;
          sVar17 = auVar64._8_2_;
          sVar18 = auVar64._10_2_;
          sVar19 = auVar64._12_2_;
          sVar20 = auVar64._14_2_;
          *(ulonglong *)(uVar48 + param_4) =
               CONCAT17((0 < sVar20) * (sVar20 < 0x100) * auVar64[0xe] - (0xff < sVar20),
                        CONCAT16((0 < sVar19) * (sVar19 < 0x100) * auVar64[0xc] - (0xff < sVar19),
                                 CONCAT15((0 < sVar18) * (sVar18 < 0x100) * auVar64[10] -
                                          (0xff < sVar18),
                                          CONCAT14((0 < sVar17) * (sVar17 < 0x100) * auVar64[8] -
                                                   (0xff < sVar17),
                                                   CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                            auVar64[6] - (0xff < sVar16),
                                                            CONCAT12((0 < sVar15) * (sVar15 < 0x100)
                                                                     * auVar64[4] - (0xff < sVar15),
                                                                     CONCAT11((0 < sVar14) *
                                                                              (sVar14 < 0x100) *
                                                                              auVar64[2] -
                                                                              (0xff < sVar14),
                                                                              (0 < sVar13) *
                                                                              (sVar13 < 0x100) *
                                                                              auVar64[0] -
                                                                              (0xff < sVar13))))))))
          ;
          uVar48 = uVar48 + 8;
        } while (uVar48 < uVar45);
        goto LAB_140617902;
      }
    }
LAB_140617971:
    uVar45 = 0;
LAB_140617902:
    if (param_5 <= uVar45) {
      return;
    }
    do {
      iVar52 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar45 * 4));
      if (0xfe < iVar52) {
        iVar52 = 0xff;
      }
      uVar51 = (undefined1)iVar52;
      if (iVar52 < 1) {
        uVar51 = 0;
      }
      *(undefined1 *)(uVar45 + param_4) = uVar51;
      uVar45 = uVar45 + 1;
    } while (uVar45 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar49 = param_2 * 7 + param_1;
    uVar48 = uVar49 & 0xf;
    if (uVar48 != 0) {
      if ((uVar49 & 3) != 0) goto LAB_14061796a;
      uVar48 = 0x10 - uVar48 >> 2;
    }
    if ((longlong)(uVar48 + 8) <= (longlong)param_5) {
      uVar46 = 0;
      uVar45 = param_5 - (param_5 - uVar48 & 7);
      if (uVar48 != 0) {
        do {
          iVar52 = (int)ROUND(*(float *)(uVar49 + uVar46 * 4));
          if (0xfe < iVar52) {
            iVar52 = 0xff;
          }
          uVar51 = (undefined1)iVar52;
          if (iVar52 < 1) {
            uVar51 = 0;
          }
          *(undefined1 *)(uVar46 + param_4) = uVar51;
          uVar46 = uVar46 + 1;
        } while (uVar46 < uVar48);
      }
      do {
        pfVar1 = (float *)(uVar49 + uVar48 * 4);
        auVar63._0_4_ = (int)*pfVar1;
        auVar63._4_4_ = (int)pfVar1[1];
        auVar63._8_4_ = (int)pfVar1[2];
        auVar63._12_4_ = (int)pfVar1[3];
        pfVar1 = (float *)(uVar49 + 0x10 + uVar48 * 4);
        auVar21._4_4_ = (int)pfVar1[1];
        auVar21._0_4_ = (int)*pfVar1;
        auVar21._8_4_ = (int)pfVar1[2];
        auVar21._12_4_ = (int)pfVar1[3];
        auVar64 = packssdw(auVar63,auVar21);
        sVar13 = auVar64._0_2_;
        sVar14 = auVar64._2_2_;
        sVar15 = auVar64._4_2_;
        sVar16 = auVar64._6_2_;
        sVar17 = auVar64._8_2_;
        sVar18 = auVar64._10_2_;
        sVar19 = auVar64._12_2_;
        sVar20 = auVar64._14_2_;
        *(ulonglong *)(uVar48 + param_4) =
             CONCAT17((0 < sVar20) * (sVar20 < 0x100) * auVar64[0xe] - (0xff < sVar20),
                      CONCAT16((0 < sVar19) * (sVar19 < 0x100) * auVar64[0xc] - (0xff < sVar19),
                               CONCAT15((0 < sVar18) * (sVar18 < 0x100) * auVar64[10] -
                                        (0xff < sVar18),
                                        CONCAT14((0 < sVar17) * (sVar17 < 0x100) * auVar64[8] -
                                                 (0xff < sVar17),
                                                 CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                          auVar64[6] - (0xff < sVar16),
                                                          CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                   auVar64[4] - (0xff < sVar15),
                                                                   CONCAT11((0 < sVar14) *
                                                                            (sVar14 < 0x100) *
                                                                            auVar64[2] -
                                                                            (0xff < sVar14),
                                                                            (0 < sVar13) *
                                                                            (sVar13 < 0x100) *
                                                                            auVar64[0] -
                                                                            (0xff < sVar13))))))));
        uVar48 = uVar48 + 8;
      } while (uVar48 < uVar45);
      goto LAB_1406177c2;
    }
  }
LAB_14061796a:
  uVar45 = 0;
LAB_1406177c2:
  if (uVar45 < param_5) {
    do {
      iVar52 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar45 * 4));
      if (0xfe < iVar52) {
        iVar52 = 0xff;
      }
      uVar51 = (undefined1)iVar52;
      if (iVar52 < 1) {
        uVar51 = 0;
      }
      *(undefined1 *)(uVar45 + param_4) = uVar51;
      uVar45 = uVar45 + 1;
    } while (uVar45 < param_5);
  }
  return;
}

