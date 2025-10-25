
void FUN_14066bba0(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte *pbVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar26;
  longlong lStack_78;
  
  param_2 = param_2 * param_3;
  lVar12 = (longlong)param_10;
  lVar5 = (longlong)param_6;
  uVar21 = param_7 & 0xf;
  pbVar20 = (byte *)(param_1 + param_2);
  uVar9 = 0;
  uVar19 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x00014066cc77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b6c0 + lVar5 * 8))(pbVar20,param_4,*param_5);
    return;
  }
  if (uVar21 == 6) {
    uVar9 = (uint)*param_8;
  }
  lVar22 = *param_5;
  uVar18 = lVar12 - 1;
  bVar13 = (byte)uVar9;
  if (lVar22 < (longlong)uVar18) {
    lVar12 = -uVar19;
    lVar14 = 0;
    if (lVar12 < (longlong)(uVar19 + lVar22)) {
      uVar11 = param_7 & 0x80;
      uVar9 = param_7 & 0x40;
      do {
        lVar6 = lVar12;
        if (((lVar12 < 0) || (lVar22 <= lVar12)) && (param_7 != 0xf0)) {
          if (uVar21 != 6) {
            if (uVar21 == 1) {
              if (lVar12 < 0) {
                lVar6 = 0;
                if (uVar9 != 0) {
                  lVar6 = lVar12;
                }
              }
              else {
                lVar6 = lVar22 + -1;
                if (uVar11 != 0) {
                  lVar6 = lVar12;
                }
              }
            }
            else if (uVar21 == 3) {
              if (lVar22 < 2) {
                if (lVar12 < 0) {
                  if ((uVar9 == 0) && (lVar6 = -lVar12, uVar11 == 0)) {
                    lVar6 = 0;
                  }
                }
                else if (((0 < lVar12) && (uVar11 == 0)) && (lVar6 = -lVar12, uVar9 == 0)) {
                  lVar6 = 0;
                }
              }
              else if ((lVar12 < 0) || (lVar22 <= lVar12)) {
                if (lVar12 < 0) goto LAB_14066cc00;
                while (uVar11 == 0) {
                  for (lVar6 = (lVar22 + -1) * 2 - lVar6; lVar6 < 0; lVar6 = -lVar6) {
LAB_14066cc00:
                    if (uVar9 != 0) goto LAB_14066cb03;
                  }
                  if (lVar6 < lVar22) break;
                }
              }
            }
            goto LAB_14066cb03;
          }
          uVar17 = uVar9;
          if (-1 < lVar12) {
            uVar17 = uVar11;
          }
          bVar16 = bVar13;
          if (uVar17 != 0) goto LAB_14066cb03;
        }
        else {
LAB_14066cb03:
          bVar16 = pbVar20[lVar6];
        }
        lVar12 = lVar12 + 1;
        *(byte *)(lVar14 + param_11) = bVar16;
        lVar14 = lVar14 + 1;
      } while (lVar12 < (longlong)(uVar19 + lVar22));
    }
                    /* WARNING: Could not recover jumptable at 0x00014066cb63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b6c0 + lVar5 * 8))(param_11 + uVar19,param_4,lVar22,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar19 == 1) {
      bVar16 = *pbVar20;
      bVar2 = pbVar20[1];
      if (uVar21 == 1) {
        uVar11 = (uint)bVar2 + (uint)bVar16;
      }
      else if (uVar21 == 3) {
        uVar11 = (uint)bVar2 * 2;
      }
      else {
        uVar11 = (uint)bVar2;
        if (uVar21 == 6) {
          uVar11 = bVar2 + uVar9;
        }
      }
      in_XMM0 = ZEXT416((uint)((float)uVar11 * *param_9));
      lVar22 = lVar22 + -1;
      pbVar20 = (byte *)(param_1 + 1 + param_2);
      *param_4 = (float)bVar16 * param_9[1] + (float)uVar11 * *param_9;
      param_4 = param_4 + 1;
    }
    else if (uVar19 == 2) {
      uVar11 = (uint)pbVar20[2];
      bVar16 = *pbVar20;
      bVar2 = pbVar20[1];
      bVar3 = pbVar20[3];
      uVar17 = (uint)bVar2;
      if (uVar21 == 1) {
        uVar15 = (uint)bVar16;
        *param_4 = (float)uVar15 * param_9[2] + (float)(uVar17 + uVar15) * param_9[1] +
                   *param_9 * (float)(uVar11 + uVar15);
        fVar26 = (float)uVar17 * param_9[2] + param_9[1] * (float)(uVar11 + uVar15) +
                 (float)(uVar15 + bVar3) * *param_9;
        in_XMM0 = ZEXT416((uint)fVar26);
        param_4[1] = fVar26;
      }
      else if (uVar21 == 3) {
        fVar26 = (float)((uint)bVar2 * 2) * param_9[1];
        in_XMM0 = ZEXT416((uint)fVar26);
        *param_4 = (float)bVar16 * param_9[2] + fVar26 + (float)(uVar11 * 2) * *param_9;
        param_4[1] = (float)bVar2 * param_9[2] + (float)(bVar16 + uVar11) * param_9[1] +
                     (float)((uint)bVar3 + (uint)bVar2) * *param_9;
      }
      else if (uVar21 == 6) {
        fVar26 = (float)(uVar11 + uVar9) * *param_9;
        in_XMM0 = ZEXT416((uint)fVar26);
        *param_4 = (float)bVar16 * param_9[2] + fVar26 + (float)(uVar17 + uVar9) * param_9[1];
        param_4[1] = (float)uVar17 * param_9[2] + (float)(bVar16 + uVar11) * param_9[1] +
                     (float)(bVar3 + uVar9) * *param_9;
      }
      param_4 = param_4 + 2;
      pbVar20 = (byte *)(param_1 + 2 + param_2);
      lVar22 = lVar22 + -2;
    }
    else {
      if (0 < (longlong)uVar18) {
        if (6 < (longlong)uVar18) {
          lVar14 = (param_11 + uVar19) - (longlong)pbVar20;
          if ((lVar12 + -1 <= lVar14) || (lVar12 + -1 <= -lVar14)) {
            uVar7 = uVar19 + param_11;
            if ((longlong)uVar18 < 0x10) {
LAB_14066cb77:
              uVar23 = 0;
            }
            else {
              uVar8 = uVar7 & 0xf;
              if (uVar8 != 0) {
                uVar8 = 0x10 - uVar8;
              }
              if ((longlong)uVar18 < (longlong)(uVar8 + 0x10)) goto LAB_14066cb77;
              uVar23 = uVar18 - (uVar18 - uVar8 & 0xf);
              uVar10 = 0;
              if (uVar8 != 0) {
                do {
                  *(byte *)(uVar10 + uVar7) = pbVar20[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar8);
              }
              if (((ulonglong)(pbVar20 + uVar8) & 0xf) == 0) {
                do {
                  uVar25 = *(undefined8 *)(pbVar20 + uVar8 + 8);
                  *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(pbVar20 + uVar8);
                  ((undefined8 *)(uVar8 + uVar7))[1] = uVar25;
                  uVar8 = uVar8 + 0x10;
                } while (uVar8 < uVar23);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar20 + uVar8));
                  *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
                  uVar8 = uVar8 + 0x10;
                } while (uVar8 < uVar23);
              }
            }
            for (; uVar23 < uVar18; uVar23 = uVar23 + 1) {
              *(byte *)(uVar23 + uVar7) = pbVar20[uVar23];
            }
            goto LAB_14066c041;
          }
        }
        lVar6 = 1;
        lVar14 = uVar19 + param_11;
        uVar8 = lVar12 - 1U >> 1;
        uVar7 = 0;
        if (uVar8 != 0) {
          do {
            uVar23 = uVar7;
            *(byte *)(lVar14 + uVar23 * 2) = pbVar20[uVar23 * 2];
            *(byte *)(lVar14 + 1 + uVar23 * 2) = pbVar20[uVar23 * 2 + 1];
            uVar7 = uVar23 + 1;
          } while (uVar7 < uVar8);
          lVar6 = uVar23 + 2 + uVar7;
        }
        uVar7 = lVar6 - 1;
        if (uVar7 < lVar12 - 1U) {
          *(byte *)(lVar14 + uVar7) = pbVar20[uVar7];
        }
      }
LAB_14066c041:
      lStack_78 = uVar19 + param_11;
      if (uVar21 == 1) {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 7) {
            lVar14 = 1;
            uVar7 = 0;
            if (uVar19 >> 1 != 0) {
              do {
                uVar8 = uVar7;
                *(undefined1 *)(param_11 + uVar8 * 2) = *(undefined1 *)(param_11 + uVar19);
                *(undefined1 *)(param_11 + 1 + uVar8 * 2) = *(undefined1 *)(param_11 + uVar19);
                uVar7 = uVar8 + 1;
              } while (uVar7 < uVar19 >> 1);
              lVar14 = uVar8 + 2 + uVar7;
            }
            if (lVar14 - 1U < uVar19) {
              *(undefined1 *)((lVar14 - 1U) + param_11) = *(undefined1 *)(param_11 + uVar19);
            }
          }
          else {
            uVar4 = *(undefined1 *)(param_11 + uVar19);
            if ((longlong)uVar19 < 0x10) {
LAB_14066cb86:
              uVar8 = 0;
            }
            else {
              uVar7 = param_11 & 0xf;
              if (uVar7 != 0) {
                uVar7 = 0x10 - uVar7;
              }
              if ((longlong)uVar19 < (longlong)(uVar7 + 0x10)) goto LAB_14066cb86;
              uVar23 = 0;
              uVar8 = uVar19 - (uVar19 - uVar7 & 0xf);
              if (uVar7 != 0) {
                do {
                  *(undefined1 *)(uVar23 + param_11) = uVar4;
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar7);
              }
              uVar24 = CONCAT22(CONCAT11(uVar4,uVar4),CONCAT11(uVar4,uVar4));
              uVar25 = CONCAT44(uVar24,uVar24);
              do {
                *(undefined8 *)(uVar7 + param_11) = uVar25;
                ((undefined8 *)(uVar7 + param_11))[1] = uVar25;
                uVar7 = uVar7 + 0x10;
              } while (uVar7 < uVar8);
            }
            for (; uVar8 < uVar19; uVar8 = uVar8 + 1) {
              *(undefined1 *)(uVar8 + param_11) = uVar4;
            }
          }
        }
      }
      else if (uVar21 == 3) {
        if (0 < (longlong)uVar19) {
          lVar14 = 1;
          lVar6 = 0;
          if (uVar19 >> 1 != 0) {
            uVar7 = 0;
            do {
              uVar8 = uVar7;
              *(undefined1 *)(param_11 + uVar8 * 2) =
                   *(undefined1 *)(lVar6 + -1 + lVar12 + param_11);
              lVar14 = lVar6 + -2;
              lVar6 = lVar6 + -2;
              *(undefined1 *)(param_11 + 1 + uVar8 * 2) =
                   *(undefined1 *)(lVar14 + lVar12 + param_11);
              uVar7 = uVar8 + 1;
            } while (uVar7 < uVar19 >> 1);
            lVar14 = uVar8 + 2 + uVar7;
          }
          uVar7 = lVar14 - 1;
          if (uVar7 < uVar19) {
            *(undefined1 *)(uVar7 + param_11) = *(undefined1 *)(((lVar12 + param_11) - uVar7) + -1);
          }
        }
      }
      else if ((uVar21 == 6) && (0 < (longlong)uVar19)) {
        if ((longlong)uVar19 < 0x10) {
LAB_14066cb7e:
          uVar8 = 0;
        }
        else {
          uVar7 = param_11 & 0xf;
          if (uVar7 != 0) {
            uVar7 = 0x10 - uVar7;
          }
          if ((longlong)uVar19 < (longlong)(uVar7 + 0x10)) goto LAB_14066cb7e;
          uVar23 = 0;
          uVar8 = uVar19 - (uVar19 - uVar7 & 0xf);
          if (uVar7 != 0) {
            do {
              *(byte *)(uVar23 + param_11) = bVar13;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar7);
          }
          uVar24 = CONCAT22(CONCAT11(bVar13,bVar13),CONCAT11(bVar13,bVar13));
          uVar25 = CONCAT44(uVar24,uVar24);
          do {
            *(undefined8 *)(uVar7 + param_11) = uVar25;
            ((undefined8 *)(uVar7 + param_11))[1] = uVar25;
            uVar7 = uVar7 + 0x10;
          } while (uVar7 < uVar8);
        }
        for (; uVar8 < uVar19; uVar8 = uVar8 + 1) {
          *(byte *)(uVar8 + param_11) = bVar13;
        }
      }
      in_XMM0._0_8_ =
           (**(code **)(&DAT_14308b6c0 + lVar5 * 8))(lStack_78,param_4,uVar19,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      pbVar20 = pbVar20 + uVar19;
      param_4 = param_4 + uVar19;
      lVar22 = lVar22 - uVar19;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014066cbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b6c0 + lVar5 * 8))(pbVar20,param_4,lVar22);
    return;
  }
  if ((longlong)uVar19 < lVar22) {
    lVar22 = lVar22 - uVar19;
    in_XMM0._0_8_ =
         (**(code **)(&DAT_14308b6c0 + lVar5 * 8))(pbVar20,param_4,lVar22,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    pbVar20 = pbVar20 + lVar22;
    param_4 = param_4 + lVar22;
  }
  if (uVar19 == 1) {
    uVar11 = (uint)pbVar20[-1];
    if (uVar21 == 1) {
      uVar11 = uVar11 + *pbVar20;
    }
    else if (uVar21 == 3) {
      uVar11 = uVar11 * 2;
    }
    else if (uVar21 == 6) {
      uVar11 = uVar9 + uVar11;
    }
    *param_4 = (float)*pbVar20 * param_9[1] + (float)uVar11 * *param_9;
    return;
  }
  if (uVar19 == 2) {
    bVar13 = pbVar20[-2];
    bVar16 = pbVar20[-1];
    bVar2 = *pbVar20;
    bVar3 = pbVar20[1];
    uVar11 = (uint)bVar2;
    if (uVar21 == 1) {
      uVar9 = (uint)bVar3;
      fVar26 = (float)(bVar16 + uVar9);
      *param_4 = (float)uVar11 * param_9[2] + (float)(bVar13 + uVar9) * *param_9 +
                 param_9[1] * fVar26;
      param_4[1] = *param_9 * fVar26 + (float)(uVar11 + uVar9) * param_9[1] +
                   (float)uVar9 * param_9[2];
      return;
    }
    if (uVar21 == 3) {
      *param_4 = (float)((uint)bVar13 + (uint)bVar2) * *param_9 + (float)bVar2 * param_9[2] +
                 (float)((uint)bVar16 + (uint)bVar3) * param_9[1];
      param_4[1] = (float)((uint)bVar16 * 2) * *param_9 + (float)((uint)bVar2 * 2) * param_9[1] +
                   (float)bVar3 * param_9[2];
      return;
    }
    if (uVar21 == 6) {
      *param_4 = (float)uVar11 * param_9[2] + (float)((uint)bVar16 + (uint)bVar3) * param_9[1] +
                 (float)(bVar13 + uVar9) * *param_9;
      param_4[1] = (float)bVar3 * param_9[2] + (float)(bVar16 + uVar9) * *param_9 +
                   (float)(uVar9 + uVar11) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar18) {
    if (6 < (longlong)uVar18) {
      lVar22 = param_11 - ((longlong)pbVar20 - uVar19);
      if ((lVar12 + -1 <= lVar22) || (lVar12 + -1 <= -lVar22)) {
        if ((longlong)uVar18 < 0x10) {
LAB_14066cb8d:
          uVar8 = 0;
        }
        else {
          uVar7 = param_11 & 0xf;
          if (uVar7 != 0) {
            uVar7 = 0x10 - uVar7;
          }
          if ((longlong)uVar18 < (longlong)(uVar7 + 0x10)) goto LAB_14066cb8d;
          uVar8 = uVar18 - (uVar18 - uVar7 & 0xf);
          uVar23 = 0;
          if (uVar7 != 0) {
            do {
              *(byte *)(uVar23 + param_11) = pbVar20[uVar23 - uVar19];
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar7);
          }
          if ((((longlong)pbVar20 - uVar19) + uVar7 & 0xf) == 0) {
            do {
              uVar25 = *(undefined8 *)(pbVar20 + (uVar7 - uVar19) + 8);
              *(undefined8 *)(uVar7 + param_11) = *(undefined8 *)(pbVar20 + (uVar7 - uVar19));
              ((undefined8 *)(uVar7 + param_11))[1] = uVar25;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar8);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar20 + (uVar7 - uVar19)));
              *(undefined1 (*) [16])(uVar7 + param_11) = in_XMM0;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar8);
          }
        }
        for (; uVar8 < uVar18; uVar8 = uVar8 + 1) {
          *(byte *)(uVar8 + param_11) = pbVar20[uVar8 - uVar19];
        }
        goto LAB_14066c6fd;
      }
    }
    lVar22 = 1;
    uVar7 = lVar12 - 1U >> 1;
    uVar18 = 0;
    if (uVar7 != 0) {
      do {
        uVar8 = uVar18;
        lVar22 = uVar8 * 2 - uVar19;
        *(byte *)(param_11 + uVar8 * 2) = pbVar20[lVar22];
        *(byte *)(param_11 + 1 + uVar8 * 2) = pbVar20[lVar22 + 1];
        uVar18 = uVar8 + 1;
      } while (uVar18 < uVar7);
      lVar22 = uVar8 + 2 + uVar18;
    }
    uVar18 = lVar22 - 1;
    if (uVar18 < lVar12 - 1U) {
      *(byte *)(uVar18 + param_11) = pbVar20[uVar18 - uVar19];
    }
  }
LAB_14066c6fd:
  if (uVar21 == 1) {
    if ((longlong)uVar19 < 1) goto LAB_14066c9b1;
    if ((longlong)uVar19 < 7) {
      lVar22 = 1;
      if (uVar19 >> 1 != 0) {
        lVar22 = lVar12 + param_11;
        uVar18 = 0;
        do {
          uVar7 = uVar18;
          *(undefined1 *)(lVar22 + -1 + uVar7 * 2) = *(undefined1 *)(lVar22 + -2);
          *(undefined1 *)(lVar22 + uVar7 * 2) = *(undefined1 *)(lVar22 + -2);
          uVar18 = uVar7 + 1;
        } while (uVar18 < uVar19 >> 1);
        lVar22 = uVar7 + 2 + uVar18;
      }
      if (lVar22 - 1U < uVar19) {
        *(undefined1 *)(lVar12 + param_11 + -1 + (lVar22 - 1U)) =
             *(undefined1 *)(lVar12 + param_11 + -2);
      }
      goto LAB_14066c9b1;
    }
    lVar12 = lVar12 + param_11;
    uVar4 = *(undefined1 *)(lVar12 + -2);
    if ((longlong)uVar19 < 0x10) {
LAB_14066cb9d:
      uVar7 = 0;
    }
    else {
      uVar18 = lVar12 - 1U & 0xf;
      if (uVar18 != 0) {
        uVar18 = 0x10 - uVar18;
      }
      if ((longlong)uVar19 < (longlong)(uVar18 + 0x10)) goto LAB_14066cb9d;
      uVar8 = 0;
      uVar7 = uVar19 - (uVar19 - uVar18 & 0xf);
      if (uVar18 != 0) {
        do {
          *(undefined1 *)((uVar8 - 1) + lVar12) = uVar4;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar18);
      }
      uVar24 = CONCAT22(CONCAT11(uVar4,uVar4),CONCAT11(uVar4,uVar4));
      uVar25 = CONCAT44(uVar24,uVar24);
      do {
        puVar1 = (undefined8 *)((uVar18 - 1) + lVar12);
        *puVar1 = uVar25;
        puVar1[1] = uVar25;
        uVar18 = uVar18 + 0x10;
      } while (uVar18 < uVar7);
    }
    for (; uVar7 < uVar19; uVar7 = uVar7 + 1) {
      *(undefined1 *)((uVar7 - 1) + lVar12) = uVar4;
    }
    goto LAB_14066c9b1;
  }
  if (uVar21 == 3) {
    if (0 < (longlong)uVar19) {
      lVar22 = 1;
      lVar14 = 0;
      if (uVar19 >> 1 != 0) {
        lVar22 = lVar12 + param_11;
        uVar18 = 0;
        do {
          uVar7 = uVar18;
          lVar6 = lVar14 + -3;
          uVar4 = *(undefined1 *)(lVar14 + -4 + lVar22);
          lVar14 = lVar14 + -2;
          *(undefined1 *)(lVar22 + -1 + uVar7 * 2) = *(undefined1 *)(lVar6 + lVar22);
          *(undefined1 *)(lVar22 + uVar7 * 2) = uVar4;
          uVar18 = uVar7 + 1;
        } while (uVar18 < uVar19 >> 1);
        lVar22 = uVar7 + 2 + uVar18;
      }
      uVar18 = lVar22 - 1;
      if (uVar18 < uVar19) {
        *(undefined1 *)(lVar12 + param_11 + -1 + uVar18) =
             *(undefined1 *)(((lVar12 + param_11) - uVar18) + -3);
      }
    }
    goto LAB_14066c9b1;
  }
  if ((uVar21 != 6) || ((longlong)uVar19 < 1)) goto LAB_14066c9b1;
  if ((longlong)uVar19 < 0x10) {
LAB_14066cb95:
    uVar7 = 0;
  }
  else {
    uVar18 = lVar12 + -1 + param_11 & 0xf;
    if (uVar18 != 0) {
      uVar18 = 0x10 - uVar18;
    }
    if ((longlong)uVar19 < (longlong)(uVar18 + 0x10)) goto LAB_14066cb95;
    uVar8 = 0;
    uVar7 = uVar19 - (uVar19 - uVar18 & 0xf);
    if (uVar18 != 0) {
      do {
        *(byte *)((uVar8 - 1) + lVar12 + param_11) = bVar13;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar18);
    }
    uVar24 = CONCAT22(CONCAT11(bVar13,bVar13),CONCAT11(bVar13,bVar13));
    uVar25 = CONCAT44(uVar24,uVar24);
    do {
      puVar1 = (undefined8 *)((uVar18 - 1) + lVar12 + param_11);
      *puVar1 = uVar25;
      puVar1[1] = uVar25;
      uVar18 = uVar18 + 0x10;
    } while (uVar18 < uVar7);
  }
  if (uVar7 < uVar19) {
    do {
      *(byte *)((uVar7 - 1) + lVar12 + param_11) = bVar13;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar19);
  }
LAB_14066c9b1:
                    /* WARNING: Could not recover jumptable at 0x00014066c9f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_14308b6c0 + lVar5 * 8))(param_11 + uVar19,param_4,uVar19);
  return;
}

