
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d29540(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3,
                        longlong param_4,int param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  
  auVar17 = _DAT_1430921c0;
  lVar10 = (longlong)param_5;
  lVar11 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)(param_3 & 0xffffffffffffffe0)) {
      do {
        lVar11 = lVar11 + 0x20;
        auVar17 = vminps_avx(*param_1,*(undefined1 (*) [32])(*param_1 + lVar10 * 4));
        auVar23 = vminps_avx(param_1[1],*(undefined1 (*) [32])(param_1[1] + lVar10 * 4));
        auVar22 = vminps_avx(param_1[2],*(undefined1 (*) [32])(param_1[2] + lVar10 * 4));
        auVar21 = vminps_avx(param_1[3],*(undefined1 (*) [32])(param_1[3] + lVar10 * 4));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(*param_1 + lVar10 * 8));
        auVar23 = vminps_avx(auVar23,*(undefined1 (*) [32])(param_1[1] + lVar10 * 8));
        auVar22 = vminps_avx(auVar22,*(undefined1 (*) [32])(param_1[2] + lVar10 * 8));
        auVar21 = vminps_avx(auVar21,*(undefined1 (*) [32])(param_1[3] + lVar10 * 8));
        *param_2 = auVar17;
        param_2[1] = auVar23;
        param_2[2] = auVar22;
        param_2[3] = auVar21;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      } while (lVar11 < (longlong)(param_3 & 0xffffffffffffffe0));
    }
  }
  else if (param_4 == 5) {
    uVar9 = 0;
    uVar6 = param_3 & 0xffffffffffffffe0;
    if (0 < (longlong)uVar6) {
      uVar4 = (ulonglong)((longlong)(uVar6 + 0x1f) >> 4) >> 0x3b;
      lVar5 = 0;
      lVar11 = (uVar4 + 0x3f + uVar6 & 0xffffffffffffffe0) - 0x20;
      do {
        uVar9 = uVar9 + 1;
        auVar17 = vminps_avx(*(undefined1 (*) [32])(*param_1 + lVar5),
                             *(undefined1 (*) [32])(*param_1 + lVar5 + lVar10 * 4));
        auVar23 = vminps_avx(*(undefined1 (*) [32])(param_1[1] + lVar5),
                             *(undefined1 (*) [32])(param_1[1] + lVar10 * 4 + lVar5));
        auVar22 = vminps_avx(*(undefined1 (*) [32])(param_1[2] + lVar5),
                             *(undefined1 (*) [32])(param_1[2] + lVar10 * 4 + lVar5));
        auVar21 = vminps_avx(*(undefined1 (*) [32])(param_1[3] + lVar5),
                             *(undefined1 (*) [32])(param_1[3] + lVar10 * 4 + lVar5));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(*param_1 + lVar5 + lVar10 * 8));
        auVar23 = vminps_avx(auVar23,*(undefined1 (*) [32])(param_1[1] + lVar10 * 8 + lVar5));
        auVar22 = vminps_avx(auVar22,*(undefined1 (*) [32])(param_1[2] + lVar10 * 8 + lVar5));
        auVar21 = vminps_avx(auVar21,*(undefined1 (*) [32])(param_1[3] + lVar10 * 8 + lVar5));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(*param_1 + lVar5 + lVar10 * 0xc));
        auVar23 = vminps_avx(auVar23,*(undefined1 (*) [32])(param_1[1] + lVar10 * 0xc + lVar5));
        auVar22 = vminps_avx(auVar22,*(undefined1 (*) [32])(param_1[2] + lVar10 * 0xc + lVar5));
        auVar21 = vminps_avx(auVar21,*(undefined1 (*) [32])(param_1[3] + lVar10 * 0xc + lVar5));
        auVar17 = vminps_avx(auVar17,*(undefined1 (*) [32])(*param_1 + lVar5 + lVar10 * 0x10));
        auVar23 = vminps_avx(auVar23,*(undefined1 (*) [32])(param_1[1] + lVar10 * 0x10 + lVar5));
        auVar22 = vminps_avx(auVar22,*(undefined1 (*) [32])(param_1[2] + lVar10 * 0x10 + lVar5));
        auVar21 = vminps_avx(auVar21,*(undefined1 (*) [32])(param_1[3] + lVar10 * 0x10 + lVar5));
        *(undefined1 (*) [32])(*param_2 + lVar5) = auVar17;
        *(undefined1 (*) [32])(param_2[1] + lVar5) = auVar23;
        *(undefined1 (*) [32])(param_2[2] + lVar5) = auVar22;
        *(undefined1 (*) [32])(param_2[3] + lVar5) = auVar21;
        lVar5 = lVar5 + 0x80;
      } while (uVar9 < (ulonglong)((longlong)(uVar4 + 0x1f + uVar6) >> 5));
      param_1 = param_1 + uVar9 * 4;
      param_2 = param_2 + uVar9 * 4;
    }
  }
  else {
    if (0 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      do {
        auVar13 = ZEXT3264(auVar17);
        lVar5 = 0;
        pauVar7 = param_1;
        auVar23 = auVar17;
        auVar22 = auVar17;
        auVar21 = auVar17;
        auVar20 = auVar17;
        auVar19 = auVar17;
        auVar18 = auVar17;
        auVar16 = auVar17;
        auVar15 = auVar17;
        if (0 < param_4) {
          do {
            lVar5 = lVar5 + 1;
            auVar23 = vminps_avx(auVar23,*pauVar7);
            auVar22 = vminps_avx(auVar22,pauVar7[1]);
            auVar21 = vminps_avx(auVar21,pauVar7[2]);
            auVar20 = vminps_avx(auVar20,pauVar7[3]);
            auVar19 = vminps_avx(auVar19,pauVar7[4]);
            auVar18 = vminps_avx(auVar18,pauVar7[5]);
            auVar16 = vminps_avx(auVar16,pauVar7[6]);
            auVar15 = vminps_avx(auVar13._0_32_,pauVar7[7]);
            auVar13 = ZEXT3264(auVar15);
            pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar10 * 4);
          } while (lVar5 < param_4);
        }
        lVar11 = lVar11 + 0x40;
        param_1 = param_1 + 8;
        *param_2 = auVar23;
        param_2[1] = auVar22;
        param_2[2] = auVar21;
        param_2[3] = auVar20;
        param_2[4] = auVar19;
        param_2[5] = auVar18;
        param_2[6] = auVar16;
        param_2[7] = auVar15;
        param_2 = param_2 + 8;
      } while (lVar11 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
    auVar17 = _DAT_1430921c0;
    for (; lVar11 < (longlong)(param_3 & 0xffffffffffffffe0); lVar11 = lVar11 + 0x20) {
      lVar5 = 0;
      pauVar7 = param_1;
      auVar23 = auVar17;
      auVar22 = auVar17;
      auVar21 = auVar17;
      auVar20 = auVar17;
      if (0 < param_4) {
        do {
          lVar5 = lVar5 + 1;
          auVar23 = vminps_avx(auVar23,*pauVar7);
          auVar22 = vminps_avx(auVar22,pauVar7[1]);
          auVar21 = vminps_avx(auVar21,pauVar7[2]);
          auVar20 = vminps_avx(auVar20,pauVar7[3]);
          pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar10 * 4);
        } while (lVar5 < param_4);
      }
      param_1 = param_1 + 4;
      *param_2 = auVar23;
      param_2[1] = auVar22;
      param_2[2] = auVar21;
      param_2[3] = auVar20;
      param_2 = param_2 + 4;
    }
  }
  auVar23 = _DAT_1430921c0;
  auVar17 = _DAT_1430921c0;
  for (; _DAT_1430921c0 = auVar17, lVar11 < (longlong)(param_3 & 0xfffffffffffffff0);
      lVar11 = lVar11 + 0x10) {
    lVar5 = 0;
    pauVar7 = param_1;
    auVar17 = auVar23;
    auVar22 = auVar23;
    if (0 < param_4) {
      do {
        lVar5 = lVar5 + 1;
        auVar17 = vminps_avx(auVar17,*pauVar7);
        auVar22 = vminps_avx(auVar22,pauVar7[1]);
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar10 * 4);
      } while (lVar5 < param_4);
    }
    param_1 = param_1 + 2;
    *param_2 = auVar17;
    param_2[1] = auVar22;
    param_2 = param_2 + 2;
    auVar17 = _DAT_1430921c0;
  }
  auVar2 = _DAT_1430921e0;
  for (; lVar11 < (longlong)(param_3 & 0xfffffffffffffff8); lVar11 = lVar11 + 8) {
    lVar5 = 0;
    lVar8 = 0;
    auVar23 = auVar17;
    if (0 < param_4) {
      do {
        lVar5 = lVar5 + 1;
        auVar23 = vminps_avx(auVar23,*(undefined1 (*) [32])(*param_1 + lVar8 * 4));
        lVar8 = lVar8 + lVar10;
      } while (lVar5 < param_4);
    }
    param_1 = param_1 + 1;
    _DAT_1430921e0 = auVar2;
    *param_2 = auVar23;
    param_2 = param_2 + 1;
    auVar2 = _DAT_1430921e0;
  }
  auVar3 = auVar2;
  for (; lVar11 < (longlong)(param_3 & 0xfffffffffffffffc); lVar11 = lVar11 + 4) {
    lVar5 = 0;
    lVar8 = 0;
    auVar14 = auVar2;
    if (0 < param_4) {
      do {
        lVar5 = lVar5 + 1;
        auVar14 = vminps_avx(auVar14,*(undefined1 (*) [16])(*param_1 + lVar8 * 4));
        lVar8 = lVar8 + lVar10;
      } while (lVar5 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    _DAT_1430921e0 = auVar3;
    *(undefined1 (*) [16])*param_2 = auVar14;
    param_2 = (undefined1 (*) [32])(*param_2 + 0x10);
    auVar3 = _DAT_1430921e0;
  }
  auVar2 = auVar3;
  for (; _DAT_1430921e0 = auVar2, lVar11 < (longlong)(param_3 & 0xfffffffffffffffe);
      lVar11 = lVar11 + 2) {
    lVar8 = 0;
    uVar12 = auVar3._0_8_;
    lVar5 = 0;
    auVar2 = auVar3;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(*param_1 + lVar5);
        lVar5 = lVar5 + lVar10 * 4;
        auVar2 = vminps_avx(auVar2,auVar14);
        uVar12 = auVar2._0_8_;
      } while (lVar8 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    *(undefined8 *)*param_2 = uVar12;
    param_2 = (undefined1 (*) [32])(*param_2 + 8);
    auVar2 = _DAT_1430921e0;
  }
  for (; lVar11 < (longlong)param_3; lVar11 = lVar11 + 1) {
    lVar8 = 0;
    auVar13 = ZEXT1664(auVar2);
    lVar5 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        puVar1 = (uint *)(*param_1 + lVar5);
        lVar5 = lVar5 + lVar10 * 4;
        auVar3 = vminps_avx(auVar13._0_16_,ZEXT416(*puVar1));
        auVar13 = ZEXT1664(auVar3);
      } while (lVar8 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_2 = auVar13._0_4_;
    param_2 = (undefined1 (*) [32])(*param_2 + 4);
  }
  return;
}

