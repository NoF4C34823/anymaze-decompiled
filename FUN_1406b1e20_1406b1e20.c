
void FUN_1406b1e20(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar24;
  ulonglong uStack_78;
  uint uStack_70;
  longlong lStack_68;
  
  lVar18 = (longlong)param_6;
  pbVar10 = (byte *)(param_1 + param_2 * param_3);
  lVar7 = (longlong)param_10;
  uVar5 = param_7 & 0xf;
  uVar12 = 0;
  uVar21 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b2f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b9a0 + lVar18 * 8))(pbVar10,param_4,*param_5);
    return;
  }
  if (uVar5 == 6) {
    uVar12 = (uint)*param_8;
  }
  lVar8 = *param_5;
  uVar9 = lVar7 - 1;
  bVar11 = (byte)uVar12;
  if (*param_5 < (longlong)uVar9) {
    lVar7 = -uVar21;
    lVar17 = 0;
    if (lVar7 < (longlong)(uVar21 + lVar8)) {
      uVar12 = param_7 & 0x40;
      uStack_70 = param_7 & 0x80;
      do {
        lVar14 = lVar7;
        if (((lVar7 < 0) || (lVar8 <= lVar7)) && (param_7 != 0xf0)) {
          if (uVar5 != 6) {
            if (uVar5 == 1) {
              if (lVar7 < 0) {
                lVar14 = 0;
                if (uVar12 != 0) {
                  lVar14 = lVar7;
                }
              }
              else if (uStack_70 == 0) {
                lVar14 = lVar8 + -1;
              }
            }
            else if (uVar5 == 3) {
              if (lVar8 < 2) {
                if (lVar7 < 0) {
                  if (uVar12 == 0) {
                    lVar14 = -lVar7;
                    if (uStack_70 == 0) {
                      lVar14 = 0;
                    }
                  }
                }
                else if ((0 < lVar7) && (uStack_70 == 0)) {
                  lVar14 = -lVar7;
                  if (uVar12 == 0) {
                    lVar14 = 0;
                  }
                }
              }
              else if ((lVar7 < 0) || (lVar8 <= lVar7)) {
                if (lVar7 < 0) goto LAB_1406b2ee0;
                while (uStack_70 == 0) {
                  for (lVar14 = (lVar8 + -1) * 2 - lVar14; lVar14 < 0; lVar14 = -lVar14) {
LAB_1406b2ee0:
                    if (uVar12 != 0) goto LAB_1406b2de4;
                  }
                  if (lVar14 < lVar8) break;
                }
              }
            }
            goto LAB_1406b2de4;
          }
          uVar6 = uVar12;
          if (-1 < lVar7) {
            uVar6 = uStack_70;
          }
          bVar20 = bVar11;
          if (uVar6 != 0) goto LAB_1406b2de4;
        }
        else {
LAB_1406b2de4:
          bVar20 = pbVar10[lVar14];
        }
        lVar7 = lVar7 + 1;
        *(byte *)(lVar17 + param_11) = bVar20;
        lVar17 = lVar17 + 1;
      } while (lVar7 < (longlong)(uVar21 + lVar8));
    }
                    /* WARNING: Could not recover jumptable at 0x0001406b2e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b9a0 + lVar18 * 8))(param_11 + uVar21,param_4,lVar8,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar21 == 1) {
      bVar20 = *pbVar10;
      bVar2 = pbVar10[1];
      if (uVar5 == 1) {
        uVar6 = (uint)bVar2 + (uint)bVar20;
      }
      else if (uVar5 == 3) {
        uVar6 = (uint)bVar2 * 2;
      }
      else {
        uVar6 = (uint)bVar2;
        if (uVar5 == 6) {
          uVar6 = bVar2 + uVar12;
        }
      }
      in_XMM0._0_4_ = (float)uVar6 * *param_9;
      pbVar10 = pbVar10 + 1;
      lVar8 = lVar8 + -1;
      *param_4 = (float)bVar20 * param_9[1] + in_XMM0._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar21 == 2) {
      uVar13 = (uint)*pbVar10;
      bVar20 = pbVar10[1];
      bVar2 = pbVar10[2];
      uVar6 = (uint)pbVar10[3];
      if (uVar5 == 1) {
        fVar24 = (float)(bVar2 + uVar13);
        *param_4 = (float)uVar13 * param_9[2] + (float)(bVar20 + uVar13) * param_9[1] +
                   *param_9 * fVar24;
        in_XMM0._0_4_ =
             (float)bVar20 * param_9[2] + param_9[1] * fVar24 + (float)(uVar13 + uVar6) * *param_9;
        param_4[1] = in_XMM0._0_4_;
      }
      else if (uVar5 == 3) {
        in_XMM0._0_4_ = (float)((uint)bVar20 + (uint)bVar20) * param_9[1];
        *param_4 = (float)uVar13 * param_9[2] + in_XMM0._0_4_ +
                   (float)((uint)bVar2 + (uint)bVar2) * *param_9;
        param_4[1] = (float)bVar20 * param_9[2] + (float)(bVar2 + uVar13) * param_9[1] +
                     (float)(bVar20 + uVar6) * *param_9;
      }
      else if (uVar5 == 6) {
        in_XMM0._0_4_ = (float)(bVar2 + uVar12) * *param_9;
        *param_4 = (float)uVar13 * param_9[2] + in_XMM0._0_4_ +
                   (float)(uVar12 + bVar20) * param_9[1];
        param_4[1] = (float)bVar20 * param_9[2] + (float)(bVar2 + uVar13) * param_9[1] +
                     (float)(uVar6 + uVar12) * *param_9;
      }
      param_4 = param_4 + 2;
      pbVar10 = pbVar10 + 2;
      lVar8 = lVar8 + -2;
    }
    else {
      if (0 < (longlong)uVar9) {
        if (6 < (longlong)uVar9) {
          lVar17 = (param_11 + uVar21) - (longlong)pbVar10;
          if ((lVar7 + -1 <= lVar17) || (lVar7 + -1 <= -lVar17)) {
            if ((longlong)uVar9 < 0x10) {
LAB_1406b2e5c:
              uVar15 = 0;
            }
            else {
              uVar16 = uVar21 + param_11 & 0xf;
              if (uVar16 != 0) {
                uVar16 = 0x10 - uVar16;
              }
              if ((longlong)uVar9 < (longlong)(uVar16 + 0x10)) goto LAB_1406b2e5c;
              lVar17 = uVar21 + param_11;
              uVar15 = uVar9 - (uVar9 - uVar16 & 0xf);
              if (uVar16 != 0) {
                uVar19 = 0;
                do {
                  *(byte *)(uVar19 + lVar17) = pbVar10[uVar19];
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar16);
              }
              if (((ulonglong)(pbVar10 + uVar16) & 0xf) == 0) {
                do {
                  uVar23 = *(undefined8 *)(pbVar10 + uVar16 + 8);
                  *(undefined8 *)(uVar16 + lVar17) = *(undefined8 *)(pbVar10 + uVar16);
                  ((undefined8 *)(uVar16 + lVar17))[1] = uVar23;
                  uVar16 = uVar16 + 0x10;
                } while (uVar16 < uVar15);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar10 + uVar16));
                  *(undefined1 (*) [16])(uVar16 + lVar17) = in_XMM0;
                  uVar16 = uVar16 + 0x10;
                } while (uVar16 < uVar15);
              }
            }
            if (uVar15 < uVar9) {
              do {
                *(byte *)(uVar15 + uVar21 + param_11) = pbVar10[uVar15];
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar9);
            }
            goto LAB_1406b22a6;
          }
        }
        uStack_78 = lVar7 - 1;
        lVar14 = 1;
        lVar17 = uVar21 + param_11;
        uVar16 = 0;
        if (uStack_78 >> 1 != 0) {
          do {
            *(byte *)(lVar17 + uVar16 * 2) = pbVar10[uVar16 * 2];
            *(byte *)(lVar17 + 1 + uVar16 * 2) = pbVar10[uVar16 * 2 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar16 < uStack_78 >> 1);
          lVar14 = uVar16 * 2 + 1;
        }
        uVar16 = lVar14 - 1;
        if (uVar16 < uStack_78) {
          *(byte *)(uVar16 + lVar17) = pbVar10[uVar16];
        }
      }
LAB_1406b22a6:
      lStack_68 = uVar21 + param_11;
      if (uVar5 == 1) {
        if (0 < (longlong)uVar21) {
          if ((longlong)uVar21 < 7) {
            lVar17 = 1;
            uVar16 = 0;
            if (uVar21 >> 1 != 0) {
              do {
                *(undefined1 *)(param_11 + uVar16 * 2) = *(undefined1 *)(param_11 + uVar21);
                *(undefined1 *)(param_11 + 1 + uVar16 * 2) = *(undefined1 *)(param_11 + uVar21);
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar21 >> 1);
              lVar17 = uVar16 * 2 + 1;
            }
            if (lVar17 - 1U < uVar21) {
              *(undefined1 *)((lVar17 - 1U) + param_11) = *(undefined1 *)(param_11 + uVar21);
            }
          }
          else {
            uVar4 = *(undefined1 *)(param_11 + uVar21);
            if ((longlong)uVar21 < 0x10) {
LAB_1406b2e6b:
              uVar15 = 0;
            }
            else {
              uVar16 = param_11 & 0xf;
              if (uVar16 != 0) {
                uVar16 = 0x10 - uVar16;
              }
              if ((longlong)uVar21 < (longlong)(uVar16 + 0x10)) goto LAB_1406b2e6b;
              uVar15 = uVar21 - (uVar21 - uVar16 & 0xf);
              if (uVar16 != 0) {
                uVar19 = 0;
                do {
                  *(undefined1 *)(uVar19 + param_11) = uVar4;
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar16);
              }
              uVar22 = CONCAT22(CONCAT11(uVar4,uVar4),CONCAT11(uVar4,uVar4));
              uVar23 = CONCAT44(uVar22,uVar22);
              do {
                *(undefined8 *)(uVar16 + param_11) = uVar23;
                ((undefined8 *)(uVar16 + param_11))[1] = uVar23;
                uVar16 = uVar16 + 0x10;
              } while (uVar16 < uVar15);
            }
            for (; uVar15 < uVar21; uVar15 = uVar15 + 1) {
              *(undefined1 *)(uVar15 + param_11) = uVar4;
            }
          }
        }
      }
      else if (uVar5 == 3) {
        if (0 < (longlong)uVar21) {
          uVar16 = 0;
          lVar17 = 1;
          if (uVar21 >> 1 != 0) {
            uVar15 = uVar16;
            do {
              *(undefined1 *)(param_11 + uVar16 * 2) =
                   *(undefined1 *)((uVar15 - 1) + lVar7 + param_11);
              lVar17 = uVar15 - 2;
              uVar15 = uVar15 - 2;
              *(undefined1 *)(param_11 + 1 + uVar16 * 2) =
                   *(undefined1 *)(lVar17 + lVar7 + param_11);
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar21 >> 1);
            lVar17 = uVar16 * 2 + 1;
          }
          uVar16 = lVar17 - 1;
          if (uVar16 < uVar21) {
            *(undefined1 *)(uVar16 + param_11) = *(undefined1 *)(((lVar7 + param_11) - uVar16) + -1)
            ;
          }
        }
      }
      else if ((uVar5 == 6) && (0 < (longlong)uVar21)) {
        if ((longlong)uVar21 < 0x10) {
LAB_1406b2e64:
          uVar15 = 0;
        }
        else {
          uVar16 = param_11 & 0xf;
          if (uVar16 != 0) {
            uVar16 = 0x10 - uVar16;
          }
          if ((longlong)uVar21 < (longlong)(uVar16 + 0x10)) goto LAB_1406b2e64;
          uVar19 = 0;
          uVar15 = uVar21 - (uVar21 - uVar16 & 0xf);
          if (uVar16 != 0) {
            do {
              *(byte *)(uVar19 + param_11) = bVar11;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar16);
          }
          uVar22 = CONCAT22(CONCAT11(bVar11,bVar11),CONCAT11(bVar11,bVar11));
          uVar23 = CONCAT44(uVar22,uVar22);
          do {
            *(undefined8 *)(uVar16 + param_11) = uVar23;
            ((undefined8 *)(uVar16 + param_11))[1] = uVar23;
            uVar16 = uVar16 + 0x10;
          } while (uVar16 < uVar15);
        }
        for (; uVar15 < uVar21; uVar15 = uVar15 + 1) {
          *(byte *)(uVar15 + param_11) = bVar11;
        }
      }
      in_XMM0._0_8_ =
           (**(code **)(&DAT_14308b9a0 + lVar18 * 8))(lStack_68,param_4,uVar21,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      pbVar10 = pbVar10 + uVar21;
      param_4 = param_4 + uVar21;
      lVar8 = lVar8 - uVar21;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b2ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b9a0 + lVar18 * 8))(pbVar10,param_4,lVar8);
    return;
  }
  if ((longlong)uVar21 < lVar8) {
    lVar8 = lVar8 - uVar21;
    in_XMM0._0_8_ =
         (**(code **)(&DAT_14308b9a0 + lVar18 * 8))(pbVar10,param_4,lVar8,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    pbVar10 = pbVar10 + lVar8;
    param_4 = param_4 + lVar8;
  }
  if (uVar21 == 1) {
    uVar6 = (uint)pbVar10[-1];
    if (uVar5 == 1) {
      uVar6 = uVar6 + *pbVar10;
    }
    else if (uVar5 == 3) {
      uVar6 = uVar6 * 2;
    }
    else if (uVar5 == 6) {
      uVar6 = uVar12 + uVar6;
    }
    *param_4 = (float)*pbVar10 * param_9[1] + (float)uVar6 * *param_9;
    return;
  }
  if (uVar21 == 2) {
    bVar11 = pbVar10[-2];
    bVar20 = pbVar10[-1];
    bVar2 = *pbVar10;
    bVar3 = pbVar10[1];
    uVar6 = (uint)bVar2;
    if (uVar5 == 1) {
      uVar5 = (uint)bVar3;
      fVar24 = (float)(bVar20 + uVar5);
      *param_4 = (float)uVar6 * param_9[2] + (float)(bVar11 + uVar5) * *param_9 +
                 param_9[1] * fVar24;
      param_4[1] = *param_9 * fVar24 + (float)(uVar6 + uVar5) * param_9[1] +
                   (float)uVar5 * param_9[2];
      return;
    }
    if (uVar5 == 3) {
      *param_4 = (float)((uint)bVar11 + (uint)bVar2) * *param_9 + (float)bVar2 * param_9[2] +
                 (float)((uint)bVar20 + (uint)bVar3) * param_9[1];
      param_4[1] = (float)((uint)bVar20 * 2) * *param_9 + (float)((uint)bVar2 * 2) * param_9[1] +
                   (float)bVar3 * param_9[2];
      return;
    }
    if (uVar5 == 6) {
      *param_4 = (float)uVar6 * param_9[2] + (float)((uint)bVar20 + (uint)bVar3) * param_9[1] +
                 (float)(bVar11 + uVar12) * *param_9;
      param_4[1] = (float)bVar3 * param_9[2] + (float)(bVar20 + uVar12) * *param_9 +
                   (float)(uVar12 + uVar6) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar9) {
    if (6 < (longlong)uVar9) {
      lVar8 = param_11 - ((longlong)pbVar10 - uVar21);
      if ((lVar7 + -1 <= lVar8) || (lVar7 + -1 <= -lVar8)) {
        if ((longlong)uVar9 < 0x10) {
LAB_1406b2e72:
          uVar15 = 0;
        }
        else {
          uVar16 = param_11 & 0xf;
          if (uVar16 != 0) {
            uVar16 = 0x10 - uVar16;
          }
          if ((longlong)uVar9 < (longlong)(uVar16 + 0x10)) goto LAB_1406b2e72;
          uVar19 = 0;
          uVar15 = uVar9 - (uVar9 - uVar16 & 0xf);
          if (uVar16 != 0) {
            do {
              *(byte *)(uVar19 + param_11) = pbVar10[uVar19 - uVar21];
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar16);
          }
          if (((ulonglong)(pbVar10 + (uVar16 - uVar21)) & 0xf) == 0) {
            do {
              uVar23 = *(undefined8 *)(pbVar10 + (uVar16 - uVar21) + 8);
              *(undefined8 *)(uVar16 + param_11) = *(undefined8 *)(pbVar10 + (uVar16 - uVar21));
              ((undefined8 *)(uVar16 + param_11))[1] = uVar23;
              uVar16 = uVar16 + 0x10;
            } while (uVar16 < uVar15);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar10 + (uVar16 - uVar21)));
              *(undefined1 (*) [16])(uVar16 + param_11) = in_XMM0;
              uVar16 = uVar16 + 0x10;
            } while (uVar16 < uVar15);
          }
        }
        for (; uVar15 < uVar9; uVar15 = uVar15 + 1) {
          *(byte *)(uVar15 + param_11) = pbVar10[uVar15 - uVar21];
        }
        goto LAB_1406b29e1;
      }
    }
    lVar8 = 1;
    uVar16 = lVar7 - 1U >> 1;
    uVar9 = 0;
    if (uVar16 != 0) {
      do {
        lVar8 = uVar9 * 2 - uVar21;
        *(byte *)(param_11 + uVar9 * 2) = pbVar10[lVar8];
        *(byte *)(param_11 + 1 + uVar9 * 2) = pbVar10[lVar8 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar16);
      lVar8 = uVar9 * 2 + 1;
    }
    uVar9 = lVar8 - 1;
    if (uVar9 < lVar7 - 1U) {
      *(byte *)(uVar9 + param_11) = pbVar10[uVar9 - uVar21];
    }
  }
LAB_1406b29e1:
  if (uVar5 == 1) {
    if ((longlong)uVar21 < 1) goto LAB_1406b2c98;
    if ((longlong)uVar21 < 7) {
      lVar8 = 1;
      uVar9 = 0;
      if (uVar21 >> 1 != 0) {
        lVar8 = lVar7 + param_11;
        do {
          *(undefined1 *)(lVar8 + -1 + uVar9 * 2) = *(undefined1 *)(lVar8 + -2);
          *(undefined1 *)(lVar8 + uVar9 * 2) = *(undefined1 *)(lVar8 + -2);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar21 >> 1);
        lVar8 = uVar9 * 2 + 1;
      }
      if (lVar8 - 1U < uVar21) {
        *(undefined1 *)(lVar8 + -2 + lVar7 + param_11) = *(undefined1 *)((param_11 - 2) + lVar7);
      }
      goto LAB_1406b2c98;
    }
    lVar8 = lVar7 + param_11;
    uVar4 = *(undefined1 *)((param_11 - 2) + lVar7);
    if ((longlong)uVar21 < 0x10) {
LAB_1406b2e82:
      uVar16 = 0;
    }
    else {
      uVar9 = lVar8 - 1U & 0xf;
      if (uVar9 != 0) {
        uVar9 = 0x10 - uVar9;
      }
      if ((longlong)uVar21 < (longlong)(uVar9 + 0x10)) goto LAB_1406b2e82;
      uVar15 = 0;
      uVar16 = uVar21 - (uVar21 - uVar9 & 0xf);
      if (uVar9 != 0) {
        do {
          *(undefined1 *)((uVar15 - 1) + lVar8) = uVar4;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar9);
      }
      uVar22 = CONCAT22(CONCAT11(uVar4,uVar4),CONCAT11(uVar4,uVar4));
      uVar23 = CONCAT44(uVar22,uVar22);
      do {
        puVar1 = (undefined8 *)((uVar9 - 1) + lVar8);
        *puVar1 = uVar23;
        puVar1[1] = uVar23;
        uVar9 = uVar9 + 0x10;
      } while (uVar9 < uVar16);
    }
    for (; uVar16 < uVar21; uVar16 = uVar16 + 1) {
      *(undefined1 *)((uVar16 - 1) + lVar8) = uVar4;
    }
    goto LAB_1406b2c98;
  }
  if (uVar5 == 3) {
    if (0 < (longlong)uVar21) {
      uVar9 = 0;
      lVar17 = 1;
      lVar8 = 0;
      if (uVar21 >> 1 != 0) {
        lVar17 = lVar7 + param_11;
        do {
          lVar14 = lVar8 + -3;
          uVar4 = *(undefined1 *)(lVar8 + -4 + lVar17);
          lVar8 = lVar8 + -2;
          *(undefined1 *)(lVar17 + -1 + uVar9 * 2) = *(undefined1 *)(lVar14 + lVar17);
          *(undefined1 *)(lVar17 + uVar9 * 2) = uVar4;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar21 >> 1);
        lVar17 = uVar9 * 2 + 1;
      }
      uVar9 = lVar17 - 1;
      if (uVar9 < uVar21) {
        *(undefined1 *)(lVar7 + param_11 + -1 + uVar9) =
             *(undefined1 *)(((lVar7 + param_11) - uVar9) + -3);
      }
    }
    goto LAB_1406b2c98;
  }
  if ((uVar5 != 6) || ((longlong)uVar21 < 1)) goto LAB_1406b2c98;
  if ((longlong)uVar21 < 0x10) {
LAB_1406b2e7a:
    uVar16 = 0;
  }
  else {
    lVar8 = lVar7 + param_11;
    uVar9 = lVar8 - 1U & 0xf;
    if (uVar9 != 0) {
      uVar9 = 0x10 - uVar9;
    }
    if ((longlong)uVar21 < (longlong)(uVar9 + 0x10)) goto LAB_1406b2e7a;
    uVar15 = 0;
    uVar16 = uVar21 - (uVar21 - uVar9 & 0xf);
    if (uVar9 != 0) {
      do {
        *(byte *)((uVar15 - 1) + lVar8) = bVar11;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar22 = CONCAT22(CONCAT11(bVar11,bVar11),CONCAT11(bVar11,bVar11));
    uVar23 = CONCAT44(uVar22,uVar22);
    do {
      puVar1 = (undefined8 *)((uVar9 - 1) + lVar8);
      *puVar1 = uVar23;
      puVar1[1] = uVar23;
      uVar9 = uVar9 + 0x10;
    } while (uVar9 < uVar16);
  }
  if (uVar16 < uVar21) {
    do {
      *(byte *)((uVar16 - 1) + lVar7 + param_11) = bVar11;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar21);
  }
LAB_1406b2c98:
                    /* WARNING: Could not recover jumptable at 0x0001406b2cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_14308b9a0 + lVar18 * 8))(param_11 + uVar21,param_4,uVar21);
  return;
}

