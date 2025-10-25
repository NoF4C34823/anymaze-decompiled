
/* WARNING: Removing unreachable block (ram,0x000140844f82) */

ulonglong FUN_140843060(ulonglong param_1,longlong param_2,uint *param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                       int param_10,uint *param_11)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 in_ZMM8 [64];
  undefined1 auStack_248 [32];
  ulonglong *puStack_228;
  int iStack_220;
  uint uStack_218;
  uint *puStack_210;
  undefined8 uStack_208;
  int iStack_200;
  uint *puStack_1f8;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1a8 [16];
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  uint *puStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  longlong lStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  ulonglong uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint *puStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  uint uStack_f0;
  code *pcStack_e8;
  uint *puStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  uint *puStack_c0;
  longlong lStack_b8;
  ulonglong *puStack_b0;
  uint uStack_a8;
  uint *puStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  int iStack_70;
  longlong lStack_68;
  uint auStack_58 [4];
  ulonglong uStack_48;
  
  lVar13 = 0;
  iVar16 = param_10 >> 1;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_248;
  lStack_68 = param_2;
  if (iVar16 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_140845503;
  }
  else {
    uStack_80 = (ulonglong)iVar16;
    puVar15 = (uint *)(param_4 * uStack_80 + (longlong)param_3);
    uStack_1e8 = CONCAT44(uStack_1e8._4_4_,iVar16);
    iStack_70 = param_10;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,param_6);
    puStack_a0 = param_3;
    lStack_88 = param_4;
    uStack_78 = param_1;
    do {
      puStack_228 = &uStack_98;
      uStack_98 = *param_5;
      uStack_90 = param_5[1];
      iStack_220 = (int)uStack_1e0;
      uStack_218 = param_7;
      puStack_210 = param_8;
      uStack_208 = param_9;
      iStack_200 = iStack_70;
      puStack_1f8 = param_11;
      FUN_1407f1ba0(uStack_78,lStack_68,lVar13,puVar15);
      lVar13 = lVar13 + 1;
      puVar15 = (uint *)((longlong)puVar15 + lStack_88);
    } while (lVar13 < (longlong)uStack_80);
    param_1 = uStack_78;
    param_3 = puStack_a0;
    param_4 = lStack_88;
    param_10 = iStack_70;
    iVar16 = (int)uStack_1e8;
    param_6 = (int)uStack_1e0;
    if ((param_7 & 0x10) != 0) {
      lVar13 = (longlong)(int)uStack_1e0;
      uStack_1e0 = 0;
      uStack_128 = 0;
      pcStack_e8 = (code *)(&PTR_FUN_14308c960)[lVar13];
      uStack_1e8 = CONCAT44(uStack_1e8._4_4_,param_7) & 0xffffffff0000000f;
      lVar13 = (longlong)iStack_70;
      uStack_78 = uStack_78 - lStack_68 * uStack_80;
      puStack_120 = param_11;
      lStack_168 = lVar13 * 3;
      lStack_b8 = lVar13 + -1;
      puStack_170 = param_11 + lVar13 * 3;
      uStack_108 = lStack_168 - 3;
      lStack_138 = uStack_80 * 3;
      uStack_188 = lStack_138 + 2;
      uStack_a8 = param_7 & 0xf0;
      uStack_f8 = ((lStack_168 + -1) / 3) * 3;
      uStack_100 = uStack_f8 >> 1;
      lStack_d8 = -uStack_80;
      uStack_c8 = param_7 & 0x80;
      uStack_f0 = param_7 & 0x40;
      uStack_178 = uStack_188 / 6;
      uStack_180 = (longlong)uStack_188 / 3;
      puStack_e0 = param_11 + uStack_80 * 3;
      uStack_188 = uStack_188 / 3;
      uStack_158 = (ulonglong)puStack_e0 & 0x1f;
      lStack_130 = uStack_80 * -0xc;
      uStack_160 = (ulonglong)puStack_e0 & 3;
      uStack_190 = uStack_180 & 0xfffffffffffffff0;
      uStack_140 = (longlong)(iStack_70 * 3) - 3;
      uStack_198 = 0x20 - uStack_158 >> 2;
      uStack_148 = uStack_140 >> 1;
      iVar16 = (int)uStack_1e8;
      uVar9 = 0;
      lVar13 = 0;
      auStack_1a8 = in_ZMM6._0_16_;
      auStack_1c8 = in_ZMM8._0_16_;
      uStack_d0 = param_9;
      puStack_c0 = param_8;
      uStack_118 = param_7;
      puStack_b0 = param_5;
      uVar7 = uStack_80;
      do {
        auStack_58[0] = 0;
        auStack_58[1] = 0;
        auStack_58[2] = 0;
        puVar15 = (uint *)(lStack_88 * uVar9 + (longlong)puStack_a0);
        lVar17 = lStack_68 * uVar9 + uStack_78;
        if (uStack_a8 == 0xf0) {
          puStack_228 = (ulonglong *)CONCAT44(puStack_228._4_4_,iStack_70);
          param_1 = (*pcStack_e8)(lVar17,puVar15,*puStack_b0,uStack_d0);
        }
        else {
          puVar6 = auStack_58;
          if (iVar16 == 6) {
            puVar6 = puStack_c0;
          }
          uVar20 = *puStack_b0;
          if ((longlong)uVar20 < lStack_b8) {
            uVar18 = 0;
            lVar8 = -uVar7;
            lVar13 = 0;
            if (lStack_d8 < (longlong)(uVar7 + uVar20)) {
              lVar10 = uVar7 * 2;
              do {
                lVar22 = lVar8;
                if (lVar8 < 0) {
                  if (uStack_118 != 0xf0) {
                    if (iVar16 == 6) {
                      if (uStack_f0 == 0) goto LAB_140845452;
                    }
                    else {
                      if (iVar16 != 1) goto LAB_1408453c3;
LAB_1408455a9:
                      lVar22 = 0;
                      if (uStack_f0 != 0) {
                        lVar22 = lVar8;
                      }
                    }
                  }
LAB_140845434:
                  uVar11 = *(uint *)(lVar17 + lVar22 * 0xc);
                  uVar3 = *(uint *)(lVar17 + 4 + lVar22 * 0xc);
                  uVar1 = *(uint *)(lVar17 + 8 + lVar22 * 0xc);
                }
                else {
                  if ((lVar8 < (longlong)uVar20) || (uStack_118 == 0xf0)) goto LAB_140845434;
                  if (iVar16 != 6) {
                    if (iVar16 == 1) {
                      if (lVar8 < 0) goto LAB_1408455a9;
                      if (uStack_c8 == 0) {
                        lVar22 = uVar20 - 1;
                      }
                    }
                    else {
LAB_1408453c3:
                      if (iVar16 == 3) {
                        if ((longlong)uVar20 < 2) {
                          if (lVar8 < 0) {
                            if (uStack_f0 == 0) {
                              lVar22 = -lVar8;
                              if (uStack_c8 == 0) {
                                lVar22 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar8) && (uStack_c8 == 0)) &&
                                  (lVar22 = -lVar8, uStack_f0 == 0)) {
                            lVar22 = 0;
                          }
                        }
                        else {
                          if (lVar8 < 0) goto LAB_1408455bd;
                          if ((longlong)uVar20 <= lVar8) {
                            while (uStack_c8 == 0) {
                              for (lVar22 = (uVar20 - 1) * 2 - lVar22; lVar22 < 0; lVar22 = -lVar22)
                              {
LAB_1408455bd:
                                if (uStack_f0 != 0) goto LAB_140845434;
                              }
                              if (lVar22 < (longlong)uVar20) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_140845434;
                  }
                  if (uStack_c8 != 0) goto LAB_140845434;
LAB_140845452:
                  uVar11 = *puVar6;
                  uVar3 = puVar6[1];
                  uVar1 = puVar6[2];
                }
                uVar18 = uVar18 + 1;
                lVar8 = lVar8 + 1;
                *(uint *)(lVar13 + (longlong)puStack_120) = uVar11;
                *(uint *)(lVar13 + 4 + (longlong)puStack_120) = uVar3;
                *(uint *)(lVar13 + 8 + (longlong)puStack_120) = uVar1;
                lVar13 = lVar13 + 0xc;
                uVar7 = uStack_80;
                uStack_128 = uVar9;
                puStack_110 = puVar15;
              } while (uVar18 < uVar20 + lVar10);
            }
            puStack_228 = (ulonglong *)CONCAT44(puStack_228._4_4_,iStack_70);
            param_1 = (*pcStack_e8)(puStack_e0,puVar15,uVar20,uStack_d0);
          }
          else {
            if (uStack_f0 == 0) {
              if (0 < (longlong)uStack_108) {
                if (6 < (longlong)uStack_108) {
                  lStack_150 = lStack_68 * lVar13 + uStack_78;
                  lVar8 = lStack_168 * 4 + -0xc;
                  if ((lVar8 <= (longlong)puStack_e0 - lStack_150) ||
                     (lVar8 <= -((longlong)puStack_e0 - lStack_150))) {
                    if ((((longlong)uStack_108 < 8) ||
                        ((uVar18 = uStack_158, uStack_158 != 0 &&
                         (uVar18 = uStack_198, uStack_160 != 0)))) ||
                       ((longlong)uStack_108 < (longlong)(uVar18 + 8))) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = uStack_108 - (uStack_108 - uVar18 & 7);
                      uVar23 = 0;
                      if (uVar18 != 0) {
                        do {
                          puStack_e0[uVar23] = *(uint *)(lStack_150 + uVar23 * 4);
                          uVar23 = uVar23 + 1;
                        } while (uVar23 < uVar18);
                      }
                      do {
                        auVar34._16_16_ = *(undefined1 (*) [16])(lStack_150 + 0x10 + uVar18 * 4);
                        auVar34._0_16_ = *(undefined1 (*) [16])(lStack_150 + uVar18 * 4);
                        *(undefined1 (*) [32])(puStack_e0 + uVar18) = auVar34;
                        uVar18 = uVar18 + 8;
                      } while (uVar18 < uVar14);
                    }
                    for (; uVar14 < uStack_108; uVar14 = uVar14 + 1) {
                      puStack_e0[uVar14] = *(uint *)(lStack_150 + uVar14 * 4);
                    }
                    goto LAB_140843f2d;
                  }
                }
                lVar8 = 1;
                if (uStack_148 != 0) {
                  lVar8 = lStack_68 * lVar13 + uStack_78;
                  uVar18 = 0;
                  do {
                    uVar14 = uVar18;
                    puStack_e0[uVar14 * 2] = *(uint *)(lVar8 + uVar14 * 8);
                    puStack_e0[uVar14 * 2 + 1] = *(uint *)(lVar8 + 4 + uVar14 * 8);
                    uVar18 = uVar14 + 1;
                  } while (uVar18 < uStack_148);
                  lVar8 = uVar14 + 2 + uVar18;
                }
                uVar18 = lVar8 - 1;
                if (uVar18 < uStack_140) {
                  puStack_e0[uVar18] = *(uint *)(lVar13 * lStack_68 + uStack_78 + uVar18 * 4);
                }
              }
LAB_140843f2d:
              if (iVar16 == 1) {
                if (0 < lStack_138) {
                  if ((longlong)uStack_180 < 7) {
                    uVar11 = puStack_e0[2];
LAB_140844459:
                    uVar14 = 0;
                  }
                  else {
                    if ((0xb < (longlong)puStack_120 - (longlong)puStack_e0) ||
                       ((longlong)(uStack_180 * 0xc) <=
                        -((longlong)puStack_120 - (longlong)puStack_e0))) {
                      uVar11 = *puStack_e0;
                      uVar3 = puStack_e0[1];
                      uVar1 = puStack_e0[2];
                      if ((longlong)uStack_180 < 0x10) {
                        uVar18 = 0;
                      }
                      else {
                        uVar14 = 0;
                        auVar25 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
                        auVar37 = vshufps_avx(ZEXT416(uVar3),ZEXT416(uVar3),0);
                        auVar39 = vshufps_avx(ZEXT416(uVar1),ZEXT416(uVar1),0);
                        puVar5 = puStack_120;
                        do {
                          uVar14 = uVar14 + 0x10;
                          uVar38 = auVar25._0_4_;
                          *puVar5 = uVar38;
                          uVar24 = vextractps_avx(auVar25,1);
                          puVar5[3] = uVar24;
                          uVar24 = vextractps_avx(auVar25,2);
                          puVar5[6] = uVar24;
                          uVar24 = vextractps_avx(auVar25,3);
                          puVar5[9] = uVar24;
                          puVar5[0xc] = uVar38;
                          uVar24 = vextractps_avx(auVar25,1);
                          puVar5[0xf] = uVar24;
                          uVar24 = vextractps_avx(auVar25,2);
                          puVar5[0x12] = uVar24;
                          uVar24 = vextractps_avx(auVar25,3);
                          puVar5[0x15] = uVar24;
                          puVar5[0x18] = uVar38;
                          uVar24 = vextractps_avx(auVar25,1);
                          puVar5[0x1b] = uVar24;
                          uVar24 = vextractps_avx(auVar25,2);
                          puVar5[0x1e] = uVar24;
                          uVar24 = vextractps_avx(auVar25,3);
                          puVar5[0x21] = uVar24;
                          puVar5[0x24] = uVar38;
                          uVar24 = vextractps_avx(auVar25,1);
                          puVar5[0x27] = uVar24;
                          uVar24 = vextractps_avx(auVar25,2);
                          puVar5[0x2a] = uVar24;
                          uVar24 = vextractps_avx(auVar25,3);
                          puVar5[0x2d] = uVar24;
                          uVar38 = auVar37._0_4_;
                          puVar5[1] = uVar38;
                          uVar24 = vextractps_avx(auVar37,1);
                          puVar5[4] = uVar24;
                          uVar24 = vextractps_avx(auVar37,2);
                          puVar5[7] = uVar24;
                          uVar24 = vextractps_avx(auVar37,3);
                          puVar5[10] = uVar24;
                          puVar5[0xd] = uVar38;
                          uVar24 = vextractps_avx(auVar37,1);
                          puVar5[0x10] = uVar24;
                          uVar24 = vextractps_avx(auVar37,2);
                          puVar5[0x13] = uVar24;
                          uVar24 = vextractps_avx(auVar37,3);
                          puVar5[0x16] = uVar24;
                          puVar5[0x19] = uVar38;
                          uVar24 = vextractps_avx(auVar37,1);
                          puVar5[0x1c] = uVar24;
                          uVar24 = vextractps_avx(auVar37,2);
                          puVar5[0x1f] = uVar24;
                          uVar24 = vextractps_avx(auVar37,3);
                          puVar5[0x22] = uVar24;
                          puVar5[0x25] = uVar38;
                          uVar24 = vextractps_avx(auVar37,1);
                          puVar5[0x28] = uVar24;
                          uVar24 = vextractps_avx(auVar37,2);
                          puVar5[0x2b] = uVar24;
                          uVar24 = vextractps_avx(auVar37,3);
                          puVar5[0x2e] = uVar24;
                          uVar38 = auVar39._0_4_;
                          puVar5[2] = uVar38;
                          uVar24 = vextractps_avx(auVar39,1);
                          puVar5[5] = uVar24;
                          uVar24 = vextractps_avx(auVar39,2);
                          puVar5[8] = uVar24;
                          uVar24 = vextractps_avx(auVar39,3);
                          puVar5[0xb] = uVar24;
                          puVar5[0xe] = uVar38;
                          uVar24 = vextractps_avx(auVar39,1);
                          puVar5[0x11] = uVar24;
                          uVar24 = vextractps_avx(auVar39,2);
                          puVar5[0x14] = uVar24;
                          uVar24 = vextractps_avx(auVar39,3);
                          puVar5[0x17] = uVar24;
                          puVar5[0x1a] = uVar38;
                          uVar24 = vextractps_avx(auVar39,1);
                          puVar5[0x1d] = uVar24;
                          uVar24 = vextractps_avx(auVar39,2);
                          puVar5[0x20] = uVar24;
                          uVar24 = vextractps_avx(auVar39,3);
                          puVar5[0x23] = uVar24;
                          puVar5[0x26] = uVar38;
                          uVar24 = vextractps_avx(auVar39,1);
                          puVar5[0x29] = uVar24;
                          uVar24 = vextractps_avx(auVar39,2);
                          puVar5[0x2c] = uVar24;
                          uVar24 = vextractps_avx(auVar39,3);
                          puVar5[0x2f] = uVar24;
                          puVar5 = puVar5 + 0x30;
                          uVar18 = uStack_190;
                        } while (uVar14 < uStack_190);
                      }
                      if (uVar18 + 1 <= uStack_180) {
                        uVar14 = uStack_180 - uVar18;
                        if ((longlong)uVar14 < 2) {
                          uVar23 = 0;
                        }
                        else {
                          uVar21 = 0;
                          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar11);
                          uVar23 = uVar14 & 0xfffffffffffffffe;
                          uVar19 = uVar21;
                          do {
                            uVar19 = uVar19 + 2;
                            *(uint *)((longlong)puStack_120 + uVar21 + 8 + uVar18 * 0xc) = uVar1;
                            *(uint *)((longlong)puStack_120 + uVar21 + 0x14 + uVar18 * 0xc) = uVar1;
                            *(uint *)((longlong)puStack_120 + uVar21 + 4 + uVar18 * 0xc) = uVar3;
                            *(uint *)((longlong)puStack_120 + uVar21 + 0x10 + uVar18 * 0xc) = uVar3;
                            *(uint *)((longlong)puStack_120 + uVar21 + uVar18 * 0xc) = uVar11;
                            *(uint *)((longlong)puStack_120 + uVar21 + 0xc + uVar18 * 0xc) = uVar11;
                            uVar21 = uVar21 + 0x18;
                            uVar7 = uStack_80;
                            uStack_128 = uVar9;
                          } while (uVar19 < uVar23);
                        }
                        lVar13 = uVar23 * 0xc;
                        for (; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                          *(uint *)((longlong)puStack_120 + lVar13 + uVar18 * 0xc) = uVar11;
                          *(uint *)((longlong)puStack_120 + lVar13 + 4 + uVar18 * 0xc) = uVar3;
                          *(uint *)((longlong)puStack_120 + lVar13 + 8 + uVar18 * 0xc) = uVar1;
                          lVar13 = lVar13 + 0xc;
                        }
                      }
                      goto LAB_14084496b;
                    }
                    uVar11 = puStack_e0[2];
                    if ((longlong)uStack_180 < 0x10) goto LAB_140844459;
                    uVar18 = 0;
                    auVar25 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
                    puVar5 = puStack_120;
                    do {
                      uVar3 = *puStack_e0;
                      auVar37._4_4_ = uVar3;
                      auVar37._0_4_ = uVar3;
                      auVar37._8_4_ = uVar3;
                      auVar37._12_4_ = uVar3;
                      uVar18 = uVar18 + 0x10;
                      *puVar5 = uVar3;
                      uVar1 = vextractps_avx(auVar37,1);
                      puVar5[3] = uVar1;
                      uVar1 = vextractps_avx(auVar37,2);
                      puVar5[6] = uVar1;
                      uVar1 = vextractps_avx(auVar37,3);
                      puVar5[9] = uVar1;
                      puVar5[0xc] = uVar3;
                      uVar1 = vextractps_avx(auVar37,1);
                      puVar5[0xf] = uVar1;
                      uVar1 = vextractps_avx(auVar37,2);
                      puVar5[0x12] = uVar1;
                      uVar1 = vextractps_avx(auVar37,3);
                      puVar5[0x15] = uVar1;
                      puVar5[0x18] = uVar3;
                      uVar1 = vextractps_avx(auVar37,1);
                      puVar5[0x1b] = uVar1;
                      uVar1 = vextractps_avx(auVar37,2);
                      puVar5[0x1e] = uVar1;
                      uVar1 = vextractps_avx(auVar37,3);
                      puVar5[0x21] = uVar1;
                      puVar5[0x24] = uVar3;
                      uVar3 = vextractps_avx(auVar37,1);
                      puVar5[0x27] = uVar3;
                      uVar3 = vextractps_avx(auVar37,2);
                      puVar5[0x2a] = uVar3;
                      uVar3 = vextractps_avx(auVar37,3);
                      puVar5[0x2d] = uVar3;
                      uVar3 = puStack_e0[1];
                      auVar39._4_4_ = uVar3;
                      auVar39._0_4_ = uVar3;
                      auVar39._8_4_ = uVar3;
                      auVar39._12_4_ = uVar3;
                      uVar24 = auVar25._0_4_;
                      puVar5[2] = uVar24;
                      puVar5[0xe] = uVar24;
                      puVar5[1] = uVar3;
                      uVar1 = vextractps_avx(auVar39,1);
                      puVar5[4] = uVar1;
                      uVar1 = vextractps_avx(auVar39,2);
                      puVar5[7] = uVar1;
                      uVar1 = vextractps_avx(auVar39,3);
                      puVar5[10] = uVar1;
                      puVar5[0xd] = uVar3;
                      uVar1 = vextractps_avx(auVar39,1);
                      puVar5[0x10] = uVar1;
                      uVar1 = vextractps_avx(auVar39,2);
                      puVar5[0x13] = uVar1;
                      uVar1 = vextractps_avx(auVar39,3);
                      puVar5[0x16] = uVar1;
                      puVar5[0x19] = uVar3;
                      uVar1 = vextractps_avx(auVar39,1);
                      puVar5[0x1c] = uVar1;
                      uVar1 = vextractps_avx(auVar39,2);
                      puVar5[0x1f] = uVar1;
                      uVar1 = vextractps_avx(auVar39,3);
                      puVar5[0x22] = uVar1;
                      puVar5[0x25] = uVar3;
                      uVar3 = vextractps_avx(auVar39,1);
                      puVar5[0x28] = uVar3;
                      uVar3 = vextractps_avx(auVar39,2);
                      puVar5[0x2b] = uVar3;
                      uVar3 = vextractps_avx(auVar39,3);
                      puVar5[0x2e] = uVar3;
                      uVar3 = vextractps_avx(auVar25,1);
                      puVar5[5] = uVar3;
                      uVar3 = vextractps_avx(auVar25,2);
                      puVar5[8] = uVar3;
                      uVar3 = vextractps_avx(auVar25,3);
                      puVar5[0xb] = uVar3;
                      uVar3 = vextractps_avx(auVar25,1);
                      puVar5[0x11] = uVar3;
                      uVar3 = vextractps_avx(auVar25,2);
                      puVar5[0x14] = uVar3;
                      uVar3 = vextractps_avx(auVar25,3);
                      puVar5[0x17] = uVar3;
                      puVar5[0x1a] = uVar24;
                      uVar3 = vextractps_avx(auVar25,1);
                      puVar5[0x1d] = uVar3;
                      uVar3 = vextractps_avx(auVar25,2);
                      puVar5[0x20] = uVar3;
                      uVar3 = vextractps_avx(auVar25,3);
                      puVar5[0x23] = uVar3;
                      puVar5[0x26] = uVar24;
                      uVar3 = vextractps_avx(auVar25,1);
                      puVar5[0x29] = uVar3;
                      uVar3 = vextractps_avx(auVar25,2);
                      puVar5[0x2c] = uVar3;
                      uVar3 = vextractps_avx(auVar25,3);
                      puVar5[0x2f] = uVar3;
                      puVar5 = puVar5 + 0x30;
                      uVar14 = uStack_190;
                    } while (uVar18 < uStack_190);
                  }
                  lVar13 = uVar14 * 0xc;
                  for (; uVar14 < uStack_180; uVar14 = uVar14 + 1) {
                    *(uint *)(lVar13 + (longlong)puStack_120) = *puStack_e0;
                    *(uint *)(lVar13 + 4 + (longlong)puStack_120) = puStack_e0[1];
                    *(uint *)(lVar13 + 8 + (longlong)puStack_120) = uVar11;
                    lVar13 = lVar13 + 0xc;
                  }
                }
              }
              else if (iVar16 == 3) {
                if (0 < lStack_138) {
                  lVar13 = 1;
                  lVar10 = 0;
                  lVar8 = 0;
                  uVar18 = 0;
                  if (uStack_178 != 0) {
                    do {
                      uVar14 = uVar18;
                      uVar18 = uVar14 + 1;
                      *(undefined4 *)(lVar10 + (longlong)puStack_120) =
                           *(undefined4 *)(lVar8 + -0xc + (longlong)puStack_170);
                      *(undefined4 *)(lVar10 + 4 + (longlong)puStack_120) =
                           *(undefined4 *)(lVar8 + -8 + (longlong)puStack_170);
                      *(undefined4 *)(lVar10 + 8 + (longlong)puStack_120) =
                           *(undefined4 *)(lVar8 + -4 + (longlong)puStack_170);
                      *(undefined4 *)(lVar10 + 0xc + (longlong)puStack_120) =
                           *(undefined4 *)(lVar8 + -0x18 + (longlong)puStack_170);
                      *(undefined4 *)(lVar10 + 0x10 + (longlong)puStack_120) =
                           *(undefined4 *)(lVar8 + -0x14 + (longlong)puStack_170);
                      lVar13 = lVar8 + -0x10;
                      lVar8 = lVar8 + -0x18;
                      *(undefined4 *)(lVar10 + 0x14 + (longlong)puStack_120) =
                           *(undefined4 *)(lVar13 + (longlong)puStack_170);
                      lVar10 = lVar10 + 0x18;
                    } while (uVar18 < uStack_178);
                    lVar13 = uVar14 + 2 + uVar18;
                  }
                  if (lVar13 - 1U < uStack_188) {
                    lVar8 = lVar13 * 3;
                    lVar13 = -((lVar13 - 1U) * 8 + -4 + lVar13 * 4);
                    puStack_120[lVar8 + -3] = *(uint *)(lVar13 + -0xc + (longlong)puStack_170);
                    puStack_120[lVar8 + -2] = *(uint *)(lVar13 + -8 + (longlong)puStack_170);
                    puStack_120[lVar8 + -1] = *(uint *)(lVar13 + -4 + (longlong)puStack_170);
                  }
                }
              }
              else if ((iVar16 == 6) && (0 < lStack_138)) {
                if (6 < (longlong)uStack_180) {
                  lVar13 = (longlong)puVar6 + (4 - (longlong)puStack_120);
                  if ((((longlong)(uStack_180 * 0xc) <= lVar13) || (7 < -lVar13)) &&
                     ((3 < (longlong)puStack_120 - (longlong)puVar6 ||
                      ((longlong)(uStack_180 * 0xc) <= -((longlong)puStack_120 - (longlong)puVar6)))
                     )) {
                    uVar11 = *puVar6;
                    uVar3 = puVar6[1];
                    uVar1 = puVar6[2];
                    if ((longlong)uStack_180 < 0x10) {
                      uVar18 = 0;
                    }
                    else {
                      auVar25 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
                      uVar14 = 0;
                      auVar37 = vshufps_avx(ZEXT416(uVar3),ZEXT416(uVar3),0);
                      auVar39 = vshufps_avx(ZEXT416(uVar1),ZEXT416(uVar1),0);
                      auVar27._16_16_ = auVar25;
                      auVar27._0_16_ = auVar25;
                      auVar40._16_16_ = auVar37;
                      auVar40._0_16_ = auVar37;
                      auVar33 = vunpcklps_avx(auVar27,auVar40);
                      auVar34 = vunpckhps_avx(auVar27,auVar40);
                      puVar5 = puStack_120;
                      do {
                        uVar14 = uVar14 + 0x10;
                        puVar5[0x18] = auVar25._0_4_;
                        uVar24 = vextractps_avx(auVar25,1);
                        puVar5[0x1b] = uVar24;
                        uVar24 = vextractps_avx(auVar25,2);
                        puVar5[0x1e] = uVar24;
                        uVar24 = vextractps_avx(auVar25,3);
                        puVar5[0x21] = uVar24;
                        puVar5[0x24] = auVar25._0_4_;
                        uVar24 = vextractps_avx(auVar25,1);
                        puVar5[0x27] = uVar24;
                        uVar24 = vextractps_avx(auVar25,2);
                        puVar5[0x2a] = uVar24;
                        uVar24 = vextractps_avx(auVar25,3);
                        puVar5[0x2d] = uVar24;
                        puVar5[0x19] = auVar37._0_4_;
                        uVar24 = vextractps_avx(auVar37,1);
                        puVar5[0x1c] = uVar24;
                        uVar24 = vextractps_avx(auVar37,2);
                        puVar5[0x1f] = uVar24;
                        uVar24 = vextractps_avx(auVar37,3);
                        puVar5[0x22] = uVar24;
                        puVar5[0x25] = auVar37._0_4_;
                        uVar24 = vextractps_avx(auVar37,1);
                        puVar5[0x28] = uVar24;
                        uVar24 = vextractps_avx(auVar37,2);
                        puVar5[0x2b] = uVar24;
                        uVar24 = vextractps_avx(auVar37,3);
                        puVar5[0x2e] = uVar24;
                        uVar2 = vmovlpd_avx(auVar33._0_16_);
                        *(undefined8 *)puVar5 = uVar2;
                        uVar2 = vmovhpd_avx(auVar33._0_16_);
                        *(undefined8 *)(puVar5 + 3) = uVar2;
                        uVar2 = vmovlpd_avx(auVar34._0_16_);
                        *(undefined8 *)(puVar5 + 6) = uVar2;
                        uVar2 = vmovhpd_avx(auVar34._0_16_);
                        *(undefined8 *)(puVar5 + 9) = uVar2;
                        uVar2 = vmovlpd_avx(auVar33._16_16_);
                        *(undefined8 *)(puVar5 + 0xc) = uVar2;
                        uVar2 = vmovhpd_avx(auVar33._16_16_);
                        *(undefined8 *)(puVar5 + 0xf) = uVar2;
                        uVar2 = vmovlpd_avx(auVar34._16_16_);
                        *(undefined8 *)(puVar5 + 0x12) = uVar2;
                        uVar2 = vmovhpd_avx(auVar34._16_16_);
                        *(undefined8 *)(puVar5 + 0x15) = uVar2;
                        uVar38 = auVar39._0_4_;
                        puVar5[2] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar5[5] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar5[8] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar5[0xb] = uVar24;
                        puVar5[0xe] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar5[0x11] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar5[0x14] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar5[0x17] = uVar24;
                        puVar5[0x1a] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar5[0x1d] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar5[0x20] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar5[0x23] = uVar24;
                        puVar5[0x26] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar5[0x29] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar5[0x2c] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar5[0x2f] = uVar24;
                        puVar5 = puVar5 + 0x30;
                        uVar18 = uStack_190;
                      } while (uVar14 < uStack_190);
                    }
                    if (uVar18 + 1 <= uStack_180) {
                      uVar14 = uStack_180 - uVar18;
                      if ((longlong)uVar14 < 2) {
                        uVar23 = 0;
                      }
                      else {
                        uVar21 = 0;
                        uStack_1e8 = CONCAT44(uStack_1e8._4_4_,uVar11);
                        uVar23 = uVar14 & 0xfffffffffffffffe;
                        uVar19 = uVar21;
                        do {
                          uVar19 = uVar19 + 2;
                          *(uint *)((longlong)puStack_120 + uVar21 + 8 + uVar18 * 0xc) = uVar1;
                          *(uint *)((longlong)puStack_120 + uVar21 + 0x14 + uVar18 * 0xc) = uVar1;
                          *(uint *)((longlong)puStack_120 + uVar21 + 4 + uVar18 * 0xc) = uVar3;
                          *(uint *)((longlong)puStack_120 + uVar21 + 0x10 + uVar18 * 0xc) = uVar3;
                          *(uint *)((longlong)puStack_120 + uVar21 + uVar18 * 0xc) = uVar11;
                          *(uint *)((longlong)puStack_120 + uVar21 + 0xc + uVar18 * 0xc) = uVar11;
                          uVar21 = uVar21 + 0x18;
                          uVar7 = uStack_80;
                          uStack_128 = uVar9;
                        } while (uVar19 < uVar23);
                      }
                      lVar13 = uVar23 * 0xc;
                      for (; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                        *(uint *)((longlong)puStack_120 + lVar13 + uVar18 * 0xc) = uVar11;
                        *(uint *)((longlong)puStack_120 + lVar13 + 4 + uVar18 * 0xc) = uVar3;
                        *(uint *)((longlong)puStack_120 + lVar13 + 8 + uVar18 * 0xc) = uVar1;
                        lVar13 = lVar13 + 0xc;
                      }
                    }
                    goto LAB_14084496b;
                  }
                }
                lVar13 = 1;
                lVar8 = 0;
                uVar18 = 0;
                if (uStack_178 != 0) {
                  do {
                    uVar14 = uVar18;
                    uVar18 = uVar14 + 1;
                    *(uint *)(lVar8 + (longlong)puStack_120) = *puVar6;
                    *(uint *)(lVar8 + 4 + (longlong)puStack_120) = puVar6[1];
                    *(uint *)(lVar8 + 8 + (longlong)puStack_120) = puVar6[2];
                    *(uint *)(lVar8 + 0xc + (longlong)puStack_120) = *puVar6;
                    *(uint *)(lVar8 + 0x10 + (longlong)puStack_120) = puVar6[1];
                    *(uint *)(lVar8 + 0x14 + (longlong)puStack_120) = puVar6[2];
                    lVar8 = lVar8 + 0x18;
                  } while (uVar18 < uStack_178);
                  lVar13 = uVar14 + 2 + uVar18;
                }
                if (lVar13 - 1U < uStack_188) {
                  lVar13 = lVar13 * 3;
                  puStack_120[lVar13 + -3] = *puVar6;
                  puStack_120[lVar13 + -2] = puVar6[1];
                  puStack_120[lVar13 + -1] = puVar6[2];
                }
              }
LAB_14084496b:
              puStack_228 = (ulonglong *)CONCAT44(puStack_228._4_4_,iStack_70);
              (*pcStack_e8)(puStack_e0,puVar15,uVar7);
              uVar20 = uVar20 - uVar7;
              lVar17 = lVar17 + lStack_138 * 4;
              puVar15 = puVar15 + lStack_138;
            }
            if (uStack_c8 == 0) {
              if ((longlong)uVar7 < (longlong)uVar20) {
                lVar13 = uVar20 - uVar7;
                puStack_228 = (ulonglong *)CONCAT44(puStack_228._4_4_,iStack_70);
                (*pcStack_e8)(lVar17,puVar15,lVar13);
                lVar17 = lVar17 + lVar13 * 0xc;
                puVar15 = puVar15 + lVar13 * 3;
              }
              if (0 < (longlong)uStack_108) {
                lVar13 = 1;
                if (uStack_100 != 0) {
                  uVar20 = 0;
                  do {
                    uVar18 = uVar20;
                    puStack_120[uVar18 * 2] = *(uint *)(lStack_130 + lVar17 + uVar18 * 8);
                    puStack_120[uVar18 * 2 + 1] = *(uint *)(lStack_130 + lVar17 + 4 + uVar18 * 8);
                    uVar20 = uVar18 + 1;
                  } while (uVar20 < uStack_100);
                  lVar13 = uVar18 + 2 + uVar20;
                }
                uVar20 = lVar13 - 1;
                if (uVar20 < uStack_f8) {
                  puStack_120[uVar20] = *(uint *)(lVar17 + lStack_130 + uVar20 * 4);
                }
              }
              if (iVar16 == 1) {
                if (0 < lStack_138) {
                  if ((longlong)uStack_180 < 7) {
                    lVar13 = 1;
                    lVar17 = 0;
                    uVar20 = 0;
                    if (uStack_178 != 0) {
                      do {
                        uVar18 = uVar20;
                        uVar20 = uVar18 + 1;
                        *(uint *)(lVar17 + -0xc + (longlong)puStack_170) = puStack_170[-6];
                        *(uint *)(lVar17 + -8 + (longlong)puStack_170) = puStack_170[-5];
                        *(uint *)(lVar17 + -4 + (longlong)puStack_170) = puStack_170[-4];
                        *(uint *)(lVar17 + (longlong)puStack_170) = puStack_170[-6];
                        *(uint *)(lVar17 + 4 + (longlong)puStack_170) = puStack_170[-5];
                        *(uint *)(lVar17 + 8 + (longlong)puStack_170) = puStack_170[-4];
                        lVar17 = lVar17 + 0x18;
                      } while (uVar20 < uStack_178);
                      lVar13 = uVar18 + 2 + uVar20;
                    }
                    if (lVar13 - 1U < uStack_188) {
                      lVar13 = lVar13 * 3;
                      puStack_170[lVar13 + -6] = puStack_170[-6];
                      puStack_170[lVar13 + -5] = puStack_170[-5];
                      puStack_170[lVar13 + -4] = puStack_170[-4];
                    }
                  }
                  else {
                    uVar11 = puStack_170[-6];
                    uVar3 = puStack_170[-5];
                    uVar1 = puStack_170[-4];
                    if ((longlong)uStack_180 < 0x10) {
                      uVar20 = 0;
                    }
                    else {
                      auVar25 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
                      uVar18 = 0;
                      auVar37 = vshufps_avx(ZEXT416(uVar3),ZEXT416(uVar3),0);
                      auVar39 = vshufps_avx(ZEXT416(uVar1),ZEXT416(uVar1),0);
                      auVar29._16_16_ = auVar25;
                      auVar29._0_16_ = auVar25;
                      auVar42._16_16_ = auVar37;
                      auVar42._0_16_ = auVar37;
                      auVar33 = vunpcklps_avx(auVar29,auVar42);
                      auVar34 = vunpckhps_avx(auVar29,auVar42);
                      puVar6 = puStack_170;
                      do {
                        uVar18 = uVar18 + 0x10;
                        puVar6[0x15] = auVar25._0_4_;
                        uVar24 = vextractps_avx(auVar25,1);
                        puVar6[0x18] = uVar24;
                        uVar24 = vextractps_avx(auVar25,2);
                        puVar6[0x1b] = uVar24;
                        uVar24 = vextractps_avx(auVar25,3);
                        puVar6[0x1e] = uVar24;
                        puVar6[0x21] = auVar25._0_4_;
                        uVar24 = vextractps_avx(auVar25,1);
                        puVar6[0x24] = uVar24;
                        uVar24 = vextractps_avx(auVar25,2);
                        puVar6[0x27] = uVar24;
                        uVar24 = vextractps_avx(auVar25,3);
                        puVar6[0x2a] = uVar24;
                        puVar6[0x16] = auVar37._0_4_;
                        uVar24 = vextractps_avx(auVar37,1);
                        puVar6[0x19] = uVar24;
                        uVar24 = vextractps_avx(auVar37,2);
                        puVar6[0x1c] = uVar24;
                        uVar24 = vextractps_avx(auVar37,3);
                        puVar6[0x1f] = uVar24;
                        puVar6[0x22] = auVar37._0_4_;
                        uVar24 = vextractps_avx(auVar37,1);
                        puVar6[0x25] = uVar24;
                        uVar24 = vextractps_avx(auVar37,2);
                        puVar6[0x28] = uVar24;
                        uVar24 = vextractps_avx(auVar37,3);
                        puVar6[0x2b] = uVar24;
                        uVar2 = vmovlpd_avx(auVar33._0_16_);
                        *(undefined8 *)(puVar6 + -3) = uVar2;
                        uVar2 = vmovhpd_avx(auVar33._0_16_);
                        *(undefined8 *)puVar6 = uVar2;
                        uVar2 = vmovlpd_avx(auVar34._0_16_);
                        *(undefined8 *)(puVar6 + 3) = uVar2;
                        uVar2 = vmovhpd_avx(auVar34._0_16_);
                        *(undefined8 *)(puVar6 + 6) = uVar2;
                        uVar2 = vmovlpd_avx(auVar33._16_16_);
                        *(undefined8 *)(puVar6 + 9) = uVar2;
                        uVar2 = vmovhpd_avx(auVar33._16_16_);
                        *(undefined8 *)(puVar6 + 0xc) = uVar2;
                        uVar2 = vmovlpd_avx(auVar34._16_16_);
                        *(undefined8 *)(puVar6 + 0xf) = uVar2;
                        uVar2 = vmovhpd_avx(auVar34._16_16_);
                        *(undefined8 *)(puVar6 + 0x12) = uVar2;
                        uVar38 = auVar39._0_4_;
                        puVar6[-1] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[2] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[5] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[8] = uVar24;
                        puVar6[0xb] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[0xe] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[0x11] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[0x14] = uVar24;
                        puVar6[0x17] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[0x1a] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[0x1d] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[0x20] = uVar24;
                        puVar6[0x23] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[0x26] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[0x29] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[0x2c] = uVar24;
                        puVar6 = puVar6 + 0x30;
                        uVar20 = uStack_190;
                      } while (uVar18 < uStack_190);
                    }
                    if (uVar20 + 1 <= uStack_180) {
                      uVar18 = uStack_180 - uVar20;
                      if ((longlong)uVar18 < 2) {
                        uVar14 = 0;
                      }
                      else {
                        uVar23 = 0;
                        uVar14 = uVar18 & 0xfffffffffffffffe;
                        lVar13 = 0;
                        do {
                          uVar23 = uVar23 + 2;
                          *(uint *)((longlong)puStack_170 + lVar13 + -4 + uVar20 * 0xc) = uVar1;
                          *(uint *)((longlong)puStack_170 + lVar13 + 8 + uVar20 * 0xc) = uVar1;
                          *(uint *)((longlong)puStack_170 + lVar13 + -8 + uVar20 * 0xc) = uVar3;
                          *(uint *)((longlong)puStack_170 + lVar13 + 4 + uVar20 * 0xc) = uVar3;
                          *(uint *)((longlong)puStack_170 + lVar13 + -0xc + uVar20 * 0xc) = uVar11;
                          *(uint *)((longlong)puStack_170 + lVar13 + uVar20 * 0xc) = uVar11;
                          lVar13 = lVar13 + 0x18;
                        } while (uVar23 < uVar14);
                      }
                      lVar13 = uVar14 * 0xc;
                      for (; uVar14 < uVar18; uVar14 = uVar14 + 1) {
                        *(uint *)((longlong)puStack_170 + lVar13 + -0xc + uVar20 * 0xc) = uVar11;
                        *(uint *)((longlong)puStack_170 + lVar13 + -8 + uVar20 * 0xc) = uVar3;
                        *(uint *)((longlong)puStack_170 + lVar13 + -4 + uVar20 * 0xc) = uVar1;
                        lVar13 = lVar13 + 0xc;
                      }
                    }
                  }
                }
              }
              else if (iVar16 == 3) {
                if (0 < lStack_138) {
                  lVar13 = 1;
                  lVar17 = 0;
                  lVar8 = 0;
                  uVar20 = 0;
                  if (uStack_178 != 0) {
                    do {
                      uVar18 = uVar20;
                      uVar20 = uVar18 + 1;
                      *(undefined4 *)(lVar17 + -0xc + (longlong)puStack_170) =
                           *(undefined4 *)(lVar8 + -0x24 + (longlong)puStack_170);
                      *(undefined4 *)(lVar17 + -8 + (longlong)puStack_170) =
                           *(undefined4 *)(lVar8 + -0x20 + (longlong)puStack_170);
                      *(undefined4 *)(lVar17 + -4 + (longlong)puStack_170) =
                           *(undefined4 *)(lVar8 + -0x1c + (longlong)puStack_170);
                      *(undefined4 *)(lVar17 + (longlong)puStack_170) =
                           *(undefined4 *)(lVar8 + -0x30 + (longlong)puStack_170);
                      *(undefined4 *)(lVar17 + 4 + (longlong)puStack_170) =
                           *(undefined4 *)(lVar8 + -0x2c + (longlong)puStack_170);
                      lVar13 = lVar8 + -0x28;
                      lVar8 = lVar8 + -0x18;
                      *(undefined4 *)(lVar17 + 8 + (longlong)puStack_170) =
                           *(undefined4 *)(lVar13 + (longlong)puStack_170);
                      lVar17 = lVar17 + 0x18;
                    } while (uVar20 < uStack_178);
                    lVar13 = uVar18 + 2 + uVar20;
                  }
                  if (lVar13 - 1U < uStack_188) {
                    lVar17 = lVar13 * 3;
                    lVar13 = -((lVar13 - 1U) * 8 + -4 + lVar13 * 4);
                    puStack_170[lVar17 + -6] = *(uint *)(lVar13 + -0x24 + (longlong)puStack_170);
                    puStack_170[lVar17 + -5] = *(uint *)(lVar13 + -0x20 + (longlong)puStack_170);
                    puStack_170[lVar17 + -4] = *(uint *)(lVar13 + -0x1c + (longlong)puStack_170);
                  }
                }
              }
              else if ((iVar16 == 6) && (0 < lStack_138)) {
                if (6 < (longlong)uStack_180) {
                  lVar13 = (longlong)puVar6 + (4 - (longlong)(puStack_170 + -3));
                  if ((((longlong)(uStack_180 * 0xc) <= lVar13) || (7 < -lVar13)) &&
                     ((lVar13 = (longlong)(puStack_170 + -3) - (longlong)puVar6, 3 < lVar13 ||
                      ((longlong)(uStack_180 * 0xc) <= -lVar13)))) {
                    uVar11 = *puVar6;
                    uVar3 = puVar6[1];
                    uVar1 = puVar6[2];
                    if ((longlong)uStack_180 < 0x10) {
                      uVar20 = 0;
                    }
                    else {
                      auVar25 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
                      uVar18 = 0;
                      auVar37 = vshufps_avx(ZEXT416(uVar3),ZEXT416(uVar3),0);
                      auVar39 = vshufps_avx(ZEXT416(uVar1),ZEXT416(uVar1),0);
                      auVar28._16_16_ = auVar25;
                      auVar28._0_16_ = auVar25;
                      auVar41._16_16_ = auVar37;
                      auVar41._0_16_ = auVar37;
                      auVar33 = vunpcklps_avx(auVar28,auVar41);
                      auVar34 = vunpckhps_avx(auVar28,auVar41);
                      puVar6 = puStack_170;
                      do {
                        uVar18 = uVar18 + 0x10;
                        puVar6[0x15] = auVar25._0_4_;
                        uVar24 = vextractps_avx(auVar25,1);
                        puVar6[0x18] = uVar24;
                        uVar24 = vextractps_avx(auVar25,2);
                        puVar6[0x1b] = uVar24;
                        uVar24 = vextractps_avx(auVar25,3);
                        puVar6[0x1e] = uVar24;
                        puVar6[0x21] = auVar25._0_4_;
                        uVar24 = vextractps_avx(auVar25,1);
                        puVar6[0x24] = uVar24;
                        uVar24 = vextractps_avx(auVar25,2);
                        puVar6[0x27] = uVar24;
                        uVar24 = vextractps_avx(auVar25,3);
                        puVar6[0x2a] = uVar24;
                        puVar6[0x16] = auVar37._0_4_;
                        uVar24 = vextractps_avx(auVar37,1);
                        puVar6[0x19] = uVar24;
                        uVar24 = vextractps_avx(auVar37,2);
                        puVar6[0x1c] = uVar24;
                        uVar24 = vextractps_avx(auVar37,3);
                        puVar6[0x1f] = uVar24;
                        puVar6[0x22] = auVar37._0_4_;
                        uVar24 = vextractps_avx(auVar37,1);
                        puVar6[0x25] = uVar24;
                        uVar24 = vextractps_avx(auVar37,2);
                        puVar6[0x28] = uVar24;
                        uVar24 = vextractps_avx(auVar37,3);
                        puVar6[0x2b] = uVar24;
                        uVar2 = vmovlpd_avx(auVar33._0_16_);
                        *(undefined8 *)(puVar6 + -3) = uVar2;
                        uVar2 = vmovhpd_avx(auVar33._0_16_);
                        *(undefined8 *)puVar6 = uVar2;
                        uVar2 = vmovlpd_avx(auVar34._0_16_);
                        *(undefined8 *)(puVar6 + 3) = uVar2;
                        uVar2 = vmovhpd_avx(auVar34._0_16_);
                        *(undefined8 *)(puVar6 + 6) = uVar2;
                        uVar2 = vmovlpd_avx(auVar33._16_16_);
                        *(undefined8 *)(puVar6 + 9) = uVar2;
                        uVar2 = vmovhpd_avx(auVar33._16_16_);
                        *(undefined8 *)(puVar6 + 0xc) = uVar2;
                        uVar2 = vmovlpd_avx(auVar34._16_16_);
                        *(undefined8 *)(puVar6 + 0xf) = uVar2;
                        uVar2 = vmovhpd_avx(auVar34._16_16_);
                        *(undefined8 *)(puVar6 + 0x12) = uVar2;
                        uVar38 = auVar39._0_4_;
                        puVar6[-1] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[2] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[5] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[8] = uVar24;
                        puVar6[0xb] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[0xe] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[0x11] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[0x14] = uVar24;
                        puVar6[0x17] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[0x1a] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[0x1d] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[0x20] = uVar24;
                        puVar6[0x23] = uVar38;
                        uVar24 = vextractps_avx(auVar39,1);
                        puVar6[0x26] = uVar24;
                        uVar24 = vextractps_avx(auVar39,2);
                        puVar6[0x29] = uVar24;
                        uVar24 = vextractps_avx(auVar39,3);
                        puVar6[0x2c] = uVar24;
                        puVar6 = puVar6 + 0x30;
                        uVar20 = uStack_190;
                      } while (uVar18 < uStack_190);
                    }
                    if (uVar20 + 1 <= uStack_180) {
                      uVar18 = uStack_180 - uVar20;
                      if ((longlong)uVar18 < 2) {
                        uVar14 = 0;
                      }
                      else {
                        uVar23 = 0;
                        uVar14 = uVar18 & 0xfffffffffffffffe;
                        lVar13 = 0;
                        do {
                          uVar23 = uVar23 + 2;
                          *(uint *)((longlong)puStack_170 + lVar13 + -4 + uVar20 * 0xc) = uVar1;
                          *(uint *)((longlong)puStack_170 + lVar13 + 8 + uVar20 * 0xc) = uVar1;
                          *(uint *)((longlong)puStack_170 + lVar13 + -8 + uVar20 * 0xc) = uVar3;
                          *(uint *)((longlong)puStack_170 + lVar13 + 4 + uVar20 * 0xc) = uVar3;
                          *(uint *)((longlong)puStack_170 + lVar13 + -0xc + uVar20 * 0xc) = uVar11;
                          *(uint *)((longlong)puStack_170 + lVar13 + uVar20 * 0xc) = uVar11;
                          lVar13 = lVar13 + 0x18;
                        } while (uVar23 < uVar14);
                      }
                      lVar13 = uVar14 * 0xc;
                      for (; uVar14 < uVar18; uVar14 = uVar14 + 1) {
                        *(uint *)((longlong)puStack_170 + lVar13 + -0xc + uVar20 * 0xc) = uVar11;
                        *(uint *)((longlong)puStack_170 + lVar13 + -8 + uVar20 * 0xc) = uVar3;
                        *(uint *)((longlong)puStack_170 + lVar13 + -4 + uVar20 * 0xc) = uVar1;
                        lVar13 = lVar13 + 0xc;
                      }
                    }
                    goto LAB_1408452fc;
                  }
                }
                lVar13 = 1;
                lVar17 = 0;
                uVar20 = 0;
                if (uStack_178 != 0) {
                  do {
                    uVar18 = uVar20;
                    uVar20 = uVar18 + 1;
                    *(uint *)(lVar17 + -0xc + (longlong)puStack_170) = *puVar6;
                    *(uint *)(lVar17 + -8 + (longlong)puStack_170) = puVar6[1];
                    *(uint *)(lVar17 + -4 + (longlong)puStack_170) = puVar6[2];
                    *(uint *)(lVar17 + (longlong)puStack_170) = *puVar6;
                    *(uint *)(lVar17 + 4 + (longlong)puStack_170) = puVar6[1];
                    *(uint *)(lVar17 + 8 + (longlong)puStack_170) = puVar6[2];
                    lVar17 = lVar17 + 0x18;
                  } while (uVar20 < uStack_178);
                  lVar13 = uVar18 + 2 + uVar20;
                }
                if (lVar13 - 1U < uStack_188) {
                  lVar13 = lVar13 * 3;
                  puStack_170[lVar13 + -6] = *puVar6;
                  puStack_170[lVar13 + -5] = puVar6[1];
                  puStack_170[lVar13 + -4] = puVar6[2];
                }
              }
LAB_1408452fc:
              puStack_228 = (ulonglong *)CONCAT44(puStack_228._4_4_,iStack_70);
              param_1 = (*pcStack_e8)(puStack_e0,puVar15,uVar7,uStack_d0);
            }
            else {
              puStack_228 = (ulonglong *)CONCAT44(puStack_228._4_4_,iStack_70);
              param_1 = (*pcStack_e8)(lVar17,puVar15,uVar20,uStack_d0);
            }
          }
        }
        iVar12 = (int)uVar9;
        uVar9 = uVar9 + 1;
        lVar13 = (longlong)iVar12 + 1;
      } while (uVar9 < uVar7);
LAB_140845503:
      if ((uStack_48 ^ (ulonglong)auStack_248) == DAT_1436b4680) {
        return param_1;
      }
      goto LAB_140843a40;
    }
  }
  uVar11 = param_7 & 0xf;
  if (uVar11 == 6) {
    uVar9 = (ulonglong)iVar16;
    if (0 < (longlong)uVar9) {
      uStack_1e8 = *param_5 * 3;
      uVar7 = uStack_1e8 + 2;
      param_1 = uVar7 * 0x5555555555555556;
      uVar20 = (longlong)uVar7 / 3;
      if (((param_4 < (longlong)uVar20) ||
          ((puVar15 = (uint *)((uVar9 - 1) * param_4 + (uVar20 * 3 + -3) * 4 + 0xb +
                              (longlong)param_3), param_8 < puVar15 &&
           (param_3 < (uint *)((longlong)param_8 + 3U))))) ||
         ((param_3 < (uint *)((longlong)param_8 + 0xbU) && (param_8 + 1 < puVar15)))) {
        uVar20 = 0;
        lVar13 = 0;
        param_1 = 0;
        do {
          if (0 < (longlong)uStack_1e8) {
            lVar17 = 1;
            uVar18 = param_1;
            uVar14 = param_1;
            if (uVar7 / 6 != 0) {
              do {
                uVar23 = uVar14;
                uVar14 = uVar23 + 1;
                *(uint *)((longlong)param_3 + uVar18 + lVar13) = *param_8;
                *(uint *)((longlong)param_3 + uVar18 + 4 + lVar13) = param_8[1];
                *(uint *)((longlong)param_3 + uVar18 + 8 + lVar13) = param_8[2];
                *(uint *)((longlong)param_3 + uVar18 + 0xc + lVar13) = *param_8;
                *(uint *)((longlong)param_3 + uVar18 + 0x10 + lVar13) = param_8[1];
                *(uint *)((longlong)param_3 + uVar18 + 0x14 + lVar13) = param_8[2];
                uVar18 = uVar18 + 0x18;
              } while (uVar14 < uVar7 / 6);
              lVar17 = uVar23 + 2 + uVar14;
            }
            if (lVar17 - 1U < uVar7 / 3) {
              lVar17 = lVar17 * 3 + -3;
              *(uint *)((longlong)param_3 + lVar13 + lVar17 * 4) = *param_8;
              *(uint *)((longlong)param_3 + lVar13 + lVar17 * 4 + 4) = param_8[1];
              *(uint *)((longlong)param_3 + lVar13 + lVar17 * 4 + 8) = param_8[2];
            }
          }
          uVar20 = uVar20 + 1;
          lVar13 = lVar13 + param_4;
        } while (uVar20 < uVar9);
      }
      else {
        uVar18 = 0;
        puStack_c0 = param_8;
        uVar7 = 0;
        do {
          if (0 < (longlong)uStack_1e8) {
            puVar15 = param_3;
            uVar14 = uVar7;
            uVar23 = uVar7;
            if (0xf < (longlong)uVar20) {
              do {
                uVar11 = *param_8;
                auVar25._4_4_ = uVar11;
                auVar25._0_4_ = uVar11;
                auVar25._8_4_ = uVar11;
                auVar25._12_4_ = uVar11;
                uVar14 = uVar14 + 0x10;
                *puVar15 = uVar11;
                uVar3 = vextractps_avx(auVar25,1);
                puVar15[3] = uVar3;
                uVar3 = vextractps_avx(auVar25,2);
                puVar15[6] = uVar3;
                uVar3 = vextractps_avx(auVar25,3);
                puVar15[9] = uVar3;
                puVar15[0xc] = uVar11;
                uVar3 = vextractps_avx(auVar25,1);
                puVar15[0xf] = uVar3;
                uVar3 = vextractps_avx(auVar25,2);
                puVar15[0x12] = uVar3;
                uVar3 = vextractps_avx(auVar25,3);
                puVar15[0x15] = uVar3;
                puVar15[0x18] = uVar11;
                uVar3 = vextractps_avx(auVar25,1);
                puVar15[0x1b] = uVar3;
                uVar3 = vextractps_avx(auVar25,2);
                puVar15[0x1e] = uVar3;
                uVar3 = vextractps_avx(auVar25,3);
                puVar15[0x21] = uVar3;
                puVar15[0x24] = uVar11;
                uVar11 = vextractps_avx(auVar25,1);
                puVar15[0x27] = uVar11;
                uVar11 = vextractps_avx(auVar25,2);
                puVar15[0x2a] = uVar11;
                uVar11 = vextractps_avx(auVar25,3);
                puVar15[0x2d] = uVar11;
                uVar11 = param_8[1];
                auVar30._4_4_ = uVar11;
                auVar30._0_4_ = uVar11;
                auVar30._8_4_ = uVar11;
                auVar30._12_4_ = uVar11;
                puVar15[1] = uVar11;
                uVar3 = vextractps_avx(auVar30,1);
                puVar15[4] = uVar3;
                uVar3 = vextractps_avx(auVar30,2);
                puVar15[7] = uVar3;
                uVar3 = vextractps_avx(auVar30,3);
                puVar15[10] = uVar3;
                puVar15[0xd] = uVar11;
                uVar3 = vextractps_avx(auVar30,1);
                puVar15[0x10] = uVar3;
                uVar3 = vextractps_avx(auVar30,2);
                puVar15[0x13] = uVar3;
                uVar3 = vextractps_avx(auVar30,3);
                puVar15[0x16] = uVar3;
                puVar15[0x19] = uVar11;
                uVar3 = vextractps_avx(auVar30,1);
                puVar15[0x1c] = uVar3;
                uVar3 = vextractps_avx(auVar30,2);
                puVar15[0x1f] = uVar3;
                uVar3 = vextractps_avx(auVar30,3);
                puVar15[0x22] = uVar3;
                puVar15[0x25] = uVar11;
                uVar11 = vextractps_avx(auVar30,1);
                puVar15[0x28] = uVar11;
                uVar11 = vextractps_avx(auVar30,2);
                puVar15[0x2b] = uVar11;
                uVar11 = vextractps_avx(auVar30,3);
                puVar15[0x2e] = uVar11;
                uVar11 = param_8[2];
                auVar35._4_4_ = uVar11;
                auVar35._0_4_ = uVar11;
                auVar35._8_4_ = uVar11;
                auVar35._12_4_ = uVar11;
                puVar15[2] = uVar11;
                uVar3 = vextractps_avx(auVar35,1);
                puVar15[5] = uVar3;
                uVar3 = vextractps_avx(auVar35,2);
                puVar15[8] = uVar3;
                uVar3 = vextractps_avx(auVar35,3);
                puVar15[0xb] = uVar3;
                puVar15[0xe] = uVar11;
                uVar3 = vextractps_avx(auVar35,1);
                puVar15[0x11] = uVar3;
                uVar3 = vextractps_avx(auVar35,2);
                puVar15[0x14] = uVar3;
                uVar3 = vextractps_avx(auVar35,3);
                puVar15[0x17] = uVar3;
                puVar15[0x1a] = uVar11;
                uVar3 = vextractps_avx(auVar35,1);
                puVar15[0x1d] = uVar3;
                uVar3 = vextractps_avx(auVar35,2);
                puVar15[0x20] = uVar3;
                uVar3 = vextractps_avx(auVar35,3);
                puVar15[0x23] = uVar3;
                puVar15[0x26] = uVar11;
                uVar11 = vextractps_avx(auVar35,1);
                puVar15[0x29] = uVar11;
                uVar11 = vextractps_avx(auVar35,2);
                puVar15[0x2c] = uVar11;
                uVar11 = vextractps_avx(auVar35,3);
                puVar15[0x2f] = uVar11;
                puVar15 = puVar15 + 0x30;
                uVar23 = uVar20 & 0xfffffffffffffff0;
              } while (uVar14 < (uVar20 & 0xfffffffffffffff0));
            }
            param_1 = uVar23 + 1;
            if (param_1 <= uVar20) {
              uVar14 = uVar20 - uVar23;
              param_1 = uVar7;
              if (7 < (longlong)uVar14) {
                param_1 = uVar14 & 0xfffffffffffffff8;
                uVar19 = uVar7;
                uVar21 = uVar7;
                do {
                  uVar11 = *param_8;
                  auVar26._4_4_ = uVar11;
                  auVar26._0_4_ = uVar11;
                  auVar26._8_4_ = uVar11;
                  auVar26._12_4_ = uVar11;
                  uVar21 = uVar21 + 8;
                  *(uint *)((longlong)param_3 + uVar19 + uVar23 * 0xc) = uVar11;
                  uVar4 = vextractps_avx(auVar26,1);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0xc + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar26,2);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x18 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar26,3);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x24 + uVar23 * 0xc) = uVar4;
                  *(uint *)((longlong)param_3 + uVar19 + 0x30 + uVar23 * 0xc) = uVar11;
                  uVar4 = vextractps_avx(auVar26,1);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x3c + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar26,2);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x48 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar26,3);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x54 + uVar23 * 0xc) = uVar4;
                  uVar11 = param_8[1];
                  auVar31._4_4_ = uVar11;
                  auVar31._0_4_ = uVar11;
                  auVar31._8_4_ = uVar11;
                  auVar31._12_4_ = uVar11;
                  *(uint *)((longlong)param_3 + uVar19 + 4 + uVar23 * 0xc) = uVar11;
                  uVar4 = vextractps_avx(auVar31,1);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x10 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar31,2);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x1c + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar31,3);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x28 + uVar23 * 0xc) = uVar4;
                  *(uint *)((longlong)param_3 + uVar19 + 0x34 + uVar23 * 0xc) = uVar11;
                  uVar4 = vextractps_avx(auVar31,1);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x40 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar31,2);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x4c + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar31,3);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x58 + uVar23 * 0xc) = uVar4;
                  uVar11 = param_8[2];
                  auVar36._4_4_ = uVar11;
                  auVar36._0_4_ = uVar11;
                  auVar36._8_4_ = uVar11;
                  auVar36._12_4_ = uVar11;
                  *(uint *)((longlong)param_3 + uVar19 + 8 + uVar23 * 0xc) = uVar11;
                  uVar4 = vextractps_avx(auVar36,1);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x14 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar36,2);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x20 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar36,3);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x2c + uVar23 * 0xc) = uVar4;
                  *(uint *)((longlong)param_3 + uVar19 + 0x38 + uVar23 * 0xc) = uVar11;
                  uVar4 = vextractps_avx(auVar36,1);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x44 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar36,2);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x50 + uVar23 * 0xc) = uVar4;
                  uVar4 = vextractps_avx(auVar36,3);
                  *(undefined4 *)((longlong)param_3 + uVar19 + 0x5c + uVar23 * 0xc) = uVar4;
                  uVar19 = uVar19 + 0x60;
                  lStack_88 = param_4;
                } while (uVar21 < param_1);
              }
              for (; param_1 < uVar14; param_1 = param_1 + 1) {
                param_3[uVar23 * 3 + param_1 * 3] = *param_8;
                param_3[uVar23 * 3 + param_1 * 3 + 1] = param_8[1];
                param_3[uVar23 * 3 + param_1 * 3 + 2] = param_8[2];
              }
            }
          }
          uVar18 = uVar18 + 1;
          param_3 = (uint *)((longlong)param_3 + param_4);
        } while (uVar18 < uVar9);
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_248) == DAT_1436b4680) {
      return param_1;
    }
