
void FUN_1404e2e00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
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
  undefined1 in_ZMM0 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar40 [64];
  undefined1 in_ZMM4 [64];
  undefined1 in_ZMM5 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auVar52 [64];
  undefined1 (*pauStack_260) [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  
  auVar38 = in_ZMM4._0_16_;
  uVar17 = param_5 & 0xfffffffffffffffc;
  lVar10 = 0;
  uVar9 = param_5 & 0xfffffffffffffff0;
  uVar26 = param_5 & 0xfffffffffffffff8;
  uVar12 = param_5 & 0xfffffffffffffffe;
  uVar22 = 0;
  uVar18 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar18) {
    lVar33 = (longlong)param_10;
    auVar38 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar38);
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
      uVar16 = 0;
      lVar10 = param_1 + lVar30;
      if (0 < (longlong)(param_5 & 0xffffffffffffffe0)) {
        uVar16 = uVar27;
        do {
          auVar38 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
          in_ZMM5 = ZEXT1664(auVar38);
          auVar41 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
          in_ZMM4 = ZEXT1664(auVar41);
          auVar47 = ZEXT1664(auVar38);
          auVar48 = ZEXT1664(auVar38);
          auVar49 = ZEXT1664(auVar38);
          auVar50 = ZEXT1664(auVar38);
          auVar52 = ZEXT1664(auVar38);
          auVar37 = ZEXT1664(auVar38);
          auVar40 = ZEXT1664(auVar38);
          auVar46 = ZEXT1664(auVar38);
          auVar41 = auVar38;
          auVar42 = auVar38;
          auVar43 = auVar38;
          auVar44 = auVar38;
          auVar39 = auVar38;
          auVar51 = auVar38;
          auVar45 = auVar38;
          if (0 < (longlong)param_8) {
            uVar14 = 0;
            lVar11 = lVar28 + lVar30 + uVar16;
            lVar13 = 0;
            do {
              uVar36 = 0;
              uVar20 = (ulonglong)*(ushort *)(lVar35 + uVar14 * 4);
              lVar21 = 0;
              if (uVar20 != 0) {
                lVar19 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar14 * 4) * param_10);
                lVar34 = lVar13 + lVar19;
                do {
                  pauVar29 = (undefined1 (*) [16])(lVar21 + lVar19 + lVar11 + lVar13);
                  pauVar1 = (undefined1 (*) [16])
                            (lVar21 + param_2 + lVar28 + lVar30 + uVar16 + lVar13 + lVar19);
                  pauVar2 = (undefined1 (*) [16])
                            (lVar21 + lVar28 + param_2 * 2 + lVar30 + uVar16 + lVar13 + lVar19);
                  pauVar3 = (undefined1 (*) [16])
                            (lVar21 + lVar24 + lVar28 + lVar30 + uVar16 + lVar13 + lVar19);
                  lVar15 = lVar21 + 0x10;
                  lVar6 = lVar21 + 0x10;
                  lVar7 = lVar21 + 0x10;
                  lVar8 = lVar21 + 0x10;
                  uVar36 = uVar36 + 1;
                  lVar21 = lVar21 + lVar33;
                  auVar38 = vpminub_avx(auVar47._0_16_,*pauVar29);
                  auVar47 = ZEXT1664(auVar38);
                  auVar41 = vpminub_avx(auVar48._0_16_,*pauVar1);
                  auVar48 = ZEXT1664(auVar41);
                  auVar42 = vpminub_avx(auVar49._0_16_,*pauVar2);
                  auVar49 = ZEXT1664(auVar42);
                  auVar42 = vpminub_avx(auVar50._0_16_,*pauVar3);
                  auVar50 = ZEXT1664(auVar42);
                  auVar42 = vpminub_avx(auVar52._0_16_,
                                        *(undefined1 (*) [16])(lVar15 + lVar34 + lVar11));
                  auVar52 = ZEXT1664(auVar42);
                  auVar42 = vpminub_avx(auVar37._0_16_,
                                        *(undefined1 (*) [16])
                                         (lVar6 + param_2 * 5 + lVar23 + lVar30 + uVar16 + lVar34));
                  auVar37 = ZEXT1664(auVar42);
                  auVar42 = vpminub_avx(auVar40._0_16_,
                                        *(undefined1 (*) [16])
                                         (lVar7 + param_2 * 6 + lVar23 + lVar30 + uVar16 + lVar34));
                  auVar40 = ZEXT1664(auVar42);
                  auVar42 = vpminub_avx(auVar46._0_16_,
                                        *(undefined1 (*) [16])
                                         (lVar8 + param_2 * 7 + lVar23 + lVar30 + uVar16 + lVar34));
                  auVar46 = ZEXT1664(auVar42);
                } while (uVar36 < uVar20);
                in_ZMM5 = ZEXT1664(auVar41);
                in_ZMM4 = ZEXT1664(auVar38);
              }
              auVar45 = auVar46._0_16_;
              auVar51 = auVar52._0_16_;
              auVar39 = auVar50._0_16_;
              auVar44 = auVar49._0_16_;
              auVar43 = auVar48._0_16_;
              auVar42 = auVar47._0_16_;
              auVar41 = auVar40._0_16_;
              auVar38 = auVar37._0_16_;
              uVar14 = uVar14 + 1;
              lVar13 = lVar13 + param_2;
            } while (uVar14 < param_8);
          }
          *pauStack_260 = auVar42;
          *(undefined1 (*) [16])(*pauStack_260 + param_4) = auVar43;
          *(undefined1 (*) [16])(*pauStack_260 + param_4 * 2) = auVar44;
          *(undefined1 (*) [16])(*pauStack_260 + lVar25) = auVar39;
          pauStack_260[1] = auVar51;
          *(undefined1 (*) [16])(pauStack_260[1] + param_4) = auVar38;
          *(undefined1 (*) [16])(pauStack_260[1] + param_4 * 2) = auVar41;
          *(undefined1 (*) [16])(pauStack_260[1] + lVar25) = auVar45;
          uVar27 = uVar27 + 1;
          uVar16 = uVar16 + 0x20;
          lVar10 = lVar10 + 0x20;
          pauStack_260 = pauStack_260 + 2;
        } while (uVar27 < (param_5 & 0xffffffffffffffe0) + 0x1f >> 5);
        auVar38 = vpcmpeqd_avx(auVar41,auVar41);
        in_ZMM1 = ZEXT1664(auVar38);
      }
      in_ZMM0 = ZEXT1664((undefined1  [16])0x0);
      uVar27 = 0;
      lVar13 = 0;
      auVar38 = in_ZMM1._0_16_;
      lVar11 = lVar10;
      if ((longlong)uVar16 < (longlong)uVar9) {
        uVar14 = (uVar9 + 0xf) - uVar16;
        do {
          in_ZMM4 = ZEXT1664(auVar38);
          auVar41 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
          in_ZMM5 = ZEXT1664(auVar41);
          auVar47 = ZEXT1664(auVar38);
          auVar46 = ZEXT1664(auVar38);
          auVar40 = ZEXT1664(auVar38);
          auVar37 = ZEXT1664(auVar38);
          auVar41 = auVar38;
          auVar42 = auVar38;
          auVar43 = auVar38;
          auVar44 = auVar38;
          if (0 < (longlong)param_8) {
            uVar20 = 0;
            lVar21 = 0;
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar20 * 4);
              lVar34 = 0;
              if (uVar36 != 0) {
                lVar19 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar20 * 4) * param_10);
                do {
                  pauVar29 = (undefined1 (*) [16])(lVar34 + lVar10 + lVar13 + lVar21 + lVar19);
                  pauVar1 = (undefined1 (*) [16])
                            (lVar34 + lVar19 + param_2 + lVar10 + lVar13 + lVar21);
                  pauVar2 = (undefined1 (*) [16])
                            (lVar34 + lVar10 + param_2 * 2 + lVar13 + lVar21 + lVar19);
                  pauVar3 = (undefined1 (*) [16])
                            (lVar34 + lVar10 + lVar24 + lVar13 + lVar21 + lVar19);
                  uVar31 = uVar31 + 1;
                  lVar34 = lVar34 + lVar33;
                  auVar41 = vpminub_avx(auVar47._0_16_,*pauVar29);
                  auVar47 = ZEXT1664(auVar41);
                  auVar42 = vpminub_avx(auVar46._0_16_,*pauVar1);
                  auVar46 = ZEXT1664(auVar42);
                  auVar43 = vpminub_avx(auVar40._0_16_,*pauVar2);
                  auVar40 = ZEXT1664(auVar43);
                  auVar43 = vpminub_avx(auVar37._0_16_,*pauVar3);
                  auVar37 = ZEXT1664(auVar43);
                } while (uVar31 < uVar36);
                in_ZMM5 = ZEXT1664(auVar41);
                in_ZMM4 = ZEXT1664(auVar42);
              }
              auVar44 = auVar37._0_16_;
              auVar43 = auVar40._0_16_;
              auVar42 = auVar46._0_16_;
              auVar41 = auVar47._0_16_;
              uVar20 = uVar20 + 1;
              lVar21 = lVar21 + param_2;
            } while (uVar20 < param_8);
          }
          uVar27 = uVar27 + 1;
          lVar11 = lVar11 + 0x10;
          *pauStack_260 = auVar41;
          *(undefined1 (*) [16])(*pauStack_260 + param_4) = auVar42;
          *(undefined1 (*) [16])(*pauStack_260 + param_4 * 2) = auVar43;
          *(undefined1 (*) [16])(*pauStack_260 + lVar25) = auVar44;
          pauStack_260 = pauStack_260 + 1;
          uVar16 = uVar16 + 0x10;
          lVar13 = lVar13 + 0x10;
        } while (uVar27 < uVar14 >> 4);
      }
      uVar27 = 0;
      lVar10 = lVar11;
      if ((longlong)uVar16 < (longlong)uVar26) {
        uVar14 = (uVar26 + 7) - uVar16;
        do {
          auVar41 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
          in_ZMM5 = ZEXT1664(auVar41);
          auStack_d8 = auVar38;
          auStack_f8._0_8_ = in_ZMM1._0_8_;
          auStack_e8._0_8_ = in_ZMM1._0_8_;
          if (0 < (longlong)param_8) {
            uVar20 = 0;
            lVar13 = 0;
            auVar41 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
            auVar46 = ZEXT1664(auVar41);
            auVar40 = ZEXT1664(auVar38);
            auVar37 = ZEXT1664(auVar38);
            auStack_f8 = auVar38;
            auStack_e8 = auVar38;
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar20 * 4);
              lVar21 = 0;
              if (uVar36 != 0) {
                lVar34 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar20 * 4) * param_10);
                do {
                  uVar31 = uVar31 + 1;
                  auVar41._8_8_ = 0;
                  auVar41._0_8_ = *(ulonglong *)(lVar21 + lVar11 + uVar27 * 8 + lVar13 + lVar34);
                  auVar41 = vpminub_avx(in_ZMM5._0_16_,auVar41);
                  in_ZMM5 = ZEXT1664(auVar41);
                  puVar4 = (ulonglong *)
                           (lVar21 + lVar11 + param_2 * 2 + uVar27 * 8 + lVar13 + lVar34);
                  auVar42._8_8_ = 0;
                  auVar42._0_8_ =
                       *(ulonglong *)(lVar21 + lVar34 + param_2 + lVar11 + uVar27 * 8 + lVar13);
                  auStack_f8 = vpminub_avx(auVar46._0_16_,auVar42);
                  auVar46 = ZEXT1664(auStack_f8);
                  puVar5 = (ulonglong *)(lVar21 + lVar11 + lVar24 + uVar27 * 8 + lVar13 + lVar34);
                  lVar21 = lVar21 + lVar33;
                  auVar43._8_8_ = 0;
                  auVar43._0_8_ = *puVar4;
                  auStack_e8 = vpminub_avx(auVar40._0_16_,auVar43);
                  auVar40 = ZEXT1664(auStack_e8);
                  auVar44._8_8_ = 0;
                  auVar44._0_8_ = *puVar5;
                  auStack_d8 = vpminub_avx(auVar37._0_16_,auVar44);
                  auVar37 = ZEXT1664(auStack_d8);
                } while (uVar31 < uVar36);
              }
              uVar20 = uVar20 + 1;
              lVar13 = lVar13 + param_2;
            } while (uVar20 < param_8);
          }
          *(longlong *)*pauStack_260 = in_ZMM5._0_8_;
          uVar27 = uVar27 + 1;
          lVar10 = lVar10 + 8;
          *(undefined8 *)(*pauStack_260 + param_4) = auStack_f8._0_8_;
          uVar16 = uVar16 + 8;
          *(undefined8 *)(*pauStack_260 + param_4 * 2) = auStack_e8._0_8_;
          in_ZMM4 = ZEXT1664(auStack_d8);
          *(longlong *)(*pauStack_260 + lVar25) = auStack_d8._0_8_;
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 8);
        } while (uVar27 < uVar14 >> 3);
      }
      uVar27 = 0;
      lVar11 = lVar10;
      if ((longlong)uVar16 < (longlong)uVar17) {
        uVar14 = (uVar17 + 3) - uVar16;
        do {
          in_ZMM4 = ZEXT1664(auVar38);
          auVar41 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
          in_ZMM5 = ZEXT1664(auVar41);
          auVar47 = ZEXT1664(auVar38);
          auVar46 = ZEXT1664(auVar38);
          auVar40 = ZEXT1664(auVar38);
          auVar37 = ZEXT1664(auVar38);
          if (0 < (longlong)param_8) {
            uVar20 = 0;
            lVar13 = 0;
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar20 * 4);
              lVar21 = 0;
              if (uVar36 != 0) {
                lVar34 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar20 * 4) * param_10);
                do {
                  auVar41 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar21 + lVar10 + uVar27 * 4 + lVar13 + lVar34),0);
                  uVar31 = uVar31 + 1;
                  auVar42 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar21 + lVar34 + param_2 + lVar10 + uVar27 * 4 + lVar13),
                                        0);
                  auVar43 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar21 + lVar10 + param_2 * 2 + uVar27 * 4 + lVar13 +
                                                   lVar34),0);
                  auVar44 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar21 + lVar10 + lVar24 + uVar27 * 4 + lVar13 + lVar34),0
                                       );
                  auVar41 = vpminub_avx(auVar47._0_16_,auVar41);
                  auVar47 = ZEXT1664(auVar41);
                  auVar42 = vpminub_avx(auVar46._0_16_,auVar42);
                  auVar46 = ZEXT1664(auVar42);
                  auVar43 = vpminub_avx(auVar40._0_16_,auVar43);
                  auVar40 = ZEXT1664(auVar43);
                  lVar21 = lVar21 + lVar33;
                  auVar43 = vpminub_avx(auVar37._0_16_,auVar44);
                  auVar37 = ZEXT1664(auVar43);
                } while (uVar31 < uVar36);
                in_ZMM5 = ZEXT1664(auVar41);
                in_ZMM4 = ZEXT1664(auVar42);
              }
              uVar20 = uVar20 + 1;
              lVar13 = lVar13 + param_2;
            } while (uVar20 < param_8);
          }
          uVar27 = uVar27 + 1;
          lVar11 = lVar11 + 4;
          *(int *)*pauStack_260 = auVar47._0_4_;
          uVar16 = uVar16 + 4;
          *(int *)(*pauStack_260 + param_4) = auVar46._0_4_;
          *(int *)(*pauStack_260 + param_4 * 2) = auVar40._0_4_;
          *(int *)(*pauStack_260 + lVar25) = auVar37._0_4_;
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 4);
        } while (uVar27 < uVar14 >> 2);
      }
      uVar27 = 0;
      lVar10 = lVar11;
      if ((longlong)uVar16 < (longlong)uVar12) {
        uVar14 = (uVar12 + 1) - uVar16;
        do {
          in_ZMM4 = ZEXT1664(auVar38);
          auVar41 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
          in_ZMM5 = ZEXT1664(auVar41);
          auVar47 = ZEXT1664(auVar38);
          auVar46 = ZEXT1664(auVar38);
          auVar40 = ZEXT1664(auVar38);
          auVar37 = ZEXT1664(auVar38);
          auVar41 = auVar38;
          auVar42 = auVar38;
          auVar43 = auVar38;
          auVar44 = auVar38;
          if (0 < (longlong)param_8) {
            uVar20 = 0;
            lVar13 = 0;
            do {
              uVar31 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar35 + uVar20 * 4);
              lVar21 = 0;
              if (uVar36 != 0) {
                lVar34 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar20 * 4) * param_10);
                do {
                  uVar31 = uVar31 + 1;
                  auVar41 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar21 + lVar11 + uVar27 * 2 + lVar13 + lVar34),0);
                  auVar42 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar21 + lVar34 + param_2 + lVar11 + uVar27 * 2 +
                                                                  lVar13),0);
                  auVar43 = vpminub_avx(auVar47._0_16_,auVar41);
                  auVar47 = ZEXT1664(auVar43);
                  auVar41 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar21 + lVar11 + param_2 * 2 + uVar27 * 2 + lVar13
                                                         + lVar34),0);
                  auVar44 = vpminub_avx(auVar46._0_16_,auVar42);
                  auVar46 = ZEXT1664(auVar44);
                  auVar42 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar21 + lVar11 + lVar24 + uVar27 * 2 + lVar13 +
                                                         lVar34),0);
                  lVar21 = lVar21 + lVar33;
                  auVar41 = vpminub_avx(auVar40._0_16_,auVar41);
                  auVar40 = ZEXT1664(auVar41);
                  auVar41 = vpminub_avx(auVar37._0_16_,auVar42);
                  auVar37 = ZEXT1664(auVar41);
                } while (uVar31 < uVar36);
                in_ZMM5 = ZEXT1664(auVar43);
                in_ZMM4 = ZEXT1664(auVar44);
              }
              auVar44 = auVar37._0_16_;
              auVar43 = auVar40._0_16_;
              auVar42 = auVar46._0_16_;
              auVar41 = auVar47._0_16_;
              uVar20 = uVar20 + 1;
              lVar13 = lVar13 + param_2;
            } while (uVar20 < param_8);
          }
          uVar27 = uVar27 + 1;
          lVar10 = lVar10 + 2;
          vpextrw_avx(auVar41,0);
          uVar16 = uVar16 + 2;
          vpextrw_avx(auVar42,0);
          vpextrw_avx(auVar43,0);
          vpextrw_avx(auVar44,0);
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 2);
        } while (uVar27 < uVar14 >> 1);
      }
      uVar27 = 0;
      if ((longlong)uVar16 < (longlong)param_5) {
        do {
          in_ZMM4 = ZEXT1664(auVar38);
          auVar41 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
          in_ZMM5 = ZEXT1664(auVar41);
          auVar47 = ZEXT1664(auVar38);
          auVar46 = ZEXT1664(auVar38);
          auVar40 = ZEXT1664(auVar38);
          auVar37 = ZEXT1664(auVar38);
          if (0 < (longlong)param_8) {
            uVar14 = 0;
            lVar11 = 0;
            do {
              uVar36 = 0;
              uVar20 = (ulonglong)*(ushort *)(lVar35 + uVar14 * 4);
              lVar13 = 0;
              if (uVar20 != 0) {
                lVar21 = (longlong)(int)((uint)*(ushort *)(lVar35 + 2 + uVar14 * 4) * param_10);
                do {
                  auVar41 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar13 + lVar10 + uVar27 + lVar11 + lVar21),
                                        0);
                  uVar36 = uVar36 + 1;
                  auVar42 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar13 + param_2 + lVar10 + uVar27 + lVar11
                                                                 + lVar21),0);
                  auVar43 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar13 + lVar10 + param_2 * 2 + uVar27 +
                                                                 lVar11 + lVar21),0);
                  auVar44 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar13 + lVar21 + lVar10 + lVar24 + uVar27 +
                                                                          lVar11),0);
                  auVar41 = vpminub_avx(auVar47._0_16_,auVar41);
                  auVar47 = ZEXT1664(auVar41);
                  auVar42 = vpminub_avx(auVar46._0_16_,auVar42);
                  auVar46 = ZEXT1664(auVar42);
                  auVar43 = vpminub_avx(auVar40._0_16_,auVar43);
                  auVar40 = ZEXT1664(auVar43);
                  lVar13 = lVar13 + lVar33;
                  auVar43 = vpminub_avx(auVar37._0_16_,auVar44);
                  auVar37 = ZEXT1664(auVar43);
                } while (uVar36 < uVar20);
                in_ZMM5 = ZEXT1664(auVar41);
                in_ZMM4 = ZEXT1664(auVar42);
              }
              uVar14 = uVar14 + 1;
              lVar11 = lVar11 + param_2;
            } while (uVar14 < param_8);
          }
          uVar27 = uVar27 + 1;
          (*pauStack_260)[0] = auVar47[0];
          (*pauStack_260)[param_4] = auVar46[0];
          (*pauStack_260)[param_4 * 2] = auVar40[0];
          (*pauStack_260)[lVar25] = auVar37[0];
          pauStack_260 = (undefined1 (*) [16])(*pauStack_260 + 1);
        } while (uVar27 < param_5 - uVar16);
      }
      auVar38 = in_ZMM4._0_16_;
      lVar10 = uVar22 * 4 + 4;
      uVar22 = uVar22 + 1;
      lVar30 = lVar30 + param_2 * 4;
      lVar32 = lVar32 + param_4 * 4;
    } while (uVar22 < (ulonglong)
                      ((longlong)(((ulonglong)((longlong)(uVar18 + 3) >> 1) >> 0x3e) + 3 + uVar18)
                      >> 2));
    in_ZMM15 = ZEXT1664(in_ZMM15._0_16_);
  }
  uVar18 = 0;
  lVar30 = 0;
  lVar28 = 0;
  if ((longlong)param_6 <= lVar10) {
    return;
  }
  auVar38 = vpcmpeqd_avx(auVar38,auVar38);
  param_9 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
  lVar32 = (longlong)param_10;
