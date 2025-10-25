
void FUN_1400ec360(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&UNK_143086de0 + (longlong)param_6 * 8))
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1400ec46f;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x10;
      goto joined_r0x0001400ec68e;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1400ec46f;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1400ec46f;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x20;
joined_r0x0001400ec68e:
      if (uVar2 != 0) goto LAB_1400ec46f;
      uVar3 = *param_5;
      fVar7 = (float)(int)*param_8;
      if ((longlong)uVar3 < 1) {
        return;
      }
      if ((longlong)uVar3 < 0x10) {
LAB_1400ec63b:
        uVar4 = 0;
      }
      else {
        if ((longlong)uVar3 < 0x1d) {
          uVar6 = 0;
          uVar4 = uVar3 & 0xfffffffffffffff0;
        }
        else {
          uVar6 = param_4 & 0x1f;
          if (uVar6 != 0) {
            if ((param_4 & 3) != 0) goto LAB_1400ec63b;
            uVar6 = 0x20 - uVar6 >> 2;
          }
          if ((longlong)uVar3 < (longlong)(uVar6 + 0x10)) goto LAB_1400ec63b;
          uVar5 = 0;
          uVar4 = uVar3 - (uVar3 - uVar6 & 0xf);
          if (uVar6 != 0) {
            do {
              *(float *)(param_4 + uVar5 * 4) = fVar7;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
          }
        }
        do {
          pfVar1 = (float *)(param_4 + uVar6 * 4);
          *pfVar1 = fVar7;
          pfVar1[1] = fVar7;
          pfVar1[2] = fVar7;
          pfVar1[3] = fVar7;
          pfVar1[4] = fVar7;
          pfVar1[5] = fVar7;
          pfVar1[6] = fVar7;
          pfVar1[7] = fVar7;
          pfVar1 = (float *)(param_4 + 0x20 + uVar6 * 4);
          *pfVar1 = fVar7;
          pfVar1[1] = fVar7;
          pfVar1[2] = fVar7;
          pfVar1[3] = fVar7;
          pfVar1[4] = fVar7;
          pfVar1[5] = fVar7;
          pfVar1[6] = fVar7;
          pfVar1[7] = fVar7;
          uVar6 = uVar6 + 0x10;
        } while (uVar6 < uVar4);
      }
      if (uVar3 < uVar4 + 1) {
        return;
      }
      uVar3 = uVar3 - uVar4;
      if ((longlong)uVar3 < 4) {
        uVar6 = 0;
      }
      else {
        uVar5 = 0;
        uVar6 = uVar3 & 0xfffffffffffffffc;
        do {
          pfVar1 = (float *)(param_4 + uVar4 * 4 + uVar5 * 4);
          *pfVar1 = fVar7;
          pfVar1[1] = fVar7;
          pfVar1[2] = fVar7;
          pfVar1[3] = fVar7;
          uVar5 = uVar5 + 4;
        } while (uVar5 < uVar6);
      }
      if (uVar3 <= uVar6) {
        return;
      }
      do {
        *(float *)(param_4 + uVar4 * 4 + uVar6 * 4) = fVar7;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
      return;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1400ec46f;
    }
  }
  if ((param_7 & 0xf) == 3) {
    uVar3 = param_5[1];
    if ((longlong)uVar3 < 2) {
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
      if (param_3 < 0) goto LAB_1400ec600;
      while (((longlong)uVar3 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar3 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1400ec600:
          if ((param_7 & 0x10) != 0) goto LAB_1400ec46f;
        }
      }
    }
  }
LAB_1400ec46f:
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  FUN_1400f9de0(uStack_38,param_2,param_3,param_4,&uStack_38,param_6,param_7,param_8,param_9,
                param_10,param_11);
  return;
}

