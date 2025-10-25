
void FUN_1404a1ea0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,longlong param_7,ulonglong param_8,
                  longlong param_9,int param_10)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 (*pauStack_260) [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auVar49 [64];
  undefined1 auVar51 [64];
  undefined1 auVar53 [64];
  
  uVar9 = param_5 & 0xfffffffffffffff8;
  lVar11 = 0;
  uVar26 = param_5 & 0xfffffffffffffff0;
  uVar10 = param_5 & 0xfffffffffffffffc;
  uVar13 = param_5 & 0xfffffffffffffffe;
  uVar20 = 0;
  uVar21 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar21) {
    lVar33 = (longlong)param_10;
    lVar25 = param_4 * 3;
    lVar23 = param_2 * -4 + param_1;
    lVar35 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
    lVar24 = param_2 * 3;
    lVar28 = lVar23 + param_2 * 4;
    lVar32 = 0;
    lVar30 = lVar32;
    do {
      uVar27 = 0;
      pauStack_260 = (undefined1 (*) [16])(param_3 + lVar32);
      uVar17 = 0;
      lVar11 = param_1 + lVar30;
      if (0 < (longlong)(param_5 & 0xffffffffffffffe0)) {
        uVar17 = uVar27;
        do {
          auVar44 = ZEXT1664((undefined1  [16])0x0);
          auVar41 = (undefined1  [16])0x0;
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          auVar42 = (undefined1  [16])0x0;
          auVar46 = ZEXT1664((undefined1  [16])0x0);
          auVar43 = (undefined1  [16])0x0;
          auVar47 = ZEXT1664((undefined1  [16])0x0);
          auVar38 = (undefined1  [16])0x0;
          auVar49 = ZEXT1664((undefined1  [16])0x0);
          auVar48 = (undefined1  [16])0x0;
          auVar51 = ZEXT1664((undefined1  [16])0x0);
          auVar50 = (undefined1  [16])0x0;
          auVar53 = ZEXT1664((undefined1  [16])0x0);
          auVar52 = (undefined1  [16])0x0;
          auVar37 = ZEXT1664((undefined1  [16])0x0);
          auVar40 = (undefined1  [16])0x0;
          if (0 < (longlong)param_8) {
            uVar15 = 0;
            lVar12 = lVar28 + lVar30 + uVar17;
            lVar14 = 0;
            do {
              uVar36 = 0;
              uVar19 = (ulonglong)*(ushort *)(lVar35 + uVar15 * 4);
              lVar22 = 0;
              if (uVar19 != 0) {
                lVar18 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar15 * 4) * param_10);
                lVar34 = lVar14 + lVar18;
                do {
                  pauVar29 = (undefined1 (*) [16])(lVar22 + lVar18 + lVar12 + lVar14);
                  pauVar1 = (undefined1 (*) [16])
                            (lVar22 + param_2 + lVar28 + lVar30 + uVar17 + lVar14 + lVar18);
                  pauVar2 = (undefined1 (*) [16])
                            (lVar22 + lVar28 + param_2 * 2 + lVar30 + uVar17 + lVar14 + lVar18);
                  pauVar3 = (undefined1 (*) [16])
                            (lVar22 + lVar24 + lVar28 + lVar30 + uVar17 + lVar14 + lVar18);
                  lVar16 = lVar22 + 0x10;
                  lVar6 = lVar22 + 0x10;
                  lVar7 = lVar22 + 0x10;
                  lVar8 = lVar22 + 0x10;
                  uVar36 = uVar36 + 1;
                  lVar22 = lVar22 + lVar33;
                  auVar40 = vpmaxub_avx(auVar44._0_16_,*pauVar29);
                  auVar44 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar45._0_16_,*pauVar1);
                  auVar45 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar46._0_16_,*pauVar2);
                  auVar46 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar47._0_16_,*pauVar3);
                  auVar47 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar49._0_16_,
                                        *(undefined1 (*) [16])(lVar16 + lVar34 + lVar12));
                  auVar49 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar51._0_16_,
                                        *(undefined1 (*) [16])
                                         (lVar6 + param_2 * 5 + lVar23 + lVar30 + uVar17 + lVar34));
                  auVar51 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar53._0_16_,
                                        *(undefined1 (*) [16])
                                         (lVar7 + param_2 * 6 + lVar23 + lVar30 + uVar17 + lVar34));
                  auVar53 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar37._0_16_,
                                        *(undefined1 (*) [16])
                                         (lVar8 + param_2 * 7 + lVar23 + lVar30 + uVar17 + lVar34));
                  auVar37 = ZEXT1664(auVar40);
                } while (uVar36 < uVar19);
              }
              auVar52 = auVar53._0_16_;
              auVar50 = auVar51._0_16_;
              auVar48 = auVar49._0_16_;
              auVar38 = auVar47._0_16_;
              auVar43 = auVar46._0_16_;
              auVar42 = auVar45._0_16_;
              auVar41 = auVar44._0_16_;
              auVar40 = auVar37._0_16_;
              uVar15 = uVar15 + 1;
              lVar14 = lVar14 + param_2;
            } while (uVar15 < param_8);
          }
          *pauStack_260 = auVar41;
          *(undefined1 (*) [16])(*pauStack_260 + param_4) = auVar42;
          *(undefined1 (*) [16])(*pauStack_260 + param_4 * 2) = auVar43;
          *(undefined1 (*) [16])(*pauStack_260 + lVar25) = auVar38;
          pauStack_260[1] = auVar48;
          *(undefined1 (*) [16])(pauStack_260[1] + param_4) = auVar50;
          *(undefined1 (*) [16])(pauStack_260[1] + param_4 * 2) = auVar52;
          *(undefined1 (*) [16])(pauStack_260[1] + lVar25) = auVar40;
          uVar27 = uVar27 + 1;
          uVar17 = uVar17 + 0x20;
          lVar11 = lVar11 + 0x20;
          pauStack_260 = pauStack_260 + 2;
        } while (uVar27 < (param_5 & 0xffffffffffffffe0) + 0x1f >> 5);
      }
      uVar27 = 0;
      lVar14 = 0;
      lVar12 = lVar11;
      if ((longlong)uVar17 < (longlong)uVar26) {
        uVar15 = (uVar26 + 0xf) - uVar17;
        do {
          auVar46 = ZEXT1664((undefined1  [16])0x0);
          auVar43 = (undefined1  [16])0x0;
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          auVar42 = (undefined1  [16])0x0;
          auVar44 = ZEXT1664((undefined1  [16])0x0);
          auVar41 = (undefined1  [16])0x0;
          auVar37 = ZEXT1664((undefined1  [16])0x0);
          auVar40 = (undefined1  [16])0x0;
          if (0 < (longlong)param_8) {
            uVar19 = 0;
            lVar22 = 0;
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar19 * 4);
              lVar34 = 0;
              if (uVar36 != 0) {
                lVar18 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar19 * 4) * param_10);
                do {
                  pauVar29 = (undefined1 (*) [16])(lVar34 + lVar11 + lVar14 + lVar22 + lVar18);
                  pauVar1 = (undefined1 (*) [16])
                            (lVar34 + lVar18 + param_2 + lVar11 + lVar14 + lVar22);
                  pauVar2 = (undefined1 (*) [16])
                            (lVar34 + lVar11 + param_2 * 2 + lVar14 + lVar22 + lVar18);
                  pauVar3 = (undefined1 (*) [16])
                            (lVar34 + lVar11 + lVar24 + lVar14 + lVar22 + lVar18);
                  uVar31 = uVar31 + 1;
                  lVar34 = lVar34 + lVar33;
                  auVar40 = vpmaxub_avx(auVar46._0_16_,*pauVar29);
                  auVar46 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar45._0_16_,*pauVar1);
                  auVar45 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar44._0_16_,*pauVar2);
                  auVar44 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar37._0_16_,*pauVar3);
                  auVar37 = ZEXT1664(auVar40);
                } while (uVar31 < uVar36);
              }
              auVar40 = auVar37._0_16_;
              auVar41 = auVar44._0_16_;
              auVar42 = auVar45._0_16_;
              auVar43 = auVar46._0_16_;
              uVar19 = uVar19 + 1;
              lVar22 = lVar22 + param_2;
            } while (uVar19 < param_8);
          }
          uVar27 = uVar27 + 1;
          lVar12 = lVar12 + 0x10;
          *pauStack_260 = auVar43;
          *(undefined1 (*) [16])(*pauStack_260 + param_4) = auVar42;
          *(undefined1 (*) [16])(*pauStack_260 + param_4 * 2) = auVar41;
          *(undefined1 (*) [16])(*pauStack_260 + lVar25) = auVar40;
          pauStack_260 = pauStack_260 + 1;
          uVar17 = uVar17 + 0x10;
          lVar14 = lVar14 + 0x10;
        } while (uVar27 < uVar15 >> 4);
      }
      uVar27 = 0;
      lVar11 = lVar12;
      if ((longlong)uVar17 < (longlong)uVar9) {
        uVar15 = (uVar9 + 7) - uVar17;
        do {
          auVar37 = ZEXT1664((undefined1  [16])0x0);
          uVar39 = 0;
          auStack_f8 = (undefined1  [16])0x0;
          auStack_f8._0_8_ = 0;
          auStack_e8 = (undefined1  [16])0x0;
          auStack_e8._0_8_ = 0;
          auStack_d8 = (undefined1  [16])0x0;
          auStack_d8._0_8_ = 0;
          if (0 < (longlong)param_8) {
            auVar46 = ZEXT1664((undefined1  [16])0x0);
            uVar19 = 0;
            auVar45 = ZEXT1664((undefined1  [16])0x0);
            lVar14 = 0;
            auVar44 = ZEXT1664((undefined1  [16])0x0);
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar19 * 4);
              lVar22 = 0;
              if (uVar36 != 0) {
                lVar34 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar19 * 4) * param_10);
                do {
                  uVar31 = uVar31 + 1;
                  auVar40._8_8_ = 0;
                  auVar40._0_8_ = *(ulonglong *)(lVar22 + lVar12 + uVar27 * 8 + lVar14 + lVar34);
                  auVar40 = vpmaxub_avx(auVar37._0_16_,auVar40);
                  auVar37 = ZEXT1664(auVar40);
                  puVar4 = (ulonglong *)
                           (lVar22 + lVar12 + param_2 * 2 + uVar27 * 8 + lVar14 + lVar34);
                  auVar41._8_8_ = 0;
                  auVar41._0_8_ =
                       *(ulonglong *)(lVar22 + lVar34 + param_2 + lVar12 + uVar27 * 8 + lVar14);
                  auStack_f8 = vpmaxub_avx(auVar46._0_16_,auVar41);
                  auVar46 = ZEXT1664(auStack_f8);
                  puVar5 = (ulonglong *)(lVar22 + lVar12 + lVar24 + uVar27 * 8 + lVar14 + lVar34);
                  lVar22 = lVar22 + lVar33;
                  auVar42._8_8_ = 0;
                  auVar42._0_8_ = *puVar4;
                  auStack_e8 = vpmaxub_avx(auVar45._0_16_,auVar42);
                  auVar45 = ZEXT1664(auStack_e8);
                  auVar43._8_8_ = 0;
                  auVar43._0_8_ = *puVar5;
                  auStack_d8 = vpmaxub_avx(auVar44._0_16_,auVar43);
                  auVar44 = ZEXT1664(auStack_d8);
                } while (uVar31 < uVar36);
              }
              uVar39 = auVar37._0_8_;
              uVar19 = uVar19 + 1;
              lVar14 = lVar14 + param_2;
            } while (uVar19 < param_8);
          }
          *(undefined8 *)*pauStack_260 = uVar39;
          uVar27 = uVar27 + 1;
          lVar11 = lVar11 + 8;
          *(undefined8 *)(*pauStack_260 + param_4) = auStack_f8._0_8_;
          uVar17 = uVar17 + 8;
          *(undefined8 *)(*pauStack_260 + param_4 * 2) = auStack_e8._0_8_;
          *(undefined8 *)(*pauStack_260 + lVar25) = auStack_d8._0_8_;
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 8);
        } while (uVar27 < uVar15 >> 3);
      }
      uVar27 = 0;
      lVar12 = lVar11;
      if ((longlong)uVar17 < (longlong)uVar10) {
        uVar15 = (uVar10 + 3) - uVar17;
        do {
          auVar46 = ZEXT1664((undefined1  [16])0x0);
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          auVar44 = ZEXT1664((undefined1  [16])0x0);
          auVar37 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_8) {
            uVar19 = 0;
            lVar14 = 0;
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar19 * 4);
              lVar22 = 0;
              if (uVar36 != 0) {
                lVar34 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar19 * 4) * param_10);
                do {
                  auVar40 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar22 + lVar11 + uVar27 * 4 + lVar14 + lVar34),0);
                  uVar31 = uVar31 + 1;
                  auVar41 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar22 + lVar34 + param_2 + lVar11 + uVar27 * 4 + lVar14),
                                        0);
                  auVar42 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar22 + lVar11 + param_2 * 2 + uVar27 * 4 + lVar14 +
                                                   lVar34),0);
                  auVar43 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar22 + lVar11 + lVar24 + uVar27 * 4 + lVar14 + lVar34),0
                                       );
                  auVar40 = vpmaxub_avx(auVar46._0_16_,auVar40);
                  auVar46 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar45._0_16_,auVar41);
                  auVar45 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar44._0_16_,auVar42);
                  auVar44 = ZEXT1664(auVar40);
                  lVar22 = lVar22 + lVar33;
                  auVar40 = vpmaxub_avx(auVar37._0_16_,auVar43);
                  auVar37 = ZEXT1664(auVar40);
                } while (uVar31 < uVar36);
              }
              uVar19 = uVar19 + 1;
              lVar14 = lVar14 + param_2;
            } while (uVar19 < param_8);
          }
          uVar27 = uVar27 + 1;
          lVar12 = lVar12 + 4;
          *(int *)*pauStack_260 = auVar46._0_4_;
          uVar17 = uVar17 + 4;
          *(int *)(*pauStack_260 + param_4) = auVar45._0_4_;
          *(int *)(*pauStack_260 + param_4 * 2) = auVar44._0_4_;
          *(int *)(*pauStack_260 + lVar25) = auVar37._0_4_;
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 4);
        } while (uVar27 < uVar15 >> 2);
      }
      uVar27 = 0;
      lVar11 = lVar12;
      if ((longlong)uVar17 < (longlong)uVar13) {
        uVar15 = (uVar13 + 1) - uVar17;
        do {
          auVar46 = ZEXT1664((undefined1  [16])0x0);
          auVar43 = (undefined1  [16])0x0;
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          auVar42 = (undefined1  [16])0x0;
          auVar44 = ZEXT1664((undefined1  [16])0x0);
          auVar41 = (undefined1  [16])0x0;
          auVar37 = ZEXT1664((undefined1  [16])0x0);
          auVar40 = (undefined1  [16])0x0;
          if (0 < (longlong)param_8) {
            uVar19 = 0;
            lVar14 = 0;
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar19 * 4);
              lVar22 = 0;
              if (uVar36 != 0) {
                lVar34 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar19 * 4) * param_10);
                do {
                  uVar31 = uVar31 + 1;
                  auVar40 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar22 + lVar12 + uVar27 * 2 + lVar14 + lVar34),0);
                  auVar41 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar22 + lVar34 + param_2 + lVar12 + uVar27 * 2 +
                                                                  lVar14),0);
                  auVar40 = vpmaxub_avx(auVar46._0_16_,auVar40);
                  auVar46 = ZEXT1664(auVar40);
                  auVar40 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar22 + lVar12 + param_2 * 2 + uVar27 * 2 + lVar14
                                                         + lVar34),0);
                  auVar41 = vpmaxub_avx(auVar45._0_16_,auVar41);
                  auVar45 = ZEXT1664(auVar41);
                  auVar41 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar22 + lVar12 + lVar24 + uVar27 * 2 + lVar14 +
                                                         lVar34),0);
                  lVar22 = lVar22 + lVar33;
                  auVar40 = vpmaxub_avx(auVar44._0_16_,auVar40);
                  auVar44 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar37._0_16_,auVar41);
                  auVar37 = ZEXT1664(auVar40);
                } while (uVar31 < uVar36);
              }
              auVar40 = auVar37._0_16_;
              auVar41 = auVar44._0_16_;
              auVar42 = auVar45._0_16_;
              auVar43 = auVar46._0_16_;
              uVar19 = uVar19 + 1;
              lVar14 = lVar14 + param_2;
            } while (uVar19 < param_8);
          }
          uVar27 = uVar27 + 1;
          lVar11 = lVar11 + 2;
          vpextrw_avx(auVar43,0);
          uVar17 = uVar17 + 2;
          vpextrw_avx(auVar42,0);
          vpextrw_avx(auVar41,0);
          vpextrw_avx(auVar40,0);
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 2);
        } while (uVar27 < uVar15 >> 1);
      }
      uVar27 = 0;
      if ((longlong)uVar17 < (longlong)param_5) {
        do {
          auVar46 = ZEXT1664((undefined1  [16])0x0);
          auVar45 = ZEXT1664((undefined1  [16])0x0);
          auVar44 = ZEXT1664((undefined1  [16])0x0);
          auVar37 = ZEXT1664((undefined1  [16])0x0);
          if (0 < (longlong)param_8) {
            uVar15 = 0;
            lVar12 = 0;
            do {
              uVar36 = 0;
              uVar19 = (ulonglong)*(ushort *)(lVar35 + uVar15 * 4);
              lVar14 = 0;
              if (uVar19 != 0) {
                lVar22 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar15 * 4) * param_10);
                do {
                  auVar40 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar14 + lVar11 + uVar27 + lVar12 + lVar22),
                                        0);
                  uVar36 = uVar36 + 1;
                  auVar41 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar14 + param_2 + lVar11 + uVar27 + lVar12
                                                                 + lVar22),0);
                  auVar42 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar14 + lVar11 + param_2 * 2 + uVar27 +
                                                                 lVar12 + lVar22),0);
                  auVar43 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar14 + lVar22 + lVar11 + lVar24 + uVar27 +
                                                                          lVar12),0);
                  auVar40 = vpmaxub_avx(auVar46._0_16_,auVar40);
                  auVar46 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar45._0_16_,auVar41);
                  auVar45 = ZEXT1664(auVar40);
                  auVar40 = vpmaxub_avx(auVar44._0_16_,auVar42);
                  auVar44 = ZEXT1664(auVar40);
                  lVar14 = lVar14 + lVar33;
                  auVar40 = vpmaxub_avx(auVar37._0_16_,auVar43);
                  auVar37 = ZEXT1664(auVar40);
                } while (uVar36 < uVar19);
              }
              uVar15 = uVar15 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar15 < param_8);
          }
          uVar27 = uVar27 + 1;
          (*pauStack_260)[0] = auVar46[0];
          (*pauStack_260)[param_4] = auVar45[0];
          (*pauStack_260)[param_4 * 2] = auVar44[0];
          (*pauStack_260)[lVar25] = auVar37[0];
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 1);
        } while (uVar27 < param_5 - uVar17);
      }
      lVar11 = uVar20 * 4 + 4;
      uVar20 = uVar20 + 1;
      lVar30 = lVar30 + param_2 * 4;
      lVar32 = lVar32 + param_4 * 4;
    } while (uVar20 < (ulonglong)
                      ((longlong)(((ulonglong)((longlong)(uVar21 + 3) >> 1) >> 0x3e) + 3 + uVar21)
                      >> 2));
  }
  uVar20 = 0;
  lVar30 = 0;
  lVar28 = 0;
  if ((longlong)param_6 <= lVar11) {
    return;
  }
  param_9 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
  lVar32 = (longlong)param_10;