LAB_1404e4352:
  lVar25 = 0;
  uVar22 = 0;
  lVar24 = param_1 + param_2 * lVar10 + lVar30;
  pauVar29 = (undefined1 (*) [16])(param_3 + lVar10 * param_4 + lVar28);
  if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
    lVar33 = lVar10 * param_4 + param_3 + lVar28;
    lVar23 = 0;
    do {
      auVar46 = ZEXT1664(auVar38);
      auVar41 = vpcmpeqd_avx(in_ZMM15._0_16_,in_ZMM15._0_16_);
      in_ZMM15 = ZEXT1664(auVar41);
      auVar40 = ZEXT1664(auVar38);
      auVar37 = ZEXT1664(auVar38);
      auVar41 = auVar38;
      auVar42 = auVar38;
      auVar43 = auVar38;
      if (0 < (longlong)param_8) {
        uVar16 = 0;
        lVar25 = param_2 * lVar10 + param_1 + lVar30 + lVar23;
        lVar35 = 0;
        auVar41 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
        in_ZMM0 = ZEXT1664(auVar41);
        auVar47 = ZEXT1664(auVar38);
        auVar48 = ZEXT1664(auVar38);
        in_ZMM1 = ZEXT1664(auVar38);
        do {
          uVar14 = 0;
          uVar27 = (ulonglong)*(ushort *)(param_9 + uVar16 * 4);
          lVar11 = 0;
          if (uVar27 != 0) {
            lVar13 = (longlong)(int)((uint)*(ushort *)(param_9 + 2 + uVar16 * 4) * param_10);
            lVar21 = lVar13 + lVar35 + lVar25;
            do {
              pauVar1 = (undefined1 (*) [16])(lVar11 + lVar25 + lVar35 + lVar13);
              lVar34 = lVar11 + 0x10;
              lVar19 = lVar11 + 0x20;
              lVar15 = lVar11 + 0x30;
              uVar14 = uVar14 + 1;
              lVar11 = lVar11 + lVar32;
              auVar41 = vpminub_avx(in_ZMM0._0_16_,*pauVar1);
              in_ZMM0 = ZEXT1664(auVar41);
              auVar42 = vpminub_avx(auVar47._0_16_,*(undefined1 (*) [16])(lVar34 + lVar21));
              auVar47 = ZEXT1664(auVar42);
              auVar43 = vpminub_avx(auVar48._0_16_,*(undefined1 (*) [16])(lVar19 + lVar21));
              auVar48 = ZEXT1664(auVar43);
              auVar44 = vpminub_avx(in_ZMM1._0_16_,*(undefined1 (*) [16])(lVar15 + lVar21));
              in_ZMM1 = ZEXT1664(auVar44);
            } while (uVar14 < uVar27);
            in_ZMM15 = ZEXT1664(auVar41);
            auVar46 = ZEXT1664(auVar42);
            auVar40 = ZEXT1664(auVar43);
            auVar37 = ZEXT1664(auVar44);
          }
          auVar43 = auVar37._0_16_;
          auVar42 = auVar40._0_16_;
          auVar41 = auVar46._0_16_;
          uVar16 = uVar16 + 1;
          lVar35 = lVar35 + param_2;
        } while (uVar16 < param_8);
      }
      uVar22 = uVar22 + 1;
      lVar25 = lVar23 + 0x40;
      lVar24 = lVar24 + 0x40;
      pauVar29 = pauVar29 + 4;
      *(undefined1 (*) [16])(lVar33 + lVar23) = in_ZMM15._0_16_;
      *(undefined1 (*) [16])(lVar33 + 0x10 + lVar23) = auVar41;
      *(undefined1 (*) [16])(lVar33 + 0x20 + lVar23) = auVar42;
      *(undefined1 (*) [16])(lVar33 + 0x30 + lVar23) = auVar43;
      lVar23 = lVar25;
    } while (uVar22 < (param_5 & 0xffffffffffffffc0) + 0x3f >> 6);
  }
  lVar23 = lVar25;
  lVar33 = lVar24;
  if (lVar25 < (longlong)uVar9) {
    uVar22 = 1;
    uVar16 = 0;
    uVar27 = (uVar9 - lVar25) + 0xf >> 7;
    if (uVar27 != 0) {
      lVar34 = 0;
      lVar15 = 0;
      lVar19 = 0;
      lVar33 = 0;
      lVar35 = lVar15;
      lVar11 = lVar34;
      lVar13 = lVar24;
      lVar21 = lVar19;
      do {
        uVar16 = uVar16 + 1;
        lVar13 = lVar13 + 0x10;
        lVar33 = lVar33 + 0x10;
        lVar34 = lVar34 + 0x10;
        lVar11 = lVar11 + 0x10;
        lVar35 = lVar35 + 0x10;
        lVar15 = lVar15 + 0x10;
        lVar21 = lVar21 + 0x10;
        lVar19 = lVar19 + 0x10;
      } while (uVar16 < uVar27);
      uVar22 = uVar16 * 8 + 1;
      lVar33 = lVar13 + lVar33 + lVar34 + lVar11 + lVar35 + lVar15 + lVar21 + lVar19;
    }
    lVar35 = (uVar9 - 1) - lVar25;
    uVar16 = (longlong)(lVar35 + 0x10 + ((ulonglong)(lVar35 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e4705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404e4707 + (byte)(&DAT_14308a640)[(uint)((int)uVar16 - (int)uVar22)]))();
      return;
    }
    uVar22 = 0;
    lVar35 = 0;
    do {
      uVar16 = 0;
      in_ZMM0 = ZEXT1664(auVar38);
      auVar41 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
      in_ZMM1 = ZEXT1664(auVar41);
      lVar11 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar20 = 0;
          uVar14 = (ulonglong)*(ushort *)(param_9 + uVar16 * 4);
          lVar13 = 0;
          if (uVar14 != 0) {
            do {
              pauVar1 = (undefined1 (*) [16])
                        (lVar13 + (longlong)
                                  (int)((uint)*(ushort *)(param_9 + 2 + uVar16 * 4) * param_10) +
                                  lVar24 + lVar35 + lVar11);
              uVar20 = uVar20 + 1;
              lVar13 = lVar13 + lVar32;
              auVar41 = vpminub_avx(in_ZMM1._0_16_,*pauVar1);
              in_ZMM1 = ZEXT1664(auVar41);
            } while (uVar20 < uVar14);
            in_ZMM0 = ZEXT1664(auVar41);
          }
          uVar16 = uVar16 + 1;
          lVar11 = lVar11 + param_2;
        } while (uVar16 < param_8);
      }
      uVar22 = uVar22 + 1;
      lVar35 = lVar35 + 0x10;
      *pauVar29 = in_ZMM1._0_16_;
      pauVar29 = pauVar29 + 1;
    } while (uVar22 < (uVar9 + 0xf) - lVar25 >> 4);
    uVar22 = 1;
    uVar16 = 0;
    if (uVar27 != 0) {
      lVar21 = 0;
      lVar19 = 0;
      lVar34 = 0;
      lVar13 = 0;
      lVar24 = lVar13;
      lVar35 = lVar34;
      lVar11 = lVar21;
      do {
        uVar16 = uVar16 + 1;
        lVar23 = lVar23 + 0x10;
        lVar11 = lVar11 + 0x10;
        lVar21 = lVar21 + 0x10;
        lVar19 = lVar19 + 0x10;
        lVar35 = lVar35 + 0x10;
        lVar34 = lVar34 + 0x10;
        lVar13 = lVar13 + 0x10;
        lVar24 = lVar24 + 0x10;
      } while (uVar16 < (uVar9 - lVar25) + 0xf >> 7);
      uVar22 = uVar16 * 8 + 1;
      lVar23 = lVar23 + lVar11 + lVar21 + lVar19 + lVar35 + lVar34 + lVar13 + lVar24;
    }
    lVar25 = (uVar9 - 1) - lVar25;
    uVar16 = (longlong)(lVar25 + 0x10 + ((ulonglong)(lVar25 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e49ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404e49ef + (byte)(&DAT_14308a648)[(uint)((int)uVar16 - (int)uVar22)]))();
      return;
    }
  }
  uVar22 = 0;
  lVar25 = lVar33;
  if (lVar23 < (longlong)uVar26) {
    uVar16 = (uVar26 + 7) - lVar23;
    do {
      uVar27 = 0;
      in_ZMM0 = ZEXT1664(auVar38);
      lVar24 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar20 = 0;
          uVar14 = (ulonglong)*(ushort *)(param_9 + uVar27 * 4);
          lVar35 = 0;
          if (uVar14 != 0) {
            do {
              uVar36 = *(ulonglong *)
                        (lVar35 + (longlong)
                                  (int)((uint)*(ushort *)(param_9 + 2 + uVar27 * 4) * param_10) +
                                  lVar33 + uVar22 * 8 + lVar24);
              in_ZMM1 = ZEXT864(uVar36);
              uVar20 = uVar20 + 1;
              lVar35 = lVar35 + lVar32;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = uVar36;
              auVar41 = vpminub_avx(in_ZMM0._0_16_,auVar39);
              in_ZMM0 = ZEXT1664(auVar41);
            } while (uVar20 < uVar14);
          }
          uVar27 = uVar27 + 1;
          lVar24 = lVar24 + param_2;
        } while (uVar27 < param_8);
      }
      uVar22 = uVar22 + 1;
      lVar25 = lVar25 + 8;
      *(longlong *)*pauVar29 = in_ZMM0._0_8_;
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 8);
      lVar23 = lVar23 + 8;
    } while (uVar22 < uVar16 >> 3);
  }
  lVar24 = lVar23;
  lVar33 = lVar25;
  if (lVar23 < (longlong)uVar17) {
    uVar22 = 1;
    uVar16 = 0;
    uVar27 = (uVar17 - lVar23) + 3 >> 5;
    if (uVar27 != 0) {
      lVar15 = 0;
      lVar19 = 0;
      lVar34 = 0;
      lVar33 = 0;
      lVar35 = lVar25;
      lVar11 = lVar15;
      lVar13 = lVar19;
      lVar21 = lVar34;
      do {
        uVar16 = uVar16 + 1;
        lVar35 = lVar35 + 4;
        lVar33 = lVar33 + 4;
        lVar11 = lVar11 + 4;
        lVar15 = lVar15 + 4;
        lVar13 = lVar13 + 4;
        lVar19 = lVar19 + 4;
        lVar21 = lVar21 + 4;
        lVar34 = lVar34 + 4;
      } while (uVar16 < uVar27);
      uVar22 = uVar16 * 8 + 1;
      lVar33 = lVar35 + lVar33 + lVar11 + lVar15 + lVar13 + lVar19 + lVar21 + lVar34;
    }
    lVar35 = (uVar17 - 1) - lVar23;
    uVar16 = (longlong)(lVar35 + 4 + ((ulonglong)(lVar35 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e4d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404e4d0b + (byte)(&DAT_14308a650)[(uint)((int)uVar16 - (int)uVar22)]))();
      return;
    }
    uVar22 = 0;
    do {
      uVar14 = 0;
      in_ZMM0 = ZEXT1664(auVar38);
      auVar41 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
      in_ZMM1 = ZEXT1664(auVar41);
      lVar35 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar20 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar11 = 0;
          if (uVar36 != 0) {
            do {
              auVar41 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)
                                     (lVar11 + (longlong)
                                               (int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) *
                                                    param_10) + lVar25 + uVar22 * 4 + lVar35),0);
              uVar20 = uVar20 + 1;
              lVar11 = lVar11 + lVar32;
              auVar41 = vpminub_avx(in_ZMM1._0_16_,auVar41);
              in_ZMM1 = ZEXT1664(auVar41);
            } while (uVar20 < uVar36);
            in_ZMM0 = ZEXT1664(auVar41);
          }
          uVar14 = uVar14 + 1;
          lVar35 = lVar35 + param_2;
        } while (uVar14 < param_8);
      }
      uVar22 = uVar22 + 1;
      *(int *)*pauVar29 = in_ZMM1._0_4_;
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 4);
    } while (uVar22 < (uVar17 + 3) - lVar23 >> 2);
    uVar22 = 0;
    if ((longlong)uVar16 < 8) {
      uVar14 = uVar22;
      if (uVar16 != 0) goto LAB_1404e4f60;
    }
    else {
      uVar14 = uVar16 & 0xfffffffffffffff8;
      do {
        if (0 < (longlong)param_8) {
          if (uVar14 < uVar16) goto LAB_1404e4f65;
          goto LAB_1404e4f8e;
        }
        uVar22 = uVar22 + 8;
      } while (uVar22 < uVar14);
      if ((((uVar14 < uVar16) && (uVar14 + 1 < uVar16)) && (uVar14 + 2 < uVar16)) &&
         (uVar14 = uVar14 + 3, uVar14 < uVar16)) {
        do {
          uVar14 = uVar14 + 1;
          if (uVar16 <= uVar14) goto LAB_1404e4f8e;
LAB_1404e4f60:
        } while ((longlong)param_8 < 1);
LAB_1404e4f65:
        uVar22 = 0;
        while( true ) {
          do {
            uVar22 = uVar22 + 1;
          } while (uVar22 < param_8);
          uVar14 = uVar14 + 1;
          if (uVar16 <= uVar14) break;
          uVar22 = 0;
        }
      }
    }
