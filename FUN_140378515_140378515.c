
void FUN_140378515(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  longlong unaff_R12;
  longlong lStack0000000000000060;
  longlong lStack0000000000000088;
  longlong lStack0000000000000090;
  longlong lStack0000000000000098;
  undefined8 in_stack_000000f0;
  int iStack00000000000000f8;
  int iStack00000000000000fc;
  longlong in_stack_00000110;
  
  lStack0000000000000090 = param_2 << 2;
  lStack0000000000000060 = in_RAX * 4;
  lStack0000000000000088 = param_4 << 2;
  lStack0000000000000098 = in_RAX;
  do {
    FUN_1403bffa0(unaff_RSI,unaff_RBX,param_3,(longlong)iStack00000000000000f8,4);
    thunk_FUN_142d25930(in_stack_00000110,lStack0000000000000098,in_R10,param_3,
                        (longlong)iStack00000000000000fc);
    unaff_RDI = unaff_RDI + 1;
    unaff_R12 = unaff_R12 + 1;
    unaff_RBX = unaff_RBX + lStack0000000000000060;
    if (iStack00000000000000fc <= unaff_RDI) {
      unaff_RDI = 0;
      unaff_RBX = in_stack_00000110;
    }
    unaff_RSI = unaff_RSI + lStack0000000000000090;
    in_R10 = in_R10 + lStack0000000000000088;
  } while (unaff_R12 < in_stack_000000f0._4_4_);
  return;
}

