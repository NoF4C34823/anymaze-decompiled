
void FUN_1407cee40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulonglong uStack_78;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar13 = (longlong)param_10;
  param_1 = param_1 + param_2 * param_3;
  uVar21 = 0;
  uVar12 = param_7 & 0xf;
  uVar14 = (ulonglong)(param_10 >> 1);
  lVar15 = (longlong)param_6;
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001407cfa5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c460)[lVar15])(param_1,param_4,*param_5,param_9);
    return;
  }
  if (uVar12 == 6) {
    uVar21 = *param_8;
  }
  lVar10 = *param_5;
  uVar16 = lVar13 - 1;
  if (lVar10 < (longlong)uVar16) {
    lVar13 = 0;
    lVar19 = -uVar14;
    if (lVar19 < (longlong)(uVar14 + lVar10)) {
      uVar8 = param_7 & 0x80;
      uVar17 = param_7 & 0x40;
      do {
        lVar7 = lVar19;
        if (((lVar19 < 0) || (lVar10 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar12 != 6) {
            if (uVar12 == 1) {
              if (lVar19 < 0) {
                lVar7 = 0;
                if (uVar17 != 0) {
                  lVar7 = lVar19;
                }
              }
              else if (uVar8 == 0) {
                lVar7 = lVar10 + -1;
              }
            }
            else if (uVar12 == 3) {
              if (lVar10 < 2) {
                if (lVar19 < 0) {
                  if (uVar17 == 0) {
                    lVar7 = -lVar19;
                    if (uVar8 == 0) {
                      lVar7 = 0;
                    }
                  }
                }
                else if (((0 < lVar19) && (uVar8 == 0)) && (lVar7 = -lVar19, uVar17 == 0)) {
                  lVar7 = 0;
                }
              }
              else if ((lVar19 < 0) || (lVar10 <= lVar19)) {
                if (lVar19 < 0) goto LAB_1407cf9e0;
                while (uVar8 == 0) {
                  for (lVar7 = (lVar10 + -1) * 2 - lVar7; lVar7 < 0; lVar7 = -lVar7) {
LAB_1407cf9e0:
                    if (uVar17 != 0) goto LAB_1407cf8cf;
                  }
                  if (lVar7 < lVar10) break;
                }
              }
            }
            goto LAB_1407cf8cf;
          }
          uVar5 = uVar17;
          if (-1 < lVar19) {
            uVar5 = uVar8;
          }
          uVar20 = uVar21;
          if (uVar5 != 0) goto LAB_1407cf8cf;
        }
        else {
LAB_1407cf8cf:
          uVar20 = *(undefined4 *)(param_1 + lVar7 * 4);
        }
        lVar19 = lVar19 + 1;
        *(undefined4 *)(param_11 + lVar13 * 4) = uVar20;
        lVar13 = lVar13 + 1;
      } while (lVar19 < (longlong)(uVar14 + lVar10));
    }
                    /* WARNING: Could not recover jumptable at 0x0001407cf946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c460)[lVar15])(param_11 + uVar14 * 4,param_4,lVar10,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    uVar11 = param_11 + uVar14 * 4;
    if (0 < (longlong)uVar16) {
      if (6 < (longlong)uVar16) {
        lVar19 = lVar13 * 4 + -4;
        if ((lVar19 <= (longlong)(uVar11 - param_1)) || (lVar19 <= (longlong)-(uVar11 - param_1))) {
          uVar6 = uVar11 & 0xf;
          if (uVar6 == 0) {
LAB_1407cef48:
            if ((longlong)uVar16 < (longlong)(uVar6 + 4)) goto LAB_1407cf949;
            uStack_78 = uVar16 - (uVar16 - uVar6 & 3);
            uVar18 = 0;
            if (uVar6 != 0) {
              do {
                *(undefined4 *)(uVar11 + uVar18 * 4) = *(undefined4 *)(param_1 + uVar18 * 4);
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar6);
            }
            if ((param_1 + uVar6 * 4 & 0xf) == 0) {
              do {
                puVar1 = (undefined4 *)(param_1 + uVar6 * 4);
                uVar20 = puVar1[1];
                uVar3 = puVar1[2];
                uVar4 = puVar1[3];
                puVar2 = (undefined4 *)(uVar11 + uVar6 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar20;
                puVar2[2] = uVar3;
                puVar2[3] = uVar4;
                uVar6 = uVar6 + 4;
              } while (uVar6 < uStack_78);
            }
            else {
              do {
                puVar1 = (undefined4 *)(param_1 + uVar6 * 4);
                uVar20 = puVar1[1];
                uVar3 = puVar1[2];
                uVar4 = puVar1[3];
                puVar2 = (undefined4 *)(uVar11 + uVar6 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar20;
                puVar2[2] = uVar3;
                puVar2[3] = uVar4;
                uVar6 = uVar6 + 4;
              } while (uVar6 < uStack_78);
            }
          }
          else {
            if ((uVar11 & 3) == 0) {
              uVar6 = 0x10 - uVar6 >> 2;
              goto LAB_1407cef48;
            }
LAB_1407cf949:
            uStack_78 = 0;
          }
          for (; uStack_78 < uVar16; uStack_78 = uStack_78 + 1) {
            *(undefined4 *)(uVar11 + uStack_78 * 4) = *(undefined4 *)(param_1 + uStack_78 * 4);
          }
          goto LAB_1407cf098;
        }
      }
      lVar19 = 1;
      uVar18 = lVar13 - 1U >> 1;
      uVar6 = 0;
      if (uVar18 != 0) {
        do {
          uVar9 = uVar6;
          *(undefined4 *)(uVar11 + uVar9 * 8) = *(undefined4 *)(param_1 + uVar9 * 8);
          *(undefined4 *)(uVar11 + 4 + uVar9 * 8) = *(undefined4 *)(param_1 + 4 + uVar9 * 8);
          uVar6 = uVar9 + 1;
        } while (uVar6 < uVar18);
        lVar19 = uVar9 + 2 + uVar6;
      }
      if (lVar19 - 1U < lVar13 - 1U) {
        *(undefined4 *)(param_11 + ((uVar14 - 1) + lVar19) * 4) =
             *(undefined4 *)(param_1 + (lVar19 - 1U) * 4);
      }
    }
LAB_1407cf098:
    if (uVar12 == 1) {
      if ((longlong)uVar14 < 1) goto LAB_1407cf2af;
      uVar20 = *(undefined4 *)(param_11 + uVar14 * 4);
      if ((longlong)uVar14 < 8) {
LAB_1407cf9ab:
        uVar18 = 0;
      }
      else {
        uVar6 = param_11 & 0xf;
        if (uVar6 != 0) {
          if ((param_11 & 3) != 0) goto LAB_1407cf9ab;
          uVar6 = 0x10 - uVar6 >> 2;
        }
        if ((longlong)uVar14 < (longlong)(uVar6 + 8)) goto LAB_1407cf9ab;
        uVar9 = 0;
        uVar18 = uVar14 - (uVar14 - uVar6 & 7);
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(param_11 + uVar9 * 4) = uVar20;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar6);
        }
        do {
          puVar1 = (undefined4 *)(param_11 + uVar6 * 4);
          *puVar1 = uVar20;
          puVar1[1] = uVar20;
          puVar1[2] = uVar20;
          puVar1[3] = uVar20;
          puVar1 = (undefined4 *)(param_11 + 0x10 + uVar6 * 4);
          *puVar1 = uVar20;
          puVar1[1] = uVar20;
          puVar1[2] = uVar20;
          puVar1[3] = uVar20;
          uVar6 = uVar6 + 8;
        } while (uVar6 < uVar18);
      }
      for (; uVar18 < uVar14; uVar18 = uVar18 + 1) {
        *(undefined4 *)(param_11 + uVar18 * 4) = uVar20;
      }
    }
    else if (uVar12 == 3) {
      if (0 < (longlong)uVar14) {
        lVar19 = 1;
        uVar6 = 0;
        if (uVar14 >> 1 != 0) {
          lVar19 = param_11 + lVar13 * 4;
          uVar18 = uVar6;
          do {
            uVar9 = uVar18;
            *(undefined4 *)(param_11 + uVar9 * 8) = *(undefined4 *)((uVar6 - 4) + lVar19);
            lVar7 = uVar6 - 8;
            uVar6 = uVar6 - 8;
            *(undefined4 *)(param_11 + 4 + uVar9 * 8) = *(undefined4 *)(lVar7 + lVar19);
            uVar18 = uVar9 + 1;
          } while (uVar18 < uVar14 >> 1);
          lVar19 = uVar9 + 2 + uVar18;
        }
        uVar6 = lVar19 - 1;
        if (uVar6 < uVar14) {
          *(undefined4 *)(param_11 + uVar6 * 4) =
               *(undefined4 *)((param_11 - 4) + (lVar13 - uVar6) * 4);
        }
      }
    }
    else if ((uVar12 == 6) && (0 < (longlong)uVar14)) {
      if ((longlong)uVar14 < 8) {
LAB_1407cf957:
        uVar18 = 0;
      }
      else {
        uVar6 = param_11 & 0xf;
        if (uVar6 != 0) {
          if ((param_11 & 3) != 0) goto LAB_1407cf957;
          uVar6 = 0x10 - uVar6 >> 2;
        }
        if ((longlong)uVar14 < (longlong)(uVar6 + 8)) goto LAB_1407cf957;
        uVar9 = 0;
        uVar18 = uVar14 - (uVar14 - uVar6 & 7);
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(param_11 + uVar9 * 4) = uVar21;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar6);
        }
        do {
          puVar1 = (undefined4 *)(param_11 + uVar6 * 4);
          *puVar1 = uVar21;
          puVar1[1] = uVar21;
          puVar1[2] = uVar21;
          puVar1[3] = uVar21;
          puVar1 = (undefined4 *)(param_11 + 0x10 + uVar6 * 4);
          *puVar1 = uVar21;
          puVar1[1] = uVar21;
          puVar1[2] = uVar21;
          puVar1[3] = uVar21;
          uVar6 = uVar6 + 8;
        } while (uVar6 < uVar18);
      }
      for (; uVar18 < uVar14; uVar18 = uVar18 + 1) {
        *(undefined4 *)(param_11 + uVar18 * 4) = uVar21;
      }
    }
LAB_1407cf2af:
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308c460)[lVar15];
    (*UNRECOVERED_JUMPTABLE_00)(uVar11,param_4,uVar14,param_9,param_10);
    lVar10 = lVar10 - uVar14;
    param_4 = param_4 + uVar14 * 4;
    param_1 = param_1 + uVar14 * 4;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308c460)[lVar15];
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001407cf9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar10,param_9);
    return;
  }
  if ((longlong)uVar14 < lVar10) {
    lVar10 = lVar10 - uVar14;
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar10,param_9,param_10);
    param_4 = param_4 + lVar10 * 4;
    param_1 = param_1 + lVar10 * 4;
  }
  if (0 < (longlong)uVar16) {
    if (6 < (longlong)uVar16) {
      lVar15 = lVar13 * 4 + -4;
      lVar10 = param_1 + uVar14 * -4;
      if ((lVar15 <= (longlong)(param_11 - lVar10)) || (lVar15 <= (longlong)-(param_11 - lVar10))) {
        uVar11 = param_11 & 0xf;
        if (uVar11 == 0) {
LAB_1407cf3a6:
          if ((longlong)uVar16 < (longlong)(uVar11 + 4)) goto LAB_1407cf95f;
          uVar18 = 0;
          uVar6 = uVar16 - (uVar16 - uVar11 & 3);
          if (uVar11 != 0) {
            do {
              *(undefined4 *)(param_11 + uVar18 * 4) = *(undefined4 *)(lVar10 + uVar18 * 4);
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar11);
          }
          if ((param_1 + (uVar11 - uVar14) * 4 & 0xf) == 0) {
            do {
              puVar1 = (undefined4 *)(lVar10 + uVar11 * 4);
              uVar20 = puVar1[1];
              uVar3 = puVar1[2];
              uVar4 = puVar1[3];
              puVar2 = (undefined4 *)(param_11 + uVar11 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar20;
              puVar2[2] = uVar3;
              puVar2[3] = uVar4;
              uVar11 = uVar11 + 4;
            } while (uVar11 < uVar6);
          }
          else {
            do {
              puVar1 = (undefined4 *)(lVar10 + uVar11 * 4);
              uVar20 = puVar1[1];
              uVar3 = puVar1[2];
              uVar4 = puVar1[3];
              puVar2 = (undefined4 *)(param_11 + uVar11 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar20;
              puVar2[2] = uVar3;
              puVar2[3] = uVar4;
              uVar11 = uVar11 + 4;
            } while (uVar11 < uVar6);
          }
        }
        else {
          if ((param_11 & 3) == 0) {
            uVar11 = 0x10 - uVar11 >> 2;
            goto LAB_1407cf3a6;
          }
LAB_1407cf95f:
          uVar6 = 0;
        }
        for (; uVar6 < uVar16; uVar6 = uVar6 + 1) {
          *(undefined4 *)(param_11 + uVar6 * 4) = *(undefined4 *)(lVar10 + uVar6 * 4);
        }
        goto LAB_1407cf4e1;
      }
    }
    lVar15 = 1;
    uVar16 = lVar13 - 1U >> 1;
    if (uVar16 != 0) {
      lVar15 = param_1 + uVar14 * -4;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        *(undefined4 *)(param_11 + uVar6 * 8) = *(undefined4 *)(lVar15 + uVar6 * 8);
        *(undefined4 *)(param_11 + 4 + uVar6 * 8) = *(undefined4 *)(lVar15 + 4 + uVar6 * 8);
        uVar11 = uVar6 + 1;
      } while (uVar11 < uVar16);
      lVar15 = uVar6 + 2 + uVar11;
    }
    uVar16 = lVar15 - 1;
    if (uVar16 < lVar13 - 1U) {
      *(undefined4 *)(param_11 + uVar16 * 4) = *(undefined4 *)(param_1 + (uVar16 - uVar14) * 4);
    }
  }
LAB_1407cf4e1:
  if (uVar12 == 1) {
    if ((longlong)uVar14 < 1) goto LAB_1407cf797;
    if (6 < (longlong)uVar14) {
      lVar15 = param_11 + lVar13 * 4;
      uVar16 = lVar15 - 4;
      lVar10 = uVar16 - (lVar15 + -8);
      if ((3 < lVar10) || ((longlong)(uVar14 * 4) <= -lVar10)) {
        uVar21 = *(undefined4 *)(lVar15 + -8);
        if ((longlong)uVar14 < 8) {
LAB_1407cf96e:
          uVar16 = 0;
        }
        else {
          uVar11 = uVar16 & 0xf;
          if (uVar11 != 0) {
            if ((uVar16 & 3) != 0) goto LAB_1407cf96e;
            uVar11 = 0x10 - uVar11 >> 2;
          }
          if ((longlong)uVar14 < (longlong)(uVar11 + 8)) goto LAB_1407cf96e;
          uVar6 = 0;
          uVar16 = uVar14 - (uVar14 - uVar11 & 7);
          if (uVar11 != 0) {
            do {
              *(undefined4 *)(lVar15 + -4 + uVar6 * 4) = uVar21;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar11);
          }
          do {
            puVar1 = (undefined4 *)(lVar15 + -4 + uVar11 * 4);
            *puVar1 = uVar21;
            puVar1[1] = uVar21;
            puVar1[2] = uVar21;
            puVar1[3] = uVar21;
            puVar1 = (undefined4 *)(lVar15 + 0xc + uVar11 * 4);
            *puVar1 = uVar21;
            puVar1[1] = uVar21;
            puVar1[2] = uVar21;
            puVar1[3] = uVar21;
            uVar11 = uVar11 + 8;
          } while (uVar11 < uVar16);
        }
        for (; uVar16 < uVar14; uVar16 = uVar16 + 1) {
          *(undefined4 *)(lVar15 + -4 + uVar16 * 4) = uVar21;
        }
        goto LAB_1407cf797;
      }
    }
    lVar15 = 1;
    if (uVar14 >> 1 != 0) {
      lVar15 = param_11 + lVar13 * 4;
      uVar16 = 0;
      do {
        uVar11 = uVar16;
        *(undefined4 *)(lVar15 + -4 + uVar11 * 8) = *(undefined4 *)(lVar15 + -8);
        *(undefined4 *)(lVar15 + uVar11 * 8) = *(undefined4 *)(lVar15 + -8);
        uVar16 = uVar11 + 1;
      } while (uVar16 < uVar14 >> 1);
      lVar15 = uVar11 + 2 + uVar16;
    }
    if (lVar15 - 1U < uVar14) {
      *(undefined4 *)((param_11 - 4) + (lVar13 + -1 + lVar15) * 4) =
           *(undefined4 *)((param_11 - 8) + lVar13 * 4);
    }
    goto LAB_1407cf797;
  }
  if (uVar12 == 3) {
    if (0 < (longlong)uVar14) {
      lVar15 = 1;
      lVar10 = 0;
      if (uVar14 >> 1 != 0) {
        lVar15 = param_11 + lVar13 * 4;
        uVar16 = 0;
        do {
          uVar11 = uVar16;
          *(undefined4 *)(lVar15 + -4 + uVar11 * 8) = *(undefined4 *)(lVar10 + -0xc + lVar15);
          lVar19 = lVar10 + -0x10;
          lVar10 = lVar10 + -8;
          *(undefined4 *)(lVar15 + uVar11 * 8) = *(undefined4 *)(lVar19 + lVar15);
          uVar16 = uVar11 + 1;
        } while (uVar16 < uVar14 >> 1);
        lVar15 = uVar11 + 2 + uVar16;
      }
      if (lVar15 - 1U < uVar14) {
        *(undefined4 *)((param_11 - 4) + (lVar13 + -1 + lVar15) * 4) =
             *(undefined4 *)((param_11 - 0xc) + (lVar13 - (lVar15 - 1U)) * 4);
      }
    }
    goto LAB_1407cf797;
  }
  if ((uVar12 != 6) || ((longlong)uVar14 < 1)) goto LAB_1407cf797;
  if ((longlong)uVar14 < 8) {
LAB_1407cf966:
    uVar11 = 0;
  }
  else {
    lVar15 = param_11 + lVar13 * 4;
    uVar16 = lVar15 - 4U & 0xf;
    if (uVar16 != 0) {
      if ((lVar15 - 4U & 3) != 0) goto LAB_1407cf966;
      uVar16 = 0x10 - uVar16 >> 2;
    }
    if ((longlong)uVar14 < (longlong)(uVar16 + 8)) goto LAB_1407cf966;
    uVar6 = 0;
    uVar11 = uVar14 - (uVar14 - uVar16 & 7);
    if (uVar16 != 0) {
      do {
        *(undefined4 *)(lVar15 + -4 + uVar6 * 4) = uVar21;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar16);
    }
    do {
      puVar1 = (undefined4 *)(lVar15 + -4 + uVar16 * 4);
      *puVar1 = uVar21;
      puVar1[1] = uVar21;
      puVar1[2] = uVar21;
      puVar1[3] = uVar21;
      puVar1 = (undefined4 *)(lVar15 + 0xc + uVar16 * 4);
      *puVar1 = uVar21;
      puVar1[1] = uVar21;
      puVar1[2] = uVar21;
      puVar1[3] = uVar21;
      uVar16 = uVar16 + 8;
    } while (uVar16 < uVar11);
  }
  if (uVar11 < uVar14) {
    do {
      *(undefined4 *)(param_11 + lVar13 * 4 + -4 + uVar11 * 4) = uVar21;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar14);
  }
LAB_1407cf797:
                    /* WARNING: Could not recover jumptable at 0x0001407cf7ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_11 + uVar14 * 4,param_4,uVar14,param_9);
  return;
}

