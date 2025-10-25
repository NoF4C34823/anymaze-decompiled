
void FUN_1405522e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,uint param_10,int param_11)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong *puVar29;
  longlong lVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  undefined1 (*pauVar61) [32];
  longlong lVar62;
  longlong lVar63;
  ulonglong uVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  longlong lVar69;
  longlong lVar70;
  longlong lVar71;
  longlong lVar72;
  longlong lVar73;
  longlong lVar74;
  longlong lVar75;
  longlong lVar76;
  longlong lVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 in_ZMM2 [64];
  undefined8 uVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar112 [64];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [32];
  undefined1 auVar130 [64];
  undefined1 in_ZMM15 [64];
  longlong lStack_208;
  
  uVar64 = param_5 & 0xfffffffffffffffc;
  uVar39 = param_5 & 0xfffffffffffffff0;
  param_9 = param_7 * param_8 + param_9;
  lVar42 = 0;
  uVar48 = param_5 & 0xfffffffffffffff8;
  lVar49 = 0;
  uVar51 = param_5 & 0xffffffffffffff80;
  uVar47 = param_5 & 0xffffffffffffffe0;
  uVar33 = param_5 & 0xfffffffffffffffe;
  auVar31 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
  lVar35 = 0;
  if ((param_10 & 0x500) == 0x500) {
    if (0 < param_6) {
      lVar70 = (longlong)param_11;
      lVar68 = (longlong)(param_11 * 3);
      lVar35 = param_2 + lVar70;
      lVar72 = (longlong)(param_11 * 2);
      lStack_208 = 0;
      lVar42 = param_2 + lVar68;
      lVar71 = (longlong)(param_11 * 4);
      lVar49 = param_2 + lVar72;
      lVar30 = lVar72 + param_2 * 2;
      lVar59 = lVar68 + param_2 * 2;
      lVar57 = param_2 + lVar71;
      lVar3 = param_2 * 3;
      lVar69 = param_11 * 6 + lVar3;
      lVar60 = lVar71 + param_2 * 2;
      lVar34 = lVar72 + lVar3;
      lVar45 = lVar71 + lVar3;
      lVar52 = lVar72 + param_2 * 4;
      lVar56 = lVar71 + param_2 * 4;
      lVar63 = lVar70 + lVar3;
      lVar41 = lVar68 + lVar3;
      lVar54 = lVar70 + param_2 * 4;
      lVar40 = lVar68 + param_2 * 4;
      lVar1 = lVar70 + param_2 * 2;
      lVar65 = lVar70 * 3;
      lVar58 = (longlong)(param_11 * 5);
      lVar66 = lVar70 * 5;
      lVar4 = lVar58 + param_2 * 4;
      lVar5 = lVar3 + lVar58;
      lVar6 = lVar58 + param_2 * 2;
      lVar36 = param_2 + lVar58;
      lVar67 = param_2 * 5;
      lVar72 = lVar72 + lVar67;
      lVar58 = lVar58 + lVar67;
      lVar2 = lVar70 + lVar67;
      lVar55 = lVar68 + lVar67;
      lVar71 = lVar71 + lVar67;
      lVar62 = lVar68 + param_2 * 6;
      lVar38 = 0;
      lVar50 = 0;
      do {
        lVar44 = param_1 + lVar50;
        pauVar61 = (undefined1 (*) [32])(param_3 + lVar38);
        lVar43 = 0;
        if (0 < (longlong)uVar51) {
          uVar37 = 0;
          lVar43 = lVar44 + lVar35;
          lVar7 = lVar44 + lVar1;
          lVar8 = lVar44 + lVar3 + lVar70;
          lVar9 = lVar44 + lVar3;
          lVar10 = lVar44 + lVar54;
          lVar11 = lVar44 + lVar70 * 2 + param_2 * 4;
          lVar12 = lVar44 + lVar3 + lVar70 * 2;
          lVar13 = lVar44 + lVar3 + lVar70 * 6;
          lVar14 = lVar44 + param_2 + lVar70 * 2;
          lVar15 = lVar44 + lVar70 * 4 + param_2 * 4;
          lVar16 = lVar44 + lVar3 + lVar70 * 4;
          lVar17 = lVar44 + param_2 * 2 + lVar70 * 2;
          lVar18 = lVar44 + param_2 * 2 + lVar70 * 4;
          lVar19 = lVar44 + lVar66 + param_2 * 4;
          lVar20 = lVar44 + lVar3 + lVar66;
          lVar21 = lVar44 + param_2 + lVar70 * 4;
          lVar22 = lVar44 + lVar66 + param_2 * 2;
          lVar23 = lVar44 + lVar65 + param_2 * 4;
          lVar24 = lVar44 + lVar3 + lVar65;
          lVar25 = lVar44 + param_2 + lVar65;
          lVar26 = lVar44 + param_2 + lVar66;
          lVar27 = lVar44 + lVar65;
          lVar73 = lVar67 + lVar70 * 2 + lVar44;
          lVar28 = lVar44 + lVar65 + param_2 * 2;
          lVar74 = lVar67 + lVar65 + lVar44;
          lVar46 = lVar2 + lVar44;
          lVar75 = lVar67 + lVar70 * 4 + lVar44;
          lVar76 = lVar66 + lVar67 + lVar44;
          lVar77 = lVar65 + param_2 * 6 + lVar44;
          uVar53 = uVar37;
          do {
            uVar53 = uVar53 + 1;
            auVar31 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + lVar27),
                                   *(undefined1 (*) [32])(uVar37 + lVar43));
            auVar129 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + 0x20 + lVar27),
                                    *(undefined1 (*) [32])(uVar37 + 0x20 + lVar43));
            auVar111 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + 0x40 + lVar27),
                                    *(undefined1 (*) [32])(uVar37 + 0x40 + lVar43));
            auVar32 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + 0x60 + lVar27),
                                   *(undefined1 (*) [32])(uVar37 + 0x60 + lVar43));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar14));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar14));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar14));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar14));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar25));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar25));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar25));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar25));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar21));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar21));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar21));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar21));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar26));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar26));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar26));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar26));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar7));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar7));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar7));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar7));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar17));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar17));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar17));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar17));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar28));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar28));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar28));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar28));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar18));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar18));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar18));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar18));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar22));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar22));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar22));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar22));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar9));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar9));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar9));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar9));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar8));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar8));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar8));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar8));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar12));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar12));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar12));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar12));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar24));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar24));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar24));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar24));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar16));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar16));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar16));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar16));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar20));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar20));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar20));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar20));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar13));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar13));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar13));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar13));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar10));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar10));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar10));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar10));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar11));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar11));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar11));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar11));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar23));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar23));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar23));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar23));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar15));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar15));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar15));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar15));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar19));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar19));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar19));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar19));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar46));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar46));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar46));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar46));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar73));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar73));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar73));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar73));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar74));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar74));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar74));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar74));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar75));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar75));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar75));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar75));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar76));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar76));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar76));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar76));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar77));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar77));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar77));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar77));
            *(undefined1 (*) [32])(*pauVar61 + uVar37) = auVar31;
            *(undefined1 (*) [32])(pauVar61[1] + uVar37) = auVar129;
            *(undefined1 (*) [32])(pauVar61[2] + uVar37) = auVar111;
            *(undefined1 (*) [32])(pauVar61[3] + uVar37) = auVar32;
            uVar37 = uVar37 + 0x80;
          } while (uVar53 < uVar51 + 0x7f >> 7);
          pauVar61 = pauVar61 + uVar53 * 4;
          lVar44 = lVar44 + uVar53 * 0x80;
          lVar43 = (((ulonglong)((longlong)(uVar51 + 0x7f) >> 6) >> 0x39) + 0xff + uVar51 &
                   0xffffffffffffff80) - 0x80;
        }
        while (lVar43 < (longlong)uVar47) {
          auVar31 = vpminub_avx2(*(undefined1 (*) [32])(lVar44 + lVar68),
                                 *(undefined1 (*) [32])(lVar44 + lVar35));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar49));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar42));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar57));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar36));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar1));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar30));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar59));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar60));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar6));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar3));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar63));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar34));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar41));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar45));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar5));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar69));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar54));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar52));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar40));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar56));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar4));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar2));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar72));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar55));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar71));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar58));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar44 + lVar62));
          lVar44 = lVar44 + 0x20;
          *pauVar61 = auVar31;
          pauVar61 = pauVar61 + 1;
          lVar43 = lVar43 + 0x20;
        }
        while (lVar43 < (longlong)uVar39) {
          auVar82 = vpminub_avx(*(undefined1 (*) [16])(lVar44 + lVar68),
                                *(undefined1 (*) [16])(lVar44 + lVar35));
          lVar43 = lVar43 + 0x10;
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar49));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar42));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar57));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar36));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar1));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar30));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar59));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar60));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar6));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar3));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar63));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar34));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar41));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar45));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar5));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar69));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar54));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar52));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar40));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar56));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar4));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar2));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar72));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar55));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar71));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar58));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar44 + lVar62));
          lVar44 = lVar44 + 0x10;
          *(undefined1 (*) [16])*pauVar61 = auVar82;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 0x10);
        }
        while (lVar43 < (longlong)uVar48) {
          lVar43 = lVar43 + 8;
          auVar82._8_8_ = 0;
          auVar82._0_8_ = *(ulonglong *)(lVar44 + lVar35);
          auVar92._8_8_ = 0;
          auVar92._0_8_ = *(ulonglong *)(lVar44 + lVar68);
          auVar82 = vpminub_avx(auVar92,auVar82);
          auVar116._8_8_ = 0;
          auVar116._0_8_ = *(ulonglong *)(lVar44 + lVar49);
          auVar82 = vpminub_avx(auVar82,auVar116);
          auVar104._8_8_ = 0;
          auVar104._0_8_ = *(ulonglong *)(lVar44 + lVar42);
          auVar82 = vpminub_avx(auVar82,auVar104);
          auVar125._8_8_ = 0;
          auVar125._0_8_ = *(ulonglong *)(lVar44 + lVar57);
          auVar82 = vpminub_avx(auVar82,auVar125);
          auVar83._8_8_ = 0;
          auVar83._0_8_ = *(ulonglong *)(lVar44 + lVar36);
          auVar82 = vpminub_avx(auVar82,auVar83);
          auVar93._8_8_ = 0;
          auVar93._0_8_ = *(ulonglong *)(lVar44 + lVar1);
          auVar82 = vpminub_avx(auVar82,auVar93);
          auVar105._8_8_ = 0;
          auVar105._0_8_ = *(ulonglong *)(lVar44 + lVar30);
          auVar82 = vpminub_avx(auVar82,auVar105);
          auVar117._8_8_ = 0;
          auVar117._0_8_ = *(ulonglong *)(lVar44 + lVar59);
          auVar82 = vpminub_avx(auVar82,auVar117);
          auVar84._8_8_ = 0;
          auVar84._0_8_ = *(ulonglong *)(lVar44 + lVar60);
          auVar82 = vpminub_avx(auVar82,auVar84);
          auVar94._8_8_ = 0;
          auVar94._0_8_ = *(ulonglong *)(lVar44 + lVar6);
          auVar82 = vpminub_avx(auVar82,auVar94);
          auVar106._8_8_ = 0;
          auVar106._0_8_ = *(ulonglong *)(lVar44 + lVar3);
          auVar82 = vpminub_avx(auVar82,auVar106);
          auVar118._8_8_ = 0;
          auVar118._0_8_ = *(ulonglong *)(lVar44 + lVar63);
          auVar82 = vpminub_avx(auVar82,auVar118);
          auVar126._8_8_ = 0;
          auVar126._0_8_ = *(ulonglong *)(lVar44 + lVar34);
          auVar82 = vpminub_avx(auVar82,auVar126);
          auVar85._8_8_ = 0;
          auVar85._0_8_ = *(ulonglong *)(lVar44 + lVar41);
          auVar82 = vpminub_avx(auVar82,auVar85);
          auVar107._8_8_ = 0;
          auVar107._0_8_ = *(ulonglong *)(lVar44 + lVar45);
          auVar82 = vpminub_avx(auVar82,auVar107);
          auVar95._8_8_ = 0;
          auVar95._0_8_ = *(ulonglong *)(lVar44 + lVar5);
          auVar82 = vpminub_avx(auVar82,auVar95);
          auVar127._8_8_ = 0;
          auVar127._0_8_ = *(ulonglong *)(lVar44 + lVar69);
          auVar82 = vpminub_avx(auVar82,auVar127);
          auVar86._8_8_ = 0;
          auVar86._0_8_ = *(ulonglong *)(lVar44 + lVar54);
          auVar82 = vpminub_avx(auVar82,auVar86);
          auVar108._8_8_ = 0;
          auVar108._0_8_ = *(ulonglong *)(lVar44 + lVar52);
          auVar82 = vpminub_avx(auVar82,auVar108);
          auVar96._8_8_ = 0;
          auVar96._0_8_ = *(ulonglong *)(lVar44 + lVar40);
          auVar82 = vpminub_avx(auVar82,auVar96);
          auVar119._8_8_ = 0;
          auVar119._0_8_ = *(ulonglong *)(lVar44 + lVar56);
          auVar82 = vpminub_avx(auVar82,auVar119);
          auVar128._8_8_ = 0;
          auVar128._0_8_ = *(ulonglong *)(lVar44 + lVar4);
          auVar82 = vpminub_avx(auVar82,auVar128);
          auVar109._8_8_ = 0;
          auVar109._0_8_ = *(ulonglong *)(lVar44 + lVar2);
          auVar82 = vpminub_avx(auVar82,auVar109);
          auVar97._8_8_ = 0;
          auVar97._0_8_ = *(ulonglong *)(lVar44 + lVar72);
          auVar82 = vpminub_avx(auVar82,auVar97);
          auVar87._8_8_ = 0;
          auVar87._0_8_ = *(ulonglong *)(lVar44 + lVar55);
          auVar82 = vpminub_avx(auVar82,auVar87);
          auVar120._8_8_ = 0;
          auVar120._0_8_ = *(ulonglong *)(lVar44 + lVar71);
          auVar82 = vpminub_avx(auVar82,auVar120);
          auVar110._8_8_ = 0;
          auVar110._0_8_ = *(ulonglong *)(lVar44 + lVar58);
          auVar82 = vpminub_avx(auVar82,auVar110);
          puVar29 = (ulonglong *)(lVar44 + lVar62);
          lVar44 = lVar44 + 8;
          auVar98._8_8_ = 0;
          auVar98._0_8_ = *puVar29;
          auVar82 = vpminub_avx(auVar82,auVar98);
          *(longlong *)*pauVar61 = auVar82._0_8_;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 8);
        }
        while (lVar43 < (longlong)uVar64) {
          lVar43 = lVar43 + 4;
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar35),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar49),0);
          auVar84 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar68),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar42),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar57),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar36),0);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar30),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar1),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar59),0);
          auVar82 = vpminub_avx(auVar84,auVar82);
          auVar83 = vpminub_avx(auVar82,auVar83);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar60),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar6),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar3),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar63),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar34),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar41),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar45),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar5),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar69),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar54),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar52),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar40),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar56),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar4),0);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar72),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar2),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar55),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar71),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar58),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar44 + lVar62),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar82 = vpminub_avx(auVar83,auVar82);
          lVar44 = lVar44 + 4;
          *(int *)*pauVar61 = auVar82._0_4_;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 4);
        }
        while (lVar43 < (longlong)uVar33) {
          lVar43 = lVar43 + 2;
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar35),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar49),0);
          auVar84 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar68),0);
          auVar82 = vpminub_avx(auVar84,auVar82);
          auVar83 = vpminub_avx(auVar82,auVar83);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar42),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar57),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar36),0);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar30),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar1),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar59),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar60),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar6),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar3),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar63),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar34),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar41),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar45),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar5),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar69),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar54),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar52),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar40),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar56),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar4),0);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar72),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar2),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar55),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar71),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar58),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar44 + lVar62),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar82 = vpminub_avx(auVar83,auVar82);
          lVar44 = lVar44 + 2;
          vpextrw_avx(auVar82,0);
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 2);
        }
        while (lVar43 < (longlong)param_5) {
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar68),0);
          lVar43 = lVar43 + 1;
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar35),0);
          auVar83 = vpminub_avx(auVar82,auVar83);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar49),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar42),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar57),0);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar1),0);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar36),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar59),0);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar30),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar60),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar6),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar3),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar63),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar34),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar41),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar45),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar5),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar69),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar54),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar52),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar40),0);
          auVar83 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar56),0);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar2),0);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar4),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar72),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar55),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar71),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar58),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar44 + lVar62),0);
          auVar82 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpminub_avx(auVar82,auVar83);
          lVar44 = lVar44 + 1;
          (*pauVar61)[0] = auVar82[0];
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 1);
        }
        lStack_208 = lStack_208 + 1;
        lVar50 = lVar50 + param_2;
        lVar38 = lVar38 + param_4;
      } while (lStack_208 < param_6);
    }
  }
  else if ((param_10 & 0x300) == 0x300) {
    if (0 < param_6) {
      lVar55 = (longlong)param_11;
      lVar36 = (longlong)(param_11 * 2);
      lVar35 = param_2 + lVar55;
      lVar30 = lVar55 + param_2 * 2;
      lVar59 = lVar36 + param_2 * 2;
      lVar57 = param_2 + lVar36;
      lVar62 = (longlong)(param_11 * 3);
      lVar6 = param_2 * 2;
      lVar60 = (longlong)(param_11 << 2) + param_2 * 2;
      lVar34 = lVar62 + param_2 * 2;
      lVar45 = param_2 + lVar62;
      lVar4 = param_2 * 3;
      lVar62 = lVar62 + lVar4;
      lVar52 = lVar55 + lVar4;
      lVar56 = lVar36 + lVar4;
      lVar41 = lVar36 + param_2 * 4;
      lVar5 = lVar55 * 3;
      lVar40 = 0;
      do {
        lVar63 = param_1 + lVar49;
        pauVar61 = (undefined1 (*) [32])(param_3 + lVar40);
        lVar54 = 0;
        if (0 < (longlong)uVar51) {
          lVar54 = lVar63 + lVar30;
          uVar37 = 0;
          lVar1 = lVar63 + lVar4 + lVar55;
          lVar2 = lVar63 + lVar55 * 2 + param_2 * 4;
          lVar38 = lVar63 + param_2 * 2;
          lVar50 = lVar63 + lVar35;
          lVar65 = lVar4 + lVar55 * 2 + lVar63;
          lVar66 = lVar6 + lVar55 * 2 + lVar63;
          lVar67 = param_2 + lVar55 * 2 + lVar63;
          lVar3 = lVar63 + lVar55 * 2;
          lVar68 = lVar6 + lVar55 * 4 + lVar63;
          lVar69 = lVar4 + lVar5 + lVar63;
          lVar70 = lVar5 + param_2 * 2 + lVar63;
          lVar71 = lVar5 + param_2 + lVar63;
          uVar53 = uVar37;
          do {
            uVar53 = uVar53 + 1;
            auVar31 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + lVar3),
                                   *(undefined1 (*) [32])(uVar37 + lVar50));
            auVar129 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + 0x20 + lVar3),
                                    *(undefined1 (*) [32])(uVar37 + 0x20 + lVar50));
            auVar111 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + 0x40 + lVar3),
                                    *(undefined1 (*) [32])(uVar37 + 0x40 + lVar50));
            auVar32 = vpminub_avx2(*(undefined1 (*) [32])(uVar37 + 0x60 + lVar3),
                                   *(undefined1 (*) [32])(uVar37 + 0x60 + lVar50));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar67));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar67));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar67));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar67));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar71));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar71));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar71));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar71));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar38));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar38));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar38));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar38));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar54));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar54));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar54));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar54));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar66));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar66));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar66));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar66));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar70));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar70));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar70));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar70));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar68));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar68));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar68));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar68));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar1));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar1));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar1));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar1));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar65));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar65));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar65));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar65));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar69));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar69));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar69));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar69));
            auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(uVar37 + lVar2));
            auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(uVar37 + 0x20 + lVar2));
            auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(uVar37 + 0x40 + lVar2));
            auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(uVar37 + 0x60 + lVar2));
            *(undefined1 (*) [32])(*pauVar61 + uVar37) = auVar31;
            *(undefined1 (*) [32])(pauVar61[1] + uVar37) = auVar129;
            *(undefined1 (*) [32])(pauVar61[2] + uVar37) = auVar111;
            *(undefined1 (*) [32])(pauVar61[3] + uVar37) = auVar32;
            uVar37 = uVar37 + 0x80;
          } while (uVar53 < uVar51 + 0x7f >> 7);
          pauVar61 = pauVar61 + uVar53 * 4;
          lVar63 = lVar63 + uVar53 * 0x80;
          lVar54 = (((ulonglong)((longlong)(uVar51 + 0x7f) >> 6) >> 0x39) + 0xff + uVar51 &
                   0xffffffffffffff80) - 0x80;
        }
        while (lVar54 < (longlong)uVar47) {
          auVar31 = vpminub_avx2(*(undefined1 (*) [32])(lVar63 + lVar36),
                                 *(undefined1 (*) [32])(lVar63 + lVar35));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar57));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar45));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar6));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar30));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar59));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar34));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar60));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar52));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar56));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar62));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar63 + lVar41));
          lVar63 = lVar63 + 0x20;
          *pauVar61 = auVar31;
          pauVar61 = pauVar61 + 1;
          lVar54 = lVar54 + 0x20;
        }
        while (lVar54 < (longlong)uVar39) {
          lVar54 = lVar54 + 0x10;
          auVar82 = vpminub_avx(*(undefined1 (*) [16])(lVar63 + lVar36),
                                *(undefined1 (*) [16])(lVar63 + lVar35));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar57));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar45));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar6));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar30));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar59));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar34));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar60));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar52));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar56));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar62));
          auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar63 + lVar41));
          lVar63 = lVar63 + 0x10;
          *(undefined1 (*) [16])*pauVar61 = auVar82;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 0x10);
        }
        while (lVar54 < (longlong)uVar48) {
          lVar54 = lVar54 + 8;
          auVar79._8_8_ = 0;
          auVar79._0_8_ = *(ulonglong *)(lVar63 + lVar36);
          auVar122._8_8_ = 0;
          auVar122._0_8_ = *(ulonglong *)(lVar63 + lVar35);
          auVar82 = vpminub_avx(auVar79,auVar122);
          auVar89._8_8_ = 0;
          auVar89._0_8_ = *(ulonglong *)(lVar63 + lVar57);
          auVar82 = vpminub_avx(auVar82,auVar89);
          auVar101._8_8_ = 0;
          auVar101._0_8_ = *(ulonglong *)(lVar63 + lVar45);
          auVar82 = vpminub_avx(auVar82,auVar101);
          auVar115._8_8_ = 0;
          auVar115._0_8_ = *(ulonglong *)(lVar63 + lVar6);
          auVar82 = vpminub_avx(auVar82,auVar115);
          auVar123._8_8_ = 0;
          auVar123._0_8_ = *(ulonglong *)(lVar63 + lVar30);
          auVar82 = vpminub_avx(auVar82,auVar123);
          auVar80._8_8_ = 0;
          auVar80._0_8_ = *(ulonglong *)(lVar63 + lVar59);
          auVar82 = vpminub_avx(auVar82,auVar80);
          auVar102._8_8_ = 0;
          auVar102._0_8_ = *(ulonglong *)(lVar63 + lVar34);
          auVar82 = vpminub_avx(auVar82,auVar102);
          auVar90._8_8_ = 0;
          auVar90._0_8_ = *(ulonglong *)(lVar63 + lVar60);
          auVar82 = vpminub_avx(auVar82,auVar90);
          auVar124._8_8_ = 0;
          auVar124._0_8_ = *(ulonglong *)(lVar63 + lVar52);
          auVar82 = vpminub_avx(auVar82,auVar124);
          auVar81._8_8_ = 0;
          auVar81._0_8_ = *(ulonglong *)(lVar63 + lVar56);
          auVar82 = vpminub_avx(auVar82,auVar81);
          auVar103._8_8_ = 0;
          auVar103._0_8_ = *(ulonglong *)(lVar63 + lVar62);
          auVar82 = vpminub_avx(auVar82,auVar103);
          auVar91._8_8_ = 0;
          auVar91._0_8_ = *(ulonglong *)(lVar63 + lVar41);
          auVar82 = vpminub_avx(auVar82,auVar91);
          lVar63 = lVar63 + 8;
          *(longlong *)*pauVar61 = auVar82._0_8_;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 8);
        }
        while (lVar54 < (longlong)uVar64) {
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar36),0);
          lVar54 = lVar54 + 4;
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar35),0);
          auVar84 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar57),0);
          auVar82 = vpminub_avx(auVar82,auVar83);
          auVar84 = vpminub_avx(auVar82,auVar84);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar6),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar45),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar30),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar59),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar34),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar60),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar56),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar52),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar41),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar63 + lVar62),0);
          auVar83 = vpminub_avx(auVar84,auVar83);
          lVar63 = lVar63 + 4;
          auVar82 = vpminub_avx(auVar83,auVar82);
          *(int *)*pauVar61 = auVar82._0_4_;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 4);
        }
        while (lVar54 < (longlong)uVar33) {
          lVar54 = lVar54 + 2;
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar36),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar35),0);
          auVar84 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar57),0);
          auVar82 = vpminub_avx(auVar82,auVar83);
          auVar84 = vpminub_avx(auVar82,auVar84);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar6),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar45),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar30),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar59),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar34),0);
          auVar82 = vpminub_avx(auVar84,auVar82);
          auVar84 = vpminub_avx(auVar82,auVar83);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar60),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar52),0);
          auVar82 = vpminub_avx(auVar84,auVar82);
          auVar83 = vpminub_avx(auVar82,auVar83);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar56),0);
          auVar84 = vpminub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar41),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar63 + lVar62),0);
          lVar63 = lVar63 + 2;
          auVar83 = vpminub_avx(auVar84,auVar83);
          auVar82 = vpminub_avx(auVar83,auVar82);
          vpextrw_avx(auVar82,0);
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 2);
        }
        while (lVar54 < (longlong)param_5) {
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar36),0);
          lVar54 = lVar54 + 1;
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar35),0);
          auVar84 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar57),0);
          auVar82 = vpminub_avx(auVar82,auVar83);
          auVar84 = vpminub_avx(auVar82,auVar84);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar6),0);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar45),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar30),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar59),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar34),0);
          auVar82 = vpminub_avx(auVar84,auVar82);
          auVar84 = vpminub_avx(auVar82,auVar83);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar52),0);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar60),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar56),0);
          auVar84 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar62),0);
          auVar84 = vpminub_avx(auVar84,auVar83);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar63 + lVar41),0);
          auVar82 = vpminub_avx(auVar84,auVar82);
          auVar82 = vpminub_avx(auVar82,auVar83);
          lVar63 = lVar63 + 1;
          (*pauVar61)[0] = auVar82[0];
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 1);
        }
        lVar42 = lVar42 + 1;
        lVar49 = lVar49 + param_2;
        lVar40 = lVar40 + param_4;
      } while (lVar42 < param_6);
    }
  }
  else if ((param_10 & 0x100) == 0) {
    if (0 < param_6) {
      lVar30 = param_7 * 2 + 2;
      auVar82 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
      do {
        lVar57 = 0;
        lVar59 = param_1 + lVar49;
        pauVar61 = (undefined1 (*) [32])(param_3 + lVar35);
        if (0 < (longlong)uVar51) {
          do {
            lVar52 = 0;
            lVar60 = 0;
            lVar34 = 0;
            auVar129 = vpcmpeqd_avx2(in_ZMM15._0_32_,in_ZMM15._0_32_);
            in_ZMM15 = ZEXT3264(auVar129);
            lVar45 = 0;
            auVar130 = ZEXT3264(auVar31);
            in_ZMM4 = ZEXT3264(auVar31);
            auVar112 = ZEXT3264(auVar31);
            auVar129 = auVar31;
            auVar111 = auVar31;
            if (0 < param_8) {
              do {
                uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
                lVar56 = 0;
                if (uVar53 != 0) {
                  lVar41 = lVar59 + lVar45;
                  do {
                    lVar40 = lVar56 * 2;
                    lVar56 = lVar56 + 1;
                    lVar40 = (longlong)
                             (int)((uint)*(ushort *)(param_9 + lVar34 + 2 + lVar40) * param_11);
                    auVar129 = vpminub_avx2(in_ZMM15._0_32_,*(undefined1 (*) [32])(lVar40 + lVar41))
                    ;
                    in_ZMM15 = ZEXT3264(auVar129);
                    auVar129 = vpminub_avx2(auVar130._0_32_,
                                            *(undefined1 (*) [32])(lVar40 + 0x20 + lVar41));
                    auVar130 = ZEXT3264(auVar129);
                    auVar129 = vpminub_avx2(in_ZMM4._0_32_,
                                            *(undefined1 (*) [32])(lVar40 + 0x40 + lVar41));
                    in_ZMM4 = ZEXT3264(auVar129);
                    auVar129 = vpminub_avx2(auVar112._0_32_,
                                            *(undefined1 (*) [32])(lVar40 + 0x60 + lVar41));
                    auVar112 = ZEXT3264(auVar129);
                  } while (lVar56 < (longlong)uVar53);
                }
                auVar111 = auVar112._0_32_;
                auVar129 = auVar130._0_32_;
                lVar52 = lVar52 + 1;
                lVar34 = lVar34 + lVar30;
                lVar45 = lVar45 + param_2;
                lVar60 = lVar60 + 1 + param_7;
              } while (lVar52 < param_8);
            }
            lVar57 = lVar57 + 0x80;
            lVar59 = lVar59 + 0x80;
            *pauVar61 = in_ZMM15._0_32_;
            pauVar61[1] = auVar129;
            pauVar61[2] = in_ZMM4._0_32_;
            pauVar61[3] = auVar111;
            pauVar61 = pauVar61 + 4;
          } while (lVar57 < (longlong)uVar51);
        }
        for (; lVar57 < (longlong)(param_5 & 0xffffffffffffffc0); lVar57 = lVar57 + 0x40) {
          lVar52 = 0;
          lVar60 = 0;
          lVar34 = 0;
          auVar129 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
          in_ZMM4 = ZEXT3264(auVar129);
          lVar45 = 0;
          auVar112 = ZEXT3264(auVar31);
          auVar129 = auVar31;
          if (0 < param_8) {
            do {
              uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
              lVar56 = 0;
              if (uVar53 != 0) {
                do {
                  lVar41 = lVar56 * 2;
                  lVar56 = lVar56 + 1;
                  lVar41 = (longlong)
                           (int)((uint)*(ushort *)(param_9 + lVar34 + 2 + lVar41) * param_11);
                  auVar129 = vpminub_avx2(in_ZMM4._0_32_,
                                          *(undefined1 (*) [32])(lVar41 + lVar59 + lVar45));
                  in_ZMM4 = ZEXT3264(auVar129);
                  auVar129 = vpminub_avx2(auVar112._0_32_,
                                          *(undefined1 (*) [32])(lVar41 + 0x20 + lVar59 + lVar45));
                  auVar112 = ZEXT3264(auVar129);
                } while (lVar56 < (longlong)uVar53);
              }
              auVar129 = auVar112._0_32_;
              lVar52 = lVar52 + 1;
              lVar34 = lVar34 + lVar30;
              lVar45 = lVar45 + param_2;
              lVar60 = lVar60 + 1 + param_7;
            } while (lVar52 < param_8);
          }
          lVar59 = lVar59 + 0x40;
          *pauVar61 = in_ZMM4._0_32_;
          pauVar61[1] = auVar129;
          pauVar61 = pauVar61 + 2;
        }
        for (; lVar57 < (longlong)uVar47; lVar57 = lVar57 + 0x20) {
          lVar52 = 0;
          lVar60 = 0;
          lVar34 = 0;
          auVar112 = ZEXT3264(auVar31);
          lVar45 = 0;
          auVar129 = auVar31;
          if (0 < param_8) {
            do {
              uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
              lVar56 = 0;
              if (uVar53 != 0) {
                do {
                  lVar41 = lVar56 * 2;
                  lVar56 = lVar56 + 1;
                  auVar129 = vpminub_avx2(auVar112._0_32_,
                                          *(undefined1 (*) [32])
                                           ((longlong)
                                            (int)((uint)*(ushort *)(param_9 + lVar34 + 2 + lVar41) *
                                                 param_11) + lVar59 + lVar45));
                  auVar112 = ZEXT3264(auVar129);
                } while (lVar56 < (longlong)uVar53);
              }
              auVar129 = auVar112._0_32_;
              lVar52 = lVar52 + 1;
              lVar34 = lVar34 + lVar30;
              lVar45 = lVar45 + param_2;
              lVar60 = lVar60 + 1 + param_7;
            } while (lVar52 < param_8);
          }
          lVar59 = lVar59 + 0x20;
          *pauVar61 = auVar129;
          pauVar61 = pauVar61 + 1;
        }
        for (; lVar57 < (longlong)uVar39; lVar57 = lVar57 + 0x10) {
          lVar52 = 0;
          auVar112 = ZEXT1664(auVar82);
          lVar60 = 0;
          lVar34 = 0;
          lVar45 = 0;
          auVar83 = auVar82;
          if (0 < param_8) {
            do {
              uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
              lVar56 = 0;
              if (uVar53 != 0) {
                do {
                  lVar41 = lVar56 * 2;
                  lVar56 = lVar56 + 1;
                  auVar83 = vpminub_avx(auVar112._0_16_,
                                        *(undefined1 (*) [16])
                                         ((longlong)
                                          (int)((uint)*(ushort *)(param_9 + lVar34 + 2 + lVar41) *
                                               param_11) + lVar59 + lVar45));
                  auVar112 = ZEXT1664(auVar83);
                } while (lVar56 < (longlong)uVar53);
              }
              auVar83 = auVar112._0_16_;
              lVar52 = lVar52 + 1;
              lVar34 = lVar34 + lVar30;
              lVar45 = lVar45 + param_2;
              lVar60 = lVar60 + 1 + param_7;
            } while (lVar52 < param_8);
          }
          lVar59 = lVar59 + 0x10;
          *(undefined1 (*) [16])*pauVar61 = auVar83;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 0x10);
        }
        for (; lVar57 < (longlong)uVar48; lVar57 = lVar57 + 8) {
          lVar52 = 0;
          auVar112 = ZEXT1664(auVar82);
          uVar99 = auVar82._0_8_;
          lVar60 = 0;
          lVar34 = 0;
          lVar45 = 0;
          if (0 < param_8) {
            do {
              uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
              lVar56 = 0;
              if (uVar53 != 0) {
                do {
                  lVar41 = lVar56 * 2;
                  lVar56 = lVar56 + 1;
                  uVar37 = *(ulonglong *)
                            ((longlong)
                             (int)((uint)*(ushort *)(param_9 + lVar34 + 2 + lVar41) * param_11) +
                            lVar59 + lVar45);
                  in_ZMM4 = ZEXT864(uVar37);
                  auVar113._8_8_ = 0;
                  auVar113._0_8_ = uVar37;
                  auVar83 = vpminub_avx(auVar112._0_16_,auVar113);
                  auVar112 = ZEXT1664(auVar83);
                } while (lVar56 < (longlong)uVar53);
              }
              uVar99 = auVar112._0_8_;
              lVar52 = lVar52 + 1;
              lVar34 = lVar34 + lVar30;
              lVar45 = lVar45 + param_2;
              lVar60 = lVar60 + 1 + param_7;
            } while (lVar52 < param_8);
          }
          lVar59 = lVar59 + 8;
          *(undefined8 *)*pauVar61 = uVar99;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 8);
        }
        for (; lVar57 < (longlong)uVar64; lVar57 = lVar57 + 4) {
          lVar52 = 0;
          auVar112 = ZEXT1664(auVar82);
          lVar60 = 0;
          lVar34 = 0;
          lVar45 = 0;
          if (0 < param_8) {
            do {
              uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
              lVar56 = 0;
              if (uVar53 != 0) {
                do {
                  lVar41 = lVar56 * 2;
                  lVar56 = lVar56 + 1;
                  auVar83 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         ((longlong)
                                          (int)((uint)*(ushort *)(param_9 + lVar34 + 2 + lVar41) *
                                               param_11) + lVar59 + lVar45),0);
                  in_ZMM4 = ZEXT1664(auVar83);
                  auVar83 = vpminub_avx(auVar112._0_16_,auVar83);
                  auVar112 = ZEXT1664(auVar83);
                } while (lVar56 < (longlong)uVar53);
              }
              lVar52 = lVar52 + 1;
              lVar34 = lVar34 + lVar30;
              lVar45 = lVar45 + param_2;
              lVar60 = lVar60 + 1 + param_7;
            } while (lVar52 < param_8);
          }
          lVar59 = lVar59 + 4;
          *(int *)*pauVar61 = auVar112._0_4_;
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 4);
        }
        while (lVar57 < (longlong)uVar33) {
          lVar52 = 0;
          auVar112 = ZEXT1664(auVar82);
          lVar60 = 0;
          lVar34 = 0;
          lVar45 = 0;
          auVar83 = auVar82;
          if (0 < param_8) {
            do {
              uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
              lVar56 = 0;
              if (uVar53 != 0) {
                do {
                  lVar41 = lVar56 * 2;
                  lVar56 = lVar56 + 1;
                  auVar83 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               ((longlong)
                                                (int)((uint)*(ushort *)
                                                             (param_9 + lVar34 + 2 + lVar41) *
                                                     param_11) + lVar59 + lVar45),0);
                  in_ZMM4 = ZEXT1664(auVar83);
                  auVar83 = vpminub_avx(auVar112._0_16_,auVar83);
                  auVar112 = ZEXT1664(auVar83);
                } while (lVar56 < (longlong)uVar53);
              }
              auVar83 = auVar112._0_16_;
              lVar52 = lVar52 + 1;
              lVar34 = lVar34 + lVar30;
              lVar45 = lVar45 + param_2;
              lVar60 = lVar60 + 1 + param_7;
            } while (lVar52 < param_8);
          }
          lVar57 = lVar57 + 2;
          lVar59 = lVar59 + 2;
          vpextrw_avx(auVar83,0);
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 2);
        }
        for (; lVar57 < (longlong)param_5; lVar57 = lVar57 + 1) {
          lVar52 = 0;
          auVar112 = ZEXT1664(auVar82);
          lVar60 = 0;
          lVar34 = 0;
          lVar45 = 0;
          if (0 < param_8) {
            do {
              uVar53 = (ulonglong)*(ushort *)(param_9 + lVar60 * 2);
              lVar56 = 0;
              if (uVar53 != 0) {
                do {
                  lVar41 = lVar56 * 2;
                  lVar56 = lVar56 + 1;
                  auVar83 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)((longlong)
                                                        (int)((uint)*(ushort *)
                                                                     (param_9 + lVar45 + 2 + lVar41)
                                                             * param_11) + lVar59 + lVar34),0);
                  in_ZMM4 = ZEXT1664(auVar83);
                  auVar83 = vpminub_avx(auVar112._0_16_,auVar83);
                  auVar112 = ZEXT1664(auVar83);
                } while (lVar56 < (longlong)uVar53);
              }
              lVar52 = lVar52 + 1;
              lVar34 = lVar34 + param_2;
              lVar45 = lVar45 + lVar30;
              lVar60 = lVar60 + 1 + param_7;
            } while (lVar52 < param_8);
          }
          lVar59 = lVar59 + 1;
          (*pauVar61)[0] = auVar112[0];
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + 1);
        }
        lVar42 = lVar42 + 1;
        lVar49 = lVar49 + param_2;
        lVar35 = lVar35 + param_4;
      } while (lVar42 < param_6);
    }
  }
  else if (0 < param_6) {
    lVar60 = (longlong)param_11;
    lVar57 = param_11 * 2 + param_2;
    lVar30 = param_2 + lVar60;
    lVar59 = lVar60 + param_2 * 2;
    do {
      lVar45 = 0;
      lVar34 = param_1 + lVar49;
      pauVar61 = (undefined1 (*) [32])(param_3 + lVar35);
      if (0 < (longlong)uVar51) {
        do {
          lVar45 = lVar45 + 0x80;
          auVar31 = vpminub_avx2(*(undefined1 (*) [32])(lVar34 + lVar60),
                                 *(undefined1 (*) [32])(lVar34 + param_2));
          auVar129 = vpminub_avx2(*(undefined1 (*) [32])(lVar34 + 0x20 + lVar60),
                                  *(undefined1 (*) [32])(lVar34 + 0x20 + param_2));
          auVar111 = vpminub_avx2(*(undefined1 (*) [32])(lVar34 + 0x40 + lVar60),
                                  *(undefined1 (*) [32])(lVar34 + 0x40 + param_2));
          auVar32 = vpminub_avx2(*(undefined1 (*) [32])(lVar34 + 0x60 + lVar60),
                                 *(undefined1 (*) [32])(lVar34 + 0x60 + param_2));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar30));
          auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(lVar34 + 0x20 + lVar30));
          auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(lVar34 + 0x40 + lVar30));
          auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(lVar34 + 0x60 + lVar30));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar57));
          auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(lVar34 + 0x20 + lVar57));
          auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(lVar34 + 0x40 + lVar57));
          auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(lVar34 + 0x60 + lVar57));
          auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar59));
          auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(lVar34 + 0x20 + lVar59));
          auVar111 = vpminub_avx2(auVar111,*(undefined1 (*) [32])(lVar34 + 0x40 + lVar59));
          auVar32 = vpminub_avx2(auVar32,*(undefined1 (*) [32])(lVar34 + 0x60 + lVar59));
          lVar34 = lVar34 + 0x80;
          *pauVar61 = auVar31;
          pauVar61[1] = auVar129;
          pauVar61[2] = auVar111;
          pauVar61[3] = auVar32;
          pauVar61 = pauVar61 + 4;
        } while (lVar45 < (longlong)uVar51);
      }
      while (lVar45 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        lVar45 = lVar45 + 0x40;
        auVar31 = vpminub_avx2(*(undefined1 (*) [32])(lVar34 + lVar60),
                               *(undefined1 (*) [32])(lVar34 + param_2));
        auVar129 = vpminub_avx2(*(undefined1 (*) [32])(lVar34 + 0x20 + lVar60),
                                *(undefined1 (*) [32])(lVar34 + 0x20 + param_2));
        auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar30));
        auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(lVar34 + 0x20 + lVar30));
        auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar57));
        auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(lVar34 + 0x20 + lVar57));
        auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar59));
        auVar129 = vpminub_avx2(auVar129,*(undefined1 (*) [32])(lVar34 + 0x20 + lVar59));
        lVar34 = lVar34 + 0x40;
        *pauVar61 = auVar31;
        pauVar61[1] = auVar129;
        pauVar61 = pauVar61 + 2;
      }
      while (lVar45 < (longlong)uVar47) {
        lVar45 = lVar45 + 0x20;
        auVar31 = vpminub_avx2(*(undefined1 (*) [32])(lVar34 + lVar60),
                               *(undefined1 (*) [32])(lVar34 + param_2));
        auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar30));
        auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar57));
        auVar31 = vpminub_avx2(auVar31,*(undefined1 (*) [32])(lVar34 + lVar59));
        lVar34 = lVar34 + 0x20;
        *pauVar61 = auVar31;
        pauVar61 = pauVar61 + 1;
      }
      while (lVar45 < (longlong)uVar39) {
        auVar82 = vpminub_avx(*(undefined1 (*) [16])(lVar34 + lVar60),
                              *(undefined1 (*) [16])(lVar34 + param_2));
        lVar45 = lVar45 + 0x10;
        auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar34 + lVar30));
        auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar34 + lVar57));
        auVar82 = vpminub_avx(auVar82,*(undefined1 (*) [16])(lVar34 + lVar59));
        lVar34 = lVar34 + 0x10;
        *(undefined1 (*) [16])*pauVar61 = auVar82;
        pauVar61 = (undefined1 (*) [32])(*pauVar61 + 0x10);
      }
      while (lVar45 < (longlong)uVar48) {
        lVar45 = lVar45 + 8;
        auVar114._8_8_ = 0;
        auVar114._0_8_ = *(ulonglong *)(lVar34 + lVar60);
        auVar121._8_8_ = 0;
        auVar121._0_8_ = *(ulonglong *)(lVar34 + param_2);
        auVar82 = vpminub_avx(auVar114,auVar121);
        auVar100._8_8_ = 0;
        auVar100._0_8_ = *(ulonglong *)(lVar34 + lVar30);
        auVar82 = vpminub_avx(auVar82,auVar100);
        auVar78._8_8_ = 0;
        auVar78._0_8_ = *(ulonglong *)(lVar34 + lVar57);
        auVar82 = vpminub_avx(auVar82,auVar78);
        auVar88._8_8_ = 0;
        auVar88._0_8_ = *(ulonglong *)(lVar34 + lVar59);
        auVar82 = vpminub_avx(auVar82,auVar88);
        lVar34 = lVar34 + 8;
        *(longlong *)*pauVar61 = auVar82._0_8_;
        pauVar61 = (undefined1 (*) [32])(*pauVar61 + 8);
      }
      while (lVar45 < (longlong)uVar64) {
        auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar34 + lVar60),0);
        lVar45 = lVar45 + 4;
        auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar34 + param_2),0);
        auVar84 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar34 + lVar30),0);
        auVar83 = vpminub_avx(auVar82,auVar83);
        auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar34 + lVar57),0);
        auVar84 = vpminub_avx(auVar83,auVar84);
        auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar34 + lVar59),0);
        auVar82 = vpminub_avx(auVar84,auVar82);
        auVar82 = vpminub_avx(auVar82,auVar83);
        lVar34 = lVar34 + 4;
        *(int *)*pauVar61 = auVar82._0_4_;
        pauVar61 = (undefined1 (*) [32])(*pauVar61 + 4);
      }
      while (lVar45 < (longlong)uVar33) {
        auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar34 + lVar60),0);
        lVar45 = lVar45 + 2;
        auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar34 + param_2),0);
        auVar84 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar34 + lVar30),0);
        auVar83 = vpminub_avx(auVar82,auVar83);
        auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar34 + lVar57),0);
        auVar84 = vpminub_avx(auVar83,auVar84);
        auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar34 + lVar59),0);
        auVar82 = vpminub_avx(auVar84,auVar82);
        auVar82 = vpminub_avx(auVar82,auVar83);
        lVar34 = lVar34 + 2;
        vpextrw_avx(auVar82,0);
        pauVar61 = (undefined1 (*) [32])(*pauVar61 + 2);
      }
      while (lVar45 < (longlong)param_5) {
        auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar34 + lVar60),0);
        lVar45 = lVar45 + 1;
        auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar34 + param_2),0);
        auVar84 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar34 + lVar30),0);
        auVar83 = vpminub_avx(auVar82,auVar83);
        auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar34 + lVar57),0);
        auVar84 = vpminub_avx(auVar83,auVar84);
        auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar34 + lVar59),0);
        auVar82 = vpminub_avx(auVar84,auVar82);
        auVar82 = vpminub_avx(auVar82,auVar83);
        lVar34 = lVar34 + 1;
        (*pauVar61)[0] = auVar82[0];
        pauVar61 = (undefined1 (*) [32])(*pauVar61 + 1);
      }
      lVar42 = lVar42 + 1;
      lVar49 = lVar49 + param_2;
      lVar35 = lVar35 + param_4;
    } while (lVar42 < param_6);
  }
  return;
}

