
void FUN_1402c7100(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,int param_5
                  )

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (0 < (longlong)param_3) {
    lVar6 = (longlong)param_5;
    uVar4 = 0;
    do {
      uVar5 = 0;
      if (0 < (longlong)param_4) {
        uVar12 = 0;
        lVar7 = 1;
        lVar11 = 0;
        if (param_4 >> 3 != 0) {
          do {
            uVar12 = uVar12 + 1;
            uVar1 = *(ushort *)(lVar11 + lVar6 * 0xe + param_1 + uVar4 * 2);
            uVar2 = *(ushort *)(lVar11 + lVar6 * 2 + param_1 + uVar4 * 2);
            uVar3 = *(ushort *)(lVar11 + lVar6 * 4 + param_1 + uVar4 * 2);
            uVar8 = *(ushort *)(lVar11 + param_1 + uVar4 * 2);
            uVar10 = *(ushort *)(lVar11 + lVar6 * 6 + param_1 + uVar4 * 2);
            if (uVar8 <= uVar5) {
              uVar8 = uVar5;
            }
            uVar9 = *(ushort *)(lVar11 + lVar6 * 8 + param_1 + uVar4 * 2);
            if (uVar2 <= uVar8) {
              uVar2 = uVar8;
            }
            uVar8 = *(ushort *)(lVar11 + lVar6 * 10 + param_1 + uVar4 * 2);
            if (uVar3 <= uVar2) {
              uVar3 = uVar2;
            }
            uVar5 = *(ushort *)(lVar11 + lVar6 * 0xc + param_1 + uVar4 * 2);
            if (uVar10 <= uVar3) {
              uVar10 = uVar3;
            }
            if (uVar9 <= uVar10) {
              uVar9 = uVar10;
            }
            if (uVar8 <= uVar9) {
              uVar8 = uVar9;
            }
            if (uVar5 <= uVar8) {
              uVar5 = uVar8;
            }
            if (uVar5 < uVar1) {
              uVar5 = uVar1;
            }
            lVar11 = lVar11 + lVar6 * 0x10;
          } while (uVar12 < param_4 >> 3);
          lVar7 = uVar12 * 8 + 1;
        }
        uVar12 = lVar7 - 1;
        lVar7 = (longlong)param_5 * uVar12;
        if (uVar12 < param_4) {
          do {
            uVar1 = *(ushort *)(param_1 + uVar4 * 2 + lVar7 * 2);
            if (uVar5 < uVar1) {
              uVar5 = uVar1;
            }
            uVar12 = uVar12 + 1;
            lVar7 = lVar7 + param_5;
          } while (uVar12 < param_4);
        }
      }
      *(ushort *)(param_2 + uVar4 * 2) = uVar5;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}

