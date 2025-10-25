
void FUN_14068c300(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
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
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  lVar18 = 0;
  uVar24 = 0;
  iVar13 = param_10 >> 1;
  uVar8 = param_7 & 0x10;
  lVar22 = 0;
  if (0 < iVar13) {
    uVar14 = (ulonglong)iVar13;
    lVar11 = param_4 * uVar14 + param_3;
    uVar19 = param_7 & 0x20;
    lVar21 = lVar11;
    if ((param_7 & 0xf0) == 0xf0) goto LAB_14068c876;
LAB_14068c3da:
    uVar15 = uVar24;
    if ((param_5[1] <= (longlong)uVar24) && (param_7 != 0xf0)) {
      if ((param_7 & 0xf) == 6) {
        if (uVar19 == 0) goto LAB_14068c517;
      }
      else {
        if ((param_7 & 0xf) != 1) goto LAB_14068c413;
        if (uVar19 == 0) {
          uVar15 = param_5[1] - 1;
        }
      }
    }
LAB_14068c49a:
    FUN_14068d220(param_1,param_2,uVar15);
LAB_14068c760:
    do {
      while( true ) {
        iVar23 = (int)uVar24;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + param_4;
        lVar18 = (longlong)iVar23 + 1;
        if (uVar14 <= uVar24) {
          if (uVar8 != 0) {
            lVar18 = 0;
            lVar22 = -uVar14;
            do {
              FUN_14068d220(param_1,param_2,lVar22,param_3);
              lVar18 = lVar18 + 1;
              lVar22 = lVar22 + 1;
              param_3 = param_3 + param_4;
            } while (lVar18 < (longlong)uVar14);
            return;
          }
          goto LAB_14068c922;
        }
        lVar21 = lVar11 + lVar22;
        if ((param_7 & 0xf0) != 0xf0) break;
LAB_14068c876:
        (**(code **)(&DAT_14308b940 + (longlong)param_6 * 8))
                  (param_2 * uVar24 + param_1,lVar21,*param_5,param_9);
      }
      if (-1 < (longlong)uVar24) goto LAB_14068c3da;
      uVar15 = uVar24;
      if (param_7 == 0xf0) goto LAB_14068c49a;
      if ((param_7 & 0xf) != 6) {
        if ((param_7 & 0xf) != 1) goto LAB_14068c413;
        uVar15 = 0;
        if (uVar8 != 0) {
          uVar15 = uVar24;
        }
        goto LAB_14068c49a;
      }
      if (uVar8 != 0) goto LAB_14068c49a;
LAB_14068c517:
      lVar21 = *param_5 * 3;
    } while (lVar21 < 1);
    uVar15 = *param_5 * 3 + 2;
    if (6 < (longlong)uVar15 / 3) {
      lVar17 = ((longlong)uVar15 / 3) * 0xc;
      lVar16 = param_4 * lVar18 + lVar11;
      lVar9 = (longlong)param_8 + (4 - lVar16);
      if (((lVar17 <= lVar9) || (7 < -lVar9)) &&
         ((3 < lVar16 - (longlong)param_8 || (lVar17 <= -(lVar16 - (longlong)param_8))))) {
        uVar20 = 0;
        uVar10 = (lVar21 + 2U) / 6;
        lVar21 = 1;
        uVar4 = *param_8;
        lVar18 = 0;
        uVar5 = param_8[1];
        uVar6 = param_8[2];
        if (uVar10 != 0) {
          do {
            uVar20 = uVar20 + 1;
            *(undefined4 *)(lVar18 + lVar16) = uVar4;
            *(undefined4 *)(lVar18 + 4 + lVar16) = uVar5;
            *(undefined4 *)(lVar18 + 8 + lVar16) = uVar6;
            *(undefined4 *)(lVar18 + 0xc + lVar16) = uVar4;
            *(undefined4 *)(lVar18 + 0x10 + lVar16) = uVar5;
            *(undefined4 *)(lVar18 + 0x14 + lVar16) = uVar6;
            lVar18 = lVar18 + 0x18;
          } while (uVar20 < uVar10);
          lVar21 = uVar20 * 2 + 1;
        }
        if (lVar21 - 1U < uVar15 / 3) {
          lVar18 = (lVar21 - 1U) * 0xc;
          *(undefined4 *)(lVar16 + lVar18) = uVar4;
          *(undefined4 *)(lVar16 + 4 + lVar18) = uVar5;
          *(undefined4 *)(lVar16 + 8 + lVar18) = uVar6;
        }
        goto LAB_14068c760;
      }
    }
    uVar20 = 0;
    uVar10 = (lVar21 + 2U) / 6;
    lVar9 = 1;
    lVar21 = 0;
    if (uVar10 != 0) {
      lVar9 = param_4 * lVar18 + lVar11;
      do {
        uVar20 = uVar20 + 1;
        *(undefined4 *)(lVar21 + lVar9) = *param_8;
        *(undefined4 *)(lVar21 + 4 + lVar9) = param_8[1];
        *(undefined4 *)(lVar21 + 8 + lVar9) = param_8[2];
        *(undefined4 *)(lVar21 + 0xc + lVar9) = *param_8;
        *(undefined4 *)(lVar21 + 0x10 + lVar9) = param_8[1];
        *(undefined4 *)(lVar21 + 0x14 + lVar9) = param_8[2];
        lVar21 = lVar21 + 0x18;
      } while (uVar20 < uVar10);
      lVar9 = uVar20 * 2 + 1;
    }
    if (lVar9 - 1U < uVar15 / 3) {
      lVar21 = lVar18 * param_4 + lVar11;
      lVar18 = (lVar9 - 1U) * 0xc;
      *(undefined4 *)(lVar21 + lVar18) = *param_8;
      *(undefined4 *)(lVar21 + 4 + lVar18) = param_8[1];
      *(undefined4 *)(lVar21 + 8 + lVar18) = param_8[2];
    }
    goto LAB_14068c760;
  }
  if (uVar8 != 0) {
    return;
  }
LAB_14068c922:
  uVar8 = param_7 & 0xf;
  if (uVar8 == 6) {
    uVar24 = (ulonglong)iVar13;
    if (0 < (longlong)uVar24) {
      lVar18 = *param_5 * 3;
      uVar14 = lVar18 + 2;
      if (((param_4 < (longlong)uVar14 / 3) ||
          ((puVar2 = (undefined4 *)
                     ((uVar24 - 1) * param_4 + param_3 + -1 + ((longlong)uVar14 / 3) * 0xc),
           param_8 < puVar2 && (param_3 < (longlong)param_8 + 3U)))) ||
         ((param_3 < (longlong)param_8 + 0xbU && (param_8 + 1 < puVar2)))) {
        uVar15 = 0;
        lVar22 = 0;
        do {
          if (0 < lVar18) {
            uVar10 = 0;
            lVar11 = 1;
            lVar21 = 0;
            if (uVar14 / 6 != 0) {
              lVar11 = param_3 + lVar22;
              do {
                uVar10 = uVar10 + 1;
                *(undefined4 *)(lVar21 + lVar11) = *param_8;
                *(undefined4 *)(lVar21 + 4 + lVar11) = param_8[1];
                *(undefined4 *)(lVar21 + 8 + lVar11) = param_8[2];
                *(undefined4 *)(lVar21 + 0xc + lVar11) = *param_8;
                *(undefined4 *)(lVar21 + 0x10 + lVar11) = param_8[1];
                *(undefined4 *)(lVar21 + 0x14 + lVar11) = param_8[2];
                lVar21 = lVar21 + 0x18;
              } while (uVar10 < uVar14 / 6);
              lVar11 = uVar10 * 2 + 1;
            }
            if (lVar11 - 1U < uVar14 / 3) {
              lVar21 = (lVar11 - 1U) * 0xc + param_3;
              *(undefined4 *)(lVar21 + lVar22) = *param_8;
              *(undefined4 *)(lVar21 + 4 + lVar22) = param_8[1];
              *(undefined4 *)(lVar21 + 8 + lVar22) = param_8[2];
            }
          }
          uVar15 = uVar15 + 1;
          lVar22 = lVar22 + param_4;
        } while (uVar15 < uVar24);
      }
      else {
        uVar15 = 0;
        lVar22 = 0;
        do {
          if (0 < lVar18) {
            uVar10 = 0;
            lVar11 = 1;
            lVar21 = 0;
            if (uVar14 / 6 != 0) {
              lVar11 = param_3 + lVar22;
              do {
                uVar10 = uVar10 + 1;
                *(undefined4 *)(lVar21 + lVar11) = *param_8;
                *(undefined4 *)(lVar21 + 4 + lVar11) = param_8[1];
                *(undefined4 *)(lVar21 + 8 + lVar11) = param_8[2];
                *(undefined4 *)(lVar21 + 0xc + lVar11) = *param_8;
                *(undefined4 *)(lVar21 + 0x10 + lVar11) = param_8[1];
                *(undefined4 *)(lVar21 + 0x14 + lVar11) = param_8[2];
                lVar21 = lVar21 + 0x18;
              } while (uVar10 < uVar14 / 6);
              lVar11 = uVar10 * 2 + 1;
            }
            if (lVar11 - 1U < uVar14 / 3) {
              lVar21 = (lVar11 - 1U) * 0xc + param_3;
              *(undefined4 *)(lVar21 + lVar22) = *param_8;
              *(undefined4 *)(lVar21 + 4 + lVar22) = param_8[1];
              *(undefined4 *)(lVar21 + 8 + lVar22) = param_8[2];
            }
          }
          uVar15 = uVar15 + 1;
          lVar22 = lVar22 + param_4;
        } while (uVar15 < uVar24);
      }
    }
    return;
  }
  if (uVar8 == 1) {
    uVar24 = 0;
    if (0 < iVar13) {
      lVar18 = param_4 * iVar13 + param_3;
      uVar14 = *param_5 * 2 + *param_5;
      do {
        if (0 < (longlong)uVar14) {
          if ((longlong)uVar14 < 4) {
LAB_14068ce13:
            uVar20 = 0;
          }
          else {
            uVar10 = param_4 * uVar24 + param_3;
            uVar15 = uVar10 & 0xf;
            if (uVar15 != 0) {
              if ((uVar10 & 3) != 0) goto LAB_14068ce13;
              uVar15 = 0x10 - uVar15 >> 2;
            }
            if ((longlong)uVar14 < (longlong)(uVar15 + 4)) goto LAB_14068ce13;
            uVar12 = 0;
            uVar20 = uVar14 - (uVar14 - uVar15 & 3);
            if (uVar15 != 0) {
              do {
                *(undefined4 *)(uVar10 + uVar12 * 4) = *(undefined4 *)(lVar18 + uVar12 * 4);
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar15);
            }
            if ((uVar15 * 4 + lVar18 & 0xf) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar18 + uVar15 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar10 + uVar15 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar15 = uVar15 + 4;
              } while (uVar15 < uVar20);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar18 + uVar15 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar10 + uVar15 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar15 = uVar15 + 4;
              } while (uVar15 < uVar20);
            }
          }
          if (uVar20 < uVar14) {
            do {
              *(undefined4 *)(param_4 * uVar24 + param_3 + uVar20 * 4) =
                   *(undefined4 *)(lVar18 + uVar20 * 4);
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar14);
          }
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < (ulonglong)(longlong)iVar13);
    }
  }
  else if (uVar8 == 3) {
    lVar18 = (longlong)iVar13;
    if ((param_7 & 0xf0) == 0xf0) {
      (**(code **)(&DAT_14308b940 + (longlong)param_6 * 8))
                (param_1 + param_2 * lVar18,param_3,*param_5,param_9);
    }
    else {
      if ((((lVar18 < 0) || (param_5[1] <= lVar18)) && (param_7 != 0xf0)) && (1 < param_5[1])) {
        if (lVar18 < 0) goto LAB_14068cc40;
        if (param_5[1] <= lVar18) {
          do {
            if ((param_7 & 0x20) != 0) break;
            for (lVar18 = (param_5[1] + -1) * 2 - lVar18; lVar18 < 0; lVar18 = -lVar18) {
LAB_14068cc40:
            }
          } while (param_5[1] <= lVar18);
        }
      }
      FUN_14068d220();
    }
    lVar18 = 1;
    uVar24 = 0;
    if (1 < iVar13) {
      lVar22 = ((longlong)param_10 + -1) * param_4 + param_3;
      uVar14 = *param_5 * 2 + *param_5;
      do {
        if (0 < (longlong)uVar14) {
          if ((longlong)uVar14 < 4) {
LAB_14068cc07:
            uVar20 = 0;
          }
          else {
            uVar10 = param_3 + param_4 * lVar18;
            uVar15 = uVar10 & 0xf;
            if (uVar15 != 0) {
              if ((uVar10 & 3) != 0) goto LAB_14068cc07;
              uVar15 = 0x10 - uVar15 >> 2;
            }
            if ((longlong)uVar14 < (longlong)(uVar15 + 4)) goto LAB_14068cc07;
            lVar21 = lVar22 - param_4 * lVar18;
            uVar12 = 0;
            uVar20 = uVar14 - (uVar14 - uVar15 & 3);
            if (uVar15 != 0) {
              do {
                *(undefined4 *)(uVar10 + uVar12 * 4) = *(undefined4 *)(lVar21 + uVar12 * 4);
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar15);
            }
            if ((uVar15 * 4 + lVar21 & 0xf) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar21 + uVar15 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar10 + uVar15 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar15 = uVar15 + 4;
              } while (uVar15 < uVar20);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar21 + uVar15 * 4);
                uVar7 = puVar1[1];
                puVar3 = (undefined8 *)(uVar10 + uVar15 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar7;
                uVar15 = uVar15 + 4;
              } while (uVar15 < uVar20);
            }
          }
          if (uVar20 < uVar14) {
            do {
              *(undefined4 *)(param_3 + lVar18 * param_4 + uVar20 * 4) =
                   *(undefined4 *)((lVar22 - lVar18 * param_4) + uVar20 * 4);
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar14);
          }
        }
        lVar18 = uVar24 + 2;
        uVar24 = uVar24 + 1;
      } while (uVar24 < (ulonglong)(longlong)(iVar13 + -1));
    }
  }
  return;
LAB_14068c413:
  uVar15 = uVar24;
  if ((param_7 & 0xf) == 3) {
    if (param_5[1] < 2) {
      if ((longlong)uVar24 < 0) {
        if (uVar8 == 0) {
          uVar15 = -uVar24;
          if (uVar19 == 0) {
            uVar15 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar24) && (uVar19 == 0)) {
        uVar15 = -uVar24;
        if (uVar8 == 0) {
          uVar15 = 0;
        }
      }
    }
    else if (((longlong)uVar24 < 0) || (param_5[1] <= (longlong)uVar24)) {
      if ((longlong)uVar24 < 0) goto LAB_14068c820;
      while (uVar19 == 0) {
        for (uVar15 = (param_5[1] + -1) * 2 - uVar15; (longlong)uVar15 < 0; uVar15 = -uVar15) {
LAB_14068c820:
          if (uVar8 != 0) goto LAB_14068c49a;
        }
        if ((longlong)uVar15 < param_5[1]) break;
      }
    }
  }
  goto LAB_14068c49a;
}

