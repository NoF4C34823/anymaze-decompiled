
void FUN_14053be1b(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                  longlong param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [16];
  longlong in_RAX;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  longlong in_R10;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  undefined1 auVar11 [32];
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
    uVar5 = ((ulonglong)param_3 & 0x1f) >> 2;
    pauVar4 = param_1;
    pauVar7 = param_3;
    uVar8 = in_stack_000000a0;
    if (uVar5 != 0) {
      uVar5 = 8 - uVar5;
      if ((longlong)in_stack_000000a0 <= (longlong)uVar5) {
        uVar5 = in_stack_000000a0;
      }
      FUN_14053c020(param_1);
      pauVar4 = (undefined1 (*) [32])(*param_1 + uVar5 * 4);
      uVar8 = in_stack_000000a0 - uVar5;
      pauVar7 = (undefined1 (*) [32])(*param_3 + uVar5 * 4);
    }
    lVar9 = (longlong)uVar8 >> 3;
    if (lVar9 != 0) {
      pauVar6 = (undefined1 (*) [32])(*pauVar4 + in_R10 * 4);
      auVar11 = vmaxps_avx(*pauVar4,*pauVar6);
      pauVar10 = (undefined1 (*) [32])(*pauVar4 + in_R10 * 8);
      auVar11 = vmaxps_avx(auVar11,*pauVar10);
      lVar3 = 0;
      auVar12 = auVar11;
      if (1 < lVar9) {
        do {
          lVar3 = lVar3 + 1;
          auVar11 = vmaxps_avx(pauVar4[1],
                               *(undefined1 (*) [32])(pauVar4[1] + lStack0000000000000058));
          auVar11 = vmaxps_avx(auVar11,*(undefined1 (*) [32])(pauVar4[1] + lStack0000000000000050));
          pauVar4 = pauVar4 + 1;
          auVar13 = vperm2f128_avx(auVar12,auVar11,0x21);
          auVar14 = vpalignr_avx2(auVar13,auVar12,0xc);
          auVar13 = vpalignr_avx2(auVar11,auVar13,8);
          auVar12 = vmaxps_avx(auVar14,auVar12);
          auVar12 = vmaxps_avx(auVar13,auVar12);
          *pauVar7 = auVar12;
          pauVar7 = pauVar7 + 1;
          auVar12 = auVar11;
        } while (lVar3 < lVar9 + -1);
        pauVar6 = (undefined1 (*) [32])(*pauVar4 + in_R10 * 4);
        pauVar10 = (undefined1 (*) [32])(*pauVar4 + in_R10 * 8);
      }
      pauVar1 = pauVar4 + 1;
      auVar2 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(pauVar4[1] + 0x10),0);
      pauVar4 = pauVar4 + 1;
      auVar13._0_16_ = ZEXT116(0) * auVar2 + ZEXT116(1) * *(undefined1 (*) [16])*pauVar1;
      auVar13._16_16_ = ZEXT116(1) * auVar2;
      auVar2 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(pauVar6[1] + 0x10),0);
      auVar12._0_16_ = ZEXT116(0) * auVar2 + ZEXT116(1) * *(undefined1 (*) [16])pauVar6[1];
      auVar12._16_16_ = ZEXT116(1) * auVar2;
      auVar12 = vmaxps_avx(auVar13,auVar12);
      auVar2 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(pauVar10[1] + 0x10),0);
      auVar14._0_16_ = ZEXT116(0) * auVar2 + ZEXT116(1) * *(undefined1 (*) [16])pauVar10[1];
      auVar14._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * auVar2;
      auVar12 = vmaxps_avx(auVar12,auVar14);
      auVar13 = vperm2f128_avx(auVar11,auVar12,0x21);
      auVar14 = vpalignr_avx2(auVar13,auVar11,0xc);
      auVar12 = vpalignr_avx2(auVar12,auVar13,8);
      auVar11 = vmaxps_avx(auVar14,auVar11);
      auVar11 = vmaxps_avx(auVar12,auVar11);
      *pauVar7 = auVar11;
    }
    if ((uVar8 & 7) != 0) {
      FUN_14053c020(pauVar4);
    }
    in_RAX = in_RAX + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + in_R10 * 4);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 4);
  } while (in_RAX < lStack0000000000000060);
  return;
}

