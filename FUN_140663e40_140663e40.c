
void FUN_140663e40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined2 *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined1 uVar14;
  longlong lVar15;
  undefined1 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 in_XMM0 [16];
  ulonglong uStack_88;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined2 uStack_48;
  undefined1 uStack_46;
  
  param_1 = param_1 + param_2 * param_3;
  lVar17 = (longlong)param_6;
  uStack_48 = 0;
  uStack_46 = 0;
  uVar13 = param_7 & 0xf;
  lVar21 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x000140664e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b6e0 + lVar17 * 8))(param_1,param_4,*param_5,param_9);
    return;
  }
  lVar20 = (longlong)param_10;
  lVar10 = *param_5;
  puVar12 = &uStack_48;
  if (uVar13 == 6) {
    puVar12 = param_8;
  }
  if (lVar10 < lVar20 + -1) {
    lVar20 = -lVar21;
    lVar11 = 0;
    if (lVar20 < lVar21 + lVar10) {
      uStack_88._0_4_ = param_7 & 0x80;
      uVar4 = param_7 & 0x40;
      do {
        lVar8 = lVar20;
        if (((lVar20 < 0) || (lVar10 <= lVar20)) && (param_7 != 0xf0)) {
          if (uVar13 != 6) {
            if (uVar13 == 1) {
              if (lVar20 < 0) {
                lVar8 = 0;
                if (uVar4 != 0) {
                  lVar8 = lVar20;
                }
              }
              else if ((uint)uStack_88 == 0) {
                lVar8 = lVar10 + -1;
              }
            }
            else if (uVar13 == 3) {
              if (lVar10 < 2) {
                if (lVar20 < 0) {
                  if (uVar4 == 0) {
                    lVar8 = -lVar20;
                    if ((uint)uStack_88 == 0) {
                      lVar8 = 0;
                    }
                  }
                }
                else if (((0 < lVar20) && ((uint)uStack_88 == 0)) && (lVar8 = -lVar20, uVar4 == 0))
                {
                  lVar8 = 0;
                }
              }
              else if ((lVar20 < 0) || (lVar10 <= lVar20)) {
                if (lVar20 < 0) goto LAB_140664da0;
                while ((uint)uStack_88 == 0) {
                  for (lVar8 = (lVar10 + -1) * 2 - lVar8; lVar8 < 0; lVar8 = -lVar8) {
LAB_140664da0:
                    if (uVar4 != 0) goto LAB_140664c8f;
                  }
                  if (lVar8 < lVar10) break;
                }
              }
            }
            goto LAB_140664c8f;
          }
          uVar3 = uVar4;
          if (-1 < lVar20) {
            uVar3 = (uint)uStack_88;
          }
          if (uVar3 != 0) goto LAB_140664c8f;
          uVar16 = *(undefined1 *)puVar12;
          uVar19 = *(undefined1 *)((longlong)puVar12 + 1);
          uVar14 = *(undefined1 *)(puVar12 + 1);
        }
        else {
LAB_140664c8f:
          lVar8 = lVar8 * 3;
          uVar16 = *(undefined1 *)(lVar8 + param_1);
          uVar19 = *(undefined1 *)(lVar8 + 1 + param_1);
          uVar14 = *(undefined1 *)(lVar8 + 2 + param_1);
        }
        lVar20 = lVar20 + 1;
        *(undefined1 *)(lVar11 + param_11) = uVar16;
        *(undefined1 *)(lVar11 + 1 + param_11) = uVar19;
        *(undefined1 *)(lVar11 + 2 + param_11) = uVar14;
        lVar11 = lVar11 + 3;
      } while (lVar20 < lVar21 + lVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x000140664d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b6e0 + lVar17 * 8))(param_11 + lVar21 * 3,param_4,lVar10,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    lVar8 = lVar20 * 3;
    uVar22 = lVar8 - 3;
    lVar11 = lVar21 * 3;
    uVar9 = param_11 + lVar11;
    if (uVar22 != 0 && SCARRY8(lVar8,-3) == (longlong)uVar22 < 0) {
      if (6 < (longlong)uVar22) {
        if ((lVar8 + -3 <= (longlong)(uVar9 - param_1)) ||
           (lVar8 + -3 <= (longlong)-(uVar9 - param_1))) {
          if ((longlong)uVar22 < 0x10) {
LAB_140664d32:
            uStack_88 = 0;
          }
          else {
            uVar5 = uVar9 & 0xf;
            if (uVar5 != 0) {
              uVar5 = 0x10 - uVar5;
            }
            if ((longlong)uVar22 < (longlong)(uVar5 + 0x10)) goto LAB_140664d32;
            uStack_88 = uVar22 - (uVar22 - uVar5 & 0xf);
            uVar7 = 0;
            if (uVar5 != 0) {
              do {
                *(undefined1 *)(uVar7 + uVar9) = *(undefined1 *)(uVar7 + param_1);
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar5);
            }
            if ((param_1 + uVar5 & 0xf) == 0) {
              do {
                uVar2 = ((undefined8 *)(uVar5 + param_1))[1];
                *(undefined8 *)(uVar5 + uVar9) = *(undefined8 *)(uVar5 + param_1);
                ((undefined8 *)(uVar5 + uVar9))[1] = uVar2;
                uVar5 = uVar5 + 0x10;
              } while (uVar5 < uStack_88);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar5 + param_1));
                *(undefined1 (*) [16])(uVar5 + uVar9) = in_XMM0;
                uVar5 = uVar5 + 0x10;
              } while (uVar5 < uStack_88);
            }
          }
          for (; uStack_88 < uVar22; uStack_88 = uStack_88 + 1) {
            *(undefined1 *)(uStack_88 + uVar9) = *(undefined1 *)(uStack_88 + param_1);
          }
          goto LAB_1406640af;
        }
      }
      lVar6 = 1;
      uVar5 = (longlong)(param_10 * 3) - 3;
      uVar7 = uVar5 >> 1;
      uVar22 = 0;
      if (uVar7 != 0) {
        do {
          uVar23 = uVar22;
          *(undefined1 *)(uVar9 + uVar23 * 2) = *(undefined1 *)(param_1 + uVar23 * 2);
          *(undefined1 *)(uVar9 + 1 + uVar23 * 2) = *(undefined1 *)(param_1 + 1 + uVar23 * 2);
          uVar22 = uVar23 + 1;
        } while (uVar22 < uVar7);
        lVar6 = uVar23 + 2 + uVar22;
      }
      uVar22 = lVar6 - 1;
      if (uVar22 < uVar5) {
        *(undefined1 *)(uVar9 + uVar22) = *(undefined1 *)(param_1 + uVar22);
      }
    }
