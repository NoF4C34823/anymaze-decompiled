
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409df080(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
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
  int iVar23;
  int iVar24;
  int iVar25;
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
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  byte bVar46;
  int iVar47;
  int iVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  byte bVar52;
  ulonglong uVar53;
  uint uVar54;
  ulonglong uVar55;
  byte bVar56;
  longlong lVar57;
  byte *pbVar58;
  ushort uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined4 uVar77;
  undefined8 uVar75;
  ulonglong *puVar76;
  ulonglong uStack_228;
  ulonglong uStack_220;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  uint uStack_f8;
  ulonglong uStack_f0;
  longlong lStack_e8;
  uint uStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  longlong lStack_b0;
  byte *pbStack_a8;
  ulonglong *puStack_a0;
  uint uStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  byte abStack_80 [8];
  ulonglong uStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  int iStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  iVar47 = param_10 >> 1;
  lVar45 = 0;
  lStack_50 = param_2;
  if (iVar47 < 1) {
    uStack_220._0_4_ = param_6;
    if ((param_7 & 0x10) != 0) {
      return;
    }
  }
  else {
    uStack_60 = (ulonglong)iVar47;
    lVar57 = param_4 * uStack_60 + param_3;
    uStack_228 = CONCAT44(uStack_228._4_4_,iVar47);
    iStack_58 = param_10;
    uStack_220 = CONCAT44(uStack_220._4_4_,param_6);
    lStack_88 = param_3;
    lStack_68 = param_1;
    lStack_48 = param_4;
    do {
      puVar76 = &uStack_78;
      uStack_78 = *param_5;
      uStack_70 = param_5[1];
      FUN_1409b07e0(lStack_68,lStack_50,lVar45,lVar57,puVar76,(int)uStack_220,param_7,param_8,
                    param_9,iStack_58,param_11);
      lVar45 = lVar45 + 1;
      lVar57 = lVar57 + lStack_48;
    } while (lVar45 < (longlong)uStack_60);
    param_3 = lStack_88;
    param_4 = lStack_48;
    iVar47 = (int)uStack_228;
    param_10 = iStack_58;
    if ((param_7 & 0x10) != 0) {
      uStack_c0 = param_9;
      pcStack_d8 = (code *)(&PTR_LAB_14308e520)[(int)uStack_220];
      lStack_138 = 0;
      uStack_f0 = 0;
      uStack_140 = CONCAT44(uStack_140._4_4_,param_7) & 0xffffffff0000000f;
      lStack_b0 = (longlong)iStack_58 + -1;
      lStack_158 = (longlong)iStack_58 * 3;
      lStack_68 = lStack_68 - lStack_50 * uStack_60;
      uStack_160 = lStack_158 - 1;
      uVar50 = lStack_158 - 3;
      lStack_150 = param_11 + lStack_158;
      uStack_98 = param_7 & 0xf0;
      lStack_c8 = -uStack_60;
      lStack_108 = uStack_60 * 3;
      uStack_110 = uStack_160 / 3;
      uStack_148 = lStack_108 + 2;
      uStack_168 = (longlong)uStack_148 / 3;
      vmovdqu32_avx512f(_DAT_14308e300);
      uStack_170 = uStack_148 / 3;
      uStack_b8 = param_7 & 0x80;
      uStack_148 = uStack_148 / 6;
      puStack_d0 = (undefined1 *)(param_11 + lStack_108);
      uStack_e0 = param_7 & 0x40;
      uStack_220 = uStack_60 * -3;
      uStack_178 = uStack_168 & 0xffffffffffffffc0;
      uStack_120 = (longlong)(iStack_58 * 3) - 3;
      uStack_130 = (ulonglong)puStack_d0 & 0x3f;
      uStack_118 = ((longlong)(iStack_58 * 3) - 1U) / 6;
      uStack_90 = 0x40 - uStack_130;
      uStack_228 = uVar50 & 0xffffffffffffffc0;
      uStack_128 = uStack_120 >> 1;
      uStack_f8 = param_7;
      puStack_a0 = param_5;
      vmovdqu32_avx512f(_DAT_14308e340);
      iVar47 = (int)uStack_140;
      uVar49 = 0;
      lVar45 = 0;
      pbStack_a8 = param_8;
      uStack_100 = uVar50;
      do {
        auVar74 = _DAT_14308e2c0;
        abStack_80[0] = 0;
        abStack_80[1] = 0;
        abStack_80[2] = 0;
        lVar57 = lStack_48 * uVar49 + lStack_88;
        uVar43 = lStack_50 * uVar49 + lStack_68;
        uVar77 = (undefined4)((ulonglong)puVar76 >> 0x20);
        if (uStack_98 == 0xf0) {
          puVar76 = (ulonglong *)CONCAT44(uVar77,iStack_58);
          (*pcStack_d8)(uVar43,lVar57,*puStack_a0,uStack_c0,puVar76);
        }
        else {
          pbVar58 = abStack_80;
          if (iVar47 == 6) {
            pbVar58 = pbStack_a8;
          }
          uVar42 = *puStack_a0;
          if ((longlong)uVar42 < lStack_b0) {
            uVar41 = 0;
            lVar44 = 0;
            lVar45 = -uStack_60;
            if (lStack_c8 < (longlong)(uStack_60 + uVar42)) {
              lStack_e8 = uVar42 - 1;
              do {
                lVar51 = lVar45;
                if (lVar45 < 0) {
                  if (uStack_f8 != 0xf0) {
                    if (iVar47 == 6) {
                      if (uStack_e0 == 0) goto LAB_1409e1694;
                    }
                    else {
                      if (iVar47 != 1) goto LAB_1409e160c;
LAB_1409e17d7:
                      lVar51 = 0;
                      if (uStack_e0 != 0) {
                        lVar51 = lVar45;
                      }
                    }
                  }
LAB_1409e167c:
                  lVar51 = lVar51 * 3;
                  bVar46 = *(byte *)(lVar51 + uVar43);
                  bVar56 = *(byte *)(lVar51 + 1 + uVar43);
                  bVar52 = *(byte *)(lVar51 + 2 + uVar43);
                }
                else {
                  if ((lVar45 < (longlong)uVar42) || (uStack_f8 == 0xf0)) goto LAB_1409e167c;
                  if (iVar47 != 6) {
                    if (iVar47 == 1) {
                      if (lVar45 < 0) goto LAB_1409e17d7;
                      if (uStack_b8 == 0) {
                        lVar51 = lStack_e8;
                      }
                    }
                    else {
LAB_1409e160c:
                      if (iVar47 == 3) {
                        if ((longlong)uVar42 < 2) {
                          if (lVar45 < 0) {
                            if (uStack_e0 == 0) {
                              lVar51 = -lVar45;
                              if (uStack_b8 == 0) {
                                lVar51 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar45) && (uStack_b8 == 0)) &&
                                  (lVar51 = -lVar45, uStack_e0 == 0)) {
                            lVar51 = 0;
                          }
                        }
                        else {
                          if (lVar45 < 0) goto LAB_1409e1800;
                          if ((longlong)uVar42 <= lVar45) {
                            while (uStack_b8 == 0) {
                              for (lVar51 = lStack_e8 * 2 - lVar51; lVar51 < 0; lVar51 = -lVar51) {
LAB_1409e1800:
                                if (uStack_e0 != 0) goto LAB_1409e167c;
                              }
                              if (lVar51 < (longlong)uVar42) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1409e167c;
                  }
                  if (uStack_b8 != 0) goto LAB_1409e167c;
LAB_1409e1694:
                  bVar46 = *pbVar58;
                  bVar56 = pbVar58[1];
                  bVar52 = pbVar58[2];
                }
                uVar41 = uVar41 + 1;
                lVar45 = lVar45 + 1;
                *(byte *)(lVar44 + param_11) = bVar46;
                *(byte *)(lVar44 + 1 + param_11) = bVar56;
                *(byte *)(lVar44 + 2 + param_11) = bVar52;
                lVar44 = lVar44 + 3;
                uVar50 = uStack_100;
                lStack_138 = lVar57;
                uStack_f0 = uVar49;
              } while (uVar41 < uVar42 + uStack_60 * 2);
            }
            puVar76 = (ulonglong *)CONCAT44(uVar77,iStack_58);
            (*pcStack_d8)(puStack_d0,lVar57,uVar42,uStack_c0,puVar76);
          }
          else {
            if (uStack_e0 == 0) {
              if (0 < (longlong)uVar50) {
                if (6 < (longlong)uVar50) {
                  lVar44 = lStack_50 * lVar45 + lStack_68;
                  if ((lStack_158 + -3 <= (longlong)puStack_d0 - lVar44) ||
                     (lStack_158 + -3 <= -((longlong)puStack_d0 - lVar44))) {
                    if ((longlong)uVar50 < 0x40) {
                      uVar41 = 0;
                    }
                    else {
                      if ((longlong)uVar50 < 0x116) {
                        uVar55 = 0;
                        uVar41 = uStack_228;
                      }
                      else {
                        uVar55 = uStack_130;
                        if ((uStack_130 != 0) &&
                           (uVar55 = uStack_90, (longlong)uVar50 < (longlong)uStack_90)) {
                          uVar55 = uVar50;
                        }
                        uVar41 = uVar50 - (uVar50 - uVar55 & 0x3f);
                        if (uVar55 != 0) {
                          auVar69 = vmovdqu32_avx512f(_DAT_14308e300);
                          uVar53 = 0;
                          auVar70 = vmovdqu32_avx512f(_DAT_14308e340);
                          auVar73 = vpbroadcastq_avx512f();
                          do {
                            uVar75 = vpcmpgtq_avx512f(auVar73,auVar69);
                            uVar21 = vpcmpgtq_avx512f(auVar73,auVar70);
                            bVar46 = (byte)uVar21;
                            auVar69 = vpaddq_avx512f(auVar69,auVar74);
                            auVar70 = vpaddq_avx512f(auVar70,auVar74);
                            uVar59 = CONCAT11(bVar46,(byte)uVar75);
                            auVar60 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar53 + lVar44));
                            auVar61[1] = ((byte)(uVar59 >> 1) & 1) * auVar60[1];
                            auVar61[0] = ((byte)uVar75 & 1) * auVar60[0];
                            auVar61[2] = ((byte)(uVar59 >> 2) & 1) * auVar60[2];
                            auVar61[3] = ((byte)(uVar59 >> 3) & 1) * auVar60[3];
                            auVar61[4] = ((byte)(uVar59 >> 4) & 1) * auVar60[4];
                            auVar61[5] = ((byte)(uVar59 >> 5) & 1) * auVar60[5];
                            auVar61[6] = ((byte)(uVar59 >> 6) & 1) * auVar60[6];
                            auVar61[7] = ((byte)(uVar59 >> 7) & 1) * auVar60[7];
                            auVar61[8] = (bVar46 & 1) * auVar60[8];
                            auVar61[9] = (bVar46 >> 1 & 1) * auVar60[9];
                            auVar61[10] = (bVar46 >> 2 & 1) * auVar60[10];
                            auVar61[0xb] = (bVar46 >> 3 & 1) * auVar60[0xb];
                            auVar61[0xc] = (bVar46 >> 4 & 1) * auVar60[0xc];
                            auVar61[0xd] = (bVar46 >> 5 & 1) * auVar60[0xd];
                            auVar61[0xe] = (bVar46 >> 6 & 1) * auVar60[0xe];
                            auVar61[0xf] = -((char)bVar46 >> 7) * auVar60[0xf];
                            auVar60 = vmovdqu8_avx512vl(auVar61);
                            *(undefined1 (*) [16])(puStack_d0 + uVar53) = auVar60;
                            uVar53 = uVar53 + 0x10;
                          } while (uVar53 < uVar55);
                          if (uVar50 == uVar55) goto LAB_1409dfd6d;
                        }
                      }
                      if ((longlong)(uVar55 + 0x40) <= (longlong)uVar41) {
                        do {
                          auVar74 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar55 + lVar44));
                          *(undefined1 (*) [64])(puStack_d0 + uVar55) = auVar74;
                          uVar55 = uVar55 + 0x40;
                        } while (uVar55 < uVar41);
                      }
                    }
                    auVar74 = _DAT_14308e2c0;
                    if (uVar41 + 1 <= uVar50) {
                      auVar69 = vmovdqu32_avx512f(_DAT_14308e300);
                      uVar55 = 0;
                      auVar70 = vmovdqu32_avx512f(_DAT_14308e340);
                      auVar73 = vpbroadcastq_avx512f();
                      do {
                        uVar75 = vpcmpgtq_avx512f(auVar73,auVar69);
                        uVar21 = vpcmpgtq_avx512f(auVar73,auVar70);
                        bVar46 = (byte)uVar21;
                        auVar69 = vpaddq_avx512f(auVar69,auVar74);
                        auVar70 = vpaddq_avx512f(auVar70,auVar74);
                        uVar59 = CONCAT11(bVar46,(byte)uVar75);
                        auVar60 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar55 + lVar44 + uVar41)
                                                   );
                        auVar62[1] = ((byte)(uVar59 >> 1) & 1) * auVar60[1];
                        auVar62[0] = ((byte)uVar75 & 1) * auVar60[0];
                        auVar62[2] = ((byte)(uVar59 >> 2) & 1) * auVar60[2];
                        auVar62[3] = ((byte)(uVar59 >> 3) & 1) * auVar60[3];
                        auVar62[4] = ((byte)(uVar59 >> 4) & 1) * auVar60[4];
                        auVar62[5] = ((byte)(uVar59 >> 5) & 1) * auVar60[5];
                        auVar62[6] = ((byte)(uVar59 >> 6) & 1) * auVar60[6];
                        auVar62[7] = ((byte)(uVar59 >> 7) & 1) * auVar60[7];
                        auVar62[8] = (bVar46 & 1) * auVar60[8];
                        auVar62[9] = (bVar46 >> 1 & 1) * auVar60[9];
                        auVar62[10] = (bVar46 >> 2 & 1) * auVar60[10];
                        auVar62[0xb] = (bVar46 >> 3 & 1) * auVar60[0xb];
                        auVar62[0xc] = (bVar46 >> 4 & 1) * auVar60[0xc];
                        auVar62[0xd] = (bVar46 >> 5 & 1) * auVar60[0xd];
                        auVar62[0xe] = (bVar46 >> 6 & 1) * auVar60[0xe];
                        auVar62[0xf] = -((char)bVar46 >> 7) * auVar60[0xf];
                        auVar60 = vmovdqu8_avx512vl(auVar62);
                        *(undefined1 (*) [16])(puStack_d0 + uVar55 + uVar41) = auVar60;
                        uVar55 = uVar55 + 0x10;
                      } while (uVar55 < uVar50 - uVar41);
                    }
                    goto LAB_1409dfd6d;
                  }
                }
                lVar44 = 1;
                if (uStack_128 != 0) {
                  lVar44 = lStack_50 * lVar45 + lStack_68;
                  uVar41 = 0;
                  do {
                    uVar55 = uVar41;
                    puStack_d0[uVar55 * 2] = *(undefined1 *)(lVar44 + uVar55 * 2);
                    puStack_d0[uVar55 * 2 + 1] = *(undefined1 *)(lVar44 + 1 + uVar55 * 2);
                    uVar41 = uVar55 + 1;
                  } while (uVar41 < uStack_128);
                  lVar44 = uVar55 + 2 + uVar41;
                }
                uVar41 = lVar44 - 1;
                if (uVar41 < uStack_120) {
                  puStack_d0[uVar41] = *(undefined1 *)(uVar41 + lVar45 * lStack_50 + lStack_68);
                }
              }
LAB_1409dfd6d:
              if (iVar47 == 1) {
                if (0 < lStack_108) {
                  lVar45 = 1;
                  uVar41 = 0;
                  if (uStack_148 != 0) {
                    do {
                      uVar55 = uVar41;
                      *(undefined1 *)(param_11 + uVar55 * 6) = *puStack_d0;
                      uVar41 = uVar55 + 1;
                      uVar5 = puStack_d0[2];
                      *(undefined1 *)(param_11 + 1 + uVar55 * 6) = puStack_d0[1];
                      *(undefined1 *)(param_11 + 2 + uVar55 * 6) = uVar5;
                      *(undefined1 *)(param_11 + 3 + uVar55 * 6) = *puStack_d0;
                      uVar5 = puStack_d0[2];
                      *(undefined1 *)(param_11 + 4 + uVar55 * 6) = puStack_d0[1];
                      *(undefined1 *)(param_11 + 5 + uVar55 * 6) = uVar5;
                    } while (uVar41 < uStack_148);
                    lVar45 = uVar55 + 2 + uVar41;
                  }
                  if (lVar45 - 1U < uStack_170) {
                    lVar45 = lVar45 * 3;
                    *(undefined1 *)(lVar45 + -3 + param_11) = *puStack_d0;
                    uVar5 = puStack_d0[2];
                    *(undefined1 *)(lVar45 + -2 + param_11) = puStack_d0[1];
                    *(undefined1 *)(lVar45 + -1 + param_11) = uVar5;
                  }
                }
              }
              else if (iVar47 == 3) {
                if (0 < lStack_108) {
                  lVar45 = 1;
                  lVar44 = 0;
                  lVar51 = 0;
                  uVar41 = 0;
                  if (uStack_148 != 0) {
                    do {
                      uVar55 = uVar41;
                      uVar41 = uVar55 + 1;
                      *(undefined1 *)(lVar44 + param_11) = *(undefined1 *)(lVar51 + -3 + lStack_150)
                      ;
                      *(undefined1 *)(lVar44 + 1 + param_11) =
                           *(undefined1 *)(lVar51 + -2 + lStack_150);
                      *(undefined1 *)(lVar44 + 2 + param_11) =
                           *(undefined1 *)(lVar51 + -1 + lStack_150);
                      *(undefined1 *)(lVar44 + 3 + param_11) =
                           *(undefined1 *)(lVar51 + -6 + lStack_150);
                      *(undefined1 *)(lVar44 + 4 + param_11) =
                           *(undefined1 *)(lVar51 + -5 + lStack_150);
                      lVar45 = lVar51 + -4;
                      lVar51 = lVar51 + -6;
                      *(undefined1 *)(lVar44 + 5 + param_11) = *(undefined1 *)(lVar45 + lStack_150);
                      lVar44 = lVar44 + 6;
                    } while (uVar41 < uStack_148);
                    lVar45 = uVar55 + 2 + uVar41;
                  }
                  if (lVar45 - 1U < uStack_170) {
                    lVar45 = lVar45 * 3;
                    lVar44 = -(lVar45 + -3);
                    *(undefined1 *)(lVar45 + -3 + param_11) =
                         *(undefined1 *)(lVar44 + -3 + lStack_150);
                    *(undefined1 *)(lVar45 + -2 + param_11) =
                         *(undefined1 *)(lVar44 + -2 + lStack_150);
                    *(undefined1 *)(lVar45 + -1 + param_11) =
                         *(undefined1 *)(lVar44 + -1 + lStack_150);
                  }
                }
              }
              else if ((iVar47 == 6) && (0 < lStack_108)) {
                lVar45 = 1;
                uVar41 = 0;
                if (uStack_148 != 0) {
                  do {
                    uVar55 = uVar41;
                    *(byte *)(param_11 + uVar55 * 6) = *pbVar58;
                    uVar41 = uVar55 + 1;
                    *(byte *)(param_11 + 1 + uVar55 * 6) = pbVar58[1];
                    *(byte *)(param_11 + 2 + uVar55 * 6) = pbVar58[2];
                    *(byte *)(param_11 + 3 + uVar55 * 6) = *pbVar58;
                    *(byte *)(param_11 + 4 + uVar55 * 6) = pbVar58[1];
                    *(byte *)(param_11 + 5 + uVar55 * 6) = pbVar58[2];
                  } while (uVar41 < uStack_148);
                  lVar45 = uVar55 + 2 + uVar41;
                }
                if (lVar45 - 1U < uStack_170) {
                  lVar45 = lVar45 * 3;
                  *(byte *)(lVar45 + -3 + param_11) = *pbVar58;
                  *(byte *)(lVar45 + -2 + param_11) = pbVar58[1];
                  *(byte *)(lVar45 + -1 + param_11) = pbVar58[2];
                }
              }
              uVar75 = CONCAT44(uVar77,iStack_58);
              uStack_140 = uVar43;
              (*pcStack_d8)(puStack_d0,lVar57,uStack_60,uStack_c0,uVar75);
              uVar77 = (undefined4)((ulonglong)uVar75 >> 0x20);
              uVar42 = uVar42 - uStack_60;
              uVar43 = uStack_140 + lStack_108;
              lVar57 = lVar57 + lStack_108 * 4;
            }
            if (uStack_b8 == 0) {
              if ((longlong)uStack_60 < (longlong)uVar42) {
                lVar45 = uVar42 - uStack_60;
                uVar75 = CONCAT44(uVar77,iStack_58);
                uStack_140 = uVar43;
                (*pcStack_d8)(uVar43,lVar57,lVar45,uStack_c0,uVar75);
                uVar77 = (undefined4)((ulonglong)uVar75 >> 0x20);
                uVar43 = uStack_140 + lVar45 * 3;
                lVar57 = lVar57 + lVar45 * 0xc;
              }
              if (0 < (longlong)uVar50) {
                lVar44 = uVar43 + uStack_220;
                lVar45 = ((longlong)uStack_160 / 3) * 3;
                if ((lVar45 <= param_11 - lVar44) || (lVar45 + -2 <= -(param_11 - lVar44))) {
                  lVar51 = (param_11 + 1) - lVar44;
                  if (((lVar45 <= lVar51) || (lVar45 + -1 <= -lVar51)) &&
                     ((lVar51 = (param_11 + 1) - param_11, lVar45 + -2 <= lVar51 ||
                      (lVar45 + -1 <= -lVar51)))) {
                    lVar45 = 1;
                    uVar43 = 0;
                    if (uStack_118 != 0) {
                      do {
                        uVar42 = uVar43;
                        uVar43 = uVar42 + 1;
                        *(undefined1 *)(param_11 + uVar42 * 6) =
                             *(undefined1 *)(lVar44 + uVar42 * 6);
                        *(undefined1 *)(param_11 + 3 + uVar42 * 6) =
                             *(undefined1 *)(lVar44 + 3 + uVar42 * 6);
                      } while (uVar43 < uStack_118);
                      lVar45 = uVar42 + 2 + uVar43;
                    }
                    if (lVar45 - 1U < uStack_110) {
                      lVar45 = lVar45 * 3 + -3;
                      *(undefined1 *)(lVar45 + param_11) = *(undefined1 *)(lVar44 + lVar45);
                    }
                    lVar45 = 1;
                    uVar43 = 0;
                    if (uStack_118 != 0) {
                      do {
                        uVar42 = uVar43;
                        uVar43 = uVar42 + 1;
                        *(undefined1 *)(param_11 + 1 + uVar42 * 6) =
                             *(undefined1 *)(lVar44 + 1 + uVar42 * 6);
                        uVar5 = *(undefined1 *)(lVar44 + 4 + uVar42 * 6);
                        uVar6 = *(undefined1 *)(lVar44 + 5 + uVar42 * 6);
                        *(undefined1 *)(param_11 + 2 + uVar42 * 6) =
                             *(undefined1 *)(lVar44 + 2 + uVar42 * 6);
                        *(undefined1 *)(param_11 + 4 + uVar42 * 6) = uVar5;
                        *(undefined1 *)(param_11 + 5 + uVar42 * 6) = uVar6;
                      } while (uVar43 < uStack_118);
                      lVar45 = uVar42 + 2 + uVar43;
                    }
                    if (lVar45 - 1U < uStack_110) {
                      lVar45 = lVar45 * 3;
                      uVar5 = *(undefined1 *)(lVar44 + 2 + lVar45 + -3);
                      *(undefined1 *)(lVar45 + -2 + param_11) =
                           *(undefined1 *)(lVar44 + 1 + lVar45 + -3);
                      *(undefined1 *)(lVar45 + -1 + param_11) = uVar5;
                    }
                    goto LAB_1409e02bb;
                  }
                }
                lVar45 = 1;
                uVar43 = 0;
                if (uStack_118 != 0) {
                  do {
                    uVar42 = uVar43;
                    uVar43 = uVar42 + 1;
                    *(undefined1 *)(param_11 + uVar42 * 6) = *(undefined1 *)(lVar44 + uVar42 * 6);
                    *(undefined1 *)(param_11 + 1 + uVar42 * 6) =
                         *(undefined1 *)(lVar44 + 1 + uVar42 * 6);
                    *(undefined1 *)(param_11 + 2 + uVar42 * 6) =
                         *(undefined1 *)(lVar44 + 2 + uVar42 * 6);
                    *(undefined1 *)(param_11 + 3 + uVar42 * 6) =
                         *(undefined1 *)(lVar44 + 3 + uVar42 * 6);
                    *(undefined1 *)(param_11 + 4 + uVar42 * 6) =
                         *(undefined1 *)(lVar44 + 4 + uVar42 * 6);
                    *(undefined1 *)(param_11 + 5 + uVar42 * 6) =
                         *(undefined1 *)(lVar44 + 5 + uVar42 * 6);
                  } while (uVar43 < uStack_118);
                  lVar45 = uVar42 + 2 + uVar43;
                }
                if (lVar45 - 1U < uStack_110) {
                  lVar45 = lVar45 * 3;
                  lVar51 = lVar45 + -3;
                  *(undefined1 *)(lVar51 + param_11) = *(undefined1 *)(lVar44 + lVar51);
                  *(undefined1 *)(lVar45 + -2 + param_11) = *(undefined1 *)(lVar44 + 1 + lVar51);
                  *(undefined1 *)(lVar45 + -1 + param_11) = *(undefined1 *)(lVar44 + 2 + lVar51);
                }
              }
LAB_1409e02bb:
              if (iVar47 == 1) {
                if (0 < lStack_108) {
                  if ((longlong)uStack_168 < 7) {
                    lVar45 = 1;
                    uVar43 = 0;
                    if (uStack_148 != 0) {
                      do {
                        uVar42 = uVar43;
                        *(undefined1 *)(lStack_150 + -3 + uVar42 * 6) =
                             *(undefined1 *)(lStack_150 + -6);
                        uVar43 = uVar42 + 1;
                        *(undefined1 *)(lStack_150 + -2 + uVar42 * 6) =
                             *(undefined1 *)(lStack_150 + -5);
                        *(undefined1 *)(lStack_150 + -1 + uVar42 * 6) =
                             *(undefined1 *)(lStack_150 + -4);
                        *(undefined1 *)(lStack_150 + uVar42 * 6) = *(undefined1 *)(lStack_150 + -6);
                        *(undefined1 *)(lStack_150 + 1 + uVar42 * 6) =
                             *(undefined1 *)(lStack_150 + -5);
                        *(undefined1 *)(lStack_150 + 2 + uVar42 * 6) =
                             *(undefined1 *)(lStack_150 + -4);
                      } while (uVar43 < uStack_148);
                      lVar45 = uVar42 + 2 + uVar43;
                    }
                    if (lVar45 - 1U < uStack_170) {
                      lVar45 = lVar45 * 3;
                      *(undefined1 *)(lVar45 + -6 + lStack_150) = *(undefined1 *)(lStack_150 + -6);
                      *(undefined1 *)(lVar45 + -5 + lStack_150) = *(undefined1 *)(lStack_150 + -5);
                      *(undefined1 *)(lVar45 + -4 + lStack_150) = *(undefined1 *)(lStack_150 + -4);
                    }
                  }
                  else {
                    uVar5 = *(undefined1 *)(lStack_150 + -6);
                    uVar6 = *(undefined1 *)(lStack_150 + -5);
                    uVar7 = *(undefined1 *)(lStack_150 + -4);
                    if ((longlong)uStack_168 < 0x40) {
                      uVar43 = 0;
                    }
                    else {
                      auVar74 = vpbroadcastb_avx512bw();
                      uVar42 = 0;
                      auVar69 = vpbroadcastb_avx512bw();
                      auVar70 = vpbroadcastb_avx512bw();
                      lVar45 = 0;
                      auVar60 = vextracti32x4_avx512f(auVar70,1);
                      auVar61 = vextracti32x4_avx512f(auVar70,2);
                      auVar62 = vextracti32x4_avx512f(auVar70,3);
                      auVar63 = vextracti32x4_avx512f(auVar69,1);
                      auVar64 = vextracti32x4_avx512f(auVar69,2);
                      auVar65 = vextracti32x4_avx512f(auVar69,3);
                      auVar66 = vextracti32x4_avx512f(auVar74,1);
                      auVar67 = vextracti32x4_avx512f(auVar74,2);
                      auVar68 = vextracti32x4_avx512f(auVar74,3);
                      do {
                        uVar42 = uVar42 + 0x40;
                        *(char *)(lVar45 + -1 + lStack_150) = auVar70[0];
                        *(char *)(lVar45 + 2 + lStack_150) = auVar70[1];
                        *(char *)(lVar45 + 5 + lStack_150) = auVar70[2];
                        *(char *)(lVar45 + 8 + lStack_150) = auVar70[3];
                        *(char *)(lVar45 + 0xb + lStack_150) = auVar70[4];
                        *(char *)(lVar45 + 0xe + lStack_150) = auVar70[5];
                        *(char *)(lVar45 + 0x11 + lStack_150) = auVar70[6];
                        *(char *)(lVar45 + 0x14 + lStack_150) = auVar70[7];
                        *(char *)(lVar45 + 0x17 + lStack_150) = auVar70[0];
                        *(char *)(lVar45 + 0x1a + lStack_150) = auVar70[1];
                        *(char *)(lVar45 + 0x1d + lStack_150) = auVar70[2];
                        *(char *)(lVar45 + 0x20 + lStack_150) = auVar70[3];
                        *(char *)(lVar45 + 0x23 + lStack_150) = auVar70[4];
                        *(char *)(lVar45 + 0x26 + lStack_150) = auVar70[5];
                        *(char *)(lVar45 + 0x29 + lStack_150) = auVar70[6];
                        *(char *)(lVar45 + 0x2c + lStack_150) = auVar70[7];
                        *(char *)(lVar45 + 0x2f + lStack_150) = auVar60[0];
                        *(char *)(lVar45 + 0x32 + lStack_150) = auVar60[1];
                        *(char *)(lVar45 + 0x35 + lStack_150) = auVar60[2];
                        *(char *)(lVar45 + 0x38 + lStack_150) = auVar60[3];
                        *(char *)(lVar45 + 0x3b + lStack_150) = auVar60[4];
                        *(char *)(lVar45 + 0x3e + lStack_150) = auVar60[5];
                        *(char *)(lVar45 + 0x41 + lStack_150) = auVar60[6];
                        *(char *)(lVar45 + 0x44 + lStack_150) = auVar60[7];
                        *(char *)(lVar45 + 0x47 + lStack_150) = auVar60[0];
                        *(char *)(lVar45 + 0x4a + lStack_150) = auVar60[1];
                        *(char *)(lVar45 + 0x4d + lStack_150) = auVar60[2];
                        *(char *)(lVar45 + 0x50 + lStack_150) = auVar60[3];
                        *(char *)(lVar45 + 0x53 + lStack_150) = auVar60[4];
                        *(char *)(lVar45 + 0x56 + lStack_150) = auVar60[5];
                        *(char *)(lVar45 + 0x59 + lStack_150) = auVar60[6];
                        *(char *)(lVar45 + 0x5c + lStack_150) = auVar60[7];
                        *(char *)(lVar45 + 0x5f + lStack_150) = auVar61[0];
                        *(char *)(lVar45 + 0x62 + lStack_150) = auVar61[1];
                        *(char *)(lVar45 + 0x65 + lStack_150) = auVar61[2];
                        *(char *)(lVar45 + 0x68 + lStack_150) = auVar61[3];
                        *(char *)(lVar45 + 0x6b + lStack_150) = auVar61[4];
                        *(char *)(lVar45 + 0x6e + lStack_150) = auVar61[5];
                        *(char *)(lVar45 + 0x71 + lStack_150) = auVar61[6];
                        *(char *)(lVar45 + 0x74 + lStack_150) = auVar61[7];
                        *(char *)(lVar45 + 0x77 + lStack_150) = auVar61[0];
                        *(char *)(lVar45 + 0x7a + lStack_150) = auVar61[1];
                        *(char *)(lVar45 + 0x7d + lStack_150) = auVar61[2];
                        *(char *)(lVar45 + 0x80 + lStack_150) = auVar61[3];
                        *(char *)(lVar45 + 0x83 + lStack_150) = auVar61[4];
                        *(char *)(lVar45 + 0x86 + lStack_150) = auVar61[5];
                        *(char *)(lVar45 + 0x89 + lStack_150) = auVar61[6];
                        *(char *)(lVar45 + 0x8c + lStack_150) = auVar61[7];
                        *(char *)(lVar45 + 0x8f + lStack_150) = auVar62[0];
                        *(char *)(lVar45 + 0x92 + lStack_150) = auVar62[1];
                        *(char *)(lVar45 + 0x95 + lStack_150) = auVar62[2];
                        *(char *)(lVar45 + 0x98 + lStack_150) = auVar62[3];
                        *(char *)(lVar45 + 0x9b + lStack_150) = auVar62[4];
                        *(char *)(lVar45 + 0x9e + lStack_150) = auVar62[5];
                        *(char *)(lVar45 + 0xa1 + lStack_150) = auVar62[6];
                        *(char *)(lVar45 + 0xa4 + lStack_150) = auVar62[7];
                        *(char *)(lVar45 + 0xa7 + lStack_150) = auVar62[0];
                        *(char *)(lVar45 + 0xaa + lStack_150) = auVar62[1];
                        *(char *)(lVar45 + 0xad + lStack_150) = auVar62[2];
                        *(char *)(lVar45 + 0xb0 + lStack_150) = auVar62[3];
                        *(char *)(lVar45 + 0xb3 + lStack_150) = auVar62[4];
                        *(char *)(lVar45 + 0xb6 + lStack_150) = auVar62[5];
                        *(char *)(lVar45 + 0xb9 + lStack_150) = auVar62[6];
                        *(char *)(lVar45 + 0xbc + lStack_150) = auVar62[7];
                        *(char *)(lVar45 + -2 + lStack_150) = auVar69[0];
                        *(char *)(lVar45 + 1 + lStack_150) = auVar69[1];
                        *(char *)(lVar45 + 4 + lStack_150) = auVar69[2];
                        *(char *)(lVar45 + 7 + lStack_150) = auVar69[3];
                        *(char *)(lVar45 + 10 + lStack_150) = auVar69[4];
                        *(char *)(lVar45 + 0xd + lStack_150) = auVar69[5];
                        *(char *)(lVar45 + 0x10 + lStack_150) = auVar69[6];
                        *(char *)(lVar45 + 0x13 + lStack_150) = auVar69[7];
                        *(char *)(lVar45 + 0x16 + lStack_150) = auVar69[0];
                        *(char *)(lVar45 + 0x19 + lStack_150) = auVar69[1];
                        *(char *)(lVar45 + 0x1c + lStack_150) = auVar69[2];
                        *(char *)(lVar45 + 0x1f + lStack_150) = auVar69[3];
                        *(char *)(lVar45 + 0x22 + lStack_150) = auVar69[4];
                        *(char *)(lVar45 + 0x25 + lStack_150) = auVar69[5];
                        *(char *)(lVar45 + 0x28 + lStack_150) = auVar69[6];
                        *(char *)(lVar45 + 0x2b + lStack_150) = auVar69[7];
                        *(char *)(lVar45 + 0x2e + lStack_150) = auVar63[0];
                        *(char *)(lVar45 + 0x31 + lStack_150) = auVar63[1];
                        *(char *)(lVar45 + 0x34 + lStack_150) = auVar63[2];
                        *(char *)(lVar45 + 0x37 + lStack_150) = auVar63[3];
                        *(char *)(lVar45 + 0x3a + lStack_150) = auVar63[4];
                        *(char *)(lVar45 + 0x3d + lStack_150) = auVar63[5];
                        *(char *)(lVar45 + 0x40 + lStack_150) = auVar63[6];
                        *(char *)(lVar45 + 0x43 + lStack_150) = auVar63[7];
                        *(char *)(lVar45 + 0x46 + lStack_150) = auVar63[0];
                        *(char *)(lVar45 + 0x49 + lStack_150) = auVar63[1];
                        *(char *)(lVar45 + 0x4c + lStack_150) = auVar63[2];
                        *(char *)(lVar45 + 0x4f + lStack_150) = auVar63[3];
                        *(char *)(lVar45 + 0x52 + lStack_150) = auVar63[4];
                        *(char *)(lVar45 + 0x55 + lStack_150) = auVar63[5];
                        *(char *)(lVar45 + 0x58 + lStack_150) = auVar63[6];
                        *(char *)(lVar45 + 0x5b + lStack_150) = auVar63[7];
                        *(char *)(lVar45 + 0x5e + lStack_150) = auVar64[0];
                        *(char *)(lVar45 + 0x61 + lStack_150) = auVar64[1];
                        *(char *)(lVar45 + 100 + lStack_150) = auVar64[2];
                        *(char *)(lVar45 + 0x67 + lStack_150) = auVar64[3];
                        *(char *)(lVar45 + 0x6a + lStack_150) = auVar64[4];
                        *(char *)(lVar45 + 0x6d + lStack_150) = auVar64[5];
                        *(char *)(lVar45 + 0x70 + lStack_150) = auVar64[6];
                        *(char *)(lVar45 + 0x73 + lStack_150) = auVar64[7];
                        *(char *)(lVar45 + 0x76 + lStack_150) = auVar64[0];
                        *(char *)(lVar45 + 0x79 + lStack_150) = auVar64[1];
                        *(char *)(lVar45 + 0x7c + lStack_150) = auVar64[2];
                        *(char *)(lVar45 + 0x7f + lStack_150) = auVar64[3];
                        *(char *)(lVar45 + 0x82 + lStack_150) = auVar64[4];
                        *(char *)(lVar45 + 0x85 + lStack_150) = auVar64[5];
                        *(char *)(lVar45 + 0x88 + lStack_150) = auVar64[6];
                        *(char *)(lVar45 + 0x8b + lStack_150) = auVar64[7];
                        *(char *)(lVar45 + 0x8e + lStack_150) = auVar65[0];
                        *(char *)(lVar45 + 0x91 + lStack_150) = auVar65[1];
                        *(char *)(lVar45 + 0x94 + lStack_150) = auVar65[2];
                        *(char *)(lVar45 + 0x97 + lStack_150) = auVar65[3];
                        *(char *)(lVar45 + 0x9a + lStack_150) = auVar65[4];
                        *(char *)(lVar45 + 0x9d + lStack_150) = auVar65[5];
                        *(char *)(lVar45 + 0xa0 + lStack_150) = auVar65[6];
                        *(char *)(lVar45 + 0xa3 + lStack_150) = auVar65[7];
                        *(char *)(lVar45 + 0xa6 + lStack_150) = auVar65[0];
                        *(char *)(lVar45 + 0xa9 + lStack_150) = auVar65[1];
                        *(char *)(lVar45 + 0xac + lStack_150) = auVar65[2];
                        *(char *)(lVar45 + 0xaf + lStack_150) = auVar65[3];
                        *(char *)(lVar45 + 0xb2 + lStack_150) = auVar65[4];
                        *(char *)(lVar45 + 0xb5 + lStack_150) = auVar65[5];
                        *(char *)(lVar45 + 0xb8 + lStack_150) = auVar65[6];
                        *(char *)(lVar45 + 0xbb + lStack_150) = auVar65[7];
                        *(char *)(lVar45 + -3 + lStack_150) = auVar74[0];
                        *(char *)(lVar45 + lStack_150) = auVar74[1];
                        *(char *)(lVar45 + 3 + lStack_150) = auVar74[2];
                        *(char *)(lVar45 + 6 + lStack_150) = auVar74[3];
                        *(char *)(lVar45 + 9 + lStack_150) = auVar74[4];
                        *(char *)(lVar45 + 0xc + lStack_150) = auVar74[5];
                        *(char *)(lVar45 + 0xf + lStack_150) = auVar74[6];
                        *(char *)(lVar45 + 0x12 + lStack_150) = auVar74[7];
                        *(char *)(lVar45 + 0x15 + lStack_150) = auVar74[0];
                        *(char *)(lVar45 + 0x18 + lStack_150) = auVar74[1];
                        *(char *)(lVar45 + 0x1b + lStack_150) = auVar74[2];
                        *(char *)(lVar45 + 0x1e + lStack_150) = auVar74[3];
                        *(char *)(lVar45 + 0x21 + lStack_150) = auVar74[4];
                        *(char *)(lVar45 + 0x24 + lStack_150) = auVar74[5];
                        *(char *)(lVar45 + 0x27 + lStack_150) = auVar74[6];
                        *(char *)(lVar45 + 0x2a + lStack_150) = auVar74[7];
                        *(char *)(lVar45 + 0x2d + lStack_150) = auVar66[0];
                        *(char *)(lVar45 + 0x30 + lStack_150) = auVar66[1];
                        *(char *)(lVar45 + 0x33 + lStack_150) = auVar66[2];
                        *(char *)(lVar45 + 0x36 + lStack_150) = auVar66[3];
                        *(char *)(lVar45 + 0x39 + lStack_150) = auVar66[4];
                        *(char *)(lVar45 + 0x3c + lStack_150) = auVar66[5];
                        *(char *)(lVar45 + 0x3f + lStack_150) = auVar66[6];
                        *(char *)(lVar45 + 0x42 + lStack_150) = auVar66[7];
                        *(char *)(lVar45 + 0x45 + lStack_150) = auVar66[0];
                        *(char *)(lVar45 + 0x48 + lStack_150) = auVar66[1];
                        *(char *)(lVar45 + 0x4b + lStack_150) = auVar66[2];
                        *(char *)(lVar45 + 0x4e + lStack_150) = auVar66[3];
                        *(char *)(lVar45 + 0x51 + lStack_150) = auVar66[4];
                        *(char *)(lVar45 + 0x54 + lStack_150) = auVar66[5];
                        *(char *)(lVar45 + 0x57 + lStack_150) = auVar66[6];
                        *(char *)(lVar45 + 0x5a + lStack_150) = auVar66[7];
                        *(char *)(lVar45 + 0x5d + lStack_150) = auVar67[0];
                        *(char *)(lVar45 + 0x60 + lStack_150) = auVar67[1];
                        *(char *)(lVar45 + 99 + lStack_150) = auVar67[2];
                        *(char *)(lVar45 + 0x66 + lStack_150) = auVar67[3];
                        *(char *)(lVar45 + 0x69 + lStack_150) = auVar67[4];
                        *(char *)(lVar45 + 0x6c + lStack_150) = auVar67[5];
                        *(char *)(lVar45 + 0x6f + lStack_150) = auVar67[6];
                        *(char *)(lVar45 + 0x72 + lStack_150) = auVar67[7];
                        *(char *)(lVar45 + 0x75 + lStack_150) = auVar67[0];
                        *(char *)(lVar45 + 0x78 + lStack_150) = auVar67[1];
                        *(char *)(lVar45 + 0x7b + lStack_150) = auVar67[2];
                        *(char *)(lVar45 + 0x7e + lStack_150) = auVar67[3];
                        *(char *)(lVar45 + 0x81 + lStack_150) = auVar67[4];
                        *(char *)(lVar45 + 0x84 + lStack_150) = auVar67[5];
                        *(char *)(lVar45 + 0x87 + lStack_150) = auVar67[6];
                        *(char *)(lVar45 + 0x8a + lStack_150) = auVar67[7];
                        *(char *)(lVar45 + 0x8d + lStack_150) = auVar68[0];
                        *(char *)(lVar45 + 0x90 + lStack_150) = auVar68[1];
                        *(char *)(lVar45 + 0x93 + lStack_150) = auVar68[2];
                        *(char *)(lVar45 + 0x96 + lStack_150) = auVar68[3];
                        *(char *)(lVar45 + 0x99 + lStack_150) = auVar68[4];
                        *(char *)(lVar45 + 0x9c + lStack_150) = auVar68[5];
                        *(char *)(lVar45 + 0x9f + lStack_150) = auVar68[6];
                        *(char *)(lVar45 + 0xa2 + lStack_150) = auVar68[7];
                        *(char *)(lVar45 + 0xa5 + lStack_150) = auVar68[0];
                        *(char *)(lVar45 + 0xa8 + lStack_150) = auVar68[1];
                        *(char *)(lVar45 + 0xab + lStack_150) = auVar68[2];
                        *(char *)(lVar45 + 0xae + lStack_150) = auVar68[3];
                        *(char *)(lVar45 + 0xb1 + lStack_150) = auVar68[4];
                        *(char *)(lVar45 + 0xb4 + lStack_150) = auVar68[5];
                        *(char *)(lVar45 + 0xb7 + lStack_150) = auVar68[6];
                        *(char *)(lVar45 + 0xba + lStack_150) = auVar68[7];
                        lVar45 = lVar45 + 0xc0;
                        uVar43 = uStack_178;
                      } while (uVar42 < uStack_178);
                    }
                    uVar42 = 0;
                    lVar45 = 0;
                    if (uVar43 + 1 <= uStack_168) {
                      lVar44 = uVar43 * 3 + lStack_150;
                      do {
                        uVar42 = uVar42 + 1;
                        *(undefined1 *)(lVar45 + -3 + lVar44) = uVar5;
                        *(undefined1 *)(lVar45 + -2 + lVar44) = uVar6;
                        *(undefined1 *)(lVar45 + -1 + lVar44) = uVar7;
                        lVar45 = lVar45 + 3;
                      } while (uVar42 < uStack_168 - uVar43);
                    }
                  }
                }
              }
              else if (iVar47 == 3) {
                if (0 < lStack_108) {
                  lVar45 = 1;
                  lVar44 = 0;
                  lVar51 = 0;
                  uVar43 = 0;
                  if (uStack_148 != 0) {
                    do {
                      uVar42 = uVar43;
                      uVar43 = uVar42 + 1;
                      *(undefined1 *)(lVar44 + -3 + lStack_150) =
                           *(undefined1 *)(lVar51 + -9 + lStack_150);
                      *(undefined1 *)(lVar44 + -1 + lStack_150) =
                           *(undefined1 *)(lVar51 + -7 + lStack_150);
                      *(undefined1 *)(lVar44 + lStack_150) =
                           *(undefined1 *)(lVar51 + -0xc + lStack_150);
                      *(undefined1 *)(lVar44 + 1 + lStack_150) =
                           *(undefined1 *)(lVar51 + -0xb + lStack_150);
                      lVar45 = lVar51 + -8;
                      uVar5 = *(undefined1 *)(lVar51 + -10 + lStack_150);
                      lVar51 = lVar51 + -6;
                      *(undefined1 *)(lVar44 + -2 + lStack_150) =
                           *(undefined1 *)(lVar45 + lStack_150);
                      *(undefined1 *)(lVar44 + 2 + lStack_150) = uVar5;
                      lVar44 = lVar44 + 6;
                    } while (uVar43 < uStack_148);
                    lVar45 = uVar42 + 2 + uVar43;
                  }
                  if (lVar45 - 1U < uStack_170) {
                    lVar45 = lVar45 * 3;
                    lVar44 = -(lVar45 + -3);
                    uVar5 = *(undefined1 *)(lVar44 + -8 + lStack_150);
                    uVar6 = *(undefined1 *)(lVar44 + -7 + lStack_150);
                    *(undefined1 *)(lVar45 + -6 + lStack_150) =
                         *(undefined1 *)(lVar44 + -9 + lStack_150);
                    *(undefined1 *)(lVar45 + -5 + lStack_150) = uVar5;
                    *(undefined1 *)(lVar45 + -4 + lStack_150) = uVar6;
                  }
                }
              }
              else if ((iVar47 == 6) && (0 < lStack_108)) {
                if (((longlong)uStack_168 < 7) ||
                   ((lVar45 = (param_11 + -3 + lStack_158) - (longlong)pbVar58, lVar45 < 3 &&
                    (-lVar45 < (longlong)(uStack_168 * 3))))) {
                  lVar45 = 1;
                  uVar43 = 0;
                  if (uStack_148 != 0) {
                    do {
                      uVar42 = uVar43;
                      *(byte *)(lStack_150 + -3 + uVar42 * 6) = *pbVar58;
                      uVar43 = uVar42 + 1;
                      *(byte *)(lStack_150 + -2 + uVar42 * 6) = pbVar58[1];
                      *(byte *)(lStack_150 + -1 + uVar42 * 6) = pbVar58[2];
                      *(byte *)(lStack_150 + uVar42 * 6) = *pbVar58;
                      *(byte *)(lStack_150 + 1 + uVar42 * 6) = pbVar58[1];
                      *(byte *)(lStack_150 + 2 + uVar42 * 6) = pbVar58[2];
                    } while (uVar43 < uStack_148);
                    lVar45 = uVar42 + 2 + uVar43;
                  }
                  if (lVar45 - 1U < uStack_170) {
                    lVar45 = lVar45 * 3;
                    *(byte *)(lVar45 + -6 + lStack_150) = *pbVar58;
                    *(byte *)(lVar45 + -5 + lStack_150) = pbVar58[1];
                    *(byte *)(lVar45 + -4 + lStack_150) = pbVar58[2];
                  }
                }
                else {
                  bVar46 = *pbVar58;
                  bVar56 = pbVar58[1];
                  bVar52 = pbVar58[2];
                  if ((longlong)uStack_168 < 0x40) {
                    uVar43 = 0;
                  }
                  else {
                    auVar74 = vpbroadcastb_avx512bw();
                    uVar42 = 0;
                    auVar69 = vpbroadcastb_avx512bw();
                    auVar70 = vpbroadcastb_avx512bw();
                    lVar45 = 0;
                    auVar60 = vextracti32x4_avx512f(auVar70,1);
                    auVar61 = vextracti32x4_avx512f(auVar70,2);
                    auVar62 = vextracti32x4_avx512f(auVar70,3);
                    auVar63 = vextracti32x4_avx512f(auVar69,1);
                    auVar64 = vextracti32x4_avx512f(auVar69,2);
                    auVar65 = vextracti32x4_avx512f(auVar69,3);
                    auVar66 = vextracti32x4_avx512f(auVar74,1);
                    auVar67 = vextracti32x4_avx512f(auVar74,2);
                    auVar68 = vextracti32x4_avx512f(auVar74,3);
                    do {
                      uVar42 = uVar42 + 0x40;
                      *(char *)(lVar45 + -1 + lStack_150) = auVar70[0];
                      *(char *)(lVar45 + 2 + lStack_150) = auVar70[1];
                      *(char *)(lVar45 + 5 + lStack_150) = auVar70[2];
                      *(char *)(lVar45 + 8 + lStack_150) = auVar70[3];
                      *(char *)(lVar45 + 0xb + lStack_150) = auVar70[4];
                      *(char *)(lVar45 + 0xe + lStack_150) = auVar70[5];
                      *(char *)(lVar45 + 0x11 + lStack_150) = auVar70[6];
                      *(char *)(lVar45 + 0x14 + lStack_150) = auVar70[7];
                      *(char *)(lVar45 + 0x17 + lStack_150) = auVar70[0];
                      *(char *)(lVar45 + 0x1a + lStack_150) = auVar70[1];
                      *(char *)(lVar45 + 0x1d + lStack_150) = auVar70[2];
                      *(char *)(lVar45 + 0x20 + lStack_150) = auVar70[3];
                      *(char *)(lVar45 + 0x23 + lStack_150) = auVar70[4];
                      *(char *)(lVar45 + 0x26 + lStack_150) = auVar70[5];
                      *(char *)(lVar45 + 0x29 + lStack_150) = auVar70[6];
                      *(char *)(lVar45 + 0x2c + lStack_150) = auVar70[7];
                      *(char *)(lVar45 + 0x2f + lStack_150) = auVar60[0];
                      *(char *)(lVar45 + 0x32 + lStack_150) = auVar60[1];
                      *(char *)(lVar45 + 0x35 + lStack_150) = auVar60[2];
                      *(char *)(lVar45 + 0x38 + lStack_150) = auVar60[3];
                      *(char *)(lVar45 + 0x3b + lStack_150) = auVar60[4];
                      *(char *)(lVar45 + 0x3e + lStack_150) = auVar60[5];
                      *(char *)(lVar45 + 0x41 + lStack_150) = auVar60[6];
                      *(char *)(lVar45 + 0x44 + lStack_150) = auVar60[7];
                      *(char *)(lVar45 + 0x47 + lStack_150) = auVar60[0];
                      *(char *)(lVar45 + 0x4a + lStack_150) = auVar60[1];
                      *(char *)(lVar45 + 0x4d + lStack_150) = auVar60[2];
                      *(char *)(lVar45 + 0x50 + lStack_150) = auVar60[3];
                      *(char *)(lVar45 + 0x53 + lStack_150) = auVar60[4];
                      *(char *)(lVar45 + 0x56 + lStack_150) = auVar60[5];
                      *(char *)(lVar45 + 0x59 + lStack_150) = auVar60[6];
                      *(char *)(lVar45 + 0x5c + lStack_150) = auVar60[7];
                      *(char *)(lVar45 + 0x5f + lStack_150) = auVar61[0];
                      *(char *)(lVar45 + 0x62 + lStack_150) = auVar61[1];
                      *(char *)(lVar45 + 0x65 + lStack_150) = auVar61[2];
                      *(char *)(lVar45 + 0x68 + lStack_150) = auVar61[3];
                      *(char *)(lVar45 + 0x6b + lStack_150) = auVar61[4];
                      *(char *)(lVar45 + 0x6e + lStack_150) = auVar61[5];
                      *(char *)(lVar45 + 0x71 + lStack_150) = auVar61[6];
                      *(char *)(lVar45 + 0x74 + lStack_150) = auVar61[7];
                      *(char *)(lVar45 + 0x77 + lStack_150) = auVar61[0];
                      *(char *)(lVar45 + 0x7a + lStack_150) = auVar61[1];
                      *(char *)(lVar45 + 0x7d + lStack_150) = auVar61[2];
                      *(char *)(lVar45 + 0x80 + lStack_150) = auVar61[3];
                      *(char *)(lVar45 + 0x83 + lStack_150) = auVar61[4];
                      *(char *)(lVar45 + 0x86 + lStack_150) = auVar61[5];
                      *(char *)(lVar45 + 0x89 + lStack_150) = auVar61[6];
                      *(char *)(lVar45 + 0x8c + lStack_150) = auVar61[7];
                      *(char *)(lVar45 + 0x8f + lStack_150) = auVar62[0];
                      *(char *)(lVar45 + 0x92 + lStack_150) = auVar62[1];
                      *(char *)(lVar45 + 0x95 + lStack_150) = auVar62[2];
                      *(char *)(lVar45 + 0x98 + lStack_150) = auVar62[3];
                      *(char *)(lVar45 + 0x9b + lStack_150) = auVar62[4];
                      *(char *)(lVar45 + 0x9e + lStack_150) = auVar62[5];
                      *(char *)(lVar45 + 0xa1 + lStack_150) = auVar62[6];
                      *(char *)(lVar45 + 0xa4 + lStack_150) = auVar62[7];
                      *(char *)(lVar45 + 0xa7 + lStack_150) = auVar62[0];
                      *(char *)(lVar45 + 0xaa + lStack_150) = auVar62[1];
                      *(char *)(lVar45 + 0xad + lStack_150) = auVar62[2];
                      *(char *)(lVar45 + 0xb0 + lStack_150) = auVar62[3];
                      *(char *)(lVar45 + 0xb3 + lStack_150) = auVar62[4];
                      *(char *)(lVar45 + 0xb6 + lStack_150) = auVar62[5];
                      *(char *)(lVar45 + 0xb9 + lStack_150) = auVar62[6];
                      *(char *)(lVar45 + 0xbc + lStack_150) = auVar62[7];
                      *(char *)(lVar45 + -2 + lStack_150) = auVar69[0];
                      *(char *)(lVar45 + 1 + lStack_150) = auVar69[1];
                      *(char *)(lVar45 + 4 + lStack_150) = auVar69[2];
                      *(char *)(lVar45 + 7 + lStack_150) = auVar69[3];
                      *(char *)(lVar45 + 10 + lStack_150) = auVar69[4];
                      *(char *)(lVar45 + 0xd + lStack_150) = auVar69[5];
                      *(char *)(lVar45 + 0x10 + lStack_150) = auVar69[6];
                      *(char *)(lVar45 + 0x13 + lStack_150) = auVar69[7];
                      *(char *)(lVar45 + 0x16 + lStack_150) = auVar69[0];
                      *(char *)(lVar45 + 0x19 + lStack_150) = auVar69[1];
                      *(char *)(lVar45 + 0x1c + lStack_150) = auVar69[2];
                      *(char *)(lVar45 + 0x1f + lStack_150) = auVar69[3];
                      *(char *)(lVar45 + 0x22 + lStack_150) = auVar69[4];
                      *(char *)(lVar45 + 0x25 + lStack_150) = auVar69[5];
                      *(char *)(lVar45 + 0x28 + lStack_150) = auVar69[6];
                      *(char *)(lVar45 + 0x2b + lStack_150) = auVar69[7];
                      *(char *)(lVar45 + 0x2e + lStack_150) = auVar63[0];
                      *(char *)(lVar45 + 0x31 + lStack_150) = auVar63[1];
                      *(char *)(lVar45 + 0x34 + lStack_150) = auVar63[2];
                      *(char *)(lVar45 + 0x37 + lStack_150) = auVar63[3];
                      *(char *)(lVar45 + 0x3a + lStack_150) = auVar63[4];
                      *(char *)(lVar45 + 0x3d + lStack_150) = auVar63[5];
                      *(char *)(lVar45 + 0x40 + lStack_150) = auVar63[6];
                      *(char *)(lVar45 + 0x43 + lStack_150) = auVar63[7];
                      *(char *)(lVar45 + 0x46 + lStack_150) = auVar63[0];
                      *(char *)(lVar45 + 0x49 + lStack_150) = auVar63[1];
                      *(char *)(lVar45 + 0x4c + lStack_150) = auVar63[2];
                      *(char *)(lVar45 + 0x4f + lStack_150) = auVar63[3];
                      *(char *)(lVar45 + 0x52 + lStack_150) = auVar63[4];
                      *(char *)(lVar45 + 0x55 + lStack_150) = auVar63[5];
                      *(char *)(lVar45 + 0x58 + lStack_150) = auVar63[6];
                      *(char *)(lVar45 + 0x5b + lStack_150) = auVar63[7];
                      *(char *)(lVar45 + 0x5e + lStack_150) = auVar64[0];
                      *(char *)(lVar45 + 0x61 + lStack_150) = auVar64[1];
                      *(char *)(lVar45 + 100 + lStack_150) = auVar64[2];
                      *(char *)(lVar45 + 0x67 + lStack_150) = auVar64[3];
                      *(char *)(lVar45 + 0x6a + lStack_150) = auVar64[4];
                      *(char *)(lVar45 + 0x6d + lStack_150) = auVar64[5];
                      *(char *)(lVar45 + 0x70 + lStack_150) = auVar64[6];
                      *(char *)(lVar45 + 0x73 + lStack_150) = auVar64[7];
                      *(char *)(lVar45 + 0x76 + lStack_150) = auVar64[0];
                      *(char *)(lVar45 + 0x79 + lStack_150) = auVar64[1];
                      *(char *)(lVar45 + 0x7c + lStack_150) = auVar64[2];
                      *(char *)(lVar45 + 0x7f + lStack_150) = auVar64[3];
                      *(char *)(lVar45 + 0x82 + lStack_150) = auVar64[4];
                      *(char *)(lVar45 + 0x85 + lStack_150) = auVar64[5];
                      *(char *)(lVar45 + 0x88 + lStack_150) = auVar64[6];
                      *(char *)(lVar45 + 0x8b + lStack_150) = auVar64[7];
                      *(char *)(lVar45 + 0x8e + lStack_150) = auVar65[0];
                      *(char *)(lVar45 + 0x91 + lStack_150) = auVar65[1];
                      *(char *)(lVar45 + 0x94 + lStack_150) = auVar65[2];
                      *(char *)(lVar45 + 0x97 + lStack_150) = auVar65[3];
                      *(char *)(lVar45 + 0x9a + lStack_150) = auVar65[4];
                      *(char *)(lVar45 + 0x9d + lStack_150) = auVar65[5];
                      *(char *)(lVar45 + 0xa0 + lStack_150) = auVar65[6];
                      *(char *)(lVar45 + 0xa3 + lStack_150) = auVar65[7];
                      *(char *)(lVar45 + 0xa6 + lStack_150) = auVar65[0];
                      *(char *)(lVar45 + 0xa9 + lStack_150) = auVar65[1];
                      *(char *)(lVar45 + 0xac + lStack_150) = auVar65[2];
                      *(char *)(lVar45 + 0xaf + lStack_150) = auVar65[3];
                      *(char *)(lVar45 + 0xb2 + lStack_150) = auVar65[4];
                      *(char *)(lVar45 + 0xb5 + lStack_150) = auVar65[5];
                      *(char *)(lVar45 + 0xb8 + lStack_150) = auVar65[6];
                      *(char *)(lVar45 + 0xbb + lStack_150) = auVar65[7];
                      *(char *)(lVar45 + -3 + lStack_150) = auVar74[0];
                      *(char *)(lVar45 + lStack_150) = auVar74[1];
                      *(char *)(lVar45 + 3 + lStack_150) = auVar74[2];
                      *(char *)(lVar45 + 6 + lStack_150) = auVar74[3];
                      *(char *)(lVar45 + 9 + lStack_150) = auVar74[4];
                      *(char *)(lVar45 + 0xc + lStack_150) = auVar74[5];
                      *(char *)(lVar45 + 0xf + lStack_150) = auVar74[6];
                      *(char *)(lVar45 + 0x12 + lStack_150) = auVar74[7];
                      *(char *)(lVar45 + 0x15 + lStack_150) = auVar74[0];
                      *(char *)(lVar45 + 0x18 + lStack_150) = auVar74[1];
                      *(char *)(lVar45 + 0x1b + lStack_150) = auVar74[2];
                      *(char *)(lVar45 + 0x1e + lStack_150) = auVar74[3];
                      *(char *)(lVar45 + 0x21 + lStack_150) = auVar74[4];
                      *(char *)(lVar45 + 0x24 + lStack_150) = auVar74[5];
                      *(char *)(lVar45 + 0x27 + lStack_150) = auVar74[6];
                      *(char *)(lVar45 + 0x2a + lStack_150) = auVar74[7];
                      *(char *)(lVar45 + 0x2d + lStack_150) = auVar66[0];
                      *(char *)(lVar45 + 0x30 + lStack_150) = auVar66[1];
                      *(char *)(lVar45 + 0x33 + lStack_150) = auVar66[2];
                      *(char *)(lVar45 + 0x36 + lStack_150) = auVar66[3];
                      *(char *)(lVar45 + 0x39 + lStack_150) = auVar66[4];
                      *(char *)(lVar45 + 0x3c + lStack_150) = auVar66[5];
                      *(char *)(lVar45 + 0x3f + lStack_150) = auVar66[6];
                      *(char *)(lVar45 + 0x42 + lStack_150) = auVar66[7];
                      *(char *)(lVar45 + 0x45 + lStack_150) = auVar66[0];
                      *(char *)(lVar45 + 0x48 + lStack_150) = auVar66[1];
                      *(char *)(lVar45 + 0x4b + lStack_150) = auVar66[2];
                      *(char *)(lVar45 + 0x4e + lStack_150) = auVar66[3];
                      *(char *)(lVar45 + 0x51 + lStack_150) = auVar66[4];
                      *(char *)(lVar45 + 0x54 + lStack_150) = auVar66[5];
                      *(char *)(lVar45 + 0x57 + lStack_150) = auVar66[6];
                      *(char *)(lVar45 + 0x5a + lStack_150) = auVar66[7];
                      *(char *)(lVar45 + 0x5d + lStack_150) = auVar67[0];
                      *(char *)(lVar45 + 0x60 + lStack_150) = auVar67[1];
                      *(char *)(lVar45 + 99 + lStack_150) = auVar67[2];
                      *(char *)(lVar45 + 0x66 + lStack_150) = auVar67[3];
                      *(char *)(lVar45 + 0x69 + lStack_150) = auVar67[4];
                      *(char *)(lVar45 + 0x6c + lStack_150) = auVar67[5];
                      *(char *)(lVar45 + 0x6f + lStack_150) = auVar67[6];
                      *(char *)(lVar45 + 0x72 + lStack_150) = auVar67[7];
                      *(char *)(lVar45 + 0x75 + lStack_150) = auVar67[0];
                      *(char *)(lVar45 + 0x78 + lStack_150) = auVar67[1];
                      *(char *)(lVar45 + 0x7b + lStack_150) = auVar67[2];
                      *(char *)(lVar45 + 0x7e + lStack_150) = auVar67[3];
                      *(char *)(lVar45 + 0x81 + lStack_150) = auVar67[4];
                      *(char *)(lVar45 + 0x84 + lStack_150) = auVar67[5];
                      *(char *)(lVar45 + 0x87 + lStack_150) = auVar67[6];
                      *(char *)(lVar45 + 0x8a + lStack_150) = auVar67[7];
                      *(char *)(lVar45 + 0x8d + lStack_150) = auVar68[0];
                      *(char *)(lVar45 + 0x90 + lStack_150) = auVar68[1];
                      *(char *)(lVar45 + 0x93 + lStack_150) = auVar68[2];
                      *(char *)(lVar45 + 0x96 + lStack_150) = auVar68[3];
                      *(char *)(lVar45 + 0x99 + lStack_150) = auVar68[4];
                      *(char *)(lVar45 + 0x9c + lStack_150) = auVar68[5];
                      *(char *)(lVar45 + 0x9f + lStack_150) = auVar68[6];
                      *(char *)(lVar45 + 0xa2 + lStack_150) = auVar68[7];
                      *(char *)(lVar45 + 0xa5 + lStack_150) = auVar68[0];
                      *(char *)(lVar45 + 0xa8 + lStack_150) = auVar68[1];
                      *(char *)(lVar45 + 0xab + lStack_150) = auVar68[2];
                      *(char *)(lVar45 + 0xae + lStack_150) = auVar68[3];
                      *(char *)(lVar45 + 0xb1 + lStack_150) = auVar68[4];
                      *(char *)(lVar45 + 0xb4 + lStack_150) = auVar68[5];
                      *(char *)(lVar45 + 0xb7 + lStack_150) = auVar68[6];
                      *(char *)(lVar45 + 0xba + lStack_150) = auVar68[7];
                      lVar45 = lVar45 + 0xc0;
                      uVar43 = uStack_178;
                    } while (uVar42 < uStack_178);
                  }
                  uVar42 = 0;
                  lVar45 = 0;
                  if (uVar43 + 1 <= uStack_168) {
                    lVar44 = uVar43 * 3 + lStack_150;
                    do {
                      uVar42 = uVar42 + 1;
                      *(byte *)(lVar45 + -3 + lVar44) = bVar46;
                      *(byte *)(lVar45 + -2 + lVar44) = bVar56;
                      *(byte *)(lVar45 + -1 + lVar44) = bVar52;
                      lVar45 = lVar45 + 3;
                    } while (uVar42 < uStack_168 - uVar43);
                  }
                }
              }
              puVar76 = (ulonglong *)CONCAT44(uVar77,iStack_58);
              (*pcStack_d8)(puStack_d0,lVar57,uStack_60,uStack_c0,puVar76);
            }
            else {
              puVar76 = (ulonglong *)CONCAT44(uVar77,iStack_58);
              (*pcStack_d8)(uVar43,lVar57,uVar42,uStack_c0,puVar76);
            }
          }
        }
        iVar48 = (int)uVar49;
        uVar49 = uVar49 + 1;
        lVar45 = (longlong)iVar48 + 1;
        if (uStack_60 <= uVar49) {
          return;
        }
      } while( true );
    }
  }
  auVar74 = _DAT_14308e2c0;
  uVar54 = param_7 & 0xf;
  if (uVar54 == 6) {
    uVar50 = 0;
    lVar45 = 0;
    auVar60._0_4_ = (float)*param_8;
    auVar60._4_8_ = SUB128(ZEXT812(0),4);
    auVar60._12_4_ = 0;
    auVar63._0_4_ = (float)param_8[1];
    auVar63._4_8_ = SUB128(ZEXT812(0),4);
    auVar63._12_4_ = 0;
    auVar64._0_4_ = (float)param_8[2];
    auVar64._4_8_ = SUB128(ZEXT812(0),4);
    auVar64._12_4_ = 0;
    if (0 < iVar47) {
      auVar74 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar69 = vmovdqu32_avx512f(_DAT_14308e340);
      auVar70 = vbroadcastss_avx512f(auVar60);
      auVar73 = vbroadcastss_avx512f(auVar63);
      auVar72 = vbroadcastss_avx512f(auVar64);
      uVar49 = (longlong)(*param_5 * 3 + 2) / 3;
      do {
        if (0 < (longlong)(*param_5 * 3)) {
          if ((longlong)uVar49 < 0x10) {
            uVar43 = 0;
          }
          else {
            uVar42 = 0;
            auVar71 = vmovdqu32_avx512f(_DAT_14308e400);
            lVar57 = 0;
            do {
              auVar60 = auVar72._0_16_;
              uVar75 = vpcmpeqb_avx512vl(auVar60,auVar60);
              uVar43 = param_3 + lVar45 + lVar57;
              uVar21 = vpcmpeqb_avx512vl(auVar60,auVar60);
              uVar22 = vpcmpeqb_avx512vl(auVar60,auVar60);
              vscatterdps_avx512f(ZEXT864(uVar43) + ZEXT864(8) + auVar71 * (undefined1  [64])0x4,
                                  uVar75,auVar72);
              vscatterdps_avx512f(ZEXT864(uVar43) + ZEXT864(4) + auVar71 * (undefined1  [64])0x4,
                                  uVar21,auVar73);
              vscatterdps_avx512f(ZEXT864(uVar43) + auVar71 * (undefined1  [64])0x4,uVar22,auVar70);
              uVar42 = uVar42 + 0x10;
              lVar57 = lVar57 + 0xc0;
              uVar43 = uVar49 & 0xfffffffffffffff0;
            } while (uVar42 < (uVar49 & 0xfffffffffffffff0));
          }
          if (uVar43 + 1 <= uVar49) {
            auVar71 = vpbroadcastq_avx512f();
            lVar57 = param_3 + uVar43 * 0xc;
            vmovdqu32_avx512f(_DAT_14308e400);
            uVar75 = vpcmpgtq_avx512f(auVar71,auVar74);
            uVar21 = vpcmpgtq_avx512f(auVar71,auVar69);
            uVar59 = CONCAT11((char)uVar21,(char)uVar75);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + lVar57)) +
                                auVar72 * (undefined1  [64])0x4,(ulonglong)uVar59,auVar70);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + 4 + lVar57)) +
                                auVar72 * (undefined1  [64])0x4,(ulonglong)uVar59,auVar73);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + 8 + lVar57)) +
                                auVar72 * (undefined1  [64])0x4,(ulonglong)uVar59,auVar72);
          }
        }
        uVar50 = uVar50 + 1;
        lVar45 = lVar45 + param_4;
      } while (uVar50 < (ulonglong)(longlong)iVar47);
    }
    return;
  }
  if (uVar54 == 1) {
    uVar50 = 0;
    if (0 < iVar47) {
      uVar43 = (ulonglong)iVar47;
      auVar69 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar70 = vmovdqu32_avx512f(_DAT_14308e340);
      lVar45 = param_4 * uVar43 + param_3;
      uVar49 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar49) {
          if ((longlong)uVar49 < 0x10) {
            uVar42 = 0;
          }
          else {
            while (0x3a < (longlong)uVar49) {
              uVar55 = param_4 * uVar50 + param_3;
              uVar41 = uVar55 & 0x3f;
              if ((uVar55 & 3) == 0) {
                if ((uVar41 != 0) &&
                   (uVar41 = 0x40 - uVar41 >> 2, (longlong)uVar49 < (longlong)uVar41)) {
                  uVar41 = uVar49;
                }
              }
              else {
                uVar41 = 0;
              }
              uVar42 = uVar49 - (uVar49 - uVar41 & 0xf);
              if (uVar41 == 0) goto LAB_1409df57c;
              uVar53 = 0;
              auVar71 = vpbroadcastq_avx512f();
              auVar73 = auVar70;
              auVar72 = auVar69;
              do {
                uVar75 = vpcmpgtq_avx512f(auVar71,auVar72);
                bVar56 = (byte)uVar75;
                uVar75 = vpcmpgtq_avx512f(auVar71,auVar73);
                bVar46 = (byte)uVar75;
                auVar72 = vpaddq_avx512f(auVar72,auVar74);
                auVar73 = vpaddq_avx512f(auVar73,auVar74);
                uVar59 = CONCAT11(bVar46,bVar56);
                piVar1 = (int *)(lVar45 + uVar53 * 4);
                iVar47 = piVar1[1];
                iVar48 = piVar1[2];
                iVar23 = piVar1[3];
                iVar24 = piVar1[4];
                iVar25 = piVar1[5];
                iVar26 = piVar1[6];
                iVar27 = piVar1[7];
                iVar28 = piVar1[8];
                iVar29 = piVar1[9];
                iVar30 = piVar1[10];
                iVar31 = piVar1[0xb];
                iVar32 = piVar1[0xc];
                iVar33 = piVar1[0xd];
                iVar34 = piVar1[0xe];
                iVar35 = piVar1[0xf];
                puVar2 = (uint *)(uVar55 + uVar53 * 4);
                bVar8 = (bool)((byte)(uVar59 >> 1) & 1);
                bVar9 = (bool)((byte)(uVar59 >> 2) & 1);
                bVar10 = (bool)((byte)(uVar59 >> 3) & 1);
                bVar11 = (bool)((byte)(uVar59 >> 4) & 1);
                bVar12 = (bool)((byte)(uVar59 >> 5) & 1);
                bVar13 = (bool)((byte)(uVar59 >> 6) & 1);
                bVar14 = (bool)((byte)(uVar59 >> 7) & 1);
                bVar15 = (bool)(bVar46 >> 1 & 1);
                bVar16 = (bool)(bVar46 >> 2 & 1);
                bVar17 = (bool)(bVar46 >> 3 & 1);
                bVar18 = (bool)(bVar46 >> 4 & 1);
                bVar19 = (bool)(bVar46 >> 5 & 1);
                bVar20 = (bool)(bVar46 >> 6 & 1);
                *puVar2 = (uint)(bVar56 & 1) * (uint)(bVar56 & 1) * *piVar1 |
                          (uint)!(bool)(bVar56 & 1) * *puVar2;
                puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar59 >> 1) & 1) * iVar47 |
                            (uint)!bVar8 * puVar2[1];
                puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar59 >> 2) & 1) * iVar48 |
                            (uint)!bVar9 * puVar2[2];
                puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar59 >> 3) & 1) * iVar23 |
                            (uint)!bVar10 * puVar2[3];
                puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar59 >> 4) & 1) * iVar24 |
                            (uint)!bVar11 * puVar2[4];
                puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar59 >> 5) & 1) * iVar25 |
                            (uint)!bVar12 * puVar2[5];
                puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar59 >> 6) & 1) * iVar26 |
                            (uint)!bVar13 * puVar2[6];
                puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar59 >> 7) & 1) * iVar27 |
                            (uint)!bVar14 * puVar2[7];
                puVar2[8] = (uint)(bVar46 & 1) * (uint)(bVar46 & 1) * iVar28 |
                            (uint)!(bool)(bVar46 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar15 * (uint)(bVar46 >> 1 & 1) * iVar29 |
                            (uint)!bVar15 * puVar2[9];
                puVar2[10] = (uint)bVar16 * (uint)(bVar46 >> 2 & 1) * iVar30 |
                             (uint)!bVar16 * puVar2[10];
                puVar2[0xb] = (uint)bVar17 * (uint)(bVar46 >> 3 & 1) * iVar31 |
                              (uint)!bVar17 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar18 * (uint)(bVar46 >> 4 & 1) * iVar32 |
                              (uint)!bVar18 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar19 * (uint)(bVar46 >> 5 & 1) * iVar33 |
                              (uint)!bVar19 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar20 * (uint)(bVar46 >> 6 & 1) * iVar34 |
                              (uint)!bVar20 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar46 >> 7) * (uint)(bVar46 >> 7) * iVar35 |
                              (uint)!(bool)(bVar46 >> 7) * puVar2[0xf];
                uVar53 = uVar53 + 0x10;
              } while (uVar53 < uVar41);
              if (uVar49 != uVar41) goto LAB_1409df57c;
              uVar50 = uVar50 + 1;
              if (uVar43 <= uVar50) {
                return;
              }
            }
            uVar41 = 0;
            uVar42 = uVar49 & 0xfffffffffffffff0;
