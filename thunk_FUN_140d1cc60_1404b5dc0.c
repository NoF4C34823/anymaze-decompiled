
void thunk_FUN_140d1cc60(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [64];
  undefined1 auVar8 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  
  lVar3 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    do {
      lVar5 = 0;
      auVar22 = ZEXT1664((undefined1  [16])0x0);
      auVar10 = (undefined1  [16])0x0;
      auVar21 = ZEXT1664((undefined1  [16])0x0);
      auVar20 = (undefined1  [16])0x0;
      auVar19 = ZEXT1664((undefined1  [16])0x0);
      auVar18 = (undefined1  [16])0x0;
      auVar17 = ZEXT1664((undefined1  [16])0x0);
      auVar16 = (undefined1  [16])0x0;
      auVar15 = ZEXT1664((undefined1  [16])0x0);
      auVar14 = (undefined1  [16])0x0;
      auVar13 = ZEXT1664((undefined1  [16])0x0);
      auVar12 = (undefined1  [16])0x0;
      auVar11 = ZEXT1664((undefined1  [16])0x0);
      auVar9 = (undefined1  [16])0x0;
      auVar8 = ZEXT1664((undefined1  [16])0x0);
      auVar7 = (undefined1  [16])0x0;
      pauVar4 = param_1;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar10 = vpmaxuw_avx(auVar22._0_16_,*pauVar4);
          auVar22 = ZEXT1664(auVar10);
          auVar20 = vpmaxuw_avx(auVar21._0_16_,pauVar4[1]);
          auVar21 = ZEXT1664(auVar20);
          auVar18 = vpmaxuw_avx(auVar19._0_16_,pauVar4[2]);
          auVar19 = ZEXT1664(auVar18);
          auVar16 = vpmaxuw_avx(auVar17._0_16_,pauVar4[3]);
          auVar17 = ZEXT1664(auVar16);
          auVar14 = vpmaxuw_avx(auVar15._0_16_,pauVar4[4]);
          auVar15 = ZEXT1664(auVar14);
          auVar12 = vpmaxuw_avx(auVar13._0_16_,pauVar4[5]);
          auVar13 = ZEXT1664(auVar12);
          auVar9 = vpmaxuw_avx(auVar11._0_16_,pauVar4[6]);
          auVar11 = ZEXT1664(auVar9);
          auVar7 = vpmaxuw_avx(auVar8._0_16_,pauVar4[7]);
          auVar8 = ZEXT1664(auVar7);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
        } while (lVar5 < param_5);
      }
      lVar3 = lVar3 + 0x40;
      param_1 = param_1 + 8;
      *param_3 = auVar10;
      param_3[1] = auVar20;
      param_3[2] = auVar18;
      param_3[3] = auVar16;
      param_3[4] = auVar14;
      param_3[5] = auVar12;
      param_3[6] = auVar9;
      param_3[7] = auVar7;
      param_3 = param_3 + 8;
    } while (lVar3 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  for (; lVar3 < (longlong)(param_4 & 0xffffffffffffffe0); lVar3 = lVar3 + 0x20) {
    lVar5 = 0;
    auVar15 = ZEXT1664((undefined1  [16])0x0);
    auVar10 = (undefined1  [16])0x0;
    auVar13 = ZEXT1664((undefined1  [16])0x0);
    auVar20 = (undefined1  [16])0x0;
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    auVar18 = (undefined1  [16])0x0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    auVar16 = (undefined1  [16])0x0;
    pauVar4 = param_1;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar10 = vpmaxuw_avx(auVar15._0_16_,*pauVar4);
        auVar15 = ZEXT1664(auVar10);
        auVar20 = vpmaxuw_avx(auVar13._0_16_,pauVar4[1]);
        auVar13 = ZEXT1664(auVar20);
        auVar18 = vpmaxuw_avx(auVar11._0_16_,pauVar4[2]);
        auVar11 = ZEXT1664(auVar18);
        auVar16 = vpmaxuw_avx(auVar8._0_16_,pauVar4[3]);
        auVar8 = ZEXT1664(auVar16);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 4;
    *param_3 = auVar10;
    param_3[1] = auVar20;
    param_3[2] = auVar18;
    param_3[3] = auVar16;
    param_3 = param_3 + 4;
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffff8); lVar3 = lVar3 + 8) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    auVar10 = (undefined1  [16])0x0;
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar10 = vpmaxuw_avx(auVar8._0_16_,*(undefined1 (*) [16])(*param_1 + lVar5 * 2));
        auVar8 = ZEXT1664(auVar10);
        lVar5 = lVar5 + param_2;
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 1;
    *param_3 = auVar10;
    param_3 = param_3 + 1;
  }
  while (lVar3 < (longlong)(param_4 & 0xfffffffffffffffc)) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    auVar10 = (undefined1  [16])0x0;
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar5);
        lVar5 = lVar5 + param_2 * 2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *puVar1;
        auVar10 = vpmaxuw_avx(auVar8._0_16_,auVar10);
        auVar8 = ZEXT1664(auVar10);
      } while (lVar6 < param_5);
    }
    lVar3 = lVar3 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar10,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffffe); lVar3 = lVar3 + 2) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    lVar5 = 0;
    if (0 < param_5) {
      do {
        auVar10 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar5 * 2),0);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + param_2;
        auVar10 = vpmaxuw_avx(auVar8._0_16_,auVar10);
        auVar8 = ZEXT1664(auVar10);
      } while (lVar6 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_3 = auVar8._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
  }
  while (lVar3 < (longlong)param_4) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    auVar10 = (undefined1  [16])0x0;
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar10 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar5 * 2),0);
        lVar5 = lVar5 + param_2;
        auVar10 = vpmaxuw_avx(auVar8._0_16_,auVar10);
        auVar8 = ZEXT1664(auVar10);
      } while (lVar6 < param_5);
    }
    lVar3 = lVar3 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar10,0);
  }
  return;
}

