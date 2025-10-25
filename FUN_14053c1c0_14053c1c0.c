
void FUN_14053c1c0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = 0;
  if (0 < param_6) {
    do {
      uVar8 = ((ulonglong)param_3 & 0x1f) >> 2;
      uVar4 = param_5;
      pauVar6 = param_1;
      pauVar7 = param_3;
      if (uVar8 != 0) {
        uVar8 = 8 - uVar8;
        if ((longlong)param_5 <= (longlong)uVar8) {
          uVar8 = param_5;
        }
        FUN_14053c340(param_1,param_2,param_3);
        pauVar6 = (undefined1 (*) [32])(*param_1 + uVar8 * 4);
        uVar4 = param_5 - uVar8;
        pauVar7 = (undefined1 (*) [32])(*param_3 + uVar8 * 4);
      }
      lVar5 = (longlong)uVar4 >> 3;
      if (lVar5 != 0) {
        lVar9 = 0;
        auVar1 = vmaxps_avx(*pauVar6,*(undefined1 (*) [32])(*pauVar6 + param_2 * 4));
        auVar1 = vmaxps_avx(auVar1,*(undefined1 (*) [32])(*pauVar6 + param_2 * 8));
        if (0 < lVar5) {
          do {
            lVar9 = lVar9 + 1;
            auVar2 = vmaxps_avx(pauVar6[1],*(undefined1 (*) [32])(pauVar6[1] + param_2 * 4));
            auVar2 = vmaxps_avx(auVar2,*(undefined1 (*) [32])(pauVar6[1] + param_2 * 8));
            pauVar6 = pauVar6 + 1;
            auVar3 = vperm2f128_avx(auVar1,auVar2,0x21);
            auVar1 = vmaxps_avx(auVar3,auVar1);
            auVar1 = vmaxps_avx(auVar2,auVar1);
            *pauVar7 = auVar1;
            pauVar7 = pauVar7 + 1;
            auVar1 = auVar2;
          } while (lVar9 < lVar5);
        }
      }
      if ((uVar4 & 7) != 0) {
        FUN_14053c340(pauVar6,param_2);
      }
      lVar10 = lVar10 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 4);
    } while (lVar10 < param_6);
  }
  return;
}

