
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14000176b(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uVar4 = _UNK_142fec508;
  uVar5 = _DAT_142fec500;
  uStack_40 = _DAT_1436b4680 ^ (ulonglong)auStack_b8;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_58 = _DAT_142fec500;
  uStack_50 = _UNK_142fec508;
  FUN_140002d64();
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = uVar5;
  uStack_70 = uVar4;
  FUN_140002d64();
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = uVar5;
  uStack_90 = uVar4;
  FUN_140002d64();
  psVar1 = (short *)*param_1;
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    iVar3 = FUN_1400018f5(param_1,&uStack_58,&uStack_78,&uStack_98);
LAB_140001813:
    if (iVar3 == 0) {
      cVar2 = FUN_140003098(&uStack_98);
      if (cVar2 == '\0') {
        FUN_140002fc2(&uStack_78,&UNK_143084890);
        uVar5 = FUN_140003094(&uStack_98);
        uVar4 = FUN_1400030de(&uStack_98);
        FUN_140002ff4(&uStack_78,uVar4,uVar5);
      }
      uVar5 = FUN_140003094(&uStack_78);
      uVar4 = FUN_1400030de(&uStack_78);
      uVar5 = FUN_1400030e4(uVar4,uVar5);
      iVar3 = 0;
      goto LAB_14000188a;
    }
  }
  else {
    iVar3 = FUN_1400012d3(psVar1,&uStack_58);
    if (iVar3 == 0) {
      uVar5 = FUN_1400030de(&uStack_58);
      iVar3 = FUN_140001496(uVar5,&uStack_78);
      goto LAB_140001813;
    }
  }
  uVar5 = 0;
LAB_14000188a:
  *param_2 = uVar5;
  FUN_140002d76(&uStack_98);
  FUN_140002d76(&uStack_78);
  FUN_140002d76(&uStack_58);
  if ((uStack_40 ^ (ulonglong)auStack_b8) != _DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return iVar3;
}

