
void FUN_1403b64e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9,undefined8 param_10,int param_11)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  
  uVar4 = 0;
  if (0 < (longlong)param_6) {
    lVar12 = 0;
    lVar3 = 0;
    do {
      uVar6 = 0;
      if (0 < (longlong)param_5) {
        do {
          uVar10 = 0;
          lVar9 = 0;
          lVar8 = 0;
          lVar7 = 0;
          fVar14 = DAT_143089de0;
          if (0 < (longlong)param_8) {
            lVar1 = uVar6 * 4;
            do {
              if (0 < (longlong)param_7) {
                uVar13 = 0;
                lVar5 = 1;
                lVar11 = 0;
                if (param_7 >> 1 != 0) {
                  do {
                    if ((*(char *)(param_9 + lVar9 + uVar13 * 2) != '\0') &&
                       (fVar2 = *(float *)(lVar1 + param_1 + lVar3 + lVar7 + lVar11 * 8),
                       fVar14 <= fVar2)) {
                      fVar14 = fVar2;
                    }
                    if ((*(char *)(param_9 + lVar9 + 1 + uVar13 * 2) != '\0') &&
                       (fVar2 = *(float *)(lVar1 + (longlong)param_11 * 4 + param_1 + lVar3 + lVar7
                                          + lVar11 * 8), fVar14 <= fVar2)) {
                      fVar14 = fVar2;
                    }
                    uVar13 = uVar13 + 1;
                    lVar11 = lVar11 + param_11;
                  } while (uVar13 < param_7 >> 1);
                  lVar5 = uVar13 * 2 + 1;
                }
                if (((lVar5 - 1U < param_7) && (*(char *)(param_9 + -1 + lVar5 + lVar9) != '\0')) &&
                   (fVar2 = *(float *)((lVar5 - 1U) * (longlong)param_11 * 4 +
                                       param_1 + lVar3 + lVar1 + lVar8 * 4), fVar14 <= fVar2)) {
                  fVar14 = fVar2;
                }
              }
              uVar10 = uVar10 + 1;
              lVar9 = lVar9 + param_7;
              lVar7 = lVar7 + param_2 * 4;
              lVar8 = lVar8 + param_2;
            } while (uVar10 < param_8);
          }
          *(float *)(param_3 + lVar12 + uVar6 * 4) = fVar14;
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_5);
      }
      uVar4 = uVar4 + 1;
      lVar12 = lVar12 + param_4 * 4;
      lVar3 = lVar3 + param_2 * 4;
    } while (uVar4 < param_6);
  }
  return;
}

