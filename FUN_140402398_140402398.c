
void FUN_140402398(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  longlong unaff_RBP;
  longlong lVar9;
  ulonglong in_R10;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  longlong in_stack_00000150;
  
  do {
    uVar12 = 0xffff;
    if (0 < (longlong)param_4) {
      uVar10 = 0;
      lVar9 = 1;
      lVar11 = 0;
      if (param_4 >> 3 != 0) {
        lVar8 = in_R10 * 2;
        lVar9 = lVar8 + in_stack_00000150 * 8 + unaff_RBP;
        lVar1 = lVar8 + in_stack_00000150 * 0xe + unaff_RBP;
        lVar2 = lVar8 + in_stack_00000150 * 0xc + unaff_RBP;
        lVar3 = lVar8 + in_stack_00000150 * 10 + unaff_RBP;
        lVar4 = lVar8 + in_stack_00000150 * 6 + unaff_RBP;
        lVar5 = lVar8 + in_stack_00000150 * 4 + unaff_RBP;
        lVar6 = lVar8 + in_stack_00000150 * 2 + unaff_RBP;
        do {
          if (*(ushort *)(lVar11 + lVar8 + unaff_RBP) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar8 + unaff_RBP);
          }
          if (*(ushort *)(lVar11 + lVar6) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar6);
          }
          if (*(ushort *)(lVar11 + lVar5) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar5);
          }
          if (*(ushort *)(lVar11 + lVar4) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar4);
          }
          if (*(ushort *)(lVar11 + lVar9) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar9);
          }
          if (*(ushort *)(lVar11 + lVar3) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar3);
          }
          if (*(ushort *)(lVar11 + lVar2) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar2);
          }
          uVar10 = uVar10 + 1;
          if (*(ushort *)(lVar11 + lVar1) < uVar12) {
            uVar12 = *(ushort *)(lVar11 + lVar1);
          }
          lVar11 = lVar11 + in_stack_00000150 * 0x10;
        } while (uVar10 < param_4 >> 3);
        lVar9 = uVar10 * 8 + 1;
      }
      uVar10 = lVar9 - 1;
      lVar9 = in_stack_00000150 * uVar10;
      if (uVar10 < param_4) {
        do {
          uVar7 = *(ushort *)(in_R10 * 2 + unaff_RBP + lVar9 * 2);
          if (uVar7 < uVar12) {
            uVar12 = uVar7;
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + in_stack_00000150;
        } while (uVar10 < param_4);
      }
    }
    *(ushort *)(param_2 + in_R10 * 2) = uVar12;
    in_R10 = in_R10 + 1;
  } while (in_R10 < param_3);
  return;
}

