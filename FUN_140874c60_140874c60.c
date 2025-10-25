
void FUN_140874c60(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  short *psVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  short *psVar23;
  short sVar24;
  longlong lVar25;
  short sVar26;
  
  param_2 = param_2 * param_3;
  lVar14 = (longlong)param_10;
  lVar5 = (longlong)param_6;
  uVar19 = param_7 & 0xf;
  psVar23 = (short *)(param_1 + param_2);
  uVar7 = 0;
  uVar11 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x000140875cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308caa0)[lVar5])(psVar23,param_4,*param_5);
    return;
  }
  if (uVar19 == 6) {
    uVar7 = (uint)*param_8;
  }
  lVar16 = *param_5;
  uVar20 = lVar14 - 1;
  sVar26 = (short)uVar7;
  if (lVar16 < (longlong)uVar20) {
    lVar14 = -uVar11;
    lVar9 = 0;
    if (lVar14 < (longlong)(uVar11 + lVar16)) {
      uVar13 = param_7 & 0x80;
      uVar7 = param_7 & 0x40;
      do {
        lVar25 = lVar14;
        if (((lVar14 < 0) || (lVar16 <= lVar14)) && (param_7 != 0xf0)) {
          if (uVar19 != 6) {
            if (uVar19 == 1) {
              if (lVar14 < 0) {
                lVar25 = 0;
                if (uVar7 != 0) {
                  lVar25 = lVar14;
                }
              }
              else if (uVar13 == 0) {
                lVar25 = lVar16 + -1;
              }
            }
            else if (uVar19 == 3) {
              if (lVar16 < 2) {
                if (lVar14 < 0) {
                  if (uVar7 == 0) {
                    lVar25 = -lVar14;
                    if (uVar13 == 0) {
                      lVar25 = 0;
                    }
                  }
                }
                else if ((0 < lVar14) && (uVar13 == 0)) {
                  lVar25 = -lVar14;
                  if (uVar7 == 0) {
                    lVar25 = 0;
                  }
                }
              }
              else if ((lVar14 < 0) || (lVar16 <= lVar14)) {
                if (lVar14 < 0) goto LAB_140875c40;
                while (uVar13 == 0) {
                  for (lVar25 = (lVar16 + -1) * 2 - lVar25; lVar25 < 0; lVar25 = -lVar25) {
LAB_140875c40:
                    if (uVar7 != 0) goto LAB_140875b42;
                  }
                  if (lVar25 < lVar16) break;
                }
              }
            }
            goto LAB_140875b42;
          }
          uVar4 = uVar7;
          if (-1 < lVar14) {
            uVar4 = uVar13;
          }
          sVar24 = sVar26;
          if (uVar4 != 0) goto LAB_140875b42;
        }
        else {
LAB_140875b42:
          sVar24 = psVar23[lVar25];
        }
        lVar14 = lVar14 + 1;
        *(short *)(param_11 + lVar9 * 2) = sVar24;
        lVar9 = lVar9 + 1;
      } while (lVar14 < (longlong)(uVar11 + lVar16));
    }
                    /* WARNING: Could not recover jumptable at 0x000140875ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308caa0)[lVar5])(param_11 + uVar11 * 2,param_4,lVar16,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar11 == 1) {
      sVar24 = *psVar23;
      iVar22 = (int)psVar23[1];
      if (uVar19 == 1) {
        iVar22 = iVar22 + sVar24;
      }
      else if (uVar19 == 3) {
        iVar22 = iVar22 * 2;
      }
      else if (uVar19 == 6) {
        iVar22 = sVar26 + iVar22;
      }
      lVar16 = lVar16 + -1;
      psVar23 = (short *)(param_1 + 2 + param_2);
      *param_4 = (float)(int)sVar24 * param_9[1] + (float)iVar22 * *param_9;
      param_4 = param_4 + 1;
    }
    else if (uVar11 == 2) {
      iVar12 = (int)psVar23[1];
      iVar15 = (int)psVar23[2];
      iVar22 = (int)*psVar23;
      iVar21 = (int)psVar23[3];
      if (uVar19 == 1) {
        *param_4 = (float)iVar22 * param_9[2] + (float)(iVar12 + iVar22) * param_9[1] +
                   (float)(iVar15 + iVar22) * *param_9;
        param_4[1] = (float)iVar12 * param_9[2] + (float)(iVar15 + iVar22) * param_9[1] +
                     (float)(iVar22 + iVar21) * *param_9;
      }
      else if (uVar19 == 3) {
        *param_4 = (float)iVar22 * param_9[2] + (float)(iVar12 * 2) * param_9[1] +
                   (float)(iVar15 * 2) * *param_9;
        param_4[1] = (float)iVar12 * param_9[2] + (float)(iVar22 + iVar15) * param_9[1] +
                     (float)(iVar21 + iVar12) * *param_9;
      }
      else if (uVar19 == 6) {
        *param_4 = (float)iVar22 * param_9[2] + (float)(iVar15 + sVar26) * *param_9 +
                   (float)(iVar12 + sVar26) * param_9[1];
        param_4[1] = (float)iVar12 * param_9[2] + (float)(iVar22 + iVar15) * param_9[1] +
                     (float)(sVar26 + iVar21) * *param_9;
      }
      param_4 = param_4 + 2;
      psVar23 = (short *)(param_1 + 4 + param_2);
      lVar16 = lVar16 + -2;
    }
    else {
      uVar18 = param_11 + uVar11 * 2;
      if (0 < (longlong)uVar20) {
        if (6 < (longlong)uVar20) {
          lVar9 = lVar14 * 2 + -2;
          if ((lVar9 <= (longlong)(uVar18 - (longlong)psVar23)) ||
             (lVar9 <= (longlong)-(uVar18 - (longlong)psVar23))) {
            if ((longlong)uVar20 < 8) {
LAB_140875bb6:
              uVar8 = 0;
            }
            else {
              uVar6 = uVar18 & 0xf;
              if (uVar6 != 0) {
                if ((uVar18 & 1) != 0) goto LAB_140875bb6;
                uVar6 = 0x10 - uVar6 >> 1;
              }
              if ((longlong)uVar20 < (longlong)(uVar6 + 8)) goto LAB_140875bb6;
              uVar8 = uVar20 - (uVar20 - uVar6 & 7);
              uVar10 = 0;
              if (uVar6 != 0) {
                do {
                  *(short *)(uVar18 + uVar10 * 2) = psVar23[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar6);
              }
              do {
                uVar3 = *(undefined8 *)(psVar23 + uVar6 + 4);
                puVar1 = (undefined8 *)(uVar18 + uVar6 * 2);
                *puVar1 = *(undefined8 *)(psVar23 + uVar6);
                puVar1[1] = uVar3;
                uVar6 = uVar6 + 8;
              } while (uVar6 < uVar8);
            }
            for (; uVar8 < uVar20; uVar8 = uVar8 + 1) {
              *(short *)(uVar18 + uVar8 * 2) = psVar23[uVar8];
            }
            goto LAB_1408750fd;
          }
        }
        lVar9 = 1;
        uVar8 = lVar14 - 1U >> 1;
        uVar6 = 0;
        if (uVar8 != 0) {
          do {
            uVar10 = uVar6;
            *(short *)(uVar18 + uVar10 * 4) = psVar23[uVar10 * 2];
            *(short *)(uVar18 + 2 + uVar10 * 4) = psVar23[uVar10 * 2 + 1];
            uVar6 = uVar10 + 1;
          } while (uVar6 < uVar8);
          lVar9 = uVar10 + 2 + uVar6;
        }
        if (lVar9 - 1U < lVar14 - 1U) {
          *(short *)(param_11 + ((uVar11 - 1) + lVar9) * 2) = psVar23[lVar9 - 1U];
        }
      }
LAB_1408750fd:
      if (uVar19 == 1) {
        if ((longlong)uVar11 < 1) goto LAB_14087530d;
        sVar24 = *(short *)(param_11 + uVar11 * 2);
        if ((longlong)uVar11 < 8) {
LAB_140875c18:
          uVar8 = 0;
        }
        else {
          uVar6 = param_11 & 0xf;
          if (uVar6 != 0) {
            if ((param_11 & 1) != 0) goto LAB_140875c18;
            uVar6 = 0x10 - uVar6 >> 1;
          }
          if ((longlong)uVar11 < (longlong)(uVar6 + 8)) goto LAB_140875c18;
          uVar10 = 0;
          uVar8 = uVar11 - (uVar11 - uVar6 & 7);
          if (uVar6 != 0) {
            do {
              *(short *)(param_11 + uVar10 * 2) = sVar24;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar6);
          }
          auVar2 = vpunpcklwd_avx(ZEXT416((uint)(int)sVar24),ZEXT416((uint)(int)sVar24));
          auVar2 = vpunpckldq_avx(auVar2,auVar2);
          auVar2 = vpunpcklqdq_avx(auVar2,auVar2);
          do {
            *(undefined1 (*) [16])(param_11 + uVar6 * 2) = auVar2;
            uVar6 = uVar6 + 8;
          } while (uVar6 < uVar8);
        }
        for (; uVar8 < uVar11; uVar8 = uVar8 + 1) {
          *(short *)(param_11 + uVar8 * 2) = sVar24;
        }
      }
      else if (uVar19 == 3) {
        if (0 < (longlong)uVar11) {
          uVar6 = 0;
          lVar9 = 1;
          if (uVar11 >> 1 != 0) {
            lVar9 = param_11 + lVar14 * 2;
            uVar8 = uVar6;
            do {
              uVar10 = uVar8;
              *(undefined2 *)(param_11 + uVar10 * 4) = *(undefined2 *)((uVar6 - 2) + lVar9);
              lVar25 = uVar6 - 4;
              uVar6 = uVar6 - 4;
              *(undefined2 *)(param_11 + 2 + uVar10 * 4) = *(undefined2 *)(lVar25 + lVar9);
              uVar8 = uVar10 + 1;
            } while (uVar8 < uVar11 >> 1);
            lVar9 = uVar10 + 2 + uVar8;
          }
          uVar6 = lVar9 - 1;
          if (uVar6 < uVar11) {
            *(undefined2 *)(param_11 + uVar6 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar14 - uVar6) * 2);
          }
        }
      }
      else if ((uVar19 == 6) && (0 < (longlong)uVar11)) {
        if ((longlong)uVar11 < 8) {
LAB_140875bbd:
          uVar8 = 0;
        }
        else {
          uVar6 = param_11 & 0xf;
          if (uVar6 != 0) {
            if ((param_11 & 1) != 0) goto LAB_140875bbd;
            uVar6 = 0x10 - uVar6 >> 1;
          }
          if ((longlong)uVar11 < (longlong)(uVar6 + 8)) goto LAB_140875bbd;
          uVar10 = 0;
          uVar8 = uVar11 - (uVar11 - uVar6 & 7);
          if (uVar6 != 0) {
            do {
              *(short *)(param_11 + uVar10 * 2) = sVar26;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar6);
          }
          auVar2 = vpunpcklwd_avx(ZEXT416(uVar7),ZEXT416(uVar7));
          auVar2 = vpunpckldq_avx(auVar2,auVar2);
          auVar2 = vpunpcklqdq_avx(auVar2,auVar2);
          do {
            *(undefined1 (*) [16])(param_11 + uVar6 * 2) = auVar2;
            uVar6 = uVar6 + 8;
          } while (uVar6 < uVar8);
        }
        for (; uVar8 < uVar11; uVar8 = uVar8 + 1) {
          *(short *)(param_11 + uVar8 * 2) = sVar26;
        }
      }
LAB_14087530d:
      (*(code *)(&PTR_FUN_14308caa0)[lVar5])(uVar18,param_4,uVar11,param_9,param_10);
      psVar23 = psVar23 + uVar11;
      param_4 = param_4 + uVar11;
      lVar16 = lVar16 - uVar11;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140875c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308caa0)[lVar5])(psVar23,param_4,lVar16);
    return;
  }
  if ((longlong)uVar11 < lVar16) {
    lVar16 = lVar16 - uVar11;
    (*(code *)(&PTR_FUN_14308caa0)[lVar5])(psVar23,param_4,lVar16,param_9,param_10);
    psVar23 = psVar23 + lVar16;
    param_4 = param_4 + lVar16;
  }
  if (uVar11 == 1) {
    iVar22 = (int)psVar23[-1];
    if (uVar19 == 1) {
      iVar22 = iVar22 + *psVar23;
    }
    else if (uVar19 == 3) {
      iVar22 = iVar22 * 2;
    }
    else if (uVar19 == 6) {
      iVar22 = sVar26 + iVar22;
    }
    *param_4 = (float)(int)*psVar23 * param_9[1] + (float)iVar22 * *param_9;
    return;
  }
  if (uVar11 == 2) {
    iVar12 = (int)psVar23[-2];
    iVar22 = (int)psVar23[-1];
    iVar15 = (int)*psVar23;
    iVar21 = (int)psVar23[1];
    if (uVar19 == 1) {
      *param_4 = (float)iVar15 * param_9[2] + (float)(iVar12 + iVar21) * *param_9 +
                 (float)(iVar22 + iVar21) * param_9[1];
      param_4[1] = (float)(iVar22 + iVar21) * *param_9 + (float)(iVar15 + iVar21) * param_9[1] +
                   (float)iVar21 * param_9[2];
      return;
    }
    if (uVar19 == 3) {
      *param_4 = (float)(iVar12 + iVar15) * *param_9 + (float)iVar15 * param_9[2] +
                 (float)(iVar22 + iVar21) * param_9[1];
      param_4[1] = (float)(iVar22 * 2) * *param_9 + (float)(iVar15 * 2) * param_9[1] +
                   (float)iVar21 * param_9[2];
      return;
    }
    if (uVar19 == 6) {
      *param_4 = (float)iVar15 * param_9[2] + (float)(iVar22 + iVar21) * param_9[1] +
                 (float)(iVar12 + sVar26) * *param_9;
      param_4[1] = (float)iVar21 * param_9[2] + (float)(iVar22 + sVar26) * *param_9 +
                   (float)(sVar26 + iVar15) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar20) {
    if (6 < (longlong)uVar20) {
      psVar17 = psVar23 + -uVar11;
      lVar16 = lVar14 * 2 + -2;
      if ((lVar16 <= (longlong)(param_11 - (longlong)psVar17)) ||
         (lVar16 <= (longlong)-(param_11 - (longlong)psVar17))) {
        if ((longlong)uVar20 < 8) {
LAB_140875bc5:
          uVar6 = 0;
        }
        else {
          uVar18 = param_11 & 0xf;
          if (uVar18 != 0) {
            if ((param_11 & 1) != 0) goto LAB_140875bc5;
            uVar18 = 0x10 - uVar18 >> 1;
          }
          if ((longlong)uVar20 < (longlong)(uVar18 + 8)) goto LAB_140875bc5;
          uVar6 = uVar20 - (uVar20 - uVar18 & 7);
          uVar8 = 0;
          if (uVar18 != 0) {
            do {
              *(short *)(param_11 + uVar8 * 2) = psVar17[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar18);
          }
          do {
            uVar3 = *(undefined8 *)(psVar17 + uVar18 + 4);
            puVar1 = (undefined8 *)(param_11 + uVar18 * 2);
            *puVar1 = *(undefined8 *)(psVar17 + uVar18);
            puVar1[1] = uVar3;
            uVar18 = uVar18 + 8;
          } while (uVar18 < uVar6);
        }
        for (; uVar6 < uVar20; uVar6 = uVar6 + 1) {
          *(short *)(param_11 + uVar6 * 2) = psVar17[uVar6];
        }
        goto LAB_14087575c;
      }
    }
    lVar16 = 1;
    uVar18 = lVar14 - 1U >> 1;
    uVar20 = 0;
    if (uVar18 != 0) {
      do {
        uVar6 = uVar20;
        *(short *)(param_11 + uVar6 * 4) = psVar23[uVar6 * 2 - uVar11];
        *(short *)(param_11 + 2 + uVar6 * 4) = psVar23[(uVar6 * 2 + 1) - uVar11];
        uVar20 = uVar6 + 1;
      } while (uVar20 < uVar18);
      lVar16 = uVar6 + 2 + uVar20;
    }
    uVar20 = lVar16 - 1;
    if (uVar20 < lVar14 - 1U) {
      *(short *)(param_11 + uVar20 * 2) = psVar23[uVar20 - uVar11];
    }
  }
LAB_14087575c:
  if (uVar19 == 1) {
    if ((longlong)uVar11 < 1) goto LAB_1408759fa;
    if (6 < (longlong)uVar11) {
      lVar16 = param_11 + lVar14 * 2;
      uVar20 = lVar16 - 2;
      lVar9 = uVar20 - (lVar16 + -4);
      if ((1 < lVar9) || ((longlong)(uVar11 * 2) <= -lVar9)) {
        sVar26 = *(short *)(lVar16 + -4);
        if ((longlong)uVar11 < 8) {
LAB_140875bd3:
          uVar20 = 0;
        }
        else {
          uVar18 = uVar20 & 0xf;
          if (uVar18 != 0) {
            if ((uVar20 & 1) != 0) goto LAB_140875bd3;
            uVar18 = 0x10 - uVar18 >> 1;
          }
          if ((longlong)uVar11 < (longlong)(uVar18 + 8)) goto LAB_140875bd3;
          uVar6 = 0;
          uVar20 = uVar11 - (uVar11 - uVar18 & 7);
          if (uVar18 != 0) {
            do {
              *(short *)(lVar16 + -2 + uVar6 * 2) = sVar26;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar18);
          }
          auVar2 = vpunpcklwd_avx(ZEXT416((uint)(int)sVar26),ZEXT416((uint)(int)sVar26));
          auVar2 = vpunpckldq_avx(auVar2,auVar2);
          auVar2 = vpunpcklqdq_avx(auVar2,auVar2);
          do {
            *(undefined1 (*) [16])(lVar16 + -2 + uVar18 * 2) = auVar2;
            uVar18 = uVar18 + 8;
          } while (uVar18 < uVar20);
        }
        for (; uVar20 < uVar11; uVar20 = uVar20 + 1) {
          *(short *)(lVar16 + -2 + uVar20 * 2) = sVar26;
        }
        goto LAB_1408759fa;
      }
    }
    lVar16 = 1;
    if (uVar11 >> 1 != 0) {
      lVar16 = param_11 + lVar14 * 2;
      uVar20 = 0;
      do {
        uVar18 = uVar20;
        *(undefined2 *)(lVar16 + -2 + uVar18 * 4) = *(undefined2 *)(lVar16 + -4);
        *(undefined2 *)(lVar16 + uVar18 * 4) = *(undefined2 *)(lVar16 + -4);
        uVar20 = uVar18 + 1;
      } while (uVar20 < uVar11 >> 1);
      lVar16 = uVar18 + 2 + uVar20;
    }
    if (lVar16 - 1U < uVar11) {
      *(undefined2 *)((param_11 - 2) + (lVar14 + -1 + lVar16) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar14 * 2);
    }
    goto LAB_1408759fa;
  }
  if (uVar19 == 3) {
    if (0 < (longlong)uVar11) {
      lVar16 = 1;
      lVar9 = 0;
      if (uVar11 >> 1 != 0) {
        lVar16 = param_11 + lVar14 * 2;
        uVar20 = 0;
        do {
          uVar18 = uVar20;
          *(undefined2 *)(lVar16 + -2 + uVar18 * 4) = *(undefined2 *)(lVar9 + -6 + lVar16);
          lVar25 = lVar9 + -8;
          lVar9 = lVar9 + -4;
          *(undefined2 *)(lVar16 + uVar18 * 4) = *(undefined2 *)(lVar25 + lVar16);
          uVar20 = uVar18 + 1;
        } while (uVar20 < uVar11 >> 1);
        lVar16 = uVar18 + 2 + uVar20;
      }
      if (lVar16 - 1U < uVar11) {
        *(undefined2 *)((param_11 - 2) + (lVar14 + -1 + lVar16) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar14 - (lVar16 - 1U)) * 2);
      }
    }
    goto LAB_1408759fa;
  }
  if ((uVar19 != 6) || ((longlong)uVar11 < 1)) goto LAB_1408759fa;
  if ((longlong)uVar11 < 8) {
LAB_140875bcc:
    uVar18 = 0;
  }
  else {
    lVar16 = param_11 + lVar14 * 2;
    uVar20 = lVar16 - 2U & 0xf;
    if (uVar20 != 0) {
      if ((lVar16 - 2U & 1) != 0) goto LAB_140875bcc;
      uVar20 = 0x10 - uVar20 >> 1;
    }
    if ((longlong)uVar11 < (longlong)(uVar20 + 8)) goto LAB_140875bcc;
    uVar6 = 0;
    uVar18 = uVar11 - (uVar11 - uVar20 & 7);
    if (uVar20 != 0) {
      do {
        *(short *)(lVar16 + -2 + uVar6 * 2) = sVar26;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar20);
    }
    auVar2 = vpunpcklwd_avx(ZEXT416(uVar7),ZEXT416(uVar7));
    auVar2 = vpunpckldq_avx(auVar2,auVar2);
    auVar2 = vpunpcklqdq_avx(auVar2,auVar2);
    do {
      *(undefined1 (*) [16])(lVar16 + -2 + uVar20 * 2) = auVar2;
      uVar20 = uVar20 + 8;
    } while (uVar20 < uVar18);
  }
  if (uVar18 < uVar11) {
    do {
      *(short *)(param_11 + lVar14 * 2 + -2 + uVar18 * 2) = sVar26;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar11);
  }
LAB_1408759fa:
                    /* WARNING: Could not recover jumptable at 0x000140875a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_14308caa0)[lVar5])(param_11 + uVar11 * 2,param_4,uVar11);
  return;
}

