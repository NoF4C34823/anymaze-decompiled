
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400016ba(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  int iStack_1c;
  longlong lStack_18;
  ulonglong uStack_10;
  
  uStack_10 = _DAT_1436b4680 ^ (ulonglong)auStack_48;
  lStack_18 = 0;
  if (((param_1 != 0) &&
      (iVar1 = (*(code *)PTR__guard_dispatch_icall_142febe98)(param_1,&UNK_143084880,&lStack_18),
      iVar1 == 0)) && (lStack_18 != 0)) {
    iStack_1c = 0;
    iVar1 = (*(code *)PTR__guard_dispatch_icall_142febe98)(lStack_18,&iStack_1c);
    uVar2 = CONCAT71((int7)((ulonglong)&iStack_1c >> 8),iStack_1c == 1);
    if (iVar1 == 0) goto LAB_1400016fa;
  }
  uVar2 = 0;
LAB_1400016fa:
  if (lStack_18 != 0) {
    lStack_18 = 0;
    (*(code *)PTR__guard_dispatch_icall_142febe98)();
  }
  if ((uStack_10 ^ (ulonglong)auStack_48) != _DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return uVar2 & 0xffffffff;
}

