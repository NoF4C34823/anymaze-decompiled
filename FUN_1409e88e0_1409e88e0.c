
/* WARNING: Removing unreachable block (ram,0x0001409ea2c5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409e88e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [64];
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  byte bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  undefined2 uVar47;
  short sVar48;
  ulonglong uVar49;
  uint uVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  short *psVar54;
  short sVar55;
  int iVar56;
  int iVar57;
  ulonglong uVar58;
  short sVar59;
  ulonglong uVar60;
  longlong lVar61;
  ulonglong uVar62;
  ushort uVar63;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auStack_288 [32];
  ulonglong *puStack_268;
  int iStack_260;
  uint uStack_258;
  short *psStack_250;
  undefined8 uStack_248;
  int iStack_240;
  longlong lStack_238;
  ulonglong uStack_228;
  ulonglong uStack_220;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1e8 [16];
  ulonglong uStack_178;
  ulonglong uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  uint uStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  uint uStack_e0;
  code *pcStack_d8;
  undefined2 *puStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  longlong lStack_b0;
  short *psStack_a8;
  ulonglong *puStack_a0;
  uint uStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  int iStack_60;
  longlong lStack_58;
  longlong lStack_50;
  short asStack_48 [4];
  ulonglong uStack_40;
  
  lVar51 = 0;
  iVar56 = param_10 >> 1;
  uStack_40 = DAT_1436b4680 ^ (ulonglong)auStack_288;
  lStack_58 = param_2;
  if (iVar56 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_1409ea75b;
  }
  else {
    uStack_68 = (ulonglong)iVar56;
    lVar52 = param_4 * uStack_68 + param_3;
    uStack_228 = CONCAT44(uStack_228._4_4_,iVar56);
    iStack_60 = param_10;
    uStack_220 = CONCAT44(uStack_220._4_4_,param_6);
    lStack_88 = param_3;
    lStack_80 = param_1;
    lStack_50 = param_4;
    do {
      puStack_268 = &uStack_78;
      uStack_78 = *param_5;
      uStack_70 = param_5[1];
      iStack_260 = (int)uStack_220;
      uStack_258 = param_7;
      psStack_250 = param_8;
      uStack_248 = param_9;
      iStack_240 = iStack_60;
      lStack_238 = param_11;
      FUN_140a00200(lStack_80,lStack_58,lVar51,lVar52);
      lVar51 = lVar51 + 1;
      lVar52 = lVar52 + lStack_50;
    } while (lVar51 < (longlong)uStack_68);
    param_1 = lStack_80;
    param_3 = lStack_88;
    param_4 = lStack_50;
    iVar56 = (int)uStack_228;
    param_6 = (int)uStack_220;
    param_10 = iStack_60;
    if ((param_7 & 0x10) != 0) {
      lStack_148 = 0;
      uStack_108 = 0;
      pcStack_d8 = (code *)(&PTR_LAB_14308e5a0)[(int)uStack_220];
      uStack_150 = CONCAT44(uStack_150._4_4_,param_7) & 0xffffffff0000000f;
      auStack_218 = in_ZMM6._0_16_;
      auStack_208 = in_ZMM7._0_16_;
      auStack_1e8 = in_ZMM9._0_16_;
      lVar51 = (longlong)iStack_60;
      lStack_80 = lStack_80 - lStack_58 * uStack_68;
      lStack_f8 = param_11;
      uStack_100 = param_7;
      lStack_160 = lVar51 * 3;
      lStack_b0 = lVar51 + -1;
      lStack_168 = param_11 + lVar51 * 6;
      uVar53 = lStack_160 - 3;
      vmovdqu32_avx512f(_DAT_14308e300);
      uStack_98 = param_7 & 0xf0;
      uStack_228 = uVar53 & 0xffffffffffffffe0;
      uStack_e8 = ((lStack_160 + -1) / 3) * 3;
      uStack_f0 = uStack_e8 >> 1;
      uStack_e0 = param_7 & 0x40;
      lStack_c8 = -uStack_68;
      lStack_120 = uStack_68 * 3;
      puStack_d0 = (undefined2 *)(param_11 + uStack_68 * 6);
      uStack_b8 = param_7 & 0x80;
      uVar58 = lStack_120 + 2;
      uStack_170 = uVar58 / 6;
      uStack_178 = (longlong)uVar58 / 3;
      vmovdqu32_avx512f(_DAT_14308e340);
      uStack_138 = (ulonglong)puStack_d0 & 0x3f;
      uStack_220 = uVar58 / 3;
      uStack_140 = (ulonglong)puStack_d0 & 1;
      uStack_158 = uStack_178 & 0xfffffffffffffff0;
      lStack_118 = uStack_68 * -6;
      uStack_128 = (longlong)(iStack_60 * 3) - 3;
      uStack_90 = 0x40 - uStack_138 >> 1;
      uStack_130 = uStack_128 >> 1;
      iVar56 = (int)uStack_150;
      uVar58 = 0;
      lVar51 = 0;
      uStack_c0 = param_9;
      psStack_a8 = param_8;
      puStack_a0 = param_5;
      uStack_110 = uVar53;
      do {
        auVar72 = _DAT_14308e2c0;
        asStack_48[0] = 0;
        asStack_48[1] = 0;
        asStack_48[2] = 0;
        uVar49 = lStack_50 * uVar58 + lStack_88;
        lVar52 = lStack_58 * uVar58 + lStack_80;
        if (uStack_98 == 0xf0) {
          puStack_268 = (ulonglong *)CONCAT44(puStack_268._4_4_,iStack_60);
          (*pcStack_d8)(lVar52,uVar49,*puStack_a0,uStack_c0);
        }
        else {
          psVar54 = asStack_48;
          if (iVar56 == 6) {
            psVar54 = psStack_a8;
          }
          uVar45 = *puStack_a0;
          if ((longlong)uVar45 < lStack_b0) {
            uVar44 = 0;
            lVar51 = 0;
            lVar46 = -uStack_68;
            if (lStack_c8 < (longlong)(uStack_68 + uVar45)) {
              lStack_148 = uVar45 - 1;
              do {
                lVar61 = lVar46;
                if (lVar46 < 0) {
                  if (uStack_100 != 0xf0) {
                    if (iVar56 == 6) {
                      if (uStack_e0 == 0) goto LAB_1409ea678;
                    }
                    else {
                      if (iVar56 != 1) goto LAB_1409ea5ec;
LAB_1409ea7f0:
                      lVar61 = 0;
                      if (uStack_e0 != 0) {
                        lVar61 = lVar46;
                      }
                    }
                  }
LAB_1409ea65c:
                  sVar48 = *(short *)(lVar52 + lVar61 * 6);
                  sVar55 = *(short *)(lVar52 + 2 + lVar61 * 6);
                  sVar59 = *(short *)(lVar52 + 4 + lVar61 * 6);
                }
                else {
                  if ((lVar46 < (longlong)uVar45) || (uStack_100 == 0xf0)) goto LAB_1409ea65c;
                  if (iVar56 != 6) {
                    if (iVar56 == 1) {
                      if (lVar46 < 0) goto LAB_1409ea7f0;
                      if (uStack_b8 == 0) {
                        lVar61 = lStack_148;
                      }
                    }
                    else {
LAB_1409ea5ec:
                      if (iVar56 == 3) {
                        if ((longlong)uVar45 < 2) {
                          if (lVar46 < 0) {
                            if (uStack_e0 == 0) {
                              lVar61 = -lVar46;
                              if (uStack_b8 == 0) {
                                lVar61 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar46) && (uStack_b8 == 0)) &&
                                  (lVar61 = -lVar46, uStack_e0 == 0)) {
                            lVar61 = 0;
                          }
                        }
                        else {
                          if (lVar46 < 0) goto LAB_1409ea820;
                          if ((longlong)uVar45 <= lVar46) {
                            while (uStack_b8 == 0) {
                              for (lVar61 = lStack_148 * 2 - lVar61; lVar61 < 0; lVar61 = -lVar61) {
LAB_1409ea820:
                                if (uStack_e0 != 0) goto LAB_1409ea65c;
                              }
                              if (lVar61 < (longlong)uVar45) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1409ea65c;
                  }
                  if (uStack_b8 != 0) goto LAB_1409ea65c;
LAB_1409ea678:
                  sVar48 = *psVar54;
                  sVar55 = psVar54[1];
                  sVar59 = psVar54[2];
                }
                uVar44 = uVar44 + 1;
                lVar46 = lVar46 + 1;
                *(short *)(lVar51 + lStack_f8) = sVar48;
                *(short *)(lVar51 + 2 + lStack_f8) = sVar55;
                *(short *)(lVar51 + 4 + lStack_f8) = sVar59;
                lVar51 = lVar51 + 6;
                uVar53 = uStack_110;
                uStack_150 = uVar49;
                uStack_108 = uVar58;
              } while (uVar44 < uVar45 + uStack_68 * 2);
            }
            puStack_268 = (ulonglong *)CONCAT44(puStack_268._4_4_,iStack_60);
            (*pcStack_d8)(puStack_d0,uVar49,uVar45,uStack_c0);
          }
          else {
            if (uStack_e0 == 0) {
              if (0 < (longlong)uVar53) {
                if (6 < (longlong)uVar53) {
                  lVar61 = lStack_58 * lVar51 + lStack_80;
                  lVar46 = lStack_160 * 2 + -6;
                  if ((lVar46 <= (longlong)puStack_d0 - lVar61) ||
                     (lVar46 <= -((longlong)puStack_d0 - lVar61))) {
                    if ((longlong)uVar53 < 0x20) {
                      uVar44 = 0;
                    }
                    else {
                      if ((longlong)uVar53 < 0x76) {
                        uVar62 = 0;
                        uVar44 = uStack_228;
                      }
                      else {
                        if (uStack_140 == 0) {
                          uVar62 = uStack_138;
                          if ((uStack_138 != 0) &&
                             (uVar62 = uStack_90, (longlong)uVar53 < (longlong)uStack_90)) {
                            uVar62 = uVar53;
                          }
                        }
                        else {
                          uVar62 = 0;
                        }
                        uVar44 = uVar53 - (uVar53 - uVar62 & 0x1f);
                        if (uVar62 != 0) {
                          uVar60 = 0;
                          auVar67 = vmovdqu32_avx512f(_DAT_14308e300);
                          lVar51 = 0;
                          auVar68 = vmovdqu32_avx512f(_DAT_14308e340);
                          auVar71 = vpbroadcastq_avx512f();
                          do {
                            uVar23 = vpcmpgtq_avx512f(auVar71,auVar67);
                            uVar60 = uVar60 + 0x10;
                            uVar21 = vpcmpgtq_avx512f(auVar71,auVar68);
                            bVar24 = (byte)uVar21;
                            auVar67 = vpaddq_avx512f(auVar67,auVar72);
                            auVar68 = vpaddq_avx512f(auVar68,auVar72);
                            uVar63 = CONCAT11(bVar24,(byte)uVar23);
                            auVar64 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar51 + lVar61));
                            auVar65._2_2_ = (ushort)((byte)(uVar63 >> 1) & 1) * auVar64._2_2_;
                            auVar65._0_2_ = (ushort)((byte)uVar23 & 1) * auVar64._0_2_;
                            auVar65._4_2_ = (ushort)((byte)(uVar63 >> 2) & 1) * auVar64._4_2_;
                            auVar65._6_2_ = (ushort)((byte)(uVar63 >> 3) & 1) * auVar64._6_2_;
                            auVar65._8_2_ = (ushort)((byte)(uVar63 >> 4) & 1) * auVar64._8_2_;
                            auVar65._10_2_ = (ushort)((byte)(uVar63 >> 5) & 1) * auVar64._10_2_;
                            auVar65._12_2_ = (ushort)((byte)(uVar63 >> 6) & 1) * auVar64._12_2_;
                            auVar65._14_2_ = (ushort)((byte)(uVar63 >> 7) & 1) * auVar64._14_2_;
                            auVar65._16_2_ = (ushort)(bVar24 & 1) * auVar64._16_2_;
                            auVar65._18_2_ = (ushort)(bVar24 >> 1 & 1) * auVar64._18_2_;
                            auVar65._20_2_ = (ushort)(bVar24 >> 2 & 1) * auVar64._20_2_;
                            auVar65._22_2_ = (ushort)(bVar24 >> 3 & 1) * auVar64._22_2_;
                            auVar65._24_2_ = (ushort)(bVar24 >> 4 & 1) * auVar64._24_2_;
                            auVar65._26_2_ = (ushort)(bVar24 >> 5 & 1) * auVar64._26_2_;
                            auVar65._28_2_ = (ushort)(bVar24 >> 6 & 1) * auVar64._28_2_;
                            auVar65._30_2_ = (ushort)(bVar24 >> 7) * auVar64._30_2_;
                            auVar64 = vmovdqu16_avx512vl(auVar65);
                            *(undefined1 (*) [32])(lVar51 + (longlong)puStack_d0) = auVar64;
                            lVar51 = lVar51 + 0x20;
                          } while (uVar60 < uVar62);
                          if (uVar53 == uVar62) goto LAB_1409e96b3;
                        }
                      }
                      if ((longlong)(uVar62 + 0x20) <= (longlong)uVar44) {
                        do {
                          auVar72 = vmovdqu32_avx512f(*(undefined1 (*) [64])(lVar61 + uVar62 * 2));
                          *(undefined1 (*) [64])(puStack_d0 + uVar62) = auVar72;
                          uVar62 = uVar62 + 0x20;
                        } while (uVar62 < uVar44);
                      }
                    }
                    auVar72 = _DAT_14308e2c0;
                    if (uVar44 + 1 <= uVar53) {
                      uVar62 = 0;
                      auVar67 = vmovdqu32_avx512f(_DAT_14308e300);
                      auVar68 = vmovdqu32_avx512f(_DAT_14308e340);
                      auVar71 = vpbroadcastq_avx512f();
                      lVar51 = 0;
                      do {
                        uVar23 = vpcmpgtq_avx512f(auVar71,auVar67);
                        uVar62 = uVar62 + 0x10;
                        uVar21 = vpcmpgtq_avx512f(auVar71,auVar68);
                        bVar24 = (byte)uVar21;
                        auVar67 = vpaddq_avx512f(auVar67,auVar72);
                        auVar68 = vpaddq_avx512f(auVar68,auVar72);
                        uVar63 = CONCAT11(bVar24,(byte)uVar23);
                        auVar64 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                                      (lVar51 + lVar61 + uVar44 * 2));
                        auVar66._2_2_ = (ushort)((byte)(uVar63 >> 1) & 1) * auVar64._2_2_;
                        auVar66._0_2_ = (ushort)((byte)uVar23 & 1) * auVar64._0_2_;
                        auVar66._4_2_ = (ushort)((byte)(uVar63 >> 2) & 1) * auVar64._4_2_;
                        auVar66._6_2_ = (ushort)((byte)(uVar63 >> 3) & 1) * auVar64._6_2_;
                        auVar66._8_2_ = (ushort)((byte)(uVar63 >> 4) & 1) * auVar64._8_2_;
                        auVar66._10_2_ = (ushort)((byte)(uVar63 >> 5) & 1) * auVar64._10_2_;
                        auVar66._12_2_ = (ushort)((byte)(uVar63 >> 6) & 1) * auVar64._12_2_;
                        auVar66._14_2_ = (ushort)((byte)(uVar63 >> 7) & 1) * auVar64._14_2_;
                        auVar66._16_2_ = (ushort)(bVar24 & 1) * auVar64._16_2_;
                        auVar66._18_2_ = (ushort)(bVar24 >> 1 & 1) * auVar64._18_2_;
                        auVar66._20_2_ = (ushort)(bVar24 >> 2 & 1) * auVar64._20_2_;
                        auVar66._22_2_ = (ushort)(bVar24 >> 3 & 1) * auVar64._22_2_;
                        auVar66._24_2_ = (ushort)(bVar24 >> 4 & 1) * auVar64._24_2_;
                        auVar66._26_2_ = (ushort)(bVar24 >> 5 & 1) * auVar64._26_2_;
                        auVar66._28_2_ = (ushort)(bVar24 >> 6 & 1) * auVar64._28_2_;
                        auVar66._30_2_ = (ushort)(bVar24 >> 7) * auVar64._30_2_;
                        auVar64 = vmovdqu16_avx512vl(auVar66);
                        *(undefined1 (*) [32])((longlong)puStack_d0 + lVar51 + uVar44 * 2) = auVar64
                        ;
                        lVar51 = lVar51 + 0x20;
                      } while (uVar62 < uVar53 - uVar44);
                    }
                    goto LAB_1409e96b3;
                  }
                }
                lVar46 = 1;
                if (uStack_130 != 0) {
                  lVar46 = lStack_58 * lVar51 + lStack_80;
                  uVar44 = 0;
                  do {
                    uVar62 = uVar44;
                    puStack_d0[uVar62 * 2] = *(undefined2 *)(lVar46 + uVar62 * 4);
                    puStack_d0[uVar62 * 2 + 1] = *(undefined2 *)(lVar46 + 2 + uVar62 * 4);
                    uVar44 = uVar62 + 1;
                  } while (uVar44 < uStack_130);
                  lVar46 = uVar62 + 2 + uVar44;
                }
                uVar44 = lVar46 - 1;
                if (uVar44 < uStack_128) {
                  puStack_d0[uVar44] = *(undefined2 *)(lVar51 * lStack_58 + lStack_80 + uVar44 * 2);
                }
              }
LAB_1409e96b3:
              if (iVar56 == 1) {
                if (0 < lStack_120) {
                  if ((longlong)uStack_178 < 7) {
                    uVar47 = puStack_d0[2];
LAB_1409e9ab9:
                    uVar62 = 0;
                  }
                  else {
                    if ((5 < lStack_f8 - (longlong)puStack_d0) ||
                       ((longlong)(uStack_178 * 6) <= -(lStack_f8 - (longlong)puStack_d0))) {
                      uVar47 = *puStack_d0;
                      uVar6 = puStack_d0[1];
                      uVar7 = puStack_d0[2];
                      if ((longlong)uStack_178 < 0x10) {
                        uVar44 = 0;
                      }
                      else {
                        auVar72 = vmovdqu32_avx512f(_DAT_14308e440);
                        auVar67 = vmovdqu32_avx512f(_DAT_14308e480);
                        auVar64 = vpbroadcastw_avx512vl();
                        auVar65 = vpbroadcastw_avx512vl();
                        auVar66 = vpbroadcastw_avx512vl();
                        uVar62 = 0;
                        lVar51 = 0;
                        auVar68 = vpermw_avx512bw(auVar72,ZEXT3264(auVar66));
                        auVar71 = vpermw_avx512bw(auVar67,ZEXT3264(auVar66));
                        auVar70 = vpermw_avx512bw(auVar72,ZEXT3264(auVar65));
                        auVar69 = vpermw_avx512bw(auVar67,ZEXT3264(auVar65));
                        auVar72 = vpermw_avx512bw(auVar72,ZEXT3264(auVar64));
                        auVar67 = vpermw_avx512bw(auVar67,ZEXT3264(auVar64));
                        do {
                          uVar62 = uVar62 + 0x10;
                          auVar5 = vmovdqu16_avx512bw(auVar68);
                          *(undefined1 (*) [64])(lVar51 + 4 + lStack_f8) = auVar5;
                          auVar5 = vmovdqu16_avx512bw(auVar71);
                          *(undefined1 (*) [64])(lVar51 + 0x44 + lStack_f8) = auVar5;
                          auVar5 = vmovdqu16_avx512bw(auVar70);
                          *(undefined1 (*) [64])(lVar51 + 2 + lStack_f8) = auVar5;
                          auVar5 = vmovdqu16_avx512bw(auVar69);
                          *(undefined1 (*) [64])(lVar51 + 0x42 + lStack_f8) = auVar5;
                          auVar5 = vmovdqu16_avx512bw(auVar72);
                          *(undefined1 (*) [64])(lVar51 + lStack_f8) = auVar5;
                          auVar5 = vmovdqu16_avx512bw(auVar67);
                          *(undefined1 (*) [64])(lVar51 + 0x40 + lStack_f8) = auVar5;
                          lVar51 = lVar51 + 0x60;
                          uVar44 = uStack_158;
                          uStack_108 = uVar58;
                        } while (uVar62 < uStack_158);
                      }
                      uVar62 = 0;
                      if (uVar44 + 1 <= uStack_178) {
                        lVar51 = lStack_f8 + uVar44 * 6;
                        uVar60 = uVar62;
                        do {
                          uVar62 = uVar62 + 1;
                          *(undefined2 *)(uVar60 + lVar51) = uVar47;
                          *(undefined2 *)(uVar60 + 2 + lVar51) = uVar6;
                          *(undefined2 *)(uVar60 + 4 + lVar51) = uVar7;
                          uVar60 = uVar60 + 6;
                        } while (uVar62 < uStack_178 - uVar44);
                      }
                      goto LAB_1409e9db6;
                    }
                    uVar47 = puStack_d0[2];
                    if ((longlong)uStack_178 < 0x10) goto LAB_1409e9ab9;
                    auVar72 = vmovdqu32_avx512f(_DAT_14308e440);
                    auVar67 = vmovdqu32_avx512f(_DAT_14308e480);
                    auVar64 = vpbroadcastw_avx512vl();
                    uVar44 = 0;
                    lVar51 = 0;
                    auVar68 = vpermw_avx512bw(auVar72,ZEXT3264(auVar64));
                    auVar71 = vpermw_avx512bw(auVar67,ZEXT3264(auVar64));
                    do {
                      uVar6 = *puStack_d0;
                      auVar69 = ZEXT3264(CONCAT230(uVar6,CONCAT228(uVar6,CONCAT226(uVar6,CONCAT224(
                                                  uVar6,CONCAT222(uVar6,CONCAT220(uVar6,CONCAT218(
                                                  uVar6,CONCAT216(uVar6,CONCAT214(uVar6,CONCAT212(
                                                  uVar6,CONCAT210(uVar6,CONCAT28(uVar6,CONCAT26(
                                                  uVar6,CONCAT24(uVar6,CONCAT22(uVar6,uVar6)))))))))
                                                  )))))));
                      uVar44 = uVar44 + 0x10;
                      auVar70 = vpermw_avx512bw(auVar72,auVar69);
                      auVar69 = vpermw_avx512bw(auVar67,auVar69);
                      auVar70 = vmovdqu16_avx512bw(auVar70);
                      *(undefined1 (*) [64])(lVar51 + lStack_f8) = auVar70;
                      auVar70 = vmovdqu16_avx512bw(auVar69);
                      *(undefined1 (*) [64])(lVar51 + 0x40 + lStack_f8) = auVar70;
                      uVar6 = puStack_d0[1];
                      auVar69 = ZEXT3264(CONCAT230(uVar6,CONCAT228(uVar6,CONCAT226(uVar6,CONCAT224(
                                                  uVar6,CONCAT222(uVar6,CONCAT220(uVar6,CONCAT218(
                                                  uVar6,CONCAT216(uVar6,CONCAT214(uVar6,CONCAT212(
                                                  uVar6,CONCAT210(uVar6,CONCAT28(uVar6,CONCAT26(
                                                  uVar6,CONCAT24(uVar6,CONCAT22(uVar6,uVar6)))))))))
                                                  )))))));
                      auVar70 = vpermw_avx512bw(auVar72,auVar69);
                      auVar69 = vpermw_avx512bw(auVar67,auVar69);
                      auVar70 = vmovdqu16_avx512bw(auVar70);
                      *(undefined1 (*) [64])(lVar51 + 2 + lStack_f8) = auVar70;
                      auVar70 = vmovdqu16_avx512bw(auVar69);
                      *(undefined1 (*) [64])(lVar51 + 0x42 + lStack_f8) = auVar70;
                      auVar70 = vmovdqu16_avx512bw(auVar68);
                      *(undefined1 (*) [64])(lVar51 + 4 + lStack_f8) = auVar70;
                      auVar70 = vmovdqu16_avx512bw(auVar71);
                      *(undefined1 (*) [64])(lVar51 + 0x44 + lStack_f8) = auVar70;
                      lVar51 = lVar51 + 0x60;
                      uVar62 = uStack_158;
                    } while (uVar44 < uStack_158);
                  }
                  lVar51 = uVar62 * 6;
                  for (; uVar62 < uStack_178; uVar62 = uVar62 + 1) {
                    *(undefined2 *)(lVar51 + lStack_f8) = *puStack_d0;
                    *(undefined2 *)(lVar51 + 2 + lStack_f8) = puStack_d0[1];
                    *(undefined2 *)(lVar51 + 4 + lStack_f8) = uVar47;
                    lVar51 = lVar51 + 6;
                  }
                }
              }
              else if (iVar56 == 3) {
                if (0 < lStack_120) {
                  lVar51 = 1;
                  lVar61 = 0;
                  lVar46 = 0;
                  uVar44 = 0;
                  if (uStack_170 != 0) {
                    do {
                      uVar62 = uVar44;
                      uVar44 = uVar62 + 1;
                      *(undefined2 *)(lVar61 + lStack_f8) =
                           *(undefined2 *)(lVar46 + -6 + lStack_168);
                      *(undefined2 *)(lVar61 + 2 + lStack_f8) =
                           *(undefined2 *)(lVar46 + -4 + lStack_168);
                      *(undefined2 *)(lVar61 + 4 + lStack_f8) =
                           *(undefined2 *)(lVar46 + -2 + lStack_168);
                      *(undefined2 *)(lVar61 + 6 + lStack_f8) =
                           *(undefined2 *)(lVar46 + -0xc + lStack_168);
                      *(undefined2 *)(lVar61 + 8 + lStack_f8) =
                           *(undefined2 *)(lVar46 + -10 + lStack_168);
                      lVar51 = lVar46 + -8;
                      lVar46 = lVar46 + -0xc;
                      *(undefined2 *)(lVar61 + 10 + lStack_f8) =
                           *(undefined2 *)(lVar51 + lStack_168);
                      lVar61 = lVar61 + 0xc;
                    } while (uVar44 < uStack_170);
                    lVar51 = uVar62 + 2 + uVar44;
                  }
                  if (lVar51 - 1U < uStack_220) {
                    lVar46 = -(lVar51 * 6 + -6);
                    lVar51 = lVar51 * 3 + -3;
                    *(undefined2 *)(lStack_f8 + lVar51 * 2) =
                         *(undefined2 *)(lVar46 + -6 + lStack_168);
                    *(undefined2 *)(lStack_f8 + 2 + lVar51 * 2) =
                         *(undefined2 *)(lVar46 + -4 + lStack_168);
                    *(undefined2 *)(lStack_f8 + 4 + lVar51 * 2) =
                         *(undefined2 *)(lVar46 + -2 + lStack_168);
                  }
                }
              }
              else if ((iVar56 == 6) && (0 < lStack_120)) {
                if (6 < (longlong)uStack_178) {
                  lVar51 = (longlong)psVar54 + (2 - lStack_f8);
                  if ((((longlong)(uStack_178 * 6) <= lVar51) || (3 < -lVar51)) &&
                     ((1 < lStack_f8 - (longlong)psVar54 ||
                      ((longlong)(uStack_178 * 6) <= -(lStack_f8 - (longlong)psVar54))))) {
                    sVar48 = *psVar54;
                    sVar55 = psVar54[1];
                    sVar59 = psVar54[2];
                    if ((longlong)uStack_178 < 0x10) {
                      uVar44 = 0;
                    }
                    else {
                      auVar72 = vmovdqu32_avx512f(_DAT_14308e440);
                      auVar67 = vmovdqu32_avx512f(_DAT_14308e480);
                      auVar64 = vpbroadcastw_avx512vl();
                      auVar65 = vpbroadcastw_avx512vl();
                      auVar66 = vpbroadcastw_avx512vl();
                      uVar62 = 0;
                      lVar51 = 0;
                      auVar68 = vpermw_avx512bw(auVar72,ZEXT3264(auVar66));
                      auVar71 = vpermw_avx512bw(auVar67,ZEXT3264(auVar66));
                      auVar70 = vpermw_avx512bw(auVar72,ZEXT3264(auVar65));
                      auVar69 = vpermw_avx512bw(auVar67,ZEXT3264(auVar65));
                      auVar72 = vpermw_avx512bw(auVar72,ZEXT3264(auVar64));
                      auVar67 = vpermw_avx512bw(auVar67,ZEXT3264(auVar64));
                      do {
                        uVar62 = uVar62 + 0x10;
                        auVar5 = vmovdqu16_avx512bw(auVar68);
                        *(undefined1 (*) [64])(lVar51 + 4 + lStack_f8) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar71);
                        *(undefined1 (*) [64])(lVar51 + 0x44 + lStack_f8) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar70);
                        *(undefined1 (*) [64])(lVar51 + 2 + lStack_f8) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar69);
                        *(undefined1 (*) [64])(lVar51 + 0x42 + lStack_f8) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar72);
                        *(undefined1 (*) [64])(lVar51 + lStack_f8) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar67);
                        *(undefined1 (*) [64])(lVar51 + 0x40 + lStack_f8) = auVar5;
                        lVar51 = lVar51 + 0x60;
                        uVar44 = uStack_158;
                        uStack_108 = uVar58;
                      } while (uVar62 < uStack_158);
                    }
                    uVar62 = 0;
                    if (uVar44 + 1 <= uStack_178) {
                      lVar51 = lStack_f8 + uVar44 * 6;
                      uVar60 = uVar62;
                      do {
                        uVar62 = uVar62 + 1;
                        *(short *)(uVar60 + lVar51) = sVar48;
                        *(short *)(uVar60 + 2 + lVar51) = sVar55;
                        *(short *)(uVar60 + 4 + lVar51) = sVar59;
                        uVar60 = uVar60 + 6;
                      } while (uVar62 < uStack_178 - uVar44);
                    }
                    goto LAB_1409e9db6;
                  }
                }
                lVar51 = 1;
                uVar44 = 0;
                if (uStack_170 != 0) {
                  do {
                    uVar62 = uVar44;
                    *(short *)(lStack_f8 + uVar62 * 0xc) = *psVar54;
                    uVar44 = uVar62 + 1;
                    *(short *)(lStack_f8 + 2 + uVar62 * 0xc) = psVar54[1];
                    *(short *)(lStack_f8 + 4 + uVar62 * 0xc) = psVar54[2];
                    *(short *)(lStack_f8 + 6 + uVar62 * 0xc) = *psVar54;
                    *(short *)(lStack_f8 + 8 + uVar62 * 0xc) = psVar54[1];
                    *(short *)(lStack_f8 + 10 + uVar62 * 0xc) = psVar54[2];
                  } while (uVar44 < uStack_170);
                  lVar51 = uVar62 + 2 + uVar44;
                }
                if (lVar51 - 1U < uStack_220) {
                  lVar51 = lVar51 * 3 + -3;
                  *(short *)(lStack_f8 + lVar51 * 2) = *psVar54;
                  *(short *)(lStack_f8 + 2 + lVar51 * 2) = psVar54[1];
                  *(short *)(lStack_f8 + 4 + lVar51 * 2) = psVar54[2];
                }
              }
LAB_1409e9db6:
              puStack_268 = (ulonglong *)CONCAT44(puStack_268._4_4_,iStack_60);
              (*pcStack_d8)(puStack_d0,uVar49);
              uVar45 = uVar45 - uStack_68;
              lVar52 = lVar52 + lStack_120 * 2;
              uVar49 = uVar49 + lStack_120 * 4;
            }
            if (uStack_b8 == 0) {
              if ((longlong)uStack_68 < (longlong)uVar45) {
                lVar51 = uVar45 - uStack_68;
                puStack_268 = (ulonglong *)CONCAT44(puStack_268._4_4_,iStack_60);
                (*pcStack_d8)(lVar52,uVar49);
                lVar52 = lVar52 + lVar51 * 6;
                uVar49 = uVar49 + lVar51 * 0xc;
              }
              if (0 < (longlong)uVar53) {
                lVar51 = 1;
                if (uStack_f0 != 0) {
                  uVar45 = 0;
                  do {
                    uVar44 = uVar45;
                    *(undefined2 *)(lStack_f8 + uVar44 * 4) =
                         *(undefined2 *)(lStack_118 + lVar52 + uVar44 * 4);
                    *(undefined2 *)(lStack_f8 + 2 + uVar44 * 4) =
                         *(undefined2 *)(lStack_118 + lVar52 + 2 + uVar44 * 4);
                    uVar45 = uVar44 + 1;
                  } while (uVar45 < uStack_f0);
                  lVar51 = uVar44 + 2 + uVar45;
                }
                uVar45 = lVar51 - 1;
                if (uVar45 < uStack_e8) {
                  *(undefined2 *)(lStack_f8 + uVar45 * 2) =
                       *(undefined2 *)(lVar52 + lStack_118 + uVar45 * 2);
                }
              }
              if (iVar56 == 1) {
                if (0 < lStack_120) {
                  if ((longlong)uStack_178 < 7) {
                    lVar51 = 1;
                    uVar45 = 0;
                    if (uStack_170 != 0) {
                      do {
                        uVar44 = uVar45;
                        *(undefined2 *)(lStack_168 + -6 + uVar44 * 0xc) =
                             *(undefined2 *)(lStack_168 + -0xc);
                        uVar45 = uVar44 + 1;
                        *(undefined2 *)(lStack_168 + -4 + uVar44 * 0xc) =
                             *(undefined2 *)(lStack_168 + -10);
                        *(undefined2 *)(lStack_168 + -2 + uVar44 * 0xc) =
                             *(undefined2 *)(lStack_168 + -8);
                        *(undefined2 *)(lStack_168 + uVar44 * 0xc) =
                             *(undefined2 *)(lStack_168 + -0xc);
                        *(undefined2 *)(lStack_168 + 2 + uVar44 * 0xc) =
                             *(undefined2 *)(lStack_168 + -10);
                        *(undefined2 *)(lStack_168 + 4 + uVar44 * 0xc) =
                             *(undefined2 *)(lStack_168 + -8);
                      } while (uVar45 < uStack_170);
                      lVar51 = uVar44 + 2 + uVar45;
                    }
                    if (lVar51 - 1U < uStack_220) {
                      lVar51 = lVar51 * 3 + -3;
                      *(undefined2 *)(lStack_168 + -6 + lVar51 * 2) =
                           *(undefined2 *)(lStack_168 + -0xc);
                      *(undefined2 *)(lStack_168 + -4 + lVar51 * 2) =
                           *(undefined2 *)(lStack_168 + -10);
                      *(undefined2 *)(lStack_168 + -2 + lVar51 * 2) =
                           *(undefined2 *)(lStack_168 + -8);
                    }
                  }
                  else {
                    uVar47 = *(undefined2 *)(lStack_168 + -0xc);
                    uVar6 = *(undefined2 *)(lStack_168 + -10);
                    uVar7 = *(undefined2 *)(lStack_168 + -8);
                    if ((longlong)uStack_178 < 0x10) {
                      uVar45 = 0;
                    }
                    else {
                      auVar72 = vmovdqu32_avx512f(_DAT_14308e440);
                      auVar67 = vmovdqu32_avx512f(_DAT_14308e480);
                      auVar64 = vpbroadcastw_avx512vl();
                      auVar65 = vpbroadcastw_avx512vl();
                      auVar66 = vpbroadcastw_avx512vl();
                      uVar44 = 0;
                      lVar51 = 0;
                      auVar68 = vpermw_avx512bw(auVar72,ZEXT3264(auVar66));
                      auVar71 = vpermw_avx512bw(auVar67,ZEXT3264(auVar66));
                      auVar70 = vpermw_avx512bw(auVar72,ZEXT3264(auVar65));
                      auVar69 = vpermw_avx512bw(auVar67,ZEXT3264(auVar65));
                      auVar72 = vpermw_avx512bw(auVar72,ZEXT3264(auVar64));
                      auVar67 = vpermw_avx512bw(auVar67,ZEXT3264(auVar64));
                      do {
                        uVar44 = uVar44 + 0x10;
                        auVar5 = vmovdqu16_avx512bw(auVar68);
                        *(undefined1 (*) [64])(lVar51 + -2 + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar71);
                        *(undefined1 (*) [64])(lVar51 + 0x3e + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar70);
                        *(undefined1 (*) [64])(lVar51 + -4 + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar69);
                        *(undefined1 (*) [64])(lVar51 + 0x3c + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar72);
                        *(undefined1 (*) [64])(lVar51 + -6 + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar67);
                        *(undefined1 (*) [64])(lVar51 + 0x3a + lStack_168) = auVar5;
                        lVar51 = lVar51 + 0x60;
                        uVar45 = uStack_158;
                      } while (uVar44 < uStack_158);
                    }
                    uVar44 = 0;
                    lVar51 = 0;
                    if (uVar45 + 1 <= uStack_178) {
                      lVar52 = lStack_168 + uVar45 * 6;
                      do {
                        uVar44 = uVar44 + 1;
                        *(undefined2 *)(lVar51 + -6 + lVar52) = uVar47;
                        *(undefined2 *)(lVar51 + -4 + lVar52) = uVar6;
                        *(undefined2 *)(lVar51 + -2 + lVar52) = uVar7;
                        lVar51 = lVar51 + 6;
                      } while (uVar44 < uStack_178 - uVar45);
                    }
                  }
                }
              }
              else if (iVar56 == 3) {
                if (0 < lStack_120) {
                  lVar51 = 1;
                  lVar52 = 0;
                  lVar46 = 0;
                  uVar45 = 0;
                  if (uStack_170 != 0) {
                    do {
                      uVar44 = uVar45;
                      uVar45 = uVar44 + 1;
                      *(undefined2 *)(lVar52 + -6 + lStack_168) =
                           *(undefined2 *)(lVar46 + -0x12 + lStack_168);
                      *(undefined2 *)(lVar52 + -4 + lStack_168) =
                           *(undefined2 *)(lVar46 + -0x10 + lStack_168);
                      *(undefined2 *)(lVar52 + -2 + lStack_168) =
                           *(undefined2 *)(lVar46 + -0xe + lStack_168);
                      *(undefined2 *)(lVar52 + lStack_168) =
                           *(undefined2 *)(lVar46 + -0x18 + lStack_168);
                      *(undefined2 *)(lVar52 + 2 + lStack_168) =
                           *(undefined2 *)(lVar46 + -0x16 + lStack_168);
                      lVar51 = lVar46 + -0x14;
                      lVar46 = lVar46 + -0xc;
                      *(undefined2 *)(lVar52 + 4 + lStack_168) =
                           *(undefined2 *)(lVar51 + lStack_168);
                      lVar52 = lVar52 + 0xc;
                    } while (uVar45 < uStack_170);
                    lVar51 = uVar44 + 2 + uVar45;
                  }
                  if (lVar51 - 1U < uStack_220) {
                    lVar52 = -(lVar51 * 6 + -6);
                    lVar51 = lVar51 * 3 + -3;
                    *(undefined2 *)(lStack_168 + -6 + lVar51 * 2) =
                         *(undefined2 *)(lVar52 + -0x12 + lStack_168);
                    *(undefined2 *)(lStack_168 + -4 + lVar51 * 2) =
                         *(undefined2 *)(lVar52 + -0x10 + lStack_168);
                    *(undefined2 *)(lStack_168 + -2 + lVar51 * 2) =
                         *(undefined2 *)(lVar52 + -0xe + lStack_168);
                  }
                }
              }
              else if ((iVar56 == 6) && (0 < lStack_120)) {
                if (6 < (longlong)uStack_178) {
                  lVar51 = (longlong)psVar54 + (2 - (lStack_168 + -6));
                  if ((((longlong)(uStack_178 * 6) <= lVar51) || (3 < -lVar51)) &&
                     ((lVar51 = (lStack_168 + -6) - (longlong)psVar54, 1 < lVar51 ||
                      ((longlong)(uStack_178 * 6) <= -lVar51)))) {
                    sVar48 = *psVar54;
                    sVar55 = psVar54[1];
                    sVar59 = psVar54[2];
                    if ((longlong)uStack_178 < 0x10) {
                      uVar45 = 0;
                    }
                    else {
                      auVar72 = vmovdqu32_avx512f(_DAT_14308e440);
                      auVar67 = vmovdqu32_avx512f(_DAT_14308e480);
                      auVar64 = vpbroadcastw_avx512vl();
                      auVar65 = vpbroadcastw_avx512vl();
                      auVar66 = vpbroadcastw_avx512vl();
                      uVar44 = 0;
                      lVar51 = 0;
                      auVar68 = vpermw_avx512bw(auVar72,ZEXT3264(auVar66));
                      auVar71 = vpermw_avx512bw(auVar67,ZEXT3264(auVar66));
                      auVar70 = vpermw_avx512bw(auVar72,ZEXT3264(auVar65));
                      auVar69 = vpermw_avx512bw(auVar67,ZEXT3264(auVar65));
                      auVar72 = vpermw_avx512bw(auVar72,ZEXT3264(auVar64));
                      auVar67 = vpermw_avx512bw(auVar67,ZEXT3264(auVar64));
                      do {
                        uVar44 = uVar44 + 0x10;
                        auVar5 = vmovdqu16_avx512bw(auVar68);
                        *(undefined1 (*) [64])(lVar51 + -2 + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar71);
                        *(undefined1 (*) [64])(lVar51 + 0x3e + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar70);
                        *(undefined1 (*) [64])(lVar51 + -4 + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar69);
                        *(undefined1 (*) [64])(lVar51 + 0x3c + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar72);
                        *(undefined1 (*) [64])(lVar51 + -6 + lStack_168) = auVar5;
                        auVar5 = vmovdqu16_avx512bw(auVar67);
                        *(undefined1 (*) [64])(lVar51 + 0x3a + lStack_168) = auVar5;
                        lVar51 = lVar51 + 0x60;
                        uVar45 = uStack_158;
                      } while (uVar44 < uStack_158);
                    }
                    uVar44 = 0;
                    lVar51 = 0;
                    if (uVar45 + 1 <= uStack_178) {
                      lVar52 = lStack_168 + uVar45 * 6;
                      do {
                        uVar44 = uVar44 + 1;
                        *(short *)(lVar51 + -6 + lVar52) = sVar48;
                        *(short *)(lVar51 + -4 + lVar52) = sVar55;
                        *(short *)(lVar51 + -2 + lVar52) = sVar59;
                        lVar51 = lVar51 + 6;
                      } while (uVar44 < uStack_178 - uVar45);
                    }
                    goto LAB_1409ea505;
                  }
                }
                lVar51 = 1;
                uVar45 = 0;
                if (uStack_170 != 0) {
                  do {
                    uVar44 = uVar45;
                    *(short *)(lStack_168 + -6 + uVar44 * 0xc) = *psVar54;
                    uVar45 = uVar44 + 1;
                    *(short *)(lStack_168 + -4 + uVar44 * 0xc) = psVar54[1];
                    *(short *)(lStack_168 + -2 + uVar44 * 0xc) = psVar54[2];
                    *(short *)(lStack_168 + uVar44 * 0xc) = *psVar54;
                    *(short *)(lStack_168 + 2 + uVar44 * 0xc) = psVar54[1];
                    *(short *)(lStack_168 + 4 + uVar44 * 0xc) = psVar54[2];
                  } while (uVar45 < uStack_170);
                  lVar51 = uVar44 + 2 + uVar45;
                }
                if (lVar51 - 1U < uStack_220) {
                  lVar51 = lVar51 * 3 + -3;
                  *(short *)(lStack_168 + -6 + lVar51 * 2) = *psVar54;
                  *(short *)(lStack_168 + -4 + lVar51 * 2) = psVar54[1];
                  *(short *)(lStack_168 + -2 + lVar51 * 2) = psVar54[2];
                }
              }
LAB_1409ea505:
              puStack_268 = (ulonglong *)CONCAT44(puStack_268._4_4_,iStack_60);
              (*pcStack_d8)(puStack_d0,uVar49,uStack_68,uStack_c0);
            }
            else {
              puStack_268 = (ulonglong *)CONCAT44(puStack_268._4_4_,iStack_60);
              (*pcStack_d8)(lVar52,uVar49,uVar45,uStack_c0);
            }
          }
        }
        iVar57 = (int)uVar58;
        uVar58 = uVar58 + 1;
        lVar51 = (longlong)iVar57 + 1;
      } while (uVar58 < uStack_68);
LAB_1409ea75b:
      uVar53 = uStack_40;
      uStack_40 = 0;
      if ((uVar53 ^ (ulonglong)auStack_288) != DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
        FUN_142bb1d40();
      }
      return;
    }
  }
  auVar72 = _DAT_14308e2c0;
  uVar50 = param_7 & 0xf;
  if (uVar50 == 6) {
    uVar53 = 0;
    lVar51 = 0;
    auVar73._0_4_ = (float)(int)*param_8;
    auVar73._4_8_ = SUB128(ZEXT812(0),4);
    auVar73._12_4_ = 0;
    auVar74._0_4_ = (float)(int)param_8[1];
    auVar74._4_8_ = SUB128(ZEXT812(0),4);
    auVar74._12_4_ = 0;
    auVar75._0_4_ = (float)(int)param_8[2];
    auVar75._4_8_ = SUB128(ZEXT812(0),4);
    auVar75._12_4_ = 0;
    if (0 < iVar56) {
      auVar72 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar67 = vmovdqu32_avx512f(_DAT_14308e340);
      auVar68 = vbroadcastss_avx512f(auVar73);
      auVar71 = vbroadcastss_avx512f(auVar74);
      auVar70 = vbroadcastss_avx512f(auVar75);
      uVar58 = (longlong)(*param_5 * 3 + 2) / 3;
      do {
        if (0 < (longlong)(*param_5 * 3)) {
          if ((longlong)uVar58 < 0x10) {
            uVar49 = 0;
          }
          else {
            uVar45 = 0;
            auVar69 = vmovdqu32_avx512f(_DAT_14308e400);
            lVar52 = 0;
            do {
              auVar73 = auVar70._0_16_;
              uVar23 = vpcmpeqb_avx512vl(auVar73,auVar73);
              uVar49 = param_3 + lVar51 + lVar52;
              uVar21 = vpcmpeqb_avx512vl(auVar73,auVar73);
              uVar22 = vpcmpeqb_avx512vl(auVar73,auVar73);
              vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(8) + auVar69 * (undefined1  [64])0x4,
                                  uVar23,auVar70);
              vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(4) + auVar69 * (undefined1  [64])0x4,
                                  uVar21,auVar71);
              vscatterdps_avx512f(ZEXT864(uVar49) + auVar69 * (undefined1  [64])0x4,uVar22,auVar68);
              uVar45 = uVar45 + 0x10;
              lVar52 = lVar52 + 0xc0;
              uVar49 = uVar58 & 0xfffffffffffffff0;
            } while (uVar45 < (uVar58 & 0xfffffffffffffff0));
          }
          if (uVar49 + 1 <= uVar58) {
            auVar69 = vpbroadcastq_avx512f();
            lVar52 = param_3 + uVar49 * 0xc;
            vmovdqu32_avx512f(_DAT_14308e400);
            uVar23 = vpcmpgtq_avx512f(auVar69,auVar72);
            uVar21 = vpcmpgtq_avx512f(auVar69,auVar67);
            uVar63 = CONCAT11((char)uVar21,(char)uVar23);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar51 + lVar52)) +
                                auVar70 * (undefined1  [64])0x4,(ulonglong)uVar63,auVar68);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar51 + 4 + lVar52)) +
                                auVar70 * (undefined1  [64])0x4,(ulonglong)uVar63,auVar71);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar51 + 8 + lVar52)) +
                                auVar70 * (undefined1  [64])0x4,(ulonglong)uVar63,auVar70);
          }
        }
        uVar53 = uVar53 + 1;
        lVar51 = lVar51 + param_4;
      } while (uVar53 < (ulonglong)(longlong)iVar56);
    }
    if ((uStack_40 ^ (ulonglong)auStack_288) != DAT_1436b4680) goto LAB_1409e8aba;
  }
  else if (uVar50 == 1) {
    uVar53 = 0;
    if (0 < iVar56) {
      uVar49 = (ulonglong)iVar56;
      auVar67 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar68 = vmovdqu32_avx512f(_DAT_14308e340);
      lVar51 = param_4 * uVar49 + param_3;
      uVar58 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar58) {
          if ((longlong)uVar58 < 0x10) {
            uVar45 = 0;
          }
          else {
            while (0x3a < (longlong)uVar58) {
              uVar62 = param_4 * uVar53 + param_3;
              uVar44 = uVar62 & 0x3f;
              if ((uVar62 & 3) == 0) {
                if ((uVar44 != 0) &&
                   (uVar44 = 0x40 - uVar44 >> 2, (longlong)uVar58 < (longlong)uVar44)) {
                  uVar44 = uVar58;
                }
              }
              else {
                uVar44 = 0;
              }
              uVar45 = uVar58 - (uVar58 - uVar44 & 0xf);
              if (uVar44 == 0) goto LAB_1409e8e1c;
              uVar60 = 0;
              auVar69 = vpbroadcastq_avx512f();
              auVar71 = auVar68;
              auVar70 = auVar67;
              do {
                uVar23 = vpcmpgtq_avx512f(auVar69,auVar70);
                bVar25 = (byte)uVar23;
                uVar23 = vpcmpgtq_avx512f(auVar69,auVar71);
                bVar24 = (byte)uVar23;
                auVar70 = vpaddq_avx512f(auVar70,auVar72);
                auVar71 = vpaddq_avx512f(auVar71,auVar72);
                uVar63 = CONCAT11(bVar24,bVar25);
                piVar1 = (int *)(lVar51 + uVar60 * 4);
                iVar56 = piVar1[1];
                iVar57 = piVar1[2];
                iVar26 = piVar1[3];
                iVar27 = piVar1[4];
                iVar28 = piVar1[5];
                iVar29 = piVar1[6];
                iVar30 = piVar1[7];
                iVar31 = piVar1[8];
                iVar32 = piVar1[9];
                iVar33 = piVar1[10];
                iVar34 = piVar1[0xb];
                iVar35 = piVar1[0xc];
                iVar36 = piVar1[0xd];
                iVar37 = piVar1[0xe];
                iVar38 = piVar1[0xf];
                puVar2 = (uint *)(uVar62 + uVar60 * 4);
                bVar8 = (bool)((byte)(uVar63 >> 1) & 1);
                bVar9 = (bool)((byte)(uVar63 >> 2) & 1);
                bVar10 = (bool)((byte)(uVar63 >> 3) & 1);
                bVar11 = (bool)((byte)(uVar63 >> 4) & 1);
                bVar12 = (bool)((byte)(uVar63 >> 5) & 1);
                bVar13 = (bool)((byte)(uVar63 >> 6) & 1);
                bVar14 = (bool)((byte)(uVar63 >> 7) & 1);
                bVar15 = (bool)(bVar24 >> 1 & 1);
                bVar16 = (bool)(bVar24 >> 2 & 1);
                bVar17 = (bool)(bVar24 >> 3 & 1);
                bVar18 = (bool)(bVar24 >> 4 & 1);
                bVar19 = (bool)(bVar24 >> 5 & 1);
                bVar20 = (bool)(bVar24 >> 6 & 1);
                *puVar2 = (uint)(bVar25 & 1) * (uint)(bVar25 & 1) * *piVar1 |
                          (uint)!(bool)(bVar25 & 1) * *puVar2;
                puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar63 >> 1) & 1) * iVar56 |
                            (uint)!bVar8 * puVar2[1];
                puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar63 >> 2) & 1) * iVar57 |
                            (uint)!bVar9 * puVar2[2];
                puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar63 >> 3) & 1) * iVar26 |
                            (uint)!bVar10 * puVar2[3];
                puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar63 >> 4) & 1) * iVar27 |
                            (uint)!bVar11 * puVar2[4];
                puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar63 >> 5) & 1) * iVar28 |
                            (uint)!bVar12 * puVar2[5];
                puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar63 >> 6) & 1) * iVar29 |
                            (uint)!bVar13 * puVar2[6];
                puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar63 >> 7) & 1) * iVar30 |
                            (uint)!bVar14 * puVar2[7];
                puVar2[8] = (uint)(bVar24 & 1) * (uint)(bVar24 & 1) * iVar31 |
                            (uint)!(bool)(bVar24 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar15 * (uint)(bVar24 >> 1 & 1) * iVar32 |
                            (uint)!bVar15 * puVar2[9];
                puVar2[10] = (uint)bVar16 * (uint)(bVar24 >> 2 & 1) * iVar33 |
                             (uint)!bVar16 * puVar2[10];
                puVar2[0xb] = (uint)bVar17 * (uint)(bVar24 >> 3 & 1) * iVar34 |
                              (uint)!bVar17 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar18 * (uint)(bVar24 >> 4 & 1) * iVar35 |
                              (uint)!bVar18 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar19 * (uint)(bVar24 >> 5 & 1) * iVar36 |
                              (uint)!bVar19 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar20 * (uint)(bVar24 >> 6 & 1) * iVar37 |
                              (uint)!bVar20 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar24 >> 7) * (uint)(bVar24 >> 7) * iVar38 |
                              (uint)!(bool)(bVar24 >> 7) * puVar2[0xf];
                uVar60 = uVar60 + 0x10;
              } while (uVar60 < uVar44);
              if (uVar58 != uVar44) goto LAB_1409e8e1c;
              uVar53 = uVar53 + 1;
              if (uVar49 <= uVar53) goto LAB_1409e8ea0;
            }
            uVar44 = 0;
            uVar45 = uVar58 & 0xfffffffffffffff0;
LAB_1409e8e1c:
            if ((longlong)(uVar44 + 0x10) <= (longlong)uVar45) {
              do {
                puVar3 = (undefined8 *)(lVar51 + uVar44 * 4);
                uVar23 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                uVar40 = puVar3[4];
                uVar41 = puVar3[5];
                uVar42 = puVar3[6];
                uVar43 = puVar3[7];
                puVar4 = (undefined8 *)(param_4 * uVar53 + param_3 + uVar44 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar23;
                puVar4[2] = uVar21;
                puVar4[3] = uVar22;
                puVar4[4] = uVar40;
                puVar4[5] = uVar41;
                puVar4[6] = uVar42;
                puVar4[7] = uVar43;
                uVar44 = uVar44 + 0x10;
              } while (uVar44 < uVar45);
            }
          }
          if (uVar45 + 1 <= uVar58) {
            auVar71 = vpbroadcastq_avx512f();
            uVar23 = vpcmpgtq_avx512f(auVar71,auVar67);
            bVar25 = (byte)uVar23;
            uVar23 = vpcmpgtq_avx512f(auVar71,auVar68);
            bVar24 = (byte)uVar23;
            uVar63 = CONCAT11(bVar24,bVar25);
            piVar1 = (int *)(lVar51 + uVar45 * 4);
            iVar56 = piVar1[1];
            iVar57 = piVar1[2];
            iVar26 = piVar1[3];
            iVar27 = piVar1[4];
            iVar28 = piVar1[5];
            iVar29 = piVar1[6];
            iVar30 = piVar1[7];
            iVar31 = piVar1[8];
            iVar32 = piVar1[9];
            iVar33 = piVar1[10];
            iVar34 = piVar1[0xb];
            iVar35 = piVar1[0xc];
            iVar36 = piVar1[0xd];
            iVar37 = piVar1[0xe];
            iVar38 = piVar1[0xf];
            puVar2 = (uint *)(param_4 * uVar53 + param_3 + uVar45 * 4);
            bVar8 = (bool)((byte)(uVar63 >> 1) & 1);
            bVar9 = (bool)((byte)(uVar63 >> 2) & 1);
            bVar10 = (bool)((byte)(uVar63 >> 3) & 1);
            bVar11 = (bool)((byte)(uVar63 >> 4) & 1);
            bVar12 = (bool)((byte)(uVar63 >> 5) & 1);
            bVar13 = (bool)((byte)(uVar63 >> 6) & 1);
            bVar14 = (bool)((byte)(uVar63 >> 7) & 1);
            bVar15 = (bool)(bVar24 >> 1 & 1);
            bVar16 = (bool)(bVar24 >> 2 & 1);
            bVar17 = (bool)(bVar24 >> 3 & 1);
            bVar18 = (bool)(bVar24 >> 4 & 1);
            bVar19 = (bool)(bVar24 >> 5 & 1);
            bVar20 = (bool)(bVar24 >> 6 & 1);
            *puVar2 = (uint)(bVar25 & 1) * (uint)(bVar25 & 1) * *piVar1 |
                      (uint)!(bool)(bVar25 & 1) * *puVar2;
            puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar63 >> 1) & 1) * iVar56 |
                        (uint)!bVar8 * puVar2[1];
            puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar63 >> 2) & 1) * iVar57 |
                        (uint)!bVar9 * puVar2[2];
            puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar63 >> 3) & 1) * iVar26 |
                        (uint)!bVar10 * puVar2[3];
            puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar63 >> 4) & 1) * iVar27 |
                        (uint)!bVar11 * puVar2[4];
            puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar63 >> 5) & 1) * iVar28 |
                        (uint)!bVar12 * puVar2[5];
            puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar63 >> 6) & 1) * iVar29 |
                        (uint)!bVar13 * puVar2[6];
            puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar63 >> 7) & 1) * iVar30 |
                        (uint)!bVar14 * puVar2[7];
            puVar2[8] = (uint)(bVar24 & 1) * (uint)(bVar24 & 1) * iVar31 |
                        (uint)!(bool)(bVar24 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar15 * (uint)(bVar24 >> 1 & 1) * iVar32 | (uint)!bVar15 * puVar2[9];
            puVar2[10] = (uint)bVar16 * (uint)(bVar24 >> 2 & 1) * iVar33 |
                         (uint)!bVar16 * puVar2[10];
            puVar2[0xb] = (uint)bVar17 * (uint)(bVar24 >> 3 & 1) * iVar34 |
                          (uint)!bVar17 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar18 * (uint)(bVar24 >> 4 & 1) * iVar35 |
                          (uint)!bVar18 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar19 * (uint)(bVar24 >> 5 & 1) * iVar36 |
                          (uint)!bVar19 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar20 * (uint)(bVar24 >> 6 & 1) * iVar37 |
                          (uint)!bVar20 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar24 >> 7) * (uint)(bVar24 >> 7) * iVar38 |
                          (uint)!(bool)(bVar24 >> 7) * puVar2[0xf];
          }
        }
        uVar53 = uVar53 + 1;
      } while (uVar53 < uVar49);
    }
LAB_1409e8ea0:
    if ((uStack_40 ^ (ulonglong)auStack_288) != DAT_1436b4680) goto LAB_1409e8aba;
  }
  else {
    if (uVar50 == 3) {
      puStack_268 = &uStack_228;
      uStack_228 = *param_5;
      uStack_220 = param_5[1];
      uStack_258 = param_7;
      psStack_250 = param_8;
      uStack_248 = param_9;
      lStack_238 = param_11;
      iStack_260 = param_6;
      iStack_240 = param_10;
      FUN_140a00200(param_1,lStack_58,(longlong)iVar56,param_3);
      auVar72 = _DAT_14308e2c0;
      lVar51 = 1;
      uVar53 = 0;
      if (1 < iVar56) {
        auVar67 = vmovdqu32_avx512f(_DAT_14308e300);
        auVar68 = vmovdqu32_avx512f(_DAT_14308e340);
        lVar52 = ((longlong)param_10 + -1) * param_4 + param_3;
        uVar58 = *param_5 * 3;
        do {
          if (0 < (longlong)uVar58) {
            if ((longlong)uVar58 < 0x10) {
              uVar49 = 0;
            }
            else {
              while (0x3a < (longlong)uVar58) {
                uVar45 = param_3 + param_4 * lVar51;
                uVar44 = uVar45 & 0x3f;
                if ((uVar45 & 3) == 0) {
                  if ((uVar44 != 0) &&
                     (uVar44 = 0x40 - uVar44 >> 2, (longlong)uVar58 < (longlong)uVar44)) {
                    uVar44 = uVar58;
                  }
                }
                else {
                  uVar44 = 0;
                }
                uVar49 = uVar58 - (uVar58 - uVar44 & 0xf);
                if (uVar44 == 0) goto LAB_1409e8c3c;
                uVar62 = 0;
                auVar69 = vpbroadcastq_avx512f();
                auVar71 = auVar68;
                auVar70 = auVar67;
                do {
                  uVar23 = vpcmpgtq_avx512f(auVar69,auVar70);
                  bVar25 = (byte)uVar23;
                  uVar23 = vpcmpgtq_avx512f(auVar69,auVar71);
                  bVar24 = (byte)uVar23;
                  auVar70 = vpaddq_avx512f(auVar70,auVar72);
                  auVar71 = vpaddq_avx512f(auVar71,auVar72);
                  uVar63 = CONCAT11(bVar24,bVar25);
                  piVar1 = (int *)((lVar52 - param_4 * lVar51) + uVar62 * 4);
                  iVar57 = piVar1[1];
                  iVar26 = piVar1[2];
                  iVar27 = piVar1[3];
                  iVar28 = piVar1[4];
                  iVar29 = piVar1[5];
                  iVar30 = piVar1[6];
                  iVar31 = piVar1[7];
                  iVar32 = piVar1[8];
                  iVar33 = piVar1[9];
                  iVar34 = piVar1[10];
                  iVar35 = piVar1[0xb];
                  iVar36 = piVar1[0xc];
                  iVar37 = piVar1[0xd];
                  iVar38 = piVar1[0xe];
                  iVar39 = piVar1[0xf];
                  puVar2 = (uint *)(uVar45 + uVar62 * 4);
                  bVar8 = (bool)((byte)(uVar63 >> 1) & 1);
                  bVar9 = (bool)((byte)(uVar63 >> 2) & 1);
                  bVar10 = (bool)((byte)(uVar63 >> 3) & 1);
                  bVar11 = (bool)((byte)(uVar63 >> 4) & 1);
                  bVar12 = (bool)((byte)(uVar63 >> 5) & 1);
                  bVar13 = (bool)((byte)(uVar63 >> 6) & 1);
                  bVar14 = (bool)((byte)(uVar63 >> 7) & 1);
                  bVar15 = (bool)(bVar24 >> 1 & 1);
                  bVar16 = (bool)(bVar24 >> 2 & 1);
                  bVar17 = (bool)(bVar24 >> 3 & 1);
                  bVar18 = (bool)(bVar24 >> 4 & 1);
                  bVar19 = (bool)(bVar24 >> 5 & 1);
                  bVar20 = (bool)(bVar24 >> 6 & 1);
                  *puVar2 = (uint)(bVar25 & 1) * (uint)(bVar25 & 1) * *piVar1 |
                            (uint)!(bool)(bVar25 & 1) * *puVar2;
                  puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar63 >> 1) & 1) * iVar57 |
                              (uint)!bVar8 * puVar2[1];
                  puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar63 >> 2) & 1) * iVar26 |
                              (uint)!bVar9 * puVar2[2];
                  puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar63 >> 3) & 1) * iVar27 |
                              (uint)!bVar10 * puVar2[3];
                  puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar63 >> 4) & 1) * iVar28 |
                              (uint)!bVar11 * puVar2[4];
                  puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar63 >> 5) & 1) * iVar29 |
                              (uint)!bVar12 * puVar2[5];
                  puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar63 >> 6) & 1) * iVar30 |
                              (uint)!bVar13 * puVar2[6];
                  puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar63 >> 7) & 1) * iVar31 |
                              (uint)!bVar14 * puVar2[7];
                  puVar2[8] = (uint)(bVar24 & 1) * (uint)(bVar24 & 1) * iVar32 |
                              (uint)!(bool)(bVar24 & 1) * puVar2[8];
                  puVar2[9] = (uint)bVar15 * (uint)(bVar24 >> 1 & 1) * iVar33 |
                              (uint)!bVar15 * puVar2[9];
                  puVar2[10] = (uint)bVar16 * (uint)(bVar24 >> 2 & 1) * iVar34 |
                               (uint)!bVar16 * puVar2[10];
                  puVar2[0xb] = (uint)bVar17 * (uint)(bVar24 >> 3 & 1) * iVar35 |
                                (uint)!bVar17 * puVar2[0xb];
                  puVar2[0xc] = (uint)bVar18 * (uint)(bVar24 >> 4 & 1) * iVar36 |
                                (uint)!bVar18 * puVar2[0xc];
                  puVar2[0xd] = (uint)bVar19 * (uint)(bVar24 >> 5 & 1) * iVar37 |
                                (uint)!bVar19 * puVar2[0xd];
                  puVar2[0xe] = (uint)bVar20 * (uint)(bVar24 >> 6 & 1) * iVar38 |
                                (uint)!bVar20 * puVar2[0xe];
                  puVar2[0xf] = (uint)(bVar24 >> 7) * (uint)(bVar24 >> 7) * iVar39 |
                                (uint)!(bool)(bVar24 >> 7) * puVar2[0xf];
                  uVar62 = uVar62 + 0x10;
                } while (uVar62 < uVar44);
                if (uVar58 != uVar44) goto LAB_1409e8c3c;
                lVar51 = uVar53 + 2;
                uVar53 = uVar53 + 1;
                if ((ulonglong)(longlong)(iVar56 + -1) <= uVar53) goto LAB_1409e8a85;
              }
              uVar44 = 0;
              uVar49 = uVar58 & 0xfffffffffffffff0;
LAB_1409e8c3c:
              if ((longlong)(uVar44 + 0x10) <= (longlong)uVar49) {
                do {
                  puVar3 = (undefined8 *)((lVar52 - param_4 * lVar51) + uVar44 * 4);
                  uVar23 = puVar3[1];
                  uVar21 = puVar3[2];
                  uVar22 = puVar3[3];
                  uVar40 = puVar3[4];
                  uVar41 = puVar3[5];
                  uVar42 = puVar3[6];
                  uVar43 = puVar3[7];
                  puVar4 = (undefined8 *)(param_3 + param_4 * lVar51 + uVar44 * 4);
                  *puVar4 = *puVar3;
                  puVar4[1] = uVar23;
                  puVar4[2] = uVar21;
                  puVar4[3] = uVar22;
                  puVar4[4] = uVar40;
                  puVar4[5] = uVar41;
                  puVar4[6] = uVar42;
                  puVar4[7] = uVar43;
                  uVar44 = uVar44 + 0x10;
                } while (uVar44 < uVar49);
              }
            }
            if (uVar49 + 1 <= uVar58) {
              auVar71 = vpbroadcastq_avx512f();
              uVar23 = vpcmpgtq_avx512f(auVar71,auVar67);
              bVar25 = (byte)uVar23;
              uVar23 = vpcmpgtq_avx512f(auVar71,auVar68);
              bVar24 = (byte)uVar23;
              uVar63 = CONCAT11(bVar24,bVar25);
              piVar1 = (int *)((lVar52 - lVar51 * param_4) + uVar49 * 4);
              iVar57 = piVar1[1];
              iVar26 = piVar1[2];
              iVar27 = piVar1[3];
              iVar28 = piVar1[4];
              iVar29 = piVar1[5];
              iVar30 = piVar1[6];
              iVar31 = piVar1[7];
              iVar32 = piVar1[8];
              iVar33 = piVar1[9];
              iVar34 = piVar1[10];
              iVar35 = piVar1[0xb];
              iVar36 = piVar1[0xc];
              iVar37 = piVar1[0xd];
              iVar38 = piVar1[0xe];
              iVar39 = piVar1[0xf];
              puVar2 = (uint *)(lVar51 * param_4 + param_3 + uVar49 * 4);
              bVar8 = (bool)((byte)(uVar63 >> 1) & 1);
              bVar9 = (bool)((byte)(uVar63 >> 2) & 1);
              bVar10 = (bool)((byte)(uVar63 >> 3) & 1);
              bVar11 = (bool)((byte)(uVar63 >> 4) & 1);
              bVar12 = (bool)((byte)(uVar63 >> 5) & 1);
              bVar13 = (bool)((byte)(uVar63 >> 6) & 1);
              bVar14 = (bool)((byte)(uVar63 >> 7) & 1);
              bVar15 = (bool)(bVar24 >> 1 & 1);
              bVar16 = (bool)(bVar24 >> 2 & 1);
              bVar17 = (bool)(bVar24 >> 3 & 1);
              bVar18 = (bool)(bVar24 >> 4 & 1);
              bVar19 = (bool)(bVar24 >> 5 & 1);
              bVar20 = (bool)(bVar24 >> 6 & 1);
              *puVar2 = (uint)(bVar25 & 1) * (uint)(bVar25 & 1) * *piVar1 |
                        (uint)!(bool)(bVar25 & 1) * *puVar2;
              puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar63 >> 1) & 1) * iVar57 |
                          (uint)!bVar8 * puVar2[1];
              puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar63 >> 2) & 1) * iVar26 |
                          (uint)!bVar9 * puVar2[2];
              puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar63 >> 3) & 1) * iVar27 |
                          (uint)!bVar10 * puVar2[3];
              puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar63 >> 4) & 1) * iVar28 |
                          (uint)!bVar11 * puVar2[4];
              puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar63 >> 5) & 1) * iVar29 |
                          (uint)!bVar12 * puVar2[5];
              puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar63 >> 6) & 1) * iVar30 |
                          (uint)!bVar13 * puVar2[6];
              puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar63 >> 7) & 1) * iVar31 |
                          (uint)!bVar14 * puVar2[7];
              puVar2[8] = (uint)(bVar24 & 1) * (uint)(bVar24 & 1) * iVar32 |
                          (uint)!(bool)(bVar24 & 1) * puVar2[8];
              puVar2[9] = (uint)bVar15 * (uint)(bVar24 >> 1 & 1) * iVar33 |
                          (uint)!bVar15 * puVar2[9];
              puVar2[10] = (uint)bVar16 * (uint)(bVar24 >> 2 & 1) * iVar34 |
                           (uint)!bVar16 * puVar2[10];
              puVar2[0xb] = (uint)bVar17 * (uint)(bVar24 >> 3 & 1) * iVar35 |
                            (uint)!bVar17 * puVar2[0xb];
              puVar2[0xc] = (uint)bVar18 * (uint)(bVar24 >> 4 & 1) * iVar36 |
                            (uint)!bVar18 * puVar2[0xc];
              puVar2[0xd] = (uint)bVar19 * (uint)(bVar24 >> 5 & 1) * iVar37 |
                            (uint)!bVar19 * puVar2[0xd];
              puVar2[0xe] = (uint)bVar20 * (uint)(bVar24 >> 6 & 1) * iVar38 |
                            (uint)!bVar20 * puVar2[0xe];
              puVar2[0xf] = (uint)(bVar24 >> 7) * (uint)(bVar24 >> 7) * iVar39 |
                            (uint)!(bool)(bVar24 >> 7) * puVar2[0xf];
            }
          }
          lVar51 = uVar53 + 2;
          uVar53 = uVar53 + 1;
        } while (uVar53 < (ulonglong)(longlong)(iVar56 + -1));
      }
    }
LAB_1409e8a85:
    if ((uStack_40 ^ (ulonglong)auStack_288) != DAT_1436b4680) {
LAB_1409e8aba:
      uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
  }
  return;
}

