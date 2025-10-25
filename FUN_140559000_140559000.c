
void FUN_140559000(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 in_ZMM0 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 in_ZMM4 [64];
  undefined1 in_ZMM5 [64];
  undefined1 in_ZMM6 [64];
  undefined1 auVar54 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [64];
  undefined1 auVar60 [32];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [32];
  undefined1 auVar64 [64];
  undefined1 auVar65 [32];
  undefined1 in_ZMM15 [64];
  undefined1 auVar66 [64];
  ulonglong uStack_298;
  undefined1 (*pauStack_288) [32];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  
  auVar48 = in_ZMM2._0_32_;
  auVar44 = in_ZMM0._0_16_;
  lVar34 = (longlong)param_10;
  uVar16 = param_5 & 0xfffffffffffffffe;
  lVar21 = 0;
  uVar23 = param_5 & 0xffffffffffffffc0;
  uVar28 = param_5 & 0xffffffffffffffe0;
  uVar38 = param_5 & 0xfffffffffffffff0;
  uVar42 = param_5 & 0xfffffffffffffff8;
  uVar22 = param_5 & 0xfffffffffffffffc;
  uVar26 = 0;
  uVar17 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar17) {
    auVar44 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
    auVar50 = ZEXT1664(auVar44);
    auVar48 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    auVar46 = ZEXT3264(auVar48);
    lVar18 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
    lVar31 = param_4 * 3;
    lVar32 = param_2 * 3;
    lVar19 = param_2 * -4 + param_1;
    lVar27 = lVar19 + param_2 * 4;
    do {
      lVar21 = 0;
      uVar29 = 0;
      lVar39 = param_2 * 4 * uVar26;
      pauVar13 = (undefined1 (*) [32])(param_4 * 4 * uVar26 + param_3);
      lVar20 = param_1 + lVar39;
      if (0 < (longlong)uVar23) {
        lVar21 = 0;
        do {
          auVar48 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
          in_ZMM6 = ZEXT3264(auVar48);
          auVar47 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
          in_ZMM5 = ZEXT3264(auVar47);
          in_ZMM4 = ZEXT3264(auVar48);
          auVar61 = ZEXT3264(auVar48);
          auVar62 = ZEXT3264(auVar48);
          auVar64 = ZEXT3264(auVar48);
          auVar66 = ZEXT3264(auVar48);
          auVar46 = ZEXT3264(auVar48);
          auVar50 = ZEXT3264(auVar48);
          auVar51 = ZEXT3264(auVar48);
          auVar59 = ZEXT3264(auVar48);
          auVar47 = auVar48;
          auVar49 = auVar48;
          auVar60 = auVar48;
          auVar45 = auVar48;
          auVar63 = auVar48;
          auVar65 = auVar48;
          auVar58 = auVar48;
          if (0 < (longlong)param_8) {
            uVar14 = 0;
            lVar33 = lVar27 + lVar39 + lVar21;
            lVar12 = 0;
            do {
              uVar36 = 0;
              lVar40 = 0;
              uVar30 = (ulonglong)*(ushort *)(lVar18 + uVar14 * 4);
              if (uVar30 != 0) {
                lVar35 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar14 * 4) * param_10);
                lVar43 = lVar12 + lVar35;
                do {
                  pauVar1 = (undefined1 (*) [32])(lVar40 + lVar33 + lVar12 + lVar35);
                  uVar36 = uVar36 + 1;
                  lVar24 = lVar40 + 0x20;
                  pauVar2 = (undefined1 (*) [32])
                            (lVar40 + param_2 + lVar27 + lVar39 + lVar21 + lVar12 + lVar35);
                  lVar37 = lVar40 + 0x20;
                  pauVar3 = (undefined1 (*) [32])
                            (lVar40 + lVar27 + param_2 * 2 + lVar39 + lVar21 + lVar12 + lVar35);
                  lVar41 = lVar40 + 0x20;
                  pauVar4 = (undefined1 (*) [32])
                            (lVar40 + lVar35 + lVar39 + lVar32 + lVar27 + lVar21 + lVar12);
                  lVar11 = lVar40 + 0x20;
                  lVar40 = lVar40 + lVar34;
                  auVar48 = vpminub_avx2(auVar61._0_32_,*pauVar1);
                  auVar61 = ZEXT3264(auVar48);
                  auVar47 = vpminub_avx2(auVar62._0_32_,
                                         *(undefined1 (*) [32])(lVar24 + lVar43 + lVar33));
                  auVar62 = ZEXT3264(auVar47);
                  auVar49 = vpminub_avx2(auVar64._0_32_,*pauVar2);
                  auVar64 = ZEXT3264(auVar49);
                  auVar49 = vpminub_avx2(auVar66._0_32_,
                                         *(undefined1 (*) [32])
                                          (lVar37 + param_2 * 5 + lVar19 + lVar39 + lVar21 + lVar43)
                                        );
                  auVar66 = ZEXT3264(auVar49);
                  auVar49 = vpminub_avx2(auVar46._0_32_,*pauVar3);
                  auVar46 = ZEXT3264(auVar49);
                  auVar49 = vpminub_avx2(auVar50._0_32_,
                                         *(undefined1 (*) [32])
                                          (lVar41 + param_2 * 6 + lVar19 + lVar39 + lVar21 + lVar43)
                                        );
                  auVar50 = ZEXT3264(auVar49);
                  auVar49 = vpminub_avx2(auVar51._0_32_,*pauVar4);
                  auVar51 = ZEXT3264(auVar49);
                  auVar60 = vpminub_avx2(auVar59._0_32_,
                                         *(undefined1 (*) [32])
                                          (lVar11 + param_2 * 7 + lVar19 + lVar39 + lVar21 + lVar43)
                                        );
                  auVar59 = ZEXT3264(auVar60);
                } while (uVar36 < uVar30);
                in_ZMM5 = ZEXT3264(auVar48);
                in_ZMM6 = ZEXT3264(auVar47);
                in_ZMM4 = ZEXT3264(auVar49);
              }
              auVar58 = auVar59._0_32_;
              auVar65 = auVar66._0_32_;
              auVar63 = auVar64._0_32_;
              auVar45 = auVar62._0_32_;
              auVar60 = auVar61._0_32_;
              auVar49 = auVar51._0_32_;
              auVar47 = auVar50._0_32_;
              auVar48 = auVar46._0_32_;
              uVar14 = uVar14 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar14 < param_8);
          }
          uVar29 = uVar29 + 1;
          *pauVar13 = auVar60;
          lVar21 = lVar21 + 0x40;
          pauVar13[1] = auVar45;
          *(undefined1 (*) [32])(*pauVar13 + param_4) = auVar63;
          *(undefined1 (*) [32])(pauVar13[1] + param_4) = auVar65;
          *(undefined1 (*) [32])(*pauVar13 + param_4 * 2) = auVar48;
          *(undefined1 (*) [32])(pauVar13[1] + param_4 * 2) = auVar47;
          *(undefined1 (*) [32])(*pauVar13 + lVar31) = auVar49;
          *(undefined1 (*) [32])(pauVar13[1] + lVar31) = auVar58;
          lVar20 = lVar20 + 0x40;
          pauVar13 = pauVar13 + 2;
        } while (uVar29 < uVar23 + 0x3f >> 6);
        auVar44 = vpcmpeqd_avx(auVar49._0_16_,auVar49._0_16_);
        auVar50 = ZEXT1664(auVar44);
        auVar48 = vpcmpeqd_avx2(auVar48,auVar48);
        auVar46 = ZEXT3264(auVar48);
      }
      auVar48 = auVar50._0_32_;
      auVar44 = auVar46._0_16_;
      lVar39 = lVar21;
      lVar12 = lVar20;
      if (lVar21 < (longlong)uVar28) {
        uVar29 = 1;
        uVar14 = 0;
        uVar30 = (uVar28 - lVar21) + 0x1f >> 8;
        if (uVar30 != 0) {
          lVar24 = 0;
          lVar37 = 0;
          lVar41 = 0;
          lVar35 = 0;
          lVar12 = 0;
          lVar33 = lVar20;
          lVar40 = lVar24;
          lVar43 = lVar35;
          do {
            uVar14 = uVar14 + 1;
            lVar33 = lVar33 + 0x20;
            lVar12 = lVar12 + 0x20;
            lVar40 = lVar40 + 0x20;
            lVar24 = lVar24 + 0x20;
            lVar37 = lVar37 + 0x20;
            lVar41 = lVar41 + 0x20;
            lVar43 = lVar43 + 0x20;
            lVar35 = lVar35 + 0x20;
          } while (uVar14 < uVar30);
          uVar29 = uVar14 * 8 + 1;
          lVar12 = lVar33 + lVar12 + lVar40 + lVar24 + lVar37 + lVar41 + lVar43 + lVar35;
        }
        lVar33 = (uVar28 - 1) - lVar21;
        uVar14 = (longlong)(lVar33 + 0x20 + ((ulonglong)(lVar33 + 0x20 >> 4) >> 0x3b)) >> 5;
        if (uVar29 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x000140559832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_140559834 + (byte)(&DAT_14308ae80)[(uint)((int)uVar14 - (int)uVar29)]))();
          return;
        }
        uVar14 = 0;
        uVar29 = uVar14;
        do {
          auVar45 = auVar46._0_32_;
          in_ZMM5 = ZEXT3264(auVar45);
          auVar47 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
          in_ZMM6 = ZEXT3264(auVar47);
          in_ZMM4 = ZEXT3264(auVar45);
          auVar62 = ZEXT3264(auVar45);
          auVar61 = ZEXT3264(auVar45);
          auVar59 = ZEXT3264(auVar45);
          auVar51 = ZEXT3264(auVar45);
          auVar47 = auVar45;
          auVar49 = auVar45;
          auVar60 = auVar45;
          if (0 < (longlong)param_8) {
            uVar36 = 0;
            lVar33 = 0;
            do {
              uVar25 = 0;
              uVar15 = (ulonglong)*(ushort *)(lVar18 + uVar36 * 4);
              lVar40 = 0;
              if (uVar15 != 0) {
                lVar43 = (ulonglong)*(ushort *)(lVar18 + 2 + uVar36 * 4) * lVar34;
                do {
                  pauVar1 = (undefined1 (*) [32])(lVar40 + lVar20 + uVar29 + lVar43 + lVar33);
                  uVar25 = uVar25 + 1;
                  pauVar2 = (undefined1 (*) [32])
                            (lVar40 + lVar43 + param_2 + lVar20 + uVar29 + lVar33);
                  pauVar3 = (undefined1 (*) [32])
                            (lVar40 + lVar20 + param_2 * 2 + uVar29 + lVar43 + lVar33);
                  pauVar4 = (undefined1 (*) [32])
                            (lVar40 + lVar20 + lVar32 + uVar29 + lVar43 + lVar33);
                  lVar40 = lVar40 + lVar34;
                  auVar47 = vpminub_avx2(auVar62._0_32_,*pauVar1);
                  auVar62 = ZEXT3264(auVar47);
                  auVar49 = vpminub_avx2(auVar61._0_32_,*pauVar2);
                  auVar61 = ZEXT3264(auVar49);
                  auVar60 = vpminub_avx2(auVar59._0_32_,*pauVar3);
                  auVar59 = ZEXT3264(auVar60);
                  auVar45 = vpminub_avx2(auVar51._0_32_,*pauVar4);
                  auVar51 = ZEXT3264(auVar45);
                } while (uVar25 < uVar15);
                in_ZMM6 = ZEXT3264(auVar47);
                in_ZMM5 = ZEXT3264(auVar49);
                in_ZMM4 = ZEXT3264(auVar60);
              }
              auVar60 = auVar51._0_32_;
              auVar49 = auVar59._0_32_;
              auVar47 = auVar61._0_32_;
              auVar45 = auVar62._0_32_;
              uVar36 = uVar36 + 1;
              lVar33 = lVar33 + param_2;
            } while (uVar36 < param_8);
          }
          uVar14 = uVar14 + 1;
          uVar29 = uVar29 + 0x20;
          *pauVar13 = auVar45;
          *(undefined1 (*) [32])(*pauVar13 + param_4) = auVar47;
          *(undefined1 (*) [32])(*pauVar13 + param_4 * 2) = auVar49;
          *(undefined1 (*) [32])(*pauVar13 + lVar31) = auVar60;
          pauVar13 = pauVar13 + 1;
        } while (uVar14 < (uVar28 + 0x1f) - lVar21 >> 5);
        uVar29 = 1;
        uVar14 = 0;
        if (uVar30 != 0) {
          lVar37 = 0;
          lVar40 = 0;
          lVar35 = 0;
          lVar24 = 0;
          lVar43 = 0;
          lVar20 = lVar21;
          lVar39 = lVar43;
          lVar33 = lVar24;
          do {
            uVar14 = uVar14 + 1;
            lVar20 = lVar20 + 0x20;
            lVar37 = lVar37 + 0x20;
            lVar40 = lVar40 + 0x20;
            lVar35 = lVar35 + 0x20;
            lVar24 = lVar24 + 0x20;
            lVar33 = lVar33 + 0x20;
            lVar39 = lVar39 + 0x20;
            lVar43 = lVar43 + 0x20;
          } while (uVar14 < (uVar28 - lVar21) + 0x1f >> 8);
          uVar29 = uVar14 * 8 + 1;
          lVar39 = lVar20 + lVar37 + lVar40 + lVar35 + lVar24 + lVar33 + lVar39 + lVar43;
        }
        lVar21 = (uVar28 - 1) - lVar21;
        uVar14 = (longlong)(lVar21 + 0x20 + ((ulonglong)(lVar21 + 0x20 >> 4) >> 0x3b)) >> 5;
        if (uVar29 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x000140559bd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_140559bdb + (byte)(&DAT_14308ae88)[(uint)((int)uVar14 - (int)uVar29)]))();
          return;
        }
      }
      uVar29 = 0;
      lVar20 = 0;
      auVar53 = auVar50._0_16_;
      lVar21 = lVar12;
      if (lVar39 < (longlong)uVar38) {
        uVar14 = (uVar38 + 0xf) - lVar39;
        do {
          in_ZMM5 = ZEXT1664(auVar53);
          in_ZMM4 = ZEXT1664(auVar53);
          auVar54 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
          in_ZMM6 = ZEXT1664(auVar54);
          auVar62 = ZEXT1664(auVar53);
          auVar61 = ZEXT1664(auVar53);
          auVar59 = ZEXT1664(auVar53);
          auVar51 = ZEXT1664(auVar53);
          auVar54 = auVar53;
          auVar55 = auVar53;
          auVar56 = auVar53;
          auVar57 = auVar53;
          if (0 < (longlong)param_8) {
            uVar30 = 0;
            lVar33 = 0;
            do {
              uVar25 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar30 * 4);
              lVar40 = 0;
              if (uVar36 != 0) {
                lVar43 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar30 * 4) * param_10);
                do {
                  pauVar5 = (undefined1 (*) [16])(lVar40 + lVar12 + lVar20 + lVar33 + lVar43);
                  pauVar6 = (undefined1 (*) [16])
                            (lVar40 + lVar43 + param_2 + lVar12 + lVar20 + lVar33);
                  pauVar7 = (undefined1 (*) [16])
                            (lVar40 + lVar12 + param_2 * 2 + lVar20 + lVar33 + lVar43);
                  pauVar8 = (undefined1 (*) [16])
                            (lVar40 + lVar12 + lVar32 + lVar20 + lVar33 + lVar43);
                  uVar25 = uVar25 + 1;
                  lVar40 = lVar40 + lVar34;
                  auVar54 = vpminub_avx(auVar62._0_16_,*pauVar5);
                  auVar62 = ZEXT1664(auVar54);
                  auVar55 = vpminub_avx(auVar61._0_16_,*pauVar6);
                  auVar61 = ZEXT1664(auVar55);
                  auVar56 = vpminub_avx(auVar59._0_16_,*pauVar7);
                  auVar59 = ZEXT1664(auVar56);
                  auVar57 = vpminub_avx(auVar51._0_16_,*pauVar8);
                  auVar51 = ZEXT1664(auVar57);
                } while (uVar25 < uVar36);
                in_ZMM6 = ZEXT1664(auVar54);
                in_ZMM5 = ZEXT1664(auVar55);
                in_ZMM4 = ZEXT1664(auVar56);
              }
              auVar57 = auVar51._0_16_;
              auVar56 = auVar59._0_16_;
              auVar55 = auVar61._0_16_;
              auVar54 = auVar62._0_16_;
              uVar30 = uVar30 + 1;
              lVar33 = lVar33 + param_2;
            } while (uVar30 < param_8);
          }
          uVar29 = uVar29 + 1;
          lVar21 = lVar21 + 0x10;
          *(undefined1 (*) [16])*pauVar13 = auVar54;
          *(undefined1 (*) [16])(*pauVar13 + param_4) = auVar55;
          *(undefined1 (*) [16])(*pauVar13 + param_4 * 2) = auVar56;
          *(undefined1 (*) [16])(*pauVar13 + lVar31) = auVar57;
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 0x10);
          lVar39 = lVar39 + 0x10;
          lVar20 = lVar20 + 0x10;
        } while (uVar29 < uVar14 >> 4);
      }
      uVar29 = 0;
      lVar20 = lVar21;
      if (lVar39 < (longlong)uVar42) {
        uVar14 = (uVar42 + 7) - lVar39;
        do {
          auVar54 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
          in_ZMM6 = ZEXT1664(auVar54);
          auStack_128 = auVar53;
          auStack_118 = auVar53;
          auStack_138._0_8_ = auVar50._0_8_;
          if (0 < (longlong)param_8) {
            uVar30 = 0;
            auVar59 = ZEXT1664(auVar53);
            auVar54 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
            auVar61 = ZEXT1664(auVar54);
            lVar12 = 0;
            auVar51 = ZEXT1664(auVar53);
            auStack_138 = auVar53;
            do {
              uVar25 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar30 * 4);
              lVar33 = 0;
              if (uVar36 != 0) {
                lVar40 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar30 * 4) * param_10);
                do {
                  uVar25 = uVar25 + 1;
                  auVar54._8_8_ = 0;
                  auVar54._0_8_ = *(ulonglong *)(lVar33 + lVar21 + uVar29 * 8 + lVar12 + lVar40);
                  auVar54 = vpminub_avx(in_ZMM6._0_16_,auVar54);
                  in_ZMM6 = ZEXT1664(auVar54);
                  puVar9 = (ulonglong *)
                           (lVar33 + lVar21 + param_2 * 2 + uVar29 * 8 + lVar12 + lVar40);
                  auVar55._8_8_ = 0;
                  auVar55._0_8_ =
                       *(ulonglong *)(lVar33 + lVar40 + param_2 + lVar21 + uVar29 * 8 + lVar12);
                  auStack_138 = vpminub_avx(auVar61._0_16_,auVar55);
                  auVar61 = ZEXT1664(auStack_138);
                  puVar10 = (ulonglong *)(lVar33 + lVar21 + lVar32 + uVar29 * 8 + lVar12 + lVar40);
                  lVar33 = lVar33 + lVar34;
                  auVar56._8_8_ = 0;
                  auVar56._0_8_ = *puVar9;
                  auStack_128 = vpminub_avx(auVar59._0_16_,auVar56);
                  auVar59 = ZEXT1664(auStack_128);
                  auVar57._8_8_ = 0;
                  auVar57._0_8_ = *puVar10;
                  auStack_118 = vpminub_avx(auVar51._0_16_,auVar57);
                  auVar51 = ZEXT1664(auStack_118);
                } while (uVar25 < uVar36);
              }
              uVar30 = uVar30 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar30 < param_8);
          }
          *(longlong *)*pauVar13 = in_ZMM6._0_8_;
          uVar29 = uVar29 + 1;
          lVar20 = lVar20 + 8;
          *(undefined8 *)(*pauVar13 + param_4) = auStack_138._0_8_;
          lVar39 = lVar39 + 8;
          in_ZMM4 = ZEXT1664(auStack_128);
          *(longlong *)(*pauVar13 + param_4 * 2) = auStack_128._0_8_;
          in_ZMM5 = ZEXT1664(auStack_118);
          *(longlong *)(*pauVar13 + lVar31) = auStack_118._0_8_;
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 8);
        } while (uVar29 < uVar14 >> 3);
      }
      uVar29 = 0;
      lVar21 = lVar20;
      if (lVar39 < (longlong)uVar22) {
        uVar14 = (uVar22 + 3) - lVar39;
        do {
          in_ZMM5 = ZEXT1664(auVar53);
          in_ZMM4 = ZEXT1664(auVar53);
          auVar54 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
          in_ZMM6 = ZEXT1664(auVar54);
          auVar62 = ZEXT1664(auVar53);
          auVar61 = ZEXT1664(auVar53);
          auVar59 = ZEXT1664(auVar53);
          auVar51 = ZEXT1664(auVar53);
          if (0 < (longlong)param_8) {
            uVar30 = 0;
            lVar12 = 0;
            do {
              uVar25 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar30 * 4);
              lVar33 = 0;
              if (uVar36 != 0) {
                lVar40 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar30 * 4) * param_10);
                do {
                  auVar54 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar33 + lVar20 + uVar29 * 4 + lVar12 + lVar40),0);
                  uVar25 = uVar25 + 1;
                  auVar55 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar33 + lVar40 + param_2 + lVar20 + uVar29 * 4 + lVar12),
                                        0);
                  auVar56 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar33 + lVar20 + param_2 * 2 + uVar29 * 4 + lVar12 +
                                                   lVar40),0);
                  auVar57 = vpinsrd_avx((undefined1  [16])0x0,
                                        *(undefined4 *)
                                         (lVar33 + lVar20 + lVar32 + uVar29 * 4 + lVar12 + lVar40),0
                                       );
                  auVar54 = vpminub_avx(auVar62._0_16_,auVar54);
                  auVar62 = ZEXT1664(auVar54);
                  auVar55 = vpminub_avx(auVar61._0_16_,auVar55);
                  auVar61 = ZEXT1664(auVar55);
                  auVar56 = vpminub_avx(auVar59._0_16_,auVar56);
                  auVar59 = ZEXT1664(auVar56);
                  lVar33 = lVar33 + lVar34;
                  auVar57 = vpminub_avx(auVar51._0_16_,auVar57);
                  auVar51 = ZEXT1664(auVar57);
                } while (uVar25 < uVar36);
                in_ZMM6 = ZEXT1664(auVar54);
                in_ZMM5 = ZEXT1664(auVar55);
                in_ZMM4 = ZEXT1664(auVar56);
              }
              uVar30 = uVar30 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar30 < param_8);
          }
          uVar29 = uVar29 + 1;
          lVar21 = lVar21 + 4;
          *(int *)*pauVar13 = auVar62._0_4_;
          lVar39 = lVar39 + 4;
          *(int *)(*pauVar13 + param_4) = auVar61._0_4_;
          *(int *)(*pauVar13 + param_4 * 2) = auVar59._0_4_;
          *(int *)(*pauVar13 + lVar31) = auVar51._0_4_;
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 4);
        } while (uVar29 < uVar14 >> 2);
      }
      uVar29 = 0;
      lVar20 = lVar21;
      if (lVar39 < (longlong)uVar16) {
        uVar14 = (uVar16 + 1) - lVar39;
        do {
          in_ZMM5 = ZEXT1664(auVar53);
          in_ZMM4 = ZEXT1664(auVar53);
          auVar54 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
          in_ZMM6 = ZEXT1664(auVar54);
          auVar62 = ZEXT1664(auVar53);
          auVar61 = ZEXT1664(auVar53);
          auVar59 = ZEXT1664(auVar53);
          auVar51 = ZEXT1664(auVar53);
          auVar54 = auVar53;
          auVar55 = auVar53;
          auVar56 = auVar53;
          auVar57 = auVar53;
          if (0 < (longlong)param_8) {
            uVar30 = 0;
            lVar12 = 0;
            do {
              uVar25 = 0;
              uVar36 = (ulonglong)*(ushort *)(lVar18 + uVar30 * 4);
              lVar33 = 0;
              if (uVar36 != 0) {
                lVar40 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar30 * 4) * param_10);
                do {
                  uVar25 = uVar25 + 1;
                  auVar54 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar33 + lVar21 + uVar29 * 2 + lVar12 + lVar40),0);
                  auVar55 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar33 + lVar40 + param_2 + lVar21 + uVar29 * 2 +
                                                                  lVar12),0);
                  auVar56 = vpminub_avx(auVar62._0_16_,auVar54);
                  auVar62 = ZEXT1664(auVar56);
                  auVar54 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar33 + lVar21 + param_2 * 2 + uVar29 * 2 + lVar12
                                                         + lVar40),0);
                  auVar57 = vpminub_avx(auVar61._0_16_,auVar55);
                  auVar61 = ZEXT1664(auVar57);
                  auVar55 = vpinsrw_avx((undefined1  [16])0x0,
                                        (uint)*(ushort *)
                                               (lVar33 + lVar21 + lVar32 + uVar29 * 2 + lVar12 +
                                                         lVar40),0);
                  lVar33 = lVar33 + lVar34;
                  auVar54 = vpminub_avx(auVar59._0_16_,auVar54);
                  auVar59 = ZEXT1664(auVar54);
                  auVar55 = vpminub_avx(auVar51._0_16_,auVar55);
                  auVar51 = ZEXT1664(auVar55);
                } while (uVar25 < uVar36);
                in_ZMM6 = ZEXT1664(auVar56);
                in_ZMM5 = ZEXT1664(auVar57);
                in_ZMM4 = ZEXT1664(auVar54);
              }
              auVar57 = auVar51._0_16_;
              auVar56 = auVar59._0_16_;
              auVar55 = auVar61._0_16_;
              auVar54 = auVar62._0_16_;
              uVar30 = uVar30 + 1;
              lVar12 = lVar12 + param_2;
            } while (uVar30 < param_8);
          }
          uVar29 = uVar29 + 1;
          lVar20 = lVar20 + 2;
          vpextrw_avx(auVar54,0);
          lVar39 = lVar39 + 2;
          vpextrw_avx(auVar55,0);
          vpextrw_avx(auVar56,0);
          vpextrw_avx(auVar57,0);
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 2);
        } while (uVar29 < uVar14 >> 1);
      }
      uVar29 = 0;
      if (lVar39 < (longlong)param_5) {
        do {
          in_ZMM5 = ZEXT1664(auVar53);
          in_ZMM4 = ZEXT1664(auVar53);
          auVar54 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
          in_ZMM6 = ZEXT1664(auVar54);
          auVar62 = ZEXT1664(auVar53);
          auVar61 = ZEXT1664(auVar53);
          auVar59 = ZEXT1664(auVar53);
          auVar51 = ZEXT1664(auVar53);
          if (0 < (longlong)param_8) {
            uVar14 = 0;
            lVar21 = 0;
            do {
              uVar36 = 0;
              uVar30 = (ulonglong)*(ushort *)(lVar18 + uVar14 * 4);
              lVar12 = 0;
              if (uVar30 != 0) {
                lVar33 = (longlong)(int)((uint)*(ushort *)(lVar18 + 2 + uVar14 * 4) * param_10);
                do {
                  auVar54 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + lVar20 + uVar29 + lVar21 + lVar33),
                                        0);
                  uVar36 = uVar36 + 1;
                  auVar55 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + param_2 + lVar20 + uVar29 + lVar21
                                                                 + lVar33),0);
                  auVar56 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + lVar20 + param_2 * 2 + uVar29 +
                                                                 lVar21 + lVar33),0);
                  auVar57 = vpinsrb_avx((undefined1  [16])0x0,
                                        (uint)*(byte *)(lVar12 + lVar33 + lVar20 + lVar32 + uVar29 +
                                                                          lVar21),0);
                  auVar54 = vpminub_avx(auVar62._0_16_,auVar54);
                  auVar62 = ZEXT1664(auVar54);
                  auVar55 = vpminub_avx(auVar61._0_16_,auVar55);
                  auVar61 = ZEXT1664(auVar55);
                  auVar56 = vpminub_avx(auVar59._0_16_,auVar56);
                  auVar59 = ZEXT1664(auVar56);
                  lVar12 = lVar12 + lVar34;
                  auVar57 = vpminub_avx(auVar51._0_16_,auVar57);
                  auVar51 = ZEXT1664(auVar57);
                } while (uVar36 < uVar30);
                in_ZMM6 = ZEXT1664(auVar54);
                in_ZMM5 = ZEXT1664(auVar55);
                in_ZMM4 = ZEXT1664(auVar56);
              }
              uVar14 = uVar14 + 1;
              lVar21 = lVar21 + param_2;
            } while (uVar14 < param_8);
          }
          uVar29 = uVar29 + 1;
          (*pauVar13)[0] = auVar62[0];
          (*pauVar13)[param_4] = auVar61[0];
          (*pauVar13)[param_4 * 2] = auVar59[0];
          (*pauVar13)[lVar31] = auVar51[0];
          pauVar13 = (undefined1 (*) [32])(*pauVar13 + 1);
        } while (uVar29 < param_5 - lVar39);
      }
      lVar21 = uVar26 * 4 + 4;
      uVar26 = uVar26 + 1;
    } while (uVar26 < (ulonglong)
                      ((longlong)(((ulonglong)((longlong)(uVar17 + 3) >> 1) >> 0x3e) + 3 + uVar17)
                      >> 2));
    in_ZMM7 = ZEXT1664(in_ZMM7._0_16_);
    in_ZMM15 = ZEXT1664(in_ZMM15._0_16_);
  }
  lVar31 = 0;
  lVar27 = 0;
  if ((longlong)param_6 <= lVar21) {
    return;
  }
  param_9 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
  auVar44 = vpcmpeqd_avx(auVar44,auVar44);
  auVar48 = vpcmpeqd_avx2(auVar48,auVar48);
  uStack_298 = 0;
