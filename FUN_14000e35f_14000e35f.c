
void FUN_14000e35f(int param_1,int param_2,longlong param_3,int param_4)

{
  int in_EAX;
  int unaff_EBX;
  int in_R10D;
  longlong in_R11;
  int iStack0000000000000058;
  int iStack0000000000000060;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  
  iStack0000000000000058 = param_4;
  iStack0000000000000060 = param_2;
  do {
    FUN_140013b60(unaff_EBX + in_R11,in_EAX + param_3,in_stack_000000a0,in_stack_000000a8);
    param_1 = param_1 + 1;
    in_EAX = in_EAX + iStack0000000000000058;
    unaff_EBX = unaff_EBX + iStack0000000000000060;
  } while (param_1 < in_R10D);
  return;
}

