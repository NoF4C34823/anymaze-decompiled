
void FUN_140728c93(longlong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  ulonglong in_RDX;
  longlong unaff_RDI;
  float in_XMM0_Da;
  float in_XMM2_Da;
  
  if (in_RDX < param_3) {
    param_1 = param_1 + unaff_RDI;
    do {
      *(float *)(param_4 + unaff_RDI * 4 + in_RDX * 4) =
           (float)((uint)*(byte *)((in_RDX - 2) + param_1) + (uint)*(byte *)(in_RDX + 2 + param_1))
           * param_2 +
           (float)((uint)*(byte *)((in_RDX - 1) + param_1) + (uint)*(byte *)(in_RDX + 1 + param_1))
           * in_XMM2_Da + (float)*(byte *)(in_RDX + param_1) * in_XMM0_Da;
      in_RDX = in_RDX + 1;
    } while (in_RDX < param_3);
  }
  return;
}

