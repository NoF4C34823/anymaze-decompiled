
/* WARNING: Removing unreachable block (ram,0x000140988928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409877e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9
                  ,int param_10,longlong param_11)

{
  longlong lVar1;
  undefined1 auVar2 [64];
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  code *pcVar13;
  undefined2 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined2 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined2 uVar26;
  longlong lVar27;
  ushort uVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auStack_1b8 [32];
  int iStack_198;
  undefined2 auStack_180 [92];
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  int iStack_78;
  undefined4 *puStack_70;
  undefined4 uStack_48;
  undefined2 uStack_44;
  ulonglong uStack_40;
  
  auVar35 = _DAT_14308dc40;
  param_1 = param_1 + param_2 * param_3;
  uStack_40 = DAT_1436b4680 ^ (ulonglong)auStack_1b8;
  uStack_48 = 0;
  uStack_44 = 0;
  lVar20 = (longlong)param_6;
  uVar11 = param_7 & 0xf;
  lVar27 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_198 = param_10;
    (*(code *)(&PTR_LAB_14308df20)[lVar20])(param_1,param_4,*param_5,param_9);
    if ((uStack_40 ^ (ulonglong)auStack_1b8) == DAT_1436b4680) {
      return;
    }
    goto LAB_140988e65;
  }
  uVar12 = *param_5;
  puStack_70 = &uStack_48;
  if (uVar11 == 6) {
    puStack_70 = param_8;
  }
  pcVar13 = (code *)(longlong)param_10;
  if ((longlong)uVar12 < (longlong)pcVar13 + -1) {
    lVar16 = -lVar27;
    lVar18 = 0;
    if (lVar16 < (longlong)(lVar27 + uVar12)) {
      uVar17 = param_7 & 0x80;
      iStack_78 = param_10;
      uStack_c8 = CONCAT44(uStack_c8._4_4_,param_7) & 0xffffffff00000040;
      do {
        lVar8 = lVar16;
        if (((lVar16 < 0) || ((longlong)uVar12 <= lVar16)) && (param_7 != 0xf0)) {
          if (uVar11 != 6) {
            if (uVar11 == 1) {
              if (lVar16 < 0) {
                lVar8 = 0;
                if ((uint)uStack_c8 != 0) {
                  lVar8 = lVar16;
                }
              }
              else if (uVar17 == 0) {
                lVar8 = uVar12 - 1;
              }
            }
            else if (uVar11 == 3) {
              if ((longlong)uVar12 < 2) {
                if (lVar16 < 0) {
                  if ((uint)uStack_c8 == 0) {
                    lVar8 = -lVar16;
                    if (uVar17 == 0) {
                      lVar8 = 0;
                    }
                  }
                }
                else if (((0 < lVar16) && (uVar17 == 0)) && (lVar8 = -lVar16, (uint)uStack_c8 == 0))
                {
                  lVar8 = 0;
                }
              }
              else if ((lVar16 < 0) || ((longlong)uVar12 <= lVar16)) {
                if (lVar16 < 0) goto LAB_140988e08;
                while (uVar17 == 0) {
                  for (lVar8 = (uVar12 - 1) * 2 - lVar8; lVar8 < 0; lVar8 = -lVar8) {
LAB_140988e08:
                    if ((uint)uStack_c8 != 0) goto LAB_140988c95;
                  }
                  if (lVar8 < (longlong)uVar12) break;
                }
              }
            }
            goto LAB_140988c95;
          }
          uVar6 = (uint)uStack_c8;
          if (-1 < lVar16) {
            uVar6 = uVar17;
          }
          if (uVar6 != 0) goto LAB_140988c95;
          uVar23 = *(undefined2 *)puStack_70;
          uVar26 = *(undefined2 *)((longlong)puStack_70 + 2);
          uVar14 = *(undefined2 *)(puStack_70 + 1);
        }
        else {
LAB_140988c95:
          uVar23 = *(undefined2 *)(param_1 + lVar8 * 6);
          uVar26 = *(undefined2 *)(param_1 + 2 + lVar8 * 6);
          uVar14 = *(undefined2 *)(param_1 + 4 + lVar8 * 6);
        }
        lVar16 = lVar16 + 1;
        *(undefined2 *)(lVar18 + param_11) = uVar23;
        *(undefined2 *)(lVar18 + 2 + param_11) = uVar26;
        *(undefined2 *)(lVar18 + 4 + param_11) = uVar14;
        lVar18 = lVar18 + 6;
        lStack_88 = param_4;
        lStack_80 = lVar27;
      } while (lVar16 < (longlong)(lVar27 + uVar12));
    }
    iStack_198 = param_10;
    (*(code *)(&PTR_LAB_14308df20)[lVar20])(param_11 + lVar27 * 6,param_4,uVar12,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar18 = (longlong)pcVar13 * 3;
      lStack_98 = lVar27 * 3;
      lVar16 = lVar27 * 6;
      uStack_a0 = param_11 + lVar27 * 6;
      uVar9 = lVar18 - 3;
      if (uVar9 != 0 && SCARRY8(lVar18,-3) == (longlong)uVar9 < 0) {
        if (6 < (longlong)uVar9) {
          lVar8 = (longlong)pcVar13 * 6 + -6;
          if ((lVar8 <= (longlong)(uStack_a0 - param_1)) ||
             (lVar8 <= (longlong)-(uStack_a0 - param_1))) {
            if ((longlong)uVar9 < 0x20) {
              uVar7 = 0;
            }
            else {
              if ((longlong)uVar9 < 0x76) {
                uVar10 = 0;
                uVar7 = uVar9 & 0xffffffffffffffe0;
              }
              else {
                uVar10 = uStack_a0 & 0x3f;
                if ((uStack_a0 & 1) == 0) {
                  if ((uVar10 != 0) &&
                     (uVar10 = 0x40 - uVar10 >> 1, (longlong)uVar9 < (longlong)uVar10)) {
                    uVar10 = uVar9;
                  }
                }
                else {
                  uVar10 = 0;
                }
                uVar7 = uVar9 - (uVar9 - uVar10 & 0x1f);
                if (uVar10 != 0) {
                  uVar15 = 0;
                  auVar32 = vmovdqu32_avx512f(_DAT_14308dc80);
                  auVar33 = vmovdqu32_avx512f(_DAT_14308dcc0);
                  auVar34 = vpbroadcastq_avx512f();
                  uVar21 = uVar15;
                  do {
                    uVar3 = vpcmpgtq_avx512f(auVar34,auVar32);
                    uVar15 = uVar15 + 0x10;
                    uVar4 = vpcmpgtq_avx512f(auVar34,auVar33);
                    bVar5 = (byte)uVar4;
                    auVar32 = vpaddq_avx512f(auVar32,auVar35);
                    auVar33 = vpaddq_avx512f(auVar33,auVar35);
                    uVar28 = CONCAT11(bVar5,(byte)uVar3);
                    auVar29 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(uVar21 + param_1));
                    auVar30._2_2_ = (ushort)((byte)(uVar28 >> 1) & 1) * auVar29._2_2_;
                    auVar30._0_2_ = (ushort)((byte)uVar3 & 1) * auVar29._0_2_;
                    auVar30._4_2_ = (ushort)((byte)(uVar28 >> 2) & 1) * auVar29._4_2_;
                    auVar30._6_2_ = (ushort)((byte)(uVar28 >> 3) & 1) * auVar29._6_2_;
                    auVar30._8_2_ = (ushort)((byte)(uVar28 >> 4) & 1) * auVar29._8_2_;
                    auVar30._10_2_ = (ushort)((byte)(uVar28 >> 5) & 1) * auVar29._10_2_;
                    auVar30._12_2_ = (ushort)((byte)(uVar28 >> 6) & 1) * auVar29._12_2_;
                    auVar30._14_2_ = (ushort)((byte)(uVar28 >> 7) & 1) * auVar29._14_2_;
                    auVar30._16_2_ = (ushort)(bVar5 & 1) * auVar29._16_2_;
                    auVar30._18_2_ = (ushort)(bVar5 >> 1 & 1) * auVar29._18_2_;
                    auVar30._20_2_ = (ushort)(bVar5 >> 2 & 1) * auVar29._20_2_;
                    auVar30._22_2_ = (ushort)(bVar5 >> 3 & 1) * auVar29._22_2_;
                    auVar30._24_2_ = (ushort)(bVar5 >> 4 & 1) * auVar29._24_2_;
                    auVar30._26_2_ = (ushort)(bVar5 >> 5 & 1) * auVar29._26_2_;
                    auVar30._28_2_ = (ushort)(bVar5 >> 6 & 1) * auVar29._28_2_;
                    auVar30._30_2_ = (ushort)(bVar5 >> 7) * auVar29._30_2_;
                    auVar29 = vmovdqu16_avx512vl(auVar30);
                    *(undefined1 (*) [32])(uVar21 + uStack_a0) = auVar29;
                    uVar21 = uVar21 + 0x20;
                  } while (uVar15 < uVar10);
                  if (uVar9 == uVar10) goto LAB_140987ba8;
                }
              }
              if ((longlong)(uVar10 + 0x20) <= (longlong)uVar7) {
                do {
                  auVar35 = vmovdqu32_avx512f(*(undefined1 (*) [64])(param_1 + uVar10 * 2));
                  *(undefined1 (*) [64])(uStack_a0 + uVar10 * 2) = auVar35;
                  uVar10 = uVar10 + 0x20;
                } while (uVar10 < uVar7);
              }
            }
            auVar35 = _DAT_14308dc40;
            if (uVar7 + 1 <= uVar9) {
              uStack_c8 = param_1 + uVar7 * 2;
              uVar10 = 0;
              auVar32 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar33 = vmovdqu32_avx512f(_DAT_14308dcc0);
              auVar34 = vpbroadcastq_avx512f();
              lVar8 = 0;
              do {
                uVar3 = vpcmpgtq_avx512f(auVar34,auVar32);
                uVar10 = uVar10 + 0x10;
                uVar4 = vpcmpgtq_avx512f(auVar34,auVar33);
                bVar5 = (byte)uVar4;
                auVar32 = vpaddq_avx512f(auVar32,auVar35);
                auVar33 = vpaddq_avx512f(auVar33,auVar35);
                uVar28 = CONCAT11(bVar5,(byte)uVar3);
                auVar29 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar8 + uStack_c8));
                auVar31._2_2_ = (ushort)((byte)(uVar28 >> 1) & 1) * auVar29._2_2_;
                auVar31._0_2_ = (ushort)((byte)uVar3 & 1) * auVar29._0_2_;
                auVar31._4_2_ = (ushort)((byte)(uVar28 >> 2) & 1) * auVar29._4_2_;
                auVar31._6_2_ = (ushort)((byte)(uVar28 >> 3) & 1) * auVar29._6_2_;
                auVar31._8_2_ = (ushort)((byte)(uVar28 >> 4) & 1) * auVar29._8_2_;
                auVar31._10_2_ = (ushort)((byte)(uVar28 >> 5) & 1) * auVar29._10_2_;
                auVar31._12_2_ = (ushort)((byte)(uVar28 >> 6) & 1) * auVar29._12_2_;
                auVar31._14_2_ = (ushort)((byte)(uVar28 >> 7) & 1) * auVar29._14_2_;
                auVar31._16_2_ = (ushort)(bVar5 & 1) * auVar29._16_2_;
                auVar31._18_2_ = (ushort)(bVar5 >> 1 & 1) * auVar29._18_2_;
                auVar31._20_2_ = (ushort)(bVar5 >> 2 & 1) * auVar29._20_2_;
                auVar31._22_2_ = (ushort)(bVar5 >> 3 & 1) * auVar29._22_2_;
                auVar31._24_2_ = (ushort)(bVar5 >> 4 & 1) * auVar29._24_2_;
                auVar31._26_2_ = (ushort)(bVar5 >> 5 & 1) * auVar29._26_2_;
                auVar31._28_2_ = (ushort)(bVar5 >> 6 & 1) * auVar29._28_2_;
                auVar31._30_2_ = (ushort)(bVar5 >> 7) * auVar29._30_2_;
                auVar29 = vmovdqu16_avx512vl(auVar31);
                *(undefined1 (*) [32])(lVar8 + uStack_a0 + uVar7 * 2) = auVar29;
                lVar8 = lVar8 + 0x20;
              } while (uVar10 < uVar9 - uVar7);
            }
            goto LAB_140987ba8;
          }
        }
        lVar8 = 1;
        uVar10 = (longlong)(param_10 * 3) - 3;
        uVar7 = uVar10 >> 1;
        uVar9 = 0;
        if (uVar7 != 0) {
          do {
            uVar21 = uVar9;
            *(undefined2 *)(uStack_a0 + uVar21 * 4) = *(undefined2 *)(param_1 + uVar21 * 4);
            *(undefined2 *)(uStack_a0 + 2 + uVar21 * 4) = *(undefined2 *)(param_1 + 2 + uVar21 * 4);
            uVar9 = uVar21 + 1;
          } while (uVar9 < uVar7);
          lVar8 = uVar21 + 2 + uVar9;
        }
        if (lVar8 - 1U < uVar10) {
          *(undefined2 *)(param_11 + (lStack_98 + -1 + lVar8) * 2) =
               *(undefined2 *)(param_1 + (lVar8 - 1U) * 2);
        }
      }
LAB_140987ba8:
      lStack_a8 = lVar16;
      if (uVar11 == 1) {
        if (0 < lStack_98) {
          uVar9 = (lStack_98 + 2) / 3;
          if (((longlong)uVar9 < 7) ||
             (((longlong)(param_11 - uStack_a0) < 6 &&
              ((longlong)-(param_11 - uStack_a0) < (longlong)(uVar9 * 6))))) {
            uVar7 = 0;
            lVar24 = 0;
            lVar8 = 0;
            uStack_c8 = uVar12;
            lStack_b0 = param_1;
            pcStack_c0 = pcVar13;
            uStack_b8 = CONCAT44(uStack_b8._4_4_,param_7) & 0xffffffff0000000f;
            uVar10 = 0;
            lStack_80 = lVar27;
            iStack_78 = param_10;
            uStack_90 = param_7;
            lStack_88 = param_4;
            lVar18 = lVar8;
            do {
              uVar23 = *(undefined2 *)(lVar16 + param_11);
              uVar21 = lVar24 + 0x40U;
              if ((longlong)uVar9 <= (longlong)(lVar24 + 0x40U)) {
                uVar21 = uVar9;
              }
              uVar25 = uVar21 - lVar24;
              uVar15 = uVar10;
              uVar12 = uStack_c8;
              pcVar13 = pcStack_c0;
              param_1 = lStack_b0;
              param_7 = uStack_90;
              param_4 = lStack_88;
              lVar27 = lStack_80;
              param_10 = iStack_78;
              if (0x1f < (longlong)uVar25) {
                auVar35 = vpbroadcastw_avx512bw();
                uVar15 = uVar25 & 0xffffffffffffffe0;
                uVar22 = uVar10;
                lStack_a8 = param_11;
                do {
                  iVar19 = (int)uVar22;
                  uVar22 = uVar22 + 0x20;
                  auVar32 = vmovdqu32_avx512f(auVar35);
                  *(undefined1 (*) [64])(auStack_180 + iVar19) = auVar32;
                  uVar12 = uStack_c8;
                  pcVar13 = pcStack_c0;
                  param_1 = lStack_b0;
                  param_7 = uStack_90;
                  param_4 = lStack_88;
                  lVar27 = lStack_80;
                  param_10 = iStack_78;
                  param_11 = lStack_a8;
                } while (uVar22 < uVar15);
              }
              for (; uStack_c8 = uVar12, pcStack_c0 = pcVar13, lStack_b0 = param_1,
                  uStack_90 = param_7, lStack_88 = param_4, lStack_80 = lVar27, iStack_78 = param_10
                  , uVar15 < uVar25; uVar15 = uVar15 + 1) {
                auStack_180[(int)uVar15] = uVar23;
                uVar12 = uStack_c8;
                pcVar13 = pcStack_c0;
                param_1 = lStack_b0;
                param_7 = uStack_90;
                param_4 = lStack_88;
                lVar27 = lStack_80;
                param_10 = iStack_78;
              }
              lStack_a8 = param_11;
              lVar1 = param_11 + lVar8;
              uVar15 = uVar10;
              uVar25 = uVar10;
              do {
                iVar19 = (int)uVar25;
                uVar25 = uVar25 + 1;
                *(undefined2 *)(uVar15 + lVar1) = auStack_180[iVar19];
                *(undefined2 *)(uVar15 + 2 + lVar1) = *(undefined2 *)(uStack_a0 + 2);
                *(undefined2 *)(uVar15 + 4 + lVar1) = *(undefined2 *)(uStack_a0 + 4);
                uVar15 = uVar15 + 6;
              } while (uVar25 < uVar21 + lVar18);
              uVar7 = uVar7 + 1;
              lVar24 = lVar24 + 0x40;
              lVar8 = lVar8 + 0x180;
              lVar18 = lVar18 + -0x40;
            } while (uVar7 < uVar9 + 0x3f >> 6);
            uVar11 = (uint)uStack_b8;
          }
          else {
            uVar28 = *(ushort *)(uStack_a0 + 4);
            uVar23 = *(undefined2 *)(uStack_a0 + 2);
            uVar26 = *(undefined2 *)(lVar16 + param_11);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uVar28);
            if ((longlong)uVar9 < 0x10) {
              uVar7 = 0;
            }
            else {
              auVar35 = vmovdqu32_avx512f(_DAT_14308dd80);
              auVar32 = vmovdqu32_avx512f(_DAT_14308ddc0);
              auVar29 = vpbroadcastw_avx512vl();
              auVar30 = vpbroadcastw_avx512vl();
              auVar34 = ZEXT3264(CONCAT230(uVar28,CONCAT228(uVar28,CONCAT226(uVar28,CONCAT224(uVar28
                                                  ,CONCAT222(uVar28,CONCAT220(uVar28,CONCAT218(
                                                  uVar28,CONCAT216(uVar28,CONCAT214(uVar28,CONCAT212
                                                  (uVar28,CONCAT210(uVar28,CONCAT28(uVar28,CONCAT26(
                                                  uVar28,CONCAT24(uVar28,CONCAT22(uVar28,uVar28)))))
                                                  )))))))))));
              uVar21 = 0;
              uVar7 = uVar9 & 0xfffffffffffffff0;
              auVar33 = vpermw_avx512bw(auVar35,auVar34);
              auVar34 = vpermw_avx512bw(auVar32,auVar34);
              auVar36 = vpermw_avx512bw(auVar35,ZEXT3264(auVar30));
              auVar37 = vpermw_avx512bw(auVar32,ZEXT3264(auVar30));
              auVar35 = vpermw_avx512bw(auVar35,ZEXT3264(auVar29));
              auVar32 = vpermw_avx512bw(auVar32,ZEXT3264(auVar29));
              uVar10 = uVar21;
              do {
                uVar21 = uVar21 + 0x10;
                auVar2 = vmovdqu16_avx512bw(auVar33);
                *(undefined1 (*) [64])(uVar10 + 4 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar34);
                *(undefined1 (*) [64])(uVar10 + 0x44 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar36);
                *(undefined1 (*) [64])(uVar10 + 2 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar37);
                *(undefined1 (*) [64])(uVar10 + 0x42 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar35);
                *(undefined1 (*) [64])(uVar10 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar32);
                *(undefined1 (*) [64])(uVar10 + 0x40 + param_11) = auVar2;
                uVar10 = uVar10 + 0x60;
              } while (uVar21 < uVar7);
            }
            uStack_b8 = 0;
            if (uVar7 + 1 <= uVar9) {
              lVar18 = param_11 + uVar7 * 6;
              lVar16 = 0;
              uVar10 = 0;
              do {
                uVar10 = uVar10 + 1;
                *(undefined2 *)(lVar16 + lVar18) = uVar26;
                *(undefined2 *)(lVar16 + 2 + lVar18) = uVar23;
                *(ushort *)(lVar16 + 4 + lVar18) = uVar28;
                lVar16 = lVar16 + 6;
                lStack_b0 = param_1;
              } while (uVar10 < uVar9 - uVar7);
            }
          }
        }
      }
      else if (uVar11 == 3) {
        if (0 < lStack_98) {
          lVar16 = 1;
          uStack_c8 = lStack_98 + 2;
          lVar8 = 0;
          if (uStack_c8 / 6 != 0) {
            lVar16 = param_11 + (longlong)pcVar13 * 6;
            uVar9 = 0;
            lVar24 = lVar8;
            do {
              uVar7 = uVar9;
              uVar9 = uVar7 + 1;
              *(undefined2 *)(lVar8 + param_11) = *(undefined2 *)(lVar24 + -6 + lVar16);
              *(undefined2 *)(lVar8 + 2 + param_11) = *(undefined2 *)(lVar24 + -4 + lVar16);
              *(undefined2 *)(lVar8 + 4 + param_11) = *(undefined2 *)(lVar24 + -2 + lVar16);
              *(undefined2 *)(lVar8 + 6 + param_11) = *(undefined2 *)(lVar24 + -0xc + lVar16);
              *(undefined2 *)(lVar8 + 8 + param_11) = *(undefined2 *)(lVar24 + -10 + lVar16);
              lVar1 = lVar24 + -8;
              lVar24 = lVar24 + -0xc;
              *(undefined2 *)(lVar8 + 10 + param_11) = *(undefined2 *)(lVar1 + lVar16);
              lVar8 = lVar8 + 0xc;
            } while (uVar9 < uStack_c8 / 6);
            lVar16 = uVar7 + 2 + uVar9;
            lStack_b0 = param_1;
          }
          if (lVar16 - 1U < uStack_c8 / 3) {
            lVar16 = lVar16 * 3 + -3;
            lVar18 = lVar18 - lVar16;
            *(undefined2 *)(param_11 + lVar16 * 2) = *(undefined2 *)(param_11 + -6 + lVar18 * 2);
            *(undefined2 *)(param_11 + 2 + lVar16 * 2) = *(undefined2 *)(param_11 + -4 + lVar18 * 2)
            ;
            *(undefined2 *)(param_11 + 4 + lVar16 * 2) = *(undefined2 *)(param_11 + -2 + lVar18 * 2)
            ;
          }
        }
      }
      else if ((uVar11 == 6) && (0 < lStack_98)) {
        uStack_c8 = lStack_98 + 2;
        uVar9 = (longlong)uStack_c8 / 3;
        if (6 < (longlong)uVar9) {
          lVar18 = (longlong)puStack_70 + (2 - param_11);
          if ((((longlong)(uVar9 * 6) <= lVar18) || (3 < -lVar18)) &&
             ((1 < param_11 - (longlong)puStack_70 ||
              ((longlong)(uVar9 * 6) <= -(param_11 - (longlong)puStack_70))))) {
            uVar28 = *(ushort *)(puStack_70 + 1);
            uVar23 = *(undefined2 *)puStack_70;
            uVar26 = *(undefined2 *)((longlong)puStack_70 + 2);
            uStack_c8._4_4_ = (undefined4)(uStack_c8 >> 0x20);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uVar28);
            if ((longlong)uVar9 < 0x10) {
              uVar7 = 0;
            }
            else {
              auVar35 = vmovdqu32_avx512f(_DAT_14308dd80);
              auVar32 = vmovdqu32_avx512f(_DAT_14308ddc0);
              auVar29 = vpbroadcastw_avx512vl();
              auVar30 = vpbroadcastw_avx512vl();
              auVar34 = ZEXT3264(CONCAT230(uVar28,CONCAT228(uVar28,CONCAT226(uVar28,CONCAT224(uVar28
                                                  ,CONCAT222(uVar28,CONCAT220(uVar28,CONCAT218(
                                                  uVar28,CONCAT216(uVar28,CONCAT214(uVar28,CONCAT212
                                                  (uVar28,CONCAT210(uVar28,CONCAT28(uVar28,CONCAT26(
                                                  uVar28,CONCAT24(uVar28,CONCAT22(uVar28,uVar28)))))
                                                  )))))))))));
              uVar21 = 0;
              uVar7 = uVar9 & 0xfffffffffffffff0;
              auVar33 = vpermw_avx512bw(auVar35,auVar34);
              auVar34 = vpermw_avx512bw(auVar32,auVar34);
              auVar36 = vpermw_avx512bw(auVar35,ZEXT3264(auVar30));
              auVar37 = vpermw_avx512bw(auVar32,ZEXT3264(auVar30));
              auVar35 = vpermw_avx512bw(auVar35,ZEXT3264(auVar29));
              auVar32 = vpermw_avx512bw(auVar32,ZEXT3264(auVar29));
              uVar10 = uVar21;
              do {
                uVar21 = uVar21 + 0x10;
                auVar2 = vmovdqu16_avx512bw(auVar33);
                *(undefined1 (*) [64])(uVar10 + 4 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar34);
                *(undefined1 (*) [64])(uVar10 + 0x44 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar36);
                *(undefined1 (*) [64])(uVar10 + 2 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar37);
                *(undefined1 (*) [64])(uVar10 + 0x42 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar35);
                *(undefined1 (*) [64])(uVar10 + param_11) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar32);
                *(undefined1 (*) [64])(uVar10 + 0x40 + param_11) = auVar2;
                uVar10 = uVar10 + 0x60;
              } while (uVar21 < uVar7);
            }
            uStack_b8 = 0;
            if (uVar7 + 1 <= uVar9) {
              lVar16 = 0;
              lVar18 = param_11 + uVar7 * 6;
              uVar10 = 0;
              do {
                uVar10 = uVar10 + 1;
                *(undefined2 *)(lVar16 + lVar18) = uVar23;
                *(undefined2 *)(lVar16 + 2 + lVar18) = uVar26;
                *(ushort *)(lVar16 + 4 + lVar18) = uVar28;
                lVar16 = lVar16 + 6;
                lStack_b0 = param_1;
              } while (uVar10 < uVar9 - uVar7);
            }
            goto LAB_1409883d1;
          }
        }
        lVar18 = 1;
        uVar9 = 0;
        if (uStack_c8 / 6 != 0) {
          do {
            uVar7 = uVar9;
            *(undefined2 *)(param_11 + uVar7 * 0xc) = *(undefined2 *)puStack_70;
            uVar9 = uVar7 + 1;
            *(undefined2 *)(param_11 + 2 + uVar7 * 0xc) = *(undefined2 *)((longlong)puStack_70 + 2);
            *(undefined2 *)(param_11 + 4 + uVar7 * 0xc) = *(undefined2 *)(puStack_70 + 1);
            *(undefined2 *)(param_11 + 6 + uVar7 * 0xc) = *(undefined2 *)puStack_70;
            *(undefined2 *)(param_11 + 8 + uVar7 * 0xc) = *(undefined2 *)((longlong)puStack_70 + 2);
            *(undefined2 *)(param_11 + 10 + uVar7 * 0xc) = *(undefined2 *)(puStack_70 + 1);
          } while (uVar9 < uStack_c8 / 6);
          lVar18 = uVar7 + 2 + uVar9;
        }
        if (lVar18 - 1U < uStack_c8 / 3) {
          lVar18 = lVar18 * 3 + -3;
          *(undefined2 *)(param_11 + lVar18 * 2) = *(undefined2 *)puStack_70;
          *(undefined2 *)(param_11 + 2 + lVar18 * 2) = *(undefined2 *)((longlong)puStack_70 + 2);
          *(undefined2 *)(param_11 + 4 + lVar18 * 2) = *(undefined2 *)(puStack_70 + 1);
        }
      }
LAB_1409883d1:
      pcStack_c0 = (code *)(&PTR_LAB_14308df20)[lVar20];
      iStack_198 = param_10;
      uStack_90 = param_7;
      lStack_88 = param_4;
      (*pcStack_c0)(uStack_a0,param_4,lVar27);
      uVar12 = uVar12 - lVar27;
      param_1 = param_1 + lStack_98 * 2;
      param_4 = lStack_88 + lStack_98 * 4;
      param_7 = uStack_90;
    }
    else {
      pcStack_c0 = (code *)(&PTR_LAB_14308df20)[lVar20];
    }
    iStack_198 = param_10;
    if ((param_7 & 0x80) == 0) {
      if (lVar27 < (longlong)uVar12) {
        lVar20 = uVar12 - lVar27;
        lStack_88 = param_4;
        (*pcStack_c0)(param_1,param_4,lVar20);
        param_1 = param_1 + lVar20 * 6;
        param_4 = lStack_88 + lVar20 * 0xc;
      }
      lVar20 = (longlong)pcVar13 * 3;
      if (lVar20 != 3 && SCARRY8(lVar20,-3) == lVar20 + -3 < 0) {
        lVar18 = 1;
        uVar12 = ((lVar20 + -1) / 3) * 3;
        uVar9 = uVar12 >> 1;
        if (uVar9 != 0) {
          lVar18 = lVar27 * -6 + param_1;
          uVar7 = 0;
          do {
            uVar10 = uVar7;
            *(undefined2 *)(param_11 + uVar10 * 4) = *(undefined2 *)(lVar18 + uVar10 * 4);
            *(undefined2 *)(param_11 + 2 + uVar10 * 4) = *(undefined2 *)(lVar18 + 2 + uVar10 * 4);
            uVar7 = uVar10 + 1;
          } while (uVar7 < uVar9);
          lVar18 = uVar10 + 2 + uVar7;
        }
        if (lVar18 - 1U < uVar12) {
          *(undefined2 *)(param_11 + (lVar18 - 1U) * 2) =
               *(undefined2 *)(param_1 + (lVar27 * -3 + -1 + lVar18) * 2);
        }
      }
      lVar18 = lVar27 * 3;
      if (uVar11 == 1) {
        if (0 < lVar18) {
          uVar12 = lVar18 + 2;
          uVar9 = (longlong)uVar12 / 3;
          if ((longlong)uVar9 < 7) {
            lVar18 = 1;
            if (uVar12 / 6 != 0) {
              lVar18 = param_11 + (longlong)pcVar13 * 6;
              uVar9 = 0;
              do {
                uVar7 = uVar9;
                *(undefined2 *)(lVar18 + -6 + uVar7 * 0xc) = *(undefined2 *)(lVar18 + -0xc);
                uVar9 = uVar7 + 1;
                *(undefined2 *)(lVar18 + -4 + uVar7 * 0xc) = *(undefined2 *)(lVar18 + -10);
                *(undefined2 *)(lVar18 + -2 + uVar7 * 0xc) = *(undefined2 *)(lVar18 + -8);
                *(undefined2 *)(lVar18 + uVar7 * 0xc) = *(undefined2 *)(lVar18 + -0xc);
                *(undefined2 *)(lVar18 + 2 + uVar7 * 0xc) = *(undefined2 *)(lVar18 + -10);
                *(undefined2 *)(lVar18 + 4 + uVar7 * 0xc) = *(undefined2 *)(lVar18 + -8);
              } while (uVar9 < uVar12 / 6);
              lVar18 = uVar7 + 2 + uVar9;
            }
            if (lVar18 - 1U < uVar12 / 3) {
              lVar20 = lVar18 * 3 + -3 + lVar20;
              *(undefined2 *)(param_11 + -6 + lVar20 * 2) =
                   *(undefined2 *)(param_11 + -0xc + (longlong)pcVar13 * 6);
              *(undefined2 *)(param_11 + -4 + lVar20 * 2) =
                   *(undefined2 *)(param_11 + -10 + (longlong)pcVar13 * 6);
              *(undefined2 *)(param_11 + -2 + lVar20 * 2) =
                   *(undefined2 *)(param_11 + -8 + (longlong)pcVar13 * 6);
            }
          }
          else {
            uStack_c8 = param_11 + (longlong)pcVar13 * 6;
            uVar23 = *(undefined2 *)(uStack_c8 - 0xc);
            uVar26 = *(undefined2 *)(uStack_c8 - 10);
            uVar14 = *(undefined2 *)(uStack_c8 - 8);
            if ((longlong)uVar9 < 0x10) {
              uVar12 = 0;
            }
            else {
              auVar35 = vmovdqu32_avx512f(_DAT_14308dd80);
              auVar32 = vmovdqu32_avx512f(_DAT_14308ddc0);
              auVar29 = vpbroadcastw_avx512vl();
              auVar30 = vpbroadcastw_avx512vl();
              auVar31 = vpbroadcastw_avx512vl();
              uVar7 = 0;
              uVar12 = uVar9 & 0xfffffffffffffff0;
              lVar20 = 0;
              auVar33 = vpermw_avx512bw(auVar35,ZEXT3264(auVar31));
              auVar34 = vpermw_avx512bw(auVar32,ZEXT3264(auVar31));
              auVar36 = vpermw_avx512bw(auVar35,ZEXT3264(auVar30));
              auVar37 = vpermw_avx512bw(auVar32,ZEXT3264(auVar30));
              auVar35 = vpermw_avx512bw(auVar35,ZEXT3264(auVar29));
              auVar32 = vpermw_avx512bw(auVar32,ZEXT3264(auVar29));
              do {
                uVar7 = uVar7 + 0x10;
                auVar2 = vmovdqu16_avx512bw(auVar33);
                *(undefined1 (*) [64])(lVar20 + -2 + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar34);
                *(undefined1 (*) [64])(lVar20 + 0x3e + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar36);
                *(undefined1 (*) [64])(lVar20 + -4 + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar37);
                *(undefined1 (*) [64])(lVar20 + 0x3c + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar35);
                *(undefined1 (*) [64])(lVar20 + -6 + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar32);
                *(undefined1 (*) [64])(lVar20 + 0x3a + uStack_c8) = auVar2;
                lVar20 = lVar20 + 0x60;
              } while (uVar7 < uVar12);
            }
            uVar7 = 0;
            lVar20 = 0;
            if (uVar12 + 1 <= uVar9) {
              lVar18 = uStack_c8 + uVar12 * 6;
              do {
                uVar7 = uVar7 + 1;
                *(undefined2 *)(lVar20 + -6 + lVar18) = uVar23;
                *(undefined2 *)(lVar20 + -4 + lVar18) = uVar26;
                *(undefined2 *)(lVar20 + -2 + lVar18) = uVar14;
                lVar20 = lVar20 + 6;
              } while (uVar7 < uVar9 - uVar12);
            }
          }
        }
      }
      else if (uVar11 == 3) {
        if (0 < lVar18) {
          lVar16 = 1;
          lVar8 = 0;
          lVar24 = 0;
          uVar12 = (lVar18 + 2U) / 6;
          if (uVar12 != 0) {
            lVar16 = param_11 + (longlong)pcVar13 * 6;
            uVar9 = 0;
            do {
              uVar7 = uVar9;
              uVar9 = uVar7 + 1;
              *(undefined2 *)(lVar8 + -6 + lVar16) = *(undefined2 *)(lVar24 + -0x12 + lVar16);
              *(undefined2 *)(lVar8 + -4 + lVar16) = *(undefined2 *)(lVar24 + -0x10 + lVar16);
              *(undefined2 *)(lVar8 + -2 + lVar16) = *(undefined2 *)(lVar24 + -0xe + lVar16);
              *(undefined2 *)(lVar8 + lVar16) = *(undefined2 *)(lVar24 + -0x18 + lVar16);
              *(undefined2 *)(lVar8 + 2 + lVar16) = *(undefined2 *)(lVar24 + -0x16 + lVar16);
              lVar1 = lVar24 + -0x14;
              lVar24 = lVar24 + -0xc;
              *(undefined2 *)(lVar8 + 4 + lVar16) = *(undefined2 *)(lVar1 + lVar16);
              lVar8 = lVar8 + 0xc;
            } while (uVar9 < uVar12);
            lVar16 = uVar7 + 2 + uVar9;
          }
          if (lVar16 - 1U < (lVar18 + 2U) / 3) {
            lVar16 = lVar16 * 3 + -3;
            lVar18 = lVar20 + lVar16;
            lVar20 = lVar20 - lVar16;
            *(undefined2 *)(param_11 + -6 + lVar18 * 2) =
                 *(undefined2 *)(param_11 + -0x12 + lVar20 * 2);
            *(undefined2 *)(param_11 + -4 + lVar18 * 2) =
                 *(undefined2 *)(param_11 + -0x10 + lVar20 * 2);
            *(undefined2 *)(param_11 + -2 + lVar18 * 2) =
                 *(undefined2 *)(param_11 + -0xe + lVar20 * 2);
          }
        }
      }
      else if ((uVar11 == 6) && (0 < lVar18)) {
        uVar12 = lVar18 + 2;
        uVar9 = (longlong)uVar12 / 3;
        if (6 < (longlong)uVar9) {
          uStack_c8 = param_11 + (longlong)pcVar13 * 6;
          lVar18 = (longlong)puStack_70 + (2 - (uStack_c8 - 6));
          if ((((longlong)(uVar9 * 6) <= lVar18) || (3 < -lVar18)) &&
             ((lVar18 = (uStack_c8 - 6) - (longlong)puStack_70, 1 < lVar18 ||
              ((longlong)(uVar9 * 6) <= -lVar18)))) {
            uVar23 = *(undefined2 *)puStack_70;
            uVar26 = *(undefined2 *)((longlong)puStack_70 + 2);
            uVar14 = *(undefined2 *)(puStack_70 + 1);
            if ((longlong)uVar9 < 0x10) {
              uVar12 = 0;
            }
            else {
              auVar35 = vmovdqu32_avx512f(_DAT_14308dd80);
              auVar32 = vmovdqu32_avx512f(_DAT_14308ddc0);
              auVar29 = vpbroadcastw_avx512vl();
              auVar30 = vpbroadcastw_avx512vl();
              auVar31 = vpbroadcastw_avx512vl();
              uVar7 = 0;
              uVar12 = uVar9 & 0xfffffffffffffff0;
              lVar20 = 0;
              auVar33 = vpermw_avx512bw(auVar35,ZEXT3264(auVar31));
              auVar34 = vpermw_avx512bw(auVar32,ZEXT3264(auVar31));
              auVar36 = vpermw_avx512bw(auVar35,ZEXT3264(auVar30));
              auVar37 = vpermw_avx512bw(auVar32,ZEXT3264(auVar30));
              auVar35 = vpermw_avx512bw(auVar35,ZEXT3264(auVar29));
              auVar32 = vpermw_avx512bw(auVar32,ZEXT3264(auVar29));
              do {
                uVar7 = uVar7 + 0x10;
                auVar2 = vmovdqu16_avx512bw(auVar33);
                *(undefined1 (*) [64])(lVar20 + -2 + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar34);
                *(undefined1 (*) [64])(lVar20 + 0x3e + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar36);
                *(undefined1 (*) [64])(lVar20 + -4 + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar37);
                *(undefined1 (*) [64])(lVar20 + 0x3c + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar35);
                *(undefined1 (*) [64])(lVar20 + -6 + uStack_c8) = auVar2;
                auVar2 = vmovdqu16_avx512bw(auVar32);
                *(undefined1 (*) [64])(lVar20 + 0x3a + uStack_c8) = auVar2;
                lVar20 = lVar20 + 0x60;
              } while (uVar7 < uVar12);
            }
            uVar7 = 0;
            lVar20 = 0;
            if (uVar12 + 1 <= uVar9) {
              lVar18 = uStack_c8 + uVar12 * 6;
              do {
                uVar7 = uVar7 + 1;
                *(undefined2 *)(lVar20 + -6 + lVar18) = uVar23;
                *(undefined2 *)(lVar20 + -4 + lVar18) = uVar26;
                *(undefined2 *)(lVar20 + -2 + lVar18) = uVar14;
                lVar20 = lVar20 + 6;
              } while (uVar7 < uVar9 - uVar12);
            }
            goto LAB_140988b4c;
          }
        }
        lVar18 = 1;
        if (uVar12 / 6 != 0) {
          lVar18 = param_11 + (longlong)pcVar13 * 6;
          uVar9 = 0;
          do {
            uVar7 = uVar9;
            *(undefined2 *)(lVar18 + -6 + uVar7 * 0xc) = *(undefined2 *)puStack_70;
            uVar9 = uVar7 + 1;
            *(undefined2 *)(lVar18 + -4 + uVar7 * 0xc) = *(undefined2 *)((longlong)puStack_70 + 2);
            *(undefined2 *)(lVar18 + -2 + uVar7 * 0xc) = *(undefined2 *)(puStack_70 + 1);
            *(undefined2 *)(lVar18 + uVar7 * 0xc) = *(undefined2 *)puStack_70;
            *(undefined2 *)(lVar18 + 2 + uVar7 * 0xc) = *(undefined2 *)((longlong)puStack_70 + 2);
            *(undefined2 *)(lVar18 + 4 + uVar7 * 0xc) = *(undefined2 *)(puStack_70 + 1);
          } while (uVar9 < uVar12 / 6);
          lVar18 = uVar7 + 2 + uVar9;
        }
        if (lVar18 - 1U < uVar12 / 3) {
          lVar20 = lVar20 + lVar18 * 3 + -3;
          *(undefined2 *)(param_11 + -6 + lVar20 * 2) = *(undefined2 *)puStack_70;
          *(undefined2 *)(param_11 + -4 + lVar20 * 2) = *(undefined2 *)((longlong)puStack_70 + 2);
          *(undefined2 *)(param_11 + -2 + lVar20 * 2) = *(undefined2 *)(puStack_70 + 1);
        }
      }
LAB_140988b4c:
      iStack_198 = param_10;
      (*pcStack_c0)(param_11 + lVar27 * 6,param_4,lVar27,param_9);
    }
    else {
      (*pcStack_c0)(param_1,param_4,uVar12,param_9);
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_1b8) == DAT_1436b4680) {
    return;
  }
LAB_140988e65:
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

