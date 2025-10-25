
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140002654(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  uVar2 = _UNK_142fec508;
  uVar1 = _DAT_142fec500;
  uStack_50 = _DAT_1436b4680 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    uStack_59 = (undefined1)((ulonglong)_DAT_142fec500 >> 0x38);
    uStack_58 = _UNK_142fec508 & 0xffffffff00000000;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_5b = 0;
    uStack_68 = (undefined7)param_2;
    uStack_61 = (undefined1)((ulonglong)param_2 >> 0x38);
    uStack_78 = param_1;
    uStack_5c = FUN_1400016ba(param_2);
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    uStack_98 = uVar1;
    uStack_90 = uVar2;
    uStack_a8 = uVar1;
    uStack_a0 = uVar2;
    uStack_b8 = uVar1;
    uStack_b0 = uVar2;
    uStack_c8 = uVar1;
    uStack_c0 = uVar2;
    FUN_140002d64(&uStack_c8);
    FUN_140002d64(&uStack_b0);
    FUN_140002d64(&uStack_98);
    FUN_140003335(&uStack_78,&uStack_c8);
    FUN_140001f54(param_2,&uStack_78);
    iVar3 = FUN_14000176b(&uStack_78,param_3);
    if (iVar3 < 0) {
      iVar3 = FUN_14000176b(&uStack_78,param_3);
    }
    FUN_140002d76(&uStack_98);
    FUN_140002d76(&uStack_b0);
    FUN_140002d76(&uStack_c8);
  }
  if ((uStack_50 ^ (ulonglong)auStack_e8) == _DAT_1436b4680) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

