
void FUN_14082a533(float param_1,float param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong in_RDX;
  longlong in_R10;
  longlong in_R11;
  
  if (param_4 < param_3) {
    lVar1 = in_R11 + in_R10 * 4;
    do {
      *(float *)(in_RDX + in_R10 * 4 + param_4 * 4) =
           param_2 * (*(float *)(lVar1 + -4 + param_4 * 4) + *(float *)(lVar1 + 4 + param_4 * 4)) +
           param_1 * *(float *)(lVar1 + param_4 * 4);
      param_4 = param_4 + 1;
    } while (param_4 < param_3);
  }
  return;
}

