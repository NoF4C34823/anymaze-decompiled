
void FUN_14033f6c0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  short sVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ulonglong uVar10;
  longlong lVar11;
  short sVar12;
  
  uVar4 = 0;
  if (0 < (longlong)param_4) {
    do {
      sVar8 = 0x7fff;
      sVar9 = 0x7fff;
      if (0 < (longlong)param_5) {
        uVar10 = 0;
        lVar11 = 1;
        lVar6 = 0;
        sVar9 = sVar8;
        if (param_5 >> 3 != 0) {
          do {
            uVar10 = uVar10 + 1;
            sVar9 = *(short *)(lVar6 + param_2 * 4 + param_1 + uVar4 * 2);
            sVar1 = *(short *)(lVar6 + param_2 * 0xe + param_1 + uVar4 * 2);
            sVar2 = *(short *)(lVar6 + param_2 * 2 + param_1 + uVar4 * 2);
            sVar7 = *(short *)(lVar6 + param_2 * 6 + param_1 + uVar4 * 2);
            sVar12 = *(short *)(lVar6 + param_1 + uVar4 * 2);
            sVar5 = *(short *)(lVar6 + param_2 * 8 + param_1 + uVar4 * 2);
            if (sVar8 <= sVar12) {
              sVar12 = sVar8;
            }
            sVar3 = *(short *)(lVar6 + param_2 * 10 + param_1 + uVar4 * 2);
            if (sVar12 <= sVar2) {
              sVar2 = sVar12;
            }
            if (sVar2 <= sVar9) {
              sVar9 = sVar2;
            }
            sVar8 = *(short *)(lVar6 + param_2 * 0xc + param_1 + uVar4 * 2);
            if (sVar9 <= sVar7) {
              sVar7 = sVar9;
            }
            if (sVar7 <= sVar5) {
              sVar5 = sVar7;
            }
            if (sVar5 <= sVar3) {
              sVar3 = sVar5;
            }
            if (sVar3 <= sVar8) {
              sVar8 = sVar3;
            }
            if (sVar1 < sVar8) {
              sVar8 = sVar1;
            }
            lVar6 = lVar6 + param_2 * 0x10;
          } while (uVar10 < param_5 >> 3);
          lVar11 = uVar10 * 8 + 1;
          sVar9 = sVar8;
        }
        uVar10 = lVar11 - 1;
        lVar11 = param_2 * uVar10;
        if (uVar10 < param_5) {
          do {
            sVar8 = *(short *)(param_1 + uVar4 * 2 + lVar11 * 2);
            if (sVar8 < sVar9) {
              sVar9 = sVar8;
            }
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + param_2;
          } while (uVar10 < param_5);
        }
      }
      *(short *)(param_3 + uVar4 * 2) = sVar9;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_4);
  }
  return;
}

