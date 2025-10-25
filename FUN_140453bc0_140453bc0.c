
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140453bc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,undefined8 param_10,int param_11)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_4f8 [48];
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
  
  auVar3 = _DAT_143089f50;
  uVar2 = _DAT_143089f50;
  lVar5 = 0;
  lVar9 = 0;
  lVar6 = 0;
  uStack_50 = DAT_1436b4680 ^ (ulonglong)auStack_4f8;
  param_9 = param_7 * param_8 + param_9;
  uVar14 = param_5 & 0xfffffffffffffff0;
  uVar16 = param_5 & 0xfffffffffffffff8;
  uVar13 = param_5 & 0xfffffffffffffffc;
  uVar20 = param_5 & 0xfffffffffffffffe;
  if (0 < param_8) {
    lVar7 = 0;
    lVar22 = 0;
    lVar11 = param_7 * 2 + 2;
    do {
      uVar15 = (ulonglong)*(ushort *)(param_9 + lVar7 * 2);
      lVar17 = 0;
      uStack_480 = uVar14;
      uStack_478 = uVar16;
      uStack_470 = uVar13;
      if (uVar15 != 0) {
        do {
          alStack_450[lVar5] =
               (ulonglong)*(ushort *)(param_9 + lVar22 + 2 + lVar17 * 2) * (longlong)param_11 +
               lVar6;
          lVar5 = lVar5 + 1;
          if (0x7f < lVar5) {
            lVar5 = 0;
            uStack_488 = uVar20;
            if (0 < param_6) {
              lVar6 = 0;
              lVar9 = 0;
              do {
                lVar7 = param_1 + lVar6;
                lVar22 = 0;
                pauVar10 = (undefined1 (*) [16])(param_3 + lVar9);
                if (0 < (longlong)uVar14) {
                  do {
                    pauStack_460 = pauVar10;
                    lStack_468 = lVar22;
                    lVar21 = 0;
                    lVar17 = 0;
                    lVar22 = 0;
                    lVar8 = 0;
                    auVar24 = auVar3;
                    auVar25 = auVar3;
                    auVar26 = auVar3;
                    auVar27 = auVar3;
                    do {
                      uVar15 = (ulonglong)*(ushort *)(param_9 + lVar17 * 2);
                      lVar12 = 0;
                      if (uVar15 != 0) {
                        lVar18 = lVar7 + lVar22;
                        do {
                          lVar19 = lVar12 * 2;
                          lVar12 = lVar12 + 1;
                          lVar19 = (longlong)
                                   (int)((uint)*(ushort *)(param_9 + lVar8 + 2 + lVar19) * param_11)
                          ;
                          auVar25 = maxps(auVar25,*(undefined1 (*) [16])(lVar18 + lVar19 * 4));
                          auVar26 = maxps(auVar26,*(undefined1 (*) [16])(lVar18 + 0x10 + lVar19 * 4)
                                         );
                          auVar24 = maxps(auVar24,*(undefined1 (*) [16])(lVar18 + 0x20 + lVar19 * 4)
                                         );
                          auVar27 = maxps(auVar27,*(undefined1 (*) [16])(lVar18 + 0x30 + lVar19 * 4)
                                         );
                          lStack_458 = param_2;
                        } while (lVar12 < (longlong)uVar15);
                      }
                      lVar21 = lVar21 + 1;
                      lVar8 = lVar8 + lVar11;
                      lVar17 = lVar17 + 1 + param_7;
                      lVar22 = lVar22 + param_2 * 4;
                    } while (lVar21 < param_8);
                    lVar7 = lVar7 + 0x40;
                    lVar22 = lStack_468 + 0x10;
                    *pauStack_460 = auVar25;
                    pauStack_460[1] = auVar26;
                    pauStack_460[2] = auVar24;
                    pauStack_460[3] = auVar27;
                    pauVar10 = pauStack_460 + 4;
                    lStack_4a0 = lVar9;
                    lStack_498 = lVar6;
                    lStack_490 = lVar5;
                  } while (lVar22 < (longlong)uVar14);
                }
                while (pauVar4 = pauVar10, lVar17 = lVar22, lVar17 < (longlong)uVar16) {
                  lVar12 = 0;
                  lVar8 = 0;
                  lVar22 = 0;
                  lVar21 = 0;
                  auVar24 = auVar3;
                  auVar25 = auVar3;
                  do {
                    uVar15 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar18 = 0;
                    if (uVar15 != 0) {
                      do {
                        lVar19 = lVar18 * 2;
                        lVar18 = lVar18 + 1;
                        lVar19 = (longlong)
                                 (int)((uint)*(ushort *)(param_9 + lVar21 + 2 + lVar19) * param_11);
                        auVar25 = maxps(auVar25,*(undefined1 (*) [16])(lVar7 + lVar22 + lVar19 * 4))
                        ;
                        auVar24 = maxps(auVar24,*(undefined1 (*) [16])
                                                 (lVar7 + lVar22 + 0x10 + lVar19 * 4));
                        lStack_458 = param_2;
                      } while (lVar18 < (longlong)uVar15);
                    }
                    lVar12 = lVar12 + 1;
                    lVar21 = lVar21 + lVar11;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar22 = lVar22 + param_2 * 4;
                  } while (lVar12 < param_8);
                  lVar7 = lVar7 + 0x20;
                  *pauVar4 = auVar25;
                  pauVar4[1] = auVar24;
                  pauVar10 = pauVar4 + 2;
                  lStack_4a0 = lVar9;
                  lStack_498 = lVar6;
                  lStack_490 = lVar5;
                  lStack_468 = lVar17;
                  pauStack_460 = pauVar4;
                  lVar22 = lVar17 + 8;
                }
                for (; pauVar10 = pauVar4, lVar17 < (longlong)uVar13; lVar17 = lVar17 + 4) {
                  lVar12 = 0;
                  lVar8 = 0;
                  lVar22 = 0;
                  lVar21 = 0;
                  auVar24 = auVar3;
                  do {
                    uVar15 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar18 = 0;
                    if (uVar15 != 0) {
                      do {
                        lVar19 = lVar18 * 2;
                        lVar18 = lVar18 + 1;
                        auVar24 = maxps(auVar24,*(undefined1 (*) [16])
                                                 (lVar7 + lVar22 +
                                                 (longlong)
                                                 (int)((uint)*(ushort *)
                                                              (param_9 + lVar21 + 2 + lVar19) *
                                                      param_11) * 4));
                        lStack_458 = param_2;
                      } while (lVar18 < (longlong)uVar15);
                    }
                    lVar12 = lVar12 + 1;
                    lVar21 = lVar21 + lVar11;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar22 = lVar22 + param_2 * 4;
                  } while (lVar12 < param_8);
                  lVar7 = lVar7 + 0x10;
                  *pauVar10 = auVar24;
                  pauVar4 = pauVar10 + 1;
                  lStack_4a0 = lVar9;
                  lStack_498 = lVar6;
                  lStack_490 = lVar5;
                  lStack_468 = lVar17;
                  pauStack_460 = pauVar10;
                }
                for (; pauVar4 = pauVar10, lVar17 < (longlong)uVar20; lVar17 = lVar17 + 2) {
                  lVar12 = 0;
                  lVar8 = 0;
                  lVar22 = 0;
                  lVar21 = 0;
                  auVar24 = auVar3;
                  do {
                    uVar15 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar18 = 0;
                    if (uVar15 != 0) {
                      do {
                        lVar19 = lVar18 * 2;
                        lVar18 = lVar18 + 1;
                        auVar25._8_8_ = 0;
                        auVar25._0_8_ =
                             *(ulonglong *)
                              (lVar7 + lVar22 +
                              (longlong)
                              (int)((uint)*(ushort *)(param_9 + lVar21 + 2 + lVar19) * param_11) * 4
                              );
                        auVar24 = maxps(auVar24,auVar25);
                        lStack_458 = param_2;
                      } while (lVar18 < (longlong)uVar15);
                    }
                    lVar12 = lVar12 + 1;
                    lVar21 = lVar21 + lVar11;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar22 = lVar22 + param_2 * 4;
                  } while (lVar12 < param_8);
                  lVar7 = lVar7 + 8;
                  *(longlong *)*pauVar4 = auVar24._0_8_;
                  pauVar10 = (undefined1 (*) [16])(*pauVar4 + 8);
                  lStack_4a0 = lVar9;
                  lStack_498 = lVar6;
                  lStack_490 = lVar5;
                  lStack_468 = lVar17;
                  pauStack_460 = pauVar4;
                }
                for (; pauVar10 = pauVar4, lVar17 < (longlong)param_5; lVar17 = lVar17 + 1) {
                  lVar12 = 0;
                  lVar8 = 0;
                  lVar22 = 0;
                  lVar21 = 0;
                  auVar24 = auVar3;
                  do {
                    uVar15 = (ulonglong)*(ushort *)(param_9 + lVar8 * 2);
                    lVar18 = 0;
                    if (uVar15 != 0) {
                      do {
                        lVar19 = lVar18 * 2;
                        lVar18 = lVar18 + 1;
                        auVar24 = maxps(auVar24,ZEXT416(*(uint *)(lVar7 + lVar22 +
                                                                 (longlong)
                                                                 (int)((uint)*(ushort *)
                                                                              (param_9 + lVar21 + 2
                                                                              + lVar19) * param_11)
                                                                 * 4)));
                        lStack_458 = param_2;
                      } while (lVar18 < (longlong)uVar15);
                    }
                    lVar12 = lVar12 + 1;
                    lVar21 = lVar21 + lVar11;
                    lVar8 = lVar8 + 1 + param_7;
                    lVar22 = lVar22 + param_2 * 4;
                  } while (lVar12 < param_8);
                  lVar7 = lVar7 + 4;
                  *(int *)*pauVar10 = auVar24._0_4_;
                  pauVar4 = (undefined1 (*) [16])(*pauVar10 + 4);
                  lStack_4a0 = lVar9;
                  lStack_498 = lVar6;
                  lStack_490 = lVar5;
                  lStack_468 = lVar17;
                  pauStack_460 = pauVar10;
                }
                lVar5 = lVar5 + 1;
                lVar6 = lVar6 + param_2 * 4;
                lVar9 = lVar9 + param_4 * 4;
                lStack_4c8 = lVar11;
                lStack_4c0 = param_9;
              } while (lVar5 < param_6);
            }
            goto LAB_14045407c;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < (longlong)uVar15);
      }
      lVar9 = lVar9 + 1;
      lVar6 = lVar6 + param_2;
      lVar7 = lVar7 + 1 + param_7;
      lVar22 = lVar22 + lVar11;
      uStack_488 = uVar20;
    } while (lVar9 < param_8);
  }
  lVar6 = 0;
  if (0 < param_6) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      lVar7 = param_1 + lVar9;
      lVar22 = 0;
      pauVar10 = (undefined1 (*) [16])(param_3 + lVar11);
      lStack_458 = lStack_458;
      if (0 < (longlong)uVar14) {
        do {
          lVar17 = 0;
          auVar24 = auVar3;
          auVar25 = auVar3;
          auVar26 = auVar3;
          auVar27 = auVar3;
          if (0 < lVar5) {
            do {
              lVar8 = alStack_450[lVar17];
              lVar17 = lVar17 + 1;
              auVar27 = maxps(auVar27,*(undefined1 (*) [16])(lVar7 + lVar8 * 4));
              auVar25 = maxps(auVar25,*(undefined1 (*) [16])(lVar7 + 0x10 + lVar8 * 4));
              auVar24 = maxps(auVar24,*(undefined1 (*) [16])(lVar7 + 0x20 + lVar8 * 4));
              auVar26 = maxps(auVar26,*(undefined1 (*) [16])(lVar7 + 0x30 + lVar8 * 4));
            } while (lVar17 < lVar5);
          }
          lVar22 = lVar22 + 0x10;
          *pauVar10 = auVar27;
          lVar7 = lVar7 + 0x40;
          pauVar10[1] = auVar25;
          pauVar10[2] = auVar24;
          pauVar10[3] = auVar26;
          pauVar10 = pauVar10 + 4;
          lStack_458 = param_2;
        } while (lVar22 < (longlong)uVar14);
      }
      for (; lVar22 < (longlong)uVar16; lVar22 = lVar22 + 8) {
        lVar17 = 0;
        auVar24 = auVar3;
        auVar25 = auVar3;
        if (0 < lVar5) {
          do {
            plVar1 = alStack_450 + lVar17;
            lVar17 = lVar17 + 1;
            auVar25 = maxps(auVar25,*(undefined1 (*) [16])(lVar7 + *plVar1 * 4));
            auVar24 = maxps(auVar24,*(undefined1 (*) [16])(lVar7 + 0x10 + *plVar1 * 4));
          } while (lVar17 < lVar5);
        }
        *pauVar10 = auVar25;
        lVar7 = lVar7 + 0x20;
        pauVar10[1] = auVar24;
        pauVar10 = pauVar10 + 2;
        lStack_458 = param_2;
      }
      for (; lVar22 < (longlong)uVar13; lVar22 = lVar22 + 4) {
        lVar17 = 0;
        auVar24 = auVar3;
        if (0 < lVar5) {
          do {
            plVar1 = alStack_450 + lVar17;
            lVar17 = lVar17 + 1;
            auVar24 = maxps(auVar24,*(undefined1 (*) [16])(lVar7 + *plVar1 * 4));
          } while (lVar17 < lVar5);
        }
        *pauVar10 = auVar24;
        lVar7 = lVar7 + 0x10;
        pauVar10 = pauVar10 + 1;
        lStack_458 = param_2;
      }
      for (; lVar22 < (longlong)uVar20; lVar22 = lVar22 + 2) {
        lVar17 = 0;
        auVar24 = auVar3;
        uVar23 = uVar2;
        if (0 < lVar5) {
          do {
            plVar1 = alStack_450 + lVar17;
            lVar17 = lVar17 + 1;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(ulonglong *)(lVar7 + *plVar1 * 4);
            auVar24 = maxps(auVar24,auVar26);
            uVar23 = auVar24._0_8_;
          } while (lVar17 < lVar5);
        }
        *(undefined8 *)*pauVar10 = uVar23;
        lVar7 = lVar7 + 8;
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + 8);
        lStack_458 = param_2;
      }
      for (; lVar22 < (longlong)param_5; lVar22 = lVar22 + 1) {
        lVar17 = 0;
        auVar24 = auVar3;
        if (0 < lVar5) {
          do {
            plVar1 = alStack_450 + lVar17;
            lVar17 = lVar17 + 1;
            auVar24 = maxps(auVar24,ZEXT416(*(uint *)(lVar7 + *plVar1 * 4)));
          } while (lVar17 < lVar5);
        }
        *(int *)*pauVar10 = auVar24._0_4_;
        lVar7 = lVar7 + 4;
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + 4);
        lStack_458 = param_2;
      }
      lVar6 = lVar6 + 1;
      lVar9 = lVar9 + param_2 * 4;
      lVar11 = lVar11 + param_4 * 4;
      lStack_4c8 = lVar5;
      uStack_488 = uVar20;
    } while (lVar6 < param_6);
  }
LAB_14045407c:
  uVar13 = uStack_50 ^ (ulonglong)auStack_4f8;
  uStack_50 = 0;
  if (uVar13 != DAT_1436b4680) {
    lStack_4b8 = param_4;
    lStack_4b0 = param_3;
    lStack_4a8 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return;
}

