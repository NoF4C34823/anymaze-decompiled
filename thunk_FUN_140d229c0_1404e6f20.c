
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d229c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  
  uVar9 = param_3 & 0xffffffffffffffe0;
  lVar10 = (longlong)param_5;
  lVar11 = 0;
  auVar14 = _DAT_143092040;
  if (param_4 == 3) {
    if (0 < (longlong)uVar9) {
      do {
        auVar14 = vpminsw_avx(*param_1,*(undefined1 (*) [16])(*param_1 + lVar10 * 2));
        lVar11 = lVar11 + 0x20;
        auVar3 = vpminsw_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + lVar10 * 2));
        auVar13 = vpminsw_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + lVar10 * 2));
        auVar16 = vpminsw_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + lVar10 * 2));
        auVar14 = vpminsw_avx(auVar14,*(undefined1 (*) [16])(*param_1 + lVar10 * 4));
        auVar3 = vpminsw_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + lVar10 * 4));
        auVar13 = vpminsw_avx(auVar13,*(undefined1 (*) [16])(param_1[2] + lVar10 * 4));
        auVar16 = vpminsw_avx(auVar16,*(undefined1 (*) [16])(param_1[3] + lVar10 * 4));
        param_1 = param_1 + 4;
        *param_2 = auVar14;
        param_2[1] = auVar3;
        param_2[2] = auVar13;
        param_2[3] = auVar16;
        param_2 = param_2 + 4;
        auVar14 = _DAT_143092040;
      } while (lVar11 < (longlong)uVar9);
    }
  }
  else if ((param_4 == 5) && (uVar8 = 0, 0 < (longlong)uVar9)) {
    uVar4 = (ulonglong)((longlong)(uVar9 + 0x1f) >> 4) >> 0x3b;
    lVar6 = 0;
    lVar11 = (uVar4 + 0x3f + uVar9 & 0xffffffffffffffe0) - 0x20;
    do {
      auVar14 = vpminsw_avx(*(undefined1 (*) [16])(*param_1 + lVar6),
                            *(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 2));
      uVar8 = uVar8 + 1;
      auVar3 = vpminsw_avx(*(undefined1 (*) [16])(param_1[1] + lVar6),
                           *(undefined1 (*) [16])(param_1[1] + lVar10 * 2 + lVar6));
      auVar13 = vpminsw_avx(*(undefined1 (*) [16])(param_1[2] + lVar6),
                            *(undefined1 (*) [16])(param_1[2] + lVar10 * 2 + lVar6));
      auVar16 = vpminsw_avx(*(undefined1 (*) [16])(param_1[3] + lVar6),
                            *(undefined1 (*) [16])(param_1[3] + lVar10 * 2 + lVar6));
      auVar14 = vpminsw_avx(auVar14,*(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 4));
      auVar3 = vpminsw_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + lVar10 * 4 + lVar6));
      auVar13 = vpminsw_avx(auVar13,*(undefined1 (*) [16])(param_1[2] + lVar10 * 4 + lVar6));
      auVar16 = vpminsw_avx(auVar16,*(undefined1 (*) [16])(param_1[3] + lVar10 * 4 + lVar6));
      auVar14 = vpminsw_avx(auVar14,*(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 6));
      auVar3 = vpminsw_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + lVar10 * 6 + lVar6));
      auVar13 = vpminsw_avx(auVar13,*(undefined1 (*) [16])(param_1[2] + lVar10 * 6 + lVar6));
      auVar16 = vpminsw_avx(auVar16,*(undefined1 (*) [16])(param_1[3] + lVar10 * 6 + lVar6));
      auVar14 = vpminsw_avx(auVar14,*(undefined1 (*) [16])(*param_1 + lVar6 + lVar10 * 8));
      auVar3 = vpminsw_avx(auVar3,*(undefined1 (*) [16])(param_1[1] + lVar10 * 8 + lVar6));
      auVar13 = vpminsw_avx(auVar13,*(undefined1 (*) [16])(param_1[2] + lVar10 * 8 + lVar6));
      auVar16 = vpminsw_avx(auVar16,*(undefined1 (*) [16])(param_1[3] + lVar10 * 8 + lVar6));
      *(undefined1 (*) [16])(*param_2 + lVar6) = auVar14;
      *(undefined1 (*) [16])(param_2[1] + lVar6) = auVar3;
      *(undefined1 (*) [16])(param_2[2] + lVar6) = auVar13;
      *(undefined1 (*) [16])(param_2[3] + lVar6) = auVar16;
      lVar6 = lVar6 + 0x40;
    } while (uVar8 < (ulonglong)((longlong)(uVar4 + 0x1f + uVar9) >> 5));
    param_1 = param_1 + uVar8 * 4;
    param_2 = param_2 + uVar8 * 4;
    auVar14 = _DAT_143092040;
  }
  for (; auVar3 = _DAT_143092040, lVar11 < (longlong)uVar9; lVar11 = lVar11 + 0x20) {
    lVar6 = 0;
    pauVar5 = param_1;
    auVar13 = _DAT_143092040;
    auVar16 = _DAT_143092040;
    auVar12 = _DAT_143092040;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        _DAT_143092040 = vpminsw_avx(_DAT_143092040,*pauVar5);
        auVar13 = vpminsw_avx(auVar13,pauVar5[1]);
        auVar16 = vpminsw_avx(auVar16,pauVar5[2]);
        auVar12 = vpminsw_avx(auVar12,pauVar5[3]);
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + lVar10 * 2);
      } while (lVar6 < param_4);
    }
    param_1 = param_1 + 4;
    *param_2 = _DAT_143092040;
    _DAT_143092040 = auVar14;
    param_2[1] = auVar13;
    param_2[2] = auVar16;
    param_2[3] = auVar12;
    param_2 = param_2 + 4;
    auVar14 = _DAT_143092040;
    _DAT_143092040 = auVar3;
  }
  auVar3 = auVar14;
  for (; lVar11 < (longlong)(param_3 & 0xfffffffffffffff8); lVar11 = lVar11 + 8) {
    lVar6 = 0;
    lVar7 = 0;
    auVar13 = auVar14;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        auVar13 = vpminsw_avx(auVar13,*(undefined1 (*) [16])(*param_1 + lVar7 * 2));
        lVar7 = lVar7 + lVar10;
      } while (lVar6 < param_4);
    }
    param_1 = param_1 + 1;
    _DAT_143092040 = auVar3;
    *param_2 = auVar13;
    param_2 = param_2 + 1;
    auVar3 = _DAT_143092040;
  }
  auVar14 = auVar3;
  while (_DAT_143092040 = auVar14, lVar11 < (longlong)(param_3 & 0xfffffffffffffffc)) {
    lVar7 = 0;
    lVar6 = 0;
    auVar14 = auVar3;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar6);
        lVar6 = lVar6 + lVar10 * 2;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar1;
        auVar14 = vpminsw_avx(auVar14,auVar13);
      } while (lVar7 < param_4);
    }
    lVar11 = lVar11 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar14,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
    auVar14 = _DAT_143092040;
  }
  for (; lVar11 < (longlong)(param_3 & 0xfffffffffffffffe); lVar11 = lVar11 + 2) {
    lVar6 = 0;
    auVar15 = ZEXT1664(auVar14);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        auVar3 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar7 * 2),0);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + lVar10;
        auVar3 = vpminsw_avx(auVar15._0_16_,auVar3);
        auVar15 = ZEXT1664(auVar3);
      } while (lVar6 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_2 = auVar15._0_4_;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
  }
  while (lVar11 < (longlong)param_3) {
    lVar7 = 0;
    lVar6 = 0;
    auVar14 = _DAT_143092040;
    if (0 < param_4) {
      do {
        lVar7 = lVar7 + 1;
        auVar3 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar6 * 2),0);
        lVar6 = lVar6 + lVar10;
        auVar14 = vpminsw_avx(auVar14,auVar3);
      } while (lVar7 < param_4);
    }
    lVar11 = lVar11 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar14,0);
  }
  return;
}

