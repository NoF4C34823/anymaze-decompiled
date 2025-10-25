
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14053aae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,undefined8 param_10,int param_11)

{
  longlong *plVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [32];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [64];
  undefined1 auVar30 [32];
  undefined1 auVar31 [64];
  undefined1 auVar32 [32];
  undefined1 in_ZMM15 [64];
  undefined1 auVar33 [64];
  undefined1 auStack_518 [32];
  undefined1 auStack_4f8 [16];
  longlong lStack_4e8;
  longlong lStack_4e0;
  longlong lStack_4d8;
  longlong lStack_4d0;
  longlong lStack_4c8;
  longlong lStack_4c0;
  longlong lStack_4b8;
  longlong lStack_4b0;
  longlong lStack_4a8;
  longlong lStack_4a0;
  ulonglong uStack_498;
  ulonglong uStack_490;
  ulonglong uStack_488;
  ulonglong uStack_480;
  ulonglong uStack_478;
  ulonglong uStack_470;
  longlong lStack_468;
  undefined1 (*pauStack_460) [32];
  int iStack_458;
  longlong lStack_450;
  longlong alStack_448 [128];
  ulonglong uStack_48;
  
  auVar3 = _DAT_14308a8e0;
  auVar2 = _DAT_14308a8c0;
  lVar20 = 0;
  uStack_480 = param_5 & 0xffffffffffffffe0;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_518;
  lVar5 = 0;
  param_9 = param_7 * param_8 + param_9;
  uVar9 = param_5 & 0xfffffffffffffff0;
  uStack_498 = param_5 & 0xfffffffffffffff8;
  uStack_488 = param_5 & 0xfffffffffffffffc;
  uStack_490 = param_5 & 0xfffffffffffffffe;
  lVar8 = 0;
  if (0 < param_8) {
    lVar6 = 0;
    iStack_458 = param_11;
    lVar14 = param_7 * 2 + 2;
    lVar17 = 0;
    lStack_4a0 = param_6;
    uStack_470 = param_5;
    do {
      uVar10 = (ulonglong)*(ushort *)(param_9 + lVar6 * 2);
      lVar11 = 0;
      uStack_478 = uVar9;
      if (uVar10 != 0) {
        do {
          alStack_448[lVar20] =
               (ulonglong)*(ushort *)(param_9 + lVar17 + 2 + lVar11 * 2) * (longlong)param_11 +
               lVar8;
          lVar20 = lVar20 + 1;
          if (0x7f < lVar20) {
            lVar5 = 0;
            lStack_450 = param_2;
            if (0 < param_6) {
              lVar8 = 0;
              lVar20 = 0;
              do {
                lVar6 = param_1 + lVar8;
                pauVar13 = (undefined1 (*) [32])(param_3 + lVar20);
                lVar17 = 0;
                uStack_470 = uStack_470;
                if (0 < (longlong)uStack_480) {
                  do {
                    lStack_468 = lVar17;
                    pauStack_460 = pauVar13;
                    lVar12 = 0;
                    lVar11 = 0;
                    auVar26 = ZEXT3264(auVar2);
                    lVar17 = 0;
                    auVar33 = ZEXT3264(auVar2);
                    lVar7 = 0;
                    auVar31 = ZEXT3264(auVar2);
                    auVar29 = ZEXT3264(auVar2);
                    do {
                      uVar10 = (ulonglong)*(ushort *)(param_9 + lVar11 * 2);
                      lVar15 = 0;
                      if (uVar10 != 0) {
                        lVar19 = lVar6 + lVar17;
                        do {
                          lVar16 = lVar15 * 2;
                          lVar15 = lVar15 + 1;
                          lVar16 = (longlong)
                                   (int)((uint)*(ushort *)(param_9 + lVar7 + 2 + lVar16) * param_11)
                          ;
                          auVar32 = vmaxps_avx(auVar33._0_32_,
                                               *(undefined1 (*) [32])(lVar19 + lVar16 * 4));
                          auVar33 = ZEXT3264(auVar32);
                          auVar32 = vmaxps_avx(auVar31._0_32_,
                                               *(undefined1 (*) [32])(lVar19 + 0x20 + lVar16 * 4));
                          auVar31 = ZEXT3264(auVar32);
                          auVar32 = vmaxps_avx(auVar29._0_32_,
                                               *(undefined1 (*) [32])(lVar19 + 0x40 + lVar16 * 4));
                          auVar29 = ZEXT3264(auVar32);
                          auVar32 = vmaxps_avx(auVar26._0_32_,
                                               *(undefined1 (*) [32])(lVar19 + 0x60 + lVar16 * 4));
                          auVar26 = ZEXT3264(auVar32);
                        } while (lVar15 < (longlong)uVar10);
                      }
                      lVar12 = lVar12 + 1;
                      lVar7 = lVar7 + lVar14;
                      lVar11 = lVar11 + 1 + param_7;
                      lVar17 = lVar17 + param_2 * 4;
                    } while (lVar12 < param_8);
                    lVar6 = lVar6 + 0x80;
                    lVar17 = lStack_468 + 0x20;
                    *pauStack_460 = auVar33._0_32_;
                    pauStack_460[1] = auVar31._0_32_;
                    pauStack_460[2] = auVar29._0_32_;
                    pauStack_460[3] = auVar26._0_32_;
                    pauVar13 = pauStack_460 + 4;
                    lStack_4b8 = lVar20;
                    lStack_4b0 = lVar8;
                    lStack_4a8 = lVar5;
                    uStack_470 = param_5;
                  } while (lVar17 < (longlong)uStack_480);
                }
                while (lVar11 = lVar17, pauVar4 = pauVar13, lVar11 < (longlong)uVar9) {
                  lVar15 = 0;
                  auVar26 = ZEXT1664(auVar3);
                  lVar7 = 0;
                  auVar33 = ZEXT1664(auVar3);
                  lVar17 = 0;
                  auVar31 = ZEXT1664(auVar3);
                  lVar12 = 0;
                  auVar29 = ZEXT1664(auVar3);
                  do {
                    uVar10 = (ulonglong)*(ushort *)(param_9 + lVar7 * 2);
                    lVar19 = 0;
                    if (uVar10 != 0) {
                      lVar16 = lVar6 + lVar17;
                      do {
                        lVar18 = lVar19 * 2;
                        lVar19 = lVar19 + 1;
                        lVar18 = (longlong)
                                 (int)((uint)*(ushort *)(param_9 + lVar12 + 2 + lVar18) * param_11);
                        auVar24 = vmaxps_avx(auVar33._0_16_,
                                             *(undefined1 (*) [16])(lVar16 + lVar18 * 4));
                        auVar33 = ZEXT1664(auVar24);
                        auVar24 = vmaxps_avx(auVar31._0_16_,
                                             *(undefined1 (*) [16])(lVar16 + 0x10 + lVar18 * 4));
                        auVar31 = ZEXT1664(auVar24);
                        auVar24 = vmaxps_avx(auVar29._0_16_,
                                             *(undefined1 (*) [16])(lVar16 + 0x20 + lVar18 * 4));
                        auVar29 = ZEXT1664(auVar24);
                        auVar24 = vmaxps_avx(auVar26._0_16_,
                                             *(undefined1 (*) [16])(lVar16 + 0x30 + lVar18 * 4));
                        auVar26 = ZEXT1664(auVar24);
                      } while (lVar19 < (longlong)uVar10);
                    }
                    lVar15 = lVar15 + 1;
                    lVar12 = lVar12 + lVar14;
                    lVar7 = lVar7 + 1 + param_7;
                    lVar17 = lVar17 + param_2 * 4;
                  } while (lVar15 < param_8);
                  lVar6 = lVar6 + 0x40;
                  *(undefined1 (*) [16])*pauVar4 = auVar33._0_16_;
                  *(undefined1 (*) [16])(*pauVar4 + 0x10) = auVar31._0_16_;
                  *(undefined1 (*) [16])pauVar4[1] = auVar29._0_16_;
                  *(undefined1 (*) [16])(pauVar4[1] + 0x10) = auVar26._0_16_;
                  pauVar13 = pauVar4 + 2;
                  lStack_4b8 = lVar20;
                  lStack_4b0 = lVar8;
                  lStack_4a8 = lVar5;
                  uStack_470 = param_5;
                  lStack_468 = lVar11;
                  pauStack_460 = pauVar4;
                  lVar17 = lVar11 + 0x10;
                }
                for (; pauVar13 = pauVar4, lVar11 < (longlong)uStack_498; lVar11 = lVar11 + 8) {
                  lVar15 = 0;
                  auVar26 = ZEXT1664(auVar3);
                  lVar7 = 0;
                  auVar29 = ZEXT1664(auVar3);
                  lVar17 = 0;
                  lVar12 = 0;
                  do {
                    uVar10 = (ulonglong)*(ushort *)(param_9 + lVar7 * 2);
                    lVar19 = 0;
                    if (uVar10 != 0) {
                      do {
                        lVar16 = lVar19 * 2;
                        lVar19 = lVar19 + 1;
                        lVar16 = (longlong)
                                 (int)((uint)*(ushort *)(param_9 + lVar12 + 2 + lVar16) * param_11);
                        auVar24 = vmaxps_avx(auVar29._0_16_,
                                             *(undefined1 (*) [16])(lVar6 + lVar17 + lVar16 * 4));
                        auVar29 = ZEXT1664(auVar24);
                        auVar24 = vmaxps_avx(auVar26._0_16_,
                                             *(undefined1 (*) [16])
                                              (lVar6 + lVar17 + 0x10 + lVar16 * 4));
                        auVar26 = ZEXT1664(auVar24);
                      } while (lVar19 < (longlong)uVar10);
                    }
                    lVar15 = lVar15 + 1;
                    lVar12 = lVar12 + lVar14;
                    lVar7 = lVar7 + 1 + param_7;
                    lVar17 = lVar17 + param_2 * 4;
                  } while (lVar15 < param_8);
                  lVar6 = lVar6 + 0x20;
                  *(undefined1 (*) [16])*pauVar13 = auVar29._0_16_;
                  *(undefined1 (*) [16])(*pauVar13 + 0x10) = auVar26._0_16_;
                  pauVar4 = pauVar13 + 1;
                  lStack_4b8 = lVar20;
                  lStack_4b0 = lVar8;
                  lStack_4a8 = lVar5;
                  uStack_470 = param_5;
                  lStack_468 = lVar11;
                  pauStack_460 = pauVar13;
                }
                for (; pauVar4 = pauVar13, lVar11 < (longlong)uStack_488; lVar11 = lVar11 + 4) {
                  lVar15 = 0;
                  auVar26 = ZEXT1664(auVar3);
                  lVar7 = 0;
                  lVar17 = 0;
                  lVar12 = 0;
                  do {
                    uVar10 = (ulonglong)*(ushort *)(param_9 + lVar7 * 2);
                    lVar19 = 0;
                    if (uVar10 != 0) {
                      do {
                        lVar16 = lVar19 * 2;
                        lVar19 = lVar19 + 1;
                        auVar24 = vmaxps_avx(auVar26._0_16_,
                                             *(undefined1 (*) [16])
                                              (lVar6 + lVar17 +
                                              (longlong)
                                              (int)((uint)*(ushort *)(param_9 + lVar12 + 2 + lVar16)
                                                   * param_11) * 4));
                        auVar26 = ZEXT1664(auVar24);
                      } while (lVar19 < (longlong)uVar10);
                    }
                    lVar15 = lVar15 + 1;
                    lVar12 = lVar12 + lVar14;
                    lVar7 = lVar7 + 1 + param_7;
                    lVar17 = lVar17 + param_2 * 4;
                  } while (lVar15 < param_8);
                  lVar6 = lVar6 + 0x10;
                  *(undefined1 (*) [16])*pauVar4 = auVar26._0_16_;
                  pauVar13 = (undefined1 (*) [32])(*pauVar4 + 0x10);
                  lStack_4b8 = lVar20;
                  lStack_4b0 = lVar8;
                  lStack_4a8 = lVar5;
                  uStack_470 = param_5;
                  lStack_468 = lVar11;
                  pauStack_460 = pauVar4;
                }
                for (; pauVar13 = pauVar4, lVar11 < (longlong)uStack_490; lVar11 = lVar11 + 2) {
                  lVar15 = 0;
                  auVar26 = ZEXT1664(auVar3);
                  lVar7 = 0;
                  lVar17 = 0;
                  lVar12 = 0;
                  do {
                    uVar10 = (ulonglong)*(ushort *)(param_9 + lVar7 * 2);
                    lVar19 = 0;
                    if (uVar10 != 0) {
                      do {
                        lVar16 = lVar19 * 2;
                        lVar19 = lVar19 + 1;
                        auVar24._8_8_ = 0;
                        auVar24._0_8_ =
                             *(ulonglong *)
                              (lVar6 + lVar17 +
                              (longlong)
                              (int)((uint)*(ushort *)(param_9 + lVar12 + 2 + lVar16) * param_11) * 4
                              );
                        auVar24 = vmaxps_avx(auVar26._0_16_,auVar24);
                        auVar26 = ZEXT1664(auVar24);
                      } while (lVar19 < (longlong)uVar10);
                    }
                    lVar15 = lVar15 + 1;
                    lVar12 = lVar12 + lVar14;
                    lVar7 = lVar7 + 1 + param_7;
                    lVar17 = lVar17 + param_2 * 4;
                  } while (lVar15 < param_8);
                  lVar6 = lVar6 + 8;
                  *(longlong *)*pauVar13 = auVar26._0_8_;
                  pauVar4 = (undefined1 (*) [32])(*pauVar13 + 8);
                  lStack_4b8 = lVar20;
                  lStack_4b0 = lVar8;
                  lStack_4a8 = lVar5;
                  uStack_470 = param_5;
                  lStack_468 = lVar11;
                  pauStack_460 = pauVar13;
                }
                for (; pauVar4 = pauVar13, lVar11 < (longlong)param_5; lVar11 = lVar11 + 1) {
                  lVar15 = 0;
                  auVar26 = ZEXT1664(auVar3);
                  lVar7 = 0;
                  lVar17 = 0;
                  lVar12 = 0;
                  do {
                    uVar10 = (ulonglong)*(ushort *)(param_9 + lVar7 * 2);
                    lVar19 = 0;
                    if (uVar10 != 0) {
                      do {
                        lVar16 = lVar19 * 2;
                        lVar19 = lVar19 + 1;
                        auVar24 = vmaxps_avx(auVar26._0_16_,
                                             ZEXT416(*(uint *)(lVar6 + lVar17 +
                                                              (longlong)
                                                              (int)((uint)*(ushort *)
                                                                           (param_9 + lVar12 + 2 +
                                                                           lVar16) * param_11) * 4))
                                            );
                        auVar26 = ZEXT1664(auVar24);
                      } while (lVar19 < (longlong)uVar10);
                    }
                    lVar15 = lVar15 + 1;
                    lVar12 = lVar12 + lVar14;
                    lVar7 = lVar7 + 1 + param_7;
                    lVar17 = lVar17 + param_2 * 4;
                  } while (lVar15 < param_8);
                  lVar6 = lVar6 + 4;
                  *(int *)*pauVar4 = auVar26._0_4_;
                  pauVar13 = (undefined1 (*) [32])(*pauVar4 + 4);
                  lStack_4b8 = lVar20;
                  lStack_4b0 = lVar8;
                  lStack_4a8 = lVar5;
                  uStack_470 = param_5;
                  lStack_468 = lVar11;
                  pauStack_460 = pauVar4;
                }
                lVar5 = lVar5 + 1;
                lVar8 = lVar8 + param_2 * 4;
                lVar20 = lVar20 + param_4 * 4;
                auStack_4f8 = in_ZMM15._0_16_;
                lStack_4e8 = lVar14;
                lStack_4e0 = param_9;
                lStack_4d8 = param_8;
                alStack_448[0] = param_7;
              } while (lVar5 < param_6);
            }
            goto LAB_14053b07d;
          }
          lVar11 = lVar11 + 1;
          lStack_450 = param_2;
        } while (lVar11 < (longlong)uVar10);
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + param_2;
      lVar17 = lVar17 + lVar14;
      lVar6 = lVar6 + 1 + param_7;
    } while (lVar5 < param_8);
  }
  lVar5 = 0;
  if (0 < param_6) {
    lVar8 = 0;
    lVar14 = 0;
    do {
      lVar17 = 0;
      lVar6 = param_1 + lVar8;
      pauVar13 = (undefined1 (*) [32])(param_3 + lVar14);
      lStack_450 = lStack_450;
      if (0 < (longlong)uStack_480) {
        do {
          auVar26 = ZEXT3264(auVar2);
          lVar11 = 0;
          auVar33 = ZEXT3264(auVar2);
          auVar31 = ZEXT3264(auVar2);
          auVar29 = ZEXT3264(auVar2);
          auVar32 = auVar2;
          auVar30 = auVar2;
          auVar28 = auVar2;
          auVar25 = auVar2;
          if (0 < lVar20) {
            do {
              lVar7 = alStack_448[lVar11];
              lVar11 = lVar11 + 1;
              auVar32 = vmaxps_avx(auVar33._0_32_,*(undefined1 (*) [32])(lVar6 + lVar7 * 4));
              auVar33 = ZEXT3264(auVar32);
              auVar30 = vmaxps_avx(auVar31._0_32_,*(undefined1 (*) [32])(lVar6 + 0x20 + lVar7 * 4));
              auVar31 = ZEXT3264(auVar30);
              auVar28 = vmaxps_avx(auVar29._0_32_,*(undefined1 (*) [32])(lVar6 + 0x40 + lVar7 * 4));
              auVar29 = ZEXT3264(auVar28);
              auVar25 = vmaxps_avx(auVar26._0_32_,*(undefined1 (*) [32])(lVar6 + 0x60 + lVar7 * 4));
              auVar26 = ZEXT3264(auVar25);
            } while (lVar11 < lVar20);
          }
          lVar17 = lVar17 + 0x20;
          lVar6 = lVar6 + 0x80;
          *pauVar13 = auVar32;
          pauVar13[1] = auVar30;
          pauVar13[2] = auVar28;
          pauVar13[3] = auVar25;
          pauVar13 = pauVar13 + 4;
          lStack_450 = param_2;
        } while (lVar17 < (longlong)uStack_480);
      }
      for (; lVar17 < (longlong)uVar9; lVar17 = lVar17 + 0x10) {
        auVar26 = ZEXT1664(auVar3);
        auVar33 = ZEXT1664(auVar3);
        auVar31 = ZEXT1664(auVar3);
        auVar29 = ZEXT1664(auVar3);
        lVar11 = 0;
        auVar24 = auVar3;
        auVar23 = auVar3;
        auVar27 = auVar3;
        auVar22 = auVar3;
        if (0 < lVar20) {
          do {
            lVar7 = alStack_448[lVar11];
            lVar11 = lVar11 + 1;
            auVar24 = vmaxps_avx(auVar33._0_16_,*(undefined1 (*) [16])(lVar6 + lVar7 * 4));
            auVar33 = ZEXT1664(auVar24);
            auVar23 = vmaxps_avx(auVar31._0_16_,*(undefined1 (*) [16])(lVar6 + 0x10 + lVar7 * 4));
            auVar31 = ZEXT1664(auVar23);
            auVar27 = vmaxps_avx(auVar29._0_16_,*(undefined1 (*) [16])(lVar6 + 0x20 + lVar7 * 4));
            auVar29 = ZEXT1664(auVar27);
            auVar22 = vmaxps_avx(auVar26._0_16_,*(undefined1 (*) [16])(lVar6 + 0x30 + lVar7 * 4));
            auVar26 = ZEXT1664(auVar22);
          } while (lVar11 < lVar20);
        }
        lVar6 = lVar6 + 0x40;
        *(undefined1 (*) [16])*pauVar13 = auVar24;
        *(undefined1 (*) [16])(*pauVar13 + 0x10) = auVar23;
        *(undefined1 (*) [16])pauVar13[1] = auVar27;
        *(undefined1 (*) [16])(pauVar13[1] + 0x10) = auVar22;
        pauVar13 = pauVar13 + 2;
        lStack_450 = param_2;
      }
      for (; lVar17 < (longlong)uStack_498; lVar17 = lVar17 + 8) {
        auVar26 = ZEXT1664(auVar3);
        auVar29 = ZEXT1664(auVar3);
        lVar11 = 0;
        auVar24 = auVar3;
        auVar23 = auVar3;
        if (0 < lVar20) {
          do {
            plVar1 = alStack_448 + lVar11;
            lVar11 = lVar11 + 1;
            auVar24 = vmaxps_avx(auVar29._0_16_,*(undefined1 (*) [16])(lVar6 + *plVar1 * 4));
            auVar29 = ZEXT1664(auVar24);
            auVar23 = vmaxps_avx(auVar26._0_16_,*(undefined1 (*) [16])(lVar6 + 0x10 + *plVar1 * 4));
            auVar26 = ZEXT1664(auVar23);
          } while (lVar11 < lVar20);
        }
        lVar6 = lVar6 + 0x20;
        *(undefined1 (*) [16])*pauVar13 = auVar24;
        *(undefined1 (*) [16])(*pauVar13 + 0x10) = auVar23;
        pauVar13 = pauVar13 + 1;
        lStack_450 = param_2;
      }
      for (; lVar17 < (longlong)uStack_488; lVar17 = lVar17 + 4) {
        auVar26 = ZEXT1664(auVar3);
        lVar11 = 0;
        auVar24 = auVar3;
        if (0 < lVar20) {
          do {
            plVar1 = alStack_448 + lVar11;
            lVar11 = lVar11 + 1;
            auVar24 = vmaxps_avx(auVar26._0_16_,*(undefined1 (*) [16])(lVar6 + *plVar1 * 4));
            auVar26 = ZEXT1664(auVar24);
          } while (lVar11 < lVar20);
        }
        lVar6 = lVar6 + 0x10;
        *(undefined1 (*) [16])*pauVar13 = auVar24;
        pauVar13 = (undefined1 (*) [32])(*pauVar13 + 0x10);
        lStack_450 = param_2;
      }
      for (; lVar17 < (longlong)uStack_490; lVar17 = lVar17 + 2) {
        auVar26 = ZEXT1664(auVar3);
        uVar21 = auVar3._0_8_;
        lVar11 = 0;
        if (0 < lVar20) {
          do {
            plVar1 = alStack_448 + lVar11;
            lVar11 = lVar11 + 1;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = *(ulonglong *)(lVar6 + *plVar1 * 4);
            auVar24 = vmaxps_avx(auVar26._0_16_,auVar23);
            auVar26 = ZEXT1664(auVar24);
            uVar21 = auVar24._0_8_;
          } while (lVar11 < lVar20);
        }
        lVar6 = lVar6 + 8;
        *(undefined8 *)*pauVar13 = uVar21;
        pauVar13 = (undefined1 (*) [32])(*pauVar13 + 8);
        lStack_450 = param_2;
      }
      for (; lVar17 < (longlong)param_5; lVar17 = lVar17 + 1) {
        auVar26 = ZEXT1664(auVar3);
        lVar11 = 0;
        if (0 < lVar20) {
          do {
            plVar1 = alStack_448 + lVar11;
            lVar11 = lVar11 + 1;
            auVar24 = vmaxps_avx(auVar26._0_16_,ZEXT416(*(uint *)(lVar6 + *plVar1 * 4)));
            auVar26 = ZEXT1664(auVar24);
          } while (lVar11 < lVar20);
        }
        lVar6 = lVar6 + 4;
        *(int *)*pauVar13 = auVar26._0_4_;
        pauVar13 = (undefined1 (*) [32])(*pauVar13 + 4);
        lStack_450 = param_2;
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + param_2 * 4;
      lVar14 = lVar14 + param_4 * 4;
      auStack_4f8 = in_ZMM15._0_16_;
      lStack_4e8 = lVar20;
      lStack_4a0 = param_6;
    } while (lVar5 < param_6);
  }
LAB_14053b07d:
  uVar9 = uStack_48;
  uStack_48 = 0;
  if ((uVar9 ^ (ulonglong)auStack_518) != DAT_1436b4680) {
    lStack_4d0 = param_4;
    lStack_4c8 = param_3;
    lStack_4c0 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return;
}

