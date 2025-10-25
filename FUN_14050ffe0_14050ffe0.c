
void FUN_14050ffe0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9,int param_10)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ushort uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  undefined1 (*pauVar69) [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [64];
  undefined1 auVar85 [32];
  undefined1 auVar87 [32];
  undefined8 unaff_XMM12_Qa;
  undefined1 auVar89 [32];
  undefined1 auVar91 [32];
  undefined1 auVar93 [32];
  undefined1 auVar95 [32];
  longlong lStack_6f8;
  longlong lStack_6f0;
  ulonglong uStack_490;
  undefined8 uStack_448;
  undefined8 uStack_438;
  undefined8 uStack_428;
  undefined1 (*pauStack_2b8) [32];
  undefined1 auVar72 [64];
  undefined1 auVar86 [64];
  undefined1 auVar88 [64];
  undefined1 auVar90 [64];
  undefined1 auVar92 [64];
  undefined1 auVar94 [64];
  undefined1 auVar96 [64];
  
  lVar36 = (param_7 * 3 + 2) * param_8;
  uVar22 = param_5 & 0xfffffffffffffffe;
  uVar17 = param_5 & 0xffffffffffffffc0;
  uVar40 = param_5 & 0xffffffffffffffe0;
  uVar27 = param_5 & 0xfffffffffffffff0;
  uVar48 = param_5 & 0xfffffffffffffff8;
  uVar61 = param_5 & 0xfffffffffffffffc;
  uVar38 = (ulonglong)*(ushort *)(param_9 + lVar36);
  lVar37 = 0;
  lVar30 = (longlong)param_10;
  uVar14 = *(ushort *)(param_9 + 2 + lVar36);
  uStack_490 = 0;
  uVar23 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar23) {
    lVar28 = lVar30 * (ulonglong)uVar14;
    lVar36 = param_2 + lVar28;
    lVar49 = param_2 * uVar38;
    lVar39 = (longlong)(int)(param_10 * (uint)uVar14);
    lVar16 = lVar28 + param_2 * 4;
    lVar59 = param_4 * 2;
    uVar18 = uVar17 + 0x3f >> 6;
    lVar24 = param_2 * -4 + param_1;
    lVar21 = param_4 * 3;
    lVar64 = lVar49 + param_2 * 4 + lVar24;
    lVar19 = lVar24 + param_2 * 5 + lVar28;
    lVar53 = lVar24 + param_2 * 4;
    lVar41 = param_2 * -3 + param_1 + lVar16;
    lVar58 = lVar28 + param_2 * 2;
    lVar42 = param_2 * 6 + lVar24 + lVar28;
    lVar65 = param_2 * -2 + param_1 + lVar16;
    lVar68 = param_2 * 3 + lVar28;
    lVar66 = (uVar38 + 1) * param_2;
    lVar54 = param_2 * 7 + lVar24 + lVar28;
    lVar55 = lVar66 + param_2 * 4 + lVar24;
    lVar43 = (param_1 - param_2) + lVar16;
    lVar56 = (uVar38 + 2) * param_2;
    lVar62 = (uVar38 + 3) * param_2;
    lVar44 = lVar56 + param_2 * 4 + lVar24;
    lVar25 = lVar24 + lVar62 + param_2 * 4;
    do {
      lVar31 = param_2 * 4 * uStack_490;
      pauStack_2b8 = (undefined1 (*) [32])(param_4 * 4 * uStack_490 + param_3);
      lVar20 = param_1 + lVar31;
      uVar26 = 0;
      lVar37 = 0;
      lVar50 = 0;
      if (param_7 == param_8) {
        if (0 < (longlong)uVar17) {
          do {
            auVar88 = ZEXT3264((undefined1  [32])0x0);
            auVar87 = (undefined1  [32])0x0;
            auVar86 = ZEXT3264((undefined1  [32])0x0);
            auVar85 = (undefined1  [32])0x0;
            auVar84 = ZEXT3264((undefined1  [32])0x0);
            auVar71 = (undefined1  [32])0x0;
            auVar72 = ZEXT3264((undefined1  [32])0x0);
            auVar70 = (undefined1  [32])0x0;
            auVar90 = ZEXT3264((undefined1  [32])0x0);
            auVar89 = (undefined1  [32])0x0;
            auVar92 = ZEXT3264((undefined1  [32])0x0);
            auVar91 = (undefined1  [32])0x0;
            auVar94 = ZEXT3264((undefined1  [32])0x0);
            auVar93 = (undefined1  [32])0x0;
            auVar96 = ZEXT3264((undefined1  [32])0x0);
            auVar95 = (undefined1  [32])0x0;
            if (0 < (longlong)param_7) {
              uVar45 = 0;
              lVar29 = 0;
              lVar50 = lVar29;
              do {
                uVar45 = uVar45 + 1;
                pauVar69 = (undefined1 (*) [32])(lVar50 + lVar42 + lVar31 + lVar37);
                pauVar1 = (undefined1 (*) [32])(lVar50 + lVar54 + lVar31 + lVar37);
                auVar87 = vpmaxub_avx2(auVar88._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + lVar31 + lVar53 + lVar49 + lVar37));
                auVar87 = vpmaxub_avx2(auVar87,*(undefined1 (*) [32])
                                                (lVar50 + lVar31 + lVar53 + lVar28 + lVar37));
                auVar88 = ZEXT3264(auVar87);
                auVar85 = vpmaxub_avx2(auVar86._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + 0x20 + lVar31 + lVar64 + lVar37));
                auVar89 = vpmaxub_avx2(auVar90._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + lVar53 + lVar56 + lVar31 + lVar37));
                auVar71 = vpmaxub_avx2(auVar84._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + lVar53 + lVar66 + lVar31 + lVar37));
                auVar70 = vpmaxub_avx2(auVar72._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + 0x20 + lVar55 + lVar31 + lVar37));
                auVar93 = vpmaxub_avx2(auVar94._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + lVar31 + lVar53 + lVar62 + lVar37));
                auVar91 = vpmaxub_avx2(auVar92._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + 0x20 + lVar44 + lVar31 + lVar37));
                auVar95 = vpmaxub_avx2(auVar96._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar29 + 0x20 + lVar25 + lVar31 + lVar37));
                lVar29 = lVar29 + lVar30;
                auVar85 = vpmaxub_avx2(auVar85,*(undefined1 (*) [32])
                                                (lVar50 + 0x20 + lVar31 + lVar16 + lVar24 + lVar37))
                ;
                auVar86 = ZEXT3264(auVar85);
                lVar33 = lVar50 + 0x20;
                auVar71 = vpmaxub_avx2(auVar71,*(undefined1 (*) [32])
                                                (lVar50 + lVar31 + lVar19 + lVar37));
                auVar84 = ZEXT3264(auVar71);
                auVar70 = vpmaxub_avx2(auVar70,*(undefined1 (*) [32])
                                                (lVar50 + 0x20 + lVar31 + lVar41 + lVar37));
                auVar72 = ZEXT3264(auVar70);
                lVar35 = lVar50 + 0x20;
                lVar50 = lVar50 + param_2;
                auVar89 = vpmaxub_avx2(auVar89,*pauVar69);
                auVar90 = ZEXT3264(auVar89);
                auVar91 = vpmaxub_avx2(auVar91,*(undefined1 (*) [32])
                                                (lVar33 + lVar65 + lVar31 + lVar37));
                auVar92 = ZEXT3264(auVar91);
                auVar93 = vpmaxub_avx2(auVar93,*pauVar1);
                auVar94 = ZEXT3264(auVar93);
                auVar95 = vpmaxub_avx2(auVar95,*(undefined1 (*) [32])
                                                (lVar35 + lVar43 + lVar31 + lVar37));
                auVar96 = ZEXT3264(auVar95);
              } while (uVar45 < param_7);
            }
            uVar26 = uVar26 + 1;
            lVar20 = lVar20 + 0x40;
            *pauStack_2b8 = auVar87;
            pauStack_2b8[1] = auVar85;
            *(undefined1 (*) [32])(*pauStack_2b8 + param_4) = auVar71;
            *(undefined1 (*) [32])(pauStack_2b8[1] + param_4) = auVar70;
            *(undefined1 (*) [32])(*pauStack_2b8 + lVar59) = auVar89;
            *(undefined1 (*) [32])(pauStack_2b8[1] + lVar59) = auVar91;
            *(undefined1 (*) [32])(*pauStack_2b8 + lVar21) = auVar93;
            *(undefined1 (*) [32])(pauStack_2b8[1] + lVar21) = auVar95;
            pauStack_2b8 = pauStack_2b8 + 2;
            lVar37 = lVar37 + 0x40;
            lVar50 = lVar37;
          } while (uVar26 < uVar18);
        }
      }
      else if (0 < (longlong)uVar17) {
        do {
          auVar86 = ZEXT3264((undefined1  [32])0x0);
          auVar84 = ZEXT3264((undefined1  [32])0x0);
          auVar72 = ZEXT3264((undefined1  [32])0x0);
          auVar88 = ZEXT3264((undefined1  [32])0x0);
          auVar90 = ZEXT3264((undefined1  [32])0x0);
          auVar92 = ZEXT3264((undefined1  [32])0x0);
          auVar94 = ZEXT3264((undefined1  [32])0x0);
          auVar96 = ZEXT3264((undefined1  [32])0x0);
          if (0 < (longlong)param_7) {
            uVar45 = 0;
            lVar50 = 0;
            do {
              pauVar69 = (undefined1 (*) [32])(lVar50 + lVar31 + lVar53 + lVar49 + lVar37);
              uVar45 = uVar45 + 1;
              lVar29 = lVar50 + 0x20;
              pauVar1 = (undefined1 (*) [32])(lVar50 + lVar53 + lVar66 + lVar31 + lVar37);
              lVar33 = lVar50 + 0x20;
              pauVar2 = (undefined1 (*) [32])(lVar50 + lVar53 + lVar56 + lVar31 + lVar37);
              lVar35 = lVar50 + 0x20;
              pauVar3 = (undefined1 (*) [32])(lVar50 + lVar31 + lVar53 + lVar62 + lVar37);
              lVar15 = lVar50 + 0x20;
              lVar50 = lVar50 + lVar30;
              auVar87 = vpmaxub_avx2(auVar86._0_32_,*pauVar69);
              auVar86 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar84._0_32_,
                                     *(undefined1 (*) [32])(lVar29 + lVar64 + lVar31 + lVar37));
              auVar84 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar72._0_32_,*pauVar1);
              auVar72 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar88._0_32_,
                                     *(undefined1 (*) [32])(lVar33 + lVar55 + lVar31 + lVar37));
              auVar88 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar90._0_32_,*pauVar2);
              auVar90 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar92._0_32_,
                                     *(undefined1 (*) [32])(lVar35 + lVar44 + lVar31 + lVar37));
              auVar92 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar94._0_32_,*pauVar3);
              auVar94 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar96._0_32_,
                                     *(undefined1 (*) [32])(lVar15 + lVar25 + lVar31 + lVar37));
              auVar96 = ZEXT3264(auVar87);
            } while (uVar45 < param_7);
          }
          auVar95 = auVar96._0_32_;
          auVar93 = auVar94._0_32_;
          auVar91 = auVar92._0_32_;
          auVar89 = auVar90._0_32_;
          auVar70 = auVar88._0_32_;
          auVar85 = auVar84._0_32_;
          auVar87 = auVar86._0_32_;
          auVar71 = auVar72._0_32_;
          uVar45 = 0;
          lVar50 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar69 = (undefined1 (*) [32])(lVar50 + lVar31 + lVar53 + lVar28 + lVar37);
              uVar45 = uVar45 + 1;
              lVar29 = lVar50 + 0x20;
              pauVar1 = (undefined1 (*) [32])(lVar50 + lVar19 + lVar31 + lVar37);
              lVar33 = lVar50 + 0x20;
              pauVar2 = (undefined1 (*) [32])(lVar50 + lVar31 + lVar42 + lVar37);
              lVar35 = lVar50 + 0x20;
              pauVar3 = (undefined1 (*) [32])(lVar50 + lVar54 + lVar31 + lVar37);
              lVar15 = lVar50 + 0x20;
              lVar50 = lVar50 + param_2;
              auVar87 = vpmaxub_avx2(auVar86._0_32_,*pauVar69);
              auVar86 = ZEXT3264(auVar87);
              auVar85 = vpmaxub_avx2(auVar84._0_32_,
                                     *(undefined1 (*) [32])
                                      (lVar29 + lVar16 + lVar24 + lVar31 + lVar37));
              auVar84 = ZEXT3264(auVar85);
              auVar71 = vpmaxub_avx2(auVar72._0_32_,*pauVar1);
              auVar72 = ZEXT3264(auVar71);
              auVar70 = vpmaxub_avx2(auVar88._0_32_,
                                     *(undefined1 (*) [32])(lVar33 + lVar31 + lVar41 + lVar37));
              auVar88 = ZEXT3264(auVar70);
              auVar89 = vpmaxub_avx2(auVar90._0_32_,*pauVar2);
              auVar90 = ZEXT3264(auVar89);
              auVar91 = vpmaxub_avx2(auVar92._0_32_,
                                     *(undefined1 (*) [32])(lVar35 + lVar65 + lVar31 + lVar37));
              auVar92 = ZEXT3264(auVar91);
              auVar93 = vpmaxub_avx2(auVar94._0_32_,*pauVar3);
              auVar94 = ZEXT3264(auVar93);
              auVar95 = vpmaxub_avx2(auVar96._0_32_,
                                     *(undefined1 (*) [32])(lVar15 + lVar43 + lVar31 + lVar37));
              auVar96 = ZEXT3264(auVar95);
            } while (uVar45 < param_8);
          }
          uVar26 = uVar26 + 1;
          lVar20 = lVar20 + 0x40;
          *pauStack_2b8 = auVar87;
          pauStack_2b8[1] = auVar85;
          *(undefined1 (*) [32])(*pauStack_2b8 + param_4) = auVar71;
          *(undefined1 (*) [32])(pauStack_2b8[1] + param_4) = auVar70;
          *(undefined1 (*) [32])(*pauStack_2b8 + lVar59) = auVar89;
          *(undefined1 (*) [32])(pauStack_2b8[1] + lVar59) = auVar91;
          *(undefined1 (*) [32])(*pauStack_2b8 + lVar21) = auVar93;
          *(undefined1 (*) [32])(pauStack_2b8[1] + lVar21) = auVar95;
          pauStack_2b8 = pauStack_2b8 + 2;
          lVar37 = lVar37 + 0x40;
          lVar50 = lVar37;
        } while (uVar26 < uVar18);
      }
      uVar26 = 0;
      lVar37 = 0;
      if (lVar50 < (longlong)uVar40) {
        lVar31 = lVar20 + lVar56;
        lVar29 = lVar28 + lVar20;
        lVar33 = lVar20 + lVar36;
        lVar34 = lVar58 + lVar20;
        lVar32 = lVar68 + lVar20;
        uVar45 = (uVar40 + 0x1f) - lVar50;
        lVar15 = lVar66 + lVar20;
        lVar35 = lVar20 + lVar49;
        lVar67 = lVar62 + lVar20;
        do {
          auVar84 = ZEXT3264((undefined1  [32])0x0);
          auVar86 = ZEXT3264((undefined1  [32])0x0);
          auVar88 = ZEXT3264((undefined1  [32])0x0);
          auVar72 = ZEXT3264((undefined1  [32])0x0);
          if (0 < (longlong)param_7) {
            uVar51 = 0;
            lVar46 = 0;
            do {
              pauVar69 = (undefined1 (*) [32])(lVar46 + lVar35 + lVar37);
              uVar51 = uVar51 + 1;
              pauVar1 = (undefined1 (*) [32])(lVar46 + lVar15 + lVar37);
              pauVar2 = (undefined1 (*) [32])(lVar46 + lVar31 + lVar37);
              pauVar3 = (undefined1 (*) [32])(lVar46 + lVar67 + lVar37);
              lVar46 = lVar46 + lVar30;
              auVar87 = vpmaxub_avx2(auVar84._0_32_,*pauVar69);
              auVar84 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar86._0_32_,*pauVar1);
              auVar86 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar88._0_32_,*pauVar2);
              auVar88 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar72._0_32_,*pauVar3);
              auVar72 = ZEXT3264(auVar87);
            } while (uVar51 < param_7);
          }
          auVar70 = auVar72._0_32_;
          auVar71 = auVar88._0_32_;
          auVar85 = auVar86._0_32_;
          auVar87 = auVar84._0_32_;
          uVar51 = 0;
          lVar46 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar69 = (undefined1 (*) [32])(lVar46 + lVar29 + lVar37);
              uVar51 = uVar51 + 1;
              pauVar1 = (undefined1 (*) [32])(lVar46 + lVar33 + lVar37);
              pauVar2 = (undefined1 (*) [32])(lVar46 + lVar34 + lVar37);
              pauVar3 = (undefined1 (*) [32])(lVar46 + lVar32 + lVar37);
              lVar46 = lVar46 + param_2;
              auVar87 = vpmaxub_avx2(auVar84._0_32_,*pauVar69);
              auVar84 = ZEXT3264(auVar87);
              auVar85 = vpmaxub_avx2(auVar86._0_32_,*pauVar1);
              auVar86 = ZEXT3264(auVar85);
              auVar71 = vpmaxub_avx2(auVar88._0_32_,*pauVar2);
              auVar88 = ZEXT3264(auVar71);
              auVar70 = vpmaxub_avx2(auVar72._0_32_,*pauVar3);
              auVar72 = ZEXT3264(auVar70);
            } while (uVar51 < param_8);
          }
          uVar26 = uVar26 + 1;
          lVar20 = lVar20 + 0x20;
          *pauStack_2b8 = auVar87;
          lVar50 = lVar50 + 0x20;
          *(undefined1 (*) [32])(*pauStack_2b8 + param_4) = auVar85;
          *(undefined1 (*) [32])(*pauStack_2b8 + lVar59) = auVar71;
          *(undefined1 (*) [32])(*pauStack_2b8 + lVar21) = auVar70;
          pauStack_2b8 = pauStack_2b8 + 1;
          lVar37 = lVar37 + 0x20;
        } while (uVar26 < uVar45 >> 5);
        if ((param_7 == 3) && (param_8 == 3)) goto LAB_140512f8b;
        uVar26 = 0;
        lVar37 = 0;
        if (lVar50 < (longlong)uVar40) {
          lVar31 = lVar49 + lVar20;
          lVar32 = 0x1f - lVar50;
          lVar29 = lVar58 + lVar20;
          lVar33 = lVar68 + lVar20;
          lVar35 = lVar66 + lVar20;
          lVar67 = lVar28 + lVar20;
          lVar15 = lVar56 + lVar20;
          lVar34 = lVar36 + lVar20;
          lVar46 = lVar62 + lVar20;
          do {
            auVar86 = ZEXT1664((undefined1  [16])0x0);
            auVar84 = ZEXT1664((undefined1  [16])0x0);
            auVar72 = ZEXT1664((undefined1  [16])0x0);
            auVar88 = ZEXT1664((undefined1  [16])0x0);
            auVar90 = ZEXT1664((undefined1  [16])0x0);
            auVar92 = ZEXT1664((undefined1  [16])0x0);
            auVar94 = ZEXT1664((undefined1  [16])0x0);
            auVar96 = ZEXT1664((undefined1  [16])0x0);
            if (0 < (longlong)param_7) {
              uVar45 = 0;
              lVar57 = lVar31 + lVar37;
              lVar60 = lVar35 + lVar37;
              lVar63 = lVar15 + lVar37;
              lVar52 = lVar46 + lVar37;
              lVar47 = 0;
              do {
                pauVar4 = (undefined1 (*) [16])(lVar47 + lVar57);
                lVar10 = lVar47 + 0x10;
                pauVar5 = (undefined1 (*) [16])(lVar47 + lVar60);
                lVar11 = lVar47 + 0x10;
                pauVar6 = (undefined1 (*) [16])(lVar47 + lVar63);
                lVar12 = lVar47 + 0x10;
                pauVar7 = (undefined1 (*) [16])(lVar47 + lVar52);
                lVar13 = lVar47 + 0x10;
                uVar45 = uVar45 + 1;
                lVar47 = lVar47 + lVar30;
                auVar76 = vpmaxub_avx(auVar86._0_16_,*pauVar4);
                auVar86 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar84._0_16_,*pauVar5);
                auVar84 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar72._0_16_,*pauVar6);
                auVar72 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar88._0_16_,*pauVar7);
                auVar88 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar90._0_16_,*(undefined1 (*) [16])(lVar10 + lVar57));
                auVar90 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar92._0_16_,*(undefined1 (*) [16])(lVar11 + lVar60));
                auVar92 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar94._0_16_,*(undefined1 (*) [16])(lVar12 + lVar63));
                auVar94 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar96._0_16_,*(undefined1 (*) [16])(lVar13 + lVar52));
                auVar96 = ZEXT1664(auVar76);
              } while (uVar45 < param_7);
            }
            auVar83 = auVar96._0_16_;
            auVar81 = auVar94._0_16_;
            auVar79 = auVar92._0_16_;
            auVar77 = auVar90._0_16_;
            auVar82 = auVar88._0_16_;
            auVar78 = auVar84._0_16_;
            auVar76 = auVar86._0_16_;
            auVar80 = auVar72._0_16_;
            uVar45 = 0;
            lVar52 = 0;
            if (0 < (longlong)param_8) {
              lVar57 = lVar67 + lVar37;
              lVar60 = lVar34 + lVar37;
              lVar63 = lVar29 + lVar37;
              lVar47 = lVar33 + lVar37;
              do {
                pauVar4 = (undefined1 (*) [16])(lVar52 + lVar57);
                lVar10 = lVar52 + 0x10;
                pauVar5 = (undefined1 (*) [16])(lVar52 + lVar60);
                lVar11 = lVar52 + 0x10;
                pauVar6 = (undefined1 (*) [16])(lVar52 + lVar63);
                lVar12 = lVar52 + 0x10;
                pauVar7 = (undefined1 (*) [16])(lVar52 + lVar47);
                lVar13 = lVar52 + 0x10;
                uVar45 = uVar45 + 1;
                lVar52 = lVar52 + param_2;
                auVar76 = vpmaxub_avx(auVar86._0_16_,*pauVar4);
                auVar86 = ZEXT1664(auVar76);
                auVar78 = vpmaxub_avx(auVar84._0_16_,*pauVar5);
                auVar84 = ZEXT1664(auVar78);
                auVar80 = vpmaxub_avx(auVar72._0_16_,*pauVar6);
                auVar72 = ZEXT1664(auVar80);
                auVar82 = vpmaxub_avx(auVar88._0_16_,*pauVar7);
                auVar88 = ZEXT1664(auVar82);
                auVar77 = vpmaxub_avx(auVar90._0_16_,*(undefined1 (*) [16])(lVar10 + lVar57));
                auVar90 = ZEXT1664(auVar77);
                auVar79 = vpmaxub_avx(auVar92._0_16_,*(undefined1 (*) [16])(lVar11 + lVar60));
                auVar92 = ZEXT1664(auVar79);
                auVar81 = vpmaxub_avx(auVar94._0_16_,*(undefined1 (*) [16])(lVar12 + lVar63));
                auVar94 = ZEXT1664(auVar81);
                auVar83 = vpmaxub_avx(auVar96._0_16_,*(undefined1 (*) [16])(lVar13 + lVar47));
                auVar96 = ZEXT1664(auVar83);
              } while (uVar45 < param_8);
            }
            uVar26 = uVar26 + 1;
            lVar20 = lVar20 + 0x20;
            *(undefined1 (*) [16])*pauStack_2b8 = auVar76;
            *(undefined1 (*) [16])(*pauStack_2b8 + param_4) = auVar78;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar59) = auVar80;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar21) = auVar82;
            *(undefined1 (*) [16])(*pauStack_2b8 + 0x10) = auVar77;
            *(undefined1 (*) [16])(*pauStack_2b8 + param_4 + 0x10) = auVar79;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar59 + 0x10) = auVar81;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar21 + 0x10) = auVar83;
            pauStack_2b8 = pauStack_2b8 + 1;
            lVar50 = lVar50 + 0x20;
            lVar37 = lVar37 + 0x20;
          } while (uVar26 < lVar32 + uVar40 >> 5);
        }
