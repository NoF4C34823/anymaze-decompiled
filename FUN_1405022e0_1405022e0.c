
undefined8
FUN_1405022e0(undefined8 param_1,ulonglong param_2,int param_3,int param_4,int *param_5,int *param_6
             )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iStackX_8;
  int iStackX_c;
  
  uVar4 = (uint)param_2 | 1;
  uVar3 = (uint)(param_2 >> 0x20) | 1;
  if (param_5 != (int *)0x0) {
    *param_5 = (uVar4 + 1) * uVar3 * 4 + 0x88 + uVar4 * uVar3;
  }
  if (param_6 != (int *)0x0) {
    iStackX_8 = (int)param_1;
    iStackX_c = (int)((ulonglong)param_1 >> 0x20);
    if (((int)uVar4 < iStackX_8) && ((int)uVar3 < iStackX_c)) {
      iVar2 = uVar3 - ((int)(uVar3 - 1) >> 1);
      iVar1 = uVar4 - ((int)(uVar4 - 1) >> 1);
      iVar5 = 0;
      if (0 < iVar2 + -1) {
        iVar5 = ((uVar4 - 1) + iStackX_8) * ((uVar3 - 2) + iVar2);
      }
      if ((0 < iVar1 + -1) &&
         (iVar1 = ((uVar3 - 1) + iStackX_c) * ((uVar4 - 2) + iVar1), iVar5 < iVar1)) {
        iVar5 = iVar1;
      }
    }
    else {
      iVar5 = ((uVar4 - 1) + iStackX_8) * ((uVar3 - 1) + iStackX_c);
    }
    if (param_3 != 1) {
      if ((param_3 == 7) || (param_3 == 5)) {
        iVar5 = iVar5 * 2;
      }
      else if (param_3 == 0xd) {
        iVar5 = iVar5 * 4;
      }
    }
    iVar1 = FUN_140d036c0(param_1,param_2 | 0x100000001,param_3,param_4);
    *param_6 = (param_4 * iVar5 + 0x1fU & 0xffffffe0) + 0x40 + iVar1;
  }
  return 0;
}

