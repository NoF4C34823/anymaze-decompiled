
void FUN_14050c6e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  longlong lVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  undefined1 (*pauVar59) [32];
  longlong lVar60;
  longlong lVar61;
  ulonglong uVar62;
  longlong lVar63;
  longlong lVar64;
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
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [32];
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
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [32];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  longlong lStack_208;
  undefined1 auVar88 [64];
  undefined1 auVar102 [64];
  undefined1 auVar115 [64];
  undefined1 auVar124 [64];
  
  uVar62 = param_5 & 0xfffffffffffffffc;
  uVar37 = param_5 & 0xfffffffffffffff0;
  param_9 = param_7 * param_8 + param_9;
  uVar43 = param_5 & 0xfffffffffffffff8;
  lVar40 = 0;
  uVar48 = param_5 & 0xffffffffffffff80;
  lVar45 = 0;
  uVar52 = param_5 & 0xffffffffffffffe0;
  uVar31 = param_5 & 0xfffffffffffffffe;
  lVar33 = 0;
  if ((param_10 & 0x500) == 0x500) {
    if (0 < param_6) {
      lVar68 = (longlong)param_11;
      lStack_208 = 0;
      lVar66 = (longlong)(param_11 * 2);
      lVar61 = lVar68 + param_2 * 2;
      lVar33 = param_2 + lVar68;
      lVar54 = (longlong)(param_11 * 3);
      lVar67 = (longlong)(param_11 * 4);
      lVar40 = param_2 + lVar66;
      lVar45 = lVar54 + param_2 * 2;
      lVar30 = param_2 + lVar67;
      lVar3 = param_2 * 3;
      lVar70 = param_11 * 6 + lVar3;
      lVar57 = param_2 + lVar54;
      lVar56 = lVar67 + param_2 * 2;
      lVar58 = lVar66 + lVar3;
      lVar32 = lVar67 + lVar3;
      lVar44 = lVar66 + param_2 * 4;
      lVar49 = lVar67 + param_2 * 4;
      lVar53 = lVar68 + lVar3;
      lVar55 = lVar54 + lVar3;
      lVar1 = lVar68 + param_2 * 4;
      lVar39 = lVar54 + param_2 * 4;
      lVar63 = lVar68 * 3;
      lVar38 = lVar66 + param_2 * 2;
      lVar69 = (longlong)(param_11 * 5);
      lVar64 = lVar68 * 5;
      lVar4 = lVar69 + param_2 * 4;
      lVar5 = lVar3 + lVar69;
      lVar6 = lVar69 + param_2 * 2;
      lVar34 = param_2 + lVar69;
      lVar65 = param_2 * 5;
      lVar66 = lVar66 + lVar65;
      lVar67 = lVar67 + lVar65;
      lVar69 = lVar69 + lVar65;
      lVar2 = lVar68 + lVar65;
      lVar51 = lVar54 + lVar65;
      lVar60 = lVar54 + param_2 * 6;
      lVar36 = 0;
      lVar46 = 0;
      do {
        lVar42 = param_1 + lVar46;
        pauVar59 = (undefined1 (*) [32])(param_3 + lVar36);
        lVar41 = 0;
        if (0 < (longlong)uVar48) {
          uVar35 = 0;
          lVar41 = lVar42 + lVar33;
          lVar7 = lVar42 + lVar61;
          lVar8 = lVar42 + lVar3 + lVar68;
          lVar9 = lVar42 + lVar3;
          lVar10 = lVar42 + lVar1;
          lVar11 = lVar42 + lVar68 * 2 + param_2 * 4;
          lVar12 = lVar42 + lVar3 + lVar68 * 2;
          lVar13 = lVar42 + lVar3 + lVar68 * 6;
          lVar14 = lVar42 + param_2 + lVar68 * 2;
          lVar15 = lVar42 + lVar68 * 4 + param_2 * 4;
          lVar16 = lVar42 + lVar3 + lVar68 * 4;
          lVar17 = lVar42 + param_2 * 2 + lVar68 * 2;
          lVar18 = lVar42 + param_2 * 2 + lVar68 * 4;
          lVar19 = lVar42 + lVar64 + param_2 * 4;
          lVar20 = lVar42 + lVar3 + lVar64;
          lVar21 = lVar42 + param_2 + lVar68 * 4;
          lVar22 = lVar42 + lVar64 + param_2 * 2;
          lVar23 = lVar42 + lVar63 + param_2 * 4;
          lVar24 = lVar42 + lVar3 + lVar63;
          lVar25 = lVar42 + param_2 + lVar63;
          lVar26 = lVar42 + param_2 + lVar64;
          lVar27 = lVar42 + lVar63;
          lVar71 = lVar65 + lVar68 * 2 + lVar42;
          lVar28 = lVar42 + lVar63 + param_2 * 2;
          lVar72 = lVar65 + lVar63 + lVar42;
          lVar47 = lVar2 + lVar42;
          lVar73 = lVar65 + lVar68 * 4 + lVar42;
          lVar74 = lVar64 + lVar65 + lVar42;
          lVar75 = lVar63 + param_2 * 6 + lVar42;
          uVar50 = uVar35;
          do {
            uVar50 = uVar50 + 1;
            auVar87 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + lVar27),
                                   *(undefined1 (*) [32])(uVar35 + lVar41));
            auVar101 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + 0x20 + lVar27),
                                    *(undefined1 (*) [32])(uVar35 + 0x20 + lVar41));
            auVar114 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + 0x40 + lVar27),
                                    *(undefined1 (*) [32])(uVar35 + 0x40 + lVar41));
            auVar123 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + 0x60 + lVar27),
                                    *(undefined1 (*) [32])(uVar35 + 0x60 + lVar41));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar14));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar14));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar14));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar14));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar25));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar25));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar25));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar25));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar21));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar21));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar21));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar21));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar26));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar26));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar26));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar26));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar7));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar7));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar7));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar7));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar17));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar17));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar17));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar17));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar28));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar28));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar28));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar28));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar18));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar18));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar18));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar18));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar22));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar22));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar22));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar22));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar9));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar9));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar9));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar9));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar8));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar8));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar8));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar8));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar12));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar12));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar12));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar12));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar24));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar24));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar24));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar24));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar16));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar16));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar16));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar16));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar20));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar20));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar20));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar20));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar13));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar13));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar13));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar13));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar10));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar10));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar10));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar10));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar11));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar11));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar11));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar11));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar23));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar23));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar23));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar23));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar15));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar15));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar15));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar15));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar19));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar19));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar19));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar19));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar47));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar47));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar47));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar47));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar71));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar71));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar71));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar71));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar72));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar72));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar72));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar72));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar73));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar73));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar73));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar73));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar74));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar74));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar74));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar74));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar75));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar75));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar75));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar75));
            *(undefined1 (*) [32])(*pauVar59 + uVar35) = auVar87;
            *(undefined1 (*) [32])(pauVar59[1] + uVar35) = auVar101;
            *(undefined1 (*) [32])(pauVar59[2] + uVar35) = auVar114;
            *(undefined1 (*) [32])(pauVar59[3] + uVar35) = auVar123;
            uVar35 = uVar35 + 0x80;
          } while (uVar50 < uVar48 + 0x7f >> 7);
          pauVar59 = pauVar59 + uVar50 * 4;
          lVar42 = lVar42 + uVar50 * 0x80;
          lVar41 = (((ulonglong)((longlong)(uVar48 + 0x7f) >> 6) >> 0x39) + 0xff + uVar48 &
                   0xffffffffffffff80) - 0x80;
        }
        while (lVar41 < (longlong)uVar52) {
          auVar87 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar42 + lVar54),
                                 *(undefined1 (*) [32])(lVar42 + lVar33));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar40));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar57));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar30));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar34));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar61));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar38));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar45));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar56));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar6));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar3));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar53));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar58));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar55));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar32));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar5));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar70));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar1));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar44));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar39));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar49));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar4));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar2));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar66));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar51));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar67));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar69));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar42 + lVar60));
          lVar42 = lVar42 + 0x20;
          *pauVar59 = auVar87;
          pauVar59 = pauVar59 + 1;
          lVar41 = lVar41 + 0x20;
        }
        while (lVar41 < (longlong)uVar37) {
          auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(lVar42 + lVar54),
                                *(undefined1 (*) [16])(lVar42 + lVar33));
          lVar41 = lVar41 + 0x10;
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar40));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar57));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar30));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar34));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar61));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar38));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar45));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar56));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar6));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar3));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar53));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar58));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar55));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar32));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar5));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar70));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar1));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar44));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar39));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar49));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar4));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar2));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar66));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar51));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar67));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar69));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar42 + lVar60));
          lVar42 = lVar42 + 0x10;
          *(undefined1 (*) [16])*pauVar59 = auVar81;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 0x10);
        }
        while (lVar41 < (longlong)uVar43) {
          lVar41 = lVar41 + 8;
          auVar81._8_8_ = 0;
          auVar81._0_8_ = *(ulonglong *)(lVar42 + lVar33);
          auVar94._8_8_ = 0;
          auVar94._0_8_ = *(ulonglong *)(lVar42 + lVar54);
          auVar81 = vpmaxub_avx(auVar94,auVar81);
          auVar118._8_8_ = 0;
          auVar118._0_8_ = *(ulonglong *)(lVar42 + lVar40);
          auVar81 = vpmaxub_avx(auVar81,auVar118);
          auVar107._8_8_ = 0;
          auVar107._0_8_ = *(ulonglong *)(lVar42 + lVar57);
          auVar81 = vpmaxub_avx(auVar81,auVar107);
          auVar129._8_8_ = 0;
          auVar129._0_8_ = *(ulonglong *)(lVar42 + lVar30);
          auVar81 = vpmaxub_avx(auVar81,auVar129);
          auVar82._8_8_ = 0;
          auVar82._0_8_ = *(ulonglong *)(lVar42 + lVar34);
          auVar81 = vpmaxub_avx(auVar81,auVar82);
          auVar95._8_8_ = 0;
          auVar95._0_8_ = *(ulonglong *)(lVar42 + lVar61);
          auVar81 = vpmaxub_avx(auVar81,auVar95);
          auVar108._8_8_ = 0;
          auVar108._0_8_ = *(ulonglong *)(lVar42 + lVar38);
          auVar81 = vpmaxub_avx(auVar81,auVar108);
          auVar119._8_8_ = 0;
          auVar119._0_8_ = *(ulonglong *)(lVar42 + lVar45);
          auVar81 = vpmaxub_avx(auVar81,auVar119);
          auVar83._8_8_ = 0;
          auVar83._0_8_ = *(ulonglong *)(lVar42 + lVar56);
          auVar81 = vpmaxub_avx(auVar81,auVar83);
          auVar96._8_8_ = 0;
          auVar96._0_8_ = *(ulonglong *)(lVar42 + lVar6);
          auVar81 = vpmaxub_avx(auVar81,auVar96);
          auVar109._8_8_ = 0;
          auVar109._0_8_ = *(ulonglong *)(lVar42 + lVar3);
          auVar81 = vpmaxub_avx(auVar81,auVar109);
          auVar120._8_8_ = 0;
          auVar120._0_8_ = *(ulonglong *)(lVar42 + lVar53);
          auVar81 = vpmaxub_avx(auVar81,auVar120);
          auVar130._8_8_ = 0;
          auVar130._0_8_ = *(ulonglong *)(lVar42 + lVar58);
          auVar81 = vpmaxub_avx(auVar81,auVar130);
          auVar84._8_8_ = 0;
          auVar84._0_8_ = *(ulonglong *)(lVar42 + lVar55);
          auVar81 = vpmaxub_avx(auVar81,auVar84);
          auVar110._8_8_ = 0;
          auVar110._0_8_ = *(ulonglong *)(lVar42 + lVar32);
          auVar81 = vpmaxub_avx(auVar81,auVar110);
          auVar97._8_8_ = 0;
          auVar97._0_8_ = *(ulonglong *)(lVar42 + lVar5);
          auVar81 = vpmaxub_avx(auVar81,auVar97);
          auVar131._8_8_ = 0;
          auVar131._0_8_ = *(ulonglong *)(lVar42 + lVar70);
          auVar81 = vpmaxub_avx(auVar81,auVar131);
          auVar85._8_8_ = 0;
          auVar85._0_8_ = *(ulonglong *)(lVar42 + lVar1);
          auVar81 = vpmaxub_avx(auVar81,auVar85);
          auVar111._8_8_ = 0;
          auVar111._0_8_ = *(ulonglong *)(lVar42 + lVar44);
          auVar81 = vpmaxub_avx(auVar81,auVar111);
          auVar98._8_8_ = 0;
          auVar98._0_8_ = *(ulonglong *)(lVar42 + lVar39);
          auVar81 = vpmaxub_avx(auVar81,auVar98);
          auVar121._8_8_ = 0;
          auVar121._0_8_ = *(ulonglong *)(lVar42 + lVar49);
          auVar81 = vpmaxub_avx(auVar81,auVar121);
          auVar132._8_8_ = 0;
          auVar132._0_8_ = *(ulonglong *)(lVar42 + lVar4);
          auVar81 = vpmaxub_avx(auVar81,auVar132);
          auVar112._8_8_ = 0;
          auVar112._0_8_ = *(ulonglong *)(lVar42 + lVar2);
          auVar81 = vpmaxub_avx(auVar81,auVar112);
          auVar99._8_8_ = 0;
          auVar99._0_8_ = *(ulonglong *)(lVar42 + lVar66);
          auVar81 = vpmaxub_avx(auVar81,auVar99);
          auVar86._8_8_ = 0;
          auVar86._0_8_ = *(ulonglong *)(lVar42 + lVar51);
          auVar81 = vpmaxub_avx(auVar81,auVar86);
          auVar122._8_8_ = 0;
          auVar122._0_8_ = *(ulonglong *)(lVar42 + lVar67);
          auVar81 = vpmaxub_avx(auVar81,auVar122);
          auVar113._8_8_ = 0;
          auVar113._0_8_ = *(ulonglong *)(lVar42 + lVar69);
          auVar81 = vpmaxub_avx(auVar81,auVar113);
          puVar29 = (ulonglong *)(lVar42 + lVar60);
          lVar42 = lVar42 + 8;
          auVar100._8_8_ = 0;
          auVar100._0_8_ = *puVar29;
          auVar81 = vpmaxub_avx(auVar81,auVar100);
          *(longlong *)*pauVar59 = auVar81._0_8_;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 8);
        }
        while (lVar41 < (longlong)uVar62) {
          lVar41 = lVar41 + 4;
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar33),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar40),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar54),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar30),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar34),0);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar38),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar61),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar45),0);
          auVar81 = vpmaxub_avx(auVar83,auVar81);
          auVar82 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar56),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar6),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar3),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar53),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar58),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar55),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar32),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar5),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar70),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar1),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar44),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar39),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar49),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar4),0);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar66),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar2),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar51),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar67),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar69),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar42 + lVar60),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          lVar42 = lVar42 + 4;
          *(int *)*pauVar59 = auVar81._0_4_;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 4);
        }
        while (lVar41 < (longlong)uVar31) {
          lVar41 = lVar41 + 2;
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar33),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar40),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar54),0);
          auVar81 = vpmaxub_avx(auVar83,auVar81);
          auVar82 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar30),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar34),0);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar38),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar61),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar45),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar56),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar6),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar3),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar53),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar58),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar55),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar32),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar5),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar70),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar1),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar44),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar39),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar49),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar4),0);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar66),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar2),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar51),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar67),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar69),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar42 + lVar60),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          lVar42 = lVar42 + 2;
          vpextrw_avx(auVar81,0);
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 2);
        }
        while (lVar41 < (longlong)param_5) {
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar54),0);
          lVar41 = lVar41 + 1;
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar33),0);
          auVar82 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar40),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar30),0);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar61),0);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar34),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar45),0);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar38),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar56),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar6),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar3),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar53),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar58),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar55),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar32),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar5),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar70),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar1),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar44),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar39),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar49),0);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar2),0);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar4),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar66),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar51),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar67),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar69),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar42 + lVar60),0);
          auVar81 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar82);
          lVar42 = lVar42 + 1;
          (*pauVar59)[0] = auVar81[0];
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 1);
        }
        lStack_208 = lStack_208 + 1;
        lVar46 = lVar46 + param_2;
        lVar36 = lVar36 + param_4;
      } while (lStack_208 < param_6);
    }
  }
  else if ((param_10 & 0x300) == 0x300) {
    if (0 < param_6) {
      lVar51 = (longlong)param_11;
      lVar34 = (longlong)(param_11 * 2);
      lVar33 = param_2 + lVar51;
      lVar30 = lVar51 + param_2 * 2;
      lVar57 = lVar34 + param_2 * 2;
      lVar56 = param_2 + lVar34;
      lVar60 = (longlong)(param_11 * 3);
      lVar6 = param_2 * 2;
      lVar58 = (longlong)(param_11 << 2) + param_2 * 2;
      lVar32 = lVar60 + param_2 * 2;
      lVar44 = param_2 + lVar60;
      lVar4 = param_2 * 3;
      lVar60 = lVar60 + lVar4;
      lVar49 = lVar51 + lVar4;
      lVar55 = lVar34 + lVar4;
      lVar39 = lVar34 + param_2 * 4;
      lVar5 = lVar51 * 3;
      lVar38 = 0;
      do {
        lVar61 = param_1 + lVar45;
        pauVar59 = (undefined1 (*) [32])(param_3 + lVar38);
        lVar53 = 0;
        if (0 < (longlong)uVar48) {
          lVar53 = lVar61 + lVar30;
          uVar35 = 0;
          lVar1 = lVar61 + lVar4 + lVar51;
          lVar2 = lVar61 + lVar51 * 2 + param_2 * 4;
          lVar36 = lVar61 + param_2 * 2;
          lVar46 = lVar61 + lVar33;
          lVar63 = lVar4 + lVar51 * 2 + lVar61;
          lVar64 = lVar6 + lVar51 * 2 + lVar61;
          lVar65 = param_2 + lVar51 * 2 + lVar61;
          lVar3 = lVar61 + lVar51 * 2;
          lVar66 = lVar6 + lVar51 * 4 + lVar61;
          lVar67 = lVar4 + lVar5 + lVar61;
          lVar68 = lVar5 + param_2 * 2 + lVar61;
          lVar69 = lVar5 + param_2 + lVar61;
          uVar50 = uVar35;
          do {
            uVar50 = uVar50 + 1;
            auVar87 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + lVar3),
                                   *(undefined1 (*) [32])(uVar35 + lVar46));
            auVar101 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + 0x20 + lVar3),
                                    *(undefined1 (*) [32])(uVar35 + 0x20 + lVar46));
            auVar114 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + 0x40 + lVar3),
                                    *(undefined1 (*) [32])(uVar35 + 0x40 + lVar46));
            auVar123 = vpmaxub_avx2(*(undefined1 (*) [32])(uVar35 + 0x60 + lVar3),
                                    *(undefined1 (*) [32])(uVar35 + 0x60 + lVar46));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar65));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar65));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar65));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar65));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar69));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar69));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar69));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar69));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar36));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar36));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar36));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar36));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar53));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar53));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar53));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar53));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar64));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar64));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar64));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar64));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar68));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar68));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar68));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar68));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar66));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar66));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar66));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar66));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar1));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar1));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar1));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar1));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar63));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar63));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar63));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar63));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar67));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar67));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar67));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar67));
            auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(uVar35 + lVar2));
            auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(uVar35 + 0x20 + lVar2));
            auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(uVar35 + 0x40 + lVar2));
            auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(uVar35 + 0x60 + lVar2));
            *(undefined1 (*) [32])(*pauVar59 + uVar35) = auVar87;
            *(undefined1 (*) [32])(pauVar59[1] + uVar35) = auVar101;
            *(undefined1 (*) [32])(pauVar59[2] + uVar35) = auVar114;
            *(undefined1 (*) [32])(pauVar59[3] + uVar35) = auVar123;
            uVar35 = uVar35 + 0x80;
          } while (uVar50 < uVar48 + 0x7f >> 7);
          pauVar59 = pauVar59 + uVar50 * 4;
          lVar61 = lVar61 + uVar50 * 0x80;
          lVar53 = (((ulonglong)((longlong)(uVar48 + 0x7f) >> 6) >> 0x39) + 0xff + uVar48 &
                   0xffffffffffffff80) - 0x80;
        }
        while (lVar53 < (longlong)uVar52) {
          auVar87 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar61 + lVar34),
                                 *(undefined1 (*) [32])(lVar61 + lVar33));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar56));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar44));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar6));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar30));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar57));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar32));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar58));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar49));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar55));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar60));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar61 + lVar39));
          lVar61 = lVar61 + 0x20;
          *pauVar59 = auVar87;
          pauVar59 = pauVar59 + 1;
          lVar53 = lVar53 + 0x20;
        }
        while (lVar53 < (longlong)uVar37) {
          lVar53 = lVar53 + 0x10;
          auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(lVar61 + lVar34),
                                *(undefined1 (*) [16])(lVar61 + lVar33));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar56));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar44));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar6));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar30));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar57));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar32));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar58));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar49));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar55));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar60));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar61 + lVar39));
          lVar61 = lVar61 + 0x10;
          *(undefined1 (*) [16])*pauVar59 = auVar81;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 0x10);
        }
        while (lVar53 < (longlong)uVar43) {
          lVar53 = lVar53 + 8;
          auVar78._8_8_ = 0;
          auVar78._0_8_ = *(ulonglong *)(lVar61 + lVar34);
          auVar126._8_8_ = 0;
          auVar126._0_8_ = *(ulonglong *)(lVar61 + lVar33);
          auVar81 = vpmaxub_avx(auVar78,auVar126);
          auVar91._8_8_ = 0;
          auVar91._0_8_ = *(ulonglong *)(lVar61 + lVar56);
          auVar81 = vpmaxub_avx(auVar81,auVar91);
          auVar104._8_8_ = 0;
          auVar104._0_8_ = *(ulonglong *)(lVar61 + lVar44);
          auVar81 = vpmaxub_avx(auVar81,auVar104);
          auVar117._8_8_ = 0;
          auVar117._0_8_ = *(ulonglong *)(lVar61 + lVar6);
          auVar81 = vpmaxub_avx(auVar81,auVar117);
          auVar127._8_8_ = 0;
          auVar127._0_8_ = *(ulonglong *)(lVar61 + lVar30);
          auVar81 = vpmaxub_avx(auVar81,auVar127);
          auVar79._8_8_ = 0;
          auVar79._0_8_ = *(ulonglong *)(lVar61 + lVar57);
          auVar81 = vpmaxub_avx(auVar81,auVar79);
          auVar105._8_8_ = 0;
          auVar105._0_8_ = *(ulonglong *)(lVar61 + lVar32);
          auVar81 = vpmaxub_avx(auVar81,auVar105);
          auVar92._8_8_ = 0;
          auVar92._0_8_ = *(ulonglong *)(lVar61 + lVar58);
          auVar81 = vpmaxub_avx(auVar81,auVar92);
          auVar128._8_8_ = 0;
          auVar128._0_8_ = *(ulonglong *)(lVar61 + lVar49);
          auVar81 = vpmaxub_avx(auVar81,auVar128);
          auVar80._8_8_ = 0;
          auVar80._0_8_ = *(ulonglong *)(lVar61 + lVar55);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar106._8_8_ = 0;
          auVar106._0_8_ = *(ulonglong *)(lVar61 + lVar60);
          auVar81 = vpmaxub_avx(auVar81,auVar106);
          auVar93._8_8_ = 0;
          auVar93._0_8_ = *(ulonglong *)(lVar61 + lVar39);
          auVar81 = vpmaxub_avx(auVar81,auVar93);
          lVar61 = lVar61 + 8;
          *(longlong *)*pauVar59 = auVar81._0_8_;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 8);
        }
        while (lVar53 < (longlong)uVar62) {
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar34),0);
          lVar53 = lVar53 + 4;
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar33),0);
          auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar56),0);
          auVar81 = vpmaxub_avx(auVar81,auVar82);
          auVar83 = vpmaxub_avx(auVar81,auVar83);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar6),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar44),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar30),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar57),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar32),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar58),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar55),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar49),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar39),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar61 + lVar60),0);
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          lVar61 = lVar61 + 4;
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          *(int *)*pauVar59 = auVar81._0_4_;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 4);
        }
        while (lVar53 < (longlong)uVar31) {
          lVar53 = lVar53 + 2;
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar34),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar33),0);
          auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar56),0);
          auVar81 = vpmaxub_avx(auVar81,auVar82);
          auVar83 = vpmaxub_avx(auVar81,auVar83);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar6),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar44),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar30),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar57),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar32),0);
          auVar81 = vpmaxub_avx(auVar83,auVar81);
          auVar83 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar58),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar49),0);
          auVar81 = vpmaxub_avx(auVar83,auVar81);
          auVar82 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar55),0);
          auVar83 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar39),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar61 + lVar60),0);
          lVar61 = lVar61 + 2;
          auVar82 = vpmaxub_avx(auVar83,auVar82);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          vpextrw_avx(auVar81,0);
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 2);
        }
        while (lVar53 < (longlong)param_5) {
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar34),0);
          lVar53 = lVar53 + 1;
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar33),0);
          auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar56),0);
          auVar81 = vpmaxub_avx(auVar81,auVar82);
          auVar83 = vpmaxub_avx(auVar81,auVar83);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar6),0);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar44),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar30),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar57),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar32),0);
          auVar81 = vpmaxub_avx(auVar83,auVar81);
          auVar83 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar49),0);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar58),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar55),0);
          auVar83 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar60),0);
          auVar83 = vpmaxub_avx(auVar83,auVar82);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar61 + lVar39),0);
          auVar81 = vpmaxub_avx(auVar83,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar82);
          lVar61 = lVar61 + 1;
          (*pauVar59)[0] = auVar81[0];
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 1);
        }
        lVar40 = lVar40 + 1;
        lVar45 = lVar45 + param_2;
        lVar38 = lVar38 + param_4;
      } while (lVar40 < param_6);
    }
  }
  else if ((param_10 & 0x100) == 0) {
    if (0 < param_6) {
      lVar30 = param_7 * 2 + 2;
      do {
        lVar56 = 0;
        lVar57 = param_1 + lVar45;
        pauVar59 = (undefined1 (*) [32])(param_3 + lVar33);
        if (0 < (longlong)uVar48) {
          do {
            lVar49 = 0;
            auVar124 = ZEXT3264((undefined1  [32])0x0);
            auVar123 = (undefined1  [32])0x0;
            lVar58 = 0;
            auVar115 = ZEXT3264((undefined1  [32])0x0);
            auVar114 = (undefined1  [32])0x0;
            lVar32 = 0;
            auVar102 = ZEXT3264((undefined1  [32])0x0);
            auVar101 = (undefined1  [32])0x0;
            lVar44 = 0;
            auVar88 = ZEXT3264((undefined1  [32])0x0);
            auVar87 = (undefined1  [32])0x0;
            if (0 < param_8) {
              do {
                uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
                lVar55 = 0;
                if (uVar50 != 0) {
                  lVar39 = lVar57 + lVar44;
                  do {
                    lVar38 = lVar55 * 2;
                    lVar55 = lVar55 + 1;
                    lVar38 = (longlong)
                             (int)((uint)*(ushort *)(param_9 + lVar32 + 2 + lVar38) * param_11);
                    auVar87 = vpmaxub_avx2(auVar124._0_32_,*(undefined1 (*) [32])(lVar38 + lVar39));
                    auVar124 = ZEXT3264(auVar87);
                    auVar87 = vpmaxub_avx2(auVar115._0_32_,
                                           *(undefined1 (*) [32])(lVar38 + 0x20 + lVar39));
                    auVar115 = ZEXT3264(auVar87);
                    auVar87 = vpmaxub_avx2(auVar102._0_32_,
                                           *(undefined1 (*) [32])(lVar38 + 0x40 + lVar39));
                    auVar102 = ZEXT3264(auVar87);
                    auVar87 = vpmaxub_avx2(auVar88._0_32_,
                                           *(undefined1 (*) [32])(lVar38 + 0x60 + lVar39));
                    auVar88 = ZEXT3264(auVar87);
                  } while (lVar55 < (longlong)uVar50);
                }
                auVar87 = auVar88._0_32_;
                auVar101 = auVar102._0_32_;
                auVar114 = auVar115._0_32_;
                auVar123 = auVar124._0_32_;
                lVar49 = lVar49 + 1;
                lVar32 = lVar32 + lVar30;
                lVar44 = lVar44 + param_2;
                lVar58 = lVar58 + 1 + param_7;
              } while (lVar49 < param_8);
            }
            lVar56 = lVar56 + 0x80;
            lVar57 = lVar57 + 0x80;
            *pauVar59 = auVar123;
            pauVar59[1] = auVar114;
            pauVar59[2] = auVar101;
            pauVar59[3] = auVar87;
            pauVar59 = pauVar59 + 4;
          } while (lVar56 < (longlong)uVar48);
        }
        for (; lVar56 < (longlong)(param_5 & 0xffffffffffffffc0); lVar56 = lVar56 + 0x40) {
          lVar49 = 0;
          auVar102 = ZEXT3264((undefined1  [32])0x0);
          auVar101 = (undefined1  [32])0x0;
          lVar58 = 0;
          lVar32 = 0;
          auVar88 = ZEXT3264((undefined1  [32])0x0);
          auVar87 = (undefined1  [32])0x0;
          lVar44 = 0;
          if (0 < param_8) {
            do {
              uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
              lVar55 = 0;
              if (uVar50 != 0) {
                do {
                  lVar39 = lVar55 * 2;
                  lVar55 = lVar55 + 1;
                  lVar39 = (longlong)
                           (int)((uint)*(ushort *)(param_9 + lVar32 + 2 + lVar39) * param_11);
                  auVar87 = vpmaxub_avx2(auVar102._0_32_,
                                         *(undefined1 (*) [32])(lVar39 + lVar57 + lVar44));
                  auVar102 = ZEXT3264(auVar87);
                  auVar87 = vpmaxub_avx2(auVar88._0_32_,
                                         *(undefined1 (*) [32])(lVar39 + 0x20 + lVar57 + lVar44));
                  auVar88 = ZEXT3264(auVar87);
                } while (lVar55 < (longlong)uVar50);
              }
              auVar87 = auVar88._0_32_;
              auVar101 = auVar102._0_32_;
              lVar49 = lVar49 + 1;
              lVar32 = lVar32 + lVar30;
              lVar44 = lVar44 + param_2;
              lVar58 = lVar58 + 1 + param_7;
            } while (lVar49 < param_8);
          }
          lVar57 = lVar57 + 0x40;
          *pauVar59 = auVar101;
          pauVar59[1] = auVar87;
          pauVar59 = pauVar59 + 2;
        }
        for (; lVar56 < (longlong)uVar52; lVar56 = lVar56 + 0x20) {
          lVar49 = 0;
          lVar58 = 0;
          lVar32 = 0;
          auVar88 = ZEXT3264((undefined1  [32])0x0);
          auVar87 = (undefined1  [32])0x0;
          lVar44 = 0;
          if (0 < param_8) {
            do {
              uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
              lVar55 = 0;
              if (uVar50 != 0) {
                do {
                  lVar39 = lVar55 * 2;
                  lVar55 = lVar55 + 1;
                  auVar87 = vpmaxub_avx2(auVar88._0_32_,
                                         *(undefined1 (*) [32])
                                          ((longlong)
                                           (int)((uint)*(ushort *)(param_9 + lVar32 + 2 + lVar39) *
                                                param_11) + lVar57 + lVar44));
                  auVar88 = ZEXT3264(auVar87);
                } while (lVar55 < (longlong)uVar50);
              }
              auVar87 = auVar88._0_32_;
              lVar49 = lVar49 + 1;
              lVar32 = lVar32 + lVar30;
              lVar44 = lVar44 + param_2;
              lVar58 = lVar58 + 1 + param_7;
            } while (lVar49 < param_8);
          }
          lVar57 = lVar57 + 0x20;
          *pauVar59 = auVar87;
          pauVar59 = pauVar59 + 1;
        }
        for (; lVar56 < (longlong)uVar37; lVar56 = lVar56 + 0x10) {
          lVar49 = 0;
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          auVar81 = (undefined1  [16])0x0;
          lVar58 = 0;
          lVar32 = 0;
          lVar44 = 0;
          if (0 < param_8) {
            do {
              uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
              lVar55 = 0;
              if (uVar50 != 0) {
                do {
                  lVar39 = lVar55 * 2;
                  lVar55 = lVar55 + 1;
                  auVar81 = vpmaxub_avx(auVar88._0_16_,
                                        *(undefined1 (*) [16])
                                         ((longlong)
                                          (int)((uint)*(ushort *)(param_9 + lVar32 + 2 + lVar39) *
                                               param_11) + lVar57 + lVar44));
                  auVar88 = ZEXT1664(auVar81);
                } while (lVar55 < (longlong)uVar50);
              }
              auVar81 = auVar88._0_16_;
              lVar49 = lVar49 + 1;
              lVar32 = lVar32 + lVar30;
              lVar44 = lVar44 + param_2;
              lVar58 = lVar58 + 1 + param_7;
            } while (lVar49 < param_8);
          }
          lVar57 = lVar57 + 0x10;
          *(undefined1 (*) [16])*pauVar59 = auVar81;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 0x10);
        }
        for (; lVar56 < (longlong)uVar43; lVar56 = lVar56 + 8) {
          lVar49 = 0;
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          uVar76 = 0;
          lVar58 = 0;
          lVar32 = 0;
          lVar44 = 0;
          if (0 < param_8) {
            do {
              uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
              lVar55 = 0;
              if (uVar50 != 0) {
                do {
                  lVar39 = lVar55 * 2;
                  lVar55 = lVar55 + 1;
                  auVar89._8_8_ = 0;
                  auVar89._0_8_ =
                       *(ulonglong *)
                        ((longlong)
                         (int)((uint)*(ushort *)(param_9 + lVar32 + 2 + lVar39) * param_11) +
                        lVar57 + lVar44);
                  auVar81 = vpmaxub_avx(auVar88._0_16_,auVar89);
                  auVar88 = ZEXT1664(auVar81);
                } while (lVar55 < (longlong)uVar50);
              }
              uVar76 = auVar88._0_8_;
              lVar49 = lVar49 + 1;
              lVar32 = lVar32 + lVar30;
              lVar44 = lVar44 + param_2;
              lVar58 = lVar58 + 1 + param_7;
            } while (lVar49 < param_8);
          }
          lVar57 = lVar57 + 8;
          *(undefined8 *)*pauVar59 = uVar76;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 8);
        }
        for (; lVar56 < (longlong)uVar62; lVar56 = lVar56 + 4) {
          lVar49 = 0;
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          lVar58 = 0;
          lVar32 = 0;
          lVar44 = 0;
          if (0 < param_8) {
            do {
              uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
              lVar55 = 0;
              if (uVar50 != 0) {
                do {
                  lVar39 = lVar55 * 2;
                  lVar55 = lVar55 + 1;
                  auVar81 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         ((longlong)
                                          (int)((uint)*(ushort *)(param_9 + lVar32 + 2 + lVar39) *
                                               param_11) + lVar57 + lVar44),0);
                  auVar81 = vpmaxub_avx(auVar88._0_16_,auVar81);
                  auVar88 = ZEXT1664(auVar81);
                } while (lVar55 < (longlong)uVar50);
              }
              lVar49 = lVar49 + 1;
              lVar32 = lVar32 + lVar30;
              lVar44 = lVar44 + param_2;
              lVar58 = lVar58 + 1 + param_7;
            } while (lVar49 < param_8);
          }
          lVar57 = lVar57 + 4;
          *(int *)*pauVar59 = auVar88._0_4_;
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 4);
        }
        while (lVar56 < (longlong)uVar31) {
          lVar49 = 0;
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          auVar81 = (undefined1  [16])0x0;
          lVar58 = 0;
          lVar32 = 0;
          lVar44 = 0;
          if (0 < param_8) {
            do {
              uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
              lVar55 = 0;
              if (uVar50 != 0) {
                do {
                  lVar39 = lVar55 * 2;
                  lVar55 = lVar55 + 1;
                  auVar81 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               ((longlong)
                                                (int)((uint)*(ushort *)
                                                             (param_9 + lVar32 + 2 + lVar39) *
                                                     param_11) + lVar57 + lVar44),0);
                  auVar81 = vpmaxub_avx(auVar88._0_16_,auVar81);
                  auVar88 = ZEXT1664(auVar81);
                } while (lVar55 < (longlong)uVar50);
              }
              auVar81 = auVar88._0_16_;
              lVar49 = lVar49 + 1;
              lVar32 = lVar32 + lVar30;
              lVar44 = lVar44 + param_2;
              lVar58 = lVar58 + 1 + param_7;
            } while (lVar49 < param_8);
          }
          lVar56 = lVar56 + 2;
          lVar57 = lVar57 + 2;
          vpextrw_avx(auVar81,0);
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 2);
        }
        for (; lVar56 < (longlong)param_5; lVar56 = lVar56 + 1) {
          lVar49 = 0;
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          lVar58 = 0;
          lVar32 = 0;
          lVar44 = 0;
          if (0 < param_8) {
            do {
              uVar50 = (ulonglong)*(ushort *)(param_9 + lVar58 * 2);
              lVar55 = 0;
              if (uVar50 != 0) {
                do {
                  lVar39 = lVar55 * 2;
                  lVar55 = lVar55 + 1;
                  auVar81 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)((longlong)
                                                        (int)((uint)*(ushort *)
                                                                     (param_9 + lVar44 + 2 + lVar39)
                                                             * param_11) + lVar57 + lVar32),0);
                  auVar81 = vpmaxub_avx(auVar88._0_16_,auVar81);
                  auVar88 = ZEXT1664(auVar81);
                } while (lVar55 < (longlong)uVar50);
              }
              lVar49 = lVar49 + 1;
              lVar32 = lVar32 + param_2;
              lVar44 = lVar44 + lVar30;
              lVar58 = lVar58 + 1 + param_7;
            } while (lVar49 < param_8);
          }
          lVar57 = lVar57 + 1;
          (*pauVar59)[0] = auVar88[0];
          pauVar59 = (undefined1 (*) [32])(*pauVar59 + 1);
        }
        lVar40 = lVar40 + 1;
        lVar45 = lVar45 + param_2;
        lVar33 = lVar33 + param_4;
      } while (lVar40 < param_6);
    }
  }
  else if (0 < param_6) {
    lVar58 = (longlong)param_11;
    lVar56 = param_11 * 2 + param_2;
    lVar30 = param_2 + lVar58;
    lVar57 = lVar58 + param_2 * 2;
    do {
      lVar44 = 0;
      lVar32 = param_1 + lVar45;
      pauVar59 = (undefined1 (*) [32])(param_3 + lVar33);
      if (0 < (longlong)uVar48) {
        do {
          lVar44 = lVar44 + 0x80;
          auVar87 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar32 + lVar58),
                                 *(undefined1 (*) [32])(lVar32 + param_2));
          auVar101 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar32 + 0x20 + lVar58),
                                  *(undefined1 (*) [32])(lVar32 + 0x20 + param_2));
          auVar114 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar32 + 0x40 + lVar58),
                                  *(undefined1 (*) [32])(lVar32 + 0x40 + param_2));
          auVar123 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar32 + 0x60 + lVar58),
                                  *(undefined1 (*) [32])(lVar32 + 0x60 + param_2));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar30));
          auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(lVar32 + 0x20 + lVar30));
          auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(lVar32 + 0x40 + lVar30));
          auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(lVar32 + 0x60 + lVar30));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar56));
          auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(lVar32 + 0x20 + lVar56));
          auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(lVar32 + 0x40 + lVar56));
          auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(lVar32 + 0x60 + lVar56));
          auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar57));
          auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(lVar32 + 0x20 + lVar57));
          auVar114 = vpmaxub_avx2(auVar114,*(undefined1 (*) [32])(lVar32 + 0x40 + lVar57));
          auVar123 = vpmaxub_avx2(auVar123,*(undefined1 (*) [32])(lVar32 + 0x60 + lVar57));
          lVar32 = lVar32 + 0x80;
          *pauVar59 = auVar87;
          pauVar59[1] = auVar101;
          pauVar59[2] = auVar114;
          pauVar59[3] = auVar123;
          pauVar59 = pauVar59 + 4;
        } while (lVar44 < (longlong)uVar48);
      }
      while (lVar44 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        lVar44 = lVar44 + 0x40;
        auVar87 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar32 + lVar58),
                               *(undefined1 (*) [32])(lVar32 + param_2));
        auVar101 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar32 + 0x20 + lVar58),
                                *(undefined1 (*) [32])(lVar32 + 0x20 + param_2));
        auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar30));
        auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(lVar32 + 0x20 + lVar30));
        auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar56));
        auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(lVar32 + 0x20 + lVar56));
        auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar57));
        auVar101 = vpmaxub_avx2(auVar101,*(undefined1 (*) [32])(lVar32 + 0x20 + lVar57));
        lVar32 = lVar32 + 0x40;
        *pauVar59 = auVar87;
        pauVar59[1] = auVar101;
        pauVar59 = pauVar59 + 2;
      }
      while (lVar44 < (longlong)uVar52) {
        lVar44 = lVar44 + 0x20;
        auVar87 = vpmaxub_avx2(*(undefined1 (*) [32])(lVar32 + lVar58),
                               *(undefined1 (*) [32])(lVar32 + param_2));
        auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar30));
        auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar56));
        auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])(lVar32 + lVar57));
        lVar32 = lVar32 + 0x20;
        *pauVar59 = auVar87;
        pauVar59 = pauVar59 + 1;
      }
      while (lVar44 < (longlong)uVar37) {
        auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(lVar32 + lVar58),
                              *(undefined1 (*) [16])(lVar32 + param_2));
        lVar44 = lVar44 + 0x10;
        auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + lVar30));
        auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + lVar56));
        auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + lVar57));
        lVar32 = lVar32 + 0x10;
        *(undefined1 (*) [16])*pauVar59 = auVar81;
        pauVar59 = (undefined1 (*) [32])(*pauVar59 + 0x10);
      }
      while (lVar44 < (longlong)uVar43) {
        lVar44 = lVar44 + 8;
        auVar116._8_8_ = 0;
        auVar116._0_8_ = *(ulonglong *)(lVar32 + lVar58);
        auVar125._8_8_ = 0;
        auVar125._0_8_ = *(ulonglong *)(lVar32 + param_2);
        auVar81 = vpmaxub_avx(auVar116,auVar125);
        auVar103._8_8_ = 0;
        auVar103._0_8_ = *(ulonglong *)(lVar32 + lVar30);
        auVar81 = vpmaxub_avx(auVar81,auVar103);
        auVar77._8_8_ = 0;
        auVar77._0_8_ = *(ulonglong *)(lVar32 + lVar56);
        auVar81 = vpmaxub_avx(auVar81,auVar77);
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)(lVar32 + lVar57);
        auVar81 = vpmaxub_avx(auVar81,auVar90);
        lVar32 = lVar32 + 8;
        *(longlong *)*pauVar59 = auVar81._0_8_;
        pauVar59 = (undefined1 (*) [32])(*pauVar59 + 8);
      }
      while (lVar44 < (longlong)uVar62) {
        auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar58),0);
        lVar44 = lVar44 + 4;
        auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + param_2),0);
        auVar83 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar30),0);
        auVar82 = vpmaxub_avx(auVar81,auVar82);
        auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar56),0);
        auVar83 = vpmaxub_avx(auVar82,auVar83);
        auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar57),0);
        auVar81 = vpmaxub_avx(auVar83,auVar81);
        auVar81 = vpmaxub_avx(auVar81,auVar82);
        lVar32 = lVar32 + 4;
        *(int *)*pauVar59 = auVar81._0_4_;
        pauVar59 = (undefined1 (*) [32])(*pauVar59 + 4);
      }
      while (lVar44 < (longlong)uVar31) {
        auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar58),0);
        lVar44 = lVar44 + 2;
        auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + param_2),0);
        auVar83 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar30),0);
        auVar82 = vpmaxub_avx(auVar81,auVar82);
        auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar56),0);
        auVar83 = vpmaxub_avx(auVar82,auVar83);
        auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar57),0);
        auVar81 = vpmaxub_avx(auVar83,auVar81);
        auVar81 = vpmaxub_avx(auVar81,auVar82);
        lVar32 = lVar32 + 2;
        vpextrw_avx(auVar81,0);
        pauVar59 = (undefined1 (*) [32])(*pauVar59 + 2);
      }
      while (lVar44 < (longlong)param_5) {
        auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar58),0);
        lVar44 = lVar44 + 1;
        auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + param_2),0);
        auVar83 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar30),0);
        auVar82 = vpmaxub_avx(auVar81,auVar82);
        auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar56),0);
        auVar83 = vpmaxub_avx(auVar82,auVar83);
        auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar57),0);
        auVar81 = vpmaxub_avx(auVar83,auVar81);
        auVar81 = vpmaxub_avx(auVar81,auVar82);
        lVar32 = lVar32 + 1;
        (*pauVar59)[0] = auVar81[0];
        pauVar59 = (undefined1 (*) [32])(*pauVar59 + 1);
      }
      lVar40 = lVar40 + 1;
      lVar45 = lVar45 + param_2;
      lVar33 = lVar33 + param_4;
    } while (lVar40 < param_6);
  }
  return;
}

