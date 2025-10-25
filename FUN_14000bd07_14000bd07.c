
void FUN_14000bd07(int param_1,int param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_R10D;
  longlong in_R11;
  undefined8 in_XMM0_Qa;
  undefined8 uStack0000000000000080;
  longlong lStack0000000000000090;
  undefined4 uStack00000000000000c0;
  int iStack00000000000000c4;
  undefined4 in_stack_000000d0;
  
  uVar2 = in_stack_000000d0;
  uVar1 = uStack00000000000000c0;
  lStack0000000000000090 = param_3;
  do {
    uStack0000000000000080 = in_XMM0_Qa;
    FUN_14000f840(in_EAX + in_R11,param_1 + lStack0000000000000090,uVar1,&stack0x00000080,uVar2);
    in_R10D = in_R10D + 1;
    param_1 = param_1 + param_4;
    in_EAX = in_EAX + param_2;
  } while (in_R10D < iStack00000000000000c4);
  return;
}

