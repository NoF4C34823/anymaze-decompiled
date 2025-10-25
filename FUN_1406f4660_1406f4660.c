
void FUN_1406f4660(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uStack_88;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar10 = (longlong)param_10;
  param_1 = param_1 + param_2 * param_3;
  uVar18 = param_7 & 0xf;
  uVar22 = 0;
  lVar13 = (longlong)param_6;
  uVar11 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001406f533b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308bce0)[lVar13])(param_1,param_4,*param_5,param_9);
    return;
  }
  if (uVar18 == 6) {
    uVar22 = *param_8;
  }
  lVar12 = *param_5;
  uVar14 = lVar10 - 1;
  if (*param_5 < (longlong)uVar14) {
    lVar19 = -uVar11;
    lVar10 = 0;
    if (lVar19 < (longlong)(uVar11 + lVar12)) {
      uVar8 = param_7 & 0x80;
      uVar15 = param_7 & 0x40;
      do {
        lVar16 = lVar19;
        if (((lVar19 < 0) || (lVar12 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar18 != 6) {
            if (uVar18 == 1) {
              if (lVar19 < 0) {
                lVar16 = 0;
                if (uVar15 != 0) {
                  lVar16 = lVar19;
                }
              }
              else if (uVar8 == 0) {
                lVar16 = lVar12 + -1;
              }
            }
            else if (uVar18 == 3) {
              if (lVar12 < 2) {
                if (lVar19 < 0) {
                  if (uVar15 == 0) {
                    lVar16 = -lVar19;
                    if (uVar8 == 0) {
                      lVar16 = 0;
                    }
                  }
                }
                else if (((0 < lVar19) && (uVar8 == 0)) && (lVar16 = -lVar19, uVar15 == 0)) {
                  lVar16 = 0;
                }
              }
              else if ((lVar19 < 0) || (lVar12 <= lVar19)) {
                if (lVar19 < 0) goto LAB_1406f52c0;
                while (uVar8 == 0) {
                  for (lVar16 = (lVar12 + -1) * 2 - lVar16; lVar16 < 0; lVar16 = -lVar16) {
LAB_1406f52c0:
                    if (uVar15 != 0) goto LAB_1406f51af;
                  }
                  if (lVar16 < lVar12) break;
                }
              }
            }
            goto LAB_1406f51af;
          }
          uVar6 = uVar15;
          if (-1 < lVar19) {
            uVar6 = uVar8;
          }
          uVar21 = uVar22;
          if (uVar6 != 0) goto LAB_1406f51af;
        }
        else {
LAB_1406f51af:
          uVar21 = *(undefined4 *)(param_1 + lVar16 * 4);
        }
        lVar19 = lVar19 + 1;
        *(undefined4 *)(param_11 + lVar10 * 4) = uVar21;
        lVar10 = lVar10 + 1;
      } while (lVar19 < (longlong)(uVar11 + lVar12));
    }
                    /* WARNING: Could not recover jumptable at 0x0001406f5228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308bce0)[lVar13])(param_11 + uVar11 * 4,param_4,lVar12,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    lVar19 = uVar11 * 4;
    uVar17 = param_11 + lVar19;
    if (0 < (longlong)uVar14) {
      if (6 < (longlong)uVar14) {
        lVar16 = lVar10 * 4 + -4;
        if ((lVar16 <= (longlong)(uVar17 - param_1)) || (lVar16 <= (longlong)-(uVar17 - param_1))) {
          uVar7 = uVar17 & 0xf;
          if (uVar7 == 0) {
LAB_1406f4776:
            if ((longlong)uVar14 < (longlong)(uVar7 + 4)) goto LAB_1406f522b;
            uStack_88 = uVar14 - (uVar14 - uVar7 & 3);
            uVar20 = 0;
            if (uVar7 != 0) {
              do {
                *(undefined4 *)(uVar17 + uVar20 * 4) = *(undefined4 *)(param_1 + uVar20 * 4);
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar7);
            }
            if ((uVar7 * 4 + param_1 & 0xf) == 0) {
              do {
                puVar1 = (undefined4 *)(param_1 + uVar7 * 4);
                uVar21 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                puVar2 = (undefined4 *)(uVar17 + uVar7 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar21;
                puVar2[2] = uVar4;
                puVar2[3] = uVar5;
                uVar7 = uVar7 + 4;
              } while (uVar7 < uStack_88);
            }
            else {
              do {
                puVar1 = (undefined4 *)(param_1 + uVar7 * 4);
                uVar21 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                puVar2 = (undefined4 *)(uVar17 + uVar7 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar21;
                puVar2[2] = uVar4;
                puVar2[3] = uVar5;
                uVar7 = uVar7 + 4;
              } while (uVar7 < uStack_88);
            }
          }
          else {
            if ((uVar17 & 3) == 0) {
              uVar7 = 0x10 - uVar7 >> 2;
              goto LAB_1406f4776;
            }
LAB_1406f522b:
            uStack_88 = 0;
          }
          for (; uStack_88 < uVar14; uStack_88 = uStack_88 + 1) {
            *(undefined4 *)(uVar17 + uStack_88 * 4) = *(undefined4 *)(param_1 + uStack_88 * 4);
          }
          goto LAB_1406f48de;
        }
      }
      lVar16 = 1;
      uVar7 = 0;
      uVar20 = lVar10 - 1U >> 1;
      if (uVar20 != 0) {
        do {
          *(undefined4 *)(uVar17 + uVar7 * 8) = *(undefined4 *)(param_1 + uVar7 * 8);
          *(undefined4 *)(uVar17 + 4 + uVar7 * 8) = *(undefined4 *)(param_1 + 4 + uVar7 * 8);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar20);
        lVar16 = uVar7 * 2 + 1;
      }
      if (lVar16 - 1U < lVar10 - 1U) {
        *(undefined4 *)(param_11 + ((uVar11 - 1) + lVar16) * 4) =
             *(undefined4 *)(param_1 + (lVar16 - 1U) * 4);
      }
    }
LAB_1406f48de:
    if (uVar18 == 1) {
      if ((longlong)uVar11 < 1) goto LAB_1406f4b0f;
      uVar21 = *(undefined4 *)(param_11 + uVar11 * 4);
      if ((longlong)uVar11 < 8) {
LAB_1406f528e:
        uVar20 = 0;
      }
      else {
        uVar7 = param_11 & 0xf;
        if (uVar7 != 0) {
          if ((param_11 & 3) != 0) goto LAB_1406f528e;
          uVar7 = 0x10 - uVar7 >> 2;
        }
        if ((longlong)uVar11 < (longlong)(uVar7 + 8)) goto LAB_1406f528e;
        uVar20 = uVar11 - (uVar11 - uVar7 & 7);
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            *(undefined4 *)(param_11 + uVar9 * 4) = uVar21;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        do {
          puVar1 = (undefined4 *)(param_11 + uVar7 * 4);
          *puVar1 = uVar21;
          puVar1[1] = uVar21;
          puVar1[2] = uVar21;
          puVar1[3] = uVar21;
          puVar1 = (undefined4 *)(param_11 + 0x10 + uVar7 * 4);
          *puVar1 = uVar21;
          puVar1[1] = uVar21;
          puVar1[2] = uVar21;
          puVar1[3] = uVar21;
          uVar7 = uVar7 + 8;
        } while (uVar7 < uVar20);
      }
      for (; uVar20 < uVar11; uVar20 = uVar20 + 1) {
        *(undefined4 *)(param_11 + uVar20 * 4) = uVar21;
      }
    }
    else if (uVar18 == 3) {
      if (0 < (longlong)uVar11) {
        uVar7 = 0;
        lVar16 = 1;
        if (uVar11 >> 1 != 0) {
          lVar16 = lVar10 * 4 + param_11;
          uVar20 = uVar7;
          do {
            *(undefined4 *)(param_11 + uVar7 * 8) = *(undefined4 *)((uVar20 - 4) + lVar16);
            lVar3 = uVar20 - 8;
            uVar20 = uVar20 - 8;
            *(undefined4 *)(param_11 + 4 + uVar7 * 8) = *(undefined4 *)(lVar3 + lVar16);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar11 >> 1);
          lVar16 = uVar7 * 2 + 1;
        }
        uVar7 = lVar16 - 1;
        if (uVar7 < uVar11) {
          *(undefined4 *)(param_11 + uVar7 * 4) =
               *(undefined4 *)((param_11 - 4) + (lVar10 - uVar7) * 4);
        }
      }
    }
    else if ((uVar18 == 6) && (0 < (longlong)uVar11)) {
      if ((longlong)uVar11 < 8) {
LAB_1406f5239:
        uVar20 = 0;
      }
      else {
        uVar7 = param_11 & 0xf;
        if (uVar7 != 0) {
          if ((param_11 & 3) != 0) goto LAB_1406f5239;
          uVar7 = 0x10 - uVar7 >> 2;
        }
        if ((longlong)uVar11 < (longlong)(uVar7 + 8)) goto LAB_1406f5239;
        uVar20 = uVar11 - (uVar11 - uVar7 & 7);
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            *(undefined4 *)(param_11 + uVar9 * 4) = uVar22;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        do {
          puVar1 = (undefined4 *)(param_11 + uVar7 * 4);
          *puVar1 = uVar22;
          puVar1[1] = uVar22;
          puVar1[2] = uVar22;
          puVar1[3] = uVar22;
          puVar1 = (undefined4 *)(param_11 + 0x10 + uVar7 * 4);
          *puVar1 = uVar22;
          puVar1[1] = uVar22;
          puVar1[2] = uVar22;
          puVar1[3] = uVar22;
          uVar7 = uVar7 + 8;
        } while (uVar7 < uVar20);
      }
      for (; uVar20 < uVar11; uVar20 = uVar20 + 1) {
        *(undefined4 *)(param_11 + uVar20 * 4) = uVar22;
      }
    }
LAB_1406f4b0f:
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308bce0)[lVar13];
    (*UNRECOVERED_JUMPTABLE_00)(uVar17,param_4,uVar11,param_9,param_10);
    lVar12 = lVar12 - uVar11;
    param_1 = param_1 + lVar19;
    param_4 = param_4 + lVar19;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308bce0)[lVar13];
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406f528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar12,param_9);
    return;
  }
  if ((longlong)uVar11 < lVar12) {
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar12 - uVar11,param_9,param_10);
    lVar13 = (lVar12 - uVar11) * 4;
    param_4 = param_4 + lVar13;
    param_1 = param_1 + lVar13;
  }
  if (0 < (longlong)uVar14) {
    if (6 < (longlong)uVar14) {
      lVar13 = lVar10 * 4 + -4;
      lVar12 = param_11 - (param_1 + uVar11 * -4);
      if ((lVar13 <= lVar12) || (lVar13 <= -lVar12)) {
        uVar17 = param_11 & 0xf;
        if (uVar17 == 0) {
LAB_1406f4c0b:
          if ((longlong)uVar14 < (longlong)(uVar17 + 4)) goto LAB_1406f5240;
          lVar13 = param_1 + uVar11 * -4;
          uVar7 = 0;
          uVar20 = uVar14 - (uVar14 - uVar17 & 3);
          if (uVar17 != 0) {
            do {
              *(undefined4 *)(param_11 + uVar7 * 4) = *(undefined4 *)(lVar13 + uVar7 * 4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar17);
          }
          if (((uVar17 - uVar11) * 4 + param_1 & 0xf) == 0) {
            do {
              puVar1 = (undefined4 *)(lVar13 + uVar17 * 4);
              uVar21 = puVar1[1];
              uVar4 = puVar1[2];
              uVar5 = puVar1[3];
              puVar2 = (undefined4 *)(param_11 + uVar17 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar21;
              puVar2[2] = uVar4;
              puVar2[3] = uVar5;
              uVar17 = uVar17 + 4;
            } while (uVar17 < uVar20);
          }
          else {
            do {
              puVar1 = (undefined4 *)(lVar13 + uVar17 * 4);
              uVar21 = puVar1[1];
              uVar4 = puVar1[2];
              uVar5 = puVar1[3];
              puVar2 = (undefined4 *)(param_11 + uVar17 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar21;
              puVar2[2] = uVar4;
              puVar2[3] = uVar5;
              uVar17 = uVar17 + 4;
            } while (uVar17 < uVar20);
          }
        }
        else {
          if ((param_11 & 3) == 0) {
            uVar17 = 0x10 - uVar17 >> 2;
            goto LAB_1406f4c0b;
          }
LAB_1406f5240:
          uVar20 = 0;
        }
        if (uVar20 < uVar14) {
          do {
            *(undefined4 *)(param_11 + uVar20 * 4) =
                 *(undefined4 *)(param_1 + uVar11 * -4 + uVar20 * 4);
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar14);
        }
        goto LAB_1406f4d44;
      }
    }
    lVar13 = 1;
    uVar14 = 0;
    uVar17 = lVar10 - 1U >> 1;
    if (uVar17 != 0) {
      lVar13 = param_1 + uVar11 * -4;
      do {
        *(undefined4 *)(param_11 + uVar14 * 8) = *(undefined4 *)(lVar13 + uVar14 * 8);
        *(undefined4 *)(param_11 + 4 + uVar14 * 8) = *(undefined4 *)(lVar13 + 4 + uVar14 * 8);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar17);
      lVar13 = uVar14 * 2 + 1;
    }
    uVar14 = lVar13 - 1;
    if (uVar14 < lVar10 - 1U) {
      *(undefined4 *)(param_11 + uVar14 * 4) = *(undefined4 *)(param_1 + (uVar14 - uVar11) * 4);
    }
  }
LAB_1406f4d44:
  if (uVar18 == 1) {
    if ((longlong)uVar11 < 1) goto LAB_1406f507e;
    if (6 < (longlong)uVar11) {
      lVar13 = param_11 + lVar10 * 4;
      uVar14 = lVar13 - 4;
      lVar12 = uVar14 - (lVar13 + -8);
      if ((3 < lVar12) || ((longlong)(uVar11 * 4) <= -lVar12)) {
        uVar22 = *(undefined4 *)(lVar13 + -8);
        if ((longlong)uVar11 < 8) {
LAB_1406f5250:
          uVar14 = 0;
        }
        else {
          uVar17 = uVar14 & 0xf;
          if (uVar17 != 0) {
            if ((uVar14 & 3) != 0) goto LAB_1406f5250;
            uVar17 = 0x10 - uVar17 >> 2;
          }
          if ((longlong)uVar11 < (longlong)(uVar17 + 8)) goto LAB_1406f5250;
          uVar7 = 0;
          lVar13 = param_11 + lVar10 * 4;
          uVar14 = uVar11 - (uVar11 - uVar17 & 7);
          if (uVar17 != 0) {
            do {
              *(undefined4 *)(lVar13 + -4 + uVar7 * 4) = uVar22;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar17);
          }
          do {
            puVar1 = (undefined4 *)(lVar13 + -4 + uVar17 * 4);
            *puVar1 = uVar22;
            puVar1[1] = uVar22;
            puVar1[2] = uVar22;
            puVar1[3] = uVar22;
            puVar1 = (undefined4 *)(lVar13 + 0xc + uVar17 * 4);
            *puVar1 = uVar22;
            puVar1[1] = uVar22;
            puVar1[2] = uVar22;
            puVar1[3] = uVar22;
            uVar17 = uVar17 + 8;
          } while (uVar17 < uVar14);
        }
        if (uVar14 < uVar11) {
          do {
            *(undefined4 *)(lVar10 * 4 + param_11 + -4 + uVar14 * 4) = uVar22;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar11);
        }
        goto LAB_1406f507e;
      }
    }
    lVar13 = 1;
    uVar14 = 0;
    if (uVar11 >> 1 != 0) {
      lVar13 = lVar10 * 4;
      do {
        *(undefined4 *)(param_11 + lVar13 + -4 + uVar14 * 8) =
             *(undefined4 *)((param_11 - 8) + lVar13);
        *(undefined4 *)(param_11 + lVar13 + uVar14 * 8) = *(undefined4 *)((param_11 - 8) + lVar13);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar11 >> 1);
      lVar13 = uVar14 * 2 + 1;
    }
    if (lVar13 - 1U < uVar11) {
      *(undefined4 *)((param_11 - 4) + (lVar10 + -1 + lVar13) * 4) =
           *(undefined4 *)((param_11 - 8) + lVar10 * 4);
    }
    goto LAB_1406f507e;
  }
  if (uVar18 == 3) {
    if (0 < (longlong)uVar11) {
      uVar14 = 0;
      lVar12 = 1;
      lVar13 = 0;
      if (uVar11 >> 1 != 0) {
        lVar12 = lVar10 * 4 + param_11;
        do {
          *(undefined4 *)(lVar12 + -4 + uVar14 * 8) = *(undefined4 *)(lVar13 + -0xc + lVar12);
          lVar19 = lVar13 + -0x10;
          lVar13 = lVar13 + -8;
          *(undefined4 *)(lVar12 + uVar14 * 8) = *(undefined4 *)(lVar19 + lVar12);
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar11 >> 1);
        lVar12 = uVar14 * 2 + 1;
      }
      if (lVar12 - 1U < uVar11) {
        *(undefined4 *)((param_11 - 4) + (lVar10 + -1 + lVar12) * 4) =
             *(undefined4 *)((param_11 - 0xc) + (lVar10 - (lVar12 - 1U)) * 4);
      }
    }
    goto LAB_1406f507e;
  }
  if ((uVar18 != 6) || ((longlong)uVar11 < 1)) goto LAB_1406f507e;
  if ((longlong)uVar11 < 8) {
LAB_1406f5248:
    uVar17 = 0;
  }
  else {
    lVar13 = lVar10 * 4 + param_11;
    uVar14 = lVar13 - 4U & 0xf;
    if (uVar14 != 0) {
      if ((lVar13 - 4U & 3) != 0) goto LAB_1406f5248;
      uVar14 = 0x10 - uVar14 >> 2;
    }
    if ((longlong)uVar11 < (longlong)(uVar14 + 8)) goto LAB_1406f5248;
    uVar7 = 0;
    uVar17 = uVar11 - (uVar11 - uVar14 & 7);
    if (uVar14 != 0) {
      do {
        *(undefined4 *)(lVar13 + -4 + uVar7 * 4) = uVar22;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar14);
    }
    do {
      puVar1 = (undefined4 *)(lVar13 + -4 + uVar14 * 4);
      *puVar1 = uVar22;
      puVar1[1] = uVar22;
      puVar1[2] = uVar22;
      puVar1[3] = uVar22;
      puVar1 = (undefined4 *)(lVar13 + 0xc + uVar14 * 4);
      *puVar1 = uVar22;
      puVar1[1] = uVar22;
      puVar1[2] = uVar22;
      puVar1[3] = uVar22;
      uVar14 = uVar14 + 8;
    } while (uVar14 < uVar17);
  }
  if (uVar17 < uVar11) {
    do {
      *(undefined4 *)(lVar10 * 4 + param_11 + -4 + uVar17 * 4) = uVar22;
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar11);
  }
LAB_1406f507e:
                    /* WARNING: Could not recover jumptable at 0x0001406f50b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_11 + uVar11 * 4,param_4,uVar11,param_9);
  return;
}

