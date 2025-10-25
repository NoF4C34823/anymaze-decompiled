
void FUN_1406e2194(float param_1,float param_2,ulonglong param_3,longlong param_4)

{
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM5_Da;
  
  if (in_RDX < param_3) {
    do {
      *(float *)(in_R10 + in_RDX * 4) =
           (float)((uint)*(byte *)((in_RDX - 6) + param_4) + (uint)*(byte *)(in_RDX + 6 + param_4))
           * param_2 +
           (float)((uint)*(byte *)((in_RDX - 3) + param_4) + (uint)*(byte *)(in_RDX + 3 + param_4))
           * in_XMM5_Da + (float)*(byte *)(in_RDX + param_4) * param_1;
      in_RDX = in_RDX + 1;
    } while (in_RDX < param_3);
  }
  return;
}

