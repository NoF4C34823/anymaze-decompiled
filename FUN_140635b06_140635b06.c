
void FUN_140635b06(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM4_Da;
  
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((int)*(short *)(param_4 + -4 + param_1 * 2) +
                  (int)*(short *)(param_4 + 4 + param_1 * 2)) * param_2 +
           (float)((int)*(short *)(param_4 + -2 + param_1 * 2) +
                  (int)*(short *)(param_4 + 2 + param_1 * 2)) * in_XMM4_Da +
           (float)(int)*(short *)(param_4 + param_1 * 2) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

