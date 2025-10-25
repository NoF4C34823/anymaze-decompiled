
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14059ef80(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulonglong param_3,
             ulonglong param_4,int param_5)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 (*pauVar13) [64];
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar18 [32];
  undefined1 in_ZmmResult [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined8 uVar32;
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar17 [32];
  
  auVar17 = (undefined1  [32])0x0;
  iVar8 = (int)(param_4 & 7);
  uVar16 = 0xffffffffffffffffU >> ((ulonglong)(uint)-(iVar8 * 4 + 0x18) & 0x3f) & 0xffffffff;
  auVar26._32_32_ = in_ZmmResult._32_32_;
  auVar26._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_1);
  bVar2 = (byte)uVar16;
  auVar27[1] = ((byte)(uVar16 >> 1) & 1) * auVar26[1];
  auVar27[0] = (bVar2 & 1) * auVar26[0];
  auVar27[2] = ((byte)(uVar16 >> 2) & 1) * auVar26[2];
  auVar27[3] = ((byte)(uVar16 >> 3) & 1) * auVar26[3];
  auVar27[4] = ((byte)(uVar16 >> 4) & 1) * auVar26[4];
  auVar27[5] = ((byte)(uVar16 >> 5) & 1) * auVar26[5];
  auVar27[6] = ((byte)(uVar16 >> 6) & 1) * auVar26[6];
  auVar27[7] = ((byte)(uVar16 >> 7) & 1) * auVar26[7];
  bVar3 = (byte)(uVar16 >> 8);
  auVar27[8] = (bVar3 & 1) * auVar26[8];
  auVar27[9] = ((byte)(uVar16 >> 9) & 1) * auVar26[9];
  auVar27[10] = ((byte)(uVar16 >> 10) & 1) * auVar26[10];
  auVar27[0xb] = ((byte)(uVar16 >> 0xb) & 1) * auVar26[0xb];
  auVar27[0xc] = ((byte)(uVar16 >> 0xc) & 1) * auVar26[0xc];
  auVar27[0xd] = ((byte)(uVar16 >> 0xd) & 1) * auVar26[0xd];
  auVar27[0xe] = ((byte)(uVar16 >> 0xe) & 1) * auVar26[0xe];
  auVar27[0xf] = ((byte)(uVar16 >> 0xf) & 1) * auVar26[0xf];
  bVar4 = (byte)(uVar16 >> 0x10);
  auVar27[0x10] = (bVar4 & 1) * auVar26[0x10];
  auVar27[0x11] = ((byte)(uVar16 >> 0x11) & 1) * auVar26[0x11];
  auVar27[0x12] = ((byte)(uVar16 >> 0x12) & 1) * auVar26[0x12];
  auVar27[0x13] = ((byte)(uVar16 >> 0x13) & 1) * auVar26[0x13];
  auVar27[0x14] = ((byte)(uVar16 >> 0x14) & 1) * auVar26[0x14];
  auVar27[0x15] = ((byte)(uVar16 >> 0x15) & 1) * auVar26[0x15];
  auVar27[0x16] = ((byte)(uVar16 >> 0x16) & 1) * auVar26[0x16];
  auVar27[0x17] = ((byte)(uVar16 >> 0x17) & 1) * auVar26[0x17];
  bVar5 = (byte)(uVar16 >> 0x18);
  auVar27[0x18] = (bVar5 & 1) * auVar26[0x18];
  auVar27[0x19] = ((byte)(uVar16 >> 0x19) & 1) * auVar26[0x19];
  auVar27[0x1a] = ((byte)(uVar16 >> 0x1a) & 1) * auVar26[0x1a];
  auVar27[0x1b] = ((byte)(uVar16 >> 0x1b) & 1) * auVar26[0x1b];
  auVar27[0x1c] = ((byte)(uVar16 >> 0x1c) & 1) * auVar26[0x1c];
  auVar27._30_34_ = auVar26._30_34_;
  auVar27[0x1d] = ((byte)(uVar16 >> 0x1d) & 1) * auVar26[0x1d];
  auVar28._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 4));
  auVar28._32_32_ = auVar26._32_32_;
  auVar30[1] = ((byte)(uVar16 >> 1) & 1) * auVar28[1];
  auVar30[0] = (bVar2 & 1) * auVar28[0];
  auVar30[2] = ((byte)(uVar16 >> 2) & 1) * auVar28[2];
  auVar30[3] = ((byte)(uVar16 >> 3) & 1) * auVar28[3];
  auVar30[4] = ((byte)(uVar16 >> 4) & 1) * auVar28[4];
  auVar30[5] = ((byte)(uVar16 >> 5) & 1) * auVar28[5];
  auVar30[6] = ((byte)(uVar16 >> 6) & 1) * auVar28[6];
  auVar30[7] = ((byte)(uVar16 >> 7) & 1) * auVar28[7];
  auVar30[8] = (bVar3 & 1) * auVar28[8];
  auVar30[9] = ((byte)(uVar16 >> 9) & 1) * auVar28[9];
  auVar30[10] = ((byte)(uVar16 >> 10) & 1) * auVar28[10];
  auVar30[0xb] = ((byte)(uVar16 >> 0xb) & 1) * auVar28[0xb];
  auVar30[0xc] = ((byte)(uVar16 >> 0xc) & 1) * auVar28[0xc];
  auVar30[0xd] = ((byte)(uVar16 >> 0xd) & 1) * auVar28[0xd];
  auVar30[0xe] = ((byte)(uVar16 >> 0xe) & 1) * auVar28[0xe];
  auVar30[0xf] = ((byte)(uVar16 >> 0xf) & 1) * auVar28[0xf];
  auVar30[0x10] = (bVar4 & 1) * auVar28[0x10];
  auVar30[0x11] = ((byte)(uVar16 >> 0x11) & 1) * auVar28[0x11];
  auVar30[0x12] = ((byte)(uVar16 >> 0x12) & 1) * auVar28[0x12];
  auVar30[0x13] = ((byte)(uVar16 >> 0x13) & 1) * auVar28[0x13];
  auVar30[0x14] = ((byte)(uVar16 >> 0x14) & 1) * auVar28[0x14];
  auVar30[0x15] = ((byte)(uVar16 >> 0x15) & 1) * auVar28[0x15];
  auVar30[0x16] = ((byte)(uVar16 >> 0x16) & 1) * auVar28[0x16];
  auVar30[0x17] = ((byte)(uVar16 >> 0x17) & 1) * auVar28[0x17];
  auVar30[0x18] = (bVar5 & 1) * auVar28[0x18];
  auVar30[0x19] = ((byte)(uVar16 >> 0x19) & 1) * auVar28[0x19];
  auVar30[0x1a] = ((byte)(uVar16 >> 0x1a) & 1) * auVar28[0x1a];
  auVar30[0x1b] = ((byte)(uVar16 >> 0x1b) & 1) * auVar28[0x1b];
  auVar30[0x1c] = ((byte)(uVar16 >> 0x1c) & 1) * auVar28[0x1c];
  auVar30._30_34_ = auVar28._30_34_;
  auVar30[0x1d] = ((byte)(uVar16 >> 0x1d) & 1) * auVar28[0x1d];
  auVar29._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 8));
  auVar29._32_32_ = auVar26._32_32_;
  auVar19[1] = ((byte)(uVar16 >> 1) & 1) * auVar29[1];
  auVar19[0] = (bVar2 & 1) * auVar29[0];
  auVar19[2] = ((byte)(uVar16 >> 2) & 1) * auVar29[2];
  auVar19[3] = ((byte)(uVar16 >> 3) & 1) * auVar29[3];
  auVar19[4] = ((byte)(uVar16 >> 4) & 1) * auVar29[4];
  auVar19[5] = ((byte)(uVar16 >> 5) & 1) * auVar29[5];
  auVar19[6] = ((byte)(uVar16 >> 6) & 1) * auVar29[6];
  auVar19[7] = ((byte)(uVar16 >> 7) & 1) * auVar29[7];
  auVar19[8] = (bVar3 & 1) * auVar29[8];
  auVar19[9] = ((byte)(uVar16 >> 9) & 1) * auVar29[9];
  auVar19[10] = ((byte)(uVar16 >> 10) & 1) * auVar29[10];
  auVar19[0xb] = ((byte)(uVar16 >> 0xb) & 1) * auVar29[0xb];
  auVar19[0xc] = ((byte)(uVar16 >> 0xc) & 1) * auVar29[0xc];
  auVar19[0xd] = ((byte)(uVar16 >> 0xd) & 1) * auVar29[0xd];
  auVar19[0xe] = ((byte)(uVar16 >> 0xe) & 1) * auVar29[0xe];
  auVar19[0xf] = ((byte)(uVar16 >> 0xf) & 1) * auVar29[0xf];
  auVar19[0x10] = (bVar4 & 1) * auVar29[0x10];
  auVar19[0x11] = ((byte)(uVar16 >> 0x11) & 1) * auVar29[0x11];
  auVar19[0x12] = ((byte)(uVar16 >> 0x12) & 1) * auVar29[0x12];
  auVar19[0x13] = ((byte)(uVar16 >> 0x13) & 1) * auVar29[0x13];
  auVar19[0x14] = ((byte)(uVar16 >> 0x14) & 1) * auVar29[0x14];
  auVar19[0x15] = ((byte)(uVar16 >> 0x15) & 1) * auVar29[0x15];
  auVar19[0x16] = ((byte)(uVar16 >> 0x16) & 1) * auVar29[0x16];
  auVar19[0x17] = ((byte)(uVar16 >> 0x17) & 1) * auVar29[0x17];
  auVar19[0x18] = (bVar5 & 1) * auVar29[0x18];
  auVar19[0x19] = ((byte)(uVar16 >> 0x19) & 1) * auVar29[0x19];
  auVar19[0x1a] = ((byte)(uVar16 >> 0x1a) & 1) * auVar29[0x1a];
  auVar19[0x1b] = ((byte)(uVar16 >> 0x1b) & 1) * auVar29[0x1b];
  auVar19[0x1c] = ((byte)(uVar16 >> 0x1c) & 1) * auVar29[0x1c];
  auVar19._30_34_ = auVar29._30_34_;
  auVar19[0x1d] = ((byte)(uVar16 >> 0x1d) & 1) * auVar29[0x1d];
  uVar12 = iVar8 * 4 - 8;
  uVar12 = ~((int)uVar12 >> 0x1f) & uVar12;
  if ((int)uVar12 < 1) {
    auVar18 = ZEXT832(0) << 0x40;
    auVar7 = auVar18;
  }
  else {
    uVar16 = 0xffffffffffffffffU >> ((ulonglong)-uVar12 & 0x3f) & 0xffffffff;
    auVar20._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + 0x20));
    auVar20._32_32_ = auVar26._32_32_;
    bVar2 = (byte)uVar16;
    auVar21[1] = ((byte)(uVar16 >> 1) & 1) * auVar20[1];
    auVar21[0] = (bVar2 & 1) * auVar20[0];
    auVar21[2] = ((byte)(uVar16 >> 2) & 1) * auVar20[2];
    auVar21[3] = ((byte)(uVar16 >> 3) & 1) * auVar20[3];
    auVar21[4] = ((byte)(uVar16 >> 4) & 1) * auVar20[4];
    auVar21[5] = ((byte)(uVar16 >> 5) & 1) * auVar20[5];
    auVar21[6] = ((byte)(uVar16 >> 6) & 1) * auVar20[6];
    auVar21[7] = ((byte)(uVar16 >> 7) & 1) * auVar20[7];
    bVar3 = (byte)(uVar16 >> 8);
    auVar21[8] = (bVar3 & 1) * auVar20[8];
    auVar21[9] = ((byte)(uVar16 >> 9) & 1) * auVar20[9];
    auVar21[10] = ((byte)(uVar16 >> 10) & 1) * auVar20[10];
    auVar21[0xb] = ((byte)(uVar16 >> 0xb) & 1) * auVar20[0xb];
    auVar21[0xc] = ((byte)(uVar16 >> 0xc) & 1) * auVar20[0xc];
    auVar21[0xd] = ((byte)(uVar16 >> 0xd) & 1) * auVar20[0xd];
    auVar21[0xe] = ((byte)(uVar16 >> 0xe) & 1) * auVar20[0xe];
    auVar21[0xf] = ((byte)(uVar16 >> 0xf) & 1) * auVar20[0xf];
    bVar4 = (byte)(uVar16 >> 0x10);
    auVar21[0x10] = (bVar4 & 1) * auVar20[0x10];
    auVar21[0x11] = ((byte)(uVar16 >> 0x11) & 1) * auVar20[0x11];
    auVar21[0x12] = ((byte)(uVar16 >> 0x12) & 1) * auVar20[0x12];
    auVar21[0x13] = ((byte)(uVar16 >> 0x13) & 1) * auVar20[0x13];
    auVar21[0x14] = ((byte)(uVar16 >> 0x14) & 1) * auVar20[0x14];
    auVar21[0x15] = ((byte)(uVar16 >> 0x15) & 1) * auVar20[0x15];
    auVar21[0x16] = ((byte)(uVar16 >> 0x16) & 1) * auVar20[0x16];
    auVar21[0x17] = ((byte)(uVar16 >> 0x17) & 1) * auVar20[0x17];
    bVar5 = (byte)(uVar16 >> 0x18);
    auVar21[0x18] = (bVar5 & 1) * auVar20[0x18];
    auVar21[0x19] = ((byte)(uVar16 >> 0x19) & 1) * auVar20[0x19];
    auVar21[0x1a] = ((byte)(uVar16 >> 0x1a) & 1) * auVar20[0x1a];
    auVar21[0x1b] = ((byte)(uVar16 >> 0x1b) & 1) * auVar20[0x1b];
    auVar21[0x1c] = ((byte)(uVar16 >> 0x1c) & 1) * auVar20[0x1c];
    auVar21._30_34_ = auVar20._30_34_;
    auVar21[0x1d] = ((byte)(uVar16 >> 0x1d) & 1) * auVar20[0x1d];
    auVar18 = auVar21._0_32_;
    auVar22._0_32_ =
         vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 4 + 0x20));
    auVar22._32_32_ = auVar26._32_32_;
    auVar23[1] = ((byte)(uVar16 >> 1) & 1) * auVar22[1];
    auVar23[0] = (bVar2 & 1) * auVar22[0];
    auVar23[2] = ((byte)(uVar16 >> 2) & 1) * auVar22[2];
    auVar23[3] = ((byte)(uVar16 >> 3) & 1) * auVar22[3];
    auVar23[4] = ((byte)(uVar16 >> 4) & 1) * auVar22[4];
    auVar23[5] = ((byte)(uVar16 >> 5) & 1) * auVar22[5];
    auVar23[6] = ((byte)(uVar16 >> 6) & 1) * auVar22[6];
    auVar23[7] = ((byte)(uVar16 >> 7) & 1) * auVar22[7];
    auVar23[8] = (bVar3 & 1) * auVar22[8];
    auVar23[9] = ((byte)(uVar16 >> 9) & 1) * auVar22[9];
    auVar23[10] = ((byte)(uVar16 >> 10) & 1) * auVar22[10];
    auVar23[0xb] = ((byte)(uVar16 >> 0xb) & 1) * auVar22[0xb];
    auVar23[0xc] = ((byte)(uVar16 >> 0xc) & 1) * auVar22[0xc];
    auVar23[0xd] = ((byte)(uVar16 >> 0xd) & 1) * auVar22[0xd];
    auVar23[0xe] = ((byte)(uVar16 >> 0xe) & 1) * auVar22[0xe];
    auVar23[0xf] = ((byte)(uVar16 >> 0xf) & 1) * auVar22[0xf];
    auVar23[0x10] = (bVar4 & 1) * auVar22[0x10];
    auVar23[0x11] = ((byte)(uVar16 >> 0x11) & 1) * auVar22[0x11];
    auVar23[0x12] = ((byte)(uVar16 >> 0x12) & 1) * auVar22[0x12];
    auVar23[0x13] = ((byte)(uVar16 >> 0x13) & 1) * auVar22[0x13];
    auVar23[0x14] = ((byte)(uVar16 >> 0x14) & 1) * auVar22[0x14];
    auVar23[0x15] = ((byte)(uVar16 >> 0x15) & 1) * auVar22[0x15];
    auVar23[0x16] = ((byte)(uVar16 >> 0x16) & 1) * auVar22[0x16];
    auVar23[0x17] = ((byte)(uVar16 >> 0x17) & 1) * auVar22[0x17];
    auVar23[0x18] = (bVar5 & 1) * auVar22[0x18];
    auVar23[0x19] = ((byte)(uVar16 >> 0x19) & 1) * auVar22[0x19];
    auVar23[0x1a] = ((byte)(uVar16 >> 0x1a) & 1) * auVar22[0x1a];
    auVar23[0x1b] = ((byte)(uVar16 >> 0x1b) & 1) * auVar22[0x1b];
    auVar23[0x1c] = ((byte)(uVar16 >> 0x1c) & 1) * auVar22[0x1c];
    auVar23._30_34_ = auVar22._30_34_;
    auVar23[0x1d] = ((byte)(uVar16 >> 0x1d) & 1) * auVar22[0x1d];
    auVar24._0_32_ =
         vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 8 + 0x20));
    auVar24._32_32_ = auVar26._32_32_;
    auVar25[1] = ((byte)(uVar16 >> 1) & 1) * auVar24[1];
    auVar25[0] = (bVar2 & 1) * auVar24[0];
    auVar25[2] = ((byte)(uVar16 >> 2) & 1) * auVar24[2];
    auVar25[3] = ((byte)(uVar16 >> 3) & 1) * auVar24[3];
    auVar25[4] = ((byte)(uVar16 >> 4) & 1) * auVar24[4];
    auVar25[5] = ((byte)(uVar16 >> 5) & 1) * auVar24[5];
    auVar25[6] = ((byte)(uVar16 >> 6) & 1) * auVar24[6];
    auVar25[7] = ((byte)(uVar16 >> 7) & 1) * auVar24[7];
    auVar25[8] = (bVar3 & 1) * auVar24[8];
    auVar25[9] = ((byte)(uVar16 >> 9) & 1) * auVar24[9];
    auVar25[10] = ((byte)(uVar16 >> 10) & 1) * auVar24[10];
    auVar25[0xb] = ((byte)(uVar16 >> 0xb) & 1) * auVar24[0xb];
    auVar25[0xc] = ((byte)(uVar16 >> 0xc) & 1) * auVar24[0xc];
    auVar25[0xd] = ((byte)(uVar16 >> 0xd) & 1) * auVar24[0xd];
    auVar25[0xe] = ((byte)(uVar16 >> 0xe) & 1) * auVar24[0xe];
    auVar25[0xf] = ((byte)(uVar16 >> 0xf) & 1) * auVar24[0xf];
    auVar25[0x10] = (bVar4 & 1) * auVar24[0x10];
    auVar25[0x11] = ((byte)(uVar16 >> 0x11) & 1) * auVar24[0x11];
    auVar25[0x12] = ((byte)(uVar16 >> 0x12) & 1) * auVar24[0x12];
    auVar25[0x13] = ((byte)(uVar16 >> 0x13) & 1) * auVar24[0x13];
    auVar25[0x14] = ((byte)(uVar16 >> 0x14) & 1) * auVar24[0x14];
    auVar25[0x15] = ((byte)(uVar16 >> 0x15) & 1) * auVar24[0x15];
    auVar25[0x16] = ((byte)(uVar16 >> 0x16) & 1) * auVar24[0x16];
    auVar25[0x17] = ((byte)(uVar16 >> 0x17) & 1) * auVar24[0x17];
    auVar25[0x18] = (bVar5 & 1) * auVar24[0x18];
    auVar25[0x19] = ((byte)(uVar16 >> 0x19) & 1) * auVar24[0x19];
    auVar25[0x1a] = ((byte)(uVar16 >> 0x1a) & 1) * auVar24[0x1a];
    auVar25[0x1b] = ((byte)(uVar16 >> 0x1b) & 1) * auVar24[0x1b];
    auVar25[0x1c] = ((byte)(uVar16 >> 0x1c) & 1) * auVar24[0x1c];
    auVar25._30_34_ = auVar24._30_34_;
    auVar25[0x1d] = ((byte)(uVar16 >> 0x1d) & 1) * auVar24[0x1d];
    auVar17 = auVar25._0_32_;
    auVar7 = auVar23._0_32_;
  }
  auVar6 = vminps_avx(auVar27._0_32_,auVar30._0_32_);
  uVar32 = auVar6._0_8_;
  auVar18 = vminps_avx(auVar18,auVar7);
  auVar7 = vminps_avx(auVar6,auVar19._0_32_);
  auVar17 = vminps_avx(auVar18,auVar17);
  auVar18 = vshuff32x4_avx512vl(auVar7,auVar17,1);
  lVar11 = 8 - (param_4 & 7);
  vpalignr_avx2(auVar18,auVar7,0xc);
  vpalignr_avx512vl(auVar17,auVar18);
  pcVar1 = param_2[-1] + 0x21;
  *pcVar1 = *pcVar1;
  if (*pcVar1 == '\0') {
    DAT_000000ff = DAT_000000ff + -1;
    lVar9 = 0;
    lVar10 = (longlong)param_5;
    if (lVar11 == 3) {
      if (0 < (longlong)(param_3 & 0xffffffffffffff80)) {
        auVar26 = vmovdqu32_avx512f(_DAT_143092480);
        uVar32 = auVar26._0_8_;
        do {
          auVar27 = vpminub_avx512bw(auVar26,*param_1);
          lVar9 = lVar9 + 0x80;
          auVar28 = vpminub_avx512bw(auVar26,param_1[1]);
          auVar27 = vpminub_avx512bw(auVar27,*(undefined1 (*) [64])(*param_1 + lVar10));
          auVar28 = vpminub_avx512bw(auVar28,*(undefined1 (*) [64])(param_1[1] + lVar10));
          auVar27 = vpminub_avx512bw(auVar27,*(undefined1 (*) [64])(*param_1 + lVar10 * 2));
          auVar28 = vpminub_avx512bw(auVar28,*(undefined1 (*) [64])(param_1[1] + lVar10 * 2));
          *param_2 = auVar27;
          param_2[1] = auVar28;
          param_1 = param_1 + 2;
          param_2 = param_2 + 2;
        } while (lVar9 < (longlong)(param_3 & 0xffffffffffffff80));
      }
    }
    else if (lVar11 == 5) {
      if (0 < (longlong)(param_3 & 0xffffffffffffff80)) {
        auVar26 = vmovdqu32_avx512f(_DAT_143092480);
        uVar32 = auVar26._0_8_;
        do {
          auVar27 = vpminub_avx512bw(auVar26,*param_1);
          lVar9 = lVar9 + 0x80;
          auVar28 = vpminub_avx512bw(auVar26,param_1[1]);
          auVar27 = vpminub_avx512bw(auVar27,*(undefined1 (*) [64])(*param_1 + lVar10));
          auVar28 = vpminub_avx512bw(auVar28,*(undefined1 (*) [64])(param_1[1] + lVar10));
          auVar27 = vpminub_avx512bw(auVar27,*(undefined1 (*) [64])(*param_1 + lVar10 * 2));
          auVar28 = vpminub_avx512bw(auVar28,*(undefined1 (*) [64])(param_1[1] + lVar10 * 2));
          auVar27 = vpminub_avx512bw(auVar27,*(undefined1 (*) [64])(*param_1 + lVar10 * 3));
          auVar28 = vpminub_avx512bw(auVar28,*(undefined1 (*) [64])(param_1[1] + lVar10 * 3));
          auVar27 = vpminub_avx512bw(auVar27,*(undefined1 (*) [64])(*param_1 + lVar10 * 4));
          auVar28 = vpminub_avx512bw(auVar28,*(undefined1 (*) [64])(param_1[1] + lVar10 * 4));
          *param_2 = auVar27;
          param_2[1] = auVar28;
          param_1 = param_1 + 2;
          param_2 = param_2 + 2;
        } while (lVar9 < (longlong)(param_3 & 0xffffffffffffff80));
      }
    }
    else {
      if (0 < (longlong)(param_3 & 0xffffffffffffff00)) {
        auVar26 = vmovdqu32_avx512f(_DAT_143092480);
        uVar32 = auVar26._0_8_;
        do {
          lVar14 = 0;
          pauVar13 = param_1;
          auVar27 = auVar26;
          auVar28 = auVar26;
          auVar30 = auVar26;
          auVar29 = auVar26;
          if (0 < lVar11) {
            do {
              lVar14 = lVar14 + 1;
              auVar29 = vpminub_avx512bw(auVar29,*pauVar13);
              auVar30 = vpminub_avx512bw(auVar30,pauVar13[1]);
              auVar28 = vpminub_avx512bw(auVar28,pauVar13[2]);
              auVar27 = vpminub_avx512bw(auVar27,pauVar13[3]);
              pauVar13 = (undefined1 (*) [64])(*pauVar13 + lVar10);
            } while (lVar14 < lVar11);
          }
          lVar9 = lVar9 + 0x100;
          param_1 = param_1 + 4;
          *param_2 = auVar29;
          param_2[1] = auVar30;
          param_2[2] = auVar28;
          param_2[3] = auVar27;
          param_2 = param_2 + 4;
        } while (lVar9 < (longlong)(param_3 & 0xffffffffffffff00));
      }
      if (lVar9 < (longlong)(param_3 & 0xffffffffffffff80)) {
        auVar26 = vmovdqu32_avx512f(_DAT_143092480);
        uVar32 = auVar26._0_8_;
        do {
          lVar14 = 0;
          pauVar13 = param_1;
          auVar27 = auVar26;
          auVar28 = auVar26;
          if (0 < lVar11) {
            do {
              lVar14 = lVar14 + 1;
              auVar28 = vpminub_avx512bw(auVar28,*pauVar13);
              auVar27 = vpminub_avx512bw(auVar27,pauVar13[1]);
              pauVar13 = (undefined1 (*) [64])(*pauVar13 + lVar10);
            } while (lVar14 < lVar11);
          }
          lVar9 = lVar9 + 0x80;
          param_1 = param_1 + 2;
          *param_2 = auVar28;
          param_2[1] = auVar27;
          param_2 = param_2 + 2;
        } while (lVar9 < (longlong)(param_3 & 0xffffffffffffff80));
      }
    }
    if (lVar9 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      auVar26 = vmovdqu32_avx512f(_DAT_143092480);
      uVar32 = auVar26._0_8_;
      do {
        lVar15 = 0;
        lVar14 = 0;
        auVar27 = auVar26;
        if (0 < lVar11) {
          do {
            lVar15 = lVar15 + 1;
            auVar27 = vpminub_avx512bw(auVar27,*(undefined1 (*) [64])(*param_1 + lVar14));
            lVar14 = lVar14 + lVar10;
          } while (lVar15 < lVar11);
        }
        lVar9 = lVar9 + 0x40;
        param_1 = param_1 + 1;
        *param_2 = auVar27;
        param_2 = param_2 + 1;
      } while (lVar9 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
    if (lVar9 < (longlong)param_3) {
      auVar26 = vmovdqu32_avx512f(_DAT_143092480);
      uVar16 = 0xffffffffffffffff >> ((ulonglong)(uint)-(int)param_3 & 0x3f);
      lVar14 = 0;
      lVar9 = 0;
      if (0 < lVar11) {
        do {
          auVar27 = vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar9));
          auVar31[1] = ((byte)(uVar16 >> 1) & 1) * auVar27[1];
          auVar31[0] = ((byte)uVar16 & 1) * auVar27[0];
          auVar31[2] = ((byte)(uVar16 >> 2) & 1) * auVar27[2];
          auVar31[3] = ((byte)(uVar16 >> 3) & 1) * auVar27[3];
          auVar31[4] = ((byte)(uVar16 >> 4) & 1) * auVar27[4];
          auVar31[5] = ((byte)(uVar16 >> 5) & 1) * auVar27[5];
          auVar31[6] = ((byte)(uVar16 >> 6) & 1) * auVar27[6];
          auVar31[7] = ((byte)(uVar16 >> 7) & 1) * auVar27[7];
          auVar31[8] = ((byte)(uVar16 >> 8) & 1) * auVar27[8];
          auVar31[9] = ((byte)(uVar16 >> 9) & 1) * auVar27[9];
          auVar31[10] = ((byte)(uVar16 >> 10) & 1) * auVar27[10];
          auVar31[0xb] = ((byte)(uVar16 >> 0xb) & 1) * auVar27[0xb];
          auVar31[0xc] = ((byte)(uVar16 >> 0xc) & 1) * auVar27[0xc];
          auVar31[0xd] = ((byte)(uVar16 >> 0xd) & 1) * auVar27[0xd];
          auVar31[0xe] = ((byte)(uVar16 >> 0xe) & 1) * auVar27[0xe];
          auVar31[0xf] = ((byte)(uVar16 >> 0xf) & 1) * auVar27[0xf];
          auVar31[0x10] = ((byte)(uVar16 >> 0x10) & 1) * auVar27[0x10];
          auVar31[0x11] = ((byte)(uVar16 >> 0x11) & 1) * auVar27[0x11];
          auVar31[0x12] = ((byte)(uVar16 >> 0x12) & 1) * auVar27[0x12];
          auVar31[0x13] = ((byte)(uVar16 >> 0x13) & 1) * auVar27[0x13];
          auVar31[0x14] = ((byte)(uVar16 >> 0x14) & 1) * auVar27[0x14];
          auVar31[0x15] = ((byte)(uVar16 >> 0x15) & 1) * auVar27[0x15];
          auVar31[0x16] = ((byte)(uVar16 >> 0x16) & 1) * auVar27[0x16];
          auVar31[0x17] = ((byte)(uVar16 >> 0x17) & 1) * auVar27[0x17];
          auVar31[0x18] = ((byte)(uVar16 >> 0x18) & 1) * auVar27[0x18];
          auVar31[0x19] = ((byte)(uVar16 >> 0x19) & 1) * auVar27[0x19];
          auVar31[0x1a] = ((byte)(uVar16 >> 0x1a) & 1) * auVar27[0x1a];
          auVar31[0x1b] = ((byte)(uVar16 >> 0x1b) & 1) * auVar27[0x1b];
          auVar31[0x1c] = ((byte)(uVar16 >> 0x1c) & 1) * auVar27[0x1c];
          auVar31[0x1d] = ((byte)(uVar16 >> 0x1d) & 1) * auVar27[0x1d];
          auVar31[0x1e] = ((byte)(uVar16 >> 0x1e) & 1) * auVar27[0x1e];
          auVar31[0x1f] = ((byte)(uVar16 >> 0x1f) & 1) * auVar27[0x1f];
          auVar31[0x20] = ((byte)(uVar16 >> 0x20) & 1) * auVar27[0x20];
          auVar31[0x21] = ((byte)(uVar16 >> 0x21) & 1) * auVar27[0x21];
          auVar31[0x22] = ((byte)(uVar16 >> 0x22) & 1) * auVar27[0x22];
          auVar31[0x23] = ((byte)(uVar16 >> 0x23) & 1) * auVar27[0x23];
          auVar31[0x24] = ((byte)(uVar16 >> 0x24) & 1) * auVar27[0x24];
          auVar31[0x25] = ((byte)(uVar16 >> 0x25) & 1) * auVar27[0x25];
          auVar31[0x26] = ((byte)(uVar16 >> 0x26) & 1) * auVar27[0x26];
          auVar31[0x27] = ((byte)(uVar16 >> 0x27) & 1) * auVar27[0x27];
          auVar31[0x28] = ((byte)(uVar16 >> 0x28) & 1) * auVar27[0x28];
          auVar31[0x29] = ((byte)(uVar16 >> 0x29) & 1) * auVar27[0x29];
          auVar31[0x2a] = ((byte)(uVar16 >> 0x2a) & 1) * auVar27[0x2a];
          auVar31[0x2b] = ((byte)(uVar16 >> 0x2b) & 1) * auVar27[0x2b];
          auVar31[0x2c] = ((byte)(uVar16 >> 0x2c) & 1) * auVar27[0x2c];
          auVar31[0x2d] = ((byte)(uVar16 >> 0x2d) & 1) * auVar27[0x2d];
          auVar31[0x2e] = ((byte)(uVar16 >> 0x2e) & 1) * auVar27[0x2e];
          auVar31[0x2f] = ((byte)(uVar16 >> 0x2f) & 1) * auVar27[0x2f];
          auVar31[0x30] = ((byte)(uVar16 >> 0x30) & 1) * auVar27[0x30];
          auVar31[0x31] = ((byte)(uVar16 >> 0x31) & 1) * auVar27[0x31];
          auVar31[0x32] = ((byte)(uVar16 >> 0x32) & 1) * auVar27[0x32];
          auVar31[0x33] = ((byte)(uVar16 >> 0x33) & 1) * auVar27[0x33];
          auVar31[0x34] = ((byte)(uVar16 >> 0x34) & 1) * auVar27[0x34];
          auVar31[0x35] = ((byte)(uVar16 >> 0x35) & 1) * auVar27[0x35];
          auVar31[0x36] = ((byte)(uVar16 >> 0x36) & 1) * auVar27[0x36];
          auVar31[0x37] = ((byte)(uVar16 >> 0x37) & 1) * auVar27[0x37];
          bVar2 = (byte)(uVar16 >> 0x38);
          auVar31[0x38] = (bVar2 & 1) * auVar27[0x38];
          auVar31[0x39] = (bVar2 >> 1 & 1) * auVar27[0x39];
          auVar31[0x3a] = (bVar2 >> 2 & 1) * auVar27[0x3a];
          auVar31[0x3b] = (bVar2 >> 3 & 1) * auVar27[0x3b];
          auVar31[0x3c] = (bVar2 >> 4 & 1) * auVar27[0x3c];
          auVar31[0x3d] = (bVar2 >> 5 & 1) * auVar27[0x3d];
          auVar31[0x3e] = (bVar2 >> 6 & 1) * auVar27[0x3e];
          auVar31[0x3f] = -((char)bVar2 >> 7) * auVar27[0x3f];
          lVar14 = lVar14 + 1;
          lVar9 = lVar9 + lVar10;
          auVar26 = vpminub_avx512bw(auVar26,auVar31);
        } while (lVar14 < lVar11);
      }
      uVar32 = auVar26._0_8_;
      auVar26 = vmovdqu8_avx512bw(auVar26);
      *param_2 = auVar26;
    }
    return uVar32;
  }
  return uVar32;
}

