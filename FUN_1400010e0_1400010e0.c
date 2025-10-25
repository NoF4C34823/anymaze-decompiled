
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1400010e0(int param_1)

{
  undefined1 auStack_58 [32];
  undefined *apuStack_38 [4];
  undefined *puStack_18;
  ulonglong uStack_8;
  
  uStack_8 = _DAT_1436b4680 ^ (ulonglong)auStack_58;
  apuStack_38[0] = &UNK_143084756;
  apuStack_38[1] = &UNK_143084758;
  apuStack_38[2] = &UNK_143084762;
  apuStack_38[3] = &UNK_14308476a;
  puStack_18 = &UNK_143084778;
  if ((_DAT_1436b4680 ^ (ulonglong)auStack_58 ^ (ulonglong)auStack_58) == _DAT_1436b4680) {
    return apuStack_38[param_1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

