
void FUN_1408796f3(float param_1,float param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong in_RDX;
  longlong in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  
  if (param_4 < in_R11) {
    lVar1 = unaff_R12 + in_R10 * 4;
    do {
      *(float *)(in_RDX + in_R10 * 4 + param_4 * 4) =
           param_2 * (*(float *)(lVar1 + -0xc + param_4 * 4) + *(float *)(lVar1 + 0xc + param_4 * 4)
                     ) + param_1 * *(float *)(lVar1 + param_4 * 4);
      param_4 = param_4 + 1;
    } while (param_4 < in_R11);
  }
  return;
}

