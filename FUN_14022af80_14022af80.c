
/* WARNING: Removing unreachable block (ram,0x00014022cd6a) */

void FUN_14022af80(longlong param_1,longlong param_2,float *param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,ushort *param_11)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort uVar16;
  float *pfVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  ushort uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ushort *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_218 [32];
  ulonglong *puStack_1f8;
  int iStack_1f0;
  uint uStack_1e8;
  ushort *puStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  ushort *puStack_1c8;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  uint uStack_1a8;
  uint uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ushort *puStack_168;
  longlong lStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  ushort *puStack_120;
  uint uStack_118;
  ulonglong uStack_110;
  float *pfStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  uint uStack_e0;
  code *pcStack_d8;
  ushort *puStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  longlong lStack_b0;
  ushort *puStack_a8;
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
  ushort auStack_50 [4];
  ulonglong uStack_48;
  
  lVar14 = 0;
  iVar19 = param_10 >> 1;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_218;
  lStack_60 = param_2;
  if (iVar19 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_14022d33d;
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
      puStack_1e0 = param_8;
      uStack_1d8 = param_9;
      iStack_1d0 = iStack_68;
      puStack_1c8 = param_11;
      FUN_14090d040(lStack_70,lStack_60,lVar14,pfVar17);
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
      pcStack_d8 = *(code **)(&DAT_143088580 + lVar14 * 8);
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,param_7) & 0xffffffff0000000f;
      lVar14 = (longlong)iStack_68;
      lStack_70 = lStack_70 - lStack_60 * uStack_58;
      puStack_120 = param_11;
      lStack_160 = lVar14 * 3;
      lStack_b0 = lVar14 + -1;
      puStack_168 = param_11 + lVar14 * 3;
      uStack_f8 = lStack_160 - 3;
      uStack_98 = param_7 & 0xf0;
      uStack_198 = uStack_f8 & 0xfffffffffffffff0;
      uStack_e8 = ((lStack_160 + -1) / 3) * 3;
      uStack_f0 = uStack_e8 >> 1;
      uStack_e0 = param_7 & 0x40;
      lStack_c8 = -uStack_58;
      lStack_130 = uStack_58 * 3;
      puStack_d0 = param_11 + uStack_58 * 3;
      uStack_b8 = param_7 & 0x80;
      uStack_180 = lStack_130 + 2;
      uStack_170 = uStack_180 / 6;
      uStack_178 = (longlong)uStack_180 / 3;
      uStack_148 = (ulonglong)puStack_d0 & 0x1f;
      uStack_180 = uStack_180 / 3;
      uStack_158 = uStack_178 & 0xffffffffffffffe0;
      uStack_190 = 0x20 - uStack_148 >> 1;
      lStack_128 = uStack_58 * -6;
      uStack_138 = (longlong)(iStack_68 * 3) - 3;
      uStack_150 = (ulonglong)puStack_d0 & 1;
      uStack_188 = uStack_178 & 0xfffffffffffffff0;
      uStack_140 = uStack_138 >> 1;
      uStack_118 = param_7;
      iVar19 = (int)uStack_1b8;
      uVar9 = 0;
      lVar14 = 0;
      uStack_c0 = param_9;
      puStack_a8 = param_8;
      puStack_a0 = param_5;
      uVar18 = uStack_58;
      do {
        auStack_50[0] = 0;
        auStack_50[1] = 0;
        auStack_50[2] = 0;
        pfVar17 = (float *)(lStack_78 * uVar9 + (longlong)pfStack_90);
        lVar25 = lStack_60 * uVar9 + lStack_70;
        if (uStack_98 == 0xf0) {
          puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
          (*pcStack_d8)(lVar25,pfVar17,*puStack_a0,uStack_c0);
        }
        else {
          puVar24 = auStack_50;
          if (iVar19 == 6) {
            puVar24 = puStack_a8;
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
                      if (uStack_e0 == 0) goto LAB_14022d2b7;
                    }
                    else {
                      if (iVar19 != 1) goto LAB_14022d22d;
LAB_14022d3db:
                      lVar12 = 0;
                      if (uStack_e0 != 0) {
                        lVar12 = lVar8;
                      }
                    }
                  }
LAB_14022d29b:
                  uVar6 = *(ushort *)(lVar25 + lVar12 * 6);
                  uVar16 = *(ushort *)(lVar25 + 2 + lVar12 * 6);
                  uVar21 = *(ushort *)(lVar25 + 4 + lVar12 * 6);
                }
                else {
                  if ((lVar8 < (longlong)uVar22) || (uStack_118 == 0xf0)) goto LAB_14022d29b;
                  if (iVar19 != 6) {
                    if (iVar19 == 1) {
                      if (lVar8 < 0) goto LAB_14022d3db;
                      if (uStack_b8 == 0) {
                        lVar12 = lStack_100;
                      }
                    }
                    else {
LAB_14022d22d:
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
                          if (lVar8 < 0) goto LAB_14022d400;
                          if ((longlong)uVar22 <= lVar8) {
                            while (uStack_b8 == 0) {
                              for (lVar12 = lStack_100 * 2 - lVar12; lVar12 < 0; lVar12 = -lVar12) {
LAB_14022d400:
                                if (uStack_e0 != 0) goto LAB_14022d29b;
                              }
                              if (lVar12 < (longlong)uVar22) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14022d29b;
                  }
                  if (uStack_b8 != 0) goto LAB_14022d29b;
LAB_14022d2b7:
                  uVar6 = *puVar24;
                  uVar16 = puVar24[1];
                  uVar21 = puVar24[2];
                }
                uVar15 = uVar15 + 1;
                lVar8 = lVar8 + 1;
                *(ushort *)(lVar14 + (longlong)puStack_120) = uVar6;
                *(ushort *)(lVar14 + 2 + (longlong)puStack_120) = uVar16;
                *(ushort *)(lVar14 + 4 + (longlong)puStack_120) = uVar21;
                lVar14 = lVar14 + 6;
                uVar18 = uStack_58;
                uStack_110 = uVar9;
                pfStack_108 = pfVar17;
              } while (uVar15 < uVar22 + lVar11);
            }
            puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
            (*pcStack_d8)(puStack_d0,pfVar17,uVar22,uStack_c0);
          }
          else {
            if (uStack_e0 == 0) {
              if (0 < (longlong)uStack_f8) {
                if (6 < (longlong)uStack_f8) {
                  lVar11 = lStack_60 * lVar14 + lStack_70;
                  lVar8 = lStack_160 * 2 + -6;
                  if ((lVar8 <= (longlong)puStack_d0 - lVar11) ||
                     (lVar8 <= -((longlong)puStack_d0 - lVar11))) {
                    if ((longlong)uStack_f8 < 0x10) {
LAB_14022d37b:
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
                           ((longlong)uStack_f8 < (longlong)(uVar15 + 0x10))) goto LAB_14022d37b;
                        uVar26 = uStack_f8 - (uStack_f8 - uVar15 & 0xf);
                        uVar23 = 0;
                        if (uVar15 != 0) {
                          do {
                            puStack_d0[uVar23] = *(ushort *)(lVar11 + uVar23 * 2);
                            uVar23 = uVar23 + 1;
                          } while (uVar23 < uVar15);
                        }
                      }
                      do {
                        puVar1 = (undefined8 *)(lVar11 + uVar15 * 2);
                        uVar3 = puVar1[1];
                        uVar4 = puVar1[2];
                        uVar5 = puVar1[3];
                        puVar7 = puStack_d0 + uVar15;
                        *(undefined8 *)puVar7 = *puVar1;
                        *(undefined8 *)(puVar7 + 4) = uVar3;
                        *(undefined8 *)(puVar7 + 8) = uVar4;
                        *(undefined8 *)(puVar7 + 0xc) = uVar5;
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
                          *(undefined8 *)(puStack_d0 + uVar26 + uVar10) =
                               *(undefined8 *)(lVar11 + uVar26 * 2 + uVar10 * 2);
                          uVar10 = uVar10 + 4;
                        } while (uVar10 < uVar23);
                      }
                      if (uVar23 < uVar15) {
                        do {
                          puStack_d0[uVar26 + uVar23] =
                               *(ushort *)(lVar11 + uVar26 * 2 + uVar23 * 2);
                          uVar23 = uVar23 + 1;
                        } while (uVar23 < uVar15);
                      }
                    }
                    goto LAB_14022bc53;
                  }
                }
                lVar8 = 1;
                if (uStack_140 != 0) {
                  lVar8 = lStack_60 * lVar14 + lStack_70;
                  uVar15 = 0;
                  do {
                    uVar26 = uVar15;
                    puStack_d0[uVar26 * 2] = *(ushort *)(lVar8 + uVar26 * 4);
                    puStack_d0[uVar26 * 2 + 1] = *(ushort *)(lVar8 + 2 + uVar26 * 4);
                    uVar15 = uVar26 + 1;
                  } while (uVar15 < uStack_140);
                  lVar8 = uVar26 + 2 + uVar15;
                }
                uVar15 = lVar8 - 1;
                if (uVar15 < uStack_138) {
                  puStack_d0[uVar15] = *(ushort *)(lVar14 * lStack_60 + lStack_70 + uVar15 * 2);
                }
              }
