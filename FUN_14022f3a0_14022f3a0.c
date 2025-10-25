
/* WARNING: Removing unreachable block (ram,0x00014023118a) */

void FUN_14022f3a0(longlong param_1,longlong param_2,float *param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  int param_10,short *param_11)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short sVar6;
  short *psVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  short sVar16;
  float *pfVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  short sVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  short *psVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_218 [32];
  ulonglong *puStack_1f8;
  int iStack_1f0;
  uint uStack_1e8;
  short *psStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  short *psStack_1c8;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  int iStack_1a8;
  int iStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  short *psStack_168;
  longlong lStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  short *psStack_120;
  uint uStack_118;
  ulonglong uStack_110;
  float *pfStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  uint uStack_e0;
  code *pcStack_d8;
  short *psStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  longlong lStack_b0;
  short *psStack_a8;
  ulonglong *puStack_a0;
  uint uStack_98;
  float *pfStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int iStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  short asStack_50 [4];
  ulonglong uStack_48;
  
  lVar14 = 0;
  iVar19 = param_10 >> 1;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_218;
  lStack_60 = param_2;
  if (iVar19 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_14023175d;
  }
  else {
    uStack_58 = (ulonglong)iVar19;
    pfVar17 = (float *)(param_4 * uStack_58 + (longlong)param_3);
    uStack_1b8 = CONCAT44(uStack_1b8._4_4_,iVar19);
    iStack_68 = param_10;
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,param_6);
    pfStack_90 = param_3;
    lStack_78 = param_4;
    lStack_70 = param_1;
    do {
      puStack_1f8 = &uStack_88;
      uStack_88 = *param_5;
      uStack_80 = param_5[1];
      iStack_1f0 = (int)uStack_1b0;
      uStack_1e8 = param_7;
      psStack_1e0 = param_8;
      uStack_1d8 = param_9;
      iStack_1d0 = iStack_68;
      psStack_1c8 = param_11;
      FUN_1409370c0(lStack_70,lStack_60,lVar14,pfVar17);
      lVar14 = lVar14 + 1;
      pfVar17 = (float *)((longlong)pfVar17 + lStack_78);
    } while (lVar14 < (longlong)uStack_58);
    param_1 = lStack_70;
    param_3 = pfStack_90;
    param_4 = lStack_78;
    param_10 = iStack_68;
    iVar19 = (int)uStack_1b8;
    param_6 = (int)uStack_1b0;
    if ((param_7 & 0x10) != 0) {
      lVar14 = (longlong)(int)uStack_1b0;
      uStack_1b0 = 0;
      uStack_110 = 0;
      pcStack_d8 = *(code **)(&DAT_1430885c0 + lVar14 * 8);
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,param_7) & 0xffffffff0000000f;
      lVar14 = (longlong)iStack_68;
      lStack_70 = lStack_70 - lStack_60 * uStack_58;
      psStack_120 = param_11;
      lStack_160 = lVar14 * 3;
      lStack_b0 = lVar14 + -1;
      psStack_168 = param_11 + lVar14 * 3;
      uStack_f8 = lStack_160 - 3;
      uStack_98 = param_7 & 0xf0;
      uStack_198 = uStack_f8 & 0xfffffffffffffff0;
      uStack_e8 = ((lStack_160 + -1) / 3) * 3;
      uStack_f0 = uStack_e8 >> 1;
      uStack_e0 = param_7 & 0x40;
      lStack_c8 = -uStack_58;
      lStack_130 = uStack_58 * 3;
      psStack_d0 = param_11 + uStack_58 * 3;
      uStack_b8 = param_7 & 0x80;
      uStack_180 = lStack_130 + 2;
      uStack_170 = uStack_180 / 6;
      uStack_178 = (longlong)uStack_180 / 3;
      uStack_148 = (ulonglong)psStack_d0 & 0x1f;
      uStack_180 = uStack_180 / 3;
      uStack_158 = uStack_178 & 0xffffffffffffffe0;
      uStack_190 = 0x20 - uStack_148 >> 1;
      lStack_128 = uStack_58 * -6;
      uStack_138 = (longlong)(iStack_68 * 3) - 3;
      uStack_150 = (ulonglong)psStack_d0 & 1;
      uStack_188 = uStack_178 & 0xfffffffffffffff0;
      uStack_140 = uStack_138 >> 1;
      uStack_118 = param_7;
      iVar19 = (int)uStack_1b8;
      uVar9 = 0;
      lVar14 = 0;
      uStack_c0 = param_9;
      psStack_a8 = param_8;
      puStack_a0 = param_5;
      uVar18 = uStack_58;
      do {
        asStack_50[0] = 0;
        asStack_50[1] = 0;
        asStack_50[2] = 0;
        pfVar17 = (float *)(lStack_78 * uVar9 + (longlong)pfStack_90);
        lVar25 = lStack_60 * uVar9 + lStack_70;
        if (uStack_98 == 0xf0) {
          puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
          (*pcStack_d8)(lVar25,pfVar17,*puStack_a0,uStack_c0);
        }
        else {
          psVar24 = asStack_50;
          if (iVar19 == 6) {
            psVar24 = psStack_a8;
          }
          uVar22 = *puStack_a0;
          if ((longlong)uVar22 < lStack_b0) {
            uVar15 = 0;
            lVar8 = -uVar18;
            lVar14 = 0;
            if (lStack_c8 < (longlong)(uVar18 + uVar22)) {
              lStack_100 = uVar22 - 1;
              lVar11 = uVar18 * 2;
              do {
                lVar12 = lVar8;
                if (lVar8 < 0) {
                  if (uStack_118 != 0xf0) {
                    if (iVar19 == 6) {
                      if (uStack_e0 == 0) goto LAB_1402316d7;
                    }
                    else {
                      if (iVar19 != 1) goto LAB_14023164d;
LAB_1402317fb:
                      lVar12 = 0;
                      if (uStack_e0 != 0) {
                        lVar12 = lVar8;
                      }
                    }
                  }
LAB_1402316bb:
                  sVar6 = *(short *)(lVar25 + lVar12 * 6);
                  sVar16 = *(short *)(lVar25 + 2 + lVar12 * 6);
                  sVar21 = *(short *)(lVar25 + 4 + lVar12 * 6);
                }
                else {
                  if ((lVar8 < (longlong)uVar22) || (uStack_118 == 0xf0)) goto LAB_1402316bb;
                  if (iVar19 != 6) {
                    if (iVar19 == 1) {
                      if (lVar8 < 0) goto LAB_1402317fb;
                      if (uStack_b8 == 0) {
                        lVar12 = lStack_100;
                      }
                    }
                    else {
LAB_14023164d:
                      if (iVar19 == 3) {
                        if ((longlong)uVar22 < 2) {
                          if (lVar8 < 0) {
                            if (uStack_e0 == 0) {
                              lVar12 = -lVar8;
                              if (uStack_b8 == 0) {
                                lVar12 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar8) && (uStack_b8 == 0)) &&
                                  (lVar12 = -lVar8, uStack_e0 == 0)) {
                            lVar12 = 0;
                          }
                        }
                        else {
                          if (lVar8 < 0) goto LAB_140231820;
                          if ((longlong)uVar22 <= lVar8) {
                            while (uStack_b8 == 0) {
                              for (lVar12 = lStack_100 * 2 - lVar12; lVar12 < 0; lVar12 = -lVar12) {
LAB_140231820:
                                if (uStack_e0 != 0) goto LAB_1402316bb;
                              }
                              if (lVar12 < (longlong)uVar22) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1402316bb;
                  }
                  if (uStack_b8 != 0) goto LAB_1402316bb;
LAB_1402316d7:
                  sVar6 = *psVar24;
                  sVar16 = psVar24[1];
                  sVar21 = psVar24[2];
                }
                uVar15 = uVar15 + 1;
                lVar8 = lVar8 + 1;
                *(short *)(lVar14 + (longlong)psStack_120) = sVar6;
                *(short *)(lVar14 + 2 + (longlong)psStack_120) = sVar16;
                *(short *)(lVar14 + 4 + (longlong)psStack_120) = sVar21;
                lVar14 = lVar14 + 6;
                uVar18 = uStack_58;
                uStack_110 = uVar9;
                pfStack_108 = pfVar17;
              } while (uVar15 < uVar22 + lVar11);
            }
            puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
            (*pcStack_d8)(psStack_d0,pfVar17,uVar22,uStack_c0);
          }
          else {
            if (uStack_e0 == 0) {
              if (0 < (longlong)uStack_f8) {
                if (6 < (longlong)uStack_f8) {
                  lVar11 = lStack_60 * lVar14 + lStack_70;
                  lVar8 = lStack_160 * 2 + -6;
                  if ((lVar8 <= (longlong)psStack_d0 - lVar11) ||
                     (lVar8 <= -((longlong)psStack_d0 - lVar11))) {
                    if ((longlong)uStack_f8 < 0x10) {
LAB_14023179b:
                      uVar26 = 0;
                    }
                    else {
                      if ((longlong)uStack_f8 < 0x2b9) {
                        uVar15 = 0;
                        uVar26 = uStack_198;
                      }
                      else {
                        uVar15 = uStack_148;
                        if (((uStack_148 != 0) && (uVar15 = uStack_190, uStack_150 != 0)) ||
                           ((longlong)uStack_f8 < (longlong)(uVar15 + 0x10))) goto LAB_14023179b;
                        uVar26 = uStack_f8 - (uStack_f8 - uVar15 & 0xf);
                        uVar23 = 0;
                        if (uVar15 != 0) {
                          do {
                            psStack_d0[uVar23] = *(short *)(lVar11 + uVar23 * 2);
                            uVar23 = uVar23 + 1;
                          } while (uVar23 < uVar15);
                        }
                      }
                      do {
                        puVar1 = (undefined8 *)(lVar11 + uVar15 * 2);
                        uVar3 = puVar1[1];
                        uVar4 = puVar1[2];
                        uVar5 = puVar1[3];
                        psVar7 = psStack_d0 + uVar15;
                        *(undefined8 *)psVar7 = *puVar1;
                        *(undefined8 *)(psVar7 + 4) = uVar3;
                        *(undefined8 *)(psVar7 + 8) = uVar4;
                        *(undefined8 *)(psVar7 + 0xc) = uVar5;
                        uVar15 = uVar15 + 0x10;
                      } while (uVar15 < uVar26);
                    }
                    if (uVar26 + 1 <= uStack_f8) {
                      uVar15 = uStack_f8 - uVar26;
                      if ((longlong)uVar15 < 4) {
                        uVar23 = 0;
                      }
                      else {
                        uVar23 = uVar15 & 0xfffffffffffffffc;
                        uVar10 = 0;
                        do {
                          *(undefined8 *)(psStack_d0 + uVar26 + uVar10) =
                               *(undefined8 *)(lVar11 + uVar26 * 2 + uVar10 * 2);
                          uVar10 = uVar10 + 4;
                        } while (uVar10 < uVar23);
                      }
                      if (uVar23 < uVar15) {
                        do {
                          psStack_d0[uVar26 + uVar23] = *(short *)(lVar11 + uVar26 * 2 + uVar23 * 2)
                          ;
                          uVar23 = uVar23 + 1;
                        } while (uVar23 < uVar15);
                      }
                    }
                    goto LAB_140230073;
                  }
                }
                lVar8 = 1;
                if (uStack_140 != 0) {
                  lVar8 = lStack_60 * lVar14 + lStack_70;
                  uVar15 = 0;
                  do {
                    uVar26 = uVar15;
                    psStack_d0[uVar26 * 2] = *(short *)(lVar8 + uVar26 * 4);
                    psStack_d0[uVar26 * 2 + 1] = *(short *)(lVar8 + 2 + uVar26 * 4);
                    uVar15 = uVar26 + 1;
                  } while (uVar15 < uStack_140);
                  lVar8 = uVar26 + 2 + uVar15;
                }
                uVar15 = lVar8 - 1;
                if (uVar15 < uStack_138) {
                  psStack_d0[uVar15] = *(short *)(lVar14 * lStack_60 + lStack_70 + uVar15 * 2);
                }
              }
LAB_140230073:
              if (iVar19 == 1) {
                if (0 < lStack_130) {
                  if ((longlong)uStack_178 < 7) {
                    sVar6 = psStack_d0[2];
LAB_1402305e1:
                    uVar26 = 0;
                  }
                  else {
                    if ((5 < (longlong)psStack_120 - (longlong)psStack_d0) ||
                       ((longlong)(uStack_178 * 6) <=
                        -((longlong)psStack_120 - (longlong)psStack_d0))) {
                      sVar6 = *psStack_d0;
                      sVar16 = psStack_d0[2];
                      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,(int)sVar6);
                      sVar21 = psStack_d0[1];
                      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)sVar16);
                      if ((longlong)uStack_178 < 0x20) {
                        uVar15 = 0;
                      }
                      else {
                        uVar26 = 0;
                        psVar7 = psStack_120;
                        do {
                          uVar26 = uVar26 + 0x20;
                          *psVar7 = sVar6;
                          psVar7[3] = sVar6;
                          psVar7[6] = sVar6;
                          psVar7[9] = sVar6;
                          psVar7[0xc] = sVar6;
                          psVar7[0xf] = sVar6;
                          psVar7[0x12] = sVar6;
                          psVar7[0x15] = sVar6;
                          psVar7[0x18] = sVar6;
                          psVar7[0x1b] = sVar6;
                          psVar7[0x1e] = sVar6;
                          psVar7[0x21] = sVar6;
                          psVar7[0x24] = sVar6;
                          psVar7[0x27] = sVar6;
                          psVar7[0x2a] = sVar6;
                          psVar7[0x2d] = sVar6;
                          psVar7[0x30] = sVar6;
                          psVar7[0x33] = sVar6;
                          psVar7[0x36] = sVar6;
                          psVar7[0x39] = sVar6;
                          psVar7[0x3c] = sVar6;
                          psVar7[0x3f] = sVar6;
                          psVar7[0x42] = sVar6;
                          psVar7[0x45] = sVar6;
                          psVar7[0x48] = sVar6;
                          psVar7[0x4b] = sVar6;
                          psVar7[0x4e] = sVar6;
                          psVar7[0x51] = sVar6;
                          psVar7[0x54] = sVar6;
                          psVar7[0x57] = sVar6;
                          psVar7[0x5a] = sVar6;
                          psVar7[0x5d] = sVar6;
                          psVar7[1] = sVar21;
                          psVar7[4] = sVar21;
                          psVar7[7] = sVar21;
                          psVar7[10] = sVar21;
                          psVar7[0xd] = sVar21;
                          psVar7[0x10] = sVar21;
                          psVar7[0x13] = sVar21;
                          psVar7[0x16] = sVar21;
                          psVar7[0x19] = sVar21;
                          psVar7[0x1c] = sVar21;
                          psVar7[0x1f] = sVar21;
                          psVar7[0x22] = sVar21;
                          psVar7[0x25] = sVar21;
                          psVar7[0x28] = sVar21;
                          psVar7[0x2b] = sVar21;
                          psVar7[0x2e] = sVar21;
                          psVar7[0x31] = sVar21;
                          psVar7[0x34] = sVar21;
                          psVar7[0x37] = sVar21;
                          psVar7[0x3a] = sVar21;
                          psVar7[0x3d] = sVar21;
                          psVar7[0x40] = sVar21;
                          psVar7[0x43] = sVar21;
                          psVar7[0x46] = sVar21;
                          psVar7[0x49] = sVar21;
                          psVar7[0x4c] = sVar21;
                          psVar7[0x4f] = sVar21;
                          psVar7[0x52] = sVar21;
                          psVar7[0x55] = sVar21;
                          psVar7[0x58] = sVar21;
                          psVar7[0x5b] = sVar21;
                          psVar7[0x5e] = sVar21;
                          psVar7[2] = sVar16;
                          psVar7[5] = sVar16;
                          psVar7[8] = sVar16;
                          psVar7[0xb] = sVar16;
                          psVar7[0xe] = sVar16;
                          psVar7[0x11] = sVar16;
                          psVar7[0x14] = sVar16;
                          psVar7[0x17] = sVar16;
                          psVar7[0x1a] = sVar16;
                          psVar7[0x1d] = sVar16;
                          psVar7[0x20] = sVar16;
                          psVar7[0x23] = sVar16;
                          psVar7[0x26] = sVar16;
                          psVar7[0x29] = sVar16;
                          psVar7[0x2c] = sVar16;
                          psVar7[0x2f] = sVar16;
                          psVar7[0x32] = sVar16;
                          psVar7[0x35] = sVar16;
                          psVar7[0x38] = sVar16;
                          psVar7[0x3b] = sVar16;
                          psVar7[0x3e] = sVar16;
                          psVar7[0x41] = sVar16;
                          psVar7[0x44] = sVar16;
                          psVar7[0x47] = sVar16;
                          psVar7[0x4a] = sVar16;
                          psVar7[0x4d] = sVar16;
                          psVar7[0x50] = sVar16;
                          psVar7[0x53] = sVar16;
                          psVar7[0x56] = sVar16;
                          psVar7[0x59] = sVar16;
                          psVar7[0x5c] = sVar16;
                          psVar7[0x5f] = sVar16;
                          psVar7 = psVar7 + 0x60;
                          uVar15 = uStack_158;
                        } while (uVar26 < uStack_158);
                      }
                      uVar26 = 0;
                      lVar14 = 0;
                      if (uVar15 + 1 <= uStack_178) {
                        do {
                          uVar26 = uVar26 + 1;
                          *(short *)((longlong)psStack_120 + lVar14 + uVar15 * 6) = sVar6;
                          *(short *)((longlong)psStack_120 + lVar14 + 2 + uVar15 * 6) = sVar21;
                          *(short *)((longlong)psStack_120 + lVar14 + 4 + uVar15 * 6) = sVar16;
                          lVar14 = lVar14 + 6;
                        } while (uVar26 < uStack_178 - uVar15);
                      }
                      goto LAB_140230af6;
                    }
                    sVar6 = psStack_d0[2];
                    if ((longlong)uStack_178 < 0x10) goto LAB_1402305e1;
                    uVar15 = 0;
                    lVar14 = 0;
                    do {
                      sVar16 = *psStack_d0;
                      uVar15 = uVar15 + 0x10;
                      *(short *)(lVar14 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 6 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0xc + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x12 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x18 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x1e + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x24 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x2a + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x30 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x36 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x3c + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x42 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x48 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x4e + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x54 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x5a + (longlong)psStack_120) = sVar16;
                      sVar16 = psStack_d0[1];
                      *(short *)(lVar14 + 2 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 8 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0xe + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x14 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x1a + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x20 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x26 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x2c + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x32 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x38 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x3e + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x44 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x4a + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x50 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x56 + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 0x5c + (longlong)psStack_120) = sVar16;
                      *(short *)(lVar14 + 4 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 10 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x10 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x16 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x1c + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x22 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x28 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x2e + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x34 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x3a + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x40 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x46 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x4c + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x52 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x58 + (longlong)psStack_120) = sVar6;
                      *(short *)(lVar14 + 0x5e + (longlong)psStack_120) = sVar6;
                      lVar14 = lVar14 + 0x60;
                      uVar18 = uStack_58;
                      uVar26 = uStack_188;
                    } while (uVar15 < uStack_188);
                  }
                  lVar14 = uVar26 * 6;
                  for (; uVar26 < uStack_178; uVar26 = uVar26 + 1) {
                    *(short *)(lVar14 + (longlong)psStack_120) = *psStack_d0;
                    *(short *)(lVar14 + 2 + (longlong)psStack_120) = psStack_d0[1];
                    *(short *)(lVar14 + 4 + (longlong)psStack_120) = sVar6;
                    lVar14 = lVar14 + 6;
                  }
                }
              }
              else if (iVar19 == 3) {
                if (0 < lStack_130) {
                  lVar14 = 1;
                  lVar11 = 0;
                  lVar8 = 0;
                  uVar15 = 0;
                  if (uStack_170 != 0) {
                    do {
                      uVar26 = uVar15;
                      uVar15 = uVar26 + 1;
                      *(undefined2 *)(lVar11 + (longlong)psStack_120) =
                           *(undefined2 *)(lVar8 + -6 + (longlong)psStack_168);
                      *(undefined2 *)(lVar11 + 2 + (longlong)psStack_120) =
                           *(undefined2 *)(lVar8 + -4 + (longlong)psStack_168);
                      *(undefined2 *)(lVar11 + 4 + (longlong)psStack_120) =
                           *(undefined2 *)(lVar8 + -2 + (longlong)psStack_168);
                      *(undefined2 *)(lVar11 + 6 + (longlong)psStack_120) =
                           *(undefined2 *)(lVar8 + -0xc + (longlong)psStack_168);
                      *(undefined2 *)(lVar11 + 8 + (longlong)psStack_120) =
                           *(undefined2 *)(lVar8 + -10 + (longlong)psStack_168);
                      lVar14 = lVar8 + -8;
                      lVar8 = lVar8 + -0xc;
                      *(undefined2 *)(lVar11 + 10 + (longlong)psStack_120) =
                           *(undefined2 *)(lVar14 + (longlong)psStack_168);
                      lVar11 = lVar11 + 0xc;
                    } while (uVar15 < uStack_170);
                    lVar14 = uVar26 + 2 + uVar15;
                  }
                  if (lVar14 - 1U < uStack_180) {
                    lVar8 = -(lVar14 * 6 + -6);
                    lVar14 = lVar14 * 3;
                    psStack_120[lVar14 + -3] = *(short *)(lVar8 + -6 + (longlong)psStack_168);
                    psStack_120[lVar14 + -2] = *(short *)(lVar8 + -4 + (longlong)psStack_168);
                    psStack_120[lVar14 + -1] = *(short *)(lVar8 + -2 + (longlong)psStack_168);
                  }
                }
              }
              else if ((iVar19 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_178) {
                  lVar14 = (longlong)psVar24 + (2 - (longlong)psStack_120);
                  if ((((longlong)(uStack_178 * 6) <= lVar14) || (3 < -lVar14)) &&
                     ((1 < (longlong)psStack_120 - (longlong)psVar24 ||
                      ((longlong)(uStack_178 * 6) <= -((longlong)psStack_120 - (longlong)psVar24))))
                     ) {
                    sVar6 = psVar24[1];
                    iStack_1a8 = (int)sVar6;
                    sVar16 = psVar24[2];
                    iStack_1a0 = (int)sVar16;
                    sVar21 = *psVar24;
                    if ((longlong)uStack_178 < 0x20) {
                      uVar15 = 0;
                    }
                    else {
                      uVar26 = 0;
                      psVar7 = psStack_120;
                      do {
                        uVar26 = uVar26 + 0x20;
                        psVar7[0x30] = sVar21;
                        psVar7[0x33] = sVar21;
                        psVar7[0x36] = sVar21;
                        psVar7[0x39] = sVar21;
                        psVar7[0x3c] = sVar21;
                        psVar7[0x3f] = sVar21;
                        psVar7[0x42] = sVar21;
                        psVar7[0x45] = sVar21;
                        psVar7[0x48] = sVar21;
                        psVar7[0x4b] = sVar21;
                        psVar7[0x4e] = sVar21;
                        psVar7[0x51] = sVar21;
                        psVar7[0x54] = sVar21;
                        psVar7[0x57] = sVar21;
                        psVar7[0x5a] = sVar21;
                        psVar7[0x5d] = sVar21;
                        psVar7[0x31] = sVar6;
                        psVar7[0x34] = sVar6;
                        psVar7[0x37] = sVar6;
                        psVar7[0x3a] = sVar6;
                        psVar7[0x3d] = sVar6;
                        psVar7[0x40] = sVar6;
                        psVar7[0x43] = sVar6;
                        psVar7[0x46] = sVar6;
                        psVar7[0x49] = sVar6;
                        psVar7[0x4c] = sVar6;
                        psVar7[0x4f] = sVar6;
                        psVar7[0x52] = sVar6;
                        psVar7[0x55] = sVar6;
                        psVar7[0x58] = sVar6;
                        psVar7[0x5b] = sVar6;
                        psVar7[0x5e] = sVar6;
                        psVar7[1] = sVar6;
                        psVar7[4] = sVar6;
                        psVar7[7] = sVar6;
                        psVar7[10] = sVar6;
                        psVar7[0xd] = sVar6;
                        psVar7[0x10] = sVar6;
                        psVar7[0x13] = sVar6;
                        psVar7[0x16] = sVar6;
                        psVar7[0x19] = sVar6;
                        psVar7[0x1c] = sVar6;
                        psVar7[0x1f] = sVar6;
                        psVar7[0x22] = sVar6;
                        psVar7[0x25] = sVar6;
                        psVar7[0x28] = sVar6;
                        psVar7[0x2b] = sVar6;
                        psVar7[0x2e] = sVar6;
                        *psVar7 = sVar21;
                        psVar7[3] = sVar21;
                        psVar7[6] = sVar21;
                        psVar7[9] = sVar21;
                        psVar7[0xc] = sVar21;
                        psVar7[0xf] = sVar21;
                        psVar7[0x12] = sVar21;
                        psVar7[0x15] = sVar21;
                        psVar7[0x18] = sVar21;
                        psVar7[0x1b] = sVar21;
                        psVar7[0x1e] = sVar21;
                        psVar7[0x21] = sVar21;
                        psVar7[0x24] = sVar21;
                        psVar7[0x27] = sVar21;
                        psVar7[0x2a] = sVar21;
                        psVar7[0x2d] = sVar21;
                        psVar7[2] = sVar16;
                        psVar7[5] = sVar16;
                        psVar7[8] = sVar16;
                        psVar7[0xb] = sVar16;
                        psVar7[0xe] = sVar16;
                        psVar7[0x11] = sVar16;
                        psVar7[0x14] = sVar16;
                        psVar7[0x17] = sVar16;
                        psVar7[0x1a] = sVar16;
                        psVar7[0x1d] = sVar16;
                        psVar7[0x20] = sVar16;
                        psVar7[0x23] = sVar16;
                        psVar7[0x26] = sVar16;
                        psVar7[0x29] = sVar16;
                        psVar7[0x2c] = sVar16;
                        psVar7[0x2f] = sVar16;
                        psVar7[0x32] = sVar16;
                        psVar7[0x35] = sVar16;
                        psVar7[0x38] = sVar16;
                        psVar7[0x3b] = sVar16;
                        psVar7[0x3e] = sVar16;
                        psVar7[0x41] = sVar16;
                        psVar7[0x44] = sVar16;
                        psVar7[0x47] = sVar16;
                        psVar7[0x4a] = sVar16;
                        psVar7[0x4d] = sVar16;
                        psVar7[0x50] = sVar16;
                        psVar7[0x53] = sVar16;
                        psVar7[0x56] = sVar16;
                        psVar7[0x59] = sVar16;
                        psVar7[0x5c] = sVar16;
                        psVar7[0x5f] = sVar16;
                        psVar7 = psVar7 + 0x60;
                        uVar15 = uStack_158;
                      } while (uVar26 < uStack_158);
                    }
                    uVar26 = 0;
                    lVar14 = 0;
                    if (uVar15 + 1 <= uStack_178) {
                      do {
                        uVar26 = uVar26 + 1;
                        *(short *)((longlong)psStack_120 + lVar14 + uVar15 * 6) = sVar21;
                        *(short *)((longlong)psStack_120 + lVar14 + 2 + uVar15 * 6) = sVar6;
                        *(short *)((longlong)psStack_120 + lVar14 + 4 + uVar15 * 6) = sVar16;
                        lVar14 = lVar14 + 6;
                      } while (uVar26 < uStack_178 - uVar15);
                    }
                    goto LAB_140230af6;
                  }
                }
                lVar14 = 1;
                uVar15 = 0;
                if (uStack_170 != 0) {
                  do {
                    uVar26 = uVar15;
                    psStack_120[uVar26 * 6] = *psVar24;
                    uVar15 = uVar26 + 1;
                    psStack_120[uVar26 * 6 + 1] = psVar24[1];
                    psStack_120[uVar26 * 6 + 2] = psVar24[2];
                    psStack_120[uVar26 * 6 + 3] = *psVar24;
                    psStack_120[uVar26 * 6 + 4] = psVar24[1];
                    psStack_120[uVar26 * 6 + 5] = psVar24[2];
                  } while (uVar15 < uStack_170);
                  lVar14 = uVar26 + 2 + uVar15;
                }
                if (lVar14 - 1U < uStack_180) {
                  lVar14 = lVar14 * 3;
                  psStack_120[lVar14 + -3] = *psVar24;
                  psStack_120[lVar14 + -2] = psVar24[1];
                  psStack_120[lVar14 + -1] = psVar24[2];
                }
              }
LAB_140230af6:
              puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
              (*pcStack_d8)(psStack_d0,pfVar17,uVar18);
              uVar22 = uVar22 - uVar18;
              lVar25 = lVar25 + lStack_130 * 2;
              pfVar17 = pfVar17 + lStack_130;
            }
            if (uStack_b8 == 0) {
              if ((longlong)uVar18 < (longlong)uVar22) {
                lVar14 = uVar22 - uVar18;
                puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
                (*pcStack_d8)(lVar25,pfVar17,lVar14);
                lVar25 = lVar25 + lVar14 * 6;
                pfVar17 = pfVar17 + lVar14 * 3;
              }
              if (0 < (longlong)uStack_f8) {
                lVar14 = 1;
                if (uStack_f0 != 0) {
                  uVar22 = 0;
                  do {
                    uVar15 = uVar22;
                    psStack_120[uVar15 * 2] = *(short *)(lStack_128 + lVar25 + uVar15 * 4);
                    psStack_120[uVar15 * 2 + 1] = *(short *)(lStack_128 + lVar25 + 2 + uVar15 * 4);
                    uVar22 = uVar15 + 1;
                  } while (uVar22 < uStack_f0);
                  lVar14 = uVar15 + 2 + uVar22;
                }
                uVar22 = lVar14 - 1;
                if (uVar22 < uStack_e8) {
                  psStack_120[uVar22] = *(short *)(lVar25 + lStack_128 + uVar22 * 2);
                }
              }
              if (iVar19 == 1) {
                if (0 < lStack_130) {
                  if ((longlong)uStack_178 < 7) {
                    lVar14 = 1;
                    uVar22 = 0;
                    if (uStack_170 != 0) {
                      do {
                        uVar15 = uVar22;
                        psStack_168[uVar15 * 6 + -3] = psStack_168[-6];
                        uVar22 = uVar15 + 1;
                        psStack_168[uVar15 * 6 + -2] = psStack_168[-5];
                        psStack_168[uVar15 * 6 + -1] = psStack_168[-4];
                        psStack_168[uVar15 * 6] = psStack_168[-6];
                        psStack_168[uVar15 * 6 + 1] = psStack_168[-5];
                        psStack_168[uVar15 * 6 + 2] = psStack_168[-4];
                      } while (uVar22 < uStack_170);
                      lVar14 = uVar15 + 2 + uVar22;
                    }
                    if (lVar14 - 1U < uStack_180) {
                      lVar14 = lVar14 * 3;
                      psStack_168[lVar14 + -6] = psStack_168[-6];
                      psStack_168[lVar14 + -5] = psStack_168[-5];
                      psStack_168[lVar14 + -4] = psStack_168[-4];
                    }
                  }
                  else {
                    sVar6 = psStack_168[-6];
                    sVar16 = psStack_168[-5];
                    sVar21 = psStack_168[-4];
                    if ((longlong)uStack_178 < 0x20) {
                      uVar22 = 0;
                    }
                    else {
                      uVar15 = 0;
                      psVar24 = psStack_168;
                      do {
                        uVar15 = uVar15 + 0x20;
                        psVar24[0x2d] = sVar6;
                        psVar24[0x30] = sVar6;
                        psVar24[0x33] = sVar6;
                        psVar24[0x36] = sVar6;
                        psVar24[0x39] = sVar6;
                        psVar24[0x3c] = sVar6;
                        psVar24[0x3f] = sVar6;
                        psVar24[0x42] = sVar6;
                        psVar24[0x45] = sVar6;
                        psVar24[0x48] = sVar6;
                        psVar24[0x4b] = sVar6;
                        psVar24[0x4e] = sVar6;
                        psVar24[0x51] = sVar6;
                        psVar24[0x54] = sVar6;
                        psVar24[0x57] = sVar6;
                        psVar24[0x5a] = sVar6;
                        psVar24[0x2e] = sVar16;
                        psVar24[0x31] = sVar16;
                        psVar24[0x34] = sVar16;
                        psVar24[0x37] = sVar16;
                        psVar24[0x3a] = sVar16;
                        psVar24[0x3d] = sVar16;
                        psVar24[0x40] = sVar16;
                        psVar24[0x43] = sVar16;
                        psVar24[0x46] = sVar16;
                        psVar24[0x49] = sVar16;
                        psVar24[0x4c] = sVar16;
                        psVar24[0x4f] = sVar16;
                        psVar24[0x52] = sVar16;
                        psVar24[0x55] = sVar16;
                        psVar24[0x58] = sVar16;
                        psVar24[0x5b] = sVar16;
                        psVar24[-2] = sVar16;
                        psVar24[1] = sVar16;
                        psVar24[4] = sVar16;
                        psVar24[7] = sVar16;
                        psVar24[10] = sVar16;
                        psVar24[0xd] = sVar16;
                        psVar24[0x10] = sVar16;
                        psVar24[0x13] = sVar16;
                        psVar24[0x16] = sVar16;
                        psVar24[0x19] = sVar16;
                        psVar24[0x1c] = sVar16;
                        psVar24[0x1f] = sVar16;
                        psVar24[0x22] = sVar16;
                        psVar24[0x25] = sVar16;
                        psVar24[0x28] = sVar16;
                        psVar24[0x2b] = sVar16;
                        psVar24[-3] = sVar6;
                        *psVar24 = sVar6;
                        psVar24[3] = sVar6;
                        psVar24[6] = sVar6;
                        psVar24[9] = sVar6;
                        psVar24[0xc] = sVar6;
                        psVar24[0xf] = sVar6;
                        psVar24[0x12] = sVar6;
                        psVar24[0x15] = sVar6;
                        psVar24[0x18] = sVar6;
                        psVar24[0x1b] = sVar6;
                        psVar24[0x1e] = sVar6;
                        psVar24[0x21] = sVar6;
                        psVar24[0x24] = sVar6;
                        psVar24[0x27] = sVar6;
                        psVar24[0x2a] = sVar6;
                        psVar24[-1] = sVar21;
                        psVar24[2] = sVar21;
                        psVar24[5] = sVar21;
                        psVar24[8] = sVar21;
                        psVar24[0xb] = sVar21;
                        psVar24[0xe] = sVar21;
                        psVar24[0x11] = sVar21;
                        psVar24[0x14] = sVar21;
                        psVar24[0x17] = sVar21;
                        psVar24[0x1a] = sVar21;
                        psVar24[0x1d] = sVar21;
                        psVar24[0x20] = sVar21;
                        psVar24[0x23] = sVar21;
                        psVar24[0x26] = sVar21;
                        psVar24[0x29] = sVar21;
                        psVar24[0x2c] = sVar21;
                        psVar24[0x2f] = sVar21;
                        psVar24[0x32] = sVar21;
                        psVar24[0x35] = sVar21;
                        psVar24[0x38] = sVar21;
                        psVar24[0x3b] = sVar21;
                        psVar24[0x3e] = sVar21;
                        psVar24[0x41] = sVar21;
                        psVar24[0x44] = sVar21;
                        psVar24[0x47] = sVar21;
                        psVar24[0x4a] = sVar21;
                        psVar24[0x4d] = sVar21;
                        psVar24[0x50] = sVar21;
                        psVar24[0x53] = sVar21;
                        psVar24[0x56] = sVar21;
                        psVar24[0x59] = sVar21;
                        psVar24[0x5c] = sVar21;
                        psVar24 = psVar24 + 0x60;
                        uVar22 = uStack_158;
                      } while (uVar15 < uStack_158);
                    }
                    uVar15 = 0;
                    lVar14 = 0;
                    if (uVar22 + 1 <= uStack_178) {
                      do {
                        uVar15 = uVar15 + 1;
                        *(short *)((longlong)psStack_168 + lVar14 + -6 + uVar22 * 6) = sVar6;
                        *(short *)((longlong)psStack_168 + lVar14 + -4 + uVar22 * 6) = sVar16;
                        *(short *)((longlong)psStack_168 + lVar14 + -2 + uVar22 * 6) = sVar21;
                        lVar14 = lVar14 + 6;
                      } while (uVar15 < uStack_178 - uVar22);
                    }
                  }
                }
              }
              else if (iVar19 == 3) {
                if (0 < lStack_130) {
                  lVar14 = 1;
                  lVar25 = 0;
                  lVar8 = 0;
                  uVar22 = 0;
                  if (uStack_170 != 0) {
                    do {
                      uVar15 = uVar22;
                      uVar22 = uVar15 + 1;
                      *(undefined2 *)(lVar25 + -6 + (longlong)psStack_168) =
                           *(undefined2 *)(lVar8 + -0x12 + (longlong)psStack_168);
                      *(undefined2 *)(lVar25 + -4 + (longlong)psStack_168) =
                           *(undefined2 *)(lVar8 + -0x10 + (longlong)psStack_168);
                      *(undefined2 *)(lVar25 + -2 + (longlong)psStack_168) =
                           *(undefined2 *)(lVar8 + -0xe + (longlong)psStack_168);
                      *(undefined2 *)(lVar25 + (longlong)psStack_168) =
                           *(undefined2 *)(lVar8 + -0x18 + (longlong)psStack_168);
                      *(undefined2 *)(lVar25 + 2 + (longlong)psStack_168) =
                           *(undefined2 *)(lVar8 + -0x16 + (longlong)psStack_168);
                      lVar14 = lVar8 + -0x14;
                      lVar8 = lVar8 + -0xc;
                      *(undefined2 *)(lVar25 + 4 + (longlong)psStack_168) =
                           *(undefined2 *)(lVar14 + (longlong)psStack_168);
                      lVar25 = lVar25 + 0xc;
                    } while (uVar22 < uStack_170);
                    lVar14 = uVar15 + 2 + uVar22;
                  }
                  if (lVar14 - 1U < uStack_180) {
                    lVar25 = -(lVar14 * 6 + -6);
                    lVar14 = lVar14 * 3;
                    psStack_168[lVar14 + -6] = *(short *)(lVar25 + -0x12 + (longlong)psStack_168);
                    psStack_168[lVar14 + -5] = *(short *)(lVar25 + -0x10 + (longlong)psStack_168);
                    psStack_168[lVar14 + -4] = *(short *)(lVar25 + -0xe + (longlong)psStack_168);
                  }
                }
              }
              else if ((iVar19 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_178) {
                  lVar14 = (longlong)psVar24 + (2 - (longlong)(psStack_168 + -3));
                  if ((((longlong)(uStack_178 * 6) <= lVar14) || (3 < -lVar14)) &&
                     ((lVar14 = (longlong)(psStack_168 + -3) - (longlong)psVar24, 1 < lVar14 ||
                      ((longlong)(uStack_178 * 6) <= -lVar14)))) {
                    sVar6 = *psVar24;
                    sVar16 = psVar24[1];
                    sVar21 = psVar24[2];
                    if ((longlong)uStack_178 < 0x20) {
                      uVar22 = 0;
                    }
                    else {
                      uVar15 = 0;
                      psVar24 = psStack_168;
                      do {
                        uVar15 = uVar15 + 0x20;
                        psVar24[0x2d] = sVar6;
                        psVar24[0x30] = sVar6;
                        psVar24[0x33] = sVar6;
                        psVar24[0x36] = sVar6;
                        psVar24[0x39] = sVar6;
                        psVar24[0x3c] = sVar6;
                        psVar24[0x3f] = sVar6;
                        psVar24[0x42] = sVar6;
                        psVar24[0x45] = sVar6;
                        psVar24[0x48] = sVar6;
                        psVar24[0x4b] = sVar6;
                        psVar24[0x4e] = sVar6;
                        psVar24[0x51] = sVar6;
                        psVar24[0x54] = sVar6;
                        psVar24[0x57] = sVar6;
                        psVar24[0x5a] = sVar6;
                        psVar24[0x2e] = sVar16;
                        psVar24[0x31] = sVar16;
                        psVar24[0x34] = sVar16;
                        psVar24[0x37] = sVar16;
                        psVar24[0x3a] = sVar16;
                        psVar24[0x3d] = sVar16;
                        psVar24[0x40] = sVar16;
                        psVar24[0x43] = sVar16;
                        psVar24[0x46] = sVar16;
                        psVar24[0x49] = sVar16;
                        psVar24[0x4c] = sVar16;
                        psVar24[0x4f] = sVar16;
                        psVar24[0x52] = sVar16;
                        psVar24[0x55] = sVar16;
                        psVar24[0x58] = sVar16;
                        psVar24[0x5b] = sVar16;
                        psVar24[-2] = sVar16;
                        psVar24[1] = sVar16;
                        psVar24[4] = sVar16;
                        psVar24[7] = sVar16;
                        psVar24[10] = sVar16;
                        psVar24[0xd] = sVar16;
                        psVar24[0x10] = sVar16;
                        psVar24[0x13] = sVar16;
                        psVar24[0x16] = sVar16;
                        psVar24[0x19] = sVar16;
                        psVar24[0x1c] = sVar16;
                        psVar24[0x1f] = sVar16;
                        psVar24[0x22] = sVar16;
                        psVar24[0x25] = sVar16;
                        psVar24[0x28] = sVar16;
                        psVar24[0x2b] = sVar16;
                        psVar24[-3] = sVar6;
                        *psVar24 = sVar6;
                        psVar24[3] = sVar6;
                        psVar24[6] = sVar6;
                        psVar24[9] = sVar6;
                        psVar24[0xc] = sVar6;
                        psVar24[0xf] = sVar6;
                        psVar24[0x12] = sVar6;
                        psVar24[0x15] = sVar6;
                        psVar24[0x18] = sVar6;
                        psVar24[0x1b] = sVar6;
                        psVar24[0x1e] = sVar6;
                        psVar24[0x21] = sVar6;
                        psVar24[0x24] = sVar6;
                        psVar24[0x27] = sVar6;
                        psVar24[0x2a] = sVar6;
                        psVar24[-1] = sVar21;
                        psVar24[2] = sVar21;
                        psVar24[5] = sVar21;
                        psVar24[8] = sVar21;
                        psVar24[0xb] = sVar21;
                        psVar24[0xe] = sVar21;
                        psVar24[0x11] = sVar21;
                        psVar24[0x14] = sVar21;
                        psVar24[0x17] = sVar21;
                        psVar24[0x1a] = sVar21;
                        psVar24[0x1d] = sVar21;
                        psVar24[0x20] = sVar21;
                        psVar24[0x23] = sVar21;
                        psVar24[0x26] = sVar21;
                        psVar24[0x29] = sVar21;
                        psVar24[0x2c] = sVar21;
                        psVar24[0x2f] = sVar21;
                        psVar24[0x32] = sVar21;
                        psVar24[0x35] = sVar21;
                        psVar24[0x38] = sVar21;
                        psVar24[0x3b] = sVar21;
                        psVar24[0x3e] = sVar21;
                        psVar24[0x41] = sVar21;
                        psVar24[0x44] = sVar21;
                        psVar24[0x47] = sVar21;
                        psVar24[0x4a] = sVar21;
                        psVar24[0x4d] = sVar21;
                        psVar24[0x50] = sVar21;
                        psVar24[0x53] = sVar21;
                        psVar24[0x56] = sVar21;
                        psVar24[0x59] = sVar21;
                        psVar24[0x5c] = sVar21;
                        psVar24 = psVar24 + 0x60;
                        uVar22 = uStack_158;
                      } while (uVar15 < uStack_158);
                    }
                    uVar15 = 0;
                    lVar14 = 0;
                    if (uVar22 + 1 <= uStack_178) {
                      do {
                        uVar15 = uVar15 + 1;
                        *(short *)((longlong)psStack_168 + lVar14 + -6 + uVar22 * 6) = sVar6;
                        *(short *)((longlong)psStack_168 + lVar14 + -4 + uVar22 * 6) = sVar16;
                        *(short *)((longlong)psStack_168 + lVar14 + -2 + uVar22 * 6) = sVar21;
                        lVar14 = lVar14 + 6;
                      } while (uVar15 < uStack_178 - uVar22);
                    }
                    goto LAB_14023156b;
                  }
                }
                lVar14 = 1;
                uVar22 = 0;
                if (uStack_170 != 0) {
                  do {
                    uVar15 = uVar22;
                    psStack_168[uVar15 * 6 + -3] = *psVar24;
                    uVar22 = uVar15 + 1;
                    psStack_168[uVar15 * 6 + -2] = psVar24[1];
                    psStack_168[uVar15 * 6 + -1] = psVar24[2];
                    psStack_168[uVar15 * 6] = *psVar24;
                    psStack_168[uVar15 * 6 + 1] = psVar24[1];
                    psStack_168[uVar15 * 6 + 2] = psVar24[2];
                  } while (uVar22 < uStack_170);
                  lVar14 = uVar15 + 2 + uVar22;
                }
                if (lVar14 - 1U < uStack_180) {
                  lVar14 = lVar14 * 3;
                  psStack_168[lVar14 + -6] = *psVar24;
                  psStack_168[lVar14 + -5] = psVar24[1];
                  psStack_168[lVar14 + -4] = psVar24[2];
                }
              }
LAB_14023156b:
              puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
              (*pcStack_d8)(psStack_d0,pfVar17,uVar18,uStack_c0);
            }
            else {
              puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
              (*pcStack_d8)(lVar25,pfVar17,uVar22,uStack_c0);
            }
          }
        }
        iVar20 = (int)uVar9;
        uVar9 = uVar9 + 1;
        lVar14 = (longlong)iVar20 + 1;
      } while (uVar9 < uVar18);
LAB_14023175d:
      if ((uStack_48 ^ (ulonglong)auStack_218) == DAT_1436b4680) {
        return;
      }
      goto LAB_14022fb30;
    }
  }
  uVar13 = param_7 & 0xf;
  if (uVar13 == 6) {
    uVar9 = 0;
    fVar29 = (float)(int)*param_8;
    fVar28 = (float)(int)param_8[1];
    fVar27 = (float)(int)param_8[2];
    if (0 < iVar19) {
      uVar18 = *param_5;
      uVar22 = (longlong)(uVar18 * 3 + 2) / 3;
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,fVar28);
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,fVar29);
      do {
        if (0 < (longlong)(uVar18 * 3)) {
          if ((longlong)uVar22 < 0x10) {
            uVar15 = 0;
          }
          else {
            uVar26 = 0;
            pfVar17 = param_3;
            do {
              uVar26 = uVar26 + 0x10;
              *pfVar17 = fVar29;
              pfVar17[3] = fVar29;
              pfVar17[6] = fVar29;
              pfVar17[9] = fVar29;
              pfVar17[0xc] = fVar29;
              pfVar17[0xf] = fVar29;
              pfVar17[0x12] = fVar29;
              pfVar17[0x15] = fVar29;
              pfVar17[0x18] = fVar29;
              pfVar17[0x1b] = fVar29;
              pfVar17[0x1e] = fVar29;
              pfVar17[0x21] = fVar29;
              pfVar17[0x24] = fVar29;
              pfVar17[0x27] = fVar29;
              pfVar17[0x2a] = fVar29;
              pfVar17[0x2d] = fVar29;
              pfVar17[1] = fVar28;
              pfVar17[4] = fVar28;
              pfVar17[7] = fVar28;
              pfVar17[10] = fVar28;
              pfVar17[0xd] = fVar28;
              pfVar17[0x10] = fVar28;
              pfVar17[0x13] = fVar28;
              pfVar17[0x16] = fVar28;
              pfVar17[0x19] = fVar28;
              pfVar17[0x1c] = fVar28;
              pfVar17[0x1f] = fVar28;
              pfVar17[0x22] = fVar28;
              pfVar17[0x25] = fVar28;
              pfVar17[0x28] = fVar28;
              pfVar17[0x2b] = fVar28;
              pfVar17[0x2e] = fVar28;
              pfVar17[2] = fVar27;
              pfVar17[5] = fVar27;
              pfVar17[8] = fVar27;
              pfVar17[0xb] = fVar27;
              pfVar17[0xe] = fVar27;
              pfVar17[0x11] = fVar27;
              pfVar17[0x14] = fVar27;
              pfVar17[0x17] = fVar27;
              pfVar17[0x1a] = fVar27;
              pfVar17[0x1d] = fVar27;
              pfVar17[0x20] = fVar27;
              pfVar17[0x23] = fVar27;
              pfVar17[0x26] = fVar27;
              pfVar17[0x29] = fVar27;
              pfVar17[0x2c] = fVar27;
              pfVar17[0x2f] = fVar27;
              pfVar17 = pfVar17 + 0x30;
              uVar15 = uVar22 & 0xfffffffffffffff0;
            } while (uVar26 < (uVar22 & 0xfffffffffffffff0));
          }
          if (uVar15 + 1 <= uVar22) {
            uVar26 = uVar22 - uVar15;
            if ((longlong)uVar26 < 2) {
              uVar23 = 0;
            }
            else {
              uVar10 = 0;
              uVar23 = uVar26 & 0xfffffffffffffffe;
              lVar14 = 0;
              do {
                uVar10 = uVar10 + 2;
                *(float *)((longlong)param_3 + lVar14 + 8 + uVar15 * 0xc) = fVar27;
                *(float *)((longlong)param_3 + lVar14 + 0x14 + uVar15 * 0xc) = fVar27;
                *(float *)((longlong)param_3 + lVar14 + 4 + uVar15 * 0xc) = fVar28;
                *(float *)((longlong)param_3 + lVar14 + 0x10 + uVar15 * 0xc) = fVar28;
                *(float *)((longlong)param_3 + lVar14 + uVar15 * 0xc) = fVar29;
                *(float *)((longlong)param_3 + lVar14 + 0xc + uVar15 * 0xc) = fVar29;
                lVar14 = lVar14 + 0x18;
                pfStack_90 = param_3;
                lStack_78 = param_4;
              } while (uVar10 < uVar23);
            }
            lVar14 = uVar23 * 0xc;
            for (; uVar23 < uVar26; uVar23 = uVar23 + 1) {
              *(float *)((longlong)param_3 + lVar14 + uVar15 * 0xc) = fVar29;
              *(float *)((longlong)param_3 + lVar14 + 4 + uVar15 * 0xc) = fVar28;
              *(float *)((longlong)param_3 + lVar14 + 8 + uVar15 * 0xc) = fVar27;
              lVar14 = lVar14 + 0xc;
            }
          }
        }
        uVar9 = uVar9 + 1;
        param_3 = (float *)((longlong)param_3 + param_4);
      } while (uVar9 < (ulonglong)(longlong)iVar19);
    }
    if ((uStack_48 ^ (ulonglong)auStack_218) == DAT_1436b4680) {
      return;
    }
