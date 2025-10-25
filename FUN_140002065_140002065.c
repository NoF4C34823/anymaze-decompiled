
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140002065(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_168 [32];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong uStack_f8;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  uVar2 = _UNK_142fec508;
  uVar1 = _DAT_142fec500;
  uStack_50 = _DAT_1436b4680 ^ (ulonglong)auStack_168;
  if (param_4 == 0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    uStack_80 = _UNK_142fec508 & 0xffffffff00000000;
    uStack_88 = _DAT_142fec500 & 0xff00000000000000;
    uStack_a0 = param_1;
    uStack_98 = param_2;
    uStack_90 = param_3;
    uVar3 = FUN_1400016ba(param_3);
    uStack_88._0_5_ = CONCAT14(uVar3,(undefined4)uStack_88);
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_b8 = uVar1;
    uStack_b0 = uVar2;
    uStack_c8 = uVar1;
    uStack_c0 = uVar2;
    uStack_d8 = uVar1;
    uStack_d0 = uVar2;
    uStack_e8 = uVar1;
    uStack_e0 = uVar2;
    FUN_140002d64(&uStack_e8);
    FUN_140002d64(&uStack_d0);
    FUN_140002d64(&uStack_b8);
    FUN_140003335(&uStack_a0,&uStack_e8);
    FUN_140001f54(param_3,&uStack_a0);
    puVar5 = (undefined8 *)FUN_142bb2860(0x48,&UNK_1432c75d8);
    if (puVar5 != (undefined8 *)0x0) {
      uStack_58 = uStack_80;
      uStack_68 = (undefined4)uStack_90;
      uStack_64 = uStack_90._4_4_;
      uStack_60 = (undefined4)uStack_88;
      uStack_5c = uStack_88._4_4_;
      uStack_78 = (undefined4)uStack_a0;
      uStack_74 = uStack_a0._4_4_;
      uStack_70 = (undefined4)uStack_98;
      uStack_6c = uStack_98._4_4_;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      *puVar5 = &UNK_143351488;
      if (_DAT_1437906b0 != 0) {
        (*(code *)PTR__guard_dispatch_icall_142febe98)();
      }
      *puVar5 = &UNK_143084c40;
      *(undefined4 *)(puVar5 + 2) = uStack_78;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_74;
      *(undefined4 *)(puVar5 + 3) = uStack_70;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_6c;
      *(undefined4 *)(puVar5 + 4) = uStack_68;
      *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_64;
      *(undefined4 *)(puVar5 + 5) = uStack_60;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_5c;
      puVar5[6] = uStack_58;
      puVar5[7] = param_4;
      (*(code *)PTR__guard_dispatch_icall_142febe98)(param_4);
      *(undefined4 *)(puVar5 + 8) = 1;
    }
    uStack_118 = (undefined4)uStack_a0;
    uStack_114 = uStack_a0._4_4_;
    uStack_110 = (undefined4)uStack_98;
    uStack_10c = uStack_98._4_4_;
    uStack_108 = (undefined4)uStack_90;
    uStack_104 = uStack_90._4_4_;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = uStack_80;
    iVar4 = FUN_1400022d4(&uStack_118,puVar5);
    if (iVar4 < 0) {
      uStack_128 = uStack_80;
      uStack_138 = (undefined4)uStack_90;
      uStack_134 = uStack_90._4_4_;
      uStack_130 = (undefined4)uStack_88;
      uStack_12c = uStack_88._4_4_;
      uStack_148 = (undefined4)uStack_a0;
      uStack_144 = uStack_a0._4_4_;
      uStack_140 = (undefined4)uStack_98;
      uStack_13c = uStack_98._4_4_;
      iVar4 = FUN_1400022d4(&uStack_148,puVar5);
    }
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)PTR__guard_dispatch_icall_142febe98)(puVar5);
    }
    FUN_140002d76(&uStack_b8);
    FUN_140002d76(&uStack_d0);
    FUN_140002d76(&uStack_e8);
  }
  if ((uStack_50 ^ (ulonglong)auStack_168) == _DAT_1436b4680) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

