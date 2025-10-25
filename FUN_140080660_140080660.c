
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140080660(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,ushort *param_8,
                       undefined8 param_9,int param_10,longlong param_11)

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
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  ushort uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ushort uVar23;
  int iVar24;
  ushort *puVar25;
  float fVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar28;
  float fVar29;
  undefined1 auStack_1e8 [32];
  ulonglong *puStack_1c8;
  int iStack_1c0;
  uint uStack_1b8;
  ushort *puStack_1b0;
  undefined8 uStack_1a8;
  int iStack_1a0;
  longlong lStack_198;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  undefined2 *puStack_d0;
  code *pcStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  ulonglong *puStack_b0;
  longlong lStack_a8;
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
  
  iVar16 = param_10 >> 1;
  lVar15 = 0;
  uVar9 = _DAT_1436b4680 ^ (ulonglong)auStack_1e8;
  lStack_70 = param_2;
  uStack_50 = uVar9;
  if (iVar16 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_140081e58;
  }
  else {
    uStack_68 = (ulonglong)iVar16;
    lVar13 = param_4 * uStack_68 + param_3;
    uStack_188 = CONCAT44(uStack_188._4_4_,iVar16);
    lStack_98 = param_3;
    lStack_90 = param_4;
    lStack_78 = param_1;
    do {
      puStack_1c8 = &uStack_88;
      uStack_88 = *param_5;
      uStack_80 = param_5[1];
      iStack_1c0 = param_6;
      uStack_1b8 = param_7;
      puStack_1b0 = param_8;
      uStack_1a8 = param_9;
      iStack_1a0 = param_10;
      lStack_198 = param_11;
      auVar27._0_8_ = FUN_1406d0400(lStack_78,lStack_70,lVar15,lVar13);
      auVar27._8_8_ = extraout_XMM0_Qb;
      lVar15 = lVar15 + 1;
      lVar13 = lVar13 + lStack_90;
    } while (lVar15 < (longlong)uStack_68);
    param_1 = lStack_78;
    param_3 = lStack_98;
    param_4 = lStack_90;
    iVar16 = (int)uStack_188;
    if ((param_7 & 0x10) != 0) {
      lStack_160 = (longlong)param_10;
      lStack_78 = lStack_78 - lStack_70 * uStack_68;
      uStack_140 = 0;
      uStack_f8 = 0;
      uStack_180 = lStack_160 * 3;
      lStack_a8 = lStack_160 + -1;
      uStack_148 = CONCAT44(uStack_148._4_4_,param_7) & 0xffffffff0000000f;
      lStack_160 = lStack_160 * 6;
      lStack_158 = param_11 + lStack_160;
      uStack_e0 = ((longlong)(uStack_180 - 1) / 3) * 3;
      uStack_e8 = uStack_e0 >> 1;
      uStack_f0 = uStack_180 - 3;
      uStack_a0 = param_7 & 0xf0;
      lStack_d8 = -uStack_68;
      lStack_100 = uStack_68 * 2;
      lStack_168 = uStack_68 * 3;
      lStack_110 = uStack_68 * 6;
      puStack_d0 = (undefined2 *)(param_11 + lStack_110);
      uStack_138 = (ulonglong)puStack_d0 & 0xf;
      pcStack_c8 = *(code **)(&UNK_143086940 + (longlong)param_6 * 8);
      uStack_b8 = param_7 & 0x80;
      uStack_c0 = param_7 & 0x40;
      uStack_188 = lStack_168 + 2;
      uStack_150 = uStack_188 / 6;
      lStack_108 = uStack_68 * -6;
      lStack_118 = uStack_68 * 0xc;
      uStack_130 = (ulonglong)puStack_d0 & 1;
      uStack_128 = (longlong)(param_10 * 3) - 3;
      uStack_120 = uStack_128 >> 1;
      uStack_170 = uStack_188 / 3;
      uStack_178 = 0x10 - uStack_138 >> 1;
      puStack_b0 = param_5;
      iVar16 = (int)uStack_148;
      uVar11 = 0;
      lVar15 = 0;
      do {
        uVar9 = lStack_90 * uVar11 + lStack_98;
        lVar13 = lStack_70 * uVar11 + lStack_78;
        auStack_58[0] = 0;
        auStack_58[1] = 0;
        auStack_58[2] = 0;
        if (uStack_a0 == 0xf0) {
          puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,param_10);
          uVar9 = (*pcStack_c8)(lVar13,uVar9,*puStack_b0,param_9);
          auVar27._8_8_ = extraout_XMM0_Qb_03;
          auVar27._0_8_ = extraout_XMM0_Qa_02;
        }
        else {
          puVar25 = auStack_58;
          if (iVar16 == 6) {
            puVar25 = param_8;
          }
          uVar14 = *puStack_b0;
          if ((longlong)*puStack_b0 < lStack_a8) {
            uVar20 = 0;
            lVar18 = 0;
            lVar15 = -uStack_68;
            if (lStack_d8 < (longlong)(uStack_68 + uVar14)) {
              do {
                lVar21 = lVar15;
                if (lVar15 < 0) {
                  if (param_7 != 0xf0) {
                    if (iVar16 == 6) {
                      if (uStack_c0 == 0) goto LAB_140081dd1;
                    }
                    else {
                      if (iVar16 != 1) goto LAB_140081d44;
LAB_140081ebd:
                      lVar21 = 0;
                      if (uStack_c0 != 0) {
                        lVar21 = lVar15;
                      }
                    }
                  }
LAB_140081db5:
                  uVar10 = *(ushort *)(lVar13 + lVar21 * 6);
                  uVar23 = *(ushort *)(lVar13 + 2 + lVar21 * 6);
                  uVar17 = *(ushort *)(lVar13 + 4 + lVar21 * 6);
                }
                else {
                  if ((lVar15 < (longlong)uVar14) || (param_7 == 0xf0)) goto LAB_140081db5;
                  if (iVar16 != 6) {
                    if (iVar16 == 1) {
                      if (lVar15 < 0) goto LAB_140081ebd;
                      if (uStack_b8 == 0) {
                        lVar21 = uVar14 - 1;
                      }
                    }
                    else {
LAB_140081d44:
                      if (iVar16 == 3) {
                        if ((longlong)uVar14 < 2) {
                          if (lVar15 < 0) {
                            if (uStack_c0 == 0) {
                              lVar21 = -lVar15;
                              if (uStack_b8 == 0) {
                                lVar21 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar15) && (uStack_b8 == 0)) &&
                                  (lVar21 = -lVar15, uStack_c0 == 0)) {
                            lVar21 = 0;
                          }
                        }
                        else {
                          if (lVar15 < 0) goto LAB_140081ed0;
                          if ((longlong)uVar14 <= lVar15) {
                            while (uStack_b8 == 0) {
                              for (lVar21 = (uVar14 - 1) * 2 - lVar21; lVar21 < 0; lVar21 = -lVar21)
                              {
LAB_140081ed0:
                                if (uStack_c0 != 0) goto LAB_140081db5;
                              }
                              if (lVar21 < (longlong)uVar14) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_140081db5;
                  }
                  if (uStack_b8 != 0) goto LAB_140081db5;
LAB_140081dd1:
                  uVar10 = *puVar25;
                  uVar23 = puVar25[1];
                  uVar17 = puVar25[2];
                }
                uVar20 = uVar20 + 1;
                lVar15 = lVar15 + 1;
                *(ushort *)(lVar18 + param_11) = uVar10;
                *(ushort *)(lVar18 + 2 + param_11) = uVar23;
                *(ushort *)(lVar18 + 4 + param_11) = uVar17;
                lVar18 = lVar18 + 6;
                uStack_148 = uVar9;
                uStack_f8 = uVar11;
              } while (uVar20 < lStack_100 + uVar14);
            }
            puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,param_10);
            uVar9 = (*pcStack_c8)(puStack_d0,uVar9,uVar14,param_9);
            auVar27._8_8_ = extraout_XMM0_Qb_01;
            auVar27._0_8_ = extraout_XMM0_Qa_00;
          }
          else {
            if (uStack_c0 == 0) {
              if (0 < (longlong)uStack_f0) {
                if (6 < (longlong)uStack_f0) {
                  lVar21 = lStack_70 * lVar15 + lStack_78;
                  lVar18 = uStack_180 * 2 + -6;
                  if ((lVar18 <= (longlong)puStack_d0 - lVar21) ||
                     (lVar18 <= -((longlong)puStack_d0 - lVar21))) {
                    if ((((longlong)uStack_f0 < 8) ||
                        ((uVar20 = uStack_138, uStack_138 != 0 &&
                         (uVar20 = uStack_178, uStack_130 != 0)))) ||
                       ((longlong)uStack_f0 < (longlong)(uVar20 + 8))) {
                      uVar22 = 0;
                    }
                    else {
                      uVar19 = 0;
                      uVar22 = uStack_f0 - (uStack_f0 - uVar20 & 7);
                      if (uVar20 != 0) {
                        do {
                          puStack_d0[uVar19] = *(undefined2 *)(lVar21 + uVar19 * 2);
                          uVar19 = uVar19 + 1;
                        } while (uVar19 < uVar20);
                      }
                      if ((uVar20 * 2 + lVar21 & 0xf) == 0) {
                        do {
                          puVar1 = (undefined8 *)(lVar21 + uVar20 * 2);
                          uVar7 = puVar1[1];
                          *(undefined8 *)(puStack_d0 + uVar20) = *puVar1;
                          *(undefined8 *)((longlong)(puStack_d0 + uVar20) + 8) = uVar7;
                          uVar20 = uVar20 + 8;
                        } while (uVar20 < uVar22);
                      }
                      else {
                        do {
                          auVar27 = lddqu(auVar27,*(undefined1 (*) [16])(lVar21 + uVar20 * 2));
                          *(undefined1 (*) [16])(puStack_d0 + uVar20) = auVar27;
                          uVar20 = uVar20 + 8;
                        } while (uVar20 < uVar22);
                      }
                    }
                    for (; uVar22 < uStack_f0; uVar22 = uVar22 + 1) {
                      puStack_d0[uVar22] = *(undefined2 *)(lVar21 + uVar22 * 2);
                    }
                    goto LAB_1400811b8;
                  }
                }
                lVar18 = 1;
                uVar20 = 0;
                if (uStack_120 != 0) {
                  lVar18 = lStack_70 * lVar15 + lStack_78;
                  do {
                    puStack_d0[uVar20 * 2] = *(undefined2 *)(lVar18 + uVar20 * 4);
                    puStack_d0[uVar20 * 2 + 1] = *(undefined2 *)(lVar18 + 2 + uVar20 * 4);
                    uVar20 = uVar20 + 1;
                  } while (uVar20 < uStack_120);
                  lVar18 = uVar20 * 2 + 1;
                }
                uVar20 = lVar18 - 1;
                if (uVar20 < uStack_128) {
                  puStack_d0[uVar20] = *(undefined2 *)(lVar15 * lStack_70 + lStack_78 + uVar20 * 2);
                }
              }
LAB_1400811b8:
              if (iVar16 == 1) {
                if (0 < lStack_168) {
                  if (((longlong)uStack_188 / 3 < 7) ||
                     ((param_11 - (longlong)puStack_d0 < 6 &&
                      (-(param_11 - (longlong)puStack_d0) < ((longlong)uStack_188 / 3) * 6)))) {
                    lVar18 = 1;
                    lVar15 = 0;
                    uVar3 = puStack_d0[2];
                    uVar20 = 0;
                    if (uStack_150 != 0) {
                      do {
                        uVar20 = uVar20 + 1;
                        *(undefined2 *)(lVar15 + param_11) = *puStack_d0;
                        *(undefined2 *)(lVar15 + 2 + param_11) = puStack_d0[1];
                        *(undefined2 *)(lVar15 + 4 + param_11) = uVar3;
                        *(undefined2 *)(lVar15 + 6 + param_11) = *puStack_d0;
                        *(undefined2 *)(lVar15 + 8 + param_11) = puStack_d0[1];
                        *(undefined2 *)(lVar15 + 10 + param_11) = uVar3;
                        lVar15 = lVar15 + 0xc;
                      } while (uVar20 < uStack_150);
                      lVar18 = uVar20 * 2 + 1;
                    }
                    uVar20 = lVar18 - 1;
                    if (uVar20 < uStack_170) {
                      *(undefined2 *)(param_11 + uVar20 * 6) = *puStack_d0;
                      *(undefined2 *)(param_11 + 2 + uVar20 * 6) = puStack_d0[1];
                      *(undefined2 *)(param_11 + 4 + uVar20 * 6) = uVar3;
                    }
                  }
                  else {
                    uVar20 = 0;
                    lVar18 = 1;
                    lVar15 = 0;
                    uVar3 = *puStack_d0;
                    uVar4 = puStack_d0[1];
                    uVar5 = puStack_d0[2];
                    if (uStack_150 != 0) {
                      do {
                        uVar20 = uVar20 + 1;
                        *(undefined2 *)(lVar15 + param_11) = uVar3;
                        *(undefined2 *)(lVar15 + 2 + param_11) = uVar4;
                        *(undefined2 *)(lVar15 + 4 + param_11) = uVar5;
                        *(undefined2 *)(lVar15 + 6 + param_11) = uVar3;
                        *(undefined2 *)(lVar15 + 8 + param_11) = uVar4;
                        *(undefined2 *)(lVar15 + 10 + param_11) = uVar5;
                        lVar15 = lVar15 + 0xc;
                      } while (uVar20 < uStack_150);
                      lVar18 = uVar20 * 2 + 1;
                    }
                    uVar20 = lVar18 - 1;
                    if (uVar20 < uStack_170) {
                      *(undefined2 *)(param_11 + uVar20 * 6) = uVar3;
                      *(undefined2 *)(param_11 + 2 + uVar20 * 6) = uVar4;
                      *(undefined2 *)(param_11 + 4 + uVar20 * 6) = uVar5;
                    }
                  }
                }
              }
              else if (iVar16 == 3) {
                if (0 < lStack_168) {
                  uVar20 = 0;
                  lVar21 = 1;
                  lVar18 = 0;
                  lVar15 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar20 = uVar20 + 1;
                      *(undefined2 *)(lVar18 + param_11) = *(undefined2 *)(lVar15 + -6 + lStack_158)
                      ;
                      *(undefined2 *)(lVar18 + 2 + param_11) =
                           *(undefined2 *)(lVar15 + -4 + lStack_158);
                      *(undefined2 *)(lVar18 + 4 + param_11) =
                           *(undefined2 *)(lVar15 + -2 + lStack_158);
                      *(undefined2 *)(lVar18 + 6 + param_11) =
                           *(undefined2 *)(lVar15 + -0xc + lStack_158);
                      *(undefined2 *)(lVar18 + 8 + param_11) =
                           *(undefined2 *)(lVar15 + -10 + lStack_158);
                      lVar21 = lVar15 + -8;
                      lVar15 = lVar15 + -0xc;
                      *(undefined2 *)(lVar18 + 10 + param_11) = *(undefined2 *)(lVar21 + lStack_158)
                      ;
                      lVar18 = lVar18 + 0xc;
                    } while (uVar20 < uStack_150);
                    lVar21 = uVar20 * 2 + 1;
                  }
                  uVar20 = lVar21 - 1;
                  if (uVar20 < uStack_170) {
                    lVar15 = uVar20 * -6;
                    *(undefined2 *)(param_11 + uVar20 * 6) =
                         *(undefined2 *)(lVar15 + -6 + lStack_158);
                    *(undefined2 *)(param_11 + 2 + uVar20 * 6) =
                         *(undefined2 *)(lVar15 + -4 + lStack_158);
                    *(undefined2 *)(param_11 + 4 + uVar20 * 6) =
                         *(undefined2 *)(lVar15 + -2 + lStack_158);
                  }
                }
              }
              else if ((iVar16 == 6) && (0 < lStack_168)) {
                if (6 < (longlong)uStack_188 / 3) {
                  lVar18 = ((longlong)uStack_188 / 3) * 6;
                  lVar15 = (longlong)puVar25 + (2 - param_11);
                  if (((lVar18 <= lVar15) || (3 < -lVar15)) &&
                     ((1 < param_11 - (longlong)puVar25 ||
                      (lVar18 <= -(param_11 - (longlong)puVar25))))) {
                    uVar20 = 0;
                    lVar18 = 1;
                    uVar10 = *puVar25;
                    lVar15 = 0;
                    uVar23 = puVar25[1];
                    uVar17 = puVar25[2];
                    if (uStack_150 != 0) {
                      do {
                        uVar20 = uVar20 + 1;
                        *(ushort *)(lVar15 + param_11) = uVar10;
                        *(ushort *)(lVar15 + 2 + param_11) = uVar23;
                        *(ushort *)(lVar15 + 4 + param_11) = uVar17;
                        *(ushort *)(lVar15 + 6 + param_11) = uVar10;
                        *(ushort *)(lVar15 + 8 + param_11) = uVar23;
                        *(ushort *)(lVar15 + 10 + param_11) = uVar17;
                        lVar15 = lVar15 + 0xc;
                      } while (uVar20 < uStack_150);
                      lVar18 = uVar20 * 2 + 1;
                    }
                    uVar20 = lVar18 - 1;
                    if (uVar20 < uStack_170) {
                      *(ushort *)(param_11 + uVar20 * 6) = uVar10;
                      *(ushort *)(param_11 + 2 + uVar20 * 6) = uVar23;
                      *(ushort *)(param_11 + 4 + uVar20 * 6) = uVar17;
                    }
                    goto LAB_140081682;
                  }
                }
                lVar15 = 1;
                uVar20 = 0;
                if (uStack_150 != 0) {
                  do {
                    uVar22 = uVar20 + 1;
                    lVar15 = uVar20 * 0xc;
                    *(ushort *)(param_11 + lVar15) = *puVar25;
                    *(ushort *)(param_11 + 2 + lVar15) = puVar25[1];
                    *(ushort *)(param_11 + 4 + lVar15) = puVar25[2];
                    *(ushort *)(param_11 + 6 + lVar15) = *puVar25;
                    *(ushort *)(param_11 + 8 + lVar15) = puVar25[1];
                    *(ushort *)(param_11 + 10 + lVar15) = puVar25[2];
                    uVar20 = uVar22;
                  } while (uVar22 < uStack_150);
                  lVar15 = uVar22 * 2 + 1;
                }
                uVar20 = lVar15 - 1;
                if (uVar20 < uStack_170) {
                  *(ushort *)(param_11 + uVar20 * 6) = *puVar25;
                  *(ushort *)(param_11 + 2 + uVar20 * 6) = puVar25[1];
                  *(ushort *)(param_11 + 4 + uVar20 * 6) = puVar25[2];
                }
              }
LAB_140081682:
              puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,param_10);
              (*pcStack_c8)(puStack_d0,uVar9,uStack_68,param_9);
              lVar13 = lVar13 + lStack_110;
              uVar9 = uVar9 + lStack_118;
              uVar14 = uVar14 - uStack_68;
            }
            if (uStack_b8 == 0) {
              if ((longlong)uStack_68 < (longlong)uVar14) {
                lVar15 = uVar14 - uStack_68;
                puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,param_10);
                (*pcStack_c8)(lVar13,uVar9,lVar15,param_9);
                lVar13 = lVar13 + lVar15 * 6;
                uVar9 = uVar9 + lVar15 * 0xc;
              }
              if (0 < (longlong)uStack_f0) {
                lVar15 = 1;
                uVar14 = 0;
                if (uStack_e8 != 0) {
                  do {
                    *(undefined2 *)(param_11 + uVar14 * 4) =
                         *(undefined2 *)(lVar13 + lStack_108 + uVar14 * 4);
                    *(undefined2 *)(param_11 + 2 + uVar14 * 4) =
                         *(undefined2 *)(lVar13 + lStack_108 + 2 + uVar14 * 4);
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < uStack_e8);
                  lVar15 = uVar14 * 2 + 1;
                }
                uVar14 = lVar15 - 1;
                if (uVar14 < uStack_e0) {
                  *(undefined2 *)(param_11 + uVar14 * 2) =
                       *(undefined2 *)(lVar13 + lStack_108 + uVar14 * 2);
                }
              }
              if (iVar16 == 1) {
                if (0 < lStack_168) {
                  if ((longlong)uStack_188 / 3 < 7) {
                    lVar15 = 1;
                    uVar14 = 0;
                    if (uStack_150 != 0) {
                      do {
                        uVar20 = uVar14 + 1;
                        lVar15 = uVar14 * 0xc;
                        *(undefined2 *)(lStack_158 + -6 + lVar15) =
                             *(undefined2 *)(lStack_158 + -0xc);
                        *(undefined2 *)(lStack_158 + -4 + lVar15) =
                             *(undefined2 *)(lStack_158 + -10);
                        *(undefined2 *)(lStack_158 + -2 + lVar15) = *(undefined2 *)(lStack_158 + -8)
                        ;
                        *(undefined2 *)(lStack_158 + lVar15) = *(undefined2 *)(lStack_158 + -0xc);
                        *(undefined2 *)(lStack_158 + 2 + lVar15) = *(undefined2 *)(lStack_158 + -10)
                        ;
                        *(undefined2 *)(lStack_158 + 4 + lVar15) = *(undefined2 *)(lStack_158 + -8);
                        uVar14 = uVar20;
                      } while (uVar20 < uStack_150);
                      lVar15 = uVar20 * 2 + 1;
                    }
                    uVar14 = lVar15 - 1;
                    if (uVar14 < uStack_170) {
                      *(undefined2 *)(lStack_158 + -6 + uVar14 * 6) =
                           *(undefined2 *)(lStack_158 + -0xc);
                      *(undefined2 *)(lStack_158 + -4 + uVar14 * 6) =
                           *(undefined2 *)(lStack_158 + -10);
                      *(undefined2 *)(lStack_158 + -2 + uVar14 * 6) =
                           *(undefined2 *)(lStack_158 + -8);
                    }
                  }
                  else {
                    uVar14 = 0;
                    lVar15 = 1;
                    uVar3 = *(undefined2 *)(lStack_158 + -0xc);
                    uVar4 = *(undefined2 *)(lStack_158 + -10);
                    uVar5 = *(undefined2 *)(lStack_158 + -8);
                    uVar20 = uVar14;
                    if (uStack_150 != 0) {
                      do {
                        uVar20 = uVar20 + 1;
                        *(undefined2 *)((uVar14 - 6) + lStack_158) = uVar3;
                        *(undefined2 *)((uVar14 - 4) + lStack_158) = uVar4;
                        *(undefined2 *)((uVar14 - 2) + lStack_158) = uVar5;
                        *(undefined2 *)(uVar14 + lStack_158) = uVar3;
                        *(undefined2 *)(uVar14 + 2 + lStack_158) = uVar4;
                        *(undefined2 *)(uVar14 + 4 + lStack_158) = uVar5;
                        uVar14 = uVar14 + 0xc;
                      } while (uVar20 < uStack_150);
                      lVar15 = uVar20 * 2 + 1;
                    }
                    uVar14 = lVar15 - 1;
                    if (uVar14 < uStack_170) {
                      *(undefined2 *)(lStack_158 + -6 + uVar14 * 6) = uVar3;
                      *(undefined2 *)(lStack_158 + -4 + uVar14 * 6) = uVar4;
                      *(undefined2 *)(lStack_158 + -2 + uVar14 * 6) = uVar5;
                    }
                  }
                }
              }
              else if (iVar16 == 3) {
                if (0 < lStack_168) {
                  uVar14 = 0;
                  lVar18 = 1;
                  lVar13 = 0;
                  lVar15 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar14 = uVar14 + 1;
                      *(undefined2 *)(lVar13 + -6 + lStack_158) =
                           *(undefined2 *)(lVar15 + -0x12 + lStack_158);
                      *(undefined2 *)(lVar13 + -4 + lStack_158) =
                           *(undefined2 *)(lVar15 + -0x10 + lStack_158);
                      *(undefined2 *)(lVar13 + -2 + lStack_158) =
                           *(undefined2 *)(lVar15 + -0xe + lStack_158);
                      *(undefined2 *)(lVar13 + lStack_158) =
                           *(undefined2 *)(lVar15 + -0x18 + lStack_158);
                      *(undefined2 *)(lVar13 + 2 + lStack_158) =
                           *(undefined2 *)(lVar15 + -0x16 + lStack_158);
                      lVar18 = lVar15 + -0x14;
                      lVar15 = lVar15 + -0xc;
                      *(undefined2 *)(lVar13 + 4 + lStack_158) =
                           *(undefined2 *)(lVar18 + lStack_158);
                      lVar13 = lVar13 + 0xc;
                    } while (uVar14 < uStack_150);
                    lVar18 = uVar14 * 2 + 1;
                  }
                  uVar14 = lVar18 - 1;
                  if (uVar14 < uStack_170) {
                    lVar15 = uVar14 * -6;
                    *(undefined2 *)(lStack_158 + -6 + uVar14 * 6) =
                         *(undefined2 *)(lVar15 + -0x12 + lStack_158);
                    *(undefined2 *)(lStack_158 + -4 + uVar14 * 6) =
                         *(undefined2 *)(lVar15 + -0x10 + lStack_158);
                    *(undefined2 *)(lStack_158 + -2 + uVar14 * 6) =
                         *(undefined2 *)(lVar15 + -0xe + lStack_158);
                  }
                }
              }
              else if ((iVar16 == 6) && (0 < lStack_168)) {
                if (6 < (longlong)uStack_188 / 3) {
                  lVar18 = ((longlong)uStack_188 / 3) * 6;
                  lVar15 = lStack_160 + -6 + param_11;
                  lVar13 = (longlong)puVar25 + (2 - lVar15);
                  if (((lVar18 <= lVar13) || (3 < -lVar13)) &&
                     ((lVar15 = lVar15 - (longlong)puVar25, 1 < lVar15 || (lVar18 <= -lVar15)))) {
                    uVar14 = 0;
                    lVar13 = 1;
                    uVar10 = *puVar25;
                    lVar15 = 0;
                    uVar23 = puVar25[1];
                    uVar17 = puVar25[2];
                    if (uStack_150 != 0) {
                      do {
                        uVar14 = uVar14 + 1;
                        *(ushort *)(lVar15 + -6 + lStack_158) = uVar10;
                        *(ushort *)(lVar15 + -4 + lStack_158) = uVar23;
                        *(ushort *)(lVar15 + -2 + lStack_158) = uVar17;
                        *(ushort *)(lVar15 + lStack_158) = uVar10;
                        *(ushort *)(lVar15 + 2 + lStack_158) = uVar23;
                        *(ushort *)(lVar15 + 4 + lStack_158) = uVar17;
                        lVar15 = lVar15 + 0xc;
                      } while (uVar14 < uStack_150);
                      lVar13 = uVar14 * 2 + 1;
                    }
                    uVar14 = lVar13 - 1;
                    if (uVar14 < uStack_170) {
                      *(ushort *)(lStack_158 + -6 + uVar14 * 6) = uVar10;
                      *(ushort *)(lStack_158 + -4 + uVar14 * 6) = uVar23;
                      *(ushort *)(lStack_158 + -2 + uVar14 * 6) = uVar17;
                    }
                    goto LAB_140081c65;
                  }
                }
                lVar15 = 1;
                uVar14 = 0;
                if (uStack_150 != 0) {
                  do {
                    uVar20 = uVar14 + 1;
                    lVar15 = uVar14 * 0xc;
                    *(ushort *)(lStack_158 + -6 + lVar15) = *puVar25;
                    *(ushort *)(lStack_158 + -4 + lVar15) = puVar25[1];
                    *(ushort *)(lStack_158 + -2 + lVar15) = puVar25[2];
                    *(ushort *)(lStack_158 + lVar15) = *puVar25;
                    *(ushort *)(lStack_158 + 2 + lVar15) = puVar25[1];
                    *(ushort *)(lStack_158 + 4 + lVar15) = puVar25[2];
                    uVar14 = uVar20;
                  } while (uVar20 < uStack_150);
                  lVar15 = uVar20 * 2 + 1;
                }
                uVar14 = lVar15 - 1;
                if (uVar14 < uStack_170) {
                  *(ushort *)(lStack_158 + -6 + uVar14 * 6) = *puVar25;
                  *(ushort *)(lStack_158 + -4 + uVar14 * 6) = puVar25[1];
                  *(ushort *)(lStack_158 + -2 + uVar14 * 6) = puVar25[2];
                }
              }
LAB_140081c65:
              puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,param_10);
              uVar9 = (*pcStack_c8)(puStack_d0,uVar9,uStack_68,param_9);
              auVar27._8_8_ = extraout_XMM0_Qb_00;
              auVar27._0_8_ = extraout_XMM0_Qa;
            }
            else {
              puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,param_10);
              uVar9 = (*pcStack_c8)(lVar13,uVar9,uVar14,param_9);
              auVar27._8_8_ = extraout_XMM0_Qb_02;
              auVar27._0_8_ = extraout_XMM0_Qa_01;
            }
          }
        }
        iVar24 = (int)uVar11;
        uVar11 = uVar11 + 1;
        lVar15 = (longlong)iVar24 + 1;
      } while (uVar11 < uStack_68);
