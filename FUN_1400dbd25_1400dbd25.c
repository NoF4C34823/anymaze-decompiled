
void FUN_1400dbd25(longlong param_1,ulonglong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  longlong unaff_RBX;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_register_000012c4 [12];
  undefined4 in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  float in_XMM5_Da;
  undefined1 auVar15 [16];
  
  if (param_1 + 1U <= param_2) {
    param_2 = param_2 - param_1;
    if ((longlong)param_2 < 4) {
      FUN_1400dbdef();
      return;
    }
    uVar10 = 0;
    auVar12._4_4_ = in_XMM4_Da;
    auVar12._0_4_ = in_XMM4_Da;
    auVar12._8_4_ = in_XMM4_Da;
    auVar12._12_4_ = in_XMM4_Da;
    uVar9 = param_2 & 0xfffffffffffffffc;
    auVar14._4_4_ = param_4;
    auVar14._0_4_ = param_4;
    auVar14._8_4_ = param_4;
    auVar14._12_4_ = param_4;
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(unaff_RBX + param_1 * 2 + 0xc + uVar10 * 2);
      auVar2 = vpmovsxwd_avx(auVar2);
      lVar1 = uVar10 + param_1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(unaff_RBX + -0xc + lVar1 * 2);
      auVar3 = vpmovsxwd_avx(auVar3);
      auVar3 = vpaddd_avx(auVar3,auVar2);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(unaff_RBX + -6 + lVar1 * 2);
      auVar2 = vpmovsxwd_avx(auVar4);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(unaff_RBX + 6 + lVar1 * 2);
      auVar4 = vpmovsxwd_avx(auVar5);
      auVar2 = vpaddd_avx(auVar2,auVar4);
      auVar2 = vcvtdq2ps_avx(auVar2);
      auVar3 = vcvtdq2ps_avx(auVar3);
      auVar15._0_4_ = in_XMM5_Da * auVar2._0_4_;
      auVar15._4_4_ = in_XMM5_Da * auVar2._4_4_;
      auVar15._8_4_ = in_XMM5_Da * auVar2._8_4_;
      auVar15._12_4_ = in_XMM5_Da * auVar2._12_4_;
      auVar3 = vfmadd231ps_fma(auVar15,auVar3,auVar12);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(unaff_RBX + lVar1 * 2);
      auVar2 = vpmovsxwd_avx(auVar6);
      auVar2 = vcvtdq2ps_avx(auVar2);
      auVar2 = vfmadd231ps_fma(auVar3,auVar2,auVar14);
      *(undefined1 (*) [16])(param_3 + param_1 * 4 + uVar10 * 4) = auVar2;
      uVar10 = uVar10 + 4;
    } while (uVar10 < uVar9);
    if (uVar9 < param_2) {
      lVar1 = unaff_RBX + param_1 * 2;
      do {
        auVar11._0_4_ = (float)(int)*(short *)(lVar1 + uVar9 * 2);
        auVar11._4_8_ = SUB128(ZEXT812(0),4);
        auVar11._12_4_ = 0;
        auVar13._0_4_ =
             (float)((int)*(short *)(lVar1 + -0xc + uVar9 * 2) +
                    (int)*(short *)(lVar1 + 0xc + uVar9 * 2));
        auVar13._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar8._4_12_ = in_register_00001304;
        auVar8._0_4_ = in_XMM4_Da;
        auVar12 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM5_Da *
                                                (float)((int)*(short *)(lVar1 + -6 + uVar9 * 2) +
                                                       (int)*(short *)(lVar1 + 6 + uVar9 * 2)))),
                                  auVar13,auVar8);
        auVar7._4_12_ = in_register_000012c4;
        auVar7._0_4_ = param_4;
        auVar12 = vfmadd231ss_fma(auVar12,auVar11,auVar7);
        *(int *)(param_3 + param_1 * 4 + uVar9 * 4) = auVar12._0_4_;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_2);
    }
  }
  return;
}

