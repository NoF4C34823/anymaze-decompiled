
void FUN_14073e020(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  int param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  
  lVar14 = 0;
  iVar22 = param_10 >> 1;
  uVar21 = 0;
  uVar16 = param_7 & 0x10;
  lVar19 = 0;
  if (0 < iVar22) {
    uVar23 = (ulonglong)iVar22;
    lVar11 = param_4 * uVar23 + param_3;
    uVar17 = param_7 & 0x20;
    lVar10 = lVar11;
    if ((param_7 & 0xf0) == 0xf0) goto LAB_14073e576;
LAB_14073e0f5:
    uVar12 = uVar21;
    if ((param_5[1] <= (longlong)uVar21) && (param_7 != 0xf0)) {
      if ((param_7 & 0xf) == 6) {
        if (uVar17 == 0) goto LAB_14073e22c;
      }
      else {
        if ((param_7 & 0xf) != 1) goto LAB_14073e12e;
        if (uVar17 == 0) {
          uVar12 = param_5[1] - 1;
        }
      }
    }
LAB_14073e1ba:
    FUN_14073eea0(param_1,param_2,uVar12);
LAB_14073e460:
    do {
      while( true ) {
        iVar20 = (int)uVar21;
        uVar21 = uVar21 + 1;
        lVar19 = lVar19 + param_4;
        lVar14 = (longlong)iVar20 + 1;
        if (uVar23 <= uVar21) {
          if (uVar16 != 0) {
            lVar14 = 0;
            lVar19 = -uVar23;
            do {
              FUN_14073eea0(param_1,param_2,lVar19,param_3);
              lVar14 = lVar14 + 1;
              param_3 = param_3 + param_4;
              lVar19 = lVar19 + 1;
            } while (lVar14 < (longlong)uVar23);
            return;
          }
          goto LAB_14073e625;
        }
        lVar10 = lVar11 + lVar19;
        if ((param_7 & 0xf0) != 0xf0) break;
LAB_14073e576:
        (*(code *)(&PTR_FUN_14308c000)[param_6])(param_2 * uVar21 + param_1,lVar10,*param_5,param_9)
        ;
      }
      if (-1 < (longlong)uVar21) goto LAB_14073e0f5;
      uVar12 = uVar21;
      if (param_7 == 0xf0) goto LAB_14073e1ba;
      if ((param_7 & 0xf) != 6) {
        if ((param_7 & 0xf) != 1) goto LAB_14073e12e;
        uVar12 = 0;
        if (uVar16 != 0) {
          uVar12 = uVar21;
        }
        goto LAB_14073e1ba;
      }
      if (uVar16 != 0) goto LAB_14073e1ba;
LAB_14073e22c:
    } while (*param_5 * 3 < 1);
    uVar12 = *param_5 * 3 + 2;
    if (6 < (longlong)uVar12 / 3) {
      lVar10 = ((longlong)uVar12 / 3) * 0xc;
      lVar13 = param_4 * lVar14 + lVar11;
      lVar9 = (longlong)param_8 + (4 - lVar13);
      if (((lVar10 <= lVar9) || (7 < -lVar9)) &&
         ((3 < lVar13 - (longlong)param_8 || (lVar10 <= -(lVar13 - (longlong)param_8))))) {
        uVar4 = *param_8;
        uVar5 = param_8[1];
        lVar14 = 1;
        uVar6 = param_8[2];
        lVar10 = 0;
        uVar18 = 0;
        if (uVar12 / 6 != 0) {
          do {
            uVar8 = uVar18;
            uVar18 = uVar8 + 1;
            *(undefined4 *)(lVar10 + lVar13) = uVar4;
            *(undefined4 *)(lVar10 + 4 + lVar13) = uVar5;
            *(undefined4 *)(lVar10 + 8 + lVar13) = uVar6;
            *(undefined4 *)(lVar10 + 0xc + lVar13) = uVar4;
            *(undefined4 *)(lVar10 + 0x10 + lVar13) = uVar5;
            *(undefined4 *)(lVar10 + 0x14 + lVar13) = uVar6;
            lVar10 = lVar10 + 0x18;
          } while (uVar18 < uVar12 / 6);
          lVar14 = uVar8 + 2 + uVar18;
        }
        if (lVar14 - 1U < uVar12 / 3) {
          lVar14 = lVar14 * 3 + -3;
          *(undefined4 *)(lVar13 + lVar14 * 4) = uVar4;
          *(undefined4 *)(lVar13 + 4 + lVar14 * 4) = uVar5;
          *(undefined4 *)(lVar13 + 8 + lVar14 * 4) = uVar6;
        }
        goto LAB_14073e460;
      }
    }
    lVar10 = 1;
    lVar9 = 0;
    if (uVar12 / 6 != 0) {
      lVar10 = param_4 * lVar14 + lVar11;
      uVar18 = 0;
      do {
        uVar8 = uVar18;
        uVar18 = uVar8 + 1;
        *(undefined4 *)(lVar9 + lVar10) = *param_8;
        *(undefined4 *)(lVar9 + 4 + lVar10) = param_8[1];
        *(undefined4 *)(lVar9 + 8 + lVar10) = param_8[2];
        *(undefined4 *)(lVar9 + 0xc + lVar10) = *param_8;
        *(undefined4 *)(lVar9 + 0x10 + lVar10) = param_8[1];
        *(undefined4 *)(lVar9 + 0x14 + lVar10) = param_8[2];
        lVar9 = lVar9 + 0x18;
      } while (uVar18 < uVar12 / 6);
      lVar10 = uVar8 + 2 + uVar18;
    }
    if (lVar10 - 1U < uVar12 / 3) {
      lVar10 = lVar10 * 3 + -3;
      lVar14 = lVar14 * param_4 + lVar11;
      *(undefined4 *)(lVar14 + lVar10 * 4) = *param_8;
      *(undefined4 *)(lVar14 + 4 + lVar10 * 4) = param_8[1];
      *(undefined4 *)(lVar14 + 8 + lVar10 * 4) = param_8[2];
    }
    goto LAB_14073e460;
  }
  if (uVar16 != 0) {
    return;
  }
LAB_14073e625:
  uVar16 = param_7 & 0xf;
  if (uVar16 == 6) {
    uVar21 = (ulonglong)iVar22;
    if (0 < (longlong)uVar21) {
      lVar14 = *param_5 * 3;
      uVar23 = lVar14 + 2;
      if (((param_4 < (longlong)uVar23 / 3) ||
          ((puVar2 = (undefined4 *)
                     ((uVar21 - 1) * param_4 + (((longlong)uVar23 / 3) * 3 + -3) * 4 + 0xb + param_3
                     ), param_8 < puVar2 && (param_3 < (longlong)param_8 + 3U)))) ||
         ((param_3 < (longlong)param_8 + 0xbU && (param_8 + 1 < puVar2)))) {
        uVar12 = 0;
        lVar19 = 0;
        do {
          if (0 < lVar14) {
            lVar10 = 1;
            lVar11 = 0;
            if (uVar23 / 6 != 0) {
              lVar10 = param_3 + lVar19;
              uVar18 = 0;
              do {
                uVar8 = uVar18;
                uVar18 = uVar8 + 1;
                *(undefined4 *)(lVar11 + lVar10) = *param_8;
                *(undefined4 *)(lVar11 + 4 + lVar10) = param_8[1];
                *(undefined4 *)(lVar11 + 8 + lVar10) = param_8[2];
                *(undefined4 *)(lVar11 + 0xc + lVar10) = *param_8;
                *(undefined4 *)(lVar11 + 0x10 + lVar10) = param_8[1];
                *(undefined4 *)(lVar11 + 0x14 + lVar10) = param_8[2];
                lVar11 = lVar11 + 0x18;
              } while (uVar18 < uVar23 / 6);
              lVar10 = uVar8 + 2 + uVar18;
            }
            if (lVar10 - 1U < uVar23 / 3) {
              lVar10 = param_3 + (lVar10 * 3 + -3) * 4;
              *(undefined4 *)(lVar10 + lVar19) = *param_8;
              *(undefined4 *)(lVar10 + 4 + lVar19) = param_8[1];
              *(undefined4 *)(lVar10 + 8 + lVar19) = param_8[2];
            }
          }
          uVar12 = uVar12 + 1;
          lVar19 = lVar19 + param_4;
        } while (uVar12 < uVar21);
      }
      else {
        uVar12 = 0;
        lVar19 = 0;
        do {
          if (0 < lVar14) {
            lVar10 = 1;
            lVar11 = 0;
            if (uVar23 / 6 != 0) {
              lVar10 = param_3 + lVar19;
              uVar18 = 0;
              do {
                uVar8 = uVar18;
                uVar18 = uVar8 + 1;
                *(undefined4 *)(lVar11 + lVar10) = *param_8;
                *(undefined4 *)(lVar11 + 4 + lVar10) = param_8[1];
                *(undefined4 *)(lVar11 + 8 + lVar10) = param_8[2];
                *(undefined4 *)(lVar11 + 0xc + lVar10) = *param_8;
                *(undefined4 *)(lVar11 + 0x10 + lVar10) = param_8[1];
                *(undefined4 *)(lVar11 + 0x14 + lVar10) = param_8[2];
                lVar11 = lVar11 + 0x18;
              } while (uVar18 < uVar23 / 6);
              lVar10 = uVar8 + 2 + uVar18;
            }
            if (lVar10 - 1U < uVar23 / 3) {
              lVar10 = param_3 + (lVar10 * 3 + -3) * 4;
              *(undefined4 *)(lVar10 + lVar19) = *param_8;
              *(undefined4 *)(lVar10 + 4 + lVar19) = param_8[1];
              *(undefined4 *)(lVar10 + 8 + lVar19) = param_8[2];
            }
          }
          uVar12 = uVar12 + 1;
          lVar19 = lVar19 + param_4;
        } while (uVar12 < uVar21);
      }
    }
    return;
  }
  if (uVar16 == 1) {
    uVar21 = 0;
    if (0 < iVar22) {
      uVar23 = *param_5 * 3;
      lVar14 = param_4 * iVar22 + param_3;
      do {
        if (0 < (longlong)uVar23) {
          if ((longlong)uVar23 < 4) {
LAB_14073eab3:
            uVar8 = 0;
          }
          else {
            uVar18 = param_4 * uVar21 + param_3;
            uVar12 = uVar18 & 0xf;
            if (uVar12 != 0) {
              if ((uVar18 & 3) != 0) goto LAB_14073eab3;
              uVar12 = 0x10 - uVar12 >> 2;
            }
            if ((longlong)uVar23 < (longlong)(uVar12 + 4)) goto LAB_14073eab3;
            uVar15 = 0;
            uVar8 = uVar23 - (uVar23 - uVar12 & 3);
            if (uVar12 != 0) {
              do {
                *(undefined4 *)(uVar18 + uVar15 * 4) = *(undefined4 *)(lVar14 + uVar15 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar12);
            }
            if ((lVar14 + uVar12 * 4 & 0xf) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar14 + uVar12 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar18 + uVar12 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar8);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar14 + uVar12 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar18 + uVar12 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar8);
            }
          }
          if (uVar8 < uVar23) {
            do {
              *(undefined4 *)(param_4 * uVar21 + param_3 + uVar8 * 4) =
                   *(undefined4 *)(lVar14 + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar23);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < (ulonglong)(longlong)iVar22);
    }
  }
  else if (uVar16 == 3) {
    lVar14 = (longlong)iVar22;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_FUN_14308c000)[param_6])(param_1 + param_2 * lVar14,param_3,*param_5,param_9);
    }
    else {
      if (((lVar14 < 0) || (param_5[1] <= lVar14)) && (param_7 != 0xf0)) {
        lVar19 = param_5[1];
        if (lVar19 < 2) {
          if (lVar14 < 0) {
            lVar14 = -lVar14;
            if ((param_7 & 0x20) == 0) {
              lVar14 = 0;
            }
          }
          else if ((0 < lVar14) && ((param_7 & 0x20) == 0)) {
            lVar14 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar14 < 0; lVar14 = -lVar14) {
            }
            if ((lVar14 < lVar19) || ((param_7 & 0x20) != 0)) break;
            lVar14 = (lVar19 + -1) * 2 - lVar14;
          }
        }
      }
      FUN_14073eea0((int)*param_5,param_2,lVar14,param_3);
    }
    lVar14 = 1;
    uVar21 = 0;
    if (1 < iVar22) {
      uVar23 = *param_5 * 3;
      lVar19 = ((longlong)param_10 + -1) * param_4 + param_3;
      do {
        if (0 < (longlong)uVar23) {
          if ((longlong)uVar23 < 4) {
LAB_14073e8c8:
            uVar8 = 0;
          }
          else {
            uVar12 = param_3 + param_4 * lVar14;
            uVar18 = uVar12 & 0xf;
            if (uVar18 != 0) {
              if ((uVar12 & 3) != 0) goto LAB_14073e8c8;
              uVar18 = 0x10 - uVar18 >> 2;
            }
            if ((longlong)uVar23 < (longlong)(uVar18 + 4)) goto LAB_14073e8c8;
            lVar10 = lVar19 - param_4 * lVar14;
            uVar15 = 0;
            uVar8 = uVar23 - (uVar23 - uVar18 & 3);
            if (uVar18 != 0) {
              do {
                *(undefined4 *)(uVar12 + uVar15 * 4) = *(undefined4 *)(lVar10 + uVar15 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar18);
            }
            if ((lVar10 + uVar18 * 4 & 0xf) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar10 + uVar18 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar12 + uVar18 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar18 = uVar18 + 4;
              } while (uVar18 < uVar8);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar10 + uVar18 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar12 + uVar18 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar18 = uVar18 + 4;
              } while (uVar18 < uVar8);
            }
          }
          if (uVar8 < uVar23) {
            do {
              *(undefined4 *)(param_3 + lVar14 * param_4 + uVar8 * 4) =
                   *(undefined4 *)((lVar19 - lVar14 * param_4) + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar23);
          }
        }
        lVar14 = uVar21 + 2;
        uVar21 = uVar21 + 1;
      } while (uVar21 < (ulonglong)(longlong)(iVar22 + -1));
    }
  }
  return;
LAB_14073e12e:
  uVar12 = uVar21;
  if ((param_7 & 0xf) == 3) {
    lVar14 = param_5[1];
    if (lVar14 < 2) {
      if ((longlong)uVar21 < 0) {
        if (uVar16 == 0) {
          uVar12 = -uVar21;
          if (uVar17 == 0) {
            uVar12 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar21) && (uVar17 == 0)) {
        uVar12 = -uVar21;
        if (uVar16 == 0) {
          uVar12 = 0;
        }
      }
    }
    else if (((longlong)uVar21 < 0) || (lVar14 <= (longlong)uVar21)) {
      if ((longlong)uVar21 < 0) goto LAB_14073e520;
      while (uVar17 == 0) {
        for (uVar12 = (lVar14 + -1) * 2 - uVar12; (longlong)uVar12 < 0; uVar12 = -uVar12) {
LAB_14073e520:
          if (uVar16 != 0) goto LAB_14073e1ba;
        }
        if ((longlong)uVar12 < lVar14) break;
      }
    }
  }
  goto LAB_14073e1ba;
}

