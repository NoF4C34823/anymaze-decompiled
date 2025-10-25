
void FUN_140922b00(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  
  uVar20 = param_3 * 3;
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  fVar4 = (float)param_4[2];
  fVar5 = (float)param_4[3];
  if ((longlong)uVar20 < 1) {
    return;
  }
  if (0x1f < (longlong)uVar20) {
    uVar22 = param_2 & 0x1f;
    if (uVar22 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140923097;
      uVar22 = 0x20 - uVar22 >> 2;
    }
    if ((longlong)(uVar22 + 0x20) <= (longlong)uVar20) {
      uVar19 = 0;
      uVar21 = uVar20 - (uVar20 - uVar22 & 0x1f);
      if (uVar22 != 0) {
        do {
          auVar25._0_4_ =
               (float)((uint)*(byte *)((uVar19 - 6) + param_1) +
                      (uint)*(byte *)(uVar19 + 6 + param_1));
          auVar25._4_12_ = in_ZMM3._4_12_;
          auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (float)((uint)*(byte *)((uVar19 - 3) +
                                                                                  param_1) +
                                                                  (uint)*(byte *)(uVar19 + 3 +
                                                                                 param_1)))),auVar25
                                    ,ZEXT416((uint)fVar3));
          auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (float)*(byte *)(uVar19 + param_1))),
                                    ZEXT416((uint)(float)((uint)*(byte *)((uVar19 - 9) + param_1) +
                                                         (uint)*(byte *)(uVar19 + 9 + param_1))),
                                    ZEXT416(uVar2));
          in_ZMM3 = ZEXT1664(auVar18);
          *(float *)(param_2 + uVar19 * 4) = auVar25._0_4_ + auVar18._0_4_;
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar22);
      }
      auVar27._4_4_ = uVar2;
      auVar27._0_4_ = uVar2;
      auVar27._8_4_ = uVar2;
      auVar27._12_4_ = uVar2;
      auVar27._16_4_ = uVar2;
      auVar27._20_4_ = uVar2;
      auVar27._24_4_ = uVar2;
      auVar27._28_4_ = uVar2;
      in_ZMM3 = ZEXT3264(auVar27);
      auVar23._4_4_ = fVar4;
      auVar23._0_4_ = fVar4;
      auVar23._8_4_ = fVar4;
      auVar23._12_4_ = fVar4;
      auVar23._16_4_ = fVar4;
      auVar23._20_4_ = fVar4;
      auVar23._24_4_ = fVar4;
      auVar23._28_4_ = fVar4;
      auVar29._4_4_ = fVar5;
      auVar29._0_4_ = fVar5;
      auVar29._8_4_ = fVar5;
      auVar29._12_4_ = fVar5;
      auVar29._16_4_ = fVar5;
      auVar29._20_4_ = fVar5;
      auVar29._24_4_ = fVar5;
      auVar29._28_4_ = fVar5;
      do {
        auVar24 = *(undefined1 (*) [32])(uVar22 + 9 + param_1);
        auVar6 = *(undefined1 (*) [32])((uVar22 - 9) + param_1);
        auVar31 = *(undefined1 (*) [32])(uVar22 + 6 + param_1);
        auVar28 = *(undefined1 (*) [32])((uVar22 - 6) + param_1);
        auVar30 = *(undefined1 (*) [32])((uVar22 - 3) + param_1);
        auVar7 = *(undefined1 (*) [32])(uVar22 + 3 + param_1);
        auVar12 = vpmovzxbw_avx2(auVar6._0_16_);
        auVar13 = vpmovzxbw_avx2(auVar24._0_16_);
        auVar12 = vpaddw_avx2(auVar12,auVar13);
        auVar6 = vpmovzxbw_avx2(auVar6._16_16_);
        auVar24 = vpmovzxbw_avx2(auVar24._16_16_);
        auVar13 = vpaddw_avx2(auVar6,auVar24);
        auVar6 = vpmovzxwd_avx2(auVar12._16_16_);
        auVar24 = vpmovzxwd_avx2(auVar12._0_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar12 = vpmovzxwd_avx2(auVar13._0_16_);
        auVar13 = vpmovzxwd_avx2(auVar13._16_16_);
        auVar12 = vcvtdq2ps_avx(auVar12);
        auVar13 = vcvtdq2ps_avx(auVar13);
        auVar14 = vpmovzxbw_avx2(auVar28._0_16_);
        auVar15 = vpmovzxbw_avx2(auVar31._0_16_);
        auVar14 = vpaddw_avx2(auVar14,auVar15);
        auVar28 = vpmovzxbw_avx2(auVar28._16_16_);
        auVar31 = vpmovzxbw_avx2(auVar31._16_16_);
        auVar28 = vpaddw_avx2(auVar28,auVar31);
        auVar31 = vpmovzxwd_avx2(auVar14._0_16_);
        auVar31 = vcvtdq2ps_avx(auVar31);
        auVar15._4_4_ = fVar3 * auVar31._4_4_;
        auVar15._0_4_ = fVar3 * auVar31._0_4_;
        auVar15._8_4_ = fVar3 * auVar31._8_4_;
        auVar15._12_4_ = fVar3 * auVar31._12_4_;
        auVar15._16_4_ = fVar3 * auVar31._16_4_;
        auVar15._20_4_ = fVar3 * auVar31._20_4_;
        auVar15._24_4_ = fVar3 * auVar31._24_4_;
        auVar15._28_4_ = auVar31._28_4_;
        auVar31 = vpmovzxwd_avx2(auVar14._16_16_);
        auVar31 = vcvtdq2ps_avx(auVar31);
        auVar25 = vfmadd231ps_fma(auVar15,auVar24,auVar27);
        auVar14._4_4_ = fVar3 * auVar31._4_4_;
        auVar14._0_4_ = fVar3 * auVar31._0_4_;
        auVar14._8_4_ = fVar3 * auVar31._8_4_;
        auVar14._12_4_ = fVar3 * auVar31._12_4_;
        auVar14._16_4_ = fVar3 * auVar31._16_4_;
        auVar14._20_4_ = fVar3 * auVar31._20_4_;
        auVar14._24_4_ = fVar3 * auVar31._24_4_;
        auVar14._28_4_ = auVar24._28_4_;
        auVar18 = vfmadd231ps_fma(auVar14,auVar6,auVar27);
        auVar24 = vpmovzxwd_avx2(auVar28._0_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar6 = vpmovzxwd_avx2(auVar28._16_16_);
        auVar31._0_4_ = fVar3 * auVar24._0_4_;
        auVar31._4_4_ = fVar3 * auVar24._4_4_;
        auVar31._8_4_ = fVar3 * auVar24._8_4_;
        auVar31._12_4_ = fVar3 * auVar24._12_4_;
        auVar31._16_4_ = fVar3 * auVar24._16_4_;
        auVar31._20_4_ = fVar3 * auVar24._20_4_;
        auVar31._24_4_ = fVar3 * auVar24._24_4_;
        auVar31._28_4_ = 0;
        auVar24 = vcvtdq2ps_avx(auVar6);
        auVar16 = vfmadd231ps_fma(auVar31,auVar12,auVar27);
        auVar6._4_4_ = fVar3 * auVar24._4_4_;
        auVar6._0_4_ = fVar3 * auVar24._0_4_;
        auVar6._8_4_ = fVar3 * auVar24._8_4_;
        auVar6._12_4_ = fVar3 * auVar24._12_4_;
        auVar6._16_4_ = fVar3 * auVar24._16_4_;
        auVar6._20_4_ = fVar3 * auVar24._20_4_;
        auVar6._24_4_ = fVar3 * auVar24._24_4_;
        auVar6._28_4_ = auVar12._28_4_;
        auVar17 = vfmadd231ps_fma(auVar6,auVar13,auVar27);
        auVar24 = vpmovzxbw_avx2(auVar30._0_16_);
        auVar31 = vpmovzxbw_avx2(auVar30._16_16_);
        auVar6 = vpmovzxbw_avx2(auVar7._0_16_);
        auVar6 = vpaddw_avx2(auVar24,auVar6);
        auVar24 = vpmovzxbw_avx2(auVar7._16_16_);
        auVar31 = vpaddw_avx2(auVar31,auVar24);
        auVar24 = vpmovzxwd_avx2(auVar6._0_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar25 = vfmadd231ps_fma(ZEXT1632(auVar25),auVar24,auVar23);
        auVar24 = vpmovzxwd_avx2(auVar6._16_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar18 = vfmadd231ps_fma(ZEXT1632(auVar18),auVar24,auVar23);
        auVar24 = vpmovzxwd_avx2(auVar31._0_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar24,auVar23);
        auVar24 = vpmovzxwd_avx2(auVar31._16_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar17 = vfmadd231ps_fma(ZEXT1632(auVar17),auVar24,auVar23);
        auVar6 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar22 + param_1),0));
        auVar31 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar22 + param_1),0x10));
        auVar24 = vpmovzxwd_avx2(auVar6._0_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar25 = vfmadd231ps_fma(ZEXT1632(auVar25),auVar24,auVar29);
        *(undefined1 (*) [32])(param_2 + uVar22 * 4) = ZEXT1632(auVar25);
        auVar24 = vpmovzxwd_avx2(auVar6._16_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar25 = vfmadd231ps_fma(ZEXT1632(auVar18),auVar24,auVar29);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar22 * 4) = ZEXT1632(auVar25);
        auVar24 = vpmovzxwd_avx2(auVar31._0_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar25 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar24,auVar29);
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar22 * 4) = ZEXT1632(auVar25);
        auVar24 = vpmovzxwd_avx2(auVar31._16_16_);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar25 = vfmadd231ps_fma(ZEXT1632(auVar17),auVar24,auVar29);
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar22 * 4) = ZEXT1632(auVar25);
        uVar22 = uVar22 + 0x20;
      } while (uVar22 < uVar21);
      goto LAB_140922ecd;
    }
  }
