
void FUN_1407b0320(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort uVar21;
  longlong lVar22;
  ushort *puVar23;
  ushort uVar24;
  undefined8 uVar25;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar26;
  
  param_2 = param_2 * param_3;
  lVar15 = (longlong)param_10;
  lVar7 = (longlong)param_6;
  uVar18 = param_7 & 0xf;
  uVar11 = 0;
  uVar14 = (ulonglong)(param_10 >> 1);
  puVar23 = (ushort *)(param_1 + param_2);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001407b1392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c2c0)[lVar7])(puVar23,param_4,*param_5);
    return;
  }
  if (uVar18 == 6) {
    uVar11 = (uint)*param_8;
  }
  lVar16 = *param_5;
  uVar19 = lVar15 - 1;
  uVar24 = (ushort)uVar11;
  if (lVar16 < (longlong)uVar19) {
    lVar13 = 0;
    lVar15 = -uVar14;
    if (lVar15 < (longlong)(uVar14 + lVar16)) {
      uVar11 = param_7 & 0x80;
      uVar12 = param_7 & 0x40;
      do {
        lVar22 = lVar15;
        if (((lVar15 < 0) || (lVar16 <= lVar15)) && (param_7 != 0xf0)) {
          if (uVar18 != 6) {
            if (uVar18 == 1) {
              if (lVar15 < 0) {
                lVar22 = 0;
                if (uVar12 != 0) {
                  lVar22 = lVar15;
                }
              }
              else if (uVar11 == 0) {
                lVar22 = lVar16 + -1;
              }
            }
            else if (uVar18 == 3) {
              if (lVar16 < 2) {
                if (lVar15 < 0) {
                  if (uVar12 == 0) {
                    lVar22 = -lVar15;
                    if (uVar11 == 0) {
                      lVar22 = 0;
                    }
                  }
                }
                else if ((0 < lVar15) && (uVar11 == 0)) {
                  lVar22 = -lVar15;
                  if (uVar12 == 0) {
                    lVar22 = 0;
                  }
                }
              }
              else if ((lVar15 < 0) || (lVar16 <= lVar15)) {
                if (lVar15 < 0) goto LAB_1407b1320;
                while (uVar11 == 0) {
                  for (lVar22 = (lVar16 + -1) * 2 - lVar22; lVar22 < 0; lVar22 = -lVar22) {
LAB_1407b1320:
                    if (uVar12 != 0) goto LAB_1407b1224;
                  }
                  if (lVar22 < lVar16) break;
                }
              }
            }
            goto LAB_1407b1224;
          }
          uVar5 = uVar12;
          if (-1 < lVar15) {
            uVar5 = uVar11;
          }
          uVar21 = uVar24;
          if (uVar5 != 0) goto LAB_1407b1224;
        }
        else {
LAB_1407b1224:
          uVar21 = puVar23[lVar22];
        }
        lVar15 = lVar15 + 1;
        *(ushort *)(param_11 + lVar13 * 2) = uVar21;
        lVar13 = lVar13 + 1;
      } while (lVar15 < (longlong)(uVar14 + lVar16));
    }
                    /* WARNING: Could not recover jumptable at 0x0001407b1288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c2c0)[lVar7])(param_11 + uVar14 * 2,param_4,lVar16,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar14 == 1) {
      uVar21 = *puVar23;
      uVar2 = puVar23[1];
      if (uVar18 == 1) {
        uVar12 = (uint)uVar2 + (uint)uVar21;
      }
      else if (uVar18 == 3) {
        uVar12 = (uint)uVar2 * 2;
      }
      else {
        uVar12 = (uint)uVar2;
        if (uVar18 == 6) {
          uVar12 = uVar2 + uVar11;
        }
      }
      lVar16 = lVar16 + -1;
      in_XMM0._0_4_ = (float)uVar12 * *param_9;
      puVar23 = (ushort *)(param_1 + 2 + param_2);
      *param_4 = (float)uVar21 * param_9[1] + in_XMM0._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar14 == 2) {
      uVar12 = (uint)*puVar23;
      uVar5 = (uint)puVar23[1];
      uVar21 = puVar23[3];
      uVar6 = (uint)puVar23[2];
      if (uVar18 == 1) {
        *param_4 = (float)uVar12 * param_9[2] + (float)(uVar5 + uVar12) * param_9[1] +
                   *param_9 * (float)(uVar6 + uVar12);
        in_XMM0._0_4_ =
             (float)uVar5 * param_9[2] + param_9[1] * (float)(uVar6 + uVar12) +
             (float)(uVar12 + uVar21) * *param_9;
        param_4[1] = in_XMM0._0_4_;
      }
      else if (uVar18 == 3) {
        in_XMM0._0_4_ = (float)(uVar5 * 2) * param_9[1];
        *param_4 = (float)uVar12 * param_9[2] + in_XMM0._0_4_ + (float)(uVar6 * 2) * *param_9;
        param_4[1] = (float)uVar5 * param_9[2] + (float)(uVar12 + uVar6) * param_9[1] +
                     (float)(uVar21 + uVar5) * *param_9;
      }
      else if (uVar18 == 6) {
        in_XMM0._0_4_ = (float)(uVar6 + uVar11) * *param_9;
        *param_4 = (float)uVar12 * param_9[2] + in_XMM0._0_4_ + (float)(uVar5 + uVar11) * param_9[1]
        ;
        param_4[1] = (float)uVar5 * param_9[2] + (float)(uVar12 + uVar6) * param_9[1] +
                     (float)(uVar21 + uVar11) * *param_9;
      }
      puVar23 = (ushort *)(param_1 + 4 + param_2);
      param_4 = param_4 + 2;
      lVar16 = lVar16 + -2;
    }
    else {
      uVar10 = param_11 + uVar14 * 2;
      if (0 < (longlong)uVar19) {
        if (6 < (longlong)uVar19) {
          lVar13 = lVar15 * 2 + -2;
          if ((lVar13 <= (longlong)(uVar10 - (longlong)puVar23)) ||
             (lVar13 <= (longlong)-(uVar10 - (longlong)puVar23))) {
            if ((longlong)uVar19 < 8) {
LAB_1407b129c:
              uVar20 = 0;
            }
            else {
              uVar17 = uVar10 & 0xf;
              if (uVar17 != 0) {
                if ((uVar10 & 1) != 0) goto LAB_1407b129c;
                uVar17 = 0x10 - uVar17 >> 1;
              }
              if ((longlong)uVar19 < (longlong)(uVar17 + 8)) goto LAB_1407b129c;
              uVar20 = uVar19 - (uVar19 - uVar17 & 7);
              uVar8 = 0;
              if (uVar17 != 0) {
                do {
                  *(ushort *)(uVar10 + uVar8 * 2) = puVar23[uVar8];
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar17);
              }
              if (((ulonglong)(puVar23 + uVar17) & 0xf) == 0) {
                do {
                  uVar25 = *(undefined8 *)(puVar23 + uVar17 + 4);
                  puVar1 = (undefined8 *)(uVar10 + uVar17 * 2);
                  *puVar1 = *(undefined8 *)(puVar23 + uVar17);
                  puVar1[1] = uVar25;
                  uVar17 = uVar17 + 8;
                } while (uVar17 < uVar20);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar23 + uVar17));
                  *(undefined1 (*) [16])(uVar10 + uVar17 * 2) = in_XMM0;
                  uVar17 = uVar17 + 8;
                } while (uVar17 < uVar20);
              }
            }
            for (; uVar20 < uVar19; uVar20 = uVar20 + 1) {
              *(ushort *)(uVar10 + uVar20 * 2) = puVar23[uVar20];
            }
            goto LAB_1407b07bf;
          }
        }
        lVar13 = 1;
        uVar20 = lVar15 - 1U >> 1;
        uVar17 = 0;
        if (uVar20 != 0) {
          do {
            uVar8 = uVar17;
            *(ushort *)(uVar10 + uVar8 * 4) = puVar23[uVar8 * 2];
            *(ushort *)(uVar10 + 2 + uVar8 * 4) = puVar23[uVar8 * 2 + 1];
            uVar17 = uVar8 + 1;
          } while (uVar17 < uVar20);
          lVar13 = uVar8 + 2 + uVar17;
        }
        if (lVar13 - 1U < lVar15 - 1U) {
          *(ushort *)(param_11 + ((uVar14 - 1) + lVar13) * 2) = puVar23[lVar13 - 1U];
        }
      }
LAB_1407b07bf:
      if (uVar18 == 1) {
        if ((longlong)uVar14 < 1) goto LAB_1407b09cd;
        uVar4 = *(undefined2 *)(param_11 + uVar14 * 2);
        if ((longlong)uVar14 < 8) {
LAB_1407b12fb:
          uVar20 = 0;
        }
        else {
          uVar17 = param_11 & 0xf;
          if (uVar17 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1407b12fb;
            uVar17 = 0x10 - uVar17 >> 1;
          }
          if ((longlong)uVar14 < (longlong)(uVar17 + 8)) goto LAB_1407b12fb;
          uVar8 = 0;
          uVar20 = uVar14 - (uVar14 - uVar17 & 7);
          if (uVar17 != 0) {
            do {
              *(undefined2 *)(param_11 + uVar8 * 2) = uVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar17);
          }
          uVar25 = CONCAT44(CONCAT22(uVar4,uVar4),CONCAT22(uVar4,uVar4));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar17 * 2);
            *puVar1 = uVar25;
            puVar1[1] = uVar25;
            uVar17 = uVar17 + 8;
          } while (uVar17 < uVar20);
        }
        for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
          *(undefined2 *)(param_11 + uVar20 * 2) = uVar4;
        }
      }
      else if (uVar18 == 3) {
        if (0 < (longlong)uVar14) {
          lVar13 = 1;
          uVar17 = 0;
          if (uVar14 >> 1 != 0) {
            lVar13 = param_11 + lVar15 * 2;
            uVar20 = uVar17;
            do {
              uVar8 = uVar20;
              *(undefined2 *)(param_11 + uVar8 * 4) = *(undefined2 *)((uVar17 - 2) + lVar13);
              lVar22 = uVar17 - 4;
              uVar17 = uVar17 - 4;
              *(undefined2 *)(param_11 + 2 + uVar8 * 4) = *(undefined2 *)(lVar22 + lVar13);
              uVar20 = uVar8 + 1;
            } while (uVar20 < uVar14 >> 1);
            lVar13 = uVar8 + 2 + uVar20;
          }
          uVar17 = lVar13 - 1;
          if (uVar17 < uVar14) {
            *(undefined2 *)(param_11 + uVar17 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar15 - uVar17) * 2);
          }
        }
      }
      else if ((uVar18 == 6) && (0 < (longlong)uVar14)) {
        if ((longlong)uVar14 < 8) {
LAB_1407b12a3:
          uVar20 = 0;
        }
        else {
          uVar17 = param_11 & 0xf;
          if (uVar17 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1407b12a3;
            uVar17 = 0x10 - uVar17 >> 1;
          }
          if ((longlong)uVar14 < (longlong)(uVar17 + 8)) goto LAB_1407b12a3;
          uVar8 = 0;
          uVar20 = uVar14 - (uVar14 - uVar17 & 7);
          if (uVar17 != 0) {
            do {
              *(ushort *)(param_11 + uVar8 * 2) = uVar24;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar17);
          }
          uVar25 = CONCAT44(CONCAT22(uVar24,uVar24),CONCAT22(uVar24,uVar24));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar17 * 2);
            *puVar1 = uVar25;
            puVar1[1] = uVar25;
            uVar17 = uVar17 + 8;
          } while (uVar17 < uVar20);
        }
        for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
          *(ushort *)(param_11 + uVar20 * 2) = uVar24;
        }
      }
LAB_1407b09cd:
      in_XMM0._0_8_ = (*(code *)(&PTR_FUN_14308c2c0)[lVar7])(uVar10,param_4,uVar14,param_9,param_10)
      ;
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      lVar16 = lVar16 - uVar14;
      puVar23 = puVar23 + uVar14;
      param_4 = param_4 + uVar14;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001407b12f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c2c0)[lVar7])(puVar23,param_4,lVar16);
    return;
  }
  if ((longlong)uVar14 < lVar16) {
    lVar16 = lVar16 - uVar14;
    in_XMM0._0_8_ = (*(code *)(&PTR_FUN_14308c2c0)[lVar7])(puVar23,param_4,lVar16,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    puVar23 = puVar23 + lVar16;
    param_4 = param_4 + lVar16;
  }
  if (uVar14 == 1) {
    uVar12 = (uint)puVar23[-1];
    if (uVar18 == 1) {
      uVar12 = uVar12 + *puVar23;
    }
    else if (uVar18 == 3) {
      uVar12 = uVar12 * 2;
    }
    else if (uVar18 == 6) {
      uVar12 = uVar11 + uVar12;
    }
    *param_4 = (float)*puVar23 * param_9[1] + (float)uVar12 * *param_9;
    return;
  }
  if (uVar14 == 2) {
    uVar24 = puVar23[-2];
    uVar21 = puVar23[-1];
    uVar2 = *puVar23;
    uVar3 = puVar23[1];
    uVar12 = (uint)uVar2;
    if (uVar18 == 1) {
      uVar18 = (uint)uVar3;
      fVar26 = (float)(uVar21 + uVar18);
      *param_4 = (float)uVar12 * param_9[2] + (float)(uVar24 + uVar18) * *param_9 +
                 param_9[1] * fVar26;
      param_4[1] = *param_9 * fVar26 + (float)(uVar12 + uVar18) * param_9[1] +
                   (float)uVar18 * param_9[2];
      return;
    }
    if (uVar18 == 3) {
      *param_4 = (float)((uint)uVar24 + (uint)uVar2) * *param_9 + (float)uVar2 * param_9[2] +
                 (float)((uint)uVar21 + (uint)uVar3) * param_9[1];
      param_4[1] = (float)((uint)uVar21 * 2) * *param_9 + (float)((uint)uVar2 * 2) * param_9[1] +
                   (float)uVar3 * param_9[2];
      return;
    }
    if (uVar18 == 6) {
      *param_4 = (float)uVar12 * param_9[2] + (float)((uint)uVar21 + (uint)uVar3) * param_9[1] +
                 (float)(uVar24 + uVar11) * *param_9;
      param_4[1] = (float)uVar3 * param_9[2] + (float)(uVar21 + uVar11) * *param_9 +
                   (float)(uVar11 + uVar12) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar19) {
    if (6 < (longlong)uVar19) {
      puVar9 = puVar23 + -uVar14;
      lVar16 = lVar15 * 2 + -2;
      if ((lVar16 <= (longlong)(param_11 - (longlong)puVar9)) ||
         (lVar16 <= (longlong)-(param_11 - (longlong)puVar9))) {
        if ((longlong)uVar19 < 8) {
LAB_1407b12aa:
          uVar17 = 0;
        }
        else {
          uVar10 = param_11 & 0xf;
          if (uVar10 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1407b12aa;
            uVar10 = 0x10 - uVar10 >> 1;
          }
          if ((longlong)uVar19 < (longlong)(uVar10 + 8)) goto LAB_1407b12aa;
          uVar17 = uVar19 - (uVar19 - uVar10 & 7);
          uVar20 = 0;
          if (uVar10 != 0) {
            do {
              *(ushort *)(param_11 + uVar20 * 2) = puVar9[uVar20];
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar10);
          }
          if (((ulonglong)(puVar23 + (uVar10 - uVar14)) & 0xf) == 0) {
            do {
              uVar25 = *(undefined8 *)(puVar9 + uVar10 + 4);
              puVar1 = (undefined8 *)(param_11 + uVar10 * 2);
              *puVar1 = *(undefined8 *)(puVar9 + uVar10);
              puVar1[1] = uVar25;
              uVar10 = uVar10 + 8;
            } while (uVar10 < uVar17);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar9 + uVar10));
              *(undefined1 (*) [16])(param_11 + uVar10 * 2) = in_XMM0;
              uVar10 = uVar10 + 8;
            } while (uVar10 < uVar17);
          }
        }
        for (; uVar17 < uVar19; uVar17 = uVar17 + 1) {
          *(ushort *)(param_11 + uVar17 * 2) = puVar9[uVar17];
        }
        goto LAB_1407b0e39;
      }
    }
    lVar16 = 1;
    uVar10 = lVar15 - 1U >> 1;
    uVar19 = 0;
    if (uVar10 != 0) {
      do {
        uVar17 = uVar19;
        *(ushort *)(param_11 + uVar17 * 4) = puVar23[uVar17 * 2 - uVar14];
        *(ushort *)(param_11 + 2 + uVar17 * 4) = puVar23[(uVar17 * 2 + 1) - uVar14];
        uVar19 = uVar17 + 1;
      } while (uVar19 < uVar10);
      lVar16 = uVar17 + 2 + uVar19;
    }
    uVar19 = lVar16 - 1;
    if (uVar19 < lVar15 - 1U) {
      *(ushort *)(param_11 + uVar19 * 2) = puVar23[uVar19 - uVar14];
    }
  }
LAB_1407b0e39:
  if (uVar18 == 1) {
    if ((longlong)uVar14 < 1) goto LAB_1407b10db;
    if (6 < (longlong)uVar14) {
      lVar16 = param_11 + lVar15 * 2;
      uVar19 = lVar16 - 2;
      lVar13 = uVar19 - (lVar16 + -4);
      if ((1 < lVar13) || ((longlong)(uVar14 * 2) <= -lVar13)) {
        uVar4 = *(undefined2 *)(lVar16 + -4);
        if ((longlong)uVar14 < 8) {
LAB_1407b12b9:
          uVar19 = 0;
        }
        else {
          uVar10 = uVar19 & 0xf;
          if (uVar10 != 0) {
            if ((uVar19 & 1) != 0) goto LAB_1407b12b9;
            uVar10 = 0x10 - uVar10 >> 1;
          }
          if ((longlong)uVar14 < (longlong)(uVar10 + 8)) goto LAB_1407b12b9;
          uVar17 = 0;
          uVar19 = uVar14 - (uVar14 - uVar10 & 7);
          if (uVar10 != 0) {
            do {
              *(undefined2 *)(lVar16 + -2 + uVar17 * 2) = uVar4;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar10);
          }
          uVar25 = CONCAT44(CONCAT22(uVar4,uVar4),CONCAT22(uVar4,uVar4));
          do {
            puVar1 = (undefined8 *)(lVar16 + -2 + uVar10 * 2);
            *puVar1 = uVar25;
            puVar1[1] = uVar25;
            uVar10 = uVar10 + 8;
          } while (uVar10 < uVar19);
        }
        for (; uVar19 < uVar14; uVar19 = uVar19 + 1) {
          *(undefined2 *)(lVar16 + -2 + uVar19 * 2) = uVar4;
        }
        goto LAB_1407b10db;
      }
    }
    lVar16 = 1;
    if (uVar14 >> 1 != 0) {
      lVar16 = param_11 + lVar15 * 2;
      uVar19 = 0;
      do {
        uVar10 = uVar19;
        *(undefined2 *)(lVar16 + -2 + uVar10 * 4) = *(undefined2 *)(lVar16 + -4);
        *(undefined2 *)(lVar16 + uVar10 * 4) = *(undefined2 *)(lVar16 + -4);
        uVar19 = uVar10 + 1;
      } while (uVar19 < uVar14 >> 1);
      lVar16 = uVar10 + 2 + uVar19;
    }
    if (lVar16 - 1U < uVar14) {
      *(undefined2 *)((param_11 - 2) + (lVar15 + -1 + lVar16) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar15 * 2);
    }
    goto LAB_1407b10db;
  }
  if (uVar18 == 3) {
    if (0 < (longlong)uVar14) {
      lVar16 = 1;
      lVar13 = 0;
      if (uVar14 >> 1 != 0) {
        lVar16 = param_11 + lVar15 * 2;
        uVar19 = 0;
        do {
          uVar10 = uVar19;
          *(undefined2 *)(lVar16 + -2 + uVar10 * 4) = *(undefined2 *)(lVar13 + -6 + lVar16);
          lVar22 = lVar13 + -8;
          lVar13 = lVar13 + -4;
          *(undefined2 *)(lVar16 + uVar10 * 4) = *(undefined2 *)(lVar22 + lVar16);
          uVar19 = uVar10 + 1;
        } while (uVar19 < uVar14 >> 1);
        lVar16 = uVar10 + 2 + uVar19;
      }
      if (lVar16 - 1U < uVar14) {
        *(undefined2 *)((param_11 - 2) + (lVar15 + -1 + lVar16) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar15 - (lVar16 - 1U)) * 2);
      }
    }
    goto LAB_1407b10db;
  }
  if ((uVar18 != 6) || ((longlong)uVar14 < 1)) goto LAB_1407b10db;
  if ((longlong)uVar14 < 8) {
LAB_1407b12b1:
    uVar10 = 0;
  }
  else {
    lVar16 = param_11 + lVar15 * 2;
    uVar19 = lVar16 - 2U & 0xf;
    if (uVar19 != 0) {
      if ((lVar16 - 2U & 1) != 0) goto LAB_1407b12b1;
      uVar19 = 0x10 - uVar19 >> 1;
    }
    if ((longlong)uVar14 < (longlong)(uVar19 + 8)) goto LAB_1407b12b1;
    uVar17 = 0;
    uVar10 = uVar14 - (uVar14 - uVar19 & 7);
    if (uVar19 != 0) {
      do {
        *(ushort *)(lVar16 + -2 + uVar17 * 2) = uVar24;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar19);
    }
    uVar25 = CONCAT44(CONCAT22(uVar24,uVar24),CONCAT22(uVar24,uVar24));
    do {
      puVar1 = (undefined8 *)(lVar16 + -2 + uVar19 * 2);
      *puVar1 = uVar25;
      puVar1[1] = uVar25;
      uVar19 = uVar19 + 8;
    } while (uVar19 < uVar10);
  }
  if (uVar10 < uVar14) {
    do {
      *(ushort *)(param_11 + lVar15 * 2 + -2 + uVar10 * 2) = uVar24;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar14);
  }
LAB_1407b10db:
                    /* WARNING: Could not recover jumptable at 0x0001407b1114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_14308c2c0)[lVar7])(param_11 + uVar14 * 2,param_4,uVar14);
  return;
}

