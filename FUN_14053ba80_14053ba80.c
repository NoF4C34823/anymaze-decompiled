
void FUN_14053ba80(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  ulonglong uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  undefined1 auVar14 [32];
  
  lVar9 = 0;
  if (0 < param_6) {
    do {
      uVar7 = ((ulonglong)param_3 & 0x1f) >> 2;
      pauVar6 = param_1;
      pauVar10 = param_3;
      uVar11 = param_5;
      if (uVar7 != 0) {
        uVar7 = 8 - uVar7;
        if ((longlong)param_5 <= (longlong)uVar7) {
          uVar7 = param_5;
        }
        FUN_14053bc60(param_1,param_2,param_3,uVar7);
        pauVar6 = (undefined1 (*) [32])(*param_1 + uVar7 * 4);
        uVar11 = param_5 - uVar7;
        pauVar10 = (undefined1 (*) [32])(*param_3 + uVar7 * 4);
      }
      lVar12 = (longlong)uVar11 >> 3;
      if (lVar12 != 0) {
        pauVar8 = (undefined1 (*) [32])(*pauVar6 + param_2 * 4);
        auVar14 = vmaxps_avx(*pauVar6,*pauVar8);
        pauVar13 = (undefined1 (*) [32])(*pauVar6 + param_2 * 8);
        auVar14 = vmaxps_avx(auVar14,*pauVar13);
        lVar5 = 0;
        auVar2 = auVar14;
        if (1 < lVar12) {
          do {
            lVar5 = lVar5 + 1;
            auVar14 = vmaxps_avx(pauVar6[1],*(undefined1 (*) [32])(pauVar6[1] + param_2 * 4));
            auVar14 = vmaxps_avx(auVar14,*(undefined1 (*) [32])(pauVar6[1] + param_2 * 8));
            pauVar6 = pauVar6 + 1;
            auVar3 = vperm2f128_avx(auVar2,auVar14,0x21);
            auVar4 = vpalignr_avx2(auVar3,auVar2,4);
            auVar3 = vpalignr_avx2(auVar3,auVar2,8);
            auVar2 = vmaxps_avx(auVar4,auVar2);
            auVar2 = vmaxps_avx(auVar3,auVar2);
            *pauVar10 = auVar2;
            pauVar10 = pauVar10 + 1;
            auVar2 = auVar14;
          } while (lVar5 < lVar12 + -1);
          pauVar8 = (undefined1 (*) [32])(*pauVar6 + param_2 * 4);
          pauVar13 = (undefined1 (*) [32])(*pauVar6 + param_2 * 8);
        }
        pauVar1 = pauVar6 + 1;
        pauVar6 = pauVar6 + 1;
        auVar2 = vmaxps_avx(ZEXT832(*(ulonglong *)*pauVar1),ZEXT832(*(ulonglong *)pauVar8[1]));
        auVar2 = vmaxps_avx(auVar2,ZEXT832(*(ulonglong *)pauVar13[1]));
        auVar2 = vperm2f128_avx(auVar14,auVar2,0x21);
        auVar3 = vpalignr_avx2(auVar2,auVar14,4);
        auVar2 = vpalignr_avx2(auVar2,auVar14,8);
        auVar14 = vmaxps_avx(auVar3,auVar14);
        auVar14 = vmaxps_avx(auVar2,auVar14);
        *pauVar10 = auVar14;
        pauVar10 = pauVar10 + 1;
      }
      if ((uVar11 & 7) != 0) {
        FUN_14053bc60(pauVar6,param_2,pauVar10);
      }
      lVar9 = lVar9 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 4);
    } while (lVar9 < param_6);
  }
  return;
}

