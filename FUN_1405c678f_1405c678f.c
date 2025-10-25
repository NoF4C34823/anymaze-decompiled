
void FUN_1405c678f(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  
  if (in_RAX < param_3) {
    param_1 = param_1 + param_4;
    do {
      *(float *)(in_R10 + param_4 * 4 + in_RAX * 4) =
           (float)((uint)*(byte *)((in_RAX - 1) + param_1) + (uint)*(byte *)(in_RAX + 1 + param_1))
           * in_XMM2_Da + (float)*(byte *)(in_RAX + param_1) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