LAB_1404a33e4:
  lVar25 = 0;
  uVar21 = 0;
  lVar24 = param_1 + param_2 * lVar11 + lVar30;
  pauVar29 = (undefined1 (*) [16])(param_3 + lVar11 * param_4 + lVar28);
  if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
    lVar33 = lVar11 * param_4 + param_3 + lVar28;
    lVar23 = 0;
    do {
      auVar46 = ZEXT1664((undefined1  [16])0x0);
      auVar43 = (undefined1  [16])0x0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      auVar42 = (undefined1  [16])0x0;
      auVar44 = ZEXT1664((undefined1  [16])0x0);
      auVar41 = (undefined1  [16])0x0;
      auVar37 = ZEXT1664((undefined1  [16])0x0);
      auVar40 = (undefined1  [16])0x0;
      if (0 < (longlong)param_8) {
        auVar49 = ZEXT1664((undefined1  [16])0x0);
        uVar17 = 0;
        auVar47 = ZEXT1664((undefined1  [16])0x0);
        lVar25 = param_2 * lVar11 + param_1 + lVar30 + lVar23;
        auVar53 = ZEXT1664((undefined1  [16])0x0);
        lVar35 = 0;
        auVar51 = ZEXT1664((undefined1  [16])0x0);
        do {
          uVar15 = 0;
          uVar27 = (ulonglong)*(ushort *)(param_9 + uVar17 * 4);
          lVar12 = 0;
          if (uVar27 != 0) {
            lVar14 = (longlong)(int)((uint)*(ushort *)(param_9 + 2 + uVar17 * 4) * param_10);
            lVar22 = lVar14 + lVar35 + lVar25;
            do {
              pauVar1 = (undefined1 (*) [16])(lVar12 + lVar25 + lVar35 + lVar14);
              lVar34 = lVar12 + 0x10;
              lVar18 = lVar12 + 0x20;
              lVar16 = lVar12 + 0x30;
              uVar15 = uVar15 + 1;
              lVar12 = lVar12 + lVar32;
              auVar40 = vpmaxub_avx(auVar49._0_16_,*pauVar1);
              auVar49 = ZEXT1664(auVar40);
              auVar41 = vpmaxub_avx(auVar47._0_16_,*(undefined1 (*) [16])(lVar34 + lVar22));
              auVar47 = ZEXT1664(auVar41);
              auVar42 = vpmaxub_avx(auVar53._0_16_,*(undefined1 (*) [16])(lVar18 + lVar22));
              auVar53 = ZEXT1664(auVar42);
              auVar43 = vpmaxub_avx(auVar51._0_16_,*(undefined1 (*) [16])(lVar16 + lVar22));
              auVar51 = ZEXT1664(auVar43);
            } while (uVar15 < uVar27);
            auVar46 = ZEXT1664(auVar40);
            auVar45 = ZEXT1664(auVar41);
            auVar44 = ZEXT1664(auVar42);
            auVar37 = ZEXT1664(auVar43);
          }
          auVar40 = auVar37._0_16_;
          auVar41 = auVar44._0_16_;
          auVar42 = auVar45._0_16_;
          auVar43 = auVar46._0_16_;
          uVar17 = uVar17 + 1;
          lVar35 = lVar35 + param_2;
        } while (uVar17 < param_8);
      }
      uVar21 = uVar21 + 1;
      lVar25 = lVar23 + 0x40;
      lVar24 = lVar24 + 0x40;
      pauVar29 = pauVar29 + 4;
      *(undefined1 (*) [16])(lVar33 + lVar23) = auVar43;
      *(undefined1 (*) [16])(lVar33 + 0x10 + lVar23) = auVar42;
      *(undefined1 (*) [16])(lVar33 + 0x20 + lVar23) = auVar41;
      *(undefined1 (*) [16])(lVar33 + 0x30 + lVar23) = auVar40;
      lVar23 = lVar25;
    } while (uVar21 < (param_5 & 0xffffffffffffffc0) + 0x3f >> 6);
  }
  lVar23 = lVar25;
  lVar33 = lVar24;
  if (lVar25 < (longlong)uVar26) {
    uVar21 = 1;
    uVar17 = 0;
    uVar27 = (uVar26 - lVar25) + 0xf >> 7;
    if (uVar27 != 0) {
      lVar34 = 0;
      lVar16 = 0;
      lVar18 = 0;
      lVar33 = 0;
      lVar35 = lVar16;
      lVar12 = lVar34;
      lVar14 = lVar24;
      lVar22 = lVar18;
      do {
        uVar17 = uVar17 + 1;
        lVar14 = lVar14 + 0x10;
        lVar33 = lVar33 + 0x10;
        lVar34 = lVar34 + 0x10;
        lVar12 = lVar12 + 0x10;
        lVar35 = lVar35 + 0x10;
        lVar16 = lVar16 + 0x10;
        lVar22 = lVar22 + 0x10;
        lVar18 = lVar18 + 0x10;
      } while (uVar17 < uVar27);
      uVar21 = uVar17 * 8 + 1;
      lVar33 = lVar14 + lVar33 + lVar34 + lVar12 + lVar35 + lVar16 + lVar22 + lVar18;
    }
    lVar35 = (uVar26 - 1) - lVar25;
    uVar17 = (longlong)(lVar35 + 0x10 + ((ulonglong)(lVar35 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a37a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404a37a7 + (byte)(&DAT_143089fc0)[(uint)((int)uVar17 - (int)uVar21)]))();
      return;
    }
    uVar21 = 0;
    lVar35 = 0;
    do {
      uVar17 = 0;
      auVar37 = ZEXT1664((undefined1  [16])0x0);
      auVar40 = (undefined1  [16])0x0;
      lVar12 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar19 = 0;
          uVar15 = (ulonglong)*(ushort *)(param_9 + uVar17 * 4);
          lVar14 = 0;
          if (uVar15 != 0) {
            do {
              pauVar1 = (undefined1 (*) [16])
                        (lVar14 + (longlong)
                                  (int)((uint)*(ushort *)(param_9 + 2 + uVar17 * 4) * param_10) +
                                  lVar24 + lVar35 + lVar12);
              uVar19 = uVar19 + 1;
              lVar14 = lVar14 + lVar32;
              auVar40 = vpmaxub_avx(auVar37._0_16_,*pauVar1);
              auVar37 = ZEXT1664(auVar40);
            } while (uVar19 < uVar15);
          }
          auVar40 = auVar37._0_16_;
          uVar17 = uVar17 + 1;
          lVar12 = lVar12 + param_2;
        } while (uVar17 < param_8);
      }
      uVar21 = uVar21 + 1;
      lVar35 = lVar35 + 0x10;
      *pauVar29 = auVar40;
      pauVar29 = pauVar29 + 1;
    } while (uVar21 < (uVar26 + 0xf) - lVar25 >> 4);
    uVar21 = 1;
    uVar17 = 0;
    if (uVar27 != 0) {
      lVar22 = 0;
      lVar18 = 0;
      lVar34 = 0;
      lVar14 = 0;
      lVar24 = lVar14;
      lVar35 = lVar34;
      lVar12 = lVar22;
      do {
        uVar17 = uVar17 + 1;
        lVar23 = lVar23 + 0x10;
        lVar12 = lVar12 + 0x10;
        lVar22 = lVar22 + 0x10;
        lVar18 = lVar18 + 0x10;
        lVar35 = lVar35 + 0x10;
        lVar34 = lVar34 + 0x10;
        lVar14 = lVar14 + 0x10;
        lVar24 = lVar24 + 0x10;
      } while (uVar17 < (uVar26 - lVar25) + 0xf >> 7);
      uVar21 = uVar17 * 8 + 1;
      lVar23 = lVar23 + lVar12 + lVar22 + lVar18 + lVar35 + lVar34 + lVar14 + lVar24;
    }
    lVar25 = (uVar26 - 1) - lVar25;
    uVar17 = (longlong)(lVar25 + 0x10 + ((ulonglong)(lVar25 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a3a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404a3a8f + (byte)(&DAT_143089fc8)[(uint)((int)uVar17 - (int)uVar21)]))();
      return;
    }
  }
  uVar21 = 0;
  lVar25 = lVar33;
  if (lVar23 < (longlong)uVar9) {
    uVar17 = (uVar9 + 7) - lVar23;
    do {
      uVar27 = 0;
      auVar37 = ZEXT1664((undefined1  [16])0x0);
      uVar39 = 0;
      lVar24 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar19 = 0;
          uVar15 = (ulonglong)*(ushort *)(param_9 + uVar27 * 4);
          lVar35 = 0;
          if (uVar15 != 0) {
            do {
              puVar4 = (ulonglong *)
                       (lVar35 + (longlong)
                                 (int)((uint)*(ushort *)(param_9 + 2 + uVar27 * 4) * param_10) +
                                 lVar33 + uVar21 * 8 + lVar24);
              uVar19 = uVar19 + 1;
              lVar35 = lVar35 + lVar32;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = *puVar4;
              auVar40 = vpmaxub_avx(auVar37._0_16_,auVar38);
              auVar37 = ZEXT1664(auVar40);
            } while (uVar19 < uVar15);
          }
          uVar39 = auVar37._0_8_;
          uVar27 = uVar27 + 1;
          lVar24 = lVar24 + param_2;
        } while (uVar27 < param_8);
      }
      uVar21 = uVar21 + 1;
      lVar25 = lVar25 + 8;
      *(undefined8 *)*pauVar29 = uVar39;
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 8);
      lVar23 = lVar23 + 8;
    } while (uVar21 < uVar17 >> 3);
  }
  lVar24 = lVar23;
  lVar33 = lVar25;
  if (lVar23 < (longlong)uVar10) {
    uVar21 = 1;
    uVar17 = 0;
    uVar27 = (uVar10 - lVar23) + 3 >> 5;
    if (uVar27 != 0) {
      lVar16 = 0;
      lVar18 = 0;
      lVar34 = 0;
      lVar33 = 0;
      lVar35 = lVar25;
      lVar12 = lVar16;
      lVar14 = lVar18;
      lVar22 = lVar34;
      do {
        uVar17 = uVar17 + 1;
        lVar35 = lVar35 + 4;
        lVar33 = lVar33 + 4;
        lVar12 = lVar12 + 4;
        lVar16 = lVar16 + 4;
        lVar14 = lVar14 + 4;
        lVar18 = lVar18 + 4;
        lVar22 = lVar22 + 4;
        lVar34 = lVar34 + 4;
      } while (uVar17 < uVar27);
      uVar21 = uVar17 * 8 + 1;
      lVar33 = lVar35 + lVar33 + lVar12 + lVar16 + lVar14 + lVar18 + lVar22 + lVar34;
    }
    lVar35 = (uVar10 - 1) - lVar23;
    uVar17 = (longlong)(lVar35 + 4 + ((ulonglong)(lVar35 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a3da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404a3dab + (byte)(&DAT_143089fd0)[(uint)((int)uVar17 - (int)uVar21)]))();
      return;
    }
    uVar21 = 0;
    do {
      uVar15 = 0;
      auVar37 = ZEXT1664((undefined1  [16])0x0);
      lVar35 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar19 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar15 * 4);
          lVar12 = 0;
          if (uVar36 != 0) {
            do {
              auVar40 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)
                                     (lVar12 + (longlong)
                                               (int)((uint)*(ushort *)(param_9 + 2 + uVar15 * 4) *
                                                    param_10) + lVar25 + uVar21 * 4 + lVar35),0);
              uVar19 = uVar19 + 1;
              lVar12 = lVar12 + lVar32;
              auVar40 = vpmaxub_avx(auVar37._0_16_,auVar40);
              auVar37 = ZEXT1664(auVar40);
            } while (uVar19 < uVar36);
          }
          uVar15 = uVar15 + 1;
          lVar35 = lVar35 + param_2;
        } while (uVar15 < param_8);
      }
      uVar21 = uVar21 + 1;
      *(int *)*pauVar29 = auVar37._0_4_;
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 4);
    } while (uVar21 < (uVar10 + 3) - lVar23 >> 2);
    uVar21 = 0;
    if ((longlong)uVar17 < 8) {
      uVar15 = uVar21;
      if (uVar17 != 0) goto LAB_1404a4000;
    }
    else {
      uVar15 = uVar17 & 0xfffffffffffffff8;
      do {
        if (0 < (longlong)param_8) {
          if (uVar15 < uVar17) goto LAB_1404a4005;
          goto LAB_1404a402e;
        }
        uVar21 = uVar21 + 8;
      } while (uVar21 < uVar15);
      if ((((uVar15 < uVar17) && (uVar15 + 1 < uVar17)) && (uVar15 + 2 < uVar17)) &&
         (uVar15 = uVar15 + 3, uVar15 < uVar17)) {
        do {
          uVar15 = uVar15 + 1;
          if (uVar17 <= uVar15) goto LAB_1404a402e;
LAB_1404a4000:
        } while ((longlong)param_8 < 1);
LAB_1404a4005:
        uVar21 = 0;
        while( true ) {
          do {
            uVar21 = uVar21 + 1;
          } while (uVar21 < param_8);
          uVar15 = uVar15 + 1;
          if (uVar17 <= uVar15) break;
          uVar21 = 0;
        }
      }
    }
