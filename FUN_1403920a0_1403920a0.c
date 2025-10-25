
void FUN_1403920a0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,int param_5
                  )

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
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  
  if (0 < (longlong)param_3) {
    lVar11 = (longlong)param_5;
    uVar10 = 0;
    do {
      uVar14 = 0;
      if (0 < (longlong)param_4) {
        uVar12 = 0;
        lVar9 = 1;
        lVar13 = 0;
        if (param_4 >> 3 != 0) {
          lVar8 = uVar10 * 2;
          lVar9 = lVar8 + lVar11 * 8 + param_1;
          lVar1 = lVar8 + lVar11 * 0xe + param_1;
          lVar2 = lVar8 + lVar11 * 0xc + param_1;
          lVar3 = lVar8 + lVar11 * 10 + param_1;
          lVar4 = lVar8 + lVar11 * 6 + param_1;
          lVar5 = lVar8 + lVar11 * 4 + param_1;
          lVar6 = lVar8 + lVar11 * 2 + param_1;
          do {
            if (uVar14 < *(ushort *)(lVar13 + lVar8 + param_1)) {
              uVar14 = *(ushort *)(lVar13 + lVar8 + param_1);
            }
            if (uVar14 < *(ushort *)(lVar13 + lVar6)) {
              uVar14 = *(ushort *)(lVar13 + lVar6);
            }
            if (uVar14 < *(ushort *)(lVar13 + lVar5)) {
              uVar14 = *(ushort *)(lVar13 + lVar5);
            }
            if (uVar14 < *(ushort *)(lVar13 + lVar4)) {
              uVar14 = *(ushort *)(lVar13 + lVar4);
            }
            if (uVar14 < *(ushort *)(lVar13 + lVar9)) {
              uVar14 = *(ushort *)(lVar13 + lVar9);
            }
            if (uVar14 < *(ushort *)(lVar13 + lVar3)) {
              uVar14 = *(ushort *)(lVar13 + lVar3);
            }
            if (uVar14 < *(ushort *)(lVar13 + lVar2)) {
              uVar14 = *(ushort *)(lVar13 + lVar2);
            }
            uVar12 = uVar12 + 1;
            if (uVar14 < *(ushort *)(lVar13 + lVar1)) {
              uVar14 = *(ushort *)(lVar13 + lVar1);
            }
            lVar13 = lVar13 + lVar11 * 0x10;
          } while (uVar12 < param_4 >> 3);
          lVar9 = uVar12 * 8 + 1;
        }
        uVar12 = lVar9 - 1;
        lVar9 = (longlong)param_5 * uVar12;
        if (uVar12 < param_4) {
          do {
            uVar7 = *(ushort *)(uVar10 * 2 + param_1 + lVar9 * 2);
            if (uVar14 < uVar7) {
              uVar14 = uVar7;
            }
            uVar12 = uVar12 + 1;
            lVar9 = lVar9 + param_5;
          } while (uVar12 < param_4);
        }
      }
      *(ushort *)(param_2 + uVar10 * 2) = uVar14;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
  }
  return;
}

