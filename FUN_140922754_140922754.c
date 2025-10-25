
void FUN_140922754(longlong param_1,undefined4 param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  ulonglong uVar15;
  ulonglong in_RDX;
  ulonglong in_R10;
  ulonglong uVar16;
  undefined4 in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  undefined1 in_register_00001244 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  float in_XMM4_Da;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  
  auVar19._4_4_ = param_2;
  auVar19._0_4_ = param_2;
  auVar19._8_4_ = param_2;
  auVar19._12_4_ = param_2;
  auVar19._16_4_ = param_2;
  auVar19._20_4_ = param_2;
  auVar19._24_4_ = param_2;
  auVar19._28_4_ = param_2;
  auVar21._4_4_ = in_XMM0_Da;
  auVar21._0_4_ = in_XMM0_Da;
  auVar21._8_4_ = in_XMM0_Da;
  auVar21._12_4_ = in_XMM0_Da;
  auVar21._16_4_ = in_XMM0_Da;
  auVar21._20_4_ = in_XMM0_Da;
  auVar21._24_4_ = in_XMM0_Da;
  auVar21._28_4_ = in_XMM0_Da;
  do {
    auVar20 = *(undefined1 (*) [32])(in_R10 + 6 + param_1);
    auVar2 = *(undefined1 (*) [32])((in_R10 - 6) + param_1);
    auVar3 = *(undefined1 (*) [32])(in_R10 + 3 + param_1);
    auVar23 = *(undefined1 (*) [32])((in_R10 - 3) + param_1);
    auVar22 = vpmovzxbw_avx2(auVar2._0_16_);
    auVar5 = vpmovzxbw_avx2(auVar20._0_16_);
    auVar22 = vpaddw_avx2(auVar22,auVar5);
    auVar2 = vpmovzxbw_avx2(auVar2._16_16_);
    auVar20 = vpmovzxbw_avx2(auVar20._16_16_);
    auVar5 = vpaddw_avx2(auVar2,auVar20);
    auVar2 = vpmovzxwd_avx2(auVar22._16_16_);
    auVar20 = vpmovzxwd_avx2(auVar22._0_16_);
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar22 = vpmovzxwd_avx2(auVar5._0_16_);
    auVar22 = vcvtdq2ps_avx(auVar22);
    auVar5 = vpmovzxwd_avx2(auVar5._16_16_);
    auVar5 = vcvtdq2ps_avx(auVar5);
    auVar6 = vpmovzxbw_avx2(auVar23._0_16_);
    auVar7 = vpmovzxbw_avx2(auVar3._0_16_);
    auVar6 = vpaddw_avx2(auVar6,auVar7);
    auVar23 = vpmovzxbw_avx2(auVar23._16_16_);
    auVar3 = vpmovzxbw_avx2(auVar3._16_16_);
    auVar7 = vpaddw_avx2(auVar23,auVar3);
    auVar3 = vpmovzxwd_avx2(auVar6._0_16_);
    auVar3 = vcvtdq2ps_avx(auVar3);
    auVar6 = vpmovzxwd_avx2(auVar6._16_16_);
    auVar23 = vcvtdq2ps_avx(auVar6);
    auVar14._4_4_ = in_XMM4_Da * auVar3._4_4_;
    auVar14._0_4_ = in_XMM4_Da * auVar3._0_4_;
    auVar14._8_4_ = in_XMM4_Da * auVar3._8_4_;
    auVar14._12_4_ = in_XMM4_Da * auVar3._12_4_;
    auVar14._16_4_ = in_XMM4_Da * auVar3._16_4_;
    auVar14._20_4_ = in_XMM4_Da * auVar3._20_4_;
    auVar14._24_4_ = in_XMM4_Da * auVar3._24_4_;
    auVar14._28_4_ = auVar6._28_4_;
    auVar8 = vfmadd231ps_fma(auVar14,auVar20,auVar19);
    auVar3._4_4_ = in_XMM4_Da * auVar23._4_4_;
    auVar3._0_4_ = in_XMM4_Da * auVar23._0_4_;
    auVar3._8_4_ = in_XMM4_Da * auVar23._8_4_;
    auVar3._12_4_ = in_XMM4_Da * auVar23._12_4_;
    auVar3._16_4_ = in_XMM4_Da * auVar23._16_4_;
    auVar3._20_4_ = in_XMM4_Da * auVar23._20_4_;
    auVar3._24_4_ = in_XMM4_Da * auVar23._24_4_;
    auVar3._28_4_ = auVar20._28_4_;
    auVar9 = vfmadd231ps_fma(auVar3,auVar2,auVar19);
    auVar20 = vpmovzxwd_avx2(auVar7._0_16_);
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar2 = vpmovzxwd_avx2(auVar7._16_16_);
    auVar23._0_4_ = in_XMM4_Da * auVar20._0_4_;
    auVar23._4_4_ = in_XMM4_Da * auVar20._4_4_;
    auVar23._8_4_ = in_XMM4_Da * auVar20._8_4_;
    auVar23._12_4_ = in_XMM4_Da * auVar20._12_4_;
    auVar23._16_4_ = in_XMM4_Da * auVar20._16_4_;
    auVar23._20_4_ = in_XMM4_Da * auVar20._20_4_;
    auVar23._24_4_ = in_XMM4_Da * auVar20._24_4_;
    auVar23._28_4_ = 0;
    auVar20 = vcvtdq2ps_avx(auVar2);
    auVar10 = vfmadd231ps_fma(auVar23,auVar22,auVar19);
    auVar2._4_4_ = in_XMM4_Da * auVar20._4_4_;
    auVar2._0_4_ = in_XMM4_Da * auVar20._0_4_;
    auVar2._8_4_ = in_XMM4_Da * auVar20._8_4_;
    auVar2._12_4_ = in_XMM4_Da * auVar20._12_4_;
    auVar2._16_4_ = in_XMM4_Da * auVar20._16_4_;
    auVar2._20_4_ = in_XMM4_Da * auVar20._20_4_;
    auVar2._24_4_ = in_XMM4_Da * auVar20._24_4_;
    auVar2._28_4_ = auVar22._28_4_;
    auVar11 = vfmadd231ps_fma(auVar2,auVar5,auVar19);
    auVar2 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(in_R10 + param_1),0));
    auVar3 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(in_R10 + param_1),0x10));
    auVar20 = vpmovzxwd_avx2(auVar2._0_16_);
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar20,auVar21);
    auVar20 = vpmovzxwd_avx2(auVar2._16_16_);
    *(undefined1 (*) [32])(param_4 + in_R10 * 4) = ZEXT1632(auVar8);
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar8 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar20,auVar21);
    *(undefined1 (*) [32])(param_4 + 0x20 + in_R10 * 4) = ZEXT1632(auVar8);
    auVar20 = vpmovzxwd_avx2(auVar3._0_16_);
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar8 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar20,auVar21);
    *(undefined1 (*) [32])(param_4 + 0x40 + in_R10 * 4) = ZEXT1632(auVar8);
    auVar20 = vpmovzxwd_avx2(auVar3._16_16_);
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar8 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar20,auVar21);
    *(undefined1 (*) [32])(param_4 + 0x60 + in_R10 * 4) = ZEXT1632(auVar8);
    in_R10 = in_R10 + 0x20;
  } while (in_R10 < param_3);
  if (param_3 + 1 <= in_RDX) {
    in_RDX = in_RDX - param_3;
    if ((longlong)in_RDX < 8) {
      FUN_140922a5b();
      return;
    }
    uVar16 = 0;
    auVar20._4_4_ = param_2;
    auVar20._0_4_ = param_2;
    auVar20._8_4_ = param_2;
    auVar20._12_4_ = param_2;
    auVar20._16_4_ = param_2;
    auVar20._20_4_ = param_2;
    auVar20._24_4_ = param_2;
    auVar20._28_4_ = param_2;
    uVar15 = in_RDX & 0xfffffffffffffff8;
    auVar22._4_4_ = in_XMM0_Da;
    auVar22._0_4_ = in_XMM0_Da;
    auVar22._8_4_ = in_XMM0_Da;
    auVar22._12_4_ = in_XMM0_Da;
    auVar22._16_4_ = in_XMM0_Da;
    auVar22._20_4_ = in_XMM0_Da;
    auVar22._24_4_ = in_XMM0_Da;
    auVar22._28_4_ = in_XMM0_Da;
    do {
      lVar1 = param_1 + param_3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)((uVar16 - 6) + lVar1);
      auVar8 = vpmovzxbw_avx(auVar8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)(uVar16 + 6 + lVar1);
      auVar9 = vpmovzxbw_avx(auVar9);
      auVar8 = vpaddw_avx(auVar8,auVar9);
      auVar19 = vpmovzxwd_avx2(auVar8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)((uVar16 - 3) + lVar1);
      auVar8 = vpmovzxbw_avx(auVar10);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(uVar16 + 3 + lVar1);
      auVar9 = vpmovzxbw_avx(auVar11);
      auVar8 = vpaddw_avx(auVar8,auVar9);
      auVar21 = vpmovzxwd_avx2(auVar8);
      auVar21 = vcvtdq2ps_avx(auVar21);
      auVar5._4_4_ = in_XMM4_Da * auVar21._4_4_;
      auVar5._0_4_ = in_XMM4_Da * auVar21._0_4_;
      auVar5._8_4_ = in_XMM4_Da * auVar21._8_4_;
      auVar5._12_4_ = in_XMM4_Da * auVar21._12_4_;
      auVar5._16_4_ = in_XMM4_Da * auVar21._16_4_;
      auVar5._20_4_ = in_XMM4_Da * auVar21._20_4_;
      auVar5._24_4_ = in_XMM4_Da * auVar21._24_4_;
      auVar5._28_4_ = auVar21._28_4_;
      auVar9 = vfmadd231ps_fma(auVar5,auVar19,auVar20);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(uVar16 + lVar1);
      auVar8 = vpmovzxbw_avx(auVar4);
      auVar19 = vpmovzxwd_avx2(auVar8);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar19,auVar22);
      *(undefined1 (*) [32])(param_4 + param_3 * 4 + uVar16 * 4) = ZEXT1632(auVar8);
      uVar16 = uVar16 + 8;
    } while (uVar16 < uVar15);
    if (uVar15 < in_RDX) {
      param_1 = param_1 + param_3;
      do {
        auVar17._0_4_ = (float)*(byte *)(uVar15 + param_1);
        auVar17._4_8_ = SUB128(ZEXT812(0),4);
        auVar17._12_4_ = 0;
        auVar18._0_4_ =
             (float)((uint)*(byte *)((uVar15 - 6) + param_1) + (uint)*(byte *)(uVar15 + 6 + param_1)
                    );
        auVar18._4_8_ = SUB128(ZEXT812(0),4);
        auVar18._12_4_ = 0;
        auVar13._4_12_ = in_register_00001244;
        auVar13._0_4_ = param_2;
        auVar8 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM4_Da *
                                               (float)((uint)*(byte *)((uVar15 - 3) + param_1) +
                                                      (uint)*(byte *)(uVar15 + 3 + param_1)))),
                                 auVar18,auVar13);
        auVar12._4_12_ = in_register_00001204;
        auVar12._0_4_ = in_XMM0_Da;
        auVar8 = vfmadd231ss_fma(auVar8,auVar17,auVar12);
        *(int *)(param_4 + param_3 * 4 + uVar15 * 4) = auVar8._0_4_;
        uVar15 = uVar15 + 1;
      } while (uVar15 < in_RDX);
    }
  }
  return;
}

