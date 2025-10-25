
void FUN_1404c74a0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  lVar7 = 0;
  if (0 < param_6) {
    do {
      uVar5 = ((ulonglong)param_3 & 0x1f) >> 2;
      pauVar4 = param_1;
      pauVar8 = param_3;
      uVar9 = param_5;
      if (uVar5 != 0) {
        uVar5 = 8 - uVar5;
        if ((longlong)param_5 <= (longlong)uVar5) {
          uVar5 = param_5;
        }
        FUN_1404c7720(param_1,param_2,param_3,uVar5);
        pauVar4 = (undefined1 (*) [32])(*param_1 + uVar5 * 4);
        uVar9 = param_5 - uVar5;
        pauVar8 = (undefined1 (*) [16])(*param_3 + uVar5 * 4);
      }
      lVar10 = (longlong)uVar9 >> 3;
      if (lVar10 != 0) {
        lVar3 = 0;
        pauVar6 = (undefined1 (*) [32])(*pauVar4 + param_2 * 4);
        pauVar11 = (undefined1 (*) [16])(*pauVar4 + param_2 * 8);
        auVar13 = vmaxps_avx(*pauVar4,*pauVar6);
        auVar12._16_16_ = pauVar11[1];
        auVar12._0_16_ = *pauVar11;
        auVar13 = vmaxps_avx(auVar13,auVar12);
        auVar12 = auVar13;
        if (1 < lVar10) {
          do {
            lVar3 = lVar3 + 1;
            auVar13._16_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 4 + 0x10);
            auVar13._0_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 4);
            auVar13 = vmaxps_avx(pauVar4[1],auVar13);
            auVar16._16_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 8 + 0x10);
            auVar16._0_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 8);
            pauVar4 = pauVar4 + 1;
            auVar13 = vmaxps_avx(auVar13,auVar16);
            auVar14 = vperm2f128_avx(auVar12,auVar13,0x21);
            auVar16 = vblendps_avx(auVar12,auVar14,0x77);
            auVar16 = vpermilps_avx(auVar16,0x93);
            auVar16 = vmaxps_avx(auVar16,auVar12);
            auVar12 = vblendps_avx(auVar14,auVar13,0x33);
            auVar12 = vpermilps_avx(auVar12,0x4e);
            auVar12 = vmaxps_avx(auVar12,auVar16);
            *pauVar8 = auVar12._0_16_;
            pauVar8[1] = auVar12._16_16_;
            pauVar8 = pauVar8 + 2;
            auVar12 = auVar13;
          } while (lVar3 < lVar10 + -1);
          pauVar6 = (undefined1 (*) [32])(*pauVar4 + param_2 * 4);
          pauVar11 = (undefined1 (*) [16])(*pauVar4 + param_2 * 8);
        }
        pauVar1 = pauVar4 + 1;
        auVar2 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(pauVar4[1] + 0x10),0);
        pauVar4 = pauVar4 + 1;
        auVar15._16_16_ = auVar2;
        auVar15._0_16_ = *(undefined1 (*) [16])*pauVar1;
        auVar2 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(pauVar6[1] + 0x10),0);
        auVar14._16_16_ = auVar2;
        auVar14._0_16_ = *(undefined1 (*) [16])pauVar6[1];
        auVar12 = vmaxps_avx(auVar15,auVar14);
        auVar2 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)pauVar11[3],0);
        auVar17._16_16_ = auVar2;
        auVar17._0_16_ = pauVar11[2];
        auVar16 = vmaxps_avx(auVar12,auVar17);
        auVar14 = vperm2f128_avx(auVar13,auVar16,0x21);
        auVar12 = vblendps_avx(auVar13,auVar14,0x77);
        auVar12 = vpermilps_avx(auVar12,0x93);
        auVar12 = vmaxps_avx(auVar12,auVar13);
        auVar13 = vblendps_avx(auVar14,auVar16,0x33);
        auVar13 = vpermilps_avx(auVar13,0x4e);
        auVar13 = vmaxps_avx(auVar13,auVar12);
        *pauVar8 = auVar13._0_16_;
        pauVar8[1] = auVar13._16_16_;
        pauVar8 = pauVar8 + 2;
      }
      if ((uVar9 & 7) != 0) {
        FUN_1404c7720(pauVar4,param_2,pauVar8);
      }
      lVar7 = lVar7 + 1;
      param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
    } while (lVar7 < param_6);
  }
  return;
}

