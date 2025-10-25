
/* WARNING: Control flow encountered bad instruction data */

void FUN_140586920(undefined1 (*param_1) [32],longlong param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined4 *unaff_RDI;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar9 [32];
  
  auVar13 = (undefined1  [32])0x0;
  uVar6 = 0xffffffffffffffff;
  uVar8 = 0xffffffffffffffffU >> ((ulonglong)-((param_4 & 0x1f) + 8) & 0x3f) & 0xffffffff;
  auVar9 = vmovdqu8_avx512vl(*param_1);
  bVar2 = (byte)uVar8;
  auVar10[1] = ((byte)(uVar8 >> 1) & 1) * auVar9[1];
  auVar10[0] = (bVar2 & 1) * auVar9[0];
  auVar10[2] = ((byte)(uVar8 >> 2) & 1) * auVar9[2];
  auVar10[3] = ((byte)(uVar8 >> 3) & 1) * auVar9[3];
  auVar10[4] = ((byte)(uVar8 >> 4) & 1) * auVar9[4];
  auVar10[5] = ((byte)(uVar8 >> 5) & 1) * auVar9[5];
  auVar10[6] = ((byte)(uVar8 >> 6) & 1) * auVar9[6];
  auVar10[7] = ((byte)(uVar8 >> 7) & 1) * auVar9[7];
  bVar3 = (byte)(uVar8 >> 8);
  auVar10[8] = (bVar3 & 1) * auVar9[8];
  auVar10[9] = ((byte)(uVar8 >> 9) & 1) * auVar9[9];
  auVar10[10] = ((byte)(uVar8 >> 10) & 1) * auVar9[10];
  auVar10[0xb] = ((byte)(uVar8 >> 0xb) & 1) * auVar9[0xb];
  auVar10[0xc] = ((byte)(uVar8 >> 0xc) & 1) * auVar9[0xc];
  auVar10[0xd] = ((byte)(uVar8 >> 0xd) & 1) * auVar9[0xd];
  auVar10[0xe] = ((byte)(uVar8 >> 0xe) & 1) * auVar9[0xe];
  auVar10[0xf] = ((byte)(uVar8 >> 0xf) & 1) * auVar9[0xf];
  bVar4 = (byte)(uVar8 >> 0x10);
  auVar10[0x10] = (bVar4 & 1) * auVar9[0x10];
  auVar10[0x11] = ((byte)(uVar8 >> 0x11) & 1) * auVar9[0x11];
  auVar10[0x12] = ((byte)(uVar8 >> 0x12) & 1) * auVar9[0x12];
  auVar10[0x13] = ((byte)(uVar8 >> 0x13) & 1) * auVar9[0x13];
  auVar10[0x14] = ((byte)(uVar8 >> 0x14) & 1) * auVar9[0x14];
  auVar10[0x15] = ((byte)(uVar8 >> 0x15) & 1) * auVar9[0x15];
  auVar10[0x16] = ((byte)(uVar8 >> 0x16) & 1) * auVar9[0x16];
  auVar10[0x17] = ((byte)(uVar8 >> 0x17) & 1) * auVar9[0x17];
  bVar5 = (byte)(uVar8 >> 0x18);
  auVar10[0x18] = (bVar5 & 1) * auVar9[0x18];
  auVar10[0x19] = ((byte)(uVar8 >> 0x19) & 1) * auVar9[0x19];
  auVar10[0x1a] = ((byte)(uVar8 >> 0x1a) & 1) * auVar9[0x1a];
  auVar10[0x1b] = ((byte)(uVar8 >> 0x1b) & 1) * auVar9[0x1b];
  auVar10[0x1c] = ((byte)(uVar8 >> 0x1c) & 1) * auVar9[0x1c];
  auVar10._30_2_ = auVar9._30_2_;
  auVar10[0x1d] = ((byte)(uVar8 >> 0x1d) & 1) * auVar9[0x1d];
  auVar9 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2));
  auVar11[1] = ((byte)(uVar8 >> 1) & 1) * auVar9[1];
  auVar11[0] = (bVar2 & 1) * auVar9[0];
  auVar11[2] = ((byte)(uVar8 >> 2) & 1) * auVar9[2];
  auVar11[3] = ((byte)(uVar8 >> 3) & 1) * auVar9[3];
  auVar11[4] = ((byte)(uVar8 >> 4) & 1) * auVar9[4];
  auVar11[5] = ((byte)(uVar8 >> 5) & 1) * auVar9[5];
  auVar11[6] = ((byte)(uVar8 >> 6) & 1) * auVar9[6];
  auVar11[7] = ((byte)(uVar8 >> 7) & 1) * auVar9[7];
  auVar11[8] = (bVar3 & 1) * auVar9[8];
  auVar11[9] = ((byte)(uVar8 >> 9) & 1) * auVar9[9];
  auVar11[10] = ((byte)(uVar8 >> 10) & 1) * auVar9[10];
  auVar11[0xb] = ((byte)(uVar8 >> 0xb) & 1) * auVar9[0xb];
  auVar11[0xc] = ((byte)(uVar8 >> 0xc) & 1) * auVar9[0xc];
  auVar11[0xd] = ((byte)(uVar8 >> 0xd) & 1) * auVar9[0xd];
  auVar11[0xe] = ((byte)(uVar8 >> 0xe) & 1) * auVar9[0xe];
  auVar11[0xf] = ((byte)(uVar8 >> 0xf) & 1) * auVar9[0xf];
  auVar11[0x10] = (bVar4 & 1) * auVar9[0x10];
  auVar11[0x11] = ((byte)(uVar8 >> 0x11) & 1) * auVar9[0x11];
  auVar11[0x12] = ((byte)(uVar8 >> 0x12) & 1) * auVar9[0x12];
  auVar11[0x13] = ((byte)(uVar8 >> 0x13) & 1) * auVar9[0x13];
  auVar11[0x14] = ((byte)(uVar8 >> 0x14) & 1) * auVar9[0x14];
  auVar11[0x15] = ((byte)(uVar8 >> 0x15) & 1) * auVar9[0x15];
  auVar11[0x16] = ((byte)(uVar8 >> 0x16) & 1) * auVar9[0x16];
  auVar11[0x17] = ((byte)(uVar8 >> 0x17) & 1) * auVar9[0x17];
  auVar11[0x18] = (bVar5 & 1) * auVar9[0x18];
  auVar11[0x19] = ((byte)(uVar8 >> 0x19) & 1) * auVar9[0x19];
  auVar11[0x1a] = ((byte)(uVar8 >> 0x1a) & 1) * auVar9[0x1a];
  auVar11[0x1b] = ((byte)(uVar8 >> 0x1b) & 1) * auVar9[0x1b];
  auVar11[0x1c] = ((byte)(uVar8 >> 0x1c) & 1) * auVar9[0x1c];
  auVar11._30_2_ = auVar9._30_2_;
  auVar11[0x1d] = ((byte)(uVar8 >> 0x1d) & 1) * auVar9[0x1d];
  auVar9 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 2));
  auVar12[1] = ((byte)(uVar8 >> 1) & 1) * auVar9[1];
  auVar12[0] = (bVar2 & 1) * auVar9[0];
  auVar12[2] = ((byte)(uVar8 >> 2) & 1) * auVar9[2];
  auVar12[3] = ((byte)(uVar8 >> 3) & 1) * auVar9[3];
  auVar12[4] = ((byte)(uVar8 >> 4) & 1) * auVar9[4];
  auVar12[5] = ((byte)(uVar8 >> 5) & 1) * auVar9[5];
  auVar12[6] = ((byte)(uVar8 >> 6) & 1) * auVar9[6];
  auVar12[7] = ((byte)(uVar8 >> 7) & 1) * auVar9[7];
  auVar12[8] = (bVar3 & 1) * auVar9[8];
  auVar12[9] = ((byte)(uVar8 >> 9) & 1) * auVar9[9];
  auVar12[10] = ((byte)(uVar8 >> 10) & 1) * auVar9[10];
  auVar12[0xb] = ((byte)(uVar8 >> 0xb) & 1) * auVar9[0xb];
  auVar12[0xc] = ((byte)(uVar8 >> 0xc) & 1) * auVar9[0xc];
  auVar12[0xd] = ((byte)(uVar8 >> 0xd) & 1) * auVar9[0xd];
  auVar12[0xe] = ((byte)(uVar8 >> 0xe) & 1) * auVar9[0xe];
  auVar12[0xf] = ((byte)(uVar8 >> 0xf) & 1) * auVar9[0xf];
  auVar12[0x10] = (bVar4 & 1) * auVar9[0x10];
  auVar12[0x11] = ((byte)(uVar8 >> 0x11) & 1) * auVar9[0x11];
  auVar12[0x12] = ((byte)(uVar8 >> 0x12) & 1) * auVar9[0x12];
  auVar12[0x13] = ((byte)(uVar8 >> 0x13) & 1) * auVar9[0x13];
  auVar12[0x14] = ((byte)(uVar8 >> 0x14) & 1) * auVar9[0x14];
  auVar12[0x15] = ((byte)(uVar8 >> 0x15) & 1) * auVar9[0x15];
  auVar12[0x16] = ((byte)(uVar8 >> 0x16) & 1) * auVar9[0x16];
  auVar12[0x17] = ((byte)(uVar8 >> 0x17) & 1) * auVar9[0x17];
  auVar12[0x18] = (bVar5 & 1) * auVar9[0x18];
  auVar12[0x19] = ((byte)(uVar8 >> 0x19) & 1) * auVar9[0x19];
  auVar12[0x1a] = ((byte)(uVar8 >> 0x1a) & 1) * auVar9[0x1a];
  auVar12[0x1b] = ((byte)(uVar8 >> 0x1b) & 1) * auVar9[0x1b];
  auVar12[0x1c] = ((byte)(uVar8 >> 0x1c) & 1) * auVar9[0x1c];
  auVar12._30_2_ = auVar9._30_2_;
  auVar12[0x1d] = ((byte)(uVar8 >> 0x1d) & 1) * auVar9[0x1d];
  uVar7 = (param_4 & 0x1f) - 0x18;
  uVar7 = ~((int)uVar7 >> 0x1f) & uVar7;
  if ((int)uVar7 < 1) {
    auVar9 = (undefined1  [32])0x0;
    auVar14 = (undefined1  [32])0x0;
  }
  else {
    uVar6 = 0xffffffffffffffff >> ((ulonglong)-uVar7 & 0x3f);
    uVar8 = uVar6 & 0xffffffff;
    auVar9 = vmovdqu8_avx512vl(param_1[1]);
    bVar2 = (byte)uVar8;
    auVar13[1] = ((byte)(uVar8 >> 1) & 1) * auVar9[1];
    auVar13[0] = (bVar2 & 1) * auVar9[0];
    auVar13[2] = ((byte)(uVar8 >> 2) & 1) * auVar9[2];
    auVar13[3] = ((byte)(uVar8 >> 3) & 1) * auVar9[3];
    auVar13[4] = ((byte)(uVar8 >> 4) & 1) * auVar9[4];
    auVar13[5] = ((byte)(uVar8 >> 5) & 1) * auVar9[5];
    auVar13[6] = ((byte)(uVar8 >> 6) & 1) * auVar9[6];
    auVar13[7] = ((byte)(uVar8 >> 7) & 1) * auVar9[7];
    bVar3 = (byte)(uVar8 >> 8);
    auVar13[8] = (bVar3 & 1) * auVar9[8];
    auVar13[9] = ((byte)(uVar8 >> 9) & 1) * auVar9[9];
    auVar13[10] = ((byte)(uVar8 >> 10) & 1) * auVar9[10];
    auVar13[0xb] = ((byte)(uVar8 >> 0xb) & 1) * auVar9[0xb];
    auVar13[0xc] = ((byte)(uVar8 >> 0xc) & 1) * auVar9[0xc];
    auVar13[0xd] = ((byte)(uVar8 >> 0xd) & 1) * auVar9[0xd];
    auVar13[0xe] = ((byte)(uVar8 >> 0xe) & 1) * auVar9[0xe];
    auVar13[0xf] = ((byte)(uVar8 >> 0xf) & 1) * auVar9[0xf];
    bVar4 = (byte)(uVar8 >> 0x10);
    auVar13[0x10] = (bVar4 & 1) * auVar9[0x10];
    auVar13[0x11] = ((byte)(uVar8 >> 0x11) & 1) * auVar9[0x11];
    auVar13[0x12] = ((byte)(uVar8 >> 0x12) & 1) * auVar9[0x12];
    auVar13[0x13] = ((byte)(uVar8 >> 0x13) & 1) * auVar9[0x13];
    auVar13[0x14] = ((byte)(uVar8 >> 0x14) & 1) * auVar9[0x14];
    auVar13[0x15] = ((byte)(uVar8 >> 0x15) & 1) * auVar9[0x15];
    auVar13[0x16] = ((byte)(uVar8 >> 0x16) & 1) * auVar9[0x16];
    auVar13[0x17] = ((byte)(uVar8 >> 0x17) & 1) * auVar9[0x17];
    bVar5 = (byte)(uVar8 >> 0x18);
    auVar13[0x18] = (bVar5 & 1) * auVar9[0x18];
    auVar13[0x19] = ((byte)(uVar8 >> 0x19) & 1) * auVar9[0x19];
    auVar13[0x1a] = ((byte)(uVar8 >> 0x1a) & 1) * auVar9[0x1a];
    auVar13[0x1b] = ((byte)(uVar8 >> 0x1b) & 1) * auVar9[0x1b];
    auVar13[0x1c] = ((byte)(uVar8 >> 0x1c) & 1) * auVar9[0x1c];
    auVar13._30_2_ = auVar9._30_2_;
    auVar13[0x1d] = ((byte)(uVar8 >> 0x1d) & 1) * auVar9[0x1d];
    auVar14 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_1[1] + param_2));
    auVar9[1] = ((byte)(uVar8 >> 1) & 1) * auVar14[1];
    auVar9[0] = (bVar2 & 1) * auVar14[0];
    auVar9[2] = ((byte)(uVar8 >> 2) & 1) * auVar14[2];
    auVar9[3] = ((byte)(uVar8 >> 3) & 1) * auVar14[3];
    auVar9[4] = ((byte)(uVar8 >> 4) & 1) * auVar14[4];
    auVar9[5] = ((byte)(uVar8 >> 5) & 1) * auVar14[5];
    auVar9[6] = ((byte)(uVar8 >> 6) & 1) * auVar14[6];
    auVar9[7] = ((byte)(uVar8 >> 7) & 1) * auVar14[7];
    auVar9[8] = (bVar3 & 1) * auVar14[8];
    auVar9[9] = ((byte)(uVar8 >> 9) & 1) * auVar14[9];
    auVar9[10] = ((byte)(uVar8 >> 10) & 1) * auVar14[10];
    auVar9[0xb] = ((byte)(uVar8 >> 0xb) & 1) * auVar14[0xb];
    auVar9[0xc] = ((byte)(uVar8 >> 0xc) & 1) * auVar14[0xc];
    auVar9[0xd] = ((byte)(uVar8 >> 0xd) & 1) * auVar14[0xd];
    auVar9[0xe] = ((byte)(uVar8 >> 0xe) & 1) * auVar14[0xe];
    auVar9[0xf] = ((byte)(uVar8 >> 0xf) & 1) * auVar14[0xf];
    auVar9[0x10] = (bVar4 & 1) * auVar14[0x10];
    auVar9[0x11] = ((byte)(uVar8 >> 0x11) & 1) * auVar14[0x11];
    auVar9[0x12] = ((byte)(uVar8 >> 0x12) & 1) * auVar14[0x12];
    auVar9[0x13] = ((byte)(uVar8 >> 0x13) & 1) * auVar14[0x13];
    auVar9[0x14] = ((byte)(uVar8 >> 0x14) & 1) * auVar14[0x14];
    auVar9[0x15] = ((byte)(uVar8 >> 0x15) & 1) * auVar14[0x15];
    auVar9[0x16] = ((byte)(uVar8 >> 0x16) & 1) * auVar14[0x16];
    auVar9[0x17] = ((byte)(uVar8 >> 0x17) & 1) * auVar14[0x17];
    auVar9[0x18] = (bVar5 & 1) * auVar14[0x18];
    auVar9[0x19] = ((byte)(uVar8 >> 0x19) & 1) * auVar14[0x19];
    auVar9[0x1a] = ((byte)(uVar8 >> 0x1a) & 1) * auVar14[0x1a];
    auVar9[0x1b] = ((byte)(uVar8 >> 0x1b) & 1) * auVar14[0x1b];
    auVar9[0x1c] = ((byte)(uVar8 >> 0x1c) & 1) * auVar14[0x1c];
    auVar9._30_2_ = auVar14._30_2_;
    auVar9[0x1d] = ((byte)(uVar8 >> 0x1d) & 1) * auVar14[0x1d];
    auVar15 = vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
    auVar14[1] = ((byte)(uVar8 >> 1) & 1) * auVar15[1];
    auVar14[0] = (bVar2 & 1) * auVar15[0];
    auVar14[2] = ((byte)(uVar8 >> 2) & 1) * auVar15[2];
    auVar14[3] = ((byte)(uVar8 >> 3) & 1) * auVar15[3];
    auVar14[4] = ((byte)(uVar8 >> 4) & 1) * auVar15[4];
    auVar14[5] = ((byte)(uVar8 >> 5) & 1) * auVar15[5];
    auVar14[6] = ((byte)(uVar8 >> 6) & 1) * auVar15[6];
    auVar14[7] = ((byte)(uVar8 >> 7) & 1) * auVar15[7];
    auVar14[8] = (bVar3 & 1) * auVar15[8];
    auVar14[9] = ((byte)(uVar8 >> 9) & 1) * auVar15[9];
    auVar14[10] = ((byte)(uVar8 >> 10) & 1) * auVar15[10];
    auVar14[0xb] = ((byte)(uVar8 >> 0xb) & 1) * auVar15[0xb];
    auVar14[0xc] = ((byte)(uVar8 >> 0xc) & 1) * auVar15[0xc];
    auVar14[0xd] = ((byte)(uVar8 >> 0xd) & 1) * auVar15[0xd];
    auVar14[0xe] = ((byte)(uVar8 >> 0xe) & 1) * auVar15[0xe];
    auVar14[0xf] = ((byte)(uVar8 >> 0xf) & 1) * auVar15[0xf];
    auVar14[0x10] = (bVar4 & 1) * auVar15[0x10];
    auVar14[0x11] = ((byte)(uVar8 >> 0x11) & 1) * auVar15[0x11];
    auVar14[0x12] = ((byte)(uVar8 >> 0x12) & 1) * auVar15[0x12];
    auVar14[0x13] = ((byte)(uVar8 >> 0x13) & 1) * auVar15[0x13];
    auVar14[0x14] = ((byte)(uVar8 >> 0x14) & 1) * auVar15[0x14];
    auVar14[0x15] = ((byte)(uVar8 >> 0x15) & 1) * auVar15[0x15];
    auVar14[0x16] = ((byte)(uVar8 >> 0x16) & 1) * auVar15[0x16];
    auVar14[0x17] = ((byte)(uVar8 >> 0x17) & 1) * auVar15[0x17];
    auVar14[0x18] = (bVar5 & 1) * auVar15[0x18];
    auVar14[0x19] = ((byte)(uVar8 >> 0x19) & 1) * auVar15[0x19];
    auVar14[0x1a] = ((byte)(uVar8 >> 0x1a) & 1) * auVar15[0x1a];
    auVar14[0x1b] = ((byte)(uVar8 >> 0x1b) & 1) * auVar15[0x1b];
    auVar14[0x1c] = ((byte)(uVar8 >> 0x1c) & 1) * auVar15[0x1c];
    auVar14._30_2_ = auVar15._30_2_;
    auVar14[0x1d] = ((byte)(uVar8 >> 0x1d) & 1) * auVar15[0x1d];
  }
  auVar10 = vpmaxub_avx2(auVar10,auVar11);
  auVar9 = vpmaxub_avx2(auVar13,auVar9);
  auVar10 = vpmaxub_avx2(auVar10,auVar12);
  auVar9 = vpmaxub_avx2(auVar9,auVar14);
  auVar9 = vshufi32x4_avx512vl(auVar10,auVar9,1);
  vpalignr_avx2(auVar9,auVar10,4);
  vpalignr_avx512vl(auVar9,auVar10);
  *(byte *)(param_2 + -0x1f) = *(byte *)(param_2 + -0x1f) | (byte)(uVar6 >> 8);
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

