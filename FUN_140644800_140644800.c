
void FUN_140644800(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulonglong uStack_88;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar19 = (longlong)param_10;
  param_1 = param_1 + param_2 * param_3;
  uVar13 = param_7 & 0xf;
  uVar21 = 0;
  lVar7 = (longlong)param_6;
  uVar14 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001406454d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b660 + lVar7 * 8))(param_1,param_4,*param_5);
    return;
  }
  if (uVar13 == 6) {
    uVar21 = *param_8;
  }
  lVar11 = *param_5;
  uVar18 = lVar19 - 1;
  if (lVar11 < (longlong)uVar18) {
    lVar19 = -uVar14;
    lVar16 = 0;
    if (lVar19 < (longlong)(uVar14 + lVar11)) {
      uVar9 = param_7 & 0x80;
      uStack_88._0_4_ = param_7 & 0x40;
      do {
        lVar8 = lVar19;
        if (((lVar19 < 0) || (lVar11 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar13 != 6) {
            if (uVar13 == 1) {
              if (lVar19 < 0) {
                lVar8 = 0;
                if ((uint)uStack_88 != 0) {
                  lVar8 = lVar19;
                }
              }
              else {
                lVar8 = lVar11 + -1;
                if (uVar9 != 0) {
                  lVar8 = lVar19;
                }
              }
            }
            else if (uVar13 == 3) {
              if (lVar11 < 2) {
                if (lVar19 < 0) {
                  if (((uint)uStack_88 == 0) && (lVar8 = -lVar19, uVar9 == 0)) {
                    lVar8 = 0;
                  }
                }
                else if (((0 < lVar19) && (uVar9 == 0)) && (lVar8 = -lVar19, (uint)uStack_88 == 0))
                {
                  lVar8 = 0;
                }
              }
              else if ((lVar19 < 0) || (lVar11 <= lVar19)) {
                if (lVar19 < 0) goto LAB_140645460;
                while (uVar9 == 0) {
                  for (lVar8 = (lVar11 + -1) * 2 - lVar8; lVar8 < 0; lVar8 = -lVar8) {
LAB_140645460:
                    if ((uint)uStack_88 != 0) goto LAB_140645330;
                  }
                  if (lVar8 < lVar11) break;
                }
              }
            }
            goto LAB_140645330;
          }
          uVar6 = (uint)uStack_88;
          if (-1 < lVar19) {
            uVar6 = uVar9;
          }
          uVar20 = uVar21;
          if (uVar6 != 0) goto LAB_140645330;
        }
        else {
LAB_140645330:
          uVar20 = *(undefined4 *)(param_1 + lVar8 * 4);
        }
        lVar19 = lVar19 + 1;
        *(undefined4 *)(param_11 + lVar16 * 4) = uVar20;
        lVar16 = lVar16 + 1;
      } while (lVar19 < (longlong)(uVar14 + lVar11));
    }
                    /* WARNING: Could not recover jumptable at 0x0001406453a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b660 + lVar7 * 8))(param_11 + uVar14 * 4,param_4,lVar11,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    uVar12 = param_11 + uVar14 * 4;
    if (0 < (longlong)uVar18) {
      if (6 < (longlong)uVar18) {
        lVar16 = lVar19 * 4 + -4;
        if ((lVar16 <= (longlong)(uVar12 - param_1)) || (lVar16 <= (longlong)-(uVar12 - param_1))) {
          uVar15 = uVar12 & 0xf;
          if (uVar15 == 0) {
LAB_140644903:
            if ((longlong)uVar18 < (longlong)(uVar15 + 4)) goto LAB_1406453aa;
            uStack_88 = uVar18 - (uVar18 - uVar15 & 3);
            uVar10 = 0;
            if (uVar15 != 0) {
              do {
                *(undefined4 *)(uVar12 + uVar10 * 4) = *(undefined4 *)(param_1 + uVar10 * 4);
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar15);
            }
            if ((param_1 + uVar15 * 4 & 0xf) == 0) {
              do {
                puVar1 = (undefined4 *)(param_1 + uVar15 * 4);
                uVar20 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                puVar2 = (undefined4 *)(uVar12 + uVar15 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar20;
                puVar2[2] = uVar4;
                puVar2[3] = uVar5;
                uVar15 = uVar15 + 4;
              } while (uVar15 < uStack_88);
            }
            else {
              do {
                puVar1 = (undefined4 *)(param_1 + uVar15 * 4);
                uVar20 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                puVar2 = (undefined4 *)(uVar12 + uVar15 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar20;
                puVar2[2] = uVar4;
                puVar2[3] = uVar5;
                uVar15 = uVar15 + 4;
              } while (uVar15 < uStack_88);
            }
          }
          else {
            if ((uVar12 & 3) == 0) {
              uVar15 = 0x10 - uVar15 >> 2;
              goto LAB_140644903;
            }
LAB_1406453aa:
            uStack_88 = 0;
          }
          for (; uStack_88 < uVar18; uStack_88 = uStack_88 + 1) {
            *(undefined4 *)(uVar12 + uStack_88 * 4) = *(undefined4 *)(param_1 + uStack_88 * 4);
          }
          goto LAB_140644a64;
        }
      }
      lVar16 = 1;
      uVar15 = lVar19 - 1U >> 1;
      if (uVar15 != 0) {
        uVar10 = 0;
        do {
          uVar17 = uVar10;
          *(undefined4 *)(uVar12 + uVar17 * 8) = *(undefined4 *)(param_1 + uVar17 * 8);
          *(undefined4 *)(uVar12 + 4 + uVar17 * 8) = *(undefined4 *)(param_1 + 4 + uVar17 * 8);
          uVar10 = uVar17 + 1;
        } while (uVar10 < uVar15);
        lVar16 = uVar17 + 2 + uVar10;
      }
      if (lVar16 - 1U < lVar19 - 1U) {
        *(undefined4 *)(param_11 + ((uVar14 - 1) + lVar16) * 4) =
             *(undefined4 *)(param_1 + (lVar16 - 1U) * 4);
      }
    }
LAB_140644a64:
    if (uVar13 == 1) {
      if ((longlong)uVar14 < 1) goto LAB_140644d0e;
      uVar20 = *(undefined4 *)(param_11 + uVar14 * 4);
      if ((longlong)uVar14 < 8) {
LAB_14064540b:
        uStack_88 = 0;
      }
      else {
        uVar15 = param_11 & 0xf;
        if (uVar15 != 0) {
          if ((param_11 & 3) != 0) goto LAB_14064540b;
          uVar15 = 0x10 - uVar15 >> 2;
        }
        if ((longlong)uVar14 < (longlong)(uVar15 + 8)) goto LAB_14064540b;
        uStack_88 = uVar14 - (uVar14 - uVar15 & 7);
        uVar10 = 0;
        if (uVar15 != 0) {
          do {
            *(undefined4 *)(param_11 + uVar10 * 4) = uVar20;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar15);
        }
        do {
          puVar1 = (undefined4 *)(param_11 + uVar15 * 4);
          *puVar1 = uVar20;
          puVar1[1] = uVar20;
          puVar1[2] = uVar20;
          puVar1[3] = uVar20;
          puVar1 = (undefined4 *)(param_11 + 0x10 + uVar15 * 4);
          *puVar1 = uVar20;
          puVar1[1] = uVar20;
          puVar1[2] = uVar20;
          puVar1[3] = uVar20;
          uVar15 = uVar15 + 8;
        } while (uVar15 < uStack_88);
      }
      for (; uStack_88 < uVar14; uStack_88 = uStack_88 + 1) {
        *(undefined4 *)(param_11 + uStack_88 * 4) = uVar20;
      }
    }
    else if (uVar13 == 3) {
      if (0 < (longlong)uVar14) {
        lVar8 = 0;
        lVar16 = 1;
        if (uVar14 >> 1 != 0) {
          lVar16 = param_11 + lVar19 * 4;
          uVar15 = 0;
          do {
            uVar10 = uVar15;
            *(undefined4 *)(param_11 + uVar10 * 8) = *(undefined4 *)(lVar8 + -4 + lVar16);
            lVar3 = lVar8 + -8;
            lVar8 = lVar8 + -8;
            *(undefined4 *)(param_11 + 4 + uVar10 * 8) = *(undefined4 *)(lVar3 + lVar16);
            uVar15 = uVar10 + 1;
          } while (uVar15 < uVar14 >> 1);
          lVar16 = uVar10 + 2 + uVar15;
        }
        uVar15 = lVar16 - 1;
        if (uVar15 < uVar14) {
          *(undefined4 *)(param_11 + uVar15 * 4) =
               *(undefined4 *)((param_11 - 4) + (lVar19 - uVar15) * 4);
        }
      }
    }
    else if ((uVar13 == 6) && (0 < (longlong)uVar14)) {
      if ((longlong)uVar14 < 8) {
LAB_1406453b8:
        uStack_88 = 0;
      }
      else {
        uVar15 = param_11 & 0xf;
        if (uVar15 != 0) {
          if ((param_11 & 3) != 0) goto LAB_1406453b8;
          uVar15 = 0x10 - uVar15 >> 2;
        }
        if ((longlong)uVar14 < (longlong)(uVar15 + 8)) goto LAB_1406453b8;
        uStack_88 = uVar14 - (uVar14 - uVar15 & 7);
        uVar10 = 0;
        if (uVar15 != 0) {
          do {
            *(undefined4 *)(param_11 + uVar10 * 4) = uVar21;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar15);
        }
        do {
          puVar1 = (undefined4 *)(param_11 + uVar15 * 4);
          *puVar1 = uVar21;
          puVar1[1] = uVar21;
          puVar1[2] = uVar21;
          puVar1[3] = uVar21;
          puVar1 = (undefined4 *)(param_11 + 0x10 + uVar15 * 4);
          *puVar1 = uVar21;
          puVar1[1] = uVar21;
          puVar1[2] = uVar21;
          puVar1[3] = uVar21;
          uVar15 = uVar15 + 8;
        } while (uVar15 < uStack_88);
      }
      for (; uStack_88 < uVar14; uStack_88 = uStack_88 + 1) {
        *(undefined4 *)(param_11 + uStack_88 * 4) = uVar21;
      }
    }
LAB_140644d0e:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(&DAT_14308b660 + lVar7 * 8);
    (*UNRECOVERED_JUMPTABLE_00)(uVar12,param_4,uVar14,param_9,param_10);
    lVar11 = lVar11 - uVar14;
    param_4 = param_4 + uVar14 * 4;
    param_1 = param_1 + uVar14 * 4;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(&DAT_14308b660 + lVar7 * 8);
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140645409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar11);
    return;
  }
  if ((longlong)uVar14 < lVar11) {
    lVar11 = lVar11 - uVar14;
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar11,param_9,param_10);
    param_4 = param_4 + lVar11 * 4;
    param_1 = param_1 + lVar11 * 4;
  }
  if (0 < (longlong)uVar18) {
    if (6 < (longlong)uVar18) {
      lVar11 = param_1 + uVar14 * -4;
      lVar7 = lVar19 * 4 + -4;
      if ((lVar7 <= (longlong)(param_11 - lVar11)) || (lVar7 <= (longlong)-(param_11 - lVar11))) {
        uVar12 = param_11 & 0xf;
        if (uVar12 == 0) {
LAB_140644e11:
          if ((longlong)uVar18 < (longlong)(uVar12 + 4)) goto LAB_1406453c6;
          uVar10 = 0;
          uVar15 = uVar18 - (uVar18 - uVar12 & 3);
          if (uVar12 != 0) {
            do {
              *(undefined4 *)(param_11 + uVar10 * 4) = *(undefined4 *)(lVar11 + uVar10 * 4);
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar12);
          }
          if ((param_1 + (uVar12 - uVar14) * 4 & 0xf) == 0) {
            do {
              puVar1 = (undefined4 *)(lVar11 + uVar12 * 4);
              uVar20 = puVar1[1];
              uVar4 = puVar1[2];
              uVar5 = puVar1[3];
              puVar2 = (undefined4 *)(param_11 + uVar12 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar20;
              puVar2[2] = uVar4;
              puVar2[3] = uVar5;
              uVar12 = uVar12 + 4;
            } while (uVar12 < uVar15);
          }
          else {
            do {
              puVar1 = (undefined4 *)(lVar11 + uVar12 * 4);
              uVar20 = puVar1[1];
              uVar4 = puVar1[2];
              uVar5 = puVar1[3];
              puVar2 = (undefined4 *)(param_11 + uVar12 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar20;
              puVar2[2] = uVar4;
              puVar2[3] = uVar5;
              uVar12 = uVar12 + 4;
            } while (uVar12 < uVar15);
          }
        }
        else {
          if ((param_11 & 3) == 0) {
            uVar12 = 0x10 - uVar12 >> 2;
            goto LAB_140644e11;
          }
LAB_1406453c6:
          uVar15 = 0;
        }
        for (; uVar15 < uVar18; uVar15 = uVar15 + 1) {
          *(undefined4 *)(param_11 + uVar15 * 4) = *(undefined4 *)(lVar11 + uVar15 * 4);
        }
        goto LAB_140644f3e;
      }
    }
    lVar7 = 1;
    uVar18 = lVar19 - 1U >> 1;
    if (uVar18 != 0) {
      lVar7 = param_1 + uVar14 * -4;
      uVar12 = 0;
      do {
        uVar15 = uVar12;
        *(undefined4 *)(param_11 + uVar15 * 8) = *(undefined4 *)(lVar7 + uVar15 * 8);
        *(undefined4 *)(param_11 + 4 + uVar15 * 8) = *(undefined4 *)(lVar7 + 4 + uVar15 * 8);
        uVar12 = uVar15 + 1;
      } while (uVar12 < uVar18);
      lVar7 = uVar15 + 2 + uVar12;
    }
    uVar18 = lVar7 - 1;
    if (uVar18 < lVar19 - 1U) {
      *(undefined4 *)(param_11 + uVar18 * 4) = *(undefined4 *)(param_1 + (uVar18 - uVar14) * 4);
    }
  }
LAB_140644f3e:
  if (uVar13 == 1) {
    if ((longlong)uVar14 < 1) goto LAB_1406451f6;
    if (6 < (longlong)uVar14) {
      lVar7 = param_11 + lVar19 * 4;
      uVar18 = lVar7 - 4;
      lVar11 = uVar18 - (lVar7 + -8);
      if ((3 < lVar11) || ((longlong)(uVar14 * 4) <= -lVar11)) {
        uVar21 = *(undefined4 *)(lVar7 + -8);
        if ((longlong)uVar14 < 8) {
LAB_1406453d6:
          uVar18 = 0;
        }
        else {
          uVar12 = uVar18 & 0xf;
          if (uVar12 != 0) {
            if ((uVar18 & 3) != 0) goto LAB_1406453d6;
            uVar12 = 0x10 - uVar12 >> 2;
          }
          if ((longlong)uVar14 < (longlong)(uVar12 + 8)) goto LAB_1406453d6;
          uVar15 = 0;
          uVar18 = uVar14 - (uVar14 - uVar12 & 7);
          if (uVar12 != 0) {
            do {
              *(undefined4 *)(lVar7 + -4 + uVar15 * 4) = uVar21;
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar12);
          }
          do {
            puVar1 = (undefined4 *)(lVar7 + -4 + uVar12 * 4);
            *puVar1 = uVar21;
            puVar1[1] = uVar21;
            puVar1[2] = uVar21;
            puVar1[3] = uVar21;
            puVar1 = (undefined4 *)(lVar7 + 0xc + uVar12 * 4);
            *puVar1 = uVar21;
            puVar1[1] = uVar21;
            puVar1[2] = uVar21;
            puVar1[3] = uVar21;
            uVar12 = uVar12 + 8;
          } while (uVar12 < uVar18);
        }
        for (; uVar18 < uVar14; uVar18 = uVar18 + 1) {
          *(undefined4 *)(lVar7 + -4 + uVar18 * 4) = uVar21;
        }
        goto LAB_1406451f6;
      }
    }
    lVar7 = 1;
    if (uVar14 >> 1 != 0) {
      lVar7 = param_11 + lVar19 * 4;
      uVar18 = 0;
      do {
        uVar12 = uVar18;
        *(undefined4 *)(lVar7 + -4 + uVar12 * 8) = *(undefined4 *)(lVar7 + -8);
        *(undefined4 *)(lVar7 + uVar12 * 8) = *(undefined4 *)(lVar7 + -8);
        uVar18 = uVar12 + 1;
      } while (uVar18 < uVar14 >> 1);
      lVar7 = uVar12 + 2 + uVar18;
    }
    if (lVar7 - 1U < uVar14) {
      *(undefined4 *)((param_11 - 4) + (lVar19 + -1 + lVar7) * 4) =
           *(undefined4 *)((param_11 - 8) + lVar19 * 4);
    }
    goto LAB_1406451f6;
  }
  if (uVar13 == 3) {
    if (0 < (longlong)uVar14) {
      lVar7 = 1;
      lVar11 = 0;
      if (uVar14 >> 1 != 0) {
        lVar7 = param_11 + lVar19 * 4;
        uVar18 = 0;
        do {
          uVar12 = uVar18;
          *(undefined4 *)(lVar7 + -4 + uVar12 * 8) = *(undefined4 *)(lVar11 + -0xc + lVar7);
          lVar16 = lVar11 + -0x10;
          lVar11 = lVar11 + -8;
          *(undefined4 *)(lVar7 + uVar12 * 8) = *(undefined4 *)(lVar16 + lVar7);
          uVar18 = uVar12 + 1;
        } while (uVar18 < uVar14 >> 1);
        lVar7 = uVar12 + 2 + uVar18;
      }
      if (lVar7 - 1U < uVar14) {
        *(undefined4 *)((param_11 - 4) + (lVar19 + -1 + lVar7) * 4) =
             *(undefined4 *)((param_11 - 0xc) + (lVar19 - (lVar7 - 1U)) * 4);
      }
    }
    goto LAB_1406451f6;
  }
  if ((uVar13 != 6) || ((longlong)uVar14 < 1)) goto LAB_1406451f6;
  if ((longlong)uVar14 < 8) {
LAB_1406453ce:
    uVar12 = 0;
  }
  else {
    lVar7 = param_11 + lVar19 * 4;
    uVar18 = lVar7 - 4U & 0xf;
    if (uVar18 != 0) {
      if ((lVar7 - 4U & 3) != 0) goto LAB_1406453ce;
      uVar18 = 0x10 - uVar18 >> 2;
    }
    if ((longlong)uVar14 < (longlong)(uVar18 + 8)) goto LAB_1406453ce;
    uVar15 = 0;
    uVar12 = uVar14 - (uVar14 - uVar18 & 7);
    if (uVar18 != 0) {
      do {
        *(undefined4 *)(lVar7 + -4 + uVar15 * 4) = uVar21;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar18);
    }
    do {
      puVar1 = (undefined4 *)(lVar7 + -4 + uVar18 * 4);
      *puVar1 = uVar21;
      puVar1[1] = uVar21;
      puVar1[2] = uVar21;
      puVar1[3] = uVar21;
      puVar1 = (undefined4 *)(lVar7 + 0xc + uVar18 * 4);
      *puVar1 = uVar21;
      puVar1[1] = uVar21;
      puVar1[2] = uVar21;
      puVar1[3] = uVar21;
      uVar18 = uVar18 + 8;
    } while (uVar18 < uVar12);
  }
  if (uVar12 < uVar14) {
    do {
      *(undefined4 *)(param_11 + lVar19 * 4 + -4 + uVar12 * 4) = uVar21;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar14);
  }
LAB_1406451f6:
                    /* WARNING: Could not recover jumptable at 0x000140645225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_11 + uVar14 * 4,param_4,uVar14,param_9);
  return;
}

