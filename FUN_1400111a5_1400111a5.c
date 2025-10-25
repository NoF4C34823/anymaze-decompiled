
void FUN_1400111a5(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  int unaff_EBX;
  longlong unaff_RBP;
  int iVar4;
  int in_R10D;
  ulonglong in_R11;
  ulonglong uVar5;
  ulonglong unaff_R12;
  
  do {
    uVar5 = in_R11;
    *(char *)(param_2 + uVar5 * 2) =
         (char)((uint)*(byte *)(unaff_RBP + param_1) * unaff_EBX +
                (uint)*(byte *)(unaff_RBP + 1 + param_1) * in_EAX + 0x4000 +
                (uint)*(byte *)(unaff_RBP + 2 + param_1) * in_R10D >> 0xf);
    lVar1 = unaff_RBP + 3;
    lVar2 = unaff_RBP + 4;
    lVar3 = unaff_RBP + 5;
    unaff_RBP = unaff_RBP + 6;
    *(char *)(param_2 + 1 + uVar5 * 2) =
         (char)((uint)*(byte *)(lVar1 + param_1) * unaff_EBX +
                (uint)*(byte *)(lVar2 + param_1) * in_EAX + 0x4000 +
                (uint)*(byte *)(lVar3 + param_1) * in_R10D >> 0xf);
    in_R11 = uVar5 + 1;
  } while (in_R11 < (unaff_R12 & 0xffffffff));
  iVar4 = (int)uVar5 + 2 + (int)in_R11;
  if (iVar4 - 1U < param_3) {
    lVar1 = (longlong)iVar4 * 3;
    *(char *)((longlong)iVar4 + -1 + param_2) =
         (char)(unaff_EBX * (uint)*(byte *)(lVar1 + -3 + param_1) +
                in_EAX * (uint)*(byte *)(lVar1 + -2 + param_1) + 0x4000 +
                in_R10D * (uint)*(byte *)(lVar1 + -1 + param_1) >> 0xf);
  }
  return;
}

