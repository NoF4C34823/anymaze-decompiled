
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ac74a0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 in_ZMM21 [64];
  
  auVar7 = _DAT_14308f7c0;
  auVar6 = _DAT_14308f780;
  auVar5 = _DAT_14308f740;
  auVar4 = _DAT_14308f700;
  auVar3 = _DAT_14308f6c0;
  uVar24 = (ulonglong)(int)((ulonglong)param_4 >> 0x20);
  uVar9 = 0;
  iVar20 = (int)param_4;
  lVar8 = 0;
  auVar30 = vmovdqu32_avx512vl(_DAT_14308f800);
  auVar31 = vmovdqu32_avx512vl(_DAT_14308f810);
  if (0 < (longlong)uVar24) {
    lVar18 = (longlong)iVar20;
    iVar21 = iVar20 + -0x10;
    uVar22 = (longlong)(((ulonglong)(lVar18 >> 3) >> 0x3c) + lVar18) >> 4;
    auVar41 = vpxord_avx512f(in_ZMM21,in_ZMM21);
    do {
      iVar27 = 0;
      uVar26 = param_2 + lVar8;
      lVar29 = *(longlong *)(param_1 + uVar9 * 8);
      lVar23 = *(longlong *)(param_1 + 8 + uVar9 * 8);
      lVar25 = *(longlong *)(param_1 + 0x10 + uVar9 * 8);
      if ((uVar26 & 0xf) == 0) {
        if (param_6 == 0) {
          uVar17 = 0;
          lVar16 = 0;
          lVar11 = 0;
          if (-1 < iVar21) {
            do {
              uVar17 = uVar17 + 1;
              auVar32 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar11 + 0x10 + lVar29));
              auVar33 = vpaddw_avx(*(undefined1 (*) [16])(lVar11 + lVar29),
                                   *(undefined1 (*) [16])(lVar11 + lVar23));
              auVar32 = vpaddw_avx512vl(auVar32,*(undefined1 (*) [16])(lVar11 + 0x10 + lVar23));
              auVar33 = vpaddw_avx(auVar33,*(undefined1 (*) [16])(lVar11 + lVar25));
              auVar32 = vpaddw_avx512vl(auVar32,*(undefined1 (*) [16])(lVar11 + 0x10 + lVar25));
              auVar33 = vpaddw_avx512vl(auVar33,auVar30);
              auVar32 = vpaddw_avx512vl(auVar32,auVar30);
              lVar11 = lVar11 + 0x20;
              auVar33 = vpmulhw_avx512vl(auVar33,auVar31);
              auVar32 = vpmulhw_avx512vl(auVar32,auVar31);
              auVar33 = vpackuswb_avx512vl(auVar33,auVar32);
              auVar33 = vmovntdq_avx512vl(auVar33);
              *(undefined1 (*) [16])(lVar16 + uVar26) = auVar33;
              lVar16 = lVar16 + 0x10;
            } while (uVar17 < uVar22);
            goto LAB_140ac773f;
          }
        }
        else {
          uVar17 = 0;
          lVar16 = 0;
          lVar11 = 0;
          iVar27 = 0;
          if (-1 < iVar21) {
            do {
              uVar17 = uVar17 + 1;
              auVar32 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar11 + 0x10 + lVar29));
              auVar33 = vpaddw_avx(*(undefined1 (*) [16])(lVar11 + lVar29),
                                   *(undefined1 (*) [16])(lVar11 + lVar23));
              auVar32 = vpaddw_avx512vl(auVar32,*(undefined1 (*) [16])(lVar11 + 0x10 + lVar23));
              auVar33 = vpaddw_avx(auVar33,*(undefined1 (*) [16])(lVar11 + lVar25));
              auVar32 = vpaddw_avx512vl(auVar32,*(undefined1 (*) [16])(lVar11 + 0x10 + lVar25));
              auVar33 = vpaddw_avx512vl(auVar33,auVar30);
              auVar32 = vpaddw_avx512vl(auVar32,auVar30);
              lVar11 = lVar11 + 0x20;
              auVar33 = vpmulhw_avx512vl(auVar33,auVar31);
              auVar32 = vpmulhw_avx512vl(auVar32,auVar31);
              auVar33 = vpackuswb_avx512vl(auVar33,auVar32);
              auVar33 = vmovdqu32_avx512vl(auVar33);
              *(undefined1 (*) [16])(lVar16 + uVar26) = auVar33;
              lVar16 = lVar16 + 0x10;
            } while (uVar17 < uVar22);
LAB_140ac773f:
            lVar11 = uVar17 * 0x20;
            iVar27 = (int)uVar17 << 4;
            lVar29 = lVar29 + lVar11;
            lVar23 = lVar23 + lVar11;
            lVar25 = lVar25 + lVar11;
          }
        }
      }
      else {
        uVar17 = 0;
        lVar16 = 0;
        lVar11 = 0;
        if (-1 < iVar21) {
          do {
            uVar17 = uVar17 + 1;
            auVar32 = vmovdqu32_avx512vl(*(undefined1 (*) [16])(lVar11 + 0x10 + lVar29));
            auVar33 = vpaddw_avx(*(undefined1 (*) [16])(lVar11 + lVar29),
                                 *(undefined1 (*) [16])(lVar11 + lVar23));
            auVar32 = vpaddw_avx512vl(auVar32,*(undefined1 (*) [16])(lVar11 + 0x10 + lVar23));
            auVar33 = vpaddw_avx(auVar33,*(undefined1 (*) [16])(lVar11 + lVar25));
            auVar32 = vpaddw_avx512vl(auVar32,*(undefined1 (*) [16])(lVar11 + 0x10 + lVar25));
            auVar33 = vpaddw_avx512vl(auVar33,auVar30);
            auVar32 = vpaddw_avx512vl(auVar32,auVar30);
            lVar11 = lVar11 + 0x20;
            auVar33 = vpmulhw_avx512vl(auVar33,auVar31);
            auVar32 = vpmulhw_avx512vl(auVar32,auVar31);
            auVar33 = vpackuswb_avx512vl(auVar33,auVar32);
            auVar33 = vmovdqu32_avx512vl(auVar33);
            *(undefined1 (*) [16])(lVar16 + uVar26) = auVar33;
            lVar16 = lVar16 + 0x10;
          } while (uVar17 < uVar22);
          goto LAB_140ac773f;
        }
      }
      if (iVar27 < iVar20) {
        lVar19 = (longlong)iVar27;
        uVar26 = uVar26 + lVar19;
        lVar16 = lVar18 - lVar19;
        lVar11 = lVar16 * 2;
        if (((((longlong)(uVar26 - lVar29) < lVar11) && ((longlong)-(uVar26 - lVar29) < lVar16)) ||
            (((longlong)(uVar26 - lVar23) < lVar11 && ((longlong)-(uVar26 - lVar23) < lVar16)))) ||
           (((longlong)(uVar26 - lVar25) < lVar11 && ((longlong)-(uVar26 - lVar25) < lVar16)))) {
          iVar14 = 1;
          uVar28 = (uint)(iVar20 - iVar27) >> 1;
          uVar17 = 0;
          if (uVar28 != 0) {
            do {
              uVar12 = uVar17;
              iVar14 = ((int)*(short *)(lVar29 + uVar12 * 4) + (int)*(short *)(lVar23 + uVar12 * 4)
                       + (int)*(short *)(lVar25 + uVar12 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar14 < 1) {
                iVar14 = 0;
              }
              uVar13 = (undefined1)iVar14;
              if (0xfe < iVar14) {
                uVar13 = 0xff;
              }
              *(undefined1 *)(uVar26 + uVar12 * 2) = uVar13;
              iVar14 = ((int)*(short *)(lVar29 + 2 + uVar12 * 4) +
                        (int)*(short *)(lVar23 + 2 + uVar12 * 4) +
                       (int)*(short *)(lVar25 + 2 + uVar12 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar14 < 1) {
                iVar14 = 0;
              }
              uVar13 = (undefined1)iVar14;
              if (0xfe < iVar14) {
                uVar13 = 0xff;
              }
              *(undefined1 *)(uVar26 + 1 + uVar12 * 2) = uVar13;
              uVar17 = uVar12 + 1;
            } while (uVar17 < uVar28);
            iVar14 = (int)uVar12 + 2 + (int)uVar17;
          }
          if (iVar14 - 1U < (uint)(iVar20 - iVar27)) {
            lVar11 = (longlong)iVar14;
            iVar27 = ((int)*(short *)(lVar29 + -2 + lVar11 * 2) +
                      (int)*(short *)(lVar23 + -2 + lVar11 * 2) +
                     (int)*(short *)(lVar25 + -2 + lVar11 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar27 < 1) {
              iVar27 = 0;
            }
            iVar14 = 0xff;
            if (iVar27 < 0xff) {
              iVar14 = iVar27;
            }
            *(char *)(lVar19 + param_2 + lVar11 + -1 + lVar8) = (char)iVar14;
          }
        }
        else {
          uVar28 = (iVar20 - (iVar27 + 1)) + 1;
          if ((int)uVar28 < 0x20) {
            uVar15 = 0;
          }
          else {
            if ((int)uVar28 < 0x571) {
              uVar10 = 0;
              uVar15 = uVar28 & 0xffffffe0;
            }
            else {
              uVar10 = (uint)uVar26 & 0x1f;
              if (((uVar26 & 0x1f) != 0) && (uVar10 = 0x20 - uVar10, (int)uVar28 < (int)uVar10)) {
                uVar10 = uVar28;
              }
              uVar15 = uVar28 - (uVar28 - uVar10 & 0x1f);
              if (uVar10 != 0) {
                uVar17 = 0;
                lVar11 = 0;
                auVar42 = vpbroadcastd_avx512f();
                auVar43 = auVar4;
                do {
                  uVar12 = vpcmpgtd_avx512f(auVar42,auVar43);
                  auVar43 = vpaddd_avx512f(auVar43,auVar3);
                  auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar11 + lVar29));
                  bVar1 = (byte)uVar12;
                  auVar36._2_2_ = (ushort)((byte)(uVar12 >> 1) & 1) * auVar34._2_2_;
                  auVar36._0_2_ = (ushort)(bVar1 & 1) * auVar34._0_2_;
                  auVar36._4_2_ = (ushort)((byte)(uVar12 >> 2) & 1) * auVar34._4_2_;
                  auVar36._6_2_ = (ushort)((byte)(uVar12 >> 3) & 1) * auVar34._6_2_;
                  auVar36._8_2_ = (ushort)((byte)(uVar12 >> 4) & 1) * auVar34._8_2_;
                  auVar36._10_2_ = (ushort)((byte)(uVar12 >> 5) & 1) * auVar34._10_2_;
                  auVar36._12_2_ = (ushort)((byte)(uVar12 >> 6) & 1) * auVar34._12_2_;
                  auVar36._14_2_ = (ushort)((byte)(uVar12 >> 7) & 1) * auVar34._14_2_;
                  bVar2 = (byte)(uVar12 >> 8);
                  auVar36._16_2_ = (ushort)(bVar2 & 1) * auVar34._16_2_;
                  auVar36._18_2_ = (ushort)((byte)(uVar12 >> 9) & 1) * auVar34._18_2_;
                  auVar36._20_2_ = (ushort)((byte)(uVar12 >> 10) & 1) * auVar34._20_2_;
                  auVar36._22_2_ = (ushort)((byte)(uVar12 >> 0xb) & 1) * auVar34._22_2_;
                  auVar36._24_2_ = (ushort)((byte)(uVar12 >> 0xc) & 1) * auVar34._24_2_;
                  auVar36._26_2_ = (ushort)((byte)(uVar12 >> 0xd) & 1) * auVar34._26_2_;
                  auVar36._28_2_ = (ushort)((byte)(uVar12 >> 0xe) & 1) * auVar34._28_2_;
                  auVar36._30_2_ = (ushort)(byte)(uVar12 >> 0xf) * auVar34._30_2_;
                  auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar11 + lVar23));
                  auVar37._2_2_ = (ushort)((byte)(uVar12 >> 1) & 1) * auVar34._2_2_;
                  auVar37._0_2_ = (ushort)(bVar1 & 1) * auVar34._0_2_;
                  auVar37._4_2_ = (ushort)((byte)(uVar12 >> 2) & 1) * auVar34._4_2_;
                  auVar37._6_2_ = (ushort)((byte)(uVar12 >> 3) & 1) * auVar34._6_2_;
                  auVar37._8_2_ = (ushort)((byte)(uVar12 >> 4) & 1) * auVar34._8_2_;
                  auVar37._10_2_ = (ushort)((byte)(uVar12 >> 5) & 1) * auVar34._10_2_;
                  auVar37._12_2_ = (ushort)((byte)(uVar12 >> 6) & 1) * auVar34._12_2_;
                  auVar37._14_2_ = (ushort)((byte)(uVar12 >> 7) & 1) * auVar34._14_2_;
                  auVar37._16_2_ = (ushort)(bVar2 & 1) * auVar34._16_2_;
                  auVar37._18_2_ = (ushort)((byte)(uVar12 >> 9) & 1) * auVar34._18_2_;
                  auVar37._20_2_ = (ushort)((byte)(uVar12 >> 10) & 1) * auVar34._20_2_;
                  auVar37._22_2_ = (ushort)((byte)(uVar12 >> 0xb) & 1) * auVar34._22_2_;
                  auVar37._24_2_ = (ushort)((byte)(uVar12 >> 0xc) & 1) * auVar34._24_2_;
                  auVar37._26_2_ = (ushort)((byte)(uVar12 >> 0xd) & 1) * auVar34._26_2_;
                  auVar37._28_2_ = (ushort)((byte)(uVar12 >> 0xe) & 1) * auVar34._28_2_;
                  auVar37._30_2_ = (ushort)(byte)(uVar12 >> 0xf) * auVar34._30_2_;
                  auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar11 + lVar25));
                  auVar35._2_2_ = (ushort)((byte)(uVar12 >> 1) & 1) * auVar34._2_2_;
                  auVar35._0_2_ = (ushort)(bVar1 & 1) * auVar34._0_2_;
                  auVar35._4_2_ = (ushort)((byte)(uVar12 >> 2) & 1) * auVar34._4_2_;
                  auVar35._6_2_ = (ushort)((byte)(uVar12 >> 3) & 1) * auVar34._6_2_;
                  auVar35._8_2_ = (ushort)((byte)(uVar12 >> 4) & 1) * auVar34._8_2_;
                  auVar35._10_2_ = (ushort)((byte)(uVar12 >> 5) & 1) * auVar34._10_2_;
                  auVar35._12_2_ = (ushort)((byte)(uVar12 >> 6) & 1) * auVar34._12_2_;
                  auVar35._14_2_ = (ushort)((byte)(uVar12 >> 7) & 1) * auVar34._14_2_;
                  auVar35._16_2_ = (ushort)(bVar2 & 1) * auVar34._16_2_;
                  auVar35._18_2_ = (ushort)((byte)(uVar12 >> 9) & 1) * auVar34._18_2_;
                  auVar35._20_2_ = (ushort)((byte)(uVar12 >> 10) & 1) * auVar34._20_2_;
                  auVar35._22_2_ = (ushort)((byte)(uVar12 >> 0xb) & 1) * auVar34._22_2_;
                  auVar35._24_2_ = (ushort)((byte)(uVar12 >> 0xc) & 1) * auVar34._24_2_;
                  auVar35._26_2_ = (ushort)((byte)(uVar12 >> 0xd) & 1) * auVar34._26_2_;
                  auVar35._28_2_ = (ushort)((byte)(uVar12 >> 0xe) & 1) * auVar34._28_2_;
                  auVar35._30_2_ = (ushort)(byte)(uVar12 >> 0xf) * auVar34._30_2_;
                  auVar44 = vpmovsxwd_avx512f(auVar36);
                  auVar45 = vpmovsxwd_avx512f(auVar37);
                  auVar46 = vpmovsxwd_avx512f(auVar35);
                  auVar44 = vpaddd_avx512f(auVar44,auVar45);
                  auVar44 = vpaddd_avx512f(auVar44,auVar46);
                  lVar11 = lVar11 + 0x20;
                  auVar44 = vpmulld_avx512f(auVar5,auVar44);
                  auVar44 = vpaddd_avx512f(auVar44,auVar6);
                  auVar44 = vpsrad_avx512f(auVar44,0x10);
                  auVar44 = vpmaxsd_avx512f(auVar44,auVar41);
                  auVar44 = vpminsd_avx512f(auVar44,auVar7);
                  auVar33 = vpmovdb_avx512f(auVar44);
                  auVar33 = vmovdqu8_avx512vl(auVar33);
                  *(undefined1 (*) [16])(uVar17 + uVar26) = auVar33;
                  uVar17 = uVar17 + 0x10;
                } while (uVar17 < (ulonglong)(longlong)(int)uVar10);
                if (uVar28 == uVar10) goto LAB_140ac7b7e;
              }
            }
            if ((int)(uVar10 + 0x20) <= (int)uVar15) {
              uVar17 = (ulonglong)(int)uVar10;
              do {
                auVar43 = *(undefined1 (*) [64])(lVar29 + uVar17 * 2);
                auVar42 = *(undefined1 (*) [64])(lVar23 + uVar17 * 2);
                auVar44 = *(undefined1 (*) [64])(lVar25 + uVar17 * 2);
                auVar34 = vextractf64x4_avx512f(auVar43,1);
                auVar36 = vextractf64x4_avx512f(auVar42,1);
                auVar37 = vextractf64x4_avx512f(auVar44,1);
                auVar45 = vpmovsxwd_avx512f(auVar34);
                auVar46 = vpmovsxwd_avx512f(auVar36);
                auVar43 = vpmovsxwd_avx512f(auVar43._0_32_);
                auVar42 = vpmovsxwd_avx512f(auVar42._0_32_);
                auVar43 = vpaddd_avx512f(auVar43,auVar42);
                auVar42 = vpmovsxwd_avx512f(auVar44._0_32_);
                auVar44 = vpmovsxwd_avx512f(auVar37);
                auVar45 = vpaddd_avx512f(auVar45,auVar46);
                auVar43 = vpaddd_avx512f(auVar43,auVar42);
                auVar42 = vpaddd_avx512f(auVar45,auVar44);
                auVar43 = vpmulld_avx512f(auVar5,auVar43);
                auVar43 = vpaddd_avx512f(auVar43,auVar6);
                auVar43 = vpsrad_avx512f(auVar43,0x10);
                auVar42 = vpmulld_avx512f(auVar5,auVar42);
                auVar42 = vpaddd_avx512f(auVar42,auVar6);
                auVar42 = vpsrad_avx512f(auVar42,0x10);
                auVar43 = vpmaxsd_avx512f(auVar43,auVar41);
                auVar43 = vpminsd_avx512f(auVar43,auVar7);
                auVar42 = vpmaxsd_avx512f(auVar42,auVar41);
                auVar33 = vpmovdb_avx512f(auVar43);
                auVar43 = vpminsd_avx512f(auVar42,auVar7);
                auVar32 = vpmovdb_avx512f(auVar43);
                auVar34 = vinserti32x4_avx512vl(ZEXT1632(auVar33),auVar32,1);
                *(undefined1 (*) [32])(uVar17 + uVar26) = auVar34;
                uVar17 = uVar17 + 0x20;
              } while (uVar17 < (ulonglong)(longlong)(int)uVar15);
            }
          }
          if (uVar15 + 1 <= uVar28) {
            uVar10 = 0;
            lVar11 = 0;
            auVar42 = vpbroadcastd_avx512f();
            auVar43 = auVar4;
            do {
              uVar17 = vpcmpgtd_avx512f(auVar42,auVar43);
              auVar43 = vpaddd_avx512f(auVar43,auVar3);
              lVar16 = (longlong)(int)(uVar15 * 2 + uVar10 * 2);
              uVar10 = uVar10 + 0x10;
              auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar16 + lVar29));
              bVar1 = (byte)uVar17;
              auVar38._2_2_ = (ushort)((byte)(uVar17 >> 1) & 1) * auVar34._2_2_;
              auVar38._0_2_ = (ushort)(bVar1 & 1) * auVar34._0_2_;
              auVar38._4_2_ = (ushort)((byte)(uVar17 >> 2) & 1) * auVar34._4_2_;
              auVar38._6_2_ = (ushort)((byte)(uVar17 >> 3) & 1) * auVar34._6_2_;
              auVar38._8_2_ = (ushort)((byte)(uVar17 >> 4) & 1) * auVar34._8_2_;
              auVar38._10_2_ = (ushort)((byte)(uVar17 >> 5) & 1) * auVar34._10_2_;
              auVar38._12_2_ = (ushort)((byte)(uVar17 >> 6) & 1) * auVar34._12_2_;
              auVar38._14_2_ = (ushort)((byte)(uVar17 >> 7) & 1) * auVar34._14_2_;
              bVar2 = (byte)(uVar17 >> 8);
              auVar38._16_2_ = (ushort)(bVar2 & 1) * auVar34._16_2_;
              auVar38._18_2_ = (ushort)((byte)(uVar17 >> 9) & 1) * auVar34._18_2_;
              auVar38._20_2_ = (ushort)((byte)(uVar17 >> 10) & 1) * auVar34._20_2_;
              auVar38._22_2_ = (ushort)((byte)(uVar17 >> 0xb) & 1) * auVar34._22_2_;
              auVar38._24_2_ = (ushort)((byte)(uVar17 >> 0xc) & 1) * auVar34._24_2_;
              auVar38._26_2_ = (ushort)((byte)(uVar17 >> 0xd) & 1) * auVar34._26_2_;
              auVar38._28_2_ = (ushort)((byte)(uVar17 >> 0xe) & 1) * auVar34._28_2_;
              auVar38._30_2_ = (ushort)(byte)(uVar17 >> 0xf) * auVar34._30_2_;
              auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar16 + lVar23));
              auVar39._2_2_ = (ushort)((byte)(uVar17 >> 1) & 1) * auVar34._2_2_;
              auVar39._0_2_ = (ushort)(bVar1 & 1) * auVar34._0_2_;
              auVar39._4_2_ = (ushort)((byte)(uVar17 >> 2) & 1) * auVar34._4_2_;
              auVar39._6_2_ = (ushort)((byte)(uVar17 >> 3) & 1) * auVar34._6_2_;
              auVar39._8_2_ = (ushort)((byte)(uVar17 >> 4) & 1) * auVar34._8_2_;
              auVar39._10_2_ = (ushort)((byte)(uVar17 >> 5) & 1) * auVar34._10_2_;
              auVar39._12_2_ = (ushort)((byte)(uVar17 >> 6) & 1) * auVar34._12_2_;
              auVar39._14_2_ = (ushort)((byte)(uVar17 >> 7) & 1) * auVar34._14_2_;
              auVar39._16_2_ = (ushort)(bVar2 & 1) * auVar34._16_2_;
              auVar39._18_2_ = (ushort)((byte)(uVar17 >> 9) & 1) * auVar34._18_2_;
              auVar39._20_2_ = (ushort)((byte)(uVar17 >> 10) & 1) * auVar34._20_2_;
              auVar39._22_2_ = (ushort)((byte)(uVar17 >> 0xb) & 1) * auVar34._22_2_;
              auVar39._24_2_ = (ushort)((byte)(uVar17 >> 0xc) & 1) * auVar34._24_2_;
              auVar39._26_2_ = (ushort)((byte)(uVar17 >> 0xd) & 1) * auVar34._26_2_;
              auVar39._28_2_ = (ushort)((byte)(uVar17 >> 0xe) & 1) * auVar34._28_2_;
              auVar39._30_2_ = (ushort)(byte)(uVar17 >> 0xf) * auVar34._30_2_;
              auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar16 + lVar25));
              auVar40._2_2_ = (ushort)((byte)(uVar17 >> 1) & 1) * auVar34._2_2_;
              auVar40._0_2_ = (ushort)(bVar1 & 1) * auVar34._0_2_;
              auVar40._4_2_ = (ushort)((byte)(uVar17 >> 2) & 1) * auVar34._4_2_;
              auVar40._6_2_ = (ushort)((byte)(uVar17 >> 3) & 1) * auVar34._6_2_;
              auVar40._8_2_ = (ushort)((byte)(uVar17 >> 4) & 1) * auVar34._8_2_;
              auVar40._10_2_ = (ushort)((byte)(uVar17 >> 5) & 1) * auVar34._10_2_;
              auVar40._12_2_ = (ushort)((byte)(uVar17 >> 6) & 1) * auVar34._12_2_;
              auVar40._14_2_ = (ushort)((byte)(uVar17 >> 7) & 1) * auVar34._14_2_;
              auVar40._16_2_ = (ushort)(bVar2 & 1) * auVar34._16_2_;
              auVar40._18_2_ = (ushort)((byte)(uVar17 >> 9) & 1) * auVar34._18_2_;
              auVar40._20_2_ = (ushort)((byte)(uVar17 >> 10) & 1) * auVar34._20_2_;
              auVar40._22_2_ = (ushort)((byte)(uVar17 >> 0xb) & 1) * auVar34._22_2_;
              auVar40._24_2_ = (ushort)((byte)(uVar17 >> 0xc) & 1) * auVar34._24_2_;
              auVar40._26_2_ = (ushort)((byte)(uVar17 >> 0xd) & 1) * auVar34._26_2_;
              auVar40._28_2_ = (ushort)((byte)(uVar17 >> 0xe) & 1) * auVar34._28_2_;
              auVar40._30_2_ = (ushort)(byte)(uVar17 >> 0xf) * auVar34._30_2_;
              auVar44 = vpmovsxwd_avx512f(auVar38);
              auVar45 = vpmovsxwd_avx512f(auVar39);
              auVar46 = vpmovsxwd_avx512f(auVar40);
              auVar44 = vpaddd_avx512f(auVar44,auVar45);
              auVar44 = vpaddd_avx512f(auVar44,auVar46);
              auVar44 = vpmulld_avx512f(auVar5,auVar44);
              auVar44 = vpaddd_avx512f(auVar44,auVar6);
              auVar44 = vpsrad_avx512f(auVar44,0x10);
              auVar44 = vpmaxsd_avx512f(auVar44,auVar41);
              auVar44 = vpminsd_avx512f(auVar44,auVar7);
              auVar33 = vpmovdb_avx512f(auVar44);
              auVar33 = vmovdqu8_avx512vl(auVar33);
              *(undefined1 (*) [16])(lVar11 + uVar26 + (longlong)(int)uVar15) = auVar33;
              lVar11 = lVar11 + 0x10;
            } while (uVar10 < uVar28 - uVar15);
          }
        }
      }
LAB_140ac7b7e:
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + param_3;
    } while (uVar9 < uVar24);
  }
  return;
}

