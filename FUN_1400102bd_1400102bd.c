
void FUN_1400102bd(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int unaff_EBX;
  int in_R11D;
  int unaff_R14D;
  
  if (unaff_R14D - 1U < param_3) {
    lVar1 = (longlong)unaff_R14D * 3;
    *(char *)((longlong)unaff_R14D + -1 + param_2) =
         (char)(param_4 * (uint)*(byte *)(lVar1 + -3 + param_1) +
                unaff_EBX * (uint)*(byte *)(lVar1 + -2 + param_1) +
                in_R11D * (uint)*(byte *)(lVar1 + -1 + param_1) + 0x4000 >> 0xf);
  }
  return;
}

