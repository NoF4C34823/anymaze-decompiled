
void FUN_1408f4f81(undefined8 param_1,longlong param_2,ulonglong param_3,float param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_R10;
  longlong in_R11;
  undefined1 auVar7 [16];
  undefined4 in_XMM2_Da;
  undefined1 in_register_00001284 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar5 = 0;
  auVar7._4_4_ = in_XMM2_Da;
  auVar7._0_4_ = in_XMM2_Da;
  auVar7._8_4_ = in_XMM2_Da;
  auVar7._12_4_ = in_XMM2_Da;
  uVar6 = param_3 & 0xfffffffffffffffc;
  do {
    lVar1 = uVar5 + in_R11;
    pfVar2 = (float *)(in_R10 + -4 + lVar1 * 4);
    pfVar3 = (float *)(in_R10 + 4 + lVar1 * 4);
    auVar9._0_4_ = *pfVar2 + *pfVar3;
    auVar9._4_4_ = pfVar2[1] + pfVar3[1];
    auVar9._8_4_ = pfVar2[2] + pfVar3[2];
    auVar9._12_4_ = pfVar2[3] + pfVar3[3];
    pfVar2 = (float *)(in_R10 + lVar1 * 4);
    auVar8._0_4_ = param_4 * *pfVar2;
    auVar8._4_4_ = param_4 * pfVar2[1];
    auVar8._8_4_ = param_4 * pfVar2[2];
    auVar8._12_4_ = param_4 * pfVar2[3];
    auVar8 = vfmadd231ps_fma(auVar8,auVar9,auVar7);
    *(undefined1 (*) [16])(param_2 + in_R11 * 4 + uVar5 * 4) = auVar8;
    uVar5 = uVar5 + 4;
  } while (uVar5 < uVar6);
  if (uVar6 < param_3) {
    lVar1 = in_R10 + in_R11 * 4;
    do {
      auVar4._4_12_ = in_register_00001284;
      auVar4._0_4_ = in_XMM2_Da;
      auVar7 = vfmadd231ss_fma(ZEXT416((uint)(param_4 * *(float *)(lVar1 + uVar6 * 4))),
                               ZEXT416((uint)(*(float *)(lVar1 + -4 + uVar6 * 4) +
                                             *(float *)(lVar1 + 4 + uVar6 * 4))),auVar4);
      *(int *)(param_2 + in_R11 * 4 + uVar6 * 4) = auVar7._0_4_;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  return;
}

