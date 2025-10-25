
void FUN_140311b40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9,undefined8 param_10,int param_11)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  
  uVar5 = 0;
  if (0 < (longlong)param_6) {
    lVar10 = 0;
    lVar2 = 0;
    do {
      uVar7 = 0;
      if (0 < (longlong)param_5) {
        do {
          uVar9 = 0;
          lVar8 = 0;
          lVar4 = 0;
          lVar3 = 0;
          fVar14 = DAT_143089c20;
          if (0 < (longlong)param_8) {
            do {
              if (0 < (longlong)param_7) {
                lVar6 = 1;
                lVar11 = 0;
                if (param_7 >> 1 != 0) {
                  uVar13 = 0;
                  do {
                    uVar12 = uVar13;
                    if ((*(char *)(param_9 + lVar8 + uVar12 * 2) != '\0') &&
                       (fVar1 = *(float *)(param_1 + lVar2 + uVar7 * 4 + lVar3 + lVar11 * 8),
                       fVar1 <= fVar14)) {
                      fVar14 = fVar1;
                    }
                    if ((*(char *)(param_9 + lVar8 + 1 + uVar12 * 2) != '\0') &&
                       (fVar1 = *(float *)((longlong)param_11 * 4 + param_1 + lVar2 + uVar7 * 4 +
                                           lVar3 + lVar11 * 8), fVar1 <= fVar14)) {
                      fVar14 = fVar1;
                    }
                    uVar13 = uVar12 + 1;
                    lVar11 = lVar11 + param_11;
                  } while (uVar13 < param_7 >> 1);
                  lVar6 = uVar12 + 2 + uVar13;
                }
                if (((lVar6 - 1U < param_7) && (*(char *)(param_9 + -1 + lVar6 + lVar8) != '\0')) &&
                   (fVar1 = *(float *)((lVar6 - 1U) * (longlong)param_11 * 4 +
                                       param_1 + lVar2 + uVar7 * 4 + lVar4 * 4), fVar1 <= fVar14)) {
                  fVar14 = fVar1;
                }
              }
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + param_7;
              lVar4 = lVar4 + param_2;
              lVar3 = lVar3 + param_2 * 4;
            } while (uVar9 < param_8);
          }
          *(float *)(param_3 + lVar10 + uVar7 * 4) = fVar14;
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_5);
      }
      uVar5 = uVar5 + 1;
      lVar10 = lVar10 + param_4 * 4;
      lVar2 = lVar2 + param_2 * 4;
    } while (uVar5 < param_6);
  }
  return;
}

