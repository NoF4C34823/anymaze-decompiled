
void FUN_140929460(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  
  lVar12 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar12 = 2;
  }
  uVar10 = 0;
  uVar9 = (longlong)(int)lVar12 + 1;
  if (2 < (longlong)uVar9) {
    uVar9 = uVar10;
  }
  uVar8 = (longlong)(int)uVar9 + 1;
  if (2 < (longlong)uVar8) {
    uVar8 = uVar10;
  }
  uVar3 = *param_6;
  fVar4 = (float)param_6[1];
  auVar17 = ZEXT416(uVar3);
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x10) {
LAB_1409298bb:
      uVar16 = 0;
    }
    else {
      if ((longlong)param_5 < 0x1d) {
        uVar16 = param_5 & 0xfffffffffffffff0;
        lVar11 = param_2 * lVar12 + param_1;
        lVar13 = param_2 * uVar8 + param_1;
        lVar14 = param_2 * uVar9 + param_1;
      }
      else {
        uVar10 = param_4 & 0x1f;
        if (uVar10 != 0) {
          if ((param_4 & 3) != 0) goto LAB_1409298bb;
          uVar10 = 0x20 - uVar10 >> 2;
        }
        if ((longlong)param_5 < (longlong)(uVar10 + 0x10)) goto LAB_1409298bb;
        lVar11 = param_2 * lVar12 + param_1;
        lVar13 = param_2 * uVar8 + param_1;
        lVar14 = param_2 * uVar9 + param_1;
        uVar16 = param_5 - (param_5 - uVar10 & 0xf);
        uVar15 = 0;
        if (uVar10 != 0) {
          do {
            auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(lVar14 + uVar15 * 4))),
                                      ZEXT416((uint)(*(float *)(lVar11 + uVar15 * 4) +
                                                    *(float *)(lVar13 + uVar15 * 4))),auVar17);
            *(int *)(param_4 + uVar15 * 4) = auVar18._0_4_;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar10);
        }
      }
      auVar20._4_4_ = uVar3;
      auVar20._0_4_ = uVar3;
      auVar20._8_4_ = uVar3;
      auVar20._12_4_ = uVar3;
      auVar20._16_4_ = uVar3;
      auVar20._20_4_ = uVar3;
      auVar20._24_4_ = uVar3;
      auVar20._28_4_ = uVar3;
      do {
        pfVar1 = (float *)(lVar11 + uVar10 * 4);
        pfVar2 = (float *)(lVar13 + uVar10 * 4);
        auVar27._0_4_ = *pfVar1 + *pfVar2;
        auVar27._4_4_ = pfVar1[1] + pfVar2[1];
        auVar27._8_4_ = pfVar1[2] + pfVar2[2];
        auVar27._12_4_ = pfVar1[3] + pfVar2[3];
        auVar27._16_4_ = pfVar1[4] + pfVar2[4];
        auVar27._20_4_ = pfVar1[5] + pfVar2[5];
        auVar27._24_4_ = pfVar1[6] + pfVar2[6];
        auVar27._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar2 = (float *)(lVar14 + uVar10 * 4);
        auVar5._4_4_ = fVar4 * pfVar2[1];
        auVar5._0_4_ = fVar4 * *pfVar2;
        auVar5._8_4_ = fVar4 * pfVar2[2];
        auVar5._12_4_ = fVar4 * pfVar2[3];
        auVar5._16_4_ = fVar4 * pfVar2[4];
        auVar5._20_4_ = fVar4 * pfVar2[5];
        auVar5._24_4_ = fVar4 * pfVar2[6];
        auVar5._28_4_ = pfVar1[7];
        auVar18 = vfmadd231ps_fma(auVar5,auVar27,auVar20);
        *(undefined1 (*) [32])(param_4 + uVar10 * 4) = ZEXT1632(auVar18);
        pfVar1 = (float *)(lVar11 + 0x20 + uVar10 * 4);
        pfVar2 = (float *)(lVar13 + 0x20 + uVar10 * 4);
        auVar24._0_4_ = *pfVar1 + *pfVar2;
        auVar24._4_4_ = pfVar1[1] + pfVar2[1];
        auVar24._8_4_ = pfVar1[2] + pfVar2[2];
        auVar24._12_4_ = pfVar1[3] + pfVar2[3];
        auVar24._16_4_ = pfVar1[4] + pfVar2[4];
        auVar24._20_4_ = pfVar1[5] + pfVar2[5];
        auVar24._24_4_ = pfVar1[6] + pfVar2[6];
        auVar24._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar2 = (float *)(lVar14 + 0x20 + uVar10 * 4);
        auVar6._4_4_ = fVar4 * pfVar2[1];
        auVar6._0_4_ = fVar4 * *pfVar2;
        auVar6._8_4_ = fVar4 * pfVar2[2];
        auVar6._12_4_ = fVar4 * pfVar2[3];
        auVar6._16_4_ = fVar4 * pfVar2[4];
        auVar6._20_4_ = fVar4 * pfVar2[5];
        auVar6._24_4_ = fVar4 * pfVar2[6];
        auVar6._28_4_ = pfVar1[7];
        auVar18 = vfmadd231ps_fma(auVar6,auVar24,auVar20);
        *(undefined1 (*) [32])(param_4 + 0x20 + uVar10 * 4) = ZEXT1632(auVar18);
        uVar10 = uVar10 + 0x10;
      } while (uVar10 < uVar16);
    }
    if (param_5 < uVar16 + 1) {
      return;
    }
    param_5 = param_5 - uVar16;
    if ((longlong)param_5 < 4) {
      uVar10 = 0;
    }
    else {
      auVar18._4_4_ = uVar3;
      auVar18._0_4_ = uVar3;
      auVar18._8_4_ = uVar3;
      auVar18._12_4_ = uVar3;
      uVar15 = 0;
      uVar10 = param_5 & 0xfffffffffffffffc;
      do {
        pfVar1 = (float *)(param_2 * lVar12 + param_1 + uVar16 * 4 + uVar15 * 4);
        pfVar2 = (float *)(param_2 * uVar8 + param_1 + uVar16 * 4 + uVar15 * 4);
        auVar25._0_4_ = *pfVar1 + *pfVar2;
        auVar25._4_4_ = pfVar1[1] + pfVar2[1];
        auVar25._8_4_ = pfVar1[2] + pfVar2[2];
        auVar25._12_4_ = pfVar1[3] + pfVar2[3];
        pfVar1 = (float *)(param_2 * uVar9 + param_1 + uVar16 * 4 + uVar15 * 4);
        auVar22._0_4_ = fVar4 * *pfVar1;
        auVar22._4_4_ = fVar4 * pfVar1[1];
        auVar22._8_4_ = fVar4 * pfVar1[2];
        auVar22._12_4_ = fVar4 * pfVar1[3];
        auVar22 = vfmadd231ps_fma(auVar22,auVar25,auVar18);
        *(undefined1 (*) [16])(param_4 + uVar16 * 4 + uVar15 * 4) = auVar22;
        uVar15 = uVar15 + 4;
      } while (uVar15 < uVar10);
    }
    if (param_5 <= uVar10) {
      return;
    }
    do {
      auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(param_1 + param_2 * uVar9 +
                                                                  uVar16 * 4 + uVar10 * 4))),
                                ZEXT416((uint)(*(float *)(lVar12 * param_2 + param_1 + uVar16 * 4 +
                                                         uVar10 * 4) +
                                              *(float *)(uVar8 * param_2 + param_1 + uVar16 * 4 +
                                                        uVar10 * 4))),auVar17);
      *(int *)(param_4 + uVar16 * 4 + uVar10 * 4) = auVar18._0_4_;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar10 = param_4 & 0x1f;
    if (uVar10 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1409298f5;
      uVar10 = 0x20 - uVar10 >> 2;
    }
    if ((longlong)(uVar10 + 8) <= (longlong)param_5) {
      lVar14 = param_2 * lVar12 + param_1;
      lVar13 = param_2 * uVar8 + param_1;
      lVar11 = param_2 * uVar9 + param_1;
      uVar16 = param_5 - (param_5 - uVar10 & 7);
      uVar15 = 0;
      if (uVar10 != 0) {
        do {
          auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(lVar11 + uVar15 * 4))),
                                    ZEXT416((uint)(*(float *)(lVar14 + uVar15 * 4) +
                                                  *(float *)(lVar13 + uVar15 * 4))),auVar17);
          *(int *)(param_4 + uVar15 * 4) = auVar18._0_4_;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar10);
      }
      auVar21._4_4_ = uVar3;
      auVar21._0_4_ = uVar3;
      auVar21._8_4_ = uVar3;
      auVar21._12_4_ = uVar3;
      auVar21._16_4_ = uVar3;
      auVar21._20_4_ = uVar3;
      auVar21._24_4_ = uVar3;
      auVar21._28_4_ = uVar3;
      do {
        pfVar1 = (float *)(lVar14 + uVar10 * 4);
        pfVar2 = (float *)(lVar13 + uVar10 * 4);
        auVar28._0_4_ = *pfVar1 + *pfVar2;
        auVar28._4_4_ = pfVar1[1] + pfVar2[1];
        auVar28._8_4_ = pfVar1[2] + pfVar2[2];
        auVar28._12_4_ = pfVar1[3] + pfVar2[3];
        auVar28._16_4_ = pfVar1[4] + pfVar2[4];
        auVar28._20_4_ = pfVar1[5] + pfVar2[5];
        auVar28._24_4_ = pfVar1[6] + pfVar2[6];
        auVar28._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar2 = (float *)(lVar11 + uVar10 * 4);
        auVar7._4_4_ = fVar4 * pfVar2[1];
        auVar7._0_4_ = fVar4 * *pfVar2;
        auVar7._8_4_ = fVar4 * pfVar2[2];
        auVar7._12_4_ = fVar4 * pfVar2[3];
        auVar7._16_4_ = fVar4 * pfVar2[4];
        auVar7._20_4_ = fVar4 * pfVar2[5];
        auVar7._24_4_ = fVar4 * pfVar2[6];
        auVar7._28_4_ = pfVar1[7];
        auVar18 = vfmadd231ps_fma(auVar7,auVar28,auVar21);
        auVar20 = vmovntps_avx(ZEXT1632(auVar18));
        *(undefined1 (*) [32])(param_4 + uVar10 * 4) = auVar20;
        uVar10 = uVar10 + 8;
      } while (uVar10 < uVar16);
      goto LAB_1409297a6;
    }
  }
