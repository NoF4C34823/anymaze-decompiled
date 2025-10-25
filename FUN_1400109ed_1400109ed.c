
void FUN_1400109ed(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  int unaff_EBP;
  int iVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  int in_R10D;
  ulonglong in_R11;
  
  do {
    uVar5 = param_4;
    *(char *)(param_2 + uVar5 * 2) =
         (char)((uint)*(byte *)(unaff_RDI + param_1) * unaff_EBP +
                (uint)*(byte *)(unaff_RDI + 1 + param_1) * in_EAX + 0x4000 +
                (uint)*(byte *)(unaff_RDI + 2 + param_1) * in_R10D >> 0xf);
    lVar1 = unaff_RDI + 3;
    lVar2 = unaff_RDI + 4;
    lVar3 = unaff_RDI + 5;
    unaff_RDI = unaff_RDI + 6;
    *(char *)(param_2 + 1 + uVar5 * 2) =
         (char)((uint)*(byte *)(lVar1 + param_1) * unaff_EBP +
                (uint)*(byte *)(lVar2 + param_1) * in_EAX + 0x4000 +
                (uint)*(byte *)(lVar3 + param_1) * in_R10D >> 0xf);
    param_4 = uVar5 + 1;
  } while (param_4 < (in_R11 & 0xffffffff));
  iVar4 = (int)uVar5 + 2 + (int)param_4;
  if (iVar4 - 1U < param_3) {
    lVar1 = (longlong)iVar4 * 3;
    *(char *)((longlong)iVar4 + -1 + param_2) =
         (char)(unaff_EBP * (uint)*(byte *)(lVar1 + -3 + param_1) +
                in_EAX * (uint)*(byte *)(lVar1 + -2 + param_1) + 0x4000 +
                in_R10D * (uint)*(byte *)(lVar1 + -1 + param_1) >> 0xf);
  }
  return;
}

