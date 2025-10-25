
longlong *
FUN_140648a80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6,uint param_7,byte *param_8,undefined8 param_9,int param_10,
             longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  longlong *in_RAX;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  float fVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar29;
  float fVar30;
  undefined4 uVar32;
  undefined8 uVar31;
  longlong lStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  code *pcStack_c0;
  uint uStack_b8;
  undefined1 *puStack_b0;
  longlong lStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  byte abStack_78 [8];
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  
  iVar24 = param_10 >> 1;
  lVar23 = 0;
  lStack_50 = param_2;
  if (iVar24 < 1) {
    if ((param_7 & 0x10) != 0) {
      return in_RAX;
    }
  }
  else {
    uStack_58 = (ulonglong)iVar24;
    lVar26 = param_4 * uStack_58 + param_3;
    lStack_148 = CONCAT44(lStack_148._4_4_,iVar24);
    lStack_88 = param_3;
    lStack_80 = param_4;
    lStack_70 = param_1;
    do {
      plVar8 = &lStack_68;
      lStack_68 = *param_5;
      lStack_60 = param_5[1];
      auVar28._0_8_ =
           FUN_1405fcc80(lStack_70,lStack_50,lVar23,lVar26,plVar8,param_6,param_7,param_8,param_9,
                         param_10,param_11);
      auVar28._8_8_ = extraout_XMM0_Qb;
      lVar23 = lVar23 + 1;
      lVar26 = lVar26 + lStack_80;
    } while (lVar23 < (longlong)uStack_58);
    param_1 = lStack_70;
    param_3 = lStack_88;
    param_4 = lStack_80;
    iVar24 = (int)lStack_148;
    if ((param_7 & 0x10) != 0) {
      uStack_110 = CONCAT44(uStack_110._4_4_,param_7) & 0xffffffff0000000f;
      lStack_70 = lStack_70 - lStack_50 * uStack_58;
      pcStack_c0 = *(code **)(&DAT_14308b5c0 + (longlong)param_6 * 8);
      uVar14 = 0;
      lStack_148 = (longlong)param_10 * 3;
      lStack_98 = (longlong)param_10 + -1;
      uStack_138 = lStack_148 - 1;
      uStack_e0 = uStack_138 / 3;
      lStack_130 = param_11 + lStack_148;
      uStack_c8 = lStack_148 - 3;
      uStack_90 = param_7 & 0xf0;
      lStack_a8 = -uStack_58;
      lStack_d8 = uStack_58 * 3;
      uStack_140 = lStack_d8 + 2;
      puStack_b0 = (undefined1 *)(param_11 + lStack_d8);
      uStack_120 = uStack_140 / 3;
      uStack_a0 = param_7 & 0x80;
      uStack_b8 = param_7 & 0x40;
      uStack_128 = uStack_140 / 6;
      lStack_118 = uStack_58 * -3;
      uStack_f8 = (longlong)(param_10 * 3) - 3;
      uStack_100 = (ulonglong)puStack_b0 & 0xf;
      uStack_d0 = 0;
      uStack_108 = 0x10 - uStack_100;
      uStack_e8 = ((longlong)(param_10 * 3) - 1U) / 6;
      uStack_f0 = uStack_f8 >> 1;
      iVar24 = (int)uStack_110;
      uVar13 = uVar14;
      do {
        abStack_78[0] = 0;
        abStack_78[1] = 0;
        abStack_78[2] = 0;
        uVar17 = lStack_80 * uVar13 + lStack_88;
        lVar23 = lStack_50 * uVar13 + lStack_70;
        uVar32 = (undefined4)((ulonglong)plVar8 >> 0x20);
        if (uStack_90 == 0xf0) {
          plVar8 = (longlong *)CONCAT44(uVar32,param_10);
          plVar9 = (longlong *)(*pcStack_c0)(lVar23,uVar17,*param_5,param_9,plVar8);
          auVar28._8_8_ = extraout_XMM0_Qb_03;
          auVar28._0_8_ = extraout_XMM0_Qa_02;
        }
        else {
          pbVar12 = abStack_78;
          if (iVar24 == 6) {
            pbVar12 = param_8;
          }
          lVar26 = *param_5;
          if (lVar26 < lStack_98) {
            uVar14 = 0;
            lVar19 = 0;
            lVar21 = -uStack_58;
            if (lStack_a8 < (longlong)(uStack_58 + lVar26)) {
              do {
                lVar18 = lVar21;
                if (lVar21 < 0) {
                  if (param_7 != 0xf0) {
                    if (iVar24 == 6) {
                      if (uStack_b8 == 0) goto LAB_140649f0c;
                    }
                    else {
                      if (iVar24 != 1) goto LAB_140649e84;
LAB_140649fc5:
                      lVar18 = 0;
                      if (uStack_b8 != 0) {
                        lVar18 = lVar21;
                      }
                    }
                  }
LAB_140649ef4:
                  lVar18 = lVar18 * 3;
                  bVar10 = *(byte *)(lVar18 + lVar23);
                  bVar22 = *(byte *)(lVar18 + 1 + lVar23);
                  bVar15 = *(byte *)(lVar18 + 2 + lVar23);
                }
                else {
                  if ((lVar21 < lVar26) || (param_7 == 0xf0)) goto LAB_140649ef4;
                  if (iVar24 != 6) {
                    if (iVar24 == 1) {
                      if (lVar21 < 0) goto LAB_140649fc5;
                      if (uStack_a0 == 0) {
                        lVar18 = lVar26 + -1;
                      }
                    }
                    else {
LAB_140649e84:
                      if (iVar24 == 3) {
                        if (lVar26 < 2) {
                          if (lVar21 < 0) {
                            if (uStack_b8 == 0) {
                              lVar18 = -lVar21;
                              if (uStack_a0 == 0) {
                                lVar18 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar21) && (uStack_a0 == 0)) &&
                                  (lVar18 = -lVar21, uStack_b8 == 0)) {
                            lVar18 = 0;
                          }
                        }
                        else {
                          if (lVar21 < 0) goto LAB_140649fd8;
                          if (lVar26 <= lVar21) {
                            while (uStack_a0 == 0) {
                              for (lVar18 = (lVar26 + -1) * 2 - lVar18; lVar18 < 0; lVar18 = -lVar18
                                  ) {
LAB_140649fd8:
                                if (uStack_b8 != 0) goto LAB_140649ef4;
                              }
                              if (lVar18 < lVar26) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_140649ef4;
                  }
                  if (uStack_a0 != 0) goto LAB_140649ef4;
LAB_140649f0c:
                  bVar10 = *pbVar12;
                  bVar22 = pbVar12[1];
                  bVar15 = pbVar12[2];
                }
                uVar14 = uVar14 + 1;
                lVar21 = lVar21 + 1;
                *(byte *)(lVar19 + param_11) = bVar10;
                *(byte *)(lVar19 + 1 + param_11) = bVar22;
                *(byte *)(lVar19 + 2 + param_11) = bVar15;
                lVar19 = lVar19 + 3;
                uStack_110 = uVar17;
                uStack_d0 = uVar13;
              } while (uVar14 < lVar26 + uStack_58 * 2);
            }
            plVar8 = (longlong *)CONCAT44(uVar32,param_10);
            plVar9 = (longlong *)(*pcStack_c0)(puStack_b0,uVar17,lVar26,param_9,plVar8);
            auVar28._8_8_ = extraout_XMM0_Qb_01;
            auVar28._0_8_ = extraout_XMM0_Qa_00;
          }
          else {
            if (uStack_b8 == 0) {
              if (0 < (longlong)uStack_c8) {
                if (6 < (longlong)uStack_c8) {
                  lVar19 = lStack_50 * uVar14 + lStack_70;
                  if ((lStack_148 + -3 <= (longlong)puStack_b0 - lVar19) ||
                     (lStack_148 + -3 <= -((longlong)puStack_b0 - lVar19))) {
                    if ((longlong)uStack_c8 < 0x10) {
LAB_140649f9d:
                      uVar20 = 0;
                    }
                    else {
                      uVar14 = uStack_100;
                      if (uStack_100 != 0) {
                        uVar14 = uStack_108;
                      }
                      if ((longlong)uStack_c8 < (longlong)(uVar14 + 0x10)) goto LAB_140649f9d;
                      uVar20 = uStack_c8 - (uStack_c8 - uVar14 & 0xf);
                      uVar11 = 0;
                      if (uVar14 != 0) {
                        do {
                          puStack_b0[uVar11] = *(undefined1 *)(uVar11 + lVar19);
                          uVar11 = uVar11 + 1;
                        } while (uVar11 < uVar14);
                      }
                      if ((lVar19 + uVar14 & 0xf) == 0) {
                        do {
                          uVar31 = ((undefined8 *)(uVar14 + lVar19))[1];
                          *(undefined8 *)(puStack_b0 + uVar14) = *(undefined8 *)(uVar14 + lVar19);
                          *(undefined8 *)((longlong)(puStack_b0 + uVar14) + 8) = uVar31;
                          uVar14 = uVar14 + 0x10;
                        } while (uVar14 < uVar20);
                      }
                      else {
                        do {
                          auVar28 = lddqu(auVar28,*(undefined1 (*) [16])(uVar14 + lVar19));
                          *(undefined1 (*) [16])(puStack_b0 + uVar14) = auVar28;
                          uVar14 = uVar14 + 0x10;
                        } while (uVar14 < uVar20);
                      }
                    }
                    for (; uVar20 < uStack_c8; uVar20 = uVar20 + 1) {
                      puStack_b0[uVar20] = *(undefined1 *)(uVar20 + lVar19);
                    }
                    goto LAB_14064948d;
                  }
                }
                lVar19 = 1;
                if (uStack_f0 != 0) {
                  lVar19 = lStack_50 * uVar14 + lStack_70;
                  uVar20 = 0;
                  do {
                    uVar11 = uVar20;
                    puStack_b0[uVar11 * 2] = *(undefined1 *)(lVar19 + uVar11 * 2);
                    puStack_b0[uVar11 * 2 + 1] = *(undefined1 *)(lVar19 + 1 + uVar11 * 2);
                    uVar20 = uVar11 + 1;
                  } while (uVar20 < uStack_f0);
                  lVar19 = uVar11 + 2 + uVar20;
                }
                uVar20 = lVar19 - 1;
                if (uVar20 < uStack_f8) {
                  puStack_b0[uVar20] = *(undefined1 *)(uVar20 + uVar14 * lStack_50 + lStack_70);
                }
              }
LAB_14064948d:
              if (iVar24 == 1) {
                if (0 < lStack_d8) {
                  lVar19 = 1;
                  uVar14 = 0;
                  if (uStack_128 != 0) {
                    do {
                      uVar20 = uVar14;
                      *(undefined1 *)(param_11 + uVar20 * 6) = *puStack_b0;
                      uVar14 = uVar20 + 1;
                      uVar3 = puStack_b0[2];
                      *(undefined1 *)(param_11 + 1 + uVar20 * 6) = puStack_b0[1];
                      *(undefined1 *)(param_11 + 2 + uVar20 * 6) = uVar3;
                      *(undefined1 *)(param_11 + 3 + uVar20 * 6) = *puStack_b0;
                      uVar3 = puStack_b0[2];
                      *(undefined1 *)(param_11 + 4 + uVar20 * 6) = puStack_b0[1];
                      *(undefined1 *)(param_11 + 5 + uVar20 * 6) = uVar3;
                    } while (uVar14 < uStack_128);
                    lVar19 = uVar20 + 2 + uVar14;
                  }
                  if (lVar19 - 1U < uStack_120) {
                    lVar19 = lVar19 * 3;
                    *(undefined1 *)(lVar19 + -3 + param_11) = *puStack_b0;
                    uVar3 = puStack_b0[2];
                    *(undefined1 *)(lVar19 + -2 + param_11) = puStack_b0[1];
                    *(undefined1 *)(lVar19 + -1 + param_11) = uVar3;
                  }
                }
              }
              else if (iVar24 == 3) {
                if (0 < lStack_d8) {
                  lVar19 = 1;
                  lVar21 = 0;
                  lVar18 = 0;
                  uVar14 = 0;
                  if (uStack_128 != 0) {
                    do {
                      uVar20 = uVar14;
                      uVar14 = uVar20 + 1;
                      *(undefined1 *)(lVar21 + param_11) = *(undefined1 *)(lVar18 + -3 + lStack_130)
                      ;
                      *(undefined1 *)(lVar21 + 1 + param_11) =
                           *(undefined1 *)(lVar18 + -2 + lStack_130);
                      *(undefined1 *)(lVar21 + 2 + param_11) =
                           *(undefined1 *)(lVar18 + -1 + lStack_130);
                      *(undefined1 *)(lVar21 + 3 + param_11) =
                           *(undefined1 *)(lVar18 + -6 + lStack_130);
                      *(undefined1 *)(lVar21 + 4 + param_11) =
                           *(undefined1 *)(lVar18 + -5 + lStack_130);
                      lVar19 = lVar18 + -4;
                      lVar18 = lVar18 + -6;
                      *(undefined1 *)(lVar21 + 5 + param_11) = *(undefined1 *)(lVar19 + lStack_130);
                      lVar21 = lVar21 + 6;
                    } while (uVar14 < uStack_128);
                    lVar19 = uVar20 + 2 + uVar14;
                  }
                  if (lVar19 - 1U < uStack_120) {
                    lVar19 = lVar19 * 3;
                    lVar21 = -(lVar19 + -3);
                    *(undefined1 *)(lVar19 + -3 + param_11) =
                         *(undefined1 *)(lVar21 + -3 + lStack_130);
                    *(undefined1 *)(lVar19 + -2 + param_11) =
                         *(undefined1 *)(lVar21 + -2 + lStack_130);
                    *(undefined1 *)(lVar19 + -1 + param_11) =
                         *(undefined1 *)(lVar21 + -1 + lStack_130);
                  }
                }
              }
              else if ((iVar24 == 6) && (0 < lStack_d8)) {
                lVar19 = 1;
                uVar14 = 0;
                if (uStack_128 != 0) {
                  do {
                    uVar20 = uVar14;
                    *(byte *)(param_11 + uVar20 * 6) = *pbVar12;
                    uVar14 = uVar20 + 1;
                    *(byte *)(param_11 + 1 + uVar20 * 6) = pbVar12[1];
                    *(byte *)(param_11 + 2 + uVar20 * 6) = pbVar12[2];
                    *(byte *)(param_11 + 3 + uVar20 * 6) = *pbVar12;
                    *(byte *)(param_11 + 4 + uVar20 * 6) = pbVar12[1];
                    *(byte *)(param_11 + 5 + uVar20 * 6) = pbVar12[2];
                  } while (uVar14 < uStack_128);
                  lVar19 = uVar20 + 2 + uVar14;
                }
                if (lVar19 - 1U < uStack_120) {
                  lVar19 = lVar19 * 3;
                  *(byte *)(lVar19 + -3 + param_11) = *pbVar12;
                  *(byte *)(lVar19 + -2 + param_11) = pbVar12[1];
                  *(byte *)(lVar19 + -1 + param_11) = pbVar12[2];
                }
              }
              uVar31 = CONCAT44(uVar32,param_10);
              (*pcStack_c0)(puStack_b0,uVar17,uStack_58,param_9,uVar31);
              uVar32 = (undefined4)((ulonglong)uVar31 >> 0x20);
              lVar26 = lVar26 - uStack_58;
              lVar23 = lVar23 + lStack_d8;
              uVar17 = uVar17 + lStack_d8 * 4;
            }
            if (uStack_a0 == 0) {
              if ((longlong)uStack_58 < lVar26) {
                lVar26 = lVar26 - uStack_58;
                uVar31 = CONCAT44(uVar32,param_10);
                (*pcStack_c0)(lVar23,uVar17,lVar26,param_9,uVar31);
                uVar32 = (undefined4)((ulonglong)uVar31 >> 0x20);
                lVar23 = lVar23 + lVar26 * 3;
                uVar17 = uVar17 + lVar26 * 0xc;
              }
              if (0 < (longlong)uStack_c8) {
                lVar23 = lVar23 + lStack_118;
                lVar26 = ((longlong)uStack_138 / 3) * 3;
                if ((lVar26 <= param_11 - lVar23) || (lVar26 + -2 <= -(param_11 - lVar23))) {
                  lVar19 = (param_11 + 1) - lVar23;
                  if (((lVar26 <= lVar19) || (lVar26 + -1 <= -lVar19)) &&
                     ((lVar19 = (param_11 + 1) - param_11, lVar26 + -2 <= lVar19 ||
                      (lVar26 + -1 <= -lVar19)))) {
                    lVar26 = 1;
                    uVar14 = 0;
                    if (uStack_e8 != 0) {
                      do {
                        uVar20 = uVar14;
                        uVar14 = uVar20 + 1;
                        *(undefined1 *)(param_11 + uVar20 * 6) =
                             *(undefined1 *)(lVar23 + uVar20 * 6);
                        *(undefined1 *)(param_11 + 3 + uVar20 * 6) =
                             *(undefined1 *)(lVar23 + 3 + uVar20 * 6);
                      } while (uVar14 < uStack_e8);
                      lVar26 = uVar20 + 2 + uVar14;
                    }
                    if (lVar26 - 1U < uStack_e0) {
                      lVar26 = lVar26 * 3 + -3;
                      *(undefined1 *)(lVar26 + param_11) = *(undefined1 *)(lVar23 + lVar26);
                    }
                    lVar26 = 1;
                    uVar14 = 0;
                    if (uStack_e8 != 0) {
                      do {
                        uVar20 = uVar14;
                        uVar14 = uVar20 + 1;
                        uVar3 = *(undefined1 *)(lVar23 + 2 + uVar20 * 6);
                        uVar4 = *(undefined1 *)(lVar23 + 4 + uVar20 * 6);
                        uVar5 = *(undefined1 *)(lVar23 + 5 + uVar20 * 6);
                        *(undefined1 *)(param_11 + 1 + uVar20 * 6) =
                             *(undefined1 *)(lVar23 + 1 + uVar20 * 6);
                        *(undefined1 *)(param_11 + 2 + uVar20 * 6) = uVar3;
                        *(undefined1 *)(param_11 + 4 + uVar20 * 6) = uVar4;
                        *(undefined1 *)(param_11 + 5 + uVar20 * 6) = uVar5;
                      } while (uVar14 < uStack_e8);
                      lVar26 = uVar20 + 2 + uVar14;
                    }
                    if (lVar26 - 1U < uStack_e0) {
                      lVar26 = lVar26 * 3;
                      uVar3 = *(undefined1 *)(lVar23 + 2 + lVar26 + -3);
                      *(undefined1 *)(lVar26 + -2 + param_11) =
                           *(undefined1 *)(lVar23 + 1 + lVar26 + -3);
                      *(undefined1 *)(lVar26 + -1 + param_11) = uVar3;
                    }
                    goto LAB_1406499ba;
                  }
                }
                lVar26 = 1;
                uVar14 = 0;
                if (uStack_e8 != 0) {
                  do {
                    uVar20 = uVar14;
                    uVar14 = uVar20 + 1;
                    *(undefined1 *)(param_11 + uVar20 * 6) = *(undefined1 *)(lVar23 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 1 + uVar20 * 6) =
                         *(undefined1 *)(lVar23 + 1 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 2 + uVar20 * 6) =
                         *(undefined1 *)(lVar23 + 2 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 3 + uVar20 * 6) =
                         *(undefined1 *)(lVar23 + 3 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 4 + uVar20 * 6) =
                         *(undefined1 *)(lVar23 + 4 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 5 + uVar20 * 6) =
                         *(undefined1 *)(lVar23 + 5 + uVar20 * 6);
                  } while (uVar14 < uStack_e8);
                  lVar26 = uVar20 + 2 + uVar14;
                }
                if (lVar26 - 1U < uStack_e0) {
                  lVar26 = lVar26 * 3;
                  lVar19 = lVar26 + -3;
                  *(undefined1 *)(lVar19 + param_11) = *(undefined1 *)(lVar23 + lVar19);
                  *(undefined1 *)(lVar26 + -2 + param_11) = *(undefined1 *)(lVar23 + 1 + lVar19);
                  *(undefined1 *)(lVar26 + -1 + param_11) = *(undefined1 *)(lVar23 + 2 + lVar19);
                }
              }
LAB_1406499ba:
              if (iVar24 == 1) {
                if (0 < lStack_d8) {
                  if ((longlong)uStack_140 / 3 < 7) {
                    lVar23 = 1;
                    uVar14 = 0;
                    if (uStack_128 != 0) {
                      do {
                        uVar20 = uVar14;
                        *(undefined1 *)(lStack_130 + -3 + uVar20 * 6) =
                             *(undefined1 *)(lStack_130 + -6);
                        uVar14 = uVar20 + 1;
                        *(undefined1 *)(lStack_130 + -2 + uVar20 * 6) =
                             *(undefined1 *)(lStack_130 + -5);
                        *(undefined1 *)(lStack_130 + -1 + uVar20 * 6) =
                             *(undefined1 *)(lStack_130 + -4);
                        *(undefined1 *)(lStack_130 + uVar20 * 6) = *(undefined1 *)(lStack_130 + -6);
                        *(undefined1 *)(lStack_130 + 1 + uVar20 * 6) =
                             *(undefined1 *)(lStack_130 + -5);
                        *(undefined1 *)(lStack_130 + 2 + uVar20 * 6) =
                             *(undefined1 *)(lStack_130 + -4);
                      } while (uVar14 < uStack_128);
                      lVar23 = uVar20 + 2 + uVar14;
                    }
                    if (lVar23 - 1U < uStack_120) {
                      lVar23 = lVar23 * 3;
                      *(undefined1 *)(lVar23 + -6 + lStack_130) = *(undefined1 *)(lStack_130 + -6);
                      *(undefined1 *)(lVar23 + -5 + lStack_130) = *(undefined1 *)(lStack_130 + -5);
                      *(undefined1 *)(lVar23 + -4 + lStack_130) = *(undefined1 *)(lStack_130 + -4);
                    }
                  }
                  else {
                    lVar23 = 1;
                    lVar26 = 0;
                    uVar3 = *(undefined1 *)(lStack_130 + -6);
                    uVar4 = *(undefined1 *)(lStack_130 + -5);
                    uVar5 = *(undefined1 *)(lStack_130 + -4);
                    uVar14 = 0;
                    if (uStack_128 != 0) {
                      do {
                        uVar20 = uVar14;
                        uVar14 = uVar20 + 1;
                        *(undefined1 *)(lVar26 + -3 + lStack_130) = uVar3;
                        *(undefined1 *)(lVar26 + -2 + lStack_130) = uVar4;
                        *(undefined1 *)(lVar26 + -1 + lStack_130) = uVar5;
                        *(undefined1 *)(lVar26 + lStack_130) = uVar3;
                        *(undefined1 *)(lVar26 + 1 + lStack_130) = uVar4;
                        *(undefined1 *)(lVar26 + 2 + lStack_130) = uVar5;
                        lVar26 = lVar26 + 6;
                      } while (uVar14 < uStack_128);
                      lVar23 = uVar20 + 2 + uVar14;
                    }
                    if (lVar23 - 1U < uStack_120) {
                      lVar23 = lVar23 * 3;
                      *(undefined1 *)(lVar23 + -6 + lStack_130) = uVar3;
                      *(undefined1 *)(lVar23 + -5 + lStack_130) = uVar4;
                      *(undefined1 *)(lVar23 + -4 + lStack_130) = uVar5;
                    }
                  }
                }
              }
              else if (iVar24 == 3) {
                if (0 < lStack_d8) {
                  lVar23 = 1;
                  lVar26 = 0;
                  lVar19 = 0;
                  uVar14 = 0;
                  if (uStack_128 != 0) {
                    do {
                      uVar20 = uVar14;
                      uVar14 = uVar20 + 1;
                      *(undefined1 *)(lVar26 + -3 + lStack_130) =
                           *(undefined1 *)(lVar19 + -9 + lStack_130);
                      *(undefined1 *)(lVar26 + 1 + lStack_130) =
                           *(undefined1 *)(lVar19 + -0xb + lStack_130);
                      lVar23 = lVar19 + -8;
                      uVar3 = *(undefined1 *)(lVar19 + -7 + lStack_130);
                      uVar4 = *(undefined1 *)(lVar19 + -0xc + lStack_130);
                      uVar5 = *(undefined1 *)(lVar19 + -10 + lStack_130);
                      lVar19 = lVar19 + -6;
                      *(undefined1 *)(lVar26 + -2 + lStack_130) =
                           *(undefined1 *)(lVar23 + lStack_130);
                      *(undefined1 *)(lVar26 + -1 + lStack_130) = uVar3;
                      *(undefined1 *)(lVar26 + lStack_130) = uVar4;
                      *(undefined1 *)(lVar26 + 2 + lStack_130) = uVar5;
                      lVar26 = lVar26 + 6;
                    } while (uVar14 < uStack_128);
                    lVar23 = uVar20 + 2 + uVar14;
                  }
                  if (lVar23 - 1U < uStack_120) {
                    lVar23 = lVar23 * 3;
                    lVar26 = -(lVar23 + -3);
                    uVar3 = *(undefined1 *)(lVar26 + -8 + lStack_130);
                    uVar4 = *(undefined1 *)(lVar26 + -7 + lStack_130);
                    *(undefined1 *)(lVar23 + -6 + lStack_130) =
                         *(undefined1 *)(lVar26 + -9 + lStack_130);
                    *(undefined1 *)(lVar23 + -5 + lStack_130) = uVar3;
                    *(undefined1 *)(lVar23 + -4 + lStack_130) = uVar4;
                  }
                }
              }
              else if ((iVar24 == 6) && (0 < lStack_d8)) {
                if (((longlong)uStack_140 / 3 < 7) ||
                   ((lVar23 = (param_11 + -3 + lStack_148) - (longlong)pbVar12, lVar23 < 3 &&
                    (-lVar23 < ((longlong)uStack_140 / 3) * 3)))) {
                  lVar23 = 1;
                  uVar14 = 0;
                  if (uStack_128 != 0) {
                    do {
                      uVar20 = uVar14;
                      *(byte *)(lStack_130 + -3 + uVar20 * 6) = *pbVar12;
                      uVar14 = uVar20 + 1;
                      *(byte *)(lStack_130 + -2 + uVar20 * 6) = pbVar12[1];
                      *(byte *)(lStack_130 + -1 + uVar20 * 6) = pbVar12[2];
                      *(byte *)(lStack_130 + uVar20 * 6) = *pbVar12;
                      *(byte *)(lStack_130 + 1 + uVar20 * 6) = pbVar12[1];
                      *(byte *)(lStack_130 + 2 + uVar20 * 6) = pbVar12[2];
                    } while (uVar14 < uStack_128);
                    lVar23 = uVar20 + 2 + uVar14;
                  }
                  if (lVar23 - 1U < uStack_120) {
                    lVar23 = lVar23 * 3;
                    *(byte *)(lVar23 + -6 + lStack_130) = *pbVar12;
                    *(byte *)(lVar23 + -5 + lStack_130) = pbVar12[1];
                    *(byte *)(lVar23 + -4 + lStack_130) = pbVar12[2];
                  }
                }
                else {
                  lVar23 = 1;
                  bVar10 = *pbVar12;
                  bVar22 = pbVar12[1];
                  bVar15 = pbVar12[2];
                  lVar26 = 0;
                  uVar14 = 0;
                  if (uStack_128 != 0) {
                    do {
                      uVar20 = uVar14;
                      uVar14 = uVar20 + 1;
                      *(byte *)(lVar26 + -3 + lStack_130) = bVar10;
                      *(byte *)(lVar26 + -2 + lStack_130) = bVar22;
                      *(byte *)(lVar26 + -1 + lStack_130) = bVar15;
                      *(byte *)(lVar26 + lStack_130) = bVar10;
                      *(byte *)(lVar26 + 1 + lStack_130) = bVar22;
                      *(byte *)(lVar26 + 2 + lStack_130) = bVar15;
                      lVar26 = lVar26 + 6;
                    } while (uVar14 < uStack_128);
                    lVar23 = uVar20 + 2 + uVar14;
                  }
                  if (lVar23 - 1U < uStack_120) {
                    lVar23 = lVar23 * 3;
                    *(byte *)(lVar23 + -6 + lStack_130) = bVar10;
                    *(byte *)(lVar23 + -5 + lStack_130) = bVar22;
                    *(byte *)(lVar23 + -4 + lStack_130) = bVar15;
                  }
                }
              }
              plVar8 = (longlong *)CONCAT44(uVar32,param_10);
              plVar9 = (longlong *)(*pcStack_c0)(puStack_b0,uVar17,uStack_58,param_9,plVar8);
              auVar28._8_8_ = extraout_XMM0_Qb_00;
              auVar28._0_8_ = extraout_XMM0_Qa;
            }
            else {
              plVar8 = (longlong *)CONCAT44(uVar32,param_10);
              plVar9 = (longlong *)(*pcStack_c0)(lVar23,uVar17,lVar26,param_9,plVar8);
              auVar28._8_8_ = extraout_XMM0_Qb_02;
              auVar28._0_8_ = extraout_XMM0_Qa_01;
            }
          }
        }
        iVar25 = (int)uVar13;
        uVar13 = uVar13 + 1;
        uVar14 = (longlong)iVar25 + 1;
        if (uStack_58 <= uVar13) {
          return plVar9;
        }
      } while( true );
    }
  }
  uVar7 = param_7 & 0xf;
  if (uVar7 == 6) {
    plVar8 = (longlong *)(ulonglong)*param_8;
    uVar13 = 0;
    lVar23 = 0;
    fVar30 = (float)*param_8;
    fVar29 = (float)param_8[1];
    fVar27 = (float)param_8[2];
    if (0 < iVar24) {
      lVar26 = *param_5;
      uVar14 = lVar26 * 3 + 2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      plVar8 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      do {
        if (0 < lVar26 * 3) {
          lVar19 = 1;
          lVar21 = 0;
          if (uVar14 / 6 != 0) {
            lVar19 = param_3 + lVar23;
            uVar17 = 0;
            do {
              uVar20 = uVar17;
              uVar17 = uVar20 + 1;
              *(float *)(lVar21 + lVar19) = fVar30;
              *(float *)(lVar21 + 4 + lVar19) = fVar29;
              *(float *)(lVar21 + 8 + lVar19) = fVar27;
              *(float *)(lVar21 + 0xc + lVar19) = fVar30;
              *(float *)(lVar21 + 0x10 + lVar19) = fVar29;
              *(float *)(lVar21 + 0x14 + lVar19) = fVar27;
              lVar21 = lVar21 + 0x18;
            } while (uVar17 < uVar14 / 6);
            lVar19 = uVar20 + 2 + uVar17;
          }
          plVar8 = (longlong *)(lVar19 - 1);
          if (plVar8 < (longlong *)(uVar14 / 3)) {
            plVar8 = (longlong *)(lVar19 * 3 - 3);
            lVar19 = param_3 + (longlong)plVar8 * 4;
            *(float *)(lVar19 + lVar23) = fVar30;
            *(float *)(lVar19 + 4 + lVar23) = fVar29;
            *(float *)(lVar19 + 8 + lVar23) = fVar27;
          }
        }
        uVar13 = uVar13 + 1;
        lVar23 = lVar23 + param_4;
      } while (uVar13 < (ulonglong)(longlong)iVar24);
    }
    return plVar8;
  }
  if (uVar7 == 1) {
    plVar8 = (longlong *)0x0;
    if (0 < iVar24) {
      uVar13 = *param_5 * 3;
      lVar23 = param_4 * iVar24 + param_3;
      do {
        if (0 < (longlong)uVar13) {
          if ((longlong)uVar13 < 4) {
LAB_140648f10:
            uVar20 = 0;
          }
          else {
            uVar17 = param_4 * (longlong)plVar8 + param_3;
            uVar14 = uVar17 & 0xf;
            if (uVar14 != 0) {
              if ((uVar17 & 3) != 0) goto LAB_140648f10;
              uVar14 = 0x10 - uVar14 >> 2;
            }
            if ((longlong)uVar13 < (longlong)(uVar14 + 4)) goto LAB_140648f10;
            uVar11 = 0;
            uVar20 = uVar13 - (uVar13 - uVar14 & 3);
            if (uVar14 != 0) {
              do {
                *(undefined4 *)(uVar17 + uVar11 * 4) = *(undefined4 *)(lVar23 + uVar11 * 4);
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar14);
            }
            if ((lVar23 + uVar14 * 4 & 0xf) == 0) {
              do {
                *(undefined1 (*) [16])(uVar17 + uVar14 * 4) =
                     *(undefined1 (*) [16])(lVar23 + uVar14 * 4);
                uVar14 = uVar14 + 4;
              } while (uVar14 < uVar20);
            }
            else {
              do {
                *(undefined1 (*) [16])(uVar17 + uVar14 * 4) =
                     *(undefined1 (*) [16])(lVar23 + uVar14 * 4);
                uVar14 = uVar14 + 4;
              } while (uVar14 < uVar20);
            }
          }
          if (uVar20 < uVar13) {
            do {
              *(undefined4 *)(param_4 * (longlong)plVar8 + param_3 + uVar20 * 4) =
                   *(undefined4 *)(lVar23 + uVar20 * 4);
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar13);
          }
        }
        plVar8 = (longlong *)((longlong)plVar8 + 1);
      } while (plVar8 < (longlong *)(longlong)iVar24);
    }
  }
  else {
    plVar8 = (longlong *)(ulonglong)uVar7;
    if (uVar7 == 3) {
      lStack_148 = *param_5;
      uStack_140 = param_5[1];
      plVar8 = (longlong *)
               FUN_1405fcc80(param_1,lStack_50,(longlong)iVar24,param_3,&lStack_148,param_6,param_7,
                             param_8,param_9,param_10,param_11);
      lVar23 = 1;
      uVar13 = 0;
      if (1 < iVar24) {
        lVar26 = ((longlong)param_10 + -1) * param_4 + param_3;
        plVar9 = (longlong *)(*param_5 * 3);
        do {
          if (0 < (longlong)plVar9) {
            if ((longlong)plVar9 < 4) {
LAB_140648da5:
              param_5 = (longlong *)0x0;
            }
            else {
              uVar14 = param_3 + param_4 * lVar23;
              plVar8 = (longlong *)(uVar14 & 0xf);
              if (plVar8 != (longlong *)0x0) {
                if ((uVar14 & 3) != 0) goto LAB_140648da5;
                plVar8 = (longlong *)(0x10U - (longlong)plVar8 >> 2);
              }
              if ((longlong)plVar9 < (longlong)plVar8 + 4) goto LAB_140648da5;
              lVar19 = lVar26 - param_4 * lVar23;
              plVar16 = (longlong *)0x0;
              param_5 = (longlong *)((longlong)plVar9 - ((longlong)plVar9 - (longlong)plVar8 & 3U));
              if (plVar8 != (longlong *)0x0) {
                do {
                  *(undefined4 *)(uVar14 + (longlong)plVar16 * 4) =
                       *(undefined4 *)(lVar19 + (longlong)plVar16 * 4);
                  plVar16 = (longlong *)((longlong)plVar16 + 1);
                } while (plVar16 < plVar8);
              }
              if ((lVar19 + (longlong)plVar8 * 4 & 0xfU) == 0) {
                do {
                  puVar1 = (undefined8 *)(lVar19 + (longlong)plVar8 * 4);
                  uVar31 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar14 + (longlong)plVar8 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar31;
                  plVar8 = (longlong *)((longlong)plVar8 + 4);
                } while (plVar8 < param_5);
              }
              else {
                do {
                  puVar1 = (undefined8 *)(lVar19 + (longlong)plVar8 * 4);
                  uVar31 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar14 + (longlong)plVar8 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar31;
                  plVar8 = (longlong *)((longlong)plVar8 + 4);
                } while (plVar8 < param_5);
              }
            }
            if (param_5 < plVar9) {
              do {
                *(undefined4 *)(param_3 + lVar23 * param_4 + (longlong)param_5 * 4) =
                     *(undefined4 *)((lVar26 - lVar23 * param_4) + (longlong)param_5 * 4);
                param_5 = (longlong *)((longlong)param_5 + 1);
              } while (param_5 < plVar9);
            }
          }
          lVar23 = uVar13 + 2;
          uVar13 = uVar13 + 1;
          plVar8 = param_5;
        } while (uVar13 < (ulonglong)(longlong)(iVar24 + -1));
      }
    }
  }
  return plVar8;
}

