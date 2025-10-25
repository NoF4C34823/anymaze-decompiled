
void FUN_140920a60(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

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
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0x1f < (longlong)param_3) {
    uVar16 = param_2 & 0x1f;
    if (uVar16 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140920d6b;
      uVar16 = 0x20 - uVar16 >> 2;
    }
    if ((longlong)(uVar16 + 0x20) <= (longlong)param_3) {
      uVar15 = 0;
      uVar14 = param_3 - (param_3 - uVar16 & 0x1f);
      if (uVar16 != 0) {
        do {
          auVar18._0_4_ =
               (float)((uint)*(byte *)((uVar15 - 1) + param_1) +
                      (uint)*(byte *)(uVar15 + 1 + param_1));
          auVar18._4_8_ = SUB128(ZEXT812(0),4);
          auVar18._12_4_ = 0;
          auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)*(byte *)(uVar15 + param_1))),
                                    auVar18,ZEXT416(uVar2));
          *(int *)(param_2 + uVar15 * 4) = auVar18._0_4_;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar16);
      }
      auVar17._4_4_ = uVar2;
      auVar17._0_4_ = uVar2;
      auVar17._8_4_ = uVar2;
      auVar17._12_4_ = uVar2;
      auVar17._16_4_ = uVar2;
      auVar17._20_4_ = uVar2;
      auVar17._24_4_ = uVar2;
      auVar17._28_4_ = uVar2;
      do {
        auVar20 = *(undefined1 (*) [32])((uVar16 - 1) + param_1);
        auVar4 = *(undefined1 (*) [32])(uVar16 + 1 + param_1);
        auVar8 = vpmovzxbw_avx2(auVar20._0_16_);
        auVar20 = vpmovzxbw_avx2(auVar20._16_16_);
        auVar9 = vpmovzxbw_avx2(auVar4._0_16_);
        auVar8 = vpaddw_avx2(auVar8,auVar9);
        auVar4 = vpmovzxbw_avx2(auVar4._16_16_);
        auVar9 = vpaddw_avx2(auVar20,auVar4);
        auVar20 = vpmovzxwd_avx2(auVar8._0_16_);
        auVar20 = vcvtdq2ps_avx(auVar20);
        auVar4 = vpmovzxwd_avx2(auVar8._16_16_);
        auVar4 = vcvtdq2ps_avx(auVar4);
        auVar8 = vpmovzxwd_avx2(auVar9._0_16_);
        auVar8 = vcvtdq2ps_avx(auVar8);
        auVar9 = vpmovzxwd_avx2(auVar9._16_16_);
        auVar9 = vcvtdq2ps_avx(auVar9);
        auVar10 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar16 + param_1),0));
        auVar11 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar16 + param_1),0x10));
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
        auVar18 = vfmadd231ps_fma(auVar13,auVar20,auVar17);
        auVar10._4_4_ = fVar3 * auVar12._4_4_;
        auVar10._0_4_ = fVar3 * auVar12._0_4_;
        auVar10._8_4_ = fVar3 * auVar12._8_4_;
        auVar10._12_4_ = fVar3 * auVar12._12_4_;
        auVar10._16_4_ = fVar3 * auVar12._16_4_;
        auVar10._20_4_ = fVar3 * auVar12._20_4_;
        auVar10._24_4_ = fVar3 * auVar12._24_4_;
        auVar10._28_4_ = auVar20._28_4_;
        *(undefined1 (*) [32])(param_2 + uVar16 * 4) = ZEXT1632(auVar18);
        auVar18 = vfmadd231ps_fma(auVar10,auVar4,auVar17);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar16 * 4) = ZEXT1632(auVar18);
        auVar4 = vpmovzxwd_avx2(auVar11._0_16_);
        auVar20 = vcvtdq2ps_avx(auVar4);
        auVar12._4_4_ = fVar3 * auVar20._4_4_;
        auVar12._0_4_ = fVar3 * auVar20._0_4_;
        auVar12._8_4_ = fVar3 * auVar20._8_4_;
        auVar12._12_4_ = fVar3 * auVar20._12_4_;
        auVar12._16_4_ = fVar3 * auVar20._16_4_;
        auVar12._20_4_ = fVar3 * auVar20._20_4_;
        auVar12._24_4_ = fVar3 * auVar20._24_4_;
        auVar12._28_4_ = auVar4._28_4_;
        auVar20 = vpmovzxwd_avx2(auVar11._16_16_);
        auVar20 = vcvtdq2ps_avx(auVar20);
        auVar18 = vfmadd231ps_fma(auVar12,auVar8,auVar17);
        auVar4._4_4_ = fVar3 * auVar20._4_4_;
        auVar4._0_4_ = fVar3 * auVar20._0_4_;
        auVar4._8_4_ = fVar3 * auVar20._8_4_;
        auVar4._12_4_ = fVar3 * auVar20._12_4_;
        auVar4._16_4_ = fVar3 * auVar20._16_4_;
        auVar4._20_4_ = fVar3 * auVar20._20_4_;
        auVar4._24_4_ = fVar3 * auVar20._24_4_;
        auVar4._28_4_ = auVar8._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar16 * 4) = ZEXT1632(auVar18);
        auVar18 = vfmadd231ps_fma(auVar4,auVar9,auVar17);
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar16 * 4) = ZEXT1632(auVar18);
        uVar16 = uVar16 + 0x20;
      } while (uVar16 < uVar14);
      if (param_3 < uVar14 + 1) {
        return;
      }
      param_3 = param_3 - uVar14;
      if ((longlong)param_3 < 8) {
        uVar16 = 0;
      }
      else {
        uVar15 = 0;
        auVar20._4_4_ = uVar2;
        auVar20._0_4_ = uVar2;
        auVar20._8_4_ = uVar2;
        auVar20._12_4_ = uVar2;
        auVar20._16_4_ = uVar2;
        auVar20._20_4_ = uVar2;
        auVar20._24_4_ = uVar2;
        auVar20._28_4_ = uVar2;
        uVar16 = param_3 & 0xfffffffffffffff8;
        do {
          lVar1 = param_1 + uVar14;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)((uVar15 - 1) + lVar1);
          auVar18 = vpmovzxbw_avx(auVar5);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(ulonglong *)(uVar15 + 1 + lVar1);
          auVar5 = vpmovzxbw_avx(auVar6);
          auVar18 = vpaddw_avx(auVar18,auVar5);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(uVar15 + lVar1);
          auVar5 = vpmovzxbw_avx(auVar7);
          auVar17 = vpmovzxwd_avx2(auVar5);
          auVar17 = vcvtdq2ps_avx(auVar17);
          auVar8._4_4_ = fVar3 * auVar17._4_4_;
          auVar8._0_4_ = fVar3 * auVar17._0_4_;
          auVar8._8_4_ = fVar3 * auVar17._8_4_;
          auVar8._12_4_ = fVar3 * auVar17._12_4_;
          auVar8._16_4_ = fVar3 * auVar17._16_4_;
          auVar8._20_4_ = fVar3 * auVar17._20_4_;
          auVar8._24_4_ = fVar3 * auVar17._24_4_;
          auVar8._28_4_ = auVar17._28_4_;
          auVar17 = vpmovzxwd_avx2(auVar18);
          auVar17 = vcvtdq2ps_avx(auVar17);
          auVar18 = vfmadd231ps_fma(auVar8,auVar17,auVar20);
          *(undefined1 (*) [32])(param_2 + uVar14 * 4 + uVar15 * 4) = ZEXT1632(auVar18);
          uVar15 = uVar15 + 8;
        } while (uVar15 < uVar16);
      }
      if (param_3 <= uVar16) {
        return;
      }
      param_1 = param_1 + uVar14;
      do {
        auVar19._0_4_ =
             (float)((uint)*(byte *)((uVar16 - 1) + param_1) + (uint)*(byte *)(uVar16 + 1 + param_1)
                    );
        auVar19._4_8_ = SUB128(ZEXT812(0),4);
        auVar19._12_4_ = 0;
        auVar18 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)*(byte *)(uVar16 + param_1))),
                                  auVar19,ZEXT416(uVar2));
        *(int *)(param_2 + uVar14 * 4 + uVar16 * 4) = auVar18._0_4_;
        uVar16 = uVar16 + 1;
      } while (uVar16 < param_3);
      return;
    }
  }
LAB_140920d6b:
  FUN_140920c7b();
  return;
}

