
ulonglong FUN_140144280(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       longlong *param_5,longlong *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iStackX_8;
  int iStackX_c;
  undefined1 auStack_b8 [32];
  longlong *plStack_98;
  longlong *plStack_90;
  undefined1 auStack_88 [16];
  longlong lStack_78;
  undefined8 uStack_70;
  longlong alStack_68 [2];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_b8;
  lStack_78 = 0;
  uStack_70 = 0;
  alStack_68[0] = 0;
  plStack_98 = param_5;
  plStack_90 = param_6;
  uVar1 = FUN_1401dd420(param_1,param_2,param_3,param_4);
  if ((int)uVar1 < 0) {
    if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
      return (ulonglong)uVar1;
    }
  }
  else {
    iStackX_8 = (int)param_1;
    uStack_58 = (ulonglong)iStackX_8;
    iStackX_c = (int)((ulonglong)param_1 >> 0x20);
    uStack_50 = (ulonglong)iStackX_c;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_58;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack_50;
    auStack_88 = vunpcklpd_avx(auVar5,auVar6);
    plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
    plStack_90 = &lStack_78;
    uVar2 = FUN_140bc1ba0(auStack_88,param_2,param_3,0xf0);
    if ((int)uVar2 < 0) {
      if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
        return uVar2;
      }
    }
    else {
      auStack_88._8_8_ = uStack_50;
      auStack_88._0_8_ = uStack_58;
      plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
      plStack_90 = &lStack_78;
      uVar2 = FUN_140bc1ba0(auStack_88,param_2,param_3,6);
      if ((int)uVar2 < 0) {
        if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
          return uVar2;
        }
      }
      else {
        auStack_88._8_8_ = uStack_50;
        auStack_88._0_8_ = uStack_58;
        plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
        plStack_90 = &lStack_78;
        uVar2 = FUN_140bc1ba0(auStack_88,param_2,param_3,1);
        if ((int)uVar2 < 0) {
          if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
            return uVar2;
          }
        }
        else {
          auStack_88._8_8_ = uStack_50;
          auStack_88._0_8_ = uStack_58;
          plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,param_4);
          plStack_90 = &lStack_78;
          uVar2 = FUN_140bc1ba0(auStack_88,param_2,param_3,3);
          if ((int)uVar2 < 0) {
            if ((uStack_48 ^ (ulonglong)auStack_b8) == DAT_1436b4680) {
              return uVar2;
            }
          }
          else {
            plStack_98 = alStack_68;
            uVar2 = FUN_140be99e0(param_2,param_3,param_4,&uStack_70);
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