LAB_1405114ce:
        uVar26 = 0;
        lVar37 = 0;
        if (lVar50 < (longlong)uVar27) {
          lVar31 = lVar20 + lVar49;
          lVar29 = lVar20 + lVar68;
          lVar33 = lVar20 + lVar66;
          lVar32 = lVar36 + lVar20;
          lVar15 = lVar58 + lVar20;
          uVar45 = (uVar27 + 0xf) - lVar50;
          lVar34 = lVar28 + lVar20;
          lVar35 = lVar20 + lVar56;
          lVar67 = lVar62 + lVar20;
          do {
            auVar84 = ZEXT1664((undefined1  [16])0x0);
            auVar86 = ZEXT1664((undefined1  [16])0x0);
            auVar88 = ZEXT1664((undefined1  [16])0x0);
            auVar72 = ZEXT1664((undefined1  [16])0x0);
            if (0 < (longlong)param_7) {
              uVar51 = 0;
              lVar46 = 0;
              do {
                pauVar4 = (undefined1 (*) [16])(lVar46 + lVar31 + lVar37);
                pauVar5 = (undefined1 (*) [16])(lVar46 + lVar33 + lVar37);
                pauVar6 = (undefined1 (*) [16])(lVar46 + lVar35 + lVar37);
                pauVar7 = (undefined1 (*) [16])(lVar46 + lVar67 + lVar37);
                uVar51 = uVar51 + 1;
                lVar46 = lVar46 + lVar30;
                auVar76 = vpmaxub_avx(auVar84._0_16_,*pauVar4);
                auVar84 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar86._0_16_,*pauVar5);
                auVar86 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar88._0_16_,*pauVar6);
                auVar88 = ZEXT1664(auVar76);
                auVar76 = vpmaxub_avx(auVar72._0_16_,*pauVar7);
                auVar72 = ZEXT1664(auVar76);
              } while (uVar51 < param_7);
            }
            auVar82 = auVar72._0_16_;
            auVar80 = auVar88._0_16_;
            auVar78 = auVar86._0_16_;
            auVar76 = auVar84._0_16_;
            uVar51 = 0;
            lVar46 = 0;
            if (0 < (longlong)param_8) {
              do {
                pauVar4 = (undefined1 (*) [16])(lVar46 + lVar34 + lVar37);
                pauVar5 = (undefined1 (*) [16])(lVar46 + lVar32 + lVar37);
                pauVar6 = (undefined1 (*) [16])(lVar46 + lVar15 + lVar37);
                pauVar7 = (undefined1 (*) [16])(lVar46 + lVar29 + lVar37);
                uVar51 = uVar51 + 1;
                lVar46 = lVar46 + param_2;
                auVar76 = vpmaxub_avx(auVar84._0_16_,*pauVar4);
                auVar84 = ZEXT1664(auVar76);
                auVar78 = vpmaxub_avx(auVar86._0_16_,*pauVar5);
                auVar86 = ZEXT1664(auVar78);
                auVar80 = vpmaxub_avx(auVar88._0_16_,*pauVar6);
                auVar88 = ZEXT1664(auVar80);
                auVar82 = vpmaxub_avx(auVar72._0_16_,*pauVar7);
                auVar72 = ZEXT1664(auVar82);
              } while (uVar51 < param_8);
            }
            uVar26 = uVar26 + 1;
            lVar20 = lVar20 + 0x10;
            *(undefined1 (*) [16])*pauStack_2b8 = auVar76;
            *(undefined1 (*) [16])(*pauStack_2b8 + param_4) = auVar78;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar59) = auVar80;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar21) = auVar82;
            pauStack_2b8 = (undefined1 (*) [32])(*pauStack_2b8 + 0x10);
            lVar50 = lVar50 + 0x10;
            lVar37 = lVar37 + 0x10;
          } while (uVar26 < uVar45 >> 4);
        }
      }
      else {
        if ((param_7 != 3) || (param_8 != 3)) goto LAB_1405114ce;
LAB_140512f8b:
        lVar37 = 0;
        if (lVar50 < (longlong)uVar27) {
          uVar26 = 0;
          do {
            uVar45 = uVar26;
            uVar26 = uVar45 + 1;
            auVar76 = *(undefined1 (*) [16])(lVar37 + lVar20 + lVar58);
            auVar78 = *(undefined1 (*) [16])(lVar37 + lVar20 + lVar36);
            auVar77 = vpmaxub_avx(auVar78,*(undefined1 (*) [16])(lVar37 + lVar66 + lVar20));
            auVar80 = *(undefined1 (*) [16])(lVar37 + lVar68 + lVar20);
            auVar82 = *(undefined1 (*) [16])(lVar37 + lVar20 + lVar16);
            auVar79 = vpmaxub_avx(*(undefined1 (*) [16])(lVar37 + lVar20 + lVar49),
                                  *(undefined1 (*) [16])(lVar37 + lVar20 + lVar28));
            auVar79 = vpmaxub_avx(auVar79,*(undefined1 (*) [16])(lVar37 + lVar20 + lVar30 + lVar49))
            ;
            auVar78 = vpmaxub_avx(auVar79,auVar78);
            auVar77 = vpmaxub_avx(auVar77,*(undefined1 (*) [16])(lVar37 + lVar30 + lVar66 + lVar20))
            ;
            auVar77 = vpmaxub_avx(auVar77,auVar76);
            auVar78 = vpmaxub_avx(auVar78,*(undefined1 (*) [16])
                                           (lVar37 + lVar20 + lVar49 + lVar30 * 2));
            auVar79 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])(lVar37 + lVar62 + lVar20));
            auVar78 = vpmaxub_avx(auVar78,auVar76);
            auVar77 = vpmaxub_avx(auVar77,*(undefined1 (*) [16])
                                           (lVar37 + lVar20 + lVar66 + lVar30 * 2));
            auVar77 = vpmaxub_avx(auVar77,auVar80);
            auVar79 = vpmaxub_avx(auVar79,*(undefined1 (*) [16])(lVar37 + lVar30 + lVar62 + lVar20))
            ;
            auVar79 = vpmaxub_avx(auVar79,auVar82);
            auVar76 = vpmaxub_avx(auVar76,*(undefined1 (*) [16])(lVar37 + lVar20 + lVar56));
            auVar76 = vpmaxub_avx(auVar76,*(undefined1 (*) [16])(lVar37 + lVar30 + lVar56 + lVar20))
            ;
            auVar76 = vpmaxub_avx(auVar76,auVar80);
            auVar76 = vpmaxub_avx(auVar76,*(undefined1 (*) [16])
                                           (lVar37 + lVar20 + lVar56 + lVar30 * 2));
            auVar76 = vpmaxub_avx(auVar76,auVar82);
            auVar80 = vpmaxub_avx(auVar79,*(undefined1 (*) [16])
                                           (lVar37 + lVar20 + lVar62 + lVar30 * 2));
            auVar80 = vpmaxub_avx(auVar80,*(undefined1 (*) [16])
                                           (lVar37 + lVar20 + param_2 * 5 + lVar28));
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar37) = auVar78;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar37 + param_4) = auVar77;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar37 + param_4 * 2) = auVar76;
            *(undefined1 (*) [16])(*pauStack_2b8 + lVar37 + lVar21) = auVar80;
            lVar37 = lVar37 + 0x10;
          } while (uVar26 < (uVar27 + 0xf) - lVar50 >> 4);
          lVar37 = uVar45 * 0x10 + 0x10;
          lVar50 = lVar50 + lVar37;
          lVar20 = lVar20 + lVar37;
          pauStack_2b8 = (undefined1 (*) [32])(*pauStack_2b8 + lVar37);
        }
      }
      uVar26 = 0;
      if (lVar50 < (longlong)uVar48) {
        lVar37 = lVar20 + lVar56;
        lVar31 = lVar49 + lVar20;
        lVar15 = param_2 + lVar39 + lVar20;
        lVar35 = lVar39 + param_2 * 2 + lVar20;
        lVar33 = lVar39 + param_2 * 3 + lVar20;
        lVar29 = lVar66 + lVar20;
        uVar45 = (uVar48 + 7) - lVar50;
        lVar32 = lVar39 + lVar20;
        lVar34 = lVar62 + lVar20;
        do {
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          uStack_448 = 0;
          uStack_438 = 0;
          uStack_428 = 0;
          if (0 < (longlong)param_7) {
            auVar86 = ZEXT1664((undefined1  [16])0x0);
            uVar51 = 0;
            auVar84 = ZEXT1664((undefined1  [16])0x0);
            auVar72 = ZEXT1664((undefined1  [16])0x0);
            lVar67 = 0;
            do {
              uVar51 = uVar51 + 1;
              auVar76._8_8_ = 0;
              auVar76._0_8_ = *(ulonglong *)(lVar67 + lVar31 + uVar26 * 8);
              auVar76 = vpmaxub_avx(auVar88._0_16_,auVar76);
              auVar88 = ZEXT1664(auVar76);
              puVar8 = (ulonglong *)(lVar67 + lVar37 + uVar26 * 8);
              auVar78._8_8_ = 0;
              auVar78._0_8_ = *(ulonglong *)(lVar67 + lVar29 + uVar26 * 8);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar78);
              uStack_448 = auVar76._0_8_;
              auVar86 = ZEXT1664(auVar76);
              puVar9 = (ulonglong *)(lVar67 + lVar34 + uVar26 * 8);
              lVar67 = lVar67 + lVar30;
              auVar80._8_8_ = 0;
              auVar80._0_8_ = *puVar8;
              auVar76 = vpmaxub_avx(auVar84._0_16_,auVar80);
              uStack_438 = auVar76._0_8_;
              auVar84 = ZEXT1664(auVar76);
              auVar82._8_8_ = 0;
              auVar82._0_8_ = *puVar9;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar82);
              uStack_428 = auVar76._0_8_;
              auVar72 = ZEXT1664(auVar76);
            } while (uVar51 < param_7);
          }
          uVar75 = auVar88._0_8_;
          uVar51 = 0;
          lVar67 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar51 = uVar51 + 1;
              auVar77._8_8_ = 0;
              auVar77._0_8_ = *(ulonglong *)(lVar67 + lVar32 + uVar26 * 8);
              auVar76 = vpmaxub_avx(auVar88._0_16_,auVar77);
              auVar88 = ZEXT1664(auVar76);
              uVar75 = auVar76._0_8_;
              puVar8 = (ulonglong *)(lVar67 + lVar35 + uVar26 * 8);
              auVar79._8_8_ = 0;
              auVar79._0_8_ = *(ulonglong *)(lVar67 + lVar15 + uVar26 * 8);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar79);
              uStack_448 = auVar76._0_8_;
              auVar86 = ZEXT1664(auVar76);
              puVar9 = (ulonglong *)(lVar67 + lVar33 + uVar26 * 8);
              lVar67 = lVar67 + param_2;
              auVar81._8_8_ = 0;
              auVar81._0_8_ = *puVar8;
              auVar76 = vpmaxub_avx(auVar84._0_16_,auVar81);
              uStack_438 = auVar76._0_8_;
              auVar84 = ZEXT1664(auVar76);
              auVar83._8_8_ = 0;
              auVar83._0_8_ = *puVar9;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar83);
              uStack_428 = auVar76._0_8_;
              auVar72 = ZEXT1664(auVar76);
            } while (uVar51 < param_8);
          }
          *(undefined8 *)*pauStack_2b8 = uVar75;
          uVar26 = uVar26 + 1;
          lVar20 = lVar20 + 8;
          *(undefined8 *)(*pauStack_2b8 + param_4) = uStack_448;
          lVar50 = lVar50 + 8;
          *(undefined8 *)(*pauStack_2b8 + lVar59) = uStack_438;
          *(undefined8 *)(*pauStack_2b8 + lVar21) = uStack_428;
          pauStack_2b8 = (undefined1 (*) [32])(*pauStack_2b8 + 8);
        } while (uVar26 < uVar45 >> 3);
      }
      uVar26 = 0;
      if (lVar50 < (longlong)uVar61) {
        lVar37 = lVar20 + lVar56;
        lVar31 = lVar20 + lVar49;
        lVar15 = lVar36 + lVar20;
        lVar35 = lVar58 + lVar20;
        lVar33 = lVar68 + lVar20;
        lVar29 = lVar66 + lVar20;
        uVar45 = (uVar61 + 3) - lVar50;
        lVar32 = lVar28 + lVar20;
        lVar34 = lVar62 + lVar20;
        do {
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_7) {
            uVar51 = 0;
            lVar67 = 0;
            do {
              auVar76 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar31 + uVar26 * 4),0);
              uVar51 = uVar51 + 1;
              auVar78 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar29 + uVar26 * 4),0);
              auVar80 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar37 + uVar26 * 4),0);
              auVar82 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar34 + uVar26 * 4),0);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar76);
              auVar86 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar88._0_16_,auVar78);
              auVar88 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar80);
              auVar72 = ZEXT1664(auVar76);
              lVar67 = lVar67 + lVar30;
              auVar76 = vpmaxub_avx(auVar84._0_16_,auVar82);
              auVar84 = ZEXT1664(auVar76);
            } while (uVar51 < param_7);
          }
          uVar51 = 0;
          lVar67 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar76 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar32 + uVar26 * 4),0);
              uVar51 = uVar51 + 1;
              auVar78 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar15 + uVar26 * 4),0);
              auVar80 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar35 + uVar26 * 4),0);
              auVar82 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar33 + uVar26 * 4),0);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar76);
              auVar86 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar88._0_16_,auVar78);
              auVar88 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar80);
              auVar72 = ZEXT1664(auVar76);
              lVar67 = lVar67 + param_2;
              auVar76 = vpmaxub_avx(auVar84._0_16_,auVar82);
              auVar84 = ZEXT1664(auVar76);
            } while (uVar51 < param_8);
          }
          uVar26 = uVar26 + 1;
          lVar20 = lVar20 + 4;
          *(int *)*pauStack_2b8 = auVar86._0_4_;
          lVar50 = lVar50 + 4;
          *(int *)(*pauStack_2b8 + param_4) = auVar88._0_4_;
          *(int *)(*pauStack_2b8 + lVar59) = auVar72._0_4_;
          *(int *)(*pauStack_2b8 + lVar21) = auVar84._0_4_;
          pauStack_2b8 = (undefined1 (*) [32])(*pauStack_2b8 + 4);
        } while (uVar26 < uVar45 >> 2);
      }
      uVar26 = 0;
      if (lVar50 < (longlong)uVar22) {
        lVar37 = lVar20 + lVar56;
        lVar31 = lVar20 + lVar49;
        lVar15 = lVar36 + lVar20;
        lVar35 = lVar58 + lVar20;
        lVar33 = lVar68 + lVar20;
        lVar29 = lVar66 + lVar20;
        uVar45 = (uVar22 + 1) - lVar50;
        lVar32 = lVar28 + lVar20;
        lVar34 = lVar62 + lVar20;
        do {
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_7) {
            uVar51 = 0;
            lVar67 = 0;
            do {
              uVar51 = uVar51 + 1;
              auVar76 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar31 + uVar26 * 2),0);
              auVar78 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar29 + uVar26 * 2),0);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar76);
              auVar86 = ZEXT1664(auVar76);
              auVar76 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar37 + uVar26 * 2),0);
              auVar78 = vpmaxub_avx(auVar88._0_16_,auVar78);
              auVar88 = ZEXT1664(auVar78);
              auVar78 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar34 + uVar26 * 2),0);
              lVar67 = lVar67 + lVar30;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar76);
              auVar72 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar84._0_16_,auVar78);
              auVar84 = ZEXT1664(auVar76);
            } while (uVar51 < param_7);
          }
          auVar82 = auVar84._0_16_;
          auVar80 = auVar72._0_16_;
          auVar78 = auVar88._0_16_;
          auVar76 = auVar86._0_16_;
          uVar51 = 0;
          lVar67 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar51 = uVar51 + 1;
              auVar76 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar32 + uVar26 * 2),0);
              auVar78 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar15 + uVar26 * 2),0);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar76);
              auVar86 = ZEXT1664(auVar76);
              auVar80 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar35 + uVar26 * 2),0);
              auVar78 = vpmaxub_avx(auVar88._0_16_,auVar78);
              auVar88 = ZEXT1664(auVar78);
              auVar82 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar33 + uVar26 * 2),0);
              lVar67 = lVar67 + param_2;
              auVar80 = vpmaxub_avx(auVar72._0_16_,auVar80);
              auVar72 = ZEXT1664(auVar80);
              auVar82 = vpmaxub_avx(auVar84._0_16_,auVar82);
              auVar84 = ZEXT1664(auVar82);
            } while (uVar51 < param_8);
          }
          uVar26 = uVar26 + 1;
          lVar20 = lVar20 + 2;
          vpextrw_avx(auVar76,0);
          lVar50 = lVar50 + 2;
          vpextrw_avx(auVar78,0);
          vpextrw_avx(auVar80,0);
          vpextrw_avx(auVar82,0);
          pauStack_2b8 = (undefined1 (*) [32])(*pauStack_2b8 + 2);
        } while (uVar26 < uVar45 >> 1);
      }
      uVar26 = 0;
      if (lVar50 < (longlong)param_5) {
        do {
          auVar86 = ZEXT1664((undefined1  [16])0x0);
          auVar88 = ZEXT1664((undefined1  [16])0x0);
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          auVar84 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_7) {
            uVar45 = 0;
            lVar37 = 0;
            do {
              auVar76 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar20 + lVar49 + uVar26),0);
              uVar45 = uVar45 + 1;
              auVar78 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar20 + lVar66 + uVar26),0);
              auVar80 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar20 + lVar56 + uVar26),0);
              auVar82 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar20 + lVar62 + uVar26),0);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar76);
              auVar86 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar88._0_16_,auVar78);
              auVar88 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar80);
              auVar72 = ZEXT1664(auVar76);
              lVar37 = lVar37 + lVar30;
              auVar76 = vpmaxub_avx(auVar84._0_16_,auVar82);
              auVar84 = ZEXT1664(auVar76);
            } while (uVar45 < param_7);
          }
          uVar45 = 0;
          lVar37 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar76 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar28 + lVar20 + uVar26),0);
              uVar45 = uVar45 + 1;
              auVar78 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar20 + lVar36 + uVar26),0);
              auVar80 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar20 + lVar58 + uVar26),0);
              auVar82 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar37 + lVar20 + lVar68 + uVar26),0);
              auVar76 = vpmaxub_avx(auVar86._0_16_,auVar76);
              auVar86 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar88._0_16_,auVar78);
              auVar88 = ZEXT1664(auVar76);
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar80);
              auVar72 = ZEXT1664(auVar76);
              lVar37 = lVar37 + param_2;
              auVar76 = vpmaxub_avx(auVar84._0_16_,auVar82);
              auVar84 = ZEXT1664(auVar76);
            } while (uVar45 < param_8);
          }
          uVar26 = uVar26 + 1;
          (*pauStack_2b8)[0] = auVar86[0];
          (*pauStack_2b8)[param_4] = auVar88[0];
          (*pauStack_2b8)[lVar59] = auVar72[0];
          (*pauStack_2b8)[lVar21] = auVar84[0];
          pauStack_2b8 = (undefined1 (*) [32])(*pauStack_2b8 + 1);
        } while (uVar26 < param_5 - lVar50);
      }
      lVar37 = uStack_490 * 4 + 4;
      uStack_490 = uStack_490 + 1;
      lStack_6f8 = unaff_XMM12_Qa;
    } while (uStack_490 <
             (ulonglong)
             ((longlong)(((ulonglong)((longlong)(uVar23 + 3) >> 1) >> 0x3e) + 3 + uVar23) >> 2));
  }
  uVar23 = 0;
  uVar18 = 0;
  lVar36 = 0;
  if (lVar37 < (longlong)param_6) {
    lVar53 = param_2 * lVar37;
    lVar16 = uVar38 * param_2;
    lVar68 = lVar30 * (ulonglong)uVar14;
    lStack_6f0 = lStack_6f8;
    lStack_6f8 = lVar37 * param_4 + param_3;
    lVar58 = (longlong)(int)(param_10 * (uint)uVar14);
    do {
      lVar21 = 0;
      uVar38 = 0;
      lVar59 = param_1 + lVar53 + uVar18;
      pauVar69 = (undefined1 (*) [32])(param_3 + lVar37 * param_4 + lVar36);
      if (0 < (longlong)(param_5 & 0xffffffffffffff80)) {
        lVar24 = lStack_6f8 + lVar36;
        lStack_6f0 = lVar36;
        lVar19 = 0;
        do {
          auVar86 = ZEXT3264((undefined1  [32])0x0);
          uVar23 = 0;
          auVar88 = ZEXT3264((undefined1  [32])0x0);
          lVar21 = 0;
          auVar72 = ZEXT3264((undefined1  [32])0x0);
          auVar84 = ZEXT3264((undefined1  [32])0x0);
          if (0 < (longlong)param_7) {
            auVar86 = ZEXT3264((undefined1  [32])0x0);
            auVar88 = ZEXT3264((undefined1  [32])0x0);
            lVar25 = param_1 + lVar16 + lVar53 + uVar18 + lVar19;
            auVar72 = ZEXT3264((undefined1  [32])0x0);
            auVar84 = ZEXT3264((undefined1  [32])0x0);
            do {
              pauVar1 = (undefined1 (*) [32])
                        (lVar21 + ((param_2 + param_1) - (param_2 - lVar16)) + lVar53 + uVar18 +
                                  lVar19);
              uVar23 = uVar23 + 1;
              lVar28 = lVar21 + 0x20;
              lVar39 = lVar21 + 0x40;
              lVar41 = lVar21 + 0x60;
              lVar21 = lVar21 + lVar30;
              auVar87 = vpmaxub_avx2(auVar86._0_32_,*pauVar1);
              auVar86 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar88._0_32_,*(undefined1 (*) [32])(lVar28 + lVar25));
              auVar88 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar39 + lVar25));
              auVar72 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar84._0_32_,*(undefined1 (*) [32])(lVar41 + lVar25));
              auVar84 = ZEXT3264(auVar87);
            } while (uVar23 < param_7);
          }
          auVar70 = auVar84._0_32_;
          auVar71 = auVar72._0_32_;
          auVar85 = auVar88._0_32_;
          auVar87 = auVar86._0_32_;
          uVar23 = 0;
          lVar21 = 0;
          if (0 < (longlong)param_8) {
            lVar25 = lVar53 + param_1 + lVar58 + uVar18 + lVar19;
            do {
              pauVar1 = (undefined1 (*) [32])
                        (lVar21 + lVar19 + ((param_2 + param_1) - (param_2 - lVar58)) + lVar53 +
                                           uVar18);
              uVar23 = uVar23 + 1;
              lVar28 = lVar21 + 0x20;
              lVar39 = lVar21 + 0x40;
              lVar41 = lVar21 + 0x60;
              lVar21 = lVar21 + param_2;
              auVar87 = vpmaxub_avx2(auVar86._0_32_,*pauVar1);
              auVar86 = ZEXT3264(auVar87);
              auVar85 = vpmaxub_avx2(auVar88._0_32_,*(undefined1 (*) [32])(lVar28 + lVar25));
              auVar88 = ZEXT3264(auVar85);
              auVar71 = vpmaxub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar39 + lVar25));
              auVar72 = ZEXT3264(auVar71);
              auVar70 = vpmaxub_avx2(auVar84._0_32_,*(undefined1 (*) [32])(lVar41 + lVar25));
              auVar84 = ZEXT3264(auVar70);
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          lVar21 = lVar19 + 0x80;
          lVar59 = lVar59 + 0x80;
          pauVar69 = pauVar69 + 4;
          *(undefined1 (*) [32])(lVar24 + lVar19) = auVar87;
          *(undefined1 (*) [32])(lVar24 + 0x20 + lVar19) = auVar85;
          *(undefined1 (*) [32])(lVar24 + 0x40 + lVar19) = auVar71;
          *(undefined1 (*) [32])(lVar24 + 0x60 + lVar19) = auVar70;
          uVar23 = uVar18;
          lVar19 = lVar21;
        } while (uVar38 < (param_5 & 0xffffffffffffff80) + 0x7f >> 7);
      }
      uVar38 = 0;
      lVar19 = 0;
      if (lVar21 < (longlong)uVar17) {
        lVar24 = lVar68 + lVar59;
        uVar26 = (uVar17 + 0x3f) - lVar21;
        lVar25 = lVar59 + lVar16;
        lStack_6f0 = lVar36;
        do {
          uVar23 = 0;
          auVar84 = ZEXT3264((undefined1  [32])0x0);
          lVar28 = 0;
          auVar72 = ZEXT3264((undefined1  [32])0x0);
          if (0 < (longlong)param_7) {
            lVar39 = lVar25 + lVar19;
            do {
              pauVar1 = (undefined1 (*) [32])(lVar28 + lVar39);
              uVar23 = uVar23 + 1;
              lVar41 = lVar28 + 0x20;
              lVar28 = lVar28 + lVar30;
              auVar87 = vpmaxub_avx2(auVar84._0_32_,*pauVar1);
              auVar84 = ZEXT3264(auVar87);
              auVar87 = vpmaxub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar41 + lVar39));
              auVar72 = ZEXT3264(auVar87);
            } while (uVar23 < param_7);
          }
          auVar85 = auVar72._0_32_;
          auVar87 = auVar84._0_32_;
          uVar23 = 0;
          lVar28 = 0;
          if (0 < (longlong)param_8) {
            lVar39 = lVar24 + lVar19;
            do {
              pauVar1 = (undefined1 (*) [32])(lVar28 + lVar39);
              uVar23 = uVar23 + 1;
              lVar41 = lVar28 + 0x20;
              lVar28 = lVar28 + param_2;
              auVar87 = vpmaxub_avx2(auVar84._0_32_,*pauVar1);
              auVar84 = ZEXT3264(auVar87);
              auVar85 = vpmaxub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar41 + lVar39));
              auVar72 = ZEXT3264(auVar85);
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          lVar59 = lVar59 + 0x40;
          *pauVar69 = auVar87;
          lVar21 = lVar21 + 0x40;
          pauVar69[1] = auVar85;
          pauVar69 = pauVar69 + 2;
          lVar19 = lVar19 + 0x40;
          uVar23 = uVar18;
        } while (uVar38 < uVar26 >> 6);
      }
      uVar38 = 0;
      lVar19 = 0;
      if (lVar21 < (longlong)uVar40) {
        lVar24 = lVar68 + lVar59;
        uVar26 = (uVar40 + 0x1f) - lVar21;
        lVar25 = lVar59 + lVar16;
        lStack_6f0 = lVar36;
        do {
          uVar23 = 0;
          auVar72 = ZEXT3264((undefined1  [32])0x0);
          lVar28 = 0;
          if (0 < (longlong)param_7) {
            do {
              pauVar1 = (undefined1 (*) [32])(lVar28 + lVar25 + lVar19);
              uVar23 = uVar23 + 1;
              lVar28 = lVar28 + lVar30;
              auVar87 = vpmaxub_avx2(auVar72._0_32_,*pauVar1);
              auVar72 = ZEXT3264(auVar87);
            } while (uVar23 < param_7);
          }
          auVar87 = auVar72._0_32_;
          uVar23 = 0;
          lVar28 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar1 = (undefined1 (*) [32])(lVar28 + lVar24 + lVar19);
              uVar23 = uVar23 + 1;
              lVar28 = lVar28 + param_2;
              auVar87 = vpmaxub_avx2(auVar72._0_32_,*pauVar1);
              auVar72 = ZEXT3264(auVar87);
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          lVar59 = lVar59 + 0x20;
          *pauVar69 = auVar87;
          pauVar69 = pauVar69 + 1;
          lVar21 = lVar21 + 0x20;
          lVar19 = lVar19 + 0x20;
          uVar23 = uVar18;
        } while (uVar38 < uVar26 >> 5);
      }
      uVar38 = 0;
      lVar19 = 0;
      if (lVar21 < (longlong)uVar27) {
        lVar24 = lVar68 + lVar59;
        uVar26 = (uVar27 + 0xf) - lVar21;
        lVar25 = lVar59 + lVar16;
        lStack_6f0 = lVar36;
        do {
          uVar23 = 0;
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          lVar28 = 0;
          if (0 < (longlong)param_7) {
            do {
              pauVar4 = (undefined1 (*) [16])(lVar28 + lVar25 + lVar19);
              uVar23 = uVar23 + 1;
              lVar28 = lVar28 + lVar30;
              auVar76 = vpmaxub_avx(auVar72._0_16_,*pauVar4);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_7);
          }
          auVar76 = auVar72._0_16_;
          uVar23 = 0;
          lVar28 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar4 = (undefined1 (*) [16])(lVar28 + lVar24 + lVar19);
              uVar23 = uVar23 + 1;
              lVar28 = lVar28 + param_2;
              auVar76 = vpmaxub_avx(auVar72._0_16_,*pauVar4);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          lVar59 = lVar59 + 0x10;
          *(undefined1 (*) [16])*pauVar69 = auVar76;
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 0x10);
          lVar21 = lVar21 + 0x10;
          lVar19 = lVar19 + 0x10;
          uVar23 = uVar18;
        } while (uVar38 < uVar26 >> 4);
      }
      uVar38 = 0;
      if (lVar21 < (longlong)uVar48) {
        lVar19 = lVar16 + lVar59;
        uVar26 = (uVar48 + 7) - lVar21;
        lVar24 = lVar58 + lVar59;
        lStack_6f0 = lVar36;
        do {
          uVar23 = 0;
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          lVar25 = 0;
          if (0 < (longlong)param_7) {
            do {
              puVar8 = (ulonglong *)(lVar25 + lVar19 + uVar38 * 8);
              uVar23 = uVar23 + 1;
              lVar25 = lVar25 + lVar30;
              auVar73._8_8_ = 0;
              auVar73._0_8_ = *puVar8;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar73);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_7);
          }
          uVar75 = auVar72._0_8_;
          uVar23 = 0;
          lVar25 = 0;
          if (0 < (longlong)param_8) {
            do {
              puVar8 = (ulonglong *)(lVar25 + lVar24 + uVar38 * 8);
              uVar23 = uVar23 + 1;
              lVar25 = lVar25 + param_2;
              auVar74._8_8_ = 0;
              auVar74._0_8_ = *puVar8;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar74);
              auVar72 = ZEXT1664(auVar76);
              uVar75 = auVar76._0_8_;
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          lVar59 = lVar59 + 8;
          *(undefined8 *)*pauVar69 = uVar75;
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 8);
          lVar21 = lVar21 + 8;
          uVar23 = uVar18;
        } while (uVar38 < uVar26 >> 3);
      }
      uVar38 = 0;
      if (lVar21 < (longlong)uVar61) {
        lVar19 = lVar68 + lVar59;
        uVar26 = (uVar61 + 3) - lVar21;
        lVar24 = lVar59 + lVar16;
        lStack_6f0 = lVar36;
        do {
          uVar23 = 0;
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          lVar25 = 0;
          if (0 < (longlong)param_7) {
            do {
              auVar76 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar25 + lVar24 + uVar38 * 4),0);
              uVar23 = uVar23 + 1;
              lVar25 = lVar25 + lVar30;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar76);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_7);
          }
          uVar23 = 0;
          lVar25 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar76 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar25 + lVar19 + uVar38 * 4),0);
              uVar23 = uVar23 + 1;
              lVar25 = lVar25 + param_2;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar76);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          lVar59 = lVar59 + 4;
          *(int *)*pauVar69 = auVar72._0_4_;
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 4);
          lVar21 = lVar21 + 4;
          uVar23 = uVar18;
        } while (uVar38 < uVar26 >> 2);
      }
      uVar38 = 0;
      if (lVar21 < (longlong)uVar22) {
        lVar19 = lVar68 + lVar59;
        uVar26 = (uVar22 + 1) - lVar21;
        lVar24 = lVar59 + lVar16;
        lStack_6f0 = lVar36;
        do {
          uVar23 = 0;
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          lVar25 = 0;
          if (0 < (longlong)param_7) {
            do {
              uVar23 = uVar23 + 1;
              auVar76 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar25 + lVar24 + uVar38 * 2),0);
              lVar25 = lVar25 + lVar30;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar76);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_7);
          }
          auVar76 = auVar72._0_16_;
          uVar23 = 0;
          lVar25 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar23 = uVar23 + 1;
              auVar76 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar25 + lVar19 + uVar38 * 2),0);
              lVar25 = lVar25 + param_2;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar76);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          lVar59 = lVar59 + 2;
          vpextrw_avx(auVar76,0);
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 2);
          lVar21 = lVar21 + 2;
          uVar23 = uVar18;
        } while (uVar38 < uVar26 >> 1);
      }
      uVar38 = 0;
      if (lVar21 < (longlong)param_5) {
        lStack_6f0 = lVar36;
        do {
          uVar23 = 0;
          auVar72 = ZEXT1664((undefined1  [16])0x0);
          lVar19 = 0;
          if (0 < (longlong)param_7) {
            do {
              auVar76 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar19 + lVar59 + lVar16 + uVar38),0);
              uVar23 = uVar23 + 1;
              lVar19 = lVar19 + lVar30;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar76);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_7);
          }
          uVar23 = 0;
          lVar19 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar76 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar19 + lVar59 + lVar68 + uVar38),0);
              uVar23 = uVar23 + 1;
              lVar19 = lVar19 + param_2;
              auVar76 = vpmaxub_avx(auVar72._0_16_,auVar76);
              auVar72 = ZEXT1664(auVar76);
            } while (uVar23 < param_8);
          }
          uVar38 = uVar38 + 1;
          (*pauVar69)[0] = auVar72[0];
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 1);
          uVar23 = uVar18;
        } while (uVar38 < param_5 - lVar21);
      }
      uVar23 = uVar23 + 1;
      uVar18 = uVar18 + param_2;
      lVar36 = lVar36 + param_4;
    } while (uVar23 < param_6 - lVar37);
  }
  return;
}

