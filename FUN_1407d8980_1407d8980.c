
void FUN_1407d8980(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  short *psVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  short sVar19;
  longlong lVar20;
  ulonglong uVar21;
  short sVar22;
  longlong lVar23;
  int iVar24;
  short *psVar25;
  undefined8 uVar26;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  param_2 = param_2 * param_3;
  lVar12 = (longlong)param_10;
  lVar4 = (longlong)param_6;
  uVar14 = param_7 & 0xf;
  sVar19 = 0;
  uVar10 = (ulonglong)(param_10 >> 1);
  psVar25 = (short *)(param_1 + param_2);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001407d9a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c420)[lVar4])(psVar25,param_4,*param_5);
    return;
  }
  if (uVar14 == 6) {
    sVar19 = *param_8;
  }
  lVar20 = *param_5;
  uVar18 = lVar12 - 1;
  if (lVar20 < (longlong)uVar18) {
    lVar9 = 0;
    lVar12 = -uVar10;
    if (lVar12 < (longlong)(uVar10 + lVar20)) {
      uVar16 = param_7 & 0x40;
      uVar8 = param_7 & 0x80;
      do {
        lVar23 = lVar12;
        if (((lVar12 < 0) || (lVar20 <= lVar12)) && (param_7 != 0xf0)) {
          if (uVar14 != 6) {
            if (uVar14 == 1) {
              if (lVar12 < 0) {
                lVar23 = 0;
                if (uVar16 != 0) {
                  lVar23 = lVar12;
                }
              }
              else if (uVar8 == 0) {
                lVar23 = lVar20 + -1;
              }
            }
            else if (uVar14 == 3) {
              if (lVar20 < 2) {
                if (lVar12 < 0) {
                  if (uVar16 == 0) {
                    lVar23 = -lVar12;
                    if (uVar8 == 0) {
                      lVar23 = 0;
                    }
                  }
                }
                else if ((0 < lVar12) && (uVar8 == 0)) {
                  lVar23 = -lVar12;
                  if (uVar16 == 0) {
                    lVar23 = 0;
                  }
                }
              }
              else if ((lVar12 < 0) || (lVar20 <= lVar12)) {
                if (lVar12 < 0) goto LAB_1407d99c0;
                while (uVar8 == 0) {
                  for (lVar23 = (lVar20 + -1) * 2 - lVar23; lVar23 < 0; lVar23 = -lVar23) {
LAB_1407d99c0:
                    if (uVar16 != 0) goto LAB_1407d98c3;
                  }
                  if (lVar23 < lVar20) break;
                }
              }
            }
            goto LAB_1407d98c3;
          }
          uVar3 = uVar16;
          if (-1 < lVar12) {
            uVar3 = uVar8;
          }
          sVar22 = sVar19;
          if (uVar3 != 0) goto LAB_1407d98c3;
        }
        else {
LAB_1407d98c3:
          sVar22 = psVar25[lVar23];
        }
        lVar12 = lVar12 + 1;
        *(short *)(param_11 + lVar9 * 2) = sVar22;
        lVar9 = lVar9 + 1;
      } while (lVar12 < (longlong)(uVar10 + lVar20));
    }
                    /* WARNING: Could not recover jumptable at 0x0001407d9926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c420)[lVar4])(param_11 + uVar10 * 2,param_4,lVar20,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar10 == 1) {
      sVar22 = *psVar25;
      iVar24 = (int)psVar25[1];
      if (uVar14 == 1) {
        iVar24 = iVar24 + sVar22;
      }
      else if (uVar14 == 3) {
        iVar24 = iVar24 * 2;
      }
      else if (uVar14 == 6) {
        iVar24 = sVar19 + iVar24;
      }
      lVar20 = lVar20 + -1;
      in_XMM0._0_4_ = (float)iVar24 * *param_9;
      psVar25 = (short *)(param_1 + 2 + param_2);
      *param_4 = (float)(int)sVar22 * param_9[1] + in_XMM0._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar10 == 2) {
      iVar24 = (int)*psVar25;
      iVar11 = (int)psVar25[1];
      iVar13 = (int)psVar25[2];
      iVar15 = (int)psVar25[3];
      if (uVar14 == 1) {
        *param_4 = (float)iVar24 * param_9[2] + (float)(iVar11 + iVar24) * param_9[1] +
                   *param_9 * (float)(iVar13 + iVar24);
        in_XMM0._0_4_ =
             (float)iVar11 * param_9[2] + param_9[1] * (float)(iVar13 + iVar24) +
             (float)(iVar24 + iVar15) * *param_9;
        param_4[1] = in_XMM0._0_4_;
      }
      else if (uVar14 == 3) {
        in_XMM0._0_4_ = (float)(iVar11 * 2) * param_9[1];
        *param_4 = (float)iVar24 * param_9[2] + in_XMM0._0_4_ + (float)(iVar13 * 2) * *param_9;
        param_4[1] = (float)iVar11 * param_9[2] + (float)(iVar24 + iVar13) * param_9[1] +
                     (float)(iVar15 + iVar11) * *param_9;
      }
      else if (uVar14 == 6) {
        in_XMM0._0_4_ = (float)(iVar13 + sVar19) * *param_9;
        *param_4 = (float)iVar24 * param_9[2] + in_XMM0._0_4_ +
                   (float)(iVar11 + sVar19) * param_9[1];
        param_4[1] = (float)iVar11 * param_9[2] + (float)(iVar24 + iVar13) * param_9[1] +
                     (float)(sVar19 + iVar15) * *param_9;
      }
      psVar25 = (short *)(param_1 + 4 + param_2);
      param_4 = param_4 + 2;
      lVar20 = lVar20 + -2;
    }
    else {
      uVar7 = param_11 + uVar10 * 2;
      if (0 < (longlong)uVar18) {
        if (6 < (longlong)uVar18) {
          lVar9 = lVar12 * 2 + -2;
          if ((lVar9 <= (longlong)(uVar7 - (longlong)psVar25)) ||
             (lVar9 <= (longlong)-(uVar7 - (longlong)psVar25))) {
            if ((longlong)uVar18 < 8) {
LAB_1407d993a:
              uVar21 = 0;
            }
            else {
              uVar17 = uVar7 & 0xf;
              if (uVar17 != 0) {
                if ((uVar7 & 1) != 0) goto LAB_1407d993a;
                uVar17 = 0x10 - uVar17 >> 1;
              }
              if ((longlong)uVar18 < (longlong)(uVar17 + 8)) goto LAB_1407d993a;
              uVar21 = uVar18 - (uVar18 - uVar17 & 7);
              uVar5 = 0;
              if (uVar17 != 0) {
                do {
                  *(short *)(uVar7 + uVar5 * 2) = psVar25[uVar5];
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar17);
              }
              if (((ulonglong)(psVar25 + uVar17) & 0xf) == 0) {
                do {
                  uVar26 = *(undefined8 *)(psVar25 + uVar17 + 4);
                  puVar1 = (undefined8 *)(uVar7 + uVar17 * 2);
                  *puVar1 = *(undefined8 *)(psVar25 + uVar17);
                  puVar1[1] = uVar26;
                  uVar17 = uVar17 + 8;
                } while (uVar17 < uVar21);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(psVar25 + uVar17));
                  *(undefined1 (*) [16])(uVar7 + uVar17 * 2) = in_XMM0;
                  uVar17 = uVar17 + 8;
                } while (uVar17 < uVar21);
              }
            }
            for (; uVar21 < uVar18; uVar21 = uVar21 + 1) {
              *(short *)(uVar7 + uVar21 * 2) = psVar25[uVar21];
            }
            goto LAB_1407d8e5d;
          }
        }
        lVar9 = 1;
        uVar21 = lVar12 - 1U >> 1;
        uVar17 = 0;
        if (uVar21 != 0) {
          do {
            uVar5 = uVar17;
            *(short *)(uVar7 + uVar5 * 4) = psVar25[uVar5 * 2];
            *(short *)(uVar7 + 2 + uVar5 * 4) = psVar25[uVar5 * 2 + 1];
            uVar17 = uVar5 + 1;
          } while (uVar17 < uVar21);
          lVar9 = uVar5 + 2 + uVar17;
        }
        if (lVar9 - 1U < lVar12 - 1U) {
          *(short *)(param_11 + ((uVar10 - 1) + lVar9) * 2) = psVar25[lVar9 - 1U];
        }
      }
LAB_1407d8e5d:
      if (uVar14 == 1) {
        if ((longlong)uVar10 < 1) goto LAB_1407d906d;
        uVar2 = *(undefined2 *)(param_11 + uVar10 * 2);
        if ((longlong)uVar10 < 8) {
LAB_1407d999a:
          uVar21 = 0;
        }
        else {
          uVar17 = param_11 & 0xf;
          if (uVar17 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1407d999a;
            uVar17 = 0x10 - uVar17 >> 1;
          }
          if ((longlong)uVar10 < (longlong)(uVar17 + 8)) goto LAB_1407d999a;
          uVar5 = 0;
          uVar21 = uVar10 - (uVar10 - uVar17 & 7);
          if (uVar17 != 0) {
            do {
              *(undefined2 *)(param_11 + uVar5 * 2) = uVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar17);
          }
          uVar26 = CONCAT44(CONCAT22(uVar2,uVar2),CONCAT22(uVar2,uVar2));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar17 * 2);
            *puVar1 = uVar26;
            puVar1[1] = uVar26;
            uVar17 = uVar17 + 8;
          } while (uVar17 < uVar21);
        }
        for (; uVar21 < uVar10; uVar21 = uVar21 + 1) {
          *(undefined2 *)(param_11 + uVar21 * 2) = uVar2;
        }
      }
      else if (uVar14 == 3) {
        if (0 < (longlong)uVar10) {
          lVar9 = 1;
          uVar17 = 0;
          if (uVar10 >> 1 != 0) {
            lVar9 = param_11 + lVar12 * 2;
            uVar21 = uVar17;
            do {
              uVar5 = uVar21;
              *(undefined2 *)(param_11 + uVar5 * 4) = *(undefined2 *)((uVar17 - 2) + lVar9);
              lVar23 = uVar17 - 4;
              uVar17 = uVar17 - 4;
              *(undefined2 *)(param_11 + 2 + uVar5 * 4) = *(undefined2 *)(lVar23 + lVar9);
              uVar21 = uVar5 + 1;
            } while (uVar21 < uVar10 >> 1);
            lVar9 = uVar5 + 2 + uVar21;
          }
          uVar17 = lVar9 - 1;
          if (uVar17 < uVar10) {
            *(undefined2 *)(param_11 + uVar17 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar12 - uVar17) * 2);
          }
        }
      }
      else if ((uVar14 == 6) && (0 < (longlong)uVar10)) {
        if ((longlong)uVar10 < 8) {
LAB_1407d9941:
          uVar21 = 0;
        }
        else {
          uVar17 = param_11 & 0xf;
          if (uVar17 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1407d9941;
            uVar17 = 0x10 - uVar17 >> 1;
          }
          if ((longlong)uVar10 < (longlong)(uVar17 + 8)) goto LAB_1407d9941;
          uVar5 = 0;
          uVar21 = uVar10 - (uVar10 - uVar17 & 7);
          if (uVar17 != 0) {
            do {
              *(short *)(param_11 + uVar5 * 2) = sVar19;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar17);
          }
          uVar26 = CONCAT44(CONCAT22(sVar19,sVar19),CONCAT22(sVar19,sVar19));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar17 * 2);
            *puVar1 = uVar26;
            puVar1[1] = uVar26;
            uVar17 = uVar17 + 8;
          } while (uVar17 < uVar21);
        }
        for (; uVar21 < uVar10; uVar21 = uVar21 + 1) {
          *(short *)(param_11 + uVar21 * 2) = sVar19;
        }
      }
LAB_1407d906d:
      in_XMM0._0_8_ = (*(code *)(&PTR_FUN_14308c420)[lVar4])(uVar7,param_4,uVar10,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      lVar20 = lVar20 - uVar10;
      psVar25 = psVar25 + uVar10;
      param_4 = param_4 + uVar10;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001407d9997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c420)[lVar4])(psVar25,param_4,lVar20);
    return;
  }
  if ((longlong)uVar10 < lVar20) {
    lVar20 = lVar20 - uVar10;
    in_XMM0._0_8_ = (*(code *)(&PTR_FUN_14308c420)[lVar4])(psVar25,param_4,lVar20,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    psVar25 = psVar25 + lVar20;
    param_4 = param_4 + lVar20;
  }
  if (uVar10 == 1) {
    iVar24 = (int)psVar25[-1];
    if (uVar14 == 1) {
      iVar24 = iVar24 + *psVar25;
    }
    else if (uVar14 == 3) {
      iVar24 = iVar24 * 2;
    }
    else if (uVar14 == 6) {
      iVar24 = sVar19 + iVar24;
    }
    *param_4 = (float)(int)*psVar25 * param_9[1] + (float)iVar24 * *param_9;
    return;
  }
  if (uVar10 == 2) {
    iVar11 = (int)psVar25[-2];
    iVar24 = (int)psVar25[-1];
    iVar13 = (int)*psVar25;
    iVar15 = (int)psVar25[1];
    if (uVar14 == 1) {
      *param_4 = (float)iVar13 * param_9[2] + (float)(iVar11 + iVar15) * *param_9 +
                 param_9[1] * (float)(iVar24 + iVar15);
      param_4[1] = *param_9 * (float)(iVar24 + iVar15) + (float)(iVar13 + iVar15) * param_9[1] +
                   (float)iVar15 * param_9[2];
      return;
    }
    if (uVar14 == 3) {
      *param_4 = (float)(iVar11 + iVar13) * *param_9 + (float)iVar13 * param_9[2] +
                 (float)(iVar24 + iVar15) * param_9[1];
      param_4[1] = (float)(iVar24 * 2) * *param_9 + (float)(iVar13 * 2) * param_9[1] +
                   (float)iVar15 * param_9[2];
      return;
    }
    if (uVar14 == 6) {
      *param_4 = (float)iVar13 * param_9[2] + (float)(iVar24 + iVar15) * param_9[1] +
                 (float)(iVar11 + sVar19) * *param_9;
      param_4[1] = (float)iVar15 * param_9[2] + (float)(iVar24 + sVar19) * *param_9 +
                   (float)(sVar19 + iVar13) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar18) {
    if (6 < (longlong)uVar18) {
      psVar6 = psVar25 + -uVar10;
      lVar20 = lVar12 * 2 + -2;
      if ((lVar20 <= (longlong)(param_11 - (longlong)psVar6)) ||
         (lVar20 <= (longlong)-(param_11 - (longlong)psVar6))) {
        if ((longlong)uVar18 < 8) {
LAB_1407d9948:
          uVar17 = 0;
        }
        else {
          uVar7 = param_11 & 0xf;
          if (uVar7 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1407d9948;
            uVar7 = 0x10 - uVar7 >> 1;
          }
          if ((longlong)uVar18 < (longlong)(uVar7 + 8)) goto LAB_1407d9948;
          uVar17 = uVar18 - (uVar18 - uVar7 & 7);
          uVar21 = 0;
          if (uVar7 != 0) {
            do {
              *(short *)(param_11 + uVar21 * 2) = psVar6[uVar21];
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar7);
          }
          if (((ulonglong)(psVar25 + (uVar7 - uVar10)) & 0xf) == 0) {
            do {
              uVar26 = *(undefined8 *)(psVar6 + uVar7 + 4);
              puVar1 = (undefined8 *)(param_11 + uVar7 * 2);
              *puVar1 = *(undefined8 *)(psVar6 + uVar7);
              puVar1[1] = uVar26;
              uVar7 = uVar7 + 8;
            } while (uVar7 < uVar17);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(psVar6 + uVar7));
              *(undefined1 (*) [16])(param_11 + uVar7 * 2) = in_XMM0;
              uVar7 = uVar7 + 8;
            } while (uVar7 < uVar17);
          }
        }
        for (; uVar17 < uVar18; uVar17 = uVar17 + 1) {
          *(short *)(param_11 + uVar17 * 2) = psVar6[uVar17];
        }
        goto LAB_1407d94dc;
      }
    }
    lVar20 = 1;
    uVar7 = lVar12 - 1U >> 1;
    uVar18 = 0;
    if (uVar7 != 0) {
      do {
        uVar17 = uVar18;
        *(short *)(param_11 + uVar17 * 4) = psVar25[uVar17 * 2 - uVar10];
        *(short *)(param_11 + 2 + uVar17 * 4) = psVar25[(uVar17 * 2 + 1) - uVar10];
        uVar18 = uVar17 + 1;
      } while (uVar18 < uVar7);
      lVar20 = uVar17 + 2 + uVar18;
    }
    uVar18 = lVar20 - 1;
    if (uVar18 < lVar12 - 1U) {
      *(short *)(param_11 + uVar18 * 2) = psVar25[uVar18 - uVar10];
    }
  }
LAB_1407d94dc:
  if (uVar14 == 1) {
    if ((longlong)uVar10 < 1) goto LAB_1407d977b;
    if (6 < (longlong)uVar10) {
      lVar20 = param_11 + lVar12 * 2;
      uVar18 = lVar20 - 2;
      lVar9 = uVar18 - (lVar20 + -4);
      if ((1 < lVar9) || ((longlong)(uVar10 * 2) <= -lVar9)) {
        uVar2 = *(undefined2 *)(lVar20 + -4);
        if ((longlong)uVar10 < 8) {
LAB_1407d9958:
          uVar18 = 0;
        }
        else {
          uVar7 = uVar18 & 0xf;
          if (uVar7 != 0) {
            if ((uVar18 & 1) != 0) goto LAB_1407d9958;
            uVar7 = 0x10 - uVar7 >> 1;
          }
          if ((longlong)uVar10 < (longlong)(uVar7 + 8)) goto LAB_1407d9958;
          uVar17 = 0;
          uVar18 = uVar10 - (uVar10 - uVar7 & 7);
          if (uVar7 != 0) {
            do {
              *(undefined2 *)(lVar20 + -2 + uVar17 * 2) = uVar2;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar7);
          }
          uVar26 = CONCAT44(CONCAT22(uVar2,uVar2),CONCAT22(uVar2,uVar2));
          do {
            puVar1 = (undefined8 *)(lVar20 + -2 + uVar7 * 2);
            *puVar1 = uVar26;
            puVar1[1] = uVar26;
            uVar7 = uVar7 + 8;
          } while (uVar7 < uVar18);
        }
        for (; uVar18 < uVar10; uVar18 = uVar18 + 1) {
          *(undefined2 *)(lVar20 + -2 + uVar18 * 2) = uVar2;
        }
        goto LAB_1407d977b;
      }
    }
    lVar20 = 1;
    if (uVar10 >> 1 != 0) {
      lVar20 = param_11 + lVar12 * 2;
      uVar18 = 0;
      do {
        uVar7 = uVar18;
        *(undefined2 *)(lVar20 + -2 + uVar7 * 4) = *(undefined2 *)(lVar20 + -4);
        *(undefined2 *)(lVar20 + uVar7 * 4) = *(undefined2 *)(lVar20 + -4);
        uVar18 = uVar7 + 1;
      } while (uVar18 < uVar10 >> 1);
      lVar20 = uVar7 + 2 + uVar18;
    }
    if (lVar20 - 1U < uVar10) {
      *(undefined2 *)((param_11 - 2) + (lVar12 + -1 + lVar20) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar12 * 2);
    }
    goto LAB_1407d977b;
  }
  if (uVar14 == 3) {
    if (0 < (longlong)uVar10) {
      lVar20 = 1;
      lVar9 = 0;
      if (uVar10 >> 1 != 0) {
        lVar20 = param_11 + lVar12 * 2;
        uVar18 = 0;
        do {
          uVar7 = uVar18;
          *(undefined2 *)(lVar20 + -2 + uVar7 * 4) = *(undefined2 *)(lVar9 + -6 + lVar20);
          lVar23 = lVar9 + -8;
          lVar9 = lVar9 + -4;
          *(undefined2 *)(lVar20 + uVar7 * 4) = *(undefined2 *)(lVar23 + lVar20);
          uVar18 = uVar7 + 1;
        } while (uVar18 < uVar10 >> 1);
        lVar20 = uVar7 + 2 + uVar18;
      }
      if (lVar20 - 1U < uVar10) {
        *(undefined2 *)((param_11 - 2) + (lVar12 + -1 + lVar20) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar12 - (lVar20 - 1U)) * 2);
      }
    }
    goto LAB_1407d977b;
  }
  if ((uVar14 != 6) || ((longlong)uVar10 < 1)) goto LAB_1407d977b;
  if ((longlong)uVar10 < 8) {
LAB_1407d9950:
    uVar7 = 0;
  }
  else {
    lVar20 = param_11 + lVar12 * 2;
    uVar18 = lVar20 - 2U & 0xf;
    if (uVar18 != 0) {
      if ((lVar20 - 2U & 1) != 0) goto LAB_1407d9950;
      uVar18 = 0x10 - uVar18 >> 1;
    }
    if ((longlong)uVar10 < (longlong)(uVar18 + 8)) goto LAB_1407d9950;
    uVar17 = 0;
    uVar7 = uVar10 - (uVar10 - uVar18 & 7);
    if (uVar18 != 0) {
      do {
        *(short *)(lVar20 + -2 + uVar17 * 2) = sVar19;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar18);
    }
    uVar26 = CONCAT44(CONCAT22(sVar19,sVar19),CONCAT22(sVar19,sVar19));
    do {
      puVar1 = (undefined8 *)(lVar20 + -2 + uVar18 * 2);
      *puVar1 = uVar26;
      puVar1[1] = uVar26;
      uVar18 = uVar18 + 8;
    } while (uVar18 < uVar7);
  }
  if (uVar7 < uVar10) {
    do {
      *(short *)(param_11 + lVar12 * 2 + -2 + uVar7 * 2) = sVar19;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar10);
  }
LAB_1407d977b:
                    /* WARNING: Could not recover jumptable at 0x0001407d97b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_14308c420)[lVar4])(param_11 + uVar10 * 2,param_4,uVar10);
  return;
}

