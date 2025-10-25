
void FUN_1406e8ec0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined1 uVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  lVar31 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar31 = 2;
  }
  lVar35 = (longlong)(int)lVar31 + 1;
  if (2 < lVar35) {
    lVar35 = 0;
  }
  lVar36 = (longlong)(int)lVar35 + 1;
  fVar5 = *param_6;
  fVar6 = param_6[1];
  if (2 < lVar36) {
    lVar36 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1406e938d:
      uVar34 = 0;
    }
    else {
      uVar28 = param_2 * 3 + param_1;
      uVar30 = uVar28 & 0xf;
      if (uVar30 != 0) {
        if ((uVar28 & 3) != 0) goto LAB_1406e938d;
        uVar30 = 0x10 - uVar30 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar30 + 8)) goto LAB_1406e938d;
      lVar27 = param_2 * lVar35 + param_1;
      lVar26 = param_2 * lVar31 + param_1;
      lVar25 = param_2 * lVar36 + param_1;
      uVar34 = param_5 - (param_5 - uVar30 & 7);
      uVar29 = 0;
      if (uVar30 != 0) {
        do {
          *(float *)(uVar28 + uVar29 * 4) =
               (*(float *)(lVar26 + uVar29 * 4) + *(float *)(lVar25 + uVar29 * 4)) * fVar5 +
               *(float *)(lVar27 + uVar29 * 4) * fVar6;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar30);
      }
      if ((uVar30 * 4 + lVar27 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(lVar26 + uVar30 * 4);
          fVar16 = pfVar4[1];
          fVar17 = pfVar4[2];
          fVar18 = pfVar4[3];
          pfVar1 = (float *)(lVar25 + uVar30 * 4);
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar2 = (float *)(lVar27 + uVar30 * 4);
          fVar22 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar24 = pfVar2[3];
          pfVar3 = (float *)(uVar28 + uVar30 * 4);
          *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
          pfVar3[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar3[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar3[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          pfVar1 = (float *)(lVar26 + 0x10 + uVar30 * 4);
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar2 = (float *)(lVar25 + 0x10 + uVar30 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar27 + 0x10 + uVar30 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(uVar28 + 0x10 + uVar30 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar4[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar4[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          uVar30 = uVar30 + 8;
        } while (uVar30 < uVar34);
      }
      else {
        do {
          pfVar4 = (float *)(lVar26 + uVar30 * 4);
          fVar16 = pfVar4[1];
          fVar17 = pfVar4[2];
          fVar18 = pfVar4[3];
          pfVar1 = (float *)(lVar25 + uVar30 * 4);
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar2 = (float *)(lVar27 + uVar30 * 4);
          fVar22 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar24 = pfVar2[3];
          pfVar3 = (float *)(uVar28 + uVar30 * 4);
          *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
          pfVar3[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar3[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar3[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          pfVar1 = (float *)(lVar26 + 0x10 + uVar30 * 4);
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar2 = (float *)(lVar25 + 0x10 + uVar30 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar27 + 0x10 + uVar30 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(uVar28 + 0x10 + uVar30 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar4[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar4[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          uVar30 = uVar30 + 8;
        } while (uVar30 < uVar34);
      }
    }
    uVar30 = 0;
    if (uVar34 + 1 <= param_5) {
      lVar25 = uVar34 * 4;
      do {
        *(float *)(param_2 * 3 + param_1 + lVar25 + uVar30 * 4) =
             (*(float *)(lVar31 * param_2 + param_1 + lVar25 + uVar30 * 4) +
             *(float *)(lVar36 * param_2 + param_1 + lVar25 + uVar30 * 4)) * fVar5 +
             *(float *)(lVar35 * param_2 + param_1 + lVar25 + uVar30 * 4) * fVar6;
        uVar30 = uVar30 + 1;
      } while (uVar30 < param_5 - uVar34);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar28 = param_2 * 3 + param_1;
      uVar30 = uVar28 & 0xf;
      if (uVar30 != 0) {
        if ((uVar28 & 3) != 0) goto LAB_1406e939c;
        uVar30 = 0x10 - uVar30 >> 2;
      }
      if ((longlong)(uVar30 + 8) <= (longlong)param_5) {
        uVar29 = 0;
        uVar34 = param_5 - (param_5 - uVar30 & 7);
        if (uVar30 != 0) {
          do {
            iVar33 = (int)ROUND(*(float *)(uVar28 + uVar29 * 4));
            if (0xfe < iVar33) {
              iVar33 = 0xff;
            }
            uVar32 = (undefined1)iVar33;
            if (iVar33 < 1) {
              uVar32 = 0;
            }
            *(undefined1 *)(uVar29 + param_4) = uVar32;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar30);
        }
        do {
          pfVar1 = (float *)(uVar28 + uVar30 * 4);
          auVar39._0_4_ = (int)*pfVar1;
          auVar39._4_4_ = (int)pfVar1[1];
          auVar39._8_4_ = (int)pfVar1[2];
          auVar39._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(uVar28 + 0x10 + uVar30 * 4);
          auVar38._4_4_ = (int)pfVar1[1];
          auVar38._0_4_ = (int)*pfVar1;
          auVar38._8_4_ = (int)pfVar1[2];
          auVar38._12_4_ = (int)pfVar1[3];
          auVar38 = packssdw(auVar39,auVar38);
          sVar7 = auVar38._0_2_;
          sVar8 = auVar38._2_2_;
          sVar9 = auVar38._4_2_;
          sVar10 = auVar38._6_2_;
          sVar11 = auVar38._8_2_;
          sVar12 = auVar38._10_2_;
          sVar13 = auVar38._12_2_;
          sVar14 = auVar38._14_2_;
          *(ulonglong *)(uVar30 + param_4) =
               CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar38[0xe] - (0xff < sVar14),
                        CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar38[0xc] - (0xff < sVar13),
                                 CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar38[10] -
                                          (0xff < sVar12),
                                          CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar38[8] -
                                                   (0xff < sVar11),
                                                   CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                            auVar38[6] - (0xff < sVar10),
                                                            CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                     auVar38[4] - (0xff < sVar9),
                                                                     CONCAT11((0 < sVar8) *
                                                                              (sVar8 < 0x100) *
                                                                              auVar38[2] -
                                                                              (0xff < sVar8),
                                                                              (0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              auVar38[0] -
                                                                              (0xff < sVar7))))))));
          uVar30 = uVar30 + 8;
        } while (uVar30 < uVar34);
        goto LAB_1406e9344;
      }
    }
LAB_1406e939c:
    uVar34 = 0;
LAB_1406e9344:
    if (param_5 <= uVar34) {
      return;
    }
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar34 * 4));
      if (0xfe < iVar33) {
        iVar33 = 0xff;
      }
      uVar32 = (undefined1)iVar33;
      if (iVar33 < 1) {
        uVar32 = 0;
      }
      *(undefined1 *)(uVar34 + param_4) = uVar32;
      uVar34 = uVar34 + 1;
    } while (uVar34 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar28 = param_2 * 3 + param_1;
    uVar30 = uVar28 & 0xf;
    if (uVar30 != 0) {
      if ((uVar28 & 3) != 0) goto LAB_1406e9395;
      uVar30 = 0x10 - uVar30 >> 2;
    }
    if ((longlong)(uVar30 + 8) <= (longlong)param_5) {
      uVar29 = 0;
      uVar34 = param_5 - (param_5 - uVar30 & 7);
      if (uVar30 != 0) {
        do {
          iVar33 = (int)ROUND(*(float *)(uVar28 + uVar29 * 4));
          if (0xfe < iVar33) {
            iVar33 = 0xff;
          }
          uVar32 = (undefined1)iVar33;
          if (iVar33 < 1) {
            uVar32 = 0;
          }
          *(undefined1 *)(uVar29 + param_4) = uVar32;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar30);
      }
      do {
        pfVar1 = (float *)(uVar28 + uVar30 * 4);
        auVar37._0_4_ = (int)*pfVar1;
        auVar37._4_4_ = (int)pfVar1[1];
        auVar37._8_4_ = (int)pfVar1[2];
        auVar37._12_4_ = (int)pfVar1[3];
        pfVar1 = (float *)(uVar28 + 0x10 + uVar30 * 4);
        auVar15._4_4_ = (int)pfVar1[1];
        auVar15._0_4_ = (int)*pfVar1;
        auVar15._8_4_ = (int)pfVar1[2];
        auVar15._12_4_ = (int)pfVar1[3];
        auVar38 = packssdw(auVar37,auVar15);
        sVar7 = auVar38._0_2_;
        sVar8 = auVar38._2_2_;
        sVar9 = auVar38._4_2_;
        sVar10 = auVar38._6_2_;
        sVar11 = auVar38._8_2_;
        sVar12 = auVar38._10_2_;
        sVar13 = auVar38._12_2_;
        sVar14 = auVar38._14_2_;
        *(ulonglong *)(uVar30 + param_4) =
             CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar38[0xe] - (0xff < sVar14),
                      CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar38[0xc] - (0xff < sVar13),
                               CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar38[10] -
                                        (0xff < sVar12),
                                        CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar38[8] -
                                                 (0xff < sVar11),
                                                 CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar38[6] - (0xff < sVar10),
                                                          CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                   auVar38[4] - (0xff < sVar9),
                                                                   CONCAT11((0 < sVar8) *
                                                                            (sVar8 < 0x100) *
                                                                            auVar38[2] -
                                                                            (0xff < sVar8),
                                                                            (0 < sVar7) *
                                                                            (sVar7 < 0x100) *
                                                                            auVar38[0] -
                                                                            (0xff < sVar7))))))));
        uVar30 = uVar30 + 8;
      } while (uVar30 < uVar34);
      goto LAB_1406e9224;
    }
  }
LAB_1406e9395:
  uVar34 = 0;
LAB_1406e9224:
  if (uVar34 < param_5) {
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar34 * 4));
      if (0xfe < iVar33) {
        iVar33 = 0xff;
      }
      uVar32 = (undefined1)iVar33;
      if (iVar33 < 1) {
        uVar32 = 0;
      }
      *(undefined1 *)(uVar34 + param_4) = uVar32;
      uVar34 = uVar34 + 1;
    } while (uVar34 < param_5);
  }
  return;
}

