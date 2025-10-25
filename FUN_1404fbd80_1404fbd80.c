
void FUN_1404fbd80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 in_ZMM0 [64];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 in_ZMM5 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 in_ZMM15 [64];
  
  lVar7 = 0;
  param_9 = param_7 * param_8 + param_9;
  if (0 < param_6) {
    lVar8 = 0;
    lVar1 = param_7 * 2 + 2;
    lVar4 = 0;
    auVar3 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    do {
      lVar16 = 0;
      lVar12 = param_1 + lVar8;
      pauVar13 = (undefined1 (*) [16])(param_3 + lVar4);
      if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        do {
          lVar9 = 0;
          auVar29 = ZEXT1664(auVar3);
          lVar10 = 0;
          auVar21 = vpcmpeqd_avx(in_ZMM15._0_16_,in_ZMM15._0_16_);
          in_ZMM15 = ZEXT1664(auVar21);
          lVar5 = 0;
          auVar28 = ZEXT1664(auVar3);
          auVar26 = ZEXT1664(auVar3);
          in_ZMM5 = ZEXT1664(auVar3);
          auVar24 = ZEXT1664(auVar3);
          auVar22 = ZEXT1664(auVar3);
          auVar19 = ZEXT1664(auVar3);
          lVar6 = 0;
          auVar21 = auVar3;
          auVar27 = auVar3;
          auVar25 = auVar3;
          auVar23 = auVar3;
          auVar20 = auVar3;
          auVar18 = auVar3;
          if (0 < param_8) {
            do {
              uVar11 = (ulonglong)*(ushort *)(param_9 + lVar10 * 2);
              lVar14 = 0;
              if (uVar11 != 0) {
                lVar2 = lVar12 + lVar5;
                do {
                  uVar15 = (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar14 * 2);
                  lVar14 = lVar14 + 1;
                  auVar21 = vpminuw_avx(in_ZMM15._0_16_,*(undefined1 (*) [16])(lVar2 + uVar15 * 2));
                  in_ZMM15 = ZEXT1664(auVar21);
                  auVar21 = vpminuw_avx(auVar29._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x10 + uVar15 * 2));
                  auVar29 = ZEXT1664(auVar21);
                  auVar21 = vpminuw_avx(auVar28._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x20 + uVar15 * 2));
                  auVar28 = ZEXT1664(auVar21);
                  auVar21 = vpminuw_avx(auVar26._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x30 + uVar15 * 2));
                  auVar26 = ZEXT1664(auVar21);
                  auVar21 = vpminuw_avx(in_ZMM5._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x40 + uVar15 * 2));
                  in_ZMM5 = ZEXT1664(auVar21);
                  auVar21 = vpminuw_avx(auVar24._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x50 + uVar15 * 2));
                  auVar24 = ZEXT1664(auVar21);
                  auVar21 = vpminuw_avx(auVar22._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x60 + uVar15 * 2));
                  auVar22 = ZEXT1664(auVar21);
                  auVar21 = vpminuw_avx(auVar19._0_16_,
                                        *(undefined1 (*) [16])(lVar2 + 0x70 + uVar15 * 2));
                  auVar19 = ZEXT1664(auVar21);
                } while (lVar14 < (longlong)uVar11);
              }
              auVar18 = auVar19._0_16_;
              auVar20 = auVar22._0_16_;
              auVar23 = auVar24._0_16_;
              auVar25 = auVar26._0_16_;
              auVar27 = auVar28._0_16_;
              auVar21 = auVar29._0_16_;
              lVar9 = lVar9 + 1;
              lVar6 = lVar6 + lVar1;
              lVar10 = lVar10 + 1 + param_7;
              lVar5 = lVar5 + param_2 * 2;
            } while (lVar9 < param_8);
          }
          lVar16 = lVar16 + 0x40;
          lVar12 = lVar12 + 0x80;
          *pauVar13 = in_ZMM15._0_16_;
          pauVar13[1] = auVar21;
          pauVar13[2] = auVar27;
          pauVar13[3] = auVar25;
          pauVar13[4] = in_ZMM5._0_16_;
          pauVar13[5] = auVar23;
          pauVar13[6] = auVar20;
          pauVar13[7] = auVar18;
          pauVar13 = pauVar13 + 8;
        } while (lVar16 < (longlong)(param_5 & 0xffffffffffffffc0));
      }
      for (; lVar16 < (longlong)(param_5 & 0xffffffffffffffe0); lVar16 = lVar16 + 0x20) {
        lVar9 = 0;
        auVar24 = ZEXT1664(auVar3);
        lVar10 = 0;
        auVar21 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
        in_ZMM5 = ZEXT1664(auVar21);
        lVar5 = 0;
        auVar22 = ZEXT1664(auVar3);
        auVar19 = ZEXT1664(auVar3);
        lVar6 = 0;
        auVar21 = auVar3;
        auVar27 = auVar3;
        auVar25 = auVar3;
        if (0 < param_8) {
          do {
            uVar11 = (ulonglong)*(ushort *)(param_9 + lVar10 * 2);
            lVar14 = 0;
            if (uVar11 != 0) {
              lVar2 = lVar12 + lVar5;
              do {
                uVar15 = (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar14 * 2);
                lVar14 = lVar14 + 1;
                auVar21 = vpminuw_avx(in_ZMM5._0_16_,*(undefined1 (*) [16])(lVar2 + uVar15 * 2));
                in_ZMM5 = ZEXT1664(auVar21);
                auVar21 = vpminuw_avx(auVar24._0_16_,
                                      *(undefined1 (*) [16])(lVar2 + 0x10 + uVar15 * 2));
                auVar24 = ZEXT1664(auVar21);
                auVar21 = vpminuw_avx(auVar22._0_16_,
                                      *(undefined1 (*) [16])(lVar2 + 0x20 + uVar15 * 2));
                auVar22 = ZEXT1664(auVar21);
                auVar21 = vpminuw_avx(auVar19._0_16_,
                                      *(undefined1 (*) [16])(lVar2 + 0x30 + uVar15 * 2));
                auVar19 = ZEXT1664(auVar21);
              } while (lVar14 < (longlong)uVar11);
            }
            auVar25 = auVar19._0_16_;
            auVar27 = auVar22._0_16_;
            auVar21 = auVar24._0_16_;
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + lVar1;
            lVar10 = lVar10 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar9 < param_8);
        }
        lVar12 = lVar12 + 0x40;
        *pauVar13 = in_ZMM5._0_16_;
        pauVar13[1] = auVar21;
        pauVar13[2] = auVar27;
        pauVar13[3] = auVar25;
        pauVar13 = pauVar13 + 4;
      }
      for (; lVar16 < (longlong)(param_5 & 0xfffffffffffffff8); lVar16 = lVar16 + 8) {
        lVar9 = 0;
        auVar19 = ZEXT1664(auVar3);
        lVar10 = 0;
        lVar5 = 0;
        lVar6 = 0;
        auVar21 = auVar3;
        if (0 < param_8) {
          do {
            uVar11 = (ulonglong)*(ushort *)(param_9 + lVar10 * 2);
            lVar14 = 0;
            if (uVar11 != 0) {
              do {
                lVar2 = lVar14 * 2;
                lVar14 = lVar14 + 1;
                auVar21 = vpminuw_avx(auVar19._0_16_,
                                      *(undefined1 (*) [16])
                                       (lVar12 + lVar5 +
                                       (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2));
                auVar19 = ZEXT1664(auVar21);
              } while (lVar14 < (longlong)uVar11);
            }
            auVar21 = auVar19._0_16_;
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + lVar1;
            lVar10 = lVar10 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar9 < param_8);
        }
        lVar12 = lVar12 + 0x10;
        *pauVar13 = auVar21;
        pauVar13 = pauVar13 + 1;
      }
      for (; lVar16 < (longlong)(param_5 & 0xfffffffffffffffc); lVar16 = lVar16 + 4) {
        lVar9 = 0;
        auVar19 = ZEXT1664(auVar3);
        uVar17 = auVar3._0_8_;
        lVar10 = 0;
        lVar5 = 0;
        lVar6 = 0;
        if (0 < param_8) {
          do {
            uVar11 = (ulonglong)*(ushort *)(param_9 + lVar10 * 2);
            lVar14 = 0;
            if (uVar11 != 0) {
              do {
                lVar2 = lVar14 * 2;
                lVar14 = lVar14 + 1;
                auVar21._8_8_ = 0;
                auVar21._0_8_ =
                     *(ulonglong *)
                      (lVar12 + lVar5 + (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2);
                auVar21 = vpminuw_avx(auVar19._0_16_,auVar21);
                auVar19 = ZEXT1664(auVar21);
              } while (lVar14 < (longlong)uVar11);
            }
            uVar17 = auVar19._0_8_;
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + lVar1;
            lVar10 = lVar10 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar9 < param_8);
        }
        lVar12 = lVar12 + 8;
        *(undefined8 *)*pauVar13 = uVar17;
        pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
      }
      for (; lVar16 < (longlong)(param_5 & 0xfffffffffffffffe); lVar16 = lVar16 + 2) {
        lVar9 = 0;
        auVar19 = ZEXT1664(auVar3);
        lVar10 = 0;
        lVar5 = 0;
        lVar6 = 0;
        if (0 < param_8) {
          do {
            uVar11 = (ulonglong)*(ushort *)(param_9 + lVar10 * 2);
            lVar14 = 0;
            if (uVar11 != 0) {
              do {
                lVar2 = lVar14 * 2;
                lVar14 = lVar14 + 1;
                auVar21 = vpinsrd_avx((undefined1  [16])0x0,
                                      *(undefined4 *)
                                       (lVar12 + lVar5 +
                                       (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2),0);
                auVar21 = vpminuw_avx(auVar19._0_16_,auVar21);
                auVar19 = ZEXT1664(auVar21);
              } while (lVar14 < (longlong)uVar11);
            }
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + lVar1;
            lVar10 = lVar10 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar9 < param_8);
        }
        lVar12 = lVar12 + 4;
        *(int *)*pauVar13 = auVar19._0_4_;
        pauVar13 = (undefined1 (*) [16])(*pauVar13 + 4);
      }
      while (lVar16 < (longlong)param_5) {
        lVar9 = 0;
        auVar19 = ZEXT1664(auVar3);
        lVar10 = 0;
        lVar5 = 0;
        lVar6 = 0;
        auVar21 = auVar3;
        if (0 < param_8) {
          do {
            uVar11 = (ulonglong)*(ushort *)(param_9 + lVar10 * 2);
            lVar14 = 0;
            if (uVar11 != 0) {
              do {
                lVar2 = lVar14 * 2;
                lVar14 = lVar14 + 1;
                auVar21 = vpinsrw_avx((undefined1  [16])0x0,
                                      (uint)*(ushort *)
                                             (lVar12 + lVar5 +
                                             (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2
                                             ),0);
                auVar21 = vpminuw_avx(auVar19._0_16_,auVar21);
                auVar19 = ZEXT1664(auVar21);
              } while (lVar14 < (longlong)uVar11);
            }
            auVar21 = auVar19._0_16_;
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + lVar1;
            lVar10 = lVar10 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar9 < param_8);
        }
        lVar16 = lVar16 + 1;
        lVar12 = lVar12 + 2;
        vpextrw_avx(auVar21,0);
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + param_2 * 2;
      lVar4 = lVar4 + param_4 * 2;
    } while (lVar7 < param_6);
  }
  return;
}

