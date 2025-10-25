
undefined8
FUN_140126080(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             int param_6,uint param_7,undefined8 param_8,longlong param_9)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_3 == 0)) || (param_9 == 0)) {
    return 0xfffffff8;
  }
  if (((int)param_5 < 1) || (param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  if ((param_2 < (int)param_5) || (param_4 < (int)param_5)) {
    return 0xfffffff0;
  }
  if ((0xff < param_7) ||
     ((((param_7 != 0xf0 && (param_7 = param_7 & 0xf, param_7 != 6)) && (param_7 != 1)) &&
      (param_7 != 3)))) {
    return 0xffffff1f;
  }
  if (param_6 == 0x21) {
    iVar2 = 3;
  }
  else {
    if (param_6 != 0x37) {
      return 0xffffffdf;
    }
    iVar2 = 5;
  }
  if (iVar2 == 3) {
    uVar1 = FUN_140126280();
    return uVar1;
  }
  if (iVar2 == 5) {
    uVar1 = FUN_140126280();
    return uVar1;
  }
  return 0xfffffffe;
}

