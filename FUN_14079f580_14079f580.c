
void FUN_14079f580(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
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
  float fVar43;
  float fVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  undefined1 uVar53;
  int iVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  
  lVar55 = (longlong)param_3;
  uVar46 = 0;
  lVar56 = lVar55 + -3;
  if (SCARRY8(lVar55,-3) != lVar55 + -3 < 0) {
    lVar56 = lVar55 + 4;
  }
  lVar55 = (longlong)(int)lVar56 + 1;
  fVar9 = *param_6;
  fVar10 = param_6[1];
  uVar23 = *(undefined8 *)param_6;
  uVar22 = *(undefined8 *)param_6;
  if (6 < lVar55) {
    lVar55 = 0;
  }
  fVar11 = param_6[2];
  fVar12 = param_6[3];
  uVar21 = *(undefined8 *)(param_6 + 2);
  lVar58 = (longlong)(int)lVar55 + 1;
  if (6 < lVar58) {
    lVar58 = 0;
  }
  lVar47 = (longlong)(int)lVar58 + 1;
  if (6 < lVar47) {
    lVar47 = 0;
  }
  lVar57 = (longlong)(int)lVar47 + 1;
  if (6 < lVar57) {
    lVar57 = 0;
  }
  lVar59 = (longlong)(int)lVar57 + 1;
  if (6 < lVar59) {
    lVar59 = 0;
  }
  lVar52 = (longlong)(int)lVar59 + 1;
  if (6 < lVar52) {
    lVar52 = 0;
  }
  if (0 < (longlong)param_5) {
    if (3 < (longlong)param_5) {
      uVar50 = param_2 * 7 + param_1;
      uVar51 = uVar50 & 0xf;
      if (uVar51 != 0) {
        if ((uVar50 & 3) != 0) goto LAB_14079fa45;
        uVar51 = 0x10 - uVar51 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar51 + 4)) {
        uVar46 = 0;
      }
      else {
        lVar60 = param_2 * lVar52 + param_1;
        lVar61 = param_2 * lVar55 + param_1;
        uVar46 = param_5 - (param_5 - uVar51 & 3);
        lVar48 = param_2 * lVar47 + param_1;
        lVar62 = param_2 * lVar59 + param_1;
        lVar49 = param_2 * lVar56 + param_1;
        lVar63 = param_2 * lVar58 + param_1;
        lVar64 = param_2 * lVar57 + param_1;
        if (uVar51 != 0) {
          uVar45 = 0;
          do {
            auVar71._0_4_ = *(float *)(lVar49 + uVar45 * 4) + *(float *)(lVar60 + uVar45 * 4);
            auVar71._4_4_ = *(float *)(lVar61 + uVar45 * 4) + *(float *)(lVar62 + uVar45 * 4);
            auVar65._8_4_ = fVar11;
            auVar65._0_8_ = uVar22;
            auVar65._12_4_ = fVar12;
            auVar68 = insertps(ZEXT416((uint)(*(float *)(lVar63 + uVar45 * 4) +
                                             *(float *)(lVar64 + uVar45 * 4))),
                               *(undefined4 *)(lVar48 + uVar45 * 4),0x10);
            auVar71._8_8_ = auVar68._0_8_;
            auVar65 = dpps(auVar65,auVar71,0xf1);
            *(int *)(uVar50 + uVar45 * 4) = auVar65._0_4_;
            uVar45 = uVar45 + 1;
          } while (uVar45 < uVar51);
        }
        if ((lVar48 + uVar51 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar49 + uVar51 * 4);
            fVar24 = pfVar1[1];
            fVar25 = pfVar1[2];
            fVar26 = pfVar1[3];
            pfVar2 = (float *)(lVar60 + uVar51 * 4);
            fVar27 = pfVar2[1];
            fVar28 = pfVar2[2];
            fVar29 = pfVar2[3];
            pfVar3 = (float *)(lVar61 + uVar51 * 4);
            fVar30 = pfVar3[1];
            fVar31 = pfVar3[2];
            fVar32 = pfVar3[3];
            pfVar8 = (float *)(lVar62 + uVar51 * 4);
            fVar33 = pfVar8[1];
            fVar34 = pfVar8[2];
            fVar35 = pfVar8[3];
            pfVar4 = (float *)(lVar64 + uVar51 * 4);
            fVar36 = pfVar4[1];
            fVar37 = pfVar4[2];
            fVar38 = pfVar4[3];
            pfVar5 = (float *)(lVar63 + uVar51 * 4);
            fVar39 = pfVar5[1];
            fVar40 = pfVar5[2];
            fVar41 = pfVar5[3];
            pfVar6 = (float *)(lVar48 + uVar51 * 4);
            fVar42 = pfVar6[1];
            fVar43 = pfVar6[2];
            fVar44 = pfVar6[3];
            pfVar7 = (float *)(uVar50 + uVar51 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar3 + *pfVar8) * fVar10 +
                      (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
            pfVar7[1] = (fVar24 + fVar27) * fVar9 + (fVar30 + fVar33) * fVar10 +
                        (fVar39 + fVar36) * fVar11 + fVar42 * fVar12;
            pfVar7[2] = (fVar25 + fVar28) * fVar9 + (fVar31 + fVar34) * fVar10 +
                        (fVar40 + fVar37) * fVar11 + fVar43 * fVar12;
            pfVar7[3] = (fVar26 + fVar29) * fVar9 + (fVar32 + fVar35) * fVar10 +
                        (fVar41 + fVar38) * fVar11 + fVar44 * fVar12;
            uVar51 = uVar51 + 4;
          } while (uVar51 < uVar46);
        }
        else {
          do {
            pfVar1 = (float *)(lVar49 + uVar51 * 4);
            fVar24 = pfVar1[1];
            fVar25 = pfVar1[2];
            fVar26 = pfVar1[3];
            pfVar2 = (float *)(lVar60 + uVar51 * 4);
            fVar27 = pfVar2[1];
            fVar28 = pfVar2[2];
            fVar29 = pfVar2[3];
            pfVar3 = (float *)(lVar61 + uVar51 * 4);
            fVar30 = pfVar3[1];
            fVar31 = pfVar3[2];
            fVar32 = pfVar3[3];
            pfVar8 = (float *)(lVar62 + uVar51 * 4);
            fVar33 = pfVar8[1];
            fVar34 = pfVar8[2];
            fVar35 = pfVar8[3];
            pfVar4 = (float *)(lVar64 + uVar51 * 4);
            fVar36 = pfVar4[1];
            fVar37 = pfVar4[2];
            fVar38 = pfVar4[3];
            pfVar5 = (float *)(lVar63 + uVar51 * 4);
            fVar39 = pfVar5[1];
            fVar40 = pfVar5[2];
            fVar41 = pfVar5[3];
            pfVar6 = (float *)(lVar48 + uVar51 * 4);
            fVar42 = pfVar6[1];
            fVar43 = pfVar6[2];
            fVar44 = pfVar6[3];
            pfVar7 = (float *)(uVar50 + uVar51 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar3 + *pfVar8) * fVar10 +
                      (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
            pfVar7[1] = (fVar24 + fVar27) * fVar9 + (fVar30 + fVar33) * fVar10 +
                        (fVar39 + fVar36) * fVar11 + fVar42 * fVar12;
            pfVar7[2] = (fVar25 + fVar28) * fVar9 + (fVar31 + fVar34) * fVar10 +
                        (fVar40 + fVar37) * fVar11 + fVar43 * fVar12;
            pfVar7[3] = (fVar26 + fVar29) * fVar9 + (fVar32 + fVar35) * fVar10 +
                        (fVar41 + fVar38) * fVar11 + fVar44 * fVar12;
            uVar51 = uVar51 + 4;
          } while (uVar51 < uVar46);
        }
      }
    }
LAB_14079fa45:
    if (uVar46 < param_5) {
      do {
        auVar72._8_4_ = (int)uVar21;
        auVar72._0_8_ = uVar23;
        auVar72._12_4_ = (int)((ulonglong)uVar21 >> 0x20);
        auVar68._0_4_ =
             *(float *)(lVar56 * param_2 + param_1 + uVar46 * 4) +
             *(float *)(lVar52 * param_2 + param_1 + uVar46 * 4);
        auVar68._4_4_ =
             *(float *)(lVar55 * param_2 + param_1 + uVar46 * 4) +
             *(float *)(lVar59 * param_2 + param_1 + uVar46 * 4);
        auVar65 = insertps(ZEXT416((uint)(*(float *)(lVar58 * param_2 + param_1 + uVar46 * 4) +
                                         *(float *)(lVar57 * param_2 + param_1 + uVar46 * 4))),
                           *(undefined4 *)(lVar47 * param_2 + param_1 + uVar46 * 4),0x10);
        auVar68._8_8_ = auVar65._0_8_;
        auVar65 = dpps(auVar72,auVar68,0xf1);
        *(int *)(param_2 * 7 + param_1 + uVar46 * 4) = auVar65._0_4_;
        uVar46 = uVar46 + 1;
      } while (uVar46 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar50 = param_2 * 7 + param_1;
      uVar46 = uVar50 & 0xf;
      if (uVar46 != 0) {
        if ((uVar50 & 3) != 0) goto LAB_14079fdb8;
        uVar46 = 0x10 - uVar46 >> 2;
      }
      if ((longlong)(uVar46 + 8) <= (longlong)param_5) {
        uVar45 = 0;
        uVar51 = param_5 - (param_5 - uVar46 & 7);
        if (uVar46 != 0) {
          do {
            iVar54 = (int)ROUND(*(float *)(uVar50 + uVar45 * 4));
            if (0xfe < iVar54) {
              iVar54 = 0xff;
            }
            uVar53 = (undefined1)iVar54;
            if (iVar54 < 1) {
              uVar53 = 0;
            }
            *(undefined1 *)(uVar45 + param_4) = uVar53;
            uVar45 = uVar45 + 1;
          } while (uVar45 < uVar46);
        }
        do {
          pfVar1 = (float *)(uVar50 + uVar46 * 4);
          auVar70._0_4_ = (int)*pfVar1;
          auVar70._4_4_ = (int)pfVar1[1];
          auVar70._8_4_ = (int)pfVar1[2];
          auVar70._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(uVar50 + 0x10 + uVar46 * 4);
          auVar67._0_4_ = (int)*pfVar1;
          auVar67._4_4_ = (int)pfVar1[1];
          auVar67._8_4_ = (int)pfVar1[2];
          auVar67._12_4_ = (int)pfVar1[3];
          auVar65 = packssdw(auVar70,auVar67);
          sVar13 = auVar65._0_2_;
          sVar14 = auVar65._2_2_;
          sVar15 = auVar65._4_2_;
          sVar16 = auVar65._6_2_;
          sVar17 = auVar65._8_2_;
          sVar18 = auVar65._10_2_;
          sVar19 = auVar65._12_2_;
          sVar20 = auVar65._14_2_;
          *(ulonglong *)(uVar46 + param_4) =
               CONCAT17((0 < sVar20) * (sVar20 < 0x100) * auVar65[0xe] - (0xff < sVar20),
                        CONCAT16((0 < sVar19) * (sVar19 < 0x100) * auVar65[0xc] - (0xff < sVar19),
                                 CONCAT15((0 < sVar18) * (sVar18 < 0x100) * auVar65[10] -
                                          (0xff < sVar18),
                                          CONCAT14((0 < sVar17) * (sVar17 < 0x100) * auVar65[8] -
                                                   (0xff < sVar17),
                                                   CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                            auVar65[6] - (0xff < sVar16),
                                                            CONCAT12((0 < sVar15) * (sVar15 < 0x100)
                                                                     * auVar65[4] - (0xff < sVar15),
                                                                     CONCAT11((0 < sVar14) *
                                                                              (sVar14 < 0x100) *
                                                                              auVar65[2] -
                                                                              (0xff < sVar14),
                                                                              (0 < sVar13) *
                                                                              (sVar13 < 0x100) *
                                                                              auVar65[0] -
                                                                              (0xff < sVar13))))))))
          ;
          uVar46 = uVar46 + 8;
        } while (uVar46 < uVar51);
        goto LAB_14079fd24;
      }
    }
LAB_14079fdb8:
    uVar51 = 0;
LAB_14079fd24:
    if (param_5 <= uVar51) {
      return;
    }
    do {
      iVar54 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar51 * 4));
      if (0xfe < iVar54) {
        iVar54 = 0xff;
      }
      uVar53 = (undefined1)iVar54;
      if (iVar54 < 1) {
        uVar53 = 0;
      }
      *(undefined1 *)(uVar51 + param_4) = uVar53;
      uVar51 = uVar51 + 1;
    } while (uVar51 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar50 = param_2 * 7 + param_1;
    uVar46 = uVar50 & 0xf;
    if (uVar46 != 0) {
      if ((uVar50 & 3) != 0) goto LAB_14079fdb1;
      uVar46 = 0x10 - uVar46 >> 2;
    }
    if ((longlong)(uVar46 + 8) <= (longlong)param_5) {
      uVar45 = 0;
      uVar51 = param_5 - (param_5 - uVar46 & 7);
      if (uVar46 != 0) {
        do {
          iVar54 = (int)ROUND(*(float *)(uVar50 + uVar45 * 4));
          if (0xfe < iVar54) {
            iVar54 = 0xff;
          }
          uVar53 = (undefined1)iVar54;
          if (iVar54 < 1) {
            uVar53 = 0;
          }
          *(undefined1 *)(uVar45 + param_4) = uVar53;
          uVar45 = uVar45 + 1;
        } while (uVar45 < uVar46);
      }
      do {
        pfVar1 = (float *)(uVar50 + uVar46 * 4);
        auVar69._0_4_ = (int)*pfVar1;
        auVar69._4_4_ = (int)pfVar1[1];
        auVar69._8_4_ = (int)pfVar1[2];
        auVar69._12_4_ = (int)pfVar1[3];
        pfVar1 = (float *)(uVar50 + 0x10 + uVar46 * 4);
        auVar66._0_4_ = (int)*pfVar1;
        auVar66._4_4_ = (int)pfVar1[1];
        auVar66._8_4_ = (int)pfVar1[2];
        auVar66._12_4_ = (int)pfVar1[3];
        auVar65 = packssdw(auVar69,auVar66);
        sVar13 = auVar65._0_2_;
        sVar14 = auVar65._2_2_;
        sVar15 = auVar65._4_2_;
        sVar16 = auVar65._6_2_;
        sVar17 = auVar65._8_2_;
        sVar18 = auVar65._10_2_;
        sVar19 = auVar65._12_2_;
        sVar20 = auVar65._14_2_;
        *(ulonglong *)(uVar46 + param_4) =
             CONCAT17((0 < sVar20) * (sVar20 < 0x100) * auVar65[0xe] - (0xff < sVar20),
                      CONCAT16((0 < sVar19) * (sVar19 < 0x100) * auVar65[0xc] - (0xff < sVar19),
                               CONCAT15((0 < sVar18) * (sVar18 < 0x100) * auVar65[10] -
                                        (0xff < sVar18),
                                        CONCAT14((0 < sVar17) * (sVar17 < 0x100) * auVar65[8] -
                                                 (0xff < sVar17),
                                                 CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                          auVar65[6] - (0xff < sVar16),
                                                          CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                   auVar65[4] - (0xff < sVar15),
                                                                   CONCAT11((0 < sVar14) *
                                                                            (sVar14 < 0x100) *
                                                                            auVar65[2] -
                                                                            (0xff < sVar14),
                                                                            (0 < sVar13) *
                                                                            (sVar13 < 0x100) *
                                                                            auVar65[0] -
                                                                            (0xff < sVar13))))))));
        uVar46 = uVar46 + 8;
      } while (uVar46 < uVar51);
      goto LAB_14079fbe4;
    }
  }
LAB_14079fdb1:
  uVar51 = 0;
LAB_14079fbe4:
  if (uVar51 < param_5) {
    do {
      iVar54 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar51 * 4));
      if (0xfe < iVar54) {
        iVar54 = 0xff;
      }
      uVar53 = (undefined1)iVar54;
      if (iVar54 < 1) {
        uVar53 = 0;
      }
      *(undefined1 *)(uVar51 + param_4) = uVar53;
      uVar51 = uVar51 + 1;
    } while (uVar51 < param_5);
  }
  return;
}

