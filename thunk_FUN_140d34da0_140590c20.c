
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d34da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                        ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                        longlong param_9)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [64];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  
  param_9 = param_7 * param_8 + param_9;
  lVar10 = 0;
  if (0 < param_6) {
    lVar11 = 0;
    lVar1 = param_7 * 2 + 2;
    auVar18 = vmovdqu32_avx512f(_DAT_143092440);
    lVar7 = 0;
    do {
      lVar6 = param_1 + lVar11;
      pauVar5 = (undefined1 (*) [64])(param_3 + lVar7);
      lVar3 = 0;
      if (0 < (longlong)(param_5 & 0xffffffffffffff80)) {
        do {
          lVar14 = 0;
          lVar4 = 0;
          lVar8 = 0;
          lVar9 = 0;
          auVar22 = auVar18;
          auVar21 = auVar18;
          auVar20 = auVar18;
          auVar19 = auVar18;
          if (0 < param_8) {
            do {
              lVar17 = (longlong)*(short *)(param_9 + lVar4 * 2);
              lVar15 = 0;
              if (0 < lVar17) {
                lVar13 = lVar6 + lVar8;
                do {
                  lVar12 = (longlong)*(short *)(param_9 + lVar9 + 2 + lVar15 * 2);
                  lVar15 = lVar15 + 1;
                  auVar19 = vpmaxsw_avx512bw(auVar19,*(undefined1 (*) [64])(lVar13 + lVar12 * 2));
                  auVar20 = vpmaxsw_avx512bw(auVar20,*(undefined1 (*) [64])
                                                      (lVar13 + 0x40 + lVar12 * 2));
                  auVar21 = vpmaxsw_avx512bw(auVar21,*(undefined1 (*) [64])
                                                      (lVar13 + 0x80 + lVar12 * 2));
                  auVar22 = vpmaxsw_avx512bw(auVar22,*(undefined1 (*) [64])
                                                      (lVar13 + 0xc0 + lVar12 * 2));
                } while (lVar15 < lVar17);
              }
              lVar14 = lVar14 + 1;
              lVar9 = lVar9 + lVar1;
              lVar4 = lVar4 + 1 + param_7;
              lVar8 = lVar8 + param_2 * 2;
            } while (lVar14 < param_8);
          }
          lVar3 = lVar3 + 0x80;
          lVar6 = lVar6 + 0x100;
          *pauVar5 = auVar19;
          pauVar5[1] = auVar20;
          pauVar5[2] = auVar21;
          pauVar5[3] = auVar22;
          pauVar5 = pauVar5 + 4;
        } while (lVar3 < (longlong)(param_5 & 0xffffffffffffff80));
      }
      for (; lVar3 < (longlong)(param_5 & 0xffffffffffffffc0); lVar3 = lVar3 + 0x40) {
        lVar14 = 0;
        lVar4 = 0;
        lVar8 = 0;
        lVar9 = 0;
        auVar22 = auVar18;
        auVar21 = auVar18;
        if (0 < param_8) {
          do {
            lVar17 = (longlong)*(short *)(param_9 + lVar4 * 2);
            lVar15 = 0;
            if (0 < lVar17) {
              do {
                lVar13 = (longlong)*(short *)(param_9 + lVar9 + 2 + lVar15 * 2);
                lVar15 = lVar15 + 1;
                auVar21 = vpmaxsw_avx512bw(auVar21,*(undefined1 (*) [64])
                                                    (lVar6 + lVar8 + lVar13 * 2));
                auVar22 = vpmaxsw_avx512bw(auVar22,*(undefined1 (*) [64])
                                                    (lVar6 + lVar8 + 0x40 + lVar13 * 2));
              } while (lVar15 < lVar17);
            }
            lVar14 = lVar14 + 1;
            lVar9 = lVar9 + lVar1;
            lVar4 = lVar4 + 1 + param_7;
            lVar8 = lVar8 + param_2 * 2;
          } while (lVar14 < param_8);
        }
        lVar6 = lVar6 + 0x80;
        *pauVar5 = auVar21;
        pauVar5[1] = auVar22;
        pauVar5 = pauVar5 + 2;
      }
      for (; lVar3 < (longlong)(param_5 & 0xffffffffffffffe0); lVar3 = lVar3 + 0x20) {
        lVar14 = 0;
        lVar4 = 0;
        lVar8 = 0;
        lVar9 = 0;
        auVar22 = auVar18;
        if (0 < param_8) {
          do {
            lVar17 = (longlong)*(short *)(param_9 + lVar4 * 2);
            lVar15 = 0;
            if (0 < lVar17) {
              do {
                lVar13 = lVar15 * 2;
                lVar15 = lVar15 + 1;
                auVar22 = vpmaxsw_avx512bw(auVar22,*(undefined1 (*) [64])
                                                    (lVar6 + lVar8 +
                                                    (longlong)
                                                    *(short *)(param_9 + lVar9 + 2 + lVar13) * 2));
              } while (lVar15 < lVar17);
            }
            lVar14 = lVar14 + 1;
            lVar9 = lVar9 + lVar1;
            lVar4 = lVar4 + 1 + param_7;
            lVar8 = lVar8 + param_2 * 2;
          } while (lVar14 < param_8);
        }
        lVar6 = lVar6 + 0x40;
        *pauVar5 = auVar22;
        pauVar5 = pauVar5 + 1;
      }
      uVar16 = 0xffffffff >> (-(int)param_5 & 0x1fU);
      if (lVar3 < (longlong)param_5) {
        lVar9 = 0;
        lVar8 = 0;
        lVar3 = 0;
        lVar4 = 0;
        auVar22 = auVar18;
        if (0 < param_8) {
          do {
            lVar15 = (longlong)*(short *)(param_9 + lVar8 * 2);
            lVar14 = 0;
            if (0 < lVar15) {
              do {
                lVar17 = lVar14 * 2;
                lVar14 = lVar14 + 1;
                auVar21 = vmovdqu16_avx512bw(*(undefined1 (*) [64])
                                              (lVar6 + lVar3 +
                                              (longlong)*(short *)(param_9 + lVar4 + 2 + lVar17) * 2
                                              ));
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
                bVar2 = (byte)(uVar16 >> 0x18);
                auVar20._48_2_ = (ushort)(bVar2 & 1) * auVar21._48_2_;
                auVar20._50_2_ = (ushort)(bVar2 >> 1 & 1) * auVar21._50_2_;
                auVar20._52_2_ = (ushort)(bVar2 >> 2 & 1) * auVar21._52_2_;
                auVar20._54_2_ = (ushort)(bVar2 >> 3 & 1) * auVar21._54_2_;
                auVar20._56_2_ = (ushort)(bVar2 >> 4 & 1) * auVar21._56_2_;
                auVar20._58_2_ = (ushort)(bVar2 >> 5 & 1) * auVar21._58_2_;
                auVar20._60_2_ = (ushort)(bVar2 >> 6 & 1) * auVar21._60_2_;
                auVar20._62_2_ = (ushort)(bVar2 >> 7) * auVar21._62_2_;
                auVar22 = vpmaxsw_avx512bw(auVar22,auVar20);
              } while (lVar14 < lVar15);
            }
            lVar9 = lVar9 + 1;
            lVar4 = lVar4 + lVar1;
            lVar8 = lVar8 + 1 + param_7;
            lVar3 = lVar3 + param_2 * 2;
          } while (lVar9 < param_8);
        }
        auVar22 = vmovdqu16_avx512bw(auVar22);
        *pauVar5 = auVar22;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + param_2 * 2;
      lVar7 = lVar7 + param_4 * 2;
    } while (lVar10 < param_6);
  }
  return;
}

