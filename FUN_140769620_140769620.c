
/* WARNING: Removing unreachable block (ram,0x00014076aa16) */

ulonglong FUN_140769620(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong *param_5,uint param_6,uint param_7,ushort *param_8,
                       undefined8 param_9,uint param_10,longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ushort uVar17;
  ushort uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ushort uVar24;
  undefined4 uVar25;
  ushort *puVar26;
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
  undefined1 auStack_1c8 [32];
  ulonglong *puStack_1a8;
  uint uStack_1a0;
  uint uStack_198;
  ushort *puStack_190;
  undefined8 uStack_188;
  uint uStack_180;
  longlong lStack_178;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  longlong lStack_138;
  uint uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  uint uStack_d8;
  code *pcStack_d0;
  undefined2 *puStack_c8;
  longlong lStack_c0;
  uint uStack_b8;
  longlong lStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  ulonglong *puStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  ushort auStack_58 [4];
  ulonglong uStack_50;
  
  lVar11 = 0;
  iVar13 = (int)param_10 >> 1;
  uStack_50 = DAT_1436b4680 ^ (ulonglong)auStack_1c8;
  uVar8 = (ulonglong)param_6;
  lStack_78 = param_2;
  if (iVar13 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_14076ad81;
  }
  else {
    uStack_68 = (ulonglong)iVar13;
    uStack_168 = CONCAT44(uStack_168._4_4_,iVar13);
    puStack_80 = param_5;
    lVar14 = param_4 * uStack_68 + param_3;
    lStack_a0 = param_3;
    lStack_88 = param_1;
    lStack_70 = param_4;
    do {
      puStack_1a8 = &uStack_98;
      uStack_98 = *puStack_80;
      uStack_90 = puStack_80[1];
      uStack_1a0 = param_6;
      uStack_198 = param_7;
      puStack_190 = param_8;
      uStack_188 = param_9;
      uStack_180 = param_10;
      lStack_178 = param_11;
      auVar28._0_8_ = FUN_140784920(lStack_88,lStack_78,lVar11,lVar14);
      uVar12 = uStack_68;
      auVar28._8_8_ = extraout_XMM0_Qb;
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + lStack_70;
    } while (lVar11 < (longlong)uStack_68);
    param_1 = lStack_88;
    param_3 = lStack_a0;
    param_5 = puStack_80;
    param_4 = lStack_70;
    iVar13 = (int)uStack_168;
    if ((param_7 & 0x10) != 0) {
      pcStack_d0 = (code *)(&PTR_FUN_14308c0a0)[(int)param_6];
      uVar20 = (ulonglong)(int)param_10;
      uVar10 = param_7 & 0xf;
      lStack_138 = 0;
      uStack_f8 = 0;
      lStack_88 = lStack_88 - lStack_78 * uStack_68;
      lStack_b0 = uVar20 - 1;
      lStack_148 = uVar20 * 3;
      lStack_150 = param_11 + uVar20 * 6;
      uStack_e0 = ((lStack_148 + -1) / 3) * 3;
      uStack_e8 = uStack_e0 >> 1;
      uStack_110 = (longlong)(int)(param_10 * 3) - 3;
      uStack_f0 = lStack_148 - 3;
      uStack_118 = uStack_110 >> 1;
      uStack_a8 = param_7 & 0xf0;
      lStack_108 = uStack_68 * 3;
      lStack_c0 = -uStack_68;
      uStack_b8 = param_7 & 0x80;
      puStack_c8 = (undefined2 *)(param_11 + uStack_68 * 6);
      uStack_d8 = param_7 & 0x40;
      uStack_120 = (ulonglong)puStack_c8 & 0xf;
      uStack_158 = lStack_108 + 2;
      uVar16 = 0;
      lVar11 = 0;
      uStack_140 = uStack_158 / 6;
      uStack_128 = (ulonglong)puStack_c8 & 1;
      uStack_168 = 0x10 - uStack_120 >> 1;
      uStack_160 = uStack_158 / 3;
      lStack_100 = uStack_68 * -6;
      uStack_130 = uVar10;
      do {
        auStack_58[0] = 0;
        auStack_58[1] = 0;
        auStack_58[2] = 0;
        lVar14 = lStack_70 * uVar16 + lStack_a0;
        lVar19 = lStack_78 * uVar16 + lStack_88;
        uVar25 = (undefined4)uVar20;
        if (uStack_a8 == 0xf0) {
          puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
          uVar8 = (*pcStack_d0)(lVar19,lVar14,*puStack_80,param_9);
          auVar28._8_8_ = extraout_XMM0_Qb_03;
          auVar28._0_8_ = extraout_XMM0_Qa_02;
        }
        else {
          uVar8 = *puStack_80;
          puVar26 = auStack_58;
          if (uVar10 == 6) {
            puVar26 = param_8;
          }
          if ((longlong)uVar8 < lStack_b0) {
            uVar21 = 0;
            lVar9 = -uVar12;
            lVar11 = 0;
            if (lStack_c0 < (longlong)(uVar12 + uVar8)) {
              do {
                lVar22 = lVar9;
                if (lVar9 < 0) {
                  if (param_7 != 0xf0) {
                    if (uVar10 == 6) {
                      if (uStack_d8 == 0) goto LAB_14076acf2;
                    }
                    else {
                      if (uVar10 != 1) goto LAB_14076ac64;
LAB_14076ade5:
                      lVar22 = 0;
                      if (uStack_d8 != 0) {
                        lVar22 = lVar9;
                      }
                    }
                  }
LAB_14076acd5:
                  uVar17 = *(ushort *)(lVar19 + lVar22 * 6);
                  uVar24 = *(ushort *)(lVar19 + 2 + lVar22 * 6);
                  uVar18 = *(ushort *)(lVar19 + 4 + lVar22 * 6);
                }
                else {
                  if ((lVar9 < (longlong)uVar8) || (param_7 == 0xf0)) goto LAB_14076acd5;
                  if (uVar10 != 6) {
                    if (uVar10 == 1) {
                      if (lVar9 < 0) goto LAB_14076ade5;
                      if (uStack_b8 == 0) {
                        lVar22 = uVar8 - 1;
                      }
                    }
                    else {
LAB_14076ac64:
                      if (uVar10 == 3) {
                        if ((longlong)uVar8 < 2) {
                          if (lVar9 < 0) {
                            if (uStack_d8 == 0) {
                              lVar22 = -lVar9;
                              if (uStack_b8 == 0) {
                                lVar22 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar9) && (uStack_b8 == 0)) &&
                                  (lVar22 = -lVar9, uStack_d8 == 0)) {
                            lVar22 = 0;
                          }
                        }
                        else {
                          if (lVar9 < 0) goto LAB_14076adf8;
                          if ((longlong)uVar8 <= lVar9) {
                            while (uStack_b8 == 0) {
                              for (lVar22 = (uVar8 - 1) * 2 - lVar22; lVar22 < 0; lVar22 = -lVar22)
                              {
LAB_14076adf8:
                                if (uStack_d8 != 0) goto LAB_14076acd5;
                              }
                              if (lVar22 < (longlong)uVar8) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14076acd5;
                  }
                  if (uStack_b8 != 0) goto LAB_14076acd5;
LAB_14076acf2:
                  uVar17 = *puVar26;
                  uVar24 = puVar26[1];
                  uVar18 = puVar26[2];
                }
                uVar21 = uVar21 + 1;
                *(ushort *)(lVar11 + param_11) = uVar17;
                lVar9 = lVar9 + 1;
                *(ushort *)(lVar11 + 2 + param_11) = uVar24;
                *(ushort *)(lVar11 + 4 + param_11) = uVar18;
                lVar11 = lVar11 + 6;
              } while (uVar21 < uVar8 + uVar12 * 2);
              uVar20 = (ulonglong)param_10;
              lStack_138 = lVar14;
              uStack_f8 = uVar16;
              uStack_68 = uVar12;
            }
            puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,(int)uVar20);
            uVar8 = (*pcStack_d0)(puStack_c8,lVar14,uVar8,param_9);
            auVar28._8_8_ = extraout_XMM0_Qb_01;
            auVar28._0_8_ = extraout_XMM0_Qa_00;
          }
          else {
            if (uStack_d8 == 0) {
              if (0 < (longlong)uStack_f0) {
                if (6 < (longlong)uStack_f0) {
                  lVar9 = lStack_148 * 2 + -6;
                  lVar22 = lStack_78 * lVar11 + lStack_88;
                  if ((lVar9 <= (longlong)puStack_c8 - lVar22) ||
                     (lVar9 <= -((longlong)puStack_c8 - lVar22))) {
                    if ((((longlong)uStack_f0 < 8) ||
                        ((uVar21 = uStack_120, uStack_120 != 0 &&
                         (uVar21 = uStack_168, uStack_128 != 0)))) ||
                       ((longlong)uStack_f0 < (longlong)(uVar21 + 8))) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = uStack_f0 - (uStack_f0 - uVar21 & 7);
                      uVar23 = 0;
                      if (uVar21 != 0) {
                        do {
                          puStack_c8[uVar23] = *(undefined2 *)(lVar22 + uVar23 * 2);
                          uVar23 = uVar23 + 1;
                        } while (uVar23 < uVar21);
                      }
                      if ((lVar22 + uVar21 * 2 & 0xf) == 0) {
                        do {
                          puVar1 = (undefined8 *)(lVar22 + uVar21 * 2);
                          uVar7 = puVar1[1];
                          *(undefined8 *)(puStack_c8 + uVar21) = *puVar1;
                          *(undefined8 *)((longlong)(puStack_c8 + uVar21) + 8) = uVar7;
                          uVar21 = uVar21 + 8;
                        } while (uVar21 < uVar15);
                      }
                      else {
                        do {
                          auVar28 = lddqu(auVar28,*(undefined1 (*) [16])(lVar22 + uVar21 * 2));
                          *(undefined1 (*) [16])(puStack_c8 + uVar21) = auVar28;
                          uVar21 = uVar21 + 8;
                        } while (uVar21 < uVar15);
                      }
                    }
                    for (; uVar15 < uStack_f0; uVar15 = uVar15 + 1) {
                      puStack_c8[uVar15] = *(undefined2 *)(lVar22 + uVar15 * 2);
                    }
                    goto LAB_14076a0d5;
                  }
                }
                lVar9 = 1;
                if (uStack_118 != 0) {
                  lVar9 = lStack_78 * lVar11 + lStack_88;
                  uVar21 = 0;
                  do {
                    uVar15 = uVar21;
                    puStack_c8[uVar15 * 2] = *(undefined2 *)(lVar9 + uVar15 * 4);
                    puStack_c8[uVar15 * 2 + 1] = *(undefined2 *)(lVar9 + 2 + uVar15 * 4);
                    uVar21 = uVar15 + 1;
                  } while (uVar21 < uStack_118);
                  lVar9 = uVar15 + 2 + uVar21;
                }
                uVar21 = lVar9 - 1;
                if (uVar21 < uStack_110) {
                  puStack_c8[uVar21] = *(undefined2 *)(lVar11 * lStack_78 + lStack_88 + uVar21 * 2);
                }
              }
LAB_14076a0d5:
              if (uVar10 == 1) {
                if (0 < lStack_108) {
                  if (((longlong)uStack_158 / 3 < 7) ||
                     ((param_11 - (longlong)puStack_c8 < 6 &&
                      (-(param_11 - (longlong)puStack_c8) < ((longlong)uStack_158 / 3) * 6)))) {
                    lVar11 = 1;
                    lVar9 = 0;
                    uVar3 = puStack_c8[2];
                    uVar21 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar15 = uVar21;
                        uVar21 = uVar15 + 1;
                        *(undefined2 *)(lVar9 + param_11) = *puStack_c8;
                        uVar4 = puStack_c8[1];
                        *(undefined2 *)(lVar9 + 4 + param_11) = uVar3;
                        *(undefined2 *)(lVar9 + 2 + param_11) = uVar4;
                        *(undefined2 *)(lVar9 + 6 + param_11) = *puStack_c8;
                        uVar4 = puStack_c8[1];
                        *(undefined2 *)(lVar9 + 10 + param_11) = uVar3;
                        *(undefined2 *)(lVar9 + 8 + param_11) = uVar4;
                        lVar9 = lVar9 + 0xc;
                      } while (uVar21 < uStack_140);
                      lVar11 = uVar15 + 2 + uVar21;
                    }
                    if (lVar11 - 1U < uStack_160) {
                      lVar11 = lVar11 * 3 + -3;
                      *(undefined2 *)(param_11 + lVar11 * 2) = *puStack_c8;
                      uVar4 = puStack_c8[1];
                      *(undefined2 *)(param_11 + 4 + lVar11 * 2) = uVar3;
                      *(undefined2 *)(param_11 + 2 + lVar11 * 2) = uVar4;
                    }
                  }
                  else {
                    lVar11 = 1;
                    lVar9 = 0;
                    uVar3 = *puStack_c8;
                    uVar4 = puStack_c8[1];
                    uVar5 = puStack_c8[2];
                    uVar21 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar15 = uVar21;
                        uVar21 = uVar15 + 1;
                        *(undefined2 *)(lVar9 + param_11) = uVar3;
                        *(undefined2 *)(lVar9 + 2 + param_11) = uVar4;
                        *(undefined2 *)(lVar9 + 4 + param_11) = uVar5;
                        *(undefined2 *)(lVar9 + 6 + param_11) = uVar3;
                        *(undefined2 *)(lVar9 + 8 + param_11) = uVar4;
                        *(undefined2 *)(lVar9 + 10 + param_11) = uVar5;
                        lVar9 = lVar9 + 0xc;
                      } while (uVar21 < uStack_140);
                      lVar11 = uVar15 + 2 + uVar21;
                    }
                    if (lVar11 - 1U < uStack_160) {
                      lVar11 = lVar11 * 3 + -3;
                      *(undefined2 *)(param_11 + lVar11 * 2) = uVar3;
                      *(undefined2 *)(param_11 + 2 + lVar11 * 2) = uVar4;
                      *(undefined2 *)(param_11 + 4 + lVar11 * 2) = uVar5;
                    }
                  }
                }
              }
              else if (uVar10 == 3) {
                if (0 < lStack_108) {
                  lVar11 = 1;
                  lVar22 = 0;
                  lVar9 = 0;
                  uVar21 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar15 = uVar21;
                      uVar21 = uVar15 + 1;
                      *(undefined2 *)(lVar22 + param_11) = *(undefined2 *)(lVar9 + -6 + lStack_150);
                      *(undefined2 *)(lVar22 + 2 + param_11) =
                           *(undefined2 *)(lVar9 + -4 + lStack_150);
                      *(undefined2 *)(lVar22 + 4 + param_11) =
                           *(undefined2 *)(lVar9 + -2 + lStack_150);
                      *(undefined2 *)(lVar22 + 6 + param_11) =
                           *(undefined2 *)(lVar9 + -0xc + lStack_150);
                      *(undefined2 *)(lVar22 + 8 + param_11) =
                           *(undefined2 *)(lVar9 + -10 + lStack_150);
                      lVar11 = lVar9 + -8;
                      lVar9 = lVar9 + -0xc;
                      *(undefined2 *)(lVar22 + 10 + param_11) = *(undefined2 *)(lVar11 + lStack_150)
                      ;
                      lVar22 = lVar22 + 0xc;
                    } while (uVar21 < uStack_140);
                    lVar11 = uVar15 + 2 + uVar21;
                  }
                  if (lVar11 - 1U < uStack_160) {
                    lVar9 = -(lVar11 * 6 + -6);
                    lVar11 = lVar11 * 3 + -3;
                    *(undefined2 *)(param_11 + lVar11 * 2) =
                         *(undefined2 *)(lVar9 + -6 + lStack_150);
                    *(undefined2 *)(param_11 + 2 + lVar11 * 2) =
                         *(undefined2 *)(lVar9 + -4 + lStack_150);
                    *(undefined2 *)(param_11 + 4 + lVar11 * 2) =
                         *(undefined2 *)(lVar9 + -2 + lStack_150);
                  }
                }
              }
              else if ((uVar10 == 6) && (0 < lStack_108)) {
                if (6 < (longlong)uStack_158 / 3) {
                  lVar11 = ((longlong)uStack_158 / 3) * 6;
                  lVar9 = (longlong)puVar26 + (2 - param_11);
                  if (((lVar11 <= lVar9) || (3 < -lVar9)) &&
                     ((1 < param_11 - (longlong)puVar26 ||
                      (lVar11 <= -(param_11 - (longlong)puVar26))))) {
                    lVar11 = 1;
                    uVar17 = *puVar26;
                    uVar24 = puVar26[1];
                    lVar9 = 0;
                    uVar18 = puVar26[2];
                    uVar21 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar15 = uVar21;
                        uVar21 = uVar15 + 1;
                        *(ushort *)(lVar9 + param_11) = uVar17;
                        *(ushort *)(lVar9 + 2 + param_11) = uVar24;
                        *(ushort *)(lVar9 + 4 + param_11) = uVar18;
                        *(ushort *)(lVar9 + 6 + param_11) = uVar17;
                        *(ushort *)(lVar9 + 8 + param_11) = uVar24;
                        *(ushort *)(lVar9 + 10 + param_11) = uVar18;
                        lVar9 = lVar9 + 0xc;
                      } while (uVar21 < uStack_140);
                      lVar11 = uVar15 + 2 + uVar21;
                    }
                    if (lVar11 - 1U < uStack_160) {
                      lVar11 = lVar11 * 3 + -3;
                      *(ushort *)(param_11 + lVar11 * 2) = uVar17;
                      *(ushort *)(param_11 + 2 + lVar11 * 2) = uVar24;
                      *(ushort *)(param_11 + 4 + lVar11 * 2) = uVar18;
                    }
                    goto LAB_14076a5e1;
                  }
                }
                lVar11 = 1;
                uVar21 = 0;
                if (uStack_140 != 0) {
                  do {
                    uVar15 = uVar21;
                    uVar21 = uVar15 + 1;
                    *(ushort *)(param_11 + uVar15 * 0xc) = *puVar26;
                    *(ushort *)(param_11 + 2 + uVar15 * 0xc) = puVar26[1];
                    *(ushort *)(param_11 + 4 + uVar15 * 0xc) = puVar26[2];
                    *(ushort *)(param_11 + 6 + uVar15 * 0xc) = *puVar26;
                    *(ushort *)(param_11 + 8 + uVar15 * 0xc) = puVar26[1];
                    *(ushort *)(param_11 + 10 + uVar15 * 0xc) = puVar26[2];
                  } while (uVar21 < uStack_140);
                  lVar11 = uVar15 + 2 + uVar21;
                }
                if (lVar11 - 1U < uStack_160) {
                  lVar11 = lVar11 * 3 + -3;
                  *(ushort *)(param_11 + lVar11 * 2) = *puVar26;
                  *(ushort *)(param_11 + 2 + lVar11 * 2) = puVar26[1];
                  *(ushort *)(param_11 + 4 + lVar11 * 2) = puVar26[2];
                }
              }
LAB_14076a5e1:
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
              (*pcStack_d0)(puStack_c8,lVar14,uVar12);
              uVar8 = uVar8 - uVar12;
              lVar19 = lVar19 + lStack_108 * 2;
              lVar14 = lVar14 + lStack_108 * 4;
            }
            if (uStack_b8 == 0) {
              if ((longlong)uVar12 < (longlong)uVar8) {
                lVar11 = uVar8 - uVar12;
                puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
                (*pcStack_d0)(lVar19,lVar14,lVar11);
                lVar19 = lVar19 + lVar11 * 6;
                lVar14 = lVar14 + lVar11 * 0xc;
              }
              if (0 < (longlong)uStack_f0) {
                lVar11 = 1;
                if (uStack_e8 != 0) {
                  uVar8 = 0;
                  do {
                    uVar21 = uVar8;
                    *(undefined2 *)(param_11 + uVar21 * 4) =
                         *(undefined2 *)(lStack_100 + lVar19 + uVar21 * 4);
                    *(undefined2 *)(param_11 + 2 + uVar21 * 4) =
                         *(undefined2 *)(lStack_100 + lVar19 + 2 + uVar21 * 4);
                    uVar8 = uVar21 + 1;
                  } while (uVar8 < uStack_e8);
                  lVar11 = uVar21 + 2 + uVar8;
                }
                uVar8 = lVar11 - 1;
                if (uVar8 < uStack_e0) {
                  *(undefined2 *)(param_11 + uVar8 * 2) =
                       *(undefined2 *)(lVar19 + lStack_100 + uVar8 * 2);
                }
              }
              if (uVar10 == 1) {
                if (0 < lStack_108) {
                  if ((longlong)uStack_158 / 3 < 7) {
                    lVar11 = 1;
                    uVar8 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar21 = uVar8;
                        uVar8 = uVar21 + 1;
                        *(undefined2 *)(lStack_150 + -6 + uVar21 * 0xc) =
                             *(undefined2 *)(lStack_150 + -0xc);
                        *(undefined2 *)(lStack_150 + -4 + uVar21 * 0xc) =
                             *(undefined2 *)(lStack_150 + -10);
                        *(undefined2 *)(lStack_150 + -2 + uVar21 * 0xc) =
                             *(undefined2 *)(lStack_150 + -8);
                        *(undefined2 *)(lStack_150 + uVar21 * 0xc) =
                             *(undefined2 *)(lStack_150 + -0xc);
                        *(undefined2 *)(lStack_150 + 2 + uVar21 * 0xc) =
                             *(undefined2 *)(lStack_150 + -10);
                        *(undefined2 *)(lStack_150 + 4 + uVar21 * 0xc) =
                             *(undefined2 *)(lStack_150 + -8);
                      } while (uVar8 < uStack_140);
                      lVar11 = uVar21 + 2 + uVar8;
                    }
                    if (lVar11 - 1U < uStack_160) {
                      lVar11 = lVar11 * 3 + -3;
                      *(undefined2 *)(lStack_150 + -6 + lVar11 * 2) =
                           *(undefined2 *)(lStack_150 + -0xc);
                      *(undefined2 *)(lStack_150 + -4 + lVar11 * 2) =
                           *(undefined2 *)(lStack_150 + -10);
                      *(undefined2 *)(lStack_150 + -2 + lVar11 * 2) =
                           *(undefined2 *)(lStack_150 + -8);
                    }
                  }
                  else {
                    lVar11 = 1;
                    lVar19 = 0;
                    uVar3 = *(undefined2 *)(lStack_150 + -0xc);
                    uVar4 = *(undefined2 *)(lStack_150 + -10);
                    uVar5 = *(undefined2 *)(lStack_150 + -8);
                    uVar8 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar21 = uVar8;
                        uVar8 = uVar21 + 1;
                        *(undefined2 *)(lVar19 + -6 + lStack_150) = uVar3;
                        *(undefined2 *)(lVar19 + -4 + lStack_150) = uVar4;
                        *(undefined2 *)(lVar19 + -2 + lStack_150) = uVar5;
                        *(undefined2 *)(lVar19 + lStack_150) = uVar3;
                        *(undefined2 *)(lVar19 + 2 + lStack_150) = uVar4;
                        *(undefined2 *)(lVar19 + 4 + lStack_150) = uVar5;
                        lVar19 = lVar19 + 0xc;
                      } while (uVar8 < uStack_140);
                      lVar11 = uVar21 + 2 + uVar8;
                    }
                    if (lVar11 - 1U < uStack_160) {
                      lVar11 = lVar11 * 3 + -3;
                      *(undefined2 *)(lStack_150 + -6 + lVar11 * 2) = uVar3;
                      *(undefined2 *)(lStack_150 + -4 + lVar11 * 2) = uVar4;
                      *(undefined2 *)(lStack_150 + -2 + lVar11 * 2) = uVar5;
                    }
                  }
                }
              }
              else if (uVar10 == 3) {
                if (0 < lStack_108) {
                  lVar11 = 1;
                  lVar9 = 0;
                  lVar19 = 0;
                  uVar8 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar21 = uVar8;
                      uVar8 = uVar21 + 1;
                      *(undefined2 *)(lVar9 + -6 + lStack_150) =
                           *(undefined2 *)(lVar19 + -0x12 + lStack_150);
                      *(undefined2 *)(lVar9 + -4 + lStack_150) =
                           *(undefined2 *)(lVar19 + -0x10 + lStack_150);
                      *(undefined2 *)(lVar9 + -2 + lStack_150) =
                           *(undefined2 *)(lVar19 + -0xe + lStack_150);
                      *(undefined2 *)(lVar9 + lStack_150) =
                           *(undefined2 *)(lVar19 + -0x18 + lStack_150);
                      *(undefined2 *)(lVar9 + 2 + lStack_150) =
                           *(undefined2 *)(lVar19 + -0x16 + lStack_150);
                      lVar11 = lVar19 + -0x14;
                      lVar19 = lVar19 + -0xc;
                      *(undefined2 *)(lVar9 + 4 + lStack_150) = *(undefined2 *)(lVar11 + lStack_150)
                      ;
                      lVar9 = lVar9 + 0xc;
                    } while (uVar8 < uStack_140);
                    lVar11 = uVar21 + 2 + uVar8;
                  }
                  if (lVar11 - 1U < uStack_160) {
                    lVar19 = -(lVar11 * 6 + -6);
                    lVar11 = lVar11 * 3 + -3;
                    *(undefined2 *)(lStack_150 + -6 + lVar11 * 2) =
                         *(undefined2 *)(lVar19 + -0x12 + lStack_150);
                    *(undefined2 *)(lStack_150 + -4 + lVar11 * 2) =
                         *(undefined2 *)(lVar19 + -0x10 + lStack_150);
                    *(undefined2 *)(lStack_150 + -2 + lVar11 * 2) =
                         *(undefined2 *)(lVar19 + -0xe + lStack_150);
                  }
                }
              }
              else if ((uVar10 == 6) && (0 < lStack_108)) {
                if (6 < (longlong)uStack_158 / 3) {
                  lVar11 = ((longlong)uStack_158 / 3) * 6;
                  lVar19 = (longlong)puVar26 + (2 - (lStack_150 + -6));
                  if (((lVar11 <= lVar19) || (3 < -lVar19)) &&
                     ((lVar19 = (lStack_150 + -6) - (longlong)puVar26, 1 < lVar19 ||
                      (lVar11 <= -lVar19)))) {
                    lVar11 = 1;
                    uVar17 = *puVar26;
                    uVar24 = puVar26[1];
                    lVar19 = 0;
                    uVar18 = puVar26[2];
                    uVar8 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar21 = uVar8;
                        uVar8 = uVar21 + 1;
                        *(ushort *)(lVar19 + -6 + lStack_150) = uVar17;
                        *(ushort *)(lVar19 + -4 + lStack_150) = uVar24;
                        *(ushort *)(lVar19 + -2 + lStack_150) = uVar18;
                        *(ushort *)(lVar19 + lStack_150) = uVar17;
                        *(ushort *)(lVar19 + 2 + lStack_150) = uVar24;
                        *(ushort *)(lVar19 + 4 + lStack_150) = uVar18;
                        lVar19 = lVar19 + 0xc;
                      } while (uVar8 < uStack_140);
                      lVar11 = uVar21 + 2 + uVar8;
                    }
                    if (lVar11 - 1U < uStack_160) {
                      lVar11 = lVar11 * 3 + -3;
                      *(ushort *)(lStack_150 + -6 + lVar11 * 2) = uVar17;
                      *(ushort *)(lStack_150 + -4 + lVar11 * 2) = uVar24;
                      *(ushort *)(lStack_150 + -2 + lVar11 * 2) = uVar18;
                    }
                    goto LAB_14076ab86;
                  }
                }
                lVar11 = 1;
                uVar8 = 0;
                if (uStack_140 != 0) {
                  do {
                    uVar21 = uVar8;
                    uVar8 = uVar21 + 1;
                    *(ushort *)(lStack_150 + -6 + uVar21 * 0xc) = *puVar26;
                    *(ushort *)(lStack_150 + -4 + uVar21 * 0xc) = puVar26[1];
                    *(ushort *)(lStack_150 + -2 + uVar21 * 0xc) = puVar26[2];
                    *(ushort *)(lStack_150 + uVar21 * 0xc) = *puVar26;
                    *(ushort *)(lStack_150 + 2 + uVar21 * 0xc) = puVar26[1];
                    *(ushort *)(lStack_150 + 4 + uVar21 * 0xc) = puVar26[2];
                  } while (uVar8 < uStack_140);
                  lVar11 = uVar21 + 2 + uVar8;
                }
                if (lVar11 - 1U < uStack_160) {
                  lVar11 = lVar11 * 3 + -3;
                  *(ushort *)(lStack_150 + -6 + lVar11 * 2) = *puVar26;
                  *(ushort *)(lStack_150 + -4 + lVar11 * 2) = puVar26[1];
                  *(ushort *)(lStack_150 + -2 + lVar11 * 2) = puVar26[2];
                }
              }
