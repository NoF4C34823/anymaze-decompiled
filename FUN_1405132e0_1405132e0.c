
void FUN_1405132e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,longlong param_7,ulonglong param_8,
                  longlong param_9,int param_10)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined1 auVar44 [32];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [32];
  undefined1 auVar54 [32];
  undefined1 auVar56 [32];
  undefined1 auVar58 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar64 [32];
  ulonglong uStack_2a8;
  undefined1 (*pauStack_298) [32];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auVar45 [64];
  undefined1 auVar53 [64];
  undefined1 auVar55 [64];
  undefined1 auVar57 [64];
  undefined1 auVar59 [64];
  undefined1 auVar61 [64];
  undefined1 auVar63 [64];
  undefined1 auVar65 [64];
  
  lVar33 = (longlong)param_10;
  uVar16 = param_5 & 0xfffffffffffffffe;
  lVar21 = 0;
  uVar23 = param_5 & 0xffffffffffffffc0;
  uVar27 = param_5 & 0xffffffffffffffe0;
  uVar38 = param_5 & 0xfffffffffffffff0;
  uVar42 = param_5 & 0xfffffffffffffff8;
  uVar22 = param_5 & 0xfffffffffffffffc;
  uVar25 = 0;
  uVar17 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar17) {
    lVar18 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
    lVar29 = param_4 * 3;
    lVar31 = param_2 * 3;
    lVar19 = param_2 * -4 + param_1;
    lVar26 = lVar19 + param_2 * 4;
    do {
      lVar21 = 0;
      uVar28 = 0;
      lVar39 = param_2 * 4 * uVar25;
      pauVar13 = (undefined1 (*) [32])(param_4 * 4 * uVar25 + param_3);
      lVar20 = param_1 + lVar39;
      if (0 < (longlong)uVar23) {
        lVar21 = 0;
        do {
          auVar53 = ZEXT3264((undefined1  [32])0x0);
          auVar52 = (undefined1  [32])0x0;
          auVar55 = ZEXT3264((undefined1  [32])0x0);
          auVar54 = (undefined1  [32])0x0;
          auVar57 = ZEXT3264((undefined1  [32])0x0);
          auVar56 = (undefined1  [32])0x0;
          auVar59 = ZEXT3264((undefined1  [32])0x0);
          auVar58 = (undefined1  [32])0x0;
          auVar61 = ZEXT3264((undefined1  [32])0x0);
          auVar60 = (undefined1  [32])0x0;
          auVar63 = ZEXT3264((undefined1  [32])0x0);
          auVar62 = (undefined1  [32])0x0;
          auVar65 = ZEXT3264((undefined1  [32])0x0);
          auVar64 = (undefined1  [32])0x0;
          auVar45 = ZEXT3264((undefined1  [32])0x0);
          auVar44 = (undefined1  [32])0x0;
          if (0 < (longlong)param_8) {
            uVar14 = 0;
            lVar32 = lVar26 + lVar39 + lVar21;
            lVar12 = 0;
            do {
              uVar36 = 0;
              lVar40 = 0;
              uVar35 = (ulonglong)*(ushort *)(lVar18 + uVar14 * 4);
              if (uVar35 != 0) {
                lVar34 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar14 * 4) * param_10);
                lVar43 = lVar12 + lVar34;
                do {
                  pauVar1 = (undefined1 (*) [32])(lVar40 + lVar32 + lVar12 + lVar34);
                  uVar36 = uVar36 + 1;
                  lVar24 = lVar40 + 0x20;
                  pauVar2 = (undefined1 (*) [32])
                            (lVar40 + param_2 + lVar26 + lVar39 + lVar21 + lVar12 + lVar34);
                  lVar30 = lVar40 + 0x20;
                  pauVar3 = (undefined1 (*) [32])
                            (lVar40 + lVar26 + param_2 * 2 + lVar39 + lVar21 + lVar12 + lVar34);
                  lVar41 = lVar40 + 0x20;
                  pauVar4 = (undefined1 (*) [32])
                            (lVar40 + lVar34 + lVar39 + lVar31 + lVar26 + lVar21 + lVar12);
                  lVar11 = lVar40 + 0x20;
                  lVar40 = lVar40 + lVar33;
                  auVar44 = vpmaxub_avx2(auVar53._0_32_,*pauVar1);
                  auVar53 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar55._0_32_,
                                         *(undefined1 (*) [32])(lVar24 + lVar43 + lVar32));
                  auVar55 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar57._0_32_,*pauVar2);
                  auVar57 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar59._0_32_,
                                         *(undefined1 (*) [32])
                                          (lVar30 + param_2 * 5 + lVar19 + lVar39 + lVar21 + lVar43)
                                        );
                  auVar59 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar61._0_32_,*pauVar3);
                  auVar61 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar63._0_32_,
                                         *(undefined1 (*) [32])
                                          (lVar41 + param_2 * 6 + lVar19 + lVar39 + lVar21 + lVar43)
                                        );
                  auVar63 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar65._0_32_,*pauVar4);
                  auVar65 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar45._0_32_,
                                         *(undefined1 (*) [32])
                                          (lVar11 + param_2 * 7 + lVar19 + lVar39 + lVar21 + lVar43)
                                        );
                  auVar45 = ZEXT3264(auVar44);
                } while (uVar36 < uVar35);
              }
              auVar64 = auVar65._0_32_;
              auVar62 = auVar63._0_32_;
              auVar60 = auVar61._0_32_;
              auVar58 = auVar59._0_32_;
              auVar56 = auVar57._0_32_;
              auVar54 = auVar55._0_32_;
              auVar52 = auVar53._0_32_;
              auVar44 = auVar45._0_32_;
              uVar14 = uVar14 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar14 < param_8);
          }
          uVar28 = uVar28 + 1;
          *pauVar13 = auVar52;
          lVar21 = lVar21 + 0x40;
          pauVar13[1] = auVar54;
          *(undefined1 (*) [32])(*pauVar13 + param_4) = auVar56;
          *(undefined1 (*) [32])(pauVar13[1] + param_4) = auVar58;
          *(undefined1 (*) [32])(*pauVar13 + param_4 * 2) = auVar60;
          *(undefined1 (*) [32])(pauVar13[1] + param_4 * 2) = auVar62;
          *(undefined1 (*) [32])(*pauVar13 + lVar29) = auVar64;
          *(undefined1 (*) [32])(pauVar13[1] + lVar29) = auVar44;
          lVar20 = lVar20 + 0x40;
          pauVar13 = pauVar13 + 2;
        } while (uVar28 < uVar23 + 0x3f >> 6);
      }
      lVar39 = lVar21;
      lVar12 = lVar20;
      if (lVar21 < (longlong)uVar27) {
        uVar28 = 1;
        uVar14 = 0;
        uVar35 = (uVar27 - lVar21) + 0x1f >> 8;
        if (uVar35 != 0) {
          lVar24 = 0;
          lVar30 = 0;
          lVar41 = 0;
          lVar34 = 0;
          lVar12 = 0;
          lVar32 = lVar20;
          lVar40 = lVar24;
          lVar43 = lVar34;
          do {
            uVar14 = uVar14 + 1;
            lVar32 = lVar32 + 0x20;
            lVar12 = lVar12 + 0x20;
            lVar40 = lVar40 + 0x20;
            lVar24 = lVar24 + 0x20;
            lVar30 = lVar30 + 0x20;
            lVar41 = lVar41 + 0x20;
            lVar43 = lVar43 + 0x20;
            lVar34 = lVar34 + 0x20;
          } while (uVar14 < uVar35);
          uVar28 = uVar14 * 8 + 1;
          lVar12 = lVar32 + lVar12 + lVar40 + lVar24 + lVar30 + lVar41 + lVar43 + lVar34;
        }
        lVar32 = (uVar27 - 1) - lVar21;
        uVar14 = (longlong)(lVar32 + 0x20 + ((ulonglong)(lVar32 + 0x20 >> 4) >> 0x3b)) >> 5;
        if (uVar28 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x000140513b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_140513b14 + (byte)(&DAT_14308a690)[(uint)((int)uVar14 - (int)uVar28)]))();
          return;
        }
        uVar28 = 0;
        lVar32 = 0;
        do {
          auVar57 = ZEXT3264((undefined1  [32])0x0);
          auVar56 = (undefined1  [32])0x0;
          auVar55 = ZEXT3264((undefined1  [32])0x0);
          auVar54 = (undefined1  [32])0x0;
          auVar53 = ZEXT3264((undefined1  [32])0x0);
          auVar52 = (undefined1  [32])0x0;
          auVar45 = ZEXT3264((undefined1  [32])0x0);
          auVar44 = (undefined1  [32])0x0;
          if (0 < (longlong)param_8) {
            uVar14 = 0;
            lVar40 = 0;
            do {
              uVar36 = 0;
              uVar37 = (ulonglong)*(ushort *)(lVar18 + uVar14 * 4);
              lVar43 = 0;
              if (uVar37 != 0) {
                lVar34 = (ulonglong)*(ushort *)(lVar18 + 2 + uVar14 * 4) * lVar33;
                do {
                  pauVar1 = (undefined1 (*) [32])(lVar43 + lVar20 + lVar32 + lVar34 + lVar40);
                  uVar36 = uVar36 + 1;
                  pauVar2 = (undefined1 (*) [32])
                            (lVar43 + lVar34 + param_2 + lVar20 + lVar32 + lVar40);
                  pauVar3 = (undefined1 (*) [32])
                            (lVar43 + lVar20 + param_2 * 2 + lVar32 + lVar34 + lVar40);
                  pauVar4 = (undefined1 (*) [32])
                            (lVar43 + lVar20 + lVar31 + lVar32 + lVar34 + lVar40);
                  lVar43 = lVar43 + lVar33;
                  auVar44 = vpmaxub_avx2(auVar57._0_32_,*pauVar1);
                  auVar57 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar55._0_32_,*pauVar2);
                  auVar55 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar53._0_32_,*pauVar3);
                  auVar53 = ZEXT3264(auVar44);
                  auVar44 = vpmaxub_avx2(auVar45._0_32_,*pauVar4);
                  auVar45 = ZEXT3264(auVar44);
                } while (uVar36 < uVar37);
              }
              auVar44 = auVar45._0_32_;
              auVar52 = auVar53._0_32_;
              auVar54 = auVar55._0_32_;
              auVar56 = auVar57._0_32_;
              uVar14 = uVar14 + 1;
              lVar40 = lVar40 + param_2;
            } while (uVar14 < param_8);
          }
          uVar28 = uVar28 + 1;
          lVar32 = lVar32 + 0x20;
          *pauVar13 = auVar56;
          *(undefined1 (*) [32])(*pauVar13 + param_4) = auVar54;
          *(undefined1 (*) [32])(*pauVar13 + param_4 * 2) = auVar52;
          *(undefined1 (*) [32])(*pauVar13 + lVar29) = auVar44;
          pauVar13 = pauVar13 + 1;
        } while (uVar28 < (uVar27 + 0x1f) - lVar21 >> 5);
        uVar14 = 0;
        uVar28 = 1;
        if (uVar35 != 0) {
          lVar30 = 0;
          lVar40 = 0;
          lVar43 = 0;
          lVar24 = 0;
          lVar34 = 0;
          lVar20 = lVar21;
          lVar39 = lVar34;
          lVar32 = lVar24;
          do {
            uVar14 = uVar14 + 1;
            lVar20 = lVar20 + 0x20;
            lVar30 = lVar30 + 0x20;
            lVar40 = lVar40 + 0x20;
            lVar43 = lVar43 + 0x20;
            lVar24 = lVar24 + 0x20;
            lVar32 = lVar32 + 0x20;
            lVar39 = lVar39 + 0x20;
            lVar34 = lVar34 + 0x20;
          } while (uVar14 < (uVar27 - lVar21) + 0x1f >> 8);
          lVar39 = lVar20 + lVar30 + lVar40 + lVar43 + lVar24 + lVar32 + lVar39 + lVar34;
          uVar28 = uVar14 * 8 + 1;
        }
        lVar21 = (uVar27 - 1) - lVar21;
        uVar14 = (longlong)(lVar21 + 0x20 + ((ulonglong)(lVar21 + 0x20 >> 4) >> 0x3b)) >> 5;
        if (uVar28 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x000140513eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_140513ebb + (byte)(&DAT_14308a698)[(uint)((int)uVar14 - (int)uVar28)]))();
          return;
        }
      }
      uVar28 = 0;
      lVar20 = 0;
      lVar21 = lVar12;
      if (lVar39 < (longlong)uVar38) {
        uVar14 = (uVar38 + 0xf) - lVar39;
        do {
          auVar57 = ZEXT1664((undefined1  [16])0x0);
          auVar51 = (undefined1  [16])0x0;
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar50 = (undefined1  [16])0x0;
          auVar53 = ZEXT1664((undefined1  [16])0x0);
          auVar49 = (undefined1  [16])0x0;
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          auVar48 = (undefined1  [16])0x0;
          if (0 < (longlong)param_8) {
            uVar35 = 0;
            lVar32 = 0;
            do {
              uVar37 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar35 * 4);
              lVar40 = 0;
              if (uVar36 != 0) {
                lVar43 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar35 * 4) * param_10);
                do {
                  pauVar5 = (undefined1 (*) [16])(lVar40 + lVar12 + lVar20 + lVar32 + lVar43);
                  pauVar6 = (undefined1 (*) [16])
                            (lVar40 + lVar43 + param_2 + lVar12 + lVar20 + lVar32);
                  pauVar7 = (undefined1 (*) [16])
                            (lVar40 + lVar12 + param_2 * 2 + lVar20 + lVar32 + lVar43);
                  pauVar8 = (undefined1 (*) [16])
                            (lVar40 + lVar12 + lVar31 + lVar20 + lVar32 + lVar43);
                  uVar37 = uVar37 + 1;
                  lVar40 = lVar40 + lVar33;
                  auVar48 = vpmaxub_avx(auVar57._0_16_,*pauVar5);
                  auVar57 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar55._0_16_,*pauVar6);
                  auVar55 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar53._0_16_,*pauVar7);
                  auVar53 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar45._0_16_,*pauVar8);
                  auVar45 = ZEXT1664(auVar48);
                } while (uVar37 < uVar36);
              }
              auVar48 = auVar45._0_16_;
              auVar49 = auVar53._0_16_;
              auVar50 = auVar55._0_16_;
              auVar51 = auVar57._0_16_;
              uVar35 = uVar35 + 1;
              lVar32 = lVar32 + param_2;
            } while (uVar35 < param_8);
          }
          uVar28 = uVar28 + 1;
          lVar21 = lVar21 + 0x10;
          *(undefined1 (*) [16])*pauVar13 = auVar51;
          *(undefined1 (*) [16])(*pauVar13 + param_4) = auVar50;
          *(undefined1 (*) [16])(*pauVar13 + param_4 * 2) = auVar49;
          *(undefined1 (*) [16])(*pauVar13 + lVar29) = auVar48;
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 0x10);
          lVar39 = lVar39 + 0x10;
          lVar20 = lVar20 + 0x10;
        } while (uVar28 < uVar14 >> 4);
      }
      uVar28 = 0;
      lVar20 = lVar21;
      if (lVar39 < (longlong)uVar42) {
        uVar14 = (uVar42 + 7) - lVar39;
        do {
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          uVar47 = 0;
          auStack_138 = (undefined1  [16])0x0;
          auStack_138._0_8_ = 0;
          auStack_128 = (undefined1  [16])0x0;
          auStack_128._0_8_ = 0;
          auStack_118 = (undefined1  [16])0x0;
          auStack_118._0_8_ = 0;
          if (0 < (longlong)param_8) {
            auVar57 = ZEXT1664((undefined1  [16])0x0);
            uVar35 = 0;
            auVar55 = ZEXT1664((undefined1  [16])0x0);
            lVar12 = 0;
            auVar53 = ZEXT1664((undefined1  [16])0x0);
            do {
              uVar37 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar35 * 4);
              lVar32 = 0;
              if (uVar36 != 0) {
                lVar40 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar35 * 4) * param_10);
                do {
                  uVar37 = uVar37 + 1;
                  auVar48._8_8_ = 0;
                  auVar48._0_8_ = *(ulonglong *)(lVar32 + lVar21 + uVar28 * 8 + lVar12 + lVar40);
                  auVar48 = vpmaxub_avx(auVar45._0_16_,auVar48);
                  auVar45 = ZEXT1664(auVar48);
                  puVar9 = (ulonglong *)
                           (lVar32 + lVar21 + param_2 * 2 + uVar28 * 8 + lVar12 + lVar40);
                  auVar49._8_8_ = 0;
                  auVar49._0_8_ =
                       *(ulonglong *)(lVar32 + lVar40 + param_2 + lVar21 + uVar28 * 8 + lVar12);
                  auStack_138 = vpmaxub_avx(auVar57._0_16_,auVar49);
                  auVar57 = ZEXT1664(auStack_138);
                  puVar10 = (ulonglong *)(lVar32 + lVar21 + lVar31 + uVar28 * 8 + lVar12 + lVar40);
                  lVar32 = lVar32 + lVar33;
                  auVar50._8_8_ = 0;
                  auVar50._0_8_ = *puVar9;
                  auStack_128 = vpmaxub_avx(auVar55._0_16_,auVar50);
                  auVar55 = ZEXT1664(auStack_128);
                  auVar51._8_8_ = 0;
                  auVar51._0_8_ = *puVar10;
                  auStack_118 = vpmaxub_avx(auVar53._0_16_,auVar51);
                  auVar53 = ZEXT1664(auStack_118);
                } while (uVar37 < uVar36);
              }
              uVar47 = auVar45._0_8_;
              uVar35 = uVar35 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar35 < param_8);
          }
          *(undefined8 *)*pauVar13 = uVar47;
          uVar28 = uVar28 + 1;
          lVar20 = lVar20 + 8;
          *(undefined8 *)(*pauVar13 + param_4) = auStack_138._0_8_;
          lVar39 = lVar39 + 8;
          *(undefined8 *)(*pauVar13 + param_4 * 2) = auStack_128._0_8_;
          *(undefined8 *)(*pauVar13 + lVar29) = auStack_118._0_8_;
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 8);
        } while (uVar28 < uVar14 >> 3);
      }
      uVar28 = 0;
      lVar21 = lVar20;
      if (lVar39 < (longlong)uVar22) {
        uVar14 = (uVar22 + 3) - lVar39;
        do {
          auVar57 = ZEXT1664((undefined1  [16])0x0);
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar53 = ZEXT1664((undefined1  [16])0x0);
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_8) {
            uVar35 = 0;
            lVar12 = 0;
            do {
              uVar37 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar35 * 4);
              lVar32 = 0;
              if (uVar36 != 0) {
                lVar40 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar35 * 4) * param_10);
                do {
                  auVar48 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar32 + lVar20 + uVar28 * 4 + lVar12 + lVar40),0);
                  uVar37 = uVar37 + 1;
                  auVar49 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar32 + lVar40 + param_2 + lVar20 + uVar28 * 4 + lVar12),
                                        0);
                  auVar50 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar32 + lVar20 + param_2 * 2 + uVar28 * 4 + lVar12 +
                                                   lVar40),0);
                  auVar51 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar32 + lVar20 + lVar31 + uVar28 * 4 + lVar12 + lVar40),0
                                       );
                  auVar48 = vpmaxub_avx(auVar57._0_16_,auVar48);
                  auVar57 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar55._0_16_,auVar49);
                  auVar55 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar53._0_16_,auVar50);
                  auVar53 = ZEXT1664(auVar48);
                  lVar32 = lVar32 + lVar33;
                  auVar48 = vpmaxub_avx(auVar45._0_16_,auVar51);
                  auVar45 = ZEXT1664(auVar48);
                } while (uVar37 < uVar36);
              }
              uVar35 = uVar35 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar35 < param_8);
          }
          uVar28 = uVar28 + 1;
          lVar21 = lVar21 + 4;
          *(int *)*pauVar13 = auVar57._0_4_;
          lVar39 = lVar39 + 4;
          *(int *)(*pauVar13 + param_4) = auVar55._0_4_;
          *(int *)(*pauVar13 + param_4 * 2) = auVar53._0_4_;
          *(int *)(*pauVar13 + lVar29) = auVar45._0_4_;
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 4);
        } while (uVar28 < uVar14 >> 2);
      }
      uVar28 = 0;
      lVar20 = lVar21;
      if (lVar39 < (longlong)uVar16) {
        uVar14 = (uVar16 + 1) - lVar39;
        do {
          auVar57 = ZEXT1664((undefined1  [16])0x0);
          auVar51 = (undefined1  [16])0x0;
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar50 = (undefined1  [16])0x0;
          auVar53 = ZEXT1664((undefined1  [16])0x0);
          auVar49 = (undefined1  [16])0x0;
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          auVar48 = (undefined1  [16])0x0;
          if (0 < (longlong)param_8) {
            uVar35 = 0;
            lVar12 = 0;
            do {
              uVar37 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar35 * 4);
              lVar32 = 0;
              if (uVar36 != 0) {
                lVar40 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar35 * 4) * param_10);
                do {
                  uVar37 = uVar37 + 1;
                  auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar32 + lVar21 + uVar28 * 2 + lVar12 + lVar40),0);
                  auVar49 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar32 + lVar40 + param_2 + lVar21 + uVar28 * 2 +
                                                                  lVar12),0);
                  auVar48 = vpmaxub_avx(auVar57._0_16_,auVar48);
                  auVar57 = ZEXT1664(auVar48);
                  auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar32 + lVar21 + param_2 * 2 + uVar28 * 2 + lVar12
                                                         + lVar40),0);
                  auVar49 = vpmaxub_avx(auVar55._0_16_,auVar49);
                  auVar55 = ZEXT1664(auVar49);
                  auVar49 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar32 + lVar21 + lVar31 + uVar28 * 2 + lVar12 +
                                                         lVar40),0);
                  lVar32 = lVar32 + lVar33;
                  auVar48 = vpmaxub_avx(auVar53._0_16_,auVar48);
                  auVar53 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar45._0_16_,auVar49);
                  auVar45 = ZEXT1664(auVar48);
                } while (uVar37 < uVar36);
              }
              auVar48 = auVar45._0_16_;
              auVar49 = auVar53._0_16_;
              auVar50 = auVar55._0_16_;
              auVar51 = auVar57._0_16_;
              uVar35 = uVar35 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar35 < param_8);
          }
          uVar28 = uVar28 + 1;
          lVar20 = lVar20 + 2;
          vpextrw_avx(auVar51,0);
          lVar39 = lVar39 + 2;
          vpextrw_avx(auVar50,0);
          vpextrw_avx(auVar49,0);
          vpextrw_avx(auVar48,0);
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 2);
        } while (uVar28 < uVar14 >> 1);
      }
      uVar28 = 0;
      if (lVar39 < (longlong)param_5) {
        do {
          auVar57 = ZEXT1664((undefined1  [16])0x0);
          auVar55 = ZEXT1664((undefined1  [16])0x0);
          auVar53 = ZEXT1664((undefined1  [16])0x0);
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_8) {
            uVar14 = 0;
            lVar21 = 0;
            do {
              uVar36 = 0;
              uVar35 = (ulonglong)*(ushort *)(lVar18 + uVar14 * 4);
              lVar12 = 0;
              if (uVar35 != 0) {
                lVar32 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar14 * 4) * param_10);
                do {
                  auVar48 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + lVar20 + uVar28 + lVar21 + lVar32),
                                        0);
                  uVar36 = uVar36 + 1;
                  auVar49 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + param_2 + lVar20 + uVar28 + lVar21
                                                                 + lVar32),0);
                  auVar50 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + lVar20 + param_2 * 2 + uVar28 +
                                                                 lVar21 + lVar32),0);
                  auVar51 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + lVar32 + lVar20 + lVar31 + uVar28 +
                                                                          lVar21),0);
                  auVar48 = vpmaxub_avx(auVar57._0_16_,auVar48);
                  auVar57 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar55._0_16_,auVar49);
                  auVar55 = ZEXT1664(auVar48);
                  auVar48 = vpmaxub_avx(auVar53._0_16_,auVar50);
                  auVar53 = ZEXT1664(auVar48);
                  lVar12 = lVar12 + lVar33;
                  auVar48 = vpmaxub_avx(auVar45._0_16_,auVar51);
                  auVar45 = ZEXT1664(auVar48);
                } while (uVar36 < uVar35);
              }
              uVar14 = uVar14 + 1;
              lVar21 = lVar21 + param_2;
            } while (uVar14 < param_8);
          }
          uVar28 = uVar28 + 1;
          (*pauVar13)[0] = auVar57[0];
          (*pauVar13)[param_4] = auVar55[0];
          (*pauVar13)[param_4 * 2] = auVar53[0];
          (*pauVar13)[lVar29] = auVar45[0];
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 1);
        } while (uVar28 < param_5 - lVar39);
      }
      lVar21 = uVar25 * 4 + 4;
      uVar25 = uVar25 + 1;
    } while (uVar25 < (ulonglong)
                      ((longlong)(((ulonglong)((longlong)(uVar17 + 3) >> 1) >> 0x3e) + 3 + uVar17)
                      >> 2));
  }
  lVar29 = 0;
  lVar26 = 0;
  if ((longlong)param_6 <= lVar21) {
    return;
  }
  param_9 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
  uStack_2a8 = 0;
