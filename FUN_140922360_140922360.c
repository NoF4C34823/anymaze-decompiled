
void FUN_140922360(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  uVar14 = param_3 * 3;
  if ((longlong)uVar14 < 1) {
    return;
  }
  if (0x1f < (longlong)uVar14) {
    uVar17 = param_2 & 0x1f;
    if (uVar17 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14092266b;
      uVar17 = 0x20 - uVar17 >> 2;
    }
    if ((longlong)(uVar17 + 0x20) <= (longlong)uVar14) {
      uVar16 = 0;
      uVar15 = uVar14 - (uVar14 - uVar17 & 0x1f);
      if (uVar17 != 0) {
        do {
          auVar19._0_4_ =
               (float)((uint)*(byte *)((uVar16 - 3) + param_1) +
                      (uint)*(byte *)(uVar16 + 3 + param_1));
          auVar19._4_8_ = SUB128(ZEXT812(0),4);
          auVar19._12_4_ = 0;
          auVar19 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)*(byte *)(uVar16 + param_1))),
                                    auVar19,ZEXT416(uVar2));
          *(int *)(param_2 + uVar16 * 4) = auVar19._0_4_;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar17);
      }
      auVar18._4_4_ = uVar2;
      auVar18._0_4_ = uVar2;
      auVar18._8_4_ = uVar2;
      auVar18._12_4_ = uVar2;
      auVar18._16_4_ = uVar2;
      auVar18._20_4_ = uVar2;
      auVar18._24_4_ = uVar2;
      auVar18._28_4_ = uVar2;
      do {
        auVar21 = *(undefined1 (*) [32])((uVar17 - 3) + param_1);
        auVar4 = *(undefined1 (*) [32])(uVar17 + 3 + param_1);
        auVar8 = vpmovzxbw_avx2(auVar21._0_16_);
        auVar21 = vpmovzxbw_avx2(auVar21._16_16_);
        auVar9 = vpmovzxbw_avx2(auVar4._0_16_);
        auVar8 = vpaddw_avx2(auVar8,auVar9);
        auVar4 = vpmovzxbw_avx2(auVar4._16_16_);
        auVar9 = vpaddw_avx2(auVar21,auVar4);
        auVar21 = vpmovzxwd_avx2(auVar8._0_16_);
        auVar21 = vcvtdq2ps_avx(auVar21);
        auVar4 = vpmovzxwd_avx2(auVar8._16_16_);
        auVar4 = vcvtdq2ps_avx(auVar4);
        auVar8 = vpmovzxwd_avx2(auVar9._0_16_);
        auVar8 = vcvtdq2ps_avx(auVar8);
        auVar9 = vpmovzxwd_avx2(auVar9._16_16_);
        auVar9 = vcvtdq2ps_avx(auVar9);
        auVar10 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar17 + param_1),0));
        auVar11 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar17 + param_1),0x10));
        auVar12 = vpmovzxwd_avx2(auVar10._0_16_);
        auVar12 = vcvtdq2ps_avx(auVar12);
        auVar13._4_4_ = fVar3 * auVar12._4_4_;
        auVar13._0_4_ = fVar3 * auVar12._0_4_;
        auVar13._8_4_ = fVar3 * auVar12._8_4_;
        auVar13._12_4_ = fVar3 * auVar12._12_4_;
        auVar13._16_4_ = fVar3 * auVar12._16_4_;
        auVar13._20_4_ = fVar3 * auVar12._20_4_;
        auVar13._24_4_ = fVar3 * auVar12._24_4_;
        auVar13._28_4_ = auVar12._28_4_;
        auVar12 = vpmovzxwd_avx2(auVar10._16_16_);
        auVar12 = vcvtdq2ps_avx(auVar12);
        auVar19 = vfmadd231ps_fma(auVar13,auVar21,auVar18);
        auVar10._4_4_ = fVar3 * auVar12._4_4_;
        auVar10._0_4_ = fVar3 * auVar12._0_4_;
        auVar10._8_4_ = fVar3 * auVar12._8_4_;
        auVar10._12_4_ = fVar3 * auVar12._12_4_;
        auVar10._16_4_ = fVar3 * auVar12._16_4_;
        auVar10._20_4_ = fVar3 * auVar12._20_4_;
        auVar10._24_4_ = fVar3 * auVar12._24_4_;
        auVar10._28_4_ = auVar21._28_4_;
        *(undefined1 (*) [32])(param_2 + uVar17 * 4) = ZEXT1632(auVar19);
        auVar19 = vfmadd231ps_fma(auVar10,auVar4,auVar18);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar17 * 4) = ZEXT1632(auVar19);
        auVar4 = vpmovzxwd_avx2(auVar11._0_16_);
        auVar21 = vcvtdq2ps_avx(auVar4);
        auVar12._4_4_ = fVar3 * auVar21._4_4_;
        auVar12._0_4_ = fVar3 * auVar21._0_4_;
        auVar12._8_4_ = fVar3 * auVar21._8_4_;
        auVar12._12_4_ = fVar3 * auVar21._12_4_;
        auVar12._16_4_ = fVar3 * auVar21._16_4_;
        auVar12._20_4_ = fVar3 * auVar21._20_4_;
        auVar12._24_4_ = fVar3 * auVar21._24_4_;
        auVar12._28_4_ = auVar4._28_4_;
        auVar21 = vpmovzxwd_avx2(auVar11._16_16_);
        auVar21 = vcvtdq2ps_avx(auVar21);
        auVar19 = vfmadd231ps_fma(auVar12,auVar8,auVar18);
        auVar4._4_4_ = fVar3 * auVar21._4_4_;
        auVar4._0_4_ = fVar3 * auVar21._0_4_;
        auVar4._8_4_ = fVar3 * auVar21._8_4_;
        auVar4._12_4_ = fVar3 * auVar21._12_4_;
        auVar4._16_4_ = fVar3 * auVar21._16_4_;
        auVar4._20_4_ = fVar3 * auVar21._20_4_;
        auVar4._24_4_ = fVar3 * auVar21._24_4_;
        auVar4._28_4_ = auVar8._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar17 * 4) = ZEXT1632(auVar19);
        auVar19 = vfmadd231ps_fma(auVar4,auVar9,auVar18);
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar17 * 4) = ZEXT1632(auVar19);
        uVar17 = uVar17 + 0x20;
      } while (uVar17 < uVar15);
      if (uVar14 < uVar15 + 1) {
        return;
      }
      uVar14 = uVar14 - uVar15;
      if ((longlong)uVar14 < 8) {
        uVar17 = 0;
      }
      else {
        uVar16 = 0;
        auVar21._4_4_ = uVar2;
        auVar21._0_4_ = uVar2;
        auVar21._8_4_ = uVar2;
        auVar21._12_4_ = uVar2;
        auVar21._16_4_ = uVar2;
        auVar21._20_4_ = uVar2;
        auVar21._24_4_ = uVar2;
        auVar21._28_4_ = uVar2;
        uVar17 = uVar14 & 0xfffffffffffffff8;
        do {
          lVar1 = param_1 + uVar15;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)((uVar16 - 3) + lVar1);
          auVar19 = vpmovzxbw_avx(auVar5);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(ulonglong *)(uVar16 + 3 + lVar1);
          auVar5 = vpmovzxbw_avx(auVar6);
          auVar19 = vpaddw_avx(auVar19,auVar5);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(uVar16 + lVar1);
          auVar5 = vpmovzxbw_avx(auVar7);
          auVar18 = vpmovzxwd_avx2(auVar5);
          auVar18 = vcvtdq2ps_avx(auVar18);
          auVar8._4_4_ = fVar3 * auVar18._4_4_;
          auVar8._0_4_ = fVar3 * auVar18._0_4_;
          auVar8._8_4_ = fVar3 * auVar18._8_4_;
          auVar8._12_4_ = fVar3 * auVar18._12_4_;
          auVar8._16_4_ = fVar3 * auVar18._16_4_;
          auVar8._20_4_ = fVar3 * auVar18._20_4_;
          auVar8._24_4_ = fVar3 * auVar18._24_4_;
          auVar8._28_4_ = auVar18._28_4_;
          auVar18 = vpmovzxwd_avx2(auVar19);
          auVar18 = vcvtdq2ps_avx(auVar18);
          auVar19 = vfmadd231ps_fma(auVar8,auVar18,auVar21);
          *(undefined1 (*) [32])(param_2 + uVar15 * 4 + uVar16 * 4) = ZEXT1632(auVar19);
          uVar16 = uVar16 + 8;
        } while (uVar16 < uVar17);
      }
      if (uVar14 <= uVar17) {
        return;
      }
      param_1 = param_1 + uVar15;
      do {
        auVar20._0_4_ =
             (float)((uint)*(byte *)((uVar17 - 3) + param_1) + (uint)*(byte *)(uVar17 + 3 + param_1)
                    );
        auVar20._4_8_ = SUB128(ZEXT812(0),4);
        auVar20._12_4_ = 0;
        auVar19 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)*(byte *)(uVar17 + param_1))),
                                  auVar20,ZEXT416(uVar2));
        *(int *)(param_2 + uVar15 * 4 + uVar17 * 4) = auVar19._0_4_;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar14);
      return;
    }
  }
LAB_14092266b:
  FUN_14092257b(fVar3,0);
  return;
}

