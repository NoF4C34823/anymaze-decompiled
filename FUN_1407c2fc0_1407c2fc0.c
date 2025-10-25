
void FUN_1407c2fc0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [16];
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
  ulonglong uVar37;
  longlong lVar38;
  undefined1 uVar39;
  int iVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  lVar41 = (longlong)param_3;
  lVar42 = lVar41 + -2;
  if (SCARRY8(lVar41,-2) != lVar41 + -2 < 0) {
    lVar42 = lVar41 + 3;
  }
  lVar34 = 0;
  fVar7 = *param_6;
  lVar41 = (longlong)(int)lVar42 + 1;
  fVar8 = param_6[1];
  fVar9 = param_6[2];
  if (4 < lVar41) {
    lVar41 = lVar34;
  }
  lVar35 = (longlong)(int)lVar41 + 1;
  if (4 < lVar35) {
    lVar35 = lVar34;
  }
  lVar43 = (longlong)(int)lVar35 + 1;
  if (4 < lVar43) {
    lVar43 = lVar34;
  }
  lVar38 = (longlong)(int)lVar43 + 1;
  if (4 < lVar38) {
    lVar38 = lVar34;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1407c371b:
      uVar37 = 0;
      if (param_5 == 0) goto LAB_1407c34be;
      uVar36 = 0;
      uVar50 = param_5;
    }
    else {
      uVar49 = param_2 * 5 + param_1;
      uVar50 = uVar49 & 0xf;
      if (uVar50 != 0) {
        if ((uVar49 & 3) != 0) goto LAB_1407c371b;
        uVar50 = 0x10 - uVar50 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar50 + 8)) goto LAB_1407c371b;
      lVar44 = param_2 * lVar42 + param_1;
      lVar34 = param_2 * lVar35 + param_1;
      uVar37 = param_5 - (param_5 - uVar50 & 7);
      lVar46 = param_2 * lVar38 + param_1;
      lVar45 = param_2 * lVar41 + param_1;
      lVar47 = param_2 * lVar43 + param_1;
      uVar36 = 0;
      if (uVar50 != 0) {
        do {
          *(float *)(uVar49 + uVar36 * 4) =
               (*(float *)(lVar44 + uVar36 * 4) + *(float *)(lVar46 + uVar36 * 4)) * fVar7 +
               (*(float *)(lVar45 + uVar36 * 4) + *(float *)(lVar47 + uVar36 * 4)) * fVar8 +
               *(float *)(lVar34 + uVar36 * 4) * fVar9;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar50);
      }
      if ((lVar34 + uVar50 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar44 + uVar50 * 4);
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar6 = (float *)(lVar46 + uVar50 * 4);
          fVar22 = pfVar6[1];
          fVar23 = pfVar6[2];
          fVar24 = pfVar6[3];
          pfVar2 = (float *)(lVar45 + uVar50 * 4);
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          pfVar3 = (float *)(lVar47 + uVar50 * 4);
          fVar28 = pfVar3[1];
          fVar29 = pfVar3[2];
          fVar30 = pfVar3[3];
          pfVar4 = (float *)(lVar34 + uVar50 * 4);
          fVar31 = pfVar4[1];
          fVar32 = pfVar4[2];
          fVar33 = pfVar4[3];
          pfVar5 = (float *)(uVar49 + uVar50 * 4);
          *pfVar5 = (*pfVar1 + *pfVar6) * fVar7 + (*pfVar2 + *pfVar3) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar19 + fVar22) * fVar7 + (fVar25 + fVar28) * fVar8 + fVar31 * fVar9;
          pfVar5[2] = (fVar20 + fVar23) * fVar7 + (fVar26 + fVar29) * fVar8 + fVar32 * fVar9;
          pfVar5[3] = (fVar21 + fVar24) * fVar7 + (fVar27 + fVar30) * fVar8 + fVar33 * fVar9;
          pfVar1 = (float *)(lVar44 + 0x10 + uVar50 * 4);
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + 0x10 + uVar50 * 4);
          fVar22 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar24 = pfVar2[3];
          pfVar3 = (float *)(lVar45 + 0x10 + uVar50 * 4);
          fVar25 = pfVar3[1];
          fVar26 = pfVar3[2];
          fVar27 = pfVar3[3];
          pfVar4 = (float *)(lVar47 + 0x10 + uVar50 * 4);
          fVar28 = pfVar4[1];
          fVar29 = pfVar4[2];
          fVar30 = pfVar4[3];
          pfVar5 = (float *)(lVar34 + 0x10 + uVar50 * 4);
          fVar31 = pfVar5[1];
          fVar32 = pfVar5[2];
          fVar33 = pfVar5[3];
          pfVar6 = (float *)(uVar49 + 0x10 + uVar50 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
          pfVar6[1] = (fVar19 + fVar22) * fVar7 + (fVar25 + fVar28) * fVar8 + fVar31 * fVar9;
          pfVar6[2] = (fVar20 + fVar23) * fVar7 + (fVar26 + fVar29) * fVar8 + fVar32 * fVar9;
          pfVar6[3] = (fVar21 + fVar24) * fVar7 + (fVar27 + fVar30) * fVar8 + fVar33 * fVar9;
          uVar50 = uVar50 + 8;
        } while (uVar50 < uVar37);
      }
      else {
        do {
          pfVar1 = (float *)(lVar44 + uVar50 * 4);
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar6 = (float *)(lVar46 + uVar50 * 4);
          fVar22 = pfVar6[1];
          fVar23 = pfVar6[2];
          fVar24 = pfVar6[3];
          pfVar2 = (float *)(lVar45 + uVar50 * 4);
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          pfVar3 = (float *)(lVar47 + uVar50 * 4);
          fVar28 = pfVar3[1];
          fVar29 = pfVar3[2];
          fVar30 = pfVar3[3];
          pfVar4 = (float *)(lVar34 + uVar50 * 4);
          fVar31 = pfVar4[1];
          fVar32 = pfVar4[2];
          fVar33 = pfVar4[3];
          pfVar5 = (float *)(uVar49 + uVar50 * 4);
          *pfVar5 = (*pfVar1 + *pfVar6) * fVar7 + (*pfVar2 + *pfVar3) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar19 + fVar22) * fVar7 + (fVar25 + fVar28) * fVar8 + fVar31 * fVar9;
          pfVar5[2] = (fVar20 + fVar23) * fVar7 + (fVar26 + fVar29) * fVar8 + fVar32 * fVar9;
          pfVar5[3] = (fVar21 + fVar24) * fVar7 + (fVar27 + fVar30) * fVar8 + fVar33 * fVar9;
          pfVar1 = (float *)(lVar44 + 0x10 + uVar50 * 4);
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + 0x10 + uVar50 * 4);
          fVar22 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar24 = pfVar2[3];
          pfVar3 = (float *)(lVar45 + 0x10 + uVar50 * 4);
          fVar25 = pfVar3[1];
          fVar26 = pfVar3[2];
          fVar27 = pfVar3[3];
          pfVar4 = (float *)(lVar47 + 0x10 + uVar50 * 4);
          fVar28 = pfVar4[1];
          fVar29 = pfVar4[2];
          fVar30 = pfVar4[3];
          pfVar5 = (float *)(lVar34 + 0x10 + uVar50 * 4);
          fVar31 = pfVar5[1];
          fVar32 = pfVar5[2];
          fVar33 = pfVar5[3];
          pfVar6 = (float *)(uVar49 + 0x10 + uVar50 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
          pfVar6[1] = (fVar19 + fVar22) * fVar7 + (fVar25 + fVar28) * fVar8 + fVar31 * fVar9;
          pfVar6[2] = (fVar20 + fVar23) * fVar7 + (fVar26 + fVar29) * fVar8 + fVar32 * fVar9;
          pfVar6[3] = (fVar21 + fVar24) * fVar7 + (fVar27 + fVar30) * fVar8 + fVar33 * fVar9;
          uVar50 = uVar50 + 8;
        } while (uVar50 < uVar37);
      }
      if (param_5 < uVar37 + 1) goto LAB_1407c34be;
      uVar50 = param_5 - uVar37;
      if ((longlong)uVar50 < 4) {
        uVar36 = 0;
      }
      else {
        uVar36 = uVar50 & 0xfffffffffffffffc;
        uVar48 = 0;
        do {
          pfVar1 = (float *)(lVar44 + uVar37 * 4 + uVar48 * 4);
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar2 = (float *)(lVar46 + uVar37 * 4 + uVar48 * 4);
          fVar22 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar24 = pfVar2[3];
          pfVar6 = (float *)(lVar45 + uVar37 * 4 + uVar48 * 4);
          fVar25 = pfVar6[1];
          fVar26 = pfVar6[2];
          fVar27 = pfVar6[3];
          pfVar3 = (float *)(lVar47 + uVar37 * 4 + uVar48 * 4);
          fVar28 = pfVar3[1];
          fVar29 = pfVar3[2];
          fVar30 = pfVar3[3];
          pfVar4 = (float *)(lVar34 + uVar37 * 4 + uVar48 * 4);
          fVar31 = pfVar4[1];
          fVar32 = pfVar4[2];
          fVar33 = pfVar4[3];
          pfVar5 = (float *)(uVar49 + uVar37 * 4 + uVar48 * 4);
          *pfVar5 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar6 + *pfVar3) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar19 + fVar22) * fVar7 + (fVar25 + fVar28) * fVar8 + fVar31 * fVar9;
          pfVar5[2] = (fVar20 + fVar23) * fVar7 + (fVar26 + fVar29) * fVar8 + fVar32 * fVar9;
          pfVar5[3] = (fVar21 + fVar24) * fVar7 + (fVar27 + fVar30) * fVar8 + fVar33 * fVar9;
          uVar48 = uVar48 + 4;
        } while (uVar48 < uVar36);
      }
    }
    if (uVar36 < uVar50) {
      do {
        *(float *)(param_2 * 5 + param_1 + uVar37 * 4 + uVar36 * 4) =
             (*(float *)(lVar42 * param_2 + param_1 + uVar37 * 4 + uVar36 * 4) +
             *(float *)(lVar38 * param_2 + param_1 + uVar37 * 4 + uVar36 * 4)) * fVar7 +
             (*(float *)(lVar41 * param_2 + param_1 + uVar37 * 4 + uVar36 * 4) +
             *(float *)(lVar43 * param_2 + param_1 + uVar37 * 4 + uVar36 * 4)) * fVar8 +
             *(float *)(lVar35 * param_2 + param_1 + uVar37 * 4 + uVar36 * 4) * fVar9;
        uVar36 = uVar36 + 1;
      } while (uVar36 < uVar50);
    }
  }