LAB_14055aa85:
  uVar17 = 0;
  uVar26 = 0;
  pauStack_288 = (undefined1 (*) [32])(param_3 + lVar21 * param_4 + lVar27);
  lVar32 = param_1 + param_2 * lVar21 + lVar31;
  if (0 < (longlong)(param_5 & 0xffffffffffffff80)) {
    lVar18 = lVar21 * param_4 + param_3 + lVar27;
    uVar29 = uVar26;
    do {
      auVar47 = vpcmpeqd_avx2(in_ZMM15._0_32_,in_ZMM15._0_32_);
      in_ZMM15 = ZEXT3264(auVar47);
      auVar51 = ZEXT3264(auVar48);
      auVar50 = ZEXT3264(auVar48);
      auVar46 = ZEXT3264(auVar48);
      auVar47 = auVar48;
      auVar49 = auVar48;
      auVar60 = auVar48;
      if (0 < (longlong)param_8) {
        uVar17 = 0;
        lVar19 = param_2 * lVar21 + param_1 + lVar31 + uVar29;
        lVar20 = 0;
        auVar47 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
        in_ZMM4 = ZEXT3264(auVar47);
        auVar61 = ZEXT3264(auVar48);
        in_ZMM7 = ZEXT3264(auVar48);
        auVar59 = ZEXT3264(auVar48);
        do {
          uVar30 = 0;
          uVar14 = (ulonglong)*(ushort *)(param_9 + uVar17 * 4);
          lVar39 = 0;
          if (uVar14 != 0) {
            lVar12 = (longlong)(int)((uint)*(ushort *)(param_9 + 2 + uVar17 * 4) * param_10);
            lVar33 = lVar12 + lVar20 + lVar19;
            do {
              pauVar13 = (undefined1 (*) [32])(lVar39 + lVar19 + lVar20 + lVar12);
              uVar30 = uVar30 + 1;
              lVar40 = lVar39 + 0x20;
              lVar43 = lVar39 + 0x40;
              lVar35 = lVar39 + 0x60;
              lVar39 = lVar39 + lVar34;
              auVar47 = vpminub_avx2(in_ZMM4._0_32_,*pauVar13);
              in_ZMM4 = ZEXT3264(auVar47);
              auVar49 = vpminub_avx2(auVar61._0_32_,*(undefined1 (*) [32])(lVar40 + lVar33));
              auVar61 = ZEXT3264(auVar49);
              auVar60 = vpminub_avx2(in_ZMM7._0_32_,*(undefined1 (*) [32])(lVar43 + lVar33));
              in_ZMM7 = ZEXT3264(auVar60);
              auVar45 = vpminub_avx2(auVar59._0_32_,*(undefined1 (*) [32])(lVar35 + lVar33));
              auVar59 = ZEXT3264(auVar45);
            } while (uVar30 < uVar14);
            in_ZMM15 = ZEXT3264(auVar47);
            auVar51 = ZEXT3264(auVar49);
            auVar50 = ZEXT3264(auVar60);
            auVar46 = ZEXT3264(auVar45);
          }
          auVar60 = auVar46._0_32_;
          auVar49 = auVar50._0_32_;
          auVar47 = auVar51._0_32_;
          uVar17 = uVar17 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar17 < param_8);
      }
      uVar26 = uVar26 + 1;
      uVar17 = uVar29 + 0x80;
      lVar32 = lVar32 + 0x80;
      pauStack_288 = pauStack_288 + 4;
      *(undefined1 (*) [32])(lVar18 + uVar29) = in_ZMM15._0_32_;
      *(undefined1 (*) [32])(lVar18 + 0x20 + uVar29) = auVar47;
      *(undefined1 (*) [32])(lVar18 + 0x40 + uVar29) = auVar49;
      *(undefined1 (*) [32])(lVar18 + 0x60 + uVar29) = auVar60;
      uVar29 = uVar17;
    } while (uVar26 < (param_5 & 0xffffffffffffff80) + 0x7f >> 7);
  }
  uVar26 = uVar17;
  lVar18 = lVar32;
  if ((longlong)uVar17 < (longlong)uVar23) {
    uVar29 = 1;
    uVar14 = 0;
    uVar30 = (uVar23 - uVar17) + 0x3f >> 9;
    if (uVar30 != 0) {
      lVar12 = 0;
      lVar39 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar33 = 0;
      lVar19 = lVar12;
      lVar20 = lVar33;
      do {
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 0x40;
        lVar19 = lVar19 + 0x40;
        lVar12 = lVar12 + 0x40;
        lVar39 = lVar39 + 0x40;
        lVar40 = lVar40 + 0x40;
        lVar43 = lVar43 + 0x40;
        lVar20 = lVar20 + 0x40;
        lVar33 = lVar33 + 0x40;
      } while (uVar14 < uVar30);
      uVar29 = uVar14 * 8 + 1;
      lVar18 = lVar18 + lVar19 + lVar12 + lVar39 + lVar40 + lVar43 + lVar20 + lVar33;
    }
    lVar19 = (uVar23 - 1) - uVar17;
    uVar14 = (longlong)(lVar19 + 0x40 + ((ulonglong)(lVar19 + 0x40 >> 5) >> 0x3a)) >> 6;
    if (uVar29 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x00014055adfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055adfe + (byte)(&DAT_14308ae90)[(uint)((int)uVar14 - (int)uVar29)]))();
      return;
    }
    uVar29 = 0;
    lVar19 = 0;
    do {
      uVar14 = 0;
      auVar47 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      in_ZMM7 = ZEXT3264(auVar47);
      lVar20 = 0;
      in_ZMM4 = ZEXT3264(auVar48);
      auVar46 = ZEXT3264(auVar48);
      auVar47 = auVar48;
      if (0 < (longlong)param_8) {
        do {
          uVar25 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar39 = 0;
          if (uVar36 != 0) {
            lVar12 = (longlong)(int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10);
            do {
              pauVar13 = (undefined1 (*) [32])(lVar39 + lVar12 + lVar32 + lVar19 + lVar20);
              uVar25 = uVar25 + 1;
              lVar33 = lVar39 + 0x20;
              lVar39 = lVar39 + lVar34;
              auVar47 = vpminub_avx2(in_ZMM7._0_32_,*pauVar13);
              in_ZMM7 = ZEXT3264(auVar47);
              auVar49 = vpminub_avx2(auVar46._0_32_,
                                     *(undefined1 (*) [32])
                                      (lVar33 + lVar20 + lVar12 + lVar32 + lVar19));
              auVar46 = ZEXT3264(auVar49);
            } while (uVar25 < uVar36);
            in_ZMM4 = ZEXT3264(auVar47);
          }
          auVar47 = auVar46._0_32_;
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar14 < param_8);
      }
      uVar29 = uVar29 + 1;
      lVar19 = lVar19 + 0x40;
      *pauStack_288 = in_ZMM7._0_32_;
      pauStack_288[1] = auVar47;
      pauStack_288 = pauStack_288 + 2;
    } while (uVar29 < (uVar23 + 0x3f) - uVar17 >> 6);
    uVar29 = 1;
    uVar14 = 0;
    if (uVar30 != 0) {
      lVar39 = 0;
      lVar20 = 0;
      lVar12 = 0;
      lVar33 = 0;
      lVar40 = 0;
      lVar19 = 0;
      lVar32 = lVar19;
      do {
        uVar14 = uVar14 + 1;
        uVar26 = uVar26 + 0x40;
        lVar39 = lVar39 + 0x40;
        lVar20 = lVar20 + 0x40;
        lVar12 = lVar12 + 0x40;
        lVar33 = lVar33 + 0x40;
        lVar40 = lVar40 + 0x40;
        lVar19 = lVar19 + 0x40;
        lVar32 = lVar32 + 0x40;
      } while (uVar14 < (uVar23 - uVar17) + 0x3f >> 9);
      uVar29 = uVar14 * 8 + 1;
      uVar26 = uVar26 + lVar39 + lVar20 + lVar12 + lVar33 + lVar40 + lVar19 + lVar32;
    }
    lVar32 = (uVar23 - 1) - uVar17;
    uVar17 = (longlong)(lVar32 + 0x40 + ((ulonglong)(lVar32 + 0x40 >> 5) >> 0x3a)) >> 6;
    if (uVar29 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x00014055b0e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055b0e5 + (byte)(&DAT_14308ae98)[(uint)((int)uVar17 - (int)uVar29)]))();
      return;
    }
  }
  uVar17 = uVar26;
  lVar32 = lVar18;
  if ((longlong)uVar26 < (longlong)uVar28) {
    uVar29 = 1;
    uVar14 = 0;
    uVar30 = (uVar28 - uVar26) + 0x1f >> 8;
    if (uVar30 != 0) {
      lVar12 = 0;
      lVar39 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar33 = 0;
      lVar19 = lVar12;
      lVar20 = lVar33;
      do {
        uVar14 = uVar14 + 1;
        lVar32 = lVar32 + 0x20;
        lVar19 = lVar19 + 0x20;
        lVar12 = lVar12 + 0x20;
        lVar39 = lVar39 + 0x20;
        lVar40 = lVar40 + 0x20;
        lVar43 = lVar43 + 0x20;
        lVar20 = lVar20 + 0x20;
        lVar33 = lVar33 + 0x20;
      } while (uVar14 < uVar30);
      uVar29 = uVar14 * 8 + 1;
      lVar32 = lVar32 + lVar19 + lVar12 + lVar39 + lVar40 + lVar43 + lVar20 + lVar33;
    }
    lVar19 = (uVar28 - 1) - uVar26;
    uVar14 = (longlong)(lVar19 + 0x20 + ((ulonglong)(lVar19 + 0x20 >> 4) >> 0x3b)) >> 5;
    if (uVar29 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x00014055b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055b23e + (byte)(&DAT_14308aea0)[(uint)((int)uVar14 - (int)uVar29)]))();
      return;
    }
    uVar29 = 0;
    lVar19 = 0;
    do {
      uVar14 = 0;
      auVar47 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      in_ZMM4 = ZEXT3264(auVar47);
      lVar20 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar36 = 0;
          uVar25 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar39 = 0;
          if (uVar25 != 0) {
            do {
              pauVar13 = (undefined1 (*) [32])
                         (lVar39 + (longlong)
                                   (int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10) +
                                   lVar18 + lVar19 + lVar20);
              uVar36 = uVar36 + 1;
              lVar39 = lVar39 + lVar34;
              auVar47 = vpminub_avx2(in_ZMM4._0_32_,*pauVar13);
              in_ZMM4 = ZEXT3264(auVar47);
            } while (uVar36 < uVar25);
          }
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar14 < param_8);
      }
      uVar29 = uVar29 + 1;
      lVar19 = lVar19 + 0x20;
      *pauStack_288 = in_ZMM4._0_32_;
      pauStack_288 = pauStack_288 + 1;
    } while (uVar29 < (uVar28 + 0x1f) - uVar26 >> 5);
    uVar29 = 1;
    uVar14 = 0;
    if (uVar30 != 0) {
      lVar39 = 0;
      lVar20 = 0;
      lVar12 = 0;
      lVar33 = 0;
      lVar40 = 0;
      lVar19 = 0;
      lVar18 = lVar19;
      do {
        uVar14 = uVar14 + 1;
        uVar17 = uVar17 + 0x20;
        lVar39 = lVar39 + 0x20;
        lVar20 = lVar20 + 0x20;
        lVar12 = lVar12 + 0x20;
        lVar33 = lVar33 + 0x20;
        lVar40 = lVar40 + 0x20;
        lVar19 = lVar19 + 0x20;
        lVar18 = lVar18 + 0x20;
      } while (uVar14 < (uVar28 - uVar26) + 0x1f >> 8);
      uVar29 = uVar14 * 8 + 1;
      uVar17 = uVar17 + lVar39 + lVar20 + lVar12 + lVar33 + lVar40 + lVar19 + lVar18;
    }
    lVar18 = (uVar28 - 1) - uVar26;
    uVar26 = (longlong)(lVar18 + 0x20 + ((ulonglong)(lVar18 + 0x20 >> 4) >> 0x3b)) >> 5;
    if (uVar29 <= uVar26) {
                    /* WARNING: Could not recover jumptable at 0x00014055b4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055b4e5 + (byte)(&DAT_14308aea8)[(uint)((int)uVar26 - (int)uVar29)]))();
      return;
    }
  }
  uVar26 = uVar17;
  lVar18 = lVar32;
  if ((longlong)uVar17 < (longlong)uVar38) {
    uVar29 = 1;
    uVar14 = 0;
    uVar30 = (uVar38 - uVar17) + 0xf >> 7;
    if (uVar30 != 0) {
      lVar12 = 0;
      lVar39 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar33 = 0;
      lVar19 = lVar12;
      lVar20 = lVar33;
      do {
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 0x10;
        lVar19 = lVar19 + 0x10;
        lVar12 = lVar12 + 0x10;
        lVar39 = lVar39 + 0x10;
        lVar40 = lVar40 + 0x10;
        lVar43 = lVar43 + 0x10;
        lVar20 = lVar20 + 0x10;
        lVar33 = lVar33 + 0x10;
      } while (uVar14 < uVar30);
      uVar29 = uVar14 * 8 + 1;
      lVar18 = lVar18 + lVar19 + lVar12 + lVar39 + lVar40 + lVar43 + lVar20 + lVar33;
    }
    lVar19 = (uVar38 - 1) - uVar17;
    uVar14 = (longlong)(lVar19 + 0x10 + ((ulonglong)(lVar19 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar29 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x00014055b63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055b63e + (byte)(&DAT_14308aeb0)[(uint)((int)uVar14 - (int)uVar29)]))();
      return;
    }
    uVar29 = 0;
    lVar19 = 0;
    do {
      uVar14 = 0;
      auVar53 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar53);
      lVar20 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar36 = 0;
          uVar25 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar39 = 0;
          if (uVar25 != 0) {
            do {
              pauVar5 = (undefined1 (*) [16])
                        (lVar39 + (longlong)
                                  (int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10) +
                                  lVar32 + lVar19 + lVar20);
              uVar36 = uVar36 + 1;
              lVar39 = lVar39 + lVar34;
              auVar53 = vpminub_avx(in_ZMM4._0_16_,*pauVar5);
              in_ZMM4 = ZEXT1664(auVar53);
            } while (uVar36 < uVar25);
          }
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + param_2;
        } while (uVar14 < param_8);
      }
      uVar29 = uVar29 + 1;
      lVar19 = lVar19 + 0x10;
      *(undefined1 (*) [16])*pauStack_288 = in_ZMM4._0_16_;
      pauStack_288 = (undefined1 (*) [32])(*pauStack_288 + 0x10);
    } while (uVar29 < (uVar38 + 0xf) - uVar17 >> 4);
    uVar29 = 1;
    uVar14 = 0;
    if (uVar30 != 0) {
      lVar39 = 0;
      lVar20 = 0;
      lVar12 = 0;
      lVar33 = 0;
      lVar40 = 0;
      lVar19 = 0;
      lVar32 = lVar19;
      do {
        uVar14 = uVar14 + 1;
        uVar26 = uVar26 + 0x10;
        lVar39 = lVar39 + 0x10;
        lVar20 = lVar20 + 0x10;
        lVar12 = lVar12 + 0x10;
        lVar33 = lVar33 + 0x10;
        lVar40 = lVar40 + 0x10;
        lVar19 = lVar19 + 0x10;
        lVar32 = lVar32 + 0x10;
      } while (uVar14 < (uVar38 - uVar17) + 0xf >> 7);
      uVar29 = uVar14 * 8 + 1;
      uVar26 = uVar26 + lVar39 + lVar20 + lVar12 + lVar33 + lVar40 + lVar19 + lVar32;
    }
    lVar32 = (uVar38 - 1) - uVar17;
    uVar17 = (longlong)(lVar32 + 0x10 + ((ulonglong)(lVar32 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar29 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x00014055b8e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055b8e5 + (byte)(&DAT_14308aeb8)[(uint)((int)uVar17 - (int)uVar29)]))();
      return;
    }
  }
  uVar17 = 0;
  lVar32 = lVar18;
  if ((longlong)uVar26 < (longlong)uVar42) {
    uVar29 = (uVar42 + 7) - uVar26;
    do {
      uVar14 = 0;
      auVar46 = ZEXT1664(auVar44);
      uVar52 = auVar44._0_8_;
      lVar19 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar36 = 0;
          uVar30 = (ulonglong)*(ushort *)(param_9 + uVar14 * 4);
          lVar20 = 0;
          if (uVar30 != 0) {
            do {
              uVar25 = *(ulonglong *)
                        (lVar20 + (longlong)
                                  (int)((uint)*(ushort *)(param_9 + 2 + uVar14 * 4) * param_10) +
                                  lVar18 + uVar17 * 8 + lVar19);
              in_ZMM4 = ZEXT864(uVar25);
              uVar36 = uVar36 + 1;
              lVar20 = lVar20 + lVar34;
              auVar53._8_8_ = 0;
              auVar53._0_8_ = uVar25;
              auVar53 = vpminub_avx(auVar46._0_16_,auVar53);
              auVar46 = ZEXT1664(auVar53);
            } while (uVar36 < uVar30);
          }
          uVar52 = auVar46._0_8_;
          uVar14 = uVar14 + 1;
          lVar19 = lVar19 + param_2;
        } while (uVar14 < param_8);
      }
      uVar17 = uVar17 + 1;
      lVar32 = lVar32 + 8;
      *(undefined8 *)*pauStack_288 = uVar52;
      pauStack_288 = (undefined1 (*) [32])(*pauStack_288 + 8);
      uVar26 = uVar26 + 8;
    } while (uVar17 < uVar29 >> 3);
  }
  uVar17 = uVar26;
  lVar18 = lVar32;
  if ((longlong)uVar26 < (longlong)uVar22) {
    uVar29 = 1;
    uVar14 = 0;
    uVar30 = (uVar22 - uVar26) + 3 >> 5;
    if (uVar30 != 0) {
      lVar33 = 0;
      lVar12 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar39 = 0;
      lVar19 = lVar12;
      lVar20 = lVar39;
      do {
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 4;
        lVar33 = lVar33 + 4;
        lVar19 = lVar19 + 4;
        lVar12 = lVar12 + 4;
        lVar40 = lVar40 + 4;
        lVar43 = lVar43 + 4;
        lVar20 = lVar20 + 4;
        lVar39 = lVar39 + 4;
      } while (uVar14 < uVar30);
      uVar29 = uVar14 * 8 + 1;
      lVar18 = lVar18 + lVar33 + lVar19 + lVar12 + lVar40 + lVar43 + lVar20 + lVar39;
    }
    lVar19 = (uVar22 - 1) - uVar26;
    uVar14 = (longlong)(lVar19 + 4 + ((ulonglong)(lVar19 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar29 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x00014055bba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055bba2 + (byte)(&DAT_14308aec0)[(uint)((int)uVar14 - (int)uVar29)]))();
      return;
    }
    uVar29 = 0;
    do {
      uVar36 = 0;
      auVar53 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar53);
      lVar19 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar15 = 0;
          uVar25 = (ulonglong)*(ushort *)(param_9 + uVar36 * 4);
          lVar20 = 0;
          if (uVar25 != 0) {
            do {
              auVar53 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)
                                     (lVar20 + (longlong)
                                               (int)((uint)*(ushort *)(param_9 + 2 + uVar36 * 4) *
                                                    param_10) + lVar32 + uVar29 * 4 + lVar19),0);
              uVar15 = uVar15 + 1;
              lVar20 = lVar20 + lVar34;
              auVar53 = vpminub_avx(in_ZMM4._0_16_,auVar53);
              in_ZMM4 = ZEXT1664(auVar53);
            } while (uVar15 < uVar25);
          }
          uVar36 = uVar36 + 1;
          lVar19 = lVar19 + param_2;
        } while (uVar36 < param_8);
      }
      uVar29 = uVar29 + 1;
      *(int *)*pauStack_288 = in_ZMM4._0_4_;
      pauStack_288 = (undefined1 (*) [32])(*pauStack_288 + 4);
    } while (uVar29 < (uVar22 + 3) - uVar26 >> 2);
    uVar29 = 0;
    if (3 < (longlong)uVar14) {
      uVar36 = uVar14 & 0xfffffffffffffffc;
LAB_14055bd80:
      if ((longlong)param_8 < 1) goto code_r0x00014055bd89;
      uVar25 = 0;
      while( true ) {
        do {
          uVar25 = uVar25 + 1;
        } while (uVar25 < param_8);
        uVar29 = uVar29 + 4;
        if (uVar36 <= uVar29) break;
        uVar25 = 0;
      }
      if (uVar36 < uVar14) goto LAB_14055bea6;
      goto LAB_14055beaa;
    }
    if (uVar14 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_14055cb78;
          if (param_8 < 3) goto LAB_14055cb78;
          if (param_8 < 4) goto LAB_14055cb78;
          if (param_8 < 5) goto LAB_14055cb78;
          if (param_8 < 6) goto LAB_14055cb78;
          if (param_8 < 7) goto LAB_14055cb78;
          if (param_8 < 8) goto LAB_14055cb78;
          if (param_8 < 9) goto LAB_14055cb78;
          uVar25 = 9;
          if (param_8 < 10) goto LAB_14055cb73;
          while( true ) {
            do {
              uVar25 = uVar25 + 1;
            } while (uVar25 < param_8);
LAB_14055cb73:
            if ((longlong)param_8 < 1) break;
LAB_14055cb78:
            uVar36 = uVar29 + 1;
            if (uVar14 <= uVar36) goto LAB_14055beaa;
LAB_14055bea6:
            uVar25 = 0;
            uVar29 = uVar36;
          }
          uVar36 = uVar29 + 1;
          if (uVar14 <= uVar36) goto LAB_14055beaa;
LAB_14055bda3:
          uVar29 = uVar36 + 1;
          if (uVar14 <= uVar29) goto LAB_14055beaa;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar14);
    }
    goto LAB_14055beaa;
  }
  goto LAB_14055bfc0;
code_r0x00014055bd89:
  uVar29 = uVar29 + 4;
  if (uVar36 <= uVar29) goto code_r0x00014055bd92;
  goto LAB_14055bd80;
code_r0x00014055bd92:
  if (uVar36 < uVar14) goto LAB_14055bda3;
LAB_14055beaa:
  uVar29 = 1;
  uVar14 = 0;
  if (uVar30 != 0) {
    lVar20 = 0;
    lVar39 = 0;
    lVar12 = 0;
    lVar33 = 0;
    lVar40 = 0;
    lVar19 = 0;
    lVar32 = lVar19;
    do {
      uVar14 = uVar14 + 1;
      uVar17 = uVar17 + 4;
      lVar20 = lVar20 + 4;
      lVar39 = lVar39 + 4;
      lVar12 = lVar12 + 4;
      lVar33 = lVar33 + 4;
      lVar40 = lVar40 + 4;
      lVar19 = lVar19 + 4;
      lVar32 = lVar32 + 4;
    } while (uVar14 < (uVar22 - uVar26) + 3 >> 5);
    uVar29 = uVar14 * 8 + 1;
    uVar17 = uVar17 + lVar20 + lVar39 + lVar12 + lVar33 + lVar40 + lVar19 + lVar32;
  }
  lVar32 = (uVar22 - 1) - uVar26;
  uVar26 = (longlong)(lVar32 + 4 + ((ulonglong)(lVar32 + 4 >> 1) >> 0x3e)) >> 2;
  if (uVar29 <= uVar26) {
                    /* WARNING: Could not recover jumptable at 0x00014055bfa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14055bfa4 + (byte)(&DAT_14308aec8)[(uint)((int)uVar26 - (int)uVar29)]))();
    return;
  }
LAB_14055bfc0:
  uVar26 = uVar17;
  lVar32 = lVar18;
  if ((longlong)uVar17 < (longlong)uVar16) {
    uVar29 = 1;
    uVar14 = 0;
    uVar30 = (uVar16 - uVar17) + 1 >> 4;
    if (uVar30 != 0) {
      lVar33 = 0;
      lVar40 = 0;
      lVar43 = 0;
      lVar12 = 0;
      lVar39 = 0;
      lVar19 = lVar12;
      lVar20 = lVar39;
      do {
        uVar14 = uVar14 + 1;
        lVar32 = lVar32 + 2;
        lVar33 = lVar33 + 2;
        lVar40 = lVar40 + 2;
        lVar43 = lVar43 + 2;
        lVar19 = lVar19 + 2;
        lVar12 = lVar12 + 2;
        lVar20 = lVar20 + 2;
        lVar39 = lVar39 + 2;
      } while (uVar14 < uVar30);
      uVar29 = uVar14 * 8 + 1;
      lVar32 = lVar32 + lVar33 + lVar40 + lVar43 + lVar19 + lVar12 + lVar20 + lVar39;
    }
    lVar19 = (uVar16 - 1) - uVar17;
    uVar14 = (lVar19 + 2) - (lVar19 + 2 >> 0x3f) >> 1;
    if (uVar29 <= uVar14) {
                    /* WARNING: Could not recover jumptable at 0x00014055c0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14055c0fe + (byte)(&DAT_14308aed0)[(uint)((int)uVar14 - (int)uVar29)]))();
      return;
    }
    uVar29 = 0;
    do {
      uVar36 = 0;
      auVar53 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar53);
      lVar19 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar15 = 0;
          uVar25 = (ulonglong)*(ushort *)(param_9 + uVar36 * 4);
          lVar20 = 0;
          if (uVar25 != 0) {
            do {
              uVar15 = uVar15 + 1;
              auVar53 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)
                                           (lVar20 + (longlong)
                                                     (int)((uint)*(ushort *)
                                                                  (param_9 + 2 + uVar36 * 4) *
                                                          param_10) + lVar18 + uVar29 * 2 + lVar19),
                                    0);
              lVar20 = lVar20 + lVar34;
              auVar53 = vpminub_avx(in_ZMM4._0_16_,auVar53);
              in_ZMM4 = ZEXT1664(auVar53);
            } while (uVar15 < uVar25);
          }
          uVar36 = uVar36 + 1;
          lVar19 = lVar19 + param_2;
        } while (uVar36 < param_8);
      }
      uVar29 = uVar29 + 1;
      vpextrw_avx(in_ZMM4._0_16_,0);
      pauStack_288 = (undefined1 (*) [32])(*pauStack_288 + 2);
    } while (uVar29 < (uVar16 + 1) - uVar17 >> 1);
    uVar29 = 0;
    if (3 < (longlong)uVar14) {
      uVar36 = uVar14 & 0xfffffffffffffffc;
LAB_14055c2e0:
      if ((longlong)param_8 < 1) goto code_r0x00014055c2e9;
      uVar25 = 0;
      while( true ) {
        do {
          uVar25 = uVar25 + 1;
        } while (uVar25 < param_8);
        uVar29 = uVar29 + 4;
        if (uVar36 <= uVar29) break;
        uVar25 = 0;
      }
      if (uVar36 < uVar14) goto LAB_14055c406;
      goto LAB_14055c40a;
    }
    if (uVar14 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_14055cb2a;
          if (param_8 < 3) goto LAB_14055cb2a;
          if (param_8 < 4) goto LAB_14055cb2a;
          if (param_8 < 5) goto LAB_14055cb2a;
          if (param_8 < 6) goto LAB_14055cb2a;
          if (param_8 < 7) goto LAB_14055cb2a;
          if (param_8 < 8) goto LAB_14055cb2a;
          if (param_8 < 9) goto LAB_14055cb2a;
          uVar25 = 9;
          if (param_8 < 10) goto LAB_14055cb25;
          while( true ) {
            do {
              uVar25 = uVar25 + 1;
            } while (uVar25 < param_8);
LAB_14055cb25:
            if ((longlong)param_8 < 1) break;
LAB_14055cb2a:
            uVar36 = uVar29 + 1;
            if (uVar14 <= uVar36) goto LAB_14055c40a;
LAB_14055c406:
            uVar25 = 0;
            uVar29 = uVar36;
          }
          uVar36 = uVar29 + 1;
          if (uVar14 <= uVar36) goto LAB_14055c40a;
LAB_14055c303:
          uVar29 = uVar36 + 1;
          if (uVar14 <= uVar29) goto LAB_14055c40a;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar14);
    }
    goto LAB_14055c40a;
  }
LAB_14055c51c:
  if ((longlong)uVar26 < (longlong)param_5) {
    uVar17 = 1;
    uVar29 = 0;
    uVar14 = param_5 - uVar26 >> 3;
    if (uVar14 != 0) {
      do {
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar14);
      uVar17 = uVar29 * 8 + 1;
    }
    uVar29 = (param_5 - (uVar26 + 1)) + 1;
    if (uVar17 <= uVar29) {
                    /* WARNING: Could not recover jumptable at 0x00014055c5a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_14308aee0)[(uint)((int)uVar29 - (int)uVar17)] + 0x14055c5ab)
      )();
      return;
    }
    uVar17 = 0;
    do {
      uVar30 = 0;
      auVar53 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar53);
      lVar18 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar25 = 0;
          uVar36 = (ulonglong)*(ushort *)(param_9 + uVar30 * 4);
          lVar19 = 0;
          if (uVar36 != 0) {
            do {
              auVar53 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar19 + lVar32 + uVar17 + lVar18 +
                                                             (longlong)
                                                             (int)((uint)*(ushort *)
                                                                          (param_9 + 2 + uVar30 * 4)
                                                                  * param_10)),0);
              uVar25 = uVar25 + 1;
              lVar19 = lVar19 + lVar34;
              auVar53 = vpminub_avx(in_ZMM4._0_16_,auVar53);
              in_ZMM4 = ZEXT1664(auVar53);
            } while (uVar25 < uVar36);
          }
          uVar30 = uVar30 + 1;
          lVar18 = lVar18 + param_2;
        } while (uVar30 < param_8);
      }
      uVar17 = uVar17 + 1;
      (*pauStack_288)[0] = in_ZMM4[0];
      pauStack_288 = (undefined1 (*) [32])(*pauStack_288 + 1);
    } while (uVar17 < param_5 - uVar26);
    uVar17 = 0;
    if (3 < (longlong)uVar29) {
      uVar26 = uVar29 & 0xfffffffffffffffc;
LAB_14055c720:
      if ((longlong)param_8 < 1) goto code_r0x00014055c729;
      uVar30 = 0;
      while( true ) {
        do {
          uVar30 = uVar30 + 1;
        } while (uVar30 < param_8);
        uVar17 = uVar17 + 4;
        if (uVar26 <= uVar17) break;
        uVar30 = 0;
      }
      if (uVar26 < uVar29) goto LAB_14055c845;
      goto LAB_14055c849;
    }
    if (uVar29 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_14055cae0;
          if (param_8 < 3) goto LAB_14055cae0;
          if (param_8 < 4) goto LAB_14055cae0;
          if (param_8 < 5) goto LAB_14055cae0;
          if (param_8 < 6) goto LAB_14055cae0;
          if (param_8 < 7) goto LAB_14055cae0;
          if (param_8 < 8) goto LAB_14055cae0;
          if (param_8 < 9) goto LAB_14055cae0;
          uVar30 = 9;
          if (param_8 < 10) goto LAB_14055cadb;
          while( true ) {
            do {
              uVar30 = uVar30 + 1;
            } while (uVar30 < param_8);
LAB_14055cadb:
            if ((longlong)param_8 < 1) break;
LAB_14055cae0:
            uVar26 = uVar17 + 1;
            if (uVar29 <= uVar26) goto LAB_14055c849;
LAB_14055c845:
            uVar30 = 0;
            uVar17 = uVar26;
          }
          uVar26 = uVar17 + 1;
          if (uVar29 <= uVar26) goto LAB_14055c849;
LAB_14055c743:
          uVar17 = uVar26 + 1;
          if (uVar29 <= uVar17) goto LAB_14055c849;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar29);
LAB_14055c849:
      uVar17 = 0;
      if (7 < (longlong)uVar29) {
        uVar26 = uVar29 & 0xfffffffffffffff8;
LAB_14055c880:
        if ((longlong)param_8 < 1) goto code_r0x00014055c889;
        uVar30 = 0;
        while( true ) {
          do {
            uVar30 = uVar30 + 1;
          } while (uVar30 < param_8);
          uVar17 = uVar17 + 8;
          if (uVar26 <= uVar17) break;
          uVar30 = 0;
        }
        if (uVar26 < uVar29) goto LAB_14055c9a2;
        goto LAB_14055c9a6;
      }
    }
    uVar26 = 0;
    if (uVar29 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_14055ca83;
          if (param_8 < 3) goto LAB_14055ca83;
          if (param_8 < 4) goto LAB_14055ca83;
          if (param_8 < 5) goto LAB_14055ca83;
          if (param_8 < 6) goto LAB_14055ca83;
          if (param_8 < 7) goto LAB_14055ca83;
          if (param_8 < 8) goto LAB_14055ca83;
          if (param_8 < 9) goto LAB_14055ca83;
          uVar17 = 9;
          if (param_8 < 10) goto LAB_14055ca7e;
          while( true ) {
            do {
              uVar17 = uVar17 + 1;
            } while (uVar17 < param_8);
LAB_14055ca7e:
            if ((longlong)param_8 < 1) break;
LAB_14055ca83:
            uVar26 = uVar26 + 1;
            if (uVar29 <= uVar26) goto LAB_14055c9a6;
LAB_14055c9a2:
            uVar17 = 0;
          }
          uVar26 = uVar26 + 1;
          if (uVar29 <= uVar26) goto LAB_14055c9a6;
LAB_14055c8a3:
          uVar26 = uVar26 + 1;
          if (uVar29 <= uVar26) goto LAB_14055c9a6;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar29);
    }
LAB_14055c9a6:
    uVar17 = 1;
    uVar26 = 0;
    if (uVar14 != 0) {
      do {
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar14);
      uVar17 = uVar26 * 8 + 1;
    }
    if (uVar17 <= uVar29) {
                    /* WARNING: Could not recover jumptable at 0x00014055c9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_14308aee8)[(uint)((int)uVar29 - (int)uVar17)] + 0x14055c9f6)
      )();
      return;
    }
  }
  lVar31 = lVar31 + param_2;
  uStack_298 = uStack_298 + 1;
  lVar27 = lVar27 + param_4;
  if (param_6 - lVar21 <= uStack_298) {
    return;
  }
  goto LAB_14055aa85;
code_r0x00014055c2e9:
  uVar29 = uVar29 + 4;
  if (uVar36 <= uVar29) goto code_r0x00014055c2f2;
  goto LAB_14055c2e0;
code_r0x00014055c2f2:
  if (uVar36 < uVar14) goto LAB_14055c303;
LAB_14055c40a:
  uVar29 = 1;
  uVar14 = 0;
  if (uVar30 != 0) {
    lVar20 = 0;
    lVar39 = 0;
    lVar12 = 0;
    lVar33 = 0;
    lVar40 = 0;
    lVar19 = 0;
    lVar18 = lVar19;
    do {
      uVar14 = uVar14 + 1;
      uVar26 = uVar26 + 2;
      lVar20 = lVar20 + 2;
      lVar39 = lVar39 + 2;
      lVar12 = lVar12 + 2;
      lVar33 = lVar33 + 2;
      lVar40 = lVar40 + 2;
      lVar19 = lVar19 + 2;
      lVar18 = lVar18 + 2;
    } while (uVar14 < (uVar16 - uVar17) + 1 >> 4);
    uVar29 = uVar14 * 8 + 1;
    uVar26 = uVar26 + lVar20 + lVar39 + lVar12 + lVar33 + lVar40 + lVar19 + lVar18;
  }
  lVar18 = (uVar16 - 1) - uVar17;
  uVar17 = (lVar18 + 2) - (lVar18 + 2 >> 0x3f) >> 1;
  if (uVar29 <= uVar17) {
                    /* WARNING: Could not recover jumptable at 0x00014055c4fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14055c500 + (byte)(&DAT_14308aed8)[(uint)((int)uVar17 - (int)uVar29)]))();
    return;
  }
  goto LAB_14055c51c;
code_r0x00014055c729:
  uVar17 = uVar17 + 4;
  if (uVar26 <= uVar17) goto code_r0x00014055c732;
  goto LAB_14055c720;
code_r0x00014055c732:
  if (uVar26 < uVar29) goto LAB_14055c743;
  goto LAB_14055c849;
code_r0x00014055c889:
  uVar17 = uVar17 + 8;
  if (uVar26 <= uVar17) goto code_r0x00014055c892;
  goto LAB_14055c880;
code_r0x00014055c892:
  if (uVar26 < uVar29) goto LAB_14055c8a3;
  goto LAB_14055c9a6;
}

