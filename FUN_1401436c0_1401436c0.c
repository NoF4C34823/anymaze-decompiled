
undefined8
FUN_1401436c0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             uint param_6,undefined8 param_7,longlong param_8,longlong param_9)

{
  undefined8 uVar1;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_8 == 0)) || (param_9 == 0)) {
    return 0xfffffff8;
  }
  if (((int)param_5 < 1) || (param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  if (((int)param_5 <= param_2) && ((int)param_5 <= param_4)) {
    if ((param_6 < 0x1000) &&
       ((((param_6 == 0xf0 || (param_6 = param_6 & 0xf, param_6 == 6)) || (param_6 == 1)) ||
        ((param_6 == 3 || (param_6 == 5)))))) {
      uVar1 = FUN_14028d0a0();
      return uVar1;
    }
    return 0xffffff1f;
  }
  return 0xfffffff0;
}

