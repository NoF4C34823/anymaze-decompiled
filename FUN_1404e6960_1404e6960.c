
void FUN_1404e6960(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar6 = 0;
  if (0 < param_6 + -1) {
    do {
      pauVar3 = param_1;
      uVar4 = param_5;
      pauVar7 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar10 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar10) {
          uVar10 = param_5;
        }
        FUN_1404e6cc0(param_1,param_2,param_3,uVar10);
        pauVar3 = (undefined1 (*) [16])(*param_1 + uVar10);
        uVar4 = param_5 - uVar10;
        pauVar7 = (undefined1 (*) [16])(*param_3 + uVar10);
      }
      uVar10 = (longlong)uVar4 >> 4;
      if (uVar10 != 0) {
        lVar2 = 0;
        auVar12 = vpminub_avx(*pauVar3,*(undefined1 (*) [16])(*pauVar3 + param_2));
        auVar12 = vpminub_avx(auVar12,*(undefined1 (*) [16])(*pauVar3 + param_2 * 2));
        auVar13 = ZEXT1664(auVar12);
        if (0 < (longlong)(uVar10 & 0xfffffffffffffffe)) {
          do {
            auVar12 = vpminub_avx(pauVar3[1],*(undefined1 (*) [16])(pauVar3[1] + param_2));
            lVar2 = lVar2 + 2;
            auVar15 = vpminub_avx(auVar12,*(undefined1 (*) [16])(pauVar3[1] + param_2 * 2));
            auVar11 = auVar13._0_16_;
            auVar12 = vpalignr_avx(auVar15,auVar11,4);
            auVar14 = vpalignr_avx(auVar15,auVar11,8);
            auVar12 = vpminub_avx(auVar12,auVar11);
            auVar12 = vpminub_avx(auVar14,auVar12);
            *pauVar7 = auVar12;
            auVar12 = vpminub_avx(pauVar3[2],*(undefined1 (*) [16])(pauVar3[2] + param_2));
            auVar14 = vpminub_avx(auVar12,*(undefined1 (*) [16])(pauVar3[2] + param_2 * 2));
            auVar13 = ZEXT1664(auVar14);
            pauVar3 = pauVar3 + 2;
            auVar12 = vpalignr_avx(auVar14,auVar15,4);
            auVar14 = vpalignr_avx(auVar14,auVar15,8);
            auVar12 = vpminub_avx(auVar12,auVar15);
            auVar12 = vpminub_avx(auVar14,auVar12);
            pauVar7[1] = auVar12;
            pauVar7 = pauVar7 + 2;
          } while (lVar2 < (longlong)(uVar10 & 0xfffffffffffffffe));
        }
        while (lVar2 < (longlong)uVar10) {
          auVar12 = vpminub_avx(pauVar3[1],*(undefined1 (*) [16])(pauVar3[1] + param_2));
          lVar2 = lVar2 + 1;
          auVar15 = vpminub_avx(auVar12,*(undefined1 (*) [16])(pauVar3[1] + param_2 * 2));
          pauVar3 = pauVar3 + 1;
          auVar11 = auVar13._0_16_;
          auVar12 = vpalignr_avx(auVar15,auVar11,4);
          auVar14 = vpalignr_avx(auVar15,auVar11,8);
          auVar12 = vpminub_avx(auVar12,auVar11);
          auVar12 = vpminub_avx(auVar14,auVar12);
          auVar13 = ZEXT1664(auVar15);
          *pauVar7 = auVar12;
          pauVar7 = pauVar7 + 1;
        }
      }
      if ((uVar4 & 0xf) != 0) {
        FUN_1404e6cc0(pauVar3,param_2);
      }
      lVar6 = lVar6 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (lVar6 < param_6 + -1);
  }
  if (lVar6 < param_6) {
    do {
      uVar4 = param_5;
      pauVar3 = param_1;
      pauVar7 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar10 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar10) {
          uVar10 = param_5;
        }
        FUN_1404e6cc0(param_1,param_2,param_3,uVar10);
        pauVar3 = (undefined1 (*) [16])(*param_1 + uVar10);
        uVar4 = param_5 - uVar10;
        pauVar7 = (undefined1 (*) [16])(*param_3 + uVar10);
      }
      lVar2 = (longlong)uVar4 >> 4;
      if (lVar2 != 0) {
        lVar9 = 0;
        pauVar5 = (undefined1 (*) [16])(*pauVar3 + param_2);
        auVar12 = vpminub_avx(*pauVar3,*pauVar5);
        pauVar8 = (undefined1 (*) [16])(*pauVar3 + param_2 * 2);
        auVar12 = vpminub_avx(auVar12,*pauVar8);
        auVar14 = auVar12;
        if (1 < lVar2) {
          do {
            auVar12 = vpminub_avx(pauVar3[1],*(undefined1 (*) [16])(pauVar3[1] + param_2));
            lVar9 = lVar9 + 1;
            auVar12 = vpminub_avx(auVar12,*(undefined1 (*) [16])(pauVar3[1] + param_2 * 2));
            pauVar3 = pauVar3 + 1;
            auVar15 = vpalignr_avx(auVar12,auVar14,4);
            auVar11 = vpalignr_avx(auVar12,auVar14,8);
            auVar14 = vpminub_avx(auVar15,auVar14);
            auVar14 = vpminub_avx(auVar11,auVar14);
            *pauVar7 = auVar14;
            pauVar7 = pauVar7 + 1;
            auVar14 = auVar12;
          } while (lVar9 < lVar2 + -1);
          pauVar5 = (undefined1 (*) [16])(*pauVar3 + param_2);
          pauVar8 = (undefined1 (*) [16])(*pauVar3 + param_2 * 2);
        }
        pauVar1 = pauVar3 + 1;
        pauVar3 = pauVar3 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)*pauVar1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)pauVar5[1];
        auVar14 = vpminub_avx(auVar14,auVar15);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)pauVar8[1];
        auVar15 = vpminub_avx(auVar14,auVar11);
        auVar14 = vpalignr_avx(auVar15,auVar12,8);
        auVar15 = vpalignr_avx(auVar15,auVar12,4);
        auVar12 = vpminub_avx(auVar15,auVar12);
        auVar12 = vpminub_avx(auVar14,auVar12);
        *pauVar7 = auVar12;
        pauVar7 = pauVar7 + 1;
      }
      if ((uVar4 & 0xf) != 0) {
        FUN_1404e6cc0(pauVar3,param_2,pauVar7);
      }
      lVar6 = lVar6 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (lVar6 < param_6);
  }
  return;
}

