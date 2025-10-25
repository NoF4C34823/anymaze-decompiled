
undefined8 FUN_1400030e4(undefined *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = &UNK_143084756;
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
  }
  uVar1 = param_2 * 2 + 2;
  if (param_2 < uVar1) {
    lVar2 = CoTaskMemAlloc(uVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_142c94b90(lVar2,puVar4,uVar1);
      return uVar3;
    }
  }
  return 0;
}

