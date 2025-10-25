
void FUN_1403763a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  lVar10 = (longlong)param_2;
  lVar18 = (param_6._4_4_ + -1 >> 1) * lVar10;
  lVar15 = (longlong)((int)param_6 + -1 >> 1);
  uVar17 = (longlong)(int)param_5 * 4;
  uVar13 = uVar17 + 0x1f & 0xffffffffffffffe0;
  lVar11 = (lVar15 * -4 + param_1) - lVar18;
  if (param_7 == 0) {
    lVar19 = 0;
    lVar18 = (longlong)param_6._4_4_ + -1;
    lVar15 = param_9;
    if (lVar18 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_14036ade0(lVar11,lVar15,uVar17,(longlong)(int)param_6,4);
        lVar19 = lVar19 + 1;
        lVar11 = lVar11 + lVar10;
        lVar15 = lVar15 + uVar13;
      } while (lVar19 < lVar18);
    }
    uVar22 = 0;
    lVar19 = 0;
    if (0 < param_5._4_4_) {
      uVar16 = (ulonglong)(longlong)param_6._4_4_ >> 3;
      do {
        FUN_14036ade0(lVar11,lVar15,uVar17,(longlong)(int)param_6,4);
        uVar14 = 0;
        if (0 < (longlong)uVar17) {
          do {
            bVar9 = 0;
            if (0 < param_6._4_4_) {
              uVar21 = 0;
              uVar12 = 1;
              lVar8 = 0;
              bVar9 = 0;
              if (uVar16 != 0) {
                lVar20 = uVar13 * 7 + param_9 + uVar14;
                lVar1 = uVar13 * 5 + param_9 + uVar14;
                lVar2 = uVar13 * 4 + param_9 + uVar14;
                lVar3 = uVar13 * 3 + param_9 + uVar14;
                lVar4 = uVar13 * 6 + param_9 + uVar14;
                lVar5 = uVar13 * 2 + param_9 + uVar14;
                lVar6 = param_9 + uVar13 + uVar14;
                bVar9 = 0;
                do {
                  if (bVar9 < *(byte *)(param_9 + uVar14 + lVar8 * 8)) {
                    bVar9 = *(byte *)(param_9 + uVar14 + lVar8 * 8);
                  }
                  if (bVar9 < *(byte *)(lVar6 + lVar8 * 8)) {
                    bVar9 = *(byte *)(lVar6 + lVar8 * 8);
                  }
                  if (bVar9 < *(byte *)(lVar5 + lVar8 * 8)) {
                    bVar9 = *(byte *)(lVar5 + lVar8 * 8);
                  }
                  if (bVar9 < *(byte *)(lVar3 + lVar8 * 8)) {
                    bVar9 = *(byte *)(lVar3 + lVar8 * 8);
                  }
                  if (bVar9 < *(byte *)(lVar2 + lVar8 * 8)) {
                    bVar9 = *(byte *)(lVar2 + lVar8 * 8);
                  }
                  if (bVar9 < *(byte *)(lVar1 + lVar8 * 8)) {
                    bVar9 = *(byte *)(lVar1 + lVar8 * 8);
                  }
                  if (bVar9 < *(byte *)(lVar4 + lVar8 * 8)) {
                    bVar9 = *(byte *)(lVar4 + lVar8 * 8);
                  }
                  if (bVar9 < *(byte *)(lVar20 + lVar8 * 8)) {
                    bVar9 = *(byte *)(lVar20 + lVar8 * 8);
                  }
                  uVar21 = uVar21 + 1;
                  lVar8 = lVar8 + uVar13;
                } while (uVar21 < uVar16);
                uVar12 = uVar21 * 8 + 1;
              }
              if (uVar12 <= (ulonglong)(longlong)param_6._4_4_) {
                    /* WARNING: Could not recover jumptable at 0x00014037682f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_140376831 +
                          (byte)(&DAT_143089d28)[(uint)(param_6._4_4_ - (int)uVar12)]))
                          (uVar16,param_9 - uVar13);
                return;
              }
            }
            *(byte *)(uVar14 + param_3 + lVar19) = bVar9;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar17);
        }
        lVar18 = lVar18 + 1;
        lVar15 = lVar15 + uVar13;
        if (param_6._4_4_ <= lVar18) {
          lVar18 = 0;
          lVar15 = param_9;
        }
        uVar22 = uVar22 + 1;
        lVar11 = lVar11 + lVar10;
        lVar19 = lVar19 + param_4;
      } while (uVar22 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar13 = 0;
    lVar11 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar22 = 0;
        if (0 < (longlong)uVar17) {
          do {
            uVar16 = 0;
            bVar9 = 0;
            lVar19 = 0;
            if (0 < param_6._4_4_) {
              do {
                if (0 < (int)param_6) {
                  lVar8 = 1;
                  uVar14 = 0;
                  if ((ulonglong)(longlong)(int)param_6 >> 1 != 0) {
                    do {
                      if ((*(char *)(param_7 + lVar19 + uVar14 * 2) != '\0') &&
                         (bVar7 = *(byte *)(uVar22 + uVar14 * 8 + ((lVar15 * -4 + param_1) - lVar18)
                                           + (uVar13 + uVar16) * lVar10), bVar9 < bVar7)) {
                        bVar9 = bVar7;
                      }
                      if ((*(char *)(param_7 + lVar19 + 1 + uVar14 * 2) != '\0') &&
                         (lVar20 = (uVar13 + uVar16) * lVar10,
                         lVar8 = uVar22 + uVar14 * 8 + 4 + ((lVar15 * -4 + param_1) - lVar18),
                         bVar9 < *(byte *)(lVar8 + lVar20))) {
                        bVar9 = *(byte *)(lVar8 + lVar20);
                      }
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < (ulonglong)(longlong)(int)param_6 >> 1);
                    lVar8 = uVar14 * 2 + 1;
                  }
                  if (((lVar8 - 1U < (ulonglong)(longlong)(int)param_6) &&
                      (*(char *)(param_7 + -1 + lVar8 + lVar19) != '\0')) &&
                     (lVar20 = (uVar16 + uVar13) * lVar10,
                     lVar8 = ((lVar15 * -4 + param_1) - lVar18) + -4 + lVar8 * 4 + uVar22,
                     bVar9 < *(byte *)(lVar8 + lVar20))) {
                    bVar9 = *(byte *)(lVar8 + lVar20);
                  }
                }
                uVar16 = uVar16 + 1;
                lVar19 = lVar19 + (int)param_6;
              } while (uVar16 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(byte *)(uVar22 + param_3 + lVar11) = bVar9;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar17);
        }
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + param_4;
      } while (uVar13 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

