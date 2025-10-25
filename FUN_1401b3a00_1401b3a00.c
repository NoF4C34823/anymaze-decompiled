
void FUN_1401b3a00(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short sVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  short sVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  uint uStack_78;
  
  lVar23 = (longlong)param_10;
  lVar4 = (longlong)param_6;
  psVar14 = (short *)(param_1 + param_2 * param_3);
  uVar20 = param_7 & 0xf;
  sVar19 = 0;
  uVar9 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001401b4af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143087ec0 + lVar4 * 8))(psVar14,param_4,*param_5);
    return;
  }
  if (uVar20 == 6) {
    sVar19 = *param_8;
  }
  lVar21 = *param_5;
  uVar18 = lVar23 - 1;
  if (*param_5 < (longlong)uVar18) {
    lVar23 = -uVar9;
    lVar15 = 0;
    if (lVar23 < (longlong)(uVar9 + lVar21)) {
      uVar17 = param_7 & 0x40;
      uStack_78 = param_7 & 0x80;
      do {
        lVar11 = lVar23;
        if (((lVar23 < 0) || (lVar21 <= lVar23)) && (param_7 != 0xf0)) {
          if (uVar20 != 6) {
            if (uVar20 == 1) {
              if (lVar23 < 0) {
                lVar11 = 0;
                if (uVar17 != 0) {
                  lVar11 = lVar23;
                }
              }
              else if (uStack_78 == 0) {
                lVar11 = lVar21 + -1;
              }
            }
            else if (uVar20 == 3) {
              if (lVar21 < 2) {
                if (lVar23 < 0) {
                  if (uVar17 == 0) {
                    lVar11 = -lVar23;
                    if (uStack_78 == 0) {
                      lVar11 = 0;
                    }
                  }
                }
                else if ((0 < lVar23) && (uStack_78 == 0)) {
                  lVar11 = -lVar23;
                  if (uVar17 == 0) {
                    lVar11 = 0;
                  }
                }
              }
              else if ((lVar23 < 0) || (lVar21 <= lVar23)) {
                if (lVar23 < 0) goto LAB_1401b4a80;
                while (uStack_78 == 0) {
                  for (lVar11 = (lVar21 + -1) * 2 - lVar11; lVar11 < 0; lVar11 = -lVar11) {
LAB_1401b4a80:
                    if (uVar17 != 0) goto LAB_1401b4984;
                  }
                  if (lVar11 < lVar21) break;
                }
              }
            }
            goto LAB_1401b4984;
          }
          uVar3 = uVar17;
          if (-1 < lVar23) {
            uVar3 = uStack_78;
          }
          sVar10 = sVar19;
          if (uVar3 != 0) goto LAB_1401b4984;
        }
        else {
LAB_1401b4984:
          sVar10 = psVar14[lVar11];
        }
        lVar23 = lVar23 + 1;
        *(short *)(param_11 + lVar15 * 2) = sVar10;
        lVar15 = lVar15 + 1;
      } while (lVar23 < (longlong)(uVar9 + lVar21));
    }
                    /* WARNING: Could not recover jumptable at 0x0001401b49e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143087ec0 + lVar4 * 8))(param_11 + uVar9 * 2,param_4,lVar21,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar9 == 1) {
      sVar10 = *psVar14;
      iVar6 = (int)psVar14[1];
      if (uVar20 == 1) {
        iVar6 = iVar6 + sVar10;
      }
      else if (uVar20 == 3) {
        iVar6 = iVar6 * 2;
      }
      else if (uVar20 == 6) {
        iVar6 = sVar19 + iVar6;
      }
      in_XMM0._0_4_ = (float)iVar6 * *param_9;
      psVar14 = psVar14 + 1;
      lVar21 = lVar21 + -1;
      *param_4 = (float)(int)sVar10 * param_9[1] + in_XMM0._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar9 == 2) {
      iVar6 = (int)*psVar14;
      iVar12 = (int)psVar14[2];
      iVar13 = (int)psVar14[3];
      iVar16 = (int)psVar14[1];
      if (uVar20 == 1) {
        *param_4 = (float)iVar6 * param_9[2] + (float)(iVar16 + iVar6) * param_9[1] +
                   *param_9 * (float)(iVar12 + iVar6);
        in_XMM0._0_4_ =
             (float)iVar16 * param_9[2] + param_9[1] * (float)(iVar12 + iVar6) +
             (float)(iVar6 + iVar13) * *param_9;
        param_4[1] = in_XMM0._0_4_;
      }
      else if (uVar20 == 3) {
        in_XMM0._0_4_ = (float)(iVar16 * 2) * param_9[1];
        *param_4 = (float)iVar6 * param_9[2] + in_XMM0._0_4_ + (float)(iVar12 * 2) * *param_9;
        param_4[1] = (float)iVar16 * param_9[2] + (float)(iVar12 + iVar6) * param_9[1] +
                     (float)(iVar16 + iVar13) * *param_9;
      }
      else if (uVar20 == 6) {
        in_XMM0._0_4_ = (float)(iVar12 + sVar19) * *param_9;
        *param_4 = (float)iVar6 * param_9[2] + in_XMM0._0_4_ + (float)(sVar19 + iVar16) * param_9[1]
        ;
        param_4[1] = (float)iVar16 * param_9[2] + (float)(iVar12 + iVar6) * param_9[1] +
                     (float)(sVar19 + iVar13) * *param_9;
      }
      param_4 = param_4 + 2;
      psVar14 = psVar14 + 2;
      lVar21 = lVar21 + -2;
    }
    else {
      uVar22 = param_11 + uVar9 * 2;
      if (0 < (longlong)uVar18) {
        if (6 < (longlong)uVar18) {
          lVar15 = lVar23 * 2 + -2;
          if ((lVar15 <= (longlong)(uVar22 - (longlong)psVar14)) ||
             (lVar15 <= (longlong)-(uVar22 - (longlong)psVar14))) {
            if ((longlong)uVar18 < 8) {
LAB_1401b49fd:
              uVar7 = 0;
            }
            else {
              uVar8 = uVar22 & 0xf;
              if (uVar8 != 0) {
                if ((uVar22 & 1) != 0) goto LAB_1401b49fd;
                uVar8 = 0x10 - uVar8 >> 1;
              }
              if ((longlong)uVar18 < (longlong)(uVar8 + 8)) goto LAB_1401b49fd;
              uVar5 = 0;
              uVar7 = uVar18 - (uVar18 - uVar8 & 7);
              if (uVar8 != 0) {
                do {
                  *(short *)(uVar22 + uVar5 * 2) = psVar14[uVar5];
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar8);
              }
              if (((ulonglong)(psVar14 + uVar8) & 0xf) == 0) {
                do {
                  uVar24 = *(undefined8 *)(psVar14 + uVar8 + 4);
                  puVar1 = (undefined8 *)(uVar22 + uVar8 * 2);
                  *puVar1 = *(undefined8 *)(psVar14 + uVar8);
                  puVar1[1] = uVar24;
                  uVar8 = uVar8 + 8;
                } while (uVar8 < uVar7);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(psVar14 + uVar8));
                  *(undefined1 (*) [16])(uVar22 + uVar8 * 2) = in_XMM0;
                  uVar8 = uVar8 + 8;
                } while (uVar8 < uVar7);
              }
            }
            for (; uVar7 < uVar18; uVar7 = uVar7 + 1) {
              *(short *)(uVar22 + uVar7 * 2) = psVar14[uVar7];
            }
            goto LAB_1401b3ea3;
          }
        }
        lVar15 = 1;
        uVar8 = 0;
        uVar7 = lVar23 - 1U >> 1;
        if (uVar7 != 0) {
          do {
            *(short *)(uVar22 + uVar8 * 4) = psVar14[uVar8 * 2];
            *(short *)(uVar22 + 2 + uVar8 * 4) = psVar14[uVar8 * 2 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
          lVar15 = uVar8 * 2 + 1;
        }
        if (lVar15 - 1U < lVar23 - 1U) {
          *(short *)(param_11 + ((uVar9 - 1) + lVar15) * 2) = psVar14[lVar15 - 1U];
        }
      }
LAB_1401b3ea3:
      if (uVar20 == 1) {
        if ((longlong)uVar9 < 1) goto LAB_1401b40ce;
        uVar2 = *(undefined2 *)(param_11 + uVar9 * 2);
        if ((longlong)uVar9 < 8) {
LAB_1401b4a5d:
          uVar7 = 0;
        }
        else {
          uVar8 = param_11 & 0xf;
          if (uVar8 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1401b4a5d;
            uVar8 = 0x10 - uVar8 >> 1;
          }
          if ((longlong)uVar9 < (longlong)(uVar8 + 8)) goto LAB_1401b4a5d;
          uVar7 = uVar9 - (uVar9 - uVar8 & 7);
          if (uVar8 != 0) {
            uVar5 = 0;
            do {
              *(undefined2 *)(param_11 + uVar5 * 2) = uVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar8);
          }
          uVar24 = CONCAT44(CONCAT22(uVar2,uVar2),CONCAT22(uVar2,uVar2));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar8 * 2);
            *puVar1 = uVar24;
            puVar1[1] = uVar24;
            uVar8 = uVar8 + 8;
          } while (uVar8 < uVar7);
        }
        for (; uVar7 < uVar9; uVar7 = uVar7 + 1) {
          *(undefined2 *)(param_11 + uVar7 * 2) = uVar2;
        }
      }
      else if (uVar20 == 3) {
        if (0 < (longlong)uVar9) {
          uVar8 = 0;
          lVar15 = 1;
          if (uVar9 >> 1 != 0) {
            lVar15 = lVar23 * 2 + param_11;
            uVar7 = uVar8;
            do {
              *(undefined2 *)(param_11 + uVar8 * 4) = *(undefined2 *)((uVar7 - 2) + lVar15);
              lVar11 = uVar7 - 4;
              uVar7 = uVar7 - 4;
              *(undefined2 *)(param_11 + 2 + uVar8 * 4) = *(undefined2 *)(lVar11 + lVar15);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9 >> 1);
            lVar15 = uVar8 * 2 + 1;
          }
          uVar8 = lVar15 - 1;
          if (uVar8 < uVar9) {
            *(undefined2 *)(param_11 + uVar8 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar23 - uVar8) * 2);
          }
        }
      }
      else if ((uVar20 == 6) && (0 < (longlong)uVar9)) {
        if ((longlong)uVar9 < 8) {
LAB_1401b4a04:
          uVar7 = 0;
        }
        else {
          uVar8 = param_11 & 0xf;
          if (uVar8 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1401b4a04;
            uVar8 = 0x10 - uVar8 >> 1;
          }
          if ((longlong)uVar9 < (longlong)(uVar8 + 8)) goto LAB_1401b4a04;
          uVar5 = 0;
          uVar7 = uVar9 - (uVar9 - uVar8 & 7);
          if (uVar8 != 0) {
            do {
              *(short *)(param_11 + uVar5 * 2) = sVar19;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar8);
          }
          uVar24 = CONCAT44(CONCAT22(sVar19,sVar19),CONCAT22(sVar19,sVar19));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar8 * 2);
            *puVar1 = uVar24;
            puVar1[1] = uVar24;
            uVar8 = uVar8 + 8;
          } while (uVar8 < uVar7);
        }
        for (; uVar7 < uVar9; uVar7 = uVar7 + 1) {
          *(short *)(param_11 + uVar7 * 2) = sVar19;
        }
      }
LAB_1401b40ce:
      in_XMM0._0_8_ =
           (**(code **)(&UNK_143087ec0 + lVar4 * 8))(uVar22,param_4,uVar9,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      param_4 = param_4 + uVar9;
      lVar21 = lVar21 - uVar9;
      psVar14 = psVar14 + uVar9;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401b4a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143087ec0 + lVar4 * 8))(psVar14,param_4,lVar21);
    return;
  }
  if ((longlong)uVar9 < lVar21) {
    lVar21 = lVar21 - uVar9;
    in_XMM0._0_8_ =
         (**(code **)(&UNK_143087ec0 + lVar4 * 8))(psVar14,param_4,lVar21,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    psVar14 = psVar14 + lVar21;
    param_4 = param_4 + lVar21;
  }
  if (uVar9 == 1) {
    iVar6 = (int)psVar14[-1];
    if (uVar20 == 1) {
      iVar6 = iVar6 + *psVar14;
    }
    else if (uVar20 == 3) {
      iVar6 = iVar6 * 2;
    }
    else if (uVar20 == 6) {
      iVar6 = sVar19 + iVar6;
    }
    *param_4 = (float)(int)*psVar14 * param_9[1] + (float)iVar6 * *param_9;
    return;
  }
  if (uVar9 == 2) {
    iVar12 = (int)psVar14[-2];
    iVar6 = (int)psVar14[-1];
    iVar16 = (int)*psVar14;
    iVar13 = (int)psVar14[1];
    if (uVar20 == 1) {
      *param_4 = (float)iVar16 * param_9[2] + (float)(iVar12 + iVar13) * *param_9 +
                 param_9[1] * (float)(iVar6 + iVar13);
      param_4[1] = *param_9 * (float)(iVar6 + iVar13) + (float)(iVar16 + iVar13) * param_9[1] +
                   (float)iVar13 * param_9[2];
      return;
    }
    if (uVar20 == 3) {
      *param_4 = (float)(iVar12 + iVar16) * *param_9 + (float)iVar16 * param_9[2] +
                 (float)(iVar6 + iVar13) * param_9[1];
      param_4[1] = (float)(iVar6 * 2) * *param_9 + (float)(iVar16 * 2) * param_9[1] +
                   (float)iVar13 * param_9[2];
      return;
    }
    if (uVar20 == 6) {
      *param_4 = (float)iVar16 * param_9[2] + (float)(iVar6 + iVar13) * param_9[1] +
                 (float)(iVar12 + sVar19) * *param_9;
      param_4[1] = (float)iVar13 * param_9[2] + (float)(iVar6 + sVar19) * *param_9 +
                   (float)(sVar19 + iVar16) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar18) {
    if (6 < (longlong)uVar18) {
      lVar21 = lVar23 * 2 + -2;
      if ((lVar21 <= (longlong)(param_11 - (longlong)(psVar14 + -uVar9))) ||
         (lVar21 <= (longlong)-(param_11 - (longlong)(psVar14 + -uVar9)))) {
        if ((longlong)uVar18 < 8) {
LAB_1401b4a0b:
          uVar8 = 0;
        }
        else {
          uVar22 = param_11 & 0xf;
          if (uVar22 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1401b4a0b;
            uVar22 = 0x10 - uVar22 >> 1;
          }
          if ((longlong)uVar18 < (longlong)(uVar22 + 8)) goto LAB_1401b4a0b;
          uVar7 = 0;
          uVar8 = uVar18 - (uVar18 - uVar22 & 7);
          if (uVar22 != 0) {
            do {
              *(short *)(param_11 + uVar7 * 2) = psVar14[uVar7 - uVar9];
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar22);
          }
          if (((ulonglong)(psVar14 + (uVar22 - uVar9)) & 0xf) == 0) {
            do {
              uVar24 = *(undefined8 *)(psVar14 + (uVar22 - uVar9) + 4);
              puVar1 = (undefined8 *)(param_11 + uVar22 * 2);
              *puVar1 = *(undefined8 *)(psVar14 + (uVar22 - uVar9));
              puVar1[1] = uVar24;
              uVar22 = uVar22 + 8;
            } while (uVar22 < uVar8);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(psVar14 + (uVar22 - uVar9)));
              *(undefined1 (*) [16])(param_11 + uVar22 * 2) = in_XMM0;
              uVar22 = uVar22 + 8;
            } while (uVar22 < uVar8);
          }
        }
        for (; uVar8 < uVar18; uVar8 = uVar8 + 1) {
          *(short *)(param_11 + uVar8 * 2) = psVar14[uVar8 - uVar9];
        }
        goto LAB_1401b4540;
      }
    }
    lVar21 = 1;
    uVar18 = 0;
    uVar22 = lVar23 - 1U >> 1;
    if (uVar22 != 0) {
      do {
        *(short *)(param_11 + uVar18 * 4) = psVar14[uVar18 * 2 - uVar9];
        *(short *)(param_11 + 2 + uVar18 * 4) = psVar14[(uVar18 * 2 + 1) - uVar9];
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar22);
      lVar21 = uVar18 * 2 + 1;
    }
    uVar18 = lVar21 - 1;
    if (uVar18 < lVar23 - 1U) {
      *(short *)(param_11 + uVar18 * 2) = psVar14[uVar18 - uVar9];
    }
  }
LAB_1401b4540:
  if (uVar20 == 1) {
    if ((longlong)uVar9 < 1) goto LAB_1401b4826;
    if (6 < (longlong)uVar9) {
      lVar21 = param_11 + lVar23 * 2;
      uVar18 = lVar21 - 2;
      lVar15 = uVar18 - (lVar21 + -4);
      if ((1 < lVar15) || ((longlong)(uVar9 * 2) <= -lVar15)) {
        uVar2 = *(undefined2 *)(lVar21 + -4);
        if ((longlong)uVar9 < 8) {
LAB_1401b4a1a:
          uVar18 = 0;
        }
        else {
          uVar22 = uVar18 & 0xf;
          if (uVar22 != 0) {
            if ((uVar18 & 1) != 0) goto LAB_1401b4a1a;
            uVar22 = 0x10 - uVar22 >> 1;
          }
          if ((longlong)uVar9 < (longlong)(uVar22 + 8)) goto LAB_1401b4a1a;
          uVar8 = 0;
          lVar21 = param_11 + lVar23 * 2;
          uVar18 = uVar9 - (uVar9 - uVar22 & 7);
          if (uVar22 != 0) {
            do {
              *(undefined2 *)(lVar21 + -2 + uVar8 * 2) = uVar2;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar22);
          }
          uVar24 = CONCAT44(CONCAT22(uVar2,uVar2),CONCAT22(uVar2,uVar2));
          do {
            puVar1 = (undefined8 *)(lVar21 + -2 + uVar22 * 2);
            *puVar1 = uVar24;
            puVar1[1] = uVar24;
            uVar22 = uVar22 + 8;
          } while (uVar22 < uVar18);
        }
        if (uVar18 < uVar9) {
          do {
            *(undefined2 *)(lVar23 * 2 + param_11 + -2 + uVar18 * 2) = uVar2;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar9);
        }
        goto LAB_1401b4826;
      }
    }
    lVar21 = 1;
    uVar18 = 0;
    if (uVar9 >> 1 != 0) {
      lVar21 = lVar23 * 2;
      do {
        *(undefined2 *)(param_11 + lVar21 + -2 + uVar18 * 4) =
             *(undefined2 *)(lVar21 + -4 + param_11);
        *(undefined2 *)(param_11 + lVar21 + uVar18 * 4) = *(undefined2 *)((param_11 - 4) + lVar21);
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar9 >> 1);
      lVar21 = uVar18 * 2 + 1;
    }
    if (lVar21 - 1U < uVar9) {
      *(undefined2 *)((param_11 - 2) + (lVar23 + -1 + lVar21) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar23 * 2);
    }
    goto LAB_1401b4826;
  }
  if (uVar20 == 3) {
    if (0 < (longlong)uVar9) {
      uVar18 = 0;
      lVar15 = 1;
      lVar21 = 0;
      if (uVar9 >> 1 != 0) {
        lVar15 = lVar23 * 2 + param_11;
        do {
          *(undefined2 *)(lVar15 + -2 + uVar18 * 4) = *(undefined2 *)(lVar21 + -6 + lVar15);
          lVar11 = lVar21 + -8;
          lVar21 = lVar21 + -4;
          *(undefined2 *)(lVar15 + uVar18 * 4) = *(undefined2 *)(lVar11 + lVar15);
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar9 >> 1);
        lVar15 = uVar18 * 2 + 1;
      }
      if (lVar15 - 1U < uVar9) {
        *(undefined2 *)((param_11 - 2) + (lVar23 + -1 + lVar15) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar23 - (lVar15 - 1U)) * 2);
      }
    }
    goto LAB_1401b4826;
  }
  if ((uVar20 != 6) || ((longlong)uVar9 < 1)) goto LAB_1401b4826;
  if ((longlong)uVar9 < 8) {
LAB_1401b4a12:
    uVar22 = 0;
  }
  else {
    lVar21 = lVar23 * 2 + param_11;
    uVar18 = lVar21 - 2U & 0xf;
    if (uVar18 != 0) {
      if ((lVar21 - 2U & 1) != 0) goto LAB_1401b4a12;
      uVar18 = 0x10 - uVar18 >> 1;
    }
    if ((longlong)uVar9 < (longlong)(uVar18 + 8)) goto LAB_1401b4a12;
    uVar8 = 0;
    uVar22 = uVar9 - (uVar9 - uVar18 & 7);
    if (uVar18 != 0) {
      do {
        *(short *)(lVar21 + -2 + uVar8 * 2) = sVar19;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar18);
    }
    uVar24 = CONCAT44(CONCAT22(sVar19,sVar19),CONCAT22(sVar19,sVar19));
    do {
      puVar1 = (undefined8 *)(lVar21 + -2 + uVar18 * 2);
      *puVar1 = uVar24;
      puVar1[1] = uVar24;
      uVar18 = uVar18 + 8;
    } while (uVar18 < uVar22);
  }
  if (uVar22 < uVar9) {
    do {
      *(short *)(lVar23 * 2 + param_11 + -2 + uVar22 * 2) = sVar19;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar9);
  }
LAB_1401b4826:
                    /* WARNING: Could not recover jumptable at 0x0001401b4861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_143087ec0 + lVar4 * 8))(param_11 + uVar9 * 2,param_4,uVar9);
  return;
}

