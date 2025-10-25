
void FUN_1409498c1(float param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong in_RDX;
  ulonglong uVar6;
  longlong in_R10;
  longlong in_R11;
  undefined1 in_register_00001244 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar5 = 0;
  auVar8._4_4_ = param_2;
  auVar8._0_4_ = param_2;
  auVar8._8_4_ = param_2;
  auVar8._12_4_ = param_2;
  uVar6 = param_4 & 0xfffffffffffffffc;
  do {
    pfVar3 = (float *)(in_R10 + -0xc + (uVar5 + in_R11) * 4);
    pfVar1 = (float *)(in_R10 + (uVar5 + in_R11) * 4);
    auVar7._0_4_ = param_1 * *pfVar1;
    auVar7._4_4_ = param_1 * pfVar1[1];
    auVar7._8_4_ = param_1 * pfVar1[2];
    auVar7._12_4_ = param_1 * pfVar1[3];
    pfVar1 = (float *)(in_R10 + in_R11 * 4 + 0xc + uVar5 * 4);
    auVar9._0_4_ = *pfVar3 + *pfVar1;
    auVar9._4_4_ = pfVar3[1] + pfVar1[1];
    auVar9._8_4_ = pfVar3[2] + pfVar1[2];
    auVar9._12_4_ = pfVar3[3] + pfVar1[3];
    auVar7 = vfmadd231ps_fma(auVar7,auVar9,auVar8);
    *(undefined1 (*) [16])(in_RDX + in_R11 * 4 + uVar5 * 4) = auVar7;
    uVar5 = uVar5 + 4;
  } while (uVar5 < uVar6);
  if (uVar6 < param_4) {
    lVar2 = in_R10 + in_R11 * 4;
    do {
      auVar4._4_12_ = in_register_00001244;
      auVar4._0_4_ = param_2;
      auVar8 = vfmadd231ss_fma(ZEXT416((uint)(param_1 * *(float *)(lVar2 + uVar6 * 4))),
                               ZEXT416((uint)(*(float *)(lVar2 + -0xc + uVar6 * 4) +
                                             *(float *)(lVar2 + 0xc + uVar6 * 4))),auVar4);
      *(int *)(in_RDX + in_R11 * 4 + uVar6 * 4) = auVar8._0_4_;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_4);
  }
  return;
}

