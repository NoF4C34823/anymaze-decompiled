
undefined8
FUN_14059ce40(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
             ulonglong param_4,ulonglong param_5,longlong param_6)

{
  char *pcVar1;
  undefined1 (*pauVar2) [64];
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [32];
  int iVar9;
  undefined1 (*pauVar10) [64];
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [64];
  uint uVar15;
  undefined1 (*pauVar16) [64];
  undefined1 (*pauVar17) [64];
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 in_ZmmResult [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined8 uVar35;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar20 [32];
  undefined1 auVar36 [64];
  
  auVar20 = (undefined1  [32])0x0;
  iVar9 = (int)(param_4 & 7);
  uVar19 = 0xffffffffffffffffU >> ((ulonglong)(uint)-(iVar9 * 4 + 0x18) & 0x3f) & 0xffffffff;
  auVar31._32_32_ = in_ZmmResult._32_32_;
  auVar31._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_1);
  bVar4 = (byte)uVar19;
  auVar32[1] = ((byte)(uVar19 >> 1) & 1) * auVar31[1];
  auVar32[0] = (bVar4 & 1) * auVar31[0];
  auVar32[2] = ((byte)(uVar19 >> 2) & 1) * auVar31[2];
  auVar32[3] = ((byte)(uVar19 >> 3) & 1) * auVar31[3];
  auVar32[4] = ((byte)(uVar19 >> 4) & 1) * auVar31[4];
  auVar32[5] = ((byte)(uVar19 >> 5) & 1) * auVar31[5];
  auVar32[6] = ((byte)(uVar19 >> 6) & 1) * auVar31[6];
  auVar32[7] = ((byte)(uVar19 >> 7) & 1) * auVar31[7];
  bVar5 = (byte)(uVar19 >> 8);
  auVar32[8] = (bVar5 & 1) * auVar31[8];
  auVar32[9] = ((byte)(uVar19 >> 9) & 1) * auVar31[9];
  auVar32[10] = ((byte)(uVar19 >> 10) & 1) * auVar31[10];
  auVar32[0xb] = ((byte)(uVar19 >> 0xb) & 1) * auVar31[0xb];
  auVar32[0xc] = ((byte)(uVar19 >> 0xc) & 1) * auVar31[0xc];
  auVar32[0xd] = ((byte)(uVar19 >> 0xd) & 1) * auVar31[0xd];
  auVar32[0xe] = ((byte)(uVar19 >> 0xe) & 1) * auVar31[0xe];
  auVar32[0xf] = ((byte)(uVar19 >> 0xf) & 1) * auVar31[0xf];
  bVar6 = (byte)(uVar19 >> 0x10);
  auVar32[0x10] = (bVar6 & 1) * auVar31[0x10];
  auVar32[0x11] = ((byte)(uVar19 >> 0x11) & 1) * auVar31[0x11];
  auVar32[0x12] = ((byte)(uVar19 >> 0x12) & 1) * auVar31[0x12];
  auVar32[0x13] = ((byte)(uVar19 >> 0x13) & 1) * auVar31[0x13];
  auVar32[0x14] = ((byte)(uVar19 >> 0x14) & 1) * auVar31[0x14];
  auVar32[0x15] = ((byte)(uVar19 >> 0x15) & 1) * auVar31[0x15];
  auVar32[0x16] = ((byte)(uVar19 >> 0x16) & 1) * auVar31[0x16];
  auVar32[0x17] = ((byte)(uVar19 >> 0x17) & 1) * auVar31[0x17];
  bVar7 = (byte)(uVar19 >> 0x18);
  auVar32[0x18] = (bVar7 & 1) * auVar31[0x18];
  auVar32[0x19] = ((byte)(uVar19 >> 0x19) & 1) * auVar31[0x19];
  auVar32[0x1a] = ((byte)(uVar19 >> 0x1a) & 1) * auVar31[0x1a];
  auVar32[0x1b] = ((byte)(uVar19 >> 0x1b) & 1) * auVar31[0x1b];
  auVar32[0x1c] = ((byte)(uVar19 >> 0x1c) & 1) * auVar31[0x1c];
  auVar32._30_34_ = auVar31._30_34_;
  auVar32[0x1d] = ((byte)(uVar19 >> 0x1d) & 1) * auVar31[0x1d];
  auVar33._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 4));
  auVar33._32_32_ = auVar31._32_32_;
  auVar34[1] = ((byte)(uVar19 >> 1) & 1) * auVar33[1];
  auVar34[0] = (bVar4 & 1) * auVar33[0];
  auVar34[2] = ((byte)(uVar19 >> 2) & 1) * auVar33[2];
  auVar34[3] = ((byte)(uVar19 >> 3) & 1) * auVar33[3];
  auVar34[4] = ((byte)(uVar19 >> 4) & 1) * auVar33[4];
  auVar34[5] = ((byte)(uVar19 >> 5) & 1) * auVar33[5];
  auVar34[6] = ((byte)(uVar19 >> 6) & 1) * auVar33[6];
  auVar34[7] = ((byte)(uVar19 >> 7) & 1) * auVar33[7];
  auVar34[8] = (bVar5 & 1) * auVar33[8];
  auVar34[9] = ((byte)(uVar19 >> 9) & 1) * auVar33[9];
  auVar34[10] = ((byte)(uVar19 >> 10) & 1) * auVar33[10];
  auVar34[0xb] = ((byte)(uVar19 >> 0xb) & 1) * auVar33[0xb];
  auVar34[0xc] = ((byte)(uVar19 >> 0xc) & 1) * auVar33[0xc];
  auVar34[0xd] = ((byte)(uVar19 >> 0xd) & 1) * auVar33[0xd];
  auVar34[0xe] = ((byte)(uVar19 >> 0xe) & 1) * auVar33[0xe];
  auVar34[0xf] = ((byte)(uVar19 >> 0xf) & 1) * auVar33[0xf];
  auVar34[0x10] = (bVar6 & 1) * auVar33[0x10];
  auVar34[0x11] = ((byte)(uVar19 >> 0x11) & 1) * auVar33[0x11];
  auVar34[0x12] = ((byte)(uVar19 >> 0x12) & 1) * auVar33[0x12];
  auVar34[0x13] = ((byte)(uVar19 >> 0x13) & 1) * auVar33[0x13];
  auVar34[0x14] = ((byte)(uVar19 >> 0x14) & 1) * auVar33[0x14];
  auVar34[0x15] = ((byte)(uVar19 >> 0x15) & 1) * auVar33[0x15];
  auVar34[0x16] = ((byte)(uVar19 >> 0x16) & 1) * auVar33[0x16];
  auVar34[0x17] = ((byte)(uVar19 >> 0x17) & 1) * auVar33[0x17];
  auVar34[0x18] = (bVar7 & 1) * auVar33[0x18];
  auVar34[0x19] = ((byte)(uVar19 >> 0x19) & 1) * auVar33[0x19];
  auVar34[0x1a] = ((byte)(uVar19 >> 0x1a) & 1) * auVar33[0x1a];
  auVar34[0x1b] = ((byte)(uVar19 >> 0x1b) & 1) * auVar33[0x1b];
  auVar34[0x1c] = ((byte)(uVar19 >> 0x1c) & 1) * auVar33[0x1c];
  auVar34._30_34_ = auVar33._30_34_;
  auVar34[0x1d] = ((byte)(uVar19 >> 0x1d) & 1) * auVar33[0x1d];
  auVar23._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 8));
  auVar23._32_32_ = auVar31._32_32_;
  auVar24[1] = ((byte)(uVar19 >> 1) & 1) * auVar23[1];
  auVar24[0] = (bVar4 & 1) * auVar23[0];
  auVar24[2] = ((byte)(uVar19 >> 2) & 1) * auVar23[2];
  auVar24[3] = ((byte)(uVar19 >> 3) & 1) * auVar23[3];
  auVar24[4] = ((byte)(uVar19 >> 4) & 1) * auVar23[4];
  auVar24[5] = ((byte)(uVar19 >> 5) & 1) * auVar23[5];
  auVar24[6] = ((byte)(uVar19 >> 6) & 1) * auVar23[6];
  auVar24[7] = ((byte)(uVar19 >> 7) & 1) * auVar23[7];
  auVar24[8] = (bVar5 & 1) * auVar23[8];
  auVar24[9] = ((byte)(uVar19 >> 9) & 1) * auVar23[9];
  auVar24[10] = ((byte)(uVar19 >> 10) & 1) * auVar23[10];
  auVar24[0xb] = ((byte)(uVar19 >> 0xb) & 1) * auVar23[0xb];
  auVar24[0xc] = ((byte)(uVar19 >> 0xc) & 1) * auVar23[0xc];
  auVar24[0xd] = ((byte)(uVar19 >> 0xd) & 1) * auVar23[0xd];
  auVar24[0xe] = ((byte)(uVar19 >> 0xe) & 1) * auVar23[0xe];
  auVar24[0xf] = ((byte)(uVar19 >> 0xf) & 1) * auVar23[0xf];
  auVar24[0x10] = (bVar6 & 1) * auVar23[0x10];
  auVar24[0x11] = ((byte)(uVar19 >> 0x11) & 1) * auVar23[0x11];
  auVar24[0x12] = ((byte)(uVar19 >> 0x12) & 1) * auVar23[0x12];
  auVar24[0x13] = ((byte)(uVar19 >> 0x13) & 1) * auVar23[0x13];
  auVar24[0x14] = ((byte)(uVar19 >> 0x14) & 1) * auVar23[0x14];
  auVar24[0x15] = ((byte)(uVar19 >> 0x15) & 1) * auVar23[0x15];
  auVar24[0x16] = ((byte)(uVar19 >> 0x16) & 1) * auVar23[0x16];
  auVar24[0x17] = ((byte)(uVar19 >> 0x17) & 1) * auVar23[0x17];
  auVar24[0x18] = (bVar7 & 1) * auVar23[0x18];
  auVar24[0x19] = ((byte)(uVar19 >> 0x19) & 1) * auVar23[0x19];
  auVar24[0x1a] = ((byte)(uVar19 >> 0x1a) & 1) * auVar23[0x1a];
  auVar24[0x1b] = ((byte)(uVar19 >> 0x1b) & 1) * auVar23[0x1b];
  auVar24[0x1c] = ((byte)(uVar19 >> 0x1c) & 1) * auVar23[0x1c];
  auVar24._30_34_ = auVar23._30_34_;
  auVar24[0x1d] = ((byte)(uVar19 >> 0x1d) & 1) * auVar23[0x1d];
  uVar15 = iVar9 * 4 - 8;
  uVar15 = ~((int)uVar15 >> 0x1f) & uVar15;
  if ((int)uVar15 < 1) {
    auVar21 = ZEXT832(0) << 0x40;
    auVar22 = auVar21;
  }
  else {
    uVar19 = 0xffffffffffffffffU >> ((ulonglong)-uVar15 & 0x3f) & 0xffffffff;
    auVar25._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + 0x20));
    auVar25._32_32_ = auVar31._32_32_;
    bVar4 = (byte)uVar19;
    auVar26[1] = ((byte)(uVar19 >> 1) & 1) * auVar25[1];
    auVar26[0] = (bVar4 & 1) * auVar25[0];
    auVar26[2] = ((byte)(uVar19 >> 2) & 1) * auVar25[2];
    auVar26[3] = ((byte)(uVar19 >> 3) & 1) * auVar25[3];
    auVar26[4] = ((byte)(uVar19 >> 4) & 1) * auVar25[4];
    auVar26[5] = ((byte)(uVar19 >> 5) & 1) * auVar25[5];
    auVar26[6] = ((byte)(uVar19 >> 6) & 1) * auVar25[6];
    auVar26[7] = ((byte)(uVar19 >> 7) & 1) * auVar25[7];
    bVar5 = (byte)(uVar19 >> 8);
    auVar26[8] = (bVar5 & 1) * auVar25[8];
    auVar26[9] = ((byte)(uVar19 >> 9) & 1) * auVar25[9];
    auVar26[10] = ((byte)(uVar19 >> 10) & 1) * auVar25[10];
    auVar26[0xb] = ((byte)(uVar19 >> 0xb) & 1) * auVar25[0xb];
    auVar26[0xc] = ((byte)(uVar19 >> 0xc) & 1) * auVar25[0xc];
    auVar26[0xd] = ((byte)(uVar19 >> 0xd) & 1) * auVar25[0xd];
    auVar26[0xe] = ((byte)(uVar19 >> 0xe) & 1) * auVar25[0xe];
    auVar26[0xf] = ((byte)(uVar19 >> 0xf) & 1) * auVar25[0xf];
    bVar6 = (byte)(uVar19 >> 0x10);
    auVar26[0x10] = (bVar6 & 1) * auVar25[0x10];
    auVar26[0x11] = ((byte)(uVar19 >> 0x11) & 1) * auVar25[0x11];
    auVar26[0x12] = ((byte)(uVar19 >> 0x12) & 1) * auVar25[0x12];
    auVar26[0x13] = ((byte)(uVar19 >> 0x13) & 1) * auVar25[0x13];
    auVar26[0x14] = ((byte)(uVar19 >> 0x14) & 1) * auVar25[0x14];
    auVar26[0x15] = ((byte)(uVar19 >> 0x15) & 1) * auVar25[0x15];
    auVar26[0x16] = ((byte)(uVar19 >> 0x16) & 1) * auVar25[0x16];
    auVar26[0x17] = ((byte)(uVar19 >> 0x17) & 1) * auVar25[0x17];
    bVar7 = (byte)(uVar19 >> 0x18);
    auVar26[0x18] = (bVar7 & 1) * auVar25[0x18];
    auVar26[0x19] = ((byte)(uVar19 >> 0x19) & 1) * auVar25[0x19];
    auVar26[0x1a] = ((byte)(uVar19 >> 0x1a) & 1) * auVar25[0x1a];
    auVar26[0x1b] = ((byte)(uVar19 >> 0x1b) & 1) * auVar25[0x1b];
    auVar26[0x1c] = ((byte)(uVar19 >> 0x1c) & 1) * auVar25[0x1c];
    auVar26._30_34_ = auVar25._30_34_;
    auVar26[0x1d] = ((byte)(uVar19 >> 0x1d) & 1) * auVar25[0x1d];
    auVar21 = auVar26._0_32_;
    auVar27._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 4 + 0x20));
    auVar27._32_32_ = auVar31._32_32_;
    auVar28[1] = ((byte)(uVar19 >> 1) & 1) * auVar27[1];
    auVar28[0] = (bVar4 & 1) * auVar27[0];
    auVar28[2] = ((byte)(uVar19 >> 2) & 1) * auVar27[2];
    auVar28[3] = ((byte)(uVar19 >> 3) & 1) * auVar27[3];
    auVar28[4] = ((byte)(uVar19 >> 4) & 1) * auVar27[4];
    auVar28[5] = ((byte)(uVar19 >> 5) & 1) * auVar27[5];
    auVar28[6] = ((byte)(uVar19 >> 6) & 1) * auVar27[6];
    auVar28[7] = ((byte)(uVar19 >> 7) & 1) * auVar27[7];
    auVar28[8] = (bVar5 & 1) * auVar27[8];
    auVar28[9] = ((byte)(uVar19 >> 9) & 1) * auVar27[9];
    auVar28[10] = ((byte)(uVar19 >> 10) & 1) * auVar27[10];
    auVar28[0xb] = ((byte)(uVar19 >> 0xb) & 1) * auVar27[0xb];
    auVar28[0xc] = ((byte)(uVar19 >> 0xc) & 1) * auVar27[0xc];
    auVar28[0xd] = ((byte)(uVar19 >> 0xd) & 1) * auVar27[0xd];
    auVar28[0xe] = ((byte)(uVar19 >> 0xe) & 1) * auVar27[0xe];
    auVar28[0xf] = ((byte)(uVar19 >> 0xf) & 1) * auVar27[0xf];
    auVar28[0x10] = (bVar6 & 1) * auVar27[0x10];
    auVar28[0x11] = ((byte)(uVar19 >> 0x11) & 1) * auVar27[0x11];
    auVar28[0x12] = ((byte)(uVar19 >> 0x12) & 1) * auVar27[0x12];
    auVar28[0x13] = ((byte)(uVar19 >> 0x13) & 1) * auVar27[0x13];
    auVar28[0x14] = ((byte)(uVar19 >> 0x14) & 1) * auVar27[0x14];
    auVar28[0x15] = ((byte)(uVar19 >> 0x15) & 1) * auVar27[0x15];
    auVar28[0x16] = ((byte)(uVar19 >> 0x16) & 1) * auVar27[0x16];
    auVar28[0x17] = ((byte)(uVar19 >> 0x17) & 1) * auVar27[0x17];
    auVar28[0x18] = (bVar7 & 1) * auVar27[0x18];
    auVar28[0x19] = ((byte)(uVar19 >> 0x19) & 1) * auVar27[0x19];
    auVar28[0x1a] = ((byte)(uVar19 >> 0x1a) & 1) * auVar27[0x1a];
    auVar28[0x1b] = ((byte)(uVar19 >> 0x1b) & 1) * auVar27[0x1b];
    auVar28[0x1c] = ((byte)(uVar19 >> 0x1c) & 1) * auVar27[0x1c];
    auVar28._30_34_ = auVar27._30_34_;
    auVar28[0x1d] = ((byte)(uVar19 >> 0x1d) & 1) * auVar27[0x1d];
    auVar29._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 8 + 0x20));
    auVar29._32_32_ = auVar31._32_32_;
    auVar30[1] = ((byte)(uVar19 >> 1) & 1) * auVar29[1];
    auVar30[0] = (bVar4 & 1) * auVar29[0];
    auVar30[2] = ((byte)(uVar19 >> 2) & 1) * auVar29[2];
    auVar30[3] = ((byte)(uVar19 >> 3) & 1) * auVar29[3];
    auVar30[4] = ((byte)(uVar19 >> 4) & 1) * auVar29[4];
    auVar30[5] = ((byte)(uVar19 >> 5) & 1) * auVar29[5];
    auVar30[6] = ((byte)(uVar19 >> 6) & 1) * auVar29[6];
    auVar30[7] = ((byte)(uVar19 >> 7) & 1) * auVar29[7];
    auVar30[8] = (bVar5 & 1) * auVar29[8];
    auVar30[9] = ((byte)(uVar19 >> 9) & 1) * auVar29[9];
    auVar30[10] = ((byte)(uVar19 >> 10) & 1) * auVar29[10];
    auVar30[0xb] = ((byte)(uVar19 >> 0xb) & 1) * auVar29[0xb];
    auVar30[0xc] = ((byte)(uVar19 >> 0xc) & 1) * auVar29[0xc];
    auVar30[0xd] = ((byte)(uVar19 >> 0xd) & 1) * auVar29[0xd];
    auVar30[0xe] = ((byte)(uVar19 >> 0xe) & 1) * auVar29[0xe];
    auVar30[0xf] = ((byte)(uVar19 >> 0xf) & 1) * auVar29[0xf];
    auVar30[0x10] = (bVar6 & 1) * auVar29[0x10];
    auVar30[0x11] = ((byte)(uVar19 >> 0x11) & 1) * auVar29[0x11];
    auVar30[0x12] = ((byte)(uVar19 >> 0x12) & 1) * auVar29[0x12];
    auVar30[0x13] = ((byte)(uVar19 >> 0x13) & 1) * auVar29[0x13];
    auVar30[0x14] = ((byte)(uVar19 >> 0x14) & 1) * auVar29[0x14];
    auVar30[0x15] = ((byte)(uVar19 >> 0x15) & 1) * auVar29[0x15];
    auVar30[0x16] = ((byte)(uVar19 >> 0x16) & 1) * auVar29[0x16];
    auVar30[0x17] = ((byte)(uVar19 >> 0x17) & 1) * auVar29[0x17];
    auVar30[0x18] = (bVar7 & 1) * auVar29[0x18];
    auVar30[0x19] = ((byte)(uVar19 >> 0x19) & 1) * auVar29[0x19];
    auVar30[0x1a] = ((byte)(uVar19 >> 0x1a) & 1) * auVar29[0x1a];
    auVar30[0x1b] = ((byte)(uVar19 >> 0x1b) & 1) * auVar29[0x1b];
    auVar30[0x1c] = ((byte)(uVar19 >> 0x1c) & 1) * auVar29[0x1c];
    auVar30._30_34_ = auVar29._30_34_;
    auVar30[0x1d] = ((byte)(uVar19 >> 0x1d) & 1) * auVar29[0x1d];
    auVar20 = auVar30._0_32_;
    auVar22 = auVar28._0_32_;
  }
  auVar8 = vmaxps_avx(auVar32._0_32_,auVar34._0_32_);
  auVar36 = ZEXT3264(auVar8);
  uVar35 = auVar8._0_8_;
  auVar21 = vmaxps_avx(auVar21,auVar22);
  auVar22 = vmaxps_avx(auVar8,auVar24._0_32_);
  auVar20 = vmaxps_avx(auVar21,auVar20);
  auVar21 = vshuff32x4_avx512vl(auVar22,auVar20,1);
  vpalignr_avx2(auVar21,auVar22,0xc);
  vpalignr_avx512vl(auVar20,auVar21);
  pcVar1 = (char *)(param_2 + -0x1f);
  *pcVar1 = *pcVar1;
  if (*pcVar1 == '\0') {
    DAT_000000ff = DAT_000000ff + -1;
    lVar18 = 0;
    if (0 < param_6) {
      lVar3 = param_2 * 4;
      do {
        uVar12 = ((ulonglong)param_3 & 0x1f) >> 2;
        uVar19 = param_5;
        pauVar10 = param_1;
        pauVar14 = param_3;
        if (uVar12 != 0) {
          uVar12 = 8 - uVar12;
          if ((longlong)param_5 <= (longlong)uVar12) {
            uVar12 = param_5;
          }
          auVar36._0_8_ = FUN_14059d1a0(param_1,param_2,param_3,uVar12);
          auVar36._8_56_ = extraout_var;
          pauVar10 = (undefined1 (*) [64])(*param_1 + uVar12 * 4);
          uVar19 = param_5 - uVar12;
          pauVar14 = (undefined1 (*) [64])(*param_3 + uVar12 * 4);
        }
        lVar13 = (longlong)uVar19 >> 4;
        if (lVar13 != 0) {
          pauVar16 = (undefined1 (*) [64])(*pauVar10 + param_2 * 4);
          auVar31 = vmaxps_avx512f(*pauVar10,*pauVar16);
          pauVar17 = (undefined1 (*) [64])(*pauVar10 + param_2 * 8);
          auVar32 = vmaxps_avx512f(auVar31,*pauVar17);
          lVar11 = 0;
          auVar31 = auVar32;
          if (1 < lVar13) {
            do {
              lVar11 = lVar11 + 1;
              auVar32 = vmaxps_avx512f(pauVar10[1],*(undefined1 (*) [64])(pauVar10[1] + lVar3));
              auVar32 = vmaxps_avx512f(auVar32,*(undefined1 (*) [64])(pauVar10[1] + param_2 * 8));
              pauVar10 = pauVar10 + 1;
              auVar33 = valignd_avx512f(auVar32,auVar31,4);
              auVar34 = valignd_avx512f(auVar32,auVar31,8);
              auVar31 = vmaxps_avx512f(auVar33,auVar31);
              auVar31 = vmaxps_avx512f(auVar34,auVar31);
              *pauVar14 = auVar31;
              pauVar14 = pauVar14 + 1;
              auVar31 = auVar32;
            } while (lVar11 < lVar13 + -1);
            pauVar16 = (undefined1 (*) [64])(*pauVar10 + param_2 * 4);
            pauVar17 = (undefined1 (*) [64])(*pauVar10 + param_2 * 8);
          }
          pauVar2 = pauVar10 + 1;
          pauVar10 = pauVar10 + 1;
          auVar31 = vmaxps_avx512f(ZEXT3264(*(undefined1 (*) [32])*pauVar2),
                                   ZEXT3264(*(undefined1 (*) [32])pauVar16[1]));
          auVar31 = vmaxps_avx512f(auVar31,ZEXT3264(*(undefined1 (*) [32])pauVar17[1]));
          auVar33 = valignd_avx512f(auVar31,auVar32,4);
          auVar31 = valignd_avx512f(auVar31,auVar32,8);
          auVar36 = vmaxps_avx512f(auVar33,auVar32);
          auVar31 = vmaxps_avx512f(auVar31,auVar36);
          *pauVar14 = auVar31;
          pauVar14 = pauVar14 + 1;
        }
        lVar13 = (longlong)(uVar19 - (uVar19 & 0xfffffffffffffff0)) >> 3;
        if (lVar13 != 0) {
          lVar11 = 0;
          auVar20 = vmaxps_avx(*(undefined1 (*) [32])*pauVar10,
                               *(undefined1 (*) [32])(*pauVar10 + lVar3));
          auVar20 = vmaxps_avx(auVar20,*(undefined1 (*) [32])(*pauVar10 + param_2 * 8));
          auVar36 = ZEXT3264(auVar20);
          if (0 < lVar13) {
            do {
              lVar11 = lVar11 + 1;
              auVar20 = vmaxps_avx(*(undefined1 (*) [32])(*pauVar10 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar10 + lVar3 + 0x20));
              auVar20 = vmaxps_avx(auVar20,*(undefined1 (*) [32])(*pauVar10 + param_2 * 8 + 0x20));
              pauVar10 = (undefined1 (*) [64])(*pauVar10 + 0x20);
              auVar22 = vshuff32x4_avx512vl(auVar36._0_32_,auVar20,1);
              auVar21 = vmaxps_avx(auVar22,auVar36._0_32_);
              auVar22 = vpalignr_avx2(auVar20,auVar22,0x10);
              auVar21 = vmaxps_avx512vl(auVar22,auVar21);
              *(undefined1 (*) [32])*pauVar14 = auVar21;
              pauVar14 = (undefined1 (*) [64])(*pauVar14 + 0x20);
              auVar36 = ZEXT3264(auVar20);
            } while (lVar11 < lVar13);
          }
        }
        if ((uVar19 & 7) != 0) {
          auVar36._0_8_ = FUN_14059d1a0();
          auVar36._8_56_ = extraout_var_00;
        }
        uVar35 = auVar36._0_8_;
        lVar18 = lVar18 + 1;
        param_1 = (undefined1 (*) [64])(*param_1 + param_2 * 4);
        param_3 = (undefined1 (*) [64])((longlong)param_3 + (8 - (param_4 & 7)) * 4);
      } while (lVar18 < param_6);
    }
    return uVar35;
  }
  return uVar35;
}