LAB_1406640af:
    if (uVar13 == 1) {
      if (0 < lVar11) {
        lVar8 = 1;
        uVar22 = (lVar11 + 2U) / 6;
        if (uVar22 != 0) {
          uVar5 = 0;
          do {
            uVar7 = uVar5;
            *(undefined1 *)(param_11 + uVar7 * 6) = *(undefined1 *)(lVar11 + param_11);
            uVar5 = uVar7 + 1;
            *(undefined1 *)(param_11 + 1 + uVar7 * 6) = *(undefined1 *)(uVar9 + 1);
            *(undefined1 *)(param_11 + 2 + uVar7 * 6) = *(undefined1 *)(uVar9 + 2);
            *(undefined1 *)(param_11 + 3 + uVar7 * 6) = *(undefined1 *)(lVar11 + param_11);
            *(undefined1 *)(param_11 + 4 + uVar7 * 6) = *(undefined1 *)(uVar9 + 1);
            *(undefined1 *)(param_11 + 5 + uVar7 * 6) = *(undefined1 *)(uVar9 + 2);
          } while (uVar5 < uVar22);
          lVar8 = uVar7 + 2 + uVar5;
        }
        if (lVar8 - 1U < (lVar11 + 2U) / 3) {
          lVar8 = lVar8 * 3;
          *(undefined1 *)(lVar8 + -3 + param_11) = *(undefined1 *)(lVar11 + param_11);
          *(undefined1 *)(lVar8 + -2 + param_11) = *(undefined1 *)(uVar9 + 1);
          *(undefined1 *)(lVar8 + -1 + param_11) = *(undefined1 *)(uVar9 + 2);
        }
      }
    }
    else if (uVar13 == 3) {
      if (0 < lVar11) {
        uStack_88 = 1;
        uVar22 = (lVar11 + 2U) / 6;
        lVar6 = 0;
        if (uVar22 != 0) {
          lVar15 = lVar8 + param_11;
          lVar18 = lVar6;
          uStack_88 = 0;
          do {
            uVar5 = uStack_88;
            uStack_88 = uVar5 + 1;
            *(undefined1 *)(lVar6 + param_11) = *(undefined1 *)(lVar18 + -3 + lVar15);
            *(undefined1 *)(lVar6 + 1 + param_11) = *(undefined1 *)(lVar18 + -2 + lVar15);
            *(undefined1 *)(lVar6 + 2 + param_11) = *(undefined1 *)(lVar18 + -1 + lVar15);
            *(undefined1 *)(lVar6 + 3 + param_11) = *(undefined1 *)(lVar18 + -6 + lVar15);
            *(undefined1 *)(lVar6 + 4 + param_11) = *(undefined1 *)(lVar18 + -5 + lVar15);
            lVar1 = lVar18 + -4;
            lVar18 = lVar18 + -6;
            *(undefined1 *)(lVar6 + 5 + param_11) = *(undefined1 *)(lVar1 + lVar15);
            lVar6 = lVar6 + 6;
          } while (uStack_88 < uVar22);
          uStack_88 = uVar5 + 2 + uStack_88;
        }
        if (uStack_88 - 1 < (lVar11 + 2U) / 3) {
          lVar8 = lVar8 + param_11;
          lVar6 = uStack_88 * 3;
          lVar18 = -(lVar6 + -3);
          *(undefined1 *)(lVar6 + -3 + param_11) = *(undefined1 *)(lVar18 + -3 + lVar8);
          *(undefined1 *)(lVar6 + -2 + param_11) = *(undefined1 *)(lVar18 + -2 + lVar8);
          *(undefined1 *)(lVar6 + -1 + param_11) = *(undefined1 *)(lVar18 + -1 + lVar8);
        }
      }
    }
    else if ((uVar13 == 6) && (0 < lVar11)) {
      lVar8 = 1;
      uVar22 = (lVar11 + 2U) / 6;
      if (uVar22 != 0) {
        uVar5 = 0;
        do {
          uVar7 = uVar5;
          *(undefined1 *)(param_11 + uVar7 * 6) = *(undefined1 *)puVar12;
          uVar5 = uVar7 + 1;
          *(undefined1 *)(param_11 + 1 + uVar7 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
          *(undefined1 *)(param_11 + 2 + uVar7 * 6) = *(undefined1 *)(puVar12 + 1);
          *(undefined1 *)(param_11 + 3 + uVar7 * 6) = *(undefined1 *)puVar12;
          *(undefined1 *)(param_11 + 4 + uVar7 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
          *(undefined1 *)(param_11 + 5 + uVar7 * 6) = *(undefined1 *)(puVar12 + 1);
        } while (uVar5 < uVar22);
        lVar8 = uVar7 + 2 + uVar5;
      }
      if (lVar8 - 1U < (lVar11 + 2U) / 3) {
        lVar8 = lVar8 * 3;
        *(undefined1 *)(lVar8 + -3 + param_11) = *(undefined1 *)puVar12;
        *(undefined1 *)(lVar8 + -2 + param_11) = *(undefined1 *)((longlong)puVar12 + 1);
        *(undefined1 *)(lVar8 + -1 + param_11) = *(undefined1 *)(puVar12 + 1);
      }
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(&DAT_14308b6e0 + lVar17 * 8);
    (*UNRECOVERED_JUMPTABLE_00)(uVar9,param_4,lVar21,param_9,param_10);
    lVar10 = lVar10 - lVar21;
    param_1 = param_1 + lVar11;
    param_4 = param_4 + lVar21 * 0xc;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(&DAT_14308b6e0 + lVar17 * 8);
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140664d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar10,param_9);
    return;
  }
  if (lVar21 < lVar10) {
    lVar10 = lVar10 - lVar21;
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar10,param_9,param_10);
    param_1 = param_1 + lVar10 * 3;
    param_4 = param_4 + lVar10 * 0xc;
  }
  lVar20 = lVar20 * 3;
  if (lVar20 != 3 && SCARRY8(lVar20,-3) == lVar20 + -3 < 0) {
    uVar9 = lVar20 - 1;
    lVar11 = lVar21 * -3;
    lVar10 = param_11 - (param_1 + lVar11);
    lVar17 = ((longlong)uVar9 / 3) * 3;
    if ((lVar17 <= lVar10) || (lVar17 + -2 <= -lVar10)) {
      lVar10 = (param_11 + 1) - (param_1 + lVar11);
      if (((lVar17 <= lVar10) || (lVar17 + -1 <= -lVar10)) &&
         ((lVar10 = (param_11 + 1) - param_11, lVar17 + -2 <= lVar10 || (lVar17 + -1 <= -lVar10))))
      {
        lVar17 = 1;
        uVar22 = ((longlong)(param_10 * 3) - 1U) / 6;
        if (uVar22 != 0) {
          uVar5 = 0;
          do {
            uVar7 = uVar5;
            uVar5 = uVar7 + 1;
            *(undefined1 *)(param_11 + uVar7 * 6) = *(undefined1 *)(lVar11 + param_1 + uVar7 * 6);
            *(undefined1 *)(param_11 + 3 + uVar7 * 6) =
                 *(undefined1 *)(lVar11 + param_1 + 3 + uVar7 * 6);
          } while (uVar5 < uVar22);
          lVar17 = uVar7 + 2 + uVar5;
        }
        if (lVar17 - 1U < uVar9 / 3) {
          lVar17 = lVar17 * 3 + -3;
          *(undefined1 *)(lVar17 + param_11) = *(undefined1 *)(lVar17 + lVar11 + param_1);
        }
        lVar17 = 1;
        if (uVar22 != 0) {
          lVar17 = lVar11 + param_1;
          uVar5 = 0;
          do {
            uVar7 = uVar5;
            uVar5 = uVar7 + 1;
            *(undefined1 *)(param_11 + 1 + uVar7 * 6) = *(undefined1 *)(lVar17 + 1 + uVar7 * 6);
            *(undefined1 *)(param_11 + 2 + uVar7 * 6) = *(undefined1 *)(lVar17 + 2 + uVar7 * 6);
            *(undefined1 *)(param_11 + 4 + uVar7 * 6) = *(undefined1 *)(lVar17 + 4 + uVar7 * 6);
            *(undefined1 *)(param_11 + 5 + uVar7 * 6) = *(undefined1 *)(lVar17 + 5 + uVar7 * 6);
          } while (uVar5 < uVar22);
          lVar17 = uVar7 + 2 + uVar5;
        }
        if (lVar17 - 1U < uVar9 / 3) {
          lVar17 = lVar17 * 3;
          uVar16 = *(undefined1 *)(lVar11 + param_1 + 2 + lVar17 + -3);
          *(undefined1 *)(lVar17 + -2 + param_11) =
               *(undefined1 *)(lVar11 + param_1 + 1 + lVar17 + -3);
          *(undefined1 *)(lVar17 + -1 + param_11) = uVar16;
        }
        goto LAB_140664714;
      }
    }
    lVar17 = 1;
    uVar22 = ((longlong)(param_10 * 3) - 1U) / 6;
    if (uVar22 != 0) {
      lVar17 = lVar11 + param_1;
      uVar5 = 0;
      do {
        uVar7 = uVar5;
        uVar5 = uVar7 + 1;
        *(undefined1 *)(param_11 + uVar7 * 6) = *(undefined1 *)(lVar17 + uVar7 * 6);
        *(undefined1 *)(param_11 + 1 + uVar7 * 6) = *(undefined1 *)(lVar17 + 1 + uVar7 * 6);
        *(undefined1 *)(param_11 + 2 + uVar7 * 6) = *(undefined1 *)(lVar17 + 2 + uVar7 * 6);
        *(undefined1 *)(param_11 + 3 + uVar7 * 6) = *(undefined1 *)(lVar17 + 3 + uVar7 * 6);
        *(undefined1 *)(param_11 + 4 + uVar7 * 6) = *(undefined1 *)(lVar17 + 4 + uVar7 * 6);
        *(undefined1 *)(param_11 + 5 + uVar7 * 6) = *(undefined1 *)(lVar17 + 5 + uVar7 * 6);
      } while (uVar5 < uVar22);
      lVar17 = uVar7 + 2 + uVar5;
    }
    if (lVar17 - 1U < uVar9 / 3) {
      lVar11 = lVar11 + param_1;
      lVar17 = lVar17 * 3;
      lVar10 = lVar17 + -3;
      *(undefined1 *)(lVar10 + param_11) = *(undefined1 *)(lVar11 + lVar10);
      *(undefined1 *)(lVar17 + -2 + param_11) = *(undefined1 *)(lVar11 + 1 + lVar10);
      *(undefined1 *)(lVar17 + -1 + param_11) = *(undefined1 *)(lVar11 + 2 + lVar10);
    }
  }
