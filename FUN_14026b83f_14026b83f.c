
void FUN_14026b83f(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  longlong unaff_R12;
  longlong lVar1;
  longlong lVar2;
  longlong lStack0000000000000060;
  longlong lStack0000000000000088;
  longlong lStack0000000000000090;
  longlong lStack0000000000000098;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  longlong in_stack_00000110;
  
  lStack0000000000000060 = param_3;
  lStack0000000000000088 = param_4;
  lStack0000000000000090 = param_2;
  lStack0000000000000098 = in_R10;
  do {
    FUN_1403a4f20(unaff_RSI,unaff_RBX);
    unaff_R12 = unaff_R12 + 1;
    unaff_RSI = unaff_RSI + param_2 * 4;
    unaff_RBX = unaff_RBX + in_R10 * 4;
  } while (unaff_R12 < unaff_RDI);
  lVar1 = 0;
  if (0 < in_stack_000000f0._4_4_) {
    lStack0000000000000090 = lStack0000000000000090 << 2;
    lStack0000000000000088 = lStack0000000000000088 << 2;
    lVar2 = lStack0000000000000060;
    lStack0000000000000060 = lStack0000000000000098 * 4;
    do {
      FUN_1403a4f20(unaff_RSI,unaff_RBX);
      thunk_FUN_142d23d30(in_stack_00000110,lStack0000000000000098,lVar2);
      unaff_RDI = unaff_RDI + 1;
      lVar1 = lVar1 + 1;
      unaff_RBX = unaff_RBX + lStack0000000000000060;
      if (in_stack_000000f8._4_4_ <= unaff_RDI) {
        unaff_RDI = 0;
        unaff_RBX = in_stack_00000110;
      }
      unaff_RSI = unaff_RSI + lStack0000000000000090;
      lVar2 = lVar2 + lStack0000000000000088;
    } while (lVar1 < in_stack_000000f0._4_4_);
  }
  return;
}

