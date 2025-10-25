
void thunk_FUN_140d187c0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
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
  
  uVar5 = param_4 & 0xffffffffffffffc0;
  lVar3 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)uVar5) {
      do {
        auVar11 = vpmaxub_avx(*param_1,*(undefined1 (*) [16])(*param_1 + param_2));
        lVar3 = lVar3 + 0x40;
        auVar21 = vpmaxub_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + param_2));
        auVar19 = vpmaxub_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + param_2));
        auVar17 = vpmaxub_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + param_2));
        auVar11 = vpmaxub_avx(auVar11,*(undefined1 (*) [16])(*param_1 + param_2 * 2));
        auVar21 = vpmaxub_avx(auVar21,*(undefined1 (*) [16])(param_1[1] + param_2 * 2));
        auVar19 = vpmaxub_avx(auVar19,*(undefined1 (*) [16])(param_1[2] + param_2 * 2));
        auVar17 = vpmaxub_avx(auVar17,*(undefined1 (*) [16])(param_1[3] + param_2 * 2));
        param_1 = param_1 + 4;
        *param_3 = auVar11;
        param_3[1] = auVar21;
        param_3[2] = auVar19;
        param_3[3] = auVar17;
        param_3 = param_3 + 4;
      } while (lVar3 < (longlong)uVar5);
    }
  }
  else if ((param_5 == 5) && (0 < (longlong)uVar5)) {
    lVar6 = param_2 * 3;
    do {
      auVar11 = vpmaxub_avx(*param_1,*(undefined1 (*) [16])(*param_1 + param_2));
      lVar3 = lVar3 + 0x40;
      auVar21 = vpmaxub_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + param_2));
      auVar19 = vpmaxub_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + param_2));
      auVar17 = vpmaxub_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + param_2));
      auVar11 = vpmaxub_avx(auVar11,*(undefined1 (*) [16])(*param_1 + param_2 * 2));
      auVar21 = vpmaxub_avx(auVar21,*(undefined1 (*) [16])(param_1[1] + param_2 * 2));
      auVar19 = vpmaxub_avx(auVar19,*(undefined1 (*) [16])(param_1[2] + param_2 * 2));
      auVar17 = vpmaxub_avx(auVar17,*(undefined1 (*) [16])(param_1[3] + param_2 * 2));
      auVar11 = vpmaxub_avx(auVar11,*(undefined1 (*) [16])(*param_1 + lVar6));
      auVar21 = vpmaxub_avx(auVar21,*(undefined1 (*) [16])(param_1[1] + lVar6));
      auVar19 = vpmaxub_avx(auVar19,*(undefined1 (*) [16])(param_1[2] + lVar6));
      auVar17 = vpmaxub_avx(auVar17,*(undefined1 (*) [16])(param_1[3] + lVar6));
      auVar11 = vpmaxub_avx(auVar11,*(undefined1 (*) [16])(*param_1 + param_2 * 4));
      auVar21 = vpmaxub_avx(auVar21,*(undefined1 (*) [16])(param_1[1] + param_2 * 4));
      auVar19 = vpmaxub_avx(auVar19,*(undefined1 (*) [16])(param_1[2] + param_2 * 4));
      auVar17 = vpmaxub_avx(auVar17,*(undefined1 (*) [16])(param_1[3] + param_2 * 4));
      param_1 = param_1 + 4;
      *param_3 = auVar11;
      param_3[1] = auVar21;
      param_3[2] = auVar19;
      param_3[3] = auVar17;
      param_3 = param_3 + 4;
    } while (lVar3 < (longlong)uVar5);
  }
  for (; lVar3 < (longlong)(param_4 & 0xffffffffffffff80); lVar3 = lVar3 + 0x80) {
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
    pauVar4 = param_1;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar11 = vpmaxub_avx(auVar23._0_16_,*pauVar4);
        auVar23 = ZEXT1664(auVar11);
        auVar21 = vpmaxub_avx(auVar22._0_16_,pauVar4[1]);
        auVar22 = ZEXT1664(auVar21);
        auVar19 = vpmaxub_avx(auVar20._0_16_,pauVar4[2]);
        auVar20 = ZEXT1664(auVar19);
        auVar17 = vpmaxub_avx(auVar18._0_16_,pauVar4[3]);
        auVar18 = ZEXT1664(auVar17);
        auVar15 = vpmaxub_avx(auVar16._0_16_,pauVar4[4]);
        auVar16 = ZEXT1664(auVar15);
        auVar13 = vpmaxub_avx(auVar14._0_16_,pauVar4[5]);
        auVar14 = ZEXT1664(auVar13);
        auVar10 = vpmaxub_avx(auVar12._0_16_,pauVar4[6]);
        auVar12 = ZEXT1664(auVar10);
        auVar8 = vpmaxub_avx(auVar9._0_16_,pauVar4[7]);
        auVar9 = ZEXT1664(auVar8);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2);
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 8;
    *param_3 = auVar11;
    param_3[1] = auVar21;
    param_3[2] = auVar19;
    param_3[3] = auVar17;
    param_3[4] = auVar15;
    param_3[5] = auVar13;
    param_3[6] = auVar10;
    param_3[7] = auVar8;
    param_3 = param_3 + 8;
  }
  for (; lVar3 < (longlong)uVar5; lVar3 = lVar3 + 0x40) {
    lVar6 = 0;
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    auVar14 = ZEXT1664((undefined1  [16])0x0);
    auVar21 = (undefined1  [16])0x0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    auVar19 = (undefined1  [16])0x0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar17 = (undefined1  [16])0x0;
    pauVar4 = param_1;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar11 = vpmaxub_avx(auVar16._0_16_,*pauVar4);
        auVar16 = ZEXT1664(auVar11);
        auVar21 = vpmaxub_avx(auVar14._0_16_,pauVar4[1]);
        auVar14 = ZEXT1664(auVar21);
        auVar19 = vpmaxub_avx(auVar12._0_16_,pauVar4[2]);
        auVar12 = ZEXT1664(auVar19);
        auVar17 = vpmaxub_avx(auVar9._0_16_,pauVar4[3]);
        auVar9 = ZEXT1664(auVar17);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2);
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 4;
    *param_3 = auVar11;
    param_3[1] = auVar21;
    param_3[2] = auVar19;
    param_3[3] = auVar17;
    param_3 = param_3 + 4;
  }
  for (; lVar3 < (longlong)(param_4 & 0xffffffffffffffe0); lVar3 = lVar3 + 0x20) {
    lVar6 = 0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar21 = (undefined1  [16])0x0;
    pauVar4 = param_1;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar11 = vpmaxub_avx(auVar12._0_16_,*pauVar4);
        auVar12 = ZEXT1664(auVar11);
        auVar21 = vpmaxub_avx(auVar9._0_16_,pauVar4[1]);
        auVar9 = ZEXT1664(auVar21);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2);
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 2;
    *param_3 = auVar11;
    param_3[1] = auVar21;
    param_3 = param_3 + 2;
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffff0); lVar3 = lVar3 + 0x10) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar6 = 0;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar11 = vpmaxub_avx(auVar9._0_16_,*(undefined1 (*) [16])(*param_1 + lVar6));
        auVar9 = ZEXT1664(auVar11);
        lVar6 = lVar6 + param_2;
      } while (lVar7 < param_5);
    }
    param_1 = param_1 + 1;
    *param_3 = auVar11;
    param_3 = param_3 + 1;
  }
  while (lVar3 < (longlong)(param_4 & 0xfffffffffffffff8)) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar6 = 0;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar6);
        lVar6 = lVar6 + param_2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar1;
        auVar11 = vpmaxub_avx(auVar9._0_16_,auVar11);
        auVar9 = ZEXT1664(auVar11);
      } while (lVar7 < param_5);
    }
    lVar3 = lVar3 + 8;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar11,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffffc); lVar3 = lVar3 + 4) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        auVar11 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar6),0);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + param_2;
        auVar11 = vpmaxub_avx(auVar9._0_16_,auVar11);
        auVar9 = ZEXT1664(auVar11);
      } while (lVar7 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_3 = auVar9._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
  }
  while (lVar3 < (longlong)(param_4 & 0xfffffffffffffffe)) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar6 = 0;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar11 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar6),0);
        lVar6 = lVar6 + param_2;
        auVar11 = vpmaxub_avx(auVar9._0_16_,auVar11);
        auVar9 = ZEXT1664(auVar11);
      } while (lVar7 < param_5);
    }
    lVar3 = lVar3 + 2;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar11,0);
    param_3 = (undefined1 (*) [16])(*param_3 + 2);
  }
  for (; lVar3 < (longlong)param_4; lVar3 = lVar3 + 1) {
    lVar7 = 0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        auVar11 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar6],0);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + param_2;
        auVar11 = vpmaxub_avx(auVar9._0_16_,auVar11);
        auVar9 = ZEXT1664(auVar11);
      } while (lVar7 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    (*param_3)[0] = auVar9[0];
    param_3 = (undefined1 (*) [16])(*param_3 + 1);
  }
  return;
}

