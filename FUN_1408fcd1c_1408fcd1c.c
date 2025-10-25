
void FUN_1408fcd1c(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float in_XMM2_Da;
  undefined4 in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  undefined1 auVar10 [16];
  
  if (param_2 + 1U <= param_4) {
    param_4 = param_4 - param_2;
    if ((longlong)param_4 < 4) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      auVar10._4_4_ = in_XMM4_Da;
      auVar10._0_4_ = in_XMM4_Da;
      auVar10._8_4_ = in_XMM4_Da;
      auVar10._12_4_ = in_XMM4_Da;
      uVar6 = param_4 & 0xfffffffffffffffc;
      do {
        lVar1 = uVar7 + param_2;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
        auVar2 = vpmovsxwd_avx(auVar2);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
        auVar3 = vpmovsxwd_avx(auVar3);
        auVar3 = vpaddd_avx(auVar2,auVar3);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
        auVar2 = vpmovsxwd_avx(auVar4);
        auVar2 = vcvtdq2ps_avx(auVar2);
        auVar3 = vcvtdq2ps_avx(auVar3);
        auVar8._0_4_ = in_XMM2_Da * auVar2._0_4_;
        auVar8._4_4_ = in_XMM2_Da * auVar2._4_4_;
        auVar8._8_4_ = in_XMM2_Da * auVar2._8_4_;
        auVar8._12_4_ = in_XMM2_Da * auVar2._12_4_;
        auVar2 = vfmadd231ps_fma(auVar8,auVar3,auVar10);
        *(undefined1 (*) [16])(param_3 + param_2 * 4 + uVar7 * 4) = auVar2;
        uVar7 = uVar7 + 4;
      } while (uVar7 < uVar6);
    }
    if (uVar6 < param_4) {
      param_1 = param_1 + param_2 * 2;
      do {
        auVar9._0_4_ = (float)((int)*(short *)(param_1 + -2 + uVar6 * 2) +
                              (int)*(short *)(param_1 + 2 + uVar6 * 2));
        auVar9._4_8_ = SUB128(ZEXT812(0),4);
        auVar9._12_4_ = 0;
        auVar5._4_12_ = in_register_00001304;
        auVar5._0_4_ = in_XMM4_Da;
        auVar10 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM2_Da *
                                                (float)(int)*(short *)(param_1 + uVar6 * 2))),auVar9
                                  ,auVar5);
        *(int *)(param_3 + param_2 * 4 + uVar6 * 4) = auVar10._0_4_;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_4);
    }
  }
  return;
}

