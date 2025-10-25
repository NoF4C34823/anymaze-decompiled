
void FUN_14031cfba(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong in_RAX;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong unaff_RSI;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  longlong in_R10;
  ulonglong uVar9;
  byte bVar10;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  longlong lStack0000000000000060;
  longlong in_stack_00000130;
  
  lStack0000000000000060 = in_stack_00000130 * 5 + in_RAX;
  lStack0000000000000058 = in_RAX + in_stack_00000130 * 4;
  lStack0000000000000050 = in_RAX + in_stack_00000130 * 3;
  lStack0000000000000030 = in_RAX + in_stack_00000130 * 6;
  lStack0000000000000048 = in_RAX + in_stack_00000130 * 2;
  lStack0000000000000040 = in_RAX + in_stack_00000130;
  lStack0000000000000038 = in_stack_00000130 * 7 + in_RAX;
  do {
    bVar7 = 0xff;
    if (0 < (longlong)param_4) {
      uVar9 = 0;
      uVar4 = 1;
      lVar6 = 0;
      if (param_4 >> 3 != 0) {
        do {
          uVar9 = uVar9 + 1;
          bVar1 = *(byte *)(lStack0000000000000048 + unaff_RSI + lVar6 * 8);
          bVar8 = *(byte *)(lStack0000000000000030 + unaff_RSI + lVar6 * 8);
          bVar5 = *(byte *)(lStack0000000000000058 + unaff_RSI + lVar6 * 8);
          bVar2 = *(byte *)(lStack0000000000000040 + unaff_RSI + lVar6 * 8);
          bVar10 = *(byte *)(in_RAX + unaff_RSI + lVar6 * 8);
          bVar3 = *(byte *)(lStack0000000000000050 + unaff_RSI + lVar6 * 8);
          if (bVar7 <= bVar10) {
            bVar10 = bVar7;
          }
          if (bVar10 <= bVar2) {
            bVar2 = bVar10;
          }
          bVar7 = *(byte *)(lStack0000000000000060 + unaff_RSI + lVar6 * 8);
          if (bVar2 <= bVar1) {
            bVar1 = bVar2;
          }
          bVar2 = *(byte *)(lStack0000000000000038 + unaff_RSI + lVar6 * 8);
          if (bVar1 <= bVar3) {
            bVar3 = bVar1;
          }
          if (bVar3 <= bVar5) {
            bVar5 = bVar3;
          }
          if (bVar5 <= bVar7) {
            bVar7 = bVar5;
          }
          if (bVar7 <= bVar8) {
            bVar8 = bVar7;
          }
          bVar7 = bVar8;
          if (bVar2 < bVar8) {
            bVar7 = bVar2;
          }
          lVar6 = lVar6 + in_stack_00000130;
        } while (uVar9 < param_4 >> 3);
        uVar4 = uVar9 * 8 + 1;
      }
      if (uVar4 <= param_4) {
                    /* WARNING: Could not recover jumptable at 0x00014031d24a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_14031d24c + (byte)(&DAT_143089c30)[(uint)((int)param_4 - (int)uVar4)]))();
        return;
      }
    }
    *(byte *)(unaff_RSI + in_R10) = bVar7;
    unaff_RSI = unaff_RSI + 1;
    if (param_3 <= unaff_RSI) {
      return;
    }
  } while( true );
}

