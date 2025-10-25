
void FUN_1407b6cdd(longlong param_1,float param_2,ulonglong param_3,float param_4)

{
  ulonglong in_RAX;
  longlong in_RDX;
  longlong unaff_RDI;
  float in_XMM0_Da;
  
  if (in_RAX < param_3) {
    param_1 = param_1 + in_RDX * 4;
    do {
      *(float *)(unaff_RDI + in_RDX * 4 + in_RAX * 4) =
           (*(float *)(param_1 + -8 + in_RAX * 4) + *(float *)(param_1 + 8 + in_RAX * 4)) * param_2
           + (*(float *)(param_1 + -4 + in_RAX * 4) + *(float *)(param_1 + 4 + in_RAX * 4)) *
             param_4 + *(float *)(param_1 + in_RAX * 4) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

