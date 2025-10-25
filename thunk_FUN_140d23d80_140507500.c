
void thunk_FUN_140d23d80(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [32];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar21 [64];
  undefined1 auVar17 [64];
  undefined1 auVar20 [64];
  
  uVar6 = param_4 & 0xffffffffffffff80;
  lVar5 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)uVar6) {
      do {
        auVar19 = vpmaxub_avx2((undefined1  [32])0x0,*param_1);
        lVar5 = lVar5 + 0x80;
        auVar16 = vpmaxub_avx2((undefined1  [32])0x0,param_1[1]);
        auVar14 = vpmaxub_avx2((undefined1  [32])0x0,param_1[2]);
        auVar10 = vpmaxub_avx2((undefined1  [32])0x0,param_1[3]);
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + param_2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + param_2));
        auVar10 = vpmaxub_avx2(auVar10,*(undefined1 (*) [32])(param_1[3] + param_2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + param_2 * 2));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + param_2 * 2));
        auVar10 = vpmaxub_avx2(auVar10,*(undefined1 (*) [32])(param_1[3] + param_2 * 2));
        param_1 = param_1 + 4;
        *param_3 = auVar19;
        param_3[1] = auVar16;
        param_3[2] = auVar14;
        param_3[3] = auVar10;
        param_3 = param_3 + 4;
      } while (lVar5 < (longlong)uVar6);
    }
    while (lVar5 < (longlong)(param_4 & 0xffffffffffffffc0)) {
      lVar5 = lVar5 + 0x40;
      auVar19 = vpmaxub_avx2(*param_1,*(undefined1 (*) [32])(*param_1 + param_2));
      auVar16 = vpmaxub_avx2(param_1[1],*(undefined1 (*) [32])(param_1[1] + param_2));
      auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + param_2 * 2));
      auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
      param_1 = param_1 + 2;
      *param_3 = auVar19;
      param_3[1] = auVar16;
      param_3 = param_3 + 2;
    }
  }
  else if (param_5 == 5) {
    uVar3 = 0;
    if (0 < (longlong)uVar6) {
      uVar7 = (ulonglong)((longlong)(uVar6 + 0x7f) >> 6) >> 0x39;
      lVar5 = (uVar7 + 0xff + uVar6 & 0xffffffffffffff80) - 0x80;
      lVar8 = 0;
      do {
        auVar19 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(*param_1 + lVar8));
        uVar3 = uVar3 + 1;
        auVar16 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(param_1[1] + lVar8));
        auVar14 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(param_1[2] + lVar8));
        auVar10 = vpmaxub_avx2((undefined1  [32])0x0,*(undefined1 (*) [32])(param_1[3] + lVar8));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + lVar8 + param_2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 + lVar8));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + param_2 + lVar8));
        auVar10 = vpmaxub_avx2(auVar10,*(undefined1 (*) [32])(param_1[3] + param_2 + lVar8));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + lVar8 + param_2 * 2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 2 + lVar8));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + param_2 * 2 + lVar8));
        auVar10 = vpmaxub_avx2(auVar10,*(undefined1 (*) [32])(param_1[3] + param_2 * 2 + lVar8));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + lVar8 + param_2 * 3));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 3 + lVar8));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + param_2 * 3 + lVar8));
        auVar10 = vpmaxub_avx2(auVar10,*(undefined1 (*) [32])(param_1[3] + param_2 * 3 + lVar8));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + lVar8 + param_2 * 4));
        auVar14 = vpmaxub_avx2(auVar14,*(undefined1 (*) [32])(param_1[2] + param_2 * 4 + lVar8));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 4 + lVar8));
        auVar10 = vpmaxub_avx2(auVar10,*(undefined1 (*) [32])(param_1[3] + param_2 * 4 + lVar8));
        *(undefined1 (*) [32])(*param_3 + lVar8) = auVar19;
        *(undefined1 (*) [32])(param_3[1] + lVar8) = auVar16;
        *(undefined1 (*) [32])(param_3[2] + lVar8) = auVar14;
        *(undefined1 (*) [32])(param_3[3] + lVar8) = auVar10;
        lVar8 = lVar8 + 0x80;
      } while (uVar3 < (ulonglong)((longlong)(uVar7 + 0x7f + uVar6) >> 7));
      param_1 = param_1 + uVar3 * 4;
      param_3 = param_3 + uVar3 * 4;
    }
    if (lVar5 < (longlong)(param_4 & 0xffffffffffffffc0)) {
      do {
        auVar19 = vpmaxub_avx2((undefined1  [32])0x0,*param_1);
        lVar5 = lVar5 + 0x40;
        auVar16 = vpmaxub_avx2((undefined1  [32])0x0,param_1[1]);
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + param_2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + param_2 * 2));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 2));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + param_2 * 3));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 3));
        auVar19 = vpmaxub_avx2(auVar19,*(undefined1 (*) [32])(*param_1 + param_2 * 4));
        auVar16 = vpmaxub_avx2(auVar16,*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
        param_1 = param_1 + 2;
        *param_3 = auVar19;
        param_3[1] = auVar16;
        param_3 = param_3 + 2;
      } while (lVar5 < (longlong)(param_4 & 0xffffffffffffffc0));
    }
  }
  else {
    if (0 < (longlong)uVar6) {
      do {
        lVar8 = 0;
        auVar21 = ZEXT3264((undefined1  [32])0x0);
        auVar19 = (undefined1  [32])0x0;
        auVar20 = ZEXT3264((undefined1  [32])0x0);
        auVar16 = (undefined1  [32])0x0;
        auVar17 = ZEXT3264((undefined1  [32])0x0);
        auVar14 = (undefined1  [32])0x0;
        auVar11 = ZEXT3264((undefined1  [32])0x0);
        auVar10 = (undefined1  [32])0x0;
        pauVar4 = param_1;
        if (0 < param_5) {
          do {
            lVar8 = lVar8 + 1;
            auVar19 = vpmaxub_avx2(auVar21._0_32_,*pauVar4);
            auVar21 = ZEXT3264(auVar19);
            auVar16 = vpmaxub_avx2(auVar20._0_32_,pauVar4[1]);
            auVar20 = ZEXT3264(auVar16);
            auVar14 = vpmaxub_avx2(auVar17._0_32_,pauVar4[2]);
            auVar17 = ZEXT3264(auVar14);
            auVar10 = vpmaxub_avx2(auVar11._0_32_,pauVar4[3]);
            auVar11 = ZEXT3264(auVar10);
            pauVar4 = (undefined1 (*) [32])(*pauVar4 + param_2);
          } while (lVar8 < param_5);
        }
        lVar5 = lVar5 + 0x80;
        param_1 = param_1 + 4;
        *param_3 = auVar19;
        param_3[1] = auVar16;
        param_3[2] = auVar14;
        param_3[3] = auVar10;
        param_3 = param_3 + 4;
      } while (lVar5 < (longlong)uVar6);
    }
    for (; lVar5 < (longlong)(param_4 & 0xffffffffffffffc0); lVar5 = lVar5 + 0x40) {
      lVar8 = 0;
      auVar17 = ZEXT3264((undefined1  [32])0x0);
      auVar19 = (undefined1  [32])0x0;
      auVar11 = ZEXT3264((undefined1  [32])0x0);
      auVar16 = (undefined1  [32])0x0;
      pauVar4 = param_1;
      if (0 < param_5) {
        do {
          lVar8 = lVar8 + 1;
          auVar19 = vpmaxub_avx2(auVar17._0_32_,*pauVar4);
          auVar17 = ZEXT3264(auVar19);
          auVar16 = vpmaxub_avx2(auVar11._0_32_,pauVar4[1]);
          auVar11 = ZEXT3264(auVar16);
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + param_2);
        } while (lVar8 < param_5);
      }
      param_1 = param_1 + 2;
      *param_3 = auVar19;
      param_3[1] = auVar16;
      param_3 = param_3 + 2;
    }
  }
  for (; lVar5 < (longlong)(param_4 & 0xffffffffffffffe0); lVar5 = lVar5 + 0x20) {
    lVar9 = 0;
    auVar11 = ZEXT3264((undefined1  [32])0x0);
    auVar19 = (undefined1  [32])0x0;
    lVar8 = 0;
    if (0 < param_5) {
      do {
        lVar9 = lVar9 + 1;
        auVar19 = vpmaxub_avx2(auVar11._0_32_,*(undefined1 (*) [32])(*param_1 + lVar8));
        auVar11 = ZEXT3264(auVar19);
        lVar8 = lVar8 + param_2;
      } while (lVar9 < param_5);
    }
    param_1 = param_1 + 1;
    *param_3 = auVar19;
    param_3 = param_3 + 1;
  }
  if (lVar5 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    do {
      auVar21 = ZEXT1664((undefined1  [16])0x0);
      auVar13 = (undefined1  [16])0x0;
      lVar8 = 0;
      auVar20 = ZEXT1664((undefined1  [16])0x0);
      auVar18 = (undefined1  [16])0x0;
      auVar17 = ZEXT1664((undefined1  [16])0x0);
      auVar15 = (undefined1  [16])0x0;
      auVar11 = ZEXT1664((undefined1  [16])0x0);
      auVar12 = (undefined1  [16])0x0;
      pauVar4 = param_1;
      if (0 < param_5) {
        do {
          lVar8 = lVar8 + 1;
          auVar13 = vpmaxub_avx(auVar21._0_16_,*(undefined1 (*) [16])*pauVar4);
          auVar21 = ZEXT1664(auVar13);
          auVar18 = vpmaxub_avx(auVar20._0_16_,*(undefined1 (*) [16])(*pauVar4 + 0x10));
          auVar20 = ZEXT1664(auVar18);
          auVar15 = vpmaxub_avx(auVar17._0_16_,*(undefined1 (*) [16])pauVar4[1]);
          auVar17 = ZEXT1664(auVar15);
          auVar12 = vpmaxub_avx(auVar11._0_16_,*(undefined1 (*) [16])(pauVar4[1] + 0x10));
          auVar11 = ZEXT1664(auVar12);
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + param_2);
        } while (lVar8 < param_5);
      }
      lVar5 = lVar5 + 0x40;
      param_1 = param_1 + 2;
      *(undefined1 (*) [16])*param_3 = auVar13;
      *(undefined1 (*) [16])(*param_3 + 0x10) = auVar18;
      *(undefined1 (*) [16])param_3[1] = auVar15;
      *(undefined1 (*) [16])(param_3[1] + 0x10) = auVar12;
      param_3 = param_3 + 2;
    } while (lVar5 < (longlong)(param_4 & 0xffffffffffffffc0));
    for (; lVar5 < (longlong)(param_4 & 0xffffffffffffffe0); lVar5 = lVar5 + 0x20) {
      auVar17 = ZEXT1664((undefined1  [16])0x0);
      auVar13 = (undefined1  [16])0x0;
      lVar8 = 0;
      auVar11 = ZEXT1664((undefined1  [16])0x0);
      auVar18 = (undefined1  [16])0x0;
      pauVar4 = param_1;
      if (0 < param_5) {
        do {
          lVar8 = lVar8 + 1;
          auVar13 = vpmaxub_avx(auVar17._0_16_,*(undefined1 (*) [16])*pauVar4);
          auVar17 = ZEXT1664(auVar13);
          auVar18 = vpmaxub_avx(auVar11._0_16_,*(undefined1 (*) [16])(*pauVar4 + 0x10));
          auVar11 = ZEXT1664(auVar18);
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + param_2);
        } while (lVar8 < param_5);
      }
      param_1 = param_1 + 1;
      *(undefined1 (*) [16])*param_3 = auVar13;
      *(undefined1 (*) [16])(*param_3 + 0x10) = auVar18;
      param_3 = param_3 + 1;
    }
  }
  for (; lVar5 < (longlong)(param_4 & 0xfffffffffffffff0); lVar5 = lVar5 + 0x10) {
    lVar9 = 0;
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    auVar13 = (undefined1  [16])0x0;
    lVar8 = 0;
    if (0 < param_5) {
      do {
        lVar9 = lVar9 + 1;
        auVar13 = vpmaxub_avx(auVar11._0_16_,*(undefined1 (*) [16])(*param_1 + lVar8));
        auVar11 = ZEXT1664(auVar13);
        lVar8 = lVar8 + param_2;
      } while (lVar9 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_3 = auVar13;
    param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
  }
  while (lVar5 < (longlong)(param_4 & 0xfffffffffffffff8)) {
    lVar9 = 0;
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    auVar13 = (undefined1  [16])0x0;
    lVar8 = 0;
    if (0 < param_5) {
      do {
        lVar9 = lVar9 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar8);
        lVar8 = lVar8 + param_2;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar1;
        auVar13 = vpmaxub_avx(auVar11._0_16_,auVar13);
        auVar11 = ZEXT1664(auVar13);
      } while (lVar9 < param_5);
    }
    lVar5 = lVar5 + 8;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar13,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [32])(*param_3 + 8);
  }
  for (; lVar5 < (longlong)(param_4 & 0xfffffffffffffffc); lVar5 = lVar5 + 4) {
    lVar9 = 0;
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    lVar8 = 0;
    if (0 < param_5) {
      do {
        auVar13 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar8),0);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + param_2;
        auVar13 = vpmaxub_avx(auVar11._0_16_,auVar13);
        auVar11 = ZEXT1664(auVar13);
      } while (lVar9 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_3 = auVar11._0_4_;
    param_3 = (undefined1 (*) [32])(*param_3 + 4);
  }
  while (lVar5 < (longlong)(param_4 & 0xfffffffffffffffe)) {
    lVar9 = 0;
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    auVar13 = (undefined1  [16])0x0;
    lVar8 = 0;
    if (0 < param_5) {
      do {
        lVar9 = lVar9 + 1;
        auVar13 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar8),0);
        lVar8 = lVar8 + param_2;
        auVar13 = vpmaxub_avx(auVar11._0_16_,auVar13);
        auVar11 = ZEXT1664(auVar13);
      } while (lVar9 < param_5);
    }
    lVar5 = lVar5 + 2;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(auVar13,0);
    param_3 = (undefined1 (*) [32])(*param_3 + 2);
  }
  for (; lVar5 < (longlong)param_4; lVar5 = lVar5 + 1) {
    lVar9 = 0;
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    lVar8 = 0;
    if (0 < param_5) {
      do {
        auVar13 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar8],0);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + param_2;
        auVar13 = vpmaxub_avx(auVar11._0_16_,auVar13);
        auVar11 = ZEXT1664(auVar13);
      } while (lVar9 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 1);
    (*param_3)[0] = auVar11[0];
    param_3 = (undefined1 (*) [32])(*param_3 + 1);
  }
  return;
}

