
void FUN_1408cb26d(float param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong in_R10;
  longlong in_R11;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  
  if (param_4 < param_3) {
    lVar1 = in_R10 + in_R11 * 4;
    do {
      auVar2 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar1 + -8 + param_4 * 4) +
                                             *(float *)(lVar1 + 8 + param_4 * 4))),in_XMM2,
                               ZEXT416((uint)(param_1 * *(float *)(lVar1 + param_4 * 4))));
      auVar2 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar1 + -4 + param_4 * 4) +
                                             *(float *)(lVar1 + 4 + param_4 * 4))),in_XMM1,auVar2);
      *(int *)(param_2 + in_R11 * 4 + param_4 * 4) = auVar2._0_4_;
      param_4 = param_4 + 1;
    } while (param_4 < param_3);
  }
  return;
}

