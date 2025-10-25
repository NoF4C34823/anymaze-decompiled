
void thunk_FUN_140d28440(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  undefined1 auVar10 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  
  uVar5 = param_3 & 0xffffffffffffffc0;
  lVar3 = (longlong)param_5;
  lVar4 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar5) {
      do {
        auVar16 = vpmaxuw_avx2((undefined1  [32])0x0,*param_1);
        lVar4 = lVar4 + 0x40;
        auVar14 = vpmaxuw_avx2((undefined1  [32])0x0,param_1[1]);
        auVar12 = vpmaxuw_avx2((undefined1  [32])0x0,param_1[2]);
        auVar9 = vpmaxuw_avx2((undefined1  [32])0x0,param_1[3]);
        auVar16 = vpmaxuw_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar3 * 2));
        auVar14 = vpmaxuw_avx2(auVar14,*(undefined1 (*) [32])(param_1[1] + lVar3 * 2));
        auVar12 = vpmaxuw_avx2(auVar12,*(undefined1 (*) [32])(param_1[2] + lVar3 * 2));
        auVar9 = vpmaxuw_avx2(auVar9,*(undefined1 (*) [32])(param_1[3] + lVar3 * 2));
        auVar14 = vpmaxuw_avx2(auVar14,*(undefined1 (*) [32])(param_1[1] + lVar3 * 4));
        auVar12 = vpmaxuw_avx2(auVar12,*(undefined1 (*) [32])(param_1[2] + lVar3 * 4));
        auVar16 = vpmaxuw_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar3 * 4));
        auVar9 = vpmaxuw_avx2(auVar9,*(undefined1 (*) [32])(param_1[3] + lVar3 * 4));
        param_1 = param_1 + 4;
        *param_2 = auVar16;
        param_2[1] = auVar14;
        param_2[2] = auVar12;
        param_2[3] = auVar9;
        param_2 = param_2 + 4;
      } while (lVar4 < (longlong)uVar5);
    }
  }
  else if ((param_4 == 5) && (0 < (longlong)uVar5)) {
    do {
      auVar16 = vpmaxuw_avx2((undefined1  [32])0x0,*param_1);
      lVar4 = lVar4 + 0x40;
      auVar14 = vpmaxuw_avx2((undefined1  [32])0x0,param_1[1]);
      auVar12 = vpmaxuw_avx2((undefined1  [32])0x0,param_1[2]);
      auVar9 = vpmaxuw_avx2((undefined1  [32])0x0,param_1[3]);
      auVar16 = vpmaxuw_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar3 * 2));
      auVar14 = vpmaxuw_avx2(auVar14,*(undefined1 (*) [32])(param_1[1] + lVar3 * 2));
      auVar12 = vpmaxuw_avx2(auVar12,*(undefined1 (*) [32])(param_1[2] + lVar3 * 2));
      auVar9 = vpmaxuw_avx2(auVar9,*(undefined1 (*) [32])(param_1[3] + lVar3 * 2));
      auVar16 = vpmaxuw_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar3 * 4));
      auVar14 = vpmaxuw_avx2(auVar14,*(undefined1 (*) [32])(param_1[1] + lVar3 * 4));
      auVar12 = vpmaxuw_avx2(auVar12,*(undefined1 (*) [32])(param_1[2] + lVar3 * 4));
      auVar9 = vpmaxuw_avx2(auVar9,*(undefined1 (*) [32])(param_1[3] + lVar3 * 4));
      auVar16 = vpmaxuw_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar3 * 6));
      auVar14 = vpmaxuw_avx2(auVar14,*(undefined1 (*) [32])(param_1[1] + lVar3 * 6));
      auVar12 = vpmaxuw_avx2(auVar12,*(undefined1 (*) [32])(param_1[2] + lVar3 * 6));
      auVar9 = vpmaxuw_avx2(auVar9,*(undefined1 (*) [32])(param_1[3] + lVar3 * 6));
      auVar16 = vpmaxuw_avx2(auVar16,*(undefined1 (*) [32])(*param_1 + lVar3 * 8));
      auVar12 = vpmaxuw_avx2(auVar12,*(undefined1 (*) [32])(param_1[2] + lVar3 * 8));
      auVar14 = vpmaxuw_avx2(auVar14,*(undefined1 (*) [32])(param_1[1] + lVar3 * 8));
      auVar9 = vpmaxuw_avx2(auVar9,*(undefined1 (*) [32])(param_1[3] + lVar3 * 8));
      param_1 = param_1 + 4;
      *param_2 = auVar16;
      param_2[1] = auVar14;
      param_2[2] = auVar12;
      param_2[3] = auVar9;
      param_2 = param_2 + 4;
    } while (lVar4 < (longlong)uVar5);
  }
  for (; lVar4 < (longlong)uVar5; lVar4 = lVar4 + 0x40) {
    lVar7 = 0;
    auVar17 = ZEXT3264((undefined1  [32])0x0);
    auVar16 = (undefined1  [32])0x0;
    auVar15 = ZEXT3264((undefined1  [32])0x0);
    auVar14 = (undefined1  [32])0x0;
    auVar13 = ZEXT3264((undefined1  [32])0x0);
    auVar12 = (undefined1  [32])0x0;
    auVar10 = ZEXT3264((undefined1  [32])0x0);
    auVar9 = (undefined1  [32])0x0;
    pauVar6 = param_1;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        auVar16 = vpmaxuw_avx2(auVar17._0_32_,*pauVar6);
        auVar17 = ZEXT3264(auVar16);
        auVar14 = vpmaxuw_avx2(auVar15._0_32_,pauVar6[1]);
        auVar15 = ZEXT3264(auVar14);
        auVar12 = vpmaxuw_avx2(auVar13._0_32_,pauVar6[2]);
        auVar13 = ZEXT3264(auVar12);
        auVar9 = vpmaxuw_avx2(auVar10._0_32_,pauVar6[3]);
        auVar10 = ZEXT3264(auVar9);
        pauVar6 = (undefined1 (*) [32])(*pauVar6 + lVar3 * 2);
      } while (lVar7 < param_4);
    }
    param_1 = param_1 + 4;
    *param_2 = auVar16;
    param_2[1] = auVar14;
    param_2[2] = auVar12;
    param_2[3] = auVar9;
    param_2 = param_2 + 4;
  }
  for (; lVar4 < (longlong)(param_3 & 0xffffffffffffffe0); lVar4 = lVar4 + 0x20) {
    lVar7 = 0;
    auVar13 = ZEXT3264((undefined1  [32])0x0);
    auVar16 = (undefined1  [32])0x0;
    auVar10 = ZEXT3264((undefined1  [32])0x0);
    auVar14 = (undefined1  [32])0x0;
    pauVar6 = param_1;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        auVar16 = vpmaxuw_avx2(auVar13._0_32_,*pauVar6);
        auVar13 = ZEXT3264(auVar16);
        auVar14 = vpmaxuw_avx2(auVar10._0_32_,pauVar6[1]);
        auVar10 = ZEXT3264(auVar14);
        pauVar6 = (undefined1 (*) [32])(*pauVar6 + lVar3 * 2);
      } while (lVar7 < param_4);
    }
    param_1 = param_1 + 2;
    *param_2 = auVar16;
    param_2[1] = auVar14;
    param_2 = param_2 + 2;
  }
  for (; lVar4 < (longlong)(param_3 & 0xfffffffffffffff0); lVar4 = lVar4 + 0x10) {
    lVar8 = 0;
    auVar10 = ZEXT3264((undefined1  [32])0x0);
    auVar16 = (undefined1  [32])0x0;
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar16 = vpmaxuw_avx2(auVar10._0_32_,*(undefined1 (*) [32])(*param_1 + lVar7 * 2));
        auVar10 = ZEXT3264(auVar16);
        lVar7 = lVar7 + lVar3;
      } while (lVar8 < param_4);
    }
    param_1 = param_1 + 1;
    *param_2 = auVar16;
    param_2 = param_2 + 1;
  }
  for (; lVar4 < (longlong)(param_3 & 0xfffffffffffffff8); lVar4 = lVar4 + 8) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar11 = vpmaxuw_avx(auVar10._0_16_,*(undefined1 (*) [16])(*param_1 + lVar7 * 2));
        auVar10 = ZEXT1664(auVar11);
        lVar7 = lVar7 + lVar3;
      } while (lVar8 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_2 = auVar11;
    param_2 = (undefined1 (*) [32])(*param_2 + 0x10);
  }
  while (lVar4 < (longlong)(param_3 & 0xfffffffffffffffc)) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar7);
        lVar7 = lVar7 + lVar3 * 2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar1;
        auVar11 = vpmaxuw_avx(auVar10._0_16_,auVar11);
        auVar10 = ZEXT1664(auVar11);
      } while (lVar8 < param_4);
    }
    lVar4 = lVar4 + 4;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar11,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [32])(*param_2 + 8);
  }
  for (; lVar4 < (longlong)(param_3 & 0xfffffffffffffffe); lVar4 = lVar4 + 2) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        auVar11 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar7 * 2),0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + lVar3;
        auVar11 = vpmaxuw_avx(auVar10._0_16_,auVar11);
        auVar10 = ZEXT1664(auVar11);
      } while (lVar8 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_2 = auVar10._0_4_;
    param_2 = (undefined1 (*) [32])(*param_2 + 4);
  }
  while (lVar4 < (longlong)param_3) {
    lVar8 = 0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar11 = (undefined1  [16])0x0;
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar11 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar7 * 2),0);
        lVar7 = lVar7 + lVar3;
        auVar11 = vpmaxuw_avx(auVar10._0_16_,auVar11);
        auVar10 = ZEXT1664(auVar11);
      } while (lVar8 < param_4);
    }
    lVar4 = lVar4 + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(auVar11,0);
  }
  return;
}

