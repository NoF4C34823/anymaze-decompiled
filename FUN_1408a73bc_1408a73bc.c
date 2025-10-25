
void FUN_1408a73bc(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float in_XMM2_Da;
  undefined4 in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  undefined1 auVar10 [16];
  
  if (param_1 + 1U <= param_2) {
    param_2 = param_2 - param_1;
    if ((longlong)param_2 < 4) {
      FUN_1408a7441();
      return;
    }
    uVar7 = 0;
    auVar10._4_4_ = in_XMM4_Da;
    auVar10._0_4_ = in_XMM4_Da;
    auVar10._8_4_ = in_XMM4_Da;
    auVar10._12_4_ = in_XMM4_Da;
    uVar6 = param_2 & 0xfffffffffffffffc;
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(unaff_RDI + param_1 * 2 + 6 + uVar7 * 2);
      auVar2 = vpmovzxwd_avx(auVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(unaff_RDI + -6 + (uVar7 + param_1) * 2);
      auVar3 = vpmovzxwd_avx(auVar3);
      auVar3 = vpaddd_avx(auVar3,auVar2);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(unaff_RDI + (uVar7 + param_1) * 2);
      auVar2 = vpmovzxwd_avx(auVar4);
      auVar2 = vcvtdq2ps_avx(auVar2);
      auVar3 = vcvtdq2ps_avx(auVar3);
      auVar8._0_4_ = in_XMM2_Da * auVar2._0_4_;
      auVar8._4_4_ = in_XMM2_Da * auVar2._4_4_;
      auVar8._8_4_ = in_XMM2_Da * auVar2._8_4_;
      auVar8._12_4_ = in_XMM2_Da * auVar2._12_4_;
      auVar2 = vfmadd231ps_fma(auVar8,auVar3,auVar10);
      *(undefined1 (*) [16])(param_3 + param_1 * 4 + uVar7 * 4) = auVar2;
      uVar7 = uVar7 + 4;
    } while (uVar7 < uVar6);
    if (uVar6 < param_2) {
      lVar1 = unaff_RDI + param_1 * 2;
      do {
        auVar9._0_4_ = (float)((uint)*(ushort *)(lVar1 + -6 + uVar6 * 2) +
                              (uint)*(ushort *)(lVar1 + 6 + uVar6 * 2));
        auVar9._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar5._4_12_ = in_register_00001304;
        auVar5._0_4_ = in_XMM4_Da;
        auVar10 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM2_Da * (float)*(ushort *)(lVar1 + uVar6 * 2))
                                         ),auVar9,auVar5);
        *(int *)(param_3 + param_1 * 4 + uVar6 * 4) = auVar10._0_4_;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
  }
  return;
}

