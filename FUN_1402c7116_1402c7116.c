
void FUN_1402c7116(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong in_R10;
  longlong lVar10;
  ulonglong uVar11;
  int in_stack_00000130;
  
  lVar5 = (longlong)in_stack_00000130;
  do {
    uVar4 = 0;
    if (0 < (longlong)param_4) {
      uVar11 = 0;
      lVar6 = 1;
      lVar10 = 0;
      if (param_4 >> 3 != 0) {
        do {
          uVar11 = uVar11 + 1;
          uVar1 = *(ushort *)(lVar10 + lVar5 * 0xe + param_1 + param_2 * 2);
          uVar2 = *(ushort *)(lVar10 + lVar5 * 2 + param_1 + param_2 * 2);
          uVar3 = *(ushort *)(lVar10 + lVar5 * 4 + param_1 + param_2 * 2);
          uVar7 = *(ushort *)(lVar10 + param_1 + param_2 * 2);
          uVar9 = *(ushort *)(lVar10 + lVar5 * 6 + param_1 + param_2 * 2);
          if (uVar7 <= uVar4) {
            uVar7 = uVar4;
          }
          uVar8 = *(ushort *)(lVar10 + lVar5 * 8 + param_1 + param_2 * 2);
          if (uVar2 <= uVar7) {
            uVar2 = uVar7;
          }
          uVar7 = *(ushort *)(lVar10 + lVar5 * 10 + param_1 + param_2 * 2);
          if (uVar3 <= uVar2) {
            uVar3 = uVar2;
          }
          uVar4 = *(ushort *)(lVar10 + lVar5 * 0xc + param_1 + param_2 * 2);
          if (uVar9 <= uVar3) {
            uVar9 = uVar3;
          }
          if (uVar8 <= uVar9) {
            uVar8 = uVar9;
          }
          if (uVar7 <= uVar8) {
            uVar7 = uVar8;
          }
          if (uVar4 <= uVar7) {
            uVar4 = uVar7;
          }
          if (uVar4 < uVar1) {
            uVar4 = uVar1;
          }
          lVar10 = lVar10 + lVar5 * 0x10;
        } while (uVar11 < param_4 >> 3);
        lVar6 = uVar11 * 8 + 1;
      }
      uVar11 = lVar6 - 1;
      lVar6 = (longlong)in_stack_00000130 * uVar11;
      if (uVar11 < param_4) {
        do {
          uVar1 = *(ushort *)(param_1 + param_2 * 2 + lVar6 * 2);
          if (uVar4 < uVar1) {
            uVar4 = uVar1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + in_stack_00000130;
        } while (uVar11 < param_4);
      }
    }
    *(ushort *)(in_R10 + param_2 * 2) = uVar4;
    param_2 = param_2 + 1;
  } while (param_2 < param_3);
  return;
}

