
void FUN_1400d7c8f(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  float in_XMM5_Da;
  
  if (in_RAX < param_3) {
    param_1 = param_1 + param_2 * 2;
    do {
      auVar1._0_4_ = (float)*(ushort *)(param_1 + in_RAX * 2);
      auVar1._4_8_ = SUB128(ZEXT812(0),4);
      auVar1._12_4_ = 0;
      auVar2._0_4_ = (float)((uint)*(ushort *)(param_1 + -4 + in_RAX * 2) +
                            (uint)*(ushort *)(param_1 + 4 + in_RAX * 2));
      auVar2._4_8_ = SUB128(ZEXT812(0),4);
      auVar2._12_4_ = 0;
      auVar2 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM5_Da *
                                             (float)((uint)*(ushort *)(param_1 + -2 + in_RAX * 2) +
                                                    (uint)*(ushort *)(param_1 + 2 + in_RAX * 2)))),
                               auVar2,in_XMM4);
      auVar2 = vfmadd231ss_fma(auVar2,auVar1,in_XMM3);
      *(int *)(unaff_RDI + param_2 * 4 + in_RAX * 4) = auVar2._0_4_;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

