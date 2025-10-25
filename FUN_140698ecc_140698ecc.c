
void FUN_140698ecc(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  if (in_RAX < param_3) {
    do {
      *(float *)(param_2 + in_RAX * 4) =
           (*(float *)(param_1 + -0xc + in_RAX * 4) + *(float *)(param_1 + 0xc + in_RAX * 4)) *
           unaff_XMM6_Da +
           (*(float *)(param_1 + -8 + in_RAX * 4) + *(float *)(param_1 + 8 + in_RAX * 4)) *
           unaff_XMM7_Da +
           (*(float *)(param_1 + -4 + in_RAX * 4) + *(float *)(param_1 + 4 + in_RAX * 4)) *
           in_XMM5_Da + *(float *)(param_1 + in_RAX * 4) * in_XMM4_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

