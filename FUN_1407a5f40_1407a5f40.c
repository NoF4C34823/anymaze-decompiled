
void FUN_1407a5f40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined2 *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  longlong lVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 in_XMM0 [16];
  ulonglong uStack_88;
  uint uStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined2 uStack_48;
  undefined1 uStack_46;
  
  param_1 = param_1 + param_2 * param_3;
  lVar15 = (longlong)param_6;
  uStack_48 = 0;
  uStack_46 = 0;
  uVar20 = param_7 & 0xf;
  lVar12 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001407a6f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c2a0)[lVar15])(param_1,param_4,*param_5,param_9);
    return;
  }
  lVar19 = (longlong)param_10;
  lVar10 = *param_5;
  puVar16 = &uStack_48;
  if (uVar20 == 6) {
    puVar16 = param_8;
  }
  if (lVar10 < lVar19 + -1) {
    lVar23 = 0;
    lVar19 = -lVar12;
    if (lVar19 < lVar12 + lVar10) {
      uStack_80 = param_7 & 0x80;
      uVar8 = param_7 & 0x40;
      do {
        lVar7 = lVar19;
        if (((lVar19 < 0) || (lVar10 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar20 != 6) {
            if (uVar20 == 1) {
              if (lVar19 < 0) {
                lVar7 = 0;
                if (uVar8 != 0) {
                  lVar7 = lVar19;
                }
              }
              else if (uStack_80 == 0) {
                lVar7 = lVar10 + -1;
              }
            }
            else if (uVar20 == 3) {
              if (lVar10 < 2) {
                if (lVar19 < 0) {
                  if (uVar8 == 0) {
                    lVar7 = -lVar19;
                    if (uStack_80 == 0) {
                      lVar7 = 0;
                    }
                  }
                }
                else if (((0 < lVar19) && (uStack_80 == 0)) && (lVar7 = -lVar19, uVar8 == 0)) {
                  lVar7 = 0;
                }
              }
              else if ((lVar19 < 0) || (lVar10 <= lVar19)) {
                if (lVar19 < 0) goto LAB_1407a6ec0;
                while (uStack_80 == 0) {
                  for (lVar7 = (lVar10 + -1) * 2 - lVar7; lVar7 < 0; lVar7 = -lVar7) {
LAB_1407a6ec0:
                    if (uVar8 != 0) goto LAB_1407a6dae;
                  }
                  if (lVar7 < lVar10) break;
                }
              }
            }
            goto LAB_1407a6dae;
          }
          uVar3 = uVar8;
          if (-1 < lVar19) {
            uVar3 = uStack_80;
          }
          if (uVar3 != 0) goto LAB_1407a6dae;
          uVar11 = *(undefined1 *)puVar16;
          uVar14 = *(undefined1 *)((longlong)puVar16 + 1);
          uVar13 = *(undefined1 *)(puVar16 + 1);
        }
        else {
LAB_1407a6dae:
          lVar7 = lVar7 * 3;
          uVar11 = *(undefined1 *)(lVar7 + param_1);
          uVar14 = *(undefined1 *)(lVar7 + 1 + param_1);
          uVar13 = *(undefined1 *)(lVar7 + 2 + param_1);
        }
        lVar19 = lVar19 + 1;
        *(undefined1 *)(lVar23 + param_11) = uVar11;
        *(undefined1 *)(lVar23 + 1 + param_11) = uVar14;
        *(undefined1 *)(lVar23 + 2 + param_11) = uVar13;
        lVar23 = lVar23 + 3;
      } while (lVar19 < lVar12 + lVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x0001407a6e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c2a0)[lVar15])(param_11 + lVar12 * 3,param_4,lVar10,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    lVar23 = lVar12 * 3;
    lVar7 = lVar19 * 3;
    uVar17 = lVar7 - 3;
    uVar9 = param_11 + lVar23;
    if (uVar17 != 0 && SCARRY8(lVar7,-3) == (longlong)uVar17 < 0) {
      if (6 < (longlong)uVar17) {
        if ((lVar7 + -3 <= (longlong)(uVar9 - param_1)) ||
           (lVar7 + -3 <= (longlong)-(uVar9 - param_1))) {
          if ((longlong)uVar17 < 0x10) {
LAB_1407a6e54:
            uStack_88 = 0;
          }
          else {
            uVar4 = uVar9 & 0xf;
            if (uVar4 != 0) {
              uVar4 = 0x10 - uVar4;
            }
            if ((longlong)uVar17 < (longlong)(uVar4 + 0x10)) goto LAB_1407a6e54;
            uStack_88 = uVar17 - (uVar17 - uVar4 & 0xf);
            uVar21 = 0;
            if (uVar4 != 0) {
              do {
                *(undefined1 *)(uVar21 + uVar9) = *(undefined1 *)(uVar21 + param_1);
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar4);
            }
            if ((param_1 + uVar4 & 0xf) == 0) {
              do {
                uVar2 = ((undefined8 *)(uVar4 + param_1))[1];
                *(undefined8 *)(uVar4 + uVar9) = *(undefined8 *)(uVar4 + param_1);
                ((undefined8 *)(uVar4 + uVar9))[1] = uVar2;
                uVar4 = uVar4 + 0x10;
              } while (uVar4 < uStack_88);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar4 + param_1));
                *(undefined1 (*) [16])(uVar4 + uVar9) = in_XMM0;
                uVar4 = uVar4 + 0x10;
              } while (uVar4 < uStack_88);
            }
          }
          for (; uStack_88 < uVar17; uStack_88 = uStack_88 + 1) {
            *(undefined1 *)(uStack_88 + uVar9) = *(undefined1 *)(uStack_88 + param_1);
          }
          goto LAB_1407a61b1;
        }
      }
      lVar6 = 1;
      uVar21 = (longlong)(param_10 * 3) - 3;
      uVar4 = uVar21 >> 1;
      uVar17 = 0;
      if (uVar4 != 0) {
        do {
          uVar18 = uVar17;
          *(undefined1 *)(uVar9 + uVar18 * 2) = *(undefined1 *)(param_1 + uVar18 * 2);
          *(undefined1 *)(uVar9 + 1 + uVar18 * 2) = *(undefined1 *)(param_1 + 1 + uVar18 * 2);
          uVar17 = uVar18 + 1;
        } while (uVar17 < uVar4);
        lVar6 = uVar18 + 2 + uVar17;
      }
      uVar17 = lVar6 - 1;
      if (uVar17 < uVar21) {
        *(undefined1 *)(uVar9 + uVar17) = *(undefined1 *)(param_1 + uVar17);
      }
    }