LAB_1404e4f8e:
    uVar16 = 0;
    uVar22 = 1;
    if (uVar27 != 0) {
      lVar21 = 0;
      lVar19 = 0;
      lVar34 = 0;
      lVar13 = 0;
      lVar25 = lVar13;
      lVar35 = lVar34;
      lVar11 = lVar21;
      do {
        uVar16 = uVar16 + 1;
        lVar24 = lVar24 + 4;
        lVar11 = lVar11 + 4;
        lVar21 = lVar21 + 4;
        lVar19 = lVar19 + 4;
        lVar35 = lVar35 + 4;
        lVar34 = lVar34 + 4;
        lVar13 = lVar13 + 4;
        lVar25 = lVar25 + 4;
      } while (uVar16 < (uVar17 - lVar23) + 3 >> 5);
      uVar22 = uVar16 * 8 + 1;
      lVar24 = lVar24 + lVar11 + lVar21 + lVar19 + lVar35 + lVar34 + lVar13 + lVar25;
    }
    lVar23 = (uVar17 - 1) - lVar23;
    uVar16 = (longlong)(lVar23 + 4 + ((ulonglong)(lVar23 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e50cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404e50ce + (byte)(&DAT_14308a658)[(uint)((int)uVar16 - (int)uVar22)]))();
      return;
    }
  }
  lVar25 = lVar24;
  lVar23 = lVar33;
  if (lVar24 < (longlong)uVar12) {
    uVar22 = 1;
    uVar16 = 0;
    uVar27 = (uVar12 - lVar24) + 1 >> 4;
    if (uVar27 != 0) {
      lVar15 = 0;
      lVar19 = 0;
      lVar34 = 0;
      lVar23 = 0;
      lVar35 = lVar33;
      lVar11 = lVar15;
      lVar13 = lVar19;
      lVar21 = lVar34;
      do {
        uVar16 = uVar16 + 1;
        lVar35 = lVar35 + 2;
        lVar23 = lVar23 + 2;
        lVar11 = lVar11 + 2;
        lVar15 = lVar15 + 2;
        lVar13 = lVar13 + 2;
        lVar19 = lVar19 + 2;
        lVar21 = lVar21 + 2;
        lVar34 = lVar34 + 2;
      } while (uVar16 < uVar27);
      uVar22 = uVar16 * 8 + 1;
      lVar23 = lVar35 + lVar23 + lVar11 + lVar15 + lVar13 + lVar19 + lVar21 + lVar34;
    }
    lVar35 = (uVar12 - 1) - lVar24;
    uVar16 = (lVar35 + 2) - (lVar35 + 2 >> 0x3f) >> 1;
    if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e525d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404e525f + (byte)(&DAT_14308a660)[(uint)((int)uVar16 - (int)uVar22)]))();
      return;
    }
    uVar22 = 0;
    do {
      uVar14 = 0;
      in_ZMM0 = ZEXT1664(auVar38);
      auVar41 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
      in_ZMM1 = ZEXT1664(auVar41);
      lVar35 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar20 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar11 = 0;
          if (uVar36 != 0) {
            do {
              uVar20 = uVar20 + 1;
              auVar41 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)
                                           (lVar11 + (longlong)
                                                     (int)((uint)*(ushort *)
                                                                  (param_9 + 2 + uVar14 * 4) *
                                                          param_10) + lVar33 + uVar22 * 2 + lVar35),
                                    0);
              lVar11 = lVar11 + lVar32;
              auVar41 = vpminub_avx(in_ZMM1._0_16_,auVar41);
              in_ZMM1 = ZEXT1664(auVar41);
            } while (uVar20 < uVar36);
            in_ZMM0 = ZEXT1664(auVar41);
          }
          uVar14 = uVar14 + 1;
          lVar35 = lVar35 + param_2;
        } while (uVar14 < param_8);
      }
      uVar22 = uVar22 + 1;
      vpextrw_avx(in_ZMM1._0_16_,0);
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 2);
    } while (uVar22 < (uVar12 + 1) - lVar24 >> 1);
    uVar22 = 0;
    if (7 < (longlong)uVar16) {
      uVar14 = uVar16 & 0xfffffffffffffff8;
LAB_1404e5440:
      if ((longlong)param_8 < 1) goto code_r0x0001404e5449;
      uVar20 = 0;
      while( true ) {
        do {
          uVar20 = uVar20 + 1;
        } while (uVar20 < param_8);
        uVar22 = uVar22 + 8;
        if (uVar14 <= uVar22) break;
        uVar20 = 0;
      }
      if (uVar14 < uVar16) goto LAB_1404e5566;
      goto LAB_1404e556a;
    }
    if (uVar16 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_1404e5bdc;
          if (param_8 < 3) goto LAB_1404e5bdc;
          if (param_8 < 4) goto LAB_1404e5bdc;
          if (param_8 < 5) goto LAB_1404e5bdc;
          if (param_8 < 6) goto LAB_1404e5bdc;
          if (param_8 < 7) goto LAB_1404e5bdc;
          if (param_8 < 8) goto LAB_1404e5bdc;
          if (param_8 < 9) goto LAB_1404e5bdc;
          uVar20 = 9;
          if (param_8 < 10) goto LAB_1404e5bed;
          while( true ) {
            do {
              uVar20 = uVar20 + 1;
            } while (uVar20 < param_8);
LAB_1404e5bed:
            if ((longlong)param_8 < 1) break;
LAB_1404e5bdc:
            uVar14 = uVar22 + 1;
            if (uVar16 <= uVar14) goto LAB_1404e556a;
LAB_1404e5566:
            uVar20 = 0;
            uVar22 = uVar14;
          }
          uVar14 = uVar22 + 1;
          if (uVar16 <= uVar14) goto LAB_1404e556a;
LAB_1404e5463:
          uVar22 = uVar14 + 1;
          if (uVar16 <= uVar22) goto LAB_1404e556a;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar16);
    }
    goto LAB_1404e556a;
  }
  goto LAB_1404e56be;
