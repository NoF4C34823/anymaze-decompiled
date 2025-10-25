
void FUN_1408fcc5a(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

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
  ulonglong in_R10;
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
    auVar2 = *(undefined1 (*) [32])(param_1 + 2 + in_R10 * 2);
    auVar3 = *(undefined1 (*) [32])(param_1 + -2 + in_R10 * 2);
    auVar4 = *(undefined1 (*) [32])(param_1 + in_R10 * 2);
    auVar8 = vpmovsxwd_avx2(auVar3._0_16_);
    auVar9 = vpmovsxwd_avx2(auVar2._0_16_);
    auVar8 = vpaddd_avx2(auVar8,auVar9);
    auVar8 = vcvtdq2ps_avx(auVar8);
    auVar3 = vpmovsxwd_avx2(auVar3._16_16_);
    auVar2 = vpmovsxwd_avx2(auVar2._16_16_);
    auVar2 = vpaddd_avx2(auVar3,auVar2);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar3 = vpmovsxwd_avx2(auVar4._0_16_);
    auVar3 = vcvtdq2ps_avx(auVar3);
    auVar9._4_4_ = in_XMM2_Da * auVar3._4_4_;
    auVar9._0_4_ = in_XMM2_Da * auVar3._0_4_;
    auVar9._8_4_ = in_XMM2_Da * auVar3._8_4_;
    auVar9._12_4_ = in_XMM2_Da * auVar3._12_4_;
    auVar9._16_4_ = in_XMM2_Da * auVar3._16_4_;
    auVar9._20_4_ = in_XMM2_Da * auVar3._20_4_;
    auVar9._24_4_ = in_XMM2_Da * auVar3._24_4_;
    auVar9._28_4_ = auVar3._28_4_;
    auVar3 = vpmovsxwd_avx2(auVar4._16_16_);
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
    *(undefined1 (*) [32])(param_3 + in_R10 * 4) = ZEXT1632(auVar16);
    auVar16 = vfmadd231ps_fma(auVar4,auVar2,auVar15);
    *(undefined1 (*) [32])(param_3 + 0x20 + in_R10 * 4) = ZEXT1632(auVar16);
    in_R10 = in_R10 + 0x10;
  } while (in_R10 < param_2);
  if (param_2 + 1 <= param_4) {
    param_4 = param_4 - param_2;
    if ((longlong)param_4 < 4) {
      uVar11 = 0;
    }
    else {
      uVar12 = 0;
      auVar16._4_4_ = in_XMM4_Da;
      auVar16._0_4_ = in_XMM4_Da;
      auVar16._8_4_ = in_XMM4_Da;
      auVar16._12_4_ = in_XMM4_Da;
      uVar11 = param_4 & 0xfffffffffffffffc;
      do {
        lVar1 = uVar12 + param_2;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
        auVar5 = vpmovsxwd_avx(auVar5);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
        auVar6 = vpmovsxwd_avx(auVar6);
        auVar6 = vpaddd_avx(auVar5,auVar6);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
        auVar5 = vpmovsxwd_avx(auVar7);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar13._0_4_ = in_XMM2_Da * auVar5._0_4_;
        auVar13._4_4_ = in_XMM2_Da * auVar5._4_4_;
        auVar13._8_4_ = in_XMM2_Da * auVar5._8_4_;
        auVar13._12_4_ = in_XMM2_Da * auVar5._12_4_;
        auVar5 = vfmadd231ps_fma(auVar13,auVar6,auVar16);
        *(undefined1 (*) [16])(param_3 + param_2 * 4 + uVar12 * 4) = auVar5;
        uVar12 = uVar12 + 4;
      } while (uVar12 < uVar11);
    }
    if (uVar11 < param_4) {
      param_1 = param_1 + param_2 * 2;
      do {
        auVar14._0_4_ =
             (float)((int)*(short *)(param_1 + -2 + uVar11 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar11 * 2));
        auVar14._4_8_ = SUB128(ZEXT812(0),4);
        auVar14._12_4_ = 0;
        auVar10._4_12_ = in_register_00001304;
        auVar10._0_4_ = in_XMM4_Da;
        auVar16 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM2_Da *
                                                (float)(int)*(short *)(param_1 + uVar11 * 2))),
                                  auVar14,auVar10);
        *(int *)(param_3 + param_2 * 4 + uVar11 * 4) = auVar16._0_4_;
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_4);
    }
  }
  return;
}

