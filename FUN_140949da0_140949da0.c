
void FUN_140949da0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  ulonglong in_RAX;
  ulonglong in_R10;
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_ZMM6 [64];
  float unaff_XMM9_Da;
  
  if (in_RAX < in_R10) {
    do {
      auVar1 = vfmadd231ss_fma(ZEXT416((uint)(unaff_XMM9_Da *
                                             (*(float *)(param_1 + -0x18 + in_RAX * 4) +
                                             *(float *)(param_1 + 0x18 + in_RAX * 4)))),
                               ZEXT416((uint)(*(float *)(param_1 + -0x24 + in_RAX * 4) +
                                             *(float *)(param_1 + 0x24 + in_RAX * 4))),in_XMM5);
      auVar1 = vfmadd231ss_fma(auVar1,ZEXT416((uint)(*(float *)(param_1 + -0xc + in_RAX * 4) +
                                                    *(float *)(param_1 + 0xc + in_RAX * 4))),
                               in_ZMM6._0_16_);
      auVar1 = vfmadd231ss_fma(auVar1,in_XMM4,ZEXT416(*(uint *)(param_1 + in_RAX * 4)));
      *(int *)(param_2 + in_RAX * 4) = auVar1._0_4_;
      in_RAX = in_RAX + 1;
    } while (in_RAX < in_R10);
  }
  return;
}

