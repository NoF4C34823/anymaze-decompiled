
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400012d3(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1436b4680 ^ (ulonglong)auStack_68;
  FUN_140002e0a(param_2,0x104);
  FUN_140002ebe(param_2,param_1);
  puVar3 = (ushort *)FUN_1400030de(param_2);
  uVar4 = FUN_140003094(param_2);
  if (uVar4 < 3) {
LAB_140001357:
    uStack_38 = 0xaaaaaaaaaaaaaaaa;
    uStack_48 = _DAT_142fec500;
    uStack_44 = _UNK_142fec504;
    uStack_40 = _UNK_142fec508;
    uStack_3c = _UNK_142fec50c;
    FUN_140002d64(&uStack_48);
    iVar2 = FUN_140001206(0,&uStack_48);
    if (iVar2 < 0) {
      OutputDebugStringA(&UNK_14308478e);
    }
    else {
      uVar8 = FUN_140003094(&uStack_48);
      uVar5 = FUN_1400030de(&uStack_48);
      FUN_140002f14(param_2,uVar5,uVar8);
      uVar8 = FUN_1400030de(&uStack_48);
      lVar6 = FUN_142bfef58(uVar8,0x5c);
      if (lVar6 != 0) {
        lVar7 = FUN_1400030de(&uStack_48);
        uVar8 = FUN_1400030de(&uStack_48);
        FUN_140002f14(param_2,uVar8,(lVar6 - lVar7) + 2 >> 1);
        FUN_140002fc2(param_2,param_1);
        FUN_140002d76(&uStack_48);
        goto LAB_140001414;
      }
      iVar2 = -0x7fffbffb;
    }
    FUN_140002d76(&uStack_48);
  }
  else {
    if (puVar3[1] == 0x3a) {
      if ((puVar3[2] != 0x5c) || (0x19 < (ushort)((*puVar3 & 0xffdf) - 0x41))) goto LAB_140001357;
    }
    else if ((puVar3[1] != 0x5c) || (*puVar3 != 0x5c)) goto LAB_140001357;
LAB_140001414:
    cVar1 = FUN_140001153(param_2);
    iVar2 = 0;
    if (cVar1 == '\0') {
      OutputDebugStringA(&UNK_1430847ba);
      uVar8 = FUN_1400030de(param_2);
      OutputDebugStringW(uVar8);
      OutputDebugStringA(&UNK_1430847f0);
      iVar2 = -0x7ff8fffe;
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_68) != _DAT_1436b4680) {
                    /* WARNING: Subroutine does not return */
    FUN_142bb1d40();
  }
  return iVar2;
}

