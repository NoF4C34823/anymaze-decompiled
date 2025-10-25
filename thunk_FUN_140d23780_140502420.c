
void thunk_FUN_140d23780(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [32];
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  undefined1 auVar18 [32];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  
  uVar7 = param_3 & 0xffffffffffffff80;
  lVar5 = (longlong)param_5;
  lVar6 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar7) {
      do {
        auVar18 = vpmaxub_avx2((undefined1  [32])0x0,*param_1);
        lVar6 = lVar6 + 0x80;
        auVar16 = vpmaxub_avx2((undefined1  [32])0x0,param_1[1]);
        auVar14 = vpmaxub_avx2((undefined1  [32])0x0,param_1[2]);
        auVar11 = vpmaxub_avx2((undefined1  [32])0x0,param_1[3]);
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + lVar5));
        auVar11 = vpmaxub_avx2(auVar11,*(undefined1 (*) [32])(param_1[3] + lVar5));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 2));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + lVar5 * 2));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 2));
        auVar11 = vpmaxub_avx2(auVar11,*(undefined1 (*) [32])(param_1[3] + lVar5 * 2));
        param_1 = param_1 + 4;
        *param_2 = auVar18;
        param_2[1] = auVar16;
        param_2[2] = auVar14;
        param_2[3] = auVar11;
        param_2 = param_2 + 4;
      } while (lVar6 < (longlong)uVar7);
    }
    while (lVar6 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      auVar18 = vpmaxub_avx2((undefined1  [32])0x0,*param_1);
      lVar6 = lVar6 + 0x40;
      auVar16 = vpmaxub_avx2((undefined1  [32])0x0,param_1[1]);
      auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5));
      auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5));
      auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 2));
      auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 2));
      param_1 = param_1 + 2;
      *param_2 = auVar18;
      param_2[1] = auVar16;
      param_2 = param_2 + 2;
    }
    while (lVar6 < (longlong)(param_3 & 0xffffffffffffffe0)) {
      auVar18 = vpmaxub_avx2((undefined1  [32])0x0,*param_1);
      lVar6 = lVar6 + 0x20;
      auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5));
      auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 2));
      param_1 = param_1 + 1;
      *param_2 = auVar18;
      param_2 = param_2 + 1;
    }
  }
  else if (param_4 == 5) {
    uVar3 = 0;
    if (0 < (longlong)uVar7) {
      uVar9 = (ulonglong)((longlong)(uVar7 + 0x7f) >> 6) >> 0x39;
      lVar6 = (uVar9 + 0xff + uVar7 & 0xffffffffffffff80) - 0x80;
      lVar8 = 0;
      do {
        auVar18 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(*param_1 + lVar8));
        uVar3 = uVar3 + 1;
        auVar16 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(param_1[1] + lVar8));
        auVar14 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(param_1[2] + lVar8));
        auVar11 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(param_1[3] + lVar8));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar8 + lVar5));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 + lVar8));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + lVar5 + lVar8));
        auVar11 = vpmaxub_avx2(auVar11,*(undefined1 (*) [32])(param_1[3] + lVar5 + lVar8));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar8 + lVar5 * 2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 2 + lVar8));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + lVar5 * 2 + lVar8));
        auVar11 = vpmaxub_avx2(auVar11,*(undefined1 (*) [32])(param_1[3] + lVar5 * 2 + lVar8));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar8 + lVar5 * 3));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 3 + lVar8));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + lVar5 * 3 + lVar8));
        auVar11 = vpmaxub_avx2(auVar11,*(undefined1 (*) [32])(param_1[3] + lVar5 * 3 + lVar8));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar8 + lVar5 * 4));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + lVar5 * 4 + lVar8));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 4 + lVar8));
        auVar11 = vpmaxub_avx2(auVar11,*(undefined1 (*) [32])(param_1[3] + lVar5 * 4 + lVar8));
        *(undefined1 (*) [32])(*param_2 + lVar8) = auVar18;
        *(undefined1 (*) [32])(param_2[1] + lVar8) = auVar16;
        *(undefined1 (*) [32])(param_2[2] + lVar8) = auVar14;
        *(undefined1 (*) [32])(param_2[3] + lVar8) = auVar11;
        lVar8 = lVar8 + 0x80;
      } while (uVar3 < (ulonglong)((longlong)(uVar9 + 0x7f + uVar7) >> 7));
      param_1 = param_1 + uVar3 * 4;
      param_2 = param_2 + uVar3 * 4;
    }
    if (lVar6 < (longlong)(param_3 & 0xffffffffffffffc0)) {
      do {
        auVar18 = vpmaxub_avx2((undefined1  [32])0x0,*param_1);
        lVar6 = lVar6 + 0x40;
        auVar16 = vpmaxub_avx2((undefined1  [32])0x0,param_1[1]);
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 2));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 3));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 3));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 4));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + lVar5 * 4));
        param_1 = param_1 + 2;
        *param_2 = auVar18;
        param_2[1] = auVar16;
        param_2 = param_2 + 2;
      } while (lVar6 < (longlong)(param_3 & 0xffffffffffffffc0));
    }
    if (lVar6 < (longlong)(param_3 & 0xffffffffffffffe0)) {
      do {
        auVar18 = vpmaxub_avx2((undefined1  [32])0x0,*param_1);
        lVar6 = lVar6 + 0x20;
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 2));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 3));
        auVar18 = vpmaxub_avx2(auVar18,*(undefined1 (*) [32])(*param_1 + lVar5 * 4));
        param_1 = param_1 + 1;
        *param_2 = auVar18;
        param_2 = param_2 + 1;
      } while (lVar6 < (longlong)(param_3 & 0xffffffffffffffe0));
    }
  }
  else {
    if (0 < (longlong)uVar7) {
      do {
        lVar8 = 0;
        auVar19 = ZEXT3264((undefined1  [32])0x0);
        auVar18 = (undefined1  [32])0x0;
        auVar17 = ZEXT3264((undefined1  [32])0x0);
        auVar16 = (undefined1  [32])0x0;
        auVar15 = ZEXT3264((undefined1  [32])0x0);
        auVar14 = (undefined1  [32])0x0;
        auVar12 = ZEXT3264((undefined1  [32])0x0);
        auVar11 = (undefined1  [32])0x0;
        pauVar4 = param_1;
        if (0 < param_4) {
          do {
            lVar8 = lVar8 + 1;
            auVar18 = vpmaxub_avx2(auVar19._0_32_,*pauVar4);
            auVar19 = ZEXT3264(auVar18);
            auVar16 = vpmaxub_avx2(auVar17._0_32_,pauVar4[1]);
            auVar17 = ZEXT3264(auVar16);
            auVar14 = vpmaxub_avx2(auVar15._0_32_,pauVar4[2]);
            auVar15 = ZEXT3264(auVar14);
            auVar11 = vpmaxub_avx2(auVar12._0_32_,pauVar4[3]);
            auVar12 = ZEXT3264(auVar11);
            pauVar4 = (undefined1 (*) [32])(*pauVar4 + lVar5);
          } while (lVar8 < param_4);
        }
        lVar6 = lVar6 + 0x80;
        param_1 = param_1 + 4;
        *param_2 = auVar18;
        param_2[1] = auVar16;
        param_2[2] = auVar14;
        param_2[3] = auVar11;
        param_2 = param_2 + 4;
      } while (lVar6 < (longlong)uVar7);
    }
    for (; lVar6 < (longlong)(param_3 & 0xffffffffffffffe0); lVar6 = lVar6 + 0x20) {
      lVar10 = 0;
      auVar12 = ZEXT3264((undefined1  [32])0x0);
      auVar18 = (undefined1  [32])0x0;
      lVar8 = 0;
      if (0 < param_4) {
        do {
          lVar10 = lVar10 + 1;
          auVar18 = vpmaxub_avx2(auVar12._0_32_,*(undefined1 (*) [32])(*param_1 + lVar8));
          auVar12 = ZEXT3264(auVar18);
          lVar8 = lVar8 + lVar5;
        } while (lVar10 < param_4);
      }
      param_1 = param_1 + 1;
      *param_2 = auVar18;
      param_2 = param_2 + 1;
    }
  }
  for (; lVar6 < (longlong)(param_3 & 0xfffffffffffffff0); lVar6 = lVar6 + 0x10) {
    lVar10 = 0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    auVar13 = (undefined1  [16])0x0;
    lVar8 = 0;
    if (0 < param_4) {
      do {
        lVar10 = lVar10 + 1;
        auVar13 = vpmaxub_avx(auVar12._0_16_,*(undefined1 (*) [16])(*param_1 + lVar8));
        auVar12 = ZEXT1664(auVar13);
        lVar8 = lVar8 + lVar5;
      } while (lVar10 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_2 = auVar13;
    param_2 = (undefined1 (*) [32])(*param_2 + 0x10);
  }
  while (lVar6 < (longlong)(param_3 & 0xfffffffffffffff8)) {
    lVar10 = 0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    auVar13 = (undefined1  [16])0x0;
    lVar8 = 0;
    if (0 < param_4) {
      do {
        lVar10 = lVar10 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar8);
        lVar8 = lVar8 + lVar5;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar1;
        auVar13 = vpmaxub_avx(auVar12._0_16_,auVar13);
        auVar12 = ZEXT1664(auVar13);
      } while (lVar10 < param_4);
    }
    lVar6 = lVar6 + 8;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar13,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [32])(*param_2 + 8);
  }
  for (; lVar6 < (longlong)(param_3 & 0xfffffffffffffffc); lVar6 = lVar6 + 4) {
    lVar10 = 0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    lVar8 = 0;
    if (0 < param_4) {
      do {
        auVar13 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar8),0);
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + lVar5;
        auVar13 = vpmaxub_avx(auVar12._0_16_,auVar13);
        auVar12 = ZEXT1664(auVar13);
      } while (lVar10 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_2 = auVar12._0_4_;
    param_2 = (undefined1 (*) [32])(*param_2 + 4);
  }
  while (lVar6 < (longlong)(param_3 & 0xfffffffffffffffe)) {
    lVar10 = 0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    auVar13 = (undefined1  [16])0x0;
    lVar8 = 0;
    if (0 < param_4) {
      do {
        lVar10 = lVar10 + 1;
        auVar13 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar8),0);
        lVar8 = lVar8 + lVar5;
        auVar13 = vpmaxub_avx(auVar12._0_16_,auVar13);
        auVar12 = ZEXT1664(auVar13);
      } while (lVar10 < param_4);
    }
    lVar6 = lVar6 + 2;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(auVar13,0);
    param_2 = (undefined1 (*) [32])(*param_2 + 2);
  }
  for (; lVar6 < (longlong)param_3; lVar6 = lVar6 + 1) {
    lVar10 = 0;
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    lVar8 = 0;
    if (0 < param_4) {
      do {
        auVar13 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar8],0);
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + lVar5;
        auVar13 = vpmaxub_avx(auVar12._0_16_,auVar13);
        auVar12 = ZEXT1664(auVar13);
      } while (lVar10 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 1);
    (*param_2)[0] = auVar12[0];
    param_2 = (undefined1 (*) [32])(*param_2 + 1);
  }
  return;
}

