
void FUN_140010a72(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int in_EAX;
  int unaff_EBP;
  int unaff_ESI;
  int in_R10D;
  
  if (unaff_ESI - 1U < param_3) {
    lVar1 = (longlong)unaff_ESI * 3;
    *(char *)((longlong)unaff_ESI + -1 + param_2) =
         (char)(unaff_EBP * (uint)*(byte *)(lVar1 + -3 + param_1) +
                in_EAX * (uint)*(byte *)(lVar1 + -2 + param_1) + 0x4000 +
                in_R10D * (uint)*(byte *)(lVar1 + -1 + param_1) >> 0xf);
  }
  return;
}

