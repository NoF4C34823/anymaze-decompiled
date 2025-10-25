
void FUN_1403920b8(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

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
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  int in_stack_00000150;
  
  lVar10 = (longlong)in_stack_00000150;
  do {
    uVar13 = 0;
    if (0 < (longlong)param_4) {
      uVar11 = 0;
      lVar9 = 1;
      lVar12 = 0;
      if (param_4 >> 3 != 0) {
        lVar8 = in_R10 * 2;
        lVar9 = lVar8 + lVar10 * 8 + unaff_RBP;
        lVar1 = lVar8 + lVar10 * 0xe + unaff_RBP;
        lVar2 = lVar8 + lVar10 * 0xc + unaff_RBP;
        lVar3 = lVar8 + lVar10 * 10 + unaff_RBP;
        lVar4 = lVar8 + lVar10 * 6 + unaff_RBP;
        lVar5 = lVar8 + lVar10 * 4 + unaff_RBP;
        lVar6 = lVar8 + lVar10 * 2 + unaff_RBP;
        do {
          if (uVar13 < *(ushort *)(lVar12 + lVar8 + unaff_RBP)) {
            uVar13 = *(ushort *)(lVar12 + lVar8 + unaff_RBP);
          }
          if (uVar13 < *(ushort *)(lVar12 + lVar6)) {
            uVar13 = *(ushort *)(lVar12 + lVar6);
          }
          if (uVar13 < *(ushort *)(lVar12 + lVar5)) {
            uVar13 = *(ushort *)(lVar12 + lVar5);
          }
          if (uVar13 < *(ushort *)(lVar12 + lVar4)) {
            uVar13 = *(ushort *)(lVar12 + lVar4);
          }
          if (uVar13 < *(ushort *)(lVar12 + lVar9)) {
            uVar13 = *(ushort *)(lVar12 + lVar9);
          }
          if (uVar13 < *(ushort *)(lVar12 + lVar3)) {
            uVar13 = *(ushort *)(lVar12 + lVar3);
          }
          if (uVar13 < *(ushort *)(lVar12 + lVar2)) {
            uVar13 = *(ushort *)(lVar12 + lVar2);
          }
          uVar11 = uVar11 + 1;
          if (uVar13 < *(ushort *)(lVar12 + lVar1)) {
            uVar13 = *(ushort *)(lVar12 + lVar1);
          }
          lVar12 = lVar12 + lVar10 * 0x10;
        } while (uVar11 < param_4 >> 3);
        lVar9 = uVar11 * 8 + 1;
      }
      uVar11 = lVar9 - 1;
      lVar9 = (longlong)in_stack_00000150 * uVar11;
      if (uVar11 < param_4) {
        do {
          uVar7 = *(ushort *)(in_R10 * 2 + unaff_RBP + lVar9 * 2);
          if (uVar13 < uVar7) {
            uVar13 = uVar7;
          }
          uVar11 = uVar11 + 1;
          lVar9 = lVar9 + in_stack_00000150;
        } while (uVar11 < param_4);
      }
    }
    *(ushort *)(param_2 + in_R10 * 2) = uVar13;
    in_R10 = in_R10 + 1;
  } while (in_R10 < param_3);
  return;
}

