
undefined8
FUN_140085660(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             undefined4 param_6,undefined8 param_7,undefined4 *param_8,longlong param_9)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  longlong *plStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  int iStack_34;
  ulonglong uStack_30;
  
  uStack_30 = DAT_1436b4680 ^ (ulonglong)auStack_98;
  if ((((param_1 != 0) && (param_3 != 0)) && (param_8 != (undefined4 *)0x0)) && (param_9 != 0)) {
    if ((0 < param_2) && (0 < param_4)) {
      uStack_38 = 0;
      iStack_34 = 0;
      plStack_78 = (longlong *)&iStack_34;
      puStack_70 = &uStack_38;
      uVar1 = FUN_1401927a0(param_5,*param_8,1,1);
      if ((int)uVar1 < 0) {
        if ((uStack_30 ^ (ulonglong)auStack_98) == DAT_1436b4680) {
          return uVar1;
        }
      }
      else {
        lStack_48 = (longlong)(int)param_5;
        lStack_40 = (longlong)param_5._4_4_;
        uStack_68 = param_7;
        lStack_60 = (longlong)iStack_34 + (longlong)param_8;
        plStack_78 = &lStack_48;
        puStack_70 = (undefined4 *)CONCAT44(puStack_70._4_4_,param_6);
        lStack_58 = param_9;
        uVar1 = FUN_140725100(param_1,(longlong)param_2,param_3,(longlong)param_4);
        if ((uStack_30 ^ (ulonglong)auStack_98) == DAT_1436b4680) {
          return uVar1;
        }
      }
      uStack_30 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
    return 0xfffffff0;
  }
  return 0xfffffff8;
}

