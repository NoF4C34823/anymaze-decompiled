
void FUN_1407a81e0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9
                  ,undefined4 param_10,undefined8 param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308c340)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1407a82d0;
    if ((param_7 & 0xf) != 6) {
      if ((param_7 & 0xf) == 1) {
        if ((param_7 & 0x10) == 0) {
          param_3 = 0;
        }
        goto LAB_1407a82d0;
      }
      goto LAB_1407a8265;
    }
    uVar4 = param_7 & 0x10;
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1407a82d0;
    if ((param_7 & 0xf) != 6) {
      if ((param_7 & 0xf) == 1) {
        if ((param_7 & 0x20) == 0) {
          param_3 = param_5[1] - 1;
        }
        goto LAB_1407a82d0;
      }
LAB_1407a8265:
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
          if (param_3 < 0) goto LAB_1407a8400;
          while (((longlong)uVar3 <= param_3 && ((param_7 & 0x20) == 0))) {
            for (param_3 = (uVar3 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1407a8400:
              if ((param_7 & 0x10) != 0) goto LAB_1407a82d0;
            }
          }
        }
      }
      goto LAB_1407a82d0;
    }
    uVar4 = param_7 & 0x20;
  }
  if (uVar4 != 0) {
LAB_1407a82d0:
    uStack_28 = (undefined4)*param_5;
    uStack_24 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_20 = (undefined4)param_5[1];
    uStack_1c = *(undefined4 *)((longlong)param_5 + 0xc);
    FUN_1407a9d00(uStack_28,param_2,param_3,param_4,&uStack_28,param_6,param_7,param_8,param_9,
                  param_10,param_11);
    return;
  }
  uVar3 = *param_5;
  uVar2 = *param_8;
  if ((longlong)uVar3 < 1) {
    return;
  }
  if (7 < (longlong)uVar3) {
    uVar7 = param_4 & 0xf;
    if (uVar7 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1407a8438;
      uVar7 = 0x10 - uVar7 >> 2;
    }
    if ((longlong)(uVar7 + 8) <= (longlong)uVar3) {
      uVar6 = 0;
      uVar5 = uVar3 - (uVar3 - uVar7 & 7);
      if (uVar7 != 0) {
        do {
          *(undefined4 *)(param_4 + uVar6 * 4) = uVar2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      do {
        puVar1 = (undefined4 *)(param_4 + uVar7 * 4);
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = (undefined4 *)(param_4 + 0x10 + uVar7 * 4);
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        uVar7 = uVar7 + 8;
      } while (uVar7 < uVar5);
      goto joined_r0x0001407a83d7;
    }
  }
LAB_1407a8438:
  uVar5 = 0;
joined_r0x0001407a83d7:
  for (; uVar5 < uVar3; uVar5 = uVar5 + 1) {
    *(undefined4 *)(param_4 + uVar5 * 4) = uVar2;
  }
  return;
}

