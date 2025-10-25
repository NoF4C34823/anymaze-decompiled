
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000f600(ulonglong *param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  auVar4 = _DAT_143086380;
  auVar2 = _DAT_143086370;
  auVar3 = _DAT_143086360;
  iVar5 = 0;
  uVar6 = (undefined8)DAT_143086370;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    do {
      iVar5 = iVar5 + 8;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *param_1;
      auVar1 = vpshufb_avx(auVar7,auVar3);
      auVar7 = vpshufb_avx(auVar7,auVar2);
      *param_2 = auVar1;
      *(longlong *)param_2[1] = auVar7._0_8_;
      param_1 = param_1 + 1;
      param_2 = (undefined1 (*) [16])(param_2[1] + 8);
    } while (iVar5 < (int)(param_3 & 0xfffffff8));
  }
  if (iVar5 < (int)param_3) {
    uVar6 = 0;
    do {
      iVar5 = iVar5 + 4;
      auVar2 = vpunpckldq_avx(ZEXT416((uint)*param_1),(undefined1  [16])0x0);
      auVar2 = vpunpcklqdq_avx(auVar2,(undefined1  [16])0x0);
      param_1 = (ulonglong *)((longlong)param_1 + 4);
      auVar2 = vpshufb_avx(auVar2,auVar3);
      vmaskmovdqu_avx(auVar2,auVar4);
    } while (iVar5 < (int)param_3);
  }
  return uVar6;
}

