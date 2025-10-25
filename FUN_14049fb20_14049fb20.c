
void FUN_14049fb20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9,int param_10)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulonglong *puVar4;
  ulonglong *puVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  longlong unaff_XMM13_Qa;
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  longlong lStack_468;
  ulonglong uStack_298;
  undefined1 (*pauStack_288) [16];
  undefined8 uStack_268;
  undefined8 uStack_258;
  undefined8 uStack_248;
  
  lVar26 = (param_7 * 3 + 2) * param_8;
  uVar33 = param_5 & 0xffffffffffffffe0;
  uVar10 = param_5 & 0xfffffffffffffffe;
  uVar37 = param_5 & 0xfffffffffffffff0;
  uVar34 = param_5 & 0xfffffffffffffff8;
  uVar30 = param_5 & 0xfffffffffffffffc;
  uVar25 = (ulonglong)*(ushort *)(param_9 + lVar26);
  uVar6 = *(ushort *)(param_9 + 2 + lVar26);
  lVar26 = 0;
  lVar40 = (longlong)param_10;
  uStack_298 = 0;
  uVar11 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar11) {
    lVar18 = param_2 * uVar25;
    lVar22 = lVar40 * (ulonglong)uVar6;
    lVar32 = param_2 + lVar22;
    lVar21 = (longlong)(int)(param_10 * (uint)uVar6);
    lVar14 = lVar22 + param_2 * 2;
    lVar19 = param_4 * 2;
    lVar16 = param_4 * 3;
    lVar15 = (uVar25 + 1) * param_2;
    lVar12 = param_2 * 3 + lVar22;
    lVar13 = (uVar25 + 2) * param_2;
    lVar20 = (uVar25 + 3) * param_2;
    do {
      lVar7 = param_2 * 4 * uStack_298;
      lVar35 = param_4 * 4 * uStack_298;
      lVar26 = 0;
      lVar9 = param_1 + lVar7;
      lVar7 = lVar7 + param_1;
      pauStack_288 = (undefined1 (*) [16])(param_3 + lVar35);
      lVar35 = lVar35 + param_3;
      if ((param_7 == 3) && (param_8 == 3)) {
        uVar23 = 0;
        if (0 < (longlong)uVar37) {
          uVar27 = uVar23;
          do {
            auVar46 = *(undefined1 (*) [16])(uVar23 + lVar7 + lVar32);
            auVar48 = *(undefined1 (*) [16])(uVar23 + lVar14 + lVar7);
            auVar50 = *(undefined1 (*) [16])(uVar23 + lVar12 + lVar7);
            auVar52 = *(undefined1 (*) [16])(uVar23 + lVar7 + lVar22 + param_2 * 4);
            uVar27 = uVar27 + 1;
            auVar47 = vpmaxub_avx(*(undefined1 (*) [16])(uVar23 + lVar7 + lVar18),
                                  *(undefined1 (*) [16])(uVar23 + lVar22 + lVar7));
            auVar49 = vpmaxub_avx(auVar48,*(undefined1 (*) [16])(uVar23 + lVar7 + lVar13));
            auVar47 = vpmaxub_avx(auVar47,*(undefined1 (*) [16])(uVar23 + lVar7 + lVar40 + lVar18));
            auVar47 = vpmaxub_avx(auVar47,auVar46);
            auVar49 = vpmaxub_avx(auVar49,*(undefined1 (*) [16])(uVar23 + lVar40 + lVar13 + lVar7));
            auVar47 = vpmaxub_avx(auVar47,*(undefined1 (*) [16])
                                           (uVar23 + lVar18 + lVar40 * 2 + lVar7));
            auVar49 = vpmaxub_avx(auVar49,auVar50);
            auVar47 = vpmaxub_avx(auVar47,auVar48);
            auVar46 = vpmaxub_avx(auVar46,*(undefined1 (*) [16])(uVar23 + lVar7 + lVar15));
            auVar46 = vpmaxub_avx(auVar46,*(undefined1 (*) [16])(uVar23 + lVar40 + lVar15 + lVar7));
            auVar46 = vpmaxub_avx(auVar46,auVar48);
            auVar46 = vpmaxub_avx(auVar46,*(undefined1 (*) [16])
                                           (uVar23 + lVar15 + lVar40 * 2 + lVar7));
            auVar46 = vpmaxub_avx(auVar46,auVar50);
            auVar48 = vpmaxub_avx(auVar49,*(undefined1 (*) [16])
                                           (uVar23 + lVar13 + lVar40 * 2 + lVar7));
            auVar48 = vpmaxub_avx(auVar48,auVar52);
            auVar50 = vpmaxub_avx(auVar50,*(undefined1 (*) [16])(uVar23 + lVar20 + lVar7));
            auVar50 = vpmaxub_avx(auVar50,*(undefined1 (*) [16])(uVar23 + lVar40 + lVar20 + lVar7));
            auVar50 = vpmaxub_avx(auVar50,auVar52);
            auVar50 = vpmaxub_avx(auVar50,*(undefined1 (*) [16])
                                           (uVar23 + lVar20 + lVar40 * 2 + lVar7));
            auVar50 = vpmaxub_avx(auVar50,*(undefined1 (*) [16])
                                           (uVar23 + param_2 * 5 + lVar22 + lVar7));
            *(undefined1 (*) [16])(uVar23 + lVar35) = auVar47;
            *(undefined1 (*) [16])(uVar23 + param_4 + lVar35) = auVar46;
            *(undefined1 (*) [16])(uVar23 + lVar35 + param_4 * 2) = auVar48;
            *(undefined1 (*) [16])(uVar23 + lVar35 + lVar16) = auVar50;
            uVar23 = uVar23 + 0x10;
          } while (uVar27 < uVar37 + 0xf >> 4);
          lVar26 = uVar27 * 0x10;
          lVar9 = lVar7 + lVar26;
          pauStack_288 = (undefined1 (*) [16])(lVar35 + lVar26);
        }
      }
      else {
        uVar23 = 0;
        if (0 < (longlong)uVar33) {
          lVar26 = 0;
          do {
            auVar55 = ZEXT1664((undefined1  [16])0x0);
            auVar54 = ZEXT1664((undefined1  [16])0x0);
            auVar42 = ZEXT1664((undefined1  [16])0x0);
            auVar56 = ZEXT1664((undefined1  [16])0x0);
            auVar57 = ZEXT1664((undefined1  [16])0x0);
            auVar58 = ZEXT1664((undefined1  [16])0x0);
            auVar59 = ZEXT1664((undefined1  [16])0x0);
            auVar60 = ZEXT1664((undefined1  [16])0x0);
            if (0 < (longlong)param_7) {
              uVar27 = 0;
              lVar31 = lVar7 + lVar18 + lVar26;
              lVar36 = lVar7 + lVar15 + lVar26;
              lVar38 = lVar7 + lVar13 + lVar26;
              lVar35 = lVar7 + lVar20 + lVar26;
              lVar8 = 0;
              do {
                pauVar17 = (undefined1 (*) [16])(lVar8 + lVar31);
                lVar28 = lVar8 + 0x10;
                pauVar1 = (undefined1 (*) [16])(lVar8 + lVar36);
                lVar39 = lVar8 + 0x10;
                pauVar2 = (undefined1 (*) [16])(lVar8 + lVar38);
                lVar41 = lVar8 + 0x10;
                pauVar3 = (undefined1 (*) [16])(lVar8 + lVar35);
                lVar24 = lVar8 + 0x10;
                uVar27 = uVar27 + 1;
                lVar8 = lVar8 + param_10;
                auVar46 = vpmaxub_avx(auVar55._0_16_,*pauVar17);
                auVar55 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar54._0_16_,*pauVar1);
                auVar54 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar42._0_16_,*pauVar2);
                auVar42 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar56._0_16_,*pauVar3);
                auVar56 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar57._0_16_,*(undefined1 (*) [16])(lVar28 + lVar31));
                auVar57 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar58._0_16_,*(undefined1 (*) [16])(lVar39 + lVar36));
                auVar58 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar59._0_16_,*(undefined1 (*) [16])(lVar41 + lVar38));
                auVar59 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar60._0_16_,*(undefined1 (*) [16])(lVar24 + lVar35));
                auVar60 = ZEXT1664(auVar46);
              } while (uVar27 < param_7);
            }
            auVar53 = auVar60._0_16_;
            auVar51 = auVar59._0_16_;
            auVar49 = auVar58._0_16_;
            auVar47 = auVar57._0_16_;
            auVar52 = auVar56._0_16_;
            auVar48 = auVar54._0_16_;
            auVar46 = auVar55._0_16_;
            auVar50 = auVar42._0_16_;
            uVar27 = 0;
            lVar35 = 0;
            if (0 < (longlong)param_8) {
              lVar31 = lVar22 + lVar7 + lVar26;
              lVar36 = lVar32 + lVar7 + lVar26;
              lVar38 = lVar7 + lVar14 + lVar26;
              lVar8 = lVar7 + lVar12 + lVar26;
              do {
                pauVar17 = (undefined1 (*) [16])(lVar35 + lVar31);
                lVar28 = lVar35 + 0x10;
                pauVar1 = (undefined1 (*) [16])(lVar35 + lVar36);
                lVar39 = lVar35 + 0x10;
                pauVar2 = (undefined1 (*) [16])(lVar35 + lVar38);
                lVar41 = lVar35 + 0x10;
                pauVar3 = (undefined1 (*) [16])(lVar35 + lVar8);
                lVar24 = lVar35 + 0x10;
                uVar27 = uVar27 + 1;
                lVar35 = lVar35 + param_2;
                auVar46 = vpmaxub_avx(auVar55._0_16_,*pauVar17);
                auVar55 = ZEXT1664(auVar46);
                auVar48 = vpmaxub_avx(auVar54._0_16_,*pauVar1);
                auVar54 = ZEXT1664(auVar48);
                auVar50 = vpmaxub_avx(auVar42._0_16_,*pauVar2);
                auVar42 = ZEXT1664(auVar50);
                auVar52 = vpmaxub_avx(auVar56._0_16_,*pauVar3);
                auVar56 = ZEXT1664(auVar52);
                auVar47 = vpmaxub_avx(auVar57._0_16_,*(undefined1 (*) [16])(lVar28 + lVar31));
                auVar57 = ZEXT1664(auVar47);
                auVar49 = vpmaxub_avx(auVar58._0_16_,*(undefined1 (*) [16])(lVar39 + lVar36));
                auVar58 = ZEXT1664(auVar49);
                auVar51 = vpmaxub_avx(auVar59._0_16_,*(undefined1 (*) [16])(lVar41 + lVar38));
                auVar59 = ZEXT1664(auVar51);
                auVar53 = vpmaxub_avx(auVar60._0_16_,*(undefined1 (*) [16])(lVar24 + lVar8));
                auVar60 = ZEXT1664(auVar53);
              } while (uVar27 < param_8);
            }
            *pauStack_288 = auVar46;
            *(undefined1 (*) [16])(*pauStack_288 + param_4) = auVar48;
            *(undefined1 (*) [16])(*pauStack_288 + lVar19) = auVar50;
            *(undefined1 (*) [16])(*pauStack_288 + lVar16) = auVar52;
            pauStack_288[1] = auVar47;
            *(undefined1 (*) [16])(pauStack_288[1] + param_4) = auVar49;
            *(undefined1 (*) [16])(pauStack_288[1] + lVar19) = auVar51;
            *(undefined1 (*) [16])(pauStack_288[1] + lVar16) = auVar53;
            uVar23 = uVar23 + 1;
            lVar26 = lVar26 + 0x20;
            lVar9 = lVar9 + 0x20;
            pauStack_288 = pauStack_288 + 2;
          } while (uVar23 < uVar33 + 0x1f >> 5);
        }
        uVar23 = 0;
        lVar7 = 0;
        if (lVar26 < (longlong)uVar37) {
          lVar35 = lVar9 + lVar18;
          lVar8 = lVar9 + lVar12;
          lVar31 = lVar9 + lVar15;
          lVar39 = lVar22 + lVar9;
          uVar27 = (uVar37 + 0xf) - lVar26;
          lVar28 = lVar32 + lVar9;
          lVar36 = lVar9 + lVar13;
          lVar38 = lVar14 + lVar9;
          lVar41 = lVar20 + lVar9;
          do {
            auVar54 = ZEXT1664((undefined1  [16])0x0);
            auVar55 = ZEXT1664((undefined1  [16])0x0);
            auVar56 = ZEXT1664((undefined1  [16])0x0);
            auVar42 = ZEXT1664((undefined1  [16])0x0);
            if (0 < (longlong)param_7) {
              uVar29 = 0;
              lVar24 = 0;
              do {
                pauVar17 = (undefined1 (*) [16])(lVar24 + lVar35 + lVar7);
                pauVar1 = (undefined1 (*) [16])(lVar24 + lVar31 + lVar7);
                pauVar2 = (undefined1 (*) [16])(lVar24 + lVar36 + lVar7);
                pauVar3 = (undefined1 (*) [16])(lVar24 + lVar41 + lVar7);
                uVar29 = uVar29 + 1;
                lVar24 = lVar24 + param_10;
                auVar46 = vpmaxub_avx(auVar54._0_16_,*pauVar17);
                auVar54 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar55._0_16_,*pauVar1);
                auVar55 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar56._0_16_,*pauVar2);
                auVar56 = ZEXT1664(auVar46);
                auVar46 = vpmaxub_avx(auVar42._0_16_,*pauVar3);
                auVar42 = ZEXT1664(auVar46);
              } while (uVar29 < param_7);
            }
            auVar52 = auVar42._0_16_;
            auVar50 = auVar56._0_16_;
            auVar48 = auVar55._0_16_;
            auVar46 = auVar54._0_16_;
            uVar29 = 0;
            lVar24 = 0;
            if (0 < (longlong)param_8) {
              do {
                pauVar17 = (undefined1 (*) [16])(lVar24 + lVar39 + lVar7);
                pauVar1 = (undefined1 (*) [16])(lVar24 + lVar28 + lVar7);
                pauVar2 = (undefined1 (*) [16])(lVar24 + lVar38 + lVar7);
                pauVar3 = (undefined1 (*) [16])(lVar24 + lVar8 + lVar7);
                uVar29 = uVar29 + 1;
                lVar24 = lVar24 + param_2;
                auVar46 = vpmaxub_avx(auVar54._0_16_,*pauVar17);
                auVar54 = ZEXT1664(auVar46);
                auVar48 = vpmaxub_avx(auVar55._0_16_,*pauVar1);
                auVar55 = ZEXT1664(auVar48);
                auVar50 = vpmaxub_avx(auVar56._0_16_,*pauVar2);
                auVar56 = ZEXT1664(auVar50);
                auVar52 = vpmaxub_avx(auVar42._0_16_,*pauVar3);
                auVar42 = ZEXT1664(auVar52);
              } while (uVar29 < param_8);
            }
            uVar23 = uVar23 + 1;
            *pauStack_288 = auVar46;
            *(undefined1 (*) [16])(*pauStack_288 + param_4) = auVar48;
            *(undefined1 (*) [16])(*pauStack_288 + lVar19) = auVar50;
            *(undefined1 (*) [16])(*pauStack_288 + lVar16) = auVar52;
            lVar9 = lVar9 + 0x10;
            pauStack_288 = pauStack_288 + 1;
            lVar26 = lVar26 + 0x10;
            lVar7 = lVar7 + 0x10;
          } while (uVar23 < uVar27 >> 4);
        }
      }
      uVar23 = 0;
      if (lVar26 < (longlong)uVar34) {
        lVar7 = lVar9 + lVar15;
        lVar35 = lVar9 + lVar13;
        lVar8 = lVar18 + lVar9;
        lVar31 = lVar21 + param_2 * 3 + lVar9;
        lVar28 = lVar21 + lVar9;
        lVar38 = param_2 + lVar21 + lVar9;
        uVar27 = (uVar34 + 7) - lVar26;
        lVar36 = lVar21 + param_2 * 2 + lVar9;
        lVar39 = lVar20 + lVar9;
        do {
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar54 = ZEXT1664((undefined1  [16])0x0);
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          auVar56 = ZEXT1664((undefined1  [16])0x0);
          uStack_268 = 0;
          uStack_258 = 0;
          uStack_248 = 0;
          if (0 < (longlong)param_7) {
            auVar55 = ZEXT1664((undefined1  [16])0x0);
            uVar29 = 0;
            auVar54 = ZEXT1664((undefined1  [16])0x0);
            auVar42 = ZEXT1664((undefined1  [16])0x0);
            lVar41 = 0;
            do {
              uVar29 = uVar29 + 1;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = *(ulonglong *)(lVar41 + lVar8 + uVar23 * 8);
              auVar46 = vpmaxub_avx(auVar56._0_16_,auVar46);
              auVar56 = ZEXT1664(auVar46);
              puVar4 = (ulonglong *)(lVar41 + lVar35 + uVar23 * 8);
              auVar48._8_8_ = 0;
              auVar48._0_8_ = *(ulonglong *)(lVar41 + lVar7 + uVar23 * 8);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar48);
              uStack_268 = auVar46._0_8_;
              auVar55 = ZEXT1664(auVar46);
              puVar5 = (ulonglong *)(lVar41 + lVar39 + uVar23 * 8);
              lVar41 = lVar41 + param_10;
              auVar50._8_8_ = 0;
              auVar50._0_8_ = *puVar4;
              auVar46 = vpmaxub_avx(auVar54._0_16_,auVar50);
              uStack_258 = auVar46._0_8_;
              auVar54 = ZEXT1664(auVar46);
              auVar52._8_8_ = 0;
              auVar52._0_8_ = *puVar5;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar52);
              uStack_248 = auVar46._0_8_;
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          uVar45 = auVar56._0_8_;
          uVar29 = 0;
          lVar41 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar29 = uVar29 + 1;
              auVar47._8_8_ = 0;
              auVar47._0_8_ = *(ulonglong *)(lVar41 + lVar28 + uVar23 * 8);
              auVar46 = vpmaxub_avx(auVar56._0_16_,auVar47);
              auVar56 = ZEXT1664(auVar46);
              uVar45 = auVar46._0_8_;
              puVar4 = (ulonglong *)(lVar41 + lVar36 + uVar23 * 8);
              auVar49._8_8_ = 0;
              auVar49._0_8_ = *(ulonglong *)(lVar41 + lVar38 + uVar23 * 8);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar49);
              uStack_268 = auVar46._0_8_;
              auVar55 = ZEXT1664(auVar46);
              puVar5 = (ulonglong *)(lVar41 + lVar31 + uVar23 * 8);
              lVar41 = lVar41 + param_2;
              auVar51._8_8_ = 0;
              auVar51._0_8_ = *puVar4;
              auVar46 = vpmaxub_avx(auVar54._0_16_,auVar51);
              uStack_258 = auVar46._0_8_;
              auVar54 = ZEXT1664(auVar46);
              auVar53._8_8_ = 0;
              auVar53._0_8_ = *puVar5;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar53);
              uStack_248 = auVar46._0_8_;
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_8);
          }
          *(undefined8 *)*pauStack_288 = uVar45;
          uVar23 = uVar23 + 1;
          lVar9 = lVar9 + 8;
          *(undefined8 *)(*pauStack_288 + param_4) = uStack_268;
          lVar26 = lVar26 + 8;
          *(undefined8 *)(*pauStack_288 + lVar19) = uStack_258;
          *(undefined8 *)(*pauStack_288 + lVar16) = uStack_248;
          pauStack_288 = (undefined1 (*) [16])(*pauStack_288 + 8);
        } while (uVar23 < uVar27 >> 3);
      }
      uVar23 = 0;
      if (lVar26 < (longlong)uVar30) {
        lVar7 = lVar9 + lVar15;
        lVar35 = lVar9 + lVar13;
        lVar8 = lVar9 + lVar18;
        lVar31 = lVar12 + lVar9;
        lVar28 = lVar22 + lVar9;
        lVar38 = lVar32 + lVar9;
        uVar27 = (uVar30 + 3) - lVar26;
        lVar36 = lVar14 + lVar9;
        lVar39 = lVar20 + lVar9;
        do {
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar56 = ZEXT1664((undefined1  [16])0x0);
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          auVar54 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_7) {
            uVar29 = 0;
            lVar41 = 0;
            do {
              auVar46 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar8 + uVar23 * 4),0);
              uVar29 = uVar29 + 1;
              auVar48 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar7 + uVar23 * 4),0);
              auVar50 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar35 + uVar23 * 4),0);
              auVar52 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar39 + uVar23 * 4),0);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar46);
              auVar55 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar56._0_16_,auVar48);
              auVar56 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar50);
              auVar42 = ZEXT1664(auVar46);
              lVar41 = lVar41 + param_10;
              auVar46 = vpmaxub_avx(auVar54._0_16_,auVar52);
              auVar54 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          uVar29 = 0;
          lVar41 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar46 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar28 + uVar23 * 4),0);
              uVar29 = uVar29 + 1;
              auVar48 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar38 + uVar23 * 4),0);
              auVar50 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar36 + uVar23 * 4),0);
              auVar52 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar41 + lVar31 + uVar23 * 4),0);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar46);
              auVar55 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar56._0_16_,auVar48);
              auVar56 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar50);
              auVar42 = ZEXT1664(auVar46);
              lVar41 = lVar41 + param_2;
              auVar46 = vpmaxub_avx(auVar54._0_16_,auVar52);
              auVar54 = ZEXT1664(auVar46);
            } while (uVar29 < param_8);
          }
          uVar23 = uVar23 + 1;
          lVar9 = lVar9 + 4;
          *(int *)*pauStack_288 = auVar55._0_4_;
          lVar26 = lVar26 + 4;
          *(int *)(*pauStack_288 + param_4) = auVar56._0_4_;
          *(int *)(*pauStack_288 + lVar19) = auVar42._0_4_;
          *(int *)(*pauStack_288 + lVar16) = auVar54._0_4_;
          pauStack_288 = (undefined1 (*) [16])(*pauStack_288 + 4);
        } while (uVar23 < uVar27 >> 2);
      }
      uVar23 = 0;
      if (lVar26 < (longlong)uVar10) {
        lVar7 = lVar9 + lVar15;
        lVar35 = lVar9 + lVar13;
        lVar8 = lVar9 + lVar18;
        lVar31 = lVar12 + lVar9;
        lVar28 = lVar22 + lVar9;
        lVar38 = lVar32 + lVar9;
        uVar27 = (uVar10 + 1) - lVar26;
        lVar36 = lVar14 + lVar9;
        lVar39 = lVar20 + lVar9;
        do {
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar56 = ZEXT1664((undefined1  [16])0x0);
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          auVar54 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_7) {
            uVar29 = 0;
            lVar41 = 0;
            do {
              uVar29 = uVar29 + 1;
              auVar46 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar8 + uVar23 * 2),0);
              auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar7 + uVar23 * 2),0);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar46);
              auVar55 = ZEXT1664(auVar46);
              auVar46 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar35 + uVar23 * 2),0);
              auVar48 = vpmaxub_avx(auVar56._0_16_,auVar48);
              auVar56 = ZEXT1664(auVar48);
              auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar39 + uVar23 * 2),0);
              lVar41 = lVar41 + param_10;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar46);
              auVar42 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar54._0_16_,auVar48);
              auVar54 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          auVar52 = auVar54._0_16_;
          auVar50 = auVar42._0_16_;
          auVar48 = auVar56._0_16_;
          auVar46 = auVar55._0_16_;
          uVar29 = 0;
          lVar41 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar29 = uVar29 + 1;
              auVar46 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar28 + uVar23 * 2),0);
              auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar38 + uVar23 * 2),0);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar46);
              auVar55 = ZEXT1664(auVar46);
              auVar50 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar36 + uVar23 * 2),0);
              auVar48 = vpmaxub_avx(auVar56._0_16_,auVar48);
              auVar56 = ZEXT1664(auVar48);
              auVar52 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar41 + lVar31 + uVar23 * 2),0);
              lVar41 = lVar41 + param_2;
              auVar50 = vpmaxub_avx(auVar42._0_16_,auVar50);
              auVar42 = ZEXT1664(auVar50);
              auVar52 = vpmaxub_avx(auVar54._0_16_,auVar52);
              auVar54 = ZEXT1664(auVar52);
            } while (uVar29 < param_8);
          }
          uVar23 = uVar23 + 1;
          lVar9 = lVar9 + 2;
          vpextrw_avx(auVar46,0);
          lVar26 = lVar26 + 2;
          vpextrw_avx(auVar48,0);
          vpextrw_avx(auVar50,0);
          vpextrw_avx(auVar52,0);
          pauStack_288 = (undefined1 (*) [16])(*pauStack_288 + 2);
        } while (uVar23 < uVar27 >> 1);
      }
      uVar23 = 0;
      if (lVar26 < (longlong)param_5) {
        do {
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar56 = ZEXT1664((undefined1  [16])0x0);
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          auVar54 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_7) {
            uVar27 = 0;
            lVar7 = 0;
            do {
              auVar46 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar9 + lVar18 + uVar23),0);
              uVar27 = uVar27 + 1;
              auVar48 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar9 + lVar15 + uVar23),0);
              auVar50 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar9 + lVar13 + uVar23),0);
              auVar52 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar9 + lVar20 + uVar23),0);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar46);
              auVar55 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar56._0_16_,auVar48);
              auVar56 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar50);
              auVar42 = ZEXT1664(auVar46);
              lVar7 = lVar7 + param_10;
              auVar46 = vpmaxub_avx(auVar54._0_16_,auVar52);
              auVar54 = ZEXT1664(auVar46);
            } while (uVar27 < param_7);
          }
          uVar27 = 0;
          lVar7 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar46 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar22 + lVar9 + uVar23),0);
              uVar27 = uVar27 + 1;
              auVar48 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar9 + lVar32 + uVar23),0);
              auVar50 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar9 + lVar14 + uVar23),0);
              auVar52 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar7 + lVar9 + lVar12 + uVar23),0);
              auVar46 = vpmaxub_avx(auVar55._0_16_,auVar46);
              auVar55 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar56._0_16_,auVar48);
              auVar56 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar50);
              auVar42 = ZEXT1664(auVar46);
              lVar7 = lVar7 + param_2;
              auVar46 = vpmaxub_avx(auVar54._0_16_,auVar52);
              auVar54 = ZEXT1664(auVar46);
            } while (uVar27 < param_8);
          }
          uVar23 = uVar23 + 1;
          (*pauStack_288)[0] = auVar55[0];
          (*pauStack_288)[param_4] = auVar56[0];
          (*pauStack_288)[lVar19] = auVar42[0];
          (*pauStack_288)[lVar16] = auVar54[0];
          pauStack_288 = (undefined1 (*) [16])(*pauStack_288 + 1);
        } while (uVar23 < param_5 - lVar26);
      }
      lVar26 = uStack_298 * 4 + 4;
      uStack_298 = uStack_298 + 1;
      lStack_468 = unaff_XMM13_Qa;
    } while (uStack_298 <
             (ulonglong)
             ((longlong)(((ulonglong)((longlong)(uVar11 + 3) >> 1) >> 0x3e) + 3 + uVar11) >> 2));
  }
  uVar11 = 0;
  lVar32 = 0;
  lVar40 = 0;
  if (lVar26 < (longlong)param_6) {
    lVar14 = param_2 * lVar26;
    lVar12 = uVar25 * param_2;
    lVar16 = (longlong)param_10 * (ulonglong)uVar6;
    lVar19 = (longlong)(int)(param_10 * (uint)uVar6);
    do {
      uVar23 = 0;
      pauVar17 = (undefined1 (*) [16])(param_3 + lVar26 * param_4 + lVar40);
      lVar13 = param_1 + lVar14 + lVar32;
      lVar15 = lVar32;
      uVar25 = uVar23;
      if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        lVar18 = lVar26 * param_4 + param_3 + lVar40;
        uVar27 = 0;
        do {
          auVar54 = ZEXT1664((undefined1  [16])0x0);
          uVar25 = 0;
          auVar56 = ZEXT1664((undefined1  [16])0x0);
          lVar15 = 0;
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_7) {
            auVar54 = ZEXT1664((undefined1  [16])0x0);
            auVar56 = ZEXT1664((undefined1  [16])0x0);
            lVar20 = param_1 + lVar12 + lVar14 + lVar32 + uVar27;
            auVar42 = ZEXT1664((undefined1  [16])0x0);
            auVar55 = ZEXT1664((undefined1  [16])0x0);
            do {
              pauVar1 = (undefined1 (*) [16])
                        (lVar15 + ((param_2 + param_1) - (param_2 - lVar12)) + lVar14 + lVar32 +
                                  uVar27);
              lVar21 = lVar15 + 0x10;
              lVar22 = lVar15 + 0x20;
              lVar9 = lVar15 + 0x30;
              uVar25 = uVar25 + 1;
              lVar15 = lVar15 + param_10;
              auVar46 = vpmaxub_avx(auVar54._0_16_,*pauVar1);
              auVar54 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar56._0_16_,*(undefined1 (*) [16])(lVar21 + lVar20));
              auVar56 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar42._0_16_,*(undefined1 (*) [16])(lVar22 + lVar20));
              auVar42 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar55._0_16_,*(undefined1 (*) [16])(lVar9 + lVar20));
              auVar55 = ZEXT1664(auVar46);
            } while (uVar25 < param_7);
          }
          auVar52 = auVar55._0_16_;
          auVar50 = auVar42._0_16_;
          auVar48 = auVar56._0_16_;
          auVar46 = auVar54._0_16_;
          uVar25 = 0;
          lVar15 = 0;
          if (0 < (longlong)param_8) {
            lVar20 = uVar27 + lVar14 + param_1 + lVar19 + lVar32;
            do {
              pauVar1 = (undefined1 (*) [16])
                        (lVar15 + uVar27 + ((param_2 + param_1) - (param_2 - lVar19)) + lVar14 +
                                           lVar32);
              lVar21 = lVar15 + 0x10;
              lVar22 = lVar15 + 0x20;
              lVar9 = lVar15 + 0x30;
              uVar25 = uVar25 + 1;
              lVar15 = lVar15 + param_2;
              auVar46 = vpmaxub_avx(auVar54._0_16_,*pauVar1);
              auVar54 = ZEXT1664(auVar46);
              auVar48 = vpmaxub_avx(auVar56._0_16_,*(undefined1 (*) [16])(lVar21 + lVar20));
              auVar56 = ZEXT1664(auVar48);
              auVar50 = vpmaxub_avx(auVar42._0_16_,*(undefined1 (*) [16])(lVar22 + lVar20));
              auVar42 = ZEXT1664(auVar50);
              auVar52 = vpmaxub_avx(auVar55._0_16_,*(undefined1 (*) [16])(lVar9 + lVar20));
              auVar55 = ZEXT1664(auVar52);
            } while (uVar25 < param_8);
          }
          uVar23 = uVar23 + 1;
          uVar25 = uVar27 + 0x40;
          lVar13 = lVar13 + 0x40;
          pauVar17 = pauVar17 + 4;
          *(undefined1 (*) [16])(lVar18 + uVar27) = auVar46;
          *(undefined1 (*) [16])(lVar18 + 0x10 + uVar27) = auVar48;
          *(undefined1 (*) [16])(lVar18 + 0x20 + uVar27) = auVar50;
          *(undefined1 (*) [16])(lVar18 + 0x30 + uVar27) = auVar52;
          uVar27 = uVar25;
          lVar15 = lVar40;
          lStack_468 = lVar40;
        } while (uVar23 < (param_5 & 0xffffffffffffffc0) + 0x3f >> 6);
      }
      uVar23 = 0;
      lVar32 = 0;
      if ((longlong)uVar25 < (longlong)uVar33) {
        lVar18 = lVar16 + lVar13;
        uVar27 = (uVar33 + 0x1f) - uVar25;
        lVar20 = lVar13 + lVar12;
        do {
          auVar54 = ZEXT1664((undefined1  [16])0x0);
          uVar29 = 0;
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          lVar15 = 0;
          if (0 < (longlong)param_7) {
            lVar21 = lVar20 + lVar32;
            do {
              pauVar1 = (undefined1 (*) [16])(lVar15 + lVar21);
              lVar22 = lVar15 + 0x10;
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_10;
              auVar46 = vpmaxub_avx(auVar54._0_16_,*pauVar1);
              auVar54 = ZEXT1664(auVar46);
              auVar46 = vpmaxub_avx(auVar42._0_16_,*(undefined1 (*) [16])(lVar22 + lVar21));
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          auVar48 = auVar42._0_16_;
          auVar46 = auVar54._0_16_;
          uVar29 = 0;
          lVar15 = 0;
          if (0 < (longlong)param_8) {
            lVar21 = lVar18 + lVar32;
            do {
              pauVar1 = (undefined1 (*) [16])(lVar15 + lVar21);
              lVar22 = lVar15 + 0x10;
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_2;
              auVar46 = vpmaxub_avx(auVar54._0_16_,*pauVar1);
              auVar54 = ZEXT1664(auVar46);
              auVar48 = vpmaxub_avx(auVar42._0_16_,*(undefined1 (*) [16])(lVar22 + lVar21));
              auVar42 = ZEXT1664(auVar48);
            } while (uVar29 < param_8);
          }
          uVar23 = uVar23 + 1;
          lVar13 = lVar13 + 0x20;
          *pauVar17 = auVar46;
          pauVar17[1] = auVar48;
          pauVar17 = pauVar17 + 2;
          uVar25 = uVar25 + 0x20;
          lVar32 = lVar32 + 0x20;
          lVar15 = lVar40;
          lStack_468 = lVar40;
        } while (uVar23 < uVar27 >> 5);
      }
      uVar23 = 0;
      lVar32 = 0;
      if ((longlong)uVar25 < (longlong)uVar37) {
        lVar18 = lVar16 + lVar13;
        uVar27 = (uVar37 + 0xf) - uVar25;
        lVar20 = lVar13 + lVar12;
        do {
          uVar29 = 0;
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          lVar15 = 0;
          if (0 < (longlong)param_7) {
            do {
              pauVar1 = (undefined1 (*) [16])(lVar15 + lVar20 + lVar32);
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_10;
              auVar46 = vpmaxub_avx(auVar42._0_16_,*pauVar1);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          auVar46 = auVar42._0_16_;
          uVar29 = 0;
          lVar15 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar1 = (undefined1 (*) [16])(lVar15 + lVar18 + lVar32);
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_2;
              auVar46 = vpmaxub_avx(auVar42._0_16_,*pauVar1);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_8);
          }
          uVar23 = uVar23 + 1;
          lVar13 = lVar13 + 0x10;
          *pauVar17 = auVar46;
          pauVar17 = pauVar17 + 1;
          uVar25 = uVar25 + 0x10;
          lVar32 = lVar32 + 0x10;
          lVar15 = lVar40;
          lStack_468 = lVar40;
        } while (uVar23 < uVar27 >> 4);
      }
      uVar23 = 0;
      if ((longlong)uVar25 < (longlong)uVar34) {
        lVar32 = lVar12 + lVar13;
        uVar27 = (uVar34 + 7) - uVar25;
        lVar18 = lVar19 + lVar13;
        do {
          uVar29 = 0;
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          lVar15 = 0;
          if (0 < (longlong)param_7) {
            do {
              puVar4 = (ulonglong *)(lVar15 + lVar32 + uVar23 * 8);
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_10;
              auVar43._8_8_ = 0;
              auVar43._0_8_ = *puVar4;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar43);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          uVar45 = auVar42._0_8_;
          uVar29 = 0;
          lVar15 = 0;
          if (0 < (longlong)param_8) {
            do {
              puVar4 = (ulonglong *)(lVar15 + lVar18 + uVar23 * 8);
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_2;
              auVar44._8_8_ = 0;
              auVar44._0_8_ = *puVar4;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar44);
              auVar42 = ZEXT1664(auVar46);
              uVar45 = auVar46._0_8_;
            } while (uVar29 < param_8);
          }
          uVar23 = uVar23 + 1;
          lVar13 = lVar13 + 8;
          *(undefined8 *)*pauVar17 = uVar45;
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + 8);
          uVar25 = uVar25 + 8;
          lVar15 = lVar40;
          lStack_468 = lVar40;
        } while (uVar23 < uVar27 >> 3);
      }
      uVar23 = 0;
      if ((longlong)uVar25 < (longlong)uVar30) {
        lVar32 = lVar16 + lVar13;
        uVar27 = (uVar30 + 3) - uVar25;
        lVar18 = lVar13 + lVar12;
        do {
          uVar29 = 0;
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          lVar15 = 0;
          if (0 < (longlong)param_7) {
            do {
              auVar46 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar15 + lVar18 + uVar23 * 4),0);
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_10;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar46);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          uVar29 = 0;
          lVar15 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar46 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar15 + lVar32 + uVar23 * 4),0);
              uVar29 = uVar29 + 1;
              lVar15 = lVar15 + param_2;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar46);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_8);
          }
          uVar23 = uVar23 + 1;
          lVar13 = lVar13 + 4;
          *(int *)*pauVar17 = auVar42._0_4_;
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + 4);
          uVar25 = uVar25 + 4;
          lVar15 = lVar40;
          lStack_468 = lVar40;
        } while (uVar23 < uVar27 >> 2);
      }
      uVar23 = 0;
      if ((longlong)uVar25 < (longlong)uVar10) {
        lVar32 = lVar16 + lVar13;
        uVar27 = (uVar10 + 1) - uVar25;
        lVar18 = lVar13 + lVar12;
        do {
          uVar29 = 0;
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          lVar15 = 0;
          if (0 < (longlong)param_7) {
            do {
              uVar29 = uVar29 + 1;
              auVar46 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar15 + lVar18 + uVar23 * 2),0);
              lVar15 = lVar15 + param_10;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar46);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_7);
          }
          auVar46 = auVar42._0_16_;
          uVar29 = 0;
          lVar15 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar29 = uVar29 + 1;
              auVar46 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar15 + lVar32 + uVar23 * 2),0);
              lVar15 = lVar15 + param_2;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar46);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar29 < param_8);
          }
          uVar23 = uVar23 + 1;
          lVar13 = lVar13 + 2;
          vpextrw_avx(auVar46,0);
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + 2);
          uVar25 = uVar25 + 2;
          lVar15 = lVar40;
          lStack_468 = lVar40;
        } while (uVar23 < uVar27 >> 1);
      }
      uVar23 = 0;
      if ((longlong)uVar25 < (longlong)param_5) {
        do {
          uVar27 = 0;
          auVar42 = ZEXT1664((undefined1  [16])0x0);
          lVar32 = 0;
          if (0 < (longlong)param_7) {
            do {
              auVar46 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar32 + lVar13 + lVar12 + uVar23),0);
              uVar27 = uVar27 + 1;
              lVar32 = lVar32 + param_10;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar46);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar27 < param_7);
          }
          uVar27 = 0;
          lVar32 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar46 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar32 + lVar13 + lVar16 + uVar23),0);
              uVar27 = uVar27 + 1;
              lVar32 = lVar32 + param_2;
              auVar46 = vpmaxub_avx(auVar42._0_16_,auVar46);
              auVar42 = ZEXT1664(auVar46);
            } while (uVar27 < param_8);
          }
          uVar23 = uVar23 + 1;
          (*pauVar17)[0] = auVar42[0];
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + 1);
          lVar15 = lStack_468;
        } while (uVar23 < param_5 - uVar25);
      }
      uVar11 = uVar11 + 1;
      lVar32 = lVar15 + param_2;
      lVar40 = lVar40 + param_4;
    } while (uVar11 < param_6 - lVar26);
  }
  return;
}

