
/* WARNING: Removing unreachable block (ram,0x000140623642) */

void FUN_1406221c0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined8 *param_8,undefined8 param_9
                  ,uint param_10,longlong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_1c8 [32];
  ulonglong *puStack_1a8;
  int iStack_1a0;
  uint uStack_198;
  undefined8 *puStack_190;
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
  undefined4 *puStack_c8;
  longlong lStack_c0;
  uint uStack_b8;
  longlong lStack_b0;
  ulonglong *puStack_a8;
  uint uStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  iVar12 = (int)param_10 >> 1;
  lVar10 = 0;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_1c8;
  lStack_78 = param_2;
  if (iVar12 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_140623979;
  }
  else {
    uStack_68 = (ulonglong)iVar12;
    uStack_168 = CONCAT44(uStack_168._4_4_,iVar12);
    lVar8 = param_4 * uStack_68 + param_3;
    uStack_98 = param_3;
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
      FUN_1405d9220(lStack_90,lStack_78,lVar10,lVar8);
      uVar15 = uStack_68;
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + lStack_70;
    } while (lVar10 < (longlong)uStack_68);
    param_1 = lStack_90;
    param_4 = lStack_70;
    param_3 = uStack_98;
    iVar12 = (int)uStack_168;
    if ((param_7 & 0x10) != 0) {
      uVar9 = (ulonglong)(int)param_10;
      lStack_138 = 0;
      uVar4 = param_7 & 0xf;
      pcStack_d0 = *(code **)(&DAT_14308b560 + (longlong)param_6 * 8);
      lStack_90 = lStack_90 - lStack_78 * uStack_68;
      lStack_b0 = uVar9 - 1;
      lStack_148 = uVar9 * 3;
      uStack_f8 = 0;
      lStack_150 = param_11 + uVar9 * 0xc;
      lStack_108 = uStack_68 * 3;
      puStack_c8 = (undefined4 *)(param_11 + uStack_68 * 0xc);
      uStack_120 = (ulonglong)puStack_c8 & 0xf;
      uStack_e0 = ((lStack_148 + -1) / 3) * 3;
      uStack_e8 = uStack_e0 >> 1;
      uStack_f0 = lStack_148 - 3;
      uStack_a0 = param_7 & 0xf0;
      lStack_c0 = -uStack_68;
      uStack_b8 = param_7 & 0x80;
      uStack_d8 = param_7 & 0x40;
      uStack_158 = lStack_108 + 2;
      uStack_140 = uStack_158 / 6;
      uStack_128 = (ulonglong)puStack_c8 & 3;
      uStack_110 = (longlong)(int)(param_10 * 3) - 3;
      lStack_100 = uStack_68 * -0xc;
      uStack_118 = uStack_110 >> 1;
      uStack_160 = uStack_158 / 3;
      uStack_168 = 0x10 - uStack_120 >> 2;
      puStack_a8 = param_5;
      uVar14 = 0;
      lVar10 = 0;
      uStack_130 = uVar4;
      do {
        uStack_58 = 0;
        uStack_50 = 0;
        lVar8 = lStack_70 * uVar14 + uStack_98;
        lVar7 = lStack_78 * uVar14 + lStack_90;
        uVar19 = (undefined4)uVar9;
        if (uStack_a0 == 0xf0) {
          puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar19);
          (*pcStack_d0)(lVar7,lVar8,*puStack_a8,param_9);
        }
        else {
          puVar18 = &uStack_58;
          if (uVar4 == 6) {
            puVar18 = param_8;
          }
          uVar11 = *puStack_a8;
          if ((longlong)uVar11 < lStack_b0) {
            uVar13 = 0;
            lVar10 = -uVar15;
            lVar6 = 0;
            if (lStack_c0 < (longlong)(uVar15 + uVar11)) {
              do {
                lVar16 = lVar10;
                if (lVar10 < 0) {
                  if (param_7 != 0xf0) {
                    if (uVar4 == 6) {
                      if (uStack_d8 == 0) goto LAB_1406238eb;
                    }
                    else {
                      if (uVar4 != 1) goto LAB_140623863;
LAB_1406239d9:
                      lVar16 = 0;
                      if (uStack_d8 != 0) {
                        lVar16 = lVar10;
                      }
                    }
                  }
LAB_1406238cc:
                  uVar19 = *(undefined4 *)(lVar7 + lVar16 * 0xc);
                  uVar20 = *(undefined4 *)(lVar7 + 4 + lVar16 * 0xc);
                  uVar21 = *(undefined4 *)(lVar7 + 8 + lVar16 * 0xc);
                }
                else {
                  if ((lVar10 < (longlong)uVar11) || (param_7 == 0xf0)) goto LAB_1406238cc;
                  if (uVar4 != 6) {
                    if (uVar4 == 1) {
                      if (lVar10 < 0) goto LAB_1406239d9;
                      if (uStack_b8 == 0) {
                        lVar16 = uVar11 - 1;
                      }
                    }
                    else {
LAB_140623863:
                      if (uVar4 == 3) {
                        if ((longlong)uVar11 < 2) {
                          if (lVar10 < 0) {
                            if ((uStack_d8 == 0) && (lVar16 = -lVar10, uStack_b8 == 0)) {
                              lVar16 = 0;
                            }
                          }
                          else if (((0 < lVar10) && (uStack_b8 == 0)) &&
                                  (lVar16 = -lVar10, uStack_d8 == 0)) {
                            lVar16 = 0;
                          }
                        }
                        else {
                          if (lVar10 < 0) goto LAB_140623a00;
                          if ((longlong)uVar11 <= lVar10) {
                            while (uStack_b8 == 0) {
                              for (lVar16 = (uVar11 - 1) * 2 - lVar16; lVar16 < 0; lVar16 = -lVar16)
                              {
LAB_140623a00:
                                if (uStack_d8 != 0) goto LAB_1406238cc;
                              }
                              if (lVar16 < (longlong)uVar11) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1406238cc;
                  }
                  if (uStack_b8 != 0) goto LAB_1406238cc;
LAB_1406238eb:
                  uVar19 = *(undefined4 *)puVar18;
                  uVar20 = *(undefined4 *)((longlong)puVar18 + 4);
                  uVar21 = *(undefined4 *)(puVar18 + 1);
                }
                uVar13 = uVar13 + 1;
                lVar10 = lVar10 + 1;
                *(undefined4 *)(lVar6 + param_11) = uVar19;
                *(undefined4 *)(lVar6 + 4 + param_11) = uVar20;
                *(undefined4 *)(lVar6 + 8 + param_11) = uVar21;
                lVar6 = lVar6 + 0xc;
              } while (uVar13 < uVar11 + uVar15 * 2);
              uVar9 = (ulonglong)param_10;
              lStack_138 = lVar8;
              uStack_f8 = uVar14;
              uStack_68 = uVar15;
            }
            puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,(int)uVar9);
            (*pcStack_d0)(puStack_c8,lVar8,uVar11,param_9);
          }
          else {
            if (uStack_d8 == 0) {
              if (0 < (longlong)uStack_f0) {
                if (6 < (longlong)uStack_f0) {
                  lVar16 = lStack_78 * lVar10 + lStack_90;
                  lVar6 = lStack_148 * 4 + -0xc;
                  if ((lVar6 <= (longlong)puStack_c8 - lVar16) ||
                     (lVar6 <= -((longlong)puStack_c8 - lVar16))) {
                    uVar13 = uStack_120;
                    if (((uStack_120 == 0) || (uVar13 = uStack_168, uStack_128 == 0)) &&
                       ((longlong)(uVar13 + 4) <= (longlong)uStack_f0)) {
                      uVar5 = uStack_f0 - (uStack_f0 - uVar13 & 3);
                      uVar17 = 0;
                      if (uVar13 != 0) {
                        do {
                          puStack_c8[uVar17] = *(undefined4 *)(lVar16 + uVar17 * 4);
                          uVar17 = uVar17 + 1;
                        } while (uVar17 < uVar13);
                      }
                      if ((lVar16 + uVar13 * 4 & 0xf) == 0) {
                        do {
                          puVar1 = (undefined4 *)(lVar16 + uVar13 * 4);
                          uVar20 = puVar1[1];
                          uVar21 = puVar1[2];
                          uVar3 = puVar1[3];
                          puVar2 = puStack_c8 + uVar13;
                          *puVar2 = *puVar1;
                          puVar2[1] = uVar20;
                          puVar2[2] = uVar21;
                          puVar2[3] = uVar3;
                          uVar13 = uVar13 + 4;
                        } while (uVar13 < uVar5);
                      }
                      else {
                        do {
                          puVar1 = (undefined4 *)(lVar16 + uVar13 * 4);
                          uVar20 = puVar1[1];
                          uVar21 = puVar1[2];
                          uVar3 = puVar1[3];
                          puVar2 = puStack_c8 + uVar13;
                          *puVar2 = *puVar1;
                          puVar2[1] = uVar20;
                          puVar2[2] = uVar21;
                          puVar2[3] = uVar3;
                          uVar13 = uVar13 + 4;
                        } while (uVar13 < uVar5);
                      }
                    }
                    else {
                      uVar5 = 0;
                    }
                    for (; uVar5 < uStack_f0; uVar5 = uVar5 + 1) {
                      puStack_c8[uVar5] = *(undefined4 *)(lVar16 + uVar5 * 4);
                    }
                    goto LAB_140622dad;
                  }
                }
                lVar6 = 1;
                if (uStack_118 != 0) {
                  lVar6 = lStack_78 * lVar10 + lStack_90;
                  uVar13 = 0;
                  do {
                    uVar5 = uVar13;
                    puStack_c8[uVar5 * 2] = *(undefined4 *)(lVar6 + uVar5 * 8);
                    puStack_c8[uVar5 * 2 + 1] = *(undefined4 *)(lVar6 + 4 + uVar5 * 8);
                    uVar13 = uVar5 + 1;
                  } while (uVar13 < uStack_118);
                  lVar6 = uVar5 + 2 + uVar13;
                }
                uVar13 = lVar6 - 1;
                if (uVar13 < uStack_110) {
                  puStack_c8[uVar13] = *(undefined4 *)(lVar10 * lStack_78 + lStack_90 + uVar13 * 4);
                }
              }
LAB_140622dad:
              if (uVar4 == 1) {
                if (0 < lStack_108) {
                  if (((longlong)uStack_158 / 3 < 7) ||
                     ((param_11 - (longlong)puStack_c8 < 0xc &&
                      (-(param_11 - (longlong)puStack_c8) < ((longlong)uStack_158 / 3) * 0xc)))) {
                    lVar10 = 1;
                    lVar6 = 0;
                    uVar20 = puStack_c8[2];
                    uVar13 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar5 = uVar13;
                        uVar13 = uVar5 + 1;
                        *(undefined4 *)(lVar6 + param_11) = *puStack_c8;
                        *(undefined4 *)(lVar6 + 4 + param_11) = puStack_c8[1];
                        *(undefined4 *)(lVar6 + 8 + param_11) = uVar20;
                        *(undefined4 *)(lVar6 + 0xc + param_11) = *puStack_c8;
                        *(undefined4 *)(lVar6 + 0x10 + param_11) = puStack_c8[1];
                        *(undefined4 *)(lVar6 + 0x14 + param_11) = uVar20;
                        lVar6 = lVar6 + 0x18;
                      } while (uVar13 < uStack_140);
                      lVar10 = uVar5 + 2 + uVar13;
                    }
                    if (lVar10 - 1U < uStack_160) {
                      lVar10 = lVar10 * 3 + -3;
                      *(undefined4 *)(param_11 + lVar10 * 4) = *puStack_c8;
                      *(undefined4 *)(param_11 + 4 + lVar10 * 4) = puStack_c8[1];
                      *(undefined4 *)(param_11 + 8 + lVar10 * 4) = uVar20;
                    }
                  }
                  else {
                    lVar6 = 0;
                    uVar20 = *puStack_c8;
                    uVar21 = puStack_c8[1];
                    uVar3 = puStack_c8[2];
                    lVar10 = 1;
                    uVar13 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar5 = uVar13;
                        uVar13 = uVar5 + 1;
                        *(undefined4 *)(lVar6 + param_11) = uVar20;
                        *(undefined4 *)(lVar6 + 4 + param_11) = uVar21;
                        *(undefined4 *)(lVar6 + 8 + param_11) = uVar3;
                        *(undefined4 *)(lVar6 + 0xc + param_11) = uVar20;
                        *(undefined4 *)(lVar6 + 0x10 + param_11) = uVar21;
                        *(undefined4 *)(lVar6 + 0x14 + param_11) = uVar3;
                        lVar6 = lVar6 + 0x18;
                      } while (uVar13 < uStack_140);
                      lVar10 = uVar5 + 2 + uVar13;
                    }
                    if (lVar10 - 1U < uStack_160) {
                      lVar10 = lVar10 * 3 + -3;
                      *(undefined4 *)(param_11 + lVar10 * 4) = uVar20;
                      *(undefined4 *)(param_11 + 4 + lVar10 * 4) = uVar21;
                      *(undefined4 *)(param_11 + 8 + lVar10 * 4) = uVar3;
                    }
                  }
                }
              }
              else if (uVar4 == 3) {
                if (0 < lStack_108) {
                  lVar10 = 1;
                  lVar16 = 0;
                  lVar6 = 0;
                  uVar13 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar5 = uVar13;
                      uVar13 = uVar5 + 1;
                      *(undefined4 *)(lVar16 + param_11) =
                           *(undefined4 *)(lVar6 + -0xc + lStack_150);
                      *(undefined4 *)(lVar16 + 4 + param_11) =
                           *(undefined4 *)(lVar6 + -8 + lStack_150);
                      *(undefined4 *)(lVar16 + 8 + param_11) =
                           *(undefined4 *)(lVar6 + -4 + lStack_150);
                      *(undefined4 *)(lVar16 + 0xc + param_11) =
                           *(undefined4 *)(lVar6 + -0x18 + lStack_150);
                      *(undefined4 *)(lVar16 + 0x10 + param_11) =
                           *(undefined4 *)(lVar6 + -0x14 + lStack_150);
                      lVar10 = lVar6 + -0x10;
                      lVar6 = lVar6 + -0x18;
                      *(undefined4 *)(lVar16 + 0x14 + param_11) =
                           *(undefined4 *)(lVar10 + lStack_150);
                      lVar16 = lVar16 + 0x18;
                    } while (uVar13 < uStack_140);
                    lVar10 = uVar5 + 2 + uVar13;
                  }
                  if (lVar10 - 1U < uStack_160) {
                    lVar6 = lVar10 * 3 + -3;
                    lVar10 = -((lVar10 - 1U) * 8 + -4 + lVar10 * 4);
                    *(undefined4 *)(param_11 + lVar6 * 4) =
                         *(undefined4 *)(lVar10 + -0xc + lStack_150);
                    *(undefined4 *)(param_11 + 4 + lVar6 * 4) =
                         *(undefined4 *)(lVar10 + -8 + lStack_150);
                    *(undefined4 *)(param_11 + 8 + lVar6 * 4) =
                         *(undefined4 *)(lVar10 + -4 + lStack_150);
                  }
                }
              }
              else if ((uVar4 == 6) && (0 < lStack_108)) {
                if (6 < (longlong)uStack_158 / 3) {
                  lVar10 = ((longlong)uStack_158 / 3) * 0xc;
                  lVar6 = (longlong)puVar18 + (4 - param_11);
                  if (((lVar10 <= lVar6) || (7 < -lVar6)) &&
                     ((3 < param_11 - (longlong)puVar18 ||
                      (lVar10 <= -(param_11 - (longlong)puVar18))))) {
                    lVar10 = 1;
                    uVar20 = *(undefined4 *)puVar18;
                    lVar6 = 0;
                    uVar21 = *(undefined4 *)((longlong)puVar18 + 4);
                    uVar3 = *(undefined4 *)(puVar18 + 1);
                    uVar13 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar5 = uVar13;
                        uVar13 = uVar5 + 1;
                        *(undefined4 *)(lVar6 + param_11) = uVar20;
                        *(undefined4 *)(lVar6 + 4 + param_11) = uVar21;
                        *(undefined4 *)(lVar6 + 8 + param_11) = uVar3;
                        *(undefined4 *)(lVar6 + 0xc + param_11) = uVar20;
                        *(undefined4 *)(lVar6 + 0x10 + param_11) = uVar21;
                        *(undefined4 *)(lVar6 + 0x14 + param_11) = uVar3;
                        lVar6 = lVar6 + 0x18;
                      } while (uVar13 < uStack_140);
                      lVar10 = uVar5 + 2 + uVar13;
                    }
                    if (lVar10 - 1U < uStack_160) {
                      lVar10 = lVar10 * 3 + -3;
                      *(undefined4 *)(param_11 + lVar10 * 4) = uVar20;
                      *(undefined4 *)(param_11 + 4 + lVar10 * 4) = uVar21;
                      *(undefined4 *)(param_11 + 8 + lVar10 * 4) = uVar3;
                    }
                    goto LAB_140623231;
                  }
                }
                lVar10 = 1;
                lVar6 = 0;
                uVar13 = 0;
                if (uStack_140 != 0) {
                  do {
                    uVar5 = uVar13;
                    uVar13 = uVar5 + 1;
                    *(undefined4 *)(lVar6 + param_11) = *(undefined4 *)puVar18;
                    *(undefined4 *)(lVar6 + 4 + param_11) = *(undefined4 *)((longlong)puVar18 + 4);
                    *(undefined4 *)(lVar6 + 8 + param_11) = *(undefined4 *)(puVar18 + 1);
                    *(undefined4 *)(lVar6 + 0xc + param_11) = *(undefined4 *)puVar18;
                    *(undefined4 *)(lVar6 + 0x10 + param_11) =
                         *(undefined4 *)((longlong)puVar18 + 4);
                    *(undefined4 *)(lVar6 + 0x14 + param_11) = *(undefined4 *)(puVar18 + 1);
                    lVar6 = lVar6 + 0x18;
                  } while (uVar13 < uStack_140);
                  lVar10 = uVar5 + 2 + uVar13;
                }
                if (lVar10 - 1U < uStack_160) {
                  lVar10 = lVar10 * 3 + -3;
                  *(undefined4 *)(param_11 + lVar10 * 4) = *(undefined4 *)puVar18;
                  *(undefined4 *)(param_11 + 4 + lVar10 * 4) =
                       *(undefined4 *)((longlong)puVar18 + 4);
                  *(undefined4 *)(param_11 + 8 + lVar10 * 4) = *(undefined4 *)(puVar18 + 1);
                }
              }
