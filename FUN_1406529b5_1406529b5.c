
void FUN_1406529b5(longlong param_1,float param_2,float param_3)

{
  ulonglong in_RAX;
  longlong in_RDX;
  ulonglong in_R10;
  float in_XMM0_Da;
  float unaff_XMM6_Da;
  
  if (in_RAX < in_R10) {
    do {
      *(float *)(in_RDX + in_RAX * 4) =
           (*(float *)(param_1 + -0x24 + in_RAX * 4) + *(float *)(param_1 + 0x24 + in_RAX * 4)) *
           param_2 + (*(float *)(param_1 + -0x18 + in_RAX * 4) +
                     *(float *)(param_1 + 0x18 + in_RAX * 4)) * param_3 +
           (*(float *)(param_1 + -0xc + in_RAX * 4) + *(float *)(param_1 + 0xc + in_RAX * 4)) *
           unaff_XMM6_Da + *(float *)(param_1 + in_RAX * 4) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < in_R10);
  }
  return;
}