LAB_1409df57c:
            if ((longlong)(uVar41 + 0x10) <= (longlong)uVar42) {
              do {
                puVar3 = (undefined8 *)(lVar45 + uVar41 * 4);
                uVar75 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                uVar37 = puVar3[4];
                uVar38 = puVar3[5];
                uVar39 = puVar3[6];
                uVar40 = puVar3[7];
                puVar4 = (undefined8 *)(param_4 * uVar50 + param_3 + uVar41 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar75;
                puVar4[2] = uVar21;
                puVar4[3] = uVar22;
                puVar4[4] = uVar37;
                puVar4[5] = uVar38;
                puVar4[6] = uVar39;
                puVar4[7] = uVar40;
                uVar41 = uVar41 + 0x10;
              } while (uVar41 < uVar42);
            }
          }
          if (uVar42 + 1 <= uVar49) {
            auVar73 = vpbroadcastq_avx512f();
            uVar75 = vpcmpgtq_avx512f(auVar73,auVar69);
            bVar56 = (byte)uVar75;
            uVar75 = vpcmpgtq_avx512f(auVar73,auVar70);
            bVar46 = (byte)uVar75;
            uVar59 = CONCAT11(bVar46,bVar56);
            piVar1 = (int *)(lVar45 + uVar42 * 4);
            iVar47 = piVar1[1];
            iVar48 = piVar1[2];
            iVar23 = piVar1[3];
            iVar24 = piVar1[4];
            iVar25 = piVar1[5];
            iVar26 = piVar1[6];
            iVar27 = piVar1[7];
            iVar28 = piVar1[8];
            iVar29 = piVar1[9];
            iVar30 = piVar1[10];
            iVar31 = piVar1[0xb];
            iVar32 = piVar1[0xc];
            iVar33 = piVar1[0xd];
            iVar34 = piVar1[0xe];
            iVar35 = piVar1[0xf];
            puVar2 = (uint *)(param_4 * uVar50 + param_3 + uVar42 * 4);
            bVar8 = (bool)((byte)(uVar59 >> 1) & 1);
            bVar9 = (bool)((byte)(uVar59 >> 2) & 1);
            bVar10 = (bool)((byte)(uVar59 >> 3) & 1);
            bVar11 = (bool)((byte)(uVar59 >> 4) & 1);
            bVar12 = (bool)((byte)(uVar59 >> 5) & 1);
            bVar13 = (bool)((byte)(uVar59 >> 6) & 1);
            bVar14 = (bool)((byte)(uVar59 >> 7) & 1);
            bVar15 = (bool)(bVar46 >> 1 & 1);
            bVar16 = (bool)(bVar46 >> 2 & 1);
            bVar17 = (bool)(bVar46 >> 3 & 1);
            bVar18 = (bool)(bVar46 >> 4 & 1);
            bVar19 = (bool)(bVar46 >> 5 & 1);
            bVar20 = (bool)(bVar46 >> 6 & 1);
            *puVar2 = (uint)(bVar56 & 1) * (uint)(bVar56 & 1) * *piVar1 |
                      (uint)!(bool)(bVar56 & 1) * *puVar2;
            puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar59 >> 1) & 1) * iVar47 |
                        (uint)!bVar8 * puVar2[1];
            puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar59 >> 2) & 1) * iVar48 |
                        (uint)!bVar9 * puVar2[2];
            puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar59 >> 3) & 1) * iVar23 |
                        (uint)!bVar10 * puVar2[3];
            puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar59 >> 4) & 1) * iVar24 |
                        (uint)!bVar11 * puVar2[4];
            puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar59 >> 5) & 1) * iVar25 |
                        (uint)!bVar12 * puVar2[5];
            puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar59 >> 6) & 1) * iVar26 |
                        (uint)!bVar13 * puVar2[6];
            puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar59 >> 7) & 1) * iVar27 |
                        (uint)!bVar14 * puVar2[7];
            puVar2[8] = (uint)(bVar46 & 1) * (uint)(bVar46 & 1) * iVar28 |
                        (uint)!(bool)(bVar46 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar15 * (uint)(bVar46 >> 1 & 1) * iVar29 | (uint)!bVar15 * puVar2[9];
            puVar2[10] = (uint)bVar16 * (uint)(bVar46 >> 2 & 1) * iVar30 |
                         (uint)!bVar16 * puVar2[10];
            puVar2[0xb] = (uint)bVar17 * (uint)(bVar46 >> 3 & 1) * iVar31 |
                          (uint)!bVar17 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar18 * (uint)(bVar46 >> 4 & 1) * iVar32 |
                          (uint)!bVar18 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar19 * (uint)(bVar46 >> 5 & 1) * iVar33 |
                          (uint)!bVar19 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar20 * (uint)(bVar46 >> 6 & 1) * iVar34 |
                          (uint)!bVar20 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar46 >> 7) * (uint)(bVar46 >> 7) * iVar35 |
                          (uint)!(bool)(bVar46 >> 7) * puVar2[0xf];
          }
        }
        uVar50 = uVar50 + 1;
      } while (uVar50 < uVar43);
    }
  }
  else if (uVar54 == 3) {
    uStack_228 = *param_5;
    iVar48 = (int)uStack_220;
    uStack_220 = param_5[1];
    FUN_1409b07e0(uStack_228,lStack_50,(longlong)iVar47,param_3,&uStack_228,iVar48,param_7,param_8,
                  param_9,param_10,param_11);
    auVar74 = _DAT_14308e2c0;
    lVar45 = 1;
    uVar50 = 0;
    if (1 < iVar47) {
      auVar69 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar70 = vmovdqu32_avx512f(_DAT_14308e340);
      lVar57 = ((longlong)param_10 + -1) * param_4 + param_3;
      uVar49 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar49) {
          if ((longlong)uVar49 < 0x10) {
            uVar43 = 0;
          }
          else {
            while (0x3a < (longlong)uVar49) {
              uVar42 = param_3 + param_4 * lVar45;
              uVar41 = uVar42 & 0x3f;
              if ((uVar42 & 3) == 0) {
                if ((uVar41 != 0) &&
                   (uVar41 = 0x40 - uVar41 >> 2, (longlong)uVar49 < (longlong)uVar41)) {
                  uVar41 = uVar49;
                }
              }
              else {
                uVar41 = 0;
              }
              uVar43 = uVar49 - (uVar49 - uVar41 & 0xf);
              if (uVar41 == 0) goto LAB_1409df39c;
              uVar55 = 0;
              auVar71 = vpbroadcastq_avx512f();
              auVar73 = auVar70;
              auVar72 = auVar69;
              do {
                uVar75 = vpcmpgtq_avx512f(auVar71,auVar72);
                bVar56 = (byte)uVar75;
                uVar75 = vpcmpgtq_avx512f(auVar71,auVar73);
                bVar46 = (byte)uVar75;
                auVar72 = vpaddq_avx512f(auVar72,auVar74);
                auVar73 = vpaddq_avx512f(auVar73,auVar74);
                uVar59 = CONCAT11(bVar46,bVar56);
                piVar1 = (int *)((lVar57 - param_4 * lVar45) + uVar55 * 4);
                iVar48 = piVar1[1];
                iVar23 = piVar1[2];
                iVar24 = piVar1[3];
                iVar25 = piVar1[4];
                iVar26 = piVar1[5];
                iVar27 = piVar1[6];
                iVar28 = piVar1[7];
                iVar29 = piVar1[8];
                iVar30 = piVar1[9];
                iVar31 = piVar1[10];
                iVar32 = piVar1[0xb];
                iVar33 = piVar1[0xc];
                iVar34 = piVar1[0xd];
                iVar35 = piVar1[0xe];
                iVar36 = piVar1[0xf];
                puVar2 = (uint *)(uVar42 + uVar55 * 4);
                bVar8 = (bool)((byte)(uVar59 >> 1) & 1);
                bVar9 = (bool)((byte)(uVar59 >> 2) & 1);
                bVar10 = (bool)((byte)(uVar59 >> 3) & 1);
                bVar11 = (bool)((byte)(uVar59 >> 4) & 1);
                bVar12 = (bool)((byte)(uVar59 >> 5) & 1);
                bVar13 = (bool)((byte)(uVar59 >> 6) & 1);
                bVar14 = (bool)((byte)(uVar59 >> 7) & 1);
                bVar15 = (bool)(bVar46 >> 1 & 1);
                bVar16 = (bool)(bVar46 >> 2 & 1);
                bVar17 = (bool)(bVar46 >> 3 & 1);
                bVar18 = (bool)(bVar46 >> 4 & 1);
                bVar19 = (bool)(bVar46 >> 5 & 1);
                bVar20 = (bool)(bVar46 >> 6 & 1);
                *puVar2 = (uint)(bVar56 & 1) * (uint)(bVar56 & 1) * *piVar1 |
                          (uint)!(bool)(bVar56 & 1) * *puVar2;
                puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar59 >> 1) & 1) * iVar48 |
                            (uint)!bVar8 * puVar2[1];
                puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar59 >> 2) & 1) * iVar23 |
                            (uint)!bVar9 * puVar2[2];
                puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar59 >> 3) & 1) * iVar24 |
                            (uint)!bVar10 * puVar2[3];
                puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar59 >> 4) & 1) * iVar25 |
                            (uint)!bVar11 * puVar2[4];
                puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar59 >> 5) & 1) * iVar26 |
                            (uint)!bVar12 * puVar2[5];
                puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar59 >> 6) & 1) * iVar27 |
                            (uint)!bVar13 * puVar2[6];
                puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar59 >> 7) & 1) * iVar28 |
                            (uint)!bVar14 * puVar2[7];
                puVar2[8] = (uint)(bVar46 & 1) * (uint)(bVar46 & 1) * iVar29 |
                            (uint)!(bool)(bVar46 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar15 * (uint)(bVar46 >> 1 & 1) * iVar30 |
                            (uint)!bVar15 * puVar2[9];
                puVar2[10] = (uint)bVar16 * (uint)(bVar46 >> 2 & 1) * iVar31 |
                             (uint)!bVar16 * puVar2[10];
                puVar2[0xb] = (uint)bVar17 * (uint)(bVar46 >> 3 & 1) * iVar32 |
                              (uint)!bVar17 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar18 * (uint)(bVar46 >> 4 & 1) * iVar33 |
                              (uint)!bVar18 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar19 * (uint)(bVar46 >> 5 & 1) * iVar34 |
                              (uint)!bVar19 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar20 * (uint)(bVar46 >> 6 & 1) * iVar35 |
                              (uint)!bVar20 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar46 >> 7) * (uint)(bVar46 >> 7) * iVar36 |
                              (uint)!(bool)(bVar46 >> 7) * puVar2[0xf];
                uVar55 = uVar55 + 0x10;
              } while (uVar55 < uVar41);
              if (uVar49 != uVar41) goto LAB_1409df39c;
              lVar45 = uVar50 + 2;
              uVar50 = uVar50 + 1;
              if ((ulonglong)(longlong)(iVar47 + -1) <= uVar50) {
                return;
              }
            }
            uVar41 = 0;
            uVar43 = uVar49 & 0xfffffffffffffff0;
