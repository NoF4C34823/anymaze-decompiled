
void FUN_1404fc820(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  
  lVar6 = 0;
  if (0 < param_6 + -1) {
    lVar11 = param_2 * 2;
    do {
      uVar7 = ((ulonglong)param_3 & 0xf) >> 1;
      pauVar4 = param_1;
      pauVar9 = param_3;
      uVar10 = param_5;
      if (uVar7 != 0) {
        uVar7 = 8 - uVar7;
        if ((longlong)param_5 <= (longlong)uVar7) {
          uVar7 = param_5;
        }
        FUN_1404fcbe0(param_1,param_2,param_3,uVar7,1);
        uVar10 = param_5 - uVar7;
        pauVar4 = (undefined1 (*) [16])(*param_1 + uVar7 * 2);
        pauVar9 = (undefined1 (*) [16])(*param_3 + uVar7 * 2);
      }
      uVar7 = (longlong)uVar10 >> 3;
      if (uVar7 != 0) {
        lVar5 = 0;
        auVar14 = vpminuw_avx(*pauVar4,*(undefined1 (*) [16])(*pauVar4 + lVar11));
        auVar14 = vpminuw_avx(auVar14,*(undefined1 (*) [16])(*pauVar4 + param_2 * 4));
        auVar15 = ZEXT1664(auVar14);
        if (0 < (longlong)(uVar7 & 0xfffffffffffffffe)) {
          do {
            auVar14 = vpminuw_avx(pauVar4[1],*(undefined1 (*) [16])(pauVar4[1] + lVar11));
            lVar5 = lVar5 + 2;
            auVar3 = vpminuw_avx(auVar14,*(undefined1 (*) [16])(pauVar4[1] + param_2 * 4));
            auVar13 = auVar15._0_16_;
            auVar14 = vpalignr_avx(auVar3,auVar13,2);
            auVar2 = vpalignr_avx(auVar3,auVar13,4);
            auVar14 = vpminuw_avx(auVar14,auVar13);
            auVar14 = vpminuw_avx(auVar2,auVar14);
            *pauVar9 = auVar14;
            auVar14 = vpminuw_avx(pauVar4[2],*(undefined1 (*) [16])(pauVar4[2] + lVar11));
            auVar2 = vpminuw_avx(auVar14,*(undefined1 (*) [16])(pauVar4[2] + param_2 * 4));
            auVar15 = ZEXT1664(auVar2);
            pauVar4 = pauVar4 + 2;
            auVar14 = vpalignr_avx(auVar2,auVar3,2);
            auVar2 = vpalignr_avx(auVar2,auVar3,4);
            auVar14 = vpminuw_avx(auVar14,auVar3);
            auVar14 = vpminuw_avx(auVar2,auVar14);
            pauVar9[1] = auVar14;
            pauVar9 = pauVar9 + 2;
          } while (lVar5 < (longlong)(uVar7 & 0xfffffffffffffffe));
        }
        while (lVar5 < (longlong)uVar7) {
          auVar14 = vpminuw_avx(pauVar4[1],*(undefined1 (*) [16])(pauVar4[1] + lVar11));
          lVar5 = lVar5 + 1;
          auVar3 = vpminuw_avx(auVar14,*(undefined1 (*) [16])(pauVar4[1] + param_2 * 4));
          pauVar4 = pauVar4 + 1;
          auVar13 = auVar15._0_16_;
          auVar14 = vpalignr_avx(auVar3,auVar13,2);
          auVar2 = vpalignr_avx(auVar3,auVar13,4);
          auVar14 = vpminuw_avx(auVar14,auVar13);
          auVar14 = vpminuw_avx(auVar2,auVar14);
          auVar15 = ZEXT1664(auVar3);
          *pauVar9 = auVar14;
          pauVar9 = pauVar9 + 1;
        }
      }
      if ((uVar10 & 7) != 0) {
        FUN_1404fcbe0(pauVar4,param_2,pauVar9,uVar10 & 7,1);
      }
      lVar6 = lVar6 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2 * 2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 2);
    } while (lVar6 < param_6 + -1);
  }
  if (lVar6 < param_6) {
    do {
      uVar7 = ((ulonglong)param_3 & 0xf) >> 1;
      pauVar4 = param_1;
      pauVar9 = param_3;
      uVar10 = param_5;
      if (uVar7 != 0) {
        uVar7 = 8 - uVar7;
        if ((longlong)param_5 <= (longlong)uVar7) {
          uVar7 = param_5;
        }
        FUN_1404fcbe0(param_1,param_2,param_3,uVar7,1);
        pauVar4 = (undefined1 (*) [16])(*param_1 + uVar7 * 2);
        uVar10 = param_5 - uVar7;
        pauVar9 = (undefined1 (*) [16])(*param_3 + uVar7 * 2);
      }
      lVar11 = (longlong)uVar10 >> 3;
      if (lVar11 != 0) {
        lVar5 = 0;
        pauVar8 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
        auVar14 = vpminuw_avx(*pauVar4,*pauVar8);
        pauVar12 = (undefined1 (*) [16])(*pauVar4 + param_2 * 4);
        auVar14 = vpminuw_avx(auVar14,*pauVar12);
        auVar2 = auVar14;
        if (1 < lVar11) {
          do {
            auVar14 = vpminuw_avx(pauVar4[1],*(undefined1 (*) [16])(pauVar4[1] + param_2 * 2));
            lVar5 = lVar5 + 1;
            auVar14 = vpminuw_avx(auVar14,*(undefined1 (*) [16])(pauVar4[1] + param_2 * 4));
            pauVar4 = pauVar4 + 1;
            auVar3 = vpalignr_avx(auVar14,auVar2,2);
            auVar13 = vpalignr_avx(auVar14,auVar2,4);
            auVar2 = vpminuw_avx(auVar3,auVar2);
            auVar2 = vpminuw_avx(auVar13,auVar2);
            *pauVar9 = auVar2;
            pauVar9 = pauVar9 + 1;
            auVar2 = auVar14;
          } while (lVar5 < lVar11 + -1);
          pauVar8 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
          pauVar12 = (undefined1 (*) [16])(*pauVar4 + param_2 * 4);
        }
        pauVar1 = pauVar4 + 1;
        pauVar4 = pauVar4 + 1;
        auVar2 = vpminuw_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)pauVar8[1]));
        auVar3 = vpminuw_avx(auVar2,ZEXT416(*(uint *)pauVar12[1]));
        auVar2 = vpalignr_avx(auVar3,auVar14,4);
        auVar3 = vpalignr_avx(auVar3,auVar14,2);
        auVar14 = vpminuw_avx(auVar3,auVar14);
        auVar14 = vpminuw_avx(auVar2,auVar14);
        *pauVar9 = auVar14;
        pauVar9 = pauVar9 + 1;
      }
      if ((uVar10 & 7) != 0) {
        FUN_1404fcbe0(pauVar4,param_2,pauVar9,uVar10 & 7,1);
      }
      lVar6 = lVar6 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2 * 2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 2);
    } while (lVar6 < param_6);
  }
  return;
}

