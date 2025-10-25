
undefined8 FUN_140002b46(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  do {
    if (*(uint *)(&UNK_143084b68 + lVar1) < *(uint *)(param_1 + lVar1)) break;
    if (*(uint *)(param_1 + lVar1) < *(uint *)(&UNK_143084b68 + lVar1)) {
      OutputDebugStringA(&UNK_143084b78);
      uVar2 = FUN_1400030de(param_2);
      OutputDebugStringW(uVar2);
      OutputDebugStringA(&UNK_1430847f0);
      return 0;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  uVar2 = FUN_140001153(param_2);
  return uVar2;
}

