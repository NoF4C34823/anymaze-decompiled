
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140905d20(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [16];
  longlong lStack_60;
  longlong lStack_58;
  
  lVar15 = (longlong)param_3;
  uVar3 = *param_6;
  lVar16 = lVar15 + -2;
  if (SCARRY8(lVar15,-2) != lVar15 + -2 < 0) {
    lVar16 = lVar15 + 3;
  }
  lVar15 = (longlong)(int)lVar16 + 1;
  fVar4 = (float)param_6[1];
  fVar5 = (float)param_6[2];
  if (4 < lVar15) {
    lVar15 = 0;
  }
  lVar14 = (longlong)(int)lVar15 + 1;
  if (4 < lVar14) {
    lVar14 = 0;
  }
  lVar13 = (longlong)(int)lVar14 + 1;
  if (4 < lVar13) {
    lVar13 = 0;
  }
  lVar12 = (longlong)(int)lVar13 + 1;
  if (4 < lVar12) {
    lVar12 = 0;
  }
  auVar24 = ZEXT416(uVar3);
  auVar25 = ZEXT416((uint)fVar4);
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x10) {
LAB_140906435:
      uVar17 = 0;
    }
    else {
      if ((longlong)param_5 < 0x960) {
        lStack_58 = param_2 * lVar12 + param_1;
        lStack_60 = param_2 * lVar13 + param_1;
        uVar17 = param_5 & 0xfffffffffffffff0;
        uVar23 = 0;
        lVar22 = param_2 * lVar16 + param_1;
        lVar20 = param_2 * lVar15 + param_1;
        lVar11 = param_2 * lVar14 + param_1;
      }
      else {
        uVar23 = param_4 & 0x1f;
        if (uVar23 != 0) {
          if ((param_4 & 1) != 0) goto LAB_140906435;
          uVar23 = 0x20 - uVar23 >> 1;
        }
        if ((longlong)param_5 < (longlong)(uVar23 + 0x10)) goto LAB_140906435;
        lStack_58 = param_2 * lVar12 + param_1;
        lStack_60 = param_2 * lVar13 + param_1;
        lVar22 = param_2 * lVar16 + param_1;
        lVar20 = param_2 * lVar15 + param_1;
        lVar11 = param_2 * lVar14 + param_1;
        uVar17 = param_5 - (param_5 - uVar23 & 0xf);
        if (uVar23 != 0) {
          uVar19 = 0;
          do {
            auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar22 + uVar19 * 4) +
                                                   *(float *)(lStack_58 + uVar19 * 4))),auVar24,
                                     ZEXT416((uint)(fVar5 * *(float *)(lVar11 + uVar19 * 4))));
            auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar20 + uVar19 * 4) +
                                                   *(float *)(lStack_60 + uVar19 * 4))),auVar25,
                                     auVar7);
            *(short *)(param_4 + uVar19 * 2) = (short)(int)ROUND(auVar7._0_4_);
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar23);
        }
      }
      auVar10 = _DAT_14308d360;
      auVar27._4_4_ = uVar3;
      auVar27._0_4_ = uVar3;
      auVar27._8_4_ = uVar3;
      auVar27._12_4_ = uVar3;
      auVar27._16_4_ = uVar3;
      auVar27._20_4_ = uVar3;
      auVar27._24_4_ = uVar3;
      auVar27._28_4_ = uVar3;
      auVar30._4_4_ = fVar5;
      auVar30._0_4_ = fVar5;
      auVar30._8_4_ = fVar5;
      auVar30._12_4_ = fVar5;
      auVar30._16_4_ = fVar5;
      auVar30._20_4_ = fVar5;
      auVar30._24_4_ = fVar5;
      auVar30._28_4_ = fVar5;
      do {
        pfVar1 = (float *)(lVar22 + uVar23 * 4);
        pfVar2 = (float *)(lStack_58 + uVar23 * 4);
        auVar34._0_4_ = *pfVar1 + *pfVar2;
        auVar34._4_4_ = pfVar1[1] + pfVar2[1];
        auVar34._8_4_ = pfVar1[2] + pfVar2[2];
        auVar34._12_4_ = pfVar1[3] + pfVar2[3];
        auVar34._16_4_ = pfVar1[4] + pfVar2[4];
        auVar34._20_4_ = pfVar1[5] + pfVar2[5];
        auVar34._24_4_ = pfVar1[6] + pfVar2[6];
        auVar34._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar1 = (float *)(lVar22 + 0x20 + uVar23 * 4);
        pfVar2 = (float *)(lStack_58 + 0x20 + uVar23 * 4);
        auVar35._0_4_ = *pfVar1 + *pfVar2;
        auVar35._4_4_ = pfVar1[1] + pfVar2[1];
        auVar35._8_4_ = pfVar1[2] + pfVar2[2];
        auVar35._12_4_ = pfVar1[3] + pfVar2[3];
        auVar35._16_4_ = pfVar1[4] + pfVar2[4];
        auVar35._20_4_ = pfVar1[5] + pfVar2[5];
        auVar35._24_4_ = pfVar1[6] + pfVar2[6];
        auVar35._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar1 = (float *)(lVar20 + uVar23 * 4);
        pfVar2 = (float *)(lStack_60 + uVar23 * 4);
        auVar6._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar6._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar6._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar6._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar6._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
        auVar6._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
        auVar6._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
        auVar6._28_4_ = pfVar1[7] + pfVar2[7];
        auVar7 = vfmadd231ps_fma(auVar6,auVar34,auVar27);
        auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar30,
                                 *(undefined1 (*) [32])(lVar11 + uVar23 * 4));
        auVar6 = vcvtps2dq_avx(ZEXT1632(auVar7));
        auVar34 = vpand_avx2(auVar6,auVar10);
        pfVar1 = (float *)(lVar20 + 0x20 + uVar23 * 4);
        pfVar2 = (float *)(lStack_60 + 0x20 + uVar23 * 4);
        auVar8._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar8._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar8._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar8._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar8._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
        auVar8._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
        auVar8._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
        auVar8._28_4_ = pfVar1[7] + pfVar2[7];
        auVar7 = vfmadd231ps_fma(auVar8,auVar35,auVar27);
        auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar30,
                                 *(undefined1 (*) [32])(lVar11 + 0x20 + uVar23 * 4));
        auVar6 = vcvtps2dq_avx(ZEXT1632(auVar7));
        auVar6 = vpand_avx2(auVar6,auVar10);
        auVar6 = vpackusdw_avx2(auVar34,auVar6);
        auVar6 = vpermq_avx2(auVar6,0xd8);
        *(undefined1 (*) [32])(param_4 + uVar23 * 2) = auVar6;
        uVar23 = uVar23 + 0x10;
      } while (uVar23 < uVar17);
    }
    auVar7 = _DAT_14308d600;
    if (param_5 < uVar17 + 1) {
      return;
    }
    param_5 = param_5 - uVar17;
    if ((longlong)param_5 < 4) {
      uVar23 = 0;
    }
    else {
      auVar26._4_4_ = uVar3;
      auVar26._0_4_ = uVar3;
      auVar26._8_4_ = uVar3;
      auVar26._12_4_ = uVar3;
      uVar19 = 0;
      uVar23 = param_5 & 0xfffffffffffffffc;
      auVar29._4_4_ = fVar5;
      auVar29._0_4_ = fVar5;
      auVar29._8_4_ = fVar5;
      auVar29._12_4_ = fVar5;
      do {
        pfVar1 = (float *)(param_2 * lVar16 + param_1 + uVar17 * 4 + uVar19 * 4);
        pfVar2 = (float *)(param_2 * lVar12 + param_1 + uVar17 * 4 + uVar19 * 4);
        auVar32._0_4_ = *pfVar1 + *pfVar2;
        auVar32._4_4_ = pfVar1[1] + pfVar2[1];
        auVar32._8_4_ = pfVar1[2] + pfVar2[2];
        auVar32._12_4_ = pfVar1[3] + pfVar2[3];
        pfVar1 = (float *)(param_2 * lVar15 + param_1 + uVar17 * 4 + uVar19 * 4);
        pfVar2 = (float *)(param_2 * lVar13 + param_1 + uVar17 * 4 + uVar19 * 4);
        auVar36._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar36._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar36._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar36._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar32 = vfmadd231ps_fma(auVar36,auVar32,auVar26);
        auVar32 = vfmadd231ps_fma(auVar32,auVar29,
                                  *(undefined1 (*) [16])
                                   (param_2 * lVar14 + param_1 + uVar17 * 4 + uVar19 * 4));
        auVar32 = vcvtps2dq_avx(auVar32);
        auVar32 = vpand_avx(auVar32,auVar7);
        auVar32 = vpackusdw_avx(auVar32,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar17 * 2 + uVar19 * 2) = auVar32._0_8_;
        uVar19 = uVar19 + 4;
      } while (uVar19 < uVar23);
    }
    if (param_5 <= uVar23) {
      return;
    }
    do {
      auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar16 * param_2 + param_1 + uVar17 * 4 +
                                                        uVar23 * 4) +
                                             *(float *)(lVar12 * param_2 + param_1 + uVar17 * 4 +
                                                       uVar23 * 4))),auVar24,
                               ZEXT416((uint)(fVar5 * *(float *)(param_1 + param_2 * lVar14 +
                                                                 uVar17 * 4 + uVar23 * 4))));
      auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar15 * param_2 + param_1 + uVar17 * 4 +
                                                        uVar23 * 4) +
                                             *(float *)(lVar13 * param_2 + param_1 + uVar17 * 4 +
                                                       uVar23 * 4))),auVar25,auVar7);
      *(short *)(param_4 + uVar17 * 2 + uVar23 * 2) = (short)(int)ROUND(auVar7._0_4_);
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar17 = param_4 & 0x1f;
    if (uVar17 != 0) {
      if ((param_4 & 1) != 0) goto LAB_14090648b;
      uVar17 = 0x20 - uVar17 >> 1;
    }
    if ((longlong)(uVar17 + 8) <= (longlong)param_5) {
      lVar11 = param_2 * lVar16 + param_1;
      lVar22 = param_2 * lVar12 + param_1;
      lVar18 = param_2 * lVar15 + param_1;
      lVar21 = param_2 * lVar13 + param_1;
      lVar20 = param_2 * lVar14 + param_1;
      uVar23 = param_5 - (param_5 - uVar17 & 7);
      if (uVar17 != 0) {
        uVar19 = 0;
        do {
          auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar11 + uVar19 * 4) +
                                                 *(float *)(lVar22 + uVar19 * 4))),auVar24,
                                   ZEXT416((uint)(fVar5 * *(float *)(lVar20 + uVar19 * 4))));
          auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar18 + uVar19 * 4) +
                                                 *(float *)(lVar21 + uVar19 * 4))),auVar25,auVar7);
          *(short *)(param_4 + uVar19 * 2) = (short)(int)ROUND(auVar7._0_4_);
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar17);
      }
      auVar10 = _DAT_14308d360;
      auVar28._4_4_ = uVar3;
      auVar28._0_4_ = uVar3;
      auVar28._8_4_ = uVar3;
      auVar28._12_4_ = uVar3;
      auVar28._16_4_ = uVar3;
      auVar28._20_4_ = uVar3;
      auVar28._24_4_ = uVar3;
      auVar28._28_4_ = uVar3;
      auVar31._4_4_ = fVar5;
      auVar31._0_4_ = fVar5;
      auVar31._8_4_ = fVar5;
      auVar31._12_4_ = fVar5;
      auVar31._16_4_ = fVar5;
      auVar31._20_4_ = fVar5;
      auVar31._24_4_ = fVar5;
      auVar31._28_4_ = fVar5;
      do {
        pfVar1 = (float *)(lVar11 + uVar17 * 4);
        pfVar2 = (float *)(lVar22 + uVar17 * 4);
        auVar33._0_4_ = *pfVar1 + *pfVar2;
        auVar33._4_4_ = pfVar1[1] + pfVar2[1];
        auVar33._8_4_ = pfVar1[2] + pfVar2[2];
        auVar33._12_4_ = pfVar1[3] + pfVar2[3];
        auVar33._16_4_ = pfVar1[4] + pfVar2[4];
        auVar33._20_4_ = pfVar1[5] + pfVar2[5];
        auVar33._24_4_ = pfVar1[6] + pfVar2[6];
        auVar33._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar1 = (float *)(lVar18 + uVar17 * 4);
        pfVar2 = (float *)(lVar21 + uVar17 * 4);
        auVar9._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar9._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar9._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar9._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar9._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
        auVar9._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
        auVar9._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
        auVar9._28_4_ = pfVar1[7] + pfVar2[7];
        auVar7 = vfmadd231ps_fma(auVar9,auVar33,auVar28);
        auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar31,
                                 *(undefined1 (*) [32])(lVar20 + uVar17 * 4));
        auVar27 = vcvtps2dq_avx(ZEXT1632(auVar7));
        auVar27 = vpand_avx2(auVar27,auVar10);
        auVar27 = vpackusdw_avx2(auVar27,(undefined1  [32])0x0);
        auVar27 = vpermq_avx2(auVar27,0xd8);
        auVar7 = vmovntdq_avx(auVar27._0_16_);
        *(undefined1 (*) [16])(param_4 + uVar17 * 2) = auVar7;
        uVar17 = uVar17 + 8;
      } while (uVar17 < uVar23);
      goto LAB_1409063ae;
    }
  }
LAB_14090648b:
  uVar23 = 0;
LAB_1409063ae:
  if (uVar23 < param_5) {
    do {
      auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar16 * param_2 + param_1 + uVar23 * 4) +
                                             *(float *)(lVar12 * param_2 + param_1 + uVar23 * 4))),
                               auVar24,ZEXT416((uint)(fVar5 * *(float *)(param_1 + param_2 * lVar14
                                                                        + uVar23 * 4))));
      auVar7 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar15 * param_2 + param_1 + uVar23 * 4) +
                                             *(float *)(lVar13 * param_2 + param_1 + uVar23 * 4))),
                               auVar25,auVar7);
      *(short *)(param_4 + uVar23 * 2) = (short)(int)ROUND(auVar7._0_4_);
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_5);
  }
  return;
}

