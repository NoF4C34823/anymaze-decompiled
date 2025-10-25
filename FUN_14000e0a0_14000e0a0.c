
void FUN_14000e0a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < param_5._4_4_) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      FUN_140011fa0(iVar1 + param_1,iVar2 + param_3,(undefined4)param_5,param_6);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + param_4;
      iVar1 = iVar1 + param_2;
    } while (iVar3 < param_5._4_4_);
  }
  return;
}