LAB_14022bc53:
              if (iVar19 == 1) {
                if (0 < lStack_130) {
                  if ((longlong)uStack_178 < 7) {
                    uVar6 = puStack_d0[2];
LAB_14022c1c1:
                    uVar26 = 0;
                  }
                  else {
                    if ((5 < (longlong)puStack_120 - (longlong)puStack_d0) ||
                       ((longlong)(uStack_178 * 6) <=
                        -((longlong)puStack_120 - (longlong)puStack_d0))) {
                      uVar6 = *puStack_d0;
                      uVar16 = puStack_d0[2];
                      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,(uint)uVar6);
                      uVar21 = puStack_d0[1];
                      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(uint)uVar16);
                      if ((longlong)uStack_178 < 0x20) {
                        uVar15 = 0;
                      }
                      else {
                        uVar26 = 0;
                        puVar7 = puStack_120;
                        do {
                          uVar26 = uVar26 + 0x20;
                          *puVar7 = uVar6;
                          puVar7[3] = uVar6;
                          puVar7[6] = uVar6;
                          puVar7[9] = uVar6;
                          puVar7[0xc] = uVar6;
                          puVar7[0xf] = uVar6;
                          puVar7[0x12] = uVar6;
                          puVar7[0x15] = uVar6;
                          puVar7[0x18] = uVar6;
                          puVar7[0x1b] = uVar6;
                          puVar7[0x1e] = uVar6;
                          puVar7[0x21] = uVar6;
                          puVar7[0x24] = uVar6;
                          puVar7[0x27] = uVar6;
                          puVar7[0x2a] = uVar6;
                          puVar7[0x2d] = uVar6;
                          puVar7[0x30] = uVar6;
                          puVar7[0x33] = uVar6;
                          puVar7[0x36] = uVar6;
                          puVar7[0x39] = uVar6;
                          puVar7[0x3c] = uVar6;
                          puVar7[0x3f] = uVar6;
                          puVar7[0x42] = uVar6;
                          puVar7[0x45] = uVar6;
                          puVar7[0x48] = uVar6;
                          puVar7[0x4b] = uVar6;
                          puVar7[0x4e] = uVar6;
                          puVar7[0x51] = uVar6;
                          puVar7[0x54] = uVar6;
                          puVar7[0x57] = uVar6;
                          puVar7[0x5a] = uVar6;
                          puVar7[0x5d] = uVar6;
                          puVar7[1] = uVar21;
                          puVar7[4] = uVar21;
                          puVar7[7] = uVar21;
                          puVar7[10] = uVar21;
                          puVar7[0xd] = uVar21;
                          puVar7[0x10] = uVar21;
                          puVar7[0x13] = uVar21;
                          puVar7[0x16] = uVar21;
                          puVar7[0x19] = uVar21;
                          puVar7[0x1c] = uVar21;
                          puVar7[0x1f] = uVar21;
                          puVar7[0x22] = uVar21;
                          puVar7[0x25] = uVar21;
                          puVar7[0x28] = uVar21;
                          puVar7[0x2b] = uVar21;
                          puVar7[0x2e] = uVar21;
                          puVar7[0x31] = uVar21;
                          puVar7[0x34] = uVar21;
                          puVar7[0x37] = uVar21;
                          puVar7[0x3a] = uVar21;
                          puVar7[0x3d] = uVar21;
                          puVar7[0x40] = uVar21;
                          puVar7[0x43] = uVar21;
                          puVar7[0x46] = uVar21;
                          puVar7[0x49] = uVar21;
                          puVar7[0x4c] = uVar21;
                          puVar7[0x4f] = uVar21;
                          puVar7[0x52] = uVar21;
                          puVar7[0x55] = uVar21;
                          puVar7[0x58] = uVar21;
                          puVar7[0x5b] = uVar21;
                          puVar7[0x5e] = uVar21;
                          puVar7[2] = uVar16;
                          puVar7[5] = uVar16;
                          puVar7[8] = uVar16;
                          puVar7[0xb] = uVar16;
                          puVar7[0xe] = uVar16;
                          puVar7[0x11] = uVar16;
                          puVar7[0x14] = uVar16;
                          puVar7[0x17] = uVar16;
                          puVar7[0x1a] = uVar16;
                          puVar7[0x1d] = uVar16;
                          puVar7[0x20] = uVar16;
                          puVar7[0x23] = uVar16;
                          puVar7[0x26] = uVar16;
                          puVar7[0x29] = uVar16;
                          puVar7[0x2c] = uVar16;
                          puVar7[0x2f] = uVar16;
                          puVar7[0x32] = uVar16;
                          puVar7[0x35] = uVar16;
                          puVar7[0x38] = uVar16;
                          puVar7[0x3b] = uVar16;
                          puVar7[0x3e] = uVar16;
                          puVar7[0x41] = uVar16;
                          puVar7[0x44] = uVar16;
                          puVar7[0x47] = uVar16;
                          puVar7[0x4a] = uVar16;
                          puVar7[0x4d] = uVar16;
                          puVar7[0x50] = uVar16;
                          puVar7[0x53] = uVar16;
                          puVar7[0x56] = uVar16;
                          puVar7[0x59] = uVar16;
                          puVar7[0x5c] = uVar16;
                          puVar7[0x5f] = uVar16;
                          puVar7 = puVar7 + 0x60;
                          uVar15 = uStack_158;
                        } while (uVar26 < uStack_158);
                      }
                      uVar26 = 0;
                      lVar14 = 0;
                      if (uVar15 + 1 <= uStack_178) {
                        do {
                          uVar26 = uVar26 + 1;
                          *(ushort *)((longlong)puStack_120 + lVar14 + uVar15 * 6) = uVar6;
                          *(ushort *)((longlong)puStack_120 + lVar14 + 2 + uVar15 * 6) = uVar21;
                          *(ushort *)((longlong)puStack_120 + lVar14 + 4 + uVar15 * 6) = uVar16;
                          lVar14 = lVar14 + 6;
                        } while (uVar26 < uStack_178 - uVar15);
                      }
                      goto LAB_14022c6d6;
                    }
                    uVar6 = puStack_d0[2];
                    if ((longlong)uStack_178 < 0x10) goto LAB_14022c1c1;
                    uVar15 = 0;
                    lVar14 = 0;
                    do {
                      uVar16 = *puStack_d0;
                      uVar15 = uVar15 + 0x10;
                      *(ushort *)(lVar14 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 6 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0xc + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x12 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x18 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x1e + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x24 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x2a + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x30 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x36 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x3c + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x42 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x48 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x4e + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x54 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x5a + (longlong)puStack_120) = uVar16;
                      uVar16 = puStack_d0[1];
                      *(ushort *)(lVar14 + 2 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 8 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0xe + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x14 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x1a + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x20 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x26 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x2c + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x32 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x38 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x3e + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x44 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x4a + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x50 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x56 + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 0x5c + (longlong)puStack_120) = uVar16;
                      *(ushort *)(lVar14 + 4 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 10 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x10 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x16 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x1c + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x22 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x28 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x2e + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x34 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x3a + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x40 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x46 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x4c + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x52 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x58 + (longlong)puStack_120) = uVar6;
                      *(ushort *)(lVar14 + 0x5e + (longlong)puStack_120) = uVar6;
                      lVar14 = lVar14 + 0x60;
                      uVar18 = uStack_58;
                      uVar26 = uStack_188;
                    } while (uVar15 < uStack_188);
                  }
                  lVar14 = uVar26 * 6;
                  for (; uVar26 < uStack_178; uVar26 = uVar26 + 1) {
                    *(ushort *)(lVar14 + (longlong)puStack_120) = *puStack_d0;
                    *(ushort *)(lVar14 + 2 + (longlong)puStack_120) = puStack_d0[1];
                    *(ushort *)(lVar14 + 4 + (longlong)puStack_120) = uVar6;
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
                      *(undefined2 *)(lVar11 + (longlong)puStack_120) =
                           *(undefined2 *)(lVar8 + -6 + (longlong)puStack_168);
                      *(undefined2 *)(lVar11 + 2 + (longlong)puStack_120) =
                           *(undefined2 *)(lVar8 + -4 + (longlong)puStack_168);
                      *(undefined2 *)(lVar11 + 4 + (longlong)puStack_120) =
                           *(undefined2 *)(lVar8 + -2 + (longlong)puStack_168);
                      *(undefined2 *)(lVar11 + 6 + (longlong)puStack_120) =
                           *(undefined2 *)(lVar8 + -0xc + (longlong)puStack_168);
                      *(undefined2 *)(lVar11 + 8 + (longlong)puStack_120) =
                           *(undefined2 *)(lVar8 + -10 + (longlong)puStack_168);
                      lVar14 = lVar8 + -8;
                      lVar8 = lVar8 + -0xc;
                      *(undefined2 *)(lVar11 + 10 + (longlong)puStack_120) =
                           *(undefined2 *)(lVar14 + (longlong)puStack_168);
                      lVar11 = lVar11 + 0xc;
                    } while (uVar15 < uStack_170);
                    lVar14 = uVar26 + 2 + uVar15;
                  }
                  if (lVar14 - 1U < uStack_180) {
                    lVar8 = -(lVar14 * 6 + -6);
                    lVar14 = lVar14 * 3;
                    puStack_120[lVar14 + -3] = *(ushort *)(lVar8 + -6 + (longlong)puStack_168);
                    puStack_120[lVar14 + -2] = *(ushort *)(lVar8 + -4 + (longlong)puStack_168);
                    puStack_120[lVar14 + -1] = *(ushort *)(lVar8 + -2 + (longlong)puStack_168);
                  }
                }
              }
              else if ((iVar19 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_178) {
                  lVar14 = (longlong)puVar24 + (2 - (longlong)puStack_120);
                  if ((((longlong)(uStack_178 * 6) <= lVar14) || (3 < -lVar14)) &&
                     ((1 < (longlong)puStack_120 - (longlong)puVar24 ||
                      ((longlong)(uStack_178 * 6) <= -((longlong)puStack_120 - (longlong)puVar24))))
                     ) {
                    uVar6 = puVar24[1];
                    uVar16 = puVar24[2];
                    uVar21 = *puVar24;
                    uStack_1a8 = (uint)uVar6;
                    uStack_1a0 = (uint)uVar16;
                    if ((longlong)uStack_178 < 0x20) {
                      uVar15 = 0;
                    }
                    else {
                      uVar26 = 0;
                      puVar7 = puStack_120;
                      do {
                        uVar26 = uVar26 + 0x20;
                        puVar7[0x30] = uVar21;
                        puVar7[0x33] = uVar21;
                        puVar7[0x36] = uVar21;
                        puVar7[0x39] = uVar21;
                        puVar7[0x3c] = uVar21;
                        puVar7[0x3f] = uVar21;
                        puVar7[0x42] = uVar21;
                        puVar7[0x45] = uVar21;
                        puVar7[0x48] = uVar21;
                        puVar7[0x4b] = uVar21;
                        puVar7[0x4e] = uVar21;
                        puVar7[0x51] = uVar21;
                        puVar7[0x54] = uVar21;
                        puVar7[0x57] = uVar21;
                        puVar7[0x5a] = uVar21;
                        puVar7[0x5d] = uVar21;
                        puVar7[0x31] = uVar6;
                        puVar7[0x34] = uVar6;
                        puVar7[0x37] = uVar6;
                        puVar7[0x3a] = uVar6;
                        puVar7[0x3d] = uVar6;
                        puVar7[0x40] = uVar6;
                        puVar7[0x43] = uVar6;
                        puVar7[0x46] = uVar6;
                        puVar7[0x49] = uVar6;
                        puVar7[0x4c] = uVar6;
                        puVar7[0x4f] = uVar6;
                        puVar7[0x52] = uVar6;
                        puVar7[0x55] = uVar6;
                        puVar7[0x58] = uVar6;
                        puVar7[0x5b] = uVar6;
                        puVar7[0x5e] = uVar6;
                        puVar7[1] = uVar6;
                        puVar7[4] = uVar6;
                        puVar7[7] = uVar6;
                        puVar7[10] = uVar6;
                        puVar7[0xd] = uVar6;
                        puVar7[0x10] = uVar6;
                        puVar7[0x13] = uVar6;
                        puVar7[0x16] = uVar6;
                        puVar7[0x19] = uVar6;
                        puVar7[0x1c] = uVar6;
                        puVar7[0x1f] = uVar6;
                        puVar7[0x22] = uVar6;
                        puVar7[0x25] = uVar6;
                        puVar7[0x28] = uVar6;
                        puVar7[0x2b] = uVar6;
                        puVar7[0x2e] = uVar6;
                        *puVar7 = uVar21;
                        puVar7[3] = uVar21;
                        puVar7[6] = uVar21;
                        puVar7[9] = uVar21;
                        puVar7[0xc] = uVar21;
                        puVar7[0xf] = uVar21;
                        puVar7[0x12] = uVar21;
                        puVar7[0x15] = uVar21;
                        puVar7[0x18] = uVar21;
                        puVar7[0x1b] = uVar21;
                        puVar7[0x1e] = uVar21;
                        puVar7[0x21] = uVar21;
                        puVar7[0x24] = uVar21;
                        puVar7[0x27] = uVar21;
                        puVar7[0x2a] = uVar21;
                        puVar7[0x2d] = uVar21;
                        puVar7[2] = uVar16;
                        puVar7[5] = uVar16;
                        puVar7[8] = uVar16;
                        puVar7[0xb] = uVar16;
                        puVar7[0xe] = uVar16;
                        puVar7[0x11] = uVar16;
                        puVar7[0x14] = uVar16;
                        puVar7[0x17] = uVar16;
                        puVar7[0x1a] = uVar16;
                        puVar7[0x1d] = uVar16;
                        puVar7[0x20] = uVar16;
                        puVar7[0x23] = uVar16;
                        puVar7[0x26] = uVar16;
                        puVar7[0x29] = uVar16;
                        puVar7[0x2c] = uVar16;
                        puVar7[0x2f] = uVar16;
                        puVar7[0x32] = uVar16;
                        puVar7[0x35] = uVar16;
                        puVar7[0x38] = uVar16;
                        puVar7[0x3b] = uVar16;
                        puVar7[0x3e] = uVar16;
                        puVar7[0x41] = uVar16;
                        puVar7[0x44] = uVar16;
                        puVar7[0x47] = uVar16;
                        puVar7[0x4a] = uVar16;
                        puVar7[0x4d] = uVar16;
                        puVar7[0x50] = uVar16;
                        puVar7[0x53] = uVar16;
                        puVar7[0x56] = uVar16;
                        puVar7[0x59] = uVar16;
                        puVar7[0x5c] = uVar16;
                        puVar7[0x5f] = uVar16;
                        puVar7 = puVar7 + 0x60;
                        uVar15 = uStack_158;
                      } while (uVar26 < uStack_158);
                    }
                    uVar26 = 0;
                    lVar14 = 0;
                    if (uVar15 + 1 <= uStack_178) {
                      do {
                        uVar26 = uVar26 + 1;
                        *(ushort *)((longlong)puStack_120 + lVar14 + uVar15 * 6) = uVar21;
                        *(ushort *)((longlong)puStack_120 + lVar14 + 2 + uVar15 * 6) = uVar6;
                        *(ushort *)((longlong)puStack_120 + lVar14 + 4 + uVar15 * 6) = uVar16;
                        lVar14 = lVar14 + 6;
                      } while (uVar26 < uStack_178 - uVar15);
                    }
                    goto LAB_14022c6d6;
                  }
                }
                lVar14 = 1;
                uVar15 = 0;
                if (uStack_170 != 0) {
                  do {
                    uVar26 = uVar15;
                    puStack_120[uVar26 * 6] = *puVar24;
                    uVar15 = uVar26 + 1;
                    puStack_120[uVar26 * 6 + 1] = puVar24[1];
                    puStack_120[uVar26 * 6 + 2] = puVar24[2];
                    puStack_120[uVar26 * 6 + 3] = *puVar24;
                    puStack_120[uVar26 * 6 + 4] = puVar24[1];
                    puStack_120[uVar26 * 6 + 5] = puVar24[2];
                  } while (uVar15 < uStack_170);
                  lVar14 = uVar26 + 2 + uVar15;
                }
                if (lVar14 - 1U < uStack_180) {
                  lVar14 = lVar14 * 3;
                  puStack_120[lVar14 + -3] = *puVar24;
                  puStack_120[lVar14 + -2] = puVar24[1];
                  puStack_120[lVar14 + -1] = puVar24[2];
                }
              }
