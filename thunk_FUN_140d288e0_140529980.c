
void thunk_FUN_140d288e0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [32];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar12 [32];
  undefined1 auVar14 [32];
  undefined1 auVar8 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  
  lVar3 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    do {
      lVar5 = 0;
      auVar15 = ZEXT3264((undefined1  [32])0x0);
      auVar14 = (undefined1  [32])0x0;
      auVar13 = ZEXT3264((undefined1  [32])0x0);
      auVar12 = (undefined1  [32])0x0;
      auVar11 = ZEXT3264((undefined1  [32])0x0);
      auVar10 = (undefined1  [32])0x0;
      auVar8 = ZEXT3264((undefined1  [32])0x0);
      auVar7 = (undefined1  [32])0x0;
      pauVar4 = param_1;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar14 = vpmaxuw_avx2(auVar15._0_32_,*pauVar4);
          auVar15 = ZEXT3264(auVar14);
          auVar12 = vpmaxuw_avx2(auVar13._0_32_,pauVar4[1]);
          auVar13 = ZEXT3264(auVar12);
          auVar10 = vpmaxuw_avx2(auVar11._0_32_,pauVar4[2]);
          auVar11 = ZEXT3264(auVar10);
          auVar7 = vpmaxuw_avx2(auVar8._0_32_,pauVar4[3]);
          auVar8 = ZEXT3264(auVar7);
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + param_2 * 2);
        } while (lVar5 < param_5);
      }
      lVar3 = lVar3 + 0x40;
      param_1 = param_1 + 4;
      *param_3 = auVar14;
      param_3[1] = auVar12;
      param_3[2] = auVar10;
      param_3[3] = auVar7;
      param_3 = param_3 + 4;
    } while (lVar3 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  for (; lVar3 < (longlong)(param_4 & 0xffffffffffffffe0); lVar3 = lVar3 + 0x20) {
    lVar5 = 0;
    auVar11 = ZEXT3264((undefined1  [32])0x0);
    auVar14 = (undefined1  [32])0x0;
    auVar8 = ZEXT3264((undefined1  [32])0x0);
    auVar12 = (undefined1  [32])0x0;
    pauVar4 = param_1;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar14 = vpmaxuw_avx2(auVar11._0_32_,*pauVar4);
        auVar11 = ZEXT3264(auVar14);
        auVar12 = vpmaxuw_avx2(auVar8._0_32_,pauVar4[1]);
        auVar8 = ZEXT3264(auVar12);
        pauVar4 = (undefined1 (*) [32])(*pauVar4 + param_2 * 2);
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 2;
    *param_3 = auVar14;
    param_3[1] = auVar12;
    param_3 = param_3 + 2;
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffff0); lVar3 = lVar3 + 0x10) {
    lVar6 = 0;
    auVar8 = ZEXT3264((undefined1  [32])0x0);
    auVar14 = (undefined1  [32])0x0;
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar14 = vpmaxuw_avx2(auVar8._0_32_,*(undefined1 (*) [32])(*param_1 + lVar5 * 2));
        auVar8 = ZEXT3264(auVar14);
        lVar5 = lVar5 + param_2;
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 1;
    *param_3 = auVar14;
    param_3 = param_3 + 1;
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffff8); lVar3 = lVar3 + 8) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    auVar9 = (undefined1  [16])0x0;
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar9 = vpmaxuw_avx(auVar8._0_16_,*(undefined1 (*) [16])(*param_1 + lVar5 * 2));
        auVar8 = ZEXT1664(auVar9);
        lVar5 = lVar5 + param_2;
      } while (lVar6 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_3 = auVar9;
    param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
  }
  while (lVar3 < (longlong)(param_4 & 0xfffffffffffffffc)) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    auVar9 = (undefined1  [16])0x0;
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar5);
        lVar5 = lVar5 + param_2 * 2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *puVar1;
        auVar9 = vpmaxuw_avx(auVar8._0_16_,auVar9);
        auVar8 = ZEXT1664(auVar9);
      } while (lVar6 < param_5);
    }
    lVar3 = lVar3 + 4;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar9,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [32])(*param_3 + 8);
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffffe); lVar3 = lVar3 + 2) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    lVar5 = 0;
    if (0 < param_5) {
      do {
        auVar9 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar5 * 2),0);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + param_2;
        auVar9 = vpmaxuw_avx(auVar8._0_16_,auVar9);
        auVar8 = ZEXT1664(auVar9);
      } while (lVar6 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_3 = auVar8._0_4_;
    param_3 = (undefined1 (*) [32])(*param_3 + 4);
  }
  while (lVar3 < (longlong)param_4) {
    lVar6 = 0;
    auVar8 = ZEXT1664((undefined1  [16])0x0);
    auVar9 = (undefined1  [16])0x0;
    lVar5 = 0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar9 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar5 * 2),0);
        lVar5 = lVar5 + param_2;
        auVar9 = vpmaxuw_avx(auVar8._0_16_,auVar9);
        auVar8 = ZEXT1664(auVar9);
      } while (lVar6 < param_5);
    }
    lVar3 = lVar3 + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(auVar9,0);
  }
  return;
}

