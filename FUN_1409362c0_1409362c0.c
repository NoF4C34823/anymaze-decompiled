
void FUN_1409362c0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9
                  ,undefined4 param_10,undefined8 param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308d760)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1409363cf;
    if ((param_7 & 0xf) == 6) {
      uVar3 = param_7 & 0x10;
      goto joined_r0x0001409365ee;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1409363cf;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1409363cf;
    if ((param_7 & 0xf) == 6) {
      uVar3 = param_7 & 0x20;
joined_r0x0001409365ee:
      if (uVar3 != 0) goto LAB_1409363cf;
      uVar4 = *param_5;
      uVar2 = *param_8;
      if ((longlong)uVar4 < 1) {
        return;
      }
      if ((longlong)uVar4 < 0x10) {
LAB_14093659b:
        uVar5 = 0;
      }
      else {
        if ((longlong)uVar4 < 0x1d) {
          uVar7 = 0;
          uVar5 = uVar4 & 0xfffffffffffffff0;
        }
        else {
          uVar7 = param_4 & 0x1f;
          if (uVar7 != 0) {
            if ((param_4 & 3) != 0) goto LAB_14093659b;
            uVar7 = 0x20 - uVar7 >> 2;
          }
          if ((longlong)uVar4 < (longlong)(uVar7 + 0x10)) goto LAB_14093659b;
          uVar6 = 0;
          uVar5 = uVar4 - (uVar4 - uVar7 & 0xf);
          if (uVar7 != 0) {
            do {
              *(undefined4 *)(param_4 + uVar6 * 4) = uVar2;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
        }
        do {
          puVar1 = (undefined4 *)(param_4 + uVar7 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1[4] = uVar2;
          puVar1[5] = uVar2;
          puVar1[6] = uVar2;
          puVar1[7] = uVar2;
          puVar1 = (undefined4 *)(param_4 + 0x20 + uVar7 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1[4] = uVar2;
          puVar1[5] = uVar2;
          puVar1[6] = uVar2;
          puVar1[7] = uVar2;
          uVar7 = uVar7 + 0x10;
        } while (uVar7 < uVar5);
      }
      if (uVar4 < uVar5 + 1) {
        return;
      }
      uVar4 = uVar4 - uVar5;
      if ((longlong)uVar4 < 4) {
        uVar7 = 0;
      }
      else {
        uVar6 = 0;
        uVar7 = uVar4 & 0xfffffffffffffffc;
        do {
          puVar1 = (undefined4 *)(param_4 + uVar5 * 4 + uVar6 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          uVar6 = uVar6 + 4;
        } while (uVar6 < uVar7);
      }
      if (uVar4 <= uVar7) {
        return;
      }
      do {
        *(undefined4 *)(param_4 + uVar5 * 4 + uVar7 * 4) = uVar2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
      return;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1409363cf;
    }
  }
  if ((param_7 & 0xf) == 3) {
    uVar4 = param_5[1];
    if ((longlong)uVar4 < 2) {
      if (param_3 < 0) {
        if ((param_7 & 0x10) == 0) {
          param_3 = -param_3;
          if ((param_7 & 0x20) == 0) {
            param_3 = 0;
          }
        }
      }
      else if ((0 < param_3) && ((param_7 & 0x20) == 0)) {
        param_3 = -param_3;
        if ((param_7 & 0x10) == 0) {
          param_3 = 0;
        }
      }
    }
    else {
      if (param_3 < 0) goto LAB_140936560;
      while (((longlong)uVar4 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar4 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_140936560:
          if ((param_7 & 0x10) != 0) goto LAB_1409363cf;
        }
      }
    }
  }
LAB_1409363cf:
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  FUN_1409381e0(uStack_38,param_2,param_3,param_4,&uStack_38,param_6,param_7,param_8,param_9,
                param_10,param_11);
  return;
}

