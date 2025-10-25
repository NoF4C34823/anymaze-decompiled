
void FUN_140011232(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int in_EAX;
  int unaff_EBX;
  int in_R10D;
  
  if (param_4 - 1U < param_3) {
    lVar1 = (longlong)param_4 * 3;
    *(char *)((longlong)param_4 + -1 + param_2) =
         (char)(unaff_EBX * (uint)*(byte *)(lVar1 + -3 + param_1) +
                in_EAX * (uint)*(byte *)(lVar1 + -2 + param_1) + 0x4000 +
                in_R10D * (uint)*(byte *)(lVar1 + -1 + param_1) >> 0xf);
  }
  return;
}