LAB_14022c6d6:
              puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
              (*pcStack_d8)(puStack_d0,pfVar17,uVar18);
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
                    puStack_120[uVar15 * 2] = *(ushort *)(lStack_128 + lVar25 + uVar15 * 4);
                    puStack_120[uVar15 * 2 + 1] = *(ushort *)(lStack_128 + lVar25 + 2 + uVar15 * 4);
                    uVar22 = uVar15 + 1;
                  } while (uVar22 < uStack_f0);
                  lVar14 = uVar15 + 2 + uVar22;
                }
                uVar22 = lVar14 - 1;
                if (uVar22 < uStack_e8) {
                  puStack_120[uVar22] = *(ushort *)(lVar25 + lStack_128 + uVar22 * 2);
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
                        puStack_168[uVar15 * 6 + -3] = puStack_168[-6];
                        uVar22 = uVar15 + 1;
                        puStack_168[uVar15 * 6 + -2] = puStack_168[-5];
                        puStack_168[uVar15 * 6 + -1] = puStack_168[-4];
                        puStack_168[uVar15 * 6] = puStack_168[-6];
                        puStack_168[uVar15 * 6 + 1] = puStack_168[-5];
                        puStack_168[uVar15 * 6 + 2] = puStack_168[-4];
                      } while (uVar22 < uStack_170);
                      lVar14 = uVar15 + 2 + uVar22;
                    }
                    if (lVar14 - 1U < uStack_180) {
                      lVar14 = lVar14 * 3;
                      puStack_168[lVar14 + -6] = puStack_168[-6];
                      puStack_168[lVar14 + -5] = puStack_168[-5];
                      puStack_168[lVar14 + -4] = puStack_168[-4];
                    }
                  }
                  else {
                    uVar6 = puStack_168[-6];
                    uVar16 = puStack_168[-5];
                    uVar21 = puStack_168[-4];
                    if ((longlong)uStack_178 < 0x20) {
                      uVar22 = 0;
                    }
                    else {
                      uVar15 = 0;
                      puVar24 = puStack_168;
                      do {
                        uVar15 = uVar15 + 0x20;
                        puVar24[0x2d] = uVar6;
                        puVar24[0x30] = uVar6;
                        puVar24[0x33] = uVar6;
                        puVar24[0x36] = uVar6;
                        puVar24[0x39] = uVar6;
                        puVar24[0x3c] = uVar6;
                        puVar24[0x3f] = uVar6;
                        puVar24[0x42] = uVar6;
                        puVar24[0x45] = uVar6;
                        puVar24[0x48] = uVar6;
                        puVar24[0x4b] = uVar6;
                        puVar24[0x4e] = uVar6;
                        puVar24[0x51] = uVar6;
                        puVar24[0x54] = uVar6;
                        puVar24[0x57] = uVar6;
                        puVar24[0x5a] = uVar6;
                        puVar24[0x2e] = uVar16;
                        puVar24[0x31] = uVar16;
                        puVar24[0x34] = uVar16;
                        puVar24[0x37] = uVar16;
                        puVar24[0x3a] = uVar16;
                        puVar24[0x3d] = uVar16;
                        puVar24[0x40] = uVar16;
                        puVar24[0x43] = uVar16;
                        puVar24[0x46] = uVar16;
                        puVar24[0x49] = uVar16;
                        puVar24[0x4c] = uVar16;
                        puVar24[0x4f] = uVar16;
                        puVar24[0x52] = uVar16;
                        puVar24[0x55] = uVar16;
                        puVar24[0x58] = uVar16;
                        puVar24[0x5b] = uVar16;
                        puVar24[-2] = uVar16;
                        puVar24[1] = uVar16;
                        puVar24[4] = uVar16;
                        puVar24[7] = uVar16;
                        puVar24[10] = uVar16;
                        puVar24[0xd] = uVar16;
                        puVar24[0x10] = uVar16;
                        puVar24[0x13] = uVar16;
                        puVar24[0x16] = uVar16;
                        puVar24[0x19] = uVar16;
                        puVar24[0x1c] = uVar16;
                        puVar24[0x1f] = uVar16;
                        puVar24[0x22] = uVar16;
                        puVar24[0x25] = uVar16;
                        puVar24[0x28] = uVar16;
                        puVar24[0x2b] = uVar16;
                        puVar24[-3] = uVar6;
                        *puVar24 = uVar6;
                        puVar24[3] = uVar6;
                        puVar24[6] = uVar6;
                        puVar24[9] = uVar6;
                        puVar24[0xc] = uVar6;
                        puVar24[0xf] = uVar6;
                        puVar24[0x12] = uVar6;
                        puVar24[0x15] = uVar6;
                        puVar24[0x18] = uVar6;
                        puVar24[0x1b] = uVar6;
                        puVar24[0x1e] = uVar6;
                        puVar24[0x21] = uVar6;
                        puVar24[0x24] = uVar6;
                        puVar24[0x27] = uVar6;
                        puVar24[0x2a] = uVar6;
                        puVar24[-1] = uVar21;
                        puVar24[2] = uVar21;
                        puVar24[5] = uVar21;
                        puVar24[8] = uVar21;
                        puVar24[0xb] = uVar21;
                        puVar24[0xe] = uVar21;
                        puVar24[0x11] = uVar21;
                        puVar24[0x14] = uVar21;
                        puVar24[0x17] = uVar21;
                        puVar24[0x1a] = uVar21;
                        puVar24[0x1d] = uVar21;
                        puVar24[0x20] = uVar21;
                        puVar24[0x23] = uVar21;
                        puVar24[0x26] = uVar21;
                        puVar24[0x29] = uVar21;
                        puVar24[0x2c] = uVar21;
                        puVar24[0x2f] = uVar21;
                        puVar24[0x32] = uVar21;
                        puVar24[0x35] = uVar21;
                        puVar24[0x38] = uVar21;
                        puVar24[0x3b] = uVar21;
                        puVar24[0x3e] = uVar21;
                        puVar24[0x41] = uVar21;
                        puVar24[0x44] = uVar21;
                        puVar24[0x47] = uVar21;
                        puVar24[0x4a] = uVar21;
                        puVar24[0x4d] = uVar21;
                        puVar24[0x50] = uVar21;
                        puVar24[0x53] = uVar21;
                        puVar24[0x56] = uVar21;
                        puVar24[0x59] = uVar21;
                        puVar24[0x5c] = uVar21;
                        puVar24 = puVar24 + 0x60;
                        uVar22 = uStack_158;
                      } while (uVar15 < uStack_158);
                    }
                    uVar15 = 0;
                    lVar14 = 0;
                    if (uVar22 + 1 <= uStack_178) {
                      do {
                        uVar15 = uVar15 + 1;
                        *(ushort *)((longlong)puStack_168 + lVar14 + -6 + uVar22 * 6) = uVar6;
                        *(ushort *)((longlong)puStack_168 + lVar14 + -4 + uVar22 * 6) = uVar16;
                        *(ushort *)((longlong)puStack_168 + lVar14 + -2 + uVar22 * 6) = uVar21;
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
                      *(undefined2 *)(lVar25 + -6 + (longlong)puStack_168) =
                           *(undefined2 *)(lVar8 + -0x12 + (longlong)puStack_168);
                      *(undefined2 *)(lVar25 + -4 + (longlong)puStack_168) =
                           *(undefined2 *)(lVar8 + -0x10 + (longlong)puStack_168);
                      *(undefined2 *)(lVar25 + -2 + (longlong)puStack_168) =
                           *(undefined2 *)(lVar8 + -0xe + (longlong)puStack_168);
                      *(undefined2 *)(lVar25 + (longlong)puStack_168) =
                           *(undefined2 *)(lVar8 + -0x18 + (longlong)puStack_168);
                      *(undefined2 *)(lVar25 + 2 + (longlong)puStack_168) =
                           *(undefined2 *)(lVar8 + -0x16 + (longlong)puStack_168);
                      lVar14 = lVar8 + -0x14;
                      lVar8 = lVar8 + -0xc;
                      *(undefined2 *)(lVar25 + 4 + (longlong)puStack_168) =
                           *(undefined2 *)(lVar14 + (longlong)puStack_168);
                      lVar25 = lVar25 + 0xc;
                    } while (uVar22 < uStack_170);
                    lVar14 = uVar15 + 2 + uVar22;
                  }
                  if (lVar14 - 1U < uStack_180) {
                    lVar25 = -(lVar14 * 6 + -6);
                    lVar14 = lVar14 * 3;
                    puStack_168[lVar14 + -6] = *(ushort *)(lVar25 + -0x12 + (longlong)puStack_168);
                    puStack_168[lVar14 + -5] = *(ushort *)(lVar25 + -0x10 + (longlong)puStack_168);
                    puStack_168[lVar14 + -4] = *(ushort *)(lVar25 + -0xe + (longlong)puStack_168);
                  }
                }
              }
              else if ((iVar19 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_178) {
                  lVar14 = (longlong)puVar24 + (2 - (longlong)(puStack_168 + -3));
                  if ((((longlong)(uStack_178 * 6) <= lVar14) || (3 < -lVar14)) &&
                     ((lVar14 = (longlong)(puStack_168 + -3) - (longlong)puVar24, 1 < lVar14 ||
                      ((longlong)(uStack_178 * 6) <= -lVar14)))) {
                    uVar6 = *puVar24;
                    uVar16 = puVar24[1];
                    uVar21 = puVar24[2];
                    if ((longlong)uStack_178 < 0x20) {
                      uVar22 = 0;
                    }
                    else {
                      uVar15 = 0;
                      puVar24 = puStack_168;
                      do {
                        uVar15 = uVar15 + 0x20;
                        puVar24[0x2d] = uVar6;
                        puVar24[0x30] = uVar6;
                        puVar24[0x33] = uVar6;
                        puVar24[0x36] = uVar6;
                        puVar24[0x39] = uVar6;
                        puVar24[0x3c] = uVar6;
                        puVar24[0x3f] = uVar6;
                        puVar24[0x42] = uVar6;
                        puVar24[0x45] = uVar6;
                        puVar24[0x48] = uVar6;
                        puVar24[0x4b] = uVar6;
                        puVar24[0x4e] = uVar6;
                        puVar24[0x51] = uVar6;
                        puVar24[0x54] = uVar6;
                        puVar24[0x57] = uVar6;
                        puVar24[0x5a] = uVar6;
                        puVar24[0x2e] = uVar16;
                        puVar24[0x31] = uVar16;
                        puVar24[0x34] = uVar16;
                        puVar24[0x37] = uVar16;
                        puVar24[0x3a] = uVar16;
                        puVar24[0x3d] = uVar16;
                        puVar24[0x40] = uVar16;
                        puVar24[0x43] = uVar16;
                        puVar24[0x46] = uVar16;
                        puVar24[0x49] = uVar16;
                        puVar24[0x4c] = uVar16;
                        puVar24[0x4f] = uVar16;
                        puVar24[0x52] = uVar16;
                        puVar24[0x55] = uVar16;
                        puVar24[0x58] = uVar16;
                        puVar24[0x5b] = uVar16;
                        puVar24[-2] = uVar16;
                        puVar24[1] = uVar16;
                        puVar24[4] = uVar16;
                        puVar24[7] = uVar16;
                        puVar24[10] = uVar16;
                        puVar24[0xd] = uVar16;
                        puVar24[0x10] = uVar16;
                        puVar24[0x13] = uVar16;
                        puVar24[0x16] = uVar16;
                        puVar24[0x19] = uVar16;
                        puVar24[0x1c] = uVar16;
                        puVar24[0x1f] = uVar16;
                        puVar24[0x22] = uVar16;
                        puVar24[0x25] = uVar16;
                        puVar24[0x28] = uVar16;
                        puVar24[0x2b] = uVar16;
                        puVar24[-3] = uVar6;
                        *puVar24 = uVar6;
                        puVar24[3] = uVar6;
                        puVar24[6] = uVar6;
                        puVar24[9] = uVar6;
                        puVar24[0xc] = uVar6;
                        puVar24[0xf] = uVar6;
                        puVar24[0x12] = uVar6;
                        puVar24[0x15] = uVar6;
                        puVar24[0x18] = uVar6;
                        puVar24[0x1b] = uVar6;
                        puVar24[0x1e] = uVar6;
                        puVar24[0x21] = uVar6;
                        puVar24[0x24] = uVar6;
                        puVar24[0x27] = uVar6;
                        puVar24[0x2a] = uVar6;
                        puVar24[-1] = uVar21;
                        puVar24[2] = uVar21;
                        puVar24[5] = uVar21;
                        puVar24[8] = uVar21;
                        puVar24[0xb] = uVar21;
                        puVar24[0xe] = uVar21;
                        puVar24[0x11] = uVar21;
                        puVar24[0x14] = uVar21;
                        puVar24[0x17] = uVar21;
                        puVar24[0x1a] = uVar21;
                        puVar24[0x1d] = uVar21;
                        puVar24[0x20] = uVar21;
                        puVar24[0x23] = uVar21;
                        puVar24[0x26] = uVar21;
                        puVar24[0x29] = uVar21;
                        puVar24[0x2c] = uVar21;
                        puVar24[0x2f] = uVar21;
                        puVar24[0x32] = uVar21;
                        puVar24[0x35] = uVar21;
                        puVar24[0x38] = uVar21;
                        puVar24[0x3b] = uVar21;
                        puVar24[0x3e] = uVar21;
                        puVar24[0x41] = uVar21;
                        puVar24[0x44] = uVar21;
                        puVar24[0x47] = uVar21;
                        puVar24[0x4a] = uVar21;
                        puVar24[0x4d] = uVar21;
                        puVar24[0x50] = uVar21;
                        puVar24[0x53] = uVar21;
                        puVar24[0x56] = uVar21;
                        puVar24[0x59] = uVar21;
                        puVar24[0x5c] = uVar21;
                        puVar24 = puVar24 + 0x60;
                        uVar22 = uStack_158;
                      } while (uVar15 < uStack_158);
                    }
                    uVar15 = 0;
                    lVar14 = 0;
                    if (uVar22 + 1 <= uStack_178) {
                      do {
                        uVar15 = uVar15 + 1;
                        *(ushort *)((longlong)puStack_168 + lVar14 + -6 + uVar22 * 6) = uVar6;
                        *(ushort *)((longlong)puStack_168 + lVar14 + -4 + uVar22 * 6) = uVar16;
                        *(ushort *)((longlong)puStack_168 + lVar14 + -2 + uVar22 * 6) = uVar21;
                        lVar14 = lVar14 + 6;
                      } while (uVar15 < uStack_178 - uVar22);
                    }
                    goto LAB_14022d14b;
                  }
                }
                lVar14 = 1;
                uVar22 = 0;
                if (uStack_170 != 0) {
                  do {
                    uVar15 = uVar22;
                    puStack_168[uVar15 * 6 + -3] = *puVar24;
                    uVar22 = uVar15 + 1;
                    puStack_168[uVar15 * 6 + -2] = puVar24[1];
                    puStack_168[uVar15 * 6 + -1] = puVar24[2];
                    puStack_168[uVar15 * 6] = *puVar24;
                    puStack_168[uVar15 * 6 + 1] = puVar24[1];
                    puStack_168[uVar15 * 6 + 2] = puVar24[2];
                  } while (uVar22 < uStack_170);
                  lVar14 = uVar15 + 2 + uVar22;
                }
                if (lVar14 - 1U < uStack_180) {
                  lVar14 = lVar14 * 3;
                  puStack_168[lVar14 + -6] = *puVar24;
                  puStack_168[lVar14 + -5] = puVar24[1];
                  puStack_168[lVar14 + -4] = puVar24[2];
                }
              }
