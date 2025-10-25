
undefined8
FUN_14041dd00(undefined8 param_1,ulonglong param_2,int param_3,int param_4,int *param_5,int *param_6
             )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iStackX_8;
  int iStackX_c;
  
  uVar3 = (uint)param_2 | 1;
  uVar2 = (uint)(param_2 >> 0x20) | 1;
  if (param_5 != (int *)0x0) {
    *param_5 = uVar3 * uVar2 + 0x88 + (uVar3 + 1) * uVar2 * 4;
  }
  if (param_6 != (int *)0x0) {
    iStackX_8 = (int)param_1;
    iStackX_c = (int)((ulonglong)param_1 >> 0x20);
    if (((int)uVar3 < iStackX_8) && ((int)uVar2 < iStackX_c)) {
      iVar1 = (uVar2 - ((int)(uVar2 - 1) >> 1)) + -1;
      iVar4 = 0;
      if (0 < iVar1) {
        iVar4 = (iStackX_8 + uVar3 + -1) * (uVar2 + iVar1 + -1);
      }
      iVar1 = (uVar3 - ((int)(uVar3 - 1) >> 1)) + -1;
      if ((0 < iVar1) && (iVar1 = (uVar2 + iStackX_c + -1) * (uVar3 + iVar1 + -1), iVar4 < iVar1)) {
        iVar4 = iVar1;
      }
    }
    else {
      iVar4 = (uVar3 + iStackX_8 + -1) * (uVar2 + iStackX_c + -1);
    }
    if (param_3 != 1) {
      if ((param_3 == 7) || (param_3 == 5)) {
        iVar4 = iVar4 * 2;
      }
      else if (param_3 == 0xd) {
        iVar4 = iVar4 * 4;
      }
    }
    iVar1 = FUN_140cf9300(param_1,param_2 | 0x100000001,param_3,param_4);
    *param_6 = (param_4 * iVar4 + 0x1fU & 0xffffffe0) + iVar1 + 0x40;
  }
  return 0;
}

