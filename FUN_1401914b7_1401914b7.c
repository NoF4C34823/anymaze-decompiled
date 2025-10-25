
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401914b7(longlong param_1,longlong param_2,int param_3,int param_4)

{
  float fVar1;
  int in_EAX;
  undefined4 unaff_R12D;
  undefined4 *unaff_R13;
  undefined4 unaff_R15D;
  float in_XMM0_Da;
  float fVar2;
  float in_XMM2_Da;
  
  do {
    fVar2 = (float)thunk_FUN_142edda00((float)((uint)((float)in_EAX * (float)in_EAX) ^
                                              _DAT_143087d90) /
                                       (in_XMM2_Da * (in_XMM2_Da + in_XMM2_Da)));
    *(float *)(param_2 + param_1 * 4) = fVar2;
    fVar1 = _DAT_143087da0;
    param_4 = param_4 + 1;
    in_EAX = in_EAX + -1;
    param_1 = param_1 + 1;
    in_XMM0_Da = in_XMM0_Da + fVar2 + fVar2;
  } while (param_4 < param_3);
  *(float *)(param_2 + (longlong)param_3 * 4) = _DAT_143087da0;
  FUN_141bb24e0(fVar1 + in_XMM0_Da,param_2,param_3 + 1);
  unaff_R13[1] = 0x40;
  *unaff_R13 = unaff_R15D;
  unaff_R13[2] = unaff_R12D;
  unaff_R13[4] = 0;
  return 0;
}

