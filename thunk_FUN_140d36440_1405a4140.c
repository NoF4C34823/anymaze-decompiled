
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d36440(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                        ulonglong param_4,longlong param_5)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [64];
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  
  lVar2 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)(param_4 & 0xffffffffffffff80)) {
      auVar7 = vmovdqu32_avx512f(_DAT_1430924c0);
      do {
        auVar8 = vpminub_avx512bw(auVar7,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar9 = vpminub_avx512bw(auVar7,param_1[1]);
        auVar8 = vpminub_avx512bw(auVar8,*(undefined1 (*) [64])(*param_1 + param_2));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[1] + param_2));
        auVar8 = vpminub_avx512bw(auVar8,*(undefined1 (*) [64])(*param_1 + param_2 * 2));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[1] + param_2 * 2));
        *param_3 = auVar8;
        param_3[1] = auVar9;
        param_1 = param_1 + 2;
        param_3 = param_3 + 2;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
    }
  }
  else if (param_5 == 5) {
    if (0 < (longlong)(param_4 & 0xffffffffffffff80)) {
      auVar7 = vmovdqu32_avx512f(_DAT_1430924c0);
      do {
        auVar8 = vpminub_avx512bw(auVar7,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar9 = vpminub_avx512bw(auVar7,param_1[1]);
        auVar8 = vpminub_avx512bw(auVar8,*(undefined1 (*) [64])(*param_1 + param_2));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[1] + param_2));
        auVar8 = vpminub_avx512bw(auVar8,*(undefined1 (*) [64])(*param_1 + param_2 * 2));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[1] + param_2 * 2));
        auVar8 = vpminub_avx512bw(auVar8,*(undefined1 (*) [64])(*param_1 + param_2 * 3));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[1] + param_2 * 3));
        auVar8 = vpminub_avx512bw(auVar8,*(undefined1 (*) [64])(*param_1 + param_2 * 4));
        auVar9 = vpminub_avx512bw(auVar9,*(undefined1 (*) [64])(param_1[1] + param_2 * 4));
        *param_3 = auVar8;
        param_3[1] = auVar9;
        param_1 = param_1 + 2;
        param_3 = param_3 + 2;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
    }
  }
  else {
    if (0 < (longlong)(param_4 & 0xffffffffffffff00)) {
      auVar7 = vmovdqu32_avx512f(_DAT_1430924c0);
      do {
        lVar5 = 0;
        pauVar4 = param_1;
        auVar8 = auVar7;
        auVar9 = auVar7;
        auVar11 = auVar7;
        auVar10 = auVar7;
        if (0 < param_5) {
          do {
            lVar5 = lVar5 + 1;
            auVar10 = vpminub_avx512bw(auVar10,*pauVar4);
            auVar11 = vpminub_avx512bw(auVar11,pauVar4[1]);
            auVar9 = vpminub_avx512bw(auVar9,pauVar4[2]);
            auVar8 = vpminub_avx512bw(auVar8,pauVar4[3]);
            pauVar4 = (undefined1 (*) [64])(*pauVar4 + param_2);
          } while (lVar5 < param_5);
        }
        lVar2 = lVar2 + 0x100;
        param_1 = param_1 + 4;
        *param_3 = auVar10;
        param_3[1] = auVar11;
        param_3[2] = auVar9;
        param_3[3] = auVar8;
        param_3 = param_3 + 4;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff00));
    }
    if (lVar2 < (longlong)(param_4 & 0xffffffffffffff80)) {
      auVar7 = vmovdqu32_avx512f(_DAT_1430924c0);
      do {
        lVar5 = 0;
        pauVar4 = param_1;
        auVar8 = auVar7;
        auVar9 = auVar7;
        if (0 < param_5) {
          do {
            lVar5 = lVar5 + 1;
            auVar9 = vpminub_avx512bw(auVar9,*pauVar4);
            auVar8 = vpminub_avx512bw(auVar8,pauVar4[1]);
            pauVar4 = (undefined1 (*) [64])(*pauVar4 + param_2);
          } while (lVar5 < param_5);
        }
        lVar2 = lVar2 + 0x80;
        param_1 = param_1 + 2;
        *param_3 = auVar9;
        param_3[1] = auVar8;
        param_3 = param_3 + 2;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
    }
  }
  if (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    auVar7 = vmovdqu32_avx512f(_DAT_1430924c0);
    do {
      lVar6 = 0;
      lVar5 = 0;
      auVar8 = auVar7;
      if (0 < param_5) {
        do {
          lVar6 = lVar6 + 1;
          auVar8 = vpminub_avx512bw(auVar8,*(undefined1 (*) [64])(*param_1 + lVar5));
          lVar5 = lVar5 + param_2;
        } while (lVar6 < param_5);
      }
      lVar2 = lVar2 + 0x40;
      param_1 = param_1 + 1;
      *param_3 = auVar8;
      param_3 = param_3 + 1;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  if (lVar2 < (longlong)param_4) {
    auVar7 = vmovdqu32_avx512f(_DAT_1430924c0);
    uVar3 = 0xffffffffffffffff >> ((ulonglong)(uint)-(int)param_4 & 0x3f);
    lVar5 = 0;
    lVar2 = 0;
    if (0 < param_5) {
      do {
        auVar9 = vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar2));
        auVar8[1] = ((byte)(uVar3 >> 1) & 1) * auVar9[1];
        auVar8[0] = ((byte)uVar3 & 1) * auVar9[0];
        auVar8[2] = ((byte)(uVar3 >> 2) & 1) * auVar9[2];
        auVar8[3] = ((byte)(uVar3 >> 3) & 1) * auVar9[3];
        auVar8[4] = ((byte)(uVar3 >> 4) & 1) * auVar9[4];
        auVar8[5] = ((byte)(uVar3 >> 5) & 1) * auVar9[5];
        auVar8[6] = ((byte)(uVar3 >> 6) & 1) * auVar9[6];
        auVar8[7] = ((byte)(uVar3 >> 7) & 1) * auVar9[7];
        auVar8[8] = ((byte)(uVar3 >> 8) & 1) * auVar9[8];
        auVar8[9] = ((byte)(uVar3 >> 9) & 1) * auVar9[9];
        auVar8[10] = ((byte)(uVar3 >> 10) & 1) * auVar9[10];
        auVar8[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar9[0xb];
        auVar8[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar9[0xc];
        auVar8[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar9[0xd];
        auVar8[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar9[0xe];
        auVar8[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar9[0xf];
        auVar8[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar9[0x10];
        auVar8[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar9[0x11];
        auVar8[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar9[0x12];
        auVar8[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar9[0x13];
        auVar8[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar9[0x14];
        auVar8[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar9[0x15];
        auVar8[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar9[0x16];
        auVar8[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar9[0x17];
        auVar8[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar9[0x18];
        auVar8[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar9[0x19];
        auVar8[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar9[0x1a];
        auVar8[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar9[0x1b];
        auVar8[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar9[0x1c];
        auVar8[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar9[0x1d];
        auVar8[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar9[0x1e];
        auVar8[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar9[0x1f];
        auVar8[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar9[0x20];
        auVar8[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar9[0x21];
        auVar8[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar9[0x22];
        auVar8[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar9[0x23];
        auVar8[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar9[0x24];
        auVar8[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar9[0x25];
        auVar8[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar9[0x26];
        auVar8[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar9[0x27];
        auVar8[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar9[0x28];
        auVar8[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar9[0x29];
        auVar8[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar9[0x2a];
        auVar8[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar9[0x2b];
        auVar8[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar9[0x2c];
        auVar8[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar9[0x2d];
        auVar8[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar9[0x2e];
        auVar8[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar9[0x2f];
        auVar8[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar9[0x30];
        auVar8[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar9[0x31];
        auVar8[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar9[0x32];
        auVar8[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar9[0x33];
        auVar8[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar9[0x34];
        auVar8[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar9[0x35];
        auVar8[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar9[0x36];
        auVar8[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar9[0x37];
        bVar1 = (byte)(uVar3 >> 0x38);
        auVar8[0x38] = (bVar1 & 1) * auVar9[0x38];
        auVar8[0x39] = (bVar1 >> 1 & 1) * auVar9[0x39];
        auVar8[0x3a] = (bVar1 >> 2 & 1) * auVar9[0x3a];
        auVar8[0x3b] = (bVar1 >> 3 & 1) * auVar9[0x3b];
        auVar8[0x3c] = (bVar1 >> 4 & 1) * auVar9[0x3c];
        auVar8[0x3d] = (bVar1 >> 5 & 1) * auVar9[0x3d];
        auVar8[0x3e] = (bVar1 >> 6 & 1) * auVar9[0x3e];
        auVar8[0x3f] = -((char)bVar1 >> 7) * auVar9[0x3f];
        lVar5 = lVar5 + 1;
        lVar2 = lVar2 + param_2;
        auVar7 = vpminub_avx512bw(auVar7,auVar8);
      } while (lVar5 < param_5);
    }
    auVar7 = vmovdqu8_avx512bw(auVar7);
    *param_3 = auVar7;
  }
  return;
}

