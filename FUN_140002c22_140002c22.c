
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140002c22(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1436b4680 ^ (ulonglong)auStack_78;
  if (((int)param_2 < 0) && (0 < *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    uStack_28 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined4 *)(param_1 + 0x10);
    uStack_44 = *(undefined4 *)(param_1 + 0x14);
    uStack_40 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    uStack_38 = *(undefined4 *)(param_1 + 0x20);
    uStack_34 = *(undefined4 *)(param_1 + 0x24);
    uStack_30 = *(undefined4 *)(param_1 + 0x28);
    uStack_2c = *(undefined4 *)(param_1 + 0x2c);
    iVar2 = FUN_1400022d4(&uStack_48,param_1);
    if (iVar2 < 0) {
      (*(code *)PTR__guard_dispatch_icall_142febe98)
                (*(longlong **)(param_1 + 0x38),iVar2,0,
                 *(undefined8 *)(**(longlong **)(param_1 + 0x38) + 0x18));
    }
  }
  else {
    lStack_50 = 0;
    if (param_3 != 0) {
      uVar1 = (*(code *)PTR__guard_dispatch_icall_142febe98)(param_3,&UNK_143084c68,&lStack_50);
      param_2 = (ulonglong)uVar1;
    }
    (*(code *)PTR__guard_dispatch_icall_142febe98)
              (*(undefined8 *)(param_1 + 0x38),param_2,lStack_50);
    if (lStack_50 != 0) {
      lStack_50 = 0;
      (*(code *)PTR__guard_dispatch_icall_142febe98)();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != _DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return 0;
}

