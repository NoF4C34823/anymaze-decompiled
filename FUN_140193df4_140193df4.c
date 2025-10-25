
void FUN_140193df4(longlong param_1,ulonglong param_2,longlong param_3,float param_4)

{
  ulonglong uVar1;
  longlong in_R9;
  float in_XMM2_Da;
  
  uVar1 = 0;
  if (param_3 + 1U <= param_2) {
    param_1 = param_1 + param_3 * 4;
    do {
      *(float *)(in_R9 + param_3 * 4 + uVar1 * 4) =
           (*(float *)(param_1 + -0xc + uVar1 * 4) + *(float *)(param_1 + 0xc + uVar1 * 4)) *
           param_4 + *(float *)(param_1 + uVar1 * 4) * in_XMM2_Da;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2 - param_3);
  }
  return;
}