LAB_1407a61b1:
    if (uVar20 == 1) {
      if (0 < lVar23) {
        lVar7 = 1;
        uVar17 = (lVar23 + 2U) / 6;
        if (uVar17 != 0) {
          uVar4 = 0;
          do {
            uVar21 = uVar4;
            uVar4 = uVar21 + 1;
            *(undefined1 *)(param_11 + uVar21 * 6) = *(undefined1 *)(lVar23 + param_11);
            *(undefined1 *)(param_11 + 1 + uVar21 * 6) = *(undefined1 *)(uVar9 + 1);
            *(undefined1 *)(param_11 + 2 + uVar21 * 6) = *(undefined1 *)(uVar9 + 2);
            *(undefined1 *)(param_11 + 3 + uVar21 * 6) = *(undefined1 *)(lVar23 + param_11);
            *(undefined1 *)(param_11 + 4 + uVar21 * 6) = *(undefined1 *)(uVar9 + 1);
            *(undefined1 *)(param_11 + 5 + uVar21 * 6) = *(undefined1 *)(uVar9 + 2);
          } while (uVar4 < uVar17);
          lVar7 = uVar21 + 2 + uVar4;
        }
        if (lVar7 - 1U < (lVar23 + 2U) / 3) {
          lVar7 = lVar7 * 3;
          *(undefined1 *)(lVar7 + -3 + param_11) = *(undefined1 *)(lVar23 + param_11);
          uVar11 = *(undefined1 *)(uVar9 + 2);
          *(undefined1 *)(lVar7 + -2 + param_11) = *(undefined1 *)(uVar9 + 1);
          *(undefined1 *)(lVar7 + -1 + param_11) = uVar11;
        }
      }
    }
    else if (uVar20 == 3) {
      if (0 < lVar23) {
        uStack_88 = 1;
        lVar6 = 0;
        uVar17 = (lVar23 + 2U) / 6;
        if (uVar17 != 0) {
          lVar5 = lVar7 + param_11;
          uStack_88 = 0;
          lVar22 = lVar6;
          do {
            uVar4 = uStack_88;
            uStack_88 = uVar4 + 1;
            *(undefined1 *)(lVar22 + param_11) = *(undefined1 *)(lVar6 + -3 + lVar5);
            *(undefined1 *)(lVar22 + 1 + param_11) = *(undefined1 *)(lVar6 + -2 + lVar5);
            *(undefined1 *)(lVar22 + 2 + param_11) = *(undefined1 *)(lVar6 + -1 + lVar5);
            *(undefined1 *)(lVar22 + 3 + param_11) = *(undefined1 *)(lVar6 + -6 + lVar5);
            *(undefined1 *)(lVar22 + 4 + param_11) = *(undefined1 *)(lVar6 + -5 + lVar5);
            lVar1 = lVar6 + -4;
            lVar6 = lVar6 + -6;
            *(undefined1 *)(lVar22 + 5 + param_11) = *(undefined1 *)(lVar1 + lVar5);
            lVar22 = lVar22 + 6;
          } while (uStack_88 < uVar17);
          uStack_88 = uVar4 + 2 + uStack_88;
        }
        if (uStack_88 - 1 < (lVar23 + 2U) / 3) {
          lVar6 = uStack_88 * 3;
          lVar7 = lVar7 + param_11;
          lVar22 = -(lVar6 + -3);
          *(undefined1 *)(lVar6 + -3 + param_11) = *(undefined1 *)(lVar22 + -3 + lVar7);
          *(undefined1 *)(lVar6 + -2 + param_11) = *(undefined1 *)(lVar22 + -2 + lVar7);
          *(undefined1 *)(lVar6 + -1 + param_11) = *(undefined1 *)(lVar22 + -1 + lVar7);
        }
      }
    }
    else if ((uVar20 == 6) && (0 < lVar23)) {
      lVar7 = 1;
      uVar17 = (lVar23 + 2U) / 6;
      if (uVar17 != 0) {
        uVar4 = 0;
        do {
          uVar21 = uVar4;
          uVar4 = uVar21 + 1;
          *(undefined1 *)(param_11 + uVar21 * 6) = *(undefined1 *)puVar16;
          *(undefined1 *)(param_11 + 1 + uVar21 * 6) = *(undefined1 *)((longlong)puVar16 + 1);
          *(undefined1 *)(param_11 + 2 + uVar21 * 6) = *(undefined1 *)(puVar16 + 1);
          *(undefined1 *)(param_11 + 3 + uVar21 * 6) = *(undefined1 *)puVar16;
          *(undefined1 *)(param_11 + 4 + uVar21 * 6) = *(undefined1 *)((longlong)puVar16 + 1);
          *(undefined1 *)(param_11 + 5 + uVar21 * 6) = *(undefined1 *)(puVar16 + 1);
        } while (uVar4 < uVar17);
        lVar7 = uVar21 + 2 + uVar4;
      }
      if (lVar7 - 1U < (lVar23 + 2U) / 3) {
        lVar7 = lVar7 * 3;
        *(undefined1 *)(lVar7 + -3 + param_11) = *(undefined1 *)puVar16;
        *(undefined1 *)(lVar7 + -2 + param_11) = *(undefined1 *)((longlong)puVar16 + 1);
        *(undefined1 *)(lVar7 + -1 + param_11) = *(undefined1 *)(puVar16 + 1);
      }
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308c2a0)[lVar15];
    (*UNRECOVERED_JUMPTABLE_00)(uVar9,param_4,lVar12,param_9,param_10);
    lVar10 = lVar10 - lVar12;
    param_1 = param_1 + lVar23;
    param_4 = param_4 + lVar12 * 0xc;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308c2a0)[lVar15];
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001407a6e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar10,param_9);
    return;
  }
  if (lVar12 < lVar10) {
    lVar10 = lVar10 - lVar12;
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar10,param_9,param_10);
    param_1 = param_1 + lVar10 * 3;
    param_4 = param_4 + lVar10 * 0xc;
  }
  lVar19 = lVar19 * 3;
  if (lVar19 != 3 && SCARRY8(lVar19,-3) == lVar19 + -3 < 0) {
    uVar9 = lVar19 - 1;
    lVar10 = lVar12 * -3;
    lVar15 = ((longlong)uVar9 / 3) * 3;
    lVar23 = param_11 - (param_1 + lVar10);
    if ((lVar15 <= lVar23) || (lVar15 + -2 <= -lVar23)) {
      lVar23 = (param_11 + 1) - (param_1 + lVar10);
      if (((lVar15 <= lVar23) || (lVar15 + -1 <= -lVar23)) &&
         ((lVar23 = (param_11 + 1) - param_11, lVar15 + -2 <= lVar23 || (lVar15 + -1 <= -lVar23))))
      {
        lVar15 = 1;
        uVar17 = ((longlong)(param_10 * 3) - 1U) / 6;
        if (uVar17 != 0) {
          uVar4 = 0;
          do {
            uVar21 = uVar4;
            uVar4 = uVar21 + 1;
            *(undefined1 *)(param_11 + uVar21 * 6) = *(undefined1 *)(lVar10 + param_1 + uVar21 * 6);
            *(undefined1 *)(param_11 + 3 + uVar21 * 6) =
                 *(undefined1 *)(lVar10 + param_1 + 3 + uVar21 * 6);
          } while (uVar4 < uVar17);
          lVar15 = uVar21 + 2 + uVar4;
        }
        if (lVar15 - 1U < uVar9 / 3) {
          lVar15 = lVar15 * 3 + -3;
          *(undefined1 *)(lVar15 + param_11) = *(undefined1 *)(lVar15 + lVar10 + param_1);
        }
        lVar15 = 1;
        if (uVar17 != 0) {
          lVar15 = lVar10 + param_1;
          uVar4 = 0;
          do {
            uVar21 = uVar4;
            uVar4 = uVar21 + 1;
            *(undefined1 *)(param_11 + 1 + uVar21 * 6) = *(undefined1 *)(lVar15 + 1 + uVar21 * 6);
            *(undefined1 *)(param_11 + 2 + uVar21 * 6) = *(undefined1 *)(lVar15 + 2 + uVar21 * 6);
            *(undefined1 *)(param_11 + 4 + uVar21 * 6) = *(undefined1 *)(lVar15 + 4 + uVar21 * 6);
            *(undefined1 *)(param_11 + 5 + uVar21 * 6) = *(undefined1 *)(lVar15 + 5 + uVar21 * 6);
          } while (uVar4 < uVar17);
          lVar15 = uVar21 + 2 + uVar4;
        }
        if (lVar15 - 1U < uVar9 / 3) {
          lVar15 = lVar15 * 3;
          uVar11 = *(undefined1 *)(lVar10 + param_1 + 2 + lVar15 + -3);
          *(undefined1 *)(lVar15 + -2 + param_11) =
               *(undefined1 *)(lVar10 + param_1 + 1 + lVar15 + -3);
          *(undefined1 *)(lVar15 + -1 + param_11) = uVar11;
        }
        goto LAB_1407a6815;
      }
    }
    lVar15 = 1;
    uVar17 = ((longlong)(param_10 * 3) - 1U) / 6;
    if (uVar17 != 0) {
      lVar15 = lVar10 + param_1;
      uVar4 = 0;
      do {
        uVar21 = uVar4;
        uVar4 = uVar21 + 1;
        *(undefined1 *)(param_11 + uVar21 * 6) = *(undefined1 *)(lVar15 + uVar21 * 6);
        *(undefined1 *)(param_11 + 1 + uVar21 * 6) = *(undefined1 *)(lVar15 + 1 + uVar21 * 6);
        *(undefined1 *)(param_11 + 2 + uVar21 * 6) = *(undefined1 *)(lVar15 + 2 + uVar21 * 6);
        *(undefined1 *)(param_11 + 3 + uVar21 * 6) = *(undefined1 *)(lVar15 + 3 + uVar21 * 6);
        *(undefined1 *)(param_11 + 4 + uVar21 * 6) = *(undefined1 *)(lVar15 + 4 + uVar21 * 6);
        *(undefined1 *)(param_11 + 5 + uVar21 * 6) = *(undefined1 *)(lVar15 + 5 + uVar21 * 6);
      } while (uVar4 < uVar17);
      lVar15 = uVar21 + 2 + uVar4;
    }
    if (lVar15 - 1U < uVar9 / 3) {
      lVar10 = lVar10 + param_1;
      lVar15 = lVar15 * 3;
      lVar23 = lVar15 + -3;
      *(undefined1 *)(lVar23 + param_11) = *(undefined1 *)(lVar10 + lVar23);
      *(undefined1 *)(lVar15 + -2 + param_11) = *(undefined1 *)(lVar10 + 1 + lVar23);
      *(undefined1 *)(lVar15 + -1 + param_11) = *(undefined1 *)(lVar10 + 2 + lVar23);
    }
  }
