
void FUN_14005f220(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  short *psVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  short *psVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  short sVar24;
  short sVar25;
  longlong lVar26;
  float fVar27;
  undefined8 uVar28;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  param_2 = param_2 * param_3;
  lVar26 = (longlong)param_10;
  lVar5 = (longlong)param_6;
  uVar12 = param_7 & 0xf;
  psVar20 = (short *)(param_1 + param_2);
  sVar24 = 0;
  uVar11 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001400602d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143086840 + lVar5 * 8))(psVar20,param_4,*param_5);
    return;
  }
  if (uVar12 == 6) {
    sVar24 = *param_8;
  }
  lVar14 = *param_5;
  uVar17 = lVar26 - 1;
  if (lVar14 < (longlong)uVar17) {
    lVar26 = -uVar11;
    lVar9 = 0;
    if (lVar26 < (longlong)(uVar11 + lVar14)) {
      uVar22 = param_7 & 0x80;
      uVar7 = param_7 & 0x40;
      do {
        lVar8 = lVar26;
        if (((lVar26 < 0) || (lVar14 <= lVar26)) && (param_7 != 0xf0)) {
          if (uVar12 != 6) {
            if (uVar12 == 1) {
              if (lVar26 < 0) {
                lVar8 = 0;
                if (uVar7 != 0) {
                  lVar8 = lVar26;
                }
              }
              else {
                lVar8 = lVar14 + -1;
                if (uVar22 != 0) {
                  lVar8 = lVar26;
                }
              }
            }
            else if (uVar12 == 3) {
              if (lVar14 < 2) {
                if (lVar26 < 0) {
                  if ((uVar7 == 0) && (lVar8 = -lVar26, uVar22 == 0)) {
                    lVar8 = 0;
                  }
                }
                else if (((0 < lVar26) && (uVar22 == 0)) && (lVar8 = -lVar26, uVar7 == 0)) {
                  lVar8 = 0;
                }
              }
              else if ((lVar26 < 0) || (lVar14 <= lVar26)) {
                if (lVar26 < 0) goto LAB_140060260;
                while (uVar22 == 0) {
                  for (lVar8 = (lVar14 + -1) * 2 - lVar8; lVar8 < 0; lVar8 = -lVar8) {
LAB_140060260:
                    if (uVar7 != 0) goto LAB_140060165;
                  }
                  if (lVar8 < lVar14) break;
                }
              }
            }
            goto LAB_140060165;
          }
          uVar4 = uVar7;
          if (-1 < lVar26) {
            uVar4 = uVar22;
          }
          sVar25 = sVar24;
          if (uVar4 != 0) goto LAB_140060165;
        }
        else {
LAB_140060165:
          sVar25 = psVar20[lVar8];
        }
        lVar26 = lVar26 + 1;
        *(short *)(param_11 + lVar9 * 2) = sVar25;
        lVar9 = lVar9 + 1;
      } while (lVar26 < (longlong)(uVar11 + lVar14));
    }
                    /* WARNING: Could not recover jumptable at 0x0001400601c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143086840 + lVar5 * 8))(param_11 + uVar11 * 2,param_4,lVar14,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar11 == 1) {
      sVar25 = *psVar20;
      iVar18 = (int)psVar20[1];
      if (uVar12 == 1) {
        iVar18 = iVar18 + sVar25;
      }
      else if (uVar12 == 3) {
        iVar18 = iVar18 * 2;
      }
      else if (uVar12 == 6) {
        iVar18 = sVar24 + iVar18;
      }
      in_XMM0 = ZEXT416((uint)((float)iVar18 * *param_9));
      lVar14 = lVar14 + -1;
      psVar20 = (short *)(param_1 + 2 + param_2);
      *param_4 = (float)(int)sVar25 * param_9[1] + (float)iVar18 * *param_9;
      param_4 = param_4 + 1;
    }
    else if (uVar11 == 2) {
      iVar19 = (int)psVar20[1];
      iVar18 = (int)*psVar20;
      iVar21 = (int)psVar20[2];
      iVar13 = (int)psVar20[3];
      if (uVar12 == 1) {
        *param_4 = (float)iVar18 * param_9[2] + (float)(iVar19 + iVar18) * param_9[1] +
                   *param_9 * (float)(iVar21 + iVar18);
        fVar27 = (float)iVar19 * param_9[2] + param_9[1] * (float)(iVar21 + iVar18) +
                 (float)(iVar18 + iVar13) * *param_9;
        in_XMM0 = ZEXT416((uint)fVar27);
        param_4[1] = fVar27;
      }
      else if (uVar12 == 3) {
        fVar27 = (float)(iVar19 * 2) * param_9[1];
        in_XMM0 = ZEXT416((uint)fVar27);
        *param_4 = (float)iVar18 * param_9[2] + fVar27 + (float)(iVar21 * 2) * *param_9;
        param_4[1] = (float)iVar19 * param_9[2] + (float)(iVar18 + iVar21) * param_9[1] +
                     (float)(iVar13 + iVar19) * *param_9;
      }
      else if (uVar12 == 6) {
        fVar27 = (float)(iVar21 + sVar24) * *param_9;
        in_XMM0 = ZEXT416((uint)fVar27);
        *param_4 = (float)iVar18 * param_9[2] + fVar27 + (float)(iVar19 + sVar24) * param_9[1];
        param_4[1] = (float)iVar19 * param_9[2] + (float)(iVar18 + iVar21) * param_9[1] +
                     (float)(sVar24 + iVar13) * *param_9;
      }
      param_4 = param_4 + 2;
      psVar20 = (short *)(param_1 + 4 + param_2);
      lVar14 = lVar14 + -2;
    }
    else {
      uVar6 = param_11 + uVar11 * 2;
      if (0 < (longlong)uVar17) {
        if (6 < (longlong)uVar17) {
          lVar9 = lVar26 * 2 + -2;
          if ((lVar9 <= (longlong)(uVar6 - (longlong)psVar20)) ||
             (lVar9 <= (longlong)-(uVar6 - (longlong)psVar20))) {
            if ((longlong)uVar17 < 8) {
LAB_1400601da:
              uVar23 = 0;
            }
            else {
              uVar16 = uVar6 & 0xf;
              if (uVar16 != 0) {
                if ((uVar6 & 1) != 0) goto LAB_1400601da;
                uVar16 = 0x10 - uVar16 >> 1;
              }
              if ((longlong)uVar17 < (longlong)(uVar16 + 8)) goto LAB_1400601da;
              uVar23 = uVar17 - (uVar17 - uVar16 & 7);
              uVar10 = 0;
              if (uVar16 != 0) {
                do {
                  *(short *)(uVar6 + uVar10 * 2) = psVar20[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar16);
              }
              if (((ulonglong)(psVar20 + uVar16) & 0xf) == 0) {
                do {
                  uVar28 = *(undefined8 *)(psVar20 + uVar16 + 4);
                  puVar2 = (undefined8 *)(uVar6 + uVar16 * 2);
                  *puVar2 = *(undefined8 *)(psVar20 + uVar16);
                  puVar2[1] = uVar28;
                  uVar16 = uVar16 + 8;
                } while (uVar16 < uVar23);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(psVar20 + uVar16));
                  *(undefined1 (*) [16])(uVar6 + uVar16 * 2) = in_XMM0;
                  uVar16 = uVar16 + 8;
                } while (uVar16 < uVar23);
              }
            }
            for (; uVar23 < uVar17; uVar23 = uVar23 + 1) {
              *(short *)(uVar6 + uVar23 * 2) = psVar20[uVar23];
            }
            goto LAB_14005f6db;
          }
        }
        lVar9 = 1;
        uVar23 = lVar26 - 1U >> 1;
        uVar16 = 0;
        if (uVar23 != 0) {
          do {
            uVar10 = uVar16;
            *(short *)(uVar6 + uVar10 * 4) = psVar20[uVar10 * 2];
            *(short *)(uVar6 + 2 + uVar10 * 4) = psVar20[uVar10 * 2 + 1];
            uVar16 = uVar10 + 1;
          } while (uVar16 < uVar23);
          lVar9 = uVar10 + 2 + uVar16;
        }
        if (lVar9 - 1U < lVar26 - 1U) {
          *(short *)(param_11 + ((uVar11 - 1) + lVar9) * 2) = psVar20[lVar9 - 1U];
        }
      }
LAB_14005f6db:
      if (uVar12 == 1) {
        if ((longlong)uVar11 < 1) goto LAB_14005f8ee;
        uVar3 = *(undefined2 *)(param_11 + uVar11 * 2);
        if ((longlong)uVar11 < 8) {
LAB_14006023e:
          uVar23 = 0;
        }
        else {
          uVar16 = param_11 & 0xf;
          if (uVar16 != 0) {
            if ((param_11 & 1) != 0) goto LAB_14006023e;
            uVar16 = 0x10 - uVar16 >> 1;
          }
          if ((longlong)uVar11 < (longlong)(uVar16 + 8)) goto LAB_14006023e;
          uVar10 = 0;
          uVar23 = uVar11 - (uVar11 - uVar16 & 7);
          if (uVar16 != 0) {
            do {
              *(undefined2 *)(param_11 + uVar10 * 2) = uVar3;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar16);
          }
          uVar28 = CONCAT44(CONCAT22(uVar3,uVar3),CONCAT22(uVar3,uVar3));
          do {
            puVar2 = (undefined8 *)(param_11 + uVar16 * 2);
            *puVar2 = uVar28;
            puVar2[1] = uVar28;
            uVar16 = uVar16 + 8;
          } while (uVar16 < uVar23);
        }
        for (; uVar23 < uVar11; uVar23 = uVar23 + 1) {
          *(undefined2 *)(param_11 + uVar23 * 2) = uVar3;
        }
      }
      else if (uVar12 == 3) {
        if (0 < (longlong)uVar11) {
          lVar9 = 1;
          lVar8 = 0;
          if (uVar11 >> 1 != 0) {
            lVar9 = param_11 + lVar26 * 2;
            uVar16 = 0;
            do {
              uVar23 = uVar16;
              *(undefined2 *)(param_11 + uVar23 * 4) = *(undefined2 *)(lVar8 + -2 + lVar9);
              lVar1 = lVar8 + -4;
              lVar8 = lVar8 + -4;
              *(undefined2 *)(param_11 + 2 + uVar23 * 4) = *(undefined2 *)(lVar1 + lVar9);
              uVar16 = uVar23 + 1;
            } while (uVar16 < uVar11 >> 1);
            lVar9 = uVar23 + 2 + uVar16;
          }
          uVar16 = lVar9 - 1;
          if (uVar16 < uVar11) {
            *(undefined2 *)(param_11 + uVar16 * 2) =
                 *(undefined2 *)((param_11 - 2) + (lVar26 - uVar16) * 2);
          }
        }
      }
      else if ((uVar12 == 6) && (0 < (longlong)uVar11)) {
        if ((longlong)uVar11 < 8) {
LAB_1400601e1:
          uVar23 = 0;
        }
        else {
          uVar16 = param_11 & 0xf;
          if (uVar16 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1400601e1;
            uVar16 = 0x10 - uVar16 >> 1;
          }
          if ((longlong)uVar11 < (longlong)(uVar16 + 8)) goto LAB_1400601e1;
          uVar10 = 0;
          uVar23 = uVar11 - (uVar11 - uVar16 & 7);
          if (uVar16 != 0) {
            do {
              *(short *)(param_11 + uVar10 * 2) = sVar24;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar16);
          }
          uVar28 = CONCAT44(CONCAT22(sVar24,sVar24),CONCAT22(sVar24,sVar24));
          do {
            puVar2 = (undefined8 *)(param_11 + uVar16 * 2);
            *puVar2 = uVar28;
            puVar2[1] = uVar28;
            uVar16 = uVar16 + 8;
          } while (uVar16 < uVar23);
        }
        for (; uVar23 < uVar11; uVar23 = uVar23 + 1) {
          *(short *)(param_11 + uVar23 * 2) = sVar24;
        }
      }
LAB_14005f8ee:
      in_XMM0._0_8_ =
           (**(code **)(&UNK_143086840 + lVar5 * 8))(uVar6,param_4,uVar11,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      psVar20 = psVar20 + uVar11;
      param_4 = param_4 + uVar11;
      lVar14 = lVar14 - uVar11;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014006023b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143086840 + lVar5 * 8))(psVar20,param_4,lVar14);
    return;
  }
  if ((longlong)uVar11 < lVar14) {
    lVar14 = lVar14 - uVar11;
    in_XMM0._0_8_ =
         (**(code **)(&UNK_143086840 + lVar5 * 8))(psVar20,param_4,lVar14,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    psVar20 = psVar20 + lVar14;
    param_4 = param_4 + lVar14;
  }
  if (uVar11 == 1) {
    iVar18 = (int)psVar20[-1];
    if (uVar12 == 1) {
      iVar18 = iVar18 + *psVar20;
    }
    else if (uVar12 == 3) {
      iVar18 = iVar18 * 2;
    }
    else if (uVar12 == 6) {
      iVar18 = sVar24 + iVar18;
    }
    *param_4 = (float)(int)*psVar20 * param_9[1] + (float)iVar18 * *param_9;
    return;
  }
  if (uVar11 == 2) {
    iVar13 = (int)psVar20[-2];
    iVar18 = (int)psVar20[-1];
    iVar21 = (int)*psVar20;
    iVar19 = (int)psVar20[1];
    if (uVar12 == 1) {
      *param_4 = (float)iVar21 * param_9[2] + (float)(iVar13 + iVar19) * *param_9 +
                 param_9[1] * (float)(iVar18 + iVar19);
      param_4[1] = *param_9 * (float)(iVar18 + iVar19) + (float)(iVar21 + iVar19) * param_9[1] +
                   (float)iVar19 * param_9[2];
      return;
    }
    if (uVar12 == 3) {
      *param_4 = (float)(iVar13 + iVar21) * *param_9 + (float)iVar21 * param_9[2] +
                 (float)(iVar18 + iVar19) * param_9[1];
      param_4[1] = (float)(iVar18 * 2) * *param_9 + (float)(iVar21 * 2) * param_9[1] +
                   (float)iVar19 * param_9[2];
      return;
    }
    if (uVar12 == 6) {
      *param_4 = (float)iVar21 * param_9[2] + (float)(iVar18 + iVar19) * param_9[1] +
                 (float)(iVar13 + sVar24) * *param_9;
      param_4[1] = (float)iVar19 * param_9[2] + (float)(iVar18 + sVar24) * *param_9 +
                   (float)(sVar24 + iVar21) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar17) {
    if (6 < (longlong)uVar17) {
      psVar15 = psVar20 + -uVar11;
      lVar14 = lVar26 * 2 + -2;
      if ((lVar14 <= (longlong)(param_11 - (longlong)psVar15)) ||
         (lVar14 <= (longlong)-(param_11 - (longlong)psVar15))) {
        if ((longlong)uVar17 < 8) {
LAB_1400601e9:
          uVar16 = 0;
        }
        else {
          uVar6 = param_11 & 0xf;
          if (uVar6 != 0) {
            if ((param_11 & 1) != 0) goto LAB_1400601e9;
            uVar6 = 0x10 - uVar6 >> 1;
          }
          if ((longlong)uVar17 < (longlong)(uVar6 + 8)) goto LAB_1400601e9;
          uVar16 = uVar17 - (uVar17 - uVar6 & 7);
          uVar23 = 0;
          if (uVar6 != 0) {
            do {
              *(short *)(param_11 + uVar23 * 2) = psVar15[uVar23];
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar6);
          }
          if (((ulonglong)(psVar20 + (uVar6 - uVar11)) & 0xf) == 0) {
            do {
              uVar28 = *(undefined8 *)(psVar15 + uVar6 + 4);
              puVar2 = (undefined8 *)(param_11 + uVar6 * 2);
              *puVar2 = *(undefined8 *)(psVar15 + uVar6);
              puVar2[1] = uVar28;
              uVar6 = uVar6 + 8;
            } while (uVar6 < uVar16);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(psVar15 + uVar6));
              *(undefined1 (*) [16])(param_11 + uVar6 * 2) = in_XMM0;
              uVar6 = uVar6 + 8;
            } while (uVar6 < uVar16);
          }
        }
        for (; uVar16 < uVar17; uVar16 = uVar16 + 1) {
          *(short *)(param_11 + uVar16 * 2) = psVar15[uVar16];
        }
        goto LAB_14005fd7c;
      }
    }
    lVar14 = 1;
    uVar6 = lVar26 - 1U >> 1;
    uVar17 = 0;
    if (uVar6 != 0) {
      do {
        uVar16 = uVar17;
        *(short *)(param_11 + uVar16 * 4) = psVar20[uVar16 * 2 - uVar11];
        *(short *)(param_11 + 2 + uVar16 * 4) = psVar20[(uVar16 * 2 + 1) - uVar11];
        uVar17 = uVar16 + 1;
      } while (uVar17 < uVar6);
      lVar14 = uVar16 + 2 + uVar17;
    }
    uVar17 = lVar14 - 1;
    if (uVar17 < lVar26 - 1U) {
      *(short *)(param_11 + uVar17 * 2) = psVar20[uVar17 - uVar11];
    }
  }
LAB_14005fd7c:
  if (uVar12 == 1) {
    if ((longlong)uVar11 < 1) goto LAB_140060018;
    if (6 < (longlong)uVar11) {
      lVar14 = param_11 + lVar26 * 2;
      uVar17 = lVar14 - 2;
      lVar9 = uVar17 - (lVar14 + -4);
      if ((1 < lVar9) || ((longlong)(uVar11 * 2) <= -lVar9)) {
        uVar3 = *(undefined2 *)(lVar14 + -4);
        if ((longlong)uVar11 < 8) {
LAB_1400601f7:
          uVar17 = 0;
        }
        else {
          uVar6 = uVar17 & 0xf;
          if (uVar6 != 0) {
            if ((uVar17 & 1) != 0) goto LAB_1400601f7;
            uVar6 = 0x10 - uVar6 >> 1;
          }
          if ((longlong)uVar11 < (longlong)(uVar6 + 8)) goto LAB_1400601f7;
          uVar16 = 0;
          uVar17 = uVar11 - (uVar11 - uVar6 & 7);
          if (uVar6 != 0) {
            do {
              *(undefined2 *)(lVar14 + -2 + uVar16 * 2) = uVar3;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar6);
          }
          uVar28 = CONCAT44(CONCAT22(uVar3,uVar3),CONCAT22(uVar3,uVar3));
          do {
            puVar2 = (undefined8 *)(lVar14 + -2 + uVar6 * 2);
            *puVar2 = uVar28;
            puVar2[1] = uVar28;
            uVar6 = uVar6 + 8;
          } while (uVar6 < uVar17);
        }
        for (; uVar17 < uVar11; uVar17 = uVar17 + 1) {
          *(undefined2 *)(lVar14 + -2 + uVar17 * 2) = uVar3;
        }
        goto LAB_140060018;
      }
    }
    lVar14 = 1;
    if (uVar11 >> 1 != 0) {
      lVar14 = param_11 + lVar26 * 2;
      uVar17 = 0;
      do {
        uVar6 = uVar17;
        *(undefined2 *)(lVar14 + -2 + uVar6 * 4) = *(undefined2 *)(lVar14 + -4);
        *(undefined2 *)(lVar14 + uVar6 * 4) = *(undefined2 *)(lVar14 + -4);
        uVar17 = uVar6 + 1;
      } while (uVar17 < uVar11 >> 1);
      lVar14 = uVar6 + 2 + uVar17;
    }
    if (lVar14 - 1U < uVar11) {
      *(undefined2 *)((param_11 - 2) + (lVar26 + -1 + lVar14) * 2) =
           *(undefined2 *)((param_11 - 4) + lVar26 * 2);
    }
    goto LAB_140060018;
  }
  if (uVar12 == 3) {
    if (0 < (longlong)uVar11) {
      lVar14 = 1;
      lVar9 = 0;
      if (uVar11 >> 1 != 0) {
        lVar14 = param_11 + lVar26 * 2;
        uVar17 = 0;
        do {
          uVar6 = uVar17;
          *(undefined2 *)(lVar14 + -2 + uVar6 * 4) = *(undefined2 *)(lVar9 + -6 + lVar14);
          lVar8 = lVar9 + -8;
          lVar9 = lVar9 + -4;
          *(undefined2 *)(lVar14 + uVar6 * 4) = *(undefined2 *)(lVar8 + lVar14);
          uVar17 = uVar6 + 1;
        } while (uVar17 < uVar11 >> 1);
        lVar14 = uVar6 + 2 + uVar17;
      }
      if (lVar14 - 1U < uVar11) {
        *(undefined2 *)((param_11 - 2) + (lVar26 + -1 + lVar14) * 2) =
             *(undefined2 *)((param_11 - 6) + (lVar26 - (lVar14 - 1U)) * 2);
      }
    }
    goto LAB_140060018;
  }
  if ((uVar12 != 6) || ((longlong)uVar11 < 1)) goto LAB_140060018;
  if ((longlong)uVar11 < 8) {
LAB_1400601f0:
    uVar6 = 0;
  }
  else {
    lVar14 = param_11 + lVar26 * 2;
    uVar17 = lVar14 - 2U & 0xf;
    if (uVar17 != 0) {
      if ((lVar14 - 2U & 1) != 0) goto LAB_1400601f0;
      uVar17 = 0x10 - uVar17 >> 1;
    }
    if ((longlong)uVar11 < (longlong)(uVar17 + 8)) goto LAB_1400601f0;
    uVar16 = 0;
    uVar6 = uVar11 - (uVar11 - uVar17 & 7);
    if (uVar17 != 0) {
      do {
        *(short *)(lVar14 + -2 + uVar16 * 2) = sVar24;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar17);
    }
    uVar28 = CONCAT44(CONCAT22(sVar24,sVar24),CONCAT22(sVar24,sVar24));
    do {
      puVar2 = (undefined8 *)(lVar14 + -2 + uVar17 * 2);
      *puVar2 = uVar28;
      puVar2[1] = uVar28;
      uVar17 = uVar17 + 8;
    } while (uVar17 < uVar6);
  }
  if (uVar6 < uVar11) {
    do {
      *(short *)(param_11 + lVar26 * 2 + -2 + uVar6 * 2) = sVar24;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar11);
  }
LAB_140060018:
                    /* WARNING: Could not recover jumptable at 0x000140060055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_143086840 + lVar5 * 8))(param_11 + uVar11 * 2,param_4,uVar11);
  return;
}

