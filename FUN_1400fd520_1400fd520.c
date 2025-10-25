
undefined8
FUN_1400fd520(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             undefined4 param_6,undefined8 param_7,undefined4 *param_8,longlong param_9)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_a8 [32];
  int *piStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  int iStack_44;
  ulonglong uStack_40;
  
  uStack_40 = DAT_1436b4680 ^ (ulonglong)auStack_a8;
  if ((((param_1 == 0) || (param_3 == 0)) || (param_8 == (undefined4 *)0x0)) || (param_9 == 0)) {
    if ((uStack_40 ^ (ulonglong)auStack_a8) == DAT_1436b4680) {
      return 0xfffffff8;
    }
  }
  else if ((param_2 < 1) || (param_4 < 1)) {
    if ((uStack_40 ^ (ulonglong)auStack_a8) == DAT_1436b4680) {
      return 0xfffffff0;
    }
  }
  else {
    uStack_48 = 0;
    iStack_44 = 0;
    piStack_88 = &iStack_44;
    puStack_80 = &uStack_48;
    uVar1 = FUN_140206580(param_5,*param_8,1,1);
    if ((int)uVar1 < 0) {
      if ((uStack_40 ^ (ulonglong)auStack_a8) == DAT_1436b4680) {
        return uVar1;
      }
    }
    else {
      piStack_88 = (int *)auStack_58;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (longlong)(int)param_5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (longlong)param_5._4_4_;
      auStack_58 = vunpcklpd_avx(auVar2,auVar3);
      uStack_78 = param_7;
      lStack_68 = param_9;
      lStack_70 = (longlong)iStack_44 + (longlong)param_8;
      puStack_80 = (undefined4 *)CONCAT44(puStack_80._4_4_,param_6);
      uVar1 = FUN_1409737e0(param_1,(longlong)param_2,param_3,(longlong)param_4);
      if ((uStack_40 ^ (ulonglong)auStack_a8) == DAT_1436b4680) {
        return uVar1;
      }
    }
  }
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