LAB_140081e58:
      if ((uStack_50 ^ (ulonglong)auStack_1e8) == _DAT_1436b4680) {
        return uVar9;
      }
      goto LAB_1400807f9;
    }
  }
  uVar8 = param_7 & 0xf;
  uVar9 = (ulonglong)uVar8;
  if (uVar8 == 6) {
    uVar11 = 0;
    uVar9 = (ulonglong)*param_8;
    fVar29 = (float)*param_8;
    fVar28 = (float)param_8[1];
    fVar26 = (float)param_8[2];
    if (0 < iVar16) {
      lVar15 = *param_5 * 2 + *param_5;
      uVar20 = lVar15 + 2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar20;
      uVar9 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar14 = uVar11;
      do {
        if (0 < lVar15) {
          uVar9 = 0;
          lVar18 = 1;
          lVar13 = 0;
          if (uVar20 / 6 != 0) {
            lVar18 = param_3 + uVar11;
            do {
              uVar9 = uVar9 + 1;
              *(float *)(lVar13 + lVar18) = fVar29;
              *(float *)(lVar13 + 4 + lVar18) = fVar28;
              *(float *)(lVar13 + 8 + lVar18) = fVar26;
              *(float *)(lVar13 + 0xc + lVar18) = fVar29;
              *(float *)(lVar13 + 0x10 + lVar18) = fVar28;
              *(float *)(lVar13 + 0x14 + lVar18) = fVar26;
              lVar13 = lVar13 + 0x18;
            } while (uVar9 < uVar20 / 6);
            lVar18 = uVar9 * 2 + 1;
          }
          uVar22 = lVar18 - 1;
          uVar9 = uVar22;
          if (uVar22 < uVar20 / 3) {
            uVar9 = uVar22 * 4;
            lVar13 = uVar22 * 0xc + param_3;
            *(float *)(lVar13 + uVar11) = fVar29;
            *(float *)(lVar13 + 4 + uVar11) = fVar28;
            *(float *)(lVar13 + 8 + uVar11) = fVar26;
          }
        }
        uVar14 = uVar14 + 1;
        uVar11 = uVar11 + param_4;
      } while (uVar14 < (ulonglong)(longlong)iVar16);
    }
    if ((uStack_50 ^ (ulonglong)auStack_1e8) == _DAT_1436b4680) {
      return uVar9;
    }
  }
  else if (uVar8 == 1) {
    uVar11 = 0;
    if (0 < iVar16) {
      uVar9 = param_4 * iVar16 + param_3;
      uVar14 = *param_5 * 2 + *param_5;
      do {
        if (0 < (longlong)uVar14) {
          if ((longlong)uVar14 < 4) {
LAB_140080b66:
            uVar19 = 0;
          }
          else {
            uVar22 = param_4 * uVar11 + param_3;
            uVar20 = uVar22 & 0xf;
            if (uVar20 != 0) {
              if ((uVar22 & 3) != 0) goto LAB_140080b66;
              uVar20 = 0x10 - uVar20 >> 2;
            }
            if ((longlong)uVar14 < (longlong)(uVar20 + 4)) goto LAB_140080b66;
            uVar12 = 0;
            uVar19 = uVar14 - (uVar14 - uVar20 & 3);
            if (uVar20 != 0) {
              do {
                *(undefined4 *)(uVar22 + uVar12 * 4) = *(undefined4 *)(uVar9 + uVar12 * 4);
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar20);
            }
            if ((uVar20 * 4 + uVar9 & 0xf) == 0) {
              do {
                *(undefined1 (*) [16])(uVar22 + uVar20 * 4) =
                     *(undefined1 (*) [16])(uVar9 + uVar20 * 4);
                uVar20 = uVar20 + 4;
              } while (uVar20 < uVar19);
            }
            else {
              do {
                *(undefined1 (*) [16])(uVar22 + uVar20 * 4) =
                     *(undefined1 (*) [16])(uVar9 + uVar20 * 4);
                uVar20 = uVar20 + 4;
              } while (uVar20 < uVar19);
            }
          }
          if (uVar19 < uVar14) {
            do {
              *(undefined4 *)(param_4 * uVar11 + param_3 + uVar19 * 4) =
                   *(undefined4 *)(uVar9 + uVar19 * 4);
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar14);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulonglong)(longlong)iVar16);
    }
    if ((uStack_50 ^ (ulonglong)auStack_1e8) == _DAT_1436b4680) {
      return uVar9;
    }
  }
  else {
    if (uVar8 == 3) {
      puStack_1c8 = &uStack_188;
      uStack_188 = *param_5;
      uStack_180 = param_5[1];
      iStack_1c0 = param_6;
      iStack_1a0 = param_10;
      uStack_1b8 = param_7;
      puStack_1b0 = param_8;
      uStack_1a8 = param_9;
      lStack_198 = param_11;
      uVar9 = FUN_1406d0400(param_1,lStack_70,(longlong)iVar16,param_3);
      lVar15 = 1;
      uVar11 = 0;
      if (1 < iVar16) {
        lVar13 = ((longlong)param_10 + -1) * param_4 + param_3;
        uVar14 = *param_5 * 2 + *param_5;
        do {
          if (0 < (longlong)uVar14) {
            if ((longlong)uVar14 < 4) {
LAB_1400809e6:
              uVar9 = 0;
            }
            else {
              uVar22 = param_3 + param_4 * lVar15;
              uVar20 = uVar22 & 0xf;
              if (uVar20 != 0) {
                if ((uVar22 & 3) != 0) goto LAB_1400809e6;
                uVar20 = 0x10 - uVar20 >> 2;
              }
              if ((longlong)uVar14 < (longlong)(uVar20 + 4)) goto LAB_1400809e6;
              lVar18 = lVar13 - param_4 * lVar15;
              uVar19 = 0;
              uVar9 = uVar14 - (uVar14 - uVar20 & 3);
              if (uVar20 != 0) {
                do {
                  *(undefined4 *)(uVar22 + uVar19 * 4) = *(undefined4 *)(lVar18 + uVar19 * 4);
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar20);
              }
              if ((uVar20 * 4 + lVar18 & 0xf) == 0) {
                do {
                  puVar1 = (undefined8 *)(lVar18 + uVar20 * 4);
                  uVar7 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar22 + uVar20 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar7;
                  uVar20 = uVar20 + 4;
                } while (uVar20 < uVar9);
              }
              else {
                do {
                  puVar1 = (undefined8 *)(lVar18 + uVar20 * 4);
                  uVar7 = puVar1[1];
                  puVar2 = (undefined8 *)(uVar22 + uVar20 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar7;
                  uVar20 = uVar20 + 4;
                } while (uVar20 < uVar9);
              }
            }
            if (uVar9 < uVar14) {
              do {
                *(undefined4 *)(param_3 + lVar15 * param_4 + uVar9 * 4) =
                     *(undefined4 *)((lVar13 - lVar15 * param_4) + uVar9 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar14);
            }
          }
          lVar15 = uVar11 + 2;
          uVar11 = uVar11 + 1;
        } while (uVar11 < (ulonglong)(longlong)(iVar16 + -1));
      }
    }
    if ((uStack_50 ^ (ulonglong)auStack_1e8) == _DAT_1436b4680) {
      return uVar9;
    }
  }
LAB_1400807f9:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

