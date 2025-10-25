
void FUN_1407134e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined2 *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 in_XMM0 [16];
  ulonglong uStack_98;
  code *UNRECOVERED_JUMPTABLE_00;
  longlong lStack_88;
  undefined2 uStack_48;
  undefined1 uStack_46;
  
  param_1 = param_1 + param_2 * param_3;
  lVar17 = (longlong)param_6;
  uStack_48 = 0;
  uStack_46 = 0;
  uVar21 = param_7 & 0xf;
  lVar20 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001407144fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308bd80)[lVar17])(param_1,param_4,*param_5,param_9);
    return;
  }
  lVar14 = (longlong)param_10;
  puVar11 = &uStack_48;
  if (uVar21 == 6) {
    puVar11 = param_8;
  }
  lVar12 = *param_5;
  if (*param_5 < lVar14 + -1) {
    lVar14 = -lVar20;
    lVar19 = 0;
    if (lVar14 < lVar20 + lVar12) {
      uVar7 = param_7 & 0x40;
      uVar8 = param_7 & 0x80;
      do {
        lVar22 = lVar14;
        if (((lVar14 < 0) || (lVar12 <= lVar14)) && (param_7 != 0xf0)) {
          if (uVar21 != 6) {
            if (uVar21 == 1) {
              if (lVar14 < 0) {
                lVar22 = 0;
                if (uVar7 != 0) {
                  lVar22 = lVar14;
                }
              }
              else if (uVar8 == 0) {
                lVar22 = lVar12 + -1;
              }
            }
            else if (uVar21 == 3) {
              if (lVar12 < 2) {
                if (lVar14 < 0) {
                  if (uVar7 == 0) {
                    lVar22 = -lVar14;
                    if (uVar8 == 0) {
                      lVar22 = 0;
                    }
                  }
                }
                else if (((0 < lVar14) && (uVar8 == 0)) && (lVar22 = -lVar14, uVar7 == 0)) {
                  lVar22 = 0;
                }
              }
              else if ((lVar14 < 0) || (lVar12 <= lVar14)) {
                if (lVar14 < 0) goto LAB_140714480;
                while (uVar8 == 0) {
                  for (lVar22 = (lVar12 + -1) * 2 - lVar22; lVar22 < 0; lVar22 = -lVar22) {
LAB_140714480:
                    if (uVar7 != 0) goto LAB_14071436e;
                  }
                  if (lVar22 < lVar12) break;
                }
              }
            }
            goto LAB_14071436e;
          }
          uVar4 = uVar7;
          if (-1 < lVar14) {
            uVar4 = uVar8;
          }
          if (uVar4 != 0) goto LAB_14071436e;
          uVar13 = *(undefined1 *)puVar11;
          uVar16 = *(undefined1 *)((longlong)puVar11 + 1);
          uVar15 = *(undefined1 *)(puVar11 + 1);
        }
        else {
LAB_14071436e:
          lVar22 = lVar22 * 3;
          uVar13 = *(undefined1 *)(lVar22 + param_1);
          uVar16 = *(undefined1 *)(lVar22 + 1 + param_1);
          uVar15 = *(undefined1 *)(lVar22 + 2 + param_1);
        }
        lVar14 = lVar14 + 1;
        *(undefined1 *)(lVar19 + param_11) = uVar13;
        *(undefined1 *)(lVar19 + 1 + param_11) = uVar16;
        *(undefined1 *)(lVar19 + 2 + param_11) = uVar15;
        lVar19 = lVar19 + 3;
      } while (lVar14 < lVar20 + lVar12);
    }
                    /* WARNING: Could not recover jumptable at 0x000140714414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308bd80)[lVar17])(param_11 + lVar20 * 3,param_4,lVar12,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    lVar19 = lVar20 * 3;
    uVar9 = param_11 + lVar19;
    lVar22 = lVar14 * 3;
    uVar18 = lVar22 - 3;
    if (uVar18 != 0 && SCARRY8(lVar22,-3) == (longlong)uVar18 < 0) {
      if (6 < (longlong)uVar18) {
        lVar6 = lVar14 * 3 + -3;
        if ((lVar6 <= (longlong)(uVar9 - param_1)) || (lVar6 <= (longlong)-(uVar9 - param_1))) {
          if ((longlong)uVar18 < 0x10) {
LAB_140714416:
            uStack_98 = 0;
          }
          else {
            uVar5 = uVar9 & 0xf;
            if (uVar5 != 0) {
              uVar5 = 0x10 - uVar5;
            }
            if ((longlong)uVar18 < (longlong)(uVar5 + 0x10)) goto LAB_140714416;
            uStack_98 = uVar18 - (uVar18 - uVar5 & 0xf);
            uVar23 = 0;
            if (uVar5 != 0) {
              do {
                *(undefined1 *)(uVar23 + uVar9) = *(undefined1 *)(uVar23 + param_1);
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar5);
            }
            if ((param_1 + uVar5 & 0xf) == 0) {
              do {
                uVar3 = ((undefined8 *)(uVar5 + param_1))[1];
                *(undefined8 *)(uVar5 + uVar9) = *(undefined8 *)(uVar5 + param_1);
                ((undefined8 *)(uVar5 + uVar9))[1] = uVar3;
                uVar5 = uVar5 + 0x10;
              } while (uVar5 < uStack_98);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar5 + param_1));
                *(undefined1 (*) [16])(uVar5 + uVar9) = in_XMM0;
                uVar5 = uVar5 + 0x10;
              } while (uVar5 < uStack_98);
            }
          }
          if (uStack_98 < uVar18) {
            do {
              *(undefined1 *)(uStack_98 + param_11 + lVar19) = *(undefined1 *)(uStack_98 + param_1);
              uStack_98 = uStack_98 + 1;
            } while (uStack_98 < uVar18);
          }
          goto LAB_140713779;
        }
      }
      lVar6 = 1;
      uVar18 = 0;
      uVar5 = (longlong)(param_10 * 3) - 3;
      uVar23 = uVar5 >> 1;
      if (uVar23 != 0) {
        do {
          *(undefined1 *)(uVar9 + uVar18 * 2) = *(undefined1 *)(param_1 + uVar18 * 2);
          *(undefined1 *)(uVar9 + 1 + uVar18 * 2) = *(undefined1 *)(param_1 + 1 + uVar18 * 2);
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar23);
        lVar6 = uVar18 * 2 + 1;
      }
      uVar18 = lVar6 - 1;
      if (uVar18 < uVar5) {
        *(undefined1 *)(uVar18 + uVar9) = *(undefined1 *)(param_1 + uVar18);
      }
    }
LAB_140713779:
    if (uVar21 == 1) {
      if (0 < lVar19) {
        lVar22 = 1;
        uVar18 = 0;
        uVar5 = (lVar19 + 2U) / 6;
        if (uVar5 != 0) {
          do {
            *(undefined1 *)(param_11 + uVar18 * 6) = *(undefined1 *)(lVar19 + param_11);
            uVar23 = uVar18 + 1;
            *(undefined1 *)(param_11 + 1 + uVar18 * 6) = *(undefined1 *)(uVar9 + 1);
            *(undefined1 *)(param_11 + 2 + uVar18 * 6) = *(undefined1 *)(uVar9 + 2);
            *(undefined1 *)(param_11 + 3 + uVar18 * 6) = *(undefined1 *)(lVar19 + param_11);
            *(undefined1 *)(param_11 + 4 + uVar18 * 6) = *(undefined1 *)(uVar9 + 1);
            *(undefined1 *)(param_11 + 5 + uVar18 * 6) = *(undefined1 *)(uVar9 + 2);
            uVar18 = uVar23;
          } while (uVar23 < uVar5);
          lVar22 = uVar23 * 2 + 1;
        }
        if (lVar22 - 1U < (lVar19 + 2U) / 3) {
          lVar22 = lVar22 * 3;
          *(undefined1 *)(lVar22 + -3 + param_11) = *(undefined1 *)(lVar19 + param_11);
          *(undefined1 *)(lVar22 + -2 + param_11) = *(undefined1 *)(uVar9 + 1);
          *(undefined1 *)(lVar22 + -1 + param_11) = *(undefined1 *)(uVar9 + 2);
        }
      }
    }
    else if (uVar21 == 3) {
      if (0 < lVar19) {
        uVar5 = 0;
        lStack_88 = 1;
        lVar6 = 0;
        uVar18 = (lVar19 + 2U) / 6;
        if (uVar18 != 0) {
          lVar1 = param_11 + lVar22;
          lVar10 = lVar6;
          do {
            uVar5 = uVar5 + 1;
            *(undefined1 *)(lVar10 + param_11) = *(undefined1 *)(lVar6 + -3 + lVar1);
            *(undefined1 *)(lVar10 + 1 + param_11) = *(undefined1 *)(lVar6 + -2 + lVar1);
            *(undefined1 *)(lVar10 + 2 + param_11) = *(undefined1 *)(lVar6 + -1 + lVar1);
            *(undefined1 *)(lVar10 + 3 + param_11) = *(undefined1 *)(lVar6 + -6 + lVar1);
            *(undefined1 *)(lVar10 + 4 + param_11) = *(undefined1 *)(lVar6 + -5 + lVar1);
            lVar2 = lVar6 + -4;
            lVar6 = lVar6 + -6;
            *(undefined1 *)(lVar10 + 5 + param_11) = *(undefined1 *)(lVar2 + lVar1);
            lVar10 = lVar10 + 6;
          } while (uVar5 < uVar18);
          lStack_88 = uVar5 * 2 + 1;
        }
        if (lStack_88 - 1U < (lVar19 + 2U) / 3) {
          lVar22 = lVar22 + param_11;
          lVar6 = lStack_88 * 3;
          lVar10 = (lStack_88 - 1U) * -3;
          *(undefined1 *)(lVar6 + -3 + param_11) = *(undefined1 *)(lVar10 + -3 + lVar22);
          *(undefined1 *)(lVar6 + -2 + param_11) = *(undefined1 *)(lVar10 + -2 + lVar22);
          *(undefined1 *)(lVar6 + -1 + param_11) = *(undefined1 *)(lVar10 + -1 + lVar22);
        }
      }
    }
    else if ((uVar21 == 6) && (0 < lVar19)) {
      lVar22 = 1;
      uVar18 = 0;
      uVar5 = (lVar19 + 2U) / 6;
      if (uVar5 != 0) {
        do {
          *(undefined1 *)(param_11 + uVar18 * 6) = *(undefined1 *)puVar11;
          uVar23 = uVar18 + 1;
          *(undefined1 *)(param_11 + 1 + uVar18 * 6) = *(undefined1 *)((longlong)puVar11 + 1);
          *(undefined1 *)(param_11 + 2 + uVar18 * 6) = *(undefined1 *)(puVar11 + 1);
          *(undefined1 *)(param_11 + 3 + uVar18 * 6) = *(undefined1 *)puVar11;
          *(undefined1 *)(param_11 + 4 + uVar18 * 6) = *(undefined1 *)((longlong)puVar11 + 1);
          *(undefined1 *)(param_11 + 5 + uVar18 * 6) = *(undefined1 *)(puVar11 + 1);
          uVar18 = uVar23;
        } while (uVar23 < uVar5);
        lVar22 = uVar23 * 2 + 1;
      }
      if (lVar22 - 1U < (lVar19 + 2U) / 3) {
        lVar22 = lVar22 * 3;
        *(undefined1 *)(lVar22 + -3 + param_11) = *(undefined1 *)puVar11;
        *(undefined1 *)(lVar22 + -2 + param_11) = *(undefined1 *)((longlong)puVar11 + 1);
        *(undefined1 *)(lVar22 + -1 + param_11) = *(undefined1 *)(puVar11 + 1);
      }
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308bd80)[lVar17];
    (*UNRECOVERED_JUMPTABLE_00)(uVar9,param_4,lVar20,param_9,param_10);
    lVar12 = lVar12 - lVar20;
    param_4 = param_4 + lVar20 * 0xc;
    param_1 = param_1 + lVar19;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308bd80)[lVar17];
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140714452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar12,param_9);
    return;
  }
  if (lVar20 < lVar12) {
    lVar12 = lVar12 - lVar20;
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar12,param_9,param_10);
    param_1 = param_1 + lVar12 * 3;
    param_4 = param_4 + lVar12 * 0xc;
  }
  lVar17 = lVar14 * 3;
  if (lVar17 != 3 && SCARRY8(lVar17,-3) == lVar17 + -3 < 0) {
    lVar12 = lVar20 * -3;
    uVar9 = lVar14 * 3 - 1;
    lVar19 = param_11 - (param_1 + lVar12);
    lVar14 = ((longlong)uVar9 / 3) * 3;
    if ((lVar14 <= lVar19) || (lVar14 + -2 <= -lVar19)) {
      lVar19 = (param_11 + 1) - (param_1 + lVar12);
      if (((lVar14 <= lVar19) || (lVar14 + -1 <= -lVar19)) &&
         ((lVar19 = (param_11 + 1) - param_11, lVar14 + -2 <= lVar19 || (lVar14 + -1 <= -lVar19))))
      {
        lVar14 = 1;
        uVar18 = ((longlong)(param_10 * 3) - 1U) / 6;
        if (uVar18 != 0) {
          uVar5 = 0;
          do {
            uVar23 = uVar5 + 1;
            *(undefined1 *)(param_11 + uVar5 * 6) = *(undefined1 *)(lVar12 + param_1 + uVar5 * 6);
            *(undefined1 *)(param_11 + 3 + uVar5 * 6) =
                 *(undefined1 *)(lVar12 + param_1 + 3 + uVar5 * 6);
            uVar5 = uVar23;
          } while (uVar23 < uVar18);
          lVar14 = uVar23 * 2 + 1;
        }
        if (lVar14 - 1U < uVar9 / 3) {
          lVar14 = lVar14 * 3 + -3;
          *(undefined1 *)(lVar14 + param_11) = *(undefined1 *)(lVar14 + lVar12 + param_1);
        }
        lVar14 = 1;
        if (uVar18 != 0) {
          lVar14 = lVar12 + param_1;
          uVar5 = 0;
          do {
            uVar23 = uVar5 + 1;
            uVar13 = *(undefined1 *)(lVar14 + 2 + uVar5 * 6);
            *(undefined1 *)(param_11 + 1 + uVar5 * 6) = *(undefined1 *)(lVar14 + 1 + uVar5 * 6);
            *(undefined1 *)(param_11 + 2 + uVar5 * 6) = uVar13;
            uVar13 = *(undefined1 *)(lVar14 + 5 + uVar5 * 6);
            *(undefined1 *)(param_11 + 4 + uVar5 * 6) = *(undefined1 *)(lVar14 + 4 + uVar5 * 6);
            *(undefined1 *)(param_11 + 5 + uVar5 * 6) = uVar13;
            uVar5 = uVar23;
          } while (uVar23 < uVar18);
          lVar14 = uVar23 * 2 + 1;
        }
        if (lVar14 - 1U < uVar9 / 3) {
          lVar14 = (lVar14 - 1U) * 3;
          uVar13 = *(undefined1 *)(lVar12 + param_1 + 2 + lVar14);
          *(undefined1 *)(lVar14 + 1 + param_11) = *(undefined1 *)(lVar12 + param_1 + 1 + lVar14);
          *(undefined1 *)(lVar14 + 2 + param_11) = uVar13;
        }
        goto LAB_140713dd4;
      }
    }
    lVar14 = 1;
    uVar18 = ((longlong)(param_10 * 3) - 1U) / 6;
    if (uVar18 != 0) {
      lVar14 = lVar12 + param_1;
      uVar5 = 0;
      do {
        uVar23 = uVar5 + 1;
        *(undefined1 *)(param_11 + uVar5 * 6) = *(undefined1 *)(lVar14 + uVar5 * 6);
        *(undefined1 *)(param_11 + 1 + uVar5 * 6) = *(undefined1 *)(lVar14 + 1 + uVar5 * 6);
        *(undefined1 *)(param_11 + 2 + uVar5 * 6) = *(undefined1 *)(lVar14 + 2 + uVar5 * 6);
        *(undefined1 *)(param_11 + 3 + uVar5 * 6) = *(undefined1 *)(lVar14 + 3 + uVar5 * 6);
        *(undefined1 *)(param_11 + 4 + uVar5 * 6) = *(undefined1 *)(lVar14 + 4 + uVar5 * 6);
        *(undefined1 *)(param_11 + 5 + uVar5 * 6) = *(undefined1 *)(lVar14 + 5 + uVar5 * 6);
        uVar5 = uVar23;
      } while (uVar23 < uVar18);
      lVar14 = uVar23 * 2 + 1;
    }
    if (lVar14 - 1U < uVar9 / 3) {
      lVar12 = lVar12 + param_1;
      lVar14 = lVar14 * 3;
      lVar19 = lVar14 + -3;
      *(undefined1 *)(lVar19 + param_11) = *(undefined1 *)(lVar19 + lVar12);
      *(undefined1 *)(lVar14 + -2 + param_11) = *(undefined1 *)(lVar12 + 1 + lVar19);
      *(undefined1 *)(lVar14 + -1 + param_11) = *(undefined1 *)(lVar12 + 2 + lVar19);
    }
  }
LAB_140713dd4:
  if (uVar21 == 1) {
    lVar14 = lVar20 * 3;
    if (lVar14 != 0 && SCARRY8(lVar20 * 2,lVar20) == lVar14 < 0) {
      uVar9 = lVar20 * 3 + 2;
      if ((longlong)uVar9 / 3 < 7) {
        uVar18 = (lVar14 + 2U) / 6;
        lVar14 = 1;
        if (uVar18 != 0) {
          lVar14 = param_11 + lVar17;
          uVar5 = 0;
          do {
            *(undefined1 *)(lVar14 + -3 + uVar5 * 6) = *(undefined1 *)(lVar14 + -6);
            uVar23 = uVar5 + 1;
            *(undefined1 *)(lVar14 + -2 + uVar5 * 6) = *(undefined1 *)(lVar14 + -5);
            *(undefined1 *)(lVar14 + -1 + uVar5 * 6) = *(undefined1 *)(lVar14 + -4);
            *(undefined1 *)(lVar14 + uVar5 * 6) = *(undefined1 *)(lVar14 + -6);
            *(undefined1 *)(lVar14 + 1 + uVar5 * 6) = *(undefined1 *)(lVar14 + -5);
            *(undefined1 *)(lVar14 + 2 + uVar5 * 6) = *(undefined1 *)(lVar14 + -4);
            uVar5 = uVar23;
          } while (uVar23 < uVar18);
          lVar14 = uVar23 * 2 + 1;
        }
        if (lVar14 - 1U < uVar9 / 3) {
          lVar12 = param_11 + lVar17;
          lVar14 = lVar14 * 3;
          *(undefined1 *)(lVar14 + -6 + lVar12) = *(undefined1 *)(lVar17 + -6 + param_11);
          *(undefined1 *)(lVar14 + -5 + lVar12) = *(undefined1 *)(lVar17 + -5 + param_11);
          *(undefined1 *)(lVar14 + -4 + lVar12) = *(undefined1 *)(lVar17 + -4 + param_11);
        }
      }
      else {
        lVar17 = lVar17 + param_11;
        uVar18 = (lVar14 + 2U) / 6;
        uVar5 = 0;
        uVar13 = *(undefined1 *)(lVar17 + -6);
        lVar12 = 1;
        uVar16 = *(undefined1 *)(lVar17 + -5);
        lVar14 = 0;
        uVar15 = *(undefined1 *)(lVar17 + -4);
        if (uVar18 != 0) {
          do {
            uVar5 = uVar5 + 1;
            *(undefined1 *)(lVar14 + -3 + lVar17) = uVar13;
            *(undefined1 *)(lVar14 + -2 + lVar17) = uVar16;
            *(undefined1 *)(lVar14 + -1 + lVar17) = uVar15;
            *(undefined1 *)(lVar14 + lVar17) = uVar13;
            *(undefined1 *)(lVar14 + 1 + lVar17) = uVar16;
            *(undefined1 *)(lVar14 + 2 + lVar17) = uVar15;
            lVar14 = lVar14 + 6;
          } while (uVar5 < uVar18);
          lVar12 = uVar5 * 2 + 1;
        }
        if (lVar12 - 1U < uVar9 / 3) {
          lVar12 = lVar12 * 3;
          *(undefined1 *)(lVar12 + -6 + lVar17) = uVar13;
          *(undefined1 *)(lVar12 + -5 + lVar17) = uVar16;
          *(undefined1 *)(lVar12 + -4 + lVar17) = uVar15;
        }
      }
    }
  }
  else {
    lVar14 = lVar20 * 3;
    if (uVar21 == 3) {
      if (0 < lVar14) {
        uVar18 = 0;
        uVar9 = (lVar14 + 2U) / 6;
        lVar22 = 0;
        lVar19 = 1;
        lVar12 = 0;
        if (uVar9 != 0) {
          lVar19 = param_11 + lVar17;
          do {
            uVar18 = uVar18 + 1;
            uVar13 = *(undefined1 *)(lVar12 + -8 + lVar19);
            *(undefined1 *)(lVar22 + -3 + lVar19) = *(undefined1 *)(lVar12 + -9 + lVar19);
            *(undefined1 *)(lVar22 + -2 + lVar19) = uVar13;
            uVar13 = *(undefined1 *)(lVar12 + -0xc + lVar19);
            *(undefined1 *)(lVar22 + -1 + lVar19) = *(undefined1 *)(lVar12 + -7 + lVar19);
            *(undefined1 *)(lVar22 + lVar19) = uVar13;
            lVar6 = lVar12 + -0xb;
            uVar13 = *(undefined1 *)(lVar12 + -10 + lVar19);
            lVar12 = lVar12 + -6;
            *(undefined1 *)(lVar22 + 1 + lVar19) = *(undefined1 *)(lVar6 + lVar19);
            *(undefined1 *)(lVar22 + 2 + lVar19) = uVar13;
            lVar22 = lVar22 + 6;
          } while (uVar18 < uVar9);
          lVar19 = uVar18 * 2 + 1;
        }
        if (lVar19 - 1U < (lVar14 + 2U) / 3) {
          lVar17 = lVar17 + param_11;
          lVar14 = lVar19 * 3;
          lVar12 = (lVar19 - 1U) * -3;
          uVar13 = *(undefined1 *)(lVar12 + -8 + lVar17);
          uVar16 = *(undefined1 *)(lVar12 + -7 + lVar17);
          *(undefined1 *)(lVar14 + -6 + lVar17) = *(undefined1 *)(lVar12 + -9 + lVar17);
          *(undefined1 *)(lVar14 + -5 + lVar17) = uVar13;
          *(undefined1 *)(lVar14 + -4 + lVar17) = uVar16;
        }
      }
    }
    else if ((uVar21 == 6) && (0 < lVar14)) {
      uVar9 = lVar20 * 3 + 2;
      if (6 < (longlong)uVar9 / 3) {
        lVar19 = (param_11 + -3 + lVar17) - (longlong)puVar11;
        lVar12 = param_11 + lVar17;
        if ((2 < lVar19) || (((longlong)uVar9 / 3) * 3 <= -lVar19)) {
          uVar5 = 0;
          uVar18 = (lVar14 + 2U) / 6;
          lVar14 = 1;
          lVar17 = 0;
          uVar13 = *(undefined1 *)puVar11;
          uVar16 = *(undefined1 *)((longlong)puVar11 + 1);
          uVar15 = *(undefined1 *)(puVar11 + 1);
          if (uVar18 != 0) {
            do {
              uVar5 = uVar5 + 1;
              *(undefined1 *)(lVar17 + -3 + lVar12) = uVar13;
              *(undefined1 *)(lVar17 + -2 + lVar12) = uVar16;
              *(undefined1 *)(lVar17 + -1 + lVar12) = uVar15;
              *(undefined1 *)(lVar17 + lVar12) = uVar13;
              *(undefined1 *)(lVar17 + 1 + lVar12) = uVar16;
              *(undefined1 *)(lVar17 + 2 + lVar12) = uVar15;
              lVar17 = lVar17 + 6;
            } while (uVar5 < uVar18);
            lVar14 = uVar5 * 2 + 1;
          }
          if (lVar14 - 1U < uVar9 / 3) {
            lVar14 = lVar14 * 3;
            *(undefined1 *)(lVar14 + -6 + lVar12) = uVar13;
            *(undefined1 *)(lVar14 + -5 + lVar12) = uVar16;
            *(undefined1 *)(lVar14 + -4 + lVar12) = uVar15;
          }
          goto LAB_140714247;
        }
      }
      uVar18 = (lVar14 + 2U) / 6;
      lVar14 = 1;
      if (uVar18 != 0) {
        lVar14 = param_11 + lVar17;
        uVar5 = 0;
        do {
          *(undefined1 *)(lVar14 + -3 + uVar5 * 6) = *(undefined1 *)puVar11;
          uVar23 = uVar5 + 1;
          *(undefined1 *)(lVar14 + -2 + uVar5 * 6) = *(undefined1 *)((longlong)puVar11 + 1);
          *(undefined1 *)(lVar14 + -1 + uVar5 * 6) = *(undefined1 *)(puVar11 + 1);
          *(undefined1 *)(lVar14 + uVar5 * 6) = *(undefined1 *)puVar11;
          *(undefined1 *)(lVar14 + 1 + uVar5 * 6) = *(undefined1 *)((longlong)puVar11 + 1);
          *(undefined1 *)(lVar14 + 2 + uVar5 * 6) = *(undefined1 *)(puVar11 + 1);
          uVar5 = uVar23;
        } while (uVar23 < uVar18);
        lVar14 = uVar23 * 2 + 1;
      }
      if (lVar14 - 1U < uVar9 / 3) {
        lVar17 = lVar17 + param_11;
        lVar14 = lVar14 * 3;
        *(undefined1 *)(lVar14 + -6 + lVar17) = *(undefined1 *)puVar11;
        *(undefined1 *)(lVar14 + -5 + lVar17) = *(undefined1 *)((longlong)puVar11 + 1);
        *(undefined1 *)(lVar14 + -4 + lVar17) = *(undefined1 *)(puVar11 + 1);
      }
    }
  }
LAB_140714247:
                    /* WARNING: Could not recover jumptable at 0x000140714278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_11 + lVar20 * 3,param_4,lVar20,param_9);
  return;
}

