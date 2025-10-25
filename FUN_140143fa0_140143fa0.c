
ulonglong FUN_140143fa0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       longlong *param_5,longlong *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iStackX_8;
  int iStackX_c;
  undefined1 auStack_b8 [32];
  longlong *plStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong alStack_68 [2];
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_b8;
  lStack_78 = 0;
  uStack_70 = 0;
  alStack_68[0] = 0;
  plStack_98 = param_5;
  plStack_90 = param_6;
  uVar1 = FUN_1401b7560(param_1,param_2,param_3,param_4);
  if ((int)uVar1 < 0) {
    if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
      return (ulonglong)uVar1;
    }
  }
  else {
    iStackX_8 = (int)param_1;
    lStack_88 = (longlong)iStackX_8;
    iStackX_c = (int)((ulonglong)param_1 >> 0x20);
    lStack_80 = (longlong)iStackX_c;
    plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
    plStack_90 = &lStack_78;
    lStack_58 = lStack_88;
    lStack_50 = lStack_80;
    uVar2 = FUN_140b783a0(&lStack_88,param_2,param_3,0xf0);
    if ((int)uVar2 < 0) {
      if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
        return uVar2;
      }
    }
    else {
      lStack_88 = lStack_58;
      lStack_80 = lStack_50;
      plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
      plStack_90 = &lStack_78;
      uVar2 = FUN_140b783a0(&lStack_88,param_2,param_3,6);
      if ((int)uVar2 < 0) {
        if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
          return uVar2;
        }
      }
      else {
        lStack_88 = lStack_58;
        lStack_80 = lStack_50;
        plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
        plStack_90 = &lStack_78;
        uVar2 = FUN_140b783a0(&lStack_88,param_2,param_3,1);
        if ((int)uVar2 < 0) {
          if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
            return uVar2;
          }
        }
        else {
          lStack_88 = lStack_58;
          lStack_80 = lStack_50;
          plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
          plStack_90 = &lStack_78;
          uVar2 = FUN_140b783a0(&lStack_88,param_2,param_3,3);
          if ((int)uVar2 < 0) {
            if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
              return uVar2;
            }
          }
          else {
            plStack_98 = alStack_68;
            uVar2 = FUN_140b9cfe0(param_2,param_3,param_4,&uStack_70);
            if (-1 < (int)uVar2) {
              uVar2 = (ulonglong)uVar1;
              iVar3 = (int)lStack_78;
              if (lStack_78 < (int)*param_6) {
                iVar3 = (int)*param_6;
              }
              iVar4 = (int)alStack_68[0];
              if (alStack_68[0] < iVar3) {
                iVar4 = iVar3;
              }
              *(int *)param_6 = iVar4;
              *(int *)param_5 = (int)*param_5 + (int)uStack_70;
            }
            if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
              return uVar2;
            }
          }
        }
      }
    }
  }
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

