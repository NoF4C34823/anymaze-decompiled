
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000bf80(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  float *param_6,undefined4 param_7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ulonglong uStack_18;
  undefined8 uStack_10;
  longlong lStack_8;
  
  if (param_6 == (float *)0x0) {
    uVar3 = 0x2646;
    uVar1 = 0x4b23;
    uVar4 = 0xe98;
  }
  else {
    uVar3 = (uint)((double)*param_6 * _DAT_143085e68 + _DAT_143085e60);
    uVar1 = (ushort)(int)((double)param_6[1] * _DAT_143085e68 + _DAT_143085e60);
    uVar4 = (ushort)(int)(_DAT_143085e60 + _DAT_143085e68 * (double)param_6[2]);
  }
  if (0 < param_5._4_4_) {
    iVar2 = 0;
    iVar5 = 0;
    iVar6 = 0;
    lStack_8 = param_3;
    do {
      uStack_18 = (ulonglong)(uVar3 & 0xffff) | (ulonglong)uVar1 << 0x10 | (ulonglong)uVar4 << 0x20
                  | (ulonglong)(ushort)uVar3 << 0x30;
      uStack_10 = CONCAT26(uVar1,CONCAT24((ushort)uVar3,CONCAT22(uVar4,uVar1)));
      FUN_140010740(iVar2 + param_1,iVar5 + lStack_8,(undefined4)param_5,&uStack_18,param_7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + param_4;
      iVar2 = iVar2 + param_2;
    } while (iVar6 < param_5._4_4_);
  }
  return;
}

