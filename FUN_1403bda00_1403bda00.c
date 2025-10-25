
void FUN_1403bda00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  
  param_2 = param_2 >> 2;
  uVar11 = *param_6;
  uVar18 = param_6[1];
  uVar8 = *param_5 * 4;
  uVar13 = uVar8 + 7 & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)(int)(uVar11 - 1 >> 1) * 4 + (int)(uVar18 - 1 >> 1) * param_2) * -4
  ;
  if (param_7 == 0) {
    lVar5 = 0;
    lVar6 = param_9;
    if (0 < (longlong)(uVar18 - 1)) {
      while( true ) {
        FUN_1403a4f20(param_1,lVar6,uVar8,uVar11,4);
        uVar18 = param_6[1];
        lVar5 = lVar5 + 1;
        param_1 = param_1 + param_2 * 4;
        lVar6 = lVar6 + uVar13 * 4;
        if ((longlong)(uVar18 - 1) <= lVar5) break;
        uVar11 = *param_6;
      }
    }
    lVar5 = uVar18 - 1;
    lVar15 = 0;
    if (0 < param_5[1]) {
      do {
        FUN_1403a4f20(param_1,lVar6,uVar8,*param_6,4);
        thunk_FUN_142d23d30(param_9,uVar13,param_3,uVar8,param_6[1]);
        lVar5 = lVar5 + 1;
        lVar15 = lVar15 + 1;
        lVar6 = lVar6 + uVar13 * 4;
        if ((longlong)param_6[1] <= lVar5) {
          lVar5 = 0;
          lVar6 = param_9;
        }
        param_1 = param_1 + param_2 * 4;
        param_3 = param_3 + (param_4 >> 2) * 4;
      } while (lVar15 < param_5[1]);
    }
  }
  else {
    uVar13 = param_5[1];
    uVar17 = 0;
    if (0 < (longlong)uVar13) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        uVar4 = 0;
        lVar15 = 0;
        if (0 < (longlong)uVar8) {
          do {
            uVar14 = 0;
            lVar16 = 0;
            lVar10 = 0;
            lVar12 = 0;
            fVar19 = DAT_143089de0;
            if (0 < (longlong)uVar18) {
              lVar1 = param_1 + lVar5 + lVar15;
              do {
                if (0 < (longlong)uVar11) {
                  uVar7 = 0;
                  lVar9 = 1;
                  lVar3 = 0;
                  if (uVar11 >> 1 != 0) {
                    lVar9 = lVar1 + lVar12;
                    do {
                      if ((*(char *)(param_7 + lVar16 + uVar7 * 2) != '\0') &&
                         (fVar2 = *(float *)(lVar3 + lVar9), fVar19 <= fVar2)) {
                        fVar19 = fVar2;
                      }
                      if ((*(char *)(param_7 + lVar16 + 1 + uVar7 * 2) != '\0') &&
                         (fVar2 = *(float *)(lVar3 + 0x10 + lVar9), fVar19 <= fVar2)) {
                        fVar19 = fVar2;
                      }
                      uVar7 = uVar7 + 1;
                      lVar3 = lVar3 + 0x20;
                    } while (uVar7 < uVar11 >> 1);
                    lVar9 = uVar7 * 2 + 1;
                  }
                  if (((lVar9 - 1U < uVar11) && (*(char *)(param_7 + -1 + lVar9 + lVar16) != '\0'))
                     && (fVar2 = *(float *)((lVar9 - 1U) * 0x10 + lVar1 + lVar10 * 4),
                        fVar19 <= fVar2)) {
                    fVar19 = fVar2;
                  }
                }
                uVar14 = uVar14 + 1;
                lVar16 = lVar16 + uVar11;
                lVar10 = lVar10 + param_2;
                lVar12 = lVar12 + param_2 * 4;
              } while (uVar14 < uVar18);
            }
            uVar4 = uVar4 + 1;
            *(float *)(lVar15 + param_3 + lVar6) = fVar19;
            lVar15 = lVar15 + 4;
          } while (uVar4 < uVar8);
        }
        uVar17 = uVar17 + 1;
        lVar6 = lVar6 + (param_4 >> 2) * 4;
        lVar5 = lVar5 + param_2 * 4;
      } while (uVar17 < uVar13);
    }
  }
  return;
}

