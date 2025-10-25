
void FUN_1407193c0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined8 *param_8,undefined8 param_9
                  ,int param_10,longlong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_1d8 [32];
  ulonglong *puStack_1b8;
  int iStack_1b0;
  uint uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  int iStack_190;
  longlong lStack_188;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  uint uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  code *pcStack_c8;
  uint uStack_c0;
  undefined4 *puStack_b8;
  uint uStack_b0;
  ulonglong *puStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  iVar10 = param_10 >> 1;
  lVar7 = 0;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_1d8;
  lStack_60 = param_2;
  if (iVar10 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_14071ad0a;
  }
  else {
    uStack_68 = (ulonglong)iVar10;
    uStack_178 = CONCAT44(uStack_178._4_4_,iVar10);
    lVar11 = param_4 * uStack_68 + param_3;
    uStack_90 = param_3;
    lStack_78 = param_4;
    lStack_70 = param_1;
    do {
      puStack_1b8 = &uStack_88;
      uStack_88 = *param_5;
      uStack_80 = param_5[1];
      iStack_1b0 = param_6;
      uStack_1a8 = param_7;
      puStack_1a0 = param_8;
      uStack_198 = param_9;
      iStack_190 = param_10;
      lStack_188 = param_11;
      FUN_140689bc0(lStack_70,lStack_60,lVar7,lVar11);
      lVar7 = lVar7 + 1;
      lVar11 = lVar11 + lStack_78;
    } while (lVar7 < (longlong)uStack_68);
    param_1 = lStack_70;
    param_3 = uStack_90;
    param_4 = lStack_78;
    iVar10 = (int)uStack_178;
    if ((param_7 & 0x10) != 0) {
      lStack_70 = lStack_70 - lStack_60 * uStack_68;
      lVar7 = (longlong)param_10;
      lStack_138 = 0;
      lStack_a0 = lVar7 + -1;
      uStack_f0 = 0;
      lStack_158 = lVar7 * 8;
      lStack_140 = lVar7 * 0xc;
      uVar3 = param_7 & 0xf;
      lStack_160 = param_11 + lStack_140;
      uStack_e8 = lVar7 * 3 - 3;
      uStack_d8 = ((lVar7 * 3 + -1) / 3) * 3;
      uStack_e0 = uStack_d8 >> 1;
      uStack_98 = param_7 & 0xf0;
      lStack_d0 = -uStack_68;
      lStack_f8 = uStack_68 * 2;
      lStack_108 = uStack_68 * 0xc;
      puStack_b8 = (undefined4 *)(param_11 + lStack_108);
      uStack_128 = (ulonglong)puStack_b8 & 0xf;
      pcStack_c8 = (code *)(&PTR_FUN_14308be40)[param_6];
      uStack_b0 = param_7 & 0x80;
      uStack_c0 = param_7 & 0x40;
      lStack_148 = uStack_68 * 3;
      uStack_178 = lStack_148 + 2;
      uStack_150 = uStack_178 / 6;
      uStack_120 = (ulonglong)puStack_b8 & 3;
      uStack_118 = (longlong)(param_10 * 3) - 3;
      uStack_110 = uStack_118 >> 1;
      lStack_100 = uStack_68 * -0xc;
      uStack_168 = uStack_178 / 3;
      uStack_170 = 0x10 - uStack_128 >> 2;
      puStack_a8 = param_5;
      uVar13 = 0;
      lVar7 = 0;
      uStack_130 = uVar3;
      do {
        lVar6 = lStack_78 * uVar13 + uStack_90;
        lVar11 = lStack_60 * uVar13 + lStack_70;
        uStack_58 = 0;
        uStack_50 = 0;
        if (uStack_98 == 0xf0) {
          puStack_1b8 = (ulonglong *)CONCAT44(puStack_1b8._4_4_,param_10);
          (*pcStack_c8)(lVar11,lVar6,*puStack_a8,param_9);
        }
        else {
          puVar17 = &uStack_58;
          if (uVar3 == 6) {
            puVar17 = param_8;
          }
          uVar9 = *puStack_a8;
          if ((longlong)*puStack_a8 < lStack_a0) {
            uVar15 = 0;
            lVar7 = 0;
            lVar14 = -uStack_68;
            if (lStack_d0 < (longlong)(uStack_68 + uVar9)) {
              do {
                lVar16 = lVar14;
                if (lVar14 < 0) {
                  if (param_7 != 0xf0) {
                    if (uVar3 == 6) {
                      if (uStack_c0 == 0) goto LAB_14071ac7d;
                    }
                    else {
                      if (uVar3 != 1) goto LAB_14071abe4;
LAB_14071ad6f:
                      lVar16 = 0;
                      if (uStack_c0 != 0) {
                        lVar16 = lVar14;
                      }
                    }
                  }
LAB_14071ac4f:
                  lVar16 = lVar16 * 0xc;
                  uVar18 = *(undefined4 *)(lVar16 + lVar11);
                  uVar19 = *(undefined4 *)(lVar16 + 4 + lVar11);
                  uVar20 = *(undefined4 *)(lVar16 + 8 + lVar11);
                }
                else {
                  if ((lVar14 < (longlong)uVar9) || (param_7 == 0xf0)) goto LAB_14071ac4f;
                  if (uVar3 != 6) {
                    if (uVar3 == 1) {
                      if (lVar14 < 0) goto LAB_14071ad6f;
                      if (uStack_b0 == 0) {
                        lVar16 = uVar9 - 1;
                      }
                    }
                    else {
LAB_14071abe4:
                      if (uVar3 == 3) {
                        if ((longlong)uVar9 < 2) {
                          if (lVar14 < 0) {
                            if (uStack_c0 == 0) {
                              lVar16 = -lVar14;
                              if (uStack_b0 == 0) {
                                lVar16 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar14) && (uStack_b0 == 0)) &&
                                  (lVar16 = -lVar14, uStack_c0 == 0)) {
                            lVar16 = 0;
                          }
                        }
                        else {
                          if (lVar14 < 0) goto LAB_14071ad80;
                          if ((longlong)uVar9 <= lVar14) {
                            while (uStack_b0 == 0) {
                              for (lVar16 = (uVar9 - 1) * 2 - lVar16; lVar16 < 0; lVar16 = -lVar16)
                              {
LAB_14071ad80:
                                if (uStack_c0 != 0) goto LAB_14071ac4f;
                              }
                              if (lVar16 < (longlong)uVar9) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14071ac4f;
                  }
                  if (uStack_b0 != 0) goto LAB_14071ac4f;
LAB_14071ac7d:
                  uVar18 = *(undefined4 *)puVar17;
                  uVar19 = *(undefined4 *)((longlong)puVar17 + 4);
                  uVar20 = *(undefined4 *)(puVar17 + 1);
                }
                uVar15 = uVar15 + 1;
                lVar14 = lVar14 + 1;
                *(undefined4 *)(lVar7 + param_11) = uVar18;
                *(undefined4 *)(lVar7 + 4 + param_11) = uVar19;
                *(undefined4 *)(lVar7 + 8 + param_11) = uVar20;
                lVar7 = lVar7 + 0xc;
                lStack_138 = lVar6;
                uStack_f0 = uVar13;
              } while (uVar15 < lStack_f8 + uVar9);
            }
            puStack_1b8 = (ulonglong *)CONCAT44(puStack_1b8._4_4_,param_10);
            (*pcStack_c8)(puStack_b8,lVar6,uVar9,param_9);
          }
          else {
            if (uStack_c0 == 0) {
              if (0 < (longlong)uStack_e8) {
                if (6 < (longlong)uStack_e8) {
                  lVar16 = lStack_60 * lVar7 + lStack_70;
                  lVar14 = lStack_158 + -0xc + (longlong)param_10 * 4;
                  if ((lVar14 <= (longlong)puStack_b8 - lVar16) ||
                     (lVar14 <= -((longlong)puStack_b8 - lVar16))) {
                    uVar15 = uStack_128;
                    if (((uStack_128 == 0) || (uVar15 = uStack_170, uStack_120 == 0)) &&
                       ((longlong)(uVar15 + 4) <= (longlong)uStack_e8)) {
                      uVar5 = 0;
                      uVar12 = uStack_e8 - (uStack_e8 - uVar15 & 3);
                      if (uVar15 != 0) {
                        do {
                          puStack_b8[uVar5] = *(undefined4 *)(lVar16 + uVar5 * 4);
                          uVar5 = uVar5 + 1;
                        } while (uVar5 < uVar15);
                      }
                      if ((uVar15 * 4 + lVar16 & 0xf) == 0) {
                        do {
                          puVar1 = (undefined4 *)(lVar16 + uVar15 * 4);
                          uVar18 = puVar1[1];
                          uVar19 = puVar1[2];
                          uVar20 = puVar1[3];
                          puVar2 = puStack_b8 + uVar15;
                          *puVar2 = *puVar1;
                          puVar2[1] = uVar18;
                          puVar2[2] = uVar19;
                          puVar2[3] = uVar20;
                          uVar15 = uVar15 + 4;
                        } while (uVar15 < uVar12);
                      }
                      else {
                        do {
                          puVar1 = (undefined4 *)(lVar16 + uVar15 * 4);
                          uVar18 = puVar1[1];
                          uVar19 = puVar1[2];
                          uVar20 = puVar1[3];
                          puVar2 = puStack_b8 + uVar15;
                          *puVar2 = *puVar1;
                          puVar2[1] = uVar18;
                          puVar2[2] = uVar19;
                          puVar2[3] = uVar20;
                          uVar15 = uVar15 + 4;
                        } while (uVar15 < uVar12);
                      }
                    }
                    else {
                      uVar12 = 0;
                    }
                    for (; uVar12 < uStack_e8; uVar12 = uVar12 + 1) {
                      puStack_b8[uVar12] = *(undefined4 *)(lVar16 + uVar12 * 4);
                    }
                    goto LAB_14071a0d2;
                  }
                }
                lVar14 = 1;
                uVar15 = 0;
                if (uStack_110 != 0) {
                  lVar14 = lStack_60 * lVar7 + lStack_70;
                  do {
                    puStack_b8[uVar15 * 2] = *(undefined4 *)(lVar14 + uVar15 * 8);
                    puStack_b8[uVar15 * 2 + 1] = *(undefined4 *)(lVar14 + 4 + uVar15 * 8);
                    uVar15 = uVar15 + 1;
                  } while (uVar15 < uStack_110);
                  lVar14 = uVar15 * 2 + 1;
                }
                uVar15 = lVar14 - 1;
                if (uVar15 < uStack_118) {
                  puStack_b8[uVar15] = *(undefined4 *)(lVar7 * lStack_60 + lStack_70 + uVar15 * 4);
                }
              }
LAB_14071a0d2:
              if (uVar3 == 1) {
                if (0 < lStack_148) {
                  if (((longlong)uStack_178 / 3 < 7) ||
                     ((param_11 - (longlong)puStack_b8 < 0xc &&
                      (-(param_11 - (longlong)puStack_b8) < ((longlong)uStack_178 / 3) * 0xc)))) {
                    lVar14 = 1;
                    lVar7 = 0;
                    uVar18 = puStack_b8[2];
                    uVar15 = 0;
                    if (uStack_150 != 0) {
                      do {
                        uVar15 = uVar15 + 1;
                        *(undefined4 *)(lVar7 + param_11) = *puStack_b8;
                        *(undefined4 *)(lVar7 + 4 + param_11) = puStack_b8[1];
                        *(undefined4 *)(lVar7 + 8 + param_11) = uVar18;
                        *(undefined4 *)(lVar7 + 0xc + param_11) = *puStack_b8;
                        *(undefined4 *)(lVar7 + 0x10 + param_11) = puStack_b8[1];
                        *(undefined4 *)(lVar7 + 0x14 + param_11) = uVar18;
                        lVar7 = lVar7 + 0x18;
                      } while (uVar15 < uStack_150);
                      lVar14 = uVar15 * 2 + 1;
                    }
                    if (lVar14 - 1U < uStack_168) {
                      lVar7 = (lVar14 - 1U) * 0xc;
                      *(undefined4 *)(lVar7 + param_11) = *puStack_b8;
                      *(undefined4 *)(lVar7 + 4 + param_11) = puStack_b8[1];
                      *(undefined4 *)(lVar7 + 8 + param_11) = uVar18;
                    }
                  }
                  else {
                    uVar15 = 0;
                    lVar7 = 0;
                    uVar18 = *puStack_b8;
                    uVar19 = puStack_b8[1];
                    uVar20 = puStack_b8[2];
                    lVar14 = 1;
                    if (uStack_150 != 0) {
                      do {
                        uVar15 = uVar15 + 1;
                        *(undefined4 *)(lVar7 + param_11) = uVar18;
                        *(undefined4 *)(lVar7 + 4 + param_11) = uVar19;
                        *(undefined4 *)(lVar7 + 8 + param_11) = uVar20;
                        *(undefined4 *)(lVar7 + 0xc + param_11) = uVar18;
                        *(undefined4 *)(lVar7 + 0x10 + param_11) = uVar19;
                        *(undefined4 *)(lVar7 + 0x14 + param_11) = uVar20;
                        lVar7 = lVar7 + 0x18;
                      } while (uVar15 < uStack_150);
                      lVar14 = uVar15 * 2 + 1;
                    }
                    if (lVar14 - 1U < uStack_168) {
                      lVar7 = (lVar14 - 1U) * 0xc;
                      *(undefined4 *)(lVar7 + param_11) = uVar18;
                      *(undefined4 *)(lVar7 + 4 + param_11) = uVar19;
                      *(undefined4 *)(lVar7 + 8 + param_11) = uVar20;
                    }
                  }
                }
              }
              else if (uVar3 == 3) {
                if (0 < lStack_148) {
                  uVar15 = 0;
                  lVar16 = 1;
                  lVar14 = 0;
                  lVar7 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar15 = uVar15 + 1;
                      *(undefined4 *)(lVar14 + param_11) =
                           *(undefined4 *)(lVar7 + -0xc + lStack_160);
                      *(undefined4 *)(lVar14 + 4 + param_11) =
                           *(undefined4 *)(lVar7 + -8 + lStack_160);
                      *(undefined4 *)(lVar14 + 8 + param_11) =
                           *(undefined4 *)(lVar7 + -4 + lStack_160);
                      *(undefined4 *)(lVar14 + 0xc + param_11) =
                           *(undefined4 *)(lVar7 + -0x18 + lStack_160);
                      *(undefined4 *)(lVar14 + 0x10 + param_11) =
                           *(undefined4 *)(lVar7 + -0x14 + lStack_160);
                      lVar16 = lVar7 + -0x10;
                      lVar7 = lVar7 + -0x18;
                      *(undefined4 *)(lVar14 + 0x14 + param_11) =
                           *(undefined4 *)(lVar16 + lStack_160);
                      lVar14 = lVar14 + 0x18;
                    } while (uVar15 < uStack_150);
                    lVar16 = uVar15 * 2 + 1;
                  }
                  uVar15 = lVar16 - 1;
                  if (uVar15 < uStack_168) {
                    lVar14 = uVar15 * -0xc;
                    lVar7 = uVar15 * 0xc;
                    *(undefined4 *)(lVar7 + param_11) = *(undefined4 *)(lVar14 + -0xc + lStack_160);
                    *(undefined4 *)(lVar7 + 4 + param_11) =
                         *(undefined4 *)(lVar14 + -8 + lStack_160);
                    *(undefined4 *)(lVar7 + 8 + param_11) =
                         *(undefined4 *)(lVar14 + -4 + lStack_160);
                  }
                }
              }
              else if ((uVar3 == 6) && (0 < lStack_148)) {
                if (6 < (longlong)uStack_178 / 3) {
                  lVar14 = ((longlong)uStack_178 / 3) * 0xc;
                  lVar7 = (longlong)puVar17 + (4 - param_11);
                  if (((lVar14 <= lVar7) || (7 < -lVar7)) &&
                     ((3 < param_11 - (longlong)puVar17 ||
                      (lVar14 <= -(param_11 - (longlong)puVar17))))) {
                    uVar15 = 0;
                    lVar14 = 1;
                    uVar18 = *(undefined4 *)puVar17;
                    lVar7 = 0;
                    uVar19 = *(undefined4 *)((longlong)puVar17 + 4);
                    uVar20 = *(undefined4 *)(puVar17 + 1);
                    if (uStack_150 != 0) {
                      do {
                        uVar15 = uVar15 + 1;
                        *(undefined4 *)(lVar7 + param_11) = uVar18;
                        *(undefined4 *)(lVar7 + 4 + param_11) = uVar19;
                        *(undefined4 *)(lVar7 + 8 + param_11) = uVar20;
                        *(undefined4 *)(lVar7 + 0xc + param_11) = uVar18;
                        *(undefined4 *)(lVar7 + 0x10 + param_11) = uVar19;
                        *(undefined4 *)(lVar7 + 0x14 + param_11) = uVar20;
                        lVar7 = lVar7 + 0x18;
                      } while (uVar15 < uStack_150);
                      lVar14 = uVar15 * 2 + 1;
                    }
                    if (lVar14 - 1U < uStack_168) {
                      lVar7 = (lVar14 - 1U) * 0xc;
                      *(undefined4 *)(lVar7 + param_11) = uVar18;
                      *(undefined4 *)(lVar7 + 4 + param_11) = uVar19;
                      *(undefined4 *)(lVar7 + 8 + param_11) = uVar20;
                    }
                    goto LAB_14071a55a;
                  }
                }
                uVar15 = 0;
                lVar14 = 1;
                lVar7 = 0;
                if (uStack_150 != 0) {
                  do {
                    uVar15 = uVar15 + 1;
                    *(undefined4 *)(lVar7 + param_11) = *(undefined4 *)puVar17;
                    *(undefined4 *)(lVar7 + 4 + param_11) = *(undefined4 *)((longlong)puVar17 + 4);
                    *(undefined4 *)(lVar7 + 8 + param_11) = *(undefined4 *)(puVar17 + 1);
                    *(undefined4 *)(lVar7 + 0xc + param_11) = *(undefined4 *)puVar17;
                    *(undefined4 *)(lVar7 + 0x10 + param_11) =
                         *(undefined4 *)((longlong)puVar17 + 4);
                    *(undefined4 *)(lVar7 + 0x14 + param_11) = *(undefined4 *)(puVar17 + 1);
                    lVar7 = lVar7 + 0x18;
                  } while (uVar15 < uStack_150);
                  lVar14 = uVar15 * 2 + 1;
                }
                if (lVar14 - 1U < uStack_168) {
                  lVar7 = (lVar14 - 1U) * 0xc;
                  *(undefined4 *)(lVar7 + param_11) = *(undefined4 *)puVar17;
                  *(undefined4 *)(lVar7 + 4 + param_11) = *(undefined4 *)((longlong)puVar17 + 4);
                  *(undefined4 *)(lVar7 + 8 + param_11) = *(undefined4 *)(puVar17 + 1);
                }
              }
LAB_14071a55a:
              puStack_1b8 = (ulonglong *)CONCAT44(puStack_1b8._4_4_,param_10);
              (*pcStack_c8)(puStack_b8,lVar6,uStack_68,param_9);
              lVar11 = lVar11 + lStack_108;
              lVar6 = lVar6 + lStack_108;
              uVar9 = uVar9 - uStack_68;
            }
            if (uStack_b0 == 0) {
              if ((longlong)uStack_68 < (longlong)uVar9) {
                lVar7 = uVar9 - uStack_68;
                puStack_1b8 = (ulonglong *)CONCAT44(puStack_1b8._4_4_,param_10);
                (*pcStack_c8)(lVar11,lVar6,lVar7,param_9);
                lVar7 = lVar7 * 0xc;
                lVar11 = lVar11 + lVar7;
                lVar6 = lVar6 + lVar7;
              }
              if (0 < (longlong)uStack_e8) {
                lVar7 = 1;
                uVar9 = 0;
                if (uStack_e0 != 0) {
                  do {
                    *(undefined4 *)(param_11 + uVar9 * 8) =
                         *(undefined4 *)(lVar11 + lStack_100 + uVar9 * 8);
                    *(undefined4 *)(param_11 + 4 + uVar9 * 8) =
                         *(undefined4 *)(lVar11 + lStack_100 + 4 + uVar9 * 8);
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uStack_e0);
                  lVar7 = uVar9 * 2 + 1;
                }
                uVar9 = lVar7 - 1;
                if (uVar9 < uStack_d8) {
                  *(undefined4 *)(param_11 + uVar9 * 4) =
                       *(undefined4 *)(lVar11 + lStack_100 + uVar9 * 4);
                }
              }
              if (uVar3 == 1) {
                if (0 < lStack_148) {
                  if ((longlong)uStack_178 / 3 < 7) {
                    uVar9 = 0;
                    lVar11 = 1;
                    lVar7 = 0;
                    if (uStack_150 != 0) {
                      do {
                        uVar9 = uVar9 + 1;
                        *(undefined4 *)(lVar7 + -0xc + lStack_160) =
                             *(undefined4 *)(lStack_160 + -0x18);
                        *(undefined4 *)(lVar7 + -8 + lStack_160) =
                             *(undefined4 *)(lStack_160 + -0x14);
                        *(undefined4 *)(lVar7 + -4 + lStack_160) =
                             *(undefined4 *)(lStack_160 + -0x10);
                        *(undefined4 *)(lVar7 + lStack_160) = *(undefined4 *)(lStack_160 + -0x18);
                        *(undefined4 *)(lVar7 + 4 + lStack_160) =
                             *(undefined4 *)(lStack_160 + -0x14);
                        *(undefined4 *)(lVar7 + 8 + lStack_160) =
                             *(undefined4 *)(lStack_160 + -0x10);
                        lVar7 = lVar7 + 0x18;
                      } while (uVar9 < uStack_150);
                      lVar11 = uVar9 * 2 + 1;
                    }
                    if (lVar11 - 1U < uStack_168) {
                      lVar7 = (lVar11 - 1U) * 0xc;
                      *(undefined4 *)(lVar7 + -0xc + lStack_160) =
                           *(undefined4 *)(lStack_160 + -0x18);
                      *(undefined4 *)(lStack_160 + -8 + lVar7) = *(undefined4 *)(lStack_160 + -0x14)
                      ;
                      *(undefined4 *)(lStack_160 + -4 + lVar7) = *(undefined4 *)(lStack_160 + -0x10)
                      ;
                    }
                  }
                  else {
                    uVar9 = 0;
                    lVar11 = 1;
                    lVar7 = 0;
                    uVar18 = *(undefined4 *)(lStack_160 + -0x18);
                    uVar19 = *(undefined4 *)(lStack_160 + -0x14);
                    uVar20 = *(undefined4 *)(lStack_160 + -0x10);
                    if (uStack_150 != 0) {
                      do {
                        uVar9 = uVar9 + 1;
                        *(undefined4 *)(lVar7 + -0xc + lStack_160) = uVar18;
                        *(undefined4 *)(lVar7 + -8 + lStack_160) = uVar19;
                        *(undefined4 *)(lVar7 + -4 + lStack_160) = uVar20;
                        *(undefined4 *)(lVar7 + lStack_160) = uVar18;
                        *(undefined4 *)(lVar7 + 4 + lStack_160) = uVar19;
                        *(undefined4 *)(lVar7 + 8 + lStack_160) = uVar20;
                        lVar7 = lVar7 + 0x18;
                      } while (uVar9 < uStack_150);
                      lVar11 = uVar9 * 2 + 1;
                    }
                    if (lVar11 - 1U < uStack_168) {
                      lVar7 = (lVar11 - 1U) * 0xc;
                      *(undefined4 *)(lVar7 + -0xc + lStack_160) = uVar18;
                      *(undefined4 *)(lStack_160 + -8 + lVar7) = uVar19;
                      *(undefined4 *)(lStack_160 + -4 + lVar7) = uVar20;
                    }
                  }
                }
              }
              else if (uVar3 == 3) {
                if (0 < lStack_148) {
                  uVar9 = 0;
                  lVar14 = 1;
                  lVar11 = 0;
                  lVar7 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar9 = uVar9 + 1;
                      *(undefined4 *)(lVar11 + -0xc + lStack_160) =
                           *(undefined4 *)(lVar7 + -0x24 + lStack_160);
                      *(undefined4 *)(lVar11 + -8 + lStack_160) =
                           *(undefined4 *)(lVar7 + -0x20 + lStack_160);
                      *(undefined4 *)(lVar11 + -4 + lStack_160) =
                           *(undefined4 *)(lVar7 + -0x1c + lStack_160);
                      *(undefined4 *)(lVar11 + lStack_160) =
                           *(undefined4 *)(lVar7 + -0x30 + lStack_160);
                      *(undefined4 *)(lVar11 + 4 + lStack_160) =
                           *(undefined4 *)(lVar7 + -0x2c + lStack_160);
                      lVar14 = lVar7 + -0x28;
                      lVar7 = lVar7 + -0x18;
                      *(undefined4 *)(lVar11 + 8 + lStack_160) =
                           *(undefined4 *)(lVar14 + lStack_160);
                      lVar11 = lVar11 + 0x18;
                    } while (uVar9 < uStack_150);
                    lVar14 = uVar9 * 2 + 1;
                  }
                  uVar9 = lVar14 - 1;
                  if (uVar9 < uStack_168) {
                    lVar11 = uVar9 * -0xc;
                    lVar7 = uVar9 * 0xc;
                    *(undefined4 *)(lVar7 + -0xc + lStack_160) =
                         *(undefined4 *)(lVar11 + -0x24 + lStack_160);
                    *(undefined4 *)(lStack_160 + -8 + lVar7) =
                         *(undefined4 *)(lVar11 + -0x20 + lStack_160);
                    *(undefined4 *)(lStack_160 + -4 + lVar7) =
                         *(undefined4 *)(lVar11 + -0x1c + lStack_160);
                  }
                }
              }
              else if ((uVar3 == 6) && (0 < lStack_148)) {
                if (6 < (longlong)uStack_178 / 3) {
                  lVar14 = ((longlong)uStack_178 / 3) * 0xc;
                  lVar7 = lStack_140 + -0xc + param_11;
                  lVar11 = (longlong)puVar17 + (4 - lVar7);
                  if (((lVar14 <= lVar11) || (7 < -lVar11)) &&
                     ((lVar7 = lVar7 - (longlong)puVar17, 3 < lVar7 || (lVar14 <= -lVar7)))) {
                    uVar9 = 0;
                    lVar11 = 1;
                    uVar18 = *(undefined4 *)puVar17;
                    lVar7 = 0;
                    uVar19 = *(undefined4 *)((longlong)puVar17 + 4);
                    uVar20 = *(undefined4 *)(puVar17 + 1);
                    if (uStack_150 != 0) {
                      do {
                        uVar9 = uVar9 + 1;
                        *(undefined4 *)(lVar7 + -0xc + lStack_160) = uVar18;
                        *(undefined4 *)(lVar7 + -8 + lStack_160) = uVar19;
                        *(undefined4 *)(lVar7 + -4 + lStack_160) = uVar20;
                        *(undefined4 *)(lVar7 + lStack_160) = uVar18;
                        *(undefined4 *)(lVar7 + 4 + lStack_160) = uVar19;
                        *(undefined4 *)(lVar7 + 8 + lStack_160) = uVar20;
                        lVar7 = lVar7 + 0x18;
                      } while (uVar9 < uStack_150);
                      lVar11 = uVar9 * 2 + 1;
                    }
                    if (lVar11 - 1U < uStack_168) {
                      lVar7 = (lVar11 - 1U) * 0xc;
                      *(undefined4 *)(lVar7 + -0xc + lStack_160) = uVar18;
                      *(undefined4 *)(lStack_160 + -8 + lVar7) = uVar19;
                      *(undefined4 *)(lStack_160 + -4 + lVar7) = uVar20;
                    }
                    goto LAB_14071ab03;
                  }
                }
                uVar9 = 0;
                lVar11 = 1;
                lVar7 = 0;
                if (uStack_150 != 0) {
                  do {
                    uVar9 = uVar9 + 1;
                    *(undefined4 *)(lVar7 + -0xc + lStack_160) = *(undefined4 *)puVar17;
                    *(undefined4 *)(lVar7 + -8 + lStack_160) =
                         *(undefined4 *)((longlong)puVar17 + 4);
                    *(undefined4 *)(lVar7 + -4 + lStack_160) = *(undefined4 *)(puVar17 + 1);
                    *(undefined4 *)(lVar7 + lStack_160) = *(undefined4 *)puVar17;
                    *(undefined4 *)(lVar7 + 4 + lStack_160) = *(undefined4 *)((longlong)puVar17 + 4)
                    ;
                    *(undefined4 *)(lVar7 + 8 + lStack_160) = *(undefined4 *)(puVar17 + 1);
                    lVar7 = lVar7 + 0x18;
                  } while (uVar9 < uStack_150);
                  lVar11 = uVar9 * 2 + 1;
                }
                if (lVar11 - 1U < uStack_168) {
                  lVar7 = (lVar11 - 1U) * 0xc;
                  *(undefined4 *)(lVar7 + -0xc + lStack_160) = *(undefined4 *)puVar17;
                  *(undefined4 *)(lStack_160 + -8 + lVar7) = *(undefined4 *)((longlong)puVar17 + 4);
                  *(undefined4 *)(lStack_160 + -4 + lVar7) = *(undefined4 *)(puVar17 + 1);
                }
              }
LAB_14071ab03:
              puStack_1b8 = (ulonglong *)CONCAT44(puStack_1b8._4_4_,param_10);
              (*pcStack_c8)(puStack_b8,lVar6,uStack_68,param_9);
            }
            else {
              puStack_1b8 = (ulonglong *)CONCAT44(puStack_1b8._4_4_,param_10);
              (*pcStack_c8)(lVar11,lVar6,uVar9,param_9);
            }
          }
        }
        iVar10 = (int)uVar13;
        uVar13 = uVar13 + 1;
        lVar7 = (longlong)iVar10 + 1;
      } while (uVar13 < uStack_68);
LAB_14071ad0a:
      if ((uStack_48 ^ (ulonglong)auStack_1d8) == DAT_1436b4680) {
        return;
      }
      goto LAB_140719562;
    }
  }
  uVar3 = param_7 & 0xf;
  if (uVar3 == 6) {
    uVar13 = (ulonglong)iVar10;
    if (0 < (longlong)uVar13) {
      uStack_178 = *param_5 * 3;
      uVar9 = uStack_178 + 2;
      if (((param_4 < (longlong)uVar9 / 3) ||
          ((puVar17 = (undefined8 *)
                      ((uVar13 - 1) * param_4 + param_3 + -1 + ((longlong)uVar9 / 3) * 0xc),
           param_8 < puVar17 && (param_3 < (longlong)param_8 + 3U)))) ||
         ((param_3 < (longlong)param_8 + 0xbU && ((undefined8 *)((longlong)param_8 + 4U) < puVar17))
         )) {
        uVar15 = 0;
        lVar7 = 0;
        do {
          if (0 < (longlong)uStack_178) {
            lVar11 = 1;
            if (uVar9 / 6 != 0) {
              lVar11 = param_3 + lVar7;
              uVar5 = 0;
              uVar12 = 0;
              do {
                uVar5 = uVar5 + 1;
                *(undefined4 *)(uVar12 + lVar11) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar12 + 4 + lVar11) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar12 + 8 + lVar11) = *(undefined4 *)(param_8 + 1);
                *(undefined4 *)(uVar12 + 0xc + lVar11) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar12 + 0x10 + lVar11) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar12 + 0x14 + lVar11) = *(undefined4 *)(param_8 + 1);
                uVar12 = uVar12 + 0x18;
              } while (uVar5 < uVar9 / 6);
              lVar11 = uVar5 * 2 + 1;
            }
            if (lVar11 - 1U < uVar9 / 3) {
              lVar11 = (lVar11 - 1U) * 0xc + param_3;
              *(undefined4 *)(lVar11 + lVar7) = *(undefined4 *)param_8;
              *(undefined4 *)(lVar11 + 4 + lVar7) = *(undefined4 *)((longlong)param_8 + 4);
              *(undefined4 *)(lVar11 + 8 + lVar7) = *(undefined4 *)(param_8 + 1);
            }
          }
          uVar15 = uVar15 + 1;
          lVar7 = lVar7 + param_4;
        } while (uVar15 < uVar13);
      }
      else {
        uVar15 = 0;
        lVar7 = 0;
        do {
          if (0 < (longlong)uStack_178) {
            lVar11 = 1;
            if (uVar9 / 6 != 0) {
              lVar11 = param_3 + lVar7;
              uVar5 = 0;
              uVar12 = 0;
              do {
                uVar5 = uVar5 + 1;
                *(undefined4 *)(uVar12 + lVar11) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar12 + 4 + lVar11) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar12 + 8 + lVar11) = *(undefined4 *)(param_8 + 1);
                *(undefined4 *)(uVar12 + 0xc + lVar11) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar12 + 0x10 + lVar11) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar12 + 0x14 + lVar11) = *(undefined4 *)(param_8 + 1);
                uVar12 = uVar12 + 0x18;
              } while (uVar5 < uVar9 / 6);
              lVar11 = uVar5 * 2 + 1;
            }
            if (lVar11 - 1U < uVar9 / 3) {
              lVar11 = (lVar11 - 1U) * 0xc + param_3;
              *(undefined4 *)(lVar11 + lVar7) = *(undefined4 *)param_8;
              *(undefined4 *)(lVar11 + 4 + lVar7) = *(undefined4 *)((longlong)param_8 + 4);
              *(undefined4 *)(lVar11 + 8 + lVar7) = *(undefined4 *)(param_8 + 1);
            }
          }
          uVar15 = uVar15 + 1;
          lVar7 = lVar7 + param_4;
        } while (uVar15 < uVar13);
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_1d8) == DAT_1436b4680) {
      return;
    }
  }
  else if (uVar3 == 1) {
    uVar13 = 0;
    if (0 < iVar10) {
      lVar7 = param_4 * iVar10 + param_3;
      uVar9 = 0;
      uVar15 = *param_5 * 2 + *param_5;
      do {
        if (0 < (longlong)uVar15) {
          uVar12 = uVar9;
          if (3 < (longlong)uVar15) {
            uVar4 = param_4 * uVar13 + param_3;
            uVar5 = uVar4 & 0xf;
            if (uVar5 != 0) {
              if ((uVar4 & 3) != 0) goto LAB_140719892;
              uVar5 = 0x10 - uVar5 >> 2;
            }
            if ((longlong)(uVar5 + 4) <= (longlong)uVar15) {
              uVar12 = uVar15 - (uVar15 - uVar5 & 3);
              uVar8 = uVar9;
              if (uVar5 != 0) {
                do {
                  *(undefined4 *)(uVar4 + uVar8 * 4) = *(undefined4 *)(lVar7 + uVar8 * 4);
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar5);
              }
              if ((uVar5 * 4 + lVar7 & 0xf) == 0) {
                do {
                  puVar1 = (undefined4 *)(lVar7 + uVar5 * 4);
                  uVar18 = puVar1[1];
                  uVar19 = puVar1[2];
                  uVar20 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar4 + uVar5 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar18;
                  puVar2[2] = uVar19;
                  puVar2[3] = uVar20;
                  uVar5 = uVar5 + 4;
                } while (uVar5 < uVar12);
              }
              else {
                do {
                  puVar1 = (undefined4 *)(lVar7 + uVar5 * 4);
                  uVar18 = puVar1[1];
                  uVar19 = puVar1[2];
                  uVar20 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar4 + uVar5 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar18;
                  puVar2[2] = uVar19;
                  puVar2[3] = uVar20;
                  uVar5 = uVar5 + 4;
                } while (uVar5 < uVar12);
              }
            }
          }
LAB_140719892:
          if (uVar12 < uVar15) {
            do {
              *(undefined4 *)(param_4 * uVar13 + param_3 + uVar12 * 4) =
                   *(undefined4 *)(lVar7 + uVar12 * 4);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar15);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)(longlong)iVar10);
    }
    if ((uStack_48 ^ (ulonglong)auStack_1d8) == DAT_1436b4680) {
      return;
    }
  }
  else {
    if (uVar3 == 3) {
      puStack_1b8 = &uStack_178;
      uStack_178 = *param_5;
      uStack_170 = param_5[1];
      iStack_190 = param_10;
      iStack_1b0 = param_6;
      uStack_1a8 = param_7;
      puStack_1a0 = param_8;
      uStack_198 = param_9;
      lStack_188 = param_11;
      FUN_140689bc0(param_1,lStack_60,(longlong)iVar10,param_3);
      lVar7 = 1;
      uVar13 = 0;
      if (1 < iVar10) {
        uVar9 = 0;
        lVar11 = ((longlong)param_10 + -1) * param_4 + param_3;
        uVar15 = *param_5 * 2 + *param_5;
        do {
          if (0 < (longlong)uVar15) {
            uVar12 = uVar9;
            if (3 < (longlong)uVar15) {
              uVar4 = param_3 + param_4 * lVar7;
              uVar5 = uVar4 & 0xf;
              if (uVar5 != 0) {
                if ((uVar4 & 3) != 0) goto LAB_140719711;
                uVar5 = 0x10 - uVar5 >> 2;
              }
              if ((longlong)(uVar5 + 4) <= (longlong)uVar15) {
                lVar6 = lVar11 - param_4 * lVar7;
                uVar12 = uVar15 - (uVar15 - uVar5 & 3);
                uVar8 = uVar9;
                if (uVar5 != 0) {
                  do {
                    *(undefined4 *)(uVar4 + uVar8 * 4) = *(undefined4 *)(lVar6 + uVar8 * 4);
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < uVar5);
                }
                if ((uVar5 * 4 + lVar6 & 0xf) == 0) {
                  do {
                    puVar1 = (undefined4 *)(lVar6 + uVar5 * 4);
                    uVar18 = puVar1[1];
                    uVar19 = puVar1[2];
                    uVar20 = puVar1[3];
                    puVar2 = (undefined4 *)(uVar4 + uVar5 * 4);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar18;
                    puVar2[2] = uVar19;
                    puVar2[3] = uVar20;
                    uVar5 = uVar5 + 4;
                  } while (uVar5 < uVar12);
                }
                else {
                  do {
                    puVar1 = (undefined4 *)(lVar6 + uVar5 * 4);
                    uVar18 = puVar1[1];
                    uVar19 = puVar1[2];
                    uVar20 = puVar1[3];
                    puVar2 = (undefined4 *)(uVar4 + uVar5 * 4);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar18;
                    puVar2[2] = uVar19;
                    puVar2[3] = uVar20;
                    uVar5 = uVar5 + 4;
                  } while (uVar5 < uVar12);
                }
              }
            }
LAB_140719711:
            if (uVar12 < uVar15) {
              do {
                *(undefined4 *)(param_3 + lVar7 * param_4 + uVar12 * 4) =
                     *(undefined4 *)((lVar11 - lVar7 * param_4) + uVar12 * 4);
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar15);
            }
          }
          lVar7 = uVar13 + 2;
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulonglong)(longlong)(iVar10 + -1));
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_1d8) == DAT_1436b4680) {
      return;
    }
  }
LAB_140719562:
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

