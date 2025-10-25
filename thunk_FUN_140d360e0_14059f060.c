
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d360e0(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulonglong param_3,
                        longlong param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [64];
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  
  lVar2 = 0;
  lVar3 = (longlong)param_5;
  if (param_4 == 3) {
    if (0 < (longlong)(param_3 & 0xffffffffffffff80)) {
      auVar8 = vmovdqu32_avx512f(_DAT_143092480);
      do {
        auVar9 = vpminub_avx512bw(auVar8,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar10 = vpminub_avx512bw(auVar8,param_1[1]);
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(*param_1 + lVar3));
        auVar10 = vpminub_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[1] + lVar3));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(*param_1 + lVar3 * 2));
        auVar10 = vpminub_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[1] + lVar3 * 2));
        *param_2 = auVar9;
        param_2[1] = auVar10;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffff80));
    }
  }
  else if (param_4 == 5) {
    if (0 < (longlong)(param_3 & 0xffffffffffffff80)) {
      auVar8 = vmovdqu32_avx512f(_DAT_143092480);
      do {
        auVar9 = vpminub_avx512bw(auVar8,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar10 = vpminub_avx512bw(auVar8,param_1[1]);
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(*param_1 + lVar3));
        auVar10 = vpminub_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[1] + lVar3));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(*param_1 + lVar3 * 2));
        auVar10 = vpminub_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[1] + lVar3 * 2));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(*param_1 + lVar3 * 3));
        auVar10 = vpminub_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[1] + lVar3 * 3));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(*param_1 + lVar3 * 4));
        auVar10 = vpminub_avx512bw(auVar10,*(undefined1 (*) [64])(param_1[1] + lVar3 * 4));
        *param_2 = auVar9;
        param_2[1] = auVar10;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffff80));
    }
  }
  else {
    if (0 < (longlong)(param_3 & 0xffffffffffffff00)) {
      auVar8 = vmovdqu32_avx512f(_DAT_143092480);
      do {
        lVar6 = 0;
        pauVar5 = param_1;
        auVar9 = auVar8;
        auVar10 = auVar8;
        auVar12 = auVar8;
        auVar11 = auVar8;
        if (0 < param_4) {
          do {
            lVar6 = lVar6 + 1;
            auVar11 = vpminub_avx512bw(auVar11,*pauVar5);
            auVar12 = vpminub_avx512bw(auVar12,pauVar5[1]);
            auVar10 = vpminub_avx512bw(auVar10,pauVar5[2]);
            auVar9 = vpminub_avx512bw(auVar9,pauVar5[3]);
            pauVar5 = (undefined1 (*) [64])(*pauVar5 + lVar3);
          } while (lVar6 < param_4);
        }
        lVar2 = lVar2 + 0x100;
        param_1 = param_1 + 4;
        *param_2 = auVar11;
        param_2[1] = auVar12;
        param_2[2] = auVar10;
        param_2[3] = auVar9;
        param_2 = param_2 + 4;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffff00));
    }
    if (lVar2 < (longlong)(param_3 & 0xffffffffffffff80)) {
      auVar8 = vmovdqu32_avx512f(_DAT_143092480);
      do {
        lVar6 = 0;
        pauVar5 = param_1;
        auVar9 = auVar8;
        auVar10 = auVar8;
        if (0 < param_4) {
          do {
            lVar6 = lVar6 + 1;
            auVar10 = vpminub_avx512bw(auVar10,*pauVar5);
            auVar9 = vpminub_avx512bw(auVar9,pauVar5[1]);
            pauVar5 = (undefined1 (*) [64])(*pauVar5 + lVar3);
          } while (lVar6 < param_4);
        }
        lVar2 = lVar2 + 0x80;
        param_1 = param_1 + 2;
        *param_2 = auVar10;
        param_2[1] = auVar9;
        param_2 = param_2 + 2;
      } while (lVar2 < (longlong)(param_3 & 0xffffffffffffff80));
    }
  }
  if (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0)) {
    auVar8 = vmovdqu32_avx512f(_DAT_143092480);
    do {
      lVar7 = 0;
      lVar6 = 0;
      auVar9 = auVar8;
      if (0 < param_4) {
        do {
          lVar7 = lVar7 + 1;
          auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(*param_1 + lVar6));
          lVar6 = lVar6 + lVar3;
        } while (lVar7 < param_4);
      }
      lVar2 = lVar2 + 0x40;
      param_1 = param_1 + 1;
      *param_2 = auVar9;
      param_2 = param_2 + 1;
    } while (lVar2 < (longlong)(param_3 & 0xffffffffffffffc0));
  }
  if (lVar2 < (longlong)param_3) {
    auVar8 = vmovdqu32_avx512f(_DAT_143092480);
    uVar4 = 0xffffffffffffffff >> ((ulonglong)(uint)-(int)param_3 & 0x3f);
    lVar6 = 0;
    lVar2 = 0;
    if (0 < param_4) {
      do {
        auVar10 = vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar2));
        auVar9[1] = ((byte)(uVar4 >> 1) & 1) * auVar10[1];
        auVar9[0] = ((byte)uVar4 & 1) * auVar10[0];
        auVar9[2] = ((byte)(uVar4 >> 2) & 1) * auVar10[2];
        auVar9[3] = ((byte)(uVar4 >> 3) & 1) * auVar10[3];
        auVar9[4] = ((byte)(uVar4 >> 4) & 1) * auVar10[4];
        auVar9[5] = ((byte)(uVar4 >> 5) & 1) * auVar10[5];
        auVar9[6] = ((byte)(uVar4 >> 6) & 1) * auVar10[6];
        auVar9[7] = ((byte)(uVar4 >> 7) & 1) * auVar10[7];
        auVar9[8] = ((byte)(uVar4 >> 8) & 1) * auVar10[8];
        auVar9[9] = ((byte)(uVar4 >> 9) & 1) * auVar10[9];
        auVar9[10] = ((byte)(uVar4 >> 10) & 1) * auVar10[10];
        auVar9[0xb] = ((byte)(uVar4 >> 0xb) & 1) * auVar10[0xb];
        auVar9[0xc] = ((byte)(uVar4 >> 0xc) & 1) * auVar10[0xc];
        auVar9[0xd] = ((byte)(uVar4 >> 0xd) & 1) * auVar10[0xd];
        auVar9[0xe] = ((byte)(uVar4 >> 0xe) & 1) * auVar10[0xe];
        auVar9[0xf] = ((byte)(uVar4 >> 0xf) & 1) * auVar10[0xf];
        auVar9[0x10] = ((byte)(uVar4 >> 0x10) & 1) * auVar10[0x10];
        auVar9[0x11] = ((byte)(uVar4 >> 0x11) & 1) * auVar10[0x11];
        auVar9[0x12] = ((byte)(uVar4 >> 0x12) & 1) * auVar10[0x12];
        auVar9[0x13] = ((byte)(uVar4 >> 0x13) & 1) * auVar10[0x13];
        auVar9[0x14] = ((byte)(uVar4 >> 0x14) & 1) * auVar10[0x14];
        auVar9[0x15] = ((byte)(uVar4 >> 0x15) & 1) * auVar10[0x15];
        auVar9[0x16] = ((byte)(uVar4 >> 0x16) & 1) * auVar10[0x16];
        auVar9[0x17] = ((byte)(uVar4 >> 0x17) & 1) * auVar10[0x17];
        auVar9[0x18] = ((byte)(uVar4 >> 0x18) & 1) * auVar10[0x18];
        auVar9[0x19] = ((byte)(uVar4 >> 0x19) & 1) * auVar10[0x19];
        auVar9[0x1a] = ((byte)(uVar4 >> 0x1a) & 1) * auVar10[0x1a];
        auVar9[0x1b] = ((byte)(uVar4 >> 0x1b) & 1) * auVar10[0x1b];
        auVar9[0x1c] = ((byte)(uVar4 >> 0x1c) & 1) * auVar10[0x1c];
        auVar9[0x1d] = ((byte)(uVar4 >> 0x1d) & 1) * auVar10[0x1d];
        auVar9[0x1e] = ((byte)(uVar4 >> 0x1e) & 1) * auVar10[0x1e];
        auVar9[0x1f] = ((byte)(uVar4 >> 0x1f) & 1) * auVar10[0x1f];
        auVar9[0x20] = ((byte)(uVar4 >> 0x20) & 1) * auVar10[0x20];
        auVar9[0x21] = ((byte)(uVar4 >> 0x21) & 1) * auVar10[0x21];
        auVar9[0x22] = ((byte)(uVar4 >> 0x22) & 1) * auVar10[0x22];
        auVar9[0x23] = ((byte)(uVar4 >> 0x23) & 1) * auVar10[0x23];
        auVar9[0x24] = ((byte)(uVar4 >> 0x24) & 1) * auVar10[0x24];
        auVar9[0x25] = ((byte)(uVar4 >> 0x25) & 1) * auVar10[0x25];
        auVar9[0x26] = ((byte)(uVar4 >> 0x26) & 1) * auVar10[0x26];
        auVar9[0x27] = ((byte)(uVar4 >> 0x27) & 1) * auVar10[0x27];
        auVar9[0x28] = ((byte)(uVar4 >> 0x28) & 1) * auVar10[0x28];
        auVar9[0x29] = ((byte)(uVar4 >> 0x29) & 1) * auVar10[0x29];
        auVar9[0x2a] = ((byte)(uVar4 >> 0x2a) & 1) * auVar10[0x2a];
        auVar9[0x2b] = ((byte)(uVar4 >> 0x2b) & 1) * auVar10[0x2b];
        auVar9[0x2c] = ((byte)(uVar4 >> 0x2c) & 1) * auVar10[0x2c];
        auVar9[0x2d] = ((byte)(uVar4 >> 0x2d) & 1) * auVar10[0x2d];
        auVar9[0x2e] = ((byte)(uVar4 >> 0x2e) & 1) * auVar10[0x2e];
        auVar9[0x2f] = ((byte)(uVar4 >> 0x2f) & 1) * auVar10[0x2f];
        auVar9[0x30] = ((byte)(uVar4 >> 0x30) & 1) * auVar10[0x30];
        auVar9[0x31] = ((byte)(uVar4 >> 0x31) & 1) * auVar10[0x31];
        auVar9[0x32] = ((byte)(uVar4 >> 0x32) & 1) * auVar10[0x32];
        auVar9[0x33] = ((byte)(uVar4 >> 0x33) & 1) * auVar10[0x33];
        auVar9[0x34] = ((byte)(uVar4 >> 0x34) & 1) * auVar10[0x34];
        auVar9[0x35] = ((byte)(uVar4 >> 0x35) & 1) * auVar10[0x35];
        auVar9[0x36] = ((byte)(uVar4 >> 0x36) & 1) * auVar10[0x36];
        auVar9[0x37] = ((byte)(uVar4 >> 0x37) & 1) * auVar10[0x37];
        bVar1 = (byte)(uVar4 >> 0x38);
        auVar9[0x38] = (bVar1 & 1) * auVar10[0x38];
        auVar9[0x39] = (bVar1 >> 1 & 1) * auVar10[0x39];
        auVar9[0x3a] = (bVar1 >> 2 & 1) * auVar10[0x3a];
        auVar9[0x3b] = (bVar1 >> 3 & 1) * auVar10[0x3b];
        auVar9[0x3c] = (bVar1 >> 4 & 1) * auVar10[0x3c];
        auVar9[0x3d] = (bVar1 >> 5 & 1) * auVar10[0x3d];
        auVar9[0x3e] = (bVar1 >> 6 & 1) * auVar10[0x3e];
        auVar9[0x3f] = -((char)bVar1 >> 7) * auVar10[0x3f];
        lVar6 = lVar6 + 1;
        lVar2 = lVar2 + lVar3;
        auVar8 = vpminub_avx512bw(auVar8,auVar9);
      } while (lVar6 < param_4);
    }
    auVar8 = vmovdqu8_avx512bw(auVar8);
    *param_2 = auVar8;
  }
  return;
}

