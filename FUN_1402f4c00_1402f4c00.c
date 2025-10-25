
void FUN_1402f4c00(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  
  uVar15 = (ulonglong)param_6._4_4_;
  lVar8 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar4 = (longlong)param_2 >> 2;
  uVar5 = (ulonglong)(int)param_6;
  lVar19 = (longlong)((int)param_6 + -1 >> 1);
  uVar2 = (longlong)(int)param_5 * 4;
  uVar6 = (longlong)(int)param_5 * 4 + 7U & 0xfffffffffffffff8;
  lVar17 = (lVar8 * lVar4 + lVar19 * 4) * -4 + param_1;
  if (param_7 == 0) {
    lVar20 = 0;
    lVar19 = uVar15 - 1;
    lVar8 = param_9;
    if (lVar19 != 0 && 0 < (longlong)uVar15) {
      do {
        FUN_1402dd1e0(lVar17,lVar8,uVar2,uVar5,4);
        lVar20 = lVar20 + 1;
        lVar17 = lVar17 + lVar4 * 4;
        lVar8 = lVar8 + uVar6 * 4;
      } while (lVar20 < lVar19);
    }
    lVar20 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1402dd1e0(lVar17,lVar8,uVar2,uVar5,4);
        thunk_FUN_142d20530(param_9,uVar6,param_3,uVar2,uVar15);
        lVar19 = lVar19 + 1;
        lVar8 = lVar8 + uVar6 * 4;
        if ((longlong)uVar15 <= lVar19) {
          lVar8 = param_9;
        }
        lVar17 = lVar17 + lVar4 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
        if ((longlong)uVar15 <= lVar19) {
          lVar19 = 0;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < param_5._4_4_);
    }
  }
  else {
    uVar6 = 0;
    if (0 < param_5._4_4_) {
      lVar19 = lVar19 * -0x10;
      lVar8 = lVar8 * lVar4 * -4;
      param_1 = param_1 + lVar4 * -4;
      lVar17 = 0;
      lVar20 = 0;
      do {
        uVar12 = 0;
        if (0 < (longlong)uVar2) {
          do {
            uVar13 = 0;
            lVar14 = 0;
            lVar16 = 0;
            lVar18 = 0;
            fVar21 = DAT_143089be0;
            if (0 < (longlong)uVar15) {
              lVar1 = param_1 + lVar4 * 4 + lVar19 + lVar8 + lVar20 + uVar12 * 4;
              do {
                if (0 < (longlong)uVar5) {
                  lVar11 = 1;
                  lVar7 = 0;
                  if (uVar5 >> 1 != 0) {
                    uVar10 = 0;
                    do {
                      uVar9 = uVar10;
                      if ((*(char *)(param_7 + lVar14 + uVar9 * 2) != '\0') &&
                         (fVar3 = *(float *)(lVar7 + lVar1 + lVar18), fVar21 <= fVar3)) {
                        fVar21 = fVar3;
                      }
                      if ((*(char *)(param_7 + lVar14 + 1 + uVar9 * 2) != '\0') &&
                         (fVar3 = *(float *)(lVar7 + 0x10 +
                                            lVar19 + lVar4 * 4 + param_1 + lVar8 + lVar20 +
                                            uVar12 * 4 + lVar18), fVar21 <= fVar3)) {
                        fVar21 = fVar3;
                      }
                      uVar10 = uVar9 + 1;
                      lVar7 = lVar7 + 0x20;
                    } while (uVar10 < uVar5 >> 1);
                    lVar11 = uVar9 + 2 + uVar10;
                  }
                  if (((lVar11 - 1U < uVar5) && (*(char *)(param_7 + -1 + lVar11 + lVar14) != '\0'))
                     && (fVar3 = *(float *)((lVar11 - 1U) * 0x10 + lVar1 + lVar16 * 4),
                        fVar21 <= fVar3)) {
                    fVar21 = fVar3;
                  }
                }
                uVar13 = uVar13 + 1;
                lVar14 = lVar14 + uVar5;
                lVar16 = lVar16 + lVar4;
                lVar18 = lVar18 + lVar4 * 4;
              } while (uVar13 < uVar15);
            }
            *(float *)(param_3 + lVar17 + uVar12 * 4) = fVar21;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar2);
        }
        uVar6 = uVar6 + 1;
        lVar17 = lVar17 + ((longlong)param_4 >> 2) * 4;
        lVar20 = lVar20 + lVar4 * 4;
      } while (uVar6 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