LAB_140843a40:
    uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  if (uVar11 == 1) {
    uVar9 = 0;
    if (0 < iVar16) {
      lVar13 = param_4 * iVar16;
      uVar7 = 0;
      param_1 = *param_5 * 3;
      do {
        if (0 < (longlong)param_1) {
          uVar20 = uVar7;
          if (7 < (longlong)param_1) {
            puVar15 = (uint *)(param_4 * uVar9 + (longlong)param_3);
            uVar18 = (ulonglong)puVar15 & 0x1f;
            if (uVar18 != 0) {
              if (((ulonglong)puVar15 & 3) != 0) goto LAB_1408434bd;
              uVar18 = 0x20 - uVar18 >> 2;
            }
            if ((longlong)(uVar18 + 8) <= (longlong)param_1) {
              uVar20 = param_1 - (param_1 - uVar18 & 7);
              uVar14 = uVar7;
              if (uVar18 != 0) {
                do {
                  puVar15[uVar14] = *(uint *)((longlong)param_3 + uVar14 * 4 + lVar13);
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar18);
              }
              do {
                auVar33._16_16_ =
                     *(undefined1 (*) [16])((longlong)param_3 + uVar18 * 4 + lVar13 + 0x10);
                auVar33._0_16_ = *(undefined1 (*) [16])((longlong)param_3 + uVar18 * 4 + lVar13);
                *(undefined1 (*) [32])(puVar15 + uVar18) = auVar33;
                uVar18 = uVar18 + 8;
              } while (uVar18 < uVar20);
            }
          }
LAB_1408434bd:
          if (uVar20 < param_1) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar20 * 4 + param_4 * uVar9) =
                   *(undefined4 *)((longlong)param_3 + uVar20 * 4 + lVar13);
              uVar20 = uVar20 + 1;
            } while (uVar20 < param_1);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)iVar16);
    }
    if ((uStack_48 ^ (ulonglong)auStack_248) != DAT_1436b4680) goto LAB_14084323a;
  }
  else {
    if (uVar11 == 3) {
      puStack_228 = &uStack_1e8;
      uStack_1e8 = *param_5;
      uStack_1e0 = param_5[1];
      uStack_218 = param_7;
      puStack_210 = param_8;
      uStack_208 = param_9;
      puStack_1f8 = param_11;
      iStack_220 = param_6;
      iStack_200 = param_10;
      FUN_1407f1ba0(param_1,lStack_68,(longlong)iVar16,param_3);
      param_1 = 1;
      uVar9 = 0;
      if (1 < iVar16) {
        uVar20 = 0;
        lVar13 = ((longlong)param_10 + -1) * param_4;
        uVar7 = *param_5 * 3;
        do {
          if (0 < (longlong)uVar7) {
            uVar18 = uVar20;
            if (7 < (longlong)uVar7) {
              puVar15 = (uint *)((longlong)param_3 + param_4 * param_1);
              uVar14 = (ulonglong)puVar15 & 0x1f;
              if (uVar14 != 0) {
                if (((ulonglong)puVar15 & 3) != 0) goto LAB_14084337b;
                uVar14 = 0x20 - uVar14 >> 2;
              }
              if ((longlong)(uVar14 + 8) <= (longlong)uVar7) {
                lVar17 = lVar13 - param_4 * param_1;
                uVar18 = uVar7 - (uVar7 - uVar14 & 7);
                uVar23 = uVar20;
                if (uVar14 != 0) {
                  do {
                    puVar15[uVar23] = *(uint *)((longlong)param_3 + uVar23 * 4 + lVar17);
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < uVar14);
                }
                do {
                  auVar32._16_16_ =
                       *(undefined1 (*) [16])((longlong)param_3 + uVar14 * 4 + lVar17 + 0x10);
                  auVar32._0_16_ = *(undefined1 (*) [16])((longlong)param_3 + uVar14 * 4 + lVar17);
                  *(undefined1 (*) [32])(puVar15 + uVar14) = auVar32;
                  uVar14 = uVar14 + 8;
                } while (uVar14 < uVar18);
              }
            }
LAB_14084337b:
            if (uVar18 < uVar7) {
              do {
                *(undefined4 *)((longlong)param_3 + uVar18 * 4 + param_1 * param_4) =
                     *(undefined4 *)((longlong)param_3 + uVar18 * 4 + (lVar13 - param_1 * param_4));
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar7);
            }
          }
          param_1 = uVar9 + 2;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)(longlong)(iVar16 + -1));
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_248) != DAT_1436b4680) {
LAB_14084323a:
      uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
  }
  return param_1;
}

