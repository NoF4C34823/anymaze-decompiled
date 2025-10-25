
void FUN_140899020(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ushort *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ushort *puVar22;
  ushort uVar23;
  longlong lVar24;
  ushort uVar25;
  float fVar26;
  
  param_2 = param_2 * param_3;
  lVar14 = (longlong)param_10;
  lVar6 = (longlong)param_6;
  uVar18 = param_7 & 0xf;
  puVar22 = (ushort *)(param_1 + param_2);
  uVar8 = 0;
  uVar12 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x00014089a034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308cc00)[lVar6])(puVar22,param_4,*param_5);
    return;
  }
  if (uVar18 == 6) {
    uVar8 = (uint)*param_8;
  }
  lVar15 = *param_5;
  uVar19 = lVar14 - 1;
  uVar25 = (ushort)uVar8;
  if (lVar15 < (longlong)uVar19) {
    lVar14 = -uVar12;
    lVar10 = 0;
    if (lVar14 < (longlong)(uVar12 + lVar15)) {
      uVar13 = param_7 & 0x80;
      uVar8 = param_7 & 0x40;
      do {
        lVar24 = lVar14;
        if (((lVar14 < 0) || (lVar15 <= lVar14)) && (param_7 != 0xf0)) {
          if (uVar18 != 6) {
            if (uVar18 == 1) {
              if (lVar14 < 0) {
                lVar24 = 0;
                if (uVar8 != 0) {
                  lVar24 = lVar14;
                }
              }
              else if (uVar13 == 0) {
                lVar24 = lVar15 + -1;
              }
            }
            else if (uVar18 == 3) {
              if (lVar15 < 2) {
                if (lVar14 < 0) {
                  if (uVar8 == 0) {
                    lVar24 = -lVar14;
                    if (uVar13 == 0) {
                      lVar24 = 0;
                    }
                  }
                }
                else if ((0 < lVar14) && (uVar13 == 0)) {
                  lVar24 = -lVar14;
                  if (uVar8 == 0) {
                    lVar24 = 0;
                  }
                }
              }
              else if ((lVar14 < 0) || (lVar15 <= lVar14)) {
                if (lVar14 < 0) goto LAB_140899fc0;
                while (uVar13 == 0) {
                  for (lVar24 = (lVar15 + -1) * 2 - lVar24; lVar24 < 0; lVar24 = -lVar24) {
LAB_140899fc0:
                    if (uVar8 != 0) goto LAB_140899ec2;
                  }
                  if (lVar24 < lVar15) break;
                }
              }
            }
            goto LAB_140899ec2;
          }
          uVar21 = uVar8;
          if (-1 < lVar14) {
            uVar21 = uVar13;
          }
          uVar23 = uVar25;
          if (uVar21 != 0) goto LAB_140899ec2;
        }
        else {
LAB_140899ec2:
          uVar23 = puVar22[lVar24];
        }
        lVar14 = lVar14 + 1;
        *(ushort *)(param_11 + lVar10 * 2) = uVar23;
        lVar10 = lVar10 + 1;
      } while (lVar14 < (longlong)(uVar12 + lVar15));
    }
                    /* WARNING: Could not recover jumptable at 0x000140899f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308cc00)[lVar6])(param_11 + uVar12 * 2,param_4,lVar15,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar12 == 1) {
      uVar23 = *puVar22;
      uVar2 = puVar22[1];
      if (uVar18 == 1) {
        uVar13 = (uint)uVar2 + (uint)uVar23;
      }
      else if (uVar18 == 3) {
        uVar13 = (uint)uVar2 * 2;
      }
      else {
        uVar13 = (uint)uVar2;
        if (uVar18 == 6) {
          uVar13 = uVar2 + uVar8;
        }
      }
      lVar15 = lVar15 + -1;
      puVar22 = (ushort *)(param_1 + 2 + param_2);
      *param_4 = (float)uVar23 * param_9[1] + (float)uVar13 * *param_9;
      param_4 = param_4 + 1;
    }
    else if (uVar12 == 2) {
      uVar13 = (uint)puVar22[2];
      uVar23 = *puVar22;
      uVar2 = puVar22[1];
      uVar3 = puVar22[3];
      uVar21 = (uint)uVar2;
      if (uVar18 == 1) {
        uVar20 = (uint)uVar23;
        *param_4 = (float)uVar20 * param_9[2] + (float)(uVar21 + uVar20) * param_9[1] +
                   (float)(uVar13 + uVar20) * *param_9;
        param_4[1] = (float)uVar21 * param_9[2] + (float)(uVar13 + uVar20) * param_9[1] +
                     (float)(uVar20 + uVar3) * *param_9;
      }
      else if (uVar18 == 3) {
        *param_4 = (float)uVar23 * param_9[2] + (float)((uint)uVar2 * 2) * param_9[1] +
                   (float)(uVar13 * 2) * *param_9;
        param_4[1] = (float)uVar2 * param_9[2] + (float)(uVar23 + uVar13) * param_9[1] +
                     (float)((uint)uVar3 + (uint)uVar2) * *param_9;
      }
      else if (uVar18 == 6) {
        *param_4 = (float)uVar23 * param_9[2] + (float)(uVar13 + uVar8) * *param_9 +
                   (float)(uVar21 + uVar8) * param_9[1];
        param_4[1] = (float)uVar21 * param_9[2] + (float)(uVar23 + uVar13) * param_9[1] +
                     (float)(uVar3 + uVar8) * *param_9;
      }
      param_4 = param_4 + 2;
      puVar22 = (ushort *)(param_1 + 4 + param_2);
      lVar15 = lVar15 + -2;
    }
    else {
      uVar17 = param_11 + uVar12 * 2;
      if (0 < (longlong)uVar19) {
        if (6 < (longlong)uVar19) {
          lVar10 = lVar14 * 2 + -2;
          if ((lVar10 <= (longlong)(uVar17 - (longlong)puVar22)) ||
             (lVar10 <= (longlong)-(uVar17 - (longlong)puVar22))) {
            if ((longlong)uVar19 < 8) {
LAB_140899f36:
              uVar9 = 0;
            }
            else {
              uVar7 = uVar17 & 0xf;
              if (uVar7 != 0) {
                if ((uVar17 & 1) != 0) goto LAB_140899f36;
                uVar7 = 0x10 - uVar7 >> 1;
              }
              if ((longlong)uVar19 < (longlong)(uVar7 + 8)) goto LAB_140899f36;
              uVar9 = uVar19 - (uVar19 - uVar7 & 7);
              uVar11 = 0;
              if (uVar7 != 0) {
                do {
                  *(ushort *)(uVar17 + uVar11 * 2) = puVar22[uVar11];
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar7);
              }
              do {
                uVar5 = *(undefined8 *)(puVar22 + uVar7 + 4);
                puVar1 = (undefined8 *)(uVar17 + uVar7 * 2);
                *puVar1 = *(undefined8 *)(puVar22 + uVar7);
                puVar1[1] = uVar5;
                uVar7 = uVar7 + 8;
              } while (uVar7 < uVar9);
            }
            for (; uVar9 < uVar19; uVar9 = uVar9 + 1) {
              *(ushort *)(uVar17 + uVar9 * 2) = puVar22[uVar9];
            }
            goto LAB_14089947d;
          }
        }
        lVar10 = 1;
        uVar9 = lVar14 - 1U >> 1;
        uVar7 = 0;
        if (uVar9 != 0) {
          do {
            uVar11 = uVar7;
            *(ushort *)(uVar17 + uVar11 * 4) = puVar22[uVar11 * 2];
            *(ushort *)(uVar17 + 2 + uVar11 * 4) = puVar22[uVar11 * 2 + 1];
            uVar7 = uVar11 + 1;
          } while (uVar7 < uVar9);
          lVar10 = uVar11 + 2 + uVar7;
        }
        if (lVar10 - 1U < lVar14 - 1U) {
          *(ushort *)(param_11 + ((uVar12 - 1) + lVar10) * 2) = puVar22[lVar10 - 1U];
        }
      }
LAB_14089947d:
      if (uVar18 == 1) {
        if ((longlong)uVar12 < 1) goto LAB_14089968d;
        uVar23 = *(ushort *)(param_11 + uVar12 * 2);
        if ((longlong)uVar12 < 8) {
LAB_140899f98:
          uVar9 = 0;
        }
        else {
          uVar7 = param_11 & 0xf;
          if (uVar7 != 0) {
            if ((param_11 & 1) != 0) goto LAB_140899f98;
            uVar7 = 0x10 - uVar7 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar7 + 8)) goto LAB_140899f98;
          uVar11 = 0;
          uVar9 = uVar12 - (uVar12 - uVar7 & 7);
          if (uVar7 != 0) {
            do {
              *(ushort *)(param_11 + uVar11 * 2) = uVar23;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar7);
          }
          auVar4 = vpunpcklwd_avx(ZEXT216(uVar23),ZEXT216(uVar23));
          auVar4 = vpunpckldq_avx(auVar4,auVar4);
          auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
          do {
            *(undefined1 (*) [16])(param_11 + uVar7 * 2) = auVar4;
            uVar7 = uVar7 + 8;
          } while (uVar7 < uVar9);
        }
        for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
          *(ushort *)(param_11 + uVar9 * 2) = uVar23;
        }
      }
      else if (uVar18 == 3) {
        if (0 < (longlong)uVar12) {
          uVar7 = 0;
          lVar10 = 1;
          if (uVar12 >> 1 != 0) {
            lVar10 = param_11 + lVar14 * 2;
            uVar9 = uVar7;
            do {
              uVar11 = uVar9;
              *(undefined2 *)(param_11 + uVar11 * 4) = *(undefined2 *)((uVar7 - 2) + lVar10);
              lVar24 = uVar7 - 4;
              uVar7 = uVar7 - 4;
              *(undefined2 *)(param_11 + 2 + uVar11 * 4) = *(undefined2 *)(lVar24 + lVar10);
              uVar9 = uVar11 + 1;
            } while (uVar9 < uVar12 >> 1);
            lVar10 = uVar11 + 2 + uVar9;
          }
          uVar7 = lVar10 - 1;
          if (uVar7 < uVar12) {
            *(undefined2 *)(param_11 + uVar7 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar14 - uVar7) * 2);
          }
        }
      }
      else if ((uVar18 == 6) && (0 < (longlong)uVar12)) {
        if ((longlong)uVar12 < 8) {
LAB_140899f3d:
          uVar9 = 0;
        }
        else {
          uVar7 = param_11 & 0xf;
          if (uVar7 != 0) {
            if ((param_11 & 1) != 0) goto LAB_140899f3d;
            uVar7 = 0x10 - uVar7 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar7 + 8)) goto LAB_140899f3d;
          uVar11 = 0;
          uVar9 = uVar12 - (uVar12 - uVar7 & 7);
          if (uVar7 != 0) {
            do {
              *(ushort *)(param_11 + uVar11 * 2) = uVar25;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar7);
          }
          auVar4 = vpunpcklwd_avx(ZEXT416(uVar8),ZEXT416(uVar8));
          auVar4 = vpunpckldq_avx(auVar4,auVar4);
          auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
          do {
            *(undefined1 (*) [16])(param_11 + uVar7 * 2) = auVar4;
            uVar7 = uVar7 + 8;
          } while (uVar7 < uVar9);
        }
        for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
          *(ushort *)(param_11 + uVar9 * 2) = uVar25;
        }
      }
LAB_14089968d:
      (*(code *)(&PTR_FUN_14308cc00)[lVar6])(uVar17,param_4,uVar12,param_9,param_10);
      puVar22 = puVar22 + uVar12;
      param_4 = param_4 + uVar12;
      lVar15 = lVar15 - uVar12;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140899f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308cc00)[lVar6])(puVar22,param_4,lVar15);
    return;
  }
  if ((longlong)uVar12 < lVar15) {
    lVar15 = lVar15 - uVar12;
    (*(code *)(&PTR_FUN_14308cc00)[lVar6])(puVar22,param_4,lVar15,param_9,param_10);
    puVar22 = puVar22 + lVar15;
    param_4 = param_4 + lVar15;
  }
  if (uVar12 == 1) {
    uVar13 = (uint)puVar22[-1];
    if (uVar18 == 1) {
      uVar13 = uVar13 + *puVar22;
    }
    else if (uVar18 == 3) {
      uVar13 = uVar13 * 2;
    }
    else if (uVar18 == 6) {
      uVar13 = uVar8 + uVar13;
    }
    *param_4 = (float)*puVar22 * param_9[1] + (float)uVar13 * *param_9;
    return;
  }
  if (uVar12 == 2) {
    uVar25 = puVar22[-2];
    uVar23 = puVar22[-1];
    uVar2 = *puVar22;
    uVar3 = puVar22[1];
    uVar13 = (uint)uVar2;
    if (uVar18 == 1) {
      uVar18 = (uint)uVar3;
      fVar26 = (float)(uVar23 + uVar18);
      *param_4 = (float)uVar13 * param_9[2] + (float)(uVar25 + uVar18) * *param_9 +
                 fVar26 * param_9[1];
      param_4[1] = fVar26 * *param_9 + (float)(uVar13 + uVar18) * param_9[1] +
                   (float)uVar18 * param_9[2];
      return;
    }
    if (uVar18 == 3) {
      *param_4 = (float)((uint)uVar25 + (uint)uVar2) * *param_9 + (float)uVar2 * param_9[2] +
                 (float)((uint)uVar23 + (uint)uVar3) * param_9[1];
      param_4[1] = (float)((uint)uVar23 * 2) * *param_9 + (float)((uint)uVar2 * 2) * param_9[1] +
                   (float)uVar3 * param_9[2];
      return;
    }
    if (uVar18 == 6) {
      *param_4 = (float)uVar13 * param_9[2] + (float)((uint)uVar23 + (uint)uVar3) * param_9[1] +
                 (float)(uVar25 + uVar8) * *param_9;
      param_4[1] = (float)uVar3 * param_9[2] + (float)(uVar23 + uVar8) * *param_9 +
                   (float)(uVar8 + uVar13) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar19) {
    if (6 < (longlong)uVar19) {
      puVar16 = puVar22 + -uVar12;
      lVar15 = lVar14 * 2 + -2;
      if ((lVar15 <= (longlong)(param_11 - (longlong)puVar16)) ||
         (lVar15 <= (longlong)-(param_11 - (longlong)puVar16))) {
        if ((longlong)uVar19 < 8) {
LAB_140899f45:
          uVar7 = 0;
        }
        else {
          uVar17 = param_11 & 0xf;
          if (uVar17 != 0) {
            if ((param_11 & 1) != 0) goto LAB_140899f45;
            uVar17 = 0x10 - uVar17 >> 1;
          }
          if ((longlong)uVar19 < (longlong)(uVar17 + 8)) goto LAB_140899f45;
          uVar7 = uVar19 - (uVar19 - uVar17 & 7);
          uVar9 = 0;
          if (uVar17 != 0) {
            do {
              *(ushort *)(param_11 + uVar9 * 2) = puVar16[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar17);
          }
          do {
            uVar5 = *(undefined8 *)(puVar16 + uVar17 + 4);
            puVar1 = (undefined8 *)(param_11 + uVar17 * 2);
            *puVar1 = *(undefined8 *)(puVar16 + uVar17);
            puVar1[1] = uVar5;
            uVar17 = uVar17 + 8;
          } while (uVar17 < uVar7);
        }
        for (; uVar7 < uVar19; uVar7 = uVar7 + 1) {
          *(ushort *)(param_11 + uVar7 * 2) = puVar16[uVar7];
        }
        goto LAB_140899adc;
      }
    }
    lVar15 = 1;
    uVar17 = lVar14 - 1U >> 1;
    uVar19 = 0;
    if (uVar17 != 0) {
      do {
        uVar7 = uVar19;
        *(ushort *)(param_11 + uVar7 * 4) = puVar22[uVar7 * 2 - uVar12];
        *(ushort *)(param_11 + 2 + uVar7 * 4) = puVar22[(uVar7 * 2 + 1) - uVar12];
        uVar19 = uVar7 + 1;
      } while (uVar19 < uVar17);
      lVar15 = uVar7 + 2 + uVar19;
    }
    uVar19 = lVar15 - 1;
    if (uVar19 < lVar14 - 1U) {
      *(ushort *)(param_11 + uVar19 * 2) = puVar22[uVar19 - uVar12];
    }
  }
LAB_140899adc:
  if (uVar18 == 1) {
    if ((longlong)uVar12 < 1) goto LAB_140899d7a;
    if (6 < (longlong)uVar12) {
      lVar15 = param_11 + lVar14 * 2;
      uVar19 = lVar15 - 2;
      lVar10 = uVar19 - (lVar15 + -4);
      if ((1 < lVar10) || ((longlong)(uVar12 * 2) <= -lVar10)) {
        uVar25 = *(ushort *)(lVar15 + -4);
        if ((longlong)uVar12 < 8) {
LAB_140899f53:
          uVar19 = 0;
        }
        else {
          uVar17 = uVar19 & 0xf;
          if (uVar17 != 0) {
            if ((uVar19 & 1) != 0) goto LAB_140899f53;
            uVar17 = 0x10 - uVar17 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar17 + 8)) goto LAB_140899f53;
          uVar7 = 0;
          uVar19 = uVar12 - (uVar12 - uVar17 & 7);
          if (uVar17 != 0) {
            do {
              *(ushort *)(lVar15 + -2 + uVar7 * 2) = uVar25;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar17);
          }
          auVar4 = vpunpcklwd_avx(ZEXT216(uVar25),ZEXT216(uVar25));
          auVar4 = vpunpckldq_avx(auVar4,auVar4);
          auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
          do {
            *(undefined1 (*) [16])(lVar15 + -2 + uVar17 * 2) = auVar4;
            uVar17 = uVar17 + 8;
          } while (uVar17 < uVar19);
        }
        for (; uVar19 < uVar12; uVar19 = uVar19 + 1) {
          *(ushort *)(lVar15 + -2 + uVar19 * 2) = uVar25;
        }
        goto LAB_140899d7a;
      }
    }
    lVar15 = 1;
    if (uVar12 >> 1 != 0) {
      lVar15 = param_11 + lVar14 * 2;
      uVar19 = 0;
      do {
        uVar17 = uVar19;
        *(undefined2 *)(lVar15 + -2 + uVar17 * 4) = *(undefined2 *)(lVar15 + -4);
        *(undefined2 *)(lVar15 + uVar17 * 4) = *(undefined2 *)(lVar15 + -4);
        uVar19 = uVar17 + 1;
      } while (uVar19 < uVar12 >> 1);
      lVar15 = uVar17 + 2 + uVar19;
    }
    if (lVar15 - 1U < uVar12) {
      *(undefined2 *)((param_11 - 2) + (lVar14 + -1 + lVar15) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar14 * 2);
    }
    goto LAB_140899d7a;
  }
  if (uVar18 == 3) {
    if (0 < (longlong)uVar12) {
      lVar15 = 1;
      lVar10 = 0;
      if (uVar12 >> 1 != 0) {
        lVar15 = param_11 + lVar14 * 2;
        uVar19 = 0;
        do {
          uVar17 = uVar19;
          *(undefined2 *)(lVar15 + -2 + uVar17 * 4) = *(undefined2 *)(lVar10 + -6 + lVar15);
          lVar24 = lVar10 + -8;
          lVar10 = lVar10 + -4;
          *(undefined2 *)(lVar15 + uVar17 * 4) = *(undefined2 *)(lVar24 + lVar15);
          uVar19 = uVar17 + 1;
        } while (uVar19 < uVar12 >> 1);
        lVar15 = uVar17 + 2 + uVar19;
      }
      if (lVar15 - 1U < uVar12) {
        *(undefined2 *)((param_11 - 2) + (lVar14 + -1 + lVar15) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar14 - (lVar15 - 1U)) * 2);
      }
    }
    goto LAB_140899d7a;
  }
  if ((uVar18 != 6) || ((longlong)uVar12 < 1)) goto LAB_140899d7a;
  if ((longlong)uVar12 < 8) {
LAB_140899f4c:
    uVar17 = 0;
  }
  else {
    lVar15 = param_11 + lVar14 * 2;
    uVar19 = lVar15 - 2U & 0xf;
    if (uVar19 != 0) {
      if ((lVar15 - 2U & 1) != 0) goto LAB_140899f4c;
      uVar19 = 0x10 - uVar19 >> 1;
    }
    if ((longlong)uVar12 < (longlong)(uVar19 + 8)) goto LAB_140899f4c;
    uVar7 = 0;
    uVar17 = uVar12 - (uVar12 - uVar19 & 7);
    if (uVar19 != 0) {
      do {
        *(ushort *)(lVar15 + -2 + uVar7 * 2) = uVar25;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar19);
    }
    auVar4 = vpunpcklwd_avx(ZEXT416(uVar8),ZEXT416(uVar8));
    auVar4 = vpunpckldq_avx(auVar4,auVar4);
    auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
    do {
      *(undefined1 (*) [16])(lVar15 + -2 + uVar19 * 2) = auVar4;
      uVar19 = uVar19 + 8;
    } while (uVar19 < uVar17);
  }
  if (uVar17 < uVar12) {
    do {
      *(ushort *)(param_11 + lVar14 * 2 + -2 + uVar17 * 2) = uVar25;
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar12);
  }
LAB_140899d7a:
                    /* WARNING: Could not recover jumptable at 0x000140899db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_14308cc00)[lVar6])(param_11 + uVar12 * 2,param_4,uVar12);
  return;
}

