
undefined8 FUN_14000400c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = GetEnvironmentVariableW(param_1,0,0);
  if (iVar2 != 0) {
    cVar1 = FUN_140002e0a(param_2,iVar2);
    if (cVar1 != '\0') {
      uVar4 = FUN_1400030d8(param_2);
      uVar3 = GetEnvironmentVariableW(param_1,uVar4,iVar2);
      uVar4 = FUN_140002fa0(param_2,uVar3);
      return uVar4;
    }
  }
  return 0;
}

