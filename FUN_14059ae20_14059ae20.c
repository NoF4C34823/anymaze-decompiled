
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014059b49d) overlaps instruction at (ram,0x00014059b499)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14059ae20(undefined1 (*param_1) [64],undefined1 (*param_2) [64],undefined1 (*param_3) [64],
                  longlong param_4,char *param_5,longlong param_6)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [32];
  undefined1 auVar21 [58];
  undefined1 auVar22 [58];
  undefined1 auVar23 [58];
  undefined1 auVar24 [58];
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  char cVar39;
  char cVar42;
  ushort uVar40;
  char *pcVar41;
  longlong lVar44;
  char *pcVar45;
  longlong lVar46;
  undefined1 (*pauVar47) [64];
  undefined1 *puVar48;
  longlong *plVar49;
  longlong *plVar50;
  longlong *plVar51;
  ulonglong uVar52;
  char *pcVar53;
  longlong lVar54;
  undefined1 (*pauVar55) [64];
  uint uVar56;
  undefined1 (*pauVar57) [64];
  int iVar58;
  undefined1 (*pauVar59) [32];
  undefined1 (*pauVar60) [32];
  ulonglong uVar61;
  undefined1 auVar62 [32];
  undefined1 in_ZmmResult [64];
  undefined1 auVar66 [64];
  undefined1 auVar68 [64];
  undefined1 auVar70 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar76 [64];
  undefined1 auVar78 [64];
  undefined1 auVar80 [64];
  undefined1 auVar82 [64];
  undefined1 auVar84 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  undefined1 auVar89 [64];
  undefined1 auVar91 [64];
  undefined1 auVar93 [64];
  undefined1 auVar95 [64];
  undefined1 auVar97 [64];
  undefined1 auVar99 [64];
  undefined1 auVar100 [64];
  undefined1 auVar102 [64];
  undefined1 auVar104 [64];
  undefined1 auVar106 [64];
  undefined1 auVar108 [64];
  undefined1 auVar110 [64];
  undefined1 auVar112 [64];
  undefined1 auVar113 [64];
  undefined1 auVar114 [64];
  undefined1 auVar115 [64];
  undefined1 auVar116 [64];
  undefined1 auVar117 [64];
  undefined8 in_MM0;
  undefined1 in_ZMM18 [64];
  undefined1 auVar118 [64];
  undefined1 auStack_68 [32];
  longlong lStack_48;
  char cVar43;
  undefined1 auVar67 [64];
  undefined1 auVar69 [64];
  undefined1 auVar71 [64];
  undefined1 auVar75 [64];
  undefined1 auVar77 [64];
  undefined1 auVar79 [64];
  undefined1 auVar81 [64];
  undefined1 auVar83 [64];
  undefined1 auVar85 [64];
  undefined1 auVar88 [64];
  undefined1 auVar90 [64];
  undefined1 auVar92 [64];
  undefined1 auVar94 [64];
  undefined1 auVar96 [64];
  undefined1 auVar98 [64];
  undefined1 auVar101 [64];
  undefined1 auVar103 [64];
  undefined1 auVar105 [64];
  undefined1 auVar107 [64];
  undefined1 auVar109 [64];
  undefined1 auVar111 [64];
  
  plVar50 = (longlong *)0x0;
  if (0 < param_6 + -1) {
    lStack_48 = param_6;
    lVar44 = (longlong)param_2 * 2;
    do {
      uVar52 = ((ulonglong)param_3 & 0x1f) >> 1;
      pcVar45 = param_5;
      pauVar55 = param_1;
      pauVar57 = param_3;
      auVar118 = in_ZMM18;
      if (uVar52 != 0) {
        pcVar53 = (char *)(0x10 - uVar52);
        if ((longlong)param_5 <= (longlong)pcVar53) {
          pcVar53 = param_5;
        }
        uVar56 = (uint)pcVar53 & 0xf;
        uVar52 = 0xffffffffffffffffU >> ((ulonglong)-(uVar56 * 2 + 4) & 0x3f) & 0xffffffff;
        auVar74._32_32_ = in_ZmmResult._32_32_;
        auVar74._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_1);
        bVar2 = (byte)uVar52;
        auVar118[1] = ((byte)(uVar52 >> 1) & 1) * auVar74[1];
        auVar118[0] = (bVar2 & 1) * auVar74[0];
        auVar118[2] = ((byte)(uVar52 >> 2) & 1) * auVar74[2];
        auVar118[3] = ((byte)(uVar52 >> 3) & 1) * auVar74[3];
        auVar118[4] = ((byte)(uVar52 >> 4) & 1) * auVar74[4];
        auVar118[5] = ((byte)(uVar52 >> 5) & 1) * auVar74[5];
        auVar118[6] = ((byte)(uVar52 >> 6) & 1) * auVar74[6];
        auVar118[7] = ((byte)(uVar52 >> 7) & 1) * auVar74[7];
        bVar3 = (byte)(uVar52 >> 8);
        auVar118[8] = (bVar3 & 1) * auVar74[8];
        auVar118[9] = ((byte)(uVar52 >> 9) & 1) * auVar74[9];
        auVar118[10] = ((byte)(uVar52 >> 10) & 1) * auVar74[10];
        auVar118[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar74[0xb];
        auVar118[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar74[0xc];
        auVar118[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar74[0xd];
        auVar118[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar74[0xe];
        auVar118[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar74[0xf];
        bVar4 = (byte)(uVar52 >> 0x10);
        auVar118[0x10] = (bVar4 & 1) * auVar74[0x10];
        auVar118[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar74[0x11];
        auVar118[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar74[0x12];
        auVar118[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar74[0x13];
        auVar118[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar74[0x14];
        auVar118[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar74[0x15];
        auVar118[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar74[0x16];
        auVar118[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar74[0x17];
        bVar5 = (byte)(uVar52 >> 0x18);
        auVar118[0x18] = (bVar5 & 1) * auVar74[0x18];
        auVar118[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar74[0x19];
        auVar118[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar74[0x1a];
        auVar118[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar74[0x1b];
        auVar118[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar74[0x1c];
        auVar118._30_34_ = auVar74._30_34_;
        auVar118[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar74[0x1d];
        auVar116._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar44));
        auVar116._32_32_ = auVar74._32_32_;
        auVar115[1] = ((byte)(uVar52 >> 1) & 1) * auVar116[1];
        auVar115[0] = (bVar2 & 1) * auVar116[0];
        auVar115[2] = ((byte)(uVar52 >> 2) & 1) * auVar116[2];
        auVar115[3] = ((byte)(uVar52 >> 3) & 1) * auVar116[3];
        auVar115[4] = ((byte)(uVar52 >> 4) & 1) * auVar116[4];
        auVar115[5] = ((byte)(uVar52 >> 5) & 1) * auVar116[5];
        auVar115[6] = ((byte)(uVar52 >> 6) & 1) * auVar116[6];
        auVar115[7] = ((byte)(uVar52 >> 7) & 1) * auVar116[7];
        auVar115[8] = (bVar3 & 1) * auVar116[8];
        auVar115[9] = ((byte)(uVar52 >> 9) & 1) * auVar116[9];
        auVar115[10] = ((byte)(uVar52 >> 10) & 1) * auVar116[10];
        auVar115[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar116[0xb];
        auVar115[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar116[0xc];
        auVar115[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar116[0xd];
        auVar115[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar116[0xe];
        auVar115[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar116[0xf];
        auVar115[0x10] = (bVar4 & 1) * auVar116[0x10];
        auVar115[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar116[0x11];
        auVar115[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar116[0x12];
        auVar115[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar116[0x13];
        auVar115[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar116[0x14];
        auVar115[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar116[0x15];
        auVar115[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar116[0x16];
        auVar115[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar116[0x17];
        auVar115[0x18] = (bVar5 & 1) * auVar116[0x18];
        auVar115[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar116[0x19];
        auVar115[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar116[0x1a];
        auVar115[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar116[0x1b];
        auVar115[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar116[0x1c];
        auVar115._30_34_ = auVar116._30_34_;
        auVar115[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar116[0x1d];
        auVar66._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 4))
        ;
        auVar66._32_32_ = auVar74._32_32_;
        auVar114[1] = ((byte)(uVar52 >> 1) & 1) * auVar66[1];
        auVar114[0] = (bVar2 & 1) * auVar66[0];
        auVar114[2] = ((byte)(uVar52 >> 2) & 1) * auVar66[2];
        auVar114[3] = ((byte)(uVar52 >> 3) & 1) * auVar66[3];
        auVar114[4] = ((byte)(uVar52 >> 4) & 1) * auVar66[4];
        auVar114[5] = ((byte)(uVar52 >> 5) & 1) * auVar66[5];
        auVar114[6] = ((byte)(uVar52 >> 6) & 1) * auVar66[6];
        auVar114[7] = ((byte)(uVar52 >> 7) & 1) * auVar66[7];
        auVar114[8] = (bVar3 & 1) * auVar66[8];
        auVar114[9] = ((byte)(uVar52 >> 9) & 1) * auVar66[9];
        auVar114[10] = ((byte)(uVar52 >> 10) & 1) * auVar66[10];
        auVar114[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar66[0xb];
        auVar114[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar66[0xc];
        auVar114[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar66[0xd];
        auVar114[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar66[0xe];
        auVar114[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar66[0xf];
        auVar114[0x10] = (bVar4 & 1) * auVar66[0x10];
        auVar114[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar66[0x11];
        auVar114[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar66[0x12];
        auVar114[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar66[0x13];
        auVar114[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar66[0x14];
        auVar114[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar66[0x15];
        auVar114[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar66[0x16];
        auVar114[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar66[0x17];
        auVar114[0x18] = (bVar5 & 1) * auVar66[0x18];
        auVar114[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar66[0x19];
        auVar114[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar66[0x1a];
        auVar114[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar66[0x1b];
        auVar114[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar66[0x1c];
        auVar114._30_34_ = auVar66._30_34_;
        auVar114[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar66[0x1d];
        uVar56 = uVar56 * 2 - 0x1c;
        uVar56 = ~((int)uVar56 >> 0x1f) & uVar56;
        pauVar55 = (undefined1 (*) [64])(ulonglong)uVar56;
        auVar65 = (undefined1  [32])0x0;
        if ((int)uVar56 < 1) {
          auVar62 = (undefined1  [32])0x0;
          auVar64 = auVar65;
        }
        else {
          pauVar55 = (undefined1 (*) [64])(ulonglong)-uVar56;
          uVar52 = 0xffffffffffffffffU >> ((ulonglong)pauVar55 & 0x3f) & 0xffffffff;
          auVar67._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + 0x20));
          auVar67._32_32_ = auVar74._32_32_;
          bVar2 = (byte)uVar52;
          auVar68[1] = ((byte)(uVar52 >> 1) & 1) * auVar67[1];
          auVar68[0] = (bVar2 & 1) * auVar67[0];
          auVar68[2] = ((byte)(uVar52 >> 2) & 1) * auVar67[2];
          auVar68[3] = ((byte)(uVar52 >> 3) & 1) * auVar67[3];
          auVar68[4] = ((byte)(uVar52 >> 4) & 1) * auVar67[4];
          auVar68[5] = ((byte)(uVar52 >> 5) & 1) * auVar67[5];
          auVar68[6] = ((byte)(uVar52 >> 6) & 1) * auVar67[6];
          auVar68[7] = ((byte)(uVar52 >> 7) & 1) * auVar67[7];
          bVar3 = (byte)(uVar52 >> 8);
          auVar68[8] = (bVar3 & 1) * auVar67[8];
          auVar68[9] = ((byte)(uVar52 >> 9) & 1) * auVar67[9];
          auVar68[10] = ((byte)(uVar52 >> 10) & 1) * auVar67[10];
          auVar68[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar67[0xb];
          auVar68[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar67[0xc];
          auVar68[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar67[0xd];
          auVar68[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar67[0xe];
          auVar68[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar67[0xf];
          bVar4 = (byte)(uVar52 >> 0x10);
          auVar68[0x10] = (bVar4 & 1) * auVar67[0x10];
          auVar68[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar67[0x11];
          auVar68[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar67[0x12];
          auVar68[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar67[0x13];
          auVar68[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar67[0x14];
          auVar68[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar67[0x15];
          auVar68[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar67[0x16];
          auVar68[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar67[0x17];
          bVar5 = (byte)(uVar52 >> 0x18);
          auVar68[0x18] = (bVar5 & 1) * auVar67[0x18];
          auVar68[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar67[0x19];
          auVar68[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar67[0x1a];
          auVar68[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar67[0x1b];
          auVar68[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar67[0x1c];
          auVar68._30_34_ = auVar67._30_34_;
          auVar68[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar67[0x1d];
          auVar69._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar44 + 0x20));
          auVar69._32_32_ = auVar74._32_32_;
          auVar70[1] = ((byte)(uVar52 >> 1) & 1) * auVar69[1];
          auVar70[0] = (bVar2 & 1) * auVar69[0];
          auVar70[2] = ((byte)(uVar52 >> 2) & 1) * auVar69[2];
          auVar70[3] = ((byte)(uVar52 >> 3) & 1) * auVar69[3];
          auVar70[4] = ((byte)(uVar52 >> 4) & 1) * auVar69[4];
          auVar70[5] = ((byte)(uVar52 >> 5) & 1) * auVar69[5];
          auVar70[6] = ((byte)(uVar52 >> 6) & 1) * auVar69[6];
          auVar70[7] = ((byte)(uVar52 >> 7) & 1) * auVar69[7];
          auVar70[8] = (bVar3 & 1) * auVar69[8];
          auVar70[9] = ((byte)(uVar52 >> 9) & 1) * auVar69[9];
          auVar70[10] = ((byte)(uVar52 >> 10) & 1) * auVar69[10];
          auVar70[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar69[0xb];
          auVar70[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar69[0xc];
          auVar70[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar69[0xd];
          auVar70[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar69[0xe];
          auVar70[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar69[0xf];
          auVar70[0x10] = (bVar4 & 1) * auVar69[0x10];
          auVar70[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar69[0x11];
          auVar70[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar69[0x12];
          auVar70[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar69[0x13];
          auVar70[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar69[0x14];
          auVar70[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar69[0x15];
          auVar70[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar69[0x16];
          auVar70[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar69[0x17];
          auVar70[0x18] = (bVar5 & 1) * auVar69[0x18];
          auVar70[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar69[0x19];
          auVar70[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar69[0x1a];
          auVar70[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar69[0x1b];
          auVar70[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar69[0x1c];
          auVar70._30_34_ = auVar69._30_34_;
          auVar70[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar69[0x1d];
          auVar65 = auVar70._0_32_;
          auVar71._0_32_ =
               vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 4 + 0x20));
          auVar71._32_32_ = auVar74._32_32_;
          auVar72[1] = ((byte)(uVar52 >> 1) & 1) * auVar71[1];
          auVar72[0] = (bVar2 & 1) * auVar71[0];
          auVar72[2] = ((byte)(uVar52 >> 2) & 1) * auVar71[2];
          auVar72[3] = ((byte)(uVar52 >> 3) & 1) * auVar71[3];
          auVar72[4] = ((byte)(uVar52 >> 4) & 1) * auVar71[4];
          auVar72[5] = ((byte)(uVar52 >> 5) & 1) * auVar71[5];
          auVar72[6] = ((byte)(uVar52 >> 6) & 1) * auVar71[6];
          auVar72[7] = ((byte)(uVar52 >> 7) & 1) * auVar71[7];
          auVar72[8] = (bVar3 & 1) * auVar71[8];
          auVar72[9] = ((byte)(uVar52 >> 9) & 1) * auVar71[9];
          auVar72[10] = ((byte)(uVar52 >> 10) & 1) * auVar71[10];
          auVar72[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar71[0xb];
          auVar72[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar71[0xc];
          auVar72[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar71[0xd];
          auVar72[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar71[0xe];
          auVar72[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar71[0xf];
          auVar72[0x10] = (bVar4 & 1) * auVar71[0x10];
          auVar72[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar71[0x11];
          auVar72[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar71[0x12];
          auVar72[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar71[0x13];
          auVar72[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar71[0x14];
          auVar72[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar71[0x15];
          auVar72[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar71[0x16];
          auVar72[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar71[0x17];
          auVar72[0x18] = (bVar5 & 1) * auVar71[0x18];
          auVar72[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar71[0x19];
          auVar72[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar71[0x1a];
          auVar72[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar71[0x1b];
          auVar72[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar71[0x1c];
          auVar72._30_34_ = auVar71._30_34_;
          auVar72[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar71[0x1d];
          auVar62 = auVar72._0_32_;
          auVar64 = auVar68._0_32_;
        }
        auVar63 = vpmaxuw_avx2(auVar118._0_32_,auVar115._0_32_);
        in_ZmmResult = ZEXT3264(auVar63);
        auVar65 = vpmaxuw_avx2(auVar64,auVar65);
        auVar64 = vpmaxuw_avx2(auVar63,auVar114._0_32_);
        pcVar45 = (char *)0xffff;
        auVar65 = vpmaxuw_avx2(auVar65,auVar62);
        pauVar57 = (undefined1 (*) [64])(*param_3 + (longlong)pcVar53 * 2);
        auVar62 = vshufi32x4_avx512vl(auVar64,auVar65,1);
        auVar65 = vpalignr_avx2(auVar62,auVar64,2);
        auVar62 = vpalignr_avx512vl(auVar62,auVar64);
        pcVar41 = (char *)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)param_5 + -0x3c);
        if (param_1 != (undefined1 (*) [64])0x1) {
          *pcVar41 = *pcVar41 + (char)param_2;
          goto code_r0x00014059af8b;
        }
        param_5 = (char *)(((ulonglong)pcVar41 & 0xffffffff | 0xffff00000000) / 0xffff & 0xffffffff)
        ;
        in_ZmmResult._32_32_ = vpmaxuw_avx512vl(auVar64,auVar65);
        pcVar45 = param_5 + -(longlong)pcVar53;
        uVar52 = (ulonglong)pauVar55 & 0xffff;
        pauVar55 = (undefined1 (*) [64])((longlong)pcVar53 * 2);
        auVar73._0_32_ = vpmaxuw_avx512vl(in_ZmmResult._32_32_,auVar62);
        auVar73._32_32_ = auVar74._32_32_;
        auVar118 = ZEXT3264(auVar73._0_32_);
        bVar6 = (bool)((byte)(uVar52 >> 3) & 1);
        auVar21._2_56_ = auVar73._8_56_;
        auVar21._0_2_ = (ushort)bVar6 * auVar73._6_2_ | (ushort)!bVar6 * in_ZMM18._6_2_;
        in_ZmmResult._0_8_ = auVar21._0_8_ << 0x30;
        bVar6 = (bool)((byte)(uVar52 >> 4) & 1);
        in_ZmmResult._8_2_ = (ushort)bVar6 * auVar73._8_2_ | (ushort)!bVar6 * in_ZMM18._8_2_;
        bVar6 = (bool)((byte)(uVar52 >> 5) & 1);
        in_ZmmResult._10_2_ = (ushort)bVar6 * auVar73._10_2_ | (ushort)!bVar6 * in_ZMM18._10_2_;
        bVar6 = (bool)((byte)(uVar52 >> 6) & 1);
        in_ZmmResult._12_2_ = (ushort)bVar6 * auVar73._12_2_ | (ushort)!bVar6 * in_ZMM18._12_2_;
        bVar6 = (bool)((byte)(uVar52 >> 7) & 1);
        in_ZmmResult._14_2_ = (ushort)bVar6 * auVar73._14_2_ | (ushort)!bVar6 * in_ZMM18._14_2_;
        bVar6 = (bool)((byte)(uVar52 >> 8) & 1);
        in_ZmmResult._16_2_ = (ushort)bVar6 * auVar73._16_2_ | (ushort)!bVar6 * in_ZMM18._16_2_;
        bVar6 = (bool)((byte)(uVar52 >> 9) & 1);
        in_ZmmResult._18_2_ = (ushort)bVar6 * auVar73._18_2_ | (ushort)!bVar6 * in_ZMM18._18_2_;
        bVar6 = (bool)((byte)(uVar52 >> 10) & 1);
        in_ZmmResult._20_2_ = (ushort)bVar6 * auVar73._20_2_ | (ushort)!bVar6 * in_ZMM18._20_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xb) & 1);
        in_ZmmResult._22_2_ = (ushort)bVar6 * auVar73._22_2_ | (ushort)!bVar6 * in_ZMM18._22_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xc) & 1);
        in_ZmmResult._24_2_ = (ushort)bVar6 * auVar73._24_2_ | (ushort)!bVar6 * in_ZMM18._24_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xd) & 1);
        in_ZmmResult._26_2_ = (ushort)bVar6 * auVar73._26_2_ | (ushort)!bVar6 * in_ZMM18._26_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xe) & 1);
        in_ZmmResult._28_2_ = (ushort)bVar6 * auVar73._28_2_ | (ushort)!bVar6 * in_ZMM18._28_2_;
        bVar6 = SUB81(uVar52 >> 0xf,0);
        in_ZmmResult._30_2_ = (ushort)bVar6 * auVar73._30_2_ | (ushort)!bVar6 * in_ZMM18._30_2_;
        in_ZmmResult._32_32_ = auVar74._32_32_;
        auVar65 = vmovdqu16_avx512vl(auVar73._0_32_);
        *(undefined1 (*) [32])*param_3 = auVar65;
        param_1 = (undefined1 (*) [64])0x0;
      }
      if ((longlong)pcVar45 >> 5 != 0) {
        auVar74 = vpmaxuw_avx512bw(*pauVar55,*(undefined1 (*) [64])(*pauVar55 + lVar44));
        in_ZmmResult = vpmaxuw_avx512bw(auVar74,*(undefined1 (*) [64])
                                                 (*pauVar55 + (longlong)param_2 * 4));
        if (0 < (longlong)pcVar45 >> 5) {
code_r0x00014059af8b:
          auVar118 = vpmaxuw_avx512bw(pauVar55[1],*(undefined1 (*) [64])(pauVar55[1] + lVar44));
          auVar118 = vpmaxuw_avx512bw(auVar118,*(undefined1 (*) [64])
                                                (pauVar55[1] + (longlong)param_2 * 4));
          auVar118 = valignd_avx512f(auVar118,in_ZmmResult,4);
          vpalignr_avx512bw(auVar118,in_ZmmResult);
          psubsb(in_MM0,*(undefined8 *)(pcVar45 + 0xff00000000));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      lVar46 = (longlong)((longlong)pcVar45 - ((ulonglong)pcVar45 & 0xffffffffffffffe0)) >> 4;
      if (lVar46 != 0) {
        lVar54 = 0;
        auVar65 = vpmaxuw_avx2(*(undefined1 (*) [32])*pauVar55,
                               *(undefined1 (*) [32])(*pauVar55 + lVar44));
        auVar65 = vpmaxuw_avx2(auVar65,*(undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 4));
        if (0 < lVar46) {
          do {
            lVar54 = lVar54 + 1;
            auVar62 = vpmaxuw_avx2(*(undefined1 (*) [32])(*pauVar55 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar55 + lVar44 + 0x20));
            auVar63 = vpmaxuw_avx512vl(auVar62,*(undefined1 (*) [32])
                                                (*pauVar55 + (longlong)param_2 * 4 + 0x20));
            pauVar55 = (undefined1 (*) [64])(*pauVar55 + 0x20);
            auVar64 = vshufi32x4_avx512vl(auVar65,auVar63,1);
            auVar62 = vpalignr_avx2(auVar64,auVar65,2);
            auVar64 = vpalignr_avx2(auVar64,auVar65,4);
            auVar65 = vpmaxuw_avx2(auVar62,auVar65);
            auVar65 = vpmaxuw_avx512vl(auVar64,auVar65);
            auVar65 = vmovdqu32_avx512vl(auVar65);
            *(undefined1 (*) [32])*pauVar57 = auVar65;
            pauVar57 = (undefined1 (*) [64])(*pauVar57 + 0x20);
            in_ZmmResult._0_32_ = vmovdqa32_avx512vl(auVar63);
            auVar65 = in_ZmmResult._0_32_;
          } while (lVar54 < lVar46);
        }
      }
      in_ZMM18 = auVar118;
      if (((ulonglong)pcVar45 & 0xf) != 0) {
        iVar58 = (int)((ulonglong)pcVar45 & 0xf);
        uVar52 = 0xffffffffffffffffU >> ((ulonglong)(uint)-(iVar58 * 2 + 4) & 0x3f) & 0xffffffff;
        auVar75._32_32_ = in_ZmmResult._32_32_;
        auVar75._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*pauVar55);
        bVar2 = (byte)uVar52;
        auVar76[1] = ((byte)(uVar52 >> 1) & 1) * auVar75[1];
        auVar76[0] = (bVar2 & 1) * auVar75[0];
        auVar76[2] = ((byte)(uVar52 >> 2) & 1) * auVar75[2];
        auVar76[3] = ((byte)(uVar52 >> 3) & 1) * auVar75[3];
        auVar76[4] = ((byte)(uVar52 >> 4) & 1) * auVar75[4];
        auVar76[5] = ((byte)(uVar52 >> 5) & 1) * auVar75[5];
        auVar76[6] = ((byte)(uVar52 >> 6) & 1) * auVar75[6];
        auVar76[7] = ((byte)(uVar52 >> 7) & 1) * auVar75[7];
        bVar3 = (byte)(uVar52 >> 8);
        auVar76[8] = (bVar3 & 1) * auVar75[8];
        auVar76[9] = ((byte)(uVar52 >> 9) & 1) * auVar75[9];
        auVar76[10] = ((byte)(uVar52 >> 10) & 1) * auVar75[10];
        auVar76[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar75[0xb];
        auVar76[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar75[0xc];
        auVar76[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar75[0xd];
        auVar76[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar75[0xe];
        auVar76[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar75[0xf];
        bVar4 = (byte)(uVar52 >> 0x10);
        auVar76[0x10] = (bVar4 & 1) * auVar75[0x10];
        auVar76[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar75[0x11];
        auVar76[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar75[0x12];
        auVar76[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar75[0x13];
        auVar76[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar75[0x14];
        auVar76[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar75[0x15];
        auVar76[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar75[0x16];
        auVar76[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar75[0x17];
        bVar5 = (byte)(uVar52 >> 0x18);
        auVar76[0x18] = (bVar5 & 1) * auVar75[0x18];
        auVar76[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar75[0x19];
        auVar76[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar75[0x1a];
        auVar76[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar75[0x1b];
        auVar76[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar75[0x1c];
        auVar76._30_34_ = auVar75._30_34_;
        auVar76[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar75[0x1d];
        auVar77._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + lVar44));
        auVar77._32_32_ = auVar75._32_32_;
        auVar78[1] = ((byte)(uVar52 >> 1) & 1) * auVar77[1];
        auVar78[0] = (bVar2 & 1) * auVar77[0];
        auVar78[2] = ((byte)(uVar52 >> 2) & 1) * auVar77[2];
        auVar78[3] = ((byte)(uVar52 >> 3) & 1) * auVar77[3];
        auVar78[4] = ((byte)(uVar52 >> 4) & 1) * auVar77[4];
        auVar78[5] = ((byte)(uVar52 >> 5) & 1) * auVar77[5];
        auVar78[6] = ((byte)(uVar52 >> 6) & 1) * auVar77[6];
        auVar78[7] = ((byte)(uVar52 >> 7) & 1) * auVar77[7];
        auVar78[8] = (bVar3 & 1) * auVar77[8];
        auVar78[9] = ((byte)(uVar52 >> 9) & 1) * auVar77[9];
        auVar78[10] = ((byte)(uVar52 >> 10) & 1) * auVar77[10];
        auVar78[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar77[0xb];
        auVar78[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar77[0xc];
        auVar78[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar77[0xd];
        auVar78[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar77[0xe];
        auVar78[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar77[0xf];
        auVar78[0x10] = (bVar4 & 1) * auVar77[0x10];
        auVar78[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar77[0x11];
        auVar78[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar77[0x12];
        auVar78[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar77[0x13];
        auVar78[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar77[0x14];
        auVar78[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar77[0x15];
        auVar78[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar77[0x16];
        auVar78[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar77[0x17];
        auVar78[0x18] = (bVar5 & 1) * auVar77[0x18];
        auVar78[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar77[0x19];
        auVar78[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar77[0x1a];
        auVar78[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar77[0x1b];
        auVar78[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar77[0x1c];
        auVar78._30_34_ = auVar77._30_34_;
        auVar78[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar77[0x1d];
        auVar79._0_32_ =
             vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 4));
        auVar79._32_32_ = auVar75._32_32_;
        auVar80[1] = ((byte)(uVar52 >> 1) & 1) * auVar79[1];
        auVar80[0] = (bVar2 & 1) * auVar79[0];
        auVar80[2] = ((byte)(uVar52 >> 2) & 1) * auVar79[2];
        auVar80[3] = ((byte)(uVar52 >> 3) & 1) * auVar79[3];
        auVar80[4] = ((byte)(uVar52 >> 4) & 1) * auVar79[4];
        auVar80[5] = ((byte)(uVar52 >> 5) & 1) * auVar79[5];
        auVar80[6] = ((byte)(uVar52 >> 6) & 1) * auVar79[6];
        auVar80[7] = ((byte)(uVar52 >> 7) & 1) * auVar79[7];
        auVar80[8] = (bVar3 & 1) * auVar79[8];
        auVar80[9] = ((byte)(uVar52 >> 9) & 1) * auVar79[9];
        auVar80[10] = ((byte)(uVar52 >> 10) & 1) * auVar79[10];
        auVar80[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar79[0xb];
        auVar80[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar79[0xc];
        auVar80[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar79[0xd];
        auVar80[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar79[0xe];
        auVar80[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar79[0xf];
        auVar80[0x10] = (bVar4 & 1) * auVar79[0x10];
        auVar80[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar79[0x11];
        auVar80[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar79[0x12];
        auVar80[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar79[0x13];
        auVar80[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar79[0x14];
        auVar80[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar79[0x15];
        auVar80[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar79[0x16];
        auVar80[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar79[0x17];
        auVar80[0x18] = (bVar5 & 1) * auVar79[0x18];
        auVar80[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar79[0x19];
        auVar80[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar79[0x1a];
        auVar80[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar79[0x1b];
        auVar80[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar79[0x1c];
        auVar80._30_34_ = auVar79._30_34_;
        auVar80[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar79[0x1d];
        uVar56 = iVar58 * 2 - 0x1c;
        uVar56 = ~((int)uVar56 >> 0x1f) & uVar56;
        uVar52 = (ulonglong)uVar56;
        in_ZmmResult._32_32_ = (undefined1  [32])0x0;
        if ((int)uVar56 < 1) {
          auVar65 = (undefined1  [32])0x0;
          auVar62 = in_ZmmResult._32_32_;
        }
        else {
          uVar52 = (ulonglong)-uVar56;
          uVar61 = 0xffffffffffffffffU >> (uVar52 & 0x3f) & 0xffffffff;
          auVar81._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + 0x20));
          auVar81._32_32_ = auVar75._32_32_;
          bVar2 = (byte)uVar61;
          auVar82[1] = ((byte)(uVar61 >> 1) & 1) * auVar81[1];
          auVar82[0] = (bVar2 & 1) * auVar81[0];
          auVar82[2] = ((byte)(uVar61 >> 2) & 1) * auVar81[2];
          auVar82[3] = ((byte)(uVar61 >> 3) & 1) * auVar81[3];
          auVar82[4] = ((byte)(uVar61 >> 4) & 1) * auVar81[4];
          auVar82[5] = ((byte)(uVar61 >> 5) & 1) * auVar81[5];
          auVar82[6] = ((byte)(uVar61 >> 6) & 1) * auVar81[6];
          auVar82[7] = ((byte)(uVar61 >> 7) & 1) * auVar81[7];
          bVar3 = (byte)(uVar61 >> 8);
          auVar82[8] = (bVar3 & 1) * auVar81[8];
          auVar82[9] = ((byte)(uVar61 >> 9) & 1) * auVar81[9];
          auVar82[10] = ((byte)(uVar61 >> 10) & 1) * auVar81[10];
          auVar82[0xb] = ((byte)(uVar61 >> 0xb) & 1) * auVar81[0xb];
          auVar82[0xc] = ((byte)(uVar61 >> 0xc) & 1) * auVar81[0xc];
          auVar82[0xd] = ((byte)(uVar61 >> 0xd) & 1) * auVar81[0xd];
          auVar82[0xe] = ((byte)(uVar61 >> 0xe) & 1) * auVar81[0xe];
          auVar82[0xf] = ((byte)(uVar61 >> 0xf) & 1) * auVar81[0xf];
          bVar4 = (byte)(uVar61 >> 0x10);
          auVar82[0x10] = (bVar4 & 1) * auVar81[0x10];
          auVar82[0x11] = ((byte)(uVar61 >> 0x11) & 1) * auVar81[0x11];
          auVar82[0x12] = ((byte)(uVar61 >> 0x12) & 1) * auVar81[0x12];
          auVar82[0x13] = ((byte)(uVar61 >> 0x13) & 1) * auVar81[0x13];
          auVar82[0x14] = ((byte)(uVar61 >> 0x14) & 1) * auVar81[0x14];
          auVar82[0x15] = ((byte)(uVar61 >> 0x15) & 1) * auVar81[0x15];
          auVar82[0x16] = ((byte)(uVar61 >> 0x16) & 1) * auVar81[0x16];
          auVar82[0x17] = ((byte)(uVar61 >> 0x17) & 1) * auVar81[0x17];
          bVar5 = (byte)(uVar61 >> 0x18);
          auVar82[0x18] = (bVar5 & 1) * auVar81[0x18];
          auVar82[0x19] = ((byte)(uVar61 >> 0x19) & 1) * auVar81[0x19];
          auVar82[0x1a] = ((byte)(uVar61 >> 0x1a) & 1) * auVar81[0x1a];
          auVar82[0x1b] = ((byte)(uVar61 >> 0x1b) & 1) * auVar81[0x1b];
          auVar82[0x1c] = ((byte)(uVar61 >> 0x1c) & 1) * auVar81[0x1c];
          auVar82._30_34_ = auVar81._30_34_;
          auVar82[0x1d] = ((byte)(uVar61 >> 0x1d) & 1) * auVar81[0x1d];
          auVar83._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + lVar44 + 0x20));
          auVar83._32_32_ = auVar75._32_32_;
          auVar84[1] = ((byte)(uVar61 >> 1) & 1) * auVar83[1];
          auVar84[0] = (bVar2 & 1) * auVar83[0];
          auVar84[2] = ((byte)(uVar61 >> 2) & 1) * auVar83[2];
          auVar84[3] = ((byte)(uVar61 >> 3) & 1) * auVar83[3];
          auVar84[4] = ((byte)(uVar61 >> 4) & 1) * auVar83[4];
          auVar84[5] = ((byte)(uVar61 >> 5) & 1) * auVar83[5];
          auVar84[6] = ((byte)(uVar61 >> 6) & 1) * auVar83[6];
          auVar84[7] = ((byte)(uVar61 >> 7) & 1) * auVar83[7];
          auVar84[8] = (bVar3 & 1) * auVar83[8];
          auVar84[9] = ((byte)(uVar61 >> 9) & 1) * auVar83[9];
          auVar84[10] = ((byte)(uVar61 >> 10) & 1) * auVar83[10];
          auVar84[0xb] = ((byte)(uVar61 >> 0xb) & 1) * auVar83[0xb];
          auVar84[0xc] = ((byte)(uVar61 >> 0xc) & 1) * auVar83[0xc];
          auVar84[0xd] = ((byte)(uVar61 >> 0xd) & 1) * auVar83[0xd];
          auVar84[0xe] = ((byte)(uVar61 >> 0xe) & 1) * auVar83[0xe];
          auVar84[0xf] = ((byte)(uVar61 >> 0xf) & 1) * auVar83[0xf];
          auVar84[0x10] = (bVar4 & 1) * auVar83[0x10];
          auVar84[0x11] = ((byte)(uVar61 >> 0x11) & 1) * auVar83[0x11];
          auVar84[0x12] = ((byte)(uVar61 >> 0x12) & 1) * auVar83[0x12];
          auVar84[0x13] = ((byte)(uVar61 >> 0x13) & 1) * auVar83[0x13];
          auVar84[0x14] = ((byte)(uVar61 >> 0x14) & 1) * auVar83[0x14];
          auVar84[0x15] = ((byte)(uVar61 >> 0x15) & 1) * auVar83[0x15];
          auVar84[0x16] = ((byte)(uVar61 >> 0x16) & 1) * auVar83[0x16];
          auVar84[0x17] = ((byte)(uVar61 >> 0x17) & 1) * auVar83[0x17];
          auVar84[0x18] = (bVar5 & 1) * auVar83[0x18];
          auVar84[0x19] = ((byte)(uVar61 >> 0x19) & 1) * auVar83[0x19];
          auVar84[0x1a] = ((byte)(uVar61 >> 0x1a) & 1) * auVar83[0x1a];
          auVar84[0x1b] = ((byte)(uVar61 >> 0x1b) & 1) * auVar83[0x1b];
          auVar84[0x1c] = ((byte)(uVar61 >> 0x1c) & 1) * auVar83[0x1c];
          auVar84._30_34_ = auVar83._30_34_;
          auVar84[0x1d] = ((byte)(uVar61 >> 0x1d) & 1) * auVar83[0x1d];
          in_ZmmResult._32_32_ = auVar84._0_32_;
          auVar85._0_32_ =
               vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 4 + 0x20));
          auVar85._32_32_ = auVar75._32_32_;
          auVar86[1] = ((byte)(uVar61 >> 1) & 1) * auVar85[1];
          auVar86[0] = (bVar2 & 1) * auVar85[0];
          auVar86[2] = ((byte)(uVar61 >> 2) & 1) * auVar85[2];
          auVar86[3] = ((byte)(uVar61 >> 3) & 1) * auVar85[3];
          auVar86[4] = ((byte)(uVar61 >> 4) & 1) * auVar85[4];
          auVar86[5] = ((byte)(uVar61 >> 5) & 1) * auVar85[5];
          auVar86[6] = ((byte)(uVar61 >> 6) & 1) * auVar85[6];
          auVar86[7] = ((byte)(uVar61 >> 7) & 1) * auVar85[7];
          auVar86[8] = (bVar3 & 1) * auVar85[8];
          auVar86[9] = ((byte)(uVar61 >> 9) & 1) * auVar85[9];
          auVar86[10] = ((byte)(uVar61 >> 10) & 1) * auVar85[10];
          auVar86[0xb] = ((byte)(uVar61 >> 0xb) & 1) * auVar85[0xb];
          auVar86[0xc] = ((byte)(uVar61 >> 0xc) & 1) * auVar85[0xc];
          auVar86[0xd] = ((byte)(uVar61 >> 0xd) & 1) * auVar85[0xd];
          auVar86[0xe] = ((byte)(uVar61 >> 0xe) & 1) * auVar85[0xe];
          auVar86[0xf] = ((byte)(uVar61 >> 0xf) & 1) * auVar85[0xf];
          auVar86[0x10] = (bVar4 & 1) * auVar85[0x10];
          auVar86[0x11] = ((byte)(uVar61 >> 0x11) & 1) * auVar85[0x11];
          auVar86[0x12] = ((byte)(uVar61 >> 0x12) & 1) * auVar85[0x12];
          auVar86[0x13] = ((byte)(uVar61 >> 0x13) & 1) * auVar85[0x13];
          auVar86[0x14] = ((byte)(uVar61 >> 0x14) & 1) * auVar85[0x14];
          auVar86[0x15] = ((byte)(uVar61 >> 0x15) & 1) * auVar85[0x15];
          auVar86[0x16] = ((byte)(uVar61 >> 0x16) & 1) * auVar85[0x16];
          auVar86[0x17] = ((byte)(uVar61 >> 0x17) & 1) * auVar85[0x17];
          auVar86[0x18] = (bVar5 & 1) * auVar85[0x18];
          auVar86[0x19] = ((byte)(uVar61 >> 0x19) & 1) * auVar85[0x19];
          auVar86[0x1a] = ((byte)(uVar61 >> 0x1a) & 1) * auVar85[0x1a];
          auVar86[0x1b] = ((byte)(uVar61 >> 0x1b) & 1) * auVar85[0x1b];
          auVar86[0x1c] = ((byte)(uVar61 >> 0x1c) & 1) * auVar85[0x1c];
          auVar86._30_34_ = auVar85._30_34_;
          auVar86[0x1d] = ((byte)(uVar61 >> 0x1d) & 1) * auVar85[0x1d];
          auVar65 = auVar86._0_32_;
          auVar62 = auVar82._0_32_;
        }
        auVar64 = vpmaxuw_avx2(auVar76._0_32_,auVar78._0_32_);
        in_ZmmResult._32_32_ = vpmaxuw_avx2(auVar62,in_ZmmResult._32_32_);
        auVar62 = vpmaxuw_avx2(auVar64,auVar80._0_32_);
        in_ZmmResult._32_32_ = vpmaxuw_avx2(in_ZmmResult._32_32_,auVar65);
        in_ZmmResult._32_32_ = vshufi32x4_avx512vl(auVar62,in_ZmmResult._32_32_,1);
        auVar65 = vpalignr_avx2(in_ZmmResult._32_32_,auVar62,2);
        in_ZmmResult._0_32_ = vpalignr_avx512vl(in_ZmmResult._32_32_,auVar62);
        in_ZmmResult._32_32_ = auVar75._32_32_;
        param_5 = (char *)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)param_5 + -0x3c);
        param_1 = (undefined1 (*) [64])(param_1[-1] + 0x3f);
        plVar49 = (longlong *)auStack_68;
        if (param_1 != (undefined1 (*) [64])0x0) goto LAB_14059b183;
        param_5 = (char *)(((ulonglong)param_5 & 0xffffffff | 0xffff00000000) / 0xffff & 0xffffffff)
        ;
        in_ZmmResult._32_32_ = vpmaxuw_avx512vl(auVar62,auVar65);
        uVar52 = uVar52 & 0xffff;
        auVar87._0_32_ = vpmaxuw_avx512vl(in_ZmmResult._32_32_,in_ZmmResult._0_32_);
        auVar87._32_32_ = auVar75._32_32_;
        in_ZMM18 = ZEXT3264(auVar87._0_32_);
        bVar6 = (bool)((byte)(uVar52 >> 3) & 1);
        auVar22._2_56_ = auVar87._8_56_;
        auVar22._0_2_ = (ushort)bVar6 * auVar87._6_2_ | (ushort)!bVar6 * auVar118._6_2_;
        in_ZmmResult._0_8_ = auVar22._0_8_ << 0x30;
        bVar6 = (bool)((byte)(uVar52 >> 4) & 1);
        in_ZmmResult._8_2_ = (ushort)bVar6 * auVar87._8_2_ | (ushort)!bVar6 * auVar118._8_2_;
        bVar6 = (bool)((byte)(uVar52 >> 5) & 1);
        in_ZmmResult._10_2_ = (ushort)bVar6 * auVar87._10_2_ | (ushort)!bVar6 * auVar118._10_2_;
        bVar6 = (bool)((byte)(uVar52 >> 6) & 1);
        in_ZmmResult._12_2_ = (ushort)bVar6 * auVar87._12_2_ | (ushort)!bVar6 * auVar118._12_2_;
        bVar6 = (bool)((byte)(uVar52 >> 7) & 1);
        in_ZmmResult._14_2_ = (ushort)bVar6 * auVar87._14_2_ | (ushort)!bVar6 * auVar118._14_2_;
        bVar6 = (bool)((byte)(uVar52 >> 8) & 1);
        in_ZmmResult._16_2_ = (ushort)bVar6 * auVar87._16_2_ | (ushort)!bVar6 * auVar118._16_2_;
        bVar6 = (bool)((byte)(uVar52 >> 9) & 1);
        in_ZmmResult._18_2_ = (ushort)bVar6 * auVar87._18_2_ | (ushort)!bVar6 * auVar118._18_2_;
        bVar6 = (bool)((byte)(uVar52 >> 10) & 1);
        in_ZmmResult._20_2_ = (ushort)bVar6 * auVar87._20_2_ | (ushort)!bVar6 * auVar118._20_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xb) & 1);
        in_ZmmResult._22_2_ = (ushort)bVar6 * auVar87._22_2_ | (ushort)!bVar6 * auVar118._22_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xc) & 1);
        in_ZmmResult._24_2_ = (ushort)bVar6 * auVar87._24_2_ | (ushort)!bVar6 * auVar118._24_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xd) & 1);
        in_ZmmResult._26_2_ = (ushort)bVar6 * auVar87._26_2_ | (ushort)!bVar6 * auVar118._26_2_;
        bVar6 = (bool)((byte)(uVar52 >> 0xe) & 1);
        in_ZmmResult._28_2_ = (ushort)bVar6 * auVar87._28_2_ | (ushort)!bVar6 * auVar118._28_2_;
        bVar6 = SUB81(uVar52 >> 0xf,0);
        in_ZmmResult._30_2_ = (ushort)bVar6 * auVar87._30_2_ | (ushort)!bVar6 * auVar118._30_2_;
        in_ZmmResult._32_32_ = auVar75._32_32_;
        auVar65 = vmovdqu16_avx512vl(auVar87._0_32_);
        *(undefined1 (*) [32])*pauVar57 = auVar65;
        param_1 = (undefined1 (*) [64])0x0;
      }
      plVar50 = (longlong *)((longlong)plVar50 + 1);
      param_1 = (undefined1 (*) [64])(*param_1 + (longlong)param_2 * 2);
      param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 2);
    } while ((longlong)plVar50 < param_6 + -1);
  }
  if ((longlong)plVar50 < param_6) {
    lStack_48 = param_6;
    plVar49 = (longlong *)auStack_68;
    pauVar57 = param_3;
LAB_14059b183:
    do {
      lVar44 = (longlong)param_2 * 2;
      uVar52 = ((ulonglong)pauVar57 & 0x1f) >> 1;
      pcVar45 = param_5;
      pauVar55 = param_1;
      pauVar57 = param_3;
      auVar118 = in_ZMM18;
      plVar51 = plVar50;
      if (uVar52 != 0) {
        pcVar53 = (char *)(0x10 - uVar52);
        if ((longlong)param_5 <= (longlong)pcVar53) {
          pcVar53 = param_5;
        }
        iVar58 = (int)((ulonglong)pcVar53 & 0xf);
        uVar52 = 0xffffffffffffffffU >> ((ulonglong)(uint)-(iVar58 * 2 + 4) & 0x3f) & 0xffffffff;
        auVar88._32_32_ = in_ZmmResult._32_32_;
        auVar88._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_1);
        bVar2 = (byte)uVar52;
        auVar89[1] = ((byte)(uVar52 >> 1) & 1) * auVar88[1];
        auVar89[0] = (bVar2 & 1) * auVar88[0];
        auVar89[2] = ((byte)(uVar52 >> 2) & 1) * auVar88[2];
        auVar89[3] = ((byte)(uVar52 >> 3) & 1) * auVar88[3];
        auVar89[4] = ((byte)(uVar52 >> 4) & 1) * auVar88[4];
        auVar89[5] = ((byte)(uVar52 >> 5) & 1) * auVar88[5];
        auVar89[6] = ((byte)(uVar52 >> 6) & 1) * auVar88[6];
        auVar89[7] = ((byte)(uVar52 >> 7) & 1) * auVar88[7];
        bVar3 = (byte)(uVar52 >> 8);
        auVar89[8] = (bVar3 & 1) * auVar88[8];
        auVar89[9] = ((byte)(uVar52 >> 9) & 1) * auVar88[9];
        auVar89[10] = ((byte)(uVar52 >> 10) & 1) * auVar88[10];
        auVar89[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar88[0xb];
        auVar89[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar88[0xc];
        auVar89[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar88[0xd];
        auVar89[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar88[0xe];
        auVar89[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar88[0xf];
        bVar4 = (byte)(uVar52 >> 0x10);
        auVar89[0x10] = (bVar4 & 1) * auVar88[0x10];
        auVar89[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar88[0x11];
        auVar89[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar88[0x12];
        auVar89[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar88[0x13];
        auVar89[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar88[0x14];
        auVar89[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar88[0x15];
        auVar89[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar88[0x16];
        auVar89[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar88[0x17];
        bVar5 = (byte)(uVar52 >> 0x18);
        auVar89[0x18] = (bVar5 & 1) * auVar88[0x18];
        auVar89[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar88[0x19];
        auVar89[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar88[0x1a];
        auVar89[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar88[0x1b];
        auVar89[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar88[0x1c];
        auVar89._30_34_ = auVar88._30_34_;
        auVar89[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar88[0x1d];
        auVar90._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar44));
        auVar90._32_32_ = auVar88._32_32_;
        auVar91[1] = ((byte)(uVar52 >> 1) & 1) * auVar90[1];
        auVar91[0] = (bVar2 & 1) * auVar90[0];
        auVar91[2] = ((byte)(uVar52 >> 2) & 1) * auVar90[2];
        auVar91[3] = ((byte)(uVar52 >> 3) & 1) * auVar90[3];
        auVar91[4] = ((byte)(uVar52 >> 4) & 1) * auVar90[4];
        auVar91[5] = ((byte)(uVar52 >> 5) & 1) * auVar90[5];
        auVar91[6] = ((byte)(uVar52 >> 6) & 1) * auVar90[6];
        auVar91[7] = ((byte)(uVar52 >> 7) & 1) * auVar90[7];
        auVar91[8] = (bVar3 & 1) * auVar90[8];
        auVar91[9] = ((byte)(uVar52 >> 9) & 1) * auVar90[9];
        auVar91[10] = ((byte)(uVar52 >> 10) & 1) * auVar90[10];
        auVar91[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar90[0xb];
        auVar91[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar90[0xc];
        auVar91[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar90[0xd];
        auVar91[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar90[0xe];
        auVar91[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar90[0xf];
        auVar91[0x10] = (bVar4 & 1) * auVar90[0x10];
        auVar91[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar90[0x11];
        auVar91[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar90[0x12];
        auVar91[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar90[0x13];
        auVar91[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar90[0x14];
        auVar91[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar90[0x15];
        auVar91[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar90[0x16];
        auVar91[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar90[0x17];
        auVar91[0x18] = (bVar5 & 1) * auVar90[0x18];
        auVar91[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar90[0x19];
        auVar91[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar90[0x1a];
        auVar91[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar90[0x1b];
        auVar91[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar90[0x1c];
        auVar91._30_34_ = auVar90._30_34_;
        auVar91[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar90[0x1d];
        auVar92._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 4))
        ;
        auVar92._32_32_ = auVar88._32_32_;
        auVar93[1] = ((byte)(uVar52 >> 1) & 1) * auVar92[1];
        auVar93[0] = (bVar2 & 1) * auVar92[0];
        auVar93[2] = ((byte)(uVar52 >> 2) & 1) * auVar92[2];
        auVar93[3] = ((byte)(uVar52 >> 3) & 1) * auVar92[3];
        auVar93[4] = ((byte)(uVar52 >> 4) & 1) * auVar92[4];
        auVar93[5] = ((byte)(uVar52 >> 5) & 1) * auVar92[5];
        auVar93[6] = ((byte)(uVar52 >> 6) & 1) * auVar92[6];
        auVar93[7] = ((byte)(uVar52 >> 7) & 1) * auVar92[7];
        auVar93[8] = (bVar3 & 1) * auVar92[8];
        auVar93[9] = ((byte)(uVar52 >> 9) & 1) * auVar92[9];
        auVar93[10] = ((byte)(uVar52 >> 10) & 1) * auVar92[10];
        auVar93[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar92[0xb];
        auVar93[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar92[0xc];
        auVar93[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar92[0xd];
        auVar93[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar92[0xe];
        auVar93[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar92[0xf];
        auVar93[0x10] = (bVar4 & 1) * auVar92[0x10];
        auVar93[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar92[0x11];
        auVar93[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar92[0x12];
        auVar93[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar92[0x13];
        auVar93[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar92[0x14];
        auVar93[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar92[0x15];
        auVar93[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar92[0x16];
        auVar93[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar92[0x17];
        auVar93[0x18] = (bVar5 & 1) * auVar92[0x18];
        auVar93[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar92[0x19];
        auVar93[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar92[0x1a];
        auVar93[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar92[0x1b];
        auVar93[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar92[0x1c];
        auVar93._30_34_ = auVar92._30_34_;
        auVar93[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar92[0x1d];
        uVar56 = iVar58 * 2 - 0x1c;
        uVar56 = ~((int)uVar56 >> 0x1f) & uVar56;
        pauVar55 = (undefined1 (*) [64])(ulonglong)uVar56;
        in_ZmmResult._32_32_ = (undefined1  [32])0x0;
        if ((int)uVar56 < 1) {
          auVar65 = (undefined1  [32])0x0;
          auVar62 = in_ZmmResult._32_32_;
        }
        else {
          pauVar55 = (undefined1 (*) [64])(ulonglong)-uVar56;
          uVar52 = 0xffffffffffffffffU >> ((ulonglong)pauVar55 & 0x3f) & 0xffffffff;
          auVar94._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + 0x20));
          auVar94._32_32_ = auVar88._32_32_;
          bVar2 = (byte)uVar52;
          auVar95[1] = ((byte)(uVar52 >> 1) & 1) * auVar94[1];
          auVar95[0] = (bVar2 & 1) * auVar94[0];
          auVar95[2] = ((byte)(uVar52 >> 2) & 1) * auVar94[2];
          auVar95[3] = ((byte)(uVar52 >> 3) & 1) * auVar94[3];
          auVar95[4] = ((byte)(uVar52 >> 4) & 1) * auVar94[4];
          auVar95[5] = ((byte)(uVar52 >> 5) & 1) * auVar94[5];
          auVar95[6] = ((byte)(uVar52 >> 6) & 1) * auVar94[6];
          auVar95[7] = ((byte)(uVar52 >> 7) & 1) * auVar94[7];
          bVar3 = (byte)(uVar52 >> 8);
          auVar95[8] = (bVar3 & 1) * auVar94[8];
          auVar95[9] = ((byte)(uVar52 >> 9) & 1) * auVar94[9];
          auVar95[10] = ((byte)(uVar52 >> 10) & 1) * auVar94[10];
          auVar95[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar94[0xb];
          auVar95[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar94[0xc];
          auVar95[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar94[0xd];
          auVar95[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar94[0xe];
          auVar95[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar94[0xf];
          bVar4 = (byte)(uVar52 >> 0x10);
          auVar95[0x10] = (bVar4 & 1) * auVar94[0x10];
          auVar95[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar94[0x11];
          auVar95[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar94[0x12];
          auVar95[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar94[0x13];
          auVar95[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar94[0x14];
          auVar95[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar94[0x15];
          auVar95[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar94[0x16];
          auVar95[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar94[0x17];
          bVar5 = (byte)(uVar52 >> 0x18);
          auVar95[0x18] = (bVar5 & 1) * auVar94[0x18];
          auVar95[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar94[0x19];
          auVar95[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar94[0x1a];
          auVar95[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar94[0x1b];
          auVar95[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar94[0x1c];
          auVar95._30_34_ = auVar94._30_34_;
          auVar95[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar94[0x1d];
          auVar96._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + lVar44 + 0x20));
          auVar96._32_32_ = auVar88._32_32_;
          auVar97[1] = ((byte)(uVar52 >> 1) & 1) * auVar96[1];
          auVar97[0] = (bVar2 & 1) * auVar96[0];
          auVar97[2] = ((byte)(uVar52 >> 2) & 1) * auVar96[2];
          auVar97[3] = ((byte)(uVar52 >> 3) & 1) * auVar96[3];
          auVar97[4] = ((byte)(uVar52 >> 4) & 1) * auVar96[4];
          auVar97[5] = ((byte)(uVar52 >> 5) & 1) * auVar96[5];
          auVar97[6] = ((byte)(uVar52 >> 6) & 1) * auVar96[6];
          auVar97[7] = ((byte)(uVar52 >> 7) & 1) * auVar96[7];
          auVar97[8] = (bVar3 & 1) * auVar96[8];
          auVar97[9] = ((byte)(uVar52 >> 9) & 1) * auVar96[9];
          auVar97[10] = ((byte)(uVar52 >> 10) & 1) * auVar96[10];
          auVar97[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar96[0xb];
          auVar97[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar96[0xc];
          auVar97[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar96[0xd];
          auVar97[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar96[0xe];
          auVar97[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar96[0xf];
          auVar97[0x10] = (bVar4 & 1) * auVar96[0x10];
          auVar97[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar96[0x11];
          auVar97[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar96[0x12];
          auVar97[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar96[0x13];
          auVar97[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar96[0x14];
          auVar97[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar96[0x15];
          auVar97[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar96[0x16];
          auVar97[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar96[0x17];
          auVar97[0x18] = (bVar5 & 1) * auVar96[0x18];
          auVar97[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar96[0x19];
          auVar97[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar96[0x1a];
          auVar97[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar96[0x1b];
          auVar97[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar96[0x1c];
          auVar97._30_34_ = auVar96._30_34_;
          auVar97[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar96[0x1d];
          in_ZmmResult._32_32_ = auVar97._0_32_;
          auVar98._0_32_ =
               vmovdqu8_avx512vl(*(undefined1 (*) [32])(*param_1 + (longlong)param_2 * 4 + 0x20));
          auVar98._32_32_ = auVar88._32_32_;
          auVar99[1] = ((byte)(uVar52 >> 1) & 1) * auVar98[1];
          auVar99[0] = (bVar2 & 1) * auVar98[0];
          auVar99[2] = ((byte)(uVar52 >> 2) & 1) * auVar98[2];
          auVar99[3] = ((byte)(uVar52 >> 3) & 1) * auVar98[3];
          auVar99[4] = ((byte)(uVar52 >> 4) & 1) * auVar98[4];
          auVar99[5] = ((byte)(uVar52 >> 5) & 1) * auVar98[5];
          auVar99[6] = ((byte)(uVar52 >> 6) & 1) * auVar98[6];
          auVar99[7] = ((byte)(uVar52 >> 7) & 1) * auVar98[7];
          auVar99[8] = (bVar3 & 1) * auVar98[8];
          auVar99[9] = ((byte)(uVar52 >> 9) & 1) * auVar98[9];
          auVar99[10] = ((byte)(uVar52 >> 10) & 1) * auVar98[10];
          auVar99[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar98[0xb];
          auVar99[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar98[0xc];
          auVar99[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar98[0xd];
          auVar99[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar98[0xe];
          auVar99[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar98[0xf];
          auVar99[0x10] = (bVar4 & 1) * auVar98[0x10];
          auVar99[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar98[0x11];
          auVar99[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar98[0x12];
          auVar99[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar98[0x13];
          auVar99[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar98[0x14];
          auVar99[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar98[0x15];
          auVar99[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar98[0x16];
          auVar99[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar98[0x17];
          auVar99[0x18] = (bVar5 & 1) * auVar98[0x18];
          auVar99[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar98[0x19];
          auVar99[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar98[0x1a];
          auVar99[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar98[0x1b];
          auVar99[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar98[0x1c];
          auVar99._30_34_ = auVar98._30_34_;
          auVar99[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar98[0x1d];
          auVar65 = auVar99._0_32_;
          auVar62 = auVar95._0_32_;
        }
        auVar64 = vpmaxuw_avx2(auVar89._0_32_,auVar91._0_32_);
        in_ZmmResult._32_32_ = vpmaxuw_avx2(auVar62,in_ZmmResult._32_32_);
        uVar52 = 0x10 - ((ulonglong)pcVar53 & 0xf);
        auVar62 = vpmaxuw_avx2(auVar64,auVar93._0_32_);
        lVar46 = 0xffff;
        in_ZmmResult._32_32_ = vpmaxuw_avx2(in_ZmmResult._32_32_,auVar65);
        pauVar57 = (undefined1 (*) [64])(*param_3 + (longlong)pcVar53 * 2);
        in_ZmmResult._32_32_ = vshufi32x4_avx512vl(auVar62,in_ZmmResult._32_32_,1);
        auVar118 = ZEXT3264(in_ZmmResult._32_32_);
        auVar65 = vpalignr_avx2(in_ZmmResult._32_32_,auVar62,2);
        in_ZmmResult._0_32_ = vpalignr_avx512vl(in_ZmmResult._32_32_,auVar62);
        in_ZmmResult._32_32_ = auVar88._32_32_;
        cVar39 = (char)param_5 + -0x3c;
        param_5 = (char *)CONCAT71((int7)((ulonglong)param_5 >> 8),cVar39);
        param_1 = (undefined1 (*) [64])(param_1[-1] + 0x3f);
        if (param_1 == (undefined1 (*) [64])0x0) {
          param_5 = (char *)(((ulonglong)param_5 & 0xffffffff | 0xffff00000000) / 0xffff &
                            0xffffffff);
          in_ZmmResult._32_32_ = vpmaxuw_avx512vl(auVar62,auVar65);
          pcVar45 = param_5 + -(longlong)pcVar53;
          uVar52 = (ulonglong)pauVar55 & 0xffff;
          pauVar55 = (undefined1 (*) [64])((longlong)pcVar53 * 2);
          auVar100._0_32_ = vpmaxuw_avx512vl(in_ZmmResult._32_32_,in_ZmmResult._0_32_);
          auVar100._32_32_ = auVar88._32_32_;
          auVar118 = ZEXT3264(auVar100._0_32_);
          bVar6 = (bool)((byte)(uVar52 >> 3) & 1);
          auVar23._2_56_ = auVar100._8_56_;
          auVar23._0_2_ = (ushort)bVar6 * auVar100._6_2_ | (ushort)!bVar6 * in_ZMM18._6_2_;
          in_ZmmResult._0_8_ = auVar23._0_8_ << 0x30;
          bVar6 = (bool)((byte)(uVar52 >> 4) & 1);
          in_ZmmResult._8_2_ = (ushort)bVar6 * auVar100._8_2_ | (ushort)!bVar6 * in_ZMM18._8_2_;
          bVar6 = (bool)((byte)(uVar52 >> 5) & 1);
          in_ZmmResult._10_2_ = (ushort)bVar6 * auVar100._10_2_ | (ushort)!bVar6 * in_ZMM18._10_2_;
          bVar6 = (bool)((byte)(uVar52 >> 6) & 1);
          in_ZmmResult._12_2_ = (ushort)bVar6 * auVar100._12_2_ | (ushort)!bVar6 * in_ZMM18._12_2_;
          bVar6 = (bool)((byte)(uVar52 >> 7) & 1);
          in_ZmmResult._14_2_ = (ushort)bVar6 * auVar100._14_2_ | (ushort)!bVar6 * in_ZMM18._14_2_;
          bVar6 = (bool)((byte)(uVar52 >> 8) & 1);
          in_ZmmResult._16_2_ = (ushort)bVar6 * auVar100._16_2_ | (ushort)!bVar6 * in_ZMM18._16_2_;
          bVar6 = (bool)((byte)(uVar52 >> 9) & 1);
          in_ZmmResult._18_2_ = (ushort)bVar6 * auVar100._18_2_ | (ushort)!bVar6 * in_ZMM18._18_2_;
          bVar6 = (bool)((byte)(uVar52 >> 10) & 1);
          in_ZmmResult._20_2_ = (ushort)bVar6 * auVar100._20_2_ | (ushort)!bVar6 * in_ZMM18._20_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xb) & 1);
          in_ZmmResult._22_2_ = (ushort)bVar6 * auVar100._22_2_ | (ushort)!bVar6 * in_ZMM18._22_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xc) & 1);
          in_ZmmResult._24_2_ = (ushort)bVar6 * auVar100._24_2_ | (ushort)!bVar6 * in_ZMM18._24_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xd) & 1);
          in_ZmmResult._26_2_ = (ushort)bVar6 * auVar100._26_2_ | (ushort)!bVar6 * in_ZMM18._26_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xe) & 1);
          in_ZmmResult._28_2_ = (ushort)bVar6 * auVar100._28_2_ | (ushort)!bVar6 * in_ZMM18._28_2_;
          bVar6 = SUB81(uVar52 >> 0xf,0);
          in_ZmmResult._30_2_ = (ushort)bVar6 * auVar100._30_2_ | (ushort)!bVar6 * in_ZMM18._30_2_;
          in_ZmmResult._32_32_ = auVar88._32_32_;
          auVar65 = vmovdqu16_avx512vl(auVar100._0_32_);
          *(undefined1 (*) [32])*param_3 = auVar65;
          goto LAB_14059b279;
        }
        *param_5 = *param_5 + cVar39;
        *param_5 = *param_5 + cVar39;
LAB_14059b2c0:
        do {
          pcVar53 = pcVar53 + 1;
          auVar65 = vpmaxuw_avx2(*(undefined1 (*) [32])(*pauVar55 + 0x20),
                                 *(undefined1 (*) [32])(*pauVar55 + lVar44 + 0x20));
          auVar64 = vpmaxuw_avx512vl(auVar65,*(undefined1 (*) [32])
                                              (*pauVar55 + (longlong)param_2 * 4 + 0x20));
          pauVar55 = (undefined1 (*) [64])(*pauVar55 + 0x20);
          auVar63 = auVar118._0_32_;
          auVar62 = vshufi32x4_avx512vl(auVar63,auVar64,1);
          auVar65 = vpalignr_avx2(auVar62,auVar63,2);
          auVar62 = vpalignr_avx2(auVar62,auVar63,4);
          auVar65 = vpmaxuw_avx2(auVar65,auVar63);
          auVar65 = vpmaxuw_avx512vl(auVar62,auVar65);
          auVar65 = vmovdqu32_avx512vl(auVar65);
          *(undefined1 (*) [32])*pauVar57 = auVar65;
          pauVar57 = (undefined1 (*) [64])(*pauVar57 + 0x20);
          in_ZmmResult._0_32_ = vmovdqa32_avx512vl(auVar64);
          auVar118 = ZEXT3264(in_ZmmResult._0_32_);
        } while ((longlong)pcVar53 < lVar46);
        pauVar59 = (undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 2);
        pauVar60 = (undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 4);
        auVar65 = in_ZmmResult._0_32_;
LAB_14059b316:
        auVar64 = in_ZMM18._0_32_;
        iVar58 = (int)pcVar53;
        puVar48 = *pauVar55;
        pauVar55 = (undefined1 (*) [64])(*pauVar55 + 0x20);
        auVar62 = vpmaxuw_avx2(ZEXT432(*(uint *)(puVar48 + 0x20)),ZEXT432(*(uint *)pauVar59[1]));
        auVar62 = vpmaxuw_avx2(auVar62,ZEXT432(*(uint *)pauVar60[1]));
        auVar62 = vshufi32x4_avx512vl(auVar65,auVar62,1);
        vpalignr_avx512vl(auVar62,auVar65);
        cVar43 = (char)((ulonglong)param_5 >> 8);
        cVar39 = (char)param_5;
        cVar42 = cVar43 + *(char *)(lVar46 + -0x1d);
        param_5 = (char *)CONCAT62((int6)((ulonglong)param_5 >> 0x10),CONCAT11(cVar42,cVar39));
        if (SCARRY1(cVar43,*(char *)(lVar46 + -0x1d)) == cVar42 < '\0') {
          *param_5 = *param_5 + cVar39;
          goto code_r0x00014059b369;
        }
        if (cVar42 == '\0') {
          plVar51 = (longlong *)*plVar50;
          plVar49 = plVar50 + 1;
          in_ZmmResult._0_32_ = vpmaxuw_avx512vl(auVar64,auVar65);
          auVar65 = vmovdqu32_avx512vl(in_ZmmResult._0_32_);
          *(undefined1 (*) [32])*pauVar57 = auVar65;
          pauVar57 = (undefined1 (*) [64])(*pauVar57 + 0x20);
          goto LAB_14059b360;
        }
LAB_14059b36e:
        uVar61 = 0xffffffffffffffffU >> ((ulonglong)(uint)-iVar58 & 0x3f) & 0xffffffff;
        auVar101._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*pauVar55);
        auVar101._32_32_ = in_ZmmResult._32_32_;
        bVar2 = (byte)uVar61;
        auVar102[1] = ((byte)(uVar61 >> 1) & 1) * auVar101[1];
        auVar102[0] = (bVar2 & 1) * auVar101[0];
        auVar102[2] = ((byte)(uVar61 >> 2) & 1) * auVar101[2];
        auVar102[3] = ((byte)(uVar61 >> 3) & 1) * auVar101[3];
        auVar102[4] = ((byte)(uVar61 >> 4) & 1) * auVar101[4];
        auVar102[5] = ((byte)(uVar61 >> 5) & 1) * auVar101[5];
        auVar102[6] = ((byte)(uVar61 >> 6) & 1) * auVar101[6];
        auVar102[7] = ((byte)(uVar61 >> 7) & 1) * auVar101[7];
        bVar3 = (byte)(uVar61 >> 8);
        auVar102[8] = (bVar3 & 1) * auVar101[8];
        auVar102[9] = ((byte)(uVar61 >> 9) & 1) * auVar101[9];
        auVar102[10] = ((byte)(uVar61 >> 10) & 1) * auVar101[10];
        auVar102[0xb] = ((byte)(uVar61 >> 0xb) & 1) * auVar101[0xb];
        auVar102[0xc] = ((byte)(uVar61 >> 0xc) & 1) * auVar101[0xc];
        auVar102[0xd] = ((byte)(uVar61 >> 0xd) & 1) * auVar101[0xd];
        auVar102[0xe] = ((byte)(uVar61 >> 0xe) & 1) * auVar101[0xe];
        auVar102[0xf] = ((byte)(uVar61 >> 0xf) & 1) * auVar101[0xf];
        bVar4 = (byte)(uVar61 >> 0x10);
        auVar102[0x10] = (bVar4 & 1) * auVar101[0x10];
        auVar102[0x11] = ((byte)(uVar61 >> 0x11) & 1) * auVar101[0x11];
        auVar102[0x12] = ((byte)(uVar61 >> 0x12) & 1) * auVar101[0x12];
        auVar102[0x13] = ((byte)(uVar61 >> 0x13) & 1) * auVar101[0x13];
        auVar102[0x14] = ((byte)(uVar61 >> 0x14) & 1) * auVar101[0x14];
        auVar102[0x15] = ((byte)(uVar61 >> 0x15) & 1) * auVar101[0x15];
        auVar102[0x16] = ((byte)(uVar61 >> 0x16) & 1) * auVar101[0x16];
        auVar102[0x17] = ((byte)(uVar61 >> 0x17) & 1) * auVar101[0x17];
        bVar5 = (byte)(uVar61 >> 0x18);
        auVar102[0x18] = (bVar5 & 1) * auVar101[0x18];
        auVar102[0x19] = ((byte)(uVar61 >> 0x19) & 1) * auVar101[0x19];
        auVar102[0x1a] = ((byte)(uVar61 >> 0x1a) & 1) * auVar101[0x1a];
        auVar102[0x1b] = ((byte)(uVar61 >> 0x1b) & 1) * auVar101[0x1b];
        auVar102[0x1c] = ((byte)(uVar61 >> 0x1c) & 1) * auVar101[0x1c];
        auVar102._30_34_ = auVar101._30_34_;
        auVar102[0x1d] = ((byte)(uVar61 >> 0x1d) & 1) * auVar101[0x1d];
        auVar103._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + lVar44));
        auVar103._32_32_ = in_ZmmResult._32_32_;
        auVar104[1] = ((byte)(uVar61 >> 1) & 1) * auVar103[1];
        auVar104[0] = (bVar2 & 1) * auVar103[0];
        auVar104[2] = ((byte)(uVar61 >> 2) & 1) * auVar103[2];
        auVar104[3] = ((byte)(uVar61 >> 3) & 1) * auVar103[3];
        auVar104[4] = ((byte)(uVar61 >> 4) & 1) * auVar103[4];
        auVar104[5] = ((byte)(uVar61 >> 5) & 1) * auVar103[5];
        auVar104[6] = ((byte)(uVar61 >> 6) & 1) * auVar103[6];
        auVar104[7] = ((byte)(uVar61 >> 7) & 1) * auVar103[7];
        auVar104[8] = (bVar3 & 1) * auVar103[8];
        auVar104[9] = ((byte)(uVar61 >> 9) & 1) * auVar103[9];
        auVar104[10] = ((byte)(uVar61 >> 10) & 1) * auVar103[10];
        auVar104[0xb] = ((byte)(uVar61 >> 0xb) & 1) * auVar103[0xb];
        auVar104[0xc] = ((byte)(uVar61 >> 0xc) & 1) * auVar103[0xc];
        auVar104[0xd] = ((byte)(uVar61 >> 0xd) & 1) * auVar103[0xd];
        auVar104[0xe] = ((byte)(uVar61 >> 0xe) & 1) * auVar103[0xe];
        auVar104[0xf] = ((byte)(uVar61 >> 0xf) & 1) * auVar103[0xf];
        auVar104[0x10] = (bVar4 & 1) * auVar103[0x10];
        auVar104[0x11] = ((byte)(uVar61 >> 0x11) & 1) * auVar103[0x11];
        auVar104[0x12] = ((byte)(uVar61 >> 0x12) & 1) * auVar103[0x12];
        auVar104[0x13] = ((byte)(uVar61 >> 0x13) & 1) * auVar103[0x13];
        auVar104[0x14] = ((byte)(uVar61 >> 0x14) & 1) * auVar103[0x14];
        auVar104[0x15] = ((byte)(uVar61 >> 0x15) & 1) * auVar103[0x15];
        auVar104[0x16] = ((byte)(uVar61 >> 0x16) & 1) * auVar103[0x16];
        auVar104[0x17] = ((byte)(uVar61 >> 0x17) & 1) * auVar103[0x17];
        auVar104[0x18] = (bVar5 & 1) * auVar103[0x18];
        auVar104[0x19] = ((byte)(uVar61 >> 0x19) & 1) * auVar103[0x19];
        auVar104[0x1a] = ((byte)(uVar61 >> 0x1a) & 1) * auVar103[0x1a];
        auVar104[0x1b] = ((byte)(uVar61 >> 0x1b) & 1) * auVar103[0x1b];
        auVar104[0x1c] = ((byte)(uVar61 >> 0x1c) & 1) * auVar103[0x1c];
        auVar104._30_34_ = auVar103._30_34_;
        auVar104[0x1d] = ((byte)(uVar61 >> 0x1d) & 1) * auVar103[0x1d];
        auVar105._0_32_ =
             vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 4));
        auVar105._32_32_ = in_ZmmResult._32_32_;
        auVar106[1] = ((byte)(uVar61 >> 1) & 1) * auVar105[1];
        auVar106[0] = (bVar2 & 1) * auVar105[0];
        auVar106[2] = ((byte)(uVar61 >> 2) & 1) * auVar105[2];
        auVar106[3] = ((byte)(uVar61 >> 3) & 1) * auVar105[3];
        auVar106[4] = ((byte)(uVar61 >> 4) & 1) * auVar105[4];
        auVar106[5] = ((byte)(uVar61 >> 5) & 1) * auVar105[5];
        auVar106[6] = ((byte)(uVar61 >> 6) & 1) * auVar105[6];
        auVar106[7] = ((byte)(uVar61 >> 7) & 1) * auVar105[7];
        auVar106[8] = (bVar3 & 1) * auVar105[8];
        auVar106[9] = ((byte)(uVar61 >> 9) & 1) * auVar105[9];
        auVar106[10] = ((byte)(uVar61 >> 10) & 1) * auVar105[10];
        auVar106[0xb] = ((byte)(uVar61 >> 0xb) & 1) * auVar105[0xb];
        auVar106[0xc] = ((byte)(uVar61 >> 0xc) & 1) * auVar105[0xc];
        auVar106[0xd] = ((byte)(uVar61 >> 0xd) & 1) * auVar105[0xd];
        auVar106[0xe] = ((byte)(uVar61 >> 0xe) & 1) * auVar105[0xe];
        auVar106[0xf] = ((byte)(uVar61 >> 0xf) & 1) * auVar105[0xf];
        auVar106[0x10] = (bVar4 & 1) * auVar105[0x10];
        auVar106[0x11] = ((byte)(uVar61 >> 0x11) & 1) * auVar105[0x11];
        auVar106[0x12] = ((byte)(uVar61 >> 0x12) & 1) * auVar105[0x12];
        auVar106[0x13] = ((byte)(uVar61 >> 0x13) & 1) * auVar105[0x13];
        auVar106[0x14] = ((byte)(uVar61 >> 0x14) & 1) * auVar105[0x14];
        auVar106[0x15] = ((byte)(uVar61 >> 0x15) & 1) * auVar105[0x15];
        auVar106[0x16] = ((byte)(uVar61 >> 0x16) & 1) * auVar105[0x16];
        auVar106[0x17] = ((byte)(uVar61 >> 0x17) & 1) * auVar105[0x17];
        auVar106[0x18] = (bVar5 & 1) * auVar105[0x18];
        auVar106[0x19] = ((byte)(uVar61 >> 0x19) & 1) * auVar105[0x19];
        auVar106[0x1a] = ((byte)(uVar61 >> 0x1a) & 1) * auVar105[0x1a];
        auVar106[0x1b] = ((byte)(uVar61 >> 0x1b) & 1) * auVar105[0x1b];
        auVar106[0x1c] = ((byte)(uVar61 >> 0x1c) & 1) * auVar105[0x1c];
        auVar106._30_34_ = auVar105._30_34_;
        auVar106[0x1d] = ((byte)(uVar61 >> 0x1d) & 1) * auVar105[0x1d];
        uVar56 = (int)uVar52 * 2 - 0x1c;
        uVar56 = ~((int)uVar56 >> 0x1f) & uVar56;
        auVar65 = (undefined1  [32])0x0;
        if ((int)uVar56 < 1) {
          auVar62 = (undefined1  [32])0x0;
          auVar63 = auVar65;
        }
        else {
          uVar52 = 0xffffffffffffffffU >> ((ulonglong)-uVar56 & 0x3f) & 0xffffffff;
          auVar107._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + 0x20));
          auVar107._32_32_ = in_ZmmResult._32_32_;
          bVar2 = (byte)uVar52;
          auVar108[1] = ((byte)(uVar52 >> 1) & 1) * auVar107[1];
          auVar108[0] = (bVar2 & 1) * auVar107[0];
          auVar108[2] = ((byte)(uVar52 >> 2) & 1) * auVar107[2];
          auVar108[3] = ((byte)(uVar52 >> 3) & 1) * auVar107[3];
          auVar108[4] = ((byte)(uVar52 >> 4) & 1) * auVar107[4];
          auVar108[5] = ((byte)(uVar52 >> 5) & 1) * auVar107[5];
          auVar108[6] = ((byte)(uVar52 >> 6) & 1) * auVar107[6];
          auVar108[7] = ((byte)(uVar52 >> 7) & 1) * auVar107[7];
          bVar3 = (byte)(uVar52 >> 8);
          auVar108[8] = (bVar3 & 1) * auVar107[8];
          auVar108[9] = ((byte)(uVar52 >> 9) & 1) * auVar107[9];
          auVar108[10] = ((byte)(uVar52 >> 10) & 1) * auVar107[10];
          auVar108[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar107[0xb];
          auVar108[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar107[0xc];
          auVar108[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar107[0xd];
          auVar108[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar107[0xe];
          auVar108[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar107[0xf];
          bVar4 = (byte)(uVar52 >> 0x10);
          auVar108[0x10] = (bVar4 & 1) * auVar107[0x10];
          auVar108[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar107[0x11];
          auVar108[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar107[0x12];
          auVar108[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar107[0x13];
          auVar108[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar107[0x14];
          auVar108[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar107[0x15];
          auVar108[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar107[0x16];
          auVar108[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar107[0x17];
          bVar5 = (byte)(uVar52 >> 0x18);
          auVar108[0x18] = (bVar5 & 1) * auVar107[0x18];
          auVar108[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar107[0x19];
          auVar108[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar107[0x1a];
          auVar108[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar107[0x1b];
          auVar108[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar107[0x1c];
          auVar108._30_34_ = auVar107._30_34_;
          auVar108[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar107[0x1d];
          auVar109._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + lVar44 + 0x20));
          auVar109._32_32_ = in_ZmmResult._32_32_;
          auVar110[1] = ((byte)(uVar52 >> 1) & 1) * auVar109[1];
          auVar110[0] = (bVar2 & 1) * auVar109[0];
          auVar110[2] = ((byte)(uVar52 >> 2) & 1) * auVar109[2];
          auVar110[3] = ((byte)(uVar52 >> 3) & 1) * auVar109[3];
          auVar110[4] = ((byte)(uVar52 >> 4) & 1) * auVar109[4];
          auVar110[5] = ((byte)(uVar52 >> 5) & 1) * auVar109[5];
          auVar110[6] = ((byte)(uVar52 >> 6) & 1) * auVar109[6];
          auVar110[7] = ((byte)(uVar52 >> 7) & 1) * auVar109[7];
          auVar110[8] = (bVar3 & 1) * auVar109[8];
          auVar110[9] = ((byte)(uVar52 >> 9) & 1) * auVar109[9];
          auVar110[10] = ((byte)(uVar52 >> 10) & 1) * auVar109[10];
          auVar110[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar109[0xb];
          auVar110[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar109[0xc];
          auVar110[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar109[0xd];
          auVar110[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar109[0xe];
          auVar110[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar109[0xf];
          auVar110[0x10] = (bVar4 & 1) * auVar109[0x10];
          auVar110[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar109[0x11];
          auVar110[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar109[0x12];
          auVar110[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar109[0x13];
          auVar110[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar109[0x14];
          auVar110[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar109[0x15];
          auVar110[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar109[0x16];
          auVar110[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar109[0x17];
          auVar110[0x18] = (bVar5 & 1) * auVar109[0x18];
          auVar110[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar109[0x19];
          auVar110[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar109[0x1a];
          auVar110[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar109[0x1b];
          auVar110[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar109[0x1c];
          auVar110._30_34_ = auVar109._30_34_;
          auVar110[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar109[0x1d];
          auVar65 = auVar110._0_32_;
          auVar111._0_32_ =
               vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 4 + 0x20));
          auVar111._32_32_ = in_ZmmResult._32_32_;
          auVar112[1] = ((byte)(uVar52 >> 1) & 1) * auVar111[1];
          auVar112[0] = (bVar2 & 1) * auVar111[0];
          auVar112[2] = ((byte)(uVar52 >> 2) & 1) * auVar111[2];
          auVar112[3] = ((byte)(uVar52 >> 3) & 1) * auVar111[3];
          auVar112[4] = ((byte)(uVar52 >> 4) & 1) * auVar111[4];
          auVar112[5] = ((byte)(uVar52 >> 5) & 1) * auVar111[5];
          auVar112[6] = ((byte)(uVar52 >> 6) & 1) * auVar111[6];
          auVar112[7] = ((byte)(uVar52 >> 7) & 1) * auVar111[7];
          auVar112[8] = (bVar3 & 1) * auVar111[8];
          auVar112[9] = ((byte)(uVar52 >> 9) & 1) * auVar111[9];
          auVar112[10] = ((byte)(uVar52 >> 10) & 1) * auVar111[10];
          auVar112[0xb] = ((byte)(uVar52 >> 0xb) & 1) * auVar111[0xb];
          auVar112[0xc] = ((byte)(uVar52 >> 0xc) & 1) * auVar111[0xc];
          auVar112[0xd] = ((byte)(uVar52 >> 0xd) & 1) * auVar111[0xd];
          auVar112[0xe] = ((byte)(uVar52 >> 0xe) & 1) * auVar111[0xe];
          auVar112[0xf] = ((byte)(uVar52 >> 0xf) & 1) * auVar111[0xf];
          auVar112[0x10] = (bVar4 & 1) * auVar111[0x10];
          auVar112[0x11] = ((byte)(uVar52 >> 0x11) & 1) * auVar111[0x11];
          auVar112[0x12] = ((byte)(uVar52 >> 0x12) & 1) * auVar111[0x12];
          auVar112[0x13] = ((byte)(uVar52 >> 0x13) & 1) * auVar111[0x13];
          auVar112[0x14] = ((byte)(uVar52 >> 0x14) & 1) * auVar111[0x14];
          auVar112[0x15] = ((byte)(uVar52 >> 0x15) & 1) * auVar111[0x15];
          auVar112[0x16] = ((byte)(uVar52 >> 0x16) & 1) * auVar111[0x16];
          auVar112[0x17] = ((byte)(uVar52 >> 0x17) & 1) * auVar111[0x17];
          auVar112[0x18] = (bVar5 & 1) * auVar111[0x18];
          auVar112[0x19] = ((byte)(uVar52 >> 0x19) & 1) * auVar111[0x19];
          auVar112[0x1a] = ((byte)(uVar52 >> 0x1a) & 1) * auVar111[0x1a];
          auVar112[0x1b] = ((byte)(uVar52 >> 0x1b) & 1) * auVar111[0x1b];
          auVar112[0x1c] = ((byte)(uVar52 >> 0x1c) & 1) * auVar111[0x1c];
          auVar112._30_34_ = auVar111._30_34_;
          auVar112[0x1d] = ((byte)(uVar52 >> 0x1d) & 1) * auVar111[0x1d];
          auVar62 = auVar112._0_32_;
          auVar63 = auVar108._0_32_;
        }
        auVar20 = vpmaxuw_avx2(auVar102._0_32_,auVar104._0_32_);
        auVar118 = ZEXT3264(auVar20);
        auVar65 = vpmaxuw_avx2(auVar63,auVar65);
        auVar63 = vpmaxuw_avx2(auVar20,auVar106._0_32_);
        auVar65 = vpmaxuw_avx2(auVar65,auVar62);
        auVar62 = vshufi32x4_avx512vl(auVar63,auVar65,1);
        auVar74 = ZEXT3264(auVar62);
        auVar65 = vpalignr_avx2(auVar62,auVar63,2);
        auVar62 = vpalignr_avx512vl(auVar62,auVar63);
        cVar39 = (char)param_5 + -0x3c;
        uVar52 = CONCAT71((int7)((ulonglong)param_5 >> 8),cVar39);
        if (param_1 == (undefined1 (*) [64])0x1) {
          param_5 = (char *)((uVar52 & 0xffffffff | 0xffff00000000) / 0xffff & 0xffffffff);
          auVar65 = vpmaxuw_avx512vl(auVar63,auVar65);
          uVar52 = (ulonglong)pauVar55 & 0xffff;
          auVar113._0_32_ = vpmaxuw_avx512vl(auVar65,auVar62);
          auVar113._32_32_ = in_ZmmResult._32_32_;
          in_ZMM18 = ZEXT3264(auVar113._0_32_);
          bVar6 = (bool)((byte)(uVar52 >> 3) & 1);
          auVar24._2_56_ = auVar113._8_56_;
          auVar24._0_2_ = (ushort)bVar6 * auVar113._6_2_ | (ushort)!bVar6 * auVar64._6_2_;
          in_ZmmResult._0_8_ = auVar24._0_8_ << 0x30;
          bVar6 = (bool)((byte)(uVar52 >> 4) & 1);
          in_ZmmResult._8_2_ = (ushort)bVar6 * auVar113._8_2_ | (ushort)!bVar6 * auVar64._8_2_;
          bVar6 = (bool)((byte)(uVar52 >> 5) & 1);
          in_ZmmResult._10_2_ = (ushort)bVar6 * auVar113._10_2_ | (ushort)!bVar6 * auVar64._10_2_;
          bVar6 = (bool)((byte)(uVar52 >> 6) & 1);
          in_ZmmResult._12_2_ = (ushort)bVar6 * auVar113._12_2_ | (ushort)!bVar6 * auVar64._12_2_;
          bVar6 = (bool)((byte)(uVar52 >> 7) & 1);
          in_ZmmResult._14_2_ = (ushort)bVar6 * auVar113._14_2_ | (ushort)!bVar6 * auVar64._14_2_;
          bVar6 = (bool)((byte)(uVar52 >> 8) & 1);
          in_ZmmResult._16_2_ = (ushort)bVar6 * auVar113._16_2_ | (ushort)!bVar6 * auVar64._16_2_;
          bVar6 = (bool)((byte)(uVar52 >> 9) & 1);
          in_ZmmResult._18_2_ = (ushort)bVar6 * auVar113._18_2_ | (ushort)!bVar6 * auVar64._18_2_;
          bVar6 = (bool)((byte)(uVar52 >> 10) & 1);
          in_ZmmResult._20_2_ = (ushort)bVar6 * auVar113._20_2_ | (ushort)!bVar6 * auVar64._20_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xb) & 1);
          in_ZmmResult._22_2_ = (ushort)bVar6 * auVar113._22_2_ | (ushort)!bVar6 * auVar64._22_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xc) & 1);
          in_ZmmResult._24_2_ = (ushort)bVar6 * auVar113._24_2_ | (ushort)!bVar6 * auVar64._24_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xd) & 1);
          in_ZmmResult._26_2_ = (ushort)bVar6 * auVar113._26_2_ | (ushort)!bVar6 * auVar64._26_2_;
          bVar6 = (bool)((byte)(uVar52 >> 0xe) & 1);
          in_ZmmResult._28_2_ = (ushort)bVar6 * auVar113._28_2_ | (ushort)!bVar6 * auVar64._28_2_;
          bVar6 = SUB81(uVar52 >> 0xf,0);
          in_ZmmResult._30_2_ = (ushort)bVar6 * auVar113._30_2_ | (ushort)!bVar6 * auVar64._30_2_;
          auVar65 = vmovdqu16_avx512vl(auVar113._0_32_);
          *(undefined1 (*) [32])*pauVar57 = auVar65;
          param_1 = (undefined1 (*) [64])0x0;
          goto LAB_14059b42c;
        }
        if (cVar39 == '\0') goto LAB_14059b4a0;
        plVar51 = (longlong *)0x0;
        if (param_4 == 3) {
          if (uVar52 != 0 && -1 < (longlong)param_5) {
            do {
              plVar51 = plVar51 + 8;
              auVar118 = vmaxps_avx512f(*pauVar57,
                                        *(undefined1 (*) [64])(*pauVar57 + (longlong)pauVar55 * 4));
              auVar74 = vmaxps_avx512f(pauVar57[1],
                                       *(undefined1 (*) [64])(pauVar57[1] + (longlong)pauVar55 * 4))
              ;
              auVar116 = vmaxps_avx512f(pauVar57[2],
                                        *(undefined1 (*) [64])(pauVar57[2] + (longlong)pauVar55 * 4)
                                       );
              auVar115 = vmaxps_avx512f(pauVar57[3],
                                        *(undefined1 (*) [64])(pauVar57[3] + (longlong)pauVar55 * 4)
                                       );
              auVar118 = vmaxps_avx512f(auVar118,*(undefined1 (*) [64])
                                                  (*pauVar57 + (longlong)pauVar55 * 8));
              auVar74 = vmaxps_avx512f(auVar74,*(undefined1 (*) [64])
                                                (pauVar57[1] + (longlong)pauVar55 * 8));
              auVar116 = vmaxps_avx512f(auVar116,*(undefined1 (*) [64])
                                                  (pauVar57[2] + (longlong)pauVar55 * 8));
              auVar115 = vmaxps_avx512f(auVar115,*(undefined1 (*) [64])
                                                  (pauVar57[3] + (longlong)pauVar55 * 8));
              *param_2 = auVar118;
              param_2[1] = auVar74;
              param_2[2] = auVar116;
              param_2[3] = auVar115;
              pauVar57 = pauVar57 + 4;
              param_2 = param_2 + 4;
            } while ((longlong)plVar51 < (longlong)uVar52);
          }
          auVar118 = _DAT_14308b0c0;
          while (_DAT_14308b0c0 = auVar118,
                (longlong)plVar51 < (longlong)((ulonglong)param_3 & 0xffffffffffffffe0)) {
            plVar51 = plVar51 + 4;
            auVar118 = vmaxps_avx512f(*pauVar57,
                                      *(undefined1 (*) [64])(*pauVar57 + (longlong)pauVar55 * 4));
            auVar74 = vmaxps_avx512f(pauVar57[1],
                                     *(undefined1 (*) [64])(pauVar57[1] + (longlong)pauVar55 * 4));
            auVar118 = vmaxps_avx512f(auVar118,*(undefined1 (*) [64])
                                                (*pauVar57 + (longlong)pauVar55 * 8));
            auVar74 = vmaxps_avx512f(auVar74,*(undefined1 (*) [64])
                                              (pauVar57[1] + (longlong)pauVar55 * 8));
            *param_2 = auVar118;
            param_2[1] = auVar74;
            pauVar57 = pauVar57 + 2;
            param_2 = param_2 + 2;
            auVar118 = _DAT_14308b0c0;
          }
          if ((longlong)plVar51 < (longlong)((ulonglong)param_3 & 0xfffffffffffffff0)) {
            lVar46 = 0;
            lVar44 = (((ulonglong)param_3 & 0xfffffffffffffff0) - 1) - (longlong)plVar51;
            lVar54 = 0;
            do {
              auVar74 = vmaxps_avx512f(auVar118,*(undefined1 (*) [64])(*pauVar57 + lVar54));
              lVar46 = lVar46 + 1;
              auVar74 = vmaxps_avx512f(auVar74,*(undefined1 (*) [64])
                                                (*pauVar57 + lVar54 + (longlong)pauVar55 * 4));
              auVar74 = vmaxps_avx512f(auVar74,*(undefined1 (*) [64])
                                                (*pauVar57 + lVar54 + (longlong)pauVar55 * 8));
              *(undefined1 (*) [64])(*param_2 + lVar54) = auVar74;
              lVar54 = lVar54 + 0x40;
            } while (lVar46 < (longlong)(lVar44 + 0x10 + ((ulonglong)(lVar44 + 0x10 >> 3) >> 0x3c))
                              >> 4);
            pauVar57 = pauVar57 + lVar46;
            param_2 = param_2 + lVar46;
            plVar51 = plVar51 + lVar46 * 2;
          }
          if ((longlong)param_3 <= (longlong)plVar51) {
            return;
          }
          uVar56 = 0xffff >> (((int)plVar51 - (int)param_3) + 0x10U & 0x1f);
          goto LAB_14059b64e;
        }
        auVar118 = _DAT_14308b0c0;
        auVar74 = _DAT_14308b0c0;
        if (uVar52 != 0 && -1 < (longlong)param_5) {
LAB_14059b4a0:
          do {
            lVar44 = 0;
            pauVar47 = pauVar57;
            auVar116 = auVar74;
            auVar115 = auVar74;
            auVar114 = auVar74;
            if (0 < param_4) {
              do {
                lVar44 = lVar44 + 1;
                auVar118 = vmaxps_avx512f(auVar118,*pauVar47);
                auVar114 = vmaxps_avx512f(auVar114,pauVar47[1]);
                auVar115 = vmaxps_avx512f(auVar115,pauVar47[2]);
                auVar116 = vmaxps_avx512f(auVar116,pauVar47[3]);
                pauVar47 = (undefined1 (*) [64])(*pauVar47 + (longlong)pauVar55 * 4);
              } while (lVar44 < param_4);
            }
            plVar51 = plVar51 + 8;
            pauVar57 = pauVar57 + 4;
            *param_2 = auVar118;
            param_2[1] = auVar114;
            param_2[2] = auVar115;
            param_2[3] = auVar116;
            param_2 = param_2 + 4;
            auVar118 = auVar74;
          } while ((longlong)plVar51 < (longlong)uVar52);
        }
        auVar74 = _DAT_14308b0c0;
        auVar118 = _DAT_14308b0c0;
        for (; (longlong)plVar51 < (longlong)((ulonglong)param_3 & 0xffffffffffffffe0);
            plVar51 = plVar51 + 4) {
          lVar44 = 0;
          pauVar47 = pauVar57;
          auVar116 = auVar74;
          auVar115 = auVar74;
          if (0 < param_4) {
            do {
              lVar44 = lVar44 + 1;
              auVar115 = vmaxps_avx512f(auVar115,*pauVar47);
              auVar116 = vmaxps_avx512f(auVar116,pauVar47[1]);
              pauVar47 = (undefined1 (*) [64])(*pauVar47 + (longlong)pauVar55 * 4);
            } while (lVar44 < param_4);
          }
          pauVar57 = pauVar57 + 2;
          _DAT_14308b0c0 = auVar118;
          *param_2 = auVar115;
          param_2[1] = auVar116;
          param_2 = param_2 + 2;
          auVar118 = _DAT_14308b0c0;
        }
        auVar74 = auVar118;
        for (; _DAT_14308b0c0 = auVar74,
            (longlong)plVar51 < (longlong)((ulonglong)param_3 & 0xfffffffffffffff0);
            plVar51 = plVar51 + 2) {
          lVar44 = 0;
          puVar48 = (undefined1 *)0x0;
          auVar74 = auVar118;
          if (0 < param_4) {
            do {
              lVar44 = lVar44 + 1;
              auVar74 = vmaxps_avx512f(auVar74,*(undefined1 (*) [64])
                                                (*pauVar57 + (longlong)puVar48 * 4));
              puVar48 = *pauVar55 + (longlong)puVar48;
            } while (lVar44 < param_4);
          }
          pauVar57 = pauVar57 + 1;
          *param_2 = auVar74;
          param_2 = param_2 + 1;
          auVar74 = _DAT_14308b0c0;
        }
        if ((longlong)plVar51 < (longlong)param_3) {
          uVar56 = 0xffff >> (((int)plVar51 - (int)param_3) + 0x10U & 0x1f);
          uVar40 = (ushort)uVar56;
          if (0 < param_4) {
LAB_14059b64e:
            uVar40 = (ushort)uVar56;
            lVar46 = 0;
            lVar44 = 0;
            auVar74 = _DAT_14308b0c0;
            do {
              lVar46 = lVar46 + 1;
              piVar1 = (int *)(*pauVar57 + lVar44);
              auVar117._4_4_ = (uint)((byte)(uVar40 >> 1) & 1) * piVar1[1];
              auVar117._0_4_ = (uint)((byte)uVar56 & 1) * *piVar1;
              auVar117._8_4_ = (uint)((byte)(uVar40 >> 2) & 1) * piVar1[2];
              auVar117._12_4_ = (uint)((byte)(uVar40 >> 3) & 1) * piVar1[3];
              auVar117._16_4_ = (uint)((byte)(uVar40 >> 4) & 1) * piVar1[4];
              auVar117._20_4_ = (uint)((byte)(uVar40 >> 5) & 1) * piVar1[5];
              auVar117._24_4_ = (uint)((byte)(uVar40 >> 6) & 1) * piVar1[6];
              auVar117._28_4_ = (uint)((byte)(uVar40 >> 7) & 1) * piVar1[7];
              bVar2 = (byte)(uVar56 >> 8);
              auVar117._32_4_ = (uint)(bVar2 & 1) * piVar1[8];
              auVar117._36_4_ = (uint)(bVar2 >> 1 & 1) * piVar1[9];
              auVar117._40_4_ = (uint)(bVar2 >> 2 & 1) * piVar1[10];
              auVar117._44_4_ = (uint)(bVar2 >> 3 & 1) * piVar1[0xb];
              auVar117._48_4_ = (uint)(bVar2 >> 4 & 1) * piVar1[0xc];
              auVar117._52_4_ = (uint)(bVar2 >> 5 & 1) * piVar1[0xd];
              auVar117._56_4_ = (uint)(bVar2 >> 6 & 1) * piVar1[0xe];
              auVar117._60_4_ = (uVar56 >> 0xf & 1) * piVar1[0xf];
              lVar44 = lVar44 + (longlong)pauVar55 * 4;
              auVar74 = vmaxps_avx512f(auVar74,auVar117);
            } while (lVar46 < param_4);
          }
          iVar58 = *(int *)(*param_2 + 4);
          iVar25 = *(int *)(*param_2 + 8);
          iVar26 = *(int *)(*param_2 + 0xc);
          iVar27 = *(int *)(*param_2 + 0x10);
          iVar28 = *(int *)(*param_2 + 0x14);
          iVar29 = *(int *)(*param_2 + 0x18);
          iVar30 = *(int *)(*param_2 + 0x1c);
          iVar31 = *(int *)(*param_2 + 0x20);
          iVar32 = *(int *)(*param_2 + 0x24);
          iVar33 = *(int *)(*param_2 + 0x28);
          iVar34 = *(int *)(*param_2 + 0x2c);
          iVar35 = *(int *)(*param_2 + 0x30);
          iVar36 = *(int *)(*param_2 + 0x34);
          iVar37 = *(int *)(*param_2 + 0x38);
          iVar38 = *(int *)(*param_2 + 0x3c);
          bVar6 = (bool)((byte)uVar40 & 1);
          bVar7 = (bool)((byte)(uVar40 >> 1) & 1);
          bVar8 = (bool)((byte)(uVar40 >> 2) & 1);
          bVar9 = (bool)((byte)(uVar40 >> 3) & 1);
          bVar10 = (bool)((byte)(uVar40 >> 4) & 1);
          bVar11 = (bool)((byte)(uVar40 >> 5) & 1);
          bVar12 = (bool)((byte)(uVar40 >> 6) & 1);
          bVar13 = (bool)((byte)(uVar40 >> 7) & 1);
          bVar2 = (byte)(uVar40 >> 8);
          bVar14 = (bool)(bVar2 >> 1 & 1);
          bVar15 = (bool)(bVar2 >> 2 & 1);
          bVar16 = (bool)(bVar2 >> 3 & 1);
          bVar17 = (bool)(bVar2 >> 4 & 1);
          bVar18 = (bool)(bVar2 >> 5 & 1);
          bVar19 = (bool)(bVar2 >> 6 & 1);
          *(uint *)*param_2 = (uint)bVar6 * auVar74._0_4_ | (uint)!bVar6 * *(int *)*param_2;
          *(uint *)(*param_2 + 4) = (uint)bVar7 * auVar74._4_4_ | (uint)!bVar7 * iVar58;
          *(uint *)(*param_2 + 8) = (uint)bVar8 * auVar74._8_4_ | (uint)!bVar8 * iVar25;
          *(uint *)(*param_2 + 0xc) = (uint)bVar9 * auVar74._12_4_ | (uint)!bVar9 * iVar26;
          *(uint *)(*param_2 + 0x10) = (uint)bVar10 * auVar74._16_4_ | (uint)!bVar10 * iVar27;
          *(uint *)(*param_2 + 0x14) = (uint)bVar11 * auVar74._20_4_ | (uint)!bVar11 * iVar28;
          *(uint *)(*param_2 + 0x18) = (uint)bVar12 * auVar74._24_4_ | (uint)!bVar12 * iVar29;
          *(uint *)(*param_2 + 0x1c) = (uint)bVar13 * auVar74._28_4_ | (uint)!bVar13 * iVar30;
          *(uint *)(*param_2 + 0x20) =
               (uint)(bVar2 & 1) * auVar74._32_4_ | (uint)!(bool)(bVar2 & 1) * iVar31;
          *(uint *)(*param_2 + 0x24) = (uint)bVar14 * auVar74._36_4_ | (uint)!bVar14 * iVar32;
          *(uint *)(*param_2 + 0x28) = (uint)bVar15 * auVar74._40_4_ | (uint)!bVar15 * iVar33;
          *(uint *)(*param_2 + 0x2c) = (uint)bVar16 * auVar74._44_4_ | (uint)!bVar16 * iVar34;
          *(uint *)(*param_2 + 0x30) = (uint)bVar17 * auVar74._48_4_ | (uint)!bVar17 * iVar35;
          *(uint *)(*param_2 + 0x34) = (uint)bVar18 * auVar74._52_4_ | (uint)!bVar18 * iVar36;
          *(uint *)(*param_2 + 0x38) = (uint)bVar19 * auVar74._56_4_ | (uint)!bVar19 * iVar37;
          *(uint *)(*param_2 + 0x3c) =
               (uint)(bVar2 >> 7) * auVar74._60_4_ | (uint)!(bool)(bVar2 >> 7) * iVar38;
        }
        return;
      }
LAB_14059b279:
      uVar52 = (ulonglong)pcVar45 & 0xf;
      lVar54 = (longlong)pcVar45 >> 4;
      in_ZMM18 = auVar118;
      if (lVar54 != 0) {
        pauVar59 = (undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 2);
        auVar65 = vpmaxuw_avx2(*(undefined1 (*) [32])*pauVar55,*pauVar59);
        pauVar60 = (undefined1 (*) [32])(*pauVar55 + (longlong)param_2 * 4);
        auVar65 = vpmaxuw_avx2(auVar65,*pauVar60);
        auVar118 = ZEXT3264(auVar65);
        pcVar53 = (char *)0x0;
        lVar46 = lVar54 + -1;
        if (lVar46 != 0 && 0 < lVar54) goto LAB_14059b2c0;
        goto LAB_14059b316;
      }
LAB_14059b360:
      auVar64 = in_ZMM18._0_32_;
      plVar50 = plVar51;
      if (uVar52 != 0) {
code_r0x00014059b369:
        iVar58 = (int)uVar52 * 2 + 4;
        plVar51 = plVar50;
        goto LAB_14059b36e;
      }
LAB_14059b42c:
      plVar50 = (longlong *)((longlong)plVar51 + 1);
      param_1 = (undefined1 (*) [64])(*param_1 + (longlong)param_2 * 2);
      param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 2);
      pauVar57 = param_3;
    } while ((longlong)plVar50 < *(longlong *)((longlong)plVar49 + 0x20));
  }
  return;
}

