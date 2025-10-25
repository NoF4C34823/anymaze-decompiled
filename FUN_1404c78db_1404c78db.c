
void FUN_1404c78db(longlong param_1,longlong param_2,undefined1 (*param_3) [16],longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  undefined1 (*in_R10) [32];
  longlong in_R11;
  longlong lVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  longlong lStack0000000000000058;
  ulonglong in_stack_00000090;
  
  lVar1 = param_2 * 4;
  lStack0000000000000058 = in_R11;
  do {
    uVar6 = ((ulonglong)param_3 & 0x1f) >> 2;
    uVar2 = in_stack_00000090;
    pauVar4 = in_R10;
    pauVar5 = param_3;
    if (uVar6 != 0) {
      uVar6 = 8 - uVar6;
      if ((longlong)in_stack_00000090 <= (longlong)uVar6) {
        uVar6 = in_stack_00000090;
      }
      FUN_1404c7a80(in_R10,param_2,param_3);
      pauVar4 = (undefined1 (*) [32])(*in_R10 + uVar6 * 4);
      uVar2 = in_stack_00000090 - uVar6;
      pauVar5 = (undefined1 (*) [16])(*param_3 + uVar6 * 4);
    }
    lVar3 = (longlong)uVar2 >> 3;
    if (lVar3 != 0) {
      lVar7 = 0;
      auVar10._16_16_ = *(undefined1 (*) [16])(*pauVar4 + lVar1 + 0x10);
      auVar10._0_16_ = *(undefined1 (*) [16])(*pauVar4 + lVar1);
      auVar10 = vmaxps_avx(*pauVar4,auVar10);
      auVar8._16_16_ = *(undefined1 (*) [16])(*pauVar4 + param_2 * 8 + 0x10);
      auVar8._0_16_ = *(undefined1 (*) [16])(*pauVar4 + param_2 * 8);
      auVar10 = vmaxps_avx(auVar10,auVar8);
      if (0 < lVar3) {
        do {
          lVar7 = lVar7 + 1;
          auVar11._16_16_ = *(undefined1 (*) [16])(pauVar4[1] + lVar1 + 0x10);
          auVar11._0_16_ = *(undefined1 (*) [16])(pauVar4[1] + lVar1);
          auVar8 = vmaxps_avx(pauVar4[1],auVar11);
          auVar9._16_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 8 + 0x10);
          auVar9._0_16_ = *(undefined1 (*) [16])(pauVar4[1] + param_2 * 8);
          pauVar4 = pauVar4 + 1;
          auVar8 = vmaxps_avx(auVar8,auVar9);
          auVar9 = vperm2f128_avx(auVar10,auVar8,0x21);
          auVar10 = vmaxps_avx(auVar9,auVar10);
          auVar10 = vmaxps_avx(auVar8,auVar10);
          *pauVar5 = auVar10._0_16_;
          pauVar5[1] = auVar10._16_16_;
          pauVar5 = pauVar5 + 2;
          auVar10 = auVar8;
        } while (lVar7 < lVar3);
      }
    }
    if ((uVar2 & 7) != 0) {
      FUN_1404c7a80(pauVar4,param_2);
    }
    param_1 = param_1 + 1;
    in_R10 = (undefined1 (*) [32])(*in_R10 + param_2 * 4);
    param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
  } while (param_1 < lStack0000000000000058);
  return;
}

