
void FUN_14065173d(longlong param_1,float param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong in_RDX;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM5_Da;
  
  if (in_RAX < param_3) {
    do {
      *(float *)(in_RDX + in_RAX * 4) =
           (*(float *)(param_1 + -0xc + in_RAX * 4) + *(float *)(param_1 + 0xc + in_RAX * 4)) *
           param_2 + (*(float *)(param_1 + -8 + in_RAX * 4) + *(float *)(param_1 + 8 + in_RAX * 4))
                     * in_XMM2_Da +
           (*(float *)(param_1 + -4 + in_RAX * 4) + *(float *)(param_1 + 4 + in_RAX * 4)) *
           in_XMM5_Da + *(float *)(param_1 + in_RAX * 4) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

