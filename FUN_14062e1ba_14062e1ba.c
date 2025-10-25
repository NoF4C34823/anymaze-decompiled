
void FUN_14062e1ba(float param_1,float param_2,ulonglong param_3,float param_4)

{
  longlong lVar1;
  longlong in_RDX;
  ulonglong in_R10;
  longlong in_R11;
  longlong unaff_R12;
  
  if (in_R10 < param_3) {
    lVar1 = unaff_R12 + in_R11 * 4;
    do {
      *(float *)(in_RDX + in_R11 * 4 + in_R10 * 4) =
           (*(float *)(lVar1 + -8 + in_R10 * 4) + *(float *)(lVar1 + 8 + in_R10 * 4)) * param_2 +
           (*(float *)(lVar1 + -4 + in_R10 * 4) + *(float *)(lVar1 + 4 + in_R10 * 4)) * param_4 +
           *(float *)(lVar1 + in_R10 * 4) * param_1;
      in_R10 = in_R10 + 1;
    } while (in_R10 < param_3);
  }
  return;
}

