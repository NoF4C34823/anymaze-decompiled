
void FUN_14090e4e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uStack_88;
  code *pcStack_80;
  ulonglong uStack_70;
  
  param_1 = param_1 + param_2 * param_3;
  lVar19 = (longlong)param_10;
  uVar11 = param_7 & 0xf;
  uVar22 = 0;
  lVar8 = (longlong)param_6;
  uVar16 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308d4a0)[lVar8])(param_1,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar11 == 6) {
    uVar22 = *param_8;
  }
  lVar12 = *param_5;
  uVar15 = lVar19 - 1;
  if (lVar12 < (longlong)uVar15) {
    lVar19 = -uVar16;
    lVar18 = 0;
    if (lVar19 < (longlong)(uVar16 + lVar12)) {
      uVar14 = param_7 & 0x80;
      pcStack_80._0_4_ = param_7 & 0x40;
      do {
        lVar9 = lVar19;
        if (((lVar19 < 0) || (lVar12 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar11 != 6) {
            if (uVar11 == 1) {
              if (lVar19 < 0) {
                lVar9 = 0;
                if ((uint)pcStack_80 != 0) {
                  lVar9 = lVar19;
                }
              }
              else if (uVar14 == 0) {
                lVar9 = lVar12 + -1;
              }
            }
            else if (uVar11 == 3) {
              if (lVar12 < 2) {
                if (lVar19 < 0) {
                  if ((uint)pcStack_80 == 0) {
                    lVar9 = -lVar19;
                    if (uVar14 == 0) {
                      lVar9 = 0;
                    }
                  }
                }
                else if (((0 < lVar19) && (uVar14 == 0)) && (lVar9 = -lVar19, (uint)pcStack_80 == 0)
                        ) {
                  lVar9 = 0;
                }
              }
              else if ((lVar19 < 0) || (lVar12 <= lVar19)) {
                if (lVar19 < 0) goto LAB_14090f480;
                while (uVar14 == 0) {
                  for (lVar9 = (lVar12 + -1) * 2 - lVar9; lVar9 < 0; lVar9 = -lVar9) {
LAB_14090f480:
                    if ((uint)pcStack_80 != 0) goto LAB_14090f2ef;
                  }
                  if (lVar9 < lVar12) break;
                }
              }
            }
            goto LAB_14090f2ef;
          }
          uVar7 = (uint)pcStack_80;
          if (-1 < lVar19) {
            uVar7 = uVar14;
          }
          uVar21 = uVar22;
          if (uVar7 != 0) goto LAB_14090f2ef;
        }
        else {
LAB_14090f2ef:
          uVar21 = *(undefined4 *)(param_1 + lVar9 * 4);
        }
        lVar19 = lVar19 + 1;
        *(undefined4 *)(param_11 + lVar18 * 4) = uVar21;
        lVar18 = lVar18 + 1;
      } while (lVar19 < (longlong)(uVar16 + lVar12));
    }
    (*(code *)(&PTR_FUN_14308d4a0)[lVar8])(param_11 + uVar16 * 4,param_4,lVar12,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    uVar13 = param_11 + uVar16 * 4;
    if (0 < (longlong)uVar15) {
      if (6 < (longlong)uVar15) {
        lVar18 = lVar19 * 4 + -4;
        if ((lVar18 <= (longlong)(uVar13 - param_1)) || (lVar18 <= (longlong)-(uVar13 - param_1))) {
          if ((longlong)uVar15 < 8) {
LAB_14090f371:
            uStack_88 = 0;
          }
          else {
            if ((longlong)uVar15 < 0xbd) {
              uStack_88 = uVar15 & 0xfffffffffffffff8;
              uVar10 = 0;
            }
            else {
              uVar10 = uVar13 & 0x1f;
              if (uVar10 != 0) {
                if ((uVar13 & 3) != 0) goto LAB_14090f371;
                uVar10 = 0x20 - uVar10 >> 2;
              }
              if ((longlong)uVar15 < (longlong)(uVar10 + 8)) goto LAB_14090f371;
              uStack_88 = uVar15 - (uVar15 - uVar10 & 7);
              uVar17 = 0;
              if (uVar10 != 0) {
                do {
                  *(undefined4 *)(uVar13 + uVar17 * 4) = *(undefined4 *)(param_1 + uVar17 * 4);
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar10);
              }
            }
            do {
              puVar1 = (undefined8 *)(param_1 + uVar10 * 4);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              puVar2 = (undefined8 *)(uVar13 + uVar10 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar4;
              puVar2[2] = uVar5;
              puVar2[3] = uVar6;
              uVar10 = uVar10 + 8;
            } while (uVar10 < uStack_88);
          }
          for (; uStack_88 < uVar15; uStack_88 = uStack_88 + 1) {
            *(undefined4 *)(uVar13 + uStack_88 * 4) = *(undefined4 *)(param_1 + uStack_88 * 4);
          }
          goto LAB_14090e736;
        }
      }
      lVar18 = 1;
      uVar10 = lVar19 - 1U >> 1;
      if (uVar10 != 0) {
        uVar17 = 0;
        do {
          uVar20 = uVar17;
          *(undefined4 *)(uVar13 + uVar20 * 8) = *(undefined4 *)(param_1 + uVar20 * 8);
          *(undefined4 *)(uVar13 + 4 + uVar20 * 8) = *(undefined4 *)(param_1 + 4 + uVar20 * 8);
          uVar17 = uVar20 + 1;
        } while (uVar17 < uVar10);
        lVar18 = uVar20 + 2 + uVar17;
      }
      if (lVar18 - 1U < lVar19 - 1U) {
        *(undefined4 *)(param_11 + ((uVar16 - 1) + lVar18) * 4) =
             *(undefined4 *)(param_1 + (lVar18 - 1U) * 4);
      }
    }
LAB_14090e736:
    if (uVar11 == 1) {
      if (0 < (longlong)uVar16) {
        uVar21 = *(undefined4 *)(param_11 + uVar16 * 4);
        if ((longlong)uVar16 < 0x10) {
LAB_14090f436:
          pcStack_80 = (code *)0x0;
        }
        else {
          if ((longlong)uVar16 < 0x1d) {
            pcStack_80 = (code *)(uVar16 & 0xfffffffffffffff0);
            uVar10 = 0;
          }
          else {
            uVar10 = param_11 & 0x1f;
            if (uVar10 != 0) {
              if ((param_11 & 3) != 0) goto LAB_14090f436;
              uVar10 = 0x20 - uVar10 >> 2;
            }
            if ((longlong)uVar16 < (longlong)(uVar10 + 0x10)) goto LAB_14090f436;
            pcStack_80 = (code *)(uVar16 - (uVar16 - uVar10 & 0xf));
            uVar17 = 0;
            if (uVar10 != 0) {
              do {
                *(undefined4 *)(param_11 + uVar17 * 4) = uVar21;
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar10);
            }
          }
          do {
            puVar3 = (undefined4 *)(param_11 + uVar10 * 4);
            *puVar3 = uVar21;
            puVar3[1] = uVar21;
            puVar3[2] = uVar21;
            puVar3[3] = uVar21;
            puVar3[4] = uVar21;
            puVar3[5] = uVar21;
            puVar3[6] = uVar21;
            puVar3[7] = uVar21;
            puVar3 = (undefined4 *)(param_11 + 0x20 + uVar10 * 4);
            *puVar3 = uVar21;
            puVar3[1] = uVar21;
            puVar3[2] = uVar21;
            puVar3[3] = uVar21;
            puVar3[4] = uVar21;
            puVar3[5] = uVar21;
            puVar3[6] = uVar21;
            puVar3[7] = uVar21;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < pcStack_80);
        }
        if ((longlong)pcStack_80 + 1U <= uVar16) {
          uVar10 = uVar16 - (longlong)pcStack_80;
          if ((longlong)uVar10 < 4) {
            uStack_70 = 0;
          }
          else {
            uStack_70 = uVar10 & 0xfffffffffffffffc;
            uVar17 = 0;
            do {
              puVar3 = (undefined4 *)(param_11 + (longlong)pcStack_80 * 4 + uVar17 * 4);
              *puVar3 = uVar21;
              puVar3[1] = uVar21;
              puVar3[2] = uVar21;
              puVar3[3] = uVar21;
              uVar17 = uVar17 + 4;
            } while (uVar17 < uStack_70);
          }
          if (uStack_70 < uVar10) {
            do {
              *(undefined4 *)(param_11 + (longlong)pcStack_80 * 4 + uStack_70 * 4) = uVar21;
              uStack_70 = uStack_70 + 1;
            } while (uStack_70 < uVar10);
          }
        }
      }
    }
    else if (uVar11 == 3) {
      if (0 < (longlong)uVar16) {
        uVar10 = 0;
        uStack_88 = 1;
        if (uVar16 >> 1 != 0) {
          lVar18 = param_11 + lVar19 * 4;
          uStack_88 = uVar10;
          do {
            uVar17 = uStack_88;
            *(undefined4 *)(param_11 + uVar17 * 8) = *(undefined4 *)((uVar10 - 4) + lVar18);
            lVar9 = uVar10 - 8;
            uVar10 = uVar10 - 8;
            *(undefined4 *)(param_11 + 4 + uVar17 * 8) = *(undefined4 *)(lVar9 + lVar18);
            uStack_88 = uVar17 + 1;
          } while (uStack_88 < uVar16 >> 1);
          uStack_88 = uVar17 + 2 + uStack_88;
        }
        uStack_88 = uStack_88 - 1;
        if (uStack_88 < uVar16) {
          *(undefined4 *)(param_11 + uStack_88 * 4) =
               *(undefined4 *)((param_11 - 4) + (lVar19 - uStack_88) * 4);
        }
      }
    }
    else if ((uVar11 == 6) && (0 < (longlong)uVar16)) {
      if ((longlong)uVar16 < 0x10) {
LAB_14090f3a0:
        pcStack_80 = (code *)0x0;
      }
      else {
        if ((longlong)uVar16 < 0x1d) {
          pcStack_80 = (code *)(uVar16 & 0xfffffffffffffff0);
          uVar10 = 0;
        }
        else {
          uVar10 = param_11 & 0x1f;
          if (uVar10 != 0) {
            if ((param_11 & 3) != 0) goto LAB_14090f3a0;
            uVar10 = 0x20 - uVar10 >> 2;
          }
          if ((longlong)uVar16 < (longlong)(uVar10 + 0x10)) goto LAB_14090f3a0;
          pcStack_80 = (code *)(uVar16 - (uVar16 - uVar10 & 0xf));
          uVar17 = 0;
          if (uVar10 != 0) {
            do {
              *(undefined4 *)(param_11 + uVar17 * 4) = uVar22;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar10);
          }
        }
        do {
          puVar3 = (undefined4 *)(param_11 + uVar10 * 4);
          *puVar3 = uVar22;
          puVar3[1] = uVar22;
          puVar3[2] = uVar22;
          puVar3[3] = uVar22;
          puVar3[4] = uVar22;
          puVar3[5] = uVar22;
          puVar3[6] = uVar22;
          puVar3[7] = uVar22;
          puVar3 = (undefined4 *)(param_11 + 0x20 + uVar10 * 4);
          *puVar3 = uVar22;
          puVar3[1] = uVar22;
          puVar3[2] = uVar22;
          puVar3[3] = uVar22;
          puVar3[4] = uVar22;
          puVar3[5] = uVar22;
          puVar3[6] = uVar22;
          puVar3[7] = uVar22;
          uVar10 = uVar10 + 0x10;
        } while (uVar10 < pcStack_80);
      }
      if ((longlong)pcStack_80 + 1U <= uVar16) {
        uVar10 = uVar16 - (longlong)pcStack_80;
        if ((longlong)uVar10 < 4) {
          uStack_70 = 0;
        }
        else {
          uStack_70 = uVar10 & 0xfffffffffffffffc;
          uVar17 = 0;
          do {
            puVar3 = (undefined4 *)(param_11 + (longlong)pcStack_80 * 4 + uVar17 * 4);
            *puVar3 = uVar22;
            puVar3[1] = uVar22;
            puVar3[2] = uVar22;
            puVar3[3] = uVar22;
            uVar17 = uVar17 + 4;
          } while (uVar17 < uStack_70);
        }
        if (uStack_70 < uVar10) {
          do {
            *(undefined4 *)(param_11 + (longlong)pcStack_80 * 4 + uStack_70 * 4) = uVar22;
            uStack_70 = uStack_70 + 1;
          } while (uStack_70 < uVar10);
        }
      }
    }
    pcStack_80 = (code *)(&PTR_FUN_14308d4a0)[lVar8];
    (*pcStack_80)(uVar13,param_4,uVar16,param_9,param_10);
    param_4 = param_4 + uVar16 * 4;
    param_1 = param_1 + uVar16 * 4;
    lVar12 = lVar12 - uVar16;
  }
  else {
    pcStack_80 = (code *)(&PTR_FUN_14308d4a0)[lVar8];
  }
  if ((param_7 & 0x80) != 0) {
    (*pcStack_80)(param_1,param_4,lVar12,param_9,param_10);
    return;
  }
  if ((longlong)uVar16 < lVar12) {
    lVar12 = lVar12 - uVar16;
    (*pcStack_80)(param_1,param_4,lVar12,param_9,param_10);
    param_4 = param_4 + lVar12 * 4;
    param_1 = param_1 + lVar12 * 4;
  }
  if (0 < (longlong)uVar15) {
    if (6 < (longlong)uVar15) {
      lVar12 = param_1 + uVar16 * -4;
      lVar8 = lVar19 * 4 + -4;
      if ((lVar8 <= (longlong)(param_11 - lVar12)) || (lVar8 <= (longlong)-(param_11 - lVar12))) {
        if ((longlong)uVar15 < 8) {
LAB_14090f3c1:
          uVar13 = 0;
        }
        else {
          if ((longlong)uVar15 < 0xbd) {
            uVar10 = 0;
            uVar13 = uVar15 & 0xfffffffffffffff8;
          }
          else {
            uVar10 = param_11 & 0x1f;
            if (uVar10 != 0) {
              if ((param_11 & 3) != 0) goto LAB_14090f3c1;
              uVar10 = 0x20 - uVar10 >> 2;
            }
            if ((longlong)uVar15 < (longlong)(uVar10 + 8)) goto LAB_14090f3c1;
            uVar17 = 0;
            uVar13 = uVar15 - (uVar15 - uVar10 & 7);
            if (uVar10 != 0) {
              do {
                *(undefined4 *)(param_11 + uVar17 * 4) = *(undefined4 *)(lVar12 + uVar17 * 4);
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar10);
            }
          }
          do {
            puVar1 = (undefined8 *)(lVar12 + uVar10 * 4);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar2 = (undefined8 *)(param_11 + uVar10 * 4);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            uVar10 = uVar10 + 8;
          } while (uVar10 < uVar13);
        }
        for (; uVar13 < uVar15; uVar13 = uVar13 + 1) {
          *(undefined4 *)(param_11 + uVar13 * 4) = *(undefined4 *)(lVar12 + uVar13 * 4);
        }
        goto LAB_14090ee08;
      }
    }
    lVar8 = 1;
    uVar15 = lVar19 - 1U >> 1;
    if (uVar15 != 0) {
      lVar8 = param_1 + uVar16 * -4;
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        *(undefined4 *)(param_11 + uVar10 * 8) = *(undefined4 *)(lVar8 + uVar10 * 8);
        *(undefined4 *)(param_11 + 4 + uVar10 * 8) = *(undefined4 *)(lVar8 + 4 + uVar10 * 8);
        uVar13 = uVar10 + 1;
      } while (uVar13 < uVar15);
      lVar8 = uVar10 + 2 + uVar13;
    }
    uVar15 = lVar8 - 1;
    if (uVar15 < lVar19 - 1U) {
      *(undefined4 *)(param_11 + uVar15 * 4) = *(undefined4 *)(param_1 + (uVar15 - uVar16) * 4);
    }
  }
LAB_14090ee08:
  if (uVar11 == 1) {
    if ((longlong)uVar16 < 1) goto LAB_14090f1bc;
    if (6 < (longlong)uVar16) {
      lVar8 = param_11 + lVar19 * 4;
      uVar15 = lVar8 - 4;
      lVar12 = uVar15 - (lVar8 + -8);
      if ((3 < lVar12) || ((longlong)(uVar16 * 4) <= -lVar12)) {
        uVar22 = *(undefined4 *)(lVar8 + -8);
        if ((longlong)uVar16 < 0x10) {
LAB_14090f3f9:
          uVar15 = 0;
        }
        else {
          if ((longlong)uVar16 < 0x1d) {
            uVar13 = 0;
            uVar15 = uVar16 & 0xfffffffffffffff0;
          }
          else {
            uVar13 = uVar15 & 0x1f;
            if (uVar13 != 0) {
              if ((uVar15 & 3) != 0) goto LAB_14090f3f9;
              uVar13 = 0x20 - uVar13 >> 2;
            }
            if ((longlong)uVar16 < (longlong)(uVar13 + 0x10)) goto LAB_14090f3f9;
            uVar10 = 0;
            uVar15 = uVar16 - (uVar16 - uVar13 & 0xf);
            if (uVar13 != 0) {
              do {
                *(undefined4 *)(lVar8 + -4 + uVar10 * 4) = uVar22;
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar13);
            }
          }
          do {
            puVar3 = (undefined4 *)(lVar8 + -4 + uVar13 * 4);
            *puVar3 = uVar22;
            puVar3[1] = uVar22;
            puVar3[2] = uVar22;
            puVar3[3] = uVar22;
            puVar3[4] = uVar22;
            puVar3[5] = uVar22;
            puVar3[6] = uVar22;
            puVar3[7] = uVar22;
            puVar3 = (undefined4 *)(lVar8 + 0x1c + uVar13 * 4);
            *puVar3 = uVar22;
            puVar3[1] = uVar22;
            puVar3[2] = uVar22;
            puVar3[3] = uVar22;
            puVar3[4] = uVar22;
            puVar3[5] = uVar22;
            puVar3[6] = uVar22;
            puVar3[7] = uVar22;
            uVar13 = uVar13 + 0x10;
          } while (uVar13 < uVar15);
        }
        if (uVar15 + 1 <= uVar16) {
          uVar13 = uVar16 - uVar15;
          if ((longlong)uVar13 < 4) {
            uVar10 = 0;
          }
          else {
            uVar17 = 0;
            uVar10 = uVar13 & 0xfffffffffffffffc;
            do {
              puVar3 = (undefined4 *)(lVar8 + uVar15 * 4 + -4 + uVar17 * 4);
              *puVar3 = uVar22;
              puVar3[1] = uVar22;
              puVar3[2] = uVar22;
              puVar3[3] = uVar22;
              uVar17 = uVar17 + 4;
            } while (uVar17 < uVar10);
          }
          if (uVar10 < uVar13) {
            do {
              *(undefined4 *)(lVar8 + uVar15 * 4 + -4 + uVar10 * 4) = uVar22;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar13);
          }
        }
        goto LAB_14090f1bc;
      }
    }
    lVar8 = 1;
    if (uVar16 >> 1 != 0) {
      lVar8 = param_11 + lVar19 * 4;
      uVar15 = 0;
      do {
        uVar13 = uVar15;
        *(undefined4 *)(lVar8 + -4 + uVar13 * 8) = *(undefined4 *)(lVar8 + -8);
        *(undefined4 *)(lVar8 + uVar13 * 8) = *(undefined4 *)(lVar8 + -8);
        uVar15 = uVar13 + 1;
      } while (uVar15 < uVar16 >> 1);
      lVar8 = uVar13 + 2 + uVar15;
    }
    if (lVar8 - 1U < uVar16) {
      *(undefined4 *)((param_11 - 4) + (lVar19 + -1 + lVar8) * 4) =
           *(undefined4 *)((param_11 - 8) + lVar19 * 4);
    }
    goto LAB_14090f1bc;
  }
  if (uVar11 == 3) {
    if (0 < (longlong)uVar16) {
      lVar8 = 1;
      lVar12 = 0;
      if (uVar16 >> 1 != 0) {
        lVar8 = param_11 + lVar19 * 4;
        uVar15 = 0;
        do {
          uVar13 = uVar15;
          *(undefined4 *)(lVar8 + -4 + uVar13 * 8) = *(undefined4 *)(lVar12 + -0xc + lVar8);
          lVar18 = lVar12 + -0x10;
          lVar12 = lVar12 + -8;
          *(undefined4 *)(lVar8 + uVar13 * 8) = *(undefined4 *)(lVar18 + lVar8);
          uVar15 = uVar13 + 1;
        } while (uVar15 < uVar16 >> 1);
        lVar8 = uVar13 + 2 + uVar15;
      }
      if (lVar8 - 1U < uVar16) {
        *(undefined4 *)((param_11 - 4) + (lVar19 + -1 + lVar8) * 4) =
             *(undefined4 *)((param_11 - 0xc) + (lVar19 - (lVar8 - 1U)) * 4);
      }
    }
    goto LAB_14090f1bc;
  }
  if ((uVar11 != 6) || ((longlong)uVar16 < 1)) goto LAB_14090f1bc;
  if ((longlong)uVar16 < 0x10) {
LAB_14090f3dd:
    uVar13 = 0;
  }
  else {
    lVar8 = param_11 + lVar19 * 4;
    if ((longlong)uVar16 < 0x1d) {
      uVar15 = 0;
      uVar13 = uVar16 & 0xfffffffffffffff0;
    }
    else {
      uVar15 = lVar8 - 4U & 0x1f;
      if (uVar15 != 0) {
        if ((lVar8 - 4U & 3) != 0) goto LAB_14090f3dd;
        uVar15 = 0x20 - uVar15 >> 2;
      }
      if ((longlong)uVar16 < (longlong)(uVar15 + 0x10)) goto LAB_14090f3dd;
      uVar10 = 0;
      uVar13 = uVar16 - (uVar16 - uVar15 & 0xf);
      if (uVar15 != 0) {
        do {
          *(undefined4 *)(lVar8 + -4 + uVar10 * 4) = uVar22;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar15);
      }
    }
    do {
      puVar3 = (undefined4 *)(lVar8 + -4 + uVar15 * 4);
      *puVar3 = uVar22;
      puVar3[1] = uVar22;
      puVar3[2] = uVar22;
      puVar3[3] = uVar22;
      puVar3[4] = uVar22;
      puVar3[5] = uVar22;
      puVar3[6] = uVar22;
      puVar3[7] = uVar22;
      puVar3 = (undefined4 *)(lVar8 + 0x1c + uVar15 * 4);
      *puVar3 = uVar22;
      puVar3[1] = uVar22;
      puVar3[2] = uVar22;
      puVar3[3] = uVar22;
      puVar3[4] = uVar22;
      puVar3[5] = uVar22;
      puVar3[6] = uVar22;
      puVar3[7] = uVar22;
      uVar15 = uVar15 + 0x10;
    } while (uVar15 < uVar13);
  }
  if (uVar13 + 1 <= uVar16) {
    uVar15 = uVar16 - uVar13;
    if ((longlong)uVar15 < 4) {
      uVar10 = 0;
    }
    else {
      uVar17 = 0;
      uVar10 = uVar15 & 0xfffffffffffffffc;
      do {
        puVar3 = (undefined4 *)(param_11 + (lVar19 + uVar13) * 4 + -4 + uVar17 * 4);
        *puVar3 = uVar22;
        puVar3[1] = uVar22;
        puVar3[2] = uVar22;
        puVar3[3] = uVar22;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar10);
    }
    if (uVar10 < uVar15) {
      do {
        *(undefined4 *)(param_11 + (lVar19 + uVar13) * 4 + -4 + uVar10 * 4) = uVar22;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar15);
    }
  }
LAB_14090f1bc:
  (*pcStack_80)(param_11 + uVar16 * 4,param_4,uVar16,param_9,param_10);
  return;
}

