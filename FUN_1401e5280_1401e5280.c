
void FUN_1401e5280(longlong param_1,float param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong in_RDX;
  longlong in_R9;
  ulonglong uVar7;
  ulonglong uVar8;
  float in_XMM0_Da;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  
  uVar7 = in_R9 - in_RDX;
  if ((longlong)uVar7 < 4) {
    uVar6 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar7 & 0xfffffffffffffffc;
    do {
      lVar1 = uVar8 + in_RDX;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
      auVar3 = vpmovsxwd_avx(auVar3);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
      auVar4 = vpmovsxwd_avx(auVar4);
      auVar3 = vpaddd_avx(auVar3,auVar4);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
      auVar4 = vpmovsxwd_avx(auVar5);
      auVar3 = vcvtdq2ps_avx(auVar3);
      auVar4 = vcvtdq2ps_avx(auVar4);
      pfVar2 = (float *)(param_3 + in_RDX * 4 + uVar8 * 4);
      *pfVar2 = in_XMM4_Da * auVar3._0_4_ + (float)param_4 * auVar4._0_4_;
      pfVar2[1] = in_XMM4_Db * auVar3._4_4_ + (float)((ulonglong)param_4 >> 0x20) * auVar4._4_4_;
      pfVar2[2] = in_XMM4_Dc * auVar3._8_4_ + in_XMM3_Dc * auVar4._8_4_;
      pfVar2[3] = in_XMM4_Dd * auVar3._12_4_ + in_XMM3_Dd * auVar4._12_4_;
      uVar8 = uVar8 + 4;
    } while (uVar8 < uVar6);
  }
  if (uVar6 < uVar7) {
    param_1 = param_1 + in_RDX * 2;
    do {
      *(float *)(param_3 + in_RDX * 4 + uVar6 * 4) =
           param_2 * (float)((int)*(short *)(param_1 + -2 + uVar6 * 2) +
                            (int)*(short *)(param_1 + 2 + uVar6 * 2)) +
           in_XMM0_Da * (float)(int)*(short *)(param_1 + uVar6 * 2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return;
}

