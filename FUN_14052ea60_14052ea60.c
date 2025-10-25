
void FUN_14052ea60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar18 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  
  param_9 = param_7 * param_8 + param_9;
  lVar13 = 0;
  if (0 < param_6) {
    lVar14 = 0;
    lVar1 = param_7 * 2 + 2;
    lVar10 = 0;
    do {
      lVar5 = 0;
      lVar6 = param_1 + lVar14;
      pauVar7 = (undefined1 (*) [32])(param_3 + lVar10);
      if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        do {
          lVar11 = 0;
          auVar25 = ZEXT3264((undefined1  [32])0x0);
          auVar24 = (undefined1  [32])0x0;
          lVar12 = 0;
          auVar23 = ZEXT3264((undefined1  [32])0x0);
          auVar22 = (undefined1  [32])0x0;
          lVar3 = 0;
          auVar21 = ZEXT3264((undefined1  [32])0x0);
          auVar20 = (undefined1  [32])0x0;
          lVar4 = 0;
          auVar18 = ZEXT3264((undefined1  [32])0x0);
          auVar17 = (undefined1  [32])0x0;
          if (0 < param_8) {
            do {
              uVar15 = (ulonglong)*(ushort *)(param_9 + lVar12 * 2);
              lVar8 = 0;
              if (uVar15 != 0) {
                lVar2 = lVar6 + lVar3;
                do {
                  uVar9 = (ulonglong)*(ushort *)(param_9 + lVar4 + 2 + lVar8 * 2);
                  lVar8 = lVar8 + 1;
                  auVar17 = vpmaxuw_avx2(auVar25._0_32_,*(undefined1 (*) [32])(lVar2 + uVar9 * 2));
                  auVar25 = ZEXT3264(auVar17);
                  auVar17 = vpmaxuw_avx2(auVar23._0_32_,
                                         *(undefined1 (*) [32])(lVar2 + 0x20 + uVar9 * 2));
                  auVar23 = ZEXT3264(auVar17);
                  auVar17 = vpmaxuw_avx2(auVar21._0_32_,
                                         *(undefined1 (*) [32])(lVar2 + 0x40 + uVar9 * 2));
                  auVar21 = ZEXT3264(auVar17);
                  auVar17 = vpmaxuw_avx2(auVar18._0_32_,
                                         *(undefined1 (*) [32])(lVar2 + 0x60 + uVar9 * 2));
                  auVar18 = ZEXT3264(auVar17);
                } while (lVar8 < (longlong)uVar15);
              }
              auVar17 = auVar18._0_32_;
              auVar20 = auVar21._0_32_;
              auVar22 = auVar23._0_32_;
              auVar24 = auVar25._0_32_;
              lVar11 = lVar11 + 1;
              lVar4 = lVar4 + lVar1;
              lVar12 = lVar12 + 1 + param_7;
              lVar3 = lVar3 + param_2 * 2;
            } while (lVar11 < param_8);
          }
          lVar5 = lVar5 + 0x40;
          lVar6 = lVar6 + 0x80;
          *pauVar7 = auVar24;
          pauVar7[1] = auVar22;
          pauVar7[2] = auVar20;
          pauVar7[3] = auVar17;
          pauVar7 = pauVar7 + 4;
        } while (lVar5 < (longlong)(param_5 & 0xffffffffffffffc0));
      }
      for (; lVar5 < (longlong)(param_5 & 0xffffffffffffffe0); lVar5 = lVar5 + 0x20) {
        lVar11 = 0;
        auVar21 = ZEXT3264((undefined1  [32])0x0);
        auVar20 = (undefined1  [32])0x0;
        lVar12 = 0;
        lVar3 = 0;
        auVar18 = ZEXT3264((undefined1  [32])0x0);
        auVar17 = (undefined1  [32])0x0;
        lVar4 = 0;
        if (0 < param_8) {
          do {
            uVar15 = (ulonglong)*(ushort *)(param_9 + lVar12 * 2);
            lVar8 = 0;
            if (uVar15 != 0) {
              do {
                uVar9 = (ulonglong)*(ushort *)(param_9 + lVar4 + 2 + lVar8 * 2);
                lVar8 = lVar8 + 1;
                auVar17 = vpmaxuw_avx2(auVar21._0_32_,
                                       *(undefined1 (*) [32])(lVar6 + lVar3 + uVar9 * 2));
                auVar21 = ZEXT3264(auVar17);
                auVar17 = vpmaxuw_avx2(auVar18._0_32_,
                                       *(undefined1 (*) [32])(lVar6 + lVar3 + 0x20 + uVar9 * 2));
                auVar18 = ZEXT3264(auVar17);
              } while (lVar8 < (longlong)uVar15);
            }
            auVar17 = auVar18._0_32_;
            auVar20 = auVar21._0_32_;
            lVar11 = lVar11 + 1;
            lVar4 = lVar4 + lVar1;
            lVar12 = lVar12 + 1 + param_7;
            lVar3 = lVar3 + param_2 * 2;
          } while (lVar11 < param_8);
        }
        lVar6 = lVar6 + 0x40;
        *pauVar7 = auVar20;
        pauVar7[1] = auVar17;
        pauVar7 = pauVar7 + 2;
      }
      for (; lVar5 < (longlong)(param_5 & 0xfffffffffffffff0); lVar5 = lVar5 + 0x10) {
        lVar11 = 0;
        lVar12 = 0;
        lVar3 = 0;
        auVar18 = ZEXT3264((undefined1  [32])0x0);
        auVar17 = (undefined1  [32])0x0;
        lVar4 = 0;
        if (0 < param_8) {
          do {
            uVar15 = (ulonglong)*(ushort *)(param_9 + lVar12 * 2);
            lVar8 = 0;
            if (uVar15 != 0) {
              do {
                lVar2 = lVar8 * 2;
                lVar8 = lVar8 + 1;
                auVar17 = vpmaxuw_avx2(auVar18._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar6 + lVar3 +
                                        (ulonglong)*(ushort *)(param_9 + lVar4 + 2 + lVar2) * 2));
                auVar18 = ZEXT3264(auVar17);
              } while (lVar8 < (longlong)uVar15);
            }
            auVar17 = auVar18._0_32_;
            lVar11 = lVar11 + 1;
            lVar4 = lVar4 + lVar1;
            lVar12 = lVar12 + 1 + param_7;
            lVar3 = lVar3 + param_2 * 2;
          } while (lVar11 < param_8);
        }
        lVar6 = lVar6 + 0x20;
        *pauVar7 = auVar17;
        pauVar7 = pauVar7 + 1;
      }
      for (; lVar5 < (longlong)(param_5 & 0xfffffffffffffff8); lVar5 = lVar5 + 8) {
        lVar11 = 0;
        auVar18 = ZEXT1664((undefined1  [16])0x0);
        auVar19 = (undefined1  [16])0x0;
        lVar12 = 0;
        lVar3 = 0;
        lVar4 = 0;
        if (0 < param_8) {
          do {
            uVar15 = (ulonglong)*(ushort *)(param_9 + lVar12 * 2);
            lVar8 = 0;
            if (uVar15 != 0) {
              do {
                lVar2 = lVar8 * 2;
                lVar8 = lVar8 + 1;
                auVar19 = vpmaxuw_avx(auVar18._0_16_,
                                      *(undefined1 (*) [16])
                                       (lVar6 + lVar3 +
                                       (ulonglong)*(ushort *)(param_9 + lVar4 + 2 + lVar2) * 2));
                auVar18 = ZEXT1664(auVar19);
              } while (lVar8 < (longlong)uVar15);
            }
            auVar19 = auVar18._0_16_;
            lVar11 = lVar11 + 1;
            lVar4 = lVar4 + lVar1;
            lVar12 = lVar12 + 1 + param_7;
            lVar3 = lVar3 + param_2 * 2;
          } while (lVar11 < param_8);
        }
        lVar6 = lVar6 + 0x10;
        *(undefined1 (*) [16])*pauVar7 = auVar19;
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + 0x10);
      }
      for (; lVar5 < (longlong)(param_5 & 0xfffffffffffffffc); lVar5 = lVar5 + 4) {
        lVar11 = 0;
        auVar18 = ZEXT1664((undefined1  [16])0x0);
        uVar16 = 0;
        lVar12 = 0;
        lVar3 = 0;
        lVar4 = 0;
        if (0 < param_8) {
          do {
            uVar15 = (ulonglong)*(ushort *)(param_9 + lVar12 * 2);
            lVar8 = 0;
            if (uVar15 != 0) {
              do {
                lVar2 = lVar8 * 2;
                lVar8 = lVar8 + 1;
                auVar19._8_8_ = 0;
                auVar19._0_8_ =
                     *(ulonglong *)
                      (lVar6 + lVar3 + (ulonglong)*(ushort *)(param_9 + lVar4 + 2 + lVar2) * 2);
                auVar19 = vpmaxuw_avx(auVar18._0_16_,auVar19);
                auVar18 = ZEXT1664(auVar19);
              } while (lVar8 < (longlong)uVar15);
            }
            uVar16 = auVar18._0_8_;
            lVar11 = lVar11 + 1;
            lVar4 = lVar4 + lVar1;
            lVar12 = lVar12 + 1 + param_7;
            lVar3 = lVar3 + param_2 * 2;
          } while (lVar11 < param_8);
        }
        lVar6 = lVar6 + 8;
        *(undefined8 *)*pauVar7 = uVar16;
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + 8);
      }
      for (; lVar5 < (longlong)(param_5 & 0xfffffffffffffffe); lVar5 = lVar5 + 2) {
        lVar11 = 0;
        auVar18 = ZEXT1664((undefined1  [16])0x0);
        lVar12 = 0;
        lVar3 = 0;
        lVar4 = 0;
        if (0 < param_8) {
          do {
            uVar15 = (ulonglong)*(ushort *)(param_9 + lVar12 * 2);
            lVar8 = 0;
            if (uVar15 != 0) {
              do {
                lVar2 = lVar8 * 2;
                lVar8 = lVar8 + 1;
                auVar19 = vpinsrd_avx((undefined1  [16])0x0,
                                      *(undefined4 *)
                                       (lVar6 + lVar3 +
                                       (ulonglong)*(ushort *)(param_9 + lVar4 + 2 + lVar2) * 2),0);
                auVar19 = vpmaxuw_avx(auVar18._0_16_,auVar19);
                auVar18 = ZEXT1664(auVar19);
              } while (lVar8 < (longlong)uVar15);
            }
            lVar11 = lVar11 + 1;
            lVar4 = lVar4 + lVar1;
            lVar12 = lVar12 + 1 + param_7;
            lVar3 = lVar3 + param_2 * 2;
          } while (lVar11 < param_8);
        }
        lVar6 = lVar6 + 4;
        *(int *)*pauVar7 = auVar18._0_4_;
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + 4);
      }
      while (lVar5 < (longlong)param_5) {
        lVar11 = 0;
        auVar18 = ZEXT1664((undefined1  [16])0x0);
        auVar19 = (undefined1  [16])0x0;
        lVar12 = 0;
        lVar3 = 0;
        lVar4 = 0;
        if (0 < param_8) {
          do {
            uVar15 = (ulonglong)*(ushort *)(param_9 + lVar12 * 2);
            lVar8 = 0;
            if (uVar15 != 0) {
              do {
                lVar2 = lVar8 * 2;
                lVar8 = lVar8 + 1;
                auVar19 = vpinsrw_avx((undefined1  [16])0x0,
                                      (uint)*(ushort *)
                                             (lVar6 + lVar3 +
                                             (ulonglong)*(ushort *)(param_9 + lVar4 + 2 + lVar2) * 2
                                             ),0);
                auVar19 = vpmaxuw_avx(auVar18._0_16_,auVar19);
                auVar18 = ZEXT1664(auVar19);
              } while (lVar8 < (longlong)uVar15);
            }
            auVar19 = auVar18._0_16_;
            lVar11 = lVar11 + 1;
            lVar4 = lVar4 + lVar1;
            lVar12 = lVar12 + 1 + param_7;
            lVar3 = lVar3 + param_2 * 2;
          } while (lVar11 < param_8);
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 2;
        vpextrw_avx(auVar19,0);
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + param_2 * 2;
      lVar10 = lVar10 + param_4 * 2;
    } while (lVar13 < param_6);
  }
  return;
}

