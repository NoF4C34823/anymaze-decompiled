
void FUN_140211700(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  longlong lStack_60;
  longlong lStack_58;
  
  lVar13 = (longlong)param_3;
  uVar3 = *param_6;
  lVar14 = lVar13 + -2;
  if (SCARRY8(lVar13,-2) != lVar13 + -2 < 0) {
    lVar14 = lVar13 + 3;
  }
  lVar13 = (longlong)(int)lVar14 + 1;
  fVar4 = (float)param_6[1];
  fVar5 = (float)param_6[2];
  uVar9 = 0;
  if (4 < lVar13) {
    lVar13 = 0;
  }
  lVar15 = (longlong)(int)lVar13 + 1;
  if (4 < lVar15) {
    lVar15 = 0;
  }
  lVar11 = (longlong)(int)lVar15 + 1;
  if (4 < lVar11) {
    lVar11 = 0;
  }
  lVar12 = (longlong)(int)lVar11 + 1;
  if (4 < lVar12) {
    lVar12 = 0;
  }
  auVar22 = ZEXT416(uVar3);
  auVar23 = ZEXT416((uint)fVar4);
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar19 = param_4 & 0x1f;
      if (uVar19 != 0) {
        if ((param_4 & 3) != 0) goto LAB_140211cac;
        uVar19 = 0x20 - uVar19 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar19 + 8)) {
        uVar9 = 0;
      }
      else {
        lVar18 = param_2 * lVar13 + param_1;
        lVar20 = param_2 * lVar11 + param_1;
        lVar17 = param_2 * lVar14 + param_1;
        lVar10 = param_2 * lVar12 + param_1;
        lVar21 = param_2 * lVar15 + param_1;
        uVar9 = param_5 - (param_5 - uVar19 & 7);
        if (uVar19 != 0) {
          uVar16 = 0;
          do {
            auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar17 + uVar16 * 4) +
                                                    *(float *)(lVar10 + uVar16 * 4))),auVar22,
                                      ZEXT416((uint)(fVar5 * *(float *)(lVar21 + uVar16 * 4))));
            auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar18 + uVar16 * 4) +
                                                    *(float *)(lVar20 + uVar16 * 4))),auVar23,
                                      auVar24);
            *(int *)(param_4 + uVar16 * 4) = auVar24._0_4_;
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar19);
        }
        auVar26._4_4_ = uVar3;
        auVar26._0_4_ = uVar3;
        auVar26._8_4_ = uVar3;
        auVar26._12_4_ = uVar3;
        auVar26._16_4_ = uVar3;
        auVar26._20_4_ = uVar3;
        auVar26._24_4_ = uVar3;
        auVar26._28_4_ = uVar3;
        auVar29._4_4_ = fVar5;
        auVar29._0_4_ = fVar5;
        auVar29._8_4_ = fVar5;
        auVar29._12_4_ = fVar5;
        auVar29._16_4_ = fVar5;
        auVar29._20_4_ = fVar5;
        auVar29._24_4_ = fVar5;
        auVar29._28_4_ = fVar5;
        do {
          pfVar1 = (float *)(lVar17 + uVar19 * 4);
          pfVar2 = (float *)(lVar10 + uVar19 * 4);
          auVar32._0_4_ = *pfVar1 + *pfVar2;
          auVar32._4_4_ = pfVar1[1] + pfVar2[1];
          auVar32._8_4_ = pfVar1[2] + pfVar2[2];
          auVar32._12_4_ = pfVar1[3] + pfVar2[3];
          auVar32._16_4_ = pfVar1[4] + pfVar2[4];
          auVar32._20_4_ = pfVar1[5] + pfVar2[5];
          auVar32._24_4_ = pfVar1[6] + pfVar2[6];
          auVar32._28_4_ = pfVar1[7] + pfVar2[7];
          pfVar1 = (float *)(lVar18 + uVar19 * 4);
          pfVar2 = (float *)(lVar20 + uVar19 * 4);
          auVar6._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
          auVar6._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
          auVar6._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
          auVar6._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
          auVar6._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
          auVar6._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
          auVar6._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
          auVar6._28_4_ = pfVar1[7] + pfVar2[7];
          auVar24 = vfmadd231ps_fma(auVar6,auVar32,auVar26);
          auVar24 = vfmadd231ps_fma(ZEXT1632(auVar24),auVar29,
                                    *(undefined1 (*) [32])(lVar21 + uVar19 * 4));
          auVar6 = vmovntps_avx(ZEXT1632(auVar24));
          *(undefined1 (*) [32])(param_4 + uVar19 * 4) = auVar6;
          uVar19 = uVar19 + 8;
        } while (uVar19 < uVar9);
      }
    }