LAB_1409298f5:
  uVar16 = 0;
LAB_1409297a6:
  if (uVar16 + 1 <= param_5) {
    param_5 = param_5 - uVar16;
    if ((longlong)param_5 < 4) {
      uVar10 = 0;
    }
    else {
      auVar19._4_4_ = uVar3;
      auVar19._0_4_ = uVar3;
      auVar19._8_4_ = uVar3;
      auVar19._12_4_ = uVar3;
      uVar15 = 0;
      uVar10 = param_5 & 0xfffffffffffffffc;
      do {
        pfVar1 = (float *)(param_2 * lVar12 + param_1 + uVar16 * 4 + uVar15 * 4);
        pfVar2 = (float *)(param_2 * uVar8 + param_1 + uVar16 * 4 + uVar15 * 4);
        auVar26._0_4_ = *pfVar1 + *pfVar2;
        auVar26._4_4_ = pfVar1[1] + pfVar2[1];
        auVar26._8_4_ = pfVar1[2] + pfVar2[2];
        auVar26._12_4_ = pfVar1[3] + pfVar2[3];
        pfVar1 = (float *)(param_2 * uVar9 + param_1 + uVar16 * 4 + uVar15 * 4);
        auVar23._0_4_ = fVar4 * *pfVar1;
        auVar23._4_4_ = fVar4 * pfVar1[1];
        auVar23._8_4_ = fVar4 * pfVar1[2];
        auVar23._12_4_ = fVar4 * pfVar1[3];
        auVar18 = vfmadd231ps_fma(auVar23,auVar26,auVar19);
        *(undefined1 (*) [16])(param_4 + uVar16 * 4 + uVar15 * 4) = auVar18;
        uVar15 = uVar15 + 4;
      } while (uVar15 < uVar10);
    }
    if (uVar10 < param_5) {
      do {
        auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(param_1 + param_2 * uVar9 +
                                                                    uVar16 * 4 + uVar10 * 4))),
                                  ZEXT416((uint)(*(float *)(lVar12 * param_2 + param_1 + uVar16 * 4
                                                           + uVar10 * 4) +
                                                *(float *)(uVar8 * param_2 + param_1 + uVar16 * 4 +
                                                          uVar10 * 4))),auVar17);
        *(int *)(param_4 + uVar16 * 4 + uVar10 * 4) = auVar18._0_4_;
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_5);
    }
  }
  return;
}

