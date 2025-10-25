
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d1c580(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar9 = _DAT_143091ed0;
  lVar3 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    do {
      auVar10 = ZEXT1664(auVar9);
      lVar5 = 0;
      pauVar4 = param_1;
      auVar16 = auVar9;
      auVar8 = auVar9;
      auVar15 = auVar9;
      auVar14 = auVar9;
      auVar13 = auVar9;
      auVar12 = auVar9;
      auVar11 = auVar9;
      auVar7 = auVar9;
      if (0 < param_5) {
        do {
          lVar5 = lVar5 + 1;
          auVar16 = vpmaxsw_avx(auVar16,*pauVar4);
          auVar8 = vpmaxsw_avx(auVar8,pauVar4[1]);
          auVar15 = vpmaxsw_avx(auVar15,pauVar4[2]);
          auVar14 = vpmaxsw_avx(auVar14,pauVar4[3]);
          auVar13 = vpmaxsw_avx(auVar13,pauVar4[4]);
          auVar12 = vpmaxsw_avx(auVar12,pauVar4[5]);
          auVar11 = vpmaxsw_avx(auVar11,pauVar4[6]);
          auVar7 = vpmaxsw_avx(auVar10._0_16_,pauVar4[7]);
          auVar10 = ZEXT1664(auVar7);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
        } while (lVar5 < param_5);
      }
      lVar3 = lVar3 + 0x40;
      param_1 = param_1 + 8;
      *param_3 = auVar16;
      param_3[1] = auVar8;
      param_3[2] = auVar15;
      param_3[3] = auVar14;
      param_3[4] = auVar13;
      param_3[5] = auVar12;
      param_3[6] = auVar11;
      param_3[7] = auVar7;
      param_3 = param_3 + 8;
    } while (lVar3 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  auVar16 = _DAT_143091ed0;
  auVar9 = _DAT_143091ed0;
  for (; lVar3 < (longlong)(param_4 & 0xffffffffffffffe0); lVar3 = lVar3 + 0x20) {
    lVar5 = 0;
    pauVar4 = param_1;
    auVar8 = auVar16;
    auVar15 = auVar16;
    auVar14 = auVar16;
    auVar13 = auVar16;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar8 = vpmaxsw_avx(auVar8,*pauVar4);
        auVar15 = vpmaxsw_avx(auVar15,pauVar4[1]);
        auVar14 = vpmaxsw_avx(auVar14,pauVar4[2]);
        auVar13 = vpmaxsw_avx(auVar13,pauVar4[3]);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 4;
    _DAT_143091ed0 = auVar9;
    *param_3 = auVar8;
    param_3[1] = auVar15;
    param_3[2] = auVar14;
    param_3[3] = auVar13;
    param_3 = param_3 + 4;
    auVar9 = _DAT_143091ed0;
  }
  auVar16 = auVar9;
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffff8); lVar3 = lVar3 + 8) {
    lVar6 = 0;
    lVar5 = 0;
    auVar8 = auVar9;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar8 = vpmaxsw_avx(auVar8,*(undefined1 (*) [16])(*param_1 + lVar5 * 2));
        lVar5 = lVar5 + param_2;
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 1;
    _DAT_143091ed0 = auVar16;
    *param_3 = auVar8;
    param_3 = param_3 + 1;
    auVar16 = _DAT_143091ed0;
  }
  auVar9 = auVar16;
  while (_DAT_143091ed0 = auVar9, lVar3 < (longlong)(param_4 & 0xfffffffffffffffc)) {
    lVar6 = 0;
    lVar5 = 0;
    auVar9 = auVar16;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar5);
        lVar5 = lVar5 + param_2 * 2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar1;
        auVar9 = vpmaxsw_avx(auVar9,auVar8);
      } while (lVar6 < param_5);
    }
    lVar3 = lVar3 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar9,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
    auVar9 = _DAT_143091ed0;
  }
  for (; lVar3 < (longlong)(param_4 & 0xfffffffffffffffe); lVar3 = lVar3 + 2) {
    lVar6 = 0;
    auVar10 = ZEXT1664(auVar9);
    lVar5 = 0;
    if (0 < param_5) {
      do {
        auVar16 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar5 * 2),0);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + param_2;
        auVar16 = vpmaxsw_avx(auVar10._0_16_,auVar16);
        auVar10 = ZEXT1664(auVar16);
      } while (lVar6 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_3 = auVar10._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
  }
  while (lVar3 < (longlong)param_4) {
    lVar6 = 0;
    lVar5 = 0;
    auVar9 = _DAT_143091ed0;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar16 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar5 * 2),0);
        lVar5 = lVar5 + param_2;
        auVar9 = vpmaxsw_avx(auVar9,auVar16);
      } while (lVar6 < param_5);
    }
    lVar3 = lVar3 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar9,0);
  }
  return;
}

