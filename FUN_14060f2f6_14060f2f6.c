
void FUN_14060f2f6(longlong param_1,ulonglong param_2,longlong param_3,float param_4)

{
  ulonglong in_R9;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  
  if (param_2 < in_R9) {
    param_3 = param_3 + param_1;
    do {
      *(float *)(in_R10 + param_1 * 4 + param_2 * 4) =
           (float)((uint)*(byte *)((param_2 - 6) + param_3) + (uint)*(byte *)(param_2 + 6 + param_3)
                  ) * param_4 +
           (float)((uint)*(byte *)((param_2 - 3) + param_3) + (uint)*(byte *)(param_2 + 3 + param_3)
                  ) * in_XMM2_Da + (float)*(byte *)(param_2 + param_3) * in_XMM0_Da;
      param_2 = param_2 + 1;
    } while (param_2 < in_R9);
  }
  return;
}

