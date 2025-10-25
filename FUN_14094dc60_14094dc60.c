
void FUN_14094dc60(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  uVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0xf < (longlong)param_3) {
    if ((longlong)param_3 < 0x1d) {
      FUN_14094dd39(param_1,param_3 & 0xfffffffffffffff0,param_3,0);
      return;
    }
    uVar19 = param_2 & 0x1f;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14094dfc5;
      uVar19 = 0x20 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 0x10) <= (longlong)param_3) {
      uVar17 = 0;
      uVar18 = param_3 - (param_3 - uVar19 & 0xf);
      if (uVar19 != 0) {
        do {
          auVar20._0_4_ = (float)*(ushort *)(param_1 + uVar17 * 2);
          auVar20._4_8_ = SUB128(ZEXT812(0),4);
          auVar20._12_4_ = 0;
          auVar22._0_4_ =
               (float)((uint)*(ushort *)(param_1 + -4 + uVar17 * 2) +
                      (uint)*(ushort *)(param_1 + 4 + uVar17 * 2));
          auVar22._4_8_ = SUB128(ZEXT812(0),4);
          auVar22._12_4_ = 0;
          auVar22 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)((uint)*(ushort *)
                                                                          (param_1 + -2 + uVar17 * 2
                                                                          ) +
                                                                  (uint)*(ushort *)
                                                                         (param_1 + 2 + uVar17 * 2))
                                                  )),auVar22,ZEXT416(uVar2));
          auVar22 = vfmadd231ss_fma(auVar22,auVar20,ZEXT416(uVar4));
          *(int *)(param_2 + uVar17 * 4) = auVar22._0_4_;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      auVar25._4_4_ = uVar2;
      auVar25._0_4_ = uVar2;
      auVar25._8_4_ = uVar2;
      auVar25._12_4_ = uVar2;
      auVar25._16_4_ = uVar2;
      auVar25._20_4_ = uVar2;
      auVar25._24_4_ = uVar2;
      auVar25._28_4_ = uVar2;
      auVar27._4_4_ = uVar4;
      auVar27._0_4_ = uVar4;
      auVar27._8_4_ = uVar4;
      auVar27._12_4_ = uVar4;
      auVar27._16_4_ = uVar4;
      auVar27._20_4_ = uVar4;
      auVar27._24_4_ = uVar4;
      auVar27._28_4_ = uVar4;
      do {
        auVar5 = *(undefined1 (*) [32])(param_1 + 4 + uVar19 * 2);
        auVar6 = *(undefined1 (*) [32])(param_1 + -4 + uVar19 * 2);
        auVar7 = *(undefined1 (*) [32])(param_1 + 2 + uVar19 * 2);
        auVar8 = *(undefined1 (*) [32])(param_1 + -2 + uVar19 * 2);
        auVar9 = *(undefined1 (*) [32])(param_1 + uVar19 * 2);
        auVar15 = vpmovzxwd_avx2(auVar6._0_16_);
        auVar16 = vpmovzxwd_avx2(auVar5._0_16_);
        auVar15 = vpaddd_avx2(auVar15,auVar16);
        auVar6 = vpmovzxwd_avx2(auVar6._16_16_);
        auVar5 = vpmovzxwd_avx2(auVar5._16_16_);
        auVar6 = vpaddd_avx2(auVar6,auVar5);
        auVar5 = vcvtdq2ps_avx(auVar15);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar15 = vpmovzxwd_avx2(auVar8._0_16_);
        auVar16 = vpmovzxwd_avx2(auVar7._0_16_);
        auVar15 = vpaddd_avx2(auVar15,auVar16);
        auVar8 = vpmovzxwd_avx2(auVar8._16_16_);
        auVar7 = vpmovzxwd_avx2(auVar7._16_16_);
        auVar16 = vpaddd_avx2(auVar8,auVar7);
        auVar7 = vcvtdq2ps_avx(auVar15);
        auVar8 = vcvtdq2ps_avx(auVar16);
        auVar15._4_4_ = fVar3 * auVar7._4_4_;
        auVar15._0_4_ = fVar3 * auVar7._0_4_;
        auVar15._8_4_ = fVar3 * auVar7._8_4_;
        auVar15._12_4_ = fVar3 * auVar7._12_4_;
        auVar15._16_4_ = fVar3 * auVar7._16_4_;
        auVar15._20_4_ = fVar3 * auVar7._20_4_;
        auVar15._24_4_ = fVar3 * auVar7._24_4_;
        auVar15._28_4_ = auVar16._28_4_;
        auVar16._4_4_ = fVar3 * auVar8._4_4_;
        auVar16._0_4_ = fVar3 * auVar8._0_4_;
        auVar16._8_4_ = fVar3 * auVar8._8_4_;
        auVar16._12_4_ = fVar3 * auVar8._12_4_;
        auVar16._16_4_ = fVar3 * auVar8._16_4_;
        auVar16._20_4_ = fVar3 * auVar8._20_4_;
        auVar16._24_4_ = fVar3 * auVar8._24_4_;
        auVar16._28_4_ = auVar7._28_4_;
        auVar22 = vfmadd231ps_fma(auVar15,auVar5,auVar25);
        auVar20 = vfmadd231ps_fma(auVar16,auVar6,auVar25);
        auVar5 = vpmovzxwd_avx2(auVar9._0_16_);
        auVar6 = vpmovzxwd_avx2(auVar9._16_16_);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar22 = vfmadd231ps_fma(ZEXT1632(auVar22),auVar5,auVar27);
        auVar20 = vfmadd231ps_fma(ZEXT1632(auVar20),auVar6,auVar27);
        *(undefined1 (*) [32])(param_2 + uVar19 * 4) = ZEXT1632(auVar22);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4) = ZEXT1632(auVar20);
        uVar19 = uVar19 + 0x10;
      } while (uVar19 < uVar18);
      if (param_3 < uVar18 + 1) {
        return;
      }
      param_3 = param_3 - uVar18;
      if ((longlong)param_3 < 4) {
        FUN_14094df4f();
        return;
      }
      uVar17 = 0;
      auVar23._4_4_ = uVar2;
      auVar23._0_4_ = uVar2;
      auVar23._8_4_ = uVar2;
      auVar23._12_4_ = uVar2;
      uVar19 = param_3 & 0xfffffffffffffffc;
      auVar26._4_4_ = uVar4;
      auVar26._0_4_ = uVar4;
      auVar26._8_4_ = uVar4;
      auVar26._12_4_ = uVar4;
      do {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(param_1 + uVar18 * 2 + 4 + uVar17 * 2);
        auVar22 = vpmovzxwd_avx(auVar10);
        lVar1 = uVar17 + uVar18;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(param_1 + -4 + lVar1 * 2);
        auVar20 = vpmovzxwd_avx(auVar11);
        auVar20 = vpaddd_avx(auVar20,auVar22);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
        auVar22 = vpmovzxwd_avx(auVar12);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
        auVar10 = vpmovzxwd_avx(auVar13);
        auVar22 = vpaddd_avx(auVar22,auVar10);
        auVar22 = vcvtdq2ps_avx(auVar22);
        auVar20 = vcvtdq2ps_avx(auVar20);
        auVar28._0_4_ = fVar3 * auVar22._0_4_;
        auVar28._4_4_ = fVar3 * auVar22._4_4_;
        auVar28._8_4_ = fVar3 * auVar22._8_4_;
        auVar28._12_4_ = fVar3 * auVar22._12_4_;
        auVar20 = vfmadd231ps_fma(auVar28,auVar20,auVar23);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
        auVar22 = vpmovzxwd_avx(auVar14);
        auVar22 = vcvtdq2ps_avx(auVar22);
        auVar22 = vfmadd231ps_fma(auVar20,auVar22,auVar26);
        *(undefined1 (*) [16])(param_2 + uVar18 * 4 + uVar17 * 4) = auVar22;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar19);
      if (param_3 <= uVar19) {
        return;
      }
      param_1 = param_1 + uVar18 * 2;
      do {
        auVar21._0_4_ = (float)*(ushort *)(param_1 + uVar19 * 2);
        auVar21._4_8_ = SUB128(ZEXT812(0),4);
        auVar21._12_4_ = 0;
        auVar24._0_4_ =
             (float)((uint)*(ushort *)(param_1 + -4 + uVar19 * 2) +
                    (uint)*(ushort *)(param_1 + 4 + uVar19 * 2));
        auVar24._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar22 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)((uint)*(ushort *)
                                                                        (param_1 + -2 + uVar19 * 2)
                                                                + (uint)*(ushort *)
                                                                         (param_1 + 2 + uVar19 * 2))
                                                )),auVar24,ZEXT416(uVar2));
        auVar22 = vfmadd231ss_fma(auVar22,auVar21,ZEXT416(uVar4));
        *(int *)(param_2 + uVar18 * 4 + uVar19 * 4) = auVar22._0_4_;
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
      return;
    }
  }
LAB_14094dfc5:
  FUN_14094de85(param_1,0);
  return;
}

