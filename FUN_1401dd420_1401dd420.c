
undefined8
FUN_1401dd420(ulonglong param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int aiStack_30 [4];
  
  iVar6 = (int)param_1;
  uVar7 = 0;
  if ((param_6 == (int *)0x0) || (param_5 == (int *)0x0)) {
    return 0xfffffff8;
  }
  uVar3 = param_1 >> 0x20;
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
  if (param_2 <= uVar5) {
    uVar3 = (ulonglong)param_2;
  }
  iVar1 = (int)uVar3;
  if (param_3 == 0xd) {
    uVar5 = (iVar6 + param_2) * param_4 + 7 & 0xfffffff8;
    aiStack_30[0] = (param_2 + iVar1) * 4 * uVar5;
    *param_6 = param_2 * 4 * uVar5 + 0x60 + aiStack_30[0];
    if (param_4 == 1) {
      FUN_140ce57c0(CONCAT44(iVar1,iVar6),param_2);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce5820(CONCAT44(iVar1,iVar6),param_2);
    }
    else {
      FUN_140ce5720(uVar3 << 0x20 | param_1 & 0xffffffff,param_2,aiStack_30);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce5780(CONCAT44(iVar1,iVar6),param_2);
    }
    *param_6 = *param_6 + aiStack_30[0] + 0x40 + (iVar1 + param_2) * 8;
    *param_5 = param_2 * 0x20 + 0x20;
  }
  else if (((param_3 & 0xfffffffb) == 1) || (param_3 == 7)) {
    uVar4 = (iVar6 + param_2) * param_4 + 7 & 0xfffffff8;
    iVar2 = (iVar1 + param_2) * uVar4;
    aiStack_30[0] = iVar2 * 2;
    *param_6 = iVar2 * 2 + 0x40 + (uVar4 * (param_2 >> 1) * 2 + 0x10) * 2;
    if (param_3 == 1) {
      if (param_4 == 1) {
        FUN_140a8ff00(CONCAT44(iVar1,iVar6),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140a8ff60(CONCAT44(iVar1,iVar6),param_2);
      }
      else {
        FUN_140ce5360(CONCAT44(iVar1,iVar6),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140ce53c0(CONCAT44(iVar1,iVar6),param_2);
      }
    }
    else if (param_3 == 7) {
      if (param_4 == 1) {
        FUN_140ce55a0(CONCAT44(iVar1,iVar6),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140ce5600(CONCAT44(iVar1,iVar6),param_2);
      }
      else {
        FUN_140ce5420(CONCAT44(iVar1,iVar6),param_2);
        *param_6 = *param_6 + 0x20 + aiStack_30[0];
        FUN_140ce5480(CONCAT44(iVar1,iVar6),param_2);
      }
    }
    else if (param_4 == 1) {
      FUN_140ce5660(CONCAT44(iVar1,iVar6),param_2);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce56c0(CONCAT44(iVar1,iVar6),param_2);
    }
    else {
      FUN_140ce54e0(CONCAT44(iVar1,iVar6),param_2);
      *param_6 = *param_6 + 0x20 + aiStack_30[0];
      FUN_140ce5540(CONCAT44(iVar1,iVar6),param_2);
    }
    *param_6 = *param_6 + aiStack_30[0] + 0x40 + (uVar5 + param_2) * 8;
    *param_5 = param_2 * 0x10 + 0x24;
  }
  else {
    uVar7 = 0xffffffc5;
  }
  return uVar7;
}

