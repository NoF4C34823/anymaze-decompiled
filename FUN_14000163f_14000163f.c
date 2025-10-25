
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000163f(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x10) < _DAT_1436e7278) {
    FUN_142bb2214(&DAT_1436e7278);
    if (_DAT_1436e7278 == -1) {
      _DAT_1436e7270 = FUN_140002914();
      FUN_142bb21a8(&DAT_1436e7278);
    }
  }
  if (_DAT_1436e7270 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014000167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = GetProcAddress(_DAT_1436e7270,param_1);
    return uVar1;
  }
  return 0;
}

