
void FUN_14033f6d6(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  short sVar6;
  longlong in_R10;
  short sVar7;
  short sVar8;
  ulonglong uVar9;
  longlong lVar10;
  short sVar11;
  ulonglong in_stack_00000130;
  
  do {
    sVar7 = 0x7fff;
    sVar8 = 0x7fff;
    if (0 < (longlong)in_stack_00000130) {
      uVar9 = 0;
      lVar10 = 1;
      lVar5 = 0;
      sVar8 = sVar7;
      if (in_stack_00000130 >> 3 != 0) {
        do {
          uVar9 = uVar9 + 1;
          sVar8 = *(short *)(lVar5 + in_R10 * 4 + param_1 + param_2 * 2);
          sVar1 = *(short *)(lVar5 + in_R10 * 0xe + param_1 + param_2 * 2);
          sVar2 = *(short *)(lVar5 + in_R10 * 2 + param_1 + param_2 * 2);
          sVar6 = *(short *)(lVar5 + in_R10 * 6 + param_1 + param_2 * 2);
          sVar11 = *(short *)(lVar5 + param_1 + param_2 * 2);
          sVar4 = *(short *)(lVar5 + in_R10 * 8 + param_1 + param_2 * 2);
          if (sVar7 <= sVar11) {
            sVar11 = sVar7;
          }
          sVar3 = *(short *)(lVar5 + in_R10 * 10 + param_1 + param_2 * 2);
          if (sVar11 <= sVar2) {
            sVar2 = sVar11;
          }
          if (sVar2 <= sVar8) {
            sVar8 = sVar2;
          }
          sVar7 = *(short *)(lVar5 + in_R10 * 0xc + param_1 + param_2 * 2);
          if (sVar8 <= sVar6) {
            sVar6 = sVar8;
          }
          if (sVar6 <= sVar4) {
            sVar4 = sVar6;
          }
          if (sVar4 <= sVar3) {
            sVar3 = sVar4;
          }
          if (sVar3 <= sVar7) {
            sVar7 = sVar3;
          }
          if (sVar1 < sVar7) {
            sVar7 = sVar1;
          }
          lVar5 = lVar5 + in_R10 * 0x10;
        } while (uVar9 < in_stack_00000130 >> 3);
        lVar10 = uVar9 * 8 + 1;
        sVar8 = sVar7;
      }
      uVar9 = lVar10 - 1;
      lVar10 = in_R10 * uVar9;
      if (uVar9 < in_stack_00000130) {
        do {
          sVar7 = *(short *)(param_1 + param_2 * 2 + lVar10 * 2);
          if (sVar7 < sVar8) {
            sVar8 = sVar7;
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + in_R10;
        } while (uVar9 < in_stack_00000130);
      }
    }
    *(short *)(param_3 + param_2 * 2) = sVar8;
    param_2 = param_2 + 1;
  } while (param_2 < param_4);
  return;
}