LAB_1404a402e:
    uVar17 = 0;
    uVar21 = 1;
    if (uVar27 != 0) {
      lVar22 = 0;
      lVar18 = 0;
      lVar34 = 0;
      lVar14 = 0;
      lVar25 = lVar14;
      lVar35 = lVar34;
      lVar12 = lVar22;
      do {
        uVar17 = uVar17 + 1;
        lVar24 = lVar24 + 4;
        lVar12 = lVar12 + 4;
        lVar22 = lVar22 + 4;
        lVar18 = lVar18 + 4;
        lVar35 = lVar35 + 4;
        lVar34 = lVar34 + 4;
        lVar14 = lVar14 + 4;
        lVar25 = lVar25 + 4;
      } while (uVar17 < (uVar10 - lVar23) + 3 >> 5);
      uVar21 = uVar17 * 8 + 1;
      lVar24 = lVar24 + lVar12 + lVar22 + lVar18 + lVar35 + lVar34 + lVar14 + lVar25;
    }
    lVar23 = (uVar10 - 1) - lVar23;
    uVar17 = (longlong)(lVar23 + 4 + ((ulonglong)(lVar23 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404a416e + (byte)(&DAT_143089fd8)[(uint)((int)uVar17 - (int)uVar21)]))();
      return;
    }
  }
  lVar25 = lVar24;
  lVar23 = lVar33;
  if (lVar24 < (longlong)uVar13) {
    uVar21 = 1;
    uVar17 = 0;
    uVar27 = (uVar13 - lVar24) + 1 >> 4;
    if (uVar27 != 0) {
      lVar16 = 0;
      lVar18 = 0;
      lVar34 = 0;
      lVar23 = 0;
      lVar35 = lVar33;
      lVar12 = lVar16;
      lVar14 = lVar18;
      lVar22 = lVar34;
      do {
        uVar17 = uVar17 + 1;
        lVar35 = lVar35 + 2;
        lVar23 = lVar23 + 2;
        lVar12 = lVar12 + 2;
        lVar16 = lVar16 + 2;
        lVar14 = lVar14 + 2;
        lVar18 = lVar18 + 2;
        lVar22 = lVar22 + 2;
        lVar34 = lVar34 + 2;
      } while (uVar17 < uVar27);
      uVar21 = uVar17 * 8 + 1;
      lVar23 = lVar35 + lVar23 + lVar12 + lVar16 + lVar14 + lVar18 + lVar22 + lVar34;
    }
    lVar35 = (uVar13 - 1) - lVar24;
    uVar17 = (lVar35 + 2) - (lVar35 + 2 >> 0x3f) >> 1;
    if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a42fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404a42ff + (byte)(&DAT_143089fe0)[(uint)((int)uVar17 - (int)uVar21)]))();
      return;
    }
    uVar21 = 0;
    do {
      uVar15 = 0;
      auVar37 = ZEXT1664((undefined1  [16])0x0);
      auVar40 = (undefined1  [16])0x0;
      lVar35 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar19 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar15 * 4);
          lVar12 = 0;
          if (uVar36 != 0) {
            do {
              uVar19 = uVar19 + 1;
              auVar40 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)
                                           (lVar12 + (longlong)
                                                     (int)((uint)*(ushort *)
                                                                  (param_9 + 2 + uVar15 * 4) *
                                                          param_10) + lVar33 + uVar21 * 2 + lVar35),
                                    0);
              lVar12 = lVar12 + lVar32;
              auVar40 = vpmaxub_avx(auVar37._0_16_,auVar40);
              auVar37 = ZEXT1664(auVar40);
            } while (uVar19 < uVar36);
          }
          auVar40 = auVar37._0_16_;
          uVar15 = uVar15 + 1;
          lVar35 = lVar35 + param_2;
        } while (uVar15 < param_8);
      }
      uVar21 = uVar21 + 1;
      vpextrw_avx(auVar40,0);
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 2);
    } while (uVar21 < (uVar13 + 1) - lVar24 >> 1);
    uVar21 = 0;
    if (7 < (longlong)uVar17) {
      uVar15 = uVar17 & 0xfffffffffffffff8;
LAB_1404a44e0:
      if ((longlong)param_8 < 1) goto code_r0x0001404a44e9;
      uVar19 = 0;
      while( true ) {
        do {
          uVar19 = uVar19 + 1;
        } while (uVar19 < param_8);
        uVar21 = uVar21 + 8;
        if (uVar15 <= uVar21) break;
        uVar19 = 0;
      }
      if (uVar15 < uVar17) goto LAB_1404a4606;
      goto LAB_1404a460a;
    }
    if (uVar17 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_1404a4c7c;
          if (param_8 < 3) goto LAB_1404a4c7c;
          if (param_8 < 4) goto LAB_1404a4c7c;
          if (param_8 < 5) goto LAB_1404a4c7c;
          if (param_8 < 6) goto LAB_1404a4c7c;
          if (param_8 < 7) goto LAB_1404a4c7c;
          if (param_8 < 8) goto LAB_1404a4c7c;
          if (param_8 < 9) goto LAB_1404a4c7c;
          uVar19 = 9;
          if (param_8 < 10) goto LAB_1404a4c8d;
          while( true ) {
            do {
              uVar19 = uVar19 + 1;
            } while (uVar19 < param_8);
LAB_1404a4c8d:
            if ((longlong)param_8 < 1) break;
LAB_1404a4c7c:
            uVar15 = uVar21 + 1;
            if (uVar17 <= uVar15) goto LAB_1404a460a;
LAB_1404a4606:
            uVar19 = 0;
            uVar21 = uVar15;
          }
          uVar15 = uVar21 + 1;
          if (uVar17 <= uVar15) goto LAB_1404a460a;
LAB_1404a4503:
          uVar21 = uVar15 + 1;
          if (uVar17 <= uVar21) goto LAB_1404a460a;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar17);
    }
    goto LAB_1404a460a;
  }
  goto LAB_1404a475e;
