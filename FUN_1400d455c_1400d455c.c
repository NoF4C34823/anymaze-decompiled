
void FUN_1400d455c(longlong param_1,longlong param_2,ulonglong param_3)

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
  ulonglong in_R10;
  ulonglong uVar13;
  ulonglong uVar14;
  float in_XMM0_Da;
  undefined1 auVar15 [32];
  undefined4 in_XMM2_Da;
  undefined1 in_register_00001284 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  
  auVar15._4_4_ = in_XMM2_Da;
  auVar15._0_4_ = in_XMM2_Da;
  auVar15._8_4_ = in_XMM2_Da;
  auVar15._12_4_ = in_XMM2_Da;
  auVar15._16_4_ = in_XMM2_Da;
  auVar15._20_4_ = in_XMM2_Da;
  auVar15._24_4_ = in_XMM2_Da;
  auVar15._28_4_ = in_XMM2_Da;
  do {
    auVar17 = *(undefined1 (*) [32])((in_R10 - 1) + param_1);
    auVar2 = *(undefined1 (*) [32])(in_R10 + 1 + param_1);
    auVar5 = vpmovzxbw_avx2(auVar17._0_16_);
    auVar17 = vpmovzxbw_avx2(auVar17._16_16_);
    auVar6 = vpmovzxbw_avx2(auVar2._0_16_);
    auVar5 = vpaddw_avx2(auVar5,auVar6);
    auVar2 = vpmovzxbw_avx2(auVar2._16_16_);
    auVar6 = vpaddw_avx2(auVar17,auVar2);
    auVar17 = vpmovzxwd_avx2(auVar5._0_16_);
    auVar17 = vcvtdq2ps_avx(auVar17);
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
    auVar10 = vfmadd231ps_fma(auVar12,auVar17,auVar15);
    auVar7._4_4_ = in_XMM0_Da * auVar9._4_4_;
    auVar7._0_4_ = in_XMM0_Da * auVar9._0_4_;
    auVar7._8_4_ = in_XMM0_Da * auVar9._8_4_;
    auVar7._12_4_ = in_XMM0_Da * auVar9._12_4_;
    auVar7._16_4_ = in_XMM0_Da * auVar9._16_4_;
    auVar7._20_4_ = in_XMM0_Da * auVar9._20_4_;
    auVar7._24_4_ = in_XMM0_Da * auVar9._24_4_;
    auVar7._28_4_ = auVar17._28_4_;
    *(undefined1 (*) [32])(param_2 + in_R10 * 4) = ZEXT1632(auVar10);
    auVar10 = vfmadd231ps_fma(auVar7,auVar2,auVar15);
    *(undefined1 (*) [32])(param_2 + 0x20 + in_R10 * 4) = ZEXT1632(auVar10);
    auVar2 = vpmovzxwd_avx2(auVar8._0_16_);
    auVar17 = vcvtdq2ps_avx(auVar2);
    auVar9._4_4_ = in_XMM0_Da * auVar17._4_4_;
    auVar9._0_4_ = in_XMM0_Da * auVar17._0_4_;
    auVar9._8_4_ = in_XMM0_Da * auVar17._8_4_;
    auVar9._12_4_ = in_XMM0_Da * auVar17._12_4_;
    auVar9._16_4_ = in_XMM0_Da * auVar17._16_4_;
    auVar9._20_4_ = in_XMM0_Da * auVar17._20_4_;
    auVar9._24_4_ = in_XMM0_Da * auVar17._24_4_;
    auVar9._28_4_ = auVar2._28_4_;
    auVar17 = vpmovzxwd_avx2(auVar8._16_16_);
    auVar17 = vcvtdq2ps_avx(auVar17);
    auVar10 = vfmadd231ps_fma(auVar9,auVar5,auVar15);
    auVar2._4_4_ = in_XMM0_Da * auVar17._4_4_;
    auVar2._0_4_ = in_XMM0_Da * auVar17._0_4_;
    auVar2._8_4_ = in_XMM0_Da * auVar17._8_4_;
    auVar2._12_4_ = in_XMM0_Da * auVar17._12_4_;
    auVar2._16_4_ = in_XMM0_Da * auVar17._16_4_;
    auVar2._20_4_ = in_XMM0_Da * auVar17._20_4_;
    auVar2._24_4_ = in_XMM0_Da * auVar17._24_4_;
    auVar2._28_4_ = auVar5._28_4_;
    *(undefined1 (*) [32])(param_2 + 0x40 + in_R10 * 4) = ZEXT1632(auVar10);
    auVar10 = vfmadd231ps_fma(auVar2,auVar6,auVar15);
    *(undefined1 (*) [32])(param_2 + 0x60 + in_R10 * 4) = ZEXT1632(auVar10);
    in_R10 = in_R10 + 0x20;
  } while (in_R10 < in_RAX);
  if (in_RAX + 1 <= param_3) {
    param_3 = param_3 - in_RAX;
    if ((longlong)param_3 < 8) {
      uVar14 = 0;
    }
    else {
      uVar13 = 0;
      auVar17._4_4_ = in_XMM2_Da;
      auVar17._0_4_ = in_XMM2_Da;
      auVar17._8_4_ = in_XMM2_Da;
      auVar17._12_4_ = in_XMM2_Da;
      auVar17._16_4_ = in_XMM2_Da;
      auVar17._20_4_ = in_XMM2_Da;
      auVar17._24_4_ = in_XMM2_Da;
      auVar17._28_4_ = in_XMM2_Da;
      uVar14 = param_3 & 0xfffffffffffffff8;
      do {
        lVar1 = param_1 + in_RAX;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)((uVar13 - 1) + lVar1);
        auVar10 = vpmovzxbw_avx(auVar10);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(uVar13 + 1 + lVar1);
        auVar3 = vpmovzxbw_avx(auVar3);
        auVar10 = vpaddw_avx(auVar10,auVar3);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(uVar13 + lVar1);
        auVar3 = vpmovzxbw_avx(auVar4);
        auVar15 = vpmovzxwd_avx2(auVar3);
        auVar15 = vcvtdq2ps_avx(auVar15);
        auVar5._4_4_ = in_XMM0_Da * auVar15._4_4_;
        auVar5._0_4_ = in_XMM0_Da * auVar15._0_4_;
        auVar5._8_4_ = in_XMM0_Da * auVar15._8_4_;
        auVar5._12_4_ = in_XMM0_Da * auVar15._12_4_;
        auVar5._16_4_ = in_XMM0_Da * auVar15._16_4_;
        auVar5._20_4_ = in_XMM0_Da * auVar15._20_4_;
        auVar5._24_4_ = in_XMM0_Da * auVar15._24_4_;
        auVar5._28_4_ = auVar15._28_4_;
        auVar15 = vpmovzxwd_avx2(auVar10);
        auVar15 = vcvtdq2ps_avx(auVar15);
        auVar10 = vfmadd231ps_fma(auVar5,auVar15,auVar17);
        *(undefined1 (*) [32])(param_2 + in_RAX * 4 + uVar13 * 4) = ZEXT1632(auVar10);
        uVar13 = uVar13 + 8;
      } while (uVar13 < uVar14);
    }
    if (uVar14 < param_3) {
      param_1 = param_1 + in_RAX;
      do {
        auVar16._0_4_ =
             (float)((uint)*(byte *)((uVar14 - 1) + param_1) + (uint)*(byte *)(uVar14 + 1 + param_1)
                    );
        auVar16._4_8_ = SUB128(ZEXT812(0),4);
        auVar16._12_4_ = 0;
        auVar11._4_12_ = in_register_00001284;
        auVar11._0_4_ = in_XMM2_Da;
        auVar10 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM0_Da * (float)*(byte *)(uVar14 + param_1))),
                                  auVar16,auVar11);
        *(int *)(param_2 + in_RAX * 4 + uVar14 * 4) = auVar10._0_4_;
        uVar14 = uVar14 + 1;
      } while (uVar14 < param_3);
    }
  }
  return;
}

