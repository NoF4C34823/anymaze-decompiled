
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_140002951(undefined8 param_1,char param_2,uint param_3,longlong param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined1 auStack_298 [32];
  undefined8 *puStack_278;
  uint *puStack_270;
  undefined8 uStack_268;
  uint uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 auStack_248 [65];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1436b4680 ^ (ulonglong)auStack_298;
  FUN_142c947d0(auStack_248,0xaa,0x208);
  uStack_25c = 0x208;
  puStack_278 = &uStack_268;
  uStack_268 = 0xaaaaaaaaaaaaaaaa;
  uVar3 = 0;
  iVar2 = RegOpenKeyExW(-0x7ffffffe - (ulonglong)(param_3 & 0xff),param_1,0,0x20219);
  if (iVar2 == 0) {
    puVar6 = &UNK_143084470;
    if (param_2 != '\0') {
      puVar6 = &UNK_143084b48;
    }
    puStack_278 = auStack_248;
    puStack_270 = &uStack_25c;
    iVar2 = RegQueryValueExW(uStack_268,puVar6,0,0);
    if ((iVar2 == 0) && (2 < uStack_25c)) {
      FUN_140002ebe(param_5,auStack_248);
      iVar2 = 0;
      if (param_2 != '\0') {
        uStack_25c = 0x208;
        puStack_278 = auStack_248;
        puStack_270 = &uStack_25c;
        iVar2 = RegQueryValueExW(uStack_268,&UNK_143084b5c,0,0);
        if ((iVar2 == 0) && (2 < uStack_25c)) {
          FUN_140002fc2(param_5,&UNK_14308478a);
          FUN_140002fc2(param_5,auStack_248);
          iVar2 = 0;
        }
      }
    }
    RegCloseKey(uStack_268);
    uVar3 = 0;
    if ((iVar2 == 0) && (2 < uStack_25c)) {
      uVar4 = FUN_1400030de(param_5);
      lVar5 = FUN_142bfef58(uVar4,0x5c);
      if (lVar5 != 0) {
        uStack_258 = _DAT_142fec500;
        uStack_254 = _UNK_142fec504;
        uStack_250 = _UNK_142fec508;
        uStack_24c = _UNK_142fec50c;
        cVar1 = FUN_140002855(lVar5 + 2);
        if (cVar1 != '\0') {
          if (param_4 != 0) {
            FUN_140002ebe(param_4,lVar5 + 2);
          }
          uVar3 = FUN_140002b46(&uStack_258,param_5);
          goto LAB_1400029d9;
        }
      }
      uVar3 = 0;
    }
  }
LAB_1400029d9:
  if ((uStack_40 ^ (ulonglong)auStack_298) == _DAT_1436b4680) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

