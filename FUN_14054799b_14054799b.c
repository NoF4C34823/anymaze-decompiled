
void FUN_14054799b(longlong param_1,longlong param_2,undefined1 (*param_3) [32],longlong param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  ulonglong uVar8;
  undefined1 (*in_R10) [32];
  longlong in_R11;
  longlong lVar9;
  longlong lStack0000000000000058;
  ulonglong in_stack_00000090;
  
  lStack0000000000000058 = in_R11;
  do {
    uVar8 = ((ulonglong)param_3 & 0x1f) >> 2;
    uVar4 = in_stack_00000090;
    pauVar6 = in_R10;
    pauVar7 = param_3;
    if (uVar8 != 0) {
      uVar8 = 8 - uVar8;
      if ((longlong)in_stack_00000090 <= (longlong)uVar8) {
        uVar8 = in_stack_00000090;
      }
      FUN_140547b00(in_R10,param_2,param_3);
      pauVar6 = (undefined1 (*) [32])(*in_R10 + uVar8 * 4);
      uVar4 = in_stack_00000090 - uVar8;
      pauVar7 = (undefined1 (*) [32])(*param_3 + uVar8 * 4);
    }
    lVar5 = (longlong)uVar4 >> 3;
    if (lVar5 != 0) {
      lVar9 = 0;
      auVar1 = vminps_avx(*pauVar6,*(undefined1 (*) [32])(*pauVar6 + param_2 * 4));
      auVar1 = vminps_avx(auVar1,*(undefined1 (*) [32])(*pauVar6 + param_2 * 8));
      if (0 < lVar5) {
        do {
          lVar9 = lVar9 + 1;
          auVar2 = vminps_avx(pauVar6[1],*(undefined1 (*) [32])(pauVar6[1] + param_2 * 4));
          auVar2 = vminps_avx(auVar2,*(undefined1 (*) [32])(pauVar6[1] + param_2 * 8));
          pauVar6 = pauVar6 + 1;
          auVar3 = vperm2f128_avx(auVar1,auVar2,0x21);
          auVar1 = vminps_avx(auVar3,auVar1);
          auVar1 = vminps_avx(auVar2,auVar1);
          *pauVar7 = auVar1;
          pauVar7 = pauVar7 + 1;
          auVar1 = auVar2;
        } while (lVar9 < lVar5);
      }
    }
    if ((uVar4 & 7) != 0) {
      FUN_140547b00(pauVar6,param_2);
    }
    param_1 = param_1 + 1;
    in_R10 = (undefined1 (*) [32])(*in_R10 + param_2 * 4);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 4);
  } while (param_1 < lStack0000000000000058);
  return;
}