LAB_1407c34be:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar50 = param_2 * 5 + param_1;
      uVar49 = uVar50 & 0xf;
      if (uVar49 != 0) {
        if ((uVar50 & 3) != 0) goto LAB_1407c3738;
        uVar49 = 0x10 - uVar49 >> 2;
      }
      if ((longlong)(uVar49 + 8) <= (longlong)param_5) {
        uVar36 = 0;
        uVar37 = param_5 - (param_5 - uVar49 & 7);
        if (uVar49 != 0) {
          do {
            iVar40 = (int)ROUND(*(float *)(uVar50 + uVar36 * 4));
            if (0xfe < iVar40) {
              iVar40 = 0xff;
            }
            uVar39 = (undefined1)iVar40;
            if (iVar40 < 1) {
              uVar39 = 0;
            }
            *(undefined1 *)(uVar36 + param_4) = uVar39;
            uVar36 = uVar36 + 1;
          } while (uVar36 < uVar49);
        }
        do {
          pfVar1 = (float *)(uVar50 + uVar49 * 4);
          auVar53._0_4_ = (int)*pfVar1;
          auVar53._4_4_ = (int)pfVar1[1];
          auVar53._8_4_ = (int)pfVar1[2];
          auVar53._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(uVar50 + 0x10 + uVar49 * 4);
          auVar52._4_4_ = (int)pfVar1[1];
          auVar52._0_4_ = (int)*pfVar1;
          auVar52._8_4_ = (int)pfVar1[2];
          auVar52._12_4_ = (int)pfVar1[3];
          auVar52 = packssdw(auVar53,auVar52);
          sVar10 = auVar52._0_2_;
          sVar11 = auVar52._2_2_;
          sVar12 = auVar52._4_2_;
          sVar13 = auVar52._6_2_;
          sVar14 = auVar52._8_2_;
          sVar15 = auVar52._10_2_;
          sVar16 = auVar52._12_2_;
          sVar17 = auVar52._14_2_;
          *(ulonglong *)(uVar49 + param_4) =
               CONCAT17((0 < sVar17) * (sVar17 < 0x100) * auVar52[0xe] - (0xff < sVar17),
                        CONCAT16((0 < sVar16) * (sVar16 < 0x100) * auVar52[0xc] - (0xff < sVar16),
                                 CONCAT15((0 < sVar15) * (sVar15 < 0x100) * auVar52[10] -
                                          (0xff < sVar15),
                                          CONCAT14((0 < sVar14) * (sVar14 < 0x100) * auVar52[8] -
                                                   (0xff < sVar14),
                                                   CONCAT13((0 < sVar13) * (sVar13 < 0x100) *
                                                            auVar52[6] - (0xff < sVar13),
                                                            CONCAT12((0 < sVar12) * (sVar12 < 0x100)
                                                                     * auVar52[4] - (0xff < sVar12),
                                                                     CONCAT11((0 < sVar11) *
                                                                              (sVar11 < 0x100) *
                                                                              auVar52[2] -
                                                                              (0xff < sVar11),
                                                                              (0 < sVar10) *
                                                                              (sVar10 < 0x100) *
                                                                              auVar52[0] -
                                                                              (0xff < sVar10))))))))
          ;
          uVar49 = uVar49 + 8;
        } while (uVar49 < uVar37);
        goto LAB_1407c36c1;
      }
    }
