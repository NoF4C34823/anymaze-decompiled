
void FUN_1403e3700(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  byte *param_9)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte *pbVar19;
  ulonglong uVar20;
  
  uVar20 = 0;
  lVar10 = 0;
  uVar3 = *param_6;
  uVar12 = param_6[1];
  lVar6 = *param_5;
  uVar13 = lVar6 * 2 + *param_5;
  uVar16 = uVar12 - 1;
  uVar17 = uVar13 + 0x1f & 0xffffffffffffffe0;
  param_1 = param_1 - (int)(uVar16 >> 1) * param_2;
  lVar5 = 0;
  lVar18 = (longlong)(int)(uVar3 - 1 >> 1) * -3;
  lVar4 = param_1 + lVar18;
  if (param_7 == 0) {
    lVar18 = lVar4;
    pbVar19 = param_9;
    if (0 < (longlong)uVar16) {
      uVar8 = 0;
      do {
        if (0 < (longlong)uVar13) {
          uVar11 = uVar8;
          do {
            bVar9 = 0xff;
            if (0 < (longlong)uVar3) {
              lVar18 = 1;
              if (uVar3 >> 1 != 0) {
                lVar18 = lVar4 + lVar10 + uVar11;
                uVar15 = uVar8;
                uVar7 = uVar8;
                do {
                  bVar1 = *(byte *)(uVar15 + lVar18);
                  bVar2 = *(byte *)(uVar15 + 3 + lVar18);
                  if (bVar1 < bVar9) {
                    bVar9 = bVar1;
                  }
                  uVar7 = uVar7 + 1;
                  if (bVar2 < bVar9) {
                    bVar9 = bVar2;
                  }
                  uVar15 = uVar15 + 6;
                } while (uVar7 < uVar3 >> 1);
                lVar18 = uVar7 * 2 + 1;
              }
              if ((lVar18 - 1U < uVar3) &&
                 (lVar18 = (lVar18 - 1U) * 3 + lVar4 + lVar10, *(byte *)(lVar18 + uVar11) < bVar9))
              {
                bVar9 = *(byte *)(lVar18 + uVar11);
              }
            }
            param_9[uVar11 + lVar5] = bVar9;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar13);
        }
        uVar20 = uVar20 + 1;
        lVar18 = lVar10 + param_2 + lVar4;
        lVar10 = lVar10 + param_2;
        pbVar19 = param_9 + lVar5 + uVar17;
        lVar5 = lVar5 + uVar17;
      } while (uVar20 < uVar16);
    }
    if (0 < param_5[1]) {
      lVar4 = 0;
      uVar3 = lVar6 * 3;
      param_3 = param_3 - param_4;
      lVar6 = 0;
      do {
        param_3 = param_3 + param_4;
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + param_2;
        uVar13 = 0;
        if (0 < (longlong)uVar3) {
          uVar20 = *param_6;
          lVar5 = (lVar6 - param_2) + lVar18;
          pbVar14 = pbVar19;
          do {
            bVar9 = 0xff;
            if (0 < (longlong)uVar20) {
              lVar10 = 1;
              if (uVar20 >> 1 != 0) {
                lVar10 = lVar5 + uVar13;
                uVar8 = 0;
                uVar11 = 0;
                do {
                  bVar1 = *(byte *)(uVar8 + lVar10);
                  bVar2 = *(byte *)(uVar8 + 3 + lVar10);
                  if (bVar1 < bVar9) {
                    bVar9 = bVar1;
                  }
                  uVar11 = uVar11 + 1;
                  if (bVar2 < bVar9) {
                    bVar9 = bVar2;
                  }
                  uVar8 = uVar8 + 6;
                } while (uVar11 < uVar20 >> 1);
                lVar10 = uVar11 * 2 + 1;
              }
              if ((lVar10 - 1U < uVar20) &&
                 (lVar10 = (lVar10 - 1U) * 3 + lVar5, *(byte *)(lVar10 + uVar13) < bVar9)) {
                bVar9 = *(byte *)(lVar10 + uVar13);
              }
            }
            uVar13 = uVar13 + 1;
            *pbVar14 = bVar9;
            pbVar14 = pbVar14 + 1;
          } while (uVar13 < uVar3);
        }
        FUN_1403e4f20(param_9,uVar17,param_3,uVar3,uVar12);
        uVar16 = uVar16 + 1;
        uVar12 = param_6[1];
        pbVar19 = pbVar19 + uVar17;
        if ((longlong)param_6[1] <= (longlong)uVar16) {
          uVar16 = 0;
          pbVar19 = param_9;
        }
      } while (lVar4 < param_5[1]);
    }
  }
  else {
    uVar16 = param_5[1];
    if (0 < (longlong)uVar16) {
      do {
        uVar17 = 0;
        if (0 < (longlong)uVar13) {
          do {
            uVar11 = 0;
            bVar9 = 0xff;
            uVar8 = uVar11;
            if (0 < (longlong)uVar12) {
              do {
                uVar15 = 0;
                if (0 < (longlong)uVar3) {
                  lVar6 = 1;
                  if (uVar3 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + uVar11 + uVar15 * 2) != '\0') &&
                         (bVar1 = *(byte *)(uVar15 * 6 + uVar17 + lVar4 + (uVar20 + uVar8) * param_2
                                           ), bVar1 < bVar9)) {
                        bVar9 = bVar1;
                      }
                      if ((*(char *)(param_7 + uVar11 + 1 + uVar15 * 2) != '\0') &&
                         (lVar5 = (uVar20 + uVar8) * param_2,
                         lVar6 = uVar15 * 6 + uVar17 + param_1 + 3 + lVar18,
                         *(byte *)(lVar6 + lVar5) < bVar9)) {
                        bVar9 = *(byte *)(lVar6 + lVar5);
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < uVar3 >> 1);
                    lVar6 = uVar15 * 2 + 1;
                  }
                  if (((lVar6 - 1U < uVar3) && (*(char *)(param_7 + -1 + lVar6 + uVar11) != '\0'))
                     && (lVar5 = (uVar8 + uVar20) * param_2, lVar6 = lVar6 * 3 + -3 + lVar4 + uVar17
                        , *(byte *)(lVar6 + lVar5) < bVar9)) {
                    bVar9 = *(byte *)(lVar6 + lVar5);
                  }
                }
                uVar8 = uVar8 + 1;
                uVar11 = uVar11 + uVar3;
              } while (uVar8 < uVar12);
            }
            *(byte *)(uVar17 + param_3 + lVar10) = bVar9;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar13);
        }
        uVar20 = uVar20 + 1;
        lVar10 = lVar10 + param_4;
      } while (uVar20 < uVar16);
    }
  }
  return;
}

