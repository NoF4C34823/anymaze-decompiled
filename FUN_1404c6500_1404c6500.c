
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c6500(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,undefined8 param_10,int param_11)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auStack_4e8 [32];
  longlong lStack_4c8;
  longlong lStack_4c0;
  longlong lStack_4b8;
  longlong lStack_4b0;
  longlong lStack_4a8;
  longlong lStack_4a0;
  longlong lStack_498;
  longlong lStack_490;
  ulonglong uStack_488;
  ulonglong uStack_480;
  ulonglong uStack_478;
  ulonglong uStack_470;
  longlong lStack_468;
  undefined1 (*pauStack_460) [16];
  longlong lStack_458;
  longlong alStack_450 [128];
  ulonglong uStack_50;
  
  auVar2 = _DAT_14308a010;
  lVar4 = 0;
  lVar7 = 0;
  lVar5 = 0;
  uStack_50 = DAT_1436b4680 ^ (ulonglong)auStack_4e8;
  param_9 = param_7 * param_8 + param_9;
  uVar12 = param_5 & 0xfffffffffffffff0;
  uVar15 = param_5 & 0xfffffffffffffff8;
  uVar11 = param_5 & 0xfffffffffffffffc;
  uVar19 = param_5 & 0xfffffffffffffffe;
  if (0 < param_8) {
    lVar6 = 0;
    lVar10 = param_7 * 2 + 2;
    lVar21 = 0;
    do {
      uVar13 = (ulonglong)*(ushort *)(param_9 + lVar6 * 2);
      lVar16 = 0;
      uStack_480 = uVar12;
      uStack_478 = uVar15;
      uStack_470 = uVar11;
      if (uVar13 != 0) {
        do {
          alStack_450[lVar4] =
               (ulonglong)*(ushort *)(param_9 + lVar21 + 2 + lVar16 * 2) * (longlong)param_11 +
               lVar5;
          lVar4 = lVar4 + 1;
          if (0x7f < lVar4) {
            lVar4 = 0;
            uStack_488 = uVar19;
            if (0 < param_6) {
              lVar5 = 0;
              lVar7 = 0;
              do {
                lVar6 = param_1 + lVar5;
                lVar21 = 0;
                pauVar9 = (undefined1 (*) [16])(param_3 + lVar7);
                if (0 < (longlong)uVar12) {
                  do {
                    pauStack_460 = pauVar9;
                    lStack_468 = lVar21;
                    lVar20 = 0;
                    auVar26 = ZEXT1664(auVar2);
                    lVar16 = 0;
                    auVar30 = ZEXT1664(auVar2);
                    lVar21 = 0;
                    auVar29 = ZEXT1664(auVar2);
                    lVar8 = 0;
                    auVar28 = ZEXT1664(auVar2);
                    do {
                      uVar13 = (ulonglong)*(ushort *)(param_9 + lVar16 * 2);
                      lVar14 = 0;
                      if (uVar13 != 0) {
                        lVar17 = lVar6 + lVar21;
                        do {
                          lVar18 = lVar14 * 2;
                          lVar14 = lVar14 + 1;
                          lVar18 = (longlong)
                                   (int)((uint)*(ushort *)(param_9 + lVar8 + 2 + lVar18) * param_11)
                          ;
                          auVar25 = vmaxps_avx(auVar30._0_16_,
                                               *(undefined1 (*) [16])(lVar17 + lVar18 * 4));
                          auVar30 = ZEXT1664(auVar25);
                          auVar25 = vmaxps_avx(auVar29._0_16_,
                                               *(undefined1 (*) [16])(lVar17 + 0x10 + lVar18 * 4));
                          auVar29 = ZEXT1664(auVar25);
                          auVar25 = vmaxps_avx(auVar28._0_16_,
                                               *(undefined1 (*) [16])(lVar17 + 0x20 + lVar18 * 4));
                          auVar28 = ZEXT1664(auVar25);
                          auVar25 = vmaxps_avx(auVar26._0_16_,
                                               *(undefined1 (*) [16])(lVar17 + 0x30 + lVar18 * 4));
                          auVar26 = ZEXT1664(auVar25);
                          lStack_458 = param_2;
                        } while (lVar14 < (longlong)uVar13);
                      }
                      lVar20 = lVar20 + 1;
                      lVar8 = lVar8 + lVar10;
                      lVar16 = lVar16 + 1 + param_7;
                      lVar21 = lVar21 + param_2 * 4;
                    } while (lVar20 < param_8);
                    lVar6 = lVar6 + 0x40;
                    lVar21 = lStack_468 + 0x10;
                    *pauStack_460 = auVar30._0_16_;
                    pauStack_460[1] = auVar29._0_16_;
                    pauStack_460[2] = auVar28._0_16_;
                    pauStack_460[3] = auVar26._0_16_;
                    pauVar9 = pauStack_460 + 4;
                    lStack_4a0 = lVar7;
                    lStack_498 = lVar5;
                    lStack_490 = lVar4;
                  } while (lVar21 < (longlong)uVar12);
                }
                while (pauVar3 = pauVar9, lVar16 = lVar21, lVar16 < (longlong)uVar15) {
                  lVar14 = 0;
                  auVar26 = ZEXT1664(auVar2);
                  lVar8 = 0;
                  auVar28 = ZEXT1664(auVar2);
                  lVar21 = 0;
                  lVar20 = 0;
                  do {
                    uVar13 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar17 = 0;
                    if (uVar13 != 0) {
                      do {
                        lVar18 = lVar17 * 2;
                        lVar17 = lVar17 + 1;
                        lVar18 = (longlong)
                                 (int)((uint)*(ushort *)(param_9 + lVar20 + 2 + lVar18) * param_11);
                        auVar25 = vmaxps_avx(auVar28._0_16_,
                                             *(undefined1 (*) [16])(lVar6 + lVar21 + lVar18 * 4));
                        auVar28 = ZEXT1664(auVar25);
                        auVar25 = vmaxps_avx(auVar26._0_16_,
                                             *(undefined1 (*) [16])
                                              (lVar6 + lVar21 + 0x10 + lVar18 * 4));
                        auVar26 = ZEXT1664(auVar25);
                        lStack_458 = param_2;
                      } while (lVar17 < (longlong)uVar13);
                    }
                    lVar14 = lVar14 + 1;
                    lVar20 = lVar20 + lVar10;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar21 = lVar21 + param_2 * 4;
                  } while (lVar14 < param_8);
                  lVar6 = lVar6 + 0x20;
                  *pauVar3 = auVar28._0_16_;
                  pauVar3[1] = auVar26._0_16_;
                  pauVar9 = pauVar3 + 2;
                  lStack_4a0 = lVar7;
                  lStack_498 = lVar5;
                  lStack_490 = lVar4;
                  lStack_468 = lVar16;
                  pauStack_460 = pauVar3;
                  lVar21 = lVar16 + 8;
                }
                for (; pauVar9 = pauVar3, lVar16 < (longlong)uVar11; lVar16 = lVar16 + 4) {
                  lVar14 = 0;
                  auVar26 = ZEXT1664(auVar2);
                  lVar8 = 0;
                  lVar21 = 0;
                  lVar20 = 0;
                  do {
                    uVar13 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar17 = 0;
                    if (uVar13 != 0) {
                      do {
                        lVar18 = lVar17 * 2;
                        lVar17 = lVar17 + 1;
                        auVar25 = vmaxps_avx(auVar26._0_16_,
                                             *(undefined1 (*) [16])
                                              (lVar6 + lVar21 +
                                              (longlong)
                                              (int)((uint)*(ushort *)(param_9 + lVar20 + 2 + lVar18)
                                                   * param_11) * 4));
                        auVar26 = ZEXT1664(auVar25);
                        lStack_458 = param_2;
                      } while (lVar17 < (longlong)uVar13);
                    }
                    lVar14 = lVar14 + 1;
                    lVar20 = lVar20 + lVar10;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar21 = lVar21 + param_2 * 4;
                  } while (lVar14 < param_8);
                  lVar6 = lVar6 + 0x10;
                  *pauVar9 = auVar26._0_16_;
                  pauVar3 = pauVar9 + 1;
                  lStack_4a0 = lVar7;
                  lStack_498 = lVar5;
                  lStack_490 = lVar4;
                  lStack_468 = lVar16;
                  pauStack_460 = pauVar9;
                }
                for (; pauVar3 = pauVar9, lVar16 < (longlong)uVar19; lVar16 = lVar16 + 2) {
                  lVar14 = 0;
                  auVar26 = ZEXT1664(auVar2);
                  lVar8 = 0;
                  lVar21 = 0;
                  lVar20 = 0;
                  do {
                    uVar13 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar17 = 0;
                    if (uVar13 != 0) {
                      do {
                        lVar18 = lVar17 * 2;
                        lVar17 = lVar17 + 1;
                        auVar25._8_8_ = 0;
                        auVar25._0_8_ =
                             *(ulonglong *)
                              (lVar6 + lVar21 +
                              (longlong)
                              (int)((uint)*(ushort *)(param_9 + lVar20 + 2 + lVar18) * param_11) * 4
                              );
                        auVar25 = vmaxps_avx(auVar26._0_16_,auVar25);
                        auVar26 = ZEXT1664(auVar25);
                        lStack_458 = param_2;
                      } while (lVar17 < (longlong)uVar13);
                    }
                    lVar14 = lVar14 + 1;
                    lVar20 = lVar20 + lVar10;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar21 = lVar21 + param_2 * 4;
                  } while (lVar14 < param_8);
                  lVar6 = lVar6 + 8;
                  *(longlong *)*pauVar3 = auVar26._0_8_;
                  pauVar9 = (undefined1 (*) [16])(*pauVar3 + 8);
                  lStack_4a0 = lVar7;
                  lStack_498 = lVar5;
                  lStack_490 = lVar4;
                  lStack_468 = lVar16;
                  pauStack_460 = pauVar3;
                }
                for (; pauVar9 = pauVar3, lVar16 < (longlong)param_5; lVar16 = lVar16 + 1) {
                  lVar14 = 0;
                  auVar26 = ZEXT1664(auVar2);
                  lVar8 = 0;
                  lVar21 = 0;
                  lVar20 = 0;
                  do {
                    uVar13 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar17 = 0;
                    if (uVar13 != 0) {
                      do {
                        lVar18 = lVar17 * 2;
                        lVar17 = lVar17 + 1;
                        auVar25 = vmaxps_avx(auVar26._0_16_,
                                             ZEXT416(*(uint *)(lVar6 + lVar21 +
                                                              (longlong)
                                                              (int)((uint)*(ushort *)
                                                                           (param_9 + lVar20 + 2 +
                                                                           lVar18) * param_11) * 4))
                                            );
                        auVar26 = ZEXT1664(auVar25);
                        lStack_458 = param_2;
                      } while (lVar17 < (longlong)uVar13);
                    }
                    lVar14 = lVar14 + 1;
                    lVar20 = lVar20 + lVar10;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar21 = lVar21 + param_2 * 4;
                  } while (lVar14 < param_8);
                  lVar6 = lVar6 + 4;
                  *(int *)*pauVar9 = auVar26._0_4_;
                  pauVar3 = (undefined1 (*) [16])(*pauVar9 + 4);
                  lStack_4a0 = lVar7;
                  lStack_498 = lVar5;
                  lStack_490 = lVar4;
                  lStack_468 = lVar16;
                  pauStack_460 = pauVar9;
                }
                lVar4 = lVar4 + 1;
                lVar5 = lVar5 + param_2 * 4;
                lVar7 = lVar7 + param_4 * 4;
                lStack_4c8 = lVar10;
                lStack_4c0 = param_9;
              } while (lVar4 < param_6);
            }
            goto LAB_1404c6954;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < (longlong)uVar13);
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + param_2;
      lVar21 = lVar21 + lVar10;
      lVar6 = lVar6 + 1 + param_7;
      uStack_488 = uVar19;
    } while (lVar7 < param_8);
  }
  lVar5 = 0;
  if (0 < param_6) {
    lVar7 = 0;
    lVar10 = 0;
    do {
      lVar21 = 0;
      lVar6 = param_1 + lVar7;
      pauVar9 = (undefined1 (*) [16])(param_3 + lVar10);
      lStack_458 = lStack_458;
      if (0 < (longlong)uVar12) {
        do {
          auVar26 = ZEXT1664(auVar2);
          auVar30 = ZEXT1664(auVar2);
          auVar29 = ZEXT1664(auVar2);
          auVar28 = ZEXT1664(auVar2);
          lVar16 = 0;
          auVar25 = auVar2;
          auVar24 = auVar2;
          auVar27 = auVar2;
          auVar23 = auVar2;
          if (0 < lVar4) {
            do {
              lVar8 = alStack_450[lVar16];
              lVar16 = lVar16 + 1;
              auVar25 = vmaxps_avx(auVar30._0_16_,*(undefined1 (*) [16])(lVar6 + lVar8 * 4));
              auVar30 = ZEXT1664(auVar25);
              auVar24 = vmaxps_avx(auVar29._0_16_,*(undefined1 (*) [16])(lVar6 + 0x10 + lVar8 * 4));
              auVar29 = ZEXT1664(auVar24);
              auVar27 = vmaxps_avx(auVar28._0_16_,*(undefined1 (*) [16])(lVar6 + 0x20 + lVar8 * 4));
              auVar28 = ZEXT1664(auVar27);
              auVar23 = vmaxps_avx(auVar26._0_16_,*(undefined1 (*) [16])(lVar6 + 0x30 + lVar8 * 4));
              auVar26 = ZEXT1664(auVar23);
            } while (lVar16 < lVar4);
          }
          lVar21 = lVar21 + 0x10;
          lVar6 = lVar6 + 0x40;
          *pauVar9 = auVar25;
          pauVar9[1] = auVar24;
          pauVar9[2] = auVar27;
          pauVar9[3] = auVar23;
          pauVar9 = pauVar9 + 4;
          lStack_458 = param_2;
        } while (lVar21 < (longlong)uVar12);
      }
      for (; lVar21 < (longlong)uVar15; lVar21 = lVar21 + 8) {
        auVar26 = ZEXT1664(auVar2);
        auVar28 = ZEXT1664(auVar2);
        lVar16 = 0;
        auVar25 = auVar2;
        auVar24 = auVar2;
        if (0 < lVar4) {
          do {
            plVar1 = alStack_450 + lVar16;
            lVar16 = lVar16 + 1;
            auVar25 = vmaxps_avx(auVar28._0_16_,*(undefined1 (*) [16])(lVar6 + *plVar1 * 4));
            auVar28 = ZEXT1664(auVar25);
            auVar24 = vmaxps_avx(auVar26._0_16_,*(undefined1 (*) [16])(lVar6 + 0x10 + *plVar1 * 4));
            auVar26 = ZEXT1664(auVar24);
          } while (lVar16 < lVar4);
        }
        lVar6 = lVar6 + 0x20;
        *pauVar9 = auVar25;
        pauVar9[1] = auVar24;
        pauVar9 = pauVar9 + 2;
        lStack_458 = param_2;
      }
      for (; lVar21 < (longlong)uVar11; lVar21 = lVar21 + 4) {
        auVar26 = ZEXT1664(auVar2);
        lVar16 = 0;
        auVar25 = auVar2;
        if (0 < lVar4) {
          do {
            plVar1 = alStack_450 + lVar16;
            lVar16 = lVar16 + 1;
            auVar25 = vmaxps_avx(auVar26._0_16_,*(undefined1 (*) [16])(lVar6 + *plVar1 * 4));
            auVar26 = ZEXT1664(auVar25);
          } while (lVar16 < lVar4);
        }
        lVar6 = lVar6 + 0x10;
        *pauVar9 = auVar25;
        pauVar9 = pauVar9 + 1;
        lStack_458 = param_2;
      }
      for (; lVar21 < (longlong)uVar19; lVar21 = lVar21 + 2) {
        auVar26 = ZEXT1664(auVar2);
        uVar22 = auVar2._0_8_;
        lVar16 = 0;
        if (0 < lVar4) {
          do {
            plVar1 = alStack_450 + lVar16;
            lVar16 = lVar16 + 1;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulonglong *)(lVar6 + *plVar1 * 4);
            auVar25 = vmaxps_avx(auVar26._0_16_,auVar24);
            auVar26 = ZEXT1664(auVar25);
            uVar22 = auVar25._0_8_;
          } while (lVar16 < lVar4);
        }
        lVar6 = lVar6 + 8;
        *(undefined8 *)*pauVar9 = uVar22;
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
        lStack_458 = param_2;
      }
      for (; lVar21 < (longlong)param_5; lVar21 = lVar21 + 1) {
        auVar26 = ZEXT1664(auVar2);
        lVar16 = 0;
        if (0 < lVar4) {
          do {
            plVar1 = alStack_450 + lVar16;
            lVar16 = lVar16 + 1;
            auVar25 = vmaxps_avx(auVar26._0_16_,ZEXT416(*(uint *)(lVar6 + *plVar1 * 4)));
            auVar26 = ZEXT1664(auVar25);
          } while (lVar16 < lVar4);
        }
        lVar6 = lVar6 + 4;
        *(int *)*pauVar9 = auVar26._0_4_;
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 4);
        lStack_458 = param_2;
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + param_2 * 4;
      lVar10 = lVar10 + param_4 * 4;
      lStack_4c8 = lVar4;
      uStack_488 = uVar19;
    } while (lVar5 < param_6);
  }
LAB_1404c6954:
  uVar11 = uStack_50;
  uStack_50 = 0;
  if ((uVar11 ^ (ulonglong)auStack_4e8) != DAT_1436b4680) {
    lStack_4b8 = param_4;
    lStack_4b0 = param_3;
    lStack_4a8 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return;
}

