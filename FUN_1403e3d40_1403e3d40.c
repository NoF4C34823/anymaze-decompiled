
void FUN_1403e3d40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  byte *param_9)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte *pbStack_78;
  
  lVar13 = *param_5;
  uVar3 = param_6[1];
  uVar19 = *param_6;
  uVar7 = lVar13 * 4;
  uVar8 = uVar3 - 1;
  uVar15 = uVar7 + 0x1f & 0xffffffffffffffe0;
  uVar9 = 0;
  lVar12 = (param_1 - (int)(uVar8 >> 1) * param_2) + (longlong)(int)(uVar19 - 1 >> 1) * -4;
  lVar5 = 0;
  lVar16 = 0;
  if (param_7 == 0) {
    pbStack_78 = param_9;
    lVar10 = lVar12;
    if (0 < (longlong)uVar8) {
      do {
        if (0 < (longlong)uVar7) {
          uVar17 = 0;
          do {
            bVar4 = 0xff;
            if (0 < (longlong)uVar19) {
              lVar10 = 1;
              if (uVar19 >> 1 != 0) {
                lVar10 = lVar12 + lVar5 + uVar17;
                uVar6 = 0;
                do {
                  bVar1 = *(byte *)(lVar10 + uVar6 * 8);
                  bVar2 = *(byte *)(lVar10 + 4 + uVar6 * 8);
                  if (bVar1 < bVar4) {
                    bVar4 = bVar1;
                  }
                  uVar6 = uVar6 + 1;
                  if (bVar2 < bVar4) {
                    bVar4 = bVar2;
                  }
                } while (uVar6 < uVar19 >> 1);
                lVar10 = uVar6 * 2 + 1;
              }
              if ((lVar10 - 1U < uVar19) &&
                 (lVar10 = (lVar10 - 1U) * 4 + lVar12 + lVar5, *(byte *)(lVar10 + uVar17) < bVar4))
              {
                bVar4 = *(byte *)(lVar10 + uVar17);
              }
            }
            param_9[uVar17 + lVar16] = bVar4;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar7);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar5 + param_2 + lVar12;
        lVar5 = lVar5 + param_2;
        pbStack_78 = param_9 + lVar16 + uVar15;
        lVar16 = lVar16 + uVar15;
      } while (uVar9 < uVar8);
    }
    if (0 < param_5[1]) {
      lVar12 = 0;
      param_3 = param_3 - param_4;
      lVar5 = 0;
      uVar19 = lVar13 << 2;
      do {
        param_3 = param_3 + param_4;
        lVar12 = lVar12 + 1;
        lVar5 = lVar5 + param_2;
        uVar7 = 0;
        if (0 < (longlong)uVar19) {
          uVar9 = *param_6;
          lVar13 = (lVar5 - param_2) + lVar10;
          pbVar14 = pbStack_78;
          do {
            bVar4 = 0xff;
            if (0 < (longlong)uVar9) {
              lVar16 = 1;
              if (uVar9 >> 1 != 0) {
                lVar16 = lVar13 + uVar7;
                uVar17 = 0;
                do {
                  bVar1 = *(byte *)(lVar16 + uVar17 * 8);
                  bVar2 = *(byte *)(lVar16 + 4 + uVar17 * 8);
                  if (bVar1 < bVar4) {
                    bVar4 = bVar1;
                  }
                  uVar17 = uVar17 + 1;
                  if (bVar2 < bVar4) {
                    bVar4 = bVar2;
                  }
                } while (uVar17 < uVar9 >> 1);
                lVar16 = uVar17 * 2 + 1;
              }
              if ((lVar16 - 1U < uVar9) &&
                 (lVar16 = (lVar16 - 1U) * 4 + lVar13, *(byte *)(lVar16 + uVar7) < bVar4)) {
                bVar4 = *(byte *)(lVar16 + uVar7);
              }
            }
            uVar7 = uVar7 + 1;
            *pbVar14 = bVar4;
            pbVar14 = pbVar14 + 1;
          } while (uVar7 < uVar19);
        }
        FUN_1403e4f20(param_9,uVar15,param_3,uVar19,uVar3);
        uVar8 = uVar8 + 1;
        pbStack_78 = pbStack_78 + uVar15;
        uVar3 = param_6[1];
        if ((longlong)param_6[1] <= (longlong)uVar8) {
          uVar8 = 0;
          pbStack_78 = param_9;
        }
      } while (lVar12 < param_5[1]);
    }
  }
  else {
    uVar8 = param_5[1];
    if (0 < (longlong)uVar8) {
      uVar15 = 0;
      do {
        if (0 < (longlong)uVar7) {
          uVar17 = uVar15;
          do {
            bVar4 = 0xff;
            uVar6 = uVar15;
            uVar11 = uVar15;
            if (0 < (longlong)uVar3) {
              do {
                if (0 < (longlong)uVar19) {
                  lVar13 = 1;
                  if (uVar19 >> 1 != 0) {
                    uVar18 = uVar15;
                    do {
                      if ((*(char *)(param_7 + uVar11 + uVar18 * 2) != '\0') &&
                         (bVar1 = *(byte *)(uVar17 + uVar18 * 8 + lVar12 + (uVar9 + uVar6) * param_2
                                           ), bVar1 < bVar4)) {
                        bVar4 = bVar1;
                      }
                      if ((*(char *)(param_7 + uVar11 + 1 + uVar18 * 2) != '\0') &&
                         (lVar16 = (uVar9 + uVar6) * param_2,
                         lVar13 = uVar17 + uVar18 * 8 + 4 + lVar12,
                         *(byte *)(lVar13 + lVar16) < bVar4)) {
                        bVar4 = *(byte *)(lVar13 + lVar16);
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar19 >> 1);
                    lVar13 = uVar18 * 2 + 1;
                  }
                  if (((lVar13 - 1U < uVar19) && (*(char *)(param_7 + -1 + lVar13 + uVar11) != '\0')
                      ) && (lVar16 = (uVar6 + uVar9) * param_2,
                           lVar13 = lVar12 + -4 + lVar13 * 4 + uVar17,
                           *(byte *)(lVar13 + lVar16) < bVar4)) {
                    bVar4 = *(byte *)(lVar13 + lVar16);
                  }
                }
                uVar6 = uVar6 + 1;
                uVar11 = uVar11 + uVar19;
              } while (uVar6 < uVar3);
            }
            *(byte *)(uVar17 + param_3 + lVar5) = bVar4;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar7);
        }
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + param_4;
      } while (uVar9 < uVar8);
    }
  }
  return;
}

