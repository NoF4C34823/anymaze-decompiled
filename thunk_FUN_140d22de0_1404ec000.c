
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d22de0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar9 = param_4 & 0xffffffffffffffe0;
  lVar8 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)uVar9) {
      do {
        auVar12 = vpminsw_avx(*param_1,*(undefined1 (*) [16])(*param_1 + param_2 * 2));
        lVar8 = lVar8 + 0x20;
        auVar17 = vpminsw_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + param_2 * 2));
        auVar11 = vpminsw_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + param_2 * 2));
        auVar20 = vpminsw_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + param_2 * 2));
        auVar12 = vpminsw_avx(auVar12,*(undefined1 (*) [16])(*param_1 + param_2 * 4));
        auVar17 = vpminsw_avx(auVar17,*(undefined1 (*) [16])(param_1[1] + param_2 * 4));
        auVar11 = vpminsw_avx(auVar11,*(undefined1 (*) [16])(param_1[2] + param_2 * 4));
        auVar20 = vpminsw_avx(auVar20,*(undefined1 (*) [16])(param_1[3] + param_2 * 4));
        param_1 = param_1 + 4;
        *param_3 = auVar12;
        param_3[1] = auVar17;
        param_3[2] = auVar11;
        param_3[3] = auVar20;
        param_3 = param_3 + 4;
      } while (lVar8 < (longlong)uVar9);
    }
  }
  else if ((param_5 == 5) && (uVar7 = 0, 0 < (longlong)uVar9)) {
    uVar3 = (ulonglong)((longlong)(uVar9 + 0x1f) >> 4) >> 0x3b;
    lVar5 = 0;
    lVar8 = (uVar3 + 0x3f + uVar9 & 0xffffffffffffffe0) - 0x20;
    do {
      auVar12 = vpminsw_avx(*(undefined1 (*) [16])(*param_1 + lVar5),
                            *(undefined1 (*) [16])(*param_1 + lVar5 + param_2 * 2));
      uVar7 = uVar7 + 1;
      auVar17 = vpminsw_avx(*(undefined1 (*) [16])(param_1[1] + lVar5),
                            *(undefined1 (*) [16])(param_1[1] + param_2 * 2 + lVar5));
      auVar11 = vpminsw_avx(*(undefined1 (*) [16])(param_1[2] + lVar5),
                            *(undefined1 (*) [16])(param_1[2] + param_2 * 2 + lVar5));
      auVar20 = vpminsw_avx(*(undefined1 (*) [16])(param_1[3] + lVar5),
                            *(undefined1 (*) [16])(param_1[3] + param_2 * 2 + lVar5));
      auVar12 = vpminsw_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar5 + param_2 * 4));
      auVar17 = vpminsw_avx(auVar17,*(undefined1 (*) [16])(param_1[1] + param_2 * 4 + lVar5));
      auVar11 = vpminsw_avx(auVar11,*(undefined1 (*) [16])(param_1[2] + param_2 * 4 + lVar5));
      auVar20 = vpminsw_avx(auVar20,*(undefined1 (*) [16])(param_1[3] + param_2 * 4 + lVar5));
      auVar12 = vpminsw_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar5 + param_2 * 6));
      auVar17 = vpminsw_avx(auVar17,*(undefined1 (*) [16])(param_1[1] + param_2 * 6 + lVar5));
      auVar11 = vpminsw_avx(auVar11,*(undefined1 (*) [16])(param_1[2] + param_2 * 6 + lVar5));
      auVar20 = vpminsw_avx(auVar20,*(undefined1 (*) [16])(param_1[3] + param_2 * 6 + lVar5));
      auVar12 = vpminsw_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar5 + param_2 * 8));
      auVar17 = vpminsw_avx(auVar17,*(undefined1 (*) [16])(param_1[1] + param_2 * 8 + lVar5));
      auVar11 = vpminsw_avx(auVar11,*(undefined1 (*) [16])(param_1[2] + param_2 * 8 + lVar5));
      auVar20 = vpminsw_avx(auVar20,*(undefined1 (*) [16])(param_1[3] + param_2 * 8 + lVar5));
      *(undefined1 (*) [16])(*param_3 + lVar5) = auVar12;
      *(undefined1 (*) [16])(param_3[1] + lVar5) = auVar17;
      *(undefined1 (*) [16])(param_3[2] + lVar5) = auVar11;
      *(undefined1 (*) [16])(param_3[3] + lVar5) = auVar20;
      lVar5 = lVar5 + 0x40;
    } while (uVar7 < (ulonglong)((longlong)(uVar3 + 0x1f + uVar9) >> 5));
    param_1 = param_1 + uVar7 * 4;
    param_3 = param_3 + uVar7 * 4;
  }
  auVar17 = _DAT_143092050;
  auVar12 = _DAT_143092050;
  for (; auVar11 = auVar12, lVar8 < (longlong)(param_4 & 0xffffffffffffffc0); lVar8 = lVar8 + 0x40)
  {
    lVar5 = 0;
    pauVar4 = param_1;
    auVar11 = auVar17;
    auVar20 = auVar17;
    auVar19 = auVar17;
    auVar18 = auVar17;
    auVar16 = auVar17;
    auVar15 = auVar17;
    auVar14 = auVar17;
    auVar10 = auVar17;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar11 = vpminsw_avx(auVar11,*pauVar4);
        auVar20 = vpminsw_avx(auVar20,pauVar4[1]);
        auVar19 = vpminsw_avx(auVar19,pauVar4[2]);
        auVar18 = vpminsw_avx(auVar18,pauVar4[3]);
        auVar16 = vpminsw_avx(auVar16,pauVar4[4]);
        auVar15 = vpminsw_avx(auVar15,pauVar4[5]);
        auVar14 = vpminsw_avx(auVar14,pauVar4[6]);
        auVar10 = vpminsw_avx(auVar10,pauVar4[7]);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 8;
    _DAT_143092050 = auVar12;
    *param_3 = auVar11;
    param_3[1] = auVar20;
    param_3[2] = auVar19;
    param_3[3] = auVar18;
    param_3[4] = auVar16;
    param_3[5] = auVar15;
    param_3[6] = auVar14;
    param_3[7] = auVar10;
    param_3 = param_3 + 8;
    auVar12 = _DAT_143092050;
  }
  for (; lVar8 < (longlong)uVar9; lVar8 = lVar8 + 0x20) {
    lVar5 = 0;
    pauVar4 = param_1;
    auVar17 = auVar12;
    auVar20 = auVar12;
    auVar19 = auVar12;
    auVar18 = auVar12;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar17 = vpminsw_avx(auVar17,*pauVar4);
        auVar20 = vpminsw_avx(auVar20,pauVar4[1]);
        auVar19 = vpminsw_avx(auVar19,pauVar4[2]);
        auVar18 = vpminsw_avx(auVar18,pauVar4[3]);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 4;
    _DAT_143092050 = auVar11;
    *param_3 = auVar17;
    param_3[1] = auVar20;
    param_3[2] = auVar19;
    param_3[3] = auVar18;
    param_3 = param_3 + 4;
    auVar11 = _DAT_143092050;
  }
  auVar12 = auVar11;
  for (; lVar8 < (longlong)(param_4 & 0xfffffffffffffff8); lVar8 = lVar8 + 8) {
    lVar5 = 0;
    lVar6 = 0;
    auVar17 = auVar11;
    if (0 < param_5) {
      do {
        lVar5 = lVar5 + 1;
        auVar17 = vpminsw_avx(auVar17,*(undefined1 (*) [16])(*param_1 + lVar6 * 2));
        lVar6 = lVar6 + param_2;
      } while (lVar5 < param_5);
    }
    param_1 = param_1 + 1;
    _DAT_143092050 = auVar12;
    *param_3 = auVar17;
    param_3 = param_3 + 1;
    auVar12 = _DAT_143092050;
  }
  auVar17 = auVar12;
  while (_DAT_143092050 = auVar17, lVar8 < (longlong)(param_4 & 0xfffffffffffffffc)) {
    lVar6 = 0;
    lVar5 = 0;
    auVar17 = auVar12;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar5);
        lVar5 = lVar5 + param_2 * 2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar1;
        auVar17 = vpminsw_avx(auVar17,auVar11);
      } while (lVar6 < param_5);
    }
    lVar8 = lVar8 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar17,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
    auVar17 = _DAT_143092050;
  }
  for (; lVar8 < (longlong)(param_4 & 0xfffffffffffffffe); lVar8 = lVar8 + 2) {
    lVar5 = 0;
    auVar13 = ZEXT1664(auVar17);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        auVar12 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar6 * 2),0);
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + param_2;
        auVar12 = vpminsw_avx(auVar13._0_16_,auVar12);
        auVar13 = ZEXT1664(auVar12);
      } while (lVar5 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_3 = auVar13._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
  }
  while (lVar8 < (longlong)param_4) {
    lVar6 = 0;
    lVar5 = 0;
    auVar12 = _DAT_143092050;
    if (0 < param_5) {
      do {
        lVar6 = lVar6 + 1;
        auVar17 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar5 * 2),0);
        lVar5 = lVar5 + param_2;
        auVar12 = vpminsw_avx(auVar12,auVar17);
      } while (lVar6 < param_5);
    }
    lVar8 = lVar8 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar12,0);
  }
  return;
}

