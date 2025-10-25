
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000f540(ulonglong *param_1,undefined1 (*param_2) [16],uint param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar3 = _DAT_143086350;
  auVar5 = _DAT_143086340;
  auVar2 = _DAT_143086330;
  iVar4 = 0;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    do {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *param_1;
      iVar4 = iVar4 + 8;
      param_1 = param_1 + 1;
      auVar7 = pshufb(auVar6,auVar5);
      auVar6 = pshufb(auVar6,auVar2);
      *(longlong *)param_2[1] = auVar7._0_8_;
      *param_2 = auVar6;
      param_2 = (undefined1 (*) [16])(param_2[1] + 8);
    } while (iVar4 < (int)(param_3 & 0xfffffff8));
  }
  while (iVar4 < (int)param_3) {
    uVar1 = *param_1;
    iVar4 = iVar4 + 4;
    param_1 = (ulonglong *)((longlong)param_1 + 4);
    auVar5 = pshufb(ZEXT416((uint)uVar1),auVar2);
    maskmovdqu(auVar5,auVar3);
  }
  return auVar3._0_8_;
}

