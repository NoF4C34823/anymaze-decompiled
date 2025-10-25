
void FUN_140574780(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
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
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined8 uVar18;
  undefined1 auVar19 [32];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar22 [32];
  undefined1 auVar23 [64];
  undefined1 in_ZMM15 [64];
  
  param_9 = param_7 * param_8 + param_9;
  auVar4 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  lVar15 = 0;
  if (0 < param_6) {
    lVar16 = 0;
    lVar1 = param_7 * 2 + 2;
    lVar12 = 0;
    auVar3 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    do {
      lVar7 = 0;
      lVar8 = param_1 + lVar16;
      pauVar9 = (undefined1 (*) [32])(param_3 + lVar12);
      if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        do {
          lVar13 = 0;
          lVar14 = 0;
          lVar5 = 0;
          auVar22 = vpcmpeqd_avx2(in_ZMM15._0_32_,in_ZMM15._0_32_);
          in_ZMM15 = ZEXT3264(auVar22);
          lVar6 = 0;
          auVar23 = ZEXT3264(auVar4);
          in_ZMM4 = ZEXT3264(auVar4);
          auVar20 = ZEXT3264(auVar4);
          auVar22 = auVar4;
          auVar19 = auVar4;
          if (0 < param_8) {
            do {
              uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
              lVar10 = 0;
              if (uVar17 != 0) {
                lVar2 = lVar8 + lVar5;
                do {
                  uVar11 = (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar10 * 2);
                  lVar10 = lVar10 + 1;
                  auVar22 = vpminuw_avx2(in_ZMM15._0_32_,*(undefined1 (*) [32])(lVar2 + uVar11 * 2))
                  ;
                  in_ZMM15 = ZEXT3264(auVar22);
                  auVar22 = vpminuw_avx2(auVar23._0_32_,
                                         *(undefined1 (*) [32])(lVar2 + 0x20 + uVar11 * 2));
                  auVar23 = ZEXT3264(auVar22);
                  auVar22 = vpminuw_avx2(in_ZMM4._0_32_,
                                         *(undefined1 (*) [32])(lVar2 + 0x40 + uVar11 * 2));
                  in_ZMM4 = ZEXT3264(auVar22);
                  auVar22 = vpminuw_avx2(auVar20._0_32_,
                                         *(undefined1 (*) [32])(lVar2 + 0x60 + uVar11 * 2));
                  auVar20 = ZEXT3264(auVar22);
                } while (lVar10 < (longlong)uVar17);
              }
              auVar19 = auVar20._0_32_;
              auVar22 = auVar23._0_32_;
              lVar13 = lVar13 + 1;
              lVar6 = lVar6 + lVar1;
              lVar14 = lVar14 + 1 + param_7;
              lVar5 = lVar5 + param_2 * 2;
            } while (lVar13 < param_8);
          }
          lVar7 = lVar7 + 0x40;
          lVar8 = lVar8 + 0x80;
          *pauVar9 = in_ZMM15._0_32_;
          pauVar9[1] = auVar22;
          pauVar9[2] = in_ZMM4._0_32_;
          pauVar9[3] = auVar19;
          pauVar9 = pauVar9 + 4;
        } while (lVar7 < (longlong)(param_5 & 0xffffffffffffffc0));
      }
      for (; lVar7 < (longlong)(param_5 & 0xffffffffffffffe0); lVar7 = lVar7 + 0x20) {
        lVar13 = 0;
        lVar14 = 0;
        lVar5 = 0;
        auVar22 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
        in_ZMM4 = ZEXT3264(auVar22);
        lVar6 = 0;
        auVar20 = ZEXT3264(auVar4);
        auVar22 = auVar4;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                uVar11 = (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar10 * 2);
                lVar10 = lVar10 + 1;
                auVar22 = vpminuw_avx2(in_ZMM4._0_32_,
                                       *(undefined1 (*) [32])(lVar8 + lVar5 + uVar11 * 2));
                in_ZMM4 = ZEXT3264(auVar22);
                auVar22 = vpminuw_avx2(auVar20._0_32_,
                                       *(undefined1 (*) [32])(lVar8 + lVar5 + 0x20 + uVar11 * 2));
                auVar20 = ZEXT3264(auVar22);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar22 = auVar20._0_32_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar1;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 0x40;
        *pauVar9 = in_ZMM4._0_32_;
        pauVar9[1] = auVar22;
        pauVar9 = pauVar9 + 2;
      }
      for (; lVar7 < (longlong)(param_5 & 0xfffffffffffffff0); lVar7 = lVar7 + 0x10) {
        lVar13 = 0;
        lVar14 = 0;
        lVar5 = 0;
        auVar20 = ZEXT3264(auVar4);
        lVar6 = 0;
        auVar22 = auVar4;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar2 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar22 = vpminuw_avx2(auVar20._0_32_,
                                       *(undefined1 (*) [32])
                                        (lVar8 + lVar5 +
                                        (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2));
                auVar20 = ZEXT3264(auVar22);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar22 = auVar20._0_32_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar1;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 0x20;
        *pauVar9 = auVar22;
        pauVar9 = pauVar9 + 1;
      }
      for (; lVar7 < (longlong)(param_5 & 0xfffffffffffffff8); lVar7 = lVar7 + 8) {
        lVar13 = 0;
        auVar20 = ZEXT1664(auVar3);
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        auVar21 = auVar3;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar2 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar21 = vpminuw_avx(auVar20._0_16_,
                                      *(undefined1 (*) [16])
                                       (lVar8 + lVar5 +
                                       (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2));
                auVar20 = ZEXT1664(auVar21);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar21 = auVar20._0_16_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar1;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 0x10;
        *(undefined1 (*) [16])*pauVar9 = auVar21;
        pauVar9 = (undefined1 (*) [32])(*pauVar9 + 0x10);
      }
      for (; lVar7 < (longlong)(param_5 & 0xfffffffffffffffc); lVar7 = lVar7 + 4) {
        lVar13 = 0;
        auVar20 = ZEXT1664(auVar3);
        uVar18 = auVar3._0_8_;
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar2 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                uVar11 = *(ulonglong *)
                          (lVar8 + lVar5 + (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2);
                in_ZMM4 = ZEXT864(uVar11);
                auVar21._8_8_ = 0;
                auVar21._0_8_ = uVar11;
                auVar21 = vpminuw_avx(auVar20._0_16_,auVar21);
                auVar20 = ZEXT1664(auVar21);
              } while (lVar10 < (longlong)uVar17);
            }
            uVar18 = auVar20._0_8_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar1;
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
        auVar20 = ZEXT1664(auVar3);
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar2 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar21 = vpinsrd_avx((undefined1  [16])0x0,
                                      *(undefined4 *)
                                       (lVar8 + lVar5 +
                                       (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2),0);
                in_ZMM4 = ZEXT1664(auVar21);
                auVar21 = vpminuw_avx(auVar20._0_16_,auVar21);
                auVar20 = ZEXT1664(auVar21);
              } while (lVar10 < (longlong)uVar17);
            }
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar1;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar8 = lVar8 + 4;
        *(int *)*pauVar9 = auVar20._0_4_;
        pauVar9 = (undefined1 (*) [32])(*pauVar9 + 4);
      }
      while (lVar7 < (longlong)param_5) {
        lVar13 = 0;
        auVar20 = ZEXT1664(auVar3);
        lVar14 = 0;
        lVar5 = 0;
        lVar6 = 0;
        auVar21 = auVar3;
        if (0 < param_8) {
          do {
            uVar17 = (ulonglong)*(ushort *)(param_9 + lVar14 * 2);
            lVar10 = 0;
            if (uVar17 != 0) {
              do {
                lVar2 = lVar10 * 2;
                lVar10 = lVar10 + 1;
                auVar21 = vpinsrw_avx((undefined1  [16])0x0,
                                      (uint)*(ushort *)
                                             (lVar8 + lVar5 +
                                             (ulonglong)*(ushort *)(param_9 + lVar6 + 2 + lVar2) * 2
                                             ),0);
                in_ZMM4 = ZEXT1664(auVar21);
                auVar21 = vpminuw_avx(auVar20._0_16_,auVar21);
                auVar20 = ZEXT1664(auVar21);
              } while (lVar10 < (longlong)uVar17);
            }
            auVar21 = auVar20._0_16_;
            lVar13 = lVar13 + 1;
            lVar6 = lVar6 + lVar1;
            lVar14 = lVar14 + 1 + param_7;
            lVar5 = lVar5 + param_2 * 2;
          } while (lVar13 < param_8);
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 2;
        vpextrw_avx(auVar21,0);
      }
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + param_2 * 2;
      lVar12 = lVar12 + param_4 * 2;
    } while (lVar15 < param_6);
  }
  return;
}

