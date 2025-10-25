
void FUN_1407e4a2d(ulonglong param_1,float param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong in_RDX;
  longlong in_R9;
  ulonglong uVar6;
  float in_XMM0_Da;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  
  uVar6 = 0;
  uVar5 = param_1 & 0xfffffffffffffffc;
  do {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(param_3 + in_RDX * 2 + 6 + uVar6 * 2);
    auVar2 = vpmovsxwd_avx(auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(param_3 + -6 + (uVar6 + in_RDX) * 2);
    auVar3 = vpmovsxwd_avx(auVar3);
    auVar2 = vpaddd_avx(auVar3,auVar2);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(param_3 + (uVar6 + in_RDX) * 2);
    auVar3 = vpmovsxwd_avx(auVar4);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar3 = vcvtdq2ps_avx(auVar3);
    pfVar1 = (float *)(in_R9 + in_RDX * 4 + uVar6 * 4);
    *pfVar1 = in_XMM4_Da * auVar2._0_4_ + (float)param_4 * auVar3._0_4_;
    pfVar1[1] = in_XMM4_Db * auVar2._4_4_ + (float)((ulonglong)param_4 >> 0x20) * auVar3._4_4_;
    pfVar1[2] = in_XMM4_Dc * auVar2._8_4_ + in_XMM3_Dc * auVar3._8_4_;
    pfVar1[3] = in_XMM4_Dd * auVar2._12_4_ + in_XMM3_Dd * auVar3._12_4_;
    uVar6 = uVar6 + 4;
  } while (uVar6 < uVar5);
  if (uVar5 < param_1) {
    param_3 = param_3 + in_RDX * 2;
    do {
      *(float *)(in_R9 + in_RDX * 4 + uVar5 * 4) =
           param_2 * (float)((int)*(short *)(param_3 + -6 + uVar5 * 2) +
                            (int)*(short *)(param_3 + 6 + uVar5 * 2)) +
           in_XMM0_Da * (float)(int)*(short *)(param_3 + uVar5 * 2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_1);
  }
  return;
}

