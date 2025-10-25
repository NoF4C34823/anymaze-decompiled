
void FUN_1402fa160(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  
  param_2 = param_2 >> 2;
  uVar9 = param_6[1];
  uVar3 = *param_5 * 3;
  uVar10 = *param_6;
  uVar18 = uVar3 + 7 & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)(int)(uVar10 - 1 >> 1) * 3 + (int)(uVar9 - 1 >> 1) * param_2) * -4;
  if (param_7 == 0) {
    lVar11 = 0;
    lVar15 = param_9;
    if (0 < (longlong)(uVar9 - 1)) {
      while( true ) {
        FUN_1402dd1e0(param_1,lVar15,uVar3,uVar10,3);
        uVar9 = param_6[1];
        lVar11 = lVar11 + 1;
        param_1 = param_1 + param_2 * 4;
        lVar15 = lVar15 + uVar18 * 4;
        if ((longlong)(uVar9 - 1) <= lVar11) break;
        uVar10 = *param_6;
      }
    }
    lVar11 = uVar9 - 1;
    lVar12 = 0;
    if (0 < param_5[1]) {
      do {
        FUN_1402dd1e0(param_1,lVar15,uVar3,*param_6,3);
        thunk_FUN_142d20530(param_9,uVar18,param_3,uVar3,param_6[1]);
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 1;
        param_1 = param_1 + param_2 * 4;
        param_3 = param_3 + (param_4 >> 2) * 4;
        lVar15 = lVar15 + uVar18 * 4;
        if ((longlong)param_6[1] <= lVar11) {
          lVar11 = 0;
          lVar15 = param_9;
        }
      } while (lVar12 < param_5[1]);
    }
  }
  else {
    uVar18 = param_5[1];
    uVar14 = 0;
    if (0 < (longlong)uVar18) {
      lVar15 = 0;
      lVar11 = 0;
      do {
        uVar5 = 0;
        lVar12 = 0;
        if (0 < (longlong)uVar3) {
          do {
            uVar13 = 0;
            lVar16 = 0;
            lVar17 = 0;
            lVar19 = 0;
            fVar20 = DAT_143089be0;
            if (0 < (longlong)uVar9) {
              lVar1 = param_1 + lVar11 + lVar12;
              do {
                if (0 < (longlong)uVar10) {
                  lVar4 = 1;
                  lVar6 = 0;
                  if (uVar10 >> 1 != 0) {
                    lVar4 = lVar1 + lVar19;
                    uVar8 = 0;
                    do {
                      uVar7 = uVar8;
                      if ((*(char *)(param_7 + lVar16 + uVar7 * 2) != '\0') &&
                         (fVar2 = *(float *)(lVar6 + lVar4), fVar20 <= fVar2)) {
                        fVar20 = fVar2;
                      }
                      if ((*(char *)(param_7 + lVar16 + 1 + uVar7 * 2) != '\0') &&
                         (fVar2 = *(float *)(lVar6 + 0xc + lVar4), fVar20 <= fVar2)) {
                        fVar20 = fVar2;
                      }
                      uVar8 = uVar7 + 1;
                      lVar6 = lVar6 + 0x18;
                    } while (uVar8 < uVar10 >> 1);
                    lVar4 = uVar7 + 2 + uVar8;
                  }
                  if (((lVar4 - 1U < uVar10) && (*(char *)(param_7 + -1 + lVar4 + lVar16) != '\0'))
                     && (fVar2 = *(float *)(lVar1 + (lVar4 * 3 + -3) * 4 + lVar17 * 4),
                        fVar20 <= fVar2)) {
                    fVar20 = fVar2;
                  }
                }
                uVar13 = uVar13 + 1;
                lVar16 = lVar16 + uVar10;
                lVar17 = lVar17 + param_2;
                lVar19 = lVar19 + param_2 * 4;
              } while (uVar13 < uVar9);
            }
            uVar5 = uVar5 + 1;
            *(float *)(lVar12 + param_3 + lVar15) = fVar20;
            lVar12 = lVar12 + 4;
          } while (uVar5 < uVar3);
        }
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + (param_4 >> 2) * 4;
        lVar11 = lVar11 + param_2 * 4;
      } while (uVar14 < uVar18);
    }
  }
  return;
}

