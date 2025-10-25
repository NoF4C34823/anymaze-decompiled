
void FUN_14017695a(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM5_Da;
  
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((int)*(short *)(param_4 + -0x12 + param_1 * 2) +
                  (int)*(short *)(param_4 + 0x12 + param_1 * 2)) * param_2 +
           (float)((int)*(short *)(param_4 + -0xc + param_1 * 2) +
                  (int)*(short *)(param_4 + 0xc + param_1 * 2)) * in_XMM2_Da +
           (float)((int)*(short *)(param_4 + -6 + param_1 * 2) +
                  (int)*(short *)(param_4 + 6 + param_1 * 2)) * in_XMM5_Da +
           (float)(int)*(short *)(param_4 + param_1 * 2) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

