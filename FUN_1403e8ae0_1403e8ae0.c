
void FUN_1403e8ae0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  uVar8 = (longlong)(int)param_5 * 3;
  lVar11 = (longlong)param_2;
  lVar18 = (param_6._4_4_ + -1 >> 1) * lVar11;
  lVar16 = (longlong)((int)param_6 + -1 >> 1);
  uVar14 = uVar8 + 0x1f & 0xffffffffffffffe0;
  lVar12 = (lVar16 * -3 + param_1) - lVar18;
  if (param_7 == 0) {
    lVar19 = 0;
    lVar18 = (longlong)param_6._4_4_ + -1;
    lVar16 = param_9;
    if (lVar18 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_1403db020(lVar12,lVar16,uVar8,(longlong)(int)param_6,3);
        lVar19 = lVar19 + 1;
        lVar12 = lVar12 + lVar11;
        lVar16 = lVar16 + uVar14;
      } while (lVar19 < lVar18);
    }
    uVar22 = 0;
    lVar19 = 0;
    if (0 < param_5._4_4_) {
      uVar17 = (ulonglong)(longlong)param_6._4_4_ >> 3;
      do {
        FUN_1403db020(lVar12,lVar16,uVar8,(longlong)(int)param_6,3);
        uVar15 = 0;
        if (0 < (longlong)uVar8) {
          do {
            bVar10 = 0xff;
            if (0 < param_6._4_4_) {
              uVar21 = 0;
              uVar13 = 1;
              lVar9 = 0;
              bVar10 = 0xff;
              if (uVar17 != 0) {
                lVar20 = uVar14 * 7 + param_9 + uVar15;
                lVar1 = uVar14 * 5 + param_9 + uVar15;
                lVar2 = uVar14 * 4 + param_9 + uVar15;
                lVar3 = uVar14 * 3 + param_9 + uVar15;
                lVar4 = uVar14 * 6 + param_9 + uVar15;
                lVar5 = uVar14 * 2 + param_9 + uVar15;
                lVar6 = param_9 + uVar14 + uVar15;
                bVar10 = 0xff;
                do {
                  if (*(byte *)(param_9 + uVar15 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(param_9 + uVar15 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar6 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar6 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar5 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar5 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar3 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar3 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar2 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar2 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar1 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar1 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar4 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar4 + lVar9 * 8);
                  }
                  if (*(byte *)(lVar20 + lVar9 * 8) < bVar10) {
                    bVar10 = *(byte *)(lVar20 + lVar9 * 8);
                  }
                  uVar21 = uVar21 + 1;
                  lVar9 = lVar9 + uVar14;
                } while (uVar21 < uVar17);
                uVar13 = uVar21 * 8 + 1;
              }
              if (uVar13 <= (ulonglong)(longlong)param_6._4_4_) {
                    /* WARNING: Could not recover jumptable at 0x0001403e8f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_1403e8f71 +
                          (byte)(&DAT_143089e88)[(uint)(param_6._4_4_ - (int)uVar13)]))
                          (uVar17,param_9 - uVar14);
                return;
              }
            }
            *(byte *)(uVar15 + param_3 + lVar19) = bVar10;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar8);
        }
        lVar18 = lVar18 + 1;
        lVar16 = lVar16 + uVar14;
        if (param_6._4_4_ <= lVar18) {
          lVar18 = 0;
          lVar16 = param_9;
        }
        uVar22 = uVar22 + 1;
        lVar12 = lVar12 + lVar11;
        lVar19 = lVar19 + param_4;
      } while (uVar22 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar14 = 0;
    lVar12 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar22 = 0;
        if (0 < (longlong)uVar8) {
          do {
            uVar17 = 0;
            bVar10 = 0xff;
            lVar19 = 0;
            if (0 < param_6._4_4_) {
              do {
                if (0 < (int)param_6) {
                  lVar9 = 1;
                  uVar15 = 0;
                  if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + lVar19 + uVar15 * 2) != '\0') &&
                         (bVar7 = *(byte *)(uVar15 * 6 + uVar22 + ((lVar16 * -3 + param_1) - lVar18)
                                           + (uVar14 + uVar17) * lVar11), bVar7 < bVar10)) {
                        bVar10 = bVar7;
                      }
                      if ((*(char *)(param_7 + lVar19 + 1 + uVar15 * 2) != '\0') &&
                         (lVar20 = (uVar14 + uVar17) * lVar11,
                         lVar9 = uVar15 * 6 + uVar22 + 3 + ((lVar16 * -3 + param_1) - lVar18),
                         *(byte *)(lVar9 + lVar20) < bVar10)) {
                        bVar10 = *(byte *)(lVar9 + lVar20);
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < (ulonglong)(longlong)(int)param_6 >> 1);
                    lVar9 = uVar15 * 2 + 1;
                  }
                  if (((lVar9 - 1U < (ulonglong)(longlong)(int)param_6) &&
                      (*(char *)(param_7 + -1 + lVar9 + lVar19) != '\0')) &&
                     (lVar20 = (uVar17 + uVar14) * lVar11,
                     lVar9 = ((lVar16 * -3 + param_1) - lVar18) + lVar9 * 3 + -3 + uVar22,
                     *(byte *)(lVar9 + lVar20) < bVar10)) {
                    bVar10 = *(byte *)(lVar9 + lVar20);
                  }
                }
                uVar17 = uVar17 + 1;
                lVar19 = lVar19 + (int)param_6;
              } while (uVar17 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(byte *)(uVar22 + param_3 + lVar12) = bVar10;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar8);
        }
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + param_4;
      } while (uVar14 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

