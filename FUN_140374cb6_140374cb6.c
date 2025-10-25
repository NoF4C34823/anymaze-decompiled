
void FUN_140374cb6(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  ulonglong in_stack_00000150;
  
  lStack0000000000000048 = param_2 * 4 + param_1;
  lStack0000000000000050 = param_2 * 5 + param_1;
  lStack0000000000000038 = param_2 * 2 + param_1;
  lStack0000000000000040 = param_1 + param_2 * 3;
  lStack0000000000000030 = param_2 + param_1;
  lStack0000000000000028 = param_2 * 7 + param_1;
  do {
    bVar3 = 0;
    if (0 < (longlong)in_stack_00000150) {
      uVar5 = 0;
      uVar4 = 1;
      lVar2 = 0;
      if (in_stack_00000150 >> 3 != 0) {
        lVar1 = param_2 * 6 + param_1 + unaff_RDI;
        do {
          if (bVar3 < *(byte *)(param_1 + unaff_RDI + lVar2 * 8)) {
            bVar3 = *(byte *)(param_1 + unaff_RDI + lVar2 * 8);
          }
          if (bVar3 < *(byte *)(lStack0000000000000030 + unaff_RDI + lVar2 * 8)) {
            bVar3 = *(byte *)(lStack0000000000000030 + unaff_RDI + lVar2 * 8);
          }
          if (bVar3 < *(byte *)(lStack0000000000000038 + unaff_RDI + lVar2 * 8)) {
            bVar3 = *(byte *)(lStack0000000000000038 + unaff_RDI + lVar2 * 8);
          }
          if (bVar3 < *(byte *)(lStack0000000000000040 + unaff_RDI + lVar2 * 8)) {
            bVar3 = *(byte *)(lStack0000000000000040 + unaff_RDI + lVar2 * 8);
          }
          if (bVar3 < *(byte *)(lStack0000000000000048 + unaff_RDI + lVar2 * 8)) {
            bVar3 = *(byte *)(lStack0000000000000048 + unaff_RDI + lVar2 * 8);
          }
          if (bVar3 < *(byte *)(lStack0000000000000050 + unaff_RDI + lVar2 * 8)) {
            bVar3 = *(byte *)(lStack0000000000000050 + unaff_RDI + lVar2 * 8);
          }
          if (bVar3 < *(byte *)(lVar1 + lVar2 * 8)) {
            bVar3 = *(byte *)(lVar1 + lVar2 * 8);
          }
          if (bVar3 < *(byte *)(lStack0000000000000028 + unaff_RDI + lVar2 * 8)) {
            bVar3 = *(byte *)(lStack0000000000000028 + unaff_RDI + lVar2 * 8);
          }
          uVar5 = uVar5 + 1;
          lVar2 = lVar2 + param_2;
        } while (uVar5 < in_stack_00000150 >> 3);
        uVar4 = uVar5 * 8 + 1;
      }
      if (uVar4 <= in_stack_00000150) {
        lStack0000000000000058 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000140374f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_140374f93 +
                  (byte)(&DAT_143089d10)[(uint)((int)in_stack_00000150 - (int)uVar4)]))();
        return;
      }
    }
    *(byte *)(unaff_RDI + param_3) = bVar3;
    unaff_RDI = unaff_RDI + 1;
    if (param_4 <= unaff_RDI) {
      return;
    }
  } while( true );
}

