
void FUN_14036c220(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,byte *param_9)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar6 = (longlong)param_2;
  lVar16 = (param_6._4_4_ + -1 >> 1) * lVar6;
  uVar12 = 0;
  lVar8 = (longlong)((int)param_6 + -1 >> 1);
  lVar17 = 0;
  uVar10 = (longlong)(int)param_5 * 4;
  lVar11 = 0;
  uVar3 = uVar10 + 0x1f & 0xffffffffffffffe0;
  lVar4 = (param_1 + lVar8 * -4) - lVar16;
  if (param_7 == 0) {
    uVar9 = (longlong)param_6._4_4_ - 1;
    pbVar15 = param_9;
    if (uVar9 != 0 && 0 < (longlong)param_6._4_4_) {
      param_1 = param_1 + lVar8 * -4;
      do {
        if (0 < (longlong)uVar10) {
          lVar4 = (param_1 - lVar16) + lVar17;
          uVar14 = 0;
          do {
            bVar5 = 0;
            if (0 < (int)param_6) {
              lVar8 = 1;
              if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                lVar8 = lVar4 + uVar14;
                uVar7 = 0;
                do {
                  bVar1 = *(byte *)(lVar8 + uVar7 * 8);
                  bVar2 = *(byte *)(lVar8 + 4 + uVar7 * 8);
                  if (bVar5 < bVar1) {
                    bVar5 = bVar1;
                  }
                  uVar7 = uVar7 + 1;
                  if (bVar5 < bVar2) {
                    bVar5 = bVar2;
                  }
                } while (uVar7 < (ulonglong)(longlong)(int)param_6 >> 1);
                lVar8 = uVar7 * 2 + 1;
              }
              if ((lVar8 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (lVar8 = (lVar8 - 1U) * 4 + lVar4, bVar5 < *(byte *)(lVar8 + uVar14))) {
                bVar5 = *(byte *)(lVar8 + uVar14);
              }
            }
            param_9[uVar14 + lVar11] = bVar5;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar10);
        }
        uVar12 = uVar12 + 1;
        lVar4 = ((lVar6 + param_1) - lVar16) + lVar17;
        lVar17 = lVar17 + lVar6;
        pbVar15 = param_9 + lVar11 + uVar3;
        lVar11 = lVar11 + uVar3;
      } while (uVar12 < uVar9);
    }
    uVar12 = 0;
    lVar8 = 0;
    if (0 < param_5._4_4_) {
      do {
        if (0 < (longlong)uVar10) {
          uVar14 = 0;
          pbVar13 = pbVar15;
          do {
            bVar5 = 0;
            if (0 < (int)param_6) {
              lVar11 = 1;
              if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                lVar11 = lVar4 + lVar8 + uVar14;
                uVar7 = 0;
                do {
                  bVar1 = *(byte *)(lVar11 + uVar7 * 8);
                  bVar2 = *(byte *)(lVar11 + 4 + uVar7 * 8);
                  if (bVar5 < bVar1) {
                    bVar5 = bVar1;
                  }
                  uVar7 = uVar7 + 1;
                  if (bVar5 < bVar2) {
                    bVar5 = bVar2;
                  }
                } while (uVar7 < (ulonglong)(longlong)(int)param_6 >> 1);
                lVar11 = uVar7 * 2 + 1;
              }
              if ((lVar11 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (lVar11 = (lVar11 - 1U) * 4 + lVar4 + lVar8, bVar5 < *(byte *)(lVar11 + uVar14))) {
                bVar5 = *(byte *)(lVar11 + uVar14);
              }
            }
            uVar14 = uVar14 + 1;
            *pbVar13 = bVar5;
            pbVar13 = pbVar13 + 1;
          } while (uVar14 < uVar10);
        }
        FUN_140374ca0(param_9,uVar3,param_3,uVar10,(longlong)param_6._4_4_);
        uVar9 = uVar9 + 1;
        uVar12 = uVar12 + 1;
        pbVar15 = pbVar15 + uVar3;
        if ((longlong)param_6._4_4_ <= (longlong)uVar9) {
          uVar9 = 0;
          pbVar15 = param_9;
        }
        param_3 = param_3 + param_4;
        lVar8 = lVar8 + lVar6;
      } while (uVar12 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    do {
      uVar3 = 0;
      if (0 < (longlong)uVar10) {
        do {
          uVar14 = 0;
          bVar5 = 0;
          uVar9 = uVar14;
          if (0 < param_6._4_4_) {
            do {
              if (0 < (int)param_6) {
                lVar4 = 1;
                uVar7 = 0;
                if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                  do {
                    if ((*(char *)(param_7 + uVar14 + uVar7 * 2) != '\0') &&
                       (bVar1 = *(byte *)(uVar3 + uVar7 * 8 + ((lVar8 * -4 + param_1) - lVar16) +
                                         (uVar12 + uVar9) * lVar6), bVar5 < bVar1)) {
                      bVar5 = bVar1;
                    }
                    if ((*(char *)(param_7 + uVar14 + 1 + uVar7 * 2) != '\0') &&
                       (lVar11 = (uVar12 + uVar9) * lVar6,
                       lVar4 = uVar3 + uVar7 * 8 + 4 + ((lVar8 * -4 + param_1) - lVar16),
                       bVar5 < *(byte *)(lVar4 + lVar11))) {
                      bVar5 = *(byte *)(lVar4 + lVar11);
                    }
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (ulonglong)(longlong)(int)param_6 >> 1);
                  lVar4 = uVar7 * 2 + 1;
                }
                if (((lVar4 - 1U < (ulonglong)(longlong)(int)param_6) &&
                    (*(char *)(param_7 + -1 + lVar4 + uVar14) != '\0')) &&
                   (lVar11 = (uVar9 + uVar12) * lVar6,
                   lVar4 = ((lVar8 * -4 + param_1) - lVar16) + -4 + lVar4 * 4 + uVar3,
                   bVar5 < *(byte *)(lVar4 + lVar11))) {
                  bVar5 = *(byte *)(lVar4 + lVar11);
                }
              }
              uVar9 = uVar9 + 1;
              uVar14 = uVar14 + (longlong)(int)param_6;
            } while (uVar9 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(byte *)(uVar3 + param_3 + lVar17) = bVar5;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar10);
      }
      uVar12 = uVar12 + 1;
      lVar17 = lVar17 + param_4;
    } while (uVar12 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

