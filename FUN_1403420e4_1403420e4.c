
void FUN_1403420e4(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar1;
  undefined8 in_R10;
  longlong in_R11;
  longlong unaff_R12;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  longlong lStack0000000000000090;
  longlong lStack0000000000000098;
  undefined8 in_stack_000000f0;
  longlong in_stack_00000110;
  
  lVar1 = 0;
  uStack0000000000000060 = in_R10;
  uStack0000000000000068 = in_RAX;
  lStack0000000000000090 = param_4;
  lStack0000000000000098 = param_2;
  if (0 < in_stack_000000f0._4_4_) {
    do {
      FUN_1402dd1e0(unaff_RSI,unaff_RBX,uStack0000000000000068,uStack0000000000000060,3);
      thunk_FUN_142d20530(in_stack_00000110,param_1,param_3,uStack0000000000000068);
      unaff_R12 = unaff_R12 + 1;
      unaff_RBX = unaff_RBX + param_1 * 4;
      if (in_R11 <= unaff_R12) {
        unaff_RBX = in_stack_00000110;
      }
      unaff_RSI = unaff_RSI + lStack0000000000000098 * 4;
      param_3 = param_3 + lStack0000000000000090 * 4;
      if (in_R11 <= unaff_R12) {
        unaff_R12 = 0;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < in_stack_000000f0._4_4_);
  }
  return;
}

