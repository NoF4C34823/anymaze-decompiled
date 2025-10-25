
void FUN_14070c300(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined1 auVar19 [16];
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
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  undefined1 uVar41;
  int iVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  lVar35 = 0;
  lVar44 = (longlong)param_3;
  fVar8 = *param_6;
  fVar9 = param_6[1];
  lVar45 = lVar44 + -2;
  if (SCARRY8(lVar44,-2) != lVar44 + -2 < 0) {
    lVar45 = lVar44 + 3;
  }
  lVar44 = (longlong)(int)lVar45 + 1;
  fVar10 = param_6[2];
  if (4 < lVar44) {
    lVar44 = lVar35;
  }
  lVar43 = (longlong)(int)lVar44 + 1;
  if (4 < lVar43) {
    lVar43 = lVar35;
  }
  lVar50 = (longlong)(int)lVar43 + 1;
  if (4 < lVar50) {
    lVar50 = lVar35;
  }
  lVar49 = (longlong)(int)lVar50 + 1;
  if (4 < lVar49) {
    lVar49 = lVar35;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14070cafc:
      uVar46 = 0;
      if (param_5 == 0) goto LAB_14070c820;
      uVar38 = 0;
      uVar39 = param_5;
    }
    else {
      uVar37 = param_2 * 5 + param_1;
      uVar38 = uVar37 & 0xf;
      if (uVar38 != 0) {
        if ((uVar37 & 3) != 0) goto LAB_14070cafc;
        uVar38 = 0x10 - uVar38 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar38 + 8)) goto LAB_14070cafc;
      lVar35 = param_2 * lVar45 + param_1;
      lVar47 = param_2 * lVar49 + param_1;
      lVar40 = param_2 * lVar43 + param_1;
      lVar36 = param_2 * lVar44 + param_1;
      lVar48 = param_2 * lVar50 + param_1;
      uVar46 = param_5 - (param_5 - uVar38 & 7);
      uVar39 = 0;
      if (uVar38 != 0) {
        do {
          *(float *)(uVar37 + uVar39 * 4) =
               (*(float *)(lVar35 + uVar39 * 4) + *(float *)(lVar47 + uVar39 * 4)) * fVar8 +
               (*(float *)(lVar36 + uVar39 * 4) + *(float *)(lVar48 + uVar39 * 4)) * fVar9 +
               *(float *)(lVar40 + uVar39 * 4) * fVar10;
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar38);
      }
      if ((uVar38 * 4 + lVar40 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar35 + uVar38 * 4);
          fVar20 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar22 = pfVar1[3];
          pfVar2 = (float *)(lVar47 + uVar38 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar3 = (float *)(lVar48 + uVar38 * 4);
          fVar26 = pfVar3[1];
          fVar27 = pfVar3[2];
          fVar28 = pfVar3[3];
          pfVar4 = (float *)(lVar36 + uVar38 * 4);
          fVar29 = pfVar4[1];
          fVar30 = pfVar4[2];
          fVar31 = pfVar4[3];
          pfVar5 = (float *)(lVar40 + uVar38 * 4);
          fVar32 = pfVar5[1];
          fVar33 = pfVar5[2];
          fVar34 = pfVar5[3];
          pfVar6 = (float *)(uVar37 + uVar38 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar4 + *pfVar3) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar20 + fVar23) * fVar8 + (fVar29 + fVar26) * fVar9 + fVar32 * fVar10;
          pfVar6[2] = (fVar21 + fVar24) * fVar8 + (fVar30 + fVar27) * fVar9 + fVar33 * fVar10;
          pfVar6[3] = (fVar22 + fVar25) * fVar8 + (fVar31 + fVar28) * fVar9 + fVar34 * fVar10;
          pfVar1 = (float *)(lVar35 + 0x10 + uVar38 * 4);
          fVar20 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar22 = pfVar1[3];
          pfVar2 = (float *)(lVar47 + 0x10 + uVar38 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar3 = (float *)(lVar36 + 0x10 + uVar38 * 4);
          fVar26 = pfVar3[1];
          fVar27 = pfVar3[2];
          fVar28 = pfVar3[3];
          pfVar4 = (float *)(lVar48 + 0x10 + uVar38 * 4);
          fVar29 = pfVar4[1];
          fVar30 = pfVar4[2];
          fVar31 = pfVar4[3];
          pfVar5 = (float *)(lVar40 + 0x10 + uVar38 * 4);
          fVar32 = pfVar5[1];
          fVar33 = pfVar5[2];
          fVar34 = pfVar5[3];
          pfVar6 = (float *)(uVar37 + 0x10 + uVar38 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar4) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar20 + fVar23) * fVar8 + (fVar26 + fVar29) * fVar9 + fVar32 * fVar10;
          pfVar6[2] = (fVar21 + fVar24) * fVar8 + (fVar27 + fVar30) * fVar9 + fVar33 * fVar10;
          pfVar6[3] = (fVar22 + fVar25) * fVar8 + (fVar28 + fVar31) * fVar9 + fVar34 * fVar10;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar46);
      }
      else {
        do {
          pfVar1 = (float *)(lVar35 + uVar38 * 4);
          fVar20 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar22 = pfVar1[3];
          pfVar2 = (float *)(lVar47 + uVar38 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar3 = (float *)(lVar48 + uVar38 * 4);
          fVar26 = pfVar3[1];
          fVar27 = pfVar3[2];
          fVar28 = pfVar3[3];
          pfVar4 = (float *)(lVar36 + uVar38 * 4);
          fVar29 = pfVar4[1];
          fVar30 = pfVar4[2];
          fVar31 = pfVar4[3];
          pfVar5 = (float *)(lVar40 + uVar38 * 4);
          fVar32 = pfVar5[1];
          fVar33 = pfVar5[2];
          fVar34 = pfVar5[3];
          pfVar6 = (float *)(uVar37 + uVar38 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar4 + *pfVar3) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar20 + fVar23) * fVar8 + (fVar29 + fVar26) * fVar9 + fVar32 * fVar10;
          pfVar6[2] = (fVar21 + fVar24) * fVar8 + (fVar30 + fVar27) * fVar9 + fVar33 * fVar10;
          pfVar6[3] = (fVar22 + fVar25) * fVar8 + (fVar31 + fVar28) * fVar9 + fVar34 * fVar10;
          pfVar1 = (float *)(lVar35 + 0x10 + uVar38 * 4);
          fVar20 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar22 = pfVar1[3];
          pfVar2 = (float *)(lVar47 + 0x10 + uVar38 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar3 = (float *)(lVar36 + 0x10 + uVar38 * 4);
          fVar26 = pfVar3[1];
          fVar27 = pfVar3[2];
          fVar28 = pfVar3[3];
          pfVar4 = (float *)(lVar48 + 0x10 + uVar38 * 4);
          fVar29 = pfVar4[1];
          fVar30 = pfVar4[2];
          fVar31 = pfVar4[3];
          pfVar5 = (float *)(lVar40 + 0x10 + uVar38 * 4);
          fVar32 = pfVar5[1];
          fVar33 = pfVar5[2];
          fVar34 = pfVar5[3];
          pfVar6 = (float *)(uVar37 + 0x10 + uVar38 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar4) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar20 + fVar23) * fVar8 + (fVar26 + fVar29) * fVar9 + fVar32 * fVar10;
          pfVar6[2] = (fVar21 + fVar24) * fVar8 + (fVar27 + fVar30) * fVar9 + fVar33 * fVar10;
          pfVar6[3] = (fVar22 + fVar25) * fVar8 + (fVar28 + fVar31) * fVar9 + fVar34 * fVar10;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar46);
      }
      if (param_5 < uVar46 + 1) goto LAB_14070c820;
      uVar39 = param_5 - uVar46;
      if ((longlong)uVar39 < 4) {
        uVar38 = 0;
      }
      else {
        lVar7 = uVar46 * 4;
        uVar38 = uVar39 & 0xfffffffffffffffc;
        uVar51 = 0;
        do {
          pfVar6 = (float *)(lVar35 + uVar46 * 4 + uVar51 * 4);
          fVar20 = pfVar6[1];
          fVar21 = pfVar6[2];
          fVar22 = pfVar6[3];
          pfVar1 = (float *)(lVar47 + uVar46 * 4 + uVar51 * 4);
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar2 = (float *)(lVar48 + lVar7 + uVar51 * 4);
          fVar26 = pfVar2[1];
          fVar27 = pfVar2[2];
          fVar28 = pfVar2[3];
          pfVar3 = (float *)(lVar36 + lVar7 + uVar51 * 4);
          fVar29 = pfVar3[1];
          fVar30 = pfVar3[2];
          fVar31 = pfVar3[3];
          pfVar4 = (float *)(lVar40 + lVar7 + uVar51 * 4);
          fVar32 = pfVar4[1];
          fVar33 = pfVar4[2];
          fVar34 = pfVar4[3];
          pfVar5 = (float *)(uVar37 + lVar7 + uVar51 * 4);
          *pfVar5 = (*pfVar6 + *pfVar1) * fVar8 + (*pfVar3 + *pfVar2) * fVar9 + *pfVar4 * fVar10;
          pfVar5[1] = (fVar20 + fVar23) * fVar8 + (fVar29 + fVar26) * fVar9 + fVar32 * fVar10;
          pfVar5[2] = (fVar21 + fVar24) * fVar8 + (fVar30 + fVar27) * fVar9 + fVar33 * fVar10;
          pfVar5[3] = (fVar22 + fVar25) * fVar8 + (fVar31 + fVar28) * fVar9 + fVar34 * fVar10;
          uVar51 = uVar51 + 4;
        } while (uVar51 < uVar38);
      }
    }
    if (uVar38 < uVar39) {
      lVar35 = uVar46 * 4;
      do {
        *(float *)(param_2 * 5 + param_1 + lVar35 + uVar38 * 4) =
             (*(float *)(lVar45 * param_2 + param_1 + lVar35 + uVar38 * 4) +
             *(float *)(lVar49 * param_2 + param_1 + lVar35 + uVar38 * 4)) * fVar8 +
             (*(float *)(lVar44 * param_2 + param_1 + lVar35 + uVar38 * 4) +
             *(float *)(lVar50 * param_2 + param_1 + lVar35 + uVar38 * 4)) * fVar9 +
             *(float *)(lVar43 * param_2 + param_1 + lVar35 + uVar38 * 4) * fVar10;
        uVar38 = uVar38 + 1;
      } while (uVar38 < uVar39);
    }
  }