LAB_1407a6815:
  lVar15 = lVar12 * 3;
  if (uVar20 == 1) {
    if (0 < lVar15) {
      uVar9 = lVar15 + 2;
      if ((longlong)uVar9 / 3 < 7) {
        lVar10 = 1;
        if (uVar9 / 6 != 0) {
          lVar10 = param_11 + lVar19;
          uVar17 = 0;
          do {
            uVar4 = uVar17;
            uVar17 = uVar4 + 1;
            *(undefined1 *)(lVar10 + -3 + uVar4 * 6) = *(undefined1 *)(lVar10 + -6);
            *(undefined1 *)(lVar10 + -2 + uVar4 * 6) = *(undefined1 *)(lVar10 + -5);
            *(undefined1 *)(lVar10 + -1 + uVar4 * 6) = *(undefined1 *)(lVar10 + -4);
            *(undefined1 *)(lVar10 + uVar4 * 6) = *(undefined1 *)(lVar10 + -6);
            *(undefined1 *)(lVar10 + 1 + uVar4 * 6) = *(undefined1 *)(lVar10 + -5);
            *(undefined1 *)(lVar10 + 2 + uVar4 * 6) = *(undefined1 *)(lVar10 + -4);
          } while (uVar17 < uVar9 / 6);
          lVar10 = uVar4 + 2 + uVar17;
        }
        if (lVar10 - 1U < uVar9 / 3) {
          lVar19 = lVar19 + param_11;
          lVar10 = lVar10 * 3;
          *(undefined1 *)(lVar10 + -6 + lVar19) = *(undefined1 *)(lVar19 + -6);
          *(undefined1 *)(lVar10 + -5 + lVar19) = *(undefined1 *)(lVar19 + -5);
          *(undefined1 *)(lVar10 + -4 + lVar19) = *(undefined1 *)(lVar19 + -4);
        }
      }
      else {
        lVar19 = lVar19 + param_11;
        lVar10 = 1;
        uVar11 = *(undefined1 *)(lVar19 + -6);
        uVar14 = *(undefined1 *)(lVar19 + -5);
        lVar23 = 0;
        uVar13 = *(undefined1 *)(lVar19 + -4);
        uVar17 = 0;
        if (uVar9 / 6 != 0) {
          do {
            uVar4 = uVar17;
            uVar17 = uVar4 + 1;
            *(undefined1 *)(lVar23 + -3 + lVar19) = uVar11;
            *(undefined1 *)(lVar23 + -2 + lVar19) = uVar14;
            *(undefined1 *)(lVar23 + -1 + lVar19) = uVar13;
            *(undefined1 *)(lVar23 + lVar19) = uVar11;
            *(undefined1 *)(lVar23 + 1 + lVar19) = uVar14;
            *(undefined1 *)(lVar23 + 2 + lVar19) = uVar13;
            lVar23 = lVar23 + 6;
          } while (uVar17 < uVar9 / 6);
          lVar10 = uVar4 + 2 + uVar17;
        }
        if (lVar10 - 1U < uVar9 / 3) {
          lVar10 = lVar10 * 3;
          *(undefined1 *)(lVar10 + -6 + lVar19) = uVar11;
          *(undefined1 *)(lVar10 + -5 + lVar19) = uVar14;
          *(undefined1 *)(lVar10 + -4 + lVar19) = uVar13;
        }
      }
    }
  }
  else if (uVar20 == 3) {
    if (0 < lVar15) {
      lVar10 = 1;
      lVar7 = 0;
      lVar23 = 0;
      uVar9 = (lVar15 + 2U) / 6;
      if (uVar9 != 0) {
        lVar10 = param_11 + lVar19;
        uVar17 = 0;
        do {
          uVar4 = uVar17;
          uVar17 = uVar4 + 1;
          uVar11 = *(undefined1 *)(lVar23 + -8 + lVar10);
          *(undefined1 *)(lVar7 + -3 + lVar10) = *(undefined1 *)(lVar23 + -9 + lVar10);
          *(undefined1 *)(lVar7 + -2 + lVar10) = uVar11;
          uVar11 = *(undefined1 *)(lVar23 + -0xc + lVar10);
          *(undefined1 *)(lVar7 + -1 + lVar10) = *(undefined1 *)(lVar23 + -7 + lVar10);
          *(undefined1 *)(lVar7 + lVar10) = uVar11;
          lVar6 = lVar23 + -0xb;
          uVar11 = *(undefined1 *)(lVar23 + -10 + lVar10);
          lVar23 = lVar23 + -6;
          *(undefined1 *)(lVar7 + 1 + lVar10) = *(undefined1 *)(lVar6 + lVar10);
          *(undefined1 *)(lVar7 + 2 + lVar10) = uVar11;
          lVar7 = lVar7 + 6;
        } while (uVar17 < uVar9);
        lVar10 = uVar4 + 2 + uVar17;
      }
      if (lVar10 - 1U < (lVar15 + 2U) / 3) {
        lVar10 = lVar10 * 3;
        lVar19 = lVar19 + param_11;
        lVar23 = -(lVar10 + -3);
        uVar11 = *(undefined1 *)(lVar23 + -8 + lVar19);
        uVar14 = *(undefined1 *)(lVar23 + -7 + lVar19);
        *(undefined1 *)(lVar10 + -6 + lVar19) = *(undefined1 *)(lVar23 + -9 + lVar19);
        *(undefined1 *)(lVar10 + -5 + lVar19) = uVar11;
        *(undefined1 *)(lVar10 + -4 + lVar19) = uVar14;
      }
    }
  }
  else if ((uVar20 == 6) && (0 < lVar15)) {
    uVar9 = lVar15 + 2;
    if (6 < (longlong)uVar9 / 3) {
      lVar10 = param_11 + lVar19;
      lVar23 = (lVar10 + -3) - (longlong)puVar16;
      if ((2 < lVar23) || (((longlong)uVar9 / 3) * 3 <= -lVar23)) {
        uVar11 = *(undefined1 *)puVar16;
        uVar14 = *(undefined1 *)((longlong)puVar16 + 1);
        lVar23 = 0;
        uVar13 = *(undefined1 *)(puVar16 + 1);
        lVar19 = 1;
        uVar17 = 0;
        if (uVar9 / 6 != 0) {
          do {
            uVar4 = uVar17;
            uVar17 = uVar4 + 1;
            *(undefined1 *)(lVar23 + -3 + lVar10) = uVar11;
            *(undefined1 *)(lVar23 + -2 + lVar10) = uVar14;
            *(undefined1 *)(lVar23 + -1 + lVar10) = uVar13;
            *(undefined1 *)(lVar23 + lVar10) = uVar11;
            *(undefined1 *)(lVar23 + 1 + lVar10) = uVar14;
            *(undefined1 *)(lVar23 + 2 + lVar10) = uVar13;
            lVar23 = lVar23 + 6;
          } while (uVar17 < uVar9 / 6);
          lVar19 = uVar4 + 2 + uVar17;
        }
        if (lVar19 - 1U < uVar9 / 3) {
          lVar19 = lVar19 * 3;
          *(undefined1 *)(lVar19 + -6 + lVar10) = uVar11;
          *(undefined1 *)(lVar19 + -5 + lVar10) = uVar14;
          *(undefined1 *)(lVar19 + -4 + lVar10) = uVar13;
        }
        goto LAB_1407a6c7d;
      }
    }
    lVar10 = 1;
    if (uVar9 / 6 != 0) {
      lVar10 = param_11 + lVar19;
      uVar17 = 0;
      do {
        uVar4 = uVar17;
        uVar17 = uVar4 + 1;
        *(undefined1 *)(lVar10 + -3 + uVar4 * 6) = *(undefined1 *)puVar16;
        *(undefined1 *)(lVar10 + -2 + uVar4 * 6) = *(undefined1 *)((longlong)puVar16 + 1);
        *(undefined1 *)(lVar10 + -1 + uVar4 * 6) = *(undefined1 *)(puVar16 + 1);
        *(undefined1 *)(lVar10 + uVar4 * 6) = *(undefined1 *)puVar16;
        *(undefined1 *)(lVar10 + 1 + uVar4 * 6) = *(undefined1 *)((longlong)puVar16 + 1);
        *(undefined1 *)(lVar10 + 2 + uVar4 * 6) = *(undefined1 *)(puVar16 + 1);
      } while (uVar17 < uVar9 / 6);
      lVar10 = uVar4 + 2 + uVar17;
    }
    if (lVar10 - 1U < uVar9 / 3) {
      lVar19 = lVar19 + param_11;
      lVar10 = lVar10 * 3;
      *(undefined1 *)(lVar10 + -6 + lVar19) = *(undefined1 *)puVar16;
      *(undefined1 *)(lVar10 + -5 + lVar19) = *(undefined1 *)((longlong)puVar16 + 1);
      *(undefined1 *)(lVar10 + -4 + lVar19) = *(undefined1 *)(puVar16 + 1);
    }
  }
LAB_1407a6c7d:
                    /* WARNING: Could not recover jumptable at 0x0001407a6cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_11 + lVar15,param_4,lVar12,param_9);
  return;
}

