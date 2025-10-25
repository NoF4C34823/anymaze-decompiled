
undefined8 FUN_140142e60(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  int aiStack_18 [2];
  
  if (param_3 == (int *)0x0) {
    return 0xfffffff8;
  }
  if ((0 < (int)param_1) && ((int)((ulonglong)param_1 >> 0x20) != 0 && -1 < param_1)) {
    if (param_2 == 0x21) {
      iVar1 = 3;
    }
    else {
      if (param_2 != 0x37) {
        return 0xffffffdf;
      }
      iVar1 = 5;
    }
    *param_3 = ((int)param_1 + 0xfU & 0xfffffff0) * 2 * (iVar1 * 2 + 0xf) + 0x170 + iVar1 * 0x18;
    FUN_140aa8760(param_1,iVar1,aiStack_18);
    *param_3 = *param_3 + aiStack_18[0];
    FUN_140aa87c0(param_1,iVar1,aiStack_18);
    *param_3 = *param_3 + aiStack_18[0];
    return 0;
  }
  return 0xfffffffa;
}

