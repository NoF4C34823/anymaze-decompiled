
void FUN_1406e0ee9(float param_1,ulonglong param_2,ulonglong param_3,float param_4)

{
  longlong in_R9;
  longlong in_R10;
  
  if (param_2 < param_3) {
    do {
      *(float *)(in_R10 + param_2 * 4) =
           (float)((uint)*(byte *)((param_2 - 1) + in_R9) + (uint)*(byte *)(param_2 + 1 + in_R9)) *
           param_4 + (float)*(byte *)(param_2 + in_R9) * param_1;
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

