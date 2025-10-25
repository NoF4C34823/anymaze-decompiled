
void FUN_1400d2b80(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  ulonglong in_RAX;
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_ZMM6 [64];
  float unaff_XMM12_Da;
  
  if (in_RAX < param_3) {
    do {
      auVar1 = vfmadd231ss_fma(ZEXT416((uint)(unaff_XMM12_Da *
                                             (*(float *)(param_1 + -8 + in_RAX * 4) +
                                             *(float *)(param_1 + 8 + in_RAX * 4)))),
                               ZEXT416((uint)(*(float *)(param_1 + -0xc + in_RAX * 4) +
                                             *(float *)(param_1 + 0xc + in_RAX * 4))),in_XMM5);
      auVar1 = vfmadd231ss_fma(auVar1,ZEXT416((uint)(*(float *)(param_1 + -4 + in_RAX * 4) +
                                                    *(float *)(param_1 + 4 + in_RAX * 4))),
                               in_ZMM6._0_16_);
      auVar1 = vfmadd231ss_fma(auVar1,in_XMM4,ZEXT416(*(uint *)(param_1 + in_RAX * 4)));
      *(int *)(param_2 + in_RAX * 4) = auVar1._0_4_;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