LAB_140664714:
  lVar17 = lVar21 * 3;
  if (uVar13 == 1) {
    if (0 < lVar17) {
      uVar9 = lVar17 + 2;
      if ((longlong)uVar9 / 3 < 7) {
        lVar10 = 1;
        if (uVar9 / 6 != 0) {
          lVar10 = param_11 + lVar20;
          uVar22 = 0;
          do {
            uVar5 = uVar22;
            *(undefined1 *)(lVar10 + -3 + uVar5 * 6) = *(undefined1 *)(lVar10 + -6);
            uVar22 = uVar5 + 1;
            *(undefined1 *)(lVar10 + -2 + uVar5 * 6) = *(undefined1 *)(lVar10 + -5);
            *(undefined1 *)(lVar10 + -1 + uVar5 * 6) = *(undefined1 *)(lVar10 + -4);
            *(undefined1 *)(lVar10 + uVar5 * 6) = *(undefined1 *)(lVar10 + -6);
            *(undefined1 *)(lVar10 + 1 + uVar5 * 6) = *(undefined1 *)(lVar10 + -5);
            *(undefined1 *)(lVar10 + 2 + uVar5 * 6) = *(undefined1 *)(lVar10 + -4);
          } while (uVar22 < uVar9 / 6);
          lVar10 = uVar5 + 2 + uVar22;
        }
        if (lVar10 - 1U < uVar9 / 3) {
          lVar20 = lVar20 + param_11;
          lVar10 = lVar10 * 3;
          *(undefined1 *)(lVar10 + -6 + lVar20) = *(undefined1 *)(lVar20 + -6);
          *(undefined1 *)(lVar10 + -5 + lVar20) = *(undefined1 *)(lVar20 + -5);
          *(undefined1 *)(lVar10 + -4 + lVar20) = *(undefined1 *)(lVar20 + -4);
        }
      }
      else {
        lVar20 = lVar20 + param_11;
        lVar10 = 1;
        lVar11 = 0;
        uVar16 = *(undefined1 *)(lVar20 + -6);
        uVar19 = *(undefined1 *)(lVar20 + -5);
        uVar14 = *(undefined1 *)(lVar20 + -4);
        uVar22 = 0;
        if (uVar9 / 6 != 0) {
          do {
            uVar5 = uVar22;
            uVar22 = uVar5 + 1;
            *(undefined1 *)(lVar11 + -3 + lVar20) = uVar16;
            *(undefined1 *)(lVar11 + -2 + lVar20) = uVar19;
            *(undefined1 *)(lVar11 + -1 + lVar20) = uVar14;
            *(undefined1 *)(lVar11 + lVar20) = uVar16;
            *(undefined1 *)(lVar11 + 1 + lVar20) = uVar19;
            *(undefined1 *)(lVar11 + 2 + lVar20) = uVar14;
            lVar11 = lVar11 + 6;
          } while (uVar22 < uVar9 / 6);
          lVar10 = uVar5 + 2 + uVar22;
        }
        if (lVar10 - 1U < uVar9 / 3) {
          lVar10 = lVar10 * 3;
          *(undefined1 *)(lVar10 + -6 + lVar20) = uVar16;
          *(undefined1 *)(lVar10 + -5 + lVar20) = uVar19;
          *(undefined1 *)(lVar10 + -4 + lVar20) = uVar14;
        }
      }
    }
  }
  else if (uVar13 == 3) {
    if (0 < lVar17) {
      uVar9 = (lVar17 + 2U) / 6;
      lVar8 = 0;
      lVar10 = 1;
      lVar11 = 0;
      if (uVar9 != 0) {
        lVar10 = param_11 + lVar20;
        uVar22 = 0;
        do {
          uVar5 = uVar22;
          uVar22 = uVar5 + 1;
          uVar16 = *(undefined1 *)(lVar11 + -8 + lVar10);
          *(undefined1 *)(lVar8 + -3 + lVar10) = *(undefined1 *)(lVar11 + -9 + lVar10);
          *(undefined1 *)(lVar8 + -2 + lVar10) = uVar16;
          uVar16 = *(undefined1 *)(lVar11 + -0xc + lVar10);
          *(undefined1 *)(lVar8 + -1 + lVar10) = *(undefined1 *)(lVar11 + -7 + lVar10);
          *(undefined1 *)(lVar8 + lVar10) = uVar16;
          lVar6 = lVar11 + -0xb;
          uVar16 = *(undefined1 *)(lVar11 + -10 + lVar10);
          lVar11 = lVar11 + -6;
          *(undefined1 *)(lVar8 + 1 + lVar10) = *(undefined1 *)(lVar6 + lVar10);
          *(undefined1 *)(lVar8 + 2 + lVar10) = uVar16;
          lVar8 = lVar8 + 6;
        } while (uVar22 < uVar9);
        lVar10 = uVar5 + 2 + uVar22;
      }
      if (lVar10 - 1U < (lVar17 + 2U) / 3) {
        lVar20 = lVar20 + param_11;
        lVar10 = lVar10 * 3;
        lVar11 = -(lVar10 + -3);
        uVar16 = *(undefined1 *)(lVar11 + -8 + lVar20);
        uVar19 = *(undefined1 *)(lVar11 + -7 + lVar20);
        *(undefined1 *)(lVar10 + -6 + lVar20) = *(undefined1 *)(lVar11 + -9 + lVar20);
        *(undefined1 *)(lVar10 + -5 + lVar20) = uVar16;
        *(undefined1 *)(lVar10 + -4 + lVar20) = uVar19;
      }
    }
  }
  else if ((uVar13 == 6) && (0 < lVar17)) {
    uVar9 = lVar17 + 2;
    if (6 < (longlong)uVar9 / 3) {
      lVar10 = param_11 + lVar20;
      lVar11 = (lVar10 + -3) - (longlong)puVar12;
      if ((2 < lVar11) || (((longlong)uVar9 / 3) * 3 <= -lVar11)) {
        lVar20 = 1;
        uVar16 = *(undefined1 *)puVar12;
        lVar11 = 0;
        uVar19 = *(undefined1 *)((longlong)puVar12 + 1);
        uVar14 = *(undefined1 *)(puVar12 + 1);
        uVar22 = 0;
        if (uVar9 / 6 != 0) {
          do {
            uVar5 = uVar22;
            uVar22 = uVar5 + 1;
            *(undefined1 *)(lVar11 + -3 + lVar10) = uVar16;
            *(undefined1 *)(lVar11 + -2 + lVar10) = uVar19;
            *(undefined1 *)(lVar11 + -1 + lVar10) = uVar14;
            *(undefined1 *)(lVar11 + lVar10) = uVar16;
            *(undefined1 *)(lVar11 + 1 + lVar10) = uVar19;
            *(undefined1 *)(lVar11 + 2 + lVar10) = uVar14;
            lVar11 = lVar11 + 6;
          } while (uVar22 < uVar9 / 6);
          lVar20 = uVar5 + 2 + uVar22;
        }
        if (lVar20 - 1U < uVar9 / 3) {
          lVar20 = lVar20 * 3;
          *(undefined1 *)(lVar20 + -6 + lVar10) = uVar16;
          *(undefined1 *)(lVar20 + -5 + lVar10) = uVar19;
          *(undefined1 *)(lVar20 + -4 + lVar10) = uVar14;
        }
        goto LAB_140664b5e;
      }
    }
    lVar10 = 1;
    if (uVar9 / 6 != 0) {
      lVar10 = param_11 + lVar20;
      uVar22 = 0;
      do {
        uVar5 = uVar22;
        *(undefined1 *)(lVar10 + -3 + uVar5 * 6) = *(undefined1 *)puVar12;
        uVar22 = uVar5 + 1;
        *(undefined1 *)(lVar10 + -2 + uVar5 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
        *(undefined1 *)(lVar10 + -1 + uVar5 * 6) = *(undefined1 *)(puVar12 + 1);
        *(undefined1 *)(lVar10 + uVar5 * 6) = *(undefined1 *)puVar12;
        *(undefined1 *)(lVar10 + 1 + uVar5 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
        *(undefined1 *)(lVar10 + 2 + uVar5 * 6) = *(undefined1 *)(puVar12 + 1);
      } while (uVar22 < uVar9 / 6);
      lVar10 = uVar5 + 2 + uVar22;
    }
    if (lVar10 - 1U < uVar9 / 3) {
      lVar20 = lVar20 + param_11;
      lVar10 = lVar10 * 3;
      *(undefined1 *)(lVar10 + -6 + lVar20) = *(undefined1 *)puVar12;
      *(undefined1 *)(lVar10 + -5 + lVar20) = *(undefined1 *)((longlong)puVar12 + 1);
      *(undefined1 *)(lVar10 + -4 + lVar20) = *(undefined1 *)(puVar12 + 1);
    }
  }
LAB_140664b5e:
                    /* WARNING: Could not recover jumptable at 0x000140664b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_11 + lVar17,param_4,lVar21,param_9);
  return;
}

