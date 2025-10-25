
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140d1c020(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                        longlong param_4,int param_5)

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
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar9 = param_3 & 0xffffffffffffffe0;
  lVar10 = (longlong)param_5;
  lVar8 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar9) {
      do {
        auVar13 = vpmaxsw_avx(*param_1,*(undefined1 (*) [16])(*param_1 + lVar10 * 2));
        lVar8 = lVar8 + 0x20;
        auVar18 = vpmaxsw_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + lVar10 * 2));
        auVar12 = vpmaxsw_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + lVar10 * 2));
        auVar21 = vpmaxsw_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + lVar10 * 2));
        auVar13 = vpmaxsw_avx(auVar13,*(undefined1 (*) [16])(*param_1 + lVar10 * 4));
        auVar18 = vpmaxsw_avx(auVar18,*(undefined1 (*) [16])(param_1[1] + lVar10 * 4));
        auVar12 = vpmaxsw_avx(auVar12,*(undefined1 (*) [16])(param_1[2] + lVar10 * 4));
        auVar21 = vpmaxsw_avx(auVar21,*(undefined1 (*) [16])(param_1[3] + lVar10 * 4));
        param_1 = param_1 + 4;
        *param_2 = auVar13;
        param_2[1] = auVar18;
        param_2[2] = auVar12;
        param_2[3] = auVar21;
        param_2 = param_2 + 4;
      } while (lVar8 < (longlong)uVar9);
    }
  }
  else if ((param_4 == 5) && (uVar7 = 0, 0 < (longlong)uVar9)) {
    uVar3 = (ulonglong)((longlong)(uVar9 + 0x1f) >> 4) >> 0x3b;
    lVar5 = 0;
    lVar8 = (uVar3 + 0x3f + uVar9 & 0xffffffffffffffe0) - 0x20;
    do {
      auVar13 = vpmaxsw_avx(*(undefined1 (*) [16])(*param_1 + lVar5),
                            *(undefined1 (*) [16])(*param_1 + lVar5 + lVar10 * 2));
      uVar7 = uVar7 + 1;
      auVar18 = vpmaxsw_avx(*(undefined1 (*) [16])(param_1[1] + lVar5),
                            *(undefined1 (*) [16])(param_1[1] + lVar10 * 2 + lVar5));
      auVar12 = vpmaxsw_avx(*(undefined1 (*) [16])(param_1[2] + lVar5),
                            *(undefined1 (*) [16])(param_1[2] + lVar10 * 2 + lVar5));
      auVar21 = vpmaxsw_avx(*(undefined1 (*) [16])(param_1[3] + lVar5),
                            *(undefined1 (*) [16])(param_1[3] + lVar10 * 2 + lVar5));
      auVar13 = vpmaxsw_avx(auVar13,*(undefined1 (*) [16])(*param_1 + lVar5 + lVar10 * 4));
      auVar18 = vpmaxsw_avx(auVar18,*(undefined1 (*) [16])(param_1[1] + lVar10 * 4 + lVar5));
      auVar12 = vpmaxsw_avx(auVar12,*(undefined1 (*) [16])(param_1[2] + lVar10 * 4 + lVar5));
      auVar21 = vpmaxsw_avx(auVar21,*(undefined1 (*) [16])(param_1[3] + lVar10 * 4 + lVar5));
      auVar13 = vpmaxsw_avx(auVar13,*(undefined1 (*) [16])(*param_1 + lVar5 + lVar10 * 6));
      auVar18 = vpmaxsw_avx(auVar18,*(undefined1 (*) [16])(param_1[1] + lVar10 * 6 + lVar5));
      auVar12 = vpmaxsw_avx(auVar12,*(undefined1 (*) [16])(param_1[2] + lVar10 * 6 + lVar5));
      auVar21 = vpmaxsw_avx(auVar21,*(undefined1 (*) [16])(param_1[3] + lVar10 * 6 + lVar5));
      auVar13 = vpmaxsw_avx(auVar13,*(undefined1 (*) [16])(*param_1 + lVar5 + lVar10 * 8));
      auVar18 = vpmaxsw_avx(auVar18,*(undefined1 (*) [16])(param_1[1] + lVar10 * 8 + lVar5));
      auVar12 = vpmaxsw_avx(auVar12,*(undefined1 (*) [16])(param_1[2] + lVar10 * 8 + lVar5));
      auVar21 = vpmaxsw_avx(auVar21,*(undefined1 (*) [16])(param_1[3] + lVar10 * 8 + lVar5));
      *(undefined1 (*) [16])(*param_2 + lVar5) = auVar13;
      *(undefined1 (*) [16])(param_2[1] + lVar5) = auVar18;
      *(undefined1 (*) [16])(param_2[2] + lVar5) = auVar12;
      *(undefined1 (*) [16])(param_2[3] + lVar5) = auVar21;
      lVar5 = lVar5 + 0x40;
    } while (uVar7 < (ulonglong)((longlong)(uVar3 + 0x1f + uVar9) >> 5));
    param_1 = param_1 + uVar7 * 4;
    param_2 = param_2 + uVar7 * 4;
  }
  auVar18 = _DAT_143091ec0;
  auVar13 = _DAT_143091ec0;
  for (; auVar12 = auVar13, lVar8 < (longlong)(param_3 & 0xffffffffffffffc0); lVar8 = lVar8 + 0x40)
  {
    lVar5 = 0;
    pauVar4 = param_1;
    auVar12 = auVar18;
    auVar21 = auVar18;
    auVar20 = auVar18;
    auVar19 = auVar18;
    auVar17 = auVar18;
    auVar16 = auVar18;
    auVar15 = auVar18;
    auVar11 = auVar18;
    if (0 < param_4) {
      do {
        lVar5 = lVar5 + 1;
        auVar12 = vpmaxsw_avx(auVar12,*pauVar4);
        auVar21 = vpmaxsw_avx(auVar21,pauVar4[1]);
        auVar20 = vpmaxsw_avx(auVar20,pauVar4[2]);
        auVar19 = vpmaxsw_avx(auVar19,pauVar4[3]);
        auVar17 = vpmaxsw_avx(auVar17,pauVar4[4]);
        auVar16 = vpmaxsw_avx(auVar16,pauVar4[5]);
        auVar15 = vpmaxsw_avx(auVar15,pauVar4[6]);
        auVar11 = vpmaxsw_avx(auVar11,pauVar4[7]);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + lVar10 * 2);
      } while (lVar5 < param_4);
    }
    param_1 = param_1 + 8;
    _DAT_143091ec0 = auVar13;
    *param_2 = auVar12;
    param_2[1] = auVar21;
    param_2[2] = auVar20;
    param_2[3] = auVar19;
    param_2[4] = auVar17;
    param_2[5] = auVar16;
    param_2[6] = auVar15;
    param_2[7] = auVar11;
    param_2 = param_2 + 8;
    auVar13 = _DAT_143091ec0;
  }
  for (; lVar8 < (longlong)uVar9; lVar8 = lVar8 + 0x20) {
    lVar5 = 0;
    pauVar4 = param_1;
    auVar18 = auVar13;
    auVar21 = auVar13;
    auVar20 = auVar13;
    auVar19 = auVar13;
    if (0 < param_4) {
      do {
        lVar5 = lVar5 + 1;
        auVar18 = vpmaxsw_avx(auVar18,*pauVar4);
        auVar21 = vpmaxsw_avx(auVar21,pauVar4[1]);
        auVar20 = vpmaxsw_avx(auVar20,pauVar4[2]);
        auVar19 = vpmaxsw_avx(auVar19,pauVar4[3]);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + lVar10 * 2);
      } while (lVar5 < param_4);
    }
    param_1 = param_1 + 4;
    _DAT_143091ec0 = auVar12;
    *param_2 = auVar18;
    param_2[1] = auVar21;
    param_2[2] = auVar20;
    param_2[3] = auVar19;
    param_2 = param_2 + 4;
    auVar12 = _DAT_143091ec0;
  }
  auVar13 = auVar12;
  for (; lVar8 < (longlong)(param_3 & 0xfffffffffffffff8); lVar8 = lVar8 + 8) {
    lVar5 = 0;
    lVar6 = 0;
    auVar18 = auVar12;
    if (0 < param_4) {
      do {
        lVar5 = lVar5 + 1;
        auVar18 = vpmaxsw_avx(auVar18,*(undefined1 (*) [16])(*param_1 + lVar6 * 2));
        lVar6 = lVar6 + lVar10;
      } while (lVar5 < param_4);
    }
    param_1 = param_1 + 1;
    _DAT_143091ec0 = auVar13;
    *param_2 = auVar18;
    param_2 = param_2 + 1;
    auVar13 = _DAT_143091ec0;
  }
  auVar18 = auVar13;
  while (_DAT_143091ec0 = auVar18, lVar8 < (longlong)(param_3 & 0xfffffffffffffffc)) {
    lVar6 = 0;
    lVar5 = 0;
    auVar18 = auVar13;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar5);
        lVar5 = lVar5 + lVar10 * 2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *puVar1;
        auVar18 = vpmaxsw_avx(auVar18,auVar12);
      } while (lVar6 < param_4);
    }
    lVar8 = lVar8 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(auVar18,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
    auVar18 = _DAT_143091ec0;
  }
  for (; lVar8 < (longlong)(param_3 & 0xfffffffffffffffe); lVar8 = lVar8 + 2) {
    lVar5 = 0;
    auVar14 = ZEXT1664(auVar18);
    lVar6 = 0;
    if (0 < param_4) {
      do {
        auVar13 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar6 * 2),0);
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + lVar10;
        auVar13 = vpmaxsw_avx(auVar14._0_16_,auVar13);
        auVar14 = ZEXT1664(auVar13);
      } while (lVar5 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_2 = auVar14._0_4_;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
  }
  while (lVar8 < (longlong)param_3) {
    lVar6 = 0;
    lVar5 = 0;
    auVar13 = _DAT_143091ec0;
    if (0 < param_4) {
      do {
        lVar6 = lVar6 + 1;
        auVar18 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar5 * 2),0);
        lVar5 = lVar5 + lVar10;
        auVar13 = vpmaxsw_avx(auVar13,auVar18);
      } while (lVar6 < param_4);
    }
    lVar8 = lVar8 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(auVar13,0);
  }
  return;
}

