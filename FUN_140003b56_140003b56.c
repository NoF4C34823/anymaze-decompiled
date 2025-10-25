
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140003b56(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             uint *param_5,longlong param_6,undefined8 param_7,undefined1 *param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  int *piStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1436b4680 ^ (ulonglong)auStack_88;
  if (param_6 == 0) {
    if (param_5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40(uStack_48 ^ (ulonglong)auStack_88);
    }
    piStack_60 = &iStack_4c;
    iStack_4c = 0;
    puStack_58 = &uStack_50;
    uStack_50 = 4;
    uStack_68 = 0;
    iVar2 = RegGetValueW(param_1,0,param_2,0x10);
    iVar3 = iStack_4c;
    if (iVar2 == 0) {
LAB_140003caf:
      bVar5 = iVar3 == 1;
    }
    else {
      cVar1 = FUN_140003cca(param_1,param_2,param_3,param_4);
      if (cVar1 == '\0') goto LAB_140003c52;
      if (*param_3 != 0) {
        iVar3 = FUN_142c39cfc();
        goto LAB_140003caf;
      }
      bVar5 = false;
    }
    *param_5 = (uint)bVar5;
    uVar4 = 1;
    if (param_8 != (undefined1 *)0x0) {
      *param_8 = 1;
    }
  }
  else {
    cVar1 = FUN_140003cca(param_1,param_2,param_3,param_4);
    if ((cVar1 != '\0') && (cVar1 = FUN_140003098(param_4), cVar1 == '\0')) {
      FUN_14000378b(param_6,*param_3,param_7);
      uVar4 = 1;
      goto LAB_140003c54;
    }
LAB_140003c52:
    uVar4 = 0;
  }
LAB_140003c54:
  if ((uStack_48 ^ (ulonglong)auStack_88) != _DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return uVar4;
}

