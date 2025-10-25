
void FUN_1408a4a3b(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong in_RAX;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float in_XMM4_Da;
  
  if (in_RAX < param_2) {
    param_1 = param_1 + param_3;
    do {
      auVar1._0_4_ = (float)*(byte *)(in_RAX + param_1);
      auVar1._4_8_ = SUB128(ZEXT812(0),4);
      auVar1._12_4_ = 0;
      auVar2._0_4_ = (float)((uint)*(byte *)((in_RAX - 6) + param_1) +
                            (uint)*(byte *)(in_RAX + 6 + param_1));
      auVar2._4_8_ = SUB128(ZEXT812(0),4);
      auVar2._12_4_ = 0;
      auVar2 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM4_Da *
                                             (float)((uint)*(byte *)((in_RAX - 3) + param_1) +
                                                    (uint)*(byte *)(in_RAX + 3 + param_1)))),auVar2,
                               in_XMM1);
      auVar2 = vfmadd231ss_fma(auVar2,auVar1,in_XMM0);
      *(int *)(param_4 + param_3 * 4 + in_RAX * 4) = auVar2._0_4_;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_2);
  }
  return;
}

