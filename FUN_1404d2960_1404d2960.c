
void FUN_1404d2960(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  
  lVar8 = 0;
  if (0 < param_6) {
    do {
      uVar6 = ((ulonglong)param_3 & 0x1f) >> 2;
      pauVar5 = param_1;
      pauVar9 = param_3;
      uVar10 = param_5;
      if (uVar6 != 0) {
        uVar6 = 8 - uVar6;
        if ((longlong)param_5 <= (longlong)uVar6) {
          uVar6 = param_5;
        }
        FUN_1404d2ba0(param_1,param_2,param_3,uVar6);
        pauVar5 = (undefined1 (*) [32])(*param_1 + uVar6 * 4);
        uVar10 = param_5 - uVar6;
        pauVar9 = (undefined1 (*) [16])(*param_3 + uVar6 * 4);
      }
      lVar11 = (longlong)uVar10 >> 3;
      if (lVar11 != 0) {
        lVar4 = 0;
        pauVar7 = (undefined1 (*) [32])(*pauVar5 + param_2 * 4);
        pauVar12 = (undefined1 (*) [16])(*pauVar5 + param_2 * 8);
        auVar14 = vminps_avx(*pauVar5,*pauVar7);
        auVar13._16_16_ = pauVar12[1];
        auVar13._0_16_ = *pauVar12;
        auVar14 = vminps_avx(auVar14,auVar13);
        auVar13 = auVar14;
        if (1 < lVar11) {
          do {
            lVar4 = lVar4 + 1;
            auVar14._16_16_ = *(undefined1 (*) [16])(pauVar5[1] + param_2 * 4 + 0x10);
            auVar14._0_16_ = *(undefined1 (*) [16])(pauVar5[1] + param_2 * 4);
            auVar14 = vminps_avx(pauVar5[1],auVar14);
            auVar15._16_16_ = *(undefined1 (*) [16])(pauVar5[1] + param_2 * 8 + 0x10);
            auVar15._0_16_ = *(undefined1 (*) [16])(pauVar5[1] + param_2 * 8);
            pauVar5 = pauVar5 + 1;
            auVar14 = vminps_avx(auVar14,auVar15);
            auVar2 = vperm2f128_avx(auVar13,auVar14,0x21);
            auVar15 = vblendps_avx(auVar13,auVar2,0x11);
            auVar3 = vpermilps_avx(auVar15,0x39);
            auVar15 = vblendps_avx(auVar13,auVar2,0x33);
            auVar13 = vminps_avx(auVar3,auVar13);
            auVar15 = vpermilps_avx(auVar15,0x4e);
            auVar13 = vminps_avx(auVar15,auVar13);
            *pauVar9 = auVar13._0_16_;
            pauVar9[1] = auVar13._16_16_;
            pauVar9 = pauVar9 + 2;
            auVar13 = auVar14;
          } while (lVar4 < lVar11 + -1);
          pauVar7 = (undefined1 (*) [32])(*pauVar5 + param_2 * 4);
          pauVar12 = (undefined1 (*) [16])(*pauVar5 + param_2 * 8);
        }
        pauVar1 = pauVar5 + 1;
        pauVar5 = pauVar5 + 1;
        auVar13 = vminps_avx(ZEXT832(*(ulonglong *)*pauVar1),ZEXT832(*(ulonglong *)pauVar7[1]));
        auVar13 = vminps_avx(auVar13,ZEXT832(*(ulonglong *)pauVar12[2]));
        auVar15 = vperm2f128_avx(auVar14,auVar13,0x21);
        auVar13 = vblendps_avx(auVar14,auVar15,0x11);
        auVar2 = vpermilps_avx(auVar13,0x39);
        auVar13 = vblendps_avx(auVar14,auVar15,0x33);
        auVar14 = vminps_avx(auVar2,auVar14);
        auVar13 = vpermilps_avx(auVar13,0x4e);
        auVar14 = vminps_avx(auVar13,auVar14);
        *pauVar9 = auVar14._0_16_;
        pauVar9[1] = auVar14._16_16_;
        pauVar9 = pauVar9 + 2;
      }
      if ((uVar10 & 7) != 0) {
        FUN_1404d2ba0(pauVar5,param_2,pauVar9);
      }
      lVar8 = lVar8 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
    } while (lVar8 < param_6);
  }
  return;
}

