
/* WARNING: Instruction at (ram,0x0001405beca0) overlaps instruction at (ram,0x0001405bec9d)
    */

void FUN_1405be600(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                  longlong param_4,char *param_5,longlong param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [58];
  undefined1 auVar8 [58];
  undefined1 auVar9 [58];
  undefined1 auVar10 [58];
  char cVar11;
  char cVar13;
  uint7 uVar15;
  int *piVar12;
  longlong lVar16;
  char *pcVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  char *pcVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [64];
  undefined1 *puVar27;
  uint uVar28;
  undefined1 (*pauVar29) [64];
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  uint uVar33;
  ulonglong unaff_R14;
  undefined1 (*pauVar34) [32];
  longlong lVar35;
  longlong lVar36;
  undefined1 (*pauVar37) [32];
  undefined2 in_FS;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined1 auVar40 [32];
  undefined1 in_ZmmResult [64];
  undefined1 auVar45 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar51 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar58 [64];
  undefined1 auVar60 [64];
  undefined1 auVar62 [64];
  undefined1 auVar64 [64];
  undefined1 auVar66 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar72 [64];
  undefined1 auVar74 [64];
  undefined1 auVar76 [64];
  undefined1 auVar78 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar43 [32];
  undefined1 auVar83 [64];
  undefined1 auVar85 [64];
  undefined1 auVar87 [64];
  undefined1 auVar89 [64];
  undefined1 auVar91 [64];
  undefined1 auVar93 [64];
  undefined1 auVar94 [64];
  undefined8 in_MM0;
  undefined1 in_ZMM5 [64];
  undefined1 in_ZMM18 [64];
  undefined1 auVar95 [64];
  longlong alStack_68 [4];
  longlong lStack_48;
  char cVar14;
  undefined1 auVar44 [64];
  undefined1 auVar46 [64];
  undefined1 auVar48 [64];
  undefined1 auVar50 [64];
  undefined1 auVar52 [64];
  undefined1 auVar57 [64];
  undefined1 auVar59 [64];
  undefined1 auVar61 [64];
  undefined1 auVar63 [64];
  undefined1 auVar65 [64];
  undefined1 auVar67 [64];
  undefined1 auVar71 [64];
  undefined1 auVar73 [64];
  undefined1 auVar75 [64];
  undefined1 auVar77 [64];
  undefined1 auVar79 [64];
  undefined1 auVar82 [64];
  undefined1 auVar84 [64];
  undefined1 auVar86 [64];
  undefined1 auVar88 [64];
  undefined1 auVar90 [64];
  undefined1 auVar92 [64];
  
  plVar20 = alStack_68;
  plVar21 = (longlong *)0x0;
  pauVar37 = (undefined1 (*) [32])(param_6 + -1);
  if (0 < (longlong)pauVar37) {
    lStack_48 = param_6;
    lVar16 = param_2 * 2;
    plVar22 = alStack_68;
    do {
      uVar23 = ((ulonglong)param_3 & 0x1f) >> 1;
      pcVar17 = param_5;
      pauVar26 = param_1;
      pauVar29 = param_3;
      auVar95 = in_ZMM18;
      if (uVar23 == 0) {
LAB_1405be73c:
        uVar23 = (ulonglong)pcVar17 & 0xf;
        unaff_R14 = (longlong)pcVar17 >> 5;
        plVar20 = plVar22;
        if (unaff_R14 != 0) {
          pcVar24 = (char *)0x0;
          auVar55 = vpminuw_avx512bw(*pauVar26,*(undefined1 (*) [64])(*pauVar26 + lVar16));
          in_ZmmResult = vpminuw_avx512bw(auVar55,*(undefined1 (*) [64])(*pauVar26 + param_2 * 4));
          auVar55 = in_ZmmResult;
          if (0 < (longlong)unaff_R14) goto LAB_1405be780;
        }
      }
      else {
        pcVar24 = (char *)(0x10 - uVar23);
        if ((longlong)param_5 <= (longlong)pcVar24) {
          pcVar24 = param_5;
        }
        iVar32 = (int)((ulonglong)pcVar24 & 0xf);
        uVar23 = 0xffffffffffffffffU >> ((ulonglong)(uint)-(iVar32 * 2 + 4) & 0x3f) & 0xffffffff;
        auVar55._32_32_ = in_ZmmResult._32_32_;
        auVar55._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_1);
        bVar1 = (byte)uVar23;
        auVar56[1] = ((byte)(uVar23 >> 1) & 1) * auVar55[1];
        auVar56[0] = (bVar1 & 1) * auVar55[0];
        auVar56[2] = ((byte)(uVar23 >> 2) & 1) * auVar55[2];
        auVar56[3] = ((byte)(uVar23 >> 3) & 1) * auVar55[3];
        auVar56[4] = ((byte)(uVar23 >> 4) & 1) * auVar55[4];
        auVar56[5] = ((byte)(uVar23 >> 5) & 1) * auVar55[5];
        auVar56[6] = ((byte)(uVar23 >> 6) & 1) * auVar55[6];
        auVar56[7] = ((byte)(uVar23 >> 7) & 1) * auVar55[7];
        bVar2 = (byte)(uVar23 >> 8);
        auVar56[8] = (bVar2 & 1) * auVar55[8];
        auVar56[9] = ((byte)(uVar23 >> 9) & 1) * auVar55[9];
        auVar56[10] = ((byte)(uVar23 >> 10) & 1) * auVar55[10];
        auVar56[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar55[0xb];
        auVar56[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar55[0xc];
        auVar56[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar55[0xd];
        auVar56[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar55[0xe];
        auVar56[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar55[0xf];
        bVar3 = (byte)(uVar23 >> 0x10);
        auVar56[0x10] = (bVar3 & 1) * auVar55[0x10];
        auVar56[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar55[0x11];
        auVar56[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar55[0x12];
        auVar56[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar55[0x13];
        auVar56[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar55[0x14];
        auVar56[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar55[0x15];
        auVar56[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar55[0x16];
        auVar56[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar55[0x17];
        bVar4 = (byte)(uVar23 >> 0x18);
        auVar56[0x18] = (bVar4 & 1) * auVar55[0x18];
        auVar56[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar55[0x19];
        auVar56[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar55[0x1a];
        auVar56[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar55[0x1b];
        auVar56[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar55[0x1c];
        auVar56._30_34_ = auVar55._30_34_;
        auVar56[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar55[0x1d];
        auVar44._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar16));
        auVar44._32_32_ = auVar55._32_32_;
        auVar45[1] = ((byte)(uVar23 >> 1) & 1) * auVar44[1];
        auVar45[0] = (bVar1 & 1) * auVar44[0];
        auVar45[2] = ((byte)(uVar23 >> 2) & 1) * auVar44[2];
        auVar45[3] = ((byte)(uVar23 >> 3) & 1) * auVar44[3];
        auVar45[4] = ((byte)(uVar23 >> 4) & 1) * auVar44[4];
        auVar45[5] = ((byte)(uVar23 >> 5) & 1) * auVar44[5];
        auVar45[6] = ((byte)(uVar23 >> 6) & 1) * auVar44[6];
        auVar45[7] = ((byte)(uVar23 >> 7) & 1) * auVar44[7];
        auVar45[8] = (bVar2 & 1) * auVar44[8];
        auVar45[9] = ((byte)(uVar23 >> 9) & 1) * auVar44[9];
        auVar45[10] = ((byte)(uVar23 >> 10) & 1) * auVar44[10];
        auVar45[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar44[0xb];
        auVar45[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar44[0xc];
        auVar45[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar44[0xd];
        auVar45[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar44[0xe];
        auVar45[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar44[0xf];
        auVar45[0x10] = (bVar3 & 1) * auVar44[0x10];
        auVar45[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar44[0x11];
        auVar45[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar44[0x12];
        auVar45[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar44[0x13];
        auVar45[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar44[0x14];
        auVar45[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar44[0x15];
        auVar45[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar44[0x16];
        auVar45[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar44[0x17];
        auVar45[0x18] = (bVar4 & 1) * auVar44[0x18];
        auVar45[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar44[0x19];
        auVar45[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar44[0x1a];
        auVar45[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar44[0x1b];
        auVar45[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar44[0x1c];
        auVar45._30_34_ = auVar44._30_34_;
        auVar45[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar44[0x1d];
        auVar46._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 4));
        auVar46._32_32_ = auVar55._32_32_;
        auVar47[1] = ((byte)(uVar23 >> 1) & 1) * auVar46[1];
        auVar47[0] = (bVar1 & 1) * auVar46[0];
        auVar47[2] = ((byte)(uVar23 >> 2) & 1) * auVar46[2];
        auVar47[3] = ((byte)(uVar23 >> 3) & 1) * auVar46[3];
        auVar47[4] = ((byte)(uVar23 >> 4) & 1) * auVar46[4];
        auVar47[5] = ((byte)(uVar23 >> 5) & 1) * auVar46[5];
        auVar47[6] = ((byte)(uVar23 >> 6) & 1) * auVar46[6];
        auVar47[7] = ((byte)(uVar23 >> 7) & 1) * auVar46[7];
        auVar47[8] = (bVar2 & 1) * auVar46[8];
        auVar47[9] = ((byte)(uVar23 >> 9) & 1) * auVar46[9];
        auVar47[10] = ((byte)(uVar23 >> 10) & 1) * auVar46[10];
        auVar47[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar46[0xb];
        auVar47[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar46[0xc];
        auVar47[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar46[0xd];
        auVar47[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar46[0xe];
        auVar47[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar46[0xf];
        auVar47[0x10] = (bVar3 & 1) * auVar46[0x10];
        auVar47[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar46[0x11];
        auVar47[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar46[0x12];
        auVar47[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar46[0x13];
        auVar47[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar46[0x14];
        auVar47[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar46[0x15];
        auVar47[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar46[0x16];
        auVar47[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar46[0x17];
        auVar47[0x18] = (bVar4 & 1) * auVar46[0x18];
        auVar47[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar46[0x19];
        auVar47[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar46[0x1a];
        auVar47[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar46[0x1b];
        auVar47[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar46[0x1c];
        auVar47._30_34_ = auVar46._30_34_;
        auVar47[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar46[0x1d];
        uVar28 = iVar32 * 2 - 0x1c;
        uVar28 = ~((int)uVar28 >> 0x1f) & uVar28;
        pauVar26 = (undefined1 (*) [64])(ulonglong)uVar28;
        in_ZmmResult._32_32_ = (undefined1  [32])0x0;
        if ((int)uVar28 < 1) {
          auVar40 = (undefined1  [32])0x0;
          auVar43 = in_ZmmResult._32_32_;
        }
        else {
          pauVar26 = (undefined1 (*) [64])(ulonglong)-uVar28;
          uVar23 = 0xffffffffffffffffU >> ((ulonglong)pauVar26 & 0x3f) & 0xffffffff;
          auVar48._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + 0x20));
          auVar48._32_32_ = auVar55._32_32_;
          bVar1 = (byte)uVar23;
          auVar49[1] = ((byte)(uVar23 >> 1) & 1) * auVar48[1];
          auVar49[0] = (bVar1 & 1) * auVar48[0];
          auVar49[2] = ((byte)(uVar23 >> 2) & 1) * auVar48[2];
          auVar49[3] = ((byte)(uVar23 >> 3) & 1) * auVar48[3];
          auVar49[4] = ((byte)(uVar23 >> 4) & 1) * auVar48[4];
          auVar49[5] = ((byte)(uVar23 >> 5) & 1) * auVar48[5];
          auVar49[6] = ((byte)(uVar23 >> 6) & 1) * auVar48[6];
          auVar49[7] = ((byte)(uVar23 >> 7) & 1) * auVar48[7];
          bVar2 = (byte)(uVar23 >> 8);
          auVar49[8] = (bVar2 & 1) * auVar48[8];
          auVar49[9] = ((byte)(uVar23 >> 9) & 1) * auVar48[9];
          auVar49[10] = ((byte)(uVar23 >> 10) & 1) * auVar48[10];
          auVar49[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar48[0xb];
          auVar49[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar48[0xc];
          auVar49[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar48[0xd];
          auVar49[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar48[0xe];
          auVar49[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar48[0xf];
          bVar3 = (byte)(uVar23 >> 0x10);
          auVar49[0x10] = (bVar3 & 1) * auVar48[0x10];
          auVar49[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar48[0x11];
          auVar49[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar48[0x12];
          auVar49[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar48[0x13];
          auVar49[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar48[0x14];
          auVar49[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar48[0x15];
          auVar49[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar48[0x16];
          auVar49[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar48[0x17];
          bVar4 = (byte)(uVar23 >> 0x18);
          auVar49[0x18] = (bVar4 & 1) * auVar48[0x18];
          auVar49[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar48[0x19];
          auVar49[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar48[0x1a];
          auVar49[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar48[0x1b];
          auVar49[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar48[0x1c];
          auVar49._30_34_ = auVar48._30_34_;
          auVar49[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar48[0x1d];
          auVar50._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar16 + 0x20));
          auVar50._32_32_ = auVar55._32_32_;
          auVar51[1] = ((byte)(uVar23 >> 1) & 1) * auVar50[1];
          auVar51[0] = (bVar1 & 1) * auVar50[0];
          auVar51[2] = ((byte)(uVar23 >> 2) & 1) * auVar50[2];
          auVar51[3] = ((byte)(uVar23 >> 3) & 1) * auVar50[3];
          auVar51[4] = ((byte)(uVar23 >> 4) & 1) * auVar50[4];
          auVar51[5] = ((byte)(uVar23 >> 5) & 1) * auVar50[5];
          auVar51[6] = ((byte)(uVar23 >> 6) & 1) * auVar50[6];
          auVar51[7] = ((byte)(uVar23 >> 7) & 1) * auVar50[7];
          auVar51[8] = (bVar2 & 1) * auVar50[8];
          auVar51[9] = ((byte)(uVar23 >> 9) & 1) * auVar50[9];
          auVar51[10] = ((byte)(uVar23 >> 10) & 1) * auVar50[10];
          auVar51[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar50[0xb];
          auVar51[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar50[0xc];
          auVar51[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar50[0xd];
          auVar51[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar50[0xe];
          auVar51[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar50[0xf];
          auVar51[0x10] = (bVar3 & 1) * auVar50[0x10];
          auVar51[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar50[0x11];
          auVar51[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar50[0x12];
          auVar51[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar50[0x13];
          auVar51[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar50[0x14];
          auVar51[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar50[0x15];
          auVar51[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar50[0x16];
          auVar51[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar50[0x17];
          auVar51[0x18] = (bVar4 & 1) * auVar50[0x18];
          auVar51[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar50[0x19];
          auVar51[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar50[0x1a];
          auVar51[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar50[0x1b];
          auVar51[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar50[0x1c];
          auVar51._30_34_ = auVar50._30_34_;
          auVar51[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar50[0x1d];
          in_ZmmResult._32_32_ = auVar51._0_32_;
          auVar52._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 4 + 0x20));
          auVar52._32_32_ = auVar55._32_32_;
          auVar53[1] = ((byte)(uVar23 >> 1) & 1) * auVar52[1];
          auVar53[0] = (bVar1 & 1) * auVar52[0];
          auVar53[2] = ((byte)(uVar23 >> 2) & 1) * auVar52[2];
          auVar53[3] = ((byte)(uVar23 >> 3) & 1) * auVar52[3];
          auVar53[4] = ((byte)(uVar23 >> 4) & 1) * auVar52[4];
          auVar53[5] = ((byte)(uVar23 >> 5) & 1) * auVar52[5];
          auVar53[6] = ((byte)(uVar23 >> 6) & 1) * auVar52[6];
          auVar53[7] = ((byte)(uVar23 >> 7) & 1) * auVar52[7];
          auVar53[8] = (bVar2 & 1) * auVar52[8];
          auVar53[9] = ((byte)(uVar23 >> 9) & 1) * auVar52[9];
          auVar53[10] = ((byte)(uVar23 >> 10) & 1) * auVar52[10];
          auVar53[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar52[0xb];
          auVar53[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar52[0xc];
          auVar53[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar52[0xd];
          auVar53[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar52[0xe];
          auVar53[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar52[0xf];
          auVar53[0x10] = (bVar3 & 1) * auVar52[0x10];
          auVar53[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar52[0x11];
          auVar53[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar52[0x12];
          auVar53[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar52[0x13];
          auVar53[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar52[0x14];
          auVar53[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar52[0x15];
          auVar53[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar52[0x16];
          auVar53[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar52[0x17];
          auVar53[0x18] = (bVar4 & 1) * auVar52[0x18];
          auVar53[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar52[0x19];
          auVar53[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar52[0x1a];
          auVar53[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar52[0x1b];
          auVar53[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar52[0x1c];
          auVar53._30_34_ = auVar52._30_34_;
          auVar53[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar52[0x1d];
          auVar40 = auVar53._0_32_;
          auVar43 = auVar49._0_32_;
        }
        auVar42 = vpminuw_avx2(auVar56._0_32_,auVar45._0_32_);
        in_ZmmResult._32_32_ = vpminuw_avx2(auVar43,in_ZmmResult._32_32_);
        uVar23 = 0x10 - ((ulonglong)pcVar24 & 0xf);
        auVar43 = vpminuw_avx2(auVar42,auVar47._0_32_);
        pcVar17 = (char *)0xffff;
        in_ZmmResult._32_32_ = vpminuw_avx2(in_ZmmResult._32_32_,auVar40);
        pauVar29 = (undefined1 (*) [64])(*param_3 + (longlong)pcVar24 * 2);
        auVar40 = vshufi32x4_avx512vl(auVar43,in_ZmmResult._32_32_,1);
        in_ZmmResult._32_32_ = vpalignr_avx2(auVar40,auVar43,2);
        in_ZMM5 = ZEXT3264(in_ZmmResult._32_32_);
        auVar40 = vpalignr_avx512vl(auVar40,auVar43);
        param_5 = (char *)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)param_5 + -0x3c);
        param_1 = (undefined1 (*) [64])(param_1[-1] + 0x3f);
        if (param_1 == (undefined1 (*) [64])0x0) {
          param_5 = (char *)(((ulonglong)param_5 & 0xffffffff | 0xffff00000000) / 0xffff &
                            0xffffffff);
          in_ZmmResult._32_32_ = vpminuw_avx512vl(auVar43,in_ZmmResult._32_32_);
          pcVar17 = param_5 + -(longlong)pcVar24;
          uVar23 = (ulonglong)pauVar26 & 0xffff;
          pauVar26 = (undefined1 (*) [64])((longlong)pcVar24 * 2);
          auVar54._0_32_ = vpminuw_avx512vl(in_ZmmResult._32_32_,auVar40);
          auVar54._32_32_ = auVar55._32_32_;
          auVar95 = ZEXT3264(auVar54._0_32_);
          bVar5 = (bool)((byte)(uVar23 >> 3) & 1);
          auVar7._2_56_ = auVar54._8_56_;
          auVar7._0_2_ = (ushort)bVar5 * auVar54._6_2_ | (ushort)!bVar5 * in_ZMM18._6_2_;
          in_ZmmResult._0_8_ = auVar7._0_8_ << 0x30;
          bVar5 = (bool)((byte)(uVar23 >> 4) & 1);
          in_ZmmResult._8_2_ = (ushort)bVar5 * auVar54._8_2_ | (ushort)!bVar5 * in_ZMM18._8_2_;
          bVar5 = (bool)((byte)(uVar23 >> 5) & 1);
          in_ZmmResult._10_2_ = (ushort)bVar5 * auVar54._10_2_ | (ushort)!bVar5 * in_ZMM18._10_2_;
          bVar5 = (bool)((byte)(uVar23 >> 6) & 1);
          in_ZmmResult._12_2_ = (ushort)bVar5 * auVar54._12_2_ | (ushort)!bVar5 * in_ZMM18._12_2_;
          bVar5 = (bool)((byte)(uVar23 >> 7) & 1);
          in_ZmmResult._14_2_ = (ushort)bVar5 * auVar54._14_2_ | (ushort)!bVar5 * in_ZMM18._14_2_;
          bVar5 = (bool)((byte)(uVar23 >> 8) & 1);
          in_ZmmResult._16_2_ = (ushort)bVar5 * auVar54._16_2_ | (ushort)!bVar5 * in_ZMM18._16_2_;
          bVar5 = (bool)((byte)(uVar23 >> 9) & 1);
          in_ZmmResult._18_2_ = (ushort)bVar5 * auVar54._18_2_ | (ushort)!bVar5 * in_ZMM18._18_2_;
          bVar5 = (bool)((byte)(uVar23 >> 10) & 1);
          in_ZmmResult._20_2_ = (ushort)bVar5 * auVar54._20_2_ | (ushort)!bVar5 * in_ZMM18._20_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xb) & 1);
          in_ZmmResult._22_2_ = (ushort)bVar5 * auVar54._22_2_ | (ushort)!bVar5 * in_ZMM18._22_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xc) & 1);
          in_ZmmResult._24_2_ = (ushort)bVar5 * auVar54._24_2_ | (ushort)!bVar5 * in_ZMM18._24_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xd) & 1);
          in_ZmmResult._26_2_ = (ushort)bVar5 * auVar54._26_2_ | (ushort)!bVar5 * in_ZMM18._26_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xe) & 1);
          in_ZmmResult._28_2_ = (ushort)bVar5 * auVar54._28_2_ | (ushort)!bVar5 * in_ZMM18._28_2_;
          bVar5 = SUB81(uVar23 >> 0xf,0);
          in_ZmmResult._30_2_ = (ushort)bVar5 * auVar54._30_2_ | (ushort)!bVar5 * in_ZMM18._30_2_;
          in_ZmmResult._32_32_ = auVar55._32_32_;
          auVar40 = vmovdqu16_avx512vl(auVar54._0_32_);
          *(undefined1 (*) [32])*param_3 = auVar40;
          goto LAB_1405be73c;
        }
        *param_5 = *param_5 + (char)param_2;
        auVar55 = ZEXT3264(auVar42);
LAB_1405be780:
        do {
          pcVar24 = pcVar24 + 1;
          auVar56 = vpminuw_avx512bw(pauVar26[1],*(undefined1 (*) [64])(pauVar26[1] + lVar16));
          in_ZmmResult = vpminuw_avx512bw(auVar56,*(undefined1 (*) [64])(pauVar26[1] + param_2 * 4))
          ;
          pauVar26 = pauVar26 + 1;
          auVar56 = valignd_avx512f(in_ZmmResult,auVar55,4);
          vpalignr_avx512bw(auVar56,auVar55);
          param_5 = (char *)CONCAT62((int6)((ulonglong)param_5 >> 0x10),
                                     CONCAT11((char)((ulonglong)param_5 >> 8) + pcVar17[-0xd],
                                              (char)param_5));
          in_MM0 = psubsb(in_MM0,*(undefined8 *)(pcVar17 + 0xff00000000));
          plVar21 = (longlong *)*plVar22;
          plVar20 = plVar22 + 1;
          plVar22 = plVar22 + 1;
          auVar55 = vpminuw_avx512bw(in_ZMM5,auVar55);
          *pauVar29 = auVar55;
          pauVar29 = pauVar29 + 1;
          auVar55 = in_ZmmResult;
        } while ((longlong)pcVar24 < (longlong)unaff_R14);
      }
      lVar18 = (longlong)((longlong)pcVar17 - ((ulonglong)pcVar17 & 0xffffffffffffffe0)) >> 4;
      if (lVar18 != 0) {
        lVar25 = 0;
        auVar40 = vpminuw_avx2(*(undefined1 (*) [32])*pauVar26,
                               *(undefined1 (*) [32])(*pauVar26 + lVar16));
        auVar40 = vpminuw_avx2(auVar40,*(undefined1 (*) [32])(*pauVar26 + param_2 * 4));
        if (0 < lVar18) {
          do {
            lVar25 = lVar25 + 1;
            auVar43 = vpminuw_avx2(*(undefined1 (*) [32])(*pauVar26 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar26 + lVar16 + 0x20));
            auVar41 = vpminuw_avx512vl(auVar43,*(undefined1 (*) [32])
                                                (*pauVar26 + param_2 * 4 + 0x20));
            pauVar26 = (undefined1 (*) [64])(*pauVar26 + 0x20);
            auVar42 = vshufi32x4_avx512vl(auVar40,auVar41,1);
            auVar43 = vpalignr_avx2(auVar42,auVar40,2);
            auVar42 = vpalignr_avx2(auVar42,auVar40,4);
            in_ZMM5 = ZEXT3264(auVar42);
            auVar40 = vpminuw_avx2(auVar43,auVar40);
            auVar40 = vpminuw_avx512vl(auVar42,auVar40);
            auVar40 = vmovdqu32_avx512vl(auVar40);
            *(undefined1 (*) [32])*pauVar29 = auVar40;
            pauVar29 = (undefined1 (*) [64])(*pauVar29 + 0x20);
            in_ZmmResult._0_32_ = vmovdqa32_avx512vl(auVar41);
            auVar40 = in_ZmmResult._0_32_;
          } while (lVar25 < lVar18);
        }
      }
      in_ZMM18 = auVar95;
      if (uVar23 != 0) {
        uVar38 = 0xffffffffffffffffU >> ((ulonglong)(uint)-((int)uVar23 * 2 + 4) & 0x3f) &
                 0xffffffff;
        auVar57._32_32_ = in_ZmmResult._32_32_;
        auVar57._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*pauVar26);
        bVar1 = (byte)uVar38;
        auVar58[1] = ((byte)(uVar38 >> 1) & 1) * auVar57[1];
        auVar58[0] = (bVar1 & 1) * auVar57[0];
        auVar58[2] = ((byte)(uVar38 >> 2) & 1) * auVar57[2];
        auVar58[3] = ((byte)(uVar38 >> 3) & 1) * auVar57[3];
        auVar58[4] = ((byte)(uVar38 >> 4) & 1) * auVar57[4];
        auVar58[5] = ((byte)(uVar38 >> 5) & 1) * auVar57[5];
        auVar58[6] = ((byte)(uVar38 >> 6) & 1) * auVar57[6];
        auVar58[7] = ((byte)(uVar38 >> 7) & 1) * auVar57[7];
        bVar2 = (byte)(uVar38 >> 8);
        auVar58[8] = (bVar2 & 1) * auVar57[8];
        auVar58[9] = ((byte)(uVar38 >> 9) & 1) * auVar57[9];
        auVar58[10] = ((byte)(uVar38 >> 10) & 1) * auVar57[10];
        auVar58[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar57[0xb];
        auVar58[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar57[0xc];
        auVar58[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar57[0xd];
        auVar58[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar57[0xe];
        auVar58[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar57[0xf];
        bVar3 = (byte)(uVar38 >> 0x10);
        auVar58[0x10] = (bVar3 & 1) * auVar57[0x10];
        auVar58[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar57[0x11];
        auVar58[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar57[0x12];
        auVar58[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar57[0x13];
        auVar58[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar57[0x14];
        auVar58[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar57[0x15];
        auVar58[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar57[0x16];
        auVar58[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar57[0x17];
        bVar4 = (byte)(uVar38 >> 0x18);
        auVar58[0x18] = (bVar4 & 1) * auVar57[0x18];
        auVar58[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar57[0x19];
        auVar58[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar57[0x1a];
        auVar58[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar57[0x1b];
        auVar58[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar57[0x1c];
        auVar58._30_34_ = auVar57._30_34_;
        auVar58[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar57[0x1d];
        auVar59._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + lVar16));
        auVar59._32_32_ = auVar57._32_32_;
        auVar60[1] = ((byte)(uVar38 >> 1) & 1) * auVar59[1];
        auVar60[0] = (bVar1 & 1) * auVar59[0];
        auVar60[2] = ((byte)(uVar38 >> 2) & 1) * auVar59[2];
        auVar60[3] = ((byte)(uVar38 >> 3) & 1) * auVar59[3];
        auVar60[4] = ((byte)(uVar38 >> 4) & 1) * auVar59[4];
        auVar60[5] = ((byte)(uVar38 >> 5) & 1) * auVar59[5];
        auVar60[6] = ((byte)(uVar38 >> 6) & 1) * auVar59[6];
        auVar60[7] = ((byte)(uVar38 >> 7) & 1) * auVar59[7];
        auVar60[8] = (bVar2 & 1) * auVar59[8];
        auVar60[9] = ((byte)(uVar38 >> 9) & 1) * auVar59[9];
        auVar60[10] = ((byte)(uVar38 >> 10) & 1) * auVar59[10];
        auVar60[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar59[0xb];
        auVar60[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar59[0xc];
        auVar60[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar59[0xd];
        auVar60[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar59[0xe];
        auVar60[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar59[0xf];
        auVar60[0x10] = (bVar3 & 1) * auVar59[0x10];
        auVar60[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar59[0x11];
        auVar60[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar59[0x12];
        auVar60[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar59[0x13];
        auVar60[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar59[0x14];
        auVar60[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar59[0x15];
        auVar60[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar59[0x16];
        auVar60[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar59[0x17];
        auVar60[0x18] = (bVar4 & 1) * auVar59[0x18];
        auVar60[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar59[0x19];
        auVar60[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar59[0x1a];
        auVar60[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar59[0x1b];
        auVar60[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar59[0x1c];
        auVar60._30_34_ = auVar59._30_34_;
        auVar60[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar59[0x1d];
        auVar61._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + param_2 * 4));
        auVar61._32_32_ = auVar57._32_32_;
        auVar62[1] = ((byte)(uVar38 >> 1) & 1) * auVar61[1];
        auVar62[0] = (bVar1 & 1) * auVar61[0];
        auVar62[2] = ((byte)(uVar38 >> 2) & 1) * auVar61[2];
        auVar62[3] = ((byte)(uVar38 >> 3) & 1) * auVar61[3];
        auVar62[4] = ((byte)(uVar38 >> 4) & 1) * auVar61[4];
        auVar62[5] = ((byte)(uVar38 >> 5) & 1) * auVar61[5];
        auVar62[6] = ((byte)(uVar38 >> 6) & 1) * auVar61[6];
        auVar62[7] = ((byte)(uVar38 >> 7) & 1) * auVar61[7];
        auVar62[8] = (bVar2 & 1) * auVar61[8];
        auVar62[9] = ((byte)(uVar38 >> 9) & 1) * auVar61[9];
        auVar62[10] = ((byte)(uVar38 >> 10) & 1) * auVar61[10];
        auVar62[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar61[0xb];
        auVar62[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar61[0xc];
        auVar62[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar61[0xd];
        auVar62[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar61[0xe];
        auVar62[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar61[0xf];
        auVar62[0x10] = (bVar3 & 1) * auVar61[0x10];
        auVar62[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar61[0x11];
        auVar62[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar61[0x12];
        auVar62[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar61[0x13];
        auVar62[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar61[0x14];
        auVar62[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar61[0x15];
        auVar62[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar61[0x16];
        auVar62[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar61[0x17];
        auVar62[0x18] = (bVar4 & 1) * auVar61[0x18];
        auVar62[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar61[0x19];
        auVar62[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar61[0x1a];
        auVar62[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar61[0x1b];
        auVar62[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar61[0x1c];
        auVar62._30_34_ = auVar61._30_34_;
        auVar62[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar61[0x1d];
        uVar28 = (int)uVar23 * 2 - 0x1c;
        uVar33 = (int)uVar28 >> 0x1f;
        unaff_R14 = (ulonglong)uVar33;
        uVar28 = ~uVar33 & uVar28;
        uVar23 = (ulonglong)uVar28;
        in_ZmmResult._32_32_ = (undefined1  [32])0x0;
        if ((int)uVar28 < 1) {
          auVar40 = (undefined1  [32])0x0;
          auVar43 = in_ZmmResult._32_32_;
        }
        else {
          uVar23 = (ulonglong)-uVar28;
          uVar38 = 0xffffffffffffffffU >> (uVar23 & 0x3f) & 0xffffffff;
          auVar63._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + 0x20));
          auVar63._32_32_ = auVar57._32_32_;
          bVar1 = (byte)uVar38;
          auVar64[1] = ((byte)(uVar38 >> 1) & 1) * auVar63[1];
          auVar64[0] = (bVar1 & 1) * auVar63[0];
          auVar64[2] = ((byte)(uVar38 >> 2) & 1) * auVar63[2];
          auVar64[3] = ((byte)(uVar38 >> 3) & 1) * auVar63[3];
          auVar64[4] = ((byte)(uVar38 >> 4) & 1) * auVar63[4];
          auVar64[5] = ((byte)(uVar38 >> 5) & 1) * auVar63[5];
          auVar64[6] = ((byte)(uVar38 >> 6) & 1) * auVar63[6];
          auVar64[7] = ((byte)(uVar38 >> 7) & 1) * auVar63[7];
          bVar2 = (byte)(uVar38 >> 8);
          auVar64[8] = (bVar2 & 1) * auVar63[8];
          auVar64[9] = ((byte)(uVar38 >> 9) & 1) * auVar63[9];
          auVar64[10] = ((byte)(uVar38 >> 10) & 1) * auVar63[10];
          auVar64[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar63[0xb];
          auVar64[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar63[0xc];
          auVar64[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar63[0xd];
          auVar64[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar63[0xe];
          auVar64[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar63[0xf];
          bVar3 = (byte)(uVar38 >> 0x10);
          auVar64[0x10] = (bVar3 & 1) * auVar63[0x10];
          auVar64[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar63[0x11];
          auVar64[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar63[0x12];
          auVar64[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar63[0x13];
          auVar64[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar63[0x14];
          auVar64[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar63[0x15];
          auVar64[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar63[0x16];
          auVar64[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar63[0x17];
          bVar4 = (byte)(uVar38 >> 0x18);
          auVar64[0x18] = (bVar4 & 1) * auVar63[0x18];
          auVar64[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar63[0x19];
          auVar64[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar63[0x1a];
          auVar64[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar63[0x1b];
          auVar64[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar63[0x1c];
          auVar64._30_34_ = auVar63._30_34_;
          auVar64[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar63[0x1d];
          auVar65._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + lVar16 + 0x20));
          auVar65._32_32_ = auVar57._32_32_;
          auVar66[1] = ((byte)(uVar38 >> 1) & 1) * auVar65[1];
          auVar66[0] = (bVar1 & 1) * auVar65[0];
          auVar66[2] = ((byte)(uVar38 >> 2) & 1) * auVar65[2];
          auVar66[3] = ((byte)(uVar38 >> 3) & 1) * auVar65[3];
          auVar66[4] = ((byte)(uVar38 >> 4) & 1) * auVar65[4];
          auVar66[5] = ((byte)(uVar38 >> 5) & 1) * auVar65[5];
          auVar66[6] = ((byte)(uVar38 >> 6) & 1) * auVar65[6];
          auVar66[7] = ((byte)(uVar38 >> 7) & 1) * auVar65[7];
          auVar66[8] = (bVar2 & 1) * auVar65[8];
          auVar66[9] = ((byte)(uVar38 >> 9) & 1) * auVar65[9];
          auVar66[10] = ((byte)(uVar38 >> 10) & 1) * auVar65[10];
          auVar66[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar65[0xb];
          auVar66[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar65[0xc];
          auVar66[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar65[0xd];
          auVar66[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar65[0xe];
          auVar66[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar65[0xf];
          auVar66[0x10] = (bVar3 & 1) * auVar65[0x10];
          auVar66[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar65[0x11];
          auVar66[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar65[0x12];
          auVar66[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar65[0x13];
          auVar66[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar65[0x14];
          auVar66[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar65[0x15];
          auVar66[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar65[0x16];
          auVar66[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar65[0x17];
          auVar66[0x18] = (bVar4 & 1) * auVar65[0x18];
          auVar66[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar65[0x19];
          auVar66[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar65[0x1a];
          auVar66[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar65[0x1b];
          auVar66[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar65[0x1c];
          auVar66._30_34_ = auVar65._30_34_;
          auVar66[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar65[0x1d];
          in_ZmmResult._32_32_ = auVar66._0_32_;
          auVar67._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + param_2 * 4 + 0x20))
          ;
          auVar67._32_32_ = auVar57._32_32_;
          auVar68[1] = ((byte)(uVar38 >> 1) & 1) * auVar67[1];
          auVar68[0] = (bVar1 & 1) * auVar67[0];
          auVar68[2] = ((byte)(uVar38 >> 2) & 1) * auVar67[2];
          auVar68[3] = ((byte)(uVar38 >> 3) & 1) * auVar67[3];
          auVar68[4] = ((byte)(uVar38 >> 4) & 1) * auVar67[4];
          auVar68[5] = ((byte)(uVar38 >> 5) & 1) * auVar67[5];
          auVar68[6] = ((byte)(uVar38 >> 6) & 1) * auVar67[6];
          auVar68[7] = ((byte)(uVar38 >> 7) & 1) * auVar67[7];
          auVar68[8] = (bVar2 & 1) * auVar67[8];
          auVar68[9] = ((byte)(uVar38 >> 9) & 1) * auVar67[9];
          auVar68[10] = ((byte)(uVar38 >> 10) & 1) * auVar67[10];
          auVar68[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar67[0xb];
          auVar68[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar67[0xc];
          auVar68[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar67[0xd];
          auVar68[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar67[0xe];
          auVar68[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar67[0xf];
          auVar68[0x10] = (bVar3 & 1) * auVar67[0x10];
          auVar68[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar67[0x11];
          auVar68[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar67[0x12];
          auVar68[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar67[0x13];
          auVar68[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar67[0x14];
          auVar68[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar67[0x15];
          auVar68[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar67[0x16];
          auVar68[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar67[0x17];
          auVar68[0x18] = (bVar4 & 1) * auVar67[0x18];
          auVar68[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar67[0x19];
          auVar68[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar67[0x1a];
          auVar68[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar67[0x1b];
          auVar68[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar67[0x1c];
          auVar68._30_34_ = auVar67._30_34_;
          auVar68[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar67[0x1d];
          auVar40 = auVar68._0_32_;
          auVar43 = auVar64._0_32_;
        }
        auVar42 = vpminuw_avx2(auVar58._0_32_,auVar60._0_32_);
        in_ZmmResult._32_32_ = vpminuw_avx2(auVar43,in_ZmmResult._32_32_);
        auVar43 = vpminuw_avx2(auVar42,auVar62._0_32_);
        in_ZmmResult._32_32_ = vpminuw_avx2(in_ZmmResult._32_32_,auVar40);
        in_ZmmResult._32_32_ = vshufi32x4_avx512vl(auVar43,in_ZmmResult._32_32_,1);
        auVar40 = vpalignr_avx2(in_ZmmResult._32_32_,auVar43,2);
        in_ZMM5 = ZEXT3264(auVar40);
        in_ZmmResult._0_32_ = vpalignr_avx512vl(in_ZmmResult._32_32_,auVar43);
        in_ZmmResult._32_32_ = auVar57._32_32_;
        param_5 = (char *)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)param_5 + -0x3c);
        param_1 = (undefined1 (*) [64])(param_1[-1] + 0x3f);
        if (param_1 != (undefined1 (*) [64])0x0) goto LAB_1405be963;
        param_5 = (char *)(((ulonglong)param_5 & 0xffffffff | 0xffff00000000) / 0xffff & 0xffffffff)
        ;
        in_ZmmResult._32_32_ = vpminuw_avx512vl(auVar43,auVar40);
        uVar23 = uVar23 & 0xffff;
        auVar69._0_32_ = vpminuw_avx512vl(in_ZmmResult._32_32_,in_ZmmResult._0_32_);
        auVar69._32_32_ = auVar57._32_32_;
        in_ZMM18 = ZEXT3264(auVar69._0_32_);
        bVar5 = (bool)((byte)(uVar23 >> 3) & 1);
        auVar8._2_56_ = auVar69._8_56_;
        auVar8._0_2_ = (ushort)bVar5 * auVar69._6_2_ | (ushort)!bVar5 * auVar95._6_2_;
        in_ZmmResult._0_8_ = auVar8._0_8_ << 0x30;
        bVar5 = (bool)((byte)(uVar23 >> 4) & 1);
        in_ZmmResult._8_2_ = (ushort)bVar5 * auVar69._8_2_ | (ushort)!bVar5 * auVar95._8_2_;
        bVar5 = (bool)((byte)(uVar23 >> 5) & 1);
        in_ZmmResult._10_2_ = (ushort)bVar5 * auVar69._10_2_ | (ushort)!bVar5 * auVar95._10_2_;
        bVar5 = (bool)((byte)(uVar23 >> 6) & 1);
        in_ZmmResult._12_2_ = (ushort)bVar5 * auVar69._12_2_ | (ushort)!bVar5 * auVar95._12_2_;
        bVar5 = (bool)((byte)(uVar23 >> 7) & 1);
        in_ZmmResult._14_2_ = (ushort)bVar5 * auVar69._14_2_ | (ushort)!bVar5 * auVar95._14_2_;
        bVar5 = (bool)((byte)(uVar23 >> 8) & 1);
        in_ZmmResult._16_2_ = (ushort)bVar5 * auVar69._16_2_ | (ushort)!bVar5 * auVar95._16_2_;
        bVar5 = (bool)((byte)(uVar23 >> 9) & 1);
        in_ZmmResult._18_2_ = (ushort)bVar5 * auVar69._18_2_ | (ushort)!bVar5 * auVar95._18_2_;
        bVar5 = (bool)((byte)(uVar23 >> 10) & 1);
        in_ZmmResult._20_2_ = (ushort)bVar5 * auVar69._20_2_ | (ushort)!bVar5 * auVar95._20_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xb) & 1);
        in_ZmmResult._22_2_ = (ushort)bVar5 * auVar69._22_2_ | (ushort)!bVar5 * auVar95._22_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xc) & 1);
        in_ZmmResult._24_2_ = (ushort)bVar5 * auVar69._24_2_ | (ushort)!bVar5 * auVar95._24_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xd) & 1);
        in_ZmmResult._26_2_ = (ushort)bVar5 * auVar69._26_2_ | (ushort)!bVar5 * auVar95._26_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xe) & 1);
        in_ZmmResult._28_2_ = (ushort)bVar5 * auVar69._28_2_ | (ushort)!bVar5 * auVar95._28_2_;
        bVar5 = SUB81(uVar23 >> 0xf,0);
        in_ZmmResult._30_2_ = (ushort)bVar5 * auVar69._30_2_ | (ushort)!bVar5 * auVar95._30_2_;
        in_ZmmResult._32_32_ = auVar57._32_32_;
        auVar40 = vmovdqu16_avx512vl(auVar69._0_32_);
        *(undefined1 (*) [32])*pauVar29 = auVar40;
        param_1 = (undefined1 (*) [64])0x0;
      }
      plVar21 = (longlong *)((longlong)plVar21 + 1);
      param_1 = (undefined1 (*) [64])(*param_1 + param_2 * 2);
      param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 2);
      plVar22 = plVar20;
    } while ((longlong)plVar21 < (longlong)pauVar37);
    param_6 = *(longlong *)((longlong)plVar20 + 0x20);
  }
  if ((longlong)plVar21 < param_6) {
    *(longlong *)((longlong)plVar20 + 0x20) = param_6;
    pauVar29 = param_3;
LAB_1405be963:
    do {
      lVar16 = param_2 * 2;
      uVar23 = ((ulonglong)pauVar29 & 0x1f) >> 1;
      pcVar17 = param_5;
      pauVar26 = param_1;
      pauVar29 = param_3;
      auVar95 = in_ZMM18;
      if (uVar23 == 0) {
LAB_1405bea59:
        uVar23 = (ulonglong)pcVar17 & 0xf;
        lVar25 = (longlong)pcVar17 >> 4;
        in_ZMM18 = auVar95;
        if (lVar25 != 0) {
          pauVar34 = (undefined1 (*) [32])(*pauVar26 + param_2 * 2);
          auVar40 = vpminuw_avx2(*(undefined1 (*) [32])*pauVar26,*pauVar34);
          pauVar37 = (undefined1 (*) [32])(*pauVar26 + param_2 * 4);
          auVar40 = vpminuw_avx2(auVar40,*pauVar37);
          auVar95 = ZEXT3264(auVar40);
          pcVar24 = (char *)0x0;
          lVar18 = lVar25 + -1;
          if (lVar18 != 0 && 0 < lVar25) goto LAB_1405beaa0;
          goto LAB_1405beaf6;
        }
LAB_1405beb40:
        auVar42 = in_ZMM18._0_32_;
        if (uVar23 != 0) {
code_r0x0001405beb49:
          iVar32 = (int)uVar23 * 2 + 4;
          goto LAB_1405beb4e;
        }
      }
      else {
        pcVar24 = (char *)(0x10 - uVar23);
        if ((longlong)param_5 <= (longlong)pcVar24) {
          pcVar24 = param_5;
        }
        iVar32 = (int)((ulonglong)pcVar24 & 0xf);
        uVar23 = 0xffffffffffffffffU >> ((ulonglong)(uint)-(iVar32 * 2 + 4) & 0x3f) & 0xffffffff;
        auVar70._32_32_ = in_ZmmResult._32_32_;
        auVar70._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_1);
        bVar1 = (byte)uVar23;
        auVar95[1] = ((byte)(uVar23 >> 1) & 1) * auVar70[1];
        auVar95[0] = (bVar1 & 1) * auVar70[0];
        auVar95[2] = ((byte)(uVar23 >> 2) & 1) * auVar70[2];
        auVar95[3] = ((byte)(uVar23 >> 3) & 1) * auVar70[3];
        auVar95[4] = ((byte)(uVar23 >> 4) & 1) * auVar70[4];
        auVar95[5] = ((byte)(uVar23 >> 5) & 1) * auVar70[5];
        auVar95[6] = ((byte)(uVar23 >> 6) & 1) * auVar70[6];
        auVar95[7] = ((byte)(uVar23 >> 7) & 1) * auVar70[7];
        bVar2 = (byte)(uVar23 >> 8);
        auVar95[8] = (bVar2 & 1) * auVar70[8];
        auVar95[9] = ((byte)(uVar23 >> 9) & 1) * auVar70[9];
        auVar95[10] = ((byte)(uVar23 >> 10) & 1) * auVar70[10];
        auVar95[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar70[0xb];
        auVar95[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar70[0xc];
        auVar95[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar70[0xd];
        auVar95[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar70[0xe];
        auVar95[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar70[0xf];
        bVar3 = (byte)(uVar23 >> 0x10);
        auVar95[0x10] = (bVar3 & 1) * auVar70[0x10];
        auVar95[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar70[0x11];
        auVar95[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar70[0x12];
        auVar95[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar70[0x13];
        auVar95[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar70[0x14];
        auVar95[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar70[0x15];
        auVar95[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar70[0x16];
        auVar95[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar70[0x17];
        bVar4 = (byte)(uVar23 >> 0x18);
        auVar95[0x18] = (bVar4 & 1) * auVar70[0x18];
        auVar95[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar70[0x19];
        auVar95[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar70[0x1a];
        auVar95[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar70[0x1b];
        auVar95[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar70[0x1c];
        auVar95._30_34_ = auVar70._30_34_;
        auVar95[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar70[0x1d];
        auVar71._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar16));
        auVar71._32_32_ = auVar70._32_32_;
        auVar72[1] = ((byte)(uVar23 >> 1) & 1) * auVar71[1];
        auVar72[0] = (bVar1 & 1) * auVar71[0];
        auVar72[2] = ((byte)(uVar23 >> 2) & 1) * auVar71[2];
        auVar72[3] = ((byte)(uVar23 >> 3) & 1) * auVar71[3];
        auVar72[4] = ((byte)(uVar23 >> 4) & 1) * auVar71[4];
        auVar72[5] = ((byte)(uVar23 >> 5) & 1) * auVar71[5];
        auVar72[6] = ((byte)(uVar23 >> 6) & 1) * auVar71[6];
        auVar72[7] = ((byte)(uVar23 >> 7) & 1) * auVar71[7];
        auVar72[8] = (bVar2 & 1) * auVar71[8];
        auVar72[9] = ((byte)(uVar23 >> 9) & 1) * auVar71[9];
        auVar72[10] = ((byte)(uVar23 >> 10) & 1) * auVar71[10];
        auVar72[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar71[0xb];
        auVar72[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar71[0xc];
        auVar72[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar71[0xd];
        auVar72[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar71[0xe];
        auVar72[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar71[0xf];
        auVar72[0x10] = (bVar3 & 1) * auVar71[0x10];
        auVar72[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar71[0x11];
        auVar72[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar71[0x12];
        auVar72[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar71[0x13];
        auVar72[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar71[0x14];
        auVar72[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar71[0x15];
        auVar72[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar71[0x16];
        auVar72[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar71[0x17];
        auVar72[0x18] = (bVar4 & 1) * auVar71[0x18];
        auVar72[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar71[0x19];
        auVar72[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar71[0x1a];
        auVar72[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar71[0x1b];
        auVar72[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar71[0x1c];
        auVar72._30_34_ = auVar71._30_34_;
        auVar72[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar71[0x1d];
        auVar73._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 4));
        auVar73._32_32_ = auVar70._32_32_;
        auVar74[1] = ((byte)(uVar23 >> 1) & 1) * auVar73[1];
        auVar74[0] = (bVar1 & 1) * auVar73[0];
        auVar74[2] = ((byte)(uVar23 >> 2) & 1) * auVar73[2];
        auVar74[3] = ((byte)(uVar23 >> 3) & 1) * auVar73[3];
        auVar74[4] = ((byte)(uVar23 >> 4) & 1) * auVar73[4];
        auVar74[5] = ((byte)(uVar23 >> 5) & 1) * auVar73[5];
        auVar74[6] = ((byte)(uVar23 >> 6) & 1) * auVar73[6];
        auVar74[7] = ((byte)(uVar23 >> 7) & 1) * auVar73[7];
        auVar74[8] = (bVar2 & 1) * auVar73[8];
        auVar74[9] = ((byte)(uVar23 >> 9) & 1) * auVar73[9];
        auVar74[10] = ((byte)(uVar23 >> 10) & 1) * auVar73[10];
        auVar74[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar73[0xb];
        auVar74[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar73[0xc];
        auVar74[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar73[0xd];
        auVar74[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar73[0xe];
        auVar74[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar73[0xf];
        auVar74[0x10] = (bVar3 & 1) * auVar73[0x10];
        auVar74[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar73[0x11];
        auVar74[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar73[0x12];
        auVar74[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar73[0x13];
        auVar74[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar73[0x14];
        auVar74[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar73[0x15];
        auVar74[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar73[0x16];
        auVar74[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar73[0x17];
        auVar74[0x18] = (bVar4 & 1) * auVar73[0x18];
        auVar74[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar73[0x19];
        auVar74[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar73[0x1a];
        auVar74[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar73[0x1b];
        auVar74[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar73[0x1c];
        auVar74._30_34_ = auVar73._30_34_;
        auVar74[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar73[0x1d];
        uVar28 = iVar32 * 2 - 0x1c;
        uVar28 = ~((int)uVar28 >> 0x1f) & uVar28;
        pauVar26 = (undefined1 (*) [64])(ulonglong)uVar28;
        in_ZmmResult._32_32_ = (undefined1  [32])0x0;
        if ((int)uVar28 < 1) {
          auVar40 = (undefined1  [32])0x0;
          auVar43 = in_ZmmResult._32_32_;
        }
        else {
          pauVar26 = (undefined1 (*) [64])(ulonglong)-uVar28;
          uVar23 = 0xffffffffffffffffU >> ((ulonglong)pauVar26 & 0x3f) & 0xffffffff;
          auVar75._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + 0x20));
          auVar75._32_32_ = auVar70._32_32_;
          bVar1 = (byte)uVar23;
          auVar76[1] = ((byte)(uVar23 >> 1) & 1) * auVar75[1];
          auVar76[0] = (bVar1 & 1) * auVar75[0];
          auVar76[2] = ((byte)(uVar23 >> 2) & 1) * auVar75[2];
          auVar76[3] = ((byte)(uVar23 >> 3) & 1) * auVar75[3];
          auVar76[4] = ((byte)(uVar23 >> 4) & 1) * auVar75[4];
          auVar76[5] = ((byte)(uVar23 >> 5) & 1) * auVar75[5];
          auVar76[6] = ((byte)(uVar23 >> 6) & 1) * auVar75[6];
          auVar76[7] = ((byte)(uVar23 >> 7) & 1) * auVar75[7];
          bVar2 = (byte)(uVar23 >> 8);
          auVar76[8] = (bVar2 & 1) * auVar75[8];
          auVar76[9] = ((byte)(uVar23 >> 9) & 1) * auVar75[9];
          auVar76[10] = ((byte)(uVar23 >> 10) & 1) * auVar75[10];
          auVar76[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar75[0xb];
          auVar76[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar75[0xc];
          auVar76[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar75[0xd];
          auVar76[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar75[0xe];
          auVar76[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar75[0xf];
          bVar3 = (byte)(uVar23 >> 0x10);
          auVar76[0x10] = (bVar3 & 1) * auVar75[0x10];
          auVar76[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar75[0x11];
          auVar76[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar75[0x12];
          auVar76[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar75[0x13];
          auVar76[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar75[0x14];
          auVar76[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar75[0x15];
          auVar76[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar75[0x16];
          auVar76[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar75[0x17];
          bVar4 = (byte)(uVar23 >> 0x18);
          auVar76[0x18] = (bVar4 & 1) * auVar75[0x18];
          auVar76[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar75[0x19];
          auVar76[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar75[0x1a];
          auVar76[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar75[0x1b];
          auVar76[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar75[0x1c];
          auVar76._30_34_ = auVar75._30_34_;
          auVar76[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar75[0x1d];
          auVar77._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar16 + 0x20));
          auVar77._32_32_ = auVar70._32_32_;
          auVar78[1] = ((byte)(uVar23 >> 1) & 1) * auVar77[1];
          auVar78[0] = (bVar1 & 1) * auVar77[0];
          auVar78[2] = ((byte)(uVar23 >> 2) & 1) * auVar77[2];
          auVar78[3] = ((byte)(uVar23 >> 3) & 1) * auVar77[3];
          auVar78[4] = ((byte)(uVar23 >> 4) & 1) * auVar77[4];
          auVar78[5] = ((byte)(uVar23 >> 5) & 1) * auVar77[5];
          auVar78[6] = ((byte)(uVar23 >> 6) & 1) * auVar77[6];
          auVar78[7] = ((byte)(uVar23 >> 7) & 1) * auVar77[7];
          auVar78[8] = (bVar2 & 1) * auVar77[8];
          auVar78[9] = ((byte)(uVar23 >> 9) & 1) * auVar77[9];
          auVar78[10] = ((byte)(uVar23 >> 10) & 1) * auVar77[10];
          auVar78[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar77[0xb];
          auVar78[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar77[0xc];
          auVar78[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar77[0xd];
          auVar78[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar77[0xe];
          auVar78[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar77[0xf];
          auVar78[0x10] = (bVar3 & 1) * auVar77[0x10];
          auVar78[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar77[0x11];
          auVar78[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar77[0x12];
          auVar78[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar77[0x13];
          auVar78[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar77[0x14];
          auVar78[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar77[0x15];
          auVar78[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar77[0x16];
          auVar78[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar77[0x17];
          auVar78[0x18] = (bVar4 & 1) * auVar77[0x18];
          auVar78[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar77[0x19];
          auVar78[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar77[0x1a];
          auVar78[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar77[0x1b];
          auVar78[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar77[0x1c];
          auVar78._30_34_ = auVar77._30_34_;
          auVar78[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar77[0x1d];
          in_ZmmResult._32_32_ = auVar78._0_32_;
          auVar79._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 4 + 0x20));
          auVar79._32_32_ = auVar70._32_32_;
          auVar80[1] = ((byte)(uVar23 >> 1) & 1) * auVar79[1];
          auVar80[0] = (bVar1 & 1) * auVar79[0];
          auVar80[2] = ((byte)(uVar23 >> 2) & 1) * auVar79[2];
          auVar80[3] = ((byte)(uVar23 >> 3) & 1) * auVar79[3];
          auVar80[4] = ((byte)(uVar23 >> 4) & 1) * auVar79[4];
          auVar80[5] = ((byte)(uVar23 >> 5) & 1) * auVar79[5];
          auVar80[6] = ((byte)(uVar23 >> 6) & 1) * auVar79[6];
          auVar80[7] = ((byte)(uVar23 >> 7) & 1) * auVar79[7];
          auVar80[8] = (bVar2 & 1) * auVar79[8];
          auVar80[9] = ((byte)(uVar23 >> 9) & 1) * auVar79[9];
          auVar80[10] = ((byte)(uVar23 >> 10) & 1) * auVar79[10];
          auVar80[0xb] = ((byte)(uVar23 >> 0xb) & 1) * auVar79[0xb];
          auVar80[0xc] = ((byte)(uVar23 >> 0xc) & 1) * auVar79[0xc];
          auVar80[0xd] = ((byte)(uVar23 >> 0xd) & 1) * auVar79[0xd];
          auVar80[0xe] = ((byte)(uVar23 >> 0xe) & 1) * auVar79[0xe];
          auVar80[0xf] = ((byte)(uVar23 >> 0xf) & 1) * auVar79[0xf];
          auVar80[0x10] = (bVar3 & 1) * auVar79[0x10];
          auVar80[0x11] = ((byte)(uVar23 >> 0x11) & 1) * auVar79[0x11];
          auVar80[0x12] = ((byte)(uVar23 >> 0x12) & 1) * auVar79[0x12];
          auVar80[0x13] = ((byte)(uVar23 >> 0x13) & 1) * auVar79[0x13];
          auVar80[0x14] = ((byte)(uVar23 >> 0x14) & 1) * auVar79[0x14];
          auVar80[0x15] = ((byte)(uVar23 >> 0x15) & 1) * auVar79[0x15];
          auVar80[0x16] = ((byte)(uVar23 >> 0x16) & 1) * auVar79[0x16];
          auVar80[0x17] = ((byte)(uVar23 >> 0x17) & 1) * auVar79[0x17];
          auVar80[0x18] = (bVar4 & 1) * auVar79[0x18];
          auVar80[0x19] = ((byte)(uVar23 >> 0x19) & 1) * auVar79[0x19];
          auVar80[0x1a] = ((byte)(uVar23 >> 0x1a) & 1) * auVar79[0x1a];
          auVar80[0x1b] = ((byte)(uVar23 >> 0x1b) & 1) * auVar79[0x1b];
          auVar80[0x1c] = ((byte)(uVar23 >> 0x1c) & 1) * auVar79[0x1c];
          auVar80._30_34_ = auVar79._30_34_;
          auVar80[0x1d] = ((byte)(uVar23 >> 0x1d) & 1) * auVar79[0x1d];
          auVar40 = auVar80._0_32_;
          auVar43 = auVar76._0_32_;
        }
        auVar42 = vpminuw_avx2(auVar95._0_32_,auVar72._0_32_);
        in_ZmmResult._32_32_ = vpminuw_avx2(auVar43,in_ZmmResult._32_32_);
        uVar23 = 0x10 - ((ulonglong)pcVar24 & 0xf);
        auVar43 = vpminuw_avx2(auVar42,auVar74._0_32_);
        lVar18 = 0xffff;
        in_ZmmResult._32_32_ = vpminuw_avx2(in_ZmmResult._32_32_,auVar40);
        pauVar29 = (undefined1 (*) [64])(*param_3 + (longlong)pcVar24 * 2);
        in_ZmmResult._32_32_ = vshufi32x4_avx512vl(auVar43,in_ZmmResult._32_32_,1);
        auVar95 = ZEXT3264(in_ZmmResult._32_32_);
        auVar40 = vpalignr_avx2(in_ZmmResult._32_32_,auVar43,2);
        in_ZmmResult._0_32_ = vpalignr_avx512vl(in_ZmmResult._32_32_,auVar43);
        in_ZmmResult._32_32_ = auVar70._32_32_;
        cVar11 = (char)param_5 + -0x3c;
        param_5 = (char *)CONCAT71((int7)((ulonglong)param_5 >> 8),cVar11);
        param_1 = (undefined1 (*) [64])(param_1[-1] + 0x3f);
        if (param_1 == (undefined1 (*) [64])0x0) {
          param_5 = (char *)(((ulonglong)param_5 & 0xffffffff | 0xffff00000000) / 0xffff &
                            0xffffffff);
          in_ZmmResult._32_32_ = vpminuw_avx512vl(auVar43,auVar40);
          pcVar17 = param_5 + -(longlong)pcVar24;
          uVar23 = (ulonglong)pauVar26 & 0xffff;
          pauVar26 = (undefined1 (*) [64])((longlong)pcVar24 * 2);
          auVar81._0_32_ = vpminuw_avx512vl(in_ZmmResult._32_32_,in_ZmmResult._0_32_);
          auVar81._32_32_ = auVar70._32_32_;
          auVar95 = ZEXT3264(auVar81._0_32_);
          bVar5 = (bool)((byte)(uVar23 >> 3) & 1);
          auVar9._2_56_ = auVar81._8_56_;
          auVar9._0_2_ = (ushort)bVar5 * auVar81._6_2_ | (ushort)!bVar5 * in_ZMM18._6_2_;
          in_ZmmResult._0_8_ = auVar9._0_8_ << 0x30;
          bVar5 = (bool)((byte)(uVar23 >> 4) & 1);
          in_ZmmResult._8_2_ = (ushort)bVar5 * auVar81._8_2_ | (ushort)!bVar5 * in_ZMM18._8_2_;
          bVar5 = (bool)((byte)(uVar23 >> 5) & 1);
          in_ZmmResult._10_2_ = (ushort)bVar5 * auVar81._10_2_ | (ushort)!bVar5 * in_ZMM18._10_2_;
          bVar5 = (bool)((byte)(uVar23 >> 6) & 1);
          in_ZmmResult._12_2_ = (ushort)bVar5 * auVar81._12_2_ | (ushort)!bVar5 * in_ZMM18._12_2_;
          bVar5 = (bool)((byte)(uVar23 >> 7) & 1);
          in_ZmmResult._14_2_ = (ushort)bVar5 * auVar81._14_2_ | (ushort)!bVar5 * in_ZMM18._14_2_;
          bVar5 = (bool)((byte)(uVar23 >> 8) & 1);
          in_ZmmResult._16_2_ = (ushort)bVar5 * auVar81._16_2_ | (ushort)!bVar5 * in_ZMM18._16_2_;
          bVar5 = (bool)((byte)(uVar23 >> 9) & 1);
          in_ZmmResult._18_2_ = (ushort)bVar5 * auVar81._18_2_ | (ushort)!bVar5 * in_ZMM18._18_2_;
          bVar5 = (bool)((byte)(uVar23 >> 10) & 1);
          in_ZmmResult._20_2_ = (ushort)bVar5 * auVar81._20_2_ | (ushort)!bVar5 * in_ZMM18._20_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xb) & 1);
          in_ZmmResult._22_2_ = (ushort)bVar5 * auVar81._22_2_ | (ushort)!bVar5 * in_ZMM18._22_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xc) & 1);
          in_ZmmResult._24_2_ = (ushort)bVar5 * auVar81._24_2_ | (ushort)!bVar5 * in_ZMM18._24_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xd) & 1);
          in_ZmmResult._26_2_ = (ushort)bVar5 * auVar81._26_2_ | (ushort)!bVar5 * in_ZMM18._26_2_;
          bVar5 = (bool)((byte)(uVar23 >> 0xe) & 1);
          in_ZmmResult._28_2_ = (ushort)bVar5 * auVar81._28_2_ | (ushort)!bVar5 * in_ZMM18._28_2_;
          bVar5 = SUB81(uVar23 >> 0xf,0);
          in_ZmmResult._30_2_ = (ushort)bVar5 * auVar81._30_2_ | (ushort)!bVar5 * in_ZMM18._30_2_;
          in_ZmmResult._32_32_ = auVar70._32_32_;
          auVar40 = vmovdqu16_avx512vl(auVar81._0_32_);
          *(undefined1 (*) [32])*param_3 = auVar40;
          goto LAB_1405bea59;
        }
        *param_5 = *param_5 + cVar11;
        *param_5 = *param_5 + cVar11;
LAB_1405beaa0:
        do {
          pcVar24 = pcVar24 + 1;
          auVar40 = vpminuw_avx2(*(undefined1 (*) [32])(*pauVar26 + 0x20),
                                 *(undefined1 (*) [32])(*pauVar26 + lVar16 + 0x20));
          auVar42 = vpminuw_avx512vl(auVar40,*(undefined1 (*) [32])(*pauVar26 + param_2 * 4 + 0x20))
          ;
          pauVar26 = (undefined1 (*) [64])(*pauVar26 + 0x20);
          auVar41 = auVar95._0_32_;
          auVar43 = vshufi32x4_avx512vl(auVar41,auVar42,1);
          auVar40 = vpalignr_avx2(auVar43,auVar41,2);
          auVar43 = vpalignr_avx2(auVar43,auVar41,4);
          auVar40 = vpminuw_avx2(auVar40,auVar41);
          auVar40 = vpminuw_avx512vl(auVar43,auVar40);
          auVar40 = vmovdqu32_avx512vl(auVar40);
          *(undefined1 (*) [32])*pauVar29 = auVar40;
          pauVar29 = (undefined1 (*) [64])(*pauVar29 + 0x20);
          in_ZmmResult._0_32_ = vmovdqa32_avx512vl(auVar42);
          auVar95 = ZEXT3264(in_ZmmResult._0_32_);
        } while ((longlong)pcVar24 < lVar18);
        pauVar34 = (undefined1 (*) [32])(*pauVar26 + param_2 * 2);
        pauVar37 = (undefined1 (*) [32])(*pauVar26 + param_2 * 4);
        auVar40 = in_ZmmResult._0_32_;
LAB_1405beaf6:
        auVar42 = in_ZMM18._0_32_;
        iVar32 = (int)pcVar24;
        puVar27 = *pauVar26;
        pauVar26 = (undefined1 (*) [64])(*pauVar26 + 0x20);
        auVar43 = vpminuw_avx2(ZEXT432(*(uint *)(puVar27 + 0x20)),ZEXT432(*(uint *)pauVar34[1]));
        auVar43 = vpminuw_avx2(auVar43,ZEXT432(*(uint *)pauVar37[1]));
        auVar43 = vshufi32x4_avx512vl(auVar40,auVar43,1);
        vpalignr_avx512vl(auVar43,auVar40);
        cVar14 = (char)((ulonglong)param_5 >> 8);
        cVar11 = (char)param_5;
        cVar13 = cVar14 + *(char *)(lVar18 + -0x1d);
        param_5 = (char *)CONCAT62((int6)((ulonglong)param_5 >> 0x10),CONCAT11(cVar13,cVar11));
        if (SCARRY1(cVar14,*(char *)(lVar18 + -0x1d)) == cVar13 < '\0') {
          *param_5 = *param_5 + cVar11;
          goto code_r0x0001405beb49;
        }
        if (cVar13 == '\0') {
          in_ZmmResult._0_32_ = vpminuw_avx512vl(auVar42,auVar40);
          auVar40 = vmovdqu32_avx512vl(in_ZmmResult._0_32_);
          *(undefined1 (*) [32])*pauVar29 = auVar40;
          pauVar29 = (undefined1 (*) [64])(*pauVar29 + 0x20);
          goto LAB_1405beb40;
        }
LAB_1405beb4e:
        uVar38 = 0xffffffffffffffffU >> ((ulonglong)(uint)-iVar32 & 0x3f) & 0xffffffff;
        auVar82._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*pauVar26);
        auVar82._32_32_ = in_ZmmResult._32_32_;
        bVar1 = (byte)uVar38;
        auVar83[1] = ((byte)(uVar38 >> 1) & 1) * auVar82[1];
        auVar83[0] = (bVar1 & 1) * auVar82[0];
        auVar83[2] = ((byte)(uVar38 >> 2) & 1) * auVar82[2];
        auVar83[3] = ((byte)(uVar38 >> 3) & 1) * auVar82[3];
        auVar83[4] = ((byte)(uVar38 >> 4) & 1) * auVar82[4];
        auVar83[5] = ((byte)(uVar38 >> 5) & 1) * auVar82[5];
        auVar83[6] = ((byte)(uVar38 >> 6) & 1) * auVar82[6];
        auVar83[7] = ((byte)(uVar38 >> 7) & 1) * auVar82[7];
        bVar2 = (byte)(uVar38 >> 8);
        auVar83[8] = (bVar2 & 1) * auVar82[8];
        auVar83[9] = ((byte)(uVar38 >> 9) & 1) * auVar82[9];
        auVar83[10] = ((byte)(uVar38 >> 10) & 1) * auVar82[10];
        auVar83[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar82[0xb];
        auVar83[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar82[0xc];
        auVar83[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar82[0xd];
        auVar83[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar82[0xe];
        auVar83[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar82[0xf];
        bVar3 = (byte)(uVar38 >> 0x10);
        auVar83[0x10] = (bVar3 & 1) * auVar82[0x10];
        auVar83[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar82[0x11];
        auVar83[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar82[0x12];
        auVar83[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar82[0x13];
        auVar83[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar82[0x14];
        auVar83[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar82[0x15];
        auVar83[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar82[0x16];
        auVar83[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar82[0x17];
        bVar4 = (byte)(uVar38 >> 0x18);
        auVar83[0x18] = (bVar4 & 1) * auVar82[0x18];
        auVar83[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar82[0x19];
        auVar83[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar82[0x1a];
        auVar83[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar82[0x1b];
        auVar83[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar82[0x1c];
        auVar83._30_34_ = auVar82._30_34_;
        auVar83[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar82[0x1d];
        auVar84._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + lVar16));
        auVar84._32_32_ = in_ZmmResult._32_32_;
        auVar85[1] = ((byte)(uVar38 >> 1) & 1) * auVar84[1];
        auVar85[0] = (bVar1 & 1) * auVar84[0];
        auVar85[2] = ((byte)(uVar38 >> 2) & 1) * auVar84[2];
        auVar85[3] = ((byte)(uVar38 >> 3) & 1) * auVar84[3];
        auVar85[4] = ((byte)(uVar38 >> 4) & 1) * auVar84[4];
        auVar85[5] = ((byte)(uVar38 >> 5) & 1) * auVar84[5];
        auVar85[6] = ((byte)(uVar38 >> 6) & 1) * auVar84[6];
        auVar85[7] = ((byte)(uVar38 >> 7) & 1) * auVar84[7];
        auVar85[8] = (bVar2 & 1) * auVar84[8];
        auVar85[9] = ((byte)(uVar38 >> 9) & 1) * auVar84[9];
        auVar85[10] = ((byte)(uVar38 >> 10) & 1) * auVar84[10];
        auVar85[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar84[0xb];
        auVar85[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar84[0xc];
        auVar85[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar84[0xd];
        auVar85[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar84[0xe];
        auVar85[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar84[0xf];
        auVar85[0x10] = (bVar3 & 1) * auVar84[0x10];
        auVar85[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar84[0x11];
        auVar85[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar84[0x12];
        auVar85[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar84[0x13];
        auVar85[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar84[0x14];
        auVar85[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar84[0x15];
        auVar85[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar84[0x16];
        auVar85[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar84[0x17];
        auVar85[0x18] = (bVar4 & 1) * auVar84[0x18];
        auVar85[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar84[0x19];
        auVar85[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar84[0x1a];
        auVar85[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar84[0x1b];
        auVar85[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar84[0x1c];
        auVar85._30_34_ = auVar84._30_34_;
        auVar85[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar84[0x1d];
        auVar86._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + param_2 * 4));
        auVar86._32_32_ = in_ZmmResult._32_32_;
        auVar87[1] = ((byte)(uVar38 >> 1) & 1) * auVar86[1];
        auVar87[0] = (bVar1 & 1) * auVar86[0];
        auVar87[2] = ((byte)(uVar38 >> 2) & 1) * auVar86[2];
        auVar87[3] = ((byte)(uVar38 >> 3) & 1) * auVar86[3];
        auVar87[4] = ((byte)(uVar38 >> 4) & 1) * auVar86[4];
        auVar87[5] = ((byte)(uVar38 >> 5) & 1) * auVar86[5];
        auVar87[6] = ((byte)(uVar38 >> 6) & 1) * auVar86[6];
        auVar87[7] = ((byte)(uVar38 >> 7) & 1) * auVar86[7];
        auVar87[8] = (bVar2 & 1) * auVar86[8];
        auVar87[9] = ((byte)(uVar38 >> 9) & 1) * auVar86[9];
        auVar87[10] = ((byte)(uVar38 >> 10) & 1) * auVar86[10];
        auVar87[0xb] = ((byte)(uVar38 >> 0xb) & 1) * auVar86[0xb];
        auVar87[0xc] = ((byte)(uVar38 >> 0xc) & 1) * auVar86[0xc];
        auVar87[0xd] = ((byte)(uVar38 >> 0xd) & 1) * auVar86[0xd];
        auVar87[0xe] = ((byte)(uVar38 >> 0xe) & 1) * auVar86[0xe];
        auVar87[0xf] = ((byte)(uVar38 >> 0xf) & 1) * auVar86[0xf];
        auVar87[0x10] = (bVar3 & 1) * auVar86[0x10];
        auVar87[0x11] = ((byte)(uVar38 >> 0x11) & 1) * auVar86[0x11];
        auVar87[0x12] = ((byte)(uVar38 >> 0x12) & 1) * auVar86[0x12];
        auVar87[0x13] = ((byte)(uVar38 >> 0x13) & 1) * auVar86[0x13];
        auVar87[0x14] = ((byte)(uVar38 >> 0x14) & 1) * auVar86[0x14];
        auVar87[0x15] = ((byte)(uVar38 >> 0x15) & 1) * auVar86[0x15];
        auVar87[0x16] = ((byte)(uVar38 >> 0x16) & 1) * auVar86[0x16];
        auVar87[0x17] = ((byte)(uVar38 >> 0x17) & 1) * auVar86[0x17];
        auVar87[0x18] = (bVar4 & 1) * auVar86[0x18];
        auVar87[0x19] = ((byte)(uVar38 >> 0x19) & 1) * auVar86[0x19];
        auVar87[0x1a] = ((byte)(uVar38 >> 0x1a) & 1) * auVar86[0x1a];
        auVar87[0x1b] = ((byte)(uVar38 >> 0x1b) & 1) * auVar86[0x1b];
        auVar87[0x1c] = ((byte)(uVar38 >> 0x1c) & 1) * auVar86[0x1c];
        auVar87._30_34_ = auVar86._30_34_;
        auVar87[0x1d] = ((byte)(uVar38 >> 0x1d) & 1) * auVar86[0x1d];
        uVar28 = (int)uVar23 * 2 - 0x1c;
        uVar28 = ~((int)uVar28 >> 0x1f) & uVar28;
        uVar38 = (ulonglong)uVar28;
        auVar40 = (undefined1  [32])0x0;
        if ((int)uVar28 < 1) {
          auVar43 = (undefined1  [32])0x0;
          auVar41 = auVar40;
        }
        else {
          uVar38 = (ulonglong)-uVar28;
          uVar39 = 0xffffffffffffffffU >> (uVar38 & 0x3f) & 0xffffffff;
          auVar88._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + 0x20));
          auVar88._32_32_ = in_ZmmResult._32_32_;
          bVar1 = (byte)uVar39;
          auVar89[1] = ((byte)(uVar39 >> 1) & 1) * auVar88[1];
          auVar89[0] = (bVar1 & 1) * auVar88[0];
          auVar89[2] = ((byte)(uVar39 >> 2) & 1) * auVar88[2];
          auVar89[3] = ((byte)(uVar39 >> 3) & 1) * auVar88[3];
          auVar89[4] = ((byte)(uVar39 >> 4) & 1) * auVar88[4];
          auVar89[5] = ((byte)(uVar39 >> 5) & 1) * auVar88[5];
          auVar89[6] = ((byte)(uVar39 >> 6) & 1) * auVar88[6];
          auVar89[7] = ((byte)(uVar39 >> 7) & 1) * auVar88[7];
          bVar2 = (byte)(uVar39 >> 8);
          auVar89[8] = (bVar2 & 1) * auVar88[8];
          auVar89[9] = ((byte)(uVar39 >> 9) & 1) * auVar88[9];
          auVar89[10] = ((byte)(uVar39 >> 10) & 1) * auVar88[10];
          auVar89[0xb] = ((byte)(uVar39 >> 0xb) & 1) * auVar88[0xb];
          auVar89[0xc] = ((byte)(uVar39 >> 0xc) & 1) * auVar88[0xc];
          auVar89[0xd] = ((byte)(uVar39 >> 0xd) & 1) * auVar88[0xd];
          auVar89[0xe] = ((byte)(uVar39 >> 0xe) & 1) * auVar88[0xe];
          auVar89[0xf] = ((byte)(uVar39 >> 0xf) & 1) * auVar88[0xf];
          bVar3 = (byte)(uVar39 >> 0x10);
          auVar89[0x10] = (bVar3 & 1) * auVar88[0x10];
          auVar89[0x11] = ((byte)(uVar39 >> 0x11) & 1) * auVar88[0x11];
          auVar89[0x12] = ((byte)(uVar39 >> 0x12) & 1) * auVar88[0x12];
          auVar89[0x13] = ((byte)(uVar39 >> 0x13) & 1) * auVar88[0x13];
          auVar89[0x14] = ((byte)(uVar39 >> 0x14) & 1) * auVar88[0x14];
          auVar89[0x15] = ((byte)(uVar39 >> 0x15) & 1) * auVar88[0x15];
          auVar89[0x16] = ((byte)(uVar39 >> 0x16) & 1) * auVar88[0x16];
          auVar89[0x17] = ((byte)(uVar39 >> 0x17) & 1) * auVar88[0x17];
          bVar4 = (byte)(uVar39 >> 0x18);
          auVar89[0x18] = (bVar4 & 1) * auVar88[0x18];
          auVar89[0x19] = ((byte)(uVar39 >> 0x19) & 1) * auVar88[0x19];
          auVar89[0x1a] = ((byte)(uVar39 >> 0x1a) & 1) * auVar88[0x1a];
          auVar89[0x1b] = ((byte)(uVar39 >> 0x1b) & 1) * auVar88[0x1b];
          auVar89[0x1c] = ((byte)(uVar39 >> 0x1c) & 1) * auVar88[0x1c];
          auVar89._30_34_ = auVar88._30_34_;
          auVar89[0x1d] = ((byte)(uVar39 >> 0x1d) & 1) * auVar88[0x1d];
          auVar90._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + lVar16 + 0x20));
          auVar90._32_32_ = in_ZmmResult._32_32_;
          auVar91[1] = ((byte)(uVar39 >> 1) & 1) * auVar90[1];
          auVar91[0] = (bVar1 & 1) * auVar90[0];
          auVar91[2] = ((byte)(uVar39 >> 2) & 1) * auVar90[2];
          auVar91[3] = ((byte)(uVar39 >> 3) & 1) * auVar90[3];
          auVar91[4] = ((byte)(uVar39 >> 4) & 1) * auVar90[4];
          auVar91[5] = ((byte)(uVar39 >> 5) & 1) * auVar90[5];
          auVar91[6] = ((byte)(uVar39 >> 6) & 1) * auVar90[6];
          auVar91[7] = ((byte)(uVar39 >> 7) & 1) * auVar90[7];
          auVar91[8] = (bVar2 & 1) * auVar90[8];
          auVar91[9] = ((byte)(uVar39 >> 9) & 1) * auVar90[9];
          auVar91[10] = ((byte)(uVar39 >> 10) & 1) * auVar90[10];
          auVar91[0xb] = ((byte)(uVar39 >> 0xb) & 1) * auVar90[0xb];
          auVar91[0xc] = ((byte)(uVar39 >> 0xc) & 1) * auVar90[0xc];
          auVar91[0xd] = ((byte)(uVar39 >> 0xd) & 1) * auVar90[0xd];
          auVar91[0xe] = ((byte)(uVar39 >> 0xe) & 1) * auVar90[0xe];
          auVar91[0xf] = ((byte)(uVar39 >> 0xf) & 1) * auVar90[0xf];
          auVar91[0x10] = (bVar3 & 1) * auVar90[0x10];
          auVar91[0x11] = ((byte)(uVar39 >> 0x11) & 1) * auVar90[0x11];
          auVar91[0x12] = ((byte)(uVar39 >> 0x12) & 1) * auVar90[0x12];
          auVar91[0x13] = ((byte)(uVar39 >> 0x13) & 1) * auVar90[0x13];
          auVar91[0x14] = ((byte)(uVar39 >> 0x14) & 1) * auVar90[0x14];
          auVar91[0x15] = ((byte)(uVar39 >> 0x15) & 1) * auVar90[0x15];
          auVar91[0x16] = ((byte)(uVar39 >> 0x16) & 1) * auVar90[0x16];
          auVar91[0x17] = ((byte)(uVar39 >> 0x17) & 1) * auVar90[0x17];
          auVar91[0x18] = (bVar4 & 1) * auVar90[0x18];
          auVar91[0x19] = ((byte)(uVar39 >> 0x19) & 1) * auVar90[0x19];
          auVar91[0x1a] = ((byte)(uVar39 >> 0x1a) & 1) * auVar90[0x1a];
          auVar91[0x1b] = ((byte)(uVar39 >> 0x1b) & 1) * auVar90[0x1b];
          auVar91[0x1c] = ((byte)(uVar39 >> 0x1c) & 1) * auVar90[0x1c];
          auVar91._30_34_ = auVar90._30_34_;
          auVar91[0x1d] = ((byte)(uVar39 >> 0x1d) & 1) * auVar90[0x1d];
          auVar40 = auVar91._0_32_;
          auVar92._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar26 + param_2 * 4 + 0x20))
          ;
          auVar92._32_32_ = in_ZmmResult._32_32_;
          auVar93[1] = ((byte)(uVar39 >> 1) & 1) * auVar92[1];
          auVar93[0] = (bVar1 & 1) * auVar92[0];
          auVar93[2] = ((byte)(uVar39 >> 2) & 1) * auVar92[2];
          auVar93[3] = ((byte)(uVar39 >> 3) & 1) * auVar92[3];
          auVar93[4] = ((byte)(uVar39 >> 4) & 1) * auVar92[4];
          auVar93[5] = ((byte)(uVar39 >> 5) & 1) * auVar92[5];
          auVar93[6] = ((byte)(uVar39 >> 6) & 1) * auVar92[6];
          auVar93[7] = ((byte)(uVar39 >> 7) & 1) * auVar92[7];
          auVar93[8] = (bVar2 & 1) * auVar92[8];
          auVar93[9] = ((byte)(uVar39 >> 9) & 1) * auVar92[9];
          auVar93[10] = ((byte)(uVar39 >> 10) & 1) * auVar92[10];
          auVar93[0xb] = ((byte)(uVar39 >> 0xb) & 1) * auVar92[0xb];
          auVar93[0xc] = ((byte)(uVar39 >> 0xc) & 1) * auVar92[0xc];
          auVar93[0xd] = ((byte)(uVar39 >> 0xd) & 1) * auVar92[0xd];
          auVar93[0xe] = ((byte)(uVar39 >> 0xe) & 1) * auVar92[0xe];
          auVar93[0xf] = ((byte)(uVar39 >> 0xf) & 1) * auVar92[0xf];
          auVar93[0x10] = (bVar3 & 1) * auVar92[0x10];
          auVar93[0x11] = ((byte)(uVar39 >> 0x11) & 1) * auVar92[0x11];
          auVar93[0x12] = ((byte)(uVar39 >> 0x12) & 1) * auVar92[0x12];
          auVar93[0x13] = ((byte)(uVar39 >> 0x13) & 1) * auVar92[0x13];
          auVar93[0x14] = ((byte)(uVar39 >> 0x14) & 1) * auVar92[0x14];
          auVar93[0x15] = ((byte)(uVar39 >> 0x15) & 1) * auVar92[0x15];
          auVar93[0x16] = ((byte)(uVar39 >> 0x16) & 1) * auVar92[0x16];
          auVar93[0x17] = ((byte)(uVar39 >> 0x17) & 1) * auVar92[0x17];
          auVar93[0x18] = (bVar4 & 1) * auVar92[0x18];
          auVar93[0x19] = ((byte)(uVar39 >> 0x19) & 1) * auVar92[0x19];
          auVar93[0x1a] = ((byte)(uVar39 >> 0x1a) & 1) * auVar92[0x1a];
          auVar93[0x1b] = ((byte)(uVar39 >> 0x1b) & 1) * auVar92[0x1b];
          auVar93[0x1c] = ((byte)(uVar39 >> 0x1c) & 1) * auVar92[0x1c];
          auVar93._30_34_ = auVar92._30_34_;
          auVar93[0x1d] = ((byte)(uVar39 >> 0x1d) & 1) * auVar92[0x1d];
          auVar43 = auVar93._0_32_;
          auVar41 = auVar89._0_32_;
        }
        auVar6 = vpminuw_avx2(auVar83._0_32_,auVar85._0_32_);
        auVar40 = vpminuw_avx2(auVar41,auVar40);
        auVar41 = vpminuw_avx2(auVar6,auVar87._0_32_);
        auVar40 = vpminuw_avx2(auVar40,auVar43);
        auVar43 = vshufi32x4_avx512vl(auVar41,auVar40,1);
        auVar40 = vpalignr_avx2(auVar43,auVar41,2);
        auVar43 = vpalignr_avx512vl(auVar43,auVar41);
        uVar15 = (uint7)((ulonglong)param_5 >> 8);
        cVar11 = (char)param_5 + -0x3c;
        pcVar17 = (char *)CONCAT71(uVar15,cVar11);
        puVar27 = param_1[-1] + 0x3f;
        if (puVar27 != (undefined1 *)0x0) {
          *pcVar17 = *pcVar17 + cVar11;
          cVar13 = (char)puVar27;
          *(char *)((longlong)plVar21 + 99) = *(char *)((longlong)plVar21 + 99) + cVar13;
          plVar22 = plVar21;
          if (puVar27 == (undefined1 *)0x0) {
            piVar12 = (int *)(CONCAT71(uVar15,cVar11) & 0xffffffffffffff08);
            *piVar12 = *piVar12 + (int)piVar12;
            *(char *)((longlong)piVar12 + -0x75) = *(char *)((longlong)piVar12 + -0x75) + cVar13;
            *(undefined2 *)((longlong)piVar12 + 0xffff) = in_FS;
            *piVar12 = *piVar12 + (int)piVar12;
            *(char *)(-0x54 - uVar23) = *(char *)(-0x54 - uVar23) + cVar13;
            *(undefined1 *)((ulonglong)uVar15 << 8) = *(undefined1 *)((ulonglong)uVar15 << 8);
            *(char *)((longlong)plVar21 + 99) = *(char *)((longlong)plVar21 + 99) + cVar13;
            plVar22 = (longlong *)*plVar21;
            plVar20 = plVar21 + 1;
          }
          lVar31 = (longlong)*(int *)((longlong)plVar20 + 0xf8);
          lVar30 = (longlong)*(int *)((longlong)plVar20 + 0xf0);
          puVar27 = (undefined1 *)
                    ((longlong)pauVar26 +
                    ((longlong)((int)lVar16 >> 1) * -0xffff -
                    (longlong)(*(int *)((longlong)plVar20 + 0xf8) + -1 >> 1)));
          uVar23 = lVar30 + 0x1fU & 0xffffffffffffffe0;
          lVar16 = *(longlong *)((longlong)plVar20 + 0x110);
          lVar18 = (longlong)*(int *)((longlong)plVar20 + 0xf4);
          lVar25 = (longlong)(int)param_4;
          if (*(longlong *)((longlong)plVar20 + 0x100) == 0) {
            if ((lVar31 == 3) && (uVar38 == 3)) {
              *(longlong *)((longlong)plVar20 + 0xf8) = lVar18;
              *(longlong *)((longlong)plVar20 + 0xf0) = lVar30;
              FUN_140585b40(puVar27);
              return;
            }
            lVar36 = 0;
            lVar35 = uVar38 - 1;
            lVar19 = lVar16;
            if (lVar35 != 0 && uVar38 != 0) {
              *(longlong *)((longlong)plVar20 + 0x88) = lVar18;
              *(ulonglong *)((longlong)plVar20 + 0x60) = uVar38;
              *(longlong *)((longlong)plVar20 + 0x90) = lVar25;
              *(longlong *)((longlong)plVar20 + 0x68) = lVar16;
              *(longlong *)((longlong)plVar20 + 0x70) = param_2;
              *(undefined1 (**) [32])((longlong)plVar20 + 0x80) = pauVar37;
              *(longlong **)((longlong)plVar20 + 0x78) = plVar22;
              do {
                *(undefined8 *)((longlong)plVar20 + 0x20) = 1;
                *(undefined8 *)((longlong)plVar20 + -8) = 0x1405bed3c;
                thunk_FUN_140d2f9e0(puVar27,lVar19,lVar30,lVar31);
                lVar36 = lVar36 + 1;
                puVar27 = puVar27 + 0xffff;
                lVar19 = lVar19 + uVar23;
              } while (lVar36 < lVar35);
              lVar18 = *(longlong *)((longlong)plVar20 + 0x88);
              lVar25 = *(longlong *)((longlong)plVar20 + 0x90);
              lVar16 = *(longlong *)((longlong)plVar20 + 0x68);
              uVar38 = *(ulonglong *)((longlong)plVar20 + 0x60);
              param_2 = *(longlong *)((longlong)plVar20 + 0x70);
              pauVar37 = *(undefined1 (**) [32])((longlong)plVar20 + 0x80);
              plVar22 = *(longlong **)((longlong)plVar20 + 0x78);
            }
            lVar36 = 0;
            if (0 < lVar18) {
              *(ulonglong *)((longlong)plVar20 + 0x70) = uVar23;
              *(longlong *)((longlong)plVar20 + 0x88) = lVar18;
              *(longlong *)((longlong)plVar20 + 0x68) = lVar31;
              *(longlong *)((longlong)plVar20 + 0x90) = lVar25;
              *(undefined8 *)((longlong)plVar20 + 0x60) = 0xffff;
              *(undefined1 (**) [32])((longlong)plVar20 + 0x80) = pauVar37;
              *(longlong **)((longlong)plVar20 + 0x78) = plVar22;
              do {
                *(undefined8 *)((longlong)plVar20 + 0x20) = 1;
                *(undefined8 *)((longlong)plVar20 + -8) = 0x1405bedde;
                thunk_FUN_140d2f9e0(puVar27,lVar19,lVar30,*(undefined8 *)((longlong)plVar20 + 0x68))
                ;
                *(ulonglong *)((longlong)plVar20 + 0x20) = uVar38;
                *(undefined8 *)((longlong)plVar20 + -8) = 0x1405bedf8;
                thunk_FUN_140d2fd40(lVar16,*(undefined8 *)((longlong)plVar20 + 0x70),param_2,lVar30)
                ;
                lVar35 = lVar35 + 1;
                lVar36 = lVar36 + 1;
                lVar19 = lVar19 + *(longlong *)((longlong)plVar20 + 0x70);
                if ((longlong)uVar38 <= lVar35) {
                  lVar35 = 0;
                  lVar19 = lVar16;
                }
                puVar27 = puVar27 + *(longlong *)((longlong)plVar20 + 0x60);
                param_2 = param_2 + *(longlong *)((longlong)plVar20 + 0x90);
              } while (lVar36 < *(longlong *)((longlong)plVar20 + 0x88));
            }
          }
          else {
            *(longlong *)((longlong)plVar20 + 0x20) = lVar30;
            *(longlong *)((longlong)plVar20 + 0x28) = lVar18;
            *(longlong *)((longlong)plVar20 + 0x30) = lVar31;
            *(ulonglong *)((longlong)plVar20 + 0x38) = uVar38;
            *(longlong *)((longlong)plVar20 + 0x40) = *(longlong *)((longlong)plVar20 + 0x100);
            *(undefined4 *)((longlong)plVar20 + 0x48) = *(undefined4 *)((longlong)plVar20 + 0x108);
            *(undefined4 *)((longlong)plVar20 + 0x50) = 1;
            *(undefined8 *)((longlong)plVar20 + -8) = 0x1405bee60;
            FUN_140585a40(puVar27);
          }
          return;
        }
        param_5 = (char *)(((ulonglong)pcVar17 & 0xffffffff | 0xffff00000000) / 0xffff & 0xffffffff)
        ;
        auVar40 = vpminuw_avx512vl(auVar41,auVar40);
        uVar23 = (ulonglong)pauVar26 & 0xffff;
        auVar94._0_32_ = vpminuw_avx512vl(auVar40,auVar43);
        auVar94._32_32_ = in_ZmmResult._32_32_;
        in_ZMM18 = ZEXT3264(auVar94._0_32_);
        bVar5 = (bool)((byte)(uVar23 >> 3) & 1);
        auVar10._2_56_ = auVar94._8_56_;
        auVar10._0_2_ = (ushort)bVar5 * auVar94._6_2_ | (ushort)!bVar5 * auVar42._6_2_;
        in_ZmmResult._0_8_ = auVar10._0_8_ << 0x30;
        bVar5 = (bool)((byte)(uVar23 >> 4) & 1);
        in_ZmmResult._8_2_ = (ushort)bVar5 * auVar94._8_2_ | (ushort)!bVar5 * auVar42._8_2_;
        bVar5 = (bool)((byte)(uVar23 >> 5) & 1);
        in_ZmmResult._10_2_ = (ushort)bVar5 * auVar94._10_2_ | (ushort)!bVar5 * auVar42._10_2_;
        bVar5 = (bool)((byte)(uVar23 >> 6) & 1);
        in_ZmmResult._12_2_ = (ushort)bVar5 * auVar94._12_2_ | (ushort)!bVar5 * auVar42._12_2_;
        bVar5 = (bool)((byte)(uVar23 >> 7) & 1);
        in_ZmmResult._14_2_ = (ushort)bVar5 * auVar94._14_2_ | (ushort)!bVar5 * auVar42._14_2_;
        bVar5 = (bool)((byte)(uVar23 >> 8) & 1);
        in_ZmmResult._16_2_ = (ushort)bVar5 * auVar94._16_2_ | (ushort)!bVar5 * auVar42._16_2_;
        bVar5 = (bool)((byte)(uVar23 >> 9) & 1);
        in_ZmmResult._18_2_ = (ushort)bVar5 * auVar94._18_2_ | (ushort)!bVar5 * auVar42._18_2_;
        bVar5 = (bool)((byte)(uVar23 >> 10) & 1);
        in_ZmmResult._20_2_ = (ushort)bVar5 * auVar94._20_2_ | (ushort)!bVar5 * auVar42._20_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xb) & 1);
        in_ZmmResult._22_2_ = (ushort)bVar5 * auVar94._22_2_ | (ushort)!bVar5 * auVar42._22_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xc) & 1);
        in_ZmmResult._24_2_ = (ushort)bVar5 * auVar94._24_2_ | (ushort)!bVar5 * auVar42._24_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xd) & 1);
        in_ZmmResult._26_2_ = (ushort)bVar5 * auVar94._26_2_ | (ushort)!bVar5 * auVar42._26_2_;
        bVar5 = (bool)((byte)(uVar23 >> 0xe) & 1);
        in_ZmmResult._28_2_ = (ushort)bVar5 * auVar94._28_2_ | (ushort)!bVar5 * auVar42._28_2_;
        bVar5 = SUB81(uVar23 >> 0xf,0);
        in_ZmmResult._30_2_ = (ushort)bVar5 * auVar94._30_2_ | (ushort)!bVar5 * auVar42._30_2_;
        auVar40 = vmovdqu16_avx512vl(auVar94._0_32_);
        *(undefined1 (*) [32])*pauVar29 = auVar40;
        param_1 = (undefined1 (*) [64])0x0;
      }
      plVar21 = (longlong *)((longlong)plVar21 + 1);
      param_1 = (undefined1 (*) [64])(*param_1 + param_2 * 2);
      param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 2);
      pauVar29 = param_3;
    } while ((longlong)plVar21 < *(longlong *)((longlong)plVar20 + 0x20));
  }
  return;
}

