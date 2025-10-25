
void FUN_14067ada6(longlong param_1,undefined8 param_2,ulonglong param_3,float param_4)

{
  ulonglong in_RAX;
  longlong in_R9;
  longlong in_R10;
  float in_XMM0_Da;
  
  if (in_RAX < param_3) {
    in_R9 = in_R9 + param_1 * 2;
    do {
      *(float *)(in_R10 + param_1 * 4 + in_RAX * 4) =
           (float)((uint)*(ushort *)(in_R9 + -6 + in_RAX * 2) +
                  (uint)*(ushort *)(in_R9 + 6 + in_RAX * 2)) * param_4 +
           (float)*(ushort *)(in_R9 + in_RAX * 2) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