LAB_14022d14b:
              puStack_1f8 = (ulonglong *)CONCAT44(puStack_1f8._4_4_,iStack_68);
              (*pcStack_d8)(puStack_d0,pfVar17,uVar18,uStack_c0);
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
LAB_14022d33d:
      if ((uStack_48 ^ (ulonglong)auStack_218) == DAT_1436b4680) {
        return;
      }
      goto LAB_14022b710;
    }
  }
  uVar13 = param_7 & 0xf;
  if (uVar13 == 6) {
    uVar9 = 0;
    fVar29 = (float)*param_8;
    fVar28 = (float)param_8[1];
    fVar27 = (float)param_8[2];
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
LAB_14022b710:
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
LAB_14022b445:
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
                if (((ulonglong)pfVar17 & 3) != 0) goto LAB_14022b445;
                uVar15 = 0x20 - uVar15 >> 2;
              }
              if ((longlong)uVar18 < (longlong)(uVar15 + 8)) goto LAB_14022b445;
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
    if ((uStack_48 ^ (ulonglong)auStack_218) != DAT_1436b4680) goto LAB_14022b15a;
  }
  else {
    if (uVar13 == 3) {
      puStack_1f8 = &uStack_1b8;
      uStack_1b8 = *param_5;
      uStack_1b0 = param_5[1];
      uStack_1e8 = param_7;
      puStack_1e0 = param_8;
      uStack_1d8 = param_9;
      puStack_1c8 = param_11;
      iStack_1f0 = param_6;
      iStack_1d0 = param_10;
      FUN_14090d040(param_1,lStack_60,(longlong)iVar19,param_3);
      lVar14 = 1;
      uVar9 = 0;
      if (1 < iVar19) {
        lVar25 = ((longlong)param_10 + -1) * param_4;
        uVar18 = *param_5 * 3;
        do {
          if (0 < (longlong)uVar18) {
            if ((longlong)uVar18 < 8) {
LAB_14022b2e5:
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
                  if (((ulonglong)pfVar17 & 3) != 0) goto LAB_14022b2e5;
                  uVar15 = 0x20 - uVar15 >> 2;
                }
                if ((longlong)uVar18 < (longlong)(uVar15 + 8)) goto LAB_14022b2e5;
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
LAB_14022b15a:
      uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
  }
  return;
}

