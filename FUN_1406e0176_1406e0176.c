
void FUN_1406e0176(longlong param_1,float param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong in_RDX;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM5_Da;
  
  if (param_3 < in_RAX) {
    do {
      *(float *)(in_RDX + param_3 * 4) =
           (*(float *)(param_1 + -0x24 + param_3 * 4) + *(float *)(param_1 + 0x24 + param_3 * 4)) *
           param_2 + (*(float *)(param_1 + -0x18 + param_3 * 4) +
                     *(float *)(param_1 + 0x18 + param_3 * 4)) * in_XMM2_Da +
           (*(float *)(param_1 + -0xc + param_3 * 4) + *(float *)(param_1 + 0xc + param_3 * 4)) *
           in_XMM5_Da + *(float *)(param_1 + param_3 * 4) * in_XMM0_Da;
      param_3 = param_3 + 1;
    } while (param_3 < in_RAX);
  }
  return;
}