LAB_14070c820:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar37 = param_2 * 5 + param_1;
      uVar38 = uVar37 & 0xf;
      if (uVar38 != 0) {
        if ((uVar37 & 3) != 0) goto LAB_14070cb1f;
        uVar38 = 0x10 - uVar38 >> 2;
      }
      if ((longlong)(uVar38 + 8) <= (longlong)param_5) {
        uVar39 = 0;
        uVar46 = param_5 - (param_5 - uVar38 & 7);
        if (uVar38 != 0) {
          do {
            iVar42 = (int)ROUND(*(float *)(uVar37 + uVar39 * 4));
            if (0xfe < iVar42) {
              iVar42 = 0xff;
            }
            uVar41 = (undefined1)iVar42;
            if (iVar42 < 1) {
              uVar41 = 0;
            }
            *(undefined1 *)(uVar39 + param_4) = uVar41;
            uVar39 = uVar39 + 1;
          } while (uVar39 < uVar38);
        }
        do {
          pfVar1 = (float *)(uVar37 + uVar38 * 4);
          auVar54._0_4_ = (int)*pfVar1;
          auVar54._4_4_ = (int)pfVar1[1];
          auVar54._8_4_ = (int)pfVar1[2];
          auVar54._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(uVar37 + 0x10 + uVar38 * 4);
          auVar53._4_4_ = (int)pfVar1[1];
          auVar53._0_4_ = (int)*pfVar1;
          auVar53._8_4_ = (int)pfVar1[2];
          auVar53._12_4_ = (int)pfVar1[3];
          auVar53 = packssdw(auVar54,auVar53);
          sVar11 = auVar53._0_2_;
          sVar12 = auVar53._2_2_;
          sVar13 = auVar53._4_2_;
          sVar14 = auVar53._6_2_;
          sVar15 = auVar53._8_2_;
          sVar16 = auVar53._10_2_;
          sVar17 = auVar53._12_2_;
          sVar18 = auVar53._14_2_;
          *(ulonglong *)(uVar38 + param_4) =
               CONCAT17((0 < sVar18) * (sVar18 < 0x100) * auVar53[0xe] - (0xff < sVar18),
                        CONCAT16((0 < sVar17) * (sVar17 < 0x100) * auVar53[0xc] - (0xff < sVar17),
                                 CONCAT15((0 < sVar16) * (sVar16 < 0x100) * auVar53[10] -
                                          (0xff < sVar16),
                                          CONCAT14((0 < sVar15) * (sVar15 < 0x100) * auVar53[8] -
                                                   (0xff < sVar15),
                                                   CONCAT13((0 < sVar14) * (sVar14 < 0x100) *
                                                            auVar53[6] - (0xff < sVar14),
                                                            CONCAT12((0 < sVar13) * (sVar13 < 0x100)
                                                                     * auVar53[4] - (0xff < sVar13),
                                                                     CONCAT11((0 < sVar12) *
                                                                              (sVar12 < 0x100) *
                                                                              auVar53[2] -
                                                                              (0xff < sVar12),
                                                                              (0 < sVar11) *
                                                                              (sVar11 < 0x100) *
                                                                              auVar53[0] -
                                                                              (0xff < sVar11))))))))
          ;
          uVar38 = uVar38 + 8;
        } while (uVar38 < uVar46);
        goto LAB_14070ca81;
      }
    }
