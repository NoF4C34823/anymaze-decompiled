
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d3c160(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
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
  undefined1 auVar11 [64];
  
  lVar2 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffff80)) {
    auVar7 = vmovdqu32_avx512f(_DAT_143092740);
    do {
      lVar5 = 0;
      pauVar3 = param_1;
      auVar11 = auVar7;
      auVar10 = auVar7;
      auVar9 = auVar7;
      auVar8 = auVar7;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar8 = vpminuw_avx512bw(auVar8,*pauVar3);
          auVar9 = vpminuw_avx512bw(auVar9,pauVar3[1]);
          auVar10 = vpminuw_avx512bw(auVar10,pauVar3[2]);
          auVar11 = vpminuw_avx512bw(auVar11,pauVar3[3]);
          pauVar3 = (undefined1 (*) [64])(*pauVar3 + param_2 * 2);
        } while (lVar5 < param_5);
      }
      lVar2 = lVar2 + 0x80;
      param_1 = param_1 + 4;
      *param_3 = auVar8;
      param_3[1] = auVar9;
      param_3[2] = auVar10;
      param_3[3] = auVar11;
      param_3 = param_3 + 4;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
  }
  if (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    auVar7 = vmovdqu32_avx512f(_DAT_143092740);
    do {
      lVar5 = 0;
      pauVar3 = param_1;
      auVar11 = auVar7;
      auVar10 = auVar7;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar10 = vpminuw_avx512bw(auVar10,*pauVar3);
          auVar11 = vpminuw_avx512bw(auVar11,pauVar3[1]);
          pauVar3 = (undefined1 (*) [64])(*pauVar3 + param_2 * 2);
        } while (lVar5 < param_5);
      }
      lVar2 = lVar2 + 0x40;
      param_1 = param_1 + 2;
      *param_3 = auVar10;
      param_3[1] = auVar11;
      param_3 = param_3 + 2;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  if (lVar2 < (longlong)(param_4 & 0xffffffffffffffe0)) {
    auVar7 = vmovdqu32_avx512f(_DAT_143092740);
    do {
      lVar6 = 0;
      lVar5 = 0;
      auVar11 = auVar7;
      if (0 < param_5) {
        do {
          lVar6 = lVar6 + 1;
          auVar11 = vpminuw_avx512bw(auVar11,*(undefined1 (*) [64])(*param_1 + lVar5 * 2));
          lVar5 = lVar5 + param_2;
        } while (lVar6 < param_5);
      }
      lVar2 = lVar2 + 0x20;
      param_1 = param_1 + 1;
      *param_3 = auVar11;
      param_3 = param_3 + 1;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffffe0));
  }
  uVar4 = 0xffffffff >> (-(int)param_4 & 0x1fU);
  if (lVar2 < (longlong)param_4) {
    lVar5 = 0;
    auVar7 = vmovdqu32_avx512f(_DAT_143092740);
    lVar2 = 0;
    if (0 < param_5) {
      do {
        auVar11 = vmovdqu16_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar2));
        auVar10._2_2_ = (ushort)((byte)(uVar4 >> 1) & 1) * auVar11._2_2_;
        auVar10._0_2_ = (ushort)((byte)uVar4 & 1) * auVar11._0_2_;
        auVar10._4_2_ = (ushort)((byte)(uVar4 >> 2) & 1) * auVar11._4_2_;
        auVar10._6_2_ = (ushort)((byte)(uVar4 >> 3) & 1) * auVar11._6_2_;
        auVar10._8_2_ = (ushort)((byte)(uVar4 >> 4) & 1) * auVar11._8_2_;
        auVar10._10_2_ = (ushort)((byte)(uVar4 >> 5) & 1) * auVar11._10_2_;
        auVar10._12_2_ = (ushort)((byte)(uVar4 >> 6) & 1) * auVar11._12_2_;
        auVar10._14_2_ = (ushort)((byte)(uVar4 >> 7) & 1) * auVar11._14_2_;
        auVar10._16_2_ = (ushort)((byte)(uVar4 >> 8) & 1) * auVar11._16_2_;
        auVar10._18_2_ = (ushort)((byte)(uVar4 >> 9) & 1) * auVar11._18_2_;
        auVar10._20_2_ = (ushort)((byte)(uVar4 >> 10) & 1) * auVar11._20_2_;
        auVar10._22_2_ = (ushort)((byte)(uVar4 >> 0xb) & 1) * auVar11._22_2_;
        auVar10._24_2_ = (ushort)((byte)(uVar4 >> 0xc) & 1) * auVar11._24_2_;
        auVar10._26_2_ = (ushort)((byte)(uVar4 >> 0xd) & 1) * auVar11._26_2_;
        auVar10._28_2_ = (ushort)((byte)(uVar4 >> 0xe) & 1) * auVar11._28_2_;
        auVar10._30_2_ = (ushort)((byte)(uVar4 >> 0xf) & 1) * auVar11._30_2_;
        auVar10._32_2_ = (ushort)((byte)(uVar4 >> 0x10) & 1) * auVar11._32_2_;
        auVar10._34_2_ = (ushort)((byte)(uVar4 >> 0x11) & 1) * auVar11._34_2_;
        auVar10._36_2_ = (ushort)((byte)(uVar4 >> 0x12) & 1) * auVar11._36_2_;
        auVar10._38_2_ = (ushort)((byte)(uVar4 >> 0x13) & 1) * auVar11._38_2_;
        auVar10._40_2_ = (ushort)((byte)(uVar4 >> 0x14) & 1) * auVar11._40_2_;
        auVar10._42_2_ = (ushort)((byte)(uVar4 >> 0x15) & 1) * auVar11._42_2_;
        auVar10._44_2_ = (ushort)((byte)(uVar4 >> 0x16) & 1) * auVar11._44_2_;
        auVar10._46_2_ = (ushort)((byte)(uVar4 >> 0x17) & 1) * auVar11._46_2_;
        bVar1 = (byte)(uVar4 >> 0x18);
        auVar10._48_2_ = (ushort)(bVar1 & 1) * auVar11._48_2_;
        auVar10._50_2_ = (ushort)(bVar1 >> 1 & 1) * auVar11._50_2_;
        auVar10._52_2_ = (ushort)(bVar1 >> 2 & 1) * auVar11._52_2_;
        auVar10._54_2_ = (ushort)(bVar1 >> 3 & 1) * auVar11._54_2_;
        auVar10._56_2_ = (ushort)(bVar1 >> 4 & 1) * auVar11._56_2_;
        auVar10._58_2_ = (ushort)(bVar1 >> 5 & 1) * auVar11._58_2_;
        auVar10._60_2_ = (ushort)(bVar1 >> 6 & 1) * auVar11._60_2_;
        auVar10._62_2_ = (ushort)(bVar1 >> 7) * auVar11._62_2_;
        lVar5 = lVar5 + 1;
        auVar7 = vpminuw_avx512bw(auVar7,auVar10);
        lVar2 = lVar2 + param_2 * 2;
      } while (lVar5 < param_5);
    }
    auVar7 = vmovdqu16_avx512bw(auVar7);
    *param_3 = auVar7;
  }
  return;
}

