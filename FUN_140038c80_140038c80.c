
undefined8
FUN_140038c80(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) {
    return 0xfffffff8;
  }
  if ((((0 < (int)param_1) && (0 < (int)((ulonglong)param_1 >> 0x20))) && (0 < (int)param_2)) &&
     (0 < (int)((ulonglong)param_2 >> 0x20))) {
    uVar1 = FUN_14057b740();
    *param_3 = 0;
    *param_4 = 0;
    return uVar1;
  }
  return 0xfffffffa;
}

