
void FUN_1403787f6(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
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
  undefined8 in_stack_000000f8;
  longlong in_stack_00000110;
  
  lStack0000000000000090 = param_2 << 2;
  lStack0000000000000060 = in_R10 * 4;
  lStack0000000000000088 = param_4 << 2;
  lStack0000000000000098 = in_R10;
  do {
    FUN_1403bffa0(unaff_RSI,unaff_RBX);
    thunk_FUN_142d25930(in_stack_00000110,lStack0000000000000098,param_3);
    unaff_RDI = unaff_RDI + 1;
    unaff_R12 = unaff_R12 + 1;
    unaff_RBX = unaff_RBX + lStack0000000000000060;
    if (in_stack_000000f8._4_4_ <= unaff_RDI) {
      unaff_RDI = 0;
      unaff_RBX = in_stack_00000110;
    }
    unaff_RSI = unaff_RSI + lStack0000000000000090;
    param_3 = param_3 + lStack0000000000000088;
  } while (unaff_R12 < in_stack_000000f0._4_4_);
  return;
}

