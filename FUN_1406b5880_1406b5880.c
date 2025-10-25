
void FUN_1406b5880(longlong param_1,longlong param_2,longlong param_3,float *param_4,
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
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort uVar13;
  longlong lVar14;
  ushort *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ushort uVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar25;
  uint uStack_78;
  
  lVar23 = (longlong)param_10;
  puVar15 = (ushort *)(param_1 + param_2 * param_3);
  lVar7 = (longlong)param_6;
  uVar21 = param_7 & 0xf;
  uVar17 = 0;
  uVar12 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b6952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b9e0 + lVar7 * 8))(puVar15,param_4,*param_5);
    return;
  }
  if (uVar21 == 6) {
    uVar17 = (uint)*param_8;
  }
  lVar19 = *param_5;
  uVar18 = lVar23 - 1;
  uVar22 = (ushort)uVar17;
  if (*param_5 < (longlong)uVar18) {
    lVar23 = -uVar12;
    lVar16 = 0;
    if (lVar23 < (longlong)(uVar12 + lVar19)) {
      uVar17 = param_7 & 0x40;
      uStack_78 = param_7 & 0x80;
      do {
        lVar14 = lVar23;
        if (((lVar23 < 0) || (lVar19 <= lVar23)) && (param_7 != 0xf0)) {
          if (uVar21 != 6) {
            if (uVar21 == 1) {
              if (lVar23 < 0) {
                lVar14 = 0;
                if (uVar17 != 0) {
                  lVar14 = lVar23;
                }
              }
              else if (uStack_78 == 0) {
                lVar14 = lVar19 + -1;
              }
            }
            else if (uVar21 == 3) {
              if (lVar19 < 2) {
                if (lVar23 < 0) {
                  if (uVar17 == 0) {
                    lVar14 = -lVar23;
                    if (uStack_78 == 0) {
                      lVar14 = 0;
                    }
                  }
                }
                else if ((0 < lVar23) && (uStack_78 == 0)) {
                  lVar14 = -lVar23;
                  if (uVar17 == 0) {
                    lVar14 = 0;
                  }
                }
              }
              else if ((lVar23 < 0) || (lVar19 <= lVar23)) {
                if (lVar23 < 0) goto LAB_1406b68e0;
                while (uStack_78 == 0) {
                  for (lVar14 = (lVar19 + -1) * 2 - lVar14; lVar14 < 0; lVar14 = -lVar14) {
LAB_1406b68e0:
                    if (uVar17 != 0) goto LAB_1406b67e4;
                  }
                  if (lVar14 < lVar19) break;
                }
              }
            }
            goto LAB_1406b67e4;
          }
          uVar5 = uVar17;
          if (-1 < lVar23) {
            uVar5 = uStack_78;
          }
          uVar13 = uVar22;
          if (uVar5 != 0) goto LAB_1406b67e4;
        }
        else {
LAB_1406b67e4:
          uVar13 = puVar15[lVar14];
        }
        lVar23 = lVar23 + 1;
        *(ushort *)(param_11 + lVar16 * 2) = uVar13;
        lVar16 = lVar16 + 1;
      } while (lVar23 < (longlong)(uVar12 + lVar19));
    }
                    /* WARNING: Could not recover jumptable at 0x0001406b6848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b9e0 + lVar7 * 8))(param_11 + uVar12 * 2,param_4,lVar19,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar12 == 1) {
      uVar13 = *puVar15;
      uVar2 = puVar15[1];
      if (uVar21 == 1) {
        uVar5 = (uint)uVar2 + (uint)uVar13;
      }
      else if (uVar21 == 3) {
        uVar5 = (uint)uVar2 * 2;
      }
      else {
        uVar5 = (uint)uVar2;
        if (uVar21 == 6) {
          uVar5 = uVar2 + uVar17;
        }
      }
      in_XMM0._0_4_ = (float)uVar5 * *param_9;
      puVar15 = puVar15 + 1;
      lVar19 = lVar19 + -1;
      *param_4 = (float)uVar13 * param_9[1] + in_XMM0._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar12 == 2) {
      uVar5 = (uint)*puVar15;
      uVar13 = puVar15[1];
      uVar6 = (uint)uVar13;
      uVar2 = puVar15[2];
      uVar9 = (uint)puVar15[3];
      if (uVar21 == 1) {
        fVar25 = (float)(uVar2 + uVar5);
        *param_4 = (float)uVar5 * param_9[2] + (float)(uVar6 + uVar5) * param_9[1] +
                   *param_9 * fVar25;
        in_XMM0._0_4_ =
             (float)uVar6 * param_9[2] + param_9[1] * fVar25 + (float)(uVar5 + uVar9) * *param_9;
        param_4[1] = in_XMM0._0_4_;
      }
      else if (uVar21 == 3) {
        in_XMM0._0_4_ = (float)((uint)uVar13 + (uint)uVar13) * param_9[1];
        *param_4 = (float)uVar5 * param_9[2] + in_XMM0._0_4_ +
                   (float)((uint)uVar2 + (uint)uVar2) * *param_9;
        param_4[1] = (float)uVar13 * param_9[2] + (float)(uVar2 + uVar5) * param_9[1] +
                     (float)(uVar13 + uVar9) * *param_9;
      }
      else if (uVar21 == 6) {
        in_XMM0._0_4_ = (float)(uVar2 + uVar17) * *param_9;
        *param_4 = (float)uVar5 * param_9[2] + in_XMM0._0_4_ + (float)(uVar17 + uVar6) * param_9[1];
        param_4[1] = (float)uVar6 * param_9[2] + (float)(uVar2 + uVar5) * param_9[1] +
                     (float)(uVar9 + uVar17) * *param_9;
      }
      param_4 = param_4 + 2;
      puVar15 = puVar15 + 2;
      lVar19 = lVar19 + -2;
    }
    else {
      uVar20 = param_11 + uVar12 * 2;
      if (0 < (longlong)uVar18) {
        if (6 < (longlong)uVar18) {
          lVar16 = lVar23 * 2 + -2;
          if ((lVar16 <= (longlong)(uVar20 - (longlong)puVar15)) ||
             (lVar16 <= (longlong)-(uVar20 - (longlong)puVar15))) {
            if ((longlong)uVar18 < 8) {
LAB_1406b685d:
              uVar10 = 0;
            }
            else {
              uVar11 = uVar20 & 0xf;
              if (uVar11 != 0) {
                if ((uVar20 & 1) != 0) goto LAB_1406b685d;
                uVar11 = 0x10 - uVar11 >> 1;
              }
              if ((longlong)uVar18 < (longlong)(uVar11 + 8)) goto LAB_1406b685d;
              uVar8 = 0;
              uVar10 = uVar18 - (uVar18 - uVar11 & 7);
              if (uVar11 != 0) {
                do {
                  *(ushort *)(uVar20 + uVar8 * 2) = puVar15[uVar8];
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar11);
              }
              if (((ulonglong)(puVar15 + uVar11) & 0xf) == 0) {
                do {
                  uVar24 = *(undefined8 *)(puVar15 + uVar11 + 4);
                  puVar1 = (undefined8 *)(uVar20 + uVar11 * 2);
                  *puVar1 = *(undefined8 *)(puVar15 + uVar11);
                  puVar1[1] = uVar24;
                  uVar11 = uVar11 + 8;
                } while (uVar11 < uVar10);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar15 + uVar11));
                  *(undefined1 (*) [16])(uVar20 + uVar11 * 2) = in_XMM0;
                  uVar11 = uVar11 + 8;
                } while (uVar11 < uVar10);
              }
            }
            for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
              *(ushort *)(uVar20 + uVar10 * 2) = puVar15[uVar10];
            }
            goto LAB_1406b5d03;
          }
        }
        lVar16 = 1;
        uVar11 = 0;
        uVar10 = lVar23 - 1U >> 1;
        if (uVar10 != 0) {
          do {
            *(ushort *)(uVar20 + uVar11 * 4) = puVar15[uVar11 * 2];
            *(ushort *)(uVar20 + 2 + uVar11 * 4) = puVar15[uVar11 * 2 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
          lVar16 = uVar11 * 2 + 1;
        }
        if (lVar16 - 1U < lVar23 - 1U) {
          *(ushort *)(param_11 + ((uVar12 - 1) + lVar16) * 2) = puVar15[lVar16 - 1U];
        }
      }
LAB_1406b5d03:
      if (uVar21 == 1) {
        if ((longlong)uVar12 < 1) goto LAB_1406b5f2e;
        uVar4 = *(undefined2 *)(param_11 + uVar12 * 2);
        if ((longlong)uVar12 < 8) {
LAB_1406b68bd:
          uVar10 = 0;
        }
        else {
          uVar11 = param_11 & 0xf;
          if (uVar11 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1406b68bd;
            uVar11 = 0x10 - uVar11 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar11 + 8)) goto LAB_1406b68bd;
          uVar10 = uVar12 - (uVar12 - uVar11 & 7);
          if (uVar11 != 0) {
            uVar8 = 0;
            do {
              *(undefined2 *)(param_11 + uVar8 * 2) = uVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar11);
          }
          uVar24 = CONCAT44(CONCAT22(uVar4,uVar4),CONCAT22(uVar4,uVar4));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar11 * 2);
            *puVar1 = uVar24;
            puVar1[1] = uVar24;
            uVar11 = uVar11 + 8;
          } while (uVar11 < uVar10);
        }
        for (; uVar10 < uVar12; uVar10 = uVar10 + 1) {
          *(undefined2 *)(param_11 + uVar10 * 2) = uVar4;
        }
      }
      else if (uVar21 == 3) {
        if (0 < (longlong)uVar12) {
          uVar11 = 0;
          lVar16 = 1;
          if (uVar12 >> 1 != 0) {
            lVar16 = lVar23 * 2 + param_11;
            uVar10 = uVar11;
            do {
              *(undefined2 *)(param_11 + uVar11 * 4) = *(undefined2 *)((uVar10 - 2) + lVar16);
              lVar14 = uVar10 - 4;
              uVar10 = uVar10 - 4;
              *(undefined2 *)(param_11 + 2 + uVar11 * 4) = *(undefined2 *)(lVar14 + lVar16);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar12 >> 1);
            lVar16 = uVar11 * 2 + 1;
          }
          uVar11 = lVar16 - 1;
          if (uVar11 < uVar12) {
            *(undefined2 *)(param_11 + uVar11 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar23 - uVar11) * 2);
          }
        }
      }
      else if ((uVar21 == 6) && (0 < (longlong)uVar12)) {
        if ((longlong)uVar12 < 8) {
LAB_1406b6864:
          uVar10 = 0;
        }
        else {
          uVar11 = param_11 & 0xf;
          if (uVar11 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1406b6864;
            uVar11 = 0x10 - uVar11 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar11 + 8)) goto LAB_1406b6864;
          uVar8 = 0;
          uVar10 = uVar12 - (uVar12 - uVar11 & 7);
          if (uVar11 != 0) {
            do {
              *(ushort *)(param_11 + uVar8 * 2) = uVar22;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar11);
          }
          uVar24 = CONCAT44(CONCAT22(uVar22,uVar22),CONCAT22(uVar22,uVar22));
          do {
            puVar1 = (undefined8 *)(param_11 + uVar11 * 2);
            *puVar1 = uVar24;
            puVar1[1] = uVar24;
            uVar11 = uVar11 + 8;
          } while (uVar11 < uVar10);
        }
        for (; uVar10 < uVar12; uVar10 = uVar10 + 1) {
          *(ushort *)(param_11 + uVar10 * 2) = uVar22;
        }
      }
LAB_1406b5f2e:
      in_XMM0._0_8_ =
           (**(code **)(&DAT_14308b9e0 + lVar7 * 8))(uVar20,param_4,uVar12,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      param_4 = param_4 + uVar12;
      lVar19 = lVar19 - uVar12;
      puVar15 = puVar15 + uVar12;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b68ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b9e0 + lVar7 * 8))(puVar15,param_4,lVar19);
    return;
  }
  if ((longlong)uVar12 < lVar19) {
    lVar19 = lVar19 - uVar12;
    in_XMM0._0_8_ =
         (**(code **)(&DAT_14308b9e0 + lVar7 * 8))(puVar15,param_4,lVar19,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    puVar15 = puVar15 + lVar19;
    param_4 = param_4 + lVar19;
  }
  if (uVar12 == 1) {
    uVar5 = (uint)puVar15[-1];
    if (uVar21 == 1) {
      uVar5 = uVar5 + *puVar15;
    }
    else if (uVar21 == 3) {
      uVar5 = uVar5 * 2;
    }
    else if (uVar21 == 6) {
      uVar5 = uVar17 + uVar5;
    }
    *param_4 = (float)*puVar15 * param_9[1] + (float)uVar5 * *param_9;
    return;
  }
  if (uVar12 == 2) {
    uVar22 = puVar15[-2];
    uVar13 = puVar15[-1];
    uVar2 = *puVar15;
    uVar3 = puVar15[1];
    uVar5 = (uint)uVar2;
    if (uVar21 == 1) {
      uVar21 = (uint)uVar3;
      fVar25 = (float)(uVar13 + uVar21);
      *param_4 = (float)uVar5 * param_9[2] + (float)(uVar22 + uVar21) * *param_9 +
                 param_9[1] * fVar25;
      param_4[1] = *param_9 * fVar25 + (float)(uVar5 + uVar21) * param_9[1] +
                   (float)uVar21 * param_9[2];
      return;
    }
    if (uVar21 == 3) {
      *param_4 = (float)((uint)uVar22 + (uint)uVar2) * *param_9 + (float)uVar2 * param_9[2] +
                 (float)((uint)uVar13 + (uint)uVar3) * param_9[1];
      param_4[1] = (float)((uint)uVar13 * 2) * *param_9 + (float)((uint)uVar2 * 2) * param_9[1] +
                   (float)uVar3 * param_9[2];
      return;
    }
    if (uVar21 == 6) {
      *param_4 = (float)uVar5 * param_9[2] + (float)((uint)uVar13 + (uint)uVar3) * param_9[1] +
                 (float)(uVar22 + uVar17) * *param_9;
      param_4[1] = (float)uVar3 * param_9[2] + (float)(uVar13 + uVar17) * *param_9 +
                   (float)(uVar17 + uVar5) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar18) {
    if (6 < (longlong)uVar18) {
      lVar19 = lVar23 * 2 + -2;
      if ((lVar19 <= (longlong)(param_11 - (longlong)(puVar15 + -uVar12))) ||
         (lVar19 <= (longlong)-(param_11 - (longlong)(puVar15 + -uVar12)))) {
        if ((longlong)uVar18 < 8) {
LAB_1406b686b:
          uVar11 = 0;
        }
        else {
          uVar20 = param_11 & 0xf;
          if (uVar20 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1406b686b;
            uVar20 = 0x10 - uVar20 >> 1;
          }
          if ((longlong)uVar18 < (longlong)(uVar20 + 8)) goto LAB_1406b686b;
          uVar10 = 0;
          uVar11 = uVar18 - (uVar18 - uVar20 & 7);
          if (uVar20 != 0) {
            do {
              *(ushort *)(param_11 + uVar10 * 2) = puVar15[uVar10 - uVar12];
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar20);
          }
          if (((ulonglong)(puVar15 + (uVar20 - uVar12)) & 0xf) == 0) {
            do {
              uVar24 = *(undefined8 *)(puVar15 + (uVar20 - uVar12) + 4);
              puVar1 = (undefined8 *)(param_11 + uVar20 * 2);
              *puVar1 = *(undefined8 *)(puVar15 + (uVar20 - uVar12));
              puVar1[1] = uVar24;
              uVar20 = uVar20 + 8;
            } while (uVar20 < uVar11);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar15 + (uVar20 - uVar12)));
              *(undefined1 (*) [16])(param_11 + uVar20 * 2) = in_XMM0;
              uVar20 = uVar20 + 8;
            } while (uVar20 < uVar11);
          }
        }
        for (; uVar11 < uVar18; uVar11 = uVar11 + 1) {
          *(ushort *)(param_11 + uVar11 * 2) = puVar15[uVar11 - uVar12];
        }
        goto LAB_1406b63a0;
      }
    }
    lVar19 = 1;
    uVar18 = 0;
    uVar20 = lVar23 - 1U >> 1;
    if (uVar20 != 0) {
      do {
        *(ushort *)(param_11 + uVar18 * 4) = puVar15[uVar18 * 2 - uVar12];
        *(ushort *)(param_11 + 2 + uVar18 * 4) = puVar15[(uVar18 * 2 + 1) - uVar12];
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar20);
      lVar19 = uVar18 * 2 + 1;
    }
    uVar18 = lVar19 - 1;
    if (uVar18 < lVar23 - 1U) {
      *(ushort *)(param_11 + uVar18 * 2) = puVar15[uVar18 - uVar12];
    }
  }
LAB_1406b63a0:
  if (uVar21 == 1) {
    if ((longlong)uVar12 < 1) goto LAB_1406b6686;
    if (6 < (longlong)uVar12) {
      lVar19 = param_11 + lVar23 * 2;
      uVar18 = lVar19 - 2;
      lVar16 = uVar18 - (lVar19 + -4);
      if ((1 < lVar16) || ((longlong)(uVar12 * 2) <= -lVar16)) {
        uVar4 = *(undefined2 *)(lVar19 + -4);
        if ((longlong)uVar12 < 8) {
LAB_1406b687a:
          uVar18 = 0;
        }
        else {
          uVar20 = uVar18 & 0xf;
          if (uVar20 != 0) {
            if ((uVar18 & 1) != 0) goto LAB_1406b687a;
            uVar20 = 0x10 - uVar20 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar20 + 8)) goto LAB_1406b687a;
          uVar11 = 0;
          lVar19 = param_11 + lVar23 * 2;
          uVar18 = uVar12 - (uVar12 - uVar20 & 7);
          if (uVar20 != 0) {
            do {
              *(undefined2 *)(lVar19 + -2 + uVar11 * 2) = uVar4;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar20);
          }
          uVar24 = CONCAT44(CONCAT22(uVar4,uVar4),CONCAT22(uVar4,uVar4));
          do {
            puVar1 = (undefined8 *)(lVar19 + -2 + uVar20 * 2);
            *puVar1 = uVar24;
            puVar1[1] = uVar24;
            uVar20 = uVar20 + 8;
          } while (uVar20 < uVar18);
        }
        if (uVar18 < uVar12) {
          do {
            *(undefined2 *)(lVar23 * 2 + param_11 + -2 + uVar18 * 2) = uVar4;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar12);
        }
        goto LAB_1406b6686;
      }
    }
    lVar19 = 1;
    uVar18 = 0;
    if (uVar12 >> 1 != 0) {
      lVar19 = lVar23 * 2;
      do {
        *(undefined2 *)(param_11 + lVar19 + -2 + uVar18 * 4) =
             *(undefined2 *)(lVar19 + -4 + param_11);
        *(undefined2 *)(param_11 + lVar19 + uVar18 * 4) = *(undefined2 *)((param_11 - 4) + lVar19);
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar12 >> 1);
      lVar19 = uVar18 * 2 + 1;
    }
    if (lVar19 - 1U < uVar12) {
      *(undefined2 *)((param_11 - 2) + (lVar23 + -1 + lVar19) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar23 * 2);
    }
    goto LAB_1406b6686;
  }
  if (uVar21 == 3) {
    if (0 < (longlong)uVar12) {
      uVar18 = 0;
      lVar16 = 1;
      lVar19 = 0;
      if (uVar12 >> 1 != 0) {
        lVar16 = lVar23 * 2 + param_11;
        do {
          *(undefined2 *)(lVar16 + -2 + uVar18 * 4) = *(undefined2 *)(lVar19 + -6 + lVar16);
          lVar14 = lVar19 + -8;
          lVar19 = lVar19 + -4;
          *(undefined2 *)(lVar16 + uVar18 * 4) = *(undefined2 *)(lVar14 + lVar16);
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar12 >> 1);
        lVar16 = uVar18 * 2 + 1;
      }
      if (lVar16 - 1U < uVar12) {
        *(undefined2 *)((param_11 - 2) + (lVar23 + -1 + lVar16) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar23 - (lVar16 - 1U)) * 2);
      }
    }
    goto LAB_1406b6686;
  }
  if ((uVar21 != 6) || ((longlong)uVar12 < 1)) goto LAB_1406b6686;
  if ((longlong)uVar12 < 8) {
LAB_1406b6872:
    uVar20 = 0;
  }
  else {
    lVar19 = lVar23 * 2 + param_11;
    uVar18 = lVar19 - 2U & 0xf;
    if (uVar18 != 0) {
      if ((lVar19 - 2U & 1) != 0) goto LAB_1406b6872;
      uVar18 = 0x10 - uVar18 >> 1;
    }
    if ((longlong)uVar12 < (longlong)(uVar18 + 8)) goto LAB_1406b6872;
    uVar11 = 0;
    uVar20 = uVar12 - (uVar12 - uVar18 & 7);
    if (uVar18 != 0) {
      do {
        *(ushort *)(lVar19 + -2 + uVar11 * 2) = uVar22;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar18);
    }
    uVar24 = CONCAT44(CONCAT22(uVar22,uVar22),CONCAT22(uVar22,uVar22));
    do {
      puVar1 = (undefined8 *)(lVar19 + -2 + uVar18 * 2);
      *puVar1 = uVar24;
      puVar1[1] = uVar24;
      uVar18 = uVar18 + 8;
    } while (uVar18 < uVar20);
  }
  if (uVar20 < uVar12) {
    do {
      *(ushort *)(lVar23 * 2 + param_11 + -2 + uVar20 * 2) = uVar22;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar12);
  }
LAB_1406b6686:
                    /* WARNING: Could not recover jumptable at 0x0001406b66c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_14308b9e0 + lVar7 * 8))(param_11 + uVar12 * 2,param_4,uVar12);
  return;
}

