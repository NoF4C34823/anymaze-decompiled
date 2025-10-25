
uint FUN_140001206(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  FUN_140002e0a(param_2,0x104);
  uVar1 = FUN_14000308e(param_2);
  uVar5 = FUN_1400030d8(param_2);
  uVar2 = GetModuleFileNameW(param_1,uVar5,uVar1);
  uVar6 = FUN_14000308e(param_2);
  if ((uVar6 == uVar2) && (iVar3 = GetLastError(), iVar3 == 0x7a)) {
    FUN_140002e0a(param_2,0x1000);
    uVar1 = FUN_14000308e(param_2);
    uVar5 = FUN_1400030d8(param_2);
    uVar2 = GetModuleFileNameW(param_1,uVar5,uVar1);
  }
  if (uVar2 != 0) {
    uVar6 = FUN_14000308e(param_2);
    if (uVar2 < uVar6) {
      FUN_140002fa0(param_2,(ulonglong)uVar2);
      return 0;
    }
  }
  uVar4 = GetLastError();
  uVar2 = uVar4 & 0xffff | 0x80070000;
  if ((int)uVar4 < 1) {
    uVar2 = uVar4;
  }
  return uVar2;
}

