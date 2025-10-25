
undefined8 FUN_140a8ff60(longlong param_1,int param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0xfffffff8;
  }
  if ((0 < (int)param_1) && ((int)((ulonglong)param_1 >> 0x20) != 0 && -1 < param_1)) {
    if (param_2 < 1) {
      return 0xfffffffa;
    }
    *param_3 = ((int)param_1 + 3U & 0xfffffffc) * 0xc + 0x40;
    return 0;
  }
  return 0xfffffffa;
}

