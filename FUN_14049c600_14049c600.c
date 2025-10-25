
void FUN_14049c600(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  ulonglong *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  ulonglong uVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
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
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [64];
  undefined1 auVar87 [16];
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
  undefined1 auVar99 [64];
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
  undefined1 auVar111 [64];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [64];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  longlong lStack_1f8;
  
  lVar68 = 0;
  lVar53 = 0;
  uVar61 = param_5 & 0xffffffffffffffc0;
  param_9 = param_7 * param_8 + param_9;
  uVar59 = param_5 & 0xfffffffffffffff0;
  uVar46 = param_5 & 0xfffffffffffffff8;
  uVar50 = param_5 & 0xfffffffffffffffc;
  uVar30 = param_5 & 0xfffffffffffffffe;
  lVar43 = 0;
  if ((param_10 & 0x500) == 0x500) {
    if (0 < param_6) {
      lVar60 = (longlong)param_11;
      lStack_1f8 = 0;
      lVar65 = (longlong)(param_11 * 2);
      lVar48 = lVar60 + param_2 * 2;
      lVar66 = (longlong)(param_11 * 4);
      lVar43 = param_2 + lVar60;
      lVar64 = (longlong)(param_11 * 3);
      lVar53 = param_2 + lVar65;
      lVar68 = lVar64 + param_2 * 2;
      lVar29 = param_2 + lVar66;
      lVar3 = param_2 * 3;
      lVar69 = param_11 * 6 + lVar3;
      lVar41 = param_2 + lVar64;
      lVar33 = lVar66 + param_2 * 2;
      lVar40 = lVar65 + lVar3;
      lVar31 = lVar66 + lVar3;
      lVar42 = lVar65 + param_2 * 4;
      lVar57 = lVar66 + param_2 * 4;
      lVar51 = lVar60 + lVar3;
      lVar62 = lVar64 + lVar3;
      lVar1 = lVar60 + param_2 * 4;
      lVar55 = lVar64 + param_2 * 4;
      lVar4 = lVar60 * 3;
      lVar38 = lVar65 + param_2 * 2;
      lVar67 = (longlong)(param_11 * 5);
      lVar5 = lVar60 * 5;
      lVar6 = lVar67 + param_2 * 4;
      lVar7 = lVar67 + lVar3;
      lVar8 = lVar67 + param_2 * 2;
      lVar35 = param_2 + lVar67;
      lVar63 = param_2 * 5;
      lVar65 = lVar65 + lVar63;
      lVar44 = lVar64 + lVar63;
      lVar54 = lVar64 + param_2 * 6;
      lVar66 = lVar66 + lVar63;
      lVar2 = lVar60 + lVar63;
      lVar67 = lVar67 + lVar63;
      lVar45 = 0;
      lVar56 = 0;
      do {
        lVar32 = param_1 + lVar56;
        pauVar34 = (undefined1 (*) [16])(param_3 + lVar45);
        lVar39 = 0;
        if (0 < (longlong)uVar61) {
          uVar36 = 0;
          lVar39 = lVar32 + lVar3;
          lVar9 = lVar32 + lVar60 + lVar3;
          lVar10 = lVar32 + lVar43;
          lVar11 = lVar32 + lVar3 + lVar60 * 6;
          lVar12 = lVar32 + lVar1;
          lVar13 = lVar32 + param_2 * 2 + lVar60 * 2;
          lVar14 = lVar32 + lVar48;
          lVar15 = lVar32 + lVar60 * 2 + param_2 * 4;
          lVar16 = lVar32 + lVar60 * 4 + param_2 * 4;
          lVar17 = lVar32 + param_2 + lVar60 * 2;
          lVar18 = lVar32 + param_2 * 2 + lVar60 * 4;
          lVar19 = lVar32 + lVar3 + lVar60 * 2;
          lVar20 = lVar32 + lVar3 + lVar60 * 4;
          lVar21 = lVar32 + lVar3 + lVar5;
          lVar22 = lVar32 + lVar4;
          lVar23 = lVar32 + param_2 + lVar60 * 4;
          lVar70 = lVar63 + lVar60 * 2 + lVar32;
          lVar24 = lVar32 + lVar5 + param_2 * 4;
          lVar71 = lVar63 + lVar4 + lVar32;
          lVar25 = lVar32 + param_2 + lVar5;
          lVar26 = lVar32 + lVar5 + param_2 * 2;
          lVar72 = lVar63 + lVar60 * 4 + lVar32;
          lVar27 = lVar32 + lVar4 + param_2 * 4;
          lVar73 = lVar5 + lVar63 + lVar32;
          lVar49 = lVar3 + lVar4 + lVar32;
          lVar52 = lVar4 + param_2 * 2 + lVar32;
          lVar58 = param_2 + lVar4 + lVar32;
          lVar74 = lVar4 + param_2 * 6 + lVar32;
          lVar37 = lVar2 + lVar32;
          uVar47 = uVar36;
          do {
            auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(uVar36 + lVar22),
                                  *(undefined1 (*) [16])(uVar36 + lVar10));
            uVar47 = uVar47 + 1;
            auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(uVar36 + 0x10 + lVar22),
                                  *(undefined1 (*) [16])(uVar36 + 0x10 + lVar10));
            auVar82 = vpmaxub_avx(*(undefined1 (*) [16])(uVar36 + 0x20 + lVar22),
                                  *(undefined1 (*) [16])(uVar36 + 0x20 + lVar10));
            auVar83 = vpmaxub_avx(*(undefined1 (*) [16])(uVar36 + 0x30 + lVar22),
                                  *(undefined1 (*) [16])(uVar36 + 0x30 + lVar10));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar17));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar17));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar17));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar17));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar58));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar58));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar58));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar58));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar23));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar23));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar23));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar23));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar25));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar25));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar25));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar25));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar14));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar14));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar14));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar14));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar13));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar13));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar13));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar13));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar52));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar52));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar52));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar52));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar18));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar18));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar18));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar18));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar26));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar26));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar26));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar26));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar39));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar39));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar39));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar39));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar9));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar9));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar9));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar9));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar19));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar19));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar19));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar19));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar49));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar49));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar49));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar49));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar20));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar20));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar20));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar20));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar21));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar21));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar21));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar21));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar11));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar11));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar11));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar11));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar12));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar12));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar12));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar12));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar15));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar15));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar15));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar15));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar27));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar27));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar27));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar27));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar16));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar16));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar16));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar16));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar24));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar24));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar24));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar24));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar37));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar37));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar37));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar37));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar70));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar70));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar70));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar70));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar71));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar71));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar71));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar71));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar72));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar72));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar72));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar72));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar73));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar73));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar73));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar73));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar36 + lVar74));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar36 + 0x10 + lVar74));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar36 + 0x20 + lVar74));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar36 + 0x30 + lVar74));
            *(undefined1 (*) [16])(*pauVar34 + uVar36) = auVar80;
            *(undefined1 (*) [16])(pauVar34[1] + uVar36) = auVar81;
            *(undefined1 (*) [16])(pauVar34[2] + uVar36) = auVar82;
            *(undefined1 (*) [16])(pauVar34[3] + uVar36) = auVar83;
            uVar36 = uVar36 + 0x40;
          } while (uVar47 < uVar61 + 0x3f >> 6);
          pauVar34 = pauVar34 + uVar47 * 4;
          lVar32 = lVar32 + uVar47 * 0x40;
          lVar39 = (((ulonglong)((longlong)(uVar61 + 0x3f) >> 5) >> 0x3a) + 0x7f + uVar61 &
                   0xffffffffffffffc0) - 0x40;
        }
        while (lVar39 < (longlong)(param_5 & 0xffffffffffffffe0)) {
          auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(lVar32 + lVar64),
                                *(undefined1 (*) [16])(lVar32 + lVar43));
          auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(lVar32 + 0x10 + lVar64),
                                *(undefined1 (*) [16])(lVar32 + 0x10 + lVar43));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar53));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar53));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar41));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar41));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar29));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar29));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar35));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar35));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar48));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar48));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar38));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar38));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar68));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar68));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar33));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar33));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar8));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar8));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar3));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar3));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar51));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar51));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar40));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar40));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar62));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar62));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar31));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar31));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar7));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar7));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar69));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar69));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar1));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar1));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar42));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar42));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar55));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar55));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar57));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar57));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar6));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar6));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar2));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar2));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar65));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar65));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar44));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar44));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar66));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar66));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar67));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar67));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar54));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar32 + 0x10 + lVar54));
          lVar32 = lVar32 + 0x20;
          *pauVar34 = auVar80;
          pauVar34[1] = auVar81;
          pauVar34 = pauVar34 + 2;
          lVar39 = lVar39 + 0x20;
        }
        while (lVar39 < (longlong)uVar59) {
          lVar39 = lVar39 + 0x10;
          auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(lVar32 + lVar64),
                                *(undefined1 (*) [16])(lVar32 + lVar43));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar53));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar41));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar29));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar35));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar48));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar38));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar68));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar33));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar8));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar3));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar51));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar40));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar62));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar31));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar7));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar69));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar1));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar42));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar55));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar57));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar6));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar2));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar65));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar44));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar66));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar67));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar32 + lVar54));
          lVar32 = lVar32 + 0x10;
          *pauVar34 = auVar80;
          pauVar34 = pauVar34 + 1;
        }
        while (lVar39 < (longlong)uVar46) {
          lVar39 = lVar39 + 8;
          auVar80._8_8_ = 0;
          auVar80._0_8_ = *(ulonglong *)(lVar32 + lVar43);
          auVar92._8_8_ = 0;
          auVar92._0_8_ = *(ulonglong *)(lVar32 + lVar64);
          auVar80 = vpmaxub_avx(auVar92,auVar80);
          auVar114._8_8_ = 0;
          auVar114._0_8_ = *(ulonglong *)(lVar32 + lVar53);
          auVar80 = vpmaxub_avx(auVar80,auVar114);
          auVar104._8_8_ = 0;
          auVar104._0_8_ = *(ulonglong *)(lVar32 + lVar41);
          auVar80 = vpmaxub_avx(auVar80,auVar104);
          auVar124._8_8_ = 0;
          auVar124._0_8_ = *(ulonglong *)(lVar32 + lVar29);
          auVar80 = vpmaxub_avx(auVar80,auVar124);
          auVar81._8_8_ = 0;
          auVar81._0_8_ = *(ulonglong *)(lVar32 + lVar35);
          auVar80 = vpmaxub_avx(auVar80,auVar81);
          auVar93._8_8_ = 0;
          auVar93._0_8_ = *(ulonglong *)(lVar32 + lVar48);
          auVar80 = vpmaxub_avx(auVar80,auVar93);
          auVar105._8_8_ = 0;
          auVar105._0_8_ = *(ulonglong *)(lVar32 + lVar38);
          auVar80 = vpmaxub_avx(auVar80,auVar105);
          auVar115._8_8_ = 0;
          auVar115._0_8_ = *(ulonglong *)(lVar32 + lVar68);
          auVar80 = vpmaxub_avx(auVar80,auVar115);
          auVar82._8_8_ = 0;
          auVar82._0_8_ = *(ulonglong *)(lVar32 + lVar33);
          auVar80 = vpmaxub_avx(auVar80,auVar82);
          auVar94._8_8_ = 0;
          auVar94._0_8_ = *(ulonglong *)(lVar32 + lVar8);
          auVar80 = vpmaxub_avx(auVar80,auVar94);
          auVar106._8_8_ = 0;
          auVar106._0_8_ = *(ulonglong *)(lVar32 + lVar3);
          auVar80 = vpmaxub_avx(auVar80,auVar106);
          auVar116._8_8_ = 0;
          auVar116._0_8_ = *(ulonglong *)(lVar32 + lVar51);
          auVar80 = vpmaxub_avx(auVar80,auVar116);
          auVar125._8_8_ = 0;
          auVar125._0_8_ = *(ulonglong *)(lVar32 + lVar40);
          auVar80 = vpmaxub_avx(auVar80,auVar125);
          auVar83._8_8_ = 0;
          auVar83._0_8_ = *(ulonglong *)(lVar32 + lVar62);
          auVar80 = vpmaxub_avx(auVar80,auVar83);
          auVar107._8_8_ = 0;
          auVar107._0_8_ = *(ulonglong *)(lVar32 + lVar31);
          auVar80 = vpmaxub_avx(auVar80,auVar107);
          auVar95._8_8_ = 0;
          auVar95._0_8_ = *(ulonglong *)(lVar32 + lVar7);
          auVar80 = vpmaxub_avx(auVar80,auVar95);
          auVar126._8_8_ = 0;
          auVar126._0_8_ = *(ulonglong *)(lVar32 + lVar69);
          auVar80 = vpmaxub_avx(auVar80,auVar126);
          auVar84._8_8_ = 0;
          auVar84._0_8_ = *(ulonglong *)(lVar32 + lVar1);
          auVar80 = vpmaxub_avx(auVar80,auVar84);
          auVar108._8_8_ = 0;
          auVar108._0_8_ = *(ulonglong *)(lVar32 + lVar42);
          auVar80 = vpmaxub_avx(auVar80,auVar108);
          auVar96._8_8_ = 0;
          auVar96._0_8_ = *(ulonglong *)(lVar32 + lVar55);
          auVar80 = vpmaxub_avx(auVar80,auVar96);
          auVar117._8_8_ = 0;
          auVar117._0_8_ = *(ulonglong *)(lVar32 + lVar57);
          auVar80 = vpmaxub_avx(auVar80,auVar117);
          auVar127._8_8_ = 0;
          auVar127._0_8_ = *(ulonglong *)(lVar32 + lVar6);
          auVar80 = vpmaxub_avx(auVar80,auVar127);
          auVar109._8_8_ = 0;
          auVar109._0_8_ = *(ulonglong *)(lVar32 + lVar2);
          auVar80 = vpmaxub_avx(auVar80,auVar109);
          auVar97._8_8_ = 0;
          auVar97._0_8_ = *(ulonglong *)(lVar32 + lVar65);
          auVar80 = vpmaxub_avx(auVar80,auVar97);
          auVar85._8_8_ = 0;
          auVar85._0_8_ = *(ulonglong *)(lVar32 + lVar44);
          auVar80 = vpmaxub_avx(auVar80,auVar85);
          auVar118._8_8_ = 0;
          auVar118._0_8_ = *(ulonglong *)(lVar32 + lVar66);
          auVar80 = vpmaxub_avx(auVar80,auVar118);
          auVar110._8_8_ = 0;
          auVar110._0_8_ = *(ulonglong *)(lVar32 + lVar67);
          auVar80 = vpmaxub_avx(auVar80,auVar110);
          puVar28 = (ulonglong *)(lVar32 + lVar54);
          lVar32 = lVar32 + 8;
          auVar98._8_8_ = 0;
          auVar98._0_8_ = *puVar28;
          auVar80 = vpmaxub_avx(auVar80,auVar98);
          *(longlong *)*pauVar34 = auVar80._0_8_;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
        }
        while (lVar39 < (longlong)uVar50) {
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar64),0);
          lVar39 = lVar39 + 4;
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar43),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar53),0);
          auVar80 = vpmaxub_avx(auVar80,auVar81);
          auVar81 = vpmaxub_avx(auVar80,auVar82);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar41),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar29),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar48),0);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar35),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar68),0);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar38),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar33),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar8),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar3),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar51),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar40),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar62),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar31),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar69),0);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar7),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar1),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar42),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar55),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar2),0);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar6),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar65),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar44),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar66),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar67),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar32 + lVar54),0);
          lVar32 = lVar32 + 4;
          auVar80 = vpmaxub_avx(auVar81,auVar80);
          *(int *)*pauVar34 = auVar80._0_4_;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 4);
        }
        while (lVar39 < (longlong)uVar30) {
          lVar39 = lVar39 + 2;
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar64),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar43),0);
          auVar81 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar53),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar41),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar29),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar48),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar35),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar68),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar38),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar33),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar8),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar3),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar51),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar40),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar62),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar31),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar69),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar7),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar1),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar42),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar55),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar2),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar6),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar65),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar44),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar66),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar67),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar32 + lVar54),0);
          lVar32 = lVar32 + 2;
          auVar80 = vpmaxub_avx(auVar81,auVar80);
          vpextrw_avx(auVar80,0);
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 2);
        }
        while (lVar39 < (longlong)param_5) {
          lVar39 = lVar39 + 1;
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar64),0);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar43),0);
          auVar81 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar53),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar41),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar35),0);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar29),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar48),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar38),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar68),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar33),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar8),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar3),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar51),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar40),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar62),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar31),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar69),0);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar7),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar1),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar42),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar55),0);
          auVar81 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar2),0);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar6),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar65),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar44),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar66),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar67),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar32 + lVar54),0);
          auVar80 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpmaxub_avx(auVar80,auVar81);
          lVar32 = lVar32 + 1;
          (*pauVar34)[0] = auVar80[0];
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 1);
        }
        lStack_1f8 = lStack_1f8 + 1;
        lVar56 = lVar56 + param_2;
        lVar45 = lVar45 + param_4;
      } while (lStack_1f8 < param_6);
    }
  }
  else if ((param_10 & 0x300) == 0x300) {
    if (0 < param_6) {
      lVar35 = (longlong)param_11;
      lVar44 = (longlong)(param_11 * 2);
      lVar43 = param_2 + lVar35;
      lVar53 = lVar35 + param_2 * 2;
      lVar68 = param_2 + lVar44;
      lVar29 = lVar44 + param_2 * 2;
      lVar54 = (longlong)(param_11 * 3);
      lVar8 = param_2 * 2;
      lVar57 = (longlong)(param_11 * 4) + param_2 * 2;
      lVar41 = lVar54 + param_2 * 2;
      lVar33 = param_2 + lVar54;
      lVar6 = param_2 * 3;
      lVar54 = lVar54 + lVar6;
      lVar40 = lVar35 + lVar6;
      lVar31 = lVar44 + lVar6;
      lVar42 = lVar44 + param_2 * 4;
      lVar7 = lVar35 * 3;
      lVar62 = 0;
      lVar55 = 0;
      lVar38 = 0;
      do {
        lVar48 = param_1 + lVar55;
        pauVar34 = (undefined1 (*) [16])(param_3 + lVar62);
        lVar51 = 0;
        if (0 < (longlong)uVar61) {
          uVar36 = 0;
          lVar51 = lVar48 + param_2 * 2;
          lVar1 = lVar48 + lVar43;
          lVar2 = lVar48 + lVar53;
          lVar45 = lVar48 + lVar35 + lVar6;
          lVar56 = lVar48 + lVar35 * 2 + param_2 * 4;
          lVar3 = lVar48 + lVar6 + lVar35 * 2;
          lVar4 = lVar48 + lVar8 + lVar35 * 2;
          lVar63 = param_2 + lVar35 * 2 + lVar48;
          lVar5 = lVar48 + lVar35 * 2;
          lVar64 = lVar8 + lVar35 * 4 + lVar48;
          lVar65 = lVar6 + lVar7 + lVar48;
          lVar66 = lVar7 + param_2 * 2 + lVar48;
          lVar67 = lVar7 + param_2 + lVar48;
          uVar47 = uVar36;
          do {
            auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(uVar47 + lVar5),
                                  *(undefined1 (*) [16])(uVar47 + lVar1));
            uVar36 = uVar36 + 1;
            auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(uVar47 + 0x10 + lVar5),
                                  *(undefined1 (*) [16])(uVar47 + 0x10 + lVar1));
            auVar82 = vpmaxub_avx(*(undefined1 (*) [16])(uVar47 + 0x20 + lVar5),
                                  *(undefined1 (*) [16])(uVar47 + 0x20 + lVar1));
            auVar83 = vpmaxub_avx(*(undefined1 (*) [16])(uVar47 + 0x30 + lVar5),
                                  *(undefined1 (*) [16])(uVar47 + 0x30 + lVar1));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar63));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar63));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar63));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar63));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar67));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar67));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar67));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar67));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar51));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar51));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar51));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar51));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar2));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar2));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar2));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar2));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar4));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar4));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar4));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar4));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar66));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar66));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar66));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar66));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar64));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar64));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar64));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar64));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar45));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar45));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar45));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar45));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar3));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar3));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar3));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar3));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar65));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar65));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar65));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar65));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(uVar47 + lVar56));
            auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(uVar47 + 0x10 + lVar56));
            auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(uVar47 + 0x20 + lVar56));
            auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(uVar47 + 0x30 + lVar56));
            *(undefined1 (*) [16])(*pauVar34 + uVar47) = auVar80;
            *(undefined1 (*) [16])(pauVar34[1] + uVar47) = auVar81;
            *(undefined1 (*) [16])(pauVar34[2] + uVar47) = auVar82;
            *(undefined1 (*) [16])(pauVar34[3] + uVar47) = auVar83;
            uVar47 = uVar47 + 0x40;
          } while (uVar36 < uVar61 + 0x3f >> 6);
          pauVar34 = pauVar34 + uVar36 * 4;
          lVar48 = lVar48 + uVar36 * 0x40;
          lVar51 = (((ulonglong)((longlong)(uVar61 + 0x3f) >> 5) >> 0x3a) + 0x7f + uVar61 &
                   0xffffffffffffffc0) - 0x40;
        }
        while (lVar51 < (longlong)(param_5 & 0xffffffffffffffe0)) {
          auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(lVar48 + lVar44),
                                *(undefined1 (*) [16])(lVar48 + lVar43));
          auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(lVar48 + 0x10 + lVar44),
                                *(undefined1 (*) [16])(lVar48 + 0x10 + lVar43));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar68));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar68));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar33));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar33));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar8));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar8));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar53));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar53));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar29));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar29));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar41));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar41));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar57));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar57));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar40));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar40));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar31));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar31));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar54));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar54));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar42));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar48 + 0x10 + lVar42));
          lVar48 = lVar48 + 0x20;
          *pauVar34 = auVar80;
          pauVar34[1] = auVar81;
          pauVar34 = pauVar34 + 2;
          lVar51 = lVar51 + 0x20;
        }
        while (lVar51 < (longlong)uVar59) {
          lVar51 = lVar51 + 0x10;
          auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(lVar48 + lVar44),
                                *(undefined1 (*) [16])(lVar48 + lVar43));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar68));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar33));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar8));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar53));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar29));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar41));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar57));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar40));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar31));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar54));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar48 + lVar42));
          lVar48 = lVar48 + 0x10;
          *pauVar34 = auVar80;
          pauVar34 = pauVar34 + 1;
        }
        while (lVar51 < (longlong)uVar46) {
          lVar51 = lVar51 + 8;
          auVar77._8_8_ = 0;
          auVar77._0_8_ = *(ulonglong *)(lVar48 + lVar44);
          auVar121._8_8_ = 0;
          auVar121._0_8_ = *(ulonglong *)(lVar48 + lVar43);
          auVar80 = vpmaxub_avx(auVar77,auVar121);
          auVar89._8_8_ = 0;
          auVar89._0_8_ = *(ulonglong *)(lVar48 + lVar68);
          auVar80 = vpmaxub_avx(auVar80,auVar89);
          auVar101._8_8_ = 0;
          auVar101._0_8_ = *(ulonglong *)(lVar48 + lVar33);
          auVar80 = vpmaxub_avx(auVar80,auVar101);
          auVar113._8_8_ = 0;
          auVar113._0_8_ = *(ulonglong *)(lVar48 + lVar8);
          auVar80 = vpmaxub_avx(auVar80,auVar113);
          auVar122._8_8_ = 0;
          auVar122._0_8_ = *(ulonglong *)(lVar48 + lVar53);
          auVar80 = vpmaxub_avx(auVar80,auVar122);
          auVar78._8_8_ = 0;
          auVar78._0_8_ = *(ulonglong *)(lVar48 + lVar29);
          auVar80 = vpmaxub_avx(auVar80,auVar78);
          auVar102._8_8_ = 0;
          auVar102._0_8_ = *(ulonglong *)(lVar48 + lVar41);
          auVar80 = vpmaxub_avx(auVar80,auVar102);
          auVar90._8_8_ = 0;
          auVar90._0_8_ = *(ulonglong *)(lVar48 + lVar57);
          auVar80 = vpmaxub_avx(auVar80,auVar90);
          auVar123._8_8_ = 0;
          auVar123._0_8_ = *(ulonglong *)(lVar48 + lVar40);
          auVar80 = vpmaxub_avx(auVar80,auVar123);
          auVar79._8_8_ = 0;
          auVar79._0_8_ = *(ulonglong *)(lVar48 + lVar31);
          auVar80 = vpmaxub_avx(auVar80,auVar79);
          auVar103._8_8_ = 0;
          auVar103._0_8_ = *(ulonglong *)(lVar48 + lVar54);
          auVar80 = vpmaxub_avx(auVar80,auVar103);
          auVar91._8_8_ = 0;
          auVar91._0_8_ = *(ulonglong *)(lVar48 + lVar42);
          auVar80 = vpmaxub_avx(auVar80,auVar91);
          lVar48 = lVar48 + 8;
          *(longlong *)*pauVar34 = auVar80._0_8_;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
        }
        while (lVar51 < (longlong)uVar50) {
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar44),0);
          lVar51 = lVar51 + 4;
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar43),0);
          auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar68),0);
          auVar81 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar33),0);
          auVar82 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar8),0);
          auVar80 = vpmaxub_avx(auVar82,auVar80);
          auVar82 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar53),0);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar29),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar41),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar40),0);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar31),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar54),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar48 + lVar42),0);
          auVar80 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpmaxub_avx(auVar80,auVar81);
          lVar48 = lVar48 + 4;
          *(int *)*pauVar34 = auVar80._0_4_;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 4);
        }
        while (lVar51 < (longlong)uVar30) {
          lVar51 = lVar51 + 2;
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar44),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar43),0);
          auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar68),0);
          auVar81 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar33),0);
          auVar82 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar8),0);
          auVar80 = vpmaxub_avx(auVar82,auVar80);
          auVar82 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar29),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar53),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar41),0);
          auVar80 = vpmaxub_avx(auVar82,auVar80);
          auVar82 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar40),0);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar57),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar31),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar54),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar48 + lVar42),0);
          auVar80 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpmaxub_avx(auVar80,auVar81);
          lVar48 = lVar48 + 2;
          vpextrw_avx(auVar80,0);
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 2);
        }
        while (lVar51 < (longlong)param_5) {
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar44),0);
          lVar51 = lVar51 + 1;
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar43),0);
          auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar68),0);
          auVar81 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar33),0);
          auVar82 = vpmaxub_avx(auVar81,auVar82);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar8),0);
          auVar80 = vpmaxub_avx(auVar82,auVar80);
          auVar82 = vpmaxub_avx(auVar80,auVar81);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar29),0);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar53),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar82 = vpmaxub_avx(auVar81,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar57),0);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar41),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar40),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar31),0);
          auVar82 = vpmaxub_avx(auVar82,auVar81);
          auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar54),0);
          auVar82 = vpmaxub_avx(auVar82,auVar80);
          auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar48 + lVar42),0);
          auVar81 = vpmaxub_avx(auVar82,auVar81);
          auVar80 = vpmaxub_avx(auVar81,auVar80);
          lVar48 = lVar48 + 1;
          (*pauVar34)[0] = auVar80[0];
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 1);
        }
        lVar38 = lVar38 + 1;
        lVar55 = lVar55 + param_2;
        lVar62 = lVar62 + param_4;
      } while (lVar38 < param_6);
    }
  }
  else if ((param_10 & 0x100) == 0) {
    if (0 < param_6) {
      lVar29 = param_7 * 2 + 2;
      do {
        lVar33 = 0;
        lVar41 = param_1 + lVar53;
        pauVar34 = (undefined1 (*) [16])(param_3 + lVar43);
        if (0 < (longlong)uVar61) {
          do {
            auVar119 = ZEXT1664((undefined1  [16])0x0);
            auVar83 = (undefined1  [16])0x0;
            lVar57 = 0;
            auVar111 = ZEXT1664((undefined1  [16])0x0);
            auVar82 = (undefined1  [16])0x0;
            lVar40 = 0;
            auVar99 = ZEXT1664((undefined1  [16])0x0);
            auVar81 = (undefined1  [16])0x0;
            lVar31 = 0;
            auVar86 = ZEXT1664((undefined1  [16])0x0);
            auVar80 = (undefined1  [16])0x0;
            lVar42 = 0;
            if (0 < param_8) {
              do {
                uVar47 = (ulonglong)*(ushort *)(param_9 + lVar40 * 2);
                lVar62 = 0;
                if (uVar47 != 0) {
                  lVar55 = lVar41 + lVar42;
                  do {
                    lVar38 = lVar62 * 2;
                    lVar62 = lVar62 + 1;
                    lVar38 = (longlong)
                             (int)((uint)*(ushort *)(param_9 + lVar31 + 2 + lVar38) * param_11);
                    auVar80 = vpmaxub_avx(auVar119._0_16_,*(undefined1 (*) [16])(lVar38 + lVar55));
                    auVar119 = ZEXT1664(auVar80);
                    auVar80 = vpmaxub_avx(auVar111._0_16_,
                                          *(undefined1 (*) [16])(lVar38 + 0x10 + lVar55));
                    auVar111 = ZEXT1664(auVar80);
                    auVar80 = vpmaxub_avx(auVar99._0_16_,
                                          *(undefined1 (*) [16])(lVar38 + 0x20 + lVar55));
                    auVar99 = ZEXT1664(auVar80);
                    auVar80 = vpmaxub_avx(auVar86._0_16_,
                                          *(undefined1 (*) [16])(lVar38 + 0x30 + lVar55));
                    auVar86 = ZEXT1664(auVar80);
                  } while (lVar62 < (longlong)uVar47);
                }
                auVar80 = auVar86._0_16_;
                auVar81 = auVar99._0_16_;
                auVar82 = auVar111._0_16_;
                auVar83 = auVar119._0_16_;
                lVar57 = lVar57 + 1;
                lVar31 = lVar31 + lVar29;
                lVar42 = lVar42 + param_2;
                lVar40 = lVar40 + 1 + param_7;
              } while (lVar57 < param_8);
            }
            lVar33 = lVar33 + 0x40;
            lVar41 = lVar41 + 0x40;
            *pauVar34 = auVar83;
            pauVar34[1] = auVar82;
            pauVar34[2] = auVar81;
            pauVar34[3] = auVar80;
            pauVar34 = pauVar34 + 4;
          } while (lVar33 < (longlong)uVar61);
        }
        for (; lVar33 < (longlong)uVar59; lVar33 = lVar33 + 0x10) {
          lVar57 = 0;
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          auVar80 = (undefined1  [16])0x0;
          lVar40 = 0;
          lVar31 = 0;
          lVar42 = 0;
          if (0 < param_8) {
            do {
              uVar47 = (ulonglong)*(ushort *)(param_9 + lVar40 * 2);
              lVar62 = 0;
              if (uVar47 != 0) {
                do {
                  lVar55 = lVar62 * 2;
                  lVar62 = lVar62 + 1;
                  auVar80 = vpmaxub_avx(auVar86._0_16_,
                                        *(undefined1 (*) [16])
                                         ((longlong)
                                          (int)((uint)*(ushort *)(param_9 + lVar31 + 2 + lVar55) *
                                               param_11) + lVar41 + lVar42));
                  auVar86 = ZEXT1664(auVar80);
                } while (lVar62 < (longlong)uVar47);
              }
              auVar80 = auVar86._0_16_;
              lVar57 = lVar57 + 1;
              lVar31 = lVar31 + lVar29;
              lVar42 = lVar42 + param_2;
              lVar40 = lVar40 + 1 + param_7;
            } while (lVar57 < param_8);
          }
          lVar41 = lVar41 + 0x10;
          *pauVar34 = auVar80;
          pauVar34 = pauVar34 + 1;
        }
        for (; lVar33 < (longlong)uVar46; lVar33 = lVar33 + 8) {
          lVar57 = 0;
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          uVar75 = 0;
          lVar40 = 0;
          lVar31 = 0;
          lVar42 = 0;
          if (0 < param_8) {
            do {
              uVar47 = (ulonglong)*(ushort *)(param_9 + lVar40 * 2);
              lVar62 = 0;
              if (uVar47 != 0) {
                do {
                  lVar55 = lVar62 * 2;
                  lVar62 = lVar62 + 1;
                  auVar87._8_8_ = 0;
                  auVar87._0_8_ =
                       *(ulonglong *)
                        ((longlong)
                         (int)((uint)*(ushort *)(param_9 + lVar31 + 2 + lVar55) * param_11) +
                        lVar41 + lVar42);
                  auVar80 = vpmaxub_avx(auVar86._0_16_,auVar87);
                  auVar86 = ZEXT1664(auVar80);
                } while (lVar62 < (longlong)uVar47);
              }
              uVar75 = auVar86._0_8_;
              lVar57 = lVar57 + 1;
              lVar31 = lVar31 + lVar29;
              lVar42 = lVar42 + param_2;
              lVar40 = lVar40 + 1 + param_7;
            } while (lVar57 < param_8);
          }
          lVar41 = lVar41 + 8;
          *(undefined8 *)*pauVar34 = uVar75;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
        }
        for (; lVar33 < (longlong)uVar50; lVar33 = lVar33 + 4) {
          lVar57 = 0;
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          lVar40 = 0;
          lVar31 = 0;
          lVar42 = 0;
          if (0 < param_8) {
            do {
              uVar47 = (ulonglong)*(ushort *)(param_9 + lVar40 * 2);
              lVar62 = 0;
              if (uVar47 != 0) {
                do {
                  lVar55 = lVar62 * 2;
                  lVar62 = lVar62 + 1;
                  auVar80 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         ((longlong)
                                          (int)((uint)*(ushort *)(param_9 + lVar31 + 2 + lVar55) *
                                               param_11) + lVar41 + lVar42),0);
                  auVar80 = vpmaxub_avx(auVar86._0_16_,auVar80);
                  auVar86 = ZEXT1664(auVar80);
                } while (lVar62 < (longlong)uVar47);
              }
              lVar57 = lVar57 + 1;
              lVar31 = lVar31 + lVar29;
              lVar42 = lVar42 + param_2;
              lVar40 = lVar40 + 1 + param_7;
            } while (lVar57 < param_8);
          }
          lVar41 = lVar41 + 4;
          *(int *)*pauVar34 = auVar86._0_4_;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 4);
        }
        while (lVar33 < (longlong)uVar30) {
          lVar57 = 0;
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          auVar80 = (undefined1  [16])0x0;
          lVar40 = 0;
          lVar31 = 0;
          lVar42 = 0;
          if (0 < param_8) {
            do {
              uVar47 = (ulonglong)*(ushort *)(param_9 + lVar40 * 2);
              lVar62 = 0;
              if (uVar47 != 0) {
                do {
                  lVar55 = lVar62 * 2;
                  lVar62 = lVar62 + 1;
                  auVar80 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               ((longlong)
                                                (int)((uint)*(ushort *)
                                                             (param_9 + lVar31 + 2 + lVar55) *
                                                     param_11) + lVar41 + lVar42),0);
                  auVar80 = vpmaxub_avx(auVar86._0_16_,auVar80);
                  auVar86 = ZEXT1664(auVar80);
                } while (lVar62 < (longlong)uVar47);
              }
              auVar80 = auVar86._0_16_;
              lVar57 = lVar57 + 1;
              lVar31 = lVar31 + lVar29;
              lVar42 = lVar42 + param_2;
              lVar40 = lVar40 + 1 + param_7;
            } while (lVar57 < param_8);
          }
          lVar33 = lVar33 + 2;
          lVar41 = lVar41 + 2;
          vpextrw_avx(auVar80,0);
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 2);
        }
        for (; lVar33 < (longlong)param_5; lVar33 = lVar33 + 1) {
          lVar57 = 0;
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          lVar40 = 0;
          lVar31 = 0;
          lVar42 = 0;
          if (0 < param_8) {
            do {
              uVar47 = (ulonglong)*(ushort *)(param_9 + lVar40 * 2);
              lVar62 = 0;
              if (uVar47 != 0) {
                do {
                  lVar55 = lVar62 * 2;
                  lVar62 = lVar62 + 1;
                  auVar80 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)((longlong)
                                                        (int)((uint)*(ushort *)
                                                                     (param_9 + lVar42 + 2 + lVar55)
                                                             * param_11) + lVar41 + lVar31),0);
                  auVar80 = vpmaxub_avx(auVar86._0_16_,auVar80);
                  auVar86 = ZEXT1664(auVar80);
                } while (lVar62 < (longlong)uVar47);
              }
              lVar57 = lVar57 + 1;
              lVar31 = lVar31 + param_2;
              lVar42 = lVar42 + lVar29;
              lVar40 = lVar40 + 1 + param_7;
            } while (lVar57 < param_8);
          }
          lVar41 = lVar41 + 1;
          (*pauVar34)[0] = auVar86[0];
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 1);
        }
        lVar68 = lVar68 + 1;
        lVar53 = lVar53 + param_2;
        lVar43 = lVar43 + param_4;
      } while (lVar68 < param_6);
    }
  }
  else if (0 < param_6) {
    lVar40 = (longlong)param_11;
    lVar33 = param_11 * 2 + param_2;
    lVar29 = param_2 + lVar40;
    lVar41 = lVar40 + param_2 * 2;
    do {
      lVar42 = 0;
      lVar31 = param_1 + lVar53;
      pauVar34 = (undefined1 (*) [16])(param_3 + lVar43);
      if (0 < (longlong)uVar61) {
        do {
          auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(lVar31 + lVar40),
                                *(undefined1 (*) [16])(lVar31 + param_2));
          lVar42 = lVar42 + 0x40;
          auVar81 = vpmaxub_avx(*(undefined1 (*) [16])(lVar31 + 0x10 + lVar40),
                                *(undefined1 (*) [16])(lVar31 + 0x10 + param_2));
          auVar82 = vpmaxub_avx(*(undefined1 (*) [16])(lVar31 + 0x20 + lVar40),
                                *(undefined1 (*) [16])(lVar31 + 0x20 + param_2));
          auVar83 = vpmaxub_avx(*(undefined1 (*) [16])(lVar31 + 0x30 + lVar40),
                                *(undefined1 (*) [16])(lVar31 + 0x30 + param_2));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar31 + lVar29));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar31 + 0x10 + lVar29));
          auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(lVar31 + 0x20 + lVar29));
          auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(lVar31 + 0x30 + lVar29));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar31 + lVar33));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar31 + 0x10 + lVar33));
          auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(lVar31 + 0x20 + lVar33));
          auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(lVar31 + 0x30 + lVar33));
          auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar31 + lVar41));
          auVar81 = vpmaxub_avx(auVar81,*(undefined1 (*) [16])(lVar31 + 0x10 + lVar41));
          auVar82 = vpmaxub_avx(auVar82,*(undefined1 (*) [16])(lVar31 + 0x20 + lVar41));
          auVar83 = vpmaxub_avx(auVar83,*(undefined1 (*) [16])(lVar31 + 0x30 + lVar41));
          lVar31 = lVar31 + 0x40;
          *pauVar34 = auVar80;
          pauVar34[1] = auVar81;
          pauVar34[2] = auVar82;
          pauVar34[3] = auVar83;
          pauVar34 = pauVar34 + 4;
        } while (lVar42 < (longlong)uVar61);
      }
      while (lVar42 < (longlong)uVar59) {
        auVar80 = vpmaxub_avx(*(undefined1 (*) [16])(lVar31 + lVar40),
                              *(undefined1 (*) [16])(lVar31 + param_2));
        lVar42 = lVar42 + 0x10;
        auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar31 + lVar29));
        auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar31 + lVar33));
        auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar31 + lVar41));
        lVar31 = lVar31 + 0x10;
        *pauVar34 = auVar80;
        pauVar34 = pauVar34 + 1;
      }
      while (lVar42 < (longlong)uVar46) {
        lVar42 = lVar42 + 8;
        auVar112._8_8_ = 0;
        auVar112._0_8_ = *(ulonglong *)(lVar31 + lVar40);
        auVar120._8_8_ = 0;
        auVar120._0_8_ = *(ulonglong *)(lVar31 + param_2);
        auVar80 = vpmaxub_avx(auVar112,auVar120);
        auVar100._8_8_ = 0;
        auVar100._0_8_ = *(ulonglong *)(lVar31 + lVar29);
        auVar80 = vpmaxub_avx(auVar80,auVar100);
        auVar76._8_8_ = 0;
        auVar76._0_8_ = *(ulonglong *)(lVar31 + lVar33);
        auVar80 = vpmaxub_avx(auVar80,auVar76);
        auVar88._8_8_ = 0;
        auVar88._0_8_ = *(ulonglong *)(lVar31 + lVar41);
        auVar80 = vpmaxub_avx(auVar80,auVar88);
        lVar31 = lVar31 + 8;
        *(longlong *)*pauVar34 = auVar80._0_8_;
        pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
      }
      while (lVar42 < (longlong)uVar50) {
        auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar31 + lVar40),0);
        lVar42 = lVar42 + 4;
        auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar31 + param_2),0);
        auVar82 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar31 + lVar29),0);
        auVar81 = vpmaxub_avx(auVar80,auVar81);
        auVar80 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar31 + lVar33),0);
        auVar82 = vpmaxub_avx(auVar81,auVar82);
        auVar81 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar31 + lVar41),0);
        auVar80 = vpmaxub_avx(auVar82,auVar80);
        auVar80 = vpmaxub_avx(auVar80,auVar81);
        lVar31 = lVar31 + 4;
        *(int *)*pauVar34 = auVar80._0_4_;
        pauVar34 = (undefined1 (*) [16])(*pauVar34 + 4);
      }
      while (lVar42 < (longlong)uVar30) {
        auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar31 + lVar40),0);
        lVar42 = lVar42 + 2;
        auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar31 + param_2),0);
        auVar82 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar31 + lVar29),0);
        auVar81 = vpmaxub_avx(auVar80,auVar81);
        auVar80 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar31 + lVar33),0);
        auVar82 = vpmaxub_avx(auVar81,auVar82);
        auVar81 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(lVar31 + lVar41),0);
        auVar80 = vpmaxub_avx(auVar82,auVar80);
        auVar80 = vpmaxub_avx(auVar80,auVar81);
        lVar31 = lVar31 + 2;
        vpextrw_avx(auVar80,0);
        pauVar34 = (undefined1 (*) [16])(*pauVar34 + 2);
      }
      while (lVar42 < (longlong)param_5) {
        auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar31 + lVar40),0);
        lVar42 = lVar42 + 1;
        auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar31 + param_2),0);
        auVar82 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar31 + lVar29),0);
        auVar81 = vpmaxub_avx(auVar80,auVar81);
        auVar80 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar31 + lVar33),0);
        auVar82 = vpmaxub_avx(auVar81,auVar82);
        auVar81 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(lVar31 + lVar41),0);
        auVar80 = vpmaxub_avx(auVar82,auVar80);
        auVar80 = vpmaxub_avx(auVar80,auVar81);
        lVar31 = lVar31 + 1;
        (*pauVar34)[0] = auVar80[0];
        pauVar34 = (undefined1 (*) [16])(*pauVar34 + 1);
      }
      lVar68 = lVar68 + 1;
      lVar53 = lVar53 + param_2;
      lVar43 = lVar43 + param_4;
    } while (lVar68 < param_6);
  }
  return;
}

