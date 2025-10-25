
void FUN_14017310c(longlong param_1,float param_2,longlong param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong in_RDX;
  float in_XMM0_Da;
  
  if (in_RAX < param_4) {
    param_1 = param_1 + in_RDX * 2;
    do {
      *(float *)(param_3 + in_RDX * 4 + in_RAX * 4) =
           (float)((uint)*(ushort *)(param_1 + -2 + in_RAX * 2) +
                  (uint)*(ushort *)(param_1 + 2 + in_RAX * 2)) * param_2 +
           (float)*(ushort *)(param_1 + in_RAX * 2) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_4);
  }
  return;
}

