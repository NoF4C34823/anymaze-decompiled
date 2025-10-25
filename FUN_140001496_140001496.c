
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140001496(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_88 [36];
  undefined4 uStack_64;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1436b4680 ^ (ulonglong)auStack_88;
  lVar4 = FUN_14000163f(&UNK_1430847f2);
  lVar5 = FUN_14000163f(&UNK_14308480a);
  lVar6 = FUN_14000163f(&UNK_14308481e);
  uVar8 = 0x80070032;
  if (lVar6 != 0 && (lVar5 != 0 && lVar4 != 0)) {
    uStack_3c = 0;
    iVar2 = (*(code *)PTR__guard_dispatch_icall_142febe98)(param_1);
    if (iVar2 == 0) {
      uVar3 = GetLastError();
      uVar8 = uVar3 & 0xffff | 0x80070000;
      if ((int)uVar3 < 1) {
        uVar8 = uVar3;
      }
    }
    else {
      uStack_48 = 0xaaaaaaaaaaaaaaaa;
      uStack_58 = _DAT_142fec500;
      uStack_54 = _UNK_142fec504;
      uStack_50 = _UNK_142fec508;
      uStack_4c = _UNK_142fec50c;
      FUN_140002d64(&uStack_58);
      cVar1 = FUN_140003082(&uStack_58,iVar2);
      if (cVar1 != '\0') {
        uVar7 = FUN_1400030d8(&uStack_58);
        iVar2 = (*(code *)PTR__guard_dispatch_icall_142febe98)(param_1,uStack_3c,iVar2,uVar7);
        if (iVar2 != 0) {
          lStack_60 = 0;
          uStack_64 = 0;
          uVar7 = FUN_1400030d8(&uStack_58);
          iVar2 = (*(code *)PTR__guard_dispatch_icall_142febe98)
                            (uVar7,&UNK_14308482e,&lStack_60,&uStack_64);
          if (iVar2 != 0 && lStack_60 != 0) {
            FUN_140002ebe(param_2);
            FUN_140002d76(&uStack_58);
            uVar8 = 0;
            goto LAB_140001619;
          }
        }
      }
      uVar3 = GetLastError();
      uVar8 = uVar3 & 0xffff | 0x80070000;
      if ((int)uVar3 < 1) {
        uVar8 = uVar3;
      }
      FUN_140002d76(&uStack_58);
    }
  }
LAB_140001619:
  if ((uStack_38 ^ (ulonglong)auStack_88) == _DAT_1436b4680) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

