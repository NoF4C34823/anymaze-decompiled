
void FUN_140175316(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  float in_XMM0_Da;
  float in_XMM2_Da;
  
  if (in_RAX < param_4) {
    param_1 = param_1 + param_2 * 2;
    do {
      *(float *)(param_3 + param_2 * 4 + in_RAX * 4) =
           (float)((int)*(short *)(param_1 + -2 + in_RAX * 2) +
                  (int)*(short *)(param_1 + 2 + in_RAX * 2)) * in_XMM2_Da +
           (float)(int)*(short *)(param_1 + in_RAX * 2) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_4);
  }
  return;
}

