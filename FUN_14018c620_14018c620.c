
/* WARNING: Removing unreachable block (ram,0x00014018d9f5) */

ulonglong FUN_14018c620(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,ushort *param_8,
                       undefined8 param_9,uint param_10,longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ushort uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ushort uVar20;
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
  int iStack_1a0;
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
  ulonglong *puStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  ushort auStack_58 [4];
  ulonglong uStack_50;
  
  iVar16 = (int)param_10 >> 1;
  lVar13 = 0;
  uVar9 = DAT_1436b4680 ^ (ulonglong)auStack_1c8;
  lStack_78 = param_2;
  uStack_50 = uVar9;
  if (iVar16 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_14018dd5a;
  }
  else {
    uStack_68 = (ulonglong)iVar16;
    uStack_168 = CONCAT44(uStack_168._4_4_,iVar16);
    lVar11 = param_4 * uStack_68 + param_3;
    lStack_98 = param_3;
    lStack_90 = param_1;
    lStack_70 = param_4;
    do {
      puStack_1a8 = &uStack_88;
      uStack_88 = *param_5;
      uStack_80 = param_5[1];
      iStack_1a0 = param_6;
      uStack_198 = param_7;
      puStack_190 = param_8;
      uStack_188 = param_9;
      uStack_180 = param_10;
      lStack_178 = param_11;
      auVar28._0_8_ = FUN_1406202e0(lStack_90,lStack_78,lVar13,lVar11);
      uVar12 = uStack_68;
      auVar28._8_8_ = extraout_XMM0_Qb;
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + lStack_70;
    } while (lVar13 < (longlong)uStack_68);
    param_1 = lStack_90;
    param_3 = lStack_98;
    param_4 = lStack_70;
    iVar16 = (int)uStack_168;
    if ((param_7 & 0x10) != 0) {
      uVar19 = (ulonglong)(int)param_10;
      lStack_138 = 0;
      uVar8 = param_7 & 0xf;
      pcStack_d0 = *(code **)(&UNK_143087ce0 + (longlong)param_6 * 8);
      lStack_90 = lStack_90 - lStack_78 * uStack_68;
      lStack_b0 = uVar19 - 1;
      lStack_148 = uVar19 * 3;
      uStack_f8 = 0;
      lStack_150 = param_11 + uVar19 * 6;
      lStack_108 = uStack_68 * 3;
      puStack_c8 = (undefined2 *)(param_11 + uStack_68 * 6);
      uStack_120 = (ulonglong)puStack_c8 & 0xf;
      uStack_e0 = ((lStack_148 + -1) / 3) * 3;
      uStack_110 = (longlong)(int)(param_10 * 3) - 3;
      uStack_e8 = uStack_e0 >> 1;
      uStack_f0 = lStack_148 - 3;
      uStack_a0 = param_7 & 0xf0;
      lStack_c0 = -uStack_68;
      uStack_b8 = param_7 & 0x80;
      uStack_d8 = param_7 & 0x40;
      uStack_158 = lStack_108 + 2;
      uStack_140 = uStack_158 / 6;
      uStack_160 = uStack_158 / 3;
      uStack_118 = uStack_110 >> 1;
      lStack_100 = uStack_68 * -6;
      uStack_168 = 0x10 - uStack_120 >> 1;
      uStack_128 = (ulonglong)puStack_c8 & 1;
      puStack_a8 = param_5;
      uVar15 = 0;
      lVar13 = 0;
      uStack_130 = uVar8;
      do {
        auStack_58[0] = 0;
        auStack_58[1] = 0;
        auStack_58[2] = 0;
        lVar11 = lStack_70 * uVar15 + lStack_98;
        lVar18 = lStack_78 * uVar15 + lStack_90;
        uVar25 = (undefined4)uVar19;
        if (uStack_a0 == 0xf0) {
          puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
          uVar9 = (*pcStack_d0)(lVar18,lVar11,*puStack_a8,param_9);
          auVar28._8_8_ = extraout_XMM0_Qb_03;
          auVar28._0_8_ = extraout_XMM0_Qa_02;
        }
        else {
          puVar26 = auStack_58;
          if (uVar8 == 6) {
            puVar26 = param_8;
          }
          uVar9 = *puStack_a8;
          if ((longlong)uVar9 < lStack_b0) {
            uVar21 = 0;
            lVar10 = -uVar12;
            lVar13 = 0;
            if (lStack_c0 < (longlong)(uVar12 + uVar9)) {
              do {
                lVar22 = lVar10;
                if (lVar10 < 0) {
                  if (param_7 != 0xf0) {
                    if (uVar8 == 6) {
                      if (uStack_d8 == 0) goto LAB_14018dcd2;
                    }
                    else {
                      if (uVar8 != 1) goto LAB_14018dc44;
LAB_14018ddba:
                      lVar22 = 0;
                      if (uStack_d8 != 0) {
                        lVar22 = lVar10;
                      }
                    }
                  }
LAB_14018dcb5:
                  uVar17 = *(ushort *)(lVar18 + lVar22 * 6);
                  uVar24 = *(ushort *)(lVar18 + 2 + lVar22 * 6);
                  uVar20 = *(ushort *)(lVar18 + 4 + lVar22 * 6);
                }
                else {
                  if ((lVar10 < (longlong)uVar9) || (param_7 == 0xf0)) goto LAB_14018dcb5;
                  if (uVar8 != 6) {
                    if (uVar8 == 1) {
                      if (lVar10 < 0) goto LAB_14018ddba;
                      if (uStack_b8 == 0) {
                        lVar22 = uVar9 - 1;
                      }
                    }
                    else {
LAB_14018dc44:
                      if (uVar8 == 3) {
                        if ((longlong)uVar9 < 2) {
                          if (lVar10 < 0) {
                            if (uStack_d8 == 0) {
                              lVar22 = -lVar10;
                              if (uStack_b8 == 0) {
                                lVar22 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar10) && (uStack_b8 == 0)) &&
                                  (lVar22 = -lVar10, uStack_d8 == 0)) {
                            lVar22 = 0;
                          }
                        }
                        else {
                          if (lVar10 < 0) goto LAB_14018ddcd;
                          if ((longlong)uVar9 <= lVar10) {
                            while (uStack_b8 == 0) {
                              for (lVar22 = (uVar9 - 1) * 2 - lVar22; lVar22 < 0; lVar22 = -lVar22)
                              {
LAB_14018ddcd:
                                if (uStack_d8 != 0) goto LAB_14018dcb5;
                              }
                              if (lVar22 < (longlong)uVar9) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14018dcb5;
                  }
                  if (uStack_b8 != 0) goto LAB_14018dcb5;
LAB_14018dcd2:
                  uVar17 = *puVar26;
                  uVar24 = puVar26[1];
                  uVar20 = puVar26[2];
                }
                uVar21 = uVar21 + 1;
                lVar10 = lVar10 + 1;
                *(ushort *)(lVar13 + param_11) = uVar17;
                *(ushort *)(lVar13 + 2 + param_11) = uVar24;
                *(ushort *)(lVar13 + 4 + param_11) = uVar20;
                lVar13 = lVar13 + 6;
              } while (uVar21 < uVar9 + uVar12 * 2);
              uVar19 = (ulonglong)param_10;
              lStack_138 = lVar11;
              uStack_f8 = uVar15;
              uStack_68 = uVar12;
            }
            puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,(int)uVar19);
            uVar9 = (*pcStack_d0)(puStack_c8,lVar11,uVar9,param_9);
            auVar28._8_8_ = extraout_XMM0_Qb_01;
            auVar28._0_8_ = extraout_XMM0_Qa_00;
          }
          else {
            if (uStack_d8 == 0) {
              if (0 < (longlong)uStack_f0) {
                if (6 < (longlong)uStack_f0) {
                  lVar22 = lStack_78 * lVar13 + lStack_90;
                  lVar10 = lStack_148 * 2 + -6;
                  if ((lVar10 <= (longlong)puStack_c8 - lVar22) ||
                     (lVar10 <= -((longlong)puStack_c8 - lVar22))) {
                    if ((((longlong)uStack_f0 < 8) ||
                        ((uVar21 = uStack_120, uStack_120 != 0 &&
                         (uVar21 = uStack_168, uStack_128 != 0)))) ||
                       ((longlong)uStack_f0 < (longlong)(uVar21 + 8))) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = uStack_f0 - (uStack_f0 - uVar21 & 7);
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
                        } while (uVar21 < uVar14);
                      }
                      else {
                        do {
                          auVar28 = lddqu(auVar28,*(undefined1 (*) [16])(lVar22 + uVar21 * 2));
                          *(undefined1 (*) [16])(puStack_c8 + uVar21) = auVar28;
                          uVar21 = uVar21 + 8;
                        } while (uVar21 < uVar14);
                      }
                    }
                    for (; uVar14 < uStack_f0; uVar14 = uVar14 + 1) {
                      puStack_c8[uVar14] = *(undefined2 *)(lVar22 + uVar14 * 2);
                    }
                    goto LAB_14018d0b3;
                  }
                }
                lVar10 = 1;
                if (uStack_118 != 0) {
                  lVar10 = lStack_78 * lVar13 + lStack_90;
                  uVar21 = 0;
                  do {
                    uVar14 = uVar21;
                    puStack_c8[uVar14 * 2] = *(undefined2 *)(lVar10 + uVar14 * 4);
                    puStack_c8[uVar14 * 2 + 1] = *(undefined2 *)(lVar10 + 2 + uVar14 * 4);
                    uVar21 = uVar14 + 1;
                  } while (uVar21 < uStack_118);
                  lVar10 = uVar14 + 2 + uVar21;
                }
                uVar21 = lVar10 - 1;
                if (uVar21 < uStack_110) {
                  puStack_c8[uVar21] = *(undefined2 *)(lVar13 * lStack_78 + lStack_90 + uVar21 * 2);
                }
              }
LAB_14018d0b3:
              if (uVar8 == 1) {
                if (0 < lStack_108) {
                  if (((longlong)uStack_158 / 3 < 7) ||
                     ((param_11 - (longlong)puStack_c8 < 6 &&
                      (-(param_11 - (longlong)puStack_c8) < ((longlong)uStack_158 / 3) * 6)))) {
                    lVar13 = 1;
                    lVar10 = 0;
                    uVar3 = puStack_c8[2];
                    uVar21 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar14 = uVar21;
                        uVar21 = uVar14 + 1;
                        *(undefined2 *)(lVar10 + param_11) = *puStack_c8;
                        *(undefined2 *)(lVar10 + 2 + param_11) = puStack_c8[1];
                        *(undefined2 *)(lVar10 + 4 + param_11) = uVar3;
                        *(undefined2 *)(lVar10 + 6 + param_11) = *puStack_c8;
                        *(undefined2 *)(lVar10 + 8 + param_11) = puStack_c8[1];
                        *(undefined2 *)(lVar10 + 10 + param_11) = uVar3;
                        lVar10 = lVar10 + 0xc;
                      } while (uVar21 < uStack_140);
                      lVar13 = uVar14 + 2 + uVar21;
                    }
                    if (lVar13 - 1U < uStack_160) {
                      lVar13 = lVar13 * 3 + -3;
                      *(undefined2 *)(param_11 + lVar13 * 2) = *puStack_c8;
                      *(undefined2 *)(param_11 + 2 + lVar13 * 2) = puStack_c8[1];
                      *(undefined2 *)(param_11 + 4 + lVar13 * 2) = uVar3;
                    }
                  }
                  else {
                    lVar13 = 1;
                    lVar10 = 0;
                    uVar3 = *puStack_c8;
                    uVar4 = puStack_c8[1];
                    uVar5 = puStack_c8[2];
                    uVar21 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar14 = uVar21;
                        uVar21 = uVar14 + 1;
                        *(undefined2 *)(lVar10 + param_11) = uVar3;
                        *(undefined2 *)(lVar10 + 2 + param_11) = uVar4;
                        *(undefined2 *)(lVar10 + 4 + param_11) = uVar5;
                        *(undefined2 *)(lVar10 + 6 + param_11) = uVar3;
                        *(undefined2 *)(lVar10 + 8 + param_11) = uVar4;
                        *(undefined2 *)(lVar10 + 10 + param_11) = uVar5;
                        lVar10 = lVar10 + 0xc;
                      } while (uVar21 < uStack_140);
                      lVar13 = uVar14 + 2 + uVar21;
                    }
                    if (lVar13 - 1U < uStack_160) {
                      lVar13 = lVar13 * 3 + -3;
                      *(undefined2 *)(param_11 + lVar13 * 2) = uVar3;
                      *(undefined2 *)(param_11 + 2 + lVar13 * 2) = uVar4;
                      *(undefined2 *)(param_11 + 4 + lVar13 * 2) = uVar5;
                    }
                  }
                }
              }
              else if (uVar8 == 3) {
                if (0 < lStack_108) {
                  lVar13 = 1;
                  lVar22 = 0;
                  lVar10 = 0;
                  uVar21 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar14 = uVar21;
                      uVar21 = uVar14 + 1;
                      *(undefined2 *)(lVar22 + param_11) = *(undefined2 *)(lVar10 + -6 + lStack_150)
                      ;
                      *(undefined2 *)(lVar22 + 2 + param_11) =
                           *(undefined2 *)(lVar10 + -4 + lStack_150);
                      *(undefined2 *)(lVar22 + 4 + param_11) =
                           *(undefined2 *)(lVar10 + -2 + lStack_150);
                      *(undefined2 *)(lVar22 + 6 + param_11) =
                           *(undefined2 *)(lVar10 + -0xc + lStack_150);
                      *(undefined2 *)(lVar22 + 8 + param_11) =
                           *(undefined2 *)(lVar10 + -10 + lStack_150);
                      lVar13 = lVar10 + -8;
                      lVar10 = lVar10 + -0xc;
                      *(undefined2 *)(lVar22 + 10 + param_11) = *(undefined2 *)(lVar13 + lStack_150)
                      ;
                      lVar22 = lVar22 + 0xc;
                    } while (uVar21 < uStack_140);
                    lVar13 = uVar14 + 2 + uVar21;
                  }
                  if (lVar13 - 1U < uStack_160) {
                    lVar10 = -(lVar13 * 6 + -6);
                    lVar13 = lVar13 * 3 + -3;
                    *(undefined2 *)(param_11 + lVar13 * 2) =
                         *(undefined2 *)(lVar10 + -6 + lStack_150);
                    *(undefined2 *)(param_11 + 2 + lVar13 * 2) =
                         *(undefined2 *)(lVar10 + -4 + lStack_150);
                    *(undefined2 *)(param_11 + 4 + lVar13 * 2) =
                         *(undefined2 *)(lVar10 + -2 + lStack_150);
                  }
                }
              }
              else if ((uVar8 == 6) && (0 < lStack_108)) {
                if (6 < (longlong)uStack_158 / 3) {
                  lVar13 = ((longlong)uStack_158 / 3) * 6;
                  lVar10 = (longlong)puVar26 + (2 - param_11);
                  if (((lVar13 <= lVar10) || (3 < -lVar10)) &&
                     ((1 < param_11 - (longlong)puVar26 ||
                      (lVar13 <= -(param_11 - (longlong)puVar26))))) {
                    lVar13 = 1;
                    uVar17 = *puVar26;
                    lVar10 = 0;
                    uVar24 = puVar26[1];
                    uVar20 = puVar26[2];
                    uVar21 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar14 = uVar21;
                        uVar21 = uVar14 + 1;
                        *(ushort *)(lVar10 + param_11) = uVar17;
                        *(ushort *)(lVar10 + 2 + param_11) = uVar24;
                        *(ushort *)(lVar10 + 4 + param_11) = uVar20;
                        *(ushort *)(lVar10 + 6 + param_11) = uVar17;
                        *(ushort *)(lVar10 + 8 + param_11) = uVar24;
                        *(ushort *)(lVar10 + 10 + param_11) = uVar20;
                        lVar10 = lVar10 + 0xc;
                      } while (uVar21 < uStack_140);
                      lVar13 = uVar14 + 2 + uVar21;
                    }
                    if (lVar13 - 1U < uStack_160) {
                      lVar13 = lVar13 * 3 + -3;
                      *(ushort *)(param_11 + lVar13 * 2) = uVar17;
                      *(ushort *)(param_11 + 2 + lVar13 * 2) = uVar24;
                      *(ushort *)(param_11 + 4 + lVar13 * 2) = uVar20;
                    }
                    goto LAB_14018d5c0;
                  }
                }
                lVar13 = 1;
                uVar21 = 0;
                if (uStack_140 != 0) {
                  do {
                    uVar14 = uVar21;
                    *(ushort *)(param_11 + uVar14 * 0xc) = *puVar26;
                    uVar21 = uVar14 + 1;
                    *(ushort *)(param_11 + 2 + uVar14 * 0xc) = puVar26[1];
                    *(ushort *)(param_11 + 4 + uVar14 * 0xc) = puVar26[2];
                    *(ushort *)(param_11 + 6 + uVar14 * 0xc) = *puVar26;
                    *(ushort *)(param_11 + 8 + uVar14 * 0xc) = puVar26[1];
                    *(ushort *)(param_11 + 10 + uVar14 * 0xc) = puVar26[2];
                  } while (uVar21 < uStack_140);
                  lVar13 = uVar14 + 2 + uVar21;
                }
                if (lVar13 - 1U < uStack_160) {
                  lVar13 = lVar13 * 3 + -3;
                  *(ushort *)(param_11 + lVar13 * 2) = *puVar26;
                  *(ushort *)(param_11 + 2 + lVar13 * 2) = puVar26[1];
                  *(ushort *)(param_11 + 4 + lVar13 * 2) = puVar26[2];
                }
              }
