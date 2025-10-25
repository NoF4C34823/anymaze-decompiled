
void FUN_14039f800(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar4 = (longlong)param_2;
  lVar7 = (param_6._4_4_ + -1 >> 1) * lVar4;
  lVar11 = (longlong)((int)param_6 + -1 >> 1);
  uVar2 = (longlong)(int)param_5 * 4;
  uVar5 = uVar2 + 0x1f & 0xffffffffffffffe0;
  lVar13 = (lVar11 * -4 + param_1) - lVar7;
  if (param_7 == 0) {
    lVar14 = 0;
    lVar11 = (longlong)param_6._4_4_ + -1;
    lVar7 = param_9;
    if (lVar11 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_1403db020(lVar13,lVar7,uVar2,(longlong)(int)param_6,4);
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + lVar4;
        lVar7 = lVar7 + uVar5;
      } while (lVar14 < lVar11);
    }
    lVar14 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1403db020(lVar13,lVar7,uVar2,(longlong)(int)param_6,4);
        FUN_1403e4f20(param_9,uVar5,param_3,uVar2,(longlong)param_6._4_4_);
        lVar11 = lVar11 + 1;
        lVar7 = lVar7 + uVar5;
        if (param_6._4_4_ <= lVar11) {
          lVar11 = 0;
          lVar7 = param_9;
        }
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + lVar4;
        param_3 = param_3 + param_4;
      } while (lVar14 < param_5._4_4_);
    }
  }
  else {
    uVar5 = 0;
    lVar13 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar8 = 0;
        if (0 < (longlong)uVar2) {
          do {
            uVar12 = 0;
            bVar9 = 0xff;
            lVar14 = 0;
            if (0 < param_6._4_4_) {
              do {
                if (0 < (int)param_6) {
                  lVar3 = 1;
                  uVar6 = 0;
                  if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + lVar14 + uVar6 * 2) != '\0') &&
                         (bVar1 = *(byte *)(uVar8 + uVar6 * 8 + ((lVar11 * -4 + param_1) - lVar7) +
                                           (uVar5 + uVar12) * lVar4), bVar1 < bVar9)) {
                        bVar9 = bVar1;
                      }
                      if ((*(char *)(param_7 + lVar14 + 1 + uVar6 * 2) != '\0') &&
                         (lVar10 = (uVar5 + uVar12) * lVar4,
                         lVar3 = uVar8 + uVar6 * 8 + 4 + ((lVar11 * -4 + param_1) - lVar7),
                         *(byte *)(lVar3 + lVar10) < bVar9)) {
                        bVar9 = *(byte *)(lVar3 + lVar10);
                      }
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < (ulonglong)(longlong)(int)param_6 >> 1);
                    lVar3 = uVar6 * 2 + 1;
                  }
                  if (((lVar3 - 1U < (ulonglong)(longlong)(int)param_6) &&
                      (*(char *)(param_7 + -1 + lVar3 + lVar14) != '\0')) &&
                     (lVar10 = (uVar12 + uVar5) * lVar4,
                     lVar3 = ((lVar11 * -4 + param_1) - lVar7) + -4 + lVar3 * 4 + uVar8,
                     *(byte *)(lVar3 + lVar10) < bVar9)) {
                    bVar9 = *(byte *)(lVar3 + lVar10);
                  }
                }
                uVar12 = uVar12 + 1;
                lVar14 = lVar14 + (int)param_6;
              } while (uVar12 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(byte *)(uVar8 + param_3 + lVar13) = bVar9;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar2);
        }
        uVar5 = uVar5 + 1;
        lVar13 = lVar13 + param_4;
      } while (uVar5 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

