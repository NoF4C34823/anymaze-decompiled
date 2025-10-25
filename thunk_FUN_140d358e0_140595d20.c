
void thunk_FUN_140d358e0(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                        ulonglong param_4,longlong param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [64];
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 in_ZMM0 [64];
  
  lVar2 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffff80)) {
    in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    do {
      lVar5 = 0;
      pauVar3 = param_1;
      auVar10 = in_ZMM0;
      auVar9 = in_ZMM0;
      auVar8 = in_ZMM0;
      auVar7 = in_ZMM0;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar7 = vpmaxuw_avx512bw(auVar7,*pauVar3);
          auVar8 = vpmaxuw_avx512bw(auVar8,pauVar3[1]);
          auVar9 = vpmaxuw_avx512bw(auVar9,pauVar3[2]);
          auVar10 = vpmaxuw_avx512bw(auVar10,pauVar3[3]);
          pauVar3 = (undefined1 (*) [64])(*pauVar3 + param_2 * 2);
        } while (lVar5 < param_5);
      }
      lVar2 = lVar2 + 0x80;
      param_1 = param_1 + 4;
      *param_3 = auVar7;
      param_3[1] = auVar8;
      param_3[2] = auVar9;
      param_3[3] = auVar10;
      param_3 = param_3 + 4;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
  }
  if (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    do {
      lVar5 = 0;
      pauVar3 = param_1;
      auVar10 = in_ZMM0;
      auVar9 = in_ZMM0;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar9 = vpmaxuw_avx512bw(auVar9,*pauVar3);
          auVar10 = vpmaxuw_avx512bw(auVar10,pauVar3[1]);
          pauVar3 = (undefined1 (*) [64])(*pauVar3 + param_2 * 2);
        } while (lVar5 < param_5);
      }
      lVar2 = lVar2 + 0x40;
      param_1 = param_1 + 2;
      *param_3 = auVar9;
      param_3[1] = auVar10;
      param_3 = param_3 + 2;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  if (lVar2 < (longlong)(param_4 & 0xffffffffffffffe0)) {
    in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    do {
      lVar6 = 0;
      lVar5 = 0;
      auVar10 = in_ZMM0;
      if (0 < param_5) {
        do {
          lVar6 = lVar6 + 1;
          auVar10 = vpmaxuw_avx512bw(auVar10,*(undefined1 (*) [64])(*param_1 + lVar5 * 2));
          lVar5 = lVar5 + param_2;
        } while (lVar6 < param_5);
      }
      lVar2 = lVar2 + 0x20;
      param_1 = param_1 + 1;
      *param_3 = auVar10;
      param_3 = param_3 + 1;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffffe0));
  }
  uVar4 = 0xffffffff >> (-(int)param_4 & 0x1fU);
  if (lVar2 < (longlong)param_4) {
    lVar5 = 0;
    lVar2 = 0;
    auVar10 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    if (0 < param_5) {
      do {
        auVar9 = vmovdqu16_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar2));
        auVar8._2_2_ = (ushort)((byte)(uVar4 >> 1) & 1) * auVar9._2_2_;
        auVar8._0_2_ = (ushort)((byte)uVar4 & 1) * auVar9._0_2_;
        auVar8._4_2_ = (ushort)((byte)(uVar4 >> 2) & 1) * auVar9._4_2_;
        auVar8._6_2_ = (ushort)((byte)(uVar4 >> 3) & 1) * auVar9._6_2_;
        auVar8._8_2_ = (ushort)((byte)(uVar4 >> 4) & 1) * auVar9._8_2_;
        auVar8._10_2_ = (ushort)((byte)(uVar4 >> 5) & 1) * auVar9._10_2_;
        auVar8._12_2_ = (ushort)((byte)(uVar4 >> 6) & 1) * auVar9._12_2_;
        auVar8._14_2_ = (ushort)((byte)(uVar4 >> 7) & 1) * auVar9._14_2_;
        auVar8._16_2_ = (ushort)((byte)(uVar4 >> 8) & 1) * auVar9._16_2_;
        auVar8._18_2_ = (ushort)((byte)(uVar4 >> 9) & 1) * auVar9._18_2_;
        auVar8._20_2_ = (ushort)((byte)(uVar4 >> 10) & 1) * auVar9._20_2_;
        auVar8._22_2_ = (ushort)((byte)(uVar4 >> 0xb) & 1) * auVar9._22_2_;
        auVar8._24_2_ = (ushort)((byte)(uVar4 >> 0xc) & 1) * auVar9._24_2_;
        auVar8._26_2_ = (ushort)((byte)(uVar4 >> 0xd) & 1) * auVar9._26_2_;
        auVar8._28_2_ = (ushort)((byte)(uVar4 >> 0xe) & 1) * auVar9._28_2_;
        auVar8._30_2_ = (ushort)((byte)(uVar4 >> 0xf) & 1) * auVar9._30_2_;
        auVar8._32_2_ = (ushort)((byte)(uVar4 >> 0x10) & 1) * auVar9._32_2_;
        auVar8._34_2_ = (ushort)((byte)(uVar4 >> 0x11) & 1) * auVar9._34_2_;
        auVar8._36_2_ = (ushort)((byte)(uVar4 >> 0x12) & 1) * auVar9._36_2_;
        auVar8._38_2_ = (ushort)((byte)(uVar4 >> 0x13) & 1) * auVar9._38_2_;
        auVar8._40_2_ = (ushort)((byte)(uVar4 >> 0x14) & 1) * auVar9._40_2_;
        auVar8._42_2_ = (ushort)((byte)(uVar4 >> 0x15) & 1) * auVar9._42_2_;
        auVar8._44_2_ = (ushort)((byte)(uVar4 >> 0x16) & 1) * auVar9._44_2_;
        auVar8._46_2_ = (ushort)((byte)(uVar4 >> 0x17) & 1) * auVar9._46_2_;
        bVar1 = (byte)(uVar4 >> 0x18);
        auVar8._48_2_ = (ushort)(bVar1 & 1) * auVar9._48_2_;
        auVar8._50_2_ = (ushort)(bVar1 >> 1 & 1) * auVar9._50_2_;
        auVar8._52_2_ = (ushort)(bVar1 >> 2 & 1) * auVar9._52_2_;
        auVar8._54_2_ = (ushort)(bVar1 >> 3 & 1) * auVar9._54_2_;
        auVar8._56_2_ = (ushort)(bVar1 >> 4 & 1) * auVar9._56_2_;
        auVar8._58_2_ = (ushort)(bVar1 >> 5 & 1) * auVar9._58_2_;
        auVar8._60_2_ = (ushort)(bVar1 >> 6 & 1) * auVar9._60_2_;
        auVar8._62_2_ = (ushort)(bVar1 >> 7) * auVar9._62_2_;
        lVar5 = lVar5 + 1;
        auVar10 = vpmaxuw_avx512bw(auVar10,auVar8);
        lVar2 = lVar2 + param_2 * 2;
      } while (lVar5 < param_5);
    }
    auVar10 = vmovdqu16_avx512bw(auVar10);
    *param_3 = auVar10;
  }
  return;
}