LAB_14018d5c0:
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
              (*pcStack_d0)(puStack_c8,lVar11,uVar12);
              uVar9 = uVar9 - uVar12;
              lVar18 = lVar18 + lStack_108 * 2;
              lVar11 = lVar11 + lStack_108 * 4;
            }
            if (uStack_b8 == 0) {
              if ((longlong)uVar12 < (longlong)uVar9) {
                lVar13 = uVar9 - uVar12;
                puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
                (*pcStack_d0)(lVar18,lVar11,lVar13);
                lVar18 = lVar18 + lVar13 * 6;
                lVar11 = lVar11 + lVar13 * 0xc;
              }
              if (0 < (longlong)uStack_f0) {
                lVar13 = 1;
                if (uStack_e8 != 0) {
                  uVar9 = 0;
                  do {
                    uVar21 = uVar9;
                    *(undefined2 *)(param_11 + uVar21 * 4) =
                         *(undefined2 *)(lStack_100 + lVar18 + uVar21 * 4);
                    *(undefined2 *)(param_11 + 2 + uVar21 * 4) =
                         *(undefined2 *)(lStack_100 + lVar18 + 2 + uVar21 * 4);
                    uVar9 = uVar21 + 1;
                  } while (uVar9 < uStack_e8);
                  lVar13 = uVar21 + 2 + uVar9;
                }
                uVar9 = lVar13 - 1;
                if (uVar9 < uStack_e0) {
                  *(undefined2 *)(param_11 + uVar9 * 2) =
                       *(undefined2 *)(lVar18 + lStack_100 + uVar9 * 2);
                }
              }
              if (uVar8 == 1) {
                if (0 < lStack_108) {
                  if ((longlong)uStack_158 / 3 < 7) {
                    lVar13 = 1;
                    uVar9 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar21 = uVar9;
                        *(undefined2 *)(lStack_150 + -6 + uVar21 * 0xc) =
                             *(undefined2 *)(lStack_150 + -0xc);
                        uVar9 = uVar21 + 1;
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
                      } while (uVar9 < uStack_140);
                      lVar13 = uVar21 + 2 + uVar9;
                    }
                    if (lVar13 - 1U < uStack_160) {
                      lVar13 = lVar13 * 3 + -3;
                      *(undefined2 *)(lStack_150 + -6 + lVar13 * 2) =
                           *(undefined2 *)(lStack_150 + -0xc);
                      *(undefined2 *)(lStack_150 + -4 + lVar13 * 2) =
                           *(undefined2 *)(lStack_150 + -10);
                      *(undefined2 *)(lStack_150 + -2 + lVar13 * 2) =
                           *(undefined2 *)(lStack_150 + -8);
                    }
                  }
                  else {
                    lVar13 = 1;
                    lVar18 = 0;
                    uVar3 = *(undefined2 *)(lStack_150 + -0xc);
                    uVar4 = *(undefined2 *)(lStack_150 + -10);
                    uVar5 = *(undefined2 *)(lStack_150 + -8);
                    uVar9 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar21 = uVar9;
                        uVar9 = uVar21 + 1;
                        *(undefined2 *)(lVar18 + -6 + lStack_150) = uVar3;
                        *(undefined2 *)(lVar18 + -4 + lStack_150) = uVar4;
                        *(undefined2 *)(lVar18 + -2 + lStack_150) = uVar5;
                        *(undefined2 *)(lVar18 + lStack_150) = uVar3;
                        *(undefined2 *)(lVar18 + 2 + lStack_150) = uVar4;
                        *(undefined2 *)(lVar18 + 4 + lStack_150) = uVar5;
                        lVar18 = lVar18 + 0xc;
                      } while (uVar9 < uStack_140);
                      lVar13 = uVar21 + 2 + uVar9;
                    }
                    if (lVar13 - 1U < uStack_160) {
                      lVar13 = lVar13 * 3 + -3;
                      *(undefined2 *)(lStack_150 + -6 + lVar13 * 2) = uVar3;
                      *(undefined2 *)(lStack_150 + -4 + lVar13 * 2) = uVar4;
                      *(undefined2 *)(lStack_150 + -2 + lVar13 * 2) = uVar5;
                    }
                  }
                }
              }
              else if (uVar8 == 3) {
                if (0 < lStack_108) {
                  lVar13 = 1;
                  lVar10 = 0;
                  lVar18 = 0;
                  uVar9 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar21 = uVar9;
                      uVar9 = uVar21 + 1;
                      *(undefined2 *)(lVar10 + -6 + lStack_150) =
                           *(undefined2 *)(lVar18 + -0x12 + lStack_150);
                      *(undefined2 *)(lVar10 + -4 + lStack_150) =
                           *(undefined2 *)(lVar18 + -0x10 + lStack_150);
                      *(undefined2 *)(lVar10 + -2 + lStack_150) =
                           *(undefined2 *)(lVar18 + -0xe + lStack_150);
                      *(undefined2 *)(lVar10 + lStack_150) =
                           *(undefined2 *)(lVar18 + -0x18 + lStack_150);
                      *(undefined2 *)(lVar10 + 2 + lStack_150) =
                           *(undefined2 *)(lVar18 + -0x16 + lStack_150);
                      lVar13 = lVar18 + -0x14;
                      lVar18 = lVar18 + -0xc;
                      *(undefined2 *)(lVar10 + 4 + lStack_150) =
                           *(undefined2 *)(lVar13 + lStack_150);
                      lVar10 = lVar10 + 0xc;
                    } while (uVar9 < uStack_140);
                    lVar13 = uVar21 + 2 + uVar9;
                  }
                  if (lVar13 - 1U < uStack_160) {
                    lVar18 = -(lVar13 * 6 + -6);
                    lVar13 = lVar13 * 3 + -3;
                    *(undefined2 *)(lStack_150 + -6 + lVar13 * 2) =
                         *(undefined2 *)(lVar18 + -0x12 + lStack_150);
                    *(undefined2 *)(lStack_150 + -4 + lVar13 * 2) =
                         *(undefined2 *)(lVar18 + -0x10 + lStack_150);
                    *(undefined2 *)(lStack_150 + -2 + lVar13 * 2) =
                         *(undefined2 *)(lVar18 + -0xe + lStack_150);
                  }
                }
              }
              else if ((uVar8 == 6) && (0 < lStack_108)) {
                if (6 < (longlong)uStack_158 / 3) {
                  lVar13 = ((longlong)uStack_158 / 3) * 6;
                  lVar18 = (longlong)puVar26 + (2 - (lStack_150 + -6));
                  if (((lVar13 <= lVar18) || (3 < -lVar18)) &&
                     ((lVar18 = (lStack_150 + -6) - (longlong)puVar26, 1 < lVar18 ||
                      (lVar13 <= -lVar18)))) {
                    lVar13 = 1;
                    uVar17 = *puVar26;
                    lVar18 = 0;
                    uVar24 = puVar26[1];
                    uVar20 = puVar26[2];
                    uVar9 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar21 = uVar9;
                        uVar9 = uVar21 + 1;
                        *(ushort *)(lVar18 + -6 + lStack_150) = uVar17;
                        *(ushort *)(lVar18 + -4 + lStack_150) = uVar24;
                        *(ushort *)(lVar18 + -2 + lStack_150) = uVar20;
                        *(ushort *)(lVar18 + lStack_150) = uVar17;
                        *(ushort *)(lVar18 + 2 + lStack_150) = uVar24;
                        *(ushort *)(lVar18 + 4 + lStack_150) = uVar20;
                        lVar18 = lVar18 + 0xc;
                      } while (uVar9 < uStack_140);
                      lVar13 = uVar21 + 2 + uVar9;
                    }
                    if (lVar13 - 1U < uStack_160) {
                      lVar13 = lVar13 * 3 + -3;
                      *(ushort *)(lStack_150 + -6 + lVar13 * 2) = uVar17;
                      *(ushort *)(lStack_150 + -4 + lVar13 * 2) = uVar24;
                      *(ushort *)(lStack_150 + -2 + lVar13 * 2) = uVar20;
                    }
                    goto LAB_14018db65;
                  }
                }
                lVar13 = 1;
                uVar9 = 0;
                if (uStack_140 != 0) {
                  do {
                    uVar21 = uVar9;
                    *(ushort *)(lStack_150 + -6 + uVar21 * 0xc) = *puVar26;
                    uVar9 = uVar21 + 1;
                    *(ushort *)(lStack_150 + -4 + uVar21 * 0xc) = puVar26[1];
                    *(ushort *)(lStack_150 + -2 + uVar21 * 0xc) = puVar26[2];
                    *(ushort *)(lStack_150 + uVar21 * 0xc) = *puVar26;
                    *(ushort *)(lStack_150 + 2 + uVar21 * 0xc) = puVar26[1];
                    *(ushort *)(lStack_150 + 4 + uVar21 * 0xc) = puVar26[2];
                  } while (uVar9 < uStack_140);
                  lVar13 = uVar21 + 2 + uVar9;
                }
                if (lVar13 - 1U < uStack_160) {
                  lVar13 = lVar13 * 3 + -3;
                  *(ushort *)(lStack_150 + -6 + lVar13 * 2) = *puVar26;
                  *(ushort *)(lStack_150 + -4 + lVar13 * 2) = puVar26[1];
                  *(ushort *)(lStack_150 + -2 + lVar13 * 2) = puVar26[2];
                }
              }