LAB_1407c3738:
    uVar37 = 0;
LAB_1407c36c1:
    if (param_5 <= uVar37) {
      return;
    }
    do {
      iVar40 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar37 * 4));
      if (0xfe < iVar40) {
        iVar40 = 0xff;
      }
      uVar39 = (undefined1)iVar40;
      if (iVar40 < 1) {
        uVar39 = 0;
      }
      *(undefined1 *)(uVar37 + param_4) = uVar39;
      uVar37 = uVar37 + 1;
    } while (uVar37 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar50 = param_2 * 5 + param_1;
    uVar49 = uVar50 & 0xf;
    if (uVar49 != 0) {
      if ((uVar50 & 3) != 0) goto LAB_1407c3731;
      uVar49 = 0x10 - uVar49 >> 2;
    }
    if ((longlong)(uVar49 + 8) <= (longlong)param_5) {
      uVar36 = 0;
      uVar37 = param_5 - (param_5 - uVar49 & 7);
      if (uVar49 != 0) {
        do {
          iVar40 = (int)ROUND(*(float *)(uVar50 + uVar36 * 4));
          if (0xfe < iVar40) {
            iVar40 = 0xff;
          }
          uVar39 = (undefined1)iVar40;
          if (iVar40 < 1) {
            uVar39 = 0;
          }
          *(undefined1 *)(uVar36 + param_4) = uVar39;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar49);
      }
      do {
        pfVar1 = (float *)(uVar50 + uVar49 * 4);
        auVar51._0_4_ = (int)*pfVar1;
        auVar51._4_4_ = (int)pfVar1[1];
        auVar51._8_4_ = (int)pfVar1[2];
        auVar51._12_4_ = (int)pfVar1[3];
        pfVar1 = (float *)(uVar50 + 0x10 + uVar49 * 4);
        auVar18._4_4_ = (int)pfVar1[1];
        auVar18._0_4_ = (int)*pfVar1;
        auVar18._8_4_ = (int)pfVar1[2];
        auVar18._12_4_ = (int)pfVar1[3];
        auVar52 = packssdw(auVar51,auVar18);
        sVar10 = auVar52._0_2_;
        sVar11 = auVar52._2_2_;
        sVar12 = auVar52._4_2_;
        sVar13 = auVar52._6_2_;
        sVar14 = auVar52._8_2_;
        sVar15 = auVar52._10_2_;
        sVar16 = auVar52._12_2_;
        sVar17 = auVar52._14_2_;
        *(ulonglong *)(uVar49 + param_4) =
             CONCAT17((0 < sVar17) * (sVar17 < 0x100) * auVar52[0xe] - (0xff < sVar17),
                      CONCAT16((0 < sVar16) * (sVar16 < 0x100) * auVar52[0xc] - (0xff < sVar16),
                               CONCAT15((0 < sVar15) * (sVar15 < 0x100) * auVar52[10] -
                                        (0xff < sVar15),
                                        CONCAT14((0 < sVar14) * (sVar14 < 0x100) * auVar52[8] -
                                                 (0xff < sVar14),
                                                 CONCAT13((0 < sVar13) * (sVar13 < 0x100) *
                                                          auVar52[6] - (0xff < sVar13),
                                                          CONCAT12((0 < sVar12) * (sVar12 < 0x100) *
                                                                   auVar52[4] - (0xff < sVar12),
                                                                   CONCAT11((0 < sVar11) *
                                                                            (sVar11 < 0x100) *
                                                                            auVar52[2] -
                                                                            (0xff < sVar11),
                                                                            (0 < sVar10) *
                                                                            (sVar10 < 0x100) *
                                                                            auVar52[0] -
                                                                            (0xff < sVar10))))))));
        uVar49 = uVar49 + 8;
      } while (uVar49 < uVar37);
      goto LAB_1407c35a1;
    }
  }
LAB_1407c3731:
  uVar37 = 0;
LAB_1407c35a1:
  if (uVar37 < param_5) {
    do {
      iVar40 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar37 * 4));
      if (0xfe < iVar40) {
        iVar40 = 0xff;
      }
      uVar39 = (undefined1)iVar40;
      if (iVar40 < 1) {
        uVar39 = 0;
      }
      *(undefined1 *)(uVar37 + param_4) = uVar39;
      uVar37 = uVar37 + 1;
    } while (uVar37 < param_5);
  }
  return;
}

