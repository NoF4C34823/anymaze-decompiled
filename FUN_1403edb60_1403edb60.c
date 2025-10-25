
void FUN_1403edb60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  byte *pbVar8;
  byte bVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  
  uVar19 = *param_6;
  uVar23 = param_6[1];
  lVar22 = *param_5;
  uVar21 = lVar22 * 2 + *param_5;
  lVar12 = (param_1 + (longlong)(int)(uVar19 - 1 >> 1) * -3) - (int)(uVar23 - 1 >> 1) * param_2;
  uVar13 = uVar21 + 0x1f & 0xffffffffffffffe0;
  if (param_7 == 0) {
    lVar14 = 0;
    lVar20 = param_9;
    if (0 < (longlong)(uVar23 - 1)) {
      while( true ) {
        FUN_1403db020(lVar12,lVar20,uVar21,uVar19,3);
        uVar23 = param_6[1];
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + param_2;
        lVar20 = lVar20 + uVar13;
        if ((longlong)(uVar23 - 1) <= lVar14) break;
        uVar19 = *param_6;
      }
    }
    lVar14 = uVar23 - 1;
    if (0 < param_5[1]) {
      uVar23 = lVar22 * 3;
      lVar15 = 0;
      lVar12 = lVar12 - param_2;
      lVar22 = lVar15;
      do {
        lVar12 = lVar12 + param_2;
        lVar15 = lVar15 + 1;
        lVar22 = lVar22 + param_4;
        FUN_1403db020(lVar12,lVar20,uVar23,*param_6,3);
        uVar19 = param_6[1];
        if (0 < (longlong)uVar23) {
          uVar21 = 0;
          do {
            bVar11 = 0xff;
            if (0 < (longlong)uVar19) {
              uVar24 = 0;
              uVar16 = 1;
              lVar10 = 0;
              bVar11 = 0xff;
              if (uVar19 >> 3 != 0) {
                lVar1 = uVar13 * 7 + param_9 + uVar21;
                lVar7 = uVar13 * 5 + param_9 + uVar21;
                lVar2 = uVar13 * 4 + param_9 + uVar21;
                lVar3 = uVar13 * 3 + param_9 + uVar21;
                lVar4 = uVar13 * 6 + param_9 + uVar21;
                lVar5 = uVar13 * 2 + param_9 + uVar21;
                lVar6 = param_9 + uVar13 + uVar21;
                bVar11 = 0xff;
                do {
                  if (*(byte *)(param_9 + uVar21 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(param_9 + uVar21 + lVar10 * 8);
                  }
                  if (*(byte *)(lVar6 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(lVar6 + lVar10 * 8);
                  }
                  if (*(byte *)(lVar5 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(lVar5 + lVar10 * 8);
                  }
                  if (*(byte *)(lVar3 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(lVar3 + lVar10 * 8);
                  }
                  if (*(byte *)(lVar2 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(lVar2 + lVar10 * 8);
                  }
                  if (*(byte *)(lVar7 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(lVar7 + lVar10 * 8);
                  }
                  if (*(byte *)(lVar4 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(lVar4 + lVar10 * 8);
                  }
                  if (*(byte *)(lVar1 + lVar10 * 8) < bVar11) {
                    bVar11 = *(byte *)(lVar1 + lVar10 * 8);
                  }
                  uVar24 = uVar24 + 1;
                  lVar10 = lVar10 + uVar13;
                } while (uVar24 < uVar19 >> 3);
                uVar16 = uVar24 * 8 + 1;
              }
              if (uVar16 <= uVar19) {
                    /* WARNING: Could not recover jumptable at 0x0001403ee02e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_1403ee030 +
                          (byte)(&DAT_143089ea0)[(uint)((int)uVar19 - (int)uVar16)]))
                          (param_9 - uVar13);
                return;
              }
            }
            *(byte *)(uVar21 + (param_3 - param_4) + lVar22) = bVar11;
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar23);
        }
        lVar14 = lVar14 + 1;
        lVar20 = lVar20 + uVar13;
        if ((longlong)uVar19 <= lVar14) {
          lVar14 = 0;
          lVar20 = param_9;
        }
      } while (lVar15 < param_5[1]);
    }
  }
  else {
    uVar16 = 0;
    uVar13 = param_5[1];
    lVar22 = 0;
    if (0 < (longlong)uVar13) {
      do {
        uVar24 = 0;
        if (0 < (longlong)uVar21) {
          do {
            uVar18 = 0;
            bVar11 = 0xff;
            lVar20 = 0;
            if (0 < (longlong)uVar23) {
              do {
                if (0 < (longlong)uVar19) {
                  lVar14 = 1;
                  uVar17 = 0;
                  if (uVar19 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + lVar20 + uVar17 * 2) != '\0') &&
                         (bVar9 = *(byte *)(uVar17 * 6 + uVar24 + lVar12 +
                                           (uVar16 + uVar18) * param_2), bVar9 < bVar11)) {
                        bVar11 = bVar9;
                      }
                      if ((*(char *)(param_7 + lVar20 + 1 + uVar17 * 2) != '\0') &&
                         (pbVar8 = (byte *)(uVar17 * 6 + uVar24 + 3 + lVar12 +
                                           (uVar16 + uVar18) * param_2), *pbVar8 < bVar11)) {
                        bVar11 = *pbVar8;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < uVar19 >> 1);
                    lVar14 = uVar17 * 2 + 1;
                  }
                  if (((lVar14 - 1U < uVar19) && (*(char *)(param_7 + -1 + lVar14 + lVar20) != '\0')
                      ) && (lVar15 = (uVar18 + uVar16) * param_2,
                           lVar14 = lVar14 * 3 + -3 + lVar12 + uVar24,
                           *(byte *)(lVar14 + lVar15) < bVar11)) {
                    bVar11 = *(byte *)(lVar14 + lVar15);
                  }
                }
                uVar18 = uVar18 + 1;
                lVar20 = lVar20 + uVar19;
              } while (uVar18 < uVar23);
            }
            *(byte *)(uVar24 + param_3 + lVar22) = bVar11;
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar21);
        }
        uVar16 = uVar16 + 1;
        lVar22 = lVar22 + param_4;
      } while (uVar16 < uVar13);
    }
  }
  return;
}

