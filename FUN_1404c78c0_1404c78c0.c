
void FUN_1404c78c0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  lVar8 = 0;
  if (0 < param_6) {
    lVar1 = param_2 * 4;
    do {
      uVar6 = ((ulonglong)param_3 & 0x1f) >> 2;
      uVar2 = param_5;
      pauVar4 = param_1;
      pauVar5 = param_3;
      if (uVar6 != 0) {
        uVar6 = 8 - uVar6;
        if ((longlong)param_5 <= (longlong)uVar6) {
          uVar6 = param_5;
        }
        FUN_1404c7a80(param_1,param_2,param_3);
        pauVar4 = (undefined1 (*) [32])(*param_1 + uVar6 * 4);
        uVar2 = param_5 - uVar6;
        pauVar5 = (undefined1 (*) [16])(*param_3 + uVar6 * 4);
      }
      lVar3 = (longlong)uVar2 >> 3;
      if (lVar3 != 0) {
        lVar7 = 0;
        auVar11._16_16_ = *(undefined1 (*) [16])(*pauVar4 + lVar1 + 0x10);
        auVar11._0_16_ = *(undefined1 (*) [16])(*pauVar4 + lVar1);
        auVar11 = vmaxps_avx(*pauVar4,auVar11);
        auVar9._16_16_ = *(undefined1 (*) [16])(*pauVar4 + param_2 * 8 + 0x10);
        auVar9._0_16_ = *(undefined1 (*) [16])(*pauVar4 + param_2 * 8);
        auVar11 = vmaxps_avx(auVar11,auVar9);
        if (0 < lVar3) {
          do {
            lVar7 = lVar7 + 1;
            auVar12._16_16_ = *(undefined1 (*) [16])(pauVar4[1] + lVar1 + 0x10);
            auVar12._0_16_ = *(undefined1 (*) [16])(pauVar4[1] + lVar1);
            auVar9 = vmaxps_avx(pauVar4[1],auVar12);
            auVar10._16_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 8 + 0x10);
            auVar10._0_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 8);
            pauVar4 = pauVar4 + 1;
            auVar9 = vmaxps_avx(auVar9,auVar10);
            auVar10 = vperm2f128_avx(auVar11,auVar9,0x21);
            auVar11 = vmaxps_avx(auVar10,auVar11);
            auVar11 = vmaxps_avx(auVar9,auVar11);
            *pauVar5 = auVar11._0_16_;
            pauVar5[1] = auVar11._16_16_;
            pauVar5 = pauVar5 + 2;
            auVar11 = auVar9;
          } while (lVar7 < lVar3);
        }
      }
      if ((uVar2 & 7) != 0) {
        FUN_1404c7a80(pauVar4,param_2);
      }
      lVar8 = lVar8 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
    } while (lVar8 < param_6);
  }
  return;
}