LAB_140514d52:
  uVar17 = 0;
  uVar25 = 0;
  pauStack_298 = (undefined1 (*) [32])(param_3 + lVar21 * param_4 + lVar26);
  lVar31 = param_1 + param_2 * lVar21 + lVar29;
  if (0 < (longlong)(param_5 & 0xffffffffffffff80)) {
    lVar18 = lVar21 * param_4 + param_3 + lVar26;
    uVar28 = uVar25;
    do {
      auVar57 = ZEXT3264((undefined1  [32])0x0);
      auVar56 = (undefined1  [32])0x0;
      auVar55 = ZEXT3264((undefined1  [32])0x0);
      auVar54 = (undefined1  [32])0x0;
      auVar53 = ZEXT3264((undefined1  [32])0x0);
      auVar52 = (undefined1  [32])0x0;
      auVar45 = ZEXT3264((undefined1  [32])0x0);
      auVar44 = (undefined1  [32])0x0;
      if (0 < (longlong)param_8) {
        auVar59 = ZEXT3264((undefined1  [32])0x0);
        uVar17 = 0;
        auVar63 = ZEXT3264((undefined1  [32])0x0);
        lVar19 = param_2 * lVar21 + param_1 + lVar29 + uVar28;
        auVar65 = ZEXT3264((undefined1  [32])0x0);
        lVar20 = 0;
        auVar61 = ZEXT3264((undefined1  [32])0x0);
        do {
          uVar35 = 0;
          uVar14 = (ulonglong)*(ushort *)(param_9 + uVar17 * 4);
          lVar39 = 0;
          if (uVar14 != 0) {
            lVar12 = (longlong)(int)((uint)*(ushort *)(param_9 + 2 + uVar17 * 4) * param_10);
            lVar32 = lVar12 + lVar20 + lVar19;
            do {
              pauVar13 = (undefined1 (*) [32])(lVar39 + lVar19 + lVar20 + lVar12);
              uVar35 = uVar35 + 1;
              lVar40 = lVar39 + 0x20;
              lVar43 = lVar39 + 0x40;
              lVar34 = lVar39 + 0x60;
              lVar39 = lVar39 + lVar33;
              auVar44 = vpmaxub_avx2(auVar59._0_32_,*pauVar13);
              auVar59 = ZEXT3264(auVar44);
              auVar52 = vpmaxub_avx2(auVar63._0_32_,*(undefined1 (*) [32])(lVar40 + lVar32));
              auVar63 = ZEXT3264(auVar52);
              auVar54 = vpmaxub_avx2(auVar65._0_32_,*(undefined1 (*) [32])(lVar43 + lVar32));
              auVar65 = ZEXT3264(auVar54);
              auVar56 = vpmaxub_avx2(auVar61._0_32_,*(undefined1 (*) [32])(lVar34 + lVar32));
              auVar61 = ZEXT3264(auVar56);
            } while (uVar35 < uVar14);
            auVar57 = ZEXT3264(auVar44);
            auVar55 = ZEXT3264(auVar52);
            auVar53 = ZEXT3264(auVar54);
            auVar45 = ZEXT3264(auVar56);
          }
          auVar44 = auVar45._0_32_;
          auVar52 = auVar53._0_32_;
          auVar54 = auVar55._0_32_;
          auVar56 = auVar57._0_32_;
          uVar17 = uVar17 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar17 < param_8);
      }
      uVar25 = uVar25 + 1;
      uVar17 = uVar28 + 0x80;
      lVar31 = lVar31 + 0x80;
      pauStack_298 = pauStack_298 + 4;
      *(undefined1 (*) [32])(lVar18 + uVar28) = auVar56;
      *(undefined1 (*) [32])(lVar18 + 0x20 + uVar28) = auVar54;
      *(undefined1 (*) [32])(lVar18 + 0x40 + uVar28) = auVar52;
      *(undefined1 (*) [32])(lVar18 + 0x60 + uVar28) = auVar44;
      uVar28 = uVar17;
    } while (uVar25 < (param_5 & 0xffffffffffffff80) + 0x7f >> 7);
  }
  uVar25 = uVar17;
  lVar18 = lVar31;
  if ((longlong)uVar17 < (longlong)uVar23) {
    uVar28 = 1;
    uVar14 = 0;
    uVar35 = (uVar23 - uVar17) + 0x3f >> 9;
    if (uVar35 != 0) {
      lVar12 = 0;
      lVar39 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar32 = 0;
      lVar19 = lVar12;
      lVar20 = lVar32;
      do {
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 0x40;
        lVar19 = lVar19 + 0x40;
        lVar12 = lVar12 + 0x40;
        lVar39 = lVar39 + 0x40;
        lVar40 = lVar40 + 0x40;
        lVar43 = lVar43 + 0x40;
        lVar20 = lVar20 + 0x40;
        lVar32 = lVar32 + 0x40;
      } while (uVar14 < uVar35);
      uVar28 = uVar14 * 8 + 1;
      lVar18 = lVar18 + lVar19 + lVar12 + lVar39 + lVar40 + lVar43 + lVar20 + lVar32;
    }
    lVar19 = (uVar23 - 1) - uVar17;
    uVar14 = (longlong)(lVar19 + 0x40 + ((ulonglong)(lVar19 + 0x40 >> 5) >> 0x3a)) >> 6;
    if (uVar28 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x0001405150dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1405150de + (byte)(&DAT_14308a6a0)[(uint)((int)uVar14 - (int)uVar28)]))();
      return;
    }
    uVar28 = 0;
    lVar19 = 0;
    do {
      uVar14 = 0;
      auVar53 = ZEXT3264((undefined1  [32])0x0);
      auVar52 = (undefined1  [32])0x0;
      lVar20 = 0;
      auVar45 = ZEXT3264((undefined1  [32])0x0);
      auVar44 = (undefined1  [32])0x0;
      if (0 < (longlong)param_8) {
        do {
          uVar37 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar39 = 0;
          if (uVar36 != 0) {
            lVar12 = (longlong)(int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10);
            do {
              pauVar13 = (undefined1 (*) [32])(lVar39 + lVar12 + lVar31 + lVar19 + lVar20);
              uVar37 = uVar37 + 1;
              lVar32 = lVar39 + 0x20;
              lVar39 = lVar39 + lVar33;
              auVar44 = vpmaxub_avx2(auVar53._0_32_,*pauVar13);
              auVar53 = ZEXT3264(auVar44);
              auVar44 = vpmaxub_avx2(auVar45._0_32_,
                                     *(undefined1 (*) [32])
                                      (lVar32 + lVar20 + lVar12 + lVar31 + lVar19));
              auVar45 = ZEXT3264(auVar44);
            } while (uVar37 < uVar36);
          }
          auVar44 = auVar45._0_32_;
          auVar52 = auVar53._0_32_;
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar14 < param_8);
      }
      uVar28 = uVar28 + 1;
      lVar19 = lVar19 + 0x40;
      *pauStack_298 = auVar52;
      pauStack_298[1] = auVar44;
      pauStack_298 = pauStack_298 + 2;
    } while (uVar28 < (uVar23 + 0x3f) - uVar17 >> 6);
    uVar28 = 1;
    uVar14 = 0;
    if (uVar35 != 0) {
      lVar39 = 0;
      lVar20 = 0;
      lVar12 = 0;
      lVar32 = 0;
      lVar40 = 0;
      lVar19 = 0;
      lVar31 = lVar19;
      do {
        uVar14 = uVar14 + 1;
        uVar25 = uVar25 + 0x40;
        lVar39 = lVar39 + 0x40;
        lVar20 = lVar20 + 0x40;
        lVar12 = lVar12 + 0x40;
        lVar32 = lVar32 + 0x40;
        lVar40 = lVar40 + 0x40;
        lVar19 = lVar19 + 0x40;
        lVar31 = lVar31 + 0x40;
      } while (uVar14 < (uVar23 - uVar17) + 0x3f >> 9);
      uVar28 = uVar14 * 8 + 1;
      uVar25 = uVar25 + lVar39 + lVar20 + lVar12 + lVar32 + lVar40 + lVar19 + lVar31;
    }
    lVar31 = (uVar23 - 1) - uVar17;
    uVar17 = (longlong)(lVar31 + 0x40 + ((ulonglong)(lVar31 + 0x40 >> 5) >> 0x3a)) >> 6;
    if (uVar28 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001405153c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1405153c5 + (byte)(&DAT_14308a6a8)[(uint)((int)uVar17 - (int)uVar28)]))();
      return;
    }
  }
  uVar17 = uVar25;
  lVar31 = lVar18;
  if ((longlong)uVar25 < (longlong)uVar27) {
    uVar28 = 1;
    uVar14 = 0;
    uVar35 = (uVar27 - uVar25) + 0x1f >> 8;
    if (uVar35 != 0) {
      lVar12 = 0;
      lVar39 = 0;
      lVar43 = 0;
      lVar40 = 0;
      lVar32 = 0;
      lVar19 = lVar40;
      lVar20 = lVar32;
      do {
        uVar14 = uVar14 + 1;
        lVar31 = lVar31 + 0x20;
        lVar12 = lVar12 + 0x20;
        lVar39 = lVar39 + 0x20;
        lVar43 = lVar43 + 0x20;
        lVar19 = lVar19 + 0x20;
        lVar40 = lVar40 + 0x20;
        lVar20 = lVar20 + 0x20;
        lVar32 = lVar32 + 0x20;
      } while (uVar14 < uVar35);
      uVar28 = uVar14 * 8 + 1;
      lVar31 = lVar31 + lVar12 + lVar39 + lVar43 + lVar19 + lVar40 + lVar20 + lVar32;
    }
    lVar19 = (uVar27 - 1) - uVar25;
    uVar14 = (longlong)(lVar19 + 0x20 + ((ulonglong)(lVar19 + 0x20 >> 4) >> 0x3b)) >> 5;
    if (uVar28 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x00014051551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14051551e + (byte)(&DAT_14308a6b0)[(uint)((int)uVar14 - (int)uVar28)]))();
      return;
    }
    uVar28 = 0;
    lVar19 = 0;
    do {
      uVar14 = 0;
      auVar45 = ZEXT3264((undefined1  [32])0x0);
      auVar44 = (undefined1  [32])0x0;
      lVar20 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar36 = 0;
          uVar37 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar39 = 0;
          if (uVar37 != 0) {
            do {
              pauVar13 = (undefined1 (*) [32])
                         (lVar39 + (longlong)
                                   (int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10) +
                                   lVar18 + lVar19 + lVar20);
              uVar36 = uVar36 + 1;
              lVar39 = lVar39 + lVar33;
              auVar44 = vpmaxub_avx2(auVar45._0_32_,*pauVar13);
              auVar45 = ZEXT3264(auVar44);
            } while (uVar36 < uVar37);
          }
          auVar44 = auVar45._0_32_;
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar14 < param_8);
      }
      uVar28 = uVar28 + 1;
      lVar19 = lVar19 + 0x20;
      *pauStack_298 = auVar44;
      pauStack_298 = pauStack_298 + 1;
    } while (uVar28 < (uVar27 + 0x1f) - uVar25 >> 5);
    uVar28 = 1;
    uVar14 = 0;
    if (uVar35 != 0) {
      lVar39 = 0;
      lVar20 = 0;
      lVar12 = 0;
      lVar32 = 0;
      lVar40 = 0;
      lVar19 = 0;
      lVar18 = lVar19;
      do {
        uVar14 = uVar14 + 1;
        uVar17 = uVar17 + 0x20;
        lVar39 = lVar39 + 0x20;
        lVar20 = lVar20 + 0x20;
        lVar12 = lVar12 + 0x20;
        lVar32 = lVar32 + 0x20;
        lVar40 = lVar40 + 0x20;
        lVar19 = lVar19 + 0x20;
        lVar18 = lVar18 + 0x20;
      } while (uVar14 < (uVar27 - uVar25) + 0x1f >> 8);
      uVar28 = uVar14 * 8 + 1;
      uVar17 = uVar17 + lVar39 + lVar20 + lVar12 + lVar32 + lVar40 + lVar19 + lVar18;
    }
    lVar18 = (uVar27 - 1) - uVar25;
    uVar25 = (longlong)(lVar18 + 0x20 + ((ulonglong)(lVar18 + 0x20 >> 4) >> 0x3b)) >> 5;
    if (uVar28 <= uVar25) {
                    /* WARNING: Could not recover jumptable at 0x0001405157c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1405157c5 + (byte)(&DAT_14308a6b8)[(uint)((int)uVar25 - (int)uVar28)]))();
      return;
    }
  }
  uVar25 = uVar17;
  lVar18 = lVar31;
  if ((longlong)uVar17 < (longlong)uVar38) {
    uVar28 = 1;
    uVar14 = 0;
    uVar35 = (uVar38 - uVar17) + 0xf >> 7;
    if (uVar35 != 0) {
      lVar12 = 0;
      lVar39 = 0;
      lVar43 = 0;
      lVar40 = 0;
      lVar32 = 0;
      lVar19 = lVar40;
      lVar20 = lVar32;
      do {
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 0x10;
        lVar12 = lVar12 + 0x10;
        lVar39 = lVar39 + 0x10;
        lVar43 = lVar43 + 0x10;
        lVar19 = lVar19 + 0x10;
        lVar40 = lVar40 + 0x10;
        lVar20 = lVar20 + 0x10;
        lVar32 = lVar32 + 0x10;
      } while (uVar14 < uVar35);
      uVar28 = uVar14 * 8 + 1;
      lVar18 = lVar18 + lVar12 + lVar39 + lVar43 + lVar19 + lVar40 + lVar20 + lVar32;
    }
    lVar19 = (uVar38 - 1) - uVar17;
    uVar14 = (longlong)(lVar19 + 0x10 + ((ulonglong)(lVar19 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar28 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x00014051591c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14051591e + (byte)(&DAT_14308a6c0)[(uint)((int)uVar14 - (int)uVar28)]))();
      return;
    }
    uVar28 = 0;
    lVar19 = 0;
    do {
      uVar14 = 0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      auVar48 = (undefined1  [16])0x0;
      lVar20 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar36 = 0;
          uVar37 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar39 = 0;
          if (uVar37 != 0) {
            do {
              pauVar5 = (undefined1 (*) [16])
                        (lVar39 + (longlong)
                                  (int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10) +
                                  lVar31 + lVar19 + lVar20);
              uVar36 = uVar36 + 1;
              lVar39 = lVar39 + lVar33;
              auVar48 = vpmaxub_avx(auVar45._0_16_,*pauVar5);
              auVar45 = ZEXT1664(auVar48);
            } while (uVar36 < uVar37);
          }
          auVar48 = auVar45._0_16_;
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar14 < param_8);
      }
      uVar28 = uVar28 + 1;
      lVar19 = lVar19 + 0x10;
      *(undefined1 (*) [16])*pauStack_298 = auVar48;
      pauStack_298 = (undefined1 (*) [32])(*pauStack_298 + 0x10);
    } while (uVar28 < (uVar38 + 0xf) - uVar17 >> 4);
    uVar28 = 1;
    uVar14 = 0;
    if (uVar35 != 0) {
      lVar39 = 0;
      lVar20 = 0;
      lVar12 = 0;
      lVar32 = 0;
      lVar40 = 0;
      lVar19 = 0;
      lVar31 = lVar19;
      do {
        uVar14 = uVar14 + 1;
        uVar25 = uVar25 + 0x10;
        lVar39 = lVar39 + 0x10;
        lVar20 = lVar20 + 0x10;
        lVar12 = lVar12 + 0x10;
        lVar32 = lVar32 + 0x10;
        lVar40 = lVar40 + 0x10;
        lVar19 = lVar19 + 0x10;
        lVar31 = lVar31 + 0x10;
      } while (uVar14 < (uVar38 - uVar17) + 0xf >> 7);
      uVar28 = uVar14 * 8 + 1;
      uVar25 = uVar25 + lVar39 + lVar20 + lVar12 + lVar32 + lVar40 + lVar19 + lVar31;
    }
    lVar31 = (uVar38 - 1) - uVar17;
    uVar17 = (longlong)(lVar31 + 0x10 + ((ulonglong)(lVar31 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar28 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x000140515bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_140515bc5 + (byte)(&DAT_14308a6c8)[(uint)((int)uVar17 - (int)uVar28)]))();
      return;
    }
  }
  uVar17 = 0;
  lVar31 = lVar18;
  if ((longlong)uVar25 < (longlong)uVar42) {
    uVar28 = (uVar42 + 7) - uVar25;
    do {
      uVar14 = 0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      uVar47 = 0;
      lVar19 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar36 = 0;
          uVar35 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar20 = 0;
          if (uVar35 != 0) {
            do {
              puVar9 = (ulonglong *)
                       (lVar20 + (longlong)
                                 (int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10) +
                                 lVar18 + uVar17 * 8 + lVar19);
              uVar36 = uVar36 + 1;
              lVar20 = lVar20 + lVar33;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = *puVar9;
              auVar48 = vpmaxub_avx(auVar45._0_16_,auVar46);
              auVar45 = ZEXT1664(auVar48);
            } while (uVar36 < uVar35);
          }
          uVar47 = auVar45._0_8_;
          uVar14 = uVar14 + 1;
          lVar19 = lVar19 + param_2;
        } while (uVar14 < param_8);
      }
      uVar17 = uVar17 + 1;
      lVar31 = lVar31 + 8;
      *(undefined8 *)*pauStack_298 = uVar47;
      pauStack_298 = (undefined1 (*) [32])(*pauStack_298 + 8);
      uVar25 = uVar25 + 8;
    } while (uVar17 < uVar28 >> 3);
  }
  uVar17 = uVar25;
  lVar18 = lVar31;
  if ((longlong)uVar25 < (longlong)uVar22) {
    uVar28 = 1;
    uVar14 = 0;
    uVar35 = (uVar22 - uVar25) + 3 >> 5;
    if (uVar35 != 0) {
      lVar32 = 0;
      lVar12 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar39 = 0;
      lVar19 = lVar12;
      lVar20 = lVar39;
      do {
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 4;
        lVar32 = lVar32 + 4;
        lVar19 = lVar19 + 4;
        lVar12 = lVar12 + 4;
        lVar40 = lVar40 + 4;
        lVar43 = lVar43 + 4;
        lVar20 = lVar20 + 4;
        lVar39 = lVar39 + 4;
      } while (uVar14 < uVar35);
      uVar28 = uVar14 * 8 + 1;
      lVar18 = lVar18 + lVar32 + lVar19 + lVar12 + lVar40 + lVar43 + lVar20 + lVar39;
    }
    lVar19 = (uVar22 - 1) - uVar25;
    uVar14 = (longlong)(lVar19 + 4 + ((ulonglong)(lVar19 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar28 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x000140515e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_140515e82 + (byte)(&DAT_14308a6d0)[(uint)((int)uVar14 - (int)uVar28)]))();
      return;
    }
    uVar28 = 0;
    do {
      uVar36 = 0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      lVar19 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar15 = 0;
          uVar37 = (ulonglong)*(ushort *)(param_9 + uVar36 * 4);
          lVar20 = 0;
          if (uVar37 != 0) {
            do {
              auVar48 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)
                                     (lVar20 + (longlong)
                                               (int)((uint)*(ushort *)(param_9 + 2 + uVar36 * 4) *
                                                    param_10) + lVar31 + uVar28 * 4 + lVar19),0);
              uVar15 = uVar15 + 1;
              lVar20 = lVar20 + lVar33;
              auVar48 = vpmaxub_avx(auVar45._0_16_,auVar48);
              auVar45 = ZEXT1664(auVar48);
            } while (uVar15 < uVar37);
          }
          uVar36 = uVar36 + 1;
          lVar19 = lVar19 + param_2;
        } while (uVar36 < param_8);
      }
      uVar28 = uVar28 + 1;
      *(int *)*pauStack_298 = auVar45._0_4_;
      pauStack_298 = (undefined1 (*) [32])(*pauStack_298 + 4);
    } while (uVar28 < (uVar22 + 3) - uVar25 >> 2);
    uVar28 = 0;
    if (3 < (longlong)uVar14) {
      uVar36 = uVar14 & 0xfffffffffffffffc;
LAB_140516060:
      if ((longlong)param_8 < 1) goto code_r0x000140516069;
      uVar37 = 0;
      while( true ) {
        do {
          uVar37 = uVar37 + 1;
        } while (uVar37 < param_8);
        uVar28 = uVar28 + 4;
        if (uVar36 <= uVar28) break;
        uVar37 = 0;
      }
      if (uVar36 < uVar14) goto LAB_140516186;
      goto LAB_14051618a;
    }
    if (uVar14 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_140516e58;
          if (param_8 < 3) goto LAB_140516e58;
          if (param_8 < 4) goto LAB_140516e58;
          if (param_8 < 5) goto LAB_140516e58;
          if (param_8 < 6) goto LAB_140516e58;
          if (param_8 < 7) goto LAB_140516e58;
          if (param_8 < 8) goto LAB_140516e58;
          if (param_8 < 9) goto LAB_140516e58;
          uVar37 = 9;
          if (param_8 < 10) goto LAB_140516e53;
          while( true ) {
            do {
              uVar37 = uVar37 + 1;
            } while (uVar37 < param_8);
LAB_140516e53:
            if ((longlong)param_8 < 1) break;
LAB_140516e58:
            uVar36 = uVar28 + 1;
            if (uVar14 <= uVar36) goto LAB_14051618a;
LAB_140516186:
            uVar37 = 0;
            uVar28 = uVar36;
          }
          uVar36 = uVar28 + 1;
          if (uVar14 <= uVar36) goto LAB_14051618a;
LAB_140516083:
          uVar28 = uVar36 + 1;
          if (uVar14 <= uVar28) goto LAB_14051618a;
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < uVar14);
    }
    goto LAB_14051618a;
  }
  goto LAB_1405162a0;
code_r0x000140516069:
  uVar28 = uVar28 + 4;
  if (uVar36 <= uVar28) goto code_r0x000140516072;
  goto LAB_140516060;
code_r0x000140516072:
  if (uVar36 < uVar14) goto LAB_140516083;
LAB_14051618a:
  uVar28 = 1;
  uVar14 = 0;
  if (uVar35 != 0) {
    lVar20 = 0;
    lVar39 = 0;
    lVar12 = 0;
    lVar32 = 0;
    lVar40 = 0;
    lVar19 = 0;
    lVar31 = lVar19;
    do {
      uVar14 = uVar14 + 1;
      uVar17 = uVar17 + 4;
      lVar20 = lVar20 + 4;
      lVar39 = lVar39 + 4;
      lVar12 = lVar12 + 4;
      lVar32 = lVar32 + 4;
      lVar40 = lVar40 + 4;
      lVar19 = lVar19 + 4;
      lVar31 = lVar31 + 4;
    } while (uVar14 < (uVar22 - uVar25) + 3 >> 5);
    uVar28 = uVar14 * 8 + 1;
    uVar17 = uVar17 + lVar20 + lVar39 + lVar12 + lVar32 + lVar40 + lVar19 + lVar31;
  }
  lVar31 = (uVar22 - 1) - uVar25;
  uVar25 = (longlong)(lVar31 + 4 + ((ulonglong)(lVar31 + 4 >> 1) >> 0x3e)) >> 2;
  if (uVar28 <= uVar25) {
                    /* WARNING: Could not recover jumptable at 0x000140516282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_140516284 + (byte)(&DAT_14308a6d8)[(uint)((int)uVar25 - (int)uVar28)]))();
    return;
  }
LAB_1405162a0:
  uVar25 = uVar17;
  lVar31 = lVar18;
  if ((longlong)uVar17 < (longlong)uVar16) {
    uVar28 = 1;
    uVar14 = 0;
    uVar35 = (uVar16 - uVar17) + 1 >> 4;
    if (uVar35 != 0) {
      lVar32 = 0;
      lVar12 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar39 = 0;
      lVar19 = lVar12;
      lVar20 = lVar39;
      do {
        uVar14 = uVar14 + 1;
        lVar31 = lVar31 + 2;
        lVar32 = lVar32 + 2;
        lVar19 = lVar19 + 2;
        lVar12 = lVar12 + 2;
        lVar40 = lVar40 + 2;
        lVar43 = lVar43 + 2;
        lVar20 = lVar20 + 2;
        lVar39 = lVar39 + 2;
      } while (uVar14 < uVar35);
      uVar28 = uVar14 * 8 + 1;
      lVar31 = lVar31 + lVar32 + lVar19 + lVar12 + lVar40 + lVar43 + lVar20 + lVar39;
    }
    lVar19 = (uVar16 - 1) - uVar17;
    uVar14 = (lVar19 + 2) - (lVar19 + 2 >> 0x3f) >> 1;
    if (uVar28 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x0001405163dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1405163de + (byte)(&DAT_14308a6e0)[(uint)((int)uVar14 - (int)uVar28)]))();
      return;
    }
    uVar28 = 0;
    do {
      uVar36 = 0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      auVar48 = (undefined1  [16])0x0;
      lVar19 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar15 = 0;
          uVar37 = (ulonglong)*(ushort *)(param_9 + uVar36 * 4);
          lVar20 = 0;
          if (uVar37 != 0) {
            do {
              uVar15 = uVar15 + 1;
              auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)
                                           (lVar20 + (longlong)
                                                     (int)((uint)*(ushort *)
                                                                  (param_9 + 2 + uVar36 * 4) *
                                                          param_10) + lVar18 + uVar28 * 2 + lVar19),
                                    0);
              lVar20 = lVar20 + lVar33;
              auVar48 = vpmaxub_avx(auVar45._0_16_,auVar48);
              auVar45 = ZEXT1664(auVar48);
            } while (uVar15 < uVar37);
          }
          auVar48 = auVar45._0_16_;
          uVar36 = uVar36 + 1;
          lVar19 = lVar19 + param_2;
        } while (uVar36 < param_8);
      }
      uVar28 = uVar28 + 1;
      vpextrw_avx(auVar48,0);
      pauStack_298 = (undefined1 (*) [32])(*pauStack_298 + 2);
    } while (uVar28 < (uVar16 + 1) - uVar17 >> 1);
    uVar28 = 0;
    if (3 < (longlong)uVar14) {
      uVar36 = uVar14 & 0xfffffffffffffffc;
LAB_1405165c0:
      if ((longlong)param_8 < 1) goto code_r0x0001405165c9;
      uVar37 = 0;
      while( true ) {
        do {
          uVar37 = uVar37 + 1;
        } while (uVar37 < param_8);
        uVar28 = uVar28 + 4;
        if (uVar36 <= uVar28) break;
        uVar37 = 0;
      }
      if (uVar36 < uVar14) goto LAB_1405166e6;
      goto LAB_1405166ea;
    }
    if (uVar14 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_140516e0a;
          if (param_8 < 3) goto LAB_140516e0a;
          if (param_8 < 4) goto LAB_140516e0a;
          if (param_8 < 5) goto LAB_140516e0a;
          if (param_8 < 6) goto LAB_140516e0a;
          if (param_8 < 7) goto LAB_140516e0a;
          if (param_8 < 8) goto LAB_140516e0a;
          if (param_8 < 9) goto LAB_140516e0a;
          uVar37 = 9;
          if (param_8 < 10) goto LAB_140516e05;
          while( true ) {
            do {
              uVar37 = uVar37 + 1;
            } while (uVar37 < param_8);
LAB_140516e05:
            if ((longlong)param_8 < 1) break;
LAB_140516e0a:
            uVar36 = uVar28 + 1;
            if (uVar14 <= uVar36) goto LAB_1405166ea;
LAB_1405166e6:
            uVar37 = 0;
            uVar28 = uVar36;
          }
          uVar36 = uVar28 + 1;
          if (uVar14 <= uVar36) goto LAB_1405166ea;
LAB_1405165e3:
          uVar28 = uVar36 + 1;
          if (uVar14 <= uVar28) goto LAB_1405166ea;
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < uVar14);
    }
    goto LAB_1405166ea;
  }
LAB_1405167fc:
  if ((longlong)uVar25 < (longlong)param_5) {
    uVar17 = 1;
    uVar28 = 0;
    uVar14 = param_5 - uVar25 >> 3;
    if (uVar14 != 0) {
      do {
        uVar28 = uVar28 + 1;
      } while (uVar28 < uVar14);
      uVar17 = uVar28 * 8 + 1;
    }
    uVar28 = (param_5 - (uVar25 + 1)) + 1;
    if (uVar17 <= uVar28) {
                    /* WARNING: Could not recover jumptable at 0x000140516889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_14308a6f0)[(uint)((int)uVar28 - (int)uVar17)] + 0x14051688b)
      )();
      return;
    }
    uVar17 = 0;
    do {
      uVar35 = 0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      lVar18 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar37 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar35 * 4);
          lVar19 = 0;
          if (uVar36 != 0) {
            do {
              auVar48 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar19 + lVar31 + uVar17 + lVar18 +
                                                             (longlong)
                                                             (int)((uint)*(ushort *)
                                                                          (param_9 + 2 + uVar35 * 4)
                                                                  * param_10)),0);
              uVar37 = uVar37 + 1;
              lVar19 = lVar19 + lVar33;
              auVar48 = vpmaxub_avx(auVar45._0_16_,auVar48);
              auVar45 = ZEXT1664(auVar48);
            } while (uVar37 < uVar36);
          }
          uVar35 = uVar35 + 1;
          lVar18 = lVar18 + param_2;
        } while (uVar35 < param_8);
      }
      uVar17 = uVar17 + 1;
      (*pauStack_298)[0] = auVar45[0];
      pauStack_298 = (undefined1 (*) [32])(*pauStack_298 + 1);
    } while (uVar17 < param_5 - uVar25);
    uVar17 = 0;
    if (3 < (longlong)uVar28) {
      uVar25 = uVar28 & 0xfffffffffffffffc;
LAB_140516a00:
      if ((longlong)param_8 < 1) goto code_r0x000140516a09;
      uVar35 = 0;
      while( true ) {
        do {
          uVar35 = uVar35 + 1;
        } while (uVar35 < param_8);
        uVar17 = uVar17 + 4;
        if (uVar25 <= uVar17) break;
        uVar35 = 0;
      }
      if (uVar25 < uVar28) goto LAB_140516b25;
      goto LAB_140516b29;
    }
    if (uVar28 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_140516dc0;
          if (param_8 < 3) goto LAB_140516dc0;
          if (param_8 < 4) goto LAB_140516dc0;
          if (param_8 < 5) goto LAB_140516dc0;
          if (param_8 < 6) goto LAB_140516dc0;
          if (param_8 < 7) goto LAB_140516dc0;
          if (param_8 < 8) goto LAB_140516dc0;
          if (param_8 < 9) goto LAB_140516dc0;
          uVar35 = 9;
          if (param_8 < 10) goto LAB_140516dbb;
          while( true ) {
            do {
              uVar35 = uVar35 + 1;
            } while (uVar35 < param_8);
LAB_140516dbb:
            if ((longlong)param_8 < 1) break;
LAB_140516dc0:
            uVar25 = uVar17 + 1;
            if (uVar28 <= uVar25) goto LAB_140516b29;
LAB_140516b25:
            uVar35 = 0;
            uVar17 = uVar25;
          }
          uVar25 = uVar17 + 1;
          if (uVar28 <= uVar25) goto LAB_140516b29;
LAB_140516a23:
          uVar17 = uVar25 + 1;
          if (uVar28 <= uVar17) goto LAB_140516b29;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar28);
LAB_140516b29:
      uVar17 = 0;
      if (7 < (longlong)uVar28) {
        uVar25 = uVar28 & 0xfffffffffffffff8;
LAB_140516b60:
        if ((longlong)param_8 < 1) goto code_r0x000140516b69;
        uVar35 = 0;
        while( true ) {
          do {
            uVar35 = uVar35 + 1;
          } while (uVar35 < param_8);
          uVar17 = uVar17 + 8;
          if (uVar25 <= uVar17) break;
          uVar35 = 0;
        }
        if (uVar25 < uVar28) goto LAB_140516c82;
        goto LAB_140516c86;
      }
    }
    uVar25 = 0;
    if (uVar28 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_140516d5a;
          if (param_8 < 3) goto LAB_140516d5a;
          if (param_8 < 4) goto LAB_140516d5a;
          if (param_8 < 5) goto LAB_140516d5a;
          if (param_8 < 6) goto LAB_140516d5a;
          if (param_8 < 7) goto LAB_140516d5a;
          if (param_8 < 8) goto LAB_140516d5a;
          if (param_8 < 9) goto LAB_140516d5a;
          uVar17 = 9;
          if (param_8 < 10) goto LAB_140516d55;
          while( true ) {
            do {
              uVar17 = uVar17 + 1;
            } while (uVar17 < param_8);
LAB_140516d55:
            if ((longlong)param_8 < 1) break;
LAB_140516d5a:
            uVar25 = uVar25 + 1;
            if (uVar28 <= uVar25) goto LAB_140516c86;
LAB_140516c82:
            uVar17 = 0;
          }
          uVar25 = uVar25 + 1;
          if (uVar28 <= uVar25) goto LAB_140516c86;
LAB_140516b83:
          uVar25 = uVar25 + 1;
          if (uVar28 <= uVar25) goto LAB_140516c86;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar28);
    }
LAB_140516c86:
    uVar17 = 1;
    uVar25 = 0;
    if (uVar14 != 0) {
      do {
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar14);
      uVar17 = uVar25 * 8 + 1;
    }
    if (uVar17 <= uVar28) {
                    /* WARNING: Could not recover jumptable at 0x000140516cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_14308a6f8)[(uint)((int)uVar28 - (int)uVar17)] + 0x140516cd6)
      )();
      return;
    }
  }
  lVar29 = lVar29 + param_2;
  uStack_2a8 = uStack_2a8 + 1;
  lVar26 = lVar26 + param_4;
  if (param_6 - lVar21 <= uStack_2a8) {
    return;
  }
  goto LAB_140514d52;
code_r0x0001405165c9:
  uVar28 = uVar28 + 4;
  if (uVar36 <= uVar28) goto code_r0x0001405165d2;
  goto LAB_1405165c0;
code_r0x0001405165d2:
  if (uVar36 < uVar14) goto LAB_1405165e3;
LAB_1405166ea:
  uVar28 = 1;
  uVar14 = 0;
  if (uVar35 != 0) {
    lVar20 = 0;
    lVar39 = 0;
    lVar12 = 0;
    lVar32 = 0;
    lVar40 = 0;
    lVar19 = 0;
    lVar18 = lVar19;
    do {
      uVar14 = uVar14 + 1;
      uVar25 = uVar25 + 2;
      lVar20 = lVar20 + 2;
      lVar39 = lVar39 + 2;
      lVar12 = lVar12 + 2;
      lVar32 = lVar32 + 2;
      lVar40 = lVar40 + 2;
      lVar19 = lVar19 + 2;
      lVar18 = lVar18 + 2;
    } while (uVar14 < (uVar16 - uVar17) + 1 >> 4);
    uVar28 = uVar14 * 8 + 1;
    uVar25 = uVar25 + lVar20 + lVar39 + lVar12 + lVar32 + lVar40 + lVar19 + lVar18;
  }
  lVar18 = (uVar16 - 1) - uVar17;
  uVar17 = (lVar18 + 2) - (lVar18 + 2 >> 0x3f) >> 1;
  if (uVar28 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001405167de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1405167e0 + (byte)(&DAT_14308a6e8)[(uint)((int)uVar17 - (int)uVar28)]))();
    return;
  }
  goto LAB_1405167fc;
code_r0x000140516a09:
  uVar17 = uVar17 + 4;
  if (uVar25 <= uVar17) goto code_r0x000140516a12;
  goto LAB_140516a00;
code_r0x000140516a12:
  if (uVar25 < uVar28) goto LAB_140516a23;
  goto LAB_140516b29;
code_r0x000140516b69:
  uVar17 = uVar17 + 8;
  if (uVar25 <= uVar17) goto code_r0x000140516b72;
  goto LAB_140516b60;
code_r0x000140516b72:
  if (uVar25 < uVar28) goto LAB_140516b83;
  goto LAB_140516c86;
}

