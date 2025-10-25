
void FUN_140091ba0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 uVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar35 = (longlong)param_3 + -1;
  if (SCARRY8((longlong)param_3,-1) != lVar35 < 0) {
    lVar35 = 2;
  }
  fVar5 = *param_6;
  fVar6 = param_6[1];
  lVar34 = (longlong)(int)lVar35 + 1;
  if (2 < lVar34) {
    lVar34 = 0;
  }
  lVar30 = (longlong)(int)lVar34 + 1;
  if (2 < lVar30) {
    lVar30 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_140092094:
      uVar33 = 0;
      if (param_5 == 0) goto LAB_140091e49;
      uVar29 = 0;
      uVar27 = param_5;
    }
    else {
      uVar26 = param_2 * 3 + param_1;
      uVar27 = uVar26 & 0xf;
      if (uVar27 != 0) {
        if ((uVar26 & 3) != 0) goto LAB_140092094;
        uVar27 = 0x10 - uVar27 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar27 + 8)) goto LAB_140092094;
      uVar33 = param_5 - (param_5 - uVar27 & 7);
      lVar28 = param_2 * lVar34 + param_1;
      lVar36 = param_2 * lVar35 + param_1;
      lVar25 = param_2 * lVar30 + param_1;
      uVar29 = 0;
      if (uVar27 != 0) {
        do {
          *(float *)(uVar26 + uVar29 * 4) =
               (*(float *)(lVar36 + uVar29 * 4) + *(float *)(lVar25 + uVar29 * 4)) * fVar5 +
               *(float *)(lVar28 + uVar29 * 4) * fVar6;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar27);
      }
      if ((lVar28 + uVar27 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar36 + uVar27 * 4);
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar2 = (float *)(lVar25 + uVar27 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar28 + uVar27 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(uVar26 + uVar27 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar4[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar4[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          pfVar1 = (float *)(lVar36 + 0x10 + uVar27 * 4);
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar2 = (float *)(lVar25 + 0x10 + uVar27 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar28 + 0x10 + uVar27 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(uVar26 + 0x10 + uVar27 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar4[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar4[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar33);
      }
      else {
        do {
          pfVar1 = (float *)(lVar36 + uVar27 * 4);
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar2 = (float *)(lVar25 + uVar27 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar28 + uVar27 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(uVar26 + uVar27 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar4[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar4[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          pfVar1 = (float *)(lVar36 + 0x10 + uVar27 * 4);
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar2 = (float *)(lVar25 + 0x10 + uVar27 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar28 + 0x10 + uVar27 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(uVar26 + 0x10 + uVar27 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar4[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar4[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          uVar27 = uVar27 + 8;
        } while (uVar27 < uVar33);
      }
      if (param_5 < uVar33 + 1) goto LAB_140091e49;
      uVar27 = param_5 - uVar33;
      if ((longlong)uVar27 < 4) {
        uVar29 = 0;
      }
      else {
        uVar37 = 0;
        uVar29 = uVar27 & 0xfffffffffffffffc;
        do {
          pfVar1 = (float *)(lVar36 + uVar33 * 4 + uVar37 * 4);
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar2 = (float *)(lVar25 + uVar33 * 4 + uVar37 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar28 + uVar33 * 4 + uVar37 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(uVar26 + uVar33 * 4 + uVar37 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar16 + fVar19) * fVar5 + fVar22 * fVar6;
          pfVar4[2] = (fVar17 + fVar20) * fVar5 + fVar23 * fVar6;
          pfVar4[3] = (fVar18 + fVar21) * fVar5 + fVar24 * fVar6;
          uVar37 = uVar37 + 4;
        } while (uVar37 < uVar29);
      }
    }
    if (uVar29 < uVar27) {
      do {
        *(float *)(param_2 * 3 + param_1 + uVar33 * 4 + uVar29 * 4) =
             (*(float *)(lVar35 * param_2 + param_1 + uVar33 * 4 + uVar29 * 4) +
             *(float *)(lVar30 * param_2 + param_1 + uVar33 * 4 + uVar29 * 4)) * fVar5 +
             *(float *)(lVar34 * param_2 + param_1 + uVar33 * 4 + uVar29 * 4) * fVar6;
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar27);
    }
  }
LAB_140091e49:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar27 = param_2 * 3 + param_1;
      uVar26 = uVar27 & 0xf;
      if (uVar26 != 0) {
        if ((uVar27 & 3) != 0) goto LAB_1400920b2;
        uVar26 = 0x10 - uVar26 >> 2;
      }
      if ((longlong)(uVar26 + 8) <= (longlong)param_5) {
        uVar29 = 0;
        uVar33 = param_5 - (param_5 - uVar26 & 7);
        if (uVar26 != 0) {
          do {
            iVar32 = (int)ROUND(*(float *)(uVar27 + uVar29 * 4));
            if (0xfe < iVar32) {
              iVar32 = 0xff;
            }
            uVar31 = (undefined1)iVar32;
            if (iVar32 < 1) {
              uVar31 = 0;
            }
            *(undefined1 *)(uVar29 + param_4) = uVar31;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar26);
        }
        do {
          pfVar1 = (float *)(uVar27 + uVar26 * 4);
          auVar40._0_4_ = (int)*pfVar1;
          auVar40._4_4_ = (int)pfVar1[1];
          auVar40._8_4_ = (int)pfVar1[2];
          auVar40._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(uVar27 + 0x10 + uVar26 * 4);
          auVar39._4_4_ = (int)pfVar1[1];
          auVar39._0_4_ = (int)*pfVar1;
          auVar39._8_4_ = (int)pfVar1[2];
          auVar39._12_4_ = (int)pfVar1[3];
          auVar39 = packssdw(auVar40,auVar39);
          sVar7 = auVar39._0_2_;
          sVar8 = auVar39._2_2_;
          sVar9 = auVar39._4_2_;
          sVar10 = auVar39._6_2_;
          sVar11 = auVar39._8_2_;
          sVar12 = auVar39._10_2_;
          sVar13 = auVar39._12_2_;
          sVar14 = auVar39._14_2_;
          *(ulonglong *)(uVar26 + param_4) =
               CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar39[0xe] - (0xff < sVar14),
                        CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar39[0xc] - (0xff < sVar13),
                                 CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar39[10] -
                                          (0xff < sVar12),
                                          CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar39[8] -
                                                   (0xff < sVar11),
                                                   CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                            auVar39[6] - (0xff < sVar10),
                                                            CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                     auVar39[4] - (0xff < sVar9),
                                                                     CONCAT11((0 < sVar8) *
                                                                              (sVar8 < 0x100) *
                                                                              auVar39[2] -
                                                                              (0xff < sVar8),
                                                                              (0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              auVar39[0] -
                                                                              (0xff < sVar7))))))));
          uVar26 = uVar26 + 8;
        } while (uVar26 < uVar33);
        goto LAB_140092043;
      }
    }
LAB_1400920b2:
    uVar33 = 0;
LAB_140092043:
    if (param_5 <= uVar33) {
      return;
    }
    do {
      iVar32 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar33 * 4));
      if (0xfe < iVar32) {
        iVar32 = 0xff;
      }
      uVar31 = (undefined1)iVar32;
      if (iVar32 < 1) {
        uVar31 = 0;
      }
      *(undefined1 *)(uVar33 + param_4) = uVar31;
      uVar33 = uVar33 + 1;
    } while (uVar33 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar27 = param_2 * 3 + param_1;
    uVar26 = uVar27 & 0xf;
    if (uVar26 != 0) {
      if ((uVar27 & 3) != 0) goto LAB_1400920ab;
      uVar26 = 0x10 - uVar26 >> 2;
    }
    if ((longlong)(uVar26 + 8) <= (longlong)param_5) {
      uVar29 = 0;
      uVar33 = param_5 - (param_5 - uVar26 & 7);
      if (uVar26 != 0) {
        do {
          iVar32 = (int)ROUND(*(float *)(uVar27 + uVar29 * 4));
          if (0xfe < iVar32) {
            iVar32 = 0xff;
          }
          uVar31 = (undefined1)iVar32;
          if (iVar32 < 1) {
            uVar31 = 0;
          }
          *(undefined1 *)(uVar29 + param_4) = uVar31;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar26);
      }
      do {
        pfVar1 = (float *)(uVar27 + uVar26 * 4);
        auVar38._0_4_ = (int)*pfVar1;
        auVar38._4_4_ = (int)pfVar1[1];
        auVar38._8_4_ = (int)pfVar1[2];
        auVar38._12_4_ = (int)pfVar1[3];
        pfVar1 = (float *)(uVar27 + 0x10 + uVar26 * 4);
        auVar15._4_4_ = (int)pfVar1[1];
        auVar15._0_4_ = (int)*pfVar1;
        auVar15._8_4_ = (int)pfVar1[2];
        auVar15._12_4_ = (int)pfVar1[3];
        auVar39 = packssdw(auVar38,auVar15);
        sVar7 = auVar39._0_2_;
        sVar8 = auVar39._2_2_;
        sVar9 = auVar39._4_2_;
        sVar10 = auVar39._6_2_;
        sVar11 = auVar39._8_2_;
        sVar12 = auVar39._10_2_;
        sVar13 = auVar39._12_2_;
        sVar14 = auVar39._14_2_;
        *(ulonglong *)(uVar26 + param_4) =
             CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar39[0xe] - (0xff < sVar14),
                      CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar39[0xc] - (0xff < sVar13),
                               CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar39[10] -
                                        (0xff < sVar12),
                                        CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar39[8] -
                                                 (0xff < sVar11),
                                                 CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar39[6] - (0xff < sVar10),
                                                          CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                   auVar39[4] - (0xff < sVar9),
                                                                   CONCAT11((0 < sVar8) *
                                                                            (sVar8 < 0x100) *
                                                                            auVar39[2] -
                                                                            (0xff < sVar8),
                                                                            (0 < sVar7) *
                                                                            (sVar7 < 0x100) *
                                                                            auVar39[0] -
                                                                            (0xff < sVar7))))))));
        uVar26 = uVar26 + 8;
      } while (uVar26 < uVar33);
      goto LAB_140091f23;
    }
  }
LAB_1400920ab:
  uVar33 = 0;
LAB_140091f23:
  if (uVar33 < param_5) {
    do {
      iVar32 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar33 * 4));
      if (0xfe < iVar32) {
        iVar32 = 0xff;
      }
      uVar31 = (undefined1)iVar32;
      if (iVar32 < 1) {
        uVar31 = 0;
      }
      *(undefined1 *)(uVar33 + param_4) = uVar31;
      uVar33 = uVar33 + 1;
    } while (uVar33 < param_5);
  }
  return;
}