LAB_1409df39c:
            if ((longlong)(uVar41 + 0x10) <= (longlong)uVar43) {
              do {
                puVar3 = (undefined8 *)((lVar57 - param_4 * lVar45) + uVar41 * 4);
                uVar75 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                uVar37 = puVar3[4];
                uVar38 = puVar3[5];
                uVar39 = puVar3[6];
                uVar40 = puVar3[7];
                puVar4 = (undefined8 *)(param_3 + param_4 * lVar45 + uVar41 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar75;
                puVar4[2] = uVar21;
                puVar4[3] = uVar22;
                puVar4[4] = uVar37;
                puVar4[5] = uVar38;
                puVar4[6] = uVar39;
                puVar4[7] = uVar40;
                uVar41 = uVar41 + 0x10;
              } while (uVar41 < uVar43);
            }
          }
          if (uVar43 + 1 <= uVar49) {
            auVar73 = vpbroadcastq_avx512f();
            uVar75 = vpcmpgtq_avx512f(auVar73,auVar69);
            bVar56 = (byte)uVar75;
            uVar75 = vpcmpgtq_avx512f(auVar73,auVar70);
            bVar46 = (byte)uVar75;
            uVar59 = CONCAT11(bVar46,bVar56);
            piVar1 = (int *)((lVar57 - lVar45 * param_4) + uVar43 * 4);
            iVar48 = piVar1[1];
            iVar23 = piVar1[2];
            iVar24 = piVar1[3];
            iVar25 = piVar1[4];
            iVar26 = piVar1[5];
            iVar27 = piVar1[6];
            iVar28 = piVar1[7];
            iVar29 = piVar1[8];
            iVar30 = piVar1[9];
            iVar31 = piVar1[10];
            iVar32 = piVar1[0xb];
            iVar33 = piVar1[0xc];
            iVar34 = piVar1[0xd];
            iVar35 = piVar1[0xe];
            iVar36 = piVar1[0xf];
            puVar2 = (uint *)(lVar45 * param_4 + param_3 + uVar43 * 4);
            bVar8 = (bool)((byte)(uVar59 >> 1) & 1);
            bVar9 = (bool)((byte)(uVar59 >> 2) & 1);
            bVar10 = (bool)((byte)(uVar59 >> 3) & 1);
            bVar11 = (bool)((byte)(uVar59 >> 4) & 1);
            bVar12 = (bool)((byte)(uVar59 >> 5) & 1);
            bVar13 = (bool)((byte)(uVar59 >> 6) & 1);
            bVar14 = (bool)((byte)(uVar59 >> 7) & 1);
            bVar15 = (bool)(bVar46 >> 1 & 1);
            bVar16 = (bool)(bVar46 >> 2 & 1);
            bVar17 = (bool)(bVar46 >> 3 & 1);
            bVar18 = (bool)(bVar46 >> 4 & 1);
            bVar19 = (bool)(bVar46 >> 5 & 1);
            bVar20 = (bool)(bVar46 >> 6 & 1);
            *puVar2 = (uint)(bVar56 & 1) * (uint)(bVar56 & 1) * *piVar1 |
                      (uint)!(bool)(bVar56 & 1) * *puVar2;
            puVar2[1] = (uint)bVar8 * (uint)((byte)(uVar59 >> 1) & 1) * iVar48 |
                        (uint)!bVar8 * puVar2[1];
            puVar2[2] = (uint)bVar9 * (uint)((byte)(uVar59 >> 2) & 1) * iVar23 |
                        (uint)!bVar9 * puVar2[2];
            puVar2[3] = (uint)bVar10 * (uint)((byte)(uVar59 >> 3) & 1) * iVar24 |
                        (uint)!bVar10 * puVar2[3];
            puVar2[4] = (uint)bVar11 * (uint)((byte)(uVar59 >> 4) & 1) * iVar25 |
                        (uint)!bVar11 * puVar2[4];
            puVar2[5] = (uint)bVar12 * (uint)((byte)(uVar59 >> 5) & 1) * iVar26 |
                        (uint)!bVar12 * puVar2[5];
            puVar2[6] = (uint)bVar13 * (uint)((byte)(uVar59 >> 6) & 1) * iVar27 |
                        (uint)!bVar13 * puVar2[6];
            puVar2[7] = (uint)bVar14 * (uint)((byte)(uVar59 >> 7) & 1) * iVar28 |
                        (uint)!bVar14 * puVar2[7];
            puVar2[8] = (uint)(bVar46 & 1) * (uint)(bVar46 & 1) * iVar29 |
                        (uint)!(bool)(bVar46 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar15 * (uint)(bVar46 >> 1 & 1) * iVar30 | (uint)!bVar15 * puVar2[9];
            puVar2[10] = (uint)bVar16 * (uint)(bVar46 >> 2 & 1) * iVar31 |
                         (uint)!bVar16 * puVar2[10];
            puVar2[0xb] = (uint)bVar17 * (uint)(bVar46 >> 3 & 1) * iVar32 |
                          (uint)!bVar17 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar18 * (uint)(bVar46 >> 4 & 1) * iVar33 |
                          (uint)!bVar18 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar19 * (uint)(bVar46 >> 5 & 1) * iVar34 |
                          (uint)!bVar19 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar20 * (uint)(bVar46 >> 6 & 1) * iVar35 |
                          (uint)!bVar20 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar46 >> 7) * (uint)(bVar46 >> 7) * iVar36 |
                          (uint)!(bool)(bVar46 >> 7) * puVar2[0xf];
          }
        }
        lVar45 = uVar50 + 2;
        uVar50 = uVar50 + 1;
      } while (uVar50 < (ulonglong)(longlong)(iVar47 + -1));
    }
  }
  return;
}

