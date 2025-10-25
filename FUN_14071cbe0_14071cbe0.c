
ulonglong *
FUN_14071cbe0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,ulonglong *param_5
             ,int param_6,uint param_7,uint *param_8,undefined8 param_9,int param_10,
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
  ulonglong *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  byte bVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  uint *puVar28;
  float fVar29;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar31;
  float fVar32;
  undefined4 uVar34;
  undefined8 uVar33;
  ulonglong uStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  uint auStack_118 [2];
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  uint uStack_b0;
  longlong lStack_a8;
  code *pcStack_a0;
  undefined1 *puStack_98;
  uint uStack_90;
  longlong lStack_88;
  uint uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  
  iVar27 = param_10 >> 1;
  lVar24 = 0;
  lStack_48 = param_2;
  if (iVar27 < 1) {
    if ((param_7 & 0x10) != 0) {
      return (ulonglong *)in_RAX;
    }
  }
  else {
    uStack_50 = (ulonglong)iVar27;
    lVar26 = param_4 * uStack_50 + param_3;
    uStack_158 = CONCAT44(uStack_158._4_4_,iVar27);
    lStack_78 = param_3;
    lStack_70 = param_4;
    lStack_58 = param_1;
    do {
      puVar8 = &uStack_68;
      uStack_68 = *param_5;
      uStack_60 = param_5[1];
      auVar30._0_8_ =
           FUN_1406ad440(lStack_58,lStack_48,lVar24,lVar26,puVar8,param_6,param_7,param_8,param_9,
                         param_10,param_11);
      auVar30._8_8_ = extraout_XMM0_Qb;
      lVar24 = lVar24 + 1;
      lVar26 = lVar26 + lStack_70;
    } while (lVar24 < (longlong)uStack_50);
    param_1 = lStack_58;
    param_3 = lStack_78;
    param_4 = lStack_70;
    iVar27 = (int)uStack_158;
    if ((param_7 & 0x10) != 0) {
      lStack_120 = 0;
      uStack_c0 = 0;
      lVar24 = (longlong)param_10;
      lStack_128 = lVar24 * 2;
      uStack_150 = lVar24 * 3;
      uStack_130 = uStack_150 - 1;
      uVar7 = param_7 & 0xf;
      lStack_148 = param_11 + uStack_150;
      uStack_b8 = uStack_150 - 3;
      uStack_80 = param_7 & 0xf0;
      lStack_a8 = -uStack_50;
      lStack_d0 = uStack_50 * 3;
      uStack_158 = lStack_d0 + 2;
      uStack_e0 = uStack_130 / 3;
      uStack_138 = uStack_158 / 3;
      lStack_88 = lVar24 + -1;
      lStack_f0 = uStack_50 * -3;
      uStack_100 = (longlong)(param_10 * 3) - 3;
      uStack_140 = uStack_158 / 6;
      puStack_98 = (undefined1 *)(param_11 + lStack_d0);
      uStack_108 = (ulonglong)(param_11 + lStack_d0) & 0xf;
      pcStack_a0 = (code *)(&PTR_FUN_14308bd80)[param_6];
      uStack_90 = param_7 & 0x80;
      uStack_f8 = uStack_100 >> 1;
      lStack_c8 = uStack_50 * 2;
      uStack_110 = 0x10 - uStack_108;
      lStack_d8 = uStack_50 * 0xc;
      uStack_e8 = ((longlong)(param_10 * 3) - 1U) / 6;
      uStack_b0 = param_7 & 0x40;
      lStack_58 = lStack_58 - lStack_48 * uStack_50;
      uVar13 = 0;
      lVar24 = 0;
      auStack_118[0] = uVar7;
      do {
        lVar26 = lStack_70 * uVar13 + lStack_78;
        lVar21 = lStack_48 * uVar13 + lStack_58;
        auStack_118[0] = auStack_118[0] & 0xff000000;
        uVar34 = (undefined4)((ulonglong)puVar8 >> 0x20);
        if (uStack_80 == 0xf0) {
          puVar8 = (ulonglong *)CONCAT44(uVar34,param_10);
          plVar9 = (longlong *)(*pcStack_a0)(lVar21,lVar26,*param_5,param_9,puVar8);
          auVar30._8_8_ = extraout_XMM0_Qb_03;
          auVar30._0_8_ = extraout_XMM0_Qa_02;
        }
        else {
          puVar28 = auStack_118;
          if (uVar7 == 6) {
            puVar28 = param_8;
          }
          uVar25 = *param_5;
          if ((longlong)*param_5 < lStack_88) {
            uVar17 = 0;
            lVar24 = 0;
            lVar10 = -uStack_50;
            if (lStack_a8 < (longlong)(uStack_50 + uVar25)) {
              uStack_c0 = uVar13;
              do {
                lVar23 = lVar10;
                if (lVar10 < 0) {
                  if (param_7 != 0xf0) {
                    if (uVar7 == 6) {
                      if (uStack_b0 == 0) goto LAB_14071e1ed;
                    }
                    else {
                      if (uVar7 != 1) goto LAB_14071e166;
LAB_14071e2af:
                      lVar23 = 0;
                      if (uStack_b0 != 0) {
                        lVar23 = lVar10;
                      }
                    }
                  }
LAB_14071e1d4:
                  lVar23 = lVar23 * 3;
                  bVar12 = *(byte *)(lVar23 + lVar21);
                  bVar15 = *(byte *)(lVar23 + 1 + lVar21);
                  bVar18 = *(byte *)(lVar23 + 2 + lVar21);
                }
                else {
                  if ((lVar10 < (longlong)uVar25) || (param_7 == 0xf0)) goto LAB_14071e1d4;
                  if (uVar7 != 6) {
                    if (uVar7 == 1) {
                      if (lVar10 < 0) goto LAB_14071e2af;
                      if (uStack_90 == 0) {
                        lVar23 = uVar25 - 1;
                      }
                    }
                    else {
LAB_14071e166:
                      if (uVar7 == 3) {
                        if ((longlong)uVar25 < 2) {
                          if (lVar10 < 0) {
                            if (uStack_b0 == 0) {
                              lVar23 = -lVar10;
                              if (uStack_90 == 0) {
                                lVar23 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar10) && (uStack_90 == 0)) &&
                                  (lVar23 = -lVar10, uStack_b0 == 0)) {
                            lVar23 = 0;
                          }
                        }
                        else {
                          if (lVar10 < 0) goto LAB_14071e2c2;
                          if ((longlong)uVar25 <= lVar10) {
                            while (uStack_90 == 0) {
                              for (lVar23 = (uVar25 - 1) * 2 - lVar23; lVar23 < 0; lVar23 = -lVar23)
                              {
LAB_14071e2c2:
                                if (uStack_b0 != 0) {
                                  goto LAB_14071e1d4;
                                }
                              }
                              if (lVar23 < (longlong)uVar25) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14071e1d4;
                  }
                  if (uStack_90 != 0) goto LAB_14071e1d4;
LAB_14071e1ed:
                  bVar12 = (byte)*puVar28;
                  bVar15 = *(byte *)((longlong)puVar28 + 1);
                  bVar18 = *(byte *)((longlong)puVar28 + 2);
                }
                uVar17 = uVar17 + 1;
                lVar10 = lVar10 + 1;
                *(byte *)(lVar24 + param_11) = bVar12;
                *(byte *)(lVar24 + 1 + param_11) = bVar15;
                *(byte *)(lVar24 + 2 + param_11) = bVar18;
                lVar24 = lVar24 + 3;
                lStack_120 = lVar26;
              } while (uVar17 < lStack_c8 + uVar25);
            }
            puVar8 = (ulonglong *)CONCAT44(uVar34,param_10);
            plVar9 = (longlong *)(*pcStack_a0)(puStack_98,lVar26,uVar25,param_9,puVar8);
            auVar30._8_8_ = extraout_XMM0_Qb_01;
            auVar30._0_8_ = extraout_XMM0_Qa_00;
          }
          else {
            if (uStack_b0 == 0) {
              if (0 < (longlong)uStack_b8) {
                if (6 < (longlong)uStack_b8) {
                  lVar23 = lStack_48 * lVar24 + lStack_58;
                  lVar10 = lStack_128 + -3 + (longlong)param_10;
                  if ((lVar10 <= (longlong)puStack_98 - lVar23) ||
                     (lVar10 <= -((longlong)puStack_98 - lVar23))) {
                    if ((longlong)uStack_b8 < 0x10) {
LAB_14071e283:
                      uVar20 = 0;
                    }
                    else {
                      uVar17 = uStack_108;
                      if (uStack_108 != 0) {
                        uVar17 = uStack_110;
                      }
                      if ((longlong)uStack_b8 < (longlong)(uVar17 + 0x10)) goto LAB_14071e283;
                      uVar22 = 0;
                      uVar20 = uStack_b8 - (uStack_b8 - uVar17 & 0xf);
                      if (uVar17 != 0) {
                        do {
                          puStack_98[uVar22] = *(undefined1 *)(uVar22 + lVar23);
                          uVar22 = uVar22 + 1;
                        } while (uVar22 < uVar17);
                      }
                      if ((lVar23 + uVar17 & 0xf) == 0) {
                        do {
                          uVar33 = ((undefined8 *)(uVar17 + lVar23))[1];
                          *(undefined8 *)(puStack_98 + uVar17) = *(undefined8 *)(uVar17 + lVar23);
                          *(undefined8 *)((longlong)(puStack_98 + uVar17) + 8) = uVar33;
                          uVar17 = uVar17 + 0x10;
                        } while (uVar17 < uVar20);
                      }
                      else {
                        do {
                          auVar30 = lddqu(auVar30,*(undefined1 (*) [16])(uVar17 + lVar23));
                          *(undefined1 (*) [16])(puStack_98 + uVar17) = auVar30;
                          uVar17 = uVar17 + 0x10;
                        } while (uVar17 < uVar20);
                      }
                    }
                    for (; uVar20 < uStack_b8; uVar20 = uVar20 + 1) {
                      puStack_98[uVar20] = *(undefined1 *)(uVar20 + lVar23);
                    }
                    goto LAB_14071d6f2;
                  }
                }
                lVar10 = 1;
                uVar17 = 0;
                if (uStack_f8 != 0) {
                  lVar10 = lStack_48 * lVar24 + lStack_58;
                  do {
                    puStack_98[uVar17 * 2] = *(undefined1 *)(lVar10 + uVar17 * 2);
                    puStack_98[uVar17 * 2 + 1] = *(undefined1 *)(lVar10 + 1 + uVar17 * 2);
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uStack_f8);
                  lVar10 = uVar17 * 2 + 1;
                }
                uVar17 = lVar10 - 1;
                if (uVar17 < uStack_100) {
                  puStack_98[uVar17] = *(undefined1 *)(uVar17 + lVar24 * lStack_48 + lStack_58);
                }
              }
LAB_14071d6f2:
              if (uVar7 == 1) {
                if (0 < lStack_d0) {
                  lVar24 = 1;
                  uVar17 = 0;
                  if (uStack_140 != 0) {
                    do {
                      *(undefined1 *)(param_11 + uVar17 * 6) = *puStack_98;
                      uVar20 = uVar17 + 1;
                      uVar3 = puStack_98[2];
                      *(undefined1 *)(param_11 + 1 + uVar17 * 6) = puStack_98[1];
                      *(undefined1 *)(param_11 + 2 + uVar17 * 6) = uVar3;
                      *(undefined1 *)(param_11 + 3 + uVar17 * 6) = *puStack_98;
                      uVar3 = puStack_98[2];
                      *(undefined1 *)(param_11 + 4 + uVar17 * 6) = puStack_98[1];
                      *(undefined1 *)(param_11 + 5 + uVar17 * 6) = uVar3;
                      uVar17 = uVar20;
                    } while (uVar20 < uStack_140);
                    lVar24 = uVar20 * 2 + 1;
                  }
                  if (lVar24 - 1U < uStack_138) {
                    lVar24 = (lVar24 - 1U) * 3;
                    *(undefined1 *)(lVar24 + param_11) = *puStack_98;
                    uVar3 = puStack_98[2];
                    *(undefined1 *)(lVar24 + 1 + param_11) = puStack_98[1];
                    *(undefined1 *)(lVar24 + 2 + param_11) = uVar3;
                  }
                }
              }
              else if (uVar7 == 3) {
                if (0 < lStack_d0) {
                  uVar17 = 0;
                  lVar23 = 1;
                  lVar10 = 0;
                  lVar24 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar17 = uVar17 + 1;
                      *(undefined1 *)(lVar10 + param_11) = *(undefined1 *)(lVar24 + -3 + lStack_148)
                      ;
                      *(undefined1 *)(lVar10 + 1 + param_11) =
                           *(undefined1 *)(lVar24 + -2 + lStack_148);
                      *(undefined1 *)(lVar10 + 2 + param_11) =
                           *(undefined1 *)(lVar24 + -1 + lStack_148);
                      *(undefined1 *)(lVar10 + 3 + param_11) =
                           *(undefined1 *)(lVar24 + -6 + lStack_148);
                      *(undefined1 *)(lVar10 + 4 + param_11) =
                           *(undefined1 *)(lVar24 + -5 + lStack_148);
                      lVar23 = lVar24 + -4;
                      lVar24 = lVar24 + -6;
                      *(undefined1 *)(lVar10 + 5 + param_11) = *(undefined1 *)(lVar23 + lStack_148);
                      lVar10 = lVar10 + 6;
                    } while (uVar17 < uStack_140);
                    lVar23 = uVar17 * 2 + 1;
                  }
                  uVar17 = lVar23 - 1;
                  if (uVar17 < uStack_138) {
                    lVar24 = uVar17 * 3;
                    lVar10 = uVar17 * -3;
                    *(undefined1 *)(lVar24 + param_11) = *(undefined1 *)(lVar10 + -3 + lStack_148);
                    *(undefined1 *)(lVar24 + 1 + param_11) =
                         *(undefined1 *)(lVar10 + -2 + lStack_148);
                    *(undefined1 *)(lVar24 + 2 + param_11) =
                         *(undefined1 *)(lVar10 + -1 + lStack_148);
                  }
                }
              }
              else if ((uVar7 == 6) && (0 < lStack_d0)) {
                lVar24 = 1;
                uVar17 = 0;
                if (uStack_140 != 0) {
                  do {
                    *(byte *)(param_11 + uVar17 * 6) = (byte)*puVar28;
                    uVar20 = uVar17 + 1;
                    *(byte *)(param_11 + 1 + uVar17 * 6) = *(byte *)((longlong)puVar28 + 1);
                    *(byte *)(param_11 + 2 + uVar17 * 6) = *(byte *)((longlong)puVar28 + 2);
                    *(byte *)(param_11 + 3 + uVar17 * 6) = (byte)*puVar28;
                    *(byte *)(param_11 + 4 + uVar17 * 6) = *(byte *)((longlong)puVar28 + 1);
                    *(byte *)(param_11 + 5 + uVar17 * 6) = *(byte *)((longlong)puVar28 + 2);
                    uVar17 = uVar20;
                  } while (uVar20 < uStack_140);
                  lVar24 = uVar20 * 2 + 1;
                }
                if (lVar24 - 1U < uStack_138) {
                  lVar24 = (lVar24 - 1U) * 3;
                  *(byte *)(lVar24 + param_11) = (byte)*puVar28;
                  *(byte *)(lVar24 + 1 + param_11) = *(byte *)((longlong)puVar28 + 1);
                  *(byte *)(lVar24 + 2 + param_11) = *(byte *)((longlong)puVar28 + 2);
                }
              }
              uVar33 = CONCAT44(uVar34,param_10);
              (*pcStack_a0)(puStack_98,lVar26,uStack_50,param_9,uVar33);
              uVar34 = (undefined4)((ulonglong)uVar33 >> 0x20);
              lVar21 = lVar21 + lStack_d0;
              lVar26 = lVar26 + lStack_d8;
              uVar25 = uVar25 - uStack_50;
            }
            if (uStack_90 == 0) {
              if ((longlong)uStack_50 < (longlong)uVar25) {
                lVar24 = uVar25 - uStack_50;
                uVar33 = CONCAT44(uVar34,param_10);
                (*pcStack_a0)(lVar21,lVar26,lVar24,param_9,uVar33);
                uVar34 = (undefined4)((ulonglong)uVar33 >> 0x20);
                lVar21 = lVar21 + lVar24 * 3;
                lVar26 = lVar26 + lVar24 * 0xc;
              }
              if (0 < (longlong)uStack_b8) {
                lVar24 = lVar21 + lStack_f0;
                lVar10 = ((longlong)uStack_130 / 3) * 3;
                if ((lVar10 <= param_11 - lVar24) || (lVar10 + -2 <= -(param_11 - lVar24))) {
                  lVar23 = (param_11 + 1) - lVar24;
                  if (((lVar10 <= lVar23) || (lVar10 + -1 <= -lVar23)) &&
                     ((lVar23 = (param_11 + 1) - param_11, lVar10 + -2 <= lVar23 ||
                      (lVar10 + -1 <= -lVar23)))) {
                    lVar10 = 1;
                    if (uStack_e8 != 0) {
                      uVar25 = 0;
                      do {
                        uVar17 = uVar25 + 1;
                        *(undefined1 *)(param_11 + uVar25 * 6) =
                             *(undefined1 *)(lVar21 + lStack_f0 + uVar25 * 6);
                        *(undefined1 *)(param_11 + 3 + uVar25 * 6) =
                             *(undefined1 *)(lVar24 + 3 + uVar25 * 6);
                        uVar25 = uVar17;
                      } while (uVar17 < uStack_e8);
                      lVar10 = uVar17 * 2 + 1;
                    }
                    if (lVar10 - 1U < uStack_e0) {
                      lVar10 = (lVar10 - 1U) * 3;
                      *(undefined1 *)(lVar10 + param_11) =
                           *(undefined1 *)(lVar10 + lVar21 + lStack_f0);
                    }
                    lVar21 = 1;
                    uVar25 = 0;
                    if (uStack_e8 != 0) {
                      do {
                        uVar17 = uVar25 + 1;
                        uVar3 = *(undefined1 *)(lVar24 + 2 + uVar25 * 6);
                        uVar4 = *(undefined1 *)(lVar24 + 4 + uVar25 * 6);
                        uVar5 = *(undefined1 *)(lVar24 + 5 + uVar25 * 6);
                        *(undefined1 *)(param_11 + 1 + uVar25 * 6) =
                             *(undefined1 *)(lVar24 + 1 + uVar25 * 6);
                        *(undefined1 *)(param_11 + 2 + uVar25 * 6) = uVar3;
                        *(undefined1 *)(param_11 + 4 + uVar25 * 6) = uVar4;
                        *(undefined1 *)(param_11 + 5 + uVar25 * 6) = uVar5;
                        uVar25 = uVar17;
                      } while (uVar17 < uStack_e8);
                      lVar21 = uVar17 * 2 + 1;
                    }
                    if (lVar21 - 1U < uStack_e0) {
                      lVar21 = (lVar21 - 1U) * 3;
                      uVar3 = *(undefined1 *)(lVar24 + 2 + lVar21);
                      *(undefined1 *)(lVar21 + 1 + param_11) = *(undefined1 *)(lVar24 + 1 + lVar21);
                      *(undefined1 *)(lVar21 + 2 + param_11) = uVar3;
                    }
                    goto LAB_14071dc6a;
                  }
                }
                lVar10 = 1;
                if (uStack_e8 != 0) {
                  uVar25 = 0;
                  do {
                    uVar17 = uVar25 + 1;
                    *(undefined1 *)(param_11 + uVar25 * 6) =
                         *(undefined1 *)(lVar21 + lStack_f0 + uVar25 * 6);
                    *(undefined1 *)(param_11 + 1 + uVar25 * 6) =
                         *(undefined1 *)(lVar24 + 1 + uVar25 * 6);
                    *(undefined1 *)(param_11 + 2 + uVar25 * 6) =
                         *(undefined1 *)(lVar24 + 2 + uVar25 * 6);
                    *(undefined1 *)(param_11 + 3 + uVar25 * 6) =
                         *(undefined1 *)(lVar24 + 3 + uVar25 * 6);
                    *(undefined1 *)(param_11 + 4 + uVar25 * 6) =
                         *(undefined1 *)(lVar24 + 4 + uVar25 * 6);
                    *(undefined1 *)(param_11 + 5 + uVar25 * 6) =
                         *(undefined1 *)(lVar24 + 5 + uVar25 * 6);
                    uVar25 = uVar17;
                  } while (uVar17 < uStack_e8);
                  lVar10 = uVar17 * 2 + 1;
                }
                if (lVar10 - 1U < uStack_e0) {
                  lVar10 = (lVar10 - 1U) * 3;
                  *(undefined1 *)(lVar10 + param_11) = *(undefined1 *)(lVar10 + lVar21 + lStack_f0);
                  *(undefined1 *)(lVar10 + 1 + param_11) = *(undefined1 *)(lVar24 + 1 + lVar10);
                  *(undefined1 *)(lVar10 + 2 + param_11) = *(undefined1 *)(lVar24 + 2 + lVar10);
                }
              }
LAB_14071dc6a:
              if (uVar7 == 1) {
                if (0 < lStack_d0) {
                  if ((longlong)uStack_158 / 3 < 7) {
                    lVar24 = 1;
                    uVar25 = 0;
                    if (uStack_140 != 0) {
                      do {
                        *(undefined1 *)(lStack_148 + -3 + uVar25 * 6) =
                             *(undefined1 *)(lStack_148 + -6);
                        uVar17 = uVar25 + 1;
                        *(undefined1 *)(lStack_148 + -2 + uVar25 * 6) =
                             *(undefined1 *)(lStack_148 + -5);
                        *(undefined1 *)(lStack_148 + -1 + uVar25 * 6) =
                             *(undefined1 *)(lStack_148 + -4);
                        *(undefined1 *)(lStack_148 + uVar25 * 6) = *(undefined1 *)(lStack_148 + -6);
                        *(undefined1 *)(lStack_148 + 1 + uVar25 * 6) =
                             *(undefined1 *)(lStack_148 + -5);
                        *(undefined1 *)(lStack_148 + 2 + uVar25 * 6) =
                             *(undefined1 *)(lStack_148 + -4);
                        uVar25 = uVar17;
                      } while (uVar17 < uStack_140);
                      lVar24 = uVar17 * 2 + 1;
                    }
                    if (lVar24 - 1U < uStack_138) {
                      lVar24 = (lVar24 - 1U) * 3;
                      *(undefined1 *)(lVar24 + -3 + lStack_148) = *(undefined1 *)(lStack_148 + -6);
                      *(undefined1 *)(lVar24 + -2 + lStack_148) = *(undefined1 *)(lStack_148 + -5);
                      *(undefined1 *)(lVar24 + -1 + lStack_148) = *(undefined1 *)(lStack_148 + -4);
                    }
                  }
                  else {
                    uVar25 = 0;
                    lVar24 = 1;
                    uVar3 = *(undefined1 *)(lStack_148 + -6);
                    uVar4 = *(undefined1 *)(lStack_148 + -5);
                    uVar5 = *(undefined1 *)(lStack_148 + -4);
                    uVar17 = uVar25;
                    if (uStack_140 != 0) {
                      do {
                        uVar17 = uVar17 + 1;
                        *(undefined1 *)((uVar25 - 3) + lStack_148) = uVar3;
                        *(undefined1 *)((uVar25 - 2) + lStack_148) = uVar4;
                        *(undefined1 *)((uVar25 - 1) + lStack_148) = uVar5;
                        *(undefined1 *)(uVar25 + lStack_148) = uVar3;
                        *(undefined1 *)(uVar25 + 1 + lStack_148) = uVar4;
                        *(undefined1 *)(uVar25 + 2 + lStack_148) = uVar5;
                        uVar25 = uVar25 + 6;
                      } while (uVar17 < uStack_140);
                      lVar24 = uVar17 * 2 + 1;
                    }
                    if (lVar24 - 1U < uStack_138) {
                      lVar24 = (lVar24 - 1U) * 3;
                      *(undefined1 *)(lVar24 + -3 + lStack_148) = uVar3;
                      *(undefined1 *)(lVar24 + -2 + lStack_148) = uVar4;
                      *(undefined1 *)(lVar24 + -1 + lStack_148) = uVar5;
                    }
                  }
                }
              }
              else if (uVar7 == 3) {
                if (0 < lStack_d0) {
                  uVar25 = 0;
                  lVar21 = 1;
                  lVar24 = 0;
                  lVar10 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar25 = uVar25 + 1;
                      *(undefined1 *)(lVar24 + -3 + lStack_148) =
                           *(undefined1 *)(lVar10 + -9 + lStack_148);
                      *(undefined1 *)(lVar24 + 1 + lStack_148) =
                           *(undefined1 *)(lVar10 + -0xb + lStack_148);
                      lVar21 = lVar10 + -8;
                      uVar3 = *(undefined1 *)(lVar10 + -7 + lStack_148);
                      uVar4 = *(undefined1 *)(lVar10 + -0xc + lStack_148);
                      uVar5 = *(undefined1 *)(lVar10 + -10 + lStack_148);
                      lVar10 = lVar10 + -6;
                      *(undefined1 *)(lVar24 + -2 + lStack_148) =
                           *(undefined1 *)(lVar21 + lStack_148);
                      *(undefined1 *)(lVar24 + -1 + lStack_148) = uVar3;
                      *(undefined1 *)(lVar24 + lStack_148) = uVar4;
                      *(undefined1 *)(lVar24 + 2 + lStack_148) = uVar5;
                      lVar24 = lVar24 + 6;
                    } while (uVar25 < uStack_140);
                    lVar21 = uVar25 * 2 + 1;
                  }
                  uVar25 = lVar21 - 1;
                  if (uVar25 < uStack_138) {
                    lVar24 = uVar25 * 3;
                    lVar21 = uVar25 * -3;
                    uVar3 = *(undefined1 *)(lVar21 + -8 + lStack_148);
                    uVar4 = *(undefined1 *)(lVar21 + -7 + lStack_148);
                    *(undefined1 *)(lVar24 + -3 + lStack_148) =
                         *(undefined1 *)(lVar21 + -9 + lStack_148);
                    *(undefined1 *)(lVar24 + -2 + lStack_148) = uVar3;
                    *(undefined1 *)(lVar24 + -1 + lStack_148) = uVar4;
                  }
                }
              }
              else if ((uVar7 == 6) && (0 < lStack_d0)) {
                if (((longlong)uStack_158 / 3 < 7) ||
                   ((lVar24 = (param_11 + -3 + uStack_150) - (longlong)puVar28, lVar24 < 3 &&
                    (-lVar24 < ((longlong)uStack_158 / 3) * 3)))) {
                  lVar24 = 1;
                  uVar25 = 0;
                  if (uStack_140 != 0) {
                    do {
                      *(byte *)(lStack_148 + -3 + uVar25 * 6) = (byte)*puVar28;
                      uVar17 = uVar25 + 1;
                      *(byte *)(lStack_148 + -2 + uVar25 * 6) = *(byte *)((longlong)puVar28 + 1);
                      *(byte *)(lStack_148 + -1 + uVar25 * 6) = *(byte *)((longlong)puVar28 + 2);
                      *(byte *)(lStack_148 + uVar25 * 6) = (byte)*puVar28;
                      *(byte *)(lStack_148 + 1 + uVar25 * 6) = *(byte *)((longlong)puVar28 + 1);
                      *(byte *)(lStack_148 + 2 + uVar25 * 6) = *(byte *)((longlong)puVar28 + 2);
                      uVar25 = uVar17;
                    } while (uVar17 < uStack_140);
                    lVar24 = uVar17 * 2 + 1;
                  }
                  if (lVar24 - 1U < uStack_138) {
                    lVar24 = (lVar24 - 1U) * 3;
                    *(byte *)(lVar24 + -3 + lStack_148) = (byte)*puVar28;
                    *(byte *)(lVar24 + -2 + lStack_148) = *(byte *)((longlong)puVar28 + 1);
                    *(byte *)(lVar24 + -1 + lStack_148) = *(byte *)((longlong)puVar28 + 2);
                  }
                }
                else {
                  uVar25 = 0;
                  lVar21 = 1;
                  bVar12 = (byte)*puVar28;
                  lVar24 = 0;
                  bVar15 = *(byte *)((longlong)puVar28 + 1);
                  bVar18 = *(byte *)((longlong)puVar28 + 2);
                  if (uStack_140 != 0) {
                    do {
                      uVar25 = uVar25 + 1;
                      *(byte *)(lVar24 + -3 + lStack_148) = bVar12;
                      *(byte *)(lVar24 + -2 + lStack_148) = bVar15;
                      *(byte *)(lVar24 + -1 + lStack_148) = bVar18;
                      *(byte *)(lVar24 + lStack_148) = bVar12;
                      *(byte *)(lVar24 + 1 + lStack_148) = bVar15;
                      *(byte *)(lVar24 + 2 + lStack_148) = bVar18;
                      lVar24 = lVar24 + 6;
                    } while (uVar25 < uStack_140);
                    lVar21 = uVar25 * 2 + 1;
                  }
                  if (lVar21 - 1U < uStack_138) {
                    lVar24 = (lVar21 - 1U) * 3;
                    *(byte *)(lVar24 + -3 + lStack_148) = bVar12;
                    *(byte *)(lVar24 + -2 + lStack_148) = bVar15;
                    *(byte *)(lVar24 + -1 + lStack_148) = bVar18;
                  }
                }
              }
              puVar8 = (ulonglong *)CONCAT44(uVar34,param_10);
              plVar9 = (longlong *)(*pcStack_a0)(puStack_98,lVar26,uStack_50,param_9,puVar8);
              auVar30._8_8_ = extraout_XMM0_Qb_00;
              auVar30._0_8_ = extraout_XMM0_Qa;
            }
            else {
              puVar8 = (ulonglong *)CONCAT44(uVar34,param_10);
              plVar9 = (longlong *)(*pcStack_a0)(lVar21,lVar26,uVar25,param_9,puVar8);
              auVar30._8_8_ = extraout_XMM0_Qb_02;
              auVar30._0_8_ = extraout_XMM0_Qa_01;
            }
          }
        }
        iVar27 = (int)uVar13;
        uVar13 = uVar13 + 1;
        lVar24 = (longlong)iVar27 + 1;
        if (uStack_50 <= uVar13) {
          return (ulonglong *)plVar9;
        }
      } while( true );
    }
  }
  uVar7 = param_7 & 0xf;
  if (uVar7 == 6) {
    plVar9 = (longlong *)(ulonglong)(byte)*param_8;
    uVar13 = 0;
    fVar32 = (float)(byte)*param_8;
    fVar31 = (float)*(byte *)((longlong)param_8 + 1);
    fVar29 = (float)*(byte *)((longlong)param_8 + 2);
    lVar24 = 0;
    if (0 < iVar27) {
      lVar26 = *param_5 * 2 + *param_5;
      uVar25 = lVar26 + 2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar25;
      plVar9 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      do {
        if (0 < lVar26) {
          uVar17 = 0;
          lVar10 = 1;
          lVar21 = 0;
          if (uVar25 / 6 != 0) {
            lVar10 = param_3 + lVar24;
            do {
              uVar17 = uVar17 + 1;
              *(float *)(lVar21 + lVar10) = fVar32;
              *(float *)(lVar21 + 4 + lVar10) = fVar31;
              *(float *)(lVar21 + 8 + lVar10) = fVar29;
              *(float *)(lVar21 + 0xc + lVar10) = fVar32;
              *(float *)(lVar21 + 0x10 + lVar10) = fVar31;
              *(float *)(lVar21 + 0x14 + lVar10) = fVar29;
              lVar21 = lVar21 + 0x18;
            } while (uVar17 < uVar25 / 6);
            lVar10 = uVar17 * 2 + 1;
          }
          plVar11 = (longlong *)(lVar10 - 1);
          plVar9 = plVar11;
          if (plVar11 < (longlong *)(uVar25 / 3)) {
            plVar9 = (longlong *)((longlong)plVar11 * 4);
            lVar21 = (longlong)plVar11 * 0xc + param_3;
            *(float *)(lVar21 + lVar24) = fVar32;
            *(float *)(lVar21 + 4 + lVar24) = fVar31;
            *(float *)(lVar21 + 8 + lVar24) = fVar29;
          }
        }
        uVar13 = uVar13 + 1;
        lVar24 = lVar24 + param_4;
      } while (uVar13 < (ulonglong)(longlong)iVar27);
    }
    return (ulonglong *)plVar9;
  }
  puVar8 = (ulonglong *)(ulonglong)uVar7;
  if (uVar7 == 1) {
    uVar13 = 0;
    if (0 < iVar27) {
      puVar8 = (ulonglong *)(param_4 * iVar27 + param_3);
      uVar25 = *param_5 * 2 + *param_5;
      do {
        if (0 < (longlong)uVar25) {
          if ((longlong)uVar25 < 4) {
LAB_14071d0d2:
            uVar22 = 0;
          }
          else {
            uVar20 = param_4 * uVar13 + param_3;
            uVar17 = uVar20 & 0xf;
            if (uVar17 != 0) {
              if ((uVar20 & 3) != 0) goto LAB_14071d0d2;
              uVar17 = 0x10 - uVar17 >> 2;
            }
            if ((longlong)uVar25 < (longlong)(uVar17 + 4)) goto LAB_14071d0d2;
            uVar14 = 0;
            uVar22 = uVar25 - (uVar25 - uVar17 & 3);
            if (uVar17 != 0) {
              do {
                *(undefined4 *)(uVar20 + uVar14 * 4) =
                     *(undefined4 *)((longlong)puVar8 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar17);
            }
            if ((uVar17 * 4 + (longlong)puVar8 & 0xf) == 0) {
              do {
                *(undefined1 (*) [16])(uVar20 + uVar17 * 4) =
                     *(undefined1 (*) [16])((longlong)puVar8 + uVar17 * 4);
                uVar17 = uVar17 + 4;
              } while (uVar17 < uVar22);
            }
            else {
              do {
                *(undefined1 (*) [16])(uVar20 + uVar17 * 4) =
                     *(undefined1 (*) [16])((longlong)puVar8 + uVar17 * 4);
                uVar17 = uVar17 + 4;
              } while (uVar17 < uVar22);
            }
          }
          if (uVar22 < uVar25) {
            do {
              *(undefined4 *)(param_4 * uVar13 + param_3 + uVar22 * 4) =
                   *(undefined4 *)((longlong)puVar8 + uVar22 * 4);
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar25);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)(longlong)iVar27);
    }
  }
  else if (uVar7 == 3) {
    uStack_158 = *param_5;
    uStack_150 = param_5[1];
    puVar8 = (ulonglong *)
             FUN_1406ad440(param_1,lStack_48,(longlong)iVar27,param_3,&uStack_158,param_6,param_7,
                           param_8,param_9,param_10,param_11);
    lVar24 = 1;
    uVar13 = 0;
    if (1 < iVar27) {
      lVar26 = ((longlong)param_10 + -1) * param_4 + param_3;
      puVar16 = (ulonglong *)(*param_5 * 2 + *param_5);
      do {
        if (0 < (longlong)puVar16) {
          if ((longlong)puVar16 < 4) {
LAB_14071cf46:
            param_5 = (ulonglong *)0x0;
          }
          else {
            uVar25 = param_3 + param_4 * lVar24;
            puVar8 = (ulonglong *)(uVar25 & 0xf);
            if (puVar8 != (ulonglong *)0x0) {
              if ((uVar25 & 3) != 0) goto LAB_14071cf46;
              puVar8 = (ulonglong *)(0x10U - (longlong)puVar8 >> 2);
            }
            if ((longlong)puVar16 < (longlong)puVar8 + 4) goto LAB_14071cf46;
            lVar21 = lVar26 - param_4 * lVar24;
            puVar19 = (ulonglong *)0x0;
            param_5 = (ulonglong *)((longlong)puVar16 - ((longlong)puVar16 - (longlong)puVar8 & 3U))
            ;
            if (puVar8 != (ulonglong *)0x0) {
              do {
                *(undefined4 *)(uVar25 + (longlong)puVar19 * 4) =
                     *(undefined4 *)(lVar21 + (longlong)puVar19 * 4);
                puVar19 = (ulonglong *)((longlong)puVar19 + 1);
              } while (puVar19 < puVar8);
            }
            if (((longlong)puVar8 * 4 + lVar21 & 0xfU) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar21 + (longlong)puVar8 * 4);
                uVar33 = puVar1[1];
                puVar2 = (undefined8 *)(uVar25 + (longlong)puVar8 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar33;
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
              } while (puVar8 < param_5);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar21 + (longlong)puVar8 * 4);
                uVar33 = puVar1[1];
                puVar2 = (undefined8 *)(uVar25 + (longlong)puVar8 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar33;
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
              } while (puVar8 < param_5);
            }
          }
          if (param_5 < puVar16) {
            do {
              *(undefined4 *)(param_3 + lVar24 * param_4 + (longlong)param_5 * 4) =
                   *(undefined4 *)((lVar26 - lVar24 * param_4) + (longlong)param_5 * 4);
              param_5 = (ulonglong *)((longlong)param_5 + 1);
            } while (param_5 < puVar16);
          }
        }
        lVar24 = uVar13 + 2;
        uVar13 = uVar13 + 1;
        puVar8 = param_5;
      } while (uVar13 < (ulonglong)(longlong)(iVar27 + -1));
    }
  }
  return puVar8;
}

