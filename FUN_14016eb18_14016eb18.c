
void FUN_14016eb18(undefined8 param_1,longlong param_2,float param_3,float param_4)

{
  longlong lVar1;
  ulonglong in_R9;
  longlong in_R10;
  ulonglong in_R11;
  longlong unaff_R14;
  
  if (in_R9 < in_R11) {
    lVar1 = unaff_R14 + in_R10 * 4;
    do {
      *(float *)(param_2 + in_R10 * 4 + in_R9 * 4) =
           (*(float *)(lVar1 + -0xc + in_R9 * 4) + *(float *)(lVar1 + 0xc + in_R9 * 4)) * param_4 +
           *(float *)(lVar1 + in_R9 * 4) * param_3;
      in_R9 = in_R9 + 1;
    } while (in_R9 < in_R11);
  }
  return;
}

