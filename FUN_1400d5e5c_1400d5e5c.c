
void FUN_1400d5e5c(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  ulonglong in_RAX;
  ulonglong uVar13;
  ulonglong in_R10;
  ulonglong uVar14;
  ulonglong uVar15;
  float in_XMM0_Da;
  undefined1 auVar16 [32];
  undefined4 in_XMM2_Da;
  undefined1 in_register_00001284 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  
  auVar16._4_4_ = in_XMM2_Da;
  auVar16._0_4_ = in_XMM2_Da;
  auVar16._8_4_ = in_XMM2_Da;
  auVar16._12_4_ = in_XMM2_Da;
  auVar16._16_4_ = in_XMM2_Da;
  auVar16._20_4_ = in_XMM2_Da;
  auVar16._24_4_ = in_XMM2_Da;
  auVar16._28_4_ = in_XMM2_Da;
  do {
    auVar18 = *(undefined1 (*) [32])((in_R10 - 3) + param_1);
    auVar2 = *(undefined1 (*) [32])(in_R10 + 3 + param_1);
    auVar5 = vpmovzxbw_avx2(auVar18._0_16_);
    auVar18 = vpmovzxbw_avx2(auVar18._16_16_);
    auVar6 = vpmovzxbw_avx2(auVar2._0_16_);
    auVar5 = vpaddw_avx2(auVar5,auVar6);
    auVar2 = vpmovzxbw_avx2(auVar2._16_16_);
    auVar6 = vpaddw_avx2(auVar18,auVar2);
    auVar18 = vpmovzxwd_avx2(auVar5._0_16_);
    auVar18 = vcvtdq2ps_avx(auVar18);
    auVar2 = vpmovzxwd_avx2(auVar5._16_16_);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar5 = vpmovzxwd_avx2(auVar6._0_16_);
    auVar5 = vcvtdq2ps_avx(auVar5);
    auVar6 = vpmovzxwd_avx2(auVar6._16_16_);
    auVar6 = vcvtdq2ps_avx(auVar6);
    auVar7 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(in_R10 + param_1),0));
    auVar8 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(in_R10 + param_1),0x10));
    auVar9 = vpmovzxwd_avx2(auVar7._0_16_);
    auVar9 = vcvtdq2ps_avx(auVar9);
    auVar12._4_4_ = in_XMM0_Da * auVar9._4_4_;
    auVar12._0_4_ = in_XMM0_Da * auVar9._0_4_;
    auVar12._8_4_ = in_XMM0_Da * auVar9._8_4_;
    auVar12._12_4_ = in_XMM0_Da * auVar9._12_4_;
    auVar12._16_4_ = in_XMM0_Da * auVar9._16_4_;
    auVar12._20_4_ = in_XMM0_Da * auVar9._20_4_;
    auVar12._24_4_ = in_XMM0_Da * auVar9._24_4_;
    auVar12._28_4_ = auVar9._28_4_;
    auVar9 = vpmovzxwd_avx2(auVar7._16_16_);
    auVar9 = vcvtdq2ps_avx(auVar9);
    auVar10 = vfmadd231ps_fma(auVar12,auVar18,auVar16);
    auVar7._4_4_ = in_XMM0_Da * auVar9._4_4_;
    auVar7._0_4_ = in_XMM0_Da * auVar9._0_4_;
    auVar7._8_4_ = in_XMM0_Da * auVar9._8_4_;
    auVar7._12_4_ = in_XMM0_Da * auVar9._12_4_;
    auVar7._16_4_ = in_XMM0_Da * auVar9._16_4_;
    auVar7._20_4_ = in_XMM0_Da * auVar9._20_4_;
    auVar7._24_4_ = in_XMM0_Da * auVar9._24_4_;
    auVar7._28_4_ = auVar18._28_4_;
    *(undefined1 (*) [32])(param_3 + in_R10 * 4) = ZEXT1632(auVar10);
    auVar10 = vfmadd231ps_fma(auVar7,auVar2,auVar16);
    *(undefined1 (*) [32])(param_3 + 0x20 + in_R10 * 4) = ZEXT1632(auVar10);
    auVar2 = vpmovzxwd_avx2(auVar8._0_16_);
    auVar18 = vcvtdq2ps_avx(auVar2);
    auVar9._4_4_ = in_XMM0_Da * auVar18._4_4_;
    auVar9._0_4_ = in_XMM0_Da * auVar18._0_4_;
    auVar9._8_4_ = in_XMM0_Da * auVar18._8_4_;
    auVar9._12_4_ = in_XMM0_Da * auVar18._12_4_;
    auVar9._16_4_ = in_XMM0_Da * auVar18._16_4_;
    auVar9._20_4_ = in_XMM0_Da * auVar18._20_4_;
    auVar9._24_4_ = in_XMM0_Da * auVar18._24_4_;
    auVar9._28_4_ = auVar2._28_4_;
    auVar18 = vpmovzxwd_avx2(auVar8._16_16_);
    auVar18 = vcvtdq2ps_avx(auVar18);
    auVar10 = vfmadd231ps_fma(auVar9,auVar5,auVar16);
    auVar2._4_4_ = in_XMM0_Da * auVar18._4_4_;
    auVar2._0_4_ = in_XMM0_Da * auVar18._0_4_;
    auVar2._8_4_ = in_XMM0_Da * auVar18._8_4_;
    auVar2._12_4_ = in_XMM0_Da * auVar18._12_4_;
    auVar2._16_4_ = in_XMM0_Da * auVar18._16_4_;
    auVar2._20_4_ = in_XMM0_Da * auVar18._20_4_;
    auVar2._24_4_ = in_XMM0_Da * auVar18._24_4_;
    auVar2._28_4_ = auVar5._28_4_;
    *(undefined1 (*) [32])(param_3 + 0x40 + in_R10 * 4) = ZEXT1632(auVar10);
    auVar10 = vfmadd231ps_fma(auVar2,auVar6,auVar16);
    *(undefined1 (*) [32])(param_3 + 0x60 + in_R10 * 4) = ZEXT1632(auVar10);
    in_R10 = in_R10 + 0x20;
  } while (in_R10 < param_2);
  if (param_2 + 1 <= in_RAX) {
    uVar13 = in_RAX - param_2;
    if ((longlong)uVar13 < 8) {
      uVar15 = 0;
    }
    else {
      uVar14 = 0;
      auVar18._4_4_ = in_XMM2_Da;
      auVar18._0_4_ = in_XMM2_Da;
      auVar18._8_4_ = in_XMM2_Da;
      auVar18._12_4_ = in_XMM2_Da;
      auVar18._16_4_ = in_XMM2_Da;
      auVar18._20_4_ = in_XMM2_Da;
      auVar18._24_4_ = in_XMM2_Da;
      auVar18._28_4_ = in_XMM2_Da;
      uVar15 = uVar13 & 0xfffffffffffffff8;
      do {
        lVar1 = param_1 + param_2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)((uVar14 - 3) + lVar1);
        auVar10 = vpmovzxbw_avx(auVar10);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(uVar14 + 3 + lVar1);
        auVar3 = vpmovzxbw_avx(auVar3);
        auVar10 = vpaddw_avx(auVar10,auVar3);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(uVar14 + lVar1);
        auVar3 = vpmovzxbw_avx(auVar4);
        auVar16 = vpmovzxwd_avx2(auVar3);
        auVar16 = vcvtdq2ps_avx(auVar16);
        auVar5._4_4_ = in_XMM0_Da * auVar16._4_4_;
        auVar5._0_4_ = in_XMM0_Da * auVar16._0_4_;
        auVar5._8_4_ = in_XMM0_Da * auVar16._8_4_;
        auVar5._12_4_ = in_XMM0_Da * auVar16._12_4_;
        auVar5._16_4_ = in_XMM0_Da * auVar16._16_4_;
        auVar5._20_4_ = in_XMM0_Da * auVar16._20_4_;
        auVar5._24_4_ = in_XMM0_Da * auVar16._24_4_;
        auVar5._28_4_ = auVar16._28_4_;
        auVar16 = vpmovzxwd_avx2(auVar10);
        auVar16 = vcvtdq2ps_avx(auVar16);
        auVar10 = vfmadd231ps_fma(auVar5,auVar16,auVar18);
        *(undefined1 (*) [32])(param_3 + param_2 * 4 + uVar14 * 4) = ZEXT1632(auVar10);
        uVar14 = uVar14 + 8;
      } while (uVar14 < uVar15);
    }
    if (uVar15 < uVar13) {
      param_1 = param_1 + param_2;
      do {
        auVar17._0_4_ =
             (float)((uint)*(byte *)((uVar15 - 3) + param_1) + (uint)*(byte *)(uVar15 + 3 + param_1)
                    );
        auVar17._4_8_ = SUB128(ZEXT812(0),4);
        auVar17._12_4_ = 0;
        auVar11._4_12_ = in_register_00001284;
        auVar11._0_4_ = in_XMM2_Da;
        auVar10 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM0_Da * (float)*(byte *)(uVar15 + param_1))),
                                  auVar17,auVar11);
        *(int *)(param_3 + param_2 * 4 + uVar15 * 4) = auVar10._0_4_;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar13);
    }
  }
  return;
}

