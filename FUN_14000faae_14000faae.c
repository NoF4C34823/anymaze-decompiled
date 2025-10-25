
void FUN_14000faae(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  int unaff_ESI;
  int iVar4;
  longlong in_R10;
  int in_R11D;
  ulonglong unaff_R13;
  ulonglong uVar5;
  ulonglong unaff_R15;
  
  do {
    uVar5 = unaff_R13;
    *(char *)(param_2 + uVar5 * 2) =
         (char)((uint)*(byte *)(in_R10 + param_1) * unaff_ESI +
                (uint)*(byte *)(in_R10 + 1 + param_1) * in_EAX + 0x4000 +
                (uint)*(byte *)(in_R10 + 2 + param_1) * in_R11D >> 0xf);
    lVar1 = in_R10 + 3;
    lVar2 = in_R10 + 4;
    lVar3 = in_R10 + 5;
    in_R10 = in_R10 + 6;
    *(char *)(param_2 + 1 + uVar5 * 2) =
         (char)((uint)*(byte *)(lVar1 + param_1) * unaff_ESI +
                (uint)*(byte *)(lVar2 + param_1) * in_EAX + 0x4000 +
                (uint)*(byte *)(lVar3 + param_1) * in_R11D >> 0xf);
    unaff_R13 = uVar5 + 1;
  } while (unaff_R13 < (unaff_R15 & 0xffffffff));
  iVar4 = (int)uVar5 + 2 + (int)unaff_R13;
  if (iVar4 - 1U < param_3) {
    lVar1 = (longlong)iVar4 * 3;
    *(char *)((longlong)iVar4 + -1 + param_2) =
         (char)(unaff_ESI * (uint)*(byte *)(lVar1 + -3 + param_1) +
                in_EAX * (uint)*(byte *)(lVar1 + -2 + param_1) + 0x4000 +
                in_R11D * (uint)*(byte *)(lVar1 + -1 + param_1) >> 0xf);
  }
  return;
}

