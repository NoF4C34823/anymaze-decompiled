
/* WARNING: Removing unreachable block (ram,0x000140829d20) */

void FUN_140828180(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong lVar7;
  short sVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  short *psVar16;
  short sVar17;
  int iVar18;
  ulonglong uVar19;
  short sVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_208 [32];
  ulonglong *puStack_1e8;
  int iStack_1e0;
  uint uStack_1d8;
  short *psStack_1d0;
  undefined8 uStack_1c8;
  int iStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  ulonglong uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  uint uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  uint uStack_100;
  code *pcStack_f8;
  short *psStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  longlong lStack_d0;
  short *psStack_a8;
  ulonglong *puStack_a0;
  uint uStack_98;
  undefined4 *puStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int iStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  short asStack_48 [4];
  ulonglong uStack_40;
  undefined1 extraout_var [56];
  
  lVar12 = 0;
  iVar18 = param_10 >> 1;
  uStack_40 = DAT_1436b4680 ^ (ulonglong)auStack_208;
  lStack_60 = param_2;
  if (iVar18 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_14082a1fd;
  }
  else {
    uStack_58 = (ulonglong)iVar18;
    puVar14 = (undefined4 *)(param_4 * uStack_58 + (longlong)param_3);
    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,iVar18);
    iStack_68 = param_10;
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,param_6);
    puStack_90 = param_3;
    lStack_78 = param_4;
    lStack_70 = param_1;
    do {
      puStack_1e8 = &uStack_88;
      uStack_88 = *param_5;
      uStack_80 = param_5[1];
      iStack_1e0 = (int)uStack_1a0;
      uStack_1d8 = param_7;
      psStack_1d0 = param_8;
      uStack_1c8 = param_9;
      iStack_1c0 = iStack_68;
      lStack_1b8 = param_11;
      auVar29._0_8_ = FUN_140867fe0(lStack_70,lStack_60,lVar12,puVar14);
      auVar29._8_56_ = extraout_var;
      lVar12 = lVar12 + 1;
      puVar14 = (undefined4 *)((longlong)puVar14 + lStack_78);
    } while (lVar12 < (longlong)uStack_58);
    param_1 = lStack_70;
    param_3 = puStack_90;
    param_4 = lStack_78;
    iVar18 = (int)uStack_1a8;
    param_6 = (int)uStack_1a0;
    param_10 = iStack_68;
    if ((param_7 & 0x10) != 0) {
      lVar12 = (longlong)iStack_68;
      lStack_168 = 0;
      uStack_120 = 0;
      pcStack_f8 = (code *)(&PTR_FUN_14308c780)[(int)uStack_1a0];
      uStack_170 = (undefined4 *)(CONCAT44(uStack_170._4_4_,param_7) & 0xffffffff0000000f);
      lStack_70 = lStack_70 - lStack_60 * uStack_58;
      lStack_180 = lVar12 * 3;
      lStack_d0 = lVar12 + -1;
      lStack_188 = param_11 + lVar12 * 6;
      lStack_140 = uStack_58 * 3;
      uVar13 = lStack_140 + 2;
      uStack_118 = lStack_180 - 3;
      uStack_98 = param_7 & 0xf0;
      uStack_108 = ((lStack_180 + -1) / 3) * 3;
      uStack_110 = uStack_108 >> 1;
      uStack_d8 = param_7 & 0x80;
      uStack_100 = param_7 & 0x40;
      uStack_190 = uVar13 / 6;
      uStack_198 = (longlong)uVar13 / 3;
      lStack_e8 = -uStack_58;
      psStack_f0 = (short *)(param_11 + uStack_58 * 6);
      uStack_1a0 = uVar13 / 3;
      uStack_158 = (ulonglong)psStack_f0 & 0xf;
      uStack_160 = (ulonglong)psStack_f0 & 1;
      lStack_138 = uStack_58 * -6;
      uStack_148 = (longlong)(iStack_68 * 3) - 3;
      uStack_178 = uStack_198 & 0xfffffffffffffff0;
      uStack_1a8 = 0x10 - uStack_158 >> 1;
      uStack_150 = uStack_148 >> 1;
      uStack_128 = param_7;
      puStack_a0 = param_5;
      iVar18 = (int)uStack_170;
      uVar13 = 0;
      lVar12 = 0;
      lStack_130 = param_11;
      uStack_e0 = param_9;
      psStack_a8 = param_8;
      uVar19 = uStack_58;
      do {
        asStack_48[0] = 0;
        asStack_48[1] = 0;
        asStack_48[2] = 0;
        puVar14 = (undefined4 *)(lStack_78 * uVar13 + (longlong)puStack_90);
        lVar25 = lStack_60 * uVar13 + lStack_70;
        uVar27 = auVar29._0_8_;
        if (uStack_98 == 0xf0) {
          puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,iStack_68);
          auVar29._0_8_ = (*pcStack_f8)(lVar25,puVar14,*puStack_a0,uStack_e0);
          auVar29._8_56_ = extraout_var_03;
        }
        else {
          psVar16 = asStack_48;
          if (iVar18 == 6) {
            psVar16 = psStack_a8;
          }
          uVar22 = *puStack_a0;
          if ((longlong)uVar22 < lStack_d0) {
            uVar6 = 0;
            lVar7 = -uVar19;
            lVar12 = 0;
            if (lStack_e8 < (longlong)(uVar19 + uVar22)) {
              lStack_168 = uVar22 - 1;
              lVar23 = uVar19 * 2;
              do {
                lVar10 = lVar7;
                if (lVar7 < 0) {
                  if (uStack_128 != 0xf0) {
                    if (iVar18 == 6) {
                      if (uStack_100 == 0) goto LAB_14082a179;
                    }
                    else {
                      if (iVar18 != 1) goto LAB_14082a0ce;
LAB_14082a294:
                      lVar10 = 0;
                      if (uStack_100 != 0) {
                        lVar10 = lVar7;
                      }
                    }
                  }
LAB_14082a15c:
                  sVar8 = *(short *)(lVar25 + lVar10 * 6);
                  sVar17 = *(short *)(lVar25 + 2 + lVar10 * 6);
                  sVar20 = *(short *)(lVar25 + 4 + lVar10 * 6);
                }
                else {
                  if ((lVar7 < (longlong)uVar22) || (uStack_128 == 0xf0)) goto LAB_14082a15c;
                  if (iVar18 != 6) {
                    if (iVar18 == 1) {
                      if (lVar7 < 0) goto LAB_14082a294;
                      if (uStack_d8 == 0) {
                        lVar10 = lStack_168;
                      }
                    }
                    else {
LAB_14082a0ce:
                      if (iVar18 == 3) {
                        if ((longlong)uVar22 < 2) {
                          if (lVar7 < 0) {
                            if (uStack_100 == 0) {
                              lVar10 = -lVar7;
                              if (uStack_d8 == 0) {
                                lVar10 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar7) && (uStack_d8 == 0)) &&
                                  (lVar10 = -lVar7, uStack_100 == 0)) {
                            lVar10 = 0;
                          }
                        }
                        else {
                          if (lVar7 < 0) goto LAB_14082a2c0;
                          if ((longlong)uVar22 <= lVar7) {
                            while (uStack_d8 == 0) {
                              for (lVar10 = lStack_168 * 2 - lVar10; lVar10 < 0; lVar10 = -lVar10) {
LAB_14082a2c0:
                                if (uStack_100 != 0) goto LAB_14082a15c;
                              }
                              if (lVar10 < (longlong)uVar22) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14082a15c;
                  }
                  if (uStack_d8 != 0) goto LAB_14082a15c;
LAB_14082a179:
                  sVar8 = *psVar16;
                  sVar17 = psVar16[1];
                  sVar20 = psVar16[2];
                }
                uVar6 = uVar6 + 1;
                lVar7 = lVar7 + 1;
                *(short *)(lVar12 + lStack_130) = sVar8;
                *(short *)(lVar12 + 2 + lStack_130) = sVar17;
                *(short *)(lVar12 + 4 + lStack_130) = sVar20;
                lVar12 = lVar12 + 6;
                uVar19 = uStack_58;
                uStack_170 = puVar14;
                uStack_120 = uVar13;
              } while (uVar6 < uVar22 + lVar23);
            }
            puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,iStack_68);
            auVar29._0_8_ = (*pcStack_f8)(psStack_f0,puVar14,uVar22,uStack_e0);
            auVar29._8_56_ = extraout_var_01;
          }
          else {
            if (uStack_100 == 0) {
              if (0 < (longlong)uStack_118) {
                if (6 < (longlong)uStack_118) {
                  lVar23 = lStack_60 * lVar12 + lStack_70;
                  lVar7 = lStack_180 * 2 + -6;
                  if ((lVar7 <= (longlong)psStack_f0 - lVar23) ||
                     (lVar7 <= -((longlong)psStack_f0 - lVar23))) {
                    if ((((longlong)uStack_118 < 8) ||
                        ((uVar6 = uStack_158, uStack_158 != 0 &&
                         (uVar6 = uStack_1a8, uStack_160 != 0)))) ||
                       ((longlong)uStack_118 < (longlong)(uVar6 + 8))) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = uStack_118 - (uStack_118 - uVar6 & 7);
                      uVar21 = 0;
                      if (uVar6 != 0) {
                        do {
                          psStack_f0[uVar21] = *(short *)(lVar23 + uVar21 * 2);
                          uVar21 = uVar21 + 1;
                        } while (uVar21 < uVar6);
                      }
                      do {
                        puVar1 = (undefined8 *)(lVar23 + uVar6 * 2);
                        uVar27 = puVar1[1];
                        *(undefined8 *)(psStack_f0 + uVar6) = *puVar1;
                        *(undefined8 *)(psStack_f0 + uVar6 + 4) = uVar27;
                        uVar6 = uVar6 + 8;
                      } while (uVar6 < uVar15);
                    }
                    for (; uVar15 < uStack_118; uVar15 = uVar15 + 1) {
                      psStack_f0[uVar15] = *(short *)(lVar23 + uVar15 * 2);
                    }
                    goto LAB_140828e73;
                  }
                }
                lVar7 = 1;
                if (uStack_150 != 0) {
                  lVar7 = lStack_60 * lVar12 + lStack_70;
                  uVar6 = 0;
                  do {
                    uVar15 = uVar6;
                    psStack_f0[uVar15 * 2] = *(short *)(lVar7 + uVar15 * 4);
                    psStack_f0[uVar15 * 2 + 1] = *(short *)(lVar7 + 2 + uVar15 * 4);
                    uVar6 = uVar15 + 1;
                  } while (uVar6 < uStack_150);
                  lVar7 = uVar15 + 2 + uVar6;
                }
                uVar6 = lVar7 - 1;
                if (uVar6 < uStack_148) {
                  psStack_f0[uVar6] = *(short *)(lVar12 * lStack_60 + lStack_70 + uVar6 * 2);
                }
              }
LAB_140828e73:
              if (iVar18 == 1) {
                if (0 < lStack_140) {
                  if ((longlong)uStack_198 < 7) {
                    sVar8 = psStack_f0[2];
LAB_140829316:
                    uVar15 = 0;
                  }
                  else {
                    if ((5 < lStack_130 - (longlong)psStack_f0) ||
                       ((longlong)(uStack_198 * 6) <= -(lStack_130 - (longlong)psStack_f0))) {
                      sVar8 = *psStack_f0;
                      sVar17 = psStack_f0[1];
                      sVar20 = psStack_f0[2];
                      if ((longlong)uStack_198 < 0x10) {
                        uVar6 = 0;
                      }
                      else {
                        auVar28 = ZEXT416((uint)(int)sVar8);
                        auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                        auVar33 = vpunpckldq_avx(auVar28,auVar28);
                        uVar15 = 0;
                        auVar28 = ZEXT416((uint)(int)sVar17);
                        auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                        auVar32 = ZEXT416((uint)(int)sVar20);
                        auVar32 = vpunpcklwd_avx(auVar32,auVar32);
                        auVar33 = vpunpcklqdq_avx(auVar33,auVar33);
                        auVar28 = vpunpckldq_avx(auVar28,auVar28);
                        auVar32 = vpunpckldq_avx(auVar32,auVar32);
                        auVar28 = vpunpcklqdq_avx(auVar28,auVar28);
                        auVar32 = vpunpcklqdq_avx(auVar32,auVar32);
                        do {
                          uVar15 = uVar15 + 0x10;
                          vpextrw_avx(auVar33,0);
                          vpextrw_avx(auVar33,1);
                          vpextrw_avx(auVar33,2);
                          vpextrw_avx(auVar33,3);
                          vpextrw_avx(auVar33,4);
                          vpextrw_avx(auVar33,5);
                          vpextrw_avx(auVar33,6);
                          vpextrw_avx(auVar33,7);
                          vpextrw_avx(auVar33,0);
                          vpextrw_avx(auVar33,1);
                          vpextrw_avx(auVar33,2);
                          vpextrw_avx(auVar33,3);
                          vpextrw_avx(auVar33,4);
                          vpextrw_avx(auVar33,5);
                          vpextrw_avx(auVar33,6);
                          vpextrw_avx(auVar33,7);
                          vpextrw_avx(auVar28,0);
                          vpextrw_avx(auVar28,1);
                          vpextrw_avx(auVar28,2);
                          vpextrw_avx(auVar28,3);
                          vpextrw_avx(auVar28,4);
                          vpextrw_avx(auVar28,5);
                          vpextrw_avx(auVar28,6);
                          vpextrw_avx(auVar28,7);
                          vpextrw_avx(auVar28,0);
                          vpextrw_avx(auVar28,1);
                          vpextrw_avx(auVar28,2);
                          vpextrw_avx(auVar28,3);
                          vpextrw_avx(auVar28,4);
                          vpextrw_avx(auVar28,5);
                          vpextrw_avx(auVar28,6);
                          vpextrw_avx(auVar28,7);
                          vpextrw_avx(auVar32,0);
                          vpextrw_avx(auVar32,1);
                          vpextrw_avx(auVar32,2);
                          vpextrw_avx(auVar32,3);
                          vpextrw_avx(auVar32,4);
                          vpextrw_avx(auVar32,5);
                          vpextrw_avx(auVar32,6);
                          vpextrw_avx(auVar32,7);
                          vpextrw_avx(auVar32,0);
                          vpextrw_avx(auVar32,1);
                          vpextrw_avx(auVar32,2);
                          vpextrw_avx(auVar32,3);
                          vpextrw_avx(auVar32,4);
                          vpextrw_avx(auVar32,5);
                          vpextrw_avx(auVar32,6);
                          vpextrw_avx(auVar32,7);
                          uVar6 = uStack_178;
                        } while (uVar15 < uStack_178);
                      }
                      lVar12 = uVar6 * 6;
                      for (; uVar6 < uStack_198; uVar6 = uVar6 + 1) {
                        *(short *)(lVar12 + lStack_130) = sVar8;
                        *(short *)(lVar12 + 2 + lStack_130) = sVar17;
                        *(short *)(lVar12 + 4 + lStack_130) = sVar20;
                        lVar12 = lVar12 + 6;
                      }
                      goto LAB_1408297ae;
                    }
                    sVar8 = psStack_f0[2];
                    if ((longlong)uStack_198 < 0x10) goto LAB_140829316;
                    uVar6 = 0;
                    auVar28 = vpunpcklwd_avx(ZEXT416((uint)(int)sVar8),ZEXT416((uint)(int)sVar8));
                    auVar28 = vpunpckldq_avx(auVar28,auVar28);
                    auVar28 = vpunpcklqdq_avx(auVar28,auVar28);
                    do {
                      uVar6 = uVar6 + 0x10;
                      auVar32 = vpunpcklwd_avx(ZEXT416((uint)(int)*psStack_f0),
                                               ZEXT416((uint)(int)*psStack_f0));
                      auVar32 = vpunpckldq_avx(auVar32,auVar32);
                      auVar32 = vpunpcklqdq_avx(auVar32,auVar32);
                      vpextrw_avx(auVar32,0);
                      vpextrw_avx(auVar32,1);
                      vpextrw_avx(auVar32,2);
                      vpextrw_avx(auVar32,3);
                      vpextrw_avx(auVar32,4);
                      vpextrw_avx(auVar32,5);
                      vpextrw_avx(auVar32,6);
                      vpextrw_avx(auVar32,7);
                      vpextrw_avx(auVar32,0);
                      vpextrw_avx(auVar32,1);
                      vpextrw_avx(auVar32,2);
                      vpextrw_avx(auVar32,3);
                      vpextrw_avx(auVar32,4);
                      vpextrw_avx(auVar32,5);
                      vpextrw_avx(auVar32,6);
                      vpextrw_avx(auVar32,7);
                      vpextrw_avx(auVar28,0);
                      vpextrw_avx(auVar28,1);
                      auVar32 = vpunpcklwd_avx(ZEXT416((uint)(int)psStack_f0[1]),
                                               ZEXT416((uint)(int)psStack_f0[1]));
                      auVar32 = vpunpckldq_avx(auVar32,auVar32);
                      auVar32 = vpunpcklqdq_avx(auVar32,auVar32);
                      vpextrw_avx(auVar32,0);
                      vpextrw_avx(auVar32,1);
                      vpextrw_avx(auVar32,2);
                      vpextrw_avx(auVar32,3);
                      vpextrw_avx(auVar32,4);
                      vpextrw_avx(auVar32,5);
                      vpextrw_avx(auVar32,6);
                      vpextrw_avx(auVar32,7);
                      vpextrw_avx(auVar32,0);
                      vpextrw_avx(auVar32,1);
                      vpextrw_avx(auVar32,2);
                      vpextrw_avx(auVar32,3);
                      vpextrw_avx(auVar32,4);
                      vpextrw_avx(auVar32,5);
                      vpextrw_avx(auVar32,6);
                      vpextrw_avx(auVar32,7);
                      vpextrw_avx(auVar28,2);
                      vpextrw_avx(auVar28,3);
                      vpextrw_avx(auVar28,4);
                      vpextrw_avx(auVar28,5);
                      vpextrw_avx(auVar28,6);
                      vpextrw_avx(auVar28,7);
                      vpextrw_avx(auVar28,0);
                      vpextrw_avx(auVar28,1);
                      vpextrw_avx(auVar28,2);
                      vpextrw_avx(auVar28,3);
                      vpextrw_avx(auVar28,4);
                      vpextrw_avx(auVar28,5);
                      vpextrw_avx(auVar28,6);
                      vpextrw_avx(auVar28,7);
                      uVar15 = uStack_178;
                    } while (uVar6 < uStack_178);
                  }
                  lVar12 = uVar15 * 6;
                  for (; uVar15 < uStack_198; uVar15 = uVar15 + 1) {
                    *(short *)(lVar12 + lStack_130) = *psStack_f0;
                    *(short *)(lVar12 + 2 + lStack_130) = psStack_f0[1];
                    *(short *)(lVar12 + 4 + lStack_130) = sVar8;
                    lVar12 = lVar12 + 6;
                  }
                }
              }
              else if (iVar18 == 3) {
                if (0 < lStack_140) {
                  lVar12 = 1;
                  lVar23 = 0;
                  lVar7 = 0;
                  uVar6 = 0;
                  if (uStack_190 != 0) {
                    do {
                      uVar15 = uVar6;
                      uVar6 = uVar15 + 1;
                      *(undefined2 *)(lVar23 + lStack_130) =
                           *(undefined2 *)(lVar7 + -6 + lStack_188);
                      *(undefined2 *)(lVar23 + 2 + lStack_130) =
                           *(undefined2 *)(lVar7 + -4 + lStack_188);
                      *(undefined2 *)(lVar23 + 4 + lStack_130) =
                           *(undefined2 *)(lVar7 + -2 + lStack_188);
                      *(undefined2 *)(lVar23 + 6 + lStack_130) =
                           *(undefined2 *)(lVar7 + -0xc + lStack_188);
                      *(undefined2 *)(lVar23 + 8 + lStack_130) =
                           *(undefined2 *)(lVar7 + -10 + lStack_188);
                      lVar12 = lVar7 + -8;
                      lVar7 = lVar7 + -0xc;
                      *(undefined2 *)(lVar23 + 10 + lStack_130) =
                           *(undefined2 *)(lVar12 + lStack_188);
                      lVar23 = lVar23 + 0xc;
                    } while (uVar6 < uStack_190);
                    lVar12 = uVar15 + 2 + uVar6;
                  }
                  if (lVar12 - 1U < uStack_1a0) {
                    lVar7 = -(lVar12 * 6 + -6);
                    lVar12 = lVar12 * 3 + -3;
                    *(undefined2 *)(lStack_130 + lVar12 * 2) =
                         *(undefined2 *)(lVar7 + -6 + lStack_188);
                    *(undefined2 *)(lStack_130 + 2 + lVar12 * 2) =
                         *(undefined2 *)(lVar7 + -4 + lStack_188);
                    *(undefined2 *)(lStack_130 + 4 + lVar12 * 2) =
                         *(undefined2 *)(lVar7 + -2 + lStack_188);
                  }
                }
              }
              else if ((iVar18 == 6) && (0 < lStack_140)) {
                if (6 < (longlong)uStack_198) {
                  lVar12 = (longlong)psVar16 + (2 - lStack_130);
                  if ((((longlong)(uStack_198 * 6) <= lVar12) || (3 < -lVar12)) &&
                     ((1 < lStack_130 - (longlong)psVar16 ||
                      ((longlong)(uStack_198 * 6) <= -(lStack_130 - (longlong)psVar16))))) {
                    sVar8 = *psVar16;
                    sVar17 = psVar16[1];
                    sVar20 = psVar16[2];
                    if ((longlong)uStack_198 < 0x10) {
                      uVar6 = 0;
                    }
                    else {
                      auVar28 = ZEXT416((uint)(int)sVar8);
                      auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                      auVar33 = vpunpckldq_avx(auVar28,auVar28);
                      uVar15 = 0;
                      auVar28 = ZEXT416((uint)(int)sVar17);
                      auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                      auVar32 = ZEXT416((uint)(int)sVar20);
                      auVar32 = vpunpcklwd_avx(auVar32,auVar32);
                      auVar33 = vpunpcklqdq_avx(auVar33,auVar33);
                      auVar28 = vpunpckldq_avx(auVar28,auVar28);
                      auVar32 = vpunpckldq_avx(auVar32,auVar32);
                      auVar28 = vpunpcklqdq_avx(auVar28,auVar28);
                      auVar32 = vpunpcklqdq_avx(auVar32,auVar32);
                      do {
                        uVar15 = uVar15 + 0x10;
                        vpextrw_avx(auVar33,0);
                        vpextrw_avx(auVar33,1);
                        vpextrw_avx(auVar33,2);
                        vpextrw_avx(auVar33,3);
                        vpextrw_avx(auVar33,4);
                        vpextrw_avx(auVar33,5);
                        vpextrw_avx(auVar33,6);
                        vpextrw_avx(auVar33,7);
                        vpextrw_avx(auVar28,0);
                        vpextrw_avx(auVar28,1);
                        vpextrw_avx(auVar28,2);
                        vpextrw_avx(auVar28,3);
                        vpextrw_avx(auVar28,4);
                        vpextrw_avx(auVar28,5);
                        vpextrw_avx(auVar28,6);
                        vpextrw_avx(auVar28,7);
                        vpextrw_avx(auVar28,0);
                        vpextrw_avx(auVar28,1);
                        vpextrw_avx(auVar28,2);
                        vpextrw_avx(auVar28,3);
                        vpextrw_avx(auVar28,4);
                        vpextrw_avx(auVar28,5);
                        vpextrw_avx(auVar28,6);
                        vpextrw_avx(auVar28,7);
                        vpextrw_avx(auVar33,0);
                        vpextrw_avx(auVar33,1);
                        vpextrw_avx(auVar33,2);
                        vpextrw_avx(auVar33,3);
                        vpextrw_avx(auVar33,4);
                        vpextrw_avx(auVar33,5);
                        vpextrw_avx(auVar33,6);
                        vpextrw_avx(auVar33,7);
                        vpextrw_avx(auVar32,0);
                        vpextrw_avx(auVar32,1);
                        vpextrw_avx(auVar32,2);
                        vpextrw_avx(auVar32,3);
                        vpextrw_avx(auVar32,4);
                        vpextrw_avx(auVar32,5);
                        vpextrw_avx(auVar32,6);
                        vpextrw_avx(auVar32,7);
                        vpextrw_avx(auVar32,0);
                        vpextrw_avx(auVar32,1);
                        vpextrw_avx(auVar32,2);
                        vpextrw_avx(auVar32,3);
                        vpextrw_avx(auVar32,4);
                        vpextrw_avx(auVar32,5);
                        vpextrw_avx(auVar32,6);
                        vpextrw_avx(auVar32,7);
                        uVar6 = uStack_178;
                      } while (uVar15 < uStack_178);
                    }
                    lVar12 = uVar6 * 6;
                    for (; uVar6 < uStack_198; uVar6 = uVar6 + 1) {
                      *(short *)(lVar12 + lStack_130) = sVar8;
                      *(short *)(lVar12 + 2 + lStack_130) = sVar17;
                      *(short *)(lVar12 + 4 + lStack_130) = sVar20;
                      lVar12 = lVar12 + 6;
                    }
                    goto LAB_1408297ae;
                  }
                }
                lVar12 = 1;
                uVar6 = 0;
                if (uStack_190 != 0) {
                  do {
                    uVar15 = uVar6;
                    *(short *)(lStack_130 + uVar15 * 0xc) = *psVar16;
                    uVar6 = uVar15 + 1;
                    *(short *)(lStack_130 + 2 + uVar15 * 0xc) = psVar16[1];
                    *(short *)(lStack_130 + 4 + uVar15 * 0xc) = psVar16[2];
                    *(short *)(lStack_130 + 6 + uVar15 * 0xc) = *psVar16;
                    *(short *)(lStack_130 + 8 + uVar15 * 0xc) = psVar16[1];
                    *(short *)(lStack_130 + 10 + uVar15 * 0xc) = psVar16[2];
                  } while (uVar6 < uStack_190);
                  lVar12 = uVar15 + 2 + uVar6;
                }
                if (lVar12 - 1U < uStack_1a0) {
                  lVar12 = lVar12 * 3 + -3;
                  *(short *)(lStack_130 + lVar12 * 2) = *psVar16;
                  *(short *)(lStack_130 + 2 + lVar12 * 2) = psVar16[1];
                  *(short *)(lStack_130 + 4 + lVar12 * 2) = psVar16[2];
                }
              }
LAB_1408297ae:
              puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,iStack_68);
              uVar27 = (*pcStack_f8)(psStack_f0,puVar14,uVar19,uStack_e0);
              uVar22 = uVar22 - uVar19;
              lVar25 = lVar25 + lStack_140 * 2;
              puVar14 = puVar14 + lStack_140;
            }
            if (uStack_d8 == 0) {
              if ((longlong)uVar19 < (longlong)uVar22) {
                lVar12 = uVar22 - uVar19;
                puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,iStack_68);
                uVar27 = (*pcStack_f8)(lVar25,puVar14,lVar12,uStack_e0);
                lVar25 = lVar25 + lVar12 * 6;
                puVar14 = puVar14 + lVar12 * 3;
              }
              if (0 < (longlong)uStack_118) {
                lVar12 = 1;
                if (uStack_110 != 0) {
                  uVar22 = 0;
                  do {
                    uVar6 = uVar22;
                    *(undefined2 *)(lStack_130 + uVar6 * 4) =
                         *(undefined2 *)(lStack_138 + lVar25 + uVar6 * 4);
                    *(undefined2 *)(lStack_130 + 2 + uVar6 * 4) =
                         *(undefined2 *)(lStack_138 + lVar25 + 2 + uVar6 * 4);
                    uVar22 = uVar6 + 1;
                  } while (uVar22 < uStack_110);
                  lVar12 = uVar6 + 2 + uVar22;
                }
                uVar22 = lVar12 - 1;
                if (uVar22 < uStack_108) {
                  *(undefined2 *)(lStack_130 + uVar22 * 2) =
                       *(undefined2 *)(lVar25 + lStack_138 + uVar22 * 2);
                }
              }
              if (iVar18 == 1) {
                if (0 < lStack_140) {
                  if ((longlong)uStack_198 < 7) {
                    lVar12 = 1;
                    uVar22 = 0;
                    if (uStack_190 != 0) {
                      do {
                        uVar6 = uVar22;
                        *(undefined2 *)(lStack_188 + -6 + uVar6 * 0xc) =
                             *(undefined2 *)(lStack_188 + -0xc);
                        uVar22 = uVar6 + 1;
                        *(undefined2 *)(lStack_188 + -4 + uVar6 * 0xc) =
                             *(undefined2 *)(lStack_188 + -10);
                        *(undefined2 *)(lStack_188 + -2 + uVar6 * 0xc) =
                             *(undefined2 *)(lStack_188 + -8);
                        *(undefined2 *)(lStack_188 + uVar6 * 0xc) =
                             *(undefined2 *)(lStack_188 + -0xc);
                        *(undefined2 *)(lStack_188 + 2 + uVar6 * 0xc) =
                             *(undefined2 *)(lStack_188 + -10);
                        *(undefined2 *)(lStack_188 + 4 + uVar6 * 0xc) =
                             *(undefined2 *)(lStack_188 + -8);
                      } while (uVar22 < uStack_190);
                      lVar12 = uVar6 + 2 + uVar22;
                    }
                    if (lVar12 - 1U < uStack_1a0) {
                      lVar12 = lVar12 * 3 + -3;
                      *(undefined2 *)(lStack_188 + -6 + lVar12 * 2) =
                           *(undefined2 *)(lStack_188 + -0xc);
                      *(undefined2 *)(lStack_188 + -4 + lVar12 * 2) =
                           *(undefined2 *)(lStack_188 + -10);
                      *(undefined2 *)(lStack_188 + -2 + lVar12 * 2) =
                           *(undefined2 *)(lStack_188 + -8);
                    }
                  }
                  else {
                    sVar8 = *(short *)(lStack_188 + -0xc);
                    sVar17 = *(short *)(lStack_188 + -10);
                    sVar20 = *(short *)(lStack_188 + -8);
                    if ((longlong)uStack_198 < 0x10) {
                      uVar22 = 0;
                    }
                    else {
                      auVar28 = ZEXT416((uint)(int)sVar8);
                      auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                      auVar33 = vpunpckldq_avx(auVar28,auVar28);
                      uVar6 = 0;
                      auVar28 = ZEXT416((uint)(int)sVar17);
                      auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                      auVar32 = ZEXT416((uint)(int)sVar20);
                      auVar32 = vpunpcklwd_avx(auVar32,auVar32);
                      auVar33 = vpunpcklqdq_avx(auVar33,auVar33);
                      uVar27 = auVar33._0_8_;
                      auVar28 = vpunpckldq_avx(auVar28,auVar28);
                      auVar32 = vpunpckldq_avx(auVar32,auVar32);
                      auVar28 = vpunpcklqdq_avx(auVar28,auVar28);
                      auVar32 = vpunpcklqdq_avx(auVar32,auVar32);
                      do {
                        uVar6 = uVar6 + 0x10;
                        vpextrw_avx(auVar33,0);
                        vpextrw_avx(auVar33,1);
                        vpextrw_avx(auVar33,2);
                        vpextrw_avx(auVar33,3);
                        vpextrw_avx(auVar33,4);
                        vpextrw_avx(auVar33,5);
                        vpextrw_avx(auVar33,6);
                        vpextrw_avx(auVar33,7);
                        vpextrw_avx(auVar28,0);
                        vpextrw_avx(auVar28,1);
                        vpextrw_avx(auVar28,2);
                        vpextrw_avx(auVar28,3);
                        vpextrw_avx(auVar28,4);
                        vpextrw_avx(auVar28,5);
                        vpextrw_avx(auVar28,6);
                        vpextrw_avx(auVar28,7);
                        vpextrw_avx(auVar28,0);
                        vpextrw_avx(auVar28,1);
                        vpextrw_avx(auVar28,2);
                        vpextrw_avx(auVar28,3);
                        vpextrw_avx(auVar28,4);
                        vpextrw_avx(auVar28,5);
                        vpextrw_avx(auVar28,6);
                        vpextrw_avx(auVar28,7);
                        vpextrw_avx(auVar33,0);
                        vpextrw_avx(auVar33,1);
                        vpextrw_avx(auVar33,2);
                        vpextrw_avx(auVar33,3);
                        vpextrw_avx(auVar33,4);
                        vpextrw_avx(auVar33,5);
                        vpextrw_avx(auVar33,6);
                        vpextrw_avx(auVar33,7);
                        vpextrw_avx(auVar32,0);
                        vpextrw_avx(auVar32,1);
                        vpextrw_avx(auVar32,2);
                        vpextrw_avx(auVar32,3);
                        vpextrw_avx(auVar32,4);
                        vpextrw_avx(auVar32,5);
                        vpextrw_avx(auVar32,6);
                        vpextrw_avx(auVar32,7);
                        vpextrw_avx(auVar32,0);
                        vpextrw_avx(auVar32,1);
                        vpextrw_avx(auVar32,2);
                        vpextrw_avx(auVar32,3);
                        vpextrw_avx(auVar32,4);
                        vpextrw_avx(auVar32,5);
                        vpextrw_avx(auVar32,6);
                        vpextrw_avx(auVar32,7);
                        uVar22 = uStack_178;
                      } while (uVar6 < uStack_178);
                    }
                    lVar12 = uVar22 * 6;
                    for (; uVar22 < uStack_198; uVar22 = uVar22 + 1) {
                      *(short *)(lVar12 + -6 + lStack_188) = sVar8;
                      *(short *)(lVar12 + -4 + lStack_188) = sVar17;
                      *(short *)(lVar12 + -2 + lStack_188) = sVar20;
                      lVar12 = lVar12 + 6;
                    }
                  }
                }
              }
              else if (iVar18 == 3) {
                if (0 < lStack_140) {
                  lVar12 = 1;
                  lVar25 = 0;
                  lVar7 = 0;
                  uVar22 = 0;
                  if (uStack_190 != 0) {
                    do {
                      uVar6 = uVar22;
                      uVar22 = uVar6 + 1;
                      *(undefined2 *)(lVar25 + -6 + lStack_188) =
                           *(undefined2 *)(lVar7 + -0x12 + lStack_188);
                      *(undefined2 *)(lVar25 + -4 + lStack_188) =
                           *(undefined2 *)(lVar7 + -0x10 + lStack_188);
                      *(undefined2 *)(lVar25 + -2 + lStack_188) =
                           *(undefined2 *)(lVar7 + -0xe + lStack_188);
                      *(undefined2 *)(lVar25 + lStack_188) =
                           *(undefined2 *)(lVar7 + -0x18 + lStack_188);
                      *(undefined2 *)(lVar25 + 2 + lStack_188) =
                           *(undefined2 *)(lVar7 + -0x16 + lStack_188);
                      lVar12 = lVar7 + -0x14;
                      lVar7 = lVar7 + -0xc;
                      *(undefined2 *)(lVar25 + 4 + lStack_188) =
                           *(undefined2 *)(lVar12 + lStack_188);
                      lVar25 = lVar25 + 0xc;
                    } while (uVar22 < uStack_190);
                    lVar12 = uVar6 + 2 + uVar22;
                  }
                  if (lVar12 - 1U < uStack_1a0) {
                    lVar25 = -(lVar12 * 6 + -6);
                    lVar12 = lVar12 * 3 + -3;
                    *(undefined2 *)(lStack_188 + -6 + lVar12 * 2) =
                         *(undefined2 *)(lVar25 + -0x12 + lStack_188);
                    *(undefined2 *)(lStack_188 + -4 + lVar12 * 2) =
                         *(undefined2 *)(lVar25 + -0x10 + lStack_188);
                    *(undefined2 *)(lStack_188 + -2 + lVar12 * 2) =
                         *(undefined2 *)(lVar25 + -0xe + lStack_188);
                  }
                }
              }
              else if ((iVar18 == 6) && (0 < lStack_140)) {
                if (6 < (longlong)uStack_198) {
                  lVar12 = (longlong)psVar16 + (2 - (lStack_188 + -6));
                  if ((((longlong)(uStack_198 * 6) <= lVar12) || (3 < -lVar12)) &&
                     ((lVar12 = (lStack_188 + -6) - (longlong)psVar16, 1 < lVar12 ||
                      ((longlong)(uStack_198 * 6) <= -lVar12)))) {
                    sVar8 = *psVar16;
                    sVar17 = psVar16[1];
                    sVar20 = psVar16[2];
                    if ((longlong)uStack_198 < 0x10) {
                      uVar22 = 0;
                    }
                    else {
                      auVar28 = ZEXT416((uint)(int)sVar8);
                      auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                      auVar33 = vpunpckldq_avx(auVar28,auVar28);
                      uVar6 = 0;
                      auVar28 = ZEXT416((uint)(int)sVar17);
                      auVar28 = vpunpcklwd_avx(auVar28,auVar28);
                      auVar32 = ZEXT416((uint)(int)sVar20);
                      auVar32 = vpunpcklwd_avx(auVar32,auVar32);
                      auVar33 = vpunpcklqdq_avx(auVar33,auVar33);
                      uVar27 = auVar33._0_8_;
                      auVar28 = vpunpckldq_avx(auVar28,auVar28);
                      auVar32 = vpunpckldq_avx(auVar32,auVar32);
                      auVar28 = vpunpcklqdq_avx(auVar28,auVar28);
                      auVar32 = vpunpcklqdq_avx(auVar32,auVar32);
                      do {
                        uVar6 = uVar6 + 0x10;
                        vpextrw_avx(auVar33,0);
                        vpextrw_avx(auVar33,1);
                        vpextrw_avx(auVar33,2);
                        vpextrw_avx(auVar33,3);
                        vpextrw_avx(auVar33,4);
                        vpextrw_avx(auVar33,5);
                        vpextrw_avx(auVar33,6);
                        vpextrw_avx(auVar33,7);
                        vpextrw_avx(auVar28,0);
                        vpextrw_avx(auVar28,1);
                        vpextrw_avx(auVar28,2);
                        vpextrw_avx(auVar28,3);
                        vpextrw_avx(auVar28,4);
                        vpextrw_avx(auVar28,5);
                        vpextrw_avx(auVar28,6);
                        vpextrw_avx(auVar28,7);
                        vpextrw_avx(auVar28,0);
                        vpextrw_avx(auVar28,1);
                        vpextrw_avx(auVar28,2);
                        vpextrw_avx(auVar28,3);
                        vpextrw_avx(auVar28,4);
                        vpextrw_avx(auVar28,5);
                        vpextrw_avx(auVar28,6);
                        vpextrw_avx(auVar28,7);
                        vpextrw_avx(auVar33,0);
                        vpextrw_avx(auVar33,1);
                        vpextrw_avx(auVar33,2);
                        vpextrw_avx(auVar33,3);
                        vpextrw_avx(auVar33,4);
                        vpextrw_avx(auVar33,5);
                        vpextrw_avx(auVar33,6);
                        vpextrw_avx(auVar33,7);
                        vpextrw_avx(auVar32,0);
                        vpextrw_avx(auVar32,1);
                        vpextrw_avx(auVar32,2);
                        vpextrw_avx(auVar32,3);
                        vpextrw_avx(auVar32,4);
                        vpextrw_avx(auVar32,5);
                        vpextrw_avx(auVar32,6);
                        vpextrw_avx(auVar32,7);
                        vpextrw_avx(auVar32,0);
                        vpextrw_avx(auVar32,1);
                        vpextrw_avx(auVar32,2);
                        vpextrw_avx(auVar32,3);
                        vpextrw_avx(auVar32,4);
                        vpextrw_avx(auVar32,5);
                        vpextrw_avx(auVar32,6);
                        vpextrw_avx(auVar32,7);
                        uVar22 = uStack_178;
                      } while (uVar6 < uStack_178);
                    }
                    lVar12 = uVar22 * 6;
                    for (; uVar22 < uStack_198; uVar22 = uVar22 + 1) {
                      *(short *)(lVar12 + -6 + lStack_188) = sVar8;
                      *(short *)(lVar12 + -4 + lStack_188) = sVar17;
                      *(short *)(lVar12 + -2 + lStack_188) = sVar20;
                      lVar12 = lVar12 + 6;
                    }
                    goto LAB_140829fe5;
                  }
                }
                lVar12 = 1;
                uVar22 = 0;
                if (uStack_190 != 0) {
                  do {
                    uVar6 = uVar22;
                    *(short *)(lStack_188 + -6 + uVar6 * 0xc) = *psVar16;
                    uVar22 = uVar6 + 1;
                    *(short *)(lStack_188 + -4 + uVar6 * 0xc) = psVar16[1];
                    *(short *)(lStack_188 + -2 + uVar6 * 0xc) = psVar16[2];
                    *(short *)(lStack_188 + uVar6 * 0xc) = *psVar16;
                    *(short *)(lStack_188 + 2 + uVar6 * 0xc) = psVar16[1];
                    *(short *)(lStack_188 + 4 + uVar6 * 0xc) = psVar16[2];
                  } while (uVar22 < uStack_190);
                  lVar12 = uVar6 + 2 + uVar22;
                }
                if (lVar12 - 1U < uStack_1a0) {
                  lVar12 = lVar12 * 3 + -3;
                  *(short *)(lStack_188 + -6 + lVar12 * 2) = *psVar16;
                  *(short *)(lStack_188 + -4 + lVar12 * 2) = psVar16[1];
                  *(short *)(lStack_188 + -2 + lVar12 * 2) = psVar16[2];
                }
              }
LAB_140829fe5:
              puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,iStack_68);
              auVar29._0_8_ = (*pcStack_f8)(uVar27,puVar14,uVar19,uStack_e0);
              auVar29._8_56_ = extraout_var_00;
            }
            else {
              puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,iStack_68);
              auVar29._0_8_ = (*pcStack_f8)(lVar25,puVar14,uVar22,uStack_e0);
              auVar29._8_56_ = extraout_var_02;
            }
          }
        }
        iVar24 = (int)uVar13;
        uVar13 = uVar13 + 1;
        lVar12 = (longlong)iVar24 + 1;
      } while (uVar13 < uVar19);
