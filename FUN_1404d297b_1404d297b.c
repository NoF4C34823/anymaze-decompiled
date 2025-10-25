
void FUN_1404d297b(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  longlong in_RAX;
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [16];
  longlong in_R10;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  longlong lStack0000000000000060;
  ulonglong in_stack_000000a0;
  
  lStack0000000000000058 = in_R10 * 4;
  lStack0000000000000050 = in_R10 * 8;
  lStack0000000000000060 = param_2;
  do {
    uVar6 = ((ulonglong)param_3 & 0x1f) >> 2;
    pauVar5 = param_1;
    pauVar8 = param_3;
    uVar9 = in_stack_000000a0;
    if (uVar6 != 0) {
      uVar6 = 8 - uVar6;
      if ((longlong)in_stack_000000a0 <= (longlong)uVar6) {
        uVar6 = in_stack_000000a0;
      }
      FUN_1404d2ba0(param_1);
      pauVar5 = (undefined1 (*) [32])(*param_1 + uVar6 * 4);
      uVar9 = in_stack_000000a0 - uVar6;
      pauVar8 = (undefined1 (*) [16])(*param_3 + uVar6 * 4);
    }
    lVar10 = (longlong)uVar9 >> 3;
    if (lVar10 != 0) {
      lVar4 = 0;
      pauVar7 = (undefined1 (*) [32])(*pauVar5 + in_R10 * 4);
      pauVar11 = (undefined1 (*) [16])(*pauVar5 + in_R10 * 8);
      auVar13 = vminps_avx(*pauVar5,*pauVar7);
      auVar12._16_16_ = pauVar11[1];
      auVar12._0_16_ = *pauVar11;
      auVar13 = vminps_avx(auVar13,auVar12);
      auVar12 = auVar13;
      if (1 < lVar10) {
        do {
          lVar4 = lVar4 + 1;
          auVar13._16_16_ = *(undefined1 (*) [16])(pauVar5[1] + lStack0000000000000058 + 0x10);
          auVar13._0_16_ = *(undefined1 (*) [16])(pauVar5[1] + lStack0000000000000058);
          auVar13 = vminps_avx(pauVar5[1],auVar13);
          auVar14._16_16_ = *(undefined1 (*) [16])(pauVar5[1] + lStack0000000000000050 + 0x10);
          auVar14._0_16_ = *(undefined1 (*) [16])(pauVar5[1] + lStack0000000000000050);
          pauVar5 = pauVar5 + 1;
          auVar13 = vminps_avx(auVar13,auVar14);
          auVar2 = vperm2f128_avx(auVar12,auVar13,0x21);
          auVar14 = vblendps_avx(auVar12,auVar2,0x11);
          auVar3 = vpermilps_avx(auVar14,0x39);
          auVar14 = vblendps_avx(auVar12,auVar2,0x33);
          auVar12 = vminps_avx(auVar3,auVar12);
          auVar14 = vpermilps_avx(auVar14,0x4e);
          auVar12 = vminps_avx(auVar14,auVar12);
          *pauVar8 = auVar12._0_16_;
          pauVar8[1] = auVar12._16_16_;
          pauVar8 = pauVar8 + 2;
          auVar12 = auVar13;
        } while (lVar4 < lVar10 + -1);
        pauVar7 = (undefined1 (*) [32])(*pauVar5 + in_R10 * 4);
        pauVar11 = (undefined1 (*) [16])(*pauVar5 + in_R10 * 8);
      }
      pauVar1 = pauVar5 + 1;
      pauVar5 = pauVar5 + 1;
      auVar12 = vminps_avx(ZEXT832(*(ulonglong *)*pauVar1),ZEXT832(*(ulonglong *)pauVar7[1]));
      auVar12 = vminps_avx(auVar12,ZEXT832(*(ulonglong *)pauVar11[2]));
      auVar14 = vperm2f128_avx(auVar13,auVar12,0x21);
      auVar12 = vblendps_avx(auVar13,auVar14,0x11);
      auVar2 = vpermilps_avx(auVar12,0x39);
      auVar12 = vblendps_avx(auVar13,auVar14,0x33);
      auVar13 = vminps_avx(auVar2,auVar13);
      auVar12 = vpermilps_avx(auVar12,0x4e);
      auVar13 = vminps_avx(auVar12,auVar13);
      *pauVar8 = auVar13._0_16_;
      pauVar8[1] = auVar13._16_16_;
    }
    if ((uVar9 & 7) != 0) {
      FUN_1404d2ba0(pauVar5);
    }
    in_RAX = in_RAX + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + in_R10 * 4);
    param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
  } while (in_RAX < lStack0000000000000060);
  return;
}

