
void FUN_14034a600(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (0 < (longlong)param_3) {
    uVar4 = 0;
    do {
      uVar5 = 0xffff;
      if (0 < (longlong)param_4) {
        uVar11 = 0;
        lVar6 = 1;
        lVar10 = 0;
        if (param_4 >> 3 != 0) {
          do {
            uVar11 = uVar11 + 1;
            uVar1 = *(ushort *)(lVar10 + param_5 * 0xe + param_1 + uVar4 * 2);
            uVar2 = *(ushort *)(lVar10 + param_5 * 2 + param_1 + uVar4 * 2);
            uVar3 = *(ushort *)(lVar10 + param_5 * 4 + param_1 + uVar4 * 2);
            uVar7 = *(ushort *)(lVar10 + param_1 + uVar4 * 2);
            uVar9 = *(ushort *)(lVar10 + param_5 * 6 + param_1 + uVar4 * 2);
            if (uVar5 <= uVar7) {
              uVar7 = uVar5;
            }
            uVar8 = *(ushort *)(lVar10 + param_5 * 8 + param_1 + uVar4 * 2);
            if (uVar7 <= uVar2) {
              uVar2 = uVar7;
            }
            uVar7 = *(ushort *)(lVar10 + param_5 * 10 + param_1 + uVar4 * 2);
            if (uVar2 <= uVar3) {
              uVar3 = uVar2;
            }
            uVar5 = *(ushort *)(lVar10 + param_5 * 0xc + param_1 + uVar4 * 2);
            if (uVar3 <= uVar9) {
              uVar9 = uVar3;
            }
            if (uVar9 <= uVar8) {
              uVar8 = uVar9;
            }
            if (uVar8 <= uVar7) {
              uVar7 = uVar8;
            }
            if (uVar7 <= uVar5) {
              uVar5 = uVar7;
            }
            if (uVar1 < uVar5) {
              uVar5 = uVar1;
            }
            lVar10 = lVar10 + param_5 * 0x10;
          } while (uVar11 < param_4 >> 3);
          lVar6 = uVar11 * 8 + 1;
        }
        uVar11 = lVar6 - 1;
        lVar6 = param_5 * uVar11;
        if (uVar11 < param_4) {
          do {
            uVar1 = *(ushort *)(param_1 + uVar4 * 2 + lVar6 * 2);
            if (uVar1 < uVar5) {
              uVar5 = uVar1;
            }
            uVar11 = uVar11 + 1;
            lVar6 = lVar6 + param_5;
          } while (uVar11 < param_4);
        }
      }
      *(ushort *)(param_2 + uVar4 * 2) = uVar5;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}

