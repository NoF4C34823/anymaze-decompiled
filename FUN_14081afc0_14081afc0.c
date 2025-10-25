
void FUN_14081afc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined4 uVar26;
  undefined1 auVar27 [16];
  ulonglong uStack_88;
  code *pcStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  
  param_1 = param_1 + param_2 * param_3;
  lVar19 = (longlong)param_10;
  uVar12 = param_7 & 0xf;
  auVar27 = ZEXT816(0) << 0x40;
  lVar8 = (longlong)param_6;
  uVar16 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308c7a0)[lVar8])(param_1,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar12 == 6) {
    auVar27 = ZEXT416(*param_8);
  }
  lVar13 = *param_5;
  uVar15 = lVar19 - 1;
  uVar26 = auVar27._0_4_;
  if (lVar13 < (longlong)uVar15) {
    lVar19 = -uVar16;
    lVar18 = 0;
    if (lVar19 < (longlong)(uVar16 + lVar13)) {
      uVar14 = param_7 & 0x80;
      pcStack_80._0_4_ = param_7 & 0x40;
      do {
        lVar9 = lVar19;
        if (((lVar19 < 0) || (lVar13 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar12 != 6) {
            if (uVar12 == 1) {
              if (lVar19 < 0) {
                lVar9 = 0;
                if ((uint)pcStack_80 != 0) {
                  lVar9 = lVar19;
                }
              }
              else if (uVar14 == 0) {
                lVar9 = lVar13 + -1;
              }
            }
            else if (uVar12 == 3) {
              if (lVar13 < 2) {
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
              else if ((lVar19 < 0) || (lVar13 <= lVar19)) {
                if (lVar19 < 0) goto LAB_14081bec0;
                while (uVar14 == 0) {
                  for (lVar9 = (lVar13 + -1) * 2 - lVar9; lVar9 < 0; lVar9 = -lVar9) {
LAB_14081bec0:
                    if ((uint)pcStack_80 != 0) goto LAB_14081bd2f;
                  }
                  if (lVar9 < lVar13) break;
                }
              }
            }
            goto LAB_14081bd2f;
          }
          uVar7 = (uint)pcStack_80;
          if (-1 < lVar19) {
            uVar7 = uVar14;
          }
          uVar21 = uVar26;
          if (uVar7 != 0) goto LAB_14081bd2f;
        }
        else {
LAB_14081bd2f:
          uVar21 = *(undefined4 *)(param_1 + lVar9 * 4);
        }
        lVar19 = lVar19 + 1;
        *(undefined4 *)(param_11 + lVar18 * 4) = uVar21;
        lVar18 = lVar18 + 1;
      } while (lVar19 < (longlong)(uVar16 + lVar13));
    }
    (*(code *)(&PTR_FUN_14308c7a0)[lVar8])(param_11 + uVar16 * 4,param_4,lVar13,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    uVar10 = param_11 + uVar16 * 4;
    if (0 < (longlong)uVar15) {
      if (6 < (longlong)uVar15) {
        lVar18 = lVar19 * 4 + -4;
        if ((lVar18 <= (longlong)(uVar10 - param_1)) || (lVar18 <= (longlong)-(uVar10 - param_1))) {
          if ((longlong)uVar15 < 8) {
LAB_14081bdb1:
            uStack_88 = 0;
          }
          else {
            uVar11 = uVar10 & 0x1f;
            if (uVar11 != 0) {
              if ((uVar10 & 3) != 0) goto LAB_14081bdb1;
              uVar11 = 0x20 - uVar11 >> 2;
            }
            if ((longlong)uVar15 < (longlong)(uVar11 + 8)) goto LAB_14081bdb1;
            uStack_88 = uVar15 - (uVar15 - uVar11 & 7);
            uVar17 = 0;
            if (uVar11 != 0) {
              do {
                *(undefined4 *)(uVar10 + uVar17 * 4) = *(undefined4 *)(param_1 + uVar17 * 4);
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar11);
            }
            do {
              puVar1 = (undefined8 *)(param_1 + uVar11 * 4);
              uVar4 = puVar1[1];
              puVar2 = (undefined8 *)(param_1 + 0x10 + uVar11 * 4);
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
              puVar2 = (undefined8 *)(uVar10 + uVar11 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar4;
              puVar2[2] = uVar5;
              puVar2[3] = uVar6;
              uVar11 = uVar11 + 8;
            } while (uVar11 < uStack_88);
          }
          for (; uStack_88 < uVar15; uStack_88 = uStack_88 + 1) {
            *(undefined4 *)(uVar10 + uStack_88 * 4) = *(undefined4 *)(param_1 + uStack_88 * 4);
          }
          goto LAB_14081b1f6;
        }
      }
      lVar18 = 1;
      uVar11 = lVar19 - 1U >> 1;
      if (uVar11 != 0) {
        uVar17 = 0;
        do {
          uVar20 = uVar17;
          *(undefined4 *)(uVar10 + uVar20 * 8) = *(undefined4 *)(param_1 + uVar20 * 8);
          *(undefined4 *)(uVar10 + 4 + uVar20 * 8) = *(undefined4 *)(param_1 + 4 + uVar20 * 8);
          uVar17 = uVar20 + 1;
        } while (uVar17 < uVar11);
        lVar18 = uVar20 + 2 + uVar17;
      }
      if (lVar18 - 1U < lVar19 - 1U) {
        *(undefined4 *)(param_11 + ((uVar16 - 1) + lVar18) * 4) =
             *(undefined4 *)(param_1 + (lVar18 - 1U) * 4);
      }
    }
LAB_14081b1f6:
    uStack_78 = uVar16;
    if (uVar12 == 1) {
      if ((longlong)uVar16 < 1) goto LAB_14081b653;
      uVar14 = *(uint *)(param_11 + uVar16 * 4);
      if ((longlong)uVar16 < 0x10) {
LAB_14081be5a:
        pcStack_80 = (code *)0x0;
        if (uVar16 == 0) goto LAB_14081b653;
        uStack_70 = 0;
      }
      else {
        uVar11 = param_11 & 0x1f;
        if (uVar11 != 0) {
          if ((param_11 & 3) != 0) goto LAB_14081be5a;
          uVar11 = 0x20 - uVar11 >> 2;
        }
        if ((longlong)uVar16 < (longlong)(uVar11 + 0x10)) goto LAB_14081be5a;
        pcStack_80 = (code *)(uVar16 - (uVar16 - uVar11 & 0xf));
        uVar17 = 0;
        if (uVar11 != 0) {
          do {
            *(uint *)(param_11 + uVar17 * 4) = uVar14;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar11);
        }
        auVar3 = vshufps_avx(ZEXT416(uVar14),ZEXT416(uVar14),0);
        auVar23._16_16_ = auVar3;
        auVar23._0_16_ = auVar3;
        do {
          *(undefined1 (*) [32])(param_11 + uVar11 * 4) = auVar23;
          *(undefined1 (*) [32])(param_11 + 0x20 + uVar11 * 4) = auVar23;
          uVar11 = uVar11 + 0x10;
        } while (uVar11 < pcStack_80);
        if (uVar16 < (longlong)pcStack_80 + 1U) goto LAB_14081b653;
        uStack_78 = uVar16 - (longlong)pcStack_80;
        if ((longlong)uStack_78 < 4) {
          uStack_70 = 0;
        }
        else {
          uStack_70 = uStack_78 & 0xfffffffffffffffc;
          uVar11 = 0;
          do {
            *(undefined1 (*) [16])(param_11 + (longlong)pcStack_80 * 4 + uVar11 * 4) = auVar3;
            uVar11 = uVar11 + 4;
          } while (uVar11 < uStack_70);
        }
      }
      if (uStack_70 < uStack_78) {
        do {
          *(uint *)(param_11 + (longlong)pcStack_80 * 4 + uStack_70 * 4) = uVar14;
          uStack_70 = uStack_70 + 1;
        } while (uStack_70 < uStack_78);
      }
    }
    else if (uVar12 == 3) {
      if (0 < (longlong)uVar16) {
        uVar11 = 0;
        uStack_88 = 1;
        if (uVar16 >> 1 != 0) {
          lVar18 = param_11 + lVar19 * 4;
          uStack_88 = uVar11;
          do {
            uVar17 = uStack_88;
            *(undefined4 *)(param_11 + uVar17 * 8) = *(undefined4 *)((uVar11 - 4) + lVar18);
            lVar9 = uVar11 - 8;
            uVar11 = uVar11 - 8;
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
    else if ((uVar12 == 6) && (0 < (longlong)uVar16)) {
      if ((longlong)uVar16 < 0x10) {
LAB_14081bdcd:
        pcStack_80 = (code *)0x0;
        if (uVar16 == 0) goto LAB_14081b653;
        uStack_70 = 0;
      }
      else {
        uVar11 = param_11 & 0x1f;
        if (uVar11 != 0) {
          if ((param_11 & 3) != 0) goto LAB_14081bdcd;
          uVar11 = 0x20 - uVar11 >> 2;
        }
        if ((longlong)uVar16 < (longlong)(uVar11 + 0x10)) goto LAB_14081bdcd;
        pcStack_80 = (code *)(uVar16 - (uVar16 - uVar11 & 0xf));
        uVar17 = 0;
        if (uVar11 != 0) {
          do {
            *(undefined4 *)(param_11 + uVar17 * 4) = uVar26;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar11);
        }
        auVar3 = vshufps_avx(auVar27,auVar27,0);
        auVar22._16_16_ = auVar3;
        auVar22._0_16_ = auVar3;
        do {
          *(undefined1 (*) [32])(param_11 + uVar11 * 4) = auVar22;
          *(undefined1 (*) [32])(param_11 + 0x20 + uVar11 * 4) = auVar22;
          uVar11 = uVar11 + 0x10;
        } while (uVar11 < pcStack_80);
        if (uVar16 < (longlong)pcStack_80 + 1U) goto LAB_14081b653;
        uStack_78 = uVar16 - (longlong)pcStack_80;
        if ((longlong)uStack_78 < 4) {
          uStack_70 = 0;
        }
        else {
          uStack_70 = uStack_78 & 0xfffffffffffffffc;
          auVar3 = vshufps_avx(auVar27,auVar27,0);
          uVar11 = 0;
          do {
            *(undefined1 (*) [16])(param_11 + (longlong)pcStack_80 * 4 + uVar11 * 4) = auVar3;
            uVar11 = uVar11 + 4;
          } while (uVar11 < uStack_70);
        }
      }
      if (uStack_70 < uStack_78) {
        do {
          *(undefined4 *)(param_11 + (longlong)pcStack_80 * 4 + uStack_70 * 4) = uVar26;
          uStack_70 = uStack_70 + 1;
        } while (uStack_70 < uStack_78);
      }
    }
LAB_14081b653:
    pcStack_80 = (code *)(&PTR_FUN_14308c7a0)[lVar8];
    (*pcStack_80)(uVar10,param_4,uVar16,param_9,param_10);
    param_4 = param_4 + uVar16 * 4;
    param_1 = param_1 + uVar16 * 4;
    lVar13 = lVar13 - uVar16;
  }
  else {
    pcStack_80 = (code *)(&PTR_FUN_14308c7a0)[lVar8];
  }
  if ((param_7 & 0x80) != 0) {
    (*pcStack_80)(param_1,param_4,lVar13,param_9,param_10);
    return;
  }
  if ((longlong)uVar16 < lVar13) {
    lVar13 = lVar13 - uVar16;
    (*pcStack_80)(param_1,param_4,lVar13,param_9,param_10);
    param_4 = param_4 + lVar13 * 4;
    param_1 = param_1 + lVar13 * 4;
  }
  if (0 < (longlong)uVar15) {
    if (6 < (longlong)uVar15) {
      lVar13 = param_1 + uVar16 * -4;
      lVar8 = lVar19 * 4 + -4;
      if ((lVar8 <= (longlong)(param_11 - lVar13)) || (lVar8 <= (longlong)-(param_11 - lVar13))) {
        if ((longlong)uVar15 < 8) {
LAB_14081bdf1:
          uVar11 = 0;
        }
        else {
          uVar10 = param_11 & 0x1f;
          if (uVar10 != 0) {
            if ((param_11 & 3) != 0) goto LAB_14081bdf1;
            uVar10 = 0x20 - uVar10 >> 2;
          }
          if ((longlong)uVar15 < (longlong)(uVar10 + 8)) goto LAB_14081bdf1;
          uVar17 = 0;
          uVar11 = uVar15 - (uVar15 - uVar10 & 7);
          if (uVar10 != 0) {
            do {
              *(undefined4 *)(param_11 + uVar17 * 4) = *(undefined4 *)(lVar13 + uVar17 * 4);
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar10);
          }
          do {
            puVar1 = (undefined8 *)(lVar13 + uVar10 * 4);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar13 + 0x10 + uVar10 * 4);
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2 = (undefined8 *)(param_11 + uVar10 * 4);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            uVar10 = uVar10 + 8;
          } while (uVar10 < uVar11);
        }
        for (; uVar11 < uVar15; uVar11 = uVar11 + 1) {
          *(undefined4 *)(param_11 + uVar11 * 4) = *(undefined4 *)(lVar13 + uVar11 * 4);
        }
        goto LAB_14081b888;
      }
    }
    lVar8 = 1;
    uVar15 = lVar19 - 1U >> 1;
    if (uVar15 != 0) {
      lVar8 = param_1 + uVar16 * -4;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        *(undefined4 *)(param_11 + uVar11 * 8) = *(undefined4 *)(lVar8 + uVar11 * 8);
        *(undefined4 *)(param_11 + 4 + uVar11 * 8) = *(undefined4 *)(lVar8 + 4 + uVar11 * 8);
        uVar10 = uVar11 + 1;
      } while (uVar10 < uVar15);
      lVar8 = uVar11 + 2 + uVar10;
    }
    uVar15 = lVar8 - 1;
    if (uVar15 < lVar19 - 1U) {
      *(undefined4 *)(param_11 + uVar15 * 4) = *(undefined4 *)(param_1 + (uVar15 - uVar16) * 4);
    }
  }
LAB_14081b888:
  if (uVar12 == 1) {
    if ((longlong)uVar16 < 1) goto LAB_14081bbfc;
    if (6 < (longlong)uVar16) {
      lVar8 = param_11 + lVar19 * 4;
      uVar15 = lVar8 - 4;
      lVar13 = uVar15 - (lVar8 + -8);
      if ((3 < lVar13) || ((longlong)(uVar16 * 4) <= -lVar13)) {
        uVar12 = *(uint *)(lVar8 + -8);
        if ((longlong)uVar16 < 0x10) {
LAB_14081be1c:
          uVar15 = 0;
          if (uVar16 == 0) goto LAB_14081bbfc;
          uVar11 = 0;
          uVar10 = uVar16;
        }
        else {
          uVar10 = uVar15 & 0x1f;
          if (uVar10 != 0) {
            if ((uVar15 & 3) != 0) goto LAB_14081be1c;
            uVar10 = 0x20 - uVar10 >> 2;
          }
          if ((longlong)uVar16 < (longlong)(uVar10 + 0x10)) goto LAB_14081be1c;
          uVar11 = 0;
          uVar15 = uVar16 - (uVar16 - uVar10 & 0xf);
          if (uVar10 != 0) {
            do {
              *(uint *)(lVar8 + -4 + uVar11 * 4) = uVar12;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar10);
          }
          auVar27 = vshufps_avx(ZEXT416(uVar12),ZEXT416(uVar12),0);
          auVar25._16_16_ = auVar27;
          auVar25._0_16_ = auVar27;
          do {
            *(undefined1 (*) [32])(lVar8 + -4 + uVar10 * 4) = auVar25;
            *(undefined1 (*) [32])(lVar8 + 0x1c + uVar10 * 4) = auVar25;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < uVar15);
          if (uVar16 < uVar15 + 1) goto LAB_14081bbfc;
          uVar10 = uVar16 - uVar15;
          if ((longlong)uVar10 < 4) {
            uVar11 = 0;
          }
          else {
            uVar17 = 0;
            uVar11 = uVar10 & 0xfffffffffffffffc;
            do {
              *(undefined1 (*) [16])(lVar8 + uVar15 * 4 + -4 + uVar17 * 4) = auVar27;
              uVar17 = uVar17 + 4;
            } while (uVar17 < uVar11);
          }
        }
        if (uVar11 < uVar10) {
          do {
            *(uint *)(lVar8 + uVar15 * 4 + -4 + uVar11 * 4) = uVar12;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
        }
        goto LAB_14081bbfc;
      }
    }
    lVar8 = 1;
    if (uVar16 >> 1 != 0) {
      lVar8 = param_11 + lVar19 * 4;
      uVar15 = 0;
      do {
        uVar10 = uVar15;
        *(undefined4 *)(lVar8 + -4 + uVar10 * 8) = *(undefined4 *)(lVar8 + -8);
        *(undefined4 *)(lVar8 + uVar10 * 8) = *(undefined4 *)(lVar8 + -8);
        uVar15 = uVar10 + 1;
      } while (uVar15 < uVar16 >> 1);
      lVar8 = uVar10 + 2 + uVar15;
    }
    if (lVar8 - 1U < uVar16) {
      *(undefined4 *)((param_11 - 4) + (lVar19 + -1 + lVar8) * 4) =
           *(undefined4 *)((param_11 - 8) + lVar19 * 4);
    }
    goto LAB_14081bbfc;
  }
  if (uVar12 == 3) {
    if (0 < (longlong)uVar16) {
      lVar8 = 1;
      lVar13 = 0;
      if (uVar16 >> 1 != 0) {
        lVar8 = param_11 + lVar19 * 4;
        uVar15 = 0;
        do {
          uVar10 = uVar15;
          *(undefined4 *)(lVar8 + -4 + uVar10 * 8) = *(undefined4 *)(lVar13 + -0xc + lVar8);
          lVar18 = lVar13 + -0x10;
          lVar13 = lVar13 + -8;
          *(undefined4 *)(lVar8 + uVar10 * 8) = *(undefined4 *)(lVar18 + lVar8);
          uVar15 = uVar10 + 1;
        } while (uVar15 < uVar16 >> 1);
        lVar8 = uVar10 + 2 + uVar15;
      }
      if (lVar8 - 1U < uVar16) {
        *(undefined4 *)((param_11 - 4) + (lVar19 + -1 + lVar8) * 4) =
             *(undefined4 *)((param_11 - 0xc) + (lVar19 - (lVar8 - 1U)) * 4);
      }
    }
    goto LAB_14081bbfc;
  }
  if ((uVar12 != 6) || ((longlong)uVar16 < 1)) goto LAB_14081bbfc;
  if ((longlong)uVar16 < 0x10) {
LAB_14081bdff:
    uVar10 = 0;
    if (uVar16 == 0) goto LAB_14081bbfc;
    uVar11 = 0;
    uVar15 = uVar16;
  }
  else {
    lVar8 = param_11 + lVar19 * 4;
    uVar15 = lVar8 - 4U & 0x1f;
    if (uVar15 != 0) {
      if ((lVar8 - 4U & 3) != 0) goto LAB_14081bdff;
      uVar15 = 0x20 - uVar15 >> 2;
    }
    if ((longlong)uVar16 < (longlong)(uVar15 + 0x10)) goto LAB_14081bdff;
    uVar11 = 0;
    uVar10 = uVar16 - (uVar16 - uVar15 & 0xf);
    if (uVar15 != 0) {
      do {
        *(int *)(lVar8 + -4 + uVar11 * 4) = auVar27._0_4_;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar15);
    }
    auVar3 = vshufps_avx(auVar27,auVar27,0);
    auVar24._16_16_ = auVar3;
    auVar24._0_16_ = auVar3;
    do {
      *(undefined1 (*) [32])(lVar8 + -4 + uVar15 * 4) = auVar24;
      *(undefined1 (*) [32])(lVar8 + 0x1c + uVar15 * 4) = auVar24;
      uVar15 = uVar15 + 0x10;
    } while (uVar15 < uVar10);
    if (uVar16 < uVar10 + 1) goto LAB_14081bbfc;
    uVar15 = uVar16 - uVar10;
    if ((longlong)uVar15 < 4) {
      uVar11 = 0;
    }
    else {
      auVar3 = vshufps_avx(auVar27,auVar27,0);
      uVar17 = 0;
      uVar11 = uVar15 & 0xfffffffffffffffc;
      do {
        *(undefined1 (*) [16])(lVar8 + uVar10 * 4 + -4 + uVar17 * 4) = auVar3;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar11);
    }
  }
  if (uVar11 < uVar15) {
    do {
      *(int *)(param_11 + (lVar19 + uVar10) * 4 + -4 + uVar11 * 4) = auVar27._0_4_;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar15);
  }
LAB_14081bbfc:
  (*pcStack_80)(param_11 + uVar16 * 4,param_4,uVar16,param_9,param_10);
  return;
}

