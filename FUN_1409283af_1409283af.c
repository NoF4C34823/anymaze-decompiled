
void FUN_1409283af(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  float in_XMM5_Da;
  
  if (in_RAX < param_2) {
    lVar1 = unaff_RBX + param_1 * 2;
    do {
      auVar2._0_4_ = (float)(int)*(short *)(lVar1 + in_RAX * 2);
      auVar2._4_8_ = SUB128(ZEXT812(0),4);
      auVar2._12_4_ = 0;
      auVar3._0_4_ = (float)((int)*(short *)(lVar1 + -0xc + in_RAX * 2) +
                            (int)*(short *)(lVar1 + 0xc + in_RAX * 2));
      auVar3._4_8_ = SUB128(ZEXT812(0),4);
      auVar3._12_4_ = 0;
      auVar3 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM5_Da *
                                             (float)((int)*(short *)(lVar1 + -6 + in_RAX * 2) +
                                                    (int)*(short *)(lVar1 + 6 + in_RAX * 2)))),
                               auVar3,in_XMM4);
      auVar3 = vfmadd231ss_fma(auVar3,auVar2,in_XMM3);
      *(int *)(param_3 + param_1 * 4 + in_RAX * 4) = auVar3._0_4_;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_2);
  }
  return;
}

