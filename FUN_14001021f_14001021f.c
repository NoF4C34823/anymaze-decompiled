
void FUN_14001021f(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  int unaff_EBX;
  longlong in_R10;
  int in_R11D;
  ulonglong unaff_R13;
  longlong lVar4;
  
  do {
    *(char *)(param_2 + in_RAX * 2) =
         (char)((uint)*(byte *)(in_R10 + param_1) * param_4 +
                (uint)*(byte *)(in_R10 + 1 + param_1) * unaff_EBX +
                (uint)*(byte *)(in_R10 + 2 + param_1) * in_R11D + 0x4000 >> 0xf);
    lVar1 = in_R10 + 3;
    lVar4 = in_R10 + 4;
    lVar2 = in_R10 + 5;
    in_R10 = in_R10 + 6;
    *(char *)(param_2 + 1 + in_RAX * 2) =
         (char)((uint)*(byte *)(lVar1 + param_1) * param_4 +
                (uint)*(byte *)(lVar4 + param_1) * unaff_EBX +
                (uint)*(byte *)(lVar2 + param_1) * in_R11D + 0x4000 >> 0xf);
    in_RAX = in_RAX + 1;
  } while (in_RAX < unaff_R13);
  uVar3 = (int)in_RAX * 2;
  if (uVar3 < param_3) {
    lVar4 = (longlong)(int)(uVar3 + 1);
    lVar1 = lVar4 * 3;
    *(char *)(lVar4 + -1 + param_2) =
         (char)(param_4 * (uint)*(byte *)(lVar1 + -3 + param_1) +
                unaff_EBX * (uint)*(byte *)(lVar1 + -2 + param_1) +
                in_R11D * (uint)*(byte *)(lVar1 + -1 + param_1) + 0x4000 >> 0xf);
  }
  return;
}