code_r0x0001404a44e9:
  uVar21 = uVar21 + 8;
  if (uVar15 <= uVar21) goto code_r0x0001404a44f2;
  goto LAB_1404a44e0;
code_r0x0001404a44f2:
  if (uVar15 < uVar17) goto LAB_1404a4503;
LAB_1404a460a:
  uVar17 = 0;
  uVar21 = 1;
  if (uVar27 != 0) {
    lVar22 = 0;
    lVar34 = 0;
    lVar18 = 0;
    lVar14 = 0;
    lVar25 = 0;
    lVar33 = lVar24;
    lVar35 = lVar22;
    lVar12 = lVar14;
    do {
      uVar17 = uVar17 + 1;
      lVar33 = lVar33 + 2;
      lVar25 = lVar25 + 2;
      lVar22 = lVar22 + 2;
      lVar35 = lVar35 + 2;
      lVar34 = lVar34 + 2;
      lVar18 = lVar18 + 2;
      lVar12 = lVar12 + 2;
      lVar14 = lVar14 + 2;
    } while (uVar17 < (uVar13 - lVar24) + 1 >> 4);
    uVar21 = uVar17 * 8 + 1;
    lVar25 = lVar33 + lVar25 + lVar22 + lVar35 + lVar34 + lVar18 + lVar12 + lVar14;
  }
  lVar24 = (uVar13 - 1) - lVar24;
  uVar17 = (lVar24 + 2) - (lVar24 + 2 >> 0x3f) >> 1;
  if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a4740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1404a4742 + (byte)(&DAT_143089fe8)[(uint)((int)uVar17 - (int)uVar21)]))();
    return;
  }
