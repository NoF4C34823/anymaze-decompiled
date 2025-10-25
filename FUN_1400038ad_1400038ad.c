
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1400038ad(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char param_9)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [32];
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  
  uVar1 = _UNK_142fec508;
  uVar7 = _DAT_142fec500;
  uStack_60 = _DAT_1436b4680 ^ (ulonglong)auStack_108;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = _DAT_142fec500;
  uStack_90 = _UNK_142fec508;
  FUN_140002d64(&uStack_98);
  FUN_140003130(&uStack_98);
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = uVar7;
  uStack_b0 = uVar1;
  FUN_140002d64();
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = uVar7;
  uStack_70 = uVar1;
  FUN_140002d64(&uStack_78);
  iVar3 = FUN_140001206(0,&uStack_78);
  if (iVar3 < 0) {
    FUN_140002f8a(&uStack_b8);
  }
  else {
    uVar5 = FUN_1400030de(&uStack_78);
    lVar6 = FUN_142bfef58(uVar5,0x5c);
    if (lVar6 == 0) {
      lVar6 = FUN_1400030de(&uStack_78);
    }
    FUN_140002ebe(&uStack_b8,lVar6 + 2);
  }
  FUN_140002d76(&uStack_78);
  uStack_c0 = 0;
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVar4 = 0;
  }
  else {
    uStack_68 = 0xaaaaaaaaaaaaaaaa;
    uStack_78 = uVar7;
    uStack_70 = uVar1;
    lVar6 = FUN_142c356d0(param_2);
    FUN_140002de6(&uStack_78,lVar6 + 0x2a);
    FUN_140002fc2(&uStack_78,&UNK_143084f70);
    FUN_140002fc2(&uStack_78,param_2);
    uVar7 = FUN_1400030d8(&uStack_78);
    puStack_e8 = &uStack_c0;
    uVar4 = 0;
    iVar3 = RegOpenKeyExW(param_1,uVar7,0,1);
    FUN_140002d76(&uStack_78);
    if (iVar3 == 0) {
      uVar7 = FUN_1400030de(&uStack_98);
      uStack_d0 = param_8;
      uStack_d8 = param_7;
      uStack_e0 = param_6;
      puStack_e8 = param_5;
      cVar2 = FUN_140003b56(uStack_c0,uVar7,param_3,param_4);
      uVar4 = 1;
      if (cVar2 == '\0') {
        uVar7 = FUN_1400030de(&uStack_b8);
        uStack_d0 = param_8;
        uStack_d8 = param_7;
        uStack_e0 = param_6;
        puStack_e8 = param_5;
        uVar4 = FUN_140003b56(uStack_c0,uVar7,param_3,param_4);
        if (param_9 == '\0' && (char)uVar4 == '\0') {
          uStack_d0 = param_8;
          uStack_d8 = param_7;
          uStack_e0 = param_6;
          puStack_e8 = param_5;
          uVar4 = FUN_140003b56(uStack_c0,&UNK_143084fc8,param_3,param_4);
        }
      }
      RegCloseKey(uStack_c0);
    }
  }
  FUN_140002d76(&uStack_b8);
  FUN_140002d76(&uStack_98);
  if ((uStack_60 ^ (ulonglong)auStack_108) == _DAT_1436b4680) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

