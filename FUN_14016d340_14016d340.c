
undefined8
FUN_14016d340(ulonglong param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int aiStack_30 [4];
  
  iVar7 = (int)param_1;
  uVar4 = 0;
  if ((param_6 == (int *)0x0) || (param_5 == (int *)0x0)) {
    return 0xfffffff8;
  }
  uVar6 = (uint)(param_1 >> 0x20);
  if (((int)uVar6 < 1) || (iVar7 < 1)) {
    return 0xfffffffa;
  }
  if ((param_2 < 3) || ((param_2 & 1) == 0)) {
    return 0xfffffffb;
  }
  if ((((param_3 & 0xfffffffb) != 1) && (param_3 != 7)) && (param_3 != 0xd)) {
    return 0xffffffc5;
  }
  if ((param_4 & 0xfffffffd) != 1) {
    return 0xffffffd1;
  }
  uVar3 = param_1 >> 0x20;
  if (param_2 <= uVar6) {
    uVar3 = (ulonglong)param_2;
  }
  iVar1 = (int)uVar3;
  if (param_3 == 0xd) {
    uVar6 = (iVar7 + param_2) * param_4 + 7 & 0xfffffff8;
    aiStack_30[0] = (param_2 + iVar1) * 4 * uVar6;
    *param_6 = param_2 * 4 * uVar6 + 0x60 + aiStack_30[0];
    if (param_4 == 1) {
      FUN_140ce4980(CONCAT44(iVar1,iVar7),param_2);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce49c0(CONCAT44(iVar1,iVar7),param_2);
    }
    else {
      FUN_140ce48e0(uVar3 << 0x20 | param_1 & 0xffffffff,param_2,aiStack_30);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce4940(CONCAT44(iVar1,iVar7),param_2);
    }
    *param_6 = *param_6 + aiStack_30[0] + 0x40 + (iVar1 + param_2) * 8;
    *param_5 = (param_2 + 3 & 0xfffffffc) * 4 + 0x20;
  }
  else if (((param_3 & 0xfffffffb) == 1) || (param_3 == 7)) {
    uVar5 = (iVar7 + param_2) * param_4 + 7 & 0xfffffff8;
    iVar2 = (iVar1 + param_2) * uVar5;
    aiStack_30[0] = iVar2 * 2;
    *param_6 = iVar2 * 2 + 0x40 + (uVar5 * (param_2 >> 1) * 2 + 0x10) * 2;
    if (param_3 == 1) {
      if (param_4 == 1) {
        FUN_140a3b340(CONCAT44(iVar1,iVar7),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140a3b3a0(CONCAT44(iVar1,iVar7),param_2);
      }
      else {
        FUN_140ce4560(CONCAT44(iVar1,iVar7),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140ce45c0(CONCAT44(iVar1,iVar7),param_2);
      }
    }
    else if (param_3 == 7) {
      if (param_4 == 1) {
        FUN_140ce4780(CONCAT44(iVar1,iVar7),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140ce47e0(CONCAT44(iVar1,iVar7),param_2);
      }
      else {
        FUN_140ce4620(CONCAT44(iVar1,iVar7),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140ce4680(CONCAT44(iVar1,iVar7),param_2);
      }
    }
    else if (param_4 == 1) {
      FUN_140ce4840(CONCAT44(iVar1,iVar7),param_2);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce48a0(CONCAT44(iVar1,iVar7),param_2);
    }
    else {
      FUN_140ce46e0(CONCAT44(iVar1,iVar7),param_2);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce4740(CONCAT44(iVar1,iVar7),param_2);
    }
    *param_6 = *param_6 + aiStack_30[0] + 0x40 + (uVar6 + param_2) * 8;
    *param_5 = (param_2 + 3 & 0xfffffffc) * 2 + 0x24;
  }
  else {
    uVar4 = 0xffffffc5;
  }
  return uVar4;
}

