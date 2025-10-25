
void FUN_14072c1e4(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM4_Da;
  
  if (param_4 < param_3) {
    do {
      *(float *)(in_R10 + param_4 * 4) =
           (float)((uint)*(ushort *)(param_1 + -4 + param_4 * 2) +
                  (uint)*(ushort *)(param_1 + 4 + param_4 * 2)) * in_XMM2_Da +
           (float)((uint)*(ushort *)(param_1 + -2 + param_4 * 2) +
                  (uint)*(ushort *)(param_1 + 2 + param_4 * 2)) * in_XMM4_Da +
           (float)*(ushort *)(param_1 + param_4 * 2) * in_XMM0_Da;
      param_4 = param_4 + 1;
    } while (param_4 < param_3);
  }
  return;
}