LAB_140623231:
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar19);
              (*pcStack_d0)(puStack_c8,lVar8,uVar15);
              uVar11 = uVar11 - uVar15;
              lVar7 = lVar7 + lStack_108 * 4;
              lVar8 = lVar8 + lStack_108 * 4;
            }
            if (uStack_b8 == 0) {
              if ((longlong)uVar15 < (longlong)uVar11) {
                lVar10 = uVar11 - uVar15;
                puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar19);
                (*pcStack_d0)(lVar7,lVar8,lVar10);
                lVar7 = lVar7 + lVar10 * 0xc;
                lVar8 = lVar8 + lVar10 * 0xc;
              }
              if (0 < (longlong)uStack_f0) {
                lVar10 = 1;
                if (uStack_e8 != 0) {
                  uVar11 = 0;
                  do {
                    uVar13 = uVar11;
                    *(undefined4 *)(param_11 + uVar13 * 8) =
                         *(undefined4 *)(lStack_100 + lVar7 + uVar13 * 8);
                    *(undefined4 *)(param_11 + 4 + uVar13 * 8) =
                         *(undefined4 *)(lStack_100 + lVar7 + 4 + uVar13 * 8);
                    uVar11 = uVar13 + 1;
                  } while (uVar11 < uStack_e8);
                  lVar10 = uVar13 + 2 + uVar11;
                }
                uVar11 = lVar10 - 1;
                if (uVar11 < uStack_e0) {
                  *(undefined4 *)(param_11 + uVar11 * 4) =
                       *(undefined4 *)(lVar7 + lStack_100 + uVar11 * 4);
                }
              }
              if (uVar4 == 1) {
                if (0 < lStack_108) {
                  if ((longlong)uStack_158 / 3 < 7) {
                    lVar10 = 1;
                    lVar7 = 0;
                    uVar11 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar13 = uVar11;
                        uVar11 = uVar13 + 1;
                        *(undefined4 *)(lVar7 + -0xc + lStack_150) =
                             *(undefined4 *)(lStack_150 + -0x18);
                        *(undefined4 *)(lVar7 + -8 + lStack_150) =
                             *(undefined4 *)(lStack_150 + -0x14);
                        *(undefined4 *)(lVar7 + -4 + lStack_150) =
                             *(undefined4 *)(lStack_150 + -0x10);
                        *(undefined4 *)(lVar7 + lStack_150) = *(undefined4 *)(lStack_150 + -0x18);
                        *(undefined4 *)(lVar7 + 4 + lStack_150) =
                             *(undefined4 *)(lStack_150 + -0x14);
                        *(undefined4 *)(lVar7 + 8 + lStack_150) =
                             *(undefined4 *)(lStack_150 + -0x10);
                        lVar7 = lVar7 + 0x18;
                      } while (uVar11 < uStack_140);
                      lVar10 = uVar13 + 2 + uVar11;
                    }
                    if (lVar10 - 1U < uStack_160) {
                      lVar10 = lVar10 * 3 + -3;
                      *(undefined4 *)(lStack_150 + -0xc + lVar10 * 4) =
                           *(undefined4 *)(lStack_150 + -0x18);
                      *(undefined4 *)(lStack_150 + -8 + lVar10 * 4) =
                           *(undefined4 *)(lStack_150 + -0x14);
                      *(undefined4 *)(lStack_150 + -4 + lVar10 * 4) =
                           *(undefined4 *)(lStack_150 + -0x10);
                    }
                  }
                  else {
                    lVar10 = 1;
                    lVar7 = 0;
                    uVar20 = *(undefined4 *)(lStack_150 + -0x18);
                    uVar21 = *(undefined4 *)(lStack_150 + -0x14);
                    uVar3 = *(undefined4 *)(lStack_150 + -0x10);
                    uVar11 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar13 = uVar11;
                        uVar11 = uVar13 + 1;
                        *(undefined4 *)(lVar7 + -0xc + lStack_150) = uVar20;
                        *(undefined4 *)(lVar7 + -8 + lStack_150) = uVar21;
                        *(undefined4 *)(lVar7 + -4 + lStack_150) = uVar3;
                        *(undefined4 *)(lVar7 + lStack_150) = uVar20;
                        *(undefined4 *)(lVar7 + 4 + lStack_150) = uVar21;
                        *(undefined4 *)(lVar7 + 8 + lStack_150) = uVar3;
                        lVar7 = lVar7 + 0x18;
                      } while (uVar11 < uStack_140);
                      lVar10 = uVar13 + 2 + uVar11;
                    }
                    if (lVar10 - 1U < uStack_160) {
                      lVar10 = lVar10 * 3 + -3;
                      *(undefined4 *)(lStack_150 + -0xc + lVar10 * 4) = uVar20;
                      *(undefined4 *)(lStack_150 + -8 + lVar10 * 4) = uVar21;
                      *(undefined4 *)(lStack_150 + -4 + lVar10 * 4) = uVar3;
                    }
                  }
                }
              }
              else if (uVar4 == 3) {
                if (0 < lStack_108) {
                  lVar10 = 1;
                  lVar6 = 0;
                  lVar7 = 0;
                  uVar11 = 0;
                  if (uStack_140 != 0) {
                    do {
                      uVar13 = uVar11;
                      uVar11 = uVar13 + 1;
                      *(undefined4 *)(lVar6 + -0xc + lStack_150) =
                           *(undefined4 *)(lVar7 + -0x24 + lStack_150);
                      *(undefined4 *)(lVar6 + -8 + lStack_150) =
                           *(undefined4 *)(lVar7 + -0x20 + lStack_150);
                      *(undefined4 *)(lVar6 + -4 + lStack_150) =
                           *(undefined4 *)(lVar7 + -0x1c + lStack_150);
                      *(undefined4 *)(lVar6 + lStack_150) =
                           *(undefined4 *)(lVar7 + -0x30 + lStack_150);
                      *(undefined4 *)(lVar6 + 4 + lStack_150) =
                           *(undefined4 *)(lVar7 + -0x2c + lStack_150);
                      lVar10 = lVar7 + -0x28;
                      lVar7 = lVar7 + -0x18;
                      *(undefined4 *)(lVar6 + 8 + lStack_150) = *(undefined4 *)(lVar10 + lStack_150)
                      ;
                      lVar6 = lVar6 + 0x18;
                    } while (uVar11 < uStack_140);
                    lVar10 = uVar13 + 2 + uVar11;
                  }
                  if (lVar10 - 1U < uStack_160) {
                    lVar7 = lVar10 * 3 + -3;
                    lVar10 = -((lVar10 - 1U) * 8 + -4 + lVar10 * 4);
                    *(undefined4 *)(lStack_150 + -0xc + lVar7 * 4) =
                         *(undefined4 *)(lVar10 + -0x24 + lStack_150);
                    *(undefined4 *)(lStack_150 + -8 + lVar7 * 4) =
                         *(undefined4 *)(lVar10 + -0x20 + lStack_150);
                    *(undefined4 *)(lStack_150 + -4 + lVar7 * 4) =
                         *(undefined4 *)(lVar10 + -0x1c + lStack_150);
                  }
                }
              }
              else if ((uVar4 == 6) && (0 < lStack_108)) {
                if (6 < (longlong)uStack_158 / 3) {
                  lVar10 = ((longlong)uStack_158 / 3) * 0xc;
                  lVar7 = (longlong)puVar18 + (4 - (lStack_150 + -0xc));
                  if (((lVar10 <= lVar7) || (7 < -lVar7)) &&
                     ((lVar7 = (lStack_150 + -0xc) - (longlong)puVar18, 3 < lVar7 ||
                      (lVar10 <= -lVar7)))) {
                    lVar10 = 1;
                    uVar20 = *(undefined4 *)puVar18;
                    lVar7 = 0;
                    uVar21 = *(undefined4 *)((longlong)puVar18 + 4);
                    uVar3 = *(undefined4 *)(puVar18 + 1);
                    uVar11 = 0;
                    if (uStack_140 != 0) {
                      do {
                        uVar13 = uVar11;
                        uVar11 = uVar13 + 1;
                        *(undefined4 *)(lVar7 + -0xc + lStack_150) = uVar20;
                        *(undefined4 *)(lVar7 + -8 + lStack_150) = uVar21;
                        *(undefined4 *)(lVar7 + -4 + lStack_150) = uVar3;
                        *(undefined4 *)(lVar7 + lStack_150) = uVar20;
                        *(undefined4 *)(lVar7 + 4 + lStack_150) = uVar21;
                        *(undefined4 *)(lVar7 + 8 + lStack_150) = uVar3;
                        lVar7 = lVar7 + 0x18;
                      } while (uVar11 < uStack_140);
                      lVar10 = uVar13 + 2 + uVar11;
                    }
                    if (lVar10 - 1U < uStack_160) {
                      lVar10 = lVar10 * 3 + -3;
                      *(undefined4 *)(lStack_150 + -0xc + lVar10 * 4) = uVar20;
                      *(undefined4 *)(lStack_150 + -8 + lVar10 * 4) = uVar21;
                      *(undefined4 *)(lStack_150 + -4 + lVar10 * 4) = uVar3;
                    }
                    goto LAB_140623793;
                  }
                }
                lVar10 = 1;
                lVar7 = 0;
                uVar11 = 0;
                if (uStack_140 != 0) {
                  do {
                    uVar13 = uVar11;
                    uVar11 = uVar13 + 1;
                    *(undefined4 *)(lVar7 + -0xc + lStack_150) = *(undefined4 *)puVar18;
                    *(undefined4 *)(lVar7 + -8 + lStack_150) =
                         *(undefined4 *)((longlong)puVar18 + 4);
                    *(undefined4 *)(lVar7 + -4 + lStack_150) = *(undefined4 *)(puVar18 + 1);
                    *(undefined4 *)(lVar7 + lStack_150) = *(undefined4 *)puVar18;
                    *(undefined4 *)(lVar7 + 4 + lStack_150) = *(undefined4 *)((longlong)puVar18 + 4)
                    ;
                    *(undefined4 *)(lVar7 + 8 + lStack_150) = *(undefined4 *)(puVar18 + 1);
                    lVar7 = lVar7 + 0x18;
                  } while (uVar11 < uStack_140);
                  lVar10 = uVar13 + 2 + uVar11;
                }
                if (lVar10 - 1U < uStack_160) {
                  lVar10 = lVar10 * 3 + -3;
                  *(undefined4 *)(lStack_150 + -0xc + lVar10 * 4) = *(undefined4 *)puVar18;
                  *(undefined4 *)(lStack_150 + -8 + lVar10 * 4) =
                       *(undefined4 *)((longlong)puVar18 + 4);
                  *(undefined4 *)(lStack_150 + -4 + lVar10 * 4) = *(undefined4 *)(puVar18 + 1);
                }
              }
