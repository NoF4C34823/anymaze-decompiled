
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003335(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 auStack_f8 [32];
  longlong lStack_d8;
  undefined1 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  
  uStack_60 = _DAT_1436b4680 ^ (ulonglong)auStack_f8;
  uStack_b0 = 0;
  lStack_b8 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d0 = 1;
  lStack_d8 = 0;
  FUN_14000358e(&UNK_143084ce4,&UNK_143084cb4,param_1,param_2);
  uStack_b0 = 1;
  lStack_b8 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  FUN_14000358e(&UNK_143084d48,&UNK_143084d2a,param_1 + 8,param_2 + 0x18);
  uVar3 = _UNK_142fec508;
  uVar2 = _DAT_142fec500;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = _DAT_142fec500;
  uStack_70 = _UNK_142fec508;
  FUN_140002d64(&uStack_78);
  cVar4 = FUN_14000400c(&UNK_143084fcc,&uStack_78);
  if (cVar4 != '\0') {
    uVar5 = FUN_1400030a0(&uStack_78,&UNK_143084ffa);
    *(undefined1 *)(param_1 + 0x1c) = uVar5;
  }
  FUN_140002d76(&uStack_78);
  uStack_80 = 0;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = uVar2;
  uStack_70 = uVar3;
  FUN_140002d64(&uStack_78);
  uStack_b0 = *(undefined1 *)(param_1 + 0x1c);
  lStack_c0 = param_1 + 0x1d;
  lStack_c8 = param_1 + 0x20;
  lVar1 = param_1 + 0x18;
  lStack_b8 = 0;
  uStack_d0 = 0;
  lStack_d8 = lVar1;
  FUN_14000358e(&UNK_143084d9c,&UNK_143084d7c,&uStack_80,&uStack_78);
  uStack_88 = 0;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = uVar2;
  uStack_a0 = uVar3;
  FUN_140002d64(&uStack_a8);
  uStack_b0 = *(undefined1 *)(param_1 + 0x1c);
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d0 = 0;
  lStack_d8 = lVar1;
  lStack_b8 = param_1 + 0x1e;
  FUN_14000358e(&UNK_143084df4,&UNK_143084dd0,&uStack_88,&uStack_a8);
  if (*(char *)(param_1 + 0x1e) == '\0') {
    uStack_b0 = *(undefined1 *)(param_1 + 0x1c);
    lStack_c8 = 0;
    lStack_c0 = 0;
    uStack_d0 = 0;
    lStack_d8 = lVar1;
    lStack_b8 = param_1 + 0x1e;
    FUN_14000358e(&UNK_143084e60,&UNK_143084e2e,&uStack_88,&uStack_a8);
  }
  FUN_140002d76(&uStack_a8);
  FUN_140002d76(&uStack_78);
  if ((uStack_60 ^ (ulonglong)auStack_f8) == _DAT_1436b4680) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

