
void thunk_FUN_140d35b00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                        ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                        longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [64];
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 in_ZMM0 [64];
  
  param_9 = param_7 * param_8 + param_9;
  lVar11 = 0;
  if (0 < param_6) {
    lVar12 = 0;
    lVar2 = param_7 * 2 + 2;
    lVar8 = 0;
    do {
      lVar7 = param_1 + lVar12;
      pauVar6 = (undefined1 (*) [64])(param_3 + lVar8);
      lVar4 = 0;
      if (0 < (longlong)(param_5 & 0xffffffffffffff80)) {
        in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
        do {
          lVar14 = 0;
          lVar5 = 0;
          lVar9 = 0;
          lVar10 = 0;
          auVar21 = in_ZMM0;
          auVar20 = in_ZMM0;
          auVar19 = in_ZMM0;
          auVar18 = in_ZMM0;
          if (0 < param_8) {
            do {
              uVar17 = (ulonglong)*(ushort *)(param_9 + lVar5 * 2);
              lVar15 = 0;
              if (uVar17 != 0) {
                lVar1 = lVar7 + lVar9;
                do {
                  uVar13 = (ulonglong)*(ushort *)(param_9 + lVar10 + 2 + lVar15 * 2);
                  lVar15 = lVar15 + 1;
                  auVar18 = vpmaxuw_avx512bw(auVar18,*(undefined1 (*) [64])(lVar1 + uVar13 * 2));
                  auVar19 = vpmaxuw_avx512bw(auVar19,*(undefined1 (*) [64])
                                                      (lVar1 + 0x40 + uVar13 * 2));
                  auVar20 = vpmaxuw_avx512bw(auVar20,*(undefined1 (*) [64])
                                                      (lVar1 + 0x80 + uVar13 * 2));
                  auVar21 = vpmaxuw_avx512bw(auVar21,*(undefined1 (*) [64])
                                                      (lVar1 + 0xc0 + uVar13 * 2));
                } while (lVar15 < (longlong)uVar17);
              }
              lVar14 = lVar14 + 1;
              lVar10 = lVar10 + lVar2;
              lVar5 = lVar5 + 1 + param_7;
              lVar9 = lVar9 + param_2 * 2;
            } while (lVar14 < param_8);
          }
          lVar4 = lVar4 + 0x80;
          lVar7 = lVar7 + 0x100;
          *pauVar6 = auVar18;
          pauVar6[1] = auVar19;
          pauVar6[2] = auVar20;
          pauVar6[3] = auVar21;
          pauVar6 = pauVar6 + 4;
        } while (lVar4 < (longlong)(param_5 & 0xffffffffffffff80));
      }
      if (lVar4 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
        do {
          lVar14 = 0;
          lVar5 = 0;
          lVar9 = 0;
          lVar10 = 0;
          auVar21 = in_ZMM0;
          auVar20 = in_ZMM0;
          if (0 < param_8) {
            do {
              uVar17 = (ulonglong)*(ushort *)(param_9 + lVar5 * 2);
              lVar15 = 0;
              if (uVar17 != 0) {
                do {
                  uVar13 = (ulonglong)*(ushort *)(param_9 + lVar10 + 2 + lVar15 * 2);
                  lVar15 = lVar15 + 1;
                  auVar20 = vpmaxuw_avx512bw(auVar20,*(undefined1 (*) [64])
                                                      (lVar7 + lVar9 + uVar13 * 2));
                  auVar21 = vpmaxuw_avx512bw(auVar21,*(undefined1 (*) [64])
                                                      (lVar7 + lVar9 + 0x40 + uVar13 * 2));
                } while (lVar15 < (longlong)uVar17);
              }
              lVar14 = lVar14 + 1;
              lVar10 = lVar10 + lVar2;
              lVar5 = lVar5 + 1 + param_7;
              lVar9 = lVar9 + param_2 * 2;
            } while (lVar14 < param_8);
          }
          lVar4 = lVar4 + 0x40;
          lVar7 = lVar7 + 0x80;
          *pauVar6 = auVar20;
          pauVar6[1] = auVar21;
          pauVar6 = pauVar6 + 2;
        } while (lVar4 < (longlong)(param_5 & 0xffffffffffffffc0));
      }
      if (lVar4 < (longlong)(param_5 & 0xffffffffffffffe0)) {
        in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
        do {
          lVar14 = 0;
          lVar5 = 0;
          lVar9 = 0;
          lVar10 = 0;
          auVar21 = in_ZMM0;
          if (0 < param_8) {
            do {
              uVar17 = (ulonglong)*(ushort *)(param_9 + lVar5 * 2);
              lVar15 = 0;
              if (uVar17 != 0) {
                do {
                  lVar1 = lVar15 * 2;
                  lVar15 = lVar15 + 1;
                  auVar21 = vpmaxuw_avx512bw(auVar21,*(undefined1 (*) [64])
                                                      (lVar7 + lVar9 +
                                                      (ulonglong)
                                                      *(ushort *)(param_9 + lVar10 + 2 + lVar1) * 2)
                                            );
                } while (lVar15 < (longlong)uVar17);
              }
              lVar14 = lVar14 + 1;
              lVar10 = lVar10 + lVar2;
              lVar5 = lVar5 + 1 + param_7;
              lVar9 = lVar9 + param_2 * 2;
            } while (lVar14 < param_8);
          }
          lVar4 = lVar4 + 0x20;
          lVar7 = lVar7 + 0x40;
          *pauVar6 = auVar21;
          pauVar6 = pauVar6 + 1;
        } while (lVar4 < (longlong)(param_5 & 0xffffffffffffffe0));
      }
      uVar16 = 0xffffffff >> (-(int)param_5 & 0x1fU);
      if (lVar4 < (longlong)param_5) {
        lVar10 = 0;
        lVar9 = 0;
        lVar4 = 0;
        lVar5 = 0;
        in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar9 * 2);
            lVar14 = 0;
            if (uVar17 != 0) {
              do {
                lVar15 = lVar14 * 2;
                lVar14 = lVar14 + 1;
                auVar21 = vmovdqu16_avx512bw(*(undefined1 (*) [64])
                                              (lVar7 + lVar4 +
                                              (ulonglong)*(ushort *)(param_9 + lVar5 + 2 + lVar15) *
                                              2));
                auVar20._2_2_ = (ushort)((byte)(uVar16 >> 1) & 1) * auVar21._2_2_;
                auVar20._0_2_ = (ushort)((byte)uVar16 & 1) * auVar21._0_2_;
                auVar20._4_2_ = (ushort)((byte)(uVar16 >> 2) & 1) * auVar21._4_2_;
                auVar20._6_2_ = (ushort)((byte)(uVar16 >> 3) & 1) * auVar21._6_2_;
                auVar20._8_2_ = (ushort)((byte)(uVar16 >> 4) & 1) * auVar21._8_2_;
                auVar20._10_2_ = (ushort)((byte)(uVar16 >> 5) & 1) * auVar21._10_2_;
                auVar20._12_2_ = (ushort)((byte)(uVar16 >> 6) & 1) * auVar21._12_2_;
                auVar20._14_2_ = (ushort)((byte)(uVar16 >> 7) & 1) * auVar21._14_2_;
                auVar20._16_2_ = (ushort)((byte)(uVar16 >> 8) & 1) * auVar21._16_2_;
                auVar20._18_2_ = (ushort)((byte)(uVar16 >> 9) & 1) * auVar21._18_2_;
                auVar20._20_2_ = (ushort)((byte)(uVar16 >> 10) & 1) * auVar21._20_2_;
                auVar20._22_2_ = (ushort)((byte)(uVar16 >> 0xb) & 1) * auVar21._22_2_;
                auVar20._24_2_ = (ushort)((byte)(uVar16 >> 0xc) & 1) * auVar21._24_2_;
                auVar20._26_2_ = (ushort)((byte)(uVar16 >> 0xd) & 1) * auVar21._26_2_;
                auVar20._28_2_ = (ushort)((byte)(uVar16 >> 0xe) & 1) * auVar21._28_2_;
                auVar20._30_2_ = (ushort)((byte)(uVar16 >> 0xf) & 1) * auVar21._30_2_;
                auVar20._32_2_ = (ushort)((byte)(uVar16 >> 0x10) & 1) * auVar21._32_2_;
                auVar20._34_2_ = (ushort)((byte)(uVar16 >> 0x11) & 1) * auVar21._34_2_;
                auVar20._36_2_ = (ushort)((byte)(uVar16 >> 0x12) & 1) * auVar21._36_2_;
                auVar20._38_2_ = (ushort)((byte)(uVar16 >> 0x13) & 1) * auVar21._38_2_;
                auVar20._40_2_ = (ushort)((byte)(uVar16 >> 0x14) & 1) * auVar21._40_2_;
                auVar20._42_2_ = (ushort)((byte)(uVar16 >> 0x15) & 1) * auVar21._42_2_;
                auVar20._44_2_ = (ushort)((byte)(uVar16 >> 0x16) & 1) * auVar21._44_2_;
                auVar20._46_2_ = (ushort)((byte)(uVar16 >> 0x17) & 1) * auVar21._46_2_;
                bVar3 = (byte)(uVar16 >> 0x18);
                auVar20._48_2_ = (ushort)(bVar3 & 1) * auVar21._48_2_;
                auVar20._50_2_ = (ushort)(bVar3 >> 1 & 1) * auVar21._50_2_;
                auVar20._52_2_ = (ushort)(bVar3 >> 2 & 1) * auVar21._52_2_;
                auVar20._54_2_ = (ushort)(bVar3 >> 3 & 1) * auVar21._54_2_;
                auVar20._56_2_ = (ushort)(bVar3 >> 4 & 1) * auVar21._56_2_;
                auVar20._58_2_ = (ushort)(bVar3 >> 5 & 1) * auVar21._58_2_;
                auVar20._60_2_ = (ushort)(bVar3 >> 6 & 1) * auVar21._60_2_;
                auVar20._62_2_ = (ushort)(bVar3 >> 7) * auVar21._62_2_;
                in_ZMM0 = vpmaxuw_avx512bw(in_ZMM0,auVar20);
              } while (lVar14 < (longlong)uVar17);
            }
            lVar10 = lVar10 + 1;
            lVar5 = lVar5 + lVar2;
            lVar9 = lVar9 + 1 + param_7;
            lVar4 = lVar4 + param_2 * 2;
          } while (lVar10 < param_8);
        }
        auVar21 = vmovdqu16_avx512bw(in_ZMM0);
        *pauVar6 = auVar21;
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + param_2 * 2;
      lVar8 = lVar8 + param_4 * 2;
    } while (lVar11 < param_6);
  }
  return;
}

