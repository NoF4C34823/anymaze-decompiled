
void FUN_1406e6379(float param_1,float param_2,ulonglong param_3,longlong param_4)

{
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM4_Da;
  
  if (in_RDX < param_3) {
    do {
      *(float *)(in_R10 + in_RDX * 4) =
           (float)((int)*(short *)(param_4 + -0xc + in_RDX * 2) +
                  (int)*(short *)(param_4 + 0xc + in_RDX * 2)) * param_2 +
           (float)((int)*(short *)(param_4 + -6 + in_RDX * 2) +
                  (int)*(short *)(param_4 + 6 + in_RDX * 2)) * in_XMM4_Da +
           (float)(int)*(short *)(param_4 + in_RDX * 2) * param_1;
      in_RDX = in_RDX + 1;
    } while (in_RDX < param_3);
  }
  return;
}