code_r0x0001404e5449:
  uVar22 = uVar22 + 8;
  if (uVar14 <= uVar22) goto code_r0x0001404e5452;
  goto LAB_1404e5440;
code_r0x0001404e5452:
  if (uVar14 < uVar16) goto LAB_1404e5463;
LAB_1404e556a:
  uVar16 = 0;
  uVar22 = 1;
  if (uVar27 != 0) {
    lVar21 = 0;
    lVar34 = 0;
    lVar19 = 0;
    lVar13 = 0;
    lVar25 = 0;
    lVar33 = lVar24;
    lVar35 = lVar21;
    lVar11 = lVar13;
    do {
      uVar16 = uVar16 + 1;
      lVar33 = lVar33 + 2;
      lVar25 = lVar25 + 2;
      lVar21 = lVar21 + 2;
      lVar35 = lVar35 + 2;
      lVar34 = lVar34 + 2;
      lVar19 = lVar19 + 2;
      lVar11 = lVar11 + 2;
      lVar13 = lVar13 + 2;
    } while (uVar16 < (uVar12 - lVar24) + 1 >> 4);
    uVar22 = uVar16 * 8 + 1;
    lVar25 = lVar33 + lVar25 + lVar21 + lVar35 + lVar34 + lVar19 + lVar11 + lVar13;
  }
  lVar24 = (uVar12 - 1) - lVar24;
  uVar16 = (lVar24 + 2) - (lVar24 + 2 >> 0x3f) >> 1;
  if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e56a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1404e56a2 + (byte)(&DAT_14308a668)[(uint)((int)uVar16 - (int)uVar22)]))();
    return;
  }
