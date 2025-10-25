
void FUN_14092115b(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float in_XMM4_Da;
  
  if (in_RAX < param_4) {
    param_1 = param_1 + param_2;
    do {
      auVar1._0_4_ = (float)*(byte *)(in_RAX + param_1);
      auVar1._4_8_ = SUB128(ZEXT812(0),4);
      auVar1._12_4_ = 0;
      auVar2._0_4_ = (float)((uint)*(byte *)((in_RAX - 2) + param_1) +
                            (uint)*(byte *)(in_RAX + 2 + param_1));
      auVar2._4_8_ = SUB128(ZEXT812(0),4);
      auVar2._12_4_ = 0;
      auVar2 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM4_Da *
                                             (float)((uint)*(byte *)((in_RAX - 1) + param_1) +
                                                    (uint)*(byte *)(in_RAX + 1 + param_1)))),auVar2,
                               in_XMM1);
      auVar2 = vfmadd231ss_fma(auVar2,auVar1,in_XMM0);
      *(int *)(param_3 + param_2 * 4 + in_RAX * 4) = auVar2._0_4_;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_4);
  }
  return;
}

