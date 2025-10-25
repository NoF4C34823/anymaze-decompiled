
void FUN_1405ee3bc(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float unaff_XMM6_Da;
  
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((uint)*(ushort *)(param_4 + -0x12 + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 0x12 + param_1 * 2)) * param_2 +
           (float)((uint)*(ushort *)(param_4 + -0xc + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 0xc + param_1 * 2)) * in_XMM2_Da +
           (float)((uint)*(ushort *)(param_4 + -6 + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 6 + param_1 * 2)) * unaff_XMM6_Da +
           (float)*(ushort *)(param_4 + param_1 * 2) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