LAB_1404e56be:
  if (lVar25 < (longlong)param_5) {
    uVar22 = 1;
    uVar27 = param_5 - lVar25;
    uVar16 = 0;
    uVar14 = uVar27 >> 3;
    if (uVar14 != 0) {
      do {
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar14);
      uVar22 = uVar16 * 8 + 1;
    }
    uVar16 = (param_5 - (lVar25 + 1)) + 1;
    if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e5749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_14308a670)[(uint)((int)uVar16 - (int)uVar22)] + 0x1404e574b)
      )();
      return;
    }
    uVar22 = 0;
    do {
      uVar20 = 0;
      in_ZMM0 = ZEXT1664(auVar38);
      auVar41 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
      in_ZMM1 = ZEXT1664(auVar41);
      lVar25 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar31 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar20 * 4);
          lVar24 = 0;
          if (uVar36 != 0) {
            do {
              auVar41 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar24 + lVar23 + uVar22 + lVar25 +
                                                             (longlong)
                                                             (int)((uint)*(ushort *)
                                                                          (param_9 + 2 + uVar20 * 4)
                                                                  * param_10)),0);
              uVar31 = uVar31 + 1;
              lVar24 = lVar24 + lVar32;
              auVar41 = vpminub_avx(in_ZMM1._0_16_,auVar41);
              in_ZMM1 = ZEXT1664(auVar41);
            } while (uVar31 < uVar36);
            in_ZMM0 = ZEXT1664(auVar41);
          }
          uVar20 = uVar20 + 1;
          lVar25 = lVar25 + param_2;
        } while (uVar20 < param_8);
      }
      uVar22 = uVar22 + 1;
      (*pauVar29)[0] = in_ZMM1[0];
      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 1);
    } while (uVar22 < uVar27);
    uVar22 = 0;
    if ((longlong)uVar16 < 8) {
      if (uVar16 != 0) goto LAB_1404e5900;
    }
    else {
      uVar20 = uVar16 & 0xfffffffffffffff8;
      do {
        if (0 < (longlong)param_8) {
          uVar36 = 0;
          while( true ) {
            do {
              uVar36 = uVar36 + 1;
            } while (uVar36 < param_8);
            uVar22 = uVar22 + 8;
            if (uVar20 <= uVar22) break;
            uVar36 = 0;
          }
          if (uVar20 < uVar16) goto LAB_1404e59e6;
          uVar22 = 0;
          if (1 < param_8) goto LAB_1404e5a04;
          goto LAB_1404e5a29;
        }
        uVar22 = uVar22 + 8;
      } while (uVar22 < uVar20);
      while ((uVar20 < uVar16 && (uVar22 = uVar20 + 1, uVar22 < uVar16))) {
LAB_1404e5900:
        while ((longlong)param_8 < 1) {
          uVar22 = uVar22 + 1;
          if (uVar16 <= uVar22) {
            uVar22 = 0;
            goto LAB_1404e5b40;
          }
        }
        if (param_8 < 2) goto LAB_1404e5b72;
        if (param_8 < 3) goto LAB_1404e5b72;
        if (param_8 < 4) goto LAB_1404e5b72;
        if (param_8 < 5) goto LAB_1404e5b72;
        if (param_8 < 6) goto LAB_1404e5b72;
        if (param_8 < 7) goto LAB_1404e5b72;
        if (param_8 < 8) goto LAB_1404e5b72;
        if (param_8 < 9) goto LAB_1404e5b72;
        uVar36 = 9;
        if (param_8 < 10) goto LAB_1404e5b6d;
        while( true ) {
          do {
            uVar36 = uVar36 + 1;
          } while (uVar36 < param_8);
LAB_1404e5b6d:
          if ((longlong)param_8 < 1) break;
LAB_1404e5b72:
          uVar20 = uVar22 + 1;
          if (uVar16 <= uVar20) {
            uVar22 = 0;
            goto LAB_1404e5b00;
          }
LAB_1404e59e6:
          uVar36 = 0;
          uVar22 = uVar20;
        }
        uVar20 = uVar22 + 1;
      }
    }
    uVar22 = 0;
    do {
      if (0 < (longlong)param_8) {
        if (param_8 < 2) goto LAB_1404e5a29;
LAB_1404e5a04:
        uVar20 = 2;
        if (2 < param_8) goto LAB_1404e5b20;
        while (0 < (longlong)param_8) {
LAB_1404e5a29:
          uVar22 = uVar22 + 1;
          if (uVar27 <= uVar22) goto LAB_1404e5a35;
LAB_1404e5b00:
          uVar20 = 0;
LAB_1404e5b20:
          do {
            uVar20 = uVar20 + 1;
          } while (uVar20 < param_8);
        }
        uVar22 = uVar22 + 1;
        if (uVar27 <= uVar22) break;
      }
LAB_1404e5b40:
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar27);
LAB_1404e5a35:
    uVar22 = 1;
    uVar27 = 0;
    if (uVar14 != 0) {
      do {
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar14);
      uVar22 = uVar27 * 8 + 1;
    }
    if (uVar22 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001404e5a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_14308a678)[(uint)((int)uVar16 - (int)uVar22)] + 0x1404e5a96)
      )();
      return;
    }
  }
  uVar18 = uVar18 + 1;
  lVar30 = lVar30 + param_2;
  lVar28 = lVar28 + param_4;
  if (param_6 - lVar10 <= uVar18) {
    return;
  }
  goto LAB_1404e4352;
}

