
void FUN_140631032(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float unaff_XMM10_Da;
  
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((uint)*(byte *)((param_1 - 3) + param_4) + (uint)*(byte *)(param_1 + 3 + param_4)
                  ) * param_2 +
           (float)((uint)*(byte *)((param_1 - 2) + param_4) + (uint)*(byte *)(param_1 + 2 + param_4)
                  ) * in_XMM2_Da +
           (float)((uint)*(byte *)((param_1 - 1) + param_4) + (uint)*(byte *)(param_1 + 1 + param_4)
                  ) * unaff_XMM10_Da + (float)*(byte *)(param_1 + param_4) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