LAB_14076ab86:
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
              uVar8 = (*pcStack_d0)(puStack_c8,lVar14,uVar12,param_9);
              auVar28._8_8_ = extraout_XMM0_Qb_00;
              auVar28._0_8_ = extraout_XMM0_Qa;
            }
            else {
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
              uVar8 = (*pcStack_d0)(lVar19,lVar14,uVar8,param_9);
              auVar28._8_8_ = extraout_XMM0_Qb_02;
              auVar28._0_8_ = extraout_XMM0_Qa_01;
            }
          }
        }
        iVar13 = (int)uVar16;
        uVar16 = uVar16 + 1;
        lVar11 = (longlong)iVar13 + 1;
      } while (uVar16 < uVar12);
LAB_14076ad81:
      if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
        return uVar8;
      }
      goto LAB_1407697c5;
    }
  }
  uVar8 = (ulonglong)param_6;
  uVar10 = param_7 & 0xf;
  if (uVar10 == 6) {
    uVar12 = 0;
    lVar11 = 0;
    uVar8 = (ulonglong)*param_8;
    fVar30 = (float)*param_8;
    fVar29 = (float)param_8[1];
    fVar27 = (float)param_8[2];
    if (0 < iVar13) {
      uVar20 = *param_5;
      uVar16 = uVar20 * 3 + 2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      uVar8 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      do {
        if (0 < (longlong)(uVar20 * 3)) {
          lVar14 = 1;
          lVar19 = 0;
          if (uVar16 / 6 != 0) {
            lVar14 = param_3 + lVar11;
            uVar8 = 0;
            do {
              uVar21 = uVar8;
              uVar8 = uVar21 + 1;
              *(float *)(lVar19 + lVar14) = fVar30;
              *(float *)(lVar19 + 4 + lVar14) = fVar29;
              *(float *)(lVar19 + 8 + lVar14) = fVar27;
              *(float *)(lVar19 + 0xc + lVar14) = fVar30;
              *(float *)(lVar19 + 0x10 + lVar14) = fVar29;
              *(float *)(lVar19 + 0x14 + lVar14) = fVar27;
              lVar19 = lVar19 + 0x18;
            } while (uVar8 < uVar16 / 6);
            lVar14 = uVar21 + 2 + uVar8;
          }
          uVar8 = lVar14 - 1;
          if (uVar8 < uVar16 / 3) {
            uVar8 = lVar14 * 3 - 3;
            lVar14 = param_3 + uVar8 * 4;
            *(float *)(lVar14 + lVar11) = fVar30;
            *(float *)(lVar14 + 4 + lVar11) = fVar29;
            *(float *)(lVar14 + 8 + lVar11) = fVar27;
          }
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + param_4;
      } while (uVar12 < (ulonglong)(longlong)iVar13);
    }
    if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return uVar8;
    }
  }
  else if (uVar10 == 1) {
    uVar8 = 0;
    if (0 < iVar13) {
      uVar12 = *param_5 * 3;
      lVar11 = param_4 * iVar13 + param_3;
      do {
        if (0 < (longlong)uVar12) {
          if ((longlong)uVar12 < 4) {
LAB_140769b07:
            uVar21 = 0;
          }
          else {
            uVar20 = param_4 * uVar8 + param_3;
            uVar16 = uVar20 & 0xf;
            if (uVar16 != 0) {
              if ((uVar20 & 3) != 0) goto LAB_140769b07;
              uVar16 = 0x10 - uVar16 >> 2;
            }
            if ((longlong)uVar12 < (longlong)(uVar16 + 4)) goto LAB_140769b07;
            uVar15 = 0;
            uVar21 = uVar12 - (uVar12 - uVar16 & 3);
            if (uVar16 != 0) {
              do {
                *(undefined4 *)(uVar20 + uVar15 * 4) = *(undefined4 *)(lVar11 + uVar15 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar16);
            }
            if ((lVar11 + uVar16 * 4 & 0xf) == 0) {
              do {
                *(undefined1 (*) [16])(uVar20 + uVar16 * 4) =
                     *(undefined1 (*) [16])(lVar11 + uVar16 * 4);
                uVar16 = uVar16 + 4;
              } while (uVar16 < uVar21);
            }
            else {
              do {
                *(undefined1 (*) [16])(uVar20 + uVar16 * 4) =
                     *(undefined1 (*) [16])(lVar11 + uVar16 * 4);
                uVar16 = uVar16 + 4;
              } while (uVar16 < uVar21);
            }
          }
          if (uVar21 < uVar12) {
            do {
              *(undefined4 *)(param_4 * uVar8 + param_3 + uVar21 * 4) =
                   *(undefined4 *)(lVar11 + uVar21 * 4);
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar12);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulonglong)(longlong)iVar13);
    }
    if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return uVar8;
    }
  }
  else {
    if (uVar10 == 3) {
      uStack_168 = *param_5;
      uStack_160 = param_5[1];
      uStack_1a0 = param_6;
      uStack_198 = param_7;
      puStack_1a8 = &uStack_168;
      puStack_190 = param_8;
      uStack_188 = param_9;
      lStack_178 = param_11;
      uStack_180 = param_10;
      uVar8 = FUN_140784920(param_1,lStack_78,(longlong)iVar13,param_3);
      lVar11 = 1;
      uVar12 = 0;
      if (1 < iVar13) {
        uVar8 = *param_5;
        uVar16 = uVar8 * 3;
        lVar14 = ((longlong)(int)param_10 + -1) * param_4 + param_3;
        do {
          if (0 < (longlong)uVar16) {
            if ((longlong)uVar16 < 4) {
LAB_140769987:
              uVar8 = 0;
            }
            else {
              uVar20 = param_3 + param_4 * lVar11;
              uVar21 = uVar20 & 0xf;
              if (uVar21 != 0) {
                if ((uVar20 & 3) != 0) goto LAB_140769987;
                uVar21 = 0x10 - uVar21 >> 2;
              }
              if ((longlong)uVar16 < (longlong)(uVar21 + 4)) goto LAB_140769987;
              lVar19 = lVar14 - param_4 * lVar11;
              uVar15 = 0;
              uVar8 = uVar16 - (uVar16 - uVar21 & 3);
              if (uVar21 != 0) {
                do {
                  *(undefined4 *)(uVar20 + uVar15 * 4) = *(undefined4 *)(lVar19 + uVar15 * 4);
                  uVar15 = uVar15 + 1;
                } while (uVar15 < uVar21);
              }
              if ((lVar19 + uVar21 * 4 & 0xf) == 0) {
                do {
                  puVar1 = (undefined8 *)(lVar19 + uVar21 * 4);
                  uVar7 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar20 + uVar21 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar7;
                  uVar21 = uVar21 + 4;
                } while (uVar21 < uVar8);
              }
              else {
                do {
                  puVar1 = (undefined8 *)(lVar19 + uVar21 * 4);
                  uVar7 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar20 + uVar21 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar7;
                  uVar21 = uVar21 + 4;
                } while (uVar21 < uVar8);
              }
            }
            if (uVar8 < uVar16) {
              do {
                *(undefined4 *)(param_3 + lVar11 * param_4 + uVar8 * 4) =
                     *(undefined4 *)((lVar14 - lVar11 * param_4) + uVar8 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar16);
            }
          }
          lVar11 = uVar12 + 2;
          uVar12 = uVar12 + 1;
        } while (uVar12 < (ulonglong)(longlong)(iVar13 + -1));
      }
    }
    if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return uVar8;
    }
  }
LAB_1407697c5:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

