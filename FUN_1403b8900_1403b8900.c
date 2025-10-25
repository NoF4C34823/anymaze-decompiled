
void FUN_1403b8900(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  lVar13 = (longlong)param_2 >> 2;
  lVar14 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar17 = (longlong)((int)param_6 + -1 >> 1);
  uVar2 = (longlong)(int)param_5 * 3;
  uVar3 = uVar2 + 7 & 0xfffffffffffffff8;
  lVar5 = (lVar17 * 3 + lVar13 * lVar14) * -4 + param_1;
  if (param_7 == 0) {
    lVar19 = 0;
    lVar17 = (longlong)param_6._4_4_ + -1;
    lVar14 = param_9;
    if (lVar17 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_1403a4f20(lVar5,lVar14,uVar2,(longlong)(int)param_6,3);
        lVar19 = lVar19 + 1;
        lVar5 = lVar5 + lVar13 * 4;
        lVar14 = lVar14 + uVar3 * 4;
      } while (lVar19 < lVar17);
    }
    lVar19 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1403a4f20(lVar5,lVar14,uVar2,(longlong)(int)param_6,3);
        thunk_FUN_142d23d30(param_9,uVar3,param_3,uVar2,(longlong)param_6._4_4_);
        lVar17 = lVar17 + 1;
        lVar19 = lVar19 + 1;
        lVar14 = lVar14 + uVar3 * 4;
        if (param_6._4_4_ <= lVar17) {
          lVar17 = 0;
          lVar14 = param_9;
        }
        lVar5 = lVar5 + lVar13 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
      } while (lVar19 < param_5._4_4_);
    }
  }
  else {
    uVar3 = 0;
    if (0 < param_5._4_4_) {
      lVar5 = lVar13 * 4;
      lVar17 = lVar17 * -0xc;
      lVar14 = lVar14 * lVar13 * -4;
      param_1 = param_1 + lVar13 * -4;
      lVar19 = 0;
      lVar18 = 0;
      do {
        uVar7 = 0;
        if (0 < (longlong)uVar2) {
          uVar4 = (ulonglong)(int)param_6;
          do {
            uVar11 = 0;
            lVar12 = 0;
            lVar15 = 0;
            lVar16 = 0;
            fVar20 = DAT_143089de0;
            if (0 < param_6._4_4_) {
              lVar8 = uVar7 * 4 + param_1 + lVar5 + lVar17 + lVar14 + lVar18;
              do {
                if (0 < (longlong)uVar4) {
                  uVar9 = 0;
                  lVar10 = 1;
                  lVar6 = 0;
                  if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + lVar12 + uVar9 * 2) != '\0') &&
                         (fVar1 = *(float *)(lVar6 + lVar8 + lVar16), fVar20 <= fVar1)) {
                        fVar20 = fVar1;
                      }
                      if ((*(char *)(param_7 + lVar12 + 1 + uVar9 * 2) != '\0') &&
                         (fVar1 = *(float *)(lVar6 + 0xc +
                                            uVar7 * 4 + lVar17 + lVar5 + param_1 + lVar14 + lVar18 +
                                            lVar16), fVar20 <= fVar1)) {
                        fVar20 = fVar1;
                      }
                      uVar9 = uVar9 + 1;
                      lVar6 = lVar6 + 0x18;
                    } while (uVar9 < (ulonglong)(longlong)(int)param_6 >> 1);
                    lVar10 = uVar9 * 2 + 1;
                  }
                  if (((lVar10 - 1U < uVar4) && (*(char *)(param_7 + -1 + lVar10 + lVar12) != '\0'))
                     && (fVar1 = *(float *)((lVar10 - 1U) * 0xc + lVar8 + lVar15 * 4),
                        fVar20 <= fVar1)) {
                    fVar20 = fVar1;
                  }
                }
                uVar11 = uVar11 + 1;
                lVar12 = lVar12 + uVar4;
                lVar16 = lVar16 + lVar5;
                lVar15 = lVar15 + lVar13;
              } while (uVar11 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(float *)(param_3 + lVar19 + uVar7 * 4) = fVar20;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2);
        }
        uVar3 = uVar3 + 1;
        lVar19 = lVar19 + ((longlong)param_4 >> 2) * 4;
        lVar18 = lVar18 + lVar5;
      } while (uVar3 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

