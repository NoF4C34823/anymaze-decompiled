
void thunk_FUN_140d18300(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [64];
  undefined1 auVar10 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  
  lVar3 = (longlong)param_5;
  lVar4 = 0;
  if (0 < (longlong)(param_3 & 0xffffffffffffff80)) {
    do {
      lVar7 = 0;
      auVar24 = ZEXT1664((undefined1  [16])0x0);
      auVar12 = (undefined1  [16])0x0;
      auVar23 = ZEXT1664((undefined1  [16])0x0);
      auVar22 = (undefined1  [16])0x0;
      auVar21 = ZEXT1664((undefined1  [16])0x0);
      auVar20 = (undefined1  [16])0x0;
      auVar19 = ZEXT1664((undefined1  [16])0x0);
      auVar18 = (undefined1  [16])0x0;
      auVar17 = ZEXT1664((undefined1  [16])0x0);
      auVar16 = (undefined1  [16])0x0;
      auVar15 = ZEXT1664((undefined1  [16])0x0);
      auVar14 = (undefined1  [16])0x0;
      auVar13 = ZEXT1664((undefined1  [16])0x0);
      auVar11 = (undefined1  [16])0x0;
      auVar10 = ZEXT1664((undefined1  [16])0x0);
      auVar9 = (undefined1  [16])0x0;
      pauVar6 = param_1;
      if (0 < param_4) {
        do {
          lVar7 = lVar7 + 1;
          auVar12 = vpmaxub_avx(auVar24._0_16_,*pauVar6);
          auVar24 = ZEXT1664(auVar12);
          auVar22 = vpmaxub_avx(auVar23._0_16_,pauVar6[1]);
          auVar23 = ZEXT1664(auVar22);
          auVar20 = vpmaxub_avx(auVar21._0_16_,pauVar6[2]);
          auVar21 = ZEXT1664(auVar20);
          auVar18 = vpmaxub_avx(auVar19._0_16_,pauVar6[3]);
          auVar19 = ZEXT1664(auVar18);
          auVar16 = vpmaxub_avx(auVar17._0_16_,pauVar6[4]);
          auVar17 = ZEXT1664(auVar16);
          auVar14 = vpmaxub_avx(auVar15._0_16_,pauVar6[5]);
          auVar15 = ZEXT1664(auVar14);
          auVar11 = vpmaxub_avx(auVar13._0_16_,pauVar6[6]);
          auVar13 = ZEXT1664(auVar11);
          auVar9 = vpmaxub_avx(auVar10._0_16_,pauVar6[7]);
          auVar10 = ZEXT1664(auVar9);
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + lVar3);
        } while (lVar7 < param_4);
      }
      lVar4 = lVar4 + 0x80;
      param_1 = param_1 + 8;
      *param_2 = auVar12;
      param_2[1] = auVar22;
      param_2[2] = auVar20;
      param_2[3] = auVar18;
      param_2[4] = auVar16;
      param_2[5] = auVar14;
      param_2[6] = auVar11;
      param_2[7] = auVar9;
      param_2 = param_2 + 8;
    } while (lVar4 < (longlong)(param_3 & 0xffffffffffffff80));
  }
  uVar5 = param_3 & 0xffffffffffffffc0;
  if ((param_4 == 5) && (lVar4 < (longlong)uVar5)) {
    lVar7 = lVar3 * 3;
    do {
      auVar12 = vpmaxub_avx(*param_1,*(undefined1 (*) [16])(*param_1 + lVar3));
      lVar4 = lVar4 + 0x40;
      auVar22 = vpmaxub_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + lVar3));
      auVar20 = vpmaxub_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + lVar3));
      auVar18 = vpmaxub_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + lVar3));
      auVar12 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar3 * 2));
      auVar22 = vpmaxub_avx(auVar22,*(undefined1 (*) [16])(param_1[1] + lVar3 * 2));
      auVar20 = vpmaxub_avx(auVar20,*(undefined1 (*) [16])(param_1[2] + lVar3 * 2));
      auVar18 = vpmaxub_avx(auVar18,*(undefined1 (*) [16])(param_1[3] + lVar3 * 2));
      auVar12 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar7));
      auVar22 = vpmaxub_avx(auVar22,*(undefined1 (*) [16])(param_1[1] + lVar7));
      auVar20 = vpmaxub_avx(auVar20,*(undefined1 (*) [16])(param_1[2] + lVar7));
      auVar18 = vpmaxub_avx(auVar18,*(undefined1 (*) [16])(param_1[3] + lVar7));
      auVar12 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar3 * 4));
      auVar22 = vpmaxub_avx(auVar22,*(undefined1 (*) [16])(param_1[1] + lVar3 * 4));
      auVar20 = vpmaxub_avx(auVar20,*(undefined1 (*) [16])(param_1[2] + lVar3 * 4));
      auVar18 = vpmaxub_avx(auVar18,*(undefined1 (*) [16])(param_1[3] + lVar3 * 4));
      param_1 = param_1 + 4;
      *param_2 = auVar12;
      param_2[1] = auVar22;
      param_2[2] = auVar20;
      param_2[3] = auVar18;
      param_2 = param_2 + 4;
    } while (lVar4 < (longlong)uVar5);
  }
  for (; lVar4 < (longlong)uVar5; lVar4 = lVar4 + 0x40) {
    lVar7 = 0;
    auVar17 = ZEXT1664((undefined1  [16])0x0);
    auVar12 = (undefined1  [16])0x0;
    auVar15 = ZEXT1664((undefined1  [16])0x0);
    auVar22 = (undefined1  [16])0x0;
    auVar13 = ZEXT1664((undefined1  [16])0x0);
    auVar20 = (undefined1  [16])0x0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar18 = (undefined1  [16])0x0;
    pauVar6 = param_1;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        auVar12 = vpmaxub_avx(auVar17._0_16_,*pauVar6);
        auVar17 = ZEXT1664(auVar12);
        auVar22 = vpmaxub_avx(auVar15._0_16_,pauVar6[1]);
        auVar15 = ZEXT1664(auVar22);
        auVar20 = vpmaxub_avx(auVar13._0_16_,pauVar6[2]);
        auVar13 = ZEXT1664(auVar20);
        auVar18 = vpmaxub_avx(auVar10._0_16_,pauVar6[3]);
        auVar10 = ZEXT1664(auVar18);
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + lVar3);
      } while (lVar7 < param_4);
    }
    param_1 = param_1 + 4;
    *param_2 = auVar12;
    param_2[1] = auVar22;
    param_2[2] = auVar20;
    param_2[3] = auVar18;
    param_2 = param_2 + 4;
  }
  for (; lVar4 < (longlong)(param_3 & 0xffffffffffffffe0); lVar4 = lVar4 + 0x20) {
    lVar7 = 0;
    auVar13 = ZEXT1664((undefined1  [16])0x0);
    auVar12 = (undefined1  [16])0x0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar22 = (undefined1  [16])0x0;
    pauVar6 = param_1;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        auVar12 = vpmaxub_avx(auVar13._0_16_,*pauVar6);
        auVar13 = ZEXT1664(auVar12);
        auVar22 = vpmaxub_avx(auVar10._0_16_,pauVar6[1]);
        auVar10 = ZEXT1664(auVar22);
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + lVar3);
      } while (lVar7 < param_4);
    }
    param_1 = param_1 + 2;
    *param_2 = auVar12;
    param_2[1] = auVar22;
    param_2 = param_2 + 2;
  }
  for (; lVar4 < (longlong)(param_3 & 0xfffffffffffffff0); lVar4 = lVar4 + 0x10) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar12 = (undefined1  [16])0x0;
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar12 = vpmaxub_avx(auVar10._0_16_,*(undefined1 (*) [16])(*param_1 + lVar7));
        auVar10 = ZEXT1664(auVar12);
        lVar7 = lVar7 + lVar3;
      } while (lVar8 < param_4);
    }
    param_1 = param_1 + 1;
    *param_2 = auVar12;
    param_2 = param_2 + 1;
  }
  while (lVar4 < (longlong)(param_3 & 0xfffffffffffffff8)) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar12 = (undefined1  [16])0x0;
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar7);
        lVar7 = lVar7 + lVar3;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *puVar1;
        auVar12 = vpmaxub_avx(auVar10._0_16_,auVar12);
        auVar10 = ZEXT1664(auVar12);
      } while (lVar8 < param_4);
    }
    lVar4 = lVar4 + 8;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar12,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
  }
  for (; lVar4 < (longlong)(param_3 & 0xfffffffffffffffc); lVar4 = lVar4 + 4) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        auVar12 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar7),0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + lVar3;
        auVar12 = vpmaxub_avx(auVar10._0_16_,auVar12);
        auVar10 = ZEXT1664(auVar12);
      } while (lVar8 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_2 = auVar10._0_4_;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
  }
  while (lVar4 < (longlong)(param_3 & 0xfffffffffffffffe)) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar12 = (undefined1  [16])0x0;
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar12 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar7),0);
        lVar7 = lVar7 + lVar3;
        auVar12 = vpmaxub_avx(auVar10._0_16_,auVar12);
        auVar10 = ZEXT1664(auVar12);
      } while (lVar8 < param_4);
    }
    lVar4 = lVar4 + 2;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar12,0);
    param_2 = (undefined1 (*) [16])(*param_2 + 2);
  }
  for (; lVar4 < (longlong)param_3; lVar4 = lVar4 + 1) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        auVar12 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar7],0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + lVar3;
        auVar12 = vpmaxub_avx(auVar10._0_16_,auVar12);
        auVar10 = ZEXT1664(auVar12);
      } while (lVar8 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    (*param_2)[0] = auVar10[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  return;
}

