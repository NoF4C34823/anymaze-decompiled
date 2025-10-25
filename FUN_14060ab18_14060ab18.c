
void FUN_14060ab18(undefined8 param_1,longlong param_2,ulonglong param_3,float param_4)

{
  longlong lVar1;
  ulonglong in_R9;
  longlong in_R10;
  longlong in_R11;
  float in_XMM2_Da;
  
  if (in_R9 < param_3) {
    lVar1 = in_R11 + in_R10 * 4;
    do {
      *(float *)(param_2 + in_R10 * 4 + in_R9 * 4) =
           (*(float *)(lVar1 + -4 + in_R9 * 4) + *(float *)(lVar1 + 4 + in_R9 * 4)) * param_4 +
           *(float *)(lVar1 + in_R9 * 4) * in_XMM2_Da;
      in_R9 = in_R9 + 1;
    } while (in_R9 < param_3);
  }
  return;
}

