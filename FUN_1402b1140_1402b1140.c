
void FUN_1402b1140(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,int param_5
                  )

{
  short sVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  ulonglong uVar11;
  longlong lVar12;
  short sVar13;
  
  if (0 < (longlong)param_3) {
    lVar6 = (longlong)param_5;
    uVar4 = 0;
    do {
      sVar9 = -0x8000;
      sVar10 = -0x8000;
      if (0 < (longlong)param_4) {
        uVar11 = 0;
        lVar12 = 1;
        lVar7 = 0;
        sVar10 = sVar9;
        if (param_4 >> 3 != 0) {
          do {
            uVar11 = uVar11 + 1;
            sVar10 = *(short *)(lVar7 + lVar6 * 4 + param_1 + uVar4 * 2);
            sVar1 = *(short *)(lVar7 + lVar6 * 0xe + param_1 + uVar4 * 2);
            sVar2 = *(short *)(lVar7 + lVar6 * 2 + param_1 + uVar4 * 2);
            sVar8 = *(short *)(lVar7 + lVar6 * 6 + param_1 + uVar4 * 2);
            sVar13 = *(short *)(lVar7 + param_1 + uVar4 * 2);
            sVar5 = *(short *)(lVar7 + lVar6 * 8 + param_1 + uVar4 * 2);
            if (sVar13 <= sVar9) {
              sVar13 = sVar9;
            }
            sVar3 = *(short *)(lVar7 + lVar6 * 10 + param_1 + uVar4 * 2);
            if (sVar2 <= sVar13) {
              sVar2 = sVar13;
            }
            if (sVar10 <= sVar2) {
              sVar10 = sVar2;
            }
            sVar9 = *(short *)(lVar7 + lVar6 * 0xc + param_1 + uVar4 * 2);
            if (sVar8 <= sVar10) {
              sVar8 = sVar10;
            }
            if (sVar5 <= sVar8) {
              sVar5 = sVar8;
            }
            if (sVar3 <= sVar5) {
              sVar3 = sVar5;
            }
            if (sVar9 <= sVar3) {
              sVar9 = sVar3;
            }
            if (sVar9 < sVar1) {
              sVar9 = sVar1;
            }
            lVar7 = lVar7 + lVar6 * 0x10;
          } while (uVar11 < param_4 >> 3);
          lVar12 = uVar11 * 8 + 1;
          sVar10 = sVar9;
        }
        uVar11 = lVar12 - 1;
        lVar12 = (longlong)param_5 * uVar11;
        if (uVar11 < param_4) {
          do {
            sVar9 = *(short *)(param_1 + uVar4 * 2 + lVar12 * 2);
            if (sVar10 < sVar9) {
              sVar10 = sVar9;
            }
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + param_5;
          } while (uVar11 < param_4);
        }
      }
      *(short *)(param_2 + uVar4 * 2) = sVar10;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}

