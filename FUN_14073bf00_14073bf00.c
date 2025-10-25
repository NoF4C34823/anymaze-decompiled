
void FUN_14073bf00(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  float *pfVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308bf20)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_14073bff0;
    if ((param_7 & 0xf) != 6) {
      if ((param_7 & 0xf) == 1) {
        if ((param_7 & 0x10) == 0) {
          param_3 = 0;
        }
        goto LAB_14073bff0;
      }
      goto LAB_14073bf85;
    }
    uVar3 = param_7 & 0x10;
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_14073bff0;
    if ((param_7 & 0xf) != 6) {
      if ((param_7 & 0xf) == 1) {
        if ((param_7 & 0x20) == 0) {
          param_3 = param_5[1] - 1;
        }
        goto LAB_14073bff0;
      }
LAB_14073bf85:
      if ((param_7 & 0xf) == 3) {
        uVar2 = param_5[1];
        if ((longlong)uVar2 < 2) {
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
          if (param_3 < 0) goto LAB_14073c120;
          while (((longlong)uVar2 <= param_3 && ((param_7 & 0x20) == 0))) {
            for (param_3 = (uVar2 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_14073c120:
              if ((param_7 & 0x10) != 0) goto LAB_14073bff0;
            }
          }
        }
      }
      goto LAB_14073bff0;
    }
    uVar3 = param_7 & 0x20;
  }
  if (uVar3 != 0) {
LAB_14073bff0:
    uStack_28 = (undefined4)*param_5;
    uStack_24 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_20 = (undefined4)param_5[1];
    uStack_1c = *(undefined4 *)((longlong)param_5 + 0xc);
    FUN_140740d00(uStack_28,param_2,param_3,param_4,&uStack_28,param_6,param_7,param_8,param_9,
                  param_10,param_11);
    return;
  }
  uVar2 = *param_5;
  fVar7 = (float)*param_8;
  if ((longlong)uVar2 < 1) {
    return;
  }
  if (7 < (longlong)uVar2) {
    uVar6 = param_4 & 0xf;
    if (uVar6 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14073c158;
      uVar6 = 0x10 - uVar6 >> 2;
    }
    if ((longlong)(uVar6 + 8) <= (longlong)uVar2) {
      uVar5 = 0;
      uVar4 = uVar2 - (uVar2 - uVar6 & 7);
      if (uVar6 != 0) {
        do {
          *(float *)(param_4 + uVar5 * 4) = fVar7;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      do {
        pfVar1 = (float *)(param_4 + uVar6 * 4);
        *pfVar1 = fVar7;
        pfVar1[1] = fVar7;
        pfVar1[2] = fVar7;
        pfVar1[3] = fVar7;
        pfVar1 = (float *)(param_4 + 0x10 + uVar6 * 4);
        *pfVar1 = fVar7;
        pfVar1[1] = fVar7;
        pfVar1[2] = fVar7;
        pfVar1[3] = fVar7;
        uVar6 = uVar6 + 8;
      } while (uVar6 < uVar4);
      goto joined_r0x00014073c0f7;
    }
  }
LAB_14073c158:
  uVar4 = 0;
joined_r0x00014073c0f7:
  for (; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    *(float *)(param_4 + uVar4 * 4) = fVar7;
  }
  return;
}

