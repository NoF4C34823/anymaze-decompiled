
void FUN_14034a616(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  longlong in_R10;
  longlong lVar9;
  ulonglong uVar10;
  longlong in_stack_00000130;
  
  do {
    uVar4 = 0xffff;
    if (0 < (longlong)param_4) {
      uVar10 = 0;
      lVar5 = 1;
      lVar9 = 0;
      if (param_4 >> 3 != 0) {
        do {
          uVar10 = uVar10 + 1;
          uVar1 = *(ushort *)(lVar9 + in_stack_00000130 * 0xe + param_1 + param_2 * 2);
          uVar2 = *(ushort *)(lVar9 + in_stack_00000130 * 2 + param_1 + param_2 * 2);
          uVar3 = *(ushort *)(lVar9 + in_stack_00000130 * 4 + param_1 + param_2 * 2);
          uVar6 = *(ushort *)(lVar9 + param_1 + param_2 * 2);
          uVar8 = *(ushort *)(lVar9 + in_stack_00000130 * 6 + param_1 + param_2 * 2);
          if (uVar4 <= uVar6) {
            uVar6 = uVar4;
          }
          uVar7 = *(ushort *)(lVar9 + in_stack_00000130 * 8 + param_1 + param_2 * 2);
          if (uVar6 <= uVar2) {
            uVar2 = uVar6;
          }
          uVar6 = *(ushort *)(lVar9 + in_stack_00000130 * 10 + param_1 + param_2 * 2);
          if (uVar2 <= uVar3) {
            uVar3 = uVar2;
          }
          uVar4 = *(ushort *)(lVar9 + in_stack_00000130 * 0xc + param_1 + param_2 * 2);
          if (uVar3 <= uVar8) {
            uVar8 = uVar3;
          }
          if (uVar8 <= uVar7) {
            uVar7 = uVar8;
          }
          if (uVar7 <= uVar6) {
            uVar6 = uVar7;
          }
          if (uVar6 <= uVar4) {
            uVar4 = uVar6;
          }
          if (uVar1 < uVar4) {
            uVar4 = uVar1;
          }
          lVar9 = lVar9 + in_stack_00000130 * 0x10;
        } while (uVar10 < param_4 >> 3);
        lVar5 = uVar10 * 8 + 1;
      }
      uVar10 = lVar5 - 1;
      lVar5 = in_stack_00000130 * uVar10;
      if (uVar10 < param_4) {
        do {
          uVar1 = *(ushort *)(param_1 + param_2 * 2 + lVar5 * 2);
          if (uVar1 < uVar4) {
            uVar4 = uVar1;
          }
          uVar10 = uVar10 + 1;
          lVar5 = lVar5 + in_stack_00000130;
        } while (uVar10 < param_4);
      }
    }
    *(ushort *)(in_R10 + param_2 * 2) = uVar4;
    param_2 = param_2 + 1;
  } while (param_2 < param_3);
  return;
}

