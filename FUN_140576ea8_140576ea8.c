
void FUN_140576ea8(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

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
    thunk_FUN_140d27be0(unaff_RSI,unaff_RBX);
    lVar1 = lStack0000000000000060;
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = unaff_RSI + param_2 * 2;
    unaff_RBX = unaff_RBX + param_1 * 2;
  } while (unaff_RDI < unaff_R12);
  lVar2 = 0;
  lVar3 = lStack0000000000000068;
  lStack0000000000000060 = in_R10;
  lStack0000000000000068 = param_2;
  if (0 < iStack00000000000000e4) {
    do {
      thunk_FUN_140d27be0(unaff_RSI,unaff_RBX,(longlong)iStack00000000000000e0,
                          lStack0000000000000060,1);
      thunk_FUN_140d280c0(in_stack_00000100,param_1,lVar3,(longlong)iStack00000000000000e0,lVar1);
      unaff_R12 = unaff_R12 + 1;
      unaff_RBX = unaff_RBX + param_1 * 2;
      if (lVar1 <= unaff_R12) {
        unaff_RBX = in_stack_00000100;
      }
      unaff_RSI = unaff_RSI + lStack0000000000000068 * 2;
      if (lVar1 <= unaff_R12) {
        unaff_R12 = 0;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + lStack0000000000000090 * 2;
    } while (lVar2 < iStack00000000000000e4);
  }
  return;
}

