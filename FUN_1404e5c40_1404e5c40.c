
void FUN_1404e5c40(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  
  lVar8 = 0;
  if (0 < param_6 + -1) {
    do {
      pauVar5 = param_1;
      uVar6 = param_5;
      pauVar9 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar12 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar12) {
          uVar12 = param_5;
        }
        FUN_1404e5fc0(param_1,param_2,param_3,uVar12);
        pauVar5 = (undefined1 (*) [16])(*param_1 + uVar12);
        uVar6 = param_5 - uVar12;
        pauVar9 = (undefined1 (*) [16])(*param_3 + uVar12);
      }
      uVar12 = (longlong)uVar6 >> 4;
      if (uVar12 != 0) {
        lVar4 = 0;
        auVar14 = vpminub_avx(*pauVar5,*(undefined1 (*) [16])(*pauVar5 + param_2));
        auVar14 = vpminub_avx(auVar14,*(undefined1 (*) [16])(*pauVar5 + param_2 * 2));
        auVar15 = ZEXT1664(auVar14);
        if (0 < (longlong)(uVar12 & 0xfffffffffffffffe)) {
          do {
            auVar14 = vpminub_avx(pauVar5[1],*(undefined1 (*) [16])(pauVar5[1] + param_2));
            lVar4 = lVar4 + 2;
            auVar3 = vpminub_avx(auVar14,*(undefined1 (*) [16])(pauVar5[1] + param_2 * 2));
            auVar13 = auVar15._0_16_;
            auVar14 = vpalignr_avx(auVar3,auVar13,1);
            auVar2 = vpalignr_avx(auVar3,auVar13,2);
            auVar14 = vpminub_avx(auVar14,auVar13);
            auVar14 = vpminub_avx(auVar2,auVar14);
            *pauVar9 = auVar14;
            auVar14 = vpminub_avx(pauVar5[2],*(undefined1 (*) [16])(pauVar5[2] + param_2));
            auVar2 = vpminub_avx(auVar14,*(undefined1 (*) [16])(pauVar5[2] + param_2 * 2));
            auVar15 = ZEXT1664(auVar2);
            pauVar5 = pauVar5 + 2;
            auVar14 = vpalignr_avx(auVar2,auVar3,1);
            auVar2 = vpalignr_avx(auVar2,auVar3,2);
            auVar14 = vpminub_avx(auVar14,auVar3);
            auVar14 = vpminub_avx(auVar2,auVar14);
            pauVar9[1] = auVar14;
            pauVar9 = pauVar9 + 2;
          } while (lVar4 < (longlong)(uVar12 & 0xfffffffffffffffe));
        }
        while (lVar4 < (longlong)uVar12) {
          auVar14 = vpminub_avx(pauVar5[1],*(undefined1 (*) [16])(pauVar5[1] + param_2));
          lVar4 = lVar4 + 1;
          auVar3 = vpminub_avx(auVar14,*(undefined1 (*) [16])(pauVar5[1] + param_2 * 2));
          pauVar5 = pauVar5 + 1;
          auVar13 = auVar15._0_16_;
          auVar14 = vpalignr_avx(auVar3,auVar13,1);
          auVar2 = vpalignr_avx(auVar3,auVar13,2);
          auVar14 = vpminub_avx(auVar14,auVar13);
          auVar14 = vpminub_avx(auVar2,auVar14);
          auVar15 = ZEXT1664(auVar3);
          *pauVar9 = auVar14;
          pauVar9 = pauVar9 + 1;
        }
      }
      if ((uVar6 & 0xf) != 0) {
        FUN_1404e5fc0(pauVar5,param_2);
      }
      lVar8 = lVar8 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (lVar8 < param_6 + -1);
  }
  if (lVar8 < param_6) {
    do {
      uVar6 = param_5;
      pauVar5 = param_1;
      pauVar9 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar12 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar12) {
          uVar12 = param_5;
        }
        FUN_1404e5fc0(param_1,param_2,param_3,uVar12);
        pauVar5 = (undefined1 (*) [16])(*param_1 + uVar12);
        uVar6 = param_5 - uVar12;
        pauVar9 = (undefined1 (*) [16])(*param_3 + uVar12);
      }
      lVar4 = (longlong)uVar6 >> 4;
      if (lVar4 != 0) {
        lVar11 = 0;
        pauVar7 = (undefined1 (*) [16])(*pauVar5 + param_2);
        auVar14 = vpminub_avx(*pauVar5,*pauVar7);
        pauVar10 = (undefined1 (*) [16])(*pauVar5 + param_2 * 2);
        auVar14 = vpminub_avx(auVar14,*pauVar10);
        auVar2 = auVar14;
        if (1 < lVar4) {
          do {
            auVar14 = vpminub_avx(pauVar5[1],*(undefined1 (*) [16])(pauVar5[1] + param_2));
            lVar11 = lVar11 + 1;
            auVar14 = vpminub_avx(auVar14,*(undefined1 (*) [16])(pauVar5[1] + param_2 * 2));
            pauVar5 = pauVar5 + 1;
            auVar3 = vpalignr_avx(auVar14,auVar2,1);
            auVar13 = vpalignr_avx(auVar14,auVar2,2);
            auVar2 = vpminub_avx(auVar3,auVar2);
            auVar2 = vpminub_avx(auVar13,auVar2);
            *pauVar9 = auVar2;
            pauVar9 = pauVar9 + 1;
            auVar2 = auVar14;
          } while (lVar11 < lVar4 + -1);
          pauVar7 = (undefined1 (*) [16])(*pauVar5 + param_2);
          pauVar10 = (undefined1 (*) [16])(*pauVar5 + param_2 * 2);
        }
        pauVar1 = pauVar5 + 1;
        pauVar5 = pauVar5 + 1;
        auVar2 = vpminub_avx(ZEXT216(*(ushort *)*pauVar1),ZEXT216(*(ushort *)pauVar7[1]));
        auVar3 = vpminub_avx(auVar2,ZEXT216(*(ushort *)pauVar10[1]));
        auVar2 = vpalignr_avx(auVar3,auVar14,2);
        auVar3 = vpalignr_avx(auVar3,auVar14,1);
        auVar14 = vpminub_avx(auVar3,auVar14);
        auVar14 = vpminub_avx(auVar2,auVar14);
        *pauVar9 = auVar14;
        pauVar9 = pauVar9 + 1;
      }
      if ((uVar6 & 0xf) != 0) {
        FUN_1404e5fc0(pauVar5,param_2,pauVar9);
      }
      lVar8 = lVar8 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (lVar8 < param_6);
  }
  return;
}

