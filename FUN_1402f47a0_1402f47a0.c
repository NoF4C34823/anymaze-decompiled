
void FUN_1402f47a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

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
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  
  uVar16 = (ulonglong)param_6._4_4_;
  lVar19 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar4 = (longlong)param_2 >> 2;
  uVar5 = (ulonglong)(int)param_6;
  lVar11 = (longlong)((int)param_6 + -1 >> 1);
  uVar3 = (longlong)(int)param_5 * 3;
  uVar7 = uVar3 + 7 & 0xfffffffffffffff8;
  lVar18 = (lVar11 * 3 + lVar19 * lVar4) * -4 + param_1;
  if (param_7 == 0) {
    lVar20 = 0;
    lVar19 = uVar16 - 1;
    lVar11 = param_9;
    if (lVar19 != 0 && 0 < (longlong)uVar16) {
      do {
        FUN_1402dd1e0(lVar18,lVar11,uVar3,uVar5,3);
        lVar20 = lVar20 + 1;
        lVar18 = lVar18 + lVar4 * 4;
        lVar11 = lVar11 + uVar7 * 4;
      } while (lVar20 < lVar19);
    }
    lVar20 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1402dd1e0(lVar18,lVar11,uVar3,uVar5,3);
        thunk_FUN_142d20530(param_9,uVar7,param_3,uVar3,uVar16);
        lVar19 = lVar19 + 1;
        lVar11 = lVar11 + uVar7 * 4;
        if ((longlong)uVar16 <= lVar19) {
          lVar11 = param_9;
        }
        lVar18 = lVar18 + lVar4 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
        if ((longlong)uVar16 <= lVar19) {
          lVar19 = 0;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < param_5._4_4_);
    }
  }
  else {
    uVar7 = 0;
    if (0 < param_5._4_4_) {
      lVar11 = lVar11 * -0xc;
      lVar19 = lVar19 * lVar4 * -4;
      param_1 = param_1 + lVar4 * -4;
      lVar18 = 0;
      lVar20 = 0;
      do {
        uVar10 = 0;
        if (0 < (longlong)uVar3) {
          do {
            uVar12 = 0;
            lVar14 = 0;
            lVar15 = 0;
            lVar17 = 0;
            fVar21 = DAT_143089be0;
            if (0 < (longlong)uVar16) {
              lVar1 = param_1 + lVar4 * 4 + lVar11 + lVar19 + lVar20 + uVar10 * 4;
              do {
                if (0 < (longlong)uVar5) {
                  lVar13 = 1;
                  lVar6 = 0;
                  if (uVar5 >> 1 != 0) {
                    uVar9 = 0;
                    do {
                      uVar8 = uVar9;
                      if ((*(char *)(param_7 + lVar14 + uVar8 * 2) != '\0') &&
                         (fVar2 = *(float *)(lVar6 + lVar1 + lVar17), fVar21 <= fVar2)) {
                        fVar21 = fVar2;
                      }
                      if ((*(char *)(param_7 + lVar14 + 1 + uVar8 * 2) != '\0') &&
                         (fVar2 = *(float *)(lVar6 + 0xc +
                                            lVar11 + lVar4 * 4 + param_1 + lVar19 + lVar20 +
                                            uVar10 * 4 + lVar17), fVar21 <= fVar2)) {
                        fVar21 = fVar2;
                      }
                      uVar9 = uVar8 + 1;
                      lVar6 = lVar6 + 0x18;
                    } while (uVar9 < uVar5 >> 1);
                    lVar13 = uVar8 + 2 + uVar9;
                  }
                  if (((lVar13 - 1U < uVar5) && (*(char *)(param_7 + -1 + lVar13 + lVar14) != '\0'))
                     && (fVar2 = *(float *)(lVar1 + (lVar13 * 3 + -3) * 4 + lVar15 * 4),
                        fVar21 <= fVar2)) {
                    fVar21 = fVar2;
                  }
                }
                uVar12 = uVar12 + 1;
                lVar14 = lVar14 + uVar5;
                lVar15 = lVar15 + lVar4;
                lVar17 = lVar17 + lVar4 * 4;
              } while (uVar12 < uVar16);
            }
            *(float *)(param_3 + lVar18 + uVar10 * 4) = fVar21;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar3);
        }
        uVar7 = uVar7 + 1;
        lVar18 = lVar18 + ((longlong)param_4 >> 2) * 4;
        lVar20 = lVar20 + lVar4 * 4;
      } while (uVar7 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

