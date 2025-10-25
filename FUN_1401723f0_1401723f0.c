
void FUN_1401723f0(ulonglong param_1,float param_2,ulonglong param_3,float param_4)

{
  longlong in_R9;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((uint)*(byte *)((param_1 - 9) + in_R9) + (uint)*(byte *)(param_1 + 9 + in_R9)) *
           param_2 + (float)((uint)*(byte *)((param_1 - 6) + in_R9) +
                            (uint)*(byte *)(param_1 + 6 + in_R9)) * in_XMM2_Da +
           (float)((uint)*(byte *)((param_1 - 3) + in_R9) + (uint)*(byte *)(param_1 + 3 + in_R9)) *
           param_4 + (float)*(byte *)(param_1 + in_R9) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

