
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14059bc60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,undefined8 param_10,int param_11)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 auVar33 [64];
  undefined1 (*pauVar34) [64];
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  undefined1 (*pauVar45) [64];
  longlong lVar46;
  longlong lVar47;
  ushort uVar48;
  longlong lVar49;
  longlong lVar50;
  uint uVar51;
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auStack_4f8 [32];
  longlong lStack_4d8;
  longlong lStack_4d0;
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
  undefined1 (*pauStack_468) [64];
  longlong lStack_460;
  int iStack_458;
  longlong lStack_450;
  longlong alStack_448 [128];
  ulonglong uStack_48;
  
  auVar33 = _DAT_14308b140;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_4f8;
  uStack_480 = param_5 & 0xffffffffffffffe0;
  lVar35 = 0;
  lVar38 = 0;
  param_9 = param_7 * param_8 + param_9;
  uStack_478 = param_5 & 0xffffffffffffffc0;
  uVar42 = param_5 & 0xfffffffffffffff0;
  lVar36 = 0;
  if (0 < param_8) {
    lVar47 = 0;
    iStack_458 = param_11;
    lVar39 = param_7 * 2 + 2;
    lVar49 = 0;
    lStack_490 = param_6;
    uStack_488 = param_5;
    do {
      uVar40 = (ulonglong)*(ushort *)(param_9 + lVar47 * 2);
      lVar43 = 0;
      uStack_470 = uVar42;
      if (uVar40 != 0) {
        do {
          alStack_448[lVar35] =
               (ulonglong)*(ushort *)(param_9 + lVar49 + 2 + lVar43 * 2) * (longlong)param_11 +
               lVar36;
          lVar35 = lVar35 + 1;
          lStack_450 = param_2;
          if (0x7f < lVar35) {
            lVar35 = 0;
            if (0 < param_6) {
              lVar36 = 0;
              lVar38 = 0;
              do {
                lVar47 = param_1 + lVar36;
                pauVar45 = (undefined1 (*) [64])(param_3 + lVar38);
                lVar49 = 0;
                if (0 < (longlong)uStack_478) {
                  do {
                    lStack_460 = lVar49;
                    pauStack_468 = pauVar45;
                    lVar46 = 0;
                    lVar43 = 0;
                    lVar49 = 0;
                    lVar37 = 0;
                    auVar55 = auVar33;
                    auVar54 = auVar33;
                    auVar53 = auVar33;
                    auVar52 = auVar33;
                    do {
                      uVar40 = (ulonglong)*(ushort *)(param_9 + lVar43 * 2);
                      lVar41 = 0;
                      if (uVar40 != 0) {
                        lVar50 = lVar47 + lVar49;
                        do {
                          lVar44 = lVar41 * 2;
                          lVar41 = lVar41 + 1;
                          lVar44 = (longlong)
                                   (int)((uint)*(ushort *)(param_9 + lVar37 + 2 + lVar44) * param_11
                                        );
                          auVar52 = vmaxps_avx512f(auVar52,*(undefined1 (*) [64])
                                                            (lVar50 + lVar44 * 4));
                          auVar53 = vmaxps_avx512f(auVar53,*(undefined1 (*) [64])
                                                            (lVar50 + 0x40 + lVar44 * 4));
                          auVar54 = vmaxps_avx512f(auVar54,*(undefined1 (*) [64])
                                                            (lVar50 + 0x80 + lVar44 * 4));
                          auVar55 = vmaxps_avx512f(auVar55,*(undefined1 (*) [64])
                                                            (lVar50 + 0xc0 + lVar44 * 4));
                        } while (lVar41 < (longlong)uVar40);
                      }
                      lVar46 = lVar46 + 1;
                      lVar37 = lVar37 + lVar39;
                      lVar43 = lVar43 + 1 + param_7;
                      lVar49 = lVar49 + param_2 * 4;
                    } while (lVar46 < param_8);
                    lVar47 = lVar47 + 0x100;
                    lVar49 = lStack_460 + 0x40;
                    *pauStack_468 = auVar52;
                    pauStack_468[1] = auVar53;
                    pauStack_468[2] = auVar54;
                    pauStack_468[3] = auVar55;
                    pauVar45 = pauStack_468 + 4;
                    lStack_4b0 = lVar38;
                    lStack_4a8 = lVar36;
                    lStack_4a0 = lVar35;
                  } while (lVar49 < (longlong)uStack_478);
                }
                while (lVar43 = lVar49, pauVar34 = pauVar45, lVar43 < (longlong)uStack_480) {
                  lVar41 = 0;
                  lVar37 = 0;
                  lVar49 = 0;
                  lVar46 = 0;
                  auVar55 = auVar33;
                  auVar54 = auVar33;
                  do {
                    uVar40 = (ulonglong)*(ushort *)(param_9 + lVar37 * 2);
                    lVar50 = 0;
                    if (uVar40 != 0) {
                      do {
                        lVar44 = lVar50 * 2;
                        lVar50 = lVar50 + 1;
                        lVar44 = (longlong)
                                 (int)((uint)*(ushort *)(param_9 + lVar46 + 2 + lVar44) * param_11);
                        auVar54 = vmaxps_avx512f(auVar54,*(undefined1 (*) [64])
                                                          (lVar47 + lVar49 + lVar44 * 4));
                        auVar55 = vmaxps_avx512f(auVar55,*(undefined1 (*) [64])
                                                          (lVar47 + lVar49 + 0x40 + lVar44 * 4));
                      } while (lVar50 < (longlong)uVar40);
                    }
                    lVar41 = lVar41 + 1;
                    lVar46 = lVar46 + lVar39;
                    lVar37 = lVar37 + 1 + param_7;
                    lVar49 = lVar49 + param_2 * 4;
                  } while (lVar41 < param_8);
                  lVar47 = lVar47 + 0x80;
                  *pauVar34 = auVar54;
                  pauVar34[1] = auVar55;
                  pauVar45 = pauVar34 + 2;
                  lStack_4b0 = lVar38;
                  lStack_4a8 = lVar36;
                  lStack_4a0 = lVar35;
                  pauStack_468 = pauVar34;
                  lStack_460 = lVar43;
                  lVar49 = lVar43 + 0x20;
                }
                for (; pauVar45 = pauVar34, lVar43 < (longlong)uVar42; lVar43 = lVar43 + 0x10) {
                  lVar41 = 0;
                  lVar37 = 0;
                  lVar49 = 0;
                  lVar46 = 0;
                  auVar55 = auVar33;
                  do {
                    uVar40 = (ulonglong)*(ushort *)(param_9 + lVar37 * 2);
                    lVar50 = 0;
                    if (uVar40 != 0) {
                      do {
                        lVar44 = lVar50 * 2;
                        lVar50 = lVar50 + 1;
                        auVar55 = vmaxps_avx512f(auVar55,*(undefined1 (*) [64])
                                                          (lVar47 + lVar49 +
                                                          (longlong)
                                                          (int)((uint)*(ushort *)
                                                                       (param_9 + lVar46 + 2 +
                                                                       lVar44) * param_11) * 4));
                      } while (lVar50 < (longlong)uVar40);
                    }
                    lVar41 = lVar41 + 1;
                    lVar46 = lVar46 + lVar39;
                    lVar37 = lVar37 + 1 + param_7;
                    lVar49 = lVar49 + param_2 * 4;
                  } while (lVar41 < param_8);
                  lVar47 = lVar47 + 0x40;
                  *pauVar45 = auVar55;
                  pauVar34 = pauVar45 + 1;
                  lStack_4b0 = lVar38;
                  lStack_4a8 = lVar36;
                  lStack_4a0 = lVar35;
                  pauStack_468 = pauVar45;
                  lStack_460 = lVar43;
                }
                if (lVar43 < (longlong)param_5) {
                  uVar51 = 0xffff >> (((int)lVar43 - (int)param_5) + 0x10U & 0x1f);
                  lVar46 = 0;
                  uVar48 = (ushort)uVar51;
                  lVar43 = 0;
                  lVar49 = 0;
                  lVar37 = 0;
                  auVar55 = auVar33;
                  do {
                    uVar40 = (ulonglong)*(ushort *)(param_9 + lVar43 * 2);
                    lVar41 = 0;
                    bVar11 = (byte)(uVar51 >> 8);
                    if (uVar40 != 0) {
                      do {
                        lVar50 = lVar41 * 2;
                        lVar41 = lVar41 + 1;
                        piVar1 = (int *)(lVar47 + lVar49 +
                                        (longlong)
                                        (int)((uint)*(ushort *)(param_9 + lVar37 + 2 + lVar50) *
                                             param_11) * 4);
                        auVar54._4_4_ = (uint)((byte)(uVar48 >> 1) & 1) * piVar1[1];
                        auVar54._0_4_ = (uint)((byte)uVar51 & 1) * *piVar1;
                        auVar54._8_4_ = (uint)((byte)(uVar48 >> 2) & 1) * piVar1[2];
                        auVar54._12_4_ = (uint)((byte)(uVar48 >> 3) & 1) * piVar1[3];
                        auVar54._16_4_ = (uint)((byte)(uVar48 >> 4) & 1) * piVar1[4];
                        auVar54._20_4_ = (uint)((byte)(uVar48 >> 5) & 1) * piVar1[5];
                        auVar54._24_4_ = (uint)((byte)(uVar48 >> 6) & 1) * piVar1[6];
                        auVar54._28_4_ = (uint)((byte)(uVar48 >> 7) & 1) * piVar1[7];
                        auVar54._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
                        auVar54._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
                        auVar54._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
                        auVar54._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
                        auVar54._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
                        auVar54._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
                        auVar54._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
                        auVar54._60_4_ = (uVar51 >> 0xf & 1) * piVar1[0xf];
                        auVar55 = vmaxps_avx512f(auVar55,auVar54);
                      } while (lVar41 < (longlong)uVar40);
                    }
                    lVar46 = lVar46 + 1;
                    lVar37 = lVar37 + lVar39;
                    lVar43 = lVar43 + 1 + param_7;
                    lVar49 = lVar49 + param_2 * 4;
                  } while (lVar46 < param_8);
                  iVar18 = *(int *)(*pauVar45 + 4);
                  iVar19 = *(int *)(*pauVar45 + 8);
                  iVar20 = *(int *)(*pauVar45 + 0xc);
                  iVar21 = *(int *)(*pauVar45 + 0x10);
                  iVar22 = *(int *)(*pauVar45 + 0x14);
                  iVar23 = *(int *)(*pauVar45 + 0x18);
                  iVar24 = *(int *)(*pauVar45 + 0x1c);
                  iVar25 = *(int *)(*pauVar45 + 0x20);
                  iVar26 = *(int *)(*pauVar45 + 0x24);
                  iVar27 = *(int *)(*pauVar45 + 0x28);
                  iVar28 = *(int *)(*pauVar45 + 0x2c);
                  iVar29 = *(int *)(*pauVar45 + 0x30);
                  iVar30 = *(int *)(*pauVar45 + 0x34);
                  iVar31 = *(int *)(*pauVar45 + 0x38);
                  iVar32 = *(int *)(*pauVar45 + 0x3c);
                  bVar3 = (bool)((byte)uVar51 & 1);
                  bVar4 = (bool)((byte)(uVar48 >> 1) & 1);
                  bVar5 = (bool)((byte)(uVar48 >> 2) & 1);
                  bVar6 = (bool)((byte)(uVar48 >> 3) & 1);
                  bVar7 = (bool)((byte)(uVar48 >> 4) & 1);
                  bVar8 = (bool)((byte)(uVar48 >> 5) & 1);
                  bVar9 = (bool)((byte)(uVar48 >> 6) & 1);
                  bVar10 = (bool)((byte)(uVar48 >> 7) & 1);
                  bVar12 = (bool)(bVar11 >> 1 & 1);
                  bVar13 = (bool)(bVar11 >> 2 & 1);
                  bVar14 = (bool)(bVar11 >> 3 & 1);
                  bVar15 = (bool)(bVar11 >> 4 & 1);
                  bVar16 = (bool)(bVar11 >> 5 & 1);
                  bVar17 = (bool)(bVar11 >> 6 & 1);
                  *(uint *)*pauVar45 =
                       (uint)bVar3 * auVar55._0_4_ | (uint)!bVar3 * *(int *)*pauVar45;
                  *(uint *)(*pauVar45 + 4) = (uint)bVar4 * auVar55._4_4_ | (uint)!bVar4 * iVar18;
                  *(uint *)(*pauVar45 + 8) = (uint)bVar5 * auVar55._8_4_ | (uint)!bVar5 * iVar19;
                  *(uint *)(*pauVar45 + 0xc) = (uint)bVar6 * auVar55._12_4_ | (uint)!bVar6 * iVar20;
                  *(uint *)(*pauVar45 + 0x10) = (uint)bVar7 * auVar55._16_4_ | (uint)!bVar7 * iVar21
                  ;
                  *(uint *)(*pauVar45 + 0x14) = (uint)bVar8 * auVar55._20_4_ | (uint)!bVar8 * iVar22
                  ;
                  *(uint *)(*pauVar45 + 0x18) = (uint)bVar9 * auVar55._24_4_ | (uint)!bVar9 * iVar23
                  ;
                  *(uint *)(*pauVar45 + 0x1c) =
                       (uint)bVar10 * auVar55._28_4_ | (uint)!bVar10 * iVar24;
                  *(uint *)(*pauVar45 + 0x20) =
                       (uint)(bVar11 & 1) * auVar55._32_4_ | (uint)!(bool)(bVar11 & 1) * iVar25;
                  *(uint *)(*pauVar45 + 0x24) =
                       (uint)bVar12 * auVar55._36_4_ | (uint)!bVar12 * iVar26;
                  *(uint *)(*pauVar45 + 0x28) =
                       (uint)bVar13 * auVar55._40_4_ | (uint)!bVar13 * iVar27;
                  *(uint *)(*pauVar45 + 0x2c) =
                       (uint)bVar14 * auVar55._44_4_ | (uint)!bVar14 * iVar28;
                  *(uint *)(*pauVar45 + 0x30) =
                       (uint)bVar15 * auVar55._48_4_ | (uint)!bVar15 * iVar29;
                  *(uint *)(*pauVar45 + 0x34) =
                       (uint)bVar16 * auVar55._52_4_ | (uint)!bVar16 * iVar30;
                  *(uint *)(*pauVar45 + 0x38) =
                       (uint)bVar17 * auVar55._56_4_ | (uint)!bVar17 * iVar31;
                  *(uint *)(*pauVar45 + 0x3c) =
                       (uint)(bVar11 >> 7) * auVar55._60_4_ | (uint)!(bool)(bVar11 >> 7) * iVar32;
                  lStack_4b0 = lVar38;
                  lStack_4a8 = lVar36;
                  lStack_4a0 = lVar35;
                  pauStack_468 = pauVar45;
                }
                lVar35 = lVar35 + 1;
                lVar36 = lVar36 + param_2 * 4;
                lVar38 = lVar38 + param_4 * 4;
                lStack_4d8 = lVar39;
                lStack_4d0 = param_9;
                lStack_4c8 = param_8;
                alStack_448[0] = param_7;
              } while (lVar35 < param_6);
            }
            goto LAB_14059c039;
          }
          lVar43 = lVar43 + 1;
        } while (lVar43 < (longlong)uVar40);
      }
      lVar38 = lVar38 + 1;
      lVar36 = lVar36 + param_2;
      lVar49 = lVar49 + lVar39;
      lVar47 = lVar47 + 1 + param_7;
    } while (lVar38 < param_8);
  }
  lVar36 = 0;
  if (0 < param_6) {
    lVar38 = 0;
    lVar39 = 0;
    do {
      lVar49 = 0;
      lVar47 = param_1 + lVar38;
      pauVar45 = (undefined1 (*) [64])(param_3 + lVar39);
      if (0 < (longlong)uStack_478) {
        do {
          lVar43 = 0;
          auVar55 = auVar33;
          auVar54 = auVar33;
          auVar53 = auVar33;
          auVar52 = auVar33;
          if (0 < lVar35) {
            do {
              lVar37 = alStack_448[lVar43];
              lVar43 = lVar43 + 1;
              auVar52 = vmaxps_avx512f(auVar52,*(undefined1 (*) [64])(lVar47 + lVar37 * 4));
              auVar53 = vmaxps_avx512f(auVar53,*(undefined1 (*) [64])(lVar47 + 0x40 + lVar37 * 4));
              auVar54 = vmaxps_avx512f(auVar54,*(undefined1 (*) [64])(lVar47 + 0x80 + lVar37 * 4));
              auVar55 = vmaxps_avx512f(auVar55,*(undefined1 (*) [64])(lVar47 + 0xc0 + lVar37 * 4));
            } while (lVar43 < lVar35);
          }
          lVar49 = lVar49 + 0x40;
          lVar47 = lVar47 + 0x100;
          *pauVar45 = auVar52;
          pauVar45[1] = auVar53;
          pauVar45[2] = auVar54;
          pauVar45[3] = auVar55;
          pauVar45 = pauVar45 + 4;
        } while (lVar49 < (longlong)uStack_478);
      }
      for (; lVar49 < (longlong)uStack_480; lVar49 = lVar49 + 0x20) {
        lVar43 = 0;
        auVar55 = auVar33;
        auVar54 = auVar33;
        if (0 < lVar35) {
          do {
            plVar2 = alStack_448 + lVar43;
            lVar43 = lVar43 + 1;
            auVar54 = vmaxps_avx512f(auVar54,*(undefined1 (*) [64])(lVar47 + *plVar2 * 4));
            auVar55 = vmaxps_avx512f(auVar55,*(undefined1 (*) [64])(lVar47 + 0x40 + *plVar2 * 4));
          } while (lVar43 < lVar35);
        }
        lVar47 = lVar47 + 0x80;
        *pauVar45 = auVar54;
        pauVar45[1] = auVar55;
        pauVar45 = pauVar45 + 2;
      }
      for (; lVar49 < (longlong)uVar42; lVar49 = lVar49 + 0x10) {
        lVar43 = 0;
        auVar55 = auVar33;
        if (0 < lVar35) {
          do {
            plVar2 = alStack_448 + lVar43;
            lVar43 = lVar43 + 1;
            auVar55 = vmaxps_avx512f(auVar55,*(undefined1 (*) [64])(lVar47 + *plVar2 * 4));
          } while (lVar43 < lVar35);
        }
        lVar47 = lVar47 + 0x40;
        *pauVar45 = auVar55;
        pauVar45 = pauVar45 + 1;
      }
      if (lVar49 < (longlong)param_5) {
        uVar51 = 0xffff >> (((int)lVar49 - (int)param_5) + 0x10U & 0x1f);
        lVar49 = 0;
        uVar48 = (ushort)uVar51;
        bVar11 = (byte)(uVar51 >> 8);
        auVar55 = auVar33;
        if (0 < lVar35) {
          do {
            plVar2 = alStack_448 + lVar49;
            lVar49 = lVar49 + 1;
            piVar1 = (int *)(lVar47 + *plVar2 * 4);
            auVar53._4_4_ = (uint)((byte)(uVar48 >> 1) & 1) * piVar1[1];
            auVar53._0_4_ = (uint)((byte)uVar51 & 1) * *piVar1;
            auVar53._8_4_ = (uint)((byte)(uVar48 >> 2) & 1) * piVar1[2];
            auVar53._12_4_ = (uint)((byte)(uVar48 >> 3) & 1) * piVar1[3];
            auVar53._16_4_ = (uint)((byte)(uVar48 >> 4) & 1) * piVar1[4];
            auVar53._20_4_ = (uint)((byte)(uVar48 >> 5) & 1) * piVar1[5];
            auVar53._24_4_ = (uint)((byte)(uVar48 >> 6) & 1) * piVar1[6];
            auVar53._28_4_ = (uint)((byte)(uVar48 >> 7) & 1) * piVar1[7];
            auVar53._32_4_ = (uint)(bVar11 & 1) * piVar1[8];
            auVar53._36_4_ = (uint)(bVar11 >> 1 & 1) * piVar1[9];
            auVar53._40_4_ = (uint)(bVar11 >> 2 & 1) * piVar1[10];
            auVar53._44_4_ = (uint)(bVar11 >> 3 & 1) * piVar1[0xb];
            auVar53._48_4_ = (uint)(bVar11 >> 4 & 1) * piVar1[0xc];
            auVar53._52_4_ = (uint)(bVar11 >> 5 & 1) * piVar1[0xd];
            auVar53._56_4_ = (uint)(bVar11 >> 6 & 1) * piVar1[0xe];
            auVar53._60_4_ = (uVar51 >> 0xf & 1) * piVar1[0xf];
            auVar55 = vmaxps_avx512f(auVar55,auVar53);
          } while (lVar49 < lVar35);
        }
        iVar18 = *(int *)(*pauVar45 + 4);
        iVar19 = *(int *)(*pauVar45 + 8);
        iVar20 = *(int *)(*pauVar45 + 0xc);
        iVar21 = *(int *)(*pauVar45 + 0x10);
        iVar22 = *(int *)(*pauVar45 + 0x14);
        iVar23 = *(int *)(*pauVar45 + 0x18);
        iVar24 = *(int *)(*pauVar45 + 0x1c);
        iVar25 = *(int *)(*pauVar45 + 0x20);
        iVar26 = *(int *)(*pauVar45 + 0x24);
        iVar27 = *(int *)(*pauVar45 + 0x28);
        iVar28 = *(int *)(*pauVar45 + 0x2c);
        iVar29 = *(int *)(*pauVar45 + 0x30);
        iVar30 = *(int *)(*pauVar45 + 0x34);
        iVar31 = *(int *)(*pauVar45 + 0x38);
        iVar32 = *(int *)(*pauVar45 + 0x3c);
        bVar3 = (bool)((byte)uVar51 & 1);
        bVar4 = (bool)((byte)(uVar48 >> 1) & 1);
        bVar5 = (bool)((byte)(uVar48 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar48 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar48 >> 4) & 1);
        bVar8 = (bool)((byte)(uVar48 >> 5) & 1);
        bVar9 = (bool)((byte)(uVar48 >> 6) & 1);
        bVar10 = (bool)((byte)(uVar48 >> 7) & 1);
        bVar12 = (bool)(bVar11 >> 1 & 1);
        bVar13 = (bool)(bVar11 >> 2 & 1);
        bVar14 = (bool)(bVar11 >> 3 & 1);
        bVar15 = (bool)(bVar11 >> 4 & 1);
        bVar16 = (bool)(bVar11 >> 5 & 1);
        bVar17 = (bool)(bVar11 >> 6 & 1);
        *(uint *)*pauVar45 = (uint)bVar3 * auVar55._0_4_ | (uint)!bVar3 * *(int *)*pauVar45;
        *(uint *)(*pauVar45 + 4) = (uint)bVar4 * auVar55._4_4_ | (uint)!bVar4 * iVar18;
        *(uint *)(*pauVar45 + 8) = (uint)bVar5 * auVar55._8_4_ | (uint)!bVar5 * iVar19;
        *(uint *)(*pauVar45 + 0xc) = (uint)bVar6 * auVar55._12_4_ | (uint)!bVar6 * iVar20;
        *(uint *)(*pauVar45 + 0x10) = (uint)bVar7 * auVar55._16_4_ | (uint)!bVar7 * iVar21;
        *(uint *)(*pauVar45 + 0x14) = (uint)bVar8 * auVar55._20_4_ | (uint)!bVar8 * iVar22;
        *(uint *)(*pauVar45 + 0x18) = (uint)bVar9 * auVar55._24_4_ | (uint)!bVar9 * iVar23;
        *(uint *)(*pauVar45 + 0x1c) = (uint)bVar10 * auVar55._28_4_ | (uint)!bVar10 * iVar24;
        *(uint *)(*pauVar45 + 0x20) =
             (uint)(bVar11 & 1) * auVar55._32_4_ | (uint)!(bool)(bVar11 & 1) * iVar25;
        *(uint *)(*pauVar45 + 0x24) = (uint)bVar12 * auVar55._36_4_ | (uint)!bVar12 * iVar26;
        *(uint *)(*pauVar45 + 0x28) = (uint)bVar13 * auVar55._40_4_ | (uint)!bVar13 * iVar27;
        *(uint *)(*pauVar45 + 0x2c) = (uint)bVar14 * auVar55._44_4_ | (uint)!bVar14 * iVar28;
        *(uint *)(*pauVar45 + 0x30) = (uint)bVar15 * auVar55._48_4_ | (uint)!bVar15 * iVar29;
        *(uint *)(*pauVar45 + 0x34) = (uint)bVar16 * auVar55._52_4_ | (uint)!bVar16 * iVar30;
        *(uint *)(*pauVar45 + 0x38) = (uint)bVar17 * auVar55._56_4_ | (uint)!bVar17 * iVar31;
        *(uint *)(*pauVar45 + 0x3c) =
             (uint)(bVar11 >> 7) * auVar55._60_4_ | (uint)!(bool)(bVar11 >> 7) * iVar32;
      }
      lVar36 = lVar36 + 1;
      lVar38 = lVar38 + param_2 * 4;
      lVar39 = lVar39 + param_4 * 4;
      lStack_490 = param_6;
      uStack_488 = param_5;
    } while (lVar36 < param_6);
  }
LAB_14059c039:
  uVar42 = uStack_48;
  uStack_48 = 0;
  if ((uVar42 ^ (ulonglong)auStack_4f8) != DAT_1436b4680) {
    lStack_4c0 = param_4;
    lStack_4b8 = param_1;
    lStack_498 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return;
}

