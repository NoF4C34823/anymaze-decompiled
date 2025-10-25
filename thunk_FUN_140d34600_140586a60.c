
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d34600(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulonglong param_3,
                        longlong param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [64];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  
  uVar4 = param_3 & 0xffffffffffffff80;
  lVar6 = (longlong)param_5;
  lVar2 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar4) {
      auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
      do {
        auVar13 = vpmaxsw_avx512bw(auVar9,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar12 = vpmaxsw_avx512bw(auVar9,param_1[1]);
        auVar11 = vpmaxsw_avx512bw(auVar9,param_1[2]);
        auVar10 = vpmaxsw_avx512bw(auVar9,param_1[3]);
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar11 = vpmaxsw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[2] + lVar6 * 2));
        auVar10 = vpmaxsw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[3] + lVar6 * 2));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        auVar11 = vpmaxsw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[2] + lVar6 * 4));
        auVar10 = vpmaxsw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[3] + lVar6 * 4));
        *param_2 = auVar13;
        param_2[1] = auVar12;
        param_2[2] = auVar11;
        param_2[3] = auVar10;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      } while (lVar2 < (longlong)uVar4);
    }
    if (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
      do {
        auVar13 = vpmaxsw_avx512bw(auVar9,*param_1);
        lVar2 = lVar2 + 0x40;
        auVar12 = vpmaxsw_avx512bw(auVar9,param_1[1]);
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        *param_2 = auVar13;
        param_2[1] = auVar12;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
  }
  else if (param_4 == 5) {
    if (0 < (longlong)uVar4) {
      auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
      do {
        auVar13 = vpmaxsw_avx512bw(auVar9,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar12 = vpmaxsw_avx512bw(auVar9,param_1[1]);
        auVar11 = vpmaxsw_avx512bw(auVar9,param_1[2]);
        auVar10 = vpmaxsw_avx512bw(auVar9,param_1[3]);
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar11 = vpmaxsw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[2] + lVar6 * 2));
        auVar10 = vpmaxsw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[3] + lVar6 * 2));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        auVar11 = vpmaxsw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[2] + lVar6 * 4));
        auVar10 = vpmaxsw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[3] + lVar6 * 4));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 6));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 6));
        auVar11 = vpmaxsw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[2] + lVar6 * 6));
        auVar10 = vpmaxsw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[3] + lVar6 * 6));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 8));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 8));
        auVar11 = vpmaxsw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[2] + lVar6 * 8));
        auVar10 = vpmaxsw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[3] + lVar6 * 8));
        *param_2 = auVar13;
        param_2[1] = auVar12;
        param_2[2] = auVar11;
        param_2[3] = auVar10;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      } while (lVar2 < (longlong)uVar4);
    }
    if (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
      do {
        auVar13 = vpmaxsw_avx512bw(auVar9,*param_1);
        lVar2 = lVar2 + 0x40;
        auVar12 = vpmaxsw_avx512bw(auVar9,param_1[1]);
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 6));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 6));
        auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar6 * 8));
        auVar12 = vpmaxsw_avx512bw(auVar12,*(undefined1 (*) [64])(param_1[1] + lVar6 * 8));
        *param_2 = auVar13;
        param_2[1] = auVar12;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
  }
  if (lVar2 < (longlong)uVar4) {
    auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
    do {
      lVar7 = 0;
      pauVar5 = param_1;
      auVar13 = auVar9;
      auVar12 = auVar9;
      auVar11 = auVar9;
      auVar10 = auVar9;
      if (0 < param_4) {
        do {
          lVar7 = lVar7 + 1;
          auVar10 = vpmaxsw_avx512bw(auVar10,*pauVar5);
          auVar11 = vpmaxsw_avx512bw(auVar11,pauVar5[1]);
          auVar12 = vpmaxsw_avx512bw(auVar12,pauVar5[2]);
          auVar13 = vpmaxsw_avx512bw(auVar13,pauVar5[3]);
          pauVar5 = (undefined1 (*) [64])(*pauVar5 + lVar6 * 2);
        } while (lVar7 < param_4);
      }
      lVar2 = lVar2 + 0x80;
      param_1 = param_1 + 4;
      *param_2 = auVar10;
      param_2[1] = auVar11;
      param_2[2] = auVar12;
      param_2[3] = auVar13;
      param_2 = param_2 + 4;
    } while (lVar2 < (longlong)uVar4);
  }
  if (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0)) {
    auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
    do {
      lVar7 = 0;
      pauVar5 = param_1;
      auVar13 = auVar9;
      auVar12 = auVar9;
      if (0 < param_4) {
        do {
          lVar7 = lVar7 + 1;
          auVar12 = vpmaxsw_avx512bw(auVar12,*pauVar5);
          auVar13 = vpmaxsw_avx512bw(auVar13,pauVar5[1]);
          pauVar5 = (undefined1 (*) [64])(*pauVar5 + lVar6 * 2);
        } while (lVar7 < param_4);
      }
      lVar2 = lVar2 + 0x40;
      param_1 = param_1 + 2;
      *param_2 = auVar12;
      param_2[1] = auVar13;
      param_2 = param_2 + 2;
    } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0));
  }
  if (lVar2 < (longlong)(param_3 & 0xffffffffffffffe0)) {
    auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
    do {
      lVar8 = 0;
      lVar7 = 0;
      auVar13 = auVar9;
      if (0 < param_4) {
        do {
          lVar8 = lVar8 + 1;
          auVar13 = vpmaxsw_avx512bw(auVar13,*(undefined1 (*) [64])(*param_1 + lVar7 * 2));
          lVar7 = lVar7 + lVar6;
        } while (lVar8 < param_4);
      }
      lVar2 = lVar2 + 0x20;
      param_1 = param_1 + 1;
      *param_2 = auVar13;
      param_2 = param_2 + 1;
    } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffe0));
  }
  uVar3 = 0xffffffff >> (-(int)param_3 & 0x1fU);
  if (lVar2 < (longlong)param_3) {
    lVar7 = 0;
    auVar9 = vmovdqu32_avx512f(_DAT_1430923c0);
    lVar2 = 0;
    if (0 < param_4) {
      do {
        auVar12 = vmovdqu16_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar2));
        auVar13._2_2_ = (ushort)((byte)(uVar3 >> 1) & 1) * auVar12._2_2_;
        auVar13._0_2_ = (ushort)((byte)uVar3 & 1) * auVar12._0_2_;
        auVar13._4_2_ = (ushort)((byte)(uVar3 >> 2) & 1) * auVar12._4_2_;
        auVar13._6_2_ = (ushort)((byte)(uVar3 >> 3) & 1) * auVar12._6_2_;
        auVar13._8_2_ = (ushort)((byte)(uVar3 >> 4) & 1) * auVar12._8_2_;
        auVar13._10_2_ = (ushort)((byte)(uVar3 >> 5) & 1) * auVar12._10_2_;
        auVar13._12_2_ = (ushort)((byte)(uVar3 >> 6) & 1) * auVar12._12_2_;
        auVar13._14_2_ = (ushort)((byte)(uVar3 >> 7) & 1) * auVar12._14_2_;
        auVar13._16_2_ = (ushort)((byte)(uVar3 >> 8) & 1) * auVar12._16_2_;
        auVar13._18_2_ = (ushort)((byte)(uVar3 >> 9) & 1) * auVar12._18_2_;
        auVar13._20_2_ = (ushort)((byte)(uVar3 >> 10) & 1) * auVar12._20_2_;
        auVar13._22_2_ = (ushort)((byte)(uVar3 >> 0xb) & 1) * auVar12._22_2_;
        auVar13._24_2_ = (ushort)((byte)(uVar3 >> 0xc) & 1) * auVar12._24_2_;
        auVar13._26_2_ = (ushort)((byte)(uVar3 >> 0xd) & 1) * auVar12._26_2_;
        auVar13._28_2_ = (ushort)((byte)(uVar3 >> 0xe) & 1) * auVar12._28_2_;
        auVar13._30_2_ = (ushort)((byte)(uVar3 >> 0xf) & 1) * auVar12._30_2_;
        auVar13._32_2_ = (ushort)((byte)(uVar3 >> 0x10) & 1) * auVar12._32_2_;
        auVar13._34_2_ = (ushort)((byte)(uVar3 >> 0x11) & 1) * auVar12._34_2_;
        auVar13._36_2_ = (ushort)((byte)(uVar3 >> 0x12) & 1) * auVar12._36_2_;
        auVar13._38_2_ = (ushort)((byte)(uVar3 >> 0x13) & 1) * auVar12._38_2_;
        auVar13._40_2_ = (ushort)((byte)(uVar3 >> 0x14) & 1) * auVar12._40_2_;
        auVar13._42_2_ = (ushort)((byte)(uVar3 >> 0x15) & 1) * auVar12._42_2_;
        auVar13._44_2_ = (ushort)((byte)(uVar3 >> 0x16) & 1) * auVar12._44_2_;
        auVar13._46_2_ = (ushort)((byte)(uVar3 >> 0x17) & 1) * auVar12._46_2_;
        bVar1 = (byte)(uVar3 >> 0x18);
        auVar13._48_2_ = (ushort)(bVar1 & 1) * auVar12._48_2_;
        auVar13._50_2_ = (ushort)(bVar1 >> 1 & 1) * auVar12._50_2_;
        auVar13._52_2_ = (ushort)(bVar1 >> 2 & 1) * auVar12._52_2_;
        auVar13._54_2_ = (ushort)(bVar1 >> 3 & 1) * auVar12._54_2_;
        auVar13._56_2_ = (ushort)(bVar1 >> 4 & 1) * auVar12._56_2_;
        auVar13._58_2_ = (ushort)(bVar1 >> 5 & 1) * auVar12._58_2_;
        auVar13._60_2_ = (ushort)(bVar1 >> 6 & 1) * auVar12._60_2_;
        auVar13._62_2_ = (ushort)(bVar1 >> 7) * auVar12._62_2_;
        lVar7 = lVar7 + 1;
        auVar9 = vpmaxsw_avx512bw(auVar9,auVar13);
        lVar2 = lVar2 + lVar6 * 2;
      } while (lVar7 < param_4);
    }
    auVar9 = vmovdqu16_avx512bw(auVar9);
    *param_2 = auVar9;
  }
  return;
}

