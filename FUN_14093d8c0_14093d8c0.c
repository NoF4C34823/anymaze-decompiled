
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14093d8c0(longlong param_1,longlong param_2,float *param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [32];
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  byte bVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte *pbVar26;
  float *pfVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  float fVar37;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  uint uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar49 [32];
  undefined1 in_ZMM7 [64];
  undefined4 uVar52;
  undefined8 uVar50;
  longlong *plVar51;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  ulonglong uStack_188;
  longlong lStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  uint uStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  float *pfStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  uint uStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  longlong *plStack_90;
  uint uStack_88;
  float *pfStack_80;
  byte abStack_78 [8];
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  int iStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  iVar22 = param_10 >> 1;
  lVar20 = 0;
  lStack_48 = param_2;
  if (iVar22 < 1) {
    lStack_1f0._0_4_ = param_6;
    if ((param_7 & 0x10) != 0) {
      return;
    }
  }
  else {
    uStack_40 = (ulonglong)iVar22;
    pfVar27 = (float *)(param_4 * uStack_40 + (longlong)param_3);
    iStack_50 = param_10;
    lStack_1f0 = CONCAT44(lStack_1f0._4_4_,param_6);
    pfStack_80 = param_3;
    lStack_70 = param_4;
    lStack_58 = param_1;
    uStack_1f8._0_4_ = iVar22;
    do {
      plVar51 = &lStack_68;
      lStack_68 = *param_5;
      lStack_60 = param_5[1];
      FUN_1408e2fa0(lStack_58,lStack_48,lVar20,pfVar27,plVar51,(int)lStack_1f0,param_7,param_8,
                    param_9,iStack_50,param_11);
      lVar20 = lVar20 + 1;
      pfVar27 = (float *)((longlong)pfVar27 + lStack_70);
    } while (lVar20 < (longlong)uStack_40);
    param_3 = pfStack_80;
    param_4 = lStack_70;
    param_10 = iStack_50;
    iVar22 = (int)uStack_1f8;
    if ((param_7 & 0x10) != 0) {
      uStack_b0 = param_9;
      pcStack_c8 = (code *)(&PTR_FUN_14308d6c0)[(int)lStack_1f0];
      pbStack_98 = param_8;
      lStack_160 = (longlong)iStack_50 * 3;
      uVar19 = param_7 & 0xf;
      lStack_58 = lStack_58 - lStack_48 * uStack_40;
      lStack_a0 = (longlong)iStack_50 + -1;
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,param_7) & 0xffffffff0000000f;
      lStack_1f0 = 0;
      uStack_f0 = 0;
      uStack_118 = (longlong)(lStack_160 - 1U) / 3;
      uStack_110 = (lStack_160 - 1U) / 3;
      lStack_158 = param_11 + lStack_160;
      uStack_d8 = lStack_160 - 3;
      lStack_108 = uStack_40 * 3;
      uStack_88 = param_7 & 0xf0;
      uStack_150 = lStack_108 + 2;
      lStack_b8 = -uStack_40;
      uStack_168 = (longlong)uStack_150 / 3;
      uStack_170 = uStack_150 / 3;
      uStack_a8 = param_7 & 0x80;
      uStack_150 = uStack_150 / 6;
      puStack_c0 = (undefined1 *)(param_11 + lStack_108);
      uStack_d0 = param_7 & 0x40;
      lStack_180 = uStack_40 * -3;
      uStack_140 = (ulonglong)puStack_c0 & 0x1f;
      uStack_128 = uStack_118 & 0xffffffffffffffe0;
      uStack_178 = uStack_168 & 0xffffffffffffffe0;
      uStack_130 = (longlong)(iStack_50 * 3) - 3;
      uStack_148 = 0x20 - uStack_140;
      uStack_138 = uStack_130 >> 1;
      uStack_188 = uStack_d8 & 0xffffffffffffffe0;
      uStack_120 = ((longlong)(iStack_50 * 3) - 1U) / 6;
      lStack_f8 = param_11;
      uVar13 = 0;
      lVar20 = 0;
      auStack_198 = in_ZMM6._0_16_;
      auStack_1a8 = in_ZMM7._0_16_;
      uStack_100 = param_7;
      plStack_90 = param_5;
      uVar29 = uStack_40;
      do {
        abStack_78[0] = 0;
        abStack_78[1] = 0;
        abStack_78[2] = 0;
        pfVar27 = (float *)(lStack_70 * uVar13 + (longlong)pfStack_80);
        lVar25 = lStack_48 * uVar13 + lStack_58;
        uVar52 = (undefined4)((ulonglong)plVar51 >> 0x20);
        if (uStack_88 == 0xf0) {
          plVar51 = (longlong *)CONCAT44(uVar52,iStack_50);
          (*pcStack_c8)(lVar25,pfVar27,*plStack_90,uStack_b0,plVar51);
        }
        else {
          pbVar26 = abStack_78;
          if (uVar19 == 6) {
            pbVar26 = pbStack_98;
          }
          lVar11 = *plStack_90;
          if (lVar11 < lStack_a0) {
            uVar24 = 0;
            lVar15 = -uVar29;
            lVar20 = 0;
            if (lStack_b8 < (longlong)(uVar29 + lVar11)) {
              lStack_e0 = lVar11 + -1;
              lVar16 = uVar29 * 2;
              do {
                lVar17 = lVar15;
                if (lVar15 < 0) {
                  if (uStack_100 != 0xf0) {
                    if (uVar19 == 6) {
                      if (uStack_d0 == 0) goto LAB_14093f915;
                    }
                    else {
                      if (uVar19 != 1) goto LAB_14093f88c;
LAB_14093fa3e:
                      lVar17 = 0;
                      if (uStack_d0 != 0) {
                        lVar17 = lVar15;
                      }
                    }
                  }
LAB_14093f8fc:
                  lVar17 = lVar17 * 3;
                  bVar12 = *(byte *)(lVar17 + lVar25);
                  bVar18 = *(byte *)(lVar17 + 1 + lVar25);
                  bVar23 = *(byte *)(lVar17 + 2 + lVar25);
                }
                else {
                  if ((lVar15 < lVar11) || (uStack_100 == 0xf0)) goto LAB_14093f8fc;
                  if (uVar19 != 6) {
                    if (uVar19 == 1) {
                      if (lVar15 < 0) goto LAB_14093fa3e;
                      if (uStack_a8 == 0) {
                        lVar17 = lStack_e0;
                      }
                    }
                    else {
LAB_14093f88c:
                      if (uVar19 == 3) {
                        if (lVar11 < 2) {
                          if (lVar15 < 0) {
                            if (uStack_d0 == 0) {
                              lVar17 = -lVar15;
                              if (uStack_a8 == 0) {
                                lVar17 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar15) && (uStack_a8 == 0)) &&
                                  (lVar17 = -lVar15, uStack_d0 == 0)) {
                            lVar17 = 0;
                          }
                        }
                        else {
                          if (lVar15 < 0) goto LAB_14093fa60;
                          if (lVar11 <= lVar15) {
                            while (uStack_a8 == 0) {
                              for (lVar17 = lStack_e0 * 2 - lVar17; lVar17 < 0; lVar17 = -lVar17) {
LAB_14093fa60:
                                if (uStack_d0 != 0) goto LAB_14093f8fc;
                              }
                              if (lVar17 < lVar11) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14093f8fc;
                  }
                  if (uStack_a8 != 0) goto LAB_14093f8fc;
LAB_14093f915:
                  bVar12 = *pbVar26;
                  bVar18 = pbVar26[1];
                  bVar23 = pbVar26[2];
                }
                uVar24 = uVar24 + 1;
                lVar15 = lVar15 + 1;
                *(byte *)(lVar20 + lStack_f8) = bVar12;
                *(byte *)(lVar20 + 1 + lStack_f8) = bVar18;
                *(byte *)(lVar20 + 2 + lStack_f8) = bVar23;
                lVar20 = lVar20 + 3;
                uVar29 = uStack_40;
                uStack_f0 = uVar13;
                pfStack_e8 = pfVar27;
              } while (uVar24 < (ulonglong)(lVar11 + lVar16));
            }
            plVar51 = (longlong *)CONCAT44(uVar52,iStack_50);
            (*pcStack_c8)(puStack_c0,pfVar27,lVar11,uStack_b0,plVar51);
          }
          else {
            if (uStack_d0 == 0) {
              if (0 < (longlong)uStack_d8) {
                if (6 < (longlong)uStack_d8) {
                  lVar15 = lStack_48 * lVar20 + lStack_58;
                  if ((lStack_160 + -3 <= (longlong)puStack_c0 - lVar15) ||
                     (lStack_160 + -3 <= -((longlong)puStack_c0 - lVar15))) {
                    if ((longlong)uStack_d8 < 0x20) {
LAB_14093f9c4:
                      uVar21 = 0;
                    }
                    else {
                      if ((longlong)uStack_d8 < 0xa91) {
                        uVar24 = 0;
                        uVar21 = uStack_188;
                      }
                      else {
                        uVar24 = uStack_140;
                        if (uStack_140 != 0) {
                          uVar24 = uStack_148;
                        }
                        if ((longlong)uStack_d8 < (longlong)(uVar24 + 0x20)) goto LAB_14093f9c4;
                        uVar21 = uStack_d8 - (uStack_d8 - uVar24 & 0x1f);
                        uVar28 = 0;
                        if (uVar24 != 0) {
                          do {
                            puStack_c0[uVar28] = *(undefined1 *)(uVar28 + lVar15);
                            uVar28 = uVar28 + 1;
                          } while (uVar28 < uVar24);
                        }
                      }
                      do {
                        puVar1 = (undefined8 *)(uVar24 + lVar15);
                        uVar50 = puVar1[1];
                        uVar8 = puVar1[2];
                        uVar9 = puVar1[3];
                        puVar3 = (undefined8 *)(puStack_c0 + uVar24);
                        *puVar3 = *puVar1;
                        puVar3[1] = uVar50;
                        puVar3[2] = uVar8;
                        puVar3[3] = uVar9;
                        uVar24 = uVar24 + 0x20;
                      } while (uVar24 < uVar21);
                    }
                    if (uVar21 + 1 <= uStack_d8) {
                      uVar24 = uStack_d8 - uVar21;
                      if ((longlong)uVar24 < 8) {
                        uVar28 = 0;
                      }
                      else {
                        uVar28 = uVar24 & 0xfffffffffffffff8;
                        uVar14 = 0;
                        do {
                          *(undefined8 *)(puStack_c0 + uVar14 + uVar21) =
                               *(undefined8 *)(uVar21 + lVar15 + uVar14);
                          uVar14 = uVar14 + 8;
                        } while (uVar14 < uVar28);
                      }
                      if (uVar28 < uVar24) {
                        do {
                          puStack_c0[uVar28 + uVar21] = *(undefined1 *)(uVar28 + lVar15 + uVar21);
                          uVar28 = uVar28 + 1;
                        } while (uVar28 < uVar24);
                      }
                    }
                    goto LAB_14093e52d;
                  }
                }
                lVar15 = 1;
                if (uStack_138 != 0) {
                  lVar15 = lStack_48 * lVar20 + lStack_58;
                  uVar24 = 0;
                  do {
                    uVar21 = uVar24;
                    puStack_c0[uVar21 * 2] = *(undefined1 *)(lVar15 + uVar21 * 2);
                    puStack_c0[uVar21 * 2 + 1] = *(undefined1 *)(lVar15 + 1 + uVar21 * 2);
                    uVar24 = uVar21 + 1;
                  } while (uVar24 < uStack_138);
                  lVar15 = uVar21 + 2 + uVar24;
                }
                uVar24 = lVar15 - 1;
                if (uVar24 < uStack_130) {
                  puStack_c0[uVar24] = *(undefined1 *)(uVar24 + lVar20 * lStack_48 + lStack_58);
                }
              }
LAB_14093e52d:
              if (uVar19 == 1) {
                if (0 < lStack_108) {
                  lVar20 = 1;
                  uVar24 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar21 = uVar24;
                      *(undefined1 *)(lStack_f8 + uVar21 * 6) = *puStack_c0;
                      uVar24 = uVar21 + 1;
                      uVar5 = puStack_c0[2];
                      *(undefined1 *)(lStack_f8 + 1 + uVar21 * 6) = puStack_c0[1];
                      *(undefined1 *)(lStack_f8 + 2 + uVar21 * 6) = uVar5;
                      *(undefined1 *)(lStack_f8 + 3 + uVar21 * 6) = *puStack_c0;
                      uVar5 = puStack_c0[2];
                      *(undefined1 *)(lStack_f8 + 4 + uVar21 * 6) = puStack_c0[1];
                      *(undefined1 *)(lStack_f8 + 5 + uVar21 * 6) = uVar5;
                    } while (uVar24 < uStack_150);
                    lVar20 = uVar21 + 2 + uVar24;
                  }
                  if (lVar20 - 1U < uStack_170) {
                    lVar20 = lVar20 * 3;
                    *(undefined1 *)(lVar20 + -3 + lStack_f8) = *puStack_c0;
                    uVar5 = puStack_c0[2];
                    *(undefined1 *)(lVar20 + -2 + lStack_f8) = puStack_c0[1];
                    *(undefined1 *)(lVar20 + -1 + lStack_f8) = uVar5;
                  }
                }
              }
              else if (uVar19 == 3) {
                if (0 < lStack_108) {
                  lVar20 = 1;
                  lVar16 = 0;
                  lVar15 = 0;
                  uVar24 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar21 = uVar24;
                      uVar24 = uVar21 + 1;
                      *(undefined1 *)(lVar16 + lStack_f8) =
                           *(undefined1 *)(lVar15 + -3 + lStack_158);
                      *(undefined1 *)(lVar16 + 1 + lStack_f8) =
                           *(undefined1 *)(lVar15 + -2 + lStack_158);
                      *(undefined1 *)(lVar16 + 2 + lStack_f8) =
                           *(undefined1 *)(lVar15 + -1 + lStack_158);
                      *(undefined1 *)(lVar16 + 3 + lStack_f8) =
                           *(undefined1 *)(lVar15 + -6 + lStack_158);
                      *(undefined1 *)(lVar16 + 4 + lStack_f8) =
                           *(undefined1 *)(lVar15 + -5 + lStack_158);
                      lVar20 = lVar15 + -4;
                      lVar15 = lVar15 + -6;
                      *(undefined1 *)(lVar16 + 5 + lStack_f8) = *(undefined1 *)(lVar20 + lStack_158)
                      ;
                      lVar16 = lVar16 + 6;
                    } while (uVar24 < uStack_150);
                    lVar20 = uVar21 + 2 + uVar24;
                  }
                  if (lVar20 - 1U < uStack_170) {
                    lVar20 = lVar20 * 3;
                    lVar15 = -(lVar20 + -3);
                    *(undefined1 *)(lVar20 + -3 + lStack_f8) =
                         *(undefined1 *)(lVar15 + -3 + lStack_158);
                    *(undefined1 *)(lVar20 + -2 + lStack_f8) =
                         *(undefined1 *)(lVar15 + -2 + lStack_158);
                    *(undefined1 *)(lVar20 + -1 + lStack_f8) =
                         *(undefined1 *)(lVar15 + -1 + lStack_158);
                  }
                }
              }
              else if ((uVar19 == 6) && (0 < lStack_108)) {
                lVar20 = 1;
                uVar24 = 0;
                if (uStack_150 != 0) {
                  do {
                    uVar21 = uVar24;
                    *(byte *)(lStack_f8 + uVar21 * 6) = *pbVar26;
                    uVar24 = uVar21 + 1;
                    *(byte *)(lStack_f8 + 1 + uVar21 * 6) = pbVar26[1];
                    *(byte *)(lStack_f8 + 2 + uVar21 * 6) = pbVar26[2];
                    *(byte *)(lStack_f8 + 3 + uVar21 * 6) = *pbVar26;
                    *(byte *)(lStack_f8 + 4 + uVar21 * 6) = pbVar26[1];
                    *(byte *)(lStack_f8 + 5 + uVar21 * 6) = pbVar26[2];
                  } while (uVar24 < uStack_150);
                  lVar20 = uVar21 + 2 + uVar24;
                }
                if (lVar20 - 1U < uStack_170) {
                  lVar20 = lVar20 * 3;
                  *(byte *)(lVar20 + -3 + lStack_f8) = *pbVar26;
                  *(byte *)(lVar20 + -2 + lStack_f8) = pbVar26[1];
                  *(byte *)(lVar20 + -1 + lStack_f8) = pbVar26[2];
                }
              }
              uVar50 = CONCAT44(uVar52,iStack_50);
              (*pcStack_c8)(puStack_c0,pfVar27,uVar29,uStack_b0,uVar50);
              uVar52 = (undefined4)((ulonglong)uVar50 >> 0x20);
              lVar11 = lVar11 - uVar29;
              lVar25 = lVar25 + lStack_108;
              pfVar27 = pfVar27 + lStack_108;
            }
            if (uStack_a8 == 0) {
              if ((longlong)uVar29 < lVar11) {
                lVar11 = lVar11 - uVar29;
                uVar50 = CONCAT44(uVar52,iStack_50);
                (*pcStack_c8)(lVar25,pfVar27,lVar11,uStack_b0,uVar50);
                uVar52 = (undefined4)((ulonglong)uVar50 >> 0x20);
                lVar25 = lVar25 + lVar11 * 3;
                pfVar27 = pfVar27 + lVar11 * 3;
              }
              if (0 < (longlong)uStack_d8) {
                lVar11 = lStack_180 + lVar25;
                lVar20 = uStack_118 * 3;
                if ((lVar20 <= lStack_f8 - lVar11) || (lVar20 + -2 <= -(lStack_f8 - lVar11))) {
                  lVar15 = (lStack_f8 + 1) - lVar11;
                  if (((lVar20 <= lVar15) || (lVar20 + -1 <= -lVar15)) &&
                     ((lVar15 = (lStack_f8 + 1) - lStack_f8, lVar20 + -2 <= lVar15 ||
                      (lVar20 + -1 <= -lVar15)))) {
                    lVar20 = 1;
                    uVar24 = 0;
                    if (uStack_120 != 0) {
                      do {
                        uVar21 = uVar24;
                        uVar24 = uVar21 + 1;
                        *(undefined1 *)(lStack_f8 + uVar21 * 6) =
                             *(undefined1 *)(lVar11 + uVar21 * 6);
                        *(undefined1 *)(lStack_f8 + 3 + uVar21 * 6) =
                             *(undefined1 *)(lVar11 + 3 + uVar21 * 6);
                      } while (uVar24 < uStack_120);
                      lVar20 = uVar21 + 2 + uVar24;
                    }
                    if (lVar20 - 1U < uStack_110) {
                      lVar20 = lVar20 * 3 + -3;
                      *(undefined1 *)(lVar20 + lStack_f8) = *(undefined1 *)(lVar11 + lVar20);
                    }
                    auVar43 = _DAT_14308d8d0;
                    if ((longlong)uStack_118 < 0x20) {
                      uVar24 = 0;
                    }
                    else {
                      uVar21 = 0;
                      lVar20 = uVar29 * -3;
                      lVar15 = 0;
                      do {
                        uVar21 = uVar21 + 0x20;
                        puVar4 = (ushort *)(lVar15 + 1 + lVar25 + lVar20);
                        auVar34 = vpinsrw_avx(ZEXT216(*puVar4),
                                              (uint)*(ushort *)((longlong)puVar4 + 3),1);
                        auVar34 = vpinsrw_avx(auVar34,(uint)puVar4[3],2);
                        auVar34 = vpinsrw_avx(auVar34,(uint)*(ushort *)((longlong)puVar4 + 9),3);
                        auVar34 = vpinsrw_avx(auVar34,(uint)puVar4[6],4);
                        auVar34 = vpinsrw_avx(auVar34,(uint)*(ushort *)((longlong)puVar4 + 0xf),5);
                        auVar46 = vpinsrw_avx(ZEXT216(puVar4[0xc]),
                                              (uint)*(ushort *)((longlong)puVar4 + 0x1b),1);
                        auVar34 = vpinsrw_avx(auVar34,(uint)puVar4[9],6);
                        auVar46 = vpinsrw_avx(auVar46,(uint)puVar4[0xf],2);
                        auVar33 = vpinsrw_avx(auVar34,(uint)*(ushort *)((longlong)puVar4 + 0x15),7);
                        auVar46 = vpinsrw_avx(auVar46,(uint)*(ushort *)((longlong)puVar4 + 0x21),3);
                        auVar34 = vpand_avx(auVar43,auVar33);
                        auVar41 = vpsrlw_avx(auVar33,8);
                        auVar46 = vpinsrw_avx(auVar46,(uint)puVar4[0x12],4);
                        auVar46 = vpinsrw_avx(auVar46,(uint)*(ushort *)((longlong)puVar4 + 0x27),5);
                        auVar46 = vpinsrw_avx(auVar46,(uint)puVar4[0x15],6);
                        auVar33 = vpinsrw_avx(auVar46,(uint)*(ushort *)((longlong)puVar4 + 0x2d),7);
                        auVar46 = vpand_avx(auVar43,auVar33);
                        auVar34 = vpackuswb_avx(auVar34,auVar46);
                        auVar46 = vpsrlw_avx(auVar33,8);
                        auVar46 = vpackuswb_avx(auVar41,auVar46);
                        auVar33 = vpinsrw_avx(ZEXT216(puVar4[0x18]),
                                              (uint)*(ushort *)((longlong)puVar4 + 0x33),1);
                        auVar33 = vpinsrw_avx(auVar33,(uint)puVar4[0x1b],2);
                        auVar33 = vpinsrw_avx(auVar33,(uint)*(ushort *)((longlong)puVar4 + 0x39),3);
                        auVar33 = vpinsrw_avx(auVar33,(uint)puVar4[0x1e],4);
                        auVar33 = vpinsrw_avx(auVar33,(uint)*(ushort *)((longlong)puVar4 + 0x3f),5);
                        auVar33 = vpinsrw_avx(auVar33,(uint)puVar4[0x21],6);
                        auVar41 = vpinsrw_avx(auVar33,(uint)*(ushort *)((longlong)puVar4 + 0x45),7);
                        auVar42 = vpinsrw_avx(ZEXT216(puVar4[0x24]),
                                              (uint)*(ushort *)((longlong)puVar4 + 0x4b),1);
                        auVar33 = vpand_avx(auVar43,auVar41);
                        auVar31 = vpsrlw_avx(auVar41,8);
                        auVar41 = vpinsrw_avx(auVar42,(uint)puVar4[0x27],2);
                        auVar41 = vpinsrw_avx(auVar41,(uint)*(ushort *)((longlong)puVar4 + 0x51),3);
                        auVar41 = vpinsrw_avx(auVar41,(uint)puVar4[0x2a],4);
                        auVar41 = vpinsrw_avx(auVar41,(uint)*(ushort *)((longlong)puVar4 + 0x57),5);
                        auVar41 = vpinsrw_avx(auVar41,(uint)puVar4[0x2d],6);
                        auVar41 = vpinsrw_avx(auVar41,(uint)*(ushort *)((longlong)puVar4 + 0x5d),7);
                        *(char *)(lVar15 + 2 + lStack_f8) = auVar46[0];
                        *(char *)(lVar15 + 5 + lStack_f8) = auVar46[1];
                        *(char *)(lVar15 + 8 + lStack_f8) = auVar46[2];
                        *(char *)(lVar15 + 0xb + lStack_f8) = auVar46[3];
                        *(char *)(lVar15 + 0xe + lStack_f8) = auVar46[4];
                        *(char *)(lVar15 + 0x11 + lStack_f8) = auVar46[5];
                        *(char *)(lVar15 + 0x14 + lStack_f8) = auVar46[6];
                        *(char *)(lVar15 + 0x17 + lStack_f8) = auVar46[7];
                        *(char *)(lVar15 + 0x1a + lStack_f8) = auVar46[0];
                        *(char *)(lVar15 + 0x1d + lStack_f8) = auVar46[1];
                        *(char *)(lVar15 + 0x20 + lStack_f8) = auVar46[2];
                        *(char *)(lVar15 + 0x23 + lStack_f8) = auVar46[3];
                        *(char *)(lVar15 + 0x26 + lStack_f8) = auVar46[4];
                        *(char *)(lVar15 + 0x29 + lStack_f8) = auVar46[5];
                        *(char *)(lVar15 + 0x2c + lStack_f8) = auVar46[6];
                        *(char *)(lVar15 + 0x2f + lStack_f8) = auVar46[7];
                        auVar46 = vpand_avx(auVar43,auVar41);
                        auVar46 = vpackuswb_avx(auVar33,auVar46);
                        auVar33 = vpsrlw_avx(auVar41,8);
                        auVar33 = vpackuswb_avx(auVar31,auVar33);
                        *(char *)(lVar15 + 0x32 + lStack_f8) = auVar33[0];
                        *(char *)(lVar15 + 0x35 + lStack_f8) = auVar33[1];
                        *(char *)(lVar15 + 0x38 + lStack_f8) = auVar33[2];
                        *(char *)(lVar15 + 0x3b + lStack_f8) = auVar33[3];
                        *(char *)(lVar15 + 0x3e + lStack_f8) = auVar33[4];
                        *(char *)(lVar15 + 0x41 + lStack_f8) = auVar33[5];
                        *(char *)(lVar15 + 0x44 + lStack_f8) = auVar33[6];
                        *(char *)(lVar15 + 0x47 + lStack_f8) = auVar33[7];
                        *(char *)(lVar15 + 0x4a + lStack_f8) = auVar33[0];
                        *(char *)(lVar15 + 0x4d + lStack_f8) = auVar33[1];
                        *(char *)(lVar15 + 0x50 + lStack_f8) = auVar33[2];
                        *(char *)(lVar15 + 0x53 + lStack_f8) = auVar33[3];
                        *(char *)(lVar15 + 0x56 + lStack_f8) = auVar33[4];
                        *(char *)(lVar15 + 0x59 + lStack_f8) = auVar33[5];
                        *(char *)(lVar15 + 0x5c + lStack_f8) = auVar33[6];
                        *(char *)(lVar15 + 0x5f + lStack_f8) = auVar33[7];
                        *(char *)(lVar15 + 1 + lStack_f8) = auVar34[0];
                        *(char *)(lVar15 + 4 + lStack_f8) = auVar34[1];
                        *(char *)(lVar15 + 7 + lStack_f8) = auVar34[2];
                        *(char *)(lVar15 + 10 + lStack_f8) = auVar34[3];
                        *(char *)(lVar15 + 0xd + lStack_f8) = auVar34[4];
                        *(char *)(lVar15 + 0x10 + lStack_f8) = auVar34[5];
                        *(char *)(lVar15 + 0x13 + lStack_f8) = auVar34[6];
                        *(char *)(lVar15 + 0x16 + lStack_f8) = auVar34[7];
                        *(char *)(lVar15 + 0x19 + lStack_f8) = auVar34[0];
                        *(char *)(lVar15 + 0x1c + lStack_f8) = auVar34[1];
                        *(char *)(lVar15 + 0x1f + lStack_f8) = auVar34[2];
                        *(char *)(lVar15 + 0x22 + lStack_f8) = auVar34[3];
                        *(char *)(lVar15 + 0x25 + lStack_f8) = auVar34[4];
                        *(char *)(lVar15 + 0x28 + lStack_f8) = auVar34[5];
                        *(char *)(lVar15 + 0x2b + lStack_f8) = auVar34[6];
                        *(char *)(lVar15 + 0x2e + lStack_f8) = auVar34[7];
                        *(char *)(lVar15 + 0x31 + lStack_f8) = auVar46[0];
                        *(char *)(lVar15 + 0x34 + lStack_f8) = auVar46[1];
                        *(char *)(lVar15 + 0x37 + lStack_f8) = auVar46[2];
                        *(char *)(lVar15 + 0x3a + lStack_f8) = auVar46[3];
                        *(char *)(lVar15 + 0x3d + lStack_f8) = auVar46[4];
                        *(char *)(lVar15 + 0x40 + lStack_f8) = auVar46[5];
                        *(char *)(lVar15 + 0x43 + lStack_f8) = auVar46[6];
                        *(char *)(lVar15 + 0x46 + lStack_f8) = auVar46[7];
                        *(char *)(lVar15 + 0x49 + lStack_f8) = auVar46[0];
                        *(char *)(lVar15 + 0x4c + lStack_f8) = auVar46[1];
                        *(char *)(lVar15 + 0x4f + lStack_f8) = auVar46[2];
                        *(char *)(lVar15 + 0x52 + lStack_f8) = auVar46[3];
                        *(char *)(lVar15 + 0x55 + lStack_f8) = auVar46[4];
                        *(char *)(lVar15 + 0x58 + lStack_f8) = auVar46[5];
                        *(char *)(lVar15 + 0x5b + lStack_f8) = auVar46[6];
                        *(char *)(lVar15 + 0x5e + lStack_f8) = auVar46[7];
                        lVar15 = lVar15 + 0x60;
                        uVar24 = uStack_128;
                        uVar29 = uStack_40;
                      } while (uVar21 < uStack_128);
                    }
                    lVar20 = uVar24 * 3;
                    for (; uVar24 < uStack_118; uVar24 = uVar24 + 1) {
                      uVar5 = *(undefined1 *)(lVar20 + 2 + lVar11);
                      *(undefined1 *)(lVar20 + 1 + lStack_f8) = *(undefined1 *)(lVar20 + 1 + lVar11)
                      ;
                      *(undefined1 *)(lVar20 + 2 + lStack_f8) = uVar5;
                      lVar20 = lVar20 + 3;
                    }
                    goto LAB_14093ee00;
                  }
                }
                lVar20 = 1;
                uVar24 = 0;
                if (uStack_120 != 0) {
                  do {
                    uVar21 = uVar24;
                    uVar24 = uVar21 + 1;
                    *(undefined1 *)(lStack_f8 + uVar21 * 6) = *(undefined1 *)(lVar11 + uVar21 * 6);
                    *(undefined1 *)(lStack_f8 + 1 + uVar21 * 6) =
                         *(undefined1 *)(lVar11 + 1 + uVar21 * 6);
                    *(undefined1 *)(lStack_f8 + 2 + uVar21 * 6) =
                         *(undefined1 *)(lVar11 + 2 + uVar21 * 6);
                    *(undefined1 *)(lStack_f8 + 3 + uVar21 * 6) =
                         *(undefined1 *)(lVar11 + 3 + uVar21 * 6);
                    *(undefined1 *)(lStack_f8 + 4 + uVar21 * 6) =
                         *(undefined1 *)(lVar11 + 4 + uVar21 * 6);
                    *(undefined1 *)(lStack_f8 + 5 + uVar21 * 6) =
                         *(undefined1 *)(lVar11 + 5 + uVar21 * 6);
                  } while (uVar24 < uStack_120);
                  lVar20 = uVar21 + 2 + uVar24;
                }
                if (lVar20 - 1U < uStack_110) {
                  lVar20 = lVar20 * 3;
                  lVar25 = lVar20 + -3;
                  *(undefined1 *)(lVar25 + lStack_f8) = *(undefined1 *)(lVar11 + lVar25);
                  *(undefined1 *)(lVar20 + -2 + lStack_f8) = *(undefined1 *)(lVar11 + 1 + lVar25);
                  *(undefined1 *)(lVar20 + -1 + lStack_f8) = *(undefined1 *)(lVar11 + 2 + lVar25);
                }
              }
LAB_14093ee00:
              if (uVar19 == 1) {
                if (0 < lStack_108) {
                  if ((longlong)uStack_168 < 7) {
                    lVar20 = 1;
                    uVar24 = 0;
                    if (uStack_150 != 0) {
                      do {
                        uVar21 = uVar24;
                        *(undefined1 *)(lStack_158 + -3 + uVar21 * 6) =
                             *(undefined1 *)(lStack_158 + -6);
                        uVar24 = uVar21 + 1;
                        *(undefined1 *)(lStack_158 + -2 + uVar21 * 6) =
                             *(undefined1 *)(lStack_158 + -5);
                        *(undefined1 *)(lStack_158 + -1 + uVar21 * 6) =
                             *(undefined1 *)(lStack_158 + -4);
                        *(undefined1 *)(lStack_158 + uVar21 * 6) = *(undefined1 *)(lStack_158 + -6);
                        *(undefined1 *)(lStack_158 + 1 + uVar21 * 6) =
                             *(undefined1 *)(lStack_158 + -5);
                        *(undefined1 *)(lStack_158 + 2 + uVar21 * 6) =
                             *(undefined1 *)(lStack_158 + -4);
                      } while (uVar24 < uStack_150);
                      lVar20 = uVar21 + 2 + uVar24;
                    }
                    if (lVar20 - 1U < uStack_170) {
                      lVar20 = lVar20 * 3;
                      *(undefined1 *)(lVar20 + -6 + lStack_158) = *(undefined1 *)(lStack_158 + -6);
                      *(undefined1 *)(lVar20 + -5 + lStack_158) = *(undefined1 *)(lStack_158 + -5);
                      *(undefined1 *)(lVar20 + -4 + lStack_158) = *(undefined1 *)(lStack_158 + -4);
                    }
                  }
                  else {
                    uVar5 = *(undefined1 *)(lStack_158 + -6);
                    uVar6 = *(undefined1 *)(lStack_158 + -5);
                    bVar12 = *(byte *)(lStack_158 + -4);
                    if ((longlong)uStack_168 < 0x20) {
                      uVar24 = 0;
                    }
                    else {
                      auVar44[1] = uVar5;
                      auVar44[0] = uVar5;
                      auVar44[2] = uVar5;
                      auVar44[3] = uVar5;
                      auVar44[4] = uVar5;
                      auVar44[5] = uVar5;
                      auVar44[6] = uVar5;
                      auVar44[7] = uVar5;
                      auVar44[8] = uVar5;
                      auVar44[9] = uVar5;
                      auVar44[10] = uVar5;
                      auVar44[0xb] = uVar5;
                      auVar44[0xc] = uVar5;
                      auVar44[0xd] = uVar5;
                      auVar44[0xe] = uVar5;
                      auVar44[0xf] = uVar5;
                      auVar44[0x10] = uVar5;
                      auVar44[0x11] = uVar5;
                      auVar44[0x12] = uVar5;
                      auVar44[0x13] = uVar5;
                      auVar44[0x14] = uVar5;
                      auVar44[0x15] = uVar5;
                      auVar44[0x16] = uVar5;
                      auVar44[0x17] = uVar5;
                      auVar44[0x18] = uVar5;
                      auVar44[0x19] = uVar5;
                      auVar44[0x1a] = uVar5;
                      auVar44[0x1b] = uVar5;
                      auVar44[0x1c] = uVar5;
                      auVar44[0x1d] = uVar5;
                      auVar44[0x1e] = uVar5;
                      auVar44[0x1f] = uVar5;
                      auVar36[1] = uVar6;
                      auVar36[0] = uVar6;
                      auVar36[2] = uVar6;
                      auVar36[3] = uVar6;
                      auVar36[4] = uVar6;
                      auVar36[5] = uVar6;
                      auVar36[6] = uVar6;
                      auVar36[7] = uVar6;
                      auVar36[8] = uVar6;
                      auVar36[9] = uVar6;
                      auVar36[10] = uVar6;
                      auVar36[0xb] = uVar6;
                      auVar36[0xc] = uVar6;
                      auVar36[0xd] = uVar6;
                      auVar36[0xe] = uVar6;
                      auVar36[0xf] = uVar6;
                      auVar36[0x10] = uVar6;
                      auVar36[0x11] = uVar6;
                      auVar36[0x12] = uVar6;
                      auVar36[0x13] = uVar6;
                      auVar36[0x14] = uVar6;
                      auVar36[0x15] = uVar6;
                      auVar36[0x16] = uVar6;
                      auVar36[0x17] = uVar6;
                      auVar36[0x18] = uVar6;
                      auVar36[0x19] = uVar6;
                      auVar36[0x1a] = uVar6;
                      auVar36[0x1b] = uVar6;
                      auVar36[0x1c] = uVar6;
                      auVar36[0x1d] = uVar6;
                      auVar36[0x1e] = uVar6;
                      auVar36[0x1f] = uVar6;
                      uVar21 = 0;
                      auVar49[1] = bVar12;
                      auVar49[0] = bVar12;
                      auVar49[2] = bVar12;
                      auVar49[3] = bVar12;
                      auVar49[4] = bVar12;
                      auVar49[5] = bVar12;
                      auVar49[6] = bVar12;
                      auVar49[7] = bVar12;
                      auVar49[8] = bVar12;
                      auVar49[9] = bVar12;
                      auVar49[10] = bVar12;
                      auVar49[0xb] = bVar12;
                      auVar49[0xc] = bVar12;
                      auVar49[0xd] = bVar12;
                      auVar49[0xe] = bVar12;
                      auVar49[0xf] = bVar12;
                      auVar49[0x10] = bVar12;
                      auVar49[0x11] = bVar12;
                      auVar49[0x12] = bVar12;
                      auVar49[0x13] = bVar12;
                      auVar49[0x14] = bVar12;
                      auVar49[0x15] = bVar12;
                      auVar49[0x16] = bVar12;
                      auVar49[0x17] = bVar12;
                      auVar49[0x18] = bVar12;
                      auVar49[0x19] = bVar12;
                      auVar49[0x1a] = bVar12;
                      auVar49[0x1b] = bVar12;
                      auVar49[0x1c] = bVar12;
                      auVar49[0x1d] = bVar12;
                      auVar49[0x1e] = bVar12;
                      auVar49[0x1f] = bVar12;
                      lVar20 = 0;
                      auVar7 = vpshufb_avx2(auVar44,_DAT_14308d7a0);
                      auVar44 = vpshufb_avx2(auVar44,_DAT_14308d860);
                      auVar40 = vpshufb_avx2(auVar36,_DAT_14308d7c0);
                      auVar36 = vpshufb_avx2(auVar36,_DAT_14308d880);
                      auVar44 = vpor_avx2(auVar44,auVar36);
                      auVar35 = vpshufb_avx2(auVar49,_DAT_14308d7e0);
                      auVar36 = vpshufb_avx2(auVar49,_DAT_14308d8a0);
                      auVar36 = vpor_avx2(auVar44,auVar36);
                      auVar44 = vpblendvb_avx2(auVar7,auVar40,_DAT_14308d800);
                      auVar7 = vpblendvb_avx2(auVar40,auVar7,_DAT_14308d800);
                      auVar44 = vpblendvb_avx2(auVar44,auVar35,_DAT_14308d820);
                      auVar7 = vpblendvb_avx2(auVar7,auVar35,_DAT_14308d840);
                      auVar40._0_16_ = ZEXT116(0) * auVar36._0_16_ + ZEXT116(1) * auVar7._0_16_;
                      auVar40._16_16_ = ZEXT116(0) * auVar7._16_16_ + ZEXT116(1) * auVar36._0_16_;
                      auVar7 = vperm2i128_avx2(auVar36,auVar7,0x31);
                      do {
                        uVar21 = uVar21 + 0x20;
                        *(undefined1 (*) [32])(lVar20 + -3 + lStack_158) = auVar40;
                        *(undefined1 (*) [32])(lVar20 + 0x1d + lStack_158) = auVar44;
                        *(undefined1 (*) [32])(lVar20 + 0x3d + lStack_158) = auVar7;
                        lVar20 = lVar20 + 0x60;
                        uVar24 = uStack_178;
                      } while (uVar21 < uStack_178);
                    }
                    if (uVar24 + 1 <= uStack_168) {
                      uStack_1c8 = uStack_168 - uVar24;
                      if ((longlong)uStack_1c8 < 8) {
                        uStack_1c0 = 0;
                      }
                      else {
                        auVar43[1] = uVar5;
                        auVar43[0] = uVar5;
                        auVar43[2] = uVar5;
                        auVar43[3] = uVar5;
                        auVar43[4] = uVar5;
                        auVar43[5] = uVar5;
                        auVar43[6] = uVar5;
                        auVar43[7] = uVar5;
                        auVar43[8] = uVar5;
                        auVar43[9] = uVar5;
                        auVar43[10] = uVar5;
                        auVar43[0xb] = uVar5;
                        auVar43[0xc] = uVar5;
                        auVar43[0xd] = uVar5;
                        auVar43[0xe] = uVar5;
                        auVar43[0xf] = uVar5;
                        auVar46[1] = uVar6;
                        auVar46[0] = uVar6;
                        auVar46[2] = uVar6;
                        auVar46[3] = uVar6;
                        auVar46[4] = uVar6;
                        auVar46[5] = uVar6;
                        auVar46[6] = uVar6;
                        auVar46[7] = uVar6;
                        auVar46[8] = uVar6;
                        auVar46[9] = uVar6;
                        auVar46[10] = uVar6;
                        auVar46[0xb] = uVar6;
                        auVar46[0xc] = uVar6;
                        auVar46[0xd] = uVar6;
                        auVar46[0xe] = uVar6;
                        auVar46[0xf] = uVar6;
                        auVar43 = vpunpcklbw_avx(auVar43,auVar46);
                        uStack_1c0 = uStack_1c8 & 0xfffffffffffffff8;
                        auVar47 = vpsrldq_avx(auVar43,3);
                        auVar34._0_3_ = CONCAT12(bVar12,CONCAT11(bVar12,bVar12));
                        auVar34[3] = bVar12;
                        auVar34[4] = bVar12;
                        auVar34[5] = bVar12;
                        auVar34[6] = bVar12;
                        auVar34[7] = bVar12;
                        auVar34[8] = bVar12;
                        auVar34[9] = bVar12;
                        auVar34[10] = bVar12;
                        auVar34[0xb] = bVar12;
                        auVar34[0xc] = bVar12;
                        auVar34[0xd] = bVar12;
                        auVar34[0xe] = bVar12;
                        auVar34[0xf] = bVar12;
                        auVar31 = vpsrlq_avx(auVar34,0x20);
                        auVar46 = vpsrldq_avx(auVar47,2);
                        auVar42 = vpsrldq_avx(auVar46,3);
                        uStack_1d0 = 0;
                        uStack_1e0 = 0;
                        auVar41 = vpsrldq_avx(auVar42,2);
                        auVar33 = vpsrldq_avx(auVar41,3);
                        lStack_1d8 = uVar24 * 3 + lStack_158;
                        uVar21 = 0;
                        uVar45 = auVar31._0_4_;
                        lVar20 = 0;
                        do {
                          uVar21 = uVar21 + 8;
                          *(uint *)(lVar20 + -3 + lStack_1d8) =
                               (auVar34._0_3_ & 0xff) << 0x10 |
                               (auVar43._0_4_ & 0xff0000) << 8 | auVar43._0_4_ & 0xffff;
                          *(uint *)(lVar20 + 1 + lStack_1d8) =
                               auVar34._0_3_ & 0xff00 |
                               (auVar47._0_4_ & 0xffff00) << 8 | auVar47._0_4_ & 0xff;
                          *(uint *)(lVar20 + 5 + lStack_1d8) =
                               (uint)bVar12 | (uint)bVar12 << 0x18 | auVar46._0_4_ & 0xffff00;
                          *(uint *)(lVar20 + 9 + lStack_1d8) =
                               (uVar45 & 0xff) << 0x10 |
                               (auVar42._0_4_ & 0xffff0000) << 8 | auVar42._0_4_ & 0xffff;
                          *(uint *)(lVar20 + 0xd + lStack_1d8) =
                               uVar45 & 0xff00 |
                               auVar41._0_4_ >> 8 & 0xff | auVar41._0_4_ & 0xffff0000;
                          *(uint *)(lVar20 + 0x11 + lStack_1d8) =
                               uVar45 >> 0x10 & 0xff |
                               uVar45 & 0xff000000 | auVar33._0_4_ & 0xffff00;
                          lVar20 = lVar20 + 0x18;
                        } while (uVar21 < uStack_1c0);
                      }
                      lVar20 = uStack_1c0 * 3;
                      if (uStack_1c0 < uStack_1c8) {
                        lVar25 = uVar24 * 3 + lStack_158;
                        uVar24 = uStack_1c0;
                        do {
                          uVar24 = uVar24 + 1;
                          *(undefined1 *)(lVar20 + -3 + lVar25) = uVar5;
                          *(undefined1 *)(lVar20 + -2 + lVar25) = uVar6;
                          *(byte *)(lVar20 + -1 + lVar25) = bVar12;
                          lVar20 = lVar20 + 3;
                        } while (uVar24 < uStack_1c8);
                      }
                    }
                  }
                }
              }
              else if (uVar19 == 3) {
                if (0 < lStack_108) {
                  lVar20 = 1;
                  lVar25 = 0;
                  lVar11 = 0;
                  uVar24 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar21 = uVar24;
                      uVar24 = uVar21 + 1;
                      *(undefined1 *)(lVar25 + -3 + lStack_158) =
                           *(undefined1 *)(lVar11 + -9 + lStack_158);
                      *(undefined1 *)(lVar25 + lStack_158) =
                           *(undefined1 *)(lVar11 + -0xc + lStack_158);
                      *(undefined1 *)(lVar25 + 1 + lStack_158) =
                           *(undefined1 *)(lVar11 + -0xb + lStack_158);
                      lVar20 = lVar11 + -8;
                      uVar5 = *(undefined1 *)(lVar11 + -7 + lStack_158);
                      uVar6 = *(undefined1 *)(lVar11 + -10 + lStack_158);
                      lVar11 = lVar11 + -6;
                      *(undefined1 *)(lVar25 + -2 + lStack_158) =
                           *(undefined1 *)(lVar20 + lStack_158);
                      *(undefined1 *)(lVar25 + -1 + lStack_158) = uVar5;
                      *(undefined1 *)(lVar25 + 2 + lStack_158) = uVar6;
                      lVar25 = lVar25 + 6;
                    } while (uVar24 < uStack_150);
                    lVar20 = uVar21 + 2 + uVar24;
                  }
                  if (lVar20 - 1U < uStack_170) {
                    lVar20 = lVar20 * 3;
                    lVar25 = -(lVar20 + -3);
                    uVar5 = *(undefined1 *)(lVar25 + -8 + lStack_158);
                    uVar6 = *(undefined1 *)(lVar25 + -7 + lStack_158);
                    *(undefined1 *)(lVar20 + -6 + lStack_158) =
                         *(undefined1 *)(lVar25 + -9 + lStack_158);
                    *(undefined1 *)(lVar20 + -5 + lStack_158) = uVar5;
                    *(undefined1 *)(lVar20 + -4 + lStack_158) = uVar6;
                  }
                }
              }
              else if ((uVar19 == 6) && (0 < lStack_108)) {
                if (((longlong)uStack_168 < 7) ||
                   ((lVar20 = (lStack_f8 + -3 + lStack_160) - (longlong)pbVar26, lVar20 < 3 &&
                    (-lVar20 < (longlong)(uStack_168 * 3))))) {
                  lVar20 = 1;
                  uVar24 = 0;
                  if (uStack_150 != 0) {
                    do {
                      uVar21 = uVar24;
                      *(byte *)(lStack_158 + -3 + uVar21 * 6) = *pbVar26;
                      uVar24 = uVar21 + 1;
                      *(byte *)(lStack_158 + -2 + uVar21 * 6) = pbVar26[1];
                      *(byte *)(lStack_158 + -1 + uVar21 * 6) = pbVar26[2];
                      *(byte *)(lStack_158 + uVar21 * 6) = *pbVar26;
                      *(byte *)(lStack_158 + 1 + uVar21 * 6) = pbVar26[1];
                      *(byte *)(lStack_158 + 2 + uVar21 * 6) = pbVar26[2];
                    } while (uVar24 < uStack_150);
                    lVar20 = uVar21 + 2 + uVar24;
                  }
                  if (lVar20 - 1U < uStack_170) {
                    lVar20 = lVar20 * 3;
                    *(byte *)(lVar20 + -6 + lStack_158) = *pbVar26;
                    *(byte *)(lVar20 + -5 + lStack_158) = pbVar26[1];
                    *(byte *)(lVar20 + -4 + lStack_158) = pbVar26[2];
                  }
                }
                else {
                  bVar12 = *pbVar26;
                  bVar18 = pbVar26[1];
                  bVar23 = pbVar26[2];
                  if ((longlong)uStack_168 < 0x20) {
                    uVar24 = 0;
                  }
                  else {
                    auVar35[1] = bVar12;
                    auVar35[0] = bVar12;
                    auVar35[2] = bVar12;
                    auVar35[3] = bVar12;
                    auVar35[4] = bVar12;
                    auVar35[5] = bVar12;
                    auVar35[6] = bVar12;
                    auVar35[7] = bVar12;
                    auVar35[8] = bVar12;
                    auVar35[9] = bVar12;
                    auVar35[10] = bVar12;
                    auVar35[0xb] = bVar12;
                    auVar35[0xc] = bVar12;
                    auVar35[0xd] = bVar12;
                    auVar35[0xe] = bVar12;
                    auVar35[0xf] = bVar12;
                    auVar35[0x10] = bVar12;
                    auVar35[0x11] = bVar12;
                    auVar35[0x12] = bVar12;
                    auVar35[0x13] = bVar12;
                    auVar35[0x14] = bVar12;
                    auVar35[0x15] = bVar12;
                    auVar35[0x16] = bVar12;
                    auVar35[0x17] = bVar12;
                    auVar35[0x18] = bVar12;
                    auVar35[0x19] = bVar12;
                    auVar35[0x1a] = bVar12;
                    auVar35[0x1b] = bVar12;
                    auVar35[0x1c] = bVar12;
                    auVar35[0x1d] = bVar12;
                    auVar35[0x1e] = bVar12;
                    auVar35[0x1f] = bVar12;
                    auVar48[1] = bVar18;
                    auVar48[0] = bVar18;
                    auVar48[2] = bVar18;
                    auVar48[3] = bVar18;
                    auVar48[4] = bVar18;
                    auVar48[5] = bVar18;
                    auVar48[6] = bVar18;
                    auVar48[7] = bVar18;
                    auVar48[8] = bVar18;
                    auVar48[9] = bVar18;
                    auVar48[10] = bVar18;
                    auVar48[0xb] = bVar18;
                    auVar48[0xc] = bVar18;
                    auVar48[0xd] = bVar18;
                    auVar48[0xe] = bVar18;
                    auVar48[0xf] = bVar18;
                    auVar48[0x10] = bVar18;
                    auVar48[0x11] = bVar18;
                    auVar48[0x12] = bVar18;
                    auVar48[0x13] = bVar18;
                    auVar48[0x14] = bVar18;
                    auVar48[0x15] = bVar18;
                    auVar48[0x16] = bVar18;
                    auVar48[0x17] = bVar18;
                    auVar48[0x18] = bVar18;
                    auVar48[0x19] = bVar18;
                    auVar48[0x1a] = bVar18;
                    auVar48[0x1b] = bVar18;
                    auVar48[0x1c] = bVar18;
                    auVar48[0x1d] = bVar18;
                    auVar48[0x1e] = bVar18;
                    auVar48[0x1f] = bVar18;
                    uVar21 = 0;
                    auVar38[1] = bVar23;
                    auVar38[0] = bVar23;
                    auVar38[2] = bVar23;
                    auVar38[3] = bVar23;
                    auVar38[4] = bVar23;
                    auVar38[5] = bVar23;
                    auVar38[6] = bVar23;
                    auVar38[7] = bVar23;
                    auVar38[8] = bVar23;
                    auVar38[9] = bVar23;
                    auVar38[10] = bVar23;
                    auVar38[0xb] = bVar23;
                    auVar38[0xc] = bVar23;
                    auVar38[0xd] = bVar23;
                    auVar38[0xe] = bVar23;
                    auVar38[0xf] = bVar23;
                    auVar38[0x10] = bVar23;
                    auVar38[0x11] = bVar23;
                    auVar38[0x12] = bVar23;
                    auVar38[0x13] = bVar23;
                    auVar38[0x14] = bVar23;
                    auVar38[0x15] = bVar23;
                    auVar38[0x16] = bVar23;
                    auVar38[0x17] = bVar23;
                    auVar38[0x18] = bVar23;
                    auVar38[0x19] = bVar23;
                    auVar38[0x1a] = bVar23;
                    auVar38[0x1b] = bVar23;
                    auVar38[0x1c] = bVar23;
                    auVar38[0x1d] = bVar23;
                    auVar38[0x1e] = bVar23;
                    auVar38[0x1f] = bVar23;
                    lVar20 = 0;
                    auVar44 = vpshufb_avx2(auVar35,_DAT_14308d860);
                    auVar7 = vpshufb_avx2(auVar48,_DAT_14308d880);
                    auVar40 = vpshufb_avx2(auVar35,_DAT_14308d7a0);
                    auVar35 = vpshufb_avx2(auVar38,_DAT_14308d7e0);
                    auVar49 = vpshufb_avx2(auVar48,_DAT_14308d7c0);
                    auVar36 = vpshufb_avx2(auVar38,_DAT_14308d8a0);
                    auVar44 = vpor_avx2(auVar44,auVar7);
                    auVar36 = vpor_avx2(auVar44,auVar36);
                    auVar44 = vpblendvb_avx2(auVar40,auVar49,_DAT_14308d800);
                    auVar7 = vpblendvb_avx2(auVar49,auVar40,_DAT_14308d800);
                    auVar44 = vpblendvb_avx2(auVar44,auVar35,_DAT_14308d820);
                    auVar7 = vpblendvb_avx2(auVar7,auVar35,_DAT_14308d840);
                    auVar39._0_16_ = ZEXT116(0) * auVar36._0_16_ + ZEXT116(1) * auVar7._0_16_;
                    auVar39._16_16_ = ZEXT116(0) * auVar7._16_16_ + ZEXT116(1) * auVar36._0_16_;
                    auVar7 = vperm2i128_avx2(auVar36,auVar7,0x31);
                    do {
                      uVar21 = uVar21 + 0x20;
                      *(undefined1 (*) [32])(lVar20 + -3 + lStack_158) = auVar39;
                      *(undefined1 (*) [32])(lVar20 + 0x1d + lStack_158) = auVar44;
                      *(undefined1 (*) [32])(lVar20 + 0x3d + lStack_158) = auVar7;
                      lVar20 = lVar20 + 0x60;
                      uVar24 = uStack_178;
                    } while (uVar21 < uStack_178);
                  }
                  if (uVar24 + 1 <= uStack_168) {
                    uStack_1b8 = uStack_168 - uVar24;
                    if ((longlong)uStack_1b8 < 8) {
                      uStack_1b0 = 0;
                    }
                    else {
                      auVar41[1] = bVar12;
                      auVar41[0] = bVar12;
                      auVar41[2] = bVar12;
                      auVar41[3] = bVar12;
                      auVar41[4] = bVar12;
                      auVar41[5] = bVar12;
                      auVar41[6] = bVar12;
                      auVar41[7] = bVar12;
                      auVar41[8] = bVar12;
                      auVar41[9] = bVar12;
                      auVar41[10] = bVar12;
                      auVar41[0xb] = bVar12;
                      auVar41[0xc] = bVar12;
                      auVar41[0xd] = bVar12;
                      auVar41[0xe] = bVar12;
                      auVar41[0xf] = bVar12;
                      auVar42[1] = bVar18;
                      auVar42[0] = bVar18;
                      auVar42[2] = bVar18;
                      auVar42[3] = bVar18;
                      auVar42[4] = bVar18;
                      auVar42[5] = bVar18;
                      auVar42[6] = bVar18;
                      auVar42[7] = bVar18;
                      auVar42[8] = bVar18;
                      auVar42[9] = bVar18;
                      auVar42[10] = bVar18;
                      auVar42[0xb] = bVar18;
                      auVar42[0xc] = bVar18;
                      auVar42[0xd] = bVar18;
                      auVar42[0xe] = bVar18;
                      auVar42[0xf] = bVar18;
                      auVar43 = vpunpcklbw_avx(auVar41,auVar42);
                      uStack_1b0 = uStack_1b8 & 0xfffffffffffffff8;
                      auVar47 = vpsrldq_avx(auVar43,3);
                      auVar33._0_3_ = CONCAT12(bVar23,CONCAT11(bVar23,bVar23));
                      auVar33[3] = bVar23;
                      auVar33[4] = bVar23;
                      auVar33[5] = bVar23;
                      auVar33[6] = bVar23;
                      auVar33[7] = bVar23;
                      auVar33[8] = bVar23;
                      auVar33[9] = bVar23;
                      auVar33[10] = bVar23;
                      auVar33[0xb] = bVar23;
                      auVar33[0xc] = bVar23;
                      auVar33[0xd] = bVar23;
                      auVar33[0xe] = bVar23;
                      auVar33[0xf] = bVar23;
                      auVar31 = vpsrlq_avx(auVar33,0x20);
                      auVar34 = vpsrldq_avx(auVar47,2);
                      auVar42 = vpsrldq_avx(auVar34,3);
                      uStack_1e8 = 0;
                      uStack_1f8 = 0;
                      auVar41 = vpsrldq_avx(auVar42,2);
                      auVar46 = vpsrldq_avx(auVar41,3);
                      lStack_1f0 = uVar24 * 3 + lStack_158;
                      uVar21 = 0;
                      uVar45 = auVar31._0_4_;
                      lVar20 = 0;
                      do {
                        uVar21 = uVar21 + 8;
                        *(uint *)(lVar20 + -3 + lStack_1f0) =
                             (auVar33._0_3_ & 0xff) << 0x10 |
                             (auVar43._0_4_ & 0xff0000) << 8 | auVar43._0_4_ & 0xffff;
                        *(uint *)(lVar20 + 1 + lStack_1f0) =
                             auVar33._0_3_ & 0xff00 |
                             (auVar47._0_4_ & 0xffff00) << 8 | auVar47._0_4_ & 0xff;
                        *(uint *)(lVar20 + 5 + lStack_1f0) =
                             (uint)bVar23 | (uint)bVar23 << 0x18 | auVar34._0_4_ & 0xffff00;
                        *(uint *)(lVar20 + 9 + lStack_1f0) =
                             (uVar45 & 0xff) << 0x10 |
                             (auVar42._0_4_ & 0xffff0000) << 8 | auVar42._0_4_ & 0xffff;
                        *(uint *)(lVar20 + 0xd + lStack_1f0) =
                             uVar45 & 0xff00 |
                             auVar41._0_4_ >> 8 & 0xff | auVar41._0_4_ & 0xffff0000;
                        *(uint *)(lVar20 + 0x11 + lStack_1f0) =
                             uVar45 >> 0x10 & 0xff | uVar45 & 0xff000000 | auVar46._0_4_ & 0xffff00;
                        lVar20 = lVar20 + 0x18;
                      } while (uVar21 < uStack_1b0);
                    }
                    lVar20 = uStack_1b0 * 3;
                    if (uStack_1b0 < uStack_1b8) {
                      lVar25 = uVar24 * 3 + lStack_158;
                      uVar24 = uStack_1b0;
                      do {
                        uVar24 = uVar24 + 1;
                        *(byte *)(lVar20 + -3 + lVar25) = bVar12;
                        *(byte *)(lVar20 + -2 + lVar25) = bVar18;
                        *(byte *)(lVar20 + -1 + lVar25) = bVar23;
                        lVar20 = lVar20 + 3;
                      } while (uVar24 < uStack_1b8);
                    }
                  }
                }
              }
              plVar51 = (longlong *)CONCAT44(uVar52,iStack_50);
              (*pcStack_c8)(puStack_c0,pfVar27,uVar29,uStack_b0,plVar51);
            }
            else {
              plVar51 = (longlong *)CONCAT44(uVar52,iStack_50);
              (*pcStack_c8)(lVar25,pfVar27,lVar11,uStack_b0,plVar51);
            }
          }
        }
        iVar22 = (int)uVar13;
        uVar13 = uVar13 + 1;
        lVar20 = (longlong)iVar22 + 1;
        if (uVar29 <= uVar13) {
          return;
        }
      } while( true );
    }
  }
  uVar19 = param_7 & 0xf;
  if (uVar19 == 6) {
    uVar13 = 0;
    fVar37 = (float)*param_8;
    fVar32 = (float)param_8[1];
    fVar30 = (float)param_8[2];
    if (0 < iVar22) {
      lVar20 = *param_5;
      uVar29 = (lVar20 * 3 + 2) / 3;
      do {
        if (0 < lVar20 * 3) {
          if ((longlong)uVar29 < 0x10) {
            uVar24 = 0;
          }
          else {
            uVar21 = 0;
            pfVar27 = param_3;
            do {
              uVar21 = uVar21 + 0x10;
              *pfVar27 = fVar37;
              pfVar27[3] = fVar37;
              pfVar27[6] = fVar37;
              pfVar27[9] = fVar37;
              pfVar27[0xc] = fVar37;
              pfVar27[0xf] = fVar37;
              pfVar27[0x12] = fVar37;
              pfVar27[0x15] = fVar37;
              pfVar27[0x18] = fVar37;
              pfVar27[0x1b] = fVar37;
              pfVar27[0x1e] = fVar37;
              pfVar27[0x21] = fVar37;
              pfVar27[0x24] = fVar37;
              pfVar27[0x27] = fVar37;
              pfVar27[0x2a] = fVar37;
              pfVar27[0x2d] = fVar37;
              pfVar27[1] = fVar32;
              pfVar27[4] = fVar32;
              pfVar27[7] = fVar32;
              pfVar27[10] = fVar32;
              pfVar27[0xd] = fVar32;
              pfVar27[0x10] = fVar32;
              pfVar27[0x13] = fVar32;
              pfVar27[0x16] = fVar32;
              pfVar27[0x19] = fVar32;
              pfVar27[0x1c] = fVar32;
              pfVar27[0x1f] = fVar32;
              pfVar27[0x22] = fVar32;
              pfVar27[0x25] = fVar32;
              pfVar27[0x28] = fVar32;
              pfVar27[0x2b] = fVar32;
              pfVar27[0x2e] = fVar32;
              pfVar27[2] = fVar30;
              pfVar27[5] = fVar30;
              pfVar27[8] = fVar30;
              pfVar27[0xb] = fVar30;
              pfVar27[0xe] = fVar30;
              pfVar27[0x11] = fVar30;
              pfVar27[0x14] = fVar30;
              pfVar27[0x17] = fVar30;
              pfVar27[0x1a] = fVar30;
              pfVar27[0x1d] = fVar30;
              pfVar27[0x20] = fVar30;
              pfVar27[0x23] = fVar30;
              pfVar27[0x26] = fVar30;
              pfVar27[0x29] = fVar30;
              pfVar27[0x2c] = fVar30;
              pfVar27[0x2f] = fVar30;
              pfVar27 = pfVar27 + 0x30;
              uVar24 = uVar29 & 0xfffffffffffffff0;
            } while (uVar21 < (uVar29 & 0xfffffffffffffff0));
          }
          if (uVar24 + 1 <= uVar29) {
            uVar21 = uVar29 - uVar24;
            if ((longlong)uVar21 < 2) {
              uVar28 = 0;
            }
            else {
              uVar14 = 0;
              uVar28 = uVar21 & 0xfffffffffffffffe;
              lVar25 = 0;
              do {
                uVar14 = uVar14 + 2;
                *(float *)((longlong)param_3 + lVar25 + 8 + uVar24 * 0xc) = fVar30;
                *(float *)((longlong)param_3 + lVar25 + 0x14 + uVar24 * 0xc) = fVar30;
                *(float *)((longlong)param_3 + lVar25 + 4 + uVar24 * 0xc) = fVar32;
                *(float *)((longlong)param_3 + lVar25 + 0x10 + uVar24 * 0xc) = fVar32;
                *(float *)((longlong)param_3 + lVar25 + uVar24 * 0xc) = fVar37;
                *(float *)((longlong)param_3 + lVar25 + 0xc + uVar24 * 0xc) = fVar37;
                lVar25 = lVar25 + 0x18;
              } while (uVar14 < uVar28);
            }
            lVar25 = uVar28 * 0xc;
            for (; uVar28 < uVar21; uVar28 = uVar28 + 1) {
              *(float *)((longlong)param_3 + lVar25 + uVar24 * 0xc) = fVar37;
              *(float *)((longlong)param_3 + lVar25 + 4 + uVar24 * 0xc) = fVar32;
              *(float *)((longlong)param_3 + lVar25 + 8 + uVar24 * 0xc) = fVar30;
              lVar25 = lVar25 + 0xc;
            }
          }
        }
        uVar13 = uVar13 + 1;
        param_3 = (float *)((longlong)param_3 + param_4);
      } while (uVar13 < (ulonglong)(longlong)iVar22);
    }
    return;
  }
  if (uVar19 == 1) {
    uVar13 = 0;
    if (0 < iVar22) {
      lVar20 = param_4 * iVar22;
      uVar29 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar29) {
          if ((longlong)uVar29 < 8) {
LAB_14093dd31:
            uVar24 = 0;
          }
          else {
            pfVar27 = (float *)(param_4 * uVar13 + (longlong)param_3);
            if ((longlong)uVar29 < 0xbd) {
              uVar21 = 0;
              uVar24 = uVar29 & 0xfffffffffffffff8;
            }
            else {
              uVar21 = (ulonglong)pfVar27 & 0x1f;
              if (uVar21 != 0) {
                if (((ulonglong)pfVar27 & 3) != 0) goto LAB_14093dd31;
                uVar21 = 0x20 - uVar21 >> 2;
              }
              if ((longlong)uVar29 < (longlong)(uVar21 + 8)) goto LAB_14093dd31;
              uVar28 = 0;
              uVar24 = uVar29 - (uVar29 - uVar21 & 7);
              if (uVar21 != 0) {
                do {
                  pfVar27[uVar28] = *(float *)((longlong)param_3 + uVar28 * 4 + lVar20);
                  uVar28 = uVar28 + 1;
                } while (uVar28 < uVar21);
              }
            }
            do {
              puVar1 = (undefined8 *)((longlong)param_3 + uVar21 * 4 + lVar20);
              uVar50 = puVar1[1];
              uVar8 = puVar1[2];
              uVar9 = puVar1[3];
              pfVar2 = pfVar27 + uVar21;
              *(undefined8 *)pfVar2 = *puVar1;
              *(undefined8 *)(pfVar2 + 2) = uVar50;
              *(undefined8 *)(pfVar2 + 4) = uVar8;
              *(undefined8 *)(pfVar2 + 6) = uVar9;
              uVar21 = uVar21 + 8;
            } while (uVar21 < uVar24);
          }
          if (uVar24 < uVar29) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar24 * 4 + param_4 * uVar13) =
                   *(undefined4 *)((longlong)param_3 + uVar24 * 4 + lVar20);
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar29);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)(longlong)iVar22);
    }
  }
  else if (uVar19 == 3) {
    uStack_1f8 = *param_5;
    iVar10 = (int)lStack_1f0;
    lStack_1f0 = param_5[1];
    FUN_1408e2fa0(uStack_1f8,lStack_48,(longlong)iVar22,param_3,&uStack_1f8,iVar10,param_7,param_8,
                  param_9,param_10,param_11);
    lVar20 = 1;
    uVar13 = 0;
    if (1 < iVar22) {
      lVar25 = ((longlong)param_10 + -1) * param_4;
      uVar29 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar29) {
          if ((longlong)uVar29 < 8) {
LAB_14093dbe5:
            uVar24 = 0;
          }
          else {
            lVar11 = param_4 * lVar20;
            pfVar27 = (float *)((longlong)param_3 + lVar11);
            if ((longlong)uVar29 < 0xbd) {
              lVar11 = (longlong)param_3 + (lVar25 - lVar11);
              uVar21 = 0;
              uVar24 = uVar29 & 0xfffffffffffffff8;
            }
            else {
              uVar21 = (ulonglong)pfVar27 & 0x1f;
              if (uVar21 != 0) {
                if (((ulonglong)pfVar27 & 3) != 0) goto LAB_14093dbe5;
                uVar21 = 0x20 - uVar21 >> 2;
              }
              if ((longlong)uVar29 < (longlong)(uVar21 + 8)) goto LAB_14093dbe5;
              lVar11 = (longlong)param_3 + (lVar25 - lVar11);
              uVar28 = 0;
              uVar24 = uVar29 - (uVar29 - uVar21 & 7);
              if (uVar21 != 0) {
                do {
                  pfVar27[uVar28] = *(float *)(lVar11 + uVar28 * 4);
                  uVar28 = uVar28 + 1;
                } while (uVar28 < uVar21);
              }
            }
            do {
              puVar1 = (undefined8 *)(lVar11 + uVar21 * 4);
              uVar50 = puVar1[1];
              uVar8 = puVar1[2];
              uVar9 = puVar1[3];
              pfVar2 = pfVar27 + uVar21;
              *(undefined8 *)pfVar2 = *puVar1;
              *(undefined8 *)(pfVar2 + 2) = uVar50;
              *(undefined8 *)(pfVar2 + 4) = uVar8;
              *(undefined8 *)(pfVar2 + 6) = uVar9;
              uVar21 = uVar21 + 8;
            } while (uVar21 < uVar24);
          }
          if (uVar24 < uVar29) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar24 * 4 + lVar20 * param_4) =
                   *(undefined4 *)((longlong)param_3 + uVar24 * 4 + (lVar25 - lVar20 * param_4));
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar29);
          }
        }
        lVar20 = uVar13 + 2;
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)(longlong)(iVar22 + -1));
    }
  }
  return;
}

