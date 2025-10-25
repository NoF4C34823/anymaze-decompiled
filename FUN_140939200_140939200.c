
/* WARNING: Removing unreachable block (ram,0x00014093af02) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140939200(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined8 *param_8,undefined8 param_9,
                  int param_10,undefined1 (*param_11) [32])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_218 [32];
  longlong *plStack_1f8;
  int iStack_1f0;
  uint uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  undefined1 (*pauStack_1c8) [32];
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  undefined1 *puStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  undefined1 (*pauStack_120) [32];
  uint uStack_118;
  ulonglong uStack_110;
  undefined4 *puStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  uint uStack_e8;
  code *pcStack_e0;
  undefined4 *puStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  undefined8 *puStack_b8;
  longlong lStack_b0;
  longlong *plStack_a8;
  uint uStack_a0;
  undefined4 *puStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  int iStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  lVar17 = 0;
  iVar22 = param_10 >> 1;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_218;
  lStack_68 = param_2;
  if (iVar22 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_14093b3e8;
  }
  else {
    uStack_60 = (ulonglong)iVar22;
    puVar19 = (undefined4 *)(param_4 * uStack_60 + (longlong)param_3);
    lStack_1b8 = CONCAT44(lStack_1b8._4_4_,iVar22);
    iStack_70 = param_10;
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,param_6);
    puStack_98 = param_3;
    lStack_90 = param_4;
    lStack_78 = param_1;
    do {
      plStack_1f8 = &lStack_88;
      lStack_88 = *param_5;
      lStack_80 = param_5[1];
      iStack_1f0 = (int)uStack_1b0;
      uStack_1e8 = param_7;
      puStack_1e0 = param_8;
      uStack_1d8 = param_9;
      iStack_1d0 = iStack_70;
      pauStack_1c8 = param_11;
      FUN_1408b88a0(lStack_78,lStack_68,lVar17,puVar19);
      lVar17 = lVar17 + 1;
      puVar19 = (undefined4 *)((longlong)puVar19 + lStack_90);
    } while (lVar17 < (longlong)uStack_60);
    param_1 = lStack_78;
    param_3 = puStack_98;
    param_4 = lStack_90;
    param_10 = iStack_70;
    iVar22 = (int)lStack_1b8;
    param_6 = (int)uStack_1b0;
    if ((param_7 & 0x10) != 0) {
      lStack_1b8 = 0;
      uStack_110 = 0;
      pcStack_e0 = (code *)(&PTR_FUN_14308d780)[(int)uStack_1b0];
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,param_7) & 0xffffffff0000000f;
      lVar17 = (longlong)iStack_70;
      lStack_78 = lStack_78 - lStack_68 * uStack_60;
      pauStack_120 = param_11;
      puStack_b8 = param_8;
      lStack_168 = lVar17 * 3;
      lStack_b0 = lVar17 + -1;
      puStack_170 = *param_11 + lVar17 * 0xc;
      uStack_100 = lStack_168 - 3;
      uStack_a0 = param_7 & 0xf0;
      uStack_198 = uStack_100 & 0xfffffffffffffff8;
      uStack_f0 = ((lStack_168 + -1) / 3) * 3;
      uStack_f8 = uStack_f0 >> 1;
      uStack_e8 = param_7 & 0x40;
      lStack_d0 = -uStack_60;
      lStack_130 = uStack_60 * 3;
      puStack_d8 = (undefined4 *)(*param_11 + uStack_60 * 0xc);
      uStack_c0 = param_7 & 0x80;
      uStack_188 = lStack_130 + 2;
      uStack_178 = uStack_188 / 6;
      uStack_180 = (longlong)uStack_188 / 3;
      uStack_188 = uStack_188 / 3;
      uStack_150 = (ulonglong)puStack_d8 & 0x1f;
      uStack_160 = uStack_180 & 0xfffffffffffffff0;
      lStack_128 = uStack_60 * -0xc;
      uStack_138 = (longlong)(iStack_70 * 3) - 3;
      uStack_158 = (ulonglong)puStack_d8 & 3;
      uStack_190 = 0x20 - uStack_150 >> 2;
      uStack_140 = uStack_138 >> 1;
      iVar22 = (int)uStack_1b0;
      uVar11 = 0;
      lVar17 = 0;
      auStack_1a8 = in_ZMM6._0_16_;
      uStack_c8 = param_9;
      uStack_118 = param_7;
      plStack_a8 = param_5;
      uVar8 = uStack_60;
      do {
        uStack_58 = 0;
        uStack_50 = 0;
        puVar19 = (undefined4 *)(lStack_90 * uVar11 + (longlong)puStack_98);
        lVar26 = lStack_68 * uVar11 + lStack_78;
        if (uStack_a0 == 0xf0) {
          plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iStack_70);
          (*pcStack_e0)(lVar26,puVar19,*plStack_a8,uStack_c8);
        }
        else {
          puVar27 = &uStack_58;
          if (iVar22 == 6) {
            puVar27 = puStack_b8;
          }
          lVar25 = *plStack_a8;
          if (lVar25 < lStack_b0) {
            uVar12 = 0;
            lVar13 = -uVar8;
            lVar17 = 0;
            if (lStack_d0 < (longlong)(uVar8 + lVar25)) {
              lVar14 = uVar8 * 2;
              do {
                lVar28 = lVar13;
                if (lVar13 < 0) {
                  if (uStack_118 != 0xf0) {
                    if (iVar22 == 6) {
                      if (uStack_e8 == 0) goto LAB_14093b352;
                    }
                    else {
                      if (iVar22 != 1) goto LAB_14093b2c3;
LAB_14093b49d:
                      lVar28 = 0;
                      if (uStack_e8 != 0) {
                        lVar28 = lVar13;
                      }
                    }
                  }
LAB_14093b334:
                  uVar30 = *(undefined4 *)(lVar26 + lVar28 * 0xc);
                  uVar3 = *(undefined4 *)(lVar26 + 4 + lVar28 * 0xc);
                  uVar4 = *(undefined4 *)(lVar26 + 8 + lVar28 * 0xc);
                }
                else {
                  if ((lVar13 < lVar25) || (uStack_118 == 0xf0)) goto LAB_14093b334;
                  if (iVar22 != 6) {
                    if (iVar22 == 1) {
                      if (lVar13 < 0) goto LAB_14093b49d;
                      if (uStack_c0 == 0) {
                        lVar28 = lVar25 + -1;
                      }
                    }
                    else {
LAB_14093b2c3:
                      if (iVar22 == 3) {
                        if (lVar25 < 2) {
                          if (lVar13 < 0) {
                            if (uStack_e8 == 0) {
                              lVar28 = -lVar13;
                              if (uStack_c0 == 0) {
                                lVar28 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar13) && (uStack_c0 == 0)) &&
                                  (lVar28 = -lVar13, uStack_e8 == 0)) {
                            lVar28 = 0;
                          }
                        }
                        else {
                          if (lVar13 < 0) goto LAB_14093b4b1;
                          if (lVar25 <= lVar13) {
                            while (uStack_c0 == 0) {
                              for (lVar28 = (lVar25 + -1) * 2 - lVar28; lVar28 < 0; lVar28 = -lVar28
                                  ) {
LAB_14093b4b1:
                                if (uStack_e8 != 0) goto LAB_14093b334;
                              }
                              if (lVar28 < lVar25) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_14093b334;
                  }
                  if (uStack_c0 != 0) goto LAB_14093b334;
LAB_14093b352:
                  uVar30 = *(undefined4 *)puVar27;
                  uVar3 = *(undefined4 *)((longlong)puVar27 + 4);
                  uVar4 = *(undefined4 *)(puVar27 + 1);
                }
                uVar12 = uVar12 + 1;
                lVar13 = lVar13 + 1;
                *(undefined4 *)(*pauStack_120 + lVar17) = uVar30;
                *(undefined4 *)(*pauStack_120 + lVar17 + 4) = uVar3;
                *(undefined4 *)(*pauStack_120 + lVar17 + 8) = uVar4;
                lVar17 = lVar17 + 0xc;
                uVar8 = uStack_60;
                uStack_110 = uVar11;
                puStack_108 = puVar19;
              } while (uVar12 < (ulonglong)(lVar25 + lVar14));
            }
            plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iStack_70);
            (*pcStack_e0)(puStack_d8,puVar19,lVar25,uStack_c8);
          }
          else {
            if (uStack_e8 == 0) {
              if (0 < (longlong)uStack_100) {
                if (6 < (longlong)uStack_100) {
                  lStack_148 = lStack_68 * lVar17 + lStack_78;
                  lVar13 = lStack_168 * 4 + -0xc;
                  if ((lVar13 <= (longlong)puStack_d8 - lStack_148) ||
                     (lVar13 <= -((longlong)puStack_d8 - lStack_148))) {
                    if ((longlong)uStack_100 < 8) {
LAB_14093b41e:
                      uVar12 = 0;
                    }
                    else {
                      if ((longlong)uStack_100 < 0xbd) {
                        uVar29 = 0;
                        uVar12 = uStack_198;
                      }
                      else {
                        uVar29 = uStack_150;
                        if (((uStack_150 != 0) && (uVar29 = uStack_190, uStack_158 != 0)) ||
                           ((longlong)uStack_100 < (longlong)(uVar29 + 8))) goto LAB_14093b41e;
                        uVar12 = uStack_100 - (uStack_100 - uVar29 & 7);
                        uVar18 = 0;
                        if (uVar29 != 0) {
                          do {
                            puStack_d8[uVar18] = *(undefined4 *)(lStack_148 + uVar18 * 4);
                            uVar18 = uVar18 + 1;
                          } while (uVar18 < uVar29);
                        }
                      }
                      do {
                        puVar1 = (undefined8 *)(lStack_148 + uVar29 * 4);
                        uVar5 = puVar1[1];
                        uVar6 = puVar1[2];
                        uVar7 = puVar1[3];
                        puVar2 = (undefined8 *)(puStack_d8 + uVar29);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar5;
                        puVar2[2] = uVar6;
                        puVar2[3] = uVar7;
                        uVar29 = uVar29 + 8;
                      } while (uVar29 < uVar12);
                    }
                    for (; uVar12 < uStack_100; uVar12 = uVar12 + 1) {
                      puStack_d8[uVar12] = *(undefined4 *)(lStack_148 + uVar12 * 4);
                    }
                    goto LAB_14093a04d;
                  }
                }
                lVar13 = 1;
                if (uStack_140 != 0) {
                  lVar13 = lStack_68 * lVar17 + lStack_78;
                  uVar12 = 0;
                  do {
                    uVar29 = uVar12;
                    puStack_d8[uVar29 * 2] = *(undefined4 *)(lVar13 + uVar29 * 8);
                    puStack_d8[uVar29 * 2 + 1] = *(undefined4 *)(lVar13 + 4 + uVar29 * 8);
                    uVar12 = uVar29 + 1;
                  } while (uVar12 < uStack_140);
                  lVar13 = uVar29 + 2 + uVar12;
                }
                uVar12 = lVar13 - 1;
                if (uVar12 < uStack_138) {
                  puStack_d8[uVar12] = *(undefined4 *)(lVar17 * lStack_68 + lStack_78 + uVar12 * 4);
                }
              }
LAB_14093a04d:
              if (iVar22 == 1) {
                if (0 < lStack_130) {
                  if ((longlong)uStack_180 < 7) {
                    uVar30 = puStack_d8[2];
LAB_14093a519:
                    uVar29 = 0;
                  }
                  else {
                    if ((0xb < (longlong)pauStack_120 - (longlong)puStack_d8) ||
                       ((longlong)(uStack_180 * 0xc) <=
                        -((longlong)pauStack_120 - (longlong)puStack_d8))) {
                      uVar30 = *puStack_d8;
                      uVar3 = puStack_d8[1];
                      uVar4 = puStack_d8[2];
                      if ((longlong)uStack_180 < 0x10) {
                        uVar12 = 0;
                      }
                      else {
                        uVar29 = 0;
                        pauVar9 = pauStack_120;
                        do {
                          uVar29 = uVar29 + 0x10;
                          *(undefined4 *)*pauVar9 = uVar30;
                          *(undefined4 *)(*pauVar9 + 0xc) = uVar30;
                          *(undefined4 *)(*pauVar9 + 0x18) = uVar30;
                          *(undefined4 *)(pauVar9[1] + 4) = uVar30;
                          *(undefined4 *)(pauVar9[1] + 0x10) = uVar30;
                          *(undefined4 *)(pauVar9[1] + 0x1c) = uVar30;
                          *(undefined4 *)(pauVar9[2] + 8) = uVar30;
                          *(undefined4 *)(pauVar9[2] + 0x14) = uVar30;
                          *(undefined4 *)pauVar9[3] = uVar30;
                          *(undefined4 *)(pauVar9[3] + 0xc) = uVar30;
                          *(undefined4 *)(pauVar9[3] + 0x18) = uVar30;
                          *(undefined4 *)(pauVar9[4] + 4) = uVar30;
                          *(undefined4 *)(pauVar9[4] + 0x10) = uVar30;
                          *(undefined4 *)(pauVar9[4] + 0x1c) = uVar30;
                          *(undefined4 *)(pauVar9[5] + 8) = uVar30;
                          *(undefined4 *)(pauVar9[5] + 0x14) = uVar30;
                          *(undefined4 *)(*pauVar9 + 4) = uVar3;
                          *(undefined4 *)(*pauVar9 + 0x10) = uVar3;
                          *(undefined4 *)(*pauVar9 + 0x1c) = uVar3;
                          *(undefined4 *)(pauVar9[1] + 8) = uVar3;
                          *(undefined4 *)(pauVar9[1] + 0x14) = uVar3;
                          *(undefined4 *)pauVar9[2] = uVar3;
                          *(undefined4 *)(pauVar9[2] + 0xc) = uVar3;
                          *(undefined4 *)(pauVar9[2] + 0x18) = uVar3;
                          *(undefined4 *)(pauVar9[3] + 4) = uVar3;
                          *(undefined4 *)(pauVar9[3] + 0x10) = uVar3;
                          *(undefined4 *)(pauVar9[3] + 0x1c) = uVar3;
                          *(undefined4 *)(pauVar9[4] + 8) = uVar3;
                          *(undefined4 *)(pauVar9[4] + 0x14) = uVar3;
                          *(undefined4 *)pauVar9[5] = uVar3;
                          *(undefined4 *)(pauVar9[5] + 0xc) = uVar3;
                          *(undefined4 *)(pauVar9[5] + 0x18) = uVar3;
                          *(undefined4 *)(*pauVar9 + 8) = uVar4;
                          *(undefined4 *)(*pauVar9 + 0x14) = uVar4;
                          *(undefined4 *)pauVar9[1] = uVar4;
                          *(undefined4 *)(pauVar9[1] + 0xc) = uVar4;
                          *(undefined4 *)(pauVar9[1] + 0x18) = uVar4;
                          *(undefined4 *)(pauVar9[2] + 4) = uVar4;
                          *(undefined4 *)(pauVar9[2] + 0x10) = uVar4;
                          *(undefined4 *)(pauVar9[2] + 0x1c) = uVar4;
                          *(undefined4 *)(pauVar9[3] + 8) = uVar4;
                          *(undefined4 *)(pauVar9[3] + 0x14) = uVar4;
                          *(undefined4 *)pauVar9[4] = uVar4;
                          *(undefined4 *)(pauVar9[4] + 0xc) = uVar4;
                          *(undefined4 *)(pauVar9[4] + 0x18) = uVar4;
                          *(undefined4 *)(pauVar9[5] + 4) = uVar4;
                          *(undefined4 *)(pauVar9[5] + 0x10) = uVar4;
                          *(undefined4 *)(pauVar9[5] + 0x1c) = uVar4;
                          pauVar9 = pauVar9 + 6;
                          uVar12 = uStack_160;
                        } while (uVar29 < uStack_160);
                      }
                      if (uVar12 + 1 <= uStack_180) {
                        uVar29 = uStack_180 - uVar12;
                        if ((longlong)uVar29 < 2) {
                          uVar18 = 0;
                        }
                        else {
                          uVar24 = 0;
                          uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar30);
                          uVar18 = uVar29 & 0xfffffffffffffffe;
                          uVar20 = uVar24;
                          do {
                            uVar20 = uVar20 + 2;
                            *(undefined4 *)(*pauStack_120 + uVar24 + 8 + uVar12 * 0xc) = uVar4;
                            *(undefined4 *)(*pauStack_120 + uVar24 + 0x14 + uVar12 * 0xc) = uVar4;
                            *(undefined4 *)(*pauStack_120 + uVar24 + 4 + uVar12 * 0xc) = uVar3;
                            *(undefined4 *)(*pauStack_120 + uVar24 + 0x10 + uVar12 * 0xc) = uVar3;
                            *(undefined4 *)(*pauStack_120 + uVar24 + uVar12 * 0xc) = uVar30;
                            *(undefined4 *)(*pauStack_120 + uVar24 + 0xc + uVar12 * 0xc) = uVar30;
                            uVar24 = uVar24 + 0x18;
                            uVar8 = uStack_60;
                            uStack_110 = uVar11;
                          } while (uVar20 < uVar18);
                        }
                        lVar17 = uVar18 * 0xc;
                        for (; uVar18 < uVar29; uVar18 = uVar18 + 1) {
                          *(undefined4 *)(*pauStack_120 + lVar17 + uVar12 * 0xc) = uVar30;
                          *(undefined4 *)(*pauStack_120 + lVar17 + 4 + uVar12 * 0xc) = uVar3;
                          *(undefined4 *)(*pauStack_120 + lVar17 + 8 + uVar12 * 0xc) = uVar4;
                          lVar17 = lVar17 + 0xc;
                        }
                      }
                      goto LAB_14093a953;
                    }
                    uVar30 = puStack_d8[2];
                    if ((longlong)uStack_180 < 0x10) goto LAB_14093a519;
                    uVar12 = 0;
                    pauVar9 = pauStack_120;
                    do {
                      uVar3 = *puStack_d8;
                      uVar12 = uVar12 + 0x10;
                      *(undefined4 *)*pauVar9 = uVar3;
                      *(undefined4 *)(*pauVar9 + 0xc) = uVar3;
                      *(undefined4 *)(*pauVar9 + 0x18) = uVar3;
                      *(undefined4 *)(pauVar9[1] + 4) = uVar3;
                      *(undefined4 *)(pauVar9[1] + 0x10) = uVar3;
                      *(undefined4 *)(pauVar9[1] + 0x1c) = uVar3;
                      *(undefined4 *)(pauVar9[2] + 8) = uVar3;
                      *(undefined4 *)(pauVar9[2] + 0x14) = uVar3;
                      *(undefined4 *)pauVar9[3] = uVar3;
                      *(undefined4 *)(pauVar9[3] + 0xc) = uVar3;
                      *(undefined4 *)(pauVar9[3] + 0x18) = uVar3;
                      *(undefined4 *)(pauVar9[4] + 4) = uVar3;
                      *(undefined4 *)(pauVar9[4] + 0x10) = uVar3;
                      *(undefined4 *)(pauVar9[4] + 0x1c) = uVar3;
                      *(undefined4 *)(pauVar9[5] + 8) = uVar3;
                      *(undefined4 *)(pauVar9[5] + 0x14) = uVar3;
                      uVar3 = puStack_d8[1];
                      *(undefined4 *)(*pauVar9 + 4) = uVar3;
                      *(undefined4 *)(*pauVar9 + 0x10) = uVar3;
                      *(undefined4 *)(*pauVar9 + 0x1c) = uVar3;
                      *(undefined4 *)(pauVar9[1] + 8) = uVar3;
                      *(undefined4 *)(pauVar9[1] + 0x14) = uVar3;
                      *(undefined4 *)pauVar9[2] = uVar3;
                      *(undefined4 *)(pauVar9[2] + 0xc) = uVar3;
                      *(undefined4 *)(pauVar9[2] + 0x18) = uVar3;
                      *(undefined4 *)(pauVar9[3] + 4) = uVar3;
                      *(undefined4 *)(pauVar9[3] + 0x10) = uVar3;
                      *(undefined4 *)(pauVar9[3] + 0x1c) = uVar3;
                      *(undefined4 *)(pauVar9[4] + 8) = uVar3;
                      *(undefined4 *)(pauVar9[4] + 0x14) = uVar3;
                      *(undefined4 *)pauVar9[5] = uVar3;
                      *(undefined4 *)(pauVar9[5] + 0xc) = uVar3;
                      *(undefined4 *)(pauVar9[5] + 0x18) = uVar3;
                      *(undefined4 *)(*pauVar9 + 8) = uVar30;
                      *(undefined4 *)(*pauVar9 + 0x14) = uVar30;
                      *(undefined4 *)pauVar9[1] = uVar30;
                      *(undefined4 *)(pauVar9[1] + 0xc) = uVar30;
                      *(undefined4 *)(pauVar9[1] + 0x18) = uVar30;
                      *(undefined4 *)(pauVar9[2] + 4) = uVar30;
                      *(undefined4 *)(pauVar9[2] + 0x10) = uVar30;
                      *(undefined4 *)(pauVar9[2] + 0x1c) = uVar30;
                      *(undefined4 *)(pauVar9[3] + 8) = uVar30;
                      *(undefined4 *)(pauVar9[3] + 0x14) = uVar30;
                      *(undefined4 *)pauVar9[4] = uVar30;
                      *(undefined4 *)(pauVar9[4] + 0xc) = uVar30;
                      *(undefined4 *)(pauVar9[4] + 0x18) = uVar30;
                      *(undefined4 *)(pauVar9[5] + 4) = uVar30;
                      *(undefined4 *)(pauVar9[5] + 0x10) = uVar30;
                      *(undefined4 *)(pauVar9[5] + 0x1c) = uVar30;
                      pauVar9 = pauVar9 + 6;
                      uVar29 = uStack_160;
                    } while (uVar12 < uStack_160);
                  }
                  lVar17 = uVar29 * 0xc;
                  for (; uVar29 < uStack_180; uVar29 = uVar29 + 1) {
                    *(undefined4 *)(*pauStack_120 + lVar17) = *puStack_d8;
                    *(undefined4 *)(*pauStack_120 + lVar17 + 4) = puStack_d8[1];
                    *(undefined4 *)(*pauStack_120 + lVar17 + 8) = uVar30;
                    lVar17 = lVar17 + 0xc;
                  }
                }
              }
              else if (iVar22 == 3) {
                if (0 < lStack_130) {
                  lVar17 = 1;
                  lVar14 = 0;
                  lVar13 = 0;
                  uVar12 = 0;
                  if (uStack_178 != 0) {
                    do {
                      uVar29 = uVar12;
                      uVar12 = uVar29 + 1;
                      *(undefined4 *)(*pauStack_120 + lVar14) =
                           *(undefined4 *)(puStack_170 + lVar13 + -0xc);
                      *(undefined4 *)(*pauStack_120 + lVar14 + 4) =
                           *(undefined4 *)(puStack_170 + lVar13 + -8);
                      *(undefined4 *)(*pauStack_120 + lVar14 + 8) =
                           *(undefined4 *)(puStack_170 + lVar13 + -4);
                      *(undefined4 *)(*pauStack_120 + lVar14 + 0xc) =
                           *(undefined4 *)(puStack_170 + lVar13 + -0x18);
                      *(undefined4 *)(*pauStack_120 + lVar14 + 0x10) =
                           *(undefined4 *)(puStack_170 + lVar13 + -0x14);
                      lVar17 = lVar13 + -0x10;
                      lVar13 = lVar13 + -0x18;
                      *(undefined4 *)(*pauStack_120 + lVar14 + 0x14) =
                           *(undefined4 *)(puStack_170 + lVar17);
                      lVar14 = lVar14 + 0x18;
                    } while (uVar12 < uStack_178);
                    lVar17 = uVar29 + 2 + uVar12;
                  }
                  if (lVar17 - 1U < uStack_188) {
                    lVar13 = -((lVar17 - 1U) * 8 + -4 + lVar17 * 4);
                    *(undefined4 *)(pauStack_120[-1] + lVar17 * 0xc + 0x14) =
                         *(undefined4 *)(puStack_170 + lVar13 + -0xc);
                    *(undefined4 *)(pauStack_120[-1] + lVar17 * 0xc + 0x18) =
                         *(undefined4 *)(puStack_170 + lVar13 + -8);
                    *(undefined4 *)(pauStack_120[-1] + lVar17 * 0xc + 0x1c) =
                         *(undefined4 *)(puStack_170 + lVar13 + -4);
                  }
                }
              }
              else if ((iVar22 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_180) {
                  lVar17 = (longlong)puVar27 + (4 - (longlong)pauStack_120);
                  if ((((longlong)(uStack_180 * 0xc) <= lVar17) || (7 < -lVar17)) &&
                     ((3 < (longlong)pauStack_120 - (longlong)puVar27 ||
                      ((longlong)(uStack_180 * 0xc) <= -((longlong)pauStack_120 - (longlong)puVar27)
                      )))) {
                    uVar30 = *(undefined4 *)puVar27;
                    uVar3 = *(undefined4 *)((longlong)puVar27 + 4);
                    uVar4 = *(undefined4 *)(puVar27 + 1);
                    if ((longlong)uStack_180 < 0x10) {
                      uVar12 = 0;
                    }
                    else {
                      uVar29 = 0;
                      auVar34._4_4_ = uVar30;
                      auVar34._0_4_ = uVar30;
                      auVar34._8_4_ = uVar30;
                      auVar34._12_4_ = uVar30;
                      auVar34._16_4_ = uVar30;
                      auVar34._20_4_ = uVar30;
                      auVar34._24_4_ = uVar30;
                      auVar34._28_4_ = uVar30;
                      auVar37._4_4_ = uVar3;
                      auVar37._0_4_ = uVar3;
                      auVar37._8_4_ = uVar3;
                      auVar37._12_4_ = uVar3;
                      auVar37._16_4_ = uVar3;
                      auVar37._20_4_ = uVar3;
                      auVar37._24_4_ = uVar3;
                      auVar37._28_4_ = uVar3;
                      auVar31._4_4_ = uVar4;
                      auVar31._0_4_ = uVar4;
                      auVar31._8_4_ = uVar4;
                      auVar31._12_4_ = uVar4;
                      auVar31._16_4_ = uVar4;
                      auVar31._20_4_ = uVar4;
                      auVar31._24_4_ = uVar4;
                      auVar31._28_4_ = uVar4;
                      auVar35 = vpermd_avx2(_DAT_14308d640,auVar34);
                      auVar34 = vpermd_avx2(_DAT_14308d660,auVar37);
                      auVar37 = vpermd_avx2(_DAT_14308d680,auVar31);
                      auVar31 = vpblendd_avx2(auVar35,auVar34,0x92);
                      auVar34 = vpblendd_avx2(auVar34,auVar37,0x92);
                      auVar35 = vpblendd_avx2(auVar37,auVar35,0x92);
                      auVar37 = vpblendd_avx2(auVar31,auVar35,0x24);
                      auVar31 = vpblendd_avx2(auVar34,auVar31,0x24);
                      auVar34 = vpblendd_avx2(auVar35,auVar34,0x24);
                      pauVar9 = pauStack_120;
                      do {
                        uVar29 = uVar29 + 0x10;
                        *(undefined4 *)pauVar9[3] = uVar30;
                        *(undefined4 *)(pauVar9[3] + 0xc) = uVar30;
                        *(undefined4 *)(pauVar9[3] + 0x18) = uVar30;
                        *(undefined4 *)(pauVar9[4] + 4) = uVar30;
                        *(undefined4 *)(pauVar9[4] + 0x10) = uVar30;
                        *(undefined4 *)(pauVar9[4] + 0x1c) = uVar30;
                        *(undefined4 *)(pauVar9[5] + 8) = uVar30;
                        *(undefined4 *)(pauVar9[5] + 0x14) = uVar30;
                        *(undefined4 *)(pauVar9[3] + 4) = uVar3;
                        *(undefined4 *)(pauVar9[3] + 0x10) = uVar3;
                        *(undefined4 *)(pauVar9[3] + 0x1c) = uVar3;
                        *(undefined4 *)(pauVar9[4] + 8) = uVar3;
                        *(undefined4 *)(pauVar9[4] + 0x14) = uVar3;
                        *(undefined4 *)pauVar9[5] = uVar3;
                        *(undefined4 *)(pauVar9[5] + 0xc) = uVar3;
                        *(undefined4 *)(pauVar9[5] + 0x18) = uVar3;
                        *pauVar9 = auVar37;
                        pauVar9[1] = auVar34;
                        pauVar9[2] = auVar31;
                        *(undefined4 *)(pauVar9[3] + 8) = uVar4;
                        *(undefined4 *)(pauVar9[3] + 0x14) = uVar4;
                        *(undefined4 *)pauVar9[4] = uVar4;
                        *(undefined4 *)(pauVar9[4] + 0xc) = uVar4;
                        *(undefined4 *)(pauVar9[4] + 0x18) = uVar4;
                        *(undefined4 *)(pauVar9[5] + 4) = uVar4;
                        *(undefined4 *)(pauVar9[5] + 0x10) = uVar4;
                        *(undefined4 *)(pauVar9[5] + 0x1c) = uVar4;
                        pauVar9 = pauVar9 + 6;
                        uVar12 = uStack_160;
                      } while (uVar29 < uStack_160);
                    }
                    if (uVar12 + 1 <= uStack_180) {
                      uVar29 = uStack_180 - uVar12;
                      if ((longlong)uVar29 < 2) {
                        uVar18 = 0;
                      }
                      else {
                        uVar24 = 0;
                        lStack_1b8 = CONCAT44(lStack_1b8._4_4_,uVar30);
                        uVar18 = uVar29 & 0xfffffffffffffffe;
                        uVar20 = uVar24;
                        do {
                          uVar20 = uVar20 + 2;
                          *(undefined4 *)(*pauStack_120 + uVar24 + 8 + uVar12 * 0xc) = uVar4;
                          *(undefined4 *)(*pauStack_120 + uVar24 + 0x14 + uVar12 * 0xc) = uVar4;
                          *(undefined4 *)(*pauStack_120 + uVar24 + 4 + uVar12 * 0xc) = uVar3;
                          *(undefined4 *)(*pauStack_120 + uVar24 + 0x10 + uVar12 * 0xc) = uVar3;
                          *(undefined4 *)(*pauStack_120 + uVar24 + uVar12 * 0xc) = uVar30;
                          *(undefined4 *)(*pauStack_120 + uVar24 + 0xc + uVar12 * 0xc) = uVar30;
                          uVar24 = uVar24 + 0x18;
                          uVar8 = uStack_60;
                          uStack_110 = uVar11;
                        } while (uVar20 < uVar18);
                      }
                      lVar17 = uVar18 * 0xc;
                      for (; uVar18 < uVar29; uVar18 = uVar18 + 1) {
                        *(undefined4 *)(*pauStack_120 + lVar17 + uVar12 * 0xc) = uVar30;
                        *(undefined4 *)(*pauStack_120 + lVar17 + 4 + uVar12 * 0xc) = uVar3;
                        *(undefined4 *)(*pauStack_120 + lVar17 + 8 + uVar12 * 0xc) = uVar4;
                        lVar17 = lVar17 + 0xc;
                      }
                    }
                    goto LAB_14093a953;
                  }
                }
                lVar17 = 1;
                lVar13 = 0;
                uVar12 = 0;
                if (uStack_178 != 0) {
                  do {
                    uVar29 = uVar12;
                    uVar12 = uVar29 + 1;
                    *(undefined4 *)(*pauStack_120 + lVar13) = *(undefined4 *)puVar27;
                    *(undefined4 *)(*pauStack_120 + lVar13 + 4) =
                         *(undefined4 *)((longlong)puVar27 + 4);
                    *(undefined4 *)(*pauStack_120 + lVar13 + 8) = *(undefined4 *)(puVar27 + 1);
                    *(undefined4 *)(*pauStack_120 + lVar13 + 0xc) = *(undefined4 *)puVar27;
                    *(undefined4 *)(*pauStack_120 + lVar13 + 0x10) =
                         *(undefined4 *)((longlong)puVar27 + 4);
                    *(undefined4 *)(*pauStack_120 + lVar13 + 0x14) = *(undefined4 *)(puVar27 + 1);
                    lVar13 = lVar13 + 0x18;
                  } while (uVar12 < uStack_178);
                  lVar17 = uVar29 + 2 + uVar12;
                }
                if (lVar17 - 1U < uStack_188) {
                  *(undefined4 *)(pauStack_120[-1] + lVar17 * 0xc + 0x14) = *(undefined4 *)puVar27;
                  *(undefined4 *)(pauStack_120[-1] + lVar17 * 0xc + 0x18) =
                       *(undefined4 *)((longlong)puVar27 + 4);
                  *(undefined4 *)(pauStack_120[-1] + lVar17 * 0xc + 0x1c) =
                       *(undefined4 *)(puVar27 + 1);
                }
              }
LAB_14093a953:
              plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iStack_70);
              (*pcStack_e0)(puStack_d8,puVar19,uVar8);
              lVar25 = lVar25 - uVar8;
              lVar26 = lVar26 + lStack_130 * 4;
              puVar19 = puVar19 + lStack_130;
            }
            if (uStack_c0 == 0) {
              if ((longlong)uVar8 < lVar25) {
                lVar25 = lVar25 - uVar8;
                plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iStack_70);
                (*pcStack_e0)(lVar26,puVar19,lVar25);
                lVar26 = lVar26 + lVar25 * 0xc;
                puVar19 = puVar19 + lVar25 * 3;
              }
              if (0 < (longlong)uStack_100) {
                lVar17 = 1;
                if (uStack_f8 != 0) {
                  uVar12 = 0;
                  do {
                    uVar29 = uVar12;
                    *(undefined4 *)(*pauStack_120 + uVar29 * 8) =
                         *(undefined4 *)(lStack_128 + lVar26 + uVar29 * 8);
                    *(undefined4 *)(*pauStack_120 + uVar29 * 8 + 4) =
                         *(undefined4 *)(lStack_128 + lVar26 + 4 + uVar29 * 8);
                    uVar12 = uVar29 + 1;
                  } while (uVar12 < uStack_f8);
                  lVar17 = uVar29 + 2 + uVar12;
                }
                if (lVar17 - 1U < uStack_f0) {
                  *(undefined4 *)(pauStack_120[-1] + lVar17 * 4 + 0x1c) =
                       *(undefined4 *)(lVar26 + lStack_128 + (lVar17 - 1U) * 4);
                }
              }
              if (iVar22 == 1) {
                if (0 < lStack_130) {
                  if ((longlong)uStack_180 < 7) {
                    lVar17 = 1;
                    lVar26 = 0;
                    uVar12 = 0;
                    if (uStack_178 != 0) {
                      do {
                        uVar29 = uVar12;
                        uVar12 = uVar29 + 1;
                        *(undefined4 *)(puStack_170 + lVar26 + -0xc) =
                             *(undefined4 *)(puStack_170 + -0x18);
                        *(undefined4 *)(puStack_170 + lVar26 + -8) =
                             *(undefined4 *)(puStack_170 + -0x14);
                        *(undefined4 *)(puStack_170 + lVar26 + -4) =
                             *(undefined4 *)(puStack_170 + -0x10);
                        *(undefined4 *)(puStack_170 + lVar26) = *(undefined4 *)(puStack_170 + -0x18)
                        ;
                        *(undefined4 *)(puStack_170 + lVar26 + 4) =
                             *(undefined4 *)(puStack_170 + -0x14);
                        *(undefined4 *)(puStack_170 + lVar26 + 8) =
                             *(undefined4 *)(puStack_170 + -0x10);
                        lVar26 = lVar26 + 0x18;
                      } while (uVar12 < uStack_178);
                      lVar17 = uVar29 + 2 + uVar12;
                    }
                    if (lVar17 - 1U < uStack_188) {
                      lVar17 = lVar17 * 3;
                      *(undefined4 *)(puStack_170 + (lVar17 + -6) * 4) =
                           *(undefined4 *)(puStack_170 + -0x18);
                      *(undefined4 *)(puStack_170 + (lVar17 + -5) * 4) =
                           *(undefined4 *)(puStack_170 + -0x14);
                      *(undefined4 *)(puStack_170 + (lVar17 + -4) * 4) =
                           *(undefined4 *)(puStack_170 + -0x10);
                    }
                  }
                  else {
                    uVar30 = *(undefined4 *)(puStack_170 + -0x18);
                    uVar3 = *(undefined4 *)(puStack_170 + -0x14);
                    uVar4 = *(undefined4 *)(puStack_170 + -0x10);
                    if ((longlong)uStack_180 < 0x10) {
                      uVar12 = 0;
                    }
                    else {
                      uVar29 = 0;
                      auVar35._4_4_ = uVar30;
                      auVar35._0_4_ = uVar30;
                      auVar35._8_4_ = uVar30;
                      auVar35._12_4_ = uVar30;
                      auVar35._16_4_ = uVar30;
                      auVar35._20_4_ = uVar30;
                      auVar35._24_4_ = uVar30;
                      auVar35._28_4_ = uVar30;
                      auVar39._4_4_ = uVar3;
                      auVar39._0_4_ = uVar3;
                      auVar39._8_4_ = uVar3;
                      auVar39._12_4_ = uVar3;
                      auVar39._16_4_ = uVar3;
                      auVar39._20_4_ = uVar3;
                      auVar39._24_4_ = uVar3;
                      auVar39._28_4_ = uVar3;
                      auVar33._4_4_ = uVar4;
                      auVar33._0_4_ = uVar4;
                      auVar33._8_4_ = uVar4;
                      auVar33._12_4_ = uVar4;
                      auVar33._16_4_ = uVar4;
                      auVar33._20_4_ = uVar4;
                      auVar33._24_4_ = uVar4;
                      auVar33._28_4_ = uVar4;
                      auVar35 = vpermd_avx2(_DAT_14308d640,auVar35);
                      auVar34 = vpermd_avx2(_DAT_14308d660,auVar39);
                      auVar37 = vpermd_avx2(_DAT_14308d680,auVar33);
                      auVar31 = vpblendd_avx2(auVar35,auVar34,0x92);
                      auVar34 = vpblendd_avx2(auVar34,auVar37,0x92);
                      auVar35 = vpblendd_avx2(auVar37,auVar35,0x92);
                      auVar37 = vpblendd_avx2(auVar31,auVar35,0x24);
                      auVar31 = vpblendd_avx2(auVar34,auVar31,0x24);
                      auVar34 = vpblendd_avx2(auVar35,auVar34,0x24);
                      puVar10 = puStack_170;
                      do {
                        uVar29 = uVar29 + 0x10;
                        *(undefined4 *)(puVar10 + 0x54) = uVar30;
                        *(undefined4 *)(puVar10 + 0x60) = uVar30;
                        *(undefined4 *)(puVar10 + 0x6c) = uVar30;
                        *(undefined4 *)(puVar10 + 0x78) = uVar30;
                        *(undefined4 *)(puVar10 + 0x84) = uVar30;
                        *(undefined4 *)(puVar10 + 0x90) = uVar30;
                        *(undefined4 *)(puVar10 + 0x9c) = uVar30;
                        *(undefined4 *)(puVar10 + 0xa8) = uVar30;
                        *(undefined4 *)(puVar10 + 0x58) = uVar3;
                        *(undefined4 *)(puVar10 + 100) = uVar3;
                        *(undefined4 *)(puVar10 + 0x70) = uVar3;
                        *(undefined4 *)(puVar10 + 0x7c) = uVar3;
                        *(undefined4 *)(puVar10 + 0x88) = uVar3;
                        *(undefined4 *)(puVar10 + 0x94) = uVar3;
                        *(undefined4 *)(puVar10 + 0xa0) = uVar3;
                        *(undefined4 *)(puVar10 + 0xac) = uVar3;
                        *(undefined1 (*) [32])(puVar10 + -0xc) = auVar37;
                        *(undefined1 (*) [32])(puVar10 + 0x14) = auVar34;
                        *(undefined1 (*) [32])(puVar10 + 0x34) = auVar31;
                        *(undefined4 *)(puVar10 + 0x5c) = uVar4;
                        *(undefined4 *)(puVar10 + 0x68) = uVar4;
                        *(undefined4 *)(puVar10 + 0x74) = uVar4;
                        *(undefined4 *)(puVar10 + 0x80) = uVar4;
                        *(undefined4 *)(puVar10 + 0x8c) = uVar4;
                        *(undefined4 *)(puVar10 + 0x98) = uVar4;
                        *(undefined4 *)(puVar10 + 0xa4) = uVar4;
                        *(undefined4 *)(puVar10 + 0xb0) = uVar4;
                        puVar10 = puVar10 + 0xc0;
                        uVar12 = uStack_160;
                      } while (uVar29 < uStack_160);
                    }
                    if (uVar12 + 1 <= uStack_180) {
                      uVar29 = uStack_180 - uVar12;
                      if ((longlong)uVar29 < 2) {
                        uVar18 = 0;
                      }
                      else {
                        uVar20 = 0;
                        uVar18 = uVar29 & 0xfffffffffffffffe;
                        lVar17 = 0;
                        do {
                          uVar20 = uVar20 + 2;
                          *(undefined4 *)(puStack_170 + lVar17 + -4 + uVar12 * 0xc) = uVar4;
                          *(undefined4 *)(puStack_170 + lVar17 + 8 + uVar12 * 0xc) = uVar4;
                          *(undefined4 *)(puStack_170 + lVar17 + -8 + uVar12 * 0xc) = uVar3;
                          *(undefined4 *)(puStack_170 + lVar17 + 4 + uVar12 * 0xc) = uVar3;
                          *(undefined4 *)(puStack_170 + lVar17 + -0xc + uVar12 * 0xc) = uVar30;
                          *(undefined4 *)(puStack_170 + lVar17 + uVar12 * 0xc) = uVar30;
                          lVar17 = lVar17 + 0x18;
                        } while (uVar20 < uVar18);
                      }
                      lVar17 = uVar18 * 0xc;
                      for (; uVar18 < uVar29; uVar18 = uVar18 + 1) {
                        *(undefined4 *)(puStack_170 + lVar17 + -0xc + uVar12 * 0xc) = uVar30;
                        *(undefined4 *)(puStack_170 + lVar17 + -8 + uVar12 * 0xc) = uVar3;
                        *(undefined4 *)(puStack_170 + lVar17 + -4 + uVar12 * 0xc) = uVar4;
                        lVar17 = lVar17 + 0xc;
                      }
                    }
                  }
                }
              }
              else if (iVar22 == 3) {
                if (0 < lStack_130) {
                  lVar17 = 1;
                  lVar26 = 0;
                  lVar25 = 0;
                  uVar12 = 0;
                  if (uStack_178 != 0) {
                    do {
                      uVar29 = uVar12;
                      uVar12 = uVar29 + 1;
                      *(undefined4 *)(puStack_170 + lVar26 + -0xc) =
                           *(undefined4 *)(puStack_170 + lVar25 + -0x24);
                      *(undefined4 *)(puStack_170 + lVar26 + -8) =
                           *(undefined4 *)(puStack_170 + lVar25 + -0x20);
                      *(undefined4 *)(puStack_170 + lVar26 + -4) =
                           *(undefined4 *)(puStack_170 + lVar25 + -0x1c);
                      *(undefined4 *)(puStack_170 + lVar26) =
                           *(undefined4 *)(puStack_170 + lVar25 + -0x30);
                      *(undefined4 *)(puStack_170 + lVar26 + 4) =
                           *(undefined4 *)(puStack_170 + lVar25 + -0x2c);
                      lVar17 = lVar25 + -0x28;
                      lVar25 = lVar25 + -0x18;
                      *(undefined4 *)(puStack_170 + lVar26 + 8) =
                           *(undefined4 *)(puStack_170 + lVar17);
                      lVar26 = lVar26 + 0x18;
                    } while (uVar12 < uStack_178);
                    lVar17 = uVar29 + 2 + uVar12;
                  }
                  if (lVar17 - 1U < uStack_188) {
                    lVar26 = lVar17 * 3;
                    lVar17 = -((lVar17 - 1U) * 8 + -4 + lVar17 * 4);
                    *(undefined4 *)(puStack_170 + (lVar26 + -6) * 4) =
                         *(undefined4 *)(puStack_170 + lVar17 + -0x24);
                    *(undefined4 *)(puStack_170 + (lVar26 + -5) * 4) =
                         *(undefined4 *)(puStack_170 + lVar17 + -0x20);
                    *(undefined4 *)(puStack_170 + (lVar26 + -4) * 4) =
                         *(undefined4 *)(puStack_170 + lVar17 + -0x1c);
                  }
                }
              }
              else if ((iVar22 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_180) {
                  lVar17 = (longlong)puVar27 + (4 - ((longlong)puStack_170 + -0xc));
                  if ((((longlong)(uStack_180 * 0xc) <= lVar17) || (7 < -lVar17)) &&
                     ((lVar17 = ((longlong)puStack_170 + -0xc) - (longlong)puVar27, 3 < lVar17 ||
                      ((longlong)(uStack_180 * 0xc) <= -lVar17)))) {
                    uVar30 = *(undefined4 *)puVar27;
                    uVar3 = *(undefined4 *)((longlong)puVar27 + 4);
                    uVar4 = *(undefined4 *)(puVar27 + 1);
                    if ((longlong)uStack_180 < 0x10) {
                      uVar12 = 0;
                    }
                    else {
                      uVar29 = 0;
                      auVar36._4_4_ = uVar30;
                      auVar36._0_4_ = uVar30;
                      auVar36._8_4_ = uVar30;
                      auVar36._12_4_ = uVar30;
                      auVar36._16_4_ = uVar30;
                      auVar36._20_4_ = uVar30;
                      auVar36._24_4_ = uVar30;
                      auVar36._28_4_ = uVar30;
                      auVar38._4_4_ = uVar3;
                      auVar38._0_4_ = uVar3;
                      auVar38._8_4_ = uVar3;
                      auVar38._12_4_ = uVar3;
                      auVar38._16_4_ = uVar3;
                      auVar38._20_4_ = uVar3;
                      auVar38._24_4_ = uVar3;
                      auVar38._28_4_ = uVar3;
                      auVar32._4_4_ = uVar4;
                      auVar32._0_4_ = uVar4;
                      auVar32._8_4_ = uVar4;
                      auVar32._12_4_ = uVar4;
                      auVar32._16_4_ = uVar4;
                      auVar32._20_4_ = uVar4;
                      auVar32._24_4_ = uVar4;
                      auVar32._28_4_ = uVar4;
                      auVar35 = vpermd_avx2(_DAT_14308d640,auVar36);
                      auVar34 = vpermd_avx2(_DAT_14308d660,auVar38);
                      auVar37 = vpermd_avx2(_DAT_14308d680,auVar32);
                      auVar31 = vpblendd_avx2(auVar35,auVar34,0x92);
                      auVar34 = vpblendd_avx2(auVar34,auVar37,0x92);
                      auVar35 = vpblendd_avx2(auVar37,auVar35,0x92);
                      auVar37 = vpblendd_avx2(auVar31,auVar35,0x24);
                      auVar31 = vpblendd_avx2(auVar34,auVar31,0x24);
                      auVar34 = vpblendd_avx2(auVar35,auVar34,0x24);
                      puVar10 = puStack_170;
                      do {
                        uVar29 = uVar29 + 0x10;
                        *(undefined4 *)(puVar10 + 0x54) = uVar30;
                        *(undefined4 *)(puVar10 + 0x60) = uVar30;
                        *(undefined4 *)(puVar10 + 0x6c) = uVar30;
                        *(undefined4 *)(puVar10 + 0x78) = uVar30;
                        *(undefined4 *)(puVar10 + 0x84) = uVar30;
                        *(undefined4 *)(puVar10 + 0x90) = uVar30;
                        *(undefined4 *)(puVar10 + 0x9c) = uVar30;
                        *(undefined4 *)(puVar10 + 0xa8) = uVar30;
                        *(undefined4 *)(puVar10 + 0x58) = uVar3;
                        *(undefined4 *)(puVar10 + 100) = uVar3;
                        *(undefined4 *)(puVar10 + 0x70) = uVar3;
                        *(undefined4 *)(puVar10 + 0x7c) = uVar3;
                        *(undefined4 *)(puVar10 + 0x88) = uVar3;
                        *(undefined4 *)(puVar10 + 0x94) = uVar3;
                        *(undefined4 *)(puVar10 + 0xa0) = uVar3;
                        *(undefined4 *)(puVar10 + 0xac) = uVar3;
                        *(undefined1 (*) [32])(puVar10 + -0xc) = auVar37;
                        *(undefined1 (*) [32])(puVar10 + 0x14) = auVar34;
                        *(undefined1 (*) [32])(puVar10 + 0x34) = auVar31;
                        *(undefined4 *)(puVar10 + 0x5c) = uVar4;
                        *(undefined4 *)(puVar10 + 0x68) = uVar4;
                        *(undefined4 *)(puVar10 + 0x74) = uVar4;
                        *(undefined4 *)(puVar10 + 0x80) = uVar4;
                        *(undefined4 *)(puVar10 + 0x8c) = uVar4;
                        *(undefined4 *)(puVar10 + 0x98) = uVar4;
                        *(undefined4 *)(puVar10 + 0xa4) = uVar4;
                        *(undefined4 *)(puVar10 + 0xb0) = uVar4;
                        puVar10 = puVar10 + 0xc0;
                        uVar12 = uStack_160;
                      } while (uVar29 < uStack_160);
                    }
                    if (uVar12 + 1 <= uStack_180) {
                      uVar29 = uStack_180 - uVar12;
                      if ((longlong)uVar29 < 2) {
                        uVar18 = 0;
                      }
                      else {
                        uVar20 = 0;
                        uVar18 = uVar29 & 0xfffffffffffffffe;
                        lVar17 = 0;
                        do {
                          uVar20 = uVar20 + 2;
                          *(undefined4 *)(puStack_170 + lVar17 + -4 + uVar12 * 0xc) = uVar4;
                          *(undefined4 *)(puStack_170 + lVar17 + 8 + uVar12 * 0xc) = uVar4;
                          *(undefined4 *)(puStack_170 + lVar17 + -8 + uVar12 * 0xc) = uVar3;
                          *(undefined4 *)(puStack_170 + lVar17 + 4 + uVar12 * 0xc) = uVar3;
                          *(undefined4 *)(puStack_170 + lVar17 + -0xc + uVar12 * 0xc) = uVar30;
                          *(undefined4 *)(puStack_170 + lVar17 + uVar12 * 0xc) = uVar30;
                          lVar17 = lVar17 + 0x18;
                        } while (uVar20 < uVar18);
                      }
                      lVar17 = uVar18 * 0xc;
                      for (; uVar18 < uVar29; uVar18 = uVar18 + 1) {
                        *(undefined4 *)(puStack_170 + lVar17 + -0xc + uVar12 * 0xc) = uVar30;
                        *(undefined4 *)(puStack_170 + lVar17 + -8 + uVar12 * 0xc) = uVar3;
                        *(undefined4 *)(puStack_170 + lVar17 + -4 + uVar12 * 0xc) = uVar4;
                        lVar17 = lVar17 + 0xc;
                      }
                    }
                    goto LAB_14093b1fc;
                  }
                }
                lVar17 = 1;
                lVar26 = 0;
                uVar12 = 0;
                if (uStack_178 != 0) {
                  do {
                    uVar29 = uVar12;
                    uVar12 = uVar29 + 1;
                    *(undefined4 *)(puStack_170 + lVar26 + -0xc) = *(undefined4 *)puVar27;
                    *(undefined4 *)(puStack_170 + lVar26 + -8) =
                         *(undefined4 *)((longlong)puVar27 + 4);
                    *(undefined4 *)(puStack_170 + lVar26 + -4) = *(undefined4 *)(puVar27 + 1);
                    *(undefined4 *)(puStack_170 + lVar26) = *(undefined4 *)puVar27;
                    *(undefined4 *)(puStack_170 + lVar26 + 4) =
                         *(undefined4 *)((longlong)puVar27 + 4);
                    *(undefined4 *)(puStack_170 + lVar26 + 8) = *(undefined4 *)(puVar27 + 1);
                    lVar26 = lVar26 + 0x18;
                  } while (uVar12 < uStack_178);
                  lVar17 = uVar29 + 2 + uVar12;
                }
                if (lVar17 - 1U < uStack_188) {
                  lVar17 = lVar17 * 3;
                  *(undefined4 *)(puStack_170 + (lVar17 + -6) * 4) = *(undefined4 *)puVar27;
                  *(undefined4 *)(puStack_170 + (lVar17 + -5) * 4) =
                       *(undefined4 *)((longlong)puVar27 + 4);
                  *(undefined4 *)(puStack_170 + (lVar17 + -4) * 4) = *(undefined4 *)(puVar27 + 1);
                }
              }
LAB_14093b1fc:
              plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iStack_70);
              (*pcStack_e0)(puStack_d8,puVar19,uVar8,uStack_c8);
            }
            else {
              plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iStack_70);
              (*pcStack_e0)(lVar26,puVar19,lVar25,uStack_c8);
            }
          }
        }
        iVar16 = (int)uVar11;
        uVar11 = uVar11 + 1;
        lVar17 = (longlong)iVar16 + 1;
      } while (uVar11 < uVar8);
LAB_14093b3e8:
      if ((uStack_48 ^ (ulonglong)auStack_218) == DAT_1436b4680) {
        return;
      }
      goto LAB_140939b60;
    }
  }
  uVar15 = param_7 & 0xf;
  if (uVar15 == 6) {
    uVar11 = (ulonglong)iVar22;
    if (0 < (longlong)uVar11) {
      lStack_1b8 = *param_5 * 3;
      uVar8 = lStack_1b8 + 2;
      uVar12 = (longlong)uVar8 / 3;
      if (((param_4 < (longlong)uVar12) ||
          ((puVar27 = (undefined8 *)
                      ((uVar11 - 1) * param_4 + (uVar12 * 3 + -3) * 4 + 0xb + (longlong)param_3),
           param_8 < puVar27 && (param_3 < (undefined4 *)((longlong)param_8 + 3U))))) ||
         ((param_3 < (undefined4 *)((longlong)param_8 + 0xbU) &&
          ((undefined8 *)((longlong)param_8 + 4U) < puVar27)))) {
        uVar12 = 0;
        lVar17 = 0;
        do {
          if (0 < lStack_1b8) {
            lVar26 = 1;
            uVar29 = 0;
            uVar18 = 0;
            if (uVar8 / 6 != 0) {
              do {
                uVar20 = uVar18;
                uVar18 = uVar20 + 1;
                *(undefined4 *)((longlong)param_3 + uVar29 + lVar17) = *(undefined4 *)param_8;
                *(undefined4 *)((longlong)param_3 + uVar29 + 4 + lVar17) =
                     *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)((longlong)param_3 + uVar29 + 8 + lVar17) =
                     *(undefined4 *)(param_8 + 1);
                *(undefined4 *)((longlong)param_3 + uVar29 + 0xc + lVar17) = *(undefined4 *)param_8;
                *(undefined4 *)((longlong)param_3 + uVar29 + 0x10 + lVar17) =
                     *(undefined4 *)((longlong)param_8 + 4);
                *(undefined4 *)((longlong)param_3 + uVar29 + 0x14 + lVar17) =
                     *(undefined4 *)(param_8 + 1);
                uVar29 = uVar29 + 0x18;
              } while (uVar18 < uVar8 / 6);
              lVar26 = uVar20 + 2 + uVar18;
            }
            if (lVar26 - 1U < uVar8 / 3) {
              lVar26 = lVar26 * 3 + -3;
              *(undefined4 *)((longlong)param_3 + lVar17 + lVar26 * 4) = *(undefined4 *)param_8;
              *(undefined4 *)((longlong)param_3 + lVar17 + lVar26 * 4 + 4) =
                   *(undefined4 *)((longlong)param_8 + 4);
              *(undefined4 *)((longlong)param_3 + lVar17 + lVar26 * 4 + 8) =
                   *(undefined4 *)(param_8 + 1);
            }
          }
          uVar12 = uVar12 + 1;
          lVar17 = lVar17 + param_4;
        } while (uVar12 < uVar11);
      }
      else {
        uVar8 = 0;
        puStack_b8 = param_8;
        uVar29 = 0;
        do {
          if (0 < lStack_1b8) {
            uVar18 = uVar29;
            puVar19 = param_3;
            uVar20 = uVar29;
            if (0xf < (longlong)uVar12) {
              do {
                uVar30 = *(undefined4 *)param_8;
                uVar20 = uVar20 + 0x10;
                *puVar19 = uVar30;
                puVar19[3] = uVar30;
                puVar19[6] = uVar30;
                puVar19[9] = uVar30;
                puVar19[0xc] = uVar30;
                puVar19[0xf] = uVar30;
                puVar19[0x12] = uVar30;
                puVar19[0x15] = uVar30;
                puVar19[0x18] = uVar30;
                puVar19[0x1b] = uVar30;
                puVar19[0x1e] = uVar30;
                puVar19[0x21] = uVar30;
                puVar19[0x24] = uVar30;
                puVar19[0x27] = uVar30;
                puVar19[0x2a] = uVar30;
                puVar19[0x2d] = uVar30;
                uVar30 = *(undefined4 *)((longlong)param_8 + 4);
                puVar19[1] = uVar30;
                puVar19[4] = uVar30;
                puVar19[7] = uVar30;
                puVar19[10] = uVar30;
                puVar19[0xd] = uVar30;
                puVar19[0x10] = uVar30;
                puVar19[0x13] = uVar30;
                puVar19[0x16] = uVar30;
                puVar19[0x19] = uVar30;
                puVar19[0x1c] = uVar30;
                puVar19[0x1f] = uVar30;
                puVar19[0x22] = uVar30;
                puVar19[0x25] = uVar30;
                puVar19[0x28] = uVar30;
                puVar19[0x2b] = uVar30;
                puVar19[0x2e] = uVar30;
                uVar30 = *(undefined4 *)(param_8 + 1);
                puVar19[2] = uVar30;
                puVar19[5] = uVar30;
                puVar19[8] = uVar30;
                puVar19[0xb] = uVar30;
                puVar19[0xe] = uVar30;
                puVar19[0x11] = uVar30;
                puVar19[0x14] = uVar30;
                puVar19[0x17] = uVar30;
                puVar19[0x1a] = uVar30;
                puVar19[0x1d] = uVar30;
                puVar19[0x20] = uVar30;
                puVar19[0x23] = uVar30;
                puVar19[0x26] = uVar30;
                puVar19[0x29] = uVar30;
                puVar19[0x2c] = uVar30;
                puVar19[0x2f] = uVar30;
                uVar18 = uVar12 & 0xfffffffffffffff0;
                puVar19 = puVar19 + 0x30;
              } while (uVar20 < (uVar12 & 0xfffffffffffffff0));
            }
            if (uVar18 + 1 <= uVar12) {
              uVar24 = uVar12 - uVar18;
              uVar20 = uVar29;
              if (7 < (longlong)uVar24) {
                uVar20 = uVar24 & 0xfffffffffffffff8;
                uVar21 = uVar29;
                uVar23 = uVar29;
                do {
                  uVar30 = *(undefined4 *)param_8;
                  uVar23 = uVar23 + 8;
                  *(undefined4 *)((longlong)param_3 + uVar21 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0xc + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x18 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x24 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x30 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x3c + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x48 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x54 + uVar18 * 0xc) = uVar30;
                  uVar30 = *(undefined4 *)((longlong)param_8 + 4);
                  *(undefined4 *)((longlong)param_3 + uVar21 + 4 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x10 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x1c + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x28 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x34 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x40 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x4c + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x58 + uVar18 * 0xc) = uVar30;
                  uVar30 = *(undefined4 *)(param_8 + 1);
                  *(undefined4 *)((longlong)param_3 + uVar21 + 8 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x14 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x20 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x2c + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x38 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x44 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x50 + uVar18 * 0xc) = uVar30;
                  *(undefined4 *)((longlong)param_3 + uVar21 + 0x5c + uVar18 * 0xc) = uVar30;
                  uVar21 = uVar21 + 0x60;
                  lStack_90 = param_4;
                  puStack_98 = param_3;
                } while (uVar23 < uVar20);
              }
              for (; uVar20 < uVar24; uVar20 = uVar20 + 1) {
                param_3[uVar18 * 3 + uVar20 * 3] = *(undefined4 *)param_8;
                param_3[uVar18 * 3 + uVar20 * 3 + 1] = *(undefined4 *)((longlong)param_8 + 4);
                param_3[uVar18 * 3 + uVar20 * 3 + 2] = *(undefined4 *)(param_8 + 1);
              }
            }
          }
          uVar8 = uVar8 + 1;
          param_3 = (undefined4 *)((longlong)param_3 + param_4);
        } while (uVar8 < uVar11);
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_218) == DAT_1436b4680) {
      return;
    }
LAB_140939b60:
    uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  if (uVar15 == 1) {
    uVar11 = 0;
    if (0 < iVar22) {
      lVar17 = param_4 * iVar22;
      uVar12 = 0;
      uVar8 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar8) {
          uVar29 = uVar12;
          if (7 < (longlong)uVar8) {
            puVar19 = (undefined4 *)(param_4 * uVar11 + (longlong)param_3);
            uVar29 = uVar8 & 0xfffffffffffffff8;
            uVar18 = uVar12;
            if (0xbc < (longlong)uVar8) {
              uVar18 = (ulonglong)puVar19 & 0x1f;
              if (uVar18 != 0) {
                uVar29 = uVar12;
                if (((ulonglong)puVar19 & 3) != 0) goto LAB_140939675;
                uVar18 = 0x20 - uVar18 >> 2;
              }
              uVar29 = uVar12;
              if ((longlong)uVar8 < (longlong)(uVar18 + 8)) goto LAB_140939675;
              uVar29 = uVar8 - (uVar8 - uVar18 & 7);
              uVar20 = uVar12;
              if (uVar18 != 0) {
                do {
                  puVar19[uVar20] = *(undefined4 *)((longlong)param_3 + uVar20 * 4 + lVar17);
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar18);
              }
            }
            do {
              puVar27 = (undefined8 *)((longlong)param_3 + uVar18 * 4 + lVar17);
              uVar5 = puVar27[1];
              uVar6 = puVar27[2];
              uVar7 = puVar27[3];
              puVar1 = (undefined8 *)(puVar19 + uVar18);
              *puVar1 = *puVar27;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              uVar18 = uVar18 + 8;
            } while (uVar18 < uVar29);
          }
LAB_140939675:
          if (uVar29 < uVar8) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar29 * 4 + param_4 * uVar11) =
                   *(undefined4 *)((longlong)param_3 + uVar29 * 4 + lVar17);
              uVar29 = uVar29 + 1;
            } while (uVar29 < uVar8);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulonglong)(longlong)iVar22);
    }
    if ((uStack_48 ^ (ulonglong)auStack_218) != DAT_1436b4680) goto LAB_1409393da;
  }
  else {
    if (uVar15 == 3) {
      plStack_1f8 = &lStack_1b8;
      lStack_1b8 = *param_5;
      uStack_1b0 = param_5[1];
      uStack_1e8 = param_7;
      puStack_1e0 = param_8;
      uStack_1d8 = param_9;
      pauStack_1c8 = param_11;
      iStack_1f0 = param_6;
      iStack_1d0 = param_10;
      FUN_1408b88a0(param_1,lStack_68,(longlong)iVar22);
      lVar17 = 1;
      uVar11 = 0;
      if (1 < iVar22) {
        uVar12 = 0;
        lVar26 = ((longlong)param_10 + -1) * param_4;
        uVar8 = *param_5 * 3;
        do {
          if (0 < (longlong)uVar8) {
            uVar29 = uVar12;
            if (7 < (longlong)uVar8) {
              lVar25 = param_4 * lVar17;
              puVar19 = (undefined4 *)((longlong)param_3 + lVar25);
              if ((longlong)uVar8 < 0xbd) {
                lVar25 = (longlong)param_3 + (lVar26 - lVar25);
                uVar18 = uVar12;
                uVar29 = uVar8 & 0xfffffffffffffff8;
              }
              else {
                uVar18 = (ulonglong)puVar19 & 0x1f;
                if (uVar18 != 0) {
                  if (((ulonglong)puVar19 & 3) != 0) goto LAB_140939515;
                  uVar18 = 0x20 - uVar18 >> 2;
                }
                if ((longlong)uVar8 < (longlong)(uVar18 + 8)) goto LAB_140939515;
                lVar25 = (longlong)param_3 + (lVar26 - lVar25);
                uVar29 = uVar8 - (uVar8 - uVar18 & 7);
                uVar20 = uVar12;
                if (uVar18 != 0) {
                  do {
                    puVar19[uVar20] = *(undefined4 *)(lVar25 + uVar20 * 4);
                    uVar20 = uVar20 + 1;
                    lStack_90 = param_4;
                  } while (uVar20 < uVar18);
                }
              }
              do {
                puVar27 = (undefined8 *)(lVar25 + uVar18 * 4);
                uVar5 = puVar27[1];
                uVar6 = puVar27[2];
                uVar7 = puVar27[3];
                puVar1 = (undefined8 *)(puVar19 + uVar18);
                *puVar1 = *puVar27;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                uVar18 = uVar18 + 8;
              } while (uVar18 < uVar29);
            }
LAB_140939515:
            if (uVar29 < uVar8) {
              do {
                *(undefined4 *)((longlong)param_3 + uVar29 * 4 + lVar17 * param_4) =
                     *(undefined4 *)((longlong)param_3 + uVar29 * 4 + (lVar26 - lVar17 * param_4));
                uVar29 = uVar29 + 1;
              } while (uVar29 < uVar8);
            }
          }
          lVar17 = uVar11 + 2;
          uVar11 = uVar11 + 1;
        } while (uVar11 < (ulonglong)(longlong)(iVar22 + -1));
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_218) != DAT_1436b4680) {
LAB_1409393da:
      uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
  }
  return;
}

