
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140003130(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_1436b4680 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x10) < _DAT_1436e72c8) {
    FUN_142bb2214(&DAT_1436e72c8);
    if (_DAT_1436e72c8 == -1) {
      uVar6 = GetModuleHandleW(&UNK_143084c9a);
      _DAT_1436e72c0 = GetProcAddress(uVar6,&UNK_143084c78);
      FUN_142bb21a8(&DAT_1436e72c8);
    }
  }
  if (_DAT_1436e72c0 != 0) {
    FUN_140002e0a(param_1,0x83);
    uVar2 = FUN_14000308e(param_1);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    uVar6 = FUN_1400030d8(param_1);
    iVar3 = (*(code *)PTR__guard_dispatch_icall_142febe98)(&uStack_28,uVar6);
    if (iVar3 == 0) {
      cVar1 = FUN_140002fa0(param_1,(int)uStack_28 + -1);
      uVar4 = 0x8000ffff;
      if (cVar1 != '\0') {
        uVar4 = 0;
      }
      goto LAB_140003256;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x10) < _DAT_1436e72d8) {
    FUN_142bb2214(&DAT_1436e72d8);
    if (_DAT_1436e72d8 == -1) {
      _DAT_1436e72d0 = FUN_1400032fb();
      FUN_142bb21a8(&DAT_1436e72d8);
    }
  }
  if (_DAT_1436e72d0 == 0) {
    uVar4 = 0x80070490;
  }
  else {
    uStack_28 = 0;
    uVar4 = (*(code *)PTR__guard_dispatch_icall_142febe98)();
    if (-1 < (int)uVar4) {
      cVar1 = FUN_140002ebe(param_1,uStack_28);
      if (cVar1 == '\0') {
        uVar5 = GetLastError();
        uVar4 = uVar5 & 0xffff | 0x80070000;
        if ((int)uVar5 < 1) {
          uVar4 = uVar5;
        }
      }
      CoTaskMemFree(uStack_28);
    }
  }
LAB_140003256:
  if ((uStack_20 ^ (ulonglong)auStack_48) == _DAT_1436b4680) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

