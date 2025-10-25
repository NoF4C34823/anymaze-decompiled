
undefined8 * FUN_140002d14(undefined8 *param_1,int param_2)

{
  *param_1 = &UNK_143084c40;
  if (param_1[7] != 0) {
    param_1[7] = 0;
    (*(code *)PTR__guard_dispatch_icall_142febe98)();
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xc0000001;
  if (param_2 != 0) {
    FUN_142bb2164(param_1);
  }
  return param_1;
}

