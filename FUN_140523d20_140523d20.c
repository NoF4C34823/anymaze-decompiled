
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140523d20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [64];
  undefined1 auVar22 [32];
  undefined1 auVar23 [64];
  undefined1 auVar24 [32];
  undefined1 auVar25 [64];
  undefined1 auVar26 [32];
  undefined1 auVar27 [64];
  
  auVar4 = _DAT_14308a820;
  auVar3 = _DAT_14308a800;
  param_9 = param_7 * param_8 + param_9;
  lVar15 = 0;
  if (0 < param_6) {
    lVar16 = 0;
    lVar2 = param_7 * 2 + 2;
    lVar12 = 0;
    do {
      lVar7 = 0;
      lVar8 = param_1 + lVar16;
      pauVar9 = (undefined1 (*) [32])(param_3 + lVar12);
      if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        do {
          lVar13 = 0;
          lVar14 = 0;
          auVar21 = ZEXT3264(auVar3);
          lVar5 = 0;
          auVar27 = ZEXT3264(auVar3);
          lVar6 = 0;
          auVar25 = ZEXT3264(auVar3);
          auVar23 = ZEXT3264(auVar3);
          auVar26 = auVar3;
          auVar24 = auVar3;
          auVar22 = auVar3;
          auVar20 = auVar3;
          if (0 < param_8) {
            do {
              uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
              lVar10 = 0;
              if (uVar17 != 0) {
                lVar1 = lVar8 + lVar5;
                do {
                  uVar11 = (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar10 * 2);
                  lVar10 = lVar10 + 1;
                  auVar26 = vpmaxsw_avx2(auVar27._0_32_,*(undefined1 (*) [32])(lVar1 + uVar11 * 2));
                  auVar27 = ZEXT3264(auVar26);
                  auVar26 = vpmaxsw_avx2(auVar25._0_32_,
                                         *(undefined1 (*) [32])(lVar1 + 0x20 + uVar11 * 2));
                  auVar25 = ZEXT3264(auVar26);
                  auVar26 = vpmaxsw_avx2(auVar23._0_32_,
                                         *(undefined1 (*) [32])(lVar1 + 0x40 + uVar11 * 2));
                  auVar23 = ZEXT3264(auVar26);
                  auVar26 = vpmaxsw_avx2(auVar21._0_32_,
                                         *(undefined1 (*) [32])(lVar1 + 0x60 + uVar11 * 2));
                  auVar21 = ZEXT3264(auVar26);
                } while (lVar10 < (longlong)uVar17);
              }
              auVar20 = auVar21._0_32_;
              auVar22 = auVar23._0_32_;
              auVar24 = auVar25._0_32_;
              auVar26 = auVar27._0_32_;
              lVar13 = lVar13 + 1;
              lVar6 = lVar6 + lVar2;
              lVar14 = lVar14 + 1 + param_7;
              lVar5 = lVar5 + param_2 * 2;
            } while (lVar13 < param_8);
          }
          lVar7 = lVar7 + 0x40;
          lVar8 = lVar8 + 0x80;
          *pauVar9 = auVar26;
          pauVar9[1] = auVar24;
          pauVar9[2] = auVar22;
          pauVar9[3] = auVar20;
          pauVar9 = pauVar9 + 4;
        } while (lVar7 < (longlong)(param_5 & 0xffffffffffffffc0));
      }
      for (; lVar7 < (longlong)(param_5 & 0xffffffffffffffe0); lVar7 = lVar7 + 0x20) {
        lVar13 = 0;
        lVar14 = 0;
        auVar21 = ZEXT3264(auVar3);
        lVar5 = 0;
        auVar23 = ZEXT3264(auVar3);
        lVar6 = 0;
        auVar26 = auVar3;
        auVar24 = auVar3;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                uVar11 = (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar10 * 2);
                lVar10 = lVar10 + 1;
                auVar26 = vpmaxsw_avx2(auVar23._0_32_,
                                       *(undefined1 (*) [32])(lVar8 + lVar5 + uVar11 * 2));
                auVar23 = ZEXT3264(auVar26);
                auVar26 = vpmaxsw_avx2(auVar21._0_32_,
                                       *(undefined1 (*) [32])(lVar8 + lVar5 + 0x20 + uVar11 * 2));
                auVar21 = ZEXT3264(auVar26);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar24 = auVar21._0_32_;
            auVar26 = auVar23._0_32_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar2;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 0x40;
        *pauVar9 = auVar26;
        pauVar9[1] = auVar24;
        pauVar9 = pauVar9 + 2;
      }
      for (; lVar7 < (longlong)(param_5 & 0xfffffffffffffff0); lVar7 = lVar7 + 0x10) {
        lVar13 = 0;
        lVar14 = 0;
        lVar5 = 0;
        auVar21 = ZEXT3264(auVar3);
        lVar6 = 0;
        auVar26 = auVar3;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar1 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar26 = vpmaxsw_avx2(auVar21._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar8 + lVar5 +
                                        (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar1) * 2));
                auVar21 = ZEXT3264(auVar26);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar26 = auVar21._0_32_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar2;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 0x20;
        *pauVar9 = auVar26;
        pauVar9 = pauVar9 + 1;
      }
      for (; lVar7 < (longlong)(param_5 & 0xfffffffffffffff8); lVar7 = lVar7 + 8) {
        lVar13 = 0;
        auVar21 = ZEXT1664(auVar4);
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        auVar19 = auVar4;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar1 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar19 = vpmaxsw_avx(auVar21._0_16_,
                                      *(undefined1 (*) [16])
                                       (lVar8 + lVar5 +
                                       (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar1) * 2));
                auVar21 = ZEXT1664(auVar19);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar19 = auVar21._0_16_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar2;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 0x10;
        *(undefined1 (*) [16])*pauVar9 = auVar19;
        pauVar9 = (undefined1 (*) [32])(*pauVar9 + 0x10);
      }
      for (; lVar7 < (longlong)(param_5 & 0xfffffffffffffffc); lVar7 = lVar7 + 4) {
        lVar13 = 0;
        auVar21 = ZEXT1664(auVar4);
        uVar18 = auVar4._0_8_;
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar1 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar19._8_8_ = 0;
                auVar19._0_8_ =
                     *(ulonglong *)
                      (lVar8 + lVar5 + (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar1) * 2);
                auVar19 = vpmaxsw_avx(auVar21._0_16_,auVar19);
                auVar21 = ZEXT1664(auVar19);
              } while (lVar10 < (longlong)uVar17);
            }
            uVar18 = auVar21._0_8_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar2;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 8;
        *(undefined8 *)*pauVar9 = uVar18;
        pauVar9 = (undefined1 (*) [32])(*pauVar9 + 8);
      }
      for (; lVar7 < (longlong)(param_5 & 0xfffffffffffffffe); lVar7 = lVar7 + 2) {
        lVar13 = 0;
        auVar21 = ZEXT1664(auVar4);
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar1 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar19 = vpinsrd_avx((undefined1  [16])0x0,
                                      *(undefined4 *)
                                       (lVar8 + lVar5 +
                                       (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar1) * 2),0);
                auVar19 = vpmaxsw_avx(auVar21._0_16_,auVar19);
                auVar21 = ZEXT1664(auVar19);
              } while (lVar10 < (longlong)uVar17);
            }
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar2;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 4;
        *(int *)*pauVar9 = auVar21._0_4_;
        pauVar9 = (undefined1 (*) [32])(*pauVar9 + 4);
      }
      while (lVar7 < (longlong)param_5) {
        lVar13 = 0;
        auVar21 = ZEXT1664(auVar4);
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        auVar19 = auVar4;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar1 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar19 = vpinsrw_avx((undefined1  [16])0x0,
                                      (uint)*(ushort *)
                                             (lVar8 + lVar5 +
                                             (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar1) * 2
                                             ),0);
                auVar19 = vpmaxsw_avx(auVar21._0_16_,auVar19);
                auVar21 = ZEXT1664(auVar19);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar19 = auVar21._0_16_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar2;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 2;
        vpextrw_avx(auVar19,0);
      }
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + param_2 * 2;
      lVar12 = lVar12 + param_4 * 2;
    } while (lVar15 < param_6);
  }
  return;
}