LAB_14070cb1f:
    uVar46 = 0;
LAB_14070ca81:
    if (param_5 <= uVar46) {
      return;
    }
    do {
      iVar42 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar46 * 4));
      if (0xfe < iVar42) {
        iVar42 = 0xff;
      }
      uVar41 = (undefined1)iVar42;
      if (iVar42 < 1) {
        uVar41 = 0;
      }
      *(undefined1 *)(uVar46 + param_4) = uVar41;
      uVar46 = uVar46 + 1;
    } while (uVar46 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar37 = param_2 * 5 + param_1;
    uVar38 = uVar37 & 0xf;
    if (uVar38 != 0) {
      if ((uVar37 & 3) != 0) goto LAB_14070cb18;
      uVar38 = 0x10 - uVar38 >> 2;
    }
    if ((longlong)(uVar38 + 8) <= (longlong)param_5) {
      uVar39 = 0;
      uVar46 = param_5 - (param_5 - uVar38 & 7);
      if (uVar38 != 0) {
        do {
          iVar42 = (int)ROUND(*(float *)(uVar37 + uVar39 * 4));
          if (0xfe < iVar42) {
            iVar42 = 0xff;
          }
          uVar41 = (undefined1)iVar42;
          if (iVar42 < 1) {
            uVar41 = 0;
          }
          *(undefined1 *)(uVar39 + param_4) = uVar41;
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar38);
      }
      do {
        pfVar1 = (float *)(uVar37 + uVar38 * 4);
        auVar52._0_4_ = (int)*pfVar1;
        auVar52._4_4_ = (int)pfVar1[1];
        auVar52._8_4_ = (int)pfVar1[2];
        auVar52._12_4_ = (int)pfVar1[3];
        pfVar1 = (float *)(uVar37 + 0x10 + uVar38 * 4);
        auVar19._4_4_ = (int)pfVar1[1];
        auVar19._0_4_ = (int)*pfVar1;
        auVar19._8_4_ = (int)pfVar1[2];
        auVar19._12_4_ = (int)pfVar1[3];
        auVar53 = packssdw(auVar52,auVar19);
        sVar11 = auVar53._0_2_;
        sVar12 = auVar53._2_2_;
        sVar13 = auVar53._4_2_;
        sVar14 = auVar53._6_2_;
        sVar15 = auVar53._8_2_;
        sVar16 = auVar53._10_2_;
        sVar17 = auVar53._12_2_;
        sVar18 = auVar53._14_2_;
        *(ulonglong *)(uVar38 + param_4) =
             CONCAT17((0 < sVar18) * (sVar18 < 0x100) * auVar53[0xe] - (0xff < sVar18),
                      CONCAT16((0 < sVar17) * (sVar17 < 0x100) * auVar53[0xc] - (0xff < sVar17),
                               CONCAT15((0 < sVar16) * (sVar16 < 0x100) * auVar53[10] -
                                        (0xff < sVar16),
                                        CONCAT14((0 < sVar15) * (sVar15 < 0x100) * auVar53[8] -
                                                 (0xff < sVar15),
                                                 CONCAT13((0 < sVar14) * (sVar14 < 0x100) *
                                                          auVar53[6] - (0xff < sVar14),
                                                          CONCAT12((0 < sVar13) * (sVar13 < 0x100) *
                                                                   auVar53[4] - (0xff < sVar13),
                                                                   CONCAT11((0 < sVar12) *
                                                                            (sVar12 < 0x100) *
                                                                            auVar53[2] -
                                                                            (0xff < sVar12),
                                                                            (0 < sVar11) *
                                                                            (sVar11 < 0x100) *
                                                                            auVar53[0] -
                                                                            (0xff < sVar11))))))));
        uVar38 = uVar38 + 8;
      } while (uVar38 < uVar46);
      goto LAB_14070c921;
    }
  }
LAB_14070cb18:
  uVar46 = 0;
LAB_14070c921:
  if (uVar46 < param_5) {
    do {
      iVar42 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar46 * 4));
      if (0xfe < iVar42) {
        iVar42 = 0xff;
      }
      uVar41 = (undefined1)iVar42;
      if (iVar42 < 1) {
        uVar41 = 0;
      }
      *(undefined1 *)(uVar46 + param_4) = uVar41;
      uVar46 = uVar46 + 1;
    } while (uVar46 < param_5);
  }
  return;
}

