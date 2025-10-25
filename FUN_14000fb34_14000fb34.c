
void FUN_14000fb34(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int in_EAX;
  int unaff_ESI;
  int in_R11D;
  
  if (param_4 - 1U < param_3) {
    lVar1 = (longlong)param_4 * 3;
    *(char *)((longlong)param_4 + -1 + param_2) =
         (char)(unaff_ESI * (uint)*(byte *)(lVar1 + -3 + param_1) +
                in_EAX * (uint)*(byte *)(lVar1 + -2 + param_1) + 0x4000 +
                in_R11D * (uint)*(byte *)(lVar1 + -1 + param_1) >> 0xf);
  }
  return;
}

