
void FUN_1404bb900(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  
  lVar8 = 0;
  if (0 < param_6 + -1) {
    lVar3 = param_2 * 2;
    do {
      uVar9 = ((ulonglong)param_3 & 0xf) >> 1;
      pauVar5 = param_1;
      pauVar10 = param_3;
      uVar11 = param_5;
      if (uVar9 != 0) {
        uVar9 = 8 - uVar9;
        if ((longlong)param_5 <= (longlong)uVar9) {
          uVar9 = param_5;
        }
        FUN_1404bbd00(param_1,param_2,param_3,uVar9,1);
        uVar11 = param_5 - uVar9;
        pauVar5 = (undefined1 (*) [16])(*param_1 + uVar9 * 2);
        pauVar10 = (undefined1 (*) [16])(*param_3 + uVar9 * 2);
      }
      uVar9 = (longlong)uVar11 >> 3;
      if (uVar9 != 0) {
        lVar6 = 0;
        auVar13 = vpmaxuw_avx(*pauVar5,*(undefined1 (*) [16])(*pauVar5 + lVar3));
        auVar13 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(*pauVar5 + param_2 * 4));
        auVar14 = ZEXT1664(auVar13);
        if (0 < (longlong)(uVar9 & 0xfffffffffffffffe)) {
          do {
            auVar13 = vpmaxuw_avx(pauVar5[1],*(undefined1 (*) [16])(pauVar5[1] + lVar3));
            lVar6 = lVar6 + 2;
            auVar2 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(pauVar5[1] + param_2 * 4));
            auVar12 = auVar14._0_16_;
            auVar13 = vpalignr_avx(auVar2,auVar12,2);
            auVar1 = vpalignr_avx(auVar2,auVar12,4);
            auVar13 = vpmaxuw_avx(auVar13,auVar12);
            auVar13 = vpmaxuw_avx(auVar1,auVar13);
            *pauVar10 = auVar13;
            auVar13 = vpmaxuw_avx(pauVar5[2],*(undefined1 (*) [16])(pauVar5[2] + lVar3));
            auVar1 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(pauVar5[2] + param_2 * 4));
            auVar14 = ZEXT1664(auVar1);
            pauVar5 = pauVar5 + 2;
            auVar13 = vpalignr_avx(auVar1,auVar2,2);
            auVar1 = vpalignr_avx(auVar1,auVar2,4);
            auVar13 = vpmaxuw_avx(auVar13,auVar2);
            auVar13 = vpmaxuw_avx(auVar1,auVar13);
            pauVar10[1] = auVar13;
            pauVar10 = pauVar10 + 2;
          } while (lVar6 < (longlong)(uVar9 & 0xfffffffffffffffe));
        }
        while (lVar6 < (longlong)uVar9) {
          auVar13 = vpmaxuw_avx(pauVar5[1],*(undefined1 (*) [16])(pauVar5[1] + lVar3));
          lVar6 = lVar6 + 1;
          auVar2 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(pauVar5[1] + param_2 * 4));
          pauVar5 = pauVar5 + 1;
          auVar12 = auVar14._0_16_;
          auVar13 = vpalignr_avx(auVar2,auVar12,2);
          auVar1 = vpalignr_avx(auVar2,auVar12,4);
          auVar13 = vpmaxuw_avx(auVar13,auVar12);
          auVar13 = vpmaxuw_avx(auVar1,auVar13);
          auVar14 = ZEXT1664(auVar2);
          *pauVar10 = auVar13;
          pauVar10 = pauVar10 + 1;
        }
      }
      if ((uVar11 & 7) != 0) {
        FUN_1404bbd00(pauVar5,param_2,pauVar10,uVar11 & 7,1);
      }
      lVar8 = lVar8 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2 * 2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 2);
    } while (lVar8 < param_6 + -1);
  }
  if (lVar8 < param_6) {
    lVar3 = param_2 * 2;
    do {
      uVar9 = ((ulonglong)param_3 & 0xf) >> 1;
      pauVar5 = param_1;
      pauVar10 = param_3;
      uVar11 = param_5;
      if (uVar9 != 0) {
        uVar9 = 8 - uVar9;
        if ((longlong)param_5 <= (longlong)uVar9) {
          uVar9 = param_5;
        }
        FUN_1404bbd00(param_1,param_2,param_3,uVar9,1);
        pauVar5 = (undefined1 (*) [16])(*param_1 + uVar9 * 2);
        pauVar10 = (undefined1 (*) [16])(*param_3 + uVar9 * 2);
        uVar11 = param_5 - uVar9;
      }
      lVar6 = (longlong)uVar11 >> 3;
      if (lVar6 != 0) {
        lVar7 = 0;
        auVar13 = vpmaxuw_avx(*pauVar5,*(undefined1 (*) [16])(*pauVar5 + lVar3));
        auVar13 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(*pauVar5 + param_2 * 4));
        auVar14 = ZEXT1664(auVar13);
        if (lVar6 != 2 && SCARRY8(lVar6,-2) == lVar6 + -2 < 0) {
          do {
            auVar13 = vpmaxuw_avx(pauVar5[1],*(undefined1 (*) [16])(pauVar5[1] + lVar3));
            lVar7 = lVar7 + 2;
            auVar2 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(pauVar5[1] + param_2 * 4));
            auVar12 = auVar14._0_16_;
            auVar13 = vpalignr_avx(auVar2,auVar12,2);
            auVar1 = vpalignr_avx(auVar2,auVar12,4);
            auVar13 = vpmaxuw_avx(auVar13,auVar12);
            auVar13 = vpmaxuw_avx(auVar1,auVar13);
            *pauVar10 = auVar13;
            auVar13 = vpmaxuw_avx(pauVar5[2],*(undefined1 (*) [16])(pauVar5[2] + lVar3));
            auVar1 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(pauVar5[2] + param_2 * 4));
            auVar14 = ZEXT1664(auVar1);
            pauVar5 = pauVar5 + 2;
            auVar13 = vpalignr_avx(auVar1,auVar2,2);
            auVar1 = vpalignr_avx(auVar1,auVar2,4);
            auVar13 = vpmaxuw_avx(auVar13,auVar2);
            auVar13 = vpmaxuw_avx(auVar1,auVar13);
            pauVar10[1] = auVar13;
            pauVar10 = pauVar10 + 2;
          } while (lVar7 < lVar6 + -2);
        }
        auVar13 = auVar14._0_16_;
        while (lVar7 < lVar6 + -1) {
          auVar13 = vpmaxuw_avx(pauVar5[1],*(undefined1 (*) [16])(pauVar5[1] + lVar3));
          lVar7 = lVar7 + 1;
          auVar13 = vpmaxuw_avx(auVar13,*(undefined1 (*) [16])(pauVar5[1] + param_2 * 4));
          pauVar5 = pauVar5 + 1;
          auVar12 = auVar14._0_16_;
          auVar1 = vpalignr_avx(auVar13,auVar12,2);
          auVar2 = vpalignr_avx(auVar13,auVar12,4);
          auVar1 = vpmaxuw_avx(auVar1,auVar12);
          auVar1 = vpmaxuw_avx(auVar2,auVar1);
          auVar14 = ZEXT1664(auVar13);
          *pauVar10 = auVar1;
          pauVar10 = pauVar10 + 1;
        }
        auVar1 = vpmaxuw_avx(ZEXT416(*(uint *)pauVar5[1]),ZEXT416(*(uint *)(pauVar5[1] + lVar3)));
        pauVar4 = pauVar5 + 1;
        pauVar5 = pauVar5 + 1;
        auVar2 = vpmaxuw_avx(auVar1,ZEXT416(*(uint *)(*pauVar4 + param_2 * 4)));
        auVar1 = vpalignr_avx(auVar2,auVar13,4);
        auVar2 = vpalignr_avx(auVar2,auVar13,2);
        auVar13 = vpmaxuw_avx(auVar2,auVar13);
        auVar13 = vpmaxuw_avx(auVar1,auVar13);
        *pauVar10 = auVar13;
        pauVar10 = pauVar10 + 1;
      }
      if ((uVar11 & 7) != 0) {
        FUN_1404bbd00(pauVar5,param_2,pauVar10,uVar11 & 7,1);
      }
      lVar8 = lVar8 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2 * 2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 2);
    } while (lVar8 < param_6);
  }
  return;
}

