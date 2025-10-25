
void FUN_140299b60(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  byte bVar11;
  
  uVar6 = 0;
  if (0 < (longlong)param_3) {
    do {
      bVar8 = 0;
      if (0 < (longlong)param_4) {
        uVar10 = 0;
        uVar4 = 1;
        lVar7 = 0;
        if (param_4 >> 3 != 0) {
          do {
            uVar10 = uVar10 + 1;
            bVar1 = *(byte *)(param_1 + param_5 * 2 + uVar6 + lVar7 * 8);
            bVar9 = *(byte *)(param_1 + param_5 * 6 + uVar6 + lVar7 * 8);
            bVar5 = *(byte *)(param_1 + param_5 * 4 + uVar6 + lVar7 * 8);
            bVar2 = *(byte *)(param_1 + param_5 + uVar6 + lVar7 * 8);
            bVar11 = *(byte *)(param_1 + uVar6 + lVar7 * 8);
            bVar3 = *(byte *)(param_1 + param_5 * 3 + uVar6 + lVar7 * 8);
            if (bVar11 <= bVar8) {
              bVar11 = bVar8;
            }
            if (bVar2 <= bVar11) {
              bVar2 = bVar11;
            }
            bVar8 = *(byte *)(param_5 * 5 + param_1 + uVar6 + lVar7 * 8);
            if (bVar1 <= bVar2) {
              bVar1 = bVar2;
            }
            bVar2 = *(byte *)(param_5 * 7 + param_1 + uVar6 + lVar7 * 8);
            if (bVar3 <= bVar1) {
              bVar3 = bVar1;
            }
            if (bVar5 <= bVar3) {
              bVar5 = bVar3;
            }
            if (bVar8 <= bVar5) {
              bVar8 = bVar5;
            }
            if (bVar9 <= bVar8) {
              bVar9 = bVar8;
            }
            bVar8 = bVar9;
            if (bVar9 < bVar2) {
              bVar8 = bVar2;
            }
            lVar7 = lVar7 + param_5;
          } while (uVar10 < param_4 >> 3);
          uVar4 = uVar10 * 8 + 1;
        }
        if (uVar4 <= param_4) {
                    /* WARNING: Could not recover jumptable at 0x000140299e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_140299e0c + (byte)(&DAT_143089b00)[(uint)((int)param_4 - (int)uVar4)]))();
          return;
        }
      }
      *(byte *)(uVar6 + param_2) = bVar8;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  return;
}

