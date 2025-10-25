
void FUN_14054761b(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                  longlong param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  longlong in_RAX;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  longlong in_R10;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [32];
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  longlong lStack0000000000000060;
  ulonglong in_stack_000000a0;
  
  lStack0000000000000058 = in_R10 * 4;
  lStack0000000000000050 = in_R10 * 8;
  lStack0000000000000060 = param_2;
  do {
    uVar7 = ((ulonglong)param_3 & 0x1f) >> 2;
    pauVar6 = param_1;
    pauVar9 = param_3;
    uVar10 = in_stack_000000a0;
    if (uVar7 != 0) {
      uVar7 = 8 - uVar7;
      if ((longlong)in_stack_000000a0 <= (longlong)uVar7) {
        uVar7 = in_stack_000000a0;
      }
      FUN_1405477e0(param_1);
      pauVar6 = (undefined1 (*) [32])(*param_1 + uVar7 * 4);
      uVar10 = in_stack_000000a0 - uVar7;
      pauVar9 = (undefined1 (*) [32])(*param_3 + uVar7 * 4);
    }
    lVar11 = (longlong)uVar10 >> 3;
    if (lVar11 != 0) {
      pauVar8 = (undefined1 (*) [32])(*pauVar6 + in_R10 * 4);
      auVar13 = vminps_avx(*pauVar6,*pauVar8);
      pauVar12 = (undefined1 (*) [32])(*pauVar6 + in_R10 * 8);
      auVar13 = vminps_avx(auVar13,*pauVar12);
      lVar5 = 0;
      auVar2 = auVar13;
      if (1 < lVar11) {
        do {
          lVar5 = lVar5 + 1;
          auVar13 = vminps_avx(pauVar6[1],
                               *(undefined1 (*) [32])(pauVar6[1] + lStack0000000000000058));
          auVar13 = vminps_avx(auVar13,*(undefined1 (*) [32])(pauVar6[1] + lStack0000000000000050));
          pauVar6 = pauVar6 + 1;
          auVar3 = vperm2f128_avx(auVar2,auVar13,0x21);
          auVar4 = vpalignr_avx2(auVar3,auVar2,4);
          auVar3 = vpalignr_avx2(auVar3,auVar2,8);
          auVar2 = vminps_avx(auVar4,auVar2);
          auVar2 = vminps_avx(auVar3,auVar2);
          *pauVar9 = auVar2;
          pauVar9 = pauVar9 + 1;
          auVar2 = auVar13;
        } while (lVar5 < lVar11 + -1);
        pauVar8 = (undefined1 (*) [32])(*pauVar6 + in_R10 * 4);
        pauVar12 = (undefined1 (*) [32])(*pauVar6 + in_R10 * 8);
      }
      pauVar1 = pauVar6 + 1;
      pauVar6 = pauVar6 + 1;
      auVar2 = vminps_avx(ZEXT832(*(ulonglong *)*pauVar1),ZEXT832(*(ulonglong *)pauVar8[1]));
      auVar2 = vminps_avx(auVar2,ZEXT832(*(ulonglong *)pauVar12[1]));
      auVar2 = vperm2f128_avx(auVar13,auVar2,0x21);
      auVar3 = vpalignr_avx2(auVar2,auVar13,4);
      auVar2 = vpalignr_avx2(auVar2,auVar13,8);
      auVar13 = vminps_avx(auVar3,auVar13);
      auVar13 = vminps_avx(auVar2,auVar13);
      *pauVar9 = auVar13;
    }
    if ((uVar10 & 7) != 0) {
      FUN_1405477e0(pauVar6);
    }
    in_RAX = in_RAX + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + in_R10 * 4);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 4);
  } while (in_RAX < lStack0000000000000060);
  return;
}

