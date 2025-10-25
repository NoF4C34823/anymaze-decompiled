
longlong *
FUN_1407ae080(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             uint param_6,uint param_7,uint *param_8,undefined8 param_9,int param_10,
             longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  byte bVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  longlong lVar26;
  uint *puVar27;
  float fVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar30;
  float fVar31;
  undefined4 uVar33;
  undefined8 uVar32;
  longlong lStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  uint auStack_108 [2];
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  code *pcStack_b8;
  longlong lStack_b0;
  uint uStack_a8;
  undefined1 *puStack_a0;
  uint uStack_98;
  longlong lStack_90;
  uint uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  
  lVar12 = 0;
  iVar15 = param_10 >> 1;
  lStack_50 = param_2;
  if (iVar15 < 1) {
    if ((param_7 & 0x10) != 0) {
      return (longlong *)(ulonglong)param_6;
    }
  }
  else {
    uStack_58 = (ulonglong)iVar15;
    lStack_148 = CONCAT44(lStack_148._4_4_,iVar15);
    lVar26 = param_4 * uStack_58 + param_3;
    lStack_80 = param_3;
    lStack_68 = param_4;
    lStack_60 = param_1;
    do {
      plVar8 = &lStack_78;
      lStack_78 = *param_5;
      lStack_70 = param_5[1];
      auVar29._0_8_ =
           FUN_140760500(lStack_60,lStack_50,lVar12,lVar26,plVar8,param_6,param_7,param_8,param_9,
                         param_10,param_11);
      auVar29._8_8_ = extraout_XMM0_Qb;
      lVar12 = lVar12 + 1;
      lVar26 = lVar26 + lStack_68;
    } while (lVar12 < (longlong)uStack_58);
    param_1 = lStack_60;
    param_3 = lStack_80;
    param_4 = lStack_68;
    iVar15 = (int)lStack_148;
    if ((param_7 & 0x10) != 0) {
      pcStack_b8 = (code *)(&PTR_FUN_14308c2a0)[(int)param_6];
      uVar10 = param_7 & 0xf;
      lStack_148 = (longlong)param_10 * 3;
      lStack_110 = 0;
      lStack_90 = (longlong)param_10 + -1;
      uStack_138 = lStack_148 - 1;
      uStack_c8 = 0;
      lStack_128 = param_11 + lStack_148;
      uStack_c0 = lStack_148 - 3;
      uStack_88 = param_7 & 0xf0;
      lStack_d0 = uStack_58 * 3;
      lStack_b0 = -uStack_58;
      uStack_140 = lStack_d0 + 2;
      puStack_a0 = (undefined1 *)(param_11 + lStack_d0);
      uStack_d8 = uStack_138 / 3;
      uStack_98 = param_7 & 0x80;
      lStack_120 = uStack_58 * -3;
      uStack_f8 = (ulonglong)(param_11 + lStack_d0) & 0xf;
      lStack_60 = lStack_60 - lStack_50 * uStack_58;
      uStack_118 = uStack_140 / 3;
      uStack_a8 = param_7 & 0x40;
      uStack_f0 = (longlong)(param_10 * 3) - 3;
      uVar13 = 0;
      uStack_130 = uStack_140 / 6;
      uStack_e8 = uStack_f0 >> 1;
      uStack_100 = 0x10 - uStack_f8;
      lVar12 = 0;
      uStack_e0 = ((longlong)(param_10 * 3) - 1U) / 6;
      auStack_108[0] = uVar10;
      do {
        auStack_108[0] = auStack_108[0] & 0xff000000;
        lVar26 = lStack_68 * uVar13 + lStack_80;
        lVar19 = lStack_50 * uVar13 + lStack_60;
        uVar33 = (undefined4)((ulonglong)plVar8 >> 0x20);
        if (uStack_88 == 0xf0) {
          plVar8 = (longlong *)CONCAT44(uVar33,param_10);
          plVar9 = (longlong *)(*pcStack_b8)(lVar19,lVar26,*param_5,param_9,plVar8);
          auVar29._8_8_ = extraout_XMM0_Qb_03;
          auVar29._0_8_ = extraout_XMM0_Qa_02;
        }
        else {
          lVar23 = *param_5;
          puVar27 = auStack_108;
          if (uVar10 == 6) {
            puVar27 = param_8;
          }
          if (lVar23 < lStack_90) {
            uVar17 = 0;
            lVar12 = 0;
            lVar24 = -uStack_58;
            if (lStack_b0 < (longlong)(uStack_58 + lVar23)) {
              uStack_c8 = uVar13;
              do {
                lVar21 = lVar24;
                if (lVar24 < 0) {
                  if (param_7 != 0xf0) {
                    if (uVar10 == 6) {
                      if (uStack_a8 == 0) goto LAB_1407af56c;
                    }
                    else {
                      if (uVar10 != 1) goto LAB_1407af4e6;
LAB_1407af632:
                      lVar21 = 0;
                      if (uStack_a8 != 0) {
                        lVar21 = lVar24;
                      }
                    }
                  }
LAB_1407af554:
                  lVar21 = lVar21 * 3;
                  bVar11 = *(byte *)(lVar21 + lVar19);
                  bVar25 = *(byte *)(lVar21 + 1 + lVar19);
                  bVar18 = *(byte *)(lVar21 + 2 + lVar19);
                }
                else {
                  if ((lVar24 < lVar23) || (param_7 == 0xf0)) goto LAB_1407af554;
                  if (uVar10 != 6) {
                    if (uVar10 == 1) {
                      if (lVar24 < 0) goto LAB_1407af632;
                      if (uStack_98 == 0) {
                        lVar21 = lVar23 + -1;
                      }
                    }
                    else {
LAB_1407af4e6:
                      if (uVar10 == 3) {
                        if (lVar23 < 2) {
                          if (lVar24 < 0) {
                            if (uStack_a8 == 0) {
                              lVar21 = -lVar24;
                              if (uStack_98 == 0) {
                                lVar21 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar24) && (uStack_98 == 0)) &&
                                  (lVar21 = -lVar24, uStack_a8 == 0)) {
                            lVar21 = 0;
                          }
                        }
                        else {
                          if (lVar24 < 0) goto LAB_1407af645;
                          if (lVar23 <= lVar24) {
                            while (uStack_98 == 0) {
                              for (lVar21 = (lVar23 + -1) * 2 - lVar21; lVar21 < 0; lVar21 = -lVar21
                                  ) {
LAB_1407af645:
                                if (uStack_a8 != 0) goto LAB_1407af554;
                              }
                              if (lVar21 < lVar23) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1407af554;
                  }
                  if (uStack_98 != 0) goto LAB_1407af554;
LAB_1407af56c:
                  bVar11 = (byte)*puVar27;
                  bVar25 = *(byte *)((longlong)puVar27 + 1);
                  bVar18 = *(byte *)((longlong)puVar27 + 2);
                }
                uVar17 = uVar17 + 1;
                *(byte *)(lVar12 + param_11) = bVar11;
                lVar24 = lVar24 + 1;
                *(byte *)(lVar12 + 1 + param_11) = bVar25;
                *(byte *)(lVar12 + 2 + param_11) = bVar18;
                lVar12 = lVar12 + 3;
                lStack_110 = lVar26;
              } while (uVar17 < lVar23 + uStack_58 * 2);
            }
            plVar8 = (longlong *)CONCAT44(uVar33,param_10);
            plVar9 = (longlong *)(*pcStack_b8)(puStack_a0,lVar26,lVar23,param_9,plVar8);
            auVar29._8_8_ = extraout_XMM0_Qb_01;
            auVar29._0_8_ = extraout_XMM0_Qa_00;
          }
          else {
            if (uStack_a8 == 0) {
              if (0 < (longlong)uStack_c0) {
                if (6 < (longlong)uStack_c0) {
                  lVar24 = lStack_50 * lVar12 + lStack_60;
                  if ((lStack_148 + -3 <= (longlong)puStack_a0 - lVar24) ||
                     (lStack_148 + -3 <= -((longlong)puStack_a0 - lVar24))) {
                    if ((longlong)uStack_c0 < 0x10) {
LAB_1407af605:
                      uVar20 = 0;
                    }
                    else {
                      uVar17 = uStack_f8;
                      if (uStack_f8 != 0) {
                        uVar17 = uStack_100;
                      }
                      if ((longlong)uStack_c0 < (longlong)(uVar17 + 0x10)) goto LAB_1407af605;
                      uVar20 = uStack_c0 - (uStack_c0 - uVar17 & 0xf);
                      uVar22 = 0;
                      if (uVar17 != 0) {
                        do {
                          puStack_a0[uVar22] = *(undefined1 *)(uVar22 + lVar24);
                          uVar22 = uVar22 + 1;
                        } while (uVar22 < uVar17);
                      }
                      if ((lVar24 + uVar17 & 0xf) == 0) {
                        do {
                          uVar32 = ((undefined8 *)(uVar17 + lVar24))[1];
                          *(undefined8 *)(puStack_a0 + uVar17) = *(undefined8 *)(uVar17 + lVar24);
                          *(undefined8 *)((longlong)(puStack_a0 + uVar17) + 8) = uVar32;
                          uVar17 = uVar17 + 0x10;
                        } while (uVar17 < uVar20);
                      }
                      else {
                        do {
                          auVar29 = lddqu(auVar29,*(undefined1 (*) [16])(uVar17 + lVar24));
                          *(undefined1 (*) [16])(puStack_a0 + uVar17) = auVar29;
                          uVar17 = uVar17 + 0x10;
                        } while (uVar17 < uVar20);
                      }
                    }
                    for (; uVar20 < uStack_c0; uVar20 = uVar20 + 1) {
                      puStack_a0[uVar20] = *(undefined1 *)(uVar20 + lVar24);
                    }
                    goto LAB_1407aea8f;
                  }
                }
                lVar24 = 1;
                if (uStack_e8 != 0) {
                  lVar24 = lStack_50 * lVar12 + lStack_60;
                  uVar17 = 0;
                  do {
                    uVar20 = uVar17;
                    puStack_a0[uVar20 * 2] = *(undefined1 *)(lVar24 + uVar20 * 2);
                    puStack_a0[uVar20 * 2 + 1] = *(undefined1 *)(lVar24 + 1 + uVar20 * 2);
                    uVar17 = uVar20 + 1;
                  } while (uVar17 < uStack_e8);
                  lVar24 = uVar20 + 2 + uVar17;
                }
                uVar17 = lVar24 - 1;
                if (uVar17 < uStack_f0) {
                  puStack_a0[uVar17] = *(undefined1 *)(uVar17 + lVar12 * lStack_50 + lStack_60);
                }
              }
LAB_1407aea8f:
              if (uVar10 == 1) {
                if (0 < lStack_d0) {
                  lVar12 = 1;
                  uVar17 = 0;
                  if (uStack_130 != 0) {
                    do {
                      uVar20 = uVar17;
                      uVar17 = uVar20 + 1;
                      *(undefined1 *)(param_11 + uVar20 * 6) = *puStack_a0;
                      uVar3 = puStack_a0[2];
                      *(undefined1 *)(param_11 + 1 + uVar20 * 6) = puStack_a0[1];
                      *(undefined1 *)(param_11 + 2 + uVar20 * 6) = uVar3;
                      *(undefined1 *)(param_11 + 3 + uVar20 * 6) = *puStack_a0;
                      uVar3 = puStack_a0[2];
                      *(undefined1 *)(param_11 + 4 + uVar20 * 6) = puStack_a0[1];
                      *(undefined1 *)(param_11 + 5 + uVar20 * 6) = uVar3;
                    } while (uVar17 < uStack_130);
                    lVar12 = uVar20 + 2 + uVar17;
                  }
                  if (lVar12 - 1U < uStack_118) {
                    lVar12 = lVar12 * 3;
                    *(undefined1 *)(lVar12 + -3 + param_11) = *puStack_a0;
                    uVar3 = puStack_a0[2];
                    *(undefined1 *)(lVar12 + -2 + param_11) = puStack_a0[1];
                    *(undefined1 *)(lVar12 + -1 + param_11) = uVar3;
                  }
                }
              }
              else if (uVar10 == 3) {
                if (0 < lStack_d0) {
                  lVar12 = 1;
                  lVar24 = 0;
                  lVar21 = 0;
                  uVar17 = 0;
                  if (uStack_130 != 0) {
                    do {
                      uVar20 = uVar17;
                      uVar17 = uVar20 + 1;
                      *(undefined1 *)(lVar24 + param_11) = *(undefined1 *)(lVar21 + -3 + lStack_128)
                      ;
                      *(undefined1 *)(lVar24 + 1 + param_11) =
                           *(undefined1 *)(lVar21 + -2 + lStack_128);
                      *(undefined1 *)(lVar24 + 2 + param_11) =
                           *(undefined1 *)(lVar21 + -1 + lStack_128);
                      *(undefined1 *)(lVar24 + 3 + param_11) =
                           *(undefined1 *)(lVar21 + -6 + lStack_128);
                      *(undefined1 *)(lVar24 + 4 + param_11) =
                           *(undefined1 *)(lVar21 + -5 + lStack_128);
                      lVar12 = lVar21 + -4;
                      lVar21 = lVar21 + -6;
                      *(undefined1 *)(lVar24 + 5 + param_11) = *(undefined1 *)(lVar12 + lStack_128);
                      lVar24 = lVar24 + 6;
                    } while (uVar17 < uStack_130);
                    lVar12 = uVar20 + 2 + uVar17;
                  }
                  if (lVar12 - 1U < uStack_118) {
                    lVar12 = lVar12 * 3;
                    lVar24 = -(lVar12 + -3);
                    *(undefined1 *)(lVar12 + -3 + param_11) =
                         *(undefined1 *)(lVar24 + -3 + lStack_128);
                    *(undefined1 *)(lVar12 + -2 + param_11) =
                         *(undefined1 *)(lVar24 + -2 + lStack_128);
                    *(undefined1 *)(lVar12 + -1 + param_11) =
                         *(undefined1 *)(lVar24 + -1 + lStack_128);
                  }
                }
              }
              else if ((uVar10 == 6) && (0 < lStack_d0)) {
                lVar12 = 1;
                uVar17 = 0;
                if (uStack_130 != 0) {
                  do {
                    uVar20 = uVar17;
                    uVar17 = uVar20 + 1;
                    *(byte *)(param_11 + uVar20 * 6) = (byte)*puVar27;
                    *(byte *)(param_11 + 1 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 1);
                    *(byte *)(param_11 + 2 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 2);
                    *(byte *)(param_11 + 3 + uVar20 * 6) = (byte)*puVar27;
                    *(byte *)(param_11 + 4 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 1);
                    *(byte *)(param_11 + 5 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 2);
                  } while (uVar17 < uStack_130);
                  lVar12 = uVar20 + 2 + uVar17;
                }
                if (lVar12 - 1U < uStack_118) {
                  lVar12 = lVar12 * 3;
                  *(byte *)(lVar12 + -3 + param_11) = (byte)*puVar27;
                  *(byte *)(lVar12 + -2 + param_11) = *(byte *)((longlong)puVar27 + 1);
                  *(byte *)(lVar12 + -1 + param_11) = *(byte *)((longlong)puVar27 + 2);
                }
              }
              uVar32 = CONCAT44(uVar33,param_10);
              (*pcStack_b8)(puStack_a0,lVar26,uStack_58,param_9,uVar32);
              uVar33 = (undefined4)((ulonglong)uVar32 >> 0x20);
              lVar19 = lVar19 + lStack_d0;
              lVar23 = lVar23 - uStack_58;
              lVar26 = lVar26 + lStack_d0 * 4;
            }
            if (uStack_98 == 0) {
              if ((longlong)uStack_58 < lVar23) {
                lVar23 = lVar23 - uStack_58;
                uVar32 = CONCAT44(uVar33,param_10);
                (*pcStack_b8)(lVar19,lVar26,lVar23,param_9,uVar32);
                uVar33 = (undefined4)((ulonglong)uVar32 >> 0x20);
                lVar19 = lVar19 + lVar23 * 3;
                lVar26 = lVar26 + lVar23 * 0xc;
              }
              if (0 < (longlong)uStack_c0) {
                lVar19 = lVar19 + lStack_120;
                lVar12 = ((longlong)uStack_138 / 3) * 3;
                if ((lVar12 <= param_11 - lVar19) || (lVar12 + -2 <= -(param_11 - lVar19))) {
                  lVar23 = (param_11 + 1) - lVar19;
                  if (((lVar12 <= lVar23) || (lVar12 + -1 <= -lVar23)) &&
                     ((lVar23 = (param_11 + 1) - param_11, lVar12 + -2 <= lVar23 ||
                      (lVar12 + -1 <= -lVar23)))) {
                    lVar12 = 1;
                    uVar17 = 0;
                    if (uStack_e0 != 0) {
                      do {
                        uVar20 = uVar17;
                        uVar17 = uVar20 + 1;
                        *(undefined1 *)(param_11 + uVar20 * 6) =
                             *(undefined1 *)(lVar19 + uVar20 * 6);
                        *(undefined1 *)(param_11 + 3 + uVar20 * 6) =
                             *(undefined1 *)(lVar19 + 3 + uVar20 * 6);
                      } while (uVar17 < uStack_e0);
                      lVar12 = uVar20 + 2 + uVar17;
                    }
                    if (lVar12 - 1U < uStack_d8) {
                      lVar12 = lVar12 * 3 + -3;
                      *(undefined1 *)(lVar12 + param_11) = *(undefined1 *)(lVar19 + lVar12);
                    }
                    lVar12 = 1;
                    uVar17 = 0;
                    if (uStack_e0 != 0) {
                      do {
                        uVar20 = uVar17;
                        uVar17 = uVar20 + 1;
                        uVar3 = *(undefined1 *)(lVar19 + 2 + uVar20 * 6);
                        uVar4 = *(undefined1 *)(lVar19 + 4 + uVar20 * 6);
                        uVar5 = *(undefined1 *)(lVar19 + 5 + uVar20 * 6);
                        *(undefined1 *)(param_11 + 1 + uVar20 * 6) =
                             *(undefined1 *)(lVar19 + 1 + uVar20 * 6);
                        *(undefined1 *)(param_11 + 2 + uVar20 * 6) = uVar3;
                        *(undefined1 *)(param_11 + 4 + uVar20 * 6) = uVar4;
                        *(undefined1 *)(param_11 + 5 + uVar20 * 6) = uVar5;
                      } while (uVar17 < uStack_e0);
                      lVar12 = uVar20 + 2 + uVar17;
                    }
                    if (lVar12 - 1U < uStack_d8) {
                      lVar12 = lVar12 * 3;
                      uVar3 = *(undefined1 *)(lVar19 + 2 + lVar12 + -3);
                      *(undefined1 *)(lVar12 + -2 + param_11) =
                           *(undefined1 *)(lVar19 + 1 + lVar12 + -3);
                      *(undefined1 *)(lVar12 + -1 + param_11) = uVar3;
                    }
                    goto LAB_1407aefbc;
                  }
                }
                lVar12 = 1;
                uVar17 = 0;
                if (uStack_e0 != 0) {
                  do {
                    uVar20 = uVar17;
                    uVar17 = uVar20 + 1;
                    *(undefined1 *)(param_11 + uVar20 * 6) = *(undefined1 *)(lVar19 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 1 + uVar20 * 6) =
                         *(undefined1 *)(lVar19 + 1 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 2 + uVar20 * 6) =
                         *(undefined1 *)(lVar19 + 2 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 3 + uVar20 * 6) =
                         *(undefined1 *)(lVar19 + 3 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 4 + uVar20 * 6) =
                         *(undefined1 *)(lVar19 + 4 + uVar20 * 6);
                    *(undefined1 *)(param_11 + 5 + uVar20 * 6) =
                         *(undefined1 *)(lVar19 + 5 + uVar20 * 6);
                  } while (uVar17 < uStack_e0);
                  lVar12 = uVar20 + 2 + uVar17;
                }
                if (lVar12 - 1U < uStack_d8) {
                  lVar12 = lVar12 * 3;
                  lVar23 = lVar12 + -3;
                  *(undefined1 *)(lVar23 + param_11) = *(undefined1 *)(lVar19 + lVar23);
                  *(undefined1 *)(lVar12 + -2 + param_11) = *(undefined1 *)(lVar19 + 1 + lVar23);
                  *(undefined1 *)(lVar12 + -1 + param_11) = *(undefined1 *)(lVar19 + 2 + lVar23);
                }
              }
LAB_1407aefbc:
              if (uVar10 == 1) {
                if (0 < lStack_d0) {
                  if ((longlong)uStack_140 / 3 < 7) {
                    lVar12 = 1;
                    uVar17 = 0;
                    if (uStack_130 != 0) {
                      do {
                        uVar20 = uVar17;
                        uVar17 = uVar20 + 1;
                        *(undefined1 *)(lStack_128 + -3 + uVar20 * 6) =
                             *(undefined1 *)(lStack_128 + -6);
                        *(undefined1 *)(lStack_128 + -2 + uVar20 * 6) =
                             *(undefined1 *)(lStack_128 + -5);
                        *(undefined1 *)(lStack_128 + -1 + uVar20 * 6) =
                             *(undefined1 *)(lStack_128 + -4);
                        *(undefined1 *)(lStack_128 + uVar20 * 6) = *(undefined1 *)(lStack_128 + -6);
                        *(undefined1 *)(lStack_128 + 1 + uVar20 * 6) =
                             *(undefined1 *)(lStack_128 + -5);
                        *(undefined1 *)(lStack_128 + 2 + uVar20 * 6) =
                             *(undefined1 *)(lStack_128 + -4);
                      } while (uVar17 < uStack_130);
                      lVar12 = uVar20 + 2 + uVar17;
                    }
                    if (lVar12 - 1U < uStack_118) {
                      lVar12 = lVar12 * 3;
                      *(undefined1 *)(lVar12 + -6 + lStack_128) = *(undefined1 *)(lStack_128 + -6);
                      *(undefined1 *)(lVar12 + -5 + lStack_128) = *(undefined1 *)(lStack_128 + -5);
                      *(undefined1 *)(lVar12 + -4 + lStack_128) = *(undefined1 *)(lStack_128 + -4);
                    }
                  }
                  else {
                    lVar12 = 1;
                    lVar19 = 0;
                    uVar3 = *(undefined1 *)(lStack_128 + -6);
                    uVar4 = *(undefined1 *)(lStack_128 + -5);
                    uVar5 = *(undefined1 *)(lStack_128 + -4);
                    uVar17 = 0;
                    if (uStack_130 != 0) {
                      do {
                        uVar20 = uVar17;
                        uVar17 = uVar20 + 1;
                        *(undefined1 *)(lVar19 + -3 + lStack_128) = uVar3;
                        *(undefined1 *)(lVar19 + -2 + lStack_128) = uVar4;
                        *(undefined1 *)(lVar19 + -1 + lStack_128) = uVar5;
                        *(undefined1 *)(lVar19 + lStack_128) = uVar3;
                        *(undefined1 *)(lVar19 + 1 + lStack_128) = uVar4;
                        *(undefined1 *)(lVar19 + 2 + lStack_128) = uVar5;
                        lVar19 = lVar19 + 6;
                      } while (uVar17 < uStack_130);
                      lVar12 = uVar20 + 2 + uVar17;
                    }
                    if (lVar12 - 1U < uStack_118) {
                      lVar12 = lVar12 * 3;
                      *(undefined1 *)(lVar12 + -6 + lStack_128) = uVar3;
                      *(undefined1 *)(lVar12 + -5 + lStack_128) = uVar4;
                      *(undefined1 *)(lVar12 + -4 + lStack_128) = uVar5;
                    }
                  }
                }
              }
              else if (uVar10 == 3) {
                if (0 < lStack_d0) {
                  lVar12 = 1;
                  lVar19 = 0;
                  lVar23 = 0;
                  uVar17 = 0;
                  if (uStack_130 != 0) {
                    do {
                      uVar20 = uVar17;
                      uVar17 = uVar20 + 1;
                      uVar3 = *(undefined1 *)(lVar23 + -8 + lStack_128);
                      *(undefined1 *)(lVar19 + -3 + lStack_128) =
                           *(undefined1 *)(lVar23 + -9 + lStack_128);
                      uVar4 = *(undefined1 *)(lVar23 + -7 + lStack_128);
                      uVar5 = *(undefined1 *)(lVar23 + -0xc + lStack_128);
                      *(undefined1 *)(lVar19 + 1 + lStack_128) =
                           *(undefined1 *)(lVar23 + -0xb + lStack_128);
                      uVar6 = *(undefined1 *)(lVar23 + -10 + lStack_128);
                      lVar23 = lVar23 + -6;
                      *(undefined1 *)(lVar19 + -2 + lStack_128) = uVar3;
                      *(undefined1 *)(lVar19 + -1 + lStack_128) = uVar4;
                      *(undefined1 *)(lVar19 + lStack_128) = uVar5;
                      *(undefined1 *)(lVar19 + 2 + lStack_128) = uVar6;
                      lVar19 = lVar19 + 6;
                    } while (uVar17 < uStack_130);
                    lVar12 = uVar20 + 2 + uVar17;
                  }
                  if (lVar12 - 1U < uStack_118) {
                    lVar12 = lVar12 * 3;
                    lVar19 = -(lVar12 + -3);
                    uVar3 = *(undefined1 *)(lVar19 + -8 + lStack_128);
                    uVar4 = *(undefined1 *)(lVar19 + -7 + lStack_128);
                    *(undefined1 *)(lVar12 + -6 + lStack_128) =
                         *(undefined1 *)(lVar19 + -9 + lStack_128);
                    *(undefined1 *)(lVar12 + -5 + lStack_128) = uVar3;
                    *(undefined1 *)(lVar12 + -4 + lStack_128) = uVar4;
                  }
                }
              }
              else if ((uVar10 == 6) && (0 < lStack_d0)) {
                if (((longlong)uStack_140 / 3 < 7) ||
                   ((lVar12 = (param_11 + -3 + lStack_148) - (longlong)puVar27, lVar12 < 3 &&
                    (-lVar12 < ((longlong)uStack_140 / 3) * 3)))) {
                  lVar12 = 1;
                  uVar17 = 0;
                  if (uStack_130 != 0) {
                    do {
                      uVar20 = uVar17;
                      uVar17 = uVar20 + 1;
                      *(byte *)(lStack_128 + -3 + uVar20 * 6) = (byte)*puVar27;
                      *(byte *)(lStack_128 + -2 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 1);
                      *(byte *)(lStack_128 + -1 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 2);
                      *(byte *)(lStack_128 + uVar20 * 6) = (byte)*puVar27;
                      *(byte *)(lStack_128 + 1 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 1);
                      *(byte *)(lStack_128 + 2 + uVar20 * 6) = *(byte *)((longlong)puVar27 + 2);
                    } while (uVar17 < uStack_130);
                    lVar12 = uVar20 + 2 + uVar17;
                  }
                  if (lVar12 - 1U < uStack_118) {
                    lVar12 = lVar12 * 3;
                    *(byte *)(lVar12 + -6 + lStack_128) = (byte)*puVar27;
                    *(byte *)(lVar12 + -5 + lStack_128) = *(byte *)((longlong)puVar27 + 1);
                    *(byte *)(lVar12 + -4 + lStack_128) = *(byte *)((longlong)puVar27 + 2);
                  }
                }
                else {
                  lVar12 = 1;
                  bVar11 = (byte)*puVar27;
                  bVar25 = *(byte *)((longlong)puVar27 + 1);
                  lVar19 = 0;
                  bVar18 = *(byte *)((longlong)puVar27 + 2);
                  uVar17 = 0;
                  if (uStack_130 != 0) {
                    do {
                      uVar20 = uVar17;
                      uVar17 = uVar20 + 1;
                      *(byte *)(lVar19 + -3 + lStack_128) = bVar11;
                      *(byte *)(lVar19 + -2 + lStack_128) = bVar25;
                      *(byte *)(lVar19 + -1 + lStack_128) = bVar18;
                      *(byte *)(lVar19 + lStack_128) = bVar11;
                      *(byte *)(lVar19 + 1 + lStack_128) = bVar25;
                      *(byte *)(lVar19 + 2 + lStack_128) = bVar18;
                      lVar19 = lVar19 + 6;
                    } while (uVar17 < uStack_130);
                    lVar12 = uVar20 + 2 + uVar17;
                  }
                  if (lVar12 - 1U < uStack_118) {
                    lVar12 = lVar12 * 3;
                    *(byte *)(lVar12 + -6 + lStack_128) = bVar11;
                    *(byte *)(lVar12 + -5 + lStack_128) = bVar25;
                    *(byte *)(lVar12 + -4 + lStack_128) = bVar18;
                  }
                }
              }
              plVar8 = (longlong *)CONCAT44(uVar33,param_10);
              plVar9 = (longlong *)(*pcStack_b8)(puStack_a0,lVar26,uStack_58,param_9,plVar8);
              auVar29._8_8_ = extraout_XMM0_Qb_00;
              auVar29._0_8_ = extraout_XMM0_Qa;
            }
            else {
              plVar8 = (longlong *)CONCAT44(uVar33,param_10);
              plVar9 = (longlong *)(*pcStack_b8)(lVar19,lVar26,lVar23,param_9,plVar8);
              auVar29._8_8_ = extraout_XMM0_Qb_02;
              auVar29._0_8_ = extraout_XMM0_Qa_01;
            }
          }
        }
        iVar15 = (int)uVar13;
        uVar13 = uVar13 + 1;
        lVar12 = (longlong)iVar15 + 1;
        if (uStack_58 <= uVar13) {
          return plVar9;
        }
      } while( true );
    }
  }
  uVar10 = param_7 & 0xf;
  if (uVar10 == 6) {
    plVar8 = (longlong *)(ulonglong)(byte)*param_8;
    uVar13 = 0;
    lVar12 = 0;
    fVar31 = (float)(byte)*param_8;
    fVar30 = (float)*(byte *)((longlong)param_8 + 1);
    fVar28 = (float)*(byte *)((longlong)param_8 + 2);
    if (0 < iVar15) {
      lVar26 = *param_5;
      uVar17 = lVar26 * 3 + 2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      plVar8 = SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      do {
        if (0 < lVar26 * 3) {
          lVar19 = 1;
          lVar23 = 0;
          if (uVar17 / 6 != 0) {
            lVar19 = param_3 + lVar12;
            uVar20 = 0;
            do {
              uVar22 = uVar20;
              uVar20 = uVar22 + 1;
              *(float *)(lVar23 + lVar19) = fVar31;
              *(float *)(lVar23 + 4 + lVar19) = fVar30;
              *(float *)(lVar23 + 8 + lVar19) = fVar28;
              *(float *)(lVar23 + 0xc + lVar19) = fVar31;
              *(float *)(lVar23 + 0x10 + lVar19) = fVar30;
              *(float *)(lVar23 + 0x14 + lVar19) = fVar28;
              lVar23 = lVar23 + 0x18;
            } while (uVar20 < uVar17 / 6);
            lVar19 = uVar22 + 2 + uVar20;
          }
          plVar8 = (longlong *)(lVar19 - 1);
          if (plVar8 < (longlong *)(uVar17 / 3)) {
            plVar8 = (longlong *)(lVar19 * 3 - 3);
            lVar19 = param_3 + (longlong)plVar8 * 4;
            *(float *)(lVar19 + lVar12) = fVar31;
            *(float *)(lVar19 + 4 + lVar12) = fVar30;
            *(float *)(lVar19 + 8 + lVar12) = fVar28;
          }
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + param_4;
      } while (uVar13 < (ulonglong)(longlong)iVar15);
    }
    return plVar8;
  }
  if (uVar10 == 1) {
    plVar8 = (longlong *)0x0;
    if (0 < iVar15) {
      uVar13 = *param_5 * 3;
      lVar12 = param_4 * iVar15 + param_3;
      do {
        if (0 < (longlong)uVar13) {
          if ((longlong)uVar13 < 4) {
LAB_1407ae4f3:
            uVar22 = 0;
          }
          else {
            uVar20 = param_4 * (longlong)plVar8 + param_3;
            uVar17 = uVar20 & 0xf;
            if (uVar17 != 0) {
              if ((uVar20 & 3) != 0) goto LAB_1407ae4f3;
              uVar17 = 0x10 - uVar17 >> 2;
            }
            if ((longlong)uVar13 < (longlong)(uVar17 + 4)) goto LAB_1407ae4f3;
            uVar14 = 0;
            uVar22 = uVar13 - (uVar13 - uVar17 & 3);
            if (uVar17 != 0) {
              do {
                *(undefined4 *)(uVar20 + uVar14 * 4) = *(undefined4 *)(lVar12 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar17);
            }
            if ((lVar12 + uVar17 * 4 & 0xf) == 0) {
              do {
                *(undefined1 (*) [16])(uVar20 + uVar17 * 4) =
                     *(undefined1 (*) [16])(lVar12 + uVar17 * 4);
                uVar17 = uVar17 + 4;
              } while (uVar17 < uVar22);
            }
            else {
              do {
                *(undefined1 (*) [16])(uVar20 + uVar17 * 4) =
                     *(undefined1 (*) [16])(lVar12 + uVar17 * 4);
                uVar17 = uVar17 + 4;
              } while (uVar17 < uVar22);
            }
          }
          if (uVar22 < uVar13) {
            do {
              *(undefined4 *)(param_4 * (longlong)plVar8 + param_3 + uVar22 * 4) =
                   *(undefined4 *)(lVar12 + uVar22 * 4);
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar13);
          }
        }
        plVar8 = (longlong *)((longlong)plVar8 + 1);
      } while (plVar8 < (longlong *)(longlong)iVar15);
    }
  }
  else {
    plVar8 = (longlong *)(ulonglong)param_6;
    if (uVar10 == 3) {
      lStack_148 = *param_5;
      uStack_140 = param_5[1];
      plVar8 = (longlong *)
               FUN_140760500(param_1,lStack_50,(longlong)iVar15,param_3,&lStack_148,param_6,param_7,
                             param_8,param_9,param_10,param_11);
      lVar12 = 1;
      uVar13 = 0;
      if (1 < iVar15) {
        plVar9 = (longlong *)(*param_5 * 3);
        lVar26 = ((longlong)param_10 + -1) * param_4 + param_3;
        do {
          if (0 < (longlong)plVar9) {
            if ((longlong)plVar9 < 4) {
LAB_1407ae387:
              param_5 = (longlong *)0x0;
            }
            else {
              uVar17 = param_3 + param_4 * lVar12;
              plVar8 = (longlong *)(uVar17 & 0xf);
              if (plVar8 != (longlong *)0x0) {
                if ((uVar17 & 3) != 0) goto LAB_1407ae387;
                plVar8 = (longlong *)(0x10U - (longlong)plVar8 >> 2);
              }
              if ((longlong)plVar9 < (longlong)plVar8 + 4) goto LAB_1407ae387;
              lVar19 = lVar26 - param_4 * lVar12;
              plVar16 = (longlong *)0x0;
              param_5 = (longlong *)((longlong)plVar9 - ((longlong)plVar9 - (longlong)plVar8 & 3U));
              if (plVar8 != (longlong *)0x0) {
                do {
                  *(undefined4 *)(uVar17 + (longlong)plVar16 * 4) =
                       *(undefined4 *)(lVar19 + (longlong)plVar16 * 4);
                  plVar16 = (longlong *)((longlong)plVar16 + 1);
                } while (plVar16 < plVar8);
              }
              if ((lVar19 + (longlong)plVar8 * 4 & 0xfU) == 0) {
                do {
                  puVar1 = (undefined8 *)(lVar19 + (longlong)plVar8 * 4);
                  uVar32 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar17 + (longlong)plVar8 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar32;
                  plVar8 = (longlong *)((longlong)plVar8 + 4);
                } while (plVar8 < param_5);
              }
              else {
                do {
                  puVar1 = (undefined8 *)(lVar19 + (longlong)plVar8 * 4);
                  uVar32 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar17 + (longlong)plVar8 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar32;
                  plVar8 = (longlong *)((longlong)plVar8 + 4);
                } while (plVar8 < param_5);
              }
            }
            if (param_5 < plVar9) {
              do {
                *(undefined4 *)(param_3 + lVar12 * param_4 + (longlong)param_5 * 4) =
                     *(undefined4 *)((lVar26 - lVar12 * param_4) + (longlong)param_5 * 4);
                param_5 = (longlong *)((longlong)param_5 + 1);
              } while (param_5 < plVar9);
            }
          }
          lVar12 = uVar13 + 2;
          uVar13 = uVar13 + 1;
          plVar8 = param_5;
        } while (uVar13 < (ulonglong)(longlong)(iVar15 + -1));
      }
    }
  }
  return plVar8;
}

