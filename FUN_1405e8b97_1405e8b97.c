
void FUN_1405e8b97(float param_1,float param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  longlong in_RDX;
  longlong in_R10;
  ulonglong in_R11;
  float in_XMM4_Da;
  
  if (param_3 < in_R11) {
    lVar1 = in_R10 + param_4 * 4;
    do {
      *(float *)(in_RDX + param_4 * 4 + param_3 * 4) =
           (*(float *)(lVar1 + -0x18 + param_3 * 4) + *(float *)(lVar1 + 0x18 + param_3 * 4)) *
           param_2 + (*(float *)(lVar1 + -0xc + param_3 * 4) + *(float *)(lVar1 + 0xc + param_3 * 4)
                     ) * in_XMM4_Da + *(float *)(lVar1 + param_3 * 4) * param_1;
      param_3 = param_3 + 1;
    } while (param_3 < in_R11);
  }
  return;
}

