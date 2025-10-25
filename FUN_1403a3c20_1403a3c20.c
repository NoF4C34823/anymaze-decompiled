
void FUN_1403a3c20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  uVar6 = *param_6;
  uVar3 = param_6[1];
  uVar9 = *param_5 * 2 + *param_5;
  lVar15 = (param_1 + (longlong)(int)(uVar6 - 1 >> 1) * -3) - (int)(uVar3 - 1 >> 1) * param_2;
  uVar7 = uVar9 + 0x1f & 0xffffffffffffffe0;
  if (param_7 == 0) {
    lVar11 = 0;
    lVar13 = param_9;
    if (0 < (longlong)(uVar3 - 1)) {
      while( true ) {
        FUN_1403db020(lVar15,lVar13,uVar9,uVar6,3);
        uVar3 = param_6[1];
        lVar11 = lVar11 + 1;
        lVar15 = lVar15 + param_2;
        lVar13 = lVar13 + uVar7;
        if ((longlong)(uVar3 - 1) <= lVar11) break;
        uVar6 = *param_6;
      }
    }
    lVar11 = uVar3 - 1;
    lVar12 = 0;
    if (0 < param_5[1]) {
      do {
        FUN_1403db020(lVar15,lVar13,uVar9,*param_6,3);
        FUN_1403e4f20(param_9,uVar7,param_3,uVar9,param_6[1]);
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + uVar7;
        if ((longlong)param_6[1] <= lVar11) {
          lVar11 = 0;
          lVar13 = param_9;
        }
        lVar15 = lVar15 + param_2;
        param_3 = param_3 + param_4;
      } while (lVar12 < param_5[1]);
    }
  }
  else {
    uVar7 = param_5[1];
    uVar8 = 0;
    lVar13 = 0;
    if (0 < (longlong)uVar7) {
      do {
        uVar4 = 0;
        if (0 < (longlong)uVar9) {
          do {
            uVar14 = 0;
            bVar5 = 0xff;
            lVar11 = 0;
            if (0 < (longlong)uVar3) {
              do {
                if (0 < (longlong)uVar6) {
                  lVar12 = 1;
                  uVar2 = 0;
                  if (uVar6 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + lVar11 + uVar2 * 2) != '\0') &&
                         (bVar1 = *(byte *)(uVar2 * 6 + uVar4 + lVar15 + (uVar8 + uVar14) * param_2)
                         , bVar1 < bVar5)) {
                        bVar5 = bVar1;
                      }
                      if ((*(char *)(param_7 + lVar11 + 1 + uVar2 * 2) != '\0') &&
                         (lVar10 = (uVar8 + uVar14) * param_2,
                         lVar12 = uVar2 * 6 + uVar4 + 3 + lVar15, *(byte *)(lVar12 + lVar10) < bVar5
                         )) {
                        bVar5 = *(byte *)(lVar12 + lVar10);
                      }
                      uVar2 = uVar2 + 1;
                    } while (uVar2 < uVar6 >> 1);
                    lVar12 = uVar2 * 2 + 1;
                  }
                  if (((lVar12 - 1U < uVar6) && (*(char *)(param_7 + -1 + lVar12 + lVar11) != '\0'))
                     && (lVar10 = (uVar14 + uVar8) * param_2,
                        lVar12 = lVar12 * 3 + -3 + lVar15 + uVar4,
                        *(byte *)(lVar12 + lVar10) < bVar5)) {
                    bVar5 = *(byte *)(lVar12 + lVar10);
                  }
                }
                uVar14 = uVar14 + 1;
                lVar11 = lVar11 + uVar6;
              } while (uVar14 < uVar3);
            }
            *(byte *)(uVar4 + param_3 + lVar13) = bVar5;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar9);
        }
        uVar8 = uVar8 + 1;
        lVar13 = lVar13 + param_4;
      } while (uVar8 < uVar7);
    }
  }
  return;
}

