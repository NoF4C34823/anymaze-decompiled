
void FUN_1403deae0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,byte *param_9)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  byte *pbVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte *pbVar20;
  longlong lVar21;
  
  lVar6 = (longlong)param_2;
  uVar12 = 0;
  lVar21 = 0;
  lVar18 = (param_6._4_4_ + -1 >> 1) * lVar6;
  lVar8 = (longlong)((int)param_6 + -1 >> 1);
  lVar17 = 0;
  uVar3 = (longlong)(int)param_5 * 3;
  uVar4 = uVar3 + 0x1f & 0xffffffffffffffe0;
  lVar14 = lVar8 * -3 + param_1;
  lVar5 = lVar14 - lVar18;
  if (param_7 == 0) {
    uVar9 = (longlong)param_6._4_4_ - 1;
    lVar8 = lVar5;
    pbVar20 = param_9;
    if (uVar9 != 0 && 0 < (longlong)param_6._4_4_) {
      uVar10 = 0;
      do {
        if (0 < (longlong)uVar3) {
          lVar8 = lVar5 + lVar21;
          uVar19 = uVar10;
          do {
            bVar13 = 0xff;
            if (0 < (int)param_6) {
              lVar16 = 1;
              if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                lVar16 = lVar8 + uVar19;
                uVar7 = uVar10;
                uVar11 = uVar10;
                do {
                  bVar1 = *(byte *)(uVar7 + lVar16);
                  bVar2 = *(byte *)(uVar7 + 3 + lVar16);
                  if (bVar1 < bVar13) {
                    bVar13 = bVar1;
                  }
                  uVar11 = uVar11 + 1;
                  if (bVar2 < bVar13) {
                    bVar13 = bVar2;
                  }
                  uVar7 = uVar7 + 6;
                } while (uVar11 < (ulonglong)(longlong)(int)param_6 >> 1);
                lVar16 = uVar11 * 2 + 1;
              }
              if ((lVar16 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (lVar16 = (lVar16 - 1U) * 3 + lVar8, *(byte *)(lVar16 + uVar19) < bVar13)) {
                bVar13 = *(byte *)(lVar16 + uVar19);
              }
            }
            param_9[uVar19 + lVar17] = bVar13;
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar3);
        }
        uVar12 = uVar12 + 1;
        lVar8 = ((lVar14 + lVar6) - lVar18) + lVar21;
        lVar21 = lVar21 + lVar6;
        pbVar20 = param_9 + lVar17 + uVar4;
        lVar17 = lVar17 + uVar4;
      } while (uVar12 < uVar9);
    }
    uVar12 = 0;
    lVar5 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar10 = 0;
        if (0 < (longlong)uVar3) {
          pbVar15 = pbVar20;
          uVar19 = uVar10;
          do {
            bVar13 = 0xff;
            if (0 < (int)param_6) {
              lVar14 = 1;
              if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                lVar14 = lVar8 + lVar5 + uVar19;
                uVar7 = uVar10;
                uVar11 = uVar10;
                do {
                  bVar1 = *(byte *)(uVar7 + lVar14);
                  bVar2 = *(byte *)(uVar7 + 3 + lVar14);
                  if (bVar1 < bVar13) {
                    bVar13 = bVar1;
                  }
                  uVar11 = uVar11 + 1;
                  if (bVar2 < bVar13) {
                    bVar13 = bVar2;
                  }
                  uVar7 = uVar7 + 6;
                } while (uVar11 < (ulonglong)(longlong)(int)param_6 >> 1);
                lVar14 = uVar11 * 2 + 1;
              }
              if ((lVar14 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (lVar14 = (lVar14 - 1U) * 3 + lVar8 + lVar5, *(byte *)(lVar14 + uVar19) < bVar13))
              {
                bVar13 = *(byte *)(lVar14 + uVar19);
              }
            }
            uVar19 = uVar19 + 1;
            *pbVar15 = bVar13;
            pbVar15 = pbVar15 + 1;
          } while (uVar19 < uVar3);
        }
        FUN_1403e4f20(param_9,uVar4,param_3,uVar3,(longlong)param_6._4_4_);
        uVar9 = uVar9 + 1;
        uVar12 = uVar12 + 1;
        pbVar20 = pbVar20 + uVar4;
        if ((longlong)param_6._4_4_ <= (longlong)uVar9) {
          uVar9 = 0;
          pbVar20 = param_9;
        }
        param_3 = param_3 + param_4;
        lVar5 = lVar5 + lVar6;
      } while (uVar12 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    do {
      uVar4 = 0;
      if (0 < (longlong)uVar3) {
        do {
          uVar10 = 0;
          bVar13 = 0xff;
          uVar9 = uVar10;
          if (0 < param_6._4_4_) {
            do {
              if (0 < (int)param_6) {
                lVar5 = 1;
                uVar19 = 0;
                if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                  do {
                    if ((*(char *)(param_7 + uVar10 + uVar19 * 2) != '\0') &&
                       (bVar1 = *(byte *)(uVar19 * 6 + uVar4 + ((lVar8 * -3 + param_1) - lVar18) +
                                         (uVar12 + uVar9) * lVar6), bVar1 < bVar13)) {
                      bVar13 = bVar1;
                    }
                    if ((*(char *)(param_7 + uVar10 + 1 + uVar19 * 2) != '\0') &&
                       (lVar14 = (uVar12 + uVar9) * lVar6,
                       lVar5 = uVar19 * 6 + uVar4 + 3 + ((lVar8 * -3 + param_1) - lVar18),
                       *(byte *)(lVar5 + lVar14) < bVar13)) {
                      bVar13 = *(byte *)(lVar5 + lVar14);
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < (ulonglong)(longlong)(int)param_6 >> 1);
                  lVar5 = uVar19 * 2 + 1;
                }
                if (((lVar5 - 1U < (ulonglong)(longlong)(int)param_6) &&
                    (*(char *)(param_7 + -1 + lVar5 + uVar10) != '\0')) &&
                   (lVar14 = (uVar9 + uVar12) * lVar6,
                   lVar5 = ((lVar8 * -3 + param_1) - lVar18) + lVar5 * 3 + -3 + uVar4,
                   *(byte *)(lVar5 + lVar14) < bVar13)) {
                  bVar13 = *(byte *)(lVar5 + lVar14);
                }
              }
              uVar9 = uVar9 + 1;
              uVar10 = uVar10 + (longlong)(int)param_6;
            } while (uVar9 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(byte *)(uVar4 + param_3 + lVar21) = bVar13;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      uVar12 = uVar12 + 1;
      lVar21 = lVar21 + param_4;
    } while (uVar12 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

