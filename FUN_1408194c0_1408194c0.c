
void FUN_1408194c0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308c6e0)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1408195cf;
    if ((param_7 & 0xf) == 6) {
      uVar1 = param_7 & 0x10;
      goto joined_r0x0001408197c0;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1408195cf;
    }
LAB_140819563:
    if ((param_7 & 0xf) == 3) {
      uVar6 = param_5[1];
      if ((longlong)uVar6 < 2) {
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
        if (param_3 < 0) goto LAB_140819740;
        while (((longlong)uVar6 <= param_3 && ((param_7 & 0x20) == 0))) {
          for (param_3 = (uVar6 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_140819740:
            if ((param_7 & 0x10) != 0) goto LAB_1408195cf;
          }
        }
      }
    }
LAB_1408195cf:
    uStack_38 = *param_5;
    uStack_30 = param_5[1];
    FUN_14081f220(uStack_38,param_2,param_3,param_4,&uStack_38,param_6,param_7,param_8,param_9,
                  param_10,param_11);
    return;
  }
  if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1408195cf;
  if ((param_7 & 0xf) != 6) {
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1408195cf;
    }
    goto LAB_140819563;
  }
  uVar1 = param_7 & 0x20;
joined_r0x0001408197c0:
  if (uVar1 != 0) goto LAB_1408195cf;
  uVar6 = *param_5;
  auVar7._0_4_ = (float)*param_8;
  auVar7._4_8_ = SUB128(ZEXT812(0),4);
  auVar7._12_4_ = 0;
  if ((longlong)uVar6 < 1) {
    return;
  }
  if ((longlong)uVar6 < 0x10) {
LAB_140819777:
    uVar3 = 0;
    if (uVar6 == 0) {
      return;
    }
  }
  else {
    uVar5 = param_4 & 0x1f;
    if (uVar5 != 0) {
      if ((param_4 & 3) != 0) goto LAB_140819777;
      uVar5 = 0x20 - uVar5 >> 2;
    }
    if ((longlong)uVar6 < (longlong)(uVar5 + 0x10)) goto LAB_140819777;
    uVar4 = 0;
    uVar3 = uVar6 - (uVar6 - uVar5 & 0xf);
    if (uVar5 != 0) {
      do {
        *(float *)(param_4 + uVar4 * 4) = auVar7._0_4_;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    auVar2 = vshufps_avx(auVar7,auVar7,0);
    auVar8._16_16_ = auVar2;
    auVar8._0_16_ = auVar2;
    do {
      *(undefined1 (*) [32])(param_4 + uVar5 * 4) = auVar8;
      *(undefined1 (*) [32])(param_4 + 0x20 + uVar5 * 4) = auVar8;
      uVar5 = uVar5 + 0x10;
    } while (uVar5 < uVar3);
    if (uVar6 < uVar3 + 1) {
      return;
    }
    uVar6 = uVar6 - uVar3;
    if (3 < (longlong)uVar6) {
      uVar4 = 0;
      uVar5 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined1 (*) [16])(param_4 + uVar3 * 4 + uVar4 * 4) = auVar2;
        uVar4 = uVar4 + 4;
      } while (uVar4 < uVar5);
      goto LAB_14081970f;
    }
  }
  uVar5 = 0;
LAB_14081970f:
  if (uVar6 <= uVar5) {
    return;
  }
  do {
    *(float *)(param_4 + uVar3 * 4 + uVar5 * 4) = auVar7._0_4_;
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar6);
  return;
}