LAB_14022fb30:
    uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  if (uVar13 == 1) {
    uVar9 = 0;
    if (0 < iVar19) {
      lVar14 = param_4 * iVar19;
      uVar18 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar18) {
          if ((longlong)uVar18 < 8) {
LAB_14022f865:
            uVar22 = 0;
          }
          else {
            pfVar17 = (float *)(param_4 * uVar9 + (longlong)param_3);
            if ((longlong)uVar18 < 0xbd) {
              uVar15 = 0;
              uVar22 = uVar18 & 0xfffffffffffffff8;
            }
            else {
              uVar15 = (ulonglong)pfVar17 & 0x1f;
              if (uVar15 != 0) {
                if (((ulonglong)pfVar17 & 3) != 0) goto LAB_14022f865;
                uVar15 = 0x20 - uVar15 >> 2;
              }
              if ((longlong)uVar18 < (longlong)(uVar15 + 8)) goto LAB_14022f865;
              uVar26 = 0;
              uVar22 = uVar18 - (uVar18 - uVar15 & 7);
              if (uVar15 != 0) {
                do {
                  pfVar17[uVar26] = *(float *)((longlong)param_3 + uVar26 * 4 + lVar14);
                  uVar26 = uVar26 + 1;
                } while (uVar26 < uVar15);
              }
            }
            do {
              puVar1 = (undefined8 *)((longlong)param_3 + uVar15 * 4 + lVar14);
              uVar3 = puVar1[1];
              uVar4 = puVar1[2];
              uVar5 = puVar1[3];
              pfVar2 = pfVar17 + uVar15;
              *(undefined8 *)pfVar2 = *puVar1;
              *(undefined8 *)(pfVar2 + 2) = uVar3;
              *(undefined8 *)(pfVar2 + 4) = uVar4;
              *(undefined8 *)(pfVar2 + 6) = uVar5;
              uVar15 = uVar15 + 8;
            } while (uVar15 < uVar22);
          }
          if (uVar22 < uVar18) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar22 * 4 + param_4 * uVar9) =
                   *(undefined4 *)((longlong)param_3 + uVar22 * 4 + lVar14);
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar18);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)iVar19);
    }
    if ((uStack_48 ^ (ulonglong)auStack_218) != DAT_1436b4680) goto LAB_14022f57a;
  }
  else {
    if (uVar13 == 3) {
      puStack_1f8 = &uStack_1b8;
      uStack_1b8 = *param_5;
      uStack_1b0 = param_5[1];
      uStack_1e8 = param_7;
      psStack_1e0 = param_8;
      uStack_1d8 = param_9;
      psStack_1c8 = param_11;
      iStack_1f0 = param_6;
      iStack_1d0 = param_10;
      FUN_1409370c0(param_1,lStack_60,(longlong)iVar19,param_3);
      lVar14 = 1;
      uVar9 = 0;
      if (1 < iVar19) {
        lVar25 = ((longlong)param_10 + -1) * param_4;
        uVar18 = *param_5 * 3;
        do {
          if (0 < (longlong)uVar18) {
            if ((longlong)uVar18 < 8) {
LAB_14022f705:
              uVar22 = 0;
            }
            else {
              lVar8 = param_4 * lVar14;
              pfVar17 = (float *)((longlong)param_3 + lVar8);
              if ((longlong)uVar18 < 0xbd) {
                lVar8 = (longlong)param_3 + (lVar25 - lVar8);
                uVar15 = 0;
                uVar22 = uVar18 & 0xfffffffffffffff8;
              }
              else {
                uVar15 = (ulonglong)pfVar17 & 0x1f;
                if (uVar15 != 0) {
                  if (((ulonglong)pfVar17 & 3) != 0) goto LAB_14022f705;
                  uVar15 = 0x20 - uVar15 >> 2;
                }
                if ((longlong)uVar18 < (longlong)(uVar15 + 8)) goto LAB_14022f705;
                lVar8 = (longlong)param_3 + (lVar25 - lVar8);
                uVar26 = 0;
                uVar22 = uVar18 - (uVar18 - uVar15 & 7);
                if (uVar15 != 0) {
                  do {
                    pfVar17[uVar26] = *(float *)(lVar8 + uVar26 * 4);
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < uVar15);
                }
              }
              do {
                puVar1 = (undefined8 *)(lVar8 + uVar15 * 4);
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                pfVar2 = pfVar17 + uVar15;
                *(undefined8 *)pfVar2 = *puVar1;
                *(undefined8 *)(pfVar2 + 2) = uVar3;
                *(undefined8 *)(pfVar2 + 4) = uVar4;
                *(undefined8 *)(pfVar2 + 6) = uVar5;
                uVar15 = uVar15 + 8;
              } while (uVar15 < uVar22);
            }
            if (uVar22 < uVar18) {
              do {
                *(undefined4 *)((longlong)param_3 + uVar22 * 4 + lVar14 * param_4) =
                     *(undefined4 *)((longlong)param_3 + uVar22 * 4 + (lVar25 - lVar14 * param_4));
                uVar22 = uVar22 + 1;
              } while (uVar22 < uVar18);
            }
          }
          lVar14 = uVar9 + 2;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)(longlong)(iVar19 + -1));
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_218) != DAT_1436b4680) {
LAB_14022f57a:
      uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
  }
  return;
}

