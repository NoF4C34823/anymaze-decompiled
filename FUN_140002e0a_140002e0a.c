
ulonglong FUN_140002e0a(longlong *param_1,ulonglong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((ulonglong)param_1[1] < param_2) {
    if (param_2 == 0xffffffffffffffff) {
      uVar3 = 0;
    }
    else {
      lVar2 = -1;
      if (-1 < (longlong)(param_2 + 1)) {
        lVar2 = param_2 * 2 + 2;
      }
      puVar1 = (undefined2 *)thunk_FUN_142bb2118(lVar2);
      if (*param_1 == 0) {
        *puVar1 = 0;
        lVar2 = param_1[2];
      }
      else {
        lVar2 = param_1[2];
        FUN_142c94b90(puVar1,lVar2,*param_1 * 2 + 2);
      }
      if (lVar2 != 0) {
        thunk_FUN_142bb2164(lVar2);
      }
      param_1[2] = (longlong)puVar1;
      param_1[1] = param_2;
    }
  }
  return uVar3 & 0xffffffff;
}

