
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140015060(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,longlong param_8)

{
  int iVar1;
  undefined4 in_XMM2_Da;
  int iStackX_8;
  int iStackX_c;
  undefined1 auStack_a8 [32];
  int *piStack_88;
  int *piStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  int iStack_48;
  int iStack_44;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1436b4680 ^ (ulonglong)auStack_a8;
  iStack_48 = 0;
  iStack_44 = 0;
  piStack_88 = (int *)CONCAT44(piStack_88._4_4_,param_5);
  piStack_80 = (int *)CONCAT44(piStack_80._4_4_,param_6);
  lStack_78 = param_7;
  lStack_70 = param_8;
  iVar1 = FUN_14016c280(param_1,param_2,param_3,param_4);
  if (iVar1 < 0) {
    if ((uStack_40 ^ (ulonglong)auStack_a8) == _DAT_1436b4680) {
      return;
    }
  }
  else {
    piStack_88 = &iStack_48;
    piStack_80 = &iStack_44;
    FUN_14016d340(param_1,param_2,param_5,param_6);
    lStack_78 = iStack_48 + param_7;
    iStackX_c = (int)((ulonglong)param_1 >> 0x20);
    lStack_60 = (longlong)iStackX_c;
    lStack_70 = iStack_44 + param_8;
    iStackX_8 = (int)param_1;
    lStack_68 = (longlong)iStackX_8;
    piStack_88 = (int *)CONCAT44(piStack_88._4_4_,param_5);
    piStack_80 = (int *)CONCAT44(piStack_80._4_4_,param_6);
    FUN_140191380(&lStack_68,param_2,in_XMM2_Da,param_4);
    if ((uStack_40 ^ (ulonglong)auStack_a8) == _DAT_1436b4680) {
      return;
    }
  }
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

