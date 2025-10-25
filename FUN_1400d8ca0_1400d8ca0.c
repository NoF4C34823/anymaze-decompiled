
void FUN_1400d8ca0(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  
  uVar1 = *param_4;
  fVar2 = (float)param_4[1];
  uVar13 = param_3 * 3;
  if ((longlong)uVar13 < 1) {
    return;
  }
  if (0xf < (longlong)uVar13) {
    if ((longlong)uVar13 < 0x1d) {
      FUN_1400d8d5d(uVar13 & 0xfffffffffffffff0,uVar13,param_2,0);
      return;
    }
    uVar14 = param_2 & 0x1f;
    if (uVar14 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1400d8f09;
      uVar14 = 0x20 - uVar14 >> 2;
    }
    if ((longlong)(uVar14 + 0x10) <= (longlong)uVar13) {
      uVar11 = 0;
      uVar12 = uVar13 - (uVar13 - uVar14 & 0xf);
      if (uVar14 != 0) {
        do {
          auVar15._0_4_ =
               (float)((uint)*(ushort *)(param_1 + -6 + uVar11 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar11 * 2));
          auVar15._4_8_ = SUB128(ZEXT812(0),4);
          auVar15._12_4_ = 0;
          auVar15 = vfmadd231ss_fma(ZEXT416((uint)(fVar2 * (float)*(ushort *)(param_1 + uVar11 * 2))
                                           ),auVar15,ZEXT416(uVar1));
          *(int *)(param_2 + uVar11 * 4) = auVar15._0_4_;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar14);
      }
      auVar18._4_4_ = uVar1;
      auVar18._0_4_ = uVar1;
      auVar18._8_4_ = uVar1;
      auVar18._12_4_ = uVar1;
      auVar18._16_4_ = uVar1;
      auVar18._20_4_ = uVar1;
      auVar18._24_4_ = uVar1;
      auVar18._28_4_ = uVar1;
      do {
        auVar3 = *(undefined1 (*) [32])(param_1 + 6 + uVar14 * 2);
        auVar4 = *(undefined1 (*) [32])(param_1 + -6 + uVar14 * 2);
        auVar5 = *(undefined1 (*) [32])(param_1 + uVar14 * 2);
        auVar9 = vpmovzxwd_avx2(auVar4._0_16_);
        auVar10 = vpmovzxwd_avx2(auVar3._0_16_);
        auVar9 = vpaddd_avx2(auVar9,auVar10);
        auVar9 = vcvtdq2ps_avx(auVar9);
        auVar4 = vpmovzxwd_avx2(auVar4._16_16_);
        auVar3 = vpmovzxwd_avx2(auVar3._16_16_);
        auVar3 = vpaddd_avx2(auVar4,auVar3);
        auVar3 = vcvtdq2ps_avx(auVar3);
        auVar4 = vpmovzxwd_avx2(auVar5._0_16_);
        auVar4 = vcvtdq2ps_avx(auVar4);
        auVar10._4_4_ = fVar2 * auVar4._4_4_;
        auVar10._0_4_ = fVar2 * auVar4._0_4_;
        auVar10._8_4_ = fVar2 * auVar4._8_4_;
        auVar10._12_4_ = fVar2 * auVar4._12_4_;
        auVar10._16_4_ = fVar2 * auVar4._16_4_;
        auVar10._20_4_ = fVar2 * auVar4._20_4_;
        auVar10._24_4_ = fVar2 * auVar4._24_4_;
        auVar10._28_4_ = auVar4._28_4_;
        auVar4 = vpmovzxwd_avx2(auVar5._16_16_);
        auVar4 = vcvtdq2ps_avx(auVar4);
        auVar15 = vfmadd231ps_fma(auVar10,auVar9,auVar18);
        auVar5._4_4_ = fVar2 * auVar4._4_4_;
        auVar5._0_4_ = fVar2 * auVar4._0_4_;
        auVar5._8_4_ = fVar2 * auVar4._8_4_;
        auVar5._12_4_ = fVar2 * auVar4._12_4_;
        auVar5._16_4_ = fVar2 * auVar4._16_4_;
        auVar5._20_4_ = fVar2 * auVar4._20_4_;
        auVar5._24_4_ = fVar2 * auVar4._24_4_;
        auVar5._28_4_ = auVar9._28_4_;
        *(undefined1 (*) [32])(param_2 + uVar14 * 4) = ZEXT1632(auVar15);
        auVar15 = vfmadd231ps_fma(auVar5,auVar3,auVar18);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar14 * 4) = ZEXT1632(auVar15);
        uVar14 = uVar14 + 0x10;
      } while (uVar14 < uVar12);
      if (uVar13 < uVar12 + 1) {
        return;
      }
      uVar13 = uVar13 - uVar12;
      if ((longlong)uVar13 < 4) {
        FUN_1400d8ea1();
        return;
      }
      uVar11 = 0;
      auVar19._4_4_ = uVar1;
      auVar19._0_4_ = uVar1;
      auVar19._8_4_ = uVar1;
      auVar19._12_4_ = uVar1;
      uVar14 = uVar13 & 0xfffffffffffffffc;
      do {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(param_1 + uVar12 * 2 + 6 + uVar11 * 2);
        auVar15 = vpmovzxwd_avx(auVar6);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(param_1 + -6 + (uVar11 + uVar12) * 2);
        auVar6 = vpmovzxwd_avx(auVar7);
        auVar6 = vpaddd_avx(auVar6,auVar15);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(param_1 + (uVar11 + uVar12) * 2);
        auVar15 = vpmovzxwd_avx(auVar8);
        auVar15 = vcvtdq2ps_avx(auVar15);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar16._0_4_ = fVar2 * auVar15._0_4_;
        auVar16._4_4_ = fVar2 * auVar15._4_4_;
        auVar16._8_4_ = fVar2 * auVar15._8_4_;
        auVar16._12_4_ = fVar2 * auVar15._12_4_;
        auVar15 = vfmadd231ps_fma(auVar16,auVar6,auVar19);
        *(undefined1 (*) [16])(param_2 + uVar12 * 4 + uVar11 * 4) = auVar15;
        uVar11 = uVar11 + 4;
      } while (uVar11 < uVar14);
      if (uVar13 <= uVar14) {
        return;
      }
      param_1 = param_1 + uVar12 * 2;
      do {
        auVar17._0_4_ =
             (float)((uint)*(ushort *)(param_1 + -6 + uVar14 * 2) +
                    (uint)*(ushort *)(param_1 + 6 + uVar14 * 2));
        auVar17._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar15 = vfmadd231ss_fma(ZEXT416((uint)(fVar2 * (float)*(ushort *)(param_1 + uVar14 * 2))),
                                  auVar17,ZEXT416(uVar1));
        *(int *)(param_2 + uVar12 * 4 + uVar14 * 4) = auVar15._0_4_;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar13);
      return;
    }
  }
LAB_1400d8f09:
  FUN_1400d8e1c(0);
  return;
}

