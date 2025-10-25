
void FUN_140627940(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  longlong lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ushort *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ushort uVar23;
  ushort uVar24;
  longlong lVar25;
  undefined8 uVar26;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar27;
  
  param_2 = param_2 * param_3;
  lVar25 = (longlong)param_10;
  lVar6 = (longlong)param_6;
  uVar13 = param_7 & 0xf;
  puVar18 = (ushort *)(param_1 + param_2);
  uVar8 = 0;
  uVar12 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001406289b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b4c0 + lVar6 * 8))(puVar18,param_4,*param_5);
    return;
  }
  if (uVar13 == 6) {
    uVar8 = (uint)*param_8;
  }
  lVar14 = *param_5;
  uVar17 = lVar25 - 1;
  uVar23 = (ushort)uVar8;
  if (lVar14 < (longlong)uVar17) {
    lVar25 = -uVar12;
    lVar10 = 0;
    if (lVar25 < (longlong)(uVar12 + lVar14)) {
      uVar20 = param_7 & 0x80;
      uVar8 = param_7 & 0x40;
      do {
        lVar9 = lVar25;
        if (((lVar25 < 0) || (lVar14 <= lVar25)) && (param_7 != 0xf0)) {
          if (uVar13 != 6) {
            if (uVar13 == 1) {
              if (lVar25 < 0) {
                lVar9 = 0;
                if (uVar8 != 0) {
                  lVar9 = lVar25;
                }
              }
              else {
                lVar9 = lVar14 + -1;
                if (uVar20 != 0) {
                  lVar9 = lVar25;
                }
              }
            }
            else if (uVar13 == 3) {
              if (lVar14 < 2) {
                if (lVar25 < 0) {
                  if ((uVar8 == 0) && (lVar9 = -lVar25, uVar20 == 0)) {
                    lVar9 = 0;
                  }
                }
                else if (((0 < lVar25) && (uVar20 == 0)) && (lVar9 = -lVar25, uVar8 == 0)) {
                  lVar9 = 0;
                }
              }
              else if ((lVar25 < 0) || (lVar14 <= lVar25)) {
                if (lVar25 < 0) goto LAB_140628940;
                while (uVar20 == 0) {
                  for (lVar9 = (lVar14 + -1) * 2 - lVar9; lVar9 < 0; lVar9 = -lVar9) {
LAB_140628940:
                    if (uVar8 != 0) goto LAB_140628845;
                  }
                  if (lVar9 < lVar14) break;
                }
              }
            }
            goto LAB_140628845;
          }
          uVar21 = uVar8;
          if (-1 < lVar25) {
            uVar21 = uVar20;
          }
          uVar24 = uVar23;
          if (uVar21 != 0) goto LAB_140628845;
        }
        else {
LAB_140628845:
          uVar24 = puVar18[lVar9];
        }
        lVar25 = lVar25 + 1;
        *(ushort *)(param_11 + lVar10 * 2) = uVar24;
        lVar10 = lVar10 + 1;
      } while (lVar25 < (longlong)(uVar12 + lVar14));
    }
                    /* WARNING: Could not recover jumptable at 0x0001406288a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b4c0 + lVar6 * 8))(param_11 + uVar12 * 2,param_4,lVar14,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar12 == 1) {
      uVar24 = *puVar18;
      uVar3 = puVar18[1];
      if (uVar13 == 1) {
        uVar20 = (uint)uVar3 + (uint)uVar24;
      }
      else if (uVar13 == 3) {
        uVar20 = (uint)uVar3 * 2;
      }
      else {
        uVar20 = (uint)uVar3;
        if (uVar13 == 6) {
          uVar20 = uVar3 + uVar8;
        }
      }
      in_XMM0 = ZEXT416((uint)((float)uVar20 * *param_9));
      lVar14 = lVar14 + -1;
      puVar18 = (ushort *)(param_1 + 2 + param_2);
      *param_4 = (float)uVar24 * param_9[1] + (float)uVar20 * *param_9;
      param_4 = param_4 + 1;
    }
    else if (uVar12 == 2) {
      uVar20 = (uint)puVar18[2];
      uVar24 = *puVar18;
      uVar3 = puVar18[1];
      uVar4 = puVar18[3];
      uVar21 = (uint)uVar3;
      if (uVar13 == 1) {
        uVar19 = (uint)uVar24;
        *param_4 = (float)uVar19 * param_9[2] + (float)(uVar21 + uVar19) * param_9[1] +
                   *param_9 * (float)(uVar20 + uVar19);
        fVar27 = (float)uVar21 * param_9[2] + param_9[1] * (float)(uVar20 + uVar19) +
                 (float)(uVar19 + uVar4) * *param_9;
        in_XMM0 = ZEXT416((uint)fVar27);
        param_4[1] = fVar27;
      }
      else if (uVar13 == 3) {
        fVar27 = (float)((uint)uVar3 * 2) * param_9[1];
        in_XMM0 = ZEXT416((uint)fVar27);
        *param_4 = (float)uVar24 * param_9[2] + fVar27 + (float)(uVar20 * 2) * *param_9;
        param_4[1] = (float)uVar3 * param_9[2] + (float)(uVar24 + uVar20) * param_9[1] +
                     (float)((uint)uVar4 + (uint)uVar3) * *param_9;
      }
      else if (uVar13 == 6) {
        fVar27 = (float)(uVar20 + uVar8) * *param_9;
        in_XMM0 = ZEXT416((uint)fVar27);
        *param_4 = (float)uVar24 * param_9[2] + fVar27 + (float)(uVar21 + uVar8) * param_9[1];
        param_4[1] = (float)uVar21 * param_9[2] + (float)(uVar24 + uVar20) * param_9[1] +
                     (float)(uVar4 + uVar8) * *param_9;
      }
      param_4 = param_4 + 2;
      puVar18 = (ushort *)(param_1 + 4 + param_2);
      lVar14 = lVar14 + -2;
    }
    else {
      uVar7 = param_11 + uVar12 * 2;
      if (0 < (longlong)uVar17) {
        if (6 < (longlong)uVar17) {
          lVar10 = lVar25 * 2 + -2;
          if ((lVar10 <= (longlong)(uVar7 - (longlong)puVar18)) ||
             (lVar10 <= (longlong)-(uVar7 - (longlong)puVar18))) {
            if ((longlong)uVar17 < 8) {
LAB_1406288ba:
              uVar22 = 0;
            }
            else {
              uVar16 = uVar7 & 0xf;
              if (uVar16 != 0) {
                if ((uVar7 & 1) != 0) goto LAB_1406288ba;
                uVar16 = 0x10 - uVar16 >> 1;
              }
              if ((longlong)uVar17 < (longlong)(uVar16 + 8)) goto LAB_1406288ba;
              uVar22 = uVar17 - (uVar17 - uVar16 & 7);
              uVar11 = 0;
              if (uVar16 != 0) {
                do {
                  *(ushort *)(uVar7 + uVar11 * 2) = puVar18[uVar11];
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar16);
              }
              if (((ulonglong)(puVar18 + uVar16) & 0xf) == 0) {
                do {
                  uVar26 = *(undefined8 *)(puVar18 + uVar16 + 4);
                  puVar2 = (undefined8 *)(uVar7 + uVar16 * 2);
                  *puVar2 = *(undefined8 *)(puVar18 + uVar16);
                  puVar2[1] = uVar26;
                  uVar16 = uVar16 + 8;
                } while (uVar16 < uVar22);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar18 + uVar16));
                  *(undefined1 (*) [16])(uVar7 + uVar16 * 2) = in_XMM0;
                  uVar16 = uVar16 + 8;
                } while (uVar16 < uVar22);
              }
            }
            for (; uVar22 < uVar17; uVar22 = uVar22 + 1) {
              *(ushort *)(uVar7 + uVar22 * 2) = puVar18[uVar22];
            }
            goto LAB_140627ddb;
          }
        }
        lVar10 = 1;
        uVar22 = lVar25 - 1U >> 1;
        uVar16 = 0;
        if (uVar22 != 0) {
          do {
            uVar11 = uVar16;
            *(ushort *)(uVar7 + uVar11 * 4) = puVar18[uVar11 * 2];
            *(ushort *)(uVar7 + 2 + uVar11 * 4) = puVar18[uVar11 * 2 + 1];
            uVar16 = uVar11 + 1;
          } while (uVar16 < uVar22);
          lVar10 = uVar11 + 2 + uVar16;
        }
        if (lVar10 - 1U < lVar25 - 1U) {
          *(ushort *)(param_11 + ((uVar12 - 1) + lVar10) * 2) = puVar18[lVar10 - 1U];
        }
      }
LAB_140627ddb:
      if (uVar13 == 1) {
        if ((longlong)uVar12 < 1) goto LAB_140627fee;
        uVar5 = *(undefined2 *)(param_11 + uVar12 * 2);
        if ((longlong)uVar12 < 8) {
LAB_14062891e:
          uVar22 = 0;
        }
        else {
          uVar16 = param_11 & 0xf;
          if (uVar16 != 0) {
            if ((param_11 & 1) != 0) goto LAB_14062891e;
            uVar16 = 0x10 - uVar16 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar16 + 8)) goto LAB_14062891e;
          uVar11 = 0;
          uVar22 = uVar12 - (uVar12 - uVar16 & 7);
          if (uVar16 != 0) {
            do {
              *(undefined2 *)(param_11 + uVar11 * 2) = uVar5;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar16);
          }
          uVar26 = CONCAT44(CONCAT22(uVar5,uVar5),CONCAT22(uVar5,uVar5));
          do {
            puVar2 = (undefined8 *)(param_11 + uVar16 * 2);
            *puVar2 = uVar26;
            puVar2[1] = uVar26;
            uVar16 = uVar16 + 8;
          } while (uVar16 < uVar22);
        }
        for (; uVar22 < uVar12; uVar22 = uVar22 + 1) {
          *(undefined2 *)(param_11 + uVar22 * 2) = uVar5;
        }
      }
      else if (uVar13 == 3) {
        if (0 < (longlong)uVar12) {
          lVar10 = 1;
          lVar9 = 0;
          if (uVar12 >> 1 != 0) {
            lVar10 = param_11 + lVar25 * 2;
            uVar16 = 0;
            do {
              uVar22 = uVar16;
              *(undefined2 *)(param_11 + uVar22 * 4) = *(undefined2 *)(lVar9 + -2 + lVar10);
              lVar1 = lVar9 + -4;
              lVar9 = lVar9 + -4;
              *(undefined2 *)(param_11 + 2 + uVar22 * 4) = *(undefined2 *)(lVar1 + lVar10);
              uVar16 = uVar22 + 1;
            } while (uVar16 < uVar12 >> 1);
            lVar10 = uVar22 + 2 + uVar16;
          }
          uVar16 = lVar10 - 1;
          if (uVar16 < uVar12) {
            *(undefined2 *)(param_11 + uVar16 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar25 - uVar16) * 2);
          }
        }
      }
      else if ((uVar13 == 6) && (0 < (longlong)uVar12)) {
        if ((longlong)uVar12 < 8) {
LAB_1406288c1:
          uVar22 = 0;
        }
        else {
          uVar16 = param_11 & 0xf;
          if (uVar16 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1406288c1;
            uVar16 = 0x10 - uVar16 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar16 + 8)) goto LAB_1406288c1;
          uVar11 = 0;
          uVar22 = uVar12 - (uVar12 - uVar16 & 7);
          if (uVar16 != 0) {
            do {
              *(ushort *)(param_11 + uVar11 * 2) = uVar23;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar16);
          }
          uVar26 = CONCAT44(CONCAT22(uVar23,uVar23),CONCAT22(uVar23,uVar23));
          do {
            puVar2 = (undefined8 *)(param_11 + uVar16 * 2);
            *puVar2 = uVar26;
            puVar2[1] = uVar26;
            uVar16 = uVar16 + 8;
          } while (uVar16 < uVar22);
        }
        for (; uVar22 < uVar12; uVar22 = uVar22 + 1) {
          *(ushort *)(param_11 + uVar22 * 2) = uVar23;
        }
      }
LAB_140627fee:
      in_XMM0._0_8_ =
           (**(code **)(&DAT_14308b4c0 + lVar6 * 8))(uVar7,param_4,uVar12,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      puVar18 = puVar18 + uVar12;
      param_4 = param_4 + uVar12;
      lVar14 = lVar14 - uVar12;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014062891b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14308b4c0 + lVar6 * 8))(puVar18,param_4,lVar14);
    return;
  }
  if ((longlong)uVar12 < lVar14) {
    lVar14 = lVar14 - uVar12;
    in_XMM0._0_8_ =
         (**(code **)(&DAT_14308b4c0 + lVar6 * 8))(puVar18,param_4,lVar14,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    puVar18 = puVar18 + lVar14;
    param_4 = param_4 + lVar14;
  }
  if (uVar12 == 1) {
    uVar20 = (uint)puVar18[-1];
    if (uVar13 == 1) {
      uVar20 = uVar20 + *puVar18;
    }
    else if (uVar13 == 3) {
      uVar20 = uVar20 * 2;
    }
    else if (uVar13 == 6) {
      uVar20 = uVar8 + uVar20;
    }
    *param_4 = (float)*puVar18 * param_9[1] + (float)uVar20 * *param_9;
    return;
  }
  if (uVar12 == 2) {
    uVar23 = puVar18[-2];
    uVar24 = puVar18[-1];
    uVar3 = *puVar18;
    uVar4 = puVar18[1];
    uVar20 = (uint)uVar3;
    if (uVar13 == 1) {
      uVar13 = (uint)uVar4;
      fVar27 = (float)(uVar24 + uVar13);
      *param_4 = (float)uVar20 * param_9[2] + (float)(uVar23 + uVar13) * *param_9 +
                 param_9[1] * fVar27;
      param_4[1] = *param_9 * fVar27 + (float)(uVar20 + uVar13) * param_9[1] +
                   (float)uVar13 * param_9[2];
      return;
    }
    if (uVar13 == 3) {
      *param_4 = (float)((uint)uVar23 + (uint)uVar3) * *param_9 + (float)uVar3 * param_9[2] +
                 (float)((uint)uVar24 + (uint)uVar4) * param_9[1];
      param_4[1] = (float)((uint)uVar24 * 2) * *param_9 + (float)((uint)uVar3 * 2) * param_9[1] +
                   (float)uVar4 * param_9[2];
      return;
    }
    if (uVar13 == 6) {
      *param_4 = (float)uVar20 * param_9[2] + (float)((uint)uVar24 + (uint)uVar4) * param_9[1] +
                 (float)(uVar23 + uVar8) * *param_9;
      param_4[1] = (float)uVar4 * param_9[2] + (float)(uVar24 + uVar8) * *param_9 +
                   (float)(uVar8 + uVar20) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar17) {
    if (6 < (longlong)uVar17) {
      puVar15 = puVar18 + -uVar12;
      lVar14 = lVar25 * 2 + -2;
      if ((lVar14 <= (longlong)(param_11 - (longlong)puVar15)) ||
         (lVar14 <= (longlong)-(param_11 - (longlong)puVar15))) {
        if ((longlong)uVar17 < 8) {
LAB_1406288c9:
          uVar16 = 0;
        }
        else {
          uVar7 = param_11 & 0xf;
          if (uVar7 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1406288c9;
            uVar7 = 0x10 - uVar7 >> 1;
          }
          if ((longlong)uVar17 < (longlong)(uVar7 + 8)) goto LAB_1406288c9;
          uVar16 = uVar17 - (uVar17 - uVar7 & 7);
          uVar22 = 0;
          if (uVar7 != 0) {
            do {
              *(ushort *)(param_11 + uVar22 * 2) = puVar15[uVar22];
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar7);
          }
          if (((ulonglong)(puVar18 + (uVar7 - uVar12)) & 0xf) == 0) {
            do {
              uVar26 = *(undefined8 *)(puVar15 + uVar7 + 4);
              puVar2 = (undefined8 *)(param_11 + uVar7 * 2);
              *puVar2 = *(undefined8 *)(puVar15 + uVar7);
              puVar2[1] = uVar26;
              uVar7 = uVar7 + 8;
            } while (uVar7 < uVar16);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar15 + uVar7));
              *(undefined1 (*) [16])(param_11 + uVar7 * 2) = in_XMM0;
              uVar7 = uVar7 + 8;
            } while (uVar7 < uVar16);
          }
        }
        for (; uVar16 < uVar17; uVar16 = uVar16 + 1) {
          *(ushort *)(param_11 + uVar16 * 2) = puVar15[uVar16];
        }
        goto LAB_14062845c;
      }
    }
    lVar14 = 1;
    uVar7 = lVar25 - 1U >> 1;
    uVar17 = 0;
    if (uVar7 != 0) {
      do {
        uVar16 = uVar17;
        *(ushort *)(param_11 + uVar16 * 4) = puVar18[uVar16 * 2 - uVar12];
        *(ushort *)(param_11 + 2 + uVar16 * 4) = puVar18[(uVar16 * 2 + 1) - uVar12];
        uVar17 = uVar16 + 1;
      } while (uVar17 < uVar7);
      lVar14 = uVar16 + 2 + uVar17;
    }
    uVar17 = lVar14 - 1;
    if (uVar17 < lVar25 - 1U) {
      *(ushort *)(param_11 + uVar17 * 2) = puVar18[uVar17 - uVar12];
    }
  }
LAB_14062845c:
  if (uVar13 == 1) {
    if ((longlong)uVar12 < 1) goto LAB_1406286f8;
    if (6 < (longlong)uVar12) {
      lVar14 = param_11 + lVar25 * 2;
      uVar17 = lVar14 - 2;
      lVar10 = uVar17 - (lVar14 + -4);
      if ((1 < lVar10) || ((longlong)(uVar12 * 2) <= -lVar10)) {
        uVar5 = *(undefined2 *)(lVar14 + -4);
        if ((longlong)uVar12 < 8) {
LAB_1406288d7:
          uVar17 = 0;
        }
        else {
          uVar7 = uVar17 & 0xf;
          if (uVar7 != 0) {
            if ((uVar17 & 1) != 0) goto LAB_1406288d7;
            uVar7 = 0x10 - uVar7 >> 1;
          }
          if ((longlong)uVar12 < (longlong)(uVar7 + 8)) goto LAB_1406288d7;
          uVar16 = 0;
          uVar17 = uVar12 - (uVar12 - uVar7 & 7);
          if (uVar7 != 0) {
            do {
              *(undefined2 *)(lVar14 + -2 + uVar16 * 2) = uVar5;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar7);
          }
          uVar26 = CONCAT44(CONCAT22(uVar5,uVar5),CONCAT22(uVar5,uVar5));
          do {
            puVar2 = (undefined8 *)(lVar14 + -2 + uVar7 * 2);
            *puVar2 = uVar26;
            puVar2[1] = uVar26;
            uVar7 = uVar7 + 8;
          } while (uVar7 < uVar17);
        }
        for (; uVar17 < uVar12; uVar17 = uVar17 + 1) {
          *(undefined2 *)(lVar14 + -2 + uVar17 * 2) = uVar5;
        }
        goto LAB_1406286f8;
      }
    }
    lVar14 = 1;
    if (uVar12 >> 1 != 0) {
      lVar14 = param_11 + lVar25 * 2;
      uVar17 = 0;
      do {
        uVar7 = uVar17;
        *(undefined2 *)(lVar14 + -2 + uVar7 * 4) = *(undefined2 *)(lVar14 + -4);
        *(undefined2 *)(lVar14 + uVar7 * 4) = *(undefined2 *)(lVar14 + -4);
        uVar17 = uVar7 + 1;
      } while (uVar17 < uVar12 >> 1);
      lVar14 = uVar7 + 2 + uVar17;
    }
    if (lVar14 - 1U < uVar12) {
      *(undefined2 *)((param_11 - 2) + (lVar25 + -1 + lVar14) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar25 * 2);
    }
    goto LAB_1406286f8;
  }
  if (uVar13 == 3) {
    if (0 < (longlong)uVar12) {
      lVar14 = 1;
      lVar10 = 0;
      if (uVar12 >> 1 != 0) {
        lVar14 = param_11 + lVar25 * 2;
        uVar17 = 0;
        do {
          uVar7 = uVar17;
          *(undefined2 *)(lVar14 + -2 + uVar7 * 4) = *(undefined2 *)(lVar10 + -6 + lVar14);
          lVar9 = lVar10 + -8;
          lVar10 = lVar10 + -4;
          *(undefined2 *)(lVar14 + uVar7 * 4) = *(undefined2 *)(lVar9 + lVar14);
          uVar17 = uVar7 + 1;
        } while (uVar17 < uVar12 >> 1);
        lVar14 = uVar7 + 2 + uVar17;
      }
      if (lVar14 - 1U < uVar12) {
        *(undefined2 *)((param_11 - 2) + (lVar25 + -1 + lVar14) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar25 - (lVar14 - 1U)) * 2);
      }
    }
    goto LAB_1406286f8;
  }
  if ((uVar13 != 6) || ((longlong)uVar12 < 1)) goto LAB_1406286f8;
  if ((longlong)uVar12 < 8) {
LAB_1406288d0:
    uVar7 = 0;
  }
  else {
    lVar14 = param_11 + lVar25 * 2;
    uVar17 = lVar14 - 2U & 0xf;
    if (uVar17 != 0) {
      if ((lVar14 - 2U & 1) != 0) goto LAB_1406288d0;
      uVar17 = 0x10 - uVar17 >> 1;
    }
    if ((longlong)uVar12 < (longlong)(uVar17 + 8)) goto LAB_1406288d0;
    uVar16 = 0;
    uVar7 = uVar12 - (uVar12 - uVar17 & 7);
    if (uVar17 != 0) {
      do {
        *(ushort *)(lVar14 + -2 + uVar16 * 2) = uVar23;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar17);
    }
    uVar26 = CONCAT44(CONCAT22(uVar23,uVar23),CONCAT22(uVar23,uVar23));
    do {
      puVar2 = (undefined8 *)(lVar14 + -2 + uVar17 * 2);
      *puVar2 = uVar26;
      puVar2[1] = uVar26;
      uVar17 = uVar17 + 8;
    } while (uVar17 < uVar7);
  }
  if (uVar7 < uVar12) {
    do {
      *(ushort *)(param_11 + lVar25 * 2 + -2 + uVar7 * 2) = uVar23;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar12);
  }
LAB_1406286f8:
                    /* WARNING: Could not recover jumptable at 0x000140628735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_14308b4c0 + lVar6 * 8))(param_11 + uVar12 * 2,param_4,uVar12);
  return;
}

