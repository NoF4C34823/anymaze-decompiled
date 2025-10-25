
void FUN_1404e0c60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9,int param_10)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulonglong *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [16];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM4 [64];
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  longlong unaff_XMM15_Qa;
  undefined1 auVar61 [64];
  longlong lStack_498;
  ulonglong uStack_290;
  undefined1 (*pauStack_280) [16];
  undefined8 uStack_268;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  
  auVar42 = in_ZMM0._0_16_;
  lVar13 = (param_7 * 3 + 2) * param_8;
  uVar41 = (ulonglong)*(ushort *)(param_9 + lVar13);
  lVar12 = 0;
  uVar6 = *(ushort *)(param_9 + 2 + lVar13);
  uVar14 = param_5 & 0xffffffffffffffe0;
  uVar15 = param_5 & 0xfffffffffffffff0;
  uVar16 = param_5 & 0xfffffffffffffff8;
  uVar17 = param_5 & 0xfffffffffffffffc;
  uVar7 = param_5 & 0xfffffffffffffffe;
  lVar13 = (longlong)param_10;
  uStack_290 = 0;
  uVar21 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar21) {
    auVar42 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar42);
    lVar30 = lVar13 * (ulonglong)uVar6;
    lVar23 = param_2 + lVar30;
    lVar24 = param_2 * uVar41;
    lVar26 = (longlong)(int)(param_10 * (uint)uVar6);
    lVar37 = param_4 * 2;
    lVar31 = param_4 * 3;
    lVar27 = (uVar41 + 1) * param_2;
    lVar38 = param_2 * 3 + lVar30;
    lVar22 = (uVar41 + 2) * param_2;
    lVar34 = (uVar41 + 3) * param_2;
    lVar20 = lVar30 + param_2 * 2;
    do {
      lVar8 = param_2 * 4 * uStack_290;
      lVar35 = param_4 * 4 * uStack_290;
      lVar12 = 0;
      lVar18 = param_1 + lVar8;
      lVar8 = lVar8 + param_1;
      pauStack_280 = (undefined1 (*) [16])(param_3 + lVar35);
      lVar35 = lVar35 + param_3;
      if ((param_7 == 3) && (param_8 == 3)) {
        uVar32 = 0;
        if (0 < (longlong)uVar15) {
          uVar28 = uVar32;
          do {
            uVar28 = uVar28 + 1;
            auVar42 = *(undefined1 (*) [16])(uVar32 + lVar23 + lVar8);
            auVar44 = *(undefined1 (*) [16])(uVar32 + lVar8 + lVar20);
            auVar48 = *(undefined1 (*) [16])(uVar32 + lVar38 + lVar8);
            auVar50 = vpminub_avx(*(undefined1 (*) [16])(uVar32 + lVar8 + lVar24),
                                  *(undefined1 (*) [16])(uVar32 + lVar30 + lVar8));
            auVar50 = vpminub_avx(auVar50,*(undefined1 (*) [16])(uVar32 + lVar8 + lVar13 + lVar24));
            auVar52 = vpminub_avx(auVar42,*(undefined1 (*) [16])(uVar32 + lVar8 + lVar27));
            auVar42 = vpminub_avx(auVar50,auVar42);
            auVar42 = vpminub_avx(auVar42,*(undefined1 (*) [16])
                                           (uVar32 + lVar24 + lVar13 * 2 + lVar8));
            auVar54 = vpminub_avx(auVar42,auVar44);
            auVar42 = vpminub_avx(auVar52,*(undefined1 (*) [16])(uVar32 + lVar13 + lVar27 + lVar8));
            auVar52 = vpminub_avx(auVar42,auVar44);
            auVar42 = *(undefined1 (*) [16])(uVar32 + lVar8 + lVar30 + param_2 * 4);
            auVar50 = *(undefined1 (*) [16])(uVar32 + param_2 * 5 + lVar30 + lVar8);
            in_ZMM3 = ZEXT1664(auVar50);
            auVar52 = vpminub_avx(auVar52,*(undefined1 (*) [16])
                                           (uVar32 + lVar27 + lVar13 * 2 + lVar8));
            auVar52 = vpminub_avx(auVar52,auVar48);
            in_ZMM4 = ZEXT1664(auVar52);
            auVar44 = vpminub_avx(auVar44,*(undefined1 (*) [16])(uVar32 + lVar8 + lVar22));
            auVar44 = vpminub_avx(auVar44,*(undefined1 (*) [16])(uVar32 + lVar13 + lVar22 + lVar8));
            auVar44 = vpminub_avx(auVar44,auVar48);
            auVar44 = vpminub_avx(auVar44,*(undefined1 (*) [16])
                                           (uVar32 + lVar22 + lVar13 * 2 + lVar8));
            auVar44 = vpminub_avx(auVar44,auVar42);
            in_ZMM9 = ZEXT1664(auVar44);
            auVar48 = vpminub_avx(auVar48,*(undefined1 (*) [16])(uVar32 + lVar34 + lVar8));
            auVar48 = vpminub_avx(auVar48,*(undefined1 (*) [16])(uVar32 + lVar13 + lVar34 + lVar8));
            auVar42 = vpminub_avx(auVar48,auVar42);
            auVar42 = vpminub_avx(auVar42,*(undefined1 (*) [16])
                                           (uVar32 + lVar34 + lVar13 * 2 + lVar8));
            auVar42 = vpminub_avx(auVar42,auVar50);
            *(undefined1 (*) [16])(uVar32 + lVar35) = auVar54;
            *(undefined1 (*) [16])(uVar32 + param_4 + lVar35) = auVar52;
            *(undefined1 (*) [16])(uVar32 + lVar35 + param_4 * 2) = auVar44;
            *(undefined1 (*) [16])(uVar32 + lVar35 + lVar31) = auVar42;
            uVar32 = uVar32 + 0x10;
          } while (uVar28 < uVar15 + 0xf >> 4);
          lVar12 = uVar28 * 0x10;
          lVar18 = lVar8 + lVar12;
          pauStack_280 = (undefined1 (*) [16])(lVar35 + lVar12);
        }
      }
      else {
        uVar32 = 0;
        if (0 < (longlong)uVar14) {
          lVar12 = 0;
          do {
            auVar42 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
            auVar44 = vpcmpeqd_avx(in_ZMM9._0_16_,in_ZMM9._0_16_);
            auVar58 = ZEXT1664(auVar42);
            auVar57 = ZEXT1664(auVar42);
            auVar56 = ZEXT1664(auVar42);
            auVar59 = ZEXT1664(auVar42);
            auVar60 = ZEXT1664(auVar42);
            auVar61 = ZEXT1664(auVar42);
            auVar43 = ZEXT1664(auVar42);
            auVar45 = ZEXT1664(auVar42);
            auVar48 = auVar42;
            if (0 < (longlong)param_7) {
              uVar28 = 0;
              lVar33 = lVar8 + lVar24 + lVar12;
              lVar36 = lVar8 + lVar27 + lVar12;
              lVar39 = lVar8 + lVar22 + lVar12;
              lVar35 = lVar8 + lVar34 + lVar12;
              lVar11 = 0;
              do {
                pauVar10 = (undefined1 (*) [16])(lVar11 + lVar33);
                lVar9 = lVar11 + 0x10;
                pauVar1 = (undefined1 (*) [16])(lVar11 + lVar36);
                lVar19 = lVar11 + 0x10;
                pauVar2 = (undefined1 (*) [16])(lVar11 + lVar39);
                lVar40 = lVar11 + 0x10;
                pauVar3 = (undefined1 (*) [16])(lVar11 + lVar35);
                lVar25 = lVar11 + 0x10;
                uVar28 = uVar28 + 1;
                lVar11 = lVar11 + param_10;
                auVar44 = vpminub_avx(auVar58._0_16_,*pauVar10);
                auVar58 = ZEXT1664(auVar44);
                auVar42 = vpminub_avx(auVar57._0_16_,*pauVar1);
                auVar57 = ZEXT1664(auVar42);
                auVar48 = vpminub_avx(auVar56._0_16_,*pauVar2);
                auVar56 = ZEXT1664(auVar48);
                auVar50 = vpminub_avx(auVar59._0_16_,*pauVar3);
                auVar59 = ZEXT1664(auVar50);
                auVar50 = vpminub_avx(auVar60._0_16_,*(undefined1 (*) [16])(lVar9 + lVar33));
                auVar60 = ZEXT1664(auVar50);
                auVar50 = vpminub_avx(auVar61._0_16_,*(undefined1 (*) [16])(lVar19 + lVar36));
                auVar61 = ZEXT1664(auVar50);
                auVar50 = vpminub_avx(auVar43._0_16_,*(undefined1 (*) [16])(lVar40 + lVar39));
                auVar43 = ZEXT1664(auVar50);
                auVar50 = vpminub_avx(auVar45._0_16_,*(undefined1 (*) [16])(lVar25 + lVar35));
                auVar45 = ZEXT1664(auVar50);
              } while (uVar28 < param_7);
            }
            auVar54 = auVar61._0_16_;
            auVar52 = auVar60._0_16_;
            auVar50 = auVar59._0_16_;
            auVar51 = auVar45._0_16_;
            auVar49 = auVar43._0_16_;
            uVar28 = 0;
            lVar35 = 0;
            auVar53 = auVar58._0_16_;
            auVar55 = auVar57._0_16_;
            auVar46 = auVar56._0_16_;
            if (0 < (longlong)param_8) {
              lVar33 = lVar30 + lVar8 + lVar12;
              lVar36 = lVar23 + lVar8 + lVar12;
              lVar39 = lVar8 + lVar20 + lVar12;
              lVar11 = lVar8 + lVar38 + lVar12;
              do {
                pauVar10 = (undefined1 (*) [16])(lVar35 + lVar33);
                lVar9 = lVar35 + 0x10;
                pauVar1 = (undefined1 (*) [16])(lVar35 + lVar36);
                lVar19 = lVar35 + 0x10;
                pauVar2 = (undefined1 (*) [16])(lVar35 + lVar39);
                lVar40 = lVar35 + 0x10;
                pauVar3 = (undefined1 (*) [16])(lVar35 + lVar11);
                lVar25 = lVar35 + 0x10;
                uVar28 = uVar28 + 1;
                lVar35 = lVar35 + param_2;
                auVar44 = vpminub_avx(auVar58._0_16_,*pauVar10);
                auVar58 = ZEXT1664(auVar44);
                auVar42 = vpminub_avx(auVar57._0_16_,*pauVar1);
                auVar57 = ZEXT1664(auVar42);
                auVar48 = vpminub_avx(auVar56._0_16_,*pauVar2);
                auVar56 = ZEXT1664(auVar48);
                auVar50 = vpminub_avx(auVar59._0_16_,*pauVar3);
                auVar59 = ZEXT1664(auVar50);
                auVar52 = vpminub_avx(auVar60._0_16_,*(undefined1 (*) [16])(lVar9 + lVar33));
                auVar60 = ZEXT1664(auVar52);
                auVar54 = vpminub_avx(auVar61._0_16_,*(undefined1 (*) [16])(lVar19 + lVar36));
                auVar61 = ZEXT1664(auVar54);
                auVar49 = vpminub_avx(auVar43._0_16_,*(undefined1 (*) [16])(lVar40 + lVar39));
                auVar43 = ZEXT1664(auVar49);
                auVar51 = vpminub_avx(auVar45._0_16_,*(undefined1 (*) [16])(lVar25 + lVar11));
                auVar45 = ZEXT1664(auVar51);
                auVar53 = auVar44;
                auVar55 = auVar42;
                auVar46 = auVar48;
              } while (uVar28 < param_8);
            }
            in_ZMM9 = ZEXT1664(auVar44);
            in_ZMM4 = ZEXT1664(auVar48);
            in_ZMM3 = ZEXT1664(auVar42);
            *pauStack_280 = auVar53;
            *(undefined1 (*) [16])(*pauStack_280 + param_4) = auVar55;
            *(undefined1 (*) [16])(*pauStack_280 + lVar37) = auVar46;
            *(undefined1 (*) [16])(*pauStack_280 + lVar31) = auVar50;
            pauStack_280[1] = auVar52;
            *(undefined1 (*) [16])(pauStack_280[1] + param_4) = auVar54;
            *(undefined1 (*) [16])(pauStack_280[1] + lVar37) = auVar49;
            *(undefined1 (*) [16])(pauStack_280[1] + lVar31) = auVar51;
            uVar32 = uVar32 + 1;
            lVar12 = lVar12 + 0x20;
            lVar18 = lVar18 + 0x20;
            pauStack_280 = pauStack_280 + 2;
          } while (uVar32 < uVar14 + 0x1f >> 5);
          auVar42 = vpcmpeqd_avx(auVar51,auVar51);
          in_ZMM1 = ZEXT1664(auVar42);
        }
        uVar32 = 0;
        lVar8 = 0;
        if (lVar12 < (longlong)uVar15) {
          lVar35 = lVar18 + lVar27;
          lVar11 = lVar18 + lVar22;
          lVar33 = lVar30 + lVar18;
          lVar36 = lVar18 + lVar23;
          lVar19 = lVar20 + lVar18;
          uVar28 = (uVar15 + 0xf) - lVar12;
          lVar9 = lVar38 + lVar18;
          lVar39 = lVar18 + lVar24;
          lVar40 = lVar34 + lVar18;
          do {
            auVar42 = vpcmpeqd_avx(in_ZMM9._0_16_,in_ZMM9._0_16_);
            auVar44 = in_ZMM1._0_16_;
            in_ZMM3 = ZEXT1664(auVar44);
            in_ZMM4 = ZEXT1664(auVar44);
            auVar45 = ZEXT1664(auVar44);
            auVar43 = ZEXT1664(auVar44);
            if (0 < (longlong)param_7) {
              uVar29 = 0;
              lVar25 = 0;
              do {
                pauVar10 = (undefined1 (*) [16])(lVar25 + lVar39 + lVar8);
                pauVar1 = (undefined1 (*) [16])(lVar25 + lVar35 + lVar8);
                pauVar2 = (undefined1 (*) [16])(lVar25 + lVar11 + lVar8);
                pauVar3 = (undefined1 (*) [16])(lVar25 + lVar40 + lVar8);
                uVar29 = uVar29 + 1;
                lVar25 = lVar25 + param_10;
                auVar42 = vpminub_avx(in_ZMM3._0_16_,*pauVar10);
                in_ZMM3 = ZEXT1664(auVar42);
                auVar44 = vpminub_avx(in_ZMM4._0_16_,*pauVar1);
                in_ZMM4 = ZEXT1664(auVar44);
                auVar44 = vpminub_avx(auVar45._0_16_,*pauVar2);
                auVar45 = ZEXT1664(auVar44);
                auVar44 = vpminub_avx(auVar43._0_16_,*pauVar3);
                auVar43 = ZEXT1664(auVar44);
              } while (uVar29 < param_7);
            }
            auVar48 = auVar43._0_16_;
            auVar44 = auVar45._0_16_;
            uVar29 = 0;
            lVar25 = 0;
            if (0 < (longlong)param_8) {
              do {
                pauVar10 = (undefined1 (*) [16])(lVar25 + lVar33 + lVar8);
                pauVar1 = (undefined1 (*) [16])(lVar25 + lVar36 + lVar8);
                pauVar2 = (undefined1 (*) [16])(lVar25 + lVar19 + lVar8);
                pauVar3 = (undefined1 (*) [16])(lVar25 + lVar9 + lVar8);
                uVar29 = uVar29 + 1;
                lVar25 = lVar25 + param_2;
                auVar42 = vpminub_avx(in_ZMM3._0_16_,*pauVar10);
                in_ZMM3 = ZEXT1664(auVar42);
                auVar44 = vpminub_avx(in_ZMM4._0_16_,*pauVar1);
                in_ZMM4 = ZEXT1664(auVar44);
                auVar44 = vpminub_avx(auVar45._0_16_,*pauVar2);
                auVar45 = ZEXT1664(auVar44);
                auVar48 = vpminub_avx(auVar43._0_16_,*pauVar3);
                auVar43 = ZEXT1664(auVar48);
              } while (uVar29 < param_8);
            }
            in_ZMM9 = ZEXT1664(auVar42);
            uVar32 = uVar32 + 1;
            *pauStack_280 = in_ZMM3._0_16_;
            *(undefined1 (*) [16])(*pauStack_280 + param_4) = in_ZMM4._0_16_;
            *(undefined1 (*) [16])(*pauStack_280 + lVar37) = auVar44;
            *(undefined1 (*) [16])(*pauStack_280 + lVar31) = auVar48;
            lVar18 = lVar18 + 0x10;
            pauStack_280 = pauStack_280 + 1;
            lVar12 = lVar12 + 0x10;
            lVar8 = lVar8 + 0x10;
          } while (uVar32 < uVar28 >> 4);
        }
      }
      auVar42 = (undefined1  [16])0x0;
      uVar32 = 0;
      auVar44 = in_ZMM1._0_16_;
      if (lVar12 < (longlong)uVar16) {
        lVar8 = lVar18 + lVar27;
        lVar35 = lVar18 + lVar22;
        lVar11 = lVar24 + lVar18;
        lVar36 = lVar26 + param_2 * 2 + lVar18;
        lVar33 = lVar26 + param_2 * 3 + lVar18;
        lVar9 = lVar26 + lVar18;
        uVar28 = (uVar16 + 7) - lVar12;
        lVar39 = param_2 + lVar26 + lVar18;
        lVar19 = lVar34 + lVar18;
        do {
          auVar45 = ZEXT1664(auVar44);
          auVar48 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
          auVar56 = ZEXT1664(auVar48);
          auVar43 = ZEXT1664(auVar44);
          auVar57 = ZEXT1664(auVar44);
          auStack_258 = auVar44;
          auStack_248 = auVar44;
          uStack_268 = in_ZMM1._0_8_;
          if (0 < (longlong)param_7) {
            uVar29 = 0;
            auVar45 = ZEXT1664(auVar44);
            auVar48 = vpcmpeqd_avx(auVar48,auVar48);
            auVar56 = ZEXT1664(auVar48);
            auVar43 = ZEXT1664(auVar44);
            lVar40 = 0;
            do {
              uVar29 = uVar29 + 1;
              auVar48._8_8_ = 0;
              auVar48._0_8_ = *(ulonglong *)(lVar40 + lVar11 + uVar32 * 8);
              auVar48 = vpminub_avx(auVar57._0_16_,auVar48);
              auVar57 = ZEXT1664(auVar48);
              puVar4 = (ulonglong *)(lVar40 + lVar35 + uVar32 * 8);
              auVar50._8_8_ = 0;
              auVar50._0_8_ = *(ulonglong *)(lVar40 + lVar8 + uVar32 * 8);
              auVar48 = vpminub_avx(auVar56._0_16_,auVar50);
              uStack_268 = auVar48._0_8_;
              auVar56 = ZEXT1664(auVar48);
              uVar5 = *(ulonglong *)(lVar40 + lVar19 + uVar32 * 8);
              in_ZMM9 = ZEXT864(uVar5);
              lVar40 = lVar40 + param_10;
              auVar52._8_8_ = 0;
              auVar52._0_8_ = *puVar4;
              auStack_258 = vpminub_avx(auVar45._0_16_,auVar52);
              auVar45 = ZEXT1664(auStack_258);
              auVar54._8_8_ = 0;
              auVar54._0_8_ = uVar5;
              auStack_248 = vpminub_avx(auVar43._0_16_,auVar54);
              auVar43 = ZEXT1664(auStack_248);
            } while (uVar29 < param_7);
          }
          uVar47 = auVar57._0_8_;
          uVar29 = 0;
          lVar40 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar29 = uVar29 + 1;
              auVar49._8_8_ = 0;
              auVar49._0_8_ = *(ulonglong *)(lVar40 + lVar9 + uVar32 * 8);
              auVar48 = vpminub_avx(auVar57._0_16_,auVar49);
              auVar57 = ZEXT1664(auVar48);
              uVar47 = auVar48._0_8_;
              puVar4 = (ulonglong *)(lVar40 + lVar36 + uVar32 * 8);
              auVar51._8_8_ = 0;
              auVar51._0_8_ = *(ulonglong *)(lVar40 + lVar39 + uVar32 * 8);
              auVar48 = vpminub_avx(auVar56._0_16_,auVar51);
              uStack_268 = auVar48._0_8_;
              auVar56 = ZEXT1664(auVar48);
              uVar5 = *(ulonglong *)(lVar40 + lVar33 + uVar32 * 8);
              in_ZMM9 = ZEXT864(uVar5);
              lVar40 = lVar40 + param_2;
              auVar53._8_8_ = 0;
              auVar53._0_8_ = *puVar4;
              auStack_258 = vpminub_avx(auVar45._0_16_,auVar53);
              auVar45 = ZEXT1664(auStack_258);
              auVar55._8_8_ = 0;
              auVar55._0_8_ = uVar5;
              auStack_248 = vpminub_avx(auVar43._0_16_,auVar55);
              auVar43 = ZEXT1664(auStack_248);
            } while (uVar29 < param_8);
          }
          *(undefined8 *)*pauStack_280 = uVar47;
          uVar32 = uVar32 + 1;
          lVar18 = lVar18 + 8;
          *(undefined8 *)(*pauStack_280 + param_4) = uStack_268;
          lVar12 = lVar12 + 8;
          in_ZMM3 = ZEXT1664(auStack_258);
          *(longlong *)(*pauStack_280 + lVar37) = auStack_258._0_8_;
          in_ZMM4 = ZEXT1664(auStack_248);
          *(longlong *)(*pauStack_280 + lVar31) = auStack_248._0_8_;
          pauStack_280 = (undefined1 (*) [16])(*pauStack_280 + 8);
        } while (uVar32 < uVar28 >> 3);
      }
      uVar32 = 0;
      if (lVar12 < (longlong)uVar17) {
        lVar8 = lVar18 + lVar27;
        lVar35 = lVar18 + lVar22;
        lVar11 = lVar18 + lVar24;
        lVar36 = lVar20 + lVar18;
        lVar33 = lVar38 + lVar18;
        lVar9 = lVar30 + lVar18;
        uVar28 = (uVar17 + 3) - lVar12;
        lVar39 = lVar23 + lVar18;
        lVar19 = lVar34 + lVar18;
        do {
          auVar48 = vpcmpeqd_avx(in_ZMM9._0_16_,in_ZMM9._0_16_);
          in_ZMM4 = ZEXT1664(auVar44);
          auVar45 = ZEXT1664(auVar44);
          in_ZMM3 = ZEXT1664(auVar44);
          auVar43 = ZEXT1664(auVar44);
          if (0 < (longlong)param_7) {
            uVar29 = 0;
            lVar40 = 0;
            do {
              auVar48 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar11 + uVar32 * 4),0);
              uVar29 = uVar29 + 1;
              auVar50 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar8 + uVar32 * 4),0);
              auVar52 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar35 + uVar32 * 4),0);
              auVar54 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar19 + uVar32 * 4),0);
              auVar48 = vpminub_avx(in_ZMM4._0_16_,auVar48);
              in_ZMM4 = ZEXT1664(auVar48);
              auVar50 = vpminub_avx(auVar45._0_16_,auVar50);
              auVar45 = ZEXT1664(auVar50);
              auVar50 = vpminub_avx(in_ZMM3._0_16_,auVar52);
              in_ZMM3 = ZEXT1664(auVar50);
              lVar40 = lVar40 + param_10;
              auVar50 = vpminub_avx(auVar43._0_16_,auVar54);
              auVar43 = ZEXT1664(auVar50);
            } while (uVar29 < param_7);
          }
          uVar29 = 0;
          lVar40 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar48 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar9 + uVar32 * 4),0);
              uVar29 = uVar29 + 1;
              auVar50 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar39 + uVar32 * 4),0);
              auVar52 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar36 + uVar32 * 4),0);
              auVar54 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar40 + lVar33 + uVar32 * 4),0);
              auVar48 = vpminub_avx(in_ZMM4._0_16_,auVar48);
              in_ZMM4 = ZEXT1664(auVar48);
              auVar50 = vpminub_avx(auVar45._0_16_,auVar50);
              auVar45 = ZEXT1664(auVar50);
              auVar50 = vpminub_avx(in_ZMM3._0_16_,auVar52);
              in_ZMM3 = ZEXT1664(auVar50);
              lVar40 = lVar40 + param_2;
              auVar50 = vpminub_avx(auVar43._0_16_,auVar54);
              auVar43 = ZEXT1664(auVar50);
            } while (uVar29 < param_8);
          }
          in_ZMM9 = ZEXT1664(auVar48);
          uVar32 = uVar32 + 1;
          lVar18 = lVar18 + 4;
          *(int *)*pauStack_280 = in_ZMM4._0_4_;
          lVar12 = lVar12 + 4;
          *(int *)(*pauStack_280 + param_4) = auVar45._0_4_;
          *(int *)(*pauStack_280 + lVar37) = in_ZMM3._0_4_;
          *(int *)(*pauStack_280 + lVar31) = auVar43._0_4_;
          pauStack_280 = (undefined1 (*) [16])(*pauStack_280 + 4);
        } while (uVar32 < uVar28 >> 2);
      }
      uVar32 = 0;
      if (lVar12 < (longlong)uVar7) {
        lVar8 = lVar18 + lVar27;
        lVar35 = lVar18 + lVar22;
        lVar11 = lVar18 + lVar24;
        lVar36 = lVar20 + lVar18;
        lVar33 = lVar38 + lVar18;
        lVar9 = lVar30 + lVar18;
        uVar28 = (uVar7 + 1) - lVar12;
        lVar39 = lVar23 + lVar18;
        lVar19 = lVar34 + lVar18;
        do {
          auVar48 = vpcmpeqd_avx(in_ZMM9._0_16_,in_ZMM9._0_16_);
          in_ZMM4 = ZEXT1664(auVar44);
          auVar45 = ZEXT1664(auVar44);
          in_ZMM3 = ZEXT1664(auVar44);
          auVar43 = ZEXT1664(auVar44);
          if (0 < (longlong)param_7) {
            uVar29 = 0;
            lVar40 = 0;
            do {
              uVar29 = uVar29 + 1;
              auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar11 + uVar32 * 2),0);
              auVar50 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar8 + uVar32 * 2),0);
              auVar48 = vpminub_avx(in_ZMM4._0_16_,auVar48);
              in_ZMM4 = ZEXT1664(auVar48);
              auVar52 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar35 + uVar32 * 2),0);
              auVar50 = vpminub_avx(auVar45._0_16_,auVar50);
              auVar45 = ZEXT1664(auVar50);
              auVar50 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar19 + uVar32 * 2),0);
              lVar40 = lVar40 + param_10;
              auVar52 = vpminub_avx(in_ZMM3._0_16_,auVar52);
              in_ZMM3 = ZEXT1664(auVar52);
              auVar50 = vpminub_avx(auVar43._0_16_,auVar50);
              auVar43 = ZEXT1664(auVar50);
            } while (uVar29 < param_7);
          }
          auVar52 = auVar43._0_16_;
          auVar50 = auVar45._0_16_;
          uVar29 = 0;
          lVar40 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar29 = uVar29 + 1;
              auVar48 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar9 + uVar32 * 2),0);
              auVar50 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar39 + uVar32 * 2),0);
              auVar48 = vpminub_avx(in_ZMM4._0_16_,auVar48);
              in_ZMM4 = ZEXT1664(auVar48);
              auVar52 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar36 + uVar32 * 2),0);
              auVar50 = vpminub_avx(auVar45._0_16_,auVar50);
              auVar45 = ZEXT1664(auVar50);
              auVar54 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar40 + lVar33 + uVar32 * 2),0);
              lVar40 = lVar40 + param_2;
              auVar52 = vpminub_avx(in_ZMM3._0_16_,auVar52);
              in_ZMM3 = ZEXT1664(auVar52);
              auVar52 = vpminub_avx(auVar43._0_16_,auVar54);
              auVar43 = ZEXT1664(auVar52);
            } while (uVar29 < param_8);
          }
          in_ZMM9 = ZEXT1664(auVar48);
          uVar32 = uVar32 + 1;
          lVar18 = lVar18 + 2;
          vpextrw_avx(in_ZMM4._0_16_,0);
          lVar12 = lVar12 + 2;
          vpextrw_avx(auVar50,0);
          vpextrw_avx(in_ZMM3._0_16_,0);
          vpextrw_avx(auVar52,0);
          pauStack_280 = (undefined1 (*) [16])(*pauStack_280 + 2);
        } while (uVar32 < uVar28 >> 1);
      }
      uVar32 = 0;
      if (lVar12 < (longlong)param_5) {
        do {
          auVar48 = vpcmpeqd_avx(in_ZMM9._0_16_,in_ZMM9._0_16_);
          in_ZMM4 = ZEXT1664(auVar44);
          auVar45 = ZEXT1664(auVar44);
          in_ZMM3 = ZEXT1664(auVar44);
          auVar43 = ZEXT1664(auVar44);
          if (0 < (longlong)param_7) {
            uVar28 = 0;
            lVar8 = 0;
            do {
              auVar48 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar18 + lVar24 + uVar32),0);
              uVar28 = uVar28 + 1;
              auVar50 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar18 + lVar27 + uVar32),0);
              auVar52 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar18 + lVar22 + uVar32),0);
              auVar54 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar18 + lVar34 + uVar32),0);
              auVar48 = vpminub_avx(in_ZMM4._0_16_,auVar48);
              in_ZMM4 = ZEXT1664(auVar48);
              auVar50 = vpminub_avx(auVar45._0_16_,auVar50);
              auVar45 = ZEXT1664(auVar50);
              auVar50 = vpminub_avx(in_ZMM3._0_16_,auVar52);
              in_ZMM3 = ZEXT1664(auVar50);
              lVar8 = lVar8 + param_10;
              auVar50 = vpminub_avx(auVar43._0_16_,auVar54);
              auVar43 = ZEXT1664(auVar50);
            } while (uVar28 < param_7);
          }
          uVar28 = 0;
          lVar8 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar48 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar30 + lVar18 + uVar32),0);
              uVar28 = uVar28 + 1;
              auVar50 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar18 + lVar23 + uVar32),0);
              auVar52 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar18 + lVar20 + uVar32),0);
              auVar54 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar8 + lVar18 + lVar38 + uVar32),0);
              auVar48 = vpminub_avx(in_ZMM4._0_16_,auVar48);
              in_ZMM4 = ZEXT1664(auVar48);
              auVar50 = vpminub_avx(auVar45._0_16_,auVar50);
              auVar45 = ZEXT1664(auVar50);
              auVar50 = vpminub_avx(in_ZMM3._0_16_,auVar52);
              in_ZMM3 = ZEXT1664(auVar50);
              lVar8 = lVar8 + param_2;
              auVar50 = vpminub_avx(auVar43._0_16_,auVar54);
              auVar43 = ZEXT1664(auVar50);
            } while (uVar28 < param_8);
          }
          in_ZMM9 = ZEXT1664(auVar48);
          uVar32 = uVar32 + 1;
          (*pauStack_280)[0] = in_ZMM4[0];
          (*pauStack_280)[param_4] = auVar45[0];
          (*pauStack_280)[lVar37] = in_ZMM3[0];
          (*pauStack_280)[lVar31] = auVar43[0];
          pauStack_280 = (undefined1 (*) [16])(*pauStack_280 + 1);
        } while (uVar32 < param_5 - lVar12);
      }
      lVar12 = uStack_290 * 4 + 4;
      uStack_290 = uStack_290 + 1;
      lStack_498 = unaff_XMM15_Qa;
    } while (uStack_290 <
             (ulonglong)
             ((longlong)(((ulonglong)((longlong)(uVar21 + 3) >> 1) >> 0x3e) + 3 + uVar21) >> 2));
  }
  uVar21 = 0;
  lVar23 = 0;
  lVar13 = 0;
  if (lVar12 < (longlong)param_6) {
    lVar37 = param_2 * lVar12;
    lVar20 = uVar41 * param_2;
    auVar42 = vpcmpeqd_avx(auVar42,auVar42);
    lVar31 = (longlong)param_10 * (ulonglong)uVar6;
    do {
      lVar22 = 0;
      uVar41 = 0;
      lVar24 = param_1 + lVar37 + lVar23;
      pauVar10 = (undefined1 (*) [16])(param_3 + lVar12 * param_4 + lVar13);
      if (0 < (longlong)uVar14) {
        lVar22 = 0;
        do {
          uVar32 = 0;
          auVar44 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
          in_ZMM1 = ZEXT1664(auVar44);
          in_ZMM3 = ZEXT1664(auVar42);
          lVar13 = 0;
          if (0 < (longlong)param_7) {
            do {
              pauVar1 = (undefined1 (*) [16])
                        (lVar13 + ((param_2 + param_1) - (param_2 - lVar20)) + lVar37 + lVar23 +
                                  lVar22);
              lVar26 = lVar13 + 0x10;
              uVar32 = uVar32 + 1;
              lVar13 = lVar13 + param_10;
              auVar44 = vpminub_avx(in_ZMM1._0_16_,*pauVar1);
              in_ZMM1 = ZEXT1664(auVar44);
              auVar44 = vpminub_avx(in_ZMM3._0_16_,
                                    *(undefined1 (*) [16])
                                     (lVar26 + param_1 + lVar20 + lVar37 + lVar23 + lVar22));
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar32 < param_7);
          }
          uVar32 = 0;
          lVar13 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar1 = (undefined1 (*) [16])
                        (lVar13 + lVar22 + ((param_2 + param_1) - (param_2 - lVar31)) + lVar37 +
                                           lVar23);
              lVar26 = lVar13 + 0x10;
              uVar32 = uVar32 + 1;
              lVar13 = lVar13 + param_2;
              auVar44 = vpminub_avx(in_ZMM1._0_16_,*pauVar1);
              in_ZMM1 = ZEXT1664(auVar44);
              auVar44 = vpminub_avx(in_ZMM3._0_16_,
                                    *(undefined1 (*) [16])
                                     (lVar26 + lVar22 + lVar37 + param_1 + lVar31 + lVar23));
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar32 < param_8);
          }
          uVar41 = uVar41 + 1;
          lVar22 = lVar22 + 0x20;
          *pauVar10 = in_ZMM1._0_16_;
          pauVar10[1] = in_ZMM3._0_16_;
          lVar24 = lVar24 + 0x20;
          pauVar10 = pauVar10 + 2;
          lVar13 = lVar31;
          lStack_498 = lVar31;
        } while (uVar41 < uVar14 + 0x1f >> 5);
      }
      uVar41 = 0;
      lVar26 = 0;
      if (lVar22 < (longlong)uVar15) {
        lVar27 = lVar31 + lVar24;
        uVar32 = (uVar15 + 0xf) - lVar22;
        lVar30 = lVar24 + lVar20;
        do {
          uVar28 = 0;
          auVar44 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
          in_ZMM3 = ZEXT1664(auVar44);
          lVar13 = 0;
          auVar44 = auVar42;
          if (0 < (longlong)param_7) {
            do {
              pauVar1 = (undefined1 (*) [16])(lVar13 + lVar30 + lVar26);
              uVar28 = uVar28 + 1;
              lVar13 = lVar13 + param_10;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,*pauVar1);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar28 < param_7);
          }
          uVar28 = 0;
          lVar13 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar1 = (undefined1 (*) [16])(lVar13 + lVar27 + lVar26);
              uVar28 = uVar28 + 1;
              lVar13 = lVar13 + param_2;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,*pauVar1);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar28 < param_8);
          }
          in_ZMM1 = ZEXT1664(auVar44);
          uVar41 = uVar41 + 1;
          lVar24 = lVar24 + 0x10;
          *pauVar10 = in_ZMM3._0_16_;
          pauVar10 = pauVar10 + 1;
          lVar22 = lVar22 + 0x10;
          lVar26 = lVar26 + 0x10;
          lVar13 = lVar31;
          lStack_498 = lVar31;
        } while (uVar41 < uVar32 >> 4);
      }
      uVar41 = 0;
      if (lVar22 < (longlong)uVar16) {
        lVar26 = lVar20 + lVar24;
        uVar32 = (uVar16 + 7) - lVar22;
        lVar27 = (int)(param_10 * (uint)uVar6) + lVar24;
        do {
          uVar28 = 0;
          in_ZMM1 = ZEXT1664(auVar42);
          lVar13 = 0;
          if (0 < (longlong)param_7) {
            do {
              uVar29 = *(ulonglong *)(lVar13 + lVar26 + uVar41 * 8);
              in_ZMM3 = ZEXT864(uVar29);
              uVar28 = uVar28 + 1;
              lVar13 = lVar13 + param_10;
              auVar44._8_8_ = 0;
              auVar44._0_8_ = uVar29;
              auVar44 = vpminub_avx(in_ZMM1._0_16_,auVar44);
              in_ZMM1 = ZEXT1664(auVar44);
            } while (uVar28 < param_7);
          }
          uVar28 = 0;
          lVar13 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar29 = *(ulonglong *)(lVar13 + lVar27 + uVar41 * 8);
              in_ZMM3 = ZEXT864(uVar29);
              uVar28 = uVar28 + 1;
              lVar13 = lVar13 + param_2;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = uVar29;
              auVar44 = vpminub_avx(in_ZMM1._0_16_,auVar46);
              in_ZMM1 = ZEXT1664(auVar44);
            } while (uVar28 < param_8);
          }
          uVar41 = uVar41 + 1;
          lVar24 = lVar24 + 8;
          *(longlong *)*pauVar10 = in_ZMM1._0_8_;
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + 8);
          lVar22 = lVar22 + 8;
          lVar13 = lVar31;
          lStack_498 = lVar31;
        } while (uVar41 < uVar32 >> 3);
      }
      uVar41 = 0;
      if (lVar22 < (longlong)uVar17) {
        lVar26 = lVar31 + lVar24;
        uVar32 = (uVar17 + 3) - lVar22;
        lVar27 = lVar24 + lVar20;
        do {
          uVar28 = 0;
          auVar44 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
          in_ZMM3 = ZEXT1664(auVar44);
          lVar13 = 0;
          auVar44 = auVar42;
          if (0 < (longlong)param_7) {
            do {
              auVar44 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar13 + lVar27 + uVar41 * 4),0);
              uVar28 = uVar28 + 1;
              lVar13 = lVar13 + param_10;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,auVar44);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar28 < param_7);
          }
          uVar28 = 0;
          lVar13 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar44 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar13 + lVar26 + uVar41 * 4),0);
              uVar28 = uVar28 + 1;
              lVar13 = lVar13 + param_2;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,auVar44);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar28 < param_8);
          }
          in_ZMM1 = ZEXT1664(auVar44);
          uVar41 = uVar41 + 1;
          lVar24 = lVar24 + 4;
          *(int *)*pauVar10 = in_ZMM3._0_4_;
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + 4);
          lVar22 = lVar22 + 4;
          lVar13 = lVar31;
          lStack_498 = lVar31;
        } while (uVar41 < uVar32 >> 2);
      }
      uVar41 = 0;
      if (lVar22 < (longlong)uVar7) {
        lVar26 = lVar31 + lVar24;
        uVar32 = (uVar7 + 1) - lVar22;
        lVar27 = lVar24 + lVar20;
        do {
          uVar28 = 0;
          auVar44 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
          in_ZMM3 = ZEXT1664(auVar44);
          lVar13 = 0;
          auVar44 = auVar42;
          if (0 < (longlong)param_7) {
            do {
              uVar28 = uVar28 + 1;
              auVar44 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar13 + lVar27 + uVar41 * 2),0);
              lVar13 = lVar13 + param_10;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,auVar44);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar28 < param_7);
          }
          uVar28 = 0;
          lVar13 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar28 = uVar28 + 1;
              auVar44 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar13 + lVar26 + uVar41 * 2),0);
              lVar13 = lVar13 + param_2;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,auVar44);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar28 < param_8);
          }
          in_ZMM1 = ZEXT1664(auVar44);
          uVar41 = uVar41 + 1;
          lVar24 = lVar24 + 2;
          vpextrw_avx(in_ZMM3._0_16_,0);
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + 2);
          lVar22 = lVar22 + 2;
          lVar13 = lVar31;
          lStack_498 = lVar31;
        } while (uVar41 < uVar32 >> 1);
      }
      uVar41 = 0;
      if (lVar22 < (longlong)param_5) {
        do {
          uVar32 = 0;
          auVar44 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
          in_ZMM3 = ZEXT1664(auVar44);
          lVar13 = 0;
          auVar44 = auVar42;
          if (0 < (longlong)param_7) {
            do {
              auVar44 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar13 + lVar24 + lVar20 + uVar41),0);
              uVar32 = uVar32 + 1;
              lVar13 = lVar13 + param_10;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,auVar44);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar32 < param_7);
          }
          uVar32 = 0;
          lVar13 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar44 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar13 + lVar24 + lVar31 + uVar41),0);
              uVar32 = uVar32 + 1;
              lVar13 = lVar13 + param_2;
              auVar44 = vpminub_avx(in_ZMM3._0_16_,auVar44);
              in_ZMM3 = ZEXT1664(auVar44);
            } while (uVar32 < param_8);
          }
          in_ZMM1 = ZEXT1664(auVar44);
          uVar41 = uVar41 + 1;
          (*pauVar10)[0] = in_ZMM3[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + 1);
          lVar13 = lStack_498;
        } while (uVar41 < param_5 - lVar22);
      }
      uVar21 = uVar21 + 1;
      lVar23 = lVar23 + param_2;
      lVar13 = lVar13 + param_4;
    } while (uVar21 < param_6 - lVar12);
  }
  return;
}