LAB_14082a1fd:
      if ((uStack_40 ^ (ulonglong)auStack_208) == DAT_1436b4680) {
        return;
      }
      goto LAB_1408289b0;
    }
  }
  uVar11 = param_7 & 0xf;
  if (uVar11 == 6) {
    uVar13 = 0;
    auVar33._0_4_ = (float)(int)*param_8;
    auVar33._4_8_ = SUB128(ZEXT812(0),4);
    auVar33._12_4_ = 0;
    auVar32._0_4_ = (float)(int)param_8[1];
    auVar32._4_8_ = SUB128(ZEXT812(0),4);
    auVar32._12_4_ = 0;
    auVar28._0_4_ = (float)(int)param_8[2];
    auVar28._4_8_ = SUB128(ZEXT812(0),4);
    auVar28._12_4_ = 0;
    if (0 < iVar18) {
      uVar19 = *param_5;
      auVar3 = vshufps_avx(auVar33,auVar33,0);
      auVar4 = vshufps_avx(auVar32,auVar32,0);
      auVar5 = vshufps_avx(auVar28,auVar28,0);
      uVar22 = (longlong)(uVar19 * 3 + 2) / 3;
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,auVar32._0_4_);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,auVar33._0_4_);
      do {
        if (0 < (longlong)(uVar19 * 3)) {
          if ((longlong)uVar22 < 0x10) {
            uVar6 = 0;
          }
          else {
            uVar15 = 0;
            puVar14 = param_3;
            do {
              uVar15 = uVar15 + 0x10;
              uVar26 = auVar3._0_4_;
              *puVar14 = uVar26;
              uVar2 = vextractps_avx(auVar3,1);
              puVar14[3] = uVar2;
              uVar2 = vextractps_avx(auVar3,2);
              puVar14[6] = uVar2;
              uVar2 = vextractps_avx(auVar3,3);
              puVar14[9] = uVar2;
              puVar14[0xc] = uVar26;
              uVar2 = vextractps_avx(auVar3,1);
              puVar14[0xf] = uVar2;
              uVar2 = vextractps_avx(auVar3,2);
              puVar14[0x12] = uVar2;
              uVar2 = vextractps_avx(auVar3,3);
              puVar14[0x15] = uVar2;
              puVar14[0x18] = uVar26;
              uVar2 = vextractps_avx(auVar3,1);
              puVar14[0x1b] = uVar2;
              uVar2 = vextractps_avx(auVar3,2);
              puVar14[0x1e] = uVar2;
              uVar2 = vextractps_avx(auVar3,3);
              puVar14[0x21] = uVar2;
              puVar14[0x24] = uVar26;
              uVar2 = vextractps_avx(auVar3,1);
              puVar14[0x27] = uVar2;
              uVar2 = vextractps_avx(auVar3,2);
              puVar14[0x2a] = uVar2;
              uVar2 = vextractps_avx(auVar3,3);
              puVar14[0x2d] = uVar2;
              uVar26 = auVar4._0_4_;
              puVar14[1] = uVar26;
              uVar2 = vextractps_avx(auVar4,1);
              puVar14[4] = uVar2;
              uVar2 = vextractps_avx(auVar4,2);
              puVar14[7] = uVar2;
              uVar2 = vextractps_avx(auVar4,3);
              puVar14[10] = uVar2;
              puVar14[0xd] = uVar26;
              uVar2 = vextractps_avx(auVar4,1);
              puVar14[0x10] = uVar2;
              uVar2 = vextractps_avx(auVar4,2);
              puVar14[0x13] = uVar2;
              uVar2 = vextractps_avx(auVar4,3);
              puVar14[0x16] = uVar2;
              puVar14[0x19] = uVar26;
              uVar2 = vextractps_avx(auVar4,1);
              puVar14[0x1c] = uVar2;
              uVar2 = vextractps_avx(auVar4,2);
              puVar14[0x1f] = uVar2;
              uVar2 = vextractps_avx(auVar4,3);
              puVar14[0x22] = uVar2;
              puVar14[0x25] = uVar26;
              uVar2 = vextractps_avx(auVar4,1);
              puVar14[0x28] = uVar2;
              uVar2 = vextractps_avx(auVar4,2);
              puVar14[0x2b] = uVar2;
              uVar2 = vextractps_avx(auVar4,3);
              puVar14[0x2e] = uVar2;
              uVar26 = auVar5._0_4_;
              puVar14[2] = uVar26;
              uVar2 = vextractps_avx(auVar5,1);
              puVar14[5] = uVar2;
              uVar2 = vextractps_avx(auVar5,2);
              puVar14[8] = uVar2;
              uVar2 = vextractps_avx(auVar5,3);
              puVar14[0xb] = uVar2;
              puVar14[0xe] = uVar26;
              uVar2 = vextractps_avx(auVar5,1);
              puVar14[0x11] = uVar2;
              uVar2 = vextractps_avx(auVar5,2);
              puVar14[0x14] = uVar2;
              uVar2 = vextractps_avx(auVar5,3);
              puVar14[0x17] = uVar2;
              puVar14[0x1a] = uVar26;
              uVar2 = vextractps_avx(auVar5,1);
              puVar14[0x1d] = uVar2;
              uVar2 = vextractps_avx(auVar5,2);
              puVar14[0x20] = uVar2;
              uVar2 = vextractps_avx(auVar5,3);
              puVar14[0x23] = uVar2;
              puVar14[0x26] = uVar26;
              uVar2 = vextractps_avx(auVar5,1);
              puVar14[0x29] = uVar2;
              uVar2 = vextractps_avx(auVar5,2);
              puVar14[0x2c] = uVar2;
              uVar2 = vextractps_avx(auVar5,3);
              puVar14[0x2f] = uVar2;
              puVar14 = puVar14 + 0x30;
              uVar6 = uVar22 & 0xfffffffffffffff0;
            } while (uVar15 < (uVar22 & 0xfffffffffffffff0));
          }
          if (uVar6 + 1 <= uVar22) {
            uVar15 = uVar22 - uVar6;
            if ((longlong)uVar15 < 2) {
              uVar21 = 0;
            }
            else {
              uVar9 = 0;
              uVar21 = uVar15 & 0xfffffffffffffffe;
              lVar12 = 0;
              do {
                uVar9 = uVar9 + 2;
                *(float *)((longlong)param_3 + lVar12 + 8 + uVar6 * 0xc) = auVar28._0_4_;
                *(float *)((longlong)param_3 + lVar12 + 0x14 + uVar6 * 0xc) = auVar28._0_4_;
                *(float *)((longlong)param_3 + lVar12 + 4 + uVar6 * 0xc) = auVar32._0_4_;
                *(float *)((longlong)param_3 + lVar12 + 0x10 + uVar6 * 0xc) = auVar32._0_4_;
                *(float *)((longlong)param_3 + lVar12 + uVar6 * 0xc) = auVar33._0_4_;
                *(float *)((longlong)param_3 + lVar12 + 0xc + uVar6 * 0xc) = auVar33._0_4_;
                lVar12 = lVar12 + 0x18;
                puStack_90 = param_3;
                lStack_78 = param_4;
              } while (uVar9 < uVar21);
            }
            lVar12 = uVar21 * 0xc;
            for (; uVar21 < uVar15; uVar21 = uVar21 + 1) {
              *(float *)((longlong)param_3 + lVar12 + uVar6 * 0xc) = auVar33._0_4_;
              *(float *)((longlong)param_3 + lVar12 + 4 + uVar6 * 0xc) = auVar32._0_4_;
              *(float *)((longlong)param_3 + lVar12 + 8 + uVar6 * 0xc) = auVar28._0_4_;
              lVar12 = lVar12 + 0xc;
            }
          }
        }
        uVar13 = uVar13 + 1;
        param_3 = (undefined4 *)((longlong)param_3 + param_4);
      } while (uVar13 < (ulonglong)(longlong)iVar18);
    }
    if ((uStack_40 ^ (ulonglong)auStack_208) == DAT_1436b4680) {
      return;
    }
