
void FUN_14043a3e9(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar2;
  undefined8 in_R10;
  longlong in_R11;
  longlong unaff_R12;
  longlong lVar3;
  longlong lVar4;
  longlong lStack0000000000000060;
  longlong lStack0000000000000068;
  longlong lStack0000000000000090;
  int iStack00000000000000e0;
  int iStack00000000000000e4;
  longlong in_stack_00000100;
  
  lStack0000000000000060 = in_R11;
  lStack0000000000000068 = param_3;
  lStack0000000000000090 = param_4;
  do {
    thunk_FUN_140d172c0(unaff_RSI,unaff_RBX);
    lVar1 = lStack0000000000000060;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = unaff_RSI + param_2 * 2;
    unaff_RBX = unaff_RBX + param_1 * 2;
  } while (unaff_RDI < unaff_R12);
  lVar2 = 0;
  lVar4 = lStack0000000000000068;
  lStack0000000000000060 = in_R10;
  lStack0000000000000068 = param_2;
  if (0 < iStack00000000000000e4) {
    do {
      thunk_FUN_140d172c0(unaff_RSI,unaff_RBX,(longlong)iStack00000000000000e0,
                          lStack0000000000000060,1);
      thunk_FUN_140d177a0(in_stack_00000100,param_1,lVar4,(longlong)iStack00000000000000e0,lVar1);
      lVar3 = unaff_R12 + 1;
      lVar2 = lVar2 + 1;
      unaff_RSI = unaff_RSI + lStack0000000000000068 * 2;
      unaff_R12 = lVar3;
      if (lVar1 <= lVar3) {
        unaff_R12 = 0;
      }
      unaff_RBX = unaff_RBX + param_1 * 2;
      if (lVar1 <= lVar3) {
        unaff_RBX = in_stack_00000100;
      }
      lVar4 = lVar4 + lStack0000000000000090 * 2;
    } while (lVar2 < iStack00000000000000e4);
  }
  return;
}

