
void FUN_14055cbe0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  ulonglong uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 auVar14 [32];
  
  lVar9 = 0;
  if (0 < param_6 + -1) {
    do {
      uVar5 = param_5;
      pauVar7 = param_1;
      pauVar12 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar10 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar10) {
          uVar10 = param_5;
        }
        FUN_14055cee0(param_1,param_2,param_3,uVar10);
        pauVar7 = (undefined1 (*) [32])(*param_1 + uVar10);
        uVar5 = param_5 - uVar10;
        pauVar12 = (undefined1 (*) [32])(*param_3 + uVar10);
      }
      lVar6 = (longlong)uVar5 >> 5;
      if (lVar6 != 0) {
        lVar11 = 0;
        auVar14 = vpminub_avx2(*pauVar7,*(undefined1 (*) [32])(*pauVar7 + param_2));
        auVar14 = vpminub_avx2(auVar14,*(undefined1 (*) [32])(*pauVar7 + param_2 * 2));
        if (0 < lVar6) {
          do {
            lVar11 = lVar11 + 1;
            auVar2 = vpminub_avx2(pauVar7[1],*(undefined1 (*) [32])(pauVar7[1] + param_2));
            auVar3 = vpminub_avx2(auVar2,*(undefined1 (*) [32])(pauVar7[1] + param_2 * 2));
            pauVar7 = pauVar7 + 1;
            auVar4 = vperm2i128_avx2(auVar14,auVar3,0x21);
            auVar2 = vpalignr_avx2(auVar4,auVar14,1);
            auVar4 = vpalignr_avx2(auVar4,auVar14,2);
            auVar14 = vpminub_avx2(auVar2,auVar14);
            auVar14 = vpminub_avx2(auVar4,auVar14);
            *pauVar12 = auVar14;
            pauVar12 = pauVar12 + 1;
            auVar14 = auVar3;
          } while (lVar11 < lVar6);
        }
      }
      if ((uVar5 & 0x1f) != 0) {
        FUN_14055cee0(pauVar7,param_2);
      }
      lVar9 = lVar9 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2);
      param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    } while (lVar9 < param_6 + -1);
  }
  if (lVar9 < param_6) {
    do {
      uVar5 = param_5;
      pauVar7 = param_1;
      pauVar12 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar10 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar10) {
          uVar10 = param_5;
        }
        FUN_14055cee0(param_1,param_2,param_3,uVar10);
        pauVar7 = (undefined1 (*) [32])(*param_1 + uVar10);
        uVar5 = param_5 - uVar10;
        pauVar12 = (undefined1 (*) [32])(*param_3 + uVar10);
      }
      lVar6 = (longlong)uVar5 >> 5;
      if (lVar6 != 0) {
        pauVar8 = (undefined1 (*) [32])(*pauVar7 + param_2);
        auVar14 = vpminub_avx2(*pauVar7,*pauVar8);
        pauVar13 = (undefined1 (*) [32])(*pauVar7 + param_2 * 2);
        auVar14 = vpminub_avx2(auVar14,*pauVar13);
        lVar11 = 0;
        auVar2 = auVar14;
        if (1 < lVar6) {
          do {
            lVar11 = lVar11 + 1;
            auVar14 = vpminub_avx2(pauVar7[1],*(undefined1 (*) [32])(pauVar7[1] + param_2));
            auVar14 = vpminub_avx2(auVar14,*(undefined1 (*) [32])(pauVar7[1] + param_2 * 2));
            pauVar7 = pauVar7 + 1;
            auVar3 = vperm2i128_avx2(auVar2,auVar14,0x21);
            auVar4 = vpalignr_avx2(auVar3,auVar2,1);
            auVar3 = vpalignr_avx2(auVar3,auVar2,2);
            auVar2 = vpminub_avx2(auVar4,auVar2);
            auVar2 = vpminub_avx2(auVar3,auVar2);
            *pauVar12 = auVar2;
            pauVar12 = pauVar12 + 1;
            auVar2 = auVar14;
          } while (lVar11 < lVar6 + -1);
          pauVar8 = (undefined1 (*) [32])(*pauVar7 + param_2);
          pauVar13 = (undefined1 (*) [32])(*pauVar7 + param_2 * 2);
        }
        pauVar1 = pauVar7 + 1;
        pauVar7 = pauVar7 + 1;
        auVar2 = vpminub_avx2(ZEXT232(*(ushort *)*pauVar1),ZEXT232(*(ushort *)pauVar8[1]));
        auVar2 = vpminub_avx2(auVar2,ZEXT232(*(ushort *)pauVar13[1]));
        auVar4 = vperm2i128_avx2(auVar14,auVar2,0x21);
        auVar2 = vpalignr_avx2(auVar4,auVar14,1);
        auVar4 = vpalignr_avx2(auVar4,auVar14,2);
        auVar14 = vpminub_avx2(auVar2,auVar14);
        auVar14 = vpminub_avx2(auVar4,auVar14);
        *pauVar12 = auVar14;
        pauVar12 = pauVar12 + 1;
      }
      if ((uVar5 & 0x1f) != 0) {
        FUN_14055cee0(pauVar7,param_2,pauVar12);
      }
      lVar9 = lVar9 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2);
      param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    } while (lVar9 < param_6);
  }
  return;
}

