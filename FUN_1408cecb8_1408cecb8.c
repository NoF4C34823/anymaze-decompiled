
void FUN_1408cecb8(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  ulonglong uVar12;
  ulonglong in_RDX;
  ulonglong uVar13;
  undefined4 in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  undefined1 in_register_00001244 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  float in_XMM4_Da;
  undefined1 auVar17 [32];
  
  uVar13 = 0;
  auVar16._4_4_ = param_2;
  auVar16._0_4_ = param_2;
  auVar16._8_4_ = param_2;
  auVar16._12_4_ = param_2;
  auVar16._16_4_ = param_2;
  auVar16._20_4_ = param_2;
  auVar16._24_4_ = param_2;
  auVar16._28_4_ = param_2;
  uVar12 = in_RDX & 0xfffffffffffffff8;
  auVar17._4_4_ = in_XMM0_Da;
  auVar17._0_4_ = in_XMM0_Da;
  auVar17._8_4_ = in_XMM0_Da;
  auVar17._12_4_ = in_XMM0_Da;
  auVar17._16_4_ = in_XMM0_Da;
  auVar17._20_4_ = in_XMM0_Da;
  auVar17._24_4_ = in_XMM0_Da;
  auVar17._28_4_ = in_XMM0_Da;
  do {
    lVar1 = param_1 + param_3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)((uVar13 - 6) + lVar1);
    auVar2 = vpmovzxbw_avx(auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(uVar13 + 6 + lVar1);
    auVar3 = vpmovzxbw_avx(auVar3);
    auVar2 = vpaddw_avx(auVar2,auVar3);
    auVar7 = vpmovzxwd_avx2(auVar2);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)((uVar13 - 3) + lVar1);
    auVar2 = vpmovzxbw_avx(auVar4);
    auVar7 = vcvtdq2ps_avx(auVar7);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(uVar13 + 3 + lVar1);
    auVar3 = vpmovzxbw_avx(auVar5);
    auVar2 = vpaddw_avx(auVar2,auVar3);
    auVar8 = vpmovzxwd_avx2(auVar2);
    auVar8 = vcvtdq2ps_avx(auVar8);
    auVar11._4_4_ = in_XMM4_Da * auVar8._4_4_;
    auVar11._0_4_ = in_XMM4_Da * auVar8._0_4_;
    auVar11._8_4_ = in_XMM4_Da * auVar8._8_4_;
    auVar11._12_4_ = in_XMM4_Da * auVar8._12_4_;
    auVar11._16_4_ = in_XMM4_Da * auVar8._16_4_;
    auVar11._20_4_ = in_XMM4_Da * auVar8._20_4_;
    auVar11._24_4_ = in_XMM4_Da * auVar8._24_4_;
    auVar11._28_4_ = auVar8._28_4_;
    auVar3 = vfmadd231ps_fma(auVar11,auVar7,auVar16);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(uVar13 + lVar1);
    auVar2 = vpmovzxbw_avx(auVar6);
    auVar7 = vpmovzxwd_avx2(auVar2);
    auVar7 = vcvtdq2ps_avx(auVar7);
    auVar2 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar7,auVar17);
    *(undefined1 (*) [32])(param_4 + param_3 * 4 + uVar13 * 4) = ZEXT1632(auVar2);
    uVar13 = uVar13 + 8;
  } while (uVar13 < uVar12);
  if (uVar12 < in_RDX) {
    param_1 = param_1 + param_3;
    do {
      auVar14._0_4_ = (float)*(byte *)(uVar12 + param_1);
      auVar14._4_8_ = SUB128(ZEXT812(0),4);
      auVar14._12_4_ = 0;
      auVar15._0_4_ =
           (float)((uint)*(byte *)((uVar12 - 6) + param_1) + (uint)*(byte *)(uVar12 + 6 + param_1));
      auVar15._4_8_ = SUB128(ZEXT812(0),4);
      auVar15._12_4_ = 0;
      auVar10._4_12_ = in_register_00001244;
      auVar10._0_4_ = param_2;
      auVar2 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM4_Da *
                                             (float)((uint)*(byte *)((uVar12 - 3) + param_1) +
                                                    (uint)*(byte *)(uVar12 + 3 + param_1)))),auVar15
                               ,auVar10);
      auVar9._4_12_ = in_register_00001204;
      auVar9._0_4_ = in_XMM0_Da;
      auVar2 = vfmadd231ss_fma(auVar2,auVar14,auVar9);
      *(int *)(param_4 + param_3 * 4 + uVar12 * 4) = auVar2._0_4_;
      uVar12 = uVar12 + 1;
    } while (uVar12 < in_RDX);
  }
  return;
}

