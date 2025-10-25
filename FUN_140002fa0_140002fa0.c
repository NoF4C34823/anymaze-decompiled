
undefined8 FUN_140002fa0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    *param_1 = param_2;
    if (param_1[2] != 0) {
      *(undefined2 *)(param_1[2] + param_2 * 2) = 0;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),param_2 <= uVar1);
}

