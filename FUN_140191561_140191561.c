
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140191561(float param_1,longlong param_2,int param_3)

{
  float fVar1;
  undefined4 unaff_R12D;
  undefined4 *unaff_R13;
  undefined4 unaff_R15D;
  
  fVar1 = _DAT_143087da0;
  *(float *)(param_2 + (longlong)param_3 * 4) = _DAT_143087da0;
  FUN_141bb24e0(fVar1 + param_1,fVar1 + param_1,param_3 + 1);
  unaff_R13[1] = 0x40;
  *unaff_R13 = unaff_R15D;
  unaff_R13[2] = unaff_R12D;
  unaff_R13[4] = 0;
  return 0;
}

