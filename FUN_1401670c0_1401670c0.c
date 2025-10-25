
undefined8
FUN_1401670c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    return 0xfffffff8;
  }
  if (((0 < (int)param_1) && ((int)((ulonglong)param_1 >> 0x20) != 0 && -1 < param_1)) &&
     ((0 < (int)param_3 && ((int)((ulonglong)param_3 >> 0x20) != 0 && -1 < param_3)))) {
    uVar1 = FUN_140cdd7e0(param_2,param_3,param_4,0);
    return uVar1;
  }
  return 0xfffffffa;
}

