
void FUN_1402f53b8(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar2;
  undefined8 in_R10;
  longlong in_R11;
  longlong unaff_R12;
  longlong lVar3;
  longlong lStack0000000000000060;
  longlong lStack0000000000000068;
  longlong lStack0000000000000090;
  undefined8 in_stack_000000f0;
  longlong in_stack_00000110;
  
  lStack0000000000000060 = in_R11;
  lStack0000000000000068 = param_3;
  lStack0000000000000090 = param_4;
  do {
    FUN_1402fd0c0(unaff_RSI,unaff_RBX);
    lVar1 = lStack0000000000000060;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = unaff_RSI + param_2 * 4;
    unaff_RBX = unaff_RBX + param_1 * 4;
  } while (unaff_RDI < unaff_R12);
  lVar2 = 0;
  lVar3 = lStack0000000000000068;
  lStack0000000000000060 = in_R10;
  lStack0000000000000068 = in_RAX;
  if (0 < in_stack_000000f0._4_4_) {
    do {
      FUN_1402fd0c0(unaff_RSI,unaff_RBX,lStack0000000000000068,lStack0000000000000060,4);
      thunk_FUN_142d22130(in_stack_00000110,param_1,lVar3,lStack0000000000000068,lVar1);
      unaff_R12 = unaff_R12 + 1;
      unaff_RBX = unaff_RBX + param_1 * 4;
      if (lVar1 <= unaff_R12) {
        unaff_RBX = in_stack_00000110;
      }
      unaff_RSI = unaff_RSI + param_2 * 4;
      if (lVar1 <= unaff_R12) {
        unaff_R12 = 0;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + lStack0000000000000090 * 4;
    } while (lVar2 < in_stack_000000f0._4_4_);
  }
  return;
}

