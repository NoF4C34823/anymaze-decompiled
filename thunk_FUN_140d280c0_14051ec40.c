
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d280c0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  
  auVar13 = _DAT_143092100;
  lVar4 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    do {
      auVar11 = ZEXT3264(auVar13);
      lVar6 = 0;
      pauVar5 = param_1;
      auVar15 = auVar13;
      auVar14 = auVar13;
      auVar12 = auVar13;
      auVar10 = auVar13;
      if (0 < param_5) {
        do {
          lVar6 = lVar6 + 1;
          auVar15 = vpmaxsw_avx2(auVar15,*pauVar5);
          auVar14 = vpmaxsw_avx2(auVar14,pauVar5[1]);
          auVar12 = vpmaxsw_avx2(auVar12,pauVar5[2]);
          auVar10 = vpmaxsw_avx2(auVar11._0_32_,pauVar5[3]);
          auVar11 = ZEXT3264(auVar10);
          pauVar5 = (undefined1 (*) [32])(*pauVar5 + param_2 * 2);
        } while (lVar6 < param_5);
      }
      lVar4 = lVar4 + 0x40;
      param_1 = param_1 + 4;
      *param_3 = auVar15;
      param_3[1] = auVar14;
      param_3[2] = auVar12;
      param_3[3] = auVar10;
      param_3 = param_3 + 4;
    } while (lVar4 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  auVar15 = _DAT_143092100;
  auVar13 = _DAT_143092100;
  for (; _DAT_143092100 = auVar13, lVar4 < (longlong)(param_4 & 0xffffffffffffffe0);
      lVar4 = lVar4 + 0x20) {
    lVar6 = 0;
    pauVar5 = param_1;
    auVar13 = auVar15;
    auVar14 = auVar15;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar13 = vpmaxsw_avx2(auVar13,*pauVar5);
        auVar14 = vpmaxsw_avx2(auVar14,pauVar5[1]);
        pauVar5 = (undefined1 (*) [32])(*pauVar5 + param_2 * 2);
      } while (lVar6 < param_5);
    }
    param_1 = param_1 + 2;
    *param_3 = auVar13;
    param_3[1] = auVar14;
    param_3 = param_3 + 2;
    auVar13 = _DAT_143092100;
  }
  auVar9 = _DAT_143092120;
  for (; lVar4 < (longlong)(param_4 & 0xfffffffffffffff0); lVar4 = lVar4 + 0x10) {
    lVar7 = 0;
    lVar6 = 0;
    auVar15 = auVar13;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar15 = vpmaxsw_avx2(auVar15,*(undefined1 (*) [32])(*param_1 + lVar6 * 2));
        lVar6 = lVar6 + param_2;
      } while (lVar7 < param_5);
    }
    param_1 = param_1 + 1;
    _DAT_143092120 = auVar9;
    *param_3 = auVar15;
    param_3 = param_3 + 1;
    auVar9 = _DAT_143092120;
  }
  auVar3 = auVar9;
  for (; lVar4 < (longlong)(param_4 & 0xfffffffffffffff8); lVar4 = lVar4 + 8) {
    lVar7 = 0;
    lVar6 = 0;
    auVar8 = auVar9;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar8 = vpmaxsw_avx(auVar8,*(undefined1 (*) [16])(*param_1 + lVar6 * 2));
        lVar6 = lVar6 + param_2;
      } while (lVar7 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    _DAT_143092120 = auVar3;
    *(undefined1 (*) [16])*param_3 = auVar8;
    param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
    auVar3 = _DAT_143092120;
  }
  auVar9 = auVar3;
  while (_DAT_143092120 = auVar9, lVar4 < (longlong)(param_4 & 0xfffffffffffffffc)) {
    lVar7 = 0;
    lVar6 = 0;
    auVar9 = auVar3;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar6);
        lVar6 = lVar6 + param_2 * 2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar1;
        auVar9 = vpmaxsw_avx(auVar9,auVar8);
      } while (lVar7 < param_5);
    }
    lVar4 = lVar4 + 4;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar9,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [32])(*param_3 + 8);
    auVar9 = _DAT_143092120;
  }
  for (; lVar4 < (longlong)(param_4 & 0xfffffffffffffffe); lVar4 = lVar4 + 2) {
    lVar7 = 0;
    auVar11 = ZEXT1664(auVar9);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        auVar3 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar6 * 2),0);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + param_2;
        auVar3 = vpmaxsw_avx(auVar11._0_16_,auVar3);
        auVar11 = ZEXT1664(auVar3);
      } while (lVar7 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_3 = auVar11._0_4_;
    param_3 = (undefined1 (*) [32])(*param_3 + 4);
  }
  while (lVar4 < (longlong)param_4) {
    lVar7 = 0;
    lVar6 = 0;
    auVar9 = _DAT_143092120;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar3 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar6 * 2),0);
        lVar6 = lVar6 + param_2;
        auVar9 = vpmaxsw_avx(auVar9,auVar3);
      } while (lVar7 < param_5);
    }
    lVar4 = lVar4 + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(auVar9,0);
  }
  return;
}

