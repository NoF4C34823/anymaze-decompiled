
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001f54(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [36];
  int iStack_24;
  longlong lStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1436b4680 ^ (ulonglong)auStack_48;
  if ((param_1 != 0) &&
     ((*(char *)(param_2 + 0x1e) != '\x01' || (*(char *)(param_2 + 0x1d) == '\0')))) {
    lStack_20 = 0;
    iVar1 = (*(code *)PTR__guard_dispatch_icall_142febe98)(param_1,&UNK_143350d28,&lStack_20);
    if (-1 < iVar1) {
      if (lStack_20 == 0) goto LAB_140002047;
      if (*(char *)(param_2 + 0x1e) == '\0') {
        iStack_24 = 0;
        iVar1 = (*(code *)PTR__guard_dispatch_icall_142febe98)();
        if ((-1 < iVar1) && (iStack_24 == 1)) {
          *(undefined4 *)(param_2 + 0x18) = 1;
        }
      }
      if (*(char *)(param_2 + 0x1d) == '\0') {
        iStack_24 = -0x55555556;
        iVar1 = (*(code *)PTR__guard_dispatch_icall_142febe98)(lStack_20,&iStack_24);
        if (iStack_24 != 0 && -1 < iVar1) {
          *(undefined1 *)(param_2 + 0x1d) = 1;
          *(int *)(param_2 + 0x20) = iStack_24;
        }
      }
    }
    if (lStack_20 != 0) {
      lStack_20 = 0;
      (*(code *)PTR__guard_dispatch_icall_142febe98)();
    }
  }
LAB_140002047:
  if ((uStack_18 ^ (ulonglong)auStack_48) != _DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return;
}

