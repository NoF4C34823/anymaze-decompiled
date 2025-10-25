
undefined8
FUN_1401927a0(ulonglong param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int aiStack_30 [4];
  
  iVar6 = (int)param_1;
  uVar3 = 0;
  if ((param_6 == (int *)0x0) || (param_5 == (int *)0x0)) {
    return 0xfffffff8;
  }
  uVar5 = (uint)(param_1 >> 0x20);
  if (((int)uVar5 < 1) || (iVar6 < 1)) {
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
  uVar2 = param_1 >> 0x20;
  if (param_2 <= uVar5) {
    uVar2 = (ulonglong)param_2;
  }
  iVar1 = (int)uVar2;
  if (param_3 == 0xd) {
    uVar5 = (iVar6 + param_2) * param_4 + 7 & 0xfffffff8;
    aiStack_30[0] = (param_2 + iVar1) * 4 * uVar5;
    *param_6 = ((param_2 * 4 * uVar5 >> 1) + 0x10) * 2 + aiStack_30[0] + 0x40;
    if (param_4 == 1) {
      FUN_140ce4e20(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
      *param_6 = *param_6 + aiStack_30[0] + 0x20;
      FUN_140ce4e60(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
    }
    else {
      FUN_140ce4d80(uVar2 << 0x20 | param_1 & 0xffffffff,param_2,aiStack_30);
      *param_6 = *param_6 + aiStack_30[0] + 0x20;
      FUN_140ce4de0(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
    }
    *param_6 = aiStack_30[0] + *param_6 + (iVar1 + param_2) * 8 + 0x40;
    *param_5 = (param_2 + 3 & 0xfffffffc) * 4 + 0x20;
  }
  else if (((param_3 & 0xfffffffb) == 1) || (param_3 == 7)) {
    uVar4 = (iVar6 + param_2) * param_4 + 7 & 0xfffffff8;
    aiStack_30[0] = (iVar1 + param_2) * uVar4 * 2;
    *param_6 = ((param_2 >> 1) * uVar4 * 2 + 0x10) * 2 + aiStack_30[0] + 0x40;
    if (param_3 == 1) {
      if (param_4 == 1) {
        FUN_140a59e00(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
        *param_6 = *param_6 + aiStack_30[0] + 0x20;
        FUN_140a59e60(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
      }
      else {
        FUN_140ce4a00(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
        *param_6 = *param_6 + aiStack_30[0] + 0x20;
        FUN_140ce4a60(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
      }
    }
    else if (param_3 == 7) {
      if (param_4 == 1) {
        FUN_140ce4c20(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
        *param_6 = *param_6 + aiStack_30[0] + 0x20;
        FUN_140ce4c80(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
      }
      else {
        FUN_140ce4ac0(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
        *param_6 = *param_6 + aiStack_30[0] + 0x20;
        FUN_140ce4b20(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
      }
    }
    else if (param_4 == 1) {
      FUN_140ce4ce0(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
      *param_6 = *param_6 + aiStack_30[0] + 0x20;
      FUN_140ce4d40(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
    }
    else {
      FUN_140ce4b80(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
      *param_6 = *param_6 + aiStack_30[0] + 0x20;
      FUN_140ce4be0(CONCAT44(iVar1,iVar6),param_2,aiStack_30);
    }
    *param_6 = aiStack_30[0] + *param_6 + (uVar5 + param_2) * 8 + 0x40;
    *param_5 = (param_2 + 3 & 0xfffffffc) * 2 + 0x24;
  }
  else {
    uVar3 = 0xffffffc5;
  }
  return uVar3;
}

