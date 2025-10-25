
/* WARNING: Control flow encountered bad instruction data */

void FUN_1405a9c40(undefined1 (*param_1) [32],longlong param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar7 [32];
  
  auVar11 = (undefined1  [32])0x0;
  uVar6 = 0xffffffffffffffffU >> ((ulonglong)-((param_4 & 0x1f) + 6) & 0x3f) & 0xffffffff;
  auVar7 = vmovdqu8_avx512vl(*param_1);
  bVar1 = (byte)uVar6;
  auVar8[1] = ((byte)(uVar6 >> 1) & 1) * auVar7[1];
  auVar8[0] = (bVar1 & 1) * auVar7[0];
  auVar8[2] = ((byte)(uVar6 >> 2) & 1) * auVar7[2];
  auVar8[3] = ((byte)(uVar6 >> 3) & 1) * auVar7[3];
  auVar8[4] = ((byte)(uVar6 >> 4) & 1) * auVar7[4];
  auVar8[5] = ((byte)(uVar6 >> 5) & 1) * auVar7[5];
  auVar8[6] = ((byte)(uVar6 >> 6) & 1) * auVar7[6];
  auVar8[7] = ((byte)(uVar6 >> 7) & 1) * auVar7[7];
  bVar2 = (byte)(uVar6 >> 8);
  auVar8[8] = (bVar2 & 1) * auVar7[8];
  auVar8[9] = ((byte)(uVar6 >> 9) & 1) * auVar7[9];
  auVar8[10] = ((byte)(uVar6 >> 10) & 1) * auVar7[10];
  auVar8[0xb] = ((byte)(uVar6 >> 0xb) & 1) * auVar7[0xb];
  auVar8[0xc] = ((byte)(uVar6 >> 0xc) & 1) * auVar7[0xc];
  auVar8[0xd] = ((byte)(uVar6 >> 0xd) & 1) * auVar7[0xd];
  auVar8[0xe] = ((byte)(uVar6 >> 0xe) & 1) * auVar7[0xe];
  auVar8[0xf] = ((byte)(uVar6 >> 0xf) & 1) * auVar7[0xf];
  bVar3 = (byte)(uVar6 >> 0x10);
  auVar8[0x10] = (bVar3 & 1) * auVar7[0x10];
  auVar8[0x11] = ((byte)(uVar6 >> 0x11) & 1) * auVar7[0x11];
  auVar8[0x12] = ((byte)(uVar6 >> 0x12) & 1) * auVar7[0x12];
  auVar8[0x13] = ((byte)(uVar6 >> 0x13) & 1) * auVar7[0x13];
  auVar8[0x14] = ((byte)(uVar6 >> 0x14) & 1) * auVar7[0x14];
  auVar8[0x15] = ((byte)(uVar6 >> 0x15) & 1) * auVar7[0x15];
  auVar8[0x16] = ((byte)(uVar6 >> 0x16) & 1) * auVar7[0x16];
  auVar8[0x17] = ((byte)(uVar6 >> 0x17) & 1) * auVar7[0x17];
  bVar4 = (byte)(uVar6 >> 0x18);
  auVar8[0x18] = (bVar4 & 1) * auVar7[0x18];
  auVar8[0x19] = ((byte)(uVar6 >> 0x19) & 1) * auVar7[0x19];
  auVar8[0x1a] = ((byte)(uVar6 >> 0x1a) & 1) * auVar7[0x1a];
  auVar8[0x1b] = ((byte)(uVar6 >> 0x1b) & 1) * auVar7[0x1b];
  auVar8[0x1c] = ((byte)(uVar6 >> 0x1c) & 1) * auVar7[0x1c];
  auVar8._30_2_ = auVar7._30_2_;
  auVar8[0x1d] = ((byte)(uVar6 >> 0x1d) & 1) * auVar7[0x1d];
  auVar7 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2));
  auVar9[1] = ((byte)(uVar6 >> 1) & 1) * auVar7[1];
  auVar9[0] = (bVar1 & 1) * auVar7[0];
  auVar9[2] = ((byte)(uVar6 >> 2) & 1) * auVar7[2];
  auVar9[3] = ((byte)(uVar6 >> 3) & 1) * auVar7[3];
  auVar9[4] = ((byte)(uVar6 >> 4) & 1) * auVar7[4];
  auVar9[5] = ((byte)(uVar6 >> 5) & 1) * auVar7[5];
  auVar9[6] = ((byte)(uVar6 >> 6) & 1) * auVar7[6];
  auVar9[7] = ((byte)(uVar6 >> 7) & 1) * auVar7[7];
  auVar9[8] = (bVar2 & 1) * auVar7[8];
  auVar9[9] = ((byte)(uVar6 >> 9) & 1) * auVar7[9];
  auVar9[10] = ((byte)(uVar6 >> 10) & 1) * auVar7[10];
  auVar9[0xb] = ((byte)(uVar6 >> 0xb) & 1) * auVar7[0xb];
  auVar9[0xc] = ((byte)(uVar6 >> 0xc) & 1) * auVar7[0xc];
  auVar9[0xd] = ((byte)(uVar6 >> 0xd) & 1) * auVar7[0xd];
  auVar9[0xe] = ((byte)(uVar6 >> 0xe) & 1) * auVar7[0xe];
  auVar9[0xf] = ((byte)(uVar6 >> 0xf) & 1) * auVar7[0xf];
  auVar9[0x10] = (bVar3 & 1) * auVar7[0x10];
  auVar9[0x11] = ((byte)(uVar6 >> 0x11) & 1) * auVar7[0x11];
  auVar9[0x12] = ((byte)(uVar6 >> 0x12) & 1) * auVar7[0x12];
  auVar9[0x13] = ((byte)(uVar6 >> 0x13) & 1) * auVar7[0x13];
  auVar9[0x14] = ((byte)(uVar6 >> 0x14) & 1) * auVar7[0x14];
  auVar9[0x15] = ((byte)(uVar6 >> 0x15) & 1) * auVar7[0x15];
  auVar9[0x16] = ((byte)(uVar6 >> 0x16) & 1) * auVar7[0x16];
  auVar9[0x17] = ((byte)(uVar6 >> 0x17) & 1) * auVar7[0x17];
  auVar9[0x18] = (bVar4 & 1) * auVar7[0x18];
  auVar9[0x19] = ((byte)(uVar6 >> 0x19) & 1) * auVar7[0x19];
  auVar9[0x1a] = ((byte)(uVar6 >> 0x1a) & 1) * auVar7[0x1a];
  auVar9[0x1b] = ((byte)(uVar6 >> 0x1b) & 1) * auVar7[0x1b];
  auVar9[0x1c] = ((byte)(uVar6 >> 0x1c) & 1) * auVar7[0x1c];
  auVar9._30_2_ = auVar7._30_2_;
  auVar9[0x1d] = ((byte)(uVar6 >> 0x1d) & 1) * auVar7[0x1d];
  auVar7 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 2));
  auVar10[1] = ((byte)(uVar6 >> 1) & 1) * auVar7[1];
  auVar10[0] = (bVar1 & 1) * auVar7[0];
  auVar10[2] = ((byte)(uVar6 >> 2) & 1) * auVar7[2];
  auVar10[3] = ((byte)(uVar6 >> 3) & 1) * auVar7[3];
  auVar10[4] = ((byte)(uVar6 >> 4) & 1) * auVar7[4];
  auVar10[5] = ((byte)(uVar6 >> 5) & 1) * auVar7[5];
  auVar10[6] = ((byte)(uVar6 >> 6) & 1) * auVar7[6];
  auVar10[7] = ((byte)(uVar6 >> 7) & 1) * auVar7[7];
  auVar10[8] = (bVar2 & 1) * auVar7[8];
  auVar10[9] = ((byte)(uVar6 >> 9) & 1) * auVar7[9];
  auVar10[10] = ((byte)(uVar6 >> 10) & 1) * auVar7[10];
  auVar10[0xb] = ((byte)(uVar6 >> 0xb) & 1) * auVar7[0xb];
  auVar10[0xc] = ((byte)(uVar6 >> 0xc) & 1) * auVar7[0xc];
  auVar10[0xd] = ((byte)(uVar6 >> 0xd) & 1) * auVar7[0xd];
  auVar10[0xe] = ((byte)(uVar6 >> 0xe) & 1) * auVar7[0xe];
  auVar10[0xf] = ((byte)(uVar6 >> 0xf) & 1) * auVar7[0xf];
  auVar10[0x10] = (bVar3 & 1) * auVar7[0x10];
  auVar10[0x11] = ((byte)(uVar6 >> 0x11) & 1) * auVar7[0x11];
  auVar10[0x12] = ((byte)(uVar6 >> 0x12) & 1) * auVar7[0x12];
  auVar10[0x13] = ((byte)(uVar6 >> 0x13) & 1) * auVar7[0x13];
  auVar10[0x14] = ((byte)(uVar6 >> 0x14) & 1) * auVar7[0x14];
  auVar10[0x15] = ((byte)(uVar6 >> 0x15) & 1) * auVar7[0x15];
  auVar10[0x16] = ((byte)(uVar6 >> 0x16) & 1) * auVar7[0x16];
  auVar10[0x17] = ((byte)(uVar6 >> 0x17) & 1) * auVar7[0x17];
  auVar10[0x18] = (bVar4 & 1) * auVar7[0x18];
  auVar10[0x19] = ((byte)(uVar6 >> 0x19) & 1) * auVar7[0x19];
  auVar10[0x1a] = ((byte)(uVar6 >> 0x1a) & 1) * auVar7[0x1a];
  auVar10[0x1b] = ((byte)(uVar6 >> 0x1b) & 1) * auVar7[0x1b];
  auVar10[0x1c] = ((byte)(uVar6 >> 0x1c) & 1) * auVar7[0x1c];
  auVar10._30_2_ = auVar7._30_2_;
  auVar10[0x1d] = ((byte)(uVar6 >> 0x1d) & 1) * auVar7[0x1d];
  uVar5 = (param_4 & 0x1f) - 0x1a;
  uVar5 = ~((int)uVar5 >> 0x1f) & uVar5;
  if ((int)uVar5 < 1) {
    auVar7 = (undefined1  [32])0x0;
    auVar12 = (undefined1  [32])0x0;
  }
  else {
    uVar6 = 0xffffffffffffffffU >> ((ulonglong)-uVar5 & 0x3f) & 0xffffffff;
    auVar7 = vmovdqu8_avx512vl(param_1[1]);
    bVar1 = (byte)uVar6;
    auVar11[1] = ((byte)(uVar6 >> 1) & 1) * auVar7[1];
    auVar11[0] = (bVar1 & 1) * auVar7[0];
    auVar11[2] = ((byte)(uVar6 >> 2) & 1) * auVar7[2];
    auVar11[3] = ((byte)(uVar6 >> 3) & 1) * auVar7[3];
    auVar11[4] = ((byte)(uVar6 >> 4) & 1) * auVar7[4];
    auVar11[5] = ((byte)(uVar6 >> 5) & 1) * auVar7[5];
    auVar11[6] = ((byte)(uVar6 >> 6) & 1) * auVar7[6];
    auVar11[7] = ((byte)(uVar6 >> 7) & 1) * auVar7[7];
    bVar2 = (byte)(uVar6 >> 8);
    auVar11[8] = (bVar2 & 1) * auVar7[8];
    auVar11[9] = ((byte)(uVar6 >> 9) & 1) * auVar7[9];
    auVar11[10] = ((byte)(uVar6 >> 10) & 1) * auVar7[10];
    auVar11[0xb] = ((byte)(uVar6 >> 0xb) & 1) * auVar7[0xb];
    auVar11[0xc] = ((byte)(uVar6 >> 0xc) & 1) * auVar7[0xc];
    auVar11[0xd] = ((byte)(uVar6 >> 0xd) & 1) * auVar7[0xd];
    auVar11[0xe] = ((byte)(uVar6 >> 0xe) & 1) * auVar7[0xe];
    auVar11[0xf] = ((byte)(uVar6 >> 0xf) & 1) * auVar7[0xf];
    bVar3 = (byte)(uVar6 >> 0x10);
    auVar11[0x10] = (bVar3 & 1) * auVar7[0x10];
    auVar11[0x11] = ((byte)(uVar6 >> 0x11) & 1) * auVar7[0x11];
    auVar11[0x12] = ((byte)(uVar6 >> 0x12) & 1) * auVar7[0x12];
    auVar11[0x13] = ((byte)(uVar6 >> 0x13) & 1) * auVar7[0x13];
    auVar11[0x14] = ((byte)(uVar6 >> 0x14) & 1) * auVar7[0x14];
    auVar11[0x15] = ((byte)(uVar6 >> 0x15) & 1) * auVar7[0x15];
    auVar11[0x16] = ((byte)(uVar6 >> 0x16) & 1) * auVar7[0x16];
    auVar11[0x17] = ((byte)(uVar6 >> 0x17) & 1) * auVar7[0x17];
    bVar4 = (byte)(uVar6 >> 0x18);
    auVar11[0x18] = (bVar4 & 1) * auVar7[0x18];
    auVar11[0x19] = ((byte)(uVar6 >> 0x19) & 1) * auVar7[0x19];
    auVar11[0x1a] = ((byte)(uVar6 >> 0x1a) & 1) * auVar7[0x1a];
    auVar11[0x1b] = ((byte)(uVar6 >> 0x1b) & 1) * auVar7[0x1b];
    auVar11[0x1c] = ((byte)(uVar6 >> 0x1c) & 1) * auVar7[0x1c];
    auVar11._30_2_ = auVar7._30_2_;
    auVar11[0x1d] = ((byte)(uVar6 >> 0x1d) & 1) * auVar7[0x1d];
    auVar12 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_1[1] + param_2));
    auVar7[1] = ((byte)(uVar6 >> 1) & 1) * auVar12[1];
    auVar7[0] = (bVar1 & 1) * auVar12[0];
    auVar7[2] = ((byte)(uVar6 >> 2) & 1) * auVar12[2];
    auVar7[3] = ((byte)(uVar6 >> 3) & 1) * auVar12[3];
    auVar7[4] = ((byte)(uVar6 >> 4) & 1) * auVar12[4];
    auVar7[5] = ((byte)(uVar6 >> 5) & 1) * auVar12[5];
    auVar7[6] = ((byte)(uVar6 >> 6) & 1) * auVar12[6];
    auVar7[7] = ((byte)(uVar6 >> 7) & 1) * auVar12[7];
    auVar7[8] = (bVar2 & 1) * auVar12[8];
    auVar7[9] = ((byte)(uVar6 >> 9) & 1) * auVar12[9];
    auVar7[10] = ((byte)(uVar6 >> 10) & 1) * auVar12[10];
    auVar7[0xb] = ((byte)(uVar6 >> 0xb) & 1) * auVar12[0xb];
    auVar7[0xc] = ((byte)(uVar6 >> 0xc) & 1) * auVar12[0xc];
    auVar7[0xd] = ((byte)(uVar6 >> 0xd) & 1) * auVar12[0xd];
    auVar7[0xe] = ((byte)(uVar6 >> 0xe) & 1) * auVar12[0xe];
    auVar7[0xf] = ((byte)(uVar6 >> 0xf) & 1) * auVar12[0xf];
    auVar7[0x10] = (bVar3 & 1) * auVar12[0x10];
    auVar7[0x11] = ((byte)(uVar6 >> 0x11) & 1) * auVar12[0x11];
    auVar7[0x12] = ((byte)(uVar6 >> 0x12) & 1) * auVar12[0x12];
    auVar7[0x13] = ((byte)(uVar6 >> 0x13) & 1) * auVar12[0x13];
    auVar7[0x14] = ((byte)(uVar6 >> 0x14) & 1) * auVar12[0x14];
    auVar7[0x15] = ((byte)(uVar6 >> 0x15) & 1) * auVar12[0x15];
    auVar7[0x16] = ((byte)(uVar6 >> 0x16) & 1) * auVar12[0x16];
    auVar7[0x17] = ((byte)(uVar6 >> 0x17) & 1) * auVar12[0x17];
    auVar7[0x18] = (bVar4 & 1) * auVar12[0x18];
    auVar7[0x19] = ((byte)(uVar6 >> 0x19) & 1) * auVar12[0x19];
    auVar7[0x1a] = ((byte)(uVar6 >> 0x1a) & 1) * auVar12[0x1a];
    auVar7[0x1b] = ((byte)(uVar6 >> 0x1b) & 1) * auVar12[0x1b];
    auVar7[0x1c] = ((byte)(uVar6 >> 0x1c) & 1) * auVar12[0x1c];
    auVar7._30_2_ = auVar12._30_2_;
    auVar7[0x1d] = ((byte)(uVar6 >> 0x1d) & 1) * auVar12[0x1d];
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
    auVar12[1] = ((byte)(uVar6 >> 1) & 1) * auVar13[1];
    auVar12[0] = (bVar1 & 1) * auVar13[0];
    auVar12[2] = ((byte)(uVar6 >> 2) & 1) * auVar13[2];
    auVar12[3] = ((byte)(uVar6 >> 3) & 1) * auVar13[3];
    auVar12[4] = ((byte)(uVar6 >> 4) & 1) * auVar13[4];
    auVar12[5] = ((byte)(uVar6 >> 5) & 1) * auVar13[5];
    auVar12[6] = ((byte)(uVar6 >> 6) & 1) * auVar13[6];
    auVar12[7] = ((byte)(uVar6 >> 7) & 1) * auVar13[7];
    auVar12[8] = (bVar2 & 1) * auVar13[8];
    auVar12[9] = ((byte)(uVar6 >> 9) & 1) * auVar13[9];
    auVar12[10] = ((byte)(uVar6 >> 10) & 1) * auVar13[10];
    auVar12[0xb] = ((byte)(uVar6 >> 0xb) & 1) * auVar13[0xb];
    auVar12[0xc] = ((byte)(uVar6 >> 0xc) & 1) * auVar13[0xc];
    auVar12[0xd] = ((byte)(uVar6 >> 0xd) & 1) * auVar13[0xd];
    auVar12[0xe] = ((byte)(uVar6 >> 0xe) & 1) * auVar13[0xe];
    auVar12[0xf] = ((byte)(uVar6 >> 0xf) & 1) * auVar13[0xf];
    auVar12[0x10] = (bVar3 & 1) * auVar13[0x10];
    auVar12[0x11] = ((byte)(uVar6 >> 0x11) & 1) * auVar13[0x11];
    auVar12[0x12] = ((byte)(uVar6 >> 0x12) & 1) * auVar13[0x12];
    auVar12[0x13] = ((byte)(uVar6 >> 0x13) & 1) * auVar13[0x13];
    auVar12[0x14] = ((byte)(uVar6 >> 0x14) & 1) * auVar13[0x14];
    auVar12[0x15] = ((byte)(uVar6 >> 0x15) & 1) * auVar13[0x15];
    auVar12[0x16] = ((byte)(uVar6 >> 0x16) & 1) * auVar13[0x16];
    auVar12[0x17] = ((byte)(uVar6 >> 0x17) & 1) * auVar13[0x17];
    auVar12[0x18] = (bVar4 & 1) * auVar13[0x18];
    auVar12[0x19] = ((byte)(uVar6 >> 0x19) & 1) * auVar13[0x19];
    auVar12[0x1a] = ((byte)(uVar6 >> 0x1a) & 1) * auVar13[0x1a];
    auVar12[0x1b] = ((byte)(uVar6 >> 0x1b) & 1) * auVar13[0x1b];
    auVar12[0x1c] = ((byte)(uVar6 >> 0x1c) & 1) * auVar13[0x1c];
    auVar12._30_2_ = auVar13._30_2_;
    auVar12[0x1d] = ((byte)(uVar6 >> 0x1d) & 1) * auVar13[0x1d];
  }
  auVar8 = vpminub_avx2(auVar8,auVar9);
  auVar7 = vpminub_avx2(auVar11,auVar7);
  auVar8 = vpminub_avx2(auVar8,auVar10);
  auVar7 = vpminub_avx2(auVar7,auVar12);
  auVar7 = vshufi32x4_avx512vl(auVar8,auVar7,1);
  vpalignr_avx2(auVar7,auVar8,3);
  vpalignr_avx512vl(auVar7,auVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

