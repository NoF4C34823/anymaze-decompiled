
void FUN_1404a4ce0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  
  lVar7 = 0;
  if (0 < param_6 + -1) {
    do {
      uVar4 = param_5;
      pauVar6 = param_1;
      pauVar9 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar8 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar8) {
          uVar8 = param_5;
        }
        FUN_1404a50e0(param_1,param_2,param_3,uVar8);
        pauVar6 = (undefined1 (*) [16])(*param_1 + uVar8);
        uVar4 = param_5 - uVar8;
        pauVar9 = (undefined1 (*) [16])(*param_3 + uVar8);
      }
      lVar5 = (longlong)uVar4 >> 4;
      if (lVar5 != 0) {
        lVar10 = 0;
        auVar12 = vpmaxub_avx(*pauVar6,*(undefined1 (*) [16])(*pauVar6 + param_2));
        auVar12 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(*pauVar6 + param_2 * 2));
        auVar13 = ZEXT1664(auVar12);
        if (1 < lVar5) {
          do {
            auVar12 = vpmaxub_avx(pauVar6[1],*(undefined1 (*) [16])(pauVar6[1] + param_2));
            lVar10 = lVar10 + 2;
            auVar2 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(pauVar6[1] + param_2 * 2));
            auVar11 = auVar13._0_16_;
            auVar12 = vpalignr_avx(auVar2,auVar11,1);
            auVar1 = vpalignr_avx(auVar2,auVar11,2);
            auVar12 = vpmaxub_avx(auVar12,auVar11);
            auVar12 = vpmaxub_avx(auVar1,auVar12);
            *pauVar9 = auVar12;
            auVar12 = vpmaxub_avx(pauVar6[2],*(undefined1 (*) [16])(pauVar6[2] + param_2));
            auVar1 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(pauVar6[2] + param_2 * 2));
            auVar13 = ZEXT1664(auVar1);
            pauVar6 = pauVar6 + 2;
            auVar12 = vpalignr_avx(auVar1,auVar2,1);
            auVar1 = vpalignr_avx(auVar1,auVar2,2);
            auVar12 = vpmaxub_avx(auVar12,auVar2);
            auVar12 = vpmaxub_avx(auVar1,auVar12);
            pauVar9[1] = auVar12;
            pauVar9 = pauVar9 + 2;
          } while (lVar10 < lVar5 + -1);
        }
        while (lVar10 < lVar5) {
          auVar12 = vpmaxub_avx(pauVar6[1],*(undefined1 (*) [16])(pauVar6[1] + param_2));
          lVar10 = lVar10 + 1;
          auVar2 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(pauVar6[1] + param_2 * 2));
          pauVar6 = pauVar6 + 1;
          auVar11 = auVar13._0_16_;
          auVar12 = vpalignr_avx(auVar2,auVar11,1);
          auVar1 = vpalignr_avx(auVar2,auVar11,2);
          auVar12 = vpmaxub_avx(auVar12,auVar11);
          auVar12 = vpmaxub_avx(auVar1,auVar12);
          auVar13 = ZEXT1664(auVar2);
          *pauVar9 = auVar12;
          pauVar9 = pauVar9 + 1;
        }
      }
      if ((uVar4 & 0xf) != 0) {
        FUN_1404a50e0(pauVar6,param_2);
      }
      lVar7 = lVar7 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (lVar7 < param_6 + -1);
  }
  for (; lVar7 < param_6; lVar7 = lVar7 + 1) {
    uVar4 = param_5;
    pauVar6 = param_1;
    pauVar9 = param_3;
    if (((ulonglong)param_3 & 0xf) != 0) {
      uVar8 = 0x10 - ((ulonglong)param_3 & 0xf);
      if ((longlong)param_5 <= (longlong)uVar8) {
        uVar8 = param_5;
      }
      FUN_1404a50e0(param_1,param_2,param_3,uVar8);
      pauVar6 = (undefined1 (*) [16])(*param_1 + uVar8);
      uVar4 = param_5 - uVar8;
      pauVar9 = (undefined1 (*) [16])(*param_3 + uVar8);
    }
    lVar5 = (longlong)uVar4 >> 4;
    if (lVar5 != 0) {
      lVar10 = 0;
      auVar12 = vpmaxub_avx(*pauVar6,*(undefined1 (*) [16])(*pauVar6 + param_2));
      auVar12 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(*pauVar6 + param_2 * 2));
      auVar13 = ZEXT1664(auVar12);
      if (lVar5 != 2 && SCARRY8(lVar5,-2) == lVar5 + -2 < 0) {
        do {
          auVar12 = vpmaxub_avx(pauVar6[1],*(undefined1 (*) [16])(pauVar6[1] + param_2));
          lVar10 = lVar10 + 2;
          auVar2 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(pauVar6[1] + param_2 * 2));
          auVar11 = auVar13._0_16_;
          auVar12 = vpalignr_avx(auVar2,auVar11,1);
          auVar1 = vpalignr_avx(auVar2,auVar11,2);
          auVar12 = vpmaxub_avx(auVar12,auVar11);
          auVar12 = vpmaxub_avx(auVar1,auVar12);
          *pauVar9 = auVar12;
          auVar12 = vpmaxub_avx(pauVar6[2],*(undefined1 (*) [16])(pauVar6[2] + param_2));
          auVar1 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(pauVar6[2] + param_2 * 2));
          auVar13 = ZEXT1664(auVar1);
          pauVar6 = pauVar6 + 2;
          auVar12 = vpalignr_avx(auVar1,auVar2,1);
          auVar1 = vpalignr_avx(auVar1,auVar2,2);
          auVar12 = vpmaxub_avx(auVar12,auVar2);
          auVar12 = vpmaxub_avx(auVar1,auVar12);
          pauVar9[1] = auVar12;
          pauVar9 = pauVar9 + 2;
        } while (lVar10 < lVar5 + -2);
      }
      auVar12 = auVar13._0_16_;
      while (lVar10 < lVar5 + -1) {
        auVar12 = vpmaxub_avx(pauVar6[1],*(undefined1 (*) [16])(pauVar6[1] + param_2));
        lVar10 = lVar10 + 1;
        auVar12 = vpmaxub_avx(auVar12,*(undefined1 (*) [16])(pauVar6[1] + param_2 * 2));
        pauVar6 = pauVar6 + 1;
        auVar11 = auVar13._0_16_;
        auVar1 = vpalignr_avx(auVar12,auVar11,1);
        auVar2 = vpalignr_avx(auVar12,auVar11,2);
        auVar1 = vpmaxub_avx(auVar1,auVar11);
        auVar1 = vpmaxub_avx(auVar2,auVar1);
        auVar13 = ZEXT1664(auVar12);
        *pauVar9 = auVar1;
        pauVar9 = pauVar9 + 1;
      }
      pauVar3 = pauVar6 + 1;
      auVar1 = vpmaxub_avx(ZEXT216(*(ushort *)pauVar6[1]),ZEXT216(*(ushort *)(pauVar6[1] + param_2))
                          );
      pauVar6 = pauVar6 + 1;
      auVar2 = vpmaxub_avx(auVar1,ZEXT216(*(ushort *)(*pauVar3 + param_2 * 2)));
      auVar1 = vpalignr_avx(auVar2,auVar12,2);
      auVar2 = vpalignr_avx(auVar2,auVar12,1);
      auVar12 = vpmaxub_avx(auVar2,auVar12);
      auVar12 = vpmaxub_avx(auVar1,auVar12);
      *pauVar9 = auVar12;
      pauVar9 = pauVar9 + 1;
    }
    if ((uVar4 & 0xf) != 0) {
      FUN_1404a50e0(pauVar6,param_2,pauVar9);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + param_2);
    param_3 = (undefined1 (*) [16])(*param_3 + param_4);
  }
  return;
}

