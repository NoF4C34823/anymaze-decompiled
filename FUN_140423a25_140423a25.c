
void FUN_140423a25(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar1;
  undefined8 in_R10;
  longlong in_R11;
  longlong unaff_R12;
  longlong lVar2;
  undefined8 uStack0000000000000060;
  longlong lStack0000000000000068;
  longlong lStack0000000000000090;
  int iStack00000000000000e0;
  int iStack00000000000000e4;
  longlong in_stack_00000100;
  
  lVar1 = 0;
  uStack0000000000000060 = in_R10;
  lStack0000000000000068 = param_2;
  lStack0000000000000090 = param_4;
  if (0 < iStack00000000000000e4) {
    do {
      thunk_FUN_140d11c00(unaff_RSI,unaff_RBX,(longlong)iStack00000000000000e0,
                          uStack0000000000000060,1);
      thunk_FUN_140d12240(in_stack_00000100,param_1,param_3,(longlong)iStack00000000000000e0);
      lVar2 = unaff_R12 + 1;
      lVar1 = lVar1 + 1;
      unaff_RSI = unaff_RSI + lStack0000000000000068 * 2;
      unaff_R12 = lVar2;
      if (in_R11 <= lVar2) {
        unaff_R12 = 0;
      }
      param_3 = param_3 + lStack0000000000000090 * 2;
      unaff_RBX = unaff_RBX + param_1 * 2;
      if (in_R11 <= lVar2) {
        unaff_RBX = in_stack_00000100;
      }
    } while (lVar1 < iStack00000000000000e4);
  }
  return;
}

