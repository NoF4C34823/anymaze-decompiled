
void FUN_1407bde04(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM4_Da;
  
  if (param_3 < param_4) {
    do {
      *(float *)(in_R10 + param_3 * 4) =
           (float)((uint)*(ushort *)(param_1 + -0xc + param_3 * 2) +
                  (uint)*(ushort *)(param_1 + 0xc + param_3 * 2)) * in_XMM2_Da +
           (float)((uint)*(ushort *)(param_1 + -6 + param_3 * 2) +
                  (uint)*(ushort *)(param_1 + 6 + param_3 * 2)) * in_XMM4_Da +
           (float)*(ushort *)(param_1 + param_3 * 2) * in_XMM0_Da;
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}

