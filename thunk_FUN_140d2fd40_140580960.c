
void thunk_FUN_140d2fd40(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
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
  undefined1 in_ZMM0 [64];
  
  lVar2 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)(param_4 & 0xffffffffffffff80)) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        auVar7 = vpmaxub_avx512bw(in_ZMM0,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar8 = vpmaxub_avx512bw(in_ZMM0,param_1[1]);
        auVar7 = vpmaxub_avx512bw(auVar7,*(undefined1 (*) [64])(*param_1 + param_2));
        auVar8 = vpmaxub_avx512bw(auVar8,*(undefined1 (*) [64])(param_1[1] + param_2));
        auVar7 = vpmaxub_avx512bw(auVar7,*(undefined1 (*) [64])(*param_1 + param_2 * 2));
        auVar8 = vpmaxub_avx512bw(auVar8,*(undefined1 (*) [64])(param_1[1] + param_2 * 2));
        *param_3 = auVar7;
        param_3[1] = auVar8;
        param_1 = param_1 + 2;
        param_3 = param_3 + 2;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
    }
  }
  else if (param_5 == 5) {
    if (0 < (longlong)(param_4 & 0xffffffffffffff80)) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        auVar7 = vpmaxub_avx512bw(in_ZMM0,*param_1);
        lVar2 = lVar2 + 0x80;
        auVar8 = vpmaxub_avx512bw(in_ZMM0,param_1[1]);
        auVar7 = vpmaxub_avx512bw(auVar7,*(undefined1 (*) [64])(*param_1 + param_2));
        auVar8 = vpmaxub_avx512bw(auVar8,*(undefined1 (*) [64])(param_1[1] + param_2));
        auVar7 = vpmaxub_avx512bw(auVar7,*(undefined1 (*) [64])(*param_1 + param_2 * 2));
        auVar8 = vpmaxub_avx512bw(auVar8,*(undefined1 (*) [64])(param_1[1] + param_2 * 2));
        auVar7 = vpmaxub_avx512bw(auVar7,*(undefined1 (*) [64])(*param_1 + param_2 * 3));
        auVar8 = vpmaxub_avx512bw(auVar8,*(undefined1 (*) [64])(param_1[1] + param_2 * 3));
        auVar7 = vpmaxub_avx512bw(auVar7,*(undefined1 (*) [64])(*param_1 + param_2 * 4));
        auVar8 = vpmaxub_avx512bw(auVar8,*(undefined1 (*) [64])(param_1[1] + param_2 * 4));
        *param_3 = auVar7;
        param_3[1] = auVar8;
        param_1 = param_1 + 2;
        param_3 = param_3 + 2;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
    }
  }
  else {
    if (0 < (longlong)(param_4 & 0xffffffffffffff00)) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        lVar5 = 0;
        pauVar4 = param_1;
        auVar7 = in_ZMM0;
        auVar8 = in_ZMM0;
        auVar10 = in_ZMM0;
        auVar9 = in_ZMM0;
        if (0 < param_5) {
          do {
            lVar5 = lVar5 + 1;
            auVar9 = vpmaxub_avx512bw(auVar9,*pauVar4);
            auVar10 = vpmaxub_avx512bw(auVar10,pauVar4[1]);
            auVar8 = vpmaxub_avx512bw(auVar8,pauVar4[2]);
            auVar7 = vpmaxub_avx512bw(auVar7,pauVar4[3]);
            pauVar4 = (undefined1 (*) [64])(*pauVar4 + param_2);
          } while (lVar5 < param_5);
        }
        lVar2 = lVar2 + 0x100;
        param_1 = param_1 + 4;
        *param_3 = auVar9;
        param_3[1] = auVar10;
        param_3[2] = auVar8;
        param_3[3] = auVar7;
        param_3 = param_3 + 4;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff00));
    }
    if (lVar2 < (longlong)(param_4 & 0xffffffffffffff80)) {
      in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
      do {
        lVar5 = 0;
        pauVar4 = param_1;
        auVar7 = in_ZMM0;
        auVar8 = in_ZMM0;
        if (0 < param_5) {
          do {
            lVar5 = lVar5 + 1;
            auVar8 = vpmaxub_avx512bw(auVar8,*pauVar4);
            auVar7 = vpmaxub_avx512bw(auVar7,pauVar4[1]);
            pauVar4 = (undefined1 (*) [64])(*pauVar4 + param_2);
          } while (lVar5 < param_5);
        }
        lVar2 = lVar2 + 0x80;
        param_1 = param_1 + 2;
        *param_3 = auVar8;
        param_3[1] = auVar7;
        param_3 = param_3 + 2;
      } while (lVar2 < (longlong)(param_4 & 0xffffffffffffff80));
    }
  }
  if (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    in_ZMM0 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    do {
      lVar6 = 0;
      lVar5 = 0;
      auVar7 = in_ZMM0;
      if (0 < param_5) {
        do {
          lVar6 = lVar6 + 1;
          auVar7 = vpmaxub_avx512bw(auVar7,*(undefined1 (*) [64])(*param_1 + lVar5));
          lVar5 = lVar5 + param_2;
        } while (lVar6 < param_5);
      }
      lVar2 = lVar2 + 0x40;
      param_1 = param_1 + 1;
      *param_3 = auVar7;
      param_3 = param_3 + 1;
    } while (lVar2 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  if (lVar2 < (longlong)param_4) {
    uVar3 = 0xffffffffffffffff >> ((ulonglong)(uint)-(int)param_4 & 0x3f);
    lVar5 = 0;
    lVar2 = 0;
    auVar7 = vpxord_avx512f(in_ZMM0,in_ZMM0);
    if (0 < param_5) {
      do {
        auVar8 = vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_1 + lVar2));
        auVar10[1] = ((byte)(uVar3 >> 1) & 1) * auVar8[1];
        auVar10[0] = ((byte)uVar3 & 1) * auVar8[0];
        auVar10[2] = ((byte)(uVar3 >> 2) & 1) * auVar8[2];
        auVar10[3] = ((byte)(uVar3 >> 3) & 1) * auVar8[3];
        auVar10[4] = ((byte)(uVar3 >> 4) & 1) * auVar8[4];
        auVar10[5] = ((byte)(uVar3 >> 5) & 1) * auVar8[5];
        auVar10[6] = ((byte)(uVar3 >> 6) & 1) * auVar8[6];
        auVar10[7] = ((byte)(uVar3 >> 7) & 1) * auVar8[7];
        auVar10[8] = ((byte)(uVar3 >> 8) & 1) * auVar8[8];
        auVar10[9] = ((byte)(uVar3 >> 9) & 1) * auVar8[9];
        auVar10[10] = ((byte)(uVar3 >> 10) & 1) * auVar8[10];
        auVar10[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar8[0xb];
        auVar10[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar8[0xc];
        auVar10[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar8[0xd];
        auVar10[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar8[0xe];
        auVar10[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar8[0xf];
        auVar10[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar8[0x10];
        auVar10[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar8[0x11];
        auVar10[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar8[0x12];
        auVar10[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar8[0x13];
        auVar10[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar8[0x14];
        auVar10[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar8[0x15];
        auVar10[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar8[0x16];
        auVar10[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar8[0x17];
        auVar10[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar8[0x18];
        auVar10[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar8[0x19];
        auVar10[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar8[0x1a];
        auVar10[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar8[0x1b];
        auVar10[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar8[0x1c];
        auVar10[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar8[0x1d];
        auVar10[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar8[0x1e];
        auVar10[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar8[0x1f];
        auVar10[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar8[0x20];
        auVar10[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar8[0x21];
        auVar10[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar8[0x22];
        auVar10[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar8[0x23];
        auVar10[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar8[0x24];
        auVar10[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar8[0x25];
        auVar10[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar8[0x26];
        auVar10[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar8[0x27];
        auVar10[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar8[0x28];
        auVar10[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar8[0x29];
        auVar10[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar8[0x2a];
        auVar10[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar8[0x2b];
        auVar10[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar8[0x2c];
        auVar10[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar8[0x2d];
        auVar10[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar8[0x2e];
        auVar10[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar8[0x2f];
        auVar10[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar8[0x30];
        auVar10[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar8[0x31];
        auVar10[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar8[0x32];
        auVar10[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar8[0x33];
        auVar10[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar8[0x34];
        auVar10[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar8[0x35];
        auVar10[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar8[0x36];
        auVar10[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar8[0x37];
        bVar1 = (byte)(uVar3 >> 0x38);
        auVar10[0x38] = (bVar1 & 1) * auVar8[0x38];
        auVar10[0x39] = (bVar1 >> 1 & 1) * auVar8[0x39];
        auVar10[0x3a] = (bVar1 >> 2 & 1) * auVar8[0x3a];
        auVar10[0x3b] = (bVar1 >> 3 & 1) * auVar8[0x3b];
        auVar10[0x3c] = (bVar1 >> 4 & 1) * auVar8[0x3c];
        auVar10[0x3d] = (bVar1 >> 5 & 1) * auVar8[0x3d];
        auVar10[0x3e] = (bVar1 >> 6 & 1) * auVar8[0x3e];
        auVar10[0x3f] = -((char)bVar1 >> 7) * auVar8[0x3f];
        lVar5 = lVar5 + 1;
        lVar2 = lVar2 + param_2;
        auVar7 = vpmaxub_avx512bw(auVar7,auVar10);
      } while (lVar5 < param_5);
    }
    auVar7 = vmovdqu8_avx512bw(auVar7);
    *param_3 = auVar7;
  }
  return;
}

