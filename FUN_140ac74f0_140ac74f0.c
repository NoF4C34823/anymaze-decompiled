
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ac74f0(longlong param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  longlong in_RAX;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  int iVar12;
  longlong unaff_RBP;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong in_R10;
  longlong lVar21;
  longlong in_R11;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  int unaff_R14D;
  longlong lVar25;
  int unaff_R15D;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 in_XMM19 [16];
  undefined1 in_XMM20 [16];
  undefined1 in_ZMM21 [64];
  
  auVar7 = _DAT_14308f7c0;
  auVar6 = _DAT_14308f780;
  auVar5 = _DAT_14308f740;
  auVar4 = _DAT_14308f700;
  auVar3 = _DAT_14308f6c0;
  lVar16 = (longlong)param_4;
  iVar18 = unaff_R14D + -0x10;
  uVar19 = (longlong)(((ulonglong)(lVar16 >> 3) >> 0x3c) + lVar16) >> 4;
  auVar35 = vpxord_avx512f(in_ZMM21,in_ZMM21);
  do {
    iVar23 = 0;
    uVar22 = unaff_RBP + in_RAX;
    lVar25 = *(longlong *)(param_1 + param_2 * 8);
    lVar20 = *(longlong *)(param_1 + 8 + param_2 * 8);
    lVar21 = *(longlong *)(param_1 + 0x10 + param_2 * 8);
    if ((uVar22 & 0xf) == 0) {
      if (unaff_R15D == 0) {
        uVar15 = 0;
        lVar14 = 0;
        lVar9 = 0;
        if (-1 < iVar18) {
          do {
            uVar15 = uVar15 + 1;
            auVar26 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar9 + 0x10 + lVar25));
            auVar27 = vpaddw_avx(*(undefined1 (*) [16])(lVar9 + lVar25),
                                 *(undefined1 (*) [16])(lVar9 + lVar20));
            auVar26 = vpaddw_avx512vl(auVar26,*(undefined1 (*) [16])(lVar9 + 0x10 + lVar20));
            auVar27 = vpaddw_avx(auVar27,*(undefined1 (*) [16])(lVar9 + lVar21));
            auVar26 = vpaddw_avx512vl(auVar26,*(undefined1 (*) [16])(lVar9 + 0x10 + lVar21));
            auVar27 = vpaddw_avx512vl(auVar27,in_XMM19);
            auVar26 = vpaddw_avx512vl(auVar26,in_XMM19);
            lVar9 = lVar9 + 0x20;
            auVar27 = vpmulhw_avx512vl(auVar27,in_XMM20);
            auVar26 = vpmulhw_avx512vl(auVar26,in_XMM20);
            auVar27 = vpackuswb_avx512vl(auVar27,auVar26);
            auVar27 = vmovntdq_avx512vl(auVar27);
            *(undefined1 (*) [16])(lVar14 + uVar22) = auVar27;
            lVar14 = lVar14 + 0x10;
          } while (uVar15 < uVar19);
          goto LAB_140ac773f;
        }
      }
      else {
        uVar15 = 0;
        lVar14 = 0;
        lVar9 = 0;
        iVar23 = 0;
        if (-1 < iVar18) {
          do {
            uVar15 = uVar15 + 1;
            auVar26 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar9 + 0x10 + lVar25));
            auVar27 = vpaddw_avx(*(undefined1 (*) [16])(lVar9 + lVar25),
                                 *(undefined1 (*) [16])(lVar9 + lVar20));
            auVar26 = vpaddw_avx512vl(auVar26,*(undefined1 (*) [16])(lVar9 + 0x10 + lVar20));
            auVar27 = vpaddw_avx(auVar27,*(undefined1 (*) [16])(lVar9 + lVar21));
            auVar26 = vpaddw_avx512vl(auVar26,*(undefined1 (*) [16])(lVar9 + 0x10 + lVar21));
            auVar27 = vpaddw_avx512vl(auVar27,in_XMM19);
            auVar26 = vpaddw_avx512vl(auVar26,in_XMM19);
            lVar9 = lVar9 + 0x20;
            auVar27 = vpmulhw_avx512vl(auVar27,in_XMM20);
            auVar26 = vpmulhw_avx512vl(auVar26,in_XMM20);
            auVar27 = vpackuswb_avx512vl(auVar27,auVar26);
            auVar27 = vmovdqu32_avx512vl(auVar27);
            *(undefined1 (*) [16])(lVar14 + uVar22) = auVar27;
            lVar14 = lVar14 + 0x10;
          } while (uVar15 < uVar19);
LAB_140ac773f:
          lVar9 = uVar15 * 0x20;
          iVar23 = (int)uVar15 << 4;
          lVar25 = lVar25 + lVar9;
          lVar20 = lVar20 + lVar9;
          lVar21 = lVar21 + lVar9;
        }
      }
    }
    else {
      uVar15 = 0;
      lVar14 = 0;
      lVar9 = 0;
      if (-1 < iVar18) {
        do {
          uVar15 = uVar15 + 1;
          auVar26 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar9 + 0x10 + lVar25));
          auVar27 = vpaddw_avx(*(undefined1 (*) [16])(lVar9 + lVar25),
                               *(undefined1 (*) [16])(lVar9 + lVar20));
          auVar26 = vpaddw_avx512vl(auVar26,*(undefined1 (*) [16])(lVar9 + 0x10 + lVar20));
          auVar27 = vpaddw_avx(auVar27,*(undefined1 (*) [16])(lVar9 + lVar21));
          auVar26 = vpaddw_avx512vl(auVar26,*(undefined1 (*) [16])(lVar9 + 0x10 + lVar21));
          auVar27 = vpaddw_avx512vl(auVar27,in_XMM19);
          auVar26 = vpaddw_avx512vl(auVar26,in_XMM19);
          lVar9 = lVar9 + 0x20;
          auVar27 = vpmulhw_avx512vl(auVar27,in_XMM20);
          auVar26 = vpmulhw_avx512vl(auVar26,in_XMM20);
          auVar27 = vpackuswb_avx512vl(auVar27,auVar26);
          auVar27 = vmovdqu32_avx512vl(auVar27);
          *(undefined1 (*) [16])(lVar14 + uVar22) = auVar27;
          lVar14 = lVar14 + 0x10;
        } while (uVar15 < uVar19);
        goto LAB_140ac773f;
      }
    }
    if (iVar23 < unaff_R14D) {
      lVar17 = (longlong)iVar23;
      uVar22 = uVar22 + lVar17;
      lVar14 = lVar16 - lVar17;
      lVar9 = lVar14 * 2;
      if (((((longlong)(uVar22 - lVar25) < lVar9) && ((longlong)-(uVar22 - lVar25) < lVar14)) ||
          (((longlong)(uVar22 - lVar20) < lVar9 && ((longlong)-(uVar22 - lVar20) < lVar14)))) ||
         (((longlong)(uVar22 - lVar21) < lVar9 && ((longlong)-(uVar22 - lVar21) < lVar14)))) {
        iVar12 = 1;
        uVar24 = (uint)(unaff_R14D - iVar23) >> 1;
        uVar15 = 0;
        if (uVar24 != 0) {
          do {
            uVar10 = uVar15;
            iVar12 = ((int)*(short *)(lVar25 + uVar10 * 4) + (int)*(short *)(lVar20 + uVar10 * 4) +
                     (int)*(short *)(lVar21 + uVar10 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            uVar11 = (undefined1)iVar12;
            if (0xfe < iVar12) {
              uVar11 = 0xff;
            }
            *(undefined1 *)(uVar22 + uVar10 * 2) = uVar11;
            iVar12 = ((int)*(short *)(lVar25 + 2 + uVar10 * 4) +
                      (int)*(short *)(lVar20 + 2 + uVar10 * 4) +
                     (int)*(short *)(lVar21 + 2 + uVar10 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            uVar11 = (undefined1)iVar12;
            if (0xfe < iVar12) {
              uVar11 = 0xff;
            }
            *(undefined1 *)(uVar22 + 1 + uVar10 * 2) = uVar11;
            uVar15 = uVar10 + 1;
          } while (uVar15 < uVar24);
          iVar12 = (int)uVar10 + 2 + (int)uVar15;
        }
        if (iVar12 - 1U < (uint)(unaff_R14D - iVar23)) {
          lVar9 = (longlong)iVar12;
          iVar23 = ((int)*(short *)(lVar25 + -2 + lVar9 * 2) +
                    (int)*(short *)(lVar20 + -2 + lVar9 * 2) +
                   (int)*(short *)(lVar21 + -2 + lVar9 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
          if (iVar23 < 1) {
            iVar23 = 0;
          }
          iVar12 = 0xff;
          if (iVar23 < 0xff) {
            iVar12 = iVar23;
          }
          *(char *)(lVar17 + unaff_RBP + lVar9 + -1 + in_RAX) = (char)iVar12;
        }
      }
      else {
        uVar24 = (unaff_R14D - (iVar23 + 1)) + 1;
        if ((int)uVar24 < 0x20) {
          uVar13 = 0;
        }
        else {
          if ((int)uVar24 < 0x571) {
            uVar8 = 0;
            uVar13 = uVar24 & 0xffffffe0;
          }
          else {
            uVar8 = (uint)uVar22 & 0x1f;
            if (((uVar22 & 0x1f) != 0) && (uVar8 = 0x20 - uVar8, (int)uVar24 < (int)uVar8)) {
              uVar8 = uVar24;
            }
            uVar13 = uVar24 - (uVar24 - uVar8 & 0x1f);
            if (uVar8 != 0) {
              uVar15 = 0;
              lVar9 = 0;
              auVar36 = vpbroadcastd_avx512f();
              auVar37 = auVar4;
              do {
                uVar10 = vpcmpgtd_avx512f(auVar36,auVar37);
                auVar37 = vpaddd_avx512f(auVar37,auVar3);
                auVar28 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar9 + lVar25));
                bVar1 = (byte)uVar10;
                auVar30._2_2_ = (ushort)((byte)(uVar10 >> 1) & 1) * auVar28._2_2_;
                auVar30._0_2_ = (ushort)(bVar1 & 1) * auVar28._0_2_;
                auVar30._4_2_ = (ushort)((byte)(uVar10 >> 2) & 1) * auVar28._4_2_;
                auVar30._6_2_ = (ushort)((byte)(uVar10 >> 3) & 1) * auVar28._6_2_;
                auVar30._8_2_ = (ushort)((byte)(uVar10 >> 4) & 1) * auVar28._8_2_;
                auVar30._10_2_ = (ushort)((byte)(uVar10 >> 5) & 1) * auVar28._10_2_;
                auVar30._12_2_ = (ushort)((byte)(uVar10 >> 6) & 1) * auVar28._12_2_;
                auVar30._14_2_ = (ushort)((byte)(uVar10 >> 7) & 1) * auVar28._14_2_;
                bVar2 = (byte)(uVar10 >> 8);
                auVar30._16_2_ = (ushort)(bVar2 & 1) * auVar28._16_2_;
                auVar30._18_2_ = (ushort)((byte)(uVar10 >> 9) & 1) * auVar28._18_2_;
                auVar30._20_2_ = (ushort)((byte)(uVar10 >> 10) & 1) * auVar28._20_2_;
                auVar30._22_2_ = (ushort)((byte)(uVar10 >> 0xb) & 1) * auVar28._22_2_;
                auVar30._24_2_ = (ushort)((byte)(uVar10 >> 0xc) & 1) * auVar28._24_2_;
                auVar30._26_2_ = (ushort)((byte)(uVar10 >> 0xd) & 1) * auVar28._26_2_;
                auVar30._28_2_ = (ushort)((byte)(uVar10 >> 0xe) & 1) * auVar28._28_2_;
                auVar30._30_2_ = (ushort)(byte)(uVar10 >> 0xf) * auVar28._30_2_;
                auVar28 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar9 + lVar20));
                auVar31._2_2_ = (ushort)((byte)(uVar10 >> 1) & 1) * auVar28._2_2_;
                auVar31._0_2_ = (ushort)(bVar1 & 1) * auVar28._0_2_;
                auVar31._4_2_ = (ushort)((byte)(uVar10 >> 2) & 1) * auVar28._4_2_;
                auVar31._6_2_ = (ushort)((byte)(uVar10 >> 3) & 1) * auVar28._6_2_;
                auVar31._8_2_ = (ushort)((byte)(uVar10 >> 4) & 1) * auVar28._8_2_;
                auVar31._10_2_ = (ushort)((byte)(uVar10 >> 5) & 1) * auVar28._10_2_;
                auVar31._12_2_ = (ushort)((byte)(uVar10 >> 6) & 1) * auVar28._12_2_;
                auVar31._14_2_ = (ushort)((byte)(uVar10 >> 7) & 1) * auVar28._14_2_;
                auVar31._16_2_ = (ushort)(bVar2 & 1) * auVar28._16_2_;
                auVar31._18_2_ = (ushort)((byte)(uVar10 >> 9) & 1) * auVar28._18_2_;
                auVar31._20_2_ = (ushort)((byte)(uVar10 >> 10) & 1) * auVar28._20_2_;
                auVar31._22_2_ = (ushort)((byte)(uVar10 >> 0xb) & 1) * auVar28._22_2_;
                auVar31._24_2_ = (ushort)((byte)(uVar10 >> 0xc) & 1) * auVar28._24_2_;
                auVar31._26_2_ = (ushort)((byte)(uVar10 >> 0xd) & 1) * auVar28._26_2_;
                auVar31._28_2_ = (ushort)((byte)(uVar10 >> 0xe) & 1) * auVar28._28_2_;
                auVar31._30_2_ = (ushort)(byte)(uVar10 >> 0xf) * auVar28._30_2_;
                auVar28 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar9 + lVar21));
                auVar29._2_2_ = (ushort)((byte)(uVar10 >> 1) & 1) * auVar28._2_2_;
                auVar29._0_2_ = (ushort)(bVar1 & 1) * auVar28._0_2_;
                auVar29._4_2_ = (ushort)((byte)(uVar10 >> 2) & 1) * auVar28._4_2_;
                auVar29._6_2_ = (ushort)((byte)(uVar10 >> 3) & 1) * auVar28._6_2_;
                auVar29._8_2_ = (ushort)((byte)(uVar10 >> 4) & 1) * auVar28._8_2_;
                auVar29._10_2_ = (ushort)((byte)(uVar10 >> 5) & 1) * auVar28._10_2_;
                auVar29._12_2_ = (ushort)((byte)(uVar10 >> 6) & 1) * auVar28._12_2_;
                auVar29._14_2_ = (ushort)((byte)(uVar10 >> 7) & 1) * auVar28._14_2_;
                auVar29._16_2_ = (ushort)(bVar2 & 1) * auVar28._16_2_;
                auVar29._18_2_ = (ushort)((byte)(uVar10 >> 9) & 1) * auVar28._18_2_;
                auVar29._20_2_ = (ushort)((byte)(uVar10 >> 10) & 1) * auVar28._20_2_;
                auVar29._22_2_ = (ushort)((byte)(uVar10 >> 0xb) & 1) * auVar28._22_2_;
                auVar29._24_2_ = (ushort)((byte)(uVar10 >> 0xc) & 1) * auVar28._24_2_;
                auVar29._26_2_ = (ushort)((byte)(uVar10 >> 0xd) & 1) * auVar28._26_2_;
                auVar29._28_2_ = (ushort)((byte)(uVar10 >> 0xe) & 1) * auVar28._28_2_;
                auVar29._30_2_ = (ushort)(byte)(uVar10 >> 0xf) * auVar28._30_2_;
                auVar38 = vpmovsxwd_avx512f(auVar30);
                auVar39 = vpmovsxwd_avx512f(auVar31);
                auVar40 = vpmovsxwd_avx512f(auVar29);
                auVar38 = vpaddd_avx512f(auVar38,auVar39);
                auVar38 = vpaddd_avx512f(auVar38,auVar40);
                lVar9 = lVar9 + 0x20;
                auVar38 = vpmulld_avx512f(auVar5,auVar38);
                auVar38 = vpaddd_avx512f(auVar38,auVar6);
                auVar38 = vpsrad_avx512f(auVar38,0x10);
                auVar38 = vpmaxsd_avx512f(auVar38,auVar35);
                auVar38 = vpminsd_avx512f(auVar38,auVar7);
                auVar27 = vpmovdb_avx512f(auVar38);
                auVar27 = vmovdqu8_avx512vl(auVar27);
                *(undefined1 (*) [16])(uVar15 + uVar22) = auVar27;
                uVar15 = uVar15 + 0x10;
              } while (uVar15 < (ulonglong)(longlong)(int)uVar8);
              if (uVar24 == uVar8) goto LAB_140ac7b7e;
            }
          }
          if ((int)(uVar8 + 0x20) <= (int)uVar13) {
            uVar15 = (ulonglong)(int)uVar8;
            do {
              auVar37 = *(undefined1 (*) [64])(lVar25 + uVar15 * 2);
              auVar36 = *(undefined1 (*) [64])(lVar20 + uVar15 * 2);
              auVar38 = *(undefined1 (*) [64])(lVar21 + uVar15 * 2);
              auVar28 = vextractf64x4_avx512f(auVar37,1);
              auVar30 = vextractf64x4_avx512f(auVar36,1);
              auVar31 = vextractf64x4_avx512f(auVar38,1);
              auVar39 = vpmovsxwd_avx512f(auVar28);
              auVar40 = vpmovsxwd_avx512f(auVar30);
              auVar37 = vpmovsxwd_avx512f(auVar37._0_32_);
              auVar36 = vpmovsxwd_avx512f(auVar36._0_32_);
              auVar37 = vpaddd_avx512f(auVar37,auVar36);
              auVar36 = vpmovsxwd_avx512f(auVar38._0_32_);
              auVar38 = vpmovsxwd_avx512f(auVar31);
              auVar39 = vpaddd_avx512f(auVar39,auVar40);
              auVar37 = vpaddd_avx512f(auVar37,auVar36);
              auVar36 = vpaddd_avx512f(auVar39,auVar38);
              auVar37 = vpmulld_avx512f(auVar5,auVar37);
              auVar37 = vpaddd_avx512f(auVar37,auVar6);
              auVar37 = vpsrad_avx512f(auVar37,0x10);
              auVar36 = vpmulld_avx512f(auVar5,auVar36);
              auVar36 = vpaddd_avx512f(auVar36,auVar6);
              auVar36 = vpsrad_avx512f(auVar36,0x10);
              auVar37 = vpmaxsd_avx512f(auVar37,auVar35);
              auVar37 = vpminsd_avx512f(auVar37,auVar7);
              auVar36 = vpmaxsd_avx512f(auVar36,auVar35);
              auVar27 = vpmovdb_avx512f(auVar37);
              auVar37 = vpminsd_avx512f(auVar36,auVar7);
              auVar26 = vpmovdb_avx512f(auVar37);
              auVar28 = vinserti32x4_avx512vl(ZEXT1632(auVar27),auVar26,1);
              *(undefined1 (*) [32])(uVar15 + uVar22) = auVar28;
              uVar15 = uVar15 + 0x20;
            } while (uVar15 < (ulonglong)(longlong)(int)uVar13);
          }
        }
        if (uVar13 + 1 <= uVar24) {
          uVar8 = 0;
          lVar9 = 0;
          auVar36 = vpbroadcastd_avx512f();
          auVar37 = auVar4;
          do {
            uVar15 = vpcmpgtd_avx512f(auVar36,auVar37);
            auVar37 = vpaddd_avx512f(auVar37,auVar3);
            lVar14 = (longlong)(int)(uVar13 * 2 + uVar8 * 2);
            uVar8 = uVar8 + 0x10;
            auVar28 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar14 + lVar25));
            bVar1 = (byte)uVar15;
            auVar32._2_2_ = (ushort)((byte)(uVar15 >> 1) & 1) * auVar28._2_2_;
            auVar32._0_2_ = (ushort)(bVar1 & 1) * auVar28._0_2_;
            auVar32._4_2_ = (ushort)((byte)(uVar15 >> 2) & 1) * auVar28._4_2_;
            auVar32._6_2_ = (ushort)((byte)(uVar15 >> 3) & 1) * auVar28._6_2_;
            auVar32._8_2_ = (ushort)((byte)(uVar15 >> 4) & 1) * auVar28._8_2_;
            auVar32._10_2_ = (ushort)((byte)(uVar15 >> 5) & 1) * auVar28._10_2_;
            auVar32._12_2_ = (ushort)((byte)(uVar15 >> 6) & 1) * auVar28._12_2_;
            auVar32._14_2_ = (ushort)((byte)(uVar15 >> 7) & 1) * auVar28._14_2_;
            bVar2 = (byte)(uVar15 >> 8);
            auVar32._16_2_ = (ushort)(bVar2 & 1) * auVar28._16_2_;
            auVar32._18_2_ = (ushort)((byte)(uVar15 >> 9) & 1) * auVar28._18_2_;
            auVar32._20_2_ = (ushort)((byte)(uVar15 >> 10) & 1) * auVar28._20_2_;
            auVar32._22_2_ = (ushort)((byte)(uVar15 >> 0xb) & 1) * auVar28._22_2_;
            auVar32._24_2_ = (ushort)((byte)(uVar15 >> 0xc) & 1) * auVar28._24_2_;
            auVar32._26_2_ = (ushort)((byte)(uVar15 >> 0xd) & 1) * auVar28._26_2_;
            auVar32._28_2_ = (ushort)((byte)(uVar15 >> 0xe) & 1) * auVar28._28_2_;
            auVar32._30_2_ = (ushort)(byte)(uVar15 >> 0xf) * auVar28._30_2_;
            auVar28 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar14 + lVar20));
            auVar33._2_2_ = (ushort)((byte)(uVar15 >> 1) & 1) * auVar28._2_2_;
            auVar33._0_2_ = (ushort)(bVar1 & 1) * auVar28._0_2_;
            auVar33._4_2_ = (ushort)((byte)(uVar15 >> 2) & 1) * auVar28._4_2_;
            auVar33._6_2_ = (ushort)((byte)(uVar15 >> 3) & 1) * auVar28._6_2_;
            auVar33._8_2_ = (ushort)((byte)(uVar15 >> 4) & 1) * auVar28._8_2_;
            auVar33._10_2_ = (ushort)((byte)(uVar15 >> 5) & 1) * auVar28._10_2_;
            auVar33._12_2_ = (ushort)((byte)(uVar15 >> 6) & 1) * auVar28._12_2_;
            auVar33._14_2_ = (ushort)((byte)(uVar15 >> 7) & 1) * auVar28._14_2_;
            auVar33._16_2_ = (ushort)(bVar2 & 1) * auVar28._16_2_;
            auVar33._18_2_ = (ushort)((byte)(uVar15 >> 9) & 1) * auVar28._18_2_;
            auVar33._20_2_ = (ushort)((byte)(uVar15 >> 10) & 1) * auVar28._20_2_;
            auVar33._22_2_ = (ushort)((byte)(uVar15 >> 0xb) & 1) * auVar28._22_2_;
            auVar33._24_2_ = (ushort)((byte)(uVar15 >> 0xc) & 1) * auVar28._24_2_;
            auVar33._26_2_ = (ushort)((byte)(uVar15 >> 0xd) & 1) * auVar28._26_2_;
            auVar33._28_2_ = (ushort)((byte)(uVar15 >> 0xe) & 1) * auVar28._28_2_;
            auVar33._30_2_ = (ushort)(byte)(uVar15 >> 0xf) * auVar28._30_2_;
            auVar28 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar14 + lVar21));
            auVar34._2_2_ = (ushort)((byte)(uVar15 >> 1) & 1) * auVar28._2_2_;
            auVar34._0_2_ = (ushort)(bVar1 & 1) * auVar28._0_2_;
            auVar34._4_2_ = (ushort)((byte)(uVar15 >> 2) & 1) * auVar28._4_2_;
            auVar34._6_2_ = (ushort)((byte)(uVar15 >> 3) & 1) * auVar28._6_2_;
            auVar34._8_2_ = (ushort)((byte)(uVar15 >> 4) & 1) * auVar28._8_2_;
            auVar34._10_2_ = (ushort)((byte)(uVar15 >> 5) & 1) * auVar28._10_2_;
            auVar34._12_2_ = (ushort)((byte)(uVar15 >> 6) & 1) * auVar28._12_2_;
            auVar34._14_2_ = (ushort)((byte)(uVar15 >> 7) & 1) * auVar28._14_2_;
            auVar34._16_2_ = (ushort)(bVar2 & 1) * auVar28._16_2_;
            auVar34._18_2_ = (ushort)((byte)(uVar15 >> 9) & 1) * auVar28._18_2_;
            auVar34._20_2_ = (ushort)((byte)(uVar15 >> 10) & 1) * auVar28._20_2_;
            auVar34._22_2_ = (ushort)((byte)(uVar15 >> 0xb) & 1) * auVar28._22_2_;
            auVar34._24_2_ = (ushort)((byte)(uVar15 >> 0xc) & 1) * auVar28._24_2_;
            auVar34._26_2_ = (ushort)((byte)(uVar15 >> 0xd) & 1) * auVar28._26_2_;
            auVar34._28_2_ = (ushort)((byte)(uVar15 >> 0xe) & 1) * auVar28._28_2_;
            auVar34._30_2_ = (ushort)(byte)(uVar15 >> 0xf) * auVar28._30_2_;
            auVar38 = vpmovsxwd_avx512f(auVar32);
            auVar39 = vpmovsxwd_avx512f(auVar33);
            auVar40 = vpmovsxwd_avx512f(auVar34);
            auVar38 = vpaddd_avx512f(auVar38,auVar39);
            auVar38 = vpaddd_avx512f(auVar38,auVar40);
            auVar38 = vpmulld_avx512f(auVar5,auVar38);
            auVar38 = vpaddd_avx512f(auVar38,auVar6);
            auVar38 = vpsrad_avx512f(auVar38,0x10);
            auVar38 = vpmaxsd_avx512f(auVar38,auVar35);
            auVar38 = vpminsd_avx512f(auVar38,auVar7);
            auVar27 = vpmovdb_avx512f(auVar38);
            auVar27 = vmovdqu8_avx512vl(auVar27);
            *(undefined1 (*) [16])(lVar9 + uVar22 + (longlong)(int)uVar13) = auVar27;
            lVar9 = lVar9 + 0x10;
          } while (uVar8 < uVar24 - uVar13);
        }
      }
    }
LAB_140ac7b7e:
    param_2 = param_2 + 1;
    in_RAX = in_RAX + in_R11;
    if (in_R10 <= param_2) {
      return;
    }
  } while( true );
}