LAB_14018db65:
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
              uVar9 = (*pcStack_d0)(puStack_c8,lVar11,uVar12,param_9);
              auVar28._8_8_ = extraout_XMM0_Qb_00;
              auVar28._0_8_ = extraout_XMM0_Qa;
            }
            else {
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar25);
              uVar9 = (*pcStack_d0)(lVar18,lVar11,uVar9,param_9);
              auVar28._8_8_ = extraout_XMM0_Qb_02;
              auVar28._0_8_ = extraout_XMM0_Qa_01;
            }
          }
        }
        iVar16 = (int)uVar15;
        uVar15 = uVar15 + 1;
        lVar13 = (longlong)iVar16 + 1;
      } while (uVar15 < uVar12);
LAB_14018dd5a:
      if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
        return uVar9;
      }
      goto LAB_14018c7bc;
    }
  }
  uVar8 = param_7 & 0xf;
  uVar9 = (ulonglong)uVar8;
  if (uVar8 == 6) {
    uVar12 = 0;
    lVar13 = 0;
    uVar9 = (ulonglong)*param_8;
    fVar30 = (float)*param_8;
    fVar29 = (float)param_8[1];
    fVar27 = (float)param_8[2];
    if (0 < iVar16) {
      uVar19 = *param_5;
      uVar15 = uVar19 * 3 + 2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      uVar9 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      do {
        if (0 < (longlong)(uVar19 * 3)) {
          lVar11 = 1;
          lVar18 = 0;
          if (uVar15 / 6 != 0) {
            lVar11 = param_3 + lVar13;
            uVar9 = 0;
            do {
              uVar21 = uVar9;
              uVar9 = uVar21 + 1;
              *(float *)(lVar18 + lVar11) = fVar30;
              *(float *)(lVar18 + 4 + lVar11) = fVar29;
              *(float *)(lVar18 + 8 + lVar11) = fVar27;
              *(float *)(lVar18 + 0xc + lVar11) = fVar30;
              *(float *)(lVar18 + 0x10 + lVar11) = fVar29;
              *(float *)(lVar18 + 0x14 + lVar11) = fVar27;
              lVar18 = lVar18 + 0x18;
            } while (uVar9 < uVar15 / 6);
            lVar11 = uVar21 + 2 + uVar9;
          }
          uVar9 = lVar11 - 1;
          if (uVar9 < uVar15 / 3) {
            uVar9 = lVar11 * 3 - 3;
            lVar11 = param_3 + uVar9 * 4;
            *(float *)(lVar11 + lVar13) = fVar30;
            *(float *)(lVar11 + 4 + lVar13) = fVar29;
            *(float *)(lVar11 + 8 + lVar13) = fVar27;
          }
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + param_4;
      } while (uVar12 < (ulonglong)(longlong)iVar16);
    }
    if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return uVar9;
    }
  }
  else if (uVar8 == 1) {
    uVar9 = 0;
    if (0 < iVar16) {
      lVar13 = param_4 * iVar16 + param_3;
      uVar12 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar12) {
          if ((longlong)uVar12 < 4) {
LAB_14018cae5:
            uVar21 = 0;
          }
          else {
            uVar19 = param_4 * uVar9 + param_3;
            uVar15 = uVar19 & 0xf;
            if (uVar15 != 0) {
              if ((uVar19 & 3) != 0) goto LAB_14018cae5;
              uVar15 = 0x10 - uVar15 >> 2;
            }
            if ((longlong)uVar12 < (longlong)(uVar15 + 4)) goto LAB_14018cae5;
            uVar14 = 0;
            uVar21 = uVar12 - (uVar12 - uVar15 & 3);
            if (uVar15 != 0) {
              do {
                *(undefined4 *)(uVar19 + uVar14 * 4) = *(undefined4 *)(lVar13 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar15);
            }
            if ((lVar13 + uVar15 * 4 & 0xf) == 0) {
              do {
                *(undefined1 (*) [16])(uVar19 + uVar15 * 4) =
                     *(undefined1 (*) [16])(lVar13 + uVar15 * 4);
                uVar15 = uVar15 + 4;
              } while (uVar15 < uVar21);
            }
            else {
              do {
                *(undefined1 (*) [16])(uVar19 + uVar15 * 4) =
                     *(undefined1 (*) [16])(lVar13 + uVar15 * 4);
                uVar15 = uVar15 + 4;
              } while (uVar15 < uVar21);
            }
          }
          if (uVar21 < uVar12) {
            do {
              *(undefined4 *)(param_4 * uVar9 + param_3 + uVar21 * 4) =
                   *(undefined4 *)(lVar13 + uVar21 * 4);
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar12);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)iVar16);
    }
    if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return uVar9;
    }
  }
  else {
    if (uVar8 == 3) {
      puStack_1a8 = &uStack_168;
      uStack_168 = *param_5;
      uStack_160 = param_5[1];
      iStack_1a0 = param_6;
      puStack_190 = param_8;
      uStack_188 = param_9;
      lStack_178 = param_11;
      uStack_180 = param_10;
      uStack_198 = param_7;
      uVar9 = FUN_1406202e0(param_1,lStack_78,(longlong)iVar16,param_3);
      lVar13 = 1;
      uVar12 = 0;
      if (1 < iVar16) {
        uVar9 = *param_5;
        lVar11 = ((longlong)(int)param_10 + -1) * param_4 + param_3;
        uVar15 = uVar9 * 3;
        do {
          if (0 < (longlong)uVar15) {
            if ((longlong)uVar15 < 4) {
LAB_14018c984:
              uVar9 = 0;
            }
            else {
              uVar19 = param_3 + param_4 * lVar13;
              uVar21 = uVar19 & 0xf;
              if (uVar21 != 0) {
                if ((uVar19 & 3) != 0) goto LAB_14018c984;
                uVar21 = 0x10 - uVar21 >> 2;
              }
              if ((longlong)uVar15 < (longlong)(uVar21 + 4)) goto LAB_14018c984;
              lVar18 = lVar11 - param_4 * lVar13;
              uVar14 = 0;
              uVar9 = uVar15 - (uVar15 - uVar21 & 3);
              if (uVar21 != 0) {
                do {
                  *(undefined4 *)(uVar19 + uVar14 * 4) = *(undefined4 *)(lVar18 + uVar14 * 4);
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar21);
              }
              if ((lVar18 + uVar21 * 4 & 0xf) == 0) {
                do {
                  puVar1 = (undefined8 *)(lVar18 + uVar21 * 4);
                  uVar7 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar19 + uVar21 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar7;
                  uVar21 = uVar21 + 4;
                } while (uVar21 < uVar9);
              }
              else {
                do {
                  puVar1 = (undefined8 *)(lVar18 + uVar21 * 4);
                  uVar7 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar19 + uVar21 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar7;
                  uVar21 = uVar21 + 4;
                } while (uVar21 < uVar9);
              }
            }
            if (uVar9 < uVar15) {
              do {
                *(undefined4 *)(param_3 + lVar13 * param_4 + uVar9 * 4) =
                     *(undefined4 *)((lVar11 - lVar13 * param_4) + uVar9 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar15);
            }
          }
          lVar13 = uVar12 + 2;
          uVar12 = uVar12 + 1;
        } while (uVar12 < (ulonglong)(longlong)(iVar16 + -1));
      }
    }
    if ((uStack_50 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return uVar9;
    }
  }
LAB_14018c7bc:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

