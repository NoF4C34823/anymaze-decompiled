
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000c120(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  float *param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [64];
  undefined1 auStack_18 [16];
  longlong lStack_8;
  
  if (param_6 == (float *)0x0) {
    uVar4 = 0x2646;
    uVar2 = 0x4b23;
    uVar5 = 0xe98;
  }
  else {
    uVar4 = (uint)(_DAT_143085e70 + _DAT_143085e78 * (double)*param_6);
    uVar2 = (uint)(_DAT_143085e70 + _DAT_143085e78 * (double)param_6[1]);
    uVar5 = (uint)(_DAT_143085e70 + _DAT_143085e78 * (double)param_6[2]);
  }
  uVar4 = uVar4 & 0xffff;
  uVar2 = uVar2 & 0xffff;
  auVar1 = vpinsrw_avx(ZEXT416(uVar4),uVar2,1);
  auVar1 = vpinsrw_avx(auVar1,uVar5 & 0xffff,2);
  auVar1 = vpinsrw_avx(auVar1,uVar4,3);
  auVar1 = vpinsrw_avx(auVar1,uVar2,4);
  auVar1 = vpinsrw_avx(auVar1,uVar5 & 0xffff,5);
  auVar1 = vpinsrw_avx(auVar1,uVar4,6);
  auVar1 = vpinsrw_avx(auVar1,uVar2,7);
  if (0 < param_5._4_4_) {
    auVar8 = ZEXT1664(auVar1);
    iVar3 = 0;
    iVar6 = 0;
    iVar7 = 0;
    lStack_8 = param_3;
    do {
      auStack_18 = auVar8._0_16_;
      FUN_140010f60(iVar3 + param_1,iVar6 + lStack_8,(undefined4)param_5,auStack_18,param_7);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + param_4;
      iVar3 = iVar3 + param_2;
    } while (iVar7 < param_5._4_4_);
  }
  return;
}

