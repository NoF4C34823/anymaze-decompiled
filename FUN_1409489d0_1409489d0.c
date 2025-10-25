
void FUN_1409489d0(undefined8 param_1,longlong param_2,ulonglong param_3,float param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong in_R9;
  longlong in_R10;
  longlong in_R11;
  undefined1 in_XMM2 [16];
  
  if (in_R9 < param_3) {
    lVar1 = in_R10 + in_R11 * 4;
    do {
      auVar2 = vfmadd231ss_fma(ZEXT416((uint)(param_4 * *(float *)(lVar1 + in_R9 * 4))),
                               ZEXT416((uint)(*(float *)(lVar1 + -4 + in_R9 * 4) +
                                             *(float *)(lVar1 + 4 + in_R9 * 4))),in_XMM2);
      *(int *)(param_2 + in_R11 * 4 + in_R9 * 4) = auVar2._0_4_;
      in_R9 = in_R9 + 1;
    } while (in_R9 < param_3);
  }
  return;
}

