
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001001(int param_1,char param_2,undefined8 param_3)

{
  undefined *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined *apuStack_48 [4];
  undefined *puStack_28;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_1436b4680 ^ (ulonglong)auStack_68;
  apuStack_48[0] = &UNK_1430844da;
  apuStack_48[1] = &UNK_143084528;
  apuStack_48[2] = &UNK_143084576;
  apuStack_48[3] = &UNK_1430845c4;
  puStack_28 = &UNK_143084612;
  if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40(_DAT_1436b4680 ^ (ulonglong)auStack_68 ^ (ulonglong)auStack_68);
  }
  puVar1 = apuStack_48[param_1];
  lVar2 = FUN_142c356d0(puVar1);
  FUN_140002e0a(param_3,lVar2 + 0x2a);
  FUN_140002f14(param_3,&UNK_143084700,0x2a);
  if ((uStack_20 ^ (ulonglong)auStack_68) == _DAT_1436b4680) {
    FUN_140002ff4(param_3,puVar1,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

