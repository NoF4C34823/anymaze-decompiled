
void thunk_FUN_140d1c920(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [64];
  undefined1 auVar9 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  
  lVar3 = 0;
  lVar4 = (longlong)param_5;
  if (0 < (longlong)(param_3 & 0xffffffffffffffc0)) {
    do {
      lVar6 = 0;
      auVar23 = ZEXT1664((undefined1  [16])0x0);
      auVar11 = (undefined1  [16])0x0;
      auVar22 = ZEXT1664((undefined1  [16])0x0);
      auVar21 = (undefined1  [16])0x0;
      auVar20 = ZEXT1664((undefined1  [16])0x0);
      auVar19 = (undefined1  [16])0x0;
      auVar18 = ZEXT1664((undefined1  [16])0x0);
      auVar17 = (undefined1  [16])0x0;
      auVar16 = ZEXT1664((undefined1  [16])0x0);
      auVar15 = (undefined1  [16])0x0;
      auVar14 = ZEXT1664((undefined1  [16])0x0);
      auVar13 = (undefined1  [16])0x0;
      auVar12 = ZEXT1664((undefined1  [16])0x0);
      auVar10 = (undefined1  [16])0x0;
      auVar9 = ZEXT1664((undefined1  [16])0x0);
      auVar8 = (undefined1  [16])0x0;
      pauVar5 = param_1;
      if (0 < param_4) {
        do {
          lVar6 = lVar6 + 1;
          auVar11 = vpmaxuw_avx(auVar23._0_16_,*pauVar5);
          auVar23 = ZEXT1664(auVar11);
          auVar21 = vpmaxuw_avx(auVar22._0_16_,pauVar5[1]);
          auVar22 = ZEXT1664(auVar21);
          auVar19 = vpmaxuw_avx(auVar20._0_16_,pauVar5[2]);
          auVar20 = ZEXT1664(auVar19);
          auVar17 = vpmaxuw_avx(auVar18._0_16_,pauVar5[3]);
          auVar18 = ZEXT1664(auVar17);
          auVar15 = vpmaxuw_avx(auVar16._0_16_,pauVar5[4]);
          auVar16 = ZEXT1664(auVar15);
          auVar13 = vpmaxuw_avx(auVar14._0_16_,pauVar5[5]);
          auVar14 = ZEXT1664(auVar13);
          auVar10 = vpmaxuw_avx(auVar12._0_16_,pauVar5[6]);
          auVar12 = ZEXT1664(auVar10);
          auVar8 = vpmaxuw_avx(auVar9._0_16_,pauVar5[7]);
          auVar9 = ZEXT1664(auVar8);
          pauVar5 = (undefined1 (*) [16])(*pauVar5 + lVar4 * 2);
        } while (lVar6 < param_4);
      }
      lVar3 = lVar3 + 0x40;
      param_1 = param_1 + 8;
      *param_2 = auVar11;
      param_2[1] = auVar21;
      param_2[2] = auVar19;
      param_2[3] = auVar17;
      param_2[4] = auVar15;
      param_2[5] = auVar13;
      param_2[6] = auVar10;
      param_2[7] = auVar8;
      param_2 = param_2 + 8;
    } while (lVar3 < (longlong)(param_3 & 0xffffffffffffffc0));
  }
  for (; lVar3 < (longlong)(param_3 & 0xffffffffffffffe0); lVar3 = lVar3 + 0x20) {
    lVar6 = 0;
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    auVar14 = ZEXT1664((undefined1  [16])0x0);
    auVar21 = (undefined1  [16])0x0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    auVar19 = (undefined1  [16])0x0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar17 = (undefined1  [16])0x0;
    pauVar5 = param_1;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        auVar11 = vpmaxuw_avx(auVar16._0_16_,*pauVar5);
        auVar16 = ZEXT1664(auVar11);
        auVar21 = vpmaxuw_avx(auVar14._0_16_,pauVar5[1]);
        auVar14 = ZEXT1664(auVar21);
        auVar19 = vpmaxuw_avx(auVar12._0_16_,pauVar5[2]);
        auVar12 = ZEXT1664(auVar19);
        auVar17 = vpmaxuw_avx(auVar9._0_16_,pauVar5[3]);
        auVar9 = ZEXT1664(auVar17);
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + lVar4 * 2);
      } while (lVar6 < param_4);
    }
    param_1 = param_1 + 4;
    *param_2 = auVar11;
    param_2[1] = auVar21;
    param_2[2] = auVar19;
    param_2[3] = auVar17;
    param_2 = param_2 + 4;
  }
  for (; lVar3 < (longlong)(param_3 & 0xfffffffffffffff8); lVar3 = lVar3 + 8) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar6 = 0;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        auVar11 = vpmaxuw_avx(auVar9._0_16_,*(undefined1 (*) [16])(*param_1 + lVar6 * 2));
        auVar9 = ZEXT1664(auVar11);
        lVar6 = lVar6 + lVar4;
      } while (lVar7 < param_4);
    }
    param_1 = param_1 + 1;
    *param_2 = auVar11;
    param_2 = param_2 + 1;
  }
  while (lVar3 < (longlong)(param_3 & 0xfffffffffffffffc)) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar6 = 0;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar6);
        lVar6 = lVar6 + lVar4 * 2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar1;
        auVar11 = vpmaxuw_avx(auVar9._0_16_,auVar11);
        auVar9 = ZEXT1664(auVar11);
      } while (lVar7 < param_4);
    }
    lVar3 = lVar3 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar11,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
  }
  for (; lVar3 < (longlong)(param_3 & 0xfffffffffffffffe); lVar3 = lVar3 + 2) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    lVar6 = 0;
    if (0 < param_4) {
      do {
        auVar11 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar6 * 2),0);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + lVar4;
        auVar11 = vpmaxuw_avx(auVar9._0_16_,auVar11);
        auVar9 = ZEXT1664(auVar11);
      } while (lVar7 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_2 = auVar9._0_4_;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
  }
  while (lVar3 < (longlong)param_3) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar6 = 0;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        auVar11 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar6 * 2),0);
        lVar6 = lVar6 + lVar4;
        auVar11 = vpmaxuw_avx(auVar9._0_16_,auVar11);
        auVar9 = ZEXT1664(auVar11);
      } while (lVar7 < param_4);
    }
    lVar3 = lVar3 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar11,0);
  }
  return;
}

