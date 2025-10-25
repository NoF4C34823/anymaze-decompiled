
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d2e9a0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [64];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  auVar16 = _DAT_1430922a0;
  uVar6 = param_3 & 0xffffffffffffffc0;
  lVar4 = (longlong)param_5;
  lVar5 = 0;
  auVar10 = _DAT_1430922a0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar6) {
      do {
        auVar10 = vpminsw_avx2(auVar16,*param_1);
        lVar5 = lVar5 + 0x40;
        auVar17 = vpminsw_avx2(auVar16,param_1[1]);
        auVar15 = vpminsw_avx2(auVar16,param_1[2]);
        auVar13 = vpminsw_avx2(auVar16,param_1[3]);
        auVar10 = vpminsw_avx2(auVar10,*(undefined1 (*) [32])(*param_1 + lVar4 * 2));
        auVar17 = vpminsw_avx2(auVar17,*(undefined1 (*) [32])(param_1[1] + lVar4 * 2));
        auVar15 = vpminsw_avx2(auVar15,*(undefined1 (*) [32])(param_1[2] + lVar4 * 2));
        auVar13 = vpminsw_avx2(auVar13,*(undefined1 (*) [32])(param_1[3] + lVar4 * 2));
        auVar17 = vpminsw_avx2(auVar17,*(undefined1 (*) [32])(param_1[1] + lVar4 * 4));
        auVar15 = vpminsw_avx2(auVar15,*(undefined1 (*) [32])(param_1[2] + lVar4 * 4));
        auVar10 = vpminsw_avx2(auVar10,*(undefined1 (*) [32])(*param_1 + lVar4 * 4));
        auVar13 = vpminsw_avx2(auVar13,*(undefined1 (*) [32])(param_1[3] + lVar4 * 4));
        param_1 = param_1 + 4;
        *param_2 = auVar10;
        param_2[1] = auVar17;
        param_2[2] = auVar15;
        param_2[3] = auVar13;
        param_2 = param_2 + 4;
        auVar10 = _DAT_1430922a0;
      } while (lVar5 < (longlong)uVar6);
    }
  }
  else if ((param_4 == 5) && (0 < (longlong)uVar6)) {
    do {
      auVar10 = vpminsw_avx2(auVar16,*param_1);
      lVar5 = lVar5 + 0x40;
      auVar17 = vpminsw_avx2(auVar16,param_1[1]);
      auVar15 = vpminsw_avx2(auVar16,param_1[2]);
      auVar13 = vpminsw_avx2(auVar16,param_1[3]);
      auVar10 = vpminsw_avx2(auVar10,*(undefined1 (*) [32])(*param_1 + lVar4 * 2));
      auVar17 = vpminsw_avx2(auVar17,*(undefined1 (*) [32])(param_1[1] + lVar4 * 2));
      auVar15 = vpminsw_avx2(auVar15,*(undefined1 (*) [32])(param_1[2] + lVar4 * 2));
      auVar13 = vpminsw_avx2(auVar13,*(undefined1 (*) [32])(param_1[3] + lVar4 * 2));
      auVar10 = vpminsw_avx2(auVar10,*(undefined1 (*) [32])(*param_1 + lVar4 * 4));
      auVar17 = vpminsw_avx2(auVar17,*(undefined1 (*) [32])(param_1[1] + lVar4 * 4));
      auVar15 = vpminsw_avx2(auVar15,*(undefined1 (*) [32])(param_1[2] + lVar4 * 4));
      auVar13 = vpminsw_avx2(auVar13,*(undefined1 (*) [32])(param_1[3] + lVar4 * 4));
      auVar10 = vpminsw_avx2(auVar10,*(undefined1 (*) [32])(*param_1 + lVar4 * 6));
      auVar17 = vpminsw_avx2(auVar17,*(undefined1 (*) [32])(param_1[1] + lVar4 * 6));
      auVar15 = vpminsw_avx2(auVar15,*(undefined1 (*) [32])(param_1[2] + lVar4 * 6));
      auVar13 = vpminsw_avx2(auVar13,*(undefined1 (*) [32])(param_1[3] + lVar4 * 6));
      auVar10 = vpminsw_avx2(auVar10,*(undefined1 (*) [32])(*param_1 + lVar4 * 8));
      auVar15 = vpminsw_avx2(auVar15,*(undefined1 (*) [32])(param_1[2] + lVar4 * 8));
      auVar17 = vpminsw_avx2(auVar17,*(undefined1 (*) [32])(param_1[1] + lVar4 * 8));
      auVar13 = vpminsw_avx2(auVar13,*(undefined1 (*) [32])(param_1[3] + lVar4 * 8));
      param_1 = param_1 + 4;
      *param_2 = auVar10;
      param_2[1] = auVar17;
      param_2[2] = auVar15;
      param_2[3] = auVar13;
      param_2 = param_2 + 4;
      auVar10 = _DAT_1430922a0;
    } while (lVar5 < (longlong)uVar6);
  }
  for (; auVar16 = _DAT_1430922a0, lVar5 < (longlong)uVar6; lVar5 = lVar5 + 0x40) {
    lVar8 = 0;
    pauVar7 = param_1;
    auVar17 = _DAT_1430922a0;
    auVar15 = _DAT_1430922a0;
    auVar13 = _DAT_1430922a0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        _DAT_1430922a0 = vpminsw_avx2(_DAT_1430922a0,*pauVar7);
        auVar17 = vpminsw_avx2(auVar17,pauVar7[1]);
        auVar15 = vpminsw_avx2(auVar15,pauVar7[2]);
        auVar13 = vpminsw_avx2(auVar13,pauVar7[3]);
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar4 * 2);
      } while (lVar8 < param_4);
    }
    param_1 = param_1 + 4;
    *param_2 = _DAT_1430922a0;
    _DAT_1430922a0 = auVar10;
    param_2[1] = auVar17;
    param_2[2] = auVar15;
    param_2[3] = auVar13;
    param_2 = param_2 + 4;
    auVar10 = _DAT_1430922a0;
    _DAT_1430922a0 = auVar16;
  }
  auVar16 = auVar10;
  for (; _DAT_1430922a0 = auVar16, lVar5 < (longlong)(param_3 & 0xffffffffffffffe0);
      lVar5 = lVar5 + 0x20) {
    lVar8 = 0;
    pauVar7 = param_1;
    auVar16 = auVar10;
    auVar17 = auVar10;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar16 = vpminsw_avx2(auVar16,*pauVar7);
        auVar17 = vpminsw_avx2(auVar17,pauVar7[1]);
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar4 * 2);
      } while (lVar8 < param_4);
    }
    param_1 = param_1 + 2;
    *param_2 = auVar16;
    param_2[1] = auVar17;
    param_2 = param_2 + 2;
    auVar16 = _DAT_1430922a0;
  }
  auVar12 = _DAT_1430922c0;
  for (; lVar5 < (longlong)(param_3 & 0xfffffffffffffff0); lVar5 = lVar5 + 0x10) {
    lVar9 = 0;
    lVar8 = 0;
    auVar10 = auVar16;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        auVar10 = vpminsw_avx2(auVar10,*(undefined1 (*) [32])(*param_1 + lVar8 * 2));
        lVar8 = lVar8 + lVar4;
      } while (lVar9 < param_4);
    }
    param_1 = param_1 + 1;
    _DAT_1430922c0 = auVar12;
    *param_2 = auVar10;
    param_2 = param_2 + 1;
    auVar12 = _DAT_1430922c0;
  }
  auVar3 = auVar12;
  for (; lVar5 < (longlong)(param_3 & 0xfffffffffffffff8); lVar5 = lVar5 + 8) {
    lVar9 = 0;
    lVar8 = 0;
    auVar11 = auVar12;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        auVar11 = vpminsw_avx(auVar11,*(undefined1 (*) [16])(*param_1 + lVar8 * 2));
        lVar8 = lVar8 + lVar4;
      } while (lVar9 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    _DAT_1430922c0 = auVar3;
    *(undefined1 (*) [16])*param_2 = auVar11;
    param_2 = (undefined1 (*) [32])(*param_2 + 0x10);
    auVar3 = _DAT_1430922c0;
  }
  auVar12 = auVar3;
  while (_DAT_1430922c0 = auVar12, lVar5 < (longlong)(param_3 & 0xfffffffffffffffc)) {
    lVar9 = 0;
    lVar8 = 0;
    auVar12 = auVar3;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar8);
        lVar8 = lVar8 + lVar4 * 2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar1;
        auVar12 = vpminsw_avx(auVar12,auVar11);
      } while (lVar9 < param_4);
    }
    lVar5 = lVar5 + 4;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar12,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [32])(*param_2 + 8);
    auVar12 = _DAT_1430922c0;
  }
  for (; lVar5 < (longlong)(param_3 & 0xfffffffffffffffe); lVar5 = lVar5 + 2) {
    lVar9 = 0;
    auVar14 = ZEXT1664(auVar12);
    lVar8 = 0;
    if (0 < param_4) {
      do {
        auVar3 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar8 * 2),0);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + lVar4;
        auVar3 = vpminsw_avx(auVar14._0_16_,auVar3);
        auVar14 = ZEXT1664(auVar3);
      } while (lVar9 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_2 = auVar14._0_4_;
    param_2 = (undefined1 (*) [32])(*param_2 + 4);
  }
  while (lVar5 < (longlong)param_3) {
    lVar9 = 0;
    lVar8 = 0;
    auVar12 = _DAT_1430922c0;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        auVar3 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar8 * 2),0);
        lVar8 = lVar8 + lVar4;
        auVar12 = vpminsw_avx(auVar12,auVar3);
      } while (lVar9 < param_4);
    }
    lVar5 = lVar5 + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(auVar12,0);
  }
  return;
}