LAB_140923097:
  uVar21 = 0;
LAB_140922ecd:
  if (uVar21 + 1 <= uVar20) {
    uVar20 = uVar20 - uVar21;
    if ((longlong)uVar20 < 8) {
      uVar22 = 0;
    }
    else {
      uVar19 = 0;
      auVar28._4_4_ = uVar2;
      auVar28._0_4_ = uVar2;
      auVar28._8_4_ = uVar2;
      auVar28._12_4_ = uVar2;
      auVar28._16_4_ = uVar2;
      auVar28._20_4_ = uVar2;
      auVar28._24_4_ = uVar2;
      auVar28._28_4_ = uVar2;
      in_ZMM3 = ZEXT3264(auVar28);
      uVar22 = uVar20 & 0xfffffffffffffff8;
      auVar24._4_4_ = fVar4;
      auVar24._0_4_ = fVar4;
      auVar24._8_4_ = fVar4;
      auVar24._12_4_ = fVar4;
      auVar24._16_4_ = fVar4;
      auVar24._20_4_ = fVar4;
      auVar24._24_4_ = fVar4;
      auVar24._28_4_ = fVar4;
      auVar30._4_4_ = fVar5;
      auVar30._0_4_ = fVar5;
      auVar30._8_4_ = fVar5;
      auVar30._12_4_ = fVar5;
      auVar30._16_4_ = fVar5;
      auVar30._20_4_ = fVar5;
      auVar30._24_4_ = fVar5;
      auVar30._28_4_ = fVar5;
      do {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(uVar21 + param_1 + 9 + uVar19);
        auVar25 = vpmovzxbw_avx(auVar18);
        lVar1 = param_1 + uVar21;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)((uVar19 - 9) + lVar1);
        auVar18 = vpmovzxbw_avx(auVar16);
        auVar25 = vpaddw_avx(auVar18,auVar25);
        auVar23 = vpmovzxwd_avx2(auVar25);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulonglong *)((uVar19 - 6) + lVar1);
        auVar25 = vpmovzxbw_avx(auVar17);
        auVar23 = vcvtdq2ps_avx(auVar23);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(uVar19 + 6 + lVar1);
        auVar18 = vpmovzxbw_avx(auVar8);
        auVar25 = vpaddw_avx(auVar25,auVar18);
        auVar27 = vpmovzxwd_avx2(auVar25);
        auVar27 = vcvtdq2ps_avx(auVar27);
        auVar7._4_4_ = fVar3 * auVar27._4_4_;
        auVar7._0_4_ = fVar3 * auVar27._0_4_;
        auVar7._8_4_ = fVar3 * auVar27._8_4_;
        auVar7._12_4_ = fVar3 * auVar27._12_4_;
        auVar7._16_4_ = fVar3 * auVar27._16_4_;
        auVar7._20_4_ = fVar3 * auVar27._20_4_;
        auVar7._24_4_ = fVar3 * auVar27._24_4_;
        auVar7._28_4_ = auVar27._28_4_;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(uVar19 + 3 + lVar1);
        auVar25 = vpmovzxbw_avx(auVar9);
        auVar16 = vfmadd231ps_fma(auVar7,auVar23,auVar28);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)((uVar19 - 3) + lVar1);
        auVar18 = vpmovzxbw_avx(auVar10);
        auVar25 = vpaddw_avx(auVar18,auVar25);
        auVar23 = vpmovzxwd_avx2(auVar25);
        auVar23 = vcvtdq2ps_avx(auVar23);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(uVar19 + lVar1);
        auVar25 = vpmovzxbw_avx(auVar11);
        auVar18 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar23,auVar24);
        auVar23 = vpmovzxwd_avx2(auVar25);
        auVar23 = vcvtdq2ps_avx(auVar23);
        auVar25 = vfmadd231ps_fma(ZEXT1632(auVar18),auVar23,auVar30);
        *(undefined1 (*) [32])(param_2 + uVar21 * 4 + uVar19 * 4) = ZEXT1632(auVar25);
        uVar19 = uVar19 + 8;
      } while (uVar19 < uVar22);
    }
    if (uVar22 < uVar20) {
      param_1 = param_1 + uVar21;
      do {
        auVar26._0_4_ =
             (float)((uint)*(byte *)((uVar22 - 6) + param_1) + (uint)*(byte *)(uVar22 + 6 + param_1)
                    );
        auVar26._4_12_ = in_ZMM3._4_12_;
        auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (float)((uint)*(byte *)((uVar22 - 3) +
                                                                                param_1) +
                                                                (uint)*(byte *)(uVar22 + 3 + param_1
                                                                               )))),auVar26,
                                  ZEXT416((uint)fVar3));
        auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (float)*(byte *)(uVar22 + param_1))),
                                  ZEXT416((uint)(float)((uint)*(byte *)((uVar22 - 9) + param_1) +
                                                       (uint)*(byte *)(uVar22 + 9 + param_1))),
                                  ZEXT416(uVar2));
        in_ZMM3 = ZEXT1664(auVar18);
        *(float *)(param_2 + uVar21 * 4 + uVar22 * 4) = auVar25._0_4_ + auVar18._0_4_;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar20);
    }
  }
  return;
}

