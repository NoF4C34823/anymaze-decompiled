
void FUN_14082c8bb(longlong param_1,float param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_R9;
  longlong in_R10;
  uint *puVar7;
  ulonglong uVar8;
  float in_XMM0_Da;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  
  uVar6 = param_3 - in_R9;
  if ((longlong)uVar6 < 4) {
    uVar5 = 0;
  }
  else {
    uVar8 = 0;
    uVar5 = uVar6 & 0xfffffffffffffffc;
    puVar7 = (uint *)(in_R9 + param_1);
    do {
      auVar3 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar7 + -1)));
      auVar4 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar7 + 1)));
      auVar3 = vpaddw_avx(auVar3,auVar4);
      auVar3 = vpmovzxwd_avx(auVar3);
      auVar3 = vcvtdq2ps_avx(auVar3);
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      auVar4 = vpmovzxbw_avx(ZEXT416(uVar2));
      auVar4 = vpmovzxwd_avx(auVar4);
      auVar4 = vcvtdq2ps_avx(auVar4);
      pfVar1 = (float *)(in_R10 + in_R9 * 4 + uVar8 * 4);
      *pfVar1 = in_XMM4_Da * auVar3._0_4_ + (float)param_4 * auVar4._0_4_;
      pfVar1[1] = in_XMM4_Db * auVar3._4_4_ + (float)((ulonglong)param_4 >> 0x20) * auVar4._4_4_;
      pfVar1[2] = in_XMM4_Dc * auVar3._8_4_ + in_XMM3_Dc * auVar4._8_4_;
      pfVar1[3] = in_XMM4_Dd * auVar3._12_4_ + in_XMM3_Dd * auVar4._12_4_;
      uVar8 = uVar8 + 4;
    } while (uVar8 < uVar5);
  }
  if (uVar5 < uVar6) {
    param_1 = param_1 + in_R9;
    do {
      *(float *)(in_R10 + in_R9 * 4 + uVar5 * 4) =
           param_2 * (float)((uint)*(byte *)((uVar5 - 1) + param_1) +
                            (uint)*(byte *)(uVar5 + 1 + param_1)) +
           in_XMM0_Da * (float)*(byte *)(uVar5 + param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return;
}

