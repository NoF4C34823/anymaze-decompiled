
void FUN_140192c74(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  ulonglong uVar1;
  ulonglong in_R9;
  float in_XMM2_Da;
  
  uVar1 = 0;
  if (param_2 + 1U <= in_R9) {
    param_1 = param_1 + param_2 * 4;
    do {
      *(float *)(param_3 + param_2 * 4 + uVar1 * 4) =
           (*(float *)(param_1 + -4 + uVar1 * 4) + *(float *)(param_1 + 4 + uVar1 * 4)) * param_4 +
           *(float *)(param_1 + uVar1 * 4) * in_XMM2_Da;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_R9 - param_2);
  }
  return;
}

