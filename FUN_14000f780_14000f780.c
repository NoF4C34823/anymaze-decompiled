
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000f780(ulonglong *param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar3 = _DAT_1430863e0;
  auVar5 = _DAT_1430863d0;
  auVar2 = _DAT_1430863c0;
  iVar4 = 0;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    do {
      iVar4 = iVar4 + 8;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *param_1;
      auVar1 = vpshufb_avx(auVar6,auVar2);
      auVar6 = vpshufb_avx(auVar6,auVar5);
      *param_2 = auVar1;
      *(longlong *)param_2[1] = auVar6._0_8_;
      param_1 = param_1 + 1;
      param_2 = (undefined1 (*) [16])(param_2[1] + 8);
    } while (iVar4 < (int)(param_3 & 0xfffffff8));
  }
  while (iVar4 < (int)param_3) {
    iVar4 = iVar4 + 4;
    auVar5 = vpunpckldq_avx512vl(ZEXT416((uint)*param_1),(undefined1  [16])0x0);
    auVar5 = vpunpcklqdq_avx512vl(auVar5,(undefined1  [16])0x0);
    param_1 = (ulonglong *)((longlong)param_1 + 4);
    auVar5 = vpshufb_avx512vl(auVar5,auVar2);
    vmaskmovdqu_avx(auVar5,auVar3);
  }
  return auVar3._0_8_;
}

