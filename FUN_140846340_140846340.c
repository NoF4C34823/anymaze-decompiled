
void FUN_140846340(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte *pbVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  
  param_2 = param_2 * param_3;
  lVar12 = (longlong)param_10;
  lVar6 = (longlong)param_6;
  uVar22 = param_7 & 0xf;
  pbVar21 = (byte *)(param_1 + param_2);
  uVar8 = 0;
  uVar23 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001408474b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c880)[lVar6])(pbVar21,param_4,*param_5);
    return;
  }
  if (uVar22 == 6) {
    uVar8 = (uint)*param_8;
  }
  lVar24 = *param_5;
  uVar20 = lVar12 - 1;
  bVar13 = (byte)uVar8;
  if (lVar24 < (longlong)uVar20) {
    lVar12 = -uVar23;
    lVar7 = 0;
    if (lVar12 < (longlong)(uVar23 + lVar24)) {
      uVar11 = param_7 & 0x80;
      uVar8 = param_7 & 0x40;
      do {
        lVar10 = lVar12;
        if (((lVar12 < 0) || (lVar24 <= lVar12)) && (param_7 != 0xf0)) {
          if (uVar22 != 6) {
            if (uVar22 == 1) {
              if (lVar12 < 0) {
                lVar10 = 0;
                if (uVar8 != 0) {
                  lVar10 = lVar12;
                }
              }
              else if (uVar11 == 0) {
                lVar10 = lVar24 + -1;
              }
            }
            else if (uVar22 == 3) {
              if (lVar24 < 2) {
                if (lVar12 < 0) {
                  if (uVar8 == 0) {
                    lVar10 = -lVar12;
                    if (uVar11 == 0) {
                      lVar10 = 0;
                    }
                  }
                }
                else if ((0 < lVar12) && (uVar11 == 0)) {
                  lVar10 = -lVar12;
                  if (uVar8 == 0) {
                    lVar10 = 0;
                  }
                }
              }
              else if ((lVar12 < 0) || (lVar24 <= lVar12)) {
                if (lVar12 < 0) goto LAB_140847440;
                while (uVar11 == 0) {
                  for (lVar10 = (lVar24 + -1) * 2 - lVar10; lVar10 < 0; lVar10 = -lVar10) {
LAB_140847440:
                    if (uVar8 != 0) goto LAB_140847342;
                  }
                  if (lVar10 < lVar24) break;
                }
              }
            }
            goto LAB_140847342;
          }
          uVar17 = uVar8;
          if (-1 < lVar12) {
            uVar17 = uVar11;
          }
          bVar16 = bVar13;
          if (uVar17 != 0) goto LAB_140847342;
        }
        else {
LAB_140847342:
          bVar16 = pbVar21[lVar10];
        }
        lVar12 = lVar12 + 1;
        *(byte *)(lVar7 + param_11) = bVar16;
        lVar7 = lVar7 + 1;
      } while (lVar12 < (longlong)(uVar23 + lVar24));
    }
                    /* WARNING: Could not recover jumptable at 0x0001408473a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c880)[lVar6])(param_11 + uVar23,param_4,lVar24,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar23 == 1) {
      bVar16 = *pbVar21;
      bVar1 = pbVar21[1];
      if (uVar22 == 1) {
        uVar11 = (uint)bVar1 + (uint)bVar16;
      }
      else if (uVar22 == 3) {
        uVar11 = (uint)bVar1 * 2;
      }
      else {
        uVar11 = (uint)bVar1;
        if (uVar22 == 6) {
          uVar11 = bVar1 + uVar8;
        }
      }
      lVar24 = lVar24 + -1;
      pbVar21 = (byte *)(param_1 + 1 + param_2);
      *param_4 = (float)bVar16 * param_9[1] + (float)uVar11 * *param_9;
      param_4 = param_4 + 1;
    }
    else if (uVar23 == 2) {
      uVar11 = (uint)pbVar21[2];
      bVar16 = *pbVar21;
      bVar1 = pbVar21[1];
      bVar2 = pbVar21[3];
      uVar17 = (uint)bVar1;
      if (uVar22 == 1) {
        uVar15 = (uint)bVar16;
        *param_4 = (float)uVar15 * param_9[2] + (float)(uVar17 + uVar15) * param_9[1] +
                   (float)(uVar11 + uVar15) * *param_9;
        param_4[1] = (float)uVar17 * param_9[2] + (float)(uVar11 + uVar15) * param_9[1] +
                     (float)(uVar15 + bVar2) * *param_9;
      }
      else if (uVar22 == 3) {
        *param_4 = (float)bVar16 * param_9[2] + (float)((uint)bVar1 * 2) * param_9[1] +
                   (float)(uVar11 * 2) * *param_9;
        param_4[1] = (float)bVar1 * param_9[2] + (float)(bVar16 + uVar11) * param_9[1] +
                     (float)((uint)bVar2 + (uint)bVar1) * *param_9;
      }
      else if (uVar22 == 6) {
        *param_4 = (float)bVar16 * param_9[2] + (float)(uVar11 + uVar8) * *param_9 +
                   (float)(uVar17 + uVar8) * param_9[1];
        param_4[1] = (float)uVar17 * param_9[2] + (float)(bVar16 + uVar11) * param_9[1] +
                     (float)(bVar2 + uVar8) * *param_9;
      }
      param_4 = param_4 + 2;
      pbVar21 = (byte *)(param_1 + 2 + param_2);
      lVar24 = lVar24 + -2;
    }
    else {
      if (0 < (longlong)uVar20) {
        if (6 < (longlong)uVar20) {
          lVar7 = (param_11 + uVar23) - (longlong)pbVar21;
          if ((lVar12 + -1 <= lVar7) || (lVar12 + -1 <= -lVar7)) {
            uVar18 = uVar23 + param_11;
            if ((longlong)uVar20 < 0x10) {
LAB_1408473b6:
              uVar19 = 0;
            }
            else {
              uVar14 = uVar18 & 0xf;
              if (uVar14 != 0) {
                uVar14 = 0x10 - uVar14;
              }
              if ((longlong)uVar20 < (longlong)(uVar14 + 0x10)) goto LAB_1408473b6;
              uVar19 = uVar20 - (uVar20 - uVar14 & 0xf);
              uVar9 = 0;
              if (uVar14 != 0) {
                do {
                  *(byte *)(uVar9 + uVar18) = pbVar21[uVar9];
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar14);
              }
              do {
                uVar5 = *(undefined8 *)(pbVar21 + uVar14 + 8);
                *(undefined8 *)(uVar14 + uVar18) = *(undefined8 *)(pbVar21 + uVar14);
                ((undefined8 *)(uVar14 + uVar18))[1] = uVar5;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar19);
            }
            for (; uVar19 < uVar20; uVar19 = uVar19 + 1) {
              *(byte *)(uVar19 + uVar18) = pbVar21[uVar19];
            }
            goto LAB_1408467b5;
          }
        }
        lVar10 = 1;
        lVar7 = uVar23 + param_11;
        uVar14 = lVar12 - 1U >> 1;
        uVar18 = 0;
        if (uVar14 != 0) {
          do {
            uVar19 = uVar18;
            *(byte *)(lVar7 + uVar19 * 2) = pbVar21[uVar19 * 2];
            *(byte *)(lVar7 + 1 + uVar19 * 2) = pbVar21[uVar19 * 2 + 1];
            uVar18 = uVar19 + 1;
          } while (uVar18 < uVar14);
          lVar10 = uVar19 + 2 + uVar18;
        }
        uVar18 = lVar10 - 1;
        if (uVar18 < lVar12 - 1U) {
          *(byte *)(lVar7 + uVar18) = pbVar21[uVar18];
        }
      }
LAB_1408467b5:
      if (uVar22 == 1) {
        if (0 < (longlong)uVar23) {
          if ((longlong)uVar23 < 7) {
            lVar7 = 1;
            uVar18 = 0;
            if (uVar23 >> 1 != 0) {
              do {
                uVar14 = uVar18;
                *(undefined1 *)(param_11 + uVar14 * 2) = *(undefined1 *)(param_11 + uVar23);
                *(undefined1 *)(param_11 + 1 + uVar14 * 2) = *(undefined1 *)(param_11 + uVar23);
                uVar18 = uVar14 + 1;
              } while (uVar18 < uVar23 >> 1);
              lVar7 = uVar14 + 2 + uVar18;
            }
            if (lVar7 - 1U < uVar23) {
              *(undefined1 *)((lVar7 - 1U) + param_11) = *(undefined1 *)(param_11 + uVar23);
            }
          }
          else {
            bVar16 = *(byte *)(param_11 + uVar23);
            if ((longlong)uVar23 < 0x10) {
LAB_1408473c4:
              uVar14 = 0;
            }
            else {
              uVar18 = param_11 & 0xf;
              if (uVar18 != 0) {
                uVar18 = 0x10 - uVar18;
              }
              if ((longlong)uVar23 < (longlong)(uVar18 + 0x10)) goto LAB_1408473c4;
              uVar19 = 0;
              uVar14 = uVar23 - (uVar23 - uVar18 & 0xf);
              if (uVar18 != 0) {
                do {
                  *(byte *)(uVar19 + param_11) = bVar16;
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar18);
              }
              auVar3 = vpunpcklbw_avx(ZEXT116(bVar16),ZEXT116(bVar16));
              auVar3 = vpunpcklwd_avx(auVar3,auVar3);
              auVar3 = vpunpckldq_avx(auVar3,auVar3);
              auVar3 = vpunpcklqdq_avx(auVar3,auVar3);
              do {
                *(undefined1 (*) [16])(uVar18 + param_11) = auVar3;
                uVar18 = uVar18 + 0x10;
              } while (uVar18 < uVar14);
            }
            for (; uVar14 < uVar23; uVar14 = uVar14 + 1) {
              *(byte *)(uVar14 + param_11) = bVar16;
            }
          }
        }
      }
      else if (uVar22 == 3) {
        if (0 < (longlong)uVar23) {
          uVar18 = 0;
          lVar7 = 1;
          if (uVar23 >> 1 != 0) {
            uVar14 = uVar18;
            do {
              uVar19 = uVar14;
              *(undefined1 *)(param_11 + uVar19 * 2) =
                   *(undefined1 *)((uVar18 - 1) + lVar12 + param_11);
              lVar7 = uVar18 - 2;
              uVar18 = uVar18 - 2;
              *(undefined1 *)(param_11 + 1 + uVar19 * 2) =
                   *(undefined1 *)(lVar7 + lVar12 + param_11);
              uVar14 = uVar19 + 1;
            } while (uVar14 < uVar23 >> 1);
            lVar7 = uVar19 + 2 + uVar14;
          }
          uVar18 = lVar7 - 1;
          if (uVar18 < uVar23) {
            *(undefined1 *)(uVar18 + param_11) =
                 *(undefined1 *)(((lVar12 + param_11) - uVar18) + -1);
          }
        }
      }
      else if ((uVar22 == 6) && (0 < (longlong)uVar23)) {
        if ((longlong)uVar23 < 0x10) {
LAB_1408473bd:
          uVar14 = 0;
        }
        else {
          uVar18 = param_11 & 0xf;
          if (uVar18 != 0) {
            uVar18 = 0x10 - uVar18;
          }
          if ((longlong)uVar23 < (longlong)(uVar18 + 0x10)) goto LAB_1408473bd;
          uVar19 = 0;
          uVar14 = uVar23 - (uVar23 - uVar18 & 0xf);
          if (uVar18 != 0) {
            do {
              *(byte *)(uVar19 + param_11) = bVar13;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar18);
          }
          auVar3 = vpunpcklbw_avx(ZEXT416(uVar8),ZEXT416(uVar8));
          auVar3 = vpunpcklwd_avx(auVar3,auVar3);
          auVar3 = vpunpckldq_avx(auVar3,auVar3);
          auVar3 = vpunpcklqdq_avx(auVar3,auVar3);
          do {
            *(undefined1 (*) [16])(uVar18 + param_11) = auVar3;
            uVar18 = uVar18 + 0x10;
          } while (uVar18 < uVar14);
        }
        for (; uVar14 < uVar23; uVar14 = uVar14 + 1) {
          *(byte *)(uVar14 + param_11) = bVar13;
        }
      }
      (*(code *)(&PTR_FUN_14308c880)[lVar6])(uVar23 + param_11,param_4,uVar23,param_9,param_10);
      pbVar21 = pbVar21 + uVar23;
      param_4 = param_4 + uVar23;
      lVar24 = lVar24 - uVar23;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140847425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c880)[lVar6])(pbVar21,param_4,lVar24);
    return;
  }
  if ((longlong)uVar23 < lVar24) {
    lVar24 = lVar24 - uVar23;
    (*(code *)(&PTR_FUN_14308c880)[lVar6])(pbVar21,param_4,lVar24,param_9,param_10);
    pbVar21 = pbVar21 + lVar24;
    param_4 = param_4 + lVar24;
  }
  if (uVar23 == 1) {
    uVar11 = (uint)pbVar21[-1];
    if (uVar22 == 1) {
      uVar11 = uVar11 + *pbVar21;
    }
    else if (uVar22 == 3) {
      uVar11 = uVar11 * 2;
    }
    else if (uVar22 == 6) {
      uVar11 = uVar8 + uVar11;
    }
    *param_4 = (float)*pbVar21 * param_9[1] + (float)uVar11 * *param_9;
    return;
  }
  if (uVar23 == 2) {
    bVar13 = pbVar21[-2];
    bVar16 = pbVar21[-1];
    bVar1 = *pbVar21;
    bVar2 = pbVar21[1];
    uVar11 = (uint)bVar1;
    if (uVar22 == 1) {
      uVar8 = (uint)bVar2;
      fVar25 = (float)(bVar16 + uVar8);
      *param_4 = (float)uVar11 * param_9[2] + (float)(bVar13 + uVar8) * *param_9 +
                 fVar25 * param_9[1];
      param_4[1] = fVar25 * *param_9 + (float)(uVar11 + uVar8) * param_9[1] +
                   (float)uVar8 * param_9[2];
      return;
    }
    if (uVar22 == 3) {
      *param_4 = (float)((uint)bVar13 + (uint)bVar1) * *param_9 + (float)bVar1 * param_9[2] +
                 (float)((uint)bVar16 + (uint)bVar2) * param_9[1];
      param_4[1] = (float)((uint)bVar16 * 2) * *param_9 + (float)((uint)bVar1 * 2) * param_9[1] +
                   (float)bVar2 * param_9[2];
      return;
    }
    if (uVar22 == 6) {
      *param_4 = (float)uVar11 * param_9[2] + (float)((uint)bVar16 + (uint)bVar2) * param_9[1] +
                 (float)(bVar13 + uVar8) * *param_9;
      param_4[1] = (float)bVar2 * param_9[2] + (float)(bVar16 + uVar8) * *param_9 +
                   (float)(uVar8 + uVar11) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar20) {
    if (6 < (longlong)uVar20) {
      lVar24 = param_11 - ((longlong)pbVar21 - uVar23);
      if ((lVar12 + -1 <= lVar24) || (lVar12 + -1 <= -lVar24)) {
        if ((longlong)uVar20 < 0x10) {
LAB_1408473cb:
          uVar14 = 0;
        }
        else {
          uVar18 = param_11 & 0xf;
          if (uVar18 != 0) {
            uVar18 = 0x10 - uVar18;
          }
          if ((longlong)uVar20 < (longlong)(uVar18 + 0x10)) goto LAB_1408473cb;
          uVar14 = uVar20 - (uVar20 - uVar18 & 0xf);
          uVar19 = 0;
          if (uVar18 != 0) {
            do {
              *(byte *)(uVar19 + param_11) = pbVar21[uVar19 - uVar23];
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar18);
          }
          do {
            uVar5 = *(undefined8 *)(pbVar21 + (uVar18 - uVar23) + 8);
            *(undefined8 *)(uVar18 + param_11) = *(undefined8 *)(pbVar21 + (uVar18 - uVar23));
            ((undefined8 *)(uVar18 + param_11))[1] = uVar5;
            uVar18 = uVar18 + 0x10;
          } while (uVar18 < uVar14);
        }
        for (; uVar14 < uVar20; uVar14 = uVar14 + 1) {
          *(byte *)(uVar14 + param_11) = pbVar21[uVar14 - uVar23];
        }
        goto LAB_140846e5c;
      }
    }
    lVar24 = 1;
    uVar18 = lVar12 - 1U >> 1;
    uVar20 = 0;
    if (uVar18 != 0) {
      do {
        uVar14 = uVar20;
        lVar24 = uVar14 * 2 - uVar23;
        *(byte *)(param_11 + uVar14 * 2) = pbVar21[lVar24];
        *(byte *)(param_11 + 1 + uVar14 * 2) = pbVar21[lVar24 + 1];
        uVar20 = uVar14 + 1;
      } while (uVar20 < uVar18);
      lVar24 = uVar14 + 2 + uVar20;
    }
    uVar20 = lVar24 - 1;
    if (uVar20 < lVar12 - 1U) {
      *(byte *)(uVar20 + param_11) = pbVar21[uVar20 - uVar23];
    }
  }
LAB_140846e5c:
  if (uVar22 == 1) {
    if ((longlong)uVar23 < 1) goto LAB_1408471f1;
    if ((longlong)uVar23 < 7) {
      lVar24 = 1;
      if (uVar23 >> 1 != 0) {
        lVar24 = lVar12 + param_11;
        uVar20 = 0;
        do {
          uVar18 = uVar20;
          *(undefined1 *)(lVar24 + -1 + uVar18 * 2) = *(undefined1 *)(lVar24 + -2);
          *(undefined1 *)(lVar24 + uVar18 * 2) = *(undefined1 *)(lVar24 + -2);
          uVar20 = uVar18 + 1;
        } while (uVar20 < uVar23 >> 1);
        lVar24 = uVar18 + 2 + uVar20;
      }
      if (lVar24 - 1U < uVar23) {
        *(undefined1 *)(lVar12 + param_11 + -1 + (lVar24 - 1U)) =
             *(undefined1 *)(lVar12 + param_11 + -2);
      }
      goto LAB_1408471f1;
    }
    lVar24 = lVar12 + param_11;
    bVar13 = *(byte *)(lVar24 + -2);
    if ((longlong)uVar23 < 0x10) {
LAB_1408473e3:
      uVar18 = 0;
    }
    else {
      uVar20 = lVar12 + -1 + param_11 & 0xf;
      if (uVar20 != 0) {
        uVar20 = 0x10 - uVar20;
      }
      if ((longlong)uVar23 < (longlong)(uVar20 + 0x10)) goto LAB_1408473e3;
      uVar14 = 0;
      uVar18 = uVar23 - (uVar23 - uVar20 & 0xf);
      if (uVar20 != 0) {
        do {
          *(byte *)((uVar14 - 1) + lVar24) = bVar13;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar20);
      }
      auVar3 = vpunpcklbw_avx(ZEXT116(bVar13),ZEXT116(bVar13));
      auVar3 = vpunpcklwd_avx(auVar3,auVar3);
      auVar3 = vpunpckldq_avx(auVar3,auVar3);
      auVar3 = vpunpcklqdq_avx(auVar3,auVar3);
      do {
        *(undefined1 (*) [16])((uVar20 - 1) + lVar24) = auVar3;
        uVar20 = uVar20 + 0x10;
      } while (uVar20 < uVar18);
    }
    for (; uVar18 < uVar23; uVar18 = uVar18 + 1) {
      *(byte *)((uVar18 - 1) + lVar24) = bVar13;
    }
    goto LAB_1408471f1;
  }
  if (uVar22 != 3) {
    if ((uVar22 != 6) || ((longlong)uVar23 < 1)) goto LAB_1408471f1;
    if ((longlong)uVar23 < 0x10) {
LAB_1408473db:
      uVar18 = 0;
    }
    else {
      uVar20 = lVar12 + -1 + param_11 & 0xf;
      if (uVar20 != 0) {
        uVar20 = 0x10 - uVar20;
      }
      if ((longlong)uVar23 < (longlong)(uVar20 + 0x10)) goto LAB_1408473db;
      uVar14 = 0;
      uVar18 = uVar23 - (uVar23 - uVar20 & 0xf);
      if (uVar20 != 0) {
        do {
          *(byte *)((uVar14 - 1) + lVar12 + param_11) = bVar13;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar20);
      }
      auVar3 = vpunpcklbw_avx(ZEXT416(uVar8),ZEXT416(uVar8));
      auVar3 = vpunpcklwd_avx(auVar3,auVar3);
      auVar3 = vpunpckldq_avx(auVar3,auVar3);
      auVar3 = vpunpcklqdq_avx(auVar3,auVar3);
      do {
        *(undefined1 (*) [16])((uVar20 - 1) + lVar12 + param_11) = auVar3;
        uVar20 = uVar20 + 0x10;
      } while (uVar20 < uVar18);
    }
    if (uVar18 < uVar23) {
      do {
        *(byte *)((uVar18 - 1) + lVar12 + param_11) = bVar13;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar23);
    }
    goto LAB_1408471f1;
  }
  if ((longlong)uVar23 < 1) goto LAB_1408471f1;
  if ((longlong)uVar23 < 0x10) {
LAB_1408473d3:
    uVar18 = 0;
  }
  else {
    uVar20 = lVar12 + -1 + param_11 & 0xf;
    lVar24 = lVar12 + param_11;
    if (uVar20 != 0) {
      uVar20 = 0x10 - uVar20;
    }
    if ((longlong)uVar23 < (longlong)(uVar20 + 0x10)) goto LAB_1408473d3;
    uVar14 = 0;
    lVar7 = 0;
    uVar18 = uVar23 - (uVar23 - uVar20 & 0xf);
    if (uVar20 != 0) {
      do {
        lVar10 = lVar7 + -3;
        lVar7 = lVar7 + -1;
        *(undefined1 *)((uVar14 - 1) + lVar24) = *(undefined1 *)(lVar10 + lVar24);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar20);
    }
    lVar7 = -uVar20;
    do {
      auVar3 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar7 + -3 + lVar24),0);
      auVar4 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar7 + -4 + lVar24),0);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(lVar7 + -5 + lVar24),1);
      auVar4 = vpinsrb_avx(auVar4,(uint)*(byte *)(lVar7 + -6 + lVar24),1);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(lVar7 + -7 + lVar24),2);
      auVar4 = vpinsrb_avx(auVar4,(uint)*(byte *)(lVar7 + -8 + lVar24),2);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(lVar7 + -9 + lVar24),3);
      auVar4 = vpinsrb_avx(auVar4,(uint)*(byte *)(lVar7 + -10 + lVar24),3);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(lVar7 + -0xb + lVar24),4);
      auVar4 = vpinsrb_avx(auVar4,(uint)*(byte *)(lVar7 + -0xc + lVar24),4);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(lVar7 + -0xd + lVar24),5);
      auVar4 = vpinsrb_avx(auVar4,(uint)*(byte *)(lVar7 + -0xe + lVar24),5);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(lVar7 + -0xf + lVar24),6);
      auVar4 = vpinsrb_avx(auVar4,(uint)*(byte *)(lVar7 + -0x10 + lVar24),6);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(lVar7 + -0x11 + lVar24),7);
      auVar4 = vpinsrb_avx(auVar4,(uint)*(byte *)(lVar7 + -0x12 + lVar24),7);
      auVar3 = vpunpcklbw_avx(auVar3,auVar4);
      lVar7 = lVar7 + -0x10;
      *(undefined1 (*) [16])((uVar20 - 1) + lVar24) = auVar3;
      uVar20 = uVar20 + 0x10;
    } while (uVar20 < uVar18);
  }
  lVar24 = -uVar18;
  if (uVar18 < uVar23) {
    do {
      lVar7 = lVar24 + -3;
      lVar24 = lVar24 + -1;
      *(undefined1 *)((uVar18 - 1) + lVar12 + param_11) = *(undefined1 *)(lVar7 + lVar12 + param_11)
      ;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar23);
  }
LAB_1408471f1:
                    /* WARNING: Could not recover jumptable at 0x000140847231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_14308c880)[lVar6])(param_11 + uVar23,param_4,uVar23);
  return;
}