LAB_140211cac:
    if (param_5 <= uVar9) {
      return;
    }
    do {
      auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar14 * param_2 + param_1 + uVar9 * 4) +
                                              *(float *)(lVar12 * param_2 + param_1 + uVar9 * 4))),
                                auVar22,ZEXT416((uint)(fVar5 * *(float *)(param_1 + param_2 * lVar15
                                                                         + uVar9 * 4))));
      auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar13 * param_2 + param_1 + uVar9 * 4) +
                                              *(float *)(lVar11 * param_2 + param_1 + uVar9 * 4))),
                                auVar23,auVar24);
      *(int *)(param_4 + uVar9 * 4) = auVar24._0_4_;
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x10) {
LAB_140211d2f:
    uVar9 = 0;
  }
  else {
    if ((longlong)param_5 < 0x1d) {
      lStack_60 = param_2 * lVar12 + param_1;
      lStack_58 = param_2 * lVar11 + param_1;
      uVar9 = param_5 & 0xfffffffffffffff0;
      uVar19 = 0;
      lVar18 = param_2 * lVar14 + param_1;
      lVar17 = param_2 * lVar13 + param_1;
      lVar10 = param_2 * lVar15 + param_1;
    }
    else {
      uVar19 = param_4 & 0x1f;
      if (uVar19 != 0) {
        if ((param_4 & 3) != 0) goto LAB_140211d2f;
        uVar19 = 0x20 - uVar19 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar19 + 0x10)) goto LAB_140211d2f;
      lStack_60 = param_2 * lVar12 + param_1;
      lStack_58 = param_2 * lVar11 + param_1;
      lVar18 = param_2 * lVar14 + param_1;
      lVar17 = param_2 * lVar13 + param_1;
      lVar10 = param_2 * lVar15 + param_1;
      uVar9 = param_5 - (param_5 - uVar19 & 0xf);
      if (uVar19 != 0) {
        uVar16 = 0;
        do {
          auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar18 + uVar16 * 4) +
                                                  *(float *)(lStack_60 + uVar16 * 4))),auVar22,
                                    ZEXT416((uint)(fVar5 * *(float *)(lVar10 + uVar16 * 4))));
          auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar17 + uVar16 * 4) +
                                                  *(float *)(lStack_58 + uVar16 * 4))),auVar23,
                                    auVar24);
          *(int *)(param_4 + uVar16 * 4) = auVar24._0_4_;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar19);
      }
    }
    auVar25._4_4_ = uVar3;
    auVar25._0_4_ = uVar3;
    auVar25._8_4_ = uVar3;
    auVar25._12_4_ = uVar3;
    auVar25._16_4_ = uVar3;
    auVar25._20_4_ = uVar3;
    auVar25._24_4_ = uVar3;
    auVar25._28_4_ = uVar3;
    auVar28._4_4_ = fVar5;
    auVar28._0_4_ = fVar5;
    auVar28._8_4_ = fVar5;
    auVar28._12_4_ = fVar5;
    auVar28._16_4_ = fVar5;
    auVar28._20_4_ = fVar5;
    auVar28._24_4_ = fVar5;
    auVar28._28_4_ = fVar5;
    do {
      pfVar1 = (float *)(lVar18 + uVar19 * 4);
      pfVar2 = (float *)(lStack_60 + uVar19 * 4);
      auVar34._0_4_ = *pfVar1 + *pfVar2;
      auVar34._4_4_ = pfVar1[1] + pfVar2[1];
      auVar34._8_4_ = pfVar1[2] + pfVar2[2];
      auVar34._12_4_ = pfVar1[3] + pfVar2[3];
      auVar34._16_4_ = pfVar1[4] + pfVar2[4];
      auVar34._20_4_ = pfVar1[5] + pfVar2[5];
      auVar34._24_4_ = pfVar1[6] + pfVar2[6];
      auVar34._28_4_ = pfVar1[7] + pfVar2[7];
      pfVar1 = (float *)(lVar17 + uVar19 * 4);
      pfVar2 = (float *)(lStack_58 + uVar19 * 4);
      auVar7._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
      auVar7._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
      auVar7._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
      auVar7._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
      auVar7._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
      auVar7._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
      auVar7._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
      auVar7._28_4_ = pfVar1[7] + pfVar2[7];
      auVar24 = vfmadd231ps_fma(auVar7,auVar34,auVar25);
      auVar24 = vfmadd231ps_fma(ZEXT1632(auVar24),auVar28,
                                *(undefined1 (*) [32])(lVar10 + uVar19 * 4));
      *(undefined1 (*) [32])(param_4 + uVar19 * 4) = ZEXT1632(auVar24);
      pfVar1 = (float *)(lVar18 + 0x20 + uVar19 * 4);
      pfVar2 = (float *)(lStack_60 + 0x20 + uVar19 * 4);
      auVar31._0_4_ = *pfVar1 + *pfVar2;
      auVar31._4_4_ = pfVar1[1] + pfVar2[1];
      auVar31._8_4_ = pfVar1[2] + pfVar2[2];
      auVar31._12_4_ = pfVar1[3] + pfVar2[3];
      auVar31._16_4_ = pfVar1[4] + pfVar2[4];
      auVar31._20_4_ = pfVar1[5] + pfVar2[5];
      auVar31._24_4_ = pfVar1[6] + pfVar2[6];
      auVar31._28_4_ = pfVar1[7] + pfVar2[7];
      pfVar1 = (float *)(lVar17 + 0x20 + uVar19 * 4);
      pfVar2 = (float *)(lStack_58 + 0x20 + uVar19 * 4);
      auVar8._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
      auVar8._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
      auVar8._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
      auVar8._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
      auVar8._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
      auVar8._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
      auVar8._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
      auVar8._28_4_ = pfVar1[7] + pfVar2[7];
      auVar24 = vfmadd231ps_fma(auVar8,auVar31,auVar25);
      auVar24 = vfmadd231ps_fma(ZEXT1632(auVar24),auVar28,
                                *(undefined1 (*) [32])(lVar10 + 0x20 + uVar19 * 4));
      *(undefined1 (*) [32])(param_4 + 0x20 + uVar19 * 4) = ZEXT1632(auVar24);
      uVar19 = uVar19 + 0x10;
    } while (uVar19 < uVar9);
  }
  if (uVar9 + 1 <= param_5) {
    param_5 = param_5 - uVar9;
    if ((longlong)param_5 < 4) {
      uVar19 = 0;
    }
    else {
      auVar24._4_4_ = uVar3;
      auVar24._0_4_ = uVar3;
      auVar24._8_4_ = uVar3;
      auVar24._12_4_ = uVar3;
      auVar27._4_4_ = fVar5;
      auVar27._0_4_ = fVar5;
      auVar27._8_4_ = fVar5;
      auVar27._12_4_ = fVar5;
      uVar16 = 0;
      uVar19 = param_5 & 0xfffffffffffffffc;
      do {
        pfVar1 = (float *)(param_2 * lVar14 + param_1 + uVar9 * 4 + uVar16 * 4);
        pfVar2 = (float *)(param_2 * lVar12 + param_1 + uVar9 * 4 + uVar16 * 4);
        auVar30._0_4_ = *pfVar1 + *pfVar2;
        auVar30._4_4_ = pfVar1[1] + pfVar2[1];
        auVar30._8_4_ = pfVar1[2] + pfVar2[2];
        auVar30._12_4_ = pfVar1[3] + pfVar2[3];
        pfVar1 = (float *)(param_2 * lVar13 + param_1 + uVar9 * 4 + uVar16 * 4);
        pfVar2 = (float *)(param_2 * lVar11 + param_1 + uVar9 * 4 + uVar16 * 4);
        auVar33._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar33._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar33._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar33._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar30 = vfmadd231ps_fma(auVar33,auVar30,auVar24);
        auVar30 = vfmadd231ps_fma(auVar30,auVar27,
                                  *(undefined1 (*) [16])
                                   (param_2 * lVar15 + param_1 + uVar9 * 4 + uVar16 * 4));
        *(undefined1 (*) [16])(param_4 + uVar9 * 4 + uVar16 * 4) = auVar30;
        uVar16 = uVar16 + 4;
      } while (uVar16 < uVar19);
    }
    if (uVar19 < param_5) {
      do {
        auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar14 * param_2 + param_1 + uVar9 * 4 +
                                                           uVar19 * 4) +
                                                *(float *)(lVar12 * param_2 + param_1 + uVar9 * 4 +
                                                          uVar19 * 4))),auVar22,
                                  ZEXT416((uint)(fVar5 * *(float *)(param_1 + param_2 * lVar15 +
                                                                    uVar9 * 4 + uVar19 * 4))));
        auVar24 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar13 * param_2 + param_1 + uVar9 * 4 +
                                                           uVar19 * 4) +
                                                *(float *)(lVar11 * param_2 + param_1 + uVar9 * 4 +
                                                          uVar19 * 4))),auVar23,auVar24);
        *(int *)(param_4 + uVar9 * 4 + uVar19 * 4) = auVar24._0_4_;
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_5);
    }
  }
  return;
}

