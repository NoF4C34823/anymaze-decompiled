
void FUN_1403f8d00(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  short sVar13;
  
  if (0 < (longlong)param_4) {
    uVar10 = 0;
    do {
      sVar13 = 0x7fff;
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
            if (*(short *)(lVar12 + lVar8 + param_1) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar8 + param_1);
            }
            if (*(short *)(lVar12 + lVar6) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar6);
            }
            if (*(short *)(lVar12 + lVar5) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar5);
            }
            if (*(short *)(lVar12 + lVar4) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar4);
            }
            if (*(short *)(lVar12 + lVar9) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar9);
            }
            if (*(short *)(lVar12 + lVar3) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar3);
            }
            if (*(short *)(lVar12 + lVar2) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar2);
            }
            uVar11 = uVar11 + 1;
            if (*(short *)(lVar12 + lVar1) < sVar13) {
              sVar13 = *(short *)(lVar12 + lVar1);
            }
            lVar12 = lVar12 + param_2 * 0x10;
          } while (uVar11 < param_5 >> 3);
          lVar9 = uVar11 * 8 + 1;
        }
        uVar11 = lVar9 - 1;
        lVar9 = param_2 * uVar11;
        if (uVar11 < param_5) {
          do {
            sVar7 = *(short *)(uVar10 * 2 + param_1 + lVar9 * 2);
            if (sVar7 < sVar13) {
              sVar13 = sVar7;
            }
            uVar11 = uVar11 + 1;
            lVar9 = lVar9 + param_2;
          } while (uVar11 < param_5);
        }
      }
      *(short *)(param_3 + uVar10 * 2) = sVar13;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  return;
}

