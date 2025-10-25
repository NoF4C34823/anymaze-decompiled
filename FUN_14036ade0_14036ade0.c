
void FUN_14036ade0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = 0;
  if (0 < (longlong)param_3) {
    do {
      bVar9 = 0;
      if (0 < (longlong)param_4) {
        uVar12 = 0;
        uVar10 = 1;
        lVar8 = 0;
        if (param_4 >> 3 != 0) {
          lVar1 = param_5 + param_1 + uVar11;
          lVar6 = param_5 * 5 + param_1 + uVar11;
          lVar2 = param_5 * 4 + param_1 + uVar11;
          lVar3 = param_1 + param_5 * 3 + uVar11;
          lVar4 = param_5 * 7 + param_1 + uVar11;
          lVar7 = param_5 * 2 + param_1 + uVar11;
          lVar5 = param_5 * 6 + param_1 + uVar11;
          do {
            if (bVar9 < *(byte *)(param_1 + uVar11 + lVar8 * 8)) {
              bVar9 = *(byte *)(param_1 + uVar11 + lVar8 * 8);
            }
            if (bVar9 < *(byte *)(lVar1 + lVar8 * 8)) {
              bVar9 = *(byte *)(lVar1 + lVar8 * 8);
            }
            if (bVar9 < *(byte *)(lVar7 + lVar8 * 8)) {
              bVar9 = *(byte *)(lVar7 + lVar8 * 8);
            }
            if (bVar9 < *(byte *)(lVar3 + lVar8 * 8)) {
              bVar9 = *(byte *)(lVar3 + lVar8 * 8);
            }
            if (bVar9 < *(byte *)(lVar2 + lVar8 * 8)) {
              bVar9 = *(byte *)(lVar2 + lVar8 * 8);
            }
            if (bVar9 < *(byte *)(lVar6 + lVar8 * 8)) {
              bVar9 = *(byte *)(lVar6 + lVar8 * 8);
            }
            if (bVar9 < *(byte *)(lVar5 + lVar8 * 8)) {
              bVar9 = *(byte *)(lVar5 + lVar8 * 8);
            }
            if (bVar9 < *(byte *)(lVar4 + lVar8 * 8)) {
              bVar9 = *(byte *)(lVar4 + lVar8 * 8);
            }
            uVar12 = uVar12 + 1;
            lVar8 = lVar8 + param_5;
          } while (uVar12 < param_4 >> 3);
          uVar10 = uVar12 * 8 + 1;
        }
        if (uVar10 <= param_4) {
                    /* WARNING: Could not recover jumptable at 0x00014036b0d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_14036b0d3 + (byte)(&DAT_143089cf0)[(uint)((int)param_4 - (int)uVar10)]))()
          ;
          return;
        }
      }
      *(byte *)(uVar11 + param_2) = bVar9;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_3);
  }
  return;
}

