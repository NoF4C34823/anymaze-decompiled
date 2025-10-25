
undefined8 FUN_140ac73e0(longlong param_1,int param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0xfffffff8;
  }
  if ((0 < (int)param_1) && ((int)((ulonglong)param_1 >> 0x20) != 0 && -1 < param_1)) {
    if (param_2 < 1) {
      return 0xfffffffa;
    }
    *param_3 = (((uint)(param_2 >> 1) >> 0x1e) + param_2 >> 2) * 0x20 + param_2 * 0x22 + 0x42;
    return 0;
  }
  return 0xfffffffa;
}

