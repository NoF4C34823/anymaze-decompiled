
void thunk_FUN_140d353c0(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulonglong param_3,
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
  undefined1 in_ZMM0 [64];
  
  uVar4 = param_3 & 0xffffffffffffff80;
  lVar6 = (longlong)param_5;
  lVar2 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar4) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        auVar12 = vpmaxuw_avx512bw(in_ZMM0,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar11 = vpmaxuw_avx512bw(in_ZMM0,param_1[1]);
        auVar10 = vpmaxuw_avx512bw(in_ZMM0,param_1[2]);
        auVar9 = vpmaxuw_avx512bw(in_ZMM0,param_1[3]);
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar10 = vpmaxuw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[2] + lVar6 * 2));
        auVar9 = vpmaxuw_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[3] + lVar6 * 2));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        auVar10 = vpmaxuw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[2] + lVar6 * 4));
        auVar9 = vpmaxuw_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[3] + lVar6 * 4));
        *param_2 = auVar12;
        param_2[1] = auVar11;
        param_2[2] = auVar10;
        param_2[3] = auVar9;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      } while (lVar2 < (longlong)uVar4);
    }
    if (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        auVar12 = vpmaxuw_avx512bw(in_ZMM0,*param_1);
        lVar2 = lVar2 + 0x40;
        auVar11 = vpmaxuw_avx512bw(in_ZMM0,param_1[1]);
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        *param_2 = auVar12;
        param_2[1] = auVar11;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
  }
  else if (param_4 == 5) {
    if (0 < (longlong)uVar4) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        auVar12 = vpmaxuw_avx512bw(in_ZMM0,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar11 = vpmaxuw_avx512bw(in_ZMM0,param_1[1]);
        auVar10 = vpmaxuw_avx512bw(in_ZMM0,param_1[2]);
        auVar9 = vpmaxuw_avx512bw(in_ZMM0,param_1[3]);
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar10 = vpmaxuw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[2] + lVar6 * 2));
        auVar9 = vpmaxuw_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[3] + lVar6 * 2));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        auVar10 = vpmaxuw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[2] + lVar6 * 4));
        auVar9 = vpmaxuw_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[3] + lVar6 * 4));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 6));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 6));
        auVar10 = vpmaxuw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[2] + lVar6 * 6));
        auVar9 = vpmaxuw_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[3] + lVar6 * 6));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 8));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 8));
        auVar10 = vpmaxuw_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[2] + lVar6 * 8));
        auVar9 = vpmaxuw_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[3] + lVar6 * 8));
        *param_2 = auVar12;
        param_2[1] = auVar11;
        param_2[2] = auVar10;
        param_2[3] = auVar9;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      } while (lVar2 < (longlong)uVar4);
    }
    if (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        auVar12 = vpmaxuw_avx512bw(in_ZMM0,*param_1);
        lVar2 = lVar2 + 0x40;
        auVar11 = vpmaxuw_avx512bw(in_ZMM0,param_1[1]);
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 2));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 2));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 4));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 4));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 6));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 6));
        auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar6 * 8));
        auVar11 = vpmaxuw_avx512bw(auVar11,*(undefined1 (*) [64])(param_1[1] + lVar6 * 8));
        *param_2 = auVar12;
        param_2[1] = auVar11;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
  }
  if (lVar2 < (longlong)uVar4) {
    in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    do {
      lVar7 = 0;
      pauVar5 = param_1;
      auVar12 = in_ZMM0;
      auVar11 = in_ZMM0;
      auVar10 = in_ZMM0;
      auVar9 = in_ZMM0;
      if (0 < param_4) {
        do {
          lVar7 = lVar7 + 1;
          auVar9 = vpmaxuw_avx512bw(auVar9,*pauVar5);
          auVar10 = vpmaxuw_avx512bw(auVar10,pauVar5[1]);
          auVar11 = vpmaxuw_avx512bw(auVar11,pauVar5[2]);
          auVar12 = vpmaxuw_avx512bw(auVar12,pauVar5[3]);
          pauVar5 = (undefined1 (*) [64])(*pauVar5 + lVar6 * 2);
        } while (lVar7 < param_4);
      }
      lVar2 = lVar2 + 0x80;
      param_1 = param_1 + 4;
      *param_2 = auVar9;
      param_2[1] = auVar10;
      param_2[2] = auVar11;
      param_2[3] = auVar12;
      param_2 = param_2 + 4;
    } while (lVar2 < (longlong)uVar4);
  }
  if (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0)) {
    in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    do {
      lVar7 = 0;
      pauVar5 = param_1;
      auVar12 = in_ZMM0;
      auVar11 = in_ZMM0;
      if (0 < param_4) {
        do {
          lVar7 = lVar7 + 1;
          auVar11 = vpmaxuw_avx512bw(auVar11,*pauVar5);
          auVar12 = vpmaxuw_avx512bw(auVar12,pauVar5[1]);
          pauVar5 = (undefined1 (*) [64])(*pauVar5 + lVar6 * 2);
        } while (lVar7 < param_4);
      }
      lVar2 = lVar2 + 0x40;
      param_1 = param_1 + 2;
      *param_2 = auVar11;
      param_2[1] = auVar12;
      param_2 = param_2 + 2;
    } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0));
  }
  if (lVar2 < (longlong)(param_3 & 0xffffffffffffffe0)) {
    in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    do {
      lVar8 = 0;
      lVar7 = 0;
      auVar12 = in_ZMM0;
      if (0 < param_4) {
        do {
          lVar8 = lVar8 + 1;
          auVar12 = vpmaxuw_avx512bw(auVar12,*(undefined1 (*) [64])(*param_1 + lVar7 * 2));
          lVar7 = lVar7 + lVar6;
        } while (lVar8 < param_4);
      }
      lVar2 = lVar2 + 0x20;
      param_1 = param_1 + 1;
      *param_2 = auVar12;
      param_2 = param_2 + 1;
    } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffe0));
  }
  uVar3 = 0xffffffff >> (-(int)param_3 & 0x1fU);
  if (lVar2 < (longlong)param_3) {
    lVar7 = 0;
    lVar2 = 0;
    auVar12 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    if (0 < param_4) {
      do {
        auVar10 = vmovdqu16_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar2));
        auVar11._2_2_ = (ushort)((byte)(uVar3 >> 1) & 1) * auVar10._2_2_;
        auVar11._0_2_ = (ushort)((byte)uVar3 & 1) * auVar10._0_2_;
        auVar11._4_2_ = (ushort)((byte)(uVar3 >> 2) & 1) * auVar10._4_2_;
        auVar11._6_2_ = (ushort)((byte)(uVar3 >> 3) & 1) * auVar10._6_2_;
        auVar11._8_2_ = (ushort)((byte)(uVar3 >> 4) & 1) * auVar10._8_2_;
        auVar11._10_2_ = (ushort)((byte)(uVar3 >> 5) & 1) * auVar10._10_2_;
        auVar11._12_2_ = (ushort)((byte)(uVar3 >> 6) & 1) * auVar10._12_2_;
        auVar11._14_2_ = (ushort)((byte)(uVar3 >> 7) & 1) * auVar10._14_2_;
        auVar11._16_2_ = (ushort)((byte)(uVar3 >> 8) & 1) * auVar10._16_2_;
        auVar11._18_2_ = (ushort)((byte)(uVar3 >> 9) & 1) * auVar10._18_2_;
        auVar11._20_2_ = (ushort)((byte)(uVar3 >> 10) & 1) * auVar10._20_2_;
        auVar11._22_2_ = (ushort)((byte)(uVar3 >> 0xb) & 1) * auVar10._22_2_;
        auVar11._24_2_ = (ushort)((byte)(uVar3 >> 0xc) & 1) * auVar10._24_2_;
        auVar11._26_2_ = (ushort)((byte)(uVar3 >> 0xd) & 1) * auVar10._26_2_;
        auVar11._28_2_ = (ushort)((byte)(uVar3 >> 0xe) & 1) * auVar10._28_2_;
        auVar11._30_2_ = (ushort)((byte)(uVar3 >> 0xf) & 1) * auVar10._30_2_;
        auVar11._32_2_ = (ushort)((byte)(uVar3 >> 0x10) & 1) * auVar10._32_2_;
        auVar11._34_2_ = (ushort)((byte)(uVar3 >> 0x11) & 1) * auVar10._34_2_;
        auVar11._36_2_ = (ushort)((byte)(uVar3 >> 0x12) & 1) * auVar10._36_2_;
        auVar11._38_2_ = (ushort)((byte)(uVar3 >> 0x13) & 1) * auVar10._38_2_;
        auVar11._40_2_ = (ushort)((byte)(uVar3 >> 0x14) & 1) * auVar10._40_2_;
        auVar11._42_2_ = (ushort)((byte)(uVar3 >> 0x15) & 1) * auVar10._42_2_;
        auVar11._44_2_ = (ushort)((byte)(uVar3 >> 0x16) & 1) * auVar10._44_2_;
        auVar11._46_2_ = (ushort)((byte)(uVar3 >> 0x17) & 1) * auVar10._46_2_;
        bVar1 = (byte)(uVar3 >> 0x18);
        auVar11._48_2_ = (ushort)(bVar1 & 1) * auVar10._48_2_;
        auVar11._50_2_ = (ushort)(bVar1 >> 1 & 1) * auVar10._50_2_;
        auVar11._52_2_ = (ushort)(bVar1 >> 2 & 1) * auVar10._52_2_;
        auVar11._54_2_ = (ushort)(bVar1 >> 3 & 1) * auVar10._54_2_;
        auVar11._56_2_ = (ushort)(bVar1 >> 4 & 1) * auVar10._56_2_;
        auVar11._58_2_ = (ushort)(bVar1 >> 5 & 1) * auVar10._58_2_;
        auVar11._60_2_ = (ushort)(bVar1 >> 6 & 1) * auVar10._60_2_;
        auVar11._62_2_ = (ushort)(bVar1 >> 7) * auVar10._62_2_;
        lVar7 = lVar7 + 1;
        auVar12 = vpmaxuw_avx512bw(auVar12,auVar11);
        lVar2 = lVar2 + lVar6 * 2;
      } while (lVar7 < param_4);
    }
    auVar12 = vmovdqu16_avx512bw(auVar12);
    *param_2 = auVar12;
  }
  return;
}