LAB_140623793:
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar19);
              (*pcStack_d0)(puStack_c8,lVar8,uVar15,param_9);
            }
            else {
              puStack_1a8 = (ulonglong *)CONCAT44(puStack_1a8._4_4_,uVar19);
              (*pcStack_d0)(lVar7,lVar8,uVar11,param_9);
            }
          }
        }
        iVar12 = (int)uVar14;
        uVar14 = uVar14 + 1;
        lVar10 = (longlong)iVar12 + 1;
      } while (uVar14 < uVar15);
LAB_140623979:
      if ((uStack_48 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
        return;
      }
      goto LAB_14062235c;
    }
  }
  uVar4 = param_7 & 0xf;
  if (uVar4 == 6) {
    uVar15 = (ulonglong)iVar12;
    if (0 < (longlong)uVar15) {
      uStack_168 = *param_5 * 3;
      uVar14 = uStack_168 + 2;
      if (((param_4 < (longlong)uVar14 / 3) ||
          ((puVar18 = (undefined8 *)
                      ((uVar15 - 1) * param_4 + (((longlong)uVar14 / 3) * 3 + -3) * 4 + 0xb +
                      param_3), param_8 < puVar18 && (param_3 < (longlong)param_8 + 3U)))) ||
         ((param_3 < (longlong)param_8 + 0xbU && ((undefined8 *)((longlong)param_8 + 4U) < puVar18))
         )) {
        uVar9 = 0;
        lVar10 = 0;
        do {
          if (0 < (longlong)uStack_168) {
            lVar8 = 1;
            if (uVar14 / 6 != 0) {
              lVar8 = param_3 + lVar10;
              uVar11 = 0;
              uVar13 = 0;
              do {
                uVar5 = uVar13;
                uVar13 = uVar5 + 1;
                *(undefined4 *)(uVar11 + lVar8) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar11 + 4 + lVar8) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar11 + 8 + lVar8) = *(undefined4 *)(param_8 + 1);
                *(undefined4 *)(uVar11 + 0xc + lVar8) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar11 + 0x10 + lVar8) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar11 + 0x14 + lVar8) = *(undefined4 *)(param_8 + 1);
                uVar11 = uVar11 + 0x18;
              } while (uVar13 < uVar14 / 6);
              lVar8 = uVar5 + 2 + uVar13;
            }
            if (lVar8 - 1U < uVar14 / 3) {
              lVar8 = param_3 + (lVar8 * 3 + -3) * 4;
              *(undefined4 *)(lVar8 + lVar10) = *(undefined4 *)param_8;
              *(undefined4 *)(lVar8 + 4 + lVar10) = *(undefined4 *)((longlong)param_8 + 4);
              *(undefined4 *)(lVar8 + 8 + lVar10) = *(undefined4 *)(param_8 + 1);
            }
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + param_4;
        } while (uVar9 < uVar15);
      }
      else {
        uVar9 = 0;
        lVar10 = 0;
        do {
          if (0 < (longlong)uStack_168) {
            lVar8 = 1;
            if (uVar14 / 6 != 0) {
              lVar8 = param_3 + lVar10;
              uVar11 = 0;
              uVar13 = 0;
              do {
                uVar5 = uVar13;
                uVar13 = uVar5 + 1;
                *(undefined4 *)(uVar11 + lVar8) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar11 + 4 + lVar8) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar11 + 8 + lVar8) = *(undefined4 *)(param_8 + 1);
                *(undefined4 *)(uVar11 + 0xc + lVar8) = *(undefined4 *)param_8;
                *(undefined4 *)(uVar11 + 0x10 + lVar8) = *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)(uVar11 + 0x14 + lVar8) = *(undefined4 *)(param_8 + 1);
                uVar11 = uVar11 + 0x18;
              } while (uVar13 < uVar14 / 6);
              lVar8 = uVar5 + 2 + uVar13;
            }
            if (lVar8 - 1U < uVar14 / 3) {
              lVar8 = param_3 + (lVar8 * 3 + -3) * 4;
              *(undefined4 *)(lVar8 + lVar10) = *(undefined4 *)param_8;
              *(undefined4 *)(lVar8 + 4 + lVar10) = *(undefined4 *)((longlong)param_8 + 4);
              *(undefined4 *)(lVar8 + 8 + lVar10) = *(undefined4 *)(param_8 + 1);
            }
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + param_4;
        } while (uVar9 < uVar15);
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return;
    }
  }
  else if (uVar4 == 1) {
    uVar15 = 0;
    if (0 < iVar12) {
      lVar10 = param_4 * iVar12 + param_3;
      uVar9 = 0;
      uVar14 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar14) {
          uVar11 = uVar9;
          if (3 < (longlong)uVar14) {
            uVar5 = param_4 * uVar15 + param_3;
            uVar13 = uVar5 & 0xf;
            if (uVar13 != 0) {
              if ((uVar5 & 3) != 0) goto LAB_140622632;
              uVar13 = 0x10 - uVar13 >> 2;
            }
            if ((longlong)(uVar13 + 4) <= (longlong)uVar14) {
              uVar11 = uVar14 - (uVar14 - uVar13 & 3);
              uVar17 = uVar9;
              if (uVar13 != 0) {
                do {
                  *(undefined4 *)(uVar5 + uVar17 * 4) = *(undefined4 *)(lVar10 + uVar17 * 4);
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar13);
              }
              if ((lVar10 + uVar13 * 4 & 0xf) == 0) {
                do {
                  puVar1 = (undefined4 *)(lVar10 + uVar13 * 4);
                  uVar19 = puVar1[1];
                  uVar20 = puVar1[2];
                  uVar21 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar5 + uVar13 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar19;
                  puVar2[2] = uVar20;
                  puVar2[3] = uVar21;
                  uVar13 = uVar13 + 4;
                } while (uVar13 < uVar11);
              }
              else {
                do {
                  puVar1 = (undefined4 *)(lVar10 + uVar13 * 4);
                  uVar19 = puVar1[1];
                  uVar20 = puVar1[2];
                  uVar21 = puVar1[3];
                  puVar2 = (undefined4 *)(uVar5 + uVar13 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar19;
                  puVar2[2] = uVar20;
                  puVar2[3] = uVar21;
                  uVar13 = uVar13 + 4;
                } while (uVar13 < uVar11);
              }
            }
          }
LAB_140622632:
          if (uVar11 < uVar14) {
            do {
              *(undefined4 *)(param_4 * uVar15 + param_3 + uVar11 * 4) =
                   *(undefined4 *)(lVar10 + uVar11 * 4);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar14);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulonglong)(longlong)iVar12);
    }
    if ((uStack_48 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return;
    }
  }
  else {
    if (uVar4 == 3) {
      puStack_1a8 = &uStack_168;
      uStack_168 = *param_5;
      uStack_160 = param_5[1];
      iStack_1a0 = param_6;
      puStack_190 = param_8;
      uStack_188 = param_9;
      lStack_178 = param_11;
      uStack_180 = param_10;
      uStack_198 = param_7;
      FUN_1405d9220(param_1,lStack_78,(longlong)iVar12,param_3);
      lVar10 = 1;
      uVar15 = 0;
      if (1 < iVar12) {
        uVar9 = 0;
        lVar8 = ((longlong)(int)param_10 + -1) * param_4 + param_3;
        uVar14 = *param_5 * 3;
        do {
          if (0 < (longlong)uVar14) {
            uVar11 = uVar9;
            if (3 < (longlong)uVar14) {
              uVar13 = param_3 + param_4 * lVar10;
              uVar5 = uVar13 & 0xf;
              if (uVar5 != 0) {
                if ((uVar13 & 3) != 0) goto LAB_1406224d1;
                uVar5 = 0x10 - uVar5 >> 2;
              }
              if ((longlong)(uVar5 + 4) <= (longlong)uVar14) {
                lVar7 = lVar8 - param_4 * lVar10;
                uVar11 = uVar14 - (uVar14 - uVar5 & 3);
                uVar17 = uVar9;
                if (uVar5 != 0) {
                  do {
                    *(undefined4 *)(uVar13 + uVar17 * 4) = *(undefined4 *)(lVar7 + uVar17 * 4);
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar5);
                }
                if ((lVar7 + uVar5 * 4 & 0xf) == 0) {
                  do {
                    puVar1 = (undefined4 *)(lVar7 + uVar5 * 4);
                    uVar19 = puVar1[1];
                    uVar20 = puVar1[2];
                    uVar21 = puVar1[3];
                    puVar2 = (undefined4 *)(uVar13 + uVar5 * 4);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar19;
                    puVar2[2] = uVar20;
                    puVar2[3] = uVar21;
                    uVar5 = uVar5 + 4;
                  } while (uVar5 < uVar11);
                }
                else {
                  do {
                    puVar1 = (undefined4 *)(lVar7 + uVar5 * 4);
                    uVar19 = puVar1[1];
                    uVar20 = puVar1[2];
                    uVar21 = puVar1[3];
                    puVar2 = (undefined4 *)(uVar13 + uVar5 * 4);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar19;
                    puVar2[2] = uVar20;
                    puVar2[3] = uVar21;
                    uVar5 = uVar5 + 4;
                  } while (uVar5 < uVar11);
                }
              }
            }
LAB_1406224d1:
            if (uVar11 < uVar14) {
              do {
                *(undefined4 *)(param_3 + lVar10 * param_4 + uVar11 * 4) =
                     *(undefined4 *)((lVar8 - lVar10 * param_4) + uVar11 * 4);
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar14);
            }
          }
          lVar10 = uVar15 + 2;
          uVar15 = uVar15 + 1;
        } while (uVar15 < (ulonglong)(longlong)(iVar12 + -1));
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_1c8) == DAT_1436b4680) {
      return;
    }
  }
LAB_14062235c:
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

