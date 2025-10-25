
void FUN_14092531d(ulonglong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  longlong unaff_RDI;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float in_XMM2_Da;
  undefined1 auVar15 [32];
  undefined4 in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  undefined1 auVar16 [16];
  
  auVar15._4_4_ = in_XMM4_Da;
  auVar15._0_4_ = in_XMM4_Da;
  auVar15._8_4_ = in_XMM4_Da;
  auVar15._12_4_ = in_XMM4_Da;
  auVar15._16_4_ = in_XMM4_Da;
  auVar15._20_4_ = in_XMM4_Da;
  auVar15._24_4_ = in_XMM4_Da;
  auVar15._28_4_ = in_XMM4_Da;
  do {
    auVar2 = *(undefined1 (*) [32])(unaff_RDI + 6 + param_4 * 2);
    auVar3 = *(undefined1 (*) [32])(unaff_RDI + -6 + param_4 * 2);
    auVar4 = *(undefined1 (*) [32])(unaff_RDI + param_4 * 2);
    auVar8 = vpmovzxwd_avx2(auVar3._0_16_);
    auVar9 = vpmovzxwd_avx2(auVar2._0_16_);
    auVar8 = vpaddd_avx2(auVar8,auVar9);
    auVar8 = vcvtdq2ps_avx(auVar8);
    auVar3 = vpmovzxwd_avx2(auVar3._16_16_);
    auVar2 = vpmovzxwd_avx2(auVar2._16_16_);
    auVar2 = vpaddd_avx2(auVar3,auVar2);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar3 = vpmovzxwd_avx2(auVar4._0_16_);
    auVar3 = vcvtdq2ps_avx(auVar3);
    auVar9._4_4_ = in_XMM2_Da * auVar3._4_4_;
    auVar9._0_4_ = in_XMM2_Da * auVar3._0_4_;
    auVar9._8_4_ = in_XMM2_Da * auVar3._8_4_;
    auVar9._12_4_ = in_XMM2_Da * auVar3._12_4_;
    auVar9._16_4_ = in_XMM2_Da * auVar3._16_4_;
    auVar9._20_4_ = in_XMM2_Da * auVar3._20_4_;
    auVar9._24_4_ = in_XMM2_Da * auVar3._24_4_;
    auVar9._28_4_ = auVar3._28_4_;
    auVar3 = vpmovzxwd_avx2(auVar4._16_16_);
    auVar3 = vcvtdq2ps_avx(auVar3);
    auVar16 = vfmadd231ps_fma(auVar9,auVar8,auVar15);
    auVar4._4_4_ = in_XMM2_Da * auVar3._4_4_;
    auVar4._0_4_ = in_XMM2_Da * auVar3._0_4_;
    auVar4._8_4_ = in_XMM2_Da * auVar3._8_4_;
    auVar4._12_4_ = in_XMM2_Da * auVar3._12_4_;
    auVar4._16_4_ = in_XMM2_Da * auVar3._16_4_;
    auVar4._20_4_ = in_XMM2_Da * auVar3._20_4_;
    auVar4._24_4_ = in_XMM2_Da * auVar3._24_4_;
    auVar4._28_4_ = auVar8._28_4_;
    *(undefined1 (*) [32])(param_3 + param_4 * 4) = ZEXT1632(auVar16);
    auVar16 = vfmadd231ps_fma(auVar4,auVar2,auVar15);
    *(undefined1 (*) [32])(param_3 + 0x20 + param_4 * 4) = ZEXT1632(auVar16);
    param_4 = param_4 + 0x10;
  } while (param_4 < param_1);
  if (param_1 + 1 <= param_2) {
    param_2 = param_2 - param_1;
    if ((longlong)param_2 < 4) {
      FUN_140925461();
      return;
    }
    uVar12 = 0;
    auVar16._4_4_ = in_XMM4_Da;
    auVar16._0_4_ = in_XMM4_Da;
    auVar16._8_4_ = in_XMM4_Da;
    auVar16._12_4_ = in_XMM4_Da;
    uVar11 = param_2 & 0xfffffffffffffffc;
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(unaff_RDI + param_1 * 2 + 6 + uVar12 * 2);
      auVar5 = vpmovzxwd_avx(auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(unaff_RDI + -6 + (uVar12 + param_1) * 2);
      auVar6 = vpmovzxwd_avx(auVar6);
      auVar6 = vpaddd_avx(auVar6,auVar5);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(unaff_RDI + (uVar12 + param_1) * 2);
      auVar5 = vpmovzxwd_avx(auVar7);
      auVar5 = vcvtdq2ps_avx(auVar5);
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar13._0_4_ = in_XMM2_Da * auVar5._0_4_;
      auVar13._4_4_ = in_XMM2_Da * auVar5._4_4_;
      auVar13._8_4_ = in_XMM2_Da * auVar5._8_4_;
      auVar13._12_4_ = in_XMM2_Da * auVar5._12_4_;
      auVar5 = vfmadd231ps_fma(auVar13,auVar6,auVar16);
      *(undefined1 (*) [16])(param_3 + param_1 * 4 + uVar12 * 4) = auVar5;
      uVar12 = uVar12 + 4;
    } while (uVar12 < uVar11);
    if (uVar11 < param_2) {
      lVar1 = unaff_RDI + param_1 * 2;
      do {
        auVar14._0_4_ =
             (float)((uint)*(ushort *)(lVar1 + -6 + uVar11 * 2) +
                    (uint)*(ushort *)(lVar1 + 6 + uVar11 * 2));
        auVar14._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar10._4_12_ = in_register_00001304;
        auVar10._0_4_ = in_XMM4_Da;
        auVar16 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM2_Da * (float)*(ushort *)(lVar1 + uVar11 * 2)
                                                )),auVar14,auVar10);
        *(int *)(param_3 + param_1 * 4 + uVar11 * 4) = auVar16._0_4_;
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_2);
    }
  }
  return;
}

