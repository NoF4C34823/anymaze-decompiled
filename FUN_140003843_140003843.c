
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140003843(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 *puStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1436b4680 ^ (ulonglong)auStack_48;
  puStack_28 = &uStack_20;
  uStack_20 = 0;
  iVar1 = RegOpenKeyExW(param_1,&UNK_143084f70,0,0x20019);
  RegCloseKey(uStack_20);
  if ((uStack_18 ^ (ulonglong)auStack_48) == _DAT_1436b4680) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

