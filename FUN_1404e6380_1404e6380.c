
void FUN_1404e6380(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  
  lVar7 = 0;
  if (0 < param_6 + -1) {
    do {
      pauVar4 = param_1;
      uVar5 = param_5;
      pauVar8 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar11 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar11) {
          uVar11 = param_5;
        }
        FUN_1404e6700(param_1,param_2,param_3,uVar11);
        pauVar4 = (undefined1 (*) [16])(*param_1 + uVar11);
        uVar5 = param_5 - uVar11;
        pauVar8 = (undefined1 (*) [16])(*param_3 + uVar11);
      }
      uVar11 = (longlong)uVar5 >> 4;
      if (uVar11 != 0) {
        lVar3 = 0;
        auVar13 = vpminub_avx(*pauVar4,*(undefined1 (*) [16])(*pauVar4 + param_2));
        auVar13 = vpminub_avx(auVar13,*(undefined1 (*) [16])(*pauVar4 + param_2 * 2));
        auVar14 = ZEXT1664(auVar13);
        if (0 < (longlong)(uVar11 & 0xfffffffffffffffe)) {
          do {
            auVar13 = vpminub_avx(pauVar4[1],*(undefined1 (*) [16])(pauVar4[1] + param_2));
            lVar3 = lVar3 + 2;
            auVar2 = vpminub_avx(auVar13,*(undefined1 (*) [16])(pauVar4[1] + param_2 * 2));
            auVar12 = auVar14._0_16_;
            auVar13 = vpalignr_avx(auVar2,auVar12,3);
            auVar1 = vpalignr_avx(auVar2,auVar12,6);
            auVar13 = vpminub_avx(auVar13,auVar12);
            auVar13 = vpminub_avx(auVar1,auVar13);
            *pauVar8 = auVar13;
            auVar13 = vpminub_avx(pauVar4[2],*(undefined1 (*) [16])(pauVar4[2] + param_2));
            auVar1 = vpminub_avx(auVar13,*(undefined1 (*) [16])(pauVar4[2] + param_2 * 2));
            auVar14 = ZEXT1664(auVar1);
            pauVar4 = pauVar4 + 2;
            auVar13 = vpalignr_avx(auVar1,auVar2,3);
            auVar1 = vpalignr_avx(auVar1,auVar2,6);
            auVar13 = vpminub_avx(auVar13,auVar2);
            auVar13 = vpminub_avx(auVar1,auVar13);
            pauVar8[1] = auVar13;
            pauVar8 = pauVar8 + 2;
          } while (lVar3 < (longlong)(uVar11 & 0xfffffffffffffffe));
        }
        while (lVar3 < (longlong)uVar11) {
          auVar13 = vpminub_avx(pauVar4[1],*(undefined1 (*) [16])(pauVar4[1] + param_2));
          lVar3 = lVar3 + 1;
          auVar2 = vpminub_avx(auVar13,*(undefined1 (*) [16])(pauVar4[1] + param_2 * 2));
          pauVar4 = pauVar4 + 1;
          auVar12 = auVar14._0_16_;
          auVar13 = vpalignr_avx(auVar2,auVar12,3);
          auVar1 = vpalignr_avx(auVar2,auVar12,6);
          auVar13 = vpminub_avx(auVar13,auVar12);
          auVar13 = vpminub_avx(auVar1,auVar13);
          auVar14 = ZEXT1664(auVar2);
          *pauVar8 = auVar13;
          pauVar8 = pauVar8 + 1;
        }
      }
      if ((uVar5 & 0xf) != 0) {
        FUN_1404e6700(pauVar4,param_2);
      }
      lVar7 = lVar7 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (lVar7 < param_6 + -1);
  }
  if (lVar7 < param_6) {
    do {
      uVar5 = param_5;
      pauVar4 = param_1;
      pauVar8 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar11 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar11) {
          uVar11 = param_5;
        }
        FUN_1404e6700(param_1,param_2,param_3,uVar11);
        pauVar4 = (undefined1 (*) [16])(*param_1 + uVar11);
        uVar5 = param_5 - uVar11;
        pauVar8 = (undefined1 (*) [16])(*param_3 + uVar11);
      }
      lVar3 = (longlong)uVar5 >> 4;
      if (lVar3 != 0) {
        lVar10 = 0;
        pauVar6 = (undefined1 (*) [16])(*pauVar4 + param_2);
        auVar13 = vpminub_avx(*pauVar4,*pauVar6);
        pauVar9 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
        auVar13 = vpminub_avx(auVar13,*pauVar9);
        auVar1 = auVar13;
        if (1 < lVar3) {
          do {
            auVar13 = vpminub_avx(pauVar4[1],*(undefined1 (*) [16])(pauVar4[1] + param_2));
            lVar10 = lVar10 + 1;
            auVar13 = vpminub_avx(auVar13,*(undefined1 (*) [16])(pauVar4[1] + param_2 * 2));
            pauVar4 = pauVar4 + 1;
            auVar2 = vpalignr_avx(auVar13,auVar1,3);
            auVar12 = vpalignr_avx(auVar13,auVar1,6);
            auVar1 = vpminub_avx(auVar2,auVar1);
            auVar1 = vpminub_avx(auVar12,auVar1);
            *pauVar8 = auVar1;
            pauVar8 = pauVar8 + 1;
            auVar1 = auVar13;
          } while (lVar10 < lVar3 + -1);
          pauVar6 = (undefined1 (*) [16])(*pauVar4 + param_2);
          pauVar9 = (undefined1 (*) [16])(*pauVar4 + param_2 * 2);
        }
        auVar1 = vpinsrw_avx(ZEXT416(*(uint *)pauVar6[1]),(uint)*(ushort *)(pauVar6[1] + 4),2);
        auVar2 = vpinsrw_avx(ZEXT416(*(uint *)pauVar4[1]),(uint)*(ushort *)(pauVar4[1] + 4),2);
        pauVar4 = pauVar4 + 1;
        auVar2 = vpminub_avx(auVar2,auVar1);
        auVar1 = vpinsrw_avx(ZEXT416(*(uint *)pauVar9[1]),(uint)*(ushort *)(pauVar9[1] + 4),2);
        auVar2 = vpminub_avx(auVar2,auVar1);
        auVar1 = vpalignr_avx(auVar2,auVar13,3);
        auVar2 = vpalignr_avx(auVar2,auVar13,6);
        auVar13 = vpminub_avx(auVar1,auVar13);
        auVar13 = vpminub_avx(auVar2,auVar13);
        *pauVar8 = auVar13;
        pauVar8 = pauVar8 + 1;
      }
      if ((uVar5 & 0xf) != 0) {
        FUN_1404e6700(pauVar4,param_2,pauVar8);
      }
      lVar7 = lVar7 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    } while (lVar7 < param_6);
  }
  return;
}

