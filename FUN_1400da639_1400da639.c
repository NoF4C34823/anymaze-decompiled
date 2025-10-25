
void FUN_1400da639(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  longlong unaff_RDI;
  ulonglong in_R9;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 in_register_000012c4 [12];
  undefined4 in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  float in_XMM5_Da;
  undefined1 auVar24 [16];
  
  auVar21._4_4_ = in_XMM4_Da;
  auVar21._0_4_ = in_XMM4_Da;
  auVar21._8_4_ = in_XMM4_Da;
  auVar21._12_4_ = in_XMM4_Da;
  auVar21._16_4_ = in_XMM4_Da;
  auVar21._20_4_ = in_XMM4_Da;
  auVar21._24_4_ = in_XMM4_Da;
  auVar21._28_4_ = in_XMM4_Da;
  auVar23._4_4_ = param_4;
  auVar23._0_4_ = param_4;
  auVar23._8_4_ = param_4;
  auVar23._12_4_ = param_4;
  auVar23._16_4_ = param_4;
  auVar23._20_4_ = param_4;
  auVar23._24_4_ = param_4;
  auVar23._28_4_ = param_4;
  do {
    auVar2 = *(undefined1 (*) [32])(param_1 + 4 + in_R9 * 2);
    auVar3 = *(undefined1 (*) [32])(param_1 + -4 + in_R9 * 2);
    auVar4 = *(undefined1 (*) [32])(param_1 + 2 + in_R9 * 2);
    auVar5 = *(undefined1 (*) [32])(param_1 + -2 + in_R9 * 2);
    auVar6 = *(undefined1 (*) [32])(param_1 + in_R9 * 2);
    auVar12 = vpmovsxwd_avx2(auVar3._0_16_);
    auVar13 = vpmovsxwd_avx2(auVar2._0_16_);
    auVar12 = vpaddd_avx2(auVar12,auVar13);
    auVar3 = vpmovsxwd_avx2(auVar3._16_16_);
    auVar2 = vpmovsxwd_avx2(auVar2._16_16_);
    auVar3 = vpaddd_avx2(auVar3,auVar2);
    auVar2 = vcvtdq2ps_avx(auVar12);
    auVar3 = vcvtdq2ps_avx(auVar3);
    auVar12 = vpmovsxwd_avx2(auVar5._0_16_);
    auVar13 = vpmovsxwd_avx2(auVar4._0_16_);
    auVar12 = vpaddd_avx2(auVar12,auVar13);
    auVar5 = vpmovsxwd_avx2(auVar5._16_16_);
    auVar4 = vpmovsxwd_avx2(auVar4._16_16_);
    auVar13 = vpaddd_avx2(auVar5,auVar4);
    auVar4 = vcvtdq2ps_avx(auVar12);
    auVar5 = vcvtdq2ps_avx(auVar13);
    auVar12._4_4_ = in_XMM5_Da * auVar4._4_4_;
    auVar12._0_4_ = in_XMM5_Da * auVar4._0_4_;
    auVar12._8_4_ = in_XMM5_Da * auVar4._8_4_;
    auVar12._12_4_ = in_XMM5_Da * auVar4._12_4_;
    auVar12._16_4_ = in_XMM5_Da * auVar4._16_4_;
    auVar12._20_4_ = in_XMM5_Da * auVar4._20_4_;
    auVar12._24_4_ = in_XMM5_Da * auVar4._24_4_;
    auVar12._28_4_ = auVar13._28_4_;
    auVar13._4_4_ = in_XMM5_Da * auVar5._4_4_;
    auVar13._0_4_ = in_XMM5_Da * auVar5._0_4_;
    auVar13._8_4_ = in_XMM5_Da * auVar5._8_4_;
    auVar13._12_4_ = in_XMM5_Da * auVar5._12_4_;
    auVar13._16_4_ = in_XMM5_Da * auVar5._16_4_;
    auVar13._20_4_ = in_XMM5_Da * auVar5._20_4_;
    auVar13._24_4_ = in_XMM5_Da * auVar5._24_4_;
    auVar13._28_4_ = auVar4._28_4_;
    auVar19 = vfmadd231ps_fma(auVar12,auVar2,auVar21);
    auVar22 = vfmadd231ps_fma(auVar13,auVar3,auVar21);
    auVar2 = vpmovsxwd_avx2(auVar6._0_16_);
    auVar3 = vpmovsxwd_avx2(auVar6._16_16_);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar3 = vcvtdq2ps_avx(auVar3);
    auVar19 = vfmadd231ps_fma(ZEXT1632(auVar19),auVar2,auVar23);
    auVar22 = vfmadd231ps_fma(ZEXT1632(auVar22),auVar3,auVar23);
    *(undefined1 (*) [32])(unaff_RDI + in_R9 * 4) = ZEXT1632(auVar19);
    *(undefined1 (*) [32])(unaff_RDI + 0x20 + in_R9 * 4) = ZEXT1632(auVar22);
    in_R9 = in_R9 + 0x10;
  } while (in_R9 < param_2);
  if (param_2 + 1 <= param_3) {
    param_3 = param_3 - param_2;
    if ((longlong)param_3 < 4) {
      FUN_1400da84f();
      return;
    }
    uVar17 = 0;
    auVar19._4_4_ = in_XMM4_Da;
    auVar19._0_4_ = in_XMM4_Da;
    auVar19._8_4_ = in_XMM4_Da;
    auVar19._12_4_ = in_XMM4_Da;
    uVar16 = param_3 & 0xfffffffffffffffc;
    auVar22._4_4_ = param_4;
    auVar22._0_4_ = param_4;
    auVar22._8_4_ = param_4;
    auVar22._12_4_ = param_4;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(param_1 + param_2 * 2 + 4 + uVar17 * 2);
      auVar7 = vpmovsxwd_avx(auVar7);
      lVar1 = uVar17 + param_2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(param_1 + -4 + lVar1 * 2);
      auVar8 = vpmovsxwd_avx(auVar8);
      auVar8 = vpaddd_avx(auVar8,auVar7);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
      auVar7 = vpmovsxwd_avx(auVar9);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
      auVar9 = vpmovsxwd_avx(auVar10);
      auVar7 = vpaddd_avx(auVar7,auVar9);
      auVar7 = vcvtdq2ps_avx(auVar7);
      auVar8 = vcvtdq2ps_avx(auVar8);
      auVar24._0_4_ = in_XMM5_Da * auVar7._0_4_;
      auVar24._4_4_ = in_XMM5_Da * auVar7._4_4_;
      auVar24._8_4_ = in_XMM5_Da * auVar7._8_4_;
      auVar24._12_4_ = in_XMM5_Da * auVar7._12_4_;
      auVar8 = vfmadd231ps_fma(auVar24,auVar8,auVar19);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
      auVar7 = vpmovsxwd_avx(auVar11);
      auVar7 = vcvtdq2ps_avx(auVar7);
      auVar7 = vfmadd231ps_fma(auVar8,auVar7,auVar22);
      *(undefined1 (*) [16])(unaff_RDI + param_2 * 4 + uVar17 * 4) = auVar7;
      uVar17 = uVar17 + 4;
    } while (uVar17 < uVar16);
    if (uVar16 < param_3) {
      param_1 = param_1 + param_2 * 2;
      do {
        auVar18._0_4_ = (float)(int)*(short *)(param_1 + uVar16 * 2);
        auVar18._4_8_ = SUB128(ZEXT812(0),4);
        auVar18._12_4_ = 0;
        auVar20._0_4_ =
             (float)((int)*(short *)(param_1 + -4 + uVar16 * 2) +
                    (int)*(short *)(param_1 + 4 + uVar16 * 2));
        auVar20._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar15._4_12_ = in_register_00001304;
        auVar15._0_4_ = in_XMM4_Da;
        auVar19 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM5_Da *
                                                (float)((int)*(short *)(param_1 + -2 + uVar16 * 2) +
                                                       (int)*(short *)(param_1 + 2 + uVar16 * 2)))),
                                  auVar20,auVar15);
        auVar14._4_12_ = in_register_000012c4;
        auVar14._0_4_ = param_4;
        auVar19 = vfmadd231ss_fma(auVar19,auVar18,auVar14);
        *(int *)(unaff_RDI + param_2 * 4 + uVar16 * 4) = auVar19._0_4_;
        uVar16 = uVar16 + 1;
      } while (uVar16 < param_3);
    }
  }
  return;
}

