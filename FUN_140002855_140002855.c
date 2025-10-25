
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140002855(short *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  short *psStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1436b4680 ^ (ulonglong)auStack_58;
  psStack_30 = (short *)0x0;
  uVar1 = 1;
  lVar2 = 0;
  do {
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_2 + lVar2 * 4) = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_142c4a77c(param_1,&psStack_30,10);
      *(int *)(param_2 + lVar2 * 4) = (int)uVar1;
      if ((psStack_30 == (short *)0x0 || psStack_30 == param_1) || (*psStack_30 != 0x2e)) {
        uVar1 = 0;
        if (psStack_30 == param_1 && lVar2 == 0) goto LAB_1400028e4;
      }
      else {
        param_1 = psStack_30 + 1;
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
      }
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
LAB_1400028e4:
  if ((uStack_28 ^ (ulonglong)auStack_58) == _DAT_1436b4680) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

