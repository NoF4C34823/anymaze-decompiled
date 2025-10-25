
void FUN_1403ee320(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  
  uVar18 = *param_6;
  uVar11 = param_6[1];
  uVar23 = *param_5 * 4;
  uVar14 = uVar23 + 0x1f & 0xffffffffffffffe0;
  lVar12 = (param_1 + (longlong)(int)(uVar18 - 1 >> 1) * -4) - (int)(uVar11 - 1 >> 1) * param_2;
  if (param_7 == 0) {
    lVar15 = 0;
    lVar20 = param_9;
    if (0 < (longlong)(uVar11 - 1)) {
      while( true ) {
        FUN_1403db020(lVar12,lVar20,uVar23,uVar18,4);
        uVar11 = param_6[1];
        lVar15 = lVar15 + 1;
        lVar12 = lVar12 + param_2;
        lVar20 = lVar20 + uVar14;
        if ((longlong)(uVar11 - 1) <= lVar15) break;
        uVar18 = *param_6;
      }
    }
    lVar15 = uVar11 - 1;
    if (0 < param_5[1]) {
      lVar16 = 0;
      lVar12 = lVar12 - param_2;
      lVar19 = lVar16;
      do {
        lVar12 = lVar12 + param_2;
        lVar16 = lVar16 + 1;
        lVar19 = lVar19 + param_4;
        FUN_1403db020(lVar12,lVar20,uVar23,*param_6,4);
        uVar11 = param_6[1];
        if (0 < (longlong)uVar23) {
          uVar18 = 0;
          do {
            bVar10 = 0xff;
            if (0 < (longlong)uVar11) {
              uVar21 = 0;
              uVar13 = 1;
              lVar9 = 0;
              bVar10 = 0xff;
              if (uVar11 >> 3 != 0) {
                lVar1 = uVar14 * 7 + param_9 + uVar18;
                lVar5 = uVar14 * 5 + param_9 + uVar18;
                lVar2 = uVar14 * 4 + param_9 + uVar18;
                lVar6 = uVar14 * 3 + param_9 + uVar18;
                lVar3 = uVar14 * 6 + param_9 + uVar18;
                lVar4 = uVar14 * 2 + param_9 + uVar18;
                lVar7 = param_9 + uVar14 + uVar18;
                bVar10 = 0xff;
                do {
                  if (*(byte *)(param_9 + uVar18 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(param_9 + uVar18 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar7 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar7 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar4 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar4 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar6 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar6 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar2 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar2 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar5 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar5 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar3 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar3 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar1 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar1 + lVar9 * 8);
                  }
                  uVar21 = uVar21 + 1;
                  lVar9 = lVar9 + uVar14;
                } while (uVar21 < uVar11 >> 3);
                uVar13 = uVar21 * 8 + 1;
              }
              if (uVar13 <= uVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001403ee7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_1403ee7b0 +
                          (byte)(&DAT_143089ea8)[(uint)((int)uVar11 - (int)uVar13)]))
                          (param_9 - uVar14);
                return;
              }
            }
            *(byte *)(uVar18 + (param_3 - param_4) + lVar19) = bVar10;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar23);
        }
        lVar15 = lVar15 + 1;
        lVar20 = lVar20 + uVar14;
        if ((longlong)uVar11 <= lVar15) {
          lVar15 = 0;
          lVar20 = param_9;
        }
      } while (lVar16 < param_5[1]);
    }
  }
  else {
    uVar14 = param_5[1];
    uVar13 = 0;
    lVar20 = 0;
    if (0 < (longlong)uVar14) {
      do {
        uVar21 = 0;
        if (0 < (longlong)uVar23) {
          do {
            uVar22 = 0;
            bVar10 = 0xff;
            lVar15 = 0;
            if (0 < (longlong)uVar11) {
              do {
                if (0 < (longlong)uVar18) {
                  lVar19 = 1;
                  uVar17 = 0;
                  if (uVar18 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + lVar15 + uVar17 * 2) != '\0') &&
                         (bVar8 = *(byte *)(uVar21 + uVar17 * 8 + lVar12 +
                                           (uVar13 + uVar22) * param_2), bVar8 < bVar10)) {
                        bVar10 = bVar8;
                      }
                      if ((*(char *)(param_7 + lVar15 + 1 + uVar17 * 2) != '\0') &&
                         (lVar16 = (uVar13 + uVar22) * param_2,
                         lVar19 = uVar21 + uVar17 * 8 + 4 + lVar12,
                         *(byte *)(lVar19 + lVar16) < bVar10)) {
                        bVar10 = *(byte *)(lVar19 + lVar16);
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < uVar18 >> 1);
                    lVar19 = uVar17 * 2 + 1;
                  }
                  if (((lVar19 - 1U < uVar18) && (*(char *)(param_7 + -1 + lVar19 + lVar15) != '\0')
                      ) && (lVar16 = (uVar22 + uVar13) * param_2,
                           lVar19 = lVar12 + -4 + lVar19 * 4 + uVar21,
                           *(byte *)(lVar19 + lVar16) < bVar10)) {
                    bVar10 = *(byte *)(lVar19 + lVar16);
                  }
                }
                uVar22 = uVar22 + 1;
                lVar15 = lVar15 + uVar18;
              } while (uVar22 < uVar11);
            }
            *(byte *)(uVar21 + param_3 + lVar20) = bVar10;
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar23);
        }
        uVar13 = uVar13 + 1;
        lVar20 = lVar20 + param_4;
      } while (uVar13 < uVar14);
    }
  }
  return;
}

