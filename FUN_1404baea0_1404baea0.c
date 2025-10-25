
void FUN_1404baea0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

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
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  
  lVar6 = 0;
  param_9 = param_7 * param_8 + param_9;
  if (0 < param_6) {
    lVar7 = 0;
    lVar1 = param_7 * 2 + 2;
    lVar3 = 0;
    do {
      lVar15 = 0;
      lVar11 = param_1 + lVar7;
      pauVar12 = (undefined1 (*) [16])(param_3 + lVar3);
      if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        do {
          auVar32 = ZEXT1664((undefined1  [16])0x0);
          auVar31 = (undefined1  [16])0x0;
          lVar8 = 0;
          auVar30 = ZEXT1664((undefined1  [16])0x0);
          auVar29 = (undefined1  [16])0x0;
          lVar9 = 0;
          auVar28 = ZEXT1664((undefined1  [16])0x0);
          auVar27 = (undefined1  [16])0x0;
          lVar4 = 0;
          auVar26 = ZEXT1664((undefined1  [16])0x0);
          auVar25 = (undefined1  [16])0x0;
          lVar5 = 0;
          auVar24 = ZEXT1664((undefined1  [16])0x0);
          auVar23 = (undefined1  [16])0x0;
          auVar22 = ZEXT1664((undefined1  [16])0x0);
          auVar21 = (undefined1  [16])0x0;
          auVar20 = ZEXT1664((undefined1  [16])0x0);
          auVar18 = (undefined1  [16])0x0;
          auVar17 = ZEXT1664((undefined1  [16])0x0);
          auVar19 = (undefined1  [16])0x0;
          if (0 < param_8) {
            do {
              uVar10 = (ulonglong)*(ushort *)(param_9 + lVar9 * 2);
              lVar13 = 0;
              if (uVar10 != 0) {
                lVar2 = lVar11 + lVar4;
                do {
                  uVar14 = (ulonglong)*(ushort *)(param_9 + lVar5 + 2 + lVar13 * 2);
                  lVar13 = lVar13 + 1;
                  auVar19 = vpmaxuw_avx(auVar32._0_16_,*(undefined1 (*) [16])(lVar2 + uVar14 * 2));
                  auVar32 = ZEXT1664(auVar19);
                  auVar19 = vpmaxuw_avx(auVar30._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x10 + uVar14 * 2));
                  auVar30 = ZEXT1664(auVar19);
                  auVar19 = vpmaxuw_avx(auVar28._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x20 + uVar14 * 2));
                  auVar28 = ZEXT1664(auVar19);
                  auVar19 = vpmaxuw_avx(auVar26._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x30 + uVar14 * 2));
                  auVar26 = ZEXT1664(auVar19);
                  auVar19 = vpmaxuw_avx(auVar24._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x40 + uVar14 * 2));
                  auVar24 = ZEXT1664(auVar19);
                  auVar19 = vpmaxuw_avx(auVar22._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x50 + uVar14 * 2));
                  auVar22 = ZEXT1664(auVar19);
                  auVar19 = vpmaxuw_avx(auVar20._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x60 + uVar14 * 2));
                  auVar20 = ZEXT1664(auVar19);
                  auVar19 = vpmaxuw_avx(auVar17._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x70 + uVar14 * 2));
                  auVar17 = ZEXT1664(auVar19);
                } while (lVar13 < (longlong)uVar10);
              }
              auVar19 = auVar17._0_16_;
              auVar18 = auVar20._0_16_;
              auVar21 = auVar22._0_16_;
              auVar23 = auVar24._0_16_;
              auVar25 = auVar26._0_16_;
              auVar27 = auVar28._0_16_;
              auVar29 = auVar30._0_16_;
              auVar31 = auVar32._0_16_;
              lVar8 = lVar8 + 1;
              lVar5 = lVar5 + lVar1;
              lVar9 = lVar9 + 1 + param_7;
              lVar4 = lVar4 + param_2 * 2;
            } while (lVar8 < param_8);
          }
          lVar15 = lVar15 + 0x40;
          lVar11 = lVar11 + 0x80;
          *pauVar12 = auVar31;
          pauVar12[1] = auVar29;
          pauVar12[2] = auVar27;
          pauVar12[3] = auVar25;
          pauVar12[4] = auVar23;
          pauVar12[5] = auVar21;
          pauVar12[6] = auVar18;
          pauVar12[7] = auVar19;
          pauVar12 = pauVar12 + 8;
        } while (lVar15 < (longlong)(param_5 & 0xffffffffffffffc0));
      }
      for (; lVar15 < (longlong)(param_5 & 0xffffffffffffffe0); lVar15 = lVar15 + 0x20) {
        auVar24 = ZEXT1664((undefined1  [16])0x0);
        auVar23 = (undefined1  [16])0x0;
        lVar8 = 0;
        auVar22 = ZEXT1664((undefined1  [16])0x0);
        auVar21 = (undefined1  [16])0x0;
        lVar9 = 0;
        auVar20 = ZEXT1664((undefined1  [16])0x0);
        auVar18 = (undefined1  [16])0x0;
        lVar4 = 0;
        auVar17 = ZEXT1664((undefined1  [16])0x0);
        auVar19 = (undefined1  [16])0x0;
        lVar5 = 0;
        if (0 < param_8) {
          do {
            uVar10 = (ulonglong)*(ushort *)(param_9 + lVar9 * 2);
            lVar13 = 0;
            if (uVar10 != 0) {
              lVar2 = lVar11 + lVar4;
              do {
                uVar14 = (ulonglong)*(ushort *)(param_9 + lVar5 + 2 + lVar13 * 2);
                lVar13 = lVar13 + 1;
                auVar19 = vpmaxuw_avx(auVar24._0_16_,*(undefined1 (*) [16])(lVar2 + uVar14 * 2));
                auVar24 = ZEXT1664(auVar19);
                auVar19 = vpmaxuw_avx(auVar22._0_16_,
                                      *(undefined1 (*) [16])(lVar2 + 0x10 + uVar14 * 2));
                auVar22 = ZEXT1664(auVar19);
                auVar19 = vpmaxuw_avx(auVar20._0_16_,
                                      *(undefined1 (*) [16])(lVar2 + 0x20 + uVar14 * 2));
                auVar20 = ZEXT1664(auVar19);
                auVar19 = vpmaxuw_avx(auVar17._0_16_,
                                      *(undefined1 (*) [16])(lVar2 + 0x30 + uVar14 * 2));
                auVar17 = ZEXT1664(auVar19);
              } while (lVar13 < (longlong)uVar10);
            }
            auVar19 = auVar17._0_16_;
            auVar18 = auVar20._0_16_;
            auVar21 = auVar22._0_16_;
            auVar23 = auVar24._0_16_;
            lVar8 = lVar8 + 1;
            lVar5 = lVar5 + lVar1;
            lVar9 = lVar9 + 1 + param_7;
            lVar4 = lVar4 + param_2 * 2;
          } while (lVar8 < param_8);
        }
        lVar11 = lVar11 + 0x40;
        *pauVar12 = auVar23;
        pauVar12[1] = auVar21;
        pauVar12[2] = auVar18;
        pauVar12[3] = auVar19;
        pauVar12 = pauVar12 + 4;
      }
      for (; lVar15 < (longlong)(param_5 & 0xfffffffffffffff8); lVar15 = lVar15 + 8) {
        lVar8 = 0;
        auVar17 = ZEXT1664((undefined1  [16])0x0);
        auVar19 = (undefined1  [16])0x0;
        lVar9 = 0;
        lVar4 = 0;
        lVar5 = 0;
        if (0 < param_8) {
          do {
            uVar10 = (ulonglong)*(ushort *)(param_9 + lVar9 * 2);
            lVar13 = 0;
            if (uVar10 != 0) {
              do {
                lVar2 = lVar13 * 2;
                lVar13 = lVar13 + 1;
                auVar19 = vpmaxuw_avx(auVar17._0_16_,
                                      *(undefined1 (*) [16])
                                       (lVar11 + lVar4 +
                                       (ulonglong)*(ushort *)(param_9 + lVar5 + 2 + lVar2) * 2));
                auVar17 = ZEXT1664(auVar19);
              } while (lVar13 < (longlong)uVar10);
            }
            auVar19 = auVar17._0_16_;
            lVar8 = lVar8 + 1;
            lVar5 = lVar5 + lVar1;
            lVar9 = lVar9 + 1 + param_7;
            lVar4 = lVar4 + param_2 * 2;
          } while (lVar8 < param_8);
        }
        lVar11 = lVar11 + 0x10;
        *pauVar12 = auVar19;
        pauVar12 = pauVar12 + 1;
      }
      for (; lVar15 < (longlong)(param_5 & 0xfffffffffffffffc); lVar15 = lVar15 + 4) {
        lVar8 = 0;
        auVar17 = ZEXT1664((undefined1  [16])0x0);
        uVar16 = 0;
        lVar9 = 0;
        lVar4 = 0;
        lVar5 = 0;
        if (0 < param_8) {
          do {
            uVar10 = (ulonglong)*(ushort *)(param_9 + lVar9 * 2);
            lVar13 = 0;
            if (uVar10 != 0) {
              do {
                lVar2 = lVar13 * 2;
                lVar13 = lVar13 + 1;
                auVar19._8_8_ = 0;
                auVar19._0_8_ =
                     *(ulonglong *)
                      (lVar11 + lVar4 + (ulonglong)*(ushort *)(param_9 + lVar5 + 2 + lVar2) * 2);
                auVar19 = vpmaxuw_avx(auVar17._0_16_,auVar19);
                auVar17 = ZEXT1664(auVar19);
              } while (lVar13 < (longlong)uVar10);
            }
            uVar16 = auVar17._0_8_;
            lVar8 = lVar8 + 1;
            lVar5 = lVar5 + lVar1;
            lVar9 = lVar9 + 1 + param_7;
            lVar4 = lVar4 + param_2 * 2;
          } while (lVar8 < param_8);
        }
        lVar11 = lVar11 + 8;
        *(undefined8 *)*pauVar12 = uVar16;
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
      }
      for (; lVar15 < (longlong)(param_5 & 0xfffffffffffffffe); lVar15 = lVar15 + 2) {
        lVar8 = 0;
        auVar17 = ZEXT1664((undefined1  [16])0x0);
        lVar9 = 0;
        lVar4 = 0;
        lVar5 = 0;
        if (0 < param_8) {
          do {
            uVar10 = (ulonglong)*(ushort *)(param_9 + lVar9 * 2);
            lVar13 = 0;
            if (uVar10 != 0) {
              do {
                lVar2 = lVar13 * 2;
                lVar13 = lVar13 + 1;
                auVar19 = vpinsrd_avx((undefined1  [16])0x0,
                                      *(undefined4 *)
                                       (lVar11 + lVar4 +
                                       (ulonglong)*(ushort *)(param_9 + lVar5 + 2 + lVar2) * 2),0);
                auVar19 = vpmaxuw_avx(auVar17._0_16_,auVar19);
                auVar17 = ZEXT1664(auVar19);
              } while (lVar13 < (longlong)uVar10);
            }
            lVar8 = lVar8 + 1;
            lVar5 = lVar5 + lVar1;
            lVar9 = lVar9 + 1 + param_7;
            lVar4 = lVar4 + param_2 * 2;
          } while (lVar8 < param_8);
        }
        lVar11 = lVar11 + 4;
        *(int *)*pauVar12 = auVar17._0_4_;
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 4);
      }
      while (lVar15 < (longlong)param_5) {
        lVar8 = 0;
        auVar17 = ZEXT1664((undefined1  [16])0x0);
        auVar19 = (undefined1  [16])0x0;
        lVar9 = 0;
        lVar4 = 0;
        lVar5 = 0;
        if (0 < param_8) {
          do {
            uVar10 = (ulonglong)*(ushort *)(param_9 + lVar9 * 2);
            lVar13 = 0;
            if (uVar10 != 0) {
              do {
                lVar2 = lVar13 * 2;
                lVar13 = lVar13 + 1;
                auVar19 = vpinsrw_avx((undefined1  [16])0x0,
                                      (uint)*(ushort *)
                                             (lVar11 + lVar4 +
                                             (ulonglong)*(ushort *)(param_9 + lVar5 + 2 + lVar2) * 2
                                             ),0);
                auVar19 = vpmaxuw_avx(auVar17._0_16_,auVar19);
                auVar17 = ZEXT1664(auVar19);
              } while (lVar13 < (longlong)uVar10);
            }
            auVar19 = auVar17._0_16_;
            lVar8 = lVar8 + 1;
            lVar5 = lVar5 + lVar1;
            lVar9 = lVar9 + 1 + param_7;
            lVar4 = lVar4 + param_2 * 2;
          } while (lVar8 < param_8);
        }
        lVar15 = lVar15 + 1;
        lVar11 = lVar11 + 2;
        vpextrw_avx(auVar19,0);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + param_2 * 2;
      lVar3 = lVar3 + param_4 * 2;
    } while (lVar6 < param_6);
  }
  return;
}

