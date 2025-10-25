
void FUN_1400a1080(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,float *param_9,
                  int param_10,ulonglong param_11)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  byte bVar33;
  ulonglong uVar34;
  byte bVar35;
  ulonglong uVar36;
  byte *pbVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar40;
  ulonglong uStack_78;
  longlong lStack_70;
  
  param_2 = param_2 * param_3;
  lVar27 = (longlong)param_10;
  lVar22 = (longlong)param_6;
  uVar32 = param_7 & 0xf;
  uVar26 = 0;
  uVar31 = (ulonglong)(param_10 >> 1);
  pbVar37 = (byte *)(param_1 + param_2);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x0001400a22b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143086a20 + lVar22 * 8))(pbVar37,param_4,*param_5);
    return;
  }
  if (uVar32 == 6) {
    uVar26 = (uint)*param_8;
  }
  lVar28 = *param_5;
  uVar25 = lVar27 - 1;
  bVar35 = (byte)uVar26;
  if (lVar28 < (longlong)uVar25) {
    lVar30 = 0;
    lVar27 = -uVar31;
    if (lVar27 < (longlong)(uVar31 + lVar28)) {
      uVar26 = param_7 & 0x80;
      lStack_70._0_4_ = param_7 & 0x40;
      do {
        lVar24 = lVar27;
        if (((lVar27 < 0) || (lVar28 <= lVar27)) && (param_7 != 0xf0)) {
          if (uVar32 != 6) {
            if (uVar32 == 1) {
              if (lVar27 < 0) {
                lVar24 = 0;
                if ((uint)lStack_70 != 0) {
                  lVar24 = lVar27;
                }
              }
              else if (uVar26 == 0) {
                lVar24 = lVar28 + -1;
              }
            }
            else if (uVar32 == 3) {
              if (lVar28 < 2) {
                if (lVar27 < 0) {
                  if ((uint)lStack_70 == 0) {
                    lVar24 = -lVar27;
                    if (uVar26 == 0) {
                      lVar24 = 0;
                    }
                  }
                }
                else if ((0 < lVar27) && (uVar26 == 0)) {
                  lVar24 = -lVar27;
                  if ((uint)lStack_70 == 0) {
                    lVar24 = 0;
                  }
                }
              }
              else if ((lVar27 < 0) || (lVar28 <= lVar27)) {
                if (lVar27 < 0) goto LAB_1400a2240;
                while (uVar26 == 0) {
                  for (lVar24 = (lVar28 + -1) * 2 - lVar24; lVar24 < 0; lVar24 = -lVar24) {
LAB_1400a2240:
                    if ((uint)lStack_70 != 0) goto LAB_1400a2143;
                  }
                  if (lVar24 < lVar28) break;
                }
              }
            }
            goto LAB_1400a2143;
          }
          uVar19 = (uint)lStack_70;
          if (-1 < lVar27) {
            uVar19 = uVar26;
          }
          bVar33 = bVar35;
          if (uVar19 != 0) goto LAB_1400a2143;
        }
        else {
LAB_1400a2143:
          bVar33 = pbVar37[lVar24];
        }
        lVar27 = lVar27 + 1;
        *(byte *)(lVar30 + param_11) = bVar33;
        lVar30 = lVar30 + 1;
      } while (lVar27 < (longlong)(uVar31 + lVar28));
    }
                    /* WARNING: Could not recover jumptable at 0x0001400a21a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143086a20 + lVar22 * 8))(param_11 + uVar31,param_4,lVar28,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    if (uVar31 == 1) {
      bVar33 = *pbVar37;
      bVar9 = pbVar37[1];
      if (uVar32 == 1) {
        uVar19 = (uint)bVar9 + (uint)bVar33;
      }
      else if (uVar32 == 3) {
        uVar19 = (uint)bVar9 * 2;
      }
      else {
        uVar19 = (uint)bVar9;
        if (uVar32 == 6) {
          uVar19 = bVar9 + uVar26;
        }
      }
      lVar28 = lVar28 + -1;
      in_XMM0._0_4_ = (float)uVar19 * *param_9;
      pbVar37 = (byte *)(param_1 + 1 + param_2);
      *param_4 = (float)bVar33 * param_9[1] + in_XMM0._0_4_;
      param_4 = param_4 + 1;
    }
    else if (uVar31 == 2) {
      uVar19 = (uint)*pbVar37;
      uVar20 = (uint)pbVar37[1];
      bVar33 = pbVar37[3];
      uVar21 = (uint)pbVar37[2];
      if (uVar32 == 1) {
        *param_4 = (float)uVar19 * param_9[2] + (float)(uVar20 + uVar19) * param_9[1] +
                   *param_9 * (float)(uVar21 + uVar19);
        in_XMM0._0_4_ =
             (float)uVar20 * param_9[2] + param_9[1] * (float)(uVar21 + uVar19) +
             (float)(uVar19 + bVar33) * *param_9;
        param_4[1] = in_XMM0._0_4_;
      }
      else if (uVar32 == 3) {
        in_XMM0._0_4_ = (float)(uVar20 * 2) * param_9[1];
        *param_4 = (float)uVar19 * param_9[2] + in_XMM0._0_4_ + (float)(uVar21 * 2) * *param_9;
        param_4[1] = (float)uVar20 * param_9[2] + (float)(uVar19 + uVar21) * param_9[1] +
                     (float)(bVar33 + uVar20) * *param_9;
      }
      else if (uVar32 == 6) {
        in_XMM0._0_4_ = (float)(uVar21 + uVar26) * *param_9;
        *param_4 = (float)uVar19 * param_9[2] + in_XMM0._0_4_ +
                   (float)(uVar20 + uVar26) * param_9[1];
        param_4[1] = (float)uVar20 * param_9[2] + (float)(uVar19 + uVar21) * param_9[1] +
                     (float)(bVar33 + uVar26) * *param_9;
      }
      pbVar37 = (byte *)(param_1 + 2 + param_2);
      param_4 = param_4 + 2;
      lVar28 = lVar28 + -2;
    }
    else {
      if (0 < (longlong)uVar25) {
        if (6 < (longlong)uVar25) {
          lVar30 = (param_11 + uVar31) - (longlong)pbVar37;
          if ((lVar27 + -1 <= lVar30) || (lVar27 + -1 <= -lVar30)) {
            uVar29 = uVar31 + param_11;
            if ((longlong)uVar25 < 0x10) {
LAB_1400a21bb:
              uVar34 = 0;
            }
            else {
              uVar36 = uVar29 & 0xf;
              if (uVar36 != 0) {
                uVar36 = 0x10 - uVar36;
              }
              if ((longlong)uVar25 < (longlong)(uVar36 + 0x10)) goto LAB_1400a21bb;
              uVar34 = uVar25 - (uVar25 - uVar36 & 0xf);
              uVar23 = 0;
              if (uVar36 != 0) {
                do {
                  *(byte *)(uVar23 + uVar29) = pbVar37[uVar23];
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar36);
              }
              if (((ulonglong)(pbVar37 + uVar36) & 0xf) == 0) {
                do {
                  uVar39 = *(undefined8 *)(pbVar37 + uVar36 + 8);
                  *(undefined8 *)(uVar36 + uVar29) = *(undefined8 *)(pbVar37 + uVar36);
                  ((undefined8 *)(uVar36 + uVar29))[1] = uVar39;
                  uVar36 = uVar36 + 0x10;
                } while (uVar36 < uVar34);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar37 + uVar36));
                  *(undefined1 (*) [16])(uVar36 + uVar29) = in_XMM0;
                  uVar36 = uVar36 + 0x10;
                } while (uVar36 < uVar34);
              }
            }
            for (; uVar34 < uVar25; uVar34 = uVar34 + 1) {
              *(byte *)(uVar34 + uVar29) = pbVar37[uVar34];
            }
            goto LAB_1400a1522;
          }
        }
        uStack_78 = lVar27 - 1;
        lVar30 = uVar31 + param_11;
        lVar24 = 1;
        uVar29 = 0;
        if (uStack_78 >> 1 != 0) {
          do {
            uVar36 = uVar29;
            *(byte *)(lVar30 + uVar36 * 2) = pbVar37[uVar36 * 2];
            *(byte *)(lVar30 + 1 + uVar36 * 2) = pbVar37[uVar36 * 2 + 1];
            uVar29 = uVar36 + 1;
          } while (uVar29 < uStack_78 >> 1);
          lVar24 = uVar36 + 2 + uVar29;
        }
        uVar29 = lVar24 - 1;
        if (uVar29 < uStack_78) {
          *(byte *)(lVar30 + uVar29) = pbVar37[uVar29];
        }
      }
LAB_1400a1522:
      lStack_70 = uVar31 + param_11;
      if (uVar32 == 1) {
        if (0 < (longlong)uVar31) {
          if ((longlong)uVar31 < 7) {
            lVar30 = 1;
            uVar29 = 0;
            if (uVar31 >> 1 != 0) {
              do {
                uVar36 = uVar29;
                *(undefined1 *)(param_11 + uVar36 * 2) = *(undefined1 *)(param_11 + uVar31);
                *(undefined1 *)(param_11 + 1 + uVar36 * 2) = *(undefined1 *)(param_11 + uVar31);
                uVar29 = uVar36 + 1;
              } while (uVar29 < uVar31 >> 1);
              lVar30 = uVar36 + 2 + uVar29;
            }
            if (lVar30 - 1U < uVar31) {
              *(undefined1 *)((lVar30 - 1U) + param_11) = *(undefined1 *)(param_11 + uVar31);
            }
          }
          else {
            uVar11 = *(undefined1 *)(param_11 + uVar31);
            if ((longlong)uVar31 < 0x10) {
LAB_1400a21c9:
              uVar36 = 0;
            }
            else {
              uVar29 = param_11 & 0xf;
              if (uVar29 != 0) {
                uVar29 = 0x10 - uVar29;
              }
              if ((longlong)uVar31 < (longlong)(uVar29 + 0x10)) goto LAB_1400a21c9;
              uVar34 = 0;
              uVar36 = uVar31 - (uVar31 - uVar29 & 0xf);
              if (uVar29 != 0) {
                do {
                  *(undefined1 *)(uVar34 + param_11) = uVar11;
                  uVar34 = uVar34 + 1;
                } while (uVar34 < uVar29);
              }
              uVar38 = CONCAT22(CONCAT11(uVar11,uVar11),CONCAT11(uVar11,uVar11));
              uVar39 = CONCAT44(uVar38,uVar38);
              do {
                *(undefined8 *)(uVar29 + param_11) = uVar39;
                ((undefined8 *)(uVar29 + param_11))[1] = uVar39;
                uVar29 = uVar29 + 0x10;
              } while (uVar29 < uVar36);
            }
            for (; uVar36 < uVar31; uVar36 = uVar36 + 1) {
              *(undefined1 *)(uVar36 + param_11) = uVar11;
            }
          }
        }
      }
      else if (uVar32 == 3) {
        if (0 < (longlong)uVar31) {
          lVar30 = 1;
          uVar29 = 0;
          if (uVar31 >> 1 != 0) {
            uVar36 = uVar29;
            do {
              uVar34 = uVar36;
              *(undefined1 *)(param_11 + uVar34 * 2) =
                   *(undefined1 *)((uVar29 - 1) + lVar27 + param_11);
              lVar30 = uVar29 - 2;
              uVar29 = uVar29 - 2;
              *(undefined1 *)(param_11 + 1 + uVar34 * 2) =
                   *(undefined1 *)(lVar30 + lVar27 + param_11);
              uVar36 = uVar34 + 1;
            } while (uVar36 < uVar31 >> 1);
            lVar30 = uVar34 + 2 + uVar36;
          }
          uVar29 = lVar30 - 1;
          if (uVar29 < uVar31) {
            *(undefined1 *)(uVar29 + param_11) =
                 *(undefined1 *)(((lVar27 + param_11) - uVar29) + -1);
          }
        }
      }
      else if ((uVar32 == 6) && (0 < (longlong)uVar31)) {
        if ((longlong)uVar31 < 0x10) {
LAB_1400a21c2:
          uVar36 = 0;
        }
        else {
          uVar29 = param_11 & 0xf;
          if (uVar29 != 0) {
            uVar29 = 0x10 - uVar29;
          }
          if ((longlong)uVar31 < (longlong)(uVar29 + 0x10)) goto LAB_1400a21c2;
          uVar34 = 0;
          uVar36 = uVar31 - (uVar31 - uVar29 & 0xf);
          if (uVar29 != 0) {
            do {
              *(byte *)(uVar34 + param_11) = bVar35;
              uVar34 = uVar34 + 1;
            } while (uVar34 < uVar29);
          }
          uVar38 = CONCAT22(CONCAT11(bVar35,bVar35),CONCAT11(bVar35,bVar35));
          uVar39 = CONCAT44(uVar38,uVar38);
          do {
            *(undefined8 *)(uVar29 + param_11) = uVar39;
            ((undefined8 *)(uVar29 + param_11))[1] = uVar39;
            uVar29 = uVar29 + 0x10;
          } while (uVar29 < uVar36);
        }
        for (; uVar36 < uVar31; uVar36 = uVar36 + 1) {
          *(byte *)(uVar36 + param_11) = bVar35;
        }
      }
      in_XMM0._0_8_ =
           (**(code **)(&UNK_143086a20 + lVar22 * 8))(lStack_70,param_4,uVar31,param_9,param_10);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      pbVar37 = pbVar37 + uVar31;
      lVar28 = lVar28 - uVar31;
      param_4 = param_4 + uVar31;
    }
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400a2226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_143086a20 + lVar22 * 8))(pbVar37,param_4,lVar28);
    return;
  }
  if ((longlong)uVar31 < lVar28) {
    lVar28 = lVar28 - uVar31;
    in_XMM0._0_8_ =
         (**(code **)(&UNK_143086a20 + lVar22 * 8))(pbVar37,param_4,lVar28,param_9,param_10);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    pbVar37 = pbVar37 + lVar28;
    param_4 = param_4 + lVar28;
  }
  if (uVar31 == 1) {
    uVar19 = (uint)pbVar37[-1];
    if (uVar32 == 1) {
      uVar19 = uVar19 + *pbVar37;
    }
    else if (uVar32 == 3) {
      uVar19 = uVar19 * 2;
    }
    else if (uVar32 == 6) {
      uVar19 = uVar26 + uVar19;
    }
    *param_4 = (float)*pbVar37 * param_9[1] + (float)uVar19 * *param_9;
    return;
  }
  if (uVar31 == 2) {
    bVar35 = pbVar37[-2];
    bVar33 = pbVar37[-1];
    bVar9 = *pbVar37;
    bVar10 = pbVar37[1];
    uVar19 = (uint)bVar9;
    if (uVar32 == 1) {
      uVar32 = (uint)bVar10;
      fVar40 = (float)(bVar33 + uVar32);
      *param_4 = (float)uVar19 * param_9[2] + (float)(bVar35 + uVar32) * *param_9 +
                 param_9[1] * fVar40;
      param_4[1] = *param_9 * fVar40 + (float)(uVar19 + uVar32) * param_9[1] +
                   (float)uVar32 * param_9[2];
      return;
    }
    if (uVar32 == 3) {
      *param_4 = (float)((uint)bVar35 + (uint)bVar9) * *param_9 + (float)bVar9 * param_9[2] +
                 (float)((uint)bVar33 + (uint)bVar10) * param_9[1];
      param_4[1] = (float)((uint)bVar33 * 2) * *param_9 + (float)((uint)bVar9 * 2) * param_9[1] +
                   (float)bVar10 * param_9[2];
      return;
    }
    if (uVar32 == 6) {
      *param_4 = (float)uVar19 * param_9[2] + (float)((uint)bVar33 + (uint)bVar10) * param_9[1] +
                 (float)(bVar35 + uVar26) * *param_9;
      param_4[1] = (float)bVar10 * param_9[2] + (float)(bVar33 + uVar26) * *param_9 +
                   (float)(uVar26 + uVar19) * param_9[1];
      return;
    }
    return;
  }
  if (0 < (longlong)uVar25) {
    if (6 < (longlong)uVar25) {
      lVar28 = param_11 - ((longlong)pbVar37 - uVar31);
      if ((lVar27 + -1 <= lVar28) || (lVar27 + -1 <= -lVar28)) {
        if ((longlong)uVar25 < 0x10) {
LAB_1400a21d0:
          uVar36 = 0;
        }
        else {
          uVar29 = param_11 & 0xf;
          if (uVar29 != 0) {
            uVar29 = 0x10 - uVar29;
          }
          if ((longlong)uVar25 < (longlong)(uVar29 + 0x10)) goto LAB_1400a21d0;
          uVar36 = uVar25 - (uVar25 - uVar29 & 0xf);
          uVar34 = 0;
          if (uVar29 != 0) {
            do {
              *(byte *)(uVar34 + param_11) = pbVar37[uVar34 - uVar31];
              uVar34 = uVar34 + 1;
            } while (uVar34 < uVar29);
          }
          if ((((longlong)pbVar37 - uVar31) + uVar29 & 0xf) == 0) {
            do {
              uVar39 = *(undefined8 *)(pbVar37 + (uVar29 - uVar31) + 8);
              *(undefined8 *)(uVar29 + param_11) = *(undefined8 *)(pbVar37 + (uVar29 - uVar31));
              ((undefined8 *)(uVar29 + param_11))[1] = uVar39;
              uVar29 = uVar29 + 0x10;
            } while (uVar29 < uVar36);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar37 + (uVar29 - uVar31)));
              *(undefined1 (*) [16])(uVar29 + param_11) = in_XMM0;
              uVar29 = uVar29 + 0x10;
            } while (uVar29 < uVar36);
          }
        }
        for (; uVar36 < uVar25; uVar36 = uVar36 + 1) {
          *(byte *)(uVar36 + param_11) = pbVar37[uVar36 - uVar31];
        }
        goto LAB_1400a1c3f;
      }
    }
    lVar28 = 1;
    uVar29 = lVar27 - 1U >> 1;
    uVar25 = 0;
    if (uVar29 != 0) {
      do {
        uVar36 = uVar25;
        lVar28 = uVar36 * 2 - uVar31;
        *(byte *)(param_11 + uVar36 * 2) = pbVar37[lVar28];
        *(byte *)(param_11 + 1 + uVar36 * 2) = pbVar37[lVar28 + 1];
        uVar25 = uVar36 + 1;
      } while (uVar25 < uVar29);
      lVar28 = uVar36 + 2 + uVar25;
    }
    uVar25 = lVar28 - 1;
    if (uVar25 < lVar27 - 1U) {
      *(byte *)(uVar25 + param_11) = pbVar37[uVar25 - uVar31];
    }
  }
LAB_1400a1c3f:
  if (uVar32 == 1) {
    if ((longlong)uVar31 < 1) goto LAB_1400a1ff3;
    if ((longlong)uVar31 < 7) {
      lVar28 = 1;
      if (uVar31 >> 1 != 0) {
        lVar28 = lVar27 + param_11;
        uVar25 = 0;
        do {
          uVar29 = uVar25;
          *(undefined1 *)(lVar28 + -1 + uVar29 * 2) = *(undefined1 *)(lVar28 + -2);
          *(undefined1 *)(lVar28 + uVar29 * 2) = *(undefined1 *)(lVar28 + -2);
          uVar25 = uVar29 + 1;
        } while (uVar25 < uVar31 >> 1);
        lVar28 = uVar29 + 2 + uVar25;
      }
      if (lVar28 - 1U < uVar31) {
        *(undefined1 *)(lVar27 + param_11 + -1 + (lVar28 - 1U)) =
             *(undefined1 *)(lVar27 + param_11 + -2);
      }
      goto LAB_1400a1ff3;
    }
    lVar27 = lVar27 + param_11;
    uVar11 = *(undefined1 *)(lVar27 + -2);
    if ((longlong)uVar31 < 0x10) {
LAB_1400a21e7:
      uVar29 = 0;
    }
    else {
      uVar25 = lVar27 - 1U & 0xf;
      if (uVar25 != 0) {
        uVar25 = 0x10 - uVar25;
      }
      if ((longlong)uVar31 < (longlong)(uVar25 + 0x10)) goto LAB_1400a21e7;
      uVar36 = 0;
      uVar29 = uVar31 - (uVar31 - uVar25 & 0xf);
      if (uVar25 != 0) {
        do {
          *(undefined1 *)((uVar36 - 1) + lVar27) = uVar11;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar25);
      }
      uVar38 = CONCAT22(CONCAT11(uVar11,uVar11),CONCAT11(uVar11,uVar11));
      uVar39 = CONCAT44(uVar38,uVar38);
      do {
        puVar8 = (undefined8 *)((uVar25 - 1) + lVar27);
        *puVar8 = uVar39;
        puVar8[1] = uVar39;
        uVar25 = uVar25 + 0x10;
      } while (uVar25 < uVar29);
    }
    for (; uVar29 < uVar31; uVar29 = uVar29 + 1) {
      *(undefined1 *)((uVar29 - 1) + lVar27) = uVar11;
    }
    goto LAB_1400a1ff3;
  }
  if (uVar32 != 3) {
    if ((uVar32 != 6) || ((longlong)uVar31 < 1)) goto LAB_1400a1ff3;
    if ((longlong)uVar31 < 0x10) {
LAB_1400a21df:
      uVar29 = 0;
    }
    else {
      uVar25 = lVar27 + -1 + param_11 & 0xf;
      if (uVar25 != 0) {
        uVar25 = 0x10 - uVar25;
      }
      if ((longlong)uVar31 < (longlong)(uVar25 + 0x10)) goto LAB_1400a21df;
      uVar36 = 0;
      uVar29 = uVar31 - (uVar31 - uVar25 & 0xf);
      if (uVar25 != 0) {
        do {
          *(byte *)((uVar36 - 1) + lVar27 + param_11) = bVar35;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar25);
      }
      uVar38 = CONCAT22(CONCAT11(bVar35,bVar35),CONCAT11(bVar35,bVar35));
      uVar39 = CONCAT44(uVar38,uVar38);
      do {
        puVar8 = (undefined8 *)((uVar25 - 1) + lVar27 + param_11);
        *puVar8 = uVar39;
        puVar8[1] = uVar39;
        uVar25 = uVar25 + 0x10;
      } while (uVar25 < uVar29);
    }
    if (uVar29 < uVar31) {
      do {
        *(byte *)((uVar29 - 1) + lVar27 + param_11) = bVar35;
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar31);
    }
    goto LAB_1400a1ff3;
  }
  if ((longlong)uVar31 < 1) goto LAB_1400a1ff3;
  if ((longlong)uVar31 < 0x10) {
LAB_1400a21d7:
    uVar29 = 0;
  }
  else {
    lVar28 = lVar27 + param_11;
    uVar25 = lVar27 + -1 + param_11 & 0xf;
    if (uVar25 != 0) {
      uVar25 = 0x10 - uVar25;
    }
    if ((longlong)uVar31 < (longlong)(uVar25 + 0x10)) goto LAB_1400a21d7;
    uVar36 = 0;
    lVar30 = 0;
    uVar29 = uVar31 - (uVar31 - uVar25 & 0xf);
    if (uVar25 != 0) {
      do {
        lVar24 = lVar30 + -3;
        lVar30 = lVar30 + -1;
        *(undefined1 *)((uVar36 - 1) + lVar28) = *(undefined1 *)(lVar24 + lVar28);
        uVar36 = uVar36 + 1;
      } while (uVar36 < uVar25);
    }
    lVar30 = -uVar25;
    do {
      lVar24 = lVar30 + -3;
      lVar1 = lVar30 + -4;
      lVar2 = lVar30 + -5;
      lVar3 = lVar30 + -6;
      lVar4 = lVar30 + -7;
      lVar5 = lVar30 + -8;
      lVar6 = lVar30 + -9;
      lVar7 = lVar30 + -10;
      uVar11 = *(undefined1 *)(lVar30 + -0xb + lVar28);
      uVar12 = *(undefined1 *)(lVar30 + -0xc + lVar28);
      uVar13 = *(undefined1 *)(lVar30 + -0xd + lVar28);
      uVar14 = *(undefined1 *)(lVar30 + -0xe + lVar28);
      uVar15 = *(undefined1 *)(lVar30 + -0xf + lVar28);
      uVar16 = *(undefined1 *)(lVar30 + -0x10 + lVar28);
      uVar17 = *(undefined1 *)(lVar30 + -0x11 + lVar28);
      uVar18 = *(undefined1 *)(lVar30 + -0x12 + lVar28);
      lVar30 = lVar30 + -0x10;
      puVar8 = (undefined8 *)((uVar25 - 1) + lVar28);
      *puVar8 = CONCAT17(*(undefined1 *)(lVar7 + lVar28),
                         CONCAT16(*(undefined1 *)(lVar6 + lVar28),
                                  CONCAT15(*(undefined1 *)(lVar5 + lVar28),
                                           CONCAT14(*(undefined1 *)(lVar4 + lVar28),
                                                    CONCAT13(*(undefined1 *)(lVar3 + lVar28),
                                                             CONCAT12(*(undefined1 *)
                                                                       (lVar2 + lVar28),
                                                                      CONCAT11(*(undefined1 *)
                                                                                (lVar1 + lVar28),
                                                                               *(undefined1 *)
                                                                                (lVar24 + lVar28))))
                                                   ))));
      puVar8[1] = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
      uVar25 = uVar25 + 0x10;
    } while (uVar25 < uVar29);
  }
  lVar28 = -uVar29;
  if (uVar29 < uVar31) {
    do {
      lVar30 = lVar28 + -3;
      lVar28 = lVar28 + -1;
      *(undefined1 *)((uVar29 - 1) + lVar27 + param_11) =
           *(undefined1 *)(lVar30 + lVar27 + param_11);
      uVar29 = uVar29 + 1;
    } while (uVar29 < uVar31);
  }
LAB_1400a1ff3:
                    /* WARNING: Could not recover jumptable at 0x0001400a202e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_143086a20 + lVar22 * 8))(param_11 + uVar31,param_4,uVar31);
  return;
}