LAB_1408289b0:
    uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  if (uVar11 == 1) {
    uVar13 = 0;
    if (0 < iVar18) {
      lVar12 = param_4 * iVar18;
      uVar19 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 8) {
LAB_140828666:
            uVar6 = 0;
          }
          else {
            puVar14 = (undefined4 *)(param_4 * uVar13 + (longlong)param_3);
            uVar22 = (ulonglong)puVar14 & 0x1f;
            if (uVar22 != 0) {
              if (((ulonglong)puVar14 & 3) != 0) goto LAB_140828666;
              uVar22 = 0x20 - uVar22 >> 2;
            }
            if ((longlong)uVar19 < (longlong)(uVar22 + 8)) goto LAB_140828666;
            uVar15 = 0;
            uVar6 = uVar19 - (uVar19 - uVar22 & 7);
            if (uVar22 != 0) {
              do {
                puVar14[uVar15] = *(undefined4 *)((longlong)param_3 + uVar15 * 4 + lVar12);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar22);
            }
            do {
              auVar31._16_16_ =
                   *(undefined1 (*) [16])((longlong)param_3 + uVar22 * 4 + lVar12 + 0x10);
              auVar31._0_16_ = *(undefined1 (*) [16])((longlong)param_3 + uVar22 * 4 + lVar12);
              *(undefined1 (*) [32])(puVar14 + uVar22) = auVar31;
              uVar22 = uVar22 + 8;
            } while (uVar22 < uVar6);
          }
          if (uVar6 < uVar19) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar6 * 4 + param_4 * uVar13) =
                   *(undefined4 *)((longlong)param_3 + uVar6 * 4 + lVar12);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar19);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)(longlong)iVar18);
    }
    if ((uStack_40 ^ (ulonglong)auStack_208) != DAT_1436b4680) goto LAB_14082836c;
  }
  else {
    if (uVar11 == 3) {
      puStack_1e8 = &uStack_1a8;
      uStack_1a8 = *param_5;
      uStack_1a0 = param_5[1];
      uStack_1d8 = param_7;
      psStack_1d0 = param_8;
      uStack_1c8 = param_9;
      lStack_1b8 = param_11;
      iStack_1e0 = param_6;
      iStack_1c0 = param_10;
      FUN_140867fe0(param_1,lStack_60,(longlong)iVar18,param_3);
      lVar12 = 1;
      uVar13 = 0;
      if (1 < iVar18) {
        lVar25 = ((longlong)param_10 + -1) * param_4;
        uVar19 = *param_5 * 3;
        do {
          if (0 < (longlong)uVar19) {
            if ((longlong)uVar19 < 8) {
LAB_140828505:
              uVar6 = 0;
            }
            else {
              puVar14 = (undefined4 *)((longlong)param_3 + param_4 * lVar12);
              uVar22 = (ulonglong)puVar14 & 0x1f;
              if (uVar22 != 0) {
                if (((ulonglong)puVar14 & 3) != 0) goto LAB_140828505;
                uVar22 = 0x20 - uVar22 >> 2;
              }
              if ((longlong)uVar19 < (longlong)(uVar22 + 8)) goto LAB_140828505;
              lVar7 = lVar25 - param_4 * lVar12;
              uVar15 = 0;
              uVar6 = uVar19 - (uVar19 - uVar22 & 7);
              if (uVar22 != 0) {
                do {
                  puVar14[uVar15] = *(undefined4 *)((longlong)param_3 + uVar15 * 4 + lVar7);
                  uVar15 = uVar15 + 1;
                } while (uVar15 < uVar22);
              }
              do {
                auVar30._16_16_ =
                     *(undefined1 (*) [16])((longlong)param_3 + uVar22 * 4 + lVar7 + 0x10);
                auVar30._0_16_ = *(undefined1 (*) [16])((longlong)param_3 + uVar22 * 4 + lVar7);
                *(undefined1 (*) [32])(puVar14 + uVar22) = auVar30;
                uVar22 = uVar22 + 8;
              } while (uVar22 < uVar6);
            }
            if (uVar6 < uVar19) {
              do {
                *(undefined4 *)((longlong)param_3 + uVar6 * 4 + lVar12 * param_4) =
                     *(undefined4 *)((longlong)param_3 + uVar6 * 4 + (lVar25 - lVar12 * param_4));
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar19);
            }
          }
          lVar12 = uVar13 + 2;
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulonglong)(longlong)(iVar18 + -1));
      }
    }
    if ((uStack_40 ^ (ulonglong)auStack_208) != DAT_1436b4680) {
LAB_14082836c:
      uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
  }
  return;
}

