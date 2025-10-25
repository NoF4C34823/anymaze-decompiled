
void FUN_1406decaf(undefined8 param_1,longlong param_2,ulonglong param_3,float param_4)

{
  ulonglong in_R9;
  longlong in_R10;
  longlong lVar1;
  longlong in_R11;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  if (in_R9 < param_3) {
    lVar1 = in_R10 + in_R11 * 4;
    do {
      *(float *)(param_2 + in_R11 * 4 + in_R9 * 4) =
           (*(float *)(lVar1 + -8 + in_R9 * 4) + *(float *)(lVar1 + 8 + in_R9 * 4)) * in_XMM5_Da +
           (*(float *)(lVar1 + -4 + in_R9 * 4) + *(float *)(lVar1 + 4 + in_R9 * 4)) * in_XMM4_Da +
           *(float *)(lVar1 + in_R9 * 4) * param_4;
      in_R9 = in_R9 + 1;
    } while (in_R9 < param_3);
  }
  return;
}

