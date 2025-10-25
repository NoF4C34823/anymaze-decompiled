
void FUN_140793e3d(ulonglong param_1,float param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong in_RDX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float in_XMM0_Da;
  float in_XMM4_Da;
  
  if (in_RAX < param_1) {
    lVar1 = unaff_RBX + in_RDX * 4;
    do {
      *(float *)(unaff_RSI + in_RDX * 4 + in_RAX * 4) =
           (*(float *)(lVar1 + -0x18 + in_RAX * 4) + *(float *)(lVar1 + 0x18 + in_RAX * 4)) *
           param_2 + (*(float *)(lVar1 + -0xc + in_RAX * 4) + *(float *)(lVar1 + 0xc + in_RAX * 4))
                     * in_XMM4_Da + *(float *)(lVar1 + in_RAX * 4) * in_XMM0_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_1);
  }
  return;
}

