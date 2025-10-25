
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140003cca(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_278 [32];
  undefined8 uStack_258;
  undefined1 *puStack_250;
  undefined4 *puStack_248;
  undefined4 uStack_23c;
  undefined1 auStack_238 [520];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1436b4680 ^ (ulonglong)auStack_278;
  FUN_142c947d0(auStack_238,0,0x208);
  puStack_248 = &uStack_23c;
  uStack_23c = 0x208;
  uStack_258 = 0;
  puStack_250 = auStack_238;
  iVar1 = RegGetValueW(param_1,0,param_2,2);
  if (iVar1 == 0) {
    FUN_140002ebe(param_4,auStack_238);
    uVar2 = FUN_1400030de(param_4);
    *param_3 = uVar2;
  }
  if ((uStack_30 ^ (ulonglong)auStack_278) == _DAT_1436b4680) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

