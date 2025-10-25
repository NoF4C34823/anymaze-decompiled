
void FUN_14040bbe0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  
  if (0 < (longlong)param_4) {
    uVar10 = 0;
    do {
      uVar13 = 0xffff;
      if (0 < (longlong)param_5) {
        uVar11 = 0;
        lVar9 = 1;
        lVar12 = 0;
        if (param_5 >> 3 != 0) {
          lVar8 = uVar10 * 2;
          lVar9 = lVar8 + param_2 * 8 + param_1;
          lVar1 = lVar8 + param_2 * 0xe + param_1;
          lVar2 = lVar8 + param_2 * 0xc + param_1;
          lVar3 = lVar8 + param_2 * 10 + param_1;
          lVar4 = lVar8 + param_2 * 6 + param_1;
          lVar5 = lVar8 + param_2 * 4 + param_1;
          lVar6 = lVar8 + param_2 * 2 + param_1;
          do {
            if (*(ushort *)(lVar12 + lVar8 + param_1) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar8 + param_1);
            }
            if (*(ushort *)(lVar12 + lVar6) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar6);
            }
            if (*(ushort *)(lVar12 + lVar5) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar5);
            }
            if (*(ushort *)(lVar12 + lVar4) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar4);
            }
            if (*(ushort *)(lVar12 + lVar9) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar9);
            }
            if (*(ushort *)(lVar12 + lVar3) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar3);
            }
            if (*(ushort *)(lVar12 + lVar2) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar2);
            }
            uVar11 = uVar11 + 1;
            if (*(ushort *)(lVar12 + lVar1) < uVar13) {
              uVar13 = *(ushort *)(lVar12 + lVar1);
            }
            lVar12 = lVar12 + param_2 * 0x10;
          } while (uVar11 < param_5 >> 3);
          lVar9 = uVar11 * 8 + 1;
        }
        uVar11 = lVar9 - 1;
        lVar9 = param_2 * uVar11;
        if (uVar11 < param_5) {
          do {
            uVar7 = *(ushort *)(uVar10 * 2 + param_1 + lVar9 * 2);
            if (uVar7 < uVar13) {
              uVar13 = uVar7;
            }
            uVar11 = uVar11 + 1;
            lVar9 = lVar9 + param_2;
          } while (uVar11 < param_5);
        }
      }
      *(ushort *)(param_3 + uVar10 * 2) = uVar13;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  return;
}

