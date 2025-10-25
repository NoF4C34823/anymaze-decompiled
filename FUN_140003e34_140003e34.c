
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140003e34(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  uint uStack_34;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1436b4680 ^ (ulonglong)auStack_88;
  lVar3 = LoadLibraryW();
  if (lVar3 == 0) {
    uVar2 = GetLastError();
    uVar1 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar1 = uVar2;
    }
    uStack_48 = 0xaaaaaaaaaaaaaaaa;
    uStack_58 = _DAT_142fec500;
    uStack_54 = _UNK_142fec504;
    uStack_50 = _UNK_142fec508;
    uStack_4c = _UNK_142fec50c;
    uStack_34 = uVar1;
    FUN_140002d64(&uStack_58);
    FUN_140003d8c(&uStack_34,4,1,&uStack_58);
    OutputDebugStringW(&UNK_14308511a);
    uVar5 = FUN_1400030de(&uStack_58);
    OutputDebugStringW(uVar5);
    OutputDebugStringW(&UNK_1430851b0);
    OutputDebugStringW(param_1);
    OutputDebugStringW(&UNK_143085106);
    FUN_140002d76(&uStack_58);
  }
  else {
    lVar4 = GetProcAddress(lVar3,&UNK_143085011);
    if (lVar4 == 0) {
      uVar2 = GetLastError();
      uVar1 = uVar2 & 0xffff | 0x80070000;
      if ((int)uVar2 < 1) {
        uVar1 = uVar2;
      }
      uStack_48 = 0xaaaaaaaaaaaaaaaa;
      uStack_58 = _DAT_142fec500;
      uStack_54 = _UNK_142fec504;
      uStack_50 = _UNK_142fec508;
      uStack_4c = _UNK_142fec50c;
      uStack_34 = uVar1;
      FUN_140002d64(&uStack_58);
      FUN_140003d8c(&uStack_34,4,1,&uStack_58);
      OutputDebugStringW(&UNK_14308503e);
      uVar5 = FUN_1400030de(&uStack_58);
      OutputDebugStringW(uVar5);
      OutputDebugStringW(&UNK_143085106);
      FUN_140002d76(&uStack_58);
    }
    else {
      uStack_68 = param_6;
      uVar1 = (*(code *)PTR__guard_dispatch_icall_142febe98)(param_2,param_3,param_4,param_5);
    }
    lVar4 = GetProcAddress(lVar3,&UNK_14308510a);
    if (lVar4 != 0) {
      FreeLibrary(lVar3);
    }
  }
  if ((uStack_30 ^ (ulonglong)auStack_88) == _DAT_1436b4680) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

