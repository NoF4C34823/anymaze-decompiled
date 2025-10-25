
undefined8 FUN_14000306a(ulonglong *param_1,undefined2 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (param_3 < uVar1) {
    *(undefined2 *)(param_1[2] + param_3 * 2) = param_2;
  }
  return CONCAT71((int7)(uVar1 >> 8),param_3 < uVar1);
}

