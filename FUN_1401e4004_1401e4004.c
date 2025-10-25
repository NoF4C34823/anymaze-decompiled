
void FUN_1401e4004(ulonglong param_1,float param_2,longlong param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong in_RDX;
  float in_XMM0_Da;
  
  if (in_RAX < param_1) {
    param_3 = param_3 + in_RDX * 2;
    do {
      *(float *)(param_4 + in_RDX * 4 + in_RAX * 4) =
           param_2 * (float)((uint)*(ushort *)(param_3 + -6 + in_RAX * 2) +
                            (uint)*(ushort *)(param_3 + 6 + in_RAX * 2)) +
           in_XMM0_Da * (float)*(ushort *)(param_3 + in_RAX * 2);
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_1);
  }
  return;
}

