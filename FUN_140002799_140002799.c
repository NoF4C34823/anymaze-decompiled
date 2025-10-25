
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140002799(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  uint auStack_48 [4];
  uint auStack_38 [6];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_1436b4680 ^ (ulonglong)auStack_68;
  if (param_3 == (undefined4 *)0x0) {
    uVar6 = 0x80004003;
  }
  else {
    uVar6 = 0x80070057;
    if (param_2 != 0 && param_1 != 0) {
      auStack_38[0] = _DAT_142fec500;
      auStack_38[1] = _UNK_142fec504;
      auStack_38[2] = _UNK_142fec508;
      auStack_38[3] = _UNK_142fec50c;
      auStack_48[0] = _DAT_142fec500;
      auStack_48[1] = _UNK_142fec504;
      auStack_48[2] = _UNK_142fec508;
      auStack_48[3] = _UNK_142fec50c;
      cVar3 = FUN_140002855();
      uVar6 = 0x80070057;
      if (cVar3 != '\0') {
        cVar3 = FUN_140002855(param_2,auStack_48);
        if (cVar3 != '\0') {
          lVar5 = 0;
          do {
            uVar1 = auStack_48[lVar5];
            uVar2 = auStack_38[lVar5];
            if (uVar2 >= uVar1 && uVar2 != uVar1) {
              uVar4 = 1;
              goto LAB_14000284f;
            }
            if (uVar2 < uVar1) {
              uVar4 = 0xffffffff;
              goto LAB_14000284f;
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 != 4);
          uVar4 = 0;
LAB_14000284f:
          *param_3 = uVar4;
          uVar6 = 0;
        }
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_68) == _DAT_1436b4680) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

