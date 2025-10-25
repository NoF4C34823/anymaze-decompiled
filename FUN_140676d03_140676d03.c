
void FUN_140676d03(undefined8 param_1,longlong param_2,undefined8 param_3,float param_4)

{
  ulonglong in_R9;
  longlong in_R10;
  longlong lVar1;
  longlong in_R11;
  ulonglong unaff_R12;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  if (in_R9 < unaff_R12) {
    lVar1 = in_R10 + in_R11 * 4;
    do {
      *(float *)(param_2 + in_R11 * 4 + in_R9 * 4) =
           (*(float *)(lVar1 + -0x18 + in_R9 * 4) + *(float *)(lVar1 + 0x18 + in_R9 * 4)) *
           in_XMM5_Da +
           (*(float *)(lVar1 + -0xc + in_R9 * 4) + *(float *)(lVar1 + 0xc + in_R9 * 4)) * in_XMM4_Da
           + *(float *)(lVar1 + in_R9 * 4) * param_4;
      in_R9 = in_R9 + 1;
    } while (in_R9 < unaff_R12);
  }
  return;
}

