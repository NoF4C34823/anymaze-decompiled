
void FUN_14031a700(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
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
  uVar10 = *param_6;
  uVar2 = *param_5 * 4;
  uVar18 = *param_5 * 4 + 7U & 0xfffffffffffffff8;
  param_1 = param_1 + ((int)(uVar9 - 1 >> 1) * param_2 + (longlong)(int)(uVar10 - 1 >> 1) * 4) * -4;
  if (param_7 == 0) {
    lVar11 = 0;
    lVar15 = param_9;
    if (0 < (longlong)(uVar9 - 1)) {
      while( true ) {
        FUN_1402fd0c0(param_1,lVar15,uVar2,uVar10,4);
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
        FUN_1402fd0c0(param_1,lVar15,uVar2,*param_6,4);
        thunk_FUN_142d22130(param_9,uVar18,param_3,uVar2,param_6[1]);
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
        if (0 < (longlong)uVar2) {
          do {
            uVar13 = 0;
            lVar16 = 0;
            lVar17 = 0;
            lVar19 = 0;
            fVar20 = DAT_143089c20;
            if (0 < (longlong)uVar9) {
              lVar1 = param_1 + lVar11 + lVar12;
              do {
                if (0 < (longlong)uVar10) {
                  lVar8 = 1;
                  lVar4 = 0;
                  if (uVar10 >> 1 != 0) {
                    lVar8 = lVar1 + lVar19;
                    uVar7 = 0;
                    do {
                      uVar6 = uVar7;
                      if ((*(char *)(param_7 + lVar16 + uVar6 * 2) != '\0') &&
                         (fVar3 = *(float *)(lVar4 + lVar8), fVar3 <= fVar20)) {
                        fVar20 = fVar3;
                      }
                      if ((*(char *)(param_7 + lVar16 + 1 + uVar6 * 2) != '\0') &&
                         (fVar3 = *(float *)(lVar4 + 0x10 + lVar8), fVar3 <= fVar20)) {
                        fVar20 = fVar3;
                      }
                      uVar7 = uVar6 + 1;
                      lVar4 = lVar4 + 0x20;
                    } while (uVar7 < uVar10 >> 1);
                    lVar8 = uVar6 + 2 + uVar7;
                  }
                  if (((lVar8 - 1U < uVar10) && (*(char *)(param_7 + -1 + lVar8 + lVar16) != '\0'))
                     && (fVar3 = *(float *)((lVar8 - 1U) * 0x10 + lVar1 + lVar17 * 4),
                        fVar3 <= fVar20)) {
                    fVar20 = fVar3;
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
          } while (uVar5 < uVar2);
        }
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + (param_4 >> 2) * 4;
        lVar11 = lVar11 + param_2 * 4;
      } while (uVar14 < uVar18);
    }
  }
  return;
}