LAB_1404a475e:
  if (lVar25 < (longlong)param_5) {
    uVar21 = 1;
    uVar27 = param_5 - lVar25;
    uVar17 = 0;
    uVar15 = uVar27 >> 3;
    if (uVar15 != 0) {
      do {
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar15);
      uVar21 = uVar17 * 8 + 1;
    }
    uVar17 = (param_5 - (lVar25 + 1)) + 1;
    if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a47e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_143089ff0)[(uint)((int)uVar17 - (int)uVar21)] + 0x1404a47eb)
      )();
      return;
    }
    uVar21 = 0;
    do {
      uVar19 = 0;
      auVar37 = ZEXT1664((undefined1  [16])0x0);
      lVar25 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar31 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar19 * 4);
          lVar24 = 0;
          if (uVar36 != 0) {
            do {
              auVar40 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar24 + lVar23 + uVar21 + lVar25 +
                                                             (longlong)
                                                             (int)((uint)*(ushort *)
                                                                          (param_9 + 2 + uVar19 * 4)
                                                                  * param_10)),0);
              uVar31 = uVar31 + 1;
              lVar24 = lVar24 + lVar32;
              auVar40 = vpmaxub_avx(auVar37._0_16_,auVar40);
              auVar37 = ZEXT1664(auVar40);
            } while (uVar31 < uVar36);
          }
          uVar19 = uVar19 + 1;
          lVar25 = lVar25 + param_2;
        } while (uVar19 < param_8);
      }
      uVar21 = uVar21 + 1;
      (*pauVar29)[0] = auVar37[0];
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 1);
    } while (uVar21 < uVar27);
    uVar21 = 0;
    if ((longlong)uVar17 < 8) {
      if (uVar17 != 0) goto LAB_1404a49a0;
    }
    else {
      uVar19 = uVar17 & 0xfffffffffffffff8;
      do {
        if (0 < (longlong)param_8) {
          uVar36 = 0;
          while( true ) {
            do {
              uVar36 = uVar36 + 1;
            } while (uVar36 < param_8);
            uVar21 = uVar21 + 8;
            if (uVar19 <= uVar21) break;
            uVar36 = 0;
          }
          if (uVar19 < uVar17) goto LAB_1404a4a86;
          uVar21 = 0;
          if (1 < param_8) goto LAB_1404a4aa4;
          goto LAB_1404a4ac9;
        }
        uVar21 = uVar21 + 8;
      } while (uVar21 < uVar19);
      while ((uVar19 < uVar17 && (uVar21 = uVar19 + 1, uVar21 < uVar17))) {
LAB_1404a49a0:
        while ((longlong)param_8 < 1) {
          uVar21 = uVar21 + 1;
          if (uVar17 <= uVar21) {
            uVar21 = 0;
            goto LAB_1404a4be0;
          }
        }
        if (param_8 < 2) goto LAB_1404a4c12;
        if (param_8 < 3) goto LAB_1404a4c12;
        if (param_8 < 4) goto LAB_1404a4c12;
        if (param_8 < 5) goto LAB_1404a4c12;
        if (param_8 < 6) goto LAB_1404a4c12;
        if (param_8 < 7) goto LAB_1404a4c12;
        if (param_8 < 8) goto LAB_1404a4c12;
        if (param_8 < 9) goto LAB_1404a4c12;
        uVar36 = 9;
        if (param_8 < 10) goto LAB_1404a4c0d;
        while( true ) {
          do {
            uVar36 = uVar36 + 1;
          } while (uVar36 < param_8);
LAB_1404a4c0d:
          if ((longlong)param_8 < 1) break;
LAB_1404a4c12:
          uVar19 = uVar21 + 1;
          if (uVar17 <= uVar19) {
            uVar21 = 0;
            goto LAB_1404a4ba0;
          }
LAB_1404a4a86:
          uVar36 = 0;
          uVar21 = uVar19;
        }
        uVar19 = uVar21 + 1;
      }
    }
    uVar21 = 0;
    do {
      if (0 < (longlong)param_8) {
        if (param_8 < 2) goto LAB_1404a4ac9;
LAB_1404a4aa4:
        uVar19 = 2;
        if (2 < param_8) goto LAB_1404a4bc0;
        while (0 < (longlong)param_8) {
LAB_1404a4ac9:
          uVar21 = uVar21 + 1;
          if (uVar27 <= uVar21) goto LAB_1404a4ad5;
LAB_1404a4ba0:
          uVar19 = 0;
LAB_1404a4bc0:
          do {
            uVar19 = uVar19 + 1;
          } while (uVar19 < param_8);
        }
        uVar21 = uVar21 + 1;
        if (uVar27 <= uVar21) break;
      }
LAB_1404a4be0:
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar27);
LAB_1404a4ad5:
    uVar21 = 1;
    uVar27 = 0;
    if (uVar15 != 0) {
      do {
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar15);
      uVar21 = uVar27 * 8 + 1;
    }
    if (uVar21 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001404a4b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_143089ff8)[(uint)((int)uVar17 - (int)uVar21)] + 0x1404a4b36)
      )();
      return;
    }
  }
  uVar20 = uVar20 + 1;
  lVar30 = lVar30 + param_2;
  lVar28 = lVar28 + param_4;
  if (param_6 - lVar11 <= uVar20) {
    return;
  }
  goto LAB_1404a33e4;
}

