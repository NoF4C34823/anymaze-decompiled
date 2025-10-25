
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000bc40(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  float *param_6,undefined4 param_7)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  longlong lStack_8;
  
  if (param_6 == (float *)0x0) {
    uVar3 = 0x2646;
    uVar5 = 0x4b23;
    uVar1 = 0xe98;
  }
  else {
    uVar3 = (undefined2)(int)((double)*param_6 * _DAT_143085e48 + _DAT_143085e40);
    uVar5 = (undefined2)(int)((double)param_6[1] * _DAT_143085e48 + _DAT_143085e40);
    uVar1 = (undefined2)(int)(_DAT_143085e40 + _DAT_143085e48 * (double)param_6[2]);
  }
  iVar6 = 0;
  iVar4 = 0;
  iVar2 = 0;
  lStack_8 = param_3;
  if (0 < param_5._4_4_) {
    do {
      uStack_18 = CONCAT44(CONCAT22(uVar3,uVar1),CONCAT22(uVar5,uVar3));
      uStack_10 = CONCAT44(CONCAT22(uVar5,uVar3),CONCAT22(uVar1,uVar5));
      FUN_14000f840(iVar2 + param_1,iVar4 + lStack_8,(undefined4)param_5,&uStack_18,param_7);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + param_4;
      iVar2 = iVar2 + param_2;
    } while (iVar6 < param_5._4_4_);
  }
  return;
}

